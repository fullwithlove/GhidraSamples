import re, os, json, argparse, hashlib, sys
from typing import List, Dict, Any, Optional, Tuple

CFG = {
    "BASE64_MIN_LEN": 200,
    "HEX_ARRAY_MIN_BYTES": 128,
    "WINDOW_LINES": 20,
    "PER_UNIT_CAP": 12,
    "TOTAL_CAP": 4000,
    "SNIPPET_CHARS": 120,
    "PE_PROMOTE_WITH_MID": 1,
    "DEDUP_SAME": 0.6,
    "DEDUP_DIFF": 0.9,
    "SKIP_MID_WHEN_STRONG_HIGH": True,
    "MID_MIN_WHEN_STRONG_HIGH": 2,
    "MID_WHITELIST_STRONG": ["b64_blob","anti_debug","hex_array"],
    "PER_TRIGGER_CAP": 3,
    "INDIRECT_CONTEXT_ONLY": False,
    "CONTEXT_RADIUS": 40,
}

def _mk_base64_rx(n: int) -> re.Pattern:
    return re.compile(rf"[A-Za-z0-9+/]{{{n},}}={0,2}")

def _mk_hex_array_rx(min_bytes: int) -> re.Pattern:
    val  = r"(?:0x[0-9a-fA-F]{1,2}|\d{1,3})"
    body = rf"{val}(?:\s*,\s*{val}){{{min_bytes-1},}}"
    return re.compile(r"\{\s*" + body + r"\s*,?\s*\}", re.S)

BASE64_BLOB_RX = _mk_base64_rx(CFG["BASE64_MIN_LEN"])
HEX_ARRAY_RX   = _mk_hex_array_rx(CFG["HEX_ARRAY_MIN_BYTES"])

RX_HIGH = {
    "reg_run": re.compile(r"CurrentVersion\\+Run(?:Once)?|\\Startup\\", re.I),
    "service_str": re.compile(r"\b(sc\.exe\s+create|Services\\|SERVICE_(AUTO_START|DEMAND_START|WIN32_OWN_PROCESS))", re.I),
    "tasks_sched": re.compile(r"\b(schtasks(\.exe)?\s+/create|\\Tasks\\|Task Scheduler)\b", re.I),
    "inline_syscall": re.compile(r"\b(__asm|asm)\b.*?\bsyscall\b|\bint\s+0x2e\b|\bsysenter\b|__emit\s*(?:0x0f\s*,\s*0x05|0Fh\s*,\s*05h)", re.I | re.S),
    "pe_embed": re.compile(r"This program cannot be run in DOS mode", re.I),
    "mz_pe_hdr": re.compile(r"\bMZ\b.*?\bPE\0\0", re.S),
}

RX_MID = {
    "b64_blob": BASE64_BLOB_RX,
    "hex_array": HEX_ARRAY_RX,
    "anti_debug": re.compile(r"IsDebuggerPresent|CheckRemoteDebuggerPresent|BeingDebugged|NtGlobalFlag|NtQueryInformationProcess\s*\([^)]*?ProcessDebug", re.I | re.S),
    "indirect_call": re.compile(
        r"\(\s*\*\s*(?:DAT_[0-9A-Fa-f]+|PTR_[0-9A-Fa-f]+|pcVar\d+|pv?Var\d+|\(\s*code\s*\*\s*\*\s*[A-Za-z_]\w*\s*\))\s*\)\s*\(",
        re.M
    ),
    "cast_call": re.compile(r"\(\s*\(\s*[A-Za-z_][\w\s\*\(\),]*\*\)\s*\)\s*[A-Za-z_]\w*\s*\(", re.M),
    "xor_loop": re.compile(r"for\s*\([^)]*\)\s*\{[^{}]*?\b([\w\)\]]+)\s*=\s*\1\s*\^\s*([0-9xXa-fA-F]+|[A-Za-z_]\w*)", re.S),
    "xor_assign": re.compile(r"\b[A-Za-z_]\w*\s*\^=\s*(?:0x[0-9A-Fa-f]+|\d+|[A-Za-z_]\w*)", re.I),
    "rol_ror_loop": re.compile(r"\b(rol|ror)\s*\(\s*([A-Za-z_]\w*)\s*,\s*([0-9]+|[A-Za-z_]\w*)\s*\)", re.I),
    "com_sched": re.compile(r"Schedule\.Service|ITaskService|ITaskDefinition|IRegisteredTask", re.I),
}

