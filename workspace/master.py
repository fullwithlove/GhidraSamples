import os
import sys
import subprocess
import time
import google.generativeai as genai

# --- 1. 설정: 프로젝트 경로 및 헬퍼 스크립트 정의 ---

# ★★★ 모든 작업이 이 디렉토리에서 수행된다고 가정합니다. ★★★
PRODUCTION_DIR = "/home/ghidra/production"

# 헬퍼 스크립트 경로
DECOMPILE_SCRIPT = "/home/ghidra/Downloads/ghidra_11.4.2_PUBLIC_20250826/ghidra_11.4.2_PUBLIC/decompile.sh"
EXTRACT_SCRIPT = os.path.join(PRODUCTION_DIR, "extract.py")
SEARCH_SCRIPT = os.path.join(PRODUCTION_DIR, "search_and_extract.py")

# LLM 모델 설정
MODEL_NAME = "gemini-2.5-flash-lite" # 또는 gemini-1.5-flash-latest

def setup_environment():
    """
    API 키를 로드하고 LLM을 설정합니다.
    """
    print("--- [LLM 설정] ---")
    try:
        # !! 중요 !!: 환경 변수에서 API 키를 읽어옵니다.
        API_KEY = ""
        #os.environ.get("GEMINI_API_KEY")
        if not API_KEY:
            raise ValueError("GEMINI_API_KEY 환경 변수가 설정되지 않았습니다.")
        
        genai.configure(api_key=API_KEY)
        model = genai.GenerativeModel(model_name=MODEL_NAME)
        print(f"✅ Gemini API ({MODEL_NAME})가 성공적으로 설정되었습니다.")
        return model
    except Exception as e:
        print(f"❌ LLM 설정 실패: {e}")
        return None

def run_command(command_list):
    """
    쉘 명령을 실행하고, 성공 여부를 반환하며, 실시간 출력을 보여줍니다.
    """
    try:
        # Popen을 사용하여 실시간 출력 스트리밍
        process = subprocess.Popen(command_list, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, encoding='utf-8', cwd=PRODUCTION_DIR)
        
        # 실시간으로 출력 읽기
        while True:
            output = process.stdout.readline()
            if output == '' and process.poll() is not None:
                break
            if output:
                print(f"  > {output.strip()}")
                
        # 프로세스 종료 대기
        process.wait()
        
        if process.returncode != 0:
            print(f"❌ [오류] 명령 실행 실패 (종료 코드: {process.returncode}): {' '.join(command_list)}")
            return False
            
        return True
        
    except FileNotFoundError:
        print(f"❌ [오류] 스크립트 파일을 찾을 수 없습니다: {command_list[0]}")
        return False
    except Exception as e:
        print(f"❌ [오류] 알 수 없는 스크립트 실행 오류: {e}")
        return False

def load_file_content(file_path):
    """분석 결과 파일을 읽어옵니다."""
    if not os.path.exists(file_path):
        print(f"   > [경고] 파일이 생성되지 않았습니다: {file_path}. (정상일 수 있음)")
        return "[파일이 생성되지 않았음 - 의심스러운 함수가 없을 수 있습니다.]"
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"❌ [오류] 파일 읽기 실패: {file_path} - {e}")
        return f"[파일 읽기 오류: {e}]"

def analyze_with_llm(model, suspicious_code_content, similarity_report_content):
    """
    두 개의 분석 파일을 기반으로 LLM에게 최종 보고서를 요청합니다.
    """
    print("\n--- 4단계: LLM 종합 분석 시작 ---")
    
    prompt = f"""
    당신은 20년 경력의 최고 수준 악성코드 리버스 엔지니어링 전문가입니다.

    방금 한 악성 의심 파일에 대한 2단계 정적 분석이 완료되었습니다. 
    아래 두 개의 분석 결과 파일을 기반으로 이 바이너리에 대한 최종 종합 보고서를 작성해주세요.

    ---
    [파일 1: 의심스러운 함수 코드 원본]
    이 파일은 원본 디컴파일 코드에서 '위험 API'를 포함하는 함수 블록만 추출한 내용입니다.
    이 함수들이 악성 행위의 "직접적인 증거"입니다.
    
    {suspicious_code_content}
    ---
    [파일 2: 코드 유사도 분석 결과]
    이 파일은 [파일 1]의 각 함수가, 우리가 보유한 '기존 악성 코드 DB'의 
    어떤 함수와 유사한지 검색한 결과입니다. (거리가 0에 가까울수록 100% 일치)
    
    {similarity_report_content}
    ---

    [당신의 임무]
    위 두 파일을 종합적으로 검토하여, 다음 항목을 포함하는 최종 분석 보고서를 마크다운 형식으로 작성해주세요.

    1.  **[분석 요약]**: 
        이 악성코드의 핵심 목적은 무엇입니까? (예: C2 통신을 통한 백도어, 랜섬웨어, 정보 탈취용 키로거...)

    2.  **[주요 악성 행위 (증거 기반)]**: 
        [파일 1]에서 발견된 위험 API 호출과 [파일 2]의 유사도 검색 결과를 근거로, 
        이 프로그램이 수행하는 가장 위험한 행위 3~5가지를 설명해주세요. 
        (예: FUN_140001000 함수는 VirtualAlloc과 GetProcAddress를 사용하며, 이는 DB의 'Trojan.X' 샘플과 98% 유사합니다. 따라서...)

    3.  **[유사도 분석 결론]**: 
        [파일 2]의 결과를 볼 때, 이 악성코드가 이전에 분석된 특정 샘플 그룹이나 악성코드 계열과 연관성이 있습니까?

    4.  **[최종 위험도]**: 
        "심각 (Critical)", "높음 (High)", "중간 (Medium)", "낮음 (Low)" 중 하나로 평가해주세요.
    """
    
    try:
        start_time = time.time()
        response = model.generate_content(prompt)
        end_time = time.time()
        
        print(f" > LLM 응답 수신 완료 (소요 시간: {end_time - start_time:.2f}초)")
        return response.text
        
    except Exception as e:
        print(f"❌ [오류] LLM API 호출 실패: {e}")
        return f"# 분석 실패\n\nLLM API 호출 중 오류가 발생했습니다:\n{e}"

