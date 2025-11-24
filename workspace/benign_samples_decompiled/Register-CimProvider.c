/* Function: FUN_00402920 */

void FUN_00402920(void)

{
  FUN_004046b5(FUN_00404f70);
  return;
}



/* Function: FUN_00402940 */

void FUN_00402940(void)

{
  FUN_004046b5(FUN_00404f90);
  return;
}



/* Function: FUN_00402960 */

void FUN_00402960(void)

{
  FUN_004046b5(FUN_00404fb0);
  return;
}



/* Function: FUN_00402972 */

undefined4 __cdecl FUN_00402972(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  uint _Count;
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar2 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar2 = 0;
    _Count = param_2 - 1;
    uVar1 = _vsnwprintf(param_1,_Count,param_3,&stack0x00000010);
    if (((int)uVar1 < 0) || (_Count < uVar1)) {
      uVar2 = 0x8007007a;
    }
    else if (uVar1 != _Count) {
      return 0;
    }
    param_1[_Count] = L'\0';
  }
  return uVar2;
}



/* Function: FUN_004029d9 */

exception * __fastcall FUN_004029d9(exception *param_1)

{
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00404db1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = "bad allocation";
  exception::exception(param_1,&local_14,1);
  *(undefined ***)param_1 = &PTR_FUN_00401544;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00402a40 */

void __fastcall FUN_00402a40(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00401544;
                    /* WARNING: Could not recover jumptable at 0x00402a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception::~exception(param_1);
  return;
}



/* Function: FUN_00402a60 */

exception * __thiscall FUN_00402a60(void *this,byte param_1)

{
  HANDLE hHeap;
  
  *(undefined ***)this = &PTR_FUN_00401544;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,this);
  }
  return (exception *)this;
}



/* Function: FUN_00402a97 */

void __cdecl FUN_00402a97(SIZE_T param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapAlloc(hHeap,0,param_1);
  return;
}



/* Function: FUN_00402ab6 */

void __cdecl FUN_00402ab6(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,param_1);
  return;
}



/* Function: thunk_FUN_0040342e */

void __fastcall thunk_FUN_0040342e(int *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00404e86;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FUN_004034fe(param_1);
  lpMem = (LPVOID)*param_1;
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,lpMem);
  ExceptionList = pvStack_10;
  return;
}



/* Function: FUN_00402ae0 */

wchar_t * __fastcall FUN_00402ae0(UINT param_1,wchar_t *param_2)

{
  HMODULE hInstance;
  uint uVar1;
  UINT uID;
  wchar_t *lpBuffer;
  int cchBufferMax;
  
  cchBufferMax = 0x1000;
  uID = param_1;
  lpBuffer = param_2;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  uVar1 = LoadStringW(hInstance,uID,lpBuffer,cchBufferMax);
  if (((0xfff < uVar1) || (uVar1 == 0)) &&
     (param_2 = 
      L"Registers CIM Provider into system.\n\n\tRegister-CimProvider.exe -Namespace <NamespaceName>\n\t\t-ProviderName <ProviderName>\n\t\t-Path <ProviderDllPath>\n\t\t[-Impersonation <True or False>]\n\t\t[-Decoupled <SDDL>]\n\t\t[-HostingModel <HostingModel>]\n\t\t[-Localize <locale>]\n\t\t[-NoAutorecover]\n\t\t[-SupportWQL]\n\t\t[-GenerateUnregistration]\n\t\t[-ForceUpdate]\n\t\t[-Verbose]\n\n"
     , param_1 != 100)) {
    param_2 = L"";
  }
  return param_2;
}



/* Function: FUN_00402b28 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00402b28(void)

{
  wchar_t *pwVar1;
  undefined4 extraout_EDX;
  UINT UVar2;
  wchar_t local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_004060c0 ^ (uint)&stack0xfffffffc;
  pwVar1 = FUN_00402ae0(100,local_2008);
  wprintf(L"%s",pwVar1);
  UVar2 = 0x65;
  do {
    pwVar1 = FUN_00402ae0(UVar2,local_2008);
    wprintf(L"%s",pwVar1);
    UVar2 = UVar2 + 1;
  } while (UVar2 < 0x72);
  FUN_00404570(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00402b96 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00402b96(void)

{
  wchar_t *pwVar1;
  undefined4 extraout_EDX;
  wchar_t local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_004060c0 ^ (uint)&stack0xfffffffc;
  pwVar1 = FUN_00402ae0(0x78,local_2008);
  wprintf(L"\n%s",pwVar1);
  FUN_00404570(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00402bde */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00402bde(UINT param_1,int param_2)

{
  wchar_t *_Format;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar1;
  wchar_t local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_004060c0 ^ (uint)&stack0xfffffffc;
  _Format = FUN_00402ae0(param_1,local_2008);
  if (param_2 == 0) {
    wprintf(L"%s\n",_Format);
    uVar1 = extraout_EDX_00;
  }
  else {
    wprintf(_Format,param_2);
    wprintf(L"\n");
    uVar1 = extraout_EDX;
  }
  FUN_00404570(local_8 ^ (uint)&stack0xfffffffc,uVar1);
  return;
}