DEFAULT_ALLOW = {"reg_run": [r"OneDrive", r"SecurityHealth", r"Windows Defender", r"Teams", r"Slack", r"NVIDIA", r"Audio", r"HP", r"Logi", r"Razer", r"Adobe"]}
ALLOWLIST_RX: Dict[str, re.Pattern] = {k: re.compile("|".join(v), re.I) for k, v in DEFAULT_ALLOW.items()}

def _load_allowlist(path: Optional[str]):
    global ALLOWLIST_RX
    if not path: return
    try:
        with open(path, "r", encoding="utf-8") as f:
            obj = json.load(f)
        merged = {}
        for k, arr in obj.items():
            if not isinstance(arr, list): continue
            base = DEFAULT_ALLOW.get(k, [])
            keep = [x for x in arr if isinstance(x, str) and x]
            merged[k] = base + keep
        ALLOWLIST_RX = {k: re.compile("|".join(v), re.I) for k, v in merged.items() if v}
    except Exception:
        pass

def _load_dir(path: str, errs: List[str]) -> List[Dict[str, Any]]:
    units = []
    for root, _, files in os.walk(path):
        for fn in files:
            if not fn.lower().endswith((".c",".h",".txt",".i",".ii",".cpp",".cc",".cxx",".decomp",".ghidra.txt")):
                continue
            p = os.path.join(root, fn)
            try:
                with open(p, "r", errors="ignore") as f:
                    txt = f.read()
                uid = hashlib.sha1(p.encode("utf-8")).hexdigest()[:12]
                units.append({"unit_id": uid, "name": fn, "text": txt})
            except Exception as e:
                errs.append(f"read_fail:{p}:{e}")
    return units

def _load_json(path: str, errs: List[str]) -> List[Dict[str, Any]]:
    try:
        with open(path, "r", encoding="utf-8") as f:
            obj = json.load(f)
    except Exception as e:
        errs.append(f"json_fail:{path}:{e}")
        return []
    units = []
    try:
        if "units" in obj:
            for u in obj["units"]:
                t = u.get("text") or u.get("decompiled") or u.get("decomp")
                if isinstance(t, list): t = "\n".join(t)
                if not isinstance(t, str): continue
                uid = u.get("unit_id") or hashlib.sha1((u.get("name","")+t[:64]).encode("utf-8")).hexdigest()[:12]
                units.append({"unit_id": uid, "name": u.get("name", uid), "text": t})
            return units
        if "functions" in obj:
            for f in obj["functions"]:
                t = f.get("text") or f.get("decompiled") or f.get("decomp")
                if not t and f.get("decomp_slice"):
                    t = "\n".join(x.get("text","") for x in f["decomp_slice"])
                if not t and f.get("slices"):
                    ch=[]
                    for s in f["slices"]:
                        if s.get("decomp_slice"):
                            ch.extend(x.get("text","") for x in s["decomp_slice"])
                    if ch: t = "\n".join(ch)
                if not isinstance(t, str): continue
                uid = f.get("func_addr") or hashlib.sha1((f.get("func_name","")+t[:64]).encode("utf-8")).hexdigest()[:12]
                name = f.get("func_name") or uid
                units.append({"unit_id": uid, "name": name, "text": t})
            return units
        if isinstance(obj, dict) and obj.get("text"):
            return [{"unit_id":"u0","name":obj.get("name","u0"),"text":obj["text"]}]
        if isinstance(obj, list):
            i=0
            for e in obj:
                t = e.get("text") if isinstance(e, dict) else None
                if isinstance(t, list): t="\n".join(t)
                if isinstance(t, str):
                    units.append({"unit_id": f"u{i}", "name": e.get("name", f"u{i}"), "text": t}); i+=1
            return units
    except Exception as e:
        errs.append(f"json_parse:{path}:{e}")
    return []

