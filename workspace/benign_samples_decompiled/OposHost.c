/* Function: FUN_00401cb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401cb0(void)

{
  _DAT_004094c0 = FUN_00402ab0;
  _DAT_004094d4 = FUN_00402ac0;
  DAT_004094cc = FUN_00402b50;
  return;
}



/* Function: FUN_00401ce0 */

void FUN_00401ce0(void)

{
  DAT_004094dc = FUN_00402470;
  DAT_004094bc = DebugBreak;
  DAT_004094d8 = FUN_004024b0;
  DAT_004094ac = FUN_00402d60;
  DAT_004094a4 = FUN_00402db0;
  return;
}



/* Function: FUN_00401d20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401d20(void)

{
  int iVar1;
  
  iVar1 = FUN_00403440((LPCRITICAL_SECTION)&DAT_0040958c);
  if (-1 < iVar1) {
    _DAT_00409580 = 0x24;
  }
  DAT_0040957c = &PTR_FUN_0040103c;
  DAT_00409540 = DAT_004015d4;
  DAT_00409544 = DAT_004015d8;
  DAT_00409548 = DAT_004015dc;
  DAT_0040954c = DAT_004015e0;
  FUN_004077e2(FUN_00408870);
  return;
}



/* Function: FUN_00401d66 */

