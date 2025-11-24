/* Function: FUN_00401486 */

undefined4 FUN_00401486(undefined4 param_1,undefined4 param_2,LPCWSTR param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  
  iVar1 = CompareStringOrdinal(param_3,-1,L"/pagefile",-1,1);
  if (iVar1 == 2) {
    pwVar2 = L"PAGEFILE";
  }
  else {
    pwVar2 = L"-1";
  }
  DisplaySYSDMCPL(pwVar2);
  return 0;
}



/* Function: FUN_004014d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004014d0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00401790();
  DAT_004020b8 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_00401914(2);
  __set_app_type(iVar2);
  _DAT_004023ec = 0xffffffff;
  _DAT_004023f0 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_004020cc;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_004020c0;
  FUN_00401970();
  if (DAT_00402000 == 0) {
    __setusermatherr(FUN_00401970);
  }
  FUN_00401b77();
  return 0;
}



/* Function: FUN_00401540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401540(void)

{
  _DAT_004020bc = DAT_004020c8;
  _DAT_004020b4 =
       __wgetmainargs((int *)&DAT_004020a8,(wchar_t ***)&DAT_004020ac,(wchar_t ***)&DAT_004020b0,
                      DAT_004020c4,(_startupinfo *)&DAT_004020bc);
  return;
}



/* Function: FUN_00401579 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00401579(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  WCHAR WVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  uint uVar8;
  _STARTUPINFOW local_6c;
  WCHAR *local_24;
  uint local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00401d88;
  uStack_c = 0x401585;
  local_20 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = (undefined *)0x0;
  iVar6 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar5 = 0;
    LOCK();
    iVar3 = iVar6;
    if (DAT_004023f4 != 0) {
      iVar5 = DAT_004023f4;
      iVar3 = DAT_004023f4;
    }
    DAT_004023f4 = iVar3;
    UNLOCK();
    if (iVar5 == 0) goto LAB_004015ce;
    if (iVar5 == iVar6) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_004015ce:
  if (DAT_004023f8 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_004023f8 == 0) {
    DAT_004023f8 = 1;
    iVar6 = FUN_00401759((undefined4 *)&DAT_004010d4,(undefined4 *)&DAT_004010e0);
    if (iVar6 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_004020a4 = 1;
  }
  if (DAT_004023f8 == 1) {
    initterm(&DAT_004010c8,&DAT_004010d0);
    DAT_004023f8 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_004023f4 = 0;
    UNLOCK();
  }
  if ((DAT_004023fc != (code *)0x0) &&
     (BVar7 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004023fc), pcVar2 = DAT_004023fc, BVar7 != 0
     )) {
    (*(code *)PTR_guard_check_icall_00403098)(0,2,0);
    (*pcVar2)();
  }
  local_24 = *(WCHAR **)_wcmdln_exref;
  uVar8 = local_20;
  if (local_24 == (LPCWSTR)0x0) {
    ExceptionList = local_14;
    return 0xff;
  }
  do {
    WVar4 = *local_24;
    if ((ushort)WVar4 < 0x21) {
      if (WVar4 == L'\0') goto LAB_004016b0;
      if (uVar8 == 0) {
        while ((WVar4 != L'\0' && ((ushort)WVar4 < 0x21))) {
          local_24 = local_24 + 1;
          WVar4 = *local_24;
        }
LAB_004016b0:
        DAT_004020a0 = FUN_00401486(0x400000,0,local_24);
        if (DAT_004020b8 == 0) {
                    /* WARNING: Subroutine does not return */
          exit(DAT_004020a0);
        }
        if (DAT_004020a4 == 0) {
          _cexit();
          ExceptionList = local_14;
          return DAT_004020a0;
        }
        ExceptionList = local_14;
        return DAT_004020a0;
      }
    }
    if (WVar4 == L'\"') {
      uVar8 = (uint)(uVar8 == 0);
      local_20 = uVar8;
    }
    local_24 = local_24 + 1;
  } while( true );
}



/* Function: FUN_00401759 */

void __cdecl FUN_00401759(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_00403098)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_00401790 */

bool FUN_00401790(void)

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
    iVar2 = *(int *)(IMAGE_NT_HEADERS32_004000f8.Signature + IMAGE_DOS_HEADER_00400000.e_lfanew);
  }
  return iVar2 != 0;
}



/* Function: entry */

void entry(void)

{
  FUN_00401ad9();
  FUN_00401579();
  return;
}



/* Function: FUN_00401810 */

void __fastcall FUN_00401810(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00402040) {
    return;
  }
  FUN_00401c5b(param_1,param_2);
  return;
}



/* Function: FUN_00401830 */

undefined4 FUN_00401830(int *param_1)

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



/* Function: FUN_00401880 */

undefined4 FUN_00401880(void)

{
  SetUnhandledExceptionFilter(FUN_00401830);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_004018a0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_004018a0(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00401914 */

undefined4 __cdecl FUN_00401914(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_004018a0(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00401956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00401970 */

undefined4 FUN_00401970(void)

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
  
  pcStack_10 = FUN_00401c00;
  local_14 = ExceptionList;
  local_c = DAT_00402040 ^ 0x401dc8;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00401aa0((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00401aa0 */

bool __cdecl FUN_00401aa0(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00401ad9 */

void FUN_00401ad9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00402040 == 0xbb40e64e) || ((DAT_00402040 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00402040 & 0xffff0000, DAT_00402040 = local_8, uVar1 == 0)) {
      DAT_00402040 = 0xbb40e64f;
    }
  }
  DAT_00402080 = ~DAT_00402040;
  return;
}



/* Function: FUN_00401b77 */

void FUN_00401b77(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401b90. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00402040 ^ (uint)&param_2;
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



/* Function: FUN_00401c00 */

void __cdecl
FUN_00401c00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00402040,FUN_00401810,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00401c2b */

void __cdecl FUN_00401c2b(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00401c5b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00401c5b(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_004021e0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_004021e4 = &stack0x00000004;
  _DAT_00402120 = 0x10001;
  _DAT_004020d0 = 0xc0000409;
  _DAT_004020d4 = 1;
  _DAT_004020e0 = 3;
  DAT_004020e4 = 2;
  DAT_004020e8 = DAT_00402040;
  DAT_004020ec = DAT_00402080;
  uStack_c = DAT_00402040;
  uStack_8 = DAT_00402080;
  _DAT_004020dc = unaff_retaddr;
  _DAT_004021ac = in_GS;
  _DAT_004021b0 = in_FS;
  _DAT_004021b4 = in_ES;
  _DAT_004021b8 = in_DS;
  _DAT_004021bc = unaff_EDI;
  _DAT_004021c0 = unaff_ESI;
  _DAT_004021c4 = unaff_EBX;
  _DAT_004021c8 = param_2;
  _DAT_004021cc = param_1;
  _DAT_004021d0 = in_EAX;
  _DAT_004021d4 = unaff_EBP;
  DAT_004021d8 = unaff_retaddr;
  _DAT_004021dc = in_CS;
  _DAT_004021e8 = in_SS;
  FUN_00401c2b((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d6f. Too many branches */
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



