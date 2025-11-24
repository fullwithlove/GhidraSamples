/* Function: FUN_004014c0 */

void __fastcall FUN_004014c0(undefined4 *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar3;
  WCHAR local_a8 [80];
  uint local_8;
  
  local_8 = DAT_00403040 ^ (uint)&stack0xfffffffc;
  DVar1 = GetEnvironmentVariableW(L"OutputEncoding",local_a8,0x50);
  *param_1 = 1;
  uVar3 = extraout_EDX;
  if (((DVar1 != 0) && (DVar1 < 0x4f)) &&
     (iVar2 = _wcsicmp(local_a8,L"Unicode"), uVar3 = extraout_EDX_00, iVar2 != 0)) {
    iVar2 = _wcsicmp(local_a8,L"Ansi");
    if (iVar2 == 0) {
      *param_1 = 0;
      uVar3 = extraout_EDX_01;
    }
    else {
      iVar2 = _wcsicmp(local_a8,L"UTF8");
      uVar3 = extraout_EDX_02;
      if ((iVar2 == 0) || (iVar2 = _wcsicmp(local_a8,L"UTF-8"), uVar3 = extraout_EDX_03, iVar2 == 0)
         ) {
        *param_1 = 0xfde9;
      }
    }
  }
  FUN_00401d20(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040157d */

DWORD __fastcall FUN_0040157d(FILE *param_1,undefined4 *param_2)

{
  int _FileHandle;
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  FILE *local_8;
  
  local_8 = param_1;
  _FileHandle = _fileno(param_1);
  hFile = (HANDLE)_get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    return 6;
  }
  DVar1 = GetFileType(hFile);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      DVar1 = GetLastError();
      return DVar1;
    }
  }
  else if (((DVar1 & 0xffff7fff) == 2) &&
          ((BVar2 = GetConsoleMode(hFile,(LPDWORD)&local_8), BVar2 != 0 ||
           (DVar1 = GetLastError(), DVar1 != 6)))) {
    uVar3 = 1;
    goto LAB_004015eb;
  }
  uVar3 = 0;
LAB_004015eb:
  *param_2 = uVar3;
  return 0;
}



/* Function: FUN_004015f9 */

void __fastcall FUN_004015f9(FILE *param_1,wchar_t *param_2)

