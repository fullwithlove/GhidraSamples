/* Function: FUN_00401690 */

undefined4 __fastcall FUN_00401690(short *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_0040179f(param_1,param_2,param_1,param_3,0x7ffffffe);
  }
  return uVar1;
}



/* Function: FUN_004016c9 */

undefined4 __fastcall FUN_004016c9(short *param_1,uint param_2,int param_3)

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
      uVar2 = FUN_0040179f(param_1 + uVar4,param_2 - uVar4,uVar2,param_3,0x7ffffffe);
    }
  }
  return uVar2;
}



/* Function: FUN_00401738 */

undefined4 __cdecl FUN_00401738(wchar_t *param_1,uint param_2,wchar_t *param_3)

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



/* Function: FUN_0040179f */

undefined4 __fastcall
FUN_0040179f(short *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  
  if (param_2 != 0) {
    iVar2 = param_4 - (int)param_1;
    do {
      if ((param_5 == 0) || (sVar1 = *(short *)(iVar2 + (int)param_1), sVar1 == 0)) break;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      param_5 = param_5 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar3 = 0x8007007a;
  if (param_2 != 0) {
    uVar3 = 0;
  }
  psVar4 = param_1 + -1;
  if (param_2 != 0) {
    psVar4 = param_1;
  }
  *psVar4 = 0;
  return uVar3;
}



/* Function: FUN_004017f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004017f0(int param_1)

{
  UINT CodePage;
  DWORD DVar1;
  LPWSTR lpCmdLine;
  LPWSTR *ppWVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  DWORD DVar4;
  bool bVar5;
  int *pNumArgs;
  uint uVar6;
  uint local_22c;
  _cpinfo local_228;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00405380 ^ (uint)&stack0xfffffffc;
  DVar4 = 0;
  memset(local_214,0,0x20c);
  DAT_00406308 = 0;
  _DAT_00406100 = 0;
  DAT_004060ec = 0;
  DAT_004060e4 = (short *)0x0;
  DAT_00406b20 = 0;
  DAT_00406b24 = 0;
  DAT_00406b28 = 0;
  DAT_00406b2c = 0;
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  CodePage = GetConsoleOutputCP();
  GetCPInfo(CodePage,&local_228);
  if ((((CodePage == 0x3a4) || (CodePage == 0x3a8)) || (CodePage == 0x3b5)) || (CodePage == 0x3b6))
  {
    DAT_004060f0 = 1;
  }
  else {
    DAT_004060f0 = 0;
  }
  SetThreadUILanguage(0);
  FUN_00402453(0x2720);
  DVar1 = ExpandEnvironmentStringsW(L"%systemroot%\\system32\\netmsg.dll",local_214,0x105);
  if ((DVar1 == 0) ||
     (DAT_004060e0 = LoadLibraryExW(local_214,(HANDLE)0x0,0x802), DAT_004060e0 == (HMODULE)0x0)) {
    GetLastError();
    FUN_00402453(10000);
    DVar4 = 0xec0;
    goto LAB_00401a46;
  }
  pNumArgs = &param_1;
  lpCmdLine = GetCommandLineW();
  ppWVar2 = CommandLineToArgvW(lpCmdLine,pNumArgs);
  if (ppWVar2 == (LPWSTR *)0x0) {
    FUN_00402453(0x2711);
    DVar4 = GetLastError();
    goto LAB_00401a46;
  }
  iVar3 = FUN_00402bea(param_1,(int)ppWVar2,&local_22c);
  if (iVar3 == 0) {
    FUN_00402b16(0);
    DVar4 = 0x85c;
    goto LAB_00401a46;
  }
  if (local_22c == 0) {
    DVar4 = FUN_00401d8a();
  }
  else if (local_22c == 1) {
    DVar4 = FUN_00401fa9();
  }
  else if (local_22c == 2) {
    if ((DAT_00406b28 & 0x1000) == 0) {
      if ((DAT_004060e4 == (short *)0x0) || (*DAT_004060e4 == 0)) {
        uVar6 = 0x271c;
      }
      else {
        uVar6 = 0x271d;
      }
      FUN_00402453(uVar6);
    }
    DVar4 = FUN_00401d1e();
  }
  else if (local_22c == 4) {
    DVar4 = NetScheduleJobDel(DAT_004060e4,DAT_004060e8,DAT_004060e8);
    bVar5 = DVar4 == 0;
LAB_004019a0:
    if (!bVar5) {
      FUN_00402453(DVar4);
    }
  }
  else if (local_22c == 5) {
    iVar3 = FUN_00401a5b(extraout_ECX,extraout_EDX);
    if ((iVar3 != 0) && (DVar4 = NetScheduleJobDel(DAT_004060e4,0,0xffffffff), DVar4 != 0)) {
      bVar5 = DVar4 == 0xede;
      goto LAB_004019a0;
    }
  }
  else if (local_22c == 6) {
    FUN_00402b16(1);
  }
  FUN_0040306a(&DAT_004053c8);
  FUN_0040306a(&DAT_00405438);
  LocalFree(DAT_00405a6c);
  LocalFree(DAT_00405a70);
  LocalFree(DAT_00405a80);
  LocalFree(DAT_00405a84);
LAB_00401a46:
                    /* WARNING: Subroutine does not return */
  exit((uint)(DVar4 != 0));
}



/* Function: FUN_00401a5b */

void __fastcall FUN_00401a5b(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  BOOL BVar2;
  HANDLE hConsoleInput;
  wchar_t *pwVar3;
  FILE *_File;
  char *pcVar4;
  char *pcVar5;
  short *psVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  DWORD *lpNumberOfCharsRead;
  wchar_t _Ch;
  uint uVar10;
  PCONSOLE_READCONSOLE_CONTROL pInputControl;
  DWORD local_48;
  HLOCAL local_44;
  wchar_t local_40 [18];
  char local_1c [20];
  uint local_8;
  
  local_8 = DAT_00405380 ^ (uint)&stack0xfffffffc;
  pwVar3 = local_40;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    pwVar3[0] = L'\0';
    pwVar3[1] = L'\0';
    pwVar3 = pwVar3 + 2;
  }
  iVar9 = 0;
  local_44 = (HLOCAL)0x0;
  *pwVar3 = L'\0';
  if (DAT_00406308 == 1) {
LAB_00401a8f:
    FUN_004041a0(local_8 ^ (uint)&stack0xfffffffc,param_2);
    return;
  }
  uVar10 = 0x1216;
  do {
    DVar7 = FUN_00402453(uVar10);
    if (((DVar7 == 0) || (iVar8 = FUN_004022f0(0x10f5,(LPWSTR)&local_44,0), iVar8 == 0)) ||
       (DVar7 = FUN_00402453(0x14a4), DVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    LocalFree(local_44);
    BVar2 = FUN_0040235a(0xfffffff6);
    pInputControl = (PCONSOLE_READCONSOLE_CONTROL)0x0;
    if (BVar2 == 0) {
      local_1c[0] = '\0';
      local_1c[1] = '\0';
      local_1c[2] = '\0';
      local_1c[3] = '\0';
      local_1c[4] = '\0';
      local_1c[5] = '\0';
      local_1c[6] = '\0';
      local_1c[7] = '\0';
      local_1c[8] = '\0';
      local_1c[9] = '\0';
      local_1c[10] = '\0';
      local_1c[0xb] = '\0';
      local_1c[0xc] = '\0';
      local_1c[0xd] = '\0';
      local_1c[0xe] = '\0';
      local_1c[0xf] = '\0';
      local_1c[0x10] = 0;
      _File = FUN_004047d9(0);
      pcVar4 = fgets(local_1c,0x10,_File);
      local_48 = 0;
      param_2 = extraout_EDX_02;
      if (pcVar4 != (char *)0x0) {
        pcVar5 = strchr(local_1c,10);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
        }
        pcVar5 = local_1c;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        local_48 = MultiByteToWideChar(1,1,local_1c,(int)(pcVar5 + (1 - (int)(local_1c + 1))),
                                       local_40,0x10);
        param_2 = extraout_EDX_03;
      }
      if (pcVar4 == (char *)0x0) goto LAB_00401a8f;
    }
    else {
      lpNumberOfCharsRead = &local_48;
      DVar7 = 0x10;
      pwVar3 = local_40;
      hConsoleInput = GetStdHandle(0xfffffff6);
      BVar2 = ReadConsoleW(hConsoleInput,pwVar3,DVar7,lpNumberOfCharsRead,pInputControl);
      param_2 = extraout_EDX;
      if (BVar2 == 0) goto LAB_00401a8f;
      pwVar3 = wcschr(local_40,L'\r');
      if (pwVar3 == (wchar_t *)0x0) {
        pwVar3 = wcschr(local_40,L'\n');
        param_2 = extraout_EDX_00;
        if (pwVar3 == (wchar_t *)0x0) goto LAB_00401baa;
        _Ch = L'\n';
      }
      else {
        _Ch = L'\r';
      }
      pwVar3 = wcschr(local_40,_Ch);
      *pwVar3 = L'\0';
      param_2 = extraout_EDX_01;
    }
LAB_00401baa:
    if (local_48 == 0) goto LAB_00401a8f;
    pwVar3 = _wcsupr(local_40);
    psVar6 = FUN_00402228(pwVar3,0x60);
    param_2 = extraout_EDX_04;
    if ((psVar6 == (short *)0x40) || (psVar6 == (short *)0x20)) goto LAB_00401a8f;
    iVar9 = iVar9 + 1;
    if (2 < iVar9) {
      FUN_00402453(0xead);
      param_2 = extraout_EDX_05;
      goto LAB_00401a8f;
    }
    uVar10 = 0xeac;
  } while( true );
}



/* Function: FUN_00401c1e */

void __fastcall FUN_00401c1e(LPCWSTR param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *piVar3;
  BOOL local_6c;
  int local_68;
  void *local_64;
  undefined2 local_60 [2];
  int local_5c;
  CHAR local_58 [80];
  uint local_8;
  
  local_8 = DAT_00405380 ^ (uint)&stack0xfffffffc;
  piVar3 = param_2;
  if ((param_1 != (LPCWSTR)0x0) &&
     (iVar2 = WideCharToMultiByte(0,0,param_1,-1,local_58,0x50,(LPCSTR)0x0,&local_6c),
     piVar3 = extraout_EDX, iVar2 != 0)) {
    local_5c = 0;
    sVar1 = FUN_004030ac(&local_68,&local_64,extraout_ECX,&local_5c,local_58,local_60);
    piVar3 = extraout_EDX_00;
    if (sVar1 == 0) {
      sVar1 = FUN_0040330b(extraout_ECX_00,local_5c,&local_68,param_2);
      free(local_64);
      piVar3 = extraout_EDX_01;
      if (sVar1 == 0) {
        *param_2 = *param_2 * 1000;
        piVar3 = extraout_EDX_01;
      }
    }
  }
  FUN_004041a0(local_8 ^ (uint)&stack0xfffffffc,piVar3);
  return;
}



/* Function: FUN_00401cb6 */
