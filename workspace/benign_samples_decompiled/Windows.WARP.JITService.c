/* Function: FUN_004024f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004024f0(void)

{
  _DAT_0040c584 = FUN_00403c90;
  _DAT_0040c594 = FUN_00403ca0;
  return;
}



/* Function: FUN_00402510 */

void FUN_00402510(void)

{
  DAT_0040c59c = FUN_00402f90;
  DAT_0040c580 = DebugBreak;
  DAT_0040c598 = FUN_00402fd0;
  DAT_0040c570 = FUN_004043a0;
  DAT_0040c560 = FUN_00404530;
  DAT_0040c5a0 = FUN_004043f0;
  DAT_0040c57c = FUN_00404490;
  return;
}



/* Function: FUN_00402560 */

void FUN_00402560(void)

{
  FUN_0040a67f(FUN_0040b800);
  return;
}



/* Function: FUN_00402580 */

void FUN_00402580(void)

{
  FUN_0040a67f(FUN_0040b860);
  return;
}



/* Function: FUN_004025a0 */

void FUN_004025a0(void)

{
  DAT_0040c578 = FUN_00404b00;
  DAT_0040c550 = &PTR_s_WilError_03_0040c08c;
  DAT_0040c564 = &DAT_0040c168;
  return;
}



/* Function: FUN_004025d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004025d0(void)

{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)&DAT_0040c024,0,0);
  DAT_0040c04c = 0;
  DAT_0040c03c = 0;
  DAT_0040c040 = 0;
  uRam0040c044 = 0;
  uRam0040c048 = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)&DAT_0040c050,0,0);
  _DAT_0040c088 = 0;
  DAT_0040c068 = 0;
  DAT_0040c06c = 0;
  uRam0040c070 = 0;
  uRam0040c074 = 0;
  DAT_0040c000 = 1;
  DAT_0040c078 = 0;
  _DAT_0040c07c = 0;
  DAT_0040c080 = 0;
  DAT_0040c084 = 0;
  FUN_0040a67f(FUN_0040b8c0);
  return;
}



/* Function: FUN_00402640 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402640(void)

{
  _DAT_0040c5b0 = FUN_00407160;
  _DAT_0040c5c4 = FUN_00407470;
  _DAT_0040c63c = FUN_00407610;
  return;
}



/* Function: FUN_00402670 */

void FUN_00402670(void)

{
  FUN_0040a67f(FUN_0040b960);
  return;
}



/* Function: FUN_00402690 */

undefined4 __fastcall FUN_00402690(void *param_1,uint param_2,void *param_3,uint param_4)

{
  undefined4 *puVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (void *)0x0) {
    puVar1 = (undefined4 *)o__errno();
    *puVar1 = 0x16;
    o__invalid_parameter_noinfo();
    return 0x16;
  }
  if ((param_3 != (void *)0x0) && (param_4 <= param_2)) {
    memcpy(param_1,param_3,param_4);
    return 0;
  }
  memset(param_1,0,param_2);
  if (param_3 == (void *)0x0) {
    puVar1 = (undefined4 *)o__errno();
    *puVar1 = 0x16;
    o__invalid_parameter_noinfo();
  }
  else if (param_2 < param_4) {
    puVar1 = (undefined4 *)o__errno();
    *puVar1 = 0x22;
    o__invalid_parameter_noinfo();
    return 0x22;
  }
  return 0x16;
}



/* Function: FUN_00402740 */

undefined4 __cdecl FUN_00402740(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    if (param_2 < 0x80000000) {
      uVar1 = param_2 - 1;
      uVar3 = 0;
      uVar2 = FUN_0040b056(param_1,uVar1,param_3,&stack0x00000010);
      if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
        uVar3 = 0x8007007a;
        param_1[uVar1] = 0;
      }
      else if (uVar2 == uVar1) {
        param_1[uVar1] = 0;
        return 0;
      }
      return uVar3;
    }
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  return 0x80070057;
}



/* Function: FUN_004027c0 */