/* Function: FUN_00402c43 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00402c43(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Format;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 extraout_EDX;
  int *piVar7;
  int *local_2020;
  int *local_201c;
  undefined4 local_2018;
  wchar_t local_2014 [4096];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404de4;
  local_10 = ExceptionList;
  local_14 = DAT_004060c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != (int *)0x0) {
    local_2020 = (int *)0x0;
    local_201c = (int *)0x0;
    local_2018 = 0;
    local_8 = 0;
    pcVar1 = *(code **)(*param_1 + 0xb0);
    (*(code *)PTR_guard_check_icall_004070fc)(7,&local_2020,local_14);
    iVar3 = (*pcVar1)();
    piVar7 = local_2020;
    if (iVar3 == 0) {
      while ((piVar7 != local_201c &&
             (_Format = FUN_00402ae0(*(UINT *)*piVar7,local_2014), _Format == local_2014))) {
        iVar3 = *piVar7;
        piVar4 = (int *)(iVar3 + 8);
        piVar5 = piVar4;
        if (7 < *(uint *)(iVar3 + 0x1c)) {
          piVar5 = (int *)*piVar4;
        }
        iVar2 = *piVar7;
        if ((short)*piVar5 == 0) {
          wprintf(_Format);
        }
        else {
          piVar5 = (int *)(iVar2 + 0x20);
          piVar6 = piVar5;
          if (7 < *(uint *)(iVar2 + 0x34)) {
            piVar6 = (int *)*piVar5;
          }
          if ((short)*piVar6 == 0) {
            if (7 < *(uint *)(iVar3 + 0x1c)) {
              piVar4 = (int *)*piVar4;
            }
            wprintf(_Format,piVar4);
          }
          else {
            if (7 < *(uint *)(iVar2 + 0x34)) {
              piVar5 = (int *)*piVar5;
            }
            if (7 < *(uint *)(iVar3 + 0x1c)) {
              piVar4 = (int *)*piVar4;
            }
            wprintf(_Format,piVar4,piVar5);
          }
        }
        wprintf(L"\n");
        piVar7 = piVar7 + 1;
      }
    }
    FUN_00403484((int *)&local_2020);
    param_2 = extraout_EDX;
  }
  ExceptionList = local_10;
  FUN_00404570(local_14 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00402dc3 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __fastcall FUN_00402dc3(int param_1,int param_2,undefined4 *param_3)

{
  wchar_t *_Str1;
  undefined4 *puVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  undefined1 *local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x402dcf;
  local_20 = (int *)0x0;
  local_24 = param_2;
  local_1c = param_1;
  iVar3 = CreateRegisterParameter();
  if (iVar3 < 0) {
    return iVar3;
  }
  puVar6 = (undefined1 *)0x1;
  *param_3 = local_20;
LAB_00402dfa:
  local_18 = puVar6;
  if (param_1 <= (int)puVar6) {
LAB_004031f5:
    iVar5 = -0x7ffbeff8;
    if ((param_1 != 1) && (iVar5 = iVar3, -1 < iVar3)) {
      pcVar7 = *(code **)(*local_20 + 0xa8);
      (*(code *)PTR_guard_check_icall_004070fc)();
      iVar5 = (*pcVar7)();
    }
    return iVar5;
  }
  psVar2 = *(short **)(local_24 + (int)puVar6 * 4);
  if (*psVar2 != 0x2d) {
    FUN_00402bde(10,(int)psVar2);
    iVar3 = -0x7ffbeff8;
    goto LAB_004031f5;
  }
  _Str1 = psVar2 + 1;
  iVar5 = _wcsicmp(_Str1,(wchar_t *)PTR_DAT_0040154c);
  if (((iVar5 == 0) || (iVar5 = _wcsicmp(_Str1,(wchar_t *)PTR_DAT_00401550), iVar5 == 0)) ||
     (iVar5 = _wcsicmp(_Str1,(wchar_t *)PTR_u_help_00401554), iVar5 == 0)) {
    FUN_00402b28();
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  iVar5 = _wcsicmp(_Str1,L"NameSpace");
  if (iVar5 == 0) {
    local_18 = puVar6;
    param_1 = local_1c;
    if (local_1c <= (int)puVar6 + 1) goto LAB_004031c3;
    pcVar7 = *(code **)(*local_20 + 0xc);
LAB_00402e99:
    local_18 = (undefined1 *)((int)puVar6 + 1);
  }
  else {
    iVar5 = _wcsicmp(_Str1,L"ProviderName");
    if (iVar5 == 0) {
      local_18 = puVar6;
      param_1 = local_1c;
      if ((int)puVar6 + 1 < local_1c) {
        pcVar7 = *(code **)(*local_20 + 0x18);
        goto LAB_00402e99;
      }
      goto LAB_004031c3;
    }
    iVar5 = _wcsicmp(_Str1,L"Path");
    if (iVar5 == 0) {
      local_18 = puVar6;
      param_1 = local_1c;
      if ((int)puVar6 + 1 < local_1c) {
        pcVar7 = *(code **)(*local_20 + 0x20);
        goto LAB_00402e99;
      }
      goto LAB_004031c3;
    }
    iVar5 = _wcsicmp(_Str1,L"ClassList");
    if (iVar5 == 0) {
      local_30 = iVar5;
      local_2c = iVar5;
      local_8 = iVar5;
      local_30 = FUN_004036c2();
      local_8 = CONCAT31(local_8._1_3_,1);
      param_1 = local_1c;
      while ((iVar3 = (int)puVar6 + 1, iVar3 < param_1 &&
             (**(short **)(local_24 + 4 + (int)puVar6 * 4) != 0x2d))) {
        puVar1 = (undefined4 *)(local_24 + iVar3 * 4);
        local_18 = (undefined1 *)iVar3;
        piVar4 = (int *)FUN_004033c3(&local_30,&local_28,puVar1);
        if (*piVar4 == local_30) {
          FUN_00403748(&local_30,local_38,extraout_ECX,puVar1);
          puVar6 = (undefined1 *)iVar3;
        }
        else {
          pcVar7 = *(code **)(*local_20 + 0xac);
          (*(code *)PTR_guard_check_icall_004070fc)
                    (0x14,
                     L"Warning: Duplicate class name in \'-ClassList\' parameter has been skipped.",
                     2);
          iVar3 = (*pcVar7)();
          puVar6 = local_18;
          param_1 = local_1c;
          if (iVar3 < 0) {
            FUN_0040342e(&local_30);
            return iVar3;
          }
        }
      }
      local_18 = &stack0xffffffac;
      pcVar7 = *(code **)(*local_20 + 0xf4);
      FUN_00403583(&stack0xffffffac,&local_30);
      (*(code *)PTR_guard_check_icall_004070fc)();
      iVar3 = (*pcVar7)();
      FUN_0040342e(&local_30);
      if (iVar3 < 0) {
        return iVar3;
      }
      local_8 = 0xffffffff;
      local_18 = puVar6;
      goto LAB_004031c3;
    }
    iVar5 = _wcsicmp(_Str1,L"Verbose");
    if (iVar5 == 0) {
      DAT_00406484 = 1;
      local_18 = puVar6;
      param_1 = local_1c;
      goto LAB_004031c3;
    }
    iVar5 = _wcsicmp(_Str1,L"Impersonation");
    if (iVar5 == 0) {
      if ((int)puVar6 + 1 < local_1c) {
        local_18 = (undefined1 *)((int)puVar6 + 1);
      }
      pcVar7 = *(code **)(*local_20 + 0x2c);
    }
    else {
      iVar5 = _wcsicmp(_Str1,L"Decoupled");
      if (iVar5 == 0) {
        pcVar7 = *(code **)(*local_20 + 0x34);
        (*(code *)PTR_guard_check_icall_004070fc)();
        iVar3 = (*pcVar7)();
        if (iVar3 < 0) {
          return iVar3;
        }
        if ((int)local_18 + 1 < local_1c) {
          local_18 = (undefined1 *)((int)local_18 + 1);
        }
        pcVar7 = *(code **)(*local_20 + 0x3c);
      }
      else {
        iVar5 = _wcsicmp(_Str1,L"HostingModel");
        if (iVar5 == 0) {
          if ((int)puVar6 + 1 < local_1c) {
            local_18 = (undefined1 *)((int)puVar6 + 1);
          }
          pcVar7 = *(code **)(*local_20 + 0x44);
        }
        else {
          iVar5 = _wcsicmp(_Str1,L"Localize");
          if (iVar5 == 0) {
            if ((int)puVar6 + 1 < local_1c) {
              local_18 = (undefined1 *)((int)puVar6 + 1);
            }
            pcVar7 = *(code **)(*local_20 + 0x50);
            goto LAB_00402ea4;
          }
          iVar5 = _wcsicmp(_Str1,L"NoAutorecover");
          if (iVar5 != 0) {
            iVar5 = _wcsicmp(_Str1,L"GenerateUnregistration");
            if (iVar5 == 0) {
              pcVar7 = *(code **)(*local_20 + 0x84);
            }
            else {
              iVar5 = _wcsicmp(_Str1,L"SupportWQL");
              if (iVar5 == 0) {
                pcVar7 = *(code **)(*local_20 + 0x90);
              }
              else {
                iVar5 = _wcsicmp(_Str1,L"forceupdate");
                if (iVar5 != 0) {
                  FUN_00402bde(10,*(int *)(local_24 + (int)puVar6 * 4));
                  iVar3 = -0x7ffbeff8;
                  param_1 = local_1c;
                  goto LAB_004031f5;
                }
                pcVar7 = *(code **)(*local_20 + 0xec);
              }
            }
            (*(code *)PTR_guard_check_icall_004070fc)();
            (*pcVar7)();
            param_1 = local_1c;
            goto LAB_004031c3;
          }
          pcVar7 = *(code **)(*local_20 + 100);
        }
      }
    }
  }
LAB_00402ea4:
  (*(code *)PTR_guard_check_icall_004070fc)();
  iVar3 = (*pcVar7)();
  param_1 = local_1c;
  if (iVar3 < 0) {
    return iVar3;
  }
LAB_004031c3:
  puVar6 = (undefined1 *)((int)local_18 + 1);
  goto LAB_00402dfa;
}



/* Function: Catch@00403019 */

