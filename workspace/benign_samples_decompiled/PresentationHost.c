/* Function: FUN_004046c0 */

void FUN_004046c0(void)

{
  FUN_0041073f(FUN_00411c00);
  return;
}



/* Function: FUN_004046e0 */

void FUN_004046e0(void)

{
  FUN_0041073f(FUN_00411c30);
  return;
}



/* Function: FUN_00404700 */

void FUN_00404700(void)

{
  FUN_0041073f(FUN_00411c80);
  return;
}



/* Function: FUN_00404720 */

void FUN_00404720(void)

{
  FUN_0041073f(FUN_00411cd0);
  return;
}



/* Function: FUN_00404740 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404740(void)

{
  int iVar1;
  
  iVar1 = FUN_00408c08((LPCRITICAL_SECTION)&DAT_00413a50);
  if (-1 < iVar1) {
    _DAT_00413a44 = 0x24;
  }
  _DAT_00413a40 = &PTR_FUN_00401688;
  FUN_0041073f(FUN_00411d10);
  return;
}



/* Function: FUN_00404780 */

void FUN_00404780(void)

{
  FUN_0041073f(FUN_00411d70);
  return;
}



/* Function: FUN_004047a0 */

void FUN_004047a0(void)

{
  FUN_0041073f(FUN_00411d50);
  return;
}



/* Function: FUN_004047c0 */

void FUN_004047c0(void)

{
  FUN_0041073f(FUN_00411d30);
  return;
}



/* Function: FUN_004047e0 */

void FUN_004047e0(void)

{
  FUN_00408c08((LPCRITICAL_SECTION)&DAT_00413024);
  FUN_0041073f(FUN_00411d90);
  return;
}



/* Function: FUN_00404800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404800(void)

{
  int iVar1;
  
  iVar1 = FUN_00408c08((LPCRITICAL_SECTION)&DAT_004131bc);
  if (iVar1 < 0) {
    _DAT_004131b8 = 0;
  }
  FUN_0041073f(FUN_00411da0);
  return;
}



/* Function: FUN_00404830 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404830(void)

{
  int iVar1;
  
  iVar1 = FUN_00408c08((LPCRITICAL_SECTION)&DAT_00413058);
  if (-1 < iVar1) {
    _DAT_00413048 = 0x28;
  }
  FUN_0041073f(FUN_00411dc0);
  return;
}



/* Function: FUN_00404860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404860(void)

{
  _DAT_00413a74 = GetProcessHeap();
  _DAT_00413a70 = &PTR_FUN_00401790;
  DAT_00413a78 = 0;
  FUN_0041073f(FUN_00411dd0);
  return;
}



/* Function: FUN_00404890 */

void FUN_00404890(void)

{
  FUN_0041073f(FUN_00411de0);
  return;
}



/* Function: FUN_004048a2 */

void FUN_004048a2(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)*param_1 + 8);
  (*(code *)PTR_guard_check_icall_00414398)((int *)*param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_004048c8 */

void FUN_004048c8(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar2);
    (*pcVar3)();
    *piVar1 = 0;
  }
  return;
}



/* Function: FUN_004048f9 */

uint FUN_004048f9(void)

{
  uint uVar1;
  HKEY local_8;
  
  uVar1 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\Classes",0,0x20019,&local_8);
  if (uVar1 == 0) {
    RegCloseKey(local_8);
  }
  else if (uVar1 != 2) {
    FUN_004049f7(L"HKCU Classes Access Denied");
    if (0 < (int)uVar1) {
      return uVar1 & 0xffff | 0x80070000;
    }
    return uVar1;
  }
  return 0;
}



/* Function: FUN_00404953 */

void FUN_00404953(void)

{
  HANDLE hFindFile;
  DWORD DVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uStack_480;
  DWORD DStack_47c;
  DWORD DStack_478;
  undefined1 *puStack_474;
  undefined1 auStack_46c [576];
  WCHAR aWStack_22c [10];
  undefined1 local_218 [504];
  uint uStack_20;
  uint local_c;
  
  local_c = DAT_00413140 ^ (uint)auStack_46c;
  puStack_474 = local_218;
  DStack_478 = 0;
  DStack_47c = 0;
  uStack_480 = 0x1c;
  uVar3 = SHGetFolderPathW(0);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    FUN_00404e6b(aWStack_22c,0x104,0x4029a0);
    hFindFile = FindFirstFileW(aWStack_22c,(LPWIN32_FIND_DATAW)&DStack_47c);
    if (hFindFile == (HANDLE)0xffffffff) {
      DVar1 = GetLastError();
      uVar2 = extraout_EDX_00;
      if (DVar1 == 5) {
        FUN_004049f7(L"AppData Folder Access Denied");
        uVar2 = extraout_EDX_01;
      }
    }
    else {
      FindClose(hFindFile);
      uVar2 = extraout_EDX;
    }
  }
  FUN_00410680(uStack_20 ^ (uint)&uStack_480,uVar2);
  return;
}



/* Function: FUN_004049f7 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_004049f7(short *param_1)

{
  wchar_t wVar1;
  short sVar2;
  code *pcVar3;
  UINT UVar4;
  HANDLE hFile;
  BOOL BVar5;
  DWORD DVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  short *psVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  wchar_t *pwVar11;
  _STARTUPINFOW local_e04;
  _SYSTEM_INFO local_dc0;
  _PROCESS_INFORMATION local_d9c;
  int local_d8c [4];
  undefined4 local_d7c;
  DWORD local_d78;
  _OSVERSIONINFOW local_d74;
  wchar_t local_c58 [780];
  wchar_t local_640 [174];
  WCHAR local_4e4 [260];
  WCHAR local_2dc [260];
  wchar_t local_d4;
  undefined1 local_d2 [90];
  wchar_t local_78;
  undefined1 local_76 [110];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xdf4;
  local_8 = 0x404a06;
  local_d74.dwOSVersionInfoSize = 0x11c;
  pwVar9 = 
  L"\r\nVersion=131072\r\nReportingFlags=2048\r\nGeneral_AppName=Windows Presentation Foundation Host\r\nFilesToKeep=null\r\nEventType=WPFHostActivationProblem\r\nP1=PresentationHost.exe\r\n"
  ;
  pwVar11 = local_640;
  for (iVar8 = 0x56; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pwVar11 = *(undefined4 *)pwVar9;
    pwVar9 = pwVar9 + 2;
    pwVar11 = pwVar11 + 2;
  }
  *pwVar11 = *pwVar9;
  local_d7c = 0;
  memset(&local_d74.dwMajorVersion,0,0x118);
  local_e04.cb = 0x44;
  memset(&local_e04.lpReserved,0,0x40);
  local_d8c[1] = 0x825;
  local_d8c[0] = 0;
  local_d8c[2] = 0;
  local_8 = 0;
  memset(local_2dc,0,0x208);
  GetTempPathW(0x104,local_2dc);
  UVar4 = GetTempFileNameW(local_2dc,L"PH",0,local_2dc);
  if ((((UVar4 == 0) ||
       (hFile = CreateFileW(local_2dc,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0),
       hFile == (HANDLE)0x0)) || (hFile == (HANDLE)0xffffffff)) ||
     (BVar5 = WriteFile(hFile,local_640,0x158,&local_d78,(LPOVERLAPPED)0x0), BVar5 == 0))
  goto LAB_00404d3d;
  iVar8 = FUN_0040e5e0();
  if (-1 < iVar8) {
    FUN_00404db1(&local_78,0x32,L"P2=%s\r\n");
    pwVar9 = &local_78;
    do {
      wVar1 = *pwVar9;
      pwVar9 = pwVar9 + 1;
    } while (wVar1 != (wchar_t)local_d7c);
    WriteFile(hFile,&local_78,((int)pwVar9 - (int)local_76 >> 1) * 2,&local_d78,(LPOVERLAPPED)0x0);
  }
  BVar5 = GetVersionExW(&local_d74);
  if (BVar5 != 0) {
    GetNativeSystemInfo(&local_dc0);
    FUN_00404db1(&local_d4,0x60,L"P3=%d.%d.%d.%d.%d%s\r\n");
    pwVar9 = &local_d4;
    do {
      wVar1 = *pwVar9;
      pwVar9 = pwVar9 + 1;
    } while (wVar1 != (wchar_t)local_d7c);
    WriteFile(hFile,&local_d4,((int)pwVar9 - (int)local_d2 >> 1) * 2,&local_d78,(LPOVERLAPPED)0x0);
  }
  if (param_1 != (short *)0x0) {
    WriteFile(hFile,&DAT_00402b58,6,&local_d78,(LPOVERLAPPED)0x0);
    psVar10 = param_1;
    do {
      sVar2 = *psVar10;
      psVar10 = psVar10 + 1;
    } while (sVar2 != (wchar_t)local_d7c);
    WriteFile(hFile,param_1,((int)psVar10 - (int)(param_1 + 1) >> 1) * 2,&local_d78,
              (LPOVERLAPPED)0x0);
    WriteFile(hFile,&DAT_00402b60,4,&local_d78,(LPOVERLAPPED)0x0);
  }
  CloseHandle(hFile);
  DVar6 = GetEnvironmentVariableW(L"CommonProgramFiles",local_4e4,0x104);
  uVar7 = FUN_00404d7c(local_4e4 + DVar6,0x104 - DVar6,0x402b90);
  if (((int)uVar7 < 0) ||
     (uVar7 = FUN_00404db1(local_c58,0x30c,L"\"%s\" -d \"%s\""), (int)uVar7 < 0)) {
    FUN_0040d098();
    goto LAB_00404d6b;
  }
  BVar5 = CreateProcessW(local_4e4,local_c58,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_e04,&local_d9c);
  if (BVar5 == 0) {
LAB_00404d3d:
    FUN_0040d098();
    DVar6 = GetLastError();
    uVar7 = DVar6 & 0xffff | 0x80070000;
    if ((int)DVar6 < 1) {
      uVar7 = DVar6;
    }
  }
  else {
    WaitForSingleObject(local_d9c.hProcess,0xffffffff);
    BVar5 = GetExitCodeProcess(local_d9c.hProcess,(LPDWORD)(local_d8c + 3));
    if (BVar5 == 0) goto LAB_00404d3d;
    uVar7 = -(uint)(local_d8c[3] != 0) & 0x80004005;
  }
  if (-1 < (int)uVar7) {
    FUN_0040c63b(local_d8c);
    FUN_00410b4e(extraout_ECX,extraout_EDX);
    return;
  }
LAB_00404d6b:
  FUN_0040d029(uVar7,0x2a);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



/* Function: FUN_00404d7c */

undefined4 __fastcall FUN_00404d7c(short *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00404e18(param_1,param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_00404db1 */

undefined4 __cdecl FUN_00404db1(wchar_t *param_1,uint param_2,wchar_t *param_3)

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



/* Function: FUN_00404e18 */

undefined4 __fastcall FUN_00404e18(short *param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  
  if (param_2 != 0) {
    iVar4 = 0x7ffffffe;
    iVar2 = param_4 - (int)param_1;
    do {
      if ((iVar4 == 0) || (sVar1 = *(short *)(iVar2 + (int)param_1), sVar1 == 0)) break;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      iVar4 = iVar4 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar3 = 0x8007007a;
  if (param_2 != 0) {
    uVar3 = 0;
  }
  psVar5 = param_1 + -1;
  if (param_2 != 0) {
    psVar5 = param_1;
  }
  *psVar5 = 0;
  return uVar3;
}



/* Function: FUN_00404e6b */

undefined4 __fastcall FUN_00404e6b(short *param_1,uint param_2,int param_3)

{
  short *psVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_2 == 0) || (psVar1 = param_1, uVar3 = param_2, 0x7fffffff < param_2)) {
    uVar2 = 0x80070057;
  }
  else {
    do {
      if (*psVar1 == 0) break;
      uVar3 = uVar3 - 1;
      psVar1 = psVar1 + 1;
    } while (uVar3 != 0);
    uVar2 = 0x80070057;
    if (uVar3 != 0) {
      uVar2 = 0;
    }
    uVar4 = -(uint)(uVar3 != 0) & param_2 - uVar3;
    if (uVar3 != 0) {
      uVar2 = FUN_00404e18(param_1 + uVar4,param_2 - uVar4,uVar2,param_3);
    }
  }
  return uVar2;
}



/* Function: FUN_00404ed6 */

undefined4 * __fastcall FUN_00404ed6(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  *param_1 = &PTR_FUN_004014f0;
  param_1[7] = 0x825;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0x825;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 1;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  param_1[3] = pvVar1;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  param_1[4] = pvVar1;
  ResetEvent(*(HANDLE *)(DAT_004139a0 + 0x90));
  param_1[5] = 0;
  return param_1;
}



/* Function: FUN_00404f54 */

void __fastcall FUN_00404f54(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004111a0;
  local_10 = ExceptionList;
  uVar3 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_004014f0;
  if (param_1[3] != 0) {
    CloseHandle((HANDLE)param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    CloseHandle((HANDLE)param_1[4]);
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,uVar3);
    (*pcVar2)();
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1);
    (*pcVar2)();
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[0x10];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1);
    (*pcVar2)();
    param_1[0x10] = 0;
  }
  FUN_0040c63b(param_1 + 10);
  FUN_0040c63b(param_1 + 6);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405020 */

undefined4 FUN_00405020(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80004002;
  *param_3 = 0;
  iVar2 = 0;
  while (*(int *)(param_2 + iVar2 * 4) == (&DAT_004026e4)[iVar2]) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) goto LAB_0040506b;
  }
  iVar2 = 0;
  do {
    if (*(int *)(param_2 + iVar2 * 4) != (&DAT_00402714)[iVar2]) {
      return 0x80004002;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
LAB_0040506b:
  *param_3 = param_1;
  if (param_1 != (int *)0x0) {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00414398)(param_1);
    (*pcVar1)();
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_004050a0 */

void FUN_004050a0(int param_1)

{
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}



/* Function: FUN_004050c0 */

int FUN_004050c0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x11] + -1;
  param_1[0x11] = iVar1;
  if (iVar1 == 0) {
    FUN_00404f54(param_1);
    free(param_1);
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_004050f0 */

undefined4 FUN_004050f0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_3 == (int *)0x0) {
    FUN_0040d098();
    uVar2 = 0x80070057;
  }
  else {
    *(int **)(param_1 + 0x40) = param_3;
    pcVar1 = *(code **)(*param_3 + 4);
    (*(code *)PTR_guard_check_icall_00414398)(param_3);
    (*pcVar1)();
  }
  return uVar2;
}



/* Function: FUN_00405130 */

undefined4 FUN_00405130(void)

{
  return 0x80004001;
}



/* Function: FUN_00405140 */

undefined4 FUN_00405140(void)

{
  return 0;
}



/* Function: FUN_00405150 */

undefined4
FUN_00405150(int param_1,undefined4 param_2,undefined4 param_3,int param_4,wchar_t *param_5)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_0040552d(5);
  if (iVar1 != 0) {
    FUN_0040ce23(param_4,(undefined *)param_5);
  }
  if (param_4 == 4) {
    *(undefined4 *)(param_1 + 0x34) = param_3;
  }
  else if (param_4 == 0xd) {
    FUN_0040c4f0((void *)(param_1 + 0x28),param_5);
    iVar1 = FUN_0040b96c(param_5);
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar1 != 0) {
      SetEvent(*(HANDLE *)(param_1 + 0xc));
    }
  }
  else if (param_4 == 0xe) {
    FUN_0040c4f0((void *)(param_1 + 0x18),param_5);
    FUN_0040549a(param_1,extraout_EDX,param_5);
  }
  return 0;
}



/* Function: FUN_004051d0 */

uint FUN_004051d0(void *param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined2 local_38 [24];
  uint local_8;
  
  *(uint *)((int)param_1 + 0x48) = param_2;
  iVar3 = FUN_0040552d(5);
  if (iVar3 != 0) {
    memset(local_38,0,0x34);
    local_38[0] = 0x34;
    local_8 = param_2;
    FUN_0040cd35((int)local_38,5,0x36);
  }
  if (*(int *)((int)param_1 + 0x24) == 1) {
    FUN_00405450(param_1,param_2);
  }
  piVar1 = *(int **)((int)param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1);
    (*pcVar2)();
    *(undefined4 *)((int)param_1 + 0x40) = 0;
  }
  SetEvent(*(HANDLE *)((int)param_1 + 0xc));
  SetEvent(*(HANDLE *)((int)param_1 + 0x10));
  FUN_0040e503(*(HANDLE *)(DAT_004139a0 + 0x90));
  return param_2;
}



/* Function: FUN_00405270 */

undefined4 FUN_00405270(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    FUN_0040d098();
    uVar1 = 0x80070057;
  }
  else {
    *param_2 = 3;
    *param_3 = 0x54;
    param_3[1] = 0;
    param_3[5] = 0;
    param_3[9] = 0x20000;
    param_3[6] = 0;
    param_3[7] = 0;
    puVar2 = param_3 + 2;
    iVar3 = 0xc;
    do {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}



/* Function: FUN_004052d0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_004052d0(undefined4 param_1,undefined4 param_2,void *param_3,byte param_4,undefined4 param_5,
            int param_6,int *param_7)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined8 uVar5;
  undefined4 local_1010;
  int local_100c;
  undefined1 local_1008 [4096];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  if ((param_6 == 0) || (param_7 == (int *)0x0)) {
    FUN_0040d098();
    param_2 = extraout_EDX;
  }
  else if (*(int *)((int)param_3 + 0x24) == 1) {
    if ((((param_4 & 1) != 0) && (*param_7 == 4)) &&
       (piVar1 = (int *)param_7[1], piVar1 != (int *)0x0)) {
      *(int **)((int)param_3 + 4) = piVar1;
      pcVar2 = *(code **)(*piVar1 + 4);
      (*(code *)PTR_guard_check_icall_00414398)(piVar1);
      (*pcVar2)();
      param_2 = extraout_EDX_00;
    }
    if ((*(int *)((int)param_3 + 4) != 0) &&
       (*(uint *)((int)param_3 + 0x38) < *(uint *)((int)param_3 + 0x34))) {
      while( true ) {
        local_1010 = 0;
        local_100c = 0;
        pcVar2 = *(code **)(**(int **)((int)param_3 + 4) + 0xc);
        (*(code *)PTR_guard_check_icall_00414398)
                  (*(int **)((int)param_3 + 4),local_1008,0x1000,&local_100c);
        uVar5 = (*pcVar2)();
        param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
        iVar4 = (int)uVar5;
        if ((iVar4 < 0) && (iVar4 != -0x7ffffff6)) break;
        if (local_100c != 0) {
          *(int *)((int)param_3 + 0x38) = *(int *)((int)param_3 + 0x38) + local_100c;
          iVar3 = **(int **)((int)param_3 + 8);
          (*(code *)PTR_guard_check_icall_00414398)
                    (*(int **)((int)param_3 + 8),local_1008,local_100c,&local_1010);
          (**(code **)(iVar3 + 0xc))();
          param_2 = extraout_EDX_01;
        }
        if (*(int *)((int)param_3 + 0x34) == *(int *)((int)param_3 + 0x38)) {
          FUN_00405450(param_3,0x80004005);
          param_2 = extraout_EDX_02;
        }
        if ((iVar4 == 1) || (iVar4 == -0x7ffffff6)) break;
      }
    }
    if ((param_4 & 4) != 0) {
      piVar1 = *(int **)((int)param_3 + 4);
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 8);
        (*(code *)PTR_guard_check_icall_00414398)(piVar1);
        (*pcVar2)();
        param_2 = extraout_EDX_03;
      }
      *(undefined4 *)((int)param_3 + 4) = 0;
    }
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00405430 */

undefined4 FUN_00405430(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 == 0) {
    FUN_0040d098();
    uVar1 = 0x80070057;
  }
  return uVar1;
}



/* Function: FUN_00405450 */

void __thiscall FUN_00405450(void *this,uint param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x3c) == 0) {
    *(undefined4 *)((int)this + 0x3c) = 1;
    iVar1 = **(int **)((int)this + 8);
    (*(code *)PTR_guard_check_icall_00414398)(*(int **)((int)this + 8),~param_1 >> 0x1f);
    (**(code **)(iVar1 + 0x18))();
  }
  FUN_0040e503(*(HANDLE *)(DAT_004139a0 + 0x90));
  return;
}



/* Function: FUN_0040549a */

void __fastcall FUN_0040549a(int param_1,undefined4 param_2,LPCWSTR param_3)

{
  HRESULT HVar1;
  int iVar2;
  undefined4 extraout_EDX;
  int iVar3;
  CLSID local_18;
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x24) != 0) goto LAB_00405517;
  HVar1 = GetClassFileOrMime((LPBC)0x0,param_3,(LPVOID)0x0,0,(LPCWSTR)0x0,0,&local_18);
  if (-1 < HVar1) {
    iVar2 = 0;
    do {
      if (*(int *)(local_18.Data4 + iVar2 * 4 + -8) != (&DAT_00402868)[iVar2]) goto LAB_004054f8;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  goto LAB_0040550e;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_004054f8:
    if (*(int *)(local_18.Data4 + iVar3 * 4 + -8) != (&DAT_004028d8)[iVar3]) goto LAB_0040550e;
  }
  *(undefined4 *)(param_1 + 0x24) = 3;
LAB_0040550e:
  SetEvent(*(HANDLE *)(param_1 + 0xc));
  param_2 = extraout_EDX;
LAB_00405517:
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040552d */

undefined4 __fastcall FUN_0040552d(byte param_1)

{
  if ((DAT_004139b8 != 0 || DAT_004139bc != 0) && (param_1 <= DAT_00413190)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0040554f */

HRESULT FUN_0040554f(void)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  
  puVar1 = (undefined4 *)FUN_00410077(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_0040151c;
    puVar1[1] = &DAT_004028d8;
    if (puVar1 != (undefined4 *)0x0) {
      HVar2 = FUN_00405615(puVar1,&DAT_00413990);
      if (HVar2 < 0) {
LAB_0040558e:
        FUN_0040d098();
        goto LAB_004055d7;
      }
      puVar1 = (undefined4 *)FUN_00410077(0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[2] = 0;
        *puVar1 = &PTR_FUN_0040151c;
        puVar1[1] = &DAT_00402868;
        if (puVar1 != (undefined4 *)0x0) {
          HVar2 = FUN_00405615(puVar1,&DAT_00413994);
          if (-1 < HVar2) {
            if (HVar2 == 0) {
              return 0;
            }
            goto LAB_004055d7;
          }
          goto LAB_0040558e;
        }
      }
    }
  }
  FUN_0040d098();
  HVar2 = -0x7ff8fff2;
LAB_004055d7:
  FUN_004055e8();
  return HVar2;
}



/* Function: FUN_004055e8 */

void FUN_004055e8(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(DWORD *)((int)&DAT_00413990 + uVar1) != 0) {
      CoRevokeClassObject(*(DWORD *)((int)&DAT_00413990 + uVar1));
      *(undefined4 *)((int)&DAT_00413990 + uVar1) = 0;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 8);
  return;
}



/* Function: FUN_00405615 */

HRESULT __thiscall FUN_00405615(void *this,LPDWORD param_1)

{
  HRESULT HVar1;
  
  HVar1 = CoRegisterClassObject(*(IID **)((int)this + 4),(LPUNKNOWN)this,4,0,param_1);
  if (HVar1 < 0) {
    FUN_0040d098();
  }
  else if (HVar1 == 0) {
    return 0;
  }
  if (*param_1 != 0) {
    CoRevokeClassObject(*param_1);
    *param_1 = 0;
  }
  return HVar1;
}



/* Function: FUN_00405660 */

undefined4 FUN_00405660(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    FUN_0040d098();
    return 0x80070057;
  }
  iVar1 = 0;
  while (*(int *)(param_2 + iVar1 * 4) == (&DAT_004026e4)[iVar1]) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 4) goto LAB_004056ac;
  }
  iVar1 = 0;
  do {
    if (*(int *)(param_2 + iVar1 * 4) != (&DAT_004026f4)[iVar1]) {
      *param_3 = 0;
      return 0x80004002;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
LAB_004056ac:
  *param_3 = param_1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 0;
}



/* Function: FUN_004056d0 */

void FUN_004056d0(int param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



/* Function: FUN_004056f0 */

int FUN_004056f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2] + -1;
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    *param_1 = &PTR_FUN_0040151c;
    free(param_1);
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_00405720 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_00405720(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *_Memory;
  undefined2 local_44 [24];
  undefined4 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x40572c;
  iVar2 = FUN_0040552d(5);
  _Memory = (undefined4 *)0x0;
  if (iVar2 != 0) {
    memset(local_44,0,0x30);
    local_44[0] = 0x30;
    FUN_0040cd35((int)local_44,5,0x23);
  }
  if (param_4 == (undefined4 *)0x0) {
    FUN_0040d098();
    iVar2 = -0x7ff8ffa9;
  }
  else {
    *param_4 = 0;
    if (param_2 == 0) {
      local_14 = (undefined4 *)FUN_00410077(0xa4);
      local_8 = 0;
      if (local_14 != (undefined4 *)0x0) {
        _Memory = FUN_00405955(local_14);
      }
      local_8 = 0xffffffff;
      if (_Memory == (undefined4 *)0x0) {
        FUN_0040d098();
        iVar2 = -0x7ff8fff2;
      }
      else {
        pcVar1 = *(code **)*_Memory;
        (*(code *)PTR_guard_check_icall_00414398)(_Memory,param_3,param_4);
        iVar2 = (*pcVar1)();
        if (iVar2 < 0) {
          FUN_0040d098();
          FUN_00405a91(_Memory);
          free(_Memory);
        }
        else {
          DAT_00413998 = *(undefined4 *)(param_1 + 4);
        }
      }
    }
    else {
      iVar2 = -0x7ffbfef0;
    }
  }
  FUN_004055e8();
  return iVar2;
}



/* Function: FUN_00405800 */

undefined4 FUN_00405800(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    LOCK();
    iVar1 = DAT_004139a8 + -1;
    UNLOCK();
    iVar2 = DAT_004139a8 + -1;
    bVar3 = DAT_004139a8 == 1;
    DAT_004139a8 = iVar1;
    if (bVar3 || iVar2 < 0) {
      PostQuitMessage(0);
    }
  }
  else {
    LOCK();
    DAT_004139a8 = DAT_004139a8 + 1;
    UNLOCK();
  }
  return 0;
}



/* Function: FUN_00405838 */

void __fastcall FUN_00405838(int param_1)

{
  FUN_0040c63b((int *)(param_1 + 0x1c));
  FUN_0040c63b((int *)(param_1 + 0x10));
  return;
}



/* Function: FUN_00405854 */

void __fastcall FUN_00405854(int *param_1)

{
  FUN_0040c63b(param_1 + 0x12);
  FUN_0040c63b(param_1 + 0xf);
  FUN_0040c63b(param_1 + 0xc);
  FUN_0040c63b(param_1 + 9);
  FUN_0040c63b(param_1 + 6);
  FUN_0040c63b(param_1 + 3);
  FUN_0040c63b(param_1);
  return;
}



/* Function: FUN_00405897 */

void __fastcall FUN_00405897(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401638;
  param_1[1] = &PTR_FUN_0040160c;
  FUN_0040c63b(param_1 + 0xf);
  FUN_0040c63b(param_1 + 0xc);
  FUN_0040c63b(param_1 + 9);
  FUN_0040c63b(param_1 + 6);
  FUN_0040c63b(param_1 + 3);
  return;
}



/* Function: FUN_004058e0 */

undefined4 FUN_004058e0(void)

{
  return 0;
}



/* Function: FUN_004058f0 */

undefined4 FUN_004058f0(void)

{
  return 0;
}



/* Function: FUN_00405900 */

undefined4 FUN_00405900(void)

{
  return 0;
}



/* Function: FUN_00405910 */

undefined4 FUN_00405910(void)

{
  return 0;
}



/* Function: FUN_0040591b */

void __fastcall FUN_0040591b(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004015d4;
  FUN_00406d90(param_1 + 0xb);
  FUN_00406d90(param_1 + 9);
  FUN_00406d90(param_1 + 7);
  FUN_00406d90(param_1 + 5);
  FUN_0040c63b(param_1 + 1);
  return;
}



/* Function: FUN_00405955 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_00405955(undefined4 *param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
  *param_1 = &PTR_FUN_00401574;
  param_1[1] = &PTR_FUN_00401564;
  param_1[2] = &PTR_FUN_00401550;
  param_1[3] = &PTR_FUN_00401530;
  param_1[0xe] = 0x825;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0x825;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0x825;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0x825;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0x825;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 24000;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[4] = 0;
  DAT_004139a0 = param_1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  puVar1 = (undefined4 *)FUN_00410077(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_004016f4;
    puVar1[1] = param_1;
  }
  param_1[8] = puVar1;
  puVar1 = (undefined4 *)FUN_00410077(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_004016b0;
    puVar1[1] = param_1;
  }
  param_1[9] = puVar1;
  puVar1 = (undefined4 *)FUN_00410077(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_004016d4;
    puVar1[1] = param_1;
  }
  param_1[10] = puVar1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCWSTR)0x0);
  param_1[0x24] = pvVar2;
  return param_1;
}



/* Function: FUN_00405a91 */

void __fastcall FUN_00405a91(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004111a0;
  local_10 = ExceptionList;
  uVar5 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = param_1[7];
  *param_1 = &PTR_FUN_00401574;
  param_1[1] = &PTR_FUN_00401564;
  param_1[2] = &PTR_FUN_00401550;
  param_1[3] = &PTR_FUN_00401530;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2c) != 0)) {
    pcVar2 = *(code **)(iVar1 + 0x34);
    (*(code *)PTR_guard_check_icall_00414398)(uVar5);
    (*pcVar2)();
  }
  puVar3 = (undefined4 *)param_1[8];
  DAT_004139a0 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &PTR_FUN_004016f4;
    free(puVar3);
  }
  puVar3 = (undefined4 *)param_1[9];
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &PTR_FUN_004016b0;
    free(puVar3);
  }
  puVar3 = (undefined4 *)param_1[10];
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &PTR_FUN_004016d4;
    free(puVar3);
  }
  piVar4 = (int *)param_1[5];
  if (piVar4 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar4 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar4);
    (*pcVar2)();
    param_1[5] = 0;
  }
  DAT_004139a0 = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  PostQuitMessage(0);
  FUN_0040c63b(param_1 + 0x1c);
  FUN_0040c63b(param_1 + 0x19);
  FUN_0040c63b(param_1 + 0x16);
  FUN_0040c63b(param_1 + 0x13);
  FUN_0040c63b(param_1 + 0x10);
  FUN_0040c63b(param_1 + 0xd);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405bc0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00405bc0(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  HRESULT HVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  LPSTREAM local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x405bcc;
  if (param_3 == (undefined4 *)0x0) {
    FUN_0040d098();
    return 0x80004005;
  }
  *param_3 = 0;
  iVar5 = 0;
  do {
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_004026e4)[iVar5]) {
      iVar5 = 0;
      goto LAB_00405c08;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  goto LAB_00405d43;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_00405c08:
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_00402734)[iVar5]) {
      iVar5 = 0;
      goto LAB_00405c28;
    }
  }
  piVar6 = param_1 + 1;
  goto LAB_00405d61;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_00405c28:
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_00402754)[iVar5]) {
      iVar5 = 0;
      goto LAB_00405c48;
    }
  }
  piVar6 = (int *)param_1[8];
  goto LAB_00405d69;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_00405c48:
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_00402764)[iVar5]) {
      iVar5 = 0;
      goto LAB_00405c68;
    }
  }
  piVar6 = (int *)param_1[9];
  goto LAB_00405d69;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_00405c68:
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_00402704)[iVar5]) {
      iVar5 = 0;
      goto LAB_00405cdd;
    }
  }
  piVar6 = (int *)param_1[8];
  *param_3 = piVar6;
  if (DAT_0041399c == '\0') {
    DAT_0041399c = '\x01';
    local_14[0] = (LPSTREAM)0x0;
    local_8 = 0;
    HVar3 = CoMarshalInterThreadInterfaceInStream
                      ((IID *)&DAT_00402704,(LPUNKNOWN)param_1[8],local_14);
    if (HVar3 < 0) {
      FUN_004049f7(L"IPersistMoniker Marshaling");
    }
    else {
      CoReleaseMarshalData(local_14[0]);
    }
    local_8 = 0xffffffff;
    ~CComPtr<>((int *)local_14);
    piVar6 = (int *)*param_3;
  }
  goto LAB_00405d6b;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_00405cdd:
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_00402774)[iVar5]) {
      iVar5 = 0;
      goto LAB_00405cfa;
    }
  }
  piVar6 = (int *)param_1[10];
  goto LAB_00405d69;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_00405cfa:
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_00402784)[iVar5]) {
      iVar5 = 0;
      goto LAB_00405d1e;
    }
  }
  piVar6 = (int *)0x0;
  if (param_1[7] != 0) goto LAB_00405d6b;
  piVar6 = param_1 + 3;
  goto LAB_00405d61;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_00405d1e:
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_00402794)[iVar5]) {
      iVar5 = 0;
      goto LAB_00405d50;
    }
  }
  if (((char)param_1[0x26] == '\0') && (piVar6 = (int *)0x0, param_1[7] != 0)) goto LAB_00405d6b;
LAB_00405d43:
  *param_3 = param_1;
  piVar6 = param_1;
  goto LAB_00405d6b;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_00405d50:
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_004027a4)[iVar5]) goto LAB_00405d83;
  }
  piVar6 = param_1 + 2;
LAB_00405d61:
  piVar6 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)piVar6);
LAB_00405d69:
  *param_3 = piVar6;
LAB_00405d6b:
  if (piVar6 == (int *)0x0) {
LAB_00405d83:
    puVar2 = (undefined4 *)param_1[6];
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0x80004002;
    }
    else {
      pcVar1 = *(code **)*puVar2;
      (*(code *)PTR_guard_check_icall_00414398)(puVar2,param_2,param_3);
      uVar4 = (*pcVar1)();
    }
  }
  else {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00414398)(param_1);
    (*pcVar1)();
    uVar4 = 0;
  }
  return uVar4;
}



/* Function: FUN_00405db0 */

int FUN_00405db0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* Function: FUN_00405dd0 */

int FUN_00405dd0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 4;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_00405a91(param_1);
      free(param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* Function: FUN_00405e10 */

undefined4 FUN_00405e10(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
    *param_4 = DAT_00402878;
    param_4[1] = DAT_0040287c;
    param_4[2] = DAT_00402880;
    param_4[3] = DAT_00402884;
  }
  else {
    uVar1 = 0x80004005;
  }
  return uVar1;
}



/* Function: FUN_00405e40 */

undefined4 FUN_00405e40(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1);
    (*pcVar2)();
  }
  *(int **)(param_1 + 0xc) = param_2;
  if (param_2 != (int *)0x0) {
    pcVar2 = *(code **)(*param_2 + 4);
    (*(code *)PTR_guard_check_icall_00414398)(param_2);
    (*pcVar2)();
  }
  return 0;
}



/* Function: FUN_00405e90 */

