/* Function: FUN_004050b0 */

void FUN_004050b0(void)

{
  DAT_004104b0 = FUN_004059e0;
  DAT_0041049c = DebugBreak;
  DAT_004104ac = FUN_00405a20;
  DAT_0041048c = FUN_00406280;
  DAT_0041047c = FUN_00406350;
  DAT_004104b4 = FUN_004062d0;
  DAT_00410498 = FUN_00406310;
  return;
}



/* Function: FUN_00405100 */

void FUN_00405100(void)

{
  FUN_0040f20b(FUN_0040f890);
  return;
}



/* Function: FUN_00405120 */

void FUN_00405120(void)

{
  FUN_0040f20b(FUN_0040f8b0);
  return;
}



/* Function: FUN_00405140 */

void FUN_00405140(void)

{
  DAT_00410494 = FUN_00406cf0;
  DAT_0041046c = &PTR_s_WilError_03_00410000;
  DAT_00410480 = &DAT_004100cc;
  return;
}



/* Function: FUN_00405170 */

void FUN_00405170(void)

{
  FUN_0040a961();
  FUN_0040f20b(FUN_0040f8c0);
  return;
}



/* Function: FUN_00405190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405190(void)

{
  _DAT_004104c4 = FUN_00408660;
  _DAT_004104dc = FUN_004086e0;
  _DAT_00410554 = FUN_00408750;
  return;
}



/* Function: FUN_004051c0 */

void FUN_004051c0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00410790);
  FUN_0040f20b(FUN_0040f8d0);
  return;
}



/* Function: FUN_004051e0 */

