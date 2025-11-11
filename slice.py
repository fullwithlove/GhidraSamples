import re, os, sys, json, argparse, hashlib, glob
from typing import List, Tuple, Dict, Any

CFG = {
    "WINDOW_LINES": 100,
    "PER_UNIT_CAP": 40,
    "PER_TRIGGER_CAP": 8,
    "TOTAL_CAP": 8000,
    "SNIPPET_CHARS": 120,
    "DEDUP_SAME": 0.65,
    "DEDUP_DIFF": 0.98,
    "SKIP_MID_WHEN_STRONG_HIGH": False,
    "MID_MIN_WHEN_STRONG_HIGH": 8,
    "BASE64_MIN_LEN": 120,
    "HEX_ARRAY_MIN_BYTES": 64,
    "MERGE_DIST": 8,
    "INDIRECT_CONTEXT_ONLY": True,
    "CONTEXT_RADIUS": 120,
}

CTX_TOKENS = re.compile(
    r"\b(VirtualAlloc|VirtualProtect|VirtualFree|LoadLibraryA|LoadLibraryW|GetProcAddress|"
    r"CreateRemoteThread|WriteProcessMemory|ReadProcessMemory|CreateProcessA|CreateProcessW|"
    r"WinExec|ShellExecuteA|ShellExecuteW|Reg(Set|Create|Open)|Nt(Query|Allocate|Protect)|"
    r"MapViewOfFile|UnmapViewOfFile|Crypt(Decrypt|Encrypt|AcquireContext)|"
    r"CreateFile(A|W)|SetFilePointer|SetFilePointerEx|ReadFile|WriteFile)\b"
)

BASE64_BLOB_RX = re.compile(r"[A-Za-z0-9+/]{%d,}={0,2}" % CFG["BASE64_MIN_LEN"])
HEX_ARRAY_VAL = r"(?:0x[0-9a-fA-F]{1,2}|\d{1,3})"
HEX_ARRAY_RX = re.compile(r"\{\s*" + HEX_ARRAY_VAL + r"(?:\s*,\s*" + HEX_ARRAY_VAL + r"){%d,}\s*,?\s*\}" % (CFG["HEX_ARRAY_MIN_BYTES"] - 1), re.S)
INDIRECT_CALL_RX = re.compile(r"\(\s*code\s*\*\s*\)|\(\s*\*\s*[A-Za-z_]\w*\s*\)\s*\(|\(\*DAT_[0-9A-Fa-f]+\)\s*\(", re.S)
ANTI_DEBUG_RX = re.compile(r"\b(IsDebuggerPresent|CheckRemoteDebuggerPresent|UnhandledExceptionFilter|SetUnhandledExceptionFilter|OutputDebugStringA|OutputDebugStringW|NtQueryInformationProcess)\b")
REG_RUN_RX = re.compile(r"Software\\\\Microsoft\\\\Windows\\\\CurrentVersion\\\\Run", re.I)
SERVICE_STR_RX = re.compile(r"\b(CreateServiceA|CreateServiceW|OpenSCManagerA|OpenSCManagerW|StartServiceA|StartServiceW)\b")
TASKS_RX = re.compile(r"\b(SchTasks|ITaskService|ITaskFolder|IRegisteredTask|IScheduledWorkItem|ITask)\b", re.I)
INLINE_SYSCALL_RX = re.compile(r"(?:\b__emit\b\s*\(?\s*0x0f\s*,\s*0x05|\bint\s+0x2e\b|\bsysenter\b|\bsyscall\b)", re.I)
MZ_HDR_RX = re.compile(r"This program cannot be run in DOS mode")
PE_EMBED_RX = re.compile(r"PE\x00\x00")

SEQ_RX = re.compile(r'(?:L?")(?:(?:\\.|[^"\\]))*"(?:\s*L?")(?:(?:\\.|[^"\\]))*"(?:\s*L?")*(?:(?:\\.|[^"\\]))*"', re.S)
LIT_RX = re.compile(r'L?"(?:(?:\\.|[^"\\]))*"', re.S)

def _read(path: str) -> str:
    with open(path, "r", encoding="utf-8", errors="ignore") as f:
        return f.read()

def _lines(text: str) -> List[str]:
    return text.splitlines()

def _center_from_index(text: str, idx: int) -> int:
    return text.count("\n", 0, idx) + 1

def _window(lines: List[str], center_line: int, win: int) -> Tuple[int, int, List[Tuple[int, str]]]:
    n = len(lines)
    half = win // 2
    start = center_line - half
    if start < 1: start = 1
    end = start + win - 1
    if end > n: end = n
    out = []
    for i in range(start - 1, end):
        out.append((i + 1, lines[i]))
    return start, end, out

