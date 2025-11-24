/* Function: FUN_00403c40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403c40(void)

{
  _DAT_004246cc = FUN_00405500;
  _DAT_004246dc = FUN_00405510;
  return;
}



/* Function: FUN_00403c60 */

void FUN_00403c60(void)

{
  DAT_004246e4 = FUN_00404d80;
  DAT_004246c8 = DebugBreak;
  DAT_004246e0 = FUN_00404dc0;
  DAT_004246b8 = FUN_00405b70;
  DAT_004246a8 = FUN_00405ca0;
  DAT_004246e8 = FUN_00405bc0;
  DAT_004246c4 = FUN_00405c30;
  return;
}



/* Function: FUN_00403cb0 */

void FUN_00403cb0(void)

{
  FUN_004203b5(FUN_00422240);
  return;
}



/* Function: FUN_00403cd0 */

void FUN_00403cd0(void)

{
  FUN_004203b5(FUN_00422270);
  return;
}



/* Function: FUN_00403cf0 */

void FUN_00403cf0(void)

{
  DAT_004246c0 = FUN_004068e0;
  DAT_00424698 = &PTR_s_WilError_03_00424000;
  DAT_004246ac = &DAT_004241d4;
  return;
}



/* Function: FUN_00403d20 */

void FUN_00403d20(void)

{
  FUN_0040d94a();
  FUN_004203b5(FUN_00422280);
  return;
}



/* Function: FUN_00403d40 */

void FUN_00403d40(void)

{
  FUN_004203b5(FUN_00422290);
  return;
}



/* Function: FUN_00403d60 */

void FUN_00403d60(void)

{
  DAT_004253dc = FUN_004084d0;
  DAT_004246f8 = FUN_00408550;
  DAT_00424710 = FUN_004085d0;
  DAT_004253ec = FUN_00408640;
  DAT_0042471c = FUN_004060e0;
  return;
}



/* Function: FUN_00403da0 */

void FUN_00403da0(void)

{
  DAT_00424704 = FUN_004089c0;
  return;
}



/* Function: FUN_00403dc0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00403dc0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_24 [7];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  uStack_8 = 0x403dcc;
  pcVar1 = *(code **)(DAT_00424018 + 0xc);
  puVar3 = auStack_24;
  auStack_24[0] = 0x403ddc;
  (*(code *)PTR_guard_check_icall_004263b4)();
  puVar4 = puVar3 + -1;
  puVar3[-1] = 0x403de3;
  iVar2 = (*pcVar1)();
  DAT_00425248 = iVar2 + 0x10;
  *(code **)((int)puVar4 + -4) = FUN_004222a0;
  *(undefined4 *)((int)puVar4 + -8) = 0x403df5;
  FUN_004203b5(*(_onexit_t *)((int)puVar4 + -4));
  *(undefined4 *)((int)puVar4 + -4) = 0x403dfb;
  return;
}



/* Function: FUN_00403e10 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00403e10(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_24 [7];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  uStack_8 = 0x403e1c;
  pcVar1 = *(code **)(DAT_00424018 + 0xc);
  puVar3 = auStack_24;
  auStack_24[0] = 0x403e2c;
  (*(code *)PTR_guard_check_icall_004263b4)();
  puVar4 = puVar3 + -1;
  puVar3[-1] = 0x403e33;
  iVar2 = (*pcVar1)();
  DAT_0042524c = iVar2 + 0x10;
  *(code **)((int)puVar4 + -4) = FUN_004222c0;
  *(undefined4 *)((int)puVar4 + -8) = 0x403e45;
  FUN_004203b5(*(_onexit_t *)((int)puVar4 + -4));
  *(undefined4 *)((int)puVar4 + -4) = 0x403e4b;
  return;
}



/* Function: FUN_00403e60 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00403e60(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_24 [7];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  uStack_8 = 0x403e6c;
  pcVar1 = *(code **)(DAT_00424018 + 0xc);
  puVar3 = auStack_24;
  auStack_24[0] = 0x403e7c;
  (*(code *)PTR_guard_check_icall_004263b4)();
  puVar4 = puVar3 + -1;
  puVar3[-1] = 0x403e83;
  iVar2 = (*pcVar1)();
  DAT_004252a0 = iVar2 + 0x10;
  *(code **)((int)puVar4 + -4) = FUN_004222e0;
  *(undefined4 *)((int)puVar4 + -8) = 0x403e95;
  FUN_004203b5(*(_onexit_t *)((int)puVar4 + -4));
  *(undefined4 *)((int)puVar4 + -4) = 0x403e9b;
  return;
}



/* Function: FUN_00403eb0 */

void FUN_00403eb0(void)

{
  FUN_004203b5(FUN_00422300);
  return;
}



/* Function: FUN_00403ed0 */

void FUN_00403ed0(void)

{
  FUN_004203b5(FUN_00422310);
  return;
}



/* Function: FUN_00403ef0 */

void FUN_00403ef0(void)

{
  FUN_004203b5(FUN_00422320);
  return;
}



/* Function: FUN_00403f10 */

void FUN_00403f10(void)

{
  FUN_004203b5(FUN_00422330);
  return;
}



/* Function: FUN_00403f30 */

void FUN_00403f30(void)

{
  FUN_004203b5(FUN_00422340);
  return;
}



/* Function: FUN_00403f50 */

void FUN_00403f50(void)

{
  FUN_004203b5(FUN_00422350);
  return;
}



/* Function: FUN_00403f70 */

void FUN_00403f70(void)

{
  FUN_004203b5(FUN_00422360);
  return;
}



/* Function: FUN_00403f90 */

void FUN_00403f90(void)

{
  FUN_004203b5(FUN_00422370);
  return;
}



/* Function: FUN_00403fb0 */

void FUN_00403fb0(void)

{
  FUN_004203b5(FUN_00422380);
  return;
}



/* Function: FUN_00403fd0 */

void FUN_00403fd0(void)

{
  FUN_004203b5(FUN_00422390);
  return;
}



/* Function: FUN_00403ff0 */

void FUN_00403ff0(void)

{
  FUN_004203b5(FUN_004223a0);
  return;
}



/* Function: FUN_00404010 */

void FUN_00404010(void)

{
  FUN_004203b5(FUN_004223b0);
  return;
}



/* Function: FUN_00404030 */

void FUN_00404030(void)

{
  FUN_004203b5(FUN_004223c0);
  return;
}



/* Function: FUN_00404050 */

void FUN_00404050(void)

{
  FUN_004203b5(FUN_004223d0);
  return;
}



/* Function: FUN_00404070 */

void FUN_00404070(void)

{
  FUN_004203b5(FUN_004223e0);
  return;
}



/* Function: FUN_00404090 */

void FUN_00404090(void)

{
  FUN_004203b5(FUN_004223f0);
  return;
}



/* Function: FUN_004040b0 */

void FUN_004040b0(void)

{
  FUN_004203b5(FUN_00422400);
  return;
}



/* Function: thunk_FUN_00415275 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_00415275(undefined4 param_1,undefined4 param_2)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *_Src;
  uint uVar3;
  wchar_t *pwVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  wchar_t *pwVar5;
  undefined4 extraout_EDX_03;
  bool bVar6;
  wchar_t *pwStack_34;
  wchar_t awStack_30 [20];
  uint uStack_8;
  
  uStack_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  pwStack_34 = (wchar_t *)0x0;
  if (DAT_00425328 != '\0') goto LAB_004153e5;
  _DAT_00425330 = 1;
  iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0x20001010,(LPWSTR)&DAT_00425340,2);
  param_2 = extraout_EDX;
  if (iVar2 == 0) {
LAB_004153b3:
    _DAT_00425330 = 1;
    _DAT_00425340 = 1;
    _DAT_00425334 = 0x1e;
    _DAT_00425338 = &DAT_00402290;
    _DAT_0042533c = &DAT_00402294;
  }
  else {
    _DAT_0042533c = (undefined *)0x0;
    iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0xf,(LPWSTR)&DAT_0042536c,0x14);
    param_2 = extraout_EDX_00;
    if (iVar2 == 0) goto LAB_004153b3;
    _DAT_0042533c = &DAT_0042536c;
    _DAT_00425338 = (undefined *)0x0;
    iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0xe,(LPWSTR)&DAT_00425344,0x14);
    param_2 = extraout_EDX_01;
    if (iVar2 == 0) goto LAB_004153b3;
    _DAT_00425338 = &DAT_00425344;
    iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0x10,(LPWSTR)&DAT_00425394,0x14);
    param_2 = extraout_EDX_02;
    if (iVar2 == 0) goto LAB_004153b3;
    awStack_30[0] = L'\0';
    _Src = wcstok_s((wchar_t *)&DAT_00425394,L";",&pwStack_34);
    while (_Src != (wchar_t *)0x0) {
      pwVar5 = L"0";
      pwVar4 = _Src;
      do {
        wVar1 = *pwVar4;
        bVar6 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_0041536b:
          uVar3 = -(uint)bVar6 | 1;
          goto LAB_0041536f;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar4[1];
        bVar6 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_0041536b;
        pwVar4 = pwVar4 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      uVar3 = 0;
LAB_0041536f:
      if (uVar3 == 0) break;
      wcscat_s(awStack_30,0x14,_Src);
      _Src = wcstok_s((wchar_t *)0x0,L";",&pwStack_34);
    }
    _DAT_00425334 = wcstol(awStack_30,&pwStack_34,10);
    param_2 = extraout_EDX_03;
  }
  DAT_00425328 = '\x01';
LAB_004153e5:
  FUN_004200b0(uStack_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004040e0 */

void FUN_004040e0(void)

{
  FUN_004203b5(FUN_00422420);
  return;
}



/* Function: FUN_00404100 */

void FUN_00404100(void)

{
  FUN_004203b5(FUN_00422430);
  return;
}



/* Function: FUN_00404120 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404120(void)

{
  _DAT_004253c0 = GetProcessHeap();
  _DAT_004253bc = &PTR_FUN_00401054;
  DAT_004253c4 = 0;
  FUN_004203b5(FUN_00422440);
  return;
}



/* Function: FUN_00404150 */

void FUN_00404150(void)

{
  FUN_004203b5(FUN_00422450);
  return;
}



/* Function: FUN_00404170 */

void FUN_00404170(void)

{
  FUN_0041f08d((LPCRITICAL_SECTION)&DAT_0042404c);
  FUN_004203b5(FUN_00422470);
  return;
}



/* Function: FUN_00404190 */

void FUN_00404190(void)

{
  int iVar1;
  
  iVar1 = FUN_0041f08d((LPCRITICAL_SECTION)&DAT_004242f4);
  if (iVar1 < 0) {
    DAT_004242f0 = 0;
  }
  FUN_004203b5(FUN_00422480);
  return;
}



/* Function: FUN_004041c0 */

void FUN_004041c0(void)

{
  undefined4 local_8;
  
  local_8 = 3;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_8,(ThrowInfo *)&DAT_0042333c);
}



/* Function: FUN_004041e2 */

void __thiscall FUN_004041e2(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    if (*(int *)((int)this + 0x14) == 0) {
      FUN_004041c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar2 = (undefined4 *)FUN_0041fd5e(*(int *)((int)this + 0x14) * 0xc + 4);
    *puVar2 = *(undefined4 *)((int)this + 0x10);
    *(undefined4 **)((int)this + 0x10) = puVar2;
    iVar3 = *(int *)((int)this + 0x14);
    puVar2 = puVar2 + iVar3 * 3 + -2;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      *puVar2 = *(undefined4 *)((int)this + 0xc);
      *(undefined4 **)((int)this + 0xc) = puVar2;
      puVar2 = puVar2 + -3;
    }
  }
  puVar2 = *(undefined4 **)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = *puVar2;
  puVar2[1] = param_1;
  *puVar2 = param_2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  puVar2[2] = 0;
  return;
}



/* Function: FUN_00404254 */

undefined4 * __fastcall FUN_00404254(undefined4 *param_1)

{
  param_1[5] = 10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  return param_1;
}



/* Function: FUN_00404276 */

int __fastcall FUN_00404276(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  iVar3 = piVar1[2];
  *param_1 = iVar2;
  if (iVar2 == 0) {
    param_1[1] = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  FUN_004043c7(param_1,piVar1);
  return iVar3;
}



/* Function: FUN_0040429e */

void __thiscall FUN_0040429e(void *this,undefined4 param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = FUN_004041e2(this,0,*this);
  *(undefined4 *)(iVar1 + 8) = param_1;
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    *(int *)((int)this + 4) = iVar1;
  }
  else {
    *(int *)(*this + 4) = iVar1;
  }
  *(int *)this = iVar1;
  return;
}



/* Function: FUN_004042d0 */

void __thiscall FUN_004042d0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004041e2(this,*(undefined4 *)((int)this + 4),0);
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int **)((int)this + 4) == (int *)0x0) {
    *(int *)this = iVar1;
  }
  else {
    **(int **)((int)this + 4) = iVar1;
  }
  *(int *)((int)this + 4) = iVar1;
  return;
}



/* Function: FUN_00404303 */

void __fastcall FUN_00404303(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  _Memory = (undefined4 *)param_1[4];
  while (_Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*_Memory;
    free(_Memory);
    _Memory = puVar1;
  }
  param_1[4] = 0;
  return;
}



/* Function: FUN_0040433a */

void __thiscall FUN_0040433a(void *this,int *param_1)

{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) {
                    /* WARNING: Load size is inaccurate */
    if (param_1 == *this) {
      *(int *)this = *param_1;
    }
    else {
      *(int *)param_1[1] = *param_1;
    }
    if (param_1 == *(int **)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    else {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    FUN_004043c7(this,param_1);
    return;
  }
  FUN_004041c0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: InsertAfter */

/* Library Function - Multiple Matches With Same Base Name
    public: struct __POSITION * __thiscall CObList::InsertAfter(struct __POSITION *,class CObject *)
    public: struct __POSITION * __thiscall CPtrList::InsertAfter(struct __POSITION *,void *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2015 Release */

void __thiscall InsertAfter(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_004042d0(this,param_2);
  }
  else {
    iVar1 = FUN_004041e2(this,param_1,*param_1);
    *(undefined4 *)(iVar1 + 8) = param_2;
    if (*param_1 == 0) {
      *(int *)((int)this + 4) = iVar1;
    }
    else {
      *(int *)(*param_1 + 4) = iVar1;
    }
    *param_1 = iVar1;
  }
  return;
}



/* Function: FUN_004043c7 */

void __thiscall FUN_004043c7(void *this,undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0xc);
    piVar1 = (int *)((int)this + 8);
    *piVar1 = *piVar1 + -1;
    *(undefined4 **)((int)this + 0xc) = param_1;
    if (*piVar1 == 0) {
      FUN_00404303((undefined4 *)this);
    }
    return;
  }
  FUN_004041c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_004043f6 */

void __fastcall FUN_004043f6(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  _Memory = (undefined4 *)param_1[4];
  while (_Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*_Memory;
    free(_Memory);
    _Memory = puVar1;
  }
  param_1[4] = 0;
  return;
}



/* Function: FUN_00404401 */

undefined4 * __thiscall FUN_00404401(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return (undefined4 *)this;
}



/* Function: FUN_00404417 */

void __fastcall FUN_00404417(undefined4 param_1)

{
  void *pExceptionObject;
  undefined4 local_8;
  
  local_8 = param_1;
  FUN_00404401(&local_8,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(pExceptionObject,(ThrowInfo *)&DAT_00423398);
}



/* Function: FUN_0040443a */

undefined4 __fastcall FUN_0040443a(int param_1)

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
  uVar1 = FUN_00404417(uVar1);
  return uVar1;
}



/* Function: FUN_00404473 */

ushort * __fastcall FUN_00404473(HMODULE param_1,HRSRC param_2,uint param_3)

{
  ushort *puVar1;
  HGLOBAL hResData;
  ushort *puVar2;
  DWORD DVar3;
  uint uVar4;
  
  hResData = LoadResource(param_1,param_2);
  if ((hResData != (HGLOBAL)0x0) &&
     (puVar2 = (ushort *)LockResource(hResData), puVar2 != (ushort *)0x0)) {
    DVar3 = SizeofResource(param_1,param_2);
    puVar1 = (ushort *)((int)puVar2 + DVar3);
    for (uVar4 = param_3 & 0xf; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar1 <= puVar2) {
        return (ushort *)0x0;
      }
      puVar2 = puVar2 + *puVar2 + 1;
    }
    if (puVar2 < puVar1) {
      if (*puVar2 == 0) {
        return (ushort *)0x0;
      }
      return puVar2;
    }
  }
  return (ushort *)0x0;
}



/* Function: FUN_004044dc */

void __fastcall FUN_004044dc(undefined4 *param_1)

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
    (*(code *)PTR_guard_check_icall_004263b4)(param_1);
    (*pcVar3)();
  }
  return;
}



/* Function: FUN_00404508 */

undefined4 __fastcall FUN_00404508(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_0040456e */

undefined4 __fastcall FUN_0040456e(short *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_004046b3(param_1,param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_004045a3 */

int __fastcall FUN_004045a3(short *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  short *local_8;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    local_8 = param_1;
    iVar1 = FUN_0040466a(param_1,param_2,(int *)&local_8);
    if (-1 < iVar1) {
      iVar1 = FUN_004046b3(param_1 + (int)local_8,param_2 - (int)local_8,extraout_ECX,param_3);
    }
  }
  return iVar1;
}



/* Function: FUN_004045ef */

undefined4 __fastcall FUN_004045ef(wchar_t *param_1,uint param_2,wchar_t *param_3,va_list param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_00404706(param_1,param_2,param_1,param_3,param_4);
  }
  return uVar1;
}



/* Function: FUN_00404626 */

undefined4 __cdecl FUN_00404626(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_00404706(param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_0040466a */

undefined4 __fastcall FUN_0040466a(short *param_1,int param_2,int *param_3)

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



/* Function: FUN_004046b3 */

undefined4 __fastcall FUN_004046b3(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_00404706 */

undefined4 __fastcall
FUN_00404706(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4,va_list param_5)

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



/* Function: FUN_0040474c */

void __fastcall FUN_0040474c(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = param_1[0x12] + -1;
  param_1[0x12] = iVar1;
  UNLOCK();
  if ((iVar1 == 0) && (param_1 != (int *)0x0)) {
    FUN_00418b83(param_1);
    free(param_1);
  }
  return;
}



/* Function: FUN_0040477d */

wchar_t * __cdecl FUN_0040477d(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  FUN_004045ef(param_1,(int)param_2 - (int)param_1 >> 1,param_3,&stack0x00000010);
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



/* Function: FUN_004047c2 */

void __fastcall FUN_004047c2(wchar_t *param_1,int param_2,int param_3)

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
  wchar_t *local_218;
  WCHAR local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = DAT_004246a0;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421136;
  local_10 = ExceptionList;
  local_14 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = param_2;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((pcVar2 != (code *)0x0) && (DAT_004246b0 != '\0')) {
      (*(code *)PTR_guard_check_icall_004263b4)(param_3,param_1,param_2,local_14);
      (*pcVar2)();
      iVar4 = extraout_EDX;
      if (*param_1 != L'\0') goto LAB_00404a31;
    }
    memset(local_214,0,0x200);
    pcVar2 = DAT_004246b8;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
    }
    else if (DAT_004246b8 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_004263b4)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar2)();
    }
    pwVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_0040477d(param_1,pwVar1,L"%hs!%p: ");
    }
    else {
      local_218 = FUN_0040477d(param_1,pwVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_0040477d(local_218,pwVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    pwVar3 = FUN_0040477d(local_218,pwVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (iVar4 = extraout_EDX_00, *(int *)(param_3 + 0x20) != 0)) {
      pwVar3 = FUN_0040477d(pwVar3,pwVar1,L"    ");
      if (*(int *)(param_3 + 0x14) != 0) {
        pwVar3 = FUN_0040477d(pwVar3,pwVar1,L"Msg:[%ws] ");
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        pwVar3 = FUN_0040477d(pwVar3,pwVar1,L"CallContext:[%hs] ");
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_0040477d(pwVar3,pwVar1,L"\n");
          iVar4 = extraout_EDX_03;
        }
        else {
          FUN_0040477d(pwVar3,pwVar1,L"[%hs]\n");
          iVar4 = extraout_EDX_02;
        }
      }
      else {
        FUN_0040477d(pwVar3,pwVar1,L"[%hs(%hs)]\n");
        iVar4 = extraout_EDX_01;
      }
    }
  }
LAB_00404a31:
  ExceptionList = local_10;
  FUN_004200b0(local_14 ^ (uint)&stack0xfffffffc,iVar4);
  return;
}



/* Function: FUN_00404a5a */

uint * __thiscall FUN_00404a5a(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00404e94((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00404a7e */

LPVOID __fastcall FUN_00404a7e(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_00421166;
  local_10 = ExceptionList;
  uVar2 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0042466c == (FARPROC)0x0) {
    if (DAT_00424718 != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0042466c = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_00424718 = '\x01';
    if (DAT_0042466c == (FARPROC)0x0) {
      DAT_00424718 = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_0042466c;
  (*(code *)PTR_guard_check_icall_004263b4)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00404b2e */

undefined4 * __thiscall FUN_00404b2e(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_00404b67((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00404b67 */

void __fastcall FUN_00404b67(undefined4 *param_1)

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



/* Function: FUN_00404b9e */

undefined4 __thiscall FUN_00404b9e(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_00404b67((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_00404be8;
    *piVar1 = 0;
    FUN_00404b67((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_00404be8:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_00404bf7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404bf7(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004246fc;
  _DAT_00424700 = param_1;
  LOCK();
  DAT_004246fc = DAT_004246fc + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404c10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404c10(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00424734;
  _DAT_0042468c = param_1;
  LOCK();
  DAT_00424734 = DAT_00424734 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404c29 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404c29(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004253e4;
  _DAT_00424728 = param_1;
  LOCK();
  DAT_004253e4 = DAT_004253e4 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404c50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00404c50(undefined4 param_1)

{
  _DAT_004253d0 = param_1;
  return 1;
}



/* Function: FUN_00404c6a */

void FUN_00404c6a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_004246e0;
  if (DAT_004246e0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404c9a */

void __fastcall
FUN_00404c9a(undefined4 param_1,undefined4 param_2,LPCWSTR param_3,uint *param_4,char *param_5,
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
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
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
      FUN_00404508(param_5,param_6,(int)pcVar5);
      param_2 = extraout_EDX_01;
    }
  }
  else if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00404d80 */

undefined * __fastcall FUN_00404d80(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00424708 == '\0') {
    FUN_00404c9a(param_1,param_2,(LPCWSTR)FUN_00404c50,(uint *)0x0,&DAT_00424738,0x40);
    DAT_00424708 = '\x01';
  }
  return &DAT_00424738;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00404dc0 */

void FUN_00404dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00404e01 */

uint __fastcall FUN_00404e01(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_004246e8;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421189;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int)param_1 < 0) {
    if (param_1 == 0xc0000017) {
      uVar2 = 0x8007000e;
    }
    else {
      if (DAT_004246e8 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_004263b4)(param_1,DAT_00424140 ^ (uint)&stack0xfffffffc);
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



/* Function: FUN_00404e94 */

uint __fastcall FUN_00404e94(uint param_1)

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



/* Function: FUN_00405069 */

DWORD __fastcall
FUN_00405069(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421189;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0040e27d(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_004050d4 */

uint __fastcall
FUN_004050d4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004211ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0040e27d(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_00405155 */

void __fastcall FUN_00405155(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_004050d4(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00405172 */

char * __fastcall FUN_00405172(char *param_1)

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



/* Function: FUN_00405190 */

int __fastcall FUN_00405190(short *param_1)

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



/* Function: FUN_004051b8 */

undefined1 FUN_004051b8(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_004246c4;
  if (DAT_004246d8 != '\0') {
    return 1;
  }
  if (DAT_004246c4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_004051e8 */

void __thiscall FUN_004051e8(void *this,undefined4 *param_1)

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
  iVar10 = FUN_00405190((short *)param_1[0x12]);
  iVar1 = FUN_00405190((short *)param_1[0xf]);
  iVar2 = FUN_00405190((short *)param_1[5]);
  pcVar3 = FUN_00405172((char *)param_1[0x11]);
  pcVar4 = FUN_00405172((char *)param_1[0xe]);
  pcVar5 = FUN_00405172((char *)param_1[0xc]);
  pcVar6 = FUN_00405172((char *)param_1[9]);
  pcVar7 = FUN_00405172((char *)param_1[8]);
  pcVar8 = FUN_00405172((char *)param_1[7]);
  pcVar9 = FUN_00405172((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_00404b67(this_00);
    FUN_00404b9e(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_0040e2c4(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_0040e334(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_0040e334(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_0040e334(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_0040e334(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_0040e334(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_0040e334(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_0040e2c4(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_0040e334(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_0040e2c4(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_0040537b */

exception * __thiscall FUN_0040537b(void *this,undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421189;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  exception::exception((exception *)this);
  *(undefined ***)this = &PTR_FUN_00401034;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_004051e8((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  ExceptionList = local_10;
  return (exception *)this;
}



/* Function: FUN_004053f0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004053f0(int param_1,undefined4 param_2)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  wchar_t local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_004047c2(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_00404b9e(this,cbMultiByte);
    param_2 = extraout_EDX;
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      param_2 = extraout_EDX_00;
    }
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004054a0 */

exception * __thiscall FUN_004054a0(void *this,byte param_1)

{
  FUN_004054d0((exception *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (exception *)this;
}



/* Function: FUN_004054d0 */

void __fastcall FUN_004054d0(exception *param_1)

{
  FUN_00404b67((undefined4 *)(param_1 + 0x6c));
  FUN_00404b67((undefined4 *)(param_1 + 100));
                    /* WARNING: Could not recover jumptable at 0x004054e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception::~exception(param_1);
  return;
}



/* Function: FUN_00405500 */

void FUN_00405500(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00405510 */

void FUN_00405510(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_0040537b(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_0042332c);
}



/* Function: FUN_00405540 */

exception * __thiscall FUN_00405540(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401034;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_00404b2e((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_00404b2e((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00405597 */

void __fastcall
FUN_00405597(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8,short *param_9,undefined4 param_10,wchar_t *param_11,undefined4 param_12,
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
  puStack_c = &LAB_004211cf;
  local_10 = ExceptionList;
  uVar3 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar4 = *param_8;
  param_15[2] = iVar4;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar4 = FUN_00404bf7(iVar4);
  }
  else if (param_7 == 1) {
    iVar4 = FUN_00404c10(iVar4);
  }
  else if (param_7 == 2) {
    if (-1 < iVar4) {
      iVar4 = -0x7ff8fd64;
      FUN_0040e27d(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar5 = FUN_00404e94(0x8007029c);
      param_15[3] = uVar5;
    }
    iVar4 = FUN_00404c29(iVar4);
  }
  else if (param_7 == 3) {
    iVar4 = FUN_00404c50(iVar4);
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
  iVar6 = DAT_0042470c + 1;
  DAT_0042470c = DAT_0042470c + 1;
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
  pcVar1 = DAT_004246e4;
  if (DAT_004246e4 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004263b4)(uVar3);
    iVar4 = (*pcVar1)();
  }
  pcVar1 = DAT_004246a8;
  param_15[0x13] = iVar4;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004246c0;
  if (DAT_004246c0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004246bc;
  if (DAT_004246bc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004246d0;
  if ((DAT_004246d0 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_00405afc();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar3 = FUN_00404e94(0x8000ffff);
    param_15[3] = uVar3;
  }
  pcVar1 = DAT_00424694;
  if (DAT_0042469c == '\0') {
    if (DAT_00424694 == (code *)0x0) {
      BVar8 = IsDebuggerPresent();
      cVar2 = BVar8 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_004263b4)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040579f;
  }
  else {
LAB_0040579f:
    pcVar1 = DAT_004246a0;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_004246a0 != (code *)0x0) && (DAT_004246b0 == '\0')) {
        (*(code *)PTR_guard_check_icall_004263b4)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_004047c2(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00405808;
    }
  }
  pcVar1 = DAT_004246a0;
  if ((DAT_004246a0 != (code *)0x0) && (DAT_004246b0 == '\0')) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00405808:
  pcVar1 = DAT_004246c8;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_004246a4 != '\0')) &&
     (DAT_004246c8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040584e */

void __fastcall FUN_0040584e(int param_1)

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
  
  pcVar1 = DAT_004246ec;
  if (DAT_004246ec != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_004246d4;
  if (DAT_004246d4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_004058bb;
  uVar3 = 1;
  do {
    FUN_00404c6a(uVar3);
    iVar2 = extraout_ECX;
LAB_004058bb:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_004058db */

void __fastcall
FUN_004058db(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_0040e3bd(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_004058f9 */

void __fastcall
FUN_004058f9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar2 = FUN_00404a5a((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_004058db(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_0040593e */

void __fastcall FUN_0040593e(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00405069(param_1,param_2,0x401710,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00404a5a(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_004058db(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_0040599f */

void __fastcall FUN_0040599f(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004211f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040e69c(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004059eb */

void __fastcall FUN_004059eb(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421215;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040e6dd(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405a35 */

void __fastcall FUN_00405a35(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421215;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040593e(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405a71 */

void __fastcall FUN_00405a71(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004211f2;
  local_10 = ExceptionList;
  uVar2 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004058f9(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2);
  return;
}



/* Function: FUN_00405ab6 */

void __fastcall FUN_00405ab6(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421215;
  local_10 = ExceptionList;
  uVar2 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004058f9(param_1,0x137b,"onecore\\internal\\sdk\\inc\\wil\\Staging.h",param_1,param_1,
               unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2,param_1);
  return;
}



/* Function: FUN_00405afc */

void FUN_00405afc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405b08 */

void __fastcall FUN_00405b08(LPCSTR param_1)

{
  if (DAT_00424724 == (HMODULE)0x0) {
    DAT_00424724 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_00424724,param_1);
  return;
}



/* Function: FUN_00405b34 */

FARPROC __fastcall FUN_00405b34(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_004253c8 == (HMODULE)0x0) &&
     (DAT_004253c8 = GetModuleHandleW(L"kernelbase.dll"), DAT_004253c8 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_004253c8,param_1);
  return pFVar1;
}



/* Function: FUN_00405b70 */

void FUN_00405b70(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_00424724 == (HMODULE)0x0) {
    DAT_00424724 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_00424724,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00405bc0 */

void FUN_00405bc0(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421215;
  local_10 = ExceptionList;
  uVar2 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_00424678 == (code *)0x0) &&
     (DAT_00424678 = (code *)FUN_00405b08("RtlNtStatusToDosErrorNoTeb"), DAT_00424678 == (code *)0x0
     )) {
    ExceptionList = local_10;
    return;
  }
  pcVar1 = DAT_00424678;
  (*(code *)PTR_guard_check_icall_004263b4)(param_1,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405c30 */

undefined4 FUN_00405c30(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421215;
  local_10 = ExceptionList;
  uVar2 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_004253cc == (code *)0x0) &&
     (DAT_004253cc = (code *)FUN_00405b08("RtlDllShutdownInProgress"), DAT_004253cc == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_004253cc;
  (*(code *)PTR_guard_check_icall_004263b4)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_00405ca0 */

void FUN_00405ca0(undefined1 *param_1)

{
  FARPROC pFVar1;
  uint uVar2;
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
  
  puStack_c = &LAB_00421238;
  local_10 = ExceptionList;
  uVar2 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_004246f0;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_004246f4 == (FARPROC)0x0) {
    DAT_004246f4 = FUN_00405b34("WilFailureNotifyWatchers");
    if (DAT_004246f4 == (FARPROC)0x0) goto LAB_00405d3f;
  }
  pFVar1 = DAT_004246f4;
  (*(code *)PTR_guard_check_icall_004263b4)(0,&local_34,&local_18,uVar2);
  (*pFVar1)();
LAB_00405d3f:
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



/* Function: FUN_00405d84 */

undefined4 FUN_00405d84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_00424714 == (code *)0x0) &&
     (DAT_00424714 = (code *)FUN_00405b08("NtQueryWnfStateData"), DAT_00424714 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00424714;
  (*(code *)PTR_guard_check_icall_004263b4)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00405dd8 */

undefined4 __fastcall
FUN_00405dd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_004253d4 == (code *)0x0) &&
     (DAT_004253d4 = (code *)FUN_00405b08("NtUpdateWnfStateData"), DAT_004253d4 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_004253d4;
  (*(code *)PTR_guard_check_icall_004263b4)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00405e31 */

void __fastcall FUN_00405e31(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_EDX;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 local_3c [10];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042125b;
  local_10 = ExceptionList;
  local_14 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = *param_2;
  do {
    LOCK();
    uVar1 = *param_2;
    bVar8 = uVar4 == uVar1;
    if (bVar8) {
      *param_2 = uVar4 & 0xffc0401e;
      uVar1 = uVar4;
    }
    UNLOCK();
    uVar4 = uVar1;
  } while (!bVar8);
  uVar4 = uVar1 >> 1 & 0xf;
  if (uVar4 != 0) {
    puVar7 = param_2 + 1;
    uVar2 = *puVar7;
    do {
      LOCK();
      uVar3 = *puVar7;
      bVar8 = uVar2 == uVar3;
      if (bVar8) {
        *puVar7 = uVar2 | uVar4;
        uVar3 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar3;
    } while (!bVar8);
    uVar4 = uVar4 & ~uVar3;
  }
  puVar5 = &local_44;
  if ((uVar4 & 1) != 0) {
    puVar5 = local_3c;
    local_40[0] = 2;
    local_40[1] = 1;
    local_44 = param_1;
  }
  if ((uVar4 & 2) != 0) {
    *puVar5 = param_1;
    *(undefined2 *)(puVar5 + 1) = 6;
    *(undefined2 *)((int)puVar5 + 6) = 1;
    puVar5 = puVar5 + 2;
  }
  if ((uVar4 & 4) != 0) {
    *puVar5 = param_1;
    *(undefined2 *)(puVar5 + 1) = 3;
    *(undefined2 *)((int)puVar5 + 6) = 1;
    puVar5 = puVar5 + 2;
  }
  if (7 < uVar4) {
    *puVar5 = param_1;
    *(undefined2 *)(puVar5 + 1) = 7;
    *(undefined2 *)((int)puVar5 + 6) = 1;
    puVar5 = puVar5 + 2;
  }
  uVar4 = uVar1 >> 5;
  if ((uVar4 & 0x1ff) != 0) {
    *puVar5 = param_1;
    uVar4 = uVar4 & 0x1ff;
    *(short *)((int)puVar5 + 6) = (short)uVar4;
    *(short *)(puVar5 + 1) = (short)((uVar1 >> 0xe & 1) << 2);
    puVar5 = puVar5 + 2;
  }
  if ((uVar1 >> 0xf & 0x7f) != 0) {
    *puVar5 = param_1;
    *(ushort *)((int)puVar5 + 6) = (ushort)(uVar1 >> 0xf) & 0x7f;
    *(ushort *)(puVar5 + 1) = (ushort)((uVar1 >> 0x16 & 1) << 2) | 1;
    puVar5 = puVar5 + 2;
  }
  iVar6 = (int)puVar5 - (int)&local_44 >> 3;
  if (0 < iVar6) {
    FUN_004086ba((int)&local_44,iVar6);
    uVar4 = extraout_EDX;
  }
  ExceptionList = local_10;
  FUN_004200b0(local_14 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00405f73 */

void __fastcall FUN_00405f73(uint *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_28 [8];
  uint *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  local_18 = (uint)(param_3 == 0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_1c = param_2;
  if (DAT_00424674 == (code *)0x0) {
    DAT_00424674 = (code *)FUN_00405b08("RtlQueryFeatureConfiguration");
    if (DAT_00424674 == (code *)0x0) {
      iVar2 = -0x3ffffec7;
      goto LAB_00406046;
    }
  }
  pcVar1 = DAT_00424674;
  (*(code *)PTR_guard_check_icall_004263b4)(local_1c,local_18,local_28,&local_14);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    *param_1 = local_10 >> 4 & 3;
    *(byte *)(param_1 + 1) = (byte)(local_10 >> 8) & 0x3f;
    param_1[3] = local_c;
    param_1[2] = local_10 >> 0xe & 3;
    param_1[5] = local_10 >> 6 & 1;
    param_1[4] = local_10 >> 7 & 1;
  }
  else if (iVar2 == 0x117) {
    param_1[4] = local_10 >> 7 & 1;
  }
LAB_00406046:
  if (local_20 != (uint *)0x0) {
    *local_20 = (uint)(iVar2 != -0x7fffffde);
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,iVar2);
  return;
}



/* Function: FUN_00406073 */

undefined4 __fastcall FUN_00406073(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_00424670 == (code *)0x0) &&
     (DAT_00424670 = (code *)FUN_00405b08("RtlNotifyFeatureUsage"), DAT_00424670 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00424670;
  (*(code *)PTR_guard_check_icall_004263b4)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_004060e0 */

void FUN_004060e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if ((DAT_00424730 == (FARPROC)0x0) &&
     (DAT_00424730 = FUN_00405b34("LogStagedFeatureUsage"), DAT_00424730 == (FARPROC)0x0)) {
    return;
  }
  pFVar1 = DAT_00424730;
  (*(code *)PTR_guard_check_icall_004263b4)(param_1,param_2,param_3);
  (*pFVar1)();
  return;
}



/* Function: FUN_00406124 */

void FUN_00406124(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00405a35(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406151 */

void FUN_00406151(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00405a35(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040617c */

int __fastcall FUN_0040617c(void *param_1,int *param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  iVar1 = FUN_00406397(param_1,local_c);
  if (iVar1 < 0) {
    FUN_0040599f(unaff_retaddr,100);
    FUN_0040599f(unaff_retaddr,0x6d);
  }
  else {
    *param_2 = local_c[0] << 2;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_004061d4 */

void __thiscall FUN_004061d4(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

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
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_00405afc();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004046b3(local_214,0x104,this,param_1);
  FUN_004045a3(local_214,0x104,0x401748);
  uVar5 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  iVar3 = FUN_0040d315(this,uVar5,uVar2,local_214);
  uVar4 = extraout_EDX;
  if (iVar3 < 0) {
    FUN_0040599f(unaff_retaddr,0x88);
    uVar4 = extraout_EDX_00;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040627c */

undefined4 __fastcall FUN_0040627c(HANDLE param_1,int *param_2)

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
    goto LAB_0040629f;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_0040629f:
        uVar2 = FUN_004059eb(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_0040636d:
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
        goto LAB_0040629f;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_0040629f;
          }
          if (DVar1 == 0) goto LAB_0040636d;
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
  FUN_0040599f(unaff_retaddr,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_00406397 */

void __thiscall FUN_00406397(void *this,int *param_1)

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
  
  local_c = DAT_00424140 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_004046b3(local_218,0x104,this,(int)this);
  FUN_004045a3(local_218,0x104,0x401748);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar4 = extraout_EDX;
    if (DVar2 != 2) {
      FUN_004059eb(unaff_retaddr,0xcd);
      uVar4 = extraout_EDX_00;
    }
LAB_00406441:
    if (pvVar1 == (HANDLE)0x0) goto LAB_0040645b;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_0040627c(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_0040599f(unaff_retaddr,0xd3);
      uVar4 = extraout_EDX_01;
      goto LAB_00406441;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00406124(pvVar1);
  uVar4 = extraout_EDX_02;
LAB_0040645b:
  FUN_004200b0(local_c ^ (uint)auStack_224,uVar4);
  return;
}



/* Function: FUN_0040647a */

void __thiscall FUN_0040647a(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_00405190(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_00405172(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_00405172(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00404a7e(8,(SIZE_T)pcVar4);
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
    FUN_0040e334(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_0040e334(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_0040e2c4(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_0040656d */

void __fastcall FUN_0040656d(int param_1)

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



/* Function: FUN_004065dc */

void __thiscall FUN_004065dc(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00404a7e(8,0xdc);
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
    FUN_0040647a(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_0040669a */

DWORD * __fastcall FUN_0040669a(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_00424698;
  if (DAT_00424698 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_00424698[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_0040d5c6(*DAT_00424698,&local_8);
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



/* Function: FUN_00406723 */

uint __fastcall FUN_00406723(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00406723(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_00424184 + 1;
        DAT_00424184 = DAT_00424184 + 1;
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



/* Function: FUN_004067e2 */

void __fastcall FUN_004067e2(int param_1,char *param_2,int param_3)

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
  puStack_c = &LAB_00421288;
  local_10 = ExceptionList;
  uVar3 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ppvVar5 = &local_10;
  ExceptionList = ppvVar5;
  *param_2 = '\0';
  iVar7 = DAT_004246ac;
  local_11 = 0;
  if (DAT_004246ac != 0) {
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
      uVar6 = FUN_00406723(param_1,*pDVar9,param_2,param_3);
      if ((char)uVar6 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar9;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_004263b4)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
      ppvVar5 = (void **)0x0;
    }
  }
  pcVar1 = DAT_004246b4;
  if (DAT_004246b4 != (code *)0x0) {
    uVar8 = (uint3)((uint)ppvVar5 >> 8);
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    (*(code *)PTR_guard_check_icall_004263b4)(iVar7,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004068e0 */

void FUN_004068e0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_004067e2((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_004253d8 != DVar2) {
    LOCK();
    iVar1 = DAT_004253e8 + 1;
    UNLOCK();
    iVar3 = DAT_004253e8 + 1;
    DAT_004253e8 = iVar1;
    if (iVar3 < 4) {
      DAT_004253d8 = DVar2;
      this = FUN_0040669a(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_004065dc(this,param_1);
      }
      DAT_004253d8 = 0;
    }
    LOCK();
    DAT_004253e8 = DAT_004253e8 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00406945 */

void __fastcall FUN_00406945(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_00406991 */

undefined4 __thiscall FUN_00406991(void *this,uint param_1)

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
    _Dst = FUN_00404a7e(0,_DstSize);
    if (_Dst == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    _MaxCount = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    memcpy_s(_Dst,_DstSize,*this,_MaxCount);
    FUN_0040d24f((void *)((int)this + 0xc),(int)_Dst);
    *(LPVOID *)this = _Dst;
    *(rsize_t *)((int)this + 4) = _MaxCount + (int)_Dst;
    *(SIZE_T *)((int)this + 8) = (int)_Dst + _DstSize;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_00406a1c */

undefined4 __thiscall FUN_00406a1c(void *this,uint param_1)

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
    uVar2 = FUN_00406991(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00406a52 */

undefined4 __thiscall FUN_00406a52(void *this,void *param_1,uint param_2)

{
  void *_Dst;
  undefined4 uVar1;
  errno_t eVar2;
  
  uVar1 = FUN_00406a1c(this,param_2);
  if ((char)uVar1 != '\0') {
    _Dst = *(void **)((int)this + 4);
    eVar2 = memcpy_s(_Dst,-(uint)(_Dst < *(void **)((int)this + 8)) &
                          *(int *)((int)this + 8) - (int)_Dst,param_1,param_2);
    uVar1 = CONCAT31((int3)((uint)eVar2 >> 8),1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return uVar1;
}



/* Function: FUN_00406a97 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00406a97(int *param_1)

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
  
  local_c = DAT_00424140 ^ (uint)&local_102c;
  iVar6 = 0;
  uVar4 = 0xc;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar8 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_00405d84(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_00406ba6;
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
LAB_00406ba6:
            piVar5 = piVar5 + 3;
            iVar8 = local_1024;
          } while (piVar5 != local_101c);
        }
        iVar6 = FUN_00405dd8(&DAT_00401f9c,local_1010,uVar7,piVar2,piVar2,local_1018,1);
        uVar4 = extraout_EDX_00;
        param_1 = local_1028;
      }
      local_1024 = iVar8 + 1;
    } while (((iVar6 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_004200b0(local_c ^ (uint)&local_102c,uVar4);
  return;
}



/* Function: FUN_00406c1c */

void FUN_00406c1c(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_00424690 == (code *)0x0) &&
     (DAT_00424690 = (code *)FUN_00405b08("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_00424690 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_00424690;
  (*(code *)PTR_guard_check_icall_004263b4)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406c5a */

int __thiscall FUN_00406c5a(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_00406c87 */

void __thiscall FUN_00406c87(void *this,int param_1)

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



/* Function: FUN_00406cd2 */

uint __fastcall FUN_00406cd2(ushort *param_1)

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



/* Function: FUN_00406cfd */

uint __thiscall FUN_00406cfd(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  undefined4 local_8;
  
  _Dst = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_00406d96;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    memcpy_s(_Dst,2,&local_8,2);
    _Dst = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)_Dst + 4);
      if (param_2 < pvVar1) goto LAB_00406d96;
      memcpy_s(_Dst,4,(void *)((int)this + 4),4);
      _Dst = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_00406d96;
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
LAB_00406d96:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_00406dc5 */

uint __thiscall FUN_00406dc5(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_00406e56;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    memcpy_s(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_00406e56;
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
    if (param_2 < puVar3) goto LAB_00406e56;
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
LAB_00406e56:
  return (uint)puVar3 & 0xffffff00;
}



/* Function: FUN_00406e70 */

undefined2 * __thiscall
FUN_00406e70(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_00406cd2(&local_18);
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



/* Function: FUN_00406eee */

void __thiscall FUN_00406eee(void *this,int param_1)

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
  FUN_0040d24f(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_0040d24f((void *)(param_1 + 0x1c),local_8);
  FUN_0040d279(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_00406f77 */

void __thiscall FUN_00406f77(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_00405ab6(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_0040701a;
  }
  if (9 < param_2) {
    return;
  }
LAB_0040701a:
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



/* Function: FUN_00407062 */

void FUN_00407062(void)

{
  ushort *puVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBX;
  int unaff_EBP;
  int iVar7;
  undefined4 unaff_retaddr;
  
  __EH_prolog3_align(0x48,8,unaff_retaddr);
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar7 = *(int *)(extraout_ECX + 0x10);
  puVar1 = *(ushort **)(extraout_ECX + 0x14);
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar7 + 10;
  *(undefined2 *)(unaff_EBP + -0x44) = *(undefined2 *)(extraout_ECX + 2);
  *(undefined1 *)(unaff_EBP + -0x42) = *(undefined1 *)(extraout_ECX + 4);
  *(undefined2 *)(unaff_EBP + -0x3c) = 0;
  *(undefined2 *)(unaff_EBP + -0x58) = *(undefined2 *)(extraout_ECX + 6);
  *(undefined1 *)(unaff_EBP + -0x56) = *(undefined1 *)(extraout_ECX + 8);
  *(undefined2 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  uVar5 = FUN_00406dc5((void *)(unaff_EBP + -0x44),(uint *)(unaff_EBP + -0x14),puVar1);
  cVar4 = (char)uVar5;
  iVar7 = extraout_ECX;
  do {
    if (cVar4 == '\0') {
      FUN_0040e732(*(int *)(unaff_EBX + 8));
LAB_0040717d:
      __EH_epilog3_align();
      return;
    }
    uVar5 = 0;
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      do {
        uVar6 = FUN_00406dc5((void *)(unaff_EBP + -0x58),(uint *)(unaff_EBP + -0x14),
                             *(ushort **)(iVar7 + 0x14));
        if ((char)uVar6 == '\0') break;
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x54);
        *(uint *)(unaff_EBP + -0x1c) = (uint)*(ushort *)(unaff_EBP + -0x50);
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x48);
        *(uint *)(unaff_EBP + -0x24) = (uint)*(ushort *)(unaff_EBP + -0x3c);
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x34);
        piVar2 = *(int **)(*(int *)(unaff_EBX + 8) + 0x40);
        *(int **)(unaff_EBP + -0x2c) = piVar2;
        if (piVar2 == (int *)0x0) {
          FUN_00405afc();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = *(code **)(*piVar2 + 0x10);
        (*(code *)PTR_guard_check_icall_004263b4)
                  (unaff_EBP + -0x28,unaff_EBP + -0x24,unaff_EBP + -0x20,unaff_EBP + -0x1c,
                   unaff_EBP + -0x18);
        cVar4 = (*pcVar3)();
        if (cVar4 == '\0') {
          FUN_0040e732(*(int *)(unaff_EBX + 8));
          goto LAB_0040717d;
        }
        iVar7 = *(int *)(unaff_EBP + -0x30);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(unaff_EBP + -0x40));
    }
    uVar5 = FUN_00406dc5((void *)(unaff_EBP + -0x44),(uint *)(unaff_EBP + -0x14),
                         *(ushort **)(iVar7 + 0x14));
    cVar4 = (char)uVar5;
  } while( true );
}



/* Function: FUN_00407191 */

undefined4 __thiscall
FUN_00407191(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_0040749d(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_00406a1c(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_00406f77(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_0040d24f((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_0040d279(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_00406a1c((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_0040749d(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00407249 */

uint __thiscall FUN_00407249(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_00406dc5(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_00406c5a(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_004072d4 */

uint __thiscall
FUN_004072d4(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_00406dc5(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_00406c87(param_1,local_c);
          uVar1 = local_14;
          goto LAB_004073ca;
        }
        local_14 = FUN_00406c5a(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_004073ca;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00406c87(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_00407249(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_00406dc5(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_00406c5a(&local_28,param_3,param_4);
LAB_004073ca:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_00406c87(&local_28,local_24 + param_5);
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



/* Function: FUN_0040740a */

uint __thiscall FUN_0040740a(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_00406dc5(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_00406c87(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00406c87(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_0040749d */

uint __thiscall
FUN_0040749d(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar3 = FUN_00406dc5(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar3 == '\0') break;
      iVar2 = FUN_00406c5a(&local_24,param_1,param_2);
      if (iVar2 < 0) {
LAB_004075fb:
        local_c = pvVar4;
        if ((char)uVar3 != '\0') goto LAB_00407528;
        break;
      }
      if (iVar2 == 0) {
        pvVar4 = (void *)FUN_004072d4(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          bVar1 = true;
          local_5 = '\x01';
          goto LAB_004075fb;
        }
        goto LAB_004075ed;
      }
      pvVar4 = (void *)FUN_0040740a(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_00407528:
    pvVar4 = local_c;
    local_10 = 0;
    if (!bVar1) {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      local_10 = FUN_00406cd2(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    uVar3 = FUN_00406cd2(&local_38);
    in_EAX = *(uint *)((int)this + 0x18);
    uVar3 = uVar3 + local_10;
    if (uVar3 <= (-(uint)(*(uint *)((int)this + 0x14) < in_EAX) &
                 in_EAX - *(int *)((int)this + 0x14))) {
      memmove_s((void *)(uVar3 + (int)pvVar4),(in_EAX - uVar3) - (int)pvVar4,pvVar4,
                *(int *)((int)this + 0x14) - (int)pvVar4);
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + uVar3);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_00406cfd(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_00406c87(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_00406cfd(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_004075ed:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_0040763f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040763f(uint param_1,int param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined **local_10c0;
  undefined4 *local_10bc;
  undefined4 *puStack_10b8;
  undefined1 *puStack_10b4;
  undefined ***local_1088;
  undefined1 local_107c [16];
  int local_106c;
  int local_1068;
  int local_1060;
  char local_105c;
  char local_105b;
  undefined4 *local_1058;
  undefined4 *local_1054;
  undefined1 *local_1050;
  uint local_104c;
  undefined2 *local_1048;
  undefined4 local_1044;
  undefined4 local_1040;
  undefined4 local_103c;
  uint local_1038;
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
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00421311;
  local_1c = ExceptionList;
  local_24 = DAT_00424140 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_104c = param_1 + param_2 * 8;
  local_1038 = 0;
  local_1044 = 0;
  local_1048 = param_3;
  local_1034 = param_1;
  while( true ) {
    FUN_00406e70(local_107c,*local_1048,local_1048[1],*(undefined1 *)(local_1048 + 2),local_1048[3],
                 *(undefined1 *)(local_1048 + 4));
    local_14 = 0;
    local_1030 = 0x1000;
    uVar2 = FUN_00405d84(extraout_ECX,&local_103c,local_1028,&local_1030);
    FUN_00404e01(uVar2);
    if (uVar2 != 0) {
      local_103c = 0;
      local_1030 = 0;
    }
    FUN_00406f77(local_107c,local_1028,local_1030,0x1000);
    if (local_105b != '\0') break;
    local_10bc = &local_1040;
    local_1040 = 0;
    puStack_10b8 = &local_1044;
    local_10c0 = &PTR_FUN_00401020;
    puStack_10b4 = local_107c;
    local_1088 = &local_10c0;
    local_1058 = local_10bc;
    local_1054 = puStack_10b8;
    local_1050 = puStack_10b4;
    local_1029 = FUN_00407062();
    uVar2 = local_1034;
    if (local_105c == '\0') {
LAB_00407817:
      uVar2 = uVar2 + 8;
      local_1044 = local_1040;
      local_1034 = uVar2;
    }
    else {
      iVar3 = local_1068 - local_106c;
      iVar3 = FUN_00405dd8(local_1034,local_106c,iVar3,iVar3,iVar3,local_103c,1);
      if (iVar3 != -0x3fffffff) {
        if (iVar3 != 0) {
          FUN_00405dd8(uVar2,local_106c,local_1068 - local_106c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_00407817;
      }
      local_1038 = local_1038 + 1;
      local_1029 = '\0';
    }
    uVar1 = local_1038;
    local_14 = 0xffffffff;
    FUN_0040d279(&local_1060);
    uVar4 = extraout_EDX;
    if (((local_1029 != '\0') || (local_104c <= uVar2)) || (0x31 < uVar1)) goto LAB_0040786e;
  }
  FUN_0040d279(&local_1060);
  uVar4 = extraout_EDX_00;
LAB_0040786e:
  ExceptionList = local_1c;
  FUN_004200b0(local_24 ^ (uint)&stack0xfffffff0,uVar4);
  return;
}



/* Function: FUN_00407894 */

void __fastcall FUN_00407894(int param_1)

{
  FUN_0040d279((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_004078a2 */

void * __fastcall FUN_004078a2(void *param_1)

{
  FUN_00406e70(param_1,0,4,1,4,0);
  FUN_00406e70((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_00406e70((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_004078e4 */

void __fastcall FUN_004078e4(undefined2 *param_1,undefined4 param_2)

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
  
  local_c = DAT_00424140 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_00401f3c;
    local_3c = DAT_00401f38;
    local_30 = DAT_00401f2c;
    local_34 = DAT_00401f28;
    local_28 = DAT_00401f5c;
    local_2c = DAT_00401f58;
    FUN_0040763f((uint)&local_3c,3,param_1);
    param_2 = extraout_EDX;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00401f60;
    local_34 = DAT_00401f10;
    local_38 = DAT_00401f64;
    local_2c = DAT_00401f30;
    local_30 = DAT_00401f14;
    local_28 = DAT_00401f34;
    FUN_0040763f((uint)&local_3c,3,param_1 + 0x12);
    param_2 = extraout_EDX_00;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00401f50;
    local_34 = DAT_00401f08;
    local_38 = DAT_00401f54;
    local_2c = DAT_00401f40;
    local_30 = DAT_00401f0c;
    local_24 = DAT_00401f18;
    local_28 = DAT_00401f44;
    local_1c = DAT_00401f20;
    local_20 = DAT_00401f1c;
    local_14 = DAT_00401f48;
    local_18 = DAT_00401f24;
    local_10 = DAT_00401f4c;
    FUN_0040763f((uint)&local_3c,6,param_1 + 0x24);
    param_2 = extraout_EDX_01;
  }
  FUN_004200b0(local_c ^ (uint)&local_3c,param_2);
  return;
}



/* Function: FUN_00407a3a */

void __thiscall FUN_00407a3a(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_00406a52(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_00407ab1 */

void __thiscall FUN_00407ab1(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_00407b10 */

void __thiscall FUN_00407b10(void *this,PSRWLOCK param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int local_20;
  code *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004211cf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
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
      local_1c = (code *)0x0;
      if (uVar3 < uVar2) {
        do {
          piVar1 = (int *)(*(int *)((int)this + 0x18) + uVar3 * 8);
          uVar3 = uVar3 + 1;
          if (*piVar1 != 0) {
            local_1c = (code *)*piVar1;
            local_20 = piVar1[1];
            goto LAB_00407bb4;
          }
        } while (uVar3 < uVar2);
      }
      local_20 = 0;
LAB_00407bb4:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_1c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_004263b4)(local_20);
        (*local_1c)();
      }
      if (this != (void *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
    } while (uVar3 < uVar2);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407c12 */

void __fastcall FUN_00407c12(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421189;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00407c73(param_1);
  FUN_0040d279((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_00407e18((int)param_1 + 4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407c73 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00407c73(void *param_1)

{
  undefined4 extraout_EDX;
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x407c7f;
  FUN_004078a2(local_7c);
  local_8 = 0;
  FUN_00407dcb(param_1,local_7c);
  FUN_004078e4(local_7c,extraout_EDX);
  FUN_00407e18((int)local_7c);
  return;
}



/* Function: FUN_00407cb4 */

undefined1 __thiscall FUN_00407cb4(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_0040d22d((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_0040d20a((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_00407d0d */

undefined1 __thiscall FUN_00407d0d(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_00407d78((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_00407cb4(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00407d78 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00407d78(PSRWLOCK param_1)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar1;
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x407d84;
  FUN_004078a2(local_7c);
  local_8 = 0;
  AcquireSRWLockExclusive(param_1);
  FUN_00407dcb(param_1,local_7c);
  uVar1 = extraout_EDX;
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
    uVar1 = extraout_EDX_00;
  }
  FUN_004078e4(local_7c,uVar1);
  FUN_00407e18((int)local_7c);
  return;
}



/* Function: FUN_00407dcb */

void __thiscall FUN_00407dcb(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_00406eee(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_00406eee((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_00406eee((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_00407e18 */

void __fastcall FUN_00407e18(int param_1)

{
  FUN_0040d279((int *)(param_1 + 100));
  FUN_0040d279((int *)(param_1 + 0x40));
  FUN_0040d279((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_00407e3c */

void __fastcall FUN_00407e3c(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00421371;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_0040d299(this,0);
  FUN_0040d299(param_1 + 0x1c,0);
  FUN_0040d279((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_004083ab(*(int *)(param_1 + 0x78));
  }
  FUN_0040d279((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00406c1c(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_0040d279((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0040dd30(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*this != 0) {
    FUN_0040dd30((PTP_TIMER)*this);
  }
  local_8 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0040d8b0(*(int **)(param_1 + 8));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407f0e */

void __thiscall FUN_00407f0e(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421189;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    bVar1 = FUN_00408148((int)this);
    if (bVar1) {
      cVar2 = FUN_00407d0d(*(void **)((int)this + 0xc),param_1,param_2,param_3);
      if (cVar2 != '\0') {
        cVar2 = FUN_004051b8();
        if (cVar2 == '\0') {
          SRWLock = (PSRWLOCK)((int)this + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          FUN_004081d5(this);
          if (SRWLock != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(SRWLock);
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407f9a */

void __thiscall FUN_00407f9a(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_004051b8(), cVar1 == '\0')) &&
     (bVar2 = FUN_00408148((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_00407a3a(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x408360,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_00407a3a((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040803a */

void __fastcall FUN_0040803a(int param_1)

{
  char cVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421215;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004051b8();
  if (cVar1 == '\0') {
    bVar2 = FUN_00408148(param_1);
    if (bVar2) {
      FUN_00407b10(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_00407d78(*(PSRWLOCK *)(param_1 + 0xc));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004080a2 */

void __fastcall
FUN_004080a2(char *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5)

{
  PSRWLOCK SRWLock;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421394;
  local_10 = ExceptionList;
  local_14 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*param_1 != '\0') {
    cVar1 = FUN_004051b8();
    param_2 = extraout_EDX;
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)(param_1 + 0x14);
      AcquireSRWLockExclusive(SRWLock);
      local_1a = 0;
      local_20 = param_3;
      local_1c = param_4;
      local_18 = param_5;
      FUN_00406a52(param_1 + 0x7c,&local_20,0xc);
      FUN_00408236(param_1);
      param_2 = extraout_EDX_00;
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
        param_2 = extraout_EDX_01;
      }
    }
  }
  ExceptionList = local_10;
  FUN_004200b0(local_14 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00408148 */

bool __fastcall FUN_00408148(int param_1)

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
        iVar1 = FUN_0040d781(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_004081d5 */

void __fastcall FUN_004081d5(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040e760,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040d299(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00406945(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_00408236 */

void __fastcall FUN_00408236(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040e7a0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040d299(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00406945(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_004082a0 */

void FUN_004082a0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00407b10(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_004082c3 */

bool __fastcall FUN_004082c3(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar3 = DAT_00424688;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004213c1;
  local_10 = ExceptionList;
  uVar2 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(param_1 + 0x4c);
  iVar4 = 0;
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar3 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_00405b08("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_00424688 = pcVar3, pcVar3 == (code *)0x0)) {
      iVar4 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_004263b4)(FUN_004082a0,param_1,0,piVar1,uVar2);
      iVar4 = (*pcVar3)();
    }
  }
  ExceptionList = local_10;
  return iVar4 == 0;
}



/* Function: FUN_00408360 */

void FUN_00408360(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00407b10(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00408383 */

LPCRITICAL_SECTION __fastcall FUN_00408383(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_004083ab */

void FUN_004083ab(int param_1)

{
  if ((param_1 != 0) && (DAT_004257d0 != (PSRWLOCK)0x0)) {
    FUN_00407ab1(DAT_004257d0 + 0x1c,DAT_004257d0,param_1);
  }
  return;
}



/* Function: FUN_004083d6 */

bool __fastcall
FUN_004083d6(uint *param_1,undefined4 param_2,byte param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  bool bVar6;
  undefined4 local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  
  puVar5 = &DAT_004253f8;
  if (param_4 != 0) {
    puVar5 = &DAT_00424680;
  }
  local_c = param_1;
  if ((*puVar5 & 2) != 0) {
    if ((*puVar5 & 1) == 0) {
      return false;
    }
    *param_5 = 1;
    iVar2 = FUN_00405f73(param_1,param_2,(uint)param_3,(uint *)0x0);
    return iVar2 != 0;
  }
  iVar2 = FUN_004089a2();
  local_8 = 0;
  *param_5 = 1;
  iVar3 = FUN_00405f73(local_c,param_2,(uint)param_3,&local_8);
  bVar6 = iVar3 != 0;
  LOCK();
  uVar1 = *puVar5;
  *puVar5 = (local_8 != 0) + 6;
  UNLOCK();
  if (local_8 != 0) {
    return bVar6;
  }
  if ((uVar1 & 4) != 0) {
    return bVar6;
  }
  if (DAT_00424200 == '\0') {
    return bVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((iVar2 != 0) && (iVar2 == DAT_00424210)) {
    local_14 = 0;
    local_10 = puVar5;
    uVar4 = FUN_00406a52(&DAT_0042422c,&local_14,8);
    if ((char)uVar4 != '\0') goto LAB_004084ae;
  }
  LOCK();
  *puVar5 = *puVar5 & 0xfffff7c1;
  UNLOCK();
LAB_004084ae:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  return bVar6;
}



/* Function: FUN_004084d0 */

uint FUN_004084d0(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint local_20 [4];
  int local_10;
  int local_c;
  uint local_8;
  
  if (((param_2 & 0xffffff7f) == 3) || (local_8 = local_8 & 0xffffff00, (param_2 & 0xffffff7f) == 2)
     ) {
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  uVar3 = local_8;
  puVar4 = local_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  bVar1 = FUN_004083d6(local_20,param_1,(byte)uVar3,param_2 >> 7 & 1,param_3);
  uVar3 = 0;
  if (bVar1) {
    uVar3 = local_20[0];
  }
  if (local_10 != 0) {
    uVar3 = uVar3 | 0x80;
  }
  if (local_c != 0) {
    uVar3 = uVar3 | 0x40;
  }
  return uVar3;
}



/* Function: FUN_00408550 */

void FUN_00408550(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_0040803a(0x4257c4);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_00406073(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_00407f0e(&DAT_004257c4,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_004080a2(&DAT_004257c4,param_2 >> 0x1f,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_004085d0 */

void FUN_004085d0(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_00407f9a(&DAT_004257c4,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_004257c4 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_004257d4);
      bVar1 = FUN_004082c3(0x4257c4);
      if (bVar1) {
        FUN_00407a3a(&DAT_004257e8,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004257d4);
    }
  }
  return;
}



/* Function: FUN_00408640 */

void FUN_00408640(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_004257c4 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_00425814;
  }
  else {
    if (DAT_004257c4 == '\0') {
      return;
    }
    this = &DAT_004257e8;
  }
  FUN_00407ab1(this,(PSRWLOCK)&DAT_004257d4,param_1);
  return;
}



/* Function: FUN_00408684 */

void __fastcall FUN_00408684(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_004246f8;
  if ((DAT_004246f8 != (code *)0x0) || (pcVar1 = DAT_00424720, DAT_00424720 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_1,param_2,param_3,0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004086ba */

void FUN_004086ba(int param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ushort *)(param_1 + 4);
    do {
      FUN_00408684(*(undefined4 *)(puVar1 + -2),(uint)*puVar1,(uint)puVar1[1]);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Function: FUN_004086f3 */

void __fastcall FUN_004086f3(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_00424710;
  if ((DAT_00424710 == (code *)0x0) && (pcVar1 = DAT_0042472c, DAT_0042472c == (code *)0x0)) {
    *param_1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004263b4)(param_1,param_2,param_3);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040872b */

void FUN_0040872b(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_004253ec;
  if ((DAT_004253ec != (code *)0x0) || (pcVar1 = DAT_004253f0, DAT_004253f0 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004263b4)(param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040875d */

void __fastcall FUN_0040875d(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004213e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 8);
  *param_1 = 0;
  FUN_0040d299(this,0);
  *param_1 = 0;
  FUN_00408927((int)param_1);
  FUN_0040d279((int *)(param_1 + 0x38));
  FUN_0040d279((int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x18) != 0) {
    local_8 = 0;
    FUN_0040872b(*(undefined4 *)(param_1 + 0x18));
    local_8 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    local_8 = 1;
    FUN_0040872b(*(undefined4 *)(param_1 + 0x14));
  }
  if (*this != 0) {
    FUN_0040dd30((PTP_TIMER)*this);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004087fe */

void __fastcall FUN_004087fe(char *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = *(int **)(param_1 + 0x30);
    for (piVar2 = *(int **)(param_1 + 0x2c); piVar2 != piVar1; piVar2 = piVar2 + 2) {
      uVar4 = 0xfffff7c1;
      if (*piVar2 != 0) {
        uVar4 = 0xfffffffb;
      }
      LOCK();
      *(uint *)piVar2[1] = *(uint *)piVar2[1] & uVar4;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
    iVar3 = 1;
    if (*(int *)(param_1 + 0x10) + 1 != 0) {
      iVar3 = *(int *)(param_1 + 0x10) + 1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00408863 */

undefined4 __fastcall FUN_00408863(char *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421166;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_1 + 0x14);
    if (*piVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (SRWLock == (PSRWLOCK)0x0) {
        ExceptionList = local_10;
        return uVar2;
      }
      ReleaseSRWLockExclusive(SRWLock);
      ExceptionList = local_10;
      return uVar2;
    }
    piVar3 = FUN_0040d13d(piVar1);
    FUN_004086f3(piVar3,FUN_00408910,param_1);
    if (*piVar1 != 0) {
      param_1[0x10] = '\x01';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      if (SRWLock == (PSRWLOCK)0x0) {
        ExceptionList = local_10;
        return 1;
      }
      ReleaseSRWLockExclusive(SRWLock);
      ExceptionList = local_10;
      return 1;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  ExceptionList = local_10;
  return 0;
}



/* Function: FUN_00408910 */

void FUN_00408910(char *param_1)

{
  FUN_004087fe(param_1);
  return;
}



/* Function: FUN_00408927 */

void __fastcall FUN_00408927(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421166;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (7 < (uint)((int)puVar1 - (int)puVar2)) {
    for (; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      FUN_00405e31(*puVar2,(uint *)puVar2[1]);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    FUN_00408684(0,0xfe,0);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004089a2 */

void FUN_004089a2(void)

{
  if (DAT_00424210 == 0) {
    FUN_00408863(&DAT_00424200);
    return;
  }
  return;
}



/* Function: FUN_004089c0 */

void FUN_004089c0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  FUN_00408684(param_1,param_2 | 0x40000000,param_3);
  return;
}



/* Function: FUN_004089e4 */

int __fastcall FUN_004089e4(short *param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  iVar2 = 0;
  if (param_1 != (short *)0x0) {
    iVar1 = FUN_0040466a(param_1,0x7fffffff,&local_8);
    if (-1 < iVar1) {
      iVar2 = local_8;
    }
  }
  return iVar2;
}



/* Function: FUN_00408a14 */

int __fastcall FUN_00408a14(PCNZWCH param_1,PCNZWCH param_2,uint param_3)

{
  WCHAR WVar1;
  int iVar2;
  PCNZWCH pWVar3;
  uint cchCount2;
  uint cchCount1;
  
  if ((param_1 == (PCNZWCH)0x0) || (param_2 == (PCNZWCH)0x0)) {
    SetLastError(0x57);
    iVar2 = 0;
  }
  else {
    pWVar3 = param_1;
    do {
      WVar1 = *pWVar3;
      pWVar3 = pWVar3 + 1;
    } while (WVar1 != L'\0');
    cchCount1 = (int)pWVar3 - (int)(param_1 + 1) >> 1;
    pWVar3 = param_2;
    do {
      WVar1 = *pWVar3;
      pWVar3 = pWVar3 + 1;
    } while (WVar1 != L'\0');
    cchCount2 = (int)pWVar3 - (int)(param_2 + 1) >> 1;
    if (param_3 < cchCount1) {
      cchCount1 = param_3;
    }
    if (param_3 < cchCount2) {
      cchCount2 = param_3;
    }
    iVar2 = CompareStringW(0x7f,1,param_1,cchCount1,param_2,cchCount2);
    iVar2 = iVar2 + -2;
  }
  return iVar2;
}



/* Function: FUN_00408a8c */

void FUN_00408a8c(void)

{
  int *_Memory;
  
  if (DAT_004242c8 != 0) {
    do {
      _Memory = (int *)FUN_00404276(&DAT_004242c0);
      if (_Memory != (int *)0x0) {
        FUN_0041e1ea(_Memory);
        free(_Memory);
      }
    } while (DAT_004242c8 != 0);
  }
  return;
}



/* Function: FUN_00408ac5 */

uint __fastcall FUN_00408ac5(WCHAR *param_1)

{
  int iVar1;
  uint uVar2;
  WCHAR WVar3;
  uint uVar4;
  
  uVar4 = 0;
  WVar3 = *param_1;
  if (WVar3 != L'\0') {
    do {
      if (WVar3 == L' ') {
        return uVar4;
      }
      if (WVar3 == L'\t') {
        return uVar4;
      }
      iVar1 = FUN_00408a14(param_1,L"R",1);
      uVar2 = 1;
      if (iVar1 != 0) {
        iVar1 = FUN_00408a14(param_1,L"A",1);
        if (iVar1 == 0) {
          uVar2 = 0x20;
        }
        else {
          iVar1 = FUN_00408a14(param_1,L"S",1);
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = FUN_00408a14(param_1,L"H",1);
            if (iVar1 == 0) {
              uVar2 = 2;
            }
            else {
              iVar1 = FUN_00408a14(param_1,L"C",1);
              if (iVar1 == 0) {
                uVar2 = 0x800;
              }
              else {
                iVar1 = FUN_00408a14(param_1,L"N",1);
                if (iVar1 == 0) {
                  uVar2 = 0x2000;
                }
                else {
                  iVar1 = FUN_00408a14(param_1,L"E",1);
                  if (iVar1 == 0) {
                    uVar2 = 0x4000;
                  }
                  else {
                    iVar1 = FUN_00408a14(param_1,L"T",1);
                    if (iVar1 == 0) {
                      uVar2 = 0x100;
                    }
                    else {
                      iVar1 = FUN_00408a14(param_1,L"O",1);
                      if (iVar1 != 0) {
                        return 0xffffffff;
                      }
                      uVar2 = 0x1000;
                    }
                  }
                }
              }
            }
          }
        }
      }
      param_1 = param_1 + 1;
      uVar4 = uVar2 | uVar4;
      WVar3 = *param_1;
    } while (WVar3 != L'\0');
  }
  return uVar4;
}



/* Function: FUN_00408bec */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __fastcall FUN_00408bec(short *param_1)

{
  int *this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x408bf8;
  local_20 = (int *)FUN_0041fd5e(0x70);
  if ((local_20 != (int *)0x0) && (this = FUN_00418b06(local_20), this != (int *)0x0)) {
    FUN_0040d545(local_14,param_1);
    local_8 = 0;
    FUN_0041a27a(this,local_14);
    local_8 = 0xffffffff;
    FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
    piVar1 = (int *)FUN_0041fd5e(4);
    local_20 = piVar1;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      local_8 = 1;
      FUN_0040da58(piVar1,&DAT_00424018);
      local_8 = 0xffffffff;
      FUN_0040e201(piVar1);
    }
    piVar2 = FUN_0041a4f6(this,(int *)&local_20);
    local_8 = 2;
    piVar3 = FUN_0041a4f6(this,&local_1c);
    local_8._0_1_ = 3;
    piVar2 = FUN_0040d39c(piVar2,&local_18,*(int *)(*piVar3 + -0xc) + -1);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_0040d4df(piVar1,piVar2);
    FUN_004044dc((undefined4 *)(local_18 + -0x10));
    FUN_004044dc((undefined4 *)(local_1c + -0x10));
    FUN_004044dc(local_20 + -4);
    FUN_0040474c(this);
    return piVar1;
  }
  return (int *)0x0;
}



/* Function: FUN_00408cf3 */

undefined4 __fastcall FUN_00408cf3(short *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004089e4(param_1);
  iVar2 = 0;
  if (3 < iVar1) {
    if (*param_1 != 0x5c) goto LAB_00408d23;
    if (param_1[1] != 0x5c) goto LAB_00408d23;
    if (param_1[2] != 0x3f) goto LAB_00408d23;
    iVar2 = 4;
  }
  while( true ) {
    if (iVar1 <= iVar2) {
      return 0;
    }
LAB_00408d23:
    if ((param_1[iVar2] == 0x2a) || (param_1[iVar2] == 0x3f)) break;
    iVar2 = iVar2 + 1;
  }
  return 1;
}



/* Function: FUN_00408d46 */

undefined4 __fastcall FUN_00408d46(short *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004089e4(param_1);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if ((param_1[iVar2] == 0x5c) || (param_1[iVar2] == 0x2f)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}



/* Function: FUN_00408d78 */

void __fastcall FUN_00408d78(int param_1,LPFILETIME param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  _FILETIME local_24;
  undefined4 local_1c;
  SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1 / 100;
  iVar4 = param_1 % 100;
  local_24.dwHighDateTime = 100;
  iVar5 = iVar1 % 100;
  uVar2 = iVar1 / 100;
  iVar1 = iVar1 % 100;
  if ((((iVar5 < 1) || (0xc < iVar5)) || (iVar4 < 1)) ||
     ((*(int *)(&DAT_00401f68 + iVar5 * 4) < iVar4 || ((int)uVar2 < 0x76c)))) goto LAB_00408e42;
  local_1c = 400;
  if ((int)uVar2 % 400 != 0) {
    iVar1 = (int)uVar2 % 100;
    if (iVar1 != 0) {
      uVar3 = uVar2 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      if (uVar3 == 0) goto LAB_00408e0a;
    }
    if ((iVar5 == 2) && (0x1c < iVar4)) goto LAB_00408e42;
  }
LAB_00408e0a:
  local_18.wYear = (WORD)uVar2;
  local_18.wMonth = (WORD)iVar5;
  local_18.wDayOfWeek = 0;
  local_18.wDay = (WORD)iVar4;
  local_18.wHour = 0;
  local_18.wMinute = 0;
  local_18.wSecond = 0;
  local_18.wMilliseconds = 0;
  SystemTimeToFileTime(&local_18,&local_24);
  LocalFileTimeToFileTime(&local_24,param_2);
  iVar1 = extraout_EDX;
LAB_00408e42:
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,iVar1);
  return;
}



/* Function: FUN_00408e57 */

void __thiscall FUN_00408e57(void *this,uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  longlong lVar4;
  _SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  GetSystemTime(&local_18);
  SystemTimeToFileTime(&local_18,(LPFILETIME)this);
  if (DAT_00425484 != 0) {
    FileTimeToSystemTime((FILETIME *)this,&local_18);
    wprintf(L"\n Now = %04d/%02d/%02d %02d:%02d",(uint)local_18.wYear,(uint)local_18.wMonth,
            (uint)local_18.wDay,(uint)local_18.wHour,(uint)local_18.wMinute);
  }
  iVar2 = DAT_00425484;
  lVar4 = __allmul(param_1,param_2,0xd5964000,-0xca);
  iVar3 = (int)((ulonglong)lVar4 >> 0x20);
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  *(uint *)this = *this + (uint)lVar4;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + iVar3 + (uint)CARRY4(uVar1,(uint)lVar4);
  if (iVar2 != 0) {
    FileTimeToSystemTime((FILETIME *)this,&local_18);
    wprintf(L"\nThen = %04d/%02d/%02d %02d:%02d\n",(uint)local_18.wYear,(uint)local_18.wMonth,
            (uint)local_18.wDay,(uint)local_18.wHour,(uint)local_18.wMinute);
    iVar3 = extraout_EDX;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,iVar3);
  return;
}



/* Function: FUN_00408f2a */

ushort * __fastcall FUN_00408f2a(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *param_1 = 0;
  iVar2 = 0;
  do {
    uVar1 = *param_2;
    if ((((uVar1 == 0) || (uVar1 == 0x20)) || (uVar1 == 9)) || (9 < (ushort)(uVar1 - 0x30))) break;
    param_2 = param_2 + 1;
    iVar2 = iVar2 * 10 + -0x30 + (uint)uVar1;
    iVar3 = iVar3 + 1;
    *param_1 = iVar2;
  } while (iVar3 < 9);
  uVar1 = *param_2;
  if (((uVar1 != 0) && (uVar1 != 0x20)) && (uVar1 != 9)) {
    *param_1 = -1;
  }
  return param_2;
}



/* Function: FUN_00408fa6 */

ushort * __fastcall FUN_00408fa6(uint *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  longlong lVar3;
  int local_10;
  uint local_c;
  uint uStack_8;
  
  local_10 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_8 = 0;
  local_c = 0;
  do {
    uVar2 = *param_2;
    if ((((uVar2 == 0) || (uVar2 == 0x20)) || (uVar2 == 9)) || (9 < (ushort)(uVar2 - 0x30))) break;
    lVar3 = __allmul(local_c,uStack_8,10,0);
    uVar1 = (uint)lVar3 + (uint)uVar2;
    local_c = uVar1 - 0x30;
    *param_1 = local_c;
    uStack_8 = ((int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)uVar2)) -
               (uint)(uVar1 < 0x30);
    param_2 = param_2 + 1;
    local_10 = local_10 + 1;
    param_1[1] = uStack_8;
  } while (local_10 < 0x14);
  uVar2 = *param_2;
  if (((uVar2 != 0) && (uVar2 != 0x20)) && (uVar2 != 9)) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  return param_2;
}



/* Function: FUN_0040905c */

/* WARNING: Removing unreachable block (ram,0x004090ec) */
/* WARNING: Removing unreachable block (ram,0x0040917a) */

undefined4 __fastcall FUN_0040905c(ulonglong *param_1,ushort *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  undefined4 local_20;
  
  uVar3 = (uint)*param_2;
  cVar4 = '\0';
  if (*param_2 < 0x30) goto LAB_0040919e;
  cVar4 = '\0';
  uVar2 = 0;
  do {
    local_20 = (undefined4)uVar2;
    if (0x39 < (ushort)uVar3) {
      uVar1 = uVar2;
      if (cVar4 == '\0') goto LAB_0040919e;
      break;
    }
    uVar1 = ((uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,uVar3)) - 0x30;
    local_20 = (undefined4)uVar1;
    uVar3 = (uint)(uVar1 >> 0x20);
    if (uVar1 < uVar2) goto LAB_0040919c;
    param_2 = param_2 + 1;
    cVar4 = '\x01';
    uVar3 = (uint)*param_2;
    uVar2 = uVar1;
  } while (0x2f < *param_2);
  uVar2 = uVar1 >> 0x20;
  uVar5 = *param_2;
  if (uVar5 == 0x47) {
LAB_00409165:
    uVar1 = uVar1 << 0x1e;
LAB_00409170:
    uVar3 = (uint)uVar1;
    uVar5 = param_2[1];
    if (CONCAT44((int)uVar2,local_20) <= uVar1) goto LAB_00409180;
  }
  else {
    if (uVar5 == 0x4b) {
LAB_00409158:
      uVar1 = uVar1 << 10;
      goto LAB_00409170;
    }
    if (uVar5 == 0x4d) {
LAB_0040914b:
      uVar1 = uVar1 << 0x14;
      goto LAB_00409170;
    }
    if (uVar5 == 0x67) goto LAB_00409165;
    if (uVar5 == 0x6b) goto LAB_00409158;
    if (uVar5 == 0x6d) goto LAB_0040914b;
LAB_00409180:
    uVar3 = (uint)uVar1;
    if (((uVar5 == 0) || (uVar5 == 0x20)) || (uVar5 == 9)) {
      *param_1 = uVar1;
      goto LAB_0040919e;
    }
  }
LAB_0040919c:
  cVar4 = '\0';
LAB_0040919e:
  return CONCAT31((int3)(uVar3 >> 8),cVar4);
}



/* Function: FUN_004091ad */

void __fastcall FUN_004091ad(int param_1,int param_2,int param_3,int param_4)

{
  DWORD DVar1;
  FILE *pFVar2;
  int iVar3;
  UINT UVar4;
  short *psVar5;
  short *psVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  LPWSTR local_2c;
  wchar_t local_28 [2];
  undefined2 local_24;
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  psVar6 = (short *)(param_1 + param_2 * 2);
  if (*psVar6 != L'\0') {
    DVar1 = GetFullPathNameW(psVar6,0x104,&DAT_00424780,&local_2c);
    if ((DVar1 == 0) || (DAT_00424780 == 0)) {
      UVar4 = 0x23a1;
    }
    else {
      pwVar7 = L"wt, ccs=UNICODE";
      pwVar8 = local_28;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pwVar8 = *(undefined4 *)pwVar7;
        pwVar7 = pwVar7 + 2;
        pwVar8 = pwVar8 + 2;
      }
      if (param_3 == 1) {
        local_28[0] = L'a';
      }
      if (param_4 != 1) {
        local_24 = 0;
      }
      pFVar2 = _wfopen(&DAT_00424780,local_28);
      if (pFVar2 != (FILE *)0x0) {
        FUN_004157eb(0x5b,1);
        FUN_00415766(&DAT_00424780,0);
        FUN_00415737(L"",1);
        psVar6 = &DAT_00424780;
        do {
          psVar5 = psVar6;
          psVar6 = psVar5 + 1;
        } while (*psVar5 != 0);
        DAT_00424dac = (int)pFVar2;
        FUN_0040deb1(&DAT_004252a0,&DAT_00424780,(int)(psVar5 + -0x2123c0) >> 1);
        DAT_00425474 = (uint)(param_3 == 1);
        DAT_00425538 = (uint)(param_4 == 1);
        param_2 = extraout_EDX;
        goto LAB_004092b7;
      }
      psVar6 = &DAT_00424780;
      UVar4 = 0x23a0;
    }
    FUN_004158ca(UVar4,psVar6,(LPCWSTR)0x0);
    param_2 = extraout_EDX_00;
  }
LAB_004092b7:
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004092cd */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004092cd(PCNZWCH param_1)

{
  WCHAR WVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  LPWSTR pWVar7;
  DWORD DVar8;
  uint uVar9;
  undefined *this;
  UINT UVar10;
  void *pvVar11;
  short *psVar12;
  PCNZWCH pWVar13;
  int iVar14;
  int iVar15;
  LPWSTR *ppWVar16;
  LPWSTR local_20;
  uint local_1c;
  uint local_18;
  short *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4092d9;
  bVar3 = false;
  DAT_00424780 = 0;
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"DEBUG",-1);
  if (iVar4 == 2) {
    DAT_00425484 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"DST",-1);
  if (iVar4 == 2) {
    DAT_004254ec = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"QUIT",-1);
  if (iVar4 == 2) {
    DAT_00424fcc = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"CREATE",-1);
  if (iVar4 == 2) {
    DAT_00425584 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"REG",-1);
  if (iVar4 == 2) {
    DAT_00425478 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"UNICODE",-1);
  if (iVar4 == 2) {
    DAT_00425454 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"TBD",-1);
  if (iVar4 == 2) {
    DAT_0042544c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"FAT",-1);
  if (iVar4 == 2) {
    DAT_00425430 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"FFT",-1);
  if (iVar4 == 2) {
    DAT_00425570 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"256",-1);
  if (iVar4 == 2) {
    DAT_004254d4 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"A",-1);
  if (iVar4 == 2) {
    DAT_00425470 = 1;
    DAT_004254e4 = 0;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"M",-1);
  if (iVar4 == 2) {
    DAT_00425470 = 0;
    DAT_004254e4 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"V",-1);
  if (iVar4 == 2) {
    DAT_004254fc = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"X",-1);
  if (iVar4 == 2) {
    DAT_00425558 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"TS",-1);
  if (iVar4 == 2) {
    DAT_004254ac = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"FP",-1);
  if (iVar4 == 2) {
    DAT_00425588 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"BYTES",-1);
  if (iVar4 == 2) {
    DAT_004254dc = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NS",-1);
  if (iVar4 == 2) {
    DAT_0042550c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NC",-1);
  if (iVar4 == 2) {
    DAT_00425508 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NDL",-1);
  if (iVar4 == 2) {
    DAT_004254b8 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NFL",-1);
  if (iVar4 == 2) {
    DAT_0042556c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NJH",-1);
  if (iVar4 == 2) {
    DAT_00425428 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NJS",-1);
  if (iVar4 == 2) {
    DAT_00425434 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"L",-1);
  if (iVar4 == 2) {
    DAT_00425424 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"TEE",-1);
  if (iVar4 == 2) {
    DAT_0042552c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"SL",-1);
  if (iVar4 == 2) {
    DAT_00425544 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"SJ",-1);
  if (iVar4 == 2) {
    DAT_00425534 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"S",-1);
  if (iVar4 == 2) {
    DAT_00425510 = 1;
    DAT_00425530 = 0;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"E",-1);
  if (iVar4 == 2) {
    DAT_00425510 = 1;
    DAT_00425530 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"J",-1);
  if (iVar4 == 2) {
    DAT_004254e8 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NOOFFLOAD",-1);
  if (iVar4 == 2) {
    DAT_00425488 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NODCOPY",-1);
  if (iVar4 == 2) {
    DAT_004241a8 = 0;
    DAT_004241b4 = 0;
    DAT_00425548 = 0;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NOCOPY",-1);
  if (iVar4 == 2) {
    DAT_00424194 = 0;
    DAT_0042419c = 0;
    DAT_004241a0 = 0;
    DAT_004241a8 = 0;
    DAT_004241b4 = 0;
    DAT_004254c0 = 0;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"COPYALL",-1);
  if (iVar4 == 2) {
    DAT_004254c0 = DAT_004254c0 | 0x1f;
    DAT_00425528 = 1;
    DAT_00425414 = 0;
    DAT_00425410 = 0;
    DAT_004241b4 = 1;
    DAT_004241b0 = 0;
    DAT_004241a8 = 1;
    DAT_004241a0 = 1;
    DAT_0042419c = 1;
    DAT_00424194 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"SEC",-1);
  if (iVar4 == 2) {
    DAT_00424194 = 1;
    DAT_0042419c = 1;
    DAT_004241a0 = 1;
    DAT_004241a8 = 1;
    DAT_004241b0 = 0;
    DAT_004241b4 = 1;
    DAT_004254c0 = 6;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"SECFIX",-1);
  if (iVar4 == 2) {
    DAT_0042558c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"TIMFIX",-1);
  if (iVar4 == 2) {
    DAT_004254b4 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"MOVE",-1);
  if (iVar4 == 2) {
    DAT_0042546c = 1;
    DAT_004254c4 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"MOV",-1);
  if (iVar4 == 2) {
    DAT_004254c4 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"PURGE",-1);
  if (iVar4 == 2) {
    DAT_00425524 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"MIR",-1);
  if (iVar4 == 2) {
    DAT_004254c8 = 1;
    DAT_00425510 = 1;
    DAT_00425524 = 1;
    DAT_00425530 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"Z",-1);
  if (iVar4 == 2) {
    DAT_00425408 = 0;
    DAT_0042540c = 1;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"BX:",3);
  if (iVar4 == 0) {
    pWVar13 = param_1 + 3;
    DAT_00425404 = 0;
    WVar1 = *pWVar13;
    if (WVar1 == L'\0') {
      DAT_00425404 = 0;
      return 0;
    }
    local_18 = 9;
    do {
      if ((WVar1 == L' ') || (WVar1 == (WCHAR)local_18)) {
        if (bVar3) {
          DAT_00425408 = 1;
          return 1;
        }
        return 0;
      }
      iVar4 = FUN_00408a14(pWVar13,L"Q",1);
      if (iVar4 != 0) {
        return 0;
      }
      pWVar13 = pWVar13 + 1;
      bVar3 = true;
      DAT_00425404 = 1;
      WVar1 = *pWVar13;
    } while (WVar1 != L'\0');
    DAT_00425404 = 1;
    DAT_00425408 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"B",-1);
  if (iVar4 == 2) {
    DAT_00425408 = 1;
    DAT_0042540c = 0;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"ZB",-1);
  if (iVar4 == 2) {
    DAT_00425408 = 1;
    DAT_0042540c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"EFSRAW",-1);
  if (iVar4 == 2) {
    DAT_0042553c = 1;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"LFSM:",5);
  if (iVar4 == 0) {
    uVar5 = FUN_0040905c((ulonglong *)&local_1c,(ushort *)(param_1 + 5));
    if ((char)uVar5 != '\0') {
      DAT_00424280 = local_1c;
      DAT_00424284 = local_18;
      DAT_00424288 = 1;
      DAT_00425580 = 1;
      return 1;
    }
    return 0;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"LFSM",-1);
  if (iVar4 == 2) {
    DAT_00425580 = 1;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"IoMaxSize:",10);
  if (iVar4 == 0) {
    uVar5 = FUN_0040905c((ulonglong *)&local_1c,(ushort *)(param_1 + 10));
    if ((char)uVar5 == '\0') {
      return 0;
    }
    if (local_1c == 0 && local_18 == 0) {
      return 0;
    }
    if (local_18 != 0) {
      DAT_00425230 = 0xffffffff;
      return 1;
    }
    DAT_00425230 = local_1c;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"IoRate:",7);
  if (iVar4 == 0) {
    uVar5 = FUN_0040905c((ulonglong *)&local_1c,(ushort *)(param_1 + 7));
    if ((char)uVar5 == '\0') {
      return 0;
    }
    if (local_1c == 0 && local_18 == 0) {
      return 0;
    }
    uVar9 = local_1c >> 10 | local_18 << 0x16;
    if (local_18 >> 10 != 0) {
      return 0;
    }
    if (uVar9 < 0x200) {
      DAT_00425234 = 0x200;
      return 1;
    }
    DAT_00425234 = uVar9;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"Threshold:",10);
  if (iVar4 == 0) {
    uVar5 = FUN_0040905c((ulonglong *)&local_1c,(ushort *)(param_1 + 10));
    if ((char)uVar5 == '\0') {
      return 0;
    }
    DAT_00425238 = local_1c;
    DAT_0042523c = local_18;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NP",-1);
  if (iVar4 == 2) {
    DAT_00424190 = 0;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"ETA",-1);
  if (iVar4 == 2) {
    DAT_0042557c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"IM",-1);
  if (iVar4 == 2) {
    DAT_004241b0 = 0;
    DAT_0042554c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"IS",-1);
  if (iVar4 == 2) {
    DAT_004241ac = 0;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"IT",-1);
  if (iVar4 == 2) {
    DAT_004241b8 = 0;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XL",-1);
  if (iVar4 == 2) {
    DAT_00425578 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XX",-1);
  if (iVar4 == 2) {
    DAT_004254d0 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XO",-1);
  if (iVar4 == 2) {
    DAT_0042555c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XN",-1);
  if (iVar4 == 2) {
    DAT_00425564 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XC",-1);
  if (iVar4 == 2) {
    DAT_00425498 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NOSD",-1);
  if (iVar4 == 2) {
    DAT_00425440 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NODD",-1);
  if (iVar4 == 2) {
    DAT_00425504 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"IOFF",-1);
  if (iVar4 == 2) {
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"ITEM",-1);
  if (iVar4 == 2) {
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XJ",-1);
  if (iVar4 == 2) {
    DAT_00425554 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XJF",-1);
  if (iVar4 == 2) {
    DAT_0042549c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XJD",-1);
  if (iVar4 == 2) {
    DAT_0042541c = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"PF",-1);
  if (iVar4 == 2) {
    DAT_00425568 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"IF",-1);
  if (iVar4 == 2) {
    DAT_00425450 = 1;
    DAT_00425460 = 0;
    DAT_004254e0 = 0;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XF",-1);
  if (iVar4 == 2) {
    DAT_00425450 = 0;
    DAT_00425460 = 0;
    DAT_004254e0 = 1;
    return 1;
  }
  iVar4 = CompareStringW(0x7f,1,param_1,-1,L"XD",-1);
  if (iVar4 == 2) {
    DAT_00425450 = 0;
    DAT_00425460 = 1;
    DAT_004254e0 = 0;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"COPY:",5);
  if (iVar4 == 0) {
    pWVar13 = param_1 + 5;
    DAT_004254c0 = 0;
    DAT_004241a0 = 0;
    DAT_00424194 = 0;
    DAT_0042419c = 0;
    WVar1 = *pWVar13;
    DAT_004241b4 = 0;
    if (WVar1 == L'\0') {
      DAT_00424194 = 0;
      DAT_0042419c = 0;
      DAT_004241a0 = 0;
      DAT_004241b4 = 0;
      DAT_004254c0 = 0;
      return 1;
    }
    do {
      if ((WVar1 == L' ') || (WVar1 == L'\t')) break;
      iVar4 = FUN_00408a14(pWVar13,L"D",1);
      if (iVar4 == 0) {
        DAT_004241a0 = 1;
        DAT_0042419c = 1;
      }
      else {
        iVar4 = FUN_00408a14(pWVar13,L"A",1);
        if (iVar4 == 0) {
          DAT_004241b4 = 1;
          DAT_00424194 = 1;
        }
        else {
          iVar4 = FUN_00408a14(pWVar13,L"T",1);
          if (iVar4 == 0) {
            DAT_004241a0 = 1;
          }
          else {
            iVar4 = FUN_00408a14(pWVar13,L"X",1);
            if (iVar4 == 0) {
              DAT_00425410 = 1;
            }
            else {
              iVar4 = FUN_00408a14(pWVar13,L"S",1);
              if (iVar4 == 0) {
                DAT_004254c0 = DAT_004254c0 | 6;
              }
              else {
                iVar4 = FUN_00408a14(pWVar13,L"O",1);
                if (iVar4 == 0) {
                  DAT_004254c0 = DAT_004254c0 | 1;
                }
                else {
                  iVar4 = FUN_00408a14(pWVar13,L"U",1);
                  if (iVar4 != 0) {
                    return 0;
                  }
                  DAT_004254c0 = DAT_004254c0 | 0x18;
                }
              }
            }
          }
        }
      }
      pWVar13 = pWVar13 + 1;
      WVar1 = *pWVar13;
    } while (WVar1 != L'\0');
    if (DAT_004254c0 != 0) {
      DAT_004241b0 = 0;
      return 1;
    }
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"DCOPY:",6);
  if (iVar4 == 0) {
    pWVar13 = param_1 + 6;
    DAT_00425414 = 0;
    DAT_00425548 = 0;
    DAT_004254a8 = 0;
    DAT_004241b4 = 0;
    WVar1 = *pWVar13;
    DAT_004241a8 = 0;
    while( true ) {
      if (WVar1 == L'\0') {
        return 1;
      }
      if (WVar1 == L' ') break;
      if (WVar1 == L'\t') {
        return 1;
      }
      iVar4 = FUN_00408a14(pWVar13,L"D",1);
      if (iVar4 == 0) {
        DAT_004241a8 = 1;
      }
      else {
        iVar4 = FUN_00408a14(pWVar13,L"A",1);
        if (iVar4 == 0) {
          DAT_004241b4 = 1;
        }
        else {
          iVar4 = FUN_00408a14(pWVar13,L"T",1);
          if (iVar4 == 0) {
            DAT_004254a8 = 1;
          }
          else {
            iVar4 = FUN_00408a14(pWVar13,L"E",1);
            if (iVar4 == 0) {
              DAT_00425548 = 1;
            }
            else {
              iVar4 = FUN_00408a14(pWVar13,L"X",1);
              if (iVar4 != 0) {
                return 0;
              }
              DAT_00425414 = 1;
            }
          }
        }
      }
      pWVar13 = pWVar13 + 1;
      WVar1 = *pWVar13;
    }
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"IA:",3);
  if (iVar4 == 0) {
    uVar9 = FUN_00408ac5(param_1 + 3);
    if ((int)uVar9 < 1) {
      return 0;
    }
    DAT_00425458 = DAT_00425458 | uVar9;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"XA:",3);
  if (iVar4 == 0) {
    uVar9 = FUN_00408ac5(param_1 + 3);
    if ((int)uVar9 < 1) {
      return 0;
    }
    DAT_00425560 = DAT_00425560 | uVar9;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"A+:",3);
  if (iVar4 == 0) {
    uVar9 = FUN_00408ac5(param_1 + 3);
    if ((int)uVar9 < 1) {
      return 0;
    }
    if ((uVar9 & 0x1000) != 0) {
      return 0;
    }
    DAT_00425500 = DAT_00425500 | uVar9;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"A-:",3);
  if (iVar4 == 0) {
    uVar9 = FUN_00408ac5(param_1 + 3);
    if ((int)uVar9 < 1) {
      return 0;
    }
    DAT_00425520 = DAT_00425520 | uVar9;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"W:",2);
  if (iVar4 == 0) {
    FUN_00408f2a(&DAT_004241bc,(ushort *)(param_1 + 2));
    if (DAT_004241bc * 1000 < 0) {
      DAT_004241bc = 30000;
      return 1;
    }
    DAT_004241bc = DAT_004241bc * 1000;
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"R:",2);
  if (iVar4 == 0) {
    FUN_00408f2a(&DAT_00424188,(ushort *)(param_1 + 2));
    if (DAT_00424188 < 0) {
      DAT_00424188 = 1000000;
      return 1;
    }
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"IPG:",4);
  if (iVar4 == 0) {
    FUN_00408f2a(&DAT_00425550,(ushort *)(param_1 + 4));
    if (DAT_00425550 < 0) {
      DAT_00425550 = 0;
      return 0;
    }
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"MOT:",4);
  if (iVar4 == 0) {
    FUN_00408f2a(&DAT_00425444,(ushort *)(param_1 + 4));
    if (-1 < DAT_00425444) {
      return 1;
    }
    DAT_00425444 = 0;
    return 0;
  }
  iVar4 = FUN_00408a14(param_1,L"MON:",4);
  if (iVar4 == 0) {
    FUN_00408f2a(&DAT_00425438,(ushort *)(param_1 + 4));
    if (-1 < DAT_00425438) {
      return 1;
    }
    DAT_00425438 = 0;
    return 0;
  }
  iVar4 = FUN_00408a14(param_1,L"RH:",3);
  if (iVar4 == 0) {
    if (param_1[7] != L'-') {
      return 0;
    }
    if ((param_1[0xc] != L'\0') && (param_1[0xc] != L' ')) {
      return 0;
    }
    param_1[0xc] = L'\0';
    param_1[7] = L'\0';
    FUN_00408f2a(&DAT_0042545c,(ushort *)(param_1 + 3));
    iVar4 = DAT_0042545c;
    if (((((DAT_0042545c < 0) || (local_14[0] = (short *)0x64, 0x17 < (uint)(DAT_0042545c / 100)))
         || (0x3b < (uint)(DAT_0042545c % 100))) ||
        ((FUN_00408f2a(&DAT_00425468,(ushort *)(param_1 + 8)), DAT_00425468 < 0 ||
         (0x17 < (uint)(DAT_00425468 / (int)local_14[0]))))) ||
       (0x3b < (uint)(DAT_00425468 % (int)local_14[0]))) {
      DAT_00425468 = 0;
      DAT_0042545c = 0;
    }
    else if (iVar4 != DAT_00425468) {
      return 1;
    }
    param_1[7] = L'-';
    return 0;
  }
  iVar4 = FUN_00408a14(param_1,L"LEV:",4);
  if (iVar4 == 0) {
    FUN_00408f2a(&DAT_00425540,(ushort *)(param_1 + 4));
    if (DAT_00425540 < 0) {
      DAT_00425540 = 0;
      return 0;
    }
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"MAX:",4);
  if (iVar4 == 0) {
    FUN_00408fa6(&DAT_004254a0,(ushort *)(param_1 + 4));
    if (0 < DAT_004254a4) {
      return 1;
    }
    if (_DAT_004254a0 < 0) {
      _DAT_004254a0 = 0;
      return 0;
    }
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"MIN:",4);
  if (iVar4 == 0) {
    FUN_00408fa6(&DAT_00425518,(ushort *)(param_1 + 4));
    if (0 < DAT_0042551c) {
      return 1;
    }
    if (_DAT_00425518 < 0) {
      _DAT_00425518 = 0;
      return 0;
    }
    return 1;
  }
  iVar4 = FUN_00408a14(param_1,L"MAXAGE:",7);
  if (iVar4 == 0) {
    FUN_00408f2a((int *)&DAT_00425448,(ushort *)(param_1 + 7));
    if (-1 < (int)DAT_00425448) {
      if ((int)DAT_00425448 < 0x76c) {
        this = &DAT_00424b98;
        uVar9 = DAT_00425448;
LAB_0040a6bb:
        FUN_00408e57(this,uVar9,(int)uVar9 >> 0x1f);
        return 1;
      }
      iVar4 = FUN_00408d78(DAT_00425448,(LPFILETIME)&DAT_00424b98);
      if (iVar4 != 0) {
        return 1;
      }
    }
    DAT_00425448 = 0;
    return 0;
  }
  iVar4 = FUN_00408a14(param_1,L"MINAGE:",7);
  if (iVar4 == 0) {
    FUN_00408f2a((int *)&DAT_004254d8,(ushort *)(param_1 + 7));
    if (-1 < (int)DAT_004254d8) {
      if ((int)DAT_004254d8 < 0x76c) {
        this = &DAT_00424fb8;
        uVar9 = DAT_004254d8;
        goto LAB_0040a6bb;
      }
      iVar4 = FUN_00408d78(DAT_004254d8,(LPFILETIME)&DAT_00424fb8);
      if (iVar4 != 0) {
        return 1;
      }
    }
    DAT_004254d8 = 0;
    return 0;
  }
  iVar4 = FUN_00408a14(param_1,L"MAXLAD:",7);
  if (iVar4 == 0) {
    FUN_00408f2a((int *)&DAT_00425494,(ushort *)(param_1 + 7));
    if (-1 < (int)DAT_00425494) {
      if ((int)DAT_00425494 < 0x76c) {
        this = &DAT_00424fc0;
        uVar9 = DAT_00425494;
        goto LAB_0040a6bb;
      }
      iVar4 = FUN_00408d78(DAT_00425494,(LPFILETIME)&DAT_00424fc0);
      if (iVar4 != 0) {
        return 1;
      }
    }
    DAT_00425494 = 0;
    return 0;
  }
  iVar4 = FUN_00408a14(param_1,L"MINLAD:",7);
  if (iVar4 == 0) {
    FUN_00408f2a((int *)&DAT_004254cc,(ushort *)(param_1 + 7));
    if (-1 < (int)DAT_004254cc) {
      if ((int)DAT_004254cc < 0x76c) {
        this = &DAT_00424988;
        uVar9 = DAT_004254cc;
        goto LAB_0040a6bb;
      }
      iVar4 = FUN_00408d78(DAT_004254cc,(LPFILETIME)&DAT_00424988);
      if (iVar4 != 0) {
        return 1;
      }
    }
    DAT_004254cc = 0;
    return 0;
  }
  iVar4 = FUN_00408a14(param_1,L"LOG:",4);
  if (iVar4 == 0) {
    iVar15 = 0;
    iVar14 = 0;
    iVar4 = 4;
  }
  else {
    iVar4 = FUN_00408a14(param_1,L"LOG+:",5);
    if (iVar4 == 0) {
      iVar15 = 0;
      iVar14 = 1;
      iVar4 = 5;
    }
    else {
      iVar4 = FUN_00408a14(param_1,L"UNILOG:",7);
      if (iVar4 == 0) {
        iVar15 = 1;
        iVar14 = 0;
        iVar4 = 7;
      }
      else {
        iVar4 = FUN_00408a14(param_1,L"UNILOG+:",8);
        if (iVar4 != 0) {
          iVar4 = FUN_00408a14(param_1,L"JOB:",4);
          if (iVar4 == 0) {
            iVar4 = FUN_0040c67f(param_1 + 4);
          }
          else {
            iVar4 = FUN_00408a14(param_1,L"SAVE:",5);
            if (iVar4 != 0) {
              iVar4 = FUN_00408a14(param_1,L"SD:",3);
              if (iVar4 == 0) {
                pcVar2 = *(code **)(DAT_00424018 + 0xc);
                (*(code *)PTR_guard_check_icall_004263b4)();
                iVar4 = (*pcVar2)();
                psVar12 = (short *)(iVar4 + 0x10);
                local_8 = 1;
                local_14[0] = psVar12;
                piVar6 = FUN_0041a4f6(DAT_00424fc8,(int *)&local_18);
                if ((*(int *)(*piVar6 + -0xc) != 0) ||
                   (iVar4 = FUN_00408cf3(param_1 + 3), iVar4 != 0)) {
                  bVar3 = true;
                }
                FUN_004044dc((undefined4 *)(local_18 - 0x10));
                if (!bVar3) {
                  ppWVar16 = &local_20;
                  pWVar7 = (LPWSTR)FUN_0040d597(local_14,0x7fff);
                  DVar8 = GetFullPathNameW(param_1 + 3,0x7fff,pWVar7,ppWVar16);
                  psVar12 = local_14[0];
                  if (DVar8 == 0) {
                    iVar4 = FUN_0040da36(local_14[0]);
                    FUN_0040da03(local_14,iVar4);
                    UVar10 = 0x2399;
                    pvVar11 = DAT_00424fc8;
LAB_0040a831:
                    uVar5 = FUN_00415ae0(UVar10,pvVar11);
                    FUN_004044dc((undefined4 *)(psVar12 + -8));
                    return uVar5;
                  }
                  FUN_0040d545(&local_18,local_14[0]);
                  local_8._0_1_ = 2;
                  FUN_0041a27a(DAT_00424fc8,(int *)&local_18);
                  local_8 = CONCAT31(local_8._1_3_,1);
                  FUN_004044dc((undefined4 *)(local_18 - 0x10));
                  pvVar11 = DAT_00424fc8;
LAB_0040a963:
                  FUN_0041a840(pvVar11);
                  iVar4 = FUN_0040da36(psVar12);
                  FUN_0040da03(local_14,iVar4);
                  FUN_004044dc((undefined4 *)(psVar12 + -8));
                  return 1;
                }
              }
              else {
                iVar4 = FUN_00408a14(param_1,L"DD:",3);
                if (iVar4 != 0) {
                  iVar4 = FUN_00408a14(param_1,L"MT",2);
                  if (iVar4 != 0) {
                    iVar4 = CompareStringW(0x7f,1,param_1,-1,L"COMPRESS",-1);
                    if (iVar4 == 2) {
                      DAT_0042548c = 1;
                      return 1;
                    }
                    iVar4 = CompareStringW(0x7f,1,param_1,-1,L"SPARSE",-1);
                    if (((iVar4 != 2) &&
                        (iVar4 = CompareStringW(0x7f,1,param_1,-1,L"SPARSE:Y",-1), iVar4 != 2)) &&
                       (iVar4 = CompareStringW(0x7f,1,param_1,-1,L"SPARSE:YES",-1), iVar4 != 2)) {
                      iVar4 = CompareStringW(0x7f,1,param_1,-1,L"SPARSE:N",-1);
                      if ((iVar4 != 2) &&
                         (iVar4 = CompareStringW(0x7f,1,param_1,-1,L"SPARSE:NO",-1), iVar4 != 2)) {
                        iVar4 = CompareStringW(0x7f,1,param_1,-1,L"NOCLONE",-1);
                        if (iVar4 != 2) {
                          return 0;
                        }
                        DAT_0042542c = 1;
                        return 1;
                      }
                      DAT_00425480 = 2;
                      return 1;
                    }
                    DAT_00425480 = 1;
                    return 1;
                  }
                  DAT_00425490 = 1;
                  DAT_0042543c = 8;
                  iVar4 = FUN_00408a14(param_1,L"MT:",3);
                  if (iVar4 != 0) {
                    return 1;
                  }
                  FUN_00408f2a(&DAT_0042543c,(ushort *)(param_1 + 3));
                  if (DAT_0042543c < 1) {
                    DAT_0042543c = 1;
                  }
                  if (0x80 < DAT_0042543c) {
                    DAT_0042543c = 0x80;
                    return 1;
                  }
                  return 1;
                }
                pcVar2 = *(code **)(DAT_00424018 + 0xc);
                (*(code *)PTR_guard_check_icall_004263b4)();
                iVar4 = (*pcVar2)();
                psVar12 = (short *)(iVar4 + 0x10);
                local_8 = 4;
                local_14[0] = psVar12;
                piVar6 = FUN_0041a4f6(DAT_0042477c,(int *)&local_18);
                if ((*(int *)(*piVar6 + -0xc) != 0) ||
                   (iVar4 = FUN_00408cf3(param_1 + 3), iVar4 != 0)) {
                  bVar3 = true;
                }
                FUN_004044dc((undefined4 *)(local_18 - 0x10));
                if (!bVar3) {
                  ppWVar16 = &local_20;
                  pWVar7 = (LPWSTR)FUN_0040d597(local_14,0x7fff);
                  DVar8 = GetFullPathNameW(param_1 + 3,0x7fff,pWVar7,ppWVar16);
                  psVar12 = local_14[0];
                  if (DVar8 == 0) {
                    iVar4 = FUN_0040da36(local_14[0]);
                    FUN_0040da03(local_14,iVar4);
                    UVar10 = 0x239a;
                    pvVar11 = DAT_0042477c;
                    goto LAB_0040a831;
                  }
                  FUN_0040d545(&local_18,local_14[0]);
                  local_8._0_1_ = 5;
                  FUN_0041a27a(DAT_0042477c,(int *)&local_18);
                  local_8 = CONCAT31(local_8._1_3_,4);
                  FUN_004044dc((undefined4 *)(local_18 - 0x10));
                  pvVar11 = DAT_0042477c;
                  goto LAB_0040a963;
                }
              }
              FUN_004044dc((undefined4 *)(psVar12 + -8));
              return 0;
            }
            iVar4 = FUN_0040beb9(param_1 + 5);
          }
          goto LAB_0040a6e6;
        }
        iVar15 = 1;
        iVar14 = 1;
        iVar4 = 8;
      }
    }
  }
  iVar4 = FUN_004091ad((int)param_1,iVar4,iVar14,iVar15);
LAB_0040a6e6:
  if (iVar4 == 0) {
    return 0;
  }
  return 1;
}



/* Function: FUN_0040aad8 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_0040aad8(LPCWSTR param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  LPWSTR pWVar5;
  DWORD DVar6;
  undefined4 uVar7;
  undefined4 *this;
  UINT UVar8;
  void *pvVar9;
  undefined4 *puVar10;
  short *psVar11;
  LPWSTR *ppWVar12;
  LPWSTR local_24;
  int local_20;
  int local_1c;
  short *local_18;
  char local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x40aae4;
  bVar2 = false;
  local_24 = (LPWSTR)0x0;
  if (DAT_004254e0 != 0) {
    iVar3 = FUN_00408cf3(param_1);
    if ((iVar3 != 0) && (iVar3 = FUN_00408d46(param_1), iVar3 != 0)) {
      return 0;
    }
    piVar4 = FUN_00408bec(param_1);
    iVar3 = FUN_00408cf3(param_1);
    this = &DAT_00424290;
    puVar10 = &DAT_004242a8;
LAB_0040ab61:
    if (iVar3 != 0) {
      this = puVar10;
    }
    FUN_004042d0(this,piVar4);
    return 1;
  }
  if (DAT_00425460 != 0) {
    iVar3 = FUN_00408cf3(param_1);
    if ((iVar3 != 0) && (iVar3 = FUN_00408d46(param_1), iVar3 != 0)) {
      return 0;
    }
    piVar4 = FUN_00408bec(param_1);
    iVar3 = FUN_00408cf3(param_1);
    this = &DAT_0042423c;
    puVar10 = &DAT_004242d8;
    goto LAB_0040ab61;
  }
  if ((DAT_00425450 == 0) && (DAT_00425440 == 0)) {
    piVar4 = FUN_0041a4f6(DAT_00424fc8,(int *)&local_18);
    bVar2 = true;
    if (*(int *)(*piVar4 + -0xc) != 0) goto LAB_0040aba9;
    iVar3 = FUN_00408cf3(param_1);
    local_11 = '\x01';
    if (iVar3 != 0) goto LAB_0040aba9;
  }
  else {
LAB_0040aba9:
    local_11 = '\0';
  }
  if (bVar2) {
    FUN_004044dc((undefined4 *)(local_18 + -8));
  }
  bVar2 = false;
  if (local_11 != '\0') {
    pcVar1 = *(code **)(DAT_00424018 + 0xc);
    (*(code *)PTR_guard_check_icall_004263b4)();
    iVar3 = (*pcVar1)();
    local_18 = (short *)(iVar3 + 0x10);
    ppWVar12 = &local_24;
    local_8 = 1;
    pWVar5 = (LPWSTR)FUN_0040d597(&local_18,0x7fff);
    DVar6 = GetFullPathNameW(param_1,0x7fff,pWVar5,ppWVar12);
    psVar11 = local_18;
    if (DVar6 == 0) {
      iVar3 = FUN_0040da36(local_18);
      FUN_0040da03(&local_18,iVar3);
      UVar8 = 0x2399;
      pvVar9 = DAT_00424fc8;
      goto LAB_0040ac2b;
    }
    FUN_0040d545(&local_1c,local_18);
    local_8._0_1_ = 2;
    FUN_0041a27a(DAT_00424fc8,&local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004044dc((undefined4 *)(local_1c + -0x10));
    pvVar9 = DAT_00424fc8;
    goto LAB_0040ad67;
  }
  if ((DAT_00425450 == 0) && (DAT_00425504 == 0)) {
    piVar4 = FUN_0041a4f6(DAT_0042477c,&local_20);
    bVar2 = true;
    if (*(int *)(*piVar4 + -0xc) != 0) goto LAB_0040acb2;
    iVar3 = FUN_00408cf3(param_1);
    local_11 = '\x01';
    if (iVar3 != 0) goto LAB_0040acb2;
  }
  else {
LAB_0040acb2:
    local_11 = '\0';
  }
  if (bVar2) {
    FUN_004044dc((undefined4 *)(local_20 + -0x10));
  }
  if (local_11 == '\0') {
    iVar3 = FUN_00408d46(param_1);
    if (iVar3 != 0) {
      return 0;
    }
    if (DAT_00425464 != 0) {
      return 1;
    }
    piVar4 = FUN_00408bec(param_1);
    FUN_004042d0(&DAT_004242c0,piVar4);
    iVar3 = CompareStringW(0x7f,0,param_1,-1,L"*.*",-1);
    if (iVar3 != 2) {
      return 1;
    }
    DAT_00425464 = 1;
    FUN_00408a8c();
    return 1;
  }
  pcVar1 = *(code **)(DAT_00424018 + 0xc);
  (*(code *)PTR_guard_check_icall_004263b4)();
  iVar3 = (*pcVar1)();
  local_18 = (short *)(iVar3 + 0x10);
  ppWVar12 = &local_24;
  local_8 = 4;
  pWVar5 = (LPWSTR)FUN_0040d597(&local_18,0x7fff);
  DVar6 = GetFullPathNameW(param_1,0x7fff,pWVar5,ppWVar12);
  psVar11 = local_18;
  if (DVar6 == 0) {
    iVar3 = FUN_0040da36(local_18);
    FUN_0040da03(&local_18,iVar3);
    UVar8 = 0x239a;
    pvVar9 = DAT_0042477c;
LAB_0040ac2b:
    uVar7 = FUN_00415ae0(UVar8,pvVar9);
    FUN_004044dc((undefined4 *)(psVar11 + -8));
    return uVar7;
  }
  FUN_0040d545(&local_1c,local_18);
  local_8._0_1_ = 5;
  FUN_0041a27a(DAT_0042477c,&local_1c);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004044dc((undefined4 *)(local_1c + -0x10));
  pvVar9 = DAT_0042477c;
LAB_0040ad67:
  FUN_0041a840(pvVar9);
  iVar3 = FUN_0040da36(psVar11);
  FUN_0040da03(&local_18,iVar3);
  FUN_004044dc((undefined4 *)(psVar11 + -8));
  return 1;
}



/* Function: FUN_0040ade8 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0040ade8(int *param_1,LPCWSTR param_2)

{
  ushort uVar1;
  WCHAR WVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ushort *puVar6;
  wchar_t *_Str;
  ushort *puVar7;
  WCHAR *pWVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  int local_22c;
  int local_228;
  LPCWSTR local_224;
  WCHAR local_220;
  undefined1 local_21e [534];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x21c;
  local_8 = 0x40adf7;
  uVar11 = 0;
  local_224 = param_2;
  FUN_0040deb1(param_1,&DAT_00401414,0);
  iVar3 = FUN_00408d46(param_2);
  if (iVar3 == 0) {
    puVar7 = &DAT_00401cf0;
    puVar6 = DAT_00425248;
    do {
      uVar1 = *puVar6;
      bVar12 = uVar1 < *puVar7;
      if (uVar1 != *puVar7) {
LAB_0040ae4d:
        uVar4 = -(uint)bVar12 | 1;
        goto LAB_0040ae52;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar6[1];
      bVar12 = uVar1 < puVar7[1];
      if (uVar1 != puVar7[1]) goto LAB_0040ae4d;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    } while (uVar1 != 0);
    uVar4 = 0;
LAB_0040ae52:
    local_8 = 0xffffffff;
    if (uVar4 != 0) {
      FUN_0040d4df(param_1,&DAT_00425248);
      piVar5 = FUN_0040d3ea(param_1,&local_228,1);
      puVar6 = (ushort *)*piVar5;
      puVar7 = &DAT_00401400;
      do {
        uVar1 = *puVar6;
        bVar12 = uVar1 < *puVar7;
        if (uVar1 != *puVar7) {
LAB_0040aea3:
          uVar4 = -(uint)bVar12 | 1;
          goto LAB_0040aea8;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar6[1];
        bVar12 = uVar1 < puVar7[1];
        if (uVar1 != puVar7[1]) goto LAB_0040aea3;
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_0040aea8:
      local_8 = 0xffffffff;
      FUN_004044dc((undefined4 *)(local_228 + -0x10));
      if (uVar4 != 0) {
        FUN_0040d448(param_1,&DAT_00401400);
      }
      FUN_0040d448(param_1,local_224);
      goto LAB_0040af1a;
    }
  }
  GetFullPathNameW(param_2,0x105,&local_220,&local_224);
  pWVar8 = &local_220;
  do {
    WVar2 = *pWVar8;
    pWVar8 = pWVar8 + 1;
  } while (WVar2 != L'\0');
  FUN_0040deb1(param_1,&local_220,(int)pWVar8 - (int)local_21e >> 1);
LAB_0040af1a:
  iVar3 = *(int *)(*param_1 + -0xc);
  _Str = (wchar_t *)FUN_0040d597(param_1,iVar3);
  _wcsupr_s(_Str,iVar3 + 1);
  FUN_0040da03(param_1,iVar3);
  piVar5 = FUN_0040d3ea(param_1,&local_22c,4);
  puVar6 = (ushort *)*piVar5;
  puVar7 = &DAT_00401cf8;
  do {
    uVar1 = *puVar6;
    bVar12 = uVar1 < *puVar7;
    if (uVar1 != *puVar7) {
LAB_0040af79:
      uVar11 = -(uint)bVar12 | 1;
      break;
    }
    if (uVar1 == 0) break;
    uVar1 = puVar6[1];
    bVar12 = uVar1 < puVar7[1];
    if (uVar1 != puVar7[1]) goto LAB_0040af79;
    puVar6 = puVar6 + 2;
    puVar7 = puVar7 + 2;
  } while (uVar1 != 0);
  local_8 = 0xffffffff;
  FUN_004044dc((undefined4 *)(local_22c + -0x10));
  uVar9 = extraout_ECX;
  uVar10 = extraout_EDX;
  if (uVar11 != 0) {
    FUN_0040d448(param_1,&DAT_00401cf8);
    uVar9 = extraout_ECX_00;
    uVar10 = extraout_EDX_00;
  }
  FUN_00420a47(uVar9,uVar10);
  return;
}



/* Function: FUN_0040afad */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0040afad(void)

{
  WCHAR WVar1;
  int iVar2;
  int *this;
  undefined4 extraout_ECX;
  WCHAR *pWVar3;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  LPWSTR local_644;
  HKEY local_640;
  undefined4 *local_63c;
  WCHAR local_638 [262];
  WCHAR local_42c [262];
  WCHAR local_220;
  undefined1 local_21e [534];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x634;
  local_8 = 0x40afbc;
  FUN_0041df5a(&local_640);
  local_8 = 0;
  FUN_0041e0fd(&local_640,extraout_ECX,local_42c);
  iVar2 = CompareStringW(0x7f,0,local_42c,-1,L"::",-1);
  if (iVar2 == 2) {
    FUN_0040deb1(&DAT_00425248,&DAT_00401cf0,2);
  }
  else {
    ExpandEnvironmentStringsW(local_42c,local_638,0x104);
    GetFullPathNameW(local_638,0x104,&local_220,&local_644);
    local_63c = (undefined4 *)FUN_0041fd5e(0x70);
    if (local_63c != (undefined4 *)0x0) {
      this = FUN_00418b06(local_63c);
      if (this != (int *)0x0) {
        FUN_0040d545(&local_63c,&local_220);
        local_8._0_1_ = 1;
        FUN_0041a27a(this,(int *)&local_63c);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_004044dc(local_63c + -4);
        FUN_0041a840(this);
        FUN_00418f4b(this,0,0,-1);
        pWVar3 = &local_220;
        do {
          WVar1 = *pWVar3;
          pWVar3 = pWVar3 + 1;
        } while (WVar1 != L'\0');
        FUN_0040deb1(&DAT_00425248,&local_220,(int)pWVar3 - (int)local_21e >> 1);
        FUN_0040474c(this);
      }
    }
  }
  FUN_0041df9a((int *)&local_640);
  FUN_00420a47(extraout_ECX_00,extraout_EDX);
  return;
}



/* Function: FUN_0040b103 */

void FUN_0040b103(void)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  DWORD local_ae4;
  _SYSTEMTIME local_ae0;
  wchar_t local_ad0 [780];
  WCHAR local_4b8 [260];
  WCHAR local_2b0 [260];
  WCHAR local_a8 [40];
  WCHAR local_58 [40];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_ae0.wYear = 0;
  local_ae0.wMonth = 0;
  local_ae0.wDayOfWeek = 0;
  local_ae0.wDay = 0;
  local_ae0.wHour = 0;
  local_ae0.wMinute = 0;
  local_ae0.wSecond = 0;
  local_ae0.wMilliseconds = 0;
  memset(local_a8,0,0x50);
  memset(local_58,0,0x50);
  local_ae4 = 0x104;
  GetLocalTime(&local_ae0);
  GetUserNameW(local_2b0,&local_ae4);
  iVar1 = GetDateFormatW(0x400,2,&local_ae0,(LPCWSTR)0x0,local_a8,0x28);
  uVar2 = extraout_EDX;
  if ((iVar1 != 0) &&
     (iVar1 = GetTimeFormatW(0x400,0,&local_ae0,(LPCWSTR)0x0,local_58,0x28), uVar2 = extraout_EDX_00
     , iVar1 != 0)) {
    LoadStringW(DAT_00424da8,0x140,local_4b8,0x104);
    FUN_0040e7ef(local_ad0,local_4b8);
    fputws(local_ad0,DAT_00424778);
    uVar2 = extraout_EDX_01;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040b239 */

void __fastcall FUN_0040b239(wchar_t *param_1,UINT param_2)

{
  wchar_t wVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 uVar3;
  wchar_t *pwVar4;
  wchar_t *_Str;
  wchar_t local_210;
  wchar_t local_20e [259];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  LoadStringW(DAT_00424da8,param_2,&local_210,0x104);
  _Str = &local_210;
  while ((local_210 != L'\0' && (local_210 != L'/'))) {
    _Str = _Str + 1;
    local_210 = *_Str;
  }
  wVar1 = *_Str;
  pwVar4 = _Str;
  while ((wVar1 != L'\0' && (wVar1 != L':'))) {
    pwVar4 = pwVar4 + 1;
    wVar1 = *pwVar4;
  }
  pwVar4[1] = L'\0';
  pwVar4 = pwVar4 + 2;
  wVar1 = *pwVar4;
  while ((wVar1 != L'\0' && (wVar1 != L':'))) {
    pwVar4 = pwVar4 + 1;
    wVar1 = *pwVar4;
  }
  iVar2 = fputws(L"\t",DAT_00424778);
  uVar3 = extraout_EDX;
  if ((((-1 < iVar2) && (iVar2 = fputws(_Str,DAT_00424778), uVar3 = extraout_EDX_00, -1 < iVar2)) &&
      (iVar2 = fputws(param_1,DAT_00424778), uVar3 = extraout_EDX_01, -1 < iVar2)) &&
     (((iVar2 = fputws(L"\t",DAT_00424778), uVar3 = extraout_EDX_02, -1 < iVar2 &&
       (iVar2 = fputws(pwVar4,DAT_00424778), uVar3 = extraout_EDX_03, -1 < iVar2)) &&
      (iVar2 = FUN_004089e4(pwVar4), uVar3 = extraout_EDX_04, pwVar4[iVar2 + -1] != L'\n')))) {
    fputws(L"\n",DAT_00424778);
    uVar3 = extraout_EDX_05;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040b3a3 */

undefined4 FUN_0040b3a3(void)

{
  FILE *pFVar1;
  undefined4 uVar2;
  UINT UVar3;
  
  pFVar1 = FUN_004209fb(1);
  if (DAT_00424dac == pFVar1) {
    return 1;
  }
  if (DAT_00425538 == 0) {
    UVar3 = (DAT_00425474 != 0) + 0x64e;
  }
  else {
    UVar3 = (DAT_00425474 != 0) + 0x650;
  }
  uVar2 = FUN_0040b239(DAT_004252a0,UVar3);
  return uVar2;
}



/* Function: FUN_0040b3f2 */

void __fastcall FUN_0040b3f2(int param_1,UINT param_2)

{
  wchar_t wVar1;
  int iVar2;
  UINT extraout_EDX;
  UINT extraout_EDX_00;
  UINT extraout_EDX_01;
  UINT extraout_EDX_02;
  UINT extraout_EDX_03;
  UINT extraout_EDX_04;
  wchar_t *pwVar3;
  wchar_t *_Str;
  wchar_t local_208;
  wchar_t local_206 [255];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  if (param_1 != 0) {
    LoadStringW(DAT_00424da8,param_2,&local_208,0x100);
    _Str = &local_208;
    while ((local_208 != L'\0' && (local_208 != L'/'))) {
      _Str = _Str + 1;
      local_208 = *_Str;
    }
    wVar1 = *_Str;
    pwVar3 = _Str;
    while ((wVar1 != L'\0' && (wVar1 != L' '))) {
      pwVar3 = pwVar3 + 1;
      wVar1 = *pwVar3;
    }
    *pwVar3 = L'\0';
    iVar2 = fputws(L"\t",DAT_00424778);
    param_2 = extraout_EDX;
    if ((((-1 < iVar2) && (iVar2 = fputws(_Str,DAT_00424778), param_2 = extraout_EDX_00, -1 < iVar2)
         ) && (iVar2 = fputws(L"\t\t",DAT_00424778), param_2 = extraout_EDX_01, -1 < iVar2)) &&
       ((iVar2 = fputws(pwVar3 + 1,DAT_00424778), param_2 = extraout_EDX_02, -1 < iVar2 &&
        (iVar2 = FUN_004089e4(pwVar3 + 1), param_2 = extraout_EDX_03, pwVar3[iVar2] != L'\n')))) {
      fputws(L"\n",DAT_00424778);
      param_2 = extraout_EDX_04;
    }
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040b515 */

void __fastcall FUN_0040b515(uint param_1,UINT param_2)

{
  WCHAR WVar1;
  int iVar2;
  WCHAR *pWVar3;
  UINT extraout_EDX;
  UINT extraout_EDX_00;
  UINT extraout_EDX_01;
  wchar_t *_Format;
  WCHAR local_408;
  WCHAR local_406 [255];
  wchar_t local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  if (param_1 != 0) {
    LoadStringW(DAT_00424da8,param_2,&local_408,0x100);
    pWVar3 = &local_408;
    while ((local_408 != L'\0' && (local_408 != L'/'))) {
      pWVar3 = pWVar3 + 1;
      local_408 = *pWVar3;
    }
    WVar1 = *pWVar3;
    while ((WVar1 != L'\0' && (WVar1 != L':'))) {
      pWVar3 = pWVar3 + 1;
      WVar1 = *pWVar3;
    }
    pWVar3[1] = L'\0';
    pWVar3 = pWVar3 + 2;
    WVar1 = *pWVar3;
    while ((WVar1 != L'\0' && (WVar1 != L':'))) {
      pWVar3 = pWVar3 + 1;
      WVar1 = *pWVar3;
    }
    FUN_0040e81d(local_208,L"%s");
    if ((param_1 & 1) != 0) {
      FUN_004045a3(local_208,0x100,0x401794);
    }
    if ((param_1 & 0x20) != 0) {
      FUN_004045a3(local_208,0x100,0x401798);
    }
    if ((param_1 & 4) != 0) {
      FUN_004045a3(local_208,0x100,0x401404);
    }
    if ((param_1 & 2) != 0) {
      FUN_004045a3(local_208,0x100,0x40179c);
    }
    if ((param_1 & 0x800) != 0) {
      FUN_004045a3(local_208,0x100,0x4017a0);
    }
    if ((param_1 & 0x2000) != 0) {
      FUN_004045a3(local_208,0x100,0x4017a4);
    }
    if ((param_1 & 0x4000) != 0) {
      FUN_004045a3(local_208,0x100,0x4017a8);
    }
    if ((param_1 & 0x100) != 0) {
      FUN_004045a3(local_208,0x100,0x4017ac);
    }
    if ((param_1 & 0x1000) != 0) {
      FUN_004045a3(local_208,0x100,0x4017b0);
    }
    iVar2 = FUN_004089e4(local_208);
    if (iVar2 < 8) {
      _Format = L"\t%s\t\t%s";
    }
    else {
      _Format = L"\t%s\t%s";
    }
    iVar2 = fwprintf(DAT_00424778,_Format,local_208,pWVar3);
    param_2 = extraout_EDX;
    if ((-1 < iVar2) &&
       (iVar2 = FUN_004089e4(pWVar3), param_2 = extraout_EDX_00, pWVar3[iVar2 + -1] != L'\n')) {
      fputws(L"\n",DAT_00424778);
      param_2 = extraout_EDX_01;
    }
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040b73b */

void FUN_0040b73b(void)

{
  WCHAR WVar1;
  wchar_t wVar2;
  int iVar3;
  WCHAR *pWVar4;
  WCHAR *pWVar5;
  WCHAR *extraout_EDX;
  WCHAR *extraout_EDX_00;
  WCHAR *pWVar6;
  wchar_t *pwVar7;
  WCHAR local_408;
  WCHAR local_406 [255];
  wchar_t local_208;
  undefined1 local_206 [510];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  LoadStringW(DAT_00424da8,0x53a,&local_408,0x100);
  pWVar4 = &local_408;
  while ((local_408 != L'\0' && (local_408 != L'/'))) {
    pWVar4 = pWVar4 + 1;
    local_408 = *pWVar4;
  }
  WVar1 = *pWVar4;
  while ((WVar1 != L'\0' && (WVar1 != L':'))) {
    pWVar4 = pWVar4 + 1;
    WVar1 = *pWVar4;
  }
  pWVar4[1] = L'\0';
  pWVar4 = pWVar4 + 2;
  WVar1 = *pWVar4;
  while ((WVar1 != L'\0' && (WVar1 != L':'))) {
    pWVar4 = pWVar4 + 1;
    WVar1 = *pWVar4;
  }
  FUN_0040e81d(&local_208,L"%s");
  if (DAT_00425548 != 0) {
    FUN_004045a3(&local_208,0x100,0x4017a8);
  }
  if (DAT_004241a8 != 0) {
    FUN_004045a3(&local_208,0x100,0x40140c);
  }
  if (DAT_004241b4 != 0) {
    FUN_004045a3(&local_208,0x100,0x401798);
  }
  if (DAT_004254a8 != 0) {
    FUN_004045a3(&local_208,0x100,0x4017ac);
  }
  if (DAT_00425414 != 0) {
    FUN_004045a3(&local_208,0x100,0x4018d0);
  }
  pwVar7 = &local_208;
  do {
    wVar2 = *pwVar7;
    pwVar7 = pwVar7 + 1;
  } while (wVar2 != L'\0');
  if ((uint)((int)pwVar7 - (int)local_206 >> 1) < 8) {
    pwVar7 = L"\t%s\t\t%s";
  }
  else {
    pwVar7 = L"\t%s\t%s";
  }
  iVar3 = fwprintf(DAT_00424778,pwVar7,&local_208,pWVar4);
  pWVar6 = extraout_EDX;
  if (-1 < iVar3) {
    pWVar6 = pWVar4 + 1;
    pWVar5 = pWVar4;
    do {
      WVar1 = *pWVar5;
      pWVar5 = pWVar5 + 1;
    } while (WVar1 != L'\0');
    if (pWVar4[((int)pWVar5 - (int)pWVar6 >> 1) + -1] != L'\n') {
      fputws(L"\n",DAT_00424778);
      pWVar6 = extraout_EDX_00;
    }
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,pWVar6);
  return;
}



/* Function: FUN_0040b922 */

void FUN_0040b922(void)

{
  WCHAR WVar1;
  int iVar2;
  WCHAR *pWVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  wchar_t *_Format;
  WCHAR local_408;
  WCHAR local_406 [255];
  wchar_t local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  LoadStringW(DAT_00424da8,0x51d,&local_408,0x100);
  pWVar3 = &local_408;
  while ((local_408 != L'\0' && (local_408 != L'/'))) {
    pWVar3 = pWVar3 + 1;
    local_408 = *pWVar3;
  }
  WVar1 = *pWVar3;
  while ((WVar1 != L'\0' && (WVar1 != L':'))) {
    pWVar3 = pWVar3 + 1;
    WVar1 = *pWVar3;
  }
  pWVar3[1] = L'\0';
  pWVar3 = pWVar3 + 2;
  WVar1 = *pWVar3;
  while ((WVar1 != L'\0' && (WVar1 != L':'))) {
    pWVar3 = pWVar3 + 1;
    WVar1 = *pWVar3;
  }
  FUN_0040e81d(local_208,L"%s");
  if (DAT_0042419c != 0) {
    FUN_004045a3(local_208,0x100,0x40140c);
  }
  if (DAT_00424194 != 0) {
    FUN_004045a3(local_208,0x100,0x401798);
  }
  if (DAT_004241a0 != 0) {
    FUN_004045a3(local_208,0x100,0x4017ac);
  }
  if (DAT_00425410 != 0) {
    FUN_004045a3(local_208,0x100,0x4018d0);
  }
  if ((DAT_004254c0 & 4) != 0) {
    FUN_004045a3(local_208,0x100,0x401404);
  }
  if ((DAT_004254c0 & 1) != 0) {
    FUN_004045a3(local_208,0x100,0x4017b0);
  }
  if ((DAT_004254c0 & 8) != 0) {
    FUN_004045a3(local_208,0x100,0x401b18);
  }
  iVar2 = FUN_004089e4(local_208);
  if (iVar2 < 8) {
    _Format = L"\t%s\t\t%s";
  }
  else {
    _Format = L"\t%s\t%s";
  }
  iVar2 = fwprintf(DAT_00424778,_Format,local_208,pWVar3);
  uVar4 = extraout_EDX;
  if ((-1 < iVar2) &&
     (iVar2 = FUN_004089e4(pWVar3), uVar4 = extraout_EDX_00, pWVar3[iVar2 + -1] != L'\n')) {
    fputws(L"\n",DAT_00424778);
    uVar4 = extraout_EDX_01;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040bb25 */

void __fastcall FUN_0040bb25(UINT param_1)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  LoadStringW(DAT_00424da8,param_1,local_208,0x100);
  iVar1 = fputws(local_208,DAT_00424778);
  uVar2 = extraout_EDX;
  if ((-1 < iVar1) &&
     (iVar1 = FUN_004089e4(local_208), uVar2 = extraout_EDX_00, local_208[iVar1 + -1] != L'\n')) {
    fputws(L"\n",DAT_00424778);
    uVar2 = extraout_EDX_01;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040bbb9 */

void __fastcall FUN_0040bbb9(UINT param_1,int param_2,int param_3,int param_4)

{
  WCHAR WVar1;
  int iVar2;
  WCHAR *pWVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  WCHAR *pWVar4;
  wchar_t *_Format;
  WCHAR local_210;
  WCHAR local_20e [259];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  if ((param_3 != 0 || param_4 != 0) || (param_2 != 0)) {
    LoadStringW(DAT_00424da8,param_1,&local_210,0x104);
    pWVar3 = &local_210;
    while ((local_210 != L'\0' && (local_210 != L'/'))) {
      pWVar3 = pWVar3 + 1;
      local_210 = *pWVar3;
    }
    WVar1 = *pWVar3;
    pWVar4 = pWVar3;
    while ((WVar1 != L'\0' && (WVar1 != L':'))) {
      pWVar4 = pWVar4 + 1;
      WVar1 = *pWVar4;
    }
    pWVar4[1] = L'\0';
    pWVar4 = pWVar4 + 2;
    WVar1 = *pWVar4;
    while ((WVar1 != L'\0' && (WVar1 != L':'))) {
      pWVar4 = pWVar4 + 1;
      WVar1 = *pWVar4;
    }
    iVar2 = fwprintf(DAT_00424778,L"\t%s%I64d",pWVar3,param_3,param_4);
    param_2 = extraout_EDX;
    if (-1 < iVar2) {
      if (iVar2 < 9) {
        _Format = L"\t\t%s";
      }
      else {
        _Format = L"\t%s";
      }
      iVar2 = fwprintf(DAT_00424778,_Format,pWVar4);
      param_2 = extraout_EDX_00;
      if ((-1 < iVar2) &&
         (iVar2 = FUN_004089e4(pWVar4), param_2 = extraout_EDX_01, pWVar4[iVar2 + -1] != L'\n')) {
        fputws(L"\n",DAT_00424778);
        param_2 = extraout_EDX_02;
      }
    }
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040bcf7 */

void __fastcall
FUN_0040bcf7(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  WCHAR WVar1;
  int iVar2;
  WCHAR *pWVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  WCHAR *pWVar4;
  wchar_t *_Format;
  WCHAR local_210;
  WCHAR local_20e [259];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  if ((param_3 != 0 || param_4 != 0) || (param_5 != 0 || param_6 != 0)) {
    LoadStringW(DAT_00424da8,0x531,&local_210,0x104);
    pWVar3 = &local_210;
    while ((local_210 != L'\0' && (local_210 != L'/'))) {
      pWVar3 = pWVar3 + 1;
      local_210 = *pWVar3;
    }
    WVar1 = *pWVar3;
    pWVar4 = pWVar3;
    while ((WVar1 != L'\0' && (WVar1 != L':'))) {
      pWVar4 = pWVar4 + 1;
      WVar1 = *pWVar4;
    }
    pWVar4[1] = L'\0';
    pWVar4 = pWVar4 + 2;
    WVar1 = *pWVar4;
    while ((WVar1 != L'\0' && (WVar1 != L':'))) {
      pWVar4 = pWVar4 + 1;
      WVar1 = *pWVar4;
    }
    iVar2 = fwprintf(DAT_00424778,L"\t%s%I64d-%I64d",pWVar3,param_3,param_4,param_5,param_6);
    param_2 = extraout_EDX;
    if (-1 < iVar2) {
      if (iVar2 < 9) {
        _Format = L"\t\t%s";
      }
      else {
        _Format = L"\t%s";
      }
      iVar2 = fwprintf(DAT_00424778,_Format,pWVar4);
      param_2 = extraout_EDX_00;
      if ((-1 < iVar2) &&
         (iVar2 = FUN_004089e4(pWVar4), param_2 = extraout_EDX_01, pWVar4[iVar2 + -1] != L'\n')) {
        fputws(L"\n",DAT_00424778);
        param_2 = extraout_EDX_02;
      }
    }
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040be43 */

void __fastcall FUN_0040be43(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    piVar3 = FUN_0040ddd5((int *)(*(int *)*puVar1 + -0x10));
    iVar4 = fputws(L"\t\t",DAT_00424778);
    if ((-1 < iVar4) && (iVar4 = fputws((wchar_t *)(piVar3 + 4),DAT_00424778), -1 < iVar4)) {
      fputws(L"\n",DAT_00424778);
    }
    FUN_004044dc(piVar3);
  }
  return;
}



/* Function: FUN_0040beb9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __fastcall FUN_0040beb9(LPCWSTR param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int iVar4;
  UINT UVar5;
  LPCWSTR pWVar6;
  int local_1c;
  int local_18;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x40bec5;
  pcVar1 = *(code **)(DAT_00424018 + 0xc);
  (*(code *)PTR_guard_check_icall_004263b4)();
  iVar2 = (*pcVar1)();
  local_14[0] = (LPCWSTR)(iVar2 + 0x10);
  iVar2 = 1;
  local_8 = 1;
  FUN_0040ade8((int *)local_14,param_1);
  pWVar6 = local_14[0];
  DAT_00424778 = (int)_wfopen(local_14[0],L"w");
  if ((FILE *)DAT_00424778 == (FILE *)0x0) {
    iVar2 = FUN_004158ca(0x23a4,pWVar6,(LPCWSTR)0x0);
    goto LAB_0040c669;
  }
  FUN_0040b103();
  FUN_0040bb25(0x141);
  piVar3 = FUN_0041a4f6(DAT_00424fc8,&local_18);
  iVar4 = *(int *)(*piVar3 + -0xc);
  FUN_004044dc((undefined4 *)(local_18 + -0x10));
  if (iVar4 == 0) {
    FUN_0040b3f2(1,0x6a9);
    FUN_0040bb25(0x148);
  }
  else {
    piVar3 = FUN_0041a4f6(DAT_00424fc8,&local_1c);
    FUN_0040b239((wchar_t *)*piVar3,0x709);
    FUN_004044dc((undefined4 *)(local_1c + -0x10));
  }
  FUN_0040bb25(0x142);
  piVar3 = FUN_0041a4f6(DAT_0042477c,&local_1c);
  iVar4 = *(int *)(*piVar3 + -0xc);
  FUN_004044dc((undefined4 *)(local_1c + -0x10));
  if (iVar4 == 0) {
    FUN_0040b3f2(1,0x6aa);
    FUN_0040bb25(0x148);
  }
  else {
    piVar3 = FUN_0041a4f6(DAT_0042477c,&local_18);
    FUN_0040b239((wchar_t *)*piVar3,0x70a);
    FUN_004044dc((undefined4 *)(local_18 + -0x10));
  }
  FUN_0040bb25(0x143);
  if ((DAT_00425464 == 0) && (DAT_004242c8 != 0)) {
    FUN_0040be43(&DAT_004242c0);
  }
  else {
    FUN_0040bb25(0x146);
  }
  FUN_0040b3f2((uint)(DAT_004241ac == 0),0x585);
  FUN_0040b3f2(DAT_0042554c,0x593);
  FUN_0040b3f2((uint)(DAT_004241b8 == 0),0x586);
  FUN_0040b3f2(DAT_00425470,0x57a);
  FUN_0040b3f2(DAT_004254e4,0x57b);
  FUN_0040b515(DAT_00425458,0x57c);
  FUN_0040b3f2(DAT_00425554,0x590);
  FUN_0040b3f2(DAT_0042549c,0x592);
  FUN_0040b3f2(DAT_0042541c,0x591);
  FUN_0040bb25(0x144);
  if ((DAT_00424244 == 0) && (DAT_004242e0 == 0)) {
    FUN_0040bb25(0x147);
  }
  else {
    FUN_0040be43(&DAT_0042423c);
    FUN_0040be43(&DAT_004242d8);
  }
  FUN_0040bb25(0x145);
  if ((DAT_00424298 == 0) && (DAT_004242b0 == 0)) {
    FUN_0040bb25(0x147);
  }
  else {
    FUN_0040be43(&DAT_00424290);
    FUN_0040be43(&DAT_004242a8);
  }
  FUN_0040b3f2(DAT_00425578,0x584);
  FUN_0040b3f2(DAT_004254d0,0x583);
  FUN_0040b3f2(DAT_0042555c,0x582);
  FUN_0040b3f2(DAT_00425564,0x581);
  FUN_0040b3f2(DAT_00425498,0x580);
  FUN_0040bbb9(0x587,0,DAT_004254a0,DAT_004254a4);
  FUN_0040bbb9(0x588,0,DAT_00425518,DAT_0042551c);
  FUN_0040bbb9(0x589,0,DAT_00425448,DAT_00425448 >> 0x1f);
  FUN_0040bbb9(0x58a,0,DAT_004254d8,DAT_004254d8 >> 0x1f);
  FUN_0040bbb9(0x58b,0,DAT_00425494,DAT_00425494 >> 0x1f);
  FUN_0040bbb9(0x58c,0,DAT_004254cc,DAT_004254cc >> 0x1f);
  FUN_0040b515(DAT_00425560,0x57d);
  FUN_0040bb25(0x514);
  FUN_0040b3f2(DAT_00425424,0x642);
  FUN_0040b3f2(DAT_00425510,0x515);
  FUN_0040b3f2(DAT_00425530,0x516);
  FUN_0040b3f2(DAT_004254e8,0x51b);
  FUN_0040b3f2(DAT_00425488,0x53f);
  FUN_0040bbb9(0x517,0,DAT_00425540,DAT_00425540 >> 0x1f);
  FUN_0040bbb9(0x52f,0,DAT_00425438,DAT_00425438 >> 0x1f);
  FUN_0040bbb9(0x530,0,DAT_00425444,DAT_00425444 >> 0x1f);
  FUN_0040bcf7(extraout_ECX,DAT_0042545c >> 0x1f,DAT_0042545c,DAT_0042545c >> 0x1f,DAT_00425468,
               DAT_00425468 >> 0x1f);
  FUN_0040b3f2(DAT_00425568,0x532);
  FUN_0040b3f2(DAT_0042548c,0x540);
  FUN_0040b3f2(DAT_00425480,0x541);
  FUN_0040b3f2(DAT_0042542c,0x542);
  if (DAT_004241a8 == 0) {
    if (((((DAT_004241b4 == 0) && (DAT_004254a8 == 0)) && (DAT_0042419c == 0)) &&
        ((DAT_00424194 == 0 && (DAT_004241a0 == 0)))) && ((DAT_004254c0 & 0xd) == 0)) {
      UVar5 = 0x523;
      goto LAB_0040c3b7;
    }
    if (((DAT_004241b4 != 0) || (DAT_004254a8 != 0)) || (DAT_00425548 != 0)) goto LAB_0040c3e2;
    FUN_0040b3f2(1,0x53c);
LAB_0040c3e7:
    FUN_0040b922();
  }
  else {
    if (((((DAT_004241b4 == 0) || (DAT_0042419c == 0)) || (DAT_00424194 == 0)) ||
        ((DAT_004241a0 == 0 || (DAT_00425410 != 0)))) ||
       ((DAT_00425414 != 0 || (((byte)DAT_004254c0 & 0xd) != 0xd)))) {
LAB_0040c3e2:
      FUN_0040b73b();
      goto LAB_0040c3e7;
    }
    UVar5 = 0x522;
LAB_0040c3b7:
    FUN_0040b3f2(1,UVar5);
  }
  FUN_0040b3f2(DAT_0042558c,0x524);
  FUN_0040b3f2(DAT_004254b4,0x525);
  FUN_0040b3f2(DAT_00425584,0x52c);
  FUN_0040b3f2(DAT_00425524,0x526);
  if (DAT_0042546c == 0) {
    UVar5 = 0x528;
    iVar4 = DAT_004254c4;
  }
  else {
    UVar5 = 0x529;
    iVar4 = DAT_0042546c;
  }
  FUN_0040b3f2(iVar4,UVar5);
  FUN_0040b3f2(DAT_004254c8,0x527);
  FUN_0040b3f2(DAT_00425430,0x52d);
  FUN_0040b3f2(DAT_00425570,0x58e);
  FUN_0040b3f2((uint)DAT_004254ec,0x58f);
  FUN_0040b3f2(DAT_004254d4,0x52e);
  FUN_0040b515(DAT_00425500,0x52a);
  FUN_0040b515(DAT_00425520,0x52b);
  FUN_0040bbb9(0x533,0,DAT_00425550,DAT_00425550 >> 0x1f);
  if ((DAT_0042540c == 0) || (DAT_00425408 == 0)) {
    FUN_0040b3f2(DAT_0042540c,0x518);
    UVar5 = 0x519;
    iVar4 = DAT_00425408;
  }
  else {
    UVar5 = 0x51a;
    iVar4 = iVar2;
  }
  FUN_0040b3f2(iVar4,UVar5);
  FUN_0040b3f2(DAT_0042553c,0x51c);
  FUN_0040bb25(0x5dd);
  FUN_0040bbb9(0x5de,1,DAT_00424188,DAT_00424188 >> 0x1f);
  FUN_0040bbb9(0x5df,1,DAT_004241bc / 1000,DAT_004241bc / 1000 >> 0x1f);
  FUN_0040b3f2(DAT_0042544c,0x5e1);
  FUN_0040bb25(0x641);
  FUN_0040b3f2(DAT_004254fc,0x644);
  FUN_0040b3f2(DAT_00425558,0x643);
  FUN_0040b3f2(DAT_004254ac,0x645);
  FUN_0040b3f2(DAT_00425588,0x646);
  FUN_0040b3f2(DAT_004254dc,0x647);
  FUN_0040b3f2(DAT_0042550c,0x648);
  FUN_0040b3f2(DAT_00425508,0x649);
  FUN_0040b3f2(DAT_004254b8,0x64b);
  FUN_0040b3f2(DAT_0042556c,0x64a);
  FUN_0040b3f2(DAT_00425428,0x653);
  FUN_0040b3f2(DAT_00425434,0x654);
  FUN_0040b3f2((uint)(DAT_00424190 == 0),0x64c);
  FUN_0040b3f2(DAT_0042557c,0x64d);
  FUN_0040b3a3();
  FUN_0040b3f2(DAT_0042552c,0x652);
  fclose((FILE *)DAT_00424778);
  pWVar6 = local_14[0];
LAB_0040c669:
  FUN_004044dc((undefined4 *)(pWVar6 + -8));
  return iVar2;
}



/* Function: FUN_0040c67f */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0040c67f(LPCWSTR param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  int iVar8;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar9;
  int iVar10;
  LPCWSTR pWVar11;
  LPCWSTR pWVar12;
  wchar_t wVar13;
  PCNZWCH pWVar14;
  undefined4 local_42c;
  wchar_t local_428 [528];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x428;
  local_8 = 0x40c68e;
  pcVar2 = *(code **)(DAT_00424018 + 0xc);
  (*(code *)PTR_guard_check_icall_004263b4)();
  iVar3 = (*pcVar2)();
  local_42c = (LPCWSTR)(iVar3 + 0x10);
  local_8 = 1;
  FUN_0040ade8(&local_42c,param_1);
  pWVar12 = local_42c;
  DAT_00424778 = (int)_wfopen(local_42c,L"r");
  if ((FILE *)DAT_00424778 == (FILE *)0x0) {
    FUN_004158ca(0x23a4,pWVar12,(LPCWSTR)0x0);
LAB_0040c96b:
    FUN_004044dc((undefined4 *)(pWVar12 + -8));
    uVar7 = extraout_ECX;
    uVar9 = extraout_EDX_00;
  }
  else {
    DAT_00425574 = 1;
    FUN_0040d4df(&DAT_0042524c,&local_42c);
    FUN_00415868(0x5d,DAT_0042524c);
    DAT_00425450 = 0;
    iVar3 = 0;
    pwVar4 = fgetws(local_428,0x208,(FILE *)DAT_00424778);
    pWVar11 = pWVar12;
    while (pwVar4 != (wchar_t *)0x0) {
      iVar3 = iVar3 + 1;
      iVar6 = 0;
      if (local_428[0] != L'\0') {
        iVar8 = 0;
        wVar13 = local_428[0];
        do {
          if ((wVar13 == L':') && (*(short *)((int)local_428 + iVar8 + 2) == 0x3a)) {
            uVar5 = iVar6 * 2;
            if (0x411 < uVar5) goto LAB_0040c9ba;
            local_428[iVar6] = L'\0';
            break;
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar6 * 2;
          wVar13 = local_428[iVar6];
        } while (wVar13 != L'\0');
      }
      wVar13 = local_428[0];
      uVar5 = FUN_004089e4(local_428);
      pWVar12 = local_42c;
      iVar8 = extraout_EDX;
      while ((uVar5 != 0 &&
             ((((sVar1 = *(short *)((int)&local_42c + uVar5 * 2 + 2), sVar1 == 0x20 ||
                (iVar8 = 9, sVar1 == 9)) || (sVar1 == 0xd)) || (wVar13 = local_428[0], sVar1 == 10))
             ))) {
        if (0x411 < uVar5 * 2 - 2) {
LAB_0040c9ba:
          FUN_0042024c(uVar5,iVar8);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined2 *)((int)&local_42c + uVar5 * 2 + 2) = 0;
        uVar5 = uVar5 - 1;
        wVar13 = local_428[0];
      }
      iVar6 = 0;
      while ((wVar13 != L'\0' && ((pWVar11 = local_42c, wVar13 == L' ' || (wVar13 == L'\t'))))) {
        iVar8 = iVar6 + 1;
        iVar6 = iVar6 + 1;
        wVar13 = local_428[iVar8];
      }
      pWVar14 = local_428 + iVar6;
      wVar13 = *pWVar14;
      if (wVar13 != L'\0') {
        iVar10 = 0;
        iVar8 = iVar6;
        do {
          if ((wVar13 == L'/') || (wVar13 == L'\\')) {
            iVar10 = iVar10 + 1;
          }
          wVar13 = local_428[iVar8 + 1];
          iVar8 = iVar8 + 1;
        } while (wVar13 != L'\0');
        if (((((*pWVar14 == L'-') || (iVar8 = FUN_00408a14(pWVar14,L"/LOG:",5), iVar8 == 0)) ||
             (iVar8 = FUN_00408a14(pWVar14,L"/LOG+:",6), iVar8 == 0)) ||
            (((iVar8 = FUN_00408a14(pWVar14,L"/UNILOG:",8), iVar8 == 0 ||
              (iVar8 = FUN_00408a14(pWVar14,L"/UNILOG+:",9), iVar8 == 0)) ||
             ((iVar8 = FUN_00408a14(pWVar14,L"/SD:",4), iVar8 == 0 ||
              (iVar8 = FUN_00408a14(pWVar14,L"/DD:",4), iVar8 == 0)))))) ||
           ((*pWVar14 == L'/' && (iVar10 == 1)))) {
          iVar6 = FUN_004092cd(local_428 + iVar6 + 1);
        }
        else {
          iVar6 = FUN_0040aad8(pWVar14);
        }
        pWVar11 = pWVar12;
        if (iVar6 == 0) {
          fclose((FILE *)DAT_00424778);
          FUN_0041698d(iVar3,pWVar14,0);
          goto LAB_0040c96b;
        }
      }
      pwVar4 = fgetws(local_428,0x208,(FILE *)DAT_00424778);
    }
    fclose((FILE *)DAT_00424778);
    DAT_00425440 = 0;
    DAT_00425504 = 0;
    DAT_00425450 = 0;
    DAT_004254e0 = 0;
    DAT_00425460 = 0;
    FUN_004044dc((undefined4 *)(pWVar11 + -8));
    uVar7 = extraout_ECX_00;
    uVar9 = extraout_EDX_01;
  }
  FUN_00420a47(uVar7,uVar9);
  return;
}



/* Function: FUN_0040c9c6 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_0040c9c6(int param_1,int param_2)

{
  PCNZWCH pWVar1;
  LPCWSTR pWVar2;
  int iVar3;
  FILE *_File;
  DWORD DVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  UINT UVar8;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar9;
  void *pvVar10;
  int iVar11;
  int _Mode;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  HKEY local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x40c9d2;
  iVar11 = 1;
  local_20 = param_1;
  if (1 < param_1) {
    do {
      iVar3 = CompareStringW(0x7f,1,*(PCNZWCH *)(param_2 + iVar11 * 4),-1,L"-unicode",-1);
      if ((iVar3 == 2) ||
         (iVar3 = CompareStringW(0x7f,1,*(PCNZWCH *)(param_2 + iVar11 * 4),-1,L"/unicode",-1),
         iVar3 == 2)) {
        _Mode = 0x8000;
        _File = FUN_004209fb(1);
        iVar3 = _fileno(_File);
        _setmode(iVar3,_Mode);
        printf("%c%c",0xff,0xfe);
        DAT_00425538 = 1;
        DAT_00425454 = 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_20);
  }
  FUN_0040deb1(&DAT_00425248,&DAT_00401cf0,2);
  FUN_0041df5a(&local_18);
  local_8 = 0;
  FUN_0041e036(&local_18,L"WaitTime",&DAT_004241bc,30000);
  FUN_0041e036(&local_18,L"RetryMax",&DAT_00424188,1000000);
  FUN_0040afad();
  if (local_20 < 2) {
    FUN_00415892();
    UVar8 = 0x44d;
  }
  else {
    if ((local_20 != 2) ||
       ((((iVar11 = CompareStringW(0x7f,1,*(PCNZWCH *)(param_2 + 4),-1,L"/???",-1), iVar11 != 2 &&
          (iVar11 = CompareStringW(0x7f,1,*(PCNZWCH *)(param_2 + 4),-1,L"-???",-1), iVar11 != 2)) &&
         (iVar11 = CompareStringW(0x7f,1,*(PCNZWCH *)(param_2 + 4),-1,L"/?",-1), iVar11 != 2)) &&
        (iVar11 = CompareStringW(0x7f,1,*(PCNZWCH *)(param_2 + 4),-1,L"-?",-1), iVar11 != 2)))) {
      local_28 = 0x2f;
      local_14 = 1;
      do {
        pWVar1 = *(PCNZWCH *)(param_2 + local_14 * 4);
        local_1c = 0;
        if (*pWVar1 != L'\0') {
          iVar11 = 0;
          iVar3 = 0;
          local_1c = 0;
          do {
            if ((*(short *)(iVar11 + (int)pWVar1) == (short)local_28) ||
               (*(short *)(iVar11 + (int)pWVar1) == 0x5c)) {
              local_1c = local_1c + 1;
            }
            iVar3 = iVar3 + 1;
            iVar11 = iVar3 * 2;
          } while (pWVar1[iVar3] != L'\0');
        }
        uVar7 = 1;
        if (((((*pWVar1 == L'-') || (iVar11 = FUN_00408a14(pWVar1,L"/JOB:",5), iVar11 == 0)) ||
             ((iVar11 = FUN_00408a14(*(PCNZWCH *)(param_2 + local_14 * 4),L"/SAVE:",6), iVar11 == 0
              || (((iVar11 = FUN_00408a14(*(PCNZWCH *)(param_2 + local_14 * 4),L"/LOG:",5),
                   iVar11 == 0 ||
                   (iVar11 = FUN_00408a14(*(PCNZWCH *)(param_2 + local_14 * 4),L"/LOG+:",6),
                   iVar11 == 0)) ||
                  (iVar11 = FUN_00408a14(*(PCNZWCH *)(param_2 + local_14 * 4),L"/UNILOG:",8),
                  iVar11 == 0)))))) ||
            (iVar11 = FUN_00408a14(*(PCNZWCH *)(param_2 + local_14 * 4),L"/UNILOG+:",9), iVar11 == 0
            )) || ((pWVar2 = *(LPCWSTR *)(param_2 + local_14 * 4), *pWVar2 == L'/' &&
                   (local_1c == 1)))) {
          iVar11 = FUN_004092cd((PCNZWCH)(*(int *)(param_2 + local_14 * 4) + 2));
        }
        else {
          iVar11 = FUN_0040aad8(pWVar2);
        }
        if (iVar11 == 0) {
          FUN_00415892();
          uVar7 = FUN_0041698d(local_14,*(undefined4 *)(param_2 + local_14 * 4),1);
          goto LAB_0040d0cd;
        }
        local_14 = local_14 + 1;
      } while (local_14 < local_20);
      if (DAT_004242c8 == 0) {
        DAT_00425464 = 1;
      }
      DVar4 = GetVersion();
      if ((DVar4 & 0x7fff0000) < 0xa280000) {
        DAT_0042418c = 0;
      }
      if (DAT_00424fcc != 0) {
        DAT_00425428 = DAT_00425428 * 2;
        FUN_00415892();
        FUN_00415d82(extraout_ECX,extraout_EDX);
        goto LAB_0040d0cd;
      }
      FUN_00415892();
      piVar5 = FUN_0041a4f6(DAT_00424fc8,&local_28);
      iVar11 = *(int *)(*piVar5 + -0xc);
      FUN_004044dc((undefined4 *)(local_28 + -0x10));
      if (iVar11 != 0) {
        DAT_004241c0 = FUN_0041a60c(DAT_00424fc8,0x23a5,(LPWSTR)&DAT_00424fd0,&DAT_0042547c,
                                    &DAT_00425420,&DAT_00425514,(PCNZWCH)&DAT_00424db0);
      }
      piVar5 = FUN_0041a4f6(DAT_0042477c,&local_24);
      iVar11 = *(int *)(*piVar5 + -0xc);
      FUN_004044dc((undefined4 *)(local_24 + -0x10));
      iVar3 = extraout_ECX_00;
      uVar9 = extraout_EDX_00;
      if (iVar11 != 0) {
        DAT_00424198 = FUN_0041a60c(DAT_0042477c,0x23a6,(LPWSTR)&DAT_00424ba0,&DAT_004254b0,
                                    &DAT_00425418,&DAT_004254bc,(PCNZWCH)&DAT_00424990);
        iVar3 = extraout_ECX_01;
        uVar9 = extraout_EDX_01;
      }
      if (((DAT_00425570 == 0) && ((iVar3 = DAT_004241c0, DAT_004241c0 == 1 || (DAT_004241c0 == 3)))
          ) && ((DAT_00424198 == 1 || (DAT_00424198 == 3)))) {
        DAT_004241a4 = 0;
      }
      FUN_00415d82(iVar3,uVar9);
      piVar5 = FUN_0041a4f6(DAT_00424fc8,&local_28);
      iVar11 = *(int *)(*piVar5 + -0xc);
      FUN_004044dc((undefined4 *)(local_28 + -0x10));
      if (iVar11 == 0) {
        UVar8 = 0x10;
LAB_0040cdfe:
        FUN_004157eb(UVar8,1);
        UVar8 = 0x44d;
      }
      else {
        piVar5 = FUN_0041a4f6(DAT_0042477c,&local_24);
        iVar11 = *(int *)(*piVar5 + -0xc);
        FUN_004044dc((undefined4 *)(local_24 + -0x10));
        if (iVar11 == 0) {
          UVar8 = 0x12;
          goto LAB_0040cdfe;
        }
        if (DAT_004254c0 != 0) {
          if ((DAT_00425420 >> 3 & 1) == 0) {
            FUN_004157eb(0x14,1);
          }
          if ((DAT_004254c0 != 0) && ((DAT_00425418 >> 3 & 1) == 0)) {
            FUN_004157eb(0x16,1);
          }
        }
        if ((DAT_00425408 != 0) && (DAT_00425410 != 0)) {
          FUN_004157eb(10,1);
          DAT_00425410 = 0;
        }
        if (((DAT_004254c0 & 8) != 0) && (DAT_004254f8 == 0)) {
          UVar8 = 0x18;
          goto LAB_0040cdfe;
        }
        if ((DAT_0042558c != 0) && (DAT_004254c0 == 0)) {
          UVar8 = 0xc;
          goto LAB_0040cdfe;
        }
        if ((DAT_00425408 != 0) && ((DAT_004254f4 == 0 || (DAT_004254f0 == 0)))) {
          UVar8 = 0x1b;
          goto LAB_0040cdfe;
        }
        iVar11 = FUN_00418dbc(DAT_00424fc8,DAT_004254c0,0x238d);
        pvVar10 = DAT_00424fc8;
        if (iVar11 == 0) {
LAB_0040d010:
          UVar8 = 0x238d;
          pvVar10 = DAT_00424fc8;
LAB_0040d016:
          uVar7 = FUN_00415ae0(UVar8,pvVar10);
          goto LAB_0040d0cd;
        }
        *(undefined4 *)((int)DAT_00424fc8 + 8) = 9;
        piVar5 = FUN_0041a2f8(pvVar10,&local_28);
        DVar4 = GetFileAttributesW((LPCWSTR)*piVar5);
        *(DWORD *)((int)pvVar10 + 0x10) = DVar4;
        FUN_004044dc((undefined4 *)(local_28 + -0x10));
        if (*(int *)((int)pvVar10 + 0x10) == -1) {
          *(undefined4 *)((int)pvVar10 + 0x10) = 0;
        }
        iVar11 = FUN_00418dbc(DAT_0042477c,extraout_ECX_02,0x238e);
        if (iVar11 == 0) {
          DVar4 = GetLastError();
          if ((DVar4 == 0x10b) || (DVar4 == 0x7b)) {
            UVar8 = 0x238e;
            pvVar10 = DAT_0042477c;
          }
          else {
            if ((DAT_00425424 != 0) ||
               (uVar6 = FUN_00419051(DAT_0042477c,(int)DAT_00424fc8), uVar6 != 0)) {
              *(undefined4 *)((int)DAT_00424fc8 + 8) = 1;
              goto LAB_0040cfac;
            }
            UVar8 = 0x2394;
            pvVar10 = DAT_0042477c;
          }
          goto LAB_0040d016;
        }
        iVar11 = FUN_0041bdac();
        if (iVar11 == 0) goto LAB_0040d010;
LAB_0040cfac:
        if (DAT_00425478 != 0) {
          FUN_0041dff0(&local_18,L"WaitTime");
          FUN_0041dff0(&local_18,L"RetryMax");
        }
        if (DAT_00425490 != 0) {
          if (DAT_0042553c == 0) {
            if (DAT_00425550 < 1) goto LAB_0040d034;
            UVar8 = 0x457;
          }
          else {
            UVar8 = 0x456;
          }
          goto LAB_0040cdfe;
        }
LAB_0040d034:
        if (DAT_00425580 == 0) goto LAB_0040d0cd;
        if (((DAT_00425490 == 0) && (DAT_0042553c == 0)) && (DAT_0042540c == 0)) {
          piVar5 = FUN_0041a4f6(DAT_0042477c,&local_28);
          iVar11 = *(int *)(*piVar5 + -0xc);
          FUN_004044dc((undefined4 *)(local_28 + -0x10));
          if (iVar11 != 0) {
            piVar5 = FUN_0041a4f6(DAT_0042477c,&local_24);
            DVar4 = FUN_00412d1b((LPCWSTR)*piVar5);
            FUN_004044dc((undefined4 *)(local_24 + -0x10));
            if ((int)DVar4 < 0) {
              FUN_004157eb(0x459,1);
            }
          }
          goto LAB_0040d0cd;
        }
        UVar8 = 0x458;
      }
      FUN_004157eb(UVar8,1);
      uVar7 = 0;
      goto LAB_0040d0cd;
    }
    FUN_00415892();
    FUN_004157eb(0x4b1,1);
    FUN_004157eb(0x514,1);
    FUN_004157eb(0x53f,1);
    FUN_004157eb(0x564,1);
    FUN_004157eb(0x579,1);
    FUN_004157eb(0x5dd,1);
    FUN_004157eb(0x641,1);
    FUN_004157eb(0x6a5,1);
    UVar8 = 0x70b;
  }
  FUN_004157eb(UVar8,1);
  uVar7 = 0;
LAB_0040d0cd:
  FUN_0041df9a((int *)&local_18);
  return uVar7;
}



/* Function: FUN_0040d0e3 */

void __fastcall FUN_0040d0e3(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421215;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004051b8();
  if (cVar1 == '\0') {
    FUN_0040875d(param_1);
  }
  else {
    *param_1 = 0;
    FUN_00408927((int)param_1);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d13d */

int * __fastcall FUN_0040d13d(int *param_1)

{
  int iVar1;
  DWORD dwErrCode;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421371;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    local_8 = 0;
    dwErrCode = GetLastError();
    FUN_0040872b(iVar1);
    SetLastError(dwErrCode);
  }
  *param_1 = 0;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_0040d1a5 */

void __fastcall FUN_0040d1a5(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004215fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004051b8();
  if (cVar1 == '\0') {
    FUN_00407e3c(param_1);
  }
  else {
    *param_1 = 0;
    local_8 = 0;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      FUN_0040d8b0(*(int **)(param_1 + 8));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d20a */

void __thiscall FUN_0040d20a(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00407191(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_0040d22d */

void __fastcall FUN_0040d22d(void *param_1)

{
  FUN_00407191(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_0040d24f */

void __thiscall FUN_0040d24f(void *this,int param_1)

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



/* Function: FUN_0040d279 */

void __fastcall FUN_0040d279(int *param_1)

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



/* Function: FUN_0040d299 */

void __thiscall FUN_0040d299(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_0040dd30(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040d2d0 */

void __fastcall FUN_0040d2d0(int *param_1)

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



/* Function: FUN_0040d315 */

undefined4 __thiscall FUN_0040d315(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00405155(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_0040d365(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_0040d365 */

void __thiscall FUN_0040d365(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00406124(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040d39c */

int * __thiscall FUN_0040d39c(void *this,int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
                    /* WARNING: Load size is inaccurate */
  if (iVar3 < *(int *)(*this + -0xc)) {
    puVar2 = (undefined4 *)FUN_0040d9c3((int *)this);
                    /* WARNING: Load size is inaccurate */
    FUN_0040df2e(param_1,*this,iVar3,puVar2);
  }
  else {
    piVar1 = FUN_0040ddd5((int *)(*this + -0x10));
    *param_1 = (int)(piVar1 + 4);
  }
  return param_1;
}



/* Function: FUN_0040d3ea */

int * __thiscall FUN_0040d3ea(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  iVar4 = 0;
  if (-1 < *(int *)(iVar1 + -0xc)) {
    iVar4 = *(int *)(iVar1 + -0xc);
  }
  if (iVar5 < iVar4) {
    puVar3 = (undefined4 *)FUN_0040d9c3((int *)this);
                    /* WARNING: Load size is inaccurate */
    FUN_0040df2e(param_1,(void *)(*this + (iVar4 - iVar5) * 2),iVar5,puVar3);
  }
  else {
    piVar2 = FUN_0040ddd5((int *)(iVar1 + -0x10));
    *param_1 = (int)(piVar2 + 4);
  }
  return param_1;
}



/* Function: FUN_0040d448 */

int * __thiscall FUN_0040d448(void *this,short *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0040da36(param_1);
                    /* WARNING: Load size is inaccurate */
  uVar4 = (int)param_1 - *this >> 1;
  uVar1 = *(uint *)(*this + -0xc);
  iVar3 = FUN_0040d597(this,uVar1 + iVar2);
  if (uVar4 <= uVar1) {
    param_1 = (short *)(iVar3 + uVar4 * 2);
  }
  memcpy_s((void *)(iVar3 + uVar1 * 2),iVar2 * 2,param_1,iVar2 * 2);
  FUN_0040da03(this,uVar1 + iVar2);
  return (int *)this;
}



/* Function: FUN_0040d4b7 */

void * __thiscall FUN_0040d4b7(void *this,short *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040da36(param_1);
  FUN_0040deb1(this,param_1,iVar1);
  return this;
}



/* Function: FUN_0040d4df */

int * __thiscall FUN_0040d4df(void *this,undefined4 *param_1)

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
      FUN_0040deb1(this,pvVar1,*(int *)((int)pvVar1 + -0xc));
    }
    else {
      piVar2 = FUN_0040ddd5(piVar2);
      FUN_004044dc(piVar3);
      *(int **)this = piVar2 + 4;
    }
  }
  return (int *)this;
}



/* Function: FUN_0040d535 */

void __fastcall FUN_0040d535(int *param_1)

{
  FUN_004044dc((undefined4 *)(*param_1 + -0x10));
  return;
}



/* Function: FUN_0040d545 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void * __thiscall FUN_0040d545(void *this,short *param_1)

{
  FUN_0040da58(this,&DAT_00424018);
  if ((param_1 == (short *)0x0) || (((uint)param_1 & 0xffff0000) != 0)) {
    FUN_0040d4b7(this,param_1);
  }
  else {
    FUN_0040dd5b(this,(uint)param_1 & 0xffff);
  }
  return this;
}



/* Function: FUN_0040d597 */

int __thiscall FUN_0040d597(void *this,int param_1)

{
                    /* WARNING: Load size is inaccurate */
  if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - param_1) < 0) {
    FUN_0040de54(this,param_1);
  }
                    /* WARNING: Load size is inaccurate */
  return *this;
}



/* Function: FUN_0040d5c6 */

void __fastcall FUN_0040d5c6(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00404626(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040d365(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00405155(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_0040d6b2;
  }
  FUN_0040dced(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_0040617c(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_0040d6e0:
    FUN_0040599f(unaff_retaddr,uVar3);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_0040db16((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_0040d6e0;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00406151(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00406124(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_0040d6b2:
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040d6f2 */

int __fastcall FUN_0040d6f2(int *param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int *piVar4;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_004051b8();
  if (cVar1 == '\0') {
    iVar2 = FUN_0040dced(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar4 = local_8;
    if (*param_1 == 0) {
      FUN_0040d365(param_1 + 2,0);
      FUN_0040d365(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar3 = GetLastError();
        FUN_00406151(local_8);
        SetLastError(DVar3);
      }
      FUN_0040da99((int)param_1);
      DVar3 = 0;
      hHeap = GetProcessHeap();
      iVar2 = HeapFree(hHeap,DVar3,param_1);
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = FUN_00406151(piVar4);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    iVar2 = *param_1;
  }
  return iVar2;
}



/* Function: FUN_0040d781 */

void __fastcall FUN_0040d781(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00404626(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040d365(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00405155(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_0040d870;
  }
  FUN_0040dced(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_0040617c(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_0040d89e:
    FUN_0040599f(unaff_retaddr,uVar3);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_0040dbd3((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_0040d89e;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00406151(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00406124(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_0040d870:
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040d8b0 */

void __fastcall FUN_0040d8b0(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_004051b8();
  if (cVar1 == '\0') {
    FUN_0040dced(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_0040d365(param_1 + 2,0);
      FUN_0040d365(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00406151(local_8);
        SetLastError(DVar2);
      }
      FUN_0040dac4((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00406151(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_00407c73(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_0040d94a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d94a(void)

{
  _DAT_004257c8 = "WilStaging_02";
  DAT_004257c4 = 0;
  _DAT_004257cc = 0;
  DAT_004257d0 = 0;
  _DAT_004257d4 = 0;
  _DAT_004257d8 = 0;
  _DAT_004257dc = 0;
  _DAT_004257e0 = 0;
  _DAT_004257e4 = 0;
  FUN_00408383((LPCRITICAL_SECTION)&DAT_004257e8);
  _DAT_00425810 = 0;
  FUN_00408383((LPCRITICAL_SECTION)&DAT_00425814);
  _DAT_0042584c = 0;
  _DAT_0042583c = 0;
  uRam00425840 = 0;
  uRam00425844 = 0;
  uRam00425848 = 0;
  DAT_004257c4 = 1;
  return;
}



/* Function: FUN_0040d9c3 */

void __fastcall FUN_0040d9c3(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int **)(*param_1 + -0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(*param_1 + -0x10) + 0x10);
    (*(code *)PTR_guard_check_icall_004263b4)();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      return;
    }
  }
  pcVar1 = *(code **)(DAT_00424018 + 0x10);
  (*(code *)PTR_guard_check_icall_004263b4)();
  (*pcVar1)();
  return;
}



/* Function: FUN_0040da03 */

void __thiscall FUN_0040da03(void *this,int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Load size is inaccurate */
  if ((-1 < param_1) && (param_1 <= *(int *)(*this + -8))) {
    *(int *)(*this + -0xc) = param_1;
                    /* WARNING: Load size is inaccurate */
    *(undefined2 *)(*this + param_1 * 2) = 0;
    return;
  }
  FUN_00404417(0x80070057);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040da36 */

int __fastcall FUN_0040da36(short *param_1)

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



/* Function: FUN_0040da58 */

int * __thiscall FUN_0040da58(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    (*(code *)PTR_guard_check_icall_004263b4)();
    iVar2 = (*pcVar1)();
    *(int *)this = iVar2 + 0x10;
    return (int *)this;
  }
  FUN_00404417(0x80004005);
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



/* Function: FUN_0040da99 */

void __fastcall FUN_0040da99(int param_1)

{
  FUN_0040dc92((int *)(param_1 + 0x18));
  FUN_0040daef((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00406124(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040dac4 */

void __fastcall FUN_0040dac4(int param_1)

{
  FUN_00407c12((void *)(param_1 + 0x10));
  FUN_0040daef((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00406124(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040daef */

void __fastcall FUN_0040daef(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00406124((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00406124((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0040db16 */

int __fastcall FUN_0040db16(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00404a7e(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_0040599f(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00405afc();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_004061d4(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_0040599f(unaff_retaddr,0x14b);
    }
    else {
      FUN_0040dfaa(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_0040daef(local_10);
  }
  FUN_0040d279((int *)&local_18);
  return iVar3;
}



/* Function: FUN_0040dbd3 */

int __fastcall FUN_0040dbd3(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00404a7e(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_0040599f(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00405afc();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_004061d4(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_0040599f(unaff_retaddr,0x14b);
    }
    else {
      FUN_0040e00e(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_0040daef(local_10);
  }
  FUN_0040d279((int *)&local_18);
  return iVar3;
}



/* Function: FUN_0040dc92 */

void __fastcall FUN_0040dc92(int *param_1)

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
        FUN_0040656d((int)lpMem + 8);
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



/* Function: FUN_0040dced */

void __thiscall FUN_0040dced(void *this,undefined4 *param_1)

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
    FUN_00405a71(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_0040dd30 */

void FUN_0040dd30(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0040dd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_0040dd5b */

undefined4 __thiscall FUN_0040dd5b(void *this,uint param_1)

{
  HMODULE hModule;
  HRSRC pHVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  hModule = (HMODULE)FUN_0041eff8(0);
  if (hModule != (HMODULE)0x0) {
    iVar4 = 1;
    do {
      pHVar1 = FindResourceExW(hModule,(LPCWSTR)0x6,(LPCWSTR)((param_1 >> 4) + 1 & 0xffff),0);
      if ((pHVar1 != (HRSRC)0x0) &&
         (puVar2 = FUN_00404473(hModule,pHVar1,param_1), puVar2 != (ushort *)0x0)) {
        if (hModule == (HMODULE)0x0) {
          return 0;
        }
        uVar3 = FUN_0040e072(this,hModule,param_1);
        return uVar3;
      }
      hModule = (HMODULE)FUN_0041eff8(iVar4);
      iVar4 = iVar4 + 1;
    } while (hModule != (HMODULE)0x0);
  }
  return 0;
}



/* Function: FUN_0040ddd5 */

int * __fastcall FUN_0040ddd5(int *param_1)

{
  rsize_t _DstSize;
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  pcVar1 = *(code **)(*(int *)*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_004263b4)();
  puVar2 = (undefined4 *)(*pcVar1)();
  piVar3 = param_1 + 3;
  if ((*piVar3 < 0) || (puVar2 != (undefined4 *)*param_1)) {
    pcVar1 = *(code **)*puVar2;
    (*(code *)PTR_guard_check_icall_004263b4)(param_1[1],2);
    piVar3 = (int *)(*pcVar1)();
    if (piVar3 == (int *)0x0) {
      FUN_0040e1f1();
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



/* Function: FUN_0040de54 */

void __thiscall FUN_0040de54(void *this,int param_1)

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
      FUN_0040e109(this,param_1);
    }
  }
  else {
    FUN_0040e157(this,param_1);
  }
  return;
}



/* Function: FUN_0040deb1 */

void __thiscall FUN_0040deb1(void *this,void *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  rsize_t _DstSize;
  void *_Dst;
  uint uVar3;
  
  if (param_2 == 0) {
    FUN_0040e201((int *)this);
  }
  else {
    if (param_1 == (void *)0x0) {
      FUN_00404417(0x80070057);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
                    /* WARNING: Load size is inaccurate */
    uVar3 = (int)param_1 - *this >> 1;
    uVar1 = *(uint *)(*this + -0xc);
    _Dst = (void *)FUN_0040d597(this,param_2);
    _DstSize = param_2 * 2;
    if (uVar1 < uVar3) {
      memcpy_s(_Dst,_DstSize,param_1,_DstSize);
    }
    else {
      memmove_s(_Dst,_DstSize,(void *)((int)_Dst + uVar3 * 2),_DstSize);
    }
    FUN_0040da03(this,param_2);
  }
  return;
}



/* Function: FUN_0040df2e */

int * __thiscall FUN_0040df2e(void *this,void *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar4 = 0x80004005;
  }
  else {
    if ((param_1 != (void *)0x0) || (param_2 == 0)) {
      pcVar1 = *(code **)*param_3;
      (*(code *)PTR_guard_check_icall_004263b4)(param_2,2);
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        *(int *)this = iVar2 + 0x10;
        FUN_0040da03(this,param_2);
                    /* WARNING: Load size is inaccurate */
        memcpy_s(*this,param_2 * 2,param_1,param_2 * 2);
        return (int *)this;
      }
      goto LAB_0040df9e;
    }
    uVar4 = 0x80070057;
  }
  FUN_00404417(uVar4);
LAB_0040df9e:
  FUN_0040e1f1();
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



/* Function: FUN_0040dfaa */

undefined4 * __thiscall FUN_0040dfaa(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_0040e00e */

undefined4 * __thiscall FUN_0040e00e(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_004078a2((void *)((int)this + 0x14));
  FUN_00408383((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_0040e072 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0040e072(void *this,HMODULE param_1,uint param_2)

{
  HRSRC pHVar1;
  ushort *puVar2;
  void *_Dst;
  errno_t eVar3;
  uint uVar4;
  
  pHVar1 = FindResourceExW(param_1,(LPCWSTR)0x6,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),0);
  if ((pHVar1 != (HRSRC)0x0) &&
     (puVar2 = FUN_00404473(param_1,pHVar1,param_2), puVar2 != (ushort *)0x0)) {
    uVar4 = (uint)*puVar2;
    _Dst = (void *)FUN_0040d597(this,uVar4);
    eVar3 = memcpy_s(_Dst,uVar4 * 2,puVar2 + 1,(uint)*puVar2 * 2);
    FUN_0040443a(eVar3);
    FUN_0040da03(this,uVar4);
    return 1;
  }
  return 0;
}



/* Function: FUN_0040e109 */

void __thiscall FUN_0040e109(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* WARNING: Load size is inaccurate */
  puVar3 = (undefined4 *)(*this + -0x10);
  if ((*(int *)(*this + -8) < param_1) && (0 < param_1)) {
    pcVar1 = *(code **)(*(int *)*puVar3 + 8);
    (*(code *)PTR_guard_check_icall_004263b4)(puVar3,param_1,2);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(int *)this = iVar2 + 0x10;
      return;
    }
  }
  FUN_0040e1f1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040e157 */

void __thiscall FUN_0040e157(void *this,int param_1)

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
  (*(code *)PTR_guard_check_icall_004263b4)();
  puVar3 = (undefined4 *)(*pcVar2)();
  pcVar2 = *(code **)*puVar3;
  (*(code *)PTR_guard_check_icall_004263b4)(param_1,2);
  iVar4 = (*pcVar2)();
  if (iVar4 != 0) {
    if (iVar1 < param_1) {
      param_1 = iVar1;
    }
    _DstSize = param_1 * 2 + 2;
    memcpy_s((void *)(iVar4 + 0x10),_DstSize,_Src,_DstSize);
    *(int *)(iVar4 + 4) = iVar1;
    FUN_004044dc((undefined4 *)((int)_Src + -0x10));
    *(void **)this = (void *)(iVar4 + 0x10);
    return;
  }
  FUN_0040e1f1();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_0040e1f1 */

void FUN_0040e1f1(void)

{
  FUN_00404417(0x8007000e);
  return;
}



/* Function: FUN_0040e201 */

void __fastcall FUN_0040e201(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00421166;
  local_10 = ExceptionList;
  uVar3 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *param_1;
  piVar1 = *(int **)(iVar4 + -0x10);
  if (*(int *)(iVar4 + -0xc) != 0) {
    if (*(int *)(iVar4 + -4) < 0) {
      FUN_0040da03(param_1,0);
    }
    else {
      FUN_004044dc((undefined4 *)(iVar4 + -0x10));
      pcVar2 = *(code **)(*piVar1 + 0xc);
      (*(code *)PTR_guard_check_icall_004263b4)(uVar3);
      iVar4 = (*pcVar2)();
      *param_1 = iVar4 + 0x10;
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040e27d */

void __fastcall
FUN_0040e27d(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00404e94(param_7);
  local_8 = 0;
  FUN_0040e397(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_0040e2c4 */

void * __fastcall FUN_0040e2c4(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint _MaxCount;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    _MaxCount = FUN_00405190(param_3);
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



/* Function: FUN_0040e334 */

char * __fastcall FUN_0040e334(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *_MaxCount;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar1;
  
  pcVar1 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    _MaxCount = FUN_00405172(param_3);
    pcVar1 = extraout_ECX;
    if (_MaxCount <= param_2 + -(int)param_1) {
      memcpy_s(param_1,(rsize_t)(param_2 + -(int)param_1),param_3,(rsize_t)_MaxCount);
      if (param_4 == (undefined4 *)0x0) {
        return extraout_ECX_00;
      }
      *param_4 = param_1;
      return extraout_ECX_00;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return pcVar1;
}



/* Function: FUN_0040e397 */

void __fastcall
FUN_0040e397(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_0040e878(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_0040e3bd */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040e3bd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  undefined4 local_1418;
  wchar_t local_1414 [2048];
  undefined1 local_414 [1024];
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421670;
  local_10 = ExceptionList;
  uStack_14 = 0x40e3da;
  uVar3 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_141c = param_6;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_1420 = param_1;
  local_1418 = param_2;
  local_1450 = FUN_00404c50(local_1474);
  local_147c = 3;
  local_1478 = 0;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  LOCK();
  UNLOCK();
  local_146c = DAT_0042470c + 1;
  local_1468 = 0;
  DAT_0042470c = DAT_0042470c + 1;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_004246e4;
  local_1454 = local_1418;
  local_142c = local_141c;
  local_1458 = param_3;
  local_1428 = local_1420;
  local_1460 = 0;
  local_145c = 0;
  local_144c = 0;
  local_143c = 0;
  uStack_1438 = 0;
  uStack_1434 = 0;
  local_1448 = 0;
  uStack_1444 = 0;
  uStack_1440 = 0;
  if (DAT_004246e4 == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004263b4)(uVar3);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_004246a8;
  if (DAT_004246a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_004246c0;
  if (DAT_004246c0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004246bc;
  if (DAT_004246bc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_004246d0;
  if ((DAT_004246d0 != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004263b4)(&local_147c);
    (*pcVar1)();
  }
  if (-1 < local_1474) {
    local_1474 = -0x7fff0001;
    local_1470 = FUN_00404e94(0x8000ffff);
  }
  pcVar1 = DAT_00424694;
  if (DAT_0042469c == '\0') {
    if (DAT_00424694 == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_004263b4)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040e5c1;
  }
  else {
LAB_0040e5c1:
    pcVar1 = DAT_004246a0;
    if ((local_1478 & 2) == 0) {
      if ((DAT_004246a0 != (code *)0x0) && (DAT_004246b0 == '\0')) {
        (*(code *)PTR_guard_check_icall_004263b4)(&local_147c,local_1414,0x800);
        (*pcVar1)();
      }
      if (local_1414[0] == L'\0') {
        FUN_004047c2(local_1414,0x800,(int)&local_147c);
      }
      OutputDebugStringW(local_1414);
      goto LAB_0040e64b;
    }
  }
  pcVar1 = DAT_004246a0;
  if ((DAT_004246a0 != (code *)0x0) && (DAT_004246b0 == '\0')) {
    (*(code *)PTR_guard_check_icall_004263b4)(&local_147c,0,0);
    (*pcVar1)();
  }
LAB_0040e64b:
  pcVar1 = DAT_004246c8;
  if ((((local_1478 & 4) != 0) || (DAT_004246a4 != '\0')) && (DAT_004246c8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  FUN_0040584e((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040e68b */

void __fastcall FUN_0040e68b(undefined4 param_1,undefined4 param_2)

{
  FUN_0040e91e(param_1,param_2);
  return;
}



/* Function: FUN_0040e69c */

void __fastcall FUN_0040e69c(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_00404e94(in_stack_00000014);
  FUN_0040e68b(param_1,param_2);
  return;
}



/* Function: FUN_0040e6dd */

uint __fastcall FUN_0040e6dd(int param_1,int param_2)

{
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = FUN_004050d4(param_1,param_2,0x4015d4,param_1,param_1,in_stack_00000010);
  FUN_00404e94(uVar1);
  FUN_0040e68b(param_1,param_2);
  return uVar1;
}



/* Function: FUN_0040e732 */

void __fastcall FUN_0040e732(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040e760 */

void FUN_0040e760(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_0040803a((int)param_2);
  }
  return;
}



/* Function: FUN_0040e7a0 */

void FUN_0040e7a0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_00406a97(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040e7ef */

void __cdecl FUN_0040e7ef(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004045ef(param_1,0x30c,param_2,&stack0x0000000c);
  if (iVar1 < 0) {
    *param_1 = L'\0';
  }
  return;
}



/* Function: FUN_0040e81d */

void __cdecl FUN_0040e81d(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004045ef(param_1,0x100,param_2,&stack0x0000000c);
  if (iVar1 < 0) {
    *param_1 = L'\0';
  }
  return;
}



/* Function: FUN_0040e850 */

undefined4 * __thiscall FUN_0040e850(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0040100c;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040e878 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040e878(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_00424140 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00405597(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_004200b0(local_c ^ (uint)&local_1474,extraout_EDX);
    return;
  }
  FUN_0040584e((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040e91e */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040e91e(undefined4 param_1,undefined4 param_2)

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
  undefined4 local_1440;
  undefined4 uStack_143c;
  undefined4 uStack_1438;
  undefined4 local_1434;
  undefined4 uStack_1430;
  undefined4 uStack_142c;
  undefined4 local_1428;
  undefined4 local_1424;
  undefined4 local_1420;
  undefined4 local_141c;
  undefined4 local_1418;
  wchar_t local_1414 [2048];
  undefined1 local_414 [1024];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421696;
  local_10 = ExceptionList;
  uVar2 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1418 = in_stack_00000010;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_146c = *in_stack_00000014;
  local_1468 = in_stack_00000014[1];
  local_141c = param_1;
  local_14 = uVar2;
  local_1448 = FUN_00404c10(local_146c);
  local_1470 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1470 = 8;
  }
  local_1474 = 1;
  LOCK();
  UNLOCK();
  local_1464 = DAT_0042470c + 1;
  local_1460 = 0;
  DAT_0042470c = DAT_0042470c + 1;
  local_145c = GetCurrentThreadId();
  pcVar1 = DAT_004246e4;
  local_1424 = local_1418;
  local_1420 = local_141c;
  local_1450 = &DAT_004015d4;
  local_1458 = 0;
  local_1454 = 0;
  local_1444 = 0;
  local_1434 = 0;
  uStack_1430 = 0;
  uStack_142c = 0;
  local_1440 = 0;
  uStack_143c = 0;
  uStack_1438 = 0;
  local_144c = param_2;
  if (DAT_004246e4 == (code *)0x0) {
    lVar5 = (ulonglong)extraout_EDX << 0x20;
  }
  else {
    (*(code *)PTR_guard_check_icall_004263b4)(uVar2);
    lVar5 = (*pcVar1)();
  }
  pcVar1 = DAT_004246a8;
  local_1428 = (undefined4)lVar5;
  if (DAT_004246a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(&local_1474);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_00,local_1428);
  }
  pcVar1 = DAT_004246c0;
  local_1428 = (undefined4)lVar5;
  if (DAT_004246c0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(&local_1474,local_414,0x400);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_01,local_1428);
  }
  pcVar1 = DAT_004246bc;
  local_1428 = (undefined4)lVar5;
  if (DAT_004246bc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004263b4)(&local_1474);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_02,local_1428);
  }
  pcVar1 = DAT_004246d0;
  local_1428 = (undefined4)lVar5;
  if ((DAT_004246d0 != (code *)0x0) && ((local_1470 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004263b4)(&local_1474);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_03,local_1428);
  }
  pcVar1 = DAT_00424694;
  local_1428 = (undefined4)lVar5;
  if (-1 < local_146c) {
    FUN_00405afc();
    goto LAB_0040ebe2;
  }
  if (DAT_0042469c == '\0') {
    if (DAT_00424694 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      uVar2 = (uint)(BVar3 != 0);
      uVar4 = extraout_EDX_04;
    }
    else {
      (*(code *)PTR_guard_check_icall_004263b4)();
      uVar6 = (*pcVar1)();
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar2 = (uint)uVar6 & 0xff;
    }
    lVar5 = CONCAT44(uVar4,local_1428);
    if (uVar2 != 0) goto LAB_0040eb05;
LAB_0040eb0e:
    pcVar1 = DAT_004246a0;
    local_1428 = (undefined4)lVar5;
    if ((DAT_004246a0 != (code *)0x0) && (DAT_004246b0 == '\0')) {
      (*(code *)PTR_guard_check_icall_004263b4)(&local_1474,0,0);
      (*pcVar1)();
      lVar5 = CONCAT44(extraout_EDX_05,local_1428);
    }
  }
  else {
LAB_0040eb05:
    pcVar1 = DAT_004246a0;
    local_1428 = (undefined4)lVar5;
    if ((local_1470 & 2) != 0) goto LAB_0040eb0e;
    if ((DAT_004246a0 != (code *)0x0) && (DAT_004246b0 == '\0')) {
      (*(code *)PTR_guard_check_icall_004263b4)(&local_1474,local_1414,0x800);
      (*pcVar1)();
    }
    if (local_1414[0] == L'\0') {
      FUN_004047c2(local_1414,0x800,(int)&local_1474);
    }
    OutputDebugStringW(local_1414);
    lVar5 = CONCAT44(extraout_EDX_06,local_1428);
  }
  pcVar1 = DAT_004246c8;
  local_1428 = (undefined4)lVar5;
  if ((((local_1470 & 4) != 0) || (DAT_004246a4 != '\0')) && (DAT_004246c8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_07,local_1428);
  }
  local_1428 = (undefined4)lVar5;
  local_8 = 0xffffffff;
  if ((local_1470 & 1) == 0) {
    ExceptionList = local_10;
    FUN_004200b0(local_14 ^ (uint)&stack0xfffffffc,(int)((ulonglong)lVar5 >> 0x20));
    return;
  }
LAB_0040ebe2:
  FUN_0040584e((int)&local_1474);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040ec00 */

void __thiscall FUN_0040ec00(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401020;
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



/* Function: FUN_0040ec40 */

undefined4 __thiscall
FUN_0040ec40(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_00407191(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_0040ec93 */

undefined * __fastcall FUN_0040ec93(int param_1)

{
  LPVOID pvVar1;
  
  if (DAT_00425490 != 0) {
    pvVar1 = TlsGetValue(DAT_004241cc);
    if (pvVar1 != (LPVOID)0x0) {
      return (undefined *)((int)pvVar1 + param_1 * 8);
    }
  }
  return (&PTR_DAT_00401068)[param_1];
}



/* Function: FUN_0040ecc3 */

undefined4 * __fastcall FUN_0040ecc3(undefined4 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  *param_1 = DAT_00424190;
  param_1[1] = DAT_0042540c;
  param_1[2] = DAT_00425408;
  param_1[3] = DAT_0042418c;
  param_1[4] = DAT_00424194;
  param_1[5] = 0x2395;
  uVar1 = DAT_00424188;
  param_1[10] = 0;
  bVar2 = DAT_00425404 != 0;
  param_1[6] = uVar1;
  param_1[7] = DAT_00425410;
  param_1[8] = DAT_004251dc;
  param_1[9] = DAT_004251d8;
  if (bVar2) {
    param_1[10] = 4;
  }
  return param_1;
}



/* Function: FUN_0040ed30 */

int __fastcall FUN_0040ed30(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0xff;
  }
  if (param_1 == 1) {
    iVar3 = 4;
    iVar2 = 0;
  }
  else if (param_1 == 2) {
    iVar3 = 5;
    iVar2 = 1;
  }
  else if (param_1 == 3) {
    iVar3 = 6;
    iVar2 = 2;
  }
  else if (param_1 == 4) {
    iVar3 = 7;
    iVar2 = 3;
  }
  else if (param_1 == 5) {
    iVar3 = 10;
    iVar2 = 8;
  }
  else {
    if (param_1 != 6) {
      bVar1 = (char)param_1 + 0x9c;
      if (0x31 < bVar1) {
        return 0xff;
      }
      iVar3 = 0x96;
      if (param_2 != 0) {
        iVar3 = 100;
      }
      return iVar3 + (uint)bVar1;
    }
    iVar3 = 0xb;
    iVar2 = 9;
  }
  if (param_2 != 0) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Function: FUN_0040edad */

uint * __fastcall FUN_0040edad(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  
  puVar6 = param_3;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  switch(param_2) {
  case 0:
  case 4:
    FUN_0040ef13(param_1,param_2,0,param_3);
    break;
  case 1:
  case 5:
    FUN_0040efe3(param_1,param_2,0,param_3);
    break;
  case 2:
  case 3:
  case 6:
  case 7:
    uVar4 = 0;
    if (param_2 == 2) {
      uVar4 = 2;
    }
    else if (param_2 == 3) {
      uVar4 = 8;
    }
    else if (param_2 == 6) {
      uVar4 = 4;
    }
    else if (param_2 == 7) {
      uVar4 = 0x10;
    }
    uVar1 = *param_1;
    do {
      uVar5 = uVar1;
      uVar1 = uVar4 | uVar5;
      param_3[4] = (uint)(uVar1 == uVar5);
      uVar2 = uVar1 | 1;
      if (uVar1 == uVar5) {
        uVar2 = uVar1;
      }
      LOCK();
      uVar1 = *param_1;
      if (uVar5 == uVar1) {
        *param_1 = uVar2;
        uVar1 = uVar5;
      }
      UNLOCK();
    } while (uVar1 != uVar5);
    if (((uVar2 & 1) == 0) || ((uVar5 & 1) != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *param_3 = uVar4;
    break;
  default:
    uVar4 = param_2 - 0x140;
    if ((int)uVar4 < 0x40) {
      puVar6 = param_1 + 1;
      uVar1 = *puVar6;
      do {
        if (((uVar1 & 0x10) == 0) || (uVar2 = 1, (uVar1 >> 5 & 0x3f) != uVar4)) {
          uVar2 = 0;
        }
        param_3[4] = uVar2;
        LOCK();
        uVar2 = *puVar6;
        if (uVar1 == uVar2) {
          *puVar6 = (uVar4 * 0x20 ^ uVar1) & 0x7e0 ^ uVar1 | 0x10;
          uVar2 = uVar1;
        }
        UNLOCK();
        bVar7 = uVar2 != uVar1;
        uVar1 = uVar2;
      } while (bVar7);
      if (param_3[4] != 0) {
        return param_3;
      }
    }
    param_3[3] = 0;
    param_3[2] = param_2;
    param_3[1] = 1;
  }
  return param_3;
}



/* Function: FUN_0040ef13 */

void __fastcall FUN_0040ef13(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  do {
    uVar4 = uVar2;
    param_4[1] = 0;
    uVar1 = uVar4 | 1;
    if ((uVar4 & 0x4000) >> 0xe != (uint)(param_2 == 4)) {
      uVar2 = (uVar4 & 0x3fe0) >> 5;
      if (uVar2 != 0) {
        param_4[1] = uVar2;
        uVar2 = 0;
        if (param_2 == 0) {
          uVar2 = 4;
        }
        uVar1 = uVar4 & 0xffffc01f | 1;
        param_4[2] = uVar2;
      }
      uVar2 = 0;
      if (param_2 == 4) {
        uVar2 = 0x4000;
      }
      uVar1 = uVar1 & 0xffffbfff | uVar2;
    }
    uVar2 = uVar1 >> 5 & 0x1ff;
    uVar3 = uVar2 + 1;
    if ((0x1ff < uVar3) || (uVar3 < uVar2)) {
      param_4[2] = param_2;
      uVar3 = 1;
      param_4[1] = uVar2;
    }
    LOCK();
    uVar2 = *param_1;
    if (uVar4 == uVar2) {
      *param_1 = uVar1 ^ (uVar3 << 5 ^ uVar1) & 0x3fe0;
      uVar2 = uVar4;
    }
    UNLOCK();
  } while (uVar2 != uVar4);
  param_4[4] = 0;
  *param_4 = ~uVar4 & 1;
  return;
}



/* Function: FUN_0040efe3 */

void __fastcall FUN_0040efe3(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  do {
    uVar4 = uVar2;
    param_4[1] = 0;
    uVar1 = uVar4 | 1;
    if ((uVar4 & 0x400000) >> 0x16 != (uint)(param_2 == 5)) {
      uVar2 = (uVar4 & 0x3f8000) >> 0xf;
      if (uVar2 != 0) {
        param_4[1] = uVar2;
        uVar2 = 1;
        if (param_2 == 1) {
          uVar2 = 5;
        }
        uVar1 = uVar4 & 0xffc07fff | 1;
        param_4[2] = uVar2;
      }
      uVar2 = 0;
      if (param_2 == 5) {
        uVar2 = 0x400000;
      }
      uVar1 = uVar1 & 0xffbfffff | uVar2;
    }
    uVar2 = uVar1 >> 0xf & 0x7f;
    uVar3 = uVar2 + 1;
    if ((0x7f < uVar3) || (uVar3 < uVar2)) {
      param_4[2] = param_2;
      uVar3 = 1;
      param_4[1] = uVar2;
    }
    LOCK();
    uVar2 = *param_1;
    if (uVar4 == uVar2) {
      *param_1 = uVar1 ^ (uVar3 << 0xf ^ uVar1) & 0x3f8000;
      uVar2 = uVar4;
    }
    UNLOCK();
  } while (uVar2 != uVar4);
  param_4[4] = 0;
  *param_4 = ~uVar4 & 1;
  return;
}



/* Function: FUN_0040f0ac */

void __thiscall FUN_0040f0ac(void *this,char *param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  char cVar1;
  char *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004213c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    local_18 = (char *)this;
    local_14 = this;
    cVar1 = FUN_004051b8();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 4);
      AcquireSRWLockExclusive(SRWLock);
      local_18 = param_1;
      local_14 = (void *)param_2;
      FUN_00406a52((void *)((int)this + 0x1c),&local_18,8);
      FUN_0040f16a(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040f136 */

void __fastcall FUN_0040f136(char *param_1)

{
  PSRWLOCK SRWLock;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    FUN_00408927((int)param_1);
    param_1[0xc] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040f16a */

void __fastcall FUN_0040f16a(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 8);
  if (*(char *)((int)param_1 + 0xc) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00415240,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040d299(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00406945(this,(char *)((int)param_1 + 0xc),300000,0);
  }
  return;
}



/* Function: FUN_0040f1cb */

undefined4 FUN_0040f1cb(undefined4 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = DAT_004253dc;
  if ((DAT_004253dc == (code *)0x0) && (pcVar2 = DAT_004253e0, DAT_004253e0 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004263b4)();
    uVar1 = (*pcVar2)();
  }
  return uVar1;
}



/* Function: FUN_0040f204 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 * __fastcall
FUN_0040f204(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 *extraout_EAX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  pcVar2 = DAT_00424704;
  uStack_4 = 0;
  puVar3 = &LAB_004212ab;
  local_8 = 0x40f210;
  puVar7 = (undefined4 *)auStack_20;
  uVar5 = param_1;
  if ((DAT_00424704 != (code *)0x0) &&
     ((param_2 == 0 || (puVar3 = (undefined1 *)(param_2 + -100), puVar3 < (undefined1 *)0x32)))) {
    uStack_24 = 1;
    puVar6 = &uStack_30;
    uStack_30 = 0x40f234;
    uStack_2c = param_1;
    iStack_28 = param_2;
    (*(code *)PTR_guard_check_icall_004263b4)();
    puVar7 = puVar6 + -1;
    puVar6[-1] = 0x40f236;
    puVar3 = (undefined1 *)(*pcVar2)();
    uVar5 = extraout_ECX;
  }
  if (*param_5 != 0) {
    *(undefined4 *)((int)puVar7 + -4) = param_4;
    *(undefined4 *)((int)puVar7 + -8) = param_1;
    *(undefined4 *)((int)puVar7 + -0xc) = 0x40f24c;
    puVar3 = (undefined1 *)
             FUN_0040f0ac(&DAT_00424200,*(char **)((int)puVar7 + -8),
                          *(undefined4 *)((int)puVar7 + -4));
    uVar5 = extraout_ECX_00;
  }
  if (param_5[1] != 0) {
    iVar1 = param_5[2];
    *(undefined4 *)((int)puVar7 + -4) = uVar5;
    *(int *)((int)puVar7 + -8) = param_5[1];
    *(undefined4 *)((int)puVar7 + -0xc) = 0x40f260;
    puVar3 = (undefined1 *)FUN_00408684(param_1,iVar1,*(undefined4 *)((int)puVar7 + -8));
  }
  if ((param_5[4] == 0) && (local_8 = 0, DAT_00424200 != '\0')) {
    *(undefined **)((int)puVar7 + -4) = &DAT_00424204;
    puVar8 = (undefined1 *)((int)puVar7 + -8);
    *(undefined4 *)((int)puVar7 + -8) = 0x40f27f;
    AcquireSRWLockExclusive(*(PSRWLOCK *)((int)puVar7 + -4));
    if (DAT_00424218 == 0) {
      *(undefined4 *)(puVar8 + -4) = 0xffffffff;
      *(undefined4 *)(puVar8 + -8) = 0x40f294;
      piVar4 = FUN_0040d13d(&DAT_00424218);
      *(undefined4 *)(puVar8 + -8) = 0x40f2a0;
      FUN_004086f3(piVar4,FUN_0040f2c0,*(undefined4 *)(puVar8 + -4));
    }
    *(undefined **)(puVar8 + -4) = &DAT_00424204;
    puVar7 = (undefined4 *)(puVar8 + -8);
    *(undefined4 *)(puVar8 + -8) = 0x40f2a7;
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(puVar8 + -4));
    puVar3 = extraout_EAX;
  }
  *(undefined4 *)((int)puVar7 + -4) = 0x40f2ac;
  return puVar3;
}



/* Function: FUN_0040f2c0 */

void FUN_0040f2c0(void)

{
  FUN_0040f136(&DAT_00424200);
  return;
}



/* Function: FUN_0040f2d3 */

bool __fastcall
FUN_0040f2d3(uint *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint local_3c [7];
  uint local_20 [4];
  int local_10;
  undefined4 local_8;
  
  local_8 = param_2;
  puVar3 = FUN_0040edad(param_1,param_5,local_3c);
  puVar6 = local_20;
  for (iVar4 = 6; uVar2 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0040f204(local_8,param_5,0,param_1,(int *)local_20);
  if (param_3 != 0) {
    uVar5 = param_5 | 0x80000000;
    if (param_4 == 0) {
      uVar5 = param_5;
    }
    FUN_00408684(uVar2,uVar5,0);
  }
  pcVar1 = DAT_0042471c;
  if ((local_10 == 0) && (DAT_0042471c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004263b4)(local_8,param_5,param_8);
    (*pcVar1)();
  }
  return local_10 == 0;
}



/* Function: FUN_0040f365 */

void __fastcall
FUN_0040f365(uint *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  if (param_7 != 0) {
    uVar3 = FUN_0040ed30(param_7,param_6);
    uVar4 = (uint)*(byte *)(param_5 + 4);
    bVar2 = FUN_0040f2d3(param_1,param_2,param_3,param_4,uVar3,uVar4,uVar4,uVar4);
    pcVar1 = DAT_00425400;
    if ((CONCAT31(extraout_var,bVar2) != 0) && (DAT_00425400 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_004263b4)(param_2,param_5,0,param_6,&param_7,0,0,1);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_0040f3d1 */

void __fastcall FUN_0040f3d1(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 >> 1;
  if ((param_1[1] & 1) != 0) {
    *param_1 = uVar1 >> 1 | 0x80000000;
  }
  param_1[1] = (int)param_1[1] >> 1 & 0x7fffffff;
  return;
}



/* Function: FUN_0040f3f7 */

void __fastcall FUN_0040f3f7(uint *param_1,uint *param_2)

{
  while ((param_1[1] != 0 || (param_2[1] != 0))) {
    FUN_0040f3d1(param_1);
    FUN_0040f3d1(param_2);
  }
  while (((*param_1 & 0xffff0000) != 0 || ((*param_2 & 0xffff0000) != 0))) {
    FUN_0040f3d1(param_1);
    FUN_0040f3d1(param_2);
  }
  return;
}



/* Function: FUN_0040f443 */

undefined4
FUN_0040f443(undefined4 param_1,HANDLE param_2,int param_3,uint param_4,int param_5,uint param_6,
            int param_7)

{
  ulonglong uVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int iVar3;
  
  bVar2 = FUN_00410d4e();
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((((param_7 == 0) && (param_6 == 0)) || (DAT_0042540c != 0)) && (param_2 != (HANDLE)0xffffffff)
     ) {
    SetFileTime(param_2,(FILETIME *)0x0,(FILETIME *)0x0,(FILETIME *)&DAT_004251e0);
  }
  if ((param_3 == 0) || (DAT_0042556c != 0)) {
    if (iVar3 != 0) {
      return 0;
    }
  }
  else {
    local_14 = param_5;
    local_c = param_7;
    local_18 = param_4;
    local_10 = param_6;
    FUN_0040f3f7(&local_18,&local_10);
    if (local_18 == 0) {
      if (iVar3 != 0) {
        *(undefined1 *)(param_3 + 0x18) = 100;
        return 0;
      }
    }
    else {
      if (((param_5 != 0) || ((int)param_4 < 0)) || (6000000 < param_4)) {
        uVar1 = (ulonglong)(local_10 * 100) / (ulonglong)local_18;
        if (iVar3 != 0) {
          *(char *)(param_3 + 0x18) = (char)uVar1;
          return 0;
        }
        FUN_00417391((int)uVar1);
        goto LAB_0040f531;
      }
      if (iVar3 != 0) {
        *(char *)(param_3 + 0x18) = (char)((local_10 * 100) / local_18);
        return 0;
      }
    }
    FUN_00417309();
  }
LAB_0040f531:
  if (DAT_00425550 != 0) {
    Sleep(DAT_00425550);
  }
  return 0;
}



/* Function: FUN_0040f550 */

void FUN_0040f550(uint *param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint uVar4;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  undefined8 uVar5;
  int local_46c;
  uint local_468;
  uint local_464;
  uint local_45c;
  uint local_458;
  uint local_454;
  wchar_t local_450 [32];
  WCHAR local_410 [256];
  wchar_t awStack_210 [258];
  uint local_c;
  int iVar2;
  
  local_c = DAT_00424140 ^ (uint)&local_46c;
  local_468 = *param_1;
  bVar1 = FUN_00410d4e();
  iVar2 = CONCAT31(extraout_var,bVar1);
  uVar4 = extraout_EDX;
  local_46c = iVar2;
  if (*(char *)(param_2 + 0x79) == '\0') {
LAB_0040f6ab:
    if (local_468 == 1) {
      if ((((param_1[2] == 0) && (param_1[6] == 0 && param_1[7] == 0)) || (DAT_0042540c != 0)) &&
         (param_1[5] != 0xffffffff)) {
        SetFileTime((HANDLE)param_1[5],(FILETIME *)0x0,(FILETIME *)0x0,(FILETIME *)&DAT_004251e0);
        uVar4 = extraout_EDX_05;
      }
      goto LAB_0040f7d5;
    }
    if (local_468 == 2) {
      if ((DAT_00424190 == 0) || (DAT_0042556c != 0)) {
        if (local_46c != 0) goto LAB_0040f7d5;
      }
      else {
        local_454 = param_1[0xf];
        local_458 = param_1[0xe];
        local_464 = param_1[0x11];
        local_468 = param_1[0x10];
        FUN_0040f3f7(&local_458,&local_468);
        if (local_458 != 0 || local_454 != 0) {
          if (((param_1[0xf] == 0) && (-1 < (int)param_1[0xe])) && (param_1[0xe] < 0x5b8d81)) {
            uVar3 = (local_468 * 100) / local_458;
            if (local_46c == 0) goto LAB_0040f728;
          }
          else {
            uVar3 = (local_468 * 100) / local_458;
            local_45c = uVar3;
            if (local_46c == 0) {
              FUN_00417391(uVar3);
              uVar4 = extraout_EDX_03;
              goto LAB_0040f798;
            }
          }
          uVar4 = (local_468 * 100) % local_458;
          *(char *)(param_2 + 0x18) = (char)uVar3;
          goto LAB_0040f7d5;
        }
        if (local_46c != 0) {
          *(undefined1 *)(param_2 + 0x18) = 100;
          uVar4 = extraout_EDX_01;
          goto LAB_0040f7d5;
        }
LAB_0040f728:
        FUN_00417309();
        uVar4 = extraout_EDX_02;
      }
LAB_0040f798:
      if (DAT_00425550 != 0) {
        Sleep(DAT_00425550);
        uVar4 = extraout_EDX_04;
      }
      goto LAB_0040f7d5;
    }
    if (local_468 != 6) goto LAB_0040f6c2;
  }
  else if (((local_468 == 1) || (local_468 == 2)) || (local_468 == 5)) {
LAB_0040f67f:
    while( true ) {
      local_458 = DAT_00424280;
      local_45c = DAT_00424284;
      uVar5 = FUN_00412db1(iVar2,uVar4);
      uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 < 0) break;
      if ((local_45c < DAT_00424264) || ((local_45c <= DAT_00424264 && (local_458 < DAT_00424260))))
      goto LAB_0040f6ab;
      local_450[0] = L'\0';
      FUN_0041e333(0,local_450,DAT_00424260,DAT_00424264);
      local_410[0] = L'\0';
      LoadStringW(DAT_00424da8,0xdf,local_410,0x100);
      FUN_0040e81d(awStack_210,local_410);
      FUN_00415654(extraout_ECX,awStack_210);
      fflush(DAT_00424dac);
      FUN_0040f7f4(1,0);
      iVar2 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
    }
LAB_0040f6c2:
    if (local_468 != 6) goto LAB_0040f7d5;
  }
  else {
    if (local_468 != 6) goto LAB_0040f6ab;
    if (param_1[4] == 0x80070070) goto LAB_0040f67f;
  }
  *(uint *)(param_2 + 0x7c) = param_1[4];
  *(undefined1 *)(param_2 + 0x80) = 1;
LAB_0040f7d5:
  FUN_004200b0(local_c ^ (uint)&local_46c,uVar4);
  return;
}



/* Function: FUN_0040f7f4 */

undefined4 __fastcall FUN_0040f7f4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (0 < param_1) {
    if (param_2 <= param_1) {
      piVar2 = (int *)FUN_0040ec93(0);
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_0040ec93(0);
        FUN_00418a6d(piVar2);
      }
      piVar2 = (int *)FUN_0040ec93(1);
      FUN_00418a30(piVar2);
      FUN_00416a40();
      Sleep(DAT_004241bc);
      FUN_004157eb(0xe1,0);
      piVar2 = (int *)FUN_0040ec93(1);
      FUN_00418a6d(piVar2);
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_0040ec93(0);
        FUN_00418a30(piVar2);
      }
      return 1;
    }
    FUN_004157eb(0xe3,1);
  }
  return 0;
}



/* Function: FUN_0040f891 */

undefined4 __fastcall FUN_0040f891(void *param_1,UINT param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = FUN_00410d4e();
  if ((CONCAT31(extraout_var,bVar1) == 0) && (-1 < param_3)) {
    FUN_00415ae0(param_2,param_1);
    uVar2 = FUN_0040f7f4(param_3,param_4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0040f8ce */

int __fastcall FUN_0040f8ce(FILETIME *param_1,UINT param_2,int param_3,int param_4)

{
  DWORD DVar1;
  int iVar2;
  
  if (DAT_00425490 == 0) {
    if (-1 < param_3) {
      FUN_00415b95(param_2,param_1);
      iVar2 = FUN_0040f7f4(param_3,param_4);
      if (iVar2 == 0) {
        return 0;
      }
      if (param_1[9].dwHighDateTime == 0) {
        return iVar2;
      }
      FUN_00416ec9(param_1,param_1[9].dwHighDateTime,0);
      return iVar2;
    }
  }
  else {
    DVar1 = GetLastError();
    param_1[3].dwHighDateTime = DVar1;
    param_1[4].dwLowDateTime = param_2;
  }
  return 0;
}



/* Function: FUN_0040f930 */

void __fastcall FUN_0040f930(int *param_1,int *param_2)

{
  int *extraout_EDX;
  _SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  if (DAT_0042545c != DAT_00425468) {
    *param_2 = DAT_0042545c;
    GetLocalTime(&local_18);
    *param_1 = (uint)local_18.wHour * 100 + (uint)local_18.wMinute;
    param_2 = extraout_EDX;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040f9bf */

void __fastcall FUN_0040f9bf(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int local_c;
  int local_8;
  
  if (DAT_00425568 != 0) {
    local_c = param_1;
    local_8 = param_1;
    bVar1 = FUN_00410d4e();
    if ((((char)param_1 == '\0') || (CONCAT31(extraout_var,bVar1) == 0)) &&
       (iVar2 = FUN_0040f930(&local_c,&local_8), iVar2 == 0)) {
      if (CONCAT31(extraout_var,bVar1) == 0) {
        FUN_00417273();
        while (iVar2 = FUN_0040f930(&local_c,&local_8), iVar2 == 0) {
          Sleep(10000);
        }
      }
      else {
        ResetEvent(DAT_004241c8);
        WaitForSingleObject(DAT_004241c8,0xffffffff);
      }
    }
  }
  return;
}



/* Function: FUN_0040fa42 */

void FUN_0040fa42(void)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = FUN_0040f930(&local_c,&local_8);
  if (iVar1 == 0) {
    FUN_00417273();
    while( true ) {
      iVar1 = FUN_0040f930(&local_c,&local_8);
      if (iVar1 != 0) break;
      Sleep(10000);
    }
  }
  return;
}



/* Function: FUN_0040fa87 */

void FUN_0040fa87(void)

{
  int iVar1;
  DWORD dwMilliseconds;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar1 = FUN_0040f930(&local_c,&local_8);
  if (iVar1 == 0) {
    ResetEvent(DAT_004241c8);
    Sleep(10000);
    FUN_00417273();
    iVar1 = FUN_0040f930(&local_c,&local_8);
    while (iVar1 == 0) {
      iVar1 = (local_8 / 100) * 0x3c + local_8 % 100;
      dwMilliseconds = 300000;
      iVar2 = (local_c / 100) * 0x3c + local_c % 100;
      if (((iVar2 <= iVar1) && (iVar1 - iVar2 < 7)) || ((iVar1 + 0x5a0) - iVar2 < 7)) {
        dwMilliseconds = 10000;
      }
      Sleep(dwMilliseconds);
      iVar1 = FUN_0040f930(&local_c,&local_8);
    }
  }
  SetEvent(DAT_004241c8);
  return;
}



/* Function: FUN_0040fb4f */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040fb4f(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_1c;
  int *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x40fb5b;
  pcVar1 = *(code **)(DAT_00424018 + 0xc);
  local_1c = param_1;
  (*(code *)PTR_guard_check_icall_004263b4)();
  local_14[0] = (*pcVar1)();
  local_14[0] = local_14[0] + 0x10;
  local_8 = 1;
  if (DAT_00424290 != (int *)0x0) {
    piVar4 = param_1 + 6;
    piVar3 = DAT_00424290;
    do {
      piVar2 = piVar3 + 2;
      piVar3 = (int *)*piVar3;
      piVar2 = FUN_0040ddd5((int *)(*(int *)*piVar2 + -0x10));
      local_18 = piVar2 + 4;
      local_8._0_1_ = 2;
      FUN_0040d4df(local_14,&local_18);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_004044dc(piVar2);
      FUN_00419f9d(piVar4,local_14);
      param_1 = local_1c;
    } while (piVar3 != (int *)0x0);
  }
  if (DAT_0042423c != (int *)0x0) {
    piVar4 = DAT_0042423c;
    do {
      piVar3 = piVar4 + 2;
      piVar4 = (int *)*piVar4;
      piVar3 = FUN_0040ddd5((int *)(*(int *)*piVar3 + -0x10));
      local_1c = piVar3 + 4;
      local_8._0_1_ = 3;
      FUN_0040d4df(local_14,&local_1c);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_004044dc(piVar3);
      FUN_00419f9d(param_1 + 0xc,local_14);
    } while (piVar4 != (int *)0x0);
  }
  FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
  return;
}



/* Function: FUN_0040fc3c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040fc3c(void *param_1,UINT param_2)

{
  int *this;
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *local_18;
  UINT local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x40fc48;
  local_14 = param_2;
  local_18 = (int *)FUN_0041fd5e(0x70);
  if (local_18 == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_00418b06(local_18);
  }
  piVar1 = FUN_0041a4f6(param_1,(int *)&local_18);
  local_8 = 0;
  FUN_0041a27a(this,piVar1);
  local_8 = 0xffffffff;
  FUN_004044dc(local_18 + -4);
  puVar3 = DAT_004242a8;
  while (puVar4 = DAT_004242d8, puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
    piVar1 = FUN_0040ddd5((int *)(*(int *)*puVar4 + -0x10));
    local_18 = piVar1 + 4;
    local_8 = 1;
    FUN_0040f9bf(CONCAT31((int3)((uint)extraout_ECX >> 8),1));
    iVar2 = FUN_0041b922(&local_18,1,0,DAT_00425430,local_14,DAT_00424188);
    local_8 = 0xffffffff;
    if (iVar2 == 0) {
      FUN_004044dc(piVar1);
      puVar4 = DAT_004242d8;
      break;
    }
    FUN_004044dc(piVar1);
  }
  do {
    if (puVar4 == (undefined4 *)0x0) {
LAB_0040fd5c:
      FUN_00419eff(param_1,(int)this);
      FUN_0040474c(this);
      return;
    }
    puVar3 = (undefined4 *)*puVar4;
    piVar1 = FUN_0040ddd5((int *)(*(int *)puVar4[2] + -0x10));
    local_18 = piVar1 + 4;
    local_8 = 2;
    FUN_0040f9bf(CONCAT31((int3)((uint)local_18 >> 8),1));
    iVar2 = FUN_0041b922(&local_18,0,1,DAT_00425430,local_14,DAT_00424188);
    local_8 = 0xffffffff;
    if (iVar2 == 0) {
      FUN_004044dc(piVar1);
      goto LAB_0040fd5c;
    }
    FUN_004044dc(piVar1);
    puVar4 = puVar3;
  } while( true );
}



/* Function: FUN_0040fd79 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0040fd79(int param_1,UINT param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x40fd85;
  puVar4 = DAT_004242c0;
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      return 1;
    }
    puVar1 = puVar4 + 2;
    puVar4 = (undefined4 *)*puVar4;
    piVar2 = FUN_0040ddd5((int *)(*(int *)*puVar1 + -0x10));
    local_14[0] = piVar2 + 4;
    local_8 = 0;
    FUN_0040f9bf(CONCAT31((int3)((uint)extraout_ECX >> 8),1));
    iVar3 = FUN_0041b922(local_14,1,param_1,DAT_00425430,param_2,DAT_00424188);
    if (iVar3 == 0) break;
    local_8 = 0xffffffff;
    FUN_004044dc(piVar2);
  }
  FUN_004044dc(piVar2);
  return 0;
}



/* Function: FUN_0040fdfd */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool __fastcall FUN_0040fdfd(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_ECX_02;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x40fe09;
  iVar4 = 1;
  iVar2 = param_1;
  if ((DAT_00425540 != 0) && (iVar2 = 0, DAT_00425540 <= param_3)) {
    iVar4 = 0;
  }
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  local_18 = param_1;
  local_14 = param_2;
  if (DAT_00425464 == 0) {
    FUN_0040f9bf(iVar2);
    iVar2 = FUN_0040fd79(iVar4,0x238f);
    if (iVar2 == 0) {
      return false;
    }
    if ((DAT_00425510 != 0) || (uVar3 = extraout_ECX_00, DAT_00425558 != 0)) {
      FUN_0040f9bf(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1));
      iVar5 = DAT_00425430;
      iVar2 = DAT_00424188;
      FUN_0040d545(&local_1c,(short *)&DAT_00401ce8);
      local_8 = 2;
      iVar2 = FUN_0041b922(&local_1c,0,iVar4,iVar5,0x238f,iVar2);
      local_8 = 0xffffffff;
      FUN_004044dc((undefined4 *)(local_1c + -0x10));
      uVar3 = extraout_ECX_01;
      param_1 = local_18;
      if (iVar2 == 0) {
        return false;
      }
    }
    if (*(int *)(param_1 + 8) == 1) {
      return true;
    }
    iVar2 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    if (DAT_00425558 == 0) {
      FUN_0040f9bf(iVar2);
      iVar2 = FUN_0040fd79(iVar4,0x2390);
      if (iVar2 == 0) {
        return false;
      }
      if (DAT_00425510 == 0) {
        return true;
      }
      FUN_0040f9bf(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),1));
      iVar5 = DAT_00425430;
      iVar2 = DAT_00424188;
      FUN_0040d545(&local_18,(short *)&DAT_00401ce8);
      local_8 = 4;
      iVar2 = FUN_0041b922(&local_18,0,iVar4,iVar5,0x2390,iVar2);
      FUN_004044dc((undefined4 *)(local_18 + -0x10));
      return iVar2 != 0;
    }
    FUN_0040f9bf(iVar2);
    iVar5 = DAT_00425430;
    iVar2 = DAT_00424188;
    FUN_0040d545(&local_1c,(short *)&DAT_00401ce8);
    local_8 = 3;
  }
  else {
    FUN_0040f9bf(iVar2);
    iVar5 = DAT_00425430;
    iVar2 = DAT_00424188;
    FUN_0040d545(&local_1c,(short *)&DAT_00401ce8);
    iVar1 = local_18;
    local_8 = 0;
    iVar2 = FUN_0041b922(&local_1c,1,iVar4,iVar5,0x238f,iVar2);
    local_8 = 0xffffffff;
    FUN_004044dc((undefined4 *)(local_1c + -0x10));
    if (iVar2 == 0) {
      return false;
    }
    if (*(int *)(iVar1 + 8) == 1) {
      return true;
    }
    FUN_0040f9bf(CONCAT31((int3)((uint)extraout_ECX >> 8),1));
    iVar5 = DAT_00425430;
    iVar2 = DAT_00424188;
    FUN_0040d545(&local_1c,(short *)&DAT_00401ce8);
    local_8 = 1;
  }
  iVar2 = FUN_0041b922(&local_1c,1,iVar4,iVar5,0x2390,iVar2);
  FUN_004044dc((undefined4 *)(local_1c + -0x10));
  if (iVar2 == 0) {
    return false;
  }
  return true;
}



/* Function: FUN_00410040 */

void __fastcall FUN_00410040(void *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  DWORD dwErrCode;
  LPVOID pvVar2;
  
  bVar1 = FUN_00410d4e();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (DAT_00425490 != 0) {
      dwErrCode = GetLastError();
      pvVar2 = TlsGetValue(DAT_004241c4);
      SetLastError(dwErrCode);
      if ((pvVar2 != (LPVOID)0x0) && (*(char *)((int)param_1 + 0x19) == '\x03')) {
        return;
      }
    }
  }
  else if (*(char *)((int)param_1 + 0x19) == '\x02') {
    if (param_2 == &DAT_00425268) {
      *(undefined1 *)((int)param_1 + 0x19) = 4;
    }
    else {
      FUN_0041c285((int)param_1);
      *(undefined1 *)((int)param_1 + 0x19) = 6;
    }
    SetEvent(DAT_0042522c);
    return;
  }
  if (param_3 != 0) {
    FUN_0041e20e(&DAT_004252c0,(int)param_1);
  }
  FUN_0041e20e(param_2,(int)param_1);
  if (param_1 != (void *)0x0) {
    FUN_0041c106((int)param_1);
    free(param_1);
  }
  return;
}



/* Function: FUN_004100f8 */

undefined4 __fastcall FUN_004100f8(void *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_ECX;
  DWORD DStack_20;
  uint uStack_1c;
  UINT UStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar6 = *(int *)((int)param_1 + 8);
  if (((DAT_00425534 == 0) || (*(int *)((int)param_1 + 0x14) != -0x5ffffffd)) &&
     ((DAT_00425544 == 0 || (*(int *)((int)param_1 + 0x14) != -0x5ffffff4)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (DAT_00425424 != 0) {
    return 1;
  }
  if (iVar6 == 0x12) {
    return 1;
  }
  FUN_0040f9bf(CONCAT31((int3)((uint)param_1 >> 8),1));
  if (((iVar6 == 1) &&
      ((((DAT_004241a8 == 0 || (param_2[5] == -0x5ffffffd)) ||
        (((DAT_00425420 & DAT_00425418) >> 0x12 & 1) == 0)) ||
       ((*param_2 != 0 && (*(int *)(*param_2 + 0x20) == 0)))))) &&
     (uVar2 = FUN_00419051(param_2,(int)param_1), uVar2 == 0)) {
    DStack_20 = GetLastError();
    iVar3 = FUN_00418dbc(param_2,extraout_ECX,0x238e);
    if (iVar3 == 0) {
      SetLastError(DStack_20);
      uVar4 = FUN_00415ae0(0x2394,param_2);
      return uVar4;
    }
  }
  uVar4 = 0;
  if (((DAT_004241a8 != 0) && (iVar6 != 9)) || (bVar1)) {
    uVar4 = 1;
  }
  else if (DAT_00425548 == 0) goto LAB_00410232;
  uStack_14 = DAT_00424188;
  uStack_c = DAT_00425414;
  UStack_18 = 0x238e;
  uStack_10 = uVar4;
  iVar3 = FUN_00419432(param_1,param_2,&UStack_18);
  if (iVar3 == 0) {
    return 0;
  }
LAB_00410232:
  if ((((DAT_004254c0 == 0) || ((iVar6 == 9 && (DAT_0042558c == 0)))) ||
      ((DAT_00425408 == 0 && (((iVar6 != 1 && (DAT_004254c8 == 0)) && (DAT_0042558c == 0)))))) ||
     (iVar3 = FUN_00419386(param_1,param_2,DAT_004254c0), iVar3 != 0)) {
    if ((DAT_0042553c != 0) && (iVar6 == 1)) {
      piVar5 = FUN_0041a2f8(param_2,(int *)&DStack_20);
      uStack_1c = GetFileAttributesW((LPCWSTR)*piVar5);
      FUN_004044dc((undefined4 *)(DStack_20 - 0x10));
      if (uStack_1c == 0xffffffff) {
        return 0;
      }
      if (((*(uint *)((int)param_1 + 0x10) ^ uStack_1c) & 0x4000) != 0) {
        FUN_0041a2f8(param_2,(int *)&DStack_20);
        FUN_0041cb15(&DStack_20,*(uint *)((int)param_1 + 0x10) & 0x4000);
        FUN_004044dc((undefined4 *)(DStack_20 - 0x10));
      }
    }
    if ((DAT_004241b4 == 0) ||
       ((((iVar6 == 9 && (DAT_00425500 == 0)) && (DAT_00425520 == 0)) ||
        (iVar6 = FUN_00419191(param_2), iVar6 != 0)))) {
      *(undefined4 *)((int)param_1 + 8) = 0x12;
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00410339 */

void __fastcall FUN_00410339(void *param_1,UINT param_2)

{
  int iVar1;
  undefined *this;
  
  FUN_0040f9bf(CONCAT31((int3)((uint)param_1 >> 8),1));
  if (DAT_00425424 == 0) {
    iVar1 = FUN_0041dc2f(param_1,param_2);
    if (iVar1 == 0) {
      FUN_00415b95(param_2,param_1);
      this = &DAT_004252f0;
      goto LAB_00410379;
    }
  }
  this = &DAT_00425250;
LAB_00410379:
  FUN_0041e20e(this,(int)param_1);
  return;
}



/* Function: FUN_0041038b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041038b(void *param_1,UINT param_2)

{
  int iVar1;
  DWORD DVar2;
  undefined4 extraout_ECX;
  
  FUN_0040f9bf(CONCAT31((int3)((uint)param_1 >> 8),1));
  if ((DAT_00425424 != 0) || (iVar1 = FUN_004197d7(param_1,extraout_ECX,param_2), iVar1 != 0)) {
    if (DAT_00425490 != 0) {
      LOCK();
      UNLOCK();
    }
    _DAT_00425250 = _DAT_00425250 + 1;
    return;
  }
  DVar2 = GetLastError();
  if (DVar2 != 0x91) {
    FUN_00415ae0(param_2,param_1);
  }
  if (DAT_00425490 == 0) {
    _DAT_004252f0 = _DAT_004252f0 + 1;
    return;
  }
  LOCK();
  _DAT_004252f0 = _DAT_004252f0 + 1;
  UNLOCK();
  return;
}



/* Function: FUN_00410402 */

void __fastcall FUN_00410402(FILETIME *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  int *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 *puVar5;
  undefined4 local_30 [11];
  
  bVar1 = FUN_00410d4e();
  FUN_0040f9bf(CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    param_1[9].dwHighDateTime = 0x1005;
    FUN_00416ec9(param_1,0x1005,0);
  }
  if (DAT_00425424 != 0) {
    puVar5 = &DAT_00425280;
LAB_00410441:
    FUN_00410040(param_1,puVar5,1);
    return;
  }
  iVar2 = FUN_004100f8((void *)param_1[8].dwLowDateTime,param_2);
  if (iVar2 == 0) {
    puVar5 = &DAT_00425268;
    goto LAB_00410441;
  }
  piVar3 = (int *)FUN_0040ec93(0);
  FUN_00418a30(piVar3);
  if (DAT_00425584 == 0) {
    uVar4 = extraout_ECX_00;
    if (DAT_0042419c == 0) {
LAB_004104f0:
      if ((((DAT_004254c0 != 0) && (param_1[9].dwLowDateTime != 9)) &&
          (iVar2 = FUN_0041db50(param_1,param_2,DAT_004254c0), uVar4 = extraout_ECX_04, iVar2 == 0))
         || (((DAT_00424194 != 0 || (DAT_004241a0 != 0)) &&
             ((((param_1[9].dwLowDateTime != 9 || (DAT_004241ac == 0)) ||
               ((DAT_00424194 != 0 && ((DAT_00425500 != 0 || (DAT_00425520 != 0)))))) &&
              (iVar2 = FUN_0041b63f(param_1,param_2), uVar4 = extraout_ECX_05, iVar2 == 0))))))
      goto LAB_00410493;
      if (DAT_004254c4 == 0) {
        if ((DAT_004254e4 != 0) && ((param_1[10].dwLowDateTime & 0x20) != 0)) {
          iVar2 = FUN_0041cbac(param_1,param_1[10].dwLowDateTime & 0xffffffdf,uVar4,DAT_00424188);
          if (iVar2 == 0) goto LAB_00410493;
          if (DAT_004241a0 != 0) {
            iVar2 = FUN_0041b470(param_1,param_2,extraout_ECX_06,DAT_00424188);
            puVar5 = &DAT_00425268;
            if (iVar2 == 0) goto LAB_004105be;
          }
        }
      }
      else {
        FUN_00410339(param_1,0x239b);
      }
    }
    else {
      if (((CONCAT31(extraout_var,bVar1) == 0) || (DAT_0042553c == 0)) ||
         ((param_1[10].dwLowDateTime & 0x4000) == 0)) {
        if (((param_1[9].dwLowDateTime != 8) || (DAT_0042554c != 0)) &&
           (param_1[9].dwLowDateTime != 7)) {
          FUN_0040ecc3(local_30);
          iVar2 = FUN_0041cd12(param_1,param_2,extraout_ECX_02);
          uVar4 = extraout_ECX_03;
          goto LAB_0041048f;
        }
        goto LAB_004104f0;
      }
      *(undefined1 *)((int)&param_1[3].dwLowDateTime + 1) = 3;
    }
    puVar5 = &DAT_00425280;
  }
  else {
    iVar2 = FUN_0041cc39(param_1,param_2,0x2393,DAT_00424188);
    uVar4 = extraout_ECX_01;
LAB_0041048f:
    if (iVar2 != 0) goto LAB_004104f0;
LAB_00410493:
    puVar5 = &DAT_00425268;
  }
LAB_004105be:
  FUN_00410040(param_1,puVar5,1);
  piVar3 = (int *)FUN_0040ec93(0);
  FUN_00418a6d(piVar3);
  return;
}



/* Function: FUN_004105e2 */

void __fastcall FUN_004105e2(FILETIME *param_1,int *param_2)

{
  DWORD DVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int iVar5;
  
  DVar1 = param_1[9].dwLowDateTime;
  if (((((DVar1 == 9) || (DVar1 == 5)) || (DVar1 == 4)) || ((DVar1 == 6 || (DVar1 == 7)))) ||
     (DVar1 == 8)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((DAT_0042558c == 0) && ((DAT_00425528 == 0 || (DVar1 == 9)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (DAT_004254fc != 0) {
    if ((bVar2) && ((bVar3 || (DAT_004254b4 != 0)))) {
      iVar5 = 0x11f9;
    }
    else {
      iVar5 = 0x1069;
    }
    FUN_00416ec9(param_1,iVar5,0);
  }
  if ((DAT_00425424 == 0) && (bVar2)) {
    if (bVar3) {
      FUN_004100f8((void *)param_1[8].dwLowDateTime,param_2);
      piVar4 = (int *)FUN_0040ec93(0);
      FUN_00418a30(piVar4);
      iVar5 = FUN_0041db50(param_1,param_2,DAT_004254c0);
      if (iVar5 == 0) goto LAB_004106b0;
      piVar4 = (int *)FUN_0040ec93(0);
      FUN_00418a6d(piVar4);
    }
    if ((DAT_004254b4 != 0) || ((bVar3 && (DAT_004241a0 != 0)))) {
      piVar4 = (int *)FUN_0040ec93(0);
      FUN_00418a30(piVar4);
      iVar5 = FUN_0041b470(param_1,param_2,extraout_ECX,DAT_00424188);
      if (iVar5 == 0) {
LAB_004106b0:
        FUN_00410040(param_1,&DAT_00425268,1);
        piVar4 = (int *)FUN_0040ec93(0);
        FUN_00418a6d(piVar4);
        return;
      }
      piVar4 = (int *)FUN_0040ec93(0);
      FUN_00418a6d(piVar4);
    }
  }
  FUN_00410040(param_1,&DAT_004252a8,1);
  return;
}



/* Function: FUN_0041073e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0041073e(void *param_1)

{
  int iVar1;
  int iVar2;
  FILETIME *pFVar3;
  undefined4 *puVar4;
  int *this;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x41074a;
  FUN_0040f9bf(CONCAT31((int3)((uint)param_1 >> 8),1));
  iVar2 = DAT_00425430;
  iVar1 = DAT_00424188;
  FUN_0040d545(local_14,(short *)&DAT_00401ce8);
  local_8 = 0;
  FUN_0041b922(local_14,1,1,iVar2,0x239f,iVar1);
  local_8 = 0xffffffff;
  FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
  while (*(int *)((int)param_1 + 0x20) != 0) {
    pFVar3 = (FILETIME *)FUN_00404276((int *)((int)param_1 + 0x18));
    iVar1 = DAT_00425524;
    if (pFVar3 == (FILETIME *)0x0) break;
    pFVar3[9].dwLowDateTime = 1;
    FUN_00416ec9(pFVar3,0x1195,iVar1);
    if (DAT_00425524 != 0) {
      FUN_00410339(pFVar3,0x239d);
    }
    FUN_00410040(pFVar3,&DAT_00425310,0);
  }
  do {
    if (*(int *)((int)param_1 + 0x38) == 0) {
LAB_00410862:
      FUN_0041038b(param_1,0x239e);
      return;
    }
    pFVar3 = (FILETIME *)FUN_00404276((int *)((int)param_1 + 0x30));
    iVar1 = DAT_00425524;
    if (pFVar3 == (FILETIME *)0x0) goto LAB_00410862;
    pFVar3[9].dwLowDateTime = 1;
    FUN_00416ec9(pFVar3,0x1131,iVar1);
    if (DAT_00425524 != 0) {
      puVar4 = (undefined4 *)FUN_0041fd5e(0x70);
      if (puVar4 == (undefined4 *)0x0) {
        this = (int *)0x0;
      }
      else {
        this = FUN_00418b06(puVar4);
      }
      FUN_00418c78(this,pFVar3,(int)param_1);
      FUN_0041073e(this);
      FUN_0040474c(this);
    }
    FUN_00410040(pFVar3,&DAT_00425310,0);
  } while( true );
}



/* Function: FUN_00410880 */

undefined4 * __fastcall FUN_00410880(undefined4 *param_1)

{
  thunk_FUN_0042050c(param_1 + 1,8,3,FUN_00418a20);
  *param_1 = 0xffffffff;
  return param_1;
}



/* Function: FUN_004108c0 */

void __fastcall FUN_004108c0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004211f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0xffffffff;
  thunk_FUN_004203fc(param_1 + 1,8,3,guard_check_icall);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00410911 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_00410911(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint extraout_EAX;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  
  InitializeSRWLock((PSRWLOCK)&DAT_00425228);
  uVar2 = DAT_0042543c;
  uVar5 = -(uint)((int)((ulonglong)DAT_0042543c * 0x1c >> 0x20) != 0) |
          (uint)((ulonglong)DAT_0042543c * 0x1c);
  puVar3 = (uint *)FUN_0041fda3(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  local_14 = 0;
  if (puVar3 == (uint *)0x0) {
    DAT_00425624 = (uint *)0x0;
  }
  else {
    puVar1 = puVar3 + 1;
    *puVar3 = uVar2;
    iVar4 = thunk_FUN_0042050c(puVar1,0x1c,uVar2,FUN_00410880);
    DAT_00425624 = puVar1;
    if (puVar1 != (uint *)0x0) {
      if (0 < (int)DAT_0042543c) {
        iVar7 = 0;
        do {
          iVar8 = 3;
          iVar6 = iVar7;
          do {
            iVar4 = FUN_00418a9b((int *)((int)DAT_00425624 + iVar6 + 4));
            iVar6 = iVar6 + 8;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          iVar7 = iVar7 + 0x1c;
          local_14 = local_14 + 1;
        } while (local_14 < (int)DAT_0042543c);
      }
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
  }
  SetLastError(8);
  return extraout_EAX & 0xffffff00;
}



/* Function: FUN_004109db */

int __fastcall FUN_004109db(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (DAT_00425490 != 0) {
    iVar4 = 0;
    if (0 < DAT_0042543c) {
      iVar2 = param_1 << 3;
      do {
        iVar1 = FUN_00418acd((int *)(DAT_00425624 + 4 + iVar2));
        iVar3 = iVar3 + iVar1;
        iVar2 = iVar2 + 0x1c;
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_0042543c);
    }
    return iVar3;
  }
  return 0;
}



/* Function: FUN_00410a27 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00410a27(void)

{
  int *_Memory;
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  int local_18;
  int local_14;
  
  local_14 = 0;
  if (0 < DAT_0042543c) {
    local_18 = 0;
    do {
      ppuVar4 = &PTR_DAT_00401068;
      iVar3 = local_18;
      do {
        puVar1 = *ppuVar4;
        iVar2 = FUN_00418acd((int *)(DAT_00425624 + 4 + iVar3));
        *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + iVar2;
        ppuVar4 = ppuVar4 + 1;
        iVar3 = iVar3 + 8;
      } while ((int)ppuVar4 < 0x401074);
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x1c;
    } while (local_14 < DAT_0042543c);
  }
  if (DAT_00425624 != 0) {
    _Memory = (int *)(DAT_00425624 + -4);
    thunk_FUN_004203fc(DAT_00425624,0x1c,*_Memory,FUN_004108c0);
    free(_Memory);
  }
  DAT_00425624 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
  DAT_00425590 = 0;
  return;
}



/* Function: FUN_00410ad8 */

undefined4 FUN_00410ad8(void)

{
  LPVOID pvVar1;
  HANDLE hObject;
  int iVar2;
  DWORD DVar3;
  undefined4 extraout_EAX;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  
  pvVar1 = TlsGetValue(DAT_004241cc);
  if (pvVar1 != (LPVOID)0x0) {
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00425228);
  uVar5 = 0;
  iVar6 = 0;
  piVar4 = DAT_00425624;
  if (0 < DAT_0042543c) {
    do {
      if (*piVar4 == -1) goto LAB_00410b56;
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 7;
    } while (iVar6 < DAT_0042543c);
  }
  iVar6 = 0;
  if (0 < DAT_0042543c) {
    iVar7 = 0;
    iVar2 = DAT_0042543c;
    piVar4 = DAT_00425624;
    do {
      if (*(int *)(iVar7 + (int)piVar4) != -1) {
        hObject = OpenThread(0x40,0,*(DWORD *)(iVar7 + (int)piVar4));
        if (hObject == (HANDLE)0xffffffff) goto LAB_00410b56;
        CloseHandle(hObject);
        iVar2 = DAT_0042543c;
        piVar4 = DAT_00425624;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x1c;
    } while (iVar6 < iVar2);
  }
LAB_00410b7d:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00425228);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),uVar5);
LAB_00410b56:
  DVar3 = GetCurrentThreadId();
  piVar4 = DAT_00425624;
  DAT_00425624[iVar6 * 7] = DVar3;
  TlsSetValue(DAT_004241cc,piVar4 + iVar6 * 7 + 1);
  uVar5 = 1;
  goto LAB_00410b7d;
}



/* Function: FUN_00410ba0 */

void FUN_00410ba0(undefined4 param_1,FILETIME *param_2,PTP_WORK param_3)

{
  int *piVar1;
  
  if (DAT_00425568 != 0) {
    FUN_0040f9bf(0);
  }
  FUN_00410ad8();
  piVar1 = (int *)FUN_0040ec93(2);
  FUN_00418a30(piVar1);
  piVar1 = (int *)param_2[5].dwHighDateTime;
  *(undefined1 *)((int)&param_2[3].dwLowDateTime + 1) = 2;
  FUN_00410402(param_2,piVar1);
  CloseThreadpoolWork(param_3);
  piVar1 = (int *)FUN_0040ec93(2);
  FUN_00418a6d(piVar1);
  return;
}



/* Function: FUN_00410bfd */

void __fastcall FUN_00410bfd(void *param_1)

{
  PTP_WORK pwk;
  int *piVar1;
  
  pwk = CreateThreadpoolWork(FUN_00410ba0,param_1,(PTP_CALLBACK_ENVIRON)&DAT_00425200);
  if (pwk == (PTP_WORK)0x0) {
    FUN_00410040(param_1,&DAT_00425268,1);
    piVar1 = (int *)FUN_0040ec93(0);
    FUN_00418a6d(piVar1);
    return;
  }
  SubmitThreadpoolWork(pwk);
  return;
}



/* Function: FUN_00410c43 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD FUN_00410c43(void)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  DAT_004241c8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCWSTR)0x0);
  if (DAT_004241c8 == (HANDLE)0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00410c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  DAT_004241c4 = TlsAlloc();
  if (DAT_004241c4 == 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00410c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  BVar2 = TlsSetValue(DAT_004241c4,(LPVOID)0x1);
  if (BVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00410c8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  DAT_004241cc = TlsAlloc();
  if (DAT_004241cc == 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00410ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  uVar3 = FUN_00410911();
  if ((char)uVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00410cb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  DAT_004255f8 = CreateThreadpool((PVOID)0x0);
  if (DAT_004255f8 == (PTP_POOL)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00410ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  SetThreadpoolThreadMaximum(DAT_004255f8,DAT_0042543c);
  DAT_00425620 = CreateThreadpoolCleanupGroup();
  if (DAT_00425620 == (PTP_CLEANUP_GROUP)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00410cf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  _DAT_00425204 = DAT_004255f8;
  _DAT_0042520c = 0;
  _DAT_00425208 = DAT_00425620;
  DAT_0042522c = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  if ((DAT_0042522c != (HANDLE)0x0) && (DAT_0042522c != (HANDLE)0xffffffff)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
    DAT_00425590 = 1;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00410d42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}



/* Function: FUN_00410d4e */

bool FUN_00410d4e(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  bool bVar2;
  
  bVar2 = false;
  if (DAT_00425490 != 0) {
    dwErrCode = GetLastError();
    pvVar1 = TlsGetValue(DAT_004241c4);
    bVar2 = pvVar1 == (LPVOID)0x0;
    SetLastError(dwErrCode);
  }
  return bVar2;
}



/* Function: FUN_00410d87 */

undefined4 __fastcall FUN_00410d87(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  void *this;
  
  while( true ) {
    if (*(int *)(param_1 + 0x20) == 0) {
      return 0;
    }
    this = (void *)FUN_00404276((int *)(param_1 + 0x18));
    if (this == (void *)0x0) break;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
    puVar3 = PTR_PTR_LOOP_0042400c;
    piVar1 = (int *)((int)this + 0x10);
    iVar2 = *(int *)PTR_PTR_LOOP_0042400c;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    *(int **)puVar3 = piVar1;
    *(undefined **)((int)this + 0x14) = puVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)this + 0x19) = 1;
    *(undefined1 *)((int)this + 0x18) = 0;
    FUN_0041c252(this,param_1,param_2);
    if ((DAT_0042553c == 0) || ((*(uint *)((int)this + 0x50) & 0x4000) == 0)) {
      FUN_00410bfd(this);
    }
    else {
      *(undefined1 *)((int)this + 0x19) = 3;
    }
  }
  return 0;
}



/* Function: FUN_00410e21 */

DWORD FUN_00410e21(void)

{
  FILETIME *_Memory;
  char cVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  undefined *puVar6;
  DWORD DVar7;
  int extraout_EDX;
  undefined4 *puVar8;
  uint uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  FILETIME *local_34;
  int iStack_30;
  ulonglong local_28;
  LARGE_INTEGER local_20;
  LARGE_INTEGER LStack_18;
  LARGE_INTEGER local_10;
  
  local_34 = (FILETIME *)0x0;
  cVar2 = '\0';
  bVar4 = false;
  local_20.QuadPart = 0.0;
  local_10.QuadPart = 0.0;
  QueryPerformanceFrequency(&local_10);
  QueryPerformanceCounter(&LStack_18);
  local_28._0_4_ = 0;
  LStack_18.s.HighPart = LStack_18.s.HighPart + -1 + (uint)(LStack_18.s.LowPart != 0);
  LStack_18.s.LowPart = LStack_18.s.LowPart - 1;
  iStack_30 = 0;
  local_28 = 0;
  uVar9 = (uint)local_28;
  iVar12 = iStack_30;
  do {
    ppuVar10 = (undefined **)PTR_LOOP_00424008;
    if ((undefined **)PTR_LOOP_00424008 == &PTR_LOOP_00424008) {
      if ((int **)DAT_00424010 == &DAT_00424010) {
        CloseThreadpoolCleanupGroupMembers(DAT_00425620,0,(PVOID)0x0);
        CloseHandle(DAT_0042522c);
        return 0;
      }
    }
    else {
      do {
        if (DAT_00425568 != 0) {
          FUN_0040fa87();
        }
        _Memory = (FILETIME *)(ppuVar10 + -4);
        if (_Memory == local_34) {
LAB_00410f43:
          cVar1 = *(char *)((int)ppuVar10 + 9);
          if (cVar1 == '\x01') {
            if ((*(char *)(ppuVar10 + 2) == '\0') && (0 < (int)ppuVar10[5])) {
LAB_00411192:
              FUN_004157eb(0xe1,0);
            }
          }
          else {
            if (cVar1 != '\x02') {
              if (cVar1 == '\x03') {
                FUN_00410402(_Memory,(int *)ppuVar10[7]);
                if (ppuVar10[3] == (undefined *)0x0) {
                  *(undefined1 *)((int)ppuVar10 + 9) = 6;
                  goto LAB_00410f83;
                }
LAB_00410fd6:
                puVar3 = ppuVar10[3];
                if (((puVar3 == (undefined *)0x8) || (puVar3 == (undefined *)0xe)) ||
                   ((puVar3 == (undefined *)0x46a ||
                    ((puVar3 == (undefined *)0x540 || (puVar3 == (undefined *)0x8007000e)))))) {
                  bVar4 = true;
                }
                ppuVar11 = (undefined **)*ppuVar10;
                EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
                *(undefined **)(*ppuVar10 + 4) = ppuVar10[1];
                *(undefined **)ppuVar10[1] = *ppuVar10;
                *ppuVar10 = (undefined *)ppuVar10;
                ppuVar10[1] = (undefined *)ppuVar10;
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
                SetLastError((DWORD)ppuVar10[3]);
                FUN_00415b95((UINT)ppuVar10[4],_Memory);
                iVar12 = DAT_00424188;
                if (-1 < DAT_00424188) {
                  puVar3 = ppuVar10[5];
                  ppuVar10[5] = puVar3 + 1;
                  if ((int)puVar3 < iVar12) {
                    if ((int **)DAT_00424010 == &DAT_00424010) {
                      QueryPerformanceCounter(&local_20);
                      uVar13 = __alldiv(local_10.s.LowPart,local_10.s.HighPart,1000,0);
                      lVar14 = __allmul((uint)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_004241bc,
                                        (int)DAT_004241bc >> 0x1f);
                      local_28 = lVar14 + (longlong)local_20 & 0xffffffff;
                      iStack_30 = (int)((ulonglong)(lVar14 + (longlong)local_20) >> 0x20);
                    }
                    puVar6 = PTR_DAT_00424014;
                    puVar3 = *(undefined **)PTR_DAT_00424014;
                    *ppuVar10 = puVar3;
                    *(undefined ***)(puVar3 + 4) = ppuVar10;
                    *(undefined ***)puVar6 = ppuVar10;
                    ppuVar10[1] = puVar6;
                    *(undefined1 *)((int)ppuVar10 + 9) = 5;
                    local_34 = _Memory;
                    goto LAB_004111cf;
                  }
                  FUN_004157eb(0xe3,1);
                }
                puVar8 = &DAT_00425268;
              }
              else {
                if (cVar1 == '\x04') goto LAB_00410fd6;
                if (cVar1 != '\x06') goto LAB_0041119e;
LAB_00410f83:
                EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
                ppuVar11 = (undefined **)*ppuVar10;
                ppuVar11[1] = ppuVar10[1];
                *(undefined **)ppuVar10[1] = *ppuVar10;
                *ppuVar10 = (undefined *)ppuVar10;
                ppuVar10[1] = (undefined *)ppuVar10;
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
                if (((((uint)ppuVar10[0x10] & 0x10) == 0) && (DAT_00424190 != 0)) &&
                   (DAT_0042556c == 0)) {
                  FUN_00417309();
                }
                puVar8 = &DAT_00425280;
              }
              FUN_00410040(_Memory,puVar8,1);
              local_34 = _Memory;
              goto LAB_004111cf;
            }
            QueryPerformanceCounter(&local_20);
            if ((((_Memory != local_34) || (*(char *)(ppuVar10 + 2) != cVar2)) &&
                (LStack_18.s.HighPart <= local_20.s.HighPart)) &&
               ((LStack_18.s.HighPart < local_20.s.HighPart ||
                (LStack_18.s.LowPart <= local_20.s.LowPart)))) {
              cVar2 = *(char *)(ppuVar10 + 2);
              if ((*(char *)(ppuVar10 + 2) == '\0') && (0 < (int)ppuVar10[5])) goto LAB_00411192;
              if (((*(char *)(ppuVar10 + 2) != 'd') && (((uint)ppuVar10[0x10] & 0x10) == 0)) &&
                 (DAT_00424190 != 0)) {
                FUN_00417309();
              }
              uVar13 = __alldiv(local_10.s.LowPart,local_10.s.HighPart,1000,0);
              lVar14 = __allmul((uint)uVar13,(int)((ulonglong)uVar13 >> 0x20),200,0);
              LStack_18.s = lVar14 + local_20.s;
            }
          }
LAB_0041119e:
          DVar7 = WaitForSingleObjectEx(DAT_0042522c,200,0);
          ppuVar11 = ppuVar10;
          local_34 = _Memory;
          if ((((DVar7 != 0) && (DVar7 != 0x80)) && (DVar7 != 0xc0)) && (DVar7 != 0x102)) {
            DVar7 = GetLastError();
            return DVar7;
          }
        }
        else {
          if ((DAT_00425588 == 0) && (puVar3 = ppuVar10[0xc], *(int *)(puVar3 + 0x50) == 0)) {
            FUN_0041a744(puVar3,*(int *)(puVar3 + 0xc));
            FUN_0041a744(ppuVar10[0xc],extraout_EDX);
            *(undefined4 *)(ppuVar10[0xc] + 0x50) = 1;
          }
          if (*(char *)((int)ppuVar10 + 9) != '\a') {
            if (((uint)ppuVar10[0x10] & 0x10) == 0) {
              ppuVar10[0xf] = (undefined *)0x1005;
              FUN_00416ec9(_Memory,0x1005,0);
            }
            goto LAB_00410f43;
          }
          ppuVar11 = (undefined **)*ppuVar10;
          ppuVar11[1] = ppuVar10[1];
          *(undefined **)ppuVar10[1] = *ppuVar10;
          *ppuVar10 = (undefined *)ppuVar10;
          ppuVar10[1] = (undefined *)ppuVar10;
          FUN_0041c106((int)_Memory);
          free(_Memory);
        }
LAB_004111cf:
        ppuVar10 = ppuVar11;
      } while (ppuVar11 != &PTR_LOOP_00424008);
      uVar9 = (uint)local_28;
      iVar12 = iStack_30;
    }
    if ((int **)DAT_00424010 != &DAT_00424010) {
      FUN_00416a40();
    }
    QueryPerformanceCounter(&local_20);
    if (local_20.s.HighPart <= iVar12) {
      if (iVar12 <= local_20.s.HighPart) goto LAB_00411235;
      do {
        do {
          SleepEx(100,1);
          QueryPerformanceCounter(&local_20);
        } while (local_20.s.HighPart < iVar12);
        if (iVar12 < local_20.s.HighPart) break;
LAB_00411235:
      } while (local_20.s.LowPart < uVar9);
    }
    if (bVar4) {
      SetThreadpoolThreadMaximum(DAT_004255f8,1);
    }
    if ((int **)DAT_00424010 != &DAT_00424010) {
      do {
        piVar5 = DAT_00424010;
        *(int *)(*DAT_00424010 + 4) = DAT_00424010[1];
        *(int *)piVar5[1] = *piVar5;
        piVar5[3] = 0;
        *piVar5 = (int)piVar5;
        piVar5[1] = (int)piVar5;
        *(undefined1 *)((int)piVar5 + 9) = 1;
        *(undefined1 *)(piVar5 + 2) = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
        puVar3 = PTR_PTR_LOOP_0042400c;
        iVar12 = *(int *)PTR_PTR_LOOP_0042400c;
        *piVar5 = iVar12;
        *(int **)(iVar12 + 4) = piVar5;
        *(int **)puVar3 = piVar5;
        piVar5[1] = (int)puVar3;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
        if ((*(byte *)(piVar5 + 0x10) & 0x10) == 0) {
          FUN_00410bfd(piVar5 + -4);
        }
        else {
          FUN_004113b7(piVar5 + -4);
        }
        iVar12 = iStack_30;
      } while ((int **)DAT_00424010 != &DAT_00424010);
    }
  } while( true );
}



/* Function: FUN_00411310 */

void FUN_00411310(undefined4 param_1,int param_2,PTP_WORK param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD local_10 [3];
  
  local_10[0] = 0;
  local_10[1] = 0;
  if (DAT_00425568 != 0) {
    FUN_0040f9bf(0);
  }
  FUN_00410ad8();
  *(undefined1 *)(param_2 + 0x19) = 2;
  iVar1 = FUN_004114b9(*(int **)(param_2 + 0x34),*(int **)(param_2 + 0x30),*(int *)(param_2 + 0x38),
                       0,local_10);
  if (iVar1 == 0) {
    *(DWORD *)(param_2 + 0x1c) = local_10[0];
    *(DWORD *)(param_2 + 0x20) = local_10[1];
    if (local_10[0] == 0) {
      DVar2 = GetLastError();
      *(DWORD *)(param_2 + 0x1c) = DVar2;
    }
    *(undefined1 *)(param_2 + 0x19) = 4;
  }
  else {
    FUN_0040474c(*(int **)(param_2 + 0x30));
    *(undefined4 *)(param_2 + 0x30) = 0;
    FUN_0040474c(*(int **)(param_2 + 0x34));
    *(undefined4 *)(param_2 + 0x34) = 0;
    FUN_0041c285(param_2);
    *(undefined1 *)(param_2 + 0x19) = 6;
  }
  SetEvent(DAT_0042522c);
  CloseThreadpoolWork(param_3);
  return;
}



/* Function: FUN_004113b7 */

void __fastcall FUN_004113b7(void *param_1)

{
  PTP_WORK pwk;
  int *piVar1;
  
  pwk = CreateThreadpoolWork(FUN_00411310,param_1,(PTP_CALLBACK_ENVIRON)&DAT_00425200);
  if (pwk == (PTP_WORK)0x0) {
    FUN_00410040(param_1,&DAT_00425268,1);
    piVar1 = (int *)FUN_0040ec93(0);
    FUN_00418a6d(piVar1);
  }
  else {
    SubmitThreadpoolWork(pwk);
  }
  return;
}



/* Function: FUN_00411408 */

void __fastcall FUN_00411408(void *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *this;
  int *piVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
  puVar2 = PTR_PTR_LOOP_0042400c;
  piVar4 = (int *)((int)param_1 + 0x10);
  iVar1 = *(int *)PTR_PTR_LOOP_0042400c;
  *piVar4 = iVar1;
  *(int **)(iVar1 + 4) = piVar4;
  *(int **)puVar2 = piVar4;
  *(undefined **)((int)param_1 + 0x14) = puVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = param_2;
  puVar3 = (undefined4 *)FUN_0041fd5e(0x70);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00418b06(puVar3);
  }
  this = (undefined4 *)0x0;
  *(undefined4 **)((int)param_1 + 0x34) = puVar3;
  FUN_00418c78(puVar3,param_1,*(int *)((int)param_1 + 0x28));
  puVar3 = (undefined4 *)FUN_0041fd5e(0x70);
  if (puVar3 != (undefined4 *)0x0) {
    this = FUN_00418b06(puVar3);
  }
  *(undefined4 **)((int)param_1 + 0x30) = this;
  FUN_00418c78(this,param_1,*(int *)((int)param_1 + 0x2c));
  FUN_004113b7(param_1);
  return;
}



/* Function: FUN_004114b9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_004114b9(int *param_1,int *param_2,int param_3,int param_4,DWORD *param_5)

{
  DWORD DVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  DWORD DVar6;
  FILETIME *pFVar7;
  FILETIME *pFVar8;
  int *piVar9;
  FILETIME *pFVar10;
  undefined4 uVar11;
  int *piVar12;
  void *_Memory;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  undefined4 local_4c [2];
  undefined4 local_44 [2];
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  undefined4 *local_2c;
  int local_28;
  FILETIME *local_24;
  FILETIME *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x4114c5;
  local_28 = 0;
  iVar4 = param_3 + 1;
  local_18 = param_1;
  local_14 = param_2;
  if (DAT_0042546c != 0) {
    local_28 = FUN_00419887(param_1,local_4c,local_44,local_3c,local_34);
  }
  if ((((DAT_00425544 == 0) || (param_1[5] != -0x5ffffff4)) &&
      ((DAT_00425534 == 0 || (param_1[5] != -0x5ffffffd)))) &&
     (bVar3 = FUN_0040fdfd((int)param_1,param_2,iVar4), CONCAT31(extraout_var,bVar3) == 0)) {
    if (DAT_00425490 == 0) {
      DAT_00425268 = DAT_00425268 + 1;
    }
    else {
      LOCK();
      DAT_00425268 = DAT_00425268 + 1;
      UNLOCK();
    }
LAB_00411579:
    if (DAT_00425490 == 0) goto LAB_00411582;
LAB_0041158d:
    param_1[0x18] = param_1[8];
    param_1[0x19] = param_1[8] >> 0x1f;
  }
  else {
    if (param_1[2] != 1) {
      if (DAT_00425490 == 0) {
        DAT_004252a8 = DAT_004252a8 + 1;
      }
      else {
        LOCK();
        DAT_004252a8 = DAT_004252a8 + 1;
        UNLOCK();
      }
      goto LAB_00411579;
    }
    if (DAT_00425490 != 0) goto LAB_0041158d;
    DAT_00425280 = DAT_00425280 + 1;
LAB_00411582:
    FUN_00416dd6(param_1);
  }
  param_1[3] = param_1[2];
  FUN_00419e44(param_1,(int)param_2);
  FUN_00419e44(param_2,(int)param_1);
  FUN_0040fb4f(param_1);
  FUN_0040fb4f(param_2);
  FUN_0040fc3c(param_1,0x238f);
  if (param_1[2] != 1) {
    FUN_0040fc3c(param_2,0x2390);
  }
  if ((param_4 != 0) && ((DAT_00425524 != 0 || (DAT_004254c8 != 0)))) {
    FUN_0040d545(&local_1c,L"System Volume Information");
    local_8 = 0;
    FUN_00419f9d(param_1 + 0xc,&local_1c);
    FUN_00419f9d(param_1 + 6,&local_1c);
    FUN_00419f9d(param_2 + 0xc,&local_1c);
    FUN_00419f9d(param_2 + 6,&local_1c);
    local_8 = 0xffffffff;
    FUN_004044dc((undefined4 *)(local_1c + -0x10));
  }
  if (((((((DAT_00425530 == 0) && (iVar4 != 1)) || (param_1[2] != 1)) &&
        ((DAT_00425544 == 0 || (param_1[5] != -0x5ffffff4)))) &&
       ((piVar12 = param_1 + 2, DAT_00425534 == 0 || (param_1[5] != -0x5ffffffd)))) &&
      (((*piVar12 != 4 && (*piVar12 != 5)) &&
       ((*piVar12 != 6 && ((*piVar12 != 8 && (*piVar12 != 9)))))))) ||
     (iVar5 = FUN_004100f8(param_1,param_2), iVar5 != 0)) {
    LOCK();
    param_1[0x12] = param_1[0x12] + 1;
    UNLOCK();
    LOCK();
    param_2[0x12] = param_2[0x12] + 1;
    UNLOCK();
    piVar12 = param_2 + 0xc;
    pFVar7 = (FILETIME *)FUN_00419fe7(piVar12,0xc);
    local_20 = (FILETIME *)piVar12;
    if (pFVar7 != (FILETIME *)0x0) {
      do {
        if (DAT_004254fc != 0) {
          FUN_00416ec9(pFVar7,0x1131,0);
        }
        FUN_00410040(pFVar7,&DAT_00425310,0);
        pFVar7 = (FILETIME *)FUN_00419fe7(piVar12,0xc);
      } while (pFVar7 != (FILETIME *)0x0);
      local_20 = (FILETIME *)(local_14 + 0xc);
    }
    piVar12 = local_14;
    pFVar8 = (FILETIME *)FUN_00419fe7(&local_20->dwLowDateTime,1);
    pFVar7 = local_20;
    local_24 = pFVar8;
    if (pFVar8 != (FILETIME *)0x0) {
      do {
        local_24 = pFVar8;
        if (DAT_004254d0 == 0) {
          if (DAT_00425524 == 0) goto LAB_00411761;
          iVar5 = 1;
LAB_00411763:
          FUN_00416ec9(pFVar8,0x1131,iVar5);
        }
        else if (DAT_004254fc != 0) {
LAB_00411761:
          iVar5 = 0;
          goto LAB_00411763;
        }
        if ((DAT_004254d0 == 0) && (DAT_00425524 != 0)) {
          local_20 = (FILETIME *)FUN_0041fd5e(0x70);
          if (local_20 == (FILETIME *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = FUN_00418b06((undefined4 *)local_20);
          }
          FUN_00418c78(piVar9,local_24,(int)piVar12);
          FUN_0041073e(piVar9);
          FUN_0040474c(piVar9);
          pFVar8 = local_24;
        }
        FUN_00410040(pFVar8,&DAT_00425310,0);
        pFVar8 = (FILETIME *)FUN_00419fe7(&pFVar7->dwLowDateTime,1);
      } while (pFVar8 != (FILETIME *)0x0);
      local_24 = (FILETIME *)0x0;
      param_1 = local_18;
    }
    piVar9 = piVar12 + 6;
    pFVar7 = (FILETIME *)FUN_00419fe7(piVar9,0xc);
    local_24 = (FILETIME *)piVar9;
    local_20 = pFVar7;
    while (pFVar7 != (FILETIME *)0x0) {
      if (DAT_004254fc != 0) {
        FUN_00416ec9(pFVar7,0x1195,0);
      }
      FUN_00410040(pFVar7,&DAT_00425310,0);
      pFVar7 = (FILETIME *)FUN_00419fe7(piVar9,0xc);
      param_1 = local_18;
    }
    local_24 = (FILETIME *)(piVar12 + 6);
    pFVar7 = (FILETIME *)FUN_00419fe7((undefined4 *)local_24,1);
    pFVar8 = local_24;
    while (pFVar7 != (FILETIME *)0x0) {
      if (DAT_004254d0 == 0) {
        if (DAT_00425524 == 0) goto LAB_00411868;
        iVar5 = 1;
LAB_0041186a:
        FUN_00416ec9(pFVar7,0x1195,iVar5);
      }
      else if (DAT_004254fc != 0) {
LAB_00411868:
        iVar5 = 0;
        goto LAB_0041186a;
      }
      if ((DAT_004254d0 == 0) && (DAT_00425524 != 0)) {
        FUN_00410339(pFVar7,0x239d);
      }
      FUN_00410040(pFVar7,&DAT_00425310,0);
      pFVar7 = (FILETIME *)FUN_00419fe7(&pFVar8->dwLowDateTime,1);
      piVar12 = local_14;
    }
    if ((DAT_00425554 != 0) || (DAT_0042549c != 0)) {
      while (pFVar7 = (FILETIME *)FUN_0041a126(param_1 + 6,0x400,1), pFVar7 != (FILETIME *)0x0) {
        pFVar7[9].dwLowDateTime = 0x11;
        FUN_004105e2(pFVar7,piVar12);
      }
    }
    pFVar7 = (FILETIME *)(param_1 + 6);
    pFVar8 = (FILETIME *)FUN_00419fe7((undefined4 *)pFVar7,0xc);
    piVar12 = local_14;
    local_24 = pFVar7;
    if (pFVar8 != (FILETIME *)0x0) {
      do {
        FUN_004105e2(pFVar8,piVar12);
        pFVar8 = (FILETIME *)FUN_00419fe7((undefined4 *)pFVar7,0xc);
      } while (pFVar8 != (FILETIME *)0x0);
      local_24 = (FILETIME *)(local_18 + 6);
      param_1 = local_18;
    }
    pFVar7 = local_24;
    if ((DAT_00425578 != 0) || ((local_20 = local_24, DAT_0042419c == 0 && (DAT_00425584 == 0)))) {
      pFVar10 = (FILETIME *)FUN_00419fe7(&local_24->dwLowDateTime,1);
      piVar12 = local_14;
      pFVar8 = local_24;
      local_20 = local_24;
      if (pFVar10 != (FILETIME *)0x0) {
        do {
          FUN_004105e2(pFVar10,piVar12);
          pFVar10 = (FILETIME *)FUN_00419fe7(&pFVar8->dwLowDateTime,1);
        } while (pFVar10 != (FILETIME *)0x0);
        local_20 = (FILETIME *)(local_18 + 6);
        pFVar7 = (FILETIME *)(local_18 + 6);
        param_1 = local_18;
      }
    }
    if ((DAT_00425470 != 0) || (local_24 = local_20, DAT_004254e4 != 0)) {
      pFVar10 = (FILETIME *)FUN_0041a126(&pFVar7->dwLowDateTime,0x20,0);
      piVar12 = local_14;
      pFVar8 = local_20;
      local_24 = local_20;
      if (pFVar10 != (FILETIME *)0x0) {
        do {
          pFVar10[9].dwLowDateTime = 0xb;
          FUN_004105e2(pFVar10,piVar12);
          pFVar10 = (FILETIME *)FUN_0041a126(&pFVar8->dwLowDateTime,0x20,0);
        } while (pFVar10 != (FILETIME *)0x0);
        local_24 = (FILETIME *)(local_18 + 6);
        pFVar7 = (FILETIME *)(local_18 + 6);
        param_1 = local_18;
      }
    }
    piVar12 = local_14;
    local_20 = local_24;
    if (DAT_00425458 != 0) {
      pFVar10 = (FILETIME *)FUN_0041a126(&pFVar7->dwLowDateTime,DAT_00425458,0);
      piVar12 = local_14;
      pFVar8 = local_24;
      local_20 = local_24;
      if (pFVar10 != (FILETIME *)0x0) {
        do {
          pFVar10[9].dwLowDateTime = 10;
          FUN_004105e2(pFVar10,piVar12);
          pFVar10 = (FILETIME *)FUN_0041a126(&pFVar8->dwLowDateTime,DAT_00425458,0);
        } while (pFVar10 != (FILETIME *)0x0);
        local_20 = (FILETIME *)(local_18 + 6);
        pFVar7 = (FILETIME *)(local_18 + 6);
        param_1 = local_18;
      }
    }
    if (DAT_00425560 != 0) {
      pFVar7 = (FILETIME *)FUN_0041a126(&pFVar7->dwLowDateTime,DAT_00425560,1);
      pFVar8 = local_20;
      while (pFVar7 != (FILETIME *)0x0) {
        pFVar7[9].dwLowDateTime = 10;
        FUN_004105e2(pFVar7,piVar12);
        pFVar7 = (FILETIME *)FUN_0041a126(&pFVar8->dwLowDateTime,DAT_00425560,1);
      }
    }
    if (DAT_004254a0 != 0 || DAT_004254a4 != 0) {
      while (pFVar7 = (FILETIME *)FUN_0041a184(param_1,DAT_004254a0,DAT_004254a4,1),
            pFVar7 != (FILETIME *)0x0) {
        pFVar7[9].dwLowDateTime = 0xd;
        FUN_004105e2(pFVar7,piVar12);
      }
    }
    if (DAT_00425518 != 0 || DAT_0042551c != 0) {
      while (pFVar7 = (FILETIME *)FUN_0041a184(param_1,DAT_00425518,DAT_0042551c,0),
            pFVar7 != (FILETIME *)0x0) {
        pFVar7[9].dwLowDateTime = 0xe;
        FUN_004105e2(pFVar7,piVar12);
      }
    }
    if (DAT_00425448 != 0) {
      while (pFVar7 = FUN_0041a1e2(param_1,(FILETIME *)&DAT_00424b98,1,0), pFVar7 != (FILETIME *)0x0
            ) {
        pFVar7[9].dwLowDateTime = 0xf;
        FUN_004105e2(pFVar7,piVar12);
      }
    }
    if (DAT_004254d8 != 0) {
      while (pFVar7 = FUN_0041a1e2(param_1,(FILETIME *)&DAT_00424fb8,0,0), pFVar7 != (FILETIME *)0x0
            ) {
        pFVar7[9].dwLowDateTime = 0x10;
        FUN_004105e2(pFVar7,piVar12);
      }
    }
    if (DAT_00425494 != 0) {
      while (pFVar7 = FUN_0041a1e2(param_1,(FILETIME *)&DAT_00424fc0,1,1), pFVar7 != (FILETIME *)0x0
            ) {
        pFVar7[9].dwLowDateTime = 0xf;
        FUN_004105e2(pFVar7,piVar12);
      }
    }
    if (DAT_004254cc != 0) {
      while (pFVar7 = FUN_0041a1e2(param_1,(FILETIME *)&DAT_00424988,0,1), pFVar7 != (FILETIME *)0x0
            ) {
        pFVar7[9].dwLowDateTime = 0x10;
        FUN_004105e2(pFVar7,piVar12);
      }
    }
    if ((DAT_00425564 != 0) &&
       (pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,4), pFVar7 != (FILETIME *)0x0)) {
      do {
        FUN_004105e2(pFVar7,piVar12);
        pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,4);
      } while (pFVar7 != (FILETIME *)0x0);
    }
    if ((DAT_0042555c != 0) &&
       (pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,5), pFVar7 != (FILETIME *)0x0)) {
      do {
        FUN_004105e2(pFVar7,piVar12);
        pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,5);
      } while (pFVar7 != (FILETIME *)0x0);
    }
    if ((DAT_00425498 != 0) &&
       (pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,6), pFVar7 != (FILETIME *)0x0)) {
      do {
        FUN_004105e2(pFVar7,piVar12);
        pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,6);
      } while (pFVar7 != (FILETIME *)0x0);
    }
    if ((DAT_004241b8 != 0) &&
       (pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,7), pFVar7 != (FILETIME *)0x0)) {
      do {
        FUN_004105e2(pFVar7,piVar12);
        pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,7);
      } while (pFVar7 != (FILETIME *)0x0);
    }
    if (((DAT_004241b0 != 0) && (DAT_0042554c == 0)) &&
       (pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,8), pFVar7 != (FILETIME *)0x0)) {
      do {
        FUN_004105e2(pFVar7,piVar12);
        pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,8);
      } while (pFVar7 != (FILETIME *)0x0);
    }
    if ((DAT_004241ac != 0) &&
       (pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,9), pFVar7 != (FILETIME *)0x0)) {
      do {
        FUN_004105e2(pFVar7,piVar12);
        pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,9);
      } while (pFVar7 != (FILETIME *)0x0);
    }
    pFVar7 = (FILETIME *)FUN_00419fe7(param_1 + 6,2);
    piVar9 = param_1;
    if (pFVar7 != (FILETIME *)0x0) {
      local_24 = (FILETIME *)(param_1 + 6);
      do {
        FUN_00416ec9(pFVar7,0x1069,DAT_00425524);
        if (DAT_00425524 == 0) {
          FUN_00410040(pFVar7,&DAT_004252d8,1);
        }
        else {
          local_24 = (FILETIME *)FUN_0041fd5e(0x70);
          if (local_24 == (FILETIME *)0x0) {
            local_24 = (FILETIME *)0x0;
          }
          else {
            local_24 = (FILETIME *)FUN_00418b06((undefined4 *)local_24);
          }
          FUN_00418c78(local_24,pFVar7,(int)piVar12);
          FUN_0041073e(local_24);
          FUN_0040474c((int *)local_24);
          bVar3 = DAT_00425578 == 0;
          pFVar7[9].dwLowDateTime = 1;
          if (bVar3) {
            FUN_00410402(pFVar7,piVar12);
          }
          else {
            FUN_004105e2(pFVar7,piVar12);
          }
        }
        pFVar7 = (FILETIME *)FUN_00419fe7((undefined4 *)(param_1 + 6),2);
        piVar9 = local_18;
      } while (pFVar7 != (FILETIME *)0x0);
    }
    LOCK();
    piVar9[0x13] = piVar9[0x13] + 1;
    UNLOCK();
    if (DAT_00425490 == 0) {
      while ((piVar9[8] != 0 &&
             (pFVar7 = (FILETIME *)FUN_00404276(piVar9 + 6), pFVar7 != (FILETIME *)0x0))) {
        FUN_00410402(pFVar7,piVar12);
      }
    }
    else {
      if (1 < piVar9[8]) {
        FUN_004100f8(piVar9,piVar12);
      }
      iVar5 = FUN_00410d87((int)piVar9,(int)piVar12);
      if (iVar5 != 0) goto LAB_00411dda;
    }
    if ((DAT_00425554 != 0) || (DAT_0042541c != 0)) {
      while (pFVar7 = (FILETIME *)FUN_0041a126(piVar9 + 0xc,0x400,1), pFVar7 != (FILETIME *)0x0) {
        pFVar7[9].dwLowDateTime = 0x11;
        FUN_004105e2(pFVar7,piVar12);
      }
    }
    pFVar7 = (FILETIME *)FUN_00419fe7(piVar9 + 0xc,0xc);
    piVar12 = local_14;
    while (pFVar7 != (FILETIME *)0x0) {
      FUN_004105e2(pFVar7,piVar12);
      pFVar7 = (FILETIME *)FUN_00419fe7(piVar9 + 0xc,0xc);
    }
    piVar12 = piVar9 + 0xc;
    local_24 = (FILETIME *)piVar12;
    if ((DAT_00425578 != 0) &&
       (pFVar7 = (FILETIME *)FUN_00419fe7(piVar12,1), piVar2 = local_14,
       local_24 = (FILETIME *)piVar12, pFVar7 != (FILETIME *)0x0)) {
      do {
        FUN_004105e2(pFVar7,piVar2);
        pFVar7 = (FILETIME *)FUN_00419fe7(piVar12,1);
      } while (pFVar7 != (FILETIME *)0x0);
      local_24 = (FILETIME *)(local_18 + 0xc);
      piVar9 = local_18;
    }
    pFVar7 = local_24;
    if ((DAT_00425544 != 0) || (local_18 = (int *)local_24, DAT_00425534 != 0)) {
      pFVar8 = (FILETIME *)FUN_00419fe7(&local_24->dwLowDateTime,3);
      local_18 = (int *)local_24;
      if (pFVar8 != (FILETIME *)0x0) {
        do {
          FUN_00416ec9(pFVar8,0x1069,DAT_00425524);
          if (DAT_00425524 == 0) {
            FUN_00410040(pFVar8,&DAT_004252d8,1);
          }
          else {
            local_20 = (FILETIME *)FUN_0041fd5e(0x70);
            if (local_20 == (FILETIME *)0x0) {
              piVar12 = (int *)0x0;
            }
            else {
              piVar12 = FUN_00418b06((undefined4 *)local_20);
            }
            FUN_00418c78(piVar12,pFVar8,(int)local_14);
            if ((pFVar8[10].dwHighDateTime == 0xa000000c) ||
               (pFVar8[10].dwHighDateTime == 0xa0000003)) {
              FUN_0041073e(piVar12);
            }
            else {
              FUN_0041038b(piVar12,0x239e);
            }
            FUN_0040474c(piVar12);
            bVar3 = DAT_00425578 == 0;
            pFVar8[9].dwLowDateTime = 1;
            if (bVar3) {
              if (DAT_00425510 != 0) {
                if (DAT_00425490 != 0) {
                  FUN_0041c252(pFVar8,(int)piVar9,(int)local_14);
                  FUN_00411408(extraout_ECX,iVar4);
                  goto LAB_00412042;
                }
                local_20 = (FILETIME *)FUN_0041fd5e(0x70);
                if (local_20 == (FILETIME *)0x0) {
                  local_20 = (FILETIME *)0x0;
                }
                else {
                  local_20 = (FILETIME *)FUN_00418b06((undefined4 *)local_20);
                }
                FUN_00418c78(local_20,pFVar8,(int)piVar9);
                local_18 = (int *)FUN_0041fd5e(0x70);
                if (local_18 == (int *)0x0) {
                  piVar12 = (int *)0x0;
                }
                else {
                  piVar12 = FUN_00418b06(local_18);
                }
                FUN_00418c78(piVar12,pFVar8,(int)local_14);
                if (DAT_00425490 != 0) {
                  LOCK();
                  UNLOCK();
                }
                DAT_004252c0 = DAT_004252c0 + 1;
                FUN_004114b9((int *)local_20,piVar12,iVar4,0,(DWORD *)0x0);
                FUN_0040474c(piVar12);
                FUN_0040474c((int *)local_20);
              }
              FUN_0041c106((int)pFVar8);
              free(pFVar8);
            }
            else {
              FUN_004105e2(pFVar8,local_14);
            }
          }
LAB_00412042:
          pFVar8 = (FILETIME *)FUN_00419fe7(&local_24->dwLowDateTime,3);
        } while (pFVar8 != (FILETIME *)0x0);
        local_18 = piVar9 + 0xc;
        pFVar7 = (FILETIME *)(piVar9 + 0xc);
      }
    }
    pFVar7 = (FILETIME *)FUN_00419fe7(&pFVar7->dwLowDateTime,2);
    piVar12 = local_14;
    if (pFVar7 != (FILETIME *)0x0) {
      local_20 = (FILETIME *)(local_14 + 0x12);
      do {
        FUN_00416ec9(pFVar7,0x1069,DAT_00425524);
        if (DAT_00425524 == 0) {
          FUN_00410040(pFVar7,&DAT_004252d8,1);
        }
        else {
          local_24 = (FILETIME *)FUN_0041fd5e(0x88);
          if (local_24 == (FILETIME *)0x0) {
            pFVar8 = (FILETIME *)0x0;
          }
          else {
            pFVar8 = (FILETIME *)FUN_0041c06c((undefined4 *)local_24);
          }
          pFVar8[8].dwLowDateTime = (DWORD)local_14;
          LOCK();
          local_20->dwLowDateTime = local_20->dwLowDateTime + 1;
          UNLOCK();
          FUN_0040d4df(&pFVar8[8].dwHighDateTime,&pFVar7[8].dwHighDateTime);
          iVar5 = DAT_00425524;
          DVar6 = pFVar7[0xd].dwLowDateTime;
          pFVar8[0xd].dwHighDateTime = pFVar7[0xd].dwHighDateTime;
          pFVar8[0xd].dwLowDateTime = DVar6;
          DVar6 = pFVar7[0xe].dwHighDateTime;
          DVar1 = pFVar7[0xe].dwLowDateTime;
          pFVar8[9].dwHighDateTime = 0;
          pFVar8[0xe].dwHighDateTime = DVar6;
          pFVar8[0xe].dwLowDateTime = DVar1;
          pFVar8[9].dwLowDateTime = 1;
          FUN_00416ec9(pFVar8,0x1195,iVar5);
          FUN_00410339(pFVar8,0x239d);
          FUN_00410040(pFVar8,&DAT_00425310,0);
          bVar3 = DAT_00425578 == 0;
          pFVar7[9].dwLowDateTime = 1;
          if (bVar3) {
            if (DAT_00425510 != 0) {
              if (DAT_00425490 != 0) {
                FUN_0041c252(pFVar7,(int)piVar9,(int)local_14);
                FUN_00411408(extraout_ECX_00,iVar4);
                goto LAB_00412210;
              }
              local_24 = (FILETIME *)FUN_0041fd5e(0x70);
              if (local_24 == (FILETIME *)0x0) {
                local_24 = (FILETIME *)0x0;
              }
              else {
                local_24 = (FILETIME *)FUN_00418b06((undefined4 *)local_24);
              }
              FUN_00418c78(local_24,pFVar7,(int)piVar9);
              local_2c = (undefined4 *)FUN_0041fd5e(0x70);
              if (local_2c == (undefined4 *)0x0) {
                piVar12 = (int *)0x0;
              }
              else {
                piVar12 = FUN_00418b06(local_2c);
              }
              FUN_00418c78(piVar12,pFVar7,(int)local_14);
              if (DAT_00425490 != 0) {
                LOCK();
                UNLOCK();
              }
              DAT_004252c0 = DAT_004252c0 + 1;
              FUN_004114b9((int *)local_24,piVar12,iVar4,0,(DWORD *)0x0);
              FUN_0040474c(piVar12);
              FUN_0040474c((int *)local_24);
            }
            FUN_0041c106((int)pFVar7);
            free(pFVar7);
          }
          else {
            FUN_004105e2(pFVar7,local_14);
          }
        }
LAB_00412210:
        pFVar7 = (FILETIME *)FUN_00419fe7(local_18,2);
      } while (pFVar7 != (FILETIME *)0x0);
      local_18 = piVar9 + 0xc;
      piVar12 = local_14;
    }
    while ((local_18[2] != 0 && (_Memory = (void *)FUN_00404276(local_18), _Memory != (void *)0x0)))
    {
      if (DAT_00425510 == 0) {
        FUN_0041c106((int)_Memory);
        free(_Memory);
      }
      else if (DAT_00425490 == 0) {
        local_2c = (undefined4 *)FUN_0041fd5e(0x70);
        if (local_2c == (undefined4 *)0x0) {
          local_24 = (FILETIME *)0x0;
        }
        else {
          local_24 = (FILETIME *)FUN_00418b06(local_2c);
        }
        FUN_00418c78(local_24,_Memory,(int)piVar9);
        local_2c = (undefined4 *)FUN_0041fd5e(0x70);
        if (local_2c == (undefined4 *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = FUN_00418b06(local_2c);
        }
        FUN_00418c78(piVar12,_Memory,(int)local_14);
        if (DAT_00425490 != 0) {
          LOCK();
          UNLOCK();
        }
        DAT_004252c0 = DAT_004252c0 + 1;
        FUN_004114b9((int *)local_24,piVar12,iVar4,0,(DWORD *)0x0);
        FUN_0040474c(piVar12);
        FUN_0040474c((int *)local_24);
        FUN_0041c106((int)_Memory);
        free(_Memory);
        piVar12 = local_14;
      }
      else {
        FUN_0041c252(_Memory,(int)piVar9,(int)piVar12);
        FUN_00411408(extraout_ECX_01,iVar4);
      }
    }
    if (DAT_0042546c != 0) {
      piVar9[0x16] = 1;
    }
    LOCK();
    iVar4 = piVar9[0x13] + -1;
    piVar9[0x13] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      FUN_00412380(piVar9,piVar12);
    }
    if ((local_28 != 0) && (DAT_0042546c != 0)) {
      FUN_004199ef(piVar12,local_4c,local_44,local_3c,local_34);
    }
    uVar11 = 1;
  }
  else {
    if (param_5 != (DWORD *)0x0) {
      DVar6 = GetLastError();
      *param_5 = DVar6;
      param_5[1] = 0x2396;
    }
LAB_00411dda:
    uVar11 = 0;
  }
  return uVar11;
}



/* Function: FUN_00412380 */

void __fastcall FUN_00412380(void *param_1,int *param_2)

{
  int iVar1;
  
  if ((DAT_00425424 == 0) &&
     (((DAT_004254a8 != 0 || (*(int *)((int)param_1 + 0xc) == 1)) ||
      (((DAT_004254c8 != 0 && (DAT_004254c0 != 0)) &&
       ((*(int *)((int)param_1 + 0xc) != 9 || (DAT_0042558c != 0)))))))) {
    iVar1 = FUN_00418dbc(param_2,param_1,0x238e);
    if (iVar1 != 0) {
      FUN_00419b45(param_1,param_2);
    }
  }
  FUN_0040474c((int *)param_1);
  FUN_0040474c(param_2);
  return;
}



/* Function: FUN_004123ff */

void __fastcall FUN_004123ff(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_EDX;
  wchar_t local_730 [914];
  uint local_c;
  
  local_c = DAT_00424140 ^ (uint)local_730;
  if (DAT_00425434 == 0) {
    FUN_00418845(local_730);
    FUN_0041765d(local_730);
    FUN_00417f52();
    param_2 = extraout_EDX;
  }
  FUN_004200b0(local_c ^ (uint)local_730,param_2);
  return;
}



/* Function: FUN_00412454 */

void __fastcall FUN_00412454(HANDLE param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  _LUID local_20;
  _TOKEN_PRIVILEGES local_18;
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  BVar1 = LookupPrivilegeValueW((LPCWSTR)0x0,param_2,&local_20);
  uVar2 = extraout_EDX;
  if (BVar1 != 0) {
    local_18.Privileges[0].Luid.LowPart = local_20.LowPart;
    local_18.PrivilegeCount = 1;
    local_18.Privileges[0].Luid.HighPart = local_20.HighPart;
    local_18.Privileges[0].Attributes = 2;
    BVar1 = AdjustTokenPrivileges(param_1,0,&local_18,0x10,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
    uVar2 = extraout_EDX_00;
    if (BVar1 != 0) {
      GetLastError();
      uVar2 = extraout_EDX_01;
    }
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_004124cd */

void __fastcall FUN_004124cd(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int iVar4;
  uint dwNotifyFilter;
  int iVar5;
  HANDLE pvStack_a2c;
  HANDLE pvStack_a28;
  BOOL local_a24;
  int local_a20;
  int local_a1c;
  LARGE_INTEGER local_a18;
  WCHAR aWStack_a10 [256];
  wchar_t awStack_810 [1026];
  uint local_c;
  
  local_c = DAT_00424140 ^ (uint)&pvStack_a2c;
  local_a18.s.LowPart = 0;
  local_a18.s.HighPart = 0;
  do {
    iVar5 = 0;
    local_a1c = -1;
    if (DAT_00425444 == 0) {
      if (DAT_00425438 == 0) goto LAB_00412733;
      DAT_00425444 = 1;
    }
    if (DAT_00425438 == 0) {
      DAT_00425438 = 1;
    }
    if ((DAT_00425510 == 0) || (local_a24 = 1, DAT_00425540 == 1)) {
      local_a24 = 0;
    }
    BVar2 = local_a24;
    dwNotifyFilter = 0x1b;
    if (DAT_00424194 != 0) {
      dwNotifyFilter = 0x1f;
    }
    if (DAT_004254c0 != 0) {
      dwNotifyFilter = dwNotifyFilter | 0x100;
    }
    do {
      piVar1 = FUN_0041a2f8(DAT_00424fc8,&local_a20);
      pvStack_a2c = FindFirstChangeNotificationW((LPCWSTR)*piVar1,BVar2,dwNotifyFilter);
      FUN_004044dc((undefined4 *)(local_a20 + -0x10));
      if (pvStack_a2c != (HANDLE)0xffffffff) break;
      FUN_00415ae0(0x23a7,DAT_00424fc8);
      FUN_004171ed();
      Sleep(DAT_00425444 * 60000);
    } while (pvStack_a2c == (HANDLE)0xffffffff);
    pvStack_a28 = CreateWaitableTimerW((LPSECURITY_ATTRIBUTES)0x0,0,(LPCWSTR)0x0);
    iVar4 = local_a1c;
    if (pvStack_a28 == (HANDLE)0x0) {
      FUN_00415ae0(0x23a7,DAT_00424fc8);
      FindCloseChangeNotification(pvStack_a2c);
      param_2 = extraout_EDX_02;
LAB_00412733:
      FUN_004200b0(local_c ^ (uint)&pvStack_a2c,param_2);
      return;
    }
    BVar2 = SetWaitableTimer(pvStack_a28,&local_a18,60000,(PTIMERAPCROUTINE)0x0,(LPVOID)0x0,0);
    if (BVar2 != 0) {
      FUN_004171ed();
      do {
        while (DVar3 = WaitForMultipleObjects(2,&pvStack_a2c,0,0xffffffff), DVar3 != 0) {
          if (DVar3 != 1) goto LAB_004126f8;
          iVar4 = iVar4 + 1;
          if (DAT_00424190 != 0) {
            aWStack_a10[0] = L'\0';
            LoadStringW(DAT_00424da8,0xe7,aWStack_a10,0x100);
            FUN_00418994(awStack_810,aWStack_a10);
            FUN_00415654(extraout_ECX,awStack_810);
            fflush(DAT_00424dac);
          }
          if ((DAT_00425444 <= iVar4) && (DAT_00425438 <= iVar5)) {
            CloseHandle(pvStack_a28);
            FindCloseChangeNotification(pvStack_a2c);
            FUN_0040fa42();
            *(undefined4 *)((int)DAT_00424fc8 + 8) = 9;
            FUN_004157eb(7,1);
            FUN_00417434(0x21);
            FUN_00415d82(extraout_ECX_00,extraout_EDX);
            param_2 = extraout_EDX_00;
            goto LAB_00412733;
          }
        }
        iVar5 = iVar5 + 1;
        BVar2 = FindNextChangeNotification(pvStack_a2c);
      } while (BVar2 != 0);
    }
LAB_004126f8:
    FUN_00415ae0(0x23a7,DAT_00424fc8);
    CloseHandle(pvStack_a28);
    param_2 = extraout_EDX_01;
  } while( true );
}



/* Function: FUN_0041274e */

/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041274e(int param_1,int param_2)

{
  int *piVar1;
  UINT UVar2;
  DWORD DVar3;
  HANDLE ProcessHandle;
  BOOL BVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  FARPROC pFVar8;
  FARPROC pFVar9;
  int *piVar10;
  FILE *pFVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar12;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 uVar13;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  HMODULE hModule;
  UINT local_48;
  HMODULE local_44;
  int local_40;
  HANDLE local_3c;
  SYSTEMTIME local_38;
  wchar_t local_28 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  hModule = (HMODULE)0x0;
  local_40 = param_2;
  local_44 = (HMODULE)0x0;
  local_8 = 0;
  _wsetlocale(1,L".OCP");
  _wsetlocale(3,L".OCP");
  _wsetlocale(4,L".OCP");
  _wsetlocale(5,L".OCP");
  UVar2 = GetConsoleOutputCP();
  swprintf_s(local_28,8,L".%d",UVar2);
  _wsetlocale(2,local_28);
  SetThreadUILanguage(0);
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  DAT_00424dac = FUN_004209fb(1);
  DAT_00424da8 = GetModuleHandleW((LPCWSTR)0x0);
  local_38.wYear = 0x7bc;
  local_38.wMonth = 1;
  local_38.wDayOfWeek = 2;
  local_38.wHour = 0;
  local_38.wMinute = 0;
  local_38.wSecond = 0;
  local_38.wMilliseconds = 0;
  local_38.wDay = local_38.wDayOfWeek;
  SystemTimeToFileTime(&local_38,(LPFILETIME)&DAT_004251e0);
  local_48 = 2;
  NtSetInformationProcess(0xffffffff,0x27,&local_48,4);
  DVar3 = GetCurrentProcessId();
  ProcessHandle = OpenProcess(0x400,0,DVar3);
  if (ProcessHandle != (HANDLE)0x0) {
    BVar4 = OpenProcessToken(ProcessHandle,0x28,&local_3c);
    CloseHandle(ProcessHandle);
    param_2 = local_40;
    if (BVar4 != 0) {
      DAT_004254f4 = FUN_00412454(local_3c,L"SeBackupPrivilege");
      DAT_004254f0 = FUN_00412454(local_3c,L"SeRestorePrivilege");
      DAT_004254f8 = FUN_00412454(local_3c,L"SeSecurityPrivilege");
      FUN_00412454(local_3c,L"SeTakeOwnershipPrivilege");
      CloseHandle(local_3c);
      param_2 = local_40;
    }
  }
  if (DAT_00424da8 == (HMODULE)0x0) {
    DVar3 = GetLastError();
    wprintf(L"\nError %d (0x%08X) - This Program Requires Windows NT\n",DVar3,DVar3);
    FUN_00412cf2(extraout_ECX,extraout_EDX);
    return;
  }
  local_48 = SetErrorMode(0);
  SetErrorMode(local_48 | 0x8001);
  puVar5 = (undefined4 *)FUN_0041fd5e(0x70);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_00424fc8 = (int *)0x0;
  }
  else {
    DAT_00424fc8 = FUN_00418b06(puVar5);
  }
  puVar5 = (undefined4 *)FUN_0041fd5e(0x70);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_0042477c = (int *)0x0;
  }
  else {
    DAT_0042477c = FUN_00418b06(puVar5);
  }
  uVar6 = FUN_0041312c(&DAT_00425850);
  if ((char)uVar6 != '\0') {
    DAT_00425638 = 1;
  }
  iVar7 = FUN_0040c9c6(param_1,param_2);
  piVar10 = DAT_0042477c;
  if (iVar7 == 0) goto joined_r0x00412c54;
  if (DAT_00424fcc != 0) {
    FUN_004157eb(0xe,1);
    piVar10 = DAT_0042477c;
    goto joined_r0x00412c54;
  }
  pFVar9 = DAT_004251d8;
  pFVar8 = DAT_004251dc;
  if (DAT_00425404 != 0) {
    hModule = LoadLibraryW(L"kernel32.dll");
    local_44 = hModule;
    if (hModule != (HMODULE)0x0) {
      pFVar8 = GetProcAddress(hModule,"BackupReadEx");
      pFVar9 = GetProcAddress(hModule,"BackupWriteEx");
      if ((pFVar8 != (FARPROC)0x0) && (pFVar9 != (FARPROC)0x0)) goto LAB_004129d3;
    }
    DAT_00425404 = 0;
    pFVar9 = DAT_004251d8;
    pFVar8 = DAT_004251dc;
  }
LAB_004129d3:
  DAT_004251dc = pFVar8;
  DAT_004251d8 = pFVar9;
  FUN_0040fa42();
  do {
    DAT_004252c0 = 0;
    DAT_004252c4 = 0;
    _DAT_004252c8 = 0;
    _DAT_004252d0 = 0;
    DAT_00425280 = 0;
    DAT_00425284 = 0;
    _DAT_00425288 = 0;
    _DAT_00425290 = 0;
    DAT_004252a8 = 0;
    DAT_004252ac = 0;
    _DAT_004252b0 = 0;
    _DAT_004252b8 = 0;
    DAT_00425268 = 0;
    DAT_0042526c = 0;
    _DAT_00425270 = 0;
    _DAT_00425278 = 0;
    DAT_004252d8 = 0;
    DAT_004252dc = 0;
    _DAT_004252e0 = 0;
    _DAT_004252e8 = 0;
    DAT_00425310 = 0;
    DAT_00425314 = 0;
    _DAT_00425318 = 0;
    _DAT_00425320 = 0;
    _DAT_00425250 = 0;
    _DAT_00425254 = 0;
    _DAT_00425258 = 0;
    _DAT_00425260 = 0;
    _DAT_004252f0 = 0;
    _DAT_004252f4 = 0;
    _DAT_004252f8 = 0;
    _DAT_00425300 = 0;
    if (DAT_00425490 != 0) {
      DVar3 = FUN_00410c43();
      if (DVar3 != 0) goto LAB_00412acd;
      DAT_00425588 = 1;
    }
    piVar10 = (int *)FUN_0040ec93(0);
    FUN_00418a9b(piVar10);
    piVar10 = (int *)FUN_0040ec93(1);
    FUN_00418a9b(piVar10);
    piVar10 = (int *)FUN_0040ec93(2);
    FUN_00418a9b(piVar10);
    piVar10 = (int *)FUN_0040ec93(2);
    FUN_00418a30(piVar10);
    if (DAT_00425490 != 0) {
      LOCK();
      UNLOCK();
    }
    DAT_004252c0 = DAT_004252c0 + 1;
    FUN_00418cf1();
    piVar1 = DAT_00424fc8;
    piVar10 = DAT_0042477c;
    DAT_0042477c[0x15] = 1;
    FUN_004114b9(piVar1,piVar10,0,1,(DWORD *)0x0);
    if (DAT_00425490 != 0) {
      DVar3 = FUN_00410e21();
      if (DVar3 != 0) {
LAB_00412acd:
        GetLastError();
        uVar12 = extraout_ECX_00;
        uVar13 = extraout_EDX_00;
        if (hModule != (HMODULE)0x0) {
          FreeLibrary(hModule);
          uVar12 = extraout_ECX_01;
          uVar13 = extraout_EDX_01;
        }
        FUN_00412cf2(uVar12,uVar13);
        return;
      }
      if (DAT_00425490 == 0) {
        DAT_00425280 = DAT_00425280 + 1;
      }
      else {
        LOCK();
        DAT_00425280 = DAT_00425280 + 1;
        UNLOCK();
      }
    }
    piVar10 = (int *)FUN_0040ec93(2);
    FUN_00418a6d(piVar10);
    if (DAT_00425434 == 0) {
      FUN_004123ff(extraout_ECX_02,extraout_EDX_02);
      uVar12 = extraout_ECX_04;
      uVar13 = extraout_EDX_04;
    }
    else {
      FUN_004157eb(1,0);
      uVar12 = extraout_ECX_03;
      uVar13 = extraout_EDX_03;
    }
    if (DAT_00425490 != 0) {
      FUN_00410a27();
      uVar12 = extraout_ECX_05;
      uVar13 = extraout_EDX_05;
    }
    iVar7 = FUN_004124cd(uVar12,uVar13);
    piVar10 = DAT_0042477c;
  } while (iVar7 != 0);
joined_r0x00412c54:
  while (piVar1 = DAT_00424fc8, piVar10 != (int *)0x0) {
    piVar1 = (int *)*piVar10;
    FUN_0040474c(piVar10);
    piVar10 = piVar1;
  }
  while (piVar1 != (int *)0x0) {
    piVar10 = (int *)*piVar1;
    FUN_0040474c(piVar1);
    piVar1 = piVar10;
  }
  FUN_00408a8c();
  pFVar11 = FUN_004209fb(1);
  if (DAT_00424dac != pFVar11) {
    fclose(DAT_00424dac);
    DAT_00424dac = FUN_004209fb(1);
  }
  SetErrorMode(local_48);
  uVar12 = extraout_ECX_06;
  uVar13 = extraout_EDX_06;
  if (DAT_004241c8 != (HANDLE)0xffffffff) {
    CloseHandle(DAT_004241c8);
    uVar12 = extraout_ECX_07;
    uVar13 = extraout_EDX_07;
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
    uVar12 = extraout_ECX_08;
    uVar13 = extraout_EDX_08;
  }
  FUN_00412cf2(uVar12,uVar13);
  return;
}



/* Function: Catch@00412cd0 */

undefined * Catch_00412cd0(void)

{
  FUN_004157eb(0x1e,1);
  return &DAT_00412ce1;
}



/* Function: FUN_00412cf2 */

void __fastcall FUN_00412cf2(undefined4 param_1,undefined4 param_2)

{
  FUN_00420a5c(param_1,param_2);
  return;
}



/* Function: FUN_00412cfe */

void __fastcall FUN_00412cfe(int *param_1)

{
  if (*param_1 != 0) {
    FreeLibrary((HMODULE)*param_1);
  }
  *param_1 = 0;
  return;
}



/* Function: FUN_00412d1b */

DWORD FUN_00412d1b(LPCWSTR param_1)

{
  DWORD DVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_00424279 != '\0') {
    wprintf(L"PathOnVolume \'%s\'\n",param_1);
  }
  if (DAT_00424258 != (HANDLE)0xffffffff) {
    CloseHandle(DAT_00424258);
  }
  DAT_00424258 = CreateFileW(param_1,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
  if (DAT_00424258 == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    uVar2 = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      uVar2 = DVar1;
    }
    if (DAT_00424279 != '\0') {
      wprintf(L"Failed to open Volume 0x%08X\n",uVar2);
    }
  }
  else {
    uVar2 = FUN_00412db1(extraout_ECX,extraout_EDX);
  }
  return uVar2;
}



/* Function: FUN_00412db1 */

void __fastcall FUN_00412db1(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined1 local_90 [8];
  uint local_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined1 local_70 [24];
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  uint uStack_18;
  uint uStack_14;
  uint local_c;
  
  lVar7 = CONCAT44(DAT_00424274,DAT_00424270);
  local_c = DAT_00424140 ^ (uint)&uStack_9c;
  DAT_00424278 = 0;
  if (DAT_00424258 == -1) {
LAB_00412fdd:
    uVar6 = CONCAT44(param_2,iStack_94);
    uVar10 = CONCAT44(DAT_00424284,DAT_00424280);
    lVar7 = CONCAT44(DAT_00424274,DAT_00424270);
    lVar9 = CONCAT44(DAT_0042426c,DAT_00424268);
    if (DAT_00424279 != '\0') {
      wprintf(L"\nFailed to update volume space 0x%08X\n");
      uVar6 = CONCAT44(extraout_EDX_00,iStack_94);
      uVar10 = CONCAT44(DAT_00424284,DAT_00424280);
      lVar7 = CONCAT44(DAT_00424274,DAT_00424270);
      lVar9 = CONCAT44(DAT_0042426c,DAT_00424268);
    }
  }
  else {
    if (DAT_00424289 == '\0') {
      uVar6 = NtQueryVolumeInformationFile(DAT_00424258,local_90,local_70,0x60);
      iStack_94 = (int)uVar6;
      lVar7 = CONCAT44(DAT_00424274,DAT_00424270);
      if (iStack_94 < 0) {
        DAT_00424289 = '\x01';
        uVar1 = DAT_00424264;
        uVar4 = DAT_00424260;
      }
      else {
        lVar7 = __allmul((uint)((ulonglong)uStack_14 * (ulonglong)uStack_18),
                         (int)((ulonglong)uStack_14 * (ulonglong)uStack_18 >> 0x20),uStack_50,
                         iStack_4c);
        DAT_00424264 = (undefined4)((ulonglong)lVar7 >> 0x20);
        DAT_00424260 = (undefined4)lVar7;
        uStack_9c = DAT_00424264;
        uStack_98 = DAT_00424260;
        lVar7 = __allmul((uint)((ulonglong)uStack_14 * (ulonglong)uStack_18),
                         (int)((ulonglong)uStack_14 * (ulonglong)uStack_18 >> 0x20),uStack_58,
                         iStack_54);
        DAT_0042426c = (uint)((ulonglong)lVar7 >> 0x20);
        DAT_00424268 = (uint)lVar7;
        lVar7 = __allmul((uint)((ulonglong)uStack_14 * (ulonglong)uStack_18),
                         (int)((ulonglong)uStack_14 * (ulonglong)uStack_18 >> 0x20),uStack_48,
                         iStack_44);
        uVar6 = CONCAT44((int)((ulonglong)lVar7 >> 0x20),iStack_94);
        lVar7 = lVar7 + CONCAT44(uStack_9c,uStack_98);
        uVar1 = uStack_9c;
        uVar4 = uStack_98;
      }
      iStack_94 = (int)uVar6;
      lVar9 = CONCAT44(DAT_0042426c,DAT_00424268);
      lVar8 = CONCAT44(uVar1,uVar4);
      if (iStack_94 < 0) goto LAB_00412edc;
    }
    else {
LAB_00412edc:
      DAT_00424274 = (undefined4)((ulonglong)lVar7 >> 0x20);
      DAT_00424270 = (undefined4)lVar7;
      iVar2 = NtQueryVolumeInformationFile(DAT_00424258,local_90,&local_88,0x18);
      if (iVar2 < 0) {
        if (DAT_00424279 != '\0') {
          wprintf(L"\nfailed to query file size\n");
        }
        uVar10 = RtlNtStatusToDosError();
        param_2 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar6 = CONCAT44(param_2,iStack_94);
        uVar3 = (uint)uVar10;
        uVar10 = CONCAT44(DAT_00424284,DAT_00424280);
        lVar7 = CONCAT44(DAT_00424274,DAT_00424270);
        lVar9 = CONCAT44(DAT_0042426c,DAT_00424268);
        uVar5 = uVar3 & 0xffff | 0x80070000;
        if ((int)uVar3 < 1) {
          uVar5 = uVar3;
        }
        if (-1 < (int)uVar5) goto LAB_00412ff4;
        goto LAB_00412fdd;
      }
      lVar8 = __allmul((uint)((ulonglong)uStack_74 * (ulonglong)uStack_78),
                       (int)((ulonglong)uStack_74 * (ulonglong)uStack_78 >> 0x20),uStack_80,
                       iStack_7c);
      DAT_00424264 = (undefined4)((ulonglong)lVar8 >> 0x20);
      DAT_00424260 = (undefined4)lVar8;
      uStack_9c = DAT_00424264;
      uStack_98 = DAT_00424260;
      lVar9 = __allmul((uint)((ulonglong)uStack_74 * (ulonglong)uStack_78),
                       (int)((ulonglong)uStack_74 * (ulonglong)uStack_78 >> 0x20),local_88,iStack_84
                      );
      uVar6 = CONCAT44((int)((ulonglong)lVar9 >> 0x20),iStack_94);
      lVar7 = lVar8;
    }
    iStack_94 = (int)uVar6;
    DAT_0042426c = (uint)((ulonglong)lVar9 >> 0x20);
    DAT_00424268 = (uint)lVar9;
    DAT_00424274 = (undefined4)((ulonglong)lVar7 >> 0x20);
    DAT_00424270 = (undefined4)lVar7;
    if (DAT_00424279 != '\0') {
      wprintf(L"\nfree bytes: total 0x%I64X, avail 0x%I64X\n",lVar7,lVar8);
      uVar6 = CONCAT44(extraout_EDX,iStack_94);
      lVar7 = CONCAT44(DAT_00424274,DAT_00424270);
      lVar9 = CONCAT44(DAT_0042426c,DAT_00424268);
    }
    iStack_94 = (int)uVar6;
    uVar10 = CONCAT44(DAT_00424284,DAT_00424280);
    DAT_00424274 = (undefined4)((ulonglong)lVar7 >> 0x20);
    DAT_00424270 = (undefined4)lVar7;
    DAT_0042426c = (uint)((ulonglong)lVar9 >> 0x20);
    DAT_00424268 = (uint)lVar9;
    DAT_00424278 = 1;
    if (DAT_00424288 == '\0') {
      uVar10 = __aulldiv(DAT_00424268,DAT_0042426c,10,0);
      lVar7 = CONCAT44(DAT_00424274,DAT_00424270);
      lVar9 = CONCAT44(DAT_0042426c,DAT_00424268);
      uVar6 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),iStack_94);
      DAT_00424288 = '\x01';
    }
  }
LAB_00412ff4:
  iStack_94 = (int)uVar6;
  DAT_00424284 = (undefined4)((ulonglong)uVar10 >> 0x20);
  DAT_00424280 = (undefined4)uVar10;
  DAT_00424274 = (undefined4)((ulonglong)lVar7 >> 0x20);
  DAT_00424270 = (undefined4)lVar7;
  DAT_0042426c = (uint)((ulonglong)lVar9 >> 0x20);
  DAT_00424268 = (uint)lVar9;
  FUN_004200b0(local_c ^ (uint)&uStack_9c,(int)((ulonglong)uVar6 >> 0x20));
  return;
}



/* Function: FUN_00413011 */

undefined1 FUN_00413011(uint param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = 0;
  *param_3 = 0;
  if (DAT_00424278 != '\0') {
    if ((DAT_00424264 < DAT_00424284) ||
       ((DAT_00424264 <= DAT_00424284 && (DAT_00424260 <= DAT_00424280)))) {
      uStack_c = 0;
      local_10 = 0;
    }
    else {
      local_10 = DAT_00424260 - DAT_00424280;
      uStack_c = (DAT_00424264 - DAT_00424284) - (uint)(DAT_00424260 < DAT_00424280);
    }
    if ((uStack_c <= param_2) &&
       (((uStack_c < param_2 || (local_10 < param_1)) &&
        (*param_3 = 1, local_10 == 0 && uStack_c == 0)))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Function: FUN_00413084 */

uint __fastcall FUN_00413084(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00413282(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00413387(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_004130bc */

uint __fastcall FUN_004130bc(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_004133e0(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_004134e5(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_004130f4 */

uint __fastcall FUN_004130f4(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00413696(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_0041379b(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0041312c */

uint __fastcall FUN_0041312c(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  void *pvStack_c;
  
  local_10 = param_1;
  pvStack_c = param_1;
  FUN_004138f6(param_1,(uint *)&local_10);
  uVar1 = local_10._0_1_;
  local_10 = (void *)((uint)local_10 & 0xffffff01);
  uVar2 = FUN_004139fb(param_1,(byte)local_10);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_0041316a */

uint __fastcall FUN_0041316a(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00413a5e(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00413b63(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_004131a2 */

uint __fastcall FUN_004131a2(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00413bbc(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00413cc1(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_004131da */

uint __fastcall FUN_004131da(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00413d1a(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00413e1f(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_00413212 */

uint __fastcall FUN_00413212(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00413e78(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00413f7d(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0041324a */

uint __fastcall FUN_0041324a(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00413fd6(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_004140db(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_00413282 */

uint * __thiscall FUN_00413282(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00414134(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_00413361;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_00413351:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00413351;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_00413361:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00413387 */

void __thiscall FUN_00413387(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413282(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x353ddd7,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_004133e0 */

uint * __thiscall FUN_004133e0(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_0041420c(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_004134bf;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_004134af:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004134af;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_004134bf:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004134e5 */

void __thiscall FUN_004134e5(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004133e0(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x33b9b30,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_0041353e */

void __fastcall FUN_0041353e(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004142e2(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040f365(param_1 + 2,0x33b9b19,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_00413594 */

void __fastcall FUN_00413594(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004143e7(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040f365(param_1 + 2,0x3039059,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_004135ea */

void __fastcall FUN_004135ea(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004144ec(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040f365(param_1 + 2,0x3038cec,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_00413640 */

void __fastcall FUN_00413640(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004145f1(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040f365(param_1 + 2,0x3037091,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_00413696 */

uint * __thiscall FUN_00413696(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_004146f6(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_00413775;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_00413765:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00413765;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_00413775:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0041379b */

void __thiscall FUN_0041379b(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413696(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x33b9b29,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_004137f4 */

void __fastcall FUN_004137f4(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004147a9(param_1,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_0040f365(param_1 + 2,0x33b9b24,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_c,1,0);
  return;
}



/* Function: FUN_0041384a */

void __fastcall FUN_0041384a(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004148ae(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040f365(param_1 + 2,0x2af34ec,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_004138a0 */

void __fastcall FUN_004138a0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004149b3(param_1,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_0040f365(param_1 + 2,0x2af34e9,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_c,1,0);
  return;
}



/* Function: FUN_004138f6 */

uint * __thiscall FUN_004138f6(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00414ab8(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_004139d5;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_004139c5:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004139c5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_004139d5:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004139fb */

void __thiscall FUN_004139fb(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10 [3];
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004138f6(this,local_10);
    uVar2 = *puVar1;
  }
  local_14 = 2;
  local_18 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x2fb0754,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_18,
               (uint)param_1,3);
  return;
}



/* Function: FUN_00413a5e */

uint * __thiscall FUN_00413a5e(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00414b76(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_00413b3d;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_00413b2d:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00413b2d;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_00413b3d:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00413b63 */

void __thiscall FUN_00413b63(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413a5e(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x2f75fc4,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_00413bbc */

uint * __thiscall FUN_00413bbc(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00414c1c(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_00413c9b;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_00413c8b:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00413c8b;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_00413c9b:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00413cc1 */

void __thiscall FUN_00413cc1(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413bbc(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x31367ef,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_00413d1a */

uint * __thiscall FUN_00413d1a(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00414ce5(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_00413df9;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_00413de9:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00413de9;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_00413df9:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00413e1f */

void __thiscall FUN_00413e1f(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413d1a(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x3136812,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_00413e78 */

uint * __thiscall FUN_00413e78(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00414dae(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_00413f57;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_00413f47:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00413f47;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_00413f57:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00413f7d */

void __thiscall FUN_00413f7d(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413e78(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x3136804,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_00413fd6 */

uint * __thiscall FUN_00413fd6(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00414e77(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_004140b5;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_004140a5:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004140a5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_004140b5:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004140db */

void __thiscall FUN_004140db(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413fd6(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x32eb9d9,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_00414134 */

uint * FUN_00414134(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = 0x40;
  if ((uVar3 & 0xffffff3f) != 0) {
    uVar4 = 0;
    if ((uVar3 & 0xffffff3f) == 2) {
      uVar4 = 0x40;
    }
  }
  *param_1 = (((uVar3 & 3) << 2 | uVar3 & 0x40) << 2 | uVar3 & 0x80) << 3 | uVar4;
  bVar2 = false;
  if (((uVar3 & 0x40) << 2 | uVar3 & 0x80) == 0x180) {
    bVar1 = true;
  }
  else {
    if (uVar4 == 0) goto LAB_004141ea;
    bVar1 = false;
  }
  uVar4 = FUN_004130bc(&DAT_004255e8);
  if ((char)uVar4 == '\0') {
LAB_004141d7:
    bVar2 = false;
  }
  else {
    uVar4 = FUN_0041324a(&DAT_00425640);
    if ((char)uVar4 == '\0') goto LAB_004141d7;
    bVar2 = true;
  }
  if ((bVar1) && (!bVar2)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_004141ea:
  uVar4 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar2)) {
    uVar4 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar4;
  return param_1;
}



/* Function: FUN_0041420c */

uint * FUN_0041420c(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x40;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
  }
  *param_1 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3 | uVar3;
  bVar4 = false;
  if (((uVar2 & 0x40) << 2 | uVar2 & 0x80) == 0x180) {
    bVar1 = true;
  }
  else {
    if (uVar3 == 0) goto LAB_004142c0;
    bVar1 = false;
  }
  uVar3 = FUN_004130f4(&DAT_00425690);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    FUN_0041384a((uint *)&DAT_004255d8);
  }
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_004142c0:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_004142e2 */

uint * __thiscall FUN_004142e2(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00414f40(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_004143c1;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_004143b1:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004143b1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_004143c1:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004143e7 */

uint * __thiscall FUN_004143e7(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00414fac(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_004144c6;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_004144b6:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004144b6;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_004144c6:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004144ec */

uint * __thiscall FUN_004144ec(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00415018(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_004145cb;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_004145bb:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004145bb;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_004145cb:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004145f1 */

uint * __thiscall FUN_004145f1(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_00415084(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_004146d0;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_004146c0:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004146c0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_004146d0:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004146f6 */

uint * FUN_004146f6(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x40;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
  }
  *param_1 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3 | uVar3;
  bVar1 = false;
  if ((((uVar2 & 0x40) << 2 | uVar2 & 0x80) == 0x180) || (uVar3 != 0)) {
    FUN_004137f4((uint *)&DAT_00425660);
    FUN_004138a0((uint *)&DAT_00425628);
    bVar1 = true;
  }
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar1)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_004147a9 */

uint * __thiscall FUN_004147a9(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_1c [2];
  undefined4 local_14;
  void *local_10;
  int local_c;
  int local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_c = FUN_004089a2();
  FUN_004150f0(local_1c,&local_8);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_8 != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_1c[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_1c[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_00414888;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_c == 0) || (local_c != DAT_00424210)) {
LAB_00414878:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_14 = 3;
    local_10 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_14,8);
    if ((char)uVar2 == '\0') goto LAB_00414878;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_00414888:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004148ae */

uint * __thiscall FUN_004148ae(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_0041515c(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_0041498d;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_0041497d:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0041497d;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_0041498d:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004149b3 */

uint * __thiscall FUN_004149b3(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_1c [2];
  undefined4 local_14;
  void *local_10;
  int local_c;
  int local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_c = FUN_004089a2();
  FUN_004151c8(local_1c,&local_8);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_8 != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_1c[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_1c[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_00414a92;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_c == 0) || (local_c != DAT_00424210)) {
LAB_00414a82:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_14 = 3;
    local_10 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_14,8);
    if ((char)uVar2 == '\0') goto LAB_00414a82;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_00414a92:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00414ab8 */

uint * FUN_00414ab8(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = 0x40;
  if ((uVar3 & 0xffffff3f) != 0) {
    uVar4 = 0;
    if ((uVar3 & 0xffffff3f) == 2) {
      uVar4 = 0x40;
    }
  }
  *param_1 = (((uVar3 & 3) << 2 | uVar3 & 0x40) << 2 | uVar3 & 0x80) << 3 | uVar4;
  cVar2 = '\0';
  if (((uVar3 & 0x40) << 2 | uVar3 & 0x80) == 0x180) {
    bVar1 = true;
  }
  else {
    if (uVar4 == 0) goto LAB_00414b54;
    bVar1 = false;
  }
  uVar4 = FUN_00413084(&DAT_00425598);
  cVar2 = (char)uVar4;
  if ((bVar1) && (cVar2 == '\0')) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00414b54:
  uVar4 = 1;
  if (((*param_1 & 0x40) == 0) || (cVar2 == '\0')) {
    uVar4 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar4;
  return param_1;
}



/* Function: FUN_00414b76 */

uint * FUN_00414b76(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x40;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
  }
  *param_1 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3 | uVar3;
  bVar1 = false;
  if ((((uVar2 & 0x40) << 2 | uVar2 & 0x80) == 0x180) || (uVar3 != 0)) {
    FUN_00413640((uint *)&DAT_00425670);
    bVar1 = true;
  }
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar1)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00414c1c */

uint * FUN_00414c1c(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x40;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
  }
  *param_1 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3 | uVar3;
  bVar4 = false;
  if (((uVar2 & 0x40) << 2 | uVar2 & 0x80) == 0x180) {
    bVar1 = true;
  }
  else {
    if (uVar3 == 0) goto LAB_00414cc3;
    bVar1 = false;
  }
  FUN_00413640((uint *)&DAT_00425670);
  uVar3 = FUN_0041316a(&DAT_00425650);
  bVar4 = (char)uVar3 != '\0';
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00414cc3:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00414ce5 */

uint * FUN_00414ce5(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x40;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
  }
  *param_1 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3 | uVar3;
  bVar4 = false;
  if (((uVar2 & 0x40) << 2 | uVar2 & 0x80) == 0x180) {
    bVar1 = true;
  }
  else {
    if (uVar3 == 0) goto LAB_00414d8c;
    bVar1 = false;
  }
  FUN_004135ea((uint *)&DAT_004255b8);
  uVar3 = FUN_004131a2(&DAT_00425610);
  bVar4 = (char)uVar3 != '\0';
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00414d8c:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00414dae */

uint * FUN_00414dae(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x40;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
  }
  *param_1 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3 | uVar3;
  bVar4 = false;
  if (((uVar2 & 0x40) << 2 | uVar2 & 0x80) == 0x180) {
    bVar1 = true;
  }
  else {
    if (uVar3 == 0) goto LAB_00414e55;
    bVar1 = false;
  }
  FUN_00413594((uint *)&DAT_00425680);
  uVar3 = FUN_004131da(&DAT_004255a8);
  bVar4 = (char)uVar3 != '\0';
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00414e55:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00414e77 */

uint * FUN_00414e77(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x40;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
  }
  *param_1 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3 | uVar3;
  bVar4 = false;
  if (((uVar2 & 0x40) << 2 | uVar2 & 0x80) == 0x180) {
    bVar1 = true;
  }
  else {
    if (uVar3 == 0) goto LAB_00414f1e;
    bVar1 = false;
  }
  FUN_0041353e((uint *)&DAT_00425600);
  uVar3 = FUN_00413212(&DAT_004255c8);
  bVar4 = (char)uVar3 != '\0';
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00414f1e:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00414f40 */

uint * FUN_00414f40(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00414fac */

uint * FUN_00414fac(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00415018 */

uint * FUN_00415018(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00415084 */

uint * FUN_00415084(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_004150f0 */

uint * FUN_004150f0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_0041515c */

uint * FUN_0041515c(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_004151c8 */

uint * FUN_004151c8(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00415240 */

void FUN_00415240(undefined4 param_1,char *param_2)

{
  FUN_0040f136(param_2);
  return;
}



/* Function: FUN_00415257 */

undefined1 FUN_00415257(void)

{
  if ((DAT_00425230 == 0) && (DAT_00425234 == 0)) {
    return 0;
  }
  return 1;
}



/* Function: FUN_00415275 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00415275(undefined4 param_1,undefined4 param_2)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *_Src;
  uint uVar3;
  wchar_t *pwVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  wchar_t *pwVar5;
  undefined4 extraout_EDX_03;
  bool bVar6;
  wchar_t *local_34;
  wchar_t local_30 [20];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_34 = (wchar_t *)0x0;
  if (DAT_00425328 != '\0') goto LAB_004153e5;
  _DAT_00425330 = 1;
  iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0x20001010,(LPWSTR)&DAT_00425340,2);
  param_2 = extraout_EDX;
  if (iVar2 == 0) {
LAB_004153b3:
    _DAT_00425330 = 1;
    _DAT_00425340 = 1;
    _DAT_00425334 = 0x1e;
    _DAT_00425338 = &DAT_00402290;
    _DAT_0042533c = &DAT_00402294;
  }
  else {
    _DAT_0042533c = (undefined *)0x0;
    iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0xf,(LPWSTR)&DAT_0042536c,0x14);
    param_2 = extraout_EDX_00;
    if (iVar2 == 0) goto LAB_004153b3;
    _DAT_0042533c = &DAT_0042536c;
    _DAT_00425338 = (undefined *)0x0;
    iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0xe,(LPWSTR)&DAT_00425344,0x14);
    param_2 = extraout_EDX_01;
    if (iVar2 == 0) goto LAB_004153b3;
    _DAT_00425338 = &DAT_00425344;
    iVar2 = GetLocaleInfoEx((LPCWSTR)0x0,0x10,(LPWSTR)&DAT_00425394,0x14);
    param_2 = extraout_EDX_02;
    if (iVar2 == 0) goto LAB_004153b3;
    local_30[0] = L'\0';
    _Src = wcstok_s((wchar_t *)&DAT_00425394,L";",&local_34);
    while (_Src != (wchar_t *)0x0) {
      pwVar5 = L"0";
      pwVar4 = _Src;
      do {
        wVar1 = *pwVar4;
        bVar6 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_0041536b:
          uVar3 = -(uint)bVar6 | 1;
          goto LAB_0041536f;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar4[1];
        bVar6 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_0041536b;
        pwVar4 = pwVar4 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      uVar3 = 0;
LAB_0041536f:
      if (uVar3 == 0) break;
      wcscat_s(local_30,0x14,_Src);
      _Src = wcstok_s((wchar_t *)0x0,L";",&local_34);
    }
    _DAT_00425334 = wcstol(local_30,&local_34,10);
    param_2 = extraout_EDX_03;
  }
  DAT_00425328 = '\x01';
LAB_004153e5:
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004153f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004153f8(undefined4 *param_1,wchar_t *param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  wchar_t local_58 [40];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  swprintf_s(local_58,0x28,L"%I64u",*param_1,param_1[1]);
  _DAT_0042532c = 0;
  if (DAT_00425328 != '\0') {
    iVar1 = GetNumberFormatEx((LPCWSTR)0x0,0,local_58,(NUMBERFMTW *)&DAT_0042532c,param_2,0x40);
    uVar2 = extraout_EDX;
    if (iVar1 != 0) goto LAB_0041545e;
  }
  wcscpy_s(param_2,0x40,local_58);
  uVar2 = extraout_EDX_00;
LAB_0041545e:
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_00415473 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00415473(float *param_1,wchar_t *param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  wchar_t local_58 [40];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  swprintf_s(local_58,0x28,L"%.3f",(double)*param_1);
  _DAT_0042532c = 3;
  if (DAT_00425328 != '\0') {
    iVar1 = GetNumberFormatEx((LPCWSTR)0x0,0,local_58,(NUMBERFMTW *)&DAT_0042532c,param_2,0x40);
    uVar2 = extraout_EDX;
    if (iVar1 != 0) goto LAB_004154e7;
  }
  wcscpy_s(param_2,0x40,local_58);
  uVar2 = extraout_EDX_00;
LAB_004154e7:
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_004154fc */

void __fastcall FUN_004154fc(wchar_t *param_1)

{
  FILE *pFVar1;
  
  fwprintf(DAT_00424dac,param_1);
  if (DAT_0042552c != 0) {
    pFVar1 = FUN_004209fb(1);
    if (DAT_00424dac != pFVar1) {
      pFVar1 = FUN_004209fb(1);
      fwprintf(pFVar1,param_1);
    }
  }
  return;
}



/* Function: FUN_00415543 */

void __fastcall FUN_00415543(wchar_t *param_1,undefined4 param_2)

{
  FILE *pFVar1;
  
  fwprintf(DAT_00424dac,param_1,param_2);
  if (DAT_0042552c != 0) {
    pFVar1 = FUN_004209fb(1);
    if (DAT_00424dac != pFVar1) {
      pFVar1 = FUN_004209fb(1);
      fwprintf(pFVar1,param_1,param_2);
    }
  }
  return;
}



/* Function: FUN_00415592 */

void FUN_00415592(void)

{
  FILE *pFVar1;
  wchar_t *_Format;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_00425468;
  uVar2 = DAT_0042545c;
  fwprintf(DAT_00424dac,L"/RH:%04d-%04d ",DAT_0042545c,DAT_00425468);
  if (DAT_0042552c != 0) {
    pFVar1 = FUN_004209fb(1);
    if (DAT_00424dac != pFVar1) {
      _Format = L"/RH:%04d-%04d ";
      pFVar1 = FUN_004209fb(1);
      fwprintf(pFVar1,_Format,uVar2,uVar3);
    }
  }
  return;
}



/* Function: FUN_004155f9 */

void __thiscall FUN_004155f9(void *this,undefined4 param_1,undefined4 param_2)

{
  FILE *pFVar1;
  
  fwprintf(DAT_00424dac,(wchar_t *)this,param_1,param_2);
  if (DAT_0042552c != 0) {
    pFVar1 = FUN_004209fb(1);
    if (DAT_00424dac != pFVar1) {
      pFVar1 = FUN_004209fb(1);
      fwprintf(pFVar1,(wchar_t *)this,param_1,param_2);
    }
  }
  return;
}



/* Function: FUN_00415654 */

void __fastcall FUN_00415654(undefined4 param_1,LPCWSTR param_2)

{
  FILE *pFVar1;
  
  pFVar1 = FUN_004209fb(1);
  if (DAT_00424dac != pFVar1) {
    fwprintf(DAT_00424dac,L"%s",param_2);
    if (DAT_0042552c == 0) {
      return;
    }
  }
  pFVar1 = FUN_004209fb(1);
  FUN_0041f49e(pFVar1,param_2);
  return;
}



/* Function: FUN_0041569e */

void __fastcall FUN_0041569e(undefined4 param_1,undefined4 param_2)

{
  FILE *pFVar1;
  wchar_t *_Format;
  
  fwprintf_s(DAT_00424dac,L"%S",param_2);
  if (DAT_0042552c != 0) {
    pFVar1 = FUN_004209fb(1);
    if (DAT_00424dac != pFVar1) {
      _Format = L"%S";
      pFVar1 = FUN_004209fb(1);
      fwprintf_s(pFVar1,_Format,param_2);
    }
  }
  return;
}



/* Function: FUN_004156f0 */

void __fastcall FUN_004156f0(UINT param_1,LPWSTR param_2,UINT param_3,LPWSTR param_4)

{
  HINSTANCE hInstance;
  
  hInstance = DAT_00424da8;
  *param_2 = L'\0';
  LoadStringW(hInstance,param_1,param_2,0x100);
  if (param_3 != 0) {
    *param_4 = L'\0';
    LoadStringW(DAT_00424da8,param_3,param_4,0x40);
  }
  return;
}



/* Function: FUN_00415737 */

void __fastcall FUN_00415737(LPCWSTR param_1,int param_2)

{
  LPCWSTR extraout_ECX;
  LPCWSTR pWVar1;
  
  pWVar1 = param_1;
  if (param_2 != 0) {
    FUN_004157eb(1,0);
    pWVar1 = extraout_ECX;
  }
  FUN_00415654(pWVar1,param_1);
  fflush(DAT_00424dac);
  return;
}



/* Function: FUN_00415766 */

void __fastcall FUN_00415766(LPCWSTR param_1,int param_2)

{
  SIZE_T uBytes;
  LPSTR lpMultiByteStr;
  int iVar1;
  LPCWSTR extraout_ECX;
  LPCWSTR pWVar2;
  undefined4 extraout_ECX_00;
  
  pWVar2 = param_1;
  if (param_2 != 0) {
    FUN_004157eb(1,0);
    pWVar2 = extraout_ECX;
  }
  if (DAT_00425538 == 0) {
    uBytes = WideCharToMultiByte(1,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    lpMultiByteStr = (LPSTR)LocalAlloc(0x40,uBytes);
    if (lpMultiByteStr != (LPSTR)0x0) {
      iVar1 = WideCharToMultiByte(1,0,param_1,-1,lpMultiByteStr,uBytes,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar1 != 0) {
        FUN_0041569e(extraout_ECX_00,lpMultiByteStr);
      }
      LocalFree(lpMultiByteStr);
    }
  }
  else {
    FUN_00415654(pWVar2,param_1);
  }
  fflush(DAT_00424dac);
  return;
}



/* Function: FUN_004157eb */

void __fastcall FUN_004157eb(UINT param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  while( true ) {
    iVar1 = LoadStringW(DAT_00424da8,param_1,local_208,0x100);
    if (iVar1 == 0) break;
    if (param_2 != 0) {
      FUN_004157eb(1,0);
    }
    FUN_00415654(&DAT_00401d6c,local_208);
    fflush(DAT_00424dac);
    param_1 = param_1 + 1;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00415868 */

void __fastcall FUN_00415868(UINT param_1,LPCWSTR param_2)

{
  FUN_004157eb(param_1,1);
  FUN_00415766(param_2,0);
  FUN_00415737(L"",1);
  return;
}



/* Function: FUN_00415892 */

void FUN_00415892(void)

{
  if (DAT_00425428 != 1) {
    FUN_004157eb(3,1);
    FUN_004157eb(5,0);
    FUN_004157eb(3,1);
    FUN_00417434(0x21);
    return;
  }
  return;
}



/* Function: FUN_004158ca */

void __fastcall FUN_004158ca(UINT param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  DWORD dwMessageId;
  undefined4 extraout_EDX;
  _SYSTEMTIME local_a98;
  wchar_t local_a88 [1024];
  WCHAR local_288 [256];
  WCHAR local_88 [64];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  dwMessageId = GetLastError();
  GetLocalTime(&local_a98);
  FUN_004156f0(0x2329,local_288,param_1,local_88);
  FUN_00418994(local_a88,local_288);
  FUN_00415737(local_a88,1);
  FUN_00415766(param_2,0);
  if (param_3 != (LPCWSTR)0x0) {
    FUN_00415737(param_3,0);
  }
  FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0,local_a88,0x400,(va_list *)0x0);
  FUN_00415766(local_a88,1);
  SetLastError(dwMessageId);
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004159e0 */

void __fastcall FUN_004159e0(undefined2 *param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  *param_1 = 0x20;
  uVar3 = 0x2d;
  uVar1 = uVar3;
  if ((param_2 & 1) != 0) {
    uVar1 = 0x52;
  }
  param_1[1] = uVar1;
  uVar1 = uVar3;
  if ((param_2 & 0x20) != 0) {
    uVar1 = 0x41;
  }
  param_1[2] = uVar1;
  uVar1 = uVar3;
  if ((param_2 & 4) != 0) {
    uVar1 = 0x53;
  }
  param_1[3] = uVar1;
  uVar2 = 0x2d;
  uVar1 = uVar2;
  if ((param_2 & 2) != 0) {
    uVar1 = 0x48;
  }
  param_1[4] = uVar1;
  param_1[5] = (-(ushort)((param_2 & 0x800) != 0) & 0x16) + 0x2d;
  param_1[6] = (-(ushort)((param_2 & 0x2000) != 0) & 0x21) + 0x2d;
  param_1[7] = (-(ushort)((param_2 & 0x4000) != 0) & 0x18) + 0x2d;
  param_1[8] = (-(ushort)((param_2 & 0x100) != 0) & 0x27) + 0x2d;
  param_1[9] = (-(ushort)((param_2 & 0x1000) != 0) & 0x22) + 0x2d;
  param_1[10] = (-(ushort)((param_2 & 0x200) != 0) & 0x46) + 0x2d;
  if ((param_2 & 0x10) != 0) {
    uVar2 = 0x44;
  }
  param_1[0xb] = uVar2;
  param_1[0xc] = (-(ushort)((param_2 & 0x400) != 0) & 0x1d) + 0x2d;
  if ((param_2 & 0x40) != 0) {
    uVar3 = 0x56;
  }
  param_1[0xd] = uVar3;
  param_1[0xe] = 0;
  return;
}



/* Function: FUN_00415ae0 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00415ae0(UINT param_1,void *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  int local_a0;
  int local_9c;
  uint local_98;
  WCHAR local_94 [70];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x90;
  local_8 = 0x415aef;
  local_98 = 0;
  local_94[0] = L'\0';
  bVar5 = DAT_00425484 == 0;
  if (bVar5) {
    piVar1 = FUN_0041a4f6(param_2,&local_9c);
    uVar4 = 2;
  }
  else {
    FUN_004159e0(local_94,*(uint *)((int)param_2 + 0x10));
    piVar1 = FUN_0041a2f8(param_2,&local_a0);
    uVar4 = 1;
  }
  local_8 = (uint)bVar5;
  local_98 = uVar4;
  FUN_004158ca(param_1,(LPCWSTR)*piVar1,local_94);
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    FUN_004044dc((undefined4 *)(local_9c + -0x10));
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  if ((uVar4 & 1) != 0) {
    FUN_004044dc((undefined4 *)(local_a0 + -0x10));
    uVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_01;
  }
  FUN_00420a47(uVar2,uVar3);
  return;
}



/* Function: FUN_00415b95 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00415b95(UINT param_1,void *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  int local_a0;
  int local_9c;
  uint local_98;
  WCHAR local_94 [70];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x90;
  local_8 = 0x415ba4;
  local_98 = 0;
  local_94[0] = L'\0';
  bVar5 = DAT_00425484 == 0;
  if (bVar5) {
    piVar1 = FUN_0041c959(param_2,&local_9c);
    uVar4 = 2;
  }
  else {
    FUN_004159e0(local_94,*(uint *)((int)param_2 + 0x50));
    piVar1 = FUN_0041c889(param_2,&local_a0);
    uVar4 = 1;
  }
  local_8 = (uint)bVar5;
  local_98 = uVar4;
  FUN_004158ca(param_1,(LPCWSTR)*piVar1,local_94);
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    FUN_004044dc((undefined4 *)(local_9c + -0x10));
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  if ((uVar4 & 1) != 0) {
    FUN_004044dc((undefined4 *)(local_a0 + -0x10));
    uVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_01;
  }
  FUN_00420a47(uVar2,uVar3);
  return;
}



/* Function: FUN_00415c4a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * __fastcall FUN_00415c4a(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  
  puVar2 = &LAB_00421753;
  puVar4 = (undefined4 *)*param_1;
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = puVar4 + 2;
    puVar4 = (undefined4 *)*puVar4;
    piVar3 = FUN_0040ddd5((int *)(*(int *)*puVar1 + -0x10));
    FUN_00415766((LPCWSTR)(piVar3 + 4),0);
    FUN_004044dc(piVar3);
    FUN_00415654(extraout_ECX,L"\n\t    ");
    puVar2 = (undefined1 *)fflush(DAT_00424dac);
  }
  return puVar2;
}



/* Function: FUN_00415cae */

void __fastcall FUN_00415cae(undefined4 param_1,uint param_2)

{
  FUN_00415654(param_1,(LPCWSTR)param_1);
  if ((param_2 & 1) != 0) {
    FUN_004154fc(L"R");
  }
  if ((param_2 & 0x20) != 0) {
    FUN_004154fc(L"A");
  }
  if ((param_2 & 4) != 0) {
    FUN_004154fc(L"S");
  }
  if ((param_2 & 2) != 0) {
    FUN_004154fc(L"H");
  }
  if ((param_2 & 0x800) != 0) {
    FUN_004154fc(L"C");
  }
  if ((param_2 & 0x2000) != 0) {
    FUN_004154fc(L"N");
  }
  if ((param_2 & 0x4000) != 0) {
    FUN_004154fc(L"E");
  }
  if ((param_2 & 0x100) != 0) {
    FUN_004154fc(L"T");
  }
  if ((param_2 & 0x1000) != 0) {
    FUN_004154fc(L"O");
  }
  FUN_004154fc(L" ");
  return;
}



/* Function: FUN_00415d61 */

undefined4 __fastcall FUN_00415d61(int param_1)

{
  if (param_1 == 0) {
    return 0x3d;
  }
  if ((param_1 != 1) && (param_1 != 2)) {
    return 0x2d;
  }
  return 0x3a;
}



/* Function: FUN_00415d82 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00415d82(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  wchar_t *pwVar7;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  uint uVar8;
  wchar_t *pwVar9;
  bool bVar10;
  int local_a2c;
  int local_a28;
  int local_a24;
  int local_a20;
  uint local_a1c;
  uint local_a18;
  wchar_t local_a14 [1024];
  WCHAR local_214 [262];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa1c;
  local_8 = 0x415d91;
  local_a18 = 0;
  if (DAT_00425428 == 1) goto LAB_00416981;
  if (DAT_00425484 != 0) {
    GetVersion();
    FUN_00418994(local_a14,L"OSVersion : %d.%d (%d) %08X\n");
    FUN_00415737(local_a14,1);
  }
  local_214[0] = L'\0';
  LoadStringW(DAT_00424da8,0x22,local_214,0x100);
  FUN_00415d61(DAT_004241c0);
  FUN_00418994(local_a14,local_214);
  FUN_00415654(extraout_ECX,local_a14);
  fflush(DAT_00424dac);
  bVar10 = DAT_00425484 == 0;
  if (bVar10) {
    piVar6 = FUN_0041a4f6(DAT_00424fc8,&local_a2c);
    uVar8 = 2;
  }
  else {
    piVar6 = FUN_0041a2f8(DAT_00424fc8,&local_a20);
    uVar8 = 1;
  }
  local_8 = (uint)bVar10;
  local_a1c = uVar8;
  local_a18 = uVar8;
  FUN_00415766((LPCWSTR)*piVar6,0);
  if ((uVar8 & 2) != 0) {
    uVar8 = uVar8 & 0xfffffffd;
    local_a1c = uVar8;
    local_a18 = uVar8;
    FUN_004044dc((undefined4 *)(local_a2c + -0x10));
  }
  local_8 = 0xffffffff;
  if ((uVar8 & 1) != 0) {
    uVar8 = uVar8 & 0xfffffffe;
    local_a1c = uVar8;
    local_a18 = uVar8;
    FUN_004044dc((undefined4 *)(local_a20 + -0x10));
  }
  if (DAT_00425484 != 0) {
    local_a24 = DAT_0042547c;
    FUN_0041a5d4(DAT_00424fc8,&local_a28);
    FUN_00418994(local_a14,
                 L"     Root : \"%s\"\n  VolName : \"%s\"\n   Serial : %08X\n  MaxName : %d\n   FSFlag : %08X\n   FSType : \"%s\"\n   IsNTFS : %u\n"
                );
    FUN_004044dc((undefined4 *)(local_a28 + -0x10));
    FUN_00415737(local_a14,1);
    uVar8 = local_a1c;
  }
  local_214[0] = L'\0';
  LoadStringW(DAT_00424da8,0x23,local_214,0x100);
  FUN_00415d61(DAT_00424198);
  FUN_00418994(local_a14,local_214);
  FUN_00415654(extraout_ECX_00,local_a14);
  fflush(DAT_00424dac);
  if (DAT_00425484 == 0) {
    piVar6 = FUN_0041a4f6(DAT_0042477c,&local_a28);
    local_8 = 3;
    uVar8 = uVar8 | 8;
  }
  else {
    piVar6 = FUN_0041a2f8(DAT_0042477c,&local_a24);
    local_8 = 2;
    uVar8 = uVar8 | 4;
  }
  local_a18 = uVar8;
  FUN_00415766((LPCWSTR)*piVar6,0);
  if ((uVar8 & 8) != 0) {
    uVar8 = uVar8 & 0xfffffff7;
    FUN_004044dc((undefined4 *)(local_a28 + -0x10));
  }
  local_8 = 0xffffffff;
  if ((uVar8 & 4) != 0) {
    FUN_004044dc((undefined4 *)(local_a24 + -0x10));
  }
  if (DAT_00425484 != 0) {
    local_a20 = DAT_004254b0;
    FUN_0041a5d4(DAT_0042477c,(int *)&local_a1c);
    FUN_00418994(local_a14,
                 L"     Root : \"%s\"\n  VolName : \"%s\"\n   Serial : %08X\n  MaxName : %d\n   FSFlag : %08X\n   FSType : \"%s\"\n   IsNTFS : %u\n"
                );
    FUN_004044dc((undefined4 *)(local_a1c - 0x10));
    FUN_00415737(local_a14,1);
    FUN_00418994(local_a14,L"    Fudge : %d");
    FUN_00415737(local_a14,1);
  }
  FUN_004157eb(0x47,1);
  if (DAT_00425464 == 0) {
    FUN_00415c4a(&DAT_004242c0);
  }
  else {
    FUN_00415654(extraout_ECX_01,L"*.*\n\t    ");
    fflush(DAT_00424dac);
  }
  if ((DAT_00424298 != 0) || (DAT_004242b0 != 0)) {
    FUN_004157eb(0x49,1);
    FUN_00415c4a(&DAT_00424290);
    FUN_00415c4a(&DAT_004242a8);
  }
  if ((DAT_00424244 != 0) || (DAT_004242e0 != 0)) {
    FUN_004157eb(0x4b,1);
    FUN_00415c4a(&DAT_0042423c);
    FUN_00415c4a(&DAT_004242d8);
  }
  FUN_004157eb(0x51,1);
  if (DAT_00425574 != 0) {
    FUN_004154fc(L"/JOB ");
  }
  if (DAT_00425464 != 0) {
    FUN_004154fc(L"*.* ");
  }
  if (DAT_0042544c != 0) {
    FUN_004154fc(L"/TBD ");
  }
  if (DAT_00425430 != 0) {
    FUN_004154fc(L"/FAT ");
  }
  if (DAT_00425570 != 0) {
    FUN_004154fc(L"/FFT ");
  }
  if (DAT_004254ec != '\0') {
    FUN_004154fc(L"/DST ");
  }
  if (DAT_004254d4 != 0) {
    FUN_004154fc(L"/256 ");
  }
  if (DAT_004254fc != 0) {
    FUN_004154fc(L"/V ");
  }
  if (DAT_00425558 != 0) {
    FUN_004154fc(L"/X ");
  }
  if (DAT_004254ac != 0) {
    FUN_004154fc(L"/TS ");
  }
  if (DAT_00425588 != 0) {
    FUN_004154fc(L"/FP ");
  }
  if (DAT_004254dc != 0) {
    FUN_004154fc(L"/BYTES ");
  }
  if (DAT_0042550c != 0) {
    FUN_004154fc(L"/NS ");
  }
  if (DAT_00425508 != 0) {
    FUN_004154fc(L"/NC ");
  }
  if (DAT_004254b8 != 0) {
    FUN_004154fc(L"/NDL ");
  }
  if (DAT_0042556c != 0) {
    FUN_004154fc(L"/NFL ");
  }
  if (DAT_00425428 != 0) {
    FUN_004154fc(L"/NJH ");
  }
  if (DAT_00425434 != 0) {
    FUN_004154fc(L"/NJS ");
  }
  if (DAT_00425424 != 0) {
    FUN_004154fc(L"/L ");
  }
  if (DAT_0042552c != 0) {
    FUN_004154fc(L"/TEE ");
  }
  if (DAT_00425454 != 0) {
    FUN_004154fc(L"/UNICODE ");
  }
  if (DAT_00425510 != 0) {
    FUN_004154fc(L"/S ");
  }
  if (DAT_00425530 != 0) {
    FUN_004154fc(L"/E ");
  }
  pwVar9 = L" ";
  if (DAT_004241a8 == 0) {
    if ((((DAT_004241b4 != 0) || (DAT_004254a8 != 0)) || (DAT_0042419c != 0)) ||
       (((DAT_00424194 != 0 || (DAT_004241a0 != 0)) || ((DAT_004254c0 & 0xd) != 0)))) {
      if (((DAT_004241b4 != 0) || (DAT_004254a8 != 0)) || (DAT_00425548 != 0)) goto LAB_00416413;
      pwVar7 = L"/NODCOPY ";
      goto LAB_00416478;
    }
    pwVar9 = L"/NOCOPY ";
  }
  else if (((((DAT_004241b4 == 0) || (DAT_0042419c == 0)) || (DAT_00424194 == 0)) ||
           ((DAT_004241a0 == 0 || (DAT_00425410 != 0)))) ||
          ((DAT_00425414 != 0 || (((byte)DAT_004254c0 & 0xd) != 0xd)))) {
LAB_00416413:
    FUN_004154fc(L"/DCOPY:");
    if (DAT_00425548 != 0) {
      FUN_004154fc(L"E");
    }
    if (DAT_004241a8 != 0) {
      FUN_004154fc(L"D");
    }
    if (DAT_004241b4 != 0) {
      FUN_004154fc(L"A");
    }
    if (DAT_004254a8 != 0) {
      FUN_004154fc(L"T");
    }
    if (DAT_00425414 != 0) {
      FUN_004154fc(L"X");
    }
    pwVar7 = L" ";
LAB_00416478:
    FUN_004154fc(pwVar7);
    FUN_004154fc(L"/COPY:");
    if (DAT_0042419c != 0) {
      FUN_004154fc(L"D");
    }
    if (DAT_00424194 != 0) {
      FUN_004154fc(L"A");
    }
    if (DAT_004241a0 != 0) {
      FUN_004154fc(L"T");
    }
    if (DAT_00425410 != 0) {
      FUN_004154fc(L"X");
    }
    if ((DAT_004254c0 & 4) != 0) {
      FUN_004154fc(L"S");
    }
    if ((DAT_004254c0 & 1) != 0) {
      FUN_004154fc(L"O");
    }
    if ((DAT_004254c0 & 8) != 0) {
      FUN_004154fc(L"U");
    }
  }
  else {
    pwVar9 = L"/COPYALL ";
  }
  FUN_004154fc(pwVar9);
  if (DAT_0042558c != 0) {
    FUN_004154fc(L"/SECFIX ");
  }
  if (DAT_004254b4 != 0) {
    FUN_004154fc(L"/TIMFIX ");
  }
  if (DAT_0042546c == 0) {
    if (DAT_004254c4 != 0) {
      pwVar9 = L"/MOV ";
      goto LAB_00416551;
    }
  }
  else {
    pwVar9 = L"/MOVE ";
LAB_00416551:
    FUN_004154fc(pwVar9);
  }
  if (DAT_00425524 != 0) {
    FUN_004154fc(L"/PURGE ");
  }
  if (DAT_004254c8 != 0) {
    FUN_004154fc(L"/MIR ");
  }
  if (DAT_00425584 != 0) {
    FUN_004154fc(L"/CREATE ");
  }
  if (DAT_0042540c == 0) {
LAB_004165b2:
    if (DAT_00425408 != 0) {
      pwVar9 = L"/B ";
      goto LAB_004165c0;
    }
  }
  else {
    if (DAT_00425408 == 0) {
      FUN_004154fc(L"/Z ");
      goto LAB_004165b2;
    }
    pwVar9 = L"/ZB ";
LAB_004165c0:
    FUN_004154fc(pwVar9);
  }
  if (DAT_004254e8 != 0) {
    FUN_004154fc(L"/J ");
  }
  if (DAT_00425488 != 0) {
    FUN_004154fc(L"/NOOFFLOAD ");
  }
  if (DAT_0042553c != 0) {
    FUN_004154fc(L"/EFSRAW ");
  }
  if (DAT_00425580 != 0) {
    FUN_004154fc(L"/LFSM ");
  }
  if (DAT_00424190 == 0) {
    FUN_004154fc(L"/NP ");
  }
  if (DAT_0042557c != 0) {
    FUN_004154fc(L"/ETA ");
  }
  if (DAT_004241ac == 0) {
    FUN_004154fc(L"/IS ");
  }
  if (DAT_0042554c != 0) {
    FUN_004154fc(L"/IM ");
  }
  if (DAT_004241b8 == 0) {
    FUN_004154fc(L"/IT ");
  }
  if (DAT_00425578 != 0) {
    FUN_004154fc(L"/XL ");
  }
  if (DAT_004254d0 != 0) {
    FUN_004154fc(L"/XX ");
  }
  if (DAT_0042555c != 0) {
    FUN_004154fc(L"/XO ");
  }
  if (DAT_00425564 != 0) {
    FUN_004154fc(L"/XN ");
  }
  if (DAT_00425498 != 0) {
    FUN_004154fc(L"/XC ");
  }
  if (DAT_00425554 == 0) {
    if (DAT_0042549c != 0) {
      FUN_004154fc(L"/XJF ");
    }
    if (DAT_0042541c != 0) {
      pwVar9 = L"/XJD ";
      goto LAB_00416700;
    }
  }
  else {
    pwVar9 = L"/XJ ";
LAB_00416700:
    FUN_004154fc(pwVar9);
  }
  if (DAT_00425470 != 0) {
    FUN_004154fc(L"/A ");
  }
  if (DAT_004254e4 != 0) {
    FUN_004154fc(L"/M ");
  }
  if (DAT_00425458 != 0) {
    FUN_00415cae(L"/IA:",DAT_00425458);
  }
  if (DAT_00425560 != 0) {
    FUN_00415cae(L"/XA:",DAT_00425560);
  }
  if (DAT_00425500 != 0) {
    FUN_00415cae(L"/A+:",DAT_00425500);
  }
  if (DAT_00425520 != 0) {
    FUN_00415cae(L"/A-:",DAT_00425520);
  }
  if (DAT_00425478 != 0) {
    FUN_004154fc(L"/REG ");
  }
  if (DAT_00425484 != 0) {
    FUN_004154fc(L"/DEBUG ");
  }
  if (DAT_0042548c != 0) {
    FUN_004154fc(L"/COMPRESS ");
  }
  if (DAT_00425480 == 1) {
    FUN_004154fc(L"/SPARSE:YES ");
  }
  if (DAT_00425480 == 2) {
    FUN_004154fc(L"/SPARSE:NO ");
  }
  if (DAT_004254a0 != 0 || DAT_004254a4 != 0) {
    FUN_004155f9(L"/MAX:%I64d ",DAT_004254a0,DAT_004254a4);
  }
  if (DAT_00425518 != 0 || DAT_0042551c != 0) {
    FUN_004155f9(L"/MIN:%I64d ",DAT_00425518,DAT_0042551c);
  }
  if (DAT_00425448 != 0) {
    FUN_00415543(L"/MAXAGE:%d ",DAT_00425448);
  }
  if (DAT_004254d8 != 0) {
    FUN_00415543(L"/MINAGE:%d ",DAT_004254d8);
  }
  if (DAT_00425494 != 0) {
    FUN_00415543(L"/MAXLAD:%d ",DAT_00425494);
  }
  if (DAT_004254cc != 0) {
    FUN_00415543(L"/MINLAD:%d ",DAT_004254cc);
  }
  if (DAT_00425540 != 0) {
    FUN_00415543(L"/LEV:%d ",DAT_00425540);
  }
  if (DAT_00425438 != 0) {
    FUN_00415543(L"/MON:%d ",DAT_00425438);
  }
  if (DAT_00425444 != 0) {
    FUN_00415543(L"/MOT:%d ",DAT_00425444);
  }
  if (DAT_0042545c != DAT_00425468) {
    FUN_00415592();
  }
  if (DAT_00425568 != 0) {
    FUN_004154fc(L"/PF ");
  }
  if (DAT_00425550 != 0) {
    FUN_00415543(L"/IPG:%d ",DAT_00425550);
  }
  if (DAT_0042543c != 0) {
    FUN_00415543(L"/MT:%d ",DAT_0042543c);
  }
  cVar5 = FUN_00415257();
  iVar4 = DAT_0042523c;
  iVar3 = DAT_00425238;
  iVar2 = DAT_00425230;
  if (cVar5 != '\0') {
    lVar1 = (ulonglong)DAT_00425234 * 0x400;
    if ((ulonglong)DAT_00425234 != 0) {
      FUN_004155f9(L"/IoRate:%I64d ",(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    }
    if (iVar2 != 0) {
      FUN_00415543(L"/IoMaxSize:%u ",iVar2);
    }
    if (iVar3 != 0 || iVar4 != 0) {
      FUN_004155f9(L"/Threshold:%I64d ",iVar3,iVar4);
    }
  }
  FUN_00415543(L"/R:%d ",DAT_00424188);
  FUN_00415543(L"/W:%d ",DAT_004241bc / 1000);
  FUN_004157eb(7,1);
  param_1 = extraout_ECX_02;
  param_2 = extraout_EDX;
LAB_00416981:
  FUN_00420a47(param_1,param_2);
  return;
}



/* Function: FUN_0041698d */

void __fastcall FUN_0041698d(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar1;
  UINT uID;
  wchar_t local_a08 [1024];
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  if (param_3 == 0) {
    uID = 0x20;
  }
  else {
    FUN_00415d82(param_1,param_2);
    uID = 0x1f;
  }
  local_208[0] = L'\0';
  LoadStringW(DAT_00424da8,uID,local_208,0x100);
  FUN_00418994(local_a08,local_208);
  FUN_00415737(local_a08,1);
  uVar1 = extraout_EDX;
  if (param_3 != 0) {
    FUN_004157eb(0x44d,1);
    uVar1 = extraout_EDX_00;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar1);
  return;
}



/* Function: FUN_00416a40 */

void FUN_00416a40(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  wchar_t local_a08 [1024];
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_208[0] = L'\0';
  LoadStringW(DAT_00424da8,0xe0,local_208,0x100);
  FUN_00418994(local_a08,local_208);
  FUN_00415654(extraout_ECX,local_a08);
  fflush(DAT_00424dac);
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00416ac0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_00416ac0(UINT param_1,UINT param_2,uint param_3,int param_4,undefined4 param_5,LPCWSTR param_6,
            undefined4 param_7,int param_8)

{
  longlong lVar1;
  LPCWSTR pWVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  double dVar6;
  wchar_t *pwVar7;
  UINT local_af4;
  double local_af0;
  UINT local_ae4;
  double local_ae0;
  LPCWSTR local_ad4;
  wchar_t local_ad0 [32];
  WCHAR local_a90 [11];
  undefined1 auStack_a7a [10];
  undefined2 uStack_a70;
  wchar_t local_a10 [1024];
  WCHAR local_210 [258];
  uint local_c;
  
  local_c = DAT_00424140 ^ (uint)&local_af4;
  local_af0 = (double)CONCAT44(local_af0._4_4_,param_5);
  local_ad4 = param_6;
  local_ae0 = (double)CONCAT44(local_ae0._4_4_,param_7);
  local_af4 = param_2;
  local_ae4 = param_1;
  if (DAT_004254dc == 0) {
    if (DAT_0042550c != 0) {
      local_ad0[0] = L'\0';
      goto LAB_00416baa;
    }
    if (param_4 < 0) goto LAB_00416b96;
    if ((param_4 < 1) && (param_3 < 0x40000000)) {
      if ((param_4 < 0) || ((param_4 < 1 && (param_3 < 0x100000)))) goto LAB_00416b96;
      __alldiv((param_3 & 0xfffff) * 10,0,0x100000,0);
      pwVar7 = L"%4d.%01d m";
    }
    else {
      lVar1 = (ulonglong)(param_3 & 0x3fffffff) * 10;
      __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0x40000000,0);
      pwVar7 = L"%4d.%01d g";
    }
  }
  else {
LAB_00416b96:
    pwVar7 = L"%8I64d";
  }
  FUN_004189c2(local_ad0,pwVar7);
LAB_00416baa:
  FUN_004156f0(local_ae4,local_210,local_af4,local_a90);
  if (DAT_00425508 != 0) {
    local_a90[0] = L'\0';
  }
  FUN_00418994(local_a10,local_210);
  FUN_00415737(local_a10,1);
  local_a10[0] = L'\0';
  FUN_00415766(param_6,0);
  uVar5 = extraout_EDX;
  if ((param_8 != 0) && (DAT_00425288 != 0 || DAT_0042528c != 0)) {
    piVar3 = (int *)FUN_0040ec93(0);
    iVar4 = FUN_00418acd(piVar3);
    uVar5 = extraout_EDX_00;
    if (iVar4 != 0) {
      piVar3 = (int *)FUN_0040ec93(0);
      iVar4 = FUN_00418acd(piVar3);
      dVar6 = (double)iVar4 / _DAT_004034d8;
      local_ae0 = dVar6;
      time((time_t *)&local_af4);
      FUN_004210e0();
      local_af0 = dVar6;
      FUN_004210e0();
      pWVar2 = local_ad4;
      local_af0 = (double)CONCAT44(local_af0._4_4_,
                                   (int)(local_af0 / (dVar6 / local_ae0)) + local_af4);
      iVar4 = FUN_004089e4(local_ad4);
      if (iVar4 < 8) {
        FUN_004045a3(local_a10,0x400,0x401d60);
      }
      iVar4 = FUN_004089e4(pWVar2);
      if (iVar4 < 2) {
        FUN_004045a3(local_a10,0x400,0x401d60);
      }
      FUN_004045a3(local_a10,0x400,0x401d60);
      ctime((time_t *)&local_af4);
      FUN_004189ee(local_a90,L"%hs");
      uStack_a70 = 0;
      FUN_004045a3(local_a10,0x400,(int)auStack_a7a);
      FUN_004045a3(local_a10,0x400,0x40298c);
      ctime((time_t *)&local_af0);
      FUN_004189ee(local_a90,L"%hs");
      uStack_a70 = 0;
      FUN_004045a3(local_a10,0x400,(int)auStack_a7a);
      FUN_00415654(extraout_ECX,local_a10);
      fflush(DAT_00424dac);
      uVar5 = extraout_EDX_01;
    }
  }
  FUN_004200b0(local_c ^ (uint)&local_af4,uVar5);
  return;
}



/* Function: FUN_00416dd6 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00416dd6(void *param_1)

{
  int iVar1;
  int *piVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *pvVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint uVar5;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  undefined2 local_94 [70];
  uint local_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_00425484;
  uStack_4 = 0x98;
  local_8 = 0x416de5;
  local_98 = 0;
  local_a0 = *(uint *)((int)param_1 + 0x20);
  iVar4 = (int)local_a0 >> 0x1f;
  local_94[0] = 0;
  pvVar3 = param_1;
  local_9c = iVar4;
  if (DAT_00425484 != 0) {
    FUN_004159e0(local_94,*(uint *)((int)param_1 + 0x10));
    pvVar3 = extraout_ECX;
    iVar4 = extraout_EDX;
  }
  if (DAT_004254b8 == 0) {
    if (iVar1 == 0) {
      piVar2 = FUN_0041a4f6(param_1,&local_a4);
      uVar5 = 2;
    }
    else {
      piVar2 = FUN_0041a2f8(param_1,&local_a8);
      uVar5 = 1;
    }
    local_8 = (uint)(iVar1 == 0);
    local_98 = uVar5;
    FUN_00416ac0(0xfa1,*(int *)((int)param_1 + 8) + 0x10cd,local_a0,local_9c,local_94,
                 (LPCWSTR)*piVar2,&DAT_00401414,0);
    pvVar3 = extraout_ECX_00;
    iVar4 = extraout_EDX_00;
    if ((uVar5 & 2) != 0) {
      uVar5 = uVar5 & 0xfffffffd;
      FUN_004044dc((undefined4 *)(local_a4 + -0x10));
      pvVar3 = extraout_ECX_01;
      iVar4 = extraout_EDX_01;
    }
    if ((uVar5 & 1) != 0) {
      FUN_004044dc((undefined4 *)(local_a8 + -0x10));
      pvVar3 = extraout_ECX_02;
      iVar4 = extraout_EDX_02;
    }
  }
  FUN_00420a47(pvVar3,iVar4);
  return;
}



/* Function: FUN_00416ec9 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00416ec9(FILETIME *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  LPCWSTR pWVar2;
  int *piVar3;
  LPCWSTR pWVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 uVar5;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  UINT UVar7;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  uint uVar8;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined8 local_138;
  LPCWSTR local_130;
  int local_12c;
  uint local_128;
  _SYSTEMTIME local_124;
  undefined2 local_114 [64];
  wchar_t local_94;
  undefined1 local_92 [138];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x138;
  local_8 = 0x416ed8;
  local_128 = 0;
  local_13c = param_2;
  local_138 = FUN_0041c9c8((int)param_1);
  uVar6 = (undefined4)((ulonglong)local_138 >> 0x20);
  local_114[0] = 0;
  uVar5 = extraout_ECX;
  if (DAT_00425484 != 0) {
    FUN_004159e0(local_114,param_1[10].dwLowDateTime);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX;
  }
  if ((param_1[10].dwLowDateTime & 0x10) == 0) {
    local_94 = L'\0';
    memset(local_92,0,0x7e);
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX_00;
    if (DAT_004254ac != 0) {
      FileTimeToSystemTime(param_1,&local_124);
      if (DAT_00425484 == 0) {
        FUN_004189ee(&local_94,L" %d/%02d/%02d %02d:%02d:%02d");
        uVar5 = extraout_ECX_03;
        uVar6 = extraout_EDX_02;
      }
      else {
        FUN_004189ee(&local_94,L" %d/%02d/%02d %02d:%02d:%02d.%03d");
        uVar5 = extraout_ECX_02;
        uVar6 = extraout_EDX_01;
      }
    }
    if ((DAT_0042556c != 0) && (param_3 == 0)) goto LAB_004171df;
    uVar8 = 1;
    if ((param_1[9].dwHighDateTime == 0) || (local_12c = 1, DAT_0042557c == 0)) {
      local_12c = 0;
    }
    if ((DAT_00425588 == 0) && (DAT_004254b8 == 0)) {
      piVar3 = FUN_0041c84b(param_1,&local_148);
      local_8 = 0;
      pWVar4 = (LPCWSTR)*piVar3;
      uVar1 = local_138;
    }
    else {
      if (DAT_00425484 == 0) {
        piVar3 = FUN_0041c959(param_1,&local_140);
        local_8 = 2;
        uVar8 = 4;
      }
      else {
        piVar3 = FUN_0041c889(param_1,&local_144);
        local_8 = 1;
        uVar8 = 2;
      }
      local_128 = uVar8;
      piVar3 = FUN_0040ddd5((int *)(*piVar3 + -0x10));
      pWVar4 = (LPCWSTR)(piVar3 + 4);
      local_8 = 3;
      uVar8 = uVar8 | 8;
      local_130 = pWVar4;
      uVar1 = local_138;
    }
    pWVar2 = local_130;
    local_138._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    local_138._0_4_ = (uint)uVar1;
    if (DAT_00425508 == 0) {
      UVar7 = param_1[9].dwLowDateTime + local_13c;
    }
    else {
      UVar7 = 0;
    }
    local_128 = uVar8;
    FUN_00416ac0(0xfab,UVar7,(uint)local_138,local_138._4_4_,local_114,pWVar4,&local_94,local_12c);
    local_138 = uVar1;
    uVar5 = extraout_ECX_04;
    uVar6 = extraout_EDX_03;
    if ((uVar8 & 8) != 0) {
      uVar8 = uVar8 & 0xfffffff7;
      FUN_004044dc((undefined4 *)(pWVar2 + -8));
      uVar5 = extraout_ECX_05;
      uVar6 = extraout_EDX_04;
    }
    if ((uVar8 & 4) != 0) {
      uVar8 = uVar8 & 0xfffffffb;
      FUN_004044dc((undefined4 *)(local_140 + -0x10));
      uVar5 = extraout_ECX_06;
      uVar6 = extraout_EDX_05;
    }
    if ((uVar8 & 2) != 0) {
      uVar8 = uVar8 & 0xfffffffd;
      FUN_004044dc((undefined4 *)(local_144 + -0x10));
      uVar5 = extraout_ECX_07;
      uVar6 = extraout_EDX_06;
    }
    uVar8 = uVar8 & 1;
  }
  else {
    if ((DAT_004254b8 != 0) && (param_3 == 0)) goto LAB_004171df;
    if (DAT_00425484 == 0) {
      piVar3 = FUN_0041c959(param_1,(int *)&local_130);
      local_8 = 5;
      uVar8 = 0x20;
      uVar1 = local_138;
    }
    else {
      piVar3 = FUN_0041c889(param_1,&local_12c);
      local_8 = 4;
      uVar8 = 0x10;
      uVar1 = local_138;
    }
    local_138._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    local_138._0_4_ = (uint)uVar1;
    local_128 = uVar8;
    FUN_00416ac0(0xfa1,param_1[9].dwLowDateTime + local_13c,(uint)local_138,local_138._4_4_,
                 local_114,(LPCWSTR)*piVar3,&DAT_00401414,0);
    local_138 = uVar1;
    uVar5 = extraout_ECX_08;
    uVar6 = extraout_EDX_07;
    if ((uVar8 & 0x20) != 0) {
      uVar8 = uVar8 & 0xffffffdf;
      FUN_004044dc((undefined4 *)(local_130 + -8));
      uVar5 = extraout_ECX_09;
      uVar6 = extraout_EDX_08;
    }
    uVar8 = uVar8 & 0x10;
    local_148 = local_12c;
  }
  if (uVar8 != 0) {
    FUN_004044dc((undefined4 *)(local_148 + -0x10));
    uVar5 = extraout_ECX_10;
    uVar6 = extraout_EDX_09;
  }
LAB_004171df:
  FUN_00420a47(uVar5,uVar6);
  return;
}



/* Function: FUN_004171ed */

void FUN_004171ed(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  wchar_t local_a08 [1024];
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_208[0] = L'\0';
  LoadStringW(DAT_00424da8,0xe5,local_208,0x100);
  FUN_00418994(local_a08,local_208);
  FUN_00415654(extraout_ECX,local_a08);
  fflush(DAT_00424dac);
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00417273 */

void FUN_00417273(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  wchar_t local_a08 [1024];
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_208[0] = L'\0';
  LoadStringW(DAT_00424da8,0xe9,local_208,0x100);
  FUN_00418994(local_a08,local_208);
  FUN_00415654(extraout_ECX,local_a08);
  fflush(DAT_00424dac);
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00417309 */

void FUN_00417309(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  wchar_t local_a08 [1024];
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_208[0] = L'\0';
  LoadStringW(DAT_00424da8,0xfbf,local_208,0x100);
  FUN_00418994(local_a08,local_208);
  FUN_00415654(extraout_ECX,local_a08);
  fflush(DAT_00424dac);
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00417391 */

void __fastcall FUN_00417391(int param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar1;
  wchar_t local_a08 [1024];
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  if (param_1 == 100) {
    FUN_00417309();
    uVar1 = extraout_EDX;
  }
  else {
    local_208[0] = L'\0';
    LoadStringW(DAT_00424da8,0xfb5,local_208,0x100);
    FUN_00418994(local_a08,local_208);
    FUN_00415654(extraout_ECX,local_a08);
    fflush(DAT_00424dac);
    uVar1 = extraout_EDX_00;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar1);
  return;
}



/* Function: FUN_00417434 */

void __fastcall FUN_00417434(UINT param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  _SYSTEMTIME local_abc;
  wchar_t local_aac [1024];
  WCHAR local_2ac [256];
  WCHAR local_ac [40];
  WCHAR local_5c [42];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_abc.wYear = 0;
  local_abc.wMonth = 0;
  local_abc.wDayOfWeek = 0;
  local_abc.wDay = 0;
  local_abc.wHour = 0;
  local_abc.wMinute = 0;
  local_abc.wSecond = 0;
  local_abc.wMilliseconds = 0;
  memset(local_ac,0,0x50);
  memset(local_5c,0,0x50);
  GetLocalTime(&local_abc);
  iVar1 = GetDateFormatW(0x400,2,&local_abc,(LPCWSTR)0x0,local_ac,0x28);
  uVar2 = extraout_EDX;
  if (iVar1 != 0) {
    iVar1 = GetTimeFormatW(0x400,0,&local_abc,(LPCWSTR)0x0,local_5c,0x28);
    uVar2 = extraout_EDX_00;
    if (iVar1 != 0) {
      local_2ac[0] = L'\0';
      LoadStringW(DAT_00424da8,param_1,local_2ac,0x100);
      FUN_00404626(local_aac,0x400,local_2ac);
      FUN_00415654(extraout_ECX,local_aac);
      fflush(DAT_00424dac);
      uVar2 = extraout_EDX_01;
    }
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_00417535 */

void __fastcall FUN_00417535(int *param_1,int *param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = (param_3 / 1000) / 0x3c;
  *param_1 = iVar1 / 0x3c;
  *param_2 = iVar1 % 0x3c;
  *param_5 = (param_3 / 1000) % 0x3c;
  return;
}



/* Function: FUN_00417581 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00417581(longlong *param_1,float *param_2)

{
  double in_XMM0_Qa;
  double dVar1;
  longlong lVar2;
  uint uStack_10;
  
  FUN_004210a0();
  in_XMM0_Qa = in_XMM0_Qa / _DAT_004034d8;
  dVar1 = in_XMM0_Qa;
  FUN_004210e0();
  uStack_10 = 0;
  if ((DAT_004034e0 <= dVar1 / in_XMM0_Qa) && (dVar1 / in_XMM0_Qa - DAT_004034e0 < DAT_004034e0)) {
    uStack_10 = 0x80000000;
  }
  lVar2 = FUN_0042100d();
  in_XMM0_Qa = in_XMM0_Qa / _DAT_004034d0;
  *param_1 = lVar2 + ((ulonglong)uStack_10 << 0x20);
  *param_2 = (float)((dVar1 * _DAT_004034c8) / in_XMM0_Qa);
  return;
}



/* Function: FUN_0041765d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041765d(wchar_t *param_1)

{
  wchar_t wVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 extraout_EDX;
  longlong lVar11;
  undefined8 uVar12;
  int local_23c;
  float fStack_238;
  undefined8 local_234;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  WCHAR local_20c [258];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  FUN_00404626(param_1,0x20,L"%u");
  pwVar6 = param_1;
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 1) >> 1;
  if (*(int *)(param_1 + 0x382) < iVar7) {
    *(int *)(param_1 + 0x382) = iVar7;
  }
  pwVar6 = param_1 + 0x20;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x21) >> 1;
  if (*(int *)(param_1 + 900) < iVar7) {
    *(int *)(param_1 + 900) = iVar7;
  }
  pwVar6 = param_1 + 0x40;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x41) >> 1;
  if (*(int *)(param_1 + 0x386) < iVar7) {
    *(int *)(param_1 + 0x386) = iVar7;
  }
  pwVar6 = param_1 + 0x60;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x61) >> 1;
  if (*(int *)(param_1 + 0x388) < iVar7) {
    *(int *)(param_1 + 0x388) = iVar7;
  }
  pwVar6 = param_1 + 0x80;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x81) >> 1;
  if (*(int *)(param_1 + 0x38a) < iVar7) {
    *(int *)(param_1 + 0x38a) = iVar7;
  }
  pwVar6 = param_1 + 0xa0;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0xa1) >> 1;
  if (*(int *)(param_1 + 0x38c) < iVar7) {
    *(int *)(param_1 + 0x38c) = iVar7;
  }
  pwVar6 = param_1 + 0xc0;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0xc1) >> 1;
  if (*(int *)(param_1 + 0x382) < iVar7) {
    *(int *)(param_1 + 0x382) = iVar7;
  }
  pwVar6 = param_1 + 0xe0;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0xe1) >> 1;
  if (*(int *)(param_1 + 900) < iVar7) {
    *(int *)(param_1 + 900) = iVar7;
  }
  pwVar6 = param_1 + 0x100;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x101) >> 1;
  if (*(int *)(param_1 + 0x386) < iVar7) {
    *(int *)(param_1 + 0x386) = iVar7;
  }
  pwVar6 = param_1 + 0x120;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x121) >> 1;
  if (*(int *)(param_1 + 0x388) < iVar7) {
    *(int *)(param_1 + 0x388) = iVar7;
  }
  pwVar6 = param_1 + 0x140;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x141) >> 1;
  if (*(int *)(param_1 + 0x38a) < iVar7) {
    *(int *)(param_1 + 0x38a) = iVar7;
  }
  pwVar6 = param_1 + 0x160;
  FUN_00404626(pwVar6,0x20,L"%u");
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x161) >> 1;
  if (*(int *)(param_1 + 0x38c) < iVar7) {
    *(int *)(param_1 + 0x38c) = iVar7;
  }
  pwVar6 = param_1 + 0x180;
  FUN_0041e30e(&DAT_004252c0,pwVar6);
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x181) >> 1;
  if (*(int *)(param_1 + 0x382) < iVar7) {
    *(int *)(param_1 + 0x382) = iVar7;
  }
  pwVar6 = param_1 + 0x1a0;
  FUN_0041e30e(&DAT_00425280,pwVar6);
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x1a1) >> 1;
  if (*(int *)(param_1 + 900) < iVar7) {
    *(int *)(param_1 + 900) = iVar7;
  }
  pwVar6 = param_1 + 0x1c0;
  FUN_0041e30e(&DAT_004252a8,pwVar6);
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x1c1) >> 1;
  if (*(int *)(param_1 + 0x386) < iVar7) {
    *(int *)(param_1 + 0x386) = iVar7;
  }
  pwVar6 = param_1 + 0x1e0;
  FUN_0041e30e(&DAT_004252d8,pwVar6);
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x1e1) >> 1;
  if (*(int *)(param_1 + 0x388) < iVar7) {
    *(int *)(param_1 + 0x388) = iVar7;
  }
  pwVar6 = param_1 + 0x200;
  FUN_0041e30e(&DAT_00425268,pwVar6);
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x201) >> 1;
  if (*(int *)(param_1 + 0x38a) < iVar7) {
    *(int *)(param_1 + 0x38a) = iVar7;
  }
  pwVar6 = param_1 + 0x220;
  FUN_0041e30e(&DAT_00425310,pwVar6);
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x221) >> 1;
  if (*(int *)(param_1 + 0x38c) < iVar7) {
    *(int *)(param_1 + 0x38c) = iVar7;
  }
  piVar2 = (int *)FUN_0040ec93(2);
  uVar3 = FUN_00418acd(piVar2);
  uVar9 = (int)uVar3 >> 0x1f;
  piVar2 = (int *)FUN_0040ec93(0);
  local_228 = FUN_00418acd(piVar2);
  local_220 = (int)local_228 >> 0x1f;
  piVar2 = (int *)FUN_0040ec93(1);
  local_21c = FUN_00418acd(piVar2);
  local_234._4_4_ = (int)local_21c >> 0x1f;
  local_224 = (uVar3 - local_21c) - local_228;
  fStack_238 = (float)((((uVar9 - local_234._4_4_) - (uint)(uVar3 < local_21c)) - local_220) -
                      (uint)(uVar3 - local_21c < local_228));
  if (DAT_00425490 != 0) {
    iVar7 = FUN_00418acd((int *)&DAT_00425308);
    iVar4 = FUN_004109db(2);
    uVar3 = iVar4 + iVar7;
    local_224 = (int)uVar3 >> 0x1f;
    iVar7 = FUN_00418acd((int *)&DAT_00425298);
    iVar4 = FUN_004109db(0);
    local_21c = iVar4 + iVar7;
    local_220 = (int)local_21c >> 0x1f;
    if ((local_224 <= local_220) && ((local_224 < local_220 || (uVar3 <= local_21c)))) {
      local_220 = local_224;
      local_21c = uVar3;
    }
    iVar7 = FUN_00418acd((int *)&DAT_00425240);
    iVar4 = FUN_004109db(1);
    uVar9 = local_224;
    local_210 = iVar4 + iVar7;
    local_214 = (int)local_210 >> 0x1f;
    local_218 = uVar3 - local_21c;
    uVar8 = (local_224 - local_220) - (uint)(uVar3 < local_21c);
    if ((uVar8 <= local_214) && ((uVar8 < local_214 || (local_218 <= local_210)))) {
      local_214 = uVar8;
      local_210 = local_218;
    }
    if (uVar3 == 0 && local_224 == 0) {
      local_234 = 0;
      local_234._0_4_ = 0;
      local_228 = (uint)local_234;
    }
    else {
      uVar5 = FUN_00418acd((int *)&DAT_00425308);
      lVar11 = __allmul(uVar5,(int)uVar5 >> 0x1f,local_21c,local_220);
      uVar12 = __aulldiv((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),uVar3,uVar9);
      local_234 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(uint)local_234);
      local_228 = (uint)uVar12;
    }
    local_220 = 0;
    if (uVar3 == 0 && uVar9 == 0) {
      local_234._0_4_ = 0;
      uVar10 = (uint)local_234;
      local_234._0_4_ = 0;
      local_21c = (uint)local_234;
      local_234._0_4_ = uVar10;
    }
    else {
      uVar5 = FUN_00418acd((int *)&DAT_00425308);
      lVar11 = __allmul(uVar5,(int)uVar5 >> 0x1f,local_210,local_214);
      uVar12 = __aulldiv((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),uVar3,uVar9);
      local_21c = (uint)uVar12;
    }
    local_234._4_4_ = 0;
    if (uVar3 == 0 && uVar9 == 0) {
      local_23c = 0;
    }
    else {
      uVar5 = FUN_00418acd((int *)&DAT_00425308);
      lVar11 = __allmul(uVar5,(int)uVar5 >> 0x1f,local_218,uVar8);
      uVar12 = __aulldiv((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),uVar3,uVar9);
      local_23c = (int)uVar12;
    }
    fStack_238 = 0.0;
    DAT_0042529c = local_228 & 0x7fffffff;
    _DAT_00425244 = local_21c & 0x7fffffff;
    local_224 = local_23c;
  }
  local_20c[0] = L'\0';
  LoadStringW(DAT_00424da8,0xb5,local_20c,0x100);
  FUN_00417535((int *)&local_210,(int *)&local_214,uVar3,uVar9,(int *)&local_218);
  pwVar6 = param_1 + 0x240;
  FUN_00404626(pwVar6,0x20,local_20c);
  uVar9 = local_228;
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x241) >> 1;
  if (*(int *)(param_1 + 0x382) < iVar7) {
    *(int *)(param_1 + 0x382) = iVar7;
  }
  FUN_00417535((int *)&local_210,(int *)&local_214,local_228,local_220,(int *)&local_218);
  pwVar6 = param_1 + 0x260;
  FUN_00404626(pwVar6,0x20,local_20c);
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x261) >> 1;
  if (*(int *)(param_1 + 900) < iVar7) {
    *(int *)(param_1 + 900) = iVar7;
  }
  FUN_00417535((int *)&local_210,(int *)&local_214,local_21c,local_234._4_4_,(int *)&local_218);
  pwVar6 = param_1 + 0x2c0;
  FUN_00404626(pwVar6,0x20,local_20c);
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x2c1) >> 1;
  if (*(int *)(param_1 + 0x38a) < iVar7) {
    *(int *)(param_1 + 0x38a) = iVar7;
  }
  FUN_00417535((int *)&local_210,(int *)&local_214,local_224,fStack_238,(int *)&local_218);
  pwVar6 = param_1 + 0x2e0;
  FUN_00404626(pwVar6,0x20,local_20c);
  uVar10 = 0;
  do {
    wVar1 = *pwVar6;
    pwVar6 = pwVar6 + 1;
  } while (wVar1 != L'\0');
  iVar7 = (int)pwVar6 - (int)(param_1 + 0x2e1) >> 1;
  if (*(int *)(param_1 + 0x38c) < iVar7) {
    *(int *)(param_1 + 0x38c) = iVar7;
  }
  if (((DAT_00425424 == 0) && (uVar9 != 0 || local_220 != 0)) &&
     (DAT_00425288 != 0 || DAT_0042528c != 0)) {
    FUN_00417581(&local_234,&fStack_238);
    pwVar6 = param_1 + 0x300;
    FUN_004153f8((undefined4 *)&local_234,pwVar6);
    do {
      wVar1 = *pwVar6;
      pwVar6 = pwVar6 + 1;
    } while (wVar1 != L'\0');
    iVar7 = (int)pwVar6 - (int)(param_1 + 0x301) >> 1;
    if (*(int *)(param_1 + 0x38e) < iVar7) {
      *(int *)(param_1 + 0x38e) = iVar7;
    }
    pwVar6 = param_1 + 0x340;
    FUN_00415473(&fStack_238,pwVar6);
    do {
      wVar1 = *pwVar6;
      pwVar6 = pwVar6 + 1;
    } while (wVar1 != L'\0');
    iVar7 = (int)pwVar6 - (int)(param_1 + 0x341) >> 1;
    uVar10 = extraout_EDX;
    if (*(int *)(param_1 + 0x38e) < iVar7) {
      *(int *)(param_1 + 0x38e) = iVar7;
    }
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar10);
  return;
}



/* Function: FUN_00417f52 */

void FUN_00417f52(void)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  undefined4 extraout_EDX;
  int iVar3;
  wchar_t local_a0c;
  undefined1 local_a0a [2046];
  WCHAR local_20c [258];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  FUN_004157eb(7,1);
  local_20c[0] = L'\0';
  LoadStringW(DAT_00424da8,0x97,local_20c,0x100);
  FUN_00404626(&local_a0c,0x400,L"%*s");
  pwVar2 = &local_a0c;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  local_20c[0] = L'\0';
  iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
  LoadStringW(DAT_00424da8,0x98,local_20c,0x100);
  FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
  pwVar2 = &local_a0c;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  local_20c[0] = L'\0';
  iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
  LoadStringW(DAT_00424da8,0x99,local_20c,0x100);
  FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
  pwVar2 = &local_a0c;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  local_20c[0] = L'\0';
  iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
  LoadStringW(DAT_00424da8,0x9a,local_20c,0x100);
  FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
  pwVar2 = &local_a0c;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  local_20c[0] = L'\0';
  iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
  LoadStringW(DAT_00424da8,0x9b,local_20c,0x100);
  FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
  pwVar2 = &local_a0c;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  local_20c[0] = L'\0';
  iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
  LoadStringW(DAT_00424da8,0x9c,local_20c,0x100);
  FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
  pwVar2 = &local_a0c;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  local_20c[0] = L'\0';
  iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
  LoadStringW(DAT_00424da8,0x9d,local_20c,0x100);
  FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
  FUN_00415737(&local_a0c,1);
  local_20c[0] = L'\0';
  LoadStringW(DAT_00424da8,0x9e,local_20c,0x100);
  FUN_00404626(&local_a0c,0x400,L"%*s%*s%*s%*s%*s%*s%*s");
  FUN_00415737(&local_a0c,1);
  local_20c[0] = L'\0';
  LoadStringW(DAT_00424da8,0x9f,local_20c,0x100);
  FUN_00404626(&local_a0c,0x400,L"%*s%*s%*s%*s%*s%*s%*s");
  FUN_00415737(&local_a0c,1);
  local_20c[0] = L'\0';
  LoadStringW(DAT_00424da8,0xa0,local_20c,0x100);
  FUN_00404626(&local_a0c,0x400,L"%*s%*s%*s%*s%*s%*s%*s");
  FUN_00415737(&local_a0c,1);
  local_20c[0] = L'\0';
  LoadStringW(DAT_00424da8,0xa1,local_20c,0x100);
  FUN_00404626(&local_a0c,0x400,L"%*s%*s%*s%*s%*s%*s%*s");
  FUN_00415737(&local_a0c,1);
  if (DAT_00425424 == 0) {
    iVar3 = FUN_00418acd((int *)&DAT_00425298);
    if ((iVar3 != 0) && (DAT_00425288 != 0 || DAT_0042528c != 0)) {
      FUN_004157eb(0x96,1);
      local_20c[0] = L'\0';
      LoadStringW(DAT_00424da8,0xa2,local_20c,0x100);
      FUN_00404626(&local_a0c,0x400,L"%*s");
      pwVar2 = &local_a0c;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (wVar1 != L'\0');
      local_20c[0] = L'\0';
      iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
      LoadStringW(DAT_00424da8,0x97,local_20c,0x100);
      FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
      pwVar2 = &local_a0c;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (wVar1 != L'\0');
      iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
      FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
      pwVar2 = &local_a0c;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (wVar1 != L'\0');
      local_20c[0] = L'\0';
      iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
      LoadStringW(DAT_00424da8,0xa3,local_20c,0x100);
      FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L" %s");
      FUN_00415737(&local_a0c,1);
      local_20c[0] = L'\0';
      LoadStringW(DAT_00424da8,0xa2,local_20c,0x100);
      FUN_00404626(&local_a0c,0x400,L"%*s");
      pwVar2 = &local_a0c;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (wVar1 != L'\0');
      local_20c[0] = L'\0';
      iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
      LoadStringW(DAT_00424da8,0x97,local_20c,0x100);
      FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
      pwVar2 = &local_a0c;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (wVar1 != L'\0');
      iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
      FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L"%*s");
      pwVar2 = &local_a0c;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (wVar1 != L'\0');
      local_20c[0] = L'\0';
      iVar3 = (int)pwVar2 - (int)local_a0a >> 1;
      LoadStringW(DAT_00424da8,0xa4,local_20c,0x100);
      FUN_00404626((wchar_t *)(local_a0a + iVar3 * 2 + -2),0x400 - iVar3,L" %s");
      FUN_00415737(&local_a0c,1);
    }
  }
  FUN_00417434(0xa6);
  FUN_004157eb(0x96,1);
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00418845 */

void __fastcall FUN_00418845(undefined2 *param_1)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  int *piVar5;
  wchar_t local_a08;
  undefined1 local_a06 [2046];
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_208[0] = L'\0';
  *param_1 = 0;
  param_1[0x20] = 0;
  param_1[0x40] = 0;
  param_1[0x60] = 0;
  param_1[0x80] = 0;
  param_1[0xa0] = 0;
  param_1[0xc0] = 0;
  param_1[0xe0] = 0;
  param_1[0x100] = 0;
  param_1[0x120] = 0;
  param_1[0x140] = 0;
  param_1[0x160] = 0;
  param_1[0x180] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1e0] = 0;
  param_1[0x200] = 0;
  param_1[0x220] = 0;
  param_1[0x240] = 0;
  param_1[0x260] = 0;
  param_1[0x280] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2e0] = 0;
  param_1[0x300] = 0;
  param_1[0x340] = 0;
  LoadStringW(DAT_00424da8,0xaa,local_208,0x100);
  FUN_00404626(&local_a08,0x400,local_208);
  pwVar3 = &local_a08;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  iVar4 = (int)pwVar3 - (int)local_a06 >> 1;
  piVar5 = (int *)(param_1 + 0x380);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = iVar4;
    piVar5 = piVar5 + 1;
  }
  *(int *)(param_1 + 0x38e) = iVar4;
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,iVar4);
  return;
}



/* Function: FUN_00418994 */

void __cdecl FUN_00418994(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004045ef(param_1,0x400,param_2,&stack0x0000000c);
  if (iVar1 < 0) {
    *param_1 = L'\0';
  }
  return;
}



/* Function: FUN_004189c2 */

void __cdecl FUN_004189c2(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004045ef(param_1,0x20,param_2,&stack0x0000000c);
  if (iVar1 < 0) {
    *param_1 = L'\0';
  }
  return;
}



/* Function: FUN_004189ee */

void __cdecl FUN_004189ee(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004045ef(param_1,0x40,param_2,&stack0x0000000c);
  if (iVar1 < 0) {
    *param_1 = L'\0';
  }
  return;
}



/* Function: FUN_00418a20 */

undefined4 * __fastcall FUN_00418a20(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Function: FUN_00418a30 */

int __fastcall FUN_00418a30(int *param_1)

{
  DWORD dwErrCode;
  int iVar1;
  clock_t cVar2;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_00418acd(param_1);
  cVar2 = clock();
  *param_1 = cVar2;
  if (cVar2 == 0) {
    *param_1 = 1;
  }
  SetLastError(dwErrCode);
  return iVar1;
}



/* Function: FUN_00418a6d */

int __fastcall FUN_00418a6d(int *param_1)

{
  DWORD dwErrCode;
  int iVar1;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_00418acd(param_1);
  *param_1 = 0;
  SetLastError(dwErrCode);
  return iVar1;
}



/* Function: FUN_00418a9b */

int __fastcall FUN_00418a9b(int *param_1)

{
  DWORD dwErrCode;
  int iVar1;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_00418acd(param_1);
  *param_1 = 0;
  param_1[1] = 0;
  SetLastError(dwErrCode);
  return iVar1;
}



/* Function: FUN_00418acd */

int __fastcall FUN_00418acd(int *param_1)

{
  DWORD dwErrCode;
  clock_t cVar1;
  
  dwErrCode = GetLastError();
  if (*param_1 != 0) {
    cVar1 = clock();
    if (*param_1 < cVar1) {
      param_1[1] = param_1[1] + (cVar1 - *param_1);
    }
    *param_1 = cVar1;
  }
  SetLastError(dwErrCode);
  return param_1[1];
}



/* Function: FUN_00418b06 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00418b06(undefined4 *param_1)

{
  FUN_0040da58(param_1 + 1,&DAT_00424018);
  FUN_00404254(param_1 + 6);
  FUN_00404254(param_1 + 0xc);
  *param_1 = 0;
  FUN_0040e201(param_1 + 1);
  _DAT_004256a0 = _DAT_004256a0 + 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x12] = 1;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



/* Function: FUN_00418b83 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00418b83(int *param_1)

{
  bool bVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00421b8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 3;
  if (param_1[0x16] != 0) {
    FUN_0041038b(param_1,0x2391);
  }
  FUN_0041a23f(param_1 + 6);
  FUN_0041a23f(param_1 + 0xc);
  if ((int *)*param_1 != (int *)0x0) {
    FUN_0040474c((int *)*param_1);
  }
  *param_1 = 0;
  FUN_0040e201(param_1 + 1);
  _DAT_004256a0 = _DAT_004256a0 + -1;
  bVar1 = _DAT_004256a0 == 0;
  param_1[2] = 0;
  if ((bVar1) && (DAT_004256a4 != (HGLOBAL)0x0)) {
    GlobalFree(DAT_004256a4);
    DAT_004256a4 = (HGLOBAL)0x0;
    FUN_00418c47();
    return;
  }
  FUN_00404303(param_1 + 0xc);
  FUN_00404303(param_1 + 6);
  FUN_004044dc((undefined4 *)(param_1[1] + -0x10));
  ExceptionList = local_10;
  return;
}



/* Function: Catch_All@00418c18 */

undefined * Catch_All_00418c18(void)

{
  DWORD dwErrCode;
  
  dwErrCode = GetLastError();
  if (DAT_00425484 != 0) {
    wprintf(L"\nException in CZDir destructor error:%d\n",dwErrCode);
  }
  SetLastError(dwErrCode);
  return &DAT_00418c44;
}



/* Function: FUN_00418c47 */

void FUN_00418c47(void)

{
  int unaff_EBP;
  int unaff_ESI;
  
  FUN_00404303((undefined4 *)(unaff_ESI + 0x30));
  FUN_00404303((undefined4 *)(unaff_ESI + 0x18));
  FUN_004044dc((undefined4 *)(*(int *)(unaff_ESI + 4) + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_00418c78 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_00418c78(void *this,void *param_1,int param_2)

{
  int *piVar1;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x418c84;
  if (param_2 == 0) {
    param_2 = *(int *)((int)param_1 + 0x40);
  }
  *(int *)this = param_2;
  LOCK();
  *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  UNLOCK();
  *(uint *)((int)this + 0x5c) =
       (uint)(*(int *)((int)param_1 + 0x60) != 0 || *(int *)((int)param_1 + 100) != 0);
  piVar1 = FUN_0041c84b(param_1,local_14);
  local_8 = 0;
  FUN_0041a27a(this,piVar1);
  FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
  FUN_0041a744(this,*(int *)((int)param_1 + 0x48));
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_1 + 0x50);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)param_1 + 0x54);
  return;
}



/* Function: FUN_00418cf1 */

void FUN_00418cf1(void)

{
  void *pvVar1;
  HANDLE hDevice;
  undefined4 *lpOutBuffer;
  BOOL BVar2;
  undefined4 extraout_EDX;
  DWORD local_44;
  LPCWSTR local_40;
  _BY_HANDLE_FILE_INFORMATION local_3c;
  uint local_8;
  
  pvVar1 = DAT_00424fc8;
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_44 = 0;
  FUN_0041a2f8(DAT_00424fc8,(int *)&local_40);
  hDevice = CreateFileW(local_40,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x2200080,(HANDLE)0x0);
  if (hDevice != (HANDLE)0xffffffff) {
    lpOutBuffer = (undefined4 *)malloc(0x4000);
    if (lpOutBuffer != (undefined4 *)0x0) {
      BVar2 = DeviceIoControl(hDevice,0x900a8,(LPVOID)0x0,0,lpOutBuffer,0x4000,&local_44,
                              (LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        BVar2 = GetFileInformationByHandle(hDevice,&local_3c);
        if (BVar2 != 0) {
          *(DWORD *)((int)pvVar1 + 0x10) = local_3c.dwFileAttributes;
          *(undefined4 *)((int)pvVar1 + 0x14) = *lpOutBuffer;
        }
      }
      free(lpOutBuffer);
    }
    CloseHandle(hDevice);
  }
  FUN_004044dc((undefined4 *)(local_40 + -8));
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00418dbc */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00418dbc(void *this,undefined4 param_1,UINT param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  HANDLE hFindFile;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar6;
  int local_274;
  int local_270;
  int local_26c;
  LPCWSTR local_268;
  _WIN32_FIND_DATAW local_264;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar6 = DAT_0042544c;
  iVar1 = DAT_00424188;
  uStack_4 = 0x26c;
  local_8 = 0x418dcb;
  local_270 = DAT_0042544c;
  FUN_0041a2f8(this,(int *)&local_268);
  local_8 = 0;
  local_26c = 0;
  do {
    SetLastError(0);
    DVar2 = GetFileAttributesW(local_268);
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      if (DVar2 != 0) {
        if ((DVar2 & 0x10) != 0) goto LAB_00418e30;
        goto LAB_00418f20;
      }
    }
    else {
LAB_00418e30:
      if (DVar3 == 0x57) {
LAB_00418f20:
        SetLastError(0x10b);
LAB_00418f2b:
        FUN_004044dc((undefined4 *)(local_268 + -8));
        FUN_00420a47(extraout_ECX,extraout_EDX);
        return;
      }
      if ((((DVar3 == 0x10b) || (DVar3 == 0x7b)) || ((DVar3 == 0x43 && (iVar6 == 0)))) ||
         (((DVar3 == 0x56 || (DVar3 == 2)) || (DVar3 == 3)))) goto LAB_00418f2b;
    }
    puVar4 = (undefined4 *)FUN_0041bec9(&local_274,(int *)&local_268,(short *)&DAT_00401ce8);
    hFindFile = FindFirstFileW((LPCWSTR)*puVar4,&local_264);
    FUN_004044dc((undefined4 *)(local_274 + -0x10));
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
      goto LAB_00418f2b;
    }
    DVar2 = GetLastError();
    if ((((DVar2 == 2) || (DVar2 == 0x10b)) ||
        (((DVar2 == 0x7b || ((DVar2 == 0x43 && (local_270 == 0)))) || (DVar2 == 0x56)))) ||
       ((DVar2 == 5 || (DVar2 == 3)))) goto LAB_00418f2b;
    local_26c = local_26c + 1;
    iVar5 = FUN_0040f891(this,param_2,iVar1,local_26c);
    iVar6 = local_270;
    if (iVar5 == 0) goto LAB_00418f2b;
  } while( true );
}



/* Function: FUN_00418f4b */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __thiscall FUN_00418f4b(void *this,int param_1,UINT param_2,int param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_18;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x418f57;
  FUN_0041a2f8(this,(int *)local_14);
  uVar5 = 0;
  local_8 = 0;
  local_18 = 0;
  do {
    BVar1 = CreateDirectoryW(local_14[0],(LPSECURITY_ATTRIBUTES)0x0);
    if (BVar1 != 0) {
LAB_00419031:
      uVar5 = 1;
      break;
    }
    DVar2 = GetLastError();
    if ((DVar2 == 0xb7) && (uVar3 = GetFileAttributesW(local_14[0]), uVar3 != 0xffffffff)) {
LAB_00419028:
      uVar5 = uVar3 & 0x10;
      break;
    }
    if (((DVar2 == 0x10b) || (DVar2 == 0x7b)) ||
       ((((DVar2 == 0x43 && (param_1 == 0)) || (DVar2 == 0x56)) || (DVar2 == 5)))) {
LAB_0041902d:
      uVar5 = 0;
      break;
    }
    if (DVar2 == 3) {
                    /* WARNING: Load size is inaccurate */
      if ((*this == (void *)0x0) ||
         (uVar3 = FUN_00418f4b(*this,param_1,param_2,param_3), uVar3 == 0)) goto LAB_0041902d;
      BVar1 = CreateDirectoryW(local_14[0],(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar1 != 0) goto LAB_00419031;
      DVar2 = GetLastError();
      if ((DVar2 == 0xb7) && (uVar3 = GetFileAttributesW(local_14[0]), uVar3 != 0xffffffff))
      goto LAB_00419028;
    }
    local_18 = local_18 + 1;
    iVar4 = FUN_0040f891(this,param_2,param_3,local_18);
  } while (iVar4 != 0);
  FUN_004044dc((undefined4 *)(local_14[0] + -8));
  return uVar5;
}



/* Function: FUN_00419051 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __thiscall FUN_00419051(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_20;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar2 = DAT_0042544c;
  iVar1 = DAT_00424188;
  uStack_4 = 0x10;
  local_8 = 0x41905d;
  FUN_0041a2f8(this,(int *)local_14);
  uVar7 = 0;
  local_8 = 0;
  if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
    local_20 = 0;
    do {
      BVar3 = CreateDirectoryW(local_14[0],(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar3 != 0) {
LAB_00419171:
        uVar7 = 1;
        break;
      }
      DVar4 = GetLastError();
      if ((DVar4 == 0xb7) && (uVar5 = GetFileAttributesW(local_14[0]), uVar5 != 0xffffffff)) {
LAB_00419168:
        uVar7 = uVar5 & 0x10;
        break;
      }
      if (((DVar4 == 0x10b) || (DVar4 == 0x7b)) ||
         ((((DVar4 == 0x43 && (iVar2 == 0)) || (DVar4 == 0x56)) || (DVar4 == 5)))) {
LAB_0041916d:
        uVar7 = 0;
        break;
      }
      if (DVar4 == 3) {
                    /* WARNING: Load size is inaccurate */
        if ((*this == (void *)0x0) || (uVar5 = FUN_00418f4b(*this,iVar2,0x2394,iVar1), uVar5 == 0))
        goto LAB_0041916d;
        BVar3 = CreateDirectoryW(local_14[0],(LPSECURITY_ATTRIBUTES)0x0);
        if (BVar3 != 0) goto LAB_00419171;
        DVar4 = GetLastError();
        if ((DVar4 == 0xb7) && (uVar5 = GetFileAttributesW(local_14[0]), uVar5 != 0xffffffff))
        goto LAB_00419168;
      }
      local_20 = local_20 + 1;
      iVar6 = FUN_0040f891(this,0x2394,iVar1,local_20);
    } while (iVar6 != 0);
  }
  else {
    uVar7 = FUN_00418f4b(this,iVar2,0x2394,iVar1);
  }
  FUN_004044dc((undefined4 *)(local_14[0] + -8));
  return uVar7;
}



/* Function: FUN_00419191 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_00419191(int *param_1)

{
  uint uVar1;
  uint uVar2;
  HANDLE hObject;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *puVar8;
  bool bVar9;
  int in_stack_00000018;
  undefined8 local_74;
  int local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  void *local_5c;
  int *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  DWORD local_48;
  LPCWSTR local_44;
  undefined4 local_40 [8];
  uint local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar2 = DAT_00425520;
  uVar1 = DAT_00425500;
  uStack_4 = 100;
  local_8 = 0x41919d;
  puVar8 = local_40;
  local_40[0] = 0;
  local_48 = in_stack_00000018;
  local_6c = DAT_00424188;
  for (iVar6 = 9; puVar8 = puVar8 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
  }
  local_58 = param_1;
  local_74 = 0;
  FUN_0041a2f8(param_1,(int *)&local_44);
  local_64 = (uVar1 & 0x4000) - (uVar2 & 0x4000);
  local_8 = 0;
  local_68 = (uint)(0 < local_64);
  local_4c = (uVar1 & 0x800) - (uVar2 & 0x800);
  local_54 = (uint)(0 < (int)local_4c);
  local_50 = local_4c >> 0x1f;
  iVar6 = 0;
  local_60 = (*(uint *)((int)local_5c + 0x10) | uVar1) & ~uVar2 & 0x1a3127 | 0x80;
  bVar9 = local_48 != 0;
  local_48 = 0x2000080;
  if (bVar9) {
    local_48 = 0x2200080;
  }
  do {
    hObject = CreateFileW(local_44,0x100,3,(LPSECURITY_ATTRIBUTES)0x0,3,local_48,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      puVar8 = local_40;
      for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_20 = local_60;
      local_74 = 0;
      iVar3 = NtSetInformationFile(hObject,&local_74,local_40,0x28,4);
      CloseHandle(hObject);
      iVar7 = local_64;
      if (iVar3 < 0) {
        DVar5 = RtlNtStatusToDosError(iVar3);
        SetLastError(DVar5);
      }
      else if (local_64 == 0) {
        if (((((int)local_4c < 1) && (local_50 == 0)) ||
            (BVar4 = FUN_0041cb33(&local_44,local_54), BVar4 != 0)) ||
           (DVar5 = GetLastError(), DVar5 == 1)) goto LAB_0041936b;
      }
      else {
        iVar3 = FUN_0041cb15(&local_44,local_68);
        if ((iVar3 != 0) &&
           ((0 < iVar7 ||
            ((((int)local_4c < 1 && (local_50 == 0)) ||
             (BVar4 = FUN_0041cb33(&local_44,local_54), BVar4 != 0)))))) goto LAB_0041936b;
      }
      DVar5 = GetLastError();
      if ((DVar5 == 0x57) && (*local_58 == 0)) goto LAB_0041936b;
      if ((DVar5 == 0x7b) || (DVar5 == 2)) {
        FUN_0040f891(local_5c,0x239c,0,iVar6 + 1);
        goto LAB_0041936b;
      }
    }
    iVar6 = iVar6 + 1;
    iVar7 = FUN_0040f891(local_58,0x239c,local_6c,iVar6);
    if (iVar7 == 0) {
LAB_0041936b:
      FUN_004044dc((undefined4 *)(local_44 + -8));
      FUN_00420a47(extraout_ECX,extraout_EDX);
      return;
    }
  } while( true );
}



/* Function: FUN_00419386 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_00419386(void *this,void *param_1,uint param_2)

{
  int iVar1;
  DWORD dwErrCode;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x419392;
  FUN_0041a2f8(param_1,&local_18);
  uVar2 = 0;
  local_8 = 0;
  FUN_0041a2f8(this,(int *)local_14);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_0041abf8(local_18,local_14[0],param_2);
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_0041940c;
    }
    dwErrCode = GetLastError();
    if ((dwErrCode == 0x7b) || (dwErrCode == 2)) break;
    SetLastError(dwErrCode);
    iVar3 = iVar3 + 1;
    iVar1 = FUN_0040f891(param_1,0x23a2,0,iVar3);
    if (iVar1 == 0) {
LAB_0041940c:
      FUN_004044dc((undefined4 *)(local_14[0] + -8));
      FUN_004044dc((undefined4 *)(local_18 + -0x10));
      return uVar2;
    }
  }
  FUN_0040f891(this,0x23a2,0,iVar3 + 1);
  goto LAB_0041940c;
}



/* Function: FUN_00419432 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_00419432(void *this,void *param_1,UINT *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  DWORD DVar6;
  HANDLE hObject;
  size_t _Size;
  void *_Memory;
  void *pvVar7;
  undefined4 local_7c;
  uint local_78;
  uint local_64;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  HANDLE local_20;
  undefined4 local_1c;
  void *local_18;
  char local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x41943e;
  local_20 = (HANDLE)0x0;
  if (((*(int *)((int)this + 0x14) == -0x5ffffffd) && (DAT_00425534 == 0)) ||
     (local_18 = this, ((DAT_00425420 & DAT_00425418) >> 0x12 & 1) == 0)) {
    return 1;
  }
  do {
    DVar6 = 0;
    local_1c = 1;
    if (param_2[2] == 0) {
LAB_0041963f:
      pvVar7 = local_18;
      _Memory = (void *)0x0;
      hObject = (HANDLE)0xffffffff;
      if (DAT_00425548 == 0) {
        return local_1c;
      }
      piVar2 = FUN_0041a2f8(local_18,&local_28);
      local_18 = CreateFileW((LPCWSTR)*piVar2,8,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2200080,(HANDLE)0x0
                            );
      FUN_004044dc((undefined4 *)(local_28 + -0x10));
      if (local_18 == (HANDLE)0xffffffff) {
        DVar6 = GetLastError();
        goto LAB_00419776;
      }
      piVar2 = FUN_0041a2f8(param_1,&local_2c);
      hObject = CreateFileW((LPCWSTR)*piVar2,0x10,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2200080,
                            (HANDLE)0x0);
      local_20 = hObject;
      FUN_004044dc((undefined4 *)(local_2c + -0x10));
      if (hObject == (HANDLE)0xffffffff) {
        DVar6 = GetLastError();
        pvVar7 = param_1;
        goto LAB_00419776;
      }
      iVar4 = NtQueryInformationFile(local_18,local_38,&local_30,4,7);
      if ((iVar4 < 0) || (local_30 == 0)) goto LAB_004197a2;
      _Size = local_30 + 0x80;
      break;
    }
    uVar5 = 0x80;
    if ((DAT_00425544 != 0) && (*(int *)((int)local_18 + 0x14) == -0x5ffffff4)) {
      uVar5 = 0x880;
    }
    uVar3 = uVar5 | 0x200000;
    if (*(int *)((int)local_18 + 0x14) != -0x5ffffffd) {
      uVar3 = uVar5;
    }
    uVar5 = uVar3 | 0x8000;
    if (param_2[3] == 0) {
      uVar5 = uVar3;
    }
    if (DAT_00425480 == 1) {
      uVar5 = uVar5 | 0x20000000;
    }
    else if (DAT_00425480 == 2) {
      uVar5 = uVar5 | 0x80000000;
    }
    memset(&local_7c,0,0x40);
    while( true ) {
      cVar1 = FUN_00415257();
      if (((cVar1 == '\0') || (param_2[3] != 0)) || (DAT_00425238 != 0 || DAT_0042523c != 0)) {
        local_7c = 0x14;
        local_11 = '\0';
      }
      else {
        local_64 = extraout_ECX;
        if (extraout_ECX != 0) {
          if (extraout_ECX < 0x1000) {
            local_64 = 0x1000;
          }
          else if (0x40000000 < extraout_ECX) {
            local_64 = 0x40000000;
          }
        }
        local_7c = 0x40;
        local_11 = '\x01';
      }
      local_78 = uVar5;
      piVar2 = FUN_0041a2f8(param_1,&local_28);
      local_8 = 0;
      iVar4 = *piVar2;
      piVar2 = FUN_0041a2f8(local_18,&local_24);
      uVar3 = CopyFile2(*piVar2,iVar4,&local_7c);
      FUN_004044dc((undefined4 *)(local_24 + -0x10));
      local_8 = 0xffffffff;
      FUN_004044dc((undefined4 *)(local_28 + -0x10));
      if (uVar3 != 0x80070057) break;
      if (local_11 == '\0') goto LAB_004195d2;
      DAT_00425234 = 0;
      DAT_00425230 = 0;
    }
    if (-1 < (int)uVar3) goto LAB_0041963f;
    if ((uVar3 & 0x1fff0000) != 0x70000) goto LAB_004195d5;
LAB_004195d2:
    DVar6 = uVar3 & 0xffff;
LAB_004195d5:
    local_1c = 0;
    SetLastError(DVar6);
    if ((DVar6 == 0x7b) || (DVar6 == 2)) {
      FUN_0040f891(local_18,*param_2,0,(int)local_20 + 1);
      goto LAB_00419628;
    }
    local_20 = (HANDLE)((int)local_20 + 1);
    iVar4 = FUN_0040f891(param_1,*param_2,param_2[1],(int)local_20);
    if (iVar4 == 0) {
LAB_00419628:
      if (DVar6 == 0) {
        return local_1c;
      }
      SetLastError(DVar6);
      return local_1c;
    }
  } while( true );
LAB_00419702:
  _Memory = malloc(_Size);
  if (_Memory == (void *)0x0) {
    iVar4 = -0x3fffffe9;
    hObject = local_20;
LAB_0041976f:
    DVar6 = RtlNtStatusToDosErrorNoTeb(iVar4);
LAB_00419776:
    if (DVar6 != 0) {
      SetLastError(DVar6);
      FUN_00415ae0(0x23a9,pvVar7);
      SetLastError(0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
LAB_004197a2:
      CloseHandle(local_18);
    }
    if (hObject != (HANDLE)0xffffffff) {
      CloseHandle(hObject);
    }
    if (_Memory != (void *)0x0) {
      free(_Memory);
    }
    return local_1c;
  }
  iVar4 = NtQueryEaFile(local_18,local_38,_Memory,_Size,0,0,0,0,1);
  hObject = local_20;
  if (-1 < iVar4) {
    iVar4 = NtSetEaFile(local_20,local_38,_Memory,_Size);
    pvVar7 = param_1;
    if (-1 < iVar4) goto LAB_004197a2;
    goto LAB_0041976f;
  }
  if ((iVar4 != -0x7ffffffb) && (iVar4 != -0x3fffffdd)) goto LAB_0041976f;
  free(_Memory);
  _Size = _Size * 2;
  goto LAB_00419702;
}



/* Function: FUN_004197d7 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_004197d7(void *this,undefined4 param_1,UINT param_2)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_0042544c;
  uStack_4 = 8;
  local_8 = 0x4197e3;
  FUN_0041a2f8(this,(int *)local_14);
  uVar6 = 0;
  local_8 = 0;
  iVar7 = 0;
  while( true ) {
    DVar2 = GetFileAttributesW(local_14[0]);
    uVar5 = 0;
    if (DVar2 != 0xffffffff) {
      uVar5 = DVar2;
    }
    SetFileAttributesW(local_14[0],uVar5 & 0xfffffff8);
    BVar3 = RemoveDirectoryW(local_14[0]);
    if (BVar3 != 0) break;
    DVar2 = GetLastError();
    if ((((DVar2 == 0x91) || (DVar2 == 0x10b)) || (DVar2 == 0x7b)) ||
       (((DVar2 == 0x43 && (iVar1 == 0)) || ((DVar2 == 0x56 || (DVar2 == 5)))))) goto LAB_0041986c;
    iVar7 = iVar7 + 1;
    iVar4 = FUN_0040f891(this,param_2,-1,iVar7);
    if (iVar4 == 0) goto LAB_0041986c;
  }
  uVar6 = 1;
LAB_0041986c:
  FUN_004044dc((undefined4 *)(local_14[0] + -8));
  return uVar6;
}



/* Function: FUN_00419887 */

void __thiscall
FUN_00419887(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  undefined4 extraout_EDX;
  int iVar4;
  undefined4 *puVar5;
  undefined8 local_54;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  LPCWSTR local_3c;
  uint local_38;
  HANDLE local_34;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  local_44 = param_2;
  local_48 = param_3;
  local_4c = param_4;
  FUN_0041a2f8(this,(int *)&local_3c);
  pvVar3 = (HANDLE)0xffffffff;
  local_34 = (HANDLE)0x0;
  local_38 = 0;
  if (DAT_00425544 != 0) {
    local_34 = (HANDLE)(uint)(*(int *)((int)this + 0x14) == -0x5ffffff4);
  }
  if (DAT_00425534 != 0) {
    local_38 = (uint)(*(int *)((int)this + 0x14) == -0x5ffffffd);
  }
  iVar4 = 0;
  do {
    if ((local_38 == 0) && (local_34 == (HANDLE)0x0)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
    if (iVar1 <= iVar4) break;
    DVar2 = 0x2200080;
    if (iVar4 == 0) {
      DVar2 = 0x2000080;
    }
    pvVar3 = CreateFileW(local_3c,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,DVar2,(HANDLE)0x0);
    iVar4 = iVar4 + 1;
  } while (pvVar3 == (HANDLE)0xffffffff);
  local_34 = pvVar3;
  if (pvVar3 != (HANDLE)0xffffffff) {
    puVar5 = local_30;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_54 = 0;
    iVar4 = NtQueryInformationFile(pvVar3,&local_54,local_30,0x28,4);
    CloseHandle(local_34);
    if (iVar4 < 0) {
      DVar2 = RtlNtStatusToDosError(iVar4);
      SetLastError(DVar2);
    }
    else {
      *local_40 = local_30[0];
      local_40[1] = local_30[1];
      *local_44 = local_30[2];
      local_44[1] = local_30[3];
      *local_48 = local_20;
      local_48[1] = local_1c;
      *local_4c = local_18;
      local_4c[1] = local_14;
    }
  }
  FUN_004044dc((undefined4 *)(local_3c + -8));
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004199ef */

void __thiscall
FUN_004199ef(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  undefined4 extraout_EDX;
  int iVar4;
  bool bVar5;
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  LPCWSTR local_38;
  HANDLE local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_40 = param_2;
  local_44 = param_3;
  local_48 = param_4;
  FUN_0041a2f8(this,(int *)&local_38);
  pvVar3 = (HANDLE)0xffffffff;
  bVar5 = false;
  local_34 = (HANDLE)0x0;
  if (DAT_00425544 != 0) {
    local_34 = (HANDLE)(uint)(*(int *)((int)this + 0x14) == -0x5ffffff4);
  }
  if (DAT_00425534 != 0) {
    bVar5 = *(int *)((int)this + 0x14) == -0x5ffffffd;
  }
  iVar4 = 0;
  do {
    if ((bVar5) || (local_34 != (HANDLE)0x0)) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    if (iVar1 <= iVar4) break;
    DVar2 = 0x2200080;
    if (iVar4 == 0) {
      DVar2 = 0x2000080;
    }
    pvVar3 = CreateFileW(local_38,0x100,7,(LPSECURITY_ATTRIBUTES)0x0,3,DVar2,(HANDLE)0x0);
    iVar4 = iVar4 + 1;
  } while (pvVar3 == (HANDLE)0xffffffff);
  local_34 = pvVar3;
  if (pvVar3 != (HANDLE)0xffffffff) {
    local_50 = 0;
    local_30 = *local_3c;
    local_2c = local_3c[1];
    local_10 = 0;
    local_28 = *local_40;
    local_24 = local_40[1];
    local_20 = *local_44;
    local_1c = local_44[1];
    local_18 = *local_48;
    local_14 = local_48[1];
    iVar4 = NtSetInformationFile(pvVar3,&local_50,&local_30,0x28,4);
    CloseHandle(local_34);
    if (iVar4 < 0) {
      DVar2 = RtlNtStatusToDosError(iVar4);
      SetLastError(DVar2);
    }
  }
  FUN_004044dc((undefined4 *)(local_38 + -8));
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00419b45 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00419b45(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  HANDLE pvVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 local_6c;
  LPCWSTR local_64;
  LPCWSTR local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  int *local_48;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_004254a8;
  uStack_4 = 100;
  local_8 = 0x419b51;
  local_48 = param_1;
  local_5c = DAT_00424188;
  FUN_0041a2f8(this,(int *)&local_64);
  piVar2 = local_48;
  local_8 = 0;
  local_40 = (ulonglong)local_40._4_4_ << 0x20;
  puVar7 = (undefined4 *)((int)&local_40 + 4);
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_6c = 0;
  FUN_0041a2f8(local_48,(int *)&local_60);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_54 = 0;
  local_58 = 0;
  local_44 = 0;
  local_4c = 0;
  local_50 = 0;
  if (DAT_00425544 != 0) {
    local_44 = (uint)(*(int *)((int)this + 0x14) == -0x5ffffff4);
    local_54 = (uint)(piVar2[5] == -0x5ffffff4);
  }
  if (DAT_00425534 != 0) {
    local_4c = (uint)(*(int *)((int)this + 0x14) == -0x5ffffffd);
    local_58 = (uint)(piVar2[5] == -0x5ffffffd);
  }
  do {
    pvVar6 = (HANDLE)0xffffffff;
    iVar5 = 0;
    do {
      if ((local_4c == 0) && (local_44 == 0)) {
        iVar3 = 1;
      }
      else {
        iVar3 = 2;
      }
      if (iVar3 <= iVar5) break;
      DVar4 = 0x2200080;
      if (iVar5 == 0) {
        DVar4 = 0x2000080;
      }
      pvVar6 = CreateFileW(local_64,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,DVar4,(HANDLE)0x0);
      iVar5 = iVar5 + 1;
    } while (pvVar6 == (HANDLE)0xffffffff);
    if (pvVar6 != (HANDLE)0xffffffff) {
      puVar8 = &local_40;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)puVar8 = 0;
        puVar8 = (undefined8 *)((int)puVar8 + 4);
      }
      local_6c = 0;
      iVar5 = NtQueryInformationFile(pvVar6,&local_6c,&local_40,0x28,4);
      CloseHandle(pvVar6);
      if (-1 < iVar5) {
        local_44 = 0;
        goto LAB_00419cd9;
      }
      DVar4 = RtlNtStatusToDosError(iVar5);
      SetLastError(DVar4);
    }
    DVar4 = GetLastError();
    if (DVar4 == 3) break;
    if ((DVar4 == 0x7b) || (DVar4 == 2)) {
      FUN_0040f891(this,0x2398,0,local_50 + 1);
      break;
    }
    local_50 = local_50 + 1;
    iVar5 = FUN_0040f891(local_48,0x2398,local_5c,local_50);
  } while (iVar5 != 0);
  goto LAB_00419db2;
LAB_00419cd9:
  do {
    if ((local_54 != 0) || (DVar4 = 0x2000080, local_58 != 0)) {
      DVar4 = 0x2200080;
    }
    pvVar6 = CreateFileW(local_60,0x100,3,(LPSECURITY_ATTRIBUTES)0x0,3,DVar4,(HANDLE)0x0);
    if (pvVar6 != (HANDLE)0xffffffff) {
      local_6c = 0;
      if (iVar1 == 0) {
        local_40 = 0;
        local_38 = 0;
      }
      iVar5 = NtSetInformationFile(pvVar6,&local_6c,&local_40,0x28,4);
      CloseHandle(pvVar6);
      pvVar6 = (HANDLE)0xffffffff;
      if (-1 < iVar5) goto LAB_00419db2;
      DVar4 = RtlNtStatusToDosError(iVar5);
      SetLastError(DVar4);
      if (((DVar4 == 0x32) || (DVar4 == 6)) || ((DVar4 == 0x57 && (*local_48 == 0))))
      goto LAB_00419db2;
    }
    local_44 = local_44 + 1;
    iVar5 = FUN_0040f891(local_48,0x2398,local_5c,local_44);
  } while (iVar5 != 0);
  if (pvVar6 != (HANDLE)0xffffffff) {
    CloseHandle(pvVar6);
  }
LAB_00419db2:
  FUN_004044dc((undefined4 *)(local_60 + -8));
  FUN_004044dc((undefined4 *)(local_64 + -8));
  FUN_00420a47(extraout_ECX,extraout_EDX);
  return;
}



/* Function: FUN_00419dd8 */

void FUN_00419dd8(void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)param_1 + 4);
  do {
    if (piVar3 == (int *)0x0) {
      FUN_0040429e(param_1,param_2);
      return;
    }
    piVar1 = (int *)piVar3[1];
    iVar2 = FUN_0041c315((undefined4 *)((int)param_2 + 0x44),(undefined4 *)(piVar3[2] + 0x44));
    if (iVar2 == 0) {
      if (param_2 == (void *)0x0) {
        return;
      }
      FUN_0041c106((int)param_2);
      free(param_2);
      return;
    }
    if (0 < iVar2) {
      InsertAfter(param_1,piVar3,param_2);
      return;
    }
    piVar3 = piVar1;
  } while (iVar2 < 0);
  return;
}



/* Function: FUN_00419e44 */

void __thiscall FUN_00419e44(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_004241a4;
  FUN_00419e7e((undefined4 *)((int)this + 0x18),param_1,DAT_004241a4);
  FUN_00419e7e((undefined4 *)((int)this + 0x30),param_1,uVar1);
  return;
}



/* Function: FUN_00419e7e */

void FUN_00419e7e(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint *_Memory;
  int iVar2;
  int *piVar3;
  int local_24 [6];
  void *local_c;
  
  puVar1 = (undefined4 *)*param_1;
  piVar3 = local_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  while (puVar1 != (undefined4 *)0x0) {
    local_c = (void *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    _Memory = (uint *)FUN_0041a026((int *)(param_2 + 0x30),(int)local_c,local_24);
    if (_Memory == (uint *)0x0) {
      _Memory = (uint *)FUN_0041a026((int *)(param_2 + 0x18),(int)local_c,local_24 + 3);
    }
    FUN_0041c9e1(local_c,_Memory,param_3);
    if (_Memory != (uint *)0x0) {
      FUN_0041c106((int)_Memory);
      free(_Memory);
    }
  }
  return;
}



/* Function: FUN_00419eff */

void __thiscall FUN_00419eff(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0x18);
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = piVar3[2];
      piVar3 = (int *)*piVar3;
      pvVar2 = (void *)FUN_0041a026((int *)(param_1 + 0x18),iVar1,(int *)0x0);
      if (pvVar2 != (void *)0x0) {
        *(undefined4 *)(iVar1 + 0x48) = 0xc;
        FUN_0041c106((int)pvVar2);
        free(pvVar2);
      }
    } while (piVar3 != (int *)0x0);
  }
  piVar3 = *(int **)((int)this + 0x30);
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = piVar3[2];
      piVar3 = (int *)*piVar3;
      pvVar2 = (void *)FUN_0041a026((int *)(param_1 + 0x30),iVar1,(int *)0x0);
      if (pvVar2 != (void *)0x0) {
        *(undefined4 *)(iVar1 + 0x48) = 0xc;
        FUN_0041c106((int)pvVar2);
        free(pvVar2);
      }
    } while (piVar3 != (int *)0x0);
  }
  return;
}



/* Function: FUN_00419f9d */

void FUN_00419f9d(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar1 != (undefined4 *)0x0) {
    this = (void *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = FUN_0041c315((undefined4 *)((int)this + 0x44),param_2);
    if ((iVar2 == 0) || (iVar2 = FUN_0041c373(this,param_2), iVar2 == 0)) {
      *(undefined4 *)((int)this + 0x48) = 0xc;
    }
  }
  return;
}



/* Function: FUN_00419fe7 */

int FUN_00419fe7(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  do {
    piVar2 = piVar3;
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = piVar2[2];
    piVar3 = (int *)*piVar2;
  } while (*(int *)(iVar1 + 0x48) != param_2);
  FUN_0040433a(param_1,piVar2);
  return iVar1;
}



/* Function: FUN_0041a026 */

int FUN_0041a026(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (param_3 == (int *)0x0) {
LAB_0041a050:
    if (piVar4 != (int *)0x0) goto LAB_0041a058;
  }
  else {
    iVar2 = param_3[1];
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        if (param_3[2] != 0) goto LAB_0041a110;
        if (*param_3 != 0) {
          piVar4 = (int *)*param_3;
          goto LAB_0041a058;
        }
      }
      else if (iVar2 == 2) {
        param_3 = (int *)0x0;
      }
      goto LAB_0041a050;
    }
    param_3[1] = 1;
    iVar2 = 0;
    piVar3 = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_0041a110;
    do {
      iVar1 = piVar3[2];
      piVar3 = (int *)*piVar3;
      if ((iVar2 != 0) &&
         (iVar2 = FUN_0041c315((undefined4 *)(iVar1 + 0x44),(undefined4 *)(iVar2 + 0x44)), iVar2 < 0
         )) {
        param_3[1] = 2;
        param_3 = (int *)0x0;
        break;
      }
      iVar2 = iVar1;
    } while (piVar3 != (int *)0x0);
LAB_0041a058:
    do {
      iVar2 = piVar4[2];
      piVar3 = (int *)*piVar4;
      iVar1 = FUN_0041c315((undefined4 *)(iVar2 + 0x44),(undefined4 *)(param_2 + 0x44));
      if (iVar1 == -1) {
        if (param_3 != (int *)0x0) {
          *param_3 = (int)piVar3;
        }
      }
      else {
        if (iVar1 == 0) {
          FUN_0040433a(param_1,piVar4);
          if (param_3 != (int *)0x0) {
            *param_3 = (int)piVar3;
            return iVar2;
          }
          return iVar2;
        }
        if (iVar1 == 1) {
          if (param_3 == (int *)0x0) {
            return 0;
          }
          *param_3 = (int)piVar4;
          return 0;
        }
      }
      piVar4 = piVar3;
    } while (piVar3 != (int *)0x0);
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
LAB_0041a110:
  param_3[2] = 1;
  return 0;
}



/* Function: FUN_0041a126 */

int FUN_0041a126(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  do {
    while( true ) {
      piVar2 = piVar3;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      iVar1 = piVar2[2];
      piVar3 = (int *)*piVar2;
      if (param_2 == 0x400) break;
      if ((*(uint *)(iVar1 + 0x50) & param_2) == 0) goto LAB_0041a14f;
LAB_0041a16a:
      if (param_3 != 0) goto LAB_0041a170;
    }
    if ((*(uint *)(iVar1 + 0x54) & 0x20000000) != 0) goto LAB_0041a16a;
LAB_0041a14f:
  } while (param_3 != 0);
LAB_0041a170:
  FUN_0040433a(param_1,piVar2);
  return iVar1;
}



/* Function: FUN_0041a184 */

/* WARNING: Removing unreachable block (ram,0x0041a1c8) */
/* WARNING: Removing unreachable block (ram,0x0041a1b0) */

int __thiscall FUN_0041a184(void *this,uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  
  piVar2 = *(int **)((int)this + 0x18);
  do {
    while( true ) {
      piVar3 = piVar2;
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      iVar1 = piVar3[2];
      piVar2 = (int *)*piVar3;
      lVar4 = FUN_0041c9c8(iVar1);
      if (param_3 == 0) break;
      if (CONCAT44(param_2,param_1) < lVar4) goto LAB_0041a1b5;
    }
  } while (CONCAT44(param_2,param_1) <= lVar4);
LAB_0041a1b5:
  FUN_0040433a((undefined4 *)((int)this + 0x18),piVar3);
  return iVar1;
}



/* Function: FUN_0041a1e2 */

FILETIME * __thiscall FUN_0041a1e2(void *this,FILETIME *param_1,int param_2,int param_3)

{
  FILETIME *pFVar1;
  int *piVar2;
  LONG LVar3;
  int *piVar4;
  FILETIME *lpFileTime2;
  
  piVar2 = *(int **)((int)this + 0x18);
  do {
    while( true ) {
      piVar4 = piVar2;
      if (piVar4 == (int *)0x0) {
        return (FILETIME *)0x0;
      }
      pFVar1 = (FILETIME *)piVar4[2];
      piVar2 = (int *)*piVar4;
      lpFileTime2 = pFVar1;
      if (param_3 != 0) {
        lpFileTime2 = pFVar1 + 1;
      }
      LVar3 = CompareFileTime(param_1,lpFileTime2);
      if (param_2 == 0) break;
      if (0 < LVar3) goto LAB_0041a21a;
    }
  } while (-1 < LVar3);
LAB_0041a21a:
  FUN_0040433a((undefined4 *)((int)this + 0x18),piVar4);
  return pFVar1;
}



/* Function: FUN_0041a23f */

void FUN_0041a23f(int *param_1)

{
  void *_Memory;
  
  while (param_1[2] != 0) {
    _Memory = (void *)FUN_00404276(param_1);
    if (_Memory != (void *)0x0) {
      FUN_0041c106((int)_Memory);
      free(_Memory);
    }
  }
  return;
}



/* Function: FUN_0041a27a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_0041a27a(void *this,int *param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  int iVar5;
  
  uStack_4 = 8;
  local_8 = 0x41a286;
  iVar4 = *(int *)(*param_1 + -0xc);
  do {
    iVar5 = iVar4;
    iVar4 = iVar5 + -1;
    if (iVar4 < 0) break;
    sVar1 = FUN_0041bfb4(param_1,iVar4);
  } while (sVar1 == 0x5c);
  piVar2 = FUN_0040d39c(param_1,&local_18,iVar5);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_0041bec9(local_14,piVar2,&DAT_00401400);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0040d4df((void *)((int)this + 4),puVar3);
  FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
  FUN_004044dc((undefined4 *)(local_18 + -0x10));
  return;
}



/* Function: FUN_0041a2f8 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __thiscall FUN_0041a2f8(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x41a304;
  if (DAT_004254d4 == 0) {
    if (DAT_00425638 == 0) {
                    /* WARNING: Load size is inaccurate */
      piVar3 = (int *)((int)this + 4);
      if (*this == (void *)0x0) {
        iVar2 = FUN_00408a14((PCNZWCH)*piVar3,L"\\\\",2);
        if (iVar2 != 0) {
          FUN_0041be64(param_1,L"\\\\?\\",piVar3);
          return param_1;
        }
        piVar3 = FUN_0040d3ea(piVar3,&local_1c,*(int *)(*piVar3 + -0xc) + -2);
        local_8 = 9;
        FUN_0041be64(param_1,L"\\\\?\\UNC\\",piVar3);
        local_20 = local_1c;
      }
      else {
        piVar5 = FUN_0041a2f8(*this,&local_20);
        local_8 = 8;
        FUN_0041bf27(param_1,piVar5,piVar3);
      }
      FUN_004044dc((undefined4 *)(local_20 + -0x10));
    }
    else {
      pcVar1 = *(code **)(DAT_00424018 + 0xc);
      (*(code *)PTR_guard_check_icall_004263b4)();
      local_14[0] = (*pcVar1)();
      local_14[0] = local_14[0] + 0x10;
      local_8 = 1;
                    /* WARNING: Load size is inaccurate */
      puVar4 = *this;
      while (puVar6 = puVar4, puVar6 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_0041bf27(&local_18,(int *)((int)this + 4),local_14);
        local_8._0_1_ = 2;
        FUN_0040d4df(local_14,puVar4);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004044dc((undefined4 *)(local_18 + -0x10));
        this = puVar6;
        puVar4 = (undefined4 *)*puVar6;
      }
      piVar3 = (int *)((int)this + 4);
      iVar2 = FUN_00408a14((PCNZWCH)*piVar3,L"\\\\",2);
      if (iVar2 == 0) {
        piVar3 = FUN_0040d3ea(piVar3,&local_20,*(int *)(*piVar3 + -0xc) + -2);
        local_8._0_1_ = 3;
        piVar3 = (int *)FUN_0041be64(&local_1c,L"\\\\?\\UNC\\",piVar3);
        local_8._0_1_ = 4;
        puVar4 = (undefined4 *)FUN_0041bf27(&local_18,piVar3,local_14);
        local_8._0_1_ = 5;
        FUN_0040d4df(local_14,puVar4);
        FUN_004044dc((undefined4 *)(local_18 + -0x10));
        FUN_004044dc((undefined4 *)(local_1c + -0x10));
      }
      else {
        piVar3 = (int *)FUN_0041be64(&local_1c,L"\\\\?\\",piVar3);
        local_8._0_1_ = 6;
        puVar4 = (undefined4 *)FUN_0041bf27(&local_20,piVar3,local_14);
        local_8._0_1_ = 7;
        FUN_0040d4df(local_14,puVar4);
        FUN_004044dc((undefined4 *)(local_20 + -0x10));
        local_20 = local_1c;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_004044dc((undefined4 *)(local_20 + -0x10));
      iVar2 = local_14[0];
      piVar3 = FUN_0040ddd5((int *)(local_14[0] + -0x10));
      *param_1 = (int)(piVar3 + 4);
      FUN_004044dc((undefined4 *)(iVar2 + -0x10));
    }
  }
  else {
    FUN_0041a4f6(this,param_1);
  }
  return param_1;
}



/* Function: FUN_0041a4f6 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __thiscall FUN_0041a4f6(void *this,int *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int local_18;
  int *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x41a502;
  piVar4 = (int *)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
  this_00 = *this;
  if (DAT_00425638 == 0) {
    if (this_00 != (void *)0x0) {
      piVar3 = FUN_0041a4f6(this_00,&local_18);
      local_8 = 2;
      FUN_0041bf27(param_1,piVar3,piVar4);
      FUN_004044dc((undefined4 *)(local_18 + -0x10));
      return param_1;
    }
    piVar4 = (int *)(*piVar4 + -0x10);
  }
  else {
    piVar4 = (int *)(*piVar4 + -0x10);
    if (this_00 != (void *)0x0) {
      local_14[0] = FUN_0040ddd5(piVar4);
      local_14[0] = local_14[0] + 4;
      local_8 = 0;
                    /* WARNING: Load size is inaccurate */
      for (puVar1 = *this; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
        puVar2 = (undefined4 *)FUN_0041bf27(&local_18,puVar1 + 1,local_14);
        local_8._0_1_ = 1;
        FUN_0040d4df(local_14,puVar2);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_004044dc((undefined4 *)(local_18 + -0x10));
      }
      piVar4 = local_14[0] + -4;
      piVar3 = FUN_0040ddd5(piVar4);
      *param_1 = (int)(piVar3 + 4);
      FUN_004044dc(piVar4);
      return param_1;
    }
  }
  piVar4 = FUN_0040ddd5(piVar4);
  *param_1 = (int)(piVar4 + 4);
  return param_1;
}



/* Function: FUN_0041a5d4 */

int * __thiscall FUN_0041a5d4(void *this,int *param_1)

{
  int *piVar1;
  
                    /* WARNING: Load size is inaccurate */
  if (*this == (void *)0x0) {
    piVar1 = FUN_0040ddd5((int *)(*(int *)((int)this + 4) + -0x10));
    *param_1 = (int)(piVar1 + 4);
  }
  else {
    FUN_0041a5d4(*this,param_1);
  }
  return param_1;
}



/* Function: FUN_0041a60c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall
FUN_0041a60c(void *this,UINT param_1,LPWSTR param_2,LPDWORD param_3,LPDWORD param_4,LPDWORD param_5,
            PCNZWCH param_6)

{
  LPWSTR pWVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  PCNZWCH pWVar6;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x41a618;
  FUN_0041a5d4(this,(int *)local_14);
  uVar5 = 0;
  iVar4 = 0;
  local_8 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if ((param_6 + 0x103 < param_2) || (param_2 + 0x103 < param_6)) {
    iVar4 = 0x100;
    pWVar6 = param_6;
    for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
      pWVar6[0] = L'\0';
      pWVar6[1] = L'\0';
      pWVar6 = pWVar6 + 2;
    }
    pWVar1 = param_2;
    for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
      pWVar1[0] = L'\0';
      pWVar1[1] = L'\0';
      pWVar1 = pWVar1 + 2;
    }
  }
  pWVar1 = param_2 + iVar4;
  iVar4 = 0x104 - iVar4;
  do {
    *(undefined2 *)(((int)param_6 - (int)param_2) + (int)pWVar1) = 0;
    *pWVar1 = L'\0';
    pWVar1 = pWVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  SetLastError(0);
  BVar2 = GetVolumeInformationW(local_14[0],param_2,0x104,param_3,param_5,param_4,param_6,0x104);
  param_6[0x103] = L'\0';
  param_2[0x103] = L'\0';
  GetLastError();
  if (BVar2 == 0) {
    FUN_0040f891(this,param_1,0,0);
    SetLastError(0);
  }
  else {
    iVar4 = CompareStringW(0x7f,1,param_6,-1,L"NTFS",-1);
    if (iVar4 == 2) {
      uVar5 = 1;
    }
    else {
      iVar4 = CompareStringW(0x7f,1,param_6,-1,L"REFS",-1);
      if (iVar4 == 2) {
        uVar5 = 2;
      }
    }
  }
  FUN_004044dc((undefined4 *)(local_14[0] + -8));
  return uVar5;
}



/* Function: FUN_0041a744 */

void __thiscall FUN_0041a744(void *this,int param_1)

{
  if (param_1 == 7) {
    param_1 = 9 - (uint)(*(int *)((int)this + 0x5c) != 0);
  }
  *(int *)((int)this + 8) = param_1;
  return;
}



/* Function: FUN_0041a768 */

int __fastcall FUN_0041a768(int param_1)

{
  int *this;
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  this = (int *)(param_1 + 4);
  iVar4 = 0;
  iVar2 = 0;
  iVar3 = iVar2;
  if (0 < *(int *)(*this + -0xc)) {
    do {
      sVar1 = FUN_0041bfb4(this,iVar4);
      iVar2 = iVar3 + 1;
      if (sVar1 != 0x5c) {
        iVar2 = iVar3;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar2;
    } while (iVar4 < *(int *)(*this + -0xc));
  }
  return iVar2;
}



/* Function: FUN_0041a7a3 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_0041a7a3(void *this,int param_1)

{
  int *this_00;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x41a7af;
  local_18 = (undefined4 *)FUN_0041fd5e(0x70);
  if (local_18 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00418b06(local_18);
  }
  this_00 = (int *)((int)this + 4);
  piVar2 = FUN_0040d39c(this_00,local_14,param_1);
  local_8 = 0;
  FUN_0040d4df(puVar1 + 1,piVar2);
  local_8 = 0xffffffff;
  FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
                    /* WARNING: Load size is inaccurate */
  *puVar1 = *this;
  piVar2 = FUN_0040d3ea(this_00,(int *)&local_18,*(int *)(*this_00 + -0xc) - param_1);
  local_8 = 1;
  FUN_0040d4df(this_00,piVar2);
  FUN_004044dc(local_18 + -4);
  *(undefined4 **)this = puVar1;
  LOCK();
  puVar1[0x12] = puVar1[0x12] + 1;
  UNLOCK();
  return;
}



/* Function: FUN_0041a840 */

void __fastcall FUN_0041a840(void *param_1)

{
  int *this;
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  this = (int *)((int)param_1 + 4);
  iVar3 = FUN_00408a14((PCNZWCH)*this,L"A",1);
  if ((-1 < iVar3) && (iVar3 = FUN_00408a14((PCNZWCH)*this,L"Z",1), iVar3 < 1)) {
    iVar3 = *this;
    if (*(int *)(iVar3 + -0xc) < 1) {
LAB_0041a93c:
      FUN_00404417(0x80070057);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(short *)(iVar3 + 2) == 0x3a) {
      if (*(int *)(iVar3 + -0xc) < 2) goto LAB_0041a93c;
      if ((*(short *)(iVar3 + 4) == 0x5c) && (iVar3 = FUN_0041a768((int)param_1), 1 < iVar3)) {
        iVar3 = 3;
        while( true ) {
          FUN_0041a7a3(param_1,iVar3);
          iVar3 = FUN_0041a768((int)param_1);
          if (iVar3 < 2) break;
          iVar3 = FUN_0041bf82(this);
          iVar3 = iVar3 + 1;
        }
        return;
      }
    }
  }
  iVar3 = FUN_00408a14((PCNZWCH)*this,L"\\\\",2);
  if ((iVar3 == 0) && (iVar3 = FUN_0041a768((int)param_1), 4 < iVar3)) {
    iVar3 = 0;
    local_8 = 0;
    do {
      if (*(int *)(*this + -0xc) <= iVar3) break;
      sVar2 = FUN_0041bfb4(this,iVar3);
      iVar4 = local_8 + 1;
      if (sVar2 != 0x5c) {
        iVar4 = local_8;
      }
      iVar3 = iVar3 + 1;
      local_8 = iVar4;
    } while (iVar4 < 4);
    while( true ) {
      FUN_0041a7a3(param_1,iVar3);
      iVar3 = FUN_0041a768((int)param_1);
      if (iVar3 < 2) break;
      iVar3 = FUN_0041bf82(this);
      iVar3 = iVar3 + 1;
    }
  }
  return;
}



/* Function: FUN_0041a94d */

void __fastcall FUN_0041a94d(PSECURITY_DESCRIPTOR param_1,LPCWSTR param_2)

{
  int iVar1;
  undefined *puVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = (uint)param_1 & 0xffff0000;
  GetSecurityDescriptorControl(param_1,(PSECURITY_DESCRIPTOR_CONTROL)&local_8,&local_c);
  if (DAT_00425484 != 0) {
    iVar1 = lstrcmpW(param_2,L"Source");
    if (iVar1 == 0) {
      wprintf(L"\n\n");
      wprintf(L"\t\t\tSR GROUP OWNER DACL SACL - SECURITY_DESCRIPTOR_CONTROL\n");
      wprintf(L"\t\t\t     D     D   PIDP PIDP \n");
    }
    wprintf(L"\t\t\t");
    puVar2 = &DAT_00402bcc;
    if ((local_8 & 0x8000) == 0) {
      puVar2 = &DAT_00402bd4;
    }
    wprintf(L"%s",puVar2);
    wprintf(L" ");
    pwVar3 = L"L  D  ";
    if ((local_8 & 2) == 0) {
      pwVar3 = L"  -  ";
    }
    wprintf(L"%s",pwVar3);
    wprintf(L" ");
    pwVar3 = L"  D  ";
    if ((local_8 & 1) == 0) {
      pwVar3 = L"  -  ";
    }
    wprintf(L"%s",pwVar3);
    wprintf(L" ");
    uVar4 = 0x6e;
    if ((local_8 & 4) != 0) {
      uVar4 = 0x59;
    }
    wprintf(L"%c",uVar4);
    uVar4 = 0x2d;
    uVar5 = uVar4;
    if ((local_8 & 0x400) != 0) {
      uVar5 = 0x49;
    }
    wprintf(L"%c",uVar5);
    uVar5 = uVar4;
    if ((local_8 & 8) != 0) {
      uVar5 = 0x44;
    }
    wprintf(L"%c",uVar5);
    uVar5 = uVar4;
    if ((local_8 & 0x1000) != 0) {
      uVar5 = 0x50;
    }
    wprintf(L"%c",uVar5);
    wprintf(L" ");
    uVar5 = 0x6e;
    if ((local_8 & 0x10) != 0) {
      uVar5 = 0x59;
    }
    wprintf(L"%c",uVar5);
    uVar5 = uVar4;
    if ((local_8 & 0x800) != 0) {
      uVar5 = 0x49;
    }
    wprintf(L"%c",uVar5);
    uVar5 = uVar4;
    if ((local_8 & 0x20) != 0) {
      uVar5 = 0x44;
    }
    wprintf(L"%c",uVar5);
    if ((local_8 & 0x2000) != 0) {
      uVar4 = 0x50;
    }
    wprintf(L"%c",uVar4);
    wprintf(L" - %s",param_2);
    wprintf(L"\n");
  }
  return;
}



/* Function: FUN_0041ab2e */

undefined4 __fastcall FUN_0041ab2e(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  void *_Dst;
  int iVar1;
  DWORD dwErrCode;
  void *_Memory;
  size_t _Size;
  size_t local_8;
  
  *param_3 = 0;
  memset((void *)0x0,0,0);
  _Size = 0;
  _Memory = (void *)0x0;
  while( true ) {
    iVar1 = NtQuerySecurityObject(param_1,param_2,_Memory,_Size,&local_8);
    _Size = local_8;
    if (-1 < iVar1) {
      *param_3 = _Memory;
      return 1;
    }
    if (((iVar1 != -0x7ffffffb) && (iVar1 != -0x3fffffdd)) ||
       (_Dst = malloc(local_8), _Dst == (void *)0x0)) break;
    if (_Memory != (void *)0x0) {
      free(_Memory);
      _Size = local_8;
    }
    memset(_Dst,0,_Size);
    _Memory = _Dst;
  }
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  if (-1 < iVar1) {
    return 0;
  }
  dwErrCode = RtlNtStatusToDosError(iVar1);
  SetLastError(dwErrCode);
  return 0;
}



/* Function: FUN_0041abf8 */

undefined4 __fastcall FUN_0041abf8(LPCWSTR param_1,LPCWSTR param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  HANDLE hObject;
  int iVar3;
  DWORD dwErrCode;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  undefined1 local_30 [4];
  LPCWSTR local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  void *local_18;
  PSECURITY_DESCRIPTOR local_14;
  void *local_10;
  ushort local_c [2];
  undefined1 local_8;
  undefined1 local_7;
  char local_6;
  char local_5;
  
  uVar6 = 0;
  local_14 = (PSECURITY_DESCRIPTOR)0x0;
  local_18 = (void *)0x0;
  local_10 = (void *)0x0;
  uVar5 = 0x20080;
  local_c[0] = 0;
  iVar8 = 0;
  if ((param_3 & 7) == 0) {
    uVar5 = 0x80;
  }
  local_1c = param_3;
  local_5 = '\0';
  local_7 = 0;
  local_28 = param_3 & 8;
  local_20 = 0;
  local_6 = '\0';
  local_8 = 0;
  uVar2 = uVar5 | 0x1000000;
  if (local_28 == 0) {
    uVar2 = uVar5;
  }
  local_24 = 0;
  local_2c = param_1;
  hObject = CreateFileW(param_2,uVar2,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x2200080,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    iVar3 = FUN_0041ab2e(hObject,param_3,&local_14);
    if (iVar3 != 0) {
      if (DAT_00425484 != 0) {
        FUN_0041a94d(local_14,L"Source");
      }
      CloseHandle(hObject);
      hObject = (HANDLE)0xffffffff;
      iVar8 = RtlGetControlSecurityDescriptor(local_14,local_c,local_30);
      if (-1 < iVar8) {
        uVar7 = local_c[0] >> 2 & 0x100;
        uVar4 = uVar7 | 0x200;
        if ((local_c[0] & 0x800) == 0) {
          uVar4 = uVar7;
        }
        iVar8 = RtlSetControlSecurityDescriptor(local_14,uVar4,uVar4);
        if ((-1 < iVar8) &&
           (iVar8 = RtlGetDaclSecurityDescriptor(local_14,&local_5,&local_20,&local_7), -1 < iVar8))
        {
          if (local_5 == '\0') {
            local_1c = param_3 & 0xfffffffb;
          }
          iVar8 = RtlGetSaclSecurityDescriptor(local_14,&local_6,&local_24,&local_8);
          if (-1 < iVar8) {
            if (local_6 == '\0') {
              local_1c = local_1c & 0xffffffe7;
            }
            uVar5 = 0x180100;
            if ((param_3 & 3) == 0) {
              uVar5 = 0x100100;
            }
            uVar2 = uVar5 | 0x40000;
            if ((param_3 & 4) == 0) {
              uVar2 = uVar5;
            }
            uVar5 = uVar2 | 0x1000000;
            if (local_28 == 0) {
              uVar5 = uVar2;
            }
            hObject = CreateFileW(local_2c,uVar5,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x2200080,
                                  (HANDLE)0x0);
            if (hObject != (HANDLE)0xffffffff) {
              pvVar1 = local_18;
              if ((DAT_00425484 != 0) &&
                 (iVar8 = FUN_0041ab2e(hObject,param_3,&local_10), pvVar1 = local_10, iVar8 != 0)) {
                FUN_0041a94d(local_10,L"Target");
                free(local_10);
                local_10 = (void *)0x0;
                pvVar1 = local_10;
              }
              local_18 = pvVar1;
              iVar8 = NtSetSecurityObject(hObject,local_1c,local_14);
              if (-1 < iVar8) {
                if (DAT_00425484 != 0) {
                  iVar3 = FUN_0041ab2e(hObject,param_3,&local_10);
                  if (iVar3 == 0) {
                    local_18 = local_10;
                  }
                  else {
                    FUN_0041a94d(local_10,L"Result");
                    free(local_10);
                    local_18 = (void *)0x0;
                  }
                }
                uVar6 = 1;
              }
            }
          }
        }
      }
    }
    if (local_14 != (void *)0x0) {
      free(local_14);
    }
    if (local_18 != (void *)0x0) {
      free(local_18);
    }
    if (hObject != (HANDLE)0xffffffff) {
      CloseHandle(hObject);
    }
    if (iVar8 < 0) {
      dwErrCode = RtlNtStatusToDosError(iVar8);
      SetLastError(dwErrCode);
    }
  }
  return uVar6;
}



/* Function: FUN_0041ae7b */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0041ae7b(void *this,int *param_1)

{
  LPCWSTR pWVar1;
  int *piVar2;
  int iVar3;
  DWORD dwErrCode;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *puVar4;
  HANDLE pvVar5;
  HANDLE hObject;
  LPCWSTR lpFileName;
  undefined8 local_a4;
  int local_9c [2];
  LPCWSTR local_94;
  HANDLE local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x41ae8a;
  local_9c[1] = 0;
  if (param_1 == (int *)0x0) {
    piVar2 = FUN_0041c889(this,local_9c);
    local_90 = (HANDLE)0x2;
    local_9c[1] = 2;
    piVar2 = (int *)*piVar2;
  }
  else {
    piVar2 = FUN_0040ddd5((int *)(*param_1 + -0x10));
    piVar2 = piVar2 + 4;
    local_90 = (HANDLE)0x1;
    local_9c[1] = 1;
    local_94 = (LPCWSTR)piVar2;
  }
  pWVar1 = local_94;
  local_8 = (uint)(param_1 == (int *)0x0);
  piVar2 = FUN_0040ddd5(piVar2 + -4);
  lpFileName = (LPCWSTR)(piVar2 + 4);
  local_8 = 2;
  local_94 = lpFileName;
  if (((uint)local_90 & 2) != 0) {
    local_90 = (HANDLE)((uint)local_90 & 0xfffffffd);
    FUN_004044dc((undefined4 *)(local_9c[0] + -0x10));
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  if (((uint)local_90 & 1) != 0) {
    FUN_004044dc((int *)((int)pWVar1 + -0x10));
  }
  local_74 = 0;
  local_a4 = 0;
  memset(&local_70,0,0x34);
  local_90 = CreateFileW(lpFileName,0x80,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
  if (local_90 == (HANDLE)0xffffffff) goto LAB_0041b0bc;
  iVar3 = NtQueryInformationFile(local_90,&local_a4,&local_74,0x38,0x22);
  hObject = local_90;
  if (iVar3 < 0) {
    local_3c = 0;
    puVar4 = local_38;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = NtQueryInformationFile(local_90,&local_a4,&local_3c,0x28,4);
    pvVar5 = local_90;
    if (-1 < iVar3) {
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      iVar3 = NtQueryInformationFile(local_90,&local_a4,&local_8c,0x18,5);
      hObject = pvVar5;
      if (-1 < iVar3) {
        *(undefined4 *)((int)this + 0x58) = local_3c;
        *(undefined4 *)((int)this + 0x5c) = local_38[0];
        *(undefined4 *)((int)this + 8) = local_38[1];
        *(undefined4 *)((int)this + 0xc) = local_38[2];
        *(undefined4 *)this = local_38[3];
        *(undefined4 *)((int)this + 4) = local_28;
        *(undefined4 *)((int)this + 0x60) = local_24;
        *(undefined4 *)((int)this + 100) = local_20;
        *(undefined4 *)((int)this + 0x50) = local_1c;
        local_4c = local_84;
        local_48 = local_80;
        goto LAB_0041b082;
      }
    }
    dwErrCode = RtlNtStatusToDosError(iVar3);
    SetLastError(dwErrCode);
    if (DAT_00425484 != 0) {
      FUN_00415b95(0x23a8,this);
    }
  }
  else {
    *(undefined4 *)((int)this + 0x58) = local_74;
    *(undefined4 *)((int)this + 0x5c) = local_70;
    *(undefined4 *)((int)this + 8) = local_6c;
    *(undefined4 *)((int)this + 0xc) = local_68;
    *(undefined4 *)this = local_64;
    *(undefined4 *)((int)this + 4) = local_60;
    *(undefined4 *)((int)this + 0x60) = local_5c;
    *(undefined4 *)((int)this + 100) = local_58;
    *(undefined4 *)((int)this + 0x50) = local_44;
    pvVar5 = local_90;
LAB_0041b082:
    *(undefined4 *)((int)this + 0x6c) = local_48;
    *(undefined4 *)((int)this + 0x68) = local_4c;
    hObject = pvVar5;
  }
  CloseHandle(hObject);
  lpFileName = local_94;
LAB_0041b0bc:
  FUN_004044dc((undefined4 *)(lpFileName + -8));
  FUN_00420a47(extraout_ECX,extraout_EDX);
  return;
}



/* Function: FUN_0041b0d4 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool __thiscall FUN_0041b0d4(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x41b0e0;
  piVar1 = FUN_0041a2f8(param_1,local_14);
  local_8 = 0;
  iVar2 = FUN_0041ae7b(this,piVar1);
  FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
  return iVar2 != 0;
}



/* Function: FUN_0041b11c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0041b11c(void *this,void *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x41b128;
  iVar6 = 0x44;
  if (param_3 != 0) {
    iVar6 = 0x5e;
  }
  *(void **)((int)this + 0x40) = param_1;
  local_20 = (int *)(iVar6 + param_2);
  local_18 = 0;
  local_14 = 0;
  local_1c = *(uint *)(param_2 + 0x3c);
  LOCK();
  *(int *)((int)param_1 + 0x48) = *(int *)((int)param_1 + 0x48) + 1;
  UNLOCK();
  if ((param_3 == 0) || (*(short *)(param_2 + 0x46) == 0)) {
    piVar5 = (int *)FUN_0041fd5e(4);
    local_8 = 1;
    piVar7 = local_20;
    uVar1 = local_1c;
    if (piVar5 == (int *)0x0) goto LAB_0041b1b7;
LAB_0041b1ae:
    FUN_0040df2e(piVar5,piVar7,uVar1 >> 1,&DAT_00424018);
  }
  else {
    piVar5 = (int *)FUN_0041fd5e(4);
    local_8 = 0;
    if (piVar5 != (int *)0x0) {
      piVar7 = (int *)(param_2 + 0x46);
      uVar1 = (int)*(char *)(param_2 + 0x44);
      goto LAB_0041b1ae;
    }
LAB_0041b1b7:
    piVar5 = (int *)0x0;
  }
  local_8 = 0xffffffff;
  FUN_0040d4df((void *)((int)this + 0x44),piVar5);
  if (piVar5 != (int *)0x0) {
    FUN_004044dc((undefined4 *)(*piVar5 + -0x10));
    free(piVar5);
  }
  uVar1 = *(uint *)(param_2 + 0x38);
  *(uint *)((int)this + 0x50) = uVar1;
  iVar6 = local_14;
  if ((uVar1 & 0x400) != 0) {
    iVar2 = *(int *)(param_2 + 0x40);
    *(int *)((int)this + 0x54) = iVar2;
    if (iVar2 == -0x5ffffff4) {
      local_18 = 1;
    }
    else if (iVar2 == -0x5ffffffd) {
      iVar6 = 1;
    }
  }
  iVar2 = local_18;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  if (((local_18 != 0) && (DAT_00425544 == 0)) || ((iVar6 != 0 && (DAT_00425534 == 0)))) {
    iVar6 = FUN_0041ae7b(this,(int *)0x0);
    if (iVar6 != 0) goto LAB_0041b28f;
    if (iVar2 != 0) {
      return 0;
    }
  }
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)this = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((int)this + 4) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((int)this + 100) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((int)this + 0x74) = uVar3;
LAB_0041b28f:
  if (DAT_00425484 != 0) {
    local_18 = *(undefined4 *)((int)this + 0x60);
    uVar3 = *(undefined4 *)((int)this + 0xc);
    uVar4 = *(undefined4 *)((int)this + 0x5c);
    local_1c = *(undefined4 *)((int)this + 100);
                    /* WARNING: Load size is inaccurate */
    local_24 = *this;
    local_14 = *(undefined4 *)((int)this + 4);
    local_28 = *(undefined4 *)((int)this + 8);
    local_2c = *(undefined4 *)((int)this + 0x58);
    piVar7 = FUN_0040ddd5((int *)(*(int *)((int)param_1 + 4) + -0x10));
    local_20 = piVar7 + 4;
    local_8 = 2;
    piVar5 = (int *)FUN_0041bec9(&local_3c,(int *)&local_20,&DAT_00401400);
    local_8._0_1_ = 3;
    FUN_0041bf27(&local_38,piVar5,(undefined4 *)((int)this + 0x44));
    local_8._0_1_ = 4;
    piVar5 = FUN_0041a2f8(param_1,&local_34);
    local_8 = CONCAT31(local_8._1_3_,5);
    puVar8 = (undefined4 *)FUN_0041bf27(&local_30,piVar5,(undefined4 *)((int)this + 0x44));
    wprintf(L"\n%s: Create: %I64x LastA: %I64x LastWr: %I64x Change: %I64x\n",*puVar8,local_2c,uVar4
            ,local_28,uVar3,local_24,local_14,local_18,local_1c);
    FUN_004044dc((undefined4 *)(local_30 + -0x10));
    FUN_004044dc((undefined4 *)(local_34 + -0x10));
    FUN_004044dc((undefined4 *)(local_38 + -0x10));
    FUN_004044dc((undefined4 *)(local_3c + -0x10));
    FUN_004044dc(piVar7);
  }
  return 1;
}



/* Function: FUN_0041b38d */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0041b38d(undefined4 *param_1)

{
  DWORD dwErrCode;
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  undefined8 local_4c;
  HANDLE local_44;
  LPCWSTR local_40;
  undefined4 local_3c;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x41b399;
  FUN_0041c889(param_1,(int *)&local_40);
  local_8 = 0;
  local_44 = CreateFileW(local_40,0x80,1,(LPSECURITY_ATTRIBUTES)0x0,3,0xa000000,(HANDLE)0x0);
  local_3c = 0;
  local_4c = 0;
  puVar2 = local_38;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (local_44 != (HANDLE)0xffffffff) {
    iVar1 = NtQueryInformationFile(local_44,&local_4c,&local_3c,0x28,4);
    if (iVar1 < 0) {
      dwErrCode = RtlNtStatusToDosError(iVar1);
      SetLastError(dwErrCode);
      if (DAT_00425484 != 0) {
        FUN_00415b95(0x23a8,param_1);
      }
    }
    else {
      param_1[0x16] = local_3c;
      param_1[0x17] = local_38[0];
      param_1[2] = local_38[1];
      param_1[3] = local_38[2];
      *param_1 = local_38[3];
      param_1[1] = local_28;
      param_1[0x18] = local_24;
      param_1[0x19] = local_20;
    }
    CloseHandle(local_44);
  }
  FUN_004044dc((undefined4 *)(local_40 + -8));
  FUN_00420a47(extraout_ECX,extraout_EDX);
  return;
}



/* Function: FUN_0041b470 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0041b470(void *this,void *param_1,undefined4 param_2,int param_3)

{
  FILETIME *pFVar1;
  int *piVar2;
  int *piVar3;
  DWORD DVar4;
  HANDLE hObject;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  DWORD *pDVar6;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  LPCWSTR local_4c;
  uint local_48;
  uint local_44;
  FILETIME *local_40;
  DWORD local_3c;
  DWORD local_38 [4];
  DWORD local_28;
  DWORD local_24;
  DWORD local_20;
  undefined8 local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x41b47c;
  local_40 = (FILETIME *)this;
  piVar2 = FUN_0041c84b(this,&local_54);
  local_8 = 0;
  piVar3 = FUN_0041a2f8(param_1,&local_50);
  local_8._0_1_ = 1;
  FUN_0041bf27(&local_4c,piVar3,piVar2);
  FUN_004044dc((undefined4 *)(local_50 + -0x10));
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004044dc((undefined4 *)(local_54 + -0x10));
  pFVar1 = local_40;
  local_3c = 0;
  pDVar6 = local_38;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pDVar6 = 0;
    pDVar6 = pDVar6 + 1;
  }
  local_48 = 0;
  local_44 = 0;
  local_60 = 0;
  if (DAT_00425544 != 0) {
    local_44 = (uint)(local_40[10].dwHighDateTime == 0xa000000c);
  }
  if (DAT_00425534 != 0) {
    local_48 = (uint)(local_40[10].dwHighDateTime == 0xa0000003);
  }
  local_40 = (FILETIME *)0x0;
  while( true ) {
    if (((local_44 != 0) || (local_48 != 0)) || (DVar4 = 0x2000080, DAT_00425408 != 0)) {
      DVar4 = 0x2200080;
    }
    hObject = CreateFileW(local_4c,0x100,0,(LPSECURITY_ATTRIBUTES)0x0,3,DVar4,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      local_38[1] = pFVar1[1].dwLowDateTime;
      local_3c = pFVar1[0xb].dwLowDateTime;
      local_38[0] = pFVar1[0xb].dwHighDateTime;
      local_38[3] = pFVar1->dwLowDateTime;
      local_24 = pFVar1[0xc].dwLowDateTime;
      local_38[2] = pFVar1[1].dwHighDateTime;
      local_28 = pFVar1->dwHighDateTime;
      local_20 = pFVar1[0xc].dwHighDateTime;
      local_1c = 0;
      local_60 = 0;
      local_58 = NtSetInformationFile(hObject,&local_60,&local_3c,0x28,4);
      CloseHandle(hObject);
      hObject = (HANDLE)0xffffffff;
      if (-1 < local_58) goto LAB_0041b618;
      DVar4 = RtlNtStatusToDosError(local_58);
      SetLastError(DVar4);
    }
    DVar4 = GetLastError();
    if ((DVar4 == 0x7b) || (DVar4 == 2)) break;
    SetLastError(DVar4);
    local_40 = (FILETIME *)((int)local_40 + 1);
    iVar5 = FUN_0040f8ce(pFVar1,0x2397,param_3,(int)local_40);
    if (iVar5 == 0) {
LAB_0041b618:
      if (hObject != (HANDLE)0xffffffff) {
        CloseHandle(hObject);
      }
      FUN_004044dc((undefined4 *)(local_4c + -8));
      FUN_00420a47(extraout_ECX,extraout_EDX);
      return;
    }
  }
  FUN_0040f8ce(pFVar1,0x2397,0,(int)local_40 + 1);
  goto LAB_0041b618;
}



/* Function: FUN_0041b63f */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0041b63f(void *this,void *param_1)

{
  int *piVar1;
  int *piVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 local_80;
  void *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  HANDLE local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  LPCWSTR local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x41b64b;
  local_6c = DAT_00424188;
  local_60 = DAT_00425520;
  local_5c = DAT_00425500;
  local_68 = DAT_004241a0;
  local_54 = DAT_00424194;
  local_78 = param_1;
  piVar1 = FUN_0041c84b(this,&local_74);
  local_8 = 0;
  piVar2 = FUN_0041a2f8(param_1,&local_70);
  local_8._0_1_ = 1;
  FUN_0041bf27(&local_50,piVar2,piVar1);
  FUN_004044dc((undefined4 *)(local_70 + -0x10));
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004044dc((undefined4 *)(local_74 + -0x10));
  local_80 = 0;
  local_4c = 0;
  local_58 = 0;
  local_48 = 0;
  local_44 = 0;
  local_64 = 0;
  if (DAT_00425544 != 0) {
    local_58 = (uint)(*(int *)((int)this + 0x54) == -0x5ffffff4);
  }
  if (DAT_00425534 != 0) {
    local_64 = (uint)(*(int *)((int)this + 0x54) == -0x5ffffffd);
  }
  puVar6 = local_40;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (local_68 != 0) {
    local_40[0] = *(undefined4 *)((int)this + 0x58);
    local_40[1] = *(undefined4 *)((int)this + 0x5c);
    local_40[2] = *(undefined4 *)((int)this + 8);
    local_40[3] = *(undefined4 *)((int)this + 0xc);
                    /* WARNING: Load size is inaccurate */
    local_30 = *this;
    local_2c = *(undefined4 *)((int)this + 4);
    local_28 = *(undefined4 *)((int)this + 0x60);
    local_24 = *(undefined4 *)((int)this + 100);
  }
  if (local_54 == 0) {
    uVar7 = 0;
  }
  else {
    local_20 = (*(uint *)((int)this + 0x50) | local_5c) & ~(uint)local_60 & 0x1a3127 | 0x80;
    local_48 = (local_5c & 0x4000) - ((uint)local_60 & 0x4000);
    local_4c = (uint)(0 < (int)local_48);
    local_48 = local_48 >> 0x1f;
    uVar7 = (local_5c & 0x800) - ((uint)local_60 & 0x800);
    local_44 = (uint)(0 < (int)uVar7);
    uVar7 = uVar7 >> 0x1f;
  }
  local_54 = 0;
  do {
    if (((local_58 != 0) || (local_64 != 0)) || (DVar3 = 0x2000080, DAT_00425408 != 0)) {
      DVar3 = 0x2200080;
    }
    local_60 = CreateFileW(local_50,0x100,0,(LPSECURITY_ATTRIBUTES)0x0,3,DVar3,(HANDLE)0x0);
    if (local_60 != (HANDLE)0xffffffff) {
      local_80 = 0;
      local_5c = NtSetInformationFile(local_60,&local_80,local_40,0x28,4);
      CloseHandle(local_60);
      if ((int)local_5c < 0) {
        DVar3 = RtlNtStatusToDosError(local_5c);
        SetLastError(DVar3);
      }
      else if ((local_4c == 0) && (local_48 == 0)) {
        if ((((local_44 == 0) && (uVar7 == 0)) ||
            (BVar4 = FUN_0041cb33(&local_50,local_44), BVar4 != 0)) ||
           (DVar3 = GetLastError(), DVar3 == 1)) break;
      }
      else {
        iVar5 = FUN_0041cb15(&local_50,local_4c);
        if ((iVar5 != 0) &&
           (((local_4c != 0 || ((local_44 == 0 && (uVar7 == 0)))) ||
            (BVar4 = FUN_0041cb33(&local_50,local_44), BVar4 != 0)))) break;
      }
    }
    DVar3 = GetLastError();
    if ((DVar3 == 0x7b) || (DVar3 == 2)) {
      FUN_0040f8ce((FILETIME *)this,0x239c,0,local_54 + 1);
      goto LAB_0041b907;
    }
    local_54 = local_54 + 1;
    iVar5 = FUN_0040f8ce((FILETIME *)this,0x239c,local_6c,local_54);
  } while (iVar5 != 0);
  if ((local_68 != 0) && (((local_4c != 0 || (local_48 != 0)) || ((local_44 != 0 || (uVar7 != 0)))))
     ) {
    FUN_0041b470(this,local_78,local_48,local_6c);
  }
LAB_0041b907:
  FUN_004044dc((undefined4 *)(local_50 + -8));
  FUN_00420a47(extraout_ECX,extraout_EDX);
  return;
}



/* Function: FUN_0041b922 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_0041b922(undefined4 *param_1,int param_2,int param_3,int param_4,UINT param_5,int param_6)

{
  short *psVar1;
  short sVar2;
  code *pcVar3;
  ushort uVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  DWORD DVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  undefined4 uVar13;
  void *pvVar14;
  undefined8 **ppuVar15;
  undefined8 *local_90 [6];
  undefined2 local_78;
  undefined4 local_76;
  undefined4 uStack_72;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  int *local_2c;
  void *local_28;
  void *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  char local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x41b931;
  ppuVar15 = local_90;
  for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
    *ppuVar15 = (undefined8 *)0x0;
    ppuVar15 = ppuVar15 + 1;
  }
  local_78 = 0;
  local_38 = 0;
  local_76 = 0;
  uVar13 = 1;
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  uStack_72 = 0;
  local_68 = 0;
  local_34 = CONCAT31(local_34._1_3_,1);
  uStack_6e = 0;
  uStack_6a = 0;
  pcVar3 = *(code **)(DAT_00424018 + 0xc);
  (*(code *)PTR_guard_check_icall_004263b4)();
  local_1c = (*pcVar3)();
  local_1c = local_1c + 0x10;
  local_8 = 1;
  local_18 = 0;
  piVar6 = FUN_0041a2f8(local_24,&local_30);
  local_8._0_1_ = 2;
  FUN_0040d4df(&local_1c,piVar6);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004044dc((undefined4 *)(local_30 + -0x10));
  iVar10 = local_1c;
  local_30 = 0;
  if ((param_2 == 0) && (param_3 == 0)) goto LAB_0041bc1b;
  RtlInitUnicodeString(&local_68,local_1c);
  RtlInitUnicodeString(&local_58,*param_1);
  cVar5 = RtlDosPathNameToRelativeNtPathName_U(iVar10,&local_50,&local_38,&local_78);
  if (cVar5 == '\0') {
    SetLastError(3);
    uVar13 = 0;
    goto LAB_0041bc1b;
  }
  uVar4 = (ushort)local_50;
  local_48 = local_50._4_4_;
  if ((((uVar4 & 0xfffe) < 4) || (*(short *)(local_50._4_4_ + -4 + (uint)(uVar4 >> 1) * 2) == 0x3a))
     || (*(short *)(local_50._4_4_ + -2 + (uint)(uVar4 >> 1) * 2) != 0x5c)) {
    local_11 = '\0';
  }
  else {
    local_11 = '\x01';
    local_50 = CONCAT62(local_50._2_6_,uVar4 - 2);
  }
  local_90[2] = &local_50;
  local_90[0] = (undefined8 *)0x18;
  local_90[1] = (undefined8 *)0x0;
  local_90[3] = (undefined8 *)0x40;
  local_90[4] = (undefined8 *)0x0;
  local_90[5] = (undefined8 *)0x0;
  iVar7 = NtOpenFile(&local_18,0x100001,local_90,&local_60,7,0x4021);
  if (((iVar7 == -0x3ffffff3) || (iVar7 == -0x3ffffefd)) && (local_11 != '\0')) {
    local_50._0_2_ = (short)local_50 + 2;
    iVar7 = NtOpenFile(&local_18,0x100001,local_90,&local_60,7,0x4021);
    local_50 = CONCAT62(local_50._2_6_,(short)local_50 + -2);
  }
  if (iVar7 < 0) {
    DVar8 = RtlNtStatusToDosError(iVar7);
LAB_0041bae6:
    SetLastError(DVar8);
    uVar13 = 0;
  }
  else {
    pvVar9 = malloc(0x10000);
    local_28 = pvVar9;
    if (pvVar9 == (void *)0x0) {
      DVar8 = 8;
      goto LAB_0041bae6;
    }
    if ((ushort)local_58 == 6) {
      iVar7 = RtlCompareMemory(local_58._4_4_,&DAT_00401ce8,6);
      if (iVar7 != 6) goto LAB_0041bb34;
      local_58 = CONCAT62(local_58._2_6_,2);
    }
    else {
LAB_0041bb34:
      uVar11 = 0;
      if ((local_58 & 0xfffe) != 0) {
        psVar12 = (short *)(local_58._4_4_ + -2);
        do {
          if (((uVar11 != 0) && (psVar12[1] == 0x2e)) && (*psVar12 == 0x2a)) {
            *psVar12 = 0x3c;
          }
          psVar1 = psVar12 + 1;
          if (*psVar1 == 0x3f) {
            *psVar1 = 0x3e;
LAB_0041bb7c:
            if ((uVar11 != 0) && (*psVar12 == 0x2e)) {
              *psVar12 = 0x22;
            }
          }
          else if (*psVar1 == 0x2a) goto LAB_0041bb7c;
          uVar11 = uVar11 + 1;
          psVar12 = psVar1;
          iVar10 = local_1c;
          pvVar9 = local_28;
        } while (uVar11 < (ushort)local_58 >> 1);
      }
    }
    uVar13 = 1;
    local_44 = (param_4 != 0) + 2;
    uVar11 = 1;
LAB_0041bd80:
    do {
      iVar7 = NtQueryDirectoryFile
                        (local_18,0,0,0,&local_60,pvVar9,0x10000,local_44,0,&local_58,uVar11);
      if ((iVar7 == -0x7ffffffa) || (iVar7 == -0x3ffffff1)) goto LAB_0041bbf6;
      if (-1 < iVar7) {
        local_34 = local_34 & 0xffffff00;
        iVar7 = 1;
        local_20 = 0;
        local_40 = local_60._4_4_;
        pvVar14 = local_28;
        uVar11 = local_34;
        if (local_60._4_4_ != 0) {
          do {
            iVar10 = local_1c;
            pvVar9 = local_28;
            uVar11 = local_34;
            if (iVar7 == 0) break;
            piVar6 = (int *)(local_20 + (int)pvVar14);
            iVar10 = 0x44;
            if (param_4 != 0) {
              iVar10 = 0x5e;
            }
            local_3c = *piVar6;
            psVar12 = (short *)(iVar10 + (int)piVar6);
            local_2c = piVar6;
            if ((*(byte *)(piVar6 + 0xe) & 0x10) == 0) {
              if (param_2 == 0) goto LAB_0041bd5c;
              local_2c = (int *)FUN_0041fd5e(0x88);
              if (local_2c == (undefined4 *)0x0) {
                local_2c = (int *)0x0;
              }
              else {
                local_2c = FUN_0041c06c(local_2c);
              }
              pvVar9 = local_24;
              FUN_0041b11c(local_2c,local_24,(int)piVar6,param_4);
              pvVar9 = (void *)((int)pvVar9 + 0x18);
LAB_0041bd50:
              FUN_00419dd8(pvVar9,local_2c);
            }
            else {
              uVar11 = piVar6[0xf];
              if ((1 < uVar11) &&
                 (pvVar14 = local_28, *(short *)((int)psVar12 + ((uVar11 & 0xfffffffe) - 2)) == 0))
              {
                uVar11 = uVar11 - 2;
                piVar6[0xf] = uVar11;
              }
              if ((param_3 != 0) && (uVar11 != 0)) {
                if (uVar11 >> 1 == 1) {
                  sVar2 = *psVar12;
LAB_0041bce2:
                  if (sVar2 == 0x2e) goto LAB_0041bd5c;
                }
                else if ((uVar11 >> 1 == 2) && (*psVar12 == 0x2e)) {
                  sVar2 = psVar12[1];
                  goto LAB_0041bce2;
                }
                local_2c = (int *)FUN_0041fd5e(0x88);
                if (local_2c == (undefined4 *)0x0) {
                  local_2c = (int *)0x0;
                }
                else {
                  local_2c = FUN_0041c06c(local_2c);
                }
                pvVar9 = local_24;
                FUN_0041b11c(local_2c,local_24,(int)piVar6,param_4);
                pvVar9 = (void *)((int)pvVar9 + 0x30);
                goto LAB_0041bd50;
              }
            }
LAB_0041bd5c:
            local_20 = local_20 + local_3c;
            iVar7 = local_3c;
            iVar10 = local_1c;
            pvVar9 = local_28;
            uVar11 = local_34;
          } while (local_20 < local_40);
        }
        goto LAB_0041bd80;
      }
      DVar8 = RtlNtStatusToDosError(iVar7);
      SetLastError(DVar8);
      local_30 = local_30 + 1;
      iVar7 = FUN_0040f891(local_24,param_5,param_6,local_30);
      uVar11 = local_34;
    } while (iVar7 != 0);
    uVar13 = 0;
LAB_0041bbf6:
    free(pvVar9);
  }
  if (local_48 != 0) {
    RtlFreeHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,local_48);
    iVar10 = local_1c;
  }
LAB_0041bc1b:
  if (local_18 != 0) {
    NtClose(local_18);
    local_18 = 0;
  }
  FUN_004044dc((undefined4 *)(iVar10 + -0x10));
  return uVar13;
}



/* Function: FUN_0041bdac */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0041bdac(void)

{
  uint uVar1;
  void *this;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined4 uVar4;
  uint local_124 [34];
  undefined4 local_9c [24];
  int local_3c;
  int local_38;
  void *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  this = DAT_00424fc8;
  uStack_4 = 0x114;
  local_8 = 0x41bdbb;
  local_14 = DAT_0042477c;
  FUN_0041c06c(local_9c);
  local_8 = 0;
  FUN_0041c06c(local_124);
  uVar4 = 1;
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar2 = FUN_0041b0d4(local_9c,this);
  if ((CONCAT31(extraout_var,bVar2) == 0) ||
     (bVar2 = FUN_0041b0d4(local_124,local_14), uVar1 = DAT_004241a4,
     CONCAT31(extraout_var_00,bVar2) == 0)) {
    uVar4 = 0;
  }
  else {
    *(uint *)((int)this + 0x5c) = (uint)(local_3c != 0 || local_38 != 0);
    iVar3 = FUN_0041c9e1(local_9c,local_124,uVar1);
    FUN_0041a744(this,iVar3);
  }
  FUN_0041c106((int)local_124);
  FUN_0041c106((int)local_9c);
  return uVar4;
}



/* Function: FUN_0041be64 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void * __fastcall FUN_0041be64(void *param_1,short *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0040d9c3(param_3);
  FUN_0040da58(param_1,piVar1);
  iVar2 = FUN_0040da36(param_2);
  FUN_0041bfe0(param_1,param_2,iVar2,(void *)*param_3,*(int *)(*param_3 + -0xc));
  return param_1;
}



/* Function: FUN_0041bec9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void * __fastcall FUN_0041bec9(void *param_1,int *param_2,short *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0040d9c3(param_2);
  FUN_0040da58(param_1,piVar1);
  iVar2 = FUN_0040da36(param_3);
  FUN_0041bfe0(param_1,(void *)*param_2,*(int *)(*param_2 + -0xc),param_3,iVar2);
  return param_1;
}



/* Function: FUN_0041bf27 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void * __fastcall FUN_0041bf27(void *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0040d9c3(param_2);
  FUN_0040da58(param_1,piVar1);
  FUN_0041bfe0(param_1,(void *)*param_2,*(int *)(*param_2 + -0xc),(void *)*param_3,
               *(int *)((int)*param_3 + -0xc));
  return param_1;
}



/* Function: FUN_0041bf82 */

int __fastcall FUN_0041bf82(int *param_1)

{
  wchar_t *pwVar1;
  
  if ((-1 < *(int *)((wchar_t *)*param_1 + -6)) &&
     (pwVar1 = wcsstr((wchar_t *)*param_1,L"\\"), pwVar1 != (wchar_t *)0x0)) {
    return (int)pwVar1 - *param_1 >> 1;
  }
  return -1;
}



/* Function: FUN_0041bfb4 */

undefined2 __thiscall FUN_0041bfb4(void *this,int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((-1 < param_1) && (param_1 <= *(int *)(*this + -0xc))) {
    return *(undefined2 *)(*this + param_1 * 2);
  }
  FUN_00404417(0x80070057);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_0041bfe0 */

void __fastcall FUN_0041bfe0(void *param_1,void *param_2,int param_3,void *param_4,int param_5)

{
  rsize_t _DstSize;
  void *_Dst;
  
  _Dst = (void *)FUN_0040d597(param_1,param_5 + param_3);
  _DstSize = param_3 * 2;
  memcpy_s(_Dst,_DstSize,param_2,_DstSize);
  memcpy_s((void *)(_DstSize + (int)_Dst),param_5 * 2,param_4,param_5 * 2);
  FUN_0040da03(param_1,param_5 + param_3);
  return;
}



/* Function: FUN_0041c03c */

void __fastcall FUN_0041c03c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar1 != param_1) {
    puVar1 = puVar1 + -4;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0041c106((int)puVar1);
      free(puVar1);
    }
    puVar1 = (undefined4 *)*param_1;
  }
  return;
}



/* Function: FUN_0041c06c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0041c06c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 4;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  FUN_0040da58(param_1 + 0x11,&DAT_00424018);
  param_1[0x10] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0040e201(param_1 + 0x11);
  param_1[0x14] = 0;
  _DAT_004256a8 = _DAT_004256a8 + 1;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_1;
}



/* Function: FUN_0041c106 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041c106(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00422065;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (DAT_00425590 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
  }
  piVar1 = (int *)(param_1 + 0x10);
  *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(param_1 + 0x14);
  **(int **)(param_1 + 0x14) = *piVar1;
  bVar4 = DAT_00425590 != 0;
  *piVar1 = (int)piVar1;
  *(int **)(param_1 + 0x14) = piVar1;
  if (bVar4) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004251e8);
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    LOCK();
    piVar2 = (int *)(*(int *)(param_1 + 0x28) + 0x4c);
    iVar3 = *piVar2 + -1;
    *piVar2 = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      FUN_00412380(*(void **)(param_1 + 0x28),*(int **)(param_1 + 0x2c));
    }
  }
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    FUN_0040474c(*(int **)(param_1 + 0x40));
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    FUN_0040474c(*(int **)(param_1 + 0x2c));
  }
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    FUN_0040474c(*(int **)(param_1 + 0x28));
  }
  *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(param_1 + 0x14);
  **(int **)(param_1 + 0x14) = *piVar1;
  *piVar1 = (int)piVar1;
  *(int **)(param_1 + 0x14) = piVar1;
  FUN_0040e201((int *)(param_1 + 0x44));
  _DAT_004256a8 = _DAT_004256a8 + -1;
  if ((_DAT_004256a8 == 0) && (DAT_004256ac != (HGLOBAL)0x0)) {
    GlobalFree(DAT_004256ac);
    DAT_004256ac = (HGLOBAL)0x0;
  }
  FUN_004044dc((undefined4 *)(*(int *)(param_1 + 0x44) + -0x10));
  ExceptionList = local_10;
  return;
}



/* Function: Catch_All@0041c21b */

undefined * Catch_All_0041c21b(void)

{
  DWORD dwErrCode;
  
  dwErrCode = GetLastError();
  if (DAT_00425484 != 0) {
    wprintf(L"\nException in CZEnt destructor error:%d\n",dwErrCode);
  }
  SetLastError(dwErrCode);
  return &DAT_0041c247;
}



/* Function: FUN_0041c252 */

void __thiscall FUN_0041c252(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  *(int *)((int)this + 0x28) = param_1;
  LOCK();
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  UNLOCK();
  *(int *)((int)this + 0x2c) = param_2;
  LOCK();
  *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  UNLOCK();
  *(undefined4 *)((int)this + 0x3c) = 1;
  piVar1 = (int *)(*(int *)((int)this + 0x28) + 0x4c);
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}



/* Function: FUN_0041c285 */

void __fastcall FUN_0041c285(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x28) + 0x4c);
    iVar2 = *piVar1 + -1;
    *piVar1 = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      FUN_00412380(*(void **)(param_1 + 0x28),*(int **)(param_1 + 0x2c));
      return;
    }
  }
  return;
}



/* Function: FUN_0041c2b5 */

uint __thiscall FUN_0041c2b5(void *this,LPCWSTR param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    DVar1 = GetFileAttributesW(param_1);
    uVar3 = 0;
    if (DVar1 != 0xffffffff) {
      uVar3 = DVar1;
    }
    uVar2 = uVar3 & 0x3127;
    if ((uVar3 & 7) == 0) goto LAB_0041c2fd;
  }
  else {
    uVar3 = *(uint *)((int)this + 0x50);
    uVar2 = uVar3 & 0x3127;
  }
  SetFileAttributesW(param_1,uVar3 & 0x3120);
LAB_0041c2fd:
  FUN_004044dc((undefined4 *)(param_1 + -8));
  return uVar2;
}



/* Function: FUN_0041c315 */

int FUN_0041c315(undefined4 *param_1,undefined4 *param_2)

{
  wchar_t *_Str2;
  int iVar1;
  
  iVar1 = CompareStringOrdinal
                    ((LPCWSTR)*param_1,*(int *)((LPCWSTR)*param_1 + -6),(LPCWSTR)*param_2,
                     *(int *)((LPCWSTR)*param_2 + -6),1);
  if (iVar1 == 0) {
    _Str2 = (wchar_t *)*param_2;
    if (*(int *)((wchar_t *)*param_1 + -6) == 0) {
      iVar1 = -(uint)(*(int *)(_Str2 + -6) != 0);
    }
    else if (*(int *)(_Str2 + -6) == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = _wcsicmp((wchar_t *)*param_1,_Str2);
    }
  }
  else {
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}



/* Function: FUN_0041c373 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __thiscall FUN_0041c373(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x41c37f;
  FUN_0041c959(this,local_14);
  local_8 = 0;
  if ((*(byte *)((int)this + 0x50) & 0x10) == 0) {
    iVar2 = FUN_0041c315(local_14,param_1);
  }
  else {
    piVar1 = FUN_0040d39c(local_14,&local_18,*(int *)(local_14[0] + -0xc) + -1);
    iVar2 = FUN_0041c315(piVar1,param_1);
    FUN_004044dc((undefined4 *)(local_18 + -0x10));
  }
  FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
  return iVar2;
}



/* Function: FUN_0041c3e9 */

undefined8 __thiscall FUN_0041c3e9(void *this,uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this - *param_1;
    iVar2 = (*(int *)((int)this + 4) - param_1[1]) - (uint)(*this < *param_1);
  }
  else if (param_2 == 1) {
    iVar1 = *(uint *)((int)this + 0x60) - param_1[0x18];
    iVar2 = (*(int *)((int)this + 100) - param_1[0x19]) -
            (uint)(*(uint *)((int)this + 0x60) < param_1[0x18]);
  }
  else if (param_2 == 2) {
    iVar1 = *(uint *)((int)this + 8) - param_1[2];
    iVar2 = (*(int *)((int)this + 0xc) - param_1[3]) - (uint)(*(uint *)((int)this + 8) < param_1[2])
    ;
  }
  else {
    iVar1 = *(uint *)((int)this + 0x58) - param_1[0x16];
    iVar2 = (*(int *)((int)this + 0x5c) - param_1[0x17]) -
            (uint)(*(uint *)((int)this + 0x58) < param_1[0x16]);
  }
  return CONCAT44(iVar2,iVar1);
}



/* Function: FUN_0041c447 */

undefined4 FUN_0041c447(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *param_1;
  uVar2 = param_1[1];
  if (uVar3 != 0 || uVar2 != 0) {
    uVar1 = 1;
    if (((int)uVar2 < 1) && ((int)uVar2 < 0)) {
      bVar4 = uVar3 != 0;
      uVar3 = -uVar3;
      *param_1 = uVar3;
      uVar2 = -(uVar2 + bVar4);
      uVar1 = 0xffffffff;
      param_1[1] = uVar2;
    }
    if (param_2 == 0) {
      return uVar1;
    }
    if (-1 < (int)uVar2) {
      if (0 < (int)uVar2) {
        return uVar1;
      }
      if (param_2 < uVar3) {
        return uVar1;
      }
    }
  }
  return 0;
}



/* Function: FUN_0041c495 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0041c495(void *this,uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint local_560;
  int local_55c;
  int local_554;
  undefined8 local_550;
  undefined8 local_548;
  undefined4 *local_540;
  uint *local_53c;
  uint local_538;
  uint local_534;
  undefined8 local_530;
  wchar_t local_528 [324];
  wchar_t local_2a0 [332];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x550;
  local_8 = 0x41c4a4;
  local_53c = param_1;
  local_540 = (undefined4 *)this;
  local_530 = FUN_0041c3e9(this,param_1,param_3);
  uVar4 = (undefined4)((ulonglong)local_530 >> 0x20);
  uVar3 = extraout_ECX;
  if ((local_530 != 0) &&
     (local_554 = FUN_0041c447((uint *)&local_530,param_2), uVar3 = extraout_ECX_00,
     uVar4 = extraout_EDX, local_554 != 0)) {
    uVar8 = (uint)local_530;
    if ((DAT_00425484 != 0) && ((*(byte *)((int)this + 0x50) & 0x10) == 0)) {
      uVar6 = __alldiv((uint)local_530,local_530._4_4_,10000000,0);
      local_548 = __allrem(uVar8,(uint)((ulonglong)local_530 >> 0x20),10000000,0);
      uVar8 = (uint)((ulonglong)uVar6 >> 0x20);
      uVar7 = __alldiv((uint)uVar6,uVar8,0x3c,0);
      uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
      local_534 = (uint)uVar7;
      local_550 = __allrem((uint)uVar6,uVar8,0x3c,0);
      uVar8 = local_534;
      uVar6 = __alldiv(local_534,uVar5,0x3c,0);
      local_538 = (uint)uVar6;
      __allrem(uVar8,uVar5,0x3c,0);
      FUN_0041c959(local_540,(int *)&local_534);
      local_8 = 0;
      FUN_0041defe(local_2a0,L"FindNextFile() Difference = %c %I64dh:%02I64dm:%02I64d.%07I64ds\t%s")
      ;
      FUN_00415737(local_2a0,1);
      local_8 = 0xffffffff;
      FUN_004044dc((undefined4 *)(local_534 - 0x10));
      uVar3 = extraout_ECX_01;
      uVar4 = extraout_EDX_00;
      this = local_540;
    }
    if (DAT_004254ec != '\0') {
      local_560 = (uint)local_530 + 0x9e3b9800;
      local_55c = (local_530._4_4_ - 8) - (uint)((uint)local_530 < 0x61c46800);
      if ((local_560 != 0 || local_55c != 0) &&
         (iVar2 = FUN_0041c447(&local_560,param_2), uVar3 = extraout_ECX_02, uVar4 = extraout_EDX_01
         , iVar2 != 0)) {
        uVar6 = FUN_0041b38d((undefined4 *)this);
        puVar1 = local_53c;
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uVar3 = extraout_ECX_03;
        if ((int)uVar6 != 0) {
          uVar6 = FUN_0041b38d(local_53c);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar3 = extraout_ECX_04;
          if ((int)uVar6 != 0) {
            local_530 = FUN_0041c3e9(this,puVar1,param_3);
            uVar4 = (undefined4)((ulonglong)local_530 >> 0x20);
            uVar3 = extraout_ECX_05;
            if ((local_530 != 0) &&
               (local_534 = FUN_0041c447((uint *)&local_530,param_2), uVar3 = extraout_ECX_06,
               uVar4 = extraout_EDX_02, local_534 != 0)) {
              uVar8 = (uint)local_530;
              if ((DAT_00425484 != 0) && ((*(byte *)((int)this + 0x50) & 0x10) == 0)) {
                uVar6 = __alldiv((uint)local_530,local_530._4_4_,10000000,0);
                uVar7 = __allrem(uVar8,(uint)((ulonglong)local_530 >> 0x20),10000000,0);
                local_550 = CONCAT44((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
                uVar8 = (uint)((ulonglong)uVar6 >> 0x20);
                uVar7 = __alldiv((uint)uVar6,uVar8,0x3c,0);
                uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
                local_538 = (uint)uVar7;
                uVar6 = __allrem((uint)uVar6,uVar8,0x3c,0);
                uVar8 = local_538;
                local_548 = CONCAT44((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
                uVar6 = __alldiv(local_538,uVar5,0x3c,0);
                local_538 = (uint)uVar6;
                __allrem(uVar8,uVar5,0x3c,0);
                FUN_0041c959(local_540,(int *)&local_53c);
                local_8 = 1;
                FUN_0041defe(local_528,
                             L" GetFileTime() Difference = %c %I64dh:%02I64dm:%02I64d.%07I64ds\t%s")
                ;
                FUN_00415737(local_528,1);
                FUN_004044dc(local_53c + -4);
                uVar3 = extraout_ECX_07;
                uVar4 = extraout_EDX_03;
              }
              local_560 = (uint)local_530 + 0x9e3b9800;
              local_55c = (local_530._4_4_ - 8) - (uint)((uint)local_530 < 0x61c46800);
              if (local_560 != 0 || local_55c != 0) {
                FUN_0041c447(&local_560,param_2);
                uVar3 = extraout_ECX_08;
                uVar4 = extraout_EDX_04;
              }
            }
          }
        }
      }
    }
  }
  FUN_00420a47(uVar3,uVar4);
  return;
}



/* Function: FUN_0041c84b */

int * __thiscall FUN_0041c84b(void *this,int *param_1)

{
  int *piVar1;
  
  if ((*(byte *)((int)this + 0x50) & 0x10) == 0) {
    piVar1 = FUN_0040ddd5((int *)(*(int *)((int)this + 0x44) + -0x10));
    *param_1 = (int)(piVar1 + 4);
  }
  else {
    FUN_0041bec9(param_1,(int *)((int)this + 0x44),&DAT_00401400);
  }
  return param_1;
}



/* Function: FUN_0041c889 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __thiscall FUN_0041c889(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x41c895;
  if (DAT_004254d4 == 0) {
    if (*(int *)((int)this + 0x40) == 0) {
      piVar1 = (int *)((int)this + 0x44);
      iVar3 = _wcsnicmp((wchar_t *)*piVar1,L"\\\\",2);
      if (iVar3 != 0) {
        FUN_0041be64(param_1,L"\\\\?\\",piVar1);
        return param_1;
      }
      piVar1 = FUN_0040d3ea(piVar1,&local_1c,*(int *)(*piVar1 + -0xc) + -2);
      local_8 = 2;
      FUN_0041be64(param_1,L"\\\\?\\UNC\\",piVar1);
      local_18 = local_1c;
    }
    else {
      piVar1 = FUN_0041c84b(this,&local_18);
      local_8 = 0;
      piVar2 = FUN_0041a2f8(*(void **)((int)this + 0x40),local_14);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0041bf27(param_1,piVar2,piVar1);
      FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
    }
    FUN_004044dc((undefined4 *)(local_18 + -0x10));
  }
  else {
    FUN_0041c959(this,param_1);
  }
  return param_1;
}



/* Function: FUN_0041c959 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __thiscall FUN_0041c959(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x41c965;
  if (*(int *)((int)this + 0x40) == 0) {
    FUN_0041c84b(this,param_1);
  }
  else {
    piVar1 = FUN_0041c84b(this,&local_18);
    local_8 = 0;
    piVar2 = FUN_0041a4f6(*(void **)((int)this + 0x40),local_14);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0041bf27(param_1,piVar2,piVar1);
    FUN_004044dc((undefined4 *)(local_14[0] + -0x10));
    FUN_004044dc((undefined4 *)(local_18 + -0x10));
  }
  return param_1;
}



/* Function: FUN_0041c9c8 */

undefined8 __fastcall FUN_0041c9c8(int param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 0x10) != 0) {
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x68);
}



/* Function: FUN_0041c9e1 */

void __thiscall FUN_0041c9e1(void *this,uint *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar3 = *(uint *)((int)this + 0x50) & 0x10;
    if (uVar3 == (param_1[0x14] & 0x10)) {
      if (((DAT_00425544 == 0) ||
          ((*(int *)((int)this + 0x54) == -0x5ffffff4) == (param_1[0x15] == 0xa000000c))) &&
         ((DAT_00425534 == 0 ||
          ((*(int *)((int)this + 0x54) == -0x5ffffffd) == (param_1[0x15] == 0xa0000003))))) {
        iVar2 = FUN_0041c495(this,param_1,param_2,0);
        if (iVar2 < 1) {
          if (iVar2 < 0) {
            uVar1 = 5;
          }
          else {
            iVar2 = *(int *)((int)this + 0x6c);
            if ((((((int)param_1[0x1b] < iVar2) || (iVar2 < (int)param_1[0x1b])) ||
                 (param_1[0x1a] < *(uint *)((int)this + 0x68))) || (iVar2 < (int)param_1[0x1b])) ||
               ((iVar2 <= (int)param_1[0x1b] && (*(uint *)((int)this + 0x68) < param_1[0x1a])))) {
              uVar1 = 6;
            }
            else if (((param_1[0x14] ^ *(uint *)((int)this + 0x50)) & 0x27) == 0) {
              if (((*(int *)((int)this + 0x60) == 0 && *(int *)((int)this + 100) == 0) ||
                  (param_1[0x18] == 0 && param_1[0x19] == 0)) ||
                 (iVar2 = FUN_0041c495(this,param_1,param_2,1), iVar2 == 0)) {
                uVar1 = 9;
              }
              else {
                uVar1 = 8;
              }
            }
            else {
              uVar1 = 7;
            }
          }
        }
        else {
          uVar1 = 4;
        }
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      if (uVar3 == 0) {
        uVar3 = *(uint *)((int)this + 0x74);
        param_1[0x1c] = *(uint *)((int)this + 0x70);
        param_1[0x1d] = uVar3;
        uVar3 = *(uint *)((int)this + 0x6c);
        param_1[0x1a] = *(uint *)((int)this + 0x68);
        param_1[0x1b] = uVar3;
      }
      else {
        uVar3 = param_1[0x1b];
        *(uint *)((int)this + 0x68) = param_1[0x1a];
        *(uint *)((int)this + 0x6c) = uVar3;
        uVar3 = param_1[0x1d];
        *(uint *)((int)this + 0x70) = param_1[0x1c];
        *(uint *)((int)this + 0x74) = uVar3;
      }
      uVar1 = 2;
    }
  }
  *(undefined4 *)((int)this + 0x48) = uVar1;
  return;
}



/* Function: FUN_0041cb15 */

void __fastcall FUN_0041cb15(undefined4 *param_1,int param_2)

{
  if (param_2 != 0) {
    EncryptFileW((LPCWSTR)*param_1);
    return;
  }
  DecryptFileW((LPCWSTR)*param_1,0);
  return;
}



/* Function: FUN_0041cb33 */

BOOL __fastcall FUN_0041cb33(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  HANDLE hDevice;
  BOOL BVar2;
  DWORD dwErrCode;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  hDevice = CreateFileW((LPCWSTR)*param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000080,
                        (HANDLE)0x0);
  puVar1 = local_8;
  BVar2 = 0;
  if (hDevice != (HANDLE)0xffffffff) {
    local_8 = (undefined4 *)((uint)local_8 & 0xffff0000);
    if (param_2 != 0) {
      local_8 = (undefined4 *)CONCAT22(SUB42(puVar1,2),1);
    }
    BVar2 = DeviceIoControl(hDevice,0x9c040,&local_8,2,(LPVOID)0x0,0,(LPDWORD)&local_c,
                            (LPOVERLAPPED)0x0);
    dwErrCode = GetLastError();
    CloseHandle(hDevice);
    SetLastError(dwErrCode);
  }
  return BVar2;
}



/* Function: FUN_0041cbac */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0041cbac(void *this,DWORD param_1,undefined4 param_2,int param_3)

{
  BOOL BVar1;
  DWORD dwErrCode;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x41cbb8;
  FUN_0041c889(this,(int *)local_14);
  uVar3 = 0;
  local_8 = 0;
  iVar4 = 0;
  while( true ) {
    BVar1 = SetFileAttributesW(local_14[0],param_1);
    if (BVar1 != 0) {
      uVar3 = 1;
      goto LAB_0041cc1e;
    }
    dwErrCode = GetLastError();
    if ((dwErrCode == 0x7b) || (dwErrCode == 2)) break;
    SetLastError(dwErrCode);
    iVar4 = iVar4 + 1;
    iVar2 = FUN_0040f8ce((FILETIME *)this,0x239c,param_3,iVar4);
    if (iVar2 == 0) {
LAB_0041cc1e:
      FUN_004044dc((undefined4 *)(local_14[0] + -8));
      return uVar3;
    }
  }
  FUN_0040f8ce((FILETIME *)this,0x239c,0,iVar4 + 1);
  goto LAB_0041cc1e;
}



/* Function: FUN_0041cc39 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0041cc39(void *this,void *param_1,UINT param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  HANDLE hObject;
  DWORD dwErrCode;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_1c;
  int local_18;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x41cc45;
  piVar1 = FUN_0041c84b(this,&local_1c);
  uVar5 = 0;
  local_8 = 0;
  piVar2 = FUN_0041a2f8(param_1,&local_18);
  local_8._0_1_ = 1;
  FUN_0041bf27(local_14,piVar2,piVar1);
  FUN_004044dc((undefined4 *)(local_18 + -0x10));
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004044dc((undefined4 *)(local_1c + -0x10));
  iVar4 = 0;
  do {
    hObject = CreateFileW(local_14[0],0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x80,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      CloseHandle(hObject);
LAB_0041ccf4:
      uVar5 = 1;
      break;
    }
    dwErrCode = GetLastError();
    if (dwErrCode == 0x50) goto LAB_0041ccf4;
    if ((dwErrCode == 0x7b) || (dwErrCode == 2)) {
      FUN_0040f8ce((FILETIME *)this,param_2,0,iVar4 + 1);
      break;
    }
    SetLastError(dwErrCode);
    iVar4 = iVar4 + 1;
    iVar3 = FUN_0040f8ce((FILETIME *)this,param_2,param_3,iVar4);
  } while (iVar3 != 0);
  FUN_004044dc((undefined4 *)(local_14[0] + -8));
  return uVar5;
}



/* Function: FUN_0041cd12 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0041d1fd) */

void __thiscall FUN_0041cd12(void *this,void *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  DWORD DVar6;
  BOOL BVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 local_10cc;
  undefined1 *local_10c8;
  code *local_10c0;
  FILETIME *local_10bc;
  undefined1 *local_10b8;
  uint local_10b4;
  undefined4 local_10b0;
  FILETIME *local_1088;
  uint local_1084;
  int local_1080;
  int local_107c;
  void *local_1078;
  uint local_1074;
  LPCWSTR local_1070;
  undefined1 *local_106c;
  uint local_1068;
  undefined1 *local_1064;
  LPCWSTR local_1060;
  int *local_105c;
  char local_1055;
  wchar_t local_1054 [1024];
  WCHAR local_854 [1024];
  wchar_t local_54 [32];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004221bc;
  local_10 = ExceptionList;
  local_14 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1078 = param_1;
  local_105c = param_2;
  local_1088 = (FILETIME *)this;
  piVar3 = FUN_0041c84b(this,(int *)&local_1068);
  local_8 = 0;
  piVar4 = FUN_0041a2f8(local_1078,(int *)&local_1074);
  local_8._0_1_ = 1;
  FUN_0041bf27(&local_1060,piVar4,piVar3);
  FUN_004044dc((undefined4 *)(local_1074 - 0x10));
  local_8._0_1_ = 4;
  FUN_004044dc((undefined4 *)(local_1068 - 0x10));
  FUN_0041c889(this,(int *)&local_1070);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_1080 = 0;
  if (((*(uint *)((int)this + 0x50) & 0x400) == 0) ||
     (iVar5 = FUN_0041cc39(this,local_1078,local_105c[5],local_105c[6]), iVar5 != 0)) {
    iVar5 = local_105c[4];
    local_106c = &stack0xffffef1c;
    piVar3 = FUN_0040ddd5((int *)(local_1060 + -8));
    local_1074 = FUN_0041c2b5(this,(LPCWSTR)(piVar3 + 4),iVar5);
    do {
      puVar10 = (undefined1 *)0x0;
      local_1064 = (undefined1 *)0x0;
      if ((DAT_0042553c == 0) || ((((FILETIME *)((int)this + 0x50))->dwLowDateTime & 0x4000) == 0))
      {
        if ((local_105c[1] == 0) &&
           ((local_105c[2] != 0 && ((((FILETIME *)((int)this + 0x50))->dwLowDateTime & 0x4000) == 0)
            ))) {
LAB_0041d323:
          puVar9 = local_1064;
          if ((local_105c[2] != 0) &&
             ((((FILETIME *)((int)this + 0x50))->dwLowDateTime & 0x4000) == 0)) {
            uVar13 = FUN_0041c9c8((int)this);
            iVar5 = FUN_0041d3d8((int)local_105c,local_1070,local_1060,*local_105c,(uint)uVar13,
                                 (int)((ulonglong)uVar13 >> 0x20));
            if (iVar5 != 0) goto LAB_0041ce72;
            puVar9 = (undefined1 *)GetLastError();
            local_1064 = puVar9;
          }
          goto LAB_0041d36a;
        }
        puVar9 = puVar10;
        if ((DAT_0042558c == 0) && (puVar9 = (undefined1 *)0x0, DAT_004254c0 == 0)) {
          puVar9 = (undefined1 *)0x2000000;
        }
        puVar11 = (undefined1 *)((uint)puVar9 | 8);
        if (local_105c[3] == 0) {
          puVar11 = puVar9;
        }
        puVar9 = (undefined1 *)((uint)puVar11 | 2);
        if (local_105c[1] == 0) {
          puVar9 = puVar11;
        }
        if (DAT_004254e8 != 0) {
          puVar9 = (undefined1 *)((uint)puVar9 | 0x1000);
        }
        if (DAT_00425488 != 0) {
          puVar9 = (undefined1 *)((uint)puVar9 | 0x40000);
        }
        if (DAT_00425544 != 0) {
          puVar9 = (undefined1 *)((uint)puVar9 | 0x800);
        }
        if (DAT_0042548c != 0) {
          puVar9 = (undefined1 *)((uint)puVar9 | 0x10000000);
        }
        puVar11 = (undefined1 *)((uint)puVar9 | 0x8000);
        if (local_105c[7] == 0) {
          puVar11 = puVar9;
        }
        if (DAT_00425480 == 1) {
          puVar11 = (undefined1 *)((uint)puVar11 | 0x20000000);
        }
        else if (DAT_00425480 == 2) {
          puVar11 = (undefined1 *)((uint)puVar11 | 0x80000000);
        }
        local_106c = puVar10;
        if (DAT_0042542c != 0) {
          local_106c = (undefined1 *)0x2;
        }
        if (DAT_0042553c == 0) {
LAB_0041d098:
          if ((DAT_00425580 == 0) || (DAT_00424278 == '\0')) {
            local_107c = 0;
            puVar10 = puVar11;
          }
          else {
            uVar13 = FUN_0041c9c8((int)this);
            local_1084 = (uint)((ulonglong)uVar13 >> 0x20);
            local_1068 = (uint)uVar13;
            local_1055 = '\0';
            local_107c = 1;
            iVar5 = FUN_00412db1(extraout_ECX,local_1084);
            uVar1 = local_1068;
            uVar8 = local_1084;
            if (-1 < iVar5) {
              local_107c = 1;
              do {
                cVar2 = FUN_00413011(uVar1,uVar8,&local_1055);
                this = local_1088;
                if (cVar2 == '\0') break;
                local_54[0] = L'\0';
                FUN_0041e333(0,local_54,DAT_00424260,DAT_00424264);
                local_854[0] = L'\0';
                LoadStringW(DAT_00424da8,0xdf,local_854,0x100);
                FUN_00418994(local_1054,local_854);
                FUN_00415654(extraout_ECX_00,local_1054);
                fflush(DAT_00424dac);
                FUN_0040f7f4(1,0);
                iVar5 = FUN_00412db1(extraout_ECX_01,extraout_EDX_00);
                this = local_1088;
              } while (-1 < iVar5);
            }
            *(undefined1 *)&((FILETIME *)((int)this + 0x78))->dwLowDateTime = 1;
            puVar10 = (undefined1 *)((uint)puVar11 | 0x8000000);
            if (local_1055 != '\0') {
              *(undefined1 *)((int)&((FILETIME *)((int)this + 0x78))->dwLowDateTime + 1) = 1;
              puVar10 = (undefined1 *)((uint)puVar11 | 0xc000000);
            }
          }
          memset(&local_10cc,0,0x40);
          local_1068 = DAT_00425230;
LAB_0041d1e3:
          DAT_00425230 = local_1068;
          cVar2 = FUN_00415257();
          if ((cVar2 == '\0') ||
             (uVar14 = FUN_0041c9c8((int)this), uVar14 < CONCAT44(DAT_0042523c,DAT_00425238))) {
            if (local_106c != (undefined1 *)0x0) {
              local_10b8 = local_106c;
              goto LAB_0041d249;
            }
            local_10cc = 0x14;
            local_1055 = '\0';
          }
          else {
            local_10b4 = local_1068;
            if (local_1068 != 0) {
              if (local_1068 < 0x1000) {
                local_10b4 = 0x1000;
              }
              else if (0x40000000 < local_1068) {
                local_10b4 = 0x40000000;
              }
            }
            local_10b0 = DAT_00425234;
LAB_0041d249:
            local_10cc = 0x40;
            local_1055 = '\x01';
          }
          if (((*local_105c != 0) || (local_107c != 0)) || (0 < DAT_00425550)) {
            local_10c0 = FUN_0040f550;
            local_10bc = (FILETIME *)this;
          }
          local_10c8 = puVar10;
          uVar8 = CopyFile2(local_1070);
          if (uVar8 == 0x80070057) {
            if (local_1055 == '\0') goto LAB_0041d30c;
            DAT_00425234 = 0;
            local_1068 = 0;
            goto LAB_0041d1e3;
          }
          if (-1 < (int)uVar8) goto LAB_0041ce72;
          if ((uVar8 & 0x1fff0000) != 0x70000) goto LAB_0041d323;
          if ((uVar8 == 0x800704d3) &&
             ((char)((FILETIME *)((int)this + 0x80))->dwLowDateTime != '\0')) {
            uVar8 = ((FILETIME *)((int)this + 0x78))->dwHighDateTime;
          }
LAB_0041d30c:
          local_1064 = (undefined1 *)(uVar8 & 0xffff);
          goto LAB_0041d323;
        }
        SetFileAttributesW(local_1060,0x80);
        DeleteFileW(local_1060);
        iVar5 = FUN_0041cc39(this,local_1078,local_105c[5],-1);
        if (iVar5 == 0) {
          puVar9 = (undefined1 *)GetLastError();
          local_1064 = puVar9;
        }
        else {
          BVar7 = DecryptFileW(local_1060,0);
          if ((BVar7 == 0) || (DVar6 = GetFileAttributesW(local_1060), DVar6 == 0xffffffff)) {
            puVar9 = (undefined1 *)GetLastError();
            local_1064 = puVar9;
          }
          else {
            if ((DVar6 & 0x4000) == 0) goto LAB_0041d098;
            puVar9 = (undefined1 *)0x1771;
            local_1064 = (undefined1 *)0x1771;
            SetLastError(0x1771);
          }
          DeleteFileW(local_1060);
        }
        uVar8 = FUN_0041dc9a(&DAT_00425860);
        if ((char)uVar8 == '\0') break;
      }
      else {
        iVar5 = FUN_0041d999(this,local_1070,local_1060,*local_105c);
        puVar9 = puVar10;
        if (iVar5 != 0) {
LAB_0041ce72:
          puVar10 = (undefined1 *)0x1;
          puVar9 = local_1064;
          break;
        }
LAB_0041d36a:
        puVar10 = (undefined1 *)0x0;
        SetLastError((DWORD)puVar9);
        if (puVar9 == (undefined1 *)0x7b) {
          bVar12 = (((FILETIME *)((int)this + 0x50))->dwLowDateTime & 0x4000) == 0;
        }
        else {
          bVar12 = puVar9 == (undefined1 *)0x2;
        }
        if (bVar12) {
          FUN_0040f8ce((FILETIME *)this,local_105c[5],0,local_1080 + 1);
          puVar9 = local_1064;
          break;
        }
      }
      puVar10 = (undefined1 *)0x0;
      local_1080 = local_1080 + 1;
      iVar5 = FUN_0040f8ce((FILETIME *)this,local_105c[5],local_105c[6],local_1080);
      puVar9 = local_1064;
    } while (iVar5 != 0);
    local_1064 = puVar9;
    piVar3 = FUN_0040ddd5((int *)(local_1060 + -8));
    if ((local_1074 & 7) != 0) {
      DVar6 = GetLastError();
      SetFileAttributesW((LPCWSTR)(piVar3 + 4),local_1074);
      SetLastError(DVar6);
    }
    FUN_004044dc(piVar3);
    if ((puVar10 == (undefined1 *)0x0) && (local_1064 != (undefined1 *)0x0)) {
      SetLastError((DWORD)local_1064);
    }
  }
  FUN_004044dc((undefined4 *)(local_1070 + -8));
  FUN_004044dc((undefined4 *)(local_1060 + -8));
  ExceptionList = local_10;
  FUN_004200b0(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0041d3d8 */

void FUN_0041d3d8(int param_1,LPCWSTR param_2,LPCWSTR param_3,int param_4,uint param_5,int param_6)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  HANDLE hTemplateFile;
  DWORD DVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 uVar7;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  DWORD dwErrCode;
  HANDLE hFile;
  bool bVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  LPCWSTR pWVar11;
  undefined1 auStack_8bc [7];
  char cStack_8b5;
  int iStack_8b4;
  uint uStack_8b0;
  LPVOID local_8ac;
  LPVOID local_8a8;
  LPBYTE pBStack_8a4;
  undefined8 local_8a0;
  uint local_894;
  HANDLE pvStack_890;
  int local_88c;
  LPCWSTR local_888;
  DWORD local_884;
  DWORD local_880;
  int local_87c;
  int local_878;
  LPCWSTR local_874;
  int local_870;
  uint uStack_86c;
  uint uStack_868;
  int local_864;
  int local_860;
  int local_85c;
  uint uStack_858;
  DWORD local_854;
  wchar_t awStack_850 [32];
  WCHAR local_810 [512];
  wchar_t awStack_410 [514];
  uint local_c;
  
  local_c = DAT_00424140 ^ (uint)auStack_8bc;
  local_88c = param_1;
  local_888 = param_3;
  local_864 = param_4;
  hFile = (HANDLE)0xffffffff;
  local_874 = param_2;
  local_884 = 0;
  local_880 = 0;
  local_8a8 = (LPVOID)0x0;
  local_8ac = (LPVOID)0x0;
  local_8a0 = 0;
  local_85c = 0;
  local_860 = 0;
  if ((DAT_00425580 == 0) || (DAT_00424278 == '\0')) {
    bVar8 = false;
    local_870 = 0;
  }
  else {
    bVar8 = true;
    local_870 = 1;
  }
  dwErrCode = 0;
  local_854 = 0;
  if ((DAT_0042523c < param_6) || ((DAT_0042523c <= param_6 && (DAT_00425238 <= param_5)))) {
    local_87c = 0;
    if (DAT_00425230 == 0) goto LAB_0041d482;
    uVar4 = 0x418;
    if (0x418 < DAT_00425230) {
      uVar4 = DAT_00425230;
    }
    local_894 = 0x20000;
    if (uVar4 < 0x20000) {
      local_894 = uVar4;
    }
    local_87c = 0;
  }
  else {
    local_87c = 1;
LAB_0041d482:
    local_894 = 0x10000;
  }
  local_810[0] = L'\0';
  if (bVar8) {
    LoadStringW(DAT_00424da8,0xdf,local_810,0x100);
  }
  pBStack_8a4 = (LPBYTE)malloc(local_894);
  if (pBStack_8a4 == (LPBYTE)0x0) {
    SetLastError(8);
    uVar7 = extraout_EDX;
    goto LAB_0041d97c;
  }
  hTemplateFile =
       CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0xa000000,(HANDLE)0x0);
  pvStack_890 = hTemplateFile;
  if (hTemplateFile == (HANDLE)0xffffffff) {
    dwErrCode = GetLastError();
    if (DAT_00425484 != 0) {
      pwVar10 = L"\n     ERROR: CreateFile(Src=%s) FAILED (%d)";
      pWVar11 = local_874;
LAB_0041d89b:
      wprintf(pwVar10,pWVar11,dwErrCode);
    }
  }
  else {
    hFile = CreateFileW(local_888,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0xa000080,hTemplateFile)
    ;
    if ((hFile == (HANDLE)0xffffffff) &&
       ((DVar5 = GetLastError(), DVar5 != 0x11a ||
        (hFile = CreateFileW(local_888,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0xa000080,
                             (HANDLE)0x0), hFile == (HANDLE)0xffffffff)))) {
      dwErrCode = GetLastError();
      if (DAT_00425484 != 0) {
        pwVar10 = L"\n     ERROR: CreateFile(Dst=%s) FAILED (%d)";
        pWVar11 = local_888;
        goto LAB_0041d89b;
      }
    }
    else {
      uStack_86c = (uint)((ulonglong)DAT_00425234 * 0x400 >> 0x20);
      uStack_868 = (uint)((ulonglong)DAT_00425234 * 0x400);
      local_874 = (LPCWSTR)GetTickCount();
      local_85c = 1;
      iStack_8b4 = local_8a0._4_4_;
      uStack_8b0 = (uint)(code *)local_8a0;
LAB_0041d5d8:
      if (local_870 != 0) {
        uVar9 = FUN_0041c9c8(local_878);
        uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_858 = (uint)uVar9;
        local_8a0 = CONCAT44(local_8a0._4_4_,uVar7);
        iVar6 = FUN_00412db1(extraout_ECX,uVar7);
        uVar4 = uStack_858;
        if (-1 < iVar6) {
          uVar2 = (uint)(code *)local_8a0;
          do {
            cVar3 = FUN_00413011(uVar4,uVar2,&cStack_8b5);
            if ((cVar3 == '\0') &&
               (hTemplateFile = pvStack_890, dwErrCode = local_854, cStack_8b5 == '\0')) break;
            awStack_850[0] = L'\0';
            FUN_0041e333(0,awStack_850,DAT_00424260,DAT_00424264);
            FUN_0041df2c(awStack_410,local_810);
            FUN_00415654(extraout_ECX_00,awStack_410);
            fflush(DAT_00424dac);
            FUN_0040f7f4(1,0);
            iVar6 = FUN_00412db1(extraout_ECX_01,extraout_EDX_00);
            hTemplateFile = pvStack_890;
            dwErrCode = local_854;
          } while (-1 < iVar6);
        }
      }
      local_8a0 = CONCAT44(local_8a0._4_4_,*(int *)(local_88c + 0x20));
      if (*(int *)(local_88c + 0x20) == 0) {
        iVar6 = BackupRead(hTemplateFile,pBStack_8a4,local_894,&local_884,0,0,&local_8a8);
      }
      else {
        (*(code *)PTR_guard_check_icall_004263b4)
                  (hTemplateFile,*(undefined4 *)(local_88c + 0x28),pBStack_8a4,local_894,&local_884,
                   &local_8a8);
        iVar6 = (*(code *)local_8a0)();
      }
      if (iVar6 == 0) {
        dwErrCode = GetLastError();
        if (DAT_00425484 == 0) goto LAB_0041d851;
        pwVar10 = L"\n     ERROR: backup read FAILED (%d)\n";
        goto LAB_0041d849;
      }
      if (local_884 == 0) {
        local_860 = 1;
        goto LAB_0041d851;
      }
      local_8a0 = CONCAT44(local_8a0._4_4_,*(int *)(local_88c + 0x24));
      if (*(int *)(local_88c + 0x24) == 0) {
        iVar6 = BackupWrite(hFile,pBStack_8a4,local_884,&local_880,0,0,&local_8ac);
      }
      else {
        (*(code *)PTR_guard_check_icall_004263b4)
                  (hFile,*(undefined4 *)(local_88c + 0x28),pBStack_8a4,local_884,&local_880,
                   &local_8ac);
        iVar6 = (*(code *)local_8a0)();
        hTemplateFile = pvStack_890;
      }
      if (iVar6 != 0) {
        iVar6 = 0;
        if (local_864 != 0) {
          iVar6 = local_878;
        }
        FUN_0040f443(iStack_8b4,hFile,iVar6,param_5,param_6,uStack_8b0,iStack_8b4);
        bVar8 = CARRY4(uStack_8b0,local_880);
        uStack_8b0 = uStack_8b0 + local_880;
        iStack_8b4 = iStack_8b4 + (uint)bVar8;
        if ((param_6 <= iStack_8b4) && ((param_6 < iStack_8b4 || (param_5 < uStack_8b0)))) {
          uStack_8b0 = param_5;
          iStack_8b4 = param_6;
        }
        if ((local_87c == 0) && (uStack_868 != 0 || uStack_86c != 0)) {
          DVar5 = GetTickCount();
          local_8a0 = CONCAT44(local_8a0._4_4_,DVar5 - (int)local_874);
          uVar9 = __aulldiv((uint)((ulonglong)uStack_8b0 * 1000),
                            iStack_8b4 * 1000 + (int)((ulonglong)uStack_8b0 * 1000 >> 0x20),
                            uStack_868,uStack_86c);
          if ((code *)local_8a0 < (uint)uVar9) {
            Sleep((uint)uVar9 - (int)(code *)local_8a0);
          }
        }
        goto LAB_0041d5d8;
      }
      dwErrCode = GetLastError();
      if (DAT_00425484 != 0) {
        pwVar10 = L"\n     ERROR: backup write FAILED (%d)\n";
LAB_0041d849:
        wprintf(pwVar10,dwErrCode);
      }
LAB_0041d851:
      iVar6 = 0;
      if (local_864 != 0) {
        iVar6 = local_878;
      }
      FUN_0040f443(iStack_8b4,hFile,iVar6,param_5,param_6,uStack_8b0,iStack_8b4);
    }
  }
  if (local_8ac != (LPVOID)0x0) {
    pcVar1 = *(code **)(local_88c + 0x24);
    if (pcVar1 == (code *)0x0) {
      BackupWrite(hFile,(LPBYTE)0x0,0,(LPDWORD)0x0,1,0,&local_8ac);
      hTemplateFile = pvStack_890;
    }
    else {
      (*(code *)PTR_guard_check_icall_004263b4)
                (hFile,*(uint *)(local_88c + 0x28) | 1,0,0,0,&local_8ac);
      (*pcVar1)();
      hTemplateFile = pvStack_890;
    }
  }
  if (hFile != (HANDLE)0xffffffff) {
    CloseHandle(hFile);
  }
  if (local_8a8 != (LPVOID)0x0) {
    pcVar1 = *(code **)(local_88c + 0x20);
    if (pcVar1 == (code *)0x0) {
      BackupRead(hTemplateFile,(LPBYTE)0x0,0,(LPDWORD)0x0,1,0,&local_8a8);
    }
    else {
      (*(code *)PTR_guard_check_icall_004263b4)
                (hTemplateFile,*(uint *)(local_88c + 0x28) | 1,0,0,0,&local_8a8);
      (*pcVar1)();
    }
  }
  if (hTemplateFile != (HANDLE)0xffffffff) {
    CloseHandle(hTemplateFile);
  }
  free(pBStack_8a4);
  uVar7 = extraout_EDX_01;
  if (local_860 == 0) {
    if (local_85c != 0) {
      DeleteFileW(local_888);
    }
    if (dwErrCode == 0) {
      dwErrCode = 0x6e;
    }
    SetLastError(dwErrCode);
    uVar7 = extraout_EDX_02;
  }
LAB_0041d97c:
  FUN_004200b0(local_c ^ (uint)auStack_8bc,uVar7);
  return;
}



/* Function: FUN_0041d999 */

void __thiscall FUN_0041d999(void *this,LPCWSTR param_1,LPCWSTR param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  void *this_00;
  undefined4 extraout_EDX;
  undefined1 auStack_fc [4];
  HANDLE local_f8;
  DWORD DStack_f4;
  PVOID local_98;
  HANDLE pvStack_84;
  DWORD DStack_80;
  DWORD DStack_50;
  uint local_c;
  
  local_c = DAT_00424140 ^ (uint)auStack_fc;
  FUN_0041e4c6(&local_f8);
  uVar1 = FUN_0041e5a9(this_00,param_3,*(int *)((int)this + 0x68),*(int *)((int)this + 0x6c));
  if (((char)uVar1 == '\0') ||
     (uVar2 = FUN_0041e872(&local_f8,param_1,param_2), (char)uVar2 == '\0')) goto LAB_0041db28;
  DVar3 = ReadEncryptedFileRaw(FUN_0041e9e0,&local_f8,local_98);
  if (DAT_00425484 != 0) {
    wprintf(L"\nEFS:  ReadEncryptedFileRaw() returned %d",DVar3);
  }
  if (DVar3 != 0) {
    DStack_80 = DVar3;
    SetEvent(pvStack_84);
  }
  DVar4 = WaitForSingleObject(local_f8,10000);
  if (DVar4 != 0) {
    DVar4 = GetLastError();
    wprintf(L"\nEFS: ERROR %d Waiting for Writer thread\n",DVar4);
    if (DVar3 == 0) {
      DVar3 = DVar4;
    }
  }
  if (DAT_00425484 != 0) {
    wprintf(L"\nEFS: Closing files");
  }
  FUN_0041e710((int *)&local_f8);
  if ((DAT_00425484 == 0) || (wprintf(L"\nEFS: Files Closed"), DAT_00425484 == 0)) {
    if (DVar3 == 0) goto LAB_0041dad1;
LAB_0041daf1:
    if (DAT_00425484 != 0) {
      wprintf(L"\nEFS: Deleting Target");
    }
    DeleteFileW(param_2);
    DStack_50 = DVar3;
  }
  else {
    if (DVar3 != 0) {
      wprintf(L"\n\nEFS: ERROR: LastError=%d readError=%d writeError=%d->exitCode=%d\n",DVar3,
              DStack_80,DStack_50,DStack_f4);
      goto LAB_0041daf1;
    }
LAB_0041dad1:
    DVar3 = DStack_f4;
    if (((DStack_f4 != 0) || (DVar3 = DStack_80, DStack_80 != 0)) ||
       (DVar3 = DStack_50, DStack_50 != 0)) goto LAB_0041daf1;
  }
  if ((DStack_50 == 0x1d) && (DStack_f4 != 0)) {
    DStack_50 = DStack_f4;
  }
  SetLastError(DStack_50);
LAB_0041db28:
  FUN_0041e806((int *)&local_f8);
  FUN_004200b0(local_c ^ (uint)auStack_fc,extraout_EDX);
  return;
}



/* Function: FUN_0041db50 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0041db50(void *this,void *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  DWORD dwErrCode;
  int iVar4;
  undefined4 uVar5;
  int local_20;
  int local_1c;
  int local_18;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x41db5c;
  piVar1 = FUN_0041c84b(this,&local_20);
  uVar5 = 0;
  local_8 = 0;
  piVar2 = FUN_0041a2f8(param_1,&local_1c);
  local_8._0_1_ = 1;
  FUN_0041bf27(&local_18,piVar2,piVar1);
  FUN_004044dc((undefined4 *)(local_1c + -0x10));
  local_8._0_1_ = 4;
  FUN_004044dc((undefined4 *)(local_20 + -0x10));
  FUN_0041c889(this,(int *)local_14);
  local_8 = CONCAT31(local_8._1_3_,5);
  iVar4 = 0;
  while( true ) {
    iVar3 = FUN_0041abf8(local_18,local_14[0],param_2);
    if (iVar3 != 0) {
      uVar5 = 1;
      goto LAB_0041dc09;
    }
    dwErrCode = GetLastError();
    if ((dwErrCode == 0x7b) || (dwErrCode == 2)) break;
    SetLastError(dwErrCode);
    iVar4 = iVar4 + 1;
    iVar3 = FUN_0040f8ce((FILETIME *)this,0x23a3,0,iVar4);
    if (iVar3 == 0) {
LAB_0041dc09:
      FUN_004044dc((undefined4 *)(local_14[0] + -8));
      FUN_004044dc((undefined4 *)(local_18 + -0x10));
      return uVar5;
    }
  }
  FUN_0040f8ce((FILETIME *)this,0x23a3,0,iVar4 + 1);
  goto LAB_0041dc09;
}



/* Function: FUN_0041dc2f */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0041dc2f(void *this,UINT param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x41dc3b;
  FUN_0041c889(this,(int *)local_14);
  uVar3 = 0;
  local_8 = 0;
  iVar4 = 0;
  do {
    SetFileAttributesW(local_14[0],0x80);
    BVar1 = DeleteFileW(local_14[0]);
    if (BVar1 != 0) {
      uVar3 = 1;
      break;
    }
    iVar4 = iVar4 + 1;
    iVar2 = FUN_0040f8ce((FILETIME *)this,param_1,-1,iVar4);
  } while (iVar2 != 0);
  FUN_004044dc((undefined4 *)(local_14[0] + -8));
  return uVar3;
}



/* Function: FUN_0041dc9a */

uint __fastcall FUN_0041dc9a(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  void *pvStack_c;
  
  local_10 = param_1;
  pvStack_c = param_1;
  FUN_0041dcd8(param_1,(uint *)&local_10);
  uVar1 = local_10._0_1_;
  local_10 = (void *)((uint)local_10 & 0xffffff01);
  uVar2 = FUN_0041dddd(param_1,(byte)local_10);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_0041dcd8 */

uint * __thiscall FUN_0041dcd8(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20 [2];
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c [2];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  param_1[1] = 0;
  *param_1 = uVar1;
  if (((byte)uVar1 & 6) == 6) {
    return param_1;
  }
  local_10 = FUN_004089a2();
  FUN_0041de40(local_20,local_c);
  uVar1 = *param_1;
  do {
    uVar4 = uVar1;
    *param_1 = uVar4;
    uVar3 = uVar4;
    if ((local_c[0] != 0) && ((uVar4 & 2) == 0)) {
      uVar3 = uVar4 & 0xfffff63e | local_20[0] & 0x9c1 | 2;
      *param_1 = uVar3;
    }
    if ((uVar4 & 4) == 0) {
      uVar3 = uVar3 & 0xfffffbff | local_20[0] & 0x400 | 4;
      *param_1 = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar1 = *this;
    if (uVar4 == uVar1) {
      *(uint *)this = uVar3;
      uVar1 = uVar4;
    }
    UNLOCK();
  } while (uVar1 != uVar4);
  if (((uVar4 & 4) != 0) || (DAT_00424200 == '\0')) goto LAB_0041ddb7;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00424204);
  if ((local_10 == 0) || (local_10 != DAT_00424210)) {
LAB_0041dda7:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406a52(&DAT_0042422c,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0041dda7;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00424204);
LAB_0041ddb7:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0041dddd */

void __thiscall FUN_0041dddd(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10 [3];
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0041dcd8(this,local_10);
    uVar2 = *puVar1;
  }
  local_14 = 2;
  local_18 = 0;
  FUN_0040f365((uint *)((int)this + 8),0x352833c,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_18,
               (uint)param_1,3);
  return;
}



/* Function: FUN_0041de40 */

uint * FUN_0041de40(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_0040f1cb(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = 0x40;
  if ((uVar3 & 0xffffff3f) != 0) {
    uVar4 = 0;
    if ((uVar3 & 0xffffff3f) == 2) {
      uVar4 = 0x40;
    }
  }
  *param_1 = (((uVar3 & 3) << 2 | uVar3 & 0x40) << 2 | uVar3 & 0x80) << 3 | uVar4;
  cVar2 = '\0';
  if (((uVar3 & 0x40) << 2 | uVar3 & 0x80) == 0x180) {
    bVar1 = true;
  }
  else {
    if (uVar4 == 0) goto LAB_0041dedc;
    bVar1 = false;
  }
  uVar4 = FUN_00413084(&DAT_00425598);
  cVar2 = (char)uVar4;
  if ((bVar1) && (cVar2 == '\0')) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_0041dedc:
  uVar4 = 1;
  if (((*param_1 & 0x40) == 0) || (cVar2 == '\0')) {
    uVar4 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar4;
  return param_1;
}



/* Function: FUN_0041defe */

void __cdecl FUN_0041defe(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004045ef(param_1,0x144,param_2,&stack0x0000000c);
  if (iVar1 < 0) {
    *param_1 = L'\0';
  }
  return;
}



/* Function: FUN_0041df2c */

void __cdecl FUN_0041df2c(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004045ef(param_1,0x200,param_2,&stack0x0000000c);
  if (iVar1 < 0) {
    *param_1 = L'\0';
  }
  return;
}



/* Function: FUN_0041df5a */

PHKEY __fastcall FUN_0041df5a(PHKEY param_1)

{
  LSTATUS LVar1;
  PHKEY local_8;
  
  *param_1 = (HKEY)0x0;
  local_8 = param_1;
  LVar1 = RegCreateKeyExW((HKEY)0x80000001,L"Software\\Microsoft\\ResKit\\Robocopy",0,(LPWSTR)0x0,0,
                          0xf003f,(LPSECURITY_ATTRIBUTES)0x0,param_1,(LPDWORD)&local_8);
  if (LVar1 != 0) {
    *param_1 = (HKEY)0x0;
  }
  return param_1;
}



/* Function: FUN_0041df9a */

void __fastcall FUN_0041df9a(int *param_1)

{
  if (*param_1 != 0) {
    RegCloseKey((HKEY)*param_1);
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0041dfb7 */

undefined4 __thiscall FUN_0041dfb7(void *this,LPCWSTR param_1,undefined4 *param_2)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  void *local_c;
  undefined4 *local_8;
  
  uVar2 = 0;
                    /* WARNING: Load size is inaccurate */
  local_c = this;
  local_8 = (undefined4 *)this;
  LVar1 = RegQueryValueExW(*this,param_1,(LPDWORD)0x0,(LPDWORD)&local_8,(LPBYTE)0x0,
                           (LPDWORD)&local_c);
  if ((LVar1 == 0) && (local_8 == param_2)) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: FUN_0041dff0 */

bool __thiscall FUN_0041dff0(void *this,LPCWSTR param_1)

{
  int iVar1;
  LSTATUS LVar2;
  
  iVar1 = FUN_0041dfb7(this,param_1,(undefined4 *)0x4);
  if (iVar1 == 0) {
                    /* WARNING: Load size is inaccurate */
    RegDeleteValueW(*this,param_1);
  }
                    /* WARNING: Load size is inaccurate */
  LVar2 = RegSetValueExW(*this,param_1,0,4,&stack0x00000008,4);
  return (bool)('\x01' - (LVar2 != 0));
}



/* Function: FUN_0041e036 */

bool __thiscall FUN_0041e036(void *this,LPCWSTR param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  LSTATUS LVar2;
  DWORD local_10;
  undefined4 local_c;
  DWORD local_8;
  
  iVar1 = FUN_0041dfb7(this,param_1,(undefined4 *)0x4);
  if (iVar1 == 0) {
                    /* WARNING: Load size is inaccurate */
    RegDeleteValueW(*this,param_1);
    FUN_0041dff0(this,param_1);
  }
  local_8 = 4;
                    /* WARNING: Load size is inaccurate */
  LVar2 = RegQueryValueExW(*this,param_1,(LPDWORD)0x0,&local_10,(LPBYTE)&local_c,&local_8);
  if (LVar2 == 0) {
    param_3 = local_c;
  }
  *param_2 = param_3;
  return LVar2 == 0;
}



/* Function: FUN_0041e0a9 */

bool __fastcall FUN_0041e0a9(undefined4 *param_1)

{
  int iVar1;
  LSTATUS LVar2;
  
  iVar1 = FUN_0041dfb7(param_1,L"JobDir",(undefined4 *)0x1);
  if (iVar1 == 0) {
    RegDeleteValueW((HKEY)*param_1,L"JobDir");
  }
  iVar1 = FUN_004089e4(&DAT_00401cf0);
  LVar2 = RegSetValueExW((HKEY)*param_1,L"JobDir",0,1,":",iVar1 * 2 + 2);
  return (bool)('\x01' - (LVar2 != 0));
}



/* Function: FUN_0041e0fd */

void __thiscall FUN_0041e0fd(void *this,undefined4 param_1,short *param_2)

{
  int iVar1;
  LSTATUS LVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  DWORD local_810;
  DWORD local_80c;
  BYTE local_808 [2048];
  uint local_8;
  
  local_8 = DAT_00424140 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0041dfb7(this,L"JobDir",(undefined4 *)0x1);
  if (iVar1 == 0) {
                    /* WARNING: Load size is inaccurate */
    RegDeleteValueW(*this,L"JobDir");
    FUN_0041e0a9((undefined4 *)this);
  }
  local_808[0] = '\0';
  local_808[1] = '\0';
  memset(local_808 + 2,0,0x7fe);
  local_810 = 0x104;
                    /* WARNING: Load size is inaccurate */
  LVar2 = RegQueryValueExW(*this,L"JobDir",(LPDWORD)0x0,&local_80c,local_808,&local_810);
  if ((LVar2 == 0) && (local_80c == 1)) {
    FUN_0040456e(param_2,0x104,(int)local_808);
    uVar3 = extraout_EDX;
  }
  else {
    FUN_0040456e(param_2,0x104,0x401cf0);
    uVar3 = extraout_EDX_00;
  }
  FUN_004200b0(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0041e1ea */

void __fastcall FUN_0041e1ea(int *param_1)

{
  FUN_0040e201(param_1);
  FUN_004044dc((undefined4 *)(*param_1 + -0x10));
  return;
}



/* Function: FUN_0041e20e */

void __thiscall FUN_0041e20e(void *this,int param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 local_c;
  
  uVar5 = *(uint *)(param_1 + 0x50) & 0x10;
  if (DAT_00425490 == 0) {
    if (uVar5 == 0) {
      uVar11 = FUN_0041c9c8(param_1);
      puVar2 = (uint *)((int)this + 8);
      uVar5 = *puVar2;
      *puVar2 = *puVar2 + (uint)uVar11;
      *(int *)((int)this + 0xc) =
           *(int *)((int)this + 0xc) + (int)((ulonglong)uVar11 >> 0x20) +
           (uint)CARRY4(uVar5,(uint)uVar11);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      if ((*(byte *)(extraout_ECX + 0x50) & 0x10) == 0) {
        iVar9 = *(int *)(extraout_ECX + 0x74);
        uVar5 = *(uint *)(extraout_ECX + 0x70);
      }
      else {
        uVar5 = 0xffffffff;
        iVar9 = -1;
      }
      puVar2 = (uint *)((int)this + 0x10);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + uVar5;
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + iVar9 + (uint)CARRY4(uVar4,uVar5);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *(int *)this = *this + 1;
    }
  }
  else if (uVar5 == 0) {
    lVar10 = FUN_0041c9c8(param_1);
    plVar1 = (longlong *)((int)this + 8);
    do {
      iVar9 = *(int *)plVar1;
      LOCK();
      lVar3 = *plVar1;
      if (*plVar1 == lVar3) {
        *plVar1 = lVar10 + *plVar1;
        iVar6 = iVar9;
        iVar8 = *(int *)((int)this + 0xc);
      }
      else {
        iVar6 = (int)lVar3;
        iVar8 = (int)((ulonglong)lVar3 >> 0x20);
      }
      UNLOCK();
    } while ((iVar6 != iVar9) || (iVar8 != *(int *)((int)this + 0xc)));
    LOCK();
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    UNLOCK();
    if ((*(byte *)(param_1 + 0x50) & 0x10) == 0) {
      uVar5 = *(uint *)(param_1 + 0x70);
      local_c = *(int *)(param_1 + 0x74);
    }
    else {
      uVar5 = 0xffffffff;
      local_c = -1;
    }
    puVar2 = (uint *)((int)this + 0x10);
    do {
      uVar4 = *puVar2;
      iVar9 = *(int *)((int)this + 0x14);
      LOCK();
      lVar10 = *(longlong *)puVar2;
      if (*(longlong *)puVar2 == lVar10) {
        *(longlong *)puVar2 = CONCAT44(local_c + iVar9 + (uint)CARRY4(uVar5,uVar4),uVar5 + uVar4);
        uVar7 = uVar4;
        iVar6 = iVar9;
      }
      else {
        uVar7 = (uint)lVar10;
        iVar6 = (int)((ulonglong)lVar10 >> 0x20);
      }
      UNLOCK();
    } while ((uVar7 != uVar4) || (iVar6 != iVar9));
  }
  else {
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(int *)this = *this + 1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_0041e30e */

void __thiscall FUN_0041e30e(void *this,wchar_t *param_1)

{
  FUN_0041e333(DAT_004254dc,param_1,*(uint *)((int)this + 8),*(uint *)((int)this + 0xc));
  return;
}



/* Function: FUN_0041e333 */

void __fastcall FUN_0041e333(int param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  wchar_t *pwVar2;
  
  if (param_1 == 0) {
    if (0xfffffff < (int)param_4) {
      lVar1 = __allmul(param_3,param_4 & 0xfffffff,1000,0);
      __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0,0x10000000);
      pwVar2 = L"%d.%03d e";
      goto LAB_0041e4b0;
    }
    if (0x3ffff < (int)param_4) {
      lVar1 = __allmul(param_3,param_4 & 0x3ffff,1000,0);
      __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0,0x40000);
      pwVar2 = L"%d.%03d p";
      goto LAB_0041e4b0;
    }
    if (0xff < (int)param_4) {
      lVar1 = __allmul(param_3,param_4 & 0xff,1000,0);
      __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0,0x100);
      pwVar2 = L"%d.%03d t";
      goto LAB_0041e4b0;
    }
    if (-1 < (int)param_4) {
      if ((0 < (int)param_4) || (0x3fffffff < param_3)) {
        lVar1 = (ulonglong)(param_3 & 0x3fffffff) * 1000;
        __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0x40000000,0);
        pwVar2 = L"%d.%03d g";
        goto LAB_0041e4b0;
      }
      if (-1 < (int)param_4) {
        if ((0 < (int)param_4) || (0xfffff < param_3)) {
          __alldiv((param_3 & 0xfffff) * 100,0,0x100000,0);
          pwVar2 = L"%d.%02d m";
          goto LAB_0041e4b0;
        }
        if ((-1 < (int)param_4) && ((0 < (int)param_4 || (0x3ff < param_3)))) {
          __alldiv((param_3 & 0x3ff) * 10,0,0x400,0);
          pwVar2 = L"%-d.%01d k";
          goto LAB_0041e4b0;
        }
      }
    }
  }
  pwVar2 = L"%-I64d";
LAB_0041e4b0:
  FUN_004189c2(param_2,pwVar2);
  return;
}



/* Function: FUN_0041e4c6 */

undefined4 * __fastcall FUN_0041e4c6(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[0x38] = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x29] = 0;
  param_1[0x1d] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  iVar2 = 4;
  puVar1 = param_1 + 0xe;
  do {
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1[4] = 0;
    puVar1[0x17] = 0;
    puVar1[0xb] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return param_1;
}



/* Function: FUN_0041e57e */

bool FUN_0041e57e(int *param_1)

{
  HANDLE pvVar1;
  bool bVar2;
  
  bVar2 = *param_1 == 0;
  if (bVar2) {
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *param_1 = (int)pvVar1;
    bVar2 = pvVar1 == (HANDLE)0x0;
  }
  return !bVar2;
}



/* Function: FUN_0041e5a9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __thiscall FUN_0041e5a9(void *this,int param_1,int param_2,int param_3)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  BOOL BVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  undefined4 *local_24;
  void *local_14;
  
  *(int *)((int)this + 0xd0) = param_2;
  *(int *)((int)this + 0xd4) = param_3;
  *(int *)((int)this + 0xe0) = param_1;
  iVar9 = 0;
  bVar2 = false;
  pcVar1 = (char *)((int)this + 0x24);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    piVar11 = (int *)((int)this + 0x28);
    local_24 = (undefined4 *)0x4;
    do {
      if (*piVar11 == 0) {
        pvVar5 = malloc(0x10000);
        *piVar11 = (int)pvVar5;
        if (pvVar5 == (void *)0x0) {
          bVar2 = true;
        }
      }
      piVar11 = piVar11 + 1;
      local_24 = (undefined4 *)((int)local_24 + -1);
    } while (local_24 != (undefined4 *)0x0);
  }
  pcVar7 = pcVar1;
  pcVar10 = pcVar1;
  if (*pcVar1 != '\0') {
    iVar12 = 0;
    local_24 = (undefined4 *)((int)this + 0x94);
    do {
      bVar3 = FUN_0041e57e((int *)((int)this + (iVar12 + 0x19) * 4));
      bVar4 = FUN_0041e57e((int *)((int)this + (iVar12 + 0x25) * 4));
      BVar6 = SetEvent((HANDLE)*local_24);
      iVar9 = iVar9 + (uint)bVar3 + (uint)bVar4 + (uint)(BVar6 != 0);
      iVar12 = iVar12 + 1;
      local_24 = local_24 + 1;
    } while (iVar12 < 4);
    bVar3 = FUN_0041e57e((int *)((int)this + 0x74));
    bVar4 = FUN_0041e57e((int *)((int)this + 0xa4));
    pcVar7 = (char *)(uint)bVar4;
    pcVar10 = (char *)(uint)bVar4 + iVar9 + (uint)bVar3;
  }
  if (((*pcVar1 == '\0') || (pcVar10 != (char *)0xe)) || (bVar2)) {
    uVar8 = FUN_0041e806((int *)this);
    uVar8 = uVar8 & 0xffffff00;
  }
  else {
    uVar8 = CONCAT31((int3)((uint)pcVar7 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar8;
}



/* Function: FUN_0041e710 */

void __fastcall FUN_0041e710(int *param_1)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  if (*param_1 != 0) {
    BVar1 = GetExitCodeThread((HANDLE)*param_1,(LPDWORD)(param_1 + 1));
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      param_1[2] = DVar2;
      if (DAT_00425484 != 0) {
        wprintf(L"\nEFS: ERROR %d Getting Write Thread Exit Code",DVar2);
      }
    }
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  if (param_1[0x24] != 0) {
    if (DAT_00425484 != 0) {
      wprintf(L"\nEFS: Closing Source File");
    }
    CloseEncryptedFileRaw((PVOID)param_1[0x24]);
    param_1[0x24] = 0;
  }
  if (param_1[0x18] != 0) {
    if (DAT_00425484 != 0) {
      wprintf(L"\nEFS: Closing Target File");
    }
    CloseEncryptedFileRaw((PVOID)param_1[0x18]);
    param_1[0x18] = 0;
  }
  SetLastError(dwErrCode);
  return;
}



/* Function: FUN_0041e7c2 */

void FUN_0041e7c2(int *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  if (*param_1 != 0) {
    BVar1 = CloseHandle((HANDLE)*param_1);
    if ((BVar1 == 0) && (DAT_00425484 != 0)) {
      DVar2 = GetLastError();
      wprintf(L"\nEFS: ERROR %d Closing Event Handle",DVar2);
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0041e806 */

void __fastcall FUN_0041e806(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_0041e710(param_1);
  piVar2 = param_1 + 0x19;
  iVar1 = 4;
  do {
    FUN_0041e7c2(piVar2 + 0xc);
    FUN_0041e7c2(piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0041e7c2(param_1 + 0x29);
  FUN_0041e7c2(param_1 + 0x1d);
  piVar2 = param_1 + 10;
  iVar1 = 4;
  do {
    if (*piVar2 != 0) {
      free((void *)*piVar2);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((char)param_1[9] != '\0') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



/* Function: FUN_0041e872 */

uint __thiscall FUN_0041e872(void *this,LPCWSTR param_1,LPCWSTR param_2)

{
  DWORD DVar1;
  HANDLE hThread;
  DWORD DVar2;
  uint uVar3;
  wchar_t *_Format;
  
  DVar1 = OpenEncryptedFileRawW(param_2,1,(PVOID *)((int)this + 0x90));
  if (DVar1 == 0) {
    DVar1 = OpenEncryptedFileRawW(param_1,0,(PVOID *)((int)this + 0x60));
    if (DVar1 == 0) {
      hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0041e930,this,4,(LPDWORD)0x0);
      *(HANDLE *)this = hThread;
      if (hThread != (HANDLE)0x0) {
        SetThreadPriority(hThread,2);
                    /* WARNING: Load size is inaccurate */
        DVar1 = ResumeThread(*this);
        return CONCAT31((int3)(DVar1 >> 8),1);
      }
      DVar1 = GetLastError();
      goto LAB_0041e913;
    }
    if (DAT_00425484 == 0) goto LAB_0041e913;
    DVar2 = GetLastError();
    _Format = L"\nEFS: OpenEncryptedFileRaw(Source) returned %d";
  }
  else {
    if (DAT_00425484 == 0) goto LAB_0041e913;
    DVar2 = GetLastError();
    _Format = L"\nEFS: OpenEncryptedFileRaw(Target) returned %d";
  }
  wprintf(_Format,DVar2);
LAB_0041e913:
  SetLastError(DVar1);
  uVar3 = FUN_0041e710((int *)this);
  return uVar3 & 0xffffff00;
}



/* Function: FUN_0041e930 */

void FUN_0041e930(PVOID param_1)

{
  DWORD dwExitCode;
  
  dwExitCode = WriteEncryptedFileRaw(FUN_0041ebd0,param_1,*(PVOID *)((int)param_1 + 0x90));
  if (DAT_00425484 != 0) {
    wprintf(L"\nEFS: WriteEncryptedFileRaw() returned %d",dwExitCode);
  }
  if (dwExitCode != 0) {
    *(DWORD *)((int)param_1 + 0xa8) = dwExitCode;
    SetEvent(*(HANDLE *)((int)param_1 + 0xa4));
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(dwExitCode);
}



/* Function: FUN_0041e989 */

uint __fastcall FUN_0041e989(int param_1)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  DWORD DVar4;
  
  iVar1 = *(int *)(param_1 + 0x58);
  BVar2 = SetEvent(*(HANDLE *)(param_1 + 100 + iVar1 * 4));
  if (BVar2 == 0) {
    DVar4 = GetLastError();
    *(DWORD *)(param_1 + 0x78) = DVar4;
    uVar3 = SetEvent(*(HANDLE *)(param_1 + 0x74));
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = iVar1 + 1U & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(param_1 + 0x58) = uVar3;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}



/* Function: FUN_0041e9e0 */

undefined4 FUN_0041e9e0(void *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  HANDLE local_c;
  undefined4 local_8;
  
  local_c = *(HANDLE *)(param_2 + 0x94 + *(int *)(param_2 + 0x58) * 4);
  local_8 = *(undefined4 *)(param_2 + 0xa4);
  DVar3 = WaitForMultipleObjects(2,&local_c,0,0xffffffff);
  *(DWORD *)(param_2 + 0x80) = DVar3;
  if (DVar3 == 1) {
    *(undefined4 *)(param_2 + 0x78) = 0x1d;
  }
  else {
    if (DVar3 == 0) {
      puVar1 = (uint *)(param_2 + 0x88);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x8c) + (uint)(0xfffffffe < uVar4);
      iVar2 = *(int *)(param_2 + 0x58);
      if (0x10000 < param_3) {
        wprintf(L"\nERROR - Too Much Data %d");
        SetEvent(*(HANDLE *)(param_2 + 0x74));
        if (DAT_00425484 != 0) {
          wprintf(L"\nEFS:    Read Callback returning ERROR %d",0x1e);
        }
        return 0x1e;
      }
      memcpy(*(void **)(param_2 + 0x28 + iVar2 * 4),param_1,param_3);
      *(undefined4 *)(param_2 + 0x48 + iVar2 * 4) = 0;
      *(uint *)(param_2 + 0x38 + iVar2 * 4) = param_3;
      uVar4 = FUN_0041e989(param_2);
      if ((char)uVar4 == '\0') {
        if (DAT_00425484 != 0) {
          wprintf(L"\nEFS:    Read Callback returning ERROR %d",*(undefined4 *)(param_2 + 0x78));
        }
        return *(undefined4 *)(param_2 + 0x78);
      }
      return 0;
    }
    *(undefined4 *)(param_2 + 0x78) = 0x1e;
    DVar3 = GetLastError();
    *(DWORD *)(param_2 + 0x7c) = DVar3;
  }
  if (DAT_00425484 != 0) {
    wprintf(L"\nEFS:    Read Callback returning ERROR %d",*(undefined4 *)(param_2 + 0x78));
  }
  return *(undefined4 *)(param_2 + 0x78);
}



/* Function: FUN_0041eafc */

uint __fastcall FUN_0041eafc(int param_1)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  DWORD DVar4;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 200) = 0;
  BVar2 = SetEvent(*(HANDLE *)(param_1 + 0x94 + iVar1 * 4));
  if (BVar2 == 0) {
    DVar4 = GetLastError();
    *(DWORD *)(param_1 + 0xa8) = DVar4;
    uVar3 = SetEvent(*(HANDLE *)(param_1 + 0xa4));
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = iVar1 + 1U & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(param_1 + 0x5c) = uVar3;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}



/* Function: FUN_0041eb56 */

uint __fastcall FUN_0041eb56(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  HANDLE local_c;
  undefined4 local_8;
  
  local_c = *(HANDLE *)(param_1 + 100 + *(int *)(param_1 + 0x5c) * 4);
  local_8 = *(undefined4 *)(param_1 + 0x74);
  DVar1 = WaitForMultipleObjects(2,&local_c,0,0xffffffff);
  *(DWORD *)(param_1 + 0xb0) = DVar1;
  if (DVar1 == 1) {
    *(undefined4 *)(param_1 + 0xa8) = 0x1e;
    uVar2 = 0;
  }
  else {
    if (DVar1 == 0) {
      *(undefined4 *)(param_1 + 200) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0xa8) = 0x1d;
    uVar2 = GetLastError();
    *(uint *)(param_1 + 0xac) = uVar2;
  }
  return uVar2 & 0xffffff00;
}



/* Function: FUN_0041ebd0 */

undefined4 FUN_0041ebd0(void *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  puVar1 = (uint *)(param_2 + 0xb8);
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + (uint)(0xfffffffe < uVar7);
  if (*(int *)(param_2 + 200) == 0) {
    uVar5 = FUN_0041eb56(param_2);
    if ((char)uVar5 != '\0') goto LAB_0041ec25;
LAB_0041ec01:
    if (DAT_00425484 != 0) {
      wprintf(L"\nEFS: Write Callback returning ERROR %d",*(undefined4 *)(param_2 + 0xa8));
    }
    uVar5 = *(undefined4 *)(param_2 + 0xa8);
  }
  else {
LAB_0041ec25:
    iVar3 = *(int *)(param_2 + 0x5c);
    iVar4 = *(int *)(param_2 + 0x38 + iVar3 * 4);
    if (iVar4 == 0) {
      *param_3 = 0;
      iVar4 = *(int *)(param_2 + 0xe0);
      iVar9 = *(int *)(param_2 + 0xd4);
      uVar7 = *(uint *)(param_2 + 0xd0);
LAB_0041ec66:
      pvVar6 = (void *)0x0;
      if (iVar4 != 0) {
        pvVar6 = param_1;
      }
      FUN_0040f443(iVar3,(HANDLE)0xffffffff,(int)pvVar6,*(uint *)(param_2 + 0xd0),
                   *(int *)(param_2 + 0xd4),uVar7,iVar9);
      uVar7 = FUN_0041eafc(param_2);
      if ((char)uVar7 == '\0') goto LAB_0041ec01;
    }
    else {
      uVar8 = iVar4 - *(int *)(param_2 + 0x48 + iVar3 * 4);
      uVar7 = *param_3;
      if (uVar8 <= *param_3) {
        uVar7 = uVar8;
      }
      memcpy(param_1,(void *)(*(int *)(param_2 + 0x28 + iVar3 * 4) +
                             *(int *)(param_2 + 0x48 + iVar3 * 4)),uVar7);
      *param_3 = uVar7;
      piVar2 = (int *)(param_2 + 0x48 + iVar3 * 4);
      *piVar2 = *piVar2 + uVar7;
      puVar1 = (uint *)(param_2 + 0xd8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + uVar7;
      *(int *)(param_2 + 0xdc) = *(int *)(param_2 + 0xdc) + (uint)CARRY4(uVar8,uVar7);
      if (*(uint *)(param_2 + 0x38 + iVar3 * 4) <= *(uint *)(param_2 + 0x48 + iVar3 * 4)) {
        iVar4 = *(int *)(param_2 + 0xe0);
        iVar9 = *(int *)(param_2 + 0xdc);
        uVar7 = *(uint *)(param_2 + 0xd8);
        goto LAB_0041ec66;
      }
      puVar1 = (uint *)(param_2 + 0xc0);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)(param_2 + 0xc4) = *(int *)(param_2 + 0xc4) + (uint)(0xfffffffe < uVar7);
    }
    uVar5 = 0;
  }
  return uVar5;
}



/* Function: FUN_0041ed30 */

int * __thiscall FUN_0041ed30(void *this,int param_1,uint param_2)

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
    (*(code *)PTR_guard_check_icall_004263b4)(uVar2 + 0x10);
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



/* Function: FUN_0041edc0 */

void __thiscall FUN_0041edc0(void *this,undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)((int)this + 4) + 4);
  (*(code *)PTR_guard_check_icall_004263b4)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041edf0 */

int __thiscall FUN_0041edf0(void *this,undefined4 param_1,int param_2,uint param_3)

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
    (*(code *)PTR_guard_check_icall_004263b4)(param_1,uVar2 + 0x10);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 8) = uVar4 - 1;
      return iVar3;
    }
  }
  return 0;
}



/* Function: FUN_0041ee70 */

int __fastcall FUN_0041ee70(int param_1)

{
  LOCK();
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  UNLOCK();
  return param_1 + 8;
}



/* Function: FUN_0041ee80 */

undefined4 __fastcall FUN_0041ee80(undefined4 param_1)

{
  return param_1;
}



/* Function: FUN_0041ee90 */

undefined4 * __thiscall FUN_0041ee90(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0040103c;
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
  *(undefined ***)this = &PTR_FUN_00401054;
  if ((this[8] != (CWin32Heap)0x0) && (*(int *)(this + 4) != 0)) {
    HeapDestroy(*(HANDLE *)(this + 4));
  }
  return;
}



/* Function: FUN_0041eee0 */

void __thiscall FUN_0041eee0(void *this,SIZE_T param_1)

{
  HeapAlloc(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



/* Function: FUN_0041ef00 */

void __thiscall FUN_0041ef00(void *this,LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(*(HANDLE *)((int)this + 4),0,param_1);
  }
  return;
}



/* Function: FUN_0041ef30 */

LPVOID __thiscall FUN_0041ef30(void *this,LPVOID param_1,SIZE_T param_2)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (param_1 == (LPVOID)0x0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = (code *)**this;
    (*(code *)PTR_guard_check_icall_004263b4)(param_2);
    pvVar2 = (LPVOID)(*pcVar1)();
  }
  else if (param_2 == 0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *(code **)(*this + 4);
    (*(code *)PTR_guard_check_icall_004263b4)(param_1);
    (*pcVar1)();
    pvVar2 = (LPVOID)0x0;
  }
  else {
    pvVar2 = HeapReAlloc(*(HANDLE *)((int)this + 4),0,param_1,param_2);
  }
  return pvVar2;
}



/* Function: FUN_0041ef90 */

void __thiscall FUN_0041ef90(void *this,LPCVOID param_1)

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



/* Function: ~CAtlBaseModule */

/* Library Function - Single Match
    public: __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(void)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(CAtlBaseModule *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x18));
  CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
  RemoveAll((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
             *)(this + 0x30));
  return;
}



/* Function: FUN_0041eff8 */

undefined * FUN_0041eff8(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042404c);
  if ((DAT_00424068 < param_1) || (param_1 < 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_IMAGE_DOS_HEADER_0042403c;
    if (param_1 != DAT_00424068) {
      if (DAT_00424068 <= param_1) {
        FUN_0041f075();
        pcVar1 = (code *)swi(3);
        puVar2 = (undefined *)(*pcVar1)();
        return puVar2;
      }
      puVar2 = *(undefined **)(DAT_00424064 + param_1 * 4);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042404c);
  return puVar2;
}



/* Function: RemoveAll */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::RemoveAll(void)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __thiscall
ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
RemoveAll(CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
          *this)

{
  if (*(int *)this != 0) {
    free(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* Function: FUN_0041f075 */

void FUN_0041f075(void)

{
  RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_0041f08d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_0041f08d(LPCRITICAL_SECTION param_1)

{
  undefined4 local_14;
  
  InitializeCriticalSection(param_1);
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_0041f0e4 */

undefined4 FUN_0041f0e4(void)

{
  LANGID LVar1;
  int iVar2;
  DWORD DVar3;
  
  if (DAT_004257c0 == 1) {
    iVar2 = FUN_0041f9c2(DAT_004257b8);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else if (DAT_004257b8 == (int *)0x0) {
    DAT_004257b8 = (int *)FUN_0041f9d8();
    iVar2 = FUN_0041f9c2(DAT_004257b8);
    if ((((iVar2 != 0) && (iVar2 = FUN_0041fa71(), iVar2 == 0)) &&
        (iVar2 = FUN_0041fae5(), iVar2 == 1)) &&
       ((iVar2 = FUN_0041fae5(), iVar2 == 2 && (iVar2 = FUN_0041fae5(), iVar2 == 3)))) {
      DAT_004257c0 = 1;
      LVar1 = SetThreadUILanguage(0);
      if (LVar1 == 0) {
        return 0;
      }
      return 1;
    }
    DVar3 = GetLastError();
    if (DVar3 != 0) {
      return 0;
    }
    DVar3 = 8;
    goto LAB_0041f17a;
  }
  DVar3 = GetLastError();
  if (DVar3 != 0) {
    return 0;
  }
  DVar3 = 0x42b;
LAB_0041f17a:
  SetLastError(DVar3);
  return 0;
}



/* Function: FUN_0041f18a */

undefined * FUN_0041f18a(void)

{
  int iVar1;
  
  if (DAT_004257b8 != (int *)0x0) {
    iVar1 = FUN_0041f9c2(DAT_004257b8);
    if (iVar1 != 0) {
      iVar1 = FUN_0041f8a5(DAT_004257b8,(int *)0x0);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0x20000)) {
        return *(undefined **)(iVar1 + 0xc);
      }
      return (undefined *)0x0;
    }
  }
  return &DAT_004034c4;
}



/* Function: FUN_0041f1ad */

undefined4 __fastcall FUN_0041f1ad(LPCWSTR param_1)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = GetLastError();
  if (param_1 == (LPCWSTR)0x0) {
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      return 0;
    }
    DVar1 = 0x57;
  }
  else {
    iVar2 = FUN_0041f0e4();
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_0041fc7a(param_1);
    if (iVar2 != 0) {
      SetLastError(DVar1);
      return 1;
    }
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      return 0;
    }
    DVar1 = 8;
  }
  SetLastError(DVar1);
  return 0;
}



/* Function: FUN_0041f20a */

undefined4 FUN_0041f20a(void)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  DWORD dwLanguageId;
  LPCWSTR *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  LPCWSTR local_8;
  
  local_8 = (LPCWSTR)0x0;
  iVar1 = FUN_0041f0e4();
  if (iVar1 != 0) {
    Arguments = (va_list *)0x0;
    nSize = 0;
    lpBuffer = &local_8;
    dwLanguageId = 0;
    DVar2 = GetLastError();
    DVar2 = FormatMessageW(0x1300,(LPCVOID)0x0,DVar2,dwLanguageId,(LPWSTR)lpBuffer,nSize,Arguments);
    if (DVar2 == 0) {
      if (local_8 != (LPCWSTR)0x0) {
        LocalFree(local_8);
        DVar2 = GetLastError();
        if (DVar2 == 0) {
          SetLastError(8);
        }
      }
    }
    else if (local_8 != (LPCWSTR)0x0) {
      uVar3 = FUN_0041f1ad(local_8);
      LocalFree(local_8);
      return uVar3;
    }
    DVar2 = GetLastError();
    if (DVar2 == 0) {
      SetLastError(8);
    }
  }
  return 0;
}



/* Function: FUN_0041f295 */

bool FUN_0041f295(void)

{
  int iVar1;
  LPCWSTR pWVar2;
  FILE *in_ECX;
  
  iVar1 = FUN_0041f20a();
  if (iVar1 != 0) {
    pWVar2 = (LPCWSTR)FUN_0041f18a();
    iVar1 = FUN_0041f49e(in_ECX,pWVar2);
    return iVar1 != 0;
  }
  return false;
}



/* Function: FUN_0041f2c3 */

undefined4 FUN_0041f2c3(void)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = FUN_0041f9c2(DAT_004257b8);
  if (iVar1 == 1) {
    for (iVar1 = FUN_0041fbb0(); iVar1 != 0; iVar1 = iVar1 + -1) {
      iVar2 = FUN_0041fd16();
      if ((iVar2 == 0x10000) && (local_8 = FUN_0041fc3f(), local_8 != 0)) {
        FUN_0041f700((int *)(local_8 + 0xc));
        FUN_0041f700(&local_8);
        iVar2 = FUN_0041f8a5(DAT_004257b8,(int *)0x0);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0x80000)) {
          FUN_0041fb5a(*(void **)(iVar2 + 0xc));
        }
      }
    }
    FUN_0041fa4c((int *)&DAT_004257b8);
  }
  if (DAT_004257bc == 1) {
    Ordinal_116();
  }
  return 1;
}



/* Function: FUN_0041f366 */

undefined4 __fastcall FUN_0041f366(HANDLE param_1,LPDWORD param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  
  if ((((param_1 != (HANDLE)0x0) && (param_1 != (HANDLE)0xffffffff)) &&
      (DVar1 = GetFileType(param_1), DVar1 == 2)) &&
     (BVar2 = GetConsoleMode(param_1,param_2), BVar2 != 0)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0041f39f */

undefined4 __fastcall FUN_0041f39f(FILE *param_1)

{
  DWORD DVar1;
  int _FileHandle;
  int *piVar2;
  HANDLE hFile;
  undefined4 uVar3;
  HANDLE pvVar4;
  DWORD local_8;
  
  pvVar4 = (HANDLE)0x0;
  local_8 = 0;
  if (param_1 == (FILE *)0x0) {
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      return 0;
    }
    DVar1 = 0x57;
LAB_0041f425:
    SetLastError(DVar1);
    return 0;
  }
  _FileHandle = _fileno(param_1);
  piVar2 = _errno();
  *piVar2 = 0;
  hFile = (HANDLE)_get_osfhandle(_FileHandle);
  if ((hFile == (HANDLE)0xffffffff) || (piVar2 = _errno(), *piVar2 == 9)) {
    DVar1 = 6;
    goto LAB_0041f425;
  }
  DVar1 = GetFileType(hFile);
  if (DVar1 != 2) {
    return 0;
  }
  if (_FileHandle == 0) {
    DVar1 = 0xfffffff6;
  }
  else if (_FileHandle == 1) {
    DVar1 = 0xfffffff5;
  }
  else {
    if (_FileHandle != 2) goto LAB_0041f417;
    DVar1 = 0xfffffff4;
  }
  pvVar4 = GetStdHandle(DVar1);
LAB_0041f417:
  uVar3 = FUN_0041f366(pvVar4,&local_8);
  return uVar3;
}



/* Function: FUN_0041f438 */

undefined4 __fastcall FUN_0041f438(short *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (((param_1 != (short *)0x0) && (param_2 != 0)) && (0 < (int)param_3)) {
    if (param_3 < 0x80000000) {
      uVar1 = FUN_004046b3(param_1,param_3,param_1,param_2);
      if (-1 < (int)uVar1) {
        return 1;
      }
    }
    else {
      uVar1 = 0x80070057;
      *param_1 = 0;
    }
    SetLastError(uVar1 & 0xffff);
  }
  return 0;
}



/* Function: FUN_0041f489 */

int __fastcall FUN_0041f489(LPCWSTR param_1)

{
  int iVar1;
  
  if (param_1 == (LPCWSTR)0x0) {
    return 0;
  }
  iVar1 = lstrlenW(param_1);
  return iVar1;
}



/* Function: FUN_0041f49e */

undefined4 __fastcall FUN_0041f49e(FILE *param_1,LPCWSTR param_2)

{
  int iVar1;
  FILE *pFVar2;
  HANDLE hConsoleOutput;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  undefined4 uVar6;
  UINT UVar7;
  uint uVar8;
  LPCWSTR lpWideCharStr;
  LPCWSTR lpWideCharStr_00;
  uint uVar9;
  LPSTR pCVar10;
  LPCSTR pCVar11;
  LPBOOL pBVar12;
  uint local_10;
  uint local_c;
  DWORD local_8;
  
  if ((param_1 == (FILE *)0x0) || (param_2 == (LPCWSTR)0x0)) {
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      DVar3 = 0x57;
LAB_0041f6ed:
      SetLastError(DVar3);
    }
LAB_0041f6f3:
    uVar6 = 0;
  }
  else {
    iVar1 = FUN_0041f39f(param_1);
    if (iVar1 == 1) {
      pFVar2 = FUN_004209fb(1);
      if (param_1 == pFVar2) {
        hConsoleOutput = GetStdHandle(0xfffffff5);
      }
      else {
        pFVar2 = FUN_004209fb(2);
        if (param_1 != pFVar2) {
          DVar3 = GetLastError();
          if (DVar3 == 0) {
            DVar3 = 0x42b;
            goto LAB_0041f6ed;
          }
          goto LAB_0041f6f3;
        }
        hConsoleOutput = GetStdHandle(0xfffffff4);
      }
      local_8 = 0;
      DVar3 = FUN_0041f489(param_2);
      BVar4 = WriteConsoleW(hConsoleOutput,param_2,DVar3,&local_8,(LPVOID)0x0);
      if ((BVar4 == 0) || (DVar3 != local_8)) {
        DVar3 = GetLastError();
        if (DVar3 != 8) {
LAB_0041f597:
          iVar1 = 2;
LAB_0041f599:
          FUN_004209fb(iVar1);
          FUN_0041f295();
          FUN_0041f2c3();
                    /* WARNING: Subroutine does not return */
          ExitProcess(1);
        }
        uVar5 = FUN_0041f489(param_2);
        local_10 = 0;
        if (uVar5 != 0) {
          do {
            DVar3 = uVar5 - local_10;
            if (0x400 < DVar3) {
              DVar3 = 0x400;
            }
            BVar4 = WriteConsoleW(hConsoleOutput,param_2,DVar3,&local_8,(LPVOID)0x0);
            if ((BVar4 == 0) || (DVar3 != local_8)) goto LAB_0041f597;
            local_10 = local_10 + 0x400;
            param_2 = param_2 + 0x400;
          } while (local_10 < uVar5);
        }
      }
    }
    else {
      uVar5 = FUN_0041f489(param_2);
      memset(&DAT_004256b8,0,0x100);
      local_c = 0;
      if (uVar5 != 0) {
        do {
          uVar8 = uVar5 - local_c;
          lpWideCharStr_00 = param_2 + local_c;
          if (0xff < uVar8) {
            uVar8 = 0xff;
          }
          while( true ) {
            pBVar12 = (LPBOOL)0x0;
            pCVar11 = (LPCSTR)0x0;
            iVar1 = 0;
            pCVar10 = (LPSTR)0x0;
            DVar3 = 0;
            lpWideCharStr = lpWideCharStr_00;
            uVar9 = uVar8;
            UVar7 = GetConsoleOutputCP();
            local_8 = WideCharToMultiByte(UVar7,DVar3,lpWideCharStr,uVar9,pCVar10,iVar1,pCVar11,
                                          pBVar12);
            if (local_8 == 0) goto LAB_0041f6da;
            if (local_8 < 0x100) break;
            if (local_8 - 0xff < 4) {
              iVar1 = -1;
            }
            else {
              iVar1 = -(local_8 - 0xff >> 1);
            }
            uVar8 = uVar8 + iVar1;
            local_8 = 0;
            if (uVar8 == 0) {
              DVar3 = GetLastError();
              if (DVar3 == 0) {
                SetLastError(0x42b);
              }
              goto LAB_0041f6da;
            }
          }
          if (local_8 < uVar8) {
            uVar8 = local_8;
          }
          memset(&DAT_004256b8,0,0x100);
          pBVar12 = (LPBOOL)0x0;
          pCVar11 = (LPCSTR)0x0;
          iVar1 = 0xff;
          pCVar10 = &DAT_004256b8;
          DVar3 = 0;
          uVar9 = uVar8;
          UVar7 = GetConsoleOutputCP();
          local_8 = WideCharToMultiByte(UVar7,DVar3,lpWideCharStr_00,uVar9,pCVar10,iVar1,pCVar11,
                                        pBVar12);
          if (local_8 == 0) {
LAB_0041f6da:
            iVar1 = 1;
            goto LAB_0041f599;
          }
          local_c = local_c + uVar8;
          fprintf(param_1,"%s",&DAT_004256b8);
          fflush(param_1);
        } while (local_c < uVar5);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



/* Function: FUN_0041f700 */

BOOL __fastcall FUN_0041f700(int *param_1)

{
  DWORD DVar1;
  HANDLE hHeap;
  SIZE_T _Size;
  BOOL BVar2;
  
  if (param_1 == (int *)0x0) {
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      return 0;
    }
    DVar1 = 0x57;
  }
  else {
    if (*param_1 == 0) {
      return 1;
    }
    hHeap = GetProcessHeap();
    if (hHeap == (HANDLE)0x0) {
      return 0;
    }
    _Size = FUN_0041f860((LPCVOID)*param_1);
    if (_Size != 0xffffffff) {
      memset((void *)*param_1,0,_Size);
      BVar2 = HeapFree(hHeap,0,(LPVOID)*param_1);
      *param_1 = 0;
      return BVar2;
    }
    DVar1 = 0x80004003;
  }
  SetLastError(DVar1);
  return 0;
}



/* Function: FUN_0041f76f */

BOOL __fastcall FUN_0041f76f(LPCVOID param_1)

{
  DWORD DVar1;
  HANDLE hHeap;
  BOOL BVar2;
  
  if (param_1 == (LPCVOID)0x0) {
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      return 0;
    }
    DVar1 = 0x57;
  }
  else {
    hHeap = GetProcessHeap();
    if (hHeap == (HANDLE)0x0) {
      return 0;
    }
    BVar2 = HeapValidate(hHeap,0,param_1);
    if (BVar2 != 0) {
      return BVar2;
    }
    DVar1 = 6;
  }
  SetLastError(DVar1);
  return 0;
}



/* Function: FUN_0041f7b0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

LPVOID __fastcall FUN_0041f7b0(SIZE_T param_1)

{
  DWORD DVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  void *local_14;
  
  if (param_1 == 0) {
    DVar1 = GetLastError();
    if (DVar1 == 0) {
      SetLastError(0x57);
    }
  }
  else {
    hHeap = GetProcessHeap();
    if (hHeap != (HANDLE)0x0) {
      pvVar2 = HeapAlloc(hHeap,0xc,param_1);
      ExceptionList = local_14;
      return pvVar2;
    }
  }
  ExceptionList = local_14;
  return (LPVOID)0x0;
}



/* Function: FUN_0041f860 */

SIZE_T __fastcall FUN_0041f860(LPCVOID param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  HANDLE hHeap;
  SIZE_T SVar3;
  
  if (param_1 == (LPCVOID)0x0) {
    DVar1 = GetLastError();
    if (DVar1 == 0) {
      SetLastError(0x57);
    }
  }
  else {
    BVar2 = FUN_0041f76f(param_1);
    if (BVar2 != 0) {
      hHeap = GetProcessHeap();
      if (hHeap != (HANDLE)0x0) {
        SVar3 = HeapSize(hHeap,0,param_1);
        return SVar3;
      }
    }
  }
  return 0xffffffff;
}



/* Function: FUN_0041f8a5 */

int __thiscall FUN_0041f8a5(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar4;
  
  iVar3 = FUN_0041f9c2((int *)this);
  if ((iVar3 == 0) || (*(uint *)(extraout_ECX + 4) <= extraout_EDX)) {
    iVar3 = 0;
  }
  else {
    iVar2 = *(int *)(extraout_ECX + 8);
    iVar1 = 0;
    for (uVar4 = extraout_EDX; iVar3 = iVar2, uVar4 != 0; uVar4 = uVar4 - 1) {
      iVar2 = *(int *)(iVar3 + 0x10);
      iVar1 = iVar3;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = iVar1;
    }
  }
  return iVar3;
}



/* Function: FUN_0041f8e5 */

int __fastcall FUN_0041f8e5(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0041f9c2(param_1);
  if (((iVar1 != 0) && (param_1[1] != -1)) &&
     (puVar2 = (undefined4 *)FUN_0041f7b0(0x14), puVar2 != (undefined4 *)0x0)) {
    puVar2[4] = 0;
    puVar2[2] = param_3;
    puVar2[1] = param_2;
    puVar2[3] = param_4;
    *puVar2 = 99;
    param_1[1] = param_1[1] + 1;
    if (param_1[2] == 0) {
      param_1[2] = (int)puVar2;
    }
    else {
      *(undefined4 **)(param_1[3] + 0x10) = puVar2;
    }
    param_1[3] = (int)puVar2;
    return param_1[1] + -1;
  }
  return -1;
}



/* Function: FUN_0041f952 */

void __fastcall FUN_0041f952(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 < 0x70001) {
      if ((((uVar1 != 0x70000) && (uVar1 != 0x20000)) &&
          ((uVar1 != 0x30000 && ((uVar1 != 0x40000 && (uVar1 != 0x50000)))))) && (uVar1 != 0x60000))
      {
        return;
      }
LAB_0041f9a4:
      FUN_0041f700((int *)(param_1 + 0xc));
      return;
    }
    if (uVar1 == 0x80000) {
      FUN_0041fa4c((int *)(param_1 + 0xc));
      *(int *)(param_1 + 0xc) = 0;
    }
    else if (((uVar1 == 0x90000) || (uVar1 == 0xa0000)) || (uVar1 == 0xb0000)) goto LAB_0041f9a4;
  }
  return;
}



/* Function: FUN_0041f9c2 */

undefined4 __fastcall FUN_0041f9c2(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 9)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0041f9d8 */

void FUN_0041f9d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0041f7b0(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = 9;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Function: FUN_0041f9fd */

void __fastcall FUN_0041f9fd(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = param_1;
  iVar2 = FUN_0041f9c2(param_1);
  if (iVar2 != 0) {
    local_8 = (int *)param_1[2];
    while (local_8 != (int *)0x0) {
      piVar1 = (int *)local_8[4];
      FUN_0041f952((int)local_8);
      FUN_0041f700((int *)&local_8);
      local_8 = piVar1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Function: FUN_0041fa4c */

void __fastcall FUN_0041fa4c(int *param_1)

{
  int iVar1;
  int *extraout_ECX;
  
  iVar1 = FUN_0041f9c2((int *)*param_1);
  if (iVar1 != 0) {
    FUN_0041f9fd(extraout_ECX);
    FUN_0041f700(param_1);
    return;
  }
  return;
}



/* Function: FUN_0041fa71 */

int FUN_0041fa71(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  short *local_8;
  
  piVar2 = DAT_004257b8;
  iVar3 = FUN_0041f9c2(DAT_004257b8);
  if (iVar3 != 0) {
    iVar3 = lstrlenW(L"");
    uVar1 = iVar3 + 1;
    psVar4 = (short *)FUN_0041f7b0(uVar1 * 2);
    if (psVar4 != (short *)0x0) {
      local_8 = psVar4;
      FUN_0041f438(psVar4,0x4034c4,uVar1);
      iVar3 = FUN_0041f8e5(piVar2,0x20000,uVar1 * 2,psVar4);
      if (iVar3 != -1) {
        return iVar3;
      }
      FUN_0041f700((int *)&local_8);
    }
  }
  return -1;
}



/* Function: FUN_0041fae5 */

int FUN_0041fae5(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *local_8;
  
  piVar1 = DAT_004257b8;
  iVar2 = FUN_0041f9c2(DAT_004257b8);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0041f9d8();
    local_8 = piVar3;
    iVar2 = FUN_0041f9c2(piVar3);
    if (iVar2 != 0) {
      uVar4 = 0;
      do {
        iVar2 = FUN_0041f8e5(piVar3,0,0,0);
        if (iVar2 == -1) goto LAB_0041fb44;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
      if ((uVar4 == 3) && (iVar2 = FUN_0041f8e5(piVar1,0x80000,4,piVar3), iVar2 != -1)) {
        return iVar2;
      }
LAB_0041fb44:
      FUN_0041fa4c((int *)&local_8);
    }
  }
  return -1;
}



/* Function: FUN_0041fb5a */

void * __fastcall FUN_0041fb5a(void *param_1)

{
  void *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = param_1;
  local_c = (void *)FUN_0041f8a5(param_1,&local_8);
  if (local_c != (void *)0x0) {
    if (local_8 == 0) {
      *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)((int)local_c + 0x10);
    }
    else {
      *(undefined4 *)(local_8 + 0x10) = *(undefined4 *)((int)local_c + 0x10);
    }
    if (local_c == *(void **)((int)param_1 + 0xc)) {
      *(int *)((int)param_1 + 0xc) = local_8;
    }
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + -1;
    FUN_0041f952((int)local_c);
    FUN_0041f700((int *)&local_c);
    local_c = (void *)0x1;
  }
  return local_c;
}



/* Function: FUN_0041fbb0 */

undefined4 FUN_0041fbb0(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0041f8a5(DAT_004257b8,(int *)0x0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0x80000)) {
    iVar1 = FUN_0041f9c2(*(int **)(iVar1 + 0xc));
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(extraout_ECX + 4);
    }
    return uVar2;
  }
  return 0;
}



/* Function: FUN_0041fbec */

undefined4 __fastcall FUN_0041fbec(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041f8a5(param_1,(int *)0x0);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 4) == 0x10000 || (*(int *)(iVar1 + 4) == 0x80000)))) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



/* Function: FUN_0041fc3f */

undefined4 FUN_0041fc3f(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041f8a5(DAT_004257b8,(int *)0x0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 0x80000)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0041fbec(*(void **)(iVar1 + 0xc));
  }
  return uVar2;
}



/* Function: FUN_0041fc7a */

undefined4 FUN_0041fc7a(LPCWSTR param_1)

{
  int *piVar1;
  SIZE_T SVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  
  iVar3 = FUN_0041f8a5(DAT_004257b8,(int *)0x0);
  if ((iVar3 == 0) || ((*(int *)(iVar3 + 4) != 0x20000 && (*(int *)(iVar3 + 4) != 0)))) {
    return 0;
  }
  iVar4 = lstrlenW(param_1);
  SVar2 = (iVar4 + 1U) * 2;
  if (*(int *)(iVar3 + 4) == 0) {
    pvVar5 = FUN_0041f7b0(SVar2);
    *(LPVOID *)(iVar3 + 0xc) = pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      return 0;
    }
    *(undefined4 *)(iVar3 + 4) = 0x20000;
  }
  else {
    if (SVar2 <= *(uint *)(iVar3 + 8)) goto LAB_0041fcf4;
    piVar1 = (int *)(iVar3 + 0xc);
    FUN_0041f700(piVar1);
    *piVar1 = 0;
    pvVar5 = FUN_0041f7b0(SVar2);
    *piVar1 = (int)pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      return 0;
    }
  }
  *(SIZE_T *)(iVar3 + 8) = SVar2;
LAB_0041fcf4:
  FUN_0041f438(*(short **)(iVar3 + 0xc),(int)param_1,iVar4 + 1U);
  return 1;
}



/* Function: FUN_0041fd16 */

undefined4 FUN_0041fd16(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0041f8a5(DAT_004257b8,(int *)0x0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 0x80000)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0041f8a5(*(void **)(iVar1 + 0xc),(int *)0x0);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 4);
    }
  }
  return uVar2;
}



/* Function: FUN_0041fd5e */

void * __cdecl FUN_0041fd5e(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  return (void *)0x0;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0042059b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0042059b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: FUN_0041fda3 */

void __cdecl FUN_0041fda3(size_t param_1)

{
  FUN_0041fd5e(param_1);
  return;
}



/* Function: FUN_0041fdc0 */

undefined4 FUN_0041fdc0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_0042001f();
  DAT_00424338 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_004206e4(1);
  __set_app_type(iVar2);
  DAT_00425878 = 0xffffffff;
  DAT_0042587c = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_00424668;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_0042465c;
  FUN_00420740();
  if (DAT_00424100 == 0) {
    __setusermatherr(FUN_00420740);
  }
  FUN_00420947();
  return 0;
}



/* Function: FUN_0041fe30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041fe30(void)

{
  _DAT_0042433c = DAT_00424664;
  _DAT_00424334 =
       __wgetmainargs(&DAT_00424328,(wchar_t ***)&DAT_0042432c,(wchar_t ***)&DAT_00424330,
                      DAT_00424660,(_startupinfo *)&DAT_0042433c);
  return;
}



/* Function: FUN_0041fe69 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_0041fe69(void)

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
    if (DAT_00425870 != 0) {
      iVar4 = DAT_00425870;
      iVar3 = DAT_00425870;
    }
    DAT_00425870 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_0041feb1;
    if (iVar4 == iVar5) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_0041feb1:
  if (DAT_00425874 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_00425874 == 0) {
    DAT_00425874 = 1;
    iVar5 = FUN_0041ffe8((undefined4 *)&DAT_004011d8,(undefined4 *)&DAT_004011e4);
    if (iVar5 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_00424324 = 1;
  }
  if (DAT_00425874 == 1) {
    initterm(&DAT_0040113c,&DAT_004011d4);
    DAT_00425874 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00425870 = 0;
    UNLOCK();
  }
  if ((DAT_00425880 != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00425880), pcVar2 = DAT_00425880, BVar6 != 0
     )) {
    (*(code *)PTR_guard_check_icall_004263b4)(0,2,0);
    (*pcVar2)();
  }
  DAT_00424320 = FUN_0041274e(DAT_00424328,DAT_0042432c);
  if (DAT_00424338 != 0) {
    if (DAT_00424324 == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_00424320;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_00424320);
}



/* Function: FUN_0041ffe8 */

void __cdecl FUN_0041ffe8(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_004263b4)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_0042001f */

bool FUN_0042001f(void)

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
  FUN_004208a9();
  FUN_0041fe69();
  return;
}



/* Function: FUN_004200b0 */

void __fastcall FUN_004200b0(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00424140) {
    return;
  }
  FUN_00420138(param_1,param_2);
  return;
}



/* Function: Unwind@004200d0 */

void __cdecl Unwind_004200d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x004200d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* Function: FUN_004200e0 */

type_info * __thiscall FUN_004200e0(void *this,byte param_1)

{
  type_info::~type_info((type_info *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (type_info *)this;
}



/* Function: FUN_00420108 */

void __cdecl FUN_00420108(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00420138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00420138(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_00424450 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_00424454 = &stack0x00000004;
  _DAT_00424390 = 0x10001;
  _DAT_00424340 = 0xc0000409;
  _DAT_00424344 = 1;
  _DAT_00424350 = 3;
  DAT_00424354 = 2;
  DAT_00424358 = DAT_00424140;
  DAT_0042435c = DAT_00424180;
  uStack_c = DAT_00424140;
  uStack_8 = DAT_00424180;
  _DAT_0042434c = unaff_retaddr;
  _DAT_0042441c = in_GS;
  _DAT_00424420 = in_FS;
  _DAT_00424424 = in_ES;
  _DAT_00424428 = in_DS;
  _DAT_0042442c = unaff_EDI;
  _DAT_00424430 = unaff_ESI;
  _DAT_00424434 = unaff_EBX;
  _DAT_00424438 = param_2;
  _DAT_0042443c = param_1;
  _DAT_00424440 = in_EAX;
  _DAT_00424444 = unaff_EBP;
  DAT_00424448 = unaff_retaddr;
  _DAT_0042444c = in_CS;
  _DAT_00424458 = in_SS;
  FUN_00420108((_EXCEPTION_POINTERS *)&PTR_DAT_00401004);
  return;
}



/* Function: FUN_0042024c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042024c(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  
  _DAT_00424450 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00424390 = 0x10001;
  _DAT_00424454 = &stack0x00000004;
  _DAT_00424340 = 0xc0000409;
  _DAT_00424344 = 1;
  _DAT_00424350 = 1;
  DAT_00424354 = 8;
  _DAT_0042434c = unaff_retaddr;
  _DAT_0042441c = in_GS;
  _DAT_00424420 = in_FS;
  _DAT_00424424 = in_ES;
  _DAT_00424428 = in_DS;
  _DAT_0042442c = unaff_EDI;
  _DAT_00424430 = unaff_ESI;
  _DAT_00424434 = unaff_EBX;
  _DAT_00424438 = param_2;
  _DAT_0042443c = param_1;
  _DAT_00424440 = in_EAX;
  DAT_00424448 = unaff_retaddr;
  _DAT_0042444c = in_CS;
  _DAT_00424458 = in_SS;
  FUN_00420108((_EXCEPTION_POINTERS *)&PTR_DAT_00401004);
  return;
}



/* Function: FUN_0042030c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_0042030c(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00423238;
  uStack_c = 0x420318;
  local_20[0] = DAT_0042587c;
  if (DAT_0042587c == -1) {
    (*(code *)PTR_guard_check_icall_004263b4)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_0042587c;
    local_24 = DAT_00425878;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_0042587c = local_20[0];
    DAT_00425878 = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_004203a6();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_004203a6 */

void FUN_004203a6(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_004203b5 */

int __cdecl FUN_004203b5(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_0042030c(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x004203e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,exception *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004203f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: FUN_004203fc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_004203fc(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  undefined4 local_14;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*(code *)param_4)();
  }
  FUN_00420470();
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00420470 */

void FUN_00420470(void)

{
  int in_EAX;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  
  if (in_EAX == 0) {
    FUN_00420491(unaff_ESI,unaff_EBX,unaff_EDI,*(undefined **)(unaff_EBP + 0x14));
  }
  return;
}



/* Function: thunk_FUN_004203fc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void thunk_FUN_004203fc(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  undefined4 uStack_14;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*(code *)param_4)();
  }
  FUN_00420470();
  ExceptionList = uStack_14;
  return;
}



/* Function: FUN_00420491 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00420491(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  undefined4 local_14;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0042050c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_0042050c(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  int iVar1;
  undefined4 local_14;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*(code *)param_4)();
  }
  FUN_0042057a();
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0042057a */

void FUN_0042057a(void)

{
  int in_EAX;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  if (in_EAX == 0) {
    FUN_00420491(unaff_EDI,unaff_EBX,unaff_ESI,*(undefined **)(unaff_EBP + 0x18));
  }
  return;
}



/* Function: thunk_FUN_0042050c */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void thunk_FUN_0042050c(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  int iVar1;
  undefined4 uStack_14;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*(code *)PTR_guard_check_icall_004263b4)();
    (*(code *)param_4)();
  }
  FUN_0042057a();
  ExceptionList = uStack_14;
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0042059b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: malloc */

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004205a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



/* Function: FUN_004205c0 */

void __cdecl
FUN_004205c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00424140,FUN_004200b0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: _callnewh */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004205eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}



/* Function: FUN_00420600 */

undefined4 FUN_00420600(int *param_1)

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



/* Function: FUN_00420650 */

undefined4 FUN_00420650(void)

{
  SetUnhandledExceptionFilter(FUN_00420600);
  return 0;
}



/* Function: FUN_00420670 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00420670(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_004206e4 */

undefined4 __cdecl FUN_004206e4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00420670(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00420726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00420740 */

undefined4 FUN_00420740(void)

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
  
  pcStack_10 = FUN_004205c0;
  local_14 = ExceptionList;
  local_c = DAT_00424140 ^ 0x4232d8;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00420870((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00420870 */

bool __cdecl FUN_00420870(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_004208a9 */

void FUN_004208a9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00424140 == 0xbb40e64e) || ((DAT_00424140 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00424140 & 0xffff0000, DAT_00424140 = local_8, uVar1 == 0)) {
      DAT_00424140 = 0xbb40e64f;
    }
  }
  DAT_00424180 = ~DAT_00424140;
  return;
}



/* Function: FUN_00420947 */

void FUN_00420947(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00420960. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00424140 ^ (uint)&param_2;
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



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x004209cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x004209d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004209e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x004209ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: FUN_004209fb */

FILE * __cdecl FUN_004209fb(int param_1)

{
  FILE *pFVar1;
  
  pFVar1 = __iob_func();
  return pFVar1 + param_1;
}



/* Function: __iob_func */

FILE * __cdecl __iob_func(void)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = __iob_func();
  return pFVar1;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00420a21. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
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



/* Function: FUN_00420a47 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00420a47(undefined4 param_1,undefined4 param_2)

{
  uint unaff_EBP;
  
  FUN_004200b0(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP,param_2);
  return;
}



/* Function: FUN_00420a5c */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00420a5c(undefined4 param_1,undefined4 param_2)

{
  uint unaff_EBP;
  
  FUN_004200b0(*(uint *)(unaff_EBP - 0x14) ^ unaff_EBP,param_2);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00424140 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00424140 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00424140 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: __EH_epilog3_align */

/* Library Function - Single Match
    __EH_epilog3_align
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3_align(void)

{
  undefined4 *unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *unaff_EBX = unaff_retaddr;
  return;
}



/* Function: __EH_prolog3_align */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __EH_prolog3_align
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_align(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  
  puVar2 = (undefined4 *)((uint)&stack0x00000000 & -param_2);
  puVar2[-2] = in_EAX;
  puVar2[-3] = unaff_retaddr;
  *puVar2 = unaff_EBP;
  puVar2[-1] = 0xffffffff;
  puVar2[-4] = &param_2;
  iVar1 = -param_1;
  *(undefined4 *)((int)puVar2 + iVar1 + -0x14) = unaff_ESI;
  *(undefined4 *)((int)puVar2 + iVar1 + -0x18) = unaff_EDI;
  *(uint *)((int)puVar2 + iVar1 + -0x1c) = DAT_00424140 ^ (uint)puVar2;
  puVar2[1] = param_3;
  *(undefined4 *)((int)puVar2 + iVar1 + -0x20) = puVar2[-3];
  puVar2[-3] = ExceptionList;
  ExceptionList = puVar2 + -3;
  return;
}



/* Function: __alldiv */

/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}



/* Function: __allmul */

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



/* Function: __allrem */

/* Library Function - Single Match
    __allrem
   
   Library: Visual Studio */

undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar3 = param_1;
  uVar4 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_00420d4d;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar4 = uVar4 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar8 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar4;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_00420d4d;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_00420d4d:
  return CONCAT44(iVar6,iVar5);
}



/* Function: __aulldiv */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
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



/* Function: FUN_0042100d */

longlong FUN_0042100d(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  double in_XMM0_Qa;
  undefined8 uVar5;
  uint local_8;
  
  local_8 = SUB84(in_XMM0_Qa,0);
  uVar4 = (uint)((ulonglong)in_XMM0_Qa >> 0x20);
  uVar3 = uVar4 & 0x7fffffff;
  if (uVar3 < 0x41e00000) {
    return (longlong)(int)in_XMM0_Qa;
  }
  if (0x43dfffff < uVar3) {
    return -0x8000000000000000;
  }
  if ((longlong)in_XMM0_Qa < 0) {
    uVar5 = dtol3_getbits();
    return CONCAT44(-((int)((ulonglong)uVar5 >> 0x20) + (uint)((int)uVar5 != 0)),-(int)uVar5);
  }
  uVar4 = uVar4 & 0x1fffff | 0x100000;
  bVar2 = (char)(uVar3 >> 0x14) - 0x33;
  if (0x432 < uVar3 >> 0x14) {
    return CONCAT44(uVar4 << (bVar2 & 0x1f) | local_8 >> 0x20 - (bVar2 & 0x1f),
                    local_8 << (bVar2 & 0x1f));
  }
  bVar1 = -bVar2 & 0x1f;
  return CONCAT44(uVar4 >> (-bVar2 & 0x1f),local_8 >> bVar1 | uVar4 << 0x20 - bVar1);
}



/* Function: dtol3_getbits */

/* Library Function - Single Match
    _dtol3_getbits
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

undefined8 __cdecl dtol3_getbits(void)

{
  byte bVar1;
  uint in_EAX;
  byte bVar2;
  uint in_EDX;
  uint uVar3;
  
  uVar3 = in_EDX & 0x1fffff | 0x100000;
  bVar2 = (char)(in_EDX >> 0x14) - 0x33;
  if (in_EDX >> 0x14 < 0x433) {
    bVar1 = -bVar2 & 0x1f;
    return CONCAT44(uVar3 >> (-bVar2 & 0x1f),in_EAX >> bVar1 | uVar3 << 0x20 - bVar1);
  }
  return CONCAT44(uVar3 << (bVar2 & 0x1f) | in_EAX >> 0x20 - (bVar2 & 0x1f),in_EAX << (bVar2 & 0x1f)
                 );
}



/* Function: FUN_004210a0 */

void FUN_004210a0(void)

{
  return;
}



/* Function: FUN_004210e0 */

void FUN_004210e0(void)

{
  return;
}



/* Function: memcmp */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042110d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00421125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: Unwind@004212ce */

void Unwind_004212ce(void)

{
  int unaff_EBP;
  
  FUN_0040e732(*(int *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* Function: Unwind@00421301 */

void Unwind_00421301(void)

{
  int unaff_EBP;
  
  FUN_00407894(unaff_EBP + -0x106c);
  return;
}



/* Function: Unwind@00421341 */

void Unwind_00421341(void)

{
  int unaff_EBP;
  
  FUN_00407e18(unaff_EBP + -0x78);
  return;
}



/* Function: Unwind@00421407 */

void Unwind_00421407(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042140f */

void Unwind_0042140f(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00421417 */

void Unwind_00421417(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0042141f */

void Unwind_0042141f(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042144f */

void Unwind_0042144f(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00421457 */

void Unwind_00421457(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042145f */

void Unwind_0042145f(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00421467 */

void Unwind_00421467(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00421497 */

void Unwind_00421497(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042149f */

void Unwind_0042149f(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@004214a7 */

void Unwind_004214a7(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004214af */

void Unwind_004214af(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0042150f */

void Unwind_0042150f(void)

{
  int unaff_EBP;
  
  FUN_0041df9a((int *)(unaff_EBP + -0x63c));
  return;
}



/* Function: Unwind@0042151a */

void Unwind_0042151a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x638));
  return;
}



/* Function: Unwind@0042155a */

void Unwind_0042155a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042158a */

void Unwind_0042158a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x428));
  return;
}



/* Function: Unwind@004215ca */

void Unwind_004215ca(void)

{
  int unaff_EBP;
  
  FUN_0041df9a((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042161d */

void Unwind_0042161d(void)

{
  int unaff_EBP;
  
  FUN_0040d535(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004216c6 */

void Unwind_004216c6(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004216ce */

void Unwind_004216ce(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004216d6 */

void Unwind_004216d6(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00421706 */

void Unwind_00421706(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042170e */

void Unwind_0042170e(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00421716 */

void Unwind_00421716(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00421746 */

void Unwind_00421746(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00421776 */

void Unwind_00421776(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0042177e */

void Unwind_0042177e(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00421786 */

void Unwind_00421786(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0042178e */

void Unwind_0042178e(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00421796 */

void Unwind_00421796(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004217c6 */

void Unwind_004217c6(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004217f6 */

void Unwind_004217f6(void)

{
  int unaff_EBP;
  
  free(*(void **)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042184b */

void Unwind_0042184b(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0042187b */

void Unwind_0042187b(void)

{
  int unaff_EBP;
  
  FUN_00412cfe((int *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@004218b5 */

void Unwind_004218b5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffe;
    FUN_0040d535((int *)(unaff_EBP + -0x9c));
    return;
  }
  return;
}



/* Function: Unwind@004218d7 */

void Unwind_004218d7(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffd;
    FUN_0040d535((int *)(unaff_EBP + -0x98));
    return;
  }
  return;
}



/* Function: Unwind@0042192e */

void Unwind_0042192e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xa14) = *(uint *)(unaff_EBP + -0xa14) & 0xfffffffe;
    FUN_0040d535((int *)(unaff_EBP + -0xa1c));
    return;
  }
  return;
}



/* Function: Unwind@00421950 */

void Unwind_00421950(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xa14) = *(uint *)(unaff_EBP + -0xa14) & 0xfffffffd;
    FUN_0040d535((int *)(unaff_EBP + -0xa28));
    return;
  }
  return;
}



/* Function: Unwind@00421972 */

void Unwind_00421972(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa14) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xa14) = *(uint *)(unaff_EBP + -0xa14) & 0xfffffffb;
    FUN_0040d535((int *)(unaff_EBP + -0xa20));
    return;
  }
  return;
}



/* Function: Unwind@00421994 */

void Unwind_00421994(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa14) & 8) != 0) {
    *(uint *)(unaff_EBP + -0xa14) = *(uint *)(unaff_EBP + -0xa14) & 0xfffffff7;
    FUN_0040d535((int *)(unaff_EBP + -0xa24));
    return;
  }
  return;
}



/* Function: Unwind@004219eb */

void Unwind_004219eb(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffe;
    FUN_0040d535((int *)(unaff_EBP + -0xa4));
    return;
  }
  return;
}



/* Function: Unwind@00421a0d */

void Unwind_00421a0d(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffd;
    FUN_0040d535((int *)(unaff_EBP + -0xa0));
    return;
  }
  return;
}



/* Function: Unwind@00421a64 */

void Unwind_00421a64(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x124) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x124) = *(uint *)(unaff_EBP + -0x124) & 0xfffffffe;
    FUN_0040d535((int *)(unaff_EBP + -0x144));
    return;
  }
  return;
}



/* Function: Unwind@00421a86 */

void Unwind_00421a86(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x124) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x124) = *(uint *)(unaff_EBP + -0x124) & 0xfffffffd;
    FUN_0040d535((int *)(unaff_EBP + -0x140));
    return;
  }
  return;
}



/* Function: Unwind@00421aa8 */

void Unwind_00421aa8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x124) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x124) = *(uint *)(unaff_EBP + -0x124) & 0xfffffffb;
    FUN_0040d535((int *)(unaff_EBP + -0x13c));
    return;
  }
  return;
}



/* Function: Unwind@00421aca */

void Unwind_00421aca(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x124) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x124) = *(uint *)(unaff_EBP + -0x124) & 0xfffffff7;
    FUN_0040d535((int *)(unaff_EBP + -300));
    return;
  }
  return;
}



/* Function: Unwind@00421aec */

void Unwind_00421aec(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x124) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x124) = *(uint *)(unaff_EBP + -0x124) & 0xffffffef;
    FUN_0040d535((int *)(unaff_EBP + -0x128));
    return;
  }
  return;
}



/* Function: Unwind@00421b0e */

void Unwind_00421b0e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x124) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x124) = *(uint *)(unaff_EBP + -0x124) & 0xffffffdf;
    FUN_0040d535((int *)(unaff_EBP + -300));
    return;
  }
  return;
}



/* Function: Unwind@00421b65 */

void Unwind_00421b65(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}



/* Function: Unwind@00421b70 */

void Unwind_00421b70(void)

{
  int unaff_EBP;
  
  FUN_004043f6((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x18));
  return;
}



/* Function: Unwind@00421b7b */

void Unwind_00421b7b(void)

{
  int unaff_EBP;
  
  FUN_004043f6((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x30));
  return;
}



/* Function: Unwind@00421bae */

void Unwind_00421bae(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x264));
  return;
}



/* Function: Unwind@00421bee */

void Unwind_00421bee(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00421c1e */

void Unwind_00421c1e(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@00421c58 */

void Unwind_00421c58(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00421c60 */

void Unwind_00421c60(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00421c90 */

void Unwind_00421c90(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@00421cc0 */

void Unwind_00421cc0(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x60));
  return;
}



/* Function: Unwind@00421cc8 */

void Unwind_00421cc8(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x5c));
  return;
}



/* Function: Unwind@00421d02 */

void Unwind_00421d02(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00421d0a */

void Unwind_00421d0a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00421d12 */

void Unwind_00421d12(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00421d1a */

void Unwind_00421d1a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00421d22 */

void Unwind_00421d22(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00421d2a */

void Unwind_00421d2a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00421d32 */

void Unwind_00421d32(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00421d3a */

void Unwind_00421d3a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00421d42 */

void Unwind_00421d42(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00421d72 */

void Unwind_00421d72(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00421d7a */

void Unwind_00421d7a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00421d82 */

void Unwind_00421d82(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00421db2 */

void Unwind_00421db2(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00421dba */

void Unwind_00421dba(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00421dea */

void Unwind_00421dea(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffe;
    FUN_0040d535((int *)(unaff_EBP + -0x90));
    return;
  }
  return;
}



/* Function: Unwind@00421e0c */

void Unwind_00421e0c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffd;
    FUN_0040d535((int *)(unaff_EBP + -0x98));
    return;
  }
  return;
}



/* Function: Unwind@00421e2e */

void Unwind_00421e2e(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x90));
  return;
}



/* Function: Unwind@00421e6e */

void Unwind_00421e6e(void)

{
  int unaff_EBP;
  
  free(*(void **)(unaff_EBP + -0x3c));
  return;
}



/* Function: Unwind@00421e78 */

void Unwind_00421e78(void)

{
  int unaff_EBP;
  
  free(*(void **)(unaff_EBP + -0x3c));
  return;
}



/* Function: Unwind@00421e82 */

void Unwind_00421e82(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00421e8a */

void Unwind_00421e8a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x38));
  return;
}



/* Function: Unwind@00421e92 */

void Unwind_00421e92(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x34));
  return;
}



/* Function: Unwind@00421e9a */

void Unwind_00421e9a(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x30));
  return;
}



/* Function: Unwind@00421eca */

void Unwind_00421eca(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x3c));
  return;
}



/* Function: Unwind@00421f04 */

void Unwind_00421f04(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x50));
  return;
}



/* Function: Unwind@00421f0c */

void Unwind_00421f0c(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x4c));
  return;
}



/* Function: Unwind@00421f14 */

void Unwind_00421f14(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x48));
  return;
}



/* Function: Unwind@00421f4e */

void Unwind_00421f4e(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x70));
  return;
}



/* Function: Unwind@00421f56 */

void Unwind_00421f56(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x6c));
  return;
}



/* Function: Unwind@00421f5e */

void Unwind_00421f5e(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x4c));
  return;
}



/* Function: Unwind@00421f98 */

void Unwind_00421f98(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00421fa0 */

void Unwind_00421fa0(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@00421fd3 */

void Unwind_00421fd3(void)

{
  int unaff_EBP;
  
  FUN_0041c106(unaff_EBP + -0x98);
  return;
}



/* Function: Unwind@00421fde */

void Unwind_00421fde(void)

{
  int unaff_EBP;
  
  FUN_0041c106(unaff_EBP + -0x120);
  return;
}



/* Function: Unwind@00422014 */

void Unwind_00422014(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_0040d535(*(int **)(unaff_EBP + -0x14));
    return;
  }
  return;
}



/* Function: Unwind@00422055 */

void Unwind_00422055(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(*(int *)(unaff_EBP + -0x14) + 0x44));
  return;
}



/* Function: Unwind@00422088 */

void Unwind_00422088(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x530));
  return;
}



/* Function: Unwind@00422093 */

void Unwind_00422093(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x538));
  return;
}



/* Function: Unwind@004220d3 */

void Unwind_004220d3(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004220db */

void Unwind_004220db(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004220e3 */

void Unwind_004220e3(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00422113 */

void Unwind_00422113(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042211b */

void Unwind_0042211b(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042214b */

void Unwind_0042214b(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00422153 */

void Unwind_00422153(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042215b */

void Unwind_0042215b(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042218b */

void Unwind_0042218b(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x1064));
  return;
}



/* Function: Unwind@00422196 */

void Unwind_00422196(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x1070));
  return;
}



/* Function: Unwind@004221a1 */

void Unwind_004221a1(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x105c));
  return;
}



/* Function: Unwind@004221ac */

void Unwind_004221ac(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x106c));
  return;
}



/* Function: Unwind@004221ec */

void Unwind_004221ec(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@004221f4 */

void Unwind_004221f4(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@004221fc */

void Unwind_004221fc(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00422204 */

void Unwind_00422204(void)

{
  int unaff_EBP;
  
  FUN_0040d535((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_00422240 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_00422240(void)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_004212ab;
  if (DAT_00424004 != (int *)0x0) {
    puVar1 = (undefined1 *)FUN_0040d6f2(DAT_00424004);
  }
  return puVar1;
}



/* Function: FUN_00422270 */

void FUN_00422270(void)

{
  FUN_0040d2d0((int *)&DAT_004241d4);
  return;
}



/* Function: FUN_00422280 */

void FUN_00422280(void)

{
  FUN_0040d1a5(&DAT_004257c4);
  return;
}



/* Function: FUN_00422290 */

void FUN_00422290(void)

{
  FUN_0040d0e3(&DAT_00424200);
  return;
}



/* Function: FUN_004222a0 */

void FUN_004222a0(void)

{
  FUN_004044dc((undefined4 *)(DAT_00425248 + -0x10));
  return;
}



/* Function: FUN_004222c0 */

void FUN_004222c0(void)

{
  FUN_004044dc((undefined4 *)(DAT_0042524c + -0x10));
  return;
}



/* Function: FUN_004222e0 */

void FUN_004222e0(void)

{
  FUN_004044dc((undefined4 *)(DAT_004252a0 + -0x10));
  return;
}



/* Function: FUN_00422300 */

void FUN_00422300(void)

{
  FUN_00404303(&DAT_004242c0);
  return;
}



/* Function: FUN_00422310 */

void FUN_00422310(void)

{
  FUN_00404303(&DAT_00424290);
  return;
}



/* Function: FUN_00422320 */

void FUN_00422320(void)

{
  FUN_00404303(&DAT_004242a8);
  return;
}



/* Function: FUN_00422330 */

void FUN_00422330(void)

{
  FUN_00404303(&DAT_0042423c);
  return;
}



/* Function: FUN_00422340 */

void FUN_00422340(void)

{
  FUN_00404303(&DAT_004242d8);
  return;
}



/* Function: FUN_00422350 */

void FUN_00422350(void)

{
  return;
}



/* Function: FUN_00422360 */

void FUN_00422360(void)

{
  return;
}



/* Function: FUN_00422370 */

void FUN_00422370(void)

{
  return;
}



/* Function: FUN_00422380 */

void FUN_00422380(void)

{
  return;
}



/* Function: FUN_00422390 */

void FUN_00422390(void)

{
  return;
}



/* Function: FUN_004223a0 */

void FUN_004223a0(void)

{
  return;
}



/* Function: FUN_004223b0 */

void FUN_004223b0(void)

{
  return;
}



/* Function: FUN_004223c0 */

void FUN_004223c0(void)

{
  return;
}



/* Function: FUN_004223d0 */

void FUN_004223d0(void)

{
  return;
}



/* Function: FUN_004223e0 */

void FUN_004223e0(void)

{
  return;
}



/* Function: FUN_004223f0 */

void FUN_004223f0(void)

{
  return;
}



/* Function: FUN_00422400 */

void FUN_00422400(void)

{
  if (DAT_00424258 != (HANDLE)0xffffffff) {
    CloseHandle(DAT_00424258);
  }
  return;
}



/* Function: FUN_00422420 */

void FUN_00422420(void)

{
  FUN_0041c03c(&PTR_LOOP_00424008);
  return;
}



/* Function: FUN_00422430 */

void FUN_00422430(void)

{
  FUN_0041c03c(&DAT_00424010);
  return;
}



/* Function: FUN_00422440 */

void FUN_00422440(void)

{
  ATL::CWin32Heap::~CWin32Heap((CWin32Heap *)&DAT_004253bc);
  return;
}



/* Function: FUN_00422450 */

void FUN_00422450(void)

{
  DAT_00424018 = &PTR_FUN_0040103c;
  return;
}



/* Function: FUN_00422470 */

void FUN_00422470(void)

{
  ATL::CAtlBaseModule::~CAtlBaseModule((CAtlBaseModule *)&DAT_00424034);
  return;
}



/* Function: FUN_00422480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422480(void)

{
  code *pcVar1;
  undefined *hInstance;
  int iVar2;
  
  hInstance = PTR_IMAGE_DOS_HEADER_00424038;
  if ((DAT_004242f0 != 0) && (DAT_004242f0 == 0x2c)) {
    iVar2 = 0;
    if (0 < DAT_00424314) {
      do {
        if ((iVar2 < 0) || (DAT_00424314 <= iVar2)) {
          FUN_0041f075();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UnregisterClassA((LPCSTR)(uint)*(ushort *)((int)DAT_00424310 + iVar2 * 2),
                         (HINSTANCE)hInstance);
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00424314);
    }
    if (DAT_00424310 != (void *)0x0) {
      free(DAT_00424310);
      DAT_00424310 = (void *)0x0;
    }
    DAT_00424314 = 0;
    _DAT_00424318 = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_004242f4);
    DAT_004242f0 = 0;
  }
  ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
  RemoveAll((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
             *)&DAT_00424310);
  return;
}