undefined4 FUN_00405e90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  *param_3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0x80004005;
  }
  else {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_00414398)(puVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00405ecb */

undefined4 __fastcall FUN_00405ecb(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00413998;
  if (param_2 == (undefined4 *)0x0) {
    FUN_0040d098();
    return 0x80070057;
  }
  puVar1 = DAT_00413998 + 1;
  *param_2 = *DAT_00413998;
  param_2[1] = *puVar1;
  param_2[2] = puVar2[2];
  param_2[3] = puVar2[3];
  return 0;
}



/* Function: FUN_00405ef3 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00405ef3(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *puVar3;
  undefined4 extraout_ECX_02;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  undefined8 uVar6;
  int *local_fbc;
  HWND local_fb8;
  WCHAR local_fb4 [2006];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xfac;
  local_8 = 0x405f02;
  uVar6 = FUN_00405fd8(param_1);
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar4 = extraout_ECX;
  if ((int)uVar6 < 0) {
    puVar3 = *(undefined4 **)(param_1 + 0xa0);
    local_fb8 = (HWND)0x0;
    local_8 = 0;
    local_fbc = (int *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar3;
      (*(code *)PTR_guard_check_icall_00414398)(puVar3,&DAT_00402df4,&local_fbc);
      (*pcVar1)();
      puVar3 = extraout_ECX_00;
    }
    local_8 = 1;
    if (local_fbc != (int *)0x0) {
      pcVar1 = *(code **)(*local_fbc + 0xc);
      (*(code *)PTR_guard_check_icall_00414398)(local_fbc,&local_fb8);
      (*pcVar1)();
      puVar3 = extraout_ECX_01;
    }
    iVar2 = FUN_0040b8dd(puVar3,local_fb4);
    if (iVar2 != 0) {
      iVar2 = MessageBoxW(local_fb8,local_fb4,L"Microsoft .NET Framework Setup",0x21);
      if (iVar2 == 1) {
        ShellExecuteW(local_fb8,(LPCWSTR)0x0,L"https://go.microsoft.com/fwlink/?linkid=54520",
                      (LPCWSTR)0x0,(LPCWSTR)0x0,5);
      }
    }
    ~CComPtr<>((int *)&local_fbc);
    uVar4 = extraout_ECX_02;
    uVar5 = extraout_EDX;
  }
  FUN_00410b4e(uVar4,uVar5);
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
  puStack_c = &LAB_0041138d;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,DAT_00413140 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = pvStack_10;
  return;
}



/* Function: FUN_00405fd8 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00405fd8(int param_1)

{
  code *pcVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int local_3c;
  LPBC local_38;
  LPMONIKER local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  CLSID local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_28 = (int *)0x0;
  local_38 = (LPBC)0x0;
  local_34 = (LPMONIKER)0x0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_3c = 0;
  local_8 = 5;
  iVar2 = FUN_0040dca1(*(void **)(param_1 + 0xa0),param_1,&local_3c);
  if (((-1 < iVar2) && (HVar3 = CLSIDFromProgID(L"Bootstrap.XBAP",&local_24), -1 < HVar3)) &&
     (HVar3 = CoCreateInstance(&local_24,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_00402de4,&local_28),
     -1 < HVar3)) {
    pcVar1 = *(code **)(*local_28 + 0xc);
    (*(code *)PTR_guard_check_icall_00414398)(local_28,*(undefined4 *)(param_1 + 0xa0));
    (*pcVar1)();
    pcVar1 = *(code **)(*local_28 + 0xc);
    (*(code *)PTR_guard_check_icall_00414398)(local_28,0);
    (*pcVar1)();
    HVar3 = CreateURLMonikerEx((LPMONIKER)0x0,*(LPCWSTR *)(param_1 + 0x34),&local_34,1);
    if (-1 < HVar3) {
      if (local_2c != local_28) {
        FUN_00406e80((int *)&local_2c,local_28,&DAT_00402e04);
      }
      if ((local_2c != (int *)0x0) && (HVar3 = CreateBindCtx(0,&local_38), -1 < HVar3)) {
        pcVar1 = *(code **)(*local_2c + 0x14);
        (*(code *)PTR_guard_check_icall_00414398)(local_2c,0,local_34,local_38,0);
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
LAB_0040614d:
          if (iVar2 < 0) goto LAB_00406174;
        }
        else {
          if (iVar2 == 1) {
            iVar2 = -0x7fffbffb;
          }
          if (local_30 != local_28) {
            FUN_00406e80((int *)&local_30,local_28,&DAT_00402e14);
          }
          if (local_30 == (int *)0x0) goto LAB_0040614d;
          pcVar1 = *(code **)(*local_30 + 0x14);
          (*(code *)PTR_guard_check_icall_00414398)(local_30,*(undefined4 *)(param_1 + 0x34),0);
          iVar4 = (*pcVar1)();
          if (iVar4 != 0) goto LAB_0040614d;
        }
        pcVar1 = *(code **)(*local_28 + 0x2c);
        (*(code *)PTR_guard_check_icall_00414398)
                  (local_28,0,0,*(undefined4 *)(param_1 + 0xa0),0,0,0);
        iVar2 = (*pcVar1)();
        if (-1 < iVar2) goto LAB_00406179;
      }
    }
  }
LAB_00406174:
  FUN_0040d098();
LAB_00406179:
  ~CComPtr<>(&local_3c);
  ~CComPtr<>((int *)&local_30);
  ~CComPtr<>((int *)&local_2c);
  ~CComPtr<>((int *)&local_34);
  ~CComPtr<>((int *)&local_38);
  ~CComPtr<>((int *)&local_28);
  FUN_00410b4e(extraout_ECX,extraout_EDX);
  return;
}



/* Function: FUN_004061b7 */

void __fastcall FUN_004061b7(void *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  BOOL BVar5;
  LPWSTR lpCaption;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int *piStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *pvStack_48;
  undefined4 uStack_44;
  _SYSTEMTIME _Stack_40;
  undefined1 local_30 [20];
  FILETIME aFStack_1c [2];
  uint local_c;
  
  local_c = DAT_00413140 ^ (uint)&piStack_7c;
  piVar4 = *(int **)((int)param_1 + 0x1c);
  if (piVar4 == (int *)0x0) {
    if (*(int *)((int)param_1 + 0x58) != 0) {
LAB_004061ef:
      piVar4 = FUN_0040c195(*(wchar_t **)((int)param_1 + 0x58),1);
      *(int **)((int)param_1 + 0x1c) = piVar4;
      param_2 = extraout_EDX;
      if (piVar4 == (int *)0x0) {
        *(undefined1 *)((int)param_1 + 0x98) = 1;
        goto LAB_00406208;
      }
      goto LAB_0040621a;
    }
    iVar3 = FUN_0040644e((int)param_1);
    if (-1 < iVar3) goto LAB_004061ef;
  }
  else {
LAB_0040621a:
    if (piVar4[0xb] != 0) goto LAB_00406208;
    if ((*(int *)((int)param_1 + 0x70) != 0) && (*piVar4 == 3)) {
      BVar5 = GetFileAttributesExW((LPCWSTR)piVar4[7],GetFileExInfoStandard,local_30);
      if (BVar5 != 0) {
        BVar5 = FileTimeToSystemTime(aFStack_1c,&_Stack_40);
        if ((BVar5 != 0) && (_Stack_40.wYear < 0x7d9)) {
          MessageBeep(0xffffffff);
          lpCaption = FUN_00406ef2();
          if (lpCaption != (LPWSTR)0x0) {
            MessageBoxW((HWND)0x0,*(LPCWSTR *)((int)param_1 + 0x70),lpCaption,0x10);
            Ordinal_6(lpCaption);
            param_2 = extraout_EDX_00;
            goto LAB_00406208;
          }
          goto LAB_00406387;
        }
      }
    }
    iVar3 = FUN_0040bd6c(*(int **)((int)param_1 + 0x1c));
    if (-1 < iVar3) {
      uStack_74 = *(undefined4 *)((int)param_1 + 0x34);
      uStack_54 = DAT_004139b0;
      uStack_70 = *(undefined4 *)((int)param_1 + 100);
      uStack_68 = *(undefined4 *)((int)param_1 + 0x84);
      uStack_64 = *(undefined4 *)((int)param_1 + 0x7c);
      uStack_60 = *(undefined4 *)((int)param_1 + 0x80);
      uStack_5c = *(undefined4 *)((int)param_1 + 0x90);
      uStack_58 = DAT_004139ac & 2;
      uStack_78 = 0x38;
      uStack_50 = *(undefined4 *)((int)param_1 + 0x28);
      uStack_4c = DAT_00413a7c;
      uStack_44 = *(undefined4 *)((int)param_1 + 0x70);
      pvStack_48 = param_1;
      FUN_0040bf92(*(void **)((int)param_1 + 0x1c),&uStack_78,(undefined4 *)((int)param_1 + 0x18));
      param_2 = extraout_EDX_01;
      if ((*(int *)((int)param_1 + 0x94) == 1) || (*(int *)((int)param_1 + 0x94) == 2)) {
LAB_00406208:
        FUN_00410680(local_c ^ (uint)&piStack_7c,param_2);
        return;
      }
      puVar1 = *(undefined4 **)((int)param_1 + 0x18);
      piStack_7c = (int *)0x0;
      pcVar2 = *(code **)*puVar1;
      (*(code *)PTR_guard_check_icall_00414398)(puVar1,&DAT_00402794,&piStack_7c);
      iVar3 = (*pcVar2)();
      if (-1 < iVar3) {
        pcVar2 = *(code **)(*piStack_7c + 8);
        (*(code *)PTR_guard_check_icall_00414398)(piStack_7c);
        (*pcVar2)();
        FUN_004066fb(param_1,piStack_7c);
        param_2 = extraout_EDX_02;
        goto LAB_00406208;
      }
    }
  }
  FUN_0040d098();
  FUN_0040d08a(extraout_EDX_03);
LAB_00406387:
  FUN_00406f61(0x8007000e);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_004063a0 */

undefined4 FUN_004063a0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0x80004001;
}



/* Function: FUN_004063c0 */

DWORD FUN_004063c0(int param_1,undefined4 param_2,wchar_t *param_3)

{
  DWORD DVar1;
  int nExitCode;
  
  DVar1 = 0;
  FUN_0040c4f0((void *)(param_1 + 0x34),param_3);
  if (*(int *)(param_1 + 0x10) == 0) {
    DVar1 = FUN_0040db27(*(LPCWSTR *)(param_1 + 0x28));
    if ((int)DVar1 < 0) {
      FUN_0040d098();
      nExitCode = 4;
    }
    else {
      nExitCode = 0;
    }
    PostQuitMessage(nExitCode);
  }
  return DVar1;
}



/* Function: FUN_00406410 */

undefined4 FUN_00406410(void)

{
  undefined4 *in_stack_00000010;
  
  if (in_stack_00000010 != (undefined4 *)0x0) {
    *in_stack_00000010 = 0;
  }
  return 0x80004001;
}



/* Function: FUN_00406430 */

undefined4 FUN_00406430(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0x80004001;
}



/* Function: FUN_0040644e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __fastcall FUN_0040644e(int param_1)

{
  int iVar1;
  int iVar2;
  int *this;
  bool bVar3;
  wchar_t *pwVar4;
  undefined4 local_14c [2];
  int local_144;
  wchar_t *local_11c;
  wchar_t *local_110;
  int local_fc;
  int local_f8;
  int local_f4;
  wchar_t *local_ec [3];
  int local_e0 [11];
  LPCWSTR local_b4 [6];
  wchar_t *local_9c;
  wchar_t *local_90 [3];
  int local_84 [3];
  wchar_t *local_78 [3];
  int local_6c [4];
  int local_5c;
  int local_58;
  int local_54;
  wchar_t *local_4c [3];
  int local_40;
  int local_3c;
  undefined1 local_30 [8];
  int local_28;
  int *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x13c;
  local_8 = 0x40645d;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_0040c4f0((void *)(param_1 + 0x58),L"0.0.0");
    return 0;
  }
  bVar3 = true;
  iVar1 = FUN_0040552d(4);
  if (iVar1 != 0) {
    FUN_0040dd62(L"DisableSingleVersionOptimization",(LPBYTE)local_14,0);
    bVar3 = local_14[0] == (int *)0x0;
  }
  if (*(int *)(param_1 + 0x84) != 2) {
    if (*(int *)(param_1 + 0x84) == 3) {
      if (((!bVar3) || (FUN_0040c01b(), DAT_00413a88 == 0)) || (*(int *)(DAT_00413a88 + 4) != 1)) {
        FUN_0040ee5c(local_4c,*(wchar_t **)(param_1 + 0x4c));
        local_8 = 4;
        LOCK();
        local_3c = local_3c + 1;
        UNLOCK();
        FUN_0040f1b1((int)local_4c);
        this = (int *)0x0;
        for (iVar1 = local_28; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
          local_14[0] = (int *)0x0;
          iVar2 = FUN_00406d49(local_30,(wchar_t *)**(undefined4 **)(iVar1 + 0xc),local_14);
          if (((-1 < iVar2) &&
              (local_14[0] = FUN_0040c195((wchar_t *)*local_14[0],0), local_14[0] != (int *)0x0)) &&
             ((this == (int *)0x0 || (iVar2 = FUN_0040bd46(this,local_14[0]), iVar2 < 0)))) {
            this = local_14[0];
          }
        }
        if (this == (int *)0x0) {
          pwVar4 = L"0.0.0";
        }
        else {
          pwVar4 = (wchar_t *)this[4];
        }
        iVar1 = FUN_0040c4f0((void *)(param_1 + 0x58),pwVar4);
        if (iVar1 < 0) {
          FUN_0040d098();
        }
        FUN_0040591b(local_4c);
        return iVar1;
      }
      iVar1 = FUN_0040c4f0((void *)(param_1 + 0x58),L"0.0.0");
      if (-1 < iVar1) {
        return iVar1;
      }
    }
    else {
      iVar1 = -0x7fffbffb;
    }
    FUN_0040d098();
    return iVar1;
  }
  FUN_0040eddb(local_b4,*(wchar_t **)(param_1 + 0x34),*(wchar_t **)(param_1 + 0x4c));
  local_8 = 0;
  iVar1 = FUN_0040e0b0(local_b4[0],local_9c,(int *)local_90,local_84,(int *)local_78,local_6c);
  if (iVar1 < 0) {
    FUN_0040d098();
  }
  else {
    FUN_0040c4f0((void *)(param_1 + 100),local_90[0]);
    if (((!bVar3) || (FUN_0040c01b(), DAT_00413a88 == 0)) || (*(int *)(DAT_00413a88 + 4) != 1)) {
      FUN_0040e7e1(local_14c,*(wchar_t **)(param_1 + 0x34),local_78[0]);
      local_8._0_1_ = 1;
      LOCK();
      local_144 = local_144 + 1;
      UNLOCK();
      iVar1 = FUN_0040eab1((int)local_14c);
      if (-1 < iVar1) {
        FUN_0040bcbe(&local_fc,local_11c);
        local_8._0_1_ = 2;
        FUN_0040bcbe(&local_5c,local_110);
        local_8._0_1_ = 3;
        local_fc = local_fc - local_5c;
        if ((local_fc == 0) && (local_fc = local_f8 - local_58, local_fc == 0)) {
          local_fc = local_f4 - local_54;
        }
        if (-1 < local_fc) {
          local_4c[0] = local_ec[0];
        }
        iVar1 = FUN_0040c4f0((void *)(param_1 + 0x58),local_4c[0]);
        FUN_0040c63b(&local_40);
        FUN_0040c63b((int *)local_4c);
        FUN_0040c63b(local_e0);
        FUN_0040c63b((int *)local_ec);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00405897(local_14c);
      if (-1 < iVar1) goto LAB_0040652e;
    }
  }
  iVar1 = FUN_0040c4f0((void *)(param_1 + 0x58),L"0.0.0");
  if (iVar1 < 0) {
    FUN_0040d098();
  }
LAB_0040652e:
  FUN_00405854((int *)local_b4);
  return iVar1;
}



/* Function: FUN_004066fb */

void __thiscall FUN_004066fb(void *this,int *param_1)

{
  code *pcVar1;
  
  *(int **)((int)this + 0x9c) = param_1;
  if (*(int *)((int)this + 0xa0) != 0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    (*(code *)PTR_guard_check_icall_00414398)(param_1,*(int *)((int)this + 0xa0));
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)((int)this + 0xa0) + 8);
    (*(code *)PTR_guard_check_icall_00414398)(*(int **)((int)this + 0xa0));
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00406750 */

undefined4 FUN_00406750(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0xa0);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_00414398)(piVar1);
      (*pcVar2)();
    }
    *(int **)(param_1 + 0xa0) = param_2;
    if (param_2 != (int *)0x0) {
      pcVar2 = *(code **)(*param_2 + 4);
      (*(code *)PTR_guard_check_icall_00414398)(param_2);
      (*pcVar2)();
    }
    if ((*(char *)(param_1 + 0x98) == '\0') || (param_2 == (int *)0x0)) {
      uVar3 = 0;
    }
    else {
      FUN_00405ef3(param_1);
      uVar3 = 0x80004005;
    }
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004067e0 */

undefined4 FUN_004067e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x4c);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406820 */

undefined4 FUN_00406820(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x14);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406860 */

undefined4
FUN_00406860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x2c);
    (*(code *)PTR_guard_check_icall_00414398)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004068b0 */

undefined4 FUN_004068b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x48);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004068f0 */

undefined4 FUN_004068f0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x34);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406930 */

undefined4 FUN_00406930(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x18);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406970 */

undefined4 FUN_00406970(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x50);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004069b0 */

undefined4 FUN_004069b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x30);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004069f0 */

undefined4 FUN_004069f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406a30 */

undefined4 FUN_00406a30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x1c);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406a70 */

undefined4 FUN_00406a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x20);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3,param_4);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406ab0 */

undefined4 FUN_00406ab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x24);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3,param_4);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406af0 */

undefined4 FUN_00406af0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x28);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406b30 */

undefined4 FUN_00406b30(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x38);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406b70 */

undefined4 FUN_00406b70(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x3c);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406bb0 */

undefined4 FUN_00406bb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x40);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406bf0 */

undefined4 FUN_00406bf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x44);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406c30 */

undefined4 FUN_00406c30(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004001;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x54);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406c70 */

undefined4 FUN_00406c70(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0x20000;
    uVar3 = 0;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x58);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406cc0 */

undefined4 FUN_00406cc0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x5c);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
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
  puStack_c = &LAB_0041138d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar1,DAT_00413140 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406d49 */

undefined4 __thiscall FUN_00406d49(void *this,wchar_t *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* WARNING: Load size is inaccurate */
  puVar2 = *this;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040d098();
      return 0x80004005;
    }
    iVar1 = _wcsicmp(param_1,(wchar_t *)*puVar2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)puVar2[4];
  }
  *param_2 = puVar2[3];
  return 0;
}



/* Function: FUN_00406d90 */

void __fastcall FUN_00406d90(undefined4 *param_1)

{
  int *piVar1;
  int *_Memory;
  
  _Memory = (int *)*param_1;
  while (_Memory != (int *)0x0) {
    piVar1 = (int *)_Memory[4];
    FUN_0040c63b(_Memory);
    free(_Memory);
    _Memory = piVar1;
  }
  return;
}



/* Function: FUN_00406dc0 */

void FUN_00406dc0(int param_1)

{
  FUN_00405db0(param_1 + -4);
  return;
}



/* Function: FUN_00406dd0 */

void FUN_00406dd0(int param_1)

{
  FUN_00405dd0((undefined4 *)(param_1 + -4));
  return;
}



/* Function: FUN_00406de0 */

void FUN_00406de0(int param_1)

{
  FUN_00405db0(param_1 + -8);
  return;
}



/* Function: FUN_00406df0 */

void FUN_00406df0(int param_1)

{
  FUN_0040e910(param_1 + -4);
  return;
}



/* Function: FUN_00406e00 */

void FUN_00406e00(int param_1,int param_2,undefined4 *param_3)