def _concat_c_strings(text: str) -> List[Tuple[int, str]]:
    out = []
    for m in SEQ_RX.finditer(text):
        seq = m.group(0)
        parts = []
        for lit in LIT_RX.finditer(seq):
            s = lit.group(0)[1:-1]
            s = bytes(s, "utf-8").decode("unicode_escape")
            parts.append(s)
        if parts:
            out.append((m.start(), "".join(parts)))
    return out

def _find_b64_concat_mapped(text: str) -> List[Tuple[int, int, str]]:
    res = []
    for start_idx, combined in _concat_c_strings(text):
        for m in re.finditer(r"[A-Za-z0-9+/]{%d,}={0,2}" % CFG["BASE64_MIN_LEN"], combined):
            off = m.start()
            frag = combined[m.start():m.end()]
            res.append((start_idx + off, start_idx + off + len(frag), frag))
    return res

def _collect_matches(text: str) -> Tuple[Dict[str, List[Tuple[int, int, str]]], Dict[str, List[Tuple[int, int, str]]]]:
    high = {}
    mid = {}
    arr = []
    for k, rx in [("reg_run", REG_RUN_RX), ("service_str", SERVICE_STR_RX), ("tasks_sched", TASKS_RX), ("inline_syscall", INLINE_SYSCALL_RX), ("mz_pe_hdr", MZ_HDR_RX), ("pe_embed", PE_EMBED_RX)]:
        tmp = []
        for m in rx.finditer(text):
            tmp.append((m.start(), m.end(), text[m.start():m.end()]))
        if tmp:
            high[k] = tmp
    for k, rx in [("hex_array", HEX_ARRAY_RX), ("anti_debug", ANTI_DEBUG_RX), ("indirect_call", INDIRECT_CALL_RX)]:
        tmp = []
        for m in rx.finditer(text):
            tmp.append((m.start(), m.end(), text[m.start():m.end()]))
        if tmp:
            mid[k] = tmp
    b64_arr = [(m.start(), m.end(), text[m.start():m.end()]) for m in BASE64_BLOB_RX.finditer(text)]
    b64_arr += _find_b64_concat_mapped(text)
    if b64_arr:
        mid["b64_blob"] = b64_arr
    return high, mid

def _severity_policy(found_high: Dict[str, Any], found_mid: Dict[str, Any]) -> Dict[str, bool]:
    strong = any(k in found_high for k in ("reg_run", "service_str", "tasks_sched", "inline_syscall"))
    pe_high = False
    if "pe_embed" in found_high and ("mz_pe_hdr" in found_high or len(found_mid) > 0):
        pe_high = True
    if "mz_pe_hdr" in found_high and ("pe_embed" in found_high or len(found_mid) > 0):
        pe_high = True
    return {"strong_high": strong, "pe_high": pe_high}

def _has_context_around(text: str, idx: int, radius: int) -> bool:
    s = max(0, idx - radius)
    e = min(len(text), idx + radius)
    return bool(CTX_TOKENS.search(text[s:e]))

def _merge_slices(slices: List[Dict[str, Any]], merge_dist: int) -> List[Dict[str, Any]]:
    if not slices: return []
    slices.sort(key=lambda x: (x["start_line"], x["end_line"]))
    out = [slices[0]]
    for s in slices[1:]:
        last = out[-1]
        if s["start_line"] <= last["end_line"] + merge_dist:
            last["end_line"] = max(last["end_line"], s["end_line"])
            last["triggers"].update(s["triggers"])
            if s["severity"] == "high": last["severity"] = "high"
            last["evidences"].extend(s["evidences"])
        else:
            out.append(s)
    return out

def _overlap_ratio(a: Tuple[int, int], b: Tuple[int, int]) -> float:
    s1, e1 = a; s2, e2 = b
    inter = max(0, min(e1, e2) - max(s1, s2) + 1)
    len1 = e1 - s1 + 1
    len2 = e2 - s2 + 1
    denom = min(len1, len2)
    if denom <= 0: return 0.0
    return inter / denom

def _dedup(slices: List[Dict[str, Any]], new_item: Dict[str, Any], thr: float) -> bool:
    r_new = (new_item["start_line"], new_item["end_line"])
    for s in slices:
        if _overlap_ratio((s["start_line"], s["end_line"]), r_new) >= thr:
            return False
    return True

