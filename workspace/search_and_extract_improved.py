import faiss
from sentence_transformers import SentenceTransformer
import numpy as np
import json
import re
import os
import sys
import time

# --- 1. 설정 ---
# (batch_build_db.py와 경로가 일치해야 합니다)
FAISS_INDEX_FILE = "db/malware_code.index"
ID_MAP_FILE = "db/malware_code_map.json"
MODEL_NAME = 'all-MiniLM-L6-v2'
API_LIST_JSON = "categorized_api_list.json"

def load_dangerous_keywords():
    """'categorized_api_list.json'을 로드하여 검색용 정규식 생성"""
    try:
        with open(API_LIST_JSON, 'r', encoding='utf-8') as f:
            categorized_apis = json.load(f)
    except FileNotFoundError:
        print(f"❌ 오류: '{API_LIST_JSON}' 파일을 찾을 수 없습니다.")
        return None
    
    all_keywords = set()
    for apis in categorized_apis.values():
        all_keywords.update(apis)
        
    print(f"✅ 총 {len(all_keywords)}개의 고유 위험 API 키워드를 로드했습니다.")
    
    keyword_pattern = r'\b(' + '|'.join(re.escape(k) for k in all_keywords) + r')\b'
    return re.compile(keyword_pattern, re.IGNORECASE)

def load_db_and_model():
    """FAISS DB, ID 맵, 임베딩 모델 로드"""
    print("--- 1. DB 및 모델 로드 중... ---")
    start_time = time.time()
    try:
        index = faiss.read_index(FAISS_INDEX_FILE)
        
        with open(ID_MAP_FILE, 'r', encoding='utf-8') as f:
            id_map = json.load(f)
        
        # 빠른 조회를 위해 맵 구조 변경: {0: {'unique_key': '...', 'label': '...'}, ...}
        id_lookup_map = {entry['id']: entry for entry in id_map}

        model = SentenceTransformer(MODEL_NAME)
        
        print(f" > 로드 완료 (총 {index.ntotal}개 벡터, 소요 시간: {time.time() - start_time:.2f}초)")
        return index, id_lookup_map, model
        
    except Exception as e:
        print(f"❌ 오류: DB 로드 실패. '{FAISS_INDEX_FILE}'와 '{ID_MAP_FILE}'이 있는지 확인하세요.")
        print(f"   (오류 상세: {e})")
        return None, None, None

def parse_c_file(c_file_path):
    """C 파일을 함수 청크(이름, 코드) 리스트로 분할"""
    try:
        with open(c_file_path, 'r', encoding='utf-8') as f:
            code_text = f.read()
    except Exception as e:
        print(f"❌ 오류: 입력 파일 '{c_file_path}' 읽기 실패 - {e}")
        return []

    function_regex = re.compile(r"(/[*] Function: (FUN_\w+) [*]/.*?)(?=/[*] Function:|\Z)", re.DOTALL)
    matches = function_regex.findall(code_text)
    
    parsed_functions = []
    if not matches:
        func_name = "file_" + os.path.basename(c_file_path).replace('.', '_')
        parsed_functions.append((func_name, code_text))
    else:
        for (func_block, func_name) in matches:
            parsed_functions.append((func_name, func_block))
            
    return parsed_functions

def get_function_code_from_file(file_path, target_func_name):
    """DB 맵에 저장된 원본 파일에서 해당 함수 코드를 다시 읽어옴"""
    try:
        if not os.path.exists(file_path):
            return f"--- [오류] 원본 파일이 이동되었거나 삭제되었습니다: {file_path} ---\n"

        with open(file_path, 'r', encoding='utf-8') as f:
            code_text = f.read()
            
        target_regex = re.compile(
            r"(/[*] Function: " + re.escape(target_func_name) + r" [*]/.*?)(?=/[*] Function:|\Z)", 
            re.DOTALL
        )
        match = target_regex.search(code_text)
        
        if match:
            return match.group(1)
        else:
            return f"--- [오류] '{file_path}'에서 '{target_func_name}' 함수 코드를 찾지 못했습니다. ---\n"
            
    except Exception as e:
        return f"--- [오류] '{file_path}' 파일 읽기 실패: {e} ---\n"

