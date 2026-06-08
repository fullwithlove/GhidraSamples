import json
import faiss
import os
import sys
import numpy as np
from sentence_transformers import SentenceTransformer

class MitreApiSimilaritySearcher:
    def __init__(self, index_path, mitre_api_meta_path):
        print("[*] 고정밀 토큰 매칭 AI 모델 및 API 전용 FAISS 인덱스 로드 중...")
        self.model = SentenceTransformer('all-MiniLM-L6-v2')
        self.index = faiss.read_index(index_path)
        
        # 전처리 스크립트가 생성한 mitre_api_metadata.json 로드
        with open(mitre_api_meta_path, 'r', encoding='utf-8') as f:
            self.mitre_metadata = json.load(f)

    def search_exact_techniques(self, api_sequence_query, top_k=2):
        """순수 API 식별자 문자열 간의 공간 거리를 연산하여 고정밀 공격 기법 추적"""
        if not api_sequence_query:
            return []

        # 1. API 시퀀스 문자열 벡터 임베딩 (도메인이 완벽히 일치하므로 밀도가 매우 높음)
        query_vector = self.model.encode([api_sequence_query]).astype('float32')

        # 2. FAISS Index 매칭 (L2 Distance 연산)
        distances, indices = self.index.search(query_vector, top_k)

        search_results = []
        for i, idx in enumerate(indices[0]):
            if idx < len(self.mitre_metadata) and idx != -1:
                hit = self.mitre_metadata[idx]
                
                # 거리 기반 스코어를 소프트맥스 혹은 코사인 유사도 형태와 유사한 직관적 가중치(0~1)로 변환
                # 거리가 0에 가까울수록(완벽 일치) score는 1.0에 수렴합니다.
                score = float(1 / (1 + distances[0][i]))

                search_results.append({
                    "attack_id": hit.get("attack_id", "N/A"),
                    "technique_name": hit.get("technique_name", "Unknown Technique"),
                    "tactics": hit.get("tactics", []),
                    "tactic_id": hit.get("tactic_id", "N/A"),  # 단일 문서 내 사후 전술 식별자 맵핑 약속 이행
                    "similarity_score": score
                })

        return search_results

    def run_pure_api_rag_pipeline(self, profile_json_path):
        """정제된 프로파일 파일을 읽어 고정밀 마이터 프레임워크 전술 바인딩을 완료한 최종 _rag_context.json 생성"""
        if not os.path.exists(profile_json_path):
            print(f"❌ 에러: 프로파일 파일 '{profile_json_path}'을 찾을 수 없습니다.")
            return

        output_rag_path = profile_json_path.replace("_profile.json", "_rag_context.json")
        rag_enriched_chunks = []

        with open(profile_json_path, 'r', encoding='utf-8') as f:
            profile_data = json.load(f)

        print(f"[*] 총 {len(profile_data)}개의 정제된 API 시퀀스 그룹에 대한 고정밀 RAG 매칭 개시...")
        
        for item in profile_data:
            telemetry = item.get("runtime_telemetry", {})
            behavior = item.get("abstract_behavior", {})
            api_query = behavior.get("profile_query", "")

            # 1:1 도메인 매칭 가동
            mitre_matches = self.search_exact_techniques(api_query, top_k=2)

            # 5단계 LLM(Gemini 2.5 Flash Lite) 분석가 전용 최종 입력 스키마 빌드
            enriched_chunk = {
                "runtime_metadata": telemetry,
                "behavior_tree_summary": {
                    "root_api": behavior.get("root_api_name"),
                    "raw_parameters": behavior.get("raw_parameters"),
                    "api_query_signature": api_query  # 조립된 영문장 대신 깨끗한 시그니처 매핑 구조 적재
                },
                "referenced_mitre_framework": mitre_matches
            }
            rag_enriched_chunks.append(enriched_chunk)

        # RAG 최종 산출물 파일 출력
        with open(output_rag_path, 'w', encoding='utf-8') as out_f:
            json.dump(rag_enriched_chunks, out_f, ensure_ascii=False, indent=4)

        print(f"[✅] 고정밀 RAG 파이프라인 매칭 완효! 최종 통합 컨텍스트 생성됨: {output_rag_path}")
        return output_rag_path


# --- 터미널 가동용 메인 컨트롤 유닛 ---
if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("❌ 사용법: python3 mitre_similarity_searcher.py <프로파일_파일_경로.json>")
        sys.exit(1)

    TARGET_PROFILE = sys.argv[1]
    
    # 전처리 빌더가 생성한 API 전용 인덱스 파일 경로 지정
    INDEX_FILE = "mitre_api_attack.index"
    META_FILE = "mitre_api_metadata.json"

    if not os.path.exists(INDEX_FILE) or not os.path.exists(META_FILE):
        print(f"❌ 에러: 고정밀 API용 인덱스 세트가 감지되지 않습니다. 전처리 빌더를 먼저 가동하세요.")
        sys.exit(1)

    # 파이프라인 2단계 실행
    searcher = MitreApiSimilaritySearcher(INDEX_FILE, META_FILE)
    searcher.run_pure_api_rag_pipeline(TARGET_PROFILE)