def _unit_id(name: str) -> str:
    return hashlib.sha1(name.encode("utf-8", errors="ignore")).hexdigest()[:12]

def _make_slice(unit_id: str, name: str, lines: List[str], center_idx: int, text: str, trigger: str, severity: str) -> Dict[str, Any]:
    center_line = _center_from_index(text, center_idx)
    start, end, win = _window(lines, center_line, CFG["WINDOW_LINES"])
    return {
        "unit_id": unit_id,
        "name": name,
        "trigger": trigger,
        "severity": severity,
        "start_line": start,
        "end_line": end,
        "decomp_slice": [{"lineno": ln, "text": t} for (ln, t) in win],
        "triggers": set([trigger]),
        "evidences": []
    }

def _cap_reached(total: int, per_unit_count: int, per_trig_count: Dict[str, int], trig: str) -> bool:
    if total >= CFG["TOTAL_CAP"]: return True
    if per_unit_count >= CFG["PER_UNIT_CAP"]: return True
    if per_trig_count.get(trig, 0) >= CFG["PER_TRIGGER_CAP"]: return True
    return False

def _emit_c(out_dir: str, filename: str, units: List[Dict[str, Any]]) -> str:
    os.makedirs(out_dir, exist_ok=True)
    path = os.path.join(out_dir, filename)
    with open(path, "w", encoding="utf-8") as w:
        for u in units:
            for s in u["slices"]:
                for ln, txt in s["decomp_slice"]:
                    w.write(f'#line {ln} "{u["name"]}"\n')
                    w.write(txt + "\n")
                w.write("\n")
    return path

def _emit_json(path: str, units: List[Dict[str, Any]], errors: List[str]) -> None:
    obj = {
        "units": [{"unit_id": u["unit_id"], "name": u["name"], "slices": [
            {
                "unit_id": u["unit_id"],
                "name": u["name"],
                "trigger": s["trigger"],
                "severity": s["severity"],
                "start_line": s["start_line"],
                "end_line": s["end_line"],
                "decomp_slice": s["decomp_slice"]
            } for s in u["slices"]
        ]} for u in units],
        "summary": {"errors": errors, "units": len(units), "total_slices": sum(len(u["slices"]) for u in units)}
    }
    with open(path, "w", encoding="utf-8") as f:
        json.dump(obj, f, ensure_ascii=False, indent=2)

def process_units(paths: List[str]) -> Tuple[List[Dict[str, Any]], List[str]]:
    out_units = []
    total = 0
    errs = []
    for p in paths:
        try:
            text = _read(p)
        except Exception as e:
            errs.append(f"read_error:{p}:{e}")
            continue
        lines = _lines(text)
        high_matches, mid_matches = _collect_matches(text)
        flags = _severity_policy(high_matches, mid_matches)
        slices = []
        per_trig = {}
        per_unit_count = 0
        order = []
        for k, arr in high_matches.items():
            for s, e, frag in arr:
                order.append(("high", k, s, e, frag))
        if not (CFG["SKIP_MID_WHEN_STRONG_HIGH"] and flags["strong_high"]):
            for k, arr in mid_matches.items():
                for s, e, frag in arr:
                    order.append(("mid", k, s, e, frag))
        else:
            kept = 0
            for k in ("anti_debug", "b64_blob"):
                if k in mid_matches:
                    for s, e, frag in mid_matches[k]:
                        order.append(("mid", k, s, e, frag))
                        kept += 1
                        if kept >= CFG["MID_MIN_WHEN_STRONG_HIGH"]:
                            break
        order.sort(key=lambda x: x[2])
        for sev_t, k, s_idx, e_idx, frag in order:
            if _cap_reached(total, per_unit_count, per_trig, k):
                continue
            if k == "indirect_call" and CFG["INDIRECT_CONTEXT_ONLY"]:
                if not _has_context_around(text, s_idx, CFG["CONTEXT_RADIUS"]):
                    continue
            item = _make_slice(_unit_id(p), os.path.basename(p), lines, s_idx, text, k, "high" if sev_t == "high" else "mid")
            item["evidences"].append(frag[:CFG["SNIPPET_CHARS"]])
            if item["severity"] == "mid":
                if flags["strong_high"] and CFG["SKIP_MID_WHEN_STRONG_HIGH"]:
                    continue
            if not _dedup(slices, item, CFG["DEDUP_DIFF"]):
                continue
            slices.append(item)
            per_trig[k] = per_trig.get(k, 0) + 1
            per_unit_count += 1
            total += 1
            if total >= CFG["TOTAL_CAP"]:
                break
        merged = _merge_slices(slices, CFG["MERGE_DIST"])
        merged.sort(key=lambda x: x["start_line"])
        if flags["strong_high"] and CFG["SKIP_MID_WHEN_STRONG_HIGH"]:
            pass
        unit = {"unit_id": _unit_id(p), "name": os.path.basename(p), "slices": merged}
        out_units.append(unit)
        if total >= CFG["TOTAL_CAP"]:
            break
    return out_units, errs

