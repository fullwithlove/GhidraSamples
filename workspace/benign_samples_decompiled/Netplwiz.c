/* Function: FUN_00401800 */

void FUN_00401800(void)

{
  FUN_004042df(FUN_004048c0);
  return;
}



/* Function: FUN_00401820 */

void FUN_00401820(void)

{
  FUN_004042df(FUN_004048e0);
  return;
}



/* Function: FUN_00401840 */

void FUN_00401840(void)

{
  DAT_00405480 = FUN_00402e20;
  DAT_00405458 = &PTR_s_WilError_03_00405000;
  DAT_0040546c = &DAT_004050d0;
  return;
}



/* Function: FUN_00401870 */

void FUN_00401870(void)

{
  DAT_0040549c = FUN_00401f30;
  DAT_00405488 = DebugBreak;
  DAT_00405498 = FUN_00401f70;
  DAT_00405478 = FUN_00402ec0;
  DAT_00405468 = FUN_00402f50;
  DAT_00405484 = FUN_00402f10;
  return;
}



/* Function: FUN_004018b3 */

undefined4 __fastcall FUN_004018b3(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00401919 */

undefined4 __thiscall FUN_00401919(void *this,int param_1)

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
    uVar2 = FUN_004019b4((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_00401970 */

undefined4 __cdecl FUN_00401970(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_00401a07(param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_004019b4 */

undefined4 __fastcall FUN_004019b4(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_00401a07 */

undefined4 __fastcall
FUN_00401a07(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4,va_list param_5)

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



/* Function: FUN_00401a4d */

wchar_t * __thiscall FUN_00401a4d(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_00401a07(param_1,uVar3,this,param_3,&stack0x00000010);
    }
    else {
      *param_1 = L'\0';
    }
  }
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



/* Function: FUN_00401aa4 */

void __fastcall FUN_00401aa4(wchar_t *param_1,int param_2,int param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  code *extraout_ECX;
  code *extraout_ECX_00;
  code *pcVar3;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *this;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *pvVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int iVar5;
  wchar_t *local_20c;
  WCHAR local_208 [256];
  uint local_8;
  
  pcVar3 = DAT_00405460;
  local_8 = DAT_00405080 ^ (uint)&stack0xfffffffc;
  iVar5 = param_2;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((pcVar3 != (code *)0x0) && (DAT_00405470 != '\0')) {
      (*(code *)PTR_guard_check_icall_0040614c)(param_3,param_1,param_2);
      (*pcVar3)();
      iVar5 = extraout_EDX;
      if (*param_1 != L'\0') goto LAB_00401cfc;
    }
    memset(local_208,0,0x200);
    pcVar3 = DAT_00405478;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_00405478 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040614c)(*(undefined4 *)(param_3 + 0xc),local_208,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    pwVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_20c = FUN_00401a4d(pcVar3,param_1,pwVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_20c = FUN_00401a4d(pcVar3,param_1,pwVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_20c = FUN_00401a4d(pvVar4,local_20c,pwVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    pwVar2 = FUN_00401a4d(local_208,local_20c,pwVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (iVar5 = extraout_EDX_00, *(int *)(param_3 + 0x20) != 0)) {
      pwVar2 = FUN_00401a4d((void *)0x0,pwVar2,pwVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        pwVar2 = FUN_00401a4d(this,pwVar2,pwVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        pwVar2 = FUN_00401a4d(pvVar4,pwVar2,pwVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00401a4d(pvVar4,pwVar2,pwVar1,L"\n");
          iVar5 = extraout_EDX_03;
        }
        else {
          FUN_00401a4d(pvVar4,pwVar2,pwVar1,L"[%hs]\n");
          iVar5 = extraout_EDX_02;
        }
      }
      else {
        FUN_00401a4d(pvVar4,pwVar2,pwVar1,L"[%hs(%hs)]\n");
        iVar5 = extraout_EDX_01;
      }
    }
  }
LAB_00401cfc:
  FUN_00404220(local_8 ^ (uint)&stack0xfffffffc,iVar5);
  return;
}



/* Function: FUN_00401d14 */

uint * __thiscall FUN_00401d14(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00401fb1((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00401d38 */

LPVOID __fastcall FUN_00401d38(DWORD param_1,SIZE_T param_2)

{
  FARPROC pFVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  HMODULE hModule;
  
  hHeap = GetProcessHeap();
  pvVar2 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0040544c == (FARPROC)0x0) {
    if (DAT_004054be != '\0') {
      return pvVar2;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0040544c = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_004054be = '\x01';
    if (DAT_0040544c == (FARPROC)0x0) {
      DAT_004054be = '\x01';
      return pvVar2;
    }
  }
  pFVar1 = DAT_0040544c;
  (*(code *)PTR_guard_check_icall_0040614c)(hHeap,pvVar2);
  (*pFVar1)();
  return pvVar2;
}



/* Function: FUN_00401db5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00401db5(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004054ac;
  _DAT_004054b0 = param_1;
  LOCK();
  DAT_004054ac = DAT_004054ac + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00401dce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00401dce(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004054c8;
  _DAT_00405450 = param_1;
  LOCK();
  DAT_004054c8 = DAT_004054c8 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00401de7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00401de7(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00405520;
  _DAT_004054c4 = param_1;
  LOCK();
  DAT_00405520 = DAT_00405520 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00401e00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401e00(undefined4 param_1)

{
  _DAT_00405518 = param_1;
  return 1;
}



/* Function: FUN_00401e1a */

void FUN_00401e1a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00405498;
  if (DAT_00405498 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00401e4a */

void __fastcall
FUN_00401e4a(undefined4 param_1,undefined4 param_2,LPCWSTR param_3,uint *param_4,char *param_5,
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
  
  local_8 = DAT_00405080 ^ (uint)&stack0xfffffffc;
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
      FUN_004018b3(param_5,param_6,(int)pcVar5);
      param_2 = extraout_EDX_01;
    }
  }
  else if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_00404220(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00401f30 */

undefined * __fastcall FUN_00401f30(undefined4 param_1,undefined4 param_2)

{
  if (DAT_004054b4 == '\0') {
    FUN_00401e4a(param_1,param_2,(LPCWSTR)FUN_00401e00,(uint *)0x0,&DAT_004054d0,0x40);
    DAT_004054b4 = '\x01';
  }
  return &DAT_004054d0;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00401f70 */

void FUN_00401f70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00401fb1 */

uint __fastcall FUN_00401fb1(uint param_1)

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



/* Function: FUN_00402186 */

DWORD __fastcall
FUN_00402186(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00403781(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  return DVar1;
}



/* Function: FUN_004021c2 */

uint __fastcall
FUN_004021c2(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00403781(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_00402211 */

void __fastcall FUN_00402211(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_004021c2(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_0040222e */

int __fastcall FUN_0040222e(short *param_1)

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



/* Function: FUN_00402256 */

void __fastcall
FUN_00402256(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
    iVar3 = FUN_00401db5(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_00401dce(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_00403781(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar6 = FUN_00401fb1(0x8007029c);
      param_15[3] = uVar6;
    }
    iVar3 = FUN_00401de7(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_00401e00(iVar3);
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
  iVar4 = DAT_004054b8 + 1;
  DAT_004054b8 = DAT_004054b8 + 1;
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
  pcVar1 = DAT_0040549c;
  if (DAT_0040549c == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040614c)();
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_00405468;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00405480;
  if (DAT_00405480 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040547c;
  if (DAT_0040547c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040548c;
  if ((DAT_0040548c != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040614c)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_00402699();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar6 = FUN_00401fb1(0x8000ffff);
    param_15[3] = uVar6;
  }
  pcVar1 = DAT_00405454;
  if (DAT_0040545c == '\0') {
    if (DAT_00405454 == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040614c)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00402447;
  }
  else {
LAB_00402447:
    pcVar1 = DAT_00405460;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_00405460 != (code *)0x0) && (DAT_00405470 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040614c)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_00401aa4(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_004024b0;
    }
  }
  pcVar1 = DAT_00405460;
  if ((DAT_00405460 != (code *)0x0) && (DAT_00405470 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040614c)(param_15,0,0);
    (*pcVar1)();
  }
LAB_004024b0:
  pcVar1 = DAT_00405488;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_00405464 != '\0')) &&
     (DAT_00405488 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040614c)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004024e8 */

void __fastcall FUN_004024e8(int param_1)

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
  
  pcVar1 = DAT_004054a0;
  if (DAT_004054a0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_00405490;
  if (DAT_00405490 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00402555;
  uVar3 = 1;
  do {
    FUN_00401e1a(uVar3);
    iVar2 = extraout_ECX;
LAB_00402555:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_00402575 */

void __fastcall FUN_00402575(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  FUN_0040389f(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00402591 */

void __fastcall FUN_00402591(undefined4 param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint local_1c [3];
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  
  puVar2 = FUN_00401d14((void *)0x8000ffff,local_1c);
  local_10 = *puVar2;
  uStack_c = puVar2[1];
  uStack_8 = puVar2[2];
  FUN_00402575(param_1,0xc27);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004025d3 */

void __fastcall FUN_004025d3(int param_1,int param_2)

{
  code *pcVar1;
  void *pvVar2;
  uint *puVar3;
  void *this;
  int in_stack_00000010;
  uint local_24 [4];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  int local_8;
  
  local_8 = param_1;
  pvVar2 = (void *)FUN_00402186(param_1,param_2,0x401310,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00401d14(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  FUN_00402575(local_8,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00402630 */

void __fastcall FUN_00402630(undefined4 param_1,undefined4 param_2)

{
  FUN_00403b29(param_1,param_2);
  return;
}



/* Function: FUN_0040264d */

void __fastcall FUN_0040264d(int param_1,int param_2)

{
  FUN_00403b6a(param_1,param_2);
  return;
}



/* Function: FUN_00402669 */

void __fastcall FUN_00402669(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_004025d3(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00402681 */

void __fastcall FUN_00402681(undefined4 param_1)

{
  code *pcVar1;
  
  FUN_00402591(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00402699 */

void FUN_00402699(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004026a5 */

void FUN_004026a5(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00402669(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004026d2 */

void FUN_004026d2(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00402669(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004026fd */

void __thiscall FUN_004026fd(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

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
  
  local_8 = DAT_00405080 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_00402699();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004019b4(local_214,0x104,this,param_1);
  FUN_00401919(local_214,0x401348);
  uVar5 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  iVar3 = FUN_004032cb(this,uVar5,uVar2,local_214);
  uVar4 = extraout_EDX;
  if (iVar3 < 0) {
    FUN_00402630(unaff_retaddr,0x88);
    uVar4 = extraout_EDX_00;
  }
  FUN_00404220(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_004027a0 */

undefined4 __fastcall FUN_004027a0(HANDLE param_1,int *param_2)

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
    goto LAB_004027c3;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_004027c3:
        uVar2 = FUN_0040264d(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00402891:
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
        goto LAB_004027c3;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_004027c3;
          }
          if (DVar1 == 0) goto LAB_00402891;
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
  FUN_00402630(unaff_retaddr,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_004028bb */

void __thiscall FUN_004028bb(void *this,int *param_1)

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
  
  local_c = DAT_00405080 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_004019b4(local_218,0x104,this,(int)this);
  FUN_00401919(local_218,0x401348);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar4 = extraout_EDX;
    if (DVar2 != 2) {
      FUN_0040264d(unaff_retaddr,0xcd);
      uVar4 = extraout_EDX_00;
    }
LAB_00402961:
    if (pvVar1 == (HANDLE)0x0) goto LAB_0040297b;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_004027a0(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_00402630(unaff_retaddr,0xd3);
      uVar4 = extraout_EDX_01;
      goto LAB_00402961;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_004026a5(pvVar1);
  uVar4 = extraout_EDX_02;
LAB_0040297b:
  FUN_00404220(local_c ^ (uint)auStack_224,uVar4);
  return;
}



/* Function: FUN_0040299a */

void __thiscall FUN_0040299a(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar5 = FUN_0040222e(*(short **)(param_1 + 0x14));
  piVar2 = (int *)((int)this + 0x28);
  pcVar4 = local_c + iVar5 + (int)pcVar4;
  if (((*(int *)((int)this + 0x24) == 0) || ((char *)*piVar2 < pcVar4)) &&
     (pvVar6 = FUN_00401d38(8,(SIZE_T)pcVar4), pvVar6 != (LPVOID)0x0)) {
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
    FUN_00403838(pcVar4,pcVar7,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00403838(extraout_EAX,pcVar7,(char *)*local_8,(undefined4 *)((int)this + 0x14));
    _Dst = FUN_004037c8(extraout_EAX_00,pcVar7,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar7 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00402ad6 */

void __fastcall FUN_00402ad6(int param_1)

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



/* Function: FUN_00402b45 */

void __thiscall FUN_00402b45(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00401d38(8,0xdc);
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
    FUN_0040299a(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00402c03 */

DWORD * __fastcall FUN_00402c03(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_00405458;
  if (DAT_00405458 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_00405458[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_00403352(*DAT_00405458,&local_8);
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



/* Function: FUN_00402c8c */

uint __fastcall FUN_00402c8c(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00402c8c(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_004050c4 + 1;
        DAT_004050c4 = DAT_004050c4 + 1;
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



/* Function: FUN_00402d4b */

void __fastcall FUN_00402d4b(int param_1,char *param_2,int param_3)

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
  iVar2 = DAT_0040546c;
  if (DAT_0040546c != 0) {
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
      uVar5 = FUN_00402c8c(param_1,*pDVar6,param_2,param_3);
      if ((char)uVar5 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar6;
      local_5 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_0040614c)(param_1);
        bVar3 = (*pcVar1)();
        local_5 = local_5 | bVar3;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
    }
  }
  pcVar1 = DAT_00405474;
  if (DAT_00405474 != (code *)0x0) {
    if ((local_5 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (*(code *)PTR_guard_check_icall_0040614c)(uVar5,param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00402e20 */

void FUN_00402e20(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00402d4b((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_0040551c != DVar2) {
    LOCK();
    iVar1 = DAT_00405524 + 1;
    UNLOCK();
    iVar3 = DAT_00405524 + 1;
    DAT_00405524 = iVar1;
    if (iVar3 < 4) {
      DAT_0040551c = DVar2;
      this = FUN_00402c03(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00402b45(this,param_1);
      }
      DAT_0040551c = 0;
    }
    LOCK();
    DAT_00405524 = DAT_00405524 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00402e85 */

void __fastcall FUN_00402e85(LPCSTR param_1)

{
  if (DAT_004054c0 == (HMODULE)0x0) {
    DAT_004054c0 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_004054c0,param_1);
  return;
}



/* Function: FUN_00402ec0 */

void FUN_00402ec0(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_004054c0 == (HMODULE)0x0) {
    DAT_004054c0 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_004054c0,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00402f10 */

undefined4 FUN_00402f10(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_00405514 == (code *)0x0) {
    DAT_00405514 = (code *)FUN_00402e85("RtlDllShutdownInProgress");
    if (DAT_00405514 == (code *)0x0) {
      return 0;
    }
  }
  pcVar1 = DAT_00405514;
  (*(code *)PTR_guard_check_icall_0040614c)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00402f50 */

void FUN_00402f50(undefined1 *param_1)

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
  
  pFVar1 = DAT_004054a8;
  local_18 = 0;
  local_c = 0;
  local_28 = *(undefined4 *)(param_1 + 8);
  local_24 = *(undefined4 *)(param_1 + 0x14);
  local_20 = *param_1;
  local_1e = DAT_004054a4;
  local_1c = *(undefined2 *)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  if (DAT_004054a8 == (FARPROC)0x0) {
    if (DAT_00405510 == (HMODULE)0x0) {
      DAT_00405510 = GetModuleHandleW(L"kernelbase.dll");
      if (DAT_00405510 != (HMODULE)0x0) goto LAB_00402fbf;
    }
    else {
LAB_00402fbf:
      pFVar1 = GetProcAddress(DAT_00405510,"WilFailureNotifyWatchers");
    }
    DAT_004054a8 = pFVar1;
    if (pFVar1 == (FARPROC)0x0) goto LAB_00402feb;
  }
  pFVar1 = DAT_004054a8;
  (*(code *)PTR_guard_check_icall_0040614c)(0,&local_28,&local_c);
  (*pFVar1)();
LAB_00402feb:
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



/* Function: FUN_00403020 */

void FUN_00403020(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  uint uVar3;
  HICON hIcon;
  LONG LVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar5;
  WCHAR local_108 [128];
  uint local_8;
  
  local_8 = DAT_00405080 ^ (uint)&stack0xfffffffc;
  if (param_2 == 2) {
    hIcon = (HICON)SendMessageW(param_1,0x7f,1,0);
    if (hIcon != (HICON)0x0) {
      DestroyIcon(hIcon);
    }
    LVar4 = GetWindowLongW(param_1,0);
    uVar5 = extraout_EDX_03;
    if (LVar4 != 0) {
      SetWindowLongW(param_1,0,0);
      Ordinal_10(LVar4,0);
      uVar5 = extraout_EDX_04;
    }
  }
  else if (param_2 == 0x1c) {
    hWnd = GetWindow(param_1,3);
    iVar1 = GetClassNameW(hWnd,local_108,0x80);
    if ((iVar1 != 0) && (iVar1 = CompareStringOrdinal(local_108,-1,L"IME",-1,1), iVar1 == 2)) {
      hWnd = GetWindow(hWnd,3);
    }
    pHVar2 = GetWindow(hWnd,4);
    uVar5 = extraout_EDX_00;
    if ((pHVar2 == param_1) &&
       (uVar3 = GetWindowLongW(hWnd,-0x14), uVar5 = extraout_EDX_01, (uVar3 & 0x40080) == 0)) {
      SetWindowLongW(hWnd,-0x14,uVar3 | 0x40000);
      uVar5 = extraout_EDX_02;
    }
  }
  else {
    DefWindowProcW(param_1,param_2,param_3,param_4);
    uVar5 = extraout_EDX;
  }
  FUN_00404220(local_8 ^ (uint)&stack0xfffffffc,uVar5);
  return;
}



/* Function: FUN_0040312b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_0040312b(int param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  DWORD DVar3;
  uint uVar4;
  DWORD dwExStyle;
  WNDCLASSW local_30;
  int local_8;
  
  uVar4 = 0;
  local_30.lpfnWndProc = FUN_00403020;
  local_30.style = 0;
  local_30.cbClsExtra = 0;
  local_30.hIcon = (HICON)0x0;
  local_30.lpszMenuName = (LPCWSTR)0x0;
  local_30.cbWndExtra = 4;
  local_30.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  local_30.hbrBackground = (HBRUSH)GetStockObject(0);
  local_30.lpszClassName = L"StubWindow32";
  local_30.hInstance = (HINSTANCE)&IMAGE_DOS_HEADER_00400000;
  RegisterClassW(&local_30);
  dwExStyle = 0x40000;
  if (DAT_004050c8 == 0xffffffff) {
    _DAT_004054bc = GetUserDefaultUILanguage();
    if (_DAT_004054bc != 0) {
      iVar1 = GetLocaleInfoW((uint)_DAT_004054bc,0x20000070,(LPWSTR)&local_8,2);
      if (0 < iVar1) {
        uVar4 = (uint)(local_8 == 1);
      }
    }
    LOCK();
    UNLOCK();
    DAT_004050c8 = uVar4;
  }
  if (DAT_004050c8 == 1) {
    dwExStyle = 0x440000;
  }
  pHVar2 = CreateWindowExW(dwExStyle,L"StubWindow32",L"",0,param_1,param_2,0,0,(HWND)0x0,(HMENU)0x0,
                           local_30.hInstance,(LPVOID)0x0);
  if (pHVar2 == (HWND)0x0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x578) {
      pHVar2 = CreateWindowExW(dwExStyle,L"StubWindow32",L"",0,param_1,param_2,0,0,(HWND)0x0,
                               (HMENU)0x0,local_30.hInstance,(LPVOID)0x0);
    }
  }
  return pHVar2;
}



/* Function: FUN_0040323d */

undefined4 FUN_0040323d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HWND hWnd;
  
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  hWnd = FUN_0040312b(-0x80000000,-0x80000000);
  if (hWnd != (HWND)0x0) {
    UsersRunDllW(hWnd,param_1,param_3,param_4);
    DestroyWindow(hWnd);
  }
  return 0;
}



/* Function: FUN_00403286 */

void __fastcall FUN_00403286(int *param_1)

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



/* Function: FUN_004032cb */

undefined4 __thiscall FUN_004032cb(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00402211(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_0040331b(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_0040331b */

void __thiscall FUN_0040331b(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_004026a5(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00403352 */

void __fastcall FUN_00403352(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined8 uVar5;
  undefined4 unaff_retaddr;
  int local_220 [2];
  HANDLE local_218;
  HANDLE local_214;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00405080 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00401970(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040331b(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00402211(extraout_ECX);
    uVar4 = extraout_EDX;
    goto LAB_00403465;
  }
  FUN_004036ba(&local_214,&local_218);
  local_220[0] = 0;
  local_220[1] = 0;
  uVar5 = FUN_004028bb(local_210,local_220);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 < 0) {
    FUN_00402630(unaff_retaddr,100);
    FUN_00402630(unaff_retaddr,0x6d);
    uVar4 = 299;
LAB_00403493:
    FUN_00402630(unaff_retaddr,uVar4);
    uVar4 = extraout_EDX_03;
  }
  else {
    piVar3 = (int *)(local_220[0] << 2);
    if (piVar3 == (int *)0x0) {
      iVar2 = FUN_004035a2((int)local_210,&local_214,param_2);
      uVar4 = extraout_EDX_02;
      if (iVar2 < 0) {
        uVar4 = 0x134;
        goto LAB_00403493;
      }
    }
    else {
      *param_2 = piVar3;
      *(int *)*param_2 = *piVar3 + 1;
    }
  }
  if (local_218 != (HANDLE)0x0) {
    FUN_004026d2(local_218);
    uVar4 = extraout_EDX_00;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004026a5(local_214);
    uVar4 = extraout_EDX_01;
  }
LAB_00403465:
  FUN_00404220(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00403550 */

void __fastcall FUN_00403550(int param_1)

{
  FUN_0040365f((int *)(param_1 + 0x18));
  FUN_0040357b((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004026a5(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040357b */

void __fastcall FUN_0040357b(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_004026a5((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_004026a5((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_004035a2 */

int __fastcall FUN_004035a2(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00401d38(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00402630(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00402699();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_004026fd(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00402630(unaff_retaddr,0x14b);
    }
    else {
      FUN_0040371d(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_0040357b(local_10);
  }
  FUN_004036fd((int *)&local_18);
  return iVar3;
}



/* Function: FUN_0040365f */

void __fastcall FUN_0040365f(int *param_1)

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
        FUN_00402ad6((int)lpMem + 8);
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



/* Function: FUN_004036ba */

void __thiscall FUN_004036ba(void *this,undefined4 *param_1)

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
    FUN_00402681(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_004036fd */

void __fastcall FUN_004036fd(int *param_1)

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



/* Function: FUN_0040371d */

undefined4 * __thiscall FUN_0040371d(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00403781 */

void __fastcall
FUN_00403781(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00401fb1(param_7);
  local_8 = 0;
  FUN_00403af2(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_004037c8 */

void * __fastcall FUN_004037c8(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint _MaxCount;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    _MaxCount = FUN_0040222e(param_3);
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



/* Function: FUN_00403838 */

char * __fastcall FUN_00403838(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

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



/* Function: FUN_0040389f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040389f(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  int *in_stack_00000014;
  undefined4 local_1460;
  uint local_145c;
  int local_1458;
  uint local_1454;
  int local_1450;
  undefined4 local_144c;
  DWORD DStack_1448;
  undefined4 uStack_1444;
  undefined4 uStack_1440;
  char *pcStack_143c;
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
  undefined4 uStack_140c;
  undefined1 local_1408 [1024];
  wchar_t local_1008 [2046];
  undefined4 uStack_c;
  
  uStack_c = 0x4038b1;
  local_1458 = *in_stack_00000014;
  local_1008[0] = L'\0';
  local_1408[0] = 0;
  local_1454 = in_stack_00000014[1];
  uStack_1434 = FUN_00401e00(local_1458);
  local_1460 = 3;
  local_145c = 0;
  if (in_stack_00000014[2] == 1) {
    local_145c = 8;
  }
  LOCK();
  UNLOCK();
  local_1450 = DAT_004054b8 + 1;
  local_144c = 0;
  DAT_004054b8 = DAT_004054b8 + 1;
  DStack_1448 = GetCurrentThreadId();
  pcVar1 = DAT_0040549c;
  pcStack_143c = "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h";
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
  if (DAT_0040549c == (code *)0x0) {
    uStack_1414 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040614c)();
    uStack_1414 = (*pcVar1)();
  }
  pcVar1 = DAT_00405468;
  if (DAT_00405468 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_00405480;
  if (DAT_00405480 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(&local_1460,local_1408,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040547c;
  if (DAT_0040547c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040548c;
  if ((DAT_0040548c != (code *)0x0) && ((local_145c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040614c)(&local_1460);
    (*pcVar1)();
  }
  if (-1 < local_1458) {
    local_1458 = -0x7fff0001;
    local_1454 = FUN_00401fb1(0x8000ffff);
  }
  pcVar1 = DAT_00405454;
  if (DAT_0040545c == '\0') {
    if (DAT_00405454 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040614c)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00403a39;
  }
  else {
LAB_00403a39:
    pcVar1 = DAT_00405460;
    if ((local_145c & 2) == 0) {
      if ((DAT_00405460 != (code *)0x0) && (DAT_00405470 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040614c)(&local_1460,local_1008,0x800);
        (*pcVar1)();
      }
      if (local_1008[0] == L'\0') {
        FUN_00401aa4(local_1008,0x800,(int)&local_1460);
      }
      OutputDebugStringW(local_1008);
      goto LAB_00403abf;
    }
  }
  pcVar1 = DAT_00405460;
  if ((DAT_00405460 != (code *)0x0) && (DAT_00405470 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040614c)(&local_1460,0,0);
    (*pcVar1)();
  }
LAB_00403abf:
  pcVar1 = DAT_00405488;
  if ((((local_145c & 4) != 0) || (DAT_00405464 != '\0')) && (DAT_00405488 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040614c)();
    (*pcVar1)();
  }
  FUN_004024e8((int)&local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403af2 */

void __fastcall
FUN_00403af2(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00403bbf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00403b18 */

void __fastcall FUN_00403b18(undefined4 param_1,undefined4 param_2)

{
  FUN_00403c65(param_1,param_2);
  return;
}



/* Function: FUN_00403b29 */

void __fastcall FUN_00403b29(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_00401fb1(in_stack_00000014);
  FUN_00403b18(param_1,param_2);
  return;
}



/* Function: FUN_00403b6a */

uint __fastcall FUN_00403b6a(int param_1,int param_2)

{
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = FUN_004021c2(param_1,param_2,0x40130c,param_1,param_1,in_stack_00000010);
  FUN_00401fb1(uVar1);
  FUN_00403b18(param_1,param_2);
  return uVar1;
}



/* Function: FUN_00403bbf */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00403bbf(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_00405080 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00402256(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_00404220(local_c ^ (uint)&local_1474,extraout_EDX);
    return;
  }
  FUN_004024e8((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403c65 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00403c65(undefined4 param_1,undefined4 param_2)

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
  
  local_c = DAT_00405080 ^ (uint)auStack_1474;
  local_1470 = in_stack_00000010;
  local_1010[0] = L'\0';
  local_1410[0] = 0;
  local_145c = in_stack_00000014[1];
  local_1460 = *in_stack_00000014;
  local_146c = param_1;
  iStack_143c = FUN_00401dce(local_1460);
  local_1464 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1464 = 8;
  }
  local_1468 = 1;
  LOCK();
  UNLOCK();
  local_1458 = DAT_004054b8 + 1;
  local_1454 = 0;
  DAT_004054b8 = DAT_004054b8 + 1;
  DStack_1450 = GetCurrentThreadId();
  pcVar1 = DAT_0040549c;
  uStack_1418 = local_1470;
  uStack_1414 = local_146c;
  puStack_1444 = &DAT_0040130c;
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
  if (DAT_0040549c == (code *)0x0) {
    lVar5 = (ulonglong)extraout_EDX << 0x20;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040614c)();
    lVar5 = (*pcVar1)();
  }
  pcVar1 = DAT_00405468;
  uStack_141c = (undefined4)lVar5;
  if (DAT_00405468 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_00,uStack_141c);
  }
  pcVar1 = DAT_00405480;
  uStack_141c = (undefined4)lVar5;
  if (DAT_00405480 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(&local_1468,local_1410,0x400);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_01,uStack_141c);
  }
  pcVar1 = DAT_0040547c;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040547c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040614c)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_02,uStack_141c);
  }
  pcVar1 = DAT_0040548c;
  uStack_141c = (undefined4)lVar5;
  if ((DAT_0040548c != (code *)0x0) && ((local_1464 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040614c)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_03,uStack_141c);
  }
  pcVar1 = DAT_00405454;
  uStack_141c = (undefined4)lVar5;
  if (-1 < local_1460) {
    FUN_00402699();
    goto LAB_00403ec6;
  }
  if (DAT_0040545c == '\0') {
    if (DAT_00405454 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      uVar2 = (uint)(BVar3 != 0);
      uVar4 = extraout_EDX_04;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040614c)();
      uVar6 = (*pcVar1)();
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar2 = (uint)uVar6 & 0xff;
    }
    lVar5 = CONCAT44(uVar4,uStack_141c);
    if (uVar2 != 0) goto LAB_00403dfa;
LAB_00403e01:
    pcVar1 = DAT_00405460;
    uStack_141c = (undefined4)lVar5;
    if ((DAT_00405460 != (code *)0x0) && (DAT_00405470 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040614c)(&local_1468,0,0);
      (*pcVar1)();
      lVar5 = CONCAT44(extraout_EDX_05,uStack_141c);
    }
  }
  else {
LAB_00403dfa:
    pcVar1 = DAT_00405460;
    uStack_141c = (undefined4)lVar5;
    if ((local_1464 & 2) != 0) goto LAB_00403e01;
    if ((DAT_00405460 != (code *)0x0) && (DAT_00405470 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040614c)(&local_1468,local_1010,0x800);
      (*pcVar1)();
    }
    if (local_1010[0] == L'\0') {
      FUN_00401aa4(local_1010,0x800,(int)&local_1468);
    }
    OutputDebugStringW(local_1010);
    lVar5 = CONCAT44(extraout_EDX_06,uStack_141c);
  }
  pcVar1 = DAT_00405488;
  uStack_141c = (undefined4)lVar5;
  if ((((local_1464 & 4) != 0) || (DAT_00405464 != '\0')) && (DAT_00405488 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040614c)();
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_07,uStack_141c);
  }
  uStack_141c = (undefined4)lVar5;
  if ((local_1464 & 1) == 0) {
    FUN_00404220(local_c ^ (uint)auStack_1474,(int)((ulonglong)lVar5 >> 0x20));
    return;
  }
LAB_00403ec6:
  FUN_004024e8((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403ee0 */

undefined4 FUN_00403ee0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_004041a1();
  DAT_00405118 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_004043e4(2);
  __set_app_type(iVar2);
  DAT_00405530 = 0xffffffff;
  DAT_00405534 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_0040512c;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_00405120;
  FUN_00404440();
  if (DAT_00405040 == 0) {
    __setusermatherr(FUN_00404440);
  }
  FUN_00404647();
  return 0;
}



/* Function: FUN_00403f50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403f50(void)

{
  _DAT_0040511c = DAT_00405128;
  _DAT_00405114 =
       __wgetmainargs((int *)&DAT_00405108,(wchar_t ***)&DAT_0040510c,(wchar_t ***)&DAT_00405110,
                      DAT_00405124,(_startupinfo *)&DAT_0040511c);
  return;
}



/* Function: FUN_00403f8a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00403f8a(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  uint uVar8;
  _STARTUPINFOW local_6c;
  ushort *local_24;
  uint local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004048f0;
  uStack_c = 0x403f96;
  local_20 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = (undefined *)0x0;
  iVar6 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar5 = 0;
    LOCK();
    iVar3 = iVar6;
    if (DAT_00405528 != 0) {
      iVar5 = DAT_00405528;
      iVar3 = DAT_00405528;
    }
    DAT_00405528 = iVar3;
    UNLOCK();
    if (iVar5 == 0) goto LAB_00403fdf;
    if (iVar5 == iVar6) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00403fdf:
  if (DAT_0040552c == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0040552c == 0) {
    DAT_0040552c = 1;
    iVar6 = FUN_0040416a((undefined4 *)&DAT_004010e4,(undefined4 *)&DAT_004010f0);
    if (iVar6 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_00405104 = 1;
  }
  if (DAT_0040552c == 1) {
    initterm(&DAT_004010c8,&DAT_004010e0);
    DAT_0040552c = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00405528 = 0;
    UNLOCK();
  }
  if ((DAT_00405538 != (code *)0x0) &&
     (BVar7 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00405538), pcVar2 = DAT_00405538, BVar7 != 0
     )) {
    (*(code *)PTR_guard_check_icall_0040614c)(0,2,0);
    (*pcVar2)();
  }
  local_24 = *(ushort **)_wcmdln_exref;
  uVar8 = local_20;
  if (local_24 == (ushort *)0x0) {
    ExceptionList = local_14;
    return 0xff;
  }
  do {
    uVar4 = *local_24;
    if (uVar4 < 0x21) {
      if (uVar4 == 0) goto LAB_004040c1;
      if (uVar8 == 0) {
        while ((uVar4 != 0 && (uVar4 < 0x21))) {
          local_24 = local_24 + 1;
          uVar4 = *local_24;
        }
LAB_004040c1:
        uVar8 = 10;
        if (((byte)local_6c.dwFlags & 1) != 0) {
          uVar8 = (uint)local_6c.wShowWindow;
        }
        DAT_00405100 = FUN_0040323d(0x400000,0,local_24,uVar8);
        if (DAT_00405118 == 0) {
                    /* WARNING: Subroutine does not return */
          exit(DAT_00405100);
        }
        if (DAT_00405104 == 0) {
          _cexit();
          ExceptionList = local_14;
          return DAT_00405100;
        }
        ExceptionList = local_14;
        return DAT_00405100;
      }
    }
    if (uVar4 == 0x22) {
      uVar8 = (uint)(uVar8 == 0);
      local_20 = uVar8;
    }
    local_24 = local_24 + 1;
  } while( true );
}



/* Function: FUN_0040416a */

void __cdecl FUN_0040416a(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_0040614c)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_004041a1 */

bool FUN_004041a1(void)

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
  FUN_004045a9();
  FUN_00403f8a();
  return;
}



/* Function: FUN_00404220 */

void __fastcall FUN_00404220(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00405080) {
    return;
  }
  FUN_0040472b(param_1,param_2);
  return;
}



/* Function: FUN_00404236 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_00404236(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00404910;
  uStack_c = 0x404242;
  local_20[0] = DAT_00405534;
  if (DAT_00405534 == -1) {
    (*(code *)PTR_guard_check_icall_0040614c)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_00405534;
    local_24 = DAT_00405530;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_00405534 = local_20[0];
    DAT_00405530 = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_004042d0();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_004042d0 */

void FUN_004042d0(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_004042df */

int __cdecl FUN_004042df(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_00404236(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: FUN_00404300 */

undefined4 FUN_00404300(int *param_1)

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



/* Function: FUN_00404350 */

undefined4 FUN_00404350(void)

{
  SetUnhandledExceptionFilter(FUN_00404300);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00404370 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00404370(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_004043e4 */

undefined4 __cdecl FUN_004043e4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00404370(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00404426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00404440 */

undefined4 FUN_00404440(void)

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
  
  pcStack_10 = FUN_004046d0;
  local_14 = ExceptionList;
  local_c = DAT_00405080 ^ 0x404950;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00404570((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00404570 */

bool __cdecl FUN_00404570(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_004045a9 */

void FUN_004045a9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00405080 == 0xbb40e64e) || ((DAT_00405080 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00405080 & 0xffff0000, DAT_00405080 = local_8, uVar1 == 0)) {
      DAT_00405080 = 0xbb40e64f;
    }
  }
  DAT_004050c0 = ~DAT_00405080;
  return;
}



/* Function: FUN_00404647 */

void FUN_00404647(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404660. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00405080 ^ (uint)&param_2;
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



/* Function: FUN_004046d0 */

void __cdecl
FUN_004046d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00405080,FUN_00404220,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_004046fb */

void __cdecl FUN_004046fb(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0040472b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040472b(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_00405240 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_00405244 = &stack0x00000004;
  _DAT_00405180 = 0x10001;
  _DAT_00405130 = 0xc0000409;
  _DAT_00405134 = 1;
  _DAT_00405140 = 3;
  DAT_00405144 = 2;
  DAT_00405148 = DAT_00405080;
  DAT_0040514c = DAT_004050c0;
  uStack_c = DAT_00405080;
  uStack_8 = DAT_004050c0;
  _DAT_0040513c = unaff_retaddr;
  _DAT_0040520c = in_GS;
  _DAT_00405210 = in_FS;
  _DAT_00405214 = in_ES;
  _DAT_00405218 = in_DS;
  _DAT_0040521c = unaff_EDI;
  _DAT_00405220 = unaff_ESI;
  _DAT_00405224 = unaff_EBX;
  _DAT_00405228 = param_2;
  _DAT_0040522c = param_1;
  _DAT_00405230 = in_EAX;
  _DAT_00405234 = unaff_EBP;
  DAT_00405238 = unaff_retaddr;
  _DAT_0040523c = in_CS;
  _DAT_00405248 = in_SS;
  FUN_004046fb((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040483f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040484b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404863. Too many branches */
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



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004048b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: FUN_004048c0 */

int FUN_004048c0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  HANDLE hHeap;
  int in_EAX;
  int *piVar5;
  int *lpMem;
  int *local_8;
  
  pcVar1 = DAT_00405484;
  lpMem = DAT_00405004;
  if (DAT_00405004 == (int *)0x0) {
    return in_EAX;
  }
  local_8 = DAT_00405004;
  if (DAT_00405494 == '\0') {
    if (DAT_00405484 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040614c)();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') goto LAB_00403542;
    }
    iVar3 = FUN_004036ba(lpMem + 1,&local_8);
    *lpMem = *lpMem + -1;
    piVar5 = local_8;
    if (*lpMem == 0) {
      FUN_0040331b(lpMem + 2,0);
      FUN_0040331b(lpMem + 3,0);
      if (local_8 != (int *)0x0) {
        DVar4 = GetLastError();
        FUN_004026d2(local_8);
        SetLastError(DVar4);
      }
      FUN_00403550((int)lpMem);
      DVar4 = 0;
      hHeap = GetProcessHeap();
      iVar3 = HeapFree(hHeap,DVar4,lpMem);
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      iVar3 = FUN_004026d2(piVar5);
    }
  }
  else {
LAB_00403542:
    *lpMem = *lpMem + -1;
    iVar3 = *lpMem;
  }
  return iVar3;
}



/* Function: FUN_004048e0 */

void FUN_004048e0(void)

{
  FUN_00403286((int *)&DAT_004050d0);
  return;
}