def _text_to_lines(text: str) -> List[str]:
    return text.splitlines()

def _window(lines: List[str], center_line: int, n: int) -> List[Dict[str, Any]]:
    a = max(0, center_line - n - 1)
    b = min(len(lines), center_line + n)
    return [{"lineno": i+1, "text": lines[i]} for i in range(a, b)]

def _center_from_index(text: str, idx: int) -> int:
    return text[:max(0, idx)].count("\n") + 1

def _overlap(a1:int,a2:int,b1:int,b2:int)->float:
    inter = max(0, min(a2,b2)-max(a1,b1)+1)
    base = max(a2-a1+1, b2-b1+1)
    return inter/float(base) if base>0 else 0.0

def _insert_dedup(slices: List[Dict[str,Any]], new: Dict[str,Any]) -> bool:
    n1, n2 = new["start_line"], new["end_line"]
    for s in slices:
        o1, o2 = s["start_line"], s["end_line"]
        ov = _overlap(n1,n2,o1,o2)
        if new["trigger"] == s["trigger"] and ov >= CFG["DEDUP_SAME"]:
            return False
        if ov >= CFG["DEDUP_DIFF"]:
            return False
    slices.append(new)
    return True

_SEQ_RX   = re.compile(r'(?:L|u8|u|U)?\s*"(?:(?:\\.|[^"\\])*)"(?:\s*(?:L|u8|u|U)?\s*"(?:\\.|[^"\\])*")+')
_ONE_RXIT = re.compile(r'(?:L|u8|u|U)?\s*"((?:\\.|[^"\\])*)"')

def _decode_with_map(raw: str) -> Tuple[str, List[int]]:
    out_chars=[]; idx_map=[]
    i=0; L=len(raw)
    while i<L:
        c=raw[i]
        if c!="\\":
            out_chars.append(c); idx_map.append(i); i+=1; continue
        if i+1>=L:
            out_chars.append("\\"); idx_map.append(i); i+=1; continue
        n=raw[i+1]
        if n in ['\\','"',"'"]:
            out_chars.append(n); idx_map.append(i); i+=2; continue
        if n=="n": out_chars.append("\n"); idx_map.append(i); i+=2; continue
        if n=="r": out_chars.append("\r"); idx_map.append(i); i+=2; continue
        if n=="t": out_chars.append("\t"); idx_map.append(i); i+=2; continue
        if n=="x":
            j=i+2; h=""
            while j<L and len(h)<2 and re.match(r"[0-9A-Fa-f]", raw[j]): h+=raw[j]; j+=1
            if h:
                out_chars.append(chr(int(h,16))); idx_map.append(i); i=j; continue
            out_chars.append("x"); idx_map.append(i); i+=2; continue
        if n in "01234567":
            j=i+1; o=""
            while j<L and len(o)<3 and raw[j] in "01234567": o+=raw[j]; j+=1
            out_chars.append(chr(int(o,8))); idx_map.append(i); i=j; continue
        out_chars.append(n); idx_map.append(i); i+=2
    return "".join(out_chars), idx_map

def _find_b64_concat_mapped(orig_text: str) -> List[Tuple[int,int,str]]:
    out=[]
    for m in _SEQ_RX.finditer(orig_text):
        seq_start = m.start()
        seq_txt = m.group(0)
        parts=[]
        for lit in _ONE_RXIT.finditer(seq_txt):
            body = lit.group(1)
            body_start = seq_start + lit.start(1)
            dec, mp = _decode_with_map(body)
            parts.append((dec, [body_start + k for k in mp]))
        agg=[]; amap=[]
        for dec, mp in parts:
            agg.append(dec); amap.extend(mp)
        full="".join(agg)
        for bm in BASE64_BLOB_RX.finditer(full):
            s=bm.start(); e=bm.end()
            if s < len(amap) and e-1 < len(amap):
                start_idx = amap[s]; end_idx = amap[e-1]+1
                out.append((start_idx, end_idx, full[s:e]))
    return out

