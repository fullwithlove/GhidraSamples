import json

def auto_populate_metadata(input_path, output_path):
    with open(input_path, 'r', encoding='utf-8') as f:
        metadata = json.load(f)
        
    print(f"[*] 총 {len(metadata)}개의 API 메타데이터 자동 확장 시작...")
    
    for api_name, config in metadata.items():
        # 이미 수동으로 입력한 값이 있다면 스킵 (기존 데이터 보존)
        if "action_verb" in config and "object" in config:
            continue
            
        category = config.get("category", "General")
        
        # 카테고리별 표준 언어 모델 매핑 규칙 (규칙 기반 자동 생성)
        if category == "Memory":
            config["action_verb"] = "manipulated virtual memory parameters via"
            config["object"] = "process memory space region"
        elif category == "Process":
            config["action_verb"] = "interfaced with execution system via"
            config["object"] = "operating system process thread execution"
        elif category == "Registry":
            config["action_verb"] = "accessed or altered system configuration inside"
            config["object"] = "windows registry hive pathways"
        elif category == "FileSystem":
            config["action_verb"] = "requested file I/O layer access for"
            config["object"] = "local storage disk sectors"
        elif category == "Network" or category == "Internet":
            config["action_verb"] = "opened remote connection interface using"
            config["object"] = "external infrastructure network socket"
        elif category == "Anti-Analysis":
            config["action_verb"] = "inspected runtime environment markers via"
            config["object"] = "evasion and anti-debugging verification points"
        elif category == "Crypto":
            config["action_verb"] = "transformed data block entropy via"
            config["object"] = "cryptographic container stream"
        else:
            # 카테고리가 없거나 모호한 API를 위한 범용 자동 추상화 규칙 (Fallback)
            config["action_verb"] = "invoked low-level system sub-routine"
            config["object"] = "operating system kernel subsystem core"

    with open(output_path, 'w', encoding='utf-8') as f:
        json.dump(metadata, f, ensure_ascii=False, indent=2)
        
    print(f"[✅] 확장 완료! '{output_path}' 파일이 생성되었습니다.")

# 실행 (원본 파일명을 매칭해서 실행하세요)
auto_populate_metadata('api_metadata.json', 'api_metadata_master.json')