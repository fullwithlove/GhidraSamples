/* Function: FUN_00404300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404300(void)

{
  _DAT_00410510 = FUN_00405380;
  DAT_00410520 = FUN_00405390;
  return;
}



/* Function: FUN_00404320 */

void FUN_00404320(void)

{
  FUN_0040e2f3(FUN_0040f640);
  return;
}



/* Function: FUN_00404340 */

void FUN_00404340(void)

{
  FUN_0040e2f3(FUN_0040f670);
  return;
}



/* Function: FUN_00404360 */

void FUN_00404360(void)

{
  DAT_00410500 = FUN_00406120;
  DAT_004104d8 = &PTR_s_WilError_03_00410000;
  DAT_004104ec = &DAT_00410114;
  return;
}



/* Function: FUN_00404390 */

void FUN_00404390(void)

{
  DAT_00410528 = FUN_00404cd0;
  DAT_00410508 = DebugBreak;
  DAT_00410524 = FUN_00404d10;
  DAT_004104f8 = FUN_004061c0;
  DAT_004104e8 = FUN_004062f0;
  DAT_0041052c = FUN_00406210;
  DAT_00410504 = FUN_00406280;
  return;
}



/* Function: FUN_004043e0 */

undefined4 __fastcall FUN_004043e0(void *param_1,uint param_2,void *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == (void *)0x0) {
    puVar2 = (undefined4 *)o__errno();
    uVar1 = 0x16;
    *puVar2 = 0x16;
    o__invalid_parameter_noinfo();
  }
  else if ((param_3 == (void *)0x0) || (param_2 < param_4)) {
    memset(param_1,0,param_2);
    if (param_3 == (void *)0x0) {
      puVar2 = (undefined4 *)o__errno();
      uVar1 = 0x16;
    }
    else {
      if (param_4 <= param_2) {
        return 0x16;
      }
      puVar2 = (undefined4 *)o__errno();
      uVar1 = 0x22;
    }
    *puVar2 = uVar1;
    o__invalid_parameter_noinfo();
  }
  else {
    memcpy(param_1,param_3,param_4);
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00404467 */

undefined4 __fastcall FUN_00404467(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00404492 */

undefined4 __fastcall FUN_00404492(char *param_1,uint param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar2 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = '\0';
    }
  }
  else {
    iVar3 = 0x7ffffffe - param_2;
    iVar4 = param_3 - (int)param_1;
    do {
      if ((iVar3 + param_2 == 0) || (param_1[iVar4] == '\0')) break;
      *param_1 = param_1[iVar4];
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    pcVar1 = param_1 + -1;
    if (param_2 != 0) {
      pcVar1 = param_1;
    }
    *pcVar1 = '\0';
    uVar2 = 0x8007007a;
    if (param_2 != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Function: FUN_004044f8 */

undefined4 __thiscall FUN_004044f8(void *this,int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0x104;
  psVar1 = (short *)this;
  do {
    if (*psVar1 == 0) break;
    psVar1 = psVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar3 = -(uint)(iVar4 != 0) & 0x104U - iVar4;
  uVar2 = 0x80070057;
  if (iVar4 != 0) {
    uVar2 = FUN_00404593((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_0040454f */

undefined4 __cdecl FUN_0040454f(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_004045e6((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_00404593 */

undefined4 __fastcall FUN_00404593(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_004045e6 */

undefined4 __fastcall
FUN_004045e6(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_0040ee6e(param_1,uVar1,param_4,param_5);
  if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
    uVar3 = 0x8007007a;
  }
  else if (uVar2 != uVar1) {
    return 0;
  }
  *(undefined2 *)(param_1 + uVar1 * 2) = 0;
  return uVar3;
}



/* Function: exception */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  o___std_exception_copy(param_1 + 4,this + 4);
  return this;
}



/* Function: FUN_00404670 */

char * __fastcall FUN_00404670(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_00404690 */

undefined4 * __thiscall FUN_00404690(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004046c5 */

short * __thiscall FUN_004046c5(void *this,short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_004045e6((int)param_1,uVar3,this,param_3,&stack0x00000010);
    }
    else {
      *param_1 = 0;
    }
  }
  if (param_2 != param_1) {
    psVar2 = param_1;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    param_1 = param_1 + ((int)psVar2 - (int)(param_1 + 1) >> 1);
  }
  return param_1;
}



/* Function: FUN_0040471c */

void __fastcall FUN_0040471c(short *param_1,int param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  code *extraout_ECX;
  code *extraout_ECX_00;
  code *pcVar3;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *this;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *pvVar4;
  short *local_218;
  WCHAR local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar3 = DAT_004104e0;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f14d;
  local_10 = ExceptionList;
  local_14 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar3 != (code *)0x0) && (DAT_004104f0 != '\0')) {
      (*(code *)PTR_guard_check_icall_00411278)(param_3,param_1,param_2,local_14);
      (*pcVar3)();
      if (*param_1 != 0) goto LAB_0040498b;
    }
    memset(local_214,0,0x200);
    pcVar3 = DAT_004104f8;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_004104f8 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00411278)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_004046c5(pcVar3,param_1,psVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_218 = FUN_004046c5(pcVar3,param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_004046c5(pvVar4,local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar2 = FUN_004046c5(local_214,local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar2 = FUN_004046c5((void *)0x0,psVar2,psVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar2 = FUN_004046c5(this,psVar2,psVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar2 = FUN_004046c5(pvVar4,psVar2,psVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_004046c5(pvVar4,psVar2,psVar1,&DAT_0040235c);
        }
        else {
          FUN_004046c5(pvVar4,psVar2,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_004046c5(pvVar4,psVar2,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_0040498b:
  ExceptionList = local_10;
  FUN_0040ded0(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004049b4 */

uint * __thiscall FUN_004049b4(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00404d51((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_004049d8 */

LPVOID __fastcall FUN_004049d8(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_0040f17d;
  local_10 = ExceptionList;
  uVar2 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_004104c8 == (FARPROC)0x0) {
    if (DAT_0041054c != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_004104c8 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0041054c = '\x01';
    if (DAT_004104c8 == (FARPROC)0x0) {
      DAT_0041054c = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_004104c8;
  (*(code *)PTR_guard_check_icall_00411278)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00404a88 */

undefined4 * __thiscall FUN_00404a88(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_00404ac1((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00404ac1 */

void __fastcall FUN_00404ac1(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  LPVOID lpMem;
  HANDLE hHeap;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      lpMem = (LPVOID)*param_1;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



/* Function: FUN_00404af8 */

undefined4 __thiscall FUN_00404af8(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_00404ac1((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_00404b42;
    *piVar1 = 0;
    FUN_00404ac1((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_00404b42:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_00404b51 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404b51(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0041053c;
  _DAT_00410540 = param_1;
  LOCK();
  DAT_0041053c = DAT_0041053c + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404b6a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404b6a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00410558;
  _DAT_004104d0 = param_1;
  LOCK();
  DAT_00410558 = DAT_00410558 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404b83 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404b83(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004105b0;
  _DAT_00410554 = param_1;
  LOCK();
  DAT_004105b0 = DAT_004105b0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00404ba0(undefined4 param_1)

{
  _DAT_004105a8 = param_1;
  return 1;
}



/* Function: FUN_00404bba */

void FUN_00404bba(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00410524;
  if (DAT_00410524 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404bea */

void FUN_00404bea(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  BOOL BVar3;
  DWORD DVar4;
  char *pcVar5;
  char *pcVar6;
  HMODULE local_110;
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  local_110 = (HMODULE)0x0;
  if ((param_1 == (LPCWSTR)0x0) || (BVar3 = GetModuleHandleExW(6,param_1,&local_110), BVar3 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = -(uint)(param_1 != (LPCWSTR)0x0) & (int)param_1 - (int)local_110;
    }
    if ((param_3 != (char *)0x0) &&
       (DVar4 = GetModuleFileNameA(local_110,local_10c,0x104), DVar4 != 0)) {
      pcVar6 = local_10c;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      do {
        pcVar5 = pcVar6 + -1;
        if (pcVar5 <= local_10c) break;
        pcVar1 = pcVar6 + -2;
        pcVar6 = pcVar5;
      } while (*pcVar1 != '\\');
      FUN_00404492(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_0040ded0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404cd0 */

undefined * FUN_00404cd0(void)

{
  if (DAT_00410544 == '\0') {
    FUN_00404bea((LPCWSTR)FUN_00404ba0,(uint *)0x0,&DAT_00410560,0x40);
    DAT_00410544 = '\x01';
  }
  return &DAT_00410560;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00404d10 */

void FUN_00404d10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00404d51 */

uint __fastcall FUN_00404d51(uint param_1)

{
  if ((int)param_1 < -0x7ff8ff15) {
    if (param_1 == 0x800700ea) {
      return 0x80000005;
    }
    if ((int)param_1 < -0x7ff8ffa8) {
      if (param_1 == 0x80070057) {
        return 0xc000000d;
      }
      if (param_1 == 0x80004005) {
        return 0xc0000001;
      }
      if (param_1 == 0x80070001) {
        return 0xc0000002;
      }
      if (param_1 == 0x80070002) {
        return 0xc0000034;
      }
      if (param_1 == 0x80070003) {
        return 0xc000003a;
      }
      if (param_1 == 0x8007000e) {
        return 0xc0000017;
      }
    }
    else {
      if (param_1 == 0x80070070) {
        return 0xc000007f;
      }
      if (param_1 == 0x8007007a) {
        return 0xc0000023;
      }
      if (param_1 == 0x8007007b) {
        return 0xc0000033;
      }
      if (param_1 == 0x8007007e) {
        return 0xc0000135;
      }
    }
  }
  else if ((int)param_1 < -0x7ff8fb81) {
    if (param_1 == 0x8007047e) {
      return 0xc0000059;
    }
    if (param_1 == 0x80070216) {
      return 0xc0000095;
    }
    if (param_1 == 0x8007023e) {
      return 0xc0000025;
    }
    if (param_1 == 0x80070246) {
      return 0xc0000161;
    }
    if (param_1 == 0x80070247) {
      return 0xc0000163;
    }
    if (param_1 == 0x80070272) {
      return 0xc0000273;
    }
  }
  else {
    if (param_1 == 0x8007050c) {
      return 0xc000042b;
    }
    if (param_1 == 0x8007054f) {
      return 0xc00000e5;
    }
    if (param_1 == 0x800705b9) {
      return 0xc000a083;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  if ((param_1 & 0x10000000) != 0) {
    return param_1 & 0xefffffff;
  }
  if ((param_1 & 0x1fff0000) == 0x70000) {
    if ((param_1 & 0xffff) == 0) {
      return 0;
    }
    return param_1 & 0xffff | 0xc0070000;
  }
  if ((param_1 & 0x1fff0000) != 0x90000) {
    return 0xc00000e5;
  }
  if ((int)param_1 < 1) {
    return param_1;
  }
  return param_1 & 0xffff | 0xc0090000;
}



/* Function: FUN_00404f26 */

DWORD __fastcall
FUN_00404f26(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f1a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00406fdf(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_00404f91 */

uint __fastcall
FUN_00404f91(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040f1c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00406fdf(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_00405012 */

void __fastcall FUN_00405012(undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  FUN_00404f91(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_0040502f */

char * __fastcall FUN_0040502f(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x1;
  }
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return param_1 + (1 - (int)pcVar1);
}



/* Function: FUN_0040504d */

int __fastcall FUN_0040504d(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  if (param_1 == (short *)0x0) {
    return 2;
  }
  psVar1 = param_1 + 1;
  do {
    sVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (sVar2 != 0);
  return ((int)param_1 - (int)psVar1 >> 1) * 2 + 2;
}



/* Function: FUN_00405075 */

void __thiscall FUN_00405075(void *this,undefined4 *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *extraout_EAX;
  char *extraout_EAX_00;
  char *extraout_EAX_01;
  char *extraout_EAX_02;
  char *extraout_EAX_03;
  void *extraout_EAX_04;
  void *extraout_EAX_05;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  void *pvVar13;
  undefined4 *puVar14;
  
  puVar11 = param_1;
  puVar14 = (undefined4 *)this;
  for (iVar10 = 0x16; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar14 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar14 = puVar14 + 1;
  }
  iVar10 = FUN_0040504d((short *)param_1[0x12]);
  iVar1 = FUN_0040504d((short *)param_1[0xf]);
  iVar2 = FUN_0040504d((short *)param_1[5]);
  pcVar3 = FUN_0040502f((char *)param_1[0x11]);
  pcVar4 = FUN_0040502f((char *)param_1[0xe]);
  pcVar5 = FUN_0040502f((char *)param_1[0xc]);
  pcVar6 = FUN_0040502f((char *)param_1[9]);
  pcVar7 = FUN_0040502f((char *)param_1[8]);
  pcVar8 = FUN_0040502f((char *)param_1[7]);
  pcVar9 = FUN_0040502f((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_00404ac1(this_00);
    FUN_00404af8(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_00407026(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_00407096(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_00407096(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_00407096(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_00407096(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_00407096(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_00407096(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_00407026(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_00407096(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_00407026(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_00405208 */

undefined4 * __thiscall FUN_00405208(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__0040108c;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_00405075((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_00405250 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00405250(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_0040471c(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_00404af8(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_0040ded0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall
   Concurrency::details::CancellationTokenRegistration_TaskProc::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::CancellationTokenRegistration_TaskProc::_scalar_deleting_destructor_
          (CancellationTokenRegistration_TaskProc *this,uint param_1)

{
  FUN_00405330((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return this;
}



/* Function: FUN_00405330 */

void __fastcall FUN_00405330(undefined4 *param_1)

{
  FUN_00404ac1(param_1 + 0x1b);
  FUN_00404ac1(param_1 + 0x19);
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_0040535d */

void FUN_0040535d(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_00410520;
  if (DAT_00410520 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00405380 */

void FUN_00405380(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00405390 */

void FUN_00405390(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_00405208(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_0040fb90);
}



/* Function: FUN_004053c0 */

exception * __thiscall FUN_004053c0(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__0040108c;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_00404a88((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_00404a88((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00405416 */

void __fastcall
FUN_00405416(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8,short *param_9,undefined4 param_10,LPCWSTR param_11,undefined4 param_12,
            undefined1 *param_13,undefined4 param_14,int *param_15)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  BOOL BVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f1e6;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar4 = *param_8;
  param_15[2] = iVar4;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar4 = FUN_00404b51(iVar4);
  }
  else if (param_7 == 1) {
    iVar4 = FUN_00404b6a(iVar4);
  }
  else if (param_7 == 2) {
    if (-1 < iVar4) {
      iVar4 = -0x7ff8fd64;
      FUN_00406fdf(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar5 = FUN_00404d51(0x8007029c);
      param_15[3] = uVar5;
    }
    iVar4 = FUN_00404b83(iVar4);
  }
  else if (param_7 == 3) {
    iVar4 = FUN_00404ba0(iVar4);
  }
  else {
    iVar4 = 0;
  }
  *param_15 = param_7;
  param_15[1] = 0;
  if (param_8[2] == 1) {
    param_15[1] = 8;
  }
  LOCK();
  UNLOCK();
  iVar6 = DAT_00410548 + 1;
  DAT_00410548 = DAT_00410548 + 1;
  param_15[4] = iVar6;
  if ((param_9 == (short *)0x0) || (*param_9 == 0)) {
    param_9 = (short *)0x0;
  }
  param_15[5] = (int)param_9;
  DVar7 = GetCurrentThreadId();
  param_15[6] = DVar7;
  param_15[9] = param_3;
  param_15[10] = param_2;
  param_15[7] = param_5;
  param_15[8] = param_4;
  param_15[0x14] = param_6;
  param_15[0xb] = iVar4;
  param_15[0x15] = param_1;
  param_15[0xc] = 0;
  param_15[0x10] = 0;
  param_15[0x11] = 0;
  param_15[0x12] = 0;
  param_15[0xd] = 0;
  param_15[0xe] = 0;
  param_15[0xf] = 0;
  pcVar1 = DAT_00410528;
  if (DAT_00410528 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00411278)(uVar3);
    iVar4 = (*pcVar1)();
  }
  pcVar1 = DAT_004104e8;
  param_15[0x13] = iVar4;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00410500;
  if (DAT_00410500 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004104fc;
  if (DAT_004104fc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00410514;
  if ((DAT_00410514 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00411278)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_00405988();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar3 = FUN_00404d51(0x8000ffff);
    param_15[3] = uVar3;
  }
  pcVar1 = DAT_004104d4;
  if (DAT_004104dc == '\0') {
    if (DAT_004104d4 == (code *)0x0) {
      BVar8 = IsDebuggerPresent();
      cVar2 = BVar8 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00411278)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040561e;
  }
  else {
LAB_0040561e:
    pcVar1 = DAT_004104e0;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_004104e0 != (code *)0x0) && (DAT_004104f0 == '\0')) {
        (*(code *)PTR_guard_check_icall_00411278)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_0040471c(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00405687;
    }
  }
  pcVar1 = DAT_004104e0;
  if ((DAT_004104e0 != (code *)0x0) && (DAT_004104f0 == '\0')) {
    (*(code *)PTR_guard_check_icall_00411278)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00405687:
  pcVar1 = DAT_00410508;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_004104e4 != '\0')) &&
     (DAT_00410508 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00411278)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004056cd */

void __fastcall FUN_004056cd(int param_1)

{
  code *pcVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_54;
  undefined4 local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  pcVar1 = DAT_00410530;
  if (DAT_00410530 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_00410518;
  if (DAT_00410518 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_0040573a;
  uVar3 = 1;
  do {
    FUN_00404bba(uVar3);
    iVar2 = extraout_ECX;
LAB_0040573a:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_0040575a */

void __fastcall FUN_0040575a(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_0040711f(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405776 */

void __fastcall
FUN_00405776(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_0040716f(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00405794 */

void __fastcall FUN_00405794(int param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint local_1c [3];
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  
  puVar2 = FUN_004049b4((void *)0x8000ffff,local_1c);
  local_10 = *puVar2;
  uStack_c = puVar2[1];
  uStack_8 = puVar2[2];
  FUN_0040575a(param_1,0xc27);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004057d6 */

void __fastcall
FUN_004057d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,void *param_7)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  uint local_24 [4];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 local_8;
  
  local_8 = param_1;
  puVar2 = FUN_004049b4(param_7,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_00405776(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_00405819 */

void __fastcall FUN_00405819(int param_1,int param_2)

{
  code *pcVar1;
  void *pvVar2;
  uint *puVar3;
  void *this;
  undefined4 in_stack_00000010;
  uint local_24 [4];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  int local_8;
  
  local_8 = param_1;
  pvVar2 = (void *)FUN_00404f26(param_1,param_2,
                                "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
                                param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_004049b4(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  FUN_0040575a(local_8,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405876 */

void __fastcall FUN_00405876(int param_1,int param_2,int param_3,uint param_4)

{
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f209;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004074a1(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004058c4 */

void __fastcall FUN_004058c4(int param_1,int param_2,int param_3)

{
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f22c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004074e4(param_1,param_2,param_3,param_1,param_1,unaff_retaddr);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405910 */

void __fastcall FUN_00405910(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f22c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405819(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040594c */

void __fastcall FUN_0040594c(int param_1)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f209;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405794(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405988 */

void FUN_00405988(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405994 */

void __fastcall FUN_00405994(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_004057d6(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004059b0 */

void FUN_004059b0(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00405910(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004059dd */

void FUN_004059dd(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00405910(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405a08 */

void __thiscall FUN_00405a08(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_00405988();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00404593(local_214,0x104,this,param_1);
  FUN_004044f8(local_214,0x402418);
  uVar3 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar3 != 0) {
    uVar2 = uVar3;
  }
  uVar2 = FUN_00406ade(this,uVar3,uVar2,local_214);
  if ((int)uVar2 < 0) {
    FUN_00405876(unaff_retaddr,0x88,0x4023dc,uVar2);
  }
  FUN_0040ded0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405aaf */

undefined4 __fastcall FUN_00405aaf(HANDLE param_1,int *param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  BOOL BVar3;
  int iVar4;
  int unaff_retaddr;
  long local_c;
  long local_8;
  
  DVar1 = WaitForSingleObject(param_1,0);
  if (DVar1 == 0xffffffff) {
    iVar4 = 0x99;
    goto LAB_00405ad2;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00405ad2:
        uVar2 = FUN_004058c4(unaff_retaddr,iVar4,0x4023dc);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00405ba4:
        *param_2 = local_8;
        return 0;
      }
      iVar4 = 0xa7;
    }
    else {
      local_c = 0;
      BVar3 = ReleaseSemaphore(param_1,1,&local_c);
      if (BVar3 == 0) {
        iVar4 = 0xb1;
        goto LAB_00405ad2;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00405ad2;
          }
          if (DVar1 == 0) goto LAB_00405ba4;
          iVar4 = 0xb9;
        }
        else {
          iVar4 = 0xb5;
        }
      }
      else {
        iVar4 = 0xb2;
      }
    }
  }
  else {
    iVar4 = 0x9a;
  }
  FUN_00405876(unaff_retaddr,iVar4,0x4023dc,0x8000ffff);
  return 0x8000ffff;
}



/* Function: FUN_00405bd2 */

void __thiscall FUN_00405bd2(void *this,int *param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  uint uVar3;
  int unaff_retaddr;
  undefined1 auStack_224 [4];
  int iStack_220;
  int *local_21c;
  WCHAR local_218 [262];
  uint local_c;
  
  local_c = DAT_004100c0 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00404593(local_218,0x104,this,(int)this);
  FUN_004044f8(local_218,0x402418);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_004058c4(unaff_retaddr,0xcd,0x4023dc);
    }
LAB_00405c80:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00405c9a;
  }
  else {
    iStack_220 = 0;
    uVar3 = FUN_00405aaf(pvVar1,&iStack_220);
    if ((int)uVar3 < 0) {
      FUN_00405876(unaff_retaddr,0xd3,0x4023dc,uVar3);
      goto LAB_00405c80;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_004059b0(pvVar1);
LAB_00405c9a:
  FUN_0040ded0(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_00405cb9 */

void __thiscall FUN_00405cb9(void *this,undefined1 *param_1,undefined4 param_2)

{
  uint *puVar1;
  LPVOID lpMem;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  LPVOID pvVar5;
  HANDLE hHeap;
  char *extraout_EAX;
  void *extraout_EAX_00;
  void *_Dst;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x12) = *param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x20) = 0;
  iVar2 = FUN_0040504d(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_0040502f(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_0040502f(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_004049d8(8,(SIZE_T)pcVar4);
    if (pvVar5 != (LPVOID)0x0) {
      lpMem = *(LPVOID *)((int)this + 0x24);
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
      *(LPVOID *)((int)this + 0x24) = pvVar5;
      *puVar1 = (uint)pcVar4;
    }
  }
  pcVar3 = *(char **)((int)this + 0x24);
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3 + *puVar1;
    FUN_00407096(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00407096(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_00407026(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00405dac */

void __fastcall FUN_00405dac(int param_1)

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
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* Function: FUN_00405e1b */

void __thiscall FUN_00405e1b(void *this,undefined1 *param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  int *piVar8;
  
  iVar3 = *(int *)((int)this + 0xc);
  if ((*(int *)((int)this + 0x10) == 0) && (iVar3 != 0)) {
    puVar6 = (undefined2 *)FUN_004049d8(8,0xdc);
    *(undefined2 **)((int)this + 0x10) = puVar6;
    if (puVar6 != (undefined2 *)0x0) {
      *(undefined2 *)((int)this + 0x14) = 5;
      *(undefined2 *)((int)this + 0x16) = 0;
      puVar2 = puVar6 + 0x6e;
      for (; puVar6 != puVar2; puVar6 = puVar6 + 0x16) {
        *puVar6 = 0x2c;
      }
    }
  }
  piVar4 = *(int **)((int)this + 0x10);
  if (piVar4 != (int *)0x0) {
    if ((iVar3 != 0) && (piVar4 != piVar4 + (uint)*(ushort *)((int)this + 0x14) * 0xb)) {
      uVar7 = *(uint *)((int)this + 0xc);
      piVar8 = piVar4 + 2;
      do {
        if ((uVar7 < (uint)piVar8[-1]) && (*piVar8 == *(int *)(param_1 + 8))) {
          return;
        }
        piVar1 = piVar8 + 9;
        uVar7 = *(uint *)((int)this + 0xc);
        piVar8 = piVar8 + 0xb;
      } while (piVar1 != piVar4 + (uint)*(ushort *)((int)this + 0x14) * 0xb);
    }
    uVar5 = (ulonglong)(*(ushort *)((int)this + 0x16) + 1) %
            (ulonglong)*(ushort *)((int)this + 0x14);
    *(short *)((int)this + 0x16) = (short)uVar5;
    piVar8 = *(int **)((int)this + 8);
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + 1;
    UNLOCK();
    FUN_00405cb9(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00405ed9 */

DWORD * __fastcall FUN_00405ed9(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_004104d8;
  if (DAT_004104d8 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_004104d8[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_00406b65(*DAT_004104d8,&local_8);
      if ((-1 < iVar2) && (puVar1[1] == 0)) {
        puVar1[1] = local_8;
      }
    }
    uVar6 = -(uint)(puVar1[1] != 0) & puVar1[1] + 0x10;
    if (uVar6 != 0) {
      DVar3 = GetCurrentThreadId();
      for (pDVar4 = *(DWORD **)(uVar6 + 8 + (DVar3 % 10) * 4); pDVar4 != (DWORD *)0x0;
          pDVar4 = (DWORD *)pDVar4[1]) {
        if (*pDVar4 == DVar3) {
          pDVar5 = pDVar4 + 2;
          if (pDVar5 == (DWORD *)0x0) {
            return (DWORD *)0x0;
          }
          if (pDVar4[4] == 0) {
            pDVar4[4] = uVar6 + 4;
            return pDVar5;
          }
          return pDVar5;
        }
      }
    }
  }
  return (DWORD *)0x0;
}



/* Function: FUN_00405f62 */

uint __fastcall FUN_00405f62(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00405f62(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0041010c + 1;
        DAT_0041010c = DAT_0041010c + 1;
        *piVar2 = iVar4;
      }
      if (*(int *)(param_1 + 0x34) == 0) {
        *(int *)(param_1 + 0x34) = *piVar2;
        *(int *)(param_1 + 0x38) = piVar2[1];
        *(int *)(param_1 + 0x3c) = piVar2[2];
      }
      *(int *)(param_1 + 0x40) = *piVar2;
      *(int *)(param_1 + 0x44) = piVar2[1];
      *(int *)(param_1 + 0x48) = piVar2[2];
      pcVar7 = param_3;
      do {
        pcVar6 = pcVar7;
        pcVar7 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      pcVar5 = param_3 + (param_4 - (int)pcVar6);
      if (2 < (int)pcVar5) {
        *pcVar6 = '\\';
        pcVar5 = (char *)piVar2[1];
        pcVar6 = pcVar5 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar9 = param_3 + (param_4 - (int)pcVar7);
        pcVar8 = pcVar9;
        if (pcVar5 + (1 - (int)pcVar6) < pcVar9) {
          pcVar8 = pcVar5 + (1 - (int)pcVar6);
        }
        pcVar5 = (char *)FUN_004043e0(pcVar7,(uint)pcVar9,(void *)piVar2[1],(uint)pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00406021 */

void __fastcall FUN_00406021(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  DWORD DVar4;
  void **ppvVar5;
  undefined4 uVar6;
  uint3 uVar8;
  int iVar7;
  DWORD *pDVar9;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f24f;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ppvVar5 = &local_10;
  ExceptionList = ppvVar5;
  *param_2 = '\0';
  iVar7 = DAT_004104ec;
  local_11 = 0;
  if (DAT_004104ec != 0) {
    DVar4 = GetCurrentThreadId();
    ppvVar5 = (void **)(DVar4 / 10);
    for (pDVar9 = *(DWORD **)(iVar7 + (DVar4 % 10) * 4); pDVar9 != (DWORD *)0x0;
        pDVar9 = (DWORD *)pDVar9[1]) {
      if (*pDVar9 == DVar4) {
        pDVar9 = pDVar9 + 2;
        break;
      }
    }
    if ((pDVar9 == (DWORD *)0x0) || (*pDVar9 == 0)) {
      local_11 = 0;
    }
    else {
      *param_2 = '\0';
      uVar6 = FUN_00405f62(param_1,*pDVar9,param_2,param_3);
      if ((char)uVar6 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar9;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_00411278)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
      ppvVar5 = (void **)0x0;
    }
  }
  pcVar1 = DAT_004104f4;
  if (DAT_004104f4 != (code *)0x0) {
    uVar8 = (uint3)((uint)ppvVar5 >> 8);
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    (*(code *)PTR_guard_check_icall_00411278)(iVar7,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406120 */

void FUN_00406120(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00406021((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_004105ac != DVar2) {
    LOCK();
    iVar1 = DAT_004105b4 + 1;
    UNLOCK();
    iVar3 = DAT_004105b4 + 1;
    DAT_004105b4 = iVar1;
    if (iVar3 < 4) {
      DAT_004105ac = DVar2;
      this = FUN_00405ed9(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00405e1b(this,param_1);
      }
      DAT_004105ac = 0;
    }
    LOCK();
    DAT_004105b4 = DAT_004105b4 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00406185 */

void __fastcall FUN_00406185(LPCSTR param_1)

{
  if (DAT_00410550 == (HMODULE)0x0) {
    DAT_00410550 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_00410550,param_1);
  return;
}



/* Function: FUN_004061c0 */

void FUN_004061c0(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_00410550 == (HMODULE)0x0) {
    DAT_00410550 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_00410550,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00406210 */

void FUN_00406210(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f22c;
  local_10 = ExceptionList;
  uVar2 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_004104cc == (code *)0x0) &&
     (DAT_004104cc = (code *)FUN_00406185("RtlNtStatusToDosErrorNoTeb"), DAT_004104cc == (code *)0x0
     )) {
    ExceptionList = local_10;
    return;
  }
  pcVar1 = DAT_004104cc;
  (*(code *)PTR_guard_check_icall_00411278)(param_1,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406280 */

undefined4 FUN_00406280(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f22c;
  local_10 = ExceptionList;
  uVar2 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_004105a4 == (code *)0x0) &&
     (DAT_004105a4 = (code *)FUN_00406185("RtlDllShutdownInProgress"), DAT_004105a4 == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_004105a4;
  (*(code *)PTR_guard_check_icall_00411278)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_004062f0 */

void FUN_004062f0(undefined1 *param_1)

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
  
  pFVar2 = DAT_00410538;
  puStack_c = &LAB_0040f295;
  local_10 = ExceptionList;
  uVar1 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_00410534;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_00410538 == (FARPROC)0x0) {
    if (DAT_004105a0 == (HMODULE)0x0) {
      DAT_004105a0 = GetModuleHandleW(L"kernelbase.dll");
      if (DAT_004105a0 != (HMODULE)0x0) goto LAB_00406382;
    }
    else {
LAB_00406382:
      pFVar2 = GetProcAddress(DAT_004105a0,"WilFailureNotifyWatchers");
    }
    DAT_00410538 = pFVar2;
    if (pFVar2 == (FARPROC)0x0) goto LAB_004063ae;
  }
  pFVar2 = DAT_00410538;
  (*(code *)PTR_guard_check_icall_00411278)(0,&local_34,&local_18,uVar1);
  (*pFVar2)();
LAB_004063ae:
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_18;
  if (local_18._4_1_ == '\x01') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  else if (local_18._4_1_ == '\x02') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  }
  else if (local_18._4_1_ == '\x03') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004063f3 */

void __fastcall FUN_004063f3(DWORD param_1)

{
  RaiseException(param_1,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_00406407 */

int __fastcall FUN_00406407(int *param_1)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = *param_1;
    if (iVar1 == 0x7fffffff) {
      return 0x7fffffff;
    }
    LOCK();
    iVar2 = *param_1;
    if (iVar1 == iVar2) {
      *param_1 = iVar1 + 1;
      iVar2 = iVar1;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
  return iVar1 + 1;
}



/* Function: FUN_00406437 */

int __fastcall FUN_00406437(int *param_1)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = *param_1;
    if (iVar1 == 0x7fffffff) break;
    LOCK();
    iVar2 = *param_1;
    if (iVar1 == iVar2) {
      *param_1 = iVar1 + -1;
      iVar2 = iVar1;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
  return iVar1 + -1;
}



/* Function: FUN_00406461 */

void __thiscall FUN_00406461(void *this,undefined4 param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  DWORD DVar2;
  
  if (param_2 <= param_3) {
    param_3 = param_2 - 1;
  }
  DVar2 = WindowsCreateStringReference(param_1,param_3,this,(int)this + 0x14);
  if (-1 < (int)DVar2) {
    return;
  }
  FUN_004063f3(DVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406498 */

void __fastcall FUN_00406498(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* Function: FUN_004064a3 */

uint * __fastcall FUN_004064a3(void *param_1)

{
  uint *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f22c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (uint *)((int)param_1 + -4);
  _eh_vector_destructor_iterator_(param_1,4,*puVar1,FUN_00406930);
  FUN_0040dee4(puVar1);
  ExceptionList = local_10;
  return puVar1;
}



/* Function: FUN_00406509 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00406509(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  void *pvVar4;
  uint uVar5;
  int unaff_retaddr;
  int iStackY_54;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_30 = (int *)0x0;
  local_8 = 0;
  local_38 = param_2;
  local_34 = param_1;
  pvVar4 = FUN_00407539(local_2c,&local_34);
  piVar2 = local_30;
  local_34 = *(undefined4 *)((int)pvVar4 + 0x14);
  local_8._0_1_ = 2;
  if (local_30 != (int *)0x0) {
    local_30 = (int *)0x0;
    pcVar1 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar2);
    (*pcVar1)();
  }
  local_8._0_1_ = 1;
  uVar5 = FUN_004076ad(&local_30,&local_34,&stack0x00000008);
  piVar2 = local_30;
  local_8._0_1_ = 0;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 0;
  if ((int)uVar5 < 0) {
    iStackY_54 = 0x27;
    local_8._0_1_ = uVar3;
  }
  else {
    pcVar1 = *(code **)(*local_30 + 0xc);
    pvVar4 = FUN_00407539(local_2c,&local_38);
    local_8._0_1_ = 3;
    (*(code *)PTR_guard_check_icall_00411278)(piVar2,*(undefined4 *)((int)pvVar4 + 0x14));
    uVar5 = (*pcVar1)();
    local_8._0_1_ = 0;
    if ((int)uVar5 < 0) {
      iStackY_54 = 0x28;
    }
    else {
      pcVar1 = *(code **)(*local_30 + 0x10);
      (*(code *)PTR_guard_check_icall_00411278)(local_30,param_3);
      uVar5 = (*pcVar1)();
      if (-1 < (int)uVar5) goto LAB_004065ed;
      iStackY_54 = 0x29;
    }
  }
  FUN_00405876(unaff_retaddr,iStackY_54,0x402480,uVar5);
LAB_004065ed:
  FUN_00406930((int *)&local_30);
  FUN_0040efe3();
  return;
}



/* Function: FUN_00406605 */

undefined4 __fastcall FUN_00406605(PSECURITY_DESCRIPTOR param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  HLOCAL pAbsoluteSecurityDescriptor;
  BOOL BVar2;
  PACL pSacl;
  BYTE *pOwner;
  int unaff_retaddr;
  DWORD local_18;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  DWORD local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_00405876(unaff_retaddr,0x2f,0x402480,0x80070057);
    uVar1 = 0x80070057;
  }
  else {
    *param_2 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_18 = 0;
    MakeAbsoluteSD(param_1,(PSECURITY_DESCRIPTOR)0x0,&local_14,(PACL)0x0,&local_10,(PACL)0x0,
                   &local_c,(PSID)0x0,&local_8,(PSID)0x0,&local_18);
    pAbsoluteSecurityDescriptor = LocalAlloc(0,local_18 + local_8 + local_c + local_10 + local_14);
    if (pAbsoluteSecurityDescriptor == (HLOCAL)0x0) {
      uVar1 = 0x8007000e;
      FUN_00405876(unaff_retaddr,0x3f,0x402480,0x8007000e);
    }
    else {
      pSacl = (PACL)(&((PACL)(local_14 + (int)pAbsoluteSecurityDescriptor))->AclRevision + local_10)
      ;
      pOwner = &pSacl->AclRevision + local_c;
      BVar2 = MakeAbsoluteSD(param_1,pAbsoluteSecurityDescriptor,&local_14,
                             (PACL)(local_14 + (int)pAbsoluteSecurityDescriptor),&local_10,pSacl,
                             &local_c,pOwner,&local_8,pOwner + local_8,&local_18);
      if (BVar2 != 0) {
        *param_2 = pAbsoluteSecurityDescriptor;
        return 0;
      }
      uVar1 = FUN_004058c4(unaff_retaddr,0x49,0x402480);
    }
    if (pAbsoluteSecurityDescriptor != (HLOCAL)0x0) {
      LocalFree(pAbsoluteSecurityDescriptor);
    }
  }
  return uVar1;
}



/* Function: FUN_0040670f */

uint FUN_0040670f(void)

{
  int iVar1;
  uint uVar2;
  int unaff_retaddr;
  undefined4 local_18;
  char local_14;
  undefined4 local_10;
  PSECURITY_DESCRIPTOR local_c;
  PSECURITY_DESCRIPTOR local_8;
  
  local_10 = 0;
  local_c = (PSECURITY_DESCRIPTOR)0x0;
  iVar1 = ConvertStringSecurityDescriptorToSecurityDescriptorW
                    (L"O:PSG:BUD:(A;;3;;;PS)(A;;3;;;SY)(A;;3;;;BA)(A;;3;;;AC)(XA;;3;;;AU;(!(WIN://ISMULTISESSIONSKU)))(XA;;3;;;IU;(!(WIN://ISMULTISESSIONSKU)))"
                     ,1,&local_c,&local_10);
  if (iVar1 == 0) {
    uVar2 = FUN_004058c4(unaff_retaddr,0x57,0x402480);
    goto LAB_004067c6;
  }
  local_8 = (PSECURITY_DESCRIPTOR)0x0;
  local_18 = 0;
  local_14 = '\x01';
  uVar2 = FUN_00406605(local_c,&local_18);
  if (local_14 != '\0') {
    FUN_00406e85(&local_8,local_18);
  }
  if ((int)uVar2 < 0) {
    iVar1 = 0x59;
LAB_004067ab:
    FUN_00405876(unaff_retaddr,iVar1,0x402480,uVar2);
  }
  else {
    uVar2 = CoInitializeSecurity
                      (local_8,-1,(SOLE_AUTHENTICATION_SERVICE *)0x0,(void *)0x0,0,2,(void *)0x0,0,
                       (void *)0x0);
    if ((int)uVar2 < 0) {
      iVar1 = 0x5a;
      goto LAB_004067ab;
    }
    uVar2 = 0;
  }
  if (local_8 != (HLOCAL)0x0) {
    LocalFree(local_8);
  }
LAB_004067c6:
  if (local_c != (HLOCAL)0x0) {
    LocalFree(local_c);
  }
  return uVar2;
}



/* Function: FUN_004067e0 */

uint __cdecl FUN_004067e0(int param_1)

{
  uint uVar1;
  uint *local_18;
  undefined1 *local_14;
  LPWSTR *local_10;
  uint local_c;
  LPWSTR local_8;
  
  uVar1 = 1;
  if (param_1 != 1) {
    local_c = 0;
    local_8 = GetCommandLineW();
    local_8 = wcschr(local_8,L' ');
    local_8 = local_8 + 1;
    local_18 = &local_c;
    local_14 = &stack0x00000008;
    local_10 = &local_8;
    uVar1 = FUN_00406836(&local_18);
    if (-1 < (int)uVar1) {
      uVar1 = local_c;
    }
  }
  return uVar1;
}



/* Function: FUN_00406836 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_00406836(undefined4 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  void *pvVar3;
  uint uVar4;
  wchar_t *pwVar5;
  LPWSTR pWVar6;
  int unaff_retaddr;
  int iStackY_34;
  
  pvVar3 = (void *)CoInitializeEx((LPVOID)0x0,0);
  if ((int)pvVar3 < 0) {
    FUN_00405994(unaff_retaddr,0x127b,
                 "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",pvVar3);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = FUN_0040670f();
  if ((int)uVar4 < 0) {
    iStackY_34 = 0x77;
  }
  else {
    pwVar5 = wcsstr(*(wchar_t **)param_1[2],L"PackagedDataInfo: ");
    if (pwVar5 == (wchar_t *)0x0) {
      uVar1 = *param_1;
      pWVar6 = PathGetArgsW(*(LPCWSTR *)param_1[2]);
      uVar4 = FUN_00406509(**(undefined4 **)param_1[1],pWVar6,uVar1);
      if (-1 < (int)uVar4) goto LAB_00406902;
      iStackY_34 = 0x7c;
    }
    else {
      pwVar5 = wcschr(*(wchar_t **)param_1[2],L' ');
      uVar1 = *param_1;
      *(wchar_t **)param_1[2] = pwVar5 + 1;
      pWVar6 = PathGetArgsW(pwVar5 + 1);
      uVar4 = FUN_00406509(**(undefined4 **)param_1[1],pWVar6,uVar1);
      if (-1 < (int)uVar4) {
LAB_00406902:
        uVar4 = 0;
        goto LAB_00406904;
      }
      iStackY_34 = 0x84;
    }
  }
  FUN_00405876(unaff_retaddr,iStackY_34,0x402480,uVar4);
LAB_00406904:
  CoUninitialize();
  return uVar4;
}



/* Function: FUN_00406930 */

void __fastcall FUN_00406930(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040f332;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406990 */

int FUN_00406990(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00406437(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x14);
      (*(code *)PTR_guard_check_icall_00411278)(1);
      (*pcVar1)();
    }
    if (DAT_004105b8 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_004105b8 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(DAT_004105b8);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_004069f0 */

void FUN_004069f0(int param_1)

{
  FUN_00406407((int *)(param_1 + 8));
  return;
}



/* Function: FUN_00406a10 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00406a10(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar3 = (undefined4 *)auStack_20;
  uVar5 = 0;
  local_8 = 0;
  *param_3 = 0;
  piStack_24 = (int *)0x406a33;
  iVar1 = FUN_00404467(param_2,(int *)&DAT_004027c4);
  if (iVar1 == 0) {
    piStack_24 = (int *)0x406a41;
    iVar1 = FUN_00404467(extraout_ECX,(int *)&DAT_004028a8);
    if (iVar1 == 0) {
      uVar5 = 0x80004002;
      goto LAB_00406a6e;
    }
    *param_3 = param_1;
    pcVar4 = *(code **)(*param_1 + 4);
  }
  else {
    *param_3 = param_1;
    pcVar4 = *(code **)(*param_1 + 4);
  }
  piStack_24 = param_1;
  puVar2 = &uStack_28;
  uStack_28 = 0x406a6c;
  (*(code *)PTR_guard_check_icall_00411278)();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x406a6e;
  (*pcVar4)();
LAB_00406a6e:
  *(undefined4 *)((int)puVar3 + -4) = 0x406a75;
  return uVar5;
}



/* Function: FUN_00406a83 */

void __fastcall FUN_00406a83(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = '\0';
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00406a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CoUninitialize();
    return;
  }
  return;
}



/* Function: FUN_00406a99 */

void __fastcall FUN_00406a99(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  HANDLE hHeap;
  LPVOID lpMem;
  DWORD dwFlags;
  
  piVar1 = param_1 + 10;
  if (param_1 != piVar1) {
    do {
      lpMem = (LPVOID)*param_1;
      while (lpMem != (LPVOID)0x0) {
        pvVar2 = *(LPVOID *)((int)lpMem + 4);
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



/* Function: FUN_00406ade */

undefined4 __thiscall FUN_00406ade(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00405012(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_00406b2e(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_00406b2e */

void __thiscall FUN_00406b2e(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_004059b0(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00406b65 */

void __fastcall FUN_00406b65(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  int iVar4;
  int unaff_retaddr;
  int local_220 [2];
  HANDLE local_218;
  HANDLE local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_0040454f(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00406b2e(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00405012(extraout_ECX);
    goto LAB_00406c7f;
  }
  FUN_00406f18(&local_214,&local_218);
  local_220[0] = 0;
  local_220[1] = 0;
  uVar2 = FUN_00405bd2(local_210,local_220);
  if ((int)uVar2 < 0) {
    FUN_00405876(unaff_retaddr,100,0x4023dc,uVar2);
    FUN_00405876(unaff_retaddr,0x6d,0x4023dc,uVar2);
    iVar4 = 299;
LAB_00406cb3:
    FUN_00405876(unaff_retaddr,iVar4,0x4023dc,uVar2);
  }
  else {
    piVar3 = (int *)(local_220[0] << 2);
    if (piVar3 == (int *)0x0) {
      uVar2 = FUN_00406dc0((int)local_210,&local_214,param_2);
      if ((int)uVar2 < 0) {
        iVar4 = 0x134;
        goto LAB_00406cb3;
      }
    }
    else {
      *param_2 = piVar3;
      *(int *)*param_2 = *piVar3 + 1;
    }
  }
  if (local_218 != (HANDLE)0x0) {
    FUN_004059dd(local_218);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004059b0(local_214);
  }
LAB_00406c7f:
  FUN_0040ded0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406cc3 */

int __fastcall FUN_00406cc3(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  HANDLE hHeap;
  int *piVar5;
  int *local_8;
  
  pcVar1 = DAT_00410504;
  if (DAT_0041051c == '\0') {
    local_8 = param_1;
    if (DAT_00410504 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00411278)();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') goto LAB_00406d60;
    }
    iVar3 = FUN_00406f18(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar5 = local_8;
    if (*param_1 == 0) {
      FUN_00406b2e(param_1 + 2,0);
      FUN_00406b2e(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar4 = GetLastError();
        FUN_004059dd(local_8);
        SetLastError(DVar4);
      }
      FUN_00406d6e((int)param_1);
      DVar4 = 0;
      hHeap = GetProcessHeap();
      iVar3 = HeapFree(hHeap,DVar4,param_1);
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      iVar3 = FUN_004059dd(piVar5);
    }
  }
  else {
LAB_00406d60:
    *param_1 = *param_1 + -1;
    iVar3 = *param_1;
  }
  return iVar3;
}



/* Function: FUN_00406d6e */

void __fastcall FUN_00406d6e(int param_1)

{
  FUN_00406ebd((int *)(param_1 + 0x18));
  FUN_00406d99((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004059b0(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00406d99 */

void __fastcall FUN_00406d99(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_004059b0((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_004059b0((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00406dc0 */

uint __fastcall FUN_00406dc0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  int unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_004049d8(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00405876(unaff_retaddr,0x148,0x4023dc,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00405988();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00405a08(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00405876(unaff_retaddr,0x14b,0x4023dc,uVar3);
    }
    else {
      FUN_00406f7b(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_00406d99(local_10);
  }
  FUN_00406f5b((int *)&local_18);
  return uVar3;
}



/* Function: FUN_00406e85 */

void __thiscall FUN_00406e85(void *this,undefined4 param_1)

{
  HLOCAL hMem;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  hMem = *this;
  if (hMem != (HLOCAL)0x0) {
    dwErrCode = GetLastError();
    LocalFree(hMem);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00406ebd */

void __fastcall FUN_00406ebd(int *param_1)

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
        FUN_00405dac((int)lpMem + 8);
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



/* Function: FUN_00406f18 */

void __thiscall FUN_00406f18(void *this,undefined4 *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  HANDLE hHandle;
  int unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  hHandle = *this;
  DVar2 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar2 == 0x102) {
    hHandle = (HANDLE)0x0;
  }
  else if ((DVar2 != 0) && (DVar2 != 0x80)) {
    FUN_0040594c(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00406f5b */

void __fastcall FUN_00406f5b(int *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  lpMem = (LPVOID)*param_1;
  *param_1 = 0;
  if (lpMem != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
  }
  return;
}



/* Function: FUN_00406f7b */

undefined4 * __thiscall FUN_00406f7b(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 4) = *param_1;
  *param_1 = 0;
  *(undefined4 *)((int)this + 8) = *param_2;
  *param_2 = 0;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  param_2[1] = 0;
  memset((undefined2 *)((int)this + 0x10),0,0x30);
  *(undefined2 *)((int)this + 0x10) = 0x30;
  *(undefined4 *)((int)this + 0x14) = 1;
  puVar2 = (undefined4 *)((int)this + 0x18);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return (undefined4 *)this;
}



/* Function: FUN_00406fdf */

void __fastcall
FUN_00406fdf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00404d51(param_7);
  local_8 = 0;
  FUN_004070f9(param_1,param_2,param_3,param_4,param_5,param_6,&local_10);
  return;
}



/* Function: FUN_00407026 */

void * __fastcall FUN_00407026(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_0040504d(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_004043e0(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_00407096 */

char * __fastcall FUN_00407096(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_0040502f(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      FUN_004043e0(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar1);
      if (param_4 == (undefined4 *)0x0) {
        return pcVar1;
      }
      *param_4 = param_1;
      return pcVar1;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return pcVar2;
}



/* Function: FUN_004070f9 */

void __fastcall
FUN_004070f9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_0040758c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}



/* Function: FUN_0040711f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040711f(int param_1,int param_2)

{
  code *pcVar1;
  int in_stack_00000010;
  int *in_stack_00000014;
  int local_1460 [22];
  undefined1 local_1408 [1024];
  WCHAR local_1008 [2046];
  undefined4 uStack_c;
  
  uStack_c = 0x407131;
  FUN_00405416(param_1,param_2,0x4023e0,0,0,in_stack_00000010,3,in_stack_00000014,(short *)0x0,
               param_1,local_1008,param_1,local_1408,param_1,local_1460);
  FUN_004056cd((int)local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040716f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040716f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  BOOL BVar5;
  int extraout_EDX;
  undefined4 local_147c;
  uint local_1478;
  int local_1474;
  int local_1470;
  int local_146c;
  undefined4 local_1468;
  DWORD local_1464;
  undefined4 local_1460;
  undefined4 local_145c;
  undefined4 local_1458;
  undefined4 local_1454;
  int local_1450;
  undefined4 local_144c;
  undefined4 local_1448;
  undefined4 uStack_1444;
  undefined4 uStack_1440;
  undefined4 local_143c;
  undefined4 uStack_1438;
  undefined4 uStack_1434;
  undefined4 local_1430;
  undefined4 local_142c;
  undefined4 local_1428;
  undefined4 local_1420;
  undefined4 local_141c;
  char local_1415;
  WCHAR local_1414 [2048];
  undefined1 local_414 [1024];
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040f355;
  local_10 = ExceptionList;
  uStack_14 = 0x40718c;
  uVar4 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1415 = DAT_0041050c != (code *)0x0;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_1420 = param_1;
  local_141c = param_2;
  local_1450 = FUN_00404b51(local_1474);
  local_147c = 0;
  local_1478 = 0;
  if (*(int *)(extraout_EDX + 8) == 1) {
    local_1478 = 8;
  }
  LOCK();
  UNLOCK();
  local_146c = DAT_00410548 + 1;
  local_1468 = 0;
  DAT_00410548 = DAT_00410548 + 1;
  local_1464 = GetCurrentThreadId();
  pcVar2 = DAT_00410528;
  local_1454 = local_141c;
  local_1458 = param_3;
  local_1428 = local_1420;
  local_1460 = 0;
  local_145c = 0;
  local_142c = param_6;
  local_144c = 0;
  local_143c = 0;
  uStack_1438 = 0;
  uStack_1434 = 0;
  local_1448 = 0;
  uStack_1444 = 0;
  uStack_1440 = 0;
  if (DAT_00410528 == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00411278)(uVar4);
    local_1430 = (*pcVar2)();
  }
  pcVar2 = DAT_004104e8;
  if (DAT_004104e8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)(&local_147c);
    (*pcVar2)();
  }
  pcVar2 = DAT_00410500;
  if (DAT_00410500 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)(&local_147c,local_414,0x400);
    (*pcVar2)();
  }
  pcVar2 = DAT_004104fc;
  if (DAT_004104fc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411278)(&local_147c);
    (*pcVar2)();
  }
  pcVar2 = DAT_00410514;
  if (((DAT_00410514 != (code *)0x0) && (local_1415 == '\0')) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00411278)(&local_147c);
    (*pcVar2)();
  }
  if (-1 < local_1474) {
    FUN_00405988();
  }
  pcVar2 = DAT_004104d4;
  if (DAT_004104dc == '\0') {
    if (DAT_004104d4 == (code *)0x0) {
      BVar5 = IsDebuggerPresent();
      cVar3 = BVar5 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00411278)();
      cVar3 = (*pcVar2)();
    }
    if (cVar3 != '\0') goto LAB_0040736d;
  }
  else {
LAB_0040736d:
    if ((local_1478 & 2) == 0) {
      bVar1 = true;
      goto LAB_0040737d;
    }
  }
  bVar1 = false;
LAB_0040737d:
  pcVar2 = DAT_004104e0;
  if ((local_1415 != '\0') || (bVar1)) {
    if ((DAT_004104e0 != (code *)0x0) && (DAT_004104f0 == '\0')) {
      (*(code *)PTR_guard_check_icall_00411278)(&local_147c,local_1414,0x800);
      (*pcVar2)();
    }
    if (local_1414[0] == L'\0') {
      FUN_0040471c(local_1414,0x800,(int)&local_147c);
    }
    if (bVar1) {
      OutputDebugStringW(local_1414);
    }
  }
  else if ((DAT_004104e0 != (code *)0x0) && (DAT_004104f0 == '\0')) {
    (*(code *)PTR_guard_check_icall_00411278)(&local_147c,0,0);
    (*pcVar2)();
  }
  pcVar2 = DAT_00410508;
  if ((((local_1478 & 4) != 0) || (DAT_004104e4 != '\0')) && (DAT_00410508 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00411278)();
    (*pcVar2)();
  }
  local_8 = 0xffffffff;
  if ((local_1478 & 1) == 0) goto LAB_00407451;
  do {
    FUN_004056cd((int)&local_147c);
LAB_00407451:
    pcVar2 = DAT_0041050c;
    if (local_1415 != '\0') {
      (*(code *)PTR_guard_check_icall_00411278)(&local_147c,local_1414);
      (*pcVar2)();
    }
    FUN_0040535d();
  } while( true );
}



/* Function: FUN_00407490 */

void __fastcall
FUN_00407490(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7)

{
  FUN_00407632(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Function: FUN_004074a1 */

void __fastcall
FUN_004074a1(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            uint param_7)

{
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00404d51(param_7);
  local_8 = 0;
  FUN_00407490(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_004074e4 */

uint __fastcall
FUN_004074e4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  uint uVar1;
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00404f91(param_1,param_2,param_3,param_1,param_1,param_6);
  local_10 = uVar1;
  local_c = FUN_00404d51(uVar1);
  local_8 = 0;
  FUN_00407490(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10);
  return uVar1;
}



/* Function: FUN_00407539 */

void * __thiscall FUN_00407539(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  code *pcVar3;
  void *pvVar4;
  short *psVar5;
  uint uVar6;
  
  *(undefined4 *)((int)this + 0x14) = 0;
  psVar2 = (short *)*param_1;
  psVar5 = psVar2;
  do {
    sVar1 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar1 != 0);
  uVar6 = (int)psVar5 - (int)(psVar2 + 1) >> 1;
  if (uVar6 <= uVar6 + 1) {
    FUN_00406461(this,psVar2,uVar6 + 1,uVar6);
    return this;
  }
  FUN_004063f3(0x80070216);
  pcVar3 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar3)();
  return pvVar4;
}



/* Function: FUN_0040758c */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040758c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_004100c0 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00405416(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_0040ded0(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_004056cd((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407632 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00407632(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7)

{
  code *pcVar1;
  int local_1468;
  byte local_1464;
  undefined1 local_1410 [1024];
  WCHAR local_1010 [2050];
  uint local_c;
  
  local_c = DAT_004100c0 ^ (uint)&local_1468;
  FUN_00405416(param_1,param_2,param_3,0,0,param_6,1,param_7,(short *)0x0,param_1,local_1010,param_1
               ,local_1410,param_1,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_0040ded0(local_c ^ (uint)&local_1468);
    return;
  }
  FUN_004056cd((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004076ad */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00407735) */

int __fastcall FUN_004076ad(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  *param_1 = 0;
  local_8 = 0;
  uStack_7 = 0;
  local_14 = param_1;
  puVar2 = (undefined4 *)FUN_0040defa(0x48);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    puVar2 = FUN_0040774f(puVar2);
    local_8 = 1;
    local_18 = puVar2;
    iVar3 = FUN_004080bb(puVar2,(undefined *)*param_2,*param_3);
    if (-1 < iVar3) {
      local_8 = 3;
      pcVar1 = *(code **)*puVar2;
      (*(code *)PTR_guard_check_icall_00411278)(puVar2,&DAT_004028a8,local_14);
      iVar3 = (*pcVar1)();
    }
    FUN_00406930((int *)&local_18);
  }
  return iVar3;
}



/* Function: FUN_0040774f */

undefined4 * __fastcall FUN_0040774f(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = DAT_004105b8;
  puStack_c = &LAB_0040f3b3;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_0040105c;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar2,uVar3);
    (*pcVar1)();
  }
  *param_1 = &PTR_FUN_00401074;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  ExceptionList = local_10;
  return param_1;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall CRectTracker::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2015 Release */

void * __thiscall CRectTracker::_scalar_deleting_destructor_(CRectTracker *this,uint param_1)

{
  FUN_00408051((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return this;
}



/* Function: FUN_0040781a */

void __fastcall FUN_0040781a(int *param_1)

{
  if ((*param_1 != 0) && (*param_1 != -1)) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00407833 */

void __fastcall FUN_00407833(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0040e310(*param_1);
  }
  return;
}



/* Function: FUN_00407850 */

int __thiscall FUN_00407850(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return (int)this;
}



/* Function: FUN_0040787c */

undefined4 __thiscall FUN_0040787c(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *extraout_ECX;
  
  iVar1 = FUN_00404467(param_1,(int *)&LAB_00402bd0);
  if ((iVar1 == 0) && (iVar1 = FUN_00404467(extraout_ECX,(int *)&DAT_00402bf0), iVar1 == 0)) {
    return 0x80004002;
  }
  *param_2 = this;
  return 0;
}



/* Function: FUN_004078bc */

undefined4 * __fastcall FUN_004078bc(undefined4 *param_1)

{
  int *piVar1;
  _func_5021 *p_Var2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  HRESULT HVar6;
  LPUNKNOWN This;
  IID *riid;
  void **ppvObject;
  LPUNKNOWN local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040f3d6;
  local_10 = ExceptionList;
  uVar5 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &PTR_o__purecall_004010e8;
  piVar1 = param_1 + 3;
  local_14 = (IUnknown *)0x0;
  *piVar1 = 0;
  local_8 = 0xffffffff;
  HVar6 = CoCreateFreeThreadedMarshaler((LPUNKNOWN)0x0,&local_14);
  This = local_14;
  if (-1 < HVar6) {
    p_Var2 = local_14->lpVtbl->QueryInterface;
    local_8._0_1_ = 2;
    local_8._1_3_ = 0;
    piVar3 = (int *)*piVar1;
    if (piVar3 != (int *)0x0) {
      *piVar1 = 0;
      pcVar4 = *(code **)(*piVar3 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(piVar3,uVar5);
      (*pcVar4)();
    }
    ppvObject = (void **)(param_1 + 3);
    riid = (IID *)&DAT_00402bf0;
    local_8 = CONCAT31(local_8._1_3_,1);
    (*(code *)PTR_guard_check_icall_00411278)();
    (*p_Var2)(This,riid,ppvObject);
  }
  FUN_00406930((int *)&local_14);
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00407980 */

undefined4
FUN_00407980(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    (*(code *)PTR_guard_check_icall_00411278)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004079d0 */

undefined4
FUN_004079d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    (*(code *)PTR_guard_check_icall_00411278)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00407a20 */

undefined4
FUN_00407a20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x14);
    (*(code *)PTR_guard_check_icall_00411278)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00407a70 */

undefined4 FUN_00407a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x18);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,param_2,param_3,param_4);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00407ab0 */

undefined4 FUN_00407ab0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x1c);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00407af0 */

undefined4 FUN_00407af0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x20);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00407b25 */

undefined4 * __thiscall FUN_00407b25(void *this,undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = DAT_004105b8;
  puStack_c = &LAB_0040f3f9;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined ***)this = &PTR_FUN_004014e0;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar2,uVar3);
    (*pcVar1)();
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0x3fffffff;
  *(undefined ***)this = &PTR_FUN_00401474;
  *(undefined4 *)((int)this + 8) = 2;
  ExceptionList = local_10;
  return (undefined4 *)this;
}



/* Function: FUN_00407bb0 */

undefined4 FUN_00407bb0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)(param_1 + 0xc);
  *param_3 = 0;
  do {
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      return 0;
    }
    LOCK();
    iVar4 = *piVar1;
    if (iVar2 == iVar4) {
      *piVar1 = iVar2 + 1;
      iVar4 = iVar2;
    }
    UNLOCK();
  } while (iVar4 != iVar2);
  pcVar3 = *(code **)**(undefined4 **)(param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_00411278)(*(undefined4 **)(param_1 + 0x10),param_2,param_3);
  uVar5 = (*pcVar3)();
  pcVar3 = *(code **)(**(int **)(param_1 + 0x10) + 8);
  (*(code *)PTR_guard_check_icall_00411278)(*(int **)(param_1 + 0x10));
  (*pcVar3)();
  return uVar5;
}



/* Function: FUN_00407c20 */

undefined4 * __thiscall FUN_00407c20(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401474;
  *(undefined4 *)((int)this + 0xc) = 0xc0000001;
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407c56 */

undefined4 __thiscall FUN_00407c56(void *this,int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
                    /* WARNING: Load size is inaccurate */
  if ((*param_1 == 0) || (*param_1 != *this)) {
                    /* WARNING: Load size is inaccurate */
    WindowsDeleteString(*this);
    *(undefined4 *)this = 0;
    uVar1 = WindowsDuplicateString(*param_1,this);
  }
  return uVar1;
}



/* Function: FUN_00407c93 */

void __fastcall FUN_00407c93(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = &local_8;
  piVar1 = FUN_00408d6b(&local_c);
  iVar2 = RoGetMatchingRestrictedErrorInfo(param_1,piVar1);
  if (-1 < iVar2) {
    SetRestrictedErrorInfo(local_8);
  }
  FUN_00406930(&local_8);
  return;
}



/* Function: FUN_00407cd5 */

uint __fastcall FUN_00407cd5(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_0041052c;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f1a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int)param_1 < 0) {
    if (param_1 == 0xc0000017) {
      uVar2 = 0x8007000e;
    }
    else {
      if (DAT_0041052c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_00411278)(param_1,DAT_004100c0 ^ (uint)&stack0xfffffffc);
        uVar2 = (*pcVar1)();
        if ((uVar2 != 0) && (uVar2 != 0x13d)) {
          if (0 < (int)uVar2) {
            ExceptionList = local_10;
            return uVar2 & 0xffff | 0x80070000;
          }
          ExceptionList = local_10;
          return uVar2;
        }
      }
      uVar2 = param_1 | 0x10000000;
    }
  }
  else {
    uVar2 = 0;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_00407d68 */

void __fastcall FUN_00407d68(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f209;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004091c5(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407db4 */

void __fastcall FUN_00407db4(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f209;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040921b(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407e00 */

void __fastcall FUN_00407e00(undefined4 *param_1)

{
  *param_1 = &PTR_o__purecall_00401204;
  param_1[1] = &PTR_o__purecall_0040110c;
  param_1[2] = &PTR_o__purecall_00401154;
  param_1[3] = &PTR_o__purecall_00401198;
  param_1[4] = &PTR_o__purecall_004010e8;
  FUN_00406930(param_1 + 0xc);
  FUN_00406930(param_1 + 0xb);
  FUN_00406930(param_1 + 7);
  return;
}



/* Function: FUN_00407e50 */

undefined4 * __thiscall FUN_00407e50(void *this,byte param_1)

{
  FUN_00407e00((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407e7a */

void __fastcall FUN_00407e7a(undefined4 *param_1)

{
  *param_1 = &PTR_o__purecall_00401334;
  param_1[1] = &PTR_o__purecall_0040110c;
  param_1[2] = &PTR_o__purecall_00401154;
  param_1[3] = &PTR_o__purecall_00401198;
  param_1[4] = &PTR_o__purecall_004010e8;
  param_1[0x1c] = &PTR_o__purecall_004014a8;
  param_1[0x1d] = &PTR_o__purecall_004014c4;
  param_1[0x1e] = &PTR_o__purecall_004013bc;
  FUN_00406930(param_1 + 0x22);
  FUN_00407e00(param_1);
  return;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::UMSThreadProxy::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSThreadProxy::_scalar_deleting_destructor_
          (UMSThreadProxy *this,uint param_1)

{
  FUN_00407e7a((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return this;
}



/* Function: FUN_00407efd */

void __fastcall FUN_00407efd(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f1a0;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_FUN_004013b8;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,uVar3);
    (*pcVar2)();
    param_1[1] = 0;
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407f60 */

undefined4 * __thiscall FUN_00407f60(void *this,byte param_1)

{
  FUN_00407efd((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407f90 */

void FUN_00407f90(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  WindowsCreateString(L"Windows.ApplicationModel.Activation.CommandLineActivatedEventArgs",0x41,
                      param_2);
  return;
}



/* Function: FUN_00407fc0 */

undefined4 FUN_00407fc0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}



/* Function: FUN_00407fe0 */

void FUN_00407fe0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00408e20(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00408000 */

void FUN_00408000(int *param_1,int *param_2,int *param_3)

{
  FUN_00408f70(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00408020 */

void FUN_00408020(int *param_1)

{
  FUN_00408e80(param_1);
  return;
}



/* Function: FUN_00408040 */

void FUN_00408040(int param_1)

{
  FUN_00408f10(param_1);
  return;
}



/* Function: FUN_00408051 */

void __fastcall FUN_00408051(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  *param_1 = &PTR_FUN_00401074;
  FUN_00406930(param_1 + 0x10);
  pvVar1 = (HANDLE)param_1[0xb];
  if ((pvVar1 != (HANDLE)0x0) && (pvVar1 != (HANDLE)0xffffffff)) {
    CloseHandle(pvVar1);
  }
  WindowsDeleteString(param_1[10]);
  param_1[10] = 0;
  pvVar1 = (HANDLE)param_1[9];
  if ((pvVar1 != (HANDLE)0x0) && (pvVar1 != (HANDLE)0xffffffff)) {
    CloseHandle(pvVar1);
  }
  WindowsDeleteString(param_1[7]);
  param_1[7] = 0;
  FUN_00406930(param_1 + 6);
  param_1[2] = 0xc0000001;
  return;
}



/* Function: FUN_004080bb */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_004080bb(void *this,undefined *param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  HANDLE hObject;
  LPWSTR lpBuffer;
  void *unaff_retaddr;
  int local_3c;
  HANDLE local_38;
  int *local_34;
  code *local_30;
  undefined1 local_2c [20];
  undefined4 local_18 [4];
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 199;
  uStack_7 = 0x4080;
  local_30 = (code *)param_1;
  *(undefined1 *)((int)this + 0x44) = param_2;
  uVar6 = FUN_00407c56((void *)((int)this + 0x1c),(int *)&local_30);
  if ((int)uVar6 < 0) {
    FUN_00405876((int)unaff_retaddr,0x25,0x402b48,uVar6);
    goto LAB_0040834e;
  }
  local_38 = (HANDLE)0x0;
  local_8 = 0;
  uStack_7 = 0;
  FUN_00409188(&local_38,0);
  iVar7 = NtOpenProcessTokenEx(0xffffffff,8,0,&local_38);
  if (iVar7 < 0) {
    FUN_00407db4(unaff_retaddr);
  }
  else {
    uVar6 = UMgrQueryUserContext(local_38,(int)this + 0x10);
    if ((int)uVar6 < 0) {
      FUN_00405876((int)unaff_retaddr,0x2a,0x402b48,uVar6);
    }
    else {
      local_34 = (int *)0x0;
      local_8 = 1;
      local_18[0] = 0;
      DVar8 = WindowsCreateStringReference
                        (L"Windows.System.Internal.UserManager",0x23,local_2c,local_18);
      uVar5 = local_18[0];
      piVar1 = local_34;
      if ((int)DVar8 < 0) {
        FUN_004063f3(DVar8);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_8 = 2;
      if (local_34 != (int *)0x0) {
        local_34 = (int *)0x0;
        pcVar3 = *(code **)(*piVar1 + 8);
        (*(code *)PTR_guard_check_icall_00411278)(piVar1);
        (*pcVar3)();
      }
      local_8 = 1;
      uVar6 = RoGetActivationFactory(uVar5,&DAT_0040293c,&local_34);
      piVar1 = local_34;
      if ((int)uVar6 < 0) {
        iVar7 = 0x2d;
LAB_00408220:
        FUN_00405876((int)unaff_retaddr,iVar7,0x402b48,uVar6);
      }
      else {
        local_30 = *(code **)(*local_34 + 0x50);
        local_8 = 3;
        piVar4 = *(int **)((int)this + 0x18);
        if (piVar4 != (int *)0x0) {
          *(int *)((int)this + 0x18) = 0;
          pcVar3 = *(code **)(*piVar4 + 8);
          (*(code *)PTR_guard_check_icall_00411278)(piVar4);
          (*pcVar3)();
        }
        pcVar3 = local_30;
        local_8 = 1;
        (*(code *)PTR_guard_check_icall_00411278)
                  (piVar1,*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14),
                   (int)this + 0x18);
        uVar6 = (*pcVar3)();
        if ((int)uVar6 < 0) {
          iVar7 = 0x2e;
          goto LAB_00408220;
        }
        hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        piVar1 = (int *)((int)this + 0x2c);
        if (piVar1 == &local_3c) {
          if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
            CloseHandle(hObject);
          }
        }
        else {
          FUN_00409188(piVar1,hObject);
        }
        if ((*piVar1 == 0) || (*piVar1 == -1)) {
          iVar7 = 0x31;
LAB_00408326:
          FUN_004058c4((int)unaff_retaddr,iVar7,0x402b48);
        }
        else {
          DVar8 = GetCurrentDirectoryW(0,(LPWSTR)0x0);
          if (DVar8 == 0) {
            iVar7 = 0x35;
            goto LAB_00408326;
          }
          lpBuffer = (LPWSTR)FUN_0040ef2d(-(uint)((int)((ulonglong)DVar8 * 2 >> 0x20) != 0) |
                                          (uint)((ulonglong)DVar8 * 2));
          if (lpBuffer == (LPWSTR)0x0) {
            uVar6 = 0x8007000e;
            iVar7 = 0x38;
LAB_00408305:
            FUN_00405876((int)unaff_retaddr,iVar7,0x402b48,uVar6);
LAB_0040830e:
            if (lpBuffer != (LPWSTR)0x0) goto LAB_00408316;
          }
          else {
            local_30 = (code *)GetCurrentDirectoryW(DVar8,lpBuffer);
            if (local_30 == (code *)0x0) {
              FUN_004058c4((int)unaff_retaddr,0x3b,0x402b48);
              goto LAB_0040830e;
            }
            puVar2 = (undefined4 *)((int)this + 0x28);
            WindowsDeleteString(*puVar2);
            *puVar2 = 0;
            uVar6 = WindowsCreateString(lpBuffer,local_30,puVar2);
            if ((int)uVar6 < 0) {
              iVar7 = 0x3d;
              goto LAB_00408305;
            }
LAB_00408316:
            o_free(lpBuffer);
          }
        }
      }
      FUN_00406930((int *)&local_34);
    }
  }
  if ((local_38 != (HANDLE)0x0) && (local_38 != (HANDLE)0xffffffff)) {
    CloseHandle(local_38);
  }
LAB_0040834e:
  FUN_0040efe3();
  return;
}



/* Function: FUN_00408370 */

uint FUN_00408370(void *param_1,undefined4 param_2)

{
  uint uVar1;
  int unaff_retaddr;
  int iStackY_1c;
  
  if (*(char *)((int)param_1 + 0x44) == '\0') {
    uVar1 = FUN_00408a18(param_1,param_2);
    if (-1 < (int)uVar1) {
      return 0;
    }
    iStackY_1c = 0x4b;
  }
  else {
    uVar1 = FUN_004083ca(param_1);
    if (-1 < (int)uVar1) {
      return 0;
    }
    iStackY_1c = 0x47;
  }
  FUN_00405876(unaff_retaddr,iStackY_1c,0x402b48,uVar1);
  return uVar1;
}



/* Function: FUN_004083ca */

void __fastcall FUN_004083ca(void *param_1)

{
  int *piVar1;
  PSID pSid;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int iVar8;
  BOOL BVar9;
  HANDLE hObject;
  void *pvVar10;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  void *pvVar11;
  void *extraout_ECX_01;
  int unaff_EBX;
  int unaff_EBP;
  code *pcVar12;
  undefined4 unaff_retaddr;
  int iVar13;
  
  __EH_prolog3_GS_align(param_1,0x160,8,unaff_retaddr);
  *(int *)(unaff_EBP + -0x14c) = extraout_ECX;
  piVar1 = (int *)(extraout_ECX + 0x40);
  *(undefined4 *)(unaff_EBP + -0x144) = *(undefined4 *)(unaff_EBX + 8);
  *(undefined4 *)(unaff_EBP + -0x148) = *(undefined4 *)(extraout_ECX + 0x28);
  *(int **)(unaff_EBP + -0x154) = piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar4 = (int *)*piVar1;
  if (piVar4 != (int *)0x0) {
    *piVar1 = 0;
    pcVar12 = *(code **)(*piVar4 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar4);
    (*pcVar12)();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = FUN_0040977d(piVar1);
  if ((int)uVar3 < 0) {
    FUN_00405876(*(int *)(unaff_EBX + 4),0x53,0x402b48,uVar3);
    goto LAB_004089ec;
  }
  *(undefined4 *)(unaff_EBP + -0x168) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar5 = (undefined4 *)*piVar1;
  pcVar12 = *(code **)*puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  (*(code *)PTR_guard_check_icall_00411278)(puVar5,&DAT_00402520,unaff_EBP + -0x168);
  uVar3 = (*pcVar12)();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((int)uVar3 < 0) {
    FUN_00405876(*(int *)(unaff_EBX + 4),0x56,0x402b48,uVar3);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x164) = 0;
    *(undefined4 *)(unaff_EBP + -0x150) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piVar1 = *(int **)(unaff_EBP + -0x168);
    pcVar12 = *(code **)(*piVar1 + 0x18);
    piVar4 = FUN_00409127((int *)(unaff_EBP + -0x164));
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,piVar4);
    uVar3 = (*pcVar12)();
    if ((int)uVar3 < 0) {
      iVar13 = 0x59;
LAB_0040854a:
      FUN_00405876(*(int *)(unaff_EBX + 4),iVar13,0x402b48,uVar3);
    }
    else {
      puVar5 = *(undefined4 **)(unaff_EBP + -0x164);
      pcVar12 = *(code **)*puVar5;
      *(code **)(unaff_EBP + -0x144) = pcVar12;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piVar1 = *(int **)(unaff_EBP + -0x150);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x150) = 0;
        pcVar12 = *(code **)(*piVar1 + 8);
        (*(code *)PTR_guard_check_icall_00411278)(piVar1);
        (*pcVar12)();
        pcVar12 = *(code **)(unaff_EBP + -0x144);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      (*(code *)PTR_guard_check_icall_00411278)(puVar5,&DAT_004026fc,unaff_EBP + -0x150);
      uVar3 = (*pcVar12)();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if ((int)uVar3 < 0) {
        iVar13 = 0x5a;
        goto LAB_0040854a;
      }
      *(undefined4 *)(unaff_EBP + -300) = 0;
      *(undefined4 *)(unaff_EBP + -0x138) = *(undefined4 *)(unaff_EBP + -0x14c);
      *(code **)(unaff_EBP + -0x130) = FUN_00408d00;
      puVar5 = (undefined4 *)FUN_0040defa(0x38);
      *(undefined4 **)(unaff_EBP + -0x144) = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        FUN_00409bf4(puVar5);
        puVar5 = *(undefined4 **)(unaff_EBP + -0x144);
        *puVar5 = &PTR_FUN_00401430;
        puVar5[10] = *(undefined4 *)(unaff_EBP + -0x138);
        puVar5[1] = &PTR_FUN_00401230;
        puVar5[0xb] = *(undefined4 *)(unaff_EBP + -0x134);
        puVar5[0xc] = *(undefined4 *)(unaff_EBP + -0x130);
        puVar5[0xd] = *(undefined4 *)(unaff_EBP + -300);
      }
      *(undefined4 **)(unaff_EBP + -0x16c) = puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      pcVar12 = *(code **)(**(int **)(unaff_EBP + -0x150) + 0x18);
      (*(code *)PTR_guard_check_icall_00411278)
                (*(int **)(unaff_EBP + -0x150),puVar5,*(int *)(unaff_EBP + -0x14c) + 0x38);
      uVar3 = (*pcVar12)();
      if ((int)uVar3 < 0) {
        FUN_00405876(*(int *)(unaff_EBX + 4),0x5d,0x402b48,uVar3);
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x160) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        *(undefined4 *)(unaff_EBP + -300) = 0;
        DVar6 = WindowsCreateStringReference
                          (L"Windows.ApplicationModel.Activation.Private.ApplicationActivationProperties"
                           ,0x4b,unaff_EBP + -0x140,unaff_EBP + -300);
        if ((int)DVar6 < 0) {
LAB_004089f7:
          FUN_004063f3(DVar6);
          pvVar11 = extraout_ECX_01;
LAB_004089fe:
          FUN_00405994(*(undefined4 *)(unaff_EBX + 4),0x95,
                       "onecoreuap\\base\\appmodel\\systemuwplauncher\\activationhelper\\activationhelper.cpp"
                       ,pvVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar3 = FUN_0040935f(*(void **)(unaff_EBP + -300),(int *)(unaff_EBP + -0x160));
        if ((int)uVar3 < 0) {
          FUN_00405876(*(int *)(unaff_EBX + 4),0x61,0x402b48,uVar3);
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x15c) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          *(undefined4 *)(unaff_EBP + -300) = 0;
          DVar6 = WindowsCreateStringReference
                            (L"Windows.ApplicationModel.Activation.Private.ApplicationActivation",
                             0x41,unaff_EBP + -0x140,unaff_EBP + -300);
          if ((int)DVar6 < 0) goto LAB_004089f7;
          uVar3 = FUN_00409432(*(void **)(unaff_EBP + -300),(int *)(unaff_EBP + -0x15c));
          if ((int)uVar3 < 0) {
            iVar13 = 0x65;
LAB_00408774:
            FUN_00405876(*(int *)(unaff_EBX + 4),iVar13,0x402b48,uVar3);
          }
          else {
            cVar2 = FUN_0040eee3((uint3)extraout_ECX_00);
            if (cVar2 != '\0') {
              memset((void *)(unaff_EBP + -0xa0),0,0x82);
              *(undefined4 *)(unaff_EBP + -0x148) = 0x41;
              memset((void *)(unaff_EBP + -0x128),0,0x84);
              *(undefined4 *)(unaff_EBP + -0x144) = 0x42;
              iVar13 = *(int *)(unaff_EBP + -0x14c);
              uVar7 = WindowsGetStringRawBuffer(*(undefined4 *)(iVar13 + 0x1c),0);
              iVar8 = ParseApplicationUserModelId
                                (uVar7,unaff_EBP + -0x148,unaff_EBP + -0xa0,unaff_EBP + -0x144,
                                 unaff_EBP + -0x128);
              if (iVar8 != 0) {
                FUN_00407d68(*(void **)(unaff_EBX + 4));
                goto LAB_004089a8;
              }
              uVar7 = WindowsGetStringRawBuffer(*(undefined4 *)(iVar13 + 0x28),0);
              uVar3 = GrantWorkingDirectoryAccess_FullTrustCaller_ForPackage
                                (unaff_EBP + -0xa0,uVar7);
              if ((int)uVar3 < 0) {
                iVar13 = 0x73;
                goto LAB_00408774;
              }
            }
            *(undefined4 *)(unaff_EBP + -0x158) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            piVar1 = *(int **)(unaff_EBP + -0x15c);
            pcVar12 = *(code **)(*piVar1 + 0x30);
            *(int *)(unaff_EBP + -0x144) = unaff_EBP + -0x158;
            piVar4 = FUN_00408d6b((undefined4 *)(unaff_EBP + -0x144));
            *(undefined4 *)(unaff_EBP + -300) = 0;
            *(int **)(unaff_EBP + -0x144) = piVar4;
            *(undefined4 *)(unaff_EBP + -0x148) = *(undefined4 *)(unaff_EBP + -0x160);
            *(undefined4 *)(unaff_EBP + -0x154) = **(undefined4 **)(unaff_EBP + -0x154);
            DVar6 = WindowsCreateStringReference
                              (L"Windows.CommandLineLaunch",0x19,unaff_EBP + -0x140,unaff_EBP + -300
                              );
            if ((int)DVar6 < 0) goto LAB_004089f7;
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            (*(code *)PTR_guard_check_icall_00411278)
                      (piVar1,*(undefined4 *)(*(int *)(unaff_EBP + -0x14c) + 0x18),
                       *(undefined4 *)(*(int *)(unaff_EBP + -0x14c) + 0x1c),
                       *(undefined4 *)(unaff_EBP + -300),*(undefined4 *)(unaff_EBP + -0x154),
                       *(undefined4 *)(unaff_EBP + -0x148),*(undefined4 *)(unaff_EBP + -0x144));
            uVar3 = (*pcVar12)();
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            if ((int)uVar3 < 0) {
              iVar13 = 0x7e;
LAB_0040889c:
              FUN_00405876(*(int *)(unaff_EBX + 4),iVar13,0x402b48,uVar3);
            }
            else {
              pcVar12 = *(code **)(**(int **)(unaff_EBP + -0x150) + 0x20);
              (*(code *)PTR_guard_check_icall_00411278)(*(int **)(unaff_EBP + -0x150));
              uVar3 = (*pcVar12)();
              if ((int)uVar3 < 0) {
                iVar13 = 0x80;
                goto LAB_0040889c;
              }
              pcVar12 = *(code **)(**(int **)(unaff_EBP + -0x158) + 0x18);
              iVar13 = *(int *)(unaff_EBP + -0x14c) + 0x20;
              *(int *)(unaff_EBP + -0x144) = iVar13;
              (*(code *)PTR_guard_check_icall_00411278)(*(int **)(unaff_EBP + -0x158),iVar13);
              uVar3 = (*pcVar12)();
              if ((int)uVar3 < 0) {
                iVar13 = 0x82;
                goto LAB_0040889c;
              }
              *(undefined4 *)(unaff_EBP + -0x148) = 0;
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              uVar3 = FUN_004094a5((int *)(unaff_EBP + -0x148));
              if ((int)uVar3 < 0) {
                iVar13 = 0x86;
LAB_0040891d:
                FUN_00405876(*(int *)(unaff_EBX + 4),iVar13,0x402b48,uVar3);
                puVar5 = *(undefined4 **)(unaff_EBP + -0x148);
              }
              else {
                iVar13 = *(int *)(unaff_EBP + -0x14c);
                puVar5 = *(undefined4 **)(unaff_EBP + -0x148);
                pSid = (PSID)*puVar5;
                *(int *)(unaff_EBP + -0x154) = iVar13 + 0x24;
                BVar9 = IsWellKnownSid(pSid,WinBuiltinCryptoOperatorsSid|WinAccountCertAdminsSid);
                if (BVar9 == 0) {
                  hObject = OpenProcess(0x101000,0,*(DWORD *)(iVar13 + 0x20));
                  if ((void *)(iVar13 + 0x24) == (void *)(unaff_EBP + -0x170)) {
                    if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
                      CloseHandle(hObject);
                    }
                  }
                  else {
                    FUN_00409188((void *)(iVar13 + 0x24),hObject);
                  }
                  if ((*(int *)(iVar13 + 0x24) == 0) || (*(int *)(iVar13 + 0x24) == -1)) {
                    pvVar10 = (void *)GetLastError();
                    pvVar11 = (void *)((uint)pvVar10 & 0xffff | 0x80070000);
                    if ((int)pvVar10 < 1) {
                      pvVar11 = pvVar10;
                    }
                    if (pvVar11 != (void *)0x80070057) goto LAB_004089fe;
                  }
                }
                else {
                  pvVar11 = *(void **)(unaff_EBP + -0x154);
                  FUN_00409188(pvVar11,0);
                  uVar3 = UMgrOpenProcessHandleForAccess
                                    (0x101000,**(undefined4 **)(unaff_EBP + -0x144),pvVar11);
                  if ((int)uVar3 < 0) {
                    iVar13 = 0x8a;
                    goto LAB_0040891d;
                  }
                }
              }
              if (puVar5 != (undefined4 *)0x0) {
                o_free(puVar5);
              }
            }
            FUN_00406930((int *)(unaff_EBP + -0x158));
          }
LAB_004089a8:
          FUN_00406930((int *)(unaff_EBP + -0x15c));
        }
        FUN_00406930((int *)(unaff_EBP + -0x160));
      }
      FUN_00406930((int *)(unaff_EBP + -0x16c));
    }
    FUN_00406930((int *)(unaff_EBP + -0x150));
    FUN_00406930((int *)(unaff_EBP + -0x164));
  }
  FUN_00406930((int *)(unaff_EBP + -0x168));
LAB_004089ec:
  FUN_0040f06d(*(uint *)(unaff_EBP + -0x14));
  return;
}



/* Function: FUN_00408a18 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00408a18(void *this,undefined4 param_1)

{
  code *pcVar1;
  DWORD DVar2;
  uint uVar3;
  int *piVar4;
  BOOL BVar5;
  HANDLE hObject;
  void *pvVar6;
  void *pvVar7;
  void *extraout_ECX;
  int iVar8;
  DWORD *pDVar9;
  int **ppiVar10;
  int *piVar11;
  int unaff_retaddr;
  int local_48;
  void *local_44;
  undefined4 local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int **local_30;
  undefined1 local_2c [20];
  void *local_18 [4];
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_40 = param_1;
  local_3c = 0;
  local_8 = 0;
  uStack_7 = 0;
  local_18[0] = (void *)0x0;
  local_44 = this;
  DVar2 = WindowsCreateStringReference
                    (L"Windows.ApplicationModel.Activation.Private.ApplicationActivationProperties",
                     0x4b,local_2c,local_18);
  if ((int)DVar2 < 0) {
LAB_00408c37:
    FUN_004063f3(DVar2);
    pvVar7 = extraout_ECX;
LAB_00408c3e:
    FUN_00405994(unaff_retaddr,0xc2,
                 "onecoreuap\\base\\appmodel\\systemuwplauncher\\activationhelper\\activationhelper.cpp"
                 ,pvVar7);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = FUN_0040935f(local_18[0],&local_3c);
  if ((int)uVar3 < 0) {
    FUN_00405876(unaff_retaddr,0xa1,0x402b48,uVar3);
    goto LAB_00408c25;
  }
  local_38 = (int *)0x0;
  local_8 = 1;
  local_18[0] = (void *)0x0;
  DVar2 = WindowsCreateStringReference
                    (L"Windows.ApplicationModel.Activation.Private.ApplicationActivation",0x41,
                     local_2c,local_18);
  if ((int)DVar2 < 0) goto LAB_00408c37;
  uVar3 = FUN_00409432(local_18[0],(int *)&local_38);
  piVar11 = local_38;
  if ((int)uVar3 < 0) {
    FUN_00405876(unaff_retaddr,0xa5,0x402b48,uVar3);
  }
  else {
    local_34 = (int *)0x0;
    local_8 = 2;
    pcVar1 = *(code **)(*local_38 + 0x2c);
    local_30 = &local_34;
    piVar4 = FUN_00408d6b(&local_30);
    (*(code *)PTR_guard_check_icall_00411278)
              (piVar11,*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),local_40,
               local_3c,piVar4);
    uVar3 = (*pcVar1)();
    if ((int)uVar3 < 0) {
      iVar8 = 0xad;
LAB_00408b36:
      FUN_00405876(unaff_retaddr,iVar8,0x402b48,uVar3);
    }
    else {
      pDVar9 = (DWORD *)((int)this + 0x20);
      pcVar1 = *(code **)(*local_34 + 0x18);
      (*(code *)PTR_guard_check_icall_00411278)(local_34,pDVar9);
      uVar3 = (*pcVar1)();
      if ((int)uVar3 < 0) {
        iVar8 = 0xaf;
        goto LAB_00408b36;
      }
      local_30 = (int **)0x0;
      local_8 = 3;
      uVar3 = FUN_004094a5((int *)&local_30);
      ppiVar10 = local_30;
      if ((int)uVar3 < 0) {
        iVar8 = 0xb3;
LAB_00408b9f:
        FUN_00405876(unaff_retaddr,iVar8,0x402b48,uVar3);
        ppiVar10 = local_30;
      }
      else {
        piVar11 = (int *)((int)local_44 + 0x24);
        BVar5 = IsWellKnownSid(*local_30,WinBuiltinCryptoOperatorsSid|WinAccountCertAdminsSid);
        if (BVar5 == 0) {
          hObject = OpenProcess(0x101000,0,*pDVar9);
          if (piVar11 == &local_48) {
            if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
              CloseHandle(hObject);
            }
          }
          else {
            FUN_00409188(piVar11,hObject);
          }
          if ((*piVar11 == 0) || (*piVar11 == -1)) {
            pvVar6 = (void *)GetLastError();
            pvVar7 = (void *)((uint)pvVar6 & 0xffff | 0x80070000);
            if ((int)pvVar6 < 1) {
              pvVar7 = pvVar6;
            }
            if (pvVar7 != (void *)0x80070057) goto LAB_00408c3e;
          }
        }
        else {
          FUN_00409188(piVar11,0);
          uVar3 = UMgrOpenProcessHandleForAccess(0x101000,*pDVar9,piVar11);
          if ((int)uVar3 < 0) {
            iVar8 = 0xb7;
            goto LAB_00408b9f;
          }
        }
      }
      if (ppiVar10 != (int **)0x0) {
        o_free(ppiVar10);
      }
    }
    FUN_00406930((int *)&local_34);
  }
  FUN_00406930((int *)&local_38);
LAB_00408c25:
  FUN_00406930(&local_3c);
  FUN_0040efe3();
  return;
}



/* Function: FUN_00408c60 */

undefined4 FUN_00408c60(int param_1,DWORD *param_2)

{
  DWORD DVar1;
  HANDLE local_10;
  int local_c;
  DWORD local_8;
  
  local_c = *(int *)(param_1 + 0x24);
  if ((local_c == 0) || (local_c == -1)) {
    if (*(char *)(param_1 + 0x44) == '\0') {
      *param_2 = 0;
      return 0;
    }
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x2c),0);
    if (DVar1 != 0) {
      DVar1 = 0x80004005;
      goto LAB_00408ce0;
    }
  }
  else {
    local_10 = *(HANDLE *)(param_1 + 0x2c);
    DVar1 = WaitForMultipleObjects(2,&local_10,0,0xffffffff);
    if (DVar1 != 0) {
      if (*(char *)(param_1 + 0x44) != '\0') {
        *param_2 = 0x80004005;
        return 0;
      }
      local_8 = 0;
      GetExitCodeProcess(*(HANDLE *)(param_1 + 0x24),&local_8);
      *param_2 = local_8;
      return 0;
    }
  }
  DVar1 = *(DWORD *)(param_1 + 0x30);
LAB_00408ce0:
  *param_2 = DVar1;
  return 0;
}



/* Function: FUN_00408d00 */

uint __thiscall FUN_00408d00(void *this,undefined4 param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int unaff_retaddr;
  
  pcVar1 = *(code **)(*param_2 + 0x18);
  (*(code *)PTR_guard_check_icall_00411278)(param_2,(int)this + 0x30);
  uVar2 = (*pcVar1)();
  if ((int)uVar2 < 0) {
    FUN_00405876(unaff_retaddr,0x101,0x402b48,uVar2);
  }
  else {
    SetEvent(*(HANDLE *)((int)this + 0x2c));
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00408d54 */

void __fastcall FUN_00408d54(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    o_free(iVar1);
  }
  return;
}



/* Function: FUN_00408d6b */

int * __fastcall FUN_00408d6b(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040f3f9;
  local_10 = ExceptionList;
  uVar4 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  local_8 = 0;
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    *piVar1 = 0;
    pcVar3 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar2,uVar4);
    (*pcVar3)();
  }
  ExceptionList = local_10;
  return piVar1;
}



/* Function: FUN_00408dd0 */

undefined4 FUN_00408dd0(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00408df0 */

undefined4 FUN_00408df0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00408e20 */

undefined4 FUN_00408e20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  int local_8;
  
  uVar2 = 0;
  *param_3 = 0;
  *param_2 = 0;
  pvVar1 = CoTaskMemAlloc(0x60);
  if (pvVar1 == (LPVOID)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    local_8 = 0;
    FUN_00409573(&local_8,(int)pvVar1);
    *param_2 = 6;
    *param_3 = pvVar1;
  }
  return uVar2;
}



/* Function: FUN_00408e80 */

int FUN_00408e80(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  piVar1 = param_1 + 0x2f;
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      iVar5 = FUN_00406437((int *)(iVar3 * 2 + 0xc));
      break;
    }
    if (iVar3 == 0x7fffffff) {
      return 0x7ffffffe;
    }
    iVar5 = iVar3 + -1;
    LOCK();
    iVar4 = *piVar1;
    if (iVar3 == iVar4) {
      *piVar1 = iVar5;
      iVar4 = iVar3;
    }
    UNLOCK();
    bVar6 = iVar4 != iVar3;
    iVar3 = iVar4;
  } while (bVar6);
  if (iVar5 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x24);
      (*(code *)PTR_guard_check_icall_00411278)(1);
      (*pcVar2)();
    }
    if (DAT_004105b8 != (int *)0x0) {
      pcVar2 = *(code **)(*DAT_004105b8 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(DAT_004105b8);
      (*pcVar2)();
    }
  }
  return iVar5;
}



/* Function: FUN_00408f10 */

int FUN_00408f10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  piVar4 = (int *)(param_1 + 0xbc);
  iVar3 = *piVar4;
  while( true ) {
    if (iVar3 < 0) {
      iVar3 = FUN_00406407((int *)(iVar3 * 2 + 0xc));
      return iVar3;
    }
    if (iVar3 == 0x7fffffff) break;
    iVar1 = iVar3 + 1;
    LOCK();
    iVar2 = *piVar4;
    if (iVar3 == iVar2) {
      *piVar4 = iVar1;
      iVar2 = iVar3;
    }
    UNLOCK();
    bVar5 = iVar2 == iVar3;
    iVar3 = iVar2;
    if (bVar5) {
      return iVar1;
    }
  }
  return 0x7fffffff;
}



/* Function: FUN_00408f70 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_00408f70(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar4 = auStack_20;
  iVar5 = 0;
  local_8 = 0;
  *param_3 = 0;
  iVar2 = FUN_00404467(param_2,(int *)&DAT_004027c4);
  if (iVar2 == 0) {
    iVar2 = FUN_00404467(extraout_ECX,&DAT_00402c10);
    if (iVar2 != 0) goto LAB_00408fbd;
    iVar5 = FUN_004095f8(param_1,extraout_ECX_00,param_3);
    if (iVar5 < 0) goto LAB_00408fd2;
    iVar2 = *(int *)*param_3;
  }
  else {
LAB_00408fbd:
    *param_3 = (int)param_1;
    iVar2 = *param_1;
  }
  pcVar1 = *(code **)(iVar2 + 4);
  puVar3 = &stack0xffffffd8;
  (*(code *)PTR_guard_check_icall_00411278)();
  puVar4 = puVar3 + -4;
  *(undefined4 *)(puVar3 + -4) = 0x408fd2;
  (*pcVar1)();
LAB_00408fd2:
  *(undefined4 *)(puVar4 + -4) = 0x408fd9;
  return iVar5;
}



/* Function: FUN_00408ff0 */

int FUN_00408ff0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00406437(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_00411278)(1);
      (*pcVar1)();
    }
    if (DAT_004105b8 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_004105b8 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(DAT_004105b8);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00409050 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00409050(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar3 = (undefined4 *)auStack_20;
  uVar5 = 0;
  local_8 = 0;
  *param_3 = 0;
  piStack_24 = (int *)0x409073;
  iVar1 = FUN_00404467(param_2,(int *)&DAT_004027c4);
  if (iVar1 == 0) {
    piStack_24 = (int *)0x409081;
    iVar1 = FUN_00404467(extraout_ECX,(int *)&DAT_00402be0);
    if (iVar1 == 0) {
      uVar5 = 0x80004002;
      goto LAB_004090ae;
    }
    *param_3 = param_1;
    pcVar4 = *(code **)(*param_1 + 4);
  }
  else {
    *param_3 = param_1;
    pcVar4 = *(code **)(*param_1 + 4);
  }
  piStack_24 = param_1;
  puVar2 = &uStack_28;
  uStack_28 = 0x4090ac;
  (*(code *)PTR_guard_check_icall_00411278)();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x4090ae;
  (*pcVar4)();
LAB_004090ae:
  *(undefined4 *)((int)puVar3 + -4) = 0x4090b5;
  return uVar5;
}



/* Function: FUN_004090c3 */

undefined4 * __fastcall FUN_004090c3(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* Function: FUN_004090cf */

void __fastcall FUN_004090cf(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f22c;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00409127 */

int * __fastcall FUN_00409127(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040f3f9;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00409188 */

void __thiscall FUN_00409188(void *this,undefined4 param_1)

{
  HANDLE hObject;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  hObject = *this;
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    dwErrCode = GetLastError();
    CloseHandle(hObject);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004091c5 */

uint __thiscall FUN_004091c5(void *this)

{
  undefined4 extraout_ECX;
  uint uVar1;
  int in_stack_00000010;
  uint in_stack_00000014;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = in_stack_00000014 & 0xffff | 0x80070000;
  if ((int)in_stack_00000014 < 1) {
    uVar1 = in_stack_00000014;
  }
  local_10 = uVar1;
  local_c = FUN_00404d51(uVar1);
  local_8 = 0;
  FUN_00407490((int)this,0x72,0x402b48,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_10)
  ;
  return uVar1;
}



/* Function: FUN_0040921b */

uint __thiscall FUN_0040921b(void *this)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int in_stack_00000010;
  uint in_stack_00000014;
  uint local_10 [2];
  undefined4 local_8;
  
  uVar1 = FUN_00407cd5(in_stack_00000014);
  local_8 = 1;
  local_10[0] = uVar1;
  FUN_00407490((int)this,0x28,0x402b48,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)local_10);
  return uVar1;
}



/* Function: FUN_00409270 */

undefined4 FUN_00409270(int param_1,int *param_2)

{
  uint *puVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = (uint *)(param_1 + 0x14);
  uVar5 = *puVar1;
  *param_2 = 0;
  if ((int)uVar5 < 0) {
LAB_00409291:
    FUN_00406407((int *)(uVar5 * 2 + 8));
    *param_2 = uVar5 * 2;
  }
  else {
    this = (void *)FUN_0040defa(0x14);
    if ((this == (void *)0x0) ||
       (puVar2 = FUN_00407b25(this,param_1 + -0xa8), puVar2 == (undefined4 *)0x0)) {
      return 0x8007000e;
    }
    uVar3 = (int)puVar2 >> 1 | 0x80000000;
    puVar2[3] = uVar5;
    LOCK();
    uVar4 = *puVar1;
    if (uVar5 == uVar4) {
      *puVar1 = uVar3;
      uVar4 = uVar5;
    }
    UNLOCK();
    bVar6 = uVar4 != uVar5;
    uVar5 = uVar4;
    if (bVar6) {
      do {
        if ((int)uVar5 < 0) {
          *puVar2 = &PTR_FUN_00401474;
          puVar2[3] = 0xc0000001;
          puVar2[2] = 0xc0000001;
          FUN_0040e310(puVar2);
          goto LAB_00409291;
        }
        puVar2[3] = uVar5;
        LOCK();
        uVar4 = *puVar1;
        if (uVar5 == uVar4) {
          *puVar1 = uVar3;
          uVar4 = uVar5;
        }
        UNLOCK();
        bVar6 = uVar4 != uVar5;
        uVar5 = uVar4;
      } while (bVar6);
    }
    *param_2 = (int)puVar2;
  }
  return 0;
}



/* Function: FUN_0040933a */

void __fastcall FUN_0040933a(undefined4 *param_1)

{
  if ((int)param_1[0x2f] < 0) {
    FUN_00408ff0((int *)(param_1[0x2f] * 2));
  }
  FUN_00407e7a(param_1);
  return;
}



/* Function: FUN_0040935f */

int __thiscall FUN_0040935f(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040f548;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = 0;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  local_14 = (int *)this;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,uVar3);
    (*pcVar2)();
  }
  local_8 = 0xffffffff;
  *param_1 = 0;
  iVar4 = RoActivateInstance(local_14,&local_14);
  if (-1 < iVar4) {
    do {
      if ((&DAT_00402530)[iVar5] != (&DAT_00402c10)[iVar5]) {
        pcVar2 = *(code **)*local_14;
        (*(code *)PTR_guard_check_icall_00411278)(local_14,&DAT_00402530,param_1);
        iVar5 = (*pcVar2)();
        pcVar2 = *(code **)(*local_14 + 8);
        (*(code *)PTR_guard_check_icall_00411278)(local_14);
        (*pcVar2)();
        ExceptionList = local_10;
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    *param_1 = (int)local_14;
  }
  ExceptionList = local_10;
  return iVar4;
}



/* Function: FUN_00409432 */

void __thiscall FUN_00409432(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040f3b3;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,uVar3);
    (*pcVar2)();
  }
  RoGetActivationFactory(this,&DAT_004028b8,param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004094a5 */

undefined4 __fastcall FUN_004094a5(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  BOOL BVar3;
  DWORD DVar4;
  LPVOID TokenInformation;
  undefined4 uVar5;
  int unaff_retaddr;
  int *local_8;
  
  uVar5 = 0;
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    local_8 = param_1;
    o_free(iVar1);
  }
  local_8 = (int *)0x0;
  BVar3 = GetTokenInformation((HANDLE)0xfffffffa,TokenUser,(LPVOID)0x0,0,(PDWORD)&local_8);
  if ((BVar3 == 0) && (DVar4 = GetLastError(), DVar4 == 0x7a)) {
    TokenInformation = (LPVOID)FUN_0040defa((int)local_8);
    if (TokenInformation == (LPVOID)0x0) {
      uVar5 = 0x8007000e;
      FUN_00405876(unaff_retaddr,0x119,0x402b08,0x8007000e);
    }
    else {
      BVar3 = GetTokenInformation((HANDLE)0xfffffffa,TokenUser,TokenInformation,(DWORD)local_8,
                                  (PDWORD)&local_8);
      if (BVar3 == 0) {
        uVar5 = FUN_004058c4(unaff_retaddr,0x11a,0x402b08);
      }
      else {
        pvVar2 = (LPVOID)*param_1;
        *param_1 = (int)TokenInformation;
        TokenInformation = pvVar2;
      }
    }
    if (TokenInformation != (LPVOID)0x0) {
      o_free(TokenInformation);
    }
  }
  else {
    uVar5 = FUN_004058c4(unaff_retaddr,0x117,0x402b08);
  }
  return uVar5;
}



/* Function: FUN_00409573 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409573(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_1;
  puVar2 = (undefined4 *)(iVar1 * 0x10 + param_2);
  *puVar2 = DAT_004028e8;
  puVar2[1] = DAT_004028ec;
  puVar2[2] = DAT_004028f0;
  puVar2[3] = DAT_004028f4;
  puVar2 = (undefined4 *)((iVar1 + 1) * 0x10 + param_2);
  *puVar2 = DAT_00402a6c;
  puVar2[1] = DAT_00402a70;
  puVar2[2] = DAT_00402a74;
  puVar2[3] = DAT_00402a78;
  puVar2 = (undefined4 *)((iVar1 + 2) * 0x10 + param_2);
  *puVar2 = DAT_00402af8;
  puVar2[1] = DAT_00402afc;
  puVar2[2] = DAT_00402b00;
  puVar2[3] = _DAT_00402b04;
  puVar2 = (undefined4 *)((iVar1 + 3) * 0x10 + param_2);
  *puVar2 = DAT_004025d8;
  puVar2[1] = DAT_004025dc;
  puVar2[2] = DAT_004025e0;
  puVar2[3] = DAT_004025e4;
  puVar2 = (undefined4 *)((iVar1 + 4) * 0x10 + param_2);
  *puVar2 = DAT_00402c30;
  puVar2[1] = DAT_00402c34;
  puVar2[2] = DAT_00402c38;
  puVar2[3] = DAT_00402c3c;
  puVar2 = (undefined4 *)((iVar1 + 5) * 0x10 + param_2);
  *param_1 = iVar1 + 6;
  *puVar2 = DAT_00402520;
  puVar2[1] = DAT_00402524;
  puVar2[2] = DAT_00402528;
  puVar2[3] = DAT_0040252c;
  return;
}



/* Function: FUN_004095f8 */

int __thiscall FUN_004095f8(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  bool bVar2;
  
  iVar1 = FUN_00404467(param_1,&DAT_004028e8);
  if (iVar1 == 0) {
    iVar1 = FUN_00409718((void *)((int)this + 4),extraout_ECX,param_2);
    bVar2 = iVar1 == -0x7fffbffe;
    if (bVar2) {
      iVar1 = FUN_004096bd((void *)((int)this + 0x70),param_1,param_2);
      bVar2 = iVar1 == -0x7fffbffe;
    }
    if (bVar2) {
      iVar1 = FUN_00409662((void *)((int)this + 0xa8),param_1,param_2);
    }
  }
  else {
    *param_2 = (int)this;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_00409662 */

undefined4 __thiscall FUN_00409662(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  void *pvVar2;
  
  iVar1 = FUN_00404467(param_1,&DAT_00402c30);
  pvVar2 = this;
  if (iVar1 == 0) {
    pvVar2 = (void *)((int)this + 4);
    iVar1 = FUN_00404467(extraout_ECX,&DAT_00402520);
    if (iVar1 == 0) {
      iVar1 = FUN_00404467(extraout_ECX_00,(int *)&DAT_00402c20);
      if (iVar1 != 0) {
        *param_2 = (int)this + 8;
        return 0;
      }
      return 0x80004002;
    }
  }
  *param_2 = (int)pvVar2;
  return 0;
}



/* Function: FUN_004096bd */

undefined4 __thiscall FUN_004096bd(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  void *pvVar2;
  
  iVar1 = FUN_00404467(param_1,&DAT_00402af8);
  pvVar2 = this;
  if (iVar1 == 0) {
    pvVar2 = (void *)((int)this + 4);
    iVar1 = FUN_00404467(extraout_ECX,&DAT_004025d8);
    if (iVar1 == 0) {
      iVar1 = FUN_00404467(extraout_ECX_00,(int *)&DAT_004028c8);
      if (iVar1 != 0) {
        *param_2 = (int)this + 8;
        return 0;
      }
      return 0x80004002;
    }
  }
  *param_2 = (int)pvVar2;
  return 0;
}



/* Function: FUN_00409718 */

int __thiscall FUN_00409718(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  void *pvVar2;
  
  iVar1 = FUN_00404467(param_1,&DAT_00402a6c);
  pvVar2 = this;
  if (iVar1 == 0) {
    pvVar2 = (void *)((int)this + 4);
    iVar1 = FUN_00404467(extraout_ECX,(int *)&DAT_0040270c);
    if (iVar1 == 0) {
      pvVar2 = (void *)((int)this + 8);
      iVar1 = FUN_00404467(extraout_ECX_00,(int *)&DAT_00402a8c);
      if (iVar1 == 0) {
        iVar1 = FUN_0040787c((void *)((int)this + 0xc),extraout_ECX_01,param_2);
        if (iVar1 != -0x7fffbffe) {
          return iVar1;
        }
        return -0x7fffbffe;
      }
    }
  }
  *param_2 = (int)pvVar2;
  return 0;
}



/* Function: FUN_0040977d */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_0040977d(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x409789;
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_0040defa(0xd0);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    puVar2 = FUN_0040980b(puVar2);
    local_8 = 0xffffffff;
    local_14[0] = puVar2;
    uVar3 = FUN_0040c377(puVar2);
    if (-1 < (int)uVar3) {
      local_8 = 1;
      pcVar1 = *(code **)*puVar2;
      (*(code *)PTR_guard_check_icall_00411278)(puVar2,&DAT_004028e8,param_1);
      uVar3 = (*pcVar1)();
    }
    FUN_00406930((int *)local_14);
  }
  return uVar3;
}



/* Function: FUN_0040980b */

undefined4 * __fastcall FUN_0040980b(undefined4 *param_1)

{
  FUN_004098f6(param_1);
  param_1[0x30] = &PTR_FUN_004013b8;
  param_1[0x31] = (IUnknown *)0x0;
  SHGetThreadRef((IUnknown **)(param_1 + 0x31));
  *param_1 = &PTR_FUN_0040138c;
  param_1[0x32] = 0;
  param_1[1] = &PTR_FUN_00401360;
  param_1[2] = &PTR_FUN_00401444;
  param_1[3] = &PTR_FUN_004013e4;
  param_1[4] = &PTR_FUN_004011d0;
  param_1[0x1c] = &PTR_FUN_0040127c;
  param_1[0x1d] = &PTR_FUN_0040152c;
  param_1[0x1e] = &PTR_FUN_00401254;
  param_1[0x2a] = &PTR_FUN_004011f4;
  param_1[0x2b] = &PTR_FUN_00401298;
  param_1[0x2c] = &PTR_FUN_004012ec;
  param_1[0x30] = &PTR_FUN_00401308;
  return param_1;
}



/* Function: FUN_004098a0 */

undefined4 * __thiscall FUN_004098a0(void *this,byte param_1)

{
  FUN_004098cd((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004098cd */

void __fastcall FUN_004098cd(undefined4 *param_1)

{
  FUN_00406930(param_1 + 0x32);
  FUN_00407efd(param_1 + 0x30);
  FUN_0040933a(param_1);
  return;
}



/* Function: FUN_004098f6 */

undefined4 * __fastcall FUN_004098f6(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f1a0;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040b42e(param_1);
  piVar2 = DAT_004105b8;
  param_1[0x2f] = 1;
  *param_1 = &PTR_FUN_00401128;
  param_1[1] = &PTR_FUN_004012b4;
  param_1[2] = &PTR_FUN_00401488;
  param_1[3] = &PTR_FUN_00401094;
  param_1[4] = &PTR_FUN_00401174;
  param_1[0x1c] = &PTR_FUN_004014f4;
  param_1[0x1d] = &PTR_FUN_00401510;
  param_1[0x1e] = &PTR_FUN_0040130c;
  param_1[0x2a] = &PTR_FUN_0040137c;
  param_1[0x2b] = &PTR_FUN_004012d0;
  param_1[0x2c] = &PTR_FUN_004010cc;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar2,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_004099c0 */

undefined4 * __thiscall FUN_004099c0(void *this,byte param_1)

{
  FUN_0040933a((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004099f0 */

int FUN_004099f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f1a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar1 = *(code **)(param_1 + 0x30);
  (*(code *)PTR_guard_check_icall_00411278)(param_2,param_3,DAT_004100c0 ^ (uint)&stack0xfffffffc);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    FUN_00407c93(iVar2);
  }
  ExceptionList = local_10;
  return iVar2;
}



/* Function: FUN_00409a60 */

int FUN_00409a60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00406437(param_1 + 8);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_00411278)(1);
      (*pcVar1)();
    }
    if (DAT_004105b8 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_004105b8 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(DAT_004105b8);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00409ac0 */

void FUN_00409ac0(int param_1)

{
  FUN_00406407((int *)(param_1 + 0x20));
  return;
}



/* Function: FUN_00409ae0 */

void FUN_00409ae0(int *param_1,int *param_2,undefined4 *param_3)

{
  FUN_00409afd(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00409afd */

int __fastcall FUN_00409afd(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f58e;
  local_10 = ExceptionList;
  uVar2 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = 0;
  *param_3 = 0;
  iVar3 = FUN_00404467(param_2,(int *)&DAT_004027c4);
  if (iVar3 == 0) {
    iVar3 = FUN_00404467(extraout_ECX,(int *)&DAT_00402c00);
    if (iVar3 == 0) {
      iVar4 = FUN_0040787c(param_1 + 1,extraout_ECX_00,param_3);
      if (iVar4 == -0x7fffbffe) {
        iVar4 = -0x7fffbffe;
      }
      if (iVar4 == -0x7fffbffe) {
        ExceptionList = local_10;
        return -0x7fffbffe;
      }
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return iVar4;
      }
    }
    else {
      *param_3 = param_1;
    }
    pcVar1 = *(code **)(*(int *)*param_3 + 4);
    (*(code *)PTR_guard_check_icall_00411278)((int *)*param_3);
    (*pcVar1)();
  }
  else {
    *param_3 = param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(param_1,uVar2);
    (*pcVar1)();
    iVar4 = 0;
  }
  ExceptionList = local_10;
  return iVar4;
}



/* Function: FUN_00409bc0 */

int __thiscall FUN_00409bc0(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 0x20) = 0xc0000001;
  FUN_00406930((int *)((int)this + 0x10));
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return (int)this;
}



/* Function: FUN_00409bf4 */

undefined4 * __fastcall FUN_00409bf4(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040f1a0;
  local_10 = ExceptionList;
  uVar3 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &PTR_o__purecall_00401464;
  FUN_004078bc(param_1 + 1);
  piVar2 = DAT_004105b8;
  param_1[8] = 1;
  *param_1 = &PTR_FUN_0040141c;
  param_1[1] = &PTR_FUN_00401230;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar2,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00409c80 */

int __thiscall FUN_00409c80(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 0x20) = 0xc0000001;
  FUN_00406930((int *)((int)this + 0x10));
  if ((param_1 & 1) != 0) {
    FUN_0040e310(this);
  }
  return (int)this;
}



/* Function: FUN_00409cc0 */

void FUN_00409cc0(int param_1,undefined4 *param_2)

{
  FUN_00407fc0(param_1 + -8,param_2);
  return;
}



/* Function: FUN_00409cd0 */

void FUN_00409cd0(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -0x10),param_2,param_3);
  return;
}



/* Function: FUN_00409ce0 */

void FUN_00409ce0(int param_1,undefined4 *param_2)

{
  FUN_00407f90(param_1 + -0xc,param_2);
  return;
}



/* Function: FUN_00409cf0 */

void FUN_00409cf0(int param_1)

{
  FUN_00408020((int *)(param_1 + -4));
  return;
}



/* Function: FUN_00409d00 */

void FUN_00409d00(int param_1)

{
  FUN_00408e80((int *)(param_1 + -0xc));
  return;
}



/* Function: FUN_00409d10 */

void FUN_00409d10(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -0xac),param_2,param_3);
  return;
}



/* Function: FUN_00409d30 */

void FUN_00409d30(int param_1)

{
  FUN_00408e80((int *)(param_1 + -0xa8));
  return;
}



/* Function: FUN_00409d50 */

void FUN_00409d50(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -8,param_2);
  return;
}



/* Function: FUN_00409d60 */

void FUN_00409d60(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00408e20(param_1 + -8,param_2,param_3);
  return;
}



/* Function: FUN_00409d70 */

void FUN_00409d70(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_00409d80 */

void FUN_00409d80(int param_1)

{
  FUN_00408040(param_1 + -0xc);
  return;
}



/* Function: FUN_00409d90 */

void FUN_00409d90(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00407fe0(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_00409da0 */

void FUN_00409da0(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_00409dc0 */

void FUN_00409dc0(int param_1)

{
  FUN_00408f10(param_1 + -4);
  return;
}



/* Function: FUN_00409dd0 */

void FUN_00409dd0(int param_1)

{
  FUN_00408040(param_1 + -0xa8);
  return;
}



/* Function: FUN_00409df0 */

void FUN_00409df0(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -0x70),param_2,param_3);
  return;
}



/* Function: FUN_00409e00 */

void FUN_00409e00(int param_1,undefined4 *param_2)

{
  FUN_00407fc0(param_1 + -0xc,param_2);
  return;
}



/* Function: FUN_00409e10 */

void FUN_00409e10(int param_1)

{
  FUN_00408020((int *)(param_1 + -8));
  return;
}



/* Function: FUN_00409e20 */

void FUN_00409e20(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_00409e30 */

void FUN_00409e30(int param_1)

{
  FUN_00408e80((int *)(param_1 + -0x10));
  return;
}



/* Function: FUN_00409e40 */

void FUN_00409e40(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -0xb0),param_2,param_3);
  return;
}



/* Function: FUN_00409e60 */

void FUN_00409e60(int param_1,undefined4 *param_2)

{
  FUN_00407f90(param_1 + -0xac,param_2);
  return;
}



/* Function: FUN_00409e80 */

void FUN_00409e80(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00409ae0((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_00409e90 */

void FUN_00409e90(int param_1)

{
  FUN_00408e80((int *)(param_1 + -0xac));
  return;
}



/* Function: FUN_00409eb0 */

void FUN_00409eb0(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -0xc,param_2);
  return;
}



/* Function: FUN_00409ec0 */

void FUN_00409ec0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00408e20(param_1 + -0xc,param_2,param_3);
  return;
}



/* Function: FUN_00409ed0 */

void FUN_00409ed0(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_00409ee0 */

void FUN_00409ee0(int param_1)

{
  FUN_00408040(param_1 + -0x10);
  return;
}



/* Function: FUN_00409ef0 */

void FUN_00409ef0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00407fe0(param_1 + -8,param_2,param_3);
  return;
}



/* Function: FUN_00409f00 */

void FUN_00409f00(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_00409f20 */

void FUN_00409f20(int param_1)

{
  FUN_00408f10(param_1 + -8);
  return;
}



/* Function: FUN_00409f30 */

void FUN_00409f30(int param_1)

{
  FUN_00408040(param_1 + -0xac);
  return;
}



/* Function: FUN_00409f50 */

void FUN_00409f50(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -0x74),param_2,param_3);
  return;
}



/* Function: FUN_00409f60 */

void FUN_00409f60(int param_1,undefined4 *param_2)

{
  FUN_00407f90(param_1 + -0x70,param_2);
  return;
}



/* Function: FUN_00409f70 */

void FUN_00409f70(int param_1)

{
  FUN_00408e80((int *)(param_1 + -0x70));
  return;
}



/* Function: FUN_00409f80 */

void FUN_00409f80(int param_1,undefined4 *param_2)

{
  FUN_00407fc0(param_1 + -0xac,param_2);
  return;
}



/* Function: FUN_00409fa0 */

void FUN_00409fa0(int param_1)

{
  FUN_00408020((int *)(param_1 + -0xc));
  return;
}



/* Function: FUN_00409fb0 */

void FUN_00409fb0(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_00409fc0 */

void FUN_00409fc0(int param_1,undefined4 *param_2)

{
  FUN_00407f90(param_1 + -0xb0,param_2);
  return;
}



/* Function: FUN_00409fe0 */

void FUN_00409fe0(int param_1)

{
  FUN_00408020((int *)(param_1 + -0xa8));
  return;
}



/* Function: FUN_0040a000 */

void FUN_0040a000(int param_1)

{
  FUN_00408040(param_1 + -0x70);
  return;
}



/* Function: FUN_0040a010 */

void FUN_0040a010(int param_1)

{
  FUN_00408e80((int *)(param_1 + -0xb0));
  return;
}



/* Function: FUN_0040a030 */

void FUN_0040a030(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -0xc),param_2,param_3);
  return;
}



/* Function: FUN_0040a040 */

void FUN_0040a040(int param_1,undefined4 *param_2)

{
  FUN_00407fc0(param_1 + -0x70,param_2);
  return;
}



/* Function: FUN_0040a050 */

void FUN_0040a050(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00407fe0(param_1 + -0xc,param_2,param_3);
  return;
}



/* Function: FUN_0040a060 */

void FUN_0040a060(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -0xac,param_2);
  return;
}



/* Function: FUN_0040a080 */

void FUN_0040a080(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00408e20(param_1 + -0xac,param_2,param_3);
  return;
}



/* Function: FUN_0040a0a0 */

void FUN_0040a0a0(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -0xa8),param_2,param_3);
  return;
}



/* Function: FUN_0040a0c0 */

void FUN_0040a0c0(int param_1)

{
  FUN_00408f10(param_1 + -0xc);
  return;
}



/* Function: FUN_0040a0d0 */

void __thiscall FUN_0040a0d0(void *this,byte param_1)

{
  FUN_004098a0((void *)((int)this + -0xc0),param_1);
  return;
}



/* Function: FUN_0040a0f0 */

void FUN_0040a0f0(int param_1)

{
  FUN_00408040(param_1 + -0xb0);
  return;
}



/* Function: FUN_0040a110 */

void FUN_0040a110(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -0x78),param_2,param_3);
  return;
}



/* Function: FUN_0040a120 */

void FUN_0040a120(int param_1,undefined4 *param_2)

{
  FUN_00407f90(param_1 + -0x74,param_2);
  return;
}



/* Function: FUN_0040a130 */

void FUN_0040a130(int param_1)

{
  FUN_00409ac0(param_1 + -4);
  return;
}



/* Function: FUN_0040a140 */

void FUN_0040a140(int param_1)

{
  FUN_00408f10(param_1 + -0xa8);
  return;
}



/* Function: FUN_0040a160 */

void FUN_0040a160(int param_1)

{
  FUN_00408e80((int *)(param_1 + -0x74));
  return;
}



/* Function: FUN_0040a170 */

void FUN_0040a170(int param_1,undefined4 *param_2)

{
  FUN_00407fc0(param_1 + -0xb0,param_2);
  return;
}



/* Function: FUN_0040a190 */

void FUN_0040a190(int param_1)

{
  FUN_00408020((int *)(param_1 + -0x10));
  return;
}



/* Function: FUN_0040a1a0 */

void FUN_0040a1a0(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_0040a1b0 */

void FUN_0040a1b0(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -0x70,param_2);
  return;
}



/* Function: FUN_0040a1c0 */

void FUN_0040a1c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00408e20(param_1 + -0x70,param_2,param_3);
  return;
}



/* Function: FUN_0040a1d0 */

void FUN_0040a1d0(int param_1)

{
  FUN_00408020((int *)(param_1 + -0xac));
  return;
}



/* Function: FUN_0040a1f0 */

void FUN_0040a1f0(int param_1)

{
  FUN_00408040(param_1 + -0x74);
  return;
}



/* Function: FUN_0040a200 */

void FUN_0040a200(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -0x10),param_2,param_3);
  return;
}



/* Function: FUN_0040a210 */

void FUN_0040a210(int param_1,undefined4 *param_2)

{
  FUN_00407fc0(param_1 + -0x74,param_2);
  return;
}



/* Function: FUN_0040a220 */

void FUN_0040a220(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -0xb0,param_2);
  return;
}



/* Function: FUN_0040a240 */

void FUN_0040a240(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00408e20(param_1 + -0xb0,param_2,param_3);
  return;
}



/* Function: FUN_0040a260 */

void FUN_0040a260(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -0xac),param_2,param_3);
  return;
}



/* Function: FUN_0040a280 */

void FUN_0040a280(int param_1)

{
  FUN_00408f10(param_1 + -0x10);
  return;
}



/* Function: FUN_0040a290 */

void FUN_0040a290(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00407fe0(param_1 + -0xac,param_2,param_3);
  return;
}



/* Function: FUN_0040a2b0 */

void FUN_0040a2b0(int param_1,undefined4 *param_2)

{
  FUN_00407f90(param_1 + -0x78,param_2);
  return;
}



/* Function: FUN_0040a2c0 */

void FUN_0040a2c0(int param_1)

{
  FUN_00408020((int *)(param_1 + -0x70));
  return;
}



/* Function: FUN_0040a2d0 */

void FUN_0040a2d0(int param_1)

{
  FUN_00408f10(param_1 + -0xac);
  return;
}



/* Function: FUN_0040a2f0 */

void FUN_0040a2f0(int param_1)

{
  FUN_00408e80((int *)(param_1 + -0x78));
  return;
}



/* Function: FUN_0040a300 */

void FUN_0040a300(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -0x74,param_2);
  return;
}



/* Function: FUN_0040a310 */

void FUN_0040a310(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00408e20(param_1 + -0x74,param_2,param_3);
  return;
}



/* Function: FUN_0040a320 */

void FUN_0040a320(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -0x70),param_2,param_3);
  return;
}



/* Function: FUN_0040a330 */

void FUN_0040a330(int param_1)

{
  FUN_00408020((int *)(param_1 + -0xb0));
  return;
}



/* Function: FUN_0040a350 */

void FUN_0040a350(int param_1)

{
  FUN_00408040(param_1 + -0x78);
  return;
}



/* Function: FUN_0040a360 */

void FUN_0040a360(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00407fe0(param_1 + -0x70,param_2,param_3);
  return;
}



/* Function: FUN_0040a370 */

void FUN_0040a370(int param_1)

{
  FUN_00408f10(param_1 + -0x70);
  return;
}



/* Function: FUN_0040a380 */

void FUN_0040a380(int param_1,undefined4 *param_2)

{
  FUN_00407fc0(param_1 + -0x78,param_2);
  return;
}



/* Function: FUN_0040a390 */

void FUN_0040a390(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -0xb0),param_2,param_3);
  return;
}



/* Function: FUN_0040a3b0 */

void FUN_0040a3b0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00407fe0(param_1 + -0xb0,param_2,param_3);
  return;
}



/* Function: FUN_0040a3d0 */

void FUN_0040a3d0(int param_1)

{
  FUN_00408020((int *)(param_1 + -0x74));
  return;
}



/* Function: FUN_0040a3e0 */

void FUN_0040a3e0(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0040a3f0 */

void FUN_0040a3f0(int param_1)

{
  FUN_00408f10(param_1 + -0xb0);
  return;
}



/* Function: FUN_0040a410 */

void FUN_0040a410(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -0x78,param_2);
  return;
}



/* Function: FUN_0040a420 */

void FUN_0040a420(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00408e20(param_1 + -0x78,param_2,param_3);
  return;
}



/* Function: FUN_0040a430 */

void FUN_0040a430(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -0x74),param_2,param_3);
  return;
}



/* Function: FUN_0040a440 */

void FUN_0040a440(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_0040a450 */

void FUN_0040a450(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00407fe0(param_1 + -0x74,param_2,param_3);
  return;
}



/* Function: FUN_0040a460 */

void FUN_0040a460(int param_1)

{
  FUN_00408f10(param_1 + -0x74);
  return;
}



/* Function: FUN_0040a470 */

void FUN_0040a470(int param_1)

{
  FUN_00408020((int *)(param_1 + -0x78));
  return;
}



/* Function: FUN_0040a480 */

void FUN_0040a480(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_0040a490 */

void FUN_0040a490(int param_1,undefined4 *param_2)

{
  FUN_00407f90(param_1 + -4,param_2);
  return;
}



/* Function: FUN_0040a4a0 */

void FUN_0040a4a0(int param_1)

{
  FUN_00408e80((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0040a4b0 */

void FUN_0040a4b0(int param_1,int *param_2,int *param_3)

{
  FUN_00408f70((int *)(param_1 + -0x78),param_2,param_3);
  return;
}



/* Function: FUN_0040a4c0 */

void FUN_0040a4c0(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_0040a4d0 */

void FUN_0040a4d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00407fe0(param_1 + -0x78,param_2,param_3);
  return;
}



/* Function: FUN_0040a4e0 */

void FUN_0040a4e0(int param_1)

{
  FUN_00408040(param_1 + -4);
  return;
}



/* Function: FUN_0040a4f0 */

void FUN_0040a4f0(int param_1)

{
  FUN_00409a60((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0040a500 */

void FUN_0040a500(int param_1)

{
  FUN_00408f10(param_1 + -0x78);
  return;
}



/* Function: FUN_0040a510 */

void FUN_0040a510(int param_1,undefined4 *param_2)

{
  FUN_00407fc0(param_1 + -4,param_2);
  return;
}



/* Function: FUN_0040a520 */

void FUN_0040a520(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -0xc),param_2,param_3);
  return;
}



/* Function: FUN_0040a530 */

void FUN_0040a530(int param_1,undefined4 *param_2)

{
  FUN_00407f90(param_1 + -8,param_2);
  return;
}



/* Function: FUN_0040a540 */

void FUN_0040a540(int param_1)

{
  FUN_00408e80((int *)(param_1 + -8));
  return;
}



/* Function: FUN_0040a550 */

void FUN_0040a550(int param_1,int *param_2,int *param_3)

{
  FUN_00408000((int *)(param_1 + -0xa8),param_2,param_3);
  return;
}



/* Function: FUN_0040a570 */

void FUN_0040a570(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_0040a580 */

void FUN_0040a580(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -4,param_2);
  return;
}



/* Function: FUN_0040a590 */

void FUN_0040a590(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00408e20(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_0040a5a0 */

void FUN_0040a5a0(int param_1)

{
  FUN_00408040(param_1 + -8);
  return;
}



/* Function: FUN_0040a5b0 */

void __fastcall FUN_0040a5b0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  wchar_t *local_40 [14];
  uint local_8;
  
  local_8 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  local_40[0] = L"Windows.BackgroundTasks";
  local_40[1] = L"Windows.PreInstalledConfigTask";
  uVar2 = 0;
  local_40[2] = L"Windows.UpdateTask";
  local_40[3] = L"Windows.AppService";
  local_40[4] = L"Windows.AppointmentDataProvider";
  local_40[5] = L"Windows.ContactDataProvider";
  local_40[6] = L"Windows.EmailDataProvider";
  local_40[7] = L"Windows.UserDataTaskDataProvider";
  local_40[8] = L"Windows.PrintWorkflowBackgroundTask";
  local_40[9] = L"Windows.BarcodeScannerProvider";
  local_40[10] = L"Windows.PosPaymentConnector";
  local_40[0xb] = L"Windows.PrintSupportExtension";
  local_40[0xc] = L"Windows.PrintSupportWorkflow";
  local_40[0xd] = L"Windows.PrintSupportVirtualPrinterWorkflow";
  do {
    iVar1 = o__wcsicmp(param_1,local_40[uVar2]);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xe);
  FUN_0040ded0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040a65b */

int __fastcall FUN_0040a65b(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  wchar_t *_Str;
  size_t sVar2;
  int iVar3;
  uint local_c;
  undefined4 local_8;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  iVar3 = 0;
  local_8 = 0;
  _Str = (wchar_t *)WindowsGetStringRawBuffer(param_1,&local_c);
  sVar2 = wcscspn(_Str,L"+");
  if (param_2 != (undefined4 *)0x0) {
    if (sVar2 < local_c) {
      WindowsDeleteString(local_8);
      iVar3 = WindowsSubstringWithSpecifiedLength(param_1,0,sVar2,&local_8);
    }
    else {
      WindowsDeleteString(local_8);
      iVar3 = WindowsDuplicateString(param_1,&local_8);
    }
    uVar1 = local_8;
    if (-1 < iVar3) {
      local_8 = 0;
      *param_2 = uVar1;
    }
  }
  WindowsDeleteString(0);
  WindowsDeleteString(local_8);
  return iVar3;
}



/* Function: FUN_0040a700 */

undefined4 FUN_0040a700(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x39) == '\0') {
    FUN_0040db49();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  return 0;
}



/* Function: FUN_0040a730 */

undefined4 FUN_0040a730(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x39) == '\0') {
    FUN_0040db49();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  return 0;
}



/* Function: FUN_0040a760 */

undefined4 FUN_0040a760(int param_1,undefined4 *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + 0x39) == '\0') {
    FUN_0040db49();
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x68);
  AcquireSRWLockShared(SRWLock);
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1);
    (*pcVar2)();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040a7bf */

void FUN_0040a7bf(undefined4 *param_1)

{
  PSRWLOCK SRWLock;
  code *pcVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  DWORD DVar6;
  int unaff_retaddr;
  int iVar7;
  code *local_64;
  code *local_60;
  code *local_5c;
  code *local_58;
  code *local_54;
  code *local_50;
  code *local_4c;
  code *local_48;
  int local_44;
  code *local_40;
  int *local_3c;
  code *local_38;
  code *local_34;
  undefined1 local_2d;
  undefined1 local_2c [20];
  void *local_18;
  uint local_14;
  
  local_14 = DAT_004100c0 ^ (uint)&stack0xfffffff0;
  local_3c = (int *)0x0;
  local_40 = (code *)0x0;
  pcVar1 = *(code **)*param_1;
  piVar4 = FUN_0040badd((int *)&local_3c);
  (*(code *)PTR_guard_check_icall_00411278)(param_1,&DAT_00403b9c,piVar4);
  uVar5 = (*pcVar1)();
  if ((int)uVar5 < 0) {
    iVar7 = 0x35;
  }
  else {
    local_18 = (void *)0x0;
    DVar6 = WindowsCreateStringReference
                      (L"Windows.Foundation.PropertyValue",0x20,local_2c,&local_18);
    if ((int)DVar6 < 0) goto LAB_0040aea2;
    uVar5 = FUN_0040bb0e(local_18,(int *)&local_40);
    iVar7 = local_44;
    if (-1 < (int)uVar5) {
      SRWLock = (PSRWLOCK)(local_44 + 0x68);
      AcquireSRWLockShared(SRWLock);
      pcVar1 = local_40;
      uVar2 = *(undefined4 *)(iVar7 + 0x24);
      local_64 = (code *)0x0;
      local_38 = *(code **)(*(int *)local_40 + 0x2c);
      FUN_004090cf((int *)&local_64);
      pcVar3 = local_38;
      (*(code *)PTR_guard_check_icall_00411278)(pcVar1,uVar2,&local_64);
      uVar5 = (*pcVar3)();
      piVar4 = local_3c;
      if ((int)uVar5 < 0) {
        iVar7 = 0x3c;
LAB_0040a90d:
        FUN_00405876(unaff_retaddr,iVar7,0x402f88,uVar5);
      }
      else {
        local_2d = 0;
        local_18 = (void *)0x0;
        pcVar1 = *(code **)(*local_3c + 0x28);
        local_38 = local_64;
        DVar6 = WindowsCreateStringReference(L"ActivationKind",0xe,local_2c,&local_18);
        if ((int)DVar6 < 0) goto LAB_0040aea2;
        (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,local_38,&local_2d);
        uVar5 = (*pcVar1)();
        pcVar1 = local_40;
        if ((int)uVar5 < 0) {
          iVar7 = 0x3e;
          goto LAB_0040a90d;
        }
        local_60 = (code *)0x0;
        uVar2 = *(undefined4 *)(local_44 + 0x28);
        local_38 = *(code **)(*(int *)local_40 + 0x2c);
        FUN_004090cf((int *)&local_60);
        pcVar3 = local_38;
        (*(code *)PTR_guard_check_icall_00411278)(pcVar1,uVar2,&local_60);
        uVar5 = (*pcVar3)();
        piVar4 = local_3c;
        if ((int)uVar5 < 0) {
          iVar7 = 0x42;
LAB_0040a9ad:
          FUN_00405876(unaff_retaddr,iVar7,0x402f88,uVar5);
        }
        else {
          local_18 = (void *)0x0;
          pcVar1 = *(code **)(*local_3c + 0x28);
          local_38 = local_60;
          DVar6 = WindowsCreateStringReference(L"PreviousExecutionState",0x16,local_2c,&local_18);
          if ((int)DVar6 < 0) goto LAB_0040aea2;
          (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,local_38,&local_2d);
          uVar5 = (*pcVar1)();
          pcVar1 = local_40;
          if ((int)uVar5 < 0) {
            iVar7 = 0x43;
            goto LAB_0040a9ad;
          }
          local_5c = (code *)0x0;
          pcVar3 = *(code **)(*(int *)local_40 + 0x34);
          FUN_004090cf((int *)&local_5c);
          (*(code *)PTR_guard_check_icall_00411278)
                    (pcVar1,*(undefined4 *)(local_44 + 0x40),*(undefined4 *)(local_44 + 0x44),
                     &local_5c);
          uVar5 = (*pcVar3)();
          piVar4 = local_3c;
          if ((int)uVar5 < 0) {
            iVar7 = 0x46;
LAB_0040ab09:
            FUN_00405876(unaff_retaddr,iVar7,0x402f88,uVar5);
          }
          else {
            local_18 = (void *)0x0;
            pcVar1 = *(code **)(*local_3c + 0x28);
            local_38 = local_5c;
            DVar6 = WindowsCreateStringReference(L"UserContext",0xb,local_2c,&local_18);
            if ((int)DVar6 < 0) goto LAB_0040aea2;
            (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,local_38,&local_2d);
            uVar5 = (*pcVar1)();
            piVar4 = local_3c;
            iVar7 = local_44;
            if ((int)uVar5 < 0) {
              iVar7 = 0x47;
              goto LAB_0040ab09;
            }
            local_38 = *(code **)(local_44 + 0x30);
            if (local_38 != (code *)0x0) {
              local_18 = (void *)0x0;
              local_34 = *(code **)(*local_3c + 0x28);
              DVar6 = WindowsCreateStringReference(L"SplashScreen",0xc,local_2c,&local_18);
              pcVar1 = local_34;
              if ((int)DVar6 < 0) goto LAB_0040aea2;
              (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,local_38,&local_2d);
              uVar5 = (*pcVar1)();
              if ((int)uVar5 < 0) {
                iVar7 = 0x4b;
                goto LAB_0040ab09;
              }
            }
            piVar4 = local_3c;
            iVar7 = *(int *)(iVar7 + 0x2c);
            if (iVar7 != 0) {
              local_18 = (void *)0x0;
              local_34 = *(code **)(*local_3c + 0x28);
              DVar6 = WindowsCreateStringReference
                                (L"ActivationValueSetReference",0x1b,local_2c,&local_18);
              pcVar1 = local_34;
              if ((int)DVar6 < 0) goto LAB_0040aea2;
              (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,iVar7,&local_2d);
              uVar5 = (*pcVar1)();
              if ((int)uVar5 < 0) {
                iVar7 = 0x50;
                goto LAB_0040ab09;
              }
            }
            pcVar3 = local_40;
            local_58 = (code *)0x0;
            pcVar1 = *(code **)(*(int *)local_40 + 0x44);
            FUN_004090cf((int *)&local_58);
            (*(code *)PTR_guard_check_icall_00411278)
                      (pcVar3,*(undefined1 *)(local_44 + 0x3a),&local_58);
            uVar5 = (*pcVar1)();
            piVar4 = local_3c;
            if ((int)uVar5 < 0) {
              iVar7 = 0x54;
LAB_0040aba3:
              FUN_00405876(unaff_retaddr,iVar7,0x402f88,uVar5);
            }
            else {
              local_18 = (void *)0x0;
              pcVar1 = *(code **)(*local_3c + 0x28);
              local_34 = local_58;
              DVar6 = WindowsCreateStringReference(L"IsForeground",0xc,local_2c,&local_18);
              if ((int)DVar6 < 0) {
LAB_0040aea2:
                FUN_004063f3(DVar6);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,local_34,&local_2d);
              uVar5 = (*pcVar1)();
              pcVar1 = local_40;
              if ((int)uVar5 < 0) {
                iVar7 = 0x55;
                goto LAB_0040aba3;
              }
              local_54 = (code *)0x0;
              pcVar3 = *(code **)(*(int *)local_40 + 0x44);
              FUN_004090cf((int *)&local_54);
              (*(code *)PTR_guard_check_icall_00411278)
                        (pcVar1,*(undefined1 *)(local_44 + 0x48),&local_54);
              uVar5 = (*pcVar3)();
              piVar4 = local_3c;
              if ((int)uVar5 < 0) {
                iVar7 = 0x58;
LAB_0040ac3d:
                FUN_00405876(unaff_retaddr,iVar7,0x402f88,uVar5);
              }
              else {
                local_18 = (void *)0x0;
                pcVar1 = *(code **)(*local_3c + 0x28);
                local_34 = local_54;
                DVar6 = WindowsCreateStringReference(L"IsHolographic",0xd,local_2c,&local_18);
                if ((int)DVar6 < 0) goto LAB_0040aea2;
                (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,local_34,&local_2d);
                uVar5 = (*pcVar1)();
                pcVar1 = local_40;
                if ((int)uVar5 < 0) {
                  iVar7 = 0x59;
                  goto LAB_0040ac3d;
                }
                local_50 = (code *)0x0;
                pcVar3 = *(code **)(*(int *)local_40 + 0x44);
                FUN_004090cf((int *)&local_50);
                (*(code *)PTR_guard_check_icall_00411278)
                          (pcVar1,*(undefined1 *)(local_44 + 0x39),&local_50);
                uVar5 = (*pcVar3)();
                piVar4 = local_3c;
                if ((int)uVar5 < 0) {
                  iVar7 = 0x5c;
LAB_0040acd7:
                  FUN_00405876(unaff_retaddr,iVar7,0x402f88,uVar5);
                }
                else {
                  local_18 = (void *)0x0;
                  pcVar1 = *(code **)(*local_3c + 0x28);
                  local_34 = local_50;
                  DVar6 = WindowsCreateStringReference(L"IsInitialized",0xd,local_2c,&local_18);
                  if ((int)DVar6 < 0) goto LAB_0040aea2;
                  (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,local_34,&local_2d);
                  uVar5 = (*pcVar1)();
                  pcVar1 = local_40;
                  if ((int)uVar5 < 0) {
                    iVar7 = 0x5d;
                    goto LAB_0040acd7;
                  }
                  local_4c = (code *)0x0;
                  pcVar3 = *(code **)(*(int *)local_40 + 0x34);
                  FUN_004090cf((int *)&local_4c);
                  (*(code *)PTR_guard_check_icall_00411278)
                            (pcVar1,*(undefined4 *)(local_44 + 0x50),
                             *(undefined4 *)(local_44 + 0x54),&local_4c);
                  uVar5 = (*pcVar3)();
                  piVar4 = local_3c;
                  if ((int)uVar5 < 0) {
                    iVar7 = 0x60;
LAB_0040ad73:
                    FUN_00405876(unaff_retaddr,iVar7,0x402f88,uVar5);
                  }
                  else {
                    local_18 = (void *)0x0;
                    pcVar1 = *(code **)(*local_3c + 0x28);
                    local_34 = local_4c;
                    DVar6 = WindowsCreateStringReference(L"AamActivationId",0xf,local_2c,&local_18);
                    if ((int)DVar6 < 0) goto LAB_0040aea2;
                    (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,local_34,&local_2d);
                    uVar5 = (*pcVar1)();
                    if ((int)uVar5 < 0) {
                      iVar7 = 0x61;
                      goto LAB_0040ad73;
                    }
                    local_48 = (code *)0x0;
                    local_34 = local_40;
                    local_38 = *(code **)(*(int *)local_40 + 0x50);
                    FUN_004090cf((int *)&local_48);
                    pcVar1 = local_38;
                    (*(code *)PTR_guard_check_icall_00411278)
                              (local_34,*(undefined4 *)(local_44 + 0x58),
                               *(undefined4 *)(local_44 + 0x5c),*(undefined4 *)(local_44 + 0x60),
                               *(undefined4 *)(local_44 + 100),&local_48);
                    uVar5 = (*pcVar1)();
                    piVar4 = local_3c;
                    if ((int)uVar5 < 0) {
                      iVar7 = 100;
LAB_0040ae20:
                      FUN_00405876(unaff_retaddr,iVar7,0x402f88,uVar5);
                    }
                    else {
                      local_18 = (void *)0x0;
                      pcVar1 = *(code **)(*local_3c + 0x28);
                      local_34 = local_48;
                      DVar6 = WindowsCreateStringReference(L"AamActivityId",0xd,local_2c,&local_18);
                      if ((int)DVar6 < 0) goto LAB_0040aea2;
                      (*(code *)PTR_guard_check_icall_00411278)(piVar4,local_18,local_34,&local_2d);
                      uVar5 = (*pcVar1)();
                      if ((int)uVar5 < 0) {
                        iVar7 = 0x65;
                        goto LAB_0040ae20;
                      }
                    }
                    FUN_00406930((int *)&local_48);
                  }
                  FUN_00406930((int *)&local_4c);
                }
                FUN_00406930((int *)&local_50);
              }
              FUN_00406930((int *)&local_54);
            }
            FUN_00406930((int *)&local_58);
          }
          FUN_00406930((int *)&local_5c);
        }
        FUN_00406930((int *)&local_60);
      }
      FUN_00406930((int *)&local_64);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockShared(SRWLock);
      }
      goto LAB_0040ae7b;
    }
    iVar7 = 0x36;
  }
  FUN_00405876(unaff_retaddr,iVar7,0x402f88,uVar5);
LAB_0040ae7b:
  FUN_0040ba87((int *)&local_40);
  FUN_0040ba87((int *)&local_3c);
  FUN_0040ded0(local_14 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_0040aeb0 */

int FUN_0040aeb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                undefined4 param_13)

{
  code *pcVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    *(undefined4 *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x50) = param_10;
    *(undefined4 *)(param_1 + 0x20) = param_5;
    *(undefined1 *)(param_1 + 0x32) = param_7;
    *(undefined4 *)(param_1 + 0x54) = param_11;
    *(undefined1 *)(param_1 + 0x30) = param_6;
    *(undefined4 *)(param_1 + 0x48) = param_8;
    *(undefined4 *)(param_1 + 0x58) = param_12;
    *(undefined4 *)(param_1 + 0x3c) = param_3;
    *(undefined4 *)(param_1 + 0x4c) = param_9;
    *(undefined4 *)(param_1 + 0x5c) = param_13;
    pcVar1 = *(code **)(*(int *)(param_1 + -8) + 0x28);
    (*(code *)PTR_guard_check_icall_00411278)(param_4,param_1 + 0x1c);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
  }
  else {
    iVar2 = -0x7fff0001;
    FUN_0040db49();
    RoOriginateError(0x8000ffff,0);
  }
  return iVar2;
}



/* Function: FUN_0040af50 */

undefined4
FUN_0040af50(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5)

{
  PSRWLOCK SRWLock;
  code *pcVar1;
  int local_8;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x60);
  AcquireSRWLockExclusive(SRWLock);
  if ((param_4 != (int *)0x0) && (*(int **)(param_1 + 0x28) != param_4)) {
    pcVar1 = *(code **)(*param_4 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(param_4);
    (*pcVar1)();
    local_8 = *(int *)(param_1 + 0x28);
    *(int **)(param_1 + 0x28) = param_4;
    FUN_00406930(&local_8);
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x40) = param_5;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined4 *)(param_1 + 0x2c) = param_3;
  }
  else {
    FUN_0040db49();
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040afd0 */

undefined4 FUN_0040afd0(int param_1,undefined4 *param_2)

{
  PSRWLOCK SRWLock;
  undefined4 uVar1;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x5c);
  AcquireSRWLockShared(SRWLock);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  param_2[1] = uVar1;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b010 */

undefined4 FUN_0040b010(int param_1,undefined4 param_2,undefined4 param_3)

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x5c);
  AcquireSRWLockExclusive(SRWLock);
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b050 */

undefined4 FUN_0040b050(int param_1,undefined1 *param_2)

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x5c);
  AcquireSRWLockShared(SRWLock);
  *param_2 = *(undefined1 *)(param_1 + 0x3c);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b090 */

undefined4 FUN_0040b090(int param_1,undefined1 *param_2)

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x5c);
  AcquireSRWLockShared(SRWLock);
  *param_2 = *(undefined1 *)(param_1 + 0x2e);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b0d0 */

undefined4 FUN_0040b0d0(int param_1,undefined4 *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  code *pcVar2;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x5c);
  AcquireSRWLockShared(SRWLock);
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1);
    (*pcVar2)();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b130 */

undefined4 FUN_0040b130(int param_1,int *param_2)

{
  PSRWLOCK SRWLock;
  code *pcVar1;
  int local_8;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x5c);
  AcquireSRWLockExclusive(SRWLock);
  if (*(int **)(param_1 + 0x20) != param_2) {
    if (param_2 != (int *)0x0) {
      pcVar1 = *(code **)(*param_2 + 4);
      (*(code *)PTR_guard_check_icall_00411278)(param_2);
      (*pcVar1)();
    }
    local_8 = *(int *)(param_1 + 0x20);
    *(int **)(param_1 + 0x20) = param_2;
    FUN_00406930(&local_8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b190 */

undefined4 FUN_0040b190(int param_1,undefined4 *param_2)

{
  PSRWLOCK SRWLock;
  undefined4 uVar1;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x5c);
  AcquireSRWLockShared(SRWLock);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *param_2 = *(undefined4 *)(param_1 + 0x44);
  param_2[1] = uVar1;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b1d0 */

undefined4 FUN_0040b1d0(int param_1,undefined4 *param_2)

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x5c);
  AcquireSRWLockShared(SRWLock);
  *param_2 = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(undefined4 *)(param_1 + 0x50);
  param_2[2] = *(undefined4 *)(param_1 + 0x54);
  param_2[3] = *(undefined4 *)(param_1 + 0x58);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b210 */

int FUN_0040b210(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  LPCWSTR lpString1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_0040db49();
  }
  uVar4 = 0;
  *param_2 = 0;
  lpString1 = (LPCWSTR)WindowsGetStringRawBuffer(param_1,0);
  WindowsDeleteString(0);
  local_8 = 0;
  iVar2 = FUN_0040a65b(param_1,&local_8);
  if (-1 < iVar2) {
    lpString1 = (LPCWSTR)WindowsGetStringRawBuffer(local_8,0);
  }
  do {
    if (0x16f < uVar4) {
      cVar1 = FUN_0040a5b0(lpString1);
      if (cVar1 == '\0') {
        FUN_0040db49();
      }
LAB_0040b29e:
      WindowsDeleteString(local_8);
      return iVar2;
    }
    iVar3 = CompareStringOrdinal
                      (lpString1,-1,*(LPCWSTR *)((int)&PTR_u_Windows_Launch_004017b8 + uVar4),-1,0);
    if (iVar3 == 2) {
      *param_2 = *(undefined4 *)((int)&DAT_004017bc + uVar4);
      goto LAB_0040b29e;
    }
    uVar4 = uVar4 + 8;
  } while( true );
}



/* Function: FUN_0040b2c0 */

void FUN_0040b2c0(int param_1,undefined4 *param_2)

{
  PSRWLOCK SRWLock;
  code *pcVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  int *unaff_EDI;
  int unaff_retaddr;
  int *piStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_004100c0 ^ (uint)&piStack_34;
  SRWLock = (PSRWLOCK)(param_1 + 100);
  AcquireSRWLockShared(SRWLock);
  iStack_2c = *(int *)(param_1 + 0x3c);
  iVar5 = *(int *)(param_1 + 0x40);
  iStack_28 = iVar5;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  *param_2 = 0;
  if (iStack_2c == 0 && iVar5 == 0) goto LAB_0040b40c;
  puStack_30 = (undefined4 *)0x0;
  uStack_10 = 0;
  DVar3 = WindowsCreateStringReference
                    (L"Windows.System.Internal.UserManager",0x23,auStack_24,&uStack_10);
  if ((int)DVar3 < 0) {
    FUN_004063f3(DVar3);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (unaff_EDI != (int *)0x0) {
    pcVar1 = *(code **)(*unaff_EDI + 8);
    (*(code *)PTR_guard_check_icall_00411278)(unaff_EDI);
    (*pcVar1)();
  }
  uVar4 = RoGetActivationFactory(uStack_20,&DAT_0040271c,&stack0xffffffc0);
  puVar2 = puStack_30;
  if ((int)uVar4 < 0) {
    FUN_00405876(unaff_retaddr,0x1a6,0x402f88,uVar4);
  }
  else {
    piStack_34 = (int *)0x0;
    pcVar1 = *(code **)*puStack_30;
    FUN_004090cf((int *)&piStack_34);
    (*(code *)PTR_guard_check_icall_00411278)(puVar2,&DAT_0040293c,&piStack_34);
    uVar4 = (*pcVar1)();
    if ((int)uVar4 < 0) {
      iVar5 = 0x1a9;
LAB_0040b3e1:
      FUN_00405876(unaff_retaddr,iVar5,0x402f88,uVar4);
    }
    else {
      pcVar1 = *(code **)(*piStack_34 + 0x50);
      (*(code *)PTR_guard_check_icall_00411278)(piStack_34,iStack_2c,iStack_28,param_2);
      uVar4 = (*pcVar1)();
      if ((int)uVar4 < 0) {
        iVar5 = 0x1ab;
        goto LAB_0040b3e1;
      }
    }
    FUN_00406930((int *)&piStack_34);
  }
  uStack_10 = 0;
  FUN_0040ba87((int *)&puStack_30);
LAB_0040b40c:
  FUN_0040ded0(local_c ^ (uint)&piStack_34);
  return;
}



/* Function: FUN_0040b42e */

undefined4 * __fastcall FUN_0040b42e(undefined4 *param_1)

{
  FUN_004078bc(param_1 + 4);
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_o__purecall_00401334;
  param_1[1] = &PTR_o__purecall_0040110c;
  param_1[2] = &PTR_o__purecall_00401154;
  param_1[3] = &PTR_o__purecall_00401198;
  param_1[4] = &PTR_o__purecall_004010e8;
  param_1[0x1c] = &PTR_o__purecall_004014a8;
  param_1[0x1d] = &PTR_o__purecall_004014c4;
  param_1[0x1e] = &PTR_o__purecall_004013bc;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return param_1;
}



/* Function: FUN_0040b4d0 */

undefined4 FUN_0040b4d0(int param_1,undefined4 *param_2)

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x30);
  AcquireSRWLockShared(SRWLock);
  *param_2 = *(undefined4 *)(param_1 + -0x3c);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b510 */

undefined4 FUN_0040b510(int param_1,int *param_2)

{
  PSRWLOCK SRWLock;
  undefined4 uVar1;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x2c);
  AcquireSRWLockShared(SRWLock);
  uVar1 = 0;
  *param_2 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = FUN_0040baa9((int *)(param_1 + 0x14),param_2);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return uVar1;
}



/* Function: FUN_0040b560 */

undefined4 FUN_0040b560(int param_1,int *param_2)

{
  PSRWLOCK SRWLock;
  undefined4 uVar1;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x28);
  AcquireSRWLockShared(SRWLock);
  uVar1 = 0x80004002;
  *param_2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_0040baa9((int *)(param_1 + 0x10),param_2);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return uVar1;
}



/* Function: FUN_0040b5b0 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0040b5b0(int param_1,int *param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  code *pcVar2;
  int iVar3;
  int local_c [2];
  
  SRWLock = (PSRWLOCK)(param_1 + 0x28);
  AcquireSRWLockExclusive(SRWLock);
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) != 0) goto LAB_0040b651;
  local_c[0] = 0;
  local_c[1] = 0;
  if (param_2 == (int *)0x0) {
LAB_0040b609:
    local_c[0] = CONCAT31(local_c[0]._1_3_,1);
  }
  else {
    pcVar2 = *(code **)*param_2;
    (*(code *)PTR_guard_check_icall_00411278)(param_2,&LAB_00402bd0,local_c + 1);
    iVar3 = (*pcVar2)();
    if (-1 < iVar3) goto LAB_0040b609;
  }
  FUN_0040ba87(local_c + 1);
  if ((char)local_c[0] == '\0') {
    FUN_0040db49();
  }
  if (*(int **)(param_1 + 0x10) != param_2) {
    if (param_2 != (int *)0x0) {
      pcVar2 = *(code **)(*param_2 + 4);
      (*(code *)PTR_guard_check_icall_00411278)(param_2);
      (*pcVar2)();
    }
    local_c[0] = *(int *)(param_1 + 0x10);
    *(int **)(param_1 + 0x10) = param_2;
    FUN_00406930(local_c);
  }
LAB_0040b651:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return -(uint)(iVar1 != 0) & 0x8000ffff;
}



/* Function: FUN_0040b670 */

undefined4 FUN_0040b670(int param_1,undefined4 *param_2)

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x28);
  AcquireSRWLockShared(SRWLock);
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  param_2[2] = *(undefined4 *)(param_1 + 0x20);
  param_2[3] = *(undefined4 *)(param_1 + 0x24);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b6b0 */

undefined4
FUN_0040b6b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x28);
  AcquireSRWLockExclusive(SRWLock);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return 0;
}



/* Function: FUN_0040b6e9 */

void __thiscall FUN_0040b6e9(void *this,undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  int unaff_retaddr;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_24 [20];
  void *local_10;
  uint local_c;
  
  local_c = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  uVar2 = FUN_0040a7bf(param_1);
  if ((int)uVar2 < 0) {
    FUN_00405876(unaff_retaddr,0x220,0x402f88,uVar2);
    goto LAB_0040ba66;
  }
  local_40 = (int *)0x0;
  local_44 = (int *)0x0;
  pcVar1 = *(code **)*param_1;
  piVar3 = FUN_0040badd((int *)&local_40);
  (*(code *)PTR_guard_check_icall_00411278)(param_1,&DAT_00403b9c,piVar3);
  uVar2 = (*pcVar1)();
  if ((int)uVar2 < 0) {
    iVar5 = 0x225;
    goto LAB_0040b7ba;
  }
  local_10 = (void *)0x0;
  DVar4 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue",0x20,local_24,&local_10);
  if ((int)DVar4 < 0) goto LAB_0040ba79;
  uVar2 = FUN_0040bb0e(local_10,(int *)&local_44);
  if ((int)uVar2 < 0) {
    iVar5 = 0x226;
LAB_0040b7ba:
    FUN_00405876(unaff_retaddr,iVar5,0x402f88,uVar2);
  }
  else {
    local_58 = 0;
    pcVar1 = *(code **)(*(int *)((int)this + 0x70) + 0x18);
    (*(code *)PTR_guard_check_icall_00411278)((int *)((int)this + 0x70),&local_58);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) {
      iVar5 = 0x229;
      goto LAB_0040b7ba;
    }
    local_54 = 0;
    pcVar1 = *(code **)(*(int *)((int)this + 0x74) + 0x18);
    FUN_004090cf(&local_54);
    (*(code *)PTR_guard_check_icall_00411278)((int *)((int)this + 0x74),&local_54);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) {
      iVar5 = 0x22c;
LAB_0040b81e:
      FUN_00405876(unaff_retaddr,iVar5,0x402f88,uVar2);
    }
    else {
      pcVar1 = *(code **)(*(int *)((int)this + 0x78) + 0x20);
      (*(code *)PTR_guard_check_icall_00411278)((int *)((int)this + 0x78),&local_38);
      uVar2 = (*pcVar1)();
      piVar3 = local_44;
      if ((int)uVar2 < 0) {
        iVar5 = 0x22f;
        goto LAB_0040b81e;
      }
      local_50 = 0;
      pcVar1 = *(code **)(*local_44 + 0x28);
      FUN_004090cf(&local_50);
      (*(code *)PTR_guard_check_icall_00411278)(piVar3,local_58,&local_50);
      uVar2 = (*pcVar1)();
      piVar3 = local_40;
      iVar5 = local_50;
      if ((int)uVar2 < 0) {
        iVar5 = 0x233;
LAB_0040b905:
        FUN_00405876(unaff_retaddr,iVar5,0x402f88,uVar2);
      }
      else {
        local_39 = 0;
        local_10 = (void *)0x0;
        pcVar1 = *(code **)(*local_40 + 0x28);
        DVar4 = WindowsCreateStringReference
                          (L"CurrentlyShownApplicationViewId",0x1f,local_24,&local_10);
        if ((int)DVar4 < 0) goto LAB_0040ba79;
        (*(code *)PTR_guard_check_icall_00411278)(piVar3,local_10,iVar5,&local_39);
        uVar2 = (*pcVar1)();
        piVar3 = local_40;
        iVar5 = local_54;
        if ((int)uVar2 < 0) {
          iVar5 = 0x235;
          goto LAB_0040b905;
        }
        if (local_54 != 0) {
          local_10 = (void *)0x0;
          pcVar1 = *(code **)(*local_40 + 0x28);
          DVar4 = WindowsCreateStringReference(L"ViewSwitcher",0xc,local_24,&local_10);
          if ((int)DVar4 < 0) goto LAB_0040ba79;
          (*(code *)PTR_guard_check_icall_00411278)(piVar3,local_10,iVar5,&local_39);
          uVar2 = (*pcVar1)();
          if ((int)uVar2 < 0) {
            iVar5 = 0x239;
            goto LAB_0040b905;
          }
        }
        piVar3 = local_44;
        local_4c = 0;
        pcVar1 = *(code **)(*local_44 + 0x34);
        FUN_004090cf(&local_4c);
        (*(code *)PTR_guard_check_icall_00411278)(piVar3,local_38,local_34,&local_4c);
        uVar2 = (*pcVar1)();
        piVar3 = local_40;
        iVar5 = local_4c;
        if ((int)uVar2 < 0) {
          iVar5 = 0x23d;
LAB_0040b998:
          FUN_00405876(unaff_retaddr,iVar5,0x402f88,uVar2);
        }
        else {
          local_10 = (void *)0x0;
          pcVar1 = *(code **)(*local_40 + 0x28);
          DVar4 = WindowsCreateStringReference(L"MultiView:AamActivationId",0x19,local_24,&local_10)
          ;
          if ((int)DVar4 < 0) {
LAB_0040ba79:
            FUN_004063f3(DVar4);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (*(code *)PTR_guard_check_icall_00411278)(piVar3,local_10,iVar5,&local_39);
          uVar2 = (*pcVar1)();
          piVar3 = local_44;
          if ((int)uVar2 < 0) {
            iVar5 = 0x23e;
            goto LAB_0040b998;
          }
          local_48 = 0;
          pcVar1 = *(code **)(*local_44 + 0x44);
          FUN_004090cf(&local_48);
          (*(code *)PTR_guard_check_icall_00411278)(piVar3,local_30,&local_48);
          uVar2 = (*pcVar1)();
          piVar3 = local_40;
          iVar5 = local_48;
          if ((int)uVar2 < 0) {
            iVar5 = 0x241;
LAB_0040ba24:
            FUN_00405876(unaff_retaddr,iVar5,0x402f88,uVar2);
          }
          else {
            local_10 = (void *)0x0;
            pcVar1 = *(code **)(*local_40 + 0x28);
            DVar4 = WindowsCreateStringReference
                              (L"IsApplicationMultiviewActivationPolicyEnabled",0x2d,local_24,
                               &local_10);
            if ((int)DVar4 < 0) goto LAB_0040ba79;
            (*(code *)PTR_guard_check_icall_00411278)(piVar3,local_10,iVar5,&local_39);
            uVar2 = (*pcVar1)();
            if ((int)uVar2 < 0) {
              iVar5 = 0x242;
              goto LAB_0040ba24;
            }
          }
          FUN_00406930(&local_48);
        }
        FUN_00406930(&local_4c);
      }
      FUN_00406930(&local_50);
    }
    FUN_00406930(&local_54);
  }
  FUN_0040ba87((int *)&local_44);
  FUN_0040ba87((int *)&local_40);
LAB_0040ba66:
  FUN_0040ded0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040ba87 */

void __fastcall FUN_0040ba87(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_0040baa9 */

undefined4 __thiscall FUN_0040baa9(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
                    /* WARNING: Load size is inaccurate */
  piVar1 = *this;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1);
    (*pcVar2)();
  }
                    /* WARNING: Load size is inaccurate */
  *param_1 = *this;
  return 0;
}



/* Function: FUN_0040badd */

int * FUN_0040badd(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1);
    (*pcVar2)();
  }
  return param_1;
}



/* Function: FUN_0040bb0e */

void __thiscall FUN_0040bb0e(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1);
    (*pcVar2)();
  }
  RoGetActivationFactory(this,&DAT_00402ae8,param_1);
  return;
}



/* Function: FUN_0040bb4e */

undefined4 * __fastcall FUN_0040bb4e(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_004105b8;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_004017a8;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar2);
    (*pcVar1)();
  }
  *param_1 = &PTR_FUN_00401798;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



/* Function: FUN_0040bb97 */

undefined4 __thiscall FUN_0040bb97(void *this,uint param_1)

{
  void *pvVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = -(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 4);
  puVar2 = (uint *)FUN_0040ef2d(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = param_1;
    puVar2 = puVar2 + 1;
    uVar4 = param_1;
    puVar5 = puVar2;
    if (param_1 != 0) {
      do {
        FUN_004090c3(puVar5);
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  *(uint **)((int)this + 0xc) = puVar2;
  iVar3 = FUN_0040ef2d(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4));
  pvVar1 = *(void **)((int)this + 0xc);
  *(int *)((int)this + 0x14) = iVar3;
  if (pvVar1 != (void *)0x0) {
    if (iVar3 != 0) {
      *(void **)((int)this + 0x10) = pvVar1;
      return 0;
    }
    if (pvVar1 != (void *)0x0) {
      FUN_004064a3(pvVar1);
    }
  }
  o_free(*(undefined4 *)((int)this + 0x14));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0x8007000e;
}



/* Function: FUN_0040bc5d */

void __fastcall FUN_0040bc5d(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401798;
  if ((void *)param_1[3] != (void *)0x0) {
    FUN_004064a3((void *)param_1[3]);
  }
  o_free(param_1[5]);
  param_1[2] = 0xc0000001;
  return;
}



/* Function: FUN_0040bc8d */

void __thiscall FUN_0040bc8d(void *this,int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int *local_8;
  
  local_8 = *(int **)((int)this + 0x10);
  if ((int *)*local_8 != param_1) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 4);
      (*(code *)PTR_guard_check_icall_00411278)(param_1);
      (*pcVar1)();
    }
    piVar2 = (int *)*local_8;
    *local_8 = (int)param_1;
    local_8 = piVar2;
    FUN_00406930((int *)&local_8);
  }
  *(undefined4 *)
   (*(int *)((int)this + 0x14) + (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 2) * 4)
       = param_2;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 4;
  return;
}



/* Function: FUN_0040bcf0 */

undefined4 * __thiscall FUN_0040bcf0(void *this,byte param_1)

{
  FUN_0040bc5d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040bd20 */

void FUN_0040bd20(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  WindowsCreateString(L"Windows.ApplicationModel.Activation.CommandLineActivationCompletedEventArgs"
                      ,0x4b,param_2);
  return;
}



/* Function: FUN_0040bd50 */

undefined4 FUN_0040bd50(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}



/* Function: FUN_0040bd70 */

void FUN_0040bd70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040ca10(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040bd90 */

void FUN_0040bd90(int *param_1,int *param_2,int *param_3)

{
  FUN_0040cb70(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040bdb0 */

void FUN_0040bdb0(int *param_1)

{
  FUN_0040ca80(param_1);
  return;
}



/* Function: FUN_0040bdd0 */

void FUN_0040bdd0(int param_1)

{
  FUN_0040cb10(param_1);
  return;
}



/* Function: FUN_0040bde1 */

undefined4 * __fastcall FUN_0040bde1(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  
  puVar1 = param_1 + 1;
  FUN_004078bc(puVar1);
  piVar3 = DAT_004105b8;
  param_1[8] = 1;
  *param_1 = &PTR_FUN_00401600;
  *puVar1 = &PTR_FUN_004015dc;
  param_1[5] = &PTR_FUN_004015cc;
  param_1[6] = &PTR_FUN_004015b0;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar3);
    (*pcVar2)();
  }
  param_1[9] = 0;
  *param_1 = &PTR_FUN_0040177c;
  param_1[5] = &PTR_FUN_00401748;
  param_1[6] = &PTR_FUN_0040172c;
  *puVar1 = &PTR_FUN_00401758;
  return param_1;
}



/* Function: FUN_0040be57 */

void __fastcall FUN_0040be57(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0040177c;
  param_1[1] = &PTR_FUN_00401758;
  param_1[5] = &PTR_FUN_00401748;
  param_1[6] = &PTR_FUN_0040172c;
  FUN_0040cead((int)param_1);
  return;
}



/* Function: FUN_0040be80 */

undefined4 * __thiscall FUN_0040be80(void *this,byte param_1)

{
  FUN_0040be57((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040beb0 */

void FUN_0040beb0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  WindowsCreateString(L"Windows.ApplicationModel.Activation.CommandLineActivationOperation",0x42,
                      param_2);
  return;
}



/* Function: FUN_0040bee0 */

void FUN_0040bee0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040c710(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040bf00 */

void FUN_0040bf00(int *param_1,int *param_2,int *param_3)

{
  FUN_0040d278(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040bf20 */

void FUN_0040bf20(int *param_1)

{
  FUN_0040c780(param_1);
  return;
}



/* Function: FUN_0040bf40 */

void FUN_0040bf40(int param_1)

{
  FUN_0040c810(param_1);
  return;
}



/* Function: FUN_0040bf51 */

undefined4 * __fastcall FUN_0040bf51(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  
  *param_1 = &PTR_o__purecall_00401584;
  InitializeSRWLock((PSRWLOCK)(param_1 + 1));
  param_1[3] = 0;
  puVar1 = param_1 + 5;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_004078bc(puVar1);
  piVar3 = DAT_004105b8;
  param_1[0xb] = 1;
  *param_1 = &PTR_FUN_00401674;
  param_1[4] = &PTR_FUN_00401664;
  *puVar1 = &PTR_FUN_00401640;
  param_1[9] = &PTR_FUN_0040161c;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar3);
    (*pcVar2)();
  }
  *param_1 = &PTR_FUN_004016fc;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[4] = &PTR_FUN_004016ec;
  *puVar1 = &PTR_FUN_004016c8;
  param_1[9] = &PTR_FUN_004016a4;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x10));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x11));
  return param_1;
}



/* Function: FUN_0040bffd */

void __fastcall FUN_0040bffd(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_004016fc;
  param_1[4] = &PTR_FUN_004016ec;
  param_1[5] = &PTR_FUN_004016c8;
  param_1[9] = &PTR_FUN_004016a4;
  piVar1 = (int *)param_1[0xf];
  if (piVar1 != (int *)0x0) {
    param_1[0xf] = 0;
    FUN_0040daf0(piVar1);
  }
  WindowsDeleteString(param_1[0xd]);
  param_1[0xd] = 0;
  WindowsDeleteString(param_1[0xc]);
  param_1[0xc] = 0;
  FUN_0040cfcd((int)param_1);
  return;
}



/* Function: FUN_0040c060 */

undefined4 * __thiscall FUN_0040c060(void *this,byte param_1)

{
  FUN_0040bffd((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040c090 */

undefined4 FUN_0040c090(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}



/* Function: FUN_0040c0ac */

uint __fastcall FUN_0040c0ac(int param_1)

{
  uint uVar1;
  int unaff_retaddr;
  int iStackY_18;
  
  uVar1 = FUN_00407c56((void *)(param_1 + 0x30),(int *)&stack0x00000004);
  if ((int)uVar1 < 0) {
    iStackY_18 = 0x1f;
  }
  else {
    uVar1 = FUN_00407c56((void *)(param_1 + 0x34),(int *)&stack0x00000008);
    if (-1 < (int)uVar1) {
      return 0;
    }
    iStackY_18 = 0x20;
  }
  FUN_00405876(unaff_retaddr,iStackY_18,0x403bb0,uVar1);
  return uVar1;
}



/* Function: FUN_0040c110 */

uint __thiscall FUN_0040c110(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int unaff_retaddr;
  int *local_8;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x80070057;
    local_8 = (int *)this;
  }
  else {
    local_8 = (int *)0x0;
    FUN_004090cf((int *)&local_8);
    uVar1 = FUN_0040d111((int)param_2,&local_8);
    if (-1 < (int)uVar1) {
      if (local_8 == (int *)0x0) {
        uVar1 = 0x80070057;
      }
      else {
        uVar1 = FUN_0040cc6d((void *)(param_1 + 0x18),local_8,*(undefined4 *)(*param_2 + 0xc),
                             param_3);
      }
    }
    FUN_00406930((int *)&local_8);
    if (-1 < (int)uVar1) {
      return 0;
    }
  }
  FUN_00405876(unaff_retaddr,0x27,0x403bb0,uVar1);
  return uVar1;
}



/* Function: FUN_0040c1a0 */

uint FUN_0040c1a0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int unaff_retaddr;
  
  uVar1 = FUN_0040c5c1((void *)(param_1 + 0x18),param_2,param_3);
  if ((int)uVar1 < 0) {
    FUN_00405876(unaff_retaddr,0x2f,0x403bb0,uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040c1f0 */

undefined4 FUN_0040c1f0(int param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  
  SRWLock = (PSRWLOCK)(param_1 + -0x20);
  AcquireSRWLockExclusive(SRWLock);
  iVar1 = *(int *)(param_1 + -0x18);
  *(undefined1 *)(param_1 + -0x1c) = 1;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if (iVar1 == 0) {
    FUN_0040c2fa(param_1 + -0x24);
  }
  return 0;
}



/* Function: FUN_0040c240 */

uint FUN_0040c240(int param_1,undefined4 param_2)

{
  uint uVar1;
  int unaff_retaddr;
  
  uVar1 = WindowsDuplicateString(*(undefined4 *)(param_1 + 0x30),param_2);
  if ((int)uVar1 < 0) {
    FUN_00405876(unaff_retaddr,0x3c,0x403bb0,uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040c280 */

uint FUN_0040c280(int param_1,undefined4 param_2)

{
  uint uVar1;
  int unaff_retaddr;
  
  uVar1 = WindowsDuplicateString(*(undefined4 *)(param_1 + 0x34),param_2);
  if ((int)uVar1 < 0) {
    FUN_00405876(unaff_retaddr,0x43,0x403bb0,uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040c2c0 */

undefined4 FUN_0040c2c0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  return 0;
}



/* Function: FUN_0040c2e0 */

undefined4 FUN_0040c2e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return 0;
}



/* Function: FUN_0040c2fa */

void __fastcall FUN_0040c2fa(int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_0040d00b((void *)(param_1 + 0x38),&local_8);
  if (-1 < iVar1) {
    FUN_0040d095((int *)(param_1 + 0x3c));
  }
  FUN_0040ba87(&local_8);
  return;
}



/* Function: FUN_0040c340 */

undefined4 FUN_0040c340(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1);
    (*pcVar2)();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}



/* Function: FUN_0040c377 */

uint __fastcall FUN_0040c377(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_retaddr;
  undefined4 *local_8;
  
  local_8 = param_1;
  piVar2 = FUN_00409127(param_1 + 0x32);
  *piVar2 = 0;
  puVar3 = (undefined4 *)FUN_0040defa(0x48);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0x8007000e;
  }
  else {
    puVar3 = FUN_0040bf51(puVar3);
    local_8 = puVar3;
    uVar4 = FUN_0040c0ac((int)puVar3);
    if ((int)uVar4 < 0) {
      FUN_0040ba87((int *)&local_8);
    }
    else {
      pcVar1 = *(code **)*puVar3;
      (*(code *)PTR_guard_check_icall_00411278)(puVar3,&DAT_00402a7c,piVar2);
      uVar4 = (*pcVar1)();
      FUN_0040ba87((int *)&local_8);
      if (-1 < (int)uVar4) {
        return 0;
      }
    }
  }
  FUN_00405876(unaff_retaddr,0x68,0x403bb0,uVar4);
  return uVar4;
}



/* Function: FUN_0040c420 */

void FUN_0040c420(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  int unaff_retaddr;
  undefined1 auStack_34 [3];
  undefined1 uStack_31;
  int iStack_30;
  int *local_2c;
  int local_28;
  undefined1 auStack_24 [20];
  void *pvStack_10;
  uint local_c;
  
  local_c = DAT_004100c0 ^ (uint)auStack_34;
  uVar2 = FUN_0040b6e9((void *)(param_1 + -0xb0),param_2);
  if ((int)uVar2 < 0) {
    FUN_00405876(unaff_retaddr,0x80,0x403bb0,uVar2);
    goto LAB_0040c59d;
  }
  local_2c = (int *)0x0;
  local_28 = 0;
  pcVar1 = *(code **)*param_2;
  piVar3 = FUN_0040badd((int *)&local_2c);
  (*(code *)PTR_guard_check_icall_00411278)(param_2,&DAT_00403b9c,piVar3);
  uVar2 = (*pcVar1)();
  if ((int)uVar2 < 0) {
    iVar5 = 0x85;
LAB_0040c4dc:
    FUN_00405876(unaff_retaddr,iVar5,0x403bb0,uVar2);
  }
  else {
    pvStack_10 = (void *)0x0;
    DVar4 = WindowsCreateStringReference
                      (L"Windows.Foundation.PropertyValue",0x20,auStack_24,&pvStack_10);
    if ((int)DVar4 < 0) {
LAB_0040c5b3:
      FUN_004063f3(DVar4);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = FUN_0040bb0e(pvStack_10,&local_28);
    if ((int)uVar2 < 0) {
      iVar5 = 0x86;
      goto LAB_0040c4dc;
    }
    iStack_30 = 0;
    pcVar1 = *(code **)(*(int *)(param_1 + -4) + 0x18);
    piVar3 = FUN_00409127(&iStack_30);
    (*(code *)PTR_guard_check_icall_00411278)((int *)(param_1 + -4),piVar3);
    uVar2 = (*pcVar1)();
    piVar3 = local_2c;
    iVar5 = iStack_30;
    if ((int)uVar2 < 0) {
      iVar5 = 0x8a;
LAB_0040c570:
      FUN_00405876(unaff_retaddr,iVar5,0x403bb0,uVar2);
    }
    else {
      uStack_31 = 0;
      pvStack_10 = (void *)0x0;
      pcVar1 = *(code **)(*local_2c + 0x28);
      DVar4 = WindowsCreateStringReference(L"Operation",9,auStack_24,&pvStack_10);
      if ((int)DVar4 < 0) goto LAB_0040c5b3;
      (*(code *)PTR_guard_check_icall_00411278)(piVar3,pvStack_10,iVar5,&uStack_31);
      uVar2 = (*pcVar1)();
      if ((int)uVar2 < 0) {
        iVar5 = 0x8e;
        goto LAB_0040c570;
      }
    }
    FUN_00406930(&iStack_30);
  }
  FUN_0040ba87(&local_28);
  FUN_0040ba87((int *)&local_2c);
LAB_0040c59d:
  FUN_0040ded0(local_c ^ (uint)auStack_34);
  return;
}



/* Function: FUN_0040c5c1 */

int __thiscall FUN_0040c5c1(void *this,int param_1,int param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_14;
  undefined4 *local_10;
  int *local_c;
  char local_5;
  
  iVar3 = 0;
  piVar5 = (int *)0x0;
  local_14 = (int *)0x0;
  AcquireSRWLockExclusive((PSRWLOCK)((int)this + 8));
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  if (iVar1 == 0) goto LAB_0040c6ec;
  puVar2 = (undefined4 *)((*(int *)(iVar1 + 0x10) - (int)*(int **)(iVar1 + 0xc) >> 2) + -1);
  local_c = (int *)0x0;
  local_5 = '\0';
  local_10 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = **(int **)(iVar1 + 0xc);
    if ((iVar1 == param_1) && (iVar1 >> 0x1f == param_2)) {
LAB_0040c6af:
      SRWLock = (PSRWLOCK)((int)this + 4);
      AcquireSRWLockExclusive(SRWLock);
      FUN_0040cc37(&local_14,(undefined4 **)this);
      FUN_0040cc37(this,&local_c);
      piVar5 = local_14;
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
        piVar5 = local_14;
      }
    }
  }
  else {
    iVar3 = FUN_0040d215(&local_c,(uint *)&local_10);
    if (iVar3 < 0) {
      if (local_c != (int *)0x0) {
        FUN_0040daf0(local_c);
      }
      goto LAB_0040c6ec;
    }
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this;
    piVar4 = *(int **)(iVar1 + 0xc);
    local_10 = *(undefined4 **)(iVar1 + 0x14);
    if (piVar4 != *(int **)(iVar1 + 0x10)) {
      do {
        if (((local_5 == '\0') && (param_1 == *piVar4)) && (param_2 == *piVar4 >> 0x1f)) {
          local_5 = '\x01';
        }
        else {
          if (puVar2 == (undefined4 *)0x0) break;
          FUN_0040bc8d(local_c,(int *)*piVar4,*local_10);
          local_10 = local_10 + 1;
          puVar2 = (undefined4 *)((int)puVar2 + -1);
        }
                    /* WARNING: Load size is inaccurate */
        piVar4 = piVar4 + 1;
      } while (piVar4 != *(int **)(*this + 0x10));
      piVar5 = local_14;
      if (local_5 != '\0') goto LAB_0040c6af;
    }
  }
  iVar3 = 0;
  if (local_c != (int *)0x0) {
    FUN_0040daf0(local_c);
  }
LAB_0040c6ec:
  if ((PSRWLOCK)((int)this + 8) != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)((int)this + 8));
  }
  if (piVar5 != (int *)0x0) {
    FUN_0040daf0(piVar5);
  }
  return iVar3;
}



/* Function: FUN_0040c710 */

undefined4 FUN_0040c710(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_3 = 0;
  *param_2 = 0;
  puVar1 = (undefined4 *)CoTaskMemAlloc(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    *puVar1 = DAT_00402a7c;
    puVar1[1] = DAT_00402a80;
    puVar1[2] = DAT_00402a84;
    puVar1[3] = DAT_00402a88;
    puVar1[4] = DAT_00402c30;
    puVar1[5] = DAT_00402c34;
    puVar1[6] = DAT_00402c38;
    puVar1[7] = DAT_00402c3c;
    puVar1[8] = DAT_004026fc;
    puVar1[9] = DAT_00402700;
    puVar1[10] = DAT_00402704;
    puVar1[0xb] = DAT_00402708;
    *param_2 = 3;
    *param_3 = puVar1;
  }
  return uVar2;
}



/* Function: FUN_0040c780 */

int FUN_0040c780(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  piVar1 = param_1 + 0xb;
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      iVar5 = FUN_00406437((int *)(iVar3 * 2 + 0xc));
      break;
    }
    if (iVar3 == 0x7fffffff) {
      return 0x7ffffffe;
    }
    iVar5 = iVar3 + -1;
    LOCK();
    iVar4 = *piVar1;
    if (iVar3 == iVar4) {
      *piVar1 = iVar5;
      iVar4 = iVar3;
    }
    UNLOCK();
    bVar6 = iVar4 != iVar3;
    iVar3 = iVar4;
  } while (bVar6);
  if (iVar5 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x2c);
      (*(code *)PTR_guard_check_icall_00411278)(1);
      (*pcVar2)();
    }
    if (DAT_004105b8 != (int *)0x0) {
      pcVar2 = *(code **)(*DAT_004105b8 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(DAT_004105b8);
      (*pcVar2)();
    }
  }
  return iVar5;
}



/* Function: FUN_0040c810 */

int FUN_0040c810(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  piVar4 = (int *)(param_1 + 0x2c);
  iVar3 = *piVar4;
  while( true ) {
    if (iVar3 < 0) {
      iVar3 = FUN_00406407((int *)(iVar3 * 2 + 0xc));
      return iVar3;
    }
    if (iVar3 == 0x7fffffff) break;
    iVar1 = iVar3 + 1;
    LOCK();
    iVar2 = *piVar4;
    if (iVar3 == iVar2) {
      *piVar4 = iVar1;
      iVar2 = iVar3;
    }
    UNLOCK();
    bVar5 = iVar2 == iVar3;
    iVar3 = iVar2;
    if (bVar5) {
      return iVar1;
    }
  }
  return 0x7fffffff;
}



/* Function: FUN_0040c870 */

void FUN_0040c870(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  PSRWLOCK SRWLock;
  int *local_3c;
  undefined4 *local_38;
  PSRWLOCK local_34;
  undefined4 *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 local_20 [20];
  int *local_c;
  uint local_8;
  
  local_8 = DAT_004100c0 ^ (uint)&stack0xfffffffc;
  local_30 = param_2;
  SRWLock = (PSRWLOCK)(param_1 + 1);
  *param_2 = 0;
  local_34 = SRWLock;
  AcquireSRWLockExclusive(SRWLock);
  if ((char)param_1[2] == '\0') {
    local_28 = (int *)0x0;
    local_c = (int *)0x0;
    DVar2 = WindowsCreateStringReference(L"Windows.Foundation.Deferral",0x1b,local_20,&local_c);
    if ((int)DVar2 < 0) {
      FUN_004063f3(DVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_2c = local_c;
    if (local_28 != (int *)0x0) {
      pcVar1 = *(code **)(*local_28 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(local_28);
      (*pcVar1)();
    }
    iVar3 = RoGetActivationFactory(local_2c,&DAT_004028d8,&local_28);
    if (-1 < iVar3) {
      local_3c = param_1;
      if (param_1 != (int *)0x0) {
        pcVar1 = *(code **)(*param_1 + 4);
        (*(code *)PTR_guard_check_icall_00411278)(param_1);
        (*pcVar1)();
      }
      local_2c = param_1;
      pcVar1 = *(code **)(*param_1 + 4);
      (*(code *)PTR_guard_check_icall_00411278)(param_1);
      (*pcVar1)();
      this = (void *)FUN_0040defa(0x10);
      if (this == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_0040d680(this,&local_2c);
      }
      local_38 = puVar4;
      FUN_0040ba87((int *)&local_2c);
      if (puVar4 != (undefined4 *)0x0) {
        local_24 = (int *)0x0;
        pcVar1 = *(code **)(*local_28 + 0x18);
        (*(code *)PTR_guard_check_icall_00411278)(local_28,puVar4,&local_24);
        iVar3 = (*pcVar1)();
        if (-1 < iVar3) {
          param_1[3] = param_1[3] + 1;
          if (local_24 != (int *)0x0) {
            pcVar1 = *(code **)(*local_24 + 4);
            (*(code *)PTR_guard_check_icall_00411278)(local_24);
            (*pcVar1)();
          }
          *local_30 = local_24;
        }
        FUN_0040ba87((int *)&local_24);
        SRWLock = local_34;
      }
      FUN_0040ba87((int *)&local_38);
      FUN_0040ba87((int *)&local_3c);
    }
    FUN_0040ba87((int *)&local_28);
  }
  else {
    RoOriginateError(0x8000000e,0);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  FUN_0040ded0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040ca10 */

undefined4 FUN_0040ca10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_3 = 0;
  *param_2 = 0;
  puVar1 = (undefined4 *)CoTaskMemAlloc(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    *puVar1 = DAT_00402c10;
    puVar1[1] = DAT_00402c14;
    puVar1[2] = DAT_00402c18;
    puVar1[3] = DAT_00402c1c;
    puVar1[4] = DAT_00402c30;
    puVar1[5] = DAT_00402c34;
    puVar1[6] = DAT_00402c38;
    puVar1[7] = DAT_00402c3c;
    puVar1[8] = DAT_00402540;
    puVar1[9] = DAT_00402544;
    puVar1[10] = DAT_00402548;
    puVar1[0xb] = DAT_0040254c;
    *param_2 = 3;
    *param_3 = puVar1;
  }
  return uVar2;
}



/* Function: FUN_0040ca80 */

int FUN_0040ca80(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  piVar1 = param_1 + 8;
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      iVar5 = FUN_00406437((int *)(iVar3 * 2 + 0xc));
      break;
    }
    if (iVar3 == 0x7fffffff) {
      return 0x7ffffffe;
    }
    iVar5 = iVar3 + -1;
    LOCK();
    iVar4 = *piVar1;
    if (iVar3 == iVar4) {
      *piVar1 = iVar5;
      iVar4 = iVar3;
    }
    UNLOCK();
    bVar6 = iVar4 != iVar3;
    iVar3 = iVar4;
  } while (bVar6);
  if (iVar5 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x18);
      (*(code *)PTR_guard_check_icall_00411278)(1);
      (*pcVar2)();
    }
    if (DAT_004105b8 != (int *)0x0) {
      pcVar2 = *(code **)(*DAT_004105b8 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(DAT_004105b8);
      (*pcVar2)();
    }
  }
  return iVar5;
}



/* Function: FUN_0040cb10 */

int FUN_0040cb10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  piVar4 = (int *)(param_1 + 0x20);
  iVar3 = *piVar4;
  while( true ) {
    if (iVar3 < 0) {
      iVar3 = FUN_00406407((int *)(iVar3 * 2 + 0xc));
      return iVar3;
    }
    if (iVar3 == 0x7fffffff) break;
    iVar1 = iVar3 + 1;
    LOCK();
    iVar2 = *piVar4;
    if (iVar3 == iVar2) {
      *piVar4 = iVar1;
      iVar2 = iVar3;
    }
    UNLOCK();
    bVar5 = iVar2 == iVar3;
    iVar3 = iVar2;
    if (bVar5) {
      return iVar1;
    }
  }
  return 0x7fffffff;
}



/* Function: FUN_0040cb70 */

int FUN_0040cb70(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar3;
  
  iVar3 = 0;
  *param_3 = 0;
  iVar2 = FUN_00404467(param_2,(int *)&DAT_004027c4);
  if ((iVar2 == 0) && (iVar2 = FUN_00404467(extraout_ECX,&DAT_00402c10), iVar2 == 0)) {
    iVar3 = FUN_0040d306(param_1,extraout_ECX_00,param_3);
    if (iVar3 < 0) {
      return iVar3;
    }
    param_1 = (int *)*param_3;
    iVar2 = *param_1;
  }
  else {
    *param_3 = (int)param_1;
    iVar2 = *param_1;
  }
  pcVar1 = *(code **)(iVar2 + 4);
  (*(code *)PTR_guard_check_icall_00411278)(param_1);
  (*pcVar1)();
  return iVar3;
}



/* Function: FUN_0040cbe0 */

int __thiscall FUN_0040cbe0(void *this,byte param_1)

{
  FUN_0040cfcd((int)this);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_0040cc10 */

int __thiscall FUN_0040cc10(void *this,byte param_1)

{
  FUN_0040cead((int)this);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_0040cc37 */

undefined4 * __thiscall FUN_0040cc37(void *this,undefined4 **param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  puVar2 = (undefined4 *)0x0;
  if (&local_8 != param_1) {
    puVar2 = *param_1;
    *param_1 = (undefined4 *)0x0;
  }
                    /* WARNING: Load size is inaccurate */
  piVar1 = *this;
  *(undefined4 **)this = puVar2;
  if (piVar1 != (int *)0x0) {
    local_8 = (undefined4 *)this;
    FUN_0040daf0(piVar1);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040cc6d */

int __thiscall FUN_0040cc6d(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  PSRWLOCK pRVar7;
  int *local_18;
  PSRWLOCK local_14;
  undefined4 *local_10;
  undefined4 **local_c;
  int *local_8;
  
  pRVar7 = (PSRWLOCK)((int)this + 8);
  *param_3 = 0;
  param_3[1] = 0;
  local_18 = (int *)0x0;
  local_14 = pRVar7;
  local_c = (undefined4 **)this;
  AcquireSRWLockExclusive(pRVar7);
                    /* WARNING: Load size is inaccurate */
  iVar5 = *this;
  if (iVar5 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = (*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2) + 1;
  }
  puVar2 = (undefined4 *)FUN_0040defa(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    iVar5 = -0x7ff8fff2;
  }
  else {
    piVar3 = FUN_0040bb4e(puVar2);
    iVar5 = FUN_0040bb97(piVar3,uVar4);
    if (-1 < iVar5) {
      local_8 = piVar3;
      if (piVar3 != (int *)0x0) {
        FUN_00406407(piVar3 + 2);
        FUN_0040daf0(piVar3);
      }
      ppuVar1 = local_c;
      puVar2 = *local_c;
      if (puVar2 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)puVar2[3];
        local_10 = (undefined4 *)puVar2[5];
        if (puVar6 != (undefined4 *)puVar2[4]) {
          do {
            FUN_0040bc8d(piVar3,(int *)*puVar6,*local_10);
            puVar6 = puVar6 + 1;
            local_10 = local_10 + 1;
          } while (puVar6 != (undefined4 *)(*ppuVar1)[4]);
        }
      }
      *param_3 = param_1;
      param_3[1] = (int)param_1 >> 0x1f;
      FUN_0040bc8d(piVar3,param_1,param_2);
      ppuVar1 = local_c;
      pRVar7 = (PSRWLOCK)(local_c + 1);
      AcquireSRWLockExclusive(pRVar7);
      FUN_0040cc37(&local_18,ppuVar1);
      FUN_0040cc37(ppuVar1,&local_8);
      if (pRVar7 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar7);
      }
      if (local_8 != (int *)0x0) {
        FUN_0040daf0(local_8);
      }
      if (local_14 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_14);
      }
      iVar5 = 0;
      piVar3 = local_18;
      goto LAB_0040cdb7;
    }
    pRVar7 = local_14;
    if (piVar3 != (int *)0x0) {
      FUN_0040daf0(piVar3);
      pRVar7 = local_14;
    }
  }
  piVar3 = (int *)0x0;
  if (pRVar7 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(pRVar7);
  }
LAB_0040cdb7:
  if (piVar3 != (int *)0x0) {
    FUN_0040daf0(piVar3);
  }
  return iVar5;
}



/* Function: FUN_0040cdd0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0040cdd0(int param_1,int *param_2)

{
  uint *puVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = (uint *)(param_1 + 0xc);
  uVar5 = *puVar1;
  *param_2 = 0;
  if ((int)uVar5 < 0) {
LAB_0040cdf3:
    FUN_00406407((int *)(uVar5 * 2 + 8));
    *param_2 = uVar5 * 2;
  }
  else {
    this = (void *)FUN_0040defa(0x14);
    if ((this == (void *)0x0) ||
       (puVar2 = FUN_00407b25(this,param_1 + -0x14), puVar2 == (undefined4 *)0x0)) {
      return 0x8007000e;
    }
    uVar3 = (int)puVar2 >> 1 | 0x80000000;
    puVar2[3] = uVar5;
    LOCK();
    uVar4 = *puVar1;
    if (uVar5 == uVar4) {
      *puVar1 = uVar3;
      uVar4 = uVar5;
    }
    UNLOCK();
    bVar6 = uVar4 != uVar5;
    uVar5 = uVar4;
    if (bVar6) {
      do {
        if ((int)uVar5 < 0) {
          *puVar2 = &PTR_FUN_00401474;
          puVar2[3] = 0xc0000001;
          puVar2[2] = 0xc0000001;
          FUN_0040e310(puVar2);
          goto LAB_0040cdf3;
        }
        puVar2[3] = uVar5;
        LOCK();
        uVar4 = *puVar1;
        if (uVar5 == uVar4) {
          *puVar1 = uVar3;
          uVar4 = uVar5;
        }
        UNLOCK();
        bVar6 = uVar4 != uVar5;
        uVar5 = uVar4;
      } while (bVar6);
    }
    *param_2 = (int)puVar2;
  }
  return 0;
}



/* Function: FUN_0040cead */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040cead(int param_1)

{
  if (*(int *)(param_1 + 0x20) < 0) {
    FUN_00408ff0((int *)(*(int *)(param_1 + 0x20) * 2));
  }
  FUN_00406930((int *)(param_1 + 0x10));
  return;
}



/* Function: FUN_0040cef0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0040cef0(int param_1,int *param_2)

{
  uint *puVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = (uint *)(param_1 + 0x1c);
  uVar5 = *puVar1;
  *param_2 = 0;
  if ((int)uVar5 < 0) {
LAB_0040cf13:
    FUN_00406407((int *)(uVar5 * 2 + 8));
    *param_2 = uVar5 * 2;
  }
  else {
    this = (void *)FUN_0040defa(0x14);
    if ((this == (void *)0x0) ||
       (puVar2 = FUN_00407b25(this,param_1 + -0x10), puVar2 == (undefined4 *)0x0)) {
      return 0x8007000e;
    }
    uVar3 = (int)puVar2 >> 1 | 0x80000000;
    puVar2[3] = uVar5;
    LOCK();
    uVar4 = *puVar1;
    if (uVar5 == uVar4) {
      *puVar1 = uVar3;
      uVar4 = uVar5;
    }
    UNLOCK();
    bVar6 = uVar4 != uVar5;
    uVar5 = uVar4;
    if (bVar6) {
      do {
        if ((int)uVar5 < 0) {
          *puVar2 = &PTR_FUN_00401474;
          puVar2[3] = 0xc0000001;
          puVar2[2] = 0xc0000001;
          FUN_0040e310(puVar2);
          goto LAB_0040cf13;
        }
        puVar2[3] = uVar5;
        LOCK();
        uVar4 = *puVar1;
        if (uVar5 == uVar4) {
          *puVar1 = uVar3;
          uVar4 = uVar5;
        }
        UNLOCK();
        bVar6 = uVar4 != uVar5;
        uVar5 = uVar4;
      } while (bVar6);
    }
    *param_2 = (int)puVar2;
  }
  return 0;
}



/* Function: FUN_0040cfcd */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040cfcd(int param_1)

{
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_00408ff0((int *)(*(int *)(param_1 + 0x2c) * 2));
  }
  FUN_00406930((int *)(param_1 + 0x20));
  return;
}



/* Function: FUN_0040d00b */

undefined4 __thiscall FUN_0040d00b(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *local_8;
  
  uVar5 = 0;
  piVar1 = (int *)*param_1;
  local_8 = (int *)this;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1);
    (*pcVar2)();
  }
  piVar1 = local_8;
  *param_1 = 0;
  puVar3 = (undefined4 *)FUN_0040defa(0x28);
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = 0x8007000e;
  }
  else {
    piVar4 = FUN_0040bde1(puVar3);
    piVar4[9] = *piVar1;
    pcVar2 = *(code **)(*piVar4 + 4);
    local_8 = piVar4;
    (*(code *)PTR_guard_check_icall_00411278)(piVar4);
    (*pcVar2)();
    *param_1 = (int)piVar4;
    FUN_0040ba87((int *)&local_8);
  }
  return uVar5;
}



/* Function: FUN_0040d095 */

int __fastcall FUN_0040d095(int *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_c [2];
  
  iVar3 = 0;
  SRWLock = (PSRWLOCK)(param_1 + 1);
  local_c[0] = 0;
  AcquireSRWLockExclusive(SRWLock);
  piVar1 = (int *)*param_1;
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    FUN_00406407(piVar1 + 2);
    piVar2 = piVar1;
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_0040d550(piVar2,param_1,local_c,(int *)&stack0x00000008);
    FUN_0040daf0(piVar2);
  }
  return iVar3;
}



/* Function: FUN_0040d111 */

int __fastcall FUN_0040d111(int param_1,undefined4 *param_2)

{
  int **ppiVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_20;
  int *local_1c;
  int local_18 [2];
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  *param_2 = 0;
  local_8 = (int *)0x0;
  FUN_0040ba87(local_18 + 1);
  FUN_0040ba87(local_18);
  if (param_1 == 0) {
    local_20 = 0;
    local_1c = local_8;
    FUN_0040ba87((int *)&local_1c);
    FUN_0040ba87(&local_20);
  }
  else {
    if (local_8 != (int *)0x0) {
      pcVar2 = *(code **)(*local_8 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(local_8);
      (*pcVar2)();
    }
    iVar4 = RoGetAgileReference(0,&DAT_00402c00,param_1,&local_8);
    if (iVar4 < 0) goto LAB_0040d200;
  }
  piVar3 = local_8;
  local_c = local_8;
  local_8 = (int *)0x0;
  puVar5 = (undefined4 *)FUN_0040defa(0x28);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00409bf4(puVar5);
    ppiVar1 = (int **)(puVar5 + 9);
    *ppiVar1 = (int *)0x0;
    if (ppiVar1 != &local_c) {
      local_c = (int *)0x0;
      *ppiVar1 = piVar3;
    }
    *puVar5 = &PTR_FUN_0040155c;
    puVar5[1] = &PTR_FUN_00401230;
  }
  local_10 = puVar5;
  FUN_0040ba87((int *)&local_c);
  if (puVar5 == (undefined4 *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  else {
    local_10 = (undefined4 *)0x0;
    *param_2 = puVar5;
    iVar4 = 0;
  }
  FUN_00406930((int *)&local_10);
LAB_0040d200:
  FUN_0040ba87((int *)&local_8);
  return iVar4;
}



/* Function: FUN_0040d215 */

int __fastcall FUN_0040d215(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  int *this;
  int iVar2;
  
  *param_1 = 0;
  puVar1 = (undefined4 *)FUN_0040defa(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  else {
    this = FUN_0040bb4e(puVar1);
    iVar2 = FUN_0040bb97(this,*param_2);
    if (-1 < iVar2) {
      if (this != (int *)0x0) {
        FUN_00406407(this + 2);
      }
      *param_1 = this;
      iVar2 = 0;
    }
    if (this != (int *)0x0) {
      FUN_0040daf0(this);
    }
  }
  return iVar2;
}



/* Function: FUN_0040d278 */

int __fastcall FUN_0040d278(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar3;
  
  iVar3 = 0;
  *param_3 = 0;
  iVar2 = FUN_00404467(param_2,(int *)&DAT_004027c4);
  if ((iVar2 == 0) && (iVar2 = FUN_00404467(extraout_ECX,&DAT_00402c10), iVar2 == 0)) {
    iVar2 = FUN_00404467(extraout_ECX_00,&DAT_00402a7c);
    if (iVar2 == 0) {
      iVar3 = FUN_0040d37f(param_1 + 4,extraout_ECX_01,param_3);
      if (iVar3 < 0) {
        return iVar3;
      }
    }
    else {
      *param_3 = (int)param_1;
    }
    pcVar1 = *(code **)(*(int *)*param_3 + 4);
    (*(code *)PTR_guard_check_icall_00411278)((int *)*param_3);
    (*pcVar1)();
  }
  else {
    *param_3 = (int)param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(param_1);
    (*pcVar1)();
    iVar3 = 0;
  }
  return iVar3;
}



/* Function: FUN_0040d306 */

int __thiscall FUN_0040d306(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  
  iVar1 = FUN_00404467(param_1,&DAT_00402c10);
  if (iVar1 == 0) {
    iVar1 = FUN_0040787c((void *)((int)this + 4),extraout_ECX,param_2);
    if (iVar1 == -0x7fffbffe) {
      iVar1 = FUN_00404467(param_1,&DAT_00402c30);
      if (iVar1 == 0) {
        iVar1 = FUN_00404467(extraout_ECX_00,&DAT_00402540);
        if (iVar1 == 0) {
          return -0x7fffbffe;
        }
        *param_2 = (int)this + 0x18;
      }
      else {
        *param_2 = (int)this + 0x14;
      }
      iVar1 = 0;
    }
  }
  else {
    *param_2 = (int)this;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_0040d37f */

int __thiscall FUN_0040d37f(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  
  iVar1 = FUN_00404467(param_1,&DAT_00402c30);
  if (iVar1 == 0) {
    iVar1 = FUN_0040787c((void *)((int)this + 4),extraout_ECX,param_2);
    if (iVar1 == -0x7fffbffe) {
      iVar1 = FUN_00404467(param_1,&DAT_004026fc);
      if (iVar1 == 0) {
        iVar1 = -0x7fffbffe;
      }
      else {
        *param_2 = (int)this + 0x14;
        iVar1 = 0;
      }
    }
  }
  else {
    *param_2 = (int)this;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_0040d3f0 */

undefined4 FUN_0040d3f0(int param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  SRWLock = (PSRWLOCK)(iVar1 + 4);
  AcquireSRWLockExclusive(SRWLock);
  if (*(int *)(iVar1 + 0xc) == 0) {
    uVar4 = 0x8000000e;
    RoOriginateError(0x8000000e,0);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_00407c93(0x8000000e);
  }
  else {
    iVar3 = *(int *)(iVar1 + 0xc) + -1;
    uVar4 = 0;
    *(int *)(iVar1 + 0xc) = iVar3;
    if ((*(char *)(iVar1 + 8) == '\0') || (bVar2 = true, iVar3 != 0)) {
      bVar2 = false;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    if (bVar2) {
      FUN_0040c2fa(iVar1);
    }
  }
  return uVar4;
}



/* Function: FUN_0040d470 */

undefined4 FUN_0040d470(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00404467(param_2,(int *)&DAT_004027c4);
  if (iVar1 == 0) {
    iVar1 = FUN_00404467(extraout_ECX,(int *)&DAT_0040272c);
    if (iVar1 == 0) {
      return 0x80004002;
    }
    *param_3 = param_1;
    pcVar2 = *(code **)(*param_1 + 4);
  }
  else {
    *param_3 = param_1;
    pcVar2 = *(code **)(*param_1 + 4);
  }
  (*(code *)PTR_guard_check_icall_00411278)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_0040d4e0 */

int FUN_0040d4e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *local_8;
  
  local_8 = (int *)0x0;
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    (*(code *)PTR_guard_check_icall_00411278)(piVar1,&DAT_00402c00,&local_8);
    iVar3 = (*pcVar2)();
    if (iVar3 < 0) goto LAB_0040d530;
  }
  pcVar2 = *(code **)(*local_8 + 0xc);
  (*(code *)PTR_guard_check_icall_00411278)(local_8,param_2,param_3);
  iVar3 = (*pcVar2)();
LAB_0040d530:
  FUN_00406930((int *)&local_8);
  if (iVar3 < 0) {
    FUN_00407c93(iVar3);
  }
  return iVar3;
}



/* Function: FUN_0040d550 */

int __fastcall FUN_0040d550(int *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *local_10;
  int local_c;
  int *local_8;
  
  piVar6 = (int *)0x0;
  local_10 = param_2;
  if (param_1 != (int *)0x0) {
    FUN_00406407(param_1 + 2);
    piVar6 = param_1;
  }
  local_c = piVar6[5];
  local_8 = (int *)piVar6[3];
  iVar3 = 0;
  do {
    if (local_8 == (int *)piVar6[4]) {
LAB_0040d66b:
      FUN_0040daf0(piVar6);
      return iVar3;
    }
    pcVar1 = *(code **)(*(int *)*local_8 + 0xc);
    (*(code *)PTR_guard_check_icall_00411278)
              ((int *)*local_8,*param_3,-(uint)(*param_4 != 0) & *param_4 + 0x18U);
    iVar2 = (*pcVar1)();
    if ((((iVar2 == -0x7ffefef8) || (iVar2 == -0x7ff8f946)) || (iVar2 == -0x76fdffff)) ||
       ((iVar2 == -0x7ffefff9 || (iVar2 == -0x7ffeffee)))) {
      RoTransformError(iVar2,0,0);
      FUN_0040c5c1(local_10,*local_8,*local_8 >> 0x1f);
LAB_0040d605:
      iVar2 = 0;
    }
    else if (iVar2 < 0) {
      iVar3 = IsErrorPropagationEnabled();
      if (iVar3 == 0) {
        RoTransformError(iVar2,0,0);
        goto LAB_0040d605;
      }
      local_c = 0;
      local_10 = &local_c;
      piVar4 = FUN_00408d6b(&local_10);
      iVar5 = RoGetMatchingRestrictedErrorInfo(iVar2,piVar4);
      if (-1 < iVar5) {
        iVar5 = RoReportFailedDelegate(*local_8,local_c);
      }
      FUN_00406930(&local_c);
      iVar3 = 0;
      if (iVar5 < 0) {
        iVar3 = iVar2;
      }
      goto LAB_0040d66b;
    }
    local_c = local_c + 4;
    local_8 = local_8 + 1;
    iVar3 = iVar2;
  } while( true );
}



/* Function: FUN_0040d680 */

undefined4 * __thiscall FUN_0040d680(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  
  piVar3 = DAT_004105b8;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined ***)this = &PTR_FUN_00401548;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00411278)(piVar3);
    (*pcVar2)();
  }
  puVar1 = (undefined4 *)((int)this + 0xc);
  *puVar1 = 0;
  if (puVar1 != param_1) {
    *puVar1 = *param_1;
    *param_1 = 0;
  }
  *(undefined ***)this = &PTR_FUN_00401570;
  return (undefined4 *)this;
}



/* Function: FUN_0040d6e0 */

int __thiscall FUN_0040d6e0(void *this,byte param_1)

{
  FUN_0040ba87((int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_0040d720 */

int __thiscall FUN_0040d720(void *this,byte param_1)

{
  FUN_0040d747((int)this);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_0040d747 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040d747(int param_1)

{
  FUN_0040ba87((int *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x20) = 0xc0000001;
  FUN_00406930((int *)(param_1 + 0x10));
  return;
}



/* Function: FUN_0040d790 */

int __thiscall FUN_0040d790(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_0040d7c0 */

void FUN_0040d7c0(int param_1)

{
  FUN_0040ca80((int *)(param_1 + -0x18));
  return;
}



/* Function: FUN_0040d7d0 */

void FUN_0040d7d0(int param_1,int *param_2,int *param_3)

{
  FUN_0040cb70((int *)(param_1 + -0x18),param_2,param_3);
  return;
}



/* Function: FUN_0040d7e0 */

void FUN_0040d7e0(int param_1,int *param_2,int *param_3)

{
  FUN_0040bf00((int *)(param_1 + -0x14),param_2,param_3);
  return;
}



/* Function: FUN_0040d7f0 */

void FUN_0040d7f0(int param_1)

{
  FUN_0040cb10(param_1 + -0x14);
  return;
}



/* Function: FUN_0040d800 */

void FUN_0040d800(int param_1)

{
  FUN_0040c780((int *)(param_1 + -0x14));
  return;
}



/* Function: FUN_0040d810 */

void FUN_0040d810(int param_1)

{
  FUN_0040c810(param_1 + -0x10);
  return;
}



/* Function: FUN_0040d820 */

void FUN_0040d820(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040ca10(param_1 + -0x18,param_2,param_3);
  return;
}



/* Function: FUN_0040d830 */

void FUN_0040d830(int param_1)

{
  FUN_0040cb10(param_1 + -0x18);
  return;
}



/* Function: FUN_0040d840 */

void FUN_0040d840(int param_1)

{
  FUN_0040bdb0((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0040d850 */

void FUN_0040d850(int param_1)

{
  FUN_0040c810(param_1 + -0x14);
  return;
}



/* Function: FUN_0040d860 */

void FUN_0040d860(int param_1,undefined4 *param_2)

{
  FUN_0040beb0(param_1 + -0x24,param_2);
  return;
}



/* Function: FUN_0040d870 */

void FUN_0040d870(int param_1)

{
  FUN_0040bf20((int *)(param_1 + -0x24));
  return;
}



/* Function: FUN_0040d880 */

void FUN_0040d880(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040c710(param_1 + -0x24,param_2,param_3);
  return;
}



/* Function: FUN_0040d890 */

void FUN_0040d890(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_0040d8a0 */

void FUN_0040d8a0(int param_1)

{
  FUN_0040ca80((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0040d8b0 */

void FUN_0040d8b0(int param_1,int *param_2,int *param_3)

{
  FUN_0040cb70((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0040d8c0 */

void FUN_0040d8c0(int param_1,int *param_2,int *param_3)

{
  FUN_0040bd90((int *)(param_1 + -0x14),param_2,param_3);
  return;
}



/* Function: FUN_0040d8d0 */

void FUN_0040d8d0(int param_1)

{
  FUN_0040bf40(param_1 + -0x24);
  return;
}



/* Function: FUN_0040d8e0 */

void FUN_0040d8e0(int param_1)

{
  FUN_0040bdd0(param_1 + -0x14);
  return;
}



/* Function: FUN_0040d8f0 */

void FUN_0040d8f0(int param_1,undefined4 *param_2)

{
  FUN_0040bd50(param_1 + -0x18,param_2);
  return;
}



/* Function: FUN_0040d900 */

void FUN_0040d900(int param_1,int *param_2,int *param_3)

{
  FUN_0040bd90((int *)(param_1 + -0x18),param_2,param_3);
  return;
}



/* Function: FUN_0040d910 */

void FUN_0040d910(int param_1,int *param_2,int *param_3)

{
  FUN_0040bf00((int *)(param_1 + -0x24),param_2,param_3);
  return;
}



/* Function: FUN_0040d920 */

void FUN_0040d920(int param_1)

{
  FUN_0040cb10(param_1 + -4);
  return;
}



/* Function: FUN_0040d930 */

void FUN_0040d930(int param_1,undefined4 *param_2)

{
  FUN_0040bd20(param_1 + -0x18,param_2);
  return;
}



/* Function: FUN_0040d940 */

void FUN_0040d940(int param_1)

{
  FUN_0040bdd0(param_1 + -0x18);
  return;
}



/* Function: FUN_0040d950 */

void FUN_0040d950(int param_1)

{
  FUN_0040c780((int *)(param_1 + -0x24));
  return;
}



/* Function: FUN_0040d960 */

void FUN_0040d960(int param_1)

{
  FUN_0040bf20((int *)(param_1 + -0x10));
  return;
}



/* Function: FUN_0040d970 */

void FUN_0040d970(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040bee0(param_1 + -0x24,param_2,param_3);
  return;
}



/* Function: FUN_0040d980 */

void FUN_0040d980(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -0x24,param_2);
  return;
}



/* Function: FUN_0040d990 */

void FUN_0040d990(int param_1)

{
  FUN_0040bdb0((int *)(param_1 + -0x14));
  return;
}



/* Function: FUN_0040d9a0 */

void FUN_0040d9a0(int param_1)

{
  FUN_0040c810(param_1 + -0x24);
  return;
}



/* Function: FUN_0040d9b0 */

void FUN_0040d9b0(int param_1)

{
  FUN_0040bf20((int *)(param_1 + -0x14));
  return;
}



/* Function: FUN_0040d9c0 */

void FUN_0040d9c0(int param_1)

{
  FUN_0040bf40(param_1 + -0x10);
  return;
}



/* Function: FUN_0040d9d0 */

void FUN_0040d9d0(int param_1)

{
  FUN_0040bdb0((int *)(param_1 + -0x18));
  return;
}



/* Function: FUN_0040d9e0 */

void FUN_0040d9e0(int param_1,int *param_2,int *param_3)

{
  FUN_0040bd90((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0040d9f0 */

void FUN_0040d9f0(int param_1,undefined4 *param_2)

{
  FUN_00408df0(param_1 + -0x18,param_2);
  return;
}



/* Function: FUN_0040da00 */

void FUN_0040da00(int param_1)

{
  FUN_0040ca80((int *)(param_1 + -0x14));
  return;
}



/* Function: FUN_0040da10 */

void FUN_0040da10(int param_1,int *param_2,int *param_3)

{
  FUN_0040cb70((int *)(param_1 + -0x14),param_2,param_3);
  return;
}



/* Function: FUN_0040da20 */

void FUN_0040da20(void)

{
  FUN_00408dd0();
  return;
}



/* Function: FUN_0040da30 */

void FUN_0040da30(int param_1,int *param_2,int *param_3)

{
  FUN_0040bf00((int *)(param_1 + -0x10),param_2,param_3);
  return;
}



/* Function: FUN_0040da40 */

void FUN_0040da40(int param_1)

{
  FUN_0040bf40(param_1 + -0x14);
  return;
}



/* Function: FUN_0040da50 */

void FUN_0040da50(int param_1)

{
  FUN_0040bdd0(param_1 + -4);
  return;
}



/* Function: FUN_0040da60 */

void FUN_0040da60(int param_1)

{
  FUN_0040c780((int *)(param_1 + -0x10));
  return;
}



/* Function: FUN_0040da70 */

void FUN_0040da70(int param_1,undefined4 *param_2)

{
  FUN_00407fc0(param_1 + -0x24,param_2);
  return;
}



/* Function: FUN_0040da80 */

void FUN_0040da80(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040bd70(param_1 + -0x18,param_2,param_3);
  return;
}



/* Function: FUN_0040da90 */

undefined4 FUN_0040da90(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  int *extraout_EDX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00404467(param_2,(int *)&DAT_004027c4);
  if (iVar1 == 0) {
    iVar1 = FUN_00404467(extraout_ECX,extraout_EDX);
    if (iVar1 == 0) {
      return 0x80004002;
    }
    *param_3 = param_1;
    pcVar2 = *(code **)(*param_1 + 4);
  }
  else {
    *param_3 = param_1;
    pcVar2 = *(code **)(*param_1 + 4);
  }
  (*(code *)PTR_guard_check_icall_00411278)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_0040daf0 */

int FUN_0040daf0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00406437(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0xc);
      (*(code *)PTR_guard_check_icall_00411278)(1);
      (*pcVar1)();
    }
    if (DAT_004105b8 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_004105b8 + 8);
      (*(code *)PTR_guard_check_icall_00411278)(DAT_004105b8);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_0040db49 */

void FUN_0040db49(void)

{
  BOOL BVar1;
  FARPROC pFVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  HMODULE local_8;
  
  local_8 = (HMODULE)0x0;
  BVar1 = GetModuleHandleExA(2,"ntdll.dll",&local_8);
  if (((BVar1 != 0) && (local_8 != (HMODULE)0x0)) &&
     (pFVar2 = GetProcAddress(local_8,"MicrosoftTelemetryAssertTriggeredUM"), pFVar2 != (FARPROC)0x0
     )) {
    local_18 = 0;
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
    local_28 = 0xb;
    local_24 = 0x400000;
    local_c = 1;
    local_1c = 0;
    (*(code *)PTR_guard_check_icall_00411278)(&local_28);
    (*pFVar2)();
  }
  return;
}



/* Function: FUN_0040dbc4 */

void FUN_0040dbc4(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_00403c38,DelayLoadFailureHook_exref,param_2,DAT_00403c38);
  return;
}



/* Function: FUN_0040dc00 */

undefined4 FUN_0040dc00(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040dc25();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040dc31();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_0040dc25 */

undefined * FUN_0040dc25(void)

{
  return &DAT_00410140;
}



/* Function: FUN_0040dc31 */

undefined * FUN_0040dc31(void)

{
  return &DAT_00410148;
}



/* Function: FUN_0040dc40 */

undefined4 FUN_0040dc40(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040dc25();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040dc31();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_0040dc70 */

void FUN_0040dc70(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(1);
  uVar3 = FUN_0040e411();
  o__set_fmode(uVar3);
  uVar3 = FUN_0040e408();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_0040e69c();
    FUN_0040e2f3(FUN_0040e6d0);
    uVar3 = FUN_0040e3fe();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_0040e41d();
      guard_check_icall();
      guard_check_icall();
      FUN_0040e438();
      uVar3 = FUN_0040e408();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_0040e42f();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_0040e408();
      iVar5 = thunk_FUN_0040e408();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_0040e4a4();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040dd10 */

undefined4 FUN_0040dd10(void)

{
  FUN_0040e469();
  return 0;
}



/* Function: FUN_0040dd20 */

void FUN_0040dd20(void)

{
  undefined4 uVar1;
  
  FUN_0040e614();
  uVar1 = FUN_0040e408();
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
  uint unaff_ESI;
  undefined4 local_24;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_00410150 != 1) {
      if (DAT_00410150 == 0) {
        DAT_00410150 = 1;
        iVar4 = initterm_e(&DAT_00401b38,&DAT_00401b4c);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_00401b18,&DAT_00401b34);
        DAT_00410150 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_0040e48c();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_00411278)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_0040e498();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      o__get_initial_wide_environment();
      o___p___wargv();
      piVar5 = (int *)o___p___argc();
      unaff_ESI = FUN_004067e0(*piVar5);
      uVar6 = FUN_0040e5cc();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_0040deab;
    }
  }
  FUN_0040e4a4();
LAB_0040deab:
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



/* Function: FUN_0040ded0 */

void __fastcall FUN_0040ded0(int param_1)

{
  if (param_1 == DAT_004100c0) {
    return;
  }
  FUN_0040e7d7();
  return;
}



/* Function: FUN_0040dee4 */

void __cdecl FUN_0040dee4(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_0040defa */

void FUN_0040defa(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040f61a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0040e8e4(param_1);
  FUN_0040df3c();
  return;
}



/* Function: Catch_All@0040df34 */

undefined * Catch_All_0040df34(void)

{
  return &DAT_0040df3a;
}



/* Function: FUN_0040df3c */

void FUN_0040df3c(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: `eh_vector_destructor_iterator' */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,unsigned int,void
   (__thiscall*)(void *))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  undefined4 local_14;
  
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)0x40df96;
    (*(code *)PTR_guard_check_icall_00411278)();
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  FUN_0040dfcc();
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0040dfcc */

void FUN_0040dfcc(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  uint unaff_EDI;
  
  if (in_AL == '\0') {
    __ArrayUnwind(unaff_ESI,unaff_EBX,unaff_EDI,*(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* Function: __ArrayUnwind */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,unsigned int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2019 Release */

void __ArrayUnwind(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_14;
  
  for (uVar1 = 0; uVar1 != param_3; uVar1 = uVar1 + 1) {
    pvVar2 = (void *)0x40e00d;
    (*(code *)PTR_guard_check_icall_00411278)();
    (*param_4)(pvVar2);
  }
  ExceptionList = local_14;
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
      if (DAT_00410154 != 0) {
        uVar3 = DAT_00410154;
        uVar1 = DAT_00410154;
      }
      DAT_00410154 = uVar1;
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
    DAT_00410171 = 1;
  }
  FUN_0040e91c();
  cVar1 = FUN_0040e42f();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_0040e42f();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_0040e42f();
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
  
  if (DAT_00410170 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_0040e4a4();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_00410158 = 0xffffffff;
    _DAT_0041015c = 0xffffffff;
    _DAT_00410160 = 0xffffffff;
    _DAT_00410164 = 0xffffffff;
    _DAT_00410168 = 0xffffffff;
    _DAT_0041016c = 0xffffffff;
LAB_0040e1b4:
    DAT_00410170 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_00410158);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_00410164);
      if (uVar3 == 0) goto LAB_0040e1b4;
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
  iVar1 = DAT_00410154;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_00410154 = 0;
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
  if ((DAT_00410171 == '\0') || (param_2 == '\0')) {
    FUN_0040e42f();
    FUN_0040e42f();
  }
  return 1;
}



/* Function: FUN_0040e2bd */

undefined4 __cdecl FUN_0040e2bd(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_00410158 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_00410158,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_0040e2f3 */

int __cdecl FUN_0040e2f3(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040e2bd(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_0040e310 */

void __cdecl FUN_0040e310(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_0040e330 */

undefined4 * __thiscall FUN_0040e330(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040e358 */

uint FUN_0040e358(void)

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
  if ((DAT_004100c0 == 0xbb40e64e) || ((DAT_004100c0 & 0xffff0000) == 0)) {
    DAT_004100c0 = FUN_0040e358();
    if (DAT_004100c0 == 0xbb40e64e) {
      DAT_004100c0 = 0xbb40e64f;
    }
    else if ((DAT_004100c0 & 0xffff0000) == 0) {
      DAT_004100c0 = DAT_004100c0 | (DAT_004100c0 | 0x4711) << 0x10;
    }
  }
  DAT_00410100 = ~DAT_004100c0;
  return;
}



/* Function: FUN_0040e3fe */

undefined4 FUN_0040e3fe(void)

{
  return 1;
}



/* Function: FUN_0040e408 */

undefined4 FUN_0040e408(void)

{
  return 0;
}



/* Function: FUN_0040e411 */

undefined4 FUN_0040e411(void)

{
  return 0x4000;
}



/* Function: FUN_0040e41d */

void FUN_0040e41d(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_00410178);
  return;
}



/* Function: FUN_0040e42f */

undefined1 FUN_0040e42f(void)

{
  return 1;
}



/* Function: FUN_0040e438 */

void FUN_0040e438(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_0040e4a4();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_0040e469 */

void FUN_0040e469(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040dc25();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040dc31();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_0040e48c */

undefined * FUN_0040e48c(void)

{
  return &DAT_004105c4;
}



/* Function: FUN_0040e498 */

undefined * FUN_0040e498(void)

{
  return &DAT_004105c0;
}



/* Function: FUN_0040e4a4 */

void FUN_0040e4a4(void)

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
  FUN_0040e68e();
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
    FUN_0040e68e();
  }
  return;
}



/* Function: thunk_FUN_0040e408 */

undefined4 thunk_FUN_0040e408(void)

{
  return 0;
}



/* Function: FUN_0040e5cc */

uint FUN_0040e5cc(void)

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



/* Function: FUN_0040e614 */

void FUN_0040e614(void)

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



/* Function: FUN_0040e68e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e68e(void)

{
  _DAT_00410180 = 0;
  return;
}



/* Function: FUN_0040e69c */

/* WARNING: Removing unreachable block (ram,0x0040e6ae) */
/* WARNING: Removing unreachable block (ram,0x0040e6af) */
/* WARNING: Removing unreachable block (ram,0x0040e6b5) */
/* WARNING: Removing unreachable block (ram,0x0040e6bf) */
/* WARNING: Removing unreachable block (ram,0x0040e6c6) */

void FUN_0040e69c(void)

{
  return;
}



/* Function: FUN_0040e6d0 */

/* WARNING: Removing unreachable block (ram,0x0040e6e2) */
/* WARNING: Removing unreachable block (ram,0x0040e6e3) */
/* WARNING: Removing unreachable block (ram,0x0040e6e9) */
/* WARNING: Removing unreachable block (ram,0x0040e6f3) */
/* WARNING: Removing unreachable block (ram,0x0040e6fa) */

void FUN_0040e6d0(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004100c0 ^ (uint)&param_2;
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
  
  iVar1 = FUN_0040ef4a(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_004100c0,FUN_0040ded0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040e7a7 */

void __cdecl FUN_0040e7a7(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0040e7d7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e7d7(void)

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
  _DAT_00410280 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00410288 = (undefined4)uVar9;
  _DAT_00410298 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041029c = &stack0x00000004;
  _DAT_004101d8 = 0x10001;
  _DAT_00410188 = 0xc0000409;
  _DAT_0041018c = 1;
  _DAT_00410198 = 1;
  DAT_0041019c = 2;
  _DAT_00410194 = unaff_retaddr;
  _DAT_00410264 = in_GS;
  _DAT_00410268 = in_FS;
  _DAT_0041026c = in_ES;
  _DAT_00410270 = in_DS;
  _DAT_00410274 = unaff_EDI;
  _DAT_00410278 = unaff_ESI;
  _DAT_0041027c = unaff_EBX;
  _DAT_00410284 = uVar3;
  _DAT_0041028c = unaff_EBP;
  DAT_00410290 = unaff_retaddr;
  _DAT_00410294 = in_CS;
  _DAT_004102a0 = in_SS;
  FUN_0040e7a7((_EXCEPTION_POINTERS *)&PTR_DAT_00401008);
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040edd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_0040e8e4 */

void __cdecl FUN_0040e8e4(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  do {
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x40e900;
    iVar1 = o_malloc();
    if (iVar1 != 0) {
      return;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x40e8f3;
    iVar1 = o__callnewh();
  } while (iVar1 != 0);
  if (param_1 != -1) {
    FUN_0040ec12();
    return;
  }
  puStack_8 = &stack0xfffffffc;
  FUN_0040eb93(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_0040fb1c);
}



/* Function: FUN_0040e91c */

/* WARNING: Removing unreachable block (ram,0x0040e98d) */
/* WARNING: Removing unreachable block (ram,0x0040e951) */
/* WARNING: Removing unreachable block (ram,0x0040ea05) */

undefined4 FUN_0040e91c(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_004104a4 = 0;
  DAT_00410104 = DAT_00410104 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00410104;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_004104a8 = DAT_004104a8 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_004104a8 = DAT_004104a8 | 2;
      }
    }
    DAT_004104a4 = 1;
    uVar5 = DAT_00410104 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_00410104 | 6;
      DAT_004104a4 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_004104a4 = 3;
        uVar5 = DAT_00410104 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_004104a4 = 5;
          uVar5 = DAT_00410104 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_00410104 = DAT_00410104 | 0x6e;
            DAT_004104a4 = 6;
            uVar5 = DAT_00410104;
          }
        }
      }
    }
  }
  DAT_00410104 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_00410108 != 0;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040edd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_0040eb20 */

exception * __thiscall FUN_0040eb20(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_0040eb43 */

undefined4 * __fastcall FUN_0040eb43(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* Function: FUN_0040eb70 */

exception * __thiscall FUN_0040eb70(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_0040eb93 */

undefined4 * __fastcall FUN_0040eb93(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* Function: FUN_0040ebc0 */

void __fastcall FUN_0040ebc0(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_0040ebe0 */

undefined4 * __thiscall FUN_0040ebe0(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040ec12 */

void FUN_0040ec12(void)

{
  undefined4 local_10 [3];
  
  FUN_0040eb43(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_0040fae4);
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ec5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ec74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ec80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: Unwind@0040eca0 */

void Unwind_0040eca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040eca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: o___p___argc */

void __cdecl o___p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ecac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___argc();
  return;
}



/* Function: o___p___wargv */

void __cdecl o___p___wargv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ecb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___wargv();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ecc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ecdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ece8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ecf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_initial_wide_environment */

void __cdecl o__get_initial_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_initial_wide_environment();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ed98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040eda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040edbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040edc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040edd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ede0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040edec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040edf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ee04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ee1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0040ee28. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: FUN_0040ee34 */

int __cdecl
FUN_0040ee34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_0040dc25();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0040ee6e */

void __cdecl
FUN_0040ee6e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040ee34(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: DelayLoad_UMgrOpenProcessHandleForAccess */

void DelayLoad_UMgrOpenProcessHandleForAccess(void)

{
  FUN_0040ee9b();
  return;
}



/* Function: FUN_0040ee9b */

void FUN_0040ee9b(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0040dbc4(&ImgDelayDescr_0040fbac,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040eeaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_UMgrQueryUserContext */

void DelayLoad_UMgrQueryUserContext(void)

{
  FUN_0040ee9b();
  return;
}



/* Function: DelayLoad_GrantWorkingDirectoryAccess_FullTrustCaller_ForPackage */

void DelayLoad_GrantWorkingDirectoryAccess_FullTrustCaller_ForPackage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0040dbc4(&ImgDelayDescr_0040fbcc,
                            &GrantWorkingDirectoryAccess_FullTrustCaller_ForPackage_exref);
                    /* WARNING: Could not recover jumptable at 0x0040eedb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_0040eee3 */

char __fastcall FUN_0040eee3(uint3 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (DAT_004104bc == 1) {
    return '\x01';
  }
  if (DAT_004104bc != 2) {
    uStack_8 = (uint)param_1;
    iVar1 = ApiSetQueryApiSetPresence(&DAT_00401044,(int)&uStack_8 + 3);
    if (-1 < iVar1) {
      DAT_004104bc = (uStack_8._3_1_ == '\0') + 1;
      return uStack_8._3_1_;
    }
  }
  return '\0';
}



/* Function: FUN_0040ef2d */

void FUN_0040ef2d(int param_1)

{
  FUN_0040defa(param_1);
  return;
}



/* Function: ApiSetQueryApiSetPresence */

void ApiSetQueryApiSetPresence(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040ef3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ApiSetQueryApiSetPresence();
  return;
}



/* Function: FUN_0040ef4a */

int __cdecl FUN_0040ef4a(int param_1)

{
  uint uVar1;
  
  if ((DAT_004104a4 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: FUN_0040efe3 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040efe3(void)

{
  uint unaff_EBP;
  
  FUN_0040ded0(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004100c0 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004100c0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: FUN_0040f06d */

void __fastcall FUN_0040f06d(uint param_1)

{
  undefined4 *unaff_EBX;
  uint unaff_EBP;
  undefined4 unaff_retaddr;
  
  FUN_0040ded0(param_1 ^ unaff_EBP);
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  *unaff_EBX = unaff_retaddr;
  return;
}



/* Function: __EH_prolog3_GS_align */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __EH_prolog3_GS_align
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __thiscall __EH_prolog3_GS_align(void *this,int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  
  puVar2 = (undefined4 *)((uint)&stack0x00000000 & -param_2);
  puVar2[-2] = in_EAX;
  puVar2[-3] = unaff_retaddr;
  puVar2[-4] = this;
  *puVar2 = unaff_EBP;
  puVar2[-1] = 0xffffffff;
  iVar1 = -param_1;
  *(undefined4 *)((int)puVar2 + iVar1 + -0x14) = unaff_ESI;
  *(undefined4 *)((int)puVar2 + iVar1 + -0x18) = unaff_EDI;
  uVar3 = DAT_004100c0 ^ (uint)puVar2;
  *(uint *)((int)puVar2 + iVar1 + -0x1c) = uVar3;
  *(uint *)((-param_2 & (uint)(puVar2 + -4)) - 4) = uVar3;
  puVar2[-4] = &param_2;
  puVar2[1] = param_3;
  *(undefined4 *)((int)puVar2 + iVar1 + -0x20) = puVar2[-3];
  puVar2[-3] = ExceptionList;
  ExceptionList = puVar2 + -3;
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



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040f141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@0040f2b8 */

void Unwind_0040f2b8(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@0040f2c0 */

void Unwind_0040f2c0(void)

{
  int unaff_EBP;
  
  FUN_00406498(unaff_EBP + -0x28);
  return;
}



/* Function: Unwind@0040f2c8 */

void Unwind_0040f2c8(void)

{
  int unaff_EBP;
  
  FUN_00406498(unaff_EBP + -0x28);
  return;
}



/* Function: Unwind@0040f302 */

void Unwind_0040f302(void)

{
  int unaff_EBP;
  
  FUN_00406a83((char *)(unaff_EBP + -0xd));
  return;
}



/* Function: Unwind@0040f37b */

void Unwind_0040f37b(void)

{
  int unaff_EBP;
  
  FUN_00407833((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0040f383 */

void Unwind_0040f383(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0040f41c */

void Unwind_0040f41c(void)

{
  int unaff_EBP;
  
  FUN_0040781a((int *)(unaff_EBP + -0x34));
  return;
}



/* Function: Unwind@0040f424 */

void Unwind_0040f424(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x30));
  return;
}



/* Function: Unwind@0040f45e */

void Unwind_0040f45e(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x168));
  return;
}



/* Function: Unwind@0040f469 */

void Unwind_0040f469(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x164));
  return;
}



/* Function: Unwind@0040f474 */

void Unwind_0040f474(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x150));
  return;
}



/* Function: Unwind@0040f47f */

void Unwind_0040f47f(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x16c));
  return;
}



/* Function: Unwind@0040f48a */

void Unwind_0040f48a(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x160));
  return;
}



/* Function: Unwind@0040f495 */

void Unwind_0040f495(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x15c));
  return;
}



/* Function: Unwind@0040f4a0 */

void Unwind_0040f4a0(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x158));
  return;
}



/* Function: Unwind@0040f4ab */

void Unwind_0040f4ab(void)

{
  int unaff_EBP;
  
  FUN_00406498(unaff_EBP + -0x140);
  return;
}



/* Function: Unwind@0040f4b6 */

void Unwind_0040f4b6(void)

{
  int unaff_EBP;
  
  FUN_00408d54((int *)(unaff_EBP + -0x148));
  return;
}



/* Function: Unwind@0040f4f6 */

void Unwind_0040f4f6(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x38));
  return;
}



/* Function: Unwind@0040f4fe */

void Unwind_0040f4fe(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x34));
  return;
}



/* Function: Unwind@0040f506 */

void Unwind_0040f506(void)

{
  int unaff_EBP;
  
  FUN_00406930((int *)(unaff_EBP + -0x30));
  return;
}



/* Function: Unwind@0040f50e */

void Unwind_0040f50e(void)

{
  int unaff_EBP;
  
  FUN_00408d54((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_0040f640 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_0040f640(void)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_0040f272;
  if (DAT_00410004 != (int *)0x0) {
    puVar1 = (undefined1 *)FUN_00406cc3(DAT_00410004);
  }
  return puVar1;
}



/* Function: FUN_0040f670 */

void FUN_0040f670(void)

{
  FUN_00406a99((int *)&DAT_00410114);
  return;
}