undefined4 __fastcall FUN_004051e0(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00405246 */

undefined4 __fastcall FUN_00405246(short *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_004053c4(param_1,param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_0040527b */

int __fastcall FUN_0040527b(short *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  short *local_8;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    local_8 = param_1;
    iVar1 = FUN_0040537b(param_1,param_2,(int *)&local_8);
    if (-1 < iVar1) {
      iVar1 = FUN_004053c4(param_1 + (int)local_8,param_2 - (int)local_8,extraout_ECX,param_3);
    }
  }
  return iVar1;
}



/* Function: FUN_004052c7 */

undefined4 __fastcall FUN_004052c7(wchar_t *param_1,uint param_2,wchar_t *param_3,va_list param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_00405417(param_1,param_2,param_1,param_3,param_4);
  }
  return uVar1;
}



/* Function: FUN_004052fe */

undefined4 __cdecl FUN_004052fe(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_00405417(param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_00405342 */

int __fastcall FUN_00405342(short *param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  if ((param_1 == (short *)0x0) || (0x7fffffff < param_2)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_0040537b(param_1,param_2,param_3);
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  return iVar1;
}



/* Function: FUN_0040537b */

undefined4 __fastcall FUN_0040537b(short *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*param_1 == 0) break;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar1 = 0x80070057;
  if (iVar2 != 0) {
    uVar1 = 0;
  }
  if (param_3 != (int *)0x0) {
    if (iVar2 == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = param_2 - iVar2;
    }
  }
  return uVar1;
}



/* Function: FUN_004053c4 */

undefined4 __fastcall FUN_004053c4(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_00405417 */

undefined4 __fastcall
FUN_00405417(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4,va_list param_5)

{
  uint _Count;
  uint uVar1;
  undefined4 uVar2;
  
  _Count = param_2 - 1;
  uVar2 = 0;
  uVar1 = _vsnwprintf(param_1,_Count,param_4,param_5);
  if (((int)uVar1 < 0) || (_Count < uVar1)) {
    uVar2 = 0x8007007a;
  }
  else if (uVar1 != _Count) {
    return 0;
  }
  param_1[_Count] = L'\0';
  return uVar2;
}



/* Function: FUN_0040545d */

void __fastcall FUN_0040545d(uint *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  HANDLE pvVar5;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  uint uVar6;
  
  if (param_1[2] != 0) {
    uVar6 = 0;
    if (*param_1 != 0) {
      do {
        iVar2 = FUN_004054e6(param_1,uVar6);
        if (iVar2 != 0) {
          iVar2 = FUN_004054e6(this,uVar6);
          if (*(char *)(iVar2 + 4) != '\0') {
            piVar3 = (int *)FUN_004054e6(this_00,uVar6);
            if (*piVar3 != 0) {
              piVar3 = (int *)FUN_004054e6(this_01,uVar6);
              if (*piVar3 != 0) {
                puVar4 = (undefined4 *)FUN_004054e6(this_02,uVar6);
                pvVar1 = (LPVOID)*puVar4;
                pvVar5 = GetProcessHeap();
                HeapFree(pvVar5,0,pvVar1);
              }
              puVar4 = (undefined4 *)FUN_004054e6(param_1,uVar6);
              *puVar4 = 0;
            }
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *param_1);
    }
    pvVar1 = (LPVOID)param_1[2];
    if (pvVar1 != (LPVOID)0x0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar1);
    }
  }
  return;
}



/* Function: FUN_004054e6 */

int __thiscall FUN_004054e6(void *this,uint param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  if ((param_1 < *this) && (*(int *)((int)this + 8) != 0)) {
    iVar1 = *(int *)((int)this + 8) + param_1 * 8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_0040550a */

wchar_t * __cdecl FUN_0040550a(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  FUN_004052c7(param_1,(int)param_2 - (int)param_1 >> 1,param_3,&stack0x00000010);
  if (param_2 != param_1) {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    param_1 = param_1 + ((int)pwVar2 - (int)(param_1 + 1) >> 1);
  }
  return param_1;
}



/* Function: FUN_0040554f */

void __fastcall FUN_0040554f(wchar_t *param_1,int param_2,int param_3)

{
  wchar_t *pwVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int iVar4;
  wchar_t *local_20c;
  WCHAR local_208 [256];
  uint local_8;
  
  pcVar2 = DAT_00410474;
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  iVar4 = param_2;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((pcVar2 != (code *)0x0) && (DAT_00410484 != '\0')) {
      (*(code *)PTR_guard_check_icall_00411264)(param_3,param_1,param_2);
      (*pcVar2)();
      iVar4 = extraout_EDX;
      if (*param_1 != L'\0') goto LAB_004057a7;
    }
    memset(local_208,0,0x200);
    pcVar2 = DAT_0041048c;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
    }
    else if (DAT_0041048c != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00411264)(*(undefined4 *)(param_3 + 0xc),local_208,0x100);
      (*pcVar2)();
    }
    pwVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_20c = FUN_0040550a(param_1,pwVar1,L"%hs!%p: ");
    }
    else {
      local_20c = FUN_0040550a(param_1,pwVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_20c = FUN_0040550a(local_20c,pwVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    pwVar3 = FUN_0040550a(local_20c,pwVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (iVar4 = extraout_EDX_00, *(int *)(param_3 + 0x20) != 0)) {
      pwVar3 = FUN_0040550a(pwVar3,pwVar1,L"    ");
      if (*(int *)(param_3 + 0x14) != 0) {
        pwVar3 = FUN_0040550a(pwVar3,pwVar1,L"Msg:[%ws] ");
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        pwVar3 = FUN_0040550a(pwVar3,pwVar1,L"CallContext:[%hs] ");
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_0040550a(pwVar3,pwVar1,L"\n");
          iVar4 = extraout_EDX_03;
        }
        else {
          FUN_0040550a(pwVar3,pwVar1,L"[%hs]\n");
          iVar4 = extraout_EDX_02;
        }
      }
      else {
        FUN_0040550a(pwVar3,pwVar1,L"[%hs(%hs)]\n");
        iVar4 = extraout_EDX_01;
      }
    }
  }
LAB_004057a7:
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,iVar4);
  return;
}



/* Function: FUN_004057bf */

uint * __thiscall FUN_004057bf(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00405ac1((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_004057e3 */

LPVOID __fastcall FUN_004057e3(DWORD param_1,SIZE_T param_2)

{
  FARPROC pFVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  HMODULE hModule;
  
  hHeap = GetProcessHeap();
  pvVar2 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_00410450 == (FARPROC)0x0) {
    if (DAT_004104e4 != '\0') {
      return pvVar2;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00410450 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_004104e4 = '\x01';
    if (DAT_00410450 == (FARPROC)0x0) {
      DAT_004104e4 = '\x01';
      return pvVar2;
    }
  }
  pFVar1 = DAT_00410450;
  (*(code *)PTR_guard_check_icall_00411264)(hHeap,pvVar2);
  (*pFVar1)();
  return pvVar2;
}



/* Function: FUN_00405860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00405860(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004104c8;
  _DAT_004104cc = param_1;
  LOCK();
  DAT_004104c8 = DAT_004104c8 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00405879 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00405879(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004104f0;
  _DAT_00410460 = param_1;
  LOCK();
  DAT_004104f0 = DAT_004104f0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00405892 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00405892(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0041054c;
  _DAT_004104ec = param_1;
  LOCK();
  DAT_0041054c = DAT_0041054c + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_004058b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004058b0(undefined4 param_1)

{
  _DAT_00410540 = param_1;
  return 1;
}



/* Function: FUN_004058ca */

void FUN_004058ca(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_004104ac;
  if (DAT_004104ac != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004058fa */

void __fastcall
FUN_004058fa(undefined4 param_1,undefined4 param_2,LPCWSTR param_3,uint *param_4,char *param_5,
            uint param_6)

{
  char *pcVar1;
  char cVar2;
  BOOL BVar3;
  DWORD DVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  HMODULE local_110;
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  local_110 = (HMODULE)0x0;
  if ((param_3 == (LPCWSTR)0x0) ||
     (BVar3 = GetModuleHandleExW(6,param_3,&local_110), param_2 = extraout_EDX, BVar3 != 0)) {
    if (param_4 != (uint *)0x0) {
      *param_4 = -(uint)(param_3 != (LPCWSTR)0x0) & (int)param_3 - (int)local_110;
    }
    if ((param_5 != (char *)0x0) &&
       (DVar4 = GetModuleFileNameA(local_110,local_10c,0x104), param_2 = extraout_EDX_00, DVar4 != 0
       )) {
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
      FUN_004051e0(param_5,param_6,(int)pcVar5);
      param_2 = extraout_EDX_01;
    }
  }
  else if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004059e0 */

undefined * __fastcall FUN_004059e0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_004104d4 == '\0') {
    FUN_004058fa(param_1,param_2,(LPCWSTR)FUN_004058b0,(uint *)0x0,&DAT_004104f8,0x40);
    DAT_004104d4 = '\x01';
  }
  return &DAT_004104f8;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00405a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00405a20 */

void FUN_00405a20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00405a61 */

uint __fastcall FUN_00405a61(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_004104b4;
  if (-1 < (int)param_1) {
    return 0;
  }
  if (param_1 != 0xc0000017) {
    if (DAT_004104b4 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00411264)(param_1);
      uVar2 = (*pcVar1)();
      if ((uVar2 != 0) && (uVar2 != 0x13d)) {
        if (0 < (int)uVar2) {
          return uVar2 & 0xffff | 0x80070000;
        }
        return uVar2;
      }
    }
    return param_1 | 0x10000000;
  }
  return 0x8007000e;
}



/* Function: FUN_00405ac1 */

uint __fastcall FUN_00405ac1(uint param_1)

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



/* Function: FUN_00405c96 */

DWORD __fastcall
FUN_00405c96(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0040ad64(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  return DVar1;
}



/* Function: FUN_00405cd2 */

uint __fastcall
FUN_00405cd2(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0040ad64(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_00405d21 */

void __fastcall FUN_00405d21(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00405cd2(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00405d3e */

int __fastcall FUN_00405d3e(short *param_1)

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



/* Function: FUN_00405d66 */

undefined1 FUN_00405d66(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_00410498;
  if (DAT_004104a8 != '\0') {
    return 1;
  }
  if (DAT_00410498 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00405d96 */

void __fastcall
FUN_00405d96(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8,short *param_9,undefined4 param_10,wchar_t *param_11,undefined4 param_12,
            undefined1 *param_13,undefined4 param_14,int *param_15)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  BOOL BVar7;
  
  *param_11 = L'\0';
  *param_13 = 0;
  iVar3 = *param_8;
  param_15[2] = iVar3;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar3 = FUN_00405860(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_00405879(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_0040ad64(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar6 = FUN_00405ac1(0x8007029c);
      param_15[3] = uVar6;
    }
    iVar3 = FUN_00405892(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_004058b0(iVar3);
  }
  else {
    iVar3 = 0;
  }
  *param_15 = param_7;
  param_15[1] = 0;
  if (param_8[2] == 1) {
    param_15[1] = 8;
  }
  LOCK();
  UNLOCK();
  iVar4 = DAT_004104d8 + 1;
  DAT_004104d8 = DAT_004104d8 + 1;
  param_15[4] = iVar4;
  if ((param_9 == (short *)0x0) || (*param_9 == 0)) {
    param_9 = (short *)0x0;
  }
  param_15[5] = (int)param_9;
  DVar5 = GetCurrentThreadId();
  param_15[6] = DVar5;
  param_15[9] = param_3;
  param_15[10] = param_2;
  param_15[7] = param_5;
  param_15[8] = param_4;
  param_15[0x14] = param_6;
  param_15[0xb] = iVar3;
  param_15[0x15] = param_1;
  param_15[0xc] = 0;
  param_15[0x10] = 0;
  param_15[0x11] = 0;
  param_15[0x12] = 0;
  param_15[0xd] = 0;
  param_15[0xe] = 0;
  param_15[0xf] = 0;
  pcVar1 = DAT_004104b0;
  if (DAT_004104b0 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00411264)();
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_0041047c;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00410494;
  if (DAT_00410494 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00410490;
  if (DAT_00410490 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004104a0;
  if ((DAT_004104a0 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00411264)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_0040620d();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar6 = FUN_00405ac1(0x8000ffff);
    param_15[3] = uVar6;
  }
  pcVar1 = DAT_00410468;
  if (DAT_00410470 == '\0') {
    if (DAT_00410468 == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00411264)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00405f87;
  }
  else {
LAB_00405f87:
    pcVar1 = DAT_00410474;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_00410474 != (code *)0x0) && (DAT_00410484 == '\0')) {
        (*(code *)PTR_guard_check_icall_00411264)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_0040554f(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00405ff0;
    }
  }
  pcVar1 = DAT_00410474;
  if ((DAT_00410474 != (code *)0x0) && (DAT_00410484 == '\0')) {
    (*(code *)PTR_guard_check_icall_00411264)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00405ff0:
  pcVar1 = DAT_0041049c;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_00410478 != '\0')) &&
     (DAT_0041049c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00411264)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00406028 */

void __fastcall FUN_00406028(int param_1)

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
  
  pcVar1 = DAT_004104b8;
  if (DAT_004104b8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_004104a4;
  if (DAT_004104a4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00406095;
  uVar3 = 1;
  do {
    FUN_004058ca(uVar3);
    iVar2 = extraout_ECX;
LAB_00406095:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_004060b5 */

void __fastcall
FUN_004060b5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_0040ae82(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_004060d3 */

void __fastcall
FUN_004060d3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

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
  puVar2 = FUN_004057bf((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_004060b5(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_00406118 */

void __fastcall FUN_00406118(int param_1,int param_2)

{
  code *pcVar1;
  void *pvVar2;
  uint *puVar3;
  void *this;
  undefined4 extraout_ECX;
  int in_stack_00000010;
  undefined4 uVar4;
  uint local_24 [4];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  int local_8;
  
  local_8 = param_1;
  pvVar2 = (void *)FUN_00405c96(param_1,param_2,0x4014e0,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_004057bf(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_004060b5(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_00406179 */

void __fastcall FUN_00406179(undefined4 param_1,undefined4 param_2)

{
  FUN_0040b111(param_1,param_2);
  return;
}



/* Function: FUN_00406196 */

void __fastcall FUN_00406196(int param_1,int param_2)

{
  FUN_0040b152(param_1,param_2);
  return;
}



/* Function: FUN_004061b2 */

void __fastcall FUN_004061b2(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_00406118(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004061ca */

void __fastcall FUN_004061ca(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_004060d3(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004061eb */

void __fastcall FUN_004061eb(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_004060d3(param_1,0x137b,"onecore\\internal\\sdk\\inc\\wil\\Staging.h",param_1,param_1,
               unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_0040620d */

void FUN_0040620d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406219 */

void __fastcall FUN_00406219(LPCSTR param_1)

{
  if (DAT_004104e8 == (HMODULE)0x0) {
    DAT_004104e8 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_004104e8,param_1);
  return;
}



/* Function: FUN_00406245 */

FARPROC __fastcall FUN_00406245(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_00410538 == (HMODULE)0x0) &&
     (DAT_00410538 = GetModuleHandleW(L"kernelbase.dll"), DAT_00410538 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_00410538,param_1);
  return pFVar1;
}



/* Function: FUN_00406280 */

void FUN_00406280(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_004104e8 == (HMODULE)0x0) {
    DAT_004104e8 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_004104e8,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_004062d0 */

void FUN_004062d0(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_00410458 == (code *)0x0) &&
     (DAT_00410458 = (code *)FUN_00406219("RtlNtStatusToDosErrorNoTeb"), DAT_00410458 == (code *)0x0
     )) {
    return;
  }
  pcVar1 = DAT_00410458;
  (*(code *)PTR_guard_check_icall_00411264)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406310 */

undefined4 FUN_00406310(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_0041053c == (code *)0x0) {
    DAT_0041053c = (code *)FUN_00406219("RtlDllShutdownInProgress");
    if (DAT_0041053c == (code *)0x0) {
      return 0;
    }
  }
  pcVar1 = DAT_0041053c;
  (*(code *)PTR_guard_check_icall_00411264)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00406350 */

void FUN_00406350(undefined1 *param_1)

{
  FARPROC pFVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined8 local_c;
  
  local_18 = 0;
  local_c = 0;
  local_28 = *(undefined4 *)(param_1 + 8);
  local_24 = *(undefined4 *)(param_1 + 0x14);
  local_20 = *param_1;
  local_1e = DAT_004104bc;
  local_1c = *(undefined2 *)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  if (DAT_004104c0 == (FARPROC)0x0) {
    DAT_004104c0 = FUN_00406245("WilFailureNotifyWatchers");
    if (DAT_004104c0 == (FARPROC)0x0) goto LAB_004063cc;
  }
  pFVar1 = DAT_004104c0;
  (*(code *)PTR_guard_check_icall_00411264)(0,&local_28,&local_c);
  (*pFVar1)();
LAB_004063cc:
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_c;
  if (local_c._4_1_ == '\x01') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  else if (local_c._4_1_ == '\x02') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  }
  else if (local_c._4_1_ == '\x03') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  }
  return;
}



/* Function: FUN_00406401 */

undefined4 FUN_00406401(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_004104e0 == (code *)0x0) &&
     (DAT_004104e0 = (code *)FUN_00406219("NtQueryWnfStateData"), DAT_004104e0 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_004104e0;
  (*(code *)PTR_guard_check_icall_00411264)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00406455 */

undefined4 __fastcall
FUN_00406455(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_00410544 == (code *)0x0) &&
     (DAT_00410544 = (code *)FUN_00406219("NtUpdateWnfStateData"), DAT_00410544 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00410544;
  (*(code *)PTR_guard_check_icall_00411264)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_004064ae */

undefined4 __fastcall FUN_004064ae(undefined4 param_1,undefined2 param_2,int param_3)

{
  code *pcVar1;
  uint6 uVar2;
  undefined4 uVar3;
  undefined8 local_c;
  
  local_c._0_6_ = CONCAT24(param_2,param_1);
  uVar2 = (uint6)local_c;
  local_c = (ulonglong)(uint6)local_c;
  if (param_3 != 0) {
    local_c = CONCAT26(1,uVar2);
  }
  if ((DAT_00410454 == (code *)0x0) &&
     (DAT_00410454 = (code *)FUN_00406219("RtlNotifyFeatureUsage"), DAT_00410454 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00410454;
  (*(code *)PTR_guard_check_icall_00411264)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_00406510 */

void FUN_00406510(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_004061b2(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040653d */

void FUN_0040653d(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_004061b2(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406568 */

int __fastcall FUN_00406568(void *param_1,int *param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  iVar1 = FUN_00406781(param_1,local_c);
  if (iVar1 < 0) {
    FUN_00406179(unaff_retaddr,100);
    FUN_00406179(unaff_retaddr,0x6d);
  }
  else {
    *param_2 = local_c[0] << 2;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_004065c0 */

void __thiscall FUN_004065c0(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_0040620d();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00405246(local_214,0x104,param_1);
  FUN_0040527b(local_214,0x104,0x401518);
  uVar5 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  iVar3 = FUN_0040a556(this,uVar5,uVar2,local_214);
  uVar4 = extraout_EDX;
  if (iVar3 < 0) {
    FUN_00406179(unaff_retaddr,0x88);
    uVar4 = extraout_EDX_00;
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00406666 */

undefined4 __fastcall FUN_00406666(HANDLE param_1,int *param_2)

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
    goto LAB_00406689;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00406689:
        uVar2 = FUN_00406196(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00406757:
        *param_2 = local_8;
        return 0;
      }
      uVar2 = 0xa7;
    }
    else {
      local_c = 0;
      BVar3 = ReleaseSemaphore(param_1,1,&local_c);
      if (BVar3 == 0) {
        iVar4 = 0xb1;
        goto LAB_00406689;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00406689;
          }
          if (DVar1 == 0) goto LAB_00406757;
          uVar2 = 0xb9;
        }
        else {
          uVar2 = 0xb5;
        }
      }
      else {
        uVar2 = 0xb2;
      }
    }
  }
  else {
    uVar2 = 0x9a;
  }
  FUN_00406179(unaff_retaddr,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_00406781 */

void __thiscall FUN_00406781(void *this,int *param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  undefined4 extraout_EDX_02;
  int unaff_retaddr;
  undefined1 auStack_224 [4];
  int iStack_220;
  int *local_21c;
  WCHAR local_218 [262];
  uint local_c;
  
  local_c = DAT_00410080 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00405246(local_218,0x104,(int)this);
  FUN_0040527b(local_218,0x104,0x401518);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar4 = extraout_EDX;
    if (DVar2 != 2) {
      FUN_00406196(unaff_retaddr,0xcd);
      uVar4 = extraout_EDX_00;
    }
LAB_00406829:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00406843;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_00406666(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_00406179(unaff_retaddr,0xd3);
      uVar4 = extraout_EDX_01;
      goto LAB_00406829;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00406510(pvVar1);
  uVar4 = extraout_EDX_02;
LAB_00406843:
  FUN_0040f140(local_c ^ (uint)auStack_224,uVar4);
  return;
}



/* Function: FUN_00406862 */

void __thiscall FUN_00406862(void *this,undefined1 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  LPVOID lpMem;
  char *pcVar4;
  int iVar5;
  LPVOID pvVar6;
  HANDLE hHeap;
  char *extraout_EAX;
  void *extraout_EAX_00;
  void *_Dst;
  char *pcVar7;
  char *local_c;
  undefined4 *local_8;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x12) = *param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x20) = 0;
  pcVar4 = (char *)0x1;
  pcVar7 = *(char **)(param_1 + 0x24);
  local_c = (char *)0x1;
  if (pcVar7 != (char *)0x0) {
    pcVar4 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar7 + (1 - (int)pcVar4);
  }
  pcVar7 = *(char **)(param_1 + 0x4c);
  if (pcVar7 != (char *)0x0) {
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    local_c = pcVar7 + (1 - (int)pcVar1);
  }
  iVar5 = FUN_00405d3e(*(short **)(param_1 + 0x14));
  piVar2 = (int *)((int)this + 0x28);
  pcVar4 = local_c + iVar5 + (int)pcVar4;
  if (((*(int *)((int)this + 0x24) == 0) || ((char *)*piVar2 < pcVar4)) &&
     (pvVar6 = FUN_004057e3(8,(SIZE_T)pcVar4), pvVar6 != (LPVOID)0x0)) {
    lpMem = *(LPVOID *)((int)this + 0x24);
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
    *(LPVOID *)((int)this + 0x24) = pvVar6;
    *piVar2 = (int)pcVar4;
  }
  local_8 = (undefined4 *)(param_1 + 0x4c);
  pcVar4 = *(char **)((int)this + 0x24);
  if (pcVar4 != (char *)0x0) {
    pcVar7 = pcVar4 + *piVar2;
    FUN_0040ae1b(pcVar4,pcVar7,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_0040ae1b(extraout_EAX,pcVar7,(char *)*local_8,(undefined4 *)((int)this + 0x14));
    _Dst = FUN_0040adab(extraout_EAX_00,pcVar7,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar7 - (int)_Dst);
  }
  return;
}



/* Function: FUN_0040699e */

void __fastcall FUN_0040699e(int param_1)

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



/* Function: FUN_00406a0d */

void __thiscall FUN_00406a0d(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_004057e3(8,0xdc);
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
    FUN_00406862(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00406acb */

DWORD * __fastcall FUN_00406acb(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_0041046c;
  if (DAT_0041046c != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0041046c[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_0040a5dd(*DAT_0041046c,&local_8);
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



/* Function: FUN_00406b54 */

uint __fastcall FUN_00406b54(int param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *_Dst;
  char *_MaxCount;
  char *_DstSize;
  
  uVar3 = in_EAX & 0xffffff00;
  *param_3 = '\0';
  if (param_2 != 0) {
    uVar3 = FUN_00406b54(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_004100c4 + 1;
        DAT_004100c4 = DAT_004100c4 + 1;
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
      _Dst = param_3;
      do {
        pcVar6 = _Dst;
        _Dst = pcVar6 + 1;
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
        _DstSize = param_3 + (param_4 - (int)_Dst);
        _MaxCount = _DstSize;
        if (pcVar5 + (1 - (int)pcVar6) < _DstSize) {
          _MaxCount = pcVar5 + (1 - (int)pcVar6);
        }
        pcVar5 = (char *)memcpy_s(_Dst,(rsize_t)_DstSize,(void *)piVar2[1],(rsize_t)_MaxCount);
        _Dst[(int)(_MaxCount + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00406c13 */

void __fastcall FUN_00406c13(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  byte bVar3;
  DWORD DVar4;
  undefined4 uVar5;
  DWORD *pDVar6;
  byte local_5;
  
  local_5 = 0;
  *param_2 = '\0';
  iVar2 = DAT_00410480;
  if (DAT_00410480 != 0) {
    DVar4 = GetCurrentThreadId();
    for (pDVar6 = *(DWORD **)(iVar2 + (DVar4 % 10) * 4); pDVar6 != (DWORD *)0x0;
        pDVar6 = (DWORD *)pDVar6[1]) {
      if (*pDVar6 == DVar4) {
        pDVar6 = pDVar6 + 2;
        break;
      }
    }
    if ((pDVar6 == (DWORD *)0x0) || (*pDVar6 == 0)) {
      local_5 = 0;
    }
    else {
      *param_2 = '\0';
      uVar5 = FUN_00406b54(param_1,*pDVar6,param_2,param_3);
      if ((char)uVar5 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar6;
      local_5 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_00411264)(param_1);
        bVar3 = (*pcVar1)();
        local_5 = local_5 | bVar3;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
    }
  }
  pcVar1 = DAT_00410488;
  if (DAT_00410488 != (code *)0x0) {
    if ((local_5 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (*(code *)PTR_guard_check_icall_00411264)(uVar5,param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00406cf0 */

void FUN_00406cf0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00406c13((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_00410548 != DVar2) {
    LOCK();
    iVar1 = DAT_00410550 + 1;
    UNLOCK();
    iVar3 = DAT_00410550 + 1;
    DAT_00410550 = iVar1;
    if (iVar3 < 4) {
      DAT_00410548 = DVar2;
      this = FUN_00406acb(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00406a0d(this,param_1);
      }
      DAT_00410548 = 0;
    }
    LOCK();
    DAT_00410550 = DAT_00410550 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00406d55 */

void __fastcall FUN_00406d55(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  PTP_TIMER pti;
  _FILETIME local_c;
  
  pti = (PTP_TIMER)*param_1;
  if (pti != (PTP_TIMER)0x0) {
    local_c.dwLowDateTime = (DWORD)param_1;
    local_c.dwHighDateTime = (DWORD)param_1;
    local_c = (_FILETIME)__allmul(param_3,param_4,0xffffd8f0,-1);
    SetThreadpoolTimer(pti,&local_c,0,param_3 >> 2);
    *param_2 = 1;
  }
  return;
}



/* Function: FUN_00406da1 */

undefined4 __thiscall FUN_00406da1(void *this,uint param_1)

{
  uint uVar1;
  DWORD dwErrCode;
  LPVOID _Dst;
  uint extraout_EAX;
  uint extraout_EAX_00;
  rsize_t _MaxCount;
  SIZE_T _DstSize;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(int *)((int)this + 8) - *this;
  if (uVar1 < param_1) {
    dwErrCode = GetLastError();
    _DstSize = (param_1 & 0xffffffc0) + 0x40;
    _Dst = FUN_004057e3(0,_DstSize);
    if (_Dst == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    _MaxCount = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    memcpy_s(_Dst,_DstSize,*this,_MaxCount);
    FUN_0040a490((void *)((int)this + 0xc),(int)_Dst);
    *(LPVOID *)this = _Dst;
    *(rsize_t *)((int)this + 4) = _MaxCount + (int)_Dst;
    *(SIZE_T *)((int)this + 8) = (int)_Dst + _DstSize;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_00406e2c */

undefined4 __thiscall FUN_00406e2c(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar3 = *(int *)((int)this + 8) - *this;
  uVar1 = (*(int *)((int)this + 4) - *this) + param_1;
  if (uVar1 < uVar3) {
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar3 = uVar3 * 2;
    if (param_1 < uVar3) {
      param_1 = uVar3;
    }
    uVar2 = FUN_00406da1(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00406e62 */

undefined4 __thiscall FUN_00406e62(void *this,void *param_1,uint param_2)

{
  void *_Dst;
  undefined4 uVar1;
  errno_t eVar2;
  
  uVar1 = FUN_00406e2c(this,param_2);
  if ((char)uVar1 != '\0') {
    _Dst = *(void **)((int)this + 4);
    eVar2 = memcpy_s(_Dst,-(uint)(_Dst < *(void **)((int)this + 8)) &
                          *(int *)((int)this + 8) - (int)_Dst,param_1,param_2);
    uVar1 = CONCAT31((int3)((uint)eVar2 >> 8),1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return uVar1;
}



/* Function: FUN_00406ea7 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00406ea7(int *param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *piVar2;
  undefined4 extraout_EDX;
  int *piVar3;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_102c;
  int *local_1028;
  int local_1024;
  uint local_1020;
  int *local_101c;
  undefined4 local_1018;
  int local_1014;
  int local_1010 [1025];
  uint local_c;
  
  local_c = DAT_00410080 ^ (uint)&local_102c;
  iVar6 = 0;
  uVar4 = 0xc;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar8 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_00406401(extraout_ECX,&local_1018,local_1010,&local_102c);
      uVar4 = extraout_EDX;
      if (local_1014 == 0) {
        if (local_102c % 0xc != 0) {
          local_102c = 0;
        }
        piVar5 = (int *)*param_1;
        local_1020 = local_102c / 0xc;
        piVar2 = (int *)(((uint)(local_1028[1] - (int)piVar5) / 0xc) * 0xc);
        local_101c = (int *)((int)piVar2 + (int)piVar5);
        uVar7 = local_102c;
        if (piVar5 != local_101c) {
          piVar3 = local_1010 + local_1020 * 3;
          do {
            piVar2 = local_1010;
            if (piVar2 != piVar3) {
              do {
                if ((*piVar2 == *piVar5) && ((short)piVar2[1] == (short)piVar5[1])) {
                  piVar2[2] = piVar2[2] + piVar5[2];
                  uVar7 = local_102c;
                  goto LAB_00406fb6;
                }
                piVar2 = piVar2 + 3;
              } while (piVar2 != piVar3);
            }
            uVar1 = uVar7 + 0xc;
            if (uVar1 < 0x1001) {
              *piVar3 = *piVar5;
              piVar3[1] = piVar5[1];
              piVar3[2] = piVar5[2];
              piVar3 = piVar3 + 3;
              uVar7 = uVar1;
              local_102c = uVar1;
            }
LAB_00406fb6:
            piVar5 = piVar5 + 3;
            iVar8 = local_1024;
          } while (piVar5 != local_101c);
        }
        iVar6 = FUN_00406455(&DAT_00404368,local_1010,uVar7,piVar2,piVar2,local_1018,1);
        uVar4 = extraout_EDX_00;
        param_1 = local_1028;
      }
      local_1024 = iVar8 + 1;
    } while (((iVar6 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_0040f140(local_c ^ (uint)&local_102c,uVar4);
  return;
}



/* Function: FUN_0040702c */

void FUN_0040702c(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_00410464 == (code *)0x0) &&
     (DAT_00410464 = (code *)FUN_00406219("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_00410464 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_00410464;
  (*(code *)PTR_guard_check_icall_00411264)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040706a */

int __thiscall FUN_0040706a(void *this,void *param_1,size_t param_2)

{
  int iVar1;
  
  if (param_2 == *(ushort *)((int)this + 8)) {
    iVar1 = memcmp(param_1,*(void **)((int)this + 0x10),param_2);
  }
  else {
    iVar1 = param_2 - *(ushort *)((int)this + 8);
  }
  return iVar1;
}



/* Function: FUN_00407097 */

void __thiscall FUN_00407097(void *this,int param_1)

{
  rsize_t _DstSize;
  int *_Src;
  rsize_t _MaxCount;
  undefined4 local_8;
  
  _Src = (int *)((int)this + 4);
  if (*_Src != param_1) {
    *_Src = param_1;
    if (*(char *)((int)this + 2) == '\x01') {
      local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)_Src);
      _Src = &local_8;
      _MaxCount = 2;
      _DstSize = 2;
    }
    else {
      if (*(char *)((int)this + 2) != '\x02') {
        return;
      }
      _MaxCount = 4;
      _DstSize = 4;
      local_8 = this;
    }
    memcpy_s(*(void **)((int)this + 0xc),_DstSize,_Src,_MaxCount);
  }
  return;
}



/* Function: FUN_004070e2 */

uint __fastcall FUN_004070e2(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (*param_1 == 0) {
    uVar1 = param_1[4] + 2;
  }
  if ((char)param_1[1] == '\x01') {
    return uVar1 + 2;
  }
  if ((char)param_1[1] == '\x02') {
    uVar1 = uVar1 + 4;
  }
  return uVar1;
}



/* Function: FUN_0040710d */

uint __thiscall FUN_0040710d(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  undefined4 local_8;
  
  _Dst = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_004071a6;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    memcpy_s(_Dst,2,&local_8,2);
    _Dst = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)_Dst + 4);
      if (param_2 < pvVar1) goto LAB_004071a6;
      memcpy_s(_Dst,4,(void *)((int)this + 4),4);
      _Dst = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_004071a6;
    memcpy_s(_Dst,(int)param_2 - (int)_Dst,(void *)((int)this + 8),2);
    _Dst = pvVar1;
  }
  pvVar1 = (void *)((uint)*(ushort *)((int)this + 8) + (int)_Dst);
  if (pvVar1 <= param_2) {
    memcpy_s(_Dst,(int)param_2 - (int)_Dst,*(void **)((int)this + 0x10),
             (uint)*(ushort *)((int)this + 8));
    iVar2 = (uint)*(ushort *)((int)this + 8) + (int)_Dst;
    *param_1 = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
LAB_004071a6:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_004071d5 */

uint __thiscall FUN_004071d5(void *this,uint *param_1,ushort *param_2)

{
  char cVar1;
  ushort *puVar2;
  ushort *_Src;
  ushort *puVar3;
  ushort *local_8;
  
  puVar2 = (ushort *)*param_1;
  cVar1 = *(char *)((int)this + 2);
  puVar3 = (ushort *)CONCAT31((int3)((uint)param_1 >> 8),cVar1);
  if (cVar1 == '\x01') {
    if (param_2 < puVar2 + 1) goto LAB_00407266;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    memcpy_s(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_00407266;
      *(ushort **)((int)this + 0xc) = puVar2;
      local_8 = (ushort *)this;
      memcpy_s((void *)((int)this + 4),4,puVar2,4);
      local_8 = puVar2 + 2;
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar2 = (ushort *)((int)this + 8);
  *puVar2 = *this;
  if (*this == 0) {
    puVar3 = local_8 + 1;
    if (param_2 < puVar3) goto LAB_00407266;
    _Src = local_8;
    local_8 = puVar3;
    memcpy_s(puVar2,2,_Src,2);
  }
  puVar3 = (ushort *)((uint)*puVar2 + (int)local_8);
  if (puVar3 <= param_2) {
    *(ushort **)((int)this + 0x10) = local_8;
    *param_1 = (uint)puVar3;
    return CONCAT31((int3)((uint)puVar3 >> 8),1);
  }
LAB_00407266:
  return (uint)puVar3 & 0xffffff00;
}



/* Function: FUN_00407280 */

undefined2 * __thiscall
FUN_00407280(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
            undefined1 param_5)

{
  uint uVar1;
  ushort local_18;
  undefined1 local_16;
  undefined4 local_14;
  undefined2 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined2 *)this = param_1;
  *(undefined2 *)((int)this + 2) = param_2;
  *(undefined1 *)((int)this + 4) = param_3;
  *(ushort *)((int)this + 6) = param_4;
  *(undefined1 *)((int)this + 8) = param_5;
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    local_18 = param_4;
    local_16 = param_5;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    uVar1 = FUN_004070e2(&local_18);
  }
  *(uint *)((int)this + 0xc) = uVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x22) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  return (undefined2 *)this;
}



/* Function: FUN_004072fe */

void __thiscall FUN_004072fe(void *this,int param_1)

{
  int *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int local_10;
  void *local_c;
  int local_8;
  
  this_00 = (int *)((int)this + 0x1c);
  local_8 = *this_00;
  uVar1 = *(undefined4 *)((int)this + 0x10);
  uVar2 = *(undefined4 *)((int)this + 0x14);
  uVar3 = *(undefined4 *)((int)this + 0x18);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_c = this;
  FUN_0040a490(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_0040a490((void *)(param_1 + 0x1c),local_8);
  FUN_0040a4ba(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_00407387 */

void __thiscall FUN_00407387(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_004061eb(unaff_retaddr);
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
  *(uint *)((int)this + 0x14) = (int)param_1 + param_2;
  *(uint *)((int)this + 0x18) = (int)param_1 + param_3;
  *(undefined1 *)((int)this + 0x21) = 0;
  if (9 < param_2) {
                    /* WARNING: Load size is inaccurate */
    if ((*param_1 != 0) || (uVar2 = 0, *this < (ushort)param_1[1])) {
      uVar2 = 1;
    }
    *(undefined1 *)((int)this + 0x21) = uVar2;
                    /* WARNING: Load size is inaccurate */
    if ((((*param_1 != 0) || (param_1[1] != *this)) || (param_1[2] != *(short *)((int)this + 2))) ||
       ((((char)param_1[4] != *(char *)((int)this + 4) || (param_1[3] != *(short *)((int)this + 6)))
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_0040742a;
  }
  if (9 < param_2) {
    return;
  }
LAB_0040742a:
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



/* Function: FUN_00407472 */

undefined4 __thiscall FUN_00407472(void *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  ushort local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  uint local_40;
  ushort local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_30;
  int *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_40 = 0;
  local_14 = *(int *)((int)this + 0x10) + 10;
  local_38 = 0;
  local_44 = *(undefined2 *)((int)this + 2);
  local_42 = *(undefined1 *)((int)this + 4);
  local_3c = 0;
  local_58 = *(undefined2 *)((int)this + 6);
  local_56 = *(undefined1 *)((int)this + 8);
  local_50 = 0;
  local_34 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_30 = this;
  uVar3 = FUN_004071d5(&local_44,&local_14,*(ushort **)((int)this + 0x14));
  cVar2 = (char)uVar3;
  do {
    if (cVar2 == '\0') {
      uVar5 = FUN_0040b1a7(param_1);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    uVar3 = 0;
    if (local_40 != 0) {
      do {
        uVar4 = FUN_004071d5(&local_58,&local_14,*(ushort **)((int)this + 0x14));
        if ((char)uVar4 == '\0') break;
        local_18 = local_54;
        local_1c = (uint)local_50;
        local_20 = local_48;
        local_24 = (uint)local_3c;
        local_28 = local_34;
        local_2c = *(int **)(param_1 + 0x40);
        if (local_2c == (int *)0x0) {
          FUN_0040620d();
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        pcVar1 = *(code **)(*local_2c + 0x10);
        (*(code *)PTR_guard_check_icall_00411264)(&local_28,&local_24,&local_20,&local_1c,&local_18)
        ;
        cVar2 = (*pcVar1)();
        if (cVar2 == '\0') {
          uVar3 = FUN_0040b1a7(param_1);
          return uVar3 & 0xffffff00;
        }
        uVar3 = uVar3 + 1;
        this = local_30;
      } while (uVar3 < local_40);
    }
    uVar3 = FUN_004071d5(&local_44,&local_14,*(ushort **)((int)this + 0x14));
    cVar2 = (char)uVar3;
  } while( true );
}



/* Function: FUN_004075af */

undefined4 __thiscall
FUN_004075af(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_004078bb(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_00406e2c(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_00407387(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_0040a490((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_0040a4ba(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_00406e2c((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_004078bb(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00407667 */

uint __thiscall FUN_00407667(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 local_20;
  undefined1 local_1e;
  undefined4 local_1c;
  undefined2 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  uint local_8;
  
  local_20 = *(undefined2 *)((int)this + 6);
  local_1e = *(undefined1 *)((int)this + 8);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = this;
  if (param_2 != 0) {
    do {
      uVar2 = param_2 >> 1;
      local_8 = *(int *)((int)local_c + 0xc) * uVar2 + param_1;
      FUN_004071d5(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_0040706a(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_004076f2 */

uint __thiscall
FUN_004076f2(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  undefined2 local_28;
  char local_26;
  int local_24;
  undefined2 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
  local_14 = 0xffffffff;
  local_20 = 0;
  local_28 = *(undefined2 *)((int)this + 6);
  local_26 = *(char *)((int)this + 8);
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    local_c = 0;
    if (*(int *)((int)param_1 + 4) != 0) {
      do {
        local_10 = param_2;
        uVar1 = FUN_004071d5(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_00407097(param_1,local_c);
          uVar1 = local_14;
          goto LAB_004077e8;
        }
        local_14 = FUN_0040706a(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_004077e8;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00407097(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_00407667(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_004071d5(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_0040706a(&local_28,param_3,param_4);
LAB_004077e8:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_00407097(&local_28,local_24 + param_5);
        }
        if ((local_5 == '\0') && (*(char *)((int)this + 0x20) == '\0')) {
          cVar2 = '\0';
        }
        else {
          cVar2 = '\x01';
        }
        *(char *)((int)this + 0x20) = cVar2;
        param_2 = 0;
      }
    }
  }
  return param_2;
}



/* Function: FUN_00407828 */

uint __thiscall FUN_00407828(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  undefined2 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0xc) == 0) {
    local_18 = *(undefined2 *)((int)this + 6);
    local_16 = *(undefined1 *)((int)this + 8);
    uVar1 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    if (*(int *)((int)param_1 + 4) != 0) {
      do {
        uVar2 = FUN_004071d5(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_00407097(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00407097(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_004078bb */

uint __thiscall
FUN_004078bb(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  bool bVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ushort local_38;
  undefined1 local_36;
  int local_34;
  undefined2 local_30;
  undefined4 local_2c;
  void *local_28;
  ushort local_24;
  char local_22;
  int local_20;
  undefined2 local_1c;
  undefined4 local_18;
  void *local_14;
  uint local_10;
  void *local_c;
  char local_5;
  
  if (*(int *)((int)this + 0x10) != 0) {
    local_24 = *(ushort *)((int)this + 2);
    pvVar4 = (void *)(*(int *)((int)this + 0x10) + 10);
    local_22 = *(char *)((int)this + 4);
    bVar1 = false;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = (void *)0x0;
    local_5 = '\0';
    while( true ) {
      local_c = pvVar4;
      uVar3 = FUN_004071d5(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar3 == '\0') break;
      iVar2 = FUN_0040706a(&local_24,param_1,param_2);
      if (iVar2 < 0) {
LAB_00407a19:
        local_c = pvVar4;
        if ((char)uVar3 != '\0') goto LAB_00407946;
        break;
      }
      if (iVar2 == 0) {
        pvVar4 = (void *)FUN_004076f2(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          bVar1 = true;
          local_5 = '\x01';
          goto LAB_00407a19;
        }
        goto LAB_00407a0b;
      }
      pvVar4 = (void *)FUN_00407828(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_00407946:
    pvVar4 = local_c;
    local_10 = 0;
    if (!bVar1) {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      local_10 = FUN_004070e2(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    uVar3 = FUN_004070e2(&local_38);
    in_EAX = *(uint *)((int)this + 0x18);
    uVar3 = uVar3 + local_10;
    if (uVar3 <= (-(uint)(*(uint *)((int)this + 0x14) < in_EAX) &
                 in_EAX - *(int *)((int)this + 0x14))) {
      memmove_s((void *)(uVar3 + (int)pvVar4),(in_EAX - uVar3) - (int)pvVar4,pvVar4,
                *(int *)((int)this + 0x14) - (int)pvVar4);
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + uVar3);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_0040710d(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_00407097(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_0040710d(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_00407a0b:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_00407a5d */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00407a5d(uint param_1,int param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int iVar4;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 local_10b8 [8];
  undefined **local_10b0;
  undefined4 *local_10ac;
  undefined4 *puStack_10a8;
  undefined1 *puStack_10a4;
  undefined ***local_1078;
  undefined1 local_106c [16];
  int local_105c;
  int local_1058;
  int local_1050;
  char local_104c;
  char local_104b;
  undefined4 *local_1048;
  undefined4 *local_1044;
  undefined1 *local_1040;
  uint local_103c;
  undefined2 *local_1038;
  undefined4 local_1034;
  undefined4 local_1030;
  undefined4 local_102c;
  uint local_1028;
  uint local_1024;
  uint local_1020;
  char local_1019;
  short local_1018 [2050];
  uint local_14;
  
  local_14 = DAT_00410080 ^ (uint)&stack0xfffffff0;
  local_1028 = 0;
  local_1034 = 0;
  local_1038 = param_3;
  local_103c = param_1 + param_2 * 8;
  local_1024 = param_1;
  while( true ) {
    FUN_00407280(local_106c,*local_1038,local_1038[1],*(undefined1 *)(local_1038 + 2),local_1038[3],
                 *(undefined1 *)(local_1038 + 4));
    local_1020 = 0x1000;
    uVar2 = FUN_00406401(extraout_ECX,&local_102c,local_1018,&local_1020);
    FUN_00405a61(uVar2);
    if (uVar2 != 0) {
      local_102c = 0;
      local_1020 = 0;
    }
    FUN_00407387(local_106c,local_1018,local_1020,0x1000);
    if (local_104b != '\0') break;
    local_10ac = &local_1030;
    local_1030 = 0;
    puStack_10a8 = &local_1034;
    local_10b0 = &PTR_FUN_0040101c;
    puStack_10a4 = local_106c;
    local_1078 = &local_10b0;
    local_1048 = local_10ac;
    local_1044 = puStack_10a8;
    local_1040 = puStack_10a4;
    uVar3 = FUN_00407472(local_1038,(int)local_10b8);
    uVar2 = local_1024;
    local_1019 = (char)uVar3;
    if (local_104c == '\0') {
LAB_00407c18:
      uVar2 = uVar2 + 8;
      local_1034 = local_1030;
      local_1024 = uVar2;
    }
    else {
      iVar4 = local_1058 - local_105c;
      iVar4 = FUN_00406455(local_1024,local_105c,iVar4,iVar4,iVar4,local_102c,1);
      if (iVar4 != -0x3fffffff) {
        if (iVar4 != 0) {
          FUN_00406455(uVar2,local_105c,local_1058 - local_105c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_00407c18;
      }
      local_1028 = local_1028 + 1;
      local_1019 = '\0';
    }
    uVar1 = local_1028;
    FUN_0040a4ba(&local_1050);
    uVar3 = extraout_EDX;
    if (((local_1019 != '\0') || (local_103c <= uVar2)) || (0x31 < uVar1)) goto LAB_00407c6b;
  }
  FUN_0040a4ba(&local_1050);
  uVar3 = extraout_EDX_00;
LAB_00407c6b:
  FUN_0040f140(local_14 ^ (uint)&stack0xfffffff0,uVar3);
  return;
}



/* Function: FUN_00407c86 */

void * __fastcall FUN_00407c86(void *param_1)

{
  FUN_00407280(param_1,0,4,1,4,0);
  FUN_00407280((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_00407280((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_00407cc8 */

void __fastcall FUN_00407cc8(undefined2 *param_1,undefined4 param_2)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
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
  
  local_c = DAT_00410080 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_0040433c;
    local_3c = DAT_00404338;
    local_30 = DAT_0040432c;
    local_34 = DAT_00404328;
    local_28 = DAT_0040435c;
    local_2c = DAT_00404358;
    FUN_00407a5d((uint)&local_3c,3,param_1);
    param_2 = extraout_EDX;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00404360;
    local_34 = DAT_00404310;
    local_38 = DAT_00404364;
    local_2c = DAT_00404330;
    local_30 = DAT_00404314;
    local_28 = DAT_00404334;
    FUN_00407a5d((uint)&local_3c,3,param_1 + 0x12);
    param_2 = extraout_EDX_00;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00404350;
    local_34 = DAT_00404308;
    local_38 = DAT_00404354;
    local_2c = DAT_00404340;
    local_30 = DAT_0040430c;
    local_24 = DAT_00404318;
    local_28 = DAT_00404344;
    local_1c = DAT_00404320;
    local_20 = DAT_0040431c;
    local_14 = DAT_00404348;
    local_18 = DAT_00404324;
    local_10 = DAT_0040434c;
    FUN_00407a5d((uint)&local_3c,6,param_1 + 0x24);
    param_2 = extraout_EDX_01;
  }
  FUN_0040f140(local_c ^ (uint)&local_3c,param_2);
  return;
}



/* Function: FUN_00407e1e */

void __thiscall FUN_00407e1e(void *this,uint *param_1,int param_2,int param_3)

{
  int *this_00;
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  this_00 = (int *)((int)this + 0x18);
  uVar4 = 0;
  *param_1 = 0;
  uVar2 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  if (uVar2 != 0) {
    do {
      piVar1 = (int *)(*this_00 + uVar4 * 8);
      uVar4 = uVar4 + 1;
      if (*piVar1 == 0) {
        *piVar1 = param_2;
        piVar1[1] = param_3;
        *param_1 = uVar4;
        return;
      }
    } while (uVar4 < uVar2);
  }
  local_c = param_2;
  local_8 = param_3;
  uVar3 = FUN_00406e62(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_00407e95 */

void __thiscall FUN_00407e95(void *this,PSRWLOCK param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    AcquireSRWLockExclusive(param_1);
    iVar1 = *(int *)((int)this + 0x18);
    uVar2 = param_2 - 1;
    if (uVar2 < (uint)(*(int *)((int)this + 0x1c) - iVar1) >> 3) {
      *(undefined4 *)(iVar1 + uVar2 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + uVar2 * 8) = 0;
    }
    if (param_1 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(param_1);
    }
    if (this != (void *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
    }
  }
  return;
}



/* Function: FUN_00407ef4 */

void __thiscall FUN_00407ef4(void *this,PSRWLOCK param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int local_14;
  code *local_10;
  
  AcquireSRWLockShared(param_1);
  uVar2 = (uint)(*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) >> 3;
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(param_1);
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      AcquireSRWLockExclusive(param_1);
      local_10 = (code *)0x0;
      if (uVar3 < uVar2) {
        do {
          piVar1 = (int *)(*(int *)((int)this + 0x18) + uVar3 * 8);
          uVar3 = uVar3 + 1;
          if (*piVar1 != 0) {
            local_10 = (code *)*piVar1;
            local_14 = piVar1[1];
            goto LAB_00407f79;
          }
        } while (uVar3 < uVar2);
      }
      local_14 = 0;
LAB_00407f79:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_10 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_00411264)(local_14);
        (*local_10)();
      }
      if (this != (void *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
    } while (uVar3 < uVar2);
  }
  return;
}



/* Function: FUN_00407fc7 */

void __fastcall FUN_00407fc7(void *param_1)

{
  FUN_00407ff4(param_1);
  FUN_0040a4ba((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_00408185((int)param_1 + 4);
  return;
}



/* Function: FUN_00407ff4 */

void __fastcall FUN_00407ff4(void *param_1)

{
  undefined4 extraout_EDX;
  undefined2 local_70 [54];
  
  FUN_00407c86(local_70);
  FUN_00408138(param_1,local_70);
  FUN_00407cc8(local_70,extraout_EDX);
  FUN_00408185((int)local_70);
  return;
}



/* Function: FUN_0040802b */

undefined1 __thiscall FUN_0040802b(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_0040a46e((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_0040a44b((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_00408084 */

undefined1 __thiscall FUN_00408084(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_004080ef((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_0040802b(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_004080ef */

void __fastcall FUN_004080ef(PSRWLOCK param_1)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar1;
  undefined2 local_70 [54];
  
  FUN_00407c86(local_70);
  AcquireSRWLockExclusive(param_1);
  FUN_00408138(param_1,local_70);
  uVar1 = extraout_EDX;
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
    uVar1 = extraout_EDX_00;
  }
  FUN_00407cc8(local_70,uVar1);
  FUN_00408185((int)local_70);
  return;
}



/* Function: FUN_00408138 */

void __thiscall FUN_00408138(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_004072fe(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_004072fe((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_004072fe((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_00408185 */

void __fastcall FUN_00408185(int param_1)

{
  FUN_0040a4ba((int *)(param_1 + 100));
  FUN_0040a4ba((int *)(param_1 + 0x40));
  FUN_0040a4ba((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_004081a9 */

void __fastcall FUN_004081a9(undefined1 *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_0040a4da(piVar3,0);
  FUN_0040a4da(param_1 + 0x1c,0);
  FUN_0040a4ba((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0040862b(*(int *)(param_1 + 0x78));
  }
  FUN_0040a4ba((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_0040702c(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_0040a4ba((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0040ac71(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*piVar3 != 0) {
    FUN_0040ac71((PTP_TIMER)*piVar3);
  }
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    cVar1 = FUN_00405d66();
    if (cVar1 == '\0') {
      FUN_0040ac2e(piVar3 + 1,(undefined4 *)&stack0xfffffff8);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_0040a5a6(piVar3 + 2,0);
        FUN_0040a5a6(piVar3 + 3,0);
        if (piVar3 != (int *)0x0) {
          DVar2 = GetLastError();
          FUN_0040653d(piVar3);
          SetLastError(DVar2);
        }
        FUN_0040aa05((int)piVar3);
        DVar2 = 0;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,DVar2,piVar3);
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        FUN_0040653d(piVar3);
      }
    }
    else {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_00407ff4(piVar3 + 4);
      }
    }
    return;
  }
  return;
}



/* Function: FUN_00408243 */

void __thiscall FUN_00408243(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((((*this != '\0') && (bVar1 = FUN_004083f4((int)this), bVar1)) &&
      (cVar2 = FUN_00408084(*(void **)((int)this + 0xc),param_1,param_2,param_3), cVar2 != '\0')) &&
     (cVar2 = FUN_00405d66(), cVar2 == '\0')) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    FUN_00408481(this);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_004082a0 */

void __thiscall FUN_004082a0(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_00405d66(), cVar1 == '\0')) &&
     (bVar2 = FUN_004083f4((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_00407e1e(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x4085e0,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_00407e1e((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00408340 */

void __fastcall FUN_00408340(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00405d66();
  if (cVar1 == '\0') {
    bVar2 = FUN_004083f4(param_1);
    if (bVar2) {
      FUN_00407ef4(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_004080ef(*(PSRWLOCK *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



/* Function: FUN_00408376 */

void __fastcall
FUN_00408376(char *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5)

{
  PSRWLOCK SRWLock;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  if ((*param_1 != '\0') && (cVar1 = FUN_00405d66(), param_2 = extraout_EDX, cVar1 == '\0')) {
    SRWLock = (PSRWLOCK)(param_1 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    local_e = 0;
    local_14 = param_3;
    local_10 = param_4;
    local_c = param_5;
    FUN_00406e62(param_1 + 0x7c,&local_14,0xc);
    FUN_004084e2(param_1);
    param_2 = extraout_EDX_00;
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
      param_2 = extraout_EDX_01;
    }
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004083f4 */

bool __fastcall FUN_004083f4(int param_1)

{
  PSRWLOCK SRWLock;
  DWORD dwErrCode;
  int iVar1;
  uint uVar2;
  bool bVar3;
  int local_8;
  
  bVar3 = *(int *)(param_1 + 0xc) == 0;
  if (bVar3) {
    local_8 = param_1;
    dwErrCode = GetLastError();
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        local_8 = 0;
        iVar1 = FUN_0040a798(*(undefined4 *)(param_1 + 4),&local_8);
        if ((-1 < iVar1) && (*(int *)(param_1 + 8) == 0)) {
          *(int *)(param_1 + 8) = local_8;
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
    SetLastError(dwErrCode);
    bVar3 = *(int *)(param_1 + 0xc) == 0;
  }
  return !bVar3;
}



/* Function: FUN_00408481 */

void __fastcall FUN_00408481(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040b1d0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040a4da(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00406d55(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_004084e2 */

void __fastcall FUN_004084e2(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040b210,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040a4da(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00406d55(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_00408550 */

void FUN_00408550(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00407ef4(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00408573 */

bool __fastcall FUN_00408573(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_0041045c;
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0x4c);
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_00406219("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_0041045c = pcVar2, pcVar2 == (code *)0x0)) {
      iVar3 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_00411264)(FUN_00408550,param_1,0,piVar1);
      iVar3 = (*pcVar2)();
    }
  }
  return iVar3 == 0;
}



/* Function: FUN_004085e0 */

void FUN_004085e0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00407ef4(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00408603 */

LPCRITICAL_SECTION __fastcall FUN_00408603(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_0040862b */

void FUN_0040862b(int param_1)

{
  if ((param_1 != 0) && (DAT_004107ec != (PSRWLOCK)0x0)) {
    FUN_00407e95(DAT_004107ec + 0x1c,DAT_004107ec,param_1);
  }
  return;
}



/* Function: FUN_00408660 */

void FUN_00408660(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_00408340(0x4107e0);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_004064ae(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_00408243(&DAT_004107e0,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_00408376(&DAT_004107e0,param_2 >> 0x1f,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_004086e0 */

void FUN_004086e0(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_004082a0(&DAT_004107e0,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_004107e0 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_004107f0);
      bVar1 = FUN_00408573(0x4107e0);
      if (bVar1) {
        FUN_00407e1e(&DAT_00410804,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004107f0);
    }
  }
  return;
}



/* Function: FUN_00408750 */

void FUN_00408750(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_004107e0 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_00410830;
  }
  else {
    if (DAT_004107e0 == '\0') {
      return;
    }
    this = &DAT_00410804;
  }
  FUN_00407e95(this,(PSRWLOCK)&DAT_004107f0,param_1);
  return;
}



/* Function: FUN_00408794 */

undefined4 __fastcall FUN_00408794(wchar_t *param_1,uint param_2)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  uint local_c;
  uint local_8;
  
  if ((param_1 == (wchar_t *)0x0) || (param_2 == 0)) {
LAB_004088a6:
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_00405342(param_1,param_2,(int *)&local_8);
    if ((iVar2 < 0) || (param_2 <= local_8)) {
      return 0x18;
    }
    wVar1 = *param_1;
    if (wVar1 != L'\0') {
      local_8 = 0;
      do {
        local_c = local_8;
        pwVar3 = wcschr(L" \r\n\t",wVar1);
        if (pwVar3 == (wchar_t *)0x0) break;
        local_c = local_c + 1;
        wVar1 = param_1[local_c];
        local_8 = local_c;
      } while (wVar1 != L'\0');
      if (param_2 < local_c) goto LAB_004088a6;
      if (local_c != 0) {
        memmove(param_1,param_1 + local_c,(param_2 - local_c) * 2);
      }
    }
    pwVar3 = param_1;
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    iVar2 = (int)pwVar3 - (int)(param_1 + 1) >> 1;
    while ((iVar2 != 0 &&
           (pwVar3 = wcschr(L" \r\n\t",param_1[iVar2 + -1]), pwVar3 != (wchar_t *)0x0))) {
      iVar2 = iVar2 + -1;
      param_1[iVar2] = L'\0';
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Function: FUN_004088b2 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

LSTATUS __fastcall FUN_004088b2(LPCWSTR param_1,int *param_2)

{
  wchar_t wVar1;
  LSTATUS LVar2;
  LSTATUS LVar3;
  int iVar4;
  HANDLE pvVar5;
  wchar_t *pwVar6;
  LSTATUS unaff_ESI;
  SIZE_T SVar7;
  wchar_t *lpData;
  DWORD dwFlags;
  DWORD local_30;
  LPCWSTR local_2c;
  DWORD local_28;
  HKEY local_24;
  LSTATUS local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x4088be;
  local_20 = 0;
  local_24 = (HKEY)0x0;
  local_28 = 0;
  lpData = (wchar_t *)0x0;
  local_30 = 0;
  if (param_1 == (LPCWSTR)0x0) {
    ExceptionList = local_14;
    return unaff_ESI;
  }
  if (param_2 == (int *)0x0) {
    ExceptionList = local_14;
    return unaff_ESI;
  }
  local_8 = 0;
  local_2c = param_1;
  LVar3 = RegOpenKeyExW((HKEY)0x80000002,
                        L"Software\\Microsoft\\Windows NT\\CurrentVersion\\UnattendSettings\\International"
                        ,0,0x20019,&local_24);
  if (LVar3 == 0) {
    local_20 = LVar3;
    LVar3 = RegQueryValueExW(local_24,local_2c,(LPDWORD)0x0,&local_30,(LPBYTE)0x0,&local_28);
    LVar2 = LVar3;
    if (LVar3 == 0) {
      if ((local_30 == 1) && (local_28 != 0)) {
        if (local_28 < 2) {
          LVar3 = 0x18;
          LVar2 = LVar3;
          goto LAB_004089d9;
        }
        SVar7 = local_28 + 2;
        local_28 = SVar7;
        local_20 = LVar3;
        pvVar5 = GetProcessHeap();
        LVar3 = 8;
        lpData = (wchar_t *)HeapAlloc(pvVar5,8,SVar7);
        SVar7 = local_28;
        pwVar6 = lpData;
        LVar2 = LVar3;
        if (lpData == (wchar_t *)0x0) goto LAB_004089d9;
        for (; SVar7 != 0; SVar7 = SVar7 - 1) {
          *(undefined1 *)pwVar6 = 0;
          pwVar6 = (wchar_t *)((int)pwVar6 + 1);
        }
        LVar3 = RegQueryValueExW(local_24,local_2c,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)lpData,
                                 &local_28);
        LVar2 = LVar3;
        if (LVar3 != 0) goto LAB_004089d9;
        local_20 = LVar3;
        iVar4 = FUN_00408794(lpData,local_28 >> 1);
        if (iVar4 != 0) {
          pwVar6 = lpData;
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          LVar2 = local_20;
          if ((int)pwVar6 - (int)(lpData + 1) >> 1 != 0) goto LAB_004089d9;
        }
      }
      LVar3 = 0x545;
      LVar2 = LVar3;
    }
  }
  else {
    local_24 = (HKEY)0x0;
    LVar2 = LVar3;
  }
LAB_004089d9:
  local_20 = LVar2;
  local_8 = 0xfffffffe;
  FUN_00408a32();
  if (LVar3 == 0) {
    *param_2 = (int)lpData;
  }
  if (local_24 != (HKEY)0x0) {
    RegCloseKey(local_24);
  }
  if (*param_2 == 0) {
    FUN_0040dec0(0,L"Unattended setting \"%s\" could not be found. error:(%u). Ignoring.");
    if (lpData != (wchar_t *)0x0) {
      dwFlags = 0;
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,dwFlags,lpData);
    }
  }
  else {
    FUN_0040dec0(0,L"Found unattend setting \"%s\" with value: \"%s\".");
  }
  ExceptionList = local_14;
  return unaff_ESI;
}



/* Function: FUN_00408a32 */

void FUN_00408a32(void)

{
  undefined4 unaff_EBX;
  int unaff_EBP;
  
  if (*(HKEY *)(unaff_EBP + -0x20) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)(unaff_EBP + -0x20));
    *(undefined4 *)(unaff_EBP + -0x20) = unaff_EBX;
  }
  return;
}



/* Function: FUN_00408a74 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

LSTATUS __fastcall FUN_00408a74(uint param_1)

{
  LSTATUS LVar1;
  DWORD local_30;
  DWORD local_2c;
  LSTATUS local_28;
  HKEY local_24;
  uint local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x408a80;
  local_28 = 0;
  local_24 = (HKEY)0x0;
  local_20[0] = 0;
  local_8 = 0;
  local_28 = RegCreateKeyExW((HKEY)0x80000002,L"System\\CurrentControlSet\\Control\\MUI\\Settings",0
                             ,(LPWSTR)0x0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_24,
                             (LPDWORD)0x0);
  if (local_28 == 0) {
    local_30 = 4;
    local_2c = 4;
    local_28 = RegQueryValueExW(local_24,L"IntlOOBEUnattend",(LPDWORD)0x0,&local_30,(LPBYTE)local_20
                                ,&local_2c);
    if (local_28 != 0) {
      if (local_28 != 2) goto LAB_00408b0c;
      local_20[0] = 0;
    }
    local_20[0] = local_20[0] | param_1;
    local_28 = RegSetValueExW(local_24,L"IntlOOBEUnattend",0,4,(BYTE *)local_20,local_2c);
  }
LAB_00408b0c:
  LVar1 = local_28;
  local_8 = 0xfffffffe;
  FUN_00408b2d();
  ExceptionList = local_14;
  return LVar1;
}



/* Function: FUN_00408b2d */

void FUN_00408b2d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    RegCloseKey(*(HKEY *)(unaff_EBP + -0x20));
  }
  return;
}



/* Function: FUN_00408b43 */

void FUN_00408b43(LPCSTR param_1)

{
  if ((DAT_004104d0 == (HMODULE)0x0) &&
     (DAT_004104d0 = LoadLibraryW(L"intl.cpl"), DAT_004104d0 == (HMODULE)0x0)) {
    return;
  }
  GetProcAddress(DAT_004104d0,param_1);
  return;
}



/* Function: FUN_00408b79 */

DWORD __fastcall FUN_00408b79(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  DWORD DVar3;
  
  iVar1 = InstallLayoutOrTip(param_1,0x40);
  if (iVar1 != 0) {
    iVar1 = SetDefaultLayoutOrTip(param_1,2);
    if (iVar1 != 0) {
      pcVar2 = (code *)FUN_00408b43("IntlSetInputLocales");
      if (pcVar2 == (code *)0x0) {
        FUN_0040dec0(1,L"Failed to load IntlSetInputLocales from intl.cpl.");
                    /* WARNING: Could not recover jumptable at 0x00408bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        DVar3 = GetLastError();
        return DVar3;
      }
      (*(code *)PTR_guard_check_icall_00411264)(param_1,0,0);
      DVar3 = (*pcVar2)();
      return DVar3;
    }
  }
  return 0x10dd;
}



/* Function: FUN_00408bde */

bool __fastcall FUN_00408bde(LPCWSTR param_1)

{
  int iVar1;
  LPCWSTR local_8;
  
  local_8 = param_1;
  iVar1 = GetLocaleInfoEx(param_1,0x20001004,(LPWSTR)&local_8,2);
  if ((((iVar1 != 0) && (local_8 != (LPCWSTR)0x0)) &&
      (iVar1 = GetLocaleInfoEx(param_1,0x2000000b,(LPWSTR)&local_8,2), iVar1 != 0)) &&
     ((local_8 != (LPCWSTR)0x1 &&
      (iVar1 = GetLocaleInfoEx(param_1,0x20001011,(LPWSTR)&local_8,2), iVar1 != 0)))) {
    return local_8 == (LPCWSTR)0x2;
  }
  return true;
}



/* Function: FUN_00408c4c */

DWORD __fastcall FUN_00408c4c(LPCWSTR param_1)

{
  bool bVar1;
  LCID LVar2;
  code *pcVar3;
  DWORD DVar4;
  undefined3 extraout_var;
  
  LVar2 = LocaleNameToLCID(param_1,0);
  if (LVar2 == 0) {
    return 0x57;
  }
  pcVar3 = (code *)FUN_00408b43("IntlUpdateSystemLocale");
  if (pcVar3 == (code *)0x0) {
    FUN_0040dec0(1,L"Failed to load IntlUpdateSystemLocale from intl.cpl.");
                    /* WARNING: Could not recover jumptable at 0x00408c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar4 = GetLastError();
    return DVar4;
  }
  bVar1 = FUN_00408bde(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_0040dec0(2,
                 L"The selected locale \"%s\" is an unexpected Unicode-only locale. The system locale will be set to UTF-8."
                );
  }
  (*(code *)PTR_guard_check_icall_00411264)(param_1,3);
  DVar4 = (*pcVar3)();
  return DVar4;
}



/* Function: FUN_00408cbb */

DWORD __fastcall FUN_00408cbb(LPCWSTR param_1,int param_2,int param_3)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  LPWSTR lpLCData;
  DWORD DVar6;
  SIZE_T dwBytes;
  LPCWSTR local_8;
  
  local_8 = param_1;
  pcVar1 = (code *)FUN_00408b43("IntlCopyDefaultUserLocale");
  if (pcVar1 == (code *)0x0) {
    FUN_0040dec0(1,L"Failed to load IntlCopyDefaultUserLocale from intl.cpl.");
    DVar2 = GetLastError();
  }
  else {
    DVar2 = NlsUpdateLocale(param_1,1);
    if (DVar2 == 0) {
      FUN_0040dec0(0,L"Succeed in setting current user locale to \"%s\".");
      iVar3 = GetLocaleInfoEx(param_1,0x2000005b,(LPWSTR)&local_8,2);
      if (0 < iVar3) {
        BVar4 = SetUserGeoID((GEOID)local_8);
        if (BVar4 == 0) {
          DVar2 = GetLastError();
          FUN_0040dec0(1,L"Failed to set location to %d. Error code is 0x%x.");
        }
        else {
          FUN_0040dec0(0,L"Succeed in setting location to %d.");
          DVar2 = 0;
        }
        if (DVar2 != 0) {
          return DVar2;
        }
      }
      (*(code *)PTR_guard_check_icall_00411264)(1);
      DVar2 = (*pcVar1)();
      if (DVar2 == 0) {
        FUN_0040dec0(0,
                     L"Succeed in copying settings for current user locale \"%s\" to default user/system/new user accounts."
                    );
        if (param_2 != 0) {
          FUN_0040dec0(0,
                       L"No unattended setting for SystemLocale.  Use UserLocale value: \"%s\" to set system locale"
                      );
          DVar2 = FUN_00408c4c(param_1);
          if (DVar2 != 0) {
            return DVar2;
          }
        }
        if (param_3 != 0) {
          FUN_0040dec0(0,
                       L"No unattended setting for InputLocale.  Try install default keyboard for UserLocale value: \"%s\""
                      );
          iVar3 = GetLocaleInfoEx(param_1,0x5e,(LPWSTR)0x0,0);
          if (0 < iVar3) {
            dwBytes = iVar3 * 2;
            DVar6 = 8;
            pvVar5 = GetProcessHeap();
            lpLCData = (LPWSTR)HeapAlloc(pvVar5,DVar6,dwBytes);
            if (lpLCData == (LPWSTR)0x0) {
              FUN_0040dec0(1,L"Out of memory");
              DVar2 = 8;
            }
            else {
              iVar3 = GetLocaleInfoEx(param_1,0x5e,lpLCData,iVar3);
              if (0 < iVar3) {
                FUN_0040dec0(0,L"Install keyboard layouts: \"%s\" for \"%s\".");
                DVar2 = FUN_00408b79(lpLCData);
              }
              DVar6 = 0;
              pvVar5 = GetProcessHeap();
              HeapFree(pvVar5,DVar6,lpLCData);
            }
          }
        }
      }
      else {
        FUN_0040dec0(1,
                     L"Failed in copying locale settings to default user account/system acconts.  Error code: 0x%x"
                    );
      }
    }
    else {
      FUN_0040dec0(1,L"Failed in setting current user locale to %s. Error code is 0x%x");
    }
  }
  return DVar2;
}



/* Function: FUN_00408e7f */

int __fastcall FUN_00408e7f(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_0040dec0(0,L"Setting UILanguage setting.");
  if (param_1 == 0) {
    iVar1 = 0x57;
    FUN_0040dec0(1,L"UILanguage setting is not present.");
  }
  else {
    iVar1 = FUN_0040db7e();
    if (iVar1 == 0) {
      uVar2 = RtlpSetPreferredUILanguages(0x8008,param_1,&local_8);
      iVar1 = RtlNtStatusToDosError(uVar2);
      if (iVar1 == 0) {
        FUN_0040dec0(0,L"Setting UILanguage setting to %s succeded.");
      }
      else {
        FUN_0040dec0(1,L"Failed to set UILanguage value to %s. Error %d");
      }
    }
    else {
      FUN_0040dec0(1,L"Unattend file cannot contain UILanguage setting for OS upgrades.");
      iVar1 = 0x57;
    }
  }
  return iVar1;
}



/* Function: FUN_00408f1b */

undefined4 __cdecl FUN_00408f1b(undefined4 *param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  HANDLE pvVar4;
  short *lpMem;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  DWORD DVar8;
  SIZE_T dwBytes;
  uint local_10;
  short *local_c;
  int local_8;
  
  uVar2 = param_2;
  iVar3 = 0;
  local_8 = 0;
  uVar7 = 0;
  local_c = (short *)0x0;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    uVar7 = 0x57;
  }
  else {
    uVar6 = 0;
    if (param_2 != 0) {
      puVar5 = &param_2;
      do {
        puVar5 = puVar5 + 1;
        iVar3 = FUN_00405342((short *)*puVar5,0x7fffffff,&local_8);
        if (iVar3 < 0) {
          return 0x18;
        }
        iVar3 = (int)local_c + local_8;
        uVar6 = uVar6 + 1;
        local_c = (short *)iVar3;
      } while (uVar6 < uVar2);
    }
    dwBytes = (iVar3 + uVar2) * 2 + 2;
    DVar8 = 8;
    pvVar4 = GetProcessHeap();
    lpMem = (short *)HeapAlloc(pvVar4,DVar8,dwBytes);
    if (lpMem == (short *)0x0) {
      uVar7 = 8;
    }
    else {
      local_10 = 0;
      if (uVar2 != 0) {
        puVar5 = &param_2;
        local_c = lpMem;
        do {
          puVar5 = puVar5 + 1;
          psVar1 = (short *)*puVar5;
          iVar3 = FUN_00405342(psVar1,0x7fffffff,&local_8);
          if (iVar3 < 0) {
            uVar7 = 0x18;
LAB_00409014:
            DVar8 = 0;
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,DVar8,lpMem);
            return uVar7;
          }
          iVar3 = FUN_00405246(local_c,local_8 + 1,(int)psVar1);
          if (iVar3 < 0) {
            uVar7 = 0x10a;
            goto LAB_00409014;
          }
          local_c = local_c + local_8 + 1;
          local_10 = local_10 + 1;
        } while (local_10 < uVar2);
      }
      *param_1 = lpMem;
    }
  }
  return uVar7;
}



/* Function: FUN_00409036 */

void __thiscall FUN_00409036(void *this,undefined4 *param_1)

{
  int iVar1;
  LSTATUS LVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar3;
  DWORD local_21c;
  HKEY local_218;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  memset(local_214,0,0x20a);
  local_218 = (HKEY)0x0;
  local_21c = 0x15c;
  uVar3 = extraout_EDX;
  if ((this != (void *)0x0) && (param_1 != (undefined4 *)0x0)) {
    iVar1 = FUN_004052fe(local_214,0x105,L"%s\\%s");
    uVar3 = extraout_EDX_00;
    if ((-1 < iVar1) &&
       (LVar2 = RegOpenKeyExW((HKEY)0x80000002,local_214,0,0x20019,&local_218),
       uVar3 = extraout_EDX_01, LVar2 == 0)) {
      RegQueryValueExW(local_218,L"DefaultFallback",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)*param_1,
                       &local_21c);
      uVar3 = extraout_EDX_02;
    }
    if (local_218 != (HKEY)0x0) {
      RegCloseKey(local_218);
      uVar3 = extraout_EDX_03;
    }
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00409125 */

int __fastcall FUN_00409125(void *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  HANDLE pvVar4;
  short *lpMem;
  int iVar5;
  DWORD DVar6;
  wchar_t *pwVar7;
  SIZE_T dwBytes;
  short *psVar8;
  int local_1c;
  short *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  short *local_8;
  
  local_c = 0x55;
  local_14 = 0;
  lpMem = (short *)0x0;
  local_1c = 0;
  local_10 = 0;
  FUN_0040dec0(0,
               L"Trying to read the DefaultFallback or first available valid one from the registry for %s"
              );
  uVar2 = RtlGetUILanguageInfo(8,param_1,0,0,&local_10);
  iVar3 = RtlNtStatusToDosError(uVar2);
  if (iVar3 == 0) {
    if ((local_10 & 1) == 0) {
      dwBytes = 0xae;
      DVar6 = 8;
      pvVar4 = GetProcessHeap();
      lpMem = (short *)HeapAlloc(pvVar4,DVar6,dwBytes);
      local_18 = lpMem;
      if (lpMem != (short *)0x0) {
        iVar3 = FUN_00409036(param_1,&local_18);
        lpMem = local_18;
        if (iVar3 == 0) {
          iVar3 = 0;
          if ((local_10 & 4) != 0) {
            uVar2 = RtlGetUILanguageInfo(8,local_18,0,0,0);
            iVar3 = RtlNtStatusToDosError(uVar2);
            if (iVar3 != 0) {
              FUN_0040dec0(0,L"The Default fallback language value is not installed for %s (LIP)");
              goto LAB_00409229;
            }
          }
        }
        else {
LAB_00409229:
          iVar3 = local_c * 2;
          pvVar4 = GetProcessHeap();
          local_8 = (short *)HeapAlloc(pvVar4,8,iVar3 + 2);
          if (local_8 == (short *)0x0) goto LAB_004091d7;
          uVar2 = RtlGetUILanguageInfo(8,param_1,local_8,&local_c,&local_14);
          iVar3 = RtlNtStatusToDosError(uVar2);
          if (iVar3 == 0x7a) {
            DVar6 = 0;
            psVar8 = local_8;
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,DVar6,psVar8);
            iVar3 = local_c * 2;
            pvVar4 = GetProcessHeap();
            local_8 = (short *)HeapAlloc(pvVar4,8,iVar3 + 2);
            if (local_8 == (short *)0x0) goto LAB_004091d7;
            uVar2 = RtlGetUILanguageInfo(8,param_1,local_8,&local_c,&local_14);
            iVar3 = RtlNtStatusToDosError(uVar2);
            if (iVar3 == 0) goto LAB_004092e2;
            pwVar7 = 
            L"Failed querying language and fallback information about UILanguageSetting %s.";
            iVar5 = 0;
LAB_004092ca:
            FUN_0040dec0(iVar5,pwVar7);
          }
          else {
            if (iVar3 != 0) {
              pwVar7 = 
              L"Internal error while getting language information about UILanguageSetting %s.";
              iVar5 = 2;
              goto LAB_004092ca;
            }
LAB_004092e2:
            if ((local_14 & 2) == 0) {
              sVar1 = *local_8;
              local_18 = local_8;
              while (sVar1 != 0) {
                iVar3 = FUN_00405246(lpMem,0x56,(int)local_18);
                if (iVar3 < 0) goto LAB_004092f9;
                uVar2 = RtlGetUILanguageInfo(8,lpMem,0,0,0);
                iVar3 = RtlNtStatusToDosError(uVar2);
                if (iVar3 == 0) break;
                iVar5 = FUN_00405342(local_18,0x55,&local_1c);
                if (iVar5 < 0) {
                  iVar3 = 0x18;
                  break;
                }
                local_18 = local_18 + local_1c + 1;
                sVar1 = *local_18;
              }
            }
            else {
              iVar5 = FUN_00405246(lpMem,0x56,(int)local_8);
              if (iVar5 < 0) {
LAB_004092f9:
                iVar3 = 0x10a;
              }
            }
          }
          DVar6 = 0;
          psVar8 = local_8;
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,DVar6,psVar8);
          if (iVar3 != 0) goto LAB_0040917d;
        }
        *param_2 = lpMem;
        FUN_0040dec0(0,L"Fallback (default or first available) is found: %s, for language %s");
        goto LAB_004091a2;
      }
LAB_004091d7:
      iVar3 = 8;
    }
    else {
      iVar3 = 0x32;
    }
  }
LAB_0040917d:
  FUN_0040dec0(2,
               L"Failed querying default fallback or the first available fallback for UILanguage %s."
              );
  if (lpMem != (short *)0x0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,lpMem);
  }
LAB_004091a2:
  FUN_0040dec0(0,L"Finished trying to locate default or first available fallback for %s");
  return iVar3;
}



/* Function: FUN_004093ab */

int __fastcall FUN_004093ab(void *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID lpMem;
  LPVOID local_10;
  LPVOID local_c;
  void *local_8;
  
  local_8 = (void *)0x0;
  local_10 = (LPVOID)0x0;
  local_c = (LPVOID)0x0;
  if (((param_1 == (void *)0x0) || (param_2 == 0)) || (param_3 == (undefined4 *)0x0)) {
    iVar1 = 0x57;
  }
  else {
    FUN_0040dec0(0,L"Trying to build default fallback list for %s");
    if ((param_2 & 1) == 0) {
      iVar1 = FUN_00409125(param_1,&local_8);
      lpMem = (LPVOID)0x0;
      if (iVar1 == 0) {
        if ((param_2 & 4) == 0) {
          if ((param_2 & 2) == 0) {
            iVar1 = 0x57;
          }
          else {
            iVar1 = FUN_00409125(local_8,&local_10);
            if (iVar1 == 0) {
              iVar1 = FUN_00408f1b(&local_c,3);
              lpMem = local_c;
            }
            else {
              iVar1 = FUN_00408f1b(&local_c,2);
              lpMem = local_c;
            }
          }
          if (local_10 != (LPVOID)0x0) {
            pvVar2 = GetProcessHeap();
            HeapFree(pvVar2,0,local_10);
          }
        }
        else {
          iVar1 = FUN_00408f1b(&local_c,2);
          lpMem = local_c;
        }
      }
      if (local_8 != (void *)0x0) {
        pvVar2 = GetProcessHeap();
        HeapFree(pvVar2,0,local_8);
      }
      if (iVar1 == 0) {
        *param_3 = lpMem;
      }
      else if (lpMem != (LPVOID)0x0) {
        pvVar2 = GetProcessHeap();
        HeapFree(pvVar2,0,lpMem);
      }
    }
    else {
      iVar1 = 0x57;
    }
    FUN_0040dec0(0,L"Finished trying to build default fallback list for %s");
  }
  return iVar1;
}



/* Function: FUN_004094e6 */

undefined4 __fastcall FUN_004094e6(short *param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  HANDLE pvVar5;
  short *lpMem;
  int iVar6;
  short *psVar7;
  DWORD dwFlags;
  undefined4 uVar8;
  int local_8;
  
  local_8 = 0;
  if ((param_1 == (short *)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar8 = 0x57;
  }
  else {
    iVar4 = FUN_00405342(param_1,0x55,&local_8);
    if (iVar4 < 0) {
      uVar8 = 0x18;
    }
    else {
      pvVar5 = GetProcessHeap();
      lpMem = (short *)HeapAlloc(pvVar5,8,local_8 * 2 + 4);
      iVar4 = local_8;
      if (lpMem == (short *)0x0) {
        uVar8 = 8;
      }
      else {
        iVar6 = FUN_00405246(lpMem,local_8 + 1,(int)param_1);
        if (iVar6 < 0) {
          uVar8 = 0x10a;
        }
        else {
          for (psVar7 = lpMem + iVar4; lpMem <= psVar7; psVar7 = psVar7 + -1) {
            if (*psVar7 == 0x2c) {
              *psVar7 = 0;
            }
          }
          if (*lpMem != 0) {
            for (psVar7 = lpMem + iVar4 + 1; (psVar3 = lpMem, psVar7 != lpMem && (*psVar7 == 0));
                psVar7 = psVar7 + -1) {
            }
            do {
              if (psVar7 <= psVar3) {
                *param_2 = lpMem;
                return 0;
              }
              psVar1 = psVar3 + 1;
              sVar2 = *psVar3;
              psVar3 = psVar1;
            } while ((sVar2 != 0) || (*psVar1 != 0));
          }
          uVar8 = 0x57;
        }
        dwFlags = 0;
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,dwFlags,lpMem);
      }
    }
  }
  FUN_0040dec0(1,L"Failed converting comma separated fallback string into a multi string.");
  return uVar8;
}



/* Function: FUN_004095f2 */

void __fastcall FUN_004095f2(void *param_1,uint param_2,short *param_3,undefined4 *param_4)

{
  short *psVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  HANDLE pvVar5;
  undefined4 extraout_EDX;
  LPVOID lpMem;
  LPVOID lpMem_00;
  int local_d0;
  short *local_cc;
  LPVOID local_c8;
  uint local_c4;
  void *local_c0;
  LPVOID local_bc;
  short local_b8 [88];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  lpMem_00 = (LPVOID)0x0;
  local_cc = (short *)0x0;
  local_c4 = param_2;
  local_c0 = param_1;
  memset(local_b8,0,0xae);
  lpMem = (LPVOID)0x0;
  local_d0 = 0;
  local_c8 = (LPVOID)0x0;
  local_bc = (LPVOID)0x0;
  FUN_0040dec0(0,L"Validating passed in values for UILanguage and it fallbacks.");
  if ((param_1 == (void *)0x0) || (param_4 == (undefined4 *)0x0)) {
    iVar3 = 0x57;
LAB_004097e2:
    if (lpMem != (LPVOID)0x0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,lpMem);
    }
  }
  else {
    if (param_3 == (short *)0x0) {
      FUN_0040dec0(0,L"No fallback information was passed in, will try to locate from system.");
      iVar3 = FUN_004093ab(param_1,local_c4,&local_bc);
      lpMem_00 = local_bc;
      goto LAB_00409810;
    }
    iVar3 = FUN_004094e6(param_3,&local_cc);
    psVar1 = local_cc;
    if (iVar3 == 0) {
      iVar3 = FUN_00405342(local_cc,0x55,&local_d0);
      if (iVar3 < 0) {
        iVar3 = 0x18;
      }
      else {
        iVar3 = FUN_00405246(local_b8,local_d0 + 1,(int)psVar1);
        if (-1 < iVar3) {
          iVar3 = FUN_00408f1b(&local_c8,2);
          lpMem = local_c8;
          if (iVar3 != 0) goto LAB_004097e2;
          uVar4 = RtlGetUILanguageInfo(8,local_c8,0,0,0);
          iVar3 = RtlNtStatusToDosError(uVar4);
          pvVar2 = local_c0;
          if (iVar3 == 0) {
            FUN_0040dec0(0,L"UILanguage %s is LIP");
            uVar4 = RtlGetUILanguageInfo(8,local_b8,0,0,0);
            iVar3 = RtlNtStatusToDosError(uVar4);
            if (iVar3 == 0) {
              iVar3 = 0;
              lpMem_00 = lpMem;
              goto LAB_004097f6;
            }
            FUN_0040dec0(2,
                         L"The specified fallback setting is not a valid installed language which is requirement for cases when UILanguage is a LIP. UILanguage: %s, fallback : %s"
                        );
          }
          else {
            FUN_0040dec0(2,
                         L"Passed in 1st Fallback for UILanguage setting is INVALID. UILanguage :%s, falback: %s. Will try to get default or first available fallback"
                        );
          }
          iVar3 = FUN_004093ab(pvVar2,local_c4,&local_bc);
          lpMem_00 = local_bc;
          goto LAB_004097e2;
        }
        iVar3 = 0x10a;
      }
    }
  }
LAB_004097f6:
  psVar1 = local_cc;
  if (local_cc != (short *)0x0) {
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,psVar1);
  }
LAB_00409810:
  if (iVar3 == 0) {
    *param_4 = lpMem_00;
    FUN_0040dec0(0,L"Succeeded validating and constructing a fallback list.");
  }
  else {
    FUN_0040dec0(1,L"Failed validating and constructing a fallback list.");
    if (lpMem_00 != (LPVOID)0x0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,lpMem_00);
    }
  }
  FUN_0040dec0(0,L"Finished validating passed in values for UILanguage and it fallbacks.");
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00409875 */

int __fastcall FUN_00409875(void *param_1,short *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  HANDLE hHeap;
  short *lpMem;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 local_14;
  short *local_10;
  uint local_c;
  short *local_8;
  
  local_c = 0;
  local_14 = 0;
  local_8 = (short *)0x0;
  if (param_3 == (uint *)0x0) {
    return 0x57;
  }
  local_10 = param_2;
  if ((param_1 == (void *)0x0) && (param_2 != (short *)0x0)) {
    FUN_0040dec0(2,
                 L"No value is present for UILanguage while value %s for UILanguageFallback was specified."
                );
    return 0;
  }
  uVar1 = RtlGetUILanguageInfo(8,param_1,0,0,&local_c);
  iVar2 = RtlNtStatusToDosError(uVar1);
  if (iVar2 != 0) {
    pwVar4 = L"UILanguage is not installed in the system: %s. error: %d";
    iVar3 = 1;
LAB_004098e5:
    FUN_0040dec0(iVar3,pwVar4);
    return iVar2;
  }
  if ((local_c & 1) != 0) {
    iVar2 = FUN_00408e7f((int)param_1);
    if (iVar2 == 0) {
      *param_3 = *param_3 | 1;
    }
    if (local_10 == (short *)0x0) {
      return iVar2;
    }
    pwVar4 = 
    L"A Fallback language %s is specified for UILanguage %s,which is incorrect since UILanguage is fully localised language."
    ;
    iVar3 = 2;
    goto LAB_004098e5;
  }
  iVar2 = 0;
  lpMem = (short *)0x0;
  if ((local_10 != (short *)0x0) &&
     (iVar2 = FUN_004095f2(param_1,local_c,local_10,&local_8), lpMem = local_8, iVar2 != 0)) {
    FUN_0040dec0(2,
                 L"UILanguageFallback setting was incorrect and MuiUnattend failed to find applicable one: UILanguage %s, UILanguageFallback %s. error:%d"
                );
    lpMem = local_8;
  }
  if ((local_c & 2) == 0) {
    if ((local_c & 4) == 0) goto LAB_00409a04;
    FUN_0040dec0(0,L"UILanguage %s is a LIP.");
    if ((local_10 == (short *)0x0) &&
       (iVar2 = FUN_004093ab(param_1,local_c,&local_8), lpMem = local_8, iVar2 != 0)) {
      FUN_0040dec0(1,L"Error %d building System UI language fallback for %s");
      lpMem = local_8;
      goto LAB_00409a04;
    }
  }
  iVar2 = FUN_00408e7f((int)param_1);
  if (iVar2 == 0) {
    *param_3 = *param_3 | 1;
  }
  if (lpMem == (short *)0x0) {
    return iVar2;
  }
  uVar1 = RtlpSetPreferredUILanguages(0x3008,lpMem,&local_14);
  iVar2 = RtlNtStatusToDosError(uVar1);
  if (iVar2 == 0) {
    FUN_0040dec0(0,L"%s is set as system UI language fallback.");
  }
  else {
    FUN_0040dec0(1,L"Error %d setting %s as system UI language fallback.");
  }
LAB_00409a04:
  if (lpMem == (short *)0x0) {
    return iVar2;
  }
  if (lpMem == local_10) {
    return iVar2;
  }
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,lpMem);
  return iVar2;
}



/* Function: FUN_00409a2c */

void __fastcall FUN_00409a2c(LPCWSTR param_1,int *param_2)

{
  LPVOID lpMem;
  int iVar1;
  HANDLE pvVar2;
  short *lpMem_00;
  LCID LVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar4;
  DWORD DVar5;
  SIZE_T dwBytes;
  int local_b8;
  WCHAR local_b4 [86];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  local_b8 = 0;
  memset(local_b4,0,0xaa);
  uVar4 = extraout_EDX;
  if (((param_2 == (int *)0x0) || ((short *)*param_2 == (short *)0x0)) ||
     (iVar1 = FUN_00405342((short *)*param_2,0x104,&local_b8), uVar4 = extraout_EDX_00, iVar1 < 0))
  goto LAB_00409b73;
  dwBytes = (local_b8 + 0x57) * 2;
  DVar5 = 8;
  pvVar2 = GetProcessHeap();
  lpMem_00 = (short *)HeapAlloc(pvVar2,DVar5,dwBytes);
  uVar4 = extraout_EDX_01;
  if (lpMem_00 == (short *)0x0) goto LAB_00409b73;
  iVar1 = FUN_00405246(lpMem_00,local_b8 + 0x57,*param_2);
  if (-1 < iVar1) {
    lpMem_00[local_b8] = 0x3b;
    if ((param_1 == (LPCWSTR)0x0) || (LVar3 = LocaleNameToLCID(param_1,0), LVar3 == 0)) {
      iVar1 = GetUserDefaultLocaleName(local_b4,0x55);
      if (iVar1 == 0) goto LAB_00409b42;
      param_1 = local_b4;
    }
    iVar1 = FUN_0040527b(lpMem_00,local_b8 + 0x57,(int)param_1);
    if (-1 < iVar1) {
      lpMem = (LPVOID)*param_2;
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,lpMem);
      *param_2 = (int)lpMem_00;
      uVar4 = extraout_EDX_03;
      goto LAB_00409b73;
    }
  }
LAB_00409b42:
  DVar5 = 0;
  pvVar2 = GetProcessHeap();
  HeapFree(pvVar2,DVar5,lpMem_00);
  uVar4 = extraout_EDX_02;
LAB_00409b73:
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00409b8a */

void __fastcall FUN_00409b8a(wchar_t *param_1)

{
  DWORD DVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  WCHAR local_14 [6];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  DVar1 = ExpandEnvironmentStringsW(L"%systemdrive%",local_14,5);
  if ((DVar1 == 0) || (5 < DVar1)) {
    GetLastError();
    uVar2 = extraout_EDX_00;
  }
  else {
    FUN_004052fe(param_1,0x104,L"%s\\%s");
    uVar2 = extraout_EDX;
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_00409bf8 */

int __fastcall FUN_00409bf8(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,int param_4)

{
  int iVar1;
  HANDLE pvVar2;
  LPWSTR lpLCData;
  undefined4 extraout_ECX;
  int iVar3;
  wchar_t *pwVar4;
  DWORD DVar5;
  SIZE_T dwBytes;
  
  iVar3 = 0;
  if (param_3 != (LPCWSTR)0x0) {
    iVar3 = FUN_0040c7bb(param_1,param_3,param_1,param_1,param_4);
    if (iVar3 == 0) {
      pwVar4 = L"Input locale is set for user:%s, value:%s.";
      iVar1 = 0;
    }
    else {
      pwVar4 = L"Failed setting input locale for user:%s, value:%s.";
      iVar1 = 2;
    }
    FUN_0040dec0(iVar1,pwVar4);
  }
  if (param_2 != (LPCWSTR)0x0) {
    iVar3 = FUN_0040bf50(param_1,(ushort *)param_2);
    pwVar4 = L"Failed setting user locale for user:%s, value:%s.";
    if (iVar3 == 0) {
      pwVar4 = L"User locale is set for user:%s, value:%s.";
    }
    FUN_0040dec0(-(uint)(iVar3 != 0) & 2,pwVar4);
    if (param_3 == (LPCWSTR)0x0) {
      iVar1 = GetLocaleInfoEx(param_2,0x5e,(LPWSTR)0x0,0);
      if (0 < iVar1) {
        dwBytes = iVar1 * 2;
        DVar5 = 8;
        pvVar2 = GetProcessHeap();
        lpLCData = (LPWSTR)HeapAlloc(pvVar2,DVar5,dwBytes);
        if (lpLCData == (LPWSTR)0x0) {
          FUN_0040dec0(1,L"Out of memory");
          iVar3 = 8;
        }
        else {
          iVar1 = GetLocaleInfoEx(param_2,0x5e,lpLCData,iVar1);
          if (0 < iVar1) {
            FUN_0040dec0(0,L"Install keyboard layouts: \"%s\" for \"%s\" into user \"%s\".");
            iVar3 = FUN_0040c7bb(param_1,param_2,extraout_ECX,extraout_ECX,param_4);
          }
          DVar5 = 0;
          pvVar2 = GetProcessHeap();
          HeapFree(pvVar2,DVar5,lpLCData);
        }
      }
    }
  }
  return iVar3;
}



/* Function: FUN_00409d1c */

void __fastcall FUN_00409d1c(LPCWSTR param_1,LPCWSTR param_2)

{
  uint uVar1;
  char cVar2;
  UINT UVar3;
  int iVar4;
  DWORD DVar5;
  int *piVar6;
  wchar_t *pwVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int *piVar8;
  undefined4 extraout_EDX_00;
  uint uVar9;
  undefined1 auStack_a64 [4];
  int *piStack_a60;
  uint local_a5c [2];
  int *local_a54;
  undefined4 local_a50;
  undefined4 local_a4c;
  LPCWSTR local_a48;
  LPCWSTR local_a44;
  wchar_t awStack_a40 [260];
  WCHAR local_838 [260];
  wchar_t awStack_630 [260];
  wchar_t awStack_428 [260];
  wchar_t awStack_220 [266];
  uint local_c;
  
  local_c = DAT_00410080 ^ (uint)auStack_a64;
  local_a50 = 0;
  local_a5c[0] = 0;
  local_a54 = (int *)0x0;
  local_a5c[1] = 0;
  local_a4c = 0x101;
  local_a48 = param_2;
  local_a44 = param_1;
  if ((param_1 == (LPCWSTR)0x0) && (param_2 == (LPCWSTR)0x0)) {
    DVar5 = 0x57;
    goto LAB_00409f90;
  }
  FUN_0040dec0(0,L"Applying user settings to all user (non-system) accounts.");
  UVar3 = GetWindowsDirectoryW(local_838,0x104);
  if ((UVar3 == 0) || (0x104 < UVar3)) {
    DVar5 = GetLastError();
    pwVar7 = L"Failed getting windows directory.";
  }
  else {
    iVar4 = FUN_004052fe(awStack_428,0x104,L"%s\\System32");
    if (iVar4 < 0) {
      DVar5 = 8;
    }
    else {
      DVar5 = FUN_0040c90e((int)awStack_428,extraout_EDX);
      if (DVar5 == 0) {
        cVar2 = GetUserNameExW(0x10002,awStack_630,&local_a4c);
        if (cVar2 == '\0') {
          DVar5 = GetLastError();
          pwVar7 = L"Failed getting name of the current user.";
        }
        else {
          DVar5 = FUN_00409b8a(awStack_a40);
          if (DVar5 == 0) {
            DVar5 = FUN_0040d833((int)awStack_a40,local_a5c);
            uVar1 = local_a5c[0];
            if (DVar5 == 0) {
              uVar9 = 0;
              piVar6 = local_a54;
              if (local_a5c[0] != 0) {
                do {
                  piStack_a60 = piVar6;
                  if (((uVar1 <= uVar9) || (local_a54 == (int *)0x0)) || (piVar6 == (int *)0x0))
                  break;
                  if ((uVar1 <= uVar9) || (local_a54 == (int *)0x0)) {
                    piVar6 = (int *)0x0;
                  }
                  iVar4 = _wcsicmp((wchar_t *)*piVar6,awStack_630);
                  piVar6 = piStack_a60;
                  if (iVar4 != 0) {
                    iVar4 = FUN_004052fe(awStack_220,0x105,L"%s\\%s\\ntuser.dat");
                    if (iVar4 < 0) {
                      DVar5 = 0x10a;
                      break;
                    }
                    if ((uVar1 <= uVar9) || (piVar8 = piVar6, local_a54 == (int *)0x0)) {
                      piVar8 = (int *)0x0;
                    }
                    DVar5 = FUN_0040d956(extraout_ECX,(LPCWSTR)*piVar8,awStack_220);
                    if (DVar5 == 0) {
                      if ((uVar1 <= uVar9) || (local_a54 == (int *)0x0)) {
                        piVar6 = (int *)0x0;
                      }
                      DVar5 = FUN_00409bf8(local_838,local_a44,local_a48,*piVar6);
                      if ((uVar1 <= uVar9) || (piVar6 = piStack_a60, local_a54 == (int *)0x0)) {
                        piVar6 = (int *)0x0;
                      }
                      FUN_0040d9fb(extraout_ECX_00,(LPCWSTR)*piVar6);
                    }
                    else {
                      FUN_0040dec0(2,
                                   L"Failed to load hive for user:%s, setting user locale and input locale values will be skipped for this user."
                                  );
                      DVar5 = 0;
                    }
                  }
                  uVar9 = uVar9 + 1;
                  piVar6 = piStack_a60 + 2;
                } while( true );
              }
              goto LAB_00409f90;
            }
            pwVar7 = L"Failed collecting all user names.";
          }
          else {
            pwVar7 = L"Failed getting users root.";
          }
        }
        goto LAB_00409f87;
      }
    }
    pwVar7 = L"Internal error in MuiUnattend.exe GC. Failed to initialize NLSLibrary.";
  }
LAB_00409f87:
  FUN_0040dec0(2,pwVar7);
LAB_00409f90:
  pwVar7 = L"Applying settings to user (non-system) accounts failed.";
  if (DVar5 == 0) {
    pwVar7 = L"Applying settings to user (non-system) accounts succeeded.";
  }
  FUN_0040dec0(0,pwVar7);
  FUN_0040545d(local_a5c);
  FUN_0040f140(local_c ^ (uint)auStack_a64,extraout_EDX_00);
  return;
}



/* Function: FUN_00409fcf */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl FUN_00409fcf(int param_1,int param_2)

{
  LPCWSTR lpMem;
  uint uVar1;
  int iVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  LSTATUS LVar5;
  LPCWSTR lpString2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  ushort uVar6;
  uint uVar7;
  WCHAR *lpMem_00;
  undefined4 uVar8;
  wchar_t *pwVar9;
  LPCWSTR local_222c;
  undefined4 local_2228;
  short *local_2224;
  void *local_2220;
  uint local_221c;
  wchar_t *local_2218;
  LPCWSTR local_2214;
  WCHAR local_2210 [4096];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  uVar6 = 0;
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  FUN_0040dd7c();
  FUN_0040dec0(0,L"Starting MuiUnattend.exe GC");
  local_2228 = 0;
  local_221c = 0;
  if (param_1 == 2) {
    FUN_0040dec0(0,L"muiunattend is called with pass: %s");
    pwVar9 = *(wchar_t **)(param_2 + 4);
    do {
      iVar2 = _wcsicmp(pwVar9,(wchar_t *)(&PTR_u_windowsPE_00401030)[uVar6]);
      if (iVar2 == 0) {
        local_2220 = (void *)0x0;
        local_2224 = (short *)0x0;
        local_222c = (LPCWSTR)0x0;
        local_2214 = (LPCWSTR)0x0;
        local_2218 = (wchar_t *)0x0;
        memset(local_2210,0,0x2000);
        FUN_004088b2(L"UILanguage",(int *)&local_2220);
        FUN_004088b2(L"UILanguageFallback",(int *)&local_2224);
        FUN_004088b2(L"Systemlocale",(int *)&local_222c);
        FUN_004088b2(L"UserLocale",(int *)&local_2214);
        FUN_004088b2(L"InputLocale",(int *)&local_2218);
        FUN_00409875(local_2220,local_2224,&local_221c);
        if (local_2218 != (wchar_t *)0x0) {
          iVar2 = FUN_00409a2c(local_2214,(int *)&local_2218);
          if (iVar2 != 0) {
            FUN_0040dec0(2,L"Failed appending user locale to the input locale string.");
          }
          pwVar9 = local_2218;
          iVar2 = FUN_0040bc86(local_2210,local_2218);
          if (iVar2 != 0) {
            FUN_0040dec0(2,L"Failed fixing/expanding input locale string");
          }
          if (pwVar9 != (wchar_t *)0x0) {
            pvVar3 = GetProcessHeap();
            HeapFree(pvVar3,0,pwVar9);
          }
        }
        lpMem = local_222c;
        lpMem_00 = local_2210;
        if (local_2210[0] == L'\0') {
          lpMem_00 = (LPCWSTR)0x0;
        }
        uVar7 = local_221c;
        if (local_222c != (LPCWSTR)0x0) {
          FUN_0040dec0(0,L"Setting system locale using unattended setting SystemLocale:\"%s\".");
          DVar4 = FUN_00408c4c(lpMem);
          if (DVar4 == 0) {
            uVar7 = local_221c | 8;
            FUN_0040dec0(0,L"Set system locale to \"%s\" successfully.");
          }
          else {
            FUN_0040dec0(1,L"Failed to set system locale to \"%s\".");
            uVar7 = local_221c;
          }
        }
        if (lpMem_00 != (LPCWSTR)0x0) {
          FUN_0040dec0(0,
                       L"Setting input locale using unattended setting InputLocale:\"%s\" and apply the same setting to default user accont/system accounts/new user account."
                      );
          DVar4 = FUN_00408b79(lpMem_00);
          if (DVar4 == 0) {
            FUN_0040dec0(0,
                         L"Set input locale to \"%s\" and apply the same setting to default user accont/system accounts/new user account successfully."
                        );
            uVar7 = uVar7 | 4;
          }
          else {
            FUN_0040dec0(1,
                         L"Failed to set InputLocale or apply to default user accont/system accounts/new user account."
                        );
          }
        }
        if (local_2214 == (LPCWSTR)0x0) {
          if (lpMem_00 != (LPCWSTR)0x0) goto LAB_0040a2c0;
        }
        else {
          FUN_0040dec0(0,
                       L"Setting user locale to using unattended setting UserLocale:\"%s\", and try apply the same settings to default user accont/system accounts/new user account."
                      );
          DVar4 = FUN_00408cbb(local_2214,(uint)(lpMem == (LPCWSTR)0x0),
                               (uint)(lpMem_00 == (LPCWSTR)0x0));
          if (DVar4 == 0) {
            FUN_0040dec0(0,
                         L"Set user locale to \"%s\" successfully and apply the same settings to default user acconts/system account/new user account."
                        );
            uVar1 = uVar7 | 2;
            if (lpMem == (LPCWSTR)0x0) {
              uVar1 = uVar7 | 10;
            }
            uVar7 = uVar1;
            if (lpMem_00 == (LPCWSTR)0x0) {
              uVar7 = uVar7 | 4;
            }
          }
          else {
            FUN_0040dec0(1,
                         L"Failed to set user locale to \"%s\", or fail to apply the same settings to default user accont/system accounts/new user account. Error code is 0x%x."
                        );
          }
LAB_0040a2c0:
          FUN_00409d1c(local_2214,lpMem_00);
        }
        if (uVar6 == 5) {
          LVar5 = FUN_00408a74(uVar7);
          if (LVar5 == 0) {
            FUN_0040dec0(0,L"Setting OOBE handshake information succeeded.");
          }
          else {
            FUN_0040dec0(1,L"Writing OOBE handshake information failed, error code: %d");
          }
        }
        iVar2 = GetSystemDefaultLocaleName(local_210,0x104);
        if ((0 < iVar2) &&
           ((lpString2 = lpMem, lpMem != (LPCWSTR)0x0 ||
            (lpString2 = local_2214, local_2214 != (LPCWSTR)0x0)))) {
          CompareStringOrdinal(local_210,-1,lpString2,-1,1);
        }
        if (local_2220 != (void *)0x0) {
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,local_2220);
        }
        if (local_2224 != (short *)0x0) {
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,local_2224);
        }
        if ((lpMem_00 != (LPCWSTR)0x0) && (lpMem_00 != local_2210)) {
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,lpMem_00);
        }
        if (lpMem != (LPCWSTR)0x0) {
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,lpMem);
        }
        if (local_2214 != (LPCWSTR)0x0) {
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,local_2214);
        }
        if (DAT_004104d0 != (HMODULE)0x0) {
          FreeLibrary(DAT_004104d0);
        }
        FUN_0040dec0(0,L"Exiting MuiUnattend.exe GC");
        FUN_0040de45();
        uVar8 = extraout_EDX_01;
        goto LAB_0040a409;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 7);
    FUN_0040dec0(1,L"unrecognised OOBE pass name was passed in: %s.");
    uVar8 = extraout_EDX_00;
  }
  else {
    pwVar9 = 
    L"Invalid number:%d of parameters passed in. Must be one parameters, indiciating the value to be set."
    ;
    uVar8 = 1;
    FUN_0040dec0(1,
                 L"Invalid number:%d of parameters passed in. Must be one parameters, indiciating the value to be set."
                );
    wprintf(L"parameters: <specialize | oobeSystem>",uVar8,pwVar9,param_1);
    uVar8 = extraout_EDX;
  }
LAB_0040a409:
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar8);
  return;
}



/* Function: FUN_0040a41e */

void __fastcall FUN_0040a41e(undefined1 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00405d66();
  if (cVar1 == '\0') {
    FUN_004081a9(param_1);
    return;
  }
  *param_1 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0040a8c7(*(int **)(param_1 + 8));
    return;
  }
  return;
}



/* Function: FUN_0040a44b */

void __thiscall FUN_0040a44b(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_004075af(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_0040a46e */

void __fastcall FUN_0040a46e(void *param_1)

{
  FUN_004075af(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_0040a490 */

void __thiscall FUN_0040a490(void *this,int param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
                    /* WARNING: Load size is inaccurate */
  lpMem = *this;
  *(int *)this = param_1;
  if (lpMem != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
  }
  return;
}



/* Function: FUN_0040a4ba */

void __fastcall FUN_0040a4ba(int *param_1)

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



/* Function: FUN_0040a4da */

void __thiscall FUN_0040a4da(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_0040ac71(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040a511 */

void __fastcall FUN_0040a511(int *param_1)

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



/* Function: FUN_0040a556 */

undefined4 __thiscall FUN_0040a556(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00405d21(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_0040a5a6(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_0040a5a6 */

void __thiscall FUN_0040a5a6(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00406510(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040a5dd */

void __fastcall FUN_0040a5dd(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 unaff_retaddr;
  HANDLE local_21c;
  int *local_218;
  HANDLE local_214;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004052fe(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040a5a6(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00405d21(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_0040a6c9;
  }
  FUN_0040ac2e(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_00406568(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_0040a6f7:
    FUN_00406179(unaff_retaddr,uVar3);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_0040aa57((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_0040a6f7;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_0040653d(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00406510(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_0040a6c9:
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040a798 */

void __fastcall FUN_0040a798(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 unaff_retaddr;
  HANDLE local_21c;
  int *local_218;
  HANDLE local_214;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004052fe(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040a5a6(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00405d21(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_0040a887;
  }
  FUN_0040ac2e(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_00406568(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_0040a8b5:
    FUN_00406179(unaff_retaddr,uVar3);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_0040ab14((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_0040a8b5;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_0040653d(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00406510(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_0040a887:
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040a8c7 */

void __fastcall FUN_0040a8c7(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00405d66();
  if (cVar1 == '\0') {
    FUN_0040ac2e(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_0040a5a6(param_1 + 2,0);
      FUN_0040a5a6(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_0040653d(local_8);
        SetLastError(DVar2);
      }
      FUN_0040aa05((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_0040653d(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_00407ff4(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_0040a961 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a961(void)

{
  _DAT_004107e4 = "WilStaging_02";
  DAT_004107e0 = 0;
  _DAT_004107e8 = 0;
  DAT_004107ec = 0;
  _DAT_004107f0 = 0;
  _DAT_004107f4 = 0;
  _DAT_004107f8 = 0;
  _DAT_004107fc = 0;
  _DAT_00410800 = 0;
  FUN_00408603((LPCRITICAL_SECTION)&DAT_00410804);
  _DAT_0041082c = 0;
  FUN_00408603((LPCRITICAL_SECTION)&DAT_00410830);
  _DAT_00410868 = 0;
  _DAT_00410858 = 0;
  uRam0041085c = 0;
  uRam00410860 = 0;
  uRam00410864 = 0;
  DAT_004107e0 = 1;
  return;
}



/* Function: FUN_0040a9da */

void __fastcall FUN_0040a9da(int param_1)

{
  FUN_0040abd3((int *)(param_1 + 0x18));
  FUN_0040aa30((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00406510(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040aa05 */

void __fastcall FUN_0040aa05(int param_1)

{
  FUN_00407fc7((void *)(param_1 + 0x10));
  FUN_0040aa30((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00406510(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040aa30 */

void __fastcall FUN_0040aa30(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00406510((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00406510((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0040aa57 */

int __fastcall FUN_0040aa57(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_004057e3(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00406179(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_0040620d();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_004065c0(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00406179(unaff_retaddr,0x14b);
    }
    else {
      FUN_0040ac9c(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_0040aa30(local_10);
  }
  FUN_0040a4ba((int *)&local_18);
  return iVar3;
}



/* Function: FUN_0040ab14 */

int __fastcall FUN_0040ab14(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_004057e3(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00406179(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_0040620d();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_004065c0(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00406179(unaff_retaddr,0x14b);
    }
    else {
      FUN_0040ad00(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_0040aa30(local_10);
  }
  FUN_0040a4ba((int *)&local_18);
  return iVar3;
}



/* Function: FUN_0040abd3 */

void __fastcall FUN_0040abd3(int *param_1)

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
        FUN_0040699e((int)lpMem + 8);
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



/* Function: FUN_0040ac2e */

void __thiscall FUN_0040ac2e(void *this,undefined4 *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  HANDLE hHandle;
  undefined4 unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  hHandle = *this;
  DVar2 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar2 == 0x102) {
    hHandle = (HANDLE)0x0;
  }
  else if ((DVar2 != 0) && (DVar2 != 0x80)) {
    FUN_004061ca(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_0040ac71 */

void FUN_0040ac71(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0040ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_0040ac9c */

undefined4 * __thiscall FUN_0040ac9c(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_0040ad00 */

undefined4 * __thiscall FUN_0040ad00(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 4) = *param_1;
  *param_1 = 0;
  *(undefined4 *)((int)this + 8) = *param_2;
  *param_2 = 0;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  param_2[1] = 0;
  memset((void *)((int)this + 0x14),0,0x94);
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_00407c86((void *)((int)this + 0x14));
  FUN_00408603((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_0040ad64 */

void __fastcall
FUN_0040ad64(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00405ac1(param_7);
  local_8 = 0;
  FUN_0040b0da(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_0040adab */

void * __fastcall FUN_0040adab(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint _MaxCount;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    _MaxCount = FUN_00405d3e(param_3);
    if ((uint)((int)param_2 - (int)param_1) < _MaxCount) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      memcpy_s(param_1,(int)param_2 - (int)param_1,param_3,_MaxCount);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(_MaxCount + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_0040ae1b */

char * __fastcall FUN_0040ae1b(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  char *extraout_ECX;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (pcVar2 = param_3, param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 + (1 - (int)(param_3 + 1)) <= param_2 + -(int)param_1) {
      memcpy_s(param_1,(rsize_t)(param_2 + -(int)param_1),param_3,
               (rsize_t)(pcVar3 + (1 - (int)(param_3 + 1))));
      if (param_4 == (undefined4 *)0x0) {
        return extraout_ECX;
      }
      *param_4 = param_1;
      return extraout_ECX;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return pcVar2;
}



/* Function: FUN_0040ae82 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040ae82(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 local_1460;
  uint local_145c;
  int local_1458;
  uint local_1454;
  int local_1450;
  undefined4 local_144c;
  DWORD DStack_1448;
  undefined4 uStack_1444;
  undefined4 uStack_1440;
  undefined4 uStack_143c;
  undefined4 uStack_1438;
  undefined4 uStack_1434;
  undefined4 uStack_1430;
  undefined4 uStack_142c;
  undefined4 uStack_1428;
  undefined4 uStack_1424;
  undefined4 uStack_1420;
  undefined4 uStack_141c;
  undefined4 uStack_1418;
  undefined4 uStack_1414;
  undefined4 uStack_1410;
  undefined4 uStack_140c;
  undefined1 local_1408 [1024];
  wchar_t local_1008 [2046];
  undefined4 uStack_c;
  
  uStack_c = 0x40ae94;
  local_1458 = *param_7;
  local_1008[0] = L'\0';
  local_1408[0] = 0;
  local_1454 = param_7[1];
  uStack_1434 = FUN_004058b0(local_1458);
  local_1460 = 3;
  local_145c = 0;
  if (param_7[2] == 1) {
    local_145c = 8;
  }
  LOCK();
  UNLOCK();
  local_1450 = DAT_004104d8 + 1;
  local_144c = 0;
  DAT_004104d8 = DAT_004104d8 + 1;
  DStack_1448 = GetCurrentThreadId();
  pcVar1 = DAT_004104b0;
  uStack_1410 = param_6;
  uStack_143c = param_3;
  uStack_1444 = 0;
  uStack_1440 = 0;
  uStack_1430 = 0;
  uStack_1420 = 0;
  uStack_141c = 0;
  uStack_1418 = 0;
  uStack_142c = 0;
  uStack_1428 = 0;
  uStack_1424 = 0;
  uStack_1438 = param_2;
  uStack_140c = param_1;
  if (DAT_004104b0 == (code *)0x0) {
    uStack_1414 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00411264)();
    uStack_1414 = (*pcVar1)();
  }
  pcVar1 = DAT_0041047c;
  if (DAT_0041047c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_00410494;
  if (DAT_00410494 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(&local_1460,local_1408,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00410490;
  if (DAT_00410490 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_004104a0;
  if ((DAT_004104a0 != (code *)0x0) && ((local_145c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00411264)(&local_1460);
    (*pcVar1)();
  }
  if (-1 < local_1458) {
    local_1458 = -0x7fff0001;
    local_1454 = FUN_00405ac1(0x8000ffff);
  }
  pcVar1 = DAT_00410468;
  if (DAT_00410470 == '\0') {
    if (DAT_00410468 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00411264)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040b021;
  }
  else {
LAB_0040b021:
    pcVar1 = DAT_00410474;
    if ((local_145c & 2) == 0) {
      if ((DAT_00410474 != (code *)0x0) && (DAT_00410484 == '\0')) {
        (*(code *)PTR_guard_check_icall_00411264)(&local_1460,local_1008,0x800);
        (*pcVar1)();
      }
      if (local_1008[0] == L'\0') {
        FUN_0040554f(local_1008,0x800,(int)&local_1460);
      }
      OutputDebugStringW(local_1008);
      goto LAB_0040b0a7;
    }
  }
  pcVar1 = DAT_00410474;
  if ((DAT_00410474 != (code *)0x0) && (DAT_00410484 == '\0')) {
    (*(code *)PTR_guard_check_icall_00411264)(&local_1460,0,0);
    (*pcVar1)();
  }
LAB_0040b0a7:
  pcVar1 = DAT_0041049c;
  if ((((local_145c & 4) != 0) || (DAT_00410478 != '\0')) && (DAT_0041049c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00411264)();
    (*pcVar1)();
  }
  FUN_00406028((int)&local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040b0da */

void __fastcall
FUN_0040b0da(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_0040b289(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_0040b100 */

void __fastcall FUN_0040b100(undefined4 param_1,undefined4 param_2)

{
  FUN_0040b32f(param_1,param_2);
  return;
}



/* Function: FUN_0040b111 */

void __fastcall FUN_0040b111(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_00405ac1(in_stack_00000014);
  FUN_0040b100(param_1,param_2);
  return;
}



/* Function: FUN_0040b152 */

uint __fastcall FUN_0040b152(int param_1,int param_2)

{
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = FUN_00405cd2(param_1,param_2,0x4013dc,param_1,param_1,in_stack_00000010);
  FUN_00405ac1(uVar1);
  FUN_0040b100(param_1,param_2);
  return uVar1;
}



/* Function: FUN_0040b1a7 */

void __fastcall FUN_0040b1a7(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_00411264)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040b1d0 */

void FUN_0040b1d0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_00408340((int)param_2);
  }
  return;
}



/* Function: FUN_0040b210 */

void FUN_0040b210(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_00406ea7(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040b260 */

undefined4 * __thiscall FUN_0040b260(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401008;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040b289 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040b289(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            short *param_8)

{
  code *pcVar1;
  undefined4 extraout_EDX;
  int local_1474;
  int local_1470;
  int local_146c;
  int local_1468;
  byte local_1464;
  undefined1 local_1410 [1024];
  wchar_t local_1010 [2050];
  uint local_c;
  
  local_c = DAT_00410080 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00405d96(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_0040f140(local_c ^ (uint)&local_1474,extraout_EDX);
    return;
  }
  FUN_00406028((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040b32f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040b32f(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  BOOL BVar3;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar4;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 in_stack_00000010;
  int *in_stack_00000014;
  undefined1 auStack_1474 [4];
  undefined4 local_1470;
  undefined4 local_146c;
  undefined4 local_1468;
  uint local_1464;
  int local_1460;
  int local_145c;
  int local_1458;
  undefined4 local_1454;
  DWORD DStack_1450;
  undefined4 uStack_144c;
  undefined4 uStack_1448;
  undefined *puStack_1444;
  undefined4 uStack_1440;
  int iStack_143c;
  undefined4 uStack_1438;
  undefined4 uStack_1434;
  undefined4 uStack_1430;
  undefined4 uStack_142c;
  undefined4 uStack_1428;
  undefined4 uStack_1424;
  undefined4 uStack_1420;
  undefined4 uStack_141c;
  undefined4 uStack_1418;
  undefined4 uStack_1414;
  undefined1 local_1410 [1024];
  wchar_t local_1010 [2050];
  uint local_c;
  
  local_c = DAT_00410080 ^ (uint)auStack_1474;
  local_1470 = in_stack_00000010;
  local_1010[0] = L'\0';
  local_1410[0] = 0;
  local_145c = in_stack_00000014[1];
  local_1460 = *in_stack_00000014;
  local_146c = param_1;
  iStack_143c = FUN_00405879(local_1460);
  local_1464 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1464 = 8;
  }
  local_1468 = 1;
  LOCK();
  UNLOCK();
  local_1458 = DAT_004104d8 + 1;
  local_1454 = 0;
  DAT_004104d8 = DAT_004104d8 + 1;
  DStack_1450 = GetCurrentThreadId();
  pcVar1 = DAT_004104b0;
  uStack_1418 = local_1470;
  uStack_1414 = local_146c;
  puStack_1444 = &DAT_004013dc;
  uStack_144c = 0;
  uStack_1448 = 0;
  uStack_1438 = 0;
  uStack_1428 = 0;
  uStack_1424 = 0;
  uStack_1420 = 0;
  uStack_1434 = 0;
  uStack_1430 = 0;
  uStack_142c = 0;
  uStack_1440 = param_2;
  if (DAT_004104b0 == (code *)0x0) {
    lVar5 = (ulonglong)extraout_EDX << 0x20;
  }
  else {
    (*(code *)PTR_guard_check_icall_00411264)();
    lVar5 = (*pcVar1)();
  }
  pcVar1 = DAT_0041047c;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0041047c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_00,uStack_141c);
  }
  pcVar1 = DAT_00410494;
  uStack_141c = (undefined4)lVar5;
  if (DAT_00410494 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(&local_1468,local_1410,0x400);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_01,uStack_141c);
  }
  pcVar1 = DAT_00410490;
  uStack_141c = (undefined4)lVar5;
  if (DAT_00410490 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00411264)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_02,uStack_141c);
  }
  pcVar1 = DAT_004104a0;
  uStack_141c = (undefined4)lVar5;
  if ((DAT_004104a0 != (code *)0x0) && ((local_1464 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00411264)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_03,uStack_141c);
  }
  pcVar1 = DAT_00410468;
  uStack_141c = (undefined4)lVar5;
  if (-1 < local_1460) {
    FUN_0040620d();
    goto LAB_0040b590;
  }
  if (DAT_00410470 == '\0') {
    if (DAT_00410468 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      uVar2 = (uint)(BVar3 != 0);
      uVar4 = extraout_EDX_04;
    }
    else {
      (*(code *)PTR_guard_check_icall_00411264)();
      uVar6 = (*pcVar1)();
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar2 = (uint)uVar6 & 0xff;
    }
    lVar5 = CONCAT44(uVar4,uStack_141c);
    if (uVar2 != 0) goto LAB_0040b4c4;
LAB_0040b4cb:
    pcVar1 = DAT_00410474;
    uStack_141c = (undefined4)lVar5;
    if ((DAT_00410474 != (code *)0x0) && (DAT_00410484 == '\0')) {
      (*(code *)PTR_guard_check_icall_00411264)(&local_1468,0,0);
      (*pcVar1)();
      lVar5 = CONCAT44(extraout_EDX_05,uStack_141c);
    }
  }
  else {
LAB_0040b4c4:
    pcVar1 = DAT_00410474;
    uStack_141c = (undefined4)lVar5;
    if ((local_1464 & 2) != 0) goto LAB_0040b4cb;
    if ((DAT_00410474 != (code *)0x0) && (DAT_00410484 == '\0')) {
      (*(code *)PTR_guard_check_icall_00411264)(&local_1468,local_1010,0x800);
      (*pcVar1)();
    }
    if (local_1010[0] == L'\0') {
      FUN_0040554f(local_1010,0x800,(int)&local_1468);
    }
    OutputDebugStringW(local_1010);
    lVar5 = CONCAT44(extraout_EDX_06,uStack_141c);
  }
  pcVar1 = DAT_0041049c;
  uStack_141c = (undefined4)lVar5;
  if ((((local_1464 & 4) != 0) || (DAT_00410478 != '\0')) && (DAT_0041049c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00411264)();
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_07,uStack_141c);
  }
  uStack_141c = (undefined4)lVar5;
  if ((local_1464 & 1) == 0) {
    FUN_0040f140(local_c ^ (uint)auStack_1474,(int)((ulonglong)lVar5 >> 0x20));
    return;
  }
LAB_0040b590:
  FUN_00406028((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040b5a0 */

void __thiscall FUN_0040b5a0(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0040101c;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_0040b5e0 */

undefined4 __thiscall
FUN_0040b5e0(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_004075af(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_0040b633 */

undefined4 __thiscall FUN_0040b633(void *this,int param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 0x7fffffff) {
    iVar4 = 0x104;
    iVar5 = param_1 - (int)this;
    do {
      if (((param_2 - 0x104) + iVar4 == 0) || (sVar1 = *(short *)(iVar5 + (int)this), sVar1 == 0))
      break;
      *(short *)this = sVar1;
      this = (void *)((int)this + 2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    psVar3 = (short *)((int)this + -2);
    if (iVar4 != 0) {
      psVar3 = (short *)this;
    }
    *psVar3 = 0;
    uVar2 = 0x8007007a;
    if (iVar4 != 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x80070057;
    *(undefined2 *)this = 0;
  }
  return uVar2;
}



/* Function: FUN_0040b69c */

int __cdecl
FUN_0040b69c(wchar_t *param_1,uint param_2,int *param_3,uint *param_4,uint param_5,wchar_t *param_6)

{
  uint _Count;
  uint uVar1;
  int iVar2;
  uint local_c;
  wchar_t *local_8;
  
  iVar2 = 0;
  if ((param_5 & 0x100) == 0) {
    if ((param_2 == 0) || (0x7fffffff < param_2)) {
      iVar2 = -0x7ff8ffa9;
    }
  }
  else if (((param_1 == (wchar_t *)0x0) && (param_2 != 0)) || (0x7fffffff < param_2)) {
    iVar2 = -0x7ff8ffa9;
  }
  if (iVar2 < 0) {
    if (param_2 == 0) {
      return iVar2;
    }
    *param_1 = L'\0';
    return iVar2;
  }
  local_8 = param_1;
  local_c = param_2;
  if (((param_5 & 0x100) != 0) && (param_6 == (wchar_t *)0x0)) {
    param_6 = L"";
  }
  iVar2 = 0;
  if ((param_5 & 0xffffe000) == 0) {
    if (param_2 == 0) {
      uVar1 = param_2;
      if (*param_6 == L'\0') goto LAB_0040b759;
      iVar2 = -0x7ff8ff86;
      if (param_1 == (wchar_t *)0x0) {
        iVar2 = -0x7ff8ffa9;
      }
    }
    else {
      _Count = param_2 - 1;
      uVar1 = _vsnwprintf(param_1,_Count,param_6,&stack0x0000001c);
      if (((int)uVar1 < 0) || (_Count < uVar1)) {
        iVar2 = -0x7ff8ff86;
LAB_0040b7bc:
        param_1[_Count] = L'\0';
        uVar1 = _Count;
      }
      else if (uVar1 == _Count) goto LAB_0040b7bc;
      local_8 = param_1 + uVar1;
      uVar1 = param_2 - uVar1;
      local_c = uVar1;
      if (-1 < iVar2) {
        if ((((param_5 & 0x200) != 0) && (1 < uVar1)) && (2 < uVar1 * 2)) {
          memset(local_8 + 1,param_5 & 0xff,uVar1 * 2 - 2);
        }
        goto LAB_0040b759;
      }
    }
  }
  else {
    iVar2 = -0x7ff8ffa9;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  if (((param_5 & 0x1c00) != 0) && (param_2 != 0)) {
    FUN_0040b833(param_1,param_2 * 2,&local_8,&local_8,&local_c,param_5);
  }
  uVar1 = local_c;
  if ((iVar2 < 0) && (iVar2 != -0x7ff8ff86)) {
    return iVar2;
  }
LAB_0040b759:
  if (param_3 != (int *)0x0) {
    *param_3 = (int)local_8;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar1;
  }
  return iVar2;
}



/* Function: FUN_0040b833 */

undefined4 __fastcall
FUN_0040b833(undefined2 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4,uint *param_5,
            uint param_6)

{
  uint uVar1;
  
  uVar1 = param_2 >> 1;
  if ((uVar1 != 0) && ((param_6 & 0x1000) != 0)) {
    *param_4 = param_1;
    *param_5 = uVar1;
    *param_1 = 0;
  }
  if ((param_6 & 0x400) != 0) {
    memset(param_1,param_6 & 0xff,param_2);
    if ((param_6 & 0xff) != 0) {
      if (uVar1 == 0) {
        return 0;
      }
      param_1[uVar1 - 1] = 0;
      *param_4 = param_1 + (uVar1 - 1);
      *param_5 = 1;
      goto LAB_0040b88b;
    }
    *param_4 = param_1;
    *param_5 = uVar1;
  }
  if (uVar1 == 0) {
    return 0;
  }
LAB_0040b88b:
  if ((param_6 & 0x800) != 0) {
    *param_4 = param_1;
    *param_5 = uVar1;
    *param_1 = 0;
  }
  return 0;
}



/* Function: FUN_0040b8cb */

short * __fastcall FUN_0040b8cb(short *param_1)

{
  int iVar1;
  HANDLE hHeap;
  short *psVar2;
  int local_8;
  
  local_8 = 0;
  psVar2 = (short *)0x0;
  if ((param_1 != (short *)0x0) && (iVar1 = FUN_00405342(param_1,0x7fffffff,&local_8), -1 < iVar1))
  {
    hHeap = GetProcessHeap();
    iVar1 = local_8;
    psVar2 = (short *)HeapAlloc(hHeap,8,local_8 * 2 + 2);
    if ((psVar2 != (short *)0x0) && (iVar1 = FUN_00405246(psVar2,iVar1 + 1,(int)param_1), iVar1 < 0)
       ) {
      FUN_0040d93b(psVar2);
      psVar2 = (short *)0x0;
    }
  }
  return psVar2;
}



/* Function: FUN_0040b939 */

void __fastcall FUN_0040b939(int param_1)

{
  uint *puVar1;
  LPVOID pvVar2;
  HANDLE pvVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    puVar1 = (uint *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar4 = 0;
      if (*puVar1 != 0) {
        do {
          pvVar2 = *(LPVOID *)(*(int *)(param_1 + 0x10) + uVar4 * 4);
          if (pvVar2 != (LPVOID)0x0) {
            pvVar3 = GetProcessHeap();
            HeapFree(pvVar3,0,pvVar2);
            *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar4 * 4) = 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar1);
      }
      pvVar2 = *(LPVOID *)(param_1 + 0x10);
      if (pvVar2 != (LPVOID)0x0) {
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,pvVar2);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



/* Function: FUN_0040b9af */

void __fastcall FUN_0040b9af(int *param_1,LPCWSTR param_2)

{
  uint uVar1;
  LPVOID lpMem;
  LCID LVar2;
  int iVar3;
  uint uVar4;
  HANDLE pvVar5;
  LPVOID pvVar6;
  size_t _Size;
  LPCWSTR pWVar7;
  LPCWSTR extraout_EDX;
  LPCWSTR extraout_EDX_00;
  LPCWSTR extraout_EDX_01;
  LPCWSTR extraout_EDX_02;
  LPCWSTR extraout_EDX_03;
  undefined8 uVar8;
  DWORD DVar9;
  SIZE_T dwBytes;
  size_t dwBytes_00;
  uint local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  pWVar7 = param_2;
  if ((param_1 != (int *)0x0) && (param_2 != (LPCWSTR)0x0)) {
    LVar2 = LocaleNameToLCID(param_2,0);
    if (LVar2 == 0) {
      uVar8 = QueryLayoutOrTipString(param_2,0);
      pWVar7 = (LPCWSTR)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 == 0) {
        uVar4 = param_1[3];
        local_214 = 0;
        if (uVar4 != 0) {
          do {
            iVar3 = _wcsicmp(*(wchar_t **)(param_1[4] + local_214 * 4),param_2);
            pWVar7 = extraout_EDX_01;
            if (iVar3 == 0) goto LAB_0040bb42;
            uVar4 = param_1[3];
            local_214 = local_214 + 1;
          } while (local_214 < uVar4);
        }
        uVar1 = param_1[2];
        if (uVar1 == 0) {
          dwBytes = 0x20;
          DVar9 = 8;
          pvVar5 = GetProcessHeap();
          pvVar6 = HeapAlloc(pvVar5,DVar9,dwBytes);
          param_1[4] = (int)pvVar6;
          pWVar7 = extraout_EDX_02;
          if (pvVar6 == (LPVOID)0x0) goto LAB_0040bb42;
          param_1[2] = 8;
          param_1[3] = 0;
        }
        else if (uVar1 <= uVar4) {
          _Size = (uVar1 + 4) * 4;
          DVar9 = 8;
          dwBytes_00 = _Size;
          pvVar5 = GetProcessHeap();
          pvVar6 = HeapAlloc(pvVar5,DVar9,dwBytes_00);
          pWVar7 = extraout_EDX_03;
          if (pvVar6 == (LPVOID)0x0) goto LAB_0040bb42;
          memcpy(pvVar6,(void *)param_1[4],_Size);
          lpMem = (LPVOID)param_1[4];
          if (lpMem != (LPVOID)0x0) {
            pvVar5 = GetProcessHeap();
            HeapFree(pvVar5,0,lpMem);
          }
          param_1[4] = (int)pvVar6;
          param_1[2] = uVar1 + 4;
        }
        pWVar7 = FUN_0040b8cb(param_2);
        *(LPCWSTR *)(param_1[4] + param_1[3] * 4) = pWVar7;
        if (*(int *)(param_1[4] + param_1[3] * 4) != 0) {
          param_1[3] = param_1[3] + 1;
        }
      }
      else {
        *param_1 = *param_1 + 1;
      }
    }
    else {
      param_1[1] = param_1[1] + 1;
      iVar3 = GetLocaleInfoEx(param_2,0x5e,local_210,0x104);
      pWVar7 = extraout_EDX;
      if (0 < iVar3) {
        FUN_0040bb57(param_1,local_210);
        pWVar7 = extraout_EDX_00;
      }
    }
  }
LAB_0040bb42:
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,pWVar7);
  return;
}



/* Function: FUN_0040bb57 */

void __fastcall FUN_0040bb57(int *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *extraout_EDX;
  wchar_t *extraout_EDX_00;
  WCHAR *_Str;
  undefined8 uVar3;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (int *)0x0) && (_Str = param_2, param_2 != (wchar_t *)0x0)) {
    do {
      pwVar1 = wcschr(_Str,L';');
      param_2 = extraout_EDX;
      if (_Str == pwVar1) {
        param_1[1] = param_1[1] + 1;
      }
      else {
        if (pwVar1 != (wchar_t *)0x0) {
          if ((pwVar1 <= _Str) ||
             (iVar2 = FUN_0040b633(local_210,(int)_Str,(int)pwVar1 - (int)_Str >> 1),
             param_2 = extraout_EDX_00, iVar2 < 0)) break;
          _Str = local_210;
        }
        uVar3 = FUN_0040b9af(param_1,_Str);
        param_2 = (wchar_t *)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 != 0) break;
      }
      _Str = (WCHAR *)(-(uint)(pwVar1 != (wchar_t *)0x0) & (uint)(pwVar1 + 1));
    } while (_Str != (wchar_t *)0x0);
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040bc0c */

undefined4 __fastcall FUN_0040bc0c(int param_1,wchar_t *param_2)

{
  int iVar1;
  uint uVar2;
  wchar_t *pwVar3;
  uint uVar4;
  undefined4 uStack_1c;
  uint local_c;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)0x0;
  local_c = 0;
  pwVar3 = L"%s";
  if ((param_1 == 0) || (param_2 == (wchar_t *)0x0)) {
    uStack_1c = 0x57;
  }
  else {
    uVar4 = 0;
    *param_2 = L'\0';
    uVar2 = 0x1000;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        iVar1 = FUN_0040b69c(param_2,uVar2,(int *)&local_8,&local_c,0,pwVar3);
        if (iVar1 < 0) {
          return 8;
        }
        uVar4 = uVar4 + 1;
        pwVar3 = L";%s";
        uVar2 = local_c;
        param_2 = local_8;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    uStack_1c = 0;
  }
  return uStack_1c;
}



/* Function: FUN_0040bc86 */

int __thiscall FUN_0040bc86(void *this,wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_18 = 0;
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((this != (void *)0x0) && (param_1 != (wchar_t *)0x0)) {
    iVar1 = FUN_0040bb57(&local_18,param_1);
    if ((((iVar1 != 0) || (iVar1 = FUN_0040bc0c((int)&local_18,(wchar_t *)this), iVar1 == 0)) &&
        (local_18 == 0)) &&
       ((local_14 == 0 && (iVar2 = FUN_00405246((short *)this,0x1000,(int)param_1), iVar2 < 0)))) {
      iVar1 = 0x10a;
    }
    FUN_0040b939((int)&local_18);
    return iVar1;
  }
  return 0x57;
}



/* Function: FUN_0040bd08 */

int __fastcall FUN_0040bd08(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0x55;
  do {
    uVar2 = *param_1;
    if ((uVar2 == 0) || (uVar1 = *param_2, uVar1 == 0)) goto LAB_0040bda9;
    uVar3 = uVar2 | 0x20;
    if (0x19 < (ushort)(uVar2 - 0x41)) {
      uVar3 = (uint)uVar2;
    }
    uVar4 = uVar1 | 0x20;
    if (0x19 < (ushort)(uVar1 - 0x41)) {
      uVar4 = (uint)uVar1;
    }
    if (uVar3 - uVar4 != 0) {
      return uVar3 - uVar4;
    }
    iVar5 = iVar5 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (0 < iVar5);
  uVar2 = *param_1;
LAB_0040bda9:
  if ((uVar2 == 0) && (*param_2 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
    if (uVar2 == 0) {
      iVar5 = -1;
    }
  }
  return iVar5;
}



/* Function: FUN_0040bdd7 */

void FUN_0040bdd7(int param_1)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX_01;
  DWORD local_3c;
  _LUID local_38;
  HANDLE local_30;
  _TOKEN_PRIVILEGES local_2c;
  _TOKEN_PRIVILEGES local_1c;
  uint local_c;
  
  local_c = DAT_00410080 ^ (uint)&stack0xfffffffc;
  local_30 = (HANDLE)0x0;
  ProcessHandle = GetCurrentProcess();
  if (((ProcessHandle != (HANDLE)0x0) &&
      (BVar1 = OpenProcessToken(ProcessHandle,0x28,&local_30), BVar1 != 0)) &&
     (BVar1 = LookupPrivilegeValueW((LPCWSTR)0x0,L"SeRestorePrivilege",&local_38), BVar1 != 0)) {
    local_1c.Privileges[0].Luid.LowPart = local_38.LowPart;
    local_1c.PrivilegeCount = 1;
    local_1c.Privileges[0].Luid.HighPart = local_38.HighPart;
    local_1c.Privileges[0].Attributes = 2;
    BVar1 = AdjustTokenPrivileges(local_30,0,&local_1c,0x10,&local_2c,&local_3c);
    if (BVar1 != 0) {
      uVar2 = extraout_EDX;
      if (param_1 != 0) {
        *(bool *)param_1 = local_2c.Privileges[0].Attributes == 2;
      }
      goto LAB_0040be79;
    }
  }
  GetLastError();
  uVar2 = extraout_EDX_00;
LAB_0040be79:
  if (local_30 != (HANDLE)0x0) {
    CloseHandle(local_30);
    uVar2 = extraout_EDX_01;
  }
  FUN_0040f140(local_c ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040bea0 */

bool __fastcall FUN_0040bea0(LPCWSTR param_1,short *param_2,HKEY param_3)

{
  short sVar1;
  DWORD dwErrCode;
  short *psVar2;
  
  psVar2 = param_2;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  dwErrCode = RegSetValueExW(param_3,param_1,0,1,(BYTE *)param_2,
                             ((int)psVar2 - (int)(param_2 + 1) >> 1) * 2 + 2);
  if (dwErrCode != 0) {
    SetLastError(dwErrCode);
  }
  return dwErrCode == 0;
}



/* Function: FUN_0040bef1 */

void __thiscall FUN_0040bef1(void *this,HKEY param_1)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  wchar_t local_b4 [86];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_004052fe(local_b4,0x55,L"%d");
  uVar2 = extraout_EDX;
  if (-1 < iVar1) {
    FUN_0040bea0((LPCWSTR)this,local_b4,param_1);
    uVar2 = extraout_EDX_00;
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040bf50 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040bf50(LPCWSTR param_1,ushort *param_2)

{
  bool bVar1;
  int iVar2;
  LSTATUS LVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  undefined3 extraout_var_20;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  undefined4 extraout_EDX_13;
  undefined4 extraout_EDX_14;
  undefined4 extraout_EDX_15;
  undefined4 extraout_EDX_16;
  undefined4 extraout_EDX_17;
  undefined4 extraout_EDX_18;
  undefined4 extraout_EDX_19;
  undefined4 extraout_EDX_20;
  undefined4 extraout_EDX_21;
  undefined4 extraout_EDX_22;
  undefined4 extraout_EDX_23;
  undefined4 extraout_EDX_24;
  undefined4 extraout_EDX_25;
  undefined4 extraout_EDX_26;
  undefined4 uVar4;
  undefined4 extraout_EDX_27;
  undefined8 uVar5;
  undefined1 local_1641;
  HKEY local_1640;
  uint local_163c;
  short local_1638 [85];
  short local_158e [85];
  short local_14e4 [85];
  short local_143a [85];
  short local_1390 [85];
  short local_12e6 [85];
  short local_123c [85];
  short local_1192 [85];
  short local_10e8 [85];
  short local_103e [85];
  short local_f94 [85];
  short local_eea [85];
  short local_e40 [85];
  short local_d96 [85];
  short local_cec [85];
  short local_c42 [85];
  short local_b98 [85];
  short local_aee [85];
  short local_a44 [85];
  short local_99a [85];
  short local_8f0 [85];
  short local_846 [705];
  short local_2c4 [88];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  local_1640 = (HKEY)0x0;
  uVar5 = FUN_0040c9de(param_1,param_2,&local_163c);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 0) {
    iVar2 = FUN_004052fe(local_214,0x104,L"%s\\%sControl Panel\\International");
    uVar4 = extraout_EDX;
    if (-1 < iVar2) {
      uVar5 = FUN_0040bdd7((int)&local_1641);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (((int)uVar5 == 0) &&
         (((LVar3 = RegCreateKeyExW((HKEY)0x80000003,local_214,0,(LPWSTR)0x0,4,6,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_1640,(LPDWORD)0x0), LVar3 == 0
           || (LVar3 = RegCreateKeyExW((HKEY)0x80000002,local_214,0,(LPWSTR)0x0,4,6,
                                       (LPSECURITY_ATTRIBUTES)0x0,&local_1640,(LPDWORD)0x0),
              uVar4 = extraout_EDX_00, LVar3 == 0)) &&
          (iVar2 = FUN_004052fe(local_214,0x104,L"%.8x"), uVar4 = extraout_EDX_01, -1 < iVar2)))) {
        FUN_0040bea0(L"Locale",local_214,local_1640);
        bVar1 = FUN_0040bea0(L"LocaleName",local_10e8,local_1640);
        uVar4 = extraout_EDX_02;
        if ((((((CONCAT31(extraout_var,bVar1) != 0) &&
               (bVar1 = FUN_0040bea0(L"s1159",local_1638,local_1640), uVar4 = extraout_EDX_03,
               CONCAT31(extraout_var_00,bVar1) != 0)) &&
              (bVar1 = FUN_0040bea0(L"s2359",local_158e,local_1640), uVar4 = extraout_EDX_04,
              CONCAT31(extraout_var_01,bVar1) != 0)) &&
             ((bVar1 = FUN_0040bea0(L"sCurrency",local_14e4,local_1640), uVar4 = extraout_EDX_05,
              CONCAT31(extraout_var_02,bVar1) != 0 &&
              (bVar1 = FUN_0040bea0(L"sDate",local_143a,local_1640), uVar4 = extraout_EDX_06,
              CONCAT31(extraout_var_03,bVar1) != 0)))) &&
            (((bVar1 = FUN_0040bea0(L"sDecimal",local_1390,local_1640), uVar4 = extraout_EDX_07,
              CONCAT31(extraout_var_04,bVar1) != 0 &&
              ((((bVar1 = FUN_0040bea0(L"sGrouping",local_12e6,local_1640), uVar4 = extraout_EDX_08,
                 CONCAT31(extraout_var_05,bVar1) != 0 &&
                 (bVar1 = FUN_0040bea0(L"sLanguage",local_123c,local_1640), uVar4 = extraout_EDX_09,
                 CONCAT31(extraout_var_06,bVar1) != 0)) &&
                (bVar1 = FUN_0040bea0(L"sList",local_1192,local_1640), uVar4 = extraout_EDX_10,
                CONCAT31(extraout_var_07,bVar1) != 0)) &&
               ((bVar1 = FUN_0040bea0(L"sLongDate",local_103e,local_1640), uVar4 = extraout_EDX_11,
                CONCAT31(extraout_var_08,bVar1) != 0 &&
                (bVar1 = FUN_0040bea0(L"sMonDecimalSep",local_f94,local_1640),
                uVar4 = extraout_EDX_12, CONCAT31(extraout_var_09,bVar1) != 0)))))) &&
             ((bVar1 = FUN_0040bea0(L"sMonGrouping",local_eea,local_1640), uVar4 = extraout_EDX_13,
              CONCAT31(extraout_var_10,bVar1) != 0 &&
              ((bVar1 = FUN_0040bea0(L"sMonThousandSep",local_e40,local_1640),
               uVar4 = extraout_EDX_14, CONCAT31(extraout_var_11,bVar1) != 0 &&
               (bVar1 = FUN_0040bea0(L"sNativeDigits",local_d96,local_1640), uVar4 = extraout_EDX_15
               , CONCAT31(extraout_var_12,bVar1) != 0)))))))) &&
           ((((bVar1 = FUN_0040bea0(L"sNegativeSign",local_cec,local_1640), uVar4 = extraout_EDX_16,
              CONCAT31(extraout_var_13,bVar1) != 0 &&
              (((bVar1 = FUN_0040bea0(L"sPositiveSign",local_c42,local_1640),
                uVar4 = extraout_EDX_17, CONCAT31(extraout_var_14,bVar1) != 0 &&
                (bVar1 = FUN_0040bea0(L"sShortDate",local_b98,local_1640), uVar4 = extraout_EDX_18,
                CONCAT31(extraout_var_15,bVar1) != 0)) &&
               (bVar1 = FUN_0040bea0(L"sThousand",local_aee,local_1640), uVar4 = extraout_EDX_19,
               CONCAT31(extraout_var_16,bVar1) != 0)))) &&
             (((bVar1 = FUN_0040bea0(L"sTime",local_a44,local_1640), uVar4 = extraout_EDX_20,
               CONCAT31(extraout_var_17,bVar1) != 0 &&
               (bVar1 = FUN_0040bea0(L"sTimeFormat",local_99a,local_1640), uVar4 = extraout_EDX_21,
               CONCAT31(extraout_var_18,bVar1) != 0)) &&
              (bVar1 = FUN_0040bea0(L"sShortTime",local_8f0,local_1640), uVar4 = extraout_EDX_22,
              CONCAT31(extraout_var_19,bVar1) != 0)))) &&
            (bVar1 = FUN_0040bea0(L"sYearMonth",local_846,local_1640), uVar4 = extraout_EDX_23,
            CONCAT31(extraout_var_20,bVar1) != 0)))) {
          uVar5 = FUN_0040bef1(L"iCalendarType",local_1640);
          uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
          if ((int)uVar5 != 0) {
            uVar5 = FUN_0040bef1(L"iCountry",local_1640);
            uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
            if ((int)uVar5 != 0) {
              uVar5 = FUN_0040bef1(L"iCurrDigits",local_1640);
              uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
              if ((int)uVar5 != 0) {
                uVar5 = FUN_0040bef1(L"iCurrency",local_1640);
                uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                if ((int)uVar5 != 0) {
                  uVar5 = FUN_0040bef1(L"iDate",local_1640);
                  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                  if ((int)uVar5 != 0) {
                    uVar5 = FUN_0040bef1(L"iDigits",local_1640);
                    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                    if ((int)uVar5 != 0) {
                      uVar5 = FUN_0040bef1(L"NumShape",local_1640);
                      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                      if ((int)uVar5 != 0) {
                        uVar5 = FUN_0040bef1(L"iFirstDayOfWeek",local_1640);
                        uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                        if ((int)uVar5 != 0) {
                          uVar5 = FUN_0040bef1(L"iFirstWeekOfYear",local_1640);
                          uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                          if ((int)uVar5 != 0) {
                            uVar5 = FUN_0040bef1(L"iLZero",local_1640);
                            uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                            if ((int)uVar5 != 0) {
                              uVar5 = FUN_0040bef1(L"iMeasure",local_1640);
                              uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                              if ((int)uVar5 != 0) {
                                uVar5 = FUN_0040bef1(L"iNegCurr",local_1640);
                                uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                if ((int)uVar5 != 0) {
                                  uVar5 = FUN_0040bef1(L"iNegNumber",local_1640);
                                  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                  if ((int)uVar5 != 0) {
                                    uVar5 = FUN_0040bef1(L"iPaperSize",local_1640);
                                    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                    if ((int)uVar5 != 0) {
                                      uVar5 = FUN_0040bef1(L"iTime",local_1640);
                                      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                      if ((int)uVar5 != 0) {
                                        uVar5 = FUN_0040bef1(L"iTimePrefix",local_1640);
                                        uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                        if ((int)uVar5 != 0) {
                                          uVar5 = FUN_0040bef1(L"iTLZero",local_1640);
                                          uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                          if ((int)uVar5 != 0) {
                                            RegDeleteValueW(local_1640,L"sCountry");
                                            RegCloseKey(local_1640);
                                            iVar2 = FUN_004052fe(local_214,0x104,
                                                                                                                                  
                                                  L"%s\\%sControl Panel\\International\\Geo");
                                            uVar4 = extraout_EDX_24;
                                            if ((-1 < iVar2) &&
                                               ((LVar3 = RegCreateKeyExW((HKEY)0x80000003,local_214,
                                                                         0,(LPWSTR)0x0,4,6,
                                                                         (LPSECURITY_ATTRIBUTES)0x0,
                                                                         &local_1640,(LPDWORD)0x0),
                                                LVar3 == 0 ||
                                                (LVar3 = RegCreateKeyExW((HKEY)0x80000002,local_214,
                                                                         0,(LPWSTR)0x0,4,6,
                                                                         (LPSECURITY_ATTRIBUTES)0x0,
                                                                         &local_1640,(LPDWORD)0x0),
                                                uVar4 = extraout_EDX_25, LVar3 == 0)))) {
                                              FUN_0040bef1(L"Nation",local_1640);
                                              FUN_0040bea0(L"Name",local_2c4,local_1640);
                                              uVar4 = extraout_EDX_26;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (local_1640 != (HKEY)0x0) {
      RegCloseKey(local_1640);
      uVar4 = extraout_EDX_27;
    }
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040c5fc */

void __fastcall FUN_0040c5fc(HKEY param_1,LPCWSTR param_2)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX_01;
  _FILETIME local_224;
  DWORD local_21c;
  HKEY local_218;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  LVar1 = RegOpenKeyExW(param_1,param_2,0,0xf003f,&local_218);
  uVar3 = extraout_EDX;
  if (LVar1 == 0) {
    do {
      local_21c = 0x104;
      LVar1 = RegEnumKeyExW(local_218,0,local_214,&local_21c,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                            &local_224);
      if (LVar1 != 0) {
        RegCloseKey(local_218);
        RegDeleteKeyW(param_1,param_2);
        uVar3 = extraout_EDX_00;
        goto LAB_0040c6ba;
      }
      iVar2 = FUN_0040c5fc(local_218,local_214);
    } while (iVar2 == 0);
    RegCloseKey(local_218);
    uVar3 = extraout_EDX_01;
  }
LAB_0040c6ba:
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040c6df */

void FUN_0040c6df(void)

{
  int iVar1;
  LSTATUS LVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 extraout_EDX_02;
  undefined8 uVar4;
  undefined1 local_219;
  HKEY local_218;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  local_218 = (HKEY)0x0;
  iVar1 = FUN_004052fe(local_214,0x104,L"%s\\Control Panel\\International");
  uVar3 = extraout_EDX;
  if (-1 < iVar1) {
    uVar4 = FUN_0040bdd7((int)&local_219);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (((int)uVar4 == 0) &&
       ((LVar2 = RegOpenKeyExW((HKEY)0x80000003,local_214,0,0x2001f,&local_218), LVar2 == 0 ||
        (LVar2 = RegOpenKeyExW((HKEY)0x80000002,local_214,0,0x2001f,&local_218),
        uVar3 = extraout_EDX_00, LVar2 == 0)))) {
      FUN_0040c5fc(local_218,L"User Profile");
      uVar3 = extraout_EDX_01;
    }
  }
  if (local_218 != (HKEY)0x0) {
    RegCloseKey(local_218);
    uVar3 = extraout_EDX_02;
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040c7bb */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040c7bb(LPCWSTR param_1,LPCWSTR param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  LCID LVar2;
  LPCWSTR pWVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined8 uVar5;
  uint local_1434 [936];
  WCHAR local_594 [710];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  LVar2 = LocaleNameToLCID(param_2,0);
  if (LVar2 == 0) {
    bVar1 = true;
  }
  else {
    uVar5 = FUN_0040c9de(param_1,(ushort *)param_2,local_1434);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) goto LAB_0040c843;
    bVar1 = false;
  }
  pWVar3 = local_594;
  if (bVar1) {
    pWVar3 = param_2;
  }
  uVar5 = InstallLayoutOrTipUserReg(param_5,0,0,pWVar3,0x62);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (((int)uVar5 != 0) && (param_5 != 0)) {
    FUN_0040c6df();
    uVar4 = extraout_EDX;
  }
LAB_0040c843:
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040c85a */

LPVOID __fastcall FUN_0040c85a(HANDLE param_1,undefined4 *param_2)

{
  HANDLE hFileMappingObject;
  LPVOID pvVar1;
  
  hFileMappingObject = CreateFileMappingW(param_1,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCWSTR)0x0);
  *param_2 = hFileMappingObject;
  if (hFileMappingObject != (HANDLE)0xffffffff) {
    pvVar1 = MapViewOfFile(hFileMappingObject,4,0,0,0);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    CloseHandle((HANDLE)*param_2);
    *param_2 = 0xffffffff;
  }
  return (LPVOID)0x0;
}



/* Function: FUN_0040c89c */

void __fastcall FUN_0040c89c(int param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(param_1 + 0x10) + param_1);
  puVar1 = (undefined4 *)(*piVar2 + (int)piVar2);
  DAT_0041055c = *puVar1;
  *param_2 = *(undefined2 *)(puVar1 + 6);
  param_2[2] = *(undefined2 *)((int)puVar1 + 0x16);
  param_2[1] = *(undefined2 *)(puVar1 + 8);
  param_2[3] = *(undefined2 *)(puVar1 + 0xc);
  param_2[0xe] = *(undefined2 *)((int)puVar1 + 0x1a);
  param_2[0xf] = *(undefined2 *)((int)puVar1 + 0x32);
  *(int *)(param_2 + 4) = puVar1[7] + (int)piVar2;
  *(int *)(param_2 + 6) = puVar1[9] + (int)piVar2;
  *(int *)(param_2 + 8) = puVar1[10] + (int)piVar2;
  *(int *)(param_2 + 10) = puVar1[0xe] + (int)piVar2;
  *(int *)(param_2 + 0xc) = puVar1[0xd] + (int)piVar2;
  return;
}



/* Function: FUN_0040c90e */

void __fastcall FUN_0040c90e(int param_1,int param_2)

{
  int iVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  HANDLE hObject;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  hObject = (HANDLE)0x0;
  if (((DAT_00410558 == 0) &&
      (iVar1 = FUN_00405246((short *)&DAT_00410588,0x104,param_1), param_2 = extraout_EDX,
      -1 < iVar1)) &&
     ((iVar1 = FUN_004052fe(local_210,0x104,L"%s\\locale.nls"), iVar1 < 0 ||
      (hObject = CreateFileW(local_210,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0),
      param_2 = extraout_EDX_00, hObject != (HANDLE)0xffffffff)))) {
    DAT_004107a8 = FUN_0040c85a(hObject,(undefined4 *)&DAT_00410560);
    CloseHandle(hObject);
    param_2 = extraout_EDX_01;
    if (DAT_004107a8 != (LPVOID)0x0) {
      FUN_0040c89c((int)DAT_004107a8,(undefined2 *)&DAT_00410568);
      param_2 = extraout_EDX_02;
      DAT_00410558 = extraout_EDX_02;
    }
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040c9de */

void __fastcall FUN_0040c9de(LPCWSTR param_1,ushort *param_2,uint *param_3)

{
  ushort uVar1;
  short sVar2;
  HANDLE hObject;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort *extraout_EDX;
  ushort *extraout_EDX_00;
  ushort *extraout_EDX_01;
  ushort *extraout_EDX_02;
  ushort *extraout_EDX_03;
  ushort *extraout_EDX_04;
  ushort *extraout_EDX_05;
  ushort *puVar8;
  bool bVar9;
  ushort local_250 [16];
  ushort *local_230;
  HANDLE local_22c;
  int local_228;
  LPVOID local_224;
  LPCWSTR local_220;
  int local_21c;
  wchar_t local_218 [262];
  uint local_c;
  
  local_c = DAT_00410080 ^ (uint)&stack0xfffffffc;
  local_22c = (HANDLE)0x0;
  local_224 = (LPVOID)0x0;
  local_21c = 0;
  local_230 = param_2;
  local_220 = param_1;
  if (((param_2 == (ushort *)0x0) || (param_3 == (uint *)0x0)) || (*param_2 == 0))
  goto LAB_0040d038;
  if (param_1 == (LPCWSTR)0x0) {
    if (DAT_00410558 == 0) goto LAB_0040d038;
    puVar8 = (ushort *)&DAT_00410568;
  }
  else {
    hObject = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (((hObject == (HANDLE)0xffffffff) &&
        ((iVar3 = FUN_004052fe(local_218,0x104,L"%s\\locale.nls"), iVar3 < 0 ||
         (hObject = CreateFileW(local_218,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0),
         hObject == (HANDLE)0xffffffff)))) &&
       ((iVar3 = FUN_004052fe(local_218,0x104,L"%s\\system32\\locale.nls"), param_2 = extraout_EDX,
        iVar3 < 0 ||
        (hObject = CreateFileW(local_218,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0),
        param_2 = extraout_EDX_00, hObject == (HANDLE)0xffffffff)))) goto LAB_0040d038;
    local_224 = FUN_0040c85a(hObject,&local_22c);
    CloseHandle(hObject);
    param_2 = extraout_EDX_01;
    if (local_224 == (LPVOID)0x0) goto LAB_0040d038;
    FUN_0040c89c((int)local_224,local_250);
    param_2 = extraout_EDX_02;
    puVar8 = extraout_EDX_02;
  }
  local_228 = 0;
  if (puVar8[1] != 0) {
    local_220 = *(LPCWSTR *)(puVar8 + 8);
    iVar3 = *(int *)(puVar8 + 10);
    do {
      iVar7 = local_228;
      iVar3 = FUN_0040bd08(local_230,(ushort *)(iVar3 + ((ushort)*local_220 + 1) * 2));
      param_2 = extraout_EDX_03;
      if (iVar3 == 0) {
        if (iVar7 != -1) {
          iVar3 = (uint)*(ushort *)(*(int *)(puVar8 + 8) + 2 + iVar7 * 8) * (uint)puVar8[0xe] +
                  *(int *)(puVar8 + 4);
          memset(param_3,0,0x1424);
          *param_3 = *(uint *)(*(int *)(puVar8 + 8) + 4 + local_228 * 8) & 0x7fffffff;
          FUN_00405246((short *)(param_3 + 0x155),0x55,
                       *(int *)(puVar8 + 10) +
                       (uint)*(ushort *)(*(int *)(puVar8 + 8) + local_228 * 8) * 2 + 2);
          *(undefined2 *)((int)param_3 + 0x134a) = *(undefined2 *)(iVar3 + 0x6e);
          *(undefined2 *)(param_3 + 0x4dc) = *(undefined2 *)(iVar3 + 0x70);
          *(undefined2 *)((int)param_3 + 0x136e) = *(undefined2 *)(iVar3 + 0x72);
          uVar1 = *(ushort *)(*(int *)(puVar8 + 10) + 2 + *(int *)(iVar3 + 0x7c) * 2);
          *(ushort *)(param_3 + 0x4d3) = uVar1;
          if (uVar1 != 1) {
            if ((uVar1 == 0) || (puVar8[3] < uVar1)) {
              local_21c = 0;
            }
            else {
              local_21c = (uVar1 - 1 & 0xffff) * (uint)puVar8[0xf] + *(int *)(puVar8 + 0xc);
            }
          }
          *(undefined2 *)((int)param_3 + 0x134e) = *(undefined2 *)(iVar3 + 0x1e);
          *(undefined2 *)(param_3 + 0x4d4) = *(undefined2 *)(iVar3 + 0x10);
          *(undefined2 *)((int)param_3 + 0x1352) = *(undefined2 *)(iVar3 + 0x12);
          *(undefined2 *)((int)param_3 + 0x1356) = *(undefined2 *)(iVar3 + 0xc);
          *(undefined2 *)(param_3 + 0x4d6) = *(undefined2 *)(iVar3 + 0x22);
          sVar2 = *(short *)(iVar3 + 0x1a) + -1;
          *(short *)((int)param_3 + 0x135a) = sVar2;
          if (sVar2 == -1) {
            *(undefined2 *)((int)param_3 + 0x135a) = 6;
          }
          bVar9 = DAT_0041055c < 5;
          *(undefined2 *)(param_3 + 0x4d7) = *(undefined2 *)(iVar3 + 0x1c);
          *(undefined2 *)((int)param_3 + 0x135e) = *(undefined2 *)(iVar3 + 0x16);
          *(undefined2 *)(param_3 + 0x4d8) = *(undefined2 *)(iVar3 + 0x20);
          *(undefined2 *)((int)param_3 + 0x1362) = *(undefined2 *)(iVar3 + 0x14);
          *(undefined2 *)(param_3 + 0x4d9) = *(undefined2 *)(iVar3 + 0xe);
          *(undefined2 *)((int)param_3 + 0x1366) = *(undefined2 *)(iVar3 + 0x78);
          if (bVar9) {
            uVar4 = (uint)*(ushort *)(iVar3 + 0x76);
          }
          else {
            uVar4 = *(uint *)(iVar3 + 0x134);
          }
          param_3[0x4dd] = uVar4;
          FUN_00405246((short *)(param_3 + 0x4de),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x9c) * 2 + 2);
          FUN_00405246((short *)(param_3 + 1),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x4c) * 2 + 2);
          FUN_00405246((short *)((int)param_3 + 0xae),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x50) * 2 + 2);
          FUN_00405246((short *)(param_3 + 0x56),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x38) * 2 + 2);
          FUN_00405246((short *)(param_3 + 0xab),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x30) * 2 + 2);
          FUN_00405246((short *)(param_3 + 0x100),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x80) * 2 + 2);
          FUN_00405246((short *)((int)param_3 + 0x4aa),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x2c) * 2 + 2);
          FUN_00405246((short *)(param_3 + 0x1aa),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x3c) * 2 + 2);
          FUN_00405246((short *)(param_3 + 0x1ff),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x40) * 2 + 2);
          FUN_00405246((short *)(param_3 + 0x254),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x48) * 2 + 2);
          FUN_00405246((short *)((int)param_3 + 0x9fa),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x44) * 2 + 2);
          FUN_00405246((short *)((int)param_3 + 0xb4e),0x55,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x34) * 2 + 2);
          if (local_21c == 0) {
            iVar7 = *(int *)(iVar3 + 0x60);
          }
          else {
            iVar7 = *(int *)(local_21c + 0xc);
          }
          iVar6 = *(int *)(puVar8 + 10);
          if (iVar7 != 0) {
            iVar6 = iVar6 + *(int *)(iVar6 + 2 + iVar7 * 2) * 2;
          }
          FUN_00405246((short *)((int)param_3 + 0x5fe),0x55,iVar6 + 2);
          if (local_21c == 0) {
            iVar7 = *(int *)(iVar3 + 0x5c);
          }
          else {
            iVar7 = *(int *)(local_21c + 4);
          }
          iVar6 = *(int *)(puVar8 + 10);
          if (iVar7 != 0) {
            iVar6 = iVar6 + *(int *)(iVar6 + 2 + iVar7 * 2) * 2;
          }
          FUN_00405246((short *)(param_3 + 0x2a9),0x55,iVar6 + 2);
          if (local_21c == 0) {
            iVar7 = *(int *)(iVar3 + 100);
          }
          else {
            iVar7 = *(int *)(local_21c + 8);
          }
          iVar6 = *(int *)(puVar8 + 10);
          if (iVar7 != 0) {
            iVar6 = iVar6 + *(int *)(iVar6 + 2 + iVar7 * 2) * 2;
          }
          FUN_00405246((short *)((int)param_3 + 0xdf6),0x55,iVar6 + 2);
          uVar4 = FUN_0040d0ae((short *)(param_3 + 0x2a9));
          *(short *)(param_3 + 0x4d5) = (short)uVar4;
          FUN_0040d16a((short *)((int)param_3 + 0x202),(short *)(param_3 + 0x2a9));
          iVar7 = *(int *)(puVar8 + 10);
          if (*(int *)(iVar3 + 0x58) != 0) {
            iVar7 = iVar7 + *(int *)(iVar7 + 2 + *(int *)(iVar3 + 0x58) * 2) * 2;
          }
          FUN_00405246((short *)((int)param_3 + 0xca2),0x55,iVar7 + 2);
          iVar7 = *(int *)(puVar8 + 10);
          if (*(int *)(iVar3 + 0x118) != 0) {
            iVar7 = iVar7 + *(int *)(iVar7 + 2 + *(int *)(iVar3 + 0x118) * 2) * 2;
          }
          FUN_00405246((short *)(param_3 + 0x353),0x55,iVar7 + 2);
          FUN_0040d04f((int)param_3 + 0x356,
                       (ushort *)(*(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x24) * 2));
          FUN_0040d04f((int)param_3 + 0x752,
                       (ushort *)(*(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x28) * 2));
          iVar7 = 0;
          do {
            iVar6 = *(int *)(puVar8 + 10);
            if (*(int *)(iVar3 + 0x54) != 0) {
              iVar6 = iVar6 + *(int *)(iVar6 + 2 + (*(int *)(iVar3 + 0x54) + iVar7) * 2) * 2;
            }
            *(undefined2 *)((int)param_3 + iVar7 + 0x8a6) = *(undefined2 *)(iVar6 + 2);
            iVar7 = iVar7 + 2;
          } while (iVar7 < 0x14);
          FUN_0040d2cb((short *)(param_3 + 0x2fe),(short *)((int)param_3 + 0xca2));
          uVar5 = FUN_0040d43f((ushort *)((int)param_3 + 0xca2));
          *(short *)(param_3 + 0x4da) = (short)uVar5;
          uVar5 = FUN_0040d530((ushort *)((int)param_3 + 0xca2));
          *(short *)((int)param_3 + 0x136a) = (short)uVar5;
          uVar5 = FUN_0040d4bc((ushort *)((int)param_3 + 0xca2));
          *(short *)(param_3 + 0x4db) = (short)uVar5;
          FUN_00405246((short *)(param_3 + 0x3a8),0x200,
                       *(int *)(puVar8 + 10) + *(int *)(iVar3 + 0x128) * 2 + 2);
          param_2 = extraout_EDX_05;
        }
        break;
      }
      local_228 = iVar7 + 1;
      local_220 = local_220 + 4;
      iVar3 = *(int *)(puVar8 + 10);
    } while (local_228 < (int)(uint)puVar8[1]);
  }
  if (puVar8 == local_250) {
    CloseHandle(local_22c);
    UnmapViewOfFile(local_224);
    param_2 = extraout_EDX_04;
  }
LAB_0040d038:
  FUN_0040f140(local_c ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040d04f */

void __fastcall FUN_0040d04f(int param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = (uint)*param_2;
  if (uVar2 != 0) {
    do {
      if (param_2[uVar1 + 1] == 0) {
        uVar2 = 0xffff;
        break;
      }
      *(ushort *)(param_1 + uVar1 * 4) = param_2[uVar1 + 1] + 0x30;
      if (uVar1 != 0) {
        *(undefined2 *)(param_1 + -2 + uVar1 * 4) = 0x3b;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)uVar2);
  }
  if ((uVar1 == uVar2) && (*(undefined2 *)(param_1 + uVar1 * 4) = 0x30, uVar1 != 0)) {
    *(undefined2 *)(param_1 + -2 + uVar1 * 4) = 0x3b;
  }
  return;
}



/* Function: FUN_0040d0ae */

uint __fastcall FUN_0040d0ae(short *param_1)

{
  short sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  
  psVar5 = param_1;
  do {
    sVar1 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar1 != 0);
  uVar6 = (int)psVar5 - (int)(param_1 + 1) >> 1;
  bVar3 = 0;
  if (uVar6 < 0x80000000) {
    do {
      while( true ) {
        if ((int)uVar6 < 1) goto LAB_0040d14f;
        sVar1 = *param_1;
        bVar2 = 1;
        if (sVar1 == 100) break;
        if (sVar1 == 0x4d) {
          return -(uint)bVar3 & 2;
        }
        if ((sVar1 != 0x79) && (bVar2 = bVar3, sVar1 == 0x27)) {
          while( true ) {
            param_1 = param_1 + 1;
            uVar6 = uVar6 - 1;
            if ((int)uVar6 < 1) break;
            if ((*param_1 == 0) || (*param_1 == 0x27)) break;
          }
          if (uVar6 == 0) goto LAB_0040d14f;
        }
        uVar6 = uVar6 - 1;
        param_1 = param_1 + 1;
        bVar3 = bVar2;
      }
      iVar4 = 0;
      if (uVar6 == 0) break;
      do {
        if (*param_1 != 100) break;
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 1;
        uVar6 = uVar6 - 1;
      } while (0 < (int)uVar6);
    } while (2 < iVar4);
    uVar6 = CONCAT22((short)((uint)iVar4 >> 0x10),1);
  }
  else {
LAB_0040d14f:
    uVar6 = 0xffff;
  }
  return uVar6;
}



/* Function: FUN_0040d16a */

void __fastcall FUN_0040d16a(short *param_1,short *param_2)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  
  bVar2 = false;
  psVar3 = param_2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  uVar5 = (int)psVar3 - (int)(param_2 + 1) >> 1;
  if (0x7fffffff < uVar5) {
    return;
  }
  while( true ) {
    if ((int)uVar5 < 1) {
      return;
    }
    sVar1 = *param_2;
    if (((sVar1 == 100) || (sVar1 == 0x79)) || (sVar1 == 0x4d)) break;
    if (sVar1 == 0x27) {
      do {
        param_2 = param_2 + 1;
        uVar5 = uVar5 - 1;
        if ((int)uVar5 < 1) break;
      } while (*param_2 != 0x27);
      if (uVar5 == 0) {
        return;
      }
    }
    param_2 = param_2 + 1;
    uVar5 = uVar5 - 1;
  }
  psVar3 = param_2 + 1;
  iVar6 = uVar5 - 1;
  if (iVar6 < 1) {
    return;
  }
  do {
    if (*psVar3 != sVar1) break;
    psVar3 = psVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  if ((0 < iVar6) && (psVar4 = psVar3, psVar3 != (short *)0x0)) {
    do {
      sVar1 = *psVar4;
      if (sVar1 == 0x79) goto LAB_0040d2b7;
      if ((sVar1 == 0x4d) || (sVar1 == 100)) break;
      if (sVar1 == 0x27) {
        do {
          iVar6 = iVar6 + -1;
          psVar4 = psVar4 + 1;
          if (iVar6 < 1) break;
        } while (*psVar4 != 0x27);
        if (iVar6 == 0) break;
      }
      psVar4 = psVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (0 < iVar6);
    if (0 < iVar6) {
LAB_0040d2b7:
      for (; psVar3 < psVar4; psVar3 = psVar3 + 1) {
        if (*psVar3 == 0x27) {
          if (bVar2) {
            if ((psVar3 < psVar4 + -1) && (psVar3[1] == 0x27)) {
              *param_1 = 0x27;
              param_1 = param_1 + 1;
              psVar3 = psVar3 + 1;
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = true;
          }
        }
        else {
          *param_1 = *psVar3;
          param_1 = param_1 + 1;
        }
      }
      *param_1 = 0;
    }
  }
  return;
}



/* Function: FUN_0040d2cb */

void __fastcall FUN_0040d2cb(short *param_1,short *param_2)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  
  bVar2 = false;
  psVar3 = param_2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  uVar5 = (int)psVar3 - (int)(param_2 + 1) >> 1;
  if (0x7fffffff < uVar5) {
    return;
  }
  while( true ) {
    if ((int)uVar5 < 1) {
      return;
    }
    sVar1 = *param_2;
    if ((((sVar1 == 0x68) || (sVar1 == 0x48)) || (sVar1 == 0x6d)) || (sVar1 == 0x73)) break;
    if (sVar1 == 0x27) {
      do {
        param_2 = param_2 + 1;
        uVar5 = uVar5 - 1;
        if ((int)uVar5 < 1) break;
      } while (*param_2 != 0x27);
      if (uVar5 == 0) {
        return;
      }
    }
    param_2 = param_2 + 1;
    uVar5 = uVar5 - 1;
  }
  psVar3 = param_2 + 1;
  iVar6 = uVar5 - 1;
  if (iVar6 < 1) {
    return;
  }
  do {
    if (*psVar3 != sVar1) break;
    psVar3 = psVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  if ((0 < iVar6) && (psVar4 = psVar3, psVar3 != (short *)0x0)) {
    do {
      sVar1 = *psVar4;
      if (sVar1 == 0x68) goto LAB_0040d42b;
      if (((sVar1 == 0x48) || (sVar1 == 0x6d)) || (sVar1 == 0x73)) break;
      if (sVar1 == 0x27) {
        do {
          iVar6 = iVar6 + -1;
          psVar4 = psVar4 + 1;
          if (iVar6 < 1) break;
        } while (*psVar4 != 0x27);
        if (iVar6 == 0) break;
      }
      psVar4 = psVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (0 < iVar6);
    if (0 < iVar6) {
LAB_0040d42b:
      for (; psVar3 < psVar4; psVar3 = psVar3 + 1) {
        if (*psVar3 == 0x27) {
          if (bVar2) {
            if ((psVar3 < psVar4 + -1) && (psVar3[1] == 0x27)) {
              *param_1 = 0x27;
              param_1 = param_1 + 1;
              psVar3 = psVar3 + 1;
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = true;
          }
        }
        else {
          *param_1 = *psVar3;
          param_1 = param_1 + 1;
        }
      }
      *param_1 = 0;
    }
  }
  return;
}



/* Function: FUN_0040d43f */

undefined4 __fastcall FUN_0040d43f(ushort *param_1)

{
  ushort uVar1;
  uint in_EAX;
  ushort *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = 1;
  puVar2 = param_1;
  do {
    uVar1 = *puVar2;
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),uVar1);
    puVar2 = puVar2 + 1;
  } while (uVar1 != 0);
  iVar3 = (int)puVar2 - (int)(param_1 + 1) >> 1;
  do {
    if (iVar3 == 0) {
LAB_0040d4af:
      return CONCAT22((short)(in_EAX >> 0x10),uVar4);
    }
    uVar1 = *param_1;
    in_EAX = (uint)uVar1;
    if (uVar1 == 0) goto LAB_0040d4af;
    if (in_EAX == 0x68) {
      in_EAX = 0;
      uVar4 = 0;
      goto LAB_0040d4af;
    }
    if (in_EAX == 0x48) goto LAB_0040d4af;
    if (uVar1 == 0x27) {
      do {
        param_1 = param_1 + 1;
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) break;
        if (*param_1 == 0) goto LAB_0040d49a;
      } while (*param_1 != 0x27);
      in_EAX = 0;
      if (iVar3 == 0) goto LAB_0040d4af;
LAB_0040d49a:
      in_EAX = 0;
      if (*param_1 == 0) goto LAB_0040d4af;
    }
    in_EAX = 0;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + -1;
  } while( true );
}



/* Function: FUN_0040d4bc */

undefined4 __fastcall FUN_0040d4bc(ushort *param_1)

{
  ushort uVar1;
  uint in_EAX;
  ushort *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = 0;
  puVar2 = param_1;
  do {
    uVar1 = *puVar2;
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),uVar1);
    puVar2 = puVar2 + 1;
  } while (uVar1 != 0);
  iVar3 = (int)puVar2 - (int)(param_1 + 1) >> 1;
  if (iVar3 != 0) {
    while( true ) {
      uVar1 = *param_1;
      in_EAX = (uint)uVar1;
      if (uVar1 == 0) break;
      if ((in_EAX == 0x68) || (in_EAX == 0x48)) {
        if (param_1[1] == uVar1) {
          uVar4 = 1;
        }
        break;
      }
      if (uVar1 == 0x27) {
        do {
          param_1 = param_1 + 1;
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) break;
          if (*param_1 == 0) goto LAB_0040d50b;
        } while (*param_1 != 0x27);
        in_EAX = 0;
        if (iVar3 == 0) break;
LAB_0040d50b:
        in_EAX = 0;
        if (*param_1 == 0) break;
      }
      in_EAX = 0;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
    }
  }
  return CONCAT22((short)(in_EAX >> 0x10),uVar4);
}



/* Function: FUN_0040d530 */

undefined4 __fastcall FUN_0040d530(ushort *param_1)

{
  ushort uVar1;
  uint in_EAX;
  ushort *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = 0;
  puVar2 = param_1;
  do {
    uVar1 = *puVar2;
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),uVar1);
    puVar2 = puVar2 + 1;
  } while (uVar1 != 0);
  iVar3 = (int)puVar2 - (int)(param_1 + 1) >> 1;
  if (iVar3 != 0) {
    while( true ) {
      uVar1 = *param_1;
      in_EAX = (uint)uVar1;
      if (uVar1 == 0) break;
      if (in_EAX == 0x74) {
        uVar4 = 1;
        break;
      }
      if ((((in_EAX == 0x68) || (in_EAX == 0x48)) || (in_EAX == 0x6d)) || (in_EAX == 0x73)) break;
      if (uVar1 == 0x27) {
        do {
          param_1 = param_1 + 1;
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) break;
          if (*param_1 == 0) goto LAB_0040d58e;
        } while (*param_1 != 0x27);
        in_EAX = 0;
        if (iVar3 == 0) break;
LAB_0040d58e:
        in_EAX = 0;
        if (*param_1 == 0) break;
      }
      in_EAX = 0;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
    }
  }
  return CONCAT22((short)(in_EAX >> 0x10),uVar4);
}



/* Function: FUN_0040d5ac */

uint __thiscall FUN_0040d5ac(void *this,undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *this_00;
  
                    /* WARNING: Load size is inaccurate */
  if ((*this != *(int *)((int)this + 0xc)) ||
     (uVar2 = FUN_0040d604((uint *)this), (char)uVar2 != '\0')) {
                    /* WARNING: Load size is inaccurate */
    uVar1 = *this;
    *(uint *)this = uVar1 + 1;
    uVar2 = FUN_004054e6(this,uVar1);
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)FUN_004054e6(this_00,uVar1);
      *puVar3 = param_1;
                    /* WARNING: Load size is inaccurate */
      iVar4 = FUN_004054e6(this,*this - 1);
      *(undefined1 *)(iVar4 + 4) = 0;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}



/* Function: FUN_0040d604 */

uint __fastcall FUN_0040d604(uint *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  HANDLE pvVar3;
  LPVOID pvVar4;
  LPVOID lpMem;
  uint uVar5;
  LPVOID pvVar6;
  
  pvVar4 = (LPVOID)param_1[3];
  if ((LPVOID)*param_1 == pvVar4) {
    if (pvVar4 == (LPVOID)0x0) {
      pvVar6 = (LPVOID)0x1;
    }
    else {
      uVar2 = ZEXT48(pvVar4);
      pvVar4 = (LPVOID)(uVar2 * 2);
      pvVar6 = pvVar4;
      if ((int)(uVar2 * 2 >> 0x20) != 0) goto LAB_0040d68e;
    }
    pvVar3 = GetProcessHeap();
    pvVar4 = HeapAlloc(pvVar3,8,(int)pvVar6 << 3);
    if (pvVar4 != (LPVOID)0x0) {
      uVar5 = 0;
      if (*param_1 != 0) {
        do {
          uVar1 = *(undefined4 *)(param_1[2] + 4 + uVar5 * 8);
          *(undefined4 *)((int)pvVar4 + uVar5 * 8) = *(undefined4 *)(param_1[2] + uVar5 * 8);
          *(undefined4 *)((int)pvVar4 + uVar5 * 8 + 4) = uVar1;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *param_1);
      }
      lpMem = (LPVOID)param_1[2];
      if (lpMem != (LPVOID)0x0) {
        pvVar3 = GetProcessHeap();
        lpMem = (LPVOID)HeapFree(pvVar3,0,lpMem);
      }
      param_1[2] = (uint)pvVar4;
      param_1[3] = (uint)pvVar6;
      return CONCAT31((int3)((uint)lpMem >> 8),1);
    }
  }
LAB_0040d68e:
  return (uint)pvVar4 & 0xffffff00;
}



/* Function: FUN_0040d69b */

void __fastcall FUN_0040d69b(int param_1,short *param_2,void *param_3)

{
  BOOL BVar1;
  short *psVar2;
  int iVar3;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  short *extraout_EDX_02;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 local_238 [9];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  psVar4 = param_2;
  if (((param_1 != 0) && (param_2 != (short *)0x0)) && (param_3 != (void *)0x0)) {
    memset(local_214,0,0x20a);
    puVar5 = local_238;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar3 = FUN_004052fe(local_214,0x105,L"%s\\%s\\%s");
    psVar4 = extraout_EDX;
    if (-1 < iVar3) {
      BVar1 = GetFileAttributesExW(local_214,GetFileExInfoStandard,local_238);
      if (BVar1 == 0) {
        GetLastError();
        psVar4 = extraout_EDX_00;
      }
      else {
        psVar2 = FUN_0040b8cb(param_2);
        psVar4 = extraout_EDX_01;
        if (psVar2 != (short *)0x0) {
          FUN_0040d5ac(param_3,psVar2);
          psVar4 = extraout_EDX_02;
        }
      }
    }
  }
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,psVar4);
  return;
}



/* Function: FUN_0040d792 */

bool __fastcall FUN_0040d792(uint *param_1)

{
  wchar_t *_Str1;
  wchar_t wVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  
  if ((*param_1 & 0x410) == 0x10) {
    _Str1 = (wchar_t *)(param_1 + 0xb);
    pwVar6 = L".";
    pwVar5 = _Str1;
    do {
      wVar1 = *pwVar5;
      uVar2 = 0;
      bVar7 = (ushort)wVar1 < (ushort)*pwVar6;
      if (wVar1 != *pwVar6) {
LAB_0040d7d6:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_0040d7db;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar5[1];
      bVar7 = (ushort)wVar1 < (ushort)pwVar6[1];
      if (wVar1 != pwVar6[1]) goto LAB_0040d7d6;
      pwVar5 = pwVar5 + 2;
      pwVar6 = pwVar6 + 2;
    } while (wVar1 != L'\0');
    uVar4 = 0;
LAB_0040d7db:
    if (uVar4 != 0) {
      pwVar6 = L"..";
      pwVar5 = _Str1;
      do {
        wVar1 = *pwVar5;
        bVar7 = (ushort)wVar1 < (ushort)*pwVar6;
        if (wVar1 != *pwVar6) {
LAB_0040d80a:
          uVar2 = -(uint)bVar7 | 1;
          break;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar5[1];
        bVar7 = (ushort)wVar1 < (ushort)pwVar6[1];
        if (wVar1 != pwVar6[1]) goto LAB_0040d80a;
        pwVar5 = pwVar5 + 2;
        pwVar6 = pwVar6 + 2;
      } while (wVar1 != L'\0');
      if (uVar2 != 0) {
        iVar3 = _wcsicmp(_Str1,L"Default");
        return iVar3 != 0;
      }
    }
  }
  return false;
}



/* Function: FUN_0040d833 */

void __fastcall FUN_0040d833(int param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  BOOL BVar3;
  void *extraout_EDX;
  void *extraout_EDX_00;
  HANDLE hFindFile;
  _WIN32_FIND_DATAW local_46c;
  wchar_t local_21c [266];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  if ((param_2 != (void *)0x0) && (param_1 != 0)) {
    memset(local_21c,0,0x20a);
    memset(&local_46c,0,0x250);
    hFindFile = (HANDLE)0x0;
    iVar2 = FUN_004052fe(local_21c,0x105,L"%s\\*");
    if (-1 < iVar2) {
      hFindFile = FindFirstFileW(local_21c,&local_46c);
      if (hFindFile == (HANDLE)0xffffffff) {
        GetLastError();
        param_2 = extraout_EDX;
        goto LAB_0040d926;
      }
      do {
        bVar1 = FUN_0040d792(&local_46c.dwFileAttributes);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          FUN_0040d69b(param_1,local_46c.cFileName,param_2);
        }
        BVar3 = FindNextFileW(hFindFile,&local_46c);
      } while (BVar3 != 0);
    }
    FindClose(hFindFile);
    param_2 = extraout_EDX_00;
  }
LAB_0040d926:
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040d93b */

void __fastcall FUN_0040d93b(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  if (param_1 != (LPVOID)0x0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,param_1);
  }
  return;
}



/* Function: FUN_0040d956 */

DWORD __fastcall FUN_0040d956(undefined4 param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  int iVar1;
  DWORD DVar2;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  DVar2 = 0x32;
  if ((param_3 == (LPCWSTR)0x0) || (param_2 == (LPCWSTR)0x0)) {
    DVar2 = 0x57;
  }
  else {
    iVar1 = FUN_0040da80(L"SeRestorePrivilege",1,&local_8);
    if (iVar1 != 0) {
      iVar1 = FUN_0040da80(L"SeBackupPrivilege",1,&local_c);
      if (iVar1 != 0) {
        DVar2 = GetFileAttributesW(param_3);
        if (DVar2 == 0xffffffff) {
          DVar2 = GetLastError();
        }
        else {
          DVar2 = RegLoadKeyW((HKEY)0x80000003,param_2,param_3);
          FUN_0040da80(L"SeRestorePrivilege",local_8,(int *)0x0);
          FUN_0040da80(L"SeBackupPrivilege",local_c,(int *)0x0);
        }
      }
    }
  }
  return DVar2;
}



/* Function: FUN_0040d9fb */

undefined4 __fastcall FUN_0040d9fb(undefined4 param_1,LPCWSTR param_2)

{
  int iVar1;
  DWORD dwErrCode;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = FUN_0040da80(L"SeRestorePrivilege",1,&local_8);
  if ((iVar1 != 0) && (iVar1 = FUN_0040da80(L"SeBackupPrivilege",1,&local_c), iVar1 != 0)) {
    dwErrCode = RegUnLoadKeyW((HKEY)0x80000003,param_2);
    FUN_0040da80(L"SeRestorePrivilege",local_8,(int *)0x0);
    FUN_0040da80(L"SeBackupPrivilege",local_c,(int *)0x0);
    if (dwErrCode == 0) {
      return 1;
    }
    SetLastError(dwErrCode);
  }
  return 0;
}



/* Function: FUN_0040da80 */

void __fastcall FUN_0040da80(LPCWSTR param_1,int param_2,int *param_3)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar2;
  undefined4 extraout_EDX_03;
  DWORD DesiredAccess;
  HANDLE *TokenHandle;
  _LUID local_40;
  BOOL local_38;
  HANDLE local_34;
  _PRIVILEGE_SET local_30;
  _TOKEN_PRIVILEGES local_1c;
  uint local_c;
  
  local_c = DAT_00410080 ^ (uint)&stack0xfffffffc;
  TokenHandle = &local_34;
  DesiredAccess = 0xf01ff;
  local_34 = (HANDLE)0x0;
  local_38 = 0;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
  uVar2 = extraout_EDX;
  if ((BVar1 == 0) ||
     (BVar1 = LookupPrivilegeValueW((LPCWSTR)0x0,param_1,&local_40), uVar2 = extraout_EDX_00,
     BVar1 == 0)) goto LAB_0040db4c;
  local_30.Privilege[0].Luid.LowPart = local_40.LowPart;
  local_30.PrivilegeCount = 1;
  local_30.Control = 0;
  local_30.Privilege[0].Attributes = 0;
  local_30.Privilege[0].Luid.HighPart = local_40.HighPart;
  BVar1 = PrivilegeCheck(local_34,&local_30,&local_38);
  uVar2 = extraout_EDX_01;
  if (BVar1 == 0) goto LAB_0040db4c;
  if (param_2 == 0) {
    if (local_38 != 0) goto LAB_0040db0e;
  }
  else if (local_38 == 0) {
LAB_0040db0e:
    local_1c.Privileges[0].Luid.LowPart = local_40.LowPart;
    local_1c.PrivilegeCount = 1;
    local_1c.Privileges[0].Attributes = -(uint)(param_2 != 0) & 2;
    local_1c.Privileges[0].Luid.HighPart = local_40.HighPart;
    BVar1 = AdjustTokenPrivileges(local_34,0,&local_1c,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
    uVar2 = extraout_EDX_02;
    if (BVar1 == 0) goto LAB_0040db4c;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_38;
  }
LAB_0040db4c:
  if (local_34 != (HANDLE)0x0) {
    CloseHandle(local_34);
    uVar2 = extraout_EDX_03;
  }
  FUN_0040f140(local_c ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040db7e */

undefined4 FUN_0040db7e(void)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  BYTE local_14 [4];
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  uVar2 = 0;
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyExW((HKEY)0x80000002,L"SYSTEM\\Setup",0,1,&local_8);
  if (LVar1 == 0) {
    local_14[0] = '\0';
    local_14[1] = '\0';
    local_14[2] = '\0';
    local_14[3] = '\0';
    local_10 = 4;
    local_c = 0;
    LVar1 = RegQueryValueExW(local_8,L"Upgrade",(LPDWORD)0x0,&local_c,local_14,&local_10);
    if ((LVar1 == 0) && (local_c == 4)) {
      uVar2 = 1;
    }
    RegCloseKey(local_8);
  }
  return uVar2;
}



/* Function: FUN_0040dbf4 */

undefined4 __cdecl FUN_0040dbf4(char *param_1,uint param_2,char *param_3)

{
  uint _Count;
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar2 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = '\0';
    }
  }
  else {
    _Count = param_2 - 1;
    uVar2 = 0;
    uVar1 = _vsnprintf(param_1,_Count,param_3,&stack0x00000010);
    if (((int)uVar1 < 0) || (_Count < uVar1)) {
      param_1[_Count] = '\0';
      uVar2 = 0x8007007a;
    }
    else if (uVar1 == _Count) {
      param_1[_Count] = '\0';
    }
  }
  return uVar2;
}



/* Function: FUN_0040dc59 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD FUN_0040dc59(void)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  
  if ((((((DAT_004107ac == (HMODULE)0x0) ||
         (DAT_004107b0 = GetProcAddress(DAT_004107ac,"WdsSetupLogInit"),
         DAT_004107b0 == (FARPROC)0x0)) ||
        (_DAT_004107d8 = GetProcAddress(DAT_004107ac,"WdsGenericSetupLogInit"),
        _DAT_004107d8 == (FARPROC)0x0)) ||
       ((DAT_004107c0 = GetProcAddress(DAT_004107ac,"WdsSetupLogDestroy"),
        DAT_004107c0 == (FARPROC)0x0 ||
        (_DAT_004107c8 = GetProcAddress(DAT_004107ac,"WdsSetupLogMessageA"),
        _DAT_004107c8 == (FARPROC)0x0)))) ||
      ((DAT_004107cc = GetProcAddress(DAT_004107ac,"WdsSetupLogMessageW"),
       DAT_004107cc == (FARPROC)0x0 ||
       ((_DAT_004107d4 = GetProcAddress(DAT_004107ac,"ConstructPartialMsgVA"),
        _DAT_004107d4 == (FARPROC)0x0 ||
        (DAT_004107b8 = GetProcAddress(DAT_004107ac,"ConstructPartialMsgVW"),
        DAT_004107b8 == (FARPROC)0x0)))))) ||
     (DAT_004107c4 = GetProcAddress(DAT_004107ac,"CurrentIP"), DAT_004107c4 == (FARPROC)0x0)) {
    DVar1 = GetLastError();
    uVar3 = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      uVar3 = DVar1;
    }
    if ((int)uVar3 < 0) {
      DVar2 = GetLastError();
      DVar1 = DVar2 & 0xffff | 0x80070000;
      if ((int)DVar2 < 1) {
        DVar1 = DVar2;
      }
    }
    else {
      DVar1 = 0x80004005;
    }
  }
  else {
    DVar1 = 0;
  }
  return DVar1;
}



/* Function: FUN_0040dd7c */

void FUN_0040dd7c(void)

{
  code *pcVar1;
  LPWSTR lpMem;
  DWORD DVar2;
  HANDLE hHeap;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00410790);
  DAT_004107bc = DAT_004107bc + 1;
  if (DAT_004107b4 == 0) {
    DAT_004107ac = (HMODULE)0x0;
    lpMem = FUN_0040eaac(L"%windir%\\Panther\\UnattendGC");
    if (lpMem != (LPWSTR)0x0) {
      FUN_0040e78c(lpMem);
    }
    DAT_004107ac = LoadLibraryExW(L"wdscore.dll",(HANDLE)0x0,0);
    if (((DAT_004107ac == (HMODULE)0x0) ||
        (DVar2 = FUN_0040dc59(), pcVar1 = DAT_004107b0, (int)DVar2 < 0)) ||
       (DAT_004107b0 == (code *)0x0)) {
      if ((DAT_004107b4 == 0) && (DAT_004107ac != (HMODULE)0x0)) {
        FreeLibrary(DAT_004107ac);
      }
    }
    else {
      (*(code *)PTR_guard_check_icall_00411264)(0,0x300f000,lpMem);
      (*pcVar1)();
      DAT_004107b4 = 1;
      DAT_004107d0 = 1;
    }
    if (lpMem != (LPWSTR)0x0) {
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,lpMem);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00410790);
  return;
}



/* Function: FUN_0040de45 */

void FUN_0040de45(void)

{
  code *pcVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00410790);
  pcVar1 = DAT_004107c0;
  DAT_004107bc = DAT_004107bc + -1;
  if (((DAT_004107b4 != 0) && (DAT_004107bc == 0)) && (DAT_004107ac != (HMODULE)0x0)) {
    if ((DAT_004107d0 != 0) && (DAT_004107c0 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_00411264)();
      (*pcVar1)();
    }
    FreeLibrary(DAT_004107ac);
    DAT_004107ac = (HMODULE)0x0;
    DAT_004107b4 = 0;
    DAT_004107d0 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00410790);
  return;
}



/* Function: FUN_0040dec0 */

void __cdecl FUN_0040dec0(int param_1,short *param_2)

{
  FUN_0040dedc(param_1,param_2,(int)&stack0x0000000c);
  return;
}



/* Function: FUN_0040dedc */

void __fastcall FUN_0040dedc(int param_1,short *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  code *pcVar3;
  code *pcVar4;
  DWORD dwErrCode;
  DWORD DVar5;
  uint uVar6;
  HANDLE pvVar7;
  char *lpMem;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short *psVar11;
  undefined4 extraout_EDX;
  uint dwBytes;
  int local_21c;
  undefined4 local_210;
  undefined1 local_20c [516];
  uint local_8;
  
  local_8 = DAT_00410080 ^ (uint)&stack0xfffffffc;
  dwErrCode = GetLastError();
  if ((param_2 != (short *)0x0) && (param_3 != 0)) {
    local_210 = DAT_004048d4;
    memset(local_20c,0,0x204);
    DVar5 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&local_210,0x104);
    if (DVar5 != 0) {
      wcsrchr((wchar_t *)&local_210,L'\\');
    }
    psVar1 = param_2 + 1;
    do {
      sVar2 = *param_2;
      param_2 = param_2 + 1;
    } while (sVar2 != 0);
    psVar11 = (short *)&local_210;
    do {
      sVar2 = *psVar11;
      psVar11 = psVar11 + 1;
    } while (sVar2 != 0);
    uVar6 = ((int)psVar11 - ((int)&local_210 + 2) >> 1) + 4 + ((int)param_2 - (int)psVar1 >> 1);
    DVar5 = 8;
    dwBytes = uVar6;
    pvVar7 = GetProcessHeap();
    lpMem = (char *)HeapAlloc(pvVar7,DVar5,dwBytes);
    if (lpMem != (char *)0x0) {
      iVar8 = FUN_0040dbf4(lpMem,uVar6,"[%S] %S");
      pcVar4 = DAT_004107cc;
      if (-1 < iVar8) {
        if (param_1 == 0) {
          local_21c = 0x4000000;
        }
        else if (param_1 == 1) {
          local_21c = 0x2000000;
        }
        else {
          local_21c = param_1;
          if (param_1 == 2) {
            local_21c = 0x3000000;
          }
        }
        if (((DAT_004107cc != (code *)0x0) && (DAT_004107b8 != (code *)0x0)) &&
           (DAT_004107c4 != (code *)0x0)) {
          DVar5 = GetLastError();
          pcVar3 = DAT_004107c4;
          (*(code *)PTR_guard_check_icall_00411264)();
          uVar9 = (*pcVar3)();
          pcVar3 = DAT_004107b8;
          (*(code *)PTR_guard_check_icall_00411264)(local_21c,lpMem,param_3);
          uVar10 = (*pcVar3)();
          (*(code *)PTR_guard_check_icall_00411264)
                    (uVar10,0,&DAT_00404ac4,0,0x1d7,
                     L"onecore\\base\\ntsetup\\lib\\unattendlog\\src\\unattendlog.cpp",
                     L"UnattendLogWV",uVar9,DVar5,0,0);
          (*pcVar4)();
        }
      }
      DVar5 = 0;
      pvVar7 = GetProcessHeap();
      HeapFree(pvVar7,DVar5,lpMem);
    }
  }
  SetLastError(dwErrCode);
  FUN_0040f140(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040e107 */

undefined4 __fastcall FUN_0040e107(short *param_1,uint param_2,int param_3,uint param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    if (param_2 == 0) {
      return 0x80070057;
    }
  }
  else if (param_4 < 0x7fffffff) {
    iVar3 = param_4 - param_2;
    iVar4 = param_3 - (int)param_1;
    do {
      if ((iVar3 + param_2 == 0) || (sVar1 = *(short *)(iVar4 + (int)param_1), sVar1 == 0)) break;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    psVar2 = param_1 + -1;
    if (param_2 != 0) {
      psVar2 = param_1;
    }
    *psVar2 = 0;
    if (param_2 == 0) {
      return 0x8007007a;
    }
    return 0;
  }
  *param_1 = 0;
  return 0x80070057;
}



/* Function: FUN_0040e181 */

void __cdecl FUN_0040e181(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  
  if (((param_1 != (undefined4 *)0x0) && (pcVar1 = (code *)*param_1, pcVar1 != (code *)0x0)) &&
     ((char)(((param_2 & 0x2000000) != 0) + ((param_2 & 0x3000000) != 0) +
            ((param_2 & 0x4000000) != 0)) != '\0')) {
    (*(code *)PTR_guard_check_icall_00411264)
              (param_2 & 0x7000000,~(param_2 & 0x7000000) & param_2,param_3,&stack0x00000010);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040e1f3 */

undefined4 __fastcall FUN_0040e1f3(LPCWSTR param_1)

{
  LPCWSTR lpFileName;
  DWORD DVar1;
  HANDLE hHeap;
  undefined4 uVar2;
  DWORD dwErrCode;
  
  uVar2 = 0;
  if ((param_1 != (LPCWSTR)0x0) && (*param_1 != L'\0')) {
    lpFileName = (LPCWSTR)FUN_0040e273(param_1,(undefined4 *)0x0);
    if (lpFileName != (LPCWSTR)0x0) {
      dwErrCode = 0;
      DVar1 = GetFileAttributesW(lpFileName);
      if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
        uVar2 = 0;
        dwErrCode = GetLastError();
        if (dwErrCode == 0) {
          dwErrCode = 0x10b;
        }
        else if (dwErrCode == 2) {
          dwErrCode = 3;
        }
      }
      else {
        uVar2 = 1;
      }
      DVar1 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar1,lpFileName);
      SetLastError(dwErrCode);
    }
    return uVar2;
  }
  SetLastError(0x57);
  return 0;
}



/* Function: FUN_0040e273 */