{
  FUN_00405bc0((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_00406e10 */

void FUN_00406e10(int param_1)

{
  FUN_00405dd0((undefined4 *)(param_1 + -8));
  return;
}



/* Function: FUN_00406e20 */

void FUN_00406e20(int param_1)

{
  FUN_00405db0(param_1 + -0xc);
  return;
}



/* Function: FUN_00406e30 */

void FUN_00406e30(int param_1,int param_2,undefined4 *param_3)

{
  FUN_00405bc0((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_00406e40 */

void FUN_00406e40(int param_1)

{
  FUN_00405dd0((undefined4 *)(param_1 + -0xc));
  return;
}



/* Function: FUN_00406e50 */

void FUN_00406e50(int param_1)

{
  FUN_0040e930((undefined4 *)(param_1 + -4));
  return;
}



/* Function: FUN_00406e60 */

void FUN_00406e60(int param_1,int param_2,undefined4 *param_3)

{
  FUN_00405bc0((int *)(param_1 + -0xc),param_2,param_3);
  return;
}



/* Function: FUN_00406e70 */

void FUN_00406e70(int param_1,int param_2,undefined4 *param_3)

{
  FUN_0040e870((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_00406e80 */

int __fastcall FUN_00406e80(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    piVar1 = (int *)*param_1;
    *param_1 = 0;
    if (param_2 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*param_2;
      (*(code *)PTR_guard_check_icall_00414398)(param_2,param_3,param_1);
      (*pcVar2)();
    }
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_00414398)(piVar1);
      (*pcVar2)();
    }
    iVar3 = *param_1;
  }
  return iVar3;
}



/* Function: FUN_00406ed1 */

void __fastcall FUN_00406ed1(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  while (_Memory = (undefined4 *)*param_1, _Memory != (undefined4 *)0x0) {
    *param_1 = *_Memory;
    free(_Memory);
  }
  return;
}



/* Function: FUN_00406ef2 */

LPWSTR FUN_00406ef2(void)

{
  int cchWideChar;
  LPWSTR lpWideCharStr;
  int iVar1;
  
  cchWideChar = MultiByteToWideChar(3,0,"PresentationHost.exe",-1,(LPWSTR)0x0,0);
  lpWideCharStr = (LPWSTR)Ordinal_4(0,cchWideChar + -1);
  if ((lpWideCharStr != (LPWSTR)0x0) &&
     (iVar1 = MultiByteToWideChar(3,0,"PresentationHost.exe",-1,lpWideCharStr,cchWideChar),
     iVar1 != cchWideChar)) {
    Ordinal_6(lpWideCharStr);
    lpWideCharStr = (LPWSTR)0x0;
  }
  return lpWideCharStr;
}



/* Function: FUN_00406f4b */

undefined4 * __thiscall FUN_00406f4b(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return (undefined4 *)this;
}



/* Function: FUN_00406f61 */

void __fastcall FUN_00406f61(undefined4 param_1)

{
  void *pExceptionObject;
  undefined4 local_8;
  
  local_8 = param_1;
  FUN_00406f4b(&local_8,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(pExceptionObject,(ThrowInfo *)&DAT_00412990);
}



/* Function: FUN_00406f84 */

void __fastcall FUN_00406f84(void *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      free(*(void **)((int)param_1 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  free(param_1);
  return;
}



/* Function: FUN_00406fb2 */

bool __fastcall FUN_00406fb2(undefined4 param_1,_LUID_AND_ATTRIBUTES *param_2,DWORD param_3)

{
  int iVar1;
  DWORD DVar2;
  bool bVar3;
  undefined2 local_3c [24];
  PSID_AND_ATTRIBUTES local_c;
  DWORD local_8;
  
  bVar3 = false;
  local_8 = 0;
  local_c = (PSID_AND_ATTRIBUTES)0x0;
  iVar1 = FUN_0040552d(4);
  if (iVar1 != 0) {
    memset(local_3c,0,0x30);
    local_3c[0] = 0x30;
    FUN_0040cd35((int)local_3c,4,0x21);
  }
  DVar2 = FUN_0040755b(&local_c,&local_8);
  if (DVar2 == 0) {
    iVar1 = FUN_004072c7(local_c,local_8,param_2,param_3);
    FUN_00406f84(local_c,local_8);
    bVar3 = iVar1 == 0;
  }
  return bVar3;
}



/* Function: FUN_00407035 */

void FUN_00407035(void)

{
  BOOL BVar1;
  LSTATUS LVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  DWORD local_130;
  BYTE local_12c [4];
  HKEY local_128;
  _OSVERSIONINFOW local_124;
  ushort local_10;
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_130 = 4;
  local_124.dwOSVersionInfoSize = 0x11c;
  local_128 = (HKEY)0x0;
  local_12c[0] = '\0';
  local_12c[1] = '\0';
  local_12c[2] = '\0';
  local_12c[3] = '\0';
  BVar1 = GetVersionExW(&local_124);
  if ((((BVar1 != 0) && (local_124.dwMajorVersion == 5)) && (local_124.dwMinorVersion == 1)) &&
     (local_10 < 2)) {
                    /* WARNING: Subroutine does not return */
    ExitProcess(1);
  }
  LVar2 = RegOpenKeyExW((HKEY)&DAT_80000002,
                        L"SOFTWARE\\Microsoft\\.NETFramework\\Windows Presentation Foundation\\Hosting"
                        ,0,1,&local_128);
  uVar3 = extraout_EDX;
  if (LVar2 == 0) {
    RegQueryValueExW(local_128,L"RunUnrestricted",(LPDWORD)0x0,(LPDWORD)0x0,local_12c,&local_130);
    RegCloseKey(local_128);
    uVar3 = extraout_EDX_00;
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040710e */

undefined4 __fastcall FUN_0040710e(int *param_1,uint param_2)

{
  int iVar1;
  DWORD DVar2;
  int *local_c;
  int *local_8;
  
  if (DAT_004139a4 == 0) {
    local_c = param_1;
    local_8 = param_1;
    iVar1 = FUN_00407035();
    if (iVar1 != 0) {
      local_8 = (int *)0x0;
      local_c = (int *)0x0;
      DVar2 = FUN_0040755b(&local_c,&local_8);
      if (DVar2 == 0) {
        iVar1 = FUN_0040717f(local_c,(uint)local_8,param_1,param_2);
        if (iVar1 == 0) {
          DAT_0041318c = 0;
        }
        FUN_00406f84(local_c,(uint)local_8);
      }
      DAT_004139a4 = 1;
    }
  }
  return DAT_0041318c;
}



/* Function: FUN_0040717f */

void __fastcall FUN_0040717f(uint param_1,uint param_2,int *param_3,uint param_4)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  int *TokenInformation;
  int iVar2;
  undefined4 extraout_EDX;
  int *piVar3;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int *piVar5;
  DWORD DVar6;
  HANDLE *TokenHandle;
  HANDLE local_58;
  DWORD local_54;
  uint local_50;
  undefined1 local_4c [68];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  TokenHandle = &local_58;
  DVar6 = 8;
  local_50 = param_1;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,DVar6,TokenHandle);
  uVar4 = extraout_EDX;
  if (BVar1 != 0) {
    local_54 = 0;
    BVar1 = GetTokenInformation(local_58,TokenGroupsAndPrivileges,(LPVOID)0x0,0,&local_54);
    if (((BVar1 == 0) && (DVar6 = GetLastError(), DVar6 == 0x7a)) &&
       (TokenInformation = (int *)FUN_004100b1(local_54), TokenInformation != (int *)0x0)) {
      BVar1 = GetTokenInformation(local_58,TokenGroupsAndPrivileges,TokenInformation,local_54,
                                  &local_54);
      if (((BVar1 != 0) && (iVar2 = FUN_004076ed(local_58,local_4c), iVar2 == 0)) &&
         ((iVar2 = FUN_00407478((undefined4 *)TokenInformation[2],*TokenInformation,local_50,param_2
                               ), iVar2 != 0 &&
          (iVar2 = FUN_004074d3((undefined4 *)TokenInformation[5],TokenInformation[3],local_50,
                                param_2,local_4c), iVar2 != 0)))) {
        piVar3 = (int *)TokenInformation[8];
        for (iVar2 = TokenInformation[6]; iVar2 != 0; iVar2 = iVar2 + -1) {
          local_50 = 0;
          piVar5 = param_3;
          if (param_4 != 0) {
            do {
              if ((*piVar3 == *piVar5) && (piVar3[1] == piVar5[1])) break;
              local_50 = local_50 + 1;
              piVar5 = piVar5 + 3;
            } while (local_50 < param_4);
          }
          piVar3 = piVar3 + 3;
        }
      }
      free(TokenInformation);
    }
    CloseHandle(local_58);
    uVar4 = extraout_EDX_00;
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_004072c7 */

void __fastcall
FUN_004072c7(PSID_AND_ATTRIBUTES param_1,DWORD param_2,_LUID_AND_ATTRIBUTES *param_3,DWORD param_4)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  int iVar2;
  LPWSTR lpCommandLine;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  DWORD DVar4;
  HANDLE *TokenHandle;
  _STARTUPINFOW local_2b4;
  _PROCESS_INFORMATION local_270;
  _LUID_AND_ATTRIBUTES *local_260;
  HANDLE local_25c;
  HANDLE local_258;
  WCHAR local_254 [260];
  _LUID_AND_ATTRIBUTES local_4c [5];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_25c = (HANDLE)0x0;
  local_258 = (HANDLE)0x0;
  local_260 = param_3;
  TokenHandle = &local_25c;
  DVar4 = 0x200eb;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,DVar4,TokenHandle);
  if (BVar1 == 0) {
    GetLastError();
    uVar3 = extraout_EDX_00;
    goto LAB_0040745f;
  }
  iVar2 = FUN_004076ed(local_25c,local_4c);
  if (iVar2 == 0) {
    BVar1 = CreateRestrictedToken
                      (local_25c,0,param_2,param_1,param_4,local_260,0,(PSID_AND_ATTRIBUTES)0x0,
                       &local_258);
    if (BVar1 == 0) {
      GetLastError();
    }
    else {
      local_2b4.cb = 0x44;
      memset(&local_2b4.lpReserved,0,0x40);
      GetStartupInfoW(&local_2b4);
      local_270.hProcess = (HANDLE)0x0;
      local_270.hThread = (HANDLE)0x0;
      local_270.dwProcessId = 0;
      local_270.dwThreadId = 0;
      lpCommandLine = GetCommandLineW();
      DVar4 = GetModuleFileNameW((HMODULE)0x0,local_254,0x104);
      if (DVar4 == 0) {
LAB_0040742b:
        GetLastError();
      }
      else {
        local_260 = local_4c;
        DVar4 = FUN_0040774b(local_258,&local_260);
        if (DVar4 == 0) {
          BVar1 = CreateProcessAsUserW
                            (local_258,local_254,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_2b4,
                             &local_270);
          if (BVar1 == 0) goto LAB_0040742b;
          WaitForInputIdle(local_270.hProcess,5000);
          CloseHandle(local_270.hProcess);
          CloseHandle(local_270.hThread);
        }
      }
      CloseHandle(local_258);
    }
  }
  CloseHandle(local_25c);
  uVar3 = extraout_EDX;
LAB_0040745f:
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00407478 */

undefined4 __fastcall FUN_00407478(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 local_8;
  
  uVar1 = 1;
  local_8 = 1;
  if (param_2 != 0) {
    do {
      uVar3 = 0;
      if (param_4 != 0) {
        do {
          BVar2 = EqualSid((PSID)*param_1,*(PSID *)(param_3 + uVar3 * 8));
          if ((BVar2 != 0) && ((*(byte *)(param_1 + 1) & 0x10) == 0)) {
            local_8 = 0;
            uVar1 = 0;
            break;
          }
          uVar3 = uVar3 + 1;
          uVar1 = local_8;
        } while (uVar3 < param_4);
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar1;
}



/* Function: FUN_004074d3 */

undefined4 __fastcall
FUN_004074d3(undefined4 *param_1,int param_2,int param_3,uint param_4,PSID param_5)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_c;
  undefined4 *local_8;
  
  uVar3 = 1;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      BVar1 = EqualSid(param_5,*(PSID *)(param_3 + uVar2 * 8));
      if (BVar1 != 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  local_c = param_2;
  local_8 = param_1;
  if (param_2 != 0) {
    do {
      uVar2 = 0;
      if (param_4 != 0) {
        do {
          BVar1 = EqualSid((PSID)*local_8,*(PSID *)(param_3 + uVar2 * 8));
          if (BVar1 != 0) {
            uVar3 = 0;
            break;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_4);
      }
      local_8 = local_8 + 2;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return uVar3;
}



/* Function: FUN_0040755b */

DWORD __fastcall FUN_0040755b(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  DWORD local_c;
  int *local_8;
  
  DVar4 = 0;
  piVar1 = (int *)FUN_004100b1(0x10);
  if (piVar1 == (int *)0x0) {
    DVar4 = 8;
  }
  else {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    uVar5 = 0;
    local_8 = piVar1;
    do {
      iVar2 = FUN_004100b1(0x44);
      *local_8 = iVar2;
      if (iVar2 == 0) {
        DVar4 = 8;
LAB_004075e5:
        FUN_00406f84(piVar1,2);
        return DVar4;
      }
      local_c = 0x44;
      BVar3 = CreateWellKnownSid(*(WELL_KNOWN_SID_TYPE *)((int)&DAT_00403184 + uVar5),(PSID)0x0,
                                 (PSID)*local_8,&local_c);
      if (BVar3 == 0) {
        DVar4 = GetLastError();
        if (DVar4 != 0) goto LAB_004075e5;
        break;
      }
      local_8 = local_8 + 2;
      uVar5 = uVar5 + 4;
    } while (uVar5 < 8);
    *param_1 = piVar1;
    *param_2 = 2;
  }
  return DVar4;
}



/* Function: FUN_00407601 */

ULONG __fastcall FUN_00407601(undefined4 *param_1,undefined4 *param_2)

{
  void *_Memory;
  NTSTATUS NVar1;
  int Status;
  ULONG UVar2;
  uint uVar3;
  _LSA_OBJECT_ATTRIBUTES local_34;
  undefined1 local_1c [8];
  undefined4 *local_14;
  undefined4 *local_10;
  LSA_HANDLE local_c;
  void *local_8;
  
  UVar2 = 0;
  *param_1 = 0;
  *param_2 = 0;
  local_14 = param_1;
  local_10 = param_2;
  _Memory = (void *)FUN_004100b1(0xd8);
  if (_Memory == (void *)0x0) {
    UVar2 = 8;
  }
  else {
    local_34.Length = 0x18;
    local_34.RootDirectory = (HANDLE)0x0;
    local_34.Attributes = 0;
    local_34.ObjectName = (PLSA_UNICODE_STRING)0x0;
    local_34.SecurityDescriptor = (PVOID)0x0;
    local_34.SecurityQualityOfService = (PVOID)0x0;
    NVar1 = LsaOpenPolicy((PLSA_UNICODE_STRING)0x0,&local_34,0x800,&local_c);
    if (NVar1 == 0) {
      uVar3 = 0;
      local_8 = _Memory;
      do {
        RtlInitUnicodeString
                  (local_1c,*(undefined4 *)
                             ((int)&PTR_u_SeAssignPrimaryTokenPrivilege_004017a8 + uVar3));
        Status = LsaLookupPrivilegeValue(local_c,local_1c,local_8);
        if (Status != 0) {
          UVar2 = LsaNtStatusToWinError(Status);
          break;
        }
        local_8 = (void *)((int)local_8 + 0xc);
        uVar3 = uVar3 + 4;
      } while (uVar3 < 0x48);
      NVar1 = LsaClose(local_c);
      param_2 = local_10;
      if (NVar1 != 0) {
        UVar2 = LsaNtStatusToWinError(NVar1);
        param_2 = local_10;
      }
    }
    else {
      UVar2 = LsaNtStatusToWinError(NVar1);
    }
    if (UVar2 == 0) {
      *param_2 = 0x12;
      *local_14 = _Memory;
    }
    else {
      free(_Memory);
    }
  }
  return UVar2;
}



/* Function: FUN_004076ed */

void __fastcall FUN_004076ed(HANDLE param_1,PSID param_2)

{
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  DWORD local_58;
  PSID local_54 [19];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_58 = 0;
  BVar1 = GetTokenInformation(param_1,TokenUser,local_54,0x4c,&local_58);
  if (BVar1 == 0) {
    GetLastError();
    uVar2 = extraout_EDX_00;
  }
  else {
    CopySid(0x44,param_2,local_54[0]);
    uVar2 = extraout_EDX;
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040774b */

DWORD __fastcall FUN_0040774b(HANDLE param_1,void *param_2)

{
  void *_Memory;
  BOOL BVar1;
  PSECURITY_DESCRIPTOR pSecurityDescriptor;
  DWORD DVar2;
  BOOL local_24;
  BOOL local_20;
  HANDLE local_1c;
  void *local_18;
  uint local_14;
  void *local_10;
  PACL local_c;
  DWORD local_8;
  
  local_c = (PACL)0x0;
  local_10 = (void *)0x0;
  DVar2 = 0;
  local_8 = 0;
  local_1c = param_1;
  local_18 = param_2;
  BVar1 = GetKernelObjectSecurity(param_1,4,(PSECURITY_DESCRIPTOR)0x0,0,&local_8);
  if ((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
    pSecurityDescriptor = (PSECURITY_DESCRIPTOR)FUN_004100b1(local_8);
    if (pSecurityDescriptor == (PSECURITY_DESCRIPTOR)0x0) {
      DVar2 = 8;
    }
    else {
      BVar1 = GetKernelObjectSecurity(param_1,4,pSecurityDescriptor,local_8,&local_8);
      if ((BVar1 == 0) ||
         (BVar1 = GetSecurityDescriptorDacl(pSecurityDescriptor,&local_24,&local_c,&local_20),
         BVar1 == 0)) {
        DVar2 = GetLastError();
      }
      else {
        local_14 = 0;
        DVar2 = FUN_00407845(local_18,local_c,(int *)&local_10,&local_14);
        _Memory = local_10;
        if (DVar2 == 0) {
          local_18 = local_10;
          BVar1 = SetTokenInformation(local_1c,TokenDefaultDacl,&local_18,local_14 + 4);
          if (BVar1 == 0) {
            DVar2 = GetLastError();
          }
          free(_Memory);
        }
      }
      free(pSecurityDescriptor);
    }
  }
  return DVar2;
}



/* Function: FUN_00407845 */

void __thiscall FUN_00407845(void *this,PACL param_1,int *param_2,uint *param_3)

{
  uint nAclLength;
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  uint uVar4;
  undefined8 uVar5;
  LPVOID local_28;
  PACL local_24;
  void *local_20;
  int local_1c;
  uint *local_18;
  uint local_14;
  uint local_10;
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  uVar3 = 0;
  local_24 = param_1;
  local_18 = param_3;
  *param_3 = 0;
  local_20 = this;
  if (param_1 == (PACL)0x0) {
    *param_2 = 0;
    *param_3 = 0;
    goto LAB_004079a1;
  }
  BVar1 = GetAclInformation(param_1,&local_14,0xc,AclSizeInformation);
  if (BVar1 == 0) {
LAB_0040797d:
    DVar2 = GetLastError();
    uVar3 = extraout_EDX_03;
  }
  else {
    local_1c = 0;
    uVar4 = local_10;
    do {
      DVar2 = GetLengthSid(*(PSID *)((int)local_20 + local_1c * 4));
      uVar3 = extraout_EDX;
      if ((DVar2 + 8 < DVar2) || (nAclLength = DVar2 + 8 + uVar4, nAclLength < uVar4))
      goto LAB_004079a1;
      local_1c = local_1c + 1;
      uVar4 = nAclLength;
    } while (local_1c == 0);
    uVar5 = FUN_004100b1(nAclLength);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    *param_2 = (int)uVar5;
    if ((int)uVar5 != 0) {
      *local_18 = nAclLength;
      BVar1 = InitializeAcl((PACL)*param_2,nAclLength,2);
      if (BVar1 != 0) {
        DVar2 = 0;
        do {
          BVar1 = AddAccessAllowedAce((PACL)*param_2,2,0x10000000,
                                      *(PSID *)((int)local_20 + DVar2 * 4));
          if ((BVar1 == 0) || (BVar1 = GetAce((PACL)*param_2,DVar2,&local_18), BVar1 == 0)) {
            DVar2 = GetLastError();
            uVar3 = extraout_EDX_01;
            if (DVar2 != 0) goto LAB_00407989;
            break;
          }
          DVar2 = DVar2 + 1;
          *(undefined1 *)((int)local_18 + 1) = 0;
          uVar3 = extraout_EDX_00;
        } while (DVar2 == 0);
        DVar2 = 0;
        if (local_14 != 0) {
          do {
            BVar1 = GetAce(local_24,DVar2,&local_28);
            if ((BVar1 == 0) ||
               (BVar1 = AddAce((PACL)*param_2,2,0xffffffff,local_28,
                               (uint)*(ushort *)((int)local_28 + 2)), BVar1 == 0))
            goto LAB_0040797d;
            DVar2 = DVar2 + 1;
            uVar3 = extraout_EDX_02;
          } while (DVar2 < local_14);
        }
        goto LAB_004079a1;
      }
      goto LAB_0040797d;
    }
    DVar2 = 8;
  }
  if (DVar2 != 0) {
LAB_00407989:
    if (*param_2 != 0) {
      free((void *)*param_2);
      *param_2 = 0;
      uVar3 = extraout_EDX_04;
    }
  }
LAB_004079a1:
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004079b8 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004079b8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  BOOL BVar8;
  HANDLE pvVar9;
  ULONG UVar10;
  int iVar11;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar12;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar13;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int iVar14;
  MSG local_1658;
  undefined2 local_163c [2];
  undefined2 local_1638 [22];
  DWORD local_160c;
  undefined4 local_1608;
  uint local_1604;
  _LUID_AND_ATTRIBUTES *local_1600;
  code *local_15fc;
  HANDLE local_15f8;
  _LUID_AND_ATTRIBUTES *local_15f4;
  int local_15f0;
  short local_15ec [2084];
  short local_5a4 [326];
  WCHAR local_318 [326];
  WCHAR local_8c [66];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_1604 = param_1;
  iVar14 = 1;
  local_1608 = param_3;
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  pHVar3 = GetModuleHandleW(L"kernel32.dll");
  pFVar4 = GetProcAddress(pHVar3,"SetProcessDEPPolicy");
  uVar12 = extraout_ECX;
  uVar13 = extraout_EDX;
  if (pFVar4 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_00414398)(1);
    (*pFVar4)();
    uVar12 = extraout_ECX_00;
    uVar13 = extraout_EDX_00;
  }
  FUN_0040cc28(uVar12,uVar13);
  iVar5 = FUN_0040552d(4);
  uVar12 = extraout_ECX_01;
  if (iVar5 != 0) {
    memset(local_1638,0,0x30);
    local_1638[0] = 0x30;
    FUN_0040cd35((int)local_1638,4,0x1e);
    uVar12 = extraout_ECX_02;
  }
  local_15f0 = 0;
  local_15f8 = (HANDLE)0x0;
  DAT_004139ac = 0;
  local_15f4 = (_LUID_AND_ATTRIBUTES *)0x0;
  local_1600 = (_LUID_AND_ATTRIBUTES *)0x0;
  DVar6 = FUN_0040b5f9(uVar12,local_318,uVar12,local_8c,uVar12,local_5a4,uVar12,local_15ec);
  if ((-1 < (int)DVar6) && ((DAT_004139ac & 0x60) != 0)) {
    DVar6 = CoInitialize((LPVOID)0x0);
    iVar5 = 0;
    if ((-1 < (int)DVar6) && (DVar6 = FUN_00408b8f(), iVar5 = iVar14, -1 < (int)DVar6)) {
      DVar6 = FUN_00407f44((byte)(DAT_004139ac >> 5) & 1);
      goto LAB_00407e99;
    }
    goto LAB_00407ab8;
  }
  local_15fc = (code *)0x0;
  DVar7 = FUN_0040d4e4(&local_15fc);
  pcVar1 = local_15fc;
  if ((int)DVar7 < 0) {
LAB_00407f36:
    FUN_0040d08a(DVar7);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_15fc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00414398)(local_1604,local_1608,param_4);
    (*pcVar1)();
    uVar12 = extraout_EDX_01;
    goto LAB_00407f25;
  }
  if ((int)DVar6 < 0) {
LAB_00407b30:
    FUN_0040d098();
    iVar5 = local_15f0;
  }
  else {
    if ((local_15ec[0] != 0) && ((DAT_004139ac & 0x10) != 0)) {
      DVar6 = CoInitialize((LPVOID)0x0);
      if (-1 < (int)DVar6) {
        FUN_0040ba68();
        iVar5 = 1;
        goto LAB_00407e99;
      }
      goto LAB_00407b30;
    }
    if ((local_318[0] != L'\0') && (DAT_004139ac == 0)) {
      DVar6 = FUN_0040db27(local_318);
      if (-1 < (int)DVar6) {
LAB_00407b92:
        DAT_00413a80 = 0;
        iVar5 = local_15f0;
        goto LAB_00407e99;
      }
      goto LAB_00407b30;
    }
    if ((local_5a4[0] != 0) && ((DAT_004139ac & 8) != 0)) {
      DAT_004139b0 = local_5a4;
    }
    local_1604 = DAT_004139ac & 1;
    iVar5 = iVar14;
    if (((DAT_004139ac & 2) == 0) && (BVar8 = IsDebuggerPresent(), BVar8 == 0)) {
      iVar5 = 0;
    }
    if ((local_1604 != 0) && (iVar5 == 0)) {
      pvVar9 = (HANDLE)GetCurrentProcessId();
      DVar7 = FUN_0040e521(pvVar9);
      if ((int)DVar7 < 0x3000) {
        UVar10 = FUN_00407601(&local_1600,&local_15f8);
        if (UVar10 != 0) {
          local_15f4 = local_1600;
          DAT_00413a80 = 2;
          iVar5 = local_15f0;
          goto LAB_00407e99;
        }
        local_15f4 = local_1600;
        iVar11 = FUN_0040710e((int *)local_1600,(uint)local_15f8);
        if (iVar11 == 0) {
          bVar2 = FUN_00406fb2(extraout_ECX_03,local_15f4,(DWORD)local_15f8);
          if (CONCAT31(extraout_var,bVar2) == 0) {
            DVar7 = FUN_00408b83();
            goto LAB_00407f36;
          }
          goto LAB_00407b92;
        }
        if (local_15f4 != (_LUID_AND_ATTRIBUTES *)0x0) {
          free(local_15f4);
          local_15f4 = (_LUID_AND_ATTRIBUTES *)0x0;
        }
      }
    }
    FUN_004048f9();
    FUN_00404953();
    if (iVar5 == 0) {
      local_15fc = (code *)0x0;
      DAT_00413a80 = 9;
      DVar6 = FUN_0040dd62(L"NoHostTimeoutSeconds",(LPBYTE)&local_15fc,600);
      if (-1 < (int)DVar6) {
        local_15f8 = (HANDLE)0x0;
        BVar8 = CreateTimerQueueTimer
                          (&local_15f8,(HANDLE)0x0,FUN_0040dd40,(PVOID)0x0,(int)local_15fc * 1000,0,
                           8);
        if (BVar8 == 0) {
          DAT_00413a7c = (HANDLE)0x0;
        }
        else {
          DAT_00413a7c = local_15f8;
          if (local_15f8 != (HANDLE)0x0) {
            DAT_00413a80 = 0;
            goto LAB_00407d08;
          }
        }
        FUN_0040d098();
        DVar7 = GetLastError();
        iVar5 = local_15f0;
        DVar6 = DVar7 & 0xffff | 0x80070000;
        if ((int)DVar7 < 1) {
          DVar6 = DVar7;
        }
        goto LAB_00407e99;
      }
      goto LAB_00407b30;
    }
LAB_00407d08:
    DVar6 = CoInitialize((LPVOID)0x0);
    if ((int)DVar6 < 0) goto LAB_00407b30;
    local_15f0 = 1;
    DVar6 = FUN_00408b8f();
    iVar5 = iVar14;
    if ((int)DVar6 < 0) {
LAB_00407ab8:
      FUN_0040d098();
    }
    else {
      iVar5 = 1;
      if ((DAT_004139ac & 1) != 0) {
        DVar6 = FUN_0040554f();
        if (-1 < (int)DVar6) {
          iVar5 = iVar14;
          if (((DAT_004139ac & 4) != 0) &&
             ((((pvVar9 = OpenEventW(2,0,local_8c), pvVar9 == (HANDLE)0x0 ||
                (BVar8 = SetEvent(pvVar9), BVar8 == 0)) && (iVar14 = 0, pvVar9 == (HANDLE)0x0)) ||
              (CloseHandle(pvVar9), iVar5 = local_15f0, iVar14 == 0)))) {
            DAT_00413a80 = 5;
            iVar5 = local_15f0;
            goto LAB_00407e99;
          }
          if (((local_318[0] == L'\0') || ((DAT_004139ac & 2) == 0)) ||
             (DVar6 = FUN_0040db27(local_318), -1 < (int)DVar6)) {
            iVar14 = FUN_0040552d(5);
            if (iVar14 != 0) {
              memset(local_1638,0,0x30);
              local_1638[0] = 0x30;
              FUN_0040cd35((int)local_1638,5,0x22);
            }
LAB_00407e88:
            BVar8 = GetMessageW(&local_1658,(HWND)0x0,0,0);
            if (BVar8 != 0) {
              if (((DAT_004139a0 != 0) && (iVar14 = *(int *)(DAT_004139a0 + 0x1c), iVar14 != 0)) &&
                 ((*(int *)(iVar14 + 0x28) != 0 && (*(int *)(iVar14 + 0x2c) != 0))))
              goto code_r0x00407e50;
              goto LAB_00407e69;
            }
            goto LAB_00407e99;
          }
        }
        goto LAB_00407ab8;
      }
      DAT_00413a80 = 1;
    }
  }
LAB_00407e99:
  FUN_004055e8();
  if (local_15f4 != (_LUID_AND_ATTRIBUTES *)0x0) {
    free(local_15f4);
  }
  if (iVar5 != 0) {
    pHVar3 = GetModuleHandleW(L"clr.dll");
    if ((pHVar3 != (HMODULE)0x0) ||
       (pHVar3 = GetModuleHandleW(L"mscorwks.dll"), pHVar3 != (HMODULE)0x0)) {
      FUN_00408b1f();
    }
    CoUninitialize();
  }
  DVar7 = DAT_00413a80;
  if ((int)DVar6 < 0) {
    DVar7 = DVar6;
  }
  iVar14 = FUN_0040552d(4);
  uVar12 = extraout_EDX_02;
  if (iVar14 != 0) {
    memset(local_163c,0,0x34);
    local_163c[0] = 0x34;
    local_160c = DVar7;
    FUN_0040cd35((int)local_163c,4,0x1f);
    uVar12 = extraout_EDX_03;
  }
LAB_00407f25:
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar12);
  return;
code_r0x00407e50:
  pcVar1 = *(code **)(iVar14 + 0x38);
  (*(code *)PTR_guard_check_icall_00414398)(&local_1658,0);
  iVar14 = (*pcVar1)();
  if (iVar14 != 0) {
LAB_00407e69:
    TranslateMessage(&local_1658);
    DispatchMessageW(&local_1658);
  }
  goto LAB_00407e88;
}



/* Function: FUN_00407f44 */

void __fastcall FUN_00407f44(byte param_1)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  undefined8 uVar3;
  wchar_t local_198 [200];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
    iVar1 = FUN_00408049();
  }
  else {
    iVar1 = FUN_0040847d();
  }
  if (-1 < iVar1) {
    uVar3 = FUN_0040ab80((int *)&DAT_00413a40,L"RegistrySetup",(uint)param_1,(undefined4 *)0x0);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (-1 < (int)uVar3) goto LAB_00407fc0;
  }
  FUN_00404db1(local_198,200,L"Registration failed. HRESULT: 0x%0X.");
  MessageBoxW((HWND)0x0,local_198,L"PresentationHost.exe",0x10);
  uVar2 = extraout_EDX;
LAB_00407fc0:
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_00407fd8 */

int FUN_00407fd8(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  piVar3 = (int *)PTR_DAT_00413054;
  piVar5 = (int *)PTR_DAT_00413050;
  do {
    if (piVar3 <= piVar5) {
      return iVar4;
    }
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar2 = (code *)puVar1[7];
      (*(code *)PTR_guard_check_icall_00414398)();
      piVar3 = (int *)(*pcVar2)();
      iVar4 = FUN_004080f4((GUID *)*puVar1,piVar3,0);
      if (iVar4 < 0) {
        return iVar4;
      }
      pcVar2 = (code *)puVar1[1];
      (*(code *)PTR_guard_check_icall_00414398)(0);
      iVar4 = (*pcVar2)();
      piVar3 = (int *)PTR_DAT_00413054;
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    piVar5 = piVar5 + 1;
  } while( true );
}



/* Function: FUN_00408049 */

void FUN_00408049(void)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004113b0;
  local_10 = ExceptionList;
  uVar2 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar5 = DAT_00413a6c;
  if (DAT_00413a6c != (int *)0x0) {
    for (; *piVar5 != 0; piVar5 = piVar5 + 9) {
      pcVar1 = (code *)piVar5[7];
      (*(code *)PTR_guard_check_icall_00414398)(uVar2);
      piVar3 = (int *)(*pcVar1)();
      iVar4 = FUN_004080f4((GUID *)*piVar5,piVar3,0);
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return;
      }
      pcVar1 = (code *)piVar5[1];
      (*(code *)PTR_guard_check_icall_00414398)(0);
      iVar4 = (*pcVar1)();
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return;
      }
    }
  }
  pcVar1 = DAT_0041398c;
  local_8 = CONCAT31(local_8._1_3_,1);
  if (DAT_0041398c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00414398)();
    iVar4 = (*pcVar1)();
    if (iVar4 < 0) {
      ExceptionList = local_10;
      return;
    }
  }
  FUN_00407fd8();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004080f4 */

void __fastcall FUN_004080f4(GUID *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  errno_t eVar5;
  LSTATUS LVar6;
  undefined4 extraout_EDX;
  code *pcVar7;
  HKEY pHVar8;
  HKEY hKey;
  GUID *local_1c4;
  int *local_1c0;
  int *local_1bc;
  HKEY pHStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  HKEY pHStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  wchar_t awStack_190 [128];
  OLECHAR aOStack_90 [66];
  uint local_c;
  
  local_c = DAT_00413140 ^ (uint)&local_1c4;
  local_1c0 = (int *)0x0;
  local_1c4 = param_1;
  local_1bc = param_2;
  if (((param_2 != (int *)0x0) &&
      ((((param_1->Data1 != DAT_004027f4 ||
         (iVar4._0_2_ = param_1->Data2, iVar4._2_2_ = param_1->Data3, iVar4 != DAT_004027f8)) ||
        (*(int *)param_1->Data4 != DAT_004027fc)) || (*(int *)(param_1->Data4 + 4) != DAT_00402800))
      )) && (HVar3 = CoCreateInstance((IID *)&DAT_004027e4,(LPUNKNOWN)0x0,1,(IID *)&DAT_004032c0,
                                      &local_1c0), -1 < HVar3)) {
    iVar4 = *param_2;
    while (iVar4 != 0) {
      puVar1 = (undefined4 *)param_2[1];
      uStack_1a0 = *puVar1;
      uStack_19c = puVar1[1];
      uStack_198 = puVar1[2];
      uStack_194 = puVar1[3];
      if (param_3 == 0) {
        iVar2 = *local_1c0;
        if (iVar4 == 1) {
          (*(code *)PTR_guard_check_icall_00414398)();
          (**(code **)(iVar2 + 0x18))();
        }
        else {
          (*(code *)PTR_guard_check_icall_00414398)(local_1c0,local_1c4,1,&uStack_1a0);
          (**(code **)(iVar2 + 0x20))();
        }
      }
      else {
        if (iVar4 == 1) {
          pcVar7 = *(code **)(*local_1c0 + 0x14);
        }
        else {
          pcVar7 = *(code **)(*local_1c0 + 0x1c);
        }
        (*(code *)PTR_guard_check_icall_00414398)(local_1c0,local_1c4,1,&uStack_1a0);
        iVar4 = (*pcVar7)();
        if (iVar4 < 0) goto LAB_004083e4;
      }
      param_2 = local_1bc + 2;
      param_1 = local_1c4;
      local_1bc = param_2;
      iVar4 = *param_2;
    }
    if (param_3 == 0) {
      StringFromGUID2(param_1,aOStack_90,0x40);
      eVar5 = wcscpy_s(awStack_190,0x80,L"CLSID\\");
      FUN_00409d6a(eVar5);
      eVar5 = wcscat_s(awStack_190,0x80,aOStack_90);
      FUN_00409d6a(eVar5);
      eVar5 = wcscat_s(awStack_190,0x80,L"\\Required Categories");
      FUN_00409d6a(eVar5);
      uStack_1a8 = 0;
      hKey = (HKEY)0x80000000;
      uStack_1a4 = 0;
      pHStack_1ac = (HKEY)0x80000000;
      pHStack_1b8 = (HKEY)0x0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      local_1c4 = (GUID *)0x0;
      LVar6 = FUN_00409e4e(&pHStack_1b8,(HKEY)0x80000000,awStack_190,0x20019);
      pHVar8 = pHStack_1b8;
      if (LVar6 == 0) {
        local_1bc = (int *)RegQueryInfoKeyW(pHStack_1b8,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (LPDWORD)&local_1c4,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (PFILETIME)0x0);
        if (pHVar8 != (HKEY)0x0) {
          RegCloseKey(pHVar8);
          pHStack_1b8 = (HKEY)0x0;
        }
        if ((local_1bc == (int *)0x0) && (local_1c4 == (GUID *)0x0)) {
          FUN_00409fc0(&pHStack_1ac,awStack_190);
          hKey = pHStack_1ac;
        }
      }
      eVar5 = wcscpy_s(awStack_190,0x80,L"CLSID\\");
      FUN_00409d6a(eVar5);
      eVar5 = wcscat_s(awStack_190,0x80,aOStack_90);
      FUN_00409d6a(eVar5);
      eVar5 = wcscat_s(awStack_190,0x80,L"\\Implemented Categories");
      FUN_00409d6a(eVar5);
      LVar6 = FUN_00409e4e(&pHStack_1b8,hKey,awStack_190,0x20019);
      pHVar8 = pHStack_1b8;
      if (LVar6 == 0) {
        local_1bc = (int *)RegQueryInfoKeyW(pHStack_1b8,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (LPDWORD)&local_1c4,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (PFILETIME)0x0);
        if (pHVar8 != (HKEY)0x0) {
          RegCloseKey(pHVar8);
          pHVar8 = (HKEY)0x0;
        }
        if ((local_1bc == (int *)0x0) && (local_1c4 == (GUID *)0x0)) {
          FUN_00409fc0(&pHStack_1ac,awStack_190);
          hKey = pHStack_1ac;
        }
      }
      if (pHVar8 != (HKEY)0x0) {
        RegCloseKey(pHVar8);
      }
      if (hKey != (HKEY)0x0) {
        RegCloseKey(hKey);
      }
    }
  }
LAB_004083e4:
  ~CComPtr<>((int *)&local_1c0);
  FUN_00410680(local_c ^ (uint)&local_1c4,extraout_EDX);
  return;
}



/* Function: FUN_0040840c */

int FUN_0040840c(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  piVar3 = (int *)PTR_DAT_00413054;
  piVar5 = (int *)PTR_DAT_00413050;
  do {
    if (piVar3 <= piVar5) {
      return iVar4;
    }
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar2 = (code *)puVar1[1];
      (*(code *)PTR_guard_check_icall_00414398)(1);
      iVar4 = (*pcVar2)();
      if (iVar4 < 0) {
        return iVar4;
      }
      pcVar2 = (code *)puVar1[7];
      (*(code *)PTR_guard_check_icall_00414398)();
      piVar3 = (int *)(*pcVar2)();
      iVar4 = FUN_004080f4((GUID *)*puVar1,piVar3,1);
      piVar3 = (int *)PTR_DAT_00413054;
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    piVar5 = piVar5 + 1;
  } while( true );
}



/* Function: FUN_0040847d */

void FUN_0040847d(void)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004113d3;
  local_10 = ExceptionList;
  uVar2 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar5 = DAT_00413a6c;
  if (DAT_00413a6c != (int *)0x0) {
    for (; *piVar5 != 0; piVar5 = piVar5 + 9) {
      pcVar1 = (code *)piVar5[1];
      (*(code *)PTR_guard_check_icall_00414398)(1,uVar2);
      iVar4 = (*pcVar1)();
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return;
      }
      pcVar1 = (code *)piVar5[7];
      (*(code *)PTR_guard_check_icall_00414398)();
      piVar3 = (int *)(*pcVar1)();
      iVar4 = FUN_004080f4((GUID *)*piVar5,piVar3,1);
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return;
      }
    }
  }
  local_8 = 0;
  iVar4 = FUN_0040840c();
  pcVar1 = DAT_00413988;
  if ((-1 < iVar4) && (DAT_00413988 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00414398)(PTR_IMAGE_DOS_HEADER_00413010);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040852a */

bool FUN_0040852a(void)

{
  uint uVar1;
  DWORD DVar2;
  int local_8;
  
  if (DAT_00413188 == 0xffffffff) {
    DVar2 = FUN_0040872d(&local_8);
    LOCK();
    uVar1 = ~DVar2 >> 0x1f;
    if (DAT_00413188 != 0xffffffff) {
      uVar1 = DAT_00413188;
    }
    DAT_00413188 = uVar1;
    UNLOCK();
  }
  return DAT_00413188 != 0;
}



/* Function: FUN_00408567 */

void FUN_00408567(undefined4 *param_1)

{
  int iVar1;
  
  while( true ) {
    LOCK();
    iVar1 = *(int *)*param_1;
    *(int *)*param_1 = 1;
    UNLOCK();
    if (iVar1 != 1) break;
    SwitchToThread();
  }
  return;
}



/* Function: FUN_0040858f */

void __fastcall FUN_0040858f(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)((int)param_1 + 5) == '\0') {
      LOCK();
      *(undefined4 *)*param_1 = 0;
      UNLOCK();
    }
    *(undefined2 *)(param_1 + 1) = 0;
  }
  return;
}



/* Function: FUN_004085b0 */

void __fastcall FUN_004085b0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041138d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)((int)param_1 + 5) == '\0') {
      FUN_004048a2(param_1);
    }
    *(undefined2 *)(param_1 + 1) = 0;
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408608 */

void __fastcall FUN_00408608(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041138d;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(char *)(param_1 + 5) == '\0') {
      FUN_004048a2((undefined4 *)param_1);
    }
    *(undefined2 *)(param_1 + 4) = 0;
  }
  ExceptionList = pvStack_10;
  return;
}



/* Function: thunk_FUN_0040861e */

void __fastcall thunk_FUN_0040861e(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)((int)param_1 + 5) == '\0') {
      FreeLibrary((HMODULE)*param_1);
    }
    *(undefined2 *)(param_1 + 1) = 0;
  }
  return;
}



/* Function: FUN_0040861e */

void __fastcall FUN_0040861e(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)((int)param_1 + 5) == '\0') {
      FreeLibrary((HMODULE)*param_1);
    }
    *(undefined2 *)(param_1 + 1) = 0;
  }
  return;
}



/* Function: FUN_00408645 */

DWORD __fastcall FUN_00408645(HMODULE param_1)

{
  HMODULE pHVar1;
  HMODULE pHVar2;
  DWORD DVar3;
  HMODULE pHVar4;
  HMODULE local_c;
  HMODULE local_8;
  
  if (DAT_00413984 == (HMODULE)0x0) {
    local_c = param_1;
    local_8 = param_1;
    pHVar2 = LoadLibraryW(L"mscoree.dll");
    if (pHVar2 == (HMODULE)0x0) {
      DVar3 = GetLastError();
      if (0 < (int)DVar3) {
        return DVar3 & 0xffff | 0x80070000;
      }
      return DVar3;
    }
    local_8 = (HMODULE)CONCAT22(local_8._2_2_,1);
    pHVar4 = (HMODULE)0x0;
    LOCK();
    pHVar1 = pHVar2;
    if (DAT_00413984 != (HMODULE)0x0) {
      pHVar4 = DAT_00413984;
      pHVar1 = DAT_00413984;
    }
    DAT_00413984 = pHVar1;
    UNLOCK();
    if (pHVar4 == (HMODULE)0x0) {
      DAT_00413198 = DAT_00413984;
      DAT_0041319c = 1;
      local_8 = (HMODULE)CONCAT22(local_8._2_2_,0x101);
    }
    local_c = pHVar2;
    FUN_0040861e(&local_c);
  }
  param_1->unused = (int)DAT_00413984;
  return 0;
}



/* Function: FUN_004086c8 */

DWORD __fastcall FUN_004086c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DWORD DVar1;
  FARPROC pFVar2;
  DWORD DVar3;
  HINSTANCE__ local_8;
  
  local_8.unused = 0;
  DVar1 = FUN_00408645(&local_8);
  if (-1 < (int)DVar1) {
    pFVar2 = GetProcAddress((HMODULE)local_8.unused,"CLRCreateInstance");
    if (pFVar2 == (FARPROC)0x0) {
      DVar3 = GetLastError();
      DVar1 = DVar3 & 0xffff | 0x80070000;
      if ((int)DVar3 < 1) {
        DVar1 = DVar3;
      }
    }
    else {
      (*(code *)PTR_guard_check_icall_00414398)(param_1,param_2,param_3);
      DVar1 = (*pFVar2)();
    }
  }
  return DVar1;
}



/* Function: FUN_0040872d */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

DWORD __fastcall FUN_0040872d(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  int local_1c;
  undefined2 local_18;
  int local_14 [3];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  uStack_8 = 0x408739;
  DVar2 = 0;
  if (DAT_00413980 == 0) {
    local_14[0] = 0;
    DVar2 = FUN_004086c8(&DAT_004028b8,&DAT_004028a8,local_14);
    if ((int)DVar2 < 0) {
      return DVar2;
    }
    local_18 = 1;
    local_1c = local_14[0];
    LOCK();
    iVar1 = DAT_00413980;
    if (DAT_00413980 == 0) {
      DAT_00413980 = local_14[0];
      iVar1 = 0;
    }
    UNLOCK();
    if (iVar1 == 0) {
      DAT_004131a8 = DAT_00413980;
      DAT_004131ac = 1;
      local_18 = 0x101;
    }
    FUN_004085b0(&local_1c);
  }
  *param_1 = DAT_00413980;
  return DVar2;
}



/* Function: FUN_004087af */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004087af(void)

{
  code *pcVar1;
  DWORD DVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 uVar6;
  undefined4 extraout_ECX_05;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar7;
  undefined4 extraout_EDX_03;
  uint uVar8;
  undefined8 uVar9;
  wchar_t *in_stack_00000010;
  rsize_t *in_stack_00000014;
  undefined4 local_64c;
  undefined2 local_648;
  FARPROC local_644;
  undefined4 local_640;
  rsize_t local_63c;
  rsize_t *local_638;
  HMODULE local_634;
  undefined2 local_630;
  undefined4 *local_62c;
  HINSTANCE__ local_628;
  undefined1 local_624 [520];
  wchar_t local_41c [256];
  wchar_t local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x63c;
  local_8 = 0x4087be;
  local_638 = in_stack_00000014;
  if (DAT_00413570 == (HMODULE)0x0) {
    local_628.unused = 0;
    DVar2 = FUN_004086c8(&DAT_00402888,&DAT_00402898,&local_628);
    uVar6 = extraout_ECX;
    uVar7 = extraout_EDX;
    if ((int)DVar2 < 0) goto LAB_00408a68;
    local_630 = 1;
    local_634 = (HMODULE)local_628.unused;
    LOCK();
    pHVar3 = DAT_00413570;
    if (DAT_00413570 == (HMODULE)0x0) {
      DAT_00413570 = (HMODULE)local_628.unused;
      pHVar3 = (HMODULE)0x0;
    }
    UNLOCK();
    if (pHVar3 == (HMODULE)0x0) {
      DAT_004131a0 = DAT_00413570;
      DAT_004131a4 = 1;
      local_630 = 0x101;
    }
    local_8 = 0xffffffff;
    FUN_004085b0(&local_634);
  }
  pHVar3 = DAT_00413570;
  local_640 = 0;
  pcVar1 = *(code **)(DAT_00413570->unused + 0xc);
  (*(code *)PTR_guard_check_icall_00414398)(DAT_00413570,0x40,0,0,0,0);
  uVar9 = (*pcVar1)();
  uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar6 = extraout_ECX_00;
  if ((int)uVar9 != 0) {
    local_628.unused = 0x100;
    wcscpy_s(local_41c,0x100,L"v4.0.0");
    pcVar1 = *(code **)(pHVar3->unused + 0xc);
    (*(code *)PTR_guard_check_icall_00414398)(pHVar3,0x48,0,0,local_41c,&local_628);
    uVar9 = (*pcVar1)();
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = extraout_ECX_01;
    if ((int)uVar9 != 0) {
      local_628.unused = 0;
      DVar2 = FUN_00408645(&local_628);
      uVar6 = extraout_ECX_02;
      uVar7 = extraout_EDX_00;
      if ((int)DVar2 < 0) goto LAB_00408a68;
      local_648 = 0;
      local_8 = 1;
      pFVar4 = GetProcAddress((HMODULE)local_628.unused,"GetRequestedRuntimeInfo");
      if (pFVar4 == (FARPROC)0x0) {
        DVar2 = GetLastError();
        uVar8 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar8 = DVar2;
        }
        pFVar4 = local_644;
        if (-1 < (int)uVar8) goto LAB_00408965;
      }
      else {
LAB_00408965:
        local_644 = pFVar4;
        pFVar4 = local_644;
        local_634 = (HMODULE)0x104;
        local_63c = 0x104;
        (*(code *)PTR_guard_check_icall_00414398)
                  (0,0,0,0,0x41,local_624,0x104,&local_634,local_21c,0x104,&local_63c);
        iVar5 = (*pFVar4)();
        if ((-1 < iVar5) && (iVar5 == 0)) {
          local_628.unused = 0;
          DVar2 = FUN_0040872d(&local_628.unused);
          if (-1 < (int)DVar2) {
                    /* WARNING: Load size is inaccurate */
            pcVar1 = *(code **)(*local_628.unused + 0xc);
            (*(code *)PTR_guard_check_icall_00414398)
                      (local_628.unused,local_21c,&DAT_004028c8,local_62c);
            iVar5 = (*pcVar1)();
            if (iVar5 == 0) {
              if (in_stack_00000010 != (wchar_t *)0x0) {
                wcsncpy_s(in_stack_00000010,*local_638,local_21c,local_63c);
                *local_638 = local_63c;
              }
              local_8 = 0xffffffff;
              FUN_0040861e(&local_64c);
              uVar6 = extraout_ECX_04;
              uVar7 = extraout_EDX_02;
              goto LAB_00408a40;
            }
          }
        }
      }
      FUN_0040861e(&local_64c);
      uVar6 = extraout_ECX_03;
      uVar7 = extraout_EDX_01;
      goto LAB_00408a68;
    }
  }
LAB_00408a40:
  if (((byte)local_640 & 3) == 1) {
    pcVar1 = *(code **)(*(int *)*local_62c + 0x34);
    (*(code *)PTR_guard_check_icall_00414398)((int *)*local_62c);
    (*pcVar1)();
    uVar6 = extraout_ECX_05;
    uVar7 = extraout_EDX_03;
  }
LAB_00408a68:
  FUN_00410b4e(uVar6,uVar7);
  return;
}



/* Function: FUN_00408a76 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00408a76(undefined4 *param_1)

{
  int iVar1;
  undefined *local_18;
  undefined2 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x408a82;
  iVar1 = 0;
  if (DAT_00413568 == 0) {
    local_14 = 1;
    local_18 = &DAT_0041356c;
    FUN_00408567(&local_18);
    local_8 = 0;
    if (DAT_00413568 == 0) {
      _DAT_00413578 = 0;
      _DAT_0041357c = 0x200;
      _DAT_00413580 = 0;
      iVar1 = FUN_004087af();
      if (iVar1 < 0) {
        FUN_0040858f(&local_18);
        return iVar1;
      }
      _DAT_004131b0 = &DAT_00413578;
      DAT_004131b4 = 1;
      LOCK();
      DAT_00413568 = 1;
      UNLOCK();
    }
    FUN_0040858f(&local_18);
  }
  *param_1 = &DAT_00413578;
  return iVar1;
}



/* Function: FUN_00408b1f */

void FUN_00408b1f(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  code *local_c;
  undefined4 *local_8;
  
  bVar2 = FUN_0040852a();
  if (bVar2) {
    local_8 = (undefined4 *)0x0;
    iVar3 = FUN_00408a76(&local_8);
    if (-1 < iVar3) {
      pcVar1 = *(code **)(*(int *)*local_8 + 0x20);
      (*(code *)PTR_guard_check_icall_00414398)((int *)*local_8,"CoEEShutDownCOM",&local_c);
      iVar3 = (*pcVar1)();
      if (-1 < iVar3) {
        (*(code *)PTR_guard_check_icall_00414398)();
        (*local_c)();
      }
    }
  }
  else {
    CoEEShutDownCOM();
  }
  return;
}



/* Function: FUN_00408b83 */

undefined4 FUN_00408b83(void)

{
  return 0x81030002;
}



/* Function: FUN_00408b8f */

undefined4 FUN_00408b8f(void)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004114a1;
  local_10 = ExceptionList;
  uVar2 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  DAT_00413a6c = 0;
  piVar3 = (int *)PTR_DAT_00413054;
  for (piVar4 = (int *)PTR_DAT_00413050; piVar4 < piVar3; piVar4 = piVar4 + 1) {
    if (*piVar4 != 0) {
      pcVar1 = *(code **)(*piVar4 + 0x20);
      (*(code *)PTR_guard_check_icall_00414398)(1,uVar2);
      (*pcVar1)();
      piVar3 = (int *)PTR_DAT_00413054;
    }
  }
  ExceptionList = local_10;
  return 0;
}



/* Function: FUN_00408c08 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_00408c08(LPCRITICAL_SECTION param_1)

{
  undefined4 local_14;
  
  InitializeCriticalSection(param_1);
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_00408c5f */