# --- 메인 실행 ---
def main():
    # 1. 입력 인수 확인
    if len(sys.argv) < 2:
        print("❌ 오류: 분석할 exe 파일의 경로를 인수로 제공해야 합니다.")
        print(f"👉 사용법: python3 master_analyzer.py /경로/분석할파일.exe")
        sys.exit(1)
        
    input_exe_path = os.path.abspath(sys.argv[1])
    
    if not os.path.exists(input_exe_path):
        print(f"❌ 오류: 입력 파일 '{input_exe_path}'를 찾을 수 없습니다.")
        sys.exit(1)
        
    # 2. 작업 디렉토리로 이동
    os.makedirs(PRODUCTION_DIR, exist_ok=True)
    os.chdir(PRODUCTION_DIR)
    
    # 3. 파일 이름 및 경로 설정
    base_name = os.path.basename(input_exe_path)
    name_part, _ = os.path.splitext(base_name)
    
    # (출력 파일들은 모두 'production' 디렉토리에 생성됨)
    decompiled_c_file = os.path.join(PRODUCTION_DIR, f"{name_part}.c")
    suspicious_c_file = os.path.join(PRODUCTION_DIR, f"{name_part}_suspicious.c")
    similarity_report_file = os.path.join(PRODUCTION_DIR, f"{name_part}_similarity_report.txt")
    final_llm_report_file = os.path.join(PRODUCTION_DIR, f"{name_part}_FINAL_ANALYSIS.md")
    
    print(f"--- 🚀 '{base_name}' 파일 분석 파이프라인 시작 ---")
    print(f"    작업 디렉토리: {PRODUCTION_DIR}")

    # 4. LLM 설정
    model = setup_environment()
    if model is None:
        sys.exit(1)

    # --- 5. 파이프라인 실행 ---
    
    # 1단계: Ghidra 디컴파일
    print("\n--- 1단계: Ghidra 디컴파일 실행 ---")
    if not run_command([DECOMPILE_SCRIPT, input_exe_path]):
        print("❌ 1단계 실패. 분석을 중단합니다.")
        sys.exit(1)
    
    # 2단계: 위험 함수 추출
    print("\n--- 2단계: 위험 함수 추출 (extract.py) ---")
    if not run_command(["python3", EXTRACT_SCRIPT, decompiled_c_file]):
        print("❌ 2단계 실패. 분석을 중단합니다.")
        sys.exit(1)
        
    # 3단계: 벡터 DB 유사도 검색
    print("\n--- 3단계: 벡터 DB 유사도 검색 (search_and_extract.py) ---")
    if not run_command(["python3", SEARCH_SCRIPT, decompiled_c_file]):
        print("❌ 3단계 실패. 분석을 중단합니다.")
        sys.exit(1)

    # 4단계: LLM 종합 분석
    # 생성된 파일 내용 읽기
    print("\n--- 4단계: LLM 입력을 위한 파일 로드 ---")
    suspicious_content = load_file_content(suspicious_c_file)
    similarity_content = load_file_content(similarity_report_file)
    
    # LLM 호출
    final_report = analyze_with_llm(model, suspicious_content, similarity_content)

    # 5단계: 최종 보고서 저장
    try:
        with open(final_llm_report_file, 'w', encoding='utf-8') as f:
            f.write(final_report)
        print(f"\n🎉🎉🎉 최종 분석 완료! 보고서가 '{final_llm_report_file}'에 저장되었습니다.")
    except Exception as e:
        print(f"❌ [오류] 최종 보고서 저장 실패: {e}")

if __name__ == "__main__":
    main()
