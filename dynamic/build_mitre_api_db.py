import json
import os
import sys
import faiss
import numpy as np
from google import genai
from google.genai import types
from pydantic import BaseModel, Field
from sentence_transformers import SentenceTransformer

# 1. 구조화된 출력을 위한 엄격한 Pydantic 스키마 정의 (환각 및 파싱 에러 방지)
class ExpectedApiExtraction(BaseModel):
    api_list: list[str] = Field(
        description="List of exact Windows/NT/WinINet API names that are typically invoked during this attack technique. Return empty list if none apply."
    )

def pre_process_mitre_to_apis(input_json_path, raw_meta_path):
    """
    Step 1: 마이터 어택의 줄글 디스크립션을 Gemini를 사용하여 호출 예상 API 토큰 리스트로 전처리
    """
    # 2026 최신 GenAI 클라이언트 가동
    client = genai.Client()
    
    if not os.path.exists(input_json_path):
        print(f"❌ 에러: 원본 마이터 파일 '{input_json_path}'이 없습니다.")
        sys.exit(1)
        
    with open(input_json_path, 'r', encoding='utf-8') as f:
        patterns = json.load(f)
        
    processed_mitre_dataset = []
    print(f"[*] 총 {len(patterns)}개의 마이터 객체 분석 및 API 토큰 매핑 가동...")

    for i, p in enumerate(patterns):
        # 테크닉 객체이면서 디스크립션이 존재하는 경우만 필터링
        if p.get('type') != 'technique' or not p.get('description'):
            continue
            
        attack_id = p.get("attack_id", "N/A")
        tech_name = p.get("name", "Unknown")
        
        # 기억해두었던 이정표: 하나의 문서 안에 공존하는 attack_id와 연관 tactic 추출 가동
        # 리스트 내 첫 번째 전술 카테고리를 기반으로 tactic_id 형태 명시 대조
        tactics = p.get("tactics", [])
        
        prompt = f"""
        You are an expert Windows Malware Analyst. Analyze the following MITRE ATT&CK technique and extract the core Windows Native APIs, NT APIs, Win32 APIs, or WinINet/Network APIs that are intrinsically required or commonly monitored when this technique is executed.

        Technique ID: {attack_id}
        Technique Name: {tech_name}
        Description: {p['description']}

        Provide the list of exact API names. Do not include user-defined function names; only system-level APIs.
        """

        try:
            # 구조화 출력(Structured Outputs) 옵션을 사용해 무조건 스키마 형태의 JSON만 반환하도록 통제
            response = client.models.generate_content(
                model="gemini-2.5-flash-lite",
                contents=prompt,
                config=types.GenerateContentConfig(
                    response_mime_type="application/json",
                    response_schema=ExpectedApiExtraction,
                    temperature=0.1
                )
            )
            
            # JSON 데이터 결과 파싱
            result_json = json.loads(response.text)
            extracted_apis = result_json.get("api_list", [])
            
            # 검색 엔진 가중치 상승을 위해 테크닉 이름과 토큰 리스트를 쉼표로 연결하여 벡터 타겟 문자열 형성
            api_tokens_sentence = ", ".join(extracted_apis)
            combined_search_target = f"{tech_name}, {api_tokens_sentence}" if extracted_apis else tech_name

            processed_node = {
                "attack_id": attack_id,
                "technique_name": tech_name,
                "tactics": tactics,
                "tactic_id": f"TA_{attack_id.split('.')[0]}",  # 사후 결합 맵핑을 위한 전술 구조화 식별자 유지
                "extracted_apis": extracted_apis,
                "search_vector_target": combined_search_target # 이 문자열이 임베딩 대상이 됨
            }
            processed_mitre_dataset.append(processed_node)
            print(f"[{i+1}/{len(patterns)}] 매핑 완효: {attack_id} -> {extracted_apis}")
            
        except Exception as e:
            print(f"[-] [{attack_id}] 파싱 중 스킵 또는 오류 발생: {e}")

    # 중간 원본 파일로 보존 (디버깅 및 재사용 용도)
    with open(raw_meta_path, 'w', encoding='utf-8') as out_f:
        json.dump(processed_mitre_dataset, out_f, ensure_ascii=False, indent=4)
        
    print(f"[✅] Gemini API 기반 API 토큰화 전처리 완료! 보존 위치: {raw_meta_path}")
    return processed_mitre_dataset


def build_pure_api_faiss_index(processed_data, index_out_path):
    """
    Step 2: 전처리된 API 토큰 문장들을 인코딩하여 FAISS 벡터 DB 구축
    """
    print("[*] 도메인 간 간극 해결용 임베딩 모델 로딩 중...")
    model = SentenceTransformer('all-MiniLM-L6-v2')
    
    # 임베딩할 순수 API 매핑 명세들만 수집
    search_targets = [node["search_vector_target"] for node in processed_data]
    
    print(f"[*] 총 {len(search_targets)}개의 API 시그니처 세트 벡터 임베딩 개시...")
    embeddings = model.encode(search_targets, show_progress_bar=True)
    embeddings = np.array(embeddings).astype('float32')
    
    # FAISS 물리 인덱스 파일 생성
    dimension = embeddings.shape[1]
    index = faiss.IndexFlatL2(dimension)
    index.add(embeddings)
    
    faiss.write_index(index, index_out_path)
    print(f"[✅] API 시그니처 전용 FAISS 인덱스 빌드 완료! 저장 위치: {index_out_path}")


# --- 메인 통합 가동 파트 ---
if __name__ == "__main__":
    INPUT_MITRE_JSON = "trimmed_attack_patterns.json"
    
    OUTPUT_RAW_META = "mitre_api_metadata.json"
    OUTPUT_FAISS_INDEX = "mitre_api_attack.index"
    
    # 1단계: 마이터 줄글 ➡️ API 토큰 목록 전환 가동 (최초 1회 소요)
    processed_set = pre_process_mitre_to_apis(INPUT_MITRE_JSON, OUTPUT_RAW_META)
    
    # 2단계: API 기반 고정밀 FAISS 인덱스 가공 적재
    build_pure_api_faiss_index(processed_set, OUTPUT_FAISS_INDEX)
    
    print("\n🚀 [모든 프로세스 완효] 이제 고정밀 API 매칭 도메인 가동 준비가 끝났습니다.")