# --- 메인 실행 ---
def main():
    if len(sys.argv) < 2:
        print("❌ 오류: 분석할 디컴파일된 C 파일의 경로를 인수로 제공해야 합니다.")
        sys.exit(1)
        
    input_file = sys.argv[1]
    
    # 보고서 파일 이름 설정
    base_name = os.path.basename(input_file)
    name_part, _ = os.path.splitext(base_name)
    output_report_file = f"{name_part}_similarity_report.txt"

    # 종속성 로드
    dangerous_keyword_regex = load_dangerous_keywords()
    if dangerous_keyword_regex is None: return
        
    index, id_lookup_map, model = load_db_and_model()
    if index is None or model is None: return

    # 입력 파일 파싱
    print(f"\n--- 2. '{input_file}' 파일 분석 시작... ---")
    parsed_functions = parse_c_file(input_file)
    if not parsed_functions:
        print(" > 분석할 함수를 찾지 못했습니다. 종료합니다.")
        return

    print(f" > 총 {len(parsed_functions)}개의 함수(청크) 발견.")
    
    report_lines = [f"# '{input_file}' 파일에 대한 유사도 분석 보고서\n"]
    total_suspicious_found = 0
    k_nearest = 3 

    for func_name, func_code in parsed_functions:
        
        # 1. 위험 API 포함 여부 확인
        found_keywords = dangerous_keyword_regex.findall(func_code)
        if not found_keywords: continue
            
        total_suspicious_found += 1
        keywords_str = ", ".join(sorted(list(set(k.lower() for k in found_keywords))))
        
        print(f"\n[위험 함수 감지] {func_name} (키워드: {keywords_str})")
        print("   > DB 유사도 검색 중...")

        # 리포트 헤더 작성
        report_lines.append("\n\n" + "="*50)
        report_lines.append(f"🚨 쿼리 함수: {func_name} (from: {input_file})")
        report_lines.append(f"   (근거 키워드: {keywords_str})")
        report_lines.append("--- [쿼리 함수 코드 원본] ---")
        report_lines.append(func_code)
        report_lines.append("\n--- [DB 유사도 검색 결과 Top 3] ---")

        # 2. 벡터화 및 검색
        query_vector = model.encode([func_code]).astype('float32')
        distances, indices = index.search(query_vector, k_nearest)

        # 3. 검색 결과 분석 (라벨 확인 및 힌트 생성)
        top_match_is_benign = False
        top_match_dist = 1.0

        for i in range(k_nearest):
            faiss_id = indices[0][i]
            dist = distances[0][i]
            match_info = id_lookup_map.get(faiss_id)
            
            if match_info:
                # [수정] 라벨 정보 가져오기 (기본값 malware)
                label = match_info.get('label', 'malware').upper()
                
                # 1순위 매칭 정보 저장 (힌트 생성용)
                if i == 0:
                    top_match_dist = dist
                    if label == 'BENIGN':
                        top_match_is_benign = True

                matched_code = get_function_code_from_file(
                    match_info['source_file_path'], 
                    match_info['func_name']
                )
                
                # [수정] 리포트에 라벨 표시 (예: [BENIGN] or [MALWARE])
                report_lines.append(f"\n  {i+1}. [유사도: {dist:.4f}] [{label}]")
                report_lines.append(f"      - 함수명: {match_info['func_name']}")
                report_lines.append(f"      - 출처 파일: {match_info['source_file_path']}")
                report_lines.append("      --- [유사 함수 코드] ---")
                report_lines.append(matched_code)
            else:
                report_lines.append(f"\n  {i+1}. [유사도: {dist:.4f}] - 정보 없음 (ID: {faiss_id})")

        # [수정] LLM을 위한 시스템 힌트 추가
        # 조건: 1순위가 '정상(BENIGN)'이고, 유사도 거리가 0.1 미만(매우 유사)일 때
        if top_match_is_benign and top_match_dist < 0.1:
            hint_msg = (
                "\n[!!! SYSTEM HINT !!!]\n"
                "이 함수는 '정상(BENIGN)' 샘플과 매우 높은 유사도를 보입니다.\n"
                "이는 악성 코드가 아니라 표준 라이브러리(Statically linked library) 함수일 가능성이 매우 높습니다.\n"
            )
            report_lines.append(hint_msg)
            print("   👉 [System Hint] 정상 코드와 매우 유사함 (Benign Match)")

    try:
        with open(output_report_file, 'w', encoding='utf-8') as f:
            f.write("\n".join(report_lines))
        
        print("\n=======================================================")
        if total_suspicious_found == 0:
            print("ℹ️  이 파일에서 알려진 위험 API를 포함한 함수를 찾지 못했습니다.")
        else:
            print(f"✅ 분석 완료. 결과 저장: '{output_report_file}'")
            
    except Exception as e:
        print(f"❌ 오류: 최종 보고서 파일 저장 중 실패 - {e}")

if __name__ == "__main__":
    main()