def _collect_matches(text: str) -> Tuple[Dict[str, List[Tuple[int,int,str]]], Dict[str, List[Tuple[int,int,str]]]]:
    high, mid = {}, {}
    for k, rx in RX_HIGH.items():
        arr=[]
        for m in rx.finditer(text):
            s,e = m.start(), m.end()
            arr.append((s,e,text[s:e]))
        if arr: high[k]=arr
    for k, rx in RX_MID.items():
        if k=="b64_blob": continue
        arr=[]
        for m in rx.finditer(text):
            s,e=m.start(),m.end()
            arr.append((s,e,text[s:e]))
        if arr: mid[k]=arr
    b64_arr = [(m.start(), m.end(), text[m.start():m.end()]) for m in BASE64_BLOB_RX.finditer(text)]
    b64_arr += _find_b64_concat_mapped(text)
    if b64_arr:
        b64_arr.sort(key=lambda x: x[0])
        uniq=[]; last=(-1,-1)
        for s,e,frag in b64_arr:
            if last==(s,e): continue
            uniq.append((s,e,frag)); last=(s,e)
        mid["b64_blob"]=uniq
    return high, mid

def _per_match_allowlisted(trigger: str, snippet: str) -> bool:
    rx = ALLOWLIST_RX.get(trigger)
    return bool(rx and rx.search(snippet))

def _severity_policy(found_high_keys:set, mid_cat_count:int) -> Dict[str,bool]:
    strong_high = any(k in found_high_keys for k in ["reg_run","service_str","tasks_sched","inline_syscall"])
    pe_flags = any(k in found_high_keys for k in ["pe_embed","mz_pe_hdr"])
    pe_high=False
    if pe_flags:
        if ({"pe_embed","mz_pe_hdr"} <= found_high_keys) or (mid_cat_count >= CFG["PE_PROMOTE_WITH_MID"]):
            pe_high=True
    return {"strong_high":strong_high, "pe_high":pe_high}

def _make_slice(unit, lines, text, start_idx, end_idx, trigger, severity) -> Dict[str,Any]:
    center = _center_from_index(text, start_idx)
    sl = _window(lines, center, CFG["WINDOW_LINES"])
    return {
        "unit_id": unit["unit_id"], "name": unit["name"],
        "trigger": trigger, "severity": severity,
        "start_line": sl[0]["lineno"] if sl else 1,
        "end_line": sl[-1]["lineno"] if sl else min(len(lines), 2*CFG["WINDOW_LINES"]),
        "decomp_slice": sl,
        "evidence": {"match_excerpt": text[max(0, start_idx-CFG["SNIPPET_CHARS"]):min(len(text), end_idx+CFG["SNIPPET_CHARS"])]}
    }

def _try_add_slice(slices: List[Dict[str,Any]], item: Dict[str,Any], total: int) -> Tuple[bool,int]:
    if len(slices) >= CFG["PER_UNIT_CAP"] or total >= CFG["TOTAL_CAP"]:
        return False, total
    if _insert_dedup(slices, item):
        return True, total+1
    return False, total

# --- MOD START: indirect-call 컨텍스트 + C 출력 유틸 ---
CTX_TOKENS = re.compile(
    r"VirtualAlloc|VirtualProtect|GetProcAddress|LoadLibrary|WriteProcessMemory|"
    r"CreateRemoteThread|CreateProcess|MapViewOfFile|UnmapViewOfFile|"
    r"IsDebuggerPresent|CheckRemoteDebuggerPresent|Nt[A-Za-z_]+",
    re.I
)
def _context_ok(lines: List[str], center_line: int, radius: int) -> bool:
    a = max(0, center_line - radius - 1)
    b = min(len(lines), center_line + radius)
    seg = "\n".join(lines[a:b])
    return bool(CTX_TOKENS.search(seg))

def _under_trigger_cap(per_trigger_cnt: Dict[str,int], trigger: str, cap: int) -> bool:
    return per_trigger_cnt.get(trigger, 0) < cap