undefined * Catch_00403019(void)

{
  return &DAT_0040301f;
}



/* Function: FUN_00403225 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __cdecl FUN_00403225(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  undefined4 extraout_EDX_00;
  wchar_t *pwVar6;
  undefined4 extraout_EDX_01;
  uint uVar7;
  undefined8 uVar8;
  UINT UVar9;
  int *local_50;
  undefined4 local_4c;
  undefined4 local_3c;
  uint local_38;
  wchar_t local_34 [22];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x403231;
  bVar1 = false;
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  SetThreadPreferredUILanguages(0x100,(PCZZWSTR)0x0,(PULONG)0x0);
  setlocale(0,"");
  local_38 = 7;
  local_3c = 0;
  local_4c = (undefined4 *)((uint)local_4c._2_2_ << 0x10);
  local_50 = (int *)0x0;
  local_8 = 1;
  iVar3 = FUN_00402dc3(param_1,param_2,&local_50);
  piVar2 = local_50;
  uVar8 = CONCAT44(extraout_EDX,iVar3);
  if (iVar3 < 0) {
    bVar1 = true;
  }
  else {
    uVar8 = GetProviderSchema(local_50,&local_4c);
    if (-1 < (int)uVar8) {
      uVar8 = CompileSchemaToWMI(piVar2,&local_4c);
    }
  }
  uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar7 = (uint)uVar8;
  if (uVar7 == 0x80041006) {
    FUN_00402c43(piVar2,uVar5);
    pwVar6 = (wchar_t *)0x0;
    UVar9 = 0x2d;
  }
  else {
    if (uVar7 == 0) {
      if (DAT_00406484 != '\0') {
        puVar4 = &local_4c;
        if (7 < local_38) {
          puVar4 = local_4c;
        }
        wprintf(L"%s\n",puVar4);
      }
      FUN_00402bde(9,0);
      FUN_00402c43(piVar2,extraout_EDX_00);
      goto LAB_00403332;
    }
    iVar3 = FUN_00402c43(piVar2,uVar5);
    if (bVar1) {
      FUN_00402b96();
      goto LAB_00403332;
    }
    if (iVar3 != 0) goto LAB_00403332;
    FUN_00402972(local_34,0x10,L"%8X");
    pwVar6 = local_34;
    UVar9 = 8;
  }
  FUN_00402bde(UVar9,(int)pwVar6);
LAB_00403332:
  ~CComPtr<>((int *)&local_50);
  FUN_004034b2(&local_4c);
  FUN_00404704(uVar7 & 0x1fff0000,extraout_EDX_01);
  return;
}



/* Function: ~CComPtr<> */

void __fastcall ~CComPtr<>(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00404e86;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004070fc)(piVar1,DAT_004060c0 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = pvStack_10;
  return;
}



/* Function: ~CComPtr<> */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall ATL::CComPtr<struct IAMAudioInputMixer>::~CComPtr<struct
   IAMAudioInputMixer>(void)
    public: __thiscall ATL::CComPtr<struct IAMResourceControl>::~CComPtr<struct
   IAMResourceControl>(void)
    public: __thiscall ATL::CComPtr<struct IBaseFilter>::~CComPtr<struct IBaseFilter>(void)
    public: __thiscall ATL::CComPtr<struct IBasicAudio>::~CComPtr<struct IBasicAudio>(void)
     10 names - too many to list
   
   Library: Visual Studio 2019 Release */

void __fastcall ~CComPtr<>(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00404e86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004070fc)(piVar1,DAT_004060c0 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004033c3 */

void __thiscall FUN_004033c3(void *this,int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
                    /* WARNING: Load size is inaccurate */
  puVar4 = (undefined4 *)(*this)[1];
  cVar1 = *(char *)((int)puVar4 + 0xd);
  puVar5 = *this;
  while (cVar1 == '\0') {
    iVar2 = _wcsicmp((wchar_t *)puVar4[4],(wchar_t *)*param_2);
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)puVar4[2];
      puVar4 = puVar5;
    }
    else {
      puVar3 = (undefined4 *)*puVar4;
    }
    puVar5 = puVar4;
    puVar4 = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0xd);
  }
                    /* WARNING: Load size is inaccurate */
  if ((puVar5 == *this) || (iVar2 = _wcsicmp((wchar_t *)*param_2,(wchar_t *)puVar5[4]), iVar2 < 0))
  {
                    /* WARNING: Load size is inaccurate */
    puVar5 = *this;
  }
  *param_1 = (int)puVar5;
  return;
}