void __fastcall FUN_00408c5f(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *_Memory;
  void **ppvVar3;
  uint uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004114c4;
  local_10 = ExceptionList;
  uVar4 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  piVar5 = (int *)(param_1 + 4);
  if (*piVar5 != 0) {
    ppvVar3 = &local_10;
    if (*(int *)(param_1 + 0xc) != 0) {
      if (param_1 == 0) {
        piVar5 = (int *)0x0;
      }
      if (piVar5 == (int *)0x0) {
        ExceptionList = &local_10;
        FUN_00409521(0xc0000005);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Memory = (undefined4 *)piVar5[2];
      while (ExceptionList = ppvVar3, _Memory != (undefined4 *)0x0) {
        pcVar1 = (code *)*_Memory;
        (*(code *)PTR_guard_check_icall_00414398)(_Memory[1],uVar4);
        (*pcVar1)();
        puVar2 = (undefined4 *)_Memory[2];
        free(_Memory);
        ppvVar3 = (void **)ExceptionList;
        _Memory = puVar2;
      }
      piVar5[2] = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      ppvVar3 = (void **)ExceptionList;
    }
    ExceptionList = ppvVar3;
    piVar5 = *(int **)(param_1 + 0x28);
    if (piVar5 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar5 + 8);
      (*(code *)PTR_guard_check_icall_00414398)(piVar5);
      (*pcVar1)();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408d30 */

undefined4 * __thiscall FUN_00408d30(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401688;
  FUN_00408c5f((int)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00408d60 */

int __fastcall FUN_00408d60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* Function: FUN_00408d70 */

int __fastcall FUN_00408d70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2 + -1;
}



/* Function: FUN_00408d80 */

undefined4 __fastcall FUN_00408d80(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Function: FUN_00408d90 */

HRESULT __thiscall FUN_00408d90(void *this,undefined4 *param_1)

{
  LPVOID *ppv;
  code *pcVar1;
  uint uVar2;
  HRESULT HVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004111a0;
  local_10 = ExceptionList;
  uVar2 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == (undefined4 *)0x0) {
    HVar3 = -0x7fffbffd;
  }
  else {
    HVar3 = 0;
    ppv = (LPVOID *)((int)this + 0x28);
    if ((*ppv != (LPVOID)0x0) ||
       (HVar3 = CoCreateInstance((IID *)&DAT_004028e8,(LPUNKNOWN)0x0,1,(IID *)&DAT_004033a0,ppv),
       -1 < HVar3)) {
      *param_1 = *ppv;
                    /* WARNING: Load size is inaccurate */
      pcVar1 = *(code **)(**ppv + 4);
      (*(code *)PTR_guard_check_icall_00414398)(*ppv,uVar2);
      (*pcVar1)();
    }
  }
  ExceptionList = local_10;
  return HVar3;
}



/* Function: FUN_00408e20 */

void FUN_00408e20(int *param_1)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041138d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar1 = *(code **)(*param_1 + 0xc);
  (*(code *)PTR_guard_check_icall_00414398)
            (param_1,L"APPID",&DAT_00402be8,DAT_00413140 ^ (uint)&stack0xfffffffc);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408e80 */

undefined4 FUN_00408e80(void)

{
  return 0x80004005;
}



/* Function: FUN_00408e8e */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00408e8e(int *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  short sVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  HMODULE pHVar7;
  undefined4 uVar8;
  short *psVar9;
  undefined4 extraout_EDX;
  undefined **local_a58;
  undefined4 local_a54;
  undefined4 local_a50;
  undefined4 local_a4c;
  short local_a44 [520];
  short local_634;
  undefined2 local_632 [523];
  WCHAR local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004114e7;
  local_10 = ExceptionList;
  uVar4 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a58 = &PTR_FUN_00401670;
  local_a54 = 0;
  local_a50 = 0;
  local_a4c = 0;
  local_14 = uVar4;
  if (param_4 != (undefined4 *)0x0) {
    for (; (short *)*param_4 != (short *)0x0; param_4 = param_4 + 2) {
      FUN_00409450(&local_a58,(short *)*param_4,param_4[1]);
    }
  }
  pcVar2 = *(code **)(*param_1 + 0x14);
  (*(code *)PTR_guard_check_icall_00414398)(&local_a58,uVar4);
  iVar5 = (*pcVar2)();
  puVar3 = PTR_IMAGE_DOS_HEADER_00413010;
  if (-1 < iVar5) {
    DVar6 = GetModuleFileNameW((HMODULE)PTR_IMAGE_DOS_HEADER_00413010,local_21c,0x104);
    if (DVar6 == 0) {
      FUN_004094f4();
    }
    else if (DVar6 != 0x104) {
      FUN_004091c2(local_a44,local_21c);
      if ((puVar3 == (undefined *)0x0) ||
         (pHVar7 = GetModuleHandleW((LPCWSTR)0x0), (HMODULE)puVar3 == pHVar7)) {
        local_634 = 0x22;
        uVar8 = FUN_0040920b(local_632,local_a44);
        if ((char)uVar8 == '\0') goto LAB_00409023;
        psVar9 = &local_634;
        do {
          sVar1 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar1 != 0);
        iVar5 = (int)psVar9 - (int)local_632 >> 1;
        local_632[iVar5 + -1] = 0x22;
        uVar4 = iVar5 * 2 + 2;
        if (0x417 < uVar4) {
          FUN_00410981(uVar4,local_632);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_632[iVar5] = 0;
        psVar9 = &local_634;
      }
      else {
        psVar9 = local_a44;
      }
      iVar5 = FUN_00409450(&local_a58,L"Module",(int)psVar9);
      if ((-1 < iVar5) &&
         (iVar5 = FUN_00409450(&local_a58,L"Module_Raw",(int)local_a44), -1 < iVar5)) {
        FUN_0040a9c2(local_21c,(LPCWSTR)(param_2 & 0xffff),L"REGISTRY");
      }
    }
  }
LAB_00409023:
  FUN_0040919a(&local_a58);
  ExceptionList = local_10;
  FUN_00410680(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00409090 */

void FUN_00409090(int *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00408e8e(param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_004090b0 */

undefined4 FUN_004090b0(void)

{
  return 1;
}



/* Function: FUN_004090c0 */

undefined4 * __thiscall FUN_004090c0(void *this,byte param_1)

{
  FUN_0040919a((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004090e7 */

void __fastcall FUN_004090e7(int *param_1)

{
  if (*param_1 != 0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  return;
}



/* Function: FUN_0040911d */

undefined4 __fastcall FUN_0040911d(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = param_1[2];
  if (0 < iVar2) {
    do {
      if ((iVar4 < 0) || (iVar2 <= iVar4)) {
LAB_00409164:
        FUN_00409521(0xc000008c);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      free(*(void **)(*param_1 + iVar4 * 4));
      if (param_1[2] <= iVar4) goto LAB_00409164;
      free(*(void **)(param_1[1] + iVar4 * 4));
      iVar2 = param_1[2];
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_004090e7(param_1);
  return 0;
}



/* Function: FUN_00409180 */

void FUN_00409180(int param_1)

{
  FUN_0040911d((int *)(param_1 + 4));
  return;
}



/* Function: FUN_0040919a */

void __fastcall FUN_0040919a(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_00401670;
  FUN_0040911d(piVar1);
  FUN_0040911d(piVar1);
  FUN_004090e7(piVar1);
  return;
}



/* Function: FUN_004091c2 */

void __thiscall FUN_004091c2(void *this,short *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*param_1 == 0) break;
    *(short *)((int)this + uVar1 * 2) = *param_1;
    if ((*param_1 == 0x27) && (uVar1 < 0x206)) {
      uVar1 = uVar1 + 1;
      *(undefined2 *)((int)this + uVar1 * 2) = 0x27;
    }
    param_1 = param_1 + 1;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x207);
  *(undefined2 *)((int)this + uVar1 * 2) = 0;
  return;
}



/* Function: FUN_0040920b */

undefined4 __thiscall FUN_0040920b(void *this,short *param_1)

{
  int iVar1;
  errno_t eVar2;
  
  iVar1 = FUN_00409246(param_1);
  eVar2 = memcpy_s(this,0x414,param_1,iVar1 * 2 + 2);
  return CONCAT31((int3)((uint)-eVar2 >> 8),'\x01' - (eVar2 != 0));
}



/* Function: FUN_00409246 */

int __fastcall FUN_00409246(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  if (param_1 == (short *)0x0) {
    return 0;
  }
  psVar1 = param_1 + 1;
  do {
    sVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (sVar2 != 0);
  return (int)param_1 - (int)psVar1 >> 1;
}



/* Function: FUN_00409268 */

void __fastcall FUN_00409268(undefined4 *param_1)

{
  free((void *)*param_1);
  *param_1 = 0;
  return;
}



/* Function: FUN_00409280 */

undefined4 __thiscall FUN_00409280(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*(code *)PTR_FUN_004014e4)(*this,*(int *)((int)this + 8) + 1,4);
  if (iVar1 != 0) {
    *(int *)this = iVar1;
    iVar1 = (*(code *)PTR_FUN_004014e4)
                      (*(undefined4 *)((int)this + 4),*(int *)((int)this + 8) + 1,4);
    if (iVar1 != 0) {
                    /* WARNING: Load size is inaccurate */
      iVar3 = *(int *)((int)this + 8) * 4;
      *(int *)((int)this + 4) = iVar1;
      puVar2 = (undefined4 *)(*this + iVar3);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *param_1;
      }
      puVar2 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *param_2;
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_004092f0 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004092f0(short *param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar1 = param_1 + 1;
    do {
      sVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (sVar2 != 0);
    lVar3 = (ulonglong)(((int)param_1 - (int)psVar1 >> 1) * 2 + 2) * 2;
    FUN_004100b1(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
    uVar4 = FUN_00409364();
    return uVar4;
  }
  return 0;
}



/* Function: Catch_All@00409356 */

undefined * Catch_All_00409356(void)

{
  return &DAT_0040935c;
}



/* Function: FUN_00409364 */

void FUN_00409364(void)

{
  uint uVar1;
  longlong lVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = in_EAX;
  *(uint *)(unaff_EBP + -4) = unaff_ESI;
  *(undefined4 *)(unaff_EBP + -0x20) = in_EAX;
  iVar3 = FUN_00409246(*(short **)(unaff_EBP + 0xc));
  *(undefined4 *)(unaff_EBP + -0x18) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar1 = iVar3 * 2 + 2;
  *(uint *)(unaff_EBP + -0x28) = uVar1;
  lVar2 = (ulonglong)uVar1 * (ulonglong)unaff_ESI;
  uVar4 = FUN_004100b1(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  FUN_004093c2();
  return;
}



/* Function: Catch_All@004093aa */

undefined * Catch_All_004093aa(void)

{
  return &DAT_004093b0;
}



/* Function: FUN_004093c2 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_004093c2(void)

{
  void *in_EAX;
  errno_t eVar1;
  int iVar2;
  void *unaff_EBX;
  uint uVar3;
  int unaff_EBP;
  void *unaff_ESI;
  void *unaff_EDI;
  
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(void **)(unaff_EBP + -0x1c) = unaff_ESI;
  if ((in_EAX != (void *)0x0) && (unaff_ESI != (void *)0x0)) {
    eVar1 = memcpy_s(in_EAX,*(rsize_t *)(unaff_EBP + -0x24),*(void **)(unaff_EBP + 8),
                     *(rsize_t *)(unaff_EBP + -0x24));
    FUN_00409d6a(eVar1);
    eVar1 = memcpy_s(unaff_ESI,*(rsize_t *)(unaff_EBP + -0x28),*(void **)(unaff_EBP + 0xc),
                     *(rsize_t *)(unaff_EBP + -0x28));
    FUN_00409d6a(eVar1);
    iVar2 = FUN_00409280(*(void **)(unaff_EBP + -0x2c),(undefined4 *)(unaff_EBP + -0x14),
                         (undefined4 *)(unaff_EBP + -0x18));
    if (iVar2 != 0) {
      uVar3 = *(uint *)(unaff_EBP + -0x30);
      unaff_ESI = unaff_EBX;
      unaff_EDI = unaff_EBX;
      goto LAB_00409425;
    }
  }
  uVar3 = 0x8007000e;
LAB_00409425:
  free(unaff_ESI);
  free(unaff_EDI);
  return ~uVar3 >> 0x1f;
}



/* Function: FUN_00409450 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_00409450(undefined4 param_1,short *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == (short *)0x0) || (param_3 == 0)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_004092f0(param_2,param_3);
    iVar1 = (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}



/* Function: FUN_004094a4 */

void __fastcall FUN_004094a4(undefined4 *param_1)

{
  free((void *)*param_1);
  return;
}



/* Function: FUN_004094b4 */

void __fastcall FUN_004094b4(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 == param_1 + 1) {
    return;
  }
  free((void *)*param_1);
  return;
}



/* Function: FUN_004094c6 */

void __thiscall FUN_004094c6(void *this,size_t param_1)

{
  code *pcVar1;
  void *pvVar2;
  
  pvVar2 = malloc(param_1);
  if (pvVar2 != (void *)0x0) {
    *(void **)this = pvVar2;
    return;
  }
  FUN_00406f61(0x8007000e);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004094f4 */

DWORD FUN_004094f4(void)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_00409511 */

void __fastcall FUN_00409511(int param_1)

{
  CoTaskMemFree(*(LPVOID *)(param_1 + 8));
  return;
}



/* Function: FUN_00409521 */

void __fastcall FUN_00409521(DWORD param_1)

{
  RaiseException(param_1,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_00409535 */

undefined4 __thiscall FUN_00409535(void *this,LPCWSTR param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      iVar2 = lstrcmpiW(*(LPCWSTR *)(*(int *)((int)this + 4) + iVar4 * 4),param_1);
      if (iVar2 == 0) {
        if (iVar4 == -1) {
          return 0;
        }
        if ((-1 < iVar4) && (iVar4 < *(int *)((int)this + 0xc))) {
          return *(undefined4 *)(*(int *)((int)this + 8) + iVar4 * 4);
        }
        FUN_00409521(0xc000008c);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0xc));
  }
  return 0;
}



/* Function: FUN_00409591 */

undefined4 __thiscall FUN_00409591(void *this,void *param_1,int param_2)

{
  LPVOID pvVar1;
  errno_t eVar2;
  int iVar3;
  uint uVar4;
  
                    /* WARNING: Load size is inaccurate */
  iVar3 = param_2 + 1 + *this;
                    /* WARNING: Load size is inaccurate */
  if ((*this < iVar3) && (param_2 < iVar3)) {
    uVar4 = *(uint *)((int)this + 4);
    if ((int)uVar4 <= iVar3) {
      do {
        if (0x3fffffff < (int)uVar4) {
          return 0;
        }
        uVar4 = uVar4 * 2;
      } while ((int)uVar4 <= iVar3);
      if ((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) {
        return 0;
      }
      pvVar1 = CoTaskMemRealloc(*(LPVOID *)((int)this + 8),(SIZE_T)((ulonglong)uVar4 * 2));
      if (pvVar1 == (LPVOID)0x0) {
        return 0;
      }
      *(LPVOID *)((int)this + 8) = pvVar1;
      *(uint *)((int)this + 4) = uVar4;
    }
                    /* WARNING: Load size is inaccurate */
    iVar3 = *this;
    if (((-1 < iVar3) && (iVar3 < (int)uVar4)) && ((int)(uVar4 - iVar3) <= (int)uVar4)) {
      eVar2 = memcpy_s((void *)(*(int *)((int)this + 8) + iVar3 * 2),(uVar4 - iVar3) * 2,param_1,
                       param_2 * 2);
      FUN_00409d6a(eVar2);
                    /* WARNING: Load size is inaccurate */
      *(int *)this = *this + param_2;
                    /* WARNING: Load size is inaccurate */
      *(undefined2 *)(*(int *)((int)this + 8) + *this * 2) = 0;
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00409643 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00409643(int *param_1,undefined4 param_2,LPWSTR param_3,undefined4 *param_4)

{
  short sVar1;
  undefined2 *puVar2;
  WCHAR WVar3;
  LPCWSTR pWVar4;
  errno_t eVar5;
  short *psVar6;
  LPCWSTR lpsz;
  int iVar7;
  LPWSTR pWVar8;
  rsize_t _MaxCount;
  short *psVar9;
  int *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_60;
  uint local_5c;
  undefined2 *local_58;
  wchar_t local_54 [38];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x40964f;
  if ((param_3 != (LPWSTR)0x0) && (param_4 != (undefined4 *)0x0)) {
    *param_4 = 0;
    pWVar8 = param_3;
    do {
      WVar3 = *pWVar8;
      pWVar8 = pWVar8 + 1;
    } while (WVar3 != L'\0');
    local_60 = 0;
    local_5c = ((int)pWVar8 - (int)(param_3 + 1) >> 1) * 2;
    if ((int)local_5c < 100) {
      local_5c = 1000;
    }
    if ((int)((ulonglong)local_5c * 2 >> 0x20) == 0) {
      local_58 = (undefined2 *)CoTaskMemAlloc((SIZE_T)((ulonglong)local_5c * 2));
      if (local_58 != (undefined2 *)0x0) {
        *local_58 = 0;
      }
    }
    else {
      local_58 = (undefined2 *)0x0;
    }
    local_8 = 0;
    if (local_58 != (undefined2 *)0x0) {
      *param_1 = (int)param_3;
      WVar3 = *param_3;
      while (puVar2 = local_58, WVar3 != L'\0') {
        if (WVar3 == L'%') {
          param_3 = CharNextW(param_3);
          *param_1 = (int)param_3;
          if (*param_3 == L'%') goto LAB_00409799;
          pWVar4 = FUN_004097fb(param_3,L'%');
          if ((pWVar4 == (LPCWSTR)0x0) ||
             (_MaxCount = (int)pWVar4 - *param_1 >> 1, 0x1f < (int)_MaxCount)) goto LAB_004097db;
          eVar5 = wcsncpy_s(local_54,0x20,(wchar_t *)*param_1,_MaxCount);
          FUN_00409d6a(eVar5);
          psVar6 = (short *)FUN_00409535((void *)param_1[1],local_54);
          if (psVar6 == (short *)0x0) goto LAB_004097db;
          local_8._0_1_ = 1;
          psVar9 = psVar6;
          do {
            sVar1 = *psVar9;
            psVar9 = psVar9 + 1;
          } while (sVar1 != 0);
          iVar7 = FUN_00409591(&local_60,psVar6,(int)psVar9 - (int)(psVar6 + 1) >> 1);
          local_8 = (uint)local_8._1_3_ << 8;
          if (iVar7 == 0) goto LAB_004097db;
          lpsz = (LPCWSTR)*param_1;
          while (lpsz != pWVar4) {
            lpsz = CharNextW(lpsz);
            *param_1 = (int)lpsz;
          }
        }
        else {
LAB_00409799:
          iVar7 = FUN_00409591(&local_60,param_3,1);
          if (iVar7 == 0) goto LAB_004097db;
        }
        param_3 = CharNextW((LPCWSTR)*param_1);
        *param_1 = (int)param_3;
        WVar3 = *param_3;
      }
      local_58 = (undefined2 *)0x0;
      *param_4 = puVar2;
    }
LAB_004097db:
    CoTaskMemFree(local_58);
    param_1 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_00410b4e(param_1,param_2);
  return;
}



/* Function: FUN_004097fb */

LPCWSTR __fastcall FUN_004097fb(LPCWSTR param_1,WCHAR param_2)

{
  WCHAR WVar1;
  LPCWSTR pWVar2;
  
  if (param_1 == (LPCWSTR)0x0) {
    pWVar2 = (LPCWSTR)0x0;
  }
  else {
    WVar1 = *param_1;
    while ((pWVar2 = (LPCWSTR)0x0, WVar1 != L'\0' && (pWVar2 = param_1, WVar1 != param_2))) {
      param_1 = CharNextW(param_1);
      WVar1 = *param_1;
    }
  }
  return pWVar2;
}



/* Function: FUN_0040983d */

void __thiscall FUN_0040983d(void *this,LPCWSTR param_1,short *param_2)

{
  short sVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  DWORD cbData;
  short *psVar5;
  void *pvVar6;
  
  if (param_2 != (short *)0x0) {
    cbData = 0;
    psVar5 = param_2;
    do {
      psVar3 = psVar5;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      iVar4 = ((int)psVar3 - (int)(psVar5 + 1) >> 1) + 1;
      psVar5 = psVar5 + iVar4;
      cbData = cbData + iVar4 * 2;
    } while (iVar4 != 1);
                    /* WARNING: Load size is inaccurate */
    RegSetValueExW(*this,param_1,0,7,(BYTE *)param_2,cbData);
    return;
  }
  pvVar6 = this;
  FUN_00406f61(0x80004005);
  pcVar2 = (code *)swi(3);
  (*pcVar2)(this,pvVar6);
  return;
}



/* Function: FUN_004098a8 */

uint __fastcall FUN_004098a8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 < 0x62) {
    if (uVar2 != 0x61) {
      if (uVar2 < 0x39) {
        if (uVar2 != 0x38) {
          uVar1 = uVar2 - 0x30;
          switch(uVar2) {
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
            break;
          default:
            goto switchD_004098ca_default;
          }
        }
      }
      else if (uVar2 != 0x39) {
        if (((uVar2 == 0x41) || (uVar2 == 0x42)) ||
           ((uVar2 == 0x43 ||
            (((uVar2 == 0x44 || (uVar2 == 0x45)) || (uVar1 = uVar2 - 0x46, uVar1 == 0)))))) {
          return uVar2 - 0x37;
        }
switchD_004098ca_default:
        return uVar1 & 0xffffff00;
      }
      return uVar2 - 0x30;
    }
  }
  else if ((((uVar2 != 0x62) && (uVar2 != 99)) && (uVar2 != 100)) &&
          ((uVar2 != 0x65 && (uVar1 = uVar2 - 0x66, uVar1 != 0)))) goto switchD_004098ca_default;
  return uVar2 - 0x57;
}



/* Function: FUN_0040992e */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0040992e(void *this,undefined4 *param_1,LPCWSTR param_2,undefined2 *param_3)

{
  short sVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  BYTE *pBVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  DWORD dwType;
  void **lpData;
  DWORD cbData;
  uint uStack_2250;
  void *local_2234;
  undefined4 *local_2230;
  LPCWSTR local_222c;
  void *local_2228;
  uint local_2224;
  undefined1 *local_2220;
  undefined1 local_221c [256];
  BYTE *local_211c;
  BYTE local_2118 [256];
  undefined4 local_2018;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004115dc;
  local_10 = ExceptionList;
  uStack_2250 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2250;
  ExceptionList = &local_10;
  local_2230 = param_1;
  local_222c = param_2;
  local_2228 = this;
  local_18 = uStack_2250;
  iVar6 = FUN_0040a09e(this,(undefined2 *)&local_2018);
  iVar7 = extraout_EDX;
  if (-1 < iVar6) {
    uVar9 = 0;
    while (iVar7 = lstrcmpiW((LPCWSTR)&local_2018,(LPCWSTR)(&PTR_DAT_00401860)[uVar9 * 2]),
          iVar7 != 0) {
      uVar9 = uVar9 + 1;
      iVar7 = extraout_EDX_00;
      if (3 < uVar9) goto LAB_00409d3d;
    }
    sVar1 = (&DAT_00401864)[uVar9 * 4];
    FUN_0040a842((undefined4 *)this);
    iVar6 = FUN_0040a09e(this,(undefined2 *)&local_2018);
    iVar7 = extraout_EDX_01;
    if (iVar6 < 0) goto LAB_00409d3d;
    if (sVar1 == 8) {
      psVar8 = (short *)&local_2018;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      cbData = ((int)psVar8 - ((int)&local_2018 + 2) >> 1) * 2 + 2;
      lpData = (void **)&local_2018;
      dwType = 1;
LAB_00409cff:
      uVar9 = RegSetValueExW((HKEY)*local_2230,local_222c,0,dwType,(BYTE *)lpData,cbData);
    }
    else {
      if (sVar1 != 0x11) {
        if (sVar1 != 0x13) {
          if (sVar1 == 0x4008) {
            psVar8 = (short *)&local_2018;
            do {
              sVar1 = *psVar8;
              psVar8 = psVar8 + 1;
            } while (sVar1 != 0);
            local_2220 = (undefined1 *)0x0;
            lVar3 = (ulonglong)(((int)psVar8 - ((int)&local_2018 + 2) >> 1) + 2) * 2;
            uVar9 = (uint)lVar3;
            local_8 = 1;
            if ((int)((ulonglong)lVar3 >> 0x20) == 0) {
              if (uVar9 < 0x101) {
                local_2220 = local_221c;
              }
              else {
                FUN_004094c6(&local_2220,uVar9);
              }
              local_8 = 0;
              FUN_00409aa4();
              return;
            }
            FUN_00406f61(0x80070057);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_00409d23;
        }
        local_2234 = (void *)0x0;
        uVar11 = Ordinal_277(&local_2018,0,0,&local_2234);
        iVar7 = (int)((ulonglong)uVar11 >> 0x20);
        if (-1 < (int)uVar11) {
          local_2228 = local_2234;
          lpData = &local_2228;
          cbData = 4;
          dwType = 4;
          goto LAB_00409cff;
        }
        goto LAB_00409d3d;
      }
      psVar8 = (short *)&local_2018;
      iVar7 = (int)&local_2018 + 2;
      do {
        sVar1 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar1 != 0);
      local_2224 = (int)psVar8 - iVar7 >> 1;
      if ((local_2224 & 1) != 0) goto LAB_00409d3d;
      local_211c = (BYTE *)0x0;
      local_2234 = (void *)((int)(local_2224 - ((int)psVar8 - iVar7 >> 0x1f)) >> 1);
      local_8 = 4;
      if (local_2234 < (void *)0x101) {
        local_211c = local_2118;
      }
      else {
        FUN_004094c6(&local_211c,(size_t)local_2234);
      }
      uVar9 = local_2224;
      if (local_211c == (BYTE *)0x0) {
        FUN_004094a4(&local_211c);
        iVar7 = extraout_EDX_02;
        goto LAB_00409d3d;
      }
      memset(local_211c,0,(size_t)local_2234);
      uVar4 = local_2224;
      local_2228 = (void *)0x0;
      iVar7 = extraout_ECX;
      if (0 < (int)uVar9) {
        do {
          pBVar5 = local_211c;
          uVar10 = (uint)local_2228 >> 1;
          uVar9 = FUN_004098a8(CONCAT22((short)((uint)iVar7 >> 0x10),
                                        *(undefined2 *)((int)&local_2018 + (int)local_2228 * 2)));
          iVar7 = (extraout_EDX_03 & 1) * -4 + 4;
          pBVar5[uVar10] = pBVar5[uVar10] | (char)uVar9 << ((byte)iVar7 & 0x1f);
          local_2228 = (void *)((int)local_2228 + 1);
        } while ((int)local_2228 < (int)uVar4);
      }
      uVar9 = RegSetValueExW((HKEY)*local_2230,local_222c,0,3,local_211c,(DWORD)local_2234);
      if (local_211c != local_2118) {
        FUN_004094a4(&local_211c);
      }
    }
    if (uVar9 != 0) {
      FUN_0040a08a(uVar9);
      iVar7 = extraout_EDX_04;
      goto LAB_00409d3d;
    }
LAB_00409d23:
    FUN_0040a09e(this,param_3);
    iVar7 = extraout_EDX_05;
  }
LAB_00409d3d:
  ExceptionList = local_10;
  FUN_00410680(local_18 ^ (uint)&stack0xfffffffc,iVar7);
  return;
}



/* Function: Catch_All@00409a84 */

undefined * Catch_All_00409a84(void)

{
  return &DAT_00409a8a;
}



/* Function: FUN_00409aa4 */

void FUN_00409aa4(void)

{
  short sVar1;
  short *psVar2;
  void *this;
  LPWSTR lpsz;
  LPCWSTR lpsz_00;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  short unaff_BX;
  uint unaff_EBP;
  short *unaff_ESI;
  int iVar5;
  int unaff_EDI;
  undefined4 uStack0000000c;
  
  if (unaff_ESI == (short *)0x0) {
    uVar3 = 0xe;
    iVar5 = 0;
  }
  else {
    lpsz_00 = (LPCWSTR)(unaff_EBP - 0x2014);
    sVar1 = *(short *)(unaff_EBP - 0x2014);
    while (*(LPCWSTR *)(unaff_EBP - 0x2220) = lpsz_00, sVar1 != 0) {
      lpsz = CharNextW(lpsz_00);
      psVar2 = *(short **)(unaff_EBP - 0x2220);
      sVar1 = *psVar2;
      if ((sVar1 == 0x5c) && (*lpsz == L'0')) {
        *unaff_ESI = 0;
        lpsz_00 = CharNextW(lpsz);
      }
      else {
        *unaff_ESI = sVar1;
        lpsz_00 = (LPCWSTR)((int)psVar2 + unaff_EDI);
      }
      unaff_ESI = unaff_ESI + 1;
      sVar1 = *lpsz_00 - unaff_BX;
    }
    this = *(void **)(unaff_EBP - 0x222c);
    unaff_ESI[0] = 0;
    unaff_ESI[1] = 0;
    uVar3 = FUN_0040983d(this,*(LPCWSTR *)(unaff_EBP - 0x2228),*(short **)(unaff_EBP - 0x221c));
    iVar5 = *(int *)(unaff_EBP - 0x221c);
  }
  if (iVar5 != unaff_EBP - 0x2218) {
    FUN_004094a4((undefined4 *)(unaff_EBP - 0x221c));
  }
  if (uVar3 == 0) {
    FUN_0040a09e(*(void **)(unaff_EBP - 0x2234),*(undefined2 **)(unaff_EBP - 0x223c));
    uVar4 = extraout_EDX_00;
  }
  else {
    FUN_0040a08a(uVar3);
    uVar4 = extraout_EDX;
  }
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x409d55;
  FUN_00410680(*(uint *)(unaff_EBP - 0x14) ^ unaff_EBP,uVar4);
  return;
}



/* Function: Catch_All@00409be7 */

undefined * Catch_All_00409be7(void)

{
  return &DAT_00409bed;
}



/* Function: FUN_00409d6a */

undefined4 __fastcall FUN_00409d6a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 0xc) {
    uVar1 = 0x8007000e;
  }
  else if ((param_1 == 0x16) || (param_1 == 0x22)) {
    uVar1 = 0x80070057;
  }
  else {
    if (param_1 == 0x50) {
      return 0x50;
    }
    uVar1 = 0x80004005;
  }
  uVar1 = FUN_00406f61(uVar1);
  return uVar1;
}



/* Function: FUN_00409da3 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00409da3(undefined4 *param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined2 local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  if ((*param_3 == 0x3d) &&
     (iVar1 = FUN_0040a09e(param_1,param_3), param_2 = extraout_EDX, -1 < iVar1)) {
    FUN_0040a842(param_1);
    iVar1 = FUN_0040a09e(param_1,local_2008);
    param_2 = extraout_EDX_00;
    if (-1 < iVar1) {
      FUN_0040a09e(param_1,param_3);
      param_2 = extraout_EDX_01;
    }
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00409e17 */

undefined4 FUN_00409e17(LPCWSTR param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_u_AppID_00401880;
  do {
    iVar1 = lstrcmpiW(param_1,(LPCWSTR)*ppuVar2);
    if (iVar1 == 0) {
      return 0;
    }
    ppuVar2 = ppuVar2 + 1;
  } while ((int)ppuVar2 < 0x4018b0);
  return 1;
}



/* Function: FUN_00409e4e */

LSTATUS __thiscall FUN_00409e4e(void *this,HKEY param_1,LPCWSTR param_2,REGSAM param_3)

{
  LSTATUS LVar1;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyExW(param_1,param_2,0,param_3,&local_8);
  if (LVar1 == 0) {
                    /* WARNING: Load size is inaccurate */
    if (*this != 0) {
                    /* WARNING: Load size is inaccurate */
      LVar1 = RegCloseKey(*this);
    }
    *(HKEY *)this = local_8;
  }
  return LVar1;
}



/* Function: FUN_00409e96 */

void __thiscall FUN_00409e96(void *this,LPCWSTR param_1)

{
  LSTATUS LVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX_01;
  undefined8 uVar3;
  undefined1 auStack_22c [4];
  HKEY local_228;
  undefined4 local_224;
  undefined4 local_220;
  DWORD local_21c;
  _FILETIME local_218;
  WCHAR local_210 [258];
  uint local_c;
  
  local_c = DAT_00413140 ^ (uint)auStack_22c;
  local_228 = (HKEY)0x0;
  local_224 = 0;
                    /* WARNING: Load size is inaccurate */
  local_220 = 0;
  LVar1 = FUN_00409e4e(&local_228,*this,param_1,0x2001f);
  uVar3 = CONCAT44(extraout_EDX,LVar1);
  do {
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
LAB_00409f36:
      if (local_228 != (HKEY)0x0) {
        RegCloseKey(local_228);
        uVar2 = extraout_EDX_01;
      }
      FUN_00410680(local_c ^ (uint)auStack_22c,uVar2);
      return;
    }
    local_21c = 0x100;
    LVar1 = RegEnumKeyExW(local_228,0,local_210,&local_21c,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                          &local_218);
    if (LVar1 != 0) {
      if (local_228 != (HKEY)0x0) {
        RegCloseKey(local_228);
        local_228 = (HKEY)0x0;
      }
      FUN_00409fc0(this,param_1);
      uVar2 = extraout_EDX_00;
      goto LAB_00409f36;
    }
    uVar3 = FUN_00409e96(&local_228,local_210);
  } while( true );
}



/* Function: FUN_00409f66 */

bool FUN_00409f66(HKEY param_1)

{
  LSTATUS LVar1;
  DWORD local_8;
  
  local_8 = 0;
  LVar1 = RegQueryInfoKeyW(param_1,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_8,(LPDWORD)0x0,
                           (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                           (PFILETIME)0x0);
  return LVar1 == 0 && local_8 != 0;
}



/* Function: FUN_00409fa3 */

void __fastcall FUN_00409fa3(int *param_1)

{
  if (*param_1 != 0) {
    RegCloseKey((HKEY)*param_1);
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00409fc0 */

void __thiscall FUN_00409fc0(void *this,undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004111a0;
  local_10 = ExceptionList;
  uVar2 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)((int)this + 4) == 0) && (*(int *)((int)this + 8) == 0)) {
    pHVar3 = GetModuleHandleW(L"API-MS-Win-Core-LocalRegistry-L1-1-0.dll");
    if (pHVar3 == (HMODULE)0x0) {
      pHVar3 = LoadLibraryExW(L"advapi32.dll",(HANDLE)0x0,0);
      if (pHVar3 != (HMODULE)0x0) {
        pFVar4 = GetProcAddress(pHVar3,"RegDeleteKeyW");
        *(FARPROC *)((int)this + 8) = pFVar4;
      }
    }
    else {
      pFVar4 = GetProcAddress(pHVar3,"RegDeleteKeyExW");
      *(FARPROC *)((int)this + 4) = pFVar4;
    }
  }
  pcVar1 = *(code **)((int)this + 4);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = *(code **)((int)this + 8);
    if (pcVar1 == (code *)0x0) {
      GetLastError();
    }
    else {
                    /* WARNING: Load size is inaccurate */
      (*(code *)PTR_guard_check_icall_00414398)(*this,param_1,uVar2);
      (*pcVar1)();
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    (*(code *)PTR_guard_check_icall_00414398)(*this,param_1,0,0);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040a08a */

uint __fastcall FUN_0040a08a(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xffff | 0x80070000;
  if ((int)param_1 < 1) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Function: FUN_0040a09e */

undefined4 __thiscall FUN_0040a09e(void *this,undefined2 *param_1)

{
  WCHAR WVar1;
  LPCWSTR pWVar2;
  LPWSTR pWVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  FUN_0040a842((undefined4 *)this);
                    /* WARNING: Load size is inaccurate */
  pWVar2 = *this;
  WVar1 = *pWVar2;
  if (WVar1 != L'\0') {
    puVar6 = param_1;
    if (WVar1 == L'\'') {
      pWVar2 = CharNextW(pWVar2);
      *(LPCWSTR *)this = pWVar2;
      if (*pWVar2 == L'\0') {
LAB_0040a165:
                    /* WARNING: Load size is inaccurate */
        if ((**this != 0) && (puVar6 < param_1 + 0x1000)) {
          *puVar6 = 0;
                    /* WARNING: Load size is inaccurate */
          pWVar3 = CharNextW(*this);
          *(LPWSTR *)this = pWVar3;
          return 0;
        }
      }
      else {
        do {
          if ((*pWVar2 == L'\'') && (pWVar3 = CharNextW(pWVar2), *pWVar3 != L'\''))
          goto LAB_0040a165;
                    /* WARNING: Load size is inaccurate */
          pWVar2 = *this;
          if (*pWVar2 == L'\'') {
            pWVar2 = CharNextW(pWVar2);
            *(LPCWSTR *)this = pWVar2;
          }
          pWVar3 = CharNextW(pWVar2);
          *(LPWSTR *)this = pWVar3;
          iVar4 = (int)pWVar3 - (int)pWVar2 >> 1;
          if (param_1 + 0x1000 <= puVar6 + iVar4 + 1) {
            return 0x80020009;
          }
          if (0 < iVar4) {
            iVar5 = (int)pWVar2 - (int)puVar6;
            do {
              *puVar6 = *(undefined2 *)(iVar5 + (int)puVar6);
              puVar6 = puVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
                    /* WARNING: Load size is inaccurate */
          pWVar2 = *this;
        } while (*pWVar2 != L'\0');
      }
    }
    else {
      do {
        if ((((WVar1 == L'\t') || (WVar1 == L'\n')) || (WVar1 == L'\r')) || (WVar1 == L' ')) break;
        pWVar3 = CharNextW(pWVar2);
        *(LPWSTR *)this = pWVar3;
        iVar4 = (int)pWVar3 - (int)pWVar2 >> 1;
        if (param_1 + 0x1000 <= puVar6 + iVar4 + 1) {
          return 0x80020009;
        }
        if (0 < iVar4) {
          iVar5 = (int)pWVar2 - (int)puVar6;
          do {
            *puVar6 = *(undefined2 *)(iVar5 + (int)puVar6);
            puVar6 = puVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
                    /* WARNING: Load size is inaccurate */
        pWVar2 = *this;
        WVar1 = *pWVar2;
      } while (WVar1 != L'\0');
      if (puVar6 < param_1 + 0x1000) {
        *puVar6 = 0;
        return 0;
      }
    }
  }
  return 0x80020009;
}



/* Function: FUN_0040a1fe */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0040a1fe(void *this,LPCWSTR param_1,HKEY param_2,int param_3,int param_4)

{
  WCHAR WVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  HKEY pHVar6;
  LSTATUS LVar7;
  undefined4 uVar8;
  errno_t eVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  LPCWSTR extraout_EDX;
  LPCWSTR extraout_EDX_00;
  LPCWSTR extraout_EDX_01;
  LPCWSTR extraout_EDX_02;
  LPCWSTR extraout_EDX_03;
  LPCWSTR extraout_EDX_04;
  LPCWSTR extraout_EDX_05;
  LPCWSTR extraout_EDX_06;
  LPCWSTR extraout_EDX_07;
  LPCWSTR extraout_EDX_08;
  LPCWSTR extraout_EDX_09;
  LPCWSTR extraout_EDX_10;
  undefined4 extraout_EDX_11;
  LPCWSTR extraout_EDX_12;
  LPCWSTR extraout_EDX_13;
  LPCWSTR extraout_EDX_14;
  LPCWSTR extraout_EDX_15;
  LPCWSTR extraout_EDX_16;
  LPCWSTR extraout_EDX_17;
  LPCWSTR pWVar10;
  LPCWSTR extraout_EDX_18;
  LPCWSTR extraout_EDX_19;
  LPCWSTR extraout_EDX_20;
  HKEY hKey;
  undefined8 uVar11;
  DWORD local_2274;
  HKEY local_2270;
  undefined4 local_226c;
  undefined4 local_2268;
  HKEY local_2264;
  undefined4 local_2260;
  undefined4 local_225c;
  HKEY local_2258;
  undefined4 local_2254;
  undefined4 local_2250;
  int local_224c;
  undefined4 local_2248;
  HKEY local_2244;
  undefined4 local_2240;
  undefined4 local_223c;
  HKEY local_2238;
  undefined4 local_2234;
  undefined4 local_2230;
  uint local_222c;
  HKEY local_2228;
  HKEY local_2224;
  undefined4 *local_2220;
  WCHAR local_221c [4096];
  wchar_t local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00411627;
  local_10 = ExceptionList;
  local_14 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2228 = param_2;
  hKey = (HKEY)0x0;
  local_2248 = 0;
  local_2238 = (HKEY)0x0;
  local_2234 = 0;
  local_2230 = 0;
  local_8 = 0;
  uStack_7 = 0;
  local_2220 = (undefined4 *)this;
  iVar3 = FUN_0040a09e(this,param_1);
  pWVar10 = extraout_EDX;
  if (-1 < iVar3) {
LAB_0040a7e0:
    do {
      do {
        while( true ) {
          if (*param_1 == L'}') goto LAB_0040a813;
          local_2224 = (HKEY)0x1;
          uVar4 = lstrcmpiW(param_1,L"Delete");
          local_222c = uVar4;
          iVar3 = lstrcmpiW(param_1,L"ForceRemove");
          if ((iVar3 != 0) && (uVar4 != 0)) break;
          iVar3 = FUN_0040a09e(local_2220,param_1);
          pWVar10 = extraout_EDX_00;
          if (iVar3 < 0) goto LAB_0040a813;
          if (param_3 == 0) break;
          local_2258 = (HKEY)0x0;
          local_2254 = 0;
          local_2250 = 0;
          pWVar5 = FUN_004097fb(param_1,L'\\');
          pWVar10 = extraout_EDX_01;
          if (pWVar5 != (LPCWSTR)0x0) goto LAB_0040a813;
          iVar3 = FUN_00409e17(param_1);
          if (iVar3 != 0) {
            local_2258 = local_2228;
            FUN_00409e96(&local_2258,param_1);
            local_2258 = (HKEY)0x0;
          }
          if (local_222c != 0) break;
          iVar3 = FUN_0040a09e(local_2220,param_1);
          pWVar10 = extraout_EDX_02;
          if (iVar3 < 0) goto LAB_0040a813;
          uVar11 = FUN_00409da3(local_2220,extraout_EDX_02,param_1);
LAB_0040a5a8:
          pWVar10 = (LPCWSTR)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 < 0) goto LAB_0040a813;
LAB_0040a5b2:
          if (*param_1 == L'{') {
            pWVar10 = param_1 + 1;
            pWVar5 = param_1;
            do {
              WVar1 = *pWVar5;
              pWVar5 = pWVar5 + 1;
            } while (WVar1 != (WCHAR)local_2248);
            if ((int)pWVar5 - (int)pWVar10 >> 1 == 1) {
              uVar11 = FUN_0040a1fe(local_2220,param_1,hKey,param_3,0);
              pWVar10 = (LPCWSTR)((ulonglong)uVar11 >> 0x20);
              if ((int)uVar11 < 0) goto LAB_0040a813;
              uVar8 = FUN_0040a09e(local_2220,param_1);
              uVar11 = CONCAT44(extraout_EDX_11,uVar8);
LAB_0040a4aa:
              pWVar10 = (LPCWSTR)((ulonglong)uVar11 >> 0x20);
              if ((int)uVar11 < 0) goto LAB_0040a813;
            }
          }
        }
        pHVar6 = (HKEY)lstrcmpiW(param_1,L"NoRemove");
        if ((pHVar6 == (HKEY)0x0) &&
           (local_2224 = pHVar6, iVar3 = FUN_0040a09e(local_2220,param_1), pWVar10 = extraout_EDX_03
           , iVar3 < 0)) goto LAB_0040a813;
        iVar3 = lstrcmpiW(param_1,L"Val");
        if (iVar3 == 0) {
          iVar3 = FUN_0040a09e(local_2220,local_221c);
          pWVar10 = extraout_EDX_04;
          if (((iVar3 < 0) ||
              (iVar3 = FUN_0040a09e(local_2220,param_1), pWVar10 = extraout_EDX_05, iVar3 < 0)) ||
             (*param_1 != L'=')) goto LAB_0040a813;
          if (param_3 != 0) {
            local_2260 = 0;
            local_225c = 0;
            local_8 = 1;
            local_2264 = local_2228;
            uVar11 = FUN_0040992e(local_2220,&local_2264,local_221c,param_1);
            pWVar10 = (LPCWSTR)((ulonglong)uVar11 >> 0x20);
            local_2264 = (HKEY)0x0;
            if (-1 < (int)uVar11) {
              local_8 = 0;
              goto LAB_0040a5b2;
            }
            goto LAB_0040a813;
          }
          if ((param_4 == 0) && (local_2224 != (HKEY)0x0)) {
            local_2244 = (HKEY)0x0;
            local_2240 = 0;
            local_223c = 0;
            uVar4 = FUN_00409e4e(&local_2244,local_2228,(LPCWSTR)0x0,0x20006);
            pHVar6 = local_2244;
            if ((uVar4 != 0) ||
               ((uVar4 = RegDeleteValueW(local_2244,local_221c), uVar4 != 0 && (uVar4 != 2)))) {
              FUN_0040a08a(uVar4);
              pWVar10 = extraout_EDX_18;
              if (local_2244 != (HKEY)0x0) {
                RegCloseKey(local_2244);
                pWVar10 = extraout_EDX_19;
              }
              goto LAB_0040a813;
            }
            pWVar10 = extraout_EDX_06;
            if (pHVar6 != (HKEY)0x0) {
              RegCloseKey(pHVar6);
              local_2244 = (HKEY)0x0;
              pWVar10 = extraout_EDX_07;
            }
          }
          uVar11 = FUN_00409da3(local_2220,pWVar10,param_1);
          goto LAB_0040a4aa;
        }
        pWVar5 = FUN_004097fb(param_1,L'\\');
        pHVar6 = local_2228;
        pWVar10 = extraout_EDX_08;
        if (pWVar5 != (LPCWSTR)0x0) goto LAB_0040a813;
        if (param_3 != 0) {
          LVar7 = FUN_00409e4e(&local_2238,local_2228,param_1,0x2001f);
          if ((LVar7 != 0) && (LVar7 = FUN_00409e4e(&local_2238,pHVar6,param_1,0x20019), LVar7 != 0)
             ) {
            local_2224 = (HKEY)0x0;
            uVar4 = RegCreateKeyExW(pHVar6,param_1,0,(LPWSTR)0x0,0,0x2001f,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_2224,&local_2274);
            if (uVar4 == 0) {
              if (local_2238 != (HKEY)0x0) {
                uVar4 = RegCloseKey(local_2238);
              }
              local_2238 = local_2224;
            }
            hKey = local_2238;
            if (uVar4 != 0) goto LAB_0040a55a;
          }
          hKey = local_2238;
          iVar3 = FUN_0040a09e(local_2220,param_1);
          pWVar10 = extraout_EDX_10;
          if (-1 < iVar3) {
            if (*param_1 == L'=') {
              uVar11 = FUN_0040992e(local_2220,&local_2238,(LPCWSTR)0x0,param_1);
              hKey = local_2238;
              goto LAB_0040a5a8;
            }
            goto LAB_0040a5b2;
          }
          goto LAB_0040a813;
        }
        if (param_4 == 0) {
          local_222c = FUN_00409e4e(&local_2238,local_2228,param_1,0x20019);
          hKey = local_2238;
        }
        else {
          local_222c = 2;
        }
        local_224c = 1;
        if (local_222c == 0) {
          local_224c = param_4;
        }
        eVar9 = wcsncpy_s(local_21c,0x104,param_1,0xffffffff);
        FUN_00409d6a(eVar9);
        iVar3 = FUN_0040a09e(local_2220,param_1);
        pWVar10 = extraout_EDX_12;
        if (iVar3 < 0) goto LAB_0040a813;
        uVar11 = FUN_00409da3(local_2220,extraout_EDX_12,param_1);
        pWVar10 = (LPCWSTR)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 < 0) goto LAB_0040a813;
        if (*param_1 == L'{') {
          pWVar10 = param_1 + 1;
          pWVar5 = param_1;
          do {
            WVar1 = *pWVar5;
            pWVar5 = pWVar5 + 1;
          } while (WVar1 != (WCHAR)local_2248);
          if ((int)pWVar5 - (int)pWVar10 >> 1 == 1) {
            uVar11 = FUN_0040a1fe(local_2220,param_1,hKey,0,local_224c);
            pWVar10 = (LPCWSTR)((ulonglong)uVar11 >> 0x20);
            if ((((int)uVar11 < 0) && (local_224c == 0)) ||
               (iVar3 = FUN_0040a09e(local_2220,param_1), pWVar10 = extraout_EDX_13, iVar3 < 0))
            goto LAB_0040a813;
          }
        }
      } while (local_222c == 2);
      if (local_222c == 0) {
        if ((param_4 == 0) || (bVar2 = FUN_00409f66(hKey), CONCAT31(extraout_var,bVar2) == 0)) {
          bVar2 = FUN_00409f66(hKey);
          local_222c = CONCAT31(extraout_var_00,bVar2);
          pWVar10 = extraout_EDX_16;
          pHVar6 = hKey;
          if (hKey != (HKEY)0x0) {
            uVar4 = RegCloseKey(hKey);
            hKey = (HKEY)0x0;
            local_2238 = (HKEY)0x0;
            pWVar10 = extraout_EDX_17;
            pHVar6 = (HKEY)0x0;
            if (uVar4 != 0) break;
          }
          hKey = pHVar6;
          if ((local_2224 != (HKEY)0x0) && (local_222c == 0)) {
            local_2270 = local_2228;
            local_226c = 0;
            local_2268 = 0;
            uVar11 = FUN_00409fc0(&local_2270,local_21c);
            pWVar10 = (LPCWSTR)((ulonglong)uVar11 >> 0x20);
            uVar4 = (uint)uVar11;
            local_2270 = (HKEY)0x0;
            if (uVar4 != 0) break;
          }
        }
        else {
          iVar3 = FUN_00409e17(local_21c);
          pWVar10 = extraout_EDX_14;
          if ((iVar3 != 0) && (local_2224 != (HKEY)0x0)) {
            FUN_00409e96(&local_2238,local_21c);
            pWVar10 = extraout_EDX_15;
            hKey = local_2238;
          }
        }
        goto LAB_0040a7e0;
      }
      uVar4 = local_222c;
    } while (param_4 != 0);
LAB_0040a55a:
    FUN_0040a08a(uVar4);
    pWVar10 = extraout_EDX_09;
LAB_0040a813:
    if (hKey != (HKEY)0x0) {
      RegCloseKey(hKey);
      pWVar10 = extraout_EDX_20;
    }
  }
  ExceptionList = local_10;
  FUN_00410680(local_14 ^ (uint)&stack0xfffffffc,pWVar10);
  return;
}



/* Function: FUN_0040a842 */

void __fastcall FUN_0040a842(undefined4 *param_1)

{
  WCHAR WVar1;
  LPWSTR pWVar2;
  
  while( true ) {
    WVar1 = *(LPCWSTR)*param_1;
    if ((((WVar1 != L'\t') && (WVar1 != L'\n')) && (WVar1 != L'\r')) && (WVar1 != L' ')) break;
    pWVar2 = CharNextW((LPCWSTR)*param_1);
    *param_1 = pWVar2;
  }
  return;
}



/* Function: FUN_0040a873 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040a873(int *param_1,undefined4 param_2,LPWSTR param_3,int param_4)

{
  short sVar1;
  HKEY pHVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  short *local_200c;
  WCHAR local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_200c = (short *)0x0;
  uVar7 = FUN_00409643(param_1,param_2,param_3,&local_200c);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 < 0) {
LAB_0040a907:
    FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar5);
    return;
  }
  *param_1 = (int)local_200c;
  sVar1 = *local_200c;
joined_r0x0040a8bd:
  if ((sVar1 == 0) || (iVar3 = FUN_0040a09e(param_1,local_2008), iVar3 < 0)) goto LAB_0040a8f8;
  uVar6 = 0;
  while (iVar3 = lstrcmpiW(local_2008,(LPCWSTR)(&PTR_u_HKCR_004017f0)[uVar6 * 2]), iVar3 != 0) {
    uVar6 = uVar6 + 1;
    if (0xd < uVar6) goto LAB_0040a8f8;
  }
  pHVar2 = (HKEY)(&DAT_004017f4)[uVar6 * 2];
  if (((pHVar2 == (HKEY)0x0) || (iVar3 = FUN_0040a09e(param_1,local_2008), iVar3 < 0)) ||
     (local_2008[0] != L'{')) goto LAB_0040a8f8;
  if (param_4 == 0) {
    iVar3 = FUN_0040a1fe(param_1,local_2008,pHVar2,0,0);
    if (iVar3 < 0) goto LAB_0040a8f8;
  }
  else {
    iVar3 = *param_1;
    iVar4 = FUN_0040a1fe(param_1,local_2008,pHVar2,param_4,0);
    if (iVar4 < 0) {
      *param_1 = iVar3;
      FUN_0040a1fe(param_1,local_2008,pHVar2,0,0);
LAB_0040a8f8:
      CoTaskMemFree(local_200c);
      uVar5 = extraout_EDX;
      goto LAB_0040a907;
    }
  }
  FUN_0040a842(param_1);
  sVar1 = *(short *)*param_1;
  goto joined_r0x0040a8bd;
}



/* Function: FUN_0040a9c2 */

/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void FUN_0040a9c2(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  code *pcVar1;
  longlong lVar2;
  HMODULE hModule;
  HRSRC hResInfo;
  HGLOBAL pvVar3;
  DWORD DVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar7;
  undefined1 *local_41c;
  undefined1 local_418 [1040];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x424;
  local_41c = (undefined1 *)0x0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  hModule = LoadLibraryExW(param_1,(HANDLE)0x0,2);
  if (hModule == (HMODULE)0x0) {
    FUN_004094f4();
    uVar6 = extraout_ECX;
    uVar7 = extraout_EDX;
  }
  else {
    hResInfo = FindResourceExW(hModule,param_3,param_2,0);
    if ((hResInfo != (HRSRC)0x0) &&
       (pvVar3 = LoadResource(hModule,hResInfo), pvVar3 != (HGLOBAL)0x0)) {
      DVar4 = SizeofResource(hModule,hResInfo);
      if (DVar4 <= DVar4 + 1) {
        lVar2 = (ulonglong)(DVar4 + 1) * 2;
        uVar5 = (uint)lVar2;
        local_8 = CONCAT31(local_8._1_3_,2);
        if ((int)((ulonglong)lVar2 >> 0x20) == 0) {
          if (uVar5 < 0x401) {
            local_41c = local_418;
          }
          else {
            FUN_004094c6(&local_41c,uVar5);
          }
          local_8 = 1;
          FUN_0040aafc();
          return;
        }
        FUN_00406f61(0x80070057);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = extraout_ECX_00;
      uVar7 = extraout_EDX_00;
      if (local_41c != local_418) {
        FUN_004094a4(&local_41c);
        uVar6 = extraout_ECX_01;
        uVar7 = extraout_EDX_01;
      }
      goto LAB_0040ab67;
    }
    FUN_004094f4();
    FreeLibrary(hModule);
    uVar6 = extraout_ECX_02;
    uVar7 = extraout_EDX_02;
  }
  if (local_41c != local_418) {
    FUN_004094a4(&local_41c);
    uVar6 = extraout_ECX_03;
    uVar7 = extraout_EDX_03;
  }
LAB_0040ab67:
  FUN_00410b63(uVar6,uVar7);
  return;
}



/* Function: Catch_All@0040aadb */

undefined * Catch_All_0040aadb(void)

{
  return &DAT_0040aae1;
}



/* Function: FUN_0040aafc */

void FUN_0040aafc(void)

{
  int iVar1;
  LPWSTR in_EAX;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int unaff_EBX;
  int unaff_EBP;
  DWORD unaff_ESI;
  HMODULE unaff_EDI;
  
  if (in_EAX != (LPWSTR)0x0) {
    iVar2 = MultiByteToWideChar(3,unaff_ESI,*(LPCSTR *)(unaff_EBP + -0x424),unaff_EBX,in_EAX,
                                unaff_EBX);
    if (iVar2 == 0) {
      FUN_004094f4();
    }
    else {
      iVar1 = *(int *)(unaff_EBP + 0x14);
      *(undefined2 *)(*(int *)(unaff_EBP + -0x418) + iVar2 * 2) = 0;
      FUN_0040a873((int *)(unaff_EBP + -0x42c),0,*(LPWSTR *)(unaff_EBP + -0x418),iVar1);
    }
  }
  FreeLibrary(unaff_EDI);
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if (*(int *)(unaff_EBP + -0x418) != unaff_EBP + -0x414) {
    FUN_004094a4((undefined4 *)(unaff_EBP + -0x418));
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  FUN_00410b63(uVar3,uVar4);
  return;
}



/* Function: FUN_0040ab80 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0040ab80(int *param_1,LPCWSTR param_2,int param_3,undefined4 *param_4)

{
  short sVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  HMODULE pHVar7;
  undefined4 uVar8;
  short *psVar9;
  undefined4 extraout_EDX;
  undefined **local_a58;
  undefined4 local_a54;
  undefined4 local_a50;
  undefined4 local_a4c;
  short local_a44 [520];
  short local_634;
  undefined2 local_632 [523];
  WCHAR local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004114e7;
  local_10 = ExceptionList;
  uVar4 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a58 = &PTR_FUN_00401670;
  local_a54 = 0;
  local_a50 = 0;
  local_a4c = 0;
  local_14 = uVar4;
  if (param_4 != (undefined4 *)0x0) {
    for (; (short *)*param_4 != (short *)0x0; param_4 = param_4 + 2) {
      FUN_00409450(&local_a58,(short *)*param_4,param_4[1]);
    }
  }
  pcVar2 = *(code **)(*param_1 + 0x14);
  (*(code *)PTR_guard_check_icall_00414398)(&local_a58,uVar4);
  iVar5 = (*pcVar2)();
  puVar3 = PTR_IMAGE_DOS_HEADER_00413010;
  if (-1 < iVar5) {
    DVar6 = GetModuleFileNameW((HMODULE)PTR_IMAGE_DOS_HEADER_00413010,local_21c,0x104);
    if (DVar6 == 0) {
      FUN_004094f4();
    }
    else if (DVar6 != 0x104) {
      FUN_004091c2(local_a44,local_21c);
      if ((puVar3 == (undefined *)0x0) ||
         (pHVar7 = GetModuleHandleW((LPCWSTR)0x0), (HMODULE)puVar3 == pHVar7)) {
        local_634 = 0x22;
        uVar8 = FUN_0040920b(local_632,local_a44);
        if ((char)uVar8 == '\0') goto LAB_0040ad15;
        psVar9 = &local_634;
        do {
          sVar1 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar1 != 0);
        iVar5 = (int)psVar9 - (int)local_632 >> 1;
        local_632[iVar5 + -1] = 0x22;
        uVar4 = iVar5 * 2 + 2;
        if (0x417 < uVar4) {
          FUN_00410981(uVar4,local_632);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_632[iVar5] = 0;
        psVar9 = &local_634;
      }
      else {
        psVar9 = local_a44;
      }
      iVar5 = FUN_00409450(&local_a58,L"Module",(int)psVar9);
      if (((-1 < iVar5) &&
          (iVar5 = FUN_00409450(&local_a58,L"Module_Raw",(int)local_a44), -1 < iVar5)) &&
         (param_2 != (LPCWSTR)0x0)) {
        FUN_0040a9c2(local_21c,param_2,L"REGISTRY");
      }
    }
  }
LAB_0040ad15:
  FUN_0040919a(&local_a58);
  ExceptionList = local_10;
  FUN_00410680(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040ad90 */

void FUN_0040ad90(int *param_1,LPCWSTR param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_0040ab80(param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040adb0 */

void FUN_0040adb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)**(undefined4 **)(param_1 + 4);
  (*(code *)PTR_guard_check_icall_00414398)(*(undefined4 **)(param_1 + 4),param_2,param_3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040ade0 */

void FUN_0040ade0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 4);
  (*(code *)PTR_guard_check_icall_00414398)(*(int **)(param_1 + 4));
  (*pcVar1)();
  return;
}



/* Function: FUN_0040ae10 */

void FUN_0040ae10(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 8);
  (*(code *)PTR_guard_check_icall_00414398)(*(int **)(param_1 + 4));
  (*pcVar1)();
  return;
}



/* Function: FUN_0040ae40 */

void __thiscall FUN_0040ae40(void *this,undefined4 param_1,undefined4 *param_2)

{
  FUN_00405ecb(this,param_2);
  return;
}



/* Function: FUN_0040ae60 */

int FUN_0040ae60(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  pcVar1 = *(code **)*param_1;
  (*(code *)PTR_guard_check_icall_00414398)(param_1,&DAT_00402804,&local_8);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    pcVar1 = *(code **)(*local_8 + 0x10);
    (*(code *)PTR_guard_check_icall_00414398)(local_8,0,3,0,0,0);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) goto LAB_0040aeb3;
  }
  FUN_0040d098();
LAB_0040aeb3:
  if (local_8 != (int *)0x0) {
    pcVar1 = *(code **)(*local_8 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(local_8);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_0040aee0 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0040aee0(int param_1,wchar_t *param_2)

{
  int iVar1;
  LPWSTR pszAssoc;
  HRESULT HVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  LPCWSTR pszExtra;
  WCHAR *pszOut;
  DWORD *pcchOut;
  int local_128 [4];
  WCHAR local_118 [136];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x118;
  local_128[1] = 0x825;
  local_128[0] = 0;
  local_128[2] = 0;
  local_8 = 0;
  iVar1 = FUN_0040552d(4);
  if (iVar1 != 0) {
    FUN_0040cd8e(extraout_ECX,0x32,(undefined *)param_2);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x94) = 1;
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 0x88) != 0) || (*(int *)(iVar1 + 0x8c) == 0)) {
    if (param_2 == (wchar_t *)0x0) {
      FUN_0040d098();
    }
    else if (*param_2 != L'\0') {
      FUN_0040c4f0((void *)(iVar1 + 0x34),param_2);
      FUN_0040c4f0((void *)(*(int *)(param_1 + 4) + 0x4c),param_2);
      pcchOut = (DWORD *)(local_128 + 3);
      local_128[3] = 0x80;
      pszOut = local_118;
      pszExtra = (LPCWSTR)0x0;
      pszAssoc = PathFindExtensionW(param_2);
      HVar2 = AssocQueryStringW(0,ASSOCSTR_CONTENTTYPE,pszAssoc,pszExtra,pszOut,pcchOut);
      if (-1 < HVar2) {
        iVar1 = FUN_0040b96c(local_118);
        *(int *)(*(int *)(param_1 + 4) + 0x84) = iVar1;
        if ((iVar1 == 2) || (iVar1 == 3)) {
          FUN_004061b7(*(void **)(param_1 + 4),extraout_EDX);
          goto LAB_0040afe3;
        }
      }
      FUN_0040d098();
    }
  }
LAB_0040afe3:
  FUN_0040c63b(local_128);
  FUN_00410b4e(extraout_ECX_00,extraout_EDX_00);
  return;
}



/* Function: FUN_0040b000 */

undefined4 FUN_0040b000(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == (undefined4 *)0x0) {
    FUN_0040d098();
    uVar1 = 0x80070057;
  }
  else {
    *param_2 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040b030 */

int FUN_0040b030(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = FUN_0040c65c((void *)(*(int *)(param_1 + 4) + 0x58),param_2);
  if (iVar2 < 0) {
    FUN_0040d098();
    iVar2 = extraout_EDX;
  }
  else {
    local_8 = 0;
    local_c = *(undefined4 *)(*(int *)(param_1 + 4) + 0x84);
    pcVar1 = *(code **)(*param_2 + 0x10);
    (*(code *)PTR_guard_check_icall_00414398)(param_2,&local_c,4,&local_8);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      FUN_0040d098();
    }
    else {
      iVar2 = FUN_0040c65c((void *)(*(int *)(param_1 + 4) + 0x34),param_2);
      if ((((-1 < iVar2) &&
           (iVar2 = FUN_0040c65c((void *)(*(int *)(param_1 + 4) + 0x40),param_2), -1 < iVar2)) &&
          (iVar2 = FUN_0040c65c((void *)(*(int *)(param_1 + 4) + 100),param_2), -1 < iVar2)) &&
         (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1c), iVar2 != 0)) {
        pcVar1 = *(code **)(iVar2 + 0x3c);
        (*(code *)PTR_guard_check_icall_00414398)(param_2);
        iVar2 = (*pcVar1)();
        if (-1 < iVar2) {
          return iVar2;
        }
      }
    }
    FUN_0040d098();
    iVar2 = extraout_EDX_00;
  }
  return iVar2;
}



/* Function: FUN_0040b110 */

int __thiscall FUN_0040b110(void *this,int param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  if (*(int *)(*(int *)(param_1 + 4) + 0x1c) == 0) {
    iVar2 = FUN_0040c6cd((void *)(*(int *)(param_1 + 4) + 0x58),param_2);
    if (iVar2 < 0) goto LAB_0040b1e8;
    local_8 = (void *)0x0;
    pcVar1 = *(code **)(*param_2 + 0xc);
    (*(code *)PTR_guard_check_icall_00414398)(param_2,&local_c,4,&local_8);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      FUN_0040d098();
      goto LAB_0040b1e8;
    }
    *(void **)(*(int *)(param_1 + 4) + 0x84) = local_c;
    iVar2 = FUN_0040c6cd((void *)(*(int *)(param_1 + 4) + 0x34),param_2);
    if (((iVar2 < 0) ||
        (iVar2 = FUN_0040c6cd((void *)(*(int *)(param_1 + 4) + 0x40),param_2), iVar2 < 0)) ||
       (iVar2 = FUN_0040c6cd((void *)(*(int *)(param_1 + 4) + 100),param_2), iVar2 < 0))
    goto LAB_0040b1e8;
    pcVar1 = *(code **)(*param_2 + 4);
    (*(code *)PTR_guard_check_icall_00414398)(param_2);
    (*pcVar1)();
    *(int **)(*(int *)(param_1 + 4) + 0x7c) = param_2;
    FUN_004061b7(*(void **)(param_1 + 4),extraout_EDX);
  }
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0x40);
  (*(code *)PTR_guard_check_icall_00414398)(param_2,param_3);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    return iVar2;
  }
LAB_0040b1e8:
  FUN_0040d098();
  return extraout_EDX_00;
}



/* Function: FUN_0040b200 */

undefined4 FUN_0040b200(void)

{
  return 0;
}



/* Function: FUN_0040b210 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0040b210(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  _func_7749 *p_Var1;
  _func_5192 *p_Var2;
  IBindStatusCallbackVtbl *pIVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  IBindStatusCallback *pBSCb;
  wchar_t *hMem;
  int *extraout_EDX;
  int *piVar8;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar9;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  IBindStatusCallback *pIVar10;
  IBindStatusCallbackVtbl *pIVar11;
  LPMONIKER This;
  LPBC pbc;
  IMoniker *pmkToLeft;
  IID *riid;
  undefined2 local_10b4 [2];
  undefined2 local_10b0 [22];
  IBindStatusCallbackVtbl *local_1084;
  DWORD local_1080;
  IBindStatusCallback *local_107c;
  int local_1078;
  int *local_1074;
  LPMONIKER local_1070;
  undefined4 *local_106c;
  LPBC local_1068;
  wchar_t *local_1064;
  WCHAR local_1060 [2086];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00411713;
  local_10 = ExceptionList;
  uVar6 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1078 = param_1;
  local_1074 = param_3;
  local_106c = param_4;
  local_14 = uVar6;
  iVar7 = FUN_0040552d(4);
  piVar8 = extraout_EDX;
  if (iVar7 != 0) {
    memset(local_10b0,0,0x30);
    local_10b0[0] = 0x30;
    FUN_0040cd35((int)local_10b0,4,0x33);
    piVar8 = local_1074;
  }
  pIVar10 = (IBindStatusCallback *)0x0;
  local_107c = (IBindStatusCallback *)0x0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x94) = 2;
  local_1064 = (wchar_t *)0x0;
  local_1074 = (int *)0x0;
  local_1070 = (IMoniker *)0x0;
  local_1068 = (IBindCtx *)0x0;
  local_8 = 3;
  iVar7 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar7 + 0x88) = 0;
  *(undefined4 *)(iVar7 + 0x8c) = 1;
  if (piVar8 == (int *)0x0) {
    FUN_0040d098();
    pIVar11 = (IBindStatusCallbackVtbl *)0x80070057;
    uVar9 = extraout_EDX_00;
  }
  else {
    pcVar4 = *(code **)(*piVar8 + 0x50);
    (*(code *)PTR_guard_check_icall_00414398)(piVar8,local_106c,piVar8,&local_1064,uVar6);
    pIVar11 = (IBindStatusCallbackVtbl *)(*pcVar4)();
    pBSCb = pIVar10;
    if ((int)pIVar11 < 0) {
LAB_0040b319:
      FUN_0040d098();
      uVar9 = extraout_EDX_01;
      pIVar10 = pBSCb;
    }
    else {
      if (local_1064 != (wchar_t *)0x0) {
        FUN_0040c4f0((void *)(*(int *)(param_1 + 4) + 0x34),local_1064);
        pIVar11 = (IBindStatusCallbackVtbl *)
                  CoInternetParseUrl(local_1064,PARSE_SCHEMA,0,local_1060,0x825,&local_1080,0);
        if ((int)pIVar11 < 0) goto LAB_0040b319;
        if (local_1080 == 4) {
          iVar7 = _wcsnicmp(local_1060,L"file",4);
          if (iVar7 == 0) {
            iVar7 = *(int *)(param_1 + 4);
            *(undefined4 *)(iVar7 + 0x88) = 1;
            pIVar11 = (IBindStatusCallbackVtbl *)0x80004005;
            if (param_2 == 0) {
              pIVar11 = (IBindStatusCallbackVtbl *)0x1;
            }
            *(undefined4 *)(iVar7 + 0x8c) = 1;
            uVar9 = extraout_EDX_02;
            goto LAB_0040b4fa;
          }
        }
        local_106c = (undefined4 *)FUN_00410077(0x4c);
        if (local_106c != (undefined4 *)0x0) {
          pBSCb = (IBindStatusCallback *)FUN_00404ed6(local_106c);
          if (pBSCb != (IBindStatusCallback *)0x0) {
            p_Var1 = pBSCb->lpVtbl->AddRef;
            pIVar10 = pBSCb;
            (*(code *)PTR_guard_check_icall_00414398)();
            (*p_Var1)(pIVar10);
            local_107c = pBSCb;
            pIVar11 = (IBindStatusCallbackVtbl *)
                      CreateURLMonikerEx((LPMONIKER)0x0,local_1064,&local_1070,1);
            if (-1 < (int)pIVar11) {
              pIVar11 = (IBindStatusCallbackVtbl *)CreateBindCtx(0,&local_1068);
              if (-1 < (int)pIVar11) {
                pIVar11 = (IBindStatusCallbackVtbl *)
                          RegisterBindStatusCallback(local_1068,pBSCb,(IBindStatusCallback **)0x0,0)
                ;
                if (-1 < (int)pIVar11) {
                  p_Var2 = local_1070->lpVtbl->BindToStorage;
                  pIVar10 = pBSCb + 1;
                  riid = (IID *)&DAT_00402744;
                  pmkToLeft = (IMoniker *)0x0;
                  This = local_1070;
                  pbc = local_1068;
                  (*(code *)PTR_guard_check_icall_00414398)();
                  pIVar11 = (IBindStatusCallbackVtbl *)
                            (*p_Var2)(This,pbc,pmkToLeft,riid,&pIVar10->lpVtbl);
                  if (-1 < (int)pIVar11) {
                    FUN_0040b86b(&local_106c);
                    iVar5 = local_1078;
                    *(IBindStatusCallbackVtbl **)(*(int *)(local_1078 + 4) + 0x84) = pBSCb[9].lpVtbl
                    ;
                    iVar7 = *(int *)(*(int *)(local_1078 + 4) + 0x84);
                    if ((iVar7 == 2) || (iVar7 == 3)) {
                      FUN_0040b86b(&local_106c);
                      if (pBSCb[8].lpVtbl == (IBindStatusCallbackVtbl *)0x0) {
                        pIVar11 = (IBindStatusCallbackVtbl *)0x0;
                      }
                      else {
                        pIVar11 = pBSCb[6].lpVtbl;
                      }
                      FUN_0040c4f0((void *)(*(int *)(iVar5 + 4) + 0x4c),(wchar_t *)pIVar11);
                      FUN_0040e503(*(HANDLE *)(*(int *)(iVar5 + 4) + 0x90));
                      pIVar11 = (IBindStatusCallbackVtbl *)0x0;
                      uVar9 = extraout_EDX_03;
                      pIVar10 = pBSCb;
                      goto LAB_0040b4fa;
                    }
                    pIVar11 = (IBindStatusCallbackVtbl *)0x80070057;
                  }
                }
              }
            }
            goto LAB_0040b319;
          }
        }
      }
      FUN_0040d098();
      pIVar11 = (IBindStatusCallbackVtbl *)0x8007000e;
      uVar9 = extraout_EDX_04;
    }
  }
LAB_0040b4fa:
  iVar7 = local_1078;
  if (*(int *)(*(int *)(local_1078 + 4) + 0x88) == 0) {
    if ((int)pIVar11 < 0) {
      if ((pIVar10 == (IBindStatusCallback *)0x0) ||
         (pIVar3 = pIVar10[0x12].lpVtbl, -1 < (int)pIVar3)) {
LAB_0040b5eb:
        FUN_0040d08a(pIVar11);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      hMem = (wchar_t *)FUN_0040ba01((DWORD)pIVar3);
      pIVar11 = pIVar3;
      if (hMem == (wchar_t *)0x0) goto LAB_0040b5eb;
      FUN_0040c4f0((void *)(*(int *)(iVar7 + 4) + 0x70),hMem);
      LocalFree(hMem);
      pIVar11 = (IBindStatusCallbackVtbl *)0x0;
      uVar9 = extraout_EDX_05;
    }
    FUN_004061b7(*(void **)(iVar7 + 4),uVar9);
  }
  if (local_1064 != (wchar_t *)0x0) {
    CoTaskMemFree(local_1064);
  }
  iVar7 = FUN_0040552d(4);
  if (iVar7 != 0) {
    memset(local_10b4,0,0x34);
    local_10b4[0] = 0x34;
    local_1084 = pIVar11;
    FUN_0040cd35((int)local_10b4,4,0x34);
  }
  ~CComPtr<>((int *)&local_1068);
  ~CComPtr<>((int *)&local_1070);
  ~CComPtr<>((int *)&local_1074);
  ~CComPtr<>((int *)&local_107c);
  ExceptionList = local_10;
  FUN_00410680(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX_06);
  return;
}



/* Function: FUN_0040b5f9 */

int __fastcall
FUN_0040b5f9(undefined4 param_1,short *param_2,undefined4 param_3,short *param_4,undefined4 param_5,
            short *param_6,undefined4 param_7,short *param_8)

{
  short sVar1;
  LPWSTR pWVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  wchar_t *_Str1;
  short *psVar7;
  uint *pNumArgs;
  uint local_10;
  uint local_c;
  LPWSTR *local_8;
  
  DAT_004139ac = 0;
  if (param_2 != (short *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (short *)0x0) {
    *param_4 = 0;
  }
  if (param_6 != (short *)0x0) {
    *param_6 = 0;
  }
  if (param_8 != (short *)0x0) {
    *param_8 = 0;
  }
  if (((param_4 == (short *)0x0) || (param_2 == (short *)0x0)) || (param_6 == (short *)0x0)) {
    FUN_0040d098();
    iVar6 = -0x7ff8ffa9;
  }
  else {
    pNumArgs = &local_10;
    pWVar2 = GetCommandLineW();
    local_8 = CommandLineToArgvW(pWVar2,(int *)pNumArgs);
    local_c = local_10;
    if ((int)local_10 < 0) {
      iVar6 = -0x7ff8fdea;
LAB_0040b849:
      FUN_0040d098();
    }
    else {
      iVar6 = 0;
      uVar5 = 1;
      if (1 < local_10) {
        do {
          pWVar2 = local_8[uVar5];
          if ((*pWVar2 == L'-') || (*pWVar2 == L'/')) {
            _Str1 = pWVar2 + 1;
            iVar3 = _wcsicmp(_Str1,L"Embedding");
            if (iVar3 == 0) {
              DAT_004139ac = DAT_004139ac | 1;
            }
            else {
              iVar3 = _wcsicmp(_Str1,L"Debug");
              if (iVar3 == 0) {
                DAT_004139ac = DAT_004139ac | 3;
              }
              else {
                iVar3 = _wcsicmp(_Str1,L"DebugSecurityZoneURL");
                if (iVar3 == 0) {
                  DAT_004139ac = DAT_004139ac | 8;
                  if (uVar5 + 1 < local_c) {
                    uVar4 = 0x144;
                    pWVar2 = local_8[uVar5 + 1];
                    psVar7 = param_6;
LAB_0040b750:
                    iVar6 = FUN_00404d7c(psVar7,uVar4,(int)pWVar2);
                    if (iVar6 < 0) goto LAB_0040b849;
                    sVar1 = *psVar7;
LAB_0040b7e1:
                    uVar5 = uVar5 + 1;
                    if ((sVar1 == 0x2d) || (sVar1 == 0x2f)) goto LAB_0040b83d;
                    iVar6 = 0;
                  }
                }
                else {
                  iVar3 = _wcsicmp(_Str1,L"Event");
                  if (iVar3 == 0) {
                    DAT_004139ac = DAT_004139ac | 5;
                    if (uVar5 + 1 < local_c) {
                      pWVar2 = local_8[uVar5 + 1];
                      uVar4 = 0x40;
                      psVar7 = param_4;
                      goto LAB_0040b750;
                    }
                  }
                  else {
                    iVar3 = _wcsicmp(_Str1,L"LaunchApplication");
                    if ((iVar3 == 0) && (param_8 != (short *)0x0)) {
                      DAT_004139ac = DAT_004139ac | 0x10;
                      if (uVar5 + 1 < local_c) {
                        iVar6 = FUN_00404d7c(param_8,0x824,(int)local_8[uVar5 + 1]);
                        if (-1 < iVar6) {
                          sVar1 = *param_8;
                          goto LAB_0040b7e1;
                        }
                        goto LAB_0040b849;
                      }
                    }
                    else {
                      iVar3 = _wcsicmp(_Str1,L"RegServer");
                      if (iVar3 == 0) {
                        DAT_004139ac = DAT_004139ac | 0x20;
                      }
                      else {
                        iVar3 = _wcsicmp(_Str1,L"UnregServer");
                        if (iVar3 != 0) goto LAB_0040b83d;
                        DAT_004139ac = DAT_004139ac | 0x40;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (((DAT_004139ac != 0) && ((DAT_004139ac & 2) == 0)) || (*param_2 != 0)) {
LAB_0040b83d:
              iVar6 = -0x7ff8ffa9;
              goto LAB_0040b849;
            }
            iVar6 = FUN_00404e6b(param_2,0x144,(int)pWVar2);
            if (iVar6 < 0) goto LAB_0040b849;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_c);
      }
    }
    if (local_8 != (LPWSTR *)0x0) {
      LocalFree(local_8);
    }
  }
  return iVar6;
}



/* Function: FUN_0040b86b */

undefined4 FUN_0040b86b(undefined4 *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  MSG local_24;
  HANDLE local_8;
  
  while( true ) {
    while (BVar1 = PeekMessageW(&local_24,(HWND)0x0,0,0,1), BVar1 == 0) {
      DVar2 = MsgWaitForMultipleObjects(1,&local_8,0,0xffffffff,0x1cff);
      if (DVar2 != 1) {
        *param_1 = 0;
        return 1;
      }
    }
    if (local_24.message == 0x12) break;
    DispatchMessageW(&local_24);
  }
  *param_1 = 1;
  PostQuitMessage(local_24.wParam);
  return 0;
}



/* Function: FUN_0040b8dd */

void __fastcall FUN_0040b8dd(undefined4 param_1,LPWSTR param_2)

{
  HMODULE hModule;
  DWORD DVar1;
  HINSTANCE hInstance;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  undefined8 uVar3;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  hModule = GetModuleHandleW(L"PresentationHost.exe");
  uVar2 = extraout_EDX;
  if (hModule != (HMODULE)0x0) {
    DVar1 = GetModuleFileNameW(hModule,local_210,0x104);
    uVar2 = extraout_EDX_00;
    if (DVar1 != 0) {
      uVar3 = FUN_0040fc3b(local_210,8);
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      hInstance = (HINSTANCE)uVar3;
      if (hInstance != (HINSTANCE)0x0) {
        LoadStringW(hInstance,0xcf8,param_2,2000);
        FreeLibrary(hInstance);
        uVar2 = extraout_EDX_01;
        goto LAB_0040b956;
      }
    }
  }
  *param_2 = L'\0';
LAB_0040b956:
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040b96c */

int __fastcall FUN_0040b96c(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = _wcsicmp(param_1,L"application/vnd.ms-xpsdocument");
  if (iVar1 != 0) {
    iVar1 = _wcsicmp(param_1,L"application/x-zip-compressed");
    if (iVar1 != 0) {
      iVar1 = _wcsicmp(param_1,L"application/x-ms-xbap");
      if (iVar1 == 0) {
        return 2;
      }
      iVar1 = _wcsicmp(param_1,L"application/xaml+xml");
      return (-(uint)(iVar1 != 0) & 0xfffffffd) + 3;
    }
  }
  return 1;
}



/* Function: FUN_0040b9d1 */

uint __fastcall FUN_0040b9d1(LPCVOID param_1,DWORD param_2)

{
  DWORD DVar1;
  uint local_8;
  
  local_8 = 0;
  DVar1 = FormatMessageW(0x1900,param_1,param_2,0,(LPWSTR)&local_8,0,(va_list *)0x0);
  return -(uint)(DVar1 != 0) & local_8;
}



/* Function: FUN_0040ba01 */

uint __fastcall FUN_0040ba01(DWORD param_1)

{
  HMODULE pHVar1;
  uint uVar2;
  
  uVar2 = 0;
  pHVar1 = GetModuleHandleW(L"urlmon.dll");
  if (pHVar1 != (HMODULE)0x0) {
    uVar2 = FUN_0040b9d1(pHVar1,param_1);
    if (uVar2 != 0) {
      return uVar2;
    }
    uVar2 = 0;
    if ((param_1 == 0x800c0019) && (uVar2 = FUN_0040b9d1(pHVar1,0x800c0011), uVar2 != 0)) {
      return uVar2;
    }
  }
  pHVar1 = GetModuleHandleW(L"wininet.dll");
  if (pHVar1 != (HMODULE)0x0) {
    uVar2 = FUN_0040b9d1(pHVar1,param_1);
  }
  return uVar2;
}



/* Function: FUN_0040ba68 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

DWORD FUN_0040ba68(void)

{
  _func_8062 *p_Var1;
  DWORD DVar2;
  FARPROC pFVar3;
  undefined4 extraout_ECX;
  IInternetSecurityManager *pIVar4;
  LPCWSTR pwszUrl;
  LPCWSTR pwszUrl_00;
  LPCWSTR pwszUrl_01;
  int *pPolicy;
  DWORD DVar5;
  BYTE *pBVar6;
  BYTE *pBVar7;
  DWORD DVar8;
  DWORD DVar9;
  DWORD DVar10;
  BYTE local_24 [4];
  BYTE local_20 [4];
  int local_1c;
  HMODULE local_18;
  IInternetSecurityManager *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_14[0] = (IInternetSecurityManager *)0x0;
  local_8 = 0;
  local_18 = (HMODULE)0x0;
  DVar2 = CoInternetCreateSecurityManager((IServiceProvider *)0x0,local_14,0);
  if (-1 < (int)DVar2) {
    DVar10 = 0;
    DVar9 = 1;
    DVar8 = 0;
    pBVar6 = (BYTE *)0x0;
    DVar5 = 4;
    p_Var1 = local_14[0]->lpVtbl->ProcessUrlAction;
    pBVar7 = local_24;
    DVar2 = 0x2004;
    pIVar4 = local_14[0];
    (*(code *)PTR_guard_check_icall_00414398)();
    DVar2 = (*p_Var1)(pIVar4,pwszUrl,DVar2,pBVar7,DVar5,pBVar6,DVar8,DVar9,DVar10);
    if (-1 < (int)DVar2) {
      DVar10 = 0;
      DVar9 = 1;
      DVar8 = 0;
      pBVar6 = (BYTE *)0x0;
      DVar5 = 4;
      p_Var1 = local_14[0]->lpVtbl->ProcessUrlAction;
      pBVar7 = local_20;
      DVar2 = 0x2001;
      pIVar4 = local_14[0];
      (*(code *)PTR_guard_check_icall_00414398)();
      DVar2 = (*p_Var1)(pIVar4,pwszUrl_00,DVar2,pBVar7,DVar5,pBVar6,DVar8,DVar9,DVar10);
      if (-1 < (int)DVar2) {
        DVar10 = 0;
        DVar9 = 5;
        DVar8 = 0;
        pBVar7 = (BYTE *)0x0;
        DVar5 = 4;
        p_Var1 = local_14[0]->lpVtbl->ProcessUrlAction;
        pPolicy = &local_1c;
        DVar2 = 0x1803;
        pIVar4 = local_14[0];
        (*(code *)PTR_guard_check_icall_00414398)();
        DVar2 = (*p_Var1)(pIVar4,pwszUrl_01,DVar2,(BYTE *)pPolicy,DVar5,pBVar7,DVar8,DVar9,DVar10);
        if (-1 < (int)DVar2) {
          if (local_1c == 0) {
            DVar2 = FUN_0040bba9(extraout_ECX,&local_18);
            if (-1 < (int)DVar2) {
              pFVar3 = GetProcAddress(local_18,"ActivateDeploymentExW");
              if (pFVar3 == (FARPROC)0x0) {
                FUN_0040d098();
                DVar5 = GetLastError();
                DVar2 = DVar5 & 0xffff | 0x80070000;
                if ((int)DVar5 < 1) {
                  DVar2 = DVar5;
                }
                goto LAB_0040bb84;
              }
              (*(code *)PTR_guard_check_icall_00414398)();
              DVar2 = (*pFVar3)();
              if (-1 < (int)DVar2) goto LAB_0040bb84;
            }
          }
          else {
            DVar2 = 0x80004021;
          }
        }
      }
    }
  }
  FUN_0040d098();
LAB_0040bb84:
  if (local_18 != (HMODULE)0x0) {
    FreeLibrary(local_18);
  }
  ~CComPtr<>((int *)local_14);
  return DVar2;
}



/* Function: FUN_0040bba9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_0040bba9(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x40bbb5;
  bVar2 = FUN_0040852a();
  if (bVar2) {
    local_1c = 0;
    local_8 = 0;
    local_14[0] = (undefined4 *)0x0;
    iVar3 = FUN_00408a76(local_14);
    if (-1 < iVar3) {
      pcVar1 = *(code **)(*(int *)*local_14[0] + 0x1c);
      (*(code *)PTR_guard_check_icall_00414398)((int *)*local_14[0],L"dfdll.dll",param_2);
      iVar3 = (*pcVar1)();
    }
    FUN_004085b0(&local_20);
  }
  else {
    iVar3 = LoadLibraryShim(L"dfdll.dll",0,0,param_2);
  }
  return iVar3;
}



/* Function: FUN_0040bc28 */

void __fastcall FUN_0040bc28(int *param_1)

{
  ULONG_PTR ulCookie;
  
  if ((*param_1 != -1) && ((char)param_1[2] != '\0')) {
    ulCookie = param_1[1];
    if (ulCookie != 0) {
      param_1[1] = 0;
      DeactivateActCtx(0,ulCookie);
    }
    ReleaseActCtx((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0040bc5c */

bool __thiscall FUN_0040bc5c(void *this,LPCWSTR param_1)

{
  HANDLE pvVar1;
  int iVar2;
  LPCWSTR *ppWVar3;
  bool bVar4;
  ACTCTXW local_28;
  
                    /* WARNING: Load size is inaccurate */
  if (((*this == -1) && (param_1 != (LPCWSTR)0x0)) && (*param_1 != L'\0')) {
    local_28.cbSize = 0x20;
    ppWVar3 = (LPCWSTR *)&local_28.dwFlags;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppWVar3 = (LPCWSTR)0x0;
      ppWVar3 = ppWVar3 + 1;
    }
    local_28.lpSource = param_1;
    local_28.lpResourceName = (LPCWSTR)0x2;
    local_28.dwFlags = 8;
    pvVar1 = CreateActCtxW(&local_28);
    bVar4 = pvVar1 != (HANDLE)0xffffffff;
    *(HANDLE *)this = pvVar1;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



/* Function: FUN_0040bcbe */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall FUN_0040bcbe(void *this,wchar_t *param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x825;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x825;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  FUN_0040c4f0((undefined4 *)((int)this + 0x10),param_1);
  FUN_0040c4f0((void *)((int)this + 0x1c),L"PresentationHostDLL.dll");
  if (param_1 != (wchar_t *)0x0) {
    FUN_0040be99(this,(wint_t *)param_1);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040bd46 */

int __thiscall FUN_0040bd46(void *this,int *param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this - *param_1;
  if ((iVar1 == 0) && (iVar1 = *(int *)((int)this + 4) - param_1[1], iVar1 == 0)) {
    iVar1 = *(int *)((int)this + 8) - param_1[2];
  }
  return iVar1;
}



/* Function: FUN_0040bd6c */

undefined4 __fastcall FUN_0040bd6c(int *param_1)

{
  bool bVar1;
  int iVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined4 uVar4;
  undefined2 local_44 [26];
  HANDLE local_10;
  ULONG_PTR local_c;
  undefined1 local_8;
  
  iVar2 = FUN_0040552d(4);
  if (iVar2 != 0) {
    memset(local_44,0,0x30);
    local_44[0] = 0x30;
    FUN_0040cd35((int)local_44,4,0x3c);
  }
  if ((param_1[10] != 0) && (param_1[7] != 0)) {
    hModule = LoadLibraryExW((LPCWSTR)param_1[7],(HANDLE)0x0,0);
    param_1[3] = (int)hModule;
    if (hModule != (HMODULE)0x0) {
      pFVar3 = GetProcAddress(hModule,"Activate");
      param_1[0xc] = (int)pFVar3;
      pFVar3 = GetProcAddress((HMODULE)param_1[3],"Deactivate");
      param_1[0xd] = (int)pFVar3;
      pFVar3 = GetProcAddress((HMODULE)param_1[3],"ForwardTranslateAccelerator");
      param_1[0xe] = (int)pFVar3;
      pFVar3 = GetProcAddress((HMODULE)param_1[3],"SaveToHistory");
      param_1[0xf] = (int)pFVar3;
      pFVar3 = GetProcAddress((HMODULE)param_1[3],"LoadFromHistory");
      param_1[0x10] = (int)pFVar3;
      if ((((param_1[0xc] == 0) || (param_1[0xd] == 0)) || (param_1[0xe] == 0)) ||
         ((param_1[0xf] == 0 || (pFVar3 == (FARPROC)0x0)))) {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
      param_1[0xb] = iVar2;
      if (*param_1 == 3) {
        local_10 = (HANDLE)0xffffffff;
        local_c = 0;
        local_8 = 1;
        bVar1 = FUN_0040bc5c(&local_10,(LPCWSTR)param_1[7]);
        if ((bVar1) && (local_10 != (HANDLE)0xffffffff)) {
          local_8 = 0;
          ActivateActCtx(local_10,&local_c);
        }
        FUN_0040bc28((int *)&local_10);
      }
    }
  }
  uVar4 = 0x80004005;
  if (param_1[0xb] != 0) {
    uVar4 = 0;
  }
  return uVar4;
}



/* Function: FUN_0040be99 */

void __thiscall FUN_0040be99(void *this,wint_t *param_1)

{
  wint_t wVar1;
  int iVar2;
  wint_t wVar3;
  wint_t *extraout_EDX;
  uint uVar4;
  wint_t *pwVar5;
  int local_14 [4];
  
  local_14[3] = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_14[0] = 0;
  local_14[1] = 0;
  uVar4 = 0;
  local_14[2] = 0;
  *(undefined4 *)((int)this + 0x28) = 1;
  wVar1 = *param_1;
  wVar3 = wVar1;
  if (wVar1 == 0x22) {
    wVar3 = param_1[1];
  }
  pwVar5 = param_1 + 1;
  if (wVar1 != 0x22) {
    pwVar5 = param_1;
  }
  if ((wVar3 == 0x76) || (wVar3 == 0x56)) {
    pwVar5 = pwVar5 + 1;
    wVar3 = *pwVar5;
  }
  do {
    if ((wVar3 == 0) || (2 < uVar4)) goto LAB_0040bf5c;
    if (*pwVar5 == 0x2e) {
      uVar4 = uVar4 + 1;
    }
    else {
      iVar2 = iswdigit(*pwVar5);
      param_1 = extraout_EDX;
      if (iVar2 == 0) {
        if (((wVar1 != 0x22) || (*pwVar5 != 0x22)) || (pwVar5 = pwVar5 + 1, *pwVar5 != 0)) {
          *(undefined4 *)((int)this + 0x28) = 0;
LAB_0040bf5c:
          iVar2 = 0;
          if (*(int *)((int)this + 0x28) == 0) {
            *(undefined4 *)this = 0;
            *(undefined4 *)((int)this + 4) = 0;
          }
          else {
            *(int *)this = local_14[0];
            *(int *)((int)this + 4) = local_14[1];
            iVar2 = local_14[2];
          }
          *(int *)((int)this + 8) = iVar2;
          FUN_00410680(local_14[3] ^ (uint)&stack0xfffffffc,param_1);
          return;
        }
      }
      else {
        local_14[uVar4] = (*pwVar5 - 0x30) + local_14[uVar4] * 10;
      }
    }
    pwVar5 = pwVar5 + 1;
    wVar3 = *pwVar5;
  } while( true );
}



/* Function: FUN_0040bf92 */

void __thiscall FUN_0040bf92(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined2 local_3c [24];
  undefined4 local_c;
  
  iVar2 = FUN_0040552d(4);
  if (iVar2 != 0) {
    memset(local_3c,0,0x30);
    local_3c[0] = 0x30;
    FUN_0040cd35((int)local_3c,4,0x3d);
  }
  pcVar1 = *(code **)((int)this + 0x30);
  (*(code *)PTR_guard_check_icall_00414398)(param_1,param_2);
  (*pcVar1)();
  iVar2 = FUN_0040552d(4);
  if (iVar2 != 0) {
    memset(local_3c,0,0x34);
    local_c = 0;
    local_3c[0] = 0x34;
    FUN_0040cd35((int)local_3c,4,0x3e);
  }
  return;
}



/* Function: FUN_0040c01b */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_0040c01b(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int *_Memory;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  void *local_20;
  wchar_t *local_1c;
  int local_18;
  wchar_t *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x40c027;
  local_18 = 0;
  if (DAT_00413a88 == (wchar_t *)0x0) {
    local_1c = (wchar_t *)FUN_00410077(8);
    if (local_1c == (wchar_t *)0x0) {
      DAT_00413a88 = (wchar_t *)0x0;
    }
    else {
      local_1c[0] = L'\0';
      local_1c[1] = L'\0';
      local_1c[2] = L'\0';
      local_1c[3] = L'\0';
      DAT_00413a88 = local_1c;
    }
    local_2c = (undefined4 *)0x0;
    local_28 = 0;
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    local_18 = FUN_0040d0bf(&local_2c);
    if (local_18 < 0) {
      FUN_0040d098();
    }
    else {
      DAT_00413a84 = (int *)0x0;
      for (puVar5 = local_2c; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)puVar5[5]) {
        local_20 = FUN_00410077(0x44);
        local_8._0_1_ = 1;
        if (local_20 == (void *)0x0) {
          _Memory = (int *)0x0;
        }
        else {
          _Memory = FUN_0040bcbe(local_20,(wchar_t *)*puVar5);
        }
        local_8._0_1_ = 0;
        uVar2 = (undefined1)local_8;
        local_8._0_1_ = 0;
        if (_Memory == (int *)0x0) {
          local_8._0_1_ = uVar2;
          FUN_0040d098();
          FUN_0040c216(&local_2c);
          return -0x7ff8fff2;
        }
        if (_Memory[10] == 0) {
          local_8._0_1_ = uVar2;
          FUN_0040c63b(_Memory + 7);
          FUN_0040c63b(_Memory + 4);
          free(_Memory);
        }
        else {
          FUN_0040c4f0(_Memory + 7,(wchar_t *)puVar5[3]);
          local_1c = (wchar_t *)_Memory[4];
          local_14 = DAT_00413a88;
          if (local_1c == (wchar_t *)0x0) {
LAB_0040c133:
            FUN_0040d098();
          }
          else {
            puVar3 = (undefined4 *)FUN_00410077(0x14);
            local_24 = puVar3;
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              uVar1 = *(undefined4 *)local_14;
              *puVar3 = 0;
              puVar3[2] = 0;
              puVar3[1] = 0x825;
              local_8._0_1_ = 3;
              puVar3[4] = uVar1;
              FUN_0040c4f0(puVar3,local_1c);
              puVar3[3] = _Memory;
            }
            local_8._0_1_ = 0;
            *(undefined4 **)local_14 = puVar3;
            if (puVar3 == (undefined4 *)0x0) goto LAB_0040c133;
            *(int *)(local_14 + 2) = *(int *)(local_14 + 2) + 1;
          }
          if ((DAT_00413a84 == (int *)0x0) ||
             (iVar4 = FUN_0040bd46(DAT_00413a84,_Memory), iVar4 < 0)) {
            DAT_00413a84 = _Memory;
          }
        }
      }
    }
    FUN_0040c216(&local_2c);
  }
  return local_18;
}



/* Function: FUN_0040c195 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __fastcall FUN_0040c195(wchar_t *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_5c [16];
  int local_4c [3];
  int local_40 [3];
  int local_34;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x40c1a1;
  iVar1 = FUN_0040c01b();
  if (iVar1 < 0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0040bcbe(local_5c,param_1);
    local_8 = 0;
    if (local_34 != 0) {
      for (iVar1 = *DAT_00413a88; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
        piVar2 = *(int **)(iVar1 + 0xc);
        iVar3 = FUN_0040bd46(local_5c,piVar2);
        if (iVar3 == 0) goto LAB_0040c1f8;
      }
    }
    if (param_2 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_0040c01b();
      piVar2 = DAT_00413a84;
    }
LAB_0040c1f8:
    FUN_0040c63b(local_40);
    FUN_0040c63b(local_4c);
  }
  return piVar2;
}



/* Function: FUN_0040c216 */

void __fastcall FUN_0040c216(undefined4 *param_1)

{
  int *piVar1;
  int *_Memory;
  
  _Memory = (int *)*param_1;
  while (_Memory != (int *)0x0) {
    piVar1 = (int *)_Memory[5];
    FUN_0040c258(_Memory + 3);
    FUN_0040c63b(_Memory);
    free(_Memory);
    _Memory = piVar1;
  }
  return;
}



/* Function: FUN_0040c248 */

void __fastcall FUN_0040c248(int *param_1)

{
  FUN_0040c279((undefined4 *)(*param_1 + -0x10));
  return;
}



/* Function: FUN_0040c258 */

void __fastcall FUN_0040c258(int *param_1)

{
  FUN_0040c279((undefined4 *)(param_1[1] + -0x10));
  FUN_0040c279((undefined4 *)(*param_1 + -0x10));
  return;
}



/* Function: FUN_0040c279 */

void __fastcall FUN_0040c279(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  LOCK();
  piVar1 = param_1 + 3;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    pcVar3 = *(code **)(*(int *)*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00414398)(param_1);
    (*pcVar3)();
  }
  return;
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



/* Function: FUN_0040c2d0 */

undefined4 * __thiscall FUN_0040c2d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401760;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
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



/* Function: FUN_0040c320 */

void __thiscall FUN_0040c320(void *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = this;
  return;
}



/* Function: FUN_0040c340 */

void __thiscall FUN_0040c340(void *this,undefined4 param_1,error_condition *param_2)

{
  code *pcVar1;
  error_condition *this_00;
  void *local_c;
  void *pvStack_8;
  
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0xc);
  local_c = this;
  pvStack_8 = this;
  (*(code *)PTR_guard_check_icall_00414398)(&local_c,param_1);
  this_00 = (error_condition *)(*pcVar1)();
  std::error_condition::operator==(this_00,param_2);
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



/* Function: FUN_0040c3b0 */

char * FUN_0040c3b0(void)

{
  return "generic";
}



/* Function: FUN_0040c3c0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_0040c3c0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_004100c2(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_0040c3f0 */

char * FUN_0040c3f0(void)

{
  return "iostream";
}



/* Function: FUN_0040c400 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_0040c400(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  if (param_2 == 1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (param_1,"iostream stream error");
  }
  else {
    FUN_0040c3c0(param_1,param_2);
  }
  return param_1;
}



/* Function: FUN_0040c440 */

char * FUN_0040c440(void)

{
  return "system";
}



/* Function: FUN_0040c450 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_0040c450(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_004100f4(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_0040c480 */

int * FUN_0040c480(int *param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041138d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004100c2(param_2);
  *param_1 = param_2;
  if (iVar1 == 0) {
    param_1[1] = (int)&PTR_PTR_00413008;
  }
  else {
    param_1[1] = (int)&PTR_PTR_00413000;
  }
  ExceptionList = local_10;
  return param_1;
}



/* Function: thunk_FUN_0040c63b */

void __fastcall thunk_FUN_0040c63b(int *param_1)

{
  if (*param_1 != 0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  param_1[2] = 0;
  return;
}



/* Function: FUN_0040c4f0 */

int __thiscall FUN_0040c4f0(void *this,wchar_t *param_1)

{
  int *piVar1;
  longlong lVar2;
  wchar_t *_Dst;
  int iVar3;
  
  iVar3 = 0;
  FUN_0040c63b((int *)this);
  if (param_1 != (wchar_t *)0x0) {
    piVar1 = (int *)((int)this + 8);
    iVar3 = FUN_0040cbbf(param_1,*(uint *)((int)this + 4),piVar1);
    if (-1 < iVar3) {
      lVar2 = (ulonglong)(*piVar1 + 1) * 2;
      _Dst = (wchar_t *)FUN_004100b1(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      *(wchar_t **)this = _Dst;
      if (_Dst != (wchar_t *)0x0) {
        wcscpy_s(_Dst,*piVar1 + 1,param_1);
        return iVar3;
      }
      *piVar1 = 0;
      iVar3 = -0x7ff8fff2;
    }
    FUN_0040d098();
  }
  return iVar3;
}



/* Function: FUN_0040c569 */

undefined4 __thiscall FUN_0040c569(void *this,void *param_1,int param_2)

{
  longlong lVar1;
  void *_Dst;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_0040c63b((int *)this);
  if (param_1 != (void *)0x0) {
    if (*(uint *)((int)this + 4) < param_2 + 1U) {
      uVar2 = 0x80070057;
    }
    else {
      *(int *)((int)this + 8) = param_2;
      lVar1 = (ulonglong)(param_2 + 1U) * 2;
      _Dst = (void *)FUN_004100b1(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      *(void **)this = _Dst;
      if (_Dst != (void *)0x0) {
        memmove(_Dst,param_1,param_2 * 2);
                    /* WARNING: Load size is inaccurate */
        *(undefined2 *)(param_2 * 2 + *this) = 0;
        return 0;
      }
      *(undefined4 *)((int)this + 8) = 0;
      uVar2 = 0x8007000e;
    }
    FUN_0040d098();
  }
  return uVar2;
}



/* Function: FUN_0040c5e6 */

int * __fastcall FUN_0040c5e6(wchar_t *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)FUN_00410077(0xc);
  if (this != (int *)0x0) {
    *this = 0;
    this[2] = 0;
    this[1] = 0x825;
    if (this == (int *)0x0) {
      return (int *)0x0;
    }
    iVar1 = FUN_0040c4f0(this,param_1);
    if (-1 < iVar1) {
      return this;
    }
    FUN_0040c63b(this);
    free(this);
  }
  return (int *)0x0;
}



/* Function: FUN_0040c63b */

void __fastcall FUN_0040c63b(int *param_1)

{
  if (*param_1 != 0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  param_1[2] = 0;
  return;
}



/* Function: FUN_0040c65c */

int __thiscall FUN_0040c65c(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  undefined4 local_8;
  
  local_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_00414398)(param_1,(int *)((int)this + 8),4,&local_8);
  iVar3 = (*pcVar1)();
  if (-1 < iVar3) {
    iVar2 = *(int *)((int)this + 8);
    if (iVar2 == 0) {
      return iVar3;
    }
    pcVar1 = *(code **)(*param_1 + 0x10);
                    /* WARNING: Load size is inaccurate */
    (*(code *)PTR_guard_check_icall_00414398)(param_1,*this,iVar2 * 2,&local_8);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      return iVar3;
    }
  }
  FUN_0040d098();
  return extraout_EDX;
}



/* Function: FUN_0040c6cd */

int __thiscall FUN_0040c6cd(void *this,int *param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  void *pvVar5;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  FUN_0040c63b((int *)this);
  local_8 = (void *)0x0;
  local_c = (void *)0x0;
  pcVar1 = *(code **)(*param_1 + 0xc);
  (*(code *)PTR_guard_check_icall_00414398)(param_1,&local_8,4,&local_c);
  iVar3 = (*pcVar1)();
  if (-1 < iVar3) {
    if (local_8 == (void *)0x0) {
      return iVar3;
    }
    pvVar5 = local_8;
    if (*(void **)((int)this + 4) < local_8) {
      pvVar5 = *(void **)((int)this + 4);
    }
    lVar2 = (ulonglong)((int)pvVar5 + 1) * 2;
    puVar4 = (undefined2 *)FUN_004100b1(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2)
    ;
    *(undefined2 **)this = puVar4;
    if (puVar4 == (undefined2 *)0x0) {
      iVar3 = -0x7ff8fff2;
    }
    else {
      *puVar4 = 0;
      pcVar1 = *(code **)(*param_1 + 0xc);
                    /* WARNING: Load size is inaccurate */
      (*(code *)PTR_guard_check_icall_00414398)(param_1,*this,(int)pvVar5 * 2,&local_c);
      iVar3 = (*pcVar1)();
      if (-1 < iVar3) {
                    /* WARNING: Load size is inaccurate */
        *(undefined2 *)(*this + (int)pvVar5 * 2) = 0;
        *(void **)((int)this + 8) = pvVar5;
        return iVar3;
      }
    }
  }
  FUN_0040d098();
  FUN_0040c63b((int *)this);
  return iVar3;
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
  FUN_0040c845(this,(undefined4 *)param_1,uVar1);
  return this;
}



/* Function: FUN_0040c7c1 */

void __thiscall FUN_0040c7c1(void *this,char param_1,size_t param_2)

{
  void *_Src;
  
  if ((param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
                    /* WARNING: Load size is inaccurate */
    _Src = *this;
    if (param_2 != 0) {
      memcpy(this,_Src,param_2);
    }
    free(_Src);
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  FUN_0040c820(this,param_2);
  return;
}



/* Function: FUN_0040c80f */

void FUN_0040c80f(void)

{
  code *pcVar1;
  
  FUN_004102f4("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040c820 */

void __thiscall FUN_0040c820(void *this,int param_1)

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



/* Function: FUN_0040c845 */

undefined4 * __thiscall FUN_0040c845(void *this,undefined4 *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  
  uVar2 = FUN_0040c8bb(this,param_1);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_0040c8fc(this,param_2,'\0');
    if (bVar1) {
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *this;
      }
      if (param_2 != 0) {
        memcpy(pvVar3,param_1,param_2);
      }
      FUN_0040c820(this,param_2);
    }
  }
  else {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar3 = *this;
    }
    this = FUN_0040c964(this,(undefined4 *)this,(int)param_1 - (int)pvVar3,param_2);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040c8bb */

uint __thiscall FUN_0040c8bb(void *this,undefined4 *param_1)

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



/* Function: FUN_0040c8fc */

bool __thiscall FUN_0040c8fc(void *this,uint param_1,char param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_1 != 0xffffffff) {
    if (*(uint *)((int)this + 0x14) < param_1) {
      FUN_0040ca01(this,param_1);
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
      FUN_0040c7c1(this,'\x01',uVar3);
    }
    return param_1 != 0;
  }
  FUN_0040c9f0();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}



/* Function: FUN_0040c964 */

undefined4 * __thiscall FUN_0040c964(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  void *_Dst;
  undefined4 *puVar3;
  uint _Size;
  
  if ((uint)param_1[4] < param_2) {
    FUN_0040c80f();
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  _Size = param_1[4] - param_2;
  if (param_3 < _Size) {
    _Size = param_3;
  }
  if ((undefined4 *)this == param_1) {
    FUN_0040cb6d(this,param_2 + _Size);
    FUN_0040cafc(this,0,param_2);
  }
  else {
    bVar2 = FUN_0040c8fc(this,_Size,'\0');
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
      FUN_0040c820(this,_Size);
    }
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040c9f0 */

void FUN_0040c9f0(void)

{
  code *pcVar1;
  
  FUN_004102cc("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040ca01 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __thiscall FUN_0040ca01(void *this,uint param_1)

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
  FUN_0040cb96(param_1 + 1);
  FUN_0040ca95();
  return;
}



/* Function: Catch_All@0040ca69 */

undefined * Catch_All_0040ca69(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_0040cb96(*(int *)(unaff_EBP + 8) + 1);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
  return &DAT_0040ca89;
}



/* Function: FUN_0040ca95 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040ca95(void)

{
  int iVar1;
  void *in_EAX;
  undefined4 *_Src;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  
  *(void **)(unaff_EBP + -0x18) = in_EAX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    _Src = unaff_EDI;
    if (0xf < (uint)unaff_EDI[5]) {
      _Src = (undefined4 *)*unaff_EDI;
    }
    memcpy(in_EAX,_Src,*(size_t *)(unaff_EBP + 0xc));
  }
  FUN_0040c7c1(unaff_EDI,'\x01',0);
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *unaff_EDI = *(undefined4 *)(unaff_EBP + -0x18);
  *unaff_EBX = unaff_ESI;
  FUN_0040c820(unaff_EDI,iVar1);
  return;
}



/* Function: Catch_All@0040cadb */

void Catch_All_0040cadb(void)

{
  int unaff_EBP;
  
  FUN_0040c7c1(*(void **)(unaff_EBP + -0x1c),'\x01',0);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_0040cafc */

undefined4 * __thiscall FUN_0040cafc(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  size_t _Size;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
    FUN_0040c80f();
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
      FUN_0040c820(this,uVar1 - param_2);
    }
  }
  else {
    FUN_0040c820(this,param_1);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040cb6d */

void * __thiscall FUN_0040cb6d(void *this,uint param_1)

{
  code *pcVar1;
  void *pvVar2;
  
  if (param_1 <= *(uint *)((int)this + 0x10)) {
    FUN_0040c820(this,param_1);
    return this;
  }
  FUN_0040c80f();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



/* Function: FUN_0040cb96 */

void FUN_0040cb96(size_t param_1)

{
  code *pcVar1;
  void *pvVar2;
  
  if (param_1 != 0) {
    pvVar2 = FUN_00410077(param_1);
    if (pvVar2 == (void *)0x0) {
      FUN_004102a7();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



/* Function: FUN_0040cbbf */

undefined4 __fastcall FUN_0040cbbf(short *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 == (short *)0x0) || (0x7fffffff < param_2)) {
    uVar2 = 0x80070057;
  }
  else {
    uVar1 = param_2;
    if (param_2 != 0) {
      do {
        if (*param_1 == 0) break;
        param_1 = param_1 + 1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    uVar2 = 0x80070057;
    if (uVar1 != 0) {
      uVar2 = 0;
    }
    if (param_3 != (int *)0x0) {
      if (uVar1 == 0) {
        *param_3 = 0;
      }
      else {
        *param_3 = param_2 - uVar1;
      }
    }
    if (uVar1 != 0) {
      return uVar2;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  return uVar2;
}



/* Function: FUN_0040cc28 */

void __fastcall FUN_0040cc28(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_EDX;
  undefined8 uVar1;
  undefined1 local_e0 [8];
  undefined *local_d8;
  undefined4 local_d4;
  wchar_t local_d0 [100];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  if (DAT_004139b8 == 0 && DAT_004139bc == 0) {
    local_d8 = &DAT_00403a0c;
    local_d4 = 0;
    uVar1 = RegisterTraceGuidsW(FUN_0040cce0,0,&DAT_00403a1c,1,&local_d8,0,0,local_e0);
    param_2 = (undefined4)((ulonglong)uVar1 >> 0x20);
    if ((int)uVar1 != 0) {
      FUN_0040cf70(local_d0,200,L"**PresentationHost: ETW registration failed, error = %d.\n");
      OutputDebugStringW(local_d0);
      param_2 = extraout_EDX;
    }
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040cce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040cce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == 4) {
    _DAT_004139b8 = GetTraceLoggerHandle(param_4);
    DAT_00413190 = GetTraceEnableLevel(_DAT_004139b8);
  }
  else if (param_1 == 5) {
    _DAT_004139b8 = 0;
  }
  else {
    uVar1 = 0x57;
  }
  return uVar1;
}



/* Function: FUN_0040cd35 */

uint __fastcall FUN_0040cd35(int param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0x2c) = 0x80000;
  *(undefined1 *)(param_1 + 5) = param_2;
  *(undefined **)(param_1 + 0x18) = &DAT_00403a0c;
  *(undefined1 *)(param_1 + 4) = param_3;
  uVar2 = DAT_004139bc;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar1 = DAT_004139b8;
  *(undefined2 *)(param_1 + 6) = 2;
  uVar3 = TraceEvent(uVar1,uVar2,param_1);
  uVar4 = uVar3 & 0xffff | 0x80070000;
  if ((int)uVar3 < 1) {
    uVar4 = uVar3;
  }
  return uVar4;
}



/* Function: FUN_0040cd8e */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040cd8e(undefined4 param_1,undefined1 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined4 extraout_EDX;
  undefined1 auStack_1090 [4];
  short local_108c [2];
  short local_1088 [24];
  undefined1 local_1058 [4172];
  uint local_c;
  
  local_c = DAT_00413140 ^ (uint)auStack_1090;
  memset(local_1088,0,0x30);
  local_1088[0] = 0x30;
  puVar1 = &DAT_00402be8;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  FUN_0040cf20(local_1058,(int)puVar1);
  FUN_0040cec1(local_1058,(int *)local_108c);
  local_1088[0] = local_1088[0] + local_108c[0] + 2;
  FUN_0040cd35((int)local_1088,4,param_2);
  FUN_00410680(local_c ^ (uint)auStack_1090,extraout_EDX);
  return;
}



/* Function: FUN_0040ce23 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0040ce23(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 extraout_EDX;
  short local_1088 [2];
  short local_1084 [24];
  undefined4 local_1054;
  undefined1 local_1050 [4168];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  memset(local_1084,0,0x34);
  local_1084[0] = 0x34;
  puVar1 = &DAT_00402be8;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  FUN_0040cf20(local_1050,(int)puVar1);
  FUN_0040cec1(local_1050,(int *)local_1088);
  local_1084[0] = local_1084[0] + local_1088[0] + 2;
  local_1054 = param_1;
  FUN_0040cd35((int)local_1084,5,0x35);
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040cec1 */

int __thiscall FUN_0040cec1(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (this == (void *)0x0) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    iVar2 = 0x824;
    do {
                    /* WARNING: Load size is inaccurate */
      if (*this == 0) break;
      this = (void *)((int)this + 2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = -0x7ff8ffa9;
    if (iVar2 != 0) {
      iVar3 = 0;
    }
    uVar1 = -(uint)(iVar2 != 0) & 0x824U - iVar2;
  }
  if (param_1 != (int *)0x0) {
    if (iVar3 < 0) {
      *param_1 = 0;
    }
    else {
      *param_1 = uVar1 * 2;
    }
  }
  return iVar3;
}



/* Function: FUN_0040cf20 */

undefined4 __thiscall FUN_0040cf20(void *this,int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0x824;
  iVar5 = param_1 - (int)this;
  do {
    if ((iVar4 == -0x7ffff7da) || (sVar1 = *(short *)(iVar5 + (int)this), sVar1 == 0)) break;
    *(short *)this = sVar1;
    this = (void *)((int)this + 2);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  psVar2 = (short *)((int)this + -2);
  if (iVar4 != 0) {
    psVar2 = (short *)this;
  }
  *psVar2 = 0;
  uVar3 = 0x8007007a;
  if (iVar4 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_0040cf70 */

undefined4 __cdecl FUN_0040cf70(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  uint uVar1;
  uint _Count;
  undefined4 uVar2;
  
  if (param_2 >> 1 == 0) {
    uVar2 = 0x80070057;
  }
  else {
    uVar2 = 0;
    _Count = (param_2 >> 1) - 1;
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



/* Function: FUN_0040d029 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void __fastcall FUN_0040d029(ULONG_PTR param_1,DWORD param_2)

{
  ULONG_PTR local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x40d035;
  local_8 = 0;
  local_20[0] = param_1;
  RaiseException(param_2,0,1,local_20);
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0040d08a */

void __fastcall FUN_0040d08a(undefined4 param_1)

{
  FUN_0040d029(param_1,0x2b);
  return;
}



/* Function: FUN_0040d098 */

void FUN_0040d098(void)

{
  undefined4 unaff_retaddr;
  
  DAT_004139b4 = DAT_004139b4 + 1 & 0x1f;
  *(undefined4 *)(&DAT_004139c0 + DAT_004139b4 * 4) = unaff_retaddr;
  return;
}



/* Function: FUN_0040d0bf */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0040d0bf(void *param_1)

{
  short sVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  short *psVar4;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar6;
  undefined4 extraout_EDX_03;
  DWORD DVar7;
  DWORD DVar8;
  HKEY local_440;
  DWORD local_43c;
  int local_438;
  int local_434;
  HKEY local_430;
  DWORD local_42c;
  WCHAR local_428;
  ushort local_426;
  short local_220;
  undefined1 local_21e [516];
  undefined2 local_1a;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x430;
  local_8 = 0x40d0ce;
  DVar7 = 0;
  local_430 = (HKEY)0x0;
  local_42c = 0;
  LVar2 = RegOpenKeyExW((HKEY)&DAT_80000002,
                        L"SOFTWARE\\Microsoft\\.NETFramework\\Windows Presentation Foundation\\Hosting\\Hosts"
                        ,0,0x20019,&local_430);
  if (LVar2 == 0) {
    local_42c = 0x208;
    LVar2 = RegQueryValueExW(local_430,L"v3.0",(LPDWORD)0x0,&local_43c,(LPBYTE)&local_220,&local_42c
                            );
    if ((LVar2 == 0) && (local_43c == 1)) {
      FUN_0040d6e0(&local_438);
      local_8 = 0;
      FUN_0040d6e0(&local_434);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0040d69d(&local_438,&local_220);
      FUN_0040d69d(&local_434,(short *)0x0);
      local_8 = 2;
      FUN_0040d633(param_1,L"v3.0",&local_438);
      local_8 = 0xffffffff;
      FUN_0040c258(&local_438);
    }
    while( true ) {
      DVar8 = DVar7 + 1;
      LVar2 = RegEnumKeyW(local_430,DVar7,&local_428,0x104);
      if (LVar2 != 0) break;
      iVar3 = tolower((uint)(ushort)local_428);
      DVar7 = DVar8;
      if (((iVar3 == 0x76) && (iVar3 = isdigit((uint)local_426), iVar3 != 0)) ||
         (iVar3 = isdigit((uint)(ushort)local_428), iVar3 != 0)) {
        local_440 = (HKEY)0x0;
        LVar2 = RegOpenKeyExW(local_430,&local_428,0,0x20019,&local_440);
        if (LVar2 == 0) {
          local_42c = 0x208;
          LVar2 = RegQueryValueExW(local_440,(LPCWSTR)0x0,(LPDWORD)0x0,&local_43c,(LPBYTE)&local_220
                                   ,&local_42c);
          if ((LVar2 == 0) && (local_43c == 1)) {
            local_1a = 0;
            FUN_0040d6e0(&local_438);
            FUN_0040d6e0(&local_434);
            psVar4 = &local_220;
            local_8 = 3;
            do {
              sVar1 = *psVar4;
              psVar4 = psVar4 + 1;
            } while (sVar1 != 0);
            FUN_0040d806(&local_438,&local_220,(int)psVar4 - (int)local_21e >> 1);
            local_42c = 0x208;
            LVar2 = RegQueryValueExW(local_440,L"CRT",(LPDWORD)0x0,&local_43c,(LPBYTE)&local_220,
                                     &local_42c);
            if ((LVar2 == 0) && (local_43c == 1)) {
              psVar4 = &local_220;
              local_1a = 0;
              do {
                sVar1 = *psVar4;
                psVar4 = psVar4 + 1;
              } while (sVar1 != 0);
              FUN_0040d806(&local_434,&local_220,(int)psVar4 - (int)local_21e >> 1);
            }
            iVar3 = FUN_0040d633(param_1,&local_428,&local_438);
            if (iVar3 < 0) {
              FUN_0040d098();
              FUN_0040c258(&local_438);
              uVar5 = extraout_ECX_01;
              uVar6 = extraout_EDX_01;
              goto LAB_0040d3b8;
            }
            local_8 = 0xffffffff;
            FUN_0040c258(&local_438);
          }
          RegCloseKey(local_440);
        }
      }
    }
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
    if (LVar2 != 0x103) {
      FUN_0040d098();
      GetLastError();
      uVar5 = extraout_ECX_02;
      uVar6 = extraout_EDX_02;
    }
  }
  else {
    FUN_0040d098();
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
  }
LAB_0040d3b8:
  if (local_430 != (HKEY)0x0) {
    RegCloseKey(local_430);
    uVar5 = extraout_ECX_03;
    uVar6 = extraout_EDX_03;
  }
  FUN_00410b4e(uVar5,uVar6);
  return;
}



/* Function: FUN_0040d3dd */

void __fastcall FUN_0040d3dd(wint_t *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  wint_t wVar1;
  int iVar2;
  wint_t wVar3;
  wint_t *extraout_EDX;
  wint_t *pwVar4;
  uint uVar5;
  int local_14 [4];
  
  local_14[3] = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_14[0] = 0;
  uVar5 = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  wVar1 = *param_1;
  wVar3 = wVar1;
  if (wVar1 == 0x22) {
    wVar3 = param_1[1];
  }
  pwVar4 = param_1 + 1;
  if (wVar1 != 0x22) {
    pwVar4 = param_1;
  }
  iVar2 = local_14[2];
  if ((wVar3 == 0x76) || (wVar3 == 0x56)) {
    pwVar4 = pwVar4 + 1;
    wVar3 = *pwVar4;
  }
  do {
    local_14[2] = iVar2;
    if ((wVar3 == 0) || (2 < uVar5)) {
      *param_2 = local_14[0];
      *param_3 = local_14[1];
LAB_0040d4b6:
      *param_4 = iVar2;
      FUN_00410680(local_14[3] ^ (uint)&stack0xfffffffc,param_1);
      return;
    }
    if (*pwVar4 == 0x2e) {
      uVar5 = uVar5 + 1;
    }
    else {
      iVar2 = iswdigit(*pwVar4);
      param_1 = extraout_EDX;
      if (iVar2 == 0) {
        if (((wVar1 != 0x22) || (*pwVar4 != 0x22)) || (pwVar4 = pwVar4 + 1, *pwVar4 != 0)) {
          iVar2 = 0;
          *param_2 = 0;
          *param_3 = 0;
          goto LAB_0040d4b6;
        }
      }
      else {
        local_14[uVar5] = (uint)*pwVar4 + local_14[uVar5] * 10 + -0x30;
      }
    }
    pwVar4 = pwVar4 + 1;
    wVar3 = *pwVar4;
    iVar2 = local_14[2];
  } while( true );
}



/* Function: FUN_0040d4e4 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

DWORD FUN_0040d4e4(undefined4 *param_1)

{
  HMODULE pHVar1;
  DWORD DVar2;
  int iVar3;
  HMODULE hLibModule;
  DWORD DVar4;
  HMODULE pHVar5;
  FARPROC pFVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  uVar7 = 0;
  local_2c = (undefined4 *)0x0;
  local_28 = 0;
  local_8 = 0;
  if (DAT_00413194 == (HMODULE)0xffffffff) {
    DVar2 = FUN_0040d0bf(&local_2c);
    if ((int)DVar2 < 0) {
      FUN_0040d098();
      goto LAB_0040d61b;
    }
    puVar9 = (undefined4 *)0x0;
    local_1c = 0;
    local_24 = 0;
    puVar8 = local_2c;
    if (local_2c == (undefined4 *)0x0) {
LAB_0040d5dd:
      LOCK();
      if (DAT_00413194 == (HMODULE)0xffffffff) {
        DAT_00413194 = (HMODULE)0x0;
      }
      UNLOCK();
      goto LAB_0040d5ed;
    }
    do {
      iVar3 = FUN_0040d3dd((wint_t *)*puVar8,(int *)local_14,&local_18,&local_20);
      if ((iVar3 != 0) && (3 < local_14[0])) {
        iVar3 = local_14[0] - uVar7;
        if ((iVar3 == 0) && (iVar3 = local_18 - local_1c, iVar3 == 0)) {
          iVar3 = local_20 - local_24;
        }
        if (0 < iVar3) {
          puVar9 = puVar8 + 3;
          local_1c = local_18;
          local_24 = local_20;
          uVar7 = local_14[0];
        }
      }
      puVar8 = (undefined4 *)puVar8[5];
    } while (puVar8 != (undefined4 *)0x0);
    if (puVar9 == (undefined4 *)0x0) goto LAB_0040d5dd;
    if (*(int *)((LPCWSTR)puVar9[1] + -6) != 0) {
      LoadLibraryExW((LPCWSTR)puVar9[1],(HANDLE)0x0,0);
    }
    hLibModule = LoadLibraryExW((LPCWSTR)*puVar9,(HANDLE)0x0,0);
    if (hLibModule != (HMODULE)0x0) {
      pHVar5 = (HMODULE)0xffffffff;
      LOCK();
      pHVar1 = hLibModule;
      if (DAT_00413194 != (HMODULE)0xffffffff) {
        pHVar5 = DAT_00413194;
        pHVar1 = DAT_00413194;
      }
      DAT_00413194 = pHVar1;
      UNLOCK();
      if (pHVar5 != (HMODULE)0xffffffff) {
        FreeLibrary(hLibModule);
      }
      goto LAB_0040d5ed;
    }
  }
  else {
LAB_0040d5ed:
    if (DAT_00413194 == (HMODULE)0x0) {
      *param_1 = 0;
      DVar2 = 1;
      goto LAB_0040d61b;
    }
    pFVar6 = GetProcAddress(DAT_00413194,"ProcessCommandLine");
    *param_1 = pFVar6;
    if (pFVar6 != (FARPROC)0x0) {
      DVar2 = 0;
      goto LAB_0040d61b;
    }
  }
  DVar4 = GetLastError();
  DVar2 = DVar4 & 0xffff | 0x80070000;
  if ((int)DVar4 < 1) {
    DVar2 = DVar4;
  }
LAB_0040d61b:
  FUN_0040c216(&local_2c);
  return DVar2;
}



/* Function: FUN_0040d633 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0040d633(void *this,wchar_t *param_1,undefined4 *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (wchar_t *)0x0) {
    uVar2 = 0x80070057;
    FUN_0040d098();
  }
  else {
    this_00 = FUN_00410077(0x18);
    if (this_00 == (void *)0x0) {
      *(undefined4 *)this = 0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      puVar1 = FUN_0040d740(this_00,*this,param_1,param_2);
      *(undefined4 **)this = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
        return 0;
      }
    }
    FUN_0040d098();
    uVar2 = 0x8007000e;
  }
  return uVar2;
}



/* Function: FUN_0040d69d */

void * __thiscall FUN_0040d69d(void *this,short *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  if (param_1 == (short *)0x0) {
    iVar2 = 0;
  }
  else {
    psVar3 = param_1;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar3 - (int)(param_1 + 1) >> 1;
  }
  FUN_0040d806(this,param_1,iVar2);
  return this;
}



/* Function: FUN_0040d6e0 */

int * __fastcall FUN_0040d6e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004114a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar1 = *(code **)(PTR_PTR_00413070 + 0xc);
  (*(code *)PTR_guard_check_icall_00414398)(DAT_00413140 ^ (uint)&stack0xfffffffc);
  iVar2 = (*pcVar1)();
  *param_1 = iVar2 + 0x10;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_0040d740 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall
FUN_0040d740(void *this,undefined4 param_1,wchar_t *param_2,undefined4 *param_3)

{
  *(undefined4 *)((int)this + 4) = 0x825;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_0040d6e0((int *)((int)this + 0xc));
  FUN_0040d6e0((int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x14) = param_1;
  FUN_0040c4f0(this,param_2);
  FUN_0040d7b0((int *)((int)this + 0xc),param_3);
  FUN_0040d7b0((void *)((int)this + 0x10),param_3 + 1);
  return (undefined4 *)this;
}



/* Function: FUN_0040d7b0 */

int * __thiscall FUN_0040d7b0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  
  pvVar1 = (void *)*param_1;
                    /* WARNING: Load size is inaccurate */
  piVar3 = (int *)(*this + -0x10);
  piVar2 = (int *)((int)pvVar1 + -0x10);
  if (piVar2 != piVar3) {
    if ((*(int *)(*this + -4) < 0) || (*piVar2 != *piVar3)) {
      FUN_0040d806(this,pvVar1,*(int *)((int)pvVar1 + -0xc));
    }
    else {
      piVar2 = FUN_0040d892(piVar2);
      FUN_0040c279(piVar3);
      *(int **)this = piVar2 + 4;
    }
  }
  return (int *)this;
}



/* Function: FUN_0040d806 */

void __thiscall FUN_0040d806(void *this,void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  code *pcVar3;
  rsize_t _DstSize;
  uint uVar4;
  
  if (param_2 == 0) {
    FUN_0040da99((int *)this);
  }
  else {
    if (param_1 == (void *)0x0) {
      FUN_00406f61(0x80070057);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this;
    uVar2 = *(uint *)(iVar1 + -0xc);
    uVar4 = (int)param_1 - iVar1 >> 1;
    if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - param_2) < 0) {
      FUN_0040da09(this,param_2);
    }
    _DstSize = param_2 * 2;
                    /* WARNING: Load size is inaccurate */
    _Dst = *this;
    if (uVar2 < uVar4) {
      memcpy_s(_Dst,_DstSize,param_1,_DstSize);
    }
    else {
      memmove_s(_Dst,_DstSize,(void *)((int)_Dst + uVar4 * 2),_DstSize);
    }
    FUN_0040da66(this,param_2);
  }
  return;
}



/* Function: FUN_0040d892 */

int * __fastcall FUN_0040d892(int *param_1)

{
  rsize_t _DstSize;
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  pcVar1 = *(code **)(*(int *)*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_00414398)();
  puVar2 = (undefined4 *)(*pcVar1)();
  piVar3 = param_1 + 3;
  if ((*piVar3 < 0) || (puVar2 != (undefined4 *)*param_1)) {
    pcVar1 = *(code **)*puVar2;
    (*(code *)PTR_guard_check_icall_00414398)(param_1[1],2);
    piVar3 = (int *)(*pcVar1)();
    if (piVar3 == (int *)0x0) {
      FUN_0040d9ab();
      pcVar1 = (code *)swi(3);
      piVar3 = (int *)(*pcVar1)();
      return piVar3;
    }
    piVar3[1] = param_1[1];
    _DstSize = param_1[1] * 2 + 2;
    memcpy_s(piVar3 + 4,_DstSize,param_1 + 4,_DstSize);
  }
  else {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    piVar3 = param_1;
  }
  return piVar3;
}



/* Function: FUN_0040d911 */

void __thiscall FUN_0040d911(void *this,int param_1)

{
  rsize_t _DstSize;
  void *_Src;
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* WARNING: Load size is inaccurate */
  _Src = *this;
  iVar1 = *(int *)((int)_Src + -0xc);
  pcVar2 = *(code **)(**(int **)((int)_Src + -0x10) + 0x10);
  (*(code *)PTR_guard_check_icall_00414398)();
  puVar3 = (undefined4 *)(*pcVar2)();
  pcVar2 = *(code **)*puVar3;
  (*(code *)PTR_guard_check_icall_00414398)(param_1,2);
  iVar4 = (*pcVar2)();
  if (iVar4 != 0) {
    if (iVar1 < param_1) {
      param_1 = iVar1;
    }
    _DstSize = param_1 * 2 + 2;
    memcpy_s((void *)(iVar4 + 0x10),_DstSize,_Src,_DstSize);
    *(int *)(iVar4 + 4) = iVar1;
    FUN_0040c279((undefined4 *)((int)_Src + -0x10));
    *(void **)this = (void *)(iVar4 + 0x10);
    return;
  }
  FUN_0040d9ab();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_0040d9ab */

void FUN_0040d9ab(void)

{
  FUN_00406f61(0x8007000e);
  return;
}



/* Function: FUN_0040d9bb */

void __thiscall FUN_0040d9bb(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* WARNING: Load size is inaccurate */
  puVar3 = (undefined4 *)(*this + -0x10);
  if ((*(int *)(*this + -8) < param_1) && (0 < param_1)) {
    pcVar1 = *(code **)(*(int *)*puVar3 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(puVar3,param_1,2);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(int *)this = iVar2 + 0x10;
      return;
    }
  }
  FUN_0040d9ab();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040da09 */

void __thiscall FUN_0040da09(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  if (param_1 < *(int *)(iVar1 + -0xc)) {
    param_1 = *(int *)(iVar1 + -0xc);
  }
  if (*(int *)(iVar1 + -4) < 2) {
    iVar1 = *(int *)(iVar1 + -8);
    if (iVar1 < param_1) {
      if (iVar1 < 0x40000001) {
        iVar2 = iVar1 / 2;
      }
      else {
        iVar2 = 0x100000;
      }
      if (param_1 <= iVar2 + iVar1) {
        param_1 = iVar2 + iVar1;
      }
      FUN_0040d9bb(this,param_1);
    }
  }
  else {
    FUN_0040d911(this,param_1);
  }
  return;
}



/* Function: FUN_0040da66 */

void __thiscall FUN_0040da66(void *this,int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Load size is inaccurate */
  if ((-1 < param_1) && (param_1 <= *(int *)(*this + -8))) {
    *(int *)(*this + -0xc) = param_1;
                    /* WARNING: Load size is inaccurate */
    *(undefined2 *)(*this + param_1 * 2) = 0;
    return;
  }
  FUN_00406f61(0x80070057);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040da99 */

void __fastcall FUN_0040da99(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004111a0;
  local_10 = ExceptionList;
  uVar3 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *param_1;
  piVar1 = *(int **)(iVar4 + -0x10);
  if (*(int *)(iVar4 + -0xc) != 0) {
    if (*(int *)(iVar4 + -4) < 0) {
      if (*(int *)(iVar4 + -8) < 0) {
        FUN_00406f61(0x80070057);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(iVar4 + -0xc) = 0;
      *(undefined2 *)*param_1 = 0;
    }
    else {
      FUN_0040c279((undefined4 *)(iVar4 + -0x10));
      pcVar2 = *(code **)(*piVar1 + 0xc);
      (*(code *)PTR_guard_check_icall_00414398)(uVar3);
      iVar4 = (*pcVar2)();
      *param_1 = iVar4 + 0x10;
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040db27 */

DWORD __fastcall FUN_0040db27(LPCWSTR param_1)

{
  int iVar1;
  LPWSTR _Memory;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 extraout_ECX;
  SHELLEXECUTEINFOW local_40;
  
  iVar1 = FUN_0040552d(4);
  if (iVar1 != 0) {
    FUN_0040cd8e(extraout_ECX,0x20,(undefined *)param_1);
  }
  memset(&local_40,0,0x3c);
  _Memory = (LPWSTR)FUN_004100b1(0x208);
  uVar2 = FUN_0040dbcb(_Memory);
  if (-1 < (int)uVar2) {
    local_40.cbSize = 0x3c;
    local_40.fMask = 0x100;
    local_40.nShow = 10;
    local_40.lpFile = _Memory;
    local_40.lpParameters = param_1;
    BVar3 = ShellExecuteExW(&local_40);
    if (BVar3 != 0) goto LAB_0040dbb7;
    DVar4 = GetLastError();
    uVar2 = DVar4 & 0xffff | 0x80070000;
    if ((int)DVar4 < 1) {
      uVar2 = DVar4;
    }
    if (-1 < (int)uVar2) goto LAB_0040dbb7;
  }
  FUN_0040d098();
LAB_0040dbb7:
  free(_Memory);
  return uVar2;
}



/* Function: FUN_0040dbcb */

DWORD __fastcall FUN_0040dbcb(LPWSTR param_1)

{
  HANDLE hProcess;
  DWORD DVar1;
  DWORD DVar2;
  undefined4 extraout_ECX;
  BOOL *Wow64Process;
  BOOL local_c;
  LPWSTR local_8;
  
  Wow64Process = &local_c;
  local_c = 0;
  local_8 = param_1;
  hProcess = GetCurrentProcess();
  IsWow64Process(hProcess,Wow64Process);
  if (local_c == 0) {
    local_8 = (LPWSTR)0x0;
    DVar1 = SHGetKnownFolderPath(&DAT_004028f8,0,0,&local_8);
    if ((int)DVar1 < 0) goto LAB_0040dc7e;
    DVar1 = FUN_00404d7c(param_1,0x104,(int)local_8);
    CoTaskMemFree(local_8);
    if ((int)DVar1 < 0) goto LAB_0040dc7e;
    DVar1 = PathCchAppend(param_1,0x104,L"Internet Explorer");
LAB_0040dc67:
    if ((int)DVar1 < 0) goto LAB_0040dc7e;
  }
  else {
    DVar1 = ExpandEnvironmentStringsW(L"%ProgramW6432%\\Internet Explorer",param_1,0x104);
    if (DVar1 == 0) {
      DVar2 = GetLastError();
      DVar1 = DVar2 & 0xffff | 0x80070000;
      if ((int)DVar2 < 1) {
        DVar1 = DVar2;
      }
      goto LAB_0040dc67;
    }
  }
  DVar1 = PathCchAppend(param_1,0x104,L"IEXPLORE.EXE");
  if (-1 < (int)DVar1) {
    return DVar1;
  }
LAB_0040dc7e:
  FUN_0040d098();
  FUN_00404e18(param_1,1,extraout_ECX,0x402be8);
  return DVar1;
}



/* Function: FUN_0040dca1 */

int __thiscall FUN_0040dca1(void *this,undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((param_2 == (undefined4 *)0x0) || (*param_2 = 0, this == (void *)0x0)) {
    FUN_0040d098();
    return -0x7ff8ffa9;
  }
                    /* WARNING: Load size is inaccurate */
  pcVar1 = (code *)**this;
  (*(code *)PTR_guard_check_icall_00414398)(this,&DAT_00402814,&local_8);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    pcVar1 = *(code **)(*local_8 + 0xc);
    (*(code *)PTR_guard_check_icall_00414398)(local_8,&DAT_004027b4,&DAT_004027c4,param_2);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) goto LAB_0040dd0f;
  }
  FUN_0040d098();
LAB_0040dd0f:
  if (local_8 != (int *)0x0) {
    pcVar1 = *(code **)(*local_8 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(local_8);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_0040dd40 */

void FUN_0040dd40(void)

{
  BOOL BVar1;
  HANDLE hProcess;
  UINT uExitCode;
  
  BVar1 = IsDebuggerPresent();
  if (BVar1 == 0) {
    uExitCode = 8;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  return;
}



/* Function: FUN_0040dd62 */

DWORD FUN_0040dd62(LPCWSTR param_1,LPBYTE param_2,undefined4 param_3)

{
  LSTATUS LVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD local_10 [2];
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  *(undefined4 *)param_2 = param_3;
  if (param_1 == (LPCWSTR)0x0) {
    FUN_0040d098();
    return 0x80070057;
  }
  LVar1 = RegOpenKeyExW((HKEY)&DAT_80000002,
                        L"SOFTWARE\\Microsoft\\.NETFramework\\Windows Presentation Foundation\\Hosting"
                        ,0,0x20019,&local_8);
  if (LVar1 == 2) {
LAB_0040dda9:
    DVar3 = 1;
  }
  else {
    if (LVar1 == 0) {
      local_10[1] = 4;
      local_10[0] = 4;
      LVar1 = RegQueryValueExW(local_8,param_1,(LPDWORD)0x0,local_10,param_2,local_10 + 1);
      if (LVar1 == 2) goto LAB_0040dda9;
      DVar3 = 0;
      if (LVar1 == 0) goto LAB_0040ddf3;
    }
    FUN_0040d098();
    DVar2 = GetLastError();
    DVar3 = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      DVar3 = DVar2;
    }
  }
LAB_0040ddf3:
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return DVar3;
}



/* Function: FUN_0040de10 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040de10(LPCWSTR param_1,int *param_2)

{
  HRESULT HVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  DWORD local_1058;
  WCHAR local_1054 [2086];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_1058 = 0x824;
  FUN_0040c63b(param_2);
  if (param_1 == (LPCWSTR)0x0) {
    FUN_0040d098();
    uVar2 = extraout_EDX;
  }
  else {
    HVar1 = CoInternetParseUrl(param_1,PARSE_URL_FROM_PATH,0,local_1054,0x825,&local_1058,0);
    if (HVar1 == 0) {
      FUN_0040c4f0(param_2,local_1054);
      uVar2 = extraout_EDX_00;
    }
    else {
      FUN_0040c4f0(param_2,param_1);
      uVar2 = extraout_EDX_01;
    }
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040dea6 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0040dea6(short *param_1,int *param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_34f0;
  undefined2 *local_34ec;
  undefined4 local_34e8;
  int local_34e4;
  undefined2 *local_34e0;
  undefined4 local_34dc;
  undefined2 local_34d8;
  undefined2 *local_34d4;
  undefined4 local_34d0;
  undefined2 *local_34cc;
  undefined4 local_34c8;
  WCHAR *local_34c4;
  undefined4 local_34c0;
  undefined2 *local_34bc;
  undefined4 local_34b8;
  int local_34b4 [2];
  WCHAR local_34ac [2086];
  undefined2 local_2460 [2050];
  WCHAR local_145c [2050];
  undefined2 local_458 [258];
  undefined2 local_254 [130];
  undefined2 local_150 [130];
  undefined2 local_4c [34];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  FUN_0040c63b(param_2);
  local_34e4 = -1;
  local_4c[0] = 0;
  local_458[0] = 0;
  local_150[0] = 0;
  local_254[0] = 0;
  local_145c[0] = L'\0';
  local_2460[0] = 0;
  local_34ec = local_4c;
  local_34e0 = local_458;
  local_34d8 = 0;
  local_34d4 = local_150;
  local_34cc = local_254;
  local_34c4 = local_145c;
  local_34d0 = 0x80;
  local_34c8 = 0x80;
  local_34bc = local_2460;
  local_34f0 = 0x3c;
  local_34e8 = 0x20;
  local_34dc = 0x100;
  local_34c0 = 0x800;
  local_34b8 = 0x800;
  if (param_1 == (short *)0x0) {
    FUN_0040d098();
    uVar4 = extraout_EDX;
    goto LAB_0040e03d;
  }
  iVar1 = FUN_0040cbbf(param_1,0x824,local_34b4);
  if (iVar1 < 0) {
LAB_0040dfb7:
    FUN_0040d098();
    uVar4 = extraout_EDX_00;
  }
  else {
    iVar1 = InternetCrackUrlW(param_1,local_34b4[0],0,&local_34f0);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      uVar5 = DVar2 & 0xffff | 0x80070000;
      if ((int)DVar2 < 1) {
        uVar5 = DVar2;
      }
      if ((int)uVar5 < 0) goto LAB_0040dfb7;
    }
    local_34b4[1] = 0x824;
    if (local_34e4 == 5) {
      DVar2 = CoInternetParseUrl(local_34c4,PARSE_URL_FROM_PATH,0,local_34ac,0x825,
                                 (DWORD *)(local_34b4 + 1),0);
LAB_0040e02b:
      if ((int)DVar2 < 0) goto LAB_0040dfb7;
    }
    else {
      local_34b8 = 0;
      local_34bc = (undefined2 *)0x0;
      local_34d0 = 0;
      local_34d4 = (undefined2 *)0x0;
      local_34c8 = 0;
      local_34cc = (undefined2 *)0x0;
      iVar1 = InternetCreateUrlW(&local_34f0,0x80000000,local_34ac,local_34b4 + 1);
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        DVar2 = DVar3 & 0xffff | 0x80070000;
        if ((int)DVar3 < 1) {
          DVar2 = DVar3;
        }
        goto LAB_0040e02b;
      }
    }
    FUN_0040c4f0(param_2,local_34ac);
    uVar4 = extraout_EDX_01;
  }
LAB_0040e03d:
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040e0b0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040e0b0(LPCWSTR param_1,wchar_t *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  wchar_t *pwVar2;
  HANDLE hFindFile;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int local_3418 [3];
  short *local_340c;
  undefined4 local_3408;
  undefined4 local_3404;
  undefined4 local_3400;
  undefined4 local_33fc;
  undefined4 local_33f8;
  undefined4 local_33f4;
  LPCWSTR local_33f0;
  undefined4 local_33ec;
  undefined4 local_33e8;
  int *local_33e4;
  int *local_33e0;
  int *local_33dc;
  int *local_33d8;
  _WIN32_FIND_DATAW local_33d4;
  wchar_t local_3184 [2088];
  wchar_t local_2134 [2088];
  wchar_t local_10e4 [2088];
  wchar_t local_94 [64];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004119a4;
  local_10 = ExceptionList;
  local_14 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_33d8 = param_4;
  local_33dc = param_5;
  local_33e4 = param_3;
  local_33e0 = param_6;
  iVar1 = FUN_0040552d(4);
  if (iVar1 != 0) {
    pwVar2 = param_1;
    if (param_2 != (wchar_t *)0x0) {
      pwVar2 = param_2;
    }
    FUN_0040cd8e(extraout_ECX,0x28,(undefined *)pwVar2);
  }
  FUN_0040c63b(param_3);
  FUN_0040c63b(local_33d8);
  FUN_0040c63b(local_33dc);
  FUN_0040c63b(local_33e0);
  local_33ec = 0x825;
  local_33f0 = (LPCWSTR)0x0;
  local_33e8 = 0;
  local_3418[1] = 0x825;
  local_3418[0] = 0;
  local_3418[2] = 0;
  local_3408 = 0x825;
  local_340c = (short *)0x0;
  local_3404 = 0;
  local_8 = 2;
  if (param_1 == (LPCWSTR)0x0) {
    FUN_0040d098();
  }
  else {
    iVar1 = FUN_0040de10(param_1,(int *)&local_340c);
    if (((iVar1 < 0) || (iVar1 = FUN_0040dea6(local_340c,local_3418), iVar1 < 0)) ||
       (param_2 == (wchar_t *)0x0)) {
      FUN_0040d098();
    }
    else {
      FUN_0040c4f0(&local_33f0,param_2);
      hFindFile = FindFirstFileW(local_33f0,&local_33d4);
      if ((hFindFile == (HANDLE)0xffffffff) ||
         ((local_33d4.nFileSizeHigh == 0 && (local_33d4.nFileSizeLow == 0)))) {
        FUN_0040d098();
        if (hFindFile == (HANDLE)0xffffffff) goto LAB_0040e367;
      }
      else {
        hModule = LoadLibraryExW(L"dfshim.dll",(HANDLE)0x0,0);
        if (hModule == (HMODULE)0x0) {
          FUN_0040d098();
        }
        else {
          pFVar3 = GetProcAddress(hModule,"GetDeploymentDataFromManifest");
          if (pFVar3 == (FARPROC)0x0) {
            FUN_0040d098();
          }
          else {
            local_33fc = 0x40;
            local_3400 = 0x825;
            local_33f8 = 0x825;
            local_33f4 = 0x825;
            (*(code *)PTR_guard_check_icall_00414398)
                      (local_3418[0],local_33f0,local_10e4,&local_3400,local_94,&local_33fc,
                       local_2134,&local_33f8,local_3184,&local_33f4);
            iVar1 = (*pFVar3)();
            if (iVar1 < 0) {
              FUN_0040d098();
            }
            else {
              FUN_0040c4f0(local_33e4,local_10e4);
              FUN_0040c4f0(local_33d8,local_94);
              FUN_0040c4f0(local_33dc,local_2134);
              FUN_0040c4f0(local_33e0,local_3184);
              iVar1 = FUN_0040552d(4);
              if (iVar1 != 0) {
                FUN_0040cd8e(extraout_ECX_00,0x29,(undefined *)local_33f0);
              }
            }
          }
          FreeLibrary(hModule);
        }
      }
      FindClose(hFindFile);
    }
  }
LAB_0040e367:
  FUN_0040c63b((int *)&local_340c);
  FUN_0040c63b(local_3418);
  FUN_0040c63b((int *)&local_33f0);
  ExceptionList = local_10;
  FUN_00410680(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040e3ac */

void FUN_0040e3ac(void *param_1)

{
  LSTATUS LVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar2;
  undefined4 extraout_EDX_04;
  DWORD dwIndex;
  DWORD DVar3;
  int *local_42c;
  DWORD local_428 [3];
  HKEY local_41c;
  WCHAR local_418 [260];
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_41c = (HKEY)0x0;
  LVar1 = RegOpenKeyExW((HKEY)&DAT_80000002,
                        L"SOFTWARE\\Microsoft\\.NETFramework\\Windows Presentation Foundation\\Namespaces"
                        ,0,0x20019,&local_41c);
  uVar2 = extraout_EDX;
  if (LVar1 != 2) {
    if (LVar1 == 0) {
      local_428[2] = 1;
      dwIndex = 0;
      while( true ) {
        local_428[0] = 0x104;
        local_428[1] = 0x208;
        DVar3 = dwIndex + 1;
        LVar1 = RegEnumValueW(local_41c,dwIndex,local_418,local_428,(LPDWORD)0x0,local_428 + 2,
                              (LPBYTE)local_210,local_428 + 1);
        if (LVar1 != 0) break;
        dwIndex = DVar3;
        if (local_428[2] == 1) {
          local_42c = FUN_0040c5e6(local_210);
          if (local_42c == (int *)0x0) {
            FUN_0040d098();
            uVar2 = extraout_EDX_02;
            goto LAB_0040e4d6;
          }
          FUN_0040e75d(param_1,local_418,&local_42c);
        }
      }
      uVar2 = extraout_EDX_01;
      if (LVar1 != 0x103) {
        FUN_0040d098();
        GetLastError();
        uVar2 = extraout_EDX_03;
      }
    }
    else {
      FUN_0040d098();
      GetLastError();
      uVar2 = extraout_EDX_00;
    }
  }
LAB_0040e4d6:
  if (local_41c != (HKEY)0x0) {
    RegCloseKey(local_41c);
    uVar2 = extraout_EDX_04;
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040e503 */

void __fastcall FUN_0040e503(HANDLE param_1)

{
  SetEvent(param_1);
  PostMessageW((HWND)0x0,0x4e,1,0);
  return;
}



/* Function: FUN_0040e521 */

DWORD __fastcall FUN_0040e521(HANDLE param_1)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  DWORD DVar2;
  undefined4 *TokenInformation;
  PUCHAR pUVar3;
  PDWORD pDVar4;
  DWORD DVar5;
  HANDLE local_c;
  HANDLE local_8;
  
  DVar5 = 0xffffffff;
  local_c = param_1;
  local_8 = param_1;
  ProcessHandle = OpenProcess(0x400,0,(DWORD)param_1);
  if (ProcessHandle != (HANDLE)0x0) {
    local_8 = (HANDLE)0x0;
    BVar1 = OpenProcessToken(ProcessHandle,0x18,&local_8);
    if (BVar1 != 0) {
      BVar1 = GetTokenInformation(local_8,TokenIntegrityLevel,(LPVOID)0x0,0,(PDWORD)&local_c);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 == 0x7a) {
          TokenInformation = (undefined4 *)LocalAlloc(0,(SIZE_T)local_c);
          if (TokenInformation != (undefined4 *)0x0) {
            BVar1 = GetTokenInformation(local_8,TokenIntegrityLevel,TokenInformation,(DWORD)local_c,
                                        (PDWORD)&local_c);
            if (BVar1 != 0) {
              pUVar3 = GetSidSubAuthorityCount((PSID)*TokenInformation);
              pDVar4 = GetSidSubAuthority((PSID)*TokenInformation,(uint)(byte)(*pUVar3 - 1));
              DVar5 = *pDVar4;
            }
            LocalFree(TokenInformation);
          }
        }
      }
      CloseHandle(local_8);
    }
    CloseHandle(ProcessHandle);
  }
  return DVar5;
}



/* Function: FUN_0040e5e0 */

void FUN_0040e5e0(void)

{
  DWORD DVar1;
  HLOCAL lpData;
  BOOL BVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar4;
  uint local_274;
  void *local_270;
  LPVOID local_26c;
  WCHAR local_268 [260];
  wchar_t local_60 [44];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  DVar1 = GetModuleFileNameW((HMODULE)0x0,local_268,0x104);
  uVar4 = extraout_EDX;
  if (((DVar1 != 0) &&
      (DVar1 = GetFileVersionInfoSizeW(local_268,(LPDWORD)0x0), uVar4 = extraout_EDX_00, DVar1 != 0)
      ) && (lpData = LocalAlloc(0x40,DVar1), uVar4 = extraout_EDX_01, lpData != (HLOCAL)0x0)) {
    BVar2 = GetFileVersionInfoW(local_268,0,DVar1,lpData);
    if (BVar2 != 0) {
      local_26c = (LPVOID)0x0;
      BVar2 = VerQueryValueW(lpData,L"\\",&local_26c,&local_274);
      if ((BVar2 != 0) && (iVar3 = FUN_00404db1(local_60,0x2c,L"%d.%d.%d.%d"), -1 < iVar3)) {
        FUN_0040c4f0(local_270,local_60);
      }
    }
    LocalFree(lpData);
    uVar4 = extraout_EDX_02;
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040e6ef */

int __fastcall
FUN_0040e6ef(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,void *param_6)

{
  code *pcVar1;
  int iVar2;
  int extraout_EDX;
  void *local_c;
  int local_8;
  
  local_c = (void *)0x0;
  local_8 = 0;
  if (param_1 == (int *)0x0) {
    FUN_0040d098();
    iVar2 = -0x7ff8ffa9;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x38);
    (*(code *)PTR_guard_check_icall_00414398)
              (param_1,param_2,param_3,param_4,param_5,&local_c,&local_8);
    iVar2 = (*pcVar1)();
    if ((-1 < iVar2) && (iVar2 = FUN_0040c569(param_6,local_c,local_8), -1 < iVar2)) {
      return iVar2;
    }
    FUN_0040d098();
    iVar2 = extraout_EDX;
  }
  return iVar2;
}



/* Function: FUN_0040e75d */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0040e75d(void *this,wchar_t *param_1,undefined4 *param_2)

{
  undefined4 *this_00;
  undefined4 uVar1;
  
  if (param_1 == (wchar_t *)0x0) {
    uVar1 = 0x80070057;
    FUN_0040d098();
  }
  else {
    this_00 = (undefined4 *)FUN_00410077(0x14);
    if (this_00 == (undefined4 *)0x0) {
      *(undefined4 *)this = 0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      uVar1 = *this;
      this_00[1] = 0x825;
      *this_00 = 0;
      this_00[2] = 0;
      this_00[4] = uVar1;
      FUN_0040c4f0(this_00,param_1);
      this_00[3] = *param_2;
      *(undefined4 **)this = this_00;
      if (this_00 != (undefined4 *)0x0) {
        *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
        return 0;
      }
    }
    FUN_0040d098();
    uVar1 = 0x8007000e;
  }
  return uVar1;
}



/* Function: FUN_0040e7e1 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall FUN_0040e7e1(void *this,wchar_t *param_1,wchar_t *param_2)

{
  *(undefined ***)this = &PTR_FUN_00401638;
  *(undefined ***)((int)this + 4) = &PTR_FUN_0040160c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x825;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x825;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x825;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x825;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x825;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  FUN_0040c4f0((undefined4 *)((int)this + 0xc),param_1);
  FUN_0040c4f0((void *)((int)this + 0x18),param_2);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_0040e870 */

undefined4 FUN_0040e870(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  *param_3 = 0;
  do {
    piVar4 = param_1;
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_004026e4)[iVar5]) {
      iVar5 = 0;
      goto LAB_0040e8a1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  goto LAB_0040e8dd;
  while (iVar5 = iVar5 + 1, iVar5 != 4) {
LAB_0040e8a1:
    if (*(int *)(param_2 + iVar5 * 4) != (&DAT_00403cc0)[iVar5]) goto LAB_0040e8c2;
  }
  goto LAB_0040e8dd;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_0040e8c2:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_00403cb0)[iVar3]) goto LAB_0040e8f7;
  }
  piVar4 = (int *)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 1));
LAB_0040e8dd:
  *param_3 = piVar4;
  if (piVar4 == (int *)0x0) {
LAB_0040e8f7:
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00414398)(param_1);
    (*pcVar1)();
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0040e910 */

int FUN_0040e910(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* Function: FUN_0040e930 */

int FUN_0040e930(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 2;
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    FUN_00405897(param_1);
    free(param_1);
    iVar2 = 0;
  }
  return iVar2;
}



/* Function: FUN_0040e960 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e960(int param_1,undefined4 param_2,undefined4 param_3,void *param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int *param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int local_5c [3];
  int *local_50;
  int local_4c [3];
  wchar_t *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34 [2];
  wchar_t local_30 [2];
  wchar_t awStack_2c [2];
  wchar_t awStack_28 [2];
  wchar_t awStack_24 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_50 = param_8;
  local_5c[1] = 0x825;
  local_5c[0] = 0;
  local_5c[2] = 0;
  local_4c[1] = 0x825;
  local_4c[0] = 0;
  local_4c[2] = 0;
  local_3c = 0x825;
  local_40 = (wchar_t *)0x0;
  local_38 = 0;
  local_8 = 2;
  local_34[0] = 0;
  local_20 = _DAT_00403be8;
  uStack_1c = DAT_00403bec;
  uStack_18 = DAT_00403bf0;
  local_30 = (wchar_t  [2])u_version_00403bf4._0_4_;
  awStack_2c = (wchar_t  [2])u_version_00403bf4._4_4_;
  awStack_28 = (wchar_t  [2])u_version_00403bf4._8_4_;
  awStack_24 = (wchar_t  [2])u_version_00403bf4._12_4_;
  iVar2 = FUN_0040c569(local_5c,param_4,param_5);
  if (-1 < iVar2) {
    uVar3 = FUN_0040ed8d(local_5c,(ushort *)L"assemblyIdentity");
    piVar1 = local_50;
    if ((char)uVar3 == '\0') goto LAB_0040ea89;
    iVar2 = FUN_0040e6ef(local_50,local_34,0,&local_20,4,local_4c);
    if (-1 < iVar2) {
      uVar3 = FUN_0040ed8d(local_4c,(ushort *)L"WindowsBase");
      if ((char)uVar3 == '\0') {
        uVar3 = FUN_0040ed8d(local_4c,(ushort *)L"Microsoft.Windows.CommonLanguageRuntime");
        if ((char)uVar3 == '\0') goto LAB_0040ea73;
        iVar2 = FUN_0040e6ef(piVar1,local_34,0,local_30,7,&local_40);
        if (-1 < iVar2) {
          this = (void *)(param_1 + 0x3c);
          goto LAB_0040ea6b;
        }
      }
      else {
        iVar2 = FUN_0040e6ef(piVar1,local_34,0,local_30,7,&local_40);
        if (-1 < iVar2) {
          this = (void *)(param_1 + 0x30);
LAB_0040ea6b:
          FUN_0040c4f0(this,local_40);
LAB_0040ea73:
          if ((*(int *)(param_1 + 0x30) == 0) || (*(int *)(param_1 + 0x3c) == 0)) goto LAB_0040ea89;
        }
      }
    }
  }
  FUN_0040d098();
LAB_0040ea89:
  FUN_0040c63b((int *)&local_40);
  FUN_0040c63b(local_4c);
  FUN_0040c63b(local_5c);
  FUN_00410b4e(extraout_ECX,extraout_EDX);
  return;
}



/* Function: FUN_0040eab1 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040eab1(int param_1)

{
  code *pcVar1;
  int *piVar2;
  HRESULT HVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined2 local_12a4 [26];
  DWORD local_1270;
  int local_126c;
  int *local_1268;
  WCHAR local_1264 [2088];
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  local_1268 = (int *)0x0;
  local_1270 = 0;
  HVar3 = CoInternetCombineUrl
                    (*(LPCWSTR *)(param_1 + 0xc),*(LPCWSTR *)(param_1 + 0x18),0,local_1264,0x824,
                     &local_1270,0);
  if ((-1 < HVar3) && (iVar4 = FUN_0040c4f0((void *)(param_1 + 0x24),local_1264), -1 < iVar4)) {
    iVar4 = FUN_0040552d(4);
    if (iVar4 != 0) {
      FUN_0040cd8e(extraout_ECX,0x2a,(undefined *)local_1264);
    }
    HVar3 = CoCreateInstance((IID *)&DAT_004027d4,(LPUNKNOWN)0x0,1,(IID *)&DAT_00402724,
                             (LPVOID *)(param_1 + 0x4c));
    if (-1 < HVar3) {
      piVar2 = *(int **)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x48) = 0;
      pcVar1 = *(code **)(*piVar2 + 0x14);
      (*(code *)PTR_guard_check_icall_00414398)
                (piVar2,*(undefined4 *)(param_1 + 0xc),(undefined4 *)(param_1 + 0x48),0);
      iVar4 = (*pcVar1)();
      if (-1 < iVar4) {
        local_126c = 0;
        pcVar1 = *(code **)(**(int **)(param_1 + 0x4c) + 0x14);
        (*(code *)PTR_guard_check_icall_00414398)
                  (*(int **)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x24),&local_126c,0);
        iVar4 = (*pcVar1)();
        if ((((-1 < iVar4) && (*(int *)(param_1 + 0x48) == local_126c)) &&
            (HVar3 = URLDownloadToCacheFileW
                               ((LPUNKNOWN)0x0,*(LPCWSTR *)(param_1 + 0x24),local_214,0x104,0,
                                (LPBINDSTATUSCALLBACK)(-(uint)(param_1 != 0) & param_1 + 4U)),
            -1 < HVar3)) &&
           (HVar3 = CoCreateInstance((IID *)&DAT_00403c90,(LPUNKNOWN)0x0,1,(IID *)&DAT_00403ca0,
                                     &local_1268), -1 < HVar3)) {
          pcVar1 = *(code **)(*local_1268 + 0x28);
          (*(code *)PTR_guard_check_icall_00414398)(local_1268,param_1);
          iVar4 = (*pcVar1)();
          if (-1 < iVar4) {
            pcVar1 = *(code **)(*local_1268 + 0x50);
            (*(code *)PTR_guard_check_icall_00414398)(local_1268,local_214);
            (*pcVar1)();
            iVar4 = FUN_0040552d(4);
            uVar5 = extraout_EDX_00;
            if (iVar4 != 0) {
              memset(local_12a4,0,0x30);
              local_12a4[0] = 0x30;
              FUN_0040cd35((int)local_12a4,4,0x2b);
              uVar5 = extraout_EDX_01;
            }
            goto LAB_0040eca1;
          }
        }
      }
    }
  }
  FUN_0040d098();
  uVar5 = extraout_EDX;
LAB_0040eca1:
  if (local_1268 != (int *)0x0) {
    pcVar1 = *(code **)(*local_1268 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(local_1268);
    (*pcVar1)();
    local_1268 = (int *)0x0;
    uVar5 = extraout_EDX_02;
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(piVar2);
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
    uVar5 = extraout_EDX_03;
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,uVar5);
  return;
}



/* Function: FUN_0040ed00 */

undefined4 FUN_0040ed00(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0x24) = 0x20000;
  return 0;
}



/* Function: FUN_0040ed20 */

int FUN_0040ed20(int param_1,undefined4 param_2,undefined4 param_3,int param_4,wchar_t *param_5)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  iVar2 = 0;
  if (param_4 == 3) {
    FUN_0040c4f0((undefined4 *)(param_1 + 0x20),param_5);
    local_8 = 0;
    pcVar1 = *(code **)(**(int **)(param_1 + 0x48) + 0x14);
    (*(code *)PTR_guard_check_icall_00414398)
              (*(int **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x20),&local_8,0);
    iVar2 = (*pcVar1)();
    if ((iVar2 < 0) || (iVar2 = -0x7fffbffb, *(int *)(param_1 + 0x44) != local_8)) {
      FUN_0040d098();
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* Function: FUN_0040ed8d */

undefined4 __thiscall FUN_0040ed8d(void *this,ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  bool bVar3;
  
                    /* WARNING: Load size is inaccurate */
  puVar2 = *this;
  if (puVar2 == (ushort *)0x0) {
    puVar2 = (ushort *)0x0;
  }
  else {
    do {
      uVar1 = *puVar2;
      bVar3 = uVar1 < *param_1;
      if (uVar1 != *param_1) {
LAB_0040edc1:
        puVar2 = (ushort *)(-(uint)bVar3 | 1);
        param_1 = puVar2;
        goto LAB_0040edce;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar2[1];
      bVar3 = uVar1 < param_1[1];
      if (uVar1 != param_1[1]) goto LAB_0040edc1;
      puVar2 = puVar2 + 2;
      param_1 = param_1 + 2;
    } while (uVar1 != 0);
    puVar2 = (ushort *)0x0;
    param_1 = puVar2;
  }
LAB_0040edce:
  return CONCAT31((int3)((uint)puVar2 >> 8),param_1 == (ushort *)0x0);
}



/* Function: FUN_0040eddb */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall FUN_0040eddb(void *this,wchar_t *param_1,wchar_t *param_2)

{
  *(undefined4 *)((int)this + 4) = 0x825;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x825;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x825;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x825;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x825;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x825;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x825;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  FUN_0040c4f0((undefined4 *)((int)this + 0x18),param_2);
  FUN_0040c4f0(this,param_1);
  return (undefined4 *)this;
}



/* Function: FUN_0040ee5c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall FUN_0040ee5c(void *this,wchar_t *param_1)

{
  *(undefined ***)this = &PTR_FUN_004015d4;
  *(undefined4 *)((int)this + 8) = 0x825;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  FUN_0040c4f0((undefined4 *)((int)this + 4),param_1);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_0040eec0 */

undefined4 FUN_0040eec0(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  *param_3 = 0;
  do {
    if (*(int *)(param_2 + iVar4 * 4) != (&DAT_004026e4)[iVar4]) goto LAB_0040eef4;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  goto LAB_0040ef02;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_0040eef4:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_00403cc0)[iVar3]) goto LAB_0040ef20;
  }
LAB_0040ef02:
  *param_3 = param_1;
  if (param_1 == (int *)0x0) {
LAB_0040ef20:
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00414398)(param_1);
    (*pcVar1)();
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0040ef40 */

int FUN_0040ef40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 4;
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    FUN_0040591b(param_1);
    free(param_1);
    iVar2 = 0;
  }
  return iVar2;
}



/* Function: FUN_0040ef70 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_0040ef70(int param_1,short *param_2,int param_3,void *param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int *this;
  int iVar3;
  short *psVar4;
  wchar_t *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_20 = 0x825;
  local_24 = (wchar_t *)0x0;
  local_1c = 0;
  local_8 = 0;
  if (param_3 == -1) {
    psVar4 = param_2;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    param_3 = (int)psVar4 - (int)(param_2 + 1) >> 1;
  }
  iVar2 = FUN_0040c569(&local_24,param_2,param_3);
  if (-1 < iVar2) {
    this = FUN_0040c5e6((wchar_t *)0x0);
    local_14[0] = this;
    if (this == (int *)0x0) {
      FUN_0040d098();
      iVar2 = -0x7ff8fff2;
      goto LAB_0040f019;
    }
    iVar2 = FUN_0040c569(this,param_4,param_5);
    if (-1 < iVar2) {
      iVar3 = FUN_00406d49((void *)(param_1 + 0x1c),(wchar_t *)*this,&local_18);
      if (-1 < iVar3) {
        iVar2 = FUN_0040e75d((void *)(param_1 + 0x24),local_24,local_14);
      }
      goto LAB_0040f019;
    }
  }
  FUN_0040d098();
LAB_0040f019:
  FUN_0040c63b((int *)&local_24);
  return iVar2;
}



/* Function: FUN_0040f040 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0040f040(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  ushort uVar7;
  undefined4 extraout_EDX;
  ushort *puVar8;
  int *in_stack_00000020;
  ushort *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 *local_118;
  wchar_t local_114 [134];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x11c;
  local_120 = param_1;
  local_128 = 0x825;
  local_12c = (ushort *)0x0;
  local_124 = 0;
  local_8 = 0;
  iVar3 = FUN_0040e6ef(in_stack_00000020,
                       L"http://schemas.openxmlformats.org/markup-compatibility/2006",0x3b,
                       L"Ignorable",9,&local_12c);
  if (-1 < iVar3) {
    uVar7 = *local_12c;
    puVar8 = local_12c;
    iVar3 = local_120;
    while (local_120 = iVar3, uVar7 != 0) {
      uVar4 = (uint)uVar7;
      do {
        if ((short)uVar4 != 0x20) break;
        puVar8 = puVar8 + 1;
        uVar4 = (uint)*puVar8;
      } while (*puVar8 != 0);
      uVar7 = (ushort)uVar4;
      for (uVar6 = 0; ((uVar7 != 0 && ((wchar_t)uVar4 != L' ')) && (uVar6 < 0x7f));
          uVar6 = uVar6 + 1) {
        puVar8 = puVar8 + 1;
        local_114[uVar6] = (wchar_t)uVar4;
        uVar7 = *puVar8;
        uVar4 = (uint)uVar7;
      }
      if (0xff < uVar6 * 2) {
        FUN_00410981(uVar6 * 2,uVar4);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_114[uVar6] = L'\0';
      if (local_114[0] != L'\0') {
        local_118 = (undefined4 *)0x0;
        iVar5 = FUN_00406d49((void *)(iVar3 + 0x24),local_114,&local_118);
        puVar2 = local_118;
        if (-1 < iVar5) {
          local_11c = 0;
          iVar5 = FUN_00406d49((void *)(iVar3 + 0x1c),(wchar_t *)*local_118,&local_11c);
          if ((-1 < iVar5) &&
             (iVar3 = FUN_0040e75d((void *)(iVar3 + 0x2c),(wchar_t *)*puVar2,&local_11c), iVar3 < 0)
             ) break;
        }
      }
      iVar3 = local_120;
      uVar7 = *puVar8;
    }
  }
  FUN_0040d098();
  FUN_0040c63b((int *)&local_12c);
  FUN_00410b4e(extraout_ECX,extraout_EDX);
  return;
}



/* Function: FUN_0040f1b1 */

int __fastcall FUN_0040f1b1(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 local_3c [26];
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar2 = FUN_0040552d(4);
  if (iVar2 != 0) {
    memset(local_3c,0,0x30);
    local_3c[0] = 0x30;
    FUN_0040cd35((int)local_3c,4,0x2c);
  }
  iVar2 = FUN_0040e3ac((void *)(param_1 + 0x1c));
  if (-1 < iVar2) {
    if (*(int *)(param_1 + 0x20) == 0) {
LAB_0040f269:
      iVar3 = FUN_0040552d(4);
      if (iVar3 != 0) {
        memset(local_3c,0,0x30);
        local_3c[0] = 0x30;
        FUN_0040cd35((int)local_3c,4,0x2d);
      }
      goto LAB_0040f295;
    }
    iVar2 = CoCreateInstance((IID *)&DAT_00403c90,(LPUNKNOWN)0x0,1,(IID *)&DAT_00403ca0,&local_8);
    if (-1 < iVar2) {
      pcVar1 = *(code **)(*local_8 + 0x28);
      (*(code *)PTR_guard_check_icall_00414398)(local_8,param_1);
      iVar2 = (*pcVar1)();
      if (-1 < iVar2) {
        pcVar1 = *(code **)(*local_8 + 0x50);
        (*(code *)PTR_guard_check_icall_00414398)(local_8,*(undefined4 *)(param_1 + 4));
        iVar2 = (*pcVar1)();
        if (iVar2 == -0x7fffbffb) {
          iVar2 = 0;
        }
        goto LAB_0040f269;
      }
    }
  }
  FUN_0040d098();
LAB_0040f295:
  if (local_8 != (int *)0x0) {
    pcVar1 = *(code **)(*local_8 + 8);
    (*(code *)PTR_guard_check_icall_00414398)(local_8);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_0040f2b9 */

void __fastcall FUN_0040f2b9(int param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
            ((CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *)
             (param_1 + 0x30));
  return;
}



/* Function: RemoveAll */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleArray<unsigned short,class
   ATL::CSimpleArrayEqualHelper<unsigned short> >::RemoveAll(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
          (CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *this)

{
  if (*(int *)this != 0) {
    free(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* Function: FUN_0040f2fd */

undefined4 __fastcall FUN_0040f2fd(int *param_1,HINSTANCE param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
LAB_0040f369:
    uVar2 = 0x80070057;
  }
  else {
    if (*param_1 != 0) {
      if (*param_1 != 0x2c) goto LAB_0040f369;
      iVar3 = 0;
      if (0 < param_1[9]) {
        do {
          if ((iVar3 < 0) || (param_1[9] <= iVar3)) {
            FUN_00409521(0xc000008c);
            pcVar1 = (code *)swi(3);
            uVar2 = (*pcVar1)();
            return uVar2;
          }
          UnregisterClassA((LPCSTR)(uint)*(ushort *)(param_1[8] + iVar3 * 2),param_2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_1[9]);
      }
      if (param_1[8] != 0) {
        free((void *)param_1[8]);
        param_1[8] = 0;
      }
      param_1[9] = 0;
      param_1[10] = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
      *param_1 = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0040f382 */

void __fastcall FUN_0040f382(int *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  
  if (*param_1 != 0) {
    piVar4 = (int *)param_1[2];
    if (piVar4 < (int *)param_1[3]) {
      do {
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 0x10);
          if (piVar2 != (int *)0x0) {
            pcVar3 = *(code **)(*piVar2 + 8);
            (*(code *)PTR_guard_check_icall_00414398)(piVar2);
            (*pcVar3)();
          }
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 < (int *)param_1[3]);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0040f3f0 */

int * __thiscall FUN_0040f3f0(void *this,int param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  if ((((-1 < param_1) && (0 < 0x7fffffff - param_1)) &&
      (uVar4 = param_1 + 8U & 0xfffffff8, param_1 + 1 <= (int)uVar4)) &&
     ((uVar2 = (uint)((ulonglong)uVar4 * (ulonglong)param_2),
      (int)((ulonglong)uVar4 * (ulonglong)param_2 >> 0x20) == 0 && (uVar2 < 0xfffffff0)))) {
    pcVar1 = *(code **)**(undefined4 **)((int)this + 4);
    (*(code *)PTR_guard_check_icall_00414398)(uVar2 + 0x10);
    piVar3 = (int *)(*pcVar1)();
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)this;
      piVar3[3] = 1;
      piVar3[2] = uVar4 - 1;
      return piVar3;
    }
  }
  return (int *)0x0;
}



/* Function: FUN_0040f480 */

void __thiscall FUN_0040f480(void *this,undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)((int)this + 4) + 4);
  (*(code *)PTR_guard_check_icall_00414398)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040f4b0 */

int __thiscall FUN_0040f4b0(void *this,undefined4 param_1,int param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((((-1 < param_2) && (0 < 0x7fffffff - param_2)) &&
      (uVar4 = param_2 + 8U & 0xfffffff8, param_2 + 1 <= (int)uVar4)) &&
     ((uVar2 = (uint)((ulonglong)uVar4 * (ulonglong)param_3),
      (int)((ulonglong)uVar4 * (ulonglong)param_3 >> 0x20) == 0 && (uVar2 < 0xfffffff0)))) {
    pcVar1 = *(code **)(**(int **)((int)this + 4) + 8);
    (*(code *)PTR_guard_check_icall_00414398)(param_1,uVar2 + 0x10);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 8) = uVar4 - 1;
      return iVar3;
    }
  }
  return 0;
}



/* Function: FUN_0040f530 */

int __fastcall FUN_0040f530(int param_1)

{
  LOCK();
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  UNLOCK();
  return param_1 + 8;
}



/* Function: FUN_0040f540 */

undefined4 __fastcall FUN_0040f540(undefined4 param_1)

{
  return param_1;
}



/* Function: FUN_0040f550 */

undefined4 * __thiscall FUN_0040f550(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401778;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: ~CWin32Heap */

/* Library Function - Single Match
    public: virtual __thiscall ATL::CWin32Heap::~CWin32Heap(void)
   
   Library: Visual Studio 2012 Release */

void __thiscall ATL::CWin32Heap::~CWin32Heap(CWin32Heap *this)

{
  *(undefined ***)this = &PTR_FUN_00401790;
  if ((this[8] != (CWin32Heap)0x0) && (*(int *)(this + 4) != 0)) {
    HeapDestroy(*(HANDLE *)(this + 4));
  }
  return;
}



/* Function: FUN_0040f5a0 */

void __thiscall FUN_0040f5a0(void *this,SIZE_T param_1)

{
  HeapAlloc(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



/* Function: FUN_0040f5c0 */

void __thiscall FUN_0040f5c0(void *this,LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(*(HANDLE *)((int)this + 4),0,param_1);
  }
  return;
}



/* Function: FUN_0040f5f0 */

LPVOID __thiscall FUN_0040f5f0(void *this,LPVOID param_1,SIZE_T param_2)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (param_1 == (LPVOID)0x0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = (code *)**this;
    (*(code *)PTR_guard_check_icall_00414398)(param_2);
    pvVar2 = (LPVOID)(*pcVar1)();
  }
  else if (param_2 == 0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *(code **)(*this + 4);
    (*(code *)PTR_guard_check_icall_00414398)(param_1);
    (*pcVar1)();
    pvVar2 = (LPVOID)0x0;
  }
  else {
    pvVar2 = HeapReAlloc(*(HANDLE *)((int)this + 4),0,param_1,param_2);
  }
  return pvVar2;
}



/* Function: FUN_0040f650 */

void __thiscall FUN_0040f650(void *this,LPCVOID param_1)

{
  HeapSize(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall ATL::CWin32Heap::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2012 Release */

void * __thiscall ATL::CWin32Heap::_scalar_deleting_destructor_(CWin32Heap *this,uint param_1)

{
  ~CWin32Heap(this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_0040f697 */

void __fastcall FUN_0040f697(HMODULE param_1)

{
  HRSRC hResInfo;
  
  hResInfo = FindResourceExW(param_1,L"MUI",(LPCWSTR)0x1,0);
  if (hResInfo == (HRSRC)0x0) {
    return;
  }
  LoadResource(param_1,hResInfo);
  return;
}



/* Function: FUN_0040f6c2 */

undefined4 __fastcall FUN_0040f6c2(HMODULE param_1,HMODULE param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != (HMODULE)0x0) && (param_2 != (HMODULE)0x0)) {
    piVar1 = (int *)FUN_0040f697(param_1);
    piVar2 = (int *)FUN_0040f697(param_2);
    if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
      if (*piVar1 != -0x1320133) {
        return 0;
      }
      if (*piVar2 != -0x1320133) {
        return 0;
      }
      iVar3 = 0;
      do {
        if (piVar1[iVar3 + 7] != piVar2[iVar3 + 7]) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      return 1;
    }
    SetLastError(0xd);
  }
  return 0;
}



/* Function: FUN_0040f723 */

HMODULE __fastcall FUN_0040f723(LPCWSTR param_1,int param_2,int param_3)

{
  HANDLE hFile;
  HANDLE hFileMappingObject;
  LPVOID pvVar1;
  HMODULE pHVar2;
  
  if (param_1 != (LPCWSTR)0x0) {
    if (param_2 == 0) {
      pHVar2 = LoadLibraryExW(param_1,(HANDLE)0x0,(uint)(param_3 != 0));
      return pHVar2;
    }
    hFile = CreateFileW(param_1,0x80000000,5,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      hFileMappingObject = CreateFileMappingW(hFile,(LPSECURITY_ATTRIBUTES)0x0,8,0,0,(LPCWSTR)0x0);
      CloseHandle(hFile);
      if (hFileMappingObject != (HANDLE)0x0) {
        pvVar1 = MapViewOfFile(hFileMappingObject,1,0,0,0);
        CloseHandle(hFileMappingObject);
        return (HMODULE)(((uint)pvVar1 | 1) & -(uint)(pvVar1 != (LPVOID)0x0));
      }
    }
  }
  return (HMODULE)0x0;
}



/* Function: FUN_0040f7ae */

void __fastcall FUN_0040f7ae(undefined4 param_1,undefined4 param_2)

{
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  _OSVERSIONINFOW local_124;
  ushort local_10;
  uint local_8;
  
  uVar4 = DAT_00413a90;
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  DAT_00413a90 = uVar4;
  if (DAT_00413a90 != 0) goto LAB_0040f8a6;
  memset(&local_124.dwMajorVersion,0,0x118);
  local_124.dwOSVersionInfoSize = 0x11c;
  BVar1 = GetVersionExW(&local_124);
  param_2 = extraout_EDX;
  if (BVar1 == 0) {
    local_124.dwOSVersionInfoSize = 0x114;
    GetVersionExW(&local_124);
    param_2 = extraout_EDX_00;
  }
  DAT_00413a90 = uVar4;
  if (local_124.dwPlatformId != 1) {
    if (local_124.dwPlatformId != 2) goto LAB_0040f8a6;
    if (local_124.dwMajorVersion == 5) {
      if (local_124.dwMinorVersion == 0) {
        DAT_00413a90 = 4;
      }
      else {
        if (local_124.dwMinorVersion == 1) {
          bVar3 = local_10 < 2;
          uVar4 = 8;
        }
        else {
          if (local_124.dwMinorVersion != 2) {
            DAT_00413a90 = 0x14;
            goto LAB_0040f8a6;
          }
          bVar3 = local_10 == 0;
          uVar4 = 0x10;
        }
        uVar2 = 0;
        if (!bVar3) {
          uVar2 = uVar4;
        }
        DAT_00413a90 = uVar2 | 4;
      }
      goto LAB_0040f8a6;
    }
    if (4 < local_124.dwMajorVersion) {
      DAT_00413a90 = 0x20;
      goto LAB_0040f8a6;
    }
    DAT_00413a90 = 2;
  }
  if ((local_124.dwMajorVersion == 4) &&
     (((local_124.dwMinorVersion == 0 || (local_124.dwMinorVersion == 10)) ||
      (local_124.dwMinorVersion == 0x5a)))) {
    DAT_00413a90 = 1;
  }
LAB_0040f8a6:
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040f8bf */

void __fastcall FUN_0040f8bf(undefined4 param_1,undefined4 param_2,HMODULE param_3,wchar_t *param_4)

{
  uint uVar1;
  HMODULE hLibModule;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined8 uVar3;
  wchar_t local_210 [259];
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_00413140 ^ (uint)&stack0xfffffffc;
  if (((param_3 != (HMODULE)0x0) &&
      (uVar1 = _vsnwprintf(local_210,0x103,param_4,&stack0x0000000c), param_2 = extraout_EDX,
      -1 < (int)uVar1)) && (uVar1 < 0x104)) {
    if (uVar1 == 0x103) {
      local_a = 0;
    }
    uVar3 = FUN_0040f7ae(extraout_ECX,extraout_EDX);
    uVar1 = FUN_0040f7ae(extraout_ECX_00,(int)((ulonglong)uVar3 >> 0x20));
    hLibModule = FUN_0040f723(local_210,uVar1 & 0x38,(uint)uVar3 & 0x26);
    param_2 = extraout_EDX_00;
    if ((hLibModule != (HMODULE)0x0) &&
       (iVar2 = FUN_0040f6c2(param_3,hLibModule), param_2 = extraout_EDX_01, iVar2 == 0)) {
      if (((uint)hLibModule & 1) == 0) {
        FreeLibrary(hLibModule);
        param_2 = extraout_EDX_03;
      }
      else {
        UnmapViewOfFile(hLibModule);
        param_2 = extraout_EDX_02;
      }
    }
  }
  FUN_00410680(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040f971 */

undefined4 __fastcall FUN_0040f971(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  
  if ((param_4 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      if (param_3 == 0) {
        uVar1 = FUN_0040f8bf(param_1,0,(HMODULE)param_1,L".\\%s.mui");
        return uVar1;
      }
      pwVar2 = L".\\%s\\%s.mui";
    }
    else {
      if (param_3 != 0) {
        uVar1 = FUN_0040f8bf(param_1,param_2,(HMODULE)param_1,L"%s\\%s\\%s.mui");
        return uVar1;
      }
      pwVar2 = L"%s\\%s.mui";
    }
    uVar1 = FUN_0040f8bf(param_1,param_2,(HMODULE)param_1,pwVar2);
  }
  return uVar1;
}



/* Function: FUN_0040f9dd */
