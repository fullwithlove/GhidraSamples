import json
import os
import sys  # 터미널 인자 처리를 위해 필수 추가

class GenericBehaviorProfiler:
    def __init__(self, metadata_path):
        # 1,265줄 마스터 API 메타데이터 로드
        with open(metadata_path, 'r', encoding='utf-8') as f:
            self.api_metadata = json.load(f)
            
        # 의미론적 맥락 파악을 방해하는 단순 운영체제 내부 확인용 자식 API 제거 필터
        self.IGNORE_CHILDREN = {
            "NtClose", "NtQueryValueKey", "NtQueryInformationFile", 
            "NtQuerySystemInformation", "LdrGetDllHandle", "LdrGetProcedureAddress",
            "LdrUnloadDll", "GetTempPathW"
        }

    def _extract_pure_api_tokens(self, root_node):
        """트리 토폴로지 구조를 파싱하여 중복 없는 순수 API 명사 시퀀스로 축출 (100% 범용)"""
        root_api = root_node.get('a', '')
        if not root_api:
            return ""
            
        # 시퀀스의 시작은 최상위 루트 API로 지정
        api_tokens = [root_api]
        
        # 하위 자식 노드가 실행한 API 세트 병합 (하드코딩 분기 없음)
        children = root_node.get('children', [])
        if children:
            for child in children:
                child_api = child.get('a', '')
                # 단순 시스템 쿼리/핸들 닫기 API는 필터링하여 순수 공격 맥락 보존
                if child_api and child_api not in self.IGNORE_CHILDREN:
                    api_tokens.append(child_api)
                    
        # 순서적 인과관계를 유지하되 연쇄 중복 호출은 제거 (Loop Compression 효과)
        unique_tokens = []
        for token in api_tokens:
            if not unique_tokens or unique_tokens[-1] != token:
                unique_tokens.append(token)
                
        # FAISS 지식베이스 스키마와 완벽히 호환되도록 쉼표로 연결된 문자열 반환
        return ", ".join(unique_tokens)

    def generate_profile_file(self, log_file_path):
        """_log.jsonl을 가공하여 고정밀 API 매칭 전용 _profile.json 신규 독립 파일 생성"""
        if not os.path.exists(log_file_path):
            print(f"❌ 에러: 원본 로그 파일 '{log_file_path}'이 없습니다.")
            return None

        output_profile_path = log_file_path.replace("_log.jsonl", "_profile.json")
        profile_records = []

        with open(log_file_path, 'r', encoding='utf-8') as f:
            for line in f:
                if not line.strip(): 
                    continue
                
                tree_root = json.loads(line)
                # 줄글 대신 순수 API 조합 쿼리 빌드
                api_query_sequence = self._extract_pure_api_tokens(tree_root)
                
                if not api_query_sequence:
                    continue

                profile_records.append({
                    "runtime_telemetry": {
                        "pid": tree_root.get("pid"),
                        "tid": tree_root.get("tid"),
                        "time": tree_root.get("t")
                    },
                    "abstract_behavior": {
                        "root_api_name": tree_root.get("a"),
                        "raw_parameters": tree_root.get("v"),
                        "profile_query": api_query_sequence  # 이 필드가 고정밀 순수 토큰 쿼리가 됨
                    }
                })

        with open(output_profile_path, 'w', encoding='utf-8') as out_f:
            json.dump(profile_records, out_f, ensure_ascii=False, indent=4)

        print(f"[✅] 고정밀 API 시퀀스 프로파일 파일 생성 성공: {output_profile_path}")
        return output_profile_path


# --- 🚨 [누락 수정] 터미널 명령어 인자 처리 전용 메인 엔트리부 ---
if __name__ == "__main__":
    # 1. 터미널 명령어 인자가 들어왔는지 검증 (예: python3 behavior_profiler.py parent_log.jsonl)
    if len(sys.argv) < 2:
        print("❌ 사용법: python3 behavior_profiler.py <로그_파일_경로.jsonl>")
        sys.exit(1)

    # 2. 분석할 타겟 로그 파일 경로 획득
    TARGET_LOG_FILE = sys.argv[1]
    
    # 3. 마스터 API 메타데이터 매핑용 고정 경로 설정
    METADATA_FILE = "api_metadata.json"

    if not os.path.exists(METADATA_FILE):
        print(f"❌ 에러: 파이프라인의 기준이 되는 '{METADATA_FILE}' 파일이 현재 디렉토리에 없습니다.")
        sys.exit(1)

    print(f"[*] 고정밀 범용 시맨틱 프로파일러 초기화... (규칙 데이터셋: {METADATA_FILE})")
    profiler = GenericBehaviorProfiler(METADATA_FILE)
    
    print(f"[*] 변환 파싱 개시 대상: {TARGET_LOG_FILE}")
    # 4. 파일 생성 파이프라인 가동
    created_file = profiler.generate_profile_file(TARGET_LOG_FILE)
    
    if created_file:
        print(f"✨ [SUCCESS] 변환 단계 완효! 다음 단계(mitre_similarity_searcher.py)로 넘어가세요.")