def _sanitize_filename_component(s: str) -> str:
    s = re.sub(r"[^\w\-.]+", "_", s)
    return s[:80] if len(s) > 80 else s

def emit_c_outputs(res: Dict[str,Any], out_dir: str, style: str, prefix: str):
    os.makedirs(out_dir, exist_ok=True)
    if style == "combined":
        path = os.path.join(out_dir, f"{_sanitize_filename_component(prefix)}_combined.c")
        with open(path,"w",encoding="utf-8",errors="ignore") as w:
            w.write("/* generated slices */\n")
            for u in res.get("units",[]):
                for idx, s in enumerate(u.get("slices",[]), 1):
                    w.write(f"\n/* BEGIN unit={u['name']} trigger={s['trigger']} severity={s['severity']} slice={idx} lines={s['start_line']}-{s['end_line']} */\n")
                    if s.get("decomp_slice"):
                        first = s["decomp_slice"][0]["lineno"]
                        w.write(f'#line {first} "{u["name"]}"\n')
                        for line in s["decomp_slice"]:
                            w.write(line["text"] + "\n")
                    w.write(f"/* END unit={u['name']} slice={idx} */\n")
        return path
    else:
        written = []
        for u in res.get("units",[]):
            for idx, s in enumerate(u.get("slices",[]), 1):
                base = f'{prefix}__{_sanitize_filename_component(u["name"])}__{idx:04d}__{s["trigger"]}_{s["start_line"]}-{s["end_line"]}.c'
                path = os.path.join(out_dir, base)
                with open(path,"w",encoding="utf-8",errors="ignore") as w:
                    w.write(f"/* BEGIN unit={u['name']} trigger={s['trigger']} severity={s['severity']} slice={idx} */\n")
                    if s.get("decomp_slice"):
                        first = s["decomp_slice"][0]["lineno"]
                        w.write(f'#line {first} "{u["name"]}"\n')
                        for line in s["decomp_slice"]:
                            w.write(line["text"] + "\n")
                    w.write(f"/* END unit={u['name']} slice={idx} */\n")
                written.append(path)
        return written

