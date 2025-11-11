import faiss
from sentence_transformers import SentenceTransformer
import numpy as np
import json
import re
import os
import sys
import time

# --- 1. 설정 ---
FAISS_INDEX_FILE = "db/malware_code.index"  # 우리가 빌드한 벡터 DB
ID_MAP_FILE = "db/malware_code_map.json"    # ID 맵
MODEL_NAME = 'all-MiniLM-L6-v2'        # ★반드시★ 인덱스 생성 시 사용한 것과 동일한 모델
API_LIST_JSON = "categorized_api_list.json" # 위험 API 키워드 파일

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
            id_map = json.load(f) # [{'id': 0, 'unique_key': '...'}, ...]
        
        # 빠른 조회를 위해 맵 구조 변경: {0: {'unique_key': '...'}, 1: ...}
        id_lookup_map = {entry['id']: entry for entry in id_map}

        model = SentenceTransformer(MODEL_NAME)
        
        print(f" > 로드 완료 (총 {index.ntotal}개 벡터, 소요 시간: {time.time() - start_time:.2f}초)")
        return index, id_lookup_map, model
        
    except Exception as e:
        print(f"❌ 오류: DB 로드 실패. '{FAISS_INDEX_FILE}'와 '{ID_MAP_FILE}'이 있는지 확인하세요.")
        print(f"   (오류 상세: {e})")
        return None, None, None

def parse_c_file(c_file_path):
    """C 파일을 함수 청크(이름, 코드) 리스트로 분할 (단일 파일 처리)"""
    try:
        with open(c_file_path, 'r', encoding='utf-8') as f:
            code_text = f.read()
    except Exception as e:
        print(f"❌ 오류: 입력 파일 '{c_file_path}' 읽기 실패 - {e}")
        return []

    # Ghidra 주석 기준으로 함수 블록과 함수 이름을 정확히 추출
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
    """
    [핵심 기능] DB 맵에 저장된 'source_file_path'에서
    'target_func_name'에 해당하는 실제 코드 블록을 다시 읽어옵니다.
    """
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            code_text = f.read()
            
        # 정확히 그 함수만 찾기 위한 정규식
        target_regex = re.compile(
            r"(/[*] Function: " + re.escape(target_func_name) + r" [*]/.*?)(?=/[*] Function:|\Z)", 
            re.DOTALL
        )
        match = target_regex.search(code_text)
        
        if match:
            return match.group(1) # 매칭된 전체 함수 블록 반환
        else:
            return f"--- [오류] '{file_path}'에서 '{target_func_name}' 함수 코드를 찾지 못했습니다. ---\n"
            
    except Exception as e:
        return f"--- [오류] '{file_path}' 파일 읽기 실패: {e} ---\n"

# --- 메인 실행 ---
def main():
    if len(sys.argv) < 2:
        print("❌ 오류: 분석할 디컴파일된 C 파일의 경로를 인수로 제공해야 합니다.")
        print(f"👉 사용법: python {sys.argv[0]} /경로/분석할파일.c")
        sys.exit(1)
        
    input_file = sys.argv[1]
    
    # 1. 최종 보고서 파일 이름 설정
    base_name = os.path.basename(input_file)
    name_part, _ = os.path.splitext(base_name)
    output_report_file = f"{name_part}_similarity_report.txt"

    # 2. 모든 종속성 로드 (키워드, DB, 모델)
    dangerous_keyword_regex = load_dangerous_keywords()
    if dangerous_keyword_regex is None:
        return
        
    index, id_lookup_map, model = load_db_and_model()
    if index is None or model is None:
        return

    # 3. 입력 파일 파싱 (함수 청킹)
    print(f"\n--- 2. '{input_file}' 파일 분석 시작... ---")
    parsed_functions = parse_c_file(input_file)
    if not parsed_functions:
        print(" > 분석할 함수를 찾지 못했습니다. 종료합니다.")
        return

    print(f" > 총 {len(parsed_functions)}개의 함수(청크) 발견.")
    
    # 4. 보고서 내용을 담을 리스트
    report_lines = [f"# '{input_file}' 파일에 대한 유사도 분석 보고서\n"]
    total_suspicious_found = 0
    k_nearest = 3 # 상위 3개 유사 함수 검색

    for func_name, func_code in parsed_functions:
        
        # 4a. 위험 API 키워드가 포함되어 있는지 'grep'
        found_keywords = dangerous_keyword_regex.findall(func_code)
        
        if not found_keywords:
            continue
            
        # 4b. 위험 함수 발견! 보고서 섹션 추가
        total_suspicious_found += 1
        print(f"\n=======================================================")
        print(f"🚨 위험 함수 감지: {func_name}")
        keywords_str = ", ".join(sorted(list(set(k.lower() for k in found_keywords))))
        print(f"   (근거 키워드: {keywords_str})")
        
        report_lines.append("\n\n" + "="*50)
        report_lines.append(f"🚨 쿼리 함수: {func_name} (from: {input_file})")
        report_lines.append(f"   (근거 키워드: {keywords_str})")
        report_lines.append("--- [쿼리 함수 코드 원본] ---")
        report_lines.append(func_code)
        report_lines.append("\n--- [DB 유사도 검색 결과 Top 3] ---")

        # 4c. 위험 함수만 벡터화하여 DB 검색
        start_time = time.time()
        query_vector = model.encode([func_code]).astype('float32')
        distances, indices = index.search(query_vector, k_nearest)
        print(f"   > DB 검색 완료 (소요 시간: {time.time() - start_time:.4f}초)")

        # 4d. 검색 결과(유사 함수 코드) 리포트에 추가
        for i in range(k_nearest):
            faiss_id = indices[0][i]
            dist = distances[0][i]
            match_info = id_lookup_map.get(faiss_id)
            
            if match_info:
                # [핵심] DB 맵에서 찾은 파일 경로와 함수 이름으로, 원본 C 코드를 다시 읽어옴
                matched_code = get_function_code_from_file(
                    match_info['source_file_path'], 
                    match_info['func_name']
                )
                
                report_lines.append(f"\n  {i+1}. [유사도 거리: {dist:.4f}]")
                report_lines.append(f"      - 함수명: {match_info['func_name']}")
                report_lines.append(f"      - 출처 파일: {match_info['source_file_path']}")
                report_lines.append("      --- [유사 함수 코드] ---")
                report_lines.append(matched_code)
            else:
                report_lines.append(f"\n  {i+1}. [유사도 거리: {dist:.4f}] - ID 맵 정보 없음 (ID: {faiss_id})")

    # 5. 최종 보고서 파일 저장
    try:
        with open(output_report_file, 'w', encoding='utf-8') as f:
            f.write("\n".join(report_lines))
        
        print("\n=======================================================")
        if total_suspicious_found == 0:
            print("ℹ️  이 파일에서 알려진 위험 API를 포함한 함수를 찾지 못했습니다.")
        else:
            print(f"✅ 분석 완료. 총 {total_suspicious_found}개의 위험 함수 분석 결과를 '{output_report_file}'에 저장했습니다.")
            
    except Exception as e:
        print(f"❌ 오류: 최종 보고서 파일 저장 중 실패 - {e}")

if __name__ == "__main__":
    main()