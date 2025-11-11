import json
import re
import os
import sys  # <--- 명령줄 인수를 받기 위해 'sys' 모듈 추가
from collections import defaultdict

# --- 1. 설정 ---

# '위험 API 리스트'가 담긴 JSON 파일 (필수)
API_LIST_JSON = "categorized_api_list.json"

# (제거됨) DECOMPILED_FILE = "Untitled-1.c" <-- 이 부분을 인수로 대체

def load_dangerous_keywords():
    """
    categorized_api_list.json을 로드하여,
    {'CreateRemoteThread': ['Threading'], 'RegSetValueExA': ['Registry']} 
    형태의 딕셔너리로 변환합니다.
    """
    try:
        with open(API_LIST_JSON, 'r', encoding='utf-8') as f:
            categorized_apis = json.load(f)
    except FileNotFoundError:
        print(f"❌ 오류: '{API_LIST_JSON}' 파일을 찾을 수 없습니다.")
        print("   먼저 build_categorized_api_list.py 스크립트를 실행해주세요.")
        return None
    except Exception as e:
        print(f"❌ 오류: '{API_LIST_JSON}' 파일 로드 실패 - {e}")
        return None

    # {API_이름: [카테고리1, 카테고리2...]} 딕셔너리로 역변환
    keyword_to_category = {}
    for category, apis in categorized_apis.items():
        for api_name in apis:
            if api_name not in keyword_to_category:
                keyword_to_category[api_name] = []
            keyword_to_category[api_name].append(category)
            
    print(f"✅ 총 {len(keyword_to_category)}개의 고유 위험 API 키워드를 로드했습니다.")
    return keyword_to_category

def extract_suspicious_functions(decompiled_file_path, dangerous_keywords):
    """
    디컴파일된 C 파일을 함수(FUN_...) 단위로 분할하고,
    위험 API 키워드가 포함된 함수 블록만 추출합니다.
    """
    
    # 1. 디컴파일된 C 파일 로드
    try:
        with open(decompiled_file_path, 'r', encoding='utf-8') as f:
            code_text = f.read()
    except FileNotFoundError:
        print(f"❌ 오류: 입력 파일 '{decompiled_file_path}'을 찾을 수 없습니다.")
        return
    except Exception as e:
        print(f"❌ 오류: C 파일 읽기 실패 - {e}")
        return

    # 2. C 코드를 함수 블록 단위로 분할 (Ghidra 주석 기준)
    function_regex = re.compile(r"(/[*] Function:.*? [*]/.*?)(?=/[*] Function:|\Z)", re.DOTALL)
    functions = function_regex.findall(code_text)
    
    if not functions:
        print(f"⚠️ 경고: '{decompiled_file_path}'에서 Ghidra 함수 패턴을 찾지 못했습니다.")
        functions = [code_text] # Fallback

    print(f"✅ '{decompiled_file_path}'에서 총 {len(functions)}개의 함수(청크)를 분할했습니다.")
    
    # 3. 각 함수 블록을 'grep'하며 필터링
    suspicious_functions = []
    suspicious_summary = defaultdict(list)
    
    # 더 빠른 검색을 위해 모든 키워드를 하나의 정규식으로 컴파일
    # r'\b(CreateRemoteThread|VirtualAlloc|...)\b'
    keyword_pattern = r'\b(' + '|'.join(re.escape(k) for k in dangerous_keywords.keys()) + r')\b'
    keyword_regex = re.compile(keyword_pattern, re.IGNORECASE)

    for func_block in functions:
        # 컴파일된 정규식을 사용해 함수 블록 전체에서 모든 일치 항목을 찾음
        found_matches = keyword_regex.findall(func_block)
        
        if found_matches:
            # 함수 블록을 결과에 추가
            suspicious_functions.append(func_block)
            
            # 요약본 생성
            func_name_match = re.search(r'FUN_\w+', func_block)
            func_name = func_name_match.group(0) if func_name_match else "Unknown_Function"
            
            # 대소문자 구분 없이 고유한 키워드만 요약에 추가
            unique_matches = sorted(list(set(match.lower() for match in found_matches)))
            
            for keyword_lower in unique_matches:
                # 원본 키워드(대소문자 포함)를 찾기 위한 후처리
                original_keyword = ""
                for k in dangerous_keywords.keys():
                    if k.lower() == keyword_lower:
                        original_keyword = k
                        break
                
                if original_keyword:
                    categories = dangerous_keywords[original_keyword]
                    suspicious_summary[func_name].append(f"{original_keyword} (Categories: {', '.join(categories)})")

    # 4. 최종 결과 파일 저장
    if not suspicious_functions:
        print(f"ℹ️  '{decompiled_file_path}'에서 위험 API가 포함된 함수를 찾지 못했습니다.")
        return

    # 출력 파일 이름 생성 (예: Untitled-1.c -> Untitled-1_suspicious.c)
    base_name = os.path.basename(decompiled_file_path)
    name_part, ext = os.path.splitext(base_name)
    output_file = f"{name_part}_suspicious.c"

    try:
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write("\n\n".join(suspicious_functions))
        
        print(f"\n🎉 성공: 총 {len(suspicious_functions)}개의 위험 함수를 '{output_file}'에 저장했습니다.")
        
        print("\n--- [ 발견된 위험 API 요약 ] ---")
        for func, keywords in suspicious_summary.items():
            print(f"📁 {func}:")
            for kw in keywords:
                print(f"  - {kw}")
        
    except Exception as e:
        print(f"❌ 오류: 최종 파일 저장 중 문제가 발생했습니다 - {e}")

# --- 스크립트 실행 ---
if __name__ == "__main__":
    # 1. 명령줄 인수 확인
    if len(sys.argv) < 2:
        print("❌ 오류: 분석할 디컴파일된 C 파일의 경로를 인수로 제공해야 합니다.")
        print("👉 사용법: python extract_suspicious_functions.py /경로/파일.c")
        sys.exit(1)
        
    decompiled_file_path = sys.argv[1]

    # 2. 위험 API 키워드 로드
    dangerous_keywords = load_dangerous_keywords()
    
    # 3. 키워드 로드 성공 시 분석 실행
    if dangerous_keywords:
        extract_suspicious_functions(decompiled_file_path, dangerous_keywords)