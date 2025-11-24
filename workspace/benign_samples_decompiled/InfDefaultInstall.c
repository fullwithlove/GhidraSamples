/* Function: FUN_004014c0 */

undefined4 __thiscall FUN_004014c0(void *this,int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0x118;
  iVar5 = param_1 - (int)this;
  do {
    if ((iVar4 == -0x7ffffee6) || (sVar1 = *(short *)(iVar5 + (int)this), sVar1 == 0)) break;
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



/* Function: FUN_00401510 */

undefined4 __cdecl FUN_00401510(wchar_t *param_1,uint param_2,wchar_t *param_3)

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



/* Function: FUN_00401577 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00401577(undefined4 param_1)

{
  WCHAR WVar1;
  LPWSTR pWVar2;
  LPWSTR *ppWVar3;
  undefined3 extraout_var;
  BOOL BVar4;
  int iVar5;
  DWORD DVar6;
  LPWSTR pWVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar9;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined1 auStack_504 [4];
  HLOCAL pvStack_500;
  HINF local_4fc;
  undefined4 local_4f8;
  int iStack_4f4;
  int local_4f0;
  int local_4ec;
  int iStack_4e8;
  int aiStack_4e4 [2];
  DWORD aDStack_4dc [3];
  undefined4 uStack_4d0;
  undefined4 uStack_4c8;
  undefined *puStack_4c4;
  undefined4 uStack_4c0;
  HLOCAL pvStack_4bc;
  HLOCAL pvStack_4b8;
  _INFCONTEXT _Stack_474;
  _union_530 a_Stack_464 [9];
  wchar_t awStack_440 [280];
  WCHAR aWStack_210 [258];
  uint local_c;
  
  local_c = DAT_00403040 ^ (uint)auStack_504;
  local_4fc = (HINF)0xffffffff;
  local_4f8 = param_1;
  local_4f0 = 0;
  local_4ec = 0;
  pWVar2 = GetCommandLineW();
  iStack_4f4 = 0;
  pvStack_500 = (HLOCAL)0x0;
  memset(aDStack_4dc + 1,0,0x60);
  aiStack_4e4[0] = 0;
  iStack_4e8 = 0;
  if (pWVar2 == (LPWSTR)0x0) {
    GetLastError();
    uVar9 = extraout_EDX;
    goto LAB_00401910;
  }
  ppWVar3 = CommandLineToArgvW(pWVar2,&iStack_4f4);
  uVar10 = 0;
  if ((iStack_4f4 == 2) && (ppWVar3 != (LPWSTR *)0x0)) {
    pWVar7 = ppWVar3[1];
    pWVar2 = pWVar7 + 1;
    do {
      WVar1 = *pWVar7;
      pWVar7 = pWVar7 + 1;
    } while (WVar1 != L'\0');
    if ((int)pWVar7 - (int)pWVar2 >> 1 == 0) goto LAB_004017c9;
    local_4fc = SetupOpenInfFileW(ppWVar3[1],(PCWSTR)0x0,2,(PUINT)0x0);
    if (local_4fc != (HINF)0xffffffff) {
      GetNativeSystemInfo((LPSYSTEM_INFO)&a_Stack_464[0].s);
      bVar11 = FUN_0040192d(extraout_ECX,(int)ppWVar3[1],a_Stack_464[0]);
      if (CONCAT31(extraout_var,bVar11) == 0) {
        BVar4 = SetupDiGetActualSectionToInstallW
                          (local_4fc,L"DefaultInstall",aWStack_210,0xff,aDStack_4dc,(PWSTR *)0x0);
        if ((BVar4 != 0) &&
           (BVar4 = SetupFindFirstLineW(local_4fc,aWStack_210,(PCWSTR)0x0,&_Stack_474), BVar4 != 0))
        {
          local_4ec = 1;
          iVar5 = FUN_00401510(awStack_440,0x118,L"DefaultInstall 132 %ws");
          if (-1 < iVar5) {
            InstallHinfSectionW((HWND)0x0,(HINSTANCE)0x0,awStack_440,0);
            goto LAB_00401726;
          }
          goto LAB_00401709;
        }
LAB_00401726:
        bVar11 = false;
        BVar4 = SetupFindFirstLineW(local_4fc,L"Manufacturer",(PCWSTR)0x0,&_Stack_474);
        uVar9 = extraout_EDX_01;
        if (BVar4 != 0) {
          local_4f0 = 1;
          goto LAB_0040174b;
        }
LAB_004017af:
        if (local_4ec != 0) goto LAB_00401641;
        uVar10 = 0xe0000101;
        uVar8 = 0x101;
        goto LAB_00401664;
      }
      bVar11 = true;
LAB_0040174b:
      iVar5 = FUN_004014c0(awStack_440,(int)ppWVar3[1]);
      if (-1 < iVar5) {
        uVar12 = DiInstallDriverW(0,awStack_440,0,aiStack_4e4);
        uVar9 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if ((int)uVar12 == 0) {
          uVar10 = GetLastError();
          uVar9 = extraout_EDX_02;
          if ((uVar10 == 0xe000020b) || (uVar10 == 0x103)) goto LAB_0040179b;
        }
        else {
          iStack_4e8 = 1;
LAB_0040179b:
          uVar10 = 0;
        }
        if ((bVar11) || (local_4f0 != 0)) goto LAB_00401641;
        goto LAB_004017af;
      }
LAB_00401709:
      uVar8 = 0xd;
      uVar10 = uVar8;
      goto LAB_004017ce;
    }
    uVar10 = GetLastError();
    uVar9 = extraout_EDX_00;
LAB_00401641:
    if ((uVar10 != 0) || (iStack_4e8 != 0)) {
      uVar8 = uVar10 & 0xffff;
      if ((uVar10 & 0xe0000000) != 0xe0000000) goto LAB_004017ce;
LAB_00401664:
      uVar8 = uVar8 | 0x800f0000;
      goto LAB_004017d9;
    }
  }
  else {
LAB_004017c9:
    uVar8 = 0x57;
    uVar10 = uVar8;
LAB_004017ce:
    uVar8 = uVar8 | 0x80070000;
    if ((int)uVar10 < 1) {
      uVar8 = uVar10;
    }
LAB_004017d9:
    DVar6 = FormatMessageW(0x1300,(LPCVOID)0x0,uVar8,0x400,(LPWSTR)&pvStack_500,0,(va_list *)0x0);
    if (DVar6 == 0) {
      pvStack_500 = (HLOCAL)0x0;
    }
    if (uVar10 < 0xe0000102) {
      if (((uVar10 == 0xe0000101) || (uVar10 == 0xe0000000)) ||
         ((uVar10 == 0xe0000001 || ((uVar10 == 0xe0000002 || (uVar10 == 0xe0000003))))))
      goto LAB_0040185a;
      bVar11 = uVar10 == 0xe0000100;
LAB_00401854:
      if (bVar11) goto LAB_0040185a;
      bVar11 = false;
    }
    else {
      if (((uVar10 != 0xe0000102) && (uVar10 != 0xe000022c)) && (uVar10 != 0xe0000234)) {
        bVar11 = uVar10 == 0xe0000235;
        goto LAB_00401854;
      }
LAB_0040185a:
      bVar11 = true;
    }
    if (aiStack_4e4[0] == 0) {
      pvStack_4bc = pvStack_500;
      if (uVar10 == 0) {
        puStack_4c4 = &DAT_00401174;
        pvStack_4b8 = (HLOCAL)0x0;
        uStack_4c8 = 1;
        uStack_4c0 = 0xfffd;
      }
      else {
        if ((bVar11) || (pvStack_500 == (HLOCAL)0x0)) {
          pvStack_4bc = (HLOCAL)0x66;
          pvStack_4b8 = pvStack_500;
        }
        else {
          pvStack_4b8 = (HLOCAL)0x0;
        }
        uStack_4c0 = 0xfffe;
        uStack_4c8 = 0x20;
        puStack_4c4 = (undefined *)0x65;
      }
      aDStack_4dc[1] = 0x60;
      uStack_4d0 = local_4f8;
      TaskDialogIndirect(aDStack_4dc + 1,0,0,0);
      uVar9 = extraout_EDX_04;
    }
    else {
      RestartDialogEx(0,0,2,0x80010002);
      uVar9 = extraout_EDX_03;
    }
    if (pvStack_500 != (HLOCAL)0x0) {
      LocalFree(pvStack_500);
      uVar9 = extraout_EDX_05;
    }
  }
  if (local_4fc != (HINF)0xffffffff) {
    SetupCloseInfFile(local_4fc);
    uVar9 = extraout_EDX_06;
  }
LAB_00401910:
  FUN_00401d20(local_c ^ (uint)auStack_504,uVar9);
  return;
}



/* Function: FUN_0040192d */

bool __fastcall FUN_0040192d(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  DWORD dwErrCode;
  bool bVar3;
  int local_10;
  int local_c;
  char local_5;
  
  dwErrCode = 0;
  local_5 = '\0';
  bVar3 = false;
  if (param_2 == 0) {
    dwErrCode = 0x57;
    bVar3 = false;
  }
  else {
    iVar1 = DriverPackageOpenW(param_2,param_3,0,0,0);
    if (iVar1 == 0) {
      dwErrCode = GetLastError();
    }
    else {
      iVar2 = DriverPackageGetPropertyW(iVar1,0,0,&DAT_00401178,&local_c,&local_5,1,&local_10,0);
      bVar3 = false;
      if (iVar2 == 0) {
        dwErrCode = GetLastError();
      }
      else if ((local_c == 0x11) && (local_10 == 1)) {
        bVar3 = local_5 == -1;
      }
      else {
        dwErrCode = 0xd;
      }
      DriverPackageClose(iVar1);
    }
  }
  SetLastError(dwErrCode);
  return bVar3;
}



/* Function: FUN_004019d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004019d0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00401cab();
  DAT_004030b8 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_00401e24(2);
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



/* Function: FUN_00401a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401a40(void)

{
  _DAT_004030bc = DAT_004030c8;
  _DAT_004030b4 =
       __getmainargs((int *)&DAT_004030a8,(char ***)&DAT_004030ac,(char ***)&DAT_004030b0,
                     DAT_004030c4,(_startupinfo *)&DAT_004030bc);
  return;
}



/* Function: entry */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int entry(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  _STARTUPINFOW local_6c;
  uint local_24;
  byte *local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  FUN_00401fe9();
  local_8 = &DAT_004022a0;
  uStack_c = 0x401a9c;
  local_24 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = (undefined *)0x0;
  iVar7 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar4 = 0;
    LOCK();
    iVar3 = iVar7;
    if (DAT_004033f8 != 0) {
      iVar4 = DAT_004033f8;
      iVar3 = DAT_004033f8;
    }
    DAT_004033f8 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_00401ae5;
    if (iVar4 == iVar7) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00401ae5:
  if (DAT_004033fc == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_004033fc == 0) {
    DAT_004033fc = 1;
    iVar7 = FUN_00401c74((undefined4 *)&DAT_004010d4,(undefined4 *)&DAT_004010e0);
    if (iVar7 != 0) {
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
     (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00403400), pcVar2 = DAT_00403400, BVar5 != 0
     )) {
    (*(code *)PTR_guard_check_icall_004040e0)(0,2,0);
    (*pcVar2)();
  }
  pbVar9 = *(byte **)_acmdln_exref;
  uVar6 = local_24;
  do {
    bVar8 = *pbVar9;
    local_20 = pbVar9;
    if (bVar8 < 0x21) {
      if (bVar8 == 0) goto LAB_00401bba;
      if (uVar6 == 0) {
        while ((bVar8 != 0 && (bVar8 < 0x21))) {
          local_20 = local_20 + 1;
          bVar8 = *local_20;
        }
LAB_00401bba:
        DAT_004030a0 = FUN_00401577(0x400000);
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
    }
    if (bVar8 == 0x22) {
      uVar6 = (uint)(uVar6 == 0);
      local_24 = uVar6;
    }
    iVar7 = _ismbblead((uint)bVar8);
    if (iVar7 != 0) {
      pbVar9 = pbVar9 + 1;
    }
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* Function: FUN_00401c74 */

void __cdecl FUN_00401c74(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_004040e0)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_00401cab */

bool FUN_00401cab(void)

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
  local_c = DAT_00403040 ^ 0x4022e0;
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



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