{
  DWORD DVar1;
  int iVar2;
  wchar_t *pwVar3;
  SIZE_T uBytes;
  LPSTR lpMultiByteStr;
  LPSTR _Buf;
  int iVar4;
  uint _MaxCharCount;
  UINT local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 1;
  lpMultiByteStr = (LPSTR)0x0;
  fflush(param_1);
  DVar1 = FUN_0040157d(param_1,&local_c);
  if ((DVar1 != 0) || (local_c != 0)) {
    iVar4 = 0x20000;
    iVar2 = _fileno(param_1);
    local_8 = _setmode(iVar2,iVar4);
  }
  local_10 = FUN_004014c0(&local_14);
  if (local_c == 0) {
    pwVar3 = wcschr(param_2,L'\r');
    if (pwVar3 == (wchar_t *)0x0) {
      iVar2 = 0x4000;
      if (local_10 != 0) {
        iVar2 = 0x20000;
      }
    }
    else {
      iVar2 = 0x8000;
    }
    iVar4 = _fileno(param_1);
    local_8 = _setmode(iVar4,iVar2);
    if (local_10 == 0) {
      uBytes = WideCharToMultiByte(local_14,0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((uBytes != 0) &&
         (lpMultiByteStr = (LPSTR)LocalAlloc(0x40,uBytes), lpMultiByteStr != (LPSTR)0x0)) {
        WideCharToMultiByte(local_14,0,param_2,-1,lpMultiByteStr,uBytes,(LPCSTR)0x0,(LPBOOL)0x0);
        _MaxCharCount = uBytes - 1;
        _Buf = lpMultiByteStr;
        iVar2 = _fileno(param_1);
        _write(iVar2,_Buf,_MaxCharCount);
      }
      goto LAB_00401705;
    }
  }
  fwprintf(param_1,L"%ls",param_2);
LAB_00401705:
  fflush(param_1);
  iVar2 = local_8;
  iVar4 = _fileno(param_1);
  _setmode(iVar4,iVar2);
  if (lpMultiByteStr != (LPSTR)0x0) {
    LocalFree(lpMultiByteStr);
  }
  return;
}



/* Function: FUN_00401737 */

void __cdecl FUN_00401737(FILE *param_1,DWORD param_2)

{
  DWORD DVar1;
  va_list local_c;
  wchar_t *local_8;
  
  local_c = &stack0x0000000c;
  DVar1 = FormatMessageW(0x900,DAT_004033ec,param_2,0,(LPWSTR)&local_8,0,&local_c);
  if (DVar1 != 0) {
    FUN_004015f9(param_1,local_8);
    LocalFree(local_8);
  }
  return;
}



/* Function: FUN_00401784 */

void __cdecl FUN_00401784(FILE *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t *_Dst;
  
  iVar1 = _vscwprintf(param_2,&stack0x0000000c);
  if (0 < iVar1) {
    _Dst = (wchar_t *)LocalAlloc(0x40,(iVar1 + 1U) * 2);
    if (_Dst != (wchar_t *)0x0) {
      vswprintf_s(_Dst,iVar1 + 1U,param_2,&stack0x0000000c);
      FUN_004015f9(param_1,_Dst);
      LocalFree(_Dst);
    }
  }
  return;
}



/* Function: FUN_004017e2 */

void __fastcall FUN_004017e2(wchar_t *param_1,undefined4 param_2)

{
  DWORD DVar1;
  FILE *pFVar2;
  wchar_t *pwVar3;
  wchar_t *local_8;
  
  local_8 = param_1;
  DVar1 = FormatMessageW(0x900,DAT_004033ec,(DWORD)param_1,0,(LPWSTR)&local_8,0,(va_list *)0x0);
  if (DVar1 != 0) {
    pwVar3 = L"> %ls:";
    pFVar2 = FUN_00402299(2);
    FUN_00401784(pFVar2,pwVar3);
    LocalFree(local_8);
    local_8 = (wchar_t *)GetSocketErrorMessageW(param_2);
    if (local_8 != (wchar_t *)0x0) {
      pFVar2 = FUN_00402299(2);
      FUN_004015f9(pFVar2,local_8);
      LocalFree(local_8);
    }
    pFVar2 = FUN_00402299(2);
    FUN_004015f9(pFVar2,L"\n");
  }
  return;
}



/* Function: FUN_00401872 */

void __fastcall FUN_00401872(FILE *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined *_Buf;
  int iVar3;
  uint _MaxCharCount;
  int local_10;
  int local_c;
  int local_8;
  
  DVar1 = FUN_0040157d(param_1,&local_8);
  if ((DVar1 == 0) && (local_8 == 0)) {
    iVar2 = FUN_004014c0(&local_8);
    if (iVar2 == 0) {
      if (local_8 == 0xfde9) {
        iVar2 = fgetpos(param_1,(fpos_t *)&local_10);
        if ((iVar2 == 0) && (local_10 == 0 && local_c == 0)) {
          iVar3 = 0x8000;
          iVar2 = _fileno(param_1);
          _setmode(iVar2,iVar3);
          _MaxCharCount = 3;
          _Buf = &DAT_0040117c;
          iVar2 = _fileno(param_1);
          _write(iVar2,_Buf,_MaxCharCount);
        }
      }
    }
    else {
      iVar2 = fgetpos(param_1,(fpos_t *)&local_10);
      if ((iVar2 == 0) && (local_10 == 0 && local_c == 0)) {
        iVar3 = 0x20000;
        iVar2 = _fileno(param_1);
        _setmode(iVar2,iVar3);
        fwprintf(param_1,L"");
      }
    }
  }
  return;
}



/* Function: FUN_0040193a */

void FUN_0040193a(int param_1,int param_2)

{
  short sVar1;
  FILE *pFVar2;
  int iVar3;
  DWORD DVar4;
  wchar_t local_20c [258];
  uint local_8;
  
  local_8 = DAT_00403040 ^ (uint)&stack0xfffffffc;
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  SetThreadUILanguage(0);
  pFVar2 = FUN_00402299(1);
  FUN_00401872(pFVar2);
  pFVar2 = FUN_00402299(2);
  FUN_00401872(pFVar2);
  iVar3 = Ordinal_115(0x101,&DAT_00403420);
  if (iVar3 != 0) {
    FUN_004017e2((wchar_t *)0x2713,iVar3);
  }
  if (param_1 < 2) {
    iVar3 = GetHostNameW(local_20c,0x101);
    if (-1 < iVar3) {
      pFVar2 = FUN_00402299(1);
      FUN_004015f9(pFVar2,local_20c);
      pFVar2 = FUN_00402299(1);
      FUN_004015f9(pFVar2,L"\n");
      iVar3 = 0;
      goto LAB_004019da;
    }
    DVar4 = GetLastError();
    FUN_004017e2((wchar_t *)0x2712,DVar4);
  }
  else {
    sVar1 = **(short **)(param_2 + 4);
    if (((sVar1 == 0x2f) || (sVar1 == 0x2d)) && ((*(short **)(param_2 + 4))[1] == 0x3f)) {
      DVar4 = 10000;
      iVar3 = 1;
    }
    else {
      DVar4 = 0x2714;
      iVar3 = 2;
    }
    pFVar2 = FUN_00402299(iVar3);
    FUN_00401737(pFVar2,DVar4);
  }
  iVar3 = 1;
LAB_004019da:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}



/* Function: FUN_00401a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401a40(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00401c9f();
  DAT_004030b8 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_00401e24(1);
  __set_app_type(iVar2);
  _DAT_004033f0 = 0xffffffff;
  _DAT_004033f4 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_004030cc;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_004030c0;
  FUN_00401e80();
  if (DAT_00403000 == 0) {
    __setusermatherr(FUN_00401e80);
  }
  FUN_00402087();
  return 0;
}



/* Function: FUN_00401ab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401ab0(void)

{
  _DAT_004030bc = DAT_004030c8;
  _DAT_004030b4 =
       __wgetmainargs(&DAT_004030a8,(wchar_t ***)&DAT_004030ac,(wchar_t ***)&DAT_004030b0,
                      DAT_004030c4,(_startupinfo *)&DAT_004030bc);
  return;
}



/* Function: FUN_00401ae9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00401ae9(void)

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
    if (DAT_004033f8 != 0) {
      iVar4 = DAT_004033f8;
      iVar3 = DAT_004033f8;
    }
    DAT_004033f8 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_00401b31;
    if (iVar4 == iVar5) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00401b31:
  if (DAT_004033fc == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_004033fc == 0) {
    DAT_004033fc = 1;
    iVar5 = FUN_00401c68((undefined4 *)&DAT_004010d4,(undefined4 *)&DAT_004010e0);
    if (iVar5 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_004030a4 = 1;
  }
  if (DAT_004033fc == 1) {
    initterm(&DAT_004010c8,&DAT_004010d0);
    DAT_004033fc = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_004033f8 = 0;
    UNLOCK();
  }
  if ((DAT_00403400 != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00403400), pcVar2 = DAT_00403400, BVar6 != 0
     )) {
    (*(code *)PTR_guard_check_icall_00404108)(0,2,0);
    (*pcVar2)();
  }
  DAT_004030a0 = FUN_0040193a(DAT_004030a8,DAT_004030ac);
  if (DAT_004030b8 != 0) {
    if (DAT_004030a4 == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_004030a0;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_004030a0);
}



/* Function: FUN_00401c68 */

void __cdecl FUN_00401c68(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_00404108)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_00401c9f */

bool FUN_00401c9f(void)

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
    iVar2 = *(int *)(&UNK_004000e8 + IMAGE_DOS_HEADER_00400000.e_lfanew);
  }
  else {
    if (sVar1 != 0x20b) {
      return false;
    }
    if (*(uint *)(&UNK_00400080.field_0x4 + IMAGE_DOS_HEADER_00400000.e_lfanew) < 0xf) {
      return false;
    }
    iVar2 = *(int *)(IMAGE_NT_HEADERS32_004000f0.Signature + IMAGE_DOS_HEADER_00400000.e_lfanew + 8)
    ;
  }
  return iVar2 != 0;
}



