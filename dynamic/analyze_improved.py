import frida
import sys
import json
import os
import time

# 1. 초기 설정 및 인자 처리
if len(sys.argv) < 2:
    print("❌ 사용법: python3 analyze_improved.py <프로세스_경로>")
    sys.exit(1)

TARGET_PATH = sys.argv[1]
VM_IP = "192.168.56.101" 
METADATA_FILE = "api_metadata.json"

# 출력 파일명 자동 생성
base_name = os.path.splitext(os.path.basename(TARGET_PATH))[0]
LOG_FILE = f"{base_name}_log.jsonl"

sessions = []
main_pid = None

# --- [트리 구성을 위한 데이터 구조 관리] ---
# thread_stacks = { tid: [ node_stack ] } -> 현재 추적 중인 함수 계층 스택
# thread_trees  = { tid: [ root_nodes ] } -> 완성된 트리 구조들의 리스트
thread_stacks = {}
thread_trees = {}

# 메타데이터 로드
try:
    with open(METADATA_FILE, "r", encoding="utf-8") as f:
        api_metadata = json.load(f)
except FileNotFoundError:
    print(f"❌ 오류: '{METADATA_FILE}' 파일이 없습니다.")
    sys.exit(1)

# 2. 자바스크립트 분석 엔진 (Tree-Parsing 전용 Action 분리 모델)
JS_CODE = f"""
const apiMetadata = {json.dumps(api_metadata)};
const resolver = new ApiResolver("module");

// --- [유틸리티 함수] ---
function getProtString(prot) {{
    const flags = [];
    const p = prot.toInt32();
    if (p & 0x01) flags.push("PAGE_NOACCESS");
    if (p & 0x02) flags.push("PAGE_READONLY");
    if (p & 0x04) flags.push("PAGE_READWRITE");
    if (p & 0x10) flags.push("PAGE_EXECUTE");
    if (p & 0x20) flags.push("PAGE_EXECUTE_READ");
    if (p & 0x40) flags.push("PAGE_EXECUTE_READWRITE");
    return flags.length > 0 ? flags.join("|") : "0x" + p.toString(16);
}}

function getCallSource(addr) {{
    const mod = Process.findModuleByAddress(addr);
    if (mod) return mod.name + "!" + addr.sub(mod.base);
    return "[UNKNOWN/SHELLCODE] " + addr;
}}

// --- [데이터 추출기] ---
const extractors = {{
    "NT_UNICODE_STR": (args, idx) => {{
        const ptr = args[idx];
        if (ptr.isNull() || ptr.toInt32() < 0x10000) return "NULL";
        try {{ return ptr.add(8).readPointer().readUtf16String(); }} catch(e) {{ return "Err"; }}
    }},
    "MEM_PROT": (args, idx) => getProtString(args[idx]),
    "BUFFER_PE": (args, idx) => {{
        try {{
            const ptr = args[idx];
            if (ptr.isNull() || ptr.toInt32() < 0x10000) return "NULL";
            const buf = ptr.readByteArray(2);
            const view = new Uint8Array(buf);
            let prefix = "";
            if (view[0] === 0x4d && view[1] === 0x5a) prefix = "[PE_HEADER_DETECTED] ";
            return prefix + "Hex: " + hexdump(ptr, {{ length: 16, header: false, ansi: false }});
        }} catch(e) {{ return "Buffer-Error"; }}
    }},
    "DATA_BUF": (args, idx) => {{
        try {{
            const ptr = args[idx];
            if (ptr.isNull() || ptr.toInt32() < 0x10000) return "NULL";
            const length = 64;
            const hex = hexdump(ptr, {{ length: 32, header: false, ansi: false }}).replace(/\\n/g, ' ');
            const str = ptr.readAnsiString(length).replace(/[^\\x20-\\x7E]/g, '.');
            return `[STR: ${{str}}] | [HEX: ${{hex}}]`;
        }} catch(e) {{ return "Read-Error"; }}
    }},
    "CREATE_PROCESS": (args) => {{
        try {{
            const cmd = args[2];
            return (!cmd.isNull() && cmd.toInt32() > 0x10000) ? cmd.readUtf16String() : "Unknown";
        }} catch(e) {{ return "Err"; }}
    }},
    "DEFAULT": (args, idx) => args[idx].toString()
}};

// --- [메인 후킹 로직: Enter / Leave 독립 스트리밍] ---
Object.keys(apiMetadata).forEach(apiName => {{
    const config = apiMetadata[apiName];
    const matches = resolver.enumerateMatches("exports:*!" + apiName);
    
    matches.forEach(match => {{
        try {{
            Interceptor.attach(match.address, {{
                onEnter: function(args) {{
                    const extractor = extractors[config.type] || extractors.DEFAULT;
                    const tid = Process.getCurrentThreadId();

                    send({{
                        action: "enter",
                        t: new Date().toLocaleTimeString(),
                        pid: Process.id,
                        tid: tid,
                        c: config.category || "General",
                        m: Process.findModuleByAddress(match.address).name.toUpperCase(),
                        a: apiName,
                        v: extractor(args, config.idx),
                        src: getCallSource(this.returnAddress)
                    }});
                }},
                onLeave: function(retval) {{
                    const tid = Process.getCurrentThreadId();

                    send({{
                        action: "leave",
                        pid: Process.id,
                        tid: tid,
                        a: apiName,
                        ret: retval.toString()
                    }});
                }}
            }});
        }} catch(err) {{ }}
    }});
}});
"""