undefined4 __fastcall FUN_00401d66(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_00401df0 */

void __fastcall FUN_00401df0(undefined4 *param_1)

{
  Ordinal_6(*param_1);
  return;
}



/* Function: FUN_00401dff */

undefined4 __fastcall FUN_00401dff(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00401e65 */

undefined4 __cdecl FUN_00401e65(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00401ea9((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_00401ea9 */

undefined4 __fastcall
FUN_00401ea9(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_0040828a(param_1,uVar1,param_4,param_5);
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



/* Function: FUN_00401f30 */

char * __fastcall FUN_00401f30(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_00401f50 */

undefined4 * __thiscall FUN_00401f50(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_004074db(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00401f85 */

short * __thiscall FUN_00401f85(void *this,short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_00401ea9((int)param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_00401fdc */

void __fastcall FUN_00401fdc(short *param_1,int param_2,int param_3)

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
  
  pcVar3 = DAT_00409498;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040849d;
  local_10 = ExceptionList;
  local_14 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar3 != (code *)0x0) && (DAT_004094a8 != '\0')) {
      (*(code *)PTR_guard_check_icall_0040a210)(param_3,param_1,param_2,local_14);
      (*pcVar3)();
      if (*param_1 != 0) goto LAB_0040224b;
    }
    memset(local_214,0,0x200);
    pcVar3 = DAT_004094ac;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_004094ac != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040a210)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_00401f85(pcVar3,param_1,psVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_218 = FUN_00401f85(pcVar3,param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_00401f85(pvVar4,local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar2 = FUN_00401f85(local_214,local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar2 = FUN_00401f85((void *)0x0,psVar2,psVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar2 = FUN_00401f85(this,psVar2,psVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar2 = FUN_00401f85(pvVar4,psVar2,psVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00401f85(pvVar4,psVar2,psVar1,&DAT_00401520);
        }
        else {
          FUN_00401f85(pvVar4,psVar2,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_00401f85(pvVar4,psVar2,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_0040224b:
  ExceptionList = local_10;
  FUN_00407390(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402274 */

uint * __thiscall FUN_00402274(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_004024f1((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00402298 */

undefined4 * __thiscall FUN_00402298(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_004022d1((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_004022d1 */

void __fastcall FUN_004022d1(undefined4 *param_1)

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



/* Function: FUN_00402308 */

undefined4 __thiscall FUN_00402308(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_004022d1((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_00402352;
    *piVar1 = 0;
    FUN_004022d1((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_00402352:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_00402370 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402370(undefined4 param_1)

{
  _DAT_0040953c = param_1;
  return 1;
}



/* Function: FUN_0040238a */

void FUN_0040238a(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
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
      FUN_00401dff(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_00407390(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402470 */

undefined * FUN_00402470(void)

{
  if (DAT_004094ec == '\0') {
    FUN_0040238a((LPCWSTR)FUN_00402370,(uint *)0x0,&DAT_004094f8,0x40);
    DAT_004094ec = '\x01';
  }
  return &DAT_004094f8;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x004024a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_004024b0 */

void FUN_004024b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0040a210)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_004024f1 */

uint __fastcall FUN_004024f1(uint param_1)

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



/* Function: FUN_004026c6 */

char * __fastcall FUN_004026c6(char *param_1)

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



/* Function: FUN_004026e4 */

int __fastcall FUN_004026e4(short *param_1)

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



/* Function: FUN_0040270c */

void __thiscall FUN_0040270c(void *this,undefined4 *param_1)

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
  iVar10 = FUN_004026e4((short *)param_1[0x12]);
  iVar1 = FUN_004026e4((short *)param_1[0xf]);
  iVar2 = FUN_004026e4((short *)param_1[5]);
  pcVar3 = FUN_004026c6((char *)param_1[0x11]);
  pcVar4 = FUN_004026c6((char *)param_1[0xe]);
  pcVar5 = FUN_004026c6((char *)param_1[0xc]);
  pcVar6 = FUN_004026c6((char *)param_1[9]);
  pcVar7 = FUN_004026c6((char *)param_1[8]);
  pcVar8 = FUN_004026c6((char *)param_1[7]);
  pcVar9 = FUN_004026c6((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_004022d1(this_00);
    FUN_00402308(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_00402eb3(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_00402f23(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_00402f23(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_00402f23(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_00402f23(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_00402f23(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_00402f23(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_00402eb3(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_00402f23(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_00402eb3(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_0040289f */

undefined4 * __thiscall FUN_0040289f(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401034;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_0040270c((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_004028e0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004028e0(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_00401fdc(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_00402308(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_00407390(local_8 ^ (uint)&stack0xfffffffc);
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
  FUN_004029c0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_004074db(this);
  }
  return this;
}



/* Function: FUN_004029c0 */

void __fastcall FUN_004029c0(undefined4 *param_1)

{
  FUN_004022d1(param_1 + 0x1b);
  FUN_004022d1(param_1 + 0x19);
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_004029ed */

void __fastcall FUN_004029ed(int *param_1,undefined2 *param_2,uint param_3)

{
  code *pcVar1;
  
  if (param_2 != (undefined2 *)0x0) {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_0040a210)();
    (*pcVar1)();
    FUN_00401e65(param_2,param_3,L"std::exception: %hs");
  }
  return;
}



/* Function: FUN_00402a2d */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_00402a2d(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_004094a0;
  (*(code *)PTR_guard_check_icall_0040a210)();
  iVar2 = (*pcVar1)();
  if ((iVar2 < 0) && (param_1 == 0)) {
    FUN_00402a8b();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: Catch@00402a5e */

undefined * Catch_00402a5e(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_004029ed(*(int **)(unaff_EBP + -0x20),*(undefined2 **)(unaff_EBP + -0x1c),
               *(uint *)(unaff_EBP + -0x18));
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (-1 < iVar1) {
    iVar1 = -0x7ff8fdc2;
  }
  *(int *)(unaff_EBP + -0x14) = iVar1;
  return &DAT_00402a88;
}



/* Function: Catch_All@00402a82 */

undefined * Catch_All_00402a82(void)

{
  return &DAT_00402a88;
}



/* Function: FUN_00402a8b */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00402a8b(void)

{
  return;
}



/* Function: FUN_00402ab0 */

void FUN_00402ab0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00402ac0 */

void FUN_00402ac0(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_0040289f(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_00408d88);
}



/* Function: FUN_00402af0 */

exception * __thiscall FUN_00402af0(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401034;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_00402298((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_00402298((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00402b50 */

void FUN_00402b50(uint *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004084f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0;
  }
  pcVar1 = DAT_004094b0;
  *param_4 = 0;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a210)(param_2,param_3,param_4);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) goto LAB_00402bad;
  }
  pcVar1 = DAT_004094d0;
  if (DAT_004094d0 == (code *)0x0) {
    if (DAT_004094a0 != 0) {
      uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
    }
    FUN_00402c88((ThrowInfo *)0x0);
    return;
  }
  (*(code *)PTR_guard_check_icall_0040a210)(param_2,param_3,param_4);
  uVar2 = (*pcVar1)();
LAB_00402bad:
  *param_1 = uVar2;
  FUN_00402d2d(uVar2);
  return;
}



/* Function: Catch@00402bea */

undefined * Catch_00402bea(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_00401fdc(psVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_00402c24;
}



/* Function: Catch@00402c34 */

undefined * Catch_00402c34(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_004029ed(*(int **)(unaff_EBP + -0x1c),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_004024f1(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00402c24;
}



/* Function: Catch_All@00402c5c */

undefined * Catch_All_00402c5c(void)

{
  uint uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_00402a2d(*(int *)(unaff_EBP + 0xc));
  if ((int)uVar1 < 0) {
    *(uint *)(unaff_EBP + -0x30) = uVar1;
    uVar1 = FUN_004024f1(uVar1);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(uint *)(unaff_EBP + -0x2c) = uVar1;
    return &DAT_00402c24;
  }
  return &DAT_00402d24;
}



/* Function: FUN_00402c88 */

void FUN_00402c88(ThrowInfo *param_1)

{
  int unaff_EBP;
  void *unaff_retaddr;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(unaff_retaddr,param_1);
}



/* Function: Catch@00402c94 */

undefined * Catch_00402c94(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x18);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_00401fdc(psVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_00402c24;
}



/* Function: Catch@00402cce */

undefined * Catch_00402cce(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_004029ed(*(int **)(unaff_EBP + -0x20),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_004024f1(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00402c24;
}



/* Function: Catch@00402cf6 */

undefined * Catch_00402cf6(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_004029ed(*(int **)(unaff_EBP + -0x24),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007023e;
  uVar1 = FUN_004024f1(0x8007023e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00402c24;
}



/* Function: Catch_All@00402d1e */

undefined * Catch_All_00402d1e(void)

{
  return &DAT_00402d24;
}



/* Function: FUN_00402d2d */

void __fastcall FUN_00402d2d(uint param_1)

{
  uint uVar1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  uVar1 = FUN_004024f1(param_1);
  *(uint *)(unaff_ESI + 4) = uVar1;
  *(undefined4 *)(unaff_ESI + 8) = unaff_EBX;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_00402d60 */

void FUN_00402d60(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_004094f0 == (HMODULE)0x0) {
    DAT_004094f0 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_004094f0,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00402db0 */

void FUN_00402db0(undefined1 *param_1)

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
  
  pFVar2 = DAT_004094e8;
  puStack_c = &LAB_00408513;
  local_10 = ExceptionList;
  uVar1 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_004094e4;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_004094e8 == (FARPROC)0x0) {
    if (DAT_00409538 == (HMODULE)0x0) {
      DAT_00409538 = GetModuleHandleW(L"kernelbase.dll");
      if (DAT_00409538 != (HMODULE)0x0) goto LAB_00402e42;
    }
    else {
LAB_00402e42:
      pFVar2 = GetProcAddress(DAT_00409538,"WilFailureNotifyWatchers");
    }
    DAT_004094e8 = pFVar2;
    if (pFVar2 == (FARPROC)0x0) goto LAB_00402e6e;
  }
  pFVar2 = DAT_004094e8;
  (*(code *)PTR_guard_check_icall_0040a210)(0,&local_34,&local_18,uVar1);
  (*pFVar2)();
LAB_00402e6e:
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



/* Function: FUN_00402eb3 */

void * __fastcall FUN_00402eb3(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_004026e4(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_00401d66(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_00402f23 */

char * __fastcall FUN_00402f23(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_004026c6(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      FUN_00401d66(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar1);
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



/* Function: FUN_00402f86 */

void __fastcall
FUN_00402f86(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            wchar_t *param_5)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (param_5 == (wchar_t *)0x0) {
    iVar3 = 10;
  }
  else {
    pwVar2 = param_5;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    iVar3 = ((int)pwVar2 - (int)(param_5 + 1) >> 1) * 2 + 2;
  }
  pwVar2 = L"NULL";
  if (param_5 != (wchar_t *)0x0) {
    pwVar2 = param_5;
  }
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,pwVar2,iVar3,0);
  return;
}



/* Function: FUN_00402feb */

void FUN_00402feb(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (param_3 == (wchar_t *)0x0) {
    iVar3 = 10;
  }
  else {
    pwVar2 = param_3;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    iVar3 = ((int)pwVar2 - (int)(param_3 + 1) >> 1) * 2 + 2;
  }
  pwVar2 = L"NULL";
  if (param_3 != (wchar_t *)0x0) {
    pwVar2 = param_3;
  }
  TraceMessage(param_1,param_2,0x2b,&DAT_00401610,0xb,pwVar2,iVar3,&stack0x00000010,8,0);
  return;
}



/* Function: FUN_00403052 */

void __fastcall
FUN_00403052(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,&stack0x0000000c,4,0);
  return;
}



/* Function: FUN_00403080 */

undefined4 FUN_00403080(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  *param_3 = 0;
  if (param_1 == 4) {
    uVar3 = GetTraceLoggerHandle(param_4);
    uVar1 = GetTraceEnableLevel(uVar3);
    uVar2 = GetTraceEnableFlags(uVar3);
  }
  else {
    if (param_1 != 5) {
      return 0x57;
    }
    uVar1 = 0;
    uVar3 = 0;
  }
  if (((*(byte *)(param_2 + 0x1a) & 2) != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    param_2 = *(int *)(param_2 + 0x10);
  }
  *(undefined1 *)(param_2 + 0x19) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  return 0;
}



/* Function: FUN_00403110 */

int __thiscall FUN_00403110(void *this,byte param_1)

{
  FUN_004034af((int)this);
  if ((param_1 & 1) != 0) {
    FUN_004074db(this);
  }
  return (int)this;
}



/* Function: FUN_0040313a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040313a(int param_1,int param_2)

{
  wchar_t *pwVar1;
  LPCWSTR pWVar2;
  HRESULT HVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined *local_18;
  HANDLE local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x403146;
  _DAT_00409568 = 1;
  puVar5 = &DAT_00409550;
  DAT_00409560 = 0;
  DAT_00409550 = 0;
  ppuVar6 = &DAT_00409578;
  _DAT_0040956c = 0;
  DAT_00409578 = &DAT_00401620;
  PTR_LOOP_00409000 = (undefined *)&DAT_00409550;
  do {
    local_14 = (HANDLE)0x0;
    local_18 = *ppuVar6;
    ppuVar6 = ppuVar6 + 1;
    puVar5[8] = local_18;
    RegisterTraceGuidsW(FUN_00403080,puVar5,local_18,1,&local_18,0,0,puVar5 + 2);
    puVar5 = (undefined4 *)*puVar5;
  } while (puVar5 != (undefined4 *)0x0);
  if (param_1 < 3) {
    if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) {
      return 1;
    }
    if ((PTR_LOOP_00409000[0x1c] & 1) == 0) {
      return 1;
    }
    uVar4 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
    uVar7 = 10;
  }
  else {
    pwVar1 = *(wchar_t **)(param_2 + 4);
    pWVar2 = *(LPCWSTR *)(param_2 + 8);
    local_14 = (HANDLE)o_wcstoll(pwVar1,0,0);
    if (local_14 == (HANDLE)0x0) {
      if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) {
        return 1;
      }
      if ((PTR_LOOP_00409000[0x1c] & 1) == 0) {
        return 1;
      }
      FUN_00402feb(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14),pwVar1);
      return 1;
    }
    HVar3 = CoInitializeEx((LPVOID)0x0,2);
    if (-1 < HVar3) {
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
        FUN_00402f86(0xd,&DAT_00401610,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14),pWVar2);
      }
      local_48 = 0xffffffff;
      local_50 = 0;
      local_4c = 0;
      local_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_8 = 0;
      uVar4 = FUN_00404412(&local_50,pWVar2,local_14);
      if ((char)uVar4 != '\0') {
        FUN_00404b86(&local_50);
      }
      FUN_00403fcb(&local_50);
      CoUninitialize();
      puVar5 = (undefined4 *)PTR_LOOP_00409000;
      if ((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) {
        for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
          if (puVar5[2] != 0 || puVar5[3] != 0) {
            UnregisterTraceGuids(puVar5[2],puVar5[3]);
            puVar5[2] = 0;
            puVar5[3] = 0;
          }
        }
        PTR_LOOP_00409000 = (undefined *)&PTR_LOOP_00409000;
      }
      return 0;
    }
    if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) {
      return 1;
    }
    if ((PTR_LOOP_00409000[0x1c] & 1) == 0) {
      return 1;
    }
    uVar4 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
    uVar7 = 0xc;
  }
  FUN_00403052(uVar7,&DAT_00401610,uVar8,uVar4);
  return 1;
}



/* Function: FUN_00403320 */

void FUN_00403320(int *param_1)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00408566;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar1 = *(code **)(*param_1 + 0xc);
  (*(code *)PTR_guard_check_icall_0040a210)
            (param_1,L"APPID",&DAT_00401600,DAT_004090c0 ^ (uint)&stack0xfffffffc);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00403380 */

HRESULT __thiscall FUN_00403380(void *this,undefined4 *param_1)

{
  LPVOID *ppv;
  code *pcVar1;
  uint uVar2;
  HRESULT HVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00408589;
  local_10 = ExceptionList;
  uVar2 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == (undefined4 *)0x0) {
    HVar3 = -0x7fffbffd;
  }
  else {
    HVar3 = 0;
    ppv = (LPVOID *)((int)this + 0x28);
    if ((*ppv != (LPVOID)0x0) ||
       (HVar3 = CoCreateInstance((IID *)&DAT_004015c4,(LPUNKNOWN)0x0,1,(IID *)&DAT_004015f0,ppv),
       -1 < HVar3)) {
      *param_1 = *ppv;
                    /* WARNING: Load size is inaccurate */
      pcVar1 = *(code **)(**ppv + 4);
      (*(code *)PTR_guard_check_icall_0040a210)(*ppv,uVar2);
      (*pcVar1)();
    }
  }
  ExceptionList = local_10;
  return HVar3;
}



/* Function: FUN_00403410 */

undefined4 __fastcall FUN_00403410(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Function: FUN_00403420 */

int __fastcall FUN_00403420(int param_1)

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



/* Function: FUN_00403430 */

int __fastcall FUN_00403430(int param_1)

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



/* Function: FUN_00403440 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_00403440(LPCRITICAL_SECTION param_1)

{
  undefined4 local_14;
  
  InitializeCriticalSection(param_1);
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_00403497 */

void FUN_00403497(void)

{
  RaiseException(0xc0000005,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_004034af */

void __fastcall FUN_004034af(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  uint uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004085ac;
  local_10 = ExceptionList;
  uVar5 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
  piVar6 = (int *)(param_1 + 4);
  if (*piVar6 != 0) {
    ppvVar4 = &local_10;
    if (*(int *)(param_1 + 0xc) != 0) {
      if (param_1 == 0) {
        piVar6 = (int *)0x0;
      }
      if (piVar6 == (int *)0x0) {
        ExceptionList = &local_10;
        FUN_00403497();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar3 = (undefined4 *)piVar6[2];
      while (ExceptionList = ppvVar4, puVar3 != (undefined4 *)0x0) {
        pcVar1 = (code *)*puVar3;
        (*(code *)PTR_guard_check_icall_0040a210)(puVar3[1],uVar5);
        (*pcVar1)();
        puVar2 = (undefined4 *)puVar3[2];
        FUN_004074db(puVar3);
        ppvVar4 = (void **)ExceptionList;
        puVar3 = puVar2;
      }
      piVar6[2] = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      ppvVar4 = (void **)ExceptionList;
    }
    ExceptionList = ppvVar4;
    piVar6 = *(int **)(param_1 + 0x28);
    if (piVar6 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar6 + 8);
      (*(code *)PTR_guard_check_icall_0040a210)(piVar6);
      (*pcVar1)();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00403574 */

void __fastcall
FUN_00403574(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,0);
  return;
}



/* Function: FUN_00403598 */

void __fastcall
FUN_00403598(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            wchar_t *param_5)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (param_5 == (wchar_t *)0x0) {
    iVar3 = 10;
  }
  else {
    pwVar2 = param_5;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    iVar3 = ((int)pwVar2 - (int)(param_5 + 1) >> 1) * 2 + 2;
  }
  pwVar2 = L"NULL";
  if (param_5 != (wchar_t *)0x0) {
    pwVar2 = param_5;
  }
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,pwVar2,iVar3,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_00403603 */

void __thiscall FUN_00403603(void *this,undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401660,this,&stack0x0000000c,4,&stack0x00000010,4,
               &stack0x00000014,4,0);
  return;
}



/* Function: FUN_0040363d */

void FUN_0040363d(undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401660,0x12,&stack0x0000000c,4,&stack0x00000010,4,
               &stack0x00000014,4,&stack0x00000018,4,&stack0x0000001c,4,&stack0x00000020,4,0);
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_00403699 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00403699(void *this,undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  LPWSTR pWVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  uint nSize;
  LPWSTR local_22c;
  HMODULE local_228;
  LPWSTR local_224;
  int *local_220;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x224;
  local_8 = 0x4036a8;
  BVar3 = GetModuleHandleExW(6,(LPCWSTR)guard_check_icall,&local_228);
  if (BVar3 == 0) {
    GetLastError();
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      GetLastError();
      FUN_00403052(10,&DAT_00401660,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
    goto LAB_0040394a;
  }
  local_22c = (LPWSTR)0x0;
  local_8 = 0;
  nSize = 0x104;
  local_224 = local_21c;
  DVar4 = GetModuleFileNameW(local_228,local_224,0x104);
  if (DVar4 == 0) {
    GetLastError();
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      GetLastError();
      FUN_00403052(0xb,&DAT_00401660,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
  }
  else {
    if (0x103 < DVar4) {
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
        FUN_00403052(0xc,&DAT_00401660,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
      }
      nSize = DVar4 + 1;
      local_22c = (LPWSTR)FUN_004077ff(-(uint)((int)((ulonglong)nSize * 2 >> 0x20) != 0) |
                                       (uint)((ulonglong)nSize * 2));
      local_224 = local_22c;
      if (local_22c == (LPWSTR)0x0) {
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
          FUN_00403574(0xd,&DAT_00401660,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
        }
        goto LAB_00403939;
      }
    }
    pWVar2 = local_224;
    DVar5 = GetModuleFileNameW(local_228,local_224,nSize);
    if (DVar5 == DVar4) {
      local_220 = (int *)0x0;
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar6 = Ordinal_161(pWVar2,&local_220);
      if (iVar6 < 0) {
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
          FUN_00403598(0xf,&DAT_00401660,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14),pWVar2);
        }
      }
      else {
        pcVar1 = *(code **)(*local_220 + 0x18);
        (*(code *)PTR_guard_check_icall_0040a210)(local_220,&DAT_00401650,(int)this + 0x1c);
        iVar6 = (*pcVar1)();
        if (iVar6 < 0) {
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
            FUN_00403052(0x10,&DAT_00401660,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
          }
        }
        else {
          *(undefined4 *)((int)this + 0xc) = *param_1;
          *(undefined4 *)((int)this + 0x10) = param_1[1];
          *(undefined4 *)((int)this + 0x14) = param_1[2];
          *(undefined4 *)((int)this + 0x18) = param_1[3];
          *(undefined4 *)((int)this + 0x20) = param_2;
        }
      }
      ~CComPtr<>((int *)&local_220);
    }
    else if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
            ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403574(0xe,&DAT_00401660,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
  }
LAB_00403939:
  if (local_22c != (LPWSTR)0x0) {
    o_free(local_22c);
  }
LAB_0040394a:
  FUN_00408346();
  return;
}



/* Function: FUN_00403960 */

void FUN_00403960(int param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



/* Function: FUN_00403980 */

undefined4 FUN_00403980(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (*piVar1 == 0) {
    ~CComPtr<>((int *)(param_1 + 0x1c));
    FUN_004074db(param_1);
  }
  return uVar2;
}



/* Function: FUN_004039c0 */

undefined4 FUN_004039c0(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_00401640)[iVar3]) {
      iVar3 = 0;
      goto LAB_004039eb;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_00403a29;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_004039eb:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_00401630)[iVar3]) {
      iVar3 = 0;
      goto LAB_00403a04;
    }
  }
  goto LAB_00403a29;
LAB_00403a1b:
  do {
    if (*(int *)(param_2 + iVar2 * 4) != param_1[iVar2 + 3]) {
      return 0x80004002;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  goto LAB_00403a29;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_00403a04:
    if (*(int *)(param_2 + iVar3 * 4) != (&DAT_00401650)[iVar3]) goto LAB_00403a1b;
  }
LAB_00403a29:
  *param_3 = param_1;
  pcVar1 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_0040a210)(param_1);
  (*pcVar1)();
  return 0;
}



/* Function: FUN_00403a60 */

void FUN_00403a60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  Ordinal_29(*(undefined4 *)(param_1 + 0x1c),param_3,param_4,param_6);
  return;
}



/* Function: FUN_00403a90 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00403a90(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar4 = (undefined4 *)auStack_20;
  if (param_2 == 0) {
    uVar2 = 0;
    local_8 = 0;
    if (param_4 == (undefined4 *)0x0) {
      uVar2 = 0x80004003;
    }
    else {
      *param_4 = *(undefined4 *)(param_1 + 0x1c);
      piStack_24 = *(int **)(param_1 + 0x1c);
      if (piStack_24 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_24 + 4);
        puVar3 = &uStack_28;
        uStack_28 = 0x403ad9;
        (*(code *)PTR_guard_check_icall_0040a210)();
        puVar4 = puVar3 + -1;
        puVar3[-1] = 0x403adb;
        (*pcVar1)();
      }
    }
  }
  else {
    uVar2 = 0x8002000b;
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x403ae2;
  return uVar2;
}



/* Function: FUN_00403af0 */

undefined4 FUN_00403af0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}



/* Function: FUN_00403b10 */

void FUN_00403b10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x1c) + 0x2c);
  (*(code *)PTR_guard_check_icall_0040a210)
            (*(int **)(param_1 + 0x1c),param_1,param_2,param_5,param_6,param_7,param_8,param_9);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403b50 */

void FUN_00403b50(int param_1,undefined4 param_2)

{
  undefined1 auStack_38 [4];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_004090c0 ^ (uint)auStack_38;
  local_20 = 0;
  local_10 = 0;
  local_30 = *(undefined4 *)(param_1 + 4);
  local_34 = 0x28;
  local_28 = 0;
  local_18 = 0;
  local_2c = 300;
  local_1c = param_2;
  FUN_00404ca3(*(void **)(param_1 + 0x20),&local_34,0x28);
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403603((void *)0x11,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  FUN_00407390(local_c ^ (uint)auStack_38);
  return;
}



/* Function: FUN_00403c00 */

void FUN_00403c00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_004090c0 ^ (uint)&local_34;
  local_20 = 0;
  local_30 = *(undefined4 *)(param_1 + 4);
  local_18 = param_3;
  local_14 = param_4;
  local_10 = *param_5;
  local_34 = 0x28;
  local_28 = 0;
  local_2c = 0x12d;
  local_1c = param_2;
  FUN_00404ca3(*(void **)(param_1 + 0x20),&local_34,0x28);
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_0040363d(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),*(undefined4 *)(PTR_LOOP_00409000 + 0x14)
                );
  }
  FUN_00407390(local_c ^ (uint)&local_34);
  return;
}



/* Function: FUN_00403cc0 */

void FUN_00403cc0(int param_1,undefined4 param_2)

{
  undefined1 auStack_38 [4];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_004090c0 ^ (uint)auStack_38;
  local_20 = 0;
  local_10 = 0;
  local_30 = *(undefined4 *)(param_1 + 4);
  local_34 = 0x28;
  local_28 = 0;
  local_18 = 0;
  local_2c = 0x12e;
  local_1c = param_2;
  FUN_00404ca3(*(void **)(param_1 + 0x20),&local_34,0x28);
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403603((void *)0x13,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  FUN_00407390(local_c ^ (uint)auStack_38);
  return;
}



/* Function: FUN_00403d70 */

void FUN_00403d70(int param_1,undefined4 param_2)

{
  undefined1 auStack_38 [4];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_004090c0 ^ (uint)auStack_38;
  local_20 = 0;
  local_10 = 0;
  local_30 = *(undefined4 *)(param_1 + 4);
  local_34 = 0x28;
  local_28 = 0;
  local_18 = 0;
  local_2c = 0x12f;
  local_1c = param_2;
  FUN_00404ca3(*(void **)(param_1 + 0x20),&local_34,0x28);
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403603((void *)0x14,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  FUN_00407390(local_c ^ (uint)auStack_38);
  return;
}



/* Function: FUN_00403e11 */

void __fastcall FUN_00403e11(int *param_1)

{
  if (*param_1 != 0) {
    o_free(*param_1);
  }
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
  puStack_c = &LAB_00408566;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040a210)(piVar1,DAT_004090c0 ^ (uint)&stack0xfffffffc);
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
  puStack_c = &LAB_00408566;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040a210)(piVar1,DAT_004090c0 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00403e84 */

void __thiscall FUN_00403e84(void *this,undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_004016ec,this,&stack0x0000000c,4,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_00403eb8 */

void FUN_00403eb8(undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_004016ec,0x24,&stack0x0000000c,4,&stack0x00000010,4,
               &stack0x00000014,4,0);
  return;
}



/* Function: FUN_00403ef3 */

void FUN_00403ef3(undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_004016ec,0x26,&stack0x0000000c,4,&stack0x00000010,4,
               &stack0x00000014,4,&stack0x00000018,4,0);
  return;
}



/* Function: FUN_00403f33 */

void __thiscall FUN_00403f33(void *this,undefined4 param_1,undefined4 param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (param_3 == (wchar_t *)0x0) {
    iVar3 = 10;
  }
  else {
    pwVar2 = param_3;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    iVar3 = ((int)pwVar2 - (int)(param_3 + 1) >> 1) * 2 + 2;
  }
  pwVar2 = L"NULL";
  if (param_3 != (wchar_t *)0x0) {
    pwVar2 = param_3;
  }
  TraceMessage(param_1,param_2,0x2b,&DAT_004016ec,this,pwVar2,iVar3,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_00403f9b */

void __fastcall
FUN_00403f9b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,&stack0x0000000c,4,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_00403fcb */

void __fastcall FUN_00403fcb(int *param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = (HANDLE)param_1[2];
  if ((pvVar1 != (HANDLE)0xffffffff) && (pvVar1 != (HANDLE)0x0)) {
    CancelIo(pvVar1);
    WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  }
  if (param_1[8] != 0) {
    o_free(param_1[8]);
    param_1[8] = 0;
  }
  FUN_00404e9e(param_1 + 0xb);
  pvVar1 = (HANDLE)param_1[2];
  if ((pvVar1 != (HANDLE)0xffffffff) && (pvVar1 != (HANDLE)0x0)) {
    CloseHandle(pvVar1);
  }
  pvVar1 = (HANDLE)param_1[1];
  if ((pvVar1 != (HANDLE)0x0) && (pvVar1 != (HANDLE)0xffffffff)) {
    CloseHandle(pvVar1);
  }
  if ((*param_1 != 0) && (*param_1 != -1)) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00404049 */

/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00404049(void *this,int param_1,int *param_2)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int iVar3;
  int *this_00;
  uint *puVar4;
  uint uVar5;
  int *local_4c;
  int *local_48;
  uint local_44 [15];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x404055;
  local_48 = param_2;
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403052(10,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  local_8 = 0;
  pwVar1 = (wchar_t *)(param_2 + 5);
  local_44[1] = 0;
  local_4c = (int *)(param_1 - 0x14);
  local_44[0] = 0x28;
  local_44[2] = 0xcc;
  puVar4 = local_44 + 3;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (local_4c < (int *)(local_48[3] + 2U)) {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403574(0xb,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
  }
  else {
    iVar3 = FUN_00405627(pwVar1,(uint)local_4c,(int *)&local_4c);
    if (iVar3 < 0) {
      if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) goto LAB_00404306;
      if ((PTR_LOOP_00409000[0x1c] & 1) != 0) {
        FUN_00403574(0xc,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
        FUN_004042dd();
        return;
      }
    }
    else {
      for (uVar5 = 0; uVar5 < (uint)(*(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c) >> 2);
          uVar5 = uVar5 + 1) {
        if (*(int *)(*(int *)(*(int *)((int)this + 0x2c) + uVar5 * 4) + 8) == 0) {
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
            FUN_00403052(0xd,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
          }
          local_44[3] = FUN_004059d8(*(void **)(*(int *)((int)this + 0x2c) + uVar5 * 4),pwVar1);
          local_44[6] = uVar5 + 1;
          FUN_00404ca3(this,local_44,0x28);
          break;
        }
      }
      if (uVar5 == *(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c) >> 2) {
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
          FUN_00403052(0xe,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
        }
        local_4c = (int *)FUN_0040781b(0x14);
        if (local_4c == (int *)0x0) {
          this_00 = (int *)0x0;
        }
        else {
          local_4c[1] = (int)this;
          *local_4c = uVar5 + 1;
          local_4c[2] = 0;
          local_4c[3] = 0;
          local_4c[4] = -1;
          this_00 = local_4c;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        local_48 = this_00;
        if (this_00 == (int *)0x0) {
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
            FUN_00403574(0xf,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
          }
        }
        else {
          local_44[3] = FUN_004059d8(this_00,pwVar1);
          if (-1 < (int)local_44[3]) {
            puVar2 = *(undefined4 **)((int)this + 0x30);
            if (puVar2 == *(undefined4 **)((int)this + 0x34)) {
              FUN_00404f61((void *)((int)this + 0x2c),puVar2,&local_48);
            }
            else {
              local_48 = (int *)0x0;
              *puVar2 = this_00;
              *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 4;
            }
            local_44[6] = uVar5 + 1;
          }
          FUN_00404ca3(this,local_44,0x28);
        }
        FUN_00404e7c((int *)&local_48);
        FUN_004042dd();
        return;
      }
    }
  }
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403f9b(0x11,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
LAB_00404306:
  FUN_0040835b();
  return;
}



/* Function: Catch_All@004042a1 */

undefined * Catch_All_004042a1(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_004055ae();
  *(undefined4 *)(unaff_EBP + -0x48) = uVar1;
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
    FUN_00403052(0x10,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  return &DAT_004042d7;
}



/* Function: FUN_004042dd */

void FUN_004042dd(void)

{
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403f9b(0x11,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  FUN_0040835b();
  return;
}



/* Function: FUN_00404316 */

void __thiscall FUN_00404316(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint local_30 [10];
  uint local_8;
  
  local_8 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403e84((void *)0x12,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  local_30[1] = 0;
  local_30[0] = 0x28;
  local_30[2] = 0xcd;
  puVar2 = local_30 + 3;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((uint)(*(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c) >> 2) <
      *(uint *)(param_2 + 0xc)) {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403052(0x13,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
    local_30[3] = 0x80070006;
  }
  else {
    FUN_00405e30(*(int *)(*(int *)((int)this + 0x2c) + -4 + *(uint *)(param_2 + 0xc) * 4));
    local_30[3] = 0;
  }
  FUN_00404ca3(this,local_30,0x28);
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403f9b(0x14,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  FUN_00407390(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404412 */

uint __thiscall FUN_00404412(void *this,LPCWSTR param_1,HANDLE param_2)

{
  int *this_00;
  HANDLE pvVar1;
  int iVar2;
  undefined *puVar3;
  HANDLE pvVar4;
  DWORD dwErrCode;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _SECURITY_ATTRIBUTES _Stack_14;
  
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  FUN_00404ee2(this,pvVar1);
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if ((*this == 0) || (*this == -1)) {
    puVar3 = PTR_LOOP_00409000;
    if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
       ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00404711;
    GetLastError();
    uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
    uVar5 = 0x15;
  }
  else {
    this_00 = (int *)((int)this + 4);
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    FUN_00404ee2(this_00,pvVar1);
    if ((*this_00 == 0) || (*this_00 == -1)) {
      puVar3 = PTR_LOOP_00409000;
      if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
         ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00404711;
      GetLastError();
      uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
      uVar5 = 0x16;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)((int)this + 0x1c) = *this;
      *(undefined4 *)((int)this + 0x24) = 0x14;
      iVar2 = o_malloc(0x14);
      *(int *)((int)this + 0x20) = iVar2;
      if (iVar2 == 0) {
        puVar3 = PTR_LOOP_00409000;
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
          puVar3 = (undefined *)
                   FUN_00403574(0x17,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                                *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
        }
        goto LAB_00404711;
      }
      _Stack_14.nLength = 0xc;
      _Stack_14.lpSecurityDescriptor = (LPVOID)0x0;
      _Stack_14.bInheritHandle = 0;
      iVar2 = ConvertStringSecurityDescriptorToSecurityDescriptorW
                        (L"D:(A;;GA;;;BA)(A;;GA;;;SY)(A;;GA;;;LS)",1,&_Stack_14.lpSecurityDescriptor
                         ,0);
      if (iVar2 == 0) {
        puVar3 = PTR_LOOP_00409000;
        if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
           ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00404711;
        GetLastError();
        uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
        uVar5 = 0x18;
      }
      else {
        pvVar4 = CreateNamedPipeW(param_1,0x40080003,0xe,1,0x200,0x200,0,&_Stack_14);
        pvVar1 = *(HANDLE *)((int)this + 8);
        if ((pvVar1 != (HANDLE)0xffffffff) && (pvVar1 != (HANDLE)0x0)) {
          dwErrCode = GetLastError();
          CloseHandle(pvVar1);
          SetLastError(dwErrCode);
        }
        *(HANDLE *)((int)this + 8) = pvVar4;
        if ((pvVar4 == (HANDLE)0xffffffff) || (pvVar4 == (HANDLE)0x0)) {
          puVar3 = PTR_LOOP_00409000;
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
            GetLastError();
            puVar3 = (undefined *)
                     FUN_00403f33((void *)0x19,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                                  *(undefined4 *)(PTR_LOOP_00409000 + 0x14),param_1);
          }
          goto LAB_00404711;
        }
        SetEvent(param_2);
        puVar3 = (undefined *)
                 ConnectNamedPipe(*(HANDLE *)((int)this + 8),(LPOVERLAPPED)((int)this + 0xc));
        if (puVar3 != (undefined *)0x0) {
LAB_00404660:
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
            puVar3 = (undefined *)
                     FUN_00402f86(0x1d,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                                  *(undefined4 *)(PTR_LOOP_00409000 + 0x14),param_1);
          }
          return CONCAT31((int3)((uint)puVar3 >> 8),1);
        }
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
          GetLastError();
          FUN_00403f33((void *)0x1a,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14),param_1);
        }
        puVar3 = (undefined *)GetLastError();
        if (puVar3 == (undefined *)0x217) goto LAB_00404660;
        if (puVar3 != (undefined *)0x3e5) goto LAB_00404711;
                    /* WARNING: Load size is inaccurate */
        puVar3 = (undefined *)WaitForSingleObject(*this,5000);
        if (puVar3 == (undefined *)0x102) {
          puVar3 = PTR_LOOP_00409000;
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
            puVar3 = (undefined *)
                     FUN_00402f86(0x1c,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                                  *(undefined4 *)(PTR_LOOP_00409000 + 0x14),param_1);
          }
          goto LAB_00404711;
        }
        if (puVar3 != (undefined *)0xffffffff) goto LAB_00404660;
        puVar3 = PTR_LOOP_00409000;
        if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
           ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00404711;
        GetLastError();
        uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
        uVar5 = 0x1b;
      }
    }
  }
  puVar3 = (undefined *)FUN_00403052(uVar5,&DAT_004016ec,uVar6,uVar7);
LAB_00404711:
  return (uint)puVar3 & 0xffffff00;
}



/* Function: FUN_00404722 */

uint __fastcall FUN_00404722(int param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  DVar1 = ReadFile(*(HANDLE *)(param_1 + 8),*(LPVOID *)(param_1 + 0x20),*(DWORD *)(param_1 + 0x24),
                   (LPDWORD)0x0,(LPOVERLAPPED)(param_1 + 0xc));
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    if ((DVar1 != 0x3e5) && (DVar1 != 0xea)) {
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
        DVar1 = FUN_00403052(0x1e,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                             *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
      }
      return DVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}



/* Function: FUN_0040478c */

void __fastcall FUN_0040478c(void *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *this;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  DWORD local_3c;
  int local_38;
  LPOVERLAPPED local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [6];
  uint local_8;
  
  local_8 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
  local_34 = (LPOVERLAPPED)((int)param_1 + 0xc);
  BVar1 = GetOverlappedResult(*(HANDLE *)((int)param_1 + 8),local_34,&local_3c,0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x6d) {
      if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
         ((PTR_LOOP_00409000[0x1c] & 2) == 0)) goto LAB_00404b71;
      uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
      uVar8 = 0x1f;
    }
    else {
      DVar2 = GetLastError();
      if (DVar2 != 0xea) {
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
          GetLastError();
          FUN_00403052(0x20,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
        }
        goto LAB_00404b71;
      }
      *(DWORD *)((int)param_1 + 0x28) = *(int *)((int)param_1 + 0x28) + local_3c;
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
        FUN_00403e84((void *)0x21,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
      }
      uVar5 = **(uint **)((int)param_1 + 0x20);
      if (*(uint *)((int)param_1 + 0x24) < uVar5) {
        piVar3 = (int *)o_realloc(*(uint **)((int)param_1 + 0x20),uVar5);
        if (piVar3 != (int *)0x0) {
          *(int **)((int)param_1 + 0x20) = piVar3;
          iVar4 = *piVar3;
          *(int *)((int)param_1 + 0x24) = iVar4;
          BVar1 = ReadFile(*(HANDLE *)((int)param_1 + 8),
                           (LPVOID)(*(int *)((int)param_1 + 0x28) + (int)piVar3),
                           iVar4 - *(int *)((int)param_1 + 0x28),(LPDWORD)0x0,local_34);
          if ((((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0x3e5)) &&
              ((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000)) &&
             ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
            GetLastError();
            FUN_00403eb8(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
          }
          goto LAB_00404b71;
        }
        if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
           ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00404b71;
        uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
        this = (void *)0x23;
        goto LAB_004049e2;
      }
      if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
         ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00404b71;
      uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
      uVar8 = 0x22;
    }
    FUN_00403574(uVar8,&DAT_004016ec,uVar7,uVar9);
    goto LAB_00404b71;
  }
  uVar5 = *(int *)((int)param_1 + 0x28) + local_3c;
  *(uint *)((int)param_1 + 0x28) = uVar5;
  if (uVar5 < 0x14) {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403052(0x25,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
    goto LAB_00404b71;
  }
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403ef3(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),*(undefined4 *)(PTR_LOOP_00409000 + 0x14)
                );
  }
  piVar3 = *(int **)((int)param_1 + 0x20);
  if (*(int *)((int)param_1 + 0x28) != *piVar3) {
    if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
       ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00404b71;
    uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
    this = (void *)0x27;
LAB_004049e2:
    FUN_00403e84(this,uVar7,uVar9);
    goto LAB_00404b71;
  }
  local_38 = piVar3[1];
  if (piVar3[1] == 0) {
    local_38 = piVar3[2];
    local_34 = (LPOVERLAPPED)(local_38 + -0x68);
    if (local_34 == (LPOVERLAPPED)0x0) {
      DVar2 = FUN_00404049(param_1,*(int *)((int)param_1 + 0x28),piVar3);
    }
    else {
      local_34 = (LPOVERLAPPED)(local_38 + -0x69);
      if (local_34 != (LPOVERLAPPED)0x0) {
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
          FUN_00403052(0x28,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
        }
        goto LAB_00404b71;
      }
      DVar2 = FUN_00404316(param_1,PTR_LOOP_00409000,(int)piVar3);
    }
  }
  else {
    if ((uint)(*(int *)((int)param_1 + 0x30) - *(int *)((int)param_1 + 0x2c) >> 2) < (uint)piVar3[1]
       ) {
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
        uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
        uVar8 = 0x29;
LAB_00404aaf:
        FUN_00403052(uVar8,&DAT_004016ec,uVar7,uVar9);
      }
    }
    else {
      local_34 = *(LPOVERLAPPED *)(*(int *)((int)param_1 + 0x2c) + -4 + piVar3[1] * 4);
      if ((local_34->u).s.Offset != 0) {
        local_38 = piVar3[2];
        if (local_38 == 100) {
          DVar2 = FUN_00406acb(local_34,*(int *)((int)param_1 + 0x28),(int)piVar3);
        }
        else if (local_38 == 0x65) {
          DVar2 = FUN_00405f73(local_34,*(int *)((int)param_1 + 0x28),(int)piVar3);
        }
        else if (local_38 == 0x66) {
          DVar2 = FUN_00406c8c(local_34,*(int *)((int)param_1 + 0x28),(int)piVar3);
        }
        else {
          if (local_38 != 0x67) {
            if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
               ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
              FUN_00403052(0x2b,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                           *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
            }
            goto LAB_00404b71;
          }
          DVar2 = FUN_00406850(local_34,PTR_LOOP_00409000,(int)piVar3);
        }
        goto LAB_00404b5e;
      }
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
        uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
        uVar8 = 0x2a;
        goto LAB_00404aaf;
      }
    }
    local_30 = 0x28;
    local_2c = *(undefined4 *)(*(int *)((int)param_1 + 0x20) + 4);
    local_28 = *(undefined4 *)(*(int *)((int)param_1 + 0x20) + 8);
    local_24 = 0x80004005;
    puVar6 = local_20;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    DVar2 = FUN_00404ca3(param_1,&local_30,0x28);
  }
LAB_00404b5e:
  if (-1 < (int)DVar2) {
    FUN_00404722((int)param_1);
  }
LAB_00404b71:
  FUN_00407390(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404b86 */

void __fastcall FUN_00404b86(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  HANDLE local_28;
  MSG MStack_24;
  
  uVar2 = FUN_00404722((int)param_1);
  if ((char)uVar2 == '\0') {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      uVar2 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
      uVar5 = 0x2c;
LAB_00404c8c:
      FUN_00403574(uVar5,&DAT_004016ec,uVar6,uVar2);
    }
  }
  else {
    do {
      while( true ) {
        local_28 = (HANDLE)*param_1;
        DVar3 = MsgWaitForMultipleObjects(1,&local_28,0,0xffffffff,0x1cff);
        if (DVar3 == 0) break;
        if (DVar3 == 1) {
          while (BVar4 = PeekMessageW(&MStack_24,(HWND)0x0,0,0,1), BVar4 != 0) {
            if (MStack_24.message == 0x12) {
              if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) {
                return;
              }
              if ((PTR_LOOP_00409000[0x1c] & 2) == 0) {
                return;
              }
              uVar2 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
              uVar6 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
              uVar5 = 0x2e;
              goto LAB_00404c8c;
            }
            TranslateMessage(&MStack_24);
            DispatchMessageW(&MStack_24);
          }
        }
        else if (DVar3 == 0xffffffff) {
          if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) {
            return;
          }
          if ((PTR_LOOP_00409000[0x1c] & 1) == 0) {
            return;
          }
          GetLastError();
          FUN_00403052(0x2d,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
          return;
        }
      }
      cVar1 = FUN_0040478c(param_1);
    } while (cVar1 != '\0');
  }
  return;
}



/* Function: FUN_00404ca3 */

DWORD __thiscall FUN_00404ca3(void *this,uint *param_1,uint param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  void *pvVar4;
  _OVERLAPPED local_1c;
  void *local_8;
  
  local_8 = this;
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403e84((void *)0x2f,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  if (param_2 < 0x28) {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403052(0x30,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
    uVar3 = 0x80070057;
    goto LAB_00404e4e;
  }
  uVar3 = 0;
  local_1c.Internal = 0;
  local_1c.InternalHigh = 0;
  local_1c.u = (_union_518)0x0;
  *param_1 = param_2;
  local_1c.hEvent = *(HANDLE *)((int)local_8 + 4);
  BVar1 = WriteFile(*(HANDLE *)((int)local_8 + 8),param_1,param_2,(LPDWORD)0x0,&local_1c);
  pvVar4 = local_8;
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    pvVar4 = local_8;
    if (DVar2 == 0x3e5) {
      DVar2 = WaitForSingleObject(*(HANDLE *)((int)local_8 + 4),0xffffffff);
      if (DVar2 != 0xffffffff) goto LAB_00404dfb;
      DVar2 = GetLastError();
      uVar3 = DVar2 & 0xffff | 0x80070000;
      if ((int)DVar2 < 1) {
        uVar3 = DVar2;
      }
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
        FUN_00403052(0x32,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
      }
    }
    else {
      DVar2 = GetLastError();
      uVar3 = DVar2 & 0xffff | 0x80070000;
      if ((int)DVar2 < 1) {
        uVar3 = DVar2;
      }
      pvVar4 = local_8;
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
        FUN_00403052(0x31,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
        pvVar4 = local_8;
      }
    }
    if ((int)uVar3 < 0) goto LAB_00404e4e;
  }
LAB_00404dfb:
  BVar1 = GetOverlappedResult(*(HANDLE *)((int)pvVar4 + 8),&local_1c,(LPDWORD)&local_8,0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      uVar3 = DVar2;
    }
    if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) {
      return uVar3;
    }
    if ((PTR_LOOP_00409000[0x1c] & 1) != 0) {
      FUN_00403052(0x33,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
  }
LAB_00404e4e:
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403f9b(0x34,&DAT_004016ec,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  return uVar3;
}



/* Function: FUN_00404e7c */

void __fastcall FUN_00404e7c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_004059b7(iVar1);
    FUN_004074db(iVar1);
  }
  return;
}



/* Function: FUN_00404e9e */

void __fastcall FUN_00404e9e(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)param_1[1];
    for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
      FUN_00404e7c(piVar2);
    }
    FUN_00404f1f(*param_1,param_1[2] - *param_1 >> 2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Function: FUN_00404ee2 */

void __thiscall FUN_00404ee2(void *this,undefined4 param_1)

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



/* Function: FUN_00404f1f */

void FUN_00404f1f(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((0xfff < (uint)(param_2 * 4)) &&
     (iVar2 = *(int *)(param_1 + -4), 0x1f < (param_1 - iVar2) - 4U)) {
    o__invalid_parameter_noinfo_noreturn();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004074db(iVar2);
  return;
}



/* Function: FUN_00404f61 */

undefined4 * __thiscall FUN_00404f61(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *local_10;
  undefined4 *local_8;
  
  local_10 = (undefined4 *)0x3fffffff;
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  iVar5 = *(int *)((int)this + 4) - *this >> 2;
  if (iVar5 == 0x3fffffff) {
    FUN_0040507c();
    pcVar4 = (code *)swi(3);
    puVar6 = (undefined4 *)(*pcVar4)();
    return puVar6;
  }
  puVar6 = (undefined4 *)(iVar5 + 1);
                    /* WARNING: Load size is inaccurate */
  uVar8 = *(int *)((int)this + 8) - *this >> 2;
  if ((uVar8 <= 0x3fffffff - (uVar8 >> 1)) &&
     (local_10 = (undefined4 *)((uVar8 >> 1) + uVar8), local_10 < puVar6)) {
    local_10 = puVar6;
  }
  local_8 = local_10;
  puVar7 = (undefined4 *)FUN_0040508e(uVar8,(uint *)&local_8);
  uVar2 = *param_2;
  *param_2 = 0;
  local_8 = puVar7 + ((int)param_1 - iVar1 >> 2);
  *local_8 = uVar2;
  puVar11 = *(undefined4 **)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
  puVar9 = *this;
  puVar10 = puVar7;
  if (param_1 == puVar11) {
    for (; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      uVar2 = *puVar9;
      *puVar9 = 0;
      *puVar10 = uVar2;
      puVar10 = puVar10 + 1;
    }
  }
  else {
    for (; puVar9 != param_1; puVar9 = puVar9 + 1) {
      uVar2 = *puVar9;
      *puVar9 = 0;
      *puVar10 = uVar2;
      puVar10 = puVar10 + 1;
    }
    puVar10 = *(undefined4 **)((int)this + 4);
    if (param_1 != puVar10) {
      puVar11 = param_1;
      do {
        uVar2 = *puVar11;
        *puVar11 = 0;
        *(undefined4 *)((int)local_8 + (4 - (int)param_1) + (int)puVar11) = uVar2;
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar10);
    }
  }
                    /* WARNING: Load size is inaccurate */
  piVar12 = *this;
  if (piVar12 != (int *)0x0) {
    piVar3 = *(int **)((int)this + 4);
    for (; piVar12 != piVar3; piVar12 = piVar12 + 1) {
      FUN_00404e7c(piVar12);
    }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    FUN_00404f1f(*this,*(int *)((int)this + 8) - *this >> 2);
  }
  *(undefined4 **)this = puVar7;
  *(undefined4 **)((int)this + 4) = puVar7 + (int)puVar6;
  *(undefined4 **)((int)this + 8) = puVar7 + (int)local_10;
  return local_8;
}



/* Function: FUN_0040507c */

void FUN_0040507c(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040508e */

void * __fastcall FUN_0040508e(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (*param_2 < 0x40000000) {
    uVar1 = *param_2 * 4;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        pvVar2 = operator_new(uVar1);
        return pvVar2;
      }
      return (void *)0x0;
    }
    if (uVar1 < uVar1 + 0x23) {
      pvVar2 = operator_new(uVar1 + 0x23);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)((int)pvVar2 + 0x23U & 0xffffffe0);
        *(void **)((int)pvVar3 + -4) = pvVar2;
        return pvVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x004050bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar2 = (void *)o__invalid_parameter_noinfo_noreturn();
      return pvVar2;
    }
  }
  pvVar2 = (void *)FUN_00405173();
  return pvVar2;
}



/* Function: FUN_004050df */

undefined4 * __fastcall FUN_004050df(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* Function: FUN_00405100 */

void __fastcall FUN_00405100(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_00405120 */

exception * __thiscall FUN_00405120(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_00405150 */

exception * __thiscall FUN_00405150(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_00405173 */

void FUN_00405173(void)

{
  undefined4 local_10 [3];
  
  FUN_004050df(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00408dd0);
}



/* Function: FUN_00405198 */

void FUN_00405198(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_004094d8;
  if (DAT_004094d8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a210)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004051c8 */

void __fastcall FUN_004051c8(int param_1)

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
  
  pcVar1 = DAT_004094e0;
  if (DAT_004094e0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a210)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_004094c8;
  if (DAT_004094c8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a210)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00405235;
  uVar3 = 1;
  do {
    FUN_00405198(uVar3);
    iVar2 = extraout_ECX;
LAB_00405235:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_00405255 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00405255(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  int *in_stack_00000014;
  undefined4 local_1478;
  uint local_1474;
  int local_1470;
  uint local_146c;
  int local_1468;
  undefined4 local_1464;
  DWORD local_1460;
  undefined4 local_145c;
  undefined4 local_1458;
  undefined *local_1454;
  undefined4 local_1450;
  undefined4 local_144c;
  undefined4 local_1448;
  undefined4 local_1444;
  undefined4 uStack_1440;
  undefined4 uStack_143c;
  undefined4 local_1438;
  undefined4 uStack_1434;
  undefined4 uStack_1430;
  undefined4 local_142c;
  undefined4 local_1424;
  undefined4 local_141c;
  WCHAR local_1418 [2048];
  undefined1 local_418 [1028];
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00408677;
  local_10 = ExceptionList;
  uStack_14 = 0x405272;
  uVar3 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1418[0] = L'\0';
  local_418[0] = 0;
  local_1470 = *in_stack_00000014;
  local_146c = in_stack_00000014[1];
  local_144c = FUN_00402370(local_1470);
  local_1478 = 3;
  local_1474 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1474 = 8;
  }
  LOCK();
  UNLOCK();
  local_1468 = DAT_004095a8 + 1;
  local_1464 = 0;
  DAT_004095a8 = DAT_004095a8 + 1;
  local_1460 = GetCurrentThreadId();
  pcVar1 = DAT_004094dc;
  local_1424 = local_141c;
  local_1454 = &DAT_004016e8;
  local_1450 = 0xdaf;
  local_145c = 0;
  local_1458 = 0;
  local_1448 = 0;
  local_1438 = 0;
  uStack_1434 = 0;
  uStack_1430 = 0;
  local_1444 = 0;
  uStack_1440 = 0;
  uStack_143c = 0;
  if (DAT_004094dc == (code *)0x0) {
    local_142c = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040a210)(uVar3);
    local_142c = (*pcVar1)();
  }
  pcVar1 = DAT_004094a4;
  if (DAT_004094a4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a210)(&local_1478);
    (*pcVar1)();
  }
  pcVar1 = DAT_004094b8;
  if (DAT_004094b8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a210)(&local_1478,local_418,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004094b4;
  if (DAT_004094b4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a210)(&local_1478);
    (*pcVar1)();
  }
  pcVar1 = DAT_004094c4;
  if ((DAT_004094c4 != (code *)0x0) && ((local_1474 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040a210)(&local_1478);
    (*pcVar1)();
  }
  if (-1 < local_1470) {
    local_1470 = -0x7fff0001;
    local_146c = FUN_004024f1(0x8000ffff);
  }
  pcVar1 = DAT_00409490;
  if (DAT_00409494 == '\0') {
    if (DAT_00409490 == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040a210)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00405448;
  }
  else {
LAB_00405448:
    pcVar1 = DAT_00409498;
    if ((local_1474 & 2) == 0) {
      if ((DAT_00409498 != (code *)0x0) && (DAT_004094a8 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040a210)(&local_1478,local_1418,0x800);
        (*pcVar1)();
      }
      if (local_1418[0] == L'\0') {
        FUN_00401fdc(local_1418,0x800,(int)&local_1478);
      }
      OutputDebugStringW(local_1418);
      goto LAB_004054d7;
    }
  }
  pcVar1 = DAT_00409498;
  if ((DAT_00409498 != (code *)0x0) && (DAT_004094a8 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040a210)(&local_1478,0,0);
    (*pcVar1)();
  }
LAB_004054d7:
  pcVar1 = DAT_004094bc;
  if ((((local_1474 & 4) != 0) || (DAT_0040949c != '\0')) && (DAT_004094bc != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040a210)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  FUN_004051c8((int)&local_1478);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405518 */

void FUN_00405518(void)

{
  code *pcVar1;
  
  FUN_00405255();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405535 */

void FUN_00405535(void)

{
  code *pcVar1;
  uint *puVar2;
  void *in_stack_00000014;
  uint local_24 [5];
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  
  puVar2 = FUN_00402274(in_stack_00000014,local_24);
  local_10 = *puVar2;
  uStack_c = puVar2[1];
  uStack_8 = puVar2[2];
  FUN_00405518();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405570 */

void FUN_00405570(void)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040869d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405535();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004055ae */

void FUN_004055ae(void)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_24 [19];
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_004094cc;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004086c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_11 = 0;
  if (DAT_004094cc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a210)
              (local_24,0,0,&local_11,DAT_004090c0 ^ (uint)&stack0xfffffffc);
    piVar2 = (int *)(*pcVar1)();
    if (*piVar2 < 0) {
      ExceptionList = local_10;
      return;
    }
  }
  uVar3 = 0x8007023e;
  FUN_00405570();
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_00405627 */

int __fastcall FUN_00405627(short *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 == (short *)0x0) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    uVar1 = param_2 >> 1;
    for (; (uVar1 != 0 && (*param_1 != 0)); param_1 = param_1 + 1) {
      uVar1 = uVar1 - 1;
    }
    iVar2 = -0x7ff8ffa9;
    if (uVar1 != 0) {
      iVar2 = 0;
    }
    uVar1 = -(uint)(uVar1 != 0) & (param_2 >> 1) - uVar1;
  }
  if (param_3 != (int *)0x0) {
    if (iVar2 < 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = uVar1 * 2;
    }
  }
  return iVar2;
}



/* Function: FUN_00405687 */

void FUN_00405687(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (param_3 == (wchar_t *)0x0) {
    iVar3 = 10;
  }
  else {
    pwVar2 = param_3;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    iVar3 = ((int)pwVar2 - (int)(param_3 + 1) >> 1) * 2 + 2;
  }
  pwVar2 = L"NULL";
  if (param_3 != (wchar_t *)0x0) {
    pwVar2 = param_3;
  }
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,0x3b,pwVar2,iVar3,&stack0x00000010,4,
               &stack0x00000014,4,0);
  return;
}



/* Function: FUN_004056f4 */

void FUN_004056f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,0x13,param_3,0x10,0);
  return;
}



/* Function: FUN_00405722 */

void FUN_00405722(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,0x15,param_3,0x10,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_00405756 */

void __thiscall FUN_00405756(void *this,undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,this,&stack0x0000000c,4,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_0040578a */

void FUN_0040578a(undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,0x29,&stack0x0000000c,4,0);
  return;
}



/* Function: FUN_004057b9 */

void FUN_004057b9(undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,0x2f,&stack0x0000000c,4,&stack0x00000010,4,
               &stack0x00000014,4,&stack0x00000018,4,0);
  return;
}



/* Function: FUN_004057f9 */

void __thiscall
FUN_004057f9(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (param_4 == (wchar_t *)0x0) {
    iVar3 = 10;
  }
  else {
    pwVar2 = param_4;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    iVar3 = ((int)pwVar2 - (int)(param_4 + 1) >> 1) * 2 + 2;
  }
  pwVar2 = L"NULL";
  if (param_4 != (wchar_t *)0x0) {
    pwVar2 = param_4;
  }
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,this,&param_3,4,pwVar2,iVar3,0);
  return;
}



/* Function: FUN_00405861 */

void FUN_00405861(undefined4 param_1,undefined4 param_2,undefined4 param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (param_4 == (wchar_t *)0x0) {
    iVar3 = 10;
  }
  else {
    pwVar2 = param_4;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    iVar3 = ((int)pwVar2 - (int)(param_4 + 1) >> 1) * 2 + 2;
  }
  pwVar2 = L"NULL";
  if (param_4 != (wchar_t *)0x0) {
    pwVar2 = param_4;
  }
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,0x17,&param_3,4,pwVar2,iVar3,&stack0x00000014,4,0)
  ;
  return;
}



/* Function: FUN_004058ce */

void FUN_004058ce(undefined4 param_1,undefined4 param_2,undefined4 param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (param_4 == (wchar_t *)0x0) {
    iVar3 = 10;
  }
  else {
    pwVar2 = param_4;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    iVar3 = ((int)pwVar2 - (int)(param_4 + 1) >> 1) * 2 + 2;
  }
  pwVar2 = L"NULL";
  if (param_4 != (wchar_t *)0x0) {
    pwVar2 = param_4;
  }
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,0x1b,&param_3,4,pwVar2,iVar3,&stack0x00000014,4,
               &stack0x00000018,4,0);
  return;
}



/* Function: FUN_00405941 */

void FUN_00405941(undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,0x1c,&stack0x0000000c,4,&stack0x00000010,4,
               &stack0x00000014,4,0);
  return;
}



/* Function: FUN_0040597c */

void FUN_0040597c(undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401734,0x36,&stack0x0000000c,4,&stack0x00000010,4,
               &stack0x00000014,4,0);
  return;
}



/* Function: FUN_004059b7 */

void __fastcall FUN_004059b7(int param_1)

{
  FUN_00405e30(param_1);
  ~CComPtr<>((int *)(param_1 + 0xc));
  ~CComPtr<>((int *)(param_1 + 8));
  return;
}



/* Function: FUN_004059d8 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_004059d8(void *this,wchar_t *param_1)

{
  code *pcVar1;
  uint uVar2;
  HRESULT HVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_50 [4];
  int *local_4c;
  int *local_48;
  int *local_44;
  wchar_t *local_40;
  int *local_3c;
  CLSID local_38;
  int local_28 [8];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x4059e4;
  local_40 = param_1;
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_004057f9((void *)0xa,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14),this,param_1);
  }
  HVar3 = CLSIDFromProgID(param_1,&local_38);
  if (HVar3 < 0) {
    if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) goto LAB_00405d47;
    if ((PTR_LOOP_00409000[0x1c] & 1) != 0) {
      uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
      uVar7 = 0xb;
LAB_00405a45:
      FUN_00403598(uVar7,&DAT_00401734,uVar8,uVar9,param_1);
    }
  }
  else {
    HVar3 = CoCreateInstance(&local_38,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401630,
                             (LPVOID *)((int)this + 8));
    if (HVar3 < 0) {
      if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) goto LAB_00405d47;
      if ((PTR_LOOP_00409000[0x1c] & 1) != 0) {
        uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
        uVar7 = 0xc;
        goto LAB_00405a45;
      }
    }
    else {
      local_4c = (int *)FUN_0040781b(0x24);
      if (local_4c == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        iVar5 = *this;
        *local_4c = (int)&PTR_FUN_00401054;
        local_4c[1] = iVar5;
        local_4c[2] = 0;
        local_4c[7] = 0;
        local_4c[8] = 0;
        piVar6 = local_4c;
      }
      piVar4 = *(int **)((int)this + 0xc);
      if (*(int **)((int)this + 0xc) != piVar6) {
        if (piVar6 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar6 + 4);
          (*(code *)PTR_guard_check_icall_0040a210)(piVar6);
          (*pcVar1)();
        }
        piVar4 = *(int **)((int)this + 0xc);
        if (piVar4 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar4 + 8);
          (*(code *)PTR_guard_check_icall_0040a210)(piVar4);
          (*pcVar1)();
        }
        *(int **)((int)this + 0xc) = piVar6;
        piVar4 = piVar6;
      }
      param_1 = local_40;
      if (piVar4 == (int *)0x0) {
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
          FUN_00402f86(0xd,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14),local_40);
        }
      }
      else {
        local_48 = (int *)0x0;
        local_8 = 1;
        pcVar1 = *(code **)**(undefined4 **)((int)this + 8);
        (*(code *)PTR_guard_check_icall_0040a210)
                  (*(undefined4 **)((int)this + 8),&DAT_00401724,&local_48);
        iVar5 = (*pcVar1)();
        uVar2 = local_8;
        param_1 = local_40;
        local_8 = local_8 & 0xffffff00;
        if (iVar5 < 0) {
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
            FUN_00403598(0xe,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409000 + 0x14),local_40);
          }
        }
        else {
          local_44 = (int *)0x0;
          local_8._1_3_ = SUB43(uVar2,1);
          local_8 = CONCAT31(local_8._1_3_,2);
          pcVar1 = *(code **)(*local_48 + 0xc);
          (*(code *)PTR_guard_check_icall_0040a210)(local_48,&local_44);
          iVar5 = (*pcVar1)();
          if (iVar5 < 0) {
            if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
               ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
              uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
              uVar8 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
              uVar7 = 0xf;
LAB_00405d07:
              FUN_00403052(uVar7,&DAT_00401734,uVar8,uVar9);
            }
          }
          else {
            while( true ) {
              local_3c = (int *)0x0;
              local_8 = CONCAT31(local_8._1_3_,3);
              pcVar1 = *(code **)(*local_44 + 0xc);
              (*(code *)PTR_guard_check_icall_0040a210)(local_44,1,&local_3c,&local_4c);
              iVar5 = (*pcVar1)();
              if (iVar5 < 0) break;
              if (local_4c != (int *)0x1) {
                if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
                   ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
                  FUN_00403052(0x11,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                               *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
                }
                goto LAB_00405cc9;
              }
              pcVar1 = *(code **)(*local_3c + 0xc);
              (*(code *)PTR_guard_check_icall_0040a210)(local_3c,local_28);
              iVar5 = (*pcVar1)();
              if (iVar5 < 0) {
                if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
                   ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
                  FUN_00403052(0x12,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                               *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
                }
              }
              else {
                iVar5 = 0;
                do {
                  if (local_28[iVar5] != (&DAT_004013ac)[iVar5]) {
                    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
                       ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
                      FUN_004056f4(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14),local_28);
                    }
                    iVar5 = FUN_00403699(*(void **)((int)this + 0xc),local_28,
                                         *(undefined4 *)((int)this + 4));
                    if (iVar5 < 0) {
                      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
                         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
                        FUN_00403574(0x14,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
                      }
                    }
                    else {
                      pcVar1 = *(code **)(*local_3c + 0x14);
                      (*(code *)PTR_guard_check_icall_0040a210)
                                (local_3c,*(undefined4 *)((int)this + 0xc),local_50);
                      iVar5 = (*pcVar1)();
                      if (((iVar5 < 0) && ((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000))
                         && ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
                        FUN_00405722(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14),local_28);
                      }
                    }
                    local_8 = CONCAT31(local_8._1_3_,2);
                    ~CComPtr<>((int *)&local_3c);
                    goto LAB_00405cd9;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 != 4);
              }
              ~CComPtr<>((int *)&local_3c);
            }
            if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
               ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
              FUN_00403052(0x10,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                           *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
            }
LAB_00405cc9:
            local_8 = CONCAT31(local_8._1_3_,2);
            ~CComPtr<>((int *)&local_3c);
            if (-1 < iVar5) {
LAB_00405cd9:
              iVar5 = FUN_00405ee5(this,L"ResultCodeExtended",(int)this + 0x10);
              if (((iVar5 < 0) && ((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000)) &&
                 ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
                uVar9 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
                uVar8 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
                uVar7 = 0x16;
                goto LAB_00405d07;
              }
            }
          }
          ~CComPtr<>((int *)&local_44);
          param_1 = local_40;
        }
        ~CComPtr<>((int *)&local_48);
      }
    }
  }
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00405861(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),*(undefined4 *)(PTR_LOOP_00409000 + 0x14)
                 ,this,param_1);
  }
LAB_00405d47:
  FUN_00408346();
  return;
}



/* Function: FUN_00405e30 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00405e30(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403052(0x18,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040a210)(piVar1);
    (*pcVar2)();
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040a210)(piVar1);
    (*pcVar2)();
  }
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403052(0x19,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  return;
}



/* Function: FUN_00405ee5 */

undefined4 __thiscall FUN_00405ee5(void *this,wchar_t *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_004057f9((void *)0x1a,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14),this,param_1);
  }
  pcVar1 = *(code **)(**(int **)((int)this + 8) + 0x14);
  (*(code *)PTR_guard_check_icall_0040a210)
            (*(int **)((int)this + 8),&DAT_004013bc,&param_1,1,0x400,param_2);
  uVar2 = (*pcVar1)();
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_004058ce(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),*(undefined4 *)(PTR_LOOP_00409000 + 0x14)
                 ,this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00405f73 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00405f73(void *this,int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  size_t _Size;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  void *pvVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 *local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined1 local_94 [8];
  int local_8c;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined1 local_7c [8];
  undefined4 local_74;
  uint *local_70;
  void *local_68;
  int local_64;
  undefined4 *local_60;
  uint *local_5c;
  int local_58;
  uint *local_54;
  undefined4 *local_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  char local_3e;
  byte local_3d;
  uint local_3c [4];
  int local_2c;
  undefined1 local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa4;
  local_8 = 0x405f82;
  local_58 = param_2;
  local_68 = this;
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00405941(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),*(undefined4 *)(PTR_LOOP_00409000 + 0x14)
                );
  }
  iVar11 = local_58;
  puVar6 = local_3c;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
                    /* WARNING: Load size is inaccurate */
  local_3c[1] = *this;
  puVar7 = (uint *)(uint)*(byte *)(local_58 + 0x10);
  local_3c[2] = 0xc9;
  local_4c = puVar7;
  local_84 = (undefined4 *)
             FUN_004077ff(-(uint)(0xfffffffb < (uint)((int)puVar7 * 0x10)) | (int)puVar7 * 0x10 + 4U
                         );
  puVar6 = (uint *)0x0;
  if (local_84 == (undefined4 *)0x0) {
    local_84 = (undefined4 *)0x0;
    local_50 = (undefined4 *)0x0;
  }
  else {
    *local_84 = puVar7;
    local_84 = local_84 + 1;
    local_50 = local_84;
    _eh_vector_constructor_iterator_(local_84,0x10,(uint)local_4c,FUN_00407000,FUN_00407020);
  }
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (local_84 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403052(0x1d,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
    goto LAB_00406838;
  }
  local_4c = (uint *)(uint)*(byte *)(iVar11 + 0x10);
  local_60 = (undefined4 *)
             FUN_004077ff(-(uint)(0xfffffffb < (uint)((int)local_4c * 4)) | (int)local_4c * 4 + 4U);
  if (local_60 == (undefined4 *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    *local_60 = local_4c;
    local_60 = local_60 + 1;
    _eh_vector_constructor_iterator_(local_60,4,(uint)local_4c,FUN_00406ff0,FUN_00401df0);
  }
  local_8._0_1_ = 1;
  local_80 = local_60;
  if (local_60 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403052(0x1e,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
  }
  else {
    bVar5 = *(byte *)(iVar11 + 0x10);
    local_44 = (uint *)(iVar11 + 0x14);
    uVar2 = 0;
    puVar7 = (uint *)(param_1 + -0x14);
    local_3e = '\0';
    local_3d = 0;
    local_64 = 8;
    local_48 = 3;
    puVar4 = local_50;
    if (bVar5 != 0) {
LAB_0040613c:
      iVar11 = local_58;
      if (puVar7 < (uint *)0x8) {
        if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
           ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00406830;
        uVar14 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
        uVar12 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
        pvVar8 = (void *)0x1f;
      }
      else {
        local_54 = puVar7 + -2;
        local_5c = local_44;
        puVar7 = (uint *)((int)local_44 + local_64);
        if ((short)*local_44 == (short)local_48) {
          local_4c = (uint *)local_44[1];
          local_70 = puVar4 + uVar2 * 4;
          bVar5 = (byte)uVar2;
          local_44 = puVar7;
          if ((short)*local_70 != (short)local_48) {
            Ordinal_9(local_70);
            *(short *)local_70 = (short)local_48;
            bVar5 = local_3d;
          }
          local_3d = bVar5;
          local_70[2] = (uint)local_4c;
          puVar7 = local_54;
LAB_00406276:
          bVar5 = *(byte *)(iVar11 + 0x10);
          local_3d = local_3d + 1;
          uVar2 = (uint)local_3d;
          if (bVar5 <= local_3d) goto LAB_00406286;
          goto LAB_0040613c;
        }
        if ((short)*local_44 == (short)local_64) {
          local_70 = (uint *)(local_44[1] + 2);
          if (local_70 <= local_54) {
            *(short *)(local_50 + uVar2 * 4) = (short)local_64;
            puVar9 = local_44 + 1;
            local_44 = puVar7;
            iVar3 = Ordinal_150(puVar7,*puVar9);
            local_50[uVar2 * 4 + 2] = iVar3;
            if (iVar3 != 0) {
              local_44 = (uint *)((int)local_44 + (int)local_70);
              puVar7 = (uint *)((int)local_54 - (int)local_70);
              puVar4 = local_50;
              goto LAB_00406276;
            }
            if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
               ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
              uVar14 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
              uVar12 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
              uVar13 = 0x22;
LAB_00406342:
              FUN_00403574(uVar13,&DAT_00401734,uVar12,uVar14);
            }
            goto LAB_00406830;
          }
          local_44 = puVar7;
          if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
             ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00406830;
          uVar14 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
          uVar12 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
          pvVar8 = (void *)0x21;
        }
        else {
          if ((short)*local_44 == 0x4008) {
            local_70 = (uint *)(local_44[1] + 2);
            if (local_54 < local_70) {
              local_44 = puVar7;
              if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
                 ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
                uVar14 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
                uVar12 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
                pvVar8 = (void *)0x23;
                goto LAB_0040641f;
              }
            }
            else {
              local_4c = (uint *)(uVar2 * 0x10);
              *(undefined2 *)((int)local_4c + (int)local_50) = 0x4008;
              puVar9 = local_44 + 1;
              local_44 = puVar7;
              iVar3 = Ordinal_150(puVar7,*puVar9);
              local_60[uVar2] = iVar3;
              if (iVar3 != 0) {
                *(undefined4 **)((int)(local_4c + 2) + (int)local_50) = local_60 + uVar2;
                local_44 = (uint *)((int)local_44 + (int)local_70);
                local_3e = local_3e + '\x01';
                puVar7 = (uint *)((int)local_54 - (int)local_70);
                puVar4 = local_50;
                goto LAB_00406276;
              }
              if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
                 ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
                uVar14 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
                uVar12 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
                uVar13 = 0x24;
                goto LAB_00406342;
              }
            }
            goto LAB_00406830;
          }
          local_44 = puVar7;
          if (((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) ||
             ((PTR_LOOP_00409000[0x1c] & 1) == 0)) goto LAB_00406830;
          uVar14 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
          uVar12 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
          pvVar8 = (void *)0x20;
        }
      }
LAB_0040641f:
      FUN_00405756(pvVar8,uVar12,uVar14);
      goto LAB_00406830;
    }
LAB_00406286:
    local_9c = (uint)bVar5;
    local_a0 = 0;
    local_98 = 0;
    local_a4 = puVar4;
    Ordinal_8(local_94);
    local_8._0_1_ = 2;
    pcVar1 = *(code **)(**(int **)((int)local_68 + 8) + 0x18);
    (*(code *)PTR_guard_check_icall_0040a210)
              (*(int **)((int)local_68 + 8),*(undefined4 *)(iVar11 + 0xc),&DAT_004013bc,0x400,1,
               &local_a4,local_94,0,0);
    local_3c[3] = (*pcVar1)();
    local_24 = 0;
    if ((int)local_3c[3] < 0) {
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
        FUN_00405756((void *)0x25,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
      }
LAB_00406477:
      FUN_00404ca3(*(void **)((int)local_68 + 4),local_3c,0x28);
    }
    else {
      local_2c = Ordinal_12(local_94,local_94,0,local_48);
      if (local_2c < 0) {
        FUN_00407030();
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
          FUN_00403052(0x26,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
        }
        goto LAB_00406477;
      }
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
        FUN_00405756((void *)0x27,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
      }
      puVar4 = local_50;
      local_2c = local_8c;
      if (local_8c == 0) {
        local_5c = (uint *)0x0;
        uVar2 = 0x28;
        local_48 = 0x28;
        local_3d = 0;
        if (*(char *)(iVar11 + 0x10) != '\0') {
          do {
            iVar11 = local_58;
            local_70 = (uint *)(uint)local_3d;
            local_4c = (uint *)((int)local_70 * 0x10);
            if (*(short *)((int)local_4c + (int)puVar4) == 0x4008) {
              if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
                 ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
                FUN_00403052(0x2b,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                             *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
              }
              iVar3 = Ordinal_149(**(undefined4 **)((int)(local_4c + 2) + (int)puVar4));
              uVar2 = local_48 + iVar3 + 10U;
              local_5c = (uint *)((int)local_5c + (uint)CARRY4(local_48,iVar3 + 10U));
              local_48 = uVar2;
              if (local_5c != (uint *)0x0) {
                if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
                   ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
                  FUN_00403574(0x2c,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                               *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
                }
                goto LAB_00406823;
              }
            }
            local_3d = local_3d + 1;
          } while (local_3d < *(byte *)(iVar11 + 0x10));
        }
        puVar7 = local_3c;
        local_44 = (uint *)0x0;
        if ((local_5c == (uint *)0x0) && (uVar2 < 0x29)) {
LAB_00406731:
          puVar9 = puVar7 + 10;
          puVar4 = local_50;
          local_70 = puVar9;
          local_4c = puVar7;
          if (*(char *)(iVar11 + 0x10) != '\0') {
            do {
              local_54 = puVar6;
              if (*(short *)(puVar4 + (int)puVar6 * 4) == 0x4008) {
                if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
                   ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
                  FUN_00403052(0x2e,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                               *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
                }
                _Size = Ordinal_149(local_60[(int)puVar6]);
                puVar9[1] = _Size;
                local_74 = CONCAT22(CONCAT11(local_74._3_1_,(char)puVar6),0x4008);
                *puVar9 = local_74;
                pvVar8 = (void *)((int)puVar9 + local_64);
                memcpy(pvVar8,(void *)local_60[(int)local_54],_Size);
                puVar9 = (uint *)((int)pvVar8 + _Size + 2);
                puVar4 = local_50;
                iVar11 = local_58;
              }
              bVar5 = (char)puVar6 + 1;
              puVar6 = (uint *)(uint)bVar5;
            } while (bVar5 < *(byte *)(iVar11 + 0x10));
          }
          puVar6 = local_44;
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
            FUN_004057b9(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
          }
          FUN_00404ca3(*(void **)((int)local_68 + 4),local_4c,local_48);
          if (puVar6 != (uint *)0x0) {
            o_free(puVar6);
          }
        }
        else {
          local_4c = puVar7;
          puVar7 = (uint *)FUN_004077ff(uVar2);
          local_44 = puVar7;
          if (puVar7 != (uint *)0x0) {
            memset(puVar7,0,local_48);
            puVar9 = local_3c;
            puVar10 = puVar7;
            for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            *(char *)(local_44 + 6) = local_3e;
            iVar11 = local_58;
            goto LAB_00406731;
          }
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
            FUN_00403574(0x2d,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
          }
        }
      }
      else {
        local_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        Ordinal_8(local_7c);
        pvVar8 = local_68;
        local_8._0_1_ = (undefined1)local_48;
        pcVar1 = *(code **)(**(int **)((int)local_68 + 8) + 0x18);
        (*(code *)PTR_guard_check_icall_0040a210)
                  (*(int **)((int)local_68 + 8),*(undefined4 *)((int)local_68 + 0x10),&DAT_004013bc,
                   0x400,2,&local_b4,local_7c,0,0);
        iVar3 = (*pcVar1)();
        if (iVar3 < 0) {
          if ((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) {
            if ((PTR_LOOP_00409000[0x1c] & 1) != 0) {
              FUN_00403052(0x28,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                           *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
            }
            goto LAB_00406551;
          }
        }
        else {
          iVar3 = Ordinal_12(local_7c,local_7c,0,local_48);
          if (((-1 < iVar3) && ((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000)) &&
             ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
            FUN_0040578a(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
          }
LAB_00406551:
          if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
             ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
            FUN_00405756((void *)0x2a,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
          }
        }
        FUN_00404ca3(*(void **)((int)pvVar8 + 4),local_3c,0x28);
        Ordinal_9(local_7c);
      }
    }
LAB_00406823:
    Ordinal_9(local_94);
  }
LAB_00406830:
  FUN_00406f0c(&local_80);
LAB_00406838:
  FUN_00406f78(&local_84);
  FUN_00408346();
  return;
}



/* Function: FUN_00406850 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00406850(void *this,undefined4 param_1,int param_2)

{
  uint _Size;
  code *pcVar1;
  uint *puVar2;
  DWORD DVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  short local_64 [4];
  void *local_5c;
  size_t local_50;
  uint local_4c;
  uint *local_48;
  int local_44;
  undefined4 *local_40;
  uint local_3c [6];
  undefined4 local_24;
  undefined2 local_20;
  void *local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x40685c;
  local_44 = param_2;
  local_40 = (undefined4 *)this;
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00405756((void *)0x30,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  puVar5 = (uint *)0x0;
  puVar2 = local_3c;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_50 = 0;
  local_8 = 0;
  puVar2 = local_3c;
  local_3c[1] = *local_40;
  local_4c = 0x28;
  local_24 = *(undefined4 *)(local_44 + 0xc);
  local_74 = 0;
  local_3c[2] = 0xcb;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  Ordinal_8(local_64);
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar1 = *(code **)(*(int *)local_40[2] + 0x18);
  (*(code *)PTR_guard_check_icall_0040a210)
            ((int *)local_40[2],*(undefined4 *)(local_44 + 0xc),&DAT_004013bc,0x400,2,&local_74,
             local_64,0,0);
  local_3c[3] = (*pcVar1)();
  if ((int)local_3c[3] < 0) {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00405756((void *)0x31,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
LAB_00406a42:
    DVar3 = FUN_00404ca3((void *)local_40[1],puVar2,local_4c);
    if ((int)DVar3 < 0) {
      if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) goto LAB_00406aa6;
      if ((PTR_LOOP_00409000[0x1c] & 1) != 0) {
        FUN_00403052(0x35,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
      }
    }
  }
  else {
    if (local_64[0] != 8) {
      local_3c[3] = Ordinal_12(local_64,local_64,0,3);
      if ((int)local_3c[3] < 0) {
        if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
           ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
          FUN_00403052(0x32,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
        }
      }
      else {
        local_20 = 3;
        local_1c = local_5c;
      }
      goto LAB_00406a42;
    }
    local_50 = Ordinal_149(local_5c);
    _Size = local_50 + 0x2a;
    local_4c = _Size;
    puVar2 = (uint *)FUN_004077ff(_Size);
    local_48 = puVar2;
    if (puVar2 != (uint *)0x0) {
      memset(puVar2,0,_Size);
      puVar5 = local_3c;
      puVar6 = local_48;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)(puVar2 + 7) = 8;
      puVar2[8] = local_50;
      memcpy(puVar2 + 10,local_5c,local_50);
      puVar5 = local_48;
      goto LAB_00406a42;
    }
    puVar5 = puVar2;
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403574(0x34,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
  }
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_0040597c(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),*(undefined4 *)(PTR_LOOP_00409000 + 0x14)
                );
  }
LAB_00406aa6:
  Ordinal_9(local_64);
  if (puVar5 != (uint *)0x0) {
    o_free(puVar5);
  }
  FUN_00408346();
  return;
}



/* Function: FUN_00406acb */

void __thiscall FUN_00406acb(void *this,int param_1,int param_2)

{
  wchar_t *pwVar1;
  DWORD DVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_34;
  uint local_30 [6];
  undefined4 local_18 [4];
  uint local_8;
  
  local_8 = DAT_004090c0 ^ (uint)&stack0xfffffffc;
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403052(0x37,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  puVar4 = local_30;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
                    /* WARNING: Load size is inaccurate */
  local_30[1] = *this;
  pwVar1 = (wchar_t *)(param_2 + 0x14);
  local_30[2] = 200;
  if (param_1 - 0x14U < *(int *)(param_2 + 0xc) + 2U) {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403574(0x38,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
  }
  else {
    iVar3 = FUN_00405627(pwVar1,param_1 - 0x14U,&local_34);
    if (iVar3 < 0) {
      if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) goto LAB_00406c73;
      if ((PTR_LOOP_00409000[0x1c] & 1) != 0) {
        uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
        uVar5 = 0x39;
LAB_00406c3f:
        FUN_00403052(uVar5,&DAT_00401734,uVar6,uVar7);
      }
    }
    else {
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
        FUN_00402f86(0x3a,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14),pwVar1);
      }
      local_30[3] = FUN_00405ee5(this,pwVar1,local_18);
      if ((int)local_30[3] < 0) {
        local_18[0] = 0xffffffff;
      }
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
        FUN_00405687(*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14),pwVar1);
      }
      DVar2 = FUN_00404ca3(*(void **)((int)this + 4),local_30,0x28);
      if ((int)DVar2 < 0) {
        if ((undefined **)PTR_LOOP_00409000 == &PTR_LOOP_00409000) goto LAB_00406c73;
        if ((PTR_LOOP_00409000[0x1c] & 1) != 0) {
          uVar7 = *(undefined4 *)(PTR_LOOP_00409000 + 0x14);
          uVar6 = *(undefined4 *)(PTR_LOOP_00409000 + 0x10);
          uVar5 = 0x3c;
          goto LAB_00406c3f;
        }
      }
    }
  }
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403f9b(0x3d,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
LAB_00406c73:
  FUN_00407390(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406c8c */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00406c8c(void *this,int param_1,int param_2)

{
  DWORD DVar1;
  int iVar2;
  uint *puVar3;
  short *local_6c;
  int *local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  short local_58 [4];
  int local_50;
  int local_48;
  void *local_44;
  uint local_40 [6];
  undefined4 local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x406c98;
  local_44 = this;
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00405756((void *)0x3e,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  puVar3 = local_40;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
                    /* WARNING: Load size is inaccurate */
  local_40[1] = *this;
  local_28 = *(undefined4 *)(param_2 + 0xc);
  local_40[2] = 0xca;
  if (param_1 - 0x14U < 8) {
    if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403574(0x3f,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
    goto LAB_00406eda;
  }
  local_5c = param_1 - 0x1c;
  local_48 = param_2 + 0x1c;
  Ordinal_8(local_58);
  local_8 = 0;
  if (*(short *)(param_2 + 0x14) == 3) {
    local_50 = *(int *)(param_2 + 0x18);
    if (local_58[0] != 3) {
      Ordinal_9(local_58);
      local_58[0] = 3;
    }
LAB_00406e1a:
    local_6c = local_58;
    local_48 = -3;
    local_68 = &local_48;
    local_64 = 1;
    local_60 = 1;
    iVar2 = **(int **)((int)local_44 + 8);
    (*(code *)PTR_guard_check_icall_0040a210)
              (*(int **)((int)local_44 + 8),*(undefined4 *)(param_2 + 0xc),&DAT_004013bc,0x400,4,
               &local_6c,0,0,0);
    local_40[3] = (**(code **)(iVar2 + 0x18))();
    if ((((int)local_40[3] < 0) && ((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000)) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00405756((void *)0x43,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
    DVar1 = FUN_00404ca3(*(void **)((int)local_44 + 4),local_40,0x28);
    if ((((int)DVar1 < 0) && ((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000)) &&
       ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
      FUN_00403052(0x44,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
    }
  }
  else if (*(short *)(param_2 + 0x14) == 8) {
    if (local_5c < *(int *)(param_2 + 0x18) + 2U) {
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
        FUN_00403574(0x40,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
      }
    }
    else {
      local_58[0] = 8;
      local_50 = Ordinal_150(local_48,*(int *)(param_2 + 0x18));
      if (local_50 != 0) goto LAB_00406e1a;
      if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
         ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
        FUN_00403574(0x41,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
      }
    }
  }
  else if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
          ((PTR_LOOP_00409000[0x1c] & 1) != 0)) {
    FUN_00405756((void *)0x42,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  Ordinal_9(local_58);
LAB_00406eda:
  if (((undefined **)PTR_LOOP_00409000 != &PTR_LOOP_00409000) &&
     ((PTR_LOOP_00409000[0x1c] & 2) != 0)) {
    FUN_00403f9b(0x45,&DAT_00401734,*(undefined4 *)(PTR_LOOP_00409000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409000 + 0x14));
  }
  FUN_00408346();
  return;
}



/* Function: FUN_00406f0c */

void __fastcall FUN_00406f0c(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00408824;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    local_8 = 0;
    _eh_vector_destructor_iterator_(pvVar1,4,*(uint *)((int)pvVar1 + -4),FUN_00401df0);
    FUN_004073a4((uint *)((int)pvVar1 + -4));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406f78 */

void __fastcall FUN_00406f78(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00408824;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    local_8 = 0;
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(uint *)((int)pvVar1 + -4),FUN_00407020);
    FUN_004073a4((uint *)((int)pvVar1 + -4));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406ff0 */

undefined4 * __fastcall FUN_00406ff0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* Function: FUN_00407000 */

undefined4 __fastcall FUN_00407000(undefined4 param_1)

{
  Ordinal_8(param_1);
  return param_1;
}



/* Function: FUN_00407020 */

void __fastcall FUN_00407020(undefined4 param_1)

{
  Ordinal_9(param_1);
  return;
}



/* Function: FUN_00407030 */

void FUN_00407030(void)

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
  if ((BVar1 != 0) && (local_8 != (HMODULE)0x0)) {
    pFVar2 = GetProcAddress(local_8,"MicrosoftTelemetryAssertTriggeredUM");
    if (pFVar2 != (FARPROC)0x0) {
      local_18 = 0;
      local_14 = 0xffffffff;
      local_10 = 0xffffffff;
      local_28 = 0xb;
      local_24 = 0x400000;
      local_c = 1;
      local_1c = 0;
      (*(code *)PTR_guard_check_icall_0040a210)(&local_28);
      (*pFVar2)();
    }
  }
  return;
}



/* Function: FUN_004070b0 */

undefined4 FUN_004070b0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004070d5();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_004070e1();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_004070d5 */

undefined * FUN_004070d5(void)

{
  return &DAT_00409120;
}



/* Function: FUN_004070e1 */

undefined * FUN_004070e1(void)

{
  return &DAT_00409128;
}



/* Function: FUN_004070f0 */

undefined4 FUN_004070f0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004070d5();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_004070e1();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00407120 */

void FUN_00407120(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(1);
  uVar3 = FUN_004079e3();
  o__set_fmode(uVar3);
  uVar3 = FUN_004079da();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_00407c5c();
    FUN_004077e2(FUN_00407c90);
    uVar3 = FUN_004079d0();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_004079ef();
      guard_check_icall();
      guard_check_icall();
      FUN_00407a0a();
      uVar3 = FUN_004079da();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_00407a01();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_004079da();
      iVar5 = thunk_FUN_004079da();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_00407a6c();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004071c0 */

undefined4 FUN_004071c0(void)

{
  FUN_00407a31();
  return 0;
}



/* Function: FUN_004071d0 */

void FUN_004071d0(void)

{
  undefined4 uVar1;
  
  FUN_00407bdc();
  uVar1 = FUN_004079da();
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
    if (DAT_00409130 != 1) {
      if (DAT_00409130 == 0) {
        DAT_00409130 = 1;
        iVar4 = initterm_e(&DAT_00401284,&DAT_00401298);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_0040126c,&DAT_00401280);
        DAT_00409130 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00407a54();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_0040a210)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_00407a60();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      o__get_initial_wide_environment();
      piVar5 = (int *)o___p___wargv();
      iVar4 = *piVar5;
      piVar5 = (int *)o___p___argc();
      unaff_ESI = FUN_0040313a(*piVar5,iVar4);
      uVar6 = FUN_00407b94();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_0040735b;
    }
  }
  FUN_00407a6c();
LAB_0040735b:
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



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_00407390 */

void __fastcall FUN_00407390(int param_1)

{
  if (param_1 == DAT_004090c0) {
    return;
  }
  FUN_00407d5f();
  return;
}



/* Function: FUN_004073a4 */

void __cdecl FUN_004073a4(undefined4 param_1)

{
  o_free(param_1);
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
    pvVar1 = (void *)0x4073f9;
    (*(code *)PTR_guard_check_icall_0040a210)();
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  FUN_0040742f();
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0040742f */

void FUN_0040742f(void)

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
    pvVar2 = (void *)0x407470;
    (*(code *)PTR_guard_check_icall_0040a210)();
    (*param_4)(pvVar2);
  }
  ExceptionList = local_14;
  return;
}



/* Function: FUN_004074db */

void __cdecl FUN_004074db(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_00407500 */

undefined4 * __thiscall FUN_00407500(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: __except_handler4 */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2019 Release */

void __cdecl
__except_handler4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004082ad(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_004090c0,FUN_00407390,param_1,param_2,param_3,param_4);
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
      if (DAT_00409134 != 0) {
        uVar3 = DAT_00409134;
        uVar1 = DAT_00409134;
      }
      DAT_00409134 = uVar1;
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
    DAT_00409151 = 1;
  }
  FUN_00407e61();
  cVar1 = FUN_00407a01();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_00407a01();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_00407a01();
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
  
  if (DAT_00409150 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00407a6c();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_00409138 = 0xffffffff;
    _DAT_0040913c = 0xffffffff;
    _DAT_00409140 = 0xffffffff;
    _DAT_00409144 = 0xffffffff;
    _DAT_00409148 = 0xffffffff;
    _DAT_0040914c = 0xffffffff;
LAB_004076a3:
    DAT_00409150 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_00409138);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_00409144);
      if (uVar3 == 0) goto LAB_004076a3;
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
  iVar1 = DAT_00409134;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_00409134 = 0;
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
  if ((DAT_00409151 == '\0') || (param_2 == '\0')) {
    FUN_00407a01();
    FUN_00407a01();
  }
  return 1;
}



/* Function: FUN_004077ac */

undefined4 __cdecl FUN_004077ac(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_00409138 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_00409138,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_004077e2 */

int __cdecl FUN_004077e2(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004077ac(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_004077ff */

void FUN_004077ff(uint param_1)

{
  FUN_0040781b(param_1);
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_0040781b */

void FUN_0040781b(uint param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00408847;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  operator_new(param_1);
  FUN_0040785d();
  return;
}



/* Function: Catch_All@00407855 */

undefined * Catch_All_00407855(void)

{
  return &DAT_0040785b;
}



/* Function: FUN_0040785d */

void FUN_0040785d(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: operator_new */

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 auStack_14 [2];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  do {
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x407894;
    pvVar2 = (void *)o_malloc();
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x407887;
    iVar1 = o__callnewh();
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    pvVar2 = (void *)FUN_0040806d();
    return pvVar2;
  }
  puStack_8 = &stack0xfffffffc;
  FUN_004050df(auStack_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_14,(ThrowInfo *)&DAT_00408dd0);
}



/* Function: `eh_vector_constructor_iterator' */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,unsigned int,void
   (__thiscall*)(void *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_14;
  
  for (uVar1 = 0; uVar1 != param_3; uVar1 = uVar1 + 1) {
    pvVar2 = (void *)0x4078d5;
    (*(code *)PTR_guard_check_icall_0040a210)();
    (*param_4)(pvVar2);
  }
  FUN_00407910();
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00407910 */

void FUN_00407910(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (in_AL == '\0') {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),unaff_EBX,
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}



/* Function: FUN_0040792a */

uint FUN_0040792a(void)

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
  if ((DAT_004090c0 == 0xbb40e64e) || ((DAT_004090c0 & 0xffff0000) == 0)) {
    DAT_004090c0 = FUN_0040792a();
    if (DAT_004090c0 == 0xbb40e64e) {
      DAT_004090c0 = 0xbb40e64f;
    }
    else if ((DAT_004090c0 & 0xffff0000) == 0) {
      DAT_004090c0 = DAT_004090c0 | (DAT_004090c0 | 0x4711) << 0x10;
    }
  }
  DAT_00409100 = ~DAT_004090c0;
  return;
}



/* Function: FUN_004079d0 */

undefined4 FUN_004079d0(void)

{
  return 1;
}



/* Function: FUN_004079da */

undefined4 FUN_004079da(void)

{
  return 0;
}



/* Function: FUN_004079e3 */

undefined4 FUN_004079e3(void)

{
  return 0x4000;
}



/* Function: FUN_004079ef */

void FUN_004079ef(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_00409158);
  return;
}



/* Function: FUN_00407a01 */

undefined1 FUN_00407a01(void)

{
  return 1;
}



/* Function: FUN_00407a0a */

void FUN_00407a0a(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_00407a6c();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407a31 */

void FUN_00407a31(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004070d5();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_004070e1();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_00407a54 */

undefined * FUN_00407a54(void)

{
  return &DAT_004095b0;
}



/* Function: FUN_00407a60 */

undefined * FUN_00407a60(void)

{
  return &DAT_004095ac;
}



/* Function: FUN_00407a6c */

void FUN_00407a6c(void)

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
  FUN_00407c4e();
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
    FUN_00407c4e();
  }
  return;
}



/* Function: thunk_FUN_004079da */

undefined4 thunk_FUN_004079da(void)

{
  return 0;
}



/* Function: FUN_00407b94 */

uint FUN_00407b94(void)

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



/* Function: FUN_00407bdc */

void FUN_00407bdc(void)

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



/* Function: FUN_00407c4e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407c4e(void)

{
  _DAT_00409160 = 0;
  return;
}



/* Function: FUN_00407c5c */

/* WARNING: Removing unreachable block (ram,0x00407c6e) */
/* WARNING: Removing unreachable block (ram,0x00407c6f) */
/* WARNING: Removing unreachable block (ram,0x00407c75) */
/* WARNING: Removing unreachable block (ram,0x00407c7f) */
/* WARNING: Removing unreachable block (ram,0x00407c86) */

void FUN_00407c5c(void)

{
  return;
}



/* Function: FUN_00407c90 */

/* WARNING: Removing unreachable block (ram,0x00407ca2) */
/* WARNING: Removing unreachable block (ram,0x00407ca3) */
/* WARNING: Removing unreachable block (ram,0x00407ca9) */
/* WARNING: Removing unreachable block (ram,0x00407cb3) */
/* WARNING: Removing unreachable block (ram,0x00407cba) */

void FUN_00407c90(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004090c0 ^ (uint)&param_2;
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



/* Function: FUN_00407d2f */

void __cdecl FUN_00407d2f(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00407d5f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407d5f(void)

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
  _DAT_00409260 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00409268 = (undefined4)uVar9;
  _DAT_00409278 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0040927c = &stack0x00000004;
  _DAT_004091b8 = 0x10001;
  _DAT_00409168 = 0xc0000409;
  _DAT_0040916c = 1;
  _DAT_00409178 = 1;
  DAT_0040917c = 2;
  _DAT_00409174 = unaff_retaddr;
  _DAT_00409244 = in_GS;
  _DAT_00409248 = in_FS;
  _DAT_0040924c = in_ES;
  _DAT_00409250 = in_DS;
  _DAT_00409254 = unaff_EDI;
  _DAT_00409258 = unaff_ESI;
  _DAT_0040925c = unaff_EBX;
  _DAT_00409264 = uVar3;
  _DAT_0040926c = unaff_EBP;
  DAT_00409270 = unaff_retaddr;
  _DAT_00409274 = in_CS;
  _DAT_00409280 = in_SS;
  FUN_00407d2f((_EXCEPTION_POINTERS *)&PTR_DAT_00401008);
  return;
}



/* Function: FUN_00407e61 */

/* WARNING: Removing unreachable block (ram,0x00407ed2) */
/* WARNING: Removing unreachable block (ram,0x00407e96) */
/* WARNING: Removing unreachable block (ram,0x00407f4a) */

undefined4 FUN_00407e61(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_00409484 = 0;
  DAT_00409104 = DAT_00409104 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00409104;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_00409488 = DAT_00409488 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_00409488 = DAT_00409488 | 2;
      }
    }
    DAT_00409484 = 1;
    uVar5 = DAT_00409104 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_00409104 | 6;
      DAT_00409484 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_00409484 = 3;
        uVar5 = DAT_00409104 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_00409484 = 5;
          uVar5 = DAT_00409104 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_00409104 = DAT_00409104 | 0x6e;
            DAT_00409484 = 6;
            uVar5 = DAT_00409104;
          }
        }
      }
    }
  }
  DAT_00409104 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_00409108 != 0;
}



/* Function: FUN_0040804f */

undefined4 * __fastcall FUN_0040804f(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* Function: FUN_0040806d */

void FUN_0040806d(void)

{
  undefined4 local_10 [3];
  
  FUN_0040804f(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00408d34);
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040809e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004080aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x004080b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: Unwind@004080d0 */

void Unwind_004080d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x004080d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: o___p___argc */

void __cdecl o___p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x004080dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___argc();
  return;
}



/* Function: o___p___wargv */

void __cdecl o___p___wargv(void)

{
                    /* WARNING: Could not recover jumptable at 0x004080e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___wargv();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004080f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040810c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040813c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040816c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_initial_wide_environment */

void __cdecl o__get_initial_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_initial_wide_environment();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040819c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040822c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00408244. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: FUN_00408250 */

int __cdecl
FUN_00408250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_004070d5();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0040828a */

void __cdecl
FUN_0040828a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00408250(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: FUN_004082ad */

int __cdecl FUN_004082ad(int param_1)

{
  uint uVar1;
  
  if ((DAT_00409484 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: FUN_00408346 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00408346(void)

{
  uint unaff_EBP;
  
  FUN_00407390(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
  return;
}



/* Function: FUN_0040835b */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040835b(void)

{
  uint unaff_EBP;
  
  FUN_00407390(*(uint *)(unaff_EBP - 0x14) ^ unaff_EBP);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004090c0 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004090c0 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004090c0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: __EH_prolog3_catch_GS */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch_GS
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_catch_GS(int param_1)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_004090c0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
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
  
                    /* WARNING: Could not recover jumptable at 0x00408491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@00408536 */

void Unwind_00408536(void)

{
  int unaff_EBP;
  
  FUN_00403fcb((int *)(unaff_EBP + -0x4c));
  return;
}



/* Function: Unwind@004085cf */

void Unwind_004085cf(void)

{
  int unaff_EBP;
  
  FUN_00403e11((int *)(unaff_EBP + -0x22c));
  return;
}



/* Function: Unwind@004085da */

void Unwind_004085da(void)

{
  int unaff_EBP;
  
  ~CComPtr<>((int *)(unaff_EBP + -0x21c));
  return;
}



/* Function: Unwind@0040863d */

void Unwind_0040863d(void)

{
  int unaff_EBP;
  
  FUN_00404e7c((int *)(unaff_EBP + -0x44));
  return;
}



/* Function: Unwind@004086e3 */

void Unwind_004086e3(void)

{
  int unaff_EBP;
  
  ~CComPtr<>((int *)(unaff_EBP + -0x44));
  return;
}



/* Function: Unwind@004086eb */

void Unwind_004086eb(void)

{
  int unaff_EBP;
  
  ~CComPtr<>((int *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@004086f3 */

void Unwind_004086f3(void)

{
  int unaff_EBP;
  
  ~CComPtr<>((int *)(unaff_EBP + -0x38));
  return;
}



/* Function: Unwind@00408750 */

void Unwind_00408750(void)

{
  int unaff_EBP;
  
  FUN_00406f78((undefined4 *)(unaff_EBP + -0x80));
  return;
}



/* Function: Unwind@00408758 */

void Unwind_00408758(void)

{
  int unaff_EBP;
  
  FUN_00406f0c((undefined4 *)(unaff_EBP + -0x7c));
  return;
}



/* Function: Unwind@00408760 */

void Unwind_00408760(void)

{
  int unaff_EBP;
  
  FUN_00407020(unaff_EBP + -0x90);
  return;
}



/* Function: Unwind@0040876b */

void Unwind_0040876b(void)

{
  int unaff_EBP;
  
  FUN_00407020(unaff_EBP + -0x78);
  return;
}



/* Function: Unwind@004087a8 */

void Unwind_004087a8(void)

{
  int unaff_EBP;
  
  FUN_00403e11((int *)(unaff_EBP + -0x4c));
  return;
}



/* Function: Unwind@004087b0 */

void Unwind_004087b0(void)

{
  int unaff_EBP;
  
  FUN_00407020(unaff_EBP + -0x60);
  return;
}



/* Function: Unwind@004087ea */

void Unwind_004087ea(void)

{
  int unaff_EBP;
  
  FUN_00407020(unaff_EBP + -0x54);
  return;
}



/* Function: FUN_00408870 */

void FUN_00408870(void)

{
  FUN_004034af(0x40957c);
  return;
}