/* Function: entry */

void entry(void)

{
  FUN_00401fe9();
  FUN_00401ae9();
  return;
}



/* Function: FUN_00401d20 */

void __fastcall FUN_00401d20(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00403040) {
    return;
  }
  FUN_0040216b(param_1,param_2);
  return;
}



/* Function: FUN_00401d40 */

undefined4 FUN_00401d40(int *param_1)

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



/* Function: FUN_00401d90 */

undefined4 FUN_00401d90(void)

{
  SetUnhandledExceptionFilter(FUN_00401d40);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00401db0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00401db0(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00401e24 */

undefined4 __cdecl FUN_00401e24(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00401db0(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00401e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00401e80 */

undefined4 FUN_00401e80(void)

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
  
  pcStack_10 = FUN_00402110;
  local_14 = ExceptionList;
  local_c = DAT_00403040 ^ 0x402300;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00401fb0((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00401fb0 */

bool __cdecl FUN_00401fb0(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00401fe9 */

void FUN_00401fe9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00403040 == 0xbb40e64e) || ((DAT_00403040 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00403040 & 0xffff0000, DAT_00403040 = local_8, uVar1 == 0)) {
      DAT_00403040 = 0xbb40e64f;
    }
  }
  DAT_00403080 = ~DAT_00403040;
  return;
}



/* Function: FUN_00402087 */

void FUN_00402087(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020a0. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00403040 ^ (uint)&param_2;
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



/* Function: FUN_00402110 */

void __cdecl
FUN_00402110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00403040,FUN_00401d20,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040213b */

void __cdecl FUN_0040213b(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0040216b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040216b(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_004031e0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_004031e4 = &stack0x00000004;
  _DAT_00403120 = 0x10001;
  _DAT_004030d0 = 0xc0000409;
  _DAT_004030d4 = 1;
  _DAT_004030e0 = 3;
  DAT_004030e4 = 2;
  DAT_004030e8 = DAT_00403040;
  DAT_004030ec = DAT_00403080;
  uStack_c = DAT_00403040;
  uStack_8 = DAT_00403080;
  _DAT_004030dc = unaff_retaddr;
  _DAT_004031ac = in_GS;
  _DAT_004031b0 = in_FS;
  _DAT_004031b4 = in_ES;
  _DAT_004031b8 = in_DS;
  _DAT_004031bc = unaff_EDI;
  _DAT_004031c0 = unaff_ESI;
  _DAT_004031c4 = unaff_EBX;
  _DAT_004031c8 = param_2;
  _DAT_004031cc = param_1;
  _DAT_004031d0 = in_EAX;
  _DAT_004031d4 = unaff_EBP;
  DAT_004031d8 = unaff_retaddr;
  _DAT_004031dc = in_CS;
  _DAT_004031e8 = in_SS;
  FUN_0040213b((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040227f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_00402299 */

FILE * __cdecl FUN_00402299(int param_1)

{
  FILE *pFVar1;
  
  pFVar1 = __iob_func();
  return pFVar1 + param_1;
}



/* Function: __iob_func */

FILE * __cdecl __iob_func(void)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004022b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = __iob_func();
  return pFVar1;
}