# 3. 메시지 릴레이 및 실시간 트리 구성 엔진 (Stack 알고리즘 적용)
def on_message(message, data):
    if message['type'] == 'send':
        event = message['payload']
        tid = event['tid']
        pid = event['pid']
        api_name = event['a']
        
        # 스레드별 스택 구조 및 트리 컨테이너 보장
        if tid not in thread_stacks:
            thread_stacks[tid] = []
            thread_trees[tid] = []
            
        if event['action'] == "enter":
            # 새 서브트리 노드 인스턴스 생성
            new_node = {
                "t": event['t'],
                "c": event['c'],
                "m": event['m'],
                "a": api_name,
                "v": event['v'],
                "src": event['src'],
                "ret": "PENDING",  # Leave 이벤트 도착 시 업데이트됨
                "children": []     # 하위 함수들이 채워질 레벨 공간
            }
            
            # 부모가 스택에 대기 중이라면 자식 노드로 편입
            if thread_stacks[tid]:
                parent_node = thread_stacks[tid][-1]
                parent_node['children'].append(new_node)
                print(f"  └── 🕒 {event['t']} | [CHILD] {api_name}({event['v']})")
            else:
                # 루트 레벨 함수 호출인 경우
                thread_trees[tid].append(new_node)
                print(f"▶️ 🕒 {event['t']} | 🆔 {pid}:{tid} | [ROOT] {api_name}({event['v']})")
                
            # 현재 노드를 부모 후보로 스택에 Push
            thread_stacks[tid].append(new_node)
            
        elif event['action'] == "leave":
            if thread_stacks[tid]:
                current_node = thread_stacks[tid][-1]
                # API 쌍이 정확히 일치하는지 확인 (비정상 스택 탈출 예외 방어)
                if current_node['a'] == api_name:
                    current_node['ret'] = event['ret']
                    thread_stacks[tid].pop()  # Pairing 완성 시 Pop
                    
                    # 루트 노드가 완전히 끝났고 하이어라키가 닫혔을 때만 JSONL 디스크에 커밋
                    if not thread_stacks[tid]:
                        # 대량의 노이즈 기록 방지를 위해 완결된 트리 하나를 통째로 덤프
                        root_to_commit = thread_trees[tid][-1]
                        # 보관 목적을 위해 기본 메타데이터 최상단 매핑
                        root_to_commit['pid'] = pid
                        root_to_commit['tid'] = tid
                        
                        with open(LOG_FILE, "a", encoding="utf-8") as f:
                            f.write(json.dumps(root_to_commit, ensure_ascii=False) + "\n")

def instrument_process(pid):
    try:
        session = device.attach(pid)
        session.enable_child_gating()
        script = session.create_script(JS_CODE)
        script.on('message', on_message)
        script.load()
        sessions.append(session)
        print(f" [💉] PID {pid} 트리 분석 파서 주입 성공.")
    except Exception as e:
        print(f" [-] PID {pid} 주입 실패: {e}")

def on_child_added(child):
    print(f"\n🐣 [DETECTED] 자식 프로세스 포크 감지: {child.pid}")
    instrument_process(child.pid)
    try: device.resume(child.pid)
    except: pass

def is_process_running(pid):
    try:
        for p in device.enumerate_processes():
            if p.pid == pid: return True
        return False
    except: return False

# 4. 메인 실행 및 모니터링 로직
try:
    if os.path.exists(LOG_FILE):
        os.remove(LOG_FILE)

    device = frida.get_device_manager().add_remote_device(f"{VM_IP}:27042")
    device.on('child-added', on_child_added)
    
    print(f"[*] '{TARGET_PATH}' 트리 흐름 역공학 가동... (정제 로그: {LOG_FILE})")
    main_pid = device.spawn([TARGET_PATH])
    instrument_process(main_pid)
    device.resume(main_pid)
    
    start_time = time.time()
    TIMEOUT = 30  # 테스트용 30초 세팅 (필요 시 수정)
    
    print(f"[*] 실시간 파이프라인 대기 시간: {TIMEOUT}초")
    while time.time() - start_time < TIMEOUT:
        if not is_process_running(main_pid):
            print(f"\n[!] 타겟 메인 프로세스(PID {main_pid}) 정상 종료. 모니터링을 해제합니다.")
            break
        time.sleep(1)
    else:
        print(f"\n[!] 지정한 분석 시간({TIMEOUT}초)이 지나 강제 종료합니다.")

except KeyboardInterrupt:
    print("\n[*] 사용자에 의한 중단 요청 수용.")
except Exception as e:
    print(f"❌ 파이프라인 런타임 오류: {e}")
finally:
    # 아직 스택에 남아 완결되지 못한 트리 잔여물 강제 커밋 (Flush)
    flushed_count = 0
    for tid, tree_list in thread_trees.items():
        if tree_list and thread_stacks.get(tid):
            # 가장 바깥쪽 열려있는 루트 트리를 임의 매칭하여 디스크 보존
            unclosed_root = tree_list[-1]
            if "pid" not in unclosed_root:
                unclosed_root['pid'] = main_pid
                unclosed_root['tid'] = tid
                unclosed_root['ret'] = "FORCE_CLOSED"
                with open(LOG_FILE, "a", encoding="utf-8") as f:
                    f.write(json.dumps(unclosed_root, ensure_ascii=False) + "\n")
                flushed_count += 1
                
    if flushed_count > 0:
        print(f"[*] 미완결 스택 트리 {flushed_count}개 강제 Flush 완료.")

    # 세션 안전 탈출
    for s in sessions:
        try: s.detach()
        except: pass
    print(f"✅ [FINISH] 구조화된 Semantic Tree 저장 완효: {LOG_FILE}")