def process_units(units: List[Dict[str,Any]], summary: Dict[str,Any]) -> Dict[str,Any]:
    out_units=[]; total=0
    for u in units:
        if total >= CFG["TOTAL_CAP"]: break
        text = u["text"]; lines = _text_to_lines(text)
        try:
            high_matches, mid_matches = _collect_matches(text)
        except Exception as e:
            summary["errors"].append(f"scan_fail:{u['name']}:{e}")
            continue
        found_high_keys = set(k for k,v in high_matches.items() if v)
        mid_cat_count   = sum(1 for k,v in mid_matches.items() if v)
        sev_flags = _severity_policy(found_high_keys, mid_cat_count)
        slices=[]
        per_trigger_cnt: Dict[str, int] = {}
        for key in ["reg_run","service_str","tasks_sched","inline_syscall","pe_embed","mz_pe_hdr"]:
            if total >= CFG["TOTAL_CAP"] or len(slices) >= CFG["PER_UNIT_CAP"]: break
            if key not in high_matches: continue
            for (s,e,frag) in high_matches[key]:
                if total >= CFG["TOTAL_CAP"] or len(slices) >= CFG["PER_UNIT_CAP"]: break
                if _per_match_allowlisted(key, frag): continue
                if not _under_trigger_cap(per_trigger_cnt, key, CFG["PER_TRIGGER_CAP"]):
                    continue
                sev = "high" if (key in ["reg_run","service_str","tasks_sched","inline_syscall"] or (key in ["pe_embed","mz_pe_hdr"] and sev_flags["pe_high"])) else "mid"
                item = _make_slice(u, lines, text, s, e, key, sev)
                ok, total = _try_add_slice(slices, item, total)
                if ok:
                    per_trigger_cnt[key] = per_trigger_cnt.get(key, 0) + 1
        mid_budget = max(0, CFG["PER_UNIT_CAP"] - len(slices))
        if mid_budget > 0:
            if sev_flags["strong_high"] and CFG["SKIP_MID_WHEN_STRONG_HIGH"]:
                keep = [k for k in ["b64_blob","anti_debug","hex_array","indirect_call","xor_loop","xor_assign"] if k in CFG["MID_WHITELIST_STRONG"]]
                added=0
                for key in keep:
                    if key not in mid_matches: continue
                    for (s,e,frag) in mid_matches[key]:
                        if added >= min(CFG["MID_MIN_WHEN_STRONG_HIGH"], mid_budget): break
                        if key == "indirect_call" and CFG["INDIRECT_CONTEXT_ONLY"]:
                            center = _center_from_index(text, s)
                            if not _context_ok(lines, center, CFG["CONTEXT_RADIUS"]):
                                continue
                        if not _under_trigger_cap(per_trigger_cnt, key, CFG["PER_TRIGGER_CAP"]):
                            continue
                        item = _make_slice(u, lines, text, s, e, key, "mid")
                        ok, total = _try_add_slice(slices, item, total)
                        if ok:
                            added += 1
                            per_trigger_cnt[key] = per_trigger_cnt.get(key, 0) + 1
                    if added >= min(CFG["MID_MIN_WHEN_STRONG_HIGH"], mid_budget): break
            else:
                for key in ["b64_blob","hex_array","anti_debug","indirect_call","cast_call","xor_loop","xor_assign","rol_ror_loop","com_sched"]:
                    if total >= CFG["TOTAL_CAP"] or len(slices) >= CFG["PER_UNIT_CAP"]: break
                    if key not in mid_matches: continue
                    for (s,e,frag) in mid_matches[key]:
                        if total >= CFG["TOTAL_CAP"] or len(slices) >= CFG["PER_UNIT_CAP"]: break
                        # --- MOD START: indirect 컨텍스트 + cap ---
                        if key == "indirect_call" and CFG["INDIRECT_CONTEXT_ONLY"]:
                            center = _center_from_index(text, s)
                            if not _context_ok(lines, center, CFG["CONTEXT_RADIUS"]):
                                continue
                        if not _under_trigger_cap(per_trigger_cnt, key, CFG["PER_TRIGGER_CAP"]):
                            continue
                        item = _make_slice(u, lines, text, s, e, key, "mid")
                        ok, total = _try_add_slice(slices, item, total)
                        if ok:
                            per_trigger_cnt[key] = per_trigger_cnt.get(key, 0) + 1
        if slices:
            slices.sort(key=lambda x: x["start_line"])
            out_units.append({"unit_id": u["unit_id"], "name": u["name"], "slices": slices})
    summary.update({"units": len(out_units), "total_slices": total})
    return {"units": out_units, "summary": summary}