def _collect_inputs(in_dir: str, in_glob: str) -> List[str]:
    if in_dir:
        return sorted([os.path.join(in_dir, x) for x in os.listdir(in_dir) if re.search(in_glob, x)])
    else:
        return sorted([p for p in glob.glob("**/*", recursive=True) if re.search(in_glob, os.path.basename(p)) and os.path.isfile(p)])

def main():
    ap = argparse.ArgumentParser(prog="slice.py")
    ap.add_argument("--in-dir", default=None)
    ap.add_argument("--in-glob", default=r".*\.c$")
    ap.add_argument("--out-c-dir", default="./c_out")
    ap.add_argument("--c-filename", default="slices_combined.c")
    ap.add_argument("--json-out", default=None)
    ap.add_argument("--window", type=int, default=CFG["WINDOW_LINES"])
    ap.add_argument("--per-unit", type=int, default=CFG["PER_UNIT_CAP"])
    ap.add_argument("--per-trigger-cap", type=int, default=CFG["PER_TRIGGER_CAP"])
    ap.add_argument("--total", type=int, default=CFG["TOTAL_CAP"])
    ap.add_argument("--b64-len", type=int, default=CFG["BASE64_MIN_LEN"])
    ap.add_argument("--hex-min", type=int, default=CFG["HEX_ARRAY_MIN_BYTES"])
    ap.add_argument("--merge-dist", type=int, default=CFG["MERGE_DIST"])
    ap.add_argument("--dedup-same", type=float, default=CFG["DEDUP_SAME"])
    ap.add_argument("--dedup-diff", type=float, default=CFG["DEDUP_DIFF"])
    ap.add_argument("--indirect-context-only", action="store_true", default=CFG["INDIRECT_CONTEXT_ONLY"])
    ap.add_argument("--no-indirect-context-only", action="store_true", default=False)
    ap.add_argument("--context-radius", type=int, default=CFG["CONTEXT_RADIUS"])
    ap.add_argument("--skip-mid-on-strong-high", action="store_true", default=CFG["SKIP_MID_WHEN_STRONG_HIGH"])
    ap.add_argument("--no-skip-mid-on-strong-high", action="store_true", default=not CFG["SKIP_MID_WHEN_STRONG_HIGH"])
    ap.add_argument("--mid-min-when-strong-high", type=int, default=CFG["MID_MIN_WHEN_STRONG_HIGH"])
    args = ap.parse_args()

    CFG["WINDOW_LINES"] = args.window
    CFG["PER_UNIT_CAP"] = args.per_unit
    CFG["PER_TRIGGER_CAP"] = args.per_trigger_cap
    CFG["TOTAL_CAP"] = args.total
    CFG["BASE64_MIN_LEN"] = args.b64_len
    CFG["HEX_ARRAY_MIN_BYTES"] = args.hex_min
    CFG["MERGE_DIST"] = args.merge_dist
    CFG["DEDUP_SAME"] = args.dedup_same
    CFG["DEDUP_DIFF"] = args.dedup_diff
    if args.no_indirect_context_only:
        CFG["INDIRECT_CONTEXT_ONLY"] = False
    else:
        CFG["INDIRECT_CONTEXT_ONLY"] = args.indirect_context_only
    CFG["CONTEXT_RADIUS"] = args.context_radius
    if args.skip_mid_on_strong_high and args.no_skip_mid_on_strong_high:
        CFG["SKIP_MID_WHEN_STRONG_HIGH"] = False
    elif args.skip_mid_on_strong_high:
        CFG["SKIP_MID_WHEN_STRONG_HIGH"] = True
    elif args.no_skip_mid_on_strong_high:
        CFG["SKIP_MID_WHEN_STRONG_HIGH"] = False
    CFG["MID_MIN_WHEN_STRONG_HIGH"] = args.mid_min_when_strong_high

    inputs = _collect_inputs(args.in_dir, args.in_glob)
    units, errs = process_units(inputs)
    c_path = _emit_c(args.out_c_dir, args.c_filename, units)
    if args.json_out:
        _emit_json(args.json_out, units, errs)
    print(c_path)

if __name__ == "__main__":
    main()