undefined4 __fastcall FUN_004027c0(short *param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar2 = 0x7ffffffe;
    iVar5 = param_4 - (int)param_1;
    do {
      if ((iVar2 == 0) || (sVar1 = *(short *)(iVar5 + (int)param_1), sVar1 == 0)) break;
      *param_1 = sVar1;
      iVar2 = iVar2 + -1;
      param_1 = param_1 + 1;
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



/* Function: FUN_00402820 */

undefined4 * __thiscall FUN_00402820(void *this,int param_1)

{
  *(undefined ***)this = &PTR_FUN_00401100;
  *(undefined8 *)((int)this + 4) = 0;
  o___std_exception_copy(param_1 + 4,(undefined8 *)((int)this + 4));
  return (undefined4 *)this;
}



/* Function: FUN_00402860 */

char * __fastcall FUN_00402860(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_00402880 */

undefined4 * __thiscall FUN_00402880(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401100;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_0040a69c(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004028c0 */

short * __cdecl FUN_004028c0(short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  uVar2 = (int)param_2 - (int)param_1 >> 1;
  if (uVar2 != 0) {
    if (uVar2 < 0x80000000) {
      uVar2 = uVar2 - 1;
      uVar3 = FUN_0040b056(param_1,uVar2,param_3,&stack0x00000010);
      if ((((int)uVar3 < 0) || (uVar2 < uVar3)) || (uVar3 == uVar2)) {
        param_1[uVar2] = 0;
      }
    }
    else {
      *param_1 = 0;
    }
  }
  if (param_2 == param_1) {
    return param_1;
  }
  psVar4 = param_1;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  return param_1 + ((int)psVar4 - (int)(param_1 + 1) >> 1);
}



/* Function: FUN_00402940 */

void __fastcall FUN_00402940(short *param_1,int param_2,undefined4 *param_3)

{
  short *psVar1;
  code *pcVar2;
  short *psVar3;
  short *local_218;
  WCHAR local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = DAT_0040c558;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b3f0;
  local_10 = ExceptionList;
  local_14 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar2 != (code *)0x0) && (DAT_0040c568 != '\0')) {
      (*(code *)PTR_guard_check_icall_0040d1e4)(param_3,param_1,param_2,local_14);
      (*pcVar2)();
      if (*param_1 != 0) goto LAB_00402bac;
    }
    switch(*param_3) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
    }
    memset(local_214,0,0x200);
    pcVar2 = DAT_0040c570;
    if ((*(byte *)(param_3 + 1) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,param_3[2],0x400,local_214,0x100,(va_list *)0x0);
    }
    else if (DAT_0040c570 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040d1e4)(param_3[3],local_214,0x100);
      (*pcVar2)();
    }
    psVar1 = param_1 + param_2;
    if (param_3[9] == 0) {
      local_218 = FUN_004028c0(param_1,psVar1,L"%hs!%p: ");
    }
    else {
      local_218 = FUN_004028c0(param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (param_3[0x15] != 0) {
      local_218 = FUN_004028c0(local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar3 = FUN_004028c0(local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((param_3[5] != 0) || (param_3[0xc] != 0)) || (param_3[8] != 0)) {
      psVar3 = FUN_004028c0(psVar3,psVar1,L"    ");
      if (param_3[5] != 0) {
        psVar3 = FUN_004028c0(psVar3,psVar1,L"Msg:[%ws] ");
      }
      if (param_3[0xc] != 0) {
        psVar3 = FUN_004028c0(psVar3,psVar1,L"CallContext:[%hs] ");
      }
      if (param_3[7] == 0) {
        if (param_3[8] == 0) {
          FUN_004028c0(psVar3,psVar1,&DAT_00401634);
        }
        else {
          FUN_004028c0(psVar3,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_004028c0(psVar3,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_00402bac:
  ExceptionList = local_10;
  FUN_0040a3f0(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402bf0 */

uint * __thiscall FUN_00402bf0(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_004030e0((uint)this);
  param_1[1] = uVar1;
  param_1[2] = 0;
  return param_1;
}



/* Function: FUN_00402c20 */

LPVOID __fastcall FUN_00402c20(DWORD param_1,SIZE_T param_2)

{
  FARPROC pFVar1;
  uint uVar2;
  HANDLE hHeap;
  LPVOID pvVar3;
  HMODULE hModule;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b420;
  local_10 = ExceptionList;
  uVar2 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0040c534 == (FARPROC)0x0) {
    if (DAT_0040c5cc != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0040c534 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0040c5cc = '\x01';
    if (DAT_0040c534 == (FARPROC)0x0) {
      DAT_0040c5cc = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_0040c534;
  (*(code *)PTR_guard_check_icall_0040d1e4)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00402ce0 */

undefined4 __thiscall FUN_00402ce0(void *this,int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int *piVar3;
  int in_EAX;
  HANDLE pvVar4;
  int *piVar5;
  int *piVar6;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
                    /* WARNING: Load size is inaccurate */
    piVar5 = *this;
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar1 = *piVar5;
      in_EAX = *piVar5;
      *piVar5 = iVar1 + -1;
      UNLOCK();
      if (iVar1 + -1 == 0) {
                    /* WARNING: Load size is inaccurate */
        pvVar2 = *this;
        pvVar4 = GetProcessHeap();
        in_EAX = HeapFree(pvVar4,0,pvVar2);
      }
      *(undefined4 *)this = 0;
      *(undefined4 *)((int)this + 4) = 0;
    }
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  dwBytes = param_1 + 4;
  dwFlags = 0;
  pvVar4 = GetProcessHeap();
  piVar5 = (int *)HeapAlloc(pvVar4,dwFlags,dwBytes);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  *piVar5 = 0;
                    /* WARNING: Load size is inaccurate */
  piVar3 = *this;
  piVar6 = piVar5;
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar3;
    piVar6 = (int *)*piVar3;
    *piVar3 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
                    /* WARNING: Load size is inaccurate */
      pvVar2 = *this;
      pvVar4 = GetProcessHeap();
      piVar6 = (int *)HeapFree(pvVar4,0,pvVar2);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(int **)this = piVar5;
  *(int *)((int)this + 4) = param_1;
  LOCK();
  *piVar5 = *piVar5 + 1;
  UNLOCK();
  return CONCAT31((int3)((uint)piVar6 >> 8),1);
}



/* Function: FUN_00402da0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00402da0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040c5b4;
  _DAT_0040c5b8 = param_1;
  LOCK();
  DAT_0040c5b4 = DAT_0040c5b4 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00402dc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00402dc0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040c5d8;
  _DAT_0040c544 = param_1;
  LOCK();
  DAT_0040c5d8 = DAT_0040c5d8 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00402de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00402de0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040c634;
  _DAT_0040c5d4 = param_1;
  LOCK();
  DAT_0040c634 = DAT_0040c634 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00402e00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402e00(undefined4 param_1)

{
  _DAT_0040c628 = param_1;
  return 1;
}



/* Function: FUN_00402e20 */

void FUN_00402e20(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0040c598;
  if (DAT_0040c598 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00402e60 */

void FUN_00402e60(LPCWSTR param_1,int *param_2,char *param_3,uint param_4)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  char *pcVar4;
  CHAR *pCVar5;
  int iVar6;
  int iVar7;
  HMODULE local_110;
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  local_110 = (HMODULE)0x0;
  if ((param_1 != (LPCWSTR)0x0) && (BVar2 = GetModuleHandleExW(6,param_1,&local_110), BVar2 == 0)) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      FUN_0040a3f0(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
LAB_00402ef2:
    FUN_0040a3f0(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_2 != (int *)0x0) {
    iVar6 = 0;
    if (param_1 != (LPCWSTR)0x0) {
      iVar6 = (int)param_1 - (int)local_110;
    }
    *param_2 = iVar6;
  }
  if (param_3 != (char *)0x0) {
    DVar3 = GetModuleFileNameA(local_110,local_10c,0x104);
    if (DVar3 == 0) goto LAB_00402ef2;
    pcVar4 = local_10c;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pCVar5 = local_10c + ((int)pcVar4 - (int)(local_10c + 1));
    if (local_10c < pCVar5) {
      do {
        if (pCVar5[-1] == '\\') break;
        pCVar5 = pCVar5 + -1;
      } while (local_10c < pCVar5);
    }
    if (param_4 != 0) {
      if (param_4 < 0x80000000) {
        iVar7 = 0x7ffffffe - param_4;
        iVar6 = (int)pCVar5 - (int)param_3;
        do {
          if ((iVar7 + param_4 == 0) || (param_3[iVar6] == '\0')) break;
          *param_3 = param_3[iVar6];
          param_3 = param_3 + 1;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
        pcVar4 = param_3 + -1;
        if (param_4 != 0) {
          pcVar4 = param_3;
        }
        *pcVar4 = '\0';
      }
      else {
        *param_3 = '\0';
      }
    }
  }
  FUN_0040a3f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402f90 */

undefined * FUN_00402f90(void)

{
  if (DAT_0040c5bc == '\0') {
    FUN_00402e60((LPCWSTR)FUN_00402e00,(int *)0x0,&DAT_0040c5e0,0x40);
    DAT_0040c5bc = '\x01';
  }
  return &DAT_0040c5e0;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00402fd0 */

void FUN_00402fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00403020 */

uint __fastcall FUN_00403020(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_0040c5a0;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b450;
  local_10 = ExceptionList;
  if (-1 < (int)param_1) {
    return 0;
  }
  if (param_1 != 0xc0000017) {
    if (DAT_0040c5a0 != (code *)0x0) {
      ExceptionList = &local_10;
      (*(code *)PTR_guard_check_icall_0040d1e4)(param_1,DAT_0040c100 ^ (uint)&stack0xfffffffc);
      uVar2 = (*pcVar1)();
      if ((uVar2 != 0) && (uVar2 != 0x13d)) {
        if ((int)uVar2 < 1) {
          ExceptionList = local_10;
          return uVar2;
        }
        ExceptionList = local_10;
        return uVar2 & 0xffff | 0x80070000;
      }
    }
    ExceptionList = local_10;
    return param_1 | 0x10000000;
  }
  return 0x8007000e;
}



/* Function: FUN_004030e0 */

uint __fastcall FUN_004030e0(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < -0x7ff8fffe) {
    if (param_1 == 0x80070001) {
      return 0xc0000002;
    }
    if (param_1 == 0x80004005) {
      return 0xc0000001;
    }
  }
  else if ((int)param_1 < -0x7ff8fde9) {
    if (param_1 == 0x80070216) {
      return 0xc0000095;
    }
    switch(param_1) {
    case 0x80070002:
      return 0xc0000034;
    case 0x80070003:
      return 0xc000003a;
    case 0x8007000e:
      return 0xc0000017;
    case 0x80070057:
      return 0xc000000d;
    case 0x80070070:
      return 0xc000007f;
    case 0x8007007a:
      return 0xc0000023;
    case 0x8007007b:
      return 0xc0000033;
    case 0x8007007e:
      return 0xc0000135;
    case 0x800700ea:
      return 0x80000005;
    }
  }
  else if ((int)param_1 < -0x7ff8fb81) {
    if (param_1 == 0x8007047e) {
      return 0xc0000059;
    }
    switch(param_1) {
    case 0x8007023e:
      return 0xc0000025;
    case 0x80070246:
      return 0xc0000161;
    case 0x80070247:
      return 0xc0000163;
    case 0x80070272:
      return 0xc0000273;
    }
  }
  else if ((int)param_1 < -0x7ff8fa46) {
    if (param_1 == 0x800705b9) {
      return 0xc000a083;
    }
    if (param_1 == 0x8007050c) {
      return 0xc000042b;
    }
    if (param_1 == 0x8007054f) {
      return 0xc00000e5;
    }
  }
  else if (param_1 == 0) {
    return 0;
  }
  if ((param_1 & 0x10000000) != 0) {
    return param_1 & 0xefffffff;
  }
  if ((param_1 & 0x1fff0000) != 0x70000) {
    if ((param_1 & 0x1fff0000) != 0x90000) {
      return 0xc00000e5;
    }
    if ((int)param_1 < 1) {
      return param_1;
    }
    return param_1 & 0xffff | 0xc0090000;
  }
  uVar1 = param_1 & 0xffff;
  if (uVar1 != 0) {
    uVar1 = uVar1 | 0xc0070000;
  }
  return uVar1;
}



/* Function: FUN_004033c0 */

DWORD __fastcall
FUN_004033c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004084a0(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_00403430 */

uint FUN_00403430(void)

{
  uint uVar1;
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040b480;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = GetLastError();
  if (uVar1 == 0) {
    FUN_004084a0(0,0,0,0,0,unaff_retaddr,0x8007029c);
    uVar1 = 0x29c;
  }
  else if ((int)uVar1 < 1) {
    ExceptionList = local_10;
    return uVar1;
  }
  ExceptionList = local_10;
  return uVar1 & 0xffff | 0x80070000;
}



/* Function: FUN_004034b0 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_004034b0(void *this,undefined4 *param_1)

{
  short *psVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  int *piVar6;
  LPVOID lpMem;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  HANDLE hHeap;
  int iVar10;
  int iVar11;
  short *psVar12;
  void *pvVar13;
  char *pcVar14;
  void *pvVar15;
  undefined4 *puVar16;
  int *this_00;
  int local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  int local_c;
  
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar7;
  *(undefined4 *)((int)this + 8) = uVar8;
  *(undefined4 *)((int)this + 0xc) = uVar9;
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  uVar9 = param_1[7];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = uVar7;
  *(undefined4 *)((int)this + 0x18) = uVar8;
  *(undefined4 *)((int)this + 0x1c) = uVar9;
  uVar7 = param_1[9];
  uVar8 = param_1[10];
  uVar9 = param_1[0xb];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = uVar7;
  *(undefined4 *)((int)this + 0x28) = uVar8;
  *(undefined4 *)((int)this + 0x2c) = uVar9;
  uVar7 = param_1[0xd];
  uVar8 = param_1[0xe];
  uVar9 = param_1[0xf];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = uVar7;
  *(undefined4 *)((int)this + 0x38) = uVar8;
  *(undefined4 *)((int)this + 0x3c) = uVar9;
  uVar7 = param_1[0x11];
  uVar8 = param_1[0x12];
  uVar9 = param_1[0x13];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = uVar7;
  *(undefined4 *)((int)this + 0x48) = uVar8;
  *(undefined4 *)((int)this + 0x4c) = uVar9;
  *(undefined8 *)((int)this + 0x50) = *(undefined8 *)(param_1 + 0x14);
  psVar12 = (short *)param_1[5];
  if (psVar12 == (short *)0x0) {
    local_28 = 2;
  }
  else {
    psVar1 = psVar12 + 1;
    do {
      sVar5 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar5 != 0);
    local_28 = ((int)psVar12 - (int)psVar1 >> 1) * 2 + 2;
  }
  local_24 = (char *)param_1[7];
  if (local_24 == (char *)0x0) {
    local_24 = (char *)0x1;
  }
  else {
    pcVar14 = local_24 + 1;
    do {
      cVar4 = *local_24;
      local_24 = local_24 + 1;
    } while (cVar4 != '\0');
    local_24 = local_24 + (1 - (int)pcVar14);
  }
  local_20 = (char *)param_1[8];
  if (local_20 == (char *)0x0) {
    local_20 = (char *)0x1;
  }
  else {
    pcVar14 = local_20 + 1;
    do {
      cVar4 = *local_20;
      local_20 = local_20 + 1;
    } while (cVar4 != '\0');
    local_20 = local_20 + (1 - (int)pcVar14);
  }
  local_1c = (char *)param_1[9];
  if (local_1c == (char *)0x0) {
    local_1c = (char *)0x1;
  }
  else {
    pcVar14 = local_1c + 1;
    do {
      cVar4 = *local_1c;
      local_1c = local_1c + 1;
    } while (cVar4 != '\0');
    local_1c = local_1c + (1 - (int)pcVar14);
  }
  local_18 = (char *)param_1[0xc];
  if (local_18 == (char *)0x0) {
    local_18 = (char *)0x1;
  }
  else {
    pcVar14 = local_18 + 1;
    do {
      cVar4 = *local_18;
      local_18 = local_18 + 1;
    } while (cVar4 != '\0');
    local_18 = local_18 + (1 - (int)pcVar14);
  }
  local_14 = (char *)param_1[0x13];
  if (local_14 == (char *)0x0) {
    local_14 = (char *)0x1;
  }
  else {
    pcVar14 = local_14 + 1;
    do {
      cVar4 = *local_14;
      local_14 = local_14 + 1;
    } while (cVar4 != '\0');
    local_14 = local_14 + (1 - (int)pcVar14);
  }
  local_10 = (char *)param_1[0x11];
  if (local_10 == (char *)0x0) {
    local_10 = (char *)0x1;
  }
  else {
    pcVar14 = local_10 + 1;
    do {
      cVar4 = *local_10;
      local_10 = local_10 + 1;
    } while (cVar4 != '\0');
    local_10 = local_10 + (1 - (int)pcVar14);
  }
  psVar12 = (short *)param_1[0x12];
  if (psVar12 == (short *)0x0) {
    local_c = 2;
  }
  else {
    psVar1 = psVar12 + 1;
    do {
      sVar5 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar5 != 0);
    local_c = ((int)psVar12 - (int)psVar1 >> 1) * 2 + 2;
  }
  pcVar14 = (char *)param_1[0xe];
  if (pcVar14 == (char *)0x0) {
    iVar10 = 0;
  }
  else {
    pcVar2 = pcVar14 + 1;
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    iVar10 = (int)pcVar14 - (int)pcVar2;
  }
  psVar12 = (short *)param_1[0xf];
  if (psVar12 == (short *)0x0) {
    iVar11 = 2;
  }
  else {
    psVar1 = psVar12 + 1;
    do {
      sVar5 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar5 != 0);
    iVar11 = ((int)psVar12 - (int)psVar1 >> 1) * 2 + 2;
  }
  this_00 = (int *)((int)this + 0x58);
  piVar6 = (int *)*this_00;
  if (piVar6 == (int *)0x0) {
LAB_004036c9:
    FUN_00402ce0(this_00,(int)(local_10 + iVar11 + iVar10 + 1 + local_c + (int)local_14 +
                               (int)local_18 + (int)local_1c + (int)local_20 + (int)local_24 +
                              local_28));
  }
  else if ((*piVar6 != 1) ||
          (*(char **)((int)this + 0x5c) <
           local_10 + iVar11 + iVar10 + 1 + local_c + (int)local_14 + (int)local_18 + (int)local_1c
           + (int)local_20 + (int)local_24 + local_28)) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = iVar3 + -1;
      UNLOCK();
      if (iVar3 + -1 == 0) {
        lpMem = (LPVOID)*this_00;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
      }
      *this_00 = 0;
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
    goto LAB_004036c9;
  }
  pvVar13 = (void *)(-(uint)(*this_00 != 0) & *this_00 + 4U);
  if (pvVar13 == (void *)0x0) {
    return;
  }
  pvVar15 = (void *)(*(int *)((int)this + 0x5c) + (int)pvVar13);
  pvVar13 = FUN_004084f0(pvVar13,pvVar15,(short *)param_1[5],(undefined4 *)((int)this + 0x14));
  pcVar14 = (char *)param_1[7];
  puVar16 = (undefined4 *)((int)this + 0x1c);
  if (((pvVar13 == pvVar15) || (pcVar14 == (char *)0x0)) || (*pcVar14 == '\0')) {
    if (puVar16 != (undefined4 *)0x0) {
      *puVar16 = 0;
    }
LAB_00403775:
    pcVar14 = (char *)param_1[8];
    if (pvVar13 != pvVar15) goto LAB_00403782;
LAB_004037de:
    if ((undefined4 *)((int)this + 0x20) != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
LAB_004037e8:
    pcVar14 = (char *)param_1[9];
    if (pvVar13 != pvVar15) goto LAB_004037f5;
LAB_00403851:
    if ((undefined4 *)((int)this + 0x24) != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x24) = 0;
    }
LAB_0040385b:
    pcVar14 = (char *)param_1[0xc];
    if (pvVar13 != pvVar15) goto LAB_00403868;
LAB_004038cb:
    if ((undefined4 *)((int)this + 0x30) != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x30) = 0;
    }
LAB_004038d5:
    pcVar14 = (char *)param_1[0x13];
    if (pvVar13 != pvVar15) goto LAB_004038e2;
LAB_0040393e:
    if ((undefined4 *)((int)this + 0x4c) != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x4c) = 0;
    }
LAB_00403948:
    pcVar14 = (char *)param_1[0x11];
    if (pvVar13 != pvVar15) goto LAB_00403955;
LAB_0040399a:
    if ((undefined4 *)((int)this + 0x44) != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  else {
    pcVar2 = pcVar14 + 1;
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pcVar14 = pcVar14 + (1 - (int)pcVar2);
    if (pcVar14 <= (char *)((int)pvVar15 - (int)pvVar13)) {
      FUN_00402690(pvVar13,(uint)((int)pvVar15 - (int)pvVar13),(void *)param_1[7],(uint)pcVar14);
      if (puVar16 != (undefined4 *)0x0) {
        *puVar16 = pvVar13;
      }
      pvVar13 = (void *)((int)pvVar13 + (int)pcVar14);
      goto LAB_00403775;
    }
    if (puVar16 != (undefined4 *)0x0) {
      *puVar16 = 0;
    }
    pcVar14 = (char *)param_1[8];
LAB_00403782:
    puVar16 = (undefined4 *)((int)this + 0x20);
    if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) goto LAB_004037de;
    pcVar2 = pcVar14 + 1;
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pcVar14 = pcVar14 + (1 - (int)pcVar2);
    if (pcVar14 <= (char *)((int)pvVar15 - (int)pvVar13)) {
      FUN_00402690(pvVar13,(uint)((int)pvVar15 - (int)pvVar13),(void *)param_1[8],(uint)pcVar14);
      if (puVar16 != (undefined4 *)0x0) {
        *puVar16 = pvVar13;
      }
      pvVar13 = (void *)((int)pvVar13 + (int)pcVar14);
      goto LAB_004037e8;
    }
    if (puVar16 != (undefined4 *)0x0) {
      *puVar16 = 0;
    }
    pcVar14 = (char *)param_1[9];
LAB_004037f5:
    puVar16 = (undefined4 *)((int)this + 0x24);
    if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) goto LAB_00403851;
    pcVar2 = pcVar14 + 1;
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pcVar14 = pcVar14 + (1 - (int)pcVar2);
    if (pcVar14 <= (char *)((int)pvVar15 - (int)pvVar13)) {
      FUN_00402690(pvVar13,(uint)((int)pvVar15 - (int)pvVar13),(void *)param_1[9],(uint)pcVar14);
      if (puVar16 != (undefined4 *)0x0) {
        *puVar16 = pvVar13;
      }
      pvVar13 = (void *)((int)pvVar13 + (int)pcVar14);
      goto LAB_0040385b;
    }
    if (puVar16 != (undefined4 *)0x0) {
      *puVar16 = 0;
    }
    pcVar14 = (char *)param_1[0xc];
LAB_00403868:
    puVar16 = (undefined4 *)((int)this + 0x30);
    if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) goto LAB_004038cb;
    pcVar2 = pcVar14 + 1;
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pcVar14 = pcVar14 + (1 - (int)pcVar2);
    if (pcVar14 <= (char *)((int)pvVar15 - (int)pvVar13)) {
      FUN_00402690(pvVar13,(uint)((int)pvVar15 - (int)pvVar13),(void *)param_1[0xc],(uint)pcVar14);
      if (puVar16 != (undefined4 *)0x0) {
        *puVar16 = pvVar13;
      }
      pvVar13 = (void *)((int)pvVar13 + (int)pcVar14);
      goto LAB_004038d5;
    }
    if (puVar16 != (undefined4 *)0x0) {
      *puVar16 = 0;
    }
    pcVar14 = (char *)param_1[0x13];
LAB_004038e2:
    puVar16 = (undefined4 *)((int)this + 0x4c);
    if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) goto LAB_0040393e;
    pcVar2 = pcVar14 + 1;
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pcVar14 = pcVar14 + (1 - (int)pcVar2);
    if (pcVar14 <= (char *)((int)pvVar15 - (int)pvVar13)) {
      FUN_00402690(pvVar13,(uint)((int)pvVar15 - (int)pvVar13),(void *)param_1[0x13],(uint)pcVar14);
      if (puVar16 != (undefined4 *)0x0) {
        *puVar16 = pvVar13;
      }
      pvVar13 = (void *)((int)pvVar13 + (int)pcVar14);
      goto LAB_00403948;
    }
    if (puVar16 != (undefined4 *)0x0) {
      *puVar16 = 0;
    }
    pcVar14 = (char *)param_1[0x11];
LAB_00403955:
    if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) goto LAB_0040399a;
    pcVar2 = pcVar14 + 1;
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pcVar14 = pcVar14 + (1 - (int)pcVar2);
    if ((char *)((int)pvVar15 - (int)pvVar13) < pcVar14) goto LAB_0040399a;
    FUN_00402690(pvVar13,(uint)((int)pvVar15 - (int)pvVar13),(void *)param_1[0x11],(uint)pcVar14);
    if ((undefined4 *)((int)this + 0x44) != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x44) = pvVar13;
    }
    pvVar13 = (void *)((int)pvVar13 + (int)pcVar14);
  }
  pvVar13 = FUN_004084f0(pvVar13,pvVar15,(short *)param_1[0x12],(undefined4 *)((int)this + 0x48));
  puVar16 = (undefined4 *)((int)this + 0x38);
  pcVar14 = (char *)param_1[0xe];
  if (((pvVar13 != pvVar15) && (pcVar14 != (char *)0x0)) && (*pcVar14 != '\0')) {
    pcVar2 = pcVar14 + 1;
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pcVar14 = pcVar14 + (1 - (int)pcVar2);
    if (pcVar14 <= (char *)((int)pvVar15 - (int)pvVar13)) {
      FUN_00402690(pvVar13,(uint)((int)pvVar15 - (int)pvVar13),(void *)param_1[0xe],(uint)pcVar14);
      if (puVar16 != (undefined4 *)0x0) {
        *puVar16 = pvVar13;
      }
      pvVar13 = (void *)((int)pvVar13 + (int)pcVar14);
      goto LAB_00403a11;
    }
  }
  if (puVar16 != (undefined4 *)0x0) {
    *puVar16 = 0;
  }
LAB_00403a11:
  pvVar13 = FUN_004084f0(pvVar13,pvVar15,(short *)param_1[0xf],(undefined4 *)((int)this + 0x3c));
  memset(pvVar13,0,(int)pvVar15 - (int)pvVar13);
  return;
}



/* Function: FUN_00403a50 */

undefined4 * __thiscall FUN_00403a50(void *this,undefined4 *param_1)

{
  *(undefined8 *)((int)this + 4) = 0;
  *(undefined ***)this = &PTR_FUN_0040111c;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_004034b0((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_00403aa0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00403aa0(int param_1)

{
  int iVar1;
  int cbMultiByte;
  undefined4 uVar2;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x6c) == 0) {
    FUN_00402940(local_1008,0x800,(undefined4 *)(param_1 + 0xc));
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar2 = FUN_00402ce0((int *)(param_1 + 0x6c),cbMultiByte);
    if ((char)uVar2 == '\0') {
      FUN_0040a3f0(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x6c);
    WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(iVar1 != 0) & iVar1 + 4U),cbMultiByte,
                        (LPCSTR)0x0,(LPBOOL)0x0);
  }
  FUN_0040a3f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403b60 */

undefined4 * __thiscall FUN_00403b60(void *this,byte param_1)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  HANDLE pvVar4;
  
  piVar2 = *(int **)((int)this + 0x6c);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      pvVar3 = *(LPVOID *)((int)this + 0x6c);
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar3);
    }
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  piVar2 = *(int **)((int)this + 100);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      pvVar3 = *(LPVOID *)((int)this + 100);
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar3);
    }
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  *(undefined ***)this = &PTR_FUN_00401100;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_0040a69c(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403c00 */

void __fastcall FUN_00403c00(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  HANDLE pvVar4;
  
  piVar2 = (int *)param_1[0x1b];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      pvVar3 = (LPVOID)param_1[0x1b];
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar3);
    }
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  piVar2 = (int *)param_1[0x19];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      pvVar3 = (LPVOID)param_1[0x19];
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar3);
    }
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  *param_1 = &PTR_FUN_00401100;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_00403c90 */

void FUN_00403c90(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00403ca0 */

void FUN_00403ca0(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_00403a50(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_0040bb64);
}



/* Function: FUN_00403cd0 */

undefined4 * __thiscall FUN_00403cd0(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined ***)this = &PTR_FUN_00401100;
  *(undefined8 *)((int)this + 4) = 0;
  o___std_exception_copy(param_1 + 4,(undefined8 *)((int)this + 4));
  *(undefined ***)this = &PTR_FUN_0040111c;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = uVar2;
  *(undefined4 *)((int)this + 0x14) = uVar3;
  *(undefined4 *)((int)this + 0x18) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = uVar2;
  *(undefined4 *)((int)this + 0x24) = uVar3;
  *(undefined4 *)((int)this + 0x28) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = uVar2;
  *(undefined4 *)((int)this + 0x34) = uVar3;
  *(undefined4 *)((int)this + 0x38) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = uVar2;
  *(undefined4 *)((int)this + 0x44) = uVar3;
  *(undefined4 *)((int)this + 0x48) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = uVar2;
  *(undefined4 *)((int)this + 0x54) = uVar3;
  *(undefined4 *)((int)this + 0x58) = uVar4;
  *(undefined8 *)((int)this + 0x5c) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  piVar1 = *(int **)(param_1 + 100);
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    *(int **)((int)this + 100) = piVar1;
    *(undefined4 *)((int)this + 0x68) = uVar2;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  piVar1 = *(int **)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    *(int **)((int)this + 0x6c) = piVar1;
    *(undefined4 *)((int)this + 0x70) = uVar2;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403d90 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall
FUN_00403d90(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8,short *param_9,undefined4 param_10,LPCWSTR param_11,undefined4 param_12,
            undefined1 *param_13,undefined4 param_14,int *param_15)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  BOOL BVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b4b0;
  local_10 = ExceptionList;
  uVar3 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar8 = 0;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar5 = *param_8;
  param_15[2] = iVar5;
  param_15[3] = param_8[1];
  switch(param_7) {
  case 0:
    iVar8 = FUN_00402da0(iVar5);
    break;
  case 1:
    iVar8 = FUN_00402dc0(iVar5);
    break;
  case 2:
    if (-1 < iVar5) {
      FUN_004084a0(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar4 = FUN_004030e0(0x8007029c);
      param_15[3] = uVar4;
      iVar5 = -0x7ff8fd64;
    }
    iVar8 = FUN_00402de0(iVar5);
    break;
  case 3:
    iVar8 = FUN_00402e00(iVar5);
  }
  *param_15 = param_7;
  param_15[1] = 0;
  if (param_8[2] == 1) {
    param_15[1] = 8;
  }
  LOCK();
  UNLOCK();
  iVar5 = DAT_0040c5c0 + 1;
  DAT_0040c5c0 = DAT_0040c5c0 + 1;
  param_15[4] = iVar5;
  if ((param_9 == (short *)0x0) || (*param_9 == 0)) {
    param_9 = (short *)0x0;
  }
  param_15[5] = (int)param_9;
  DVar6 = GetCurrentThreadId();
  param_15[6] = DVar6;
  param_15[9] = param_3;
  param_15[10] = param_2;
  param_15[7] = param_5;
  param_15[8] = param_4;
  param_15[0x14] = param_6;
  param_15[0xb] = iVar8;
  pcVar1 = DAT_0040c59c;
  param_15[0x15] = param_1;
  param_15[0xc] = 0;
  param_15[0x10] = 0;
  param_15[0x11] = 0;
  param_15[0x12] = 0;
  param_15[0xd] = 0;
  param_15[0xe] = 0;
  param_15[0xf] = 0;
  if (pcVar1 == (code *)0x0) {
    iVar5 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040d1e4)(uVar3);
    iVar5 = (*pcVar1)();
  }
  pcVar1 = DAT_0040c560;
  param_15[0x13] = iVar5;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c578;
  if (DAT_0040c578 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c574;
  if (DAT_0040c574 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c588;
  if ((DAT_0040c588 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_00404390();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_15[2] = -0x7fff0001;
    uVar3 = FUN_004030e0(0x8000ffff);
    param_15[3] = uVar3;
  }
  pcVar1 = DAT_0040c54c;
  if (DAT_0040c554 == '\0') {
    if (DAT_0040c54c == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040d1e4)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00403faa;
  }
  else {
LAB_00403faa:
    pcVar1 = DAT_0040c558;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_0040c558 != (code *)0x0) && (DAT_0040c568 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040d1e4)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_00402940(param_11,0x800,param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00404012;
    }
  }
  pcVar1 = DAT_0040c558;
  if ((DAT_0040c558 != (code *)0x0) && (DAT_0040c568 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00404012:
  pcVar1 = DAT_0040c580;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_0040c55c != '\0')) &&
     (DAT_0040c580 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040d1e4)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404070 */

void __fastcall FUN_00404070(int param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0040c5a4;
  if (DAT_0040c5a4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c58c;
  if (DAT_0040c58c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(param_1);
    (*pcVar1)();
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00402e20(1);
  }
  FUN_00402e20(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404130 */

void __fastcall
FUN_00404130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  FUN_00408590(param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404150 */

void __fastcall
FUN_00404150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,void *param_7)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  uint local_28 [5];
  undefined8 local_14;
  uint local_c;
  
  puVar2 = FUN_00402bf0(param_7,local_28);
  local_14 = *(undefined8 *)puVar2;
  local_c = puVar2[2];
  FUN_00404130(param_1,param_2,param_3,in_stack_ffffffb8,in_stack_ffffffbc,param_6,(int *)&local_14)
  ;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004041a0 */

void __fastcall FUN_004041a0(int param_1,int param_2)

{
  code *pcVar1;
  void *this;
  uint *puVar2;
  int in_stack_00000010;
  undefined4 in_stack_ffffffbc;
  undefined4 uVar3;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  uint local_24 [5];
  undefined8 local_10;
  uint local_8;
  
  uVar3 = 0x4041be;
  this = (void *)FUN_004033c0(param_1,param_2,0x4016b8,in_stack_ffffffc8,in_stack_ffffffcc,
                              in_stack_00000010);
  if (0 < (int)this) {
    this = (void *)((uint)this & 0xffff | 0x80070000);
  }
  puVar2 = FUN_00402bf0(this,local_24);
  local_10 = *(undefined8 *)puVar2;
  local_8 = puVar2[2];
  FUN_00404130(param_1,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               in_stack_ffffffbc,uVar3,in_stack_00000010,(int *)&local_10);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404210 */

void __fastcall FUN_00404210(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b4e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004088c0(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404260 */

void __fastcall FUN_00404260(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408910(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004042b0 */

void __fastcall FUN_004042b0(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004041a0(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004042f0 */

void __fastcall FUN_004042f0(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00404150(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               in_stack_ffffffd8,in_stack_ffffffdc,unaff_retaddr,(void *)0x8000ffff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00404340 */

void __fastcall FUN_00404340(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00404150(param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc,unaff_retaddr,
               (void *)0x8000ffff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00404390 */

void FUN_00404390(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004043a0 */

void FUN_004043a0(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0040c5d0 == (HMODULE)0x0) {
    DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0040c5d0,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_004043f0 */

void FUN_004043f0(undefined4 param_1)

{
  FARPROC pFVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b510;
  local_10 = ExceptionList;
  uVar2 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0040c53c == (FARPROC)0x0) {
    if (DAT_0040c5d0 == (HMODULE)0x0) {
      DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_0040c53c = GetProcAddress(DAT_0040c5d0,"RtlNtStatusToDosErrorNoTeb");
    if (DAT_0040c53c == (FARPROC)0x0) {
      ExceptionList = local_10;
      return;
    }
  }
  pFVar1 = DAT_0040c53c;
  (*(code *)PTR_guard_check_icall_0040d1e4)(param_1,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404490 */

int FUN_00404490(void)

{
  FARPROC pFVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b510;
  local_10 = ExceptionList;
  uVar2 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0040c624 == (FARPROC)0x0) {
    if (DAT_0040c5d0 == (HMODULE)0x0) {
      DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_0040c624 = GetProcAddress(DAT_0040c5d0,"RtlDllShutdownInProgress");
    if (DAT_0040c624 == (FARPROC)0x0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  pFVar1 = DAT_0040c624;
  (*(code *)PTR_guard_check_icall_0040d1e4)(uVar2);
  iVar3 = (*pFVar1)();
  ExceptionList = local_10;
  return iVar3;
}



/* Function: FUN_00404530 */

void FUN_00404530(undefined1 *param_1)

{
  uint uVar1;
  FARPROC pFVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar2 = DAT_0040c5ac;
  puStack_c = &LAB_0040b540;
  local_10 = ExceptionList;
  uVar1 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_0040c5a8;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_0040c5ac == (FARPROC)0x0) {
    if (DAT_0040c620 == (HMODULE)0x0) {
      DAT_0040c620 = GetModuleHandleW(L"kernelbase.dll");
      if (DAT_0040c620 != (HMODULE)0x0) goto LAB_004045c9;
    }
    else {
LAB_004045c9:
      pFVar2 = GetProcAddress(DAT_0040c620,"WilFailureNotifyWatchers");
    }
    DAT_0040c5ac = pFVar2;
    if (pFVar2 == (FARPROC)0x0) goto LAB_004045f5;
  }
  pFVar2 = DAT_0040c5ac;
  (*(code *)PTR_guard_check_icall_0040d1e4)(0,&local_34,&local_18,uVar1);
  (*pFVar2)();
LAB_004045f5:
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_18;
  if (local_18._4_1_ == '\x01') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  else {
    if (local_18._4_1_ == '\x02') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
      ExceptionList = local_10;
      return;
    }
    if (local_18._4_1_ == '\x03') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404660 */

int __fastcall
FUN_00404660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (DAT_0040c62c == (FARPROC)0x0) {
    if (DAT_0040c5d0 == (HMODULE)0x0) {
      DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
    }
    DAT_0040c62c = GetProcAddress(DAT_0040c5d0,"NtUpdateWnfStateData");
    if (DAT_0040c62c == (FARPROC)0x0) {
      return -0x3ffffec7;
    }
  }
  pFVar1 = DAT_0040c62c;
  (*(code *)PTR_guard_check_icall_0040d1e4)(param_1,param_2,param_3,0,0,param_6,param_7);
  iVar2 = (*pFVar1)();
  return iVar2;
}



/* Function: FUN_004046e0 */

void __thiscall FUN_004046e0(void *this,undefined1 *param_1,undefined4 param_2)

{
  short *psVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char cVar5;
  short sVar6;
  LPVOID lpMem;
  uint uVar7;
  LPVOID pvVar8;
  HANDLE hHeap;
  void *_Dst;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x12) = *param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x20) = 0;
  pcVar16 = *(char **)(param_1 + 0x24);
  if (pcVar16 == (char *)0x0) {
    iVar9 = 0;
  }
  else {
    pcVar4 = pcVar16 + 1;
    do {
      cVar5 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar5 != '\0');
    iVar9 = (int)pcVar16 - (int)pcVar4;
  }
  pcVar16 = *(char **)(param_1 + 0x4c);
  if (pcVar16 == (char *)0x0) {
    iVar10 = 0;
  }
  else {
    pcVar4 = pcVar16 + 1;
    do {
      cVar5 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar5 != '\0');
    iVar10 = (int)pcVar16 - (int)pcVar4;
  }
  psVar12 = *(short **)(param_1 + 0x14);
  if (psVar12 == (short *)0x0) {
    iVar11 = 2;
  }
  else {
    psVar1 = psVar12 + 1;
    do {
      sVar6 = *psVar12;
      psVar12 = psVar12 + 1;
    } while (sVar6 != 0);
    iVar11 = ((int)psVar12 - (int)psVar1 >> 1) * 2 + 2;
  }
  uVar7 = iVar11 + iVar10 + iVar9 + 2;
  puVar2 = (uint *)((int)this + 0x28);
  if (((*(int *)((int)this + 0x24) == 0) || (*puVar2 < uVar7)) &&
     (pvVar8 = FUN_00402c20(8,uVar7), pvVar8 != (LPVOID)0x0)) {
    lpMem = *(LPVOID *)((int)this + 0x24);
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
    *(LPVOID *)((int)this + 0x24) = pvVar8;
    *puVar2 = uVar7;
  }
  pcVar16 = *(char **)((int)this + 0x24);
  if (pcVar16 == (char *)0x0) {
    return;
  }
  pcVar15 = (char *)*puVar2;
  puVar3 = (undefined4 *)((int)this + 0xc);
  pcVar4 = pcVar15 + (int)pcVar16;
  pcVar14 = *(char **)(param_1 + 0x24);
  if (((pcVar16 == pcVar4) || (pcVar14 == (char *)0x0)) || (*pcVar14 == '\0')) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
LAB_00404868:
    pcVar15 = *(char **)(param_1 + 0x4c);
    if (pcVar16 != pcVar4) goto LAB_00404872;
  }
  else {
    pcVar13 = pcVar14;
    do {
      cVar5 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar5 != '\0');
    pcVar13 = pcVar13 + (1 - (int)(pcVar14 + 1));
    if (pcVar13 <= pcVar15) {
      FUN_00402690(pcVar16,(uint)pcVar15,pcVar14,(uint)pcVar13);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = pcVar16;
      }
      pcVar16 = pcVar16 + (int)pcVar13;
      goto LAB_00404868;
    }
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    pcVar15 = *(char **)(param_1 + 0x4c);
LAB_00404872:
    if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
      pcVar14 = pcVar15;
      do {
        cVar5 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar5 != '\0');
      pcVar14 = pcVar14 + (1 - (int)(pcVar15 + 1));
      if (pcVar14 <= pcVar4 + -(int)pcVar16) {
        FUN_00402690(pcVar16,(uint)(pcVar4 + -(int)pcVar16),pcVar15,(uint)pcVar14);
        if ((undefined4 *)((int)this + 0x14) != (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x14) = pcVar16;
        }
        pcVar16 = pcVar16 + (int)pcVar14;
        goto LAB_004048bf;
      }
    }
  }
  if ((undefined4 *)((int)this + 0x14) != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
LAB_004048bf:
  _Dst = FUN_004084f0(pcVar16,pcVar4,*(short **)(param_1 + 0x14),(undefined4 *)((int)this + 0x20));
  memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  return;
}



/* Function: FUN_00404900 */

void __fastcall FUN_00404900(int param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 *puVar3;
  LPVOID pvVar4;
  HANDLE pvVar5;
  undefined4 *puVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x14);
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (puVar3 != puVar3 + (uint)uVar2 * 0xb) {
    puVar6 = puVar3 + 9;
    do {
      pvVar4 = (LPVOID)*puVar6;
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar4);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar1 = puVar6 + 2;
      puVar6 = puVar6 + 0xb;
    } while (puVar1 != puVar3 + (uint)uVar2 * 0xb);
  }
  pvVar4 = *(LPVOID *)(param_1 + 0x10);
  pvVar5 = GetProcessHeap();
  HeapFree(pvVar5,0,pvVar4);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* Function: FUN_00404980 */

DWORD * __fastcall FUN_00404980(int param_1)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  int local_8;
  
  puVar2 = DAT_0040c550;
  if (DAT_0040c550 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0040c550[1] == 0) {
      local_8 = 0;
      iVar3 = FUN_00407a40(*DAT_0040c550,&local_8);
      if ((-1 < iVar3) && (puVar2[1] == 0)) {
        puVar2[1] = local_8;
      }
    }
    uVar5 = -(uint)(puVar2[1] != 0) & puVar2[1] + 0x10;
    if (uVar5 != 0) {
      DVar4 = GetCurrentThreadId();
      pDVar1 = *(DWORD **)(uVar5 + 8 + (DVar4 % 10) * 4);
      while( true ) {
        if (pDVar1 == (DWORD *)0x0) {
          return (DWORD *)0x0;
        }
        if (*pDVar1 == DVar4) break;
        pDVar1 = (DWORD *)pDVar1[1];
      }
      if ((pDVar1 + 2 != (DWORD *)0x0) && (pDVar1[4] == 0)) {
        pDVar1[4] = uVar5 + 4;
      }
      return pDVar1 + 2;
    }
  }
  return (DWORD *)0x0;
}



/* Function: FUN_00404a30 */

uint __fastcall FUN_00404a30(int param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  uVar3 = in_EAX & 0xffffff00;
  *param_3 = '\0';
  if (param_2 != 0) {
    uVar3 = FUN_00404a30(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0040c14c + 1;
        DAT_0040c14c = DAT_0040c14c + 1;
        *piVar2 = iVar4;
      }
      if (*(int *)(param_1 + 0x34) == 0) {
        *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)piVar2;
        *(int *)(param_1 + 0x3c) = piVar2[2];
      }
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)piVar2;
      *(int *)(param_1 + 0x48) = piVar2[2];
      pcVar7 = param_3;
      do {
        pcVar6 = pcVar7;
        pcVar7 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      pcVar5 = param_3 + (param_4 - (int)pcVar6);
      if (2 < (int)pcVar5) {
        *pcVar6 = '\\';
        pcVar6 = (char *)piVar2[1];
        pcVar5 = pcVar6;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar8 = param_3 + (param_4 - (int)pcVar7);
        pcVar9 = pcVar8;
        if (pcVar5 + (1 - (int)(pcVar6 + 1)) < pcVar8) {
          pcVar9 = pcVar5 + (1 - (int)(pcVar6 + 1));
        }
        pcVar5 = (char *)FUN_00402690(pcVar7,(uint)pcVar8,pcVar6,(uint)pcVar9);
        pcVar7[(int)(pcVar9 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00404b00 */

void FUN_00404b00(undefined1 *param_1,char *param_2,int param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 uVar9;
  void **ppvVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD *pDVar13;
  undefined2 *puVar14;
  int iVar15;
  int *piVar16;
  byte bVar17;
  void **ppvVar18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040b570;
  local_10 = ExceptionList;
  uVar7 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ppvVar10 = &local_10;
  local_8 = 0;
  local_11 = 0;
  ExceptionList = ppvVar10;
  *param_2 = '\0';
  iVar6 = DAT_0040c564;
  bVar17 = 0;
  if (DAT_0040c564 != 0) {
    pvVar8 = (void *)GetCurrentThreadId();
    for (ppvVar10 = *(void ***)(iVar6 + ((uint)pvVar8 % 10) * 4); ppvVar10 != (void **)0x0;
        ppvVar10 = (void **)ppvVar10[1]) {
      if (*ppvVar10 == pvVar8) {
        ppvVar18 = ppvVar10 + 2;
        goto LAB_00404b7d;
      }
    }
    ppvVar18 = (void **)0x0;
LAB_00404b7d:
    bVar17 = local_11;
    if ((ppvVar18 != (void **)0x0) && (*ppvVar18 != (void *)0x0)) {
      *param_2 = '\0';
      uVar9 = FUN_00404a30((int)param_1,(int)*ppvVar18,param_2,param_3);
      if ((char)uVar9 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      pvVar8 = *ppvVar18;
      do {
        pcVar3 = *(code **)**(undefined4 **)((int)pvVar8 + 4);
        (*(code *)PTR_guard_check_icall_0040d1e4)(param_1);
        ppvVar10 = (void **)(*pcVar3)();
        pvVar8 = *(void **)((int)pvVar8 + 8);
        bVar17 = local_11 | (byte)ppvVar10;
        local_11 = bVar17;
      } while (pvVar8 != (void *)0x0);
    }
  }
  pcVar3 = DAT_0040c56c;
  if (DAT_0040c56c != (code *)0x0) {
    if ((bVar17 == 0) && ((param_1[4] & 2) == 0)) {
      uVar11 = (uint)ppvVar10 & 0xffffff00;
    }
    else {
      uVar11 = 1;
    }
    (*(code *)PTR_guard_check_icall_0040d1e4)(uVar11,param_1,uVar7);
    (*pcVar3)();
  }
  DVar12 = GetCurrentThreadId();
  if (DAT_0040c630 != DVar12) {
    LOCK();
    iVar6 = DAT_0040c638 + 1;
    UNLOCK();
    iVar15 = DAT_0040c638 + 1;
    DAT_0040c638 = iVar6;
    if (iVar15 < 4) {
      DAT_0040c630 = DVar12;
      pDVar13 = FUN_00404980(iVar15);
      if (pDVar13 != (DWORD *)0x0) {
        DVar12 = pDVar13[3];
        if ((pDVar13[4] == 0) && (DVar12 != 0)) {
          puVar14 = (undefined2 *)FUN_00402c20(8,0xdc);
          pDVar13[4] = (DWORD)puVar14;
          if (puVar14 != (undefined2 *)0x0) {
            puVar2 = puVar14 + 0x6e;
            pDVar13[5] = 5;
            for (; puVar14 != puVar2; puVar14 = puVar14 + 0x16) {
              *puVar14 = 0x2c;
            }
          }
        }
        piVar4 = (int *)pDVar13[4];
        if (piVar4 != (int *)0x0) {
          if ((DVar12 != 0) && (piVar4 != piVar4 + (uint)(ushort)pDVar13[5] * 0xb)) {
            piVar16 = piVar4 + 2;
            do {
              if ((pDVar13[3] < (uint)piVar16[-1]) && (*piVar16 == *(int *)(param_1 + 8)))
              goto LAB_00404ce4;
              piVar1 = piVar16 + 9;
              piVar16 = piVar16 + 0xb;
            } while (piVar1 != piVar4 + (uint)(ushort)pDVar13[5] * 0xb);
          }
          uVar5 = (ulonglong)(*(ushort *)((int)pDVar13 + 0x16) + 1) % (ulonglong)(ushort)pDVar13[5];
          *(short *)((int)pDVar13 + 0x16) = (short)uVar5;
          piVar4 = (int *)pDVar13[2];
          DVar12 = pDVar13[4];
          LOCK();
          iVar6 = *piVar4;
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          FUN_004046e0((void *)((int)uVar5 * 0x2c + DVar12),param_1,iVar6 + 1);
        }
      }
LAB_00404ce4:
      DAT_0040c630 = 0;
    }
    LOCK();
    DAT_0040c638 = DAT_0040c638 + -1;
    UNLOCK();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404d20 */

uint __thiscall FUN_00404d20(void *this,uint param_1)

{
  uint uVar1;
  DWORD dwErrCode;
  LPVOID pvVar2;
  uint extraout_EAX;
  HANDLE hHeap;
  uint extraout_EAX_00;
  uint uVar3;
  SIZE_T SVar4;
  DWORD dwFlags;
  LPVOID lpMem;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*(int *)((int)this + 4) - *this) + param_1;
                    /* WARNING: Load size is inaccurate */
  uVar3 = *(int *)((int)this + 8) - *this;
  if (uVar3 <= uVar1) {
    uVar1 = uVar3 * 2;
    if (param_1 < uVar1) {
      param_1 = uVar1;
    }
    if (uVar3 < param_1) {
      dwErrCode = GetLastError();
      SVar4 = (param_1 & 0xffffffc0) + 0x40;
      pvVar2 = FUN_00402c20(0,SVar4);
      if (pvVar2 == (LPVOID)0x0) {
        SetLastError(dwErrCode);
        return extraout_EAX & 0xffffff00;
      }
                    /* WARNING: Load size is inaccurate */
      uVar1 = *(int *)((int)this + 4) - (int)*this;
      FUN_00402690(pvVar2,SVar4,*this,uVar1);
      lpMem = *(LPVOID *)((int)this + 0xc);
      *(LPVOID *)((int)this + 0xc) = pvVar2;
      if (lpMem != (LPVOID)0x0) {
        dwFlags = 0;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,dwFlags,lpMem);
      }
      *(LPVOID *)this = pvVar2;
      *(uint *)((int)this + 4) = uVar1 + (int)pvVar2;
      *(SIZE_T *)((int)this + 8) = (int)pvVar2 + SVar4;
      SetLastError(dwErrCode);
      uVar1 = extraout_EAX_00;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_00404de0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00404de0(int *param_1)

{
  uint uVar1;
  FARPROC pFVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_102c [4];
  uint local_1028;
  int iStack_1024;
  int local_1020;
  int *local_101c;
  int *piStack_1018;
  undefined4 local_1014;
  int local_1010 [1025];
  uint local_c;
  
  local_c = DAT_0040c100 ^ (uint)auStack_102c;
  iVar9 = 0;
  local_101c = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1020 = 0;
    do {
      iVar7 = local_1020;
      memset(local_1010,0,0x1000);
      local_1028 = 0x1000;
      if (DAT_0040c5c8 == (FARPROC)0x0) {
        if (DAT_0040c5d0 == (HMODULE)0x0) {
          DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
        }
        DAT_0040c5c8 = GetProcAddress(DAT_0040c5d0,"NtQueryWnfStateData");
        if (DAT_0040c5c8 != (FARPROC)0x0) goto LAB_00404e81;
        iStack_1024 = -0x3ffffec7;
      }
      else {
LAB_00404e81:
        pFVar2 = DAT_0040c5c8;
        (*(code *)PTR_guard_check_icall_0040d1e4)
                  (&DAT_00401978,0,0,&local_1014,local_1010,&local_1028);
        iStack_1024 = (*pFVar2)();
        uVar3 = local_1014;
        if (iStack_1024 == 0) {
          if (local_1028 != (local_1028 / 0xc) * 0xc) {
            local_1028 = 0;
          }
          piVar8 = (int *)*local_101c;
          piStack_1018 = piVar8 + ((uint)(local_101c[1] - (int)piVar8) / 0xc) * 3;
          uVar6 = local_1028;
          if (piVar8 != piStack_1018) {
            piVar5 = local_1010 + (local_1028 / 0xc) * 3;
            do {
              piVar4 = local_1010;
              if (piVar4 != piVar5) {
                do {
                  if ((*piVar4 == *piVar8) && ((short)piVar4[1] == (short)piVar8[1])) {
                    piVar4[2] = piVar4[2] + piVar8[2];
                    uVar6 = local_1028;
                    goto LAB_00404f5b;
                  }
                  piVar4 = piVar4 + 3;
                } while (piVar4 != piVar5);
              }
              uVar1 = uVar6 + 0xc;
              if (uVar1 < 0x1001) {
                *(undefined8 *)piVar5 = *(undefined8 *)piVar8;
                piVar5[2] = piVar8[2];
                piVar5 = piVar5 + 3;
                uVar6 = uVar1;
                local_1028 = uVar1;
              }
LAB_00404f5b:
              piVar8 = piVar8 + 3;
            } while (piVar8 != piStack_1018);
          }
          if (DAT_0040c62c == (FARPROC)0x0) {
            if (DAT_0040c5d0 == (HMODULE)0x0) {
              DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
            }
            DAT_0040c62c = GetProcAddress(DAT_0040c5d0,"NtUpdateWnfStateData");
            if (DAT_0040c62c == (FARPROC)0x0) break;
          }
          pFVar2 = DAT_0040c62c;
          (*(code *)PTR_guard_check_icall_0040d1e4)(&DAT_00401978,local_1010,uVar6,0,0,uVar3,1);
          iVar9 = (*pFVar2)();
          iVar7 = local_1020;
        }
      }
      local_1020 = iVar7 + 1;
      if (((iVar9 != -0x3fffffff) || (99 < local_1020)) || (iStack_1024 != 0)) break;
    } while( true );
  }
  FUN_0040a3f0(local_c ^ (uint)auStack_102c);
  return;
}



/* Function: FUN_00405020 */

uint __thiscall FUN_00405020(void *this,byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 != *(ushort *)((int)this + 8)) {
    return param_2 - *(ushort *)((int)this + 8);
  }
  pbVar1 = *(byte **)((int)this + 0x10);
  uVar2 = param_2 - 4;
  if (3 < param_2) {
    do {
      if (*(int *)param_1 != *(int *)pbVar1) goto LAB_00405056;
      param_1 = param_1 + 4;
      pbVar1 = pbVar1 + 4;
      bVar3 = 3 < uVar2;
      uVar2 = uVar2 - 4;
    } while (bVar3);
  }
  if (uVar2 != 0xfffffffc) {
LAB_00405056:
    bVar3 = *param_1 < *pbVar1;
    if ((*param_1 != *pbVar1) ||
       ((uVar2 != 0xfffffffd &&
        ((bVar3 = param_1[1] < pbVar1[1], param_1[1] != pbVar1[1] ||
         ((uVar2 != 0xfffffffe &&
          ((bVar3 = param_1[2] < pbVar1[2], param_1[2] != pbVar1[2] ||
           ((uVar2 != 0xffffffff && (bVar3 = param_1[3] < pbVar1[3], param_1[3] != pbVar1[3]))))))))
        )))) {
      return -(uint)bVar3 | 1;
    }
  }
  return 0;
}



/* Function: FUN_004050b0 */

bool __thiscall FUN_004050b0(void *this,int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  cVar1 = *(char *)((int)this + 2);
  bVar5 = cVar1 != '\0';
  if ((cVar1 != '\0') &&
     (iVar4 = param_1 + *(int *)((int)this + 4), *(int *)((int)this + 4) != iVar4)) {
    *(int *)((int)this + 4) = iVar4;
    if (cVar1 == '\x01') {
      if (*(undefined2 **)((int)this + 0xc) != (undefined2 *)0x0) {
        **(undefined2 **)((int)this + 0xc) = (short)iVar4;
        return bVar5;
      }
    }
    else {
      if (cVar1 != '\x02') {
        return bVar5;
      }
      piVar2 = *(int **)((int)this + 0xc);
      if (piVar2 != (int *)0x0) {
        if (this != (void *)0xfffffffc) {
          *piVar2 = iVar4;
          return bVar5;
        }
        *piVar2 = 0;
      }
    }
    puVar3 = (undefined4 *)o__errno();
    *puVar3 = 0x16;
    o__invalid_parameter_noinfo();
  }
  return bVar5;
}



/* Function: FUN_00405130 */

uint __thiscall FUN_00405130(void *this,int *param_1,short *param_2)

{
  undefined4 *puVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    psVar2 = psVar4 + 1;
    if (param_2 < psVar2) goto LAB_004051ed;
    if (psVar4 == (short *)0x0) {
      puVar1 = (undefined4 *)o__errno();
      *puVar1 = 0x16;
      o__invalid_parameter_noinfo();
      psVar4 = psVar2;
    }
    else {
      *psVar4 = *(short *)((int)this + 4);
      psVar4 = psVar2;
    }
  }
  else if (*(char *)((int)this + 2) == '\x02') {
    psVar2 = psVar4 + 2;
    if (param_2 < psVar2) goto LAB_004051ed;
    if (psVar4 != (short *)0x0) {
      if ((undefined4 *)((int)this + 4) != (undefined4 *)0x0) {
        *(undefined4 *)psVar4 = *(undefined4 *)((int)this + 4);
        psVar4 = psVar2;
        goto LAB_004051b8;
      }
      psVar4[0] = 0;
      psVar4[1] = 0;
    }
    puVar1 = (undefined4 *)o__errno();
    *puVar1 = 0x16;
    o__invalid_parameter_noinfo();
    psVar4 = psVar2;
  }
LAB_004051b8:
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    psVar2 = psVar4 + 1;
    if (param_2 < psVar2) goto LAB_004051ed;
    FUN_00402690(psVar4,(int)param_2 - (int)psVar4,(void *)((int)this + 8),2);
    psVar4 = psVar2;
  }
  psVar2 = (short *)((uint)*(ushort *)((int)this + 8) + (int)psVar4);
  if (psVar2 <= param_2) {
    FUN_00402690(psVar4,(int)param_2 - (int)psVar4,*(void **)((int)this + 0x10),
                 (uint)*(ushort *)((int)this + 8));
    iVar3 = (uint)*(ushort *)((int)this + 8) + (int)psVar4;
    *param_1 = iVar3;
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
LAB_004051ed:
  return (uint)psVar2 & 0xffffff00;
}



/* Function: FUN_00405230 */

uint __thiscall FUN_00405230(void *this,uint *param_1,ushort *param_2)

{
  char cVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar2 = (ushort *)*param_1;
  cVar1 = *(char *)((int)this + 2);
  puVar4 = (ushort *)CONCAT31((int3)((uint)param_1 >> 8),cVar1);
  if (cVar1 == '\x01') {
    puVar5 = puVar2 + 1;
    if (param_2 < puVar5) goto LAB_0040530f;
    *(ushort **)((int)this + 0xc) = puVar2;
    if (puVar2 == (ushort *)0x0) {
      puVar3 = (undefined4 *)o__errno();
      *puVar3 = 0x16;
      o__invalid_parameter_noinfo();
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      *(uint *)((int)this + 4) = (uint)*puVar2;
    }
  }
  else {
    puVar5 = puVar2;
    if (cVar1 == '\x02') {
      puVar5 = puVar2 + 2;
      if (param_2 < puVar5) goto LAB_0040530f;
      puVar3 = (undefined4 *)((int)this + 4);
      *(ushort **)((int)this + 0xc) = puVar2;
      if (puVar3 != (undefined4 *)0x0) {
        if (puVar2 != (ushort *)0x0) {
          *puVar3 = *(undefined4 *)puVar2;
          goto LAB_004052c5;
        }
        *puVar3 = 0;
      }
      puVar3 = (undefined4 *)o__errno();
      *puVar3 = 0x16;
      o__invalid_parameter_noinfo();
    }
  }
LAB_004052c5:
                    /* WARNING: Load size is inaccurate */
  puVar2 = (ushort *)((int)this + 8);
  *puVar2 = *this;
  if (*this == 0) {
    puVar4 = puVar5 + 1;
    if (param_2 < puVar4) goto LAB_0040530f;
    if (puVar2 != (ushort *)0x0) {
      if (puVar5 != (ushort *)0x0) {
        *puVar2 = *puVar5;
        puVar5 = puVar4;
        goto LAB_00405306;
      }
      *puVar2 = 0;
    }
    puVar3 = (undefined4 *)o__errno();
    *puVar3 = 0x16;
    o__invalid_parameter_noinfo();
    puVar5 = puVar4;
  }
LAB_00405306:
  puVar4 = (ushort *)((uint)*puVar2 + (int)puVar5);
  if (puVar4 <= param_2) {
    *(ushort **)((int)this + 0x10) = puVar5;
    *param_1 = (uint)puVar4;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
LAB_0040530f:
  return (uint)puVar4 & 0xffffff00;
}



/* Function: FUN_00405340 */

void __thiscall FUN_00405340(void *this,int param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  HANDLE pvVar6;
  DWORD DVar7;
  LPVOID pvVar8;
  
  uVar1 = *(undefined8 *)((int)this + 0x10);
  uVar3 = *(undefined4 *)((int)this + 0x1c);
  uVar4 = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined8 *)((int)this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  pvVar8 = *(LPVOID *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x1c) = uVar5;
  if (pvVar8 != (LPVOID)0x0) {
    DVar7 = 0;
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,DVar7,pvVar8);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  pvVar8 = *(LPVOID *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if (pvVar8 != (LPVOID)0x0) {
    DVar7 = 0;
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,DVar7,pvVar8);
  }
  uVar2 = *(undefined1 *)((int)this + 0x20);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined1 *)((int)this + 0x21);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  return;
}



/* Function: FUN_00405400 */

void __thiscall FUN_00405400(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_00404340(unaff_retaddr,0x137b,"onecore\\internal\\sdk\\inc\\wil\\Staging.h");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lpMem = *(LPVOID *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (lpMem != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
  }
  *(short **)((int)this + 0x10) = param_1;
  *(undefined1 *)((int)this + 0x21) = 0;
  *(uint *)((int)this + 0x14) = (int)param_1 + param_2;
  *(uint *)((int)this + 0x18) = (int)param_1 + param_3;
  if (9 < param_2) {
                    /* WARNING: Load size is inaccurate */
    if ((*param_1 == 0) && ((ushort)param_1[1] <= *this)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)((int)this + 0x21) = uVar2;
                    /* WARNING: Load size is inaccurate */
    if ((((*param_1 == 0) && (param_1[1] == *this)) && (param_1[2] == *(short *)((int)this + 2))) &&
       ((((char)param_1[4] == *(char *)((int)this + 4) && (param_1[3] == *(short *)((int)this + 6)))
        && ((*(char *)((int)param_1 + 9) == *(char *)((int)this + 8) && (9 < param_2)))))) {
      return;
    }
  }
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  param_1[1] = *this;
  param_1[2] = *(short *)((int)this + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((int)this + 4);
  param_1[3] = *(short *)((int)this + 6);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 8);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x10) + 10;
  return;
}



/* Function: FUN_00405500 */

undefined4 __thiscall FUN_00405500(void *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *local_54;
  uint local_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  uint local_40;
  uint *local_3c;
  uint *local_38;
  void *local_34;
  uint local_30;
  uint *local_2c;
  ushort local_26;
  ushort local_24;
  char local_22;
  char local_21;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_0040b5e0;
  local_1c = ExceptionList;
  uVar4 = DAT_0040c100 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 0;
  local_24 = *(ushort *)((int)this + 2);
  local_21 = *(char *)((int)this + 4);
  local_26 = *(ushort *)((int)this + 6);
  local_22 = *(char *)((int)this + 8);
  local_30 = 0;
  local_38 = (uint *)0x0;
  puVar9 = (uint *)(*(int *)((int)this + 0x10) + 10);
  local_34 = this;
  do {
    puVar10 = *(uint **)((int)local_34 + 0x14);
    if (local_21 == '\x01') {
      local_2c = (uint *)((int)puVar9 + 2);
      if (puVar10 < local_2c) goto LAB_004057d3;
      if (puVar9 == (uint *)0x0) {
        puVar6 = (undefined4 *)o__errno(uVar4);
        *puVar6 = 0x16;
        o__invalid_parameter_noinfo();
        local_30 = 0;
      }
      else {
        local_30 = (uint)(ushort)*puVar9;
      }
    }
    else {
      local_2c = puVar9;
      if (local_21 == '\x02') {
        local_2c = puVar9 + 1;
        if (puVar10 < local_2c) {
LAB_004057d3:
          if (*(int **)(param_1 + 0x40) != (int *)0x0) {
            pcVar2 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
            (*(code *)PTR_guard_check_icall_0040d1e4)();
            param_1 = (*pcVar2)();
          }
          ExceptionList = local_1c;
          return CONCAT31((int3)((uint)param_1 >> 8),1);
        }
        if (puVar9 == (uint *)0x0) {
          local_30 = 0;
          puVar6 = (undefined4 *)o__errno(uVar4);
          *puVar6 = 0x16;
          o__invalid_parameter_noinfo();
        }
        else {
          local_30 = *puVar9;
        }
      }
    }
    uVar5 = (uint)local_24;
    if (local_24 == 0) {
      puVar9 = (uint *)((int)local_2c + 2);
      if (puVar10 < puVar9) goto LAB_004057d3;
      if (local_2c == (uint *)0x0) {
        puVar6 = (undefined4 *)o__errno(uVar4);
        *puVar6 = 0x16;
        o__invalid_parameter_noinfo();
        uVar5 = 0;
        local_2c = puVar9;
      }
      else {
        uVar5 = (uint)(ushort)*local_2c;
        local_2c = puVar9;
      }
    }
    puVar9 = (uint *)(uVar5 + (int)local_2c);
    local_48 = uVar5;
    if (puVar10 < puVar9) goto LAB_004057d3;
    local_40 = 0;
    if (local_30 != 0) {
      do {
        local_3c = *(uint **)((int)local_34 + 0x14);
        if (local_22 == '\x01') {
          puVar10 = (uint *)((int)puVar9 + 2);
          if (local_3c < puVar10) break;
          if (puVar9 == (uint *)0x0) {
            puVar6 = (undefined4 *)o__errno(uVar4);
            *puVar6 = 0x16;
            o__invalid_parameter_noinfo();
            local_38 = (uint *)0x0;
          }
          else {
            local_38 = (uint *)(uint)(ushort)*puVar9;
          }
        }
        else {
          puVar10 = puVar9;
          if (local_22 == '\x02') {
            puVar10 = puVar9 + 1;
            if (local_3c < puVar10) break;
            if (puVar9 == (uint *)0x0) {
              local_38 = (uint *)0x0;
              puVar6 = (undefined4 *)o__errno(uVar4);
              *puVar6 = 0x16;
              o__invalid_parameter_noinfo();
            }
            else {
              local_38 = (uint *)*puVar9;
            }
          }
        }
        puVar8 = (uint *)(uint)local_26;
        if (local_26 == 0) {
          local_44 = (uint *)((int)puVar10 + 2);
          if (local_3c < local_44) break;
          if (puVar10 == (uint *)0x0) {
            puVar6 = (undefined4 *)o__errno();
            *puVar6 = 0x16;
            o__invalid_parameter_noinfo();
            puVar8 = (uint *)0x0;
            puVar10 = local_44;
          }
          else {
            puVar8 = (uint *)(uint)(ushort)*puVar10;
            puVar10 = local_44;
          }
        }
        puVar1 = (uint *)((int)puVar8 + (int)puVar10);
        if (local_3c < puVar1) break;
        local_44 = local_38;
        local_50 = local_48;
        local_54 = local_2c;
        local_4c = puVar10;
        local_3c = puVar8;
        if (*(int **)(param_1 + 0x40) == (int *)0x0) {
          FUN_00404390();
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return uVar7;
        }
        pcVar2 = *(code **)(**(int **)(param_1 + 0x40) + 0x10);
        (*(code *)PTR_guard_check_icall_0040d1e4)(&local_54,&local_50,&local_4c,&local_3c,&local_44)
        ;
        cVar3 = (*pcVar2)();
        if (cVar3 == '\0') {
          if (*(int **)(param_1 + 0x40) != (int *)0x0) {
            pcVar2 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
            (*(code *)PTR_guard_check_icall_0040d1e4)();
            param_1 = (*pcVar2)();
          }
          ExceptionList = local_1c;
          return param_1 & 0xffffff00;
        }
        local_40 = local_40 + 1;
        puVar9 = puVar1;
      } while (local_40 < local_30);
    }
  } while( true );
}



/* Function: FUN_00405820 */

undefined4 __thiscall
FUN_00405820(void *this,uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  HANDLE pvVar3;
  LPVOID pvVar4;
  DWORD DVar5;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  LPVOID pvStack_c;
  
  uVar1 = FUN_00405f90(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar1 == '\0') {
    uVar2 = param_2 + 0x20 + param_4;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      pvStack_c = (LPVOID)0x0;
      uVar1 = FUN_00404d20(&local_18,uVar2 + 10);
      pvVar4 = pvStack_c;
      if ((char)uVar1 != '\0') {
        FUN_00405400(this,local_18,0,iStack_10 - (int)local_18);
        pvVar4 = *(LPVOID *)((int)this + 0x1c);
        *(LPVOID *)((int)this + 0x1c) = pvStack_c;
        if (pvVar4 != (LPVOID)0x0) {
          DVar5 = 0;
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,DVar5,pvVar4);
        }
        *(undefined1 *)((int)this + 0x22) = 1;
        pvVar4 = (LPVOID)0x0;
      }
      if (pvVar4 != (LPVOID)0x0) {
        DVar5 = 0;
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,DVar5,pvVar4);
      }
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_00404d20((int *)((int)this + 0x10),uVar2);
    }
    uVar1 = FUN_00405f90(this,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



/* Function: FUN_00405900 */

ushort * __thiscall FUN_00405900(void *this,ushort *param_1,uint param_2,byte *param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  bool bVar11;
  ushort *local_10;
  uint local_c;
  
  uVar2 = *(ushort *)((int)this + 6);
  local_c = 0;
  cVar1 = *(char *)((int)this + 8);
  local_10 = (ushort *)0x0;
  if (param_2 == 0) {
    return param_1;
  }
  do {
    puVar9 = *(ushort **)((int)this + 0x14);
    uVar3 = param_2 >> 1;
    puVar10 = (ushort *)(*(int *)((int)this + 0xc) * uVar3 + (int)param_1);
    if (cVar1 == '\x01') {
      puVar6 = puVar10 + 1;
      if (puVar9 < puVar6) goto LAB_004059e1;
joined_r0x0040596d:
      if (puVar10 == (ushort *)0x0) {
        puVar4 = (undefined4 *)o__errno();
        *puVar4 = 0x16;
        o__invalid_parameter_noinfo();
      }
LAB_00405986:
      local_c = (uint)uVar2;
      uVar5 = (uint)uVar2;
      puVar8 = puVar6;
      if (uVar2 == 0) {
        puVar8 = puVar6 + 1;
        if (puVar9 < puVar8) goto LAB_004059e1;
        if (puVar6 == (ushort *)0x0) {
          local_c = 0;
          puVar4 = (undefined4 *)o__errno();
          *puVar4 = 0x16;
          o__invalid_parameter_noinfo();
          uVar5 = 0;
        }
        else {
          uVar5 = (uint)*puVar6;
          local_c = (uint)*puVar6;
        }
      }
      puVar6 = (ushort *)(uVar5 + (int)puVar8);
      if (puVar9 < puVar6) goto LAB_004059e1;
    }
    else {
      puVar6 = puVar10;
      if (cVar1 != '\x02') goto LAB_00405986;
      puVar6 = puVar10 + 2;
      if (puVar6 <= puVar9) goto joined_r0x0040596d;
LAB_004059e1:
      puVar6 = puVar10;
      puVar8 = local_10;
    }
    local_10 = puVar8;
    if (param_4 == local_c) {
      uVar5 = param_4 - 4;
      pbVar7 = param_3;
      puVar9 = local_10;
      if (3 < param_4) {
        do {
          if (*(int *)pbVar7 != *(int *)puVar9) goto LAB_00405a0c;
          pbVar7 = pbVar7 + 4;
          puVar9 = puVar9 + 2;
          bVar11 = 3 < uVar5;
          uVar5 = uVar5 - 4;
        } while (bVar11);
      }
      if (uVar5 != 0xfffffffc) {
LAB_00405a0c:
        bVar11 = *pbVar7 < (byte)*puVar9;
        if ((*pbVar7 != (byte)*puVar9) ||
           ((uVar5 != 0xfffffffd &&
            ((bVar11 = pbVar7[1] < *(byte *)((int)puVar9 + 1),
             pbVar7[1] != *(byte *)((int)puVar9 + 1) ||
             ((uVar5 != 0xfffffffe &&
              ((bVar11 = pbVar7[2] < (byte)puVar9[1], pbVar7[2] != (byte)puVar9[1] ||
               ((uVar5 != 0xffffffff &&
                (bVar11 = pbVar7[3] < *(byte *)((int)puVar9 + 3),
                pbVar7[3] != *(byte *)((int)puVar9 + 3))))))))))))) {
          uVar5 = -(uint)bVar11 | 1;
          goto LAB_00405a46;
        }
      }
      uVar5 = 0;
    }
    else {
      uVar5 = param_4 - local_c;
    }
LAB_00405a46:
    if (0 < (int)uVar5) {
      param_1 = puVar6;
      uVar3 = param_2 + (-1 - uVar3);
    }
    param_2 = uVar3;
    if (param_2 == 0) {
      return param_1;
    }
  } while( true );
}



/* Function: FUN_00405a90 */

uint * __thiscall
FUN_00405a90(void *this,int param_1,uint *param_2,uint *param_3,uint param_4,int param_5)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  void *pvVar11;
  uint uVar12;
  ushort local_2c;
  char local_2a;
  uint local_28;
  ushort local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint local_10;
  void *local_c;
  ushort local_8;
  char local_5;
  
  local_28 = 0;
  local_2c = *(ushort *)((int)this + 6);
  puVar9 = (uint *)(param_1 + 4);
  local_2a = *(char *)((int)this + 8);
  uVar12 = 0xffffffff;
  local_24 = 0;
  local_20 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_c = this;
  local_8 = local_2c;
  local_5 = local_2a;
  if (*(uint *)((int)this + 0xc) == 0) {
    local_10 = 0;
    if (*puVar9 == 0) {
      return param_2;
    }
    local_18 = param_2;
    while (puVar9 = local_18, local_14 = *(uint **)((int)local_c + 0x14), local_5 != '\x01') {
      puVar8 = local_18;
      if (local_5 == '\x02') {
        puVar8 = local_18 + 1;
        puVar2 = local_18;
        if (local_14 < puVar8) goto LAB_00405d0d;
        if (local_18 == (uint *)0x0) {
          local_28 = 0;
          local_20 = local_18;
          puVar6 = (undefined4 *)o__errno();
          *puVar6 = 0x16;
          o__invalid_parameter_noinfo();
        }
        else {
          local_28 = *local_18;
          local_20 = local_18;
        }
      }
LAB_00405c1a:
      local_24 = local_8;
      uVar7 = (uint)local_8;
      local_18 = puVar8;
      if (local_8 == 0) {
        local_18 = (uint *)((int)puVar8 + 2);
        puVar2 = local_18;
        if (local_14 < local_18) goto LAB_00405d0d;
        if (puVar8 == (uint *)0x0) {
          local_24 = 0;
          puVar6 = (undefined4 *)o__errno();
          *puVar6 = 0x16;
          o__invalid_parameter_noinfo();
          uVar7 = 0;
        }
        else {
          local_24 = (ushort)*puVar8;
          uVar7 = (uint)local_24;
        }
      }
      puVar2 = (uint *)(uVar7 + (int)local_18);
      if (local_14 < puVar2) goto LAB_00405d0d;
      if (param_4 == uVar7) {
        uVar12 = param_4 - 4;
        puVar8 = param_3;
        puVar10 = local_18;
        if (3 < param_4) {
          do {
            if (*puVar8 != *puVar10) goto LAB_00405ca6;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
            bVar5 = 3 < uVar12;
            uVar12 = uVar12 - 4;
          } while (bVar5);
        }
        if (uVar12 != 0xfffffffc) {
LAB_00405ca6:
          bVar5 = (byte)*puVar8 < (byte)*puVar10;
          if (((byte)*puVar8 != (byte)*puVar10) ||
             ((uVar12 != 0xfffffffd &&
              ((bVar5 = *(byte *)((int)puVar8 + 1) < *(byte *)((int)puVar10 + 1),
               *(byte *)((int)puVar8 + 1) != *(byte *)((int)puVar10 + 1) ||
               ((uVar12 != 0xfffffffe &&
                ((bVar5 = *(byte *)((int)puVar8 + 2) < *(byte *)((int)puVar10 + 2),
                 *(byte *)((int)puVar8 + 2) != *(byte *)((int)puVar10 + 2) ||
                 ((uVar12 != 0xffffffff &&
                  (bVar5 = *(byte *)((int)puVar8 + 3) < *(byte *)((int)puVar10 + 3),
                  *(byte *)((int)puVar8 + 3) != *(byte *)((int)puVar10 + 3))))))))))))) {
            uVar12 = -(uint)bVar5 | 1;
            goto LAB_00405ce6;
          }
        }
        uVar12 = 0;
      }
      else {
        uVar12 = param_4 - uVar7;
      }
LAB_00405ce6:
      pvVar11 = local_c;
      local_1c = local_18;
      if ((int)uVar12 < 1) goto LAB_00405d60;
      local_10 = local_10 + 1;
      local_18 = puVar2;
      if (*(uint *)(param_1 + 4) <= local_10) {
        return puVar2;
      }
    }
    puVar8 = (uint *)((int)local_18 + 2);
    puVar2 = local_18;
    if (puVar8 <= local_14) {
      if (local_18 == (uint *)0x0) {
        local_20 = local_18;
        puVar6 = (undefined4 *)o__errno();
        *puVar6 = 0x16;
        o__invalid_parameter_noinfo();
        local_28 = 0;
        puVar9 = local_18;
      }
      else {
        local_28 = (uint)(ushort)*local_18;
        local_20 = local_18;
      }
      goto LAB_00405c1a;
    }
LAB_00405d0d:
    local_18 = puVar2;
    pvVar11 = local_c;
    puVar2 = local_18;
    if (*(uint *)(param_1 + 4) != local_10) {
      *(uint *)(param_1 + 4) = local_10;
      if (*(char *)(param_1 + 2) == '\x01') {
        if (*(undefined2 **)(param_1 + 0xc) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0xc) = (short)local_10;
          goto LAB_00405d60;
        }
      }
      else {
        if (*(char *)(param_1 + 2) != '\x02') goto LAB_00405d60;
        puVar8 = *(uint **)(param_1 + 0xc);
        if (puVar8 != (uint *)0x0) {
          if ((uint *)(param_1 + 4) != (uint *)0x0) {
            *puVar8 = local_10;
            goto LAB_00405d60;
          }
          *puVar8 = 0;
        }
      }
      puVar6 = (undefined4 *)o__errno();
      *puVar6 = 0x16;
      o__invalid_parameter_noinfo();
      pvVar11 = local_c;
      puVar2 = local_18;
    }
    goto LAB_00405d60;
  }
  uVar4 = (ulonglong)(uint)(*(int *)((int)this + 0x14) - (int)param_2) /
          (ulonglong)*(uint *)((int)this + 0xc);
  uVar12 = (uint)uVar4;
  if (uVar12 < *puVar9) {
    *puVar9 = uVar12;
    if (*(char *)(param_1 + 2) == '\x01') {
      if (*(undefined2 **)(param_1 + 0xc) == (undefined2 *)0x0) goto LAB_00405b1f;
      **(undefined2 **)(param_1 + 0xc) = (short)uVar4;
    }
    else if (*(char *)(param_1 + 2) == '\x02') {
      puVar8 = *(uint **)(param_1 + 0xc);
      if (puVar8 != (uint *)0x0) {
        if (puVar9 != (uint *)0x0) {
          *puVar8 = uVar12;
          goto LAB_00405b30;
        }
        *puVar8 = 0;
      }
LAB_00405b1f:
      puVar6 = (undefined4 *)o__errno();
      *puVar6 = 0x16;
      o__invalid_parameter_noinfo();
    }
  }
LAB_00405b30:
  uVar12 = *puVar9;
  iVar3 = *(int *)((int)local_c + 0xc);
  puVar9 = (uint *)FUN_00405900(local_c,(ushort *)param_2,uVar12,(byte *)param_3,param_4);
  pvVar11 = local_c;
  if ((uint *)(iVar3 * uVar12 + (int)param_2) <= puVar9) {
    return puVar9;
  }
  local_18 = puVar9;
  FUN_00405230(&local_2c,(uint *)&local_18,*(ushort **)((int)local_c + 0x14));
  uVar12 = FUN_00405020(&local_2c,(byte *)param_3,param_4);
  puVar2 = local_18;
LAB_00405d60:
  local_18 = puVar2;
  if (uVar12 != 0) {
    return puVar9;
  }
  bVar5 = FUN_004050b0(&local_2c,param_5);
  pcVar1 = (char *)((int)pvVar11 + 0x20);
  if ((!bVar5) && (*pcVar1 == '\0')) {
    *pcVar1 = '\0';
    return (uint *)0x0;
  }
  *pcVar1 = '\x01';
  return (uint *)0x0;
}



/* Function: FUN_00405db0 */

ushort * __thiscall FUN_00405db0(void *this,int param_1,ushort *param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  uint *puVar4;
  ushort *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  
  puVar1 = (uint *)(param_1 + 4);
  if (*(uint *)((int)this + 0xc) == 0) {
    uVar3 = *(ushort *)((int)this + 6);
    uVar7 = 0;
    cVar2 = *(char *)((int)this + 8);
    if (*puVar1 == 0) {
LAB_00405f20:
      if (*(uint *)(param_1 + 4) != uVar7) {
        *(uint *)(param_1 + 4) = uVar7;
        if (*(char *)(param_1 + 2) == '\x01') {
          if (*(undefined2 **)(param_1 + 0xc) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0xc) = (short)uVar7;
            return param_2;
          }
        }
        else {
          if (*(char *)(param_1 + 2) != '\x02') {
            return param_2;
          }
          puVar1 = *(uint **)(param_1 + 0xc);
          if (puVar1 != (uint *)0x0) {
            if ((uint *)(param_1 + 4) != (uint *)0x0) {
              *puVar1 = uVar7;
              return param_2;
            }
            *puVar1 = 0;
          }
        }
        puVar8 = (undefined4 *)o__errno();
        *puVar8 = 0x16;
        o__invalid_parameter_noinfo();
      }
      return param_2;
    }
    do {
      puVar5 = *(ushort **)((int)this + 0x14);
      if (cVar2 == '\x01') {
        puVar11 = param_2 + 1;
        if (puVar5 < puVar11) goto LAB_00405f20;
joined_r0x00405eaa:
        if (param_2 == (ushort *)0x0) {
          puVar8 = (undefined4 *)o__errno();
          *puVar8 = 0x16;
          o__invalid_parameter_noinfo();
        }
      }
      else {
        puVar11 = param_2;
        if (cVar2 == '\x02') {
          puVar11 = param_2 + 2;
          if (puVar11 <= puVar5) goto joined_r0x00405eaa;
          goto LAB_00405f20;
        }
      }
      uVar9 = (uint)uVar3;
      puVar10 = puVar11;
      if (uVar3 == 0) {
        puVar10 = puVar11 + 1;
        if (puVar5 < puVar10) goto LAB_00405f20;
        if (puVar11 == (ushort *)0x0) {
          puVar8 = (undefined4 *)o__errno();
          *puVar8 = 0x16;
          o__invalid_parameter_noinfo();
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)*puVar11;
        }
      }
      puVar10 = (ushort *)(uVar9 + (int)puVar10);
      if ((puVar5 < puVar10) ||
         (uVar7 = uVar7 + 1, param_2 = puVar10, *(uint *)(param_1 + 4) <= uVar7)) goto LAB_00405f20;
    } while( true );
  }
  uVar6 = (ulonglong)(uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
          (ulonglong)*(uint *)((int)this + 0xc);
  uVar7 = (uint)uVar6;
  if (uVar7 < *puVar1) {
    *puVar1 = uVar7;
    if (*(char *)(param_1 + 2) == '\x01') {
      if (*(undefined2 **)(param_1 + 0xc) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0xc) = (short)uVar6;
        return (ushort *)((int)param_2 + *puVar1 * *(int *)((int)this + 0xc));
      }
    }
    else {
      if (*(char *)(param_1 + 2) != '\x02') goto LAB_00405e48;
      puVar4 = *(uint **)(param_1 + 0xc);
      if (puVar4 != (uint *)0x0) {
        if (puVar1 != (uint *)0x0) {
          *puVar4 = uVar7;
          return (ushort *)((int)param_2 + *puVar1 * *(int *)((int)this + 0xc));
        }
        *puVar4 = 0;
      }
    }
    puVar8 = (undefined4 *)o__errno();
    *puVar8 = 0x16;
    o__invalid_parameter_noinfo();
  }
LAB_00405e48:
  return (ushort *)((int)param_2 + *puVar1 * *(int *)((int)this + 0xc));
}



/* Function: FUN_00405f90 */

undefined4 __thiscall
FUN_00405f90(void *this,uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  void *pvVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  short *psVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  ushort local_40;
  char local_3e;
  int local_3c;
  undefined2 local_38;
  undefined4 local_34;
  uint *local_30;
  ushort local_2c;
  char local_2a;
  uint local_28;
  ushort local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  void *local_c;
  ushort local_8;
  char local_6;
  char local_5;
  
  if (*(int *)((int)this + 0x10) != 0) {
    local_5 = *(char *)((int)this + 4);
    puVar10 = (uint *)(*(int *)((int)this + 0x10) + 10);
    local_2c = *(ushort *)((int)this + 2);
    local_24 = 0;
    local_20 = (uint *)0x0;
    local_1c = (uint *)0x0;
    local_6 = '\0';
    local_28 = 0;
    local_c = this;
    do {
      local_14 = *(uint **)((int)this + 0x14);
      local_2a = local_5;
      local_18 = puVar10;
      local_10 = puVar10;
      local_8 = local_2c;
      if (local_5 == '\x01') {
        puVar7 = (uint *)((int)puVar10 + 2);
        if (puVar7 <= local_14) {
          if (puVar10 == (uint *)0x0) {
            local_20 = puVar10;
            puVar5 = (undefined4 *)o__errno();
            *puVar5 = 0x16;
            o__invalid_parameter_noinfo();
            local_28 = 0;
          }
          else {
            local_28 = (uint)(ushort)*puVar10;
            local_20 = puVar10;
          }
          goto LAB_0040606c;
        }
LAB_00406184:
        *(uint **)((int)this + 0x14) = puVar10;
LAB_00406187:
        local_1c = param_1;
        local_28 = 1;
        local_24 = (ushort)param_2;
        local_20 = (uint *)0x0;
        if (local_8 == 0) {
          uVar3 = (param_2 & 0xffff) + 2;
        }
        else {
          uVar3 = (uint)local_8;
        }
        if (local_5 == '\x01') {
          uVar3 = uVar3 + 2;
        }
        else if (local_5 == '\x02') {
          uVar3 = uVar3 + 4;
        }
        goto LAB_004061c9;
      }
      puVar7 = puVar10;
      if (local_5 == '\x02') {
        puVar7 = puVar10 + 1;
        if (local_14 < puVar7) goto LAB_00406184;
        if (puVar10 == (uint *)0x0) {
          local_28 = 0;
          local_20 = puVar10;
          puVar5 = (undefined4 *)o__errno();
          *puVar5 = 0x16;
          o__invalid_parameter_noinfo();
        }
        else {
          local_28 = *puVar10;
          local_20 = puVar10;
        }
      }
LAB_0040606c:
      uVar3 = (uint)local_8;
      puVar8 = puVar7;
      local_24 = local_8;
      if (local_8 == 0) {
        puVar8 = (uint *)((int)puVar7 + 2);
        this = local_c;
        if (local_14 < puVar8) goto LAB_00406184;
        if (puVar7 == (uint *)0x0) {
          local_24 = 0;
          puVar5 = (undefined4 *)o__errno();
          *puVar5 = 0x16;
          o__invalid_parameter_noinfo();
          uVar3 = 0;
        }
        else {
          local_24 = (ushort)*puVar7;
          uVar3 = (uint)local_24;
        }
      }
      this = local_c;
      puVar7 = (uint *)(uVar3 + (int)puVar8);
      if (local_14 < puVar7) goto LAB_00406184;
      if (param_2 == uVar3) {
        uVar3 = param_2 - 4;
        puVar10 = param_1;
        puVar9 = puVar8;
        if (3 < param_2) {
          do {
            if (*puVar10 != *puVar9) goto LAB_004060e9;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
            bVar11 = 3 < uVar3;
            uVar3 = uVar3 - 4;
          } while (bVar11);
        }
        if (uVar3 != 0xfffffffc) {
LAB_004060e9:
          bVar11 = (byte)*puVar10 < (byte)*puVar9;
          if (((byte)*puVar10 != (byte)*puVar9) ||
             ((uVar3 != 0xfffffffd &&
              ((bVar11 = *(byte *)((int)puVar10 + 1) < *(byte *)((int)puVar9 + 1),
               *(byte *)((int)puVar10 + 1) != *(byte *)((int)puVar9 + 1) ||
               ((uVar3 != 0xfffffffe &&
                ((bVar11 = *(byte *)((int)puVar10 + 2) < *(byte *)((int)puVar9 + 2),
                 *(byte *)((int)puVar10 + 2) != *(byte *)((int)puVar9 + 2) ||
                 ((uVar3 != 0xffffffff &&
                  (bVar11 = *(byte *)((int)puVar10 + 3) < *(byte *)((int)puVar9 + 3),
                  *(byte *)((int)puVar10 + 3) != *(byte *)((int)puVar9 + 3))))))))))))) {
            uVar3 = -(uint)bVar11 | 1;
            goto LAB_00406123;
          }
        }
        uVar3 = 0;
      }
      else {
        uVar3 = param_2 - uVar3;
      }
LAB_00406123:
      if ((int)uVar3 < 0) {
        local_10 = local_18;
        puVar10 = local_18;
        goto LAB_00406187;
      }
      local_1c = puVar8;
      if (uVar3 == 0) goto LAB_0040614c;
      puVar10 = (uint *)FUN_00405db0(local_c,(int)&local_2c,(ushort *)puVar7);
      local_5 = local_2a;
    } while( true );
  }
LAB_004062b9:
  return in_EAX & 0xffffff00;
LAB_0040614c:
  puVar10 = FUN_00405a90(local_c,(int)&local_2c,puVar7,param_3,param_4,param_5);
  if (puVar10 != (uint *)0x0) {
    local_6 = '\x01';
    uVar3 = 0;
    local_10 = puVar10;
LAB_004061c9:
    local_40 = *(ushort *)((int)this + 6);
    uVar4 = (uint)local_40;
    local_3e = *(char *)((int)this + 8);
    local_3c = param_5;
    local_38 = (undefined2)param_4;
    local_34 = 0;
    local_30 = param_3;
    if (local_40 == 0) {
      uVar4 = (param_4 & 0xffff) + 2;
    }
    if (local_3e == '\x01') {
      uVar4 = uVar4 + 2;
    }
    else if (local_3e == '\x02') {
      uVar4 = uVar4 + 4;
    }
    uVar4 = uVar4 + uVar3;
    uVar3 = *(uint *)((int)local_c + 0x14);
    uVar1 = *(uint *)((int)local_c + 0x18);
    in_EAX = -(uint)(uVar3 < uVar1) & uVar1 - uVar3;
    if (in_EAX < uVar4) goto LAB_004062b9;
    uVar3 = uVar3 - (int)puVar10;
    if (uVar3 != 0) {
      if (((void *)(uVar4 + (int)puVar10) == (void *)0x0) || (puVar10 == (uint *)0x0)) {
        puVar5 = (undefined4 *)o__errno();
        *puVar5 = 0x16;
        o__invalid_parameter_noinfo();
      }
      else if ((uVar1 - uVar4) - (int)puVar10 < uVar3) {
        puVar5 = (undefined4 *)o__errno();
        *puVar5 = 0x22;
        o__invalid_parameter_noinfo();
      }
      else {
        memmove((void *)(uVar4 + (int)puVar10),puVar10,uVar3);
      }
    }
    pvVar2 = local_c;
    psVar6 = (short *)(*(int *)((int)local_c + 0x14) + uVar4);
    *(short **)((int)local_c + 0x14) = psVar6;
    if (local_6 == '\0') {
      FUN_00405130(&local_2c,(int *)&local_10,psVar6);
    }
    else {
      FUN_004050b0(&local_2c,1);
    }
    puVar10 = (uint *)FUN_00405130(&local_40,(int *)&local_10,*(short **)((int)pvVar2 + 0x14));
    *(undefined1 *)((int)pvVar2 + 0x20) = 1;
  }
  return CONCAT31((int3)((uint)puVar10 >> 8),1);
}



/* Function: FUN_004062d0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004062d0(uint param_1,int param_2,undefined2 *param_3)

{
  FARPROC pFVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  HANDLE pvVar6;
  undefined4 uVar7;
  short *psVar8;
  DWORD DVar9;
  LPVOID pvVar10;
  undefined1 local_10c0 [8];
  undefined **local_10b8;
  undefined8 local_10b4;
  undefined2 *local_10ac;
  undefined ***local_1080;
  undefined4 *local_1078;
  undefined4 *puStack_1074;
  uint local_106c;
  undefined2 local_1068;
  undefined2 local_1066;
  undefined1 local_1064;
  ushort local_1062;
  char local_1060;
  uint local_105c;
  int local_1058;
  int iStack_1054;
  undefined4 uStack_1050;
  LPVOID pvStack_104c;
  undefined2 local_1048;
  undefined1 local_1046;
  undefined2 *local_1044;
  undefined4 local_1040;
  undefined4 local_103c;
  undefined4 local_1038;
  uint local_1034;
  uint local_1030;
  char local_1029;
  short local_1028 [2050];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_0040b620;
  local_1c = ExceptionList;
  uVar2 = DAT_0040c100 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_106c = param_1 + param_2 * 8;
  local_1044 = param_3;
  local_1034 = 0;
  local_1040 = 0;
  local_24 = uVar2;
  do {
    local_1062 = local_1044[3];
    local_105c = (uint)local_1062;
    local_1060 = *(char *)(local_1044 + 4);
    local_1064 = *(undefined1 *)(local_1044 + 2);
    local_1066 = local_1044[1];
    local_1068 = *local_1044;
    if (local_1062 == 0) {
      local_105c = 0;
    }
    else if (local_1060 == '\x01') {
      local_105c = local_105c + 2;
    }
    else if (local_1060 == '\x02') {
      local_105c = local_105c + 4;
    }
    local_1048 = 0;
    local_1058 = 0;
    iStack_1054 = 0;
    uStack_1050 = 0;
    pvStack_104c = (LPVOID)0x0;
    local_1046 = 0;
    local_14 = 0;
    local_1030 = 0x1000;
    if (DAT_0040c5c8 == (FARPROC)0x0) {
      if (DAT_0040c5d0 == (HMODULE)0x0) {
        DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
      }
      DAT_0040c5c8 = GetProcAddress(DAT_0040c5d0,"NtQueryWnfStateData");
      if (DAT_0040c5c8 != (FARPROC)0x0) goto LAB_00406423;
      FUN_00403020(0xc0000139);
      local_1030 = 0;
      local_1038 = 0;
    }
    else {
LAB_00406423:
      pFVar1 = DAT_0040c5c8;
      (*(code *)PTR_guard_check_icall_0040d1e4)
                (param_1,0,0,&local_1038,local_1028,&local_1030,uVar2);
      uVar3 = (*pFVar1)();
      FUN_00403020(uVar3);
      if (uVar3 != 0) {
        local_1030 = 0;
        local_1038 = 0;
      }
    }
    psVar8 = local_1028;
    uVar7 = 0x406482;
    FUN_00405400(&local_1068,psVar8,local_1030,0x1000);
    pvVar10 = pvStack_104c;
    if (local_1048._1_1_ != '\0') {
      pvStack_104c = (LPVOID)0x0;
      if (pvVar10 != (LPVOID)0x0) {
        DVar9 = 0;
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,DVar9,pvVar10);
      }
LAB_004065f3:
      ExceptionList = local_1c;
      FUN_0040a3f0(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    local_1078 = &local_103c;
    puStack_1074 = &local_1040;
    local_10ac = &local_1068;
    local_10b4 = CONCAT44(puStack_1074,local_1078);
    local_1080 = &local_10b8;
    local_103c = 0;
    local_10b8 = &PTR_FUN_00401108;
    uVar4 = FUN_00405500(local_1044,(int)local_10c0);
    local_1029 = (char)uVar4;
    if ((char)local_1048 == '\0') {
LAB_0040656c:
      param_1 = param_1 + 8;
      local_1040 = local_103c;
    }
    else {
      iVar5 = FUN_00404660(param_1,local_1058,iStack_1054 - local_1058,uVar7,psVar8,local_1038,1);
      if (iVar5 != -0x3fffffff) {
        if (iVar5 != 0) {
          FUN_00404660(param_1,local_1058,iStack_1054 - local_1058,uVar7,psVar8,0,0);
        }
        goto LAB_0040656c;
      }
      local_1034 = local_1034 + 1;
      local_1029 = '\0';
    }
    uVar3 = local_1034;
    pvVar10 = pvStack_104c;
    local_14 = 0xffffffff;
    pvStack_104c = (LPVOID)0x0;
    if (pvVar10 != (LPVOID)0x0) {
      DVar9 = 0;
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,DVar9,pvVar10);
    }
    if (((local_1029 != '\0') || (local_106c <= param_1)) || (0x31 < uVar3)) goto LAB_004065f3;
  } while( true );
}



/* Function: FUN_00406620 */

void __fastcall FUN_00406620(int param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  lpMem = *(LPVOID *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (lpMem != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
  }
  return;
}



/* Function: FUN_00406650 */

undefined4 * __fastcall FUN_00406650(undefined4 *param_1)

{
  *param_1 = 0x40000;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined2 *)((int)param_1 + 6) = 4;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  param_1[9] = 0x40000;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined2 *)((int)param_1 + 0x2a) = 4;
  *(undefined1 *)(param_1 + 0xb) = 2;
  param_1[0xc] = 8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0x12] = 0x40000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  return param_1;
}



/* Function: FUN_00406710 */

void __fastcall FUN_00406710(undefined2 *param_1)

{
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_0040c100 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_0040194c;
    local_3c = DAT_00401948;
    local_30 = DAT_0040193c;
    local_34 = DAT_00401938;
    local_28 = DAT_0040196c;
    local_2c = DAT_00401968;
    FUN_004062d0((uint)&local_3c,3,param_1);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00401970;
    local_38 = DAT_00401974;
    local_34 = DAT_00401920;
    local_30 = DAT_00401924;
    local_2c = DAT_00401940;
    local_28 = DAT_00401944;
    FUN_004062d0((uint)&local_3c,3,param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00401960;
    local_38 = DAT_00401964;
    local_34 = DAT_00401918;
    local_30 = DAT_0040191c;
    local_2c = DAT_00401950;
    local_28 = DAT_00401954;
    local_24 = DAT_00401928;
    local_20 = DAT_0040192c;
    local_1c = DAT_00401930;
    local_18 = DAT_00401934;
    local_14 = DAT_00401958;
    local_10 = DAT_0040195c;
    FUN_004062d0((uint)&local_3c,6,param_1 + 0x24);
  }
  FUN_0040a3f0(local_c ^ (uint)&local_3c);
  return;
}



/* Function: FUN_00406870 */

void __thiscall FUN_00406870(void *this,uint *param_1,int param_2,int param_3)

{
  int *this_00;
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  this_00 = (int *)((int)this + 0x18);
  *param_1 = 0;
  uVar2 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  if (uVar2 != 0) {
    do {
      piVar1 = (int *)(*this_00 + uVar5 * 8);
      uVar5 = uVar5 + 1;
      if (*piVar1 == 0) {
        *piVar1 = param_2;
        piVar1[1] = param_3;
        *param_1 = uVar5;
        return;
      }
    } while (uVar5 < uVar2);
  }
  uVar3 = FUN_00404d20(this_00,8);
  if ((char)uVar3 == '\0') {
    return;
  }
  piVar1 = *(int **)((int)this + 0x1c);
  uVar2 = -(uint)(piVar1 < *(int **)((int)this + 0x20)) & *(int *)((int)this + 0x20) - (int)piVar1;
  if (piVar1 == (int *)0x0) {
    puVar4 = (undefined4 *)o__errno();
    *puVar4 = 0x16;
  }
  else {
    if (7 < uVar2) {
      *piVar1 = param_2;
      piVar1[1] = param_3;
      goto LAB_0040692b;
    }
    memset(piVar1,0,uVar2);
    puVar4 = (undefined4 *)o__errno();
    *puVar4 = 0x22;
  }
  o__invalid_parameter_noinfo();
LAB_0040692b:
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 8;
  *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  return;
}



/* Function: FUN_00406950 */

void __thiscall FUN_00406950(void *this,PSRWLOCK param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int local_20;
  code *pcStack_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AcquireSRWLockShared(param_1);
  uVar3 = (uint)(*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) >> 3;
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(param_1);
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      AcquireSRWLockExclusive(param_1);
      if (uVar2 < uVar3) {
        do {
          piVar1 = (int *)(*(int *)((int)this + 0x18) + uVar2 * 8);
          uVar2 = uVar2 + 1;
          if (*piVar1 != 0) {
            pcStack_18 = (code *)*piVar1;
            local_20 = piVar1[1];
            goto LAB_00406a06;
          }
        } while (uVar2 < uVar3);
        local_20 = 0;
        pcStack_18 = (code *)0x0;
      }
      else {
        local_20 = 0;
        pcStack_18 = (code *)0x0;
      }
LAB_00406a06:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (pcStack_18 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0040d1e4)(local_20);
        (*pcStack_18)();
      }
      if (this != (void *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
    } while (uVar2 < uVar3);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406a70 */

void __fastcall FUN_00406a70(int param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00406b40(param_1);
  pvVar3 = *(LPVOID *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (pvVar3 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,pvVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  pvVar3 = *(LPVOID *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (pvVar3 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,pvVar3);
  }
  pvVar3 = *(LPVOID *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (pvVar3 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,pvVar3);
  }
  pvVar3 = *(LPVOID *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (pvVar3 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,pvVar3);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406b40 */

void __fastcall FUN_00406b40(int param_1)

{
  HANDLE pvVar1;
  void *this;
  DWORD DVar2;
  undefined4 local_7c [7];
  LPVOID local_60;
  undefined1 local_58 [28];
  LPVOID local_3c;
  undefined1 local_34 [28];
  LPVOID local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b68d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00406650(local_7c);
  local_8 = 0;
  if (*(char *)(param_1 + 0x24) != '\0') {
    FUN_00405340(this,param_1 + 4);
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    FUN_00405340(local_58,param_1 + 0x28);
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_00405340(local_34,param_1 + 0x4c);
  }
  FUN_00406710((undefined2 *)local_7c);
  if (local_18 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,local_18);
  }
  if (local_3c != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,local_3c);
  }
  if (local_60 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,local_60);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406c10 */

void __fastcall FUN_00406c10(PSRWLOCK param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  undefined4 local_7c [7];
  LPVOID local_60;
  undefined1 local_58 [28];
  LPVOID local_3c;
  undefined1 local_34 [28];
  LPVOID local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b68d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00406650(local_7c);
  local_8 = 0;
  AcquireSRWLockExclusive(param_1);
  if (*(char *)&param_1[9].Ptr != '\0') {
    FUN_00405340(local_7c,(int)(param_1 + 1));
  }
  if (*(char *)&param_1[0x12].Ptr != '\0') {
    FUN_00405340(local_58,(int)(param_1 + 10));
  }
  if (*(char *)&param_1[0x1b].Ptr != '\0') {
    FUN_00405340(local_34,(int)(param_1 + 0x13));
  }
  ReleaseSRWLockExclusive(param_1);
  FUN_00406710((undefined2 *)local_7c);
  if (local_18 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,local_18);
  }
  if (local_3c != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,local_3c);
  }
  if (local_60 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,local_60);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406cf0 */

void __fastcall FUN_00406cf0(int param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  
  pvVar3 = *(LPVOID *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  if (pvVar3 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,pvVar3);
  }
  pvVar3 = *(LPVOID *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (pvVar3 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,pvVar3);
  }
  pvVar3 = *(LPVOID *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (pvVar3 != (LPVOID)0x0) {
    DVar2 = 0;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar2,pvVar3);
  }
  return;
}



/* Function: FUN_00406d60 */

void __fastcall FUN_00406d60(undefined1 *param_1)

{
  PTP_TIMER p_Var1;
  int iVar2;
  PVOID pvVar3;
  PSRWLOCK SRWLock;
  FARPROC pFVar4;
  DWORD DVar5;
  HANDLE pvVar6;
  uint uVar7;
  LPVOID pvVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b6b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  p_Var1 = *(PTP_TIMER *)(param_1 + 0x18);
  if (p_Var1 != (PTP_TIMER)0x0) {
    DVar5 = GetLastError();
    SetThreadpoolTimer(p_Var1,(PFILETIME)0x0,0,0);
    WaitForThreadpoolTimerCallbacks(p_Var1,1);
    CloseThreadpoolTimer(p_Var1);
    SetLastError(DVar5);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  p_Var1 = *(PTP_TIMER *)(param_1 + 0x1c);
  if (p_Var1 != (PTP_TIMER)0x0) {
    DVar5 = GetLastError();
    SetThreadpoolTimer(p_Var1,(PFILETIME)0x0,0,0);
    WaitForThreadpoolTimerCallbacks(p_Var1,1);
    CloseThreadpoolTimer(p_Var1);
    SetLastError(DVar5);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  pvVar8 = *(LPVOID *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (pvVar8 != (LPVOID)0x0) {
    DVar5 = 0;
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,DVar5,pvVar8);
  }
  SRWLock = DAT_0040c00c;
  iVar2 = *(int *)(param_1 + 0x78);
  if ((iVar2 != 0) && (DAT_0040c00c != (PSRWLOCK)0x0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_0040c00c + 0x1c));
    AcquireSRWLockExclusive(SRWLock);
    pvVar3 = SRWLock[0x22].Ptr;
    uVar7 = iVar2 - 1;
    if (uVar7 < (uint)((int)SRWLock[0x23].Ptr - (int)pvVar3) >> 3) {
      *(undefined4 *)((int)pvVar3 + uVar7 * 8) = 0;
      *(undefined4 *)((int)pvVar3 + uVar7 * 8 + 4) = 0;
    }
    ReleaseSRWLockExclusive(SRWLock);
    if ((LPCRITICAL_SECTION)(SRWLock + 0x1c) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(SRWLock + 0x1c));
    }
  }
  pvVar8 = *(LPVOID *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (pvVar8 != (LPVOID)0x0) {
    DVar5 = 0;
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,DVar5,pvVar8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 != 0) {
    if (DAT_0040c548 == (FARPROC)0x0) {
      if (DAT_0040c5d0 == (HMODULE)0x0) {
        DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
      }
      DAT_0040c548 = GetProcAddress(DAT_0040c5d0,
                                    "RtlUnregisterFeatureConfigurationChangeNotification");
      if (DAT_0040c548 == (FARPROC)0x0) goto LAB_00406f13;
    }
    pFVar4 = DAT_0040c548;
    (*(code *)PTR_guard_check_icall_0040d1e4)(iVar2);
    (*pFVar4)();
  }
LAB_00406f13:
  pvVar8 = *(LPVOID *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (pvVar8 != (LPVOID)0x0) {
    DVar5 = 0;
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,DVar5,pvVar8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  p_Var1 = *(PTP_TIMER *)(param_1 + 0x1c);
  if (p_Var1 != (PTP_TIMER)0x0) {
    SetThreadpoolTimer(p_Var1,(PFILETIME)0x0,0,0);
    WaitForThreadpoolTimerCallbacks(p_Var1,1);
    CloseThreadpoolTimer(p_Var1);
  }
  p_Var1 = *(PTP_TIMER *)(param_1 + 0x18);
  if (p_Var1 != (PTP_TIMER)0x0) {
    SetThreadpoolTimer(p_Var1,(PFILETIME)0x0,0,0);
    WaitForThreadpoolTimerCallbacks(p_Var1,1);
    CloseThreadpoolTimer(p_Var1);
  }
  local_8 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_00408030(*(int **)(param_1 + 8));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406fd0 */

void __fastcall FUN_00406fd0(int param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_0040c57c;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0040c590 == '\0') {
    if (DAT_0040c57c != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040d1e4)(DAT_0040c100 ^ (uint)&stack0xfffffffc);
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
        ExceptionList = local_10;
        return;
      }
    }
    bVar3 = FUN_00407060(param_1);
    if (bVar3) {
      FUN_00406950(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_00406c10(*(PSRWLOCK *)(param_1 + 0xc));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407060 */

bool __fastcall FUN_00407060(int param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iStack_10;
  DWORD DStack_c;
  
  bVar3 = *(int *)(param_1 + 0xc) == 0;
  if (bVar3) {
    DStack_c = GetLastError();
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        iStack_10 = 0;
        iVar1 = FUN_00407ea0(*(undefined4 *)(param_1 + 4),&iStack_10);
        if ((-1 < iVar1) && (*(int *)(param_1 + 8) == 0)) {
          *(int *)(param_1 + 8) = iStack_10;
        }
      }
      uVar2 = -(uint)(*(int *)(param_1 + 8) != 0) & *(int *)(param_1 + 8) + 0x10U;
    }
    else {
      uVar2 = 0;
    }
    SRWLock = (PSRWLOCK)(param_1 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)(param_1 + 0xc) == 0) {
      *(uint *)(param_1 + 0xc) = uVar2;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    SetLastError(DStack_c);
    bVar3 = *(int *)(param_1 + 0xc) == 0;
  }
  return !bVar3;
}



/* Function: FUN_00407100 */

void FUN_00407100(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00406950(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
    return;
  }
  return;
}



/* Function: FUN_00407130 */

void FUN_00407130(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00406950(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
    return;
  }
  return;
}



/* Function: FUN_00407160 */

void FUN_00407160(int param_1,uint param_2,int param_3)

{
  ulonglong *puVar1;
  FARPROC pFVar2;
  code *pcVar3;
  uint6 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  PSRWLOCK pRVar11;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar3 = DAT_0040c57c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b710;
  local_10 = ExceptionList;
  uVar7 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  uVar10 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar10 == 0)) {
    ExceptionList = &local_10;
    FUN_00406fd0(0x40c000);
    ExceptionList = local_10;
    return;
  }
  if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar10 != 0xfe)) {
      local_18._0_6_ = CONCAT24((short)uVar10,param_1);
      uVar4 = (uint6)local_18;
      local_18 = (ulonglong)(uint6)local_18;
      if ((int)param_2 < 0) {
        local_18 = CONCAT26(1,uVar4);
      }
      ExceptionList = &local_10;
      if (DAT_0040c538 == (FARPROC)0x0) {
        if (DAT_0040c5d0 == (HMODULE)0x0) {
          DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
        }
        DAT_0040c538 = GetProcAddress(DAT_0040c5d0,"RtlNotifyFeatureUsage");
        if (DAT_0040c538 == (FARPROC)0x0) {
          ExceptionList = local_10;
          return;
        }
      }
      pFVar2 = DAT_0040c538;
      (*(code *)PTR_guard_check_icall_0040d1e4)(&local_18,uVar7);
      (*pFVar2)();
      ExceptionList = local_10;
      return;
    }
    local_8 = 1;
    if (DAT_0040c000 == '\0') {
      return;
    }
    ExceptionList = &local_10;
    bVar6 = FUN_00407060(0x40c000);
    pRVar11 = DAT_0040c00c;
    if (!bVar6) {
      ExceptionList = local_10;
      return;
    }
    if (uVar10 == 0xfe) {
      FUN_00406c10(DAT_0040c00c);
    }
    else {
      if (199 < uVar10) {
        if (uVar10 < 0x100) {
          ExceptionList = local_10;
          return;
        }
        if (0x1ff < uVar10) {
          ExceptionList = local_10;
          return;
        }
      }
      AcquireSRWLockExclusive(DAT_0040c00c);
      if ((((uVar10 == 2) || (uVar10 == 3)) || ((uVar10 == 6 || (uVar10 == 7)))) ||
         ((0xff < uVar10 && (uVar10 < 0x180)))) {
        FUN_00407a10(pRVar11 + 1);
        cVar5 = *(char *)&pRVar11[9].Ptr;
      }
      else {
        cVar5 = FUN_004079e0(pRVar11 + 10,uVar10,param_1,param_3);
      }
      if (pRVar11 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar11);
      }
      if (cVar5 == '\0') {
        ExceptionList = local_10;
        return;
      }
    }
    pcVar3 = DAT_0040c57c;
    if (DAT_0040c590 != '\0') {
      ExceptionList = local_10;
      return;
    }
    if (DAT_0040c57c != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040d1e4)();
      cVar5 = (*pcVar3)();
      if (cVar5 != '\0') {
        ExceptionList = local_10;
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040c010);
    FUN_00408c90((int *)&DAT_0040c018,&DAT_0040c021,&DAT_0040c000);
    pRVar11 = (PSRWLOCK)&DAT_0040c010;
    goto LAB_00407443;
  }
  local_8 = 0;
  if (DAT_0040c000 == '\0') {
    return;
  }
  if (DAT_0040c590 != '\0') {
    return;
  }
  ExceptionList = &local_10;
  if (DAT_0040c57c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)();
    cVar5 = (*pcVar3)();
    if (cVar5 != '\0') {
      ExceptionList = local_10;
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040c014);
  uVar8 = FUN_00404d20(&DAT_0040c07c,0xc);
  puVar1 = DAT_0040c080;
  if ((char)uVar8 != '\0') {
    uVar7 = -(uint)(DAT_0040c080 < DAT_0040c084) & (int)DAT_0040c084 - (int)DAT_0040c080;
    if (DAT_0040c080 == (ulonglong *)0x0) {
      puVar9 = (undefined4 *)o__errno();
      *puVar9 = 0x16;
LAB_00407294:
      o__invalid_parameter_noinfo();
    }
    else {
      if (uVar7 < 0xc) {
        memset(DAT_0040c080,0,uVar7);
        puVar9 = (undefined4 *)o__errno();
        *puVar9 = 0x22;
        goto LAB_00407294;
      }
      *DAT_0040c080 = (ulonglong)CONCAT24((short)param_2,param_1);
      *(int *)(puVar1 + 1) = param_3;
    }
    DAT_0040c080 = (ulonglong *)((int)DAT_0040c080 + 0xc);
  }
  FUN_00408e10((int *)&DAT_0040c01c,&DAT_0040c020,&DAT_0040c000);
  pRVar11 = (PSRWLOCK)&DAT_0040c014;
LAB_00407443:
  ReleaseSRWLockExclusive(pRVar11);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407470 */

void FUN_00407470(uint *param_1,int param_2,int param_3)

{
  PSRWLOCK SRWLock;
  FARPROC pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  *param_1 = 0;
  pcVar2 = DAT_0040c57c;
  if (param_3 == -1) {
    if (DAT_0040c000 == '\0') {
      return;
    }
    if (DAT_0040c590 != '\0') {
      return;
    }
    if (DAT_0040c57c != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040d1e4)();
      cVar3 = (*pcVar2)();
      if (cVar3 != '\0') {
        return;
      }
    }
    bVar4 = FUN_00407060(0x40c000);
    if (!bVar4) {
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040c010);
    SRWLock = DAT_0040c00c;
    if ((DAT_0040c078 == 0) && (DAT_0040c00c != (PSRWLOCK)0x0)) {
      DAT_0040c078 = 0;
      AcquireSRWLockExclusive(DAT_0040c00c);
      FUN_00406870(SRWLock + 0x1c,(uint *)&DAT_0040c078,0x407130,0x40c000);
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_00406870(&DAT_0040c050,param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040c010);
      return;
    }
    goto LAB_004075f3;
  }
  if (DAT_0040c000 == '\0') {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040c010);
  if (DAT_0040c04c == 0) {
    DAT_0040c04c = 0;
    if (DAT_0040c540 == (FARPROC)0x0) {
      if (DAT_0040c5d0 == (HMODULE)0x0) {
        DAT_0040c5d0 = GetModuleHandleW(L"ntdll.dll");
      }
      DAT_0040c540 = GetProcAddress(DAT_0040c5d0,"RtlRegisterFeatureConfigurationChangeNotification"
                                   );
      if (DAT_0040c540 != (FARPROC)0x0) goto LAB_004075c3;
      iVar5 = -0x3ffffec7;
    }
    else {
LAB_004075c3:
      pFVar1 = DAT_0040c540;
      (*(code *)PTR_guard_check_icall_0040d1e4)(FUN_00407100,&DAT_0040c000,0,&DAT_0040c04c);
      iVar5 = (*pFVar1)();
    }
    if (iVar5 != 0) goto LAB_004075f3;
  }
  FUN_00406870(&DAT_0040c024,param_1,param_2,param_3);
LAB_004075f3:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040c010);
  return;
}



/* Function: FUN_00407610 */

void FUN_00407610(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((int)param_1 < 0) {
    if ((DAT_0040c000 != '\0') && ((param_1 & 0x7fffffff) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0040c050);
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040c010);
      iVar1 = DAT_0040c068;
      uVar2 = (param_1 & 0x7fffffff) - 1;
      if (uVar2 < (uint)(DAT_0040c06c - DAT_0040c068) >> 3) {
        *(undefined4 *)(DAT_0040c068 + uVar2 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + uVar2 * 8) = 0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040c010);
                    /* WARNING: Could not recover jumptable at 0x00407686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0040c050);
      return;
    }
  }
  else if ((DAT_0040c000 != '\0') && (param_1 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0040c024);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040c010);
    iVar1 = DAT_0040c03c;
    uVar2 = param_1 - 1;
    if (uVar2 < (uint)(DAT_0040c040 - DAT_0040c03c) >> 3) {
      *(undefined4 *)(DAT_0040c03c + uVar2 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + uVar2 * 8) = 0;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040c010);
                    /* WARNING: Could not recover jumptable at 0x004076e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0040c024);
    return;
  }
  return;
}



/* Function: FUN_00407700 */

void __cdecl FUN_00407700(int param_1,int param_2)

{
  code *pcVar1;
  DWORD DVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 extraout_ECX;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined4 unaff_retaddr;
  undefined1 auStack_4a8 [4];
  int local_4a4;
  PSID local_4a0;
  HLOCAL local_49c;
  HLOCAL pvStack_498;
  PSID pvStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  wchar_t local_480 [52];
  undefined1 auStack_418 [2];
  undefined2 uStack_416;
  undefined4 uStack_408;
  ACL aAStack_404 [126];
  uint local_14;
  
  local_14 = DAT_0040c100 ^ (uint)auStack_4a8;
  local_4a4 = param_2;
  pwVar6 = L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x";
  pwVar7 = local_480;
  for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pwVar7 = *(undefined4 *)pwVar6;
    pwVar6 = pwVar6 + 2;
    pwVar7 = pwVar7 + 2;
  }
  local_4a0 = (PSID)0x0;
  local_490 = 0;
  uStack_48c = 0;
  uStack_488 = 0;
  uStack_484 = 0;
  local_49c = (HLOCAL)0x0;
  *pwVar7 = *pwVar6;
  if (param_1 < 5) {
    FUN_00404340(unaff_retaddr,0x2f,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\main.cpp");
LAB_0040793c:
    FUN_00404340(unaff_retaddr,0x42,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\main.cpp");
LAB_0040794e:
    FUN_00404340(unaff_retaddr,0x49,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\main.cpp");
LAB_00407960:
    FUN_00404340(unaff_retaddr,0x4c,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\main.cpp");
LAB_00407972:
    FUN_00404340(unaff_retaddr,0x11,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\main.cpp");
LAB_00407984:
    FUN_00404340(unaff_retaddr,0x1d,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\main.cpp");
LAB_00407996:
    FUN_00404340(unaff_retaddr,0x1e,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\main.cpp");
  }
  else {
    iVar5 = FUN_0040b0aa(*(undefined4 *)(param_2 + 4),local_480);
    if (iVar5 != 0xb) goto LAB_0040793c;
    iVar5 = ConvertStringSidToSidW(*(undefined4 *)(param_2 + 8),&local_4a0);
    if (iVar5 == 0) goto LAB_0040794e;
    iVar5 = ConvertStringSidToSidW(*(undefined4 *)(param_2 + 0xc),&local_49c);
    if (iVar5 == 0) goto LAB_00407960;
    pvStack_498 = local_49c;
    pvStack_494 = local_4a0;
    DVar2 = GetLengthSid(local_4a0);
    DVar3 = GetLengthSid(pvStack_498);
    DVar2 = DVar2 + DVar3 + 0x18;
    if (0x400 < DVar2 + 0x14) goto LAB_00407972;
    memset(auStack_418,0,0x400);
    auStack_418[0] = 1;
    uStack_408 = 0x14;
    uStack_416 = 0x8004;
    BVar4 = InitializeAcl(aAStack_404,DVar2,2);
    if (BVar4 == 0) goto LAB_00407984;
    BVar4 = AddAccessAllowedAce(aAStack_404,2,0x80000000,pvStack_498);
    if (BVar4 == 0) goto LAB_00407996;
    BVar4 = AddAccessAllowedAce(aAStack_404,2,0x80000000,pvStack_494);
    if (BVar4 != 0) {
      local_4a4 = 0;
      iVar5 = FUN_0040b0aa(*(undefined4 *)(param_2 + 0x10),&DAT_004018e4);
      if (iVar5 == 1) {
        GetCurrentProcessId();
        GetCurrentProcessId();
        FUN_00409780(extraout_ECX,auStack_418,local_4a4,local_490,uStack_48c,uStack_488,uStack_484);
        GetCurrentProcessId();
        if (local_4a0 != (HLOCAL)0x0) {
          LocalFree(local_4a0);
        }
        if (local_49c != (HLOCAL)0x0) {
          LocalFree(local_49c);
        }
        FUN_0040a3f0(local_14 ^ (uint)auStack_4a8);
        return;
      }
      goto LAB_004079ba;
    }
  }
  FUN_00404340(unaff_retaddr,0x1f,
               "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\main.cpp");
LAB_004079ba:
  FUN_00404340(unaff_retaddr,0x55,
               "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\main.cpp");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004079e0 */

void __thiscall FUN_004079e0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00405820(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_00407a10 */

void __fastcall FUN_00407a10(void *param_1)

{
  FUN_00405820(param_1,(uint *)&stack0x00000004,4,(uint *)&stack0x00000008,4,1);
  return;
}



/* Function: FUN_00407a40 */

void __fastcall FUN_00407a40(undefined4 param_1,int *param_2)

{
  int *piVar1;
  WCHAR WVar2;
  code *pcVar3;
  undefined4 *puVar4;
  HANDLE hHandle;
  DWORD DVar5;
  int iVar6;
  WCHAR *pWVar7;
  WCHAR *pWVar8;
  HANDLE pvVar9;
  HANDLE hHeap;
  BOOL BVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int unaff_retaddr;
  undefined4 *puVar14;
  undefined1 auStack_434 [4];
  undefined4 *puStack_430;
  int iStack_42c;
  HANDLE pvStack_428;
  int *local_424;
  WCHAR aWStack_420 [260];
  WCHAR aWStack_218 [262];
  uint local_c;
  
  local_c = DAT_0040c100 ^ (uint)auStack_434;
  *param_2 = 0;
  local_424 = param_2;
  GetCurrentProcessId();
  FUN_00402740(aWStack_218,0x104,L"Local\\SM0:%lu:%lu:%hs");
  hHandle = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,aWStack_218,0,0x1f0001);
  if (hHandle == (HANDLE)0x0) {
    FUN_00403430();
    goto LAB_00407ab3;
  }
  DVar5 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar5 == 0x102) {
    pvStack_428 = (HANDLE)0x0;
    pvVar9 = pvStack_428;
LAB_00407af9:
    pvStack_428 = pvVar9;
    iStack_42c = 0;
    iVar6 = FUN_004089d0((int)aWStack_218,&iStack_42c);
    if (iVar6 < 0) {
      FUN_00404210(unaff_retaddr,0x6d);
      FUN_00404210(unaff_retaddr,299);
LAB_00407cf4:
      if ((pvStack_428 != (HANDLE)0x0) && (BVar10 = ReleaseMutex(pvStack_428), BVar10 == 0))
      goto LAB_00407d3a;
      if ((hHandle == (HANDLE)0x0) || (BVar10 = CloseHandle(hHandle), BVar10 != 0)) {
LAB_00407ab3:
        FUN_0040a3f0(local_c ^ (uint)auStack_434);
        return;
      }
      FUN_004042b0(unaff_retaddr,0x9cd);
      goto LAB_00407d2c;
    }
    piVar1 = (int *)(iStack_42c * 4);
    if (piVar1 != (int *)0x0) {
      *param_2 = (int)piVar1;
      *(int *)*param_2 = *piVar1 + 1;
      goto LAB_00407cf4;
    }
    *param_2 = 0;
    puStack_430 = (undefined4 *)FUN_00402c20(8,0x40);
    if (puStack_430 == (undefined4 *)0x0) {
      FUN_00404210(unaff_retaddr,0x148);
      FUN_00404210(unaff_retaddr,0x134);
      goto LAB_00407cf4;
    }
    if (((uint)puStack_430 & 3) == 0) {
      pWVar8 = aWStack_420;
      uVar11 = (uint)puStack_430 >> 2;
      iVar6 = 0x104;
      iVar12 = (int)aWStack_218 - (int)pWVar8;
      do {
        if ((iVar6 == -0x7ffffefa) || (WVar2 = *(WCHAR *)(iVar12 + (int)pWVar8), WVar2 == L'\0'))
        break;
        *pWVar8 = WVar2;
        pWVar8 = pWVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pWVar7 = pWVar8 + -1;
      if (iVar6 != 0) {
        pWVar7 = pWVar8;
      }
      *pWVar7 = L'\0';
      iVar6 = 0x104;
      pWVar8 = aWStack_420;
      do {
        if (*pWVar8 == L'\0') break;
        pWVar8 = pWVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      uVar13 = -(uint)(iVar6 != 0) & 0x104U - iVar6;
      if (iVar6 != 0) {
        FUN_004027c0(aWStack_420 + uVar13,0x104 - uVar13,iVar6,0x4017f0);
      }
      uVar13 = 1;
      if (uVar11 != 0) {
        uVar13 = uVar11;
      }
      pvVar9 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,uVar11,uVar13,aWStack_420,0,0x1f0003);
      if (pvVar9 == (HANDLE)0x0) {
        uVar11 = FUN_00403430();
        if ((int)uVar11 < 0) {
          FUN_00404210(unaff_retaddr,0x88);
          FUN_00404210(unaff_retaddr,0x14b);
          puVar14 = puStack_430;
          hHeap = GetProcessHeap();
          HeapFree(hHeap,(DWORD)pvVar9,puVar14);
          FUN_00404210(unaff_retaddr,0x134);
          goto LAB_00407cf4;
        }
      }
      else {
        GetLastError();
      }
      puVar4 = puStack_430;
      puStack_430[1] = hHandle;
      puVar14 = puStack_430 + 4;
      hHandle = (HANDLE)0x0;
      *puStack_430 = 1;
      puStack_430[2] = pvVar9;
      puStack_430[3] = 0;
      memset(puVar14,0,0x30);
      *(undefined2 *)puVar14 = 0x30;
      puVar4[5] = 1;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(undefined8 *)(puVar4 + 0xe) = 0;
      *local_424 = (int)puStack_430;
      goto LAB_00407cf4;
    }
  }
  else {
    pvVar9 = hHandle;
    if ((DVar5 == 0) || (DVar5 == 0x80)) goto LAB_00407af9;
LAB_00407d2c:
    FUN_004042f0(unaff_retaddr);
  }
  FUN_00404390();
LAB_00407d3a:
  FUN_004042b0(unaff_retaddr,0x9d7);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



/* Function: FUN_00407d50 */

BOOL __fastcall FUN_00407d50(int *param_1)

{
  code *pcVar1;
  char cVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  int unaff_retaddr;
  HANDLE hObject;
  
  pcVar1 = DAT_0040c57c;
  if (DAT_0040c590 != '\0') {
LAB_00407e4c:
    *param_1 = *param_1 + -1;
    return *param_1;
  }
  if (DAT_0040c57c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') goto LAB_00407e4c;
  }
  pvVar5 = (HANDLE)param_1[1];
  hObject = pvVar5;
  DVar3 = WaitForSingleObjectEx(pvVar5,0xffffffff,0);
  if (DVar3 == 0x102) {
    pvVar5 = (HANDLE)0x0;
LAB_00407daa:
    BVar4 = *param_1 + -1;
    *param_1 = BVar4;
    if (*param_1 != 0) {
      if ((pvVar5 == (HANDLE)0x0) || (BVar4 = ReleaseMutex(pvVar5), BVar4 != 0)) {
        return BVar4;
      }
      goto LAB_00407e8a;
    }
    if ((HANDLE)param_1[2] != (HANDLE)0x0) {
      FUN_00408190((HANDLE)param_1[2]);
    }
    param_1[2] = 0;
    if ((HANDLE)param_1[3] != (HANDLE)0x0) {
      FUN_00408190((HANDLE)param_1[3]);
    }
    param_1[3] = 0;
    if (pvVar5 != (HANDLE)0x0) {
      FUN_00408450(pvVar5);
    }
    FUN_004083e0(param_1 + 6);
    if (((HANDLE)param_1[3] != (HANDLE)0x0) && (BVar4 = CloseHandle((HANDLE)param_1[3]), BVar4 == 0)
       ) goto LAB_00407e60;
    if ((param_1[2] != 0) && (BVar4 = CloseHandle(hObject), BVar4 == 0)) goto LAB_00407e6e;
    if (((HANDLE)param_1[1] == (HANDLE)0x0) || (BVar4 = CloseHandle((HANDLE)param_1[1]), BVar4 != 0)
       ) {
      DVar3 = 0;
      pvVar5 = GetProcessHeap();
      BVar4 = HeapFree(pvVar5,DVar3,param_1);
      return BVar4;
    }
  }
  else {
    if ((DVar3 == 0) || (DVar3 == 0x80)) goto LAB_00407daa;
    FUN_004042f0(unaff_retaddr);
LAB_00407e60:
    FUN_004042b0(unaff_retaddr,0x9cd);
LAB_00407e6e:
    FUN_004042b0(unaff_retaddr,0x9cd);
  }
  FUN_004042b0(unaff_retaddr,0x9cd);
LAB_00407e8a:
  FUN_004042b0(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  BVar4 = (*pcVar1)();
  return BVar4;
}



/* Function: FUN_00407ea0 */

void __fastcall FUN_00407ea0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  HANDLE hHandle;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  HANDLE hObject;
  int unaff_retaddr;
  HANDLE local_21c;
  int local_218;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00402740(local_214,0x104,L"Local\\SM0:%lu:%lu:%hs");
  hHandle = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_214,0,0x1f0001);
  local_21c = hHandle;
  if (hHandle == (HANDLE)0x0) {
    FUN_00403430();
    hObject = hHandle;
LAB_00407fd7:
    if ((hObject == (HANDLE)0x0) || (BVar5 = CloseHandle(hObject), BVar5 != 0)) {
      FUN_0040a3f0(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    DVar3 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
    if (DVar3 == 0x102) {
      hHandle = (HANDLE)0x0;
LAB_00407f39:
      local_218 = 0;
      iVar4 = FUN_004089d0((int)local_214,&local_218);
      if (iVar4 < 0) {
        FUN_00404210(unaff_retaddr,0x6d);
        FUN_00404210(unaff_retaddr,299);
      }
      else {
        piVar1 = (int *)(local_218 * 4);
        if (piVar1 == (int *)0x0) {
          iVar4 = FUN_004081e0((int)local_214,&local_21c,param_2);
          if (iVar4 < 0) {
            FUN_00404210(unaff_retaddr,0x134);
          }
        }
        else {
          *param_2 = (int)piVar1;
          *(int *)*param_2 = *piVar1 + 1;
        }
      }
      hObject = local_21c;
      if ((hHandle == (HANDLE)0x0) ||
         (BVar5 = ReleaseMutex(hHandle), hObject = local_21c, BVar5 != 0)) goto LAB_00407fd7;
    }
    else {
      if ((DVar3 == 0) || (DVar3 == 0x80)) goto LAB_00407f39;
      FUN_004042f0(unaff_retaddr);
    }
    FUN_004042b0(unaff_retaddr,0x9d7);
  }
  FUN_004042b0(unaff_retaddr,0x9cd);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_00408030 */

void __fastcall FUN_00408030(int *param_1)

{
  code *pcVar1;
  char cVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  int unaff_retaddr;
  HANDLE hObject;
  
  pcVar1 = DAT_0040c57c;
  if (DAT_0040c590 != '\0') {
LAB_0040812c:
    *param_1 = *param_1 + -1;
    if (*param_1 != 0) {
      return;
    }
    FUN_00406b40((int)(param_1 + 4));
    return;
  }
  if (DAT_0040c57c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') goto LAB_0040812c;
  }
  pvVar5 = (HANDLE)param_1[1];
  hObject = pvVar5;
  DVar3 = WaitForSingleObjectEx(pvVar5,0xffffffff,0);
  if (DVar3 == 0x102) {
    pvVar5 = (HANDLE)0x0;
LAB_0040808a:
    *param_1 = *param_1 + -1;
    if (*param_1 != 0) {
      if ((pvVar5 == (HANDLE)0x0) || (BVar4 = ReleaseMutex(pvVar5), BVar4 != 0)) {
        return;
      }
      goto LAB_00408174;
    }
    if ((HANDLE)param_1[2] != (HANDLE)0x0) {
      FUN_00408190((HANDLE)param_1[2]);
    }
    param_1[2] = 0;
    if ((HANDLE)param_1[3] != (HANDLE)0x0) {
      FUN_00408190((HANDLE)param_1[3]);
    }
    param_1[3] = 0;
    if (pvVar5 != (HANDLE)0x0) {
      FUN_00408450(pvVar5);
    }
    FUN_00406a70((int)(param_1 + 4));
    if (((HANDLE)param_1[3] != (HANDLE)0x0) && (BVar4 = CloseHandle((HANDLE)param_1[3]), BVar4 == 0)
       ) goto LAB_0040814a;
    if ((param_1[2] != 0) && (BVar4 = CloseHandle(hObject), BVar4 == 0)) goto LAB_00408158;
    if (((HANDLE)param_1[1] == (HANDLE)0x0) || (BVar4 = CloseHandle((HANDLE)param_1[1]), BVar4 != 0)
       ) {
      DVar3 = 0;
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,DVar3,param_1);
      return;
    }
  }
  else {
    if ((DVar3 == 0) || (DVar3 == 0x80)) goto LAB_0040808a;
    FUN_004042f0(unaff_retaddr);
LAB_0040814a:
    FUN_004042b0(unaff_retaddr,0x9cd);
LAB_00408158:
    FUN_004042b0(unaff_retaddr,0x9cd);
  }
  FUN_004042b0(unaff_retaddr,0x9cd);
LAB_00408174:
  FUN_004042b0(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408190 */

void __fastcall FUN_00408190(HANDLE param_1)

{
  code *pcVar1;
  DWORD dwErrCode;
  BOOL BVar2;
  int unaff_retaddr;
  
  dwErrCode = GetLastError();
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    SetLastError(dwErrCode);
    return;
  }
  FUN_004042b0(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004081e0 */

void __fastcall FUN_004081e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  WCHAR WVar1;
  code *pcVar2;
  undefined4 *lpMem;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  HANDLE dwFlags;
  HANDLE hHeap;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_retaddr;
  WCHAR local_218 [262];
  uint local_c;
  
  local_c = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  *param_3 = 0;
  lpMem = (undefined4 *)FUN_00402c20(8,0xa8);
  if (lpMem == (undefined4 *)0x0) {
    FUN_00404210(unaff_retaddr,0x148);
  }
  else {
    if (((uint)lpMem & 3) != 0) {
      FUN_00404390();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pWVar4 = local_218;
    uVar8 = (uint)lpMem >> 2;
    iVar5 = 0x104;
    iVar6 = param_1 - (int)pWVar4;
    do {
      if ((iVar5 == -0x7ffffefa) || (WVar1 = *(WCHAR *)((int)pWVar4 + iVar6), WVar1 == L'\0'))
      break;
      *pWVar4 = WVar1;
      pWVar4 = pWVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pWVar3 = pWVar4 + -1;
    if (iVar5 != 0) {
      pWVar3 = pWVar4;
    }
    *pWVar3 = L'\0';
    iVar5 = 0x104;
    pWVar4 = local_218;
    do {
      if (*pWVar4 == L'\0') break;
      pWVar4 = pWVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar7 = -(uint)(iVar5 != 0) & 0x104U - iVar5;
    if (iVar5 != 0) {
      FUN_004027c0(local_218 + uVar7,0x104 - uVar7,iVar5,0x4017f0);
    }
    uVar7 = 1;
    if (uVar8 != 0) {
      uVar7 = uVar8;
    }
    dwFlags = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,uVar8,uVar7,local_218,0,0x1f0003);
    if (dwFlags == (HANDLE)0x0) {
      uVar8 = FUN_00403430();
      if ((int)uVar8 < 0) {
        FUN_00404210(unaff_retaddr,0x88);
        FUN_00404210(unaff_retaddr,0x14b);
        hHeap = GetProcessHeap();
        HeapFree(hHeap,(DWORD)dwFlags,lpMem);
        goto LAB_004083b5;
      }
    }
    else {
      GetLastError();
    }
    *lpMem = 1;
    lpMem[1] = *param_2;
    *param_2 = 0;
    lpMem[2] = dwFlags;
    lpMem[3] = 0;
    memset(lpMem + 5,0,0x94);
    lpMem[4] = 0;
    FUN_00406650(lpMem + 5);
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(lpMem + 0x20),0,0);
    lpMem[0x26] = 0;
    lpMem[0x27] = 0;
    lpMem[0x28] = 0;
    lpMem[0x29] = 0;
    *param_3 = lpMem;
  }
LAB_004083b5:
  FUN_0040a3f0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004083e0 */

void __fastcall FUN_004083e0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  piVar1 = param_1 + 10;
  if (param_1 != piVar1) {
    do {
      lpMem = (LPVOID)*param_1;
      while (lpMem != (LPVOID)0x0) {
        pvVar2 = *(LPVOID *)((int)lpMem + 4);
        FUN_00404900((int)lpMem + 8);
        dwFlags = 0;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,dwFlags,lpMem);
        lpMem = pvVar2;
      }
      *param_1 = 0;
      param_1 = param_1 + 1;
    } while (param_1 != piVar1);
  }
  return;
}



/* Function: FUN_00408450 */

void __fastcall FUN_00408450(HANDLE param_1)

{
  code *pcVar1;
  DWORD dwErrCode;
  BOOL BVar2;
  int unaff_retaddr;
  
  dwErrCode = GetLastError();
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    SetLastError(dwErrCode);
    return;
  }
  FUN_004042b0(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004084a0 */

void __fastcall
FUN_004084a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_004030e0(param_7);
  local_8 = 0;
  FUN_00408570(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_004084f0 */

void * __fastcall FUN_004084f0(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  
  if (((param_1 != param_2) && (param_3 != (short *)0x0)) && (*param_3 != 0)) {
    psVar3 = param_3;
    do {
      sVar2 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar2 != 0);
    uVar1 = ((int)psVar3 - (int)(param_3 + 1) >> 1) * 2 + 2;
    if (uVar1 <= (uint)((int)param_2 - (int)param_1)) {
      FUN_00402690(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      return (void *)(uVar1 + (int)param_1);
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return param_1;
}



/* Function: FUN_00408570 */

void __fastcall
FUN_00408570(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00408fa0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00408590 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00408590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  undefined4 local_147c;
  uint local_1478;
  int local_1474;
  uint local_1470;
  int local_146c;
  undefined4 local_1468;
  DWORD local_1464;
  undefined4 local_1460;
  undefined4 local_145c;
  undefined4 local_1458;
  undefined4 local_1454;
  undefined4 local_1450;
  undefined4 local_144c;
  undefined8 local_1448;
  undefined4 local_1440;
  undefined8 local_143c;
  undefined4 local_1434;
  undefined4 local_1430;
  undefined4 local_142c;
  undefined4 local_1428;
  undefined4 local_1420;
  undefined4 local_141c;
  undefined4 local_1418;
  WCHAR local_1414 [2048];
  undefined1 local_414 [1024];
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040b740;
  local_10 = ExceptionList;
  uStack_14 = 0x4085ad;
  uVar3 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_141c = param_6;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_1420 = param_1;
  local_1418 = param_2;
  local_1450 = FUN_00402e00(local_1474);
  local_1478 = 0;
  local_147c = 3;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  LOCK();
  UNLOCK();
  local_146c = DAT_0040c5c0 + 1;
  local_1468 = 0;
  DAT_0040c5c0 = DAT_0040c5c0 + 1;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_0040c59c;
  local_1454 = local_1418;
  local_142c = local_141c;
  local_1458 = param_3;
  local_1460 = 0;
  local_145c = 0;
  local_1428 = local_1420;
  local_144c = 0;
  local_143c = 0;
  local_1434 = 0;
  local_1448 = 0;
  local_1440 = 0;
  if (DAT_0040c59c == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040d1e4)(uVar3);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_0040c560;
  if (DAT_0040c560 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c578;
  if (DAT_0040c578 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c574;
  if (DAT_0040c574 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c588;
  if ((DAT_0040c588 != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(&local_147c);
    (*pcVar1)();
  }
  if (-1 < local_1474) {
    local_1474 = -0x7fff0001;
    local_1470 = FUN_004030e0(0x8000ffff);
  }
  pcVar1 = DAT_0040c54c;
  if (DAT_0040c554 == '\0') {
    if (DAT_0040c54c == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040d1e4)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_004087c4;
  }
  else {
LAB_004087c4:
    pcVar1 = DAT_0040c558;
    if ((local_1478 & 2) == 0) {
      if ((DAT_0040c558 != (code *)0x0) && (DAT_0040c568 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040d1e4)(&local_147c,local_1414,0x800);
        (*pcVar1)();
      }
      if (local_1414[0] == L'\0') {
        FUN_00402940(local_1414,0x800,&local_147c);
      }
      OutputDebugStringW(local_1414);
      goto LAB_00408855;
    }
  }
  pcVar1 = DAT_0040c558;
  if ((DAT_0040c558 != (code *)0x0) && (DAT_0040c568 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(&local_147c,0,0);
    (*pcVar1)();
  }
LAB_00408855:
  pcVar1 = DAT_0040c580;
  if ((((local_1478 & 4) != 0) || (DAT_0040c55c != '\0')) && (DAT_0040c580 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040d1e4)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  FUN_00404070((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004088a0 */

void __fastcall FUN_004088a0(undefined4 param_1,undefined4 param_2)

{
  FUN_00409050(param_1,param_2);
  return;
}



/* Function: FUN_004088c0 */

void __fastcall FUN_004088c0(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_004030e0(in_stack_00000014);
  FUN_004088a0(param_1,param_2);
  return;
}



/* Function: FUN_00408910 */

uint __fastcall FUN_00408910(int param_1,int param_2)

{
  DWORD DVar1;
  int in_stack_00000010;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040b770;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004084a0(param_1,param_2,0x4016b4,0,0,in_stack_00000010,0x8007029c);
    DVar1 = 0x29c;
  }
  local_8 = 0xffffffff;
  if (0 < (int)DVar1) {
    DVar1 = DVar1 & 0xffff | 0x80070000;
  }
  FUN_004030e0(DVar1);
  FUN_004088a0(param_1,param_2);
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_004089d0 */

void __fastcall FUN_004089d0(int param_1,undefined4 *param_2)

{
  WCHAR WVar1;
  code *pcVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  HANDLE hHandle;
  DWORD DVar5;
  BOOL BVar6;
  int iVar7;
  LPLONG extraout_ECX;
  LPLONG extraout_ECX_00;
  LPLONG extraout_ECX_01;
  LPLONG extraout_ECX_02;
  LPLONG extraout_ECX_03;
  undefined4 uVar8;
  int unaff_EBX;
  uint uVar9;
  int iVar10;
  int unaff_retaddr;
  LPLONG lpPreviousCount;
  long lStack_224;
  int *piStack_220;
  undefined4 *local_21c;
  WCHAR local_218 [260];
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_0040c100 ^ (uint)&lStack_224;
  pWVar4 = local_218;
  *param_2 = 0;
  iVar10 = 0x104;
  iVar7 = param_1 - (int)pWVar4;
  do {
    if ((iVar10 == -0x7ffffefa) || (WVar1 = *(WCHAR *)(iVar7 + (int)pWVar4), WVar1 == L'\0')) break;
    *pWVar4 = WVar1;
    pWVar4 = pWVar4 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  pWVar3 = pWVar4 + -1;
  if (iVar10 != 0) {
    pWVar3 = pWVar4;
  }
  *pWVar3 = L'\0';
  iVar7 = 0x104;
  pWVar4 = local_218;
  do {
    if (*pWVar4 == L'\0') break;
    pWVar4 = pWVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar9 = -(uint)(iVar7 != 0) & 0x104U - iVar7;
  local_21c = param_2;
  if (iVar7 != 0) {
    FUN_004027c0(local_218 + uVar9,0x104 - uVar9,iVar7,0x4017f0);
  }
  hHandle = OpenSemaphoreW(0x1f0003,0,local_218);
  if (hHandle == (HANDLE)0x0) {
    DVar5 = GetLastError();
    if (DVar5 == 2) {
      unaff_EBX = 0;
      goto LAB_00408aa1;
    }
    iVar7 = FUN_00404260(unaff_retaddr,0xcd);
    unaff_EBX = 0;
    if (-1 < iVar7) goto LAB_00408aa1;
    goto LAB_00408ad6;
  }
  DVar5 = WaitForSingleObject(hHandle,0);
  if (DVar5 == 0xffffffff) {
    iVar7 = 0x99;
    lpPreviousCount = extraout_ECX;
    goto LAB_00408bd3;
  }
  if ((DVar5 == 0) || (DVar5 == 0x102)) {
    lStack_224 = 0;
    if (DVar5 == 0) {
      lpPreviousCount = &lStack_224;
      BVar6 = ReleaseSemaphore(hHandle,1,lpPreviousCount);
      if (BVar6 == 0) {
        iVar7 = 0xa2;
        lpPreviousCount = extraout_ECX_00;
        goto LAB_00408bd3;
      }
      unaff_EBX = unaff_EBX + 1;
      BVar6 = ReleaseSemaphore(hHandle,1,(LPLONG)0x0);
      if ((BVar6 != 0) || (DVar5 = GetLastError(), DVar5 != 0x12a)) {
        uVar8 = 0xa7;
        goto LAB_00408c08;
      }
    }
    else {
      piStack_220 = (int *)0x0;
      BVar6 = ReleaseSemaphore(hHandle,1,(LPLONG)&piStack_220);
      if (BVar6 != 0) {
        if (piStack_220 == (int *)0x0) {
          BVar6 = ReleaseSemaphore(hHandle,1,(LPLONG)0x0);
          if ((BVar6 == 0) && (DVar5 = GetLastError(), DVar5 == 0x12a)) {
            lpPreviousCount = (LPLONG)0x0;
            DVar5 = WaitForSingleObject(hHandle,0);
            if (DVar5 == 0xffffffff) {
              iVar7 = 0xb8;
              lpPreviousCount = extraout_ECX_02;
              goto LAB_00408bd3;
            }
            if (DVar5 == 0) goto LAB_00408bf3;
            uVar8 = 0xb9;
          }
          else {
            uVar8 = 0xb5;
          }
        }
        else {
          uVar8 = 0xb2;
        }
        goto LAB_00408c08;
      }
      iVar7 = 0xb1;
      lpPreviousCount = extraout_ECX_01;
LAB_00408bd3:
      iVar7 = FUN_00404260(unaff_retaddr,iVar7);
      unaff_EBX = 0;
      if (iVar7 < 0) goto LAB_00408c1b;
    }
LAB_00408bf3:
    BVar6 = CloseHandle(hHandle);
    if (BVar6 != 0) {
LAB_00408aa1:
      *piStack_220 = unaff_EBX;
      FUN_0040a3f0(uStack_10 ^ (uint)&stack0xfffffdd8);
      return;
    }
  }
  else {
    uVar8 = 0x9a;
LAB_00408c08:
    FUN_00404210(unaff_retaddr,uVar8);
LAB_00408c1b:
    FUN_00404210(unaff_retaddr,0xd3);
    BVar6 = CloseHandle(hHandle);
    if (BVar6 != 0) {
LAB_00408ad6:
      FUN_00404210(unaff_retaddr,100);
      FUN_0040a3f0(local_c ^ (uint)&lStack_224);
      return;
    }
    lpPreviousCount = extraout_ECX_03;
    FUN_004042b0(unaff_retaddr,0x9cd);
  }
  FUN_004042b0(unaff_retaddr,0x9cd);
  pcVar2 = (code *)swi(3);
  (*pcVar2)(lpPreviousCount);
  return;
}



/* Function: FUN_00408c60 */

void __fastcall FUN_00408c60(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_0040d1e4)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00408c90 */

void __fastcall FUN_00408c90(int *param_1,char *param_2,PVOID param_3)

{
  PTP_TIMER pti;
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  _FILETIME local_10;
  
  if (*param_2 == '\0') {
    if (*param_1 == 0) {
      local_10.dwLowDateTime = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00408d60,param_3,(PTP_CALLBACK_ENVIRON)0x0);
      pti = (PTP_TIMER)*param_1;
      if (pti != (PTP_TIMER)0x0) {
        dwErrCode = GetLastError();
        SetThreadpoolTimer(pti,(PFILETIME)0x0,0,0);
        WaitForThreadpoolTimerCallbacks(pti,1);
        CloseThreadpoolTimer(pti);
        SetLastError(dwErrCode);
      }
      *param_1 = (int)p_Var1;
      SetLastError(local_10.dwLowDateTime);
    }
    if ((PTP_TIMER)*param_1 != (PTP_TIMER)0x0) {
      local_10.dwLowDateTime = 0x4d2fa200;
      local_10.dwHighDateTime = 0xffffffff;
      SetThreadpoolTimer((PTP_TIMER)*param_1,&local_10,0,75000);
      *param_2 = '\x01';
    }
  }
  return;
}



/* Function: FUN_00408d60 */

void FUN_00408d60(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040b7a0;
  local_10 = ExceptionList;
  uVar4 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    pcVar1 = DAT_0040c57c;
    local_8 = 0;
    if (DAT_0040c590 == '\0') {
      if (DAT_0040c57c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0040d1e4)(uVar4);
        cVar2 = (*pcVar1)();
        if (cVar2 != '\0') {
          ExceptionList = local_10;
          return;
        }
      }
      bVar3 = FUN_00407060((int)param_2);
      if (bVar3) {
        FUN_00406950(*(PSRWLOCK *)(param_2 + 0xc) + 0x1c,*(PSRWLOCK *)(param_2 + 0xc));
        FUN_00406c10(*(PSRWLOCK *)(param_2 + 0xc));
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408e10 */

void __fastcall FUN_00408e10(int *param_1,char *param_2,PVOID param_3)

{
  PTP_TIMER pti;
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  _FILETIME local_10;
  
  if (*param_2 == '\0') {
    if (*param_1 == 0) {
      local_10.dwLowDateTime = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00408ee0,param_3,(PTP_CALLBACK_ENVIRON)0x0);
      pti = (PTP_TIMER)*param_1;
      if (pti != (PTP_TIMER)0x0) {
        dwErrCode = GetLastError();
        SetThreadpoolTimer(pti,(PFILETIME)0x0,0,0);
        WaitForThreadpoolTimerCallbacks(pti,1);
        CloseThreadpoolTimer(pti);
        SetLastError(dwErrCode);
      }
      *param_1 = (int)p_Var1;
      SetLastError(local_10.dwLowDateTime);
    }
    if ((PTP_TIMER)*param_1 != (PTP_TIMER)0x0) {
      local_10.dwLowDateTime = 0xfd050f80;
      local_10.dwHighDateTime = 0xffffffff;
      SetThreadpoolTimer((PTP_TIMER)*param_1,&local_10,0,0x4e2);
      *param_2 = '\x01';
    }
  }
  return;
}



/* Function: FUN_00408ee0 */

void FUN_00408ee0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *(int *)(param_2 + 0x7c))) {
      FUN_00404de0((int *)(param_2 + 0x7c));
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x7c);
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00408f40 */

undefined4 * __thiscall FUN_00408f40(void *this,byte param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__004010ec;
  if ((param_1 & 1) != 0) {
    FUN_0040a69c(this);
  }
  return (undefined4 *)this;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall std::_Facet_base::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2019 Release */

void * __thiscall std::_Facet_base::_scalar_deleting_destructor_(_Facet_base *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__004010ec;
  if ((param_1 & 1) != 0) {
    FUN_0040a69c(this);
  }
  return this;
}



/* Function: FUN_00408fa0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00408fa0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            short *param_8)

{
  code *pcVar1;
  int local_1474;
  int local_1470;
  int local_146c;
  int local_1468;
  byte local_1464;
  undefined1 local_1410 [1024];
  WCHAR local_1010 [2050];
  uint local_c;
  
  local_c = DAT_0040c100 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00403d90(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_0040a3f0(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_00404070((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409050 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00409050(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  int extraout_EDX;
  int *in_stack_00000014;
  undefined4 local_1474;
  uint local_1470;
  int local_146c;
  int local_1468;
  int local_1464;
  undefined4 local_1460;
  DWORD local_145c;
  undefined4 local_1458;
  undefined4 local_1454;
  undefined *local_1450;
  undefined4 local_144c;
  int local_1448;
  undefined4 local_1444;
  undefined8 local_1440;
  undefined4 local_1438;
  undefined8 local_1434;
  undefined4 local_142c;
  undefined4 local_1428;
  undefined4 local_1420;
  undefined4 local_1418;
  WCHAR local_1414 [2048];
  undefined1 local_414 [1024];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040b7d0;
  local_10 = ExceptionList;
  uVar3 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_146c = *in_stack_00000014;
  local_1468 = in_stack_00000014[1];
  local_1418 = param_1;
  local_14 = uVar3;
  local_1448 = FUN_00402dc0(local_146c);
  local_1470 = 0;
  local_1474 = 1;
  if (*(int *)(extraout_EDX + 8) == 1) {
    local_1470 = 8;
  }
  LOCK();
  UNLOCK();
  local_1464 = DAT_0040c5c0 + 1;
  local_1460 = 0;
  DAT_0040c5c0 = DAT_0040c5c0 + 1;
  local_145c = GetCurrentThreadId();
  pcVar1 = DAT_0040c59c;
  local_1450 = &DAT_004016b4;
  local_1458 = 0;
  local_1454 = 0;
  local_1420 = local_1418;
  local_1444 = 0;
  local_1434 = 0;
  local_142c = 0;
  local_1440 = 0;
  local_1438 = 0;
  local_144c = param_2;
  if (DAT_0040c59c == (code *)0x0) {
    local_1428 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040d1e4)(uVar3);
    local_1428 = (*pcVar1)();
  }
  pcVar1 = DAT_0040c560;
  if (DAT_0040c560 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(&local_1474);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c578;
  if (DAT_0040c578 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(&local_1474,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c574;
  if (DAT_0040c574 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(&local_1474);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c588;
  if ((DAT_0040c588 != (code *)0x0) && ((local_1470 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(&local_1474);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040c54c;
  if (-1 < local_146c) {
    FUN_00404390();
    goto LAB_00409345;
  }
  if (DAT_0040c554 == '\0') {
    if (DAT_0040c54c == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040d1e4)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040925b;
LAB_00409264:
    pcVar1 = DAT_0040c558;
    if ((DAT_0040c558 != (code *)0x0) && (DAT_0040c568 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040d1e4)(&local_1474,0,0);
      (*pcVar1)();
    }
  }
  else {
LAB_0040925b:
    pcVar1 = DAT_0040c558;
    if ((local_1470 & 2) != 0) goto LAB_00409264;
    if ((DAT_0040c558 != (code *)0x0) && (DAT_0040c568 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040d1e4)(&local_1474,local_1414,0x800);
      (*pcVar1)();
    }
    if (local_1414[0] == L'\0') {
      FUN_00402940(local_1414,0x800,&local_1474);
    }
    OutputDebugStringW(local_1414);
  }
  pcVar1 = DAT_0040c580;
  if ((((local_1470 & 4) != 0) || (DAT_0040c55c != '\0')) && (DAT_0040c580 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040d1e4)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  if ((local_1470 & 1) == 0) {
    ExceptionList = local_10;
    FUN_0040a3f0(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00409345:
  FUN_00404070((int)&local_1474);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409360 */

void __thiscall FUN_00409360(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401108;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)((int)this + 4);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_004093a0 */

undefined4 __thiscall
FUN_004093a0(void *this,undefined4 *param_1,uint *param_2,undefined4 *param_3,uint *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) {
    uVar2 = FUN_00405820(*(void **)((int)this + 0xc),(uint *)*param_1,*param_2,(uint *)*param_3,
                         *param_4,*param_5);
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_00409400 */

undefined4 __cdecl FUN_00409400(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    if (param_2 < 0x80000000) {
      uVar1 = param_2 - 1;
      uVar3 = 0;
      uVar2 = FUN_0040b105(param_1,uVar1,param_3,&stack0x00000010);
      if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
        param_1[uVar1] = 0;
        uVar3 = 0x8007007a;
      }
      else if (uVar2 == uVar1) {
        param_1[uVar1] = 0;
        return 0;
      }
      return uVar3;
    }
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  return 0x80070057;
}



/* Function: FUN_00409470 */

void __thiscall FUN_00409470(void *this,undefined4 param_1,void *param_2)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040b4e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00404150(this,0x57,"onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\service.cpp",
               in_stack_ffffffdc,in_stack_ffffffe0,unaff_retaddr,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004094c0 */

void __fastcall FUN_004094c0(uint3 param_1)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  HDESK pHVar5;
  void *pvVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  void *unaff_retaddr;
  DWORD local_130;
  _SECURITY_ATTRIBUTES local_12c;
  DWORD local_120;
  DWORD local_11c;
  HLOCAL local_118;
  undefined1 local_114 [268];
  uint local_8;
  
  local_8 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  local_118 = (HLOCAL)0x0;
  local_120 = 4;
  cVar2 = FUN_0040b21e(param_1);
  if (cVar2 == '\0') {
    FUN_0040a3f0(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  DAT_0040c640 = CreateWindowStationW((LPCWSTR)0x0,0,0x206002a,(LPSECURITY_ATTRIBUTES)0x0);
  if (DAT_0040c640 == (HWINSTA)0x0) {
    FUN_00404340(unaff_retaddr,0x41,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\service.cpp");
LAB_00409658:
    FUN_00404340(unaff_retaddr,0x42,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\service.cpp");
LAB_0040966a:
    FUN_00404340(unaff_retaddr,0x45,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\service.cpp");
LAB_0040967c:
    FUN_00404340(unaff_retaddr,0x4b,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\service.cpp");
LAB_0040968e:
    FUN_00404340(unaff_retaddr,0x4f,
                 "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\service.cpp");
  }
  else {
    BVar3 = GetUserObjectInformationA(DAT_0040c640,2,local_114,0x104,&local_130);
    if (BVar3 == 0) goto LAB_00409658;
    iVar4 = ConvertStringSecurityDescriptorToSecurityDescriptorW
                      (L"D:(A;;CCDCLCSWRPWPDTLOCRSDRCWDWO;;;LS)(A;;0xF0087;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622)"
                       ,1,&local_118,&local_11c);
    if (iVar4 == 0) goto LAB_0040966a;
    local_12c.nLength = local_11c;
    local_12c.lpSecurityDescriptor = local_118;
    local_12c.bInheritHandle = 1;
    pHVar5 = CreateDesktopW(L"WarpJitServiceDesktop",(LPCWSTR)0x0,(DEVMODEW *)0x0,0,0x2000000,
                            &local_12c);
    if (pHVar5 == (HDESK)0x0) goto LAB_0040967c;
    LocalFree(local_118);
    iVar4 = ConvertStringSecurityDescriptorToSecurityDescriptorW
                      (L"D:(A;;0xf016e;;;LS)(A;OICIIO;GA;;;LS)(A;NP;0xf037f;;;LS)(A;OICI;0x20022;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622)"
                       ,1,&local_118,&local_11c);
    if (iVar4 == 0) goto LAB_0040968e;
    BVar3 = SetUserObjectSecurity(DAT_0040c640,&local_120,local_118);
    if (BVar3 != 0) {
      LocalFree(local_118);
      pvVar6 = (void *)FUN_00409400(&DAT_0040c648,0x104,"%s\\%ls");
      uVar7 = extraout_ECX;
      if (-1 < (int)pvVar6) {
        FUN_0040a3f0(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_004096b2;
    }
  }
  pvVar6 = (void *)FUN_00404340(unaff_retaddr,0x50,
                                "onecoreuap\\windows\\directx\\dxg\\warp12\\service\\linkdll\\service.cpp"
                               );
  uVar7 = extraout_ECX_00;
LAB_004096b2:
  FUN_00409470(unaff_retaddr,uVar7,pvVar6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004096d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004096d0(int param_1)

{
  BOOL BVar1;
  
  if (param_1 == 1) {
    GetCurrentProcessId();
    guard_check_icall();
    if (DAT_0040c74c != (SERVICE_STATUS_HANDLE)0x0) {
      _DAT_0040c76c = DAT_0040c160;
      DAT_0040c160 = DAT_0040c160 + 1;
      DAT_0040c75c = 3;
      _DAT_0040c770 = 0;
      BVar1 = SetServiceStatus(DAT_0040c74c,(LPSERVICE_STATUS)&DAT_0040c758);
      if (BVar1 == 0) {
        FUN_00409be0();
      }
    }
    SetEvent(DAT_0040c750);
  }
  else if (param_1 == 4) {
    FUN_00409b70(DAT_0040c75c,0);
    return;
  }
  return;
}



/* Function: FUN_00409780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  FARPROC pFVar3;
  BOOL BVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  byte local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  local_20 = param_3;
  DAT_0040c775 = 0;
  uVar2 = FUN_004099d0();
  if ((int)uVar2 < 0) goto LAB_00409903;
  local_44 = 0x1c;
  local_1c = param_4;
  uStack_18 = param_5;
  uStack_14 = param_6;
  uStack_10 = param_7;
  local_2c = (undefined *)0x0;
  local_28 = 0;
  local_24 = 0;
  GetCurrentProcessId();
  guard_check_icall();
  pFVar3 = GetProcAddress(DAT_0040c754,(LPCSTR)0xc7);
  if (pFVar3 == (FARPROC)0x0) {
    FUN_00409be0();
    GetLastError();
    goto LAB_00409903;
  }
  uVar2 = CONCAT31((int3)((uint)extraout_ECX >> 8),DAT_0040c775);
  local_40 = DAT_0040c750;
  local_3c = param_2;
  local_38 = param_2;
  local_30 = DAT_0040c775;
  if (DAT_0040c775 == 0) {
    local_34 = &local_1c;
    local_28 = local_20;
  }
  else {
    local_34 = (undefined4 *)&DAT_0040c150;
    if (DAT_0040c778 == (HDESK)0x0) {
      DAT_0040c778 = (HDESK)FUN_004094c0((uint3)uVar2);
      uVar2 = (uint)DAT_0040c775;
      if (DAT_0040c778 == (HDESK)0x0) goto LAB_0040988b;
    }
    local_2c = &DAT_0040c648;
  }
LAB_0040988b:
  if ((char)uVar2 != '\0') {
    GetCurrentProcessId();
    guard_check_icall();
    if (DAT_0040c74c != (SERVICE_STATUS_HANDLE)0x0) {
      DAT_0040c75c = 4;
      _DAT_0040c770 = 0;
      _DAT_0040c76c = 0;
      BVar4 = SetServiceStatus(DAT_0040c74c,(LPSERVICE_STATUS)&DAT_0040c758);
      if (BVar4 == 0) {
        FUN_00409be0();
      }
    }
  }
  (*(code *)PTR_guard_check_icall_0040d1e4)(0,&local_44);
  (*pFVar3)();
LAB_00409903:
  if ((DAT_0040c775 != 0) && (DAT_0040c74c != (SERVICE_STATUS_HANDLE)0x0)) {
    DAT_0040c75c = 1;
    _DAT_0040c770 = 0;
    _DAT_0040c76c = 0;
    BVar4 = SetServiceStatus(DAT_0040c74c,(LPSERVICE_STATUS)&DAT_0040c758);
    if (BVar4 == 0) {
      FUN_00409be0();
    }
  }
  GetCurrentProcessId();
  guard_check_icall();
  uVar5 = extraout_ECX_00;
  if ((DAT_0040c778 != (HDESK)0x0) &&
     (cVar1 = FUN_0040b21e((uint3)extraout_ECX_00), uVar5 = extraout_ECX_01, cVar1 != '\0')) {
    CloseDesktop(DAT_0040c778);
    uVar5 = extraout_ECX_02;
  }
  if ((DAT_0040c640 != (HWINSTA)0x0) && (cVar1 = FUN_0040b21e((uint3)uVar5), cVar1 != '\0')) {
    CloseWindowStation(DAT_0040c640);
  }
  FUN_0040a3f0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004099d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004099d0(void)

{
  HANDLE hObject;
  HMODULE hLibModule;
  DWORD DVar1;
  BOOL BVar2;
  HANDLE pvVar3;
  HMODULE pHVar4;
  uint uVar5;
  
  if ((DAT_0040c774 == '\0') && (DAT_0040c775 != '\0')) {
    _DAT_0040c758 = _DAT_00401ec0;
    DAT_0040c75c = _UNK_00401ec4;
    uRam0040c760 = _UNK_00401ec8;
    uRam0040c764 = _UNK_00401ecc;
    _DAT_0040c768 = 0;
    _DAT_0040c76c = 0;
    _DAT_0040c770 = 0;
    DAT_0040c74c = RegisterServiceCtrlHandlerW(L"WarpJITSvc",FUN_004096d0);
    if (DAT_0040c74c == (SERVICE_STATUS_HANDLE)0x0) {
      FUN_00409be0();
      DVar1 = GetLastError();
      if ((int)DVar1 < 1) {
        return DVar1;
      }
      return DVar1 & 0xffff | 0x80070000;
    }
    GetCurrentProcessId();
    guard_check_icall();
    if (DAT_0040c74c != (SERVICE_STATUS_HANDLE)0x0) {
      DAT_0040c75c = 2;
      _DAT_0040c770 = 3000;
      _DAT_0040c76c = DAT_0040c160;
      DAT_0040c160 = DAT_0040c160 + 1;
      BVar2 = SetServiceStatus(DAT_0040c74c,(LPSERVICE_STATUS)&DAT_0040c758);
      if (BVar2 == 0) {
        FUN_00409be0();
      }
    }
  }
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  hObject = DAT_0040c750;
  if ((DAT_0040c750 != (HANDLE)0x0) && (DAT_0040c750 != (HANDLE)0xffffffff)) {
    DVar1 = GetLastError();
    CloseHandle(hObject);
    SetLastError(DVar1);
  }
  DAT_0040c750 = pvVar3;
  if ((pvVar3 != (HANDLE)0x0) && (pvVar3 != (HANDLE)0xffffffff)) {
    pHVar4 = LoadLibraryW(L"d3d10warp.dll");
    hLibModule = DAT_0040c754;
    if (DAT_0040c754 != (HMODULE)0x0) {
      DVar1 = GetLastError();
      FreeLibrary(hLibModule);
      SetLastError(DVar1);
    }
    DAT_0040c754 = pHVar4;
    if (pHVar4 != (HMODULE)0x0) {
      return 0;
    }
    DAT_0040c754 = (HMODULE)0x0;
  }
  FUN_00409be0();
  uVar5 = GetLastError();
  if (0 < (int)uVar5) {
    uVar5 = uVar5 & 0xffff | 0x80070000;
  }
  return uVar5;
}



/* Function: FUN_00409b70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409b70(int param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  if (DAT_0040c74c != (SERVICE_STATUS_HANDLE)0x0) {
    DAT_0040c75c = param_1;
    _DAT_0040c770 = param_2;
    if ((param_1 == 4) || (param_1 == 1)) {
      _DAT_0040c76c = 0;
    }
    else {
      _DAT_0040c76c = DAT_0040c160;
      DAT_0040c160 = DAT_0040c160 + 1;
    }
    BVar1 = SetServiceStatus(DAT_0040c74c,(LPSERVICE_STATUS)&DAT_0040c758);
    if (BVar1 == 0) {
      FUN_00409be0();
    }
  }
  return;
}



/* Function: FUN_00409be0 */

void FUN_00409be0(void)

{
  HANDLE hEventLog;
  wchar_t *local_b0;
  undefined2 *local_ac;
  undefined2 local_a8 [80];
  uint local_8;
  
  local_8 = DAT_0040c100 ^ (uint)&stack0xfffffffc;
  GetLastError();
  if ((DAT_0040c774 == '\0') &&
     (hEventLog = RegisterEventSourceW((LPCWSTR)0x0,L"WarpJITSvc"), hEventLog != (HANDLE)0x0)) {
    FUN_00402740(local_a8,0x50,L"%s failed with %d");
    local_b0 = L"WarpJITSvc";
    local_ac = local_a8;
    ReportEventW(hEventLog,1,0,0,(PSID)0x0,2,0,&local_b0,(LPVOID)0x0);
    DeregisterEventSource(hEventLog);
  }
  FUN_0040a3f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00409c89 */

void __fastcall FUN_00409c89(LPCVOID param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  SIZE_T SVar3;
  int iVar4;
  undefined4 *puVar5;
  _SYSTEM_INFO local_48;
  _MEMORY_BASIC_INFORMATION local_24;
  uint local_8;
  
  local_8 = param_2;
  SVar3 = VirtualQuery(param_1,&local_24,0x1c);
  if (SVar3 == 0) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  if (((byte)local_24.Protect & 0x44) != 0) {
    GetSystemInfo(&local_48);
    uVar1 = local_48.dwPageSize - 1;
    puVar5 = (undefined4 *)(~uVar1 & (uint)param_1);
    for (iVar4 = ((uVar1 & (uint)param_1) + local_48.dwPageSize + ((uVar1 & local_8) - 1)) /
                 local_48.dwPageSize + local_8 / local_48.dwPageSize; iVar4 != 0; iVar4 = iVar4 + -1
        ) {
      LOCK();
      *puVar5 = *puVar5;
      UNLOCK();
      puVar5 = (undefined4 *)((int)puVar5 + local_48.dwPageSize);
    }
  }
  return;
}



/* Function: FUN_00409cff */

void __fastcall FUN_00409cff(DWORD param_1,PDWORD param_2)

{
  LPCVOID lpAddress;
  uint uVar1;
  uint dwSize;
  code *pcVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  
  if ((0xd < *(uint *)(IMAGE_DOS_HEADER_00400000.e_program +
                      IMAGE_DOS_HEADER_00400000.e_lfanew + 0x34)) &&
     (*(int *)(&UNK_004000e0 + IMAGE_DOS_HEADER_00400000.e_lfanew) != 0)) {
    uVar5 = 0;
    iVar4 = *(ushort *)
             ((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 8)) +
            0x400018 + IMAGE_DOS_HEADER_00400000.e_lfanew;
    if (*(ushort *)(IMAGE_DOS_HEADER_00400000.e_magic + IMAGE_DOS_HEADER_00400000.e_lfanew + 6) != 0
       ) {
      do {
        uVar1 = *(uint *)(iVar4 + 0xc);
        if ((uVar1 <= *(uint *)(IMAGE_DOS_HEADER_00400000.e_magic +
                               *(int *)(&UNK_004000e0 + IMAGE_DOS_HEADER_00400000.e_lfanew) + 0xc))
           && (dwSize = *(uint *)(iVar4 + 8),
              *(uint *)(IMAGE_DOS_HEADER_00400000.e_magic +
                       *(int *)(&UNK_004000e0 + IMAGE_DOS_HEADER_00400000.e_lfanew) + 0xc) <
              uVar1 + dwSize)) {
          lpAddress = (LPCVOID)(uVar1 + 0x400000);
          if (lpAddress != (LPCVOID)0x0) {
            if (DAT_0040c790 == 0) {
              DAT_0040c790 = 1;
              if (-1 < *(int *)(iVar4 + 0x24)) {
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)();
              }
              FUN_00409c89(lpAddress,dwSize);
            }
            BVar3 = VirtualProtect(lpAddress,dwSize,param_1,param_2);
            if (BVar3 != 0) {
              return;
            }
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)();
            return;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x28;
      } while (uVar5 < *(ushort *)
                        (IMAGE_DOS_HEADER_00400000.e_magic + IMAGE_DOS_HEADER_00400000.e_lfanew + 6)
              );
    }
  }
  *param_2 = 4;
  return;
}



/* Function: FUN_00409dcc */

void FUN_00409dcc(void)

{
  if ((IMAGE_LOAD_CONFIG_DIRECTORY32_00401028.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) != 0)
  {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040c784);
    DAT_0040c798 = DAT_0040c798 + 1;
    if (DAT_0040c798 == 1) {
      FUN_00409cff(4,&DAT_0040c794);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040c784);
  }
  return;
}



/* Function: FUN_00409e11 */

void FUN_00409e11(void)

{
  DWORD local_8;
  
  if ((IMAGE_LOAD_CONFIG_DIRECTORY32_00401028.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) != 0)
  {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040c784);
    DAT_0040c798 = DAT_0040c798 + -1;
    if (DAT_0040c798 == 0) {
      FUN_00409cff(DAT_0040c794,&local_8);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040c784);
  }
  return;
}



/* Function: FUN_00409e57 */

FARPROC FUN_00409e57(uint *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  HMODULE hLibModule;
  HMODULE pHVar3;
  HANDLE hHeap;
  undefined4 *puVar4;
  FARPROC pFVar5;
  code *pcVar6;
  DWORD dwFlags;
  SIZE_T dwBytes;
  int local_38;
  uint *local_34;
  int *local_30;
  LPCSTR local_2c;
  uint local_28;
  char *local_24;
  HMODULE local_20;
  FARPROC local_1c;
  DWORD local_18;
  int *local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  FUN_00409dcc();
  pcVar6 = DAT_00401ebc;
  local_38 = 0x24;
  local_34 = param_1;
  local_2c = (LPCSTR)(param_1[1] + 0x400000);
  local_8 = (int *)(param_1[2] + 0x400000);
  local_14 = (int *)(param_1[5] + 0x400000);
  local_c = param_1[7];
  local_30 = param_2;
  local_28 = 0;
  local_24 = (char *)0x0;
  local_20 = (HMODULE)0x0;
  local_1c = (FARPROC)0x0;
  local_18 = 0;
  if ((*param_1 & 1) == 0) {
    local_8 = &local_38;
    FUN_00409e11();
    RaiseException(0xc06d0057,0,1,(ULONG_PTR *)&local_8);
    return (FARPROC)0x0;
  }
  hLibModule = (HMODULE)*local_8;
  local_10 = (int)((int)param_2 - (param_1[3] + 0x400000)) >> 2;
  uVar1 = *(uint *)(param_1[4] + 0x400000 + local_10 * 4);
  local_28 = ~(uVar1 >> 0x1f) & 1;
  local_24 = IMAGE_DOS_HEADER_00400000.e_magic + uVar1 + 2;
  if (local_28 == 0) {
    local_24 = (char *)(uVar1 & 0xffff);
  }
  pFVar5 = (FARPROC)0x0;
  if (DAT_00401ebc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(0,&local_38);
    pFVar5 = (FARPROC)(*pcVar6)();
    pcVar6 = DAT_00401ebc;
    if (pFVar5 != (FARPROC)0x0) goto LAB_0040a0e4;
  }
  pcVar6 = DAT_00401ebc;
  if (hLibModule == (HMODULE)0x0) {
    if (DAT_00401ebc == (code *)0x0) {
LAB_00409f60:
      hLibModule = LoadLibraryExA(local_2c,(HANDLE)0x0,0);
      if (hLibModule == (HMODULE)0x0) {
        local_18 = GetLastError();
        pcVar6 = DAT_00401ebc;
        if (DAT_00401ebc == (code *)0x0) {
LAB_00409f9c:
          local_8 = &local_38;
          FUN_00409e11();
          RaiseException(0xc06d007e,0,1,(ULONG_PTR *)&local_8);
          return local_1c;
        }
        (*(code *)PTR_guard_check_icall_0040d1e4)(3,&local_38);
        hLibModule = (HMODULE)(*pcVar6)();
        if (hLibModule == (HMODULE)0x0) goto LAB_00409f9c;
      }
    }
    else {
      (*(code *)PTR_guard_check_icall_0040d1e4)(1,&local_38);
      hLibModule = (HMODULE)(*pcVar6)();
      if (hLibModule == (HMODULE)0x0) goto LAB_00409f60;
    }
    LOCK();
    pHVar3 = (HMODULE)*local_8;
    if (pHVar3 == (HMODULE)0x0) {
      *local_8 = (int)hLibModule;
      pHVar3 = (HMODULE)0x0;
    }
    UNLOCK();
    if (pHVar3 == (HMODULE)0x0) {
      if ((hLibModule != (HMODULE)0xffffffff) && (param_1[6] != 0)) {
        dwBytes = 8;
        dwFlags = 8;
        hHeap = GetProcessHeap();
        puVar4 = (undefined4 *)HeapAlloc(hHeap,dwFlags,dwBytes);
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[1] = param_1;
          *puVar4 = DAT_0040c780;
          DAT_0040c780 = puVar4;
        }
      }
    }
    else {
      if (hLibModule != (HMODULE)0xffffffff) {
        FreeLibrary(hLibModule);
      }
      if (hLibModule != pHVar3) {
        hLibModule = pHVar3;
      }
    }
  }
  pcVar6 = DAT_00401ebc;
  local_20 = hLibModule;
  if (DAT_00401ebc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040d1e4)(2,&local_38);
    pFVar5 = (FARPROC)(*pcVar6)();
  }
  if (((pFVar5 == (FARPROC)0x0) &&
      ((((param_1[5] == 0 || (param_1[7] == 0)) ||
        (iVar2 = hLibModule[0xf].unused, *(int *)((int)&hLibModule->unused + iVar2) != 0x4550)) ||
       (((*(uint *)((int)&hLibModule[2].unused + iVar2) != local_c ||
         (hLibModule != *(HMODULE *)((int)&hLibModule[0xd].unused + iVar2))) ||
        (pFVar5 = (FARPROC)local_14[local_10], (FARPROC)local_14[local_10] == (FARPROC)0x0)))))) &&
     (pFVar5 = GetProcAddress(hLibModule,local_24), pFVar5 == (FARPROC)0x0)) {
    local_18 = GetLastError();
    pcVar6 = DAT_00401ebc;
    if (DAT_00401ebc != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040d1e4)(4,&local_38);
      pFVar5 = (FARPROC)(*pcVar6)();
      if (pFVar5 != (FARPROC)0x0) goto LAB_0040a0df;
    }
    local_14 = &local_38;
    FUN_00409e11();
    RaiseException(0xc06d007f,0,1,(ULONG_PTR *)&local_14);
    FUN_00409dcc();
    pFVar5 = local_1c;
  }
LAB_0040a0df:
  pcVar6 = DAT_00401ebc;
  *param_2 = (int)pFVar5;
LAB_0040a0e4:
  if (pcVar6 != (code *)0x0) {
    local_18 = 0;
    local_20 = hLibModule;
    local_1c = pFVar5;
    (*(code *)PTR_guard_check_icall_0040d1e4)(5,&local_38);
    (*pcVar6)();
  }
  FUN_00409e11();
  return pFVar5;
}



/* Function: FUN_0040a120 */

undefined4 FUN_0040a120(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040a145();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040a151();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_0040a145 */

undefined * FUN_0040a145(void)

{
  return &DAT_0040c1a0;
}



/* Function: FUN_0040a151 */

undefined * FUN_0040a151(void)

{
  return &DAT_0040c1a8;
}



/* Function: FUN_0040a160 */

undefined4 FUN_0040a160(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040a145();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040a151();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_0040a190 */

void FUN_0040a190(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(1);
  uVar3 = FUN_0040a7a1();
  o__set_fmode(uVar3);
  uVar3 = FUN_0040a798();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_0040aa1c();
    FUN_0040a67f(FUN_0040aa50);
    uVar3 = FUN_0040a78e();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_0040a7ad();
      guard_check_icall();
      guard_check_icall();
      FUN_0040a7c8();
      uVar3 = FUN_0040a798();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_0040a7bf();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_0040a798();
      iVar5 = thunk_FUN_0040a798();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_0040a82a();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040a230 */

undefined4 FUN_0040a230(void)

{
  FUN_0040a7ef();
  return 0;
}



/* Function: FUN_0040a240 */

void FUN_0040a240(void)

{
  undefined4 uVar1;
  
  FUN_0040a99a();
  uVar1 = FUN_0040a798();
  o__set_new_mode(uVar1);
  return;
}



/* Function: __scrt_common_main_seh */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl __scrt_common_main_seh(void)
   
   Library: Visual Studio 2019 Release */

int __cdecl __scrt_common_main_seh(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_ESI;
  undefined4 local_24;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_0040c1b0 != 1) {
      if (DAT_0040c1b0 == 0) {
        DAT_0040c1b0 = 1;
        iVar4 = initterm_e(&DAT_00401198,&DAT_004011ac);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_0040116c,&DAT_00401194);
        DAT_0040c1b0 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_0040a812();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_0040d1e4)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_0040a81e();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      o__get_initial_wide_environment();
      piVar5 = (int *)o___p___wargv();
      iVar4 = *piVar5;
      piVar5 = (int *)o___p___argc();
      unaff_ESI = FUN_00407700(*piVar5,iVar4);
      uVar6 = FUN_0040a952();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_0040a3cb;
    }
  }
  FUN_0040a82a();
LAB_0040a3cb:
  o_exit(unaff_ESI);
  o__exit(local_24);
  pcVar1 = (code *)swi(3);
  iVar4 = (*pcVar1)();
  return iVar4;
}



/* Function: entry */

void entry(void)

{
  ___security_init_cookie();
  __scrt_common_main_seh();
  return;
}



/* Function: FUN_0040a3f0 */

void __fastcall FUN_0040a3f0(int param_1)

{
  if (param_1 == DAT_0040c100) {
    return;
  }
  FUN_0040ab57();
  return;
}



/* Function: find_pe_section */

/* Library Function - Single Match
    struct _IMAGE_SECTION_HEADER * __cdecl find_pe_section(unsigned char * const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2)

{
  int iVar1;
  _IMAGE_SECTION_HEADER *p_Var2;
  _IMAGE_SECTION_HEADER *p_Var3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  p_Var2 = (_IMAGE_SECTION_HEADER *)
           (param_1 + (uint)*(ushort *)(param_1 + iVar1 + 0x14) + iVar1 + 0x18);
  p_Var3 = p_Var2 + (uint)*(ushort *)(param_1 + iVar1 + 6) * 0x28;
  while( true ) {
    if (p_Var2 == p_Var3) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((*(uint *)(p_Var2 + 0xc) <= param_2) &&
       (param_2 < (uint)(*(int *)(p_Var2 + 8) + *(int *)(p_Var2 + 0xc)))) break;
    p_Var2 = p_Var2 + 0x28;
  }
  return p_Var2;
}



/* Function: ___scrt_acquire_startup_lock */

/* Library Function - Single Match
    ___scrt_acquire_startup_lock
   
   Library: Visual Studio 2019 Release */

uint ___scrt_acquire_startup_lock(void)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (uVar3 != 0) {
    while( true ) {
      uVar3 = 0;
      LOCK();
      uVar1 = *(uint *)((int)Self + 4);
      if (DAT_0040c1b4 != 0) {
        uVar3 = DAT_0040c1b4;
        uVar1 = DAT_0040c1b4;
      }
      DAT_0040c1b4 = uVar1;
      UNLOCK();
      if (uVar3 == 0) break;
      if (*(uint *)((int)Self + 4) == uVar3) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}



/* Function: ___scrt_initialize_crt */

/* Library Function - Single Match
    ___scrt_initialize_crt
   
   Library: Visual Studio 2019 Release */

int __cdecl ___scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint3 extraout_var;
  uint3 uVar2;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_0040c1d1 = 1;
  }
  FUN_0040ac59();
  cVar1 = FUN_0040a7bf();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_0040a7bf();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_0040a7bf();
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}



/* Function: ___scrt_initialize_onexit_tables */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined4 __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar3;
  undefined4 uVar4;
  
  if (DAT_0040c1d0 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_0040a82a();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_0040c1b8 = 0xffffffff;
    _DAT_0040c1bc = 0xffffffff;
    _DAT_0040c1c0 = 0xffffffff;
    _DAT_0040c1c4 = 0xffffffff;
    _DAT_0040c1c8 = 0xffffffff;
    _DAT_0040c1cc = 0xffffffff;
LAB_0040a540:
    DAT_0040c1d0 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_0040c1b8);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_0040c1c4);
      if (uVar3 == 0) goto LAB_0040a540;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}



/* Function: ___scrt_is_nonwritable_in_current_image */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___scrt_is_nonwritable_in_current_image
   
   Library: Visual Studio 2019 Release */

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  void *local_14;
  
  p_Var1 = (_IMAGE_SECTION_HEADER *)0x5a4d;
  if ((((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
       (p_Var1 = (_IMAGE_SECTION_HEADER *)IMAGE_DOS_HEADER_00400000.e_lfanew,
       *(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4)
                 ) == 0x10b)) &&
     ((p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000),
      p_Var1 != (_IMAGE_SECTION_HEADER *)0x0 && (-1 < *(int *)(p_Var1 + 0x24))))) {
    ExceptionList = local_14;
    return CONCAT31((int3)((uint)p_Var1 >> 8),1);
  }
  ExceptionList = local_14;
  return (uint)p_Var1 & 0xffffff00;
}



/* Function: ___scrt_release_startup_lock */

/* Library Function - Single Match
    ___scrt_release_startup_lock
   
   Library: Visual Studio 2019 Release */

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_0040c1b4;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0040c1b4 = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}



/* Function: ___scrt_uninitialize_crt */

/* Library Function - Single Match
    ___scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 __cdecl ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  if ((DAT_0040c1d1 == '\0') || (param_2 == '\0')) {
    FUN_0040a7bf();
    FUN_0040a7bf();
  }
  return 1;
}



/* Function: FUN_0040a649 */

undefined4 __cdecl FUN_0040a649(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0040c1b8 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_0040c1b8,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_0040a67f */

int __cdecl FUN_0040a67f(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040a649(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_0040a69c */

void __cdecl FUN_0040a69c(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_0040a6c0 */

undefined4 * __thiscall FUN_0040a6c0(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040a6e8 */

uint FUN_0040a6e8(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_10);
  local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
  DVar1 = GetCurrentThreadId();
  local_8 = local_8 ^ DVar1;
  DVar1 = GetCurrentProcessId();
  local_8 = local_8 ^ DVar1;
  QueryPerformanceCounter(&local_18);
  return local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
}



/* Function: ___security_init_cookie */

/* Library Function - Single Match
    ___security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_0040c100 == 0xbb40e64e) || ((DAT_0040c100 & 0xffff0000) == 0)) {
    DAT_0040c100 = FUN_0040a6e8();
    if (DAT_0040c100 == 0xbb40e64e) {
      DAT_0040c100 = 0xbb40e64f;
    }
    else if ((DAT_0040c100 & 0xffff0000) == 0) {
      DAT_0040c100 = DAT_0040c100 | (DAT_0040c100 | 0x4711) << 0x10;
    }
  }
  DAT_0040c140 = ~DAT_0040c100;
  return;
}



/* Function: FUN_0040a78e */

undefined4 FUN_0040a78e(void)

{
  return 1;
}



/* Function: FUN_0040a798 */

undefined4 FUN_0040a798(void)

{
  return 0;
}



/* Function: FUN_0040a7a1 */

undefined4 FUN_0040a7a1(void)

{
  return 0x4000;
}



/* Function: FUN_0040a7ad */

void FUN_0040a7ad(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0040c1d8);
  return;
}



/* Function: FUN_0040a7bf */

undefined1 FUN_0040a7bf(void)

{
  return 1;
}



/* Function: FUN_0040a7c8 */

void FUN_0040a7c8(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_0040a82a();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040a7ef */

void FUN_0040a7ef(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040a145();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040a151();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_0040a812 */

undefined * FUN_0040a812(void)

{
  return &DAT_0040c78c;
}



/* Function: FUN_0040a81e */

undefined * FUN_0040a81e(void)

{
  return &DAT_0040c788;
}



/* Function: FUN_0040a82a */

void FUN_0040a82a(void)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  undefined4 local_328 [39];
  EXCEPTION_RECORD local_5c;
  _EXCEPTION_POINTERS local_c;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  FUN_0040aa0e();
  memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    FUN_0040aa0e();
  }
  return;
}



/* Function: thunk_FUN_0040a798 */

undefined4 thunk_FUN_0040a798(void)

{
  return 0;
}



/* Function: FUN_0040a952 */

uint FUN_0040a952(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && ((short)pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     ((pHVar1 = (HMODULE)0x10b, (short)piVar2[6] == 0x10b && (0xe < (uint)piVar2[0x1d])))) {
    return CONCAT31(1,piVar2[0x3a] != 0);
  }
  return (uint)pHVar1 & 0xffffff00;
}



/* Function: FUN_0040a99a */

void FUN_0040a99a(void)

{
  SetUnhandledExceptionFilter(___scrt_unhandled_exception_filter_4);
  return;
}



/* Function: ___scrt_unhandled_exception_filter@4 */

/* Library Function - Single Match
    ___scrt_unhandled_exception_filter@4
   
   Library: Visual Studio 2019 Release */

undefined4 ___scrt_unhandled_exception_filter_4(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  piVar4 = (int *)*param_1;
  if (((*piVar4 == -0x1f928c9d) && (piVar4[4] == 3)) &&
     ((iVar1 = piVar4[5], iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
    piVar3 = (int *)__current_exception();
    *piVar3 = (int)piVar4;
    iVar1 = param_1[1];
    piVar4 = (int *)__current_exception_context();
    *piVar4 = iVar1;
    o_terminate();
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return 0;
}



/* Function: FUN_0040aa0e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aa0e(void)

{
  _DAT_0040c1e0 = 0;
  return;
}



/* Function: FUN_0040aa1c */

/* WARNING: Removing unreachable block (ram,0x0040aa2e) */
/* WARNING: Removing unreachable block (ram,0x0040aa2f) */
/* WARNING: Removing unreachable block (ram,0x0040aa35) */
/* WARNING: Removing unreachable block (ram,0x0040aa3f) */
/* WARNING: Removing unreachable block (ram,0x0040aa46) */

void FUN_0040aa1c(void)

{
  return;
}



/* Function: FUN_0040aa50 */

/* WARNING: Removing unreachable block (ram,0x0040aa62) */
/* WARNING: Removing unreachable block (ram,0x0040aa63) */
/* WARNING: Removing unreachable block (ram,0x0040aa69) */
/* WARNING: Removing unreachable block (ram,0x0040aa73) */
/* WARNING: Removing unreachable block (ram,0x0040aa7a) */

void FUN_0040aa50(void)

{
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040c100 ^ (uint)&param_2;
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



/* Function: __except_handler4 */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2019 Release */

void __cdecl
__except_handler4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040b2c5(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_0040c100,FUN_0040a3f0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040ab27 */

void __cdecl FUN_0040ab27(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0040ab57 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ab57(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
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
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  uVar9 = CONCAT44(extraout_EDX,uVar2);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    uVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_0040c2e0 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0040c2e8 = (undefined4)uVar9;
  _DAT_0040c2f8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0040c2fc = &stack0x00000004;
  _DAT_0040c238 = 0x10001;
  _DAT_0040c1e8 = 0xc0000409;
  _DAT_0040c1ec = 1;
  _DAT_0040c1f8 = 1;
  DAT_0040c1fc = 2;
  _DAT_0040c1f4 = unaff_retaddr;
  _DAT_0040c2c4 = in_GS;
  _DAT_0040c2c8 = in_FS;
  _DAT_0040c2cc = in_ES;
  _DAT_0040c2d0 = in_DS;
  _DAT_0040c2d4 = unaff_EDI;
  _DAT_0040c2d8 = unaff_ESI;
  _DAT_0040c2dc = unaff_EBX;
  _DAT_0040c2e4 = uVar3;
  _DAT_0040c2ec = unaff_EBP;
  DAT_0040c2f0 = unaff_retaddr;
  _DAT_0040c2f4 = in_CS;
  _DAT_0040c300 = in_SS;
  FUN_0040ab27((_EXCEPTION_POINTERS *)&LAB_00401008);
  return;
}



/* Function: FUN_0040ac59 */

/* WARNING: Removing unreachable block (ram,0x0040acca) */
/* WARNING: Removing unreachable block (ram,0x0040ac8e) */
/* WARNING: Removing unreachable block (ram,0x0040ad42) */

undefined4 FUN_0040ac59(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_0040c504 = 0;
  DAT_0040c144 = DAT_0040c144 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_0040c144;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_0040c508 = DAT_0040c508 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_0040c508 = DAT_0040c508 | 2;
      }
    }
    DAT_0040c504 = 1;
    uVar5 = DAT_0040c144 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_0040c144 | 6;
      DAT_0040c504 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0040c504 = 3;
        uVar5 = DAT_0040c144 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_0040c504 = 5;
          uVar5 = DAT_0040c144 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_0040c144 = DAT_0040c144 | 0x6e;
            DAT_0040c504 = 6;
            uVar5 = DAT_0040c144;
          }
        }
      }
    }
  }
  DAT_0040c144 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0040c148 != 0;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040afd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ae52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ae5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ae6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ae76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: Unwind@0040ae90 */

void Unwind_0040ae90(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: o___p___argc */

void __cdecl o___p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ae9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___argc();
  return;
}



/* Function: o___p___wargv */

void __cdecl o___p___wargv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040aea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___wargv();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040aeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vsprintf */

void __cdecl o___stdio_common_vsprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040aed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vsprintf();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040aee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o___stdio_common_vswscanf */

void __cdecl o___stdio_common_vswscanf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040aef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswscanf();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040aefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_initial_wide_environment */

void __cdecl o__get_initial_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_initial_wide_environment();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040af98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040afa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040afbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040afc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040afd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040afe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040afec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040aff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040b010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: FUN_0040b01c */

int __cdecl
FUN_0040b01c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_0040a145();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0040b056 */

void __cdecl
FUN_0040b056(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040b01c(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: FUN_0040b079 */

void __cdecl
FUN_0040b079(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  puVar1 = (uint *)FUN_0040a151();
  o___stdio_common_vswscanf(*puVar1 | 1,puVar1[1],param_1,uVar2,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040b0aa */

void __cdecl FUN_0040b0aa(undefined4 param_1,undefined4 param_2)

{
  FUN_0040b079(param_1,param_2,0,&stack0x0000000c);
  return;
}



/* Function: FUN_0040b0cb */

int __cdecl
FUN_0040b0cb(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_0040a145();
  iVar2 = o___stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0040b105 */

void __cdecl
FUN_0040b105(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040b0cb(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: DelayLoad_ConvertStringSidToSidW */

void DelayLoad_ConvertStringSidToSidW(void)

{
  FUN_0040b132();
  return;
}



/* Function: FUN_0040b132 */

void FUN_0040b132(void)

{
  int *in_EAX;
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = FUN_00409e57(&ImgDelayDescr_0040bb80.grAttrs,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040b141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_ReportEventW */

void DelayLoad_ReportEventW(void)

{
  FUN_0040b153();
  return;
}



/* Function: FUN_0040b153 */

void FUN_0040b153(void)

{
  int *in_EAX;
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = FUN_00409e57(&ImgDelayDescr_0040bba0.grAttrs,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040b162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_RegisterEventSourceW */

void DelayLoad_RegisterEventSourceW(void)

{
  FUN_0040b153();
  return;
}



/* Function: DelayLoad_ConvertStringSecurityDescriptorToSecurityDescriptorW */

void DelayLoad_ConvertStringSecurityDescriptorToSecurityDescriptorW(void)

{
  FUN_0040b132();
  return;
}



/* Function: DelayLoad_RegisterServiceCtrlHandlerW */

void DelayLoad_RegisterServiceCtrlHandlerW(void)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       FUN_00409e57(&ImgDelayDescr_0040bbc0.grAttrs,(int *)&RegisterServiceCtrlHandlerW_exref);
                    /* WARNING: Could not recover jumptable at 0x0040b1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_SetServiceStatus */

void DelayLoad_SetServiceStatus(void)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       FUN_00409e57(&ImgDelayDescr_0040bbe0.grAttrs,(int *)&SetServiceStatus_exref);
                    /* WARNING: Could not recover jumptable at 0x0040b1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_DeregisterEventSource */

void DelayLoad_DeregisterEventSource(void)

{
  FUN_0040b153();
  return;
}



/* Function: DelayLoad_GetUserObjectInformationA */

void DelayLoad_GetUserObjectInformationA(void)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       FUN_00409e57(&ImgDelayDescr_0040bc00.grAttrs,(int *)&GetUserObjectInformationA_exref);
                    /* WARNING: Could not recover jumptable at 0x0040b1f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_CreateWindowStationW */

void DelayLoad_CreateWindowStationW(void)

{
  FUN_0040b207();
  return;
}



/* Function: FUN_0040b207 */

void FUN_0040b207(void)

{
  int *in_EAX;
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = FUN_00409e57(&ImgDelayDescr_0040bc20.grAttrs,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040b216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_0040b21e */

char __fastcall FUN_0040b21e(uint3 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (DAT_0040c524 == 1) {
    return '\x01';
  }
  if (DAT_0040c524 != 2) {
    uStack_8 = (uint)param_1;
    iVar1 = ApiSetQueryApiSetPresence(&DAT_00401010,(int)&uStack_8 + 3);
    if (-1 < iVar1) {
      DAT_0040c524 = (uStack_8._3_1_ == '\0') + 1;
      return uStack_8._3_1_;
    }
  }
  return '\0';
}



/* Function: DelayLoad_CreateDesktopW */

void DelayLoad_CreateDesktopW(void)

{
  FUN_0040b207();
  return;
}



/* Function: DelayLoad_CloseDesktop */

void DelayLoad_CloseDesktop(void)

{
  FUN_0040b207();
  return;
}



/* Function: DelayLoad_CloseWindowStation */

void DelayLoad_CloseWindowStation(void)

{
  FUN_0040b207();
  return;
}



/* Function: DelayLoad_SetUserObjectSecurity */

void DelayLoad_SetUserObjectSecurity(void)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       FUN_00409e57(&ImgDelayDescr_0040bc40.grAttrs,(int *)&SetUserObjectSecurity_exref);
                    /* WARNING: Could not recover jumptable at 0x0040b2b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: ApiSetQueryApiSetPresence */

void ApiSetQueryApiSetPresence(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040b2b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ApiSetQueryApiSetPresence();
  return;
}



/* Function: FUN_0040b2c5 */

int __cdecl FUN_0040b2c5(int param_1)

{
  uint uVar1;
  
  if ((DAT_0040c504 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
    return param_1;
  }
  uVar1 = MXCSR ^ 0x3f;
  if ((uVar1 & 0x81) != 0) {
    if ((uVar1 & 0x204) == 0) {
      return -0x3fffff72;
    }
    if ((uVar1 & 0x102) != 0) {
      if ((uVar1 & 0x408) == 0) {
        return -0x3fffff6f;
      }
      if ((uVar1 & 0x810) != 0) {
        if ((uVar1 & 0x1020) != 0) {
          return param_1;
        }
        return -0x3fffff71;
      }
      return -0x3fffff6d;
    }
  }
  return -0x3fffff70;
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



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0040b3c1. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b3cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040b3d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@0040b5d0 */

void Unwind_0040b5d0(void)

{
  int unaff_EBP;
  
  FUN_00408c60(*(int *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* Function: Unwind@0040b610 */

void Unwind_0040b610(void)

{
  int unaff_EBP;
  
  FUN_00406620(unaff_EBP + -0x1058);
  return;
}



/* Function: Unwind@0040b680 */

void Unwind_0040b680(void)

{
  int unaff_EBP;
  
  FUN_00406cf0(unaff_EBP + -0x78);
  return;
}



/* Function: FUN_0040b800 */

void FUN_0040b800(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040b5a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (DAT_0040c090 != (int *)0x0) {
    FUN_00407d50(DAT_0040c090);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040b860 */

void FUN_0040b860(void)

{
  LPVOID pvVar1;
  HANDLE hHeap;
  int *piVar2;
  DWORD dwFlags;
  LPVOID lpMem;
  
  piVar2 = &DAT_0040c168;
  do {
    lpMem = (LPVOID)*piVar2;
    while (lpMem != (LPVOID)0x0) {
      pvVar1 = *(LPVOID *)((int)lpMem + 4);
      dwFlags = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,dwFlags,lpMem);
      lpMem = pvVar1;
    }
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)&DAT_0040c190);
  return;
}



/* Function: FUN_0040b8c0 */

void FUN_0040b8c0(void)

{
  code *pcVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar1 = DAT_0040c57c;
  puStack_c = &LAB_0040b6e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (DAT_0040c590 == '\0') {
    if (DAT_0040c57c != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040d1e4)(DAT_0040c100 ^ (uint)&stack0xfffffffc);
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') goto LAB_0040b927;
    }
    FUN_00406d60(&DAT_0040c000);
    ExceptionList = local_10;
    return;
  }
LAB_0040b927:
  DAT_0040c000 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  if (DAT_0040c008 != (int *)0x0) {
    FUN_00408030(DAT_0040c008);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040b960 */

void FUN_0040b960(void)

{
  if (DAT_0040c754 != (HMODULE)0x0) {
    FreeLibrary(DAT_0040c754);
  }
  if ((DAT_0040c750 != (HANDLE)0x0) && (DAT_0040c750 != (HANDLE)0xffffffff)) {
    CloseHandle(DAT_0040c750);
  }
  return;
}