def main():
    ap = argparse.ArgumentParser()
    g = ap.add_mutually_exclusive_group(required=True)
    g.add_argument("--in-dir", dest="in_dir")
    g.add_argument("--in-json", dest="in_json")
    ap.add_argument("--out", default="slices_from_decompiled.json")
    ap.add_argument("--window", type=int, default=CFG["WINDOW_LINES"])
    ap.add_argument("--per-unit", type=int, default=CFG["PER_UNIT_CAP"])
    ap.add_argument("--total", type=int, default=CFG["TOTAL_CAP"])
    ap.add_argument("--b64-len", type=int, default=CFG["BASE64_MIN_LEN"])
    ap.add_argument("--hex-min", type=int, default=CFG["HEX_ARRAY_MIN_BYTES"])
    ap.add_argument("--pe-promote", type=int, default=CFG["PE_PROMOTE_WITH_MID"])
    ap.add_argument("--dedup-same", type=float, default=CFG["DEDUP_SAME"])
    ap.add_argument("--dedup-diff", type=float, default=CFG["DEDUP_DIFF"])
    ap.add_argument("--snippet", type=int, default=CFG["SNIPPET_CHARS"])
    ap.add_argument("--allowlist", default=None)
    mx = ap.add_mutually_exclusive_group()
    mx.add_argument("--skip-mid-on-strong-high", action="store_true")
    mx.add_argument("--no-skip-mid-on-strong-high", action="store_true")
    ap.add_argument("--mid-min-when-strong-high", type=int, default=CFG["MID_MIN_WHEN_STRONG_HIGH"])
    ap.add_argument("--mid-whitelist-strong", default=",".join(CFG["MID_WHITELIST_STRONG"]))
    ap.add_argument("--disable-mid", default="", help="comma separated mid triggers to disable")
    ap.add_argument("--per-trigger-cap", type=int, default=CFG["PER_TRIGGER_CAP"])
    ap.add_argument("--indirect-context-only", action="store_true")
    ap.add_argument("--context-radius", type=int, default=CFG["CONTEXT_RADIUS"])
    ap.add_argument("--out-format", choices=["json","c","both"], default="json")
    ap.add_argument("--out-c-dir", default="c_slices")
    ap.add_argument("--c-style", choices=["combined","per-slice"], default="combined")
    ap.add_argument("--c-prefix", default="slices")
    args = ap.parse_args()

    CFG["WINDOW_LINES"] = args.window
    CFG["PER_UNIT_CAP"] = args.per_unit
    CFG["TOTAL_CAP"]    = args.total
    CFG["BASE64_MIN_LEN"]= args.b64_len
    CFG["HEX_ARRAY_MIN_BYTES"]= args.hex_min
    CFG["PE_PROMOTE_WITH_MID"]= args.pe_promote
    CFG["DEDUP_SAME"]= args.dedup_same
    CFG["DEDUP_DIFF"]= args.dedup_diff
    CFG["SNIPPET_CHARS"]= args.snippet
    if args.skip_mid_on_strong_high: CFG["SKIP_MID_WHEN_STRONG_HIGH"]=True
    if args.no_skip_mid_on_strong_high: CFG["SKIP_MID_WHEN_STRONG_HIGH"]=False
    CFG["MID_MIN_WHEN_STRONG_HIGH"] = max(0, args.mid_min_when_strong_high)
    wl = [x.strip() for x in (args.mid_whitelist_strong or "").split(",") if x.strip()]
    if wl: CFG["MID_WHITELIST_STRONG"] = wl
    CFG["PER_TRIGGER_CAP"] = max(1, args.per_trigger_cap)
    CFG["INDIRECT_CONTEXT_ONLY"] = bool(args.indirect_context_only)
    CFG["CONTEXT_RADIUS"] = max(1, args.context_radius)

    global BASE64_BLOB_RX, HEX_ARRAY_RX
    BASE64_BLOB_RX = _mk_base64_rx(CFG["BASE64_MIN_LEN"])
    HEX_ARRAY_RX   = _mk_hex_array_rx(CFG["HEX_ARRAY_MIN_BYTES"])
    if "b64_blob" in RX_MID: RX_MID["b64_blob"] = BASE64_BLOB_RX
    if "hex_array" in RX_MID: RX_MID["hex_array"] = HEX_ARRAY_RX

    disabled = {x.strip() for x in (args.disable_mid or "").split(",") if x.strip()}
    if disabled:
        for k in list(RX_MID.keys()):
            if k in disabled:
                del RX_MID[k]
    _load_allowlist(args.allowlist)

    errs=[]
    if args.in_dir:
        units = _load_dir(args.in_dir, errs)
    else:
        units = _load_json(args.in_json, errs)

    res = process_units(units, summary={"errors": errs})
    wrote_json = False
    if args.out_format in ("json","both"):
        try:
            with open(args.out, "w", encoding="utf-8") as w:
                json.dump(res, w, ensure_ascii=False, indent=2)
            wrote_json = True
        except Exception as e:
            sys.stderr.write(f"write_fail:{args.out}:{e}\n")
            sys.exit(2)

    if args.out_format in ("c","both"):
        prefix = args.c_prefix or (os.path.splitext(os.path.basename(args.out))[0] if wrote_json else "slices")
        emit_c_outputs(res, args.out_c_dir, args.c_style, prefix)
if __name__ == "__main__":
    main()