/* Function: FUN_0040342e */

void __fastcall FUN_0040342e(int *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00404e86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004034fe(param_1);
  lpMem = (LPVOID)*param_1;
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,lpMem);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00403484 */

void __fastcall FUN_00403484(int *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (*param_1 != 0) {
    lpMem = (LPVOID)*param_1;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Function: FUN_004034b2 */

void __fastcall FUN_004034b2(undefined4 *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (7 < (uint)param_1[5]) {
    lpMem = (LPVOID)*param_1;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}



/* Function: FUN_004034e6 */

void __fastcall FUN_004034e6(undefined4 *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  lpMem = (LPVOID)*param_1;
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,lpMem);
  return;
}



/* Function: FUN_004034fe */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_004034fe(int *param_1)

{
  FUN_0040353d(*(int **)(*param_1 + 4));
  *(int *)(*param_1 + 4) = *param_1;
  *(int *)*param_1 = *param_1;
  *(int *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  return;
}



/* Function: FUN_0040353d */

void FUN_0040353d(int *param_1)

{
  char cVar1;
  int *piVar2;
  HANDLE hHeap;
  DWORD dwFlags;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_0040353d((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}



/* Function: FUN_00403583 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __thiscall FUN_00403583(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar6 = FUN_004036c2();
  *(undefined4 *)this = uVar6;
  puVar7 = FUN_004039ac(this,*(undefined4 **)(*param_1 + 4),uVar6,this);
                    /* WARNING: Load size is inaccurate */
  *(undefined4 **)(*this + 4) = puVar7;
                    /* WARNING: Load size is inaccurate */
  piVar2 = *this;
  *(int *)((int)this + 4) = param_1[1];
  piVar3 = (int *)piVar2[1];
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0xd);
    piVar5 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar5 + 0xd);
      piVar3 = piVar5;
      piVar5 = (int *)*piVar5;
    }
    *piVar2 = (int)piVar3;
                    /* WARNING: Load size is inaccurate */
    iVar4 = *(int *)(*this + 4);
    do {
      iVar8 = iVar4;
      iVar4 = *(int *)(iVar8 + 8);
    } while (*(char *)(iVar4 + 0xd) == '\0');
    *(int *)(*this + 8) = iVar8;
  }
  else {
    *piVar2 = (int)piVar2;
                    /* WARNING: Load size is inaccurate */
    *(int *)(*this + 8) = *this;
  }
  return (int *)this;
}



/* Function: Catch_All@00403610 */

void Catch_All_00403610(void)

{
  int unaff_EBP;
  
  FUN_004034fe(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00403628 */

void __thiscall FUN_00403628(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
                    /* WARNING: Load size is inaccurate */
  if (param_1 == *(int **)(*this + 4)) {
    *(int *)(*this + 4) = iVar1;
  }
  else {
    piVar2 = (int *)param_1[1];
    if (param_1 == (int *)piVar2[2]) {
      piVar2[2] = iVar1;
    }
    else {
      *piVar2 = iVar1;
    }
  }
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}



/* Function: FUN_00403676 */

void __thiscall FUN_00403676(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
                    /* WARNING: Load size is inaccurate */
  if (param_1 == *(int *)(*this + 4)) {
    *(int **)(*this + 4) = piVar1;
  }
  else {
    piVar2 = *(int **)(param_1 + 4);
    if (param_1 == *piVar2) {
      *piVar2 = (int)piVar1;
    }
    else {
      piVar2[2] = (int)piVar1;
    }
  }
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}



/* Function: FUN_004036c2 */

void FUN_004036c2(void)

{
  int iVar1;
  
  iVar1 = FUN_004036df();
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(int *)iVar1 = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}



/* Function: FUN_004036df */

void FUN_004036df(void)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  DWORD dwFlags;
  SIZE_T dwBytes;
  exception local_10 [12];
  
  dwBytes = 0x14;
  dwFlags = 0;
  hHeap = GetProcessHeap();
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  if (pvVar1 != (LPVOID)0x0) {
    return;
  }
  FUN_004029d9(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_004053b4);
}



/* Function: FUN_00403720 */

exception * __thiscall FUN_00403720(void *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401544;
  return (exception *)this;
}



/* Function: FUN_00403748 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_00403748(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_20;
  byte local_1c [4];
  undefined4 *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0;
  bVar2 = 1;
                    /* WARNING: Load size is inaccurate */
  puVar5 = *this;
  local_1c[0] = 1;
  puVar6 = (undefined4 *)puVar5[1];
  local_20 = (undefined4 *)this;
  if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
    do {
      puVar5 = puVar6;
      iVar3 = _wcsicmp((wchar_t *)*param_3,(wchar_t *)puVar5[4]);
      bVar1 = (byte)((uint)iVar3 >> 0x18);
      bVar2 = bVar1 >> 7;
      if (iVar3 < 0) {
        puVar6 = (undefined4 *)*puVar5;
      }
      else {
        puVar6 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar6 + 0xd) == '\0');
    local_1c[0] = bVar1 >> 7;
  }
  local_18[0] = puVar5;
  if (bVar2 != 0) {
    if (puVar5 == *(undefined4 **)*local_20) {
      ppuVar4 = &local_20;
      bVar2 = 1;
      goto LAB_004037b0;
    }
    FUN_00403815((int *)local_18);
  }
  puVar6 = local_18[0];
  iVar3 = _wcsicmp((wchar_t *)local_18[0][4],(wchar_t *)*param_3);
  if (-1 < iVar3) {
    *param_1 = puVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  ppuVar4 = (undefined4 **)local_1c;
  bVar2 = local_1c[0];
LAB_004037b0:
  puVar5 = (undefined4 *)FUN_00403882(local_20,ppuVar4,bVar2,puVar5,param_3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Function: Catch_All@00403800 */

void Catch_All_00403800(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00403815 */

int * __fastcall FUN_00403815(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = (int *)*param_1;
  if (*(char *)((int)piVar2 + 0xd) == '\0') {
    piVar3 = (int *)*piVar2;
    if (*(char *)(*piVar2 + 0xd) == '\0') {
      do {
        piVar4 = piVar3;
        piVar3 = (int *)piVar4[2];
      } while (*(char *)(piVar4[2] + 0xd) == '\0');
    }
    else {
      cVar1 = *(char *)(piVar2[1] + 0xd);
      piVar4 = (int *)piVar2[1];
      while ((cVar1 == '\0' && (piVar2 == (int *)*piVar4))) {
        *param_1 = (int)piVar4;
        cVar1 = *(char *)(piVar4[1] + 0xd);
        piVar2 = piVar4;
        piVar4 = (int *)piVar4[1];
      }
      if (*(char *)((int)piVar2 + 0xd) != '\0') {
        return param_1;
      }
    }
    *param_1 = (int)piVar4;
  }
  else {
    *param_1 = piVar2[2];
  }
  return param_1;
}



/* Function: FUN_00403882 */

void __thiscall
FUN_00403882(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (0xcccccca < *(uint *)((int)this + 4)) {
    FUN_00403e26("map/set<T> too long");
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar3 = (int *)FUN_00403a3d(this,param_4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar3[1] = (int)param_3;
                    /* WARNING: Load size is inaccurate */
  if (param_3 == *this) {
    (*this)[1] = piVar3;
                    /* WARNING: Load size is inaccurate */
    **this = piVar3;
                    /* WARNING: Load size is inaccurate */
    *(int **)(*this + 8) = piVar3;
  }
  else if (param_2 == '\0') {
    param_3[2] = piVar3;
                    /* WARNING: Load size is inaccurate */
    if (param_3 == *(undefined4 **)(*this + 8)) {
      *(int **)(*this + 8) = piVar3;
    }
  }
  else {
    *param_3 = piVar3;
                    /* WARNING: Load size is inaccurate */
    if (param_3 == (undefined4 *)**this) {
      **this = (int)piVar3;
    }
  }
  iVar4 = piVar3[1];
  piVar6 = piVar3;
  do {
    if (*(char *)(iVar4 + 0xc) != '\0') {
                    /* WARNING: Load size is inaccurate */
      *(undefined1 *)(*(int *)(*this + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar1 = (int *)piVar6[1];
    piVar5 = *(int **)piVar1[1];
    if (piVar1 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar1[1])[2];
      if ((char)piVar5[3] == '\0') {
LAB_00403933:
        *(undefined1 *)(piVar1 + 3) = 1;
        *(undefined1 *)(piVar5 + 3) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar6[1] + 4);
      }
      else {
        if (piVar6 == (int *)piVar1[2]) {
          FUN_00403676(this,(int)piVar1);
          piVar6 = piVar1;
        }
        *(undefined1 *)(piVar6[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0xc) = 0;
        FUN_00403628(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00403933;
      if (piVar6 == (int *)*piVar1) {
        FUN_00403628(this,piVar1);
        piVar6 = piVar1;
      }
      *(undefined1 *)(piVar6[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0xc) = 0;
      FUN_00403676(this,*(int *)(piVar6[1] + 4));
    }
    iVar4 = piVar6[1];
  } while( true );
}



/* Function: FUN_004039ac */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall
FUN_004039ac(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* WARNING: Load size is inaccurate */
  puVar3 = *this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_00403a3d(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_004039ac(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_004039ac(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  return puVar3;
}



/* Function: Catch_All@00403a1d */

void Catch_All_00403a1d(void)

{
  int unaff_EBP;
  
  FUN_0040353d(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00403a3d */

void __thiscall FUN_00403a3d(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403a5f((undefined4 *)this);
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = *param_1;
  return;
}



/* Function: FUN_00403a5f */

void __fastcall FUN_00403a5f(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004036df();
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}



/* Function: FUN_00403a80 */

void __cdecl FUN_00403a80(SIZE_T param_1)

{
  int iVar1;
  exception local_14 [8];
  undefined4 uStack_c;
  
  if (param_1 != 0) {
    uStack_c = 0x403a94;
    iVar1 = FUN_00402a97(param_1);
    if (iVar1 == 0) {
      FUN_004029d9(local_14);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_14,(ThrowInfo *)&DAT_004053b4);
    }
  }
  return;
}



/* Function: basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> */

/* Library Function - Single Match
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(char const *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2019 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
  uVar1 = char_traits<char>::length(param_1);
  FUN_00403f13(this,(undefined4 *)param_1,uVar1);
  return this;
}



/* Function: FUN_00403ae0 */

exception * __thiscall FUN_00403ae0(void *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401000;
  return (exception *)this;
}



/* Function: FUN_00403b07 */

exception * __thiscall FUN_00403b07(void *this,char *param_1)

{
  char *local_8;
  
  local_8 = param_1;
  exception::exception((exception *)this,&local_8);
  *(undefined ***)this = &PTR_FUN_00401000;
  return (exception *)this;
}



/* Function: ~exception */

void __thiscall exception::~exception(exception *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040459c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~exception(this);
  return;
}



/* Function: operator== */

/* Library Function - Single Match
    public: bool __thiscall std::error_condition::operator==(class std::error_condition const
   &)const 
   
   Library: Visual Studio 2019 Release */

bool __thiscall std::error_condition::operator==(error_condition *this,error_condition *param_1)

{
  bool bVar1;
  
  if ((*(int *)(this + 4) == *(int *)(param_1 + 4)) && (*(int *)this == *(int *)param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Function: FUN_00403b80 */

undefined4 * __thiscall FUN_00403b80(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401008;
  if ((param_1 & 1) != 0) {
    FUN_00402ab6(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403bb0 */

exception * __thiscall FUN_00403bb0(void *this,byte param_1)

{
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_00402ab6(this);
  }
  return (exception *)this;
}



/* Function: FUN_00403bd7 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __thiscall FUN_00403bd7(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 | 0xf;
  if (uVar3 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if (uVar3 / 3 < uVar2) {
      if (-uVar2 - 2 < uVar1) {
        param_1 = 0xfffffffe;
      }
      else {
        param_1 = uVar2 + uVar1;
      }
    }
  }
  FUN_00403a80(param_1 + 1);
  FUN_00403c6d();
  return;
}



/* Function: Catch_All@00403c40 */

undefined * Catch_All_00403c40(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_00403a80(*(int *)(unaff_EBP + 8) + 1);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  return &DAT_00403c61;
}



/* Function: FUN_00403c6d */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00403c6d(void)

{
  int iVar1;
  void *in_EAX;
  undefined4 *_Src;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  
  *(void **)(unaff_EBP + -0x14) = in_EAX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    _Src = unaff_EDI;
    if (0xf < (uint)unaff_EDI[5]) {
      _Src = (undefined4 *)*unaff_EDI;
    }
    memcpy(in_EAX,_Src,*(size_t *)(unaff_EBP + 0xc));
  }
  FUN_00403da2(unaff_EDI,'\x01',0);
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *unaff_EDI = *(undefined4 *)(unaff_EBP + -0x14);
  *unaff_EBX = unaff_ESI;
  FUN_00403cd4(unaff_EDI,iVar1);
  return;
}



/* Function: Catch_All@00403cb3 */

void Catch_All_00403cb3(void)

{
  int unaff_EBP;
  
  FUN_00403da2(*(void **)(unaff_EBP + -0x18),'\x01',0);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00403cd4 */

void __thiscall FUN_00403cd4(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
    pvVar1 = *this;
  }
  *(int *)((int)this + 0x10) = param_1;
  *(undefined1 *)((int)pvVar1 + param_1) = 0;
  return;
}



/* Function: FUN_00403cf9 */

bool __thiscall FUN_00403cf9(void *this,uint param_1,char param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_1 != 0xffffffff) {
    if (*(uint *)((int)this + 0x14) < param_1) {
      FUN_00403bd7(this,param_1);
    }
    else if ((param_2 == '\0') || (0xf < param_1)) {
      if (param_1 == 0) {
        puVar4 = (undefined1 *)this;
        if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
          puVar4 = *this;
        }
        *(undefined4 *)((int)this + 0x10) = 0;
        *puVar4 = 0;
      }
    }
    else {
      uVar3 = *(uint *)((int)this + 0x10);
      if (param_1 < *(uint *)((int)this + 0x10)) {
        uVar3 = param_1;
      }
      FUN_00403da2(this,'\x01',uVar3);
    }
    return param_1 != 0;
  }
  FUN_00403e15();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}



/* Function: FUN_00403d61 */

uint __thiscall FUN_00403d61(void *this,undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  void *pvVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    in_EAX = (undefined4 *)this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      in_EAX = *this;
    }
    if (in_EAX <= param_1) {
      pvVar2 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar2 = *this;
      }
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x10) + (int)pvVar2);
      return CONCAT31((int3)((uint)puVar1 >> 8),param_1 < puVar1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



/* Function: FUN_00403da2 */

void __thiscall FUN_00403da2(void *this,char param_1,size_t param_2)

{
  LPVOID _Src;
  
  if ((param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
                    /* WARNING: Load size is inaccurate */
    _Src = *this;
    if (param_2 != 0) {
      memcpy(this,_Src,param_2);
    }
    FUN_00402ab6(_Src);
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  FUN_00403cd4(this,param_2);
  return;
}



/* Function: FUN_00403e15 */

void FUN_00403e15(void)

{
  code *pcVar1;
  
  FUN_00403e26("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403e26 */

void FUN_00403e26(char *param_1)

{
  undefined1 local_10 [12];
  
  FUN_00403b07(local_10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00405288);
}



/* Function: FUN_00403e4e */

void FUN_00403e4e(char *param_1)

{
  undefined1 local_10 [12];
  
  FUN_00403b07(local_10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_004052c4);
}



/* Function: FUN_00403e76 */

void FUN_00403e76(void)

{
  code *pcVar1;
  
  FUN_00403e4e("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403e87 */

undefined4 * __thiscall FUN_00403e87(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  void *_Dst;
  undefined4 *puVar3;
  uint _Size;
  
  if ((uint)param_1[4] < param_2) {
    FUN_00403e76();
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  _Size = param_1[4] - param_2;
  if (param_3 < _Size) {
    _Size = param_3;
  }
  if ((undefined4 *)this == param_1) {
    FUN_00404089(this,param_2 + _Size);
    FUN_004040b2(this,0,param_2);
  }
  else {
    bVar2 = FUN_00403cf9(this,_Size,'\0');
    if (bVar2) {
      if (0xf < (uint)param_1[5]) {
        param_1 = (undefined4 *)*param_1;
      }
      _Dst = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        _Dst = *this;
      }
      if (_Size != 0) {
        memcpy(_Dst,(void *)(param_2 + (int)param_1),_Size);
      }
      FUN_00403cd4(this,_Size);
    }
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403f13 */

undefined4 * __thiscall FUN_00403f13(void *this,undefined4 *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  
  uVar2 = FUN_00403d61(this,param_1);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_00403cf9(this,param_2,'\0');
    if (bVar1) {
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *this;
      }
      if (param_2 != 0) {
        memcpy(pvVar3,param_1,param_2);
      }
      FUN_00403cd4(this,param_2);
    }
  }
  else {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar3 = *this;
    }
    this = FUN_00403e87(this,(undefined4 *)this,(int)param_1 - (int)pvVar3,param_2);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403f90 */

int * FUN_00403f90(int *param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00404e86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0040421c(param_2);
  *param_1 = param_2;
  if (iVar1 == 0) {
    param_1[1] = (int)&PTR_PTR_00406008;
  }
  else {
    param_1[1] = (int)&PTR_PTR_00406000;
  }
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00404000 */

void __thiscall FUN_00404000(void *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = this;
  return;
}



/* Function: equivalent */

/* Library Function - Single Match
    public: virtual bool __thiscall std::error_category::equivalent(class std::error_code const
   &,int)const 
   
   Library: Visual Studio 2019 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  bool bVar1;
  
  if ((this == *(error_category **)(param_1 + 4)) && (*(int *)param_1 == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Function: FUN_00404050 */

void __thiscall FUN_00404050(void *this,undefined4 param_1,error_condition *param_2)

{
  code *pcVar1;
  error_condition *this_00;
  void *local_c;
  void *pvStack_8;
  
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0xc);
  local_c = this;
  pvStack_8 = this;
  (*(code *)PTR_guard_check_icall_004070fc)(&local_c,param_1);
  this_00 = (error_condition *)(*pcVar1)();
  std::error_condition::operator==(this_00,param_2);
  return;
}



/* Function: FUN_00404089 */

void * __thiscall FUN_00404089(void *this,uint param_1)

{
  code *pcVar1;
  void *pvVar2;
  
  if (param_1 <= *(uint *)((int)this + 0x10)) {
    FUN_00403cd4(this,param_1);
    return this;
  }
  FUN_00403e76();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



/* Function: FUN_004040b2 */

undefined4 * __thiscall FUN_004040b2(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  size_t _Size;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
    FUN_00403e76();
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar2)();
    return puVar4;
  }
  if (param_2 < uVar1 - param_1) {
    if (param_2 != 0) {
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *this;
      }
      _Size = (uVar1 - param_2) - param_1;
      if (_Size != 0) {
        memmove((void *)((int)pvVar3 + param_1),(void *)((int)((int)pvVar3 + param_1) + param_2),
                _Size);
      }
      FUN_00403cd4(this,uVar1 - param_2);
    }
  }
  else {
    FUN_00403cd4(this,param_1);
  }
  return (undefined4 *)this;
}



/* Function: length */

/* Library Function - Single Match
    public: static unsigned int __cdecl std::char_traits<char>::length(char const *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2019 Release */

uint __cdecl std::char_traits<char>::length(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  if (*param_1 == '\0') {
    return 0;
  }
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}



/* Function: FUN_00404150 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00404150(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0040421c(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_00404180 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00404180(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  if (param_2 == 1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (param_1,"iostream stream error");
  }
  else {
    FUN_00404150(param_1,param_2);
  }
  return param_1;
}



/* Function: FUN_004041c0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_004041c0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0040424e(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_004041f0 */

char * FUN_004041f0(void)

{
  return "generic";
}



/* Function: FUN_00404200 */

char * FUN_00404200(void)

{
  return "iostream";
}



/* Function: FUN_00404210 */

char * FUN_00404210(void)

{
  return "system";
}



/* Function: FUN_0040421c */

int __cdecl FUN_0040421c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_004012c0;
  if (PTR_s_address_family_not_supported_004012c4 != (undefined *)0x0) {
    do {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
      piVar1 = piVar2 + 3;
      piVar2 = piVar2 + 2;
    } while (*piVar1 != 0);
  }
  return 0;
}



/* Function: FUN_0040424e */

int __cdecl FUN_0040424e(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_00401068;
  if (PTR_s_permission_denied_0040106c != (undefined *)0x0) {
    do {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
      piVar1 = piVar2 + 3;
      piVar2 = piVar2 + 2;
    } while (*piVar1 != 0);
  }
  return 0;
}



/* Function: FUN_00404280 */

undefined4 FUN_00404280(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_004044df();
  DAT_00406150 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_004048d4(1);
  __set_app_type(iVar2);
  DAT_00406490 = 0xffffffff;
  DAT_00406494 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_00406164;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_00406158;
  FUN_00404930();
  if (DAT_00406104 == 0) {
    __setusermatherr(FUN_00404930);
  }
  FUN_00404b37();
  return 0;
}



/* Function: FUN_004042f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004042f0(void)

{
  _DAT_00406154 = DAT_00406160;
  _DAT_0040614c =
       __wgetmainargs(&DAT_00406140,(wchar_t ***)&DAT_00406144,(wchar_t ***)&DAT_00406148,
                      DAT_0040615c,(_startupinfo *)&DAT_00406154);
  return;
}



/* Function: FUN_00404329 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00404329(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  void *local_14;
  
  iVar5 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar4 = 0;
    LOCK();
    iVar3 = iVar5;
    if (DAT_00406488 != 0) {
      iVar4 = DAT_00406488;
      iVar3 = DAT_00406488;
    }
    DAT_00406488 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_00404371;
    if (iVar4 == iVar5) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00404371:
  if (DAT_0040648c == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0040648c == 0) {
    DAT_0040648c = 1;
    iVar5 = FUN_004044a8((undefined4 *)&DAT_00401630,(undefined4 *)&DAT_0040163c);
    if (iVar5 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_0040613c = 1;
  }
  if (DAT_0040648c == 1) {
    initterm(&DAT_00401618,&DAT_0040162c);
    DAT_0040648c = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00406488 = 0;
    UNLOCK();
  }
  if ((DAT_00406498 != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00406498), pcVar2 = DAT_00406498, BVar6 != 0
     )) {
    (*(code *)PTR_guard_check_icall_004070fc)(0,2,0);
    (*pcVar2)();
  }
  DAT_00406138 = FUN_00403225(DAT_00406140,DAT_00406144);
  if (DAT_00406150 != 0) {
    if (DAT_0040613c == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_00406138;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_00406138);
}



/* Function: FUN_004044a8 */

void __cdecl FUN_004044a8(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 < param_2) {
    do {
      if (iVar2 != 0) {
        return;
      }
      pcVar1 = (code *)*param_1;
      if (pcVar1 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_004070fc)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_004044df */

bool FUN_004044df(void)

{
  short sVar1;
  int iVar2;
  
  if ((IMAGE_DOS_HEADER_00400000.e_magic != (char  [2])0x5a4d) ||
     (*(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) != 0x4550)) {
    return false;
  }
  sVar1 = *(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ +
                    (IMAGE_DOS_HEADER_00400000.e_lfanew - 4));
  if (sVar1 == 0x10b) {
    if (*(uint *)(IMAGE_DOS_HEADER_00400000.e_program + IMAGE_DOS_HEADER_00400000.e_lfanew + 0x34) <
        0xf) {
      return false;
    }
    iVar2 = *(int *)(IMAGE_NT_HEADERS32_004000e8.Signature + IMAGE_DOS_HEADER_00400000.e_lfanew);
  }
  else {
    if (sVar1 != 0x20b) {
      return false;
    }
    if (*(uint *)(&UNK_00400080.field_0x4 + IMAGE_DOS_HEADER_00400000.e_lfanew) < 0xf) {
      return false;
    }
    iVar2 = *(int *)((int)(IMAGE_NT_HEADERS32_004000e8.OptionalHeader.DataDirectory + -0xd) +
                    IMAGE_DOS_HEADER_00400000.e_lfanew);
  }
  return iVar2 != 0;
}



/* Function: entry */

void entry(void)

{
  FUN_00404a99();
  FUN_00404329();
  return;
}



/* Function: FUN_00404570 */

void __fastcall FUN_00404570(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_004060c0) {
    return;
  }
  FUN_00404c1b(param_1,param_2);
  return;
}



/* Function: what */

char * __thiscall exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* Function: ~exception */

void __thiscall exception::~exception(exception *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040459c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~exception(this);
  return;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,exception *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004045b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: Unwind@004045c0 */

void __cdecl Unwind_004045c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x004045c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* Function: FUN_004045d0 */

type_info * __thiscall FUN_004045d0(void *this,byte param_1)

{
  type_info::~type_info((type_info *)this);
  if ((param_1 & 1) != 0) {
    FUN_00402ab6(this);
  }
  return (type_info *)this;
}



/* Function: purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* Function: FUN_0040460c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_0040460c(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00405320;
  uStack_c = 0x404618;
  local_20[0] = DAT_00406494;
  if (DAT_00406494 == -1) {
    (*(code *)PTR_guard_check_icall_004070fc)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_00406494;
    local_24 = DAT_00406490;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_00406494 = local_20[0];
    DAT_00406490 = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_004046a6();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_004046a6 */

void FUN_004046a6(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_004046b5 */

int __cdecl FUN_004046b5(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_0040460c(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,char **param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004046d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x004046de. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: __EH_epilog3 */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-3];
  *unaff_EBP = unaff_retaddr;
  return;
}



/* Function: FUN_00404704 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00404704(undefined4 param_1,undefined4 param_2)

{
  uint unaff_EBP;
  
  FUN_00404570(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP,param_2);
  return;
}



/* Function: __EH_prolog3 */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004060c0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: __EH_prolog3_GS */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_GS
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_GS(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004060c0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: __EH_prolog3_catch */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_catch(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004060c0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004047ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004047d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: FUN_004047f0 */

undefined4 FUN_004047f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
    terminate();
  }
  return 0;
}



/* Function: FUN_00404840 */

undefined4 FUN_00404840(void)

{
  SetUnhandledExceptionFilter(FUN_004047f0);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00404860 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00404860(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_004048d4 */

undefined4 __cdecl FUN_004048d4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00404860(), iVar2 != 0)) {
    uVar3 = 2;
    if (*(short *)(iVar2 + 0x5c) != 2) {
      if (*(short *)(iVar2 + 0x5c) == 3) {
        param_1 = 1;
      }
      return param_1;
    }
  }
  return uVar3;
}



/* Function: _amsg_exit */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00404916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00404930 */

undefined4 FUN_00404930(void)

{
  return 0;
}



/* Function: __FindPESection */

/* Library Function - Single Match
    __FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(pImageBase + 0x3c);
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



/* Function: __IsNonwritableInCurrentImage */

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  bool bVar1;
  undefined3 extraout_var;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_00404bc0;
  local_14 = ExceptionList;
  local_c = DAT_004060c0 ^ 0x405360;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00404a60((short *)&IMAGE_DOS_HEADER_00400000);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_00404a60 */

bool __cdecl FUN_00404a60(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00404a99 */

void FUN_00404a99(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_004060c0 == 0xbb40e64e) || ((DAT_004060c0 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_10);
    local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
    DVar2 = GetCurrentProcessId();
    local_8 = local_8 ^ DVar2;
    DVar2 = GetCurrentThreadId();
    local_8 = local_8 ^ DVar2;
    DVar2 = GetTickCount();
    local_8 = DVar2 ^ local_8 ^ (uint)&local_8;
    QueryPerformanceCounter(&local_18);
    local_8 = local_18.s.HighPart ^ local_18.s.LowPart ^ local_8;
    if ((local_8 == 0xbb40e64e) ||
       (uVar1 = DAT_004060c0 & 0xffff0000, DAT_004060c0 = local_8, uVar1 == 0)) {
      DAT_004060c0 = 0xbb40e64f;
    }
  }
  DAT_00406100 = ~DAT_004060c0;
  return;
}



/* Function: FUN_00404b37 */

void FUN_00404b37(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: __SEH_prolog4 */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004060c0 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: __SEH_epilog4 */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



/* Function: FUN_00404bc0 */

void __cdecl
FUN_00404bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_004060c0,FUN_00404570,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00404beb */

void __cdecl FUN_00404beb(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* Function: FUN_00404c1b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00404c1b(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  undefined1 local_328 [796];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  _DAT_00406278 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040627c = &stack0x00000004;
  _DAT_004061b8 = 0x10001;
  _DAT_00406168 = 0xc0000409;
  _DAT_0040616c = 1;
  _DAT_00406178 = 3;
  DAT_0040617c = 2;
  DAT_00406180 = DAT_004060c0;
  DAT_00406184 = DAT_00406100;
  uStack_c = DAT_004060c0;
  uStack_8 = DAT_00406100;
  _DAT_00406174 = unaff_retaddr;
  _DAT_00406244 = in_GS;
  _DAT_00406248 = in_FS;
  _DAT_0040624c = in_ES;
  _DAT_00406250 = in_DS;
  _DAT_00406254 = unaff_EDI;
  _DAT_00406258 = unaff_ESI;
  _DAT_0040625c = unaff_EBX;
  _DAT_00406260 = param_2;
  _DAT_00406264 = param_1;
  _DAT_00406268 = in_EAX;
  _DAT_0040626c = unaff_EBP;
  DAT_00406270 = unaff_retaddr;
  _DAT_00406274 = in_CS;
  _DAT_00406280 = in_SS;
  FUN_00404beb((_EXCEPTION_POINTERS *)&PTR_DAT_0040153c);
  return;
}



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x00404d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x00404d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404d69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: __alloca_probe */

/* WARNING: This is an inlined function */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}



/* Function: Unwind@00404dd4 */

void Unwind_00404dd4(void)

{
  int unaff_EBP;
  
  FUN_00403484((int *)(unaff_EBP + -0x201c));
  return;
}



/* Function: Unwind@00404e14 */

void Unwind_00404e14(void)

{
  int unaff_EBP;
  
  thunk_FUN_0040342e((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@00404e44 */

void Unwind_00404e44(void)

{
  int unaff_EBP;
  
  FUN_004034b2((undefined4 *)(unaff_EBP + -0x48));
  return;
}



/* Function: Unwind@00404e4c */

void Unwind_00404e4c(void)

{
  int unaff_EBP;
  
  ~CComPtr<>((int *)(unaff_EBP + -0x4c));
  return;
}



/* Function: Unwind@00404ecc */

void Unwind_00404ecc(void)

{
  int unaff_EBP;
  
  FUN_004034e6(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}



/* Function: FUN_00404f70 */

void FUN_00404f70(void)

{
  PTR_PTR_00406000 = (undefined *)&PTR_FUN_00401008;
  return;
}



/* Function: FUN_00404f90 */

void FUN_00404f90(void)

{
  PTR_PTR_00406004 = (undefined *)&PTR_FUN_00401008;
  return;
}



/* Function: FUN_00404fb0 */

void FUN_00404fb0(void)

{
  PTR_PTR_00406008 = (undefined *)&PTR_FUN_00401008;
  return;
}



