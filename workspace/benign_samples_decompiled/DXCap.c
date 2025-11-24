/* Function: FUN_00466932 */

void FUN_00466932(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
                 PEVENT_DATA_DESCRIPTOR param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  EVENT_DESCRIPTOR local_18;
  undefined4 local_8;
  
  local_18.Keyword._4_4_ = *(undefined4 *)(param_2 + 7);
  local_18._0_4_ = (uint)*param_2 << 0x18;
  local_18._4_4_ = ZEXT24(*(ushort *)(param_2 + 1));
  local_18.Keyword._0_4_ = *(undefined4 *)(param_2 + 3);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)&param_6->Ptr + 4) = 0;
  *(undefined4 *)&param_6->Ptr = uVar2;
  uVar1 = **(ushort **)(param_1 + 4);
  *(undefined4 *)((int)&param_6[1].Ptr + 4) = 0;
  param_6->Size = (uint)uVar1;
  param_6->Reserved = 2;
  *(byte **)&param_6[1].Ptr = param_2 + 0xb;
  param_6[1].Size = (uint)*(ushort *)(param_2 + 0xb);
  param_6[1].Reserved = 1;
  local_8 = 0xa1;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_004669d0 */

void FUN_004669d0(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int *param_9)

{
  code *pcVar1;
  int iVar2;
  
  if (param_9 != (int *)0x0) {
    if (param_2 == 0) {
      *param_9 = 0;
    }
    else if (param_2 == 1) {
      param_9[5] = param_7;
      iVar2 = 0x100;
      if ((char)param_3 != '\0') {
        iVar2 = (param_3 & 0xff) + 1;
      }
      *param_9 = iVar2;
      param_9[2] = param_4;
      param_9[3] = param_5;
      param_9[4] = param_6;
    }
    pcVar1 = (code *)param_9[8];
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_004da5e8)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00466a60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466a60(void)

{
  _DAT_004d8fec = FUN_00467fb0;
  _DAT_004d8ffc = FUN_00467fc0;
  return;
}



/* Function: FUN_00466a80 */

void FUN_00466a80(void)

{
  FUN_004c5688(FUN_004ced30);
  return;
}



/* Function: FUN_00466aa0 */

void FUN_00466aa0(void)

{
  FUN_004c5688(FUN_004ced60);
  return;
}



/* Function: FUN_00466ac0 */

void FUN_00466ac0(void)

{
  DAT_004d8fe0 = FUN_00468cf0;
  DAT_004d8fb8 = &PTR_s_WilError_03_004d71f0;
  DAT_004d8fcc = &DAT_004d8bf4;
  return;
}



/* Function: FUN_00466af0 */

void FUN_00466af0(void)

{
  DAT_004d9004 = FUN_004678f0;
  DAT_004d8fe8 = DebugBreak;
  DAT_004d9000 = FUN_00467930;
  DAT_004d8fd8 = FUN_00468dc0;
  DAT_004d8fc8 = FUN_00468ef0;
  DAT_004d9008 = FUN_00468e10;
  DAT_004d8fe4 = FUN_00468e80;
  return;
}



/* Function: FUN_00466b40 */

void FUN_00466b40(void)

{
  FUN_004c5688(FUN_004ced70);
  return;
}



/* Function: FUN_00466b60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466b60(void)

{
  int iVar1;
  
  DAT_004d908c = &DAT_004d9780;
  iVar1 = FUN_0046c8eb((LPCRITICAL_SECTION)&DAT_004d9790);
  if (-1 < iVar1) {
    _DAT_004d9784 = 0x24;
  }
  _DAT_004d9780 = &PTR_FUN_00401108;
  FUN_004c5688(FUN_004ced90);
  return;
}



/* Function: FUN_00466ba0 */

void FUN_00466ba0(void)

{
  FUN_0048b151(&DAT_004d97ac);
  FUN_004c5688(FUN_004cedb0);
  return;
}



/* Function: FUN_00466bc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466bc0(void)

{
  int iVar1;
  
  iVar1 = o___acrt_iob_func(0);
  FUN_00477a7d((undefined4 *)&DAT_004d97b0);
  _DAT_004d97b0 = std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  FUN_0048885d(&DAT_004d97b0,iVar1,0);
  FUN_004c5688(FUN_004cedc0);
  return;
}



/* Function: FUN_00466c10 */

void __fastcall FUN_00466c10(undefined4 param_1)

{
  FUN_00488e75(&DAT_004d9808,&DAT_004d97b0,param_1,1);
  FUN_004c5688(FUN_004cedd0);
  return;
}



/* Function: FUN_00466c40 */

void FUN_00466c40(void)

{
  *(undefined4 *)(&DAT_004d9844 + *(int *)(DAT_004d9808 + 4)) = DAT_004d9114;
  return;
}



/* Function: FUN_00466c60 */

void FUN_00466c60(void)

{
  FUN_004c5688(FUN_004cede0);
  return;
}



/* Function: FUN_00466c80 */

void FUN_00466c80(void)

{
  FUN_004c5688(FUN_004cedf0);
  return;
}



/* Function: FUN_00466ca0 */

void FUN_00466ca0(void)

{
  FUN_0048b151(&DAT_004d97ae);
  FUN_004c5688(FUN_004cee00);
  return;
}



/* Function: FUN_00466cc0 */

void FUN_00466cc0(void)

{
  FUN_0048b151(&DAT_004d97af);
  FUN_004c5688(FUN_004cee10);
  return;
}



/* Function: FUN_00466ce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466ce0(void)

{
  undefined4 uVar1;
  
  uVar1 = o___acrt_iob_func(1);
  FUN_0047d9b8((undefined4 *)&DAT_004d98d8);
  _DAT_004d98d8 = std::basic_filebuf<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  DAT_004d9920 = 0;
  DAT_004d9916 = 0;
  Init(0x4d98d8);
  _DAT_004d9910 = 0;
  _DAT_004d9918 = DAT_004d90b8;
  _DAT_004d991c = DAT_004d90bc;
  _DAT_004d9924 = uVar1;
  FUN_004c5688(FUN_004cee20);
  return;
}



/* Function: FUN_00466d50 */

void __fastcall FUN_00466d50(undefined4 param_1)

{
  FUN_0047d488(&DAT_004d9888,&DAT_004d98d8,param_1,1);
  FUN_004c5688(FUN_004cee30);
  return;
}



/* Function: FUN_00466d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466d80(void)

{
  _DAT_004d911c = &DAT_004d9888;
  if (DAT_004d9118 != (int *)0x0) {
    *(undefined **)(*(int *)(*DAT_004d9118 + 4) + 0x3c + (int)DAT_004d9118) = &DAT_004d9888;
  }
  if (DAT_004d9120 != (int *)0x0) {
    *(undefined **)(*(int *)(*DAT_004d9120 + 4) + 0x3c + (int)DAT_004d9120) = &DAT_004d9888;
  }
  return;
}



/* Function: FUN_00466dc0 */

void FUN_00466dc0(void)

{
  FUN_0048b983((undefined4 *)&DAT_004d723c,(int *)&PTR_vftable_004d728c,&DAT_004d6a88);
  FUN_004c5688(FUN_004cee50);
  return;
}



/* Function: FUN_00466df0 */

void FUN_00466df0(void)

{
  FUN_0048b983((undefined4 *)&DAT_004d72a4,(int *)&PTR_vftable_004d72f4,&DAT_004d6a3c);
  FUN_004c5688(FUN_004cee40);
  return;
}



/* Function: FUN_00466e20 */

void FUN_00466e20(void)

{
  FUN_0048b151(&DAT_004d9885);
  FUN_004c5688(FUN_004cee60);
  return;
}



/* Function: FUN_00466e40 */

void FUN_00466e40(void)

{
  FUN_004c5688(FUN_004cee70);
  return;
}



/* Function: FUN_00466e60 */

void FUN_00466e60(void)

{
  FUN_004c2187();
  FUN_004c5688(FUN_004cee80);
  return;
}



/* Function: FUN_00466e80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466e80(void)

{
  _DAT_004d9a00 = FUN_004c1c80;
  _DAT_004d99fc = FUN_004c1d00;
  _DAT_004d99f8 = FUN_004c1d70;
  return;
}



/* Function: FUN_00466ea5 */

undefined4 __fastcall FUN_00466ea5(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_00466f2c */

undefined4 __fastcall FUN_00466f2c(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00466f92 */

undefined4 __fastcall FUN_00466f92(short *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00467099(param_1,param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_00466fc7 */

undefined4 __thiscall FUN_00466fc7(void *this,int param_1)

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
    uVar2 = FUN_00467099((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_0046701e */

undefined4 __fastcall
FUN_0046701e(undefined2 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_004670ec((int)param_1,param_2,param_1,param_3,param_4);
  }
  return uVar1;
}



/* Function: FUN_00467055 */

undefined4 __cdecl FUN_00467055(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_004670ec((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_00467099 */

undefined4 __fastcall FUN_00467099(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_004670ec */

undefined4 __fastcall
FUN_004670ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_004c653b(param_1,uVar1,param_4,param_5);
  if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
    uVar3 = 0x8007007a;
  }
  else if (uVar2 != uVar1) {
    return 0;
  }
  *(undefined2 *)(param_1 + uVar1 * 2) = 0;
  return uVar3;
}



/* Function: FUN_00467131 */

void __fastcall FUN_00467131(undefined4 *param_1)

{
  Ordinal_6(*param_1);
  return;
}



/* Function: FUN_00467140 */

undefined4 * __fastcall FUN_00467140(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
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



/* Function: FUN_004671a0 */

void __fastcall FUN_004671a0(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_004671c0 */

char * __fastcall FUN_004671c0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_004671e0 */

undefined4 * __thiscall FUN_004671e0(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_004c56a5(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00467215 */

undefined4 * __fastcall FUN_00467215(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* Function: FUN_00467233 */

void FUN_00467233(void)

{
  undefined4 local_10 [3];
  
  FUN_00467215(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_004d6830);
}



/* Function: FUN_00467260 */

exception * __thiscall FUN_00467260(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_00467290 */

exception * __thiscall FUN_00467290(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_004672b3 */

int __fastcall FUN_004672b3(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  LOCK();
  piVar1 = param_1 + 1;
  iVar2 = *piVar1;
  iVar4 = *piVar1;
  *piVar1 = iVar2 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    pcVar3 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_004da5e8)();
    iVar4 = (*pcVar3)();
    LOCK();
    piVar1 = param_1 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      pcVar3 = *(code **)(*param_1 + 4);
      (*(code *)PTR_guard_check_icall_004da5e8)();
      iVar4 = (*pcVar3)();
    }
  }
  return iVar4;
}



/* Function: FUN_004672f9 */

short * __cdecl FUN_004672f9(short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  
  FUN_0046701e(param_1,(int)param_2 - (int)param_1 >> 1,param_3,&stack0x00000010);
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



/* Function: FUN_0046733e */

void __fastcall FUN_0046733e(short *param_1,int param_2,int param_3)

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
  
  pcVar2 = DAT_004d8fc0;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7245;
  local_10 = ExceptionList;
  local_14 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar2 != (code *)0x0) && (DAT_004d8fd0 != '\0')) {
      (*(code *)PTR_guard_check_icall_004da5e8)(param_3,param_1,param_2,local_14);
      (*pcVar2)();
      if (*param_1 != 0) goto LAB_004675ad;
    }
    memset(local_214,0,0x200);
    pcVar2 = DAT_004d8fd8;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
    }
    else if (DAT_004d8fd8 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_004da5e8)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar2)();
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_004672f9(param_1,psVar1,L"%hs!%p: ");
    }
    else {
      local_218 = FUN_004672f9(param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_004672f9(local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar3 = FUN_004672f9(local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar3 = FUN_004672f9(psVar3,psVar1,L"    ");
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar3 = FUN_004672f9(psVar3,psVar1,L"Msg:[%ws] ");
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar3 = FUN_004672f9(psVar3,psVar1,L"CallContext:[%hs] ");
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_004672f9(psVar3,psVar1,&DAT_00408f58);
        }
        else {
          FUN_004672f9(psVar3,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_004672f9(psVar3,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_004675ad:
  ExceptionList = local_10;
  FUN_004c52a0(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004675d6 */

uint * __thiscall FUN_004675d6(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00467971((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_004675fa */

LPVOID __fastcall FUN_004675fa(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_004c7275;
  local_10 = ExceptionList;
  uVar2 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_004d8fa8 == (FARPROC)0x0) {
    if (DAT_004d9025 != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_004d8fa8 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_004d9025 = '\x01';
    if (DAT_004d8fa8 == (FARPROC)0x0) {
      DAT_004d9025 = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_004d8fa8;
  (*(code *)PTR_guard_check_icall_004da5e8)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_004676aa */

undefined4 * __thiscall FUN_004676aa(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_004676e3((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_004676e3 */

void __fastcall FUN_004676e3(undefined4 *param_1)

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



/* Function: FUN_0046771a */

undefined4 __thiscall FUN_0046771a(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_004676e3((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_00467764;
    *piVar1 = 0;
    FUN_004676e3((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_00467764:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_00467773 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00467773(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004d9018;
  _DAT_004d901c = param_1;
  LOCK();
  DAT_004d9018 = DAT_004d9018 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_0046778c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0046778c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004d9030;
  _DAT_004d8fb0 = param_1;
  LOCK();
  DAT_004d9030 = DAT_004d9030 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_004677a5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004677a5(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004d9090;
  _DAT_004d902c = param_1;
  LOCK();
  DAT_004d9090 = DAT_004d9090 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_004677c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004677c0(undefined4 param_1)

{
  _DAT_004d9084 = param_1;
  return 1;
}



/* Function: FUN_004677da */

void FUN_004677da(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_004d9000;
  if (DAT_004d9000 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_0046780a */

void FUN_0046780a(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
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
      FUN_00466f2c(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_004c52a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004678f0 */

undefined * FUN_004678f0(void)

{
  if (DAT_004d9024 == '\0') {
    FUN_0046780a((LPCWSTR)FUN_004677c0,(uint *)0x0,&DAT_004d9038,0x40);
    DAT_004d9024 = '\x01';
  }
  return &DAT_004d9038;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00467920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00467930 */

void FUN_00467930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00467971 */

uint __fastcall FUN_00467971(uint param_1)

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



/* Function: FUN_00467b46 */

DWORD __fastcall
FUN_00467b46(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7298;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004694e0(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_00467bb1 */

uint __fastcall
FUN_00467bb1(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004c72bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004694e0(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_00467c32 */

void __fastcall FUN_00467c32(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00467bb1(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00467c4f */

char * __fastcall FUN_00467c4f(char *param_1)

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



/* Function: FUN_00467c6d */

int __fastcall FUN_00467c6d(short *param_1)

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



/* Function: FUN_00467c95 */

undefined1 FUN_00467c95(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_004d8fe4;
  if (DAT_004d8ff8 != '\0') {
    return 1;
  }
  if (DAT_004d8fe4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00467cc5 */

void __thiscall FUN_00467cc5(void *this,undefined4 *param_1)

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
  iVar10 = FUN_00467c6d((short *)param_1[0x12]);
  iVar1 = FUN_00467c6d((short *)param_1[0xf]);
  iVar2 = FUN_00467c6d((short *)param_1[5]);
  pcVar3 = FUN_00467c4f((char *)param_1[0x11]);
  pcVar4 = FUN_00467c4f((char *)param_1[0xe]);
  pcVar5 = FUN_00467c4f((char *)param_1[0xc]);
  pcVar6 = FUN_00467c4f((char *)param_1[9]);
  pcVar7 = FUN_00467c4f((char *)param_1[8]);
  pcVar8 = FUN_00467c4f((char *)param_1[7]);
  pcVar9 = FUN_00467c4f((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_004676e3(this_00);
    FUN_0046771a(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_00469527(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_00469597(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_00469597(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_00469597(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_00469597(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_00469597(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_00469597(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_00469527(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_00469597(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_00469527(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_00467e58 */

undefined4 * __thiscall FUN_00467e58(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__004010fc;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_00467cc5((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_00467ea0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00467ea0(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_0046733e(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_0046771a(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_004c52a0(local_8 ^ (uint)&stack0xfffffffc);
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
  FUN_00467f80((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_004c56a5(this);
  }
  return this;
}



/* Function: FUN_00467f80 */

void __fastcall FUN_00467f80(undefined4 *param_1)

{
  FUN_004676e3(param_1 + 0x1b);
  FUN_004676e3(param_1 + 0x19);
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_00467fb0 */

void FUN_00467fb0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00467fc0 */

void FUN_00467fc0(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_00467e58(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_004d685c);
}



/* Function: FUN_00467ff0 */

exception * __thiscall FUN_00467ff0(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__004010fc;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_004676aa((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_004676aa((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00468046 */

undefined4 FUN_00468046(void)

{
  code *pcVar1;
  uint in_EAX;
  uint uVar2;
  BOOL BVar3;
  
  pcVar1 = DAT_004d8fb4;
  if (DAT_004d8fbc == '\0') {
    if (DAT_004d8fb4 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      in_EAX = (uint)(BVar3 != 0);
    }
    else {
      (*(code *)PTR_guard_check_icall_004da5e8)();
      uVar2 = (*pcVar1)();
      in_EAX = uVar2 & 0xff;
    }
    if (in_EAX == 0) {
      return 0;
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}



/* Function: FUN_00468086 */

void __fastcall
FUN_00468086(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8,short *param_9,undefined4 param_10,LPCWSTR param_11,undefined4 param_12,
            undefined1 *param_13,undefined4 param_14,int *param_15)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c72de;
  local_10 = ExceptionList;
  uVar2 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar3 = *param_8;
  param_15[2] = iVar3;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar3 = FUN_00467773(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_0046778c(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_004694e0(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar4 = FUN_00467971(0x8007029c);
      param_15[3] = uVar4;
    }
    iVar3 = FUN_004677a5(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_004677c0(iVar3);
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
  iVar5 = DAT_004d9078 + 1;
  DAT_004d9078 = DAT_004d9078 + 1;
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
  param_15[0xb] = iVar3;
  param_15[0x15] = param_1;
  param_15[0xc] = 0;
  param_15[0x10] = 0;
  param_15[0x11] = 0;
  param_15[0x12] = 0;
  param_15[0xd] = 0;
  param_15[0xe] = 0;
  param_15[0xf] = 0;
  pcVar1 = DAT_004d9004;
  if (DAT_004d9004 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004da5e8)(uVar2);
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_004d8fc8;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8fe0;
  if (DAT_004d8fe0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8fdc;
  if (DAT_004d8fdc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8ff0;
  if ((DAT_004d8ff0 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004da5e8)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_0046857c();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar2 = FUN_00467971(0x8000ffff);
    param_15[3] = uVar2;
  }
  uVar7 = FUN_00468046();
  pcVar1 = DAT_004d8fc0;
  if (((char)uVar7 == '\0') || ((*(byte *)(param_15 + 1) & 2) != 0)) {
    if ((DAT_004d8fc0 != (code *)0x0) && (DAT_004d8fd0 == '\0')) {
      (*(code *)PTR_guard_check_icall_004da5e8)(param_15,0,0);
      (*pcVar1)();
    }
  }
  else {
    if ((DAT_004d8fc0 != (code *)0x0) && (DAT_004d8fd0 == '\0')) {
      (*(code *)PTR_guard_check_icall_004da5e8)(param_15,param_11,0x800);
      (*pcVar1)();
    }
    if (*param_11 == L'\0') {
      FUN_0046733e(param_11,0x800,(int)param_15);
    }
    OutputDebugStringW(param_11);
  }
  pcVar1 = DAT_004d8fe8;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_004d8fc4 != '\0')) &&
     (DAT_004d8fe8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004da5e8)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00468314 */

void __fastcall FUN_00468314(int param_1)

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
  
  pcVar1 = DAT_004d900c;
  if (DAT_004d900c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8ff4;
  if (DAT_004d8ff4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00468381;
  uVar3 = 1;
  do {
    FUN_004677da(uVar3);
    iVar2 = extraout_ECX;
LAB_00468381:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_004683a1 */

void __fastcall
FUN_004683a1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_00469620(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_004683bf */

void __fastcall
FUN_004683bf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar2 = FUN_004675d6((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_004683a1(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_00468404 */

void __fastcall FUN_00468404(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00467b46(param_1,param_2,0x408fdc,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_004675d6(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_004683a1(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_00468465 */

void __fastcall FUN_00468465(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7301;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004698d7(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004684b1 */

void __fastcall FUN_004684b1(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7324;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00469918(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004684fb */

void __fastcall FUN_004684fb(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7324;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00468404(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00468537 */

void __fastcall FUN_00468537(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7301;
  local_10 = ExceptionList;
  uVar2 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004683bf(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2);
  return;
}



/* Function: FUN_0046857c */

void FUN_0046857c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00468588 */

void FUN_00468588(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_004684fb(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004685b5 */

void FUN_004685b5(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_004684fb(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004685e0 */

void __thiscall FUN_004685e0(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_0046857c();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00467099(local_214,0x104,this,param_1);
  FUN_00466fc7(local_214,0x409014);
  uVar4 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar4 != 0) {
    uVar2 = uVar4;
  }
  iVar3 = FUN_0046901c(this,uVar4,uVar2,local_214);
  if (iVar3 < 0) {
    FUN_00468465(unaff_retaddr,0x88);
  }
  FUN_004c52a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00468683 */

undefined4 __fastcall FUN_00468683(HANDLE param_1,int *param_2)

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
    goto LAB_004686a6;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_004686a6:
        uVar2 = FUN_004684b1(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00468774:
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
        goto LAB_004686a6;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_004686a6;
          }
          if (DVar1 == 0) goto LAB_00468774;
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
  FUN_00468465(unaff_retaddr,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_0046879e */

void __thiscall FUN_0046879e(void *this,int *param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int iVar3;
  int unaff_retaddr;
  undefined1 auStack_224 [4];
  int iStack_220;
  int *local_21c;
  WCHAR local_218 [262];
  uint local_c;
  
  local_c = DAT_004d8a80 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00467099(local_218,0x104,this,(int)this);
  FUN_00466fc7(local_218,0x409014);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_004684b1(unaff_retaddr,0xcd);
    }
LAB_00468844:
    if (pvVar1 == (HANDLE)0x0) goto LAB_0046885e;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_00468683(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_00468465(unaff_retaddr,0xd3);
      goto LAB_00468844;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00468588(pvVar1);
LAB_0046885e:
  FUN_004c52a0(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_0046887d */

void __thiscall FUN_0046887d(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_00467c6d(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_00467c4f(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_00467c4f(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_004675fa(8,(SIZE_T)pcVar4);
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
    FUN_00469597(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00469597(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_00469527(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00468970 */

void __fastcall FUN_00468970(int param_1)

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



/* Function: FUN_004689df */

void __thiscall FUN_004689df(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_004675fa(8,0xdc);
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
    FUN_0046887d(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00468a9d */

DWORD * __fastcall FUN_00468a9d(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_004d8fb8;
  if (DAT_004d8fb8 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_004d8fb8[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_004690a3(*DAT_004d8fb8,&local_8);
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



/* Function: FUN_00468b26 */

uint __fastcall FUN_00468b26(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00468b26(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_004d8ac8 + 1;
        DAT_004d8ac8 = DAT_004d8ac8 + 1;
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
        pcVar5 = (char *)FUN_00466ea5(pcVar7,(uint)pcVar9,(void *)piVar2[1],(uint)pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00468be5 */

void __fastcall FUN_00468be5(int param_1,char *param_2,int param_3)

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
  puStack_c = &LAB_004c7347;
  local_10 = ExceptionList;
  uVar3 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ppvVar5 = &local_10;
  ExceptionList = ppvVar5;
  *param_2 = '\0';
  iVar7 = DAT_004d8fcc;
  local_11 = 0;
  if (DAT_004d8fcc != 0) {
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
      uVar6 = FUN_00468b26(param_1,*pDVar9,param_2,param_3);
      if ((char)uVar6 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar9;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_004da5e8)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
      ppvVar5 = (void **)0x0;
    }
  }
  pcVar1 = DAT_004d8fd4;
  if (DAT_004d8fd4 != (code *)0x0) {
    uVar8 = (uint3)((uint)ppvVar5 >> 8);
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    (*(code *)PTR_guard_check_icall_004da5e8)(iVar7,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00468cf0 */

void FUN_00468cf0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00468be5((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_004d9088 != DVar2) {
    LOCK();
    iVar1 = DAT_004d9094 + 1;
    UNLOCK();
    iVar3 = DAT_004d9094 + 1;
    DAT_004d9094 = iVar1;
    if (iVar3 < 4) {
      DAT_004d9088 = DVar2;
      this = FUN_00468a9d(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_004689df(this,param_1);
      }
      DAT_004d9088 = 0;
    }
    LOCK();
    DAT_004d9094 = DAT_004d9094 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00468d55 */

void __fastcall FUN_00468d55(LPCSTR param_1)

{
  if (DAT_004d9028 == (HMODULE)0x0) {
    DAT_004d9028 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_004d9028,param_1);
  return;
}



/* Function: FUN_00468d81 */

FARPROC __fastcall FUN_00468d81(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_004d907c == (HMODULE)0x0) &&
     (DAT_004d907c = GetModuleHandleW(L"kernelbase.dll"), DAT_004d907c == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_004d907c,param_1);
  return pFVar1;
}



/* Function: FUN_00468dc0 */

void FUN_00468dc0(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_004d9028 == (HMODULE)0x0) {
    DAT_004d9028 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_004d9028,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00468e10 */

void FUN_00468e10(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7324;
  local_10 = ExceptionList;
  uVar2 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_004d8fac == (code *)0x0) &&
     (DAT_004d8fac = (code *)FUN_00468d55("RtlNtStatusToDosErrorNoTeb"), DAT_004d8fac == (code *)0x0
     )) {
    ExceptionList = local_10;
    return;
  }
  pcVar1 = DAT_004d8fac;
  (*(code *)PTR_guard_check_icall_004da5e8)(param_1,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00468e80 */

undefined4 FUN_00468e80(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7324;
  local_10 = ExceptionList;
  uVar2 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_004d9080 == (code *)0x0) &&
     (DAT_004d9080 = (code *)FUN_00468d55("RtlDllShutdownInProgress"), DAT_004d9080 == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_004d9080;
  (*(code *)PTR_guard_check_icall_004da5e8)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_00468ef0 */

void FUN_00468ef0(undefined1 *param_1)

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
  
  puStack_c = &LAB_004c738d;
  local_10 = ExceptionList;
  uVar2 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_004d9010;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_004d9014 == (FARPROC)0x0) {
    DAT_004d9014 = FUN_00468d81("WilFailureNotifyWatchers");
    if (DAT_004d9014 == (FARPROC)0x0) goto LAB_00468f8f;
  }
  pFVar1 = DAT_004d9014;
  (*(code *)PTR_guard_check_icall_004da5e8)(0,&local_34,&local_18,uVar2);
  (*pFVar1)();
LAB_00468f8f:
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



/* Function: FUN_00468fd7 */

void __fastcall FUN_00468fd7(int *param_1)

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



/* Function: FUN_0046901c */

undefined4 __thiscall FUN_0046901c(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00467c32(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_0046906c(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_0046906c */

void __thiscall FUN_0046906c(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00468588(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004690a3 */

void __fastcall FUN_004690a3(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  int local_220 [2];
  HANDLE local_218;
  HANDLE local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00467055(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0046906c(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00467c32(extraout_ECX);
    goto LAB_004691b6;
  }
  FUN_004693ef(&local_214,&local_218);
  local_220[0] = 0;
  local_220[1] = 0;
  iVar2 = FUN_0046879e(local_210,local_220);
  if (iVar2 < 0) {
    FUN_00468465(unaff_retaddr,100);
    FUN_00468465(unaff_retaddr,0x6d);
    uVar4 = 299;
LAB_004691e4:
    FUN_00468465(unaff_retaddr,uVar4);
  }
  else {
    piVar3 = (int *)(local_220[0] << 2);
    if (piVar3 == (int *)0x0) {
      iVar2 = FUN_004692d7((int)local_210,&local_214,param_2);
      if (iVar2 < 0) {
        uVar4 = 0x134;
        goto LAB_004691e4;
      }
    }
    else {
      *param_2 = piVar3;
      *(int *)*param_2 = *piVar3 + 1;
    }
  }
  if (local_218 != (HANDLE)0x0) {
    FUN_004685b5(local_218);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00468588(local_214);
  }
LAB_004691b6:
  FUN_004c52a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004691f6 */

int __fastcall FUN_004691f6(int *param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int *piVar4;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00467c95();
  if (cVar1 == '\0') {
    iVar2 = FUN_004693ef(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar4 = local_8;
    if (*param_1 == 0) {
      FUN_0046906c(param_1 + 2,0);
      FUN_0046906c(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar3 = GetLastError();
        FUN_004685b5(local_8);
        SetLastError(DVar3);
      }
      FUN_00469285((int)param_1);
      DVar3 = 0;
      hHeap = GetProcessHeap();
      iVar2 = HeapFree(hHeap,DVar3,param_1);
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = FUN_004685b5(piVar4);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    iVar2 = *param_1;
  }
  return iVar2;
}



/* Function: FUN_00469285 */

void __fastcall FUN_00469285(int param_1)

{
  FUN_00469394((int *)(param_1 + 0x18));
  FUN_004692b0((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00468588(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_004692b0 */

void __fastcall FUN_004692b0(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00468588((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00468588((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_004692d7 */

int __fastcall FUN_004692d7(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_004675fa(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00468465(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_0046857c();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_004685e0(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00468465(unaff_retaddr,0x14b);
    }
    else {
      FUN_00469452(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_004692b0(local_10);
  }
  FUN_00469432((int *)&local_18);
  return iVar3;
}



/* Function: FUN_00469394 */

void __fastcall FUN_00469394(int *param_1)

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
        FUN_00468970((int)lpMem + 8);
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



/* Function: FUN_004693ef */

void __thiscall FUN_004693ef(void *this,undefined4 *param_1)

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
    FUN_00468537(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00469432 */

void __fastcall FUN_00469432(int *param_1)

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



/* Function: FUN_00469452 */

undefined4 * __thiscall FUN_00469452(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_004694b6 */

void __thiscall FUN_004694b6(void *this,int param_1)

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



/* Function: FUN_004694e0 */

void __fastcall
FUN_004694e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00467971(param_7);
  local_8 = 0;
  FUN_004695fa(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_00469527 */

void * __fastcall FUN_00469527(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_00467c6d(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_00466ea5(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_00469597 */

char * __fastcall FUN_00469597(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_00467c4f(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      FUN_00466ea5(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar1);
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



/* Function: FUN_004695fa */

void __fastcall
FUN_004695fa(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_004699a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00469620 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00469620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
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
  WCHAR local_1414 [2048];
  undefined1 local_414 [1024];
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004c73b0;
  local_10 = ExceptionList;
  uStack_14 = 0x46963d;
  uVar2 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_141c = param_6;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_1420 = param_1;
  local_1418 = param_2;
  local_1450 = FUN_004677c0(local_1474);
  local_147c = 3;
  local_1478 = 0;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  LOCK();
  UNLOCK();
  local_146c = DAT_004d9078 + 1;
  local_1468 = 0;
  DAT_004d9078 = DAT_004d9078 + 1;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_004d9004;
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
  if (DAT_004d9004 == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004da5e8)(uVar2);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_004d8fc8;
  if (DAT_004d8fc8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8fe0;
  if (DAT_004d8fe0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8fdc;
  if (DAT_004d8fdc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8ff0;
  if ((DAT_004d8ff0 != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004da5e8)(&local_147c);
    (*pcVar1)();
  }
  if (-1 < local_1474) {
    local_1474 = -0x7fff0001;
    local_1470 = FUN_00467971(0x8000ffff);
  }
  uVar3 = FUN_00468046();
  pcVar1 = DAT_004d8fc0;
  if (((char)uVar3 == '\0') || ((local_1478 & 2) != 0)) {
    if ((DAT_004d8fc0 != (code *)0x0) && (DAT_004d8fd0 == '\0')) {
      (*(code *)PTR_guard_check_icall_004da5e8)(&local_147c,0,0);
      (*pcVar1)();
    }
  }
  else {
    if ((DAT_004d8fc0 != (code *)0x0) && (DAT_004d8fd0 == '\0')) {
      (*(code *)PTR_guard_check_icall_004da5e8)(&local_147c,local_1414,0x800);
      (*pcVar1)();
    }
    if (local_1414[0] == L'\0') {
      FUN_0046733e(local_1414,0x800,(int)&local_147c);
    }
    OutputDebugStringW(local_1414);
  }
  pcVar1 = DAT_004d8fe8;
  if ((((local_1478 & 4) != 0) || (DAT_004d8fc4 != '\0')) && (DAT_004d8fe8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004da5e8)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  FUN_00468314((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004698c6 */

void __fastcall FUN_004698c6(undefined4 param_1,undefined4 param_2)

{
  FUN_00469a46(param_1,param_2);
  return;
}



/* Function: FUN_004698d7 */

void __fastcall FUN_004698d7(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_00467971(in_stack_00000014);
  FUN_004698c6(param_1,param_2);
  return;
}



/* Function: FUN_00469918 */

uint __fastcall FUN_00469918(int param_1,int param_2)

{
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = FUN_00467bb1(param_1,param_2,0x408fd8,param_1,param_1,in_stack_00000010);
  FUN_00467971(uVar1);
  FUN_004698c6(param_1,param_2);
  return uVar1;
}



/* Function: FUN_0046996d */

void __fastcall FUN_0046996d(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((0xfff < param_2) && (iVar2 = *(int *)(param_1 + -4), 0x1f < (param_1 - iVar2) - 4U)) {
    o__invalid_parameter_noinfo_noreturn();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004c56a5(iVar2);
  return;
}



/* Function: FUN_004699a0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_004699a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_004d8a80 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00468086(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_004c52a0(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_00468314((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00469a46 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00469a46(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
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
  WCHAR local_1414 [2048];
  undefined1 local_414 [1024];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004c73d6;
  local_10 = ExceptionList;
  uVar2 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1418 = in_stack_00000010;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_146c = *in_stack_00000014;
  local_1468 = in_stack_00000014[1];
  local_141c = param_1;
  local_14 = uVar2;
  local_1448 = FUN_0046778c(local_146c);
  local_1470 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1470 = 8;
  }
  local_1474 = 1;
  LOCK();
  UNLOCK();
  local_1464 = DAT_004d9078 + 1;
  local_1460 = 0;
  DAT_004d9078 = DAT_004d9078 + 1;
  local_145c = GetCurrentThreadId();
  pcVar1 = DAT_004d9004;
  local_1424 = local_1418;
  local_1420 = local_141c;
  local_1450 = &DAT_00408fd8;
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
  if (DAT_004d9004 == (code *)0x0) {
    local_1428 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004da5e8)(uVar2);
    local_1428 = (*pcVar1)();
  }
  pcVar1 = DAT_004d8fc8;
  if (DAT_004d8fc8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(&local_1474);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8fe0;
  if (DAT_004d8fe0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(&local_1474,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8fdc;
  if (DAT_004d8fdc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004da5e8)(&local_1474);
    (*pcVar1)();
  }
  pcVar1 = DAT_004d8ff0;
  if ((DAT_004d8ff0 != (code *)0x0) && ((local_1470 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004da5e8)(&local_1474);
    (*pcVar1)();
  }
  if (local_146c < 0) {
    uVar3 = FUN_00468046();
    pcVar1 = DAT_004d8fc0;
    if (((char)uVar3 == '\0') || ((local_1470 & 2) != 0)) {
      if ((DAT_004d8fc0 != (code *)0x0) && (DAT_004d8fd0 == '\0')) {
        (*(code *)PTR_guard_check_icall_004da5e8)(&local_1474,0,0);
        (*pcVar1)();
      }
    }
    else {
      if ((DAT_004d8fc0 != (code *)0x0) && (DAT_004d8fd0 == '\0')) {
        (*(code *)PTR_guard_check_icall_004da5e8)(&local_1474,local_1414,0x800);
        (*pcVar1)();
      }
      if (local_1414[0] == L'\0') {
        FUN_0046733e(local_1414,0x800,(int)&local_1474);
      }
      OutputDebugStringW(local_1414);
    }
    pcVar1 = DAT_004d8fe8;
    if ((((local_1470 & 4) != 0) || (DAT_004d8fc4 != '\0')) && (DAT_004d8fe8 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_004da5e8)();
      (*pcVar1)();
    }
    local_8 = 0xffffffff;
    if ((local_1470 & 1) == 0) {
      ExceptionList = local_10;
      FUN_004c52a0(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    FUN_0046857c();
  }
  FUN_00468314((int)&local_1474);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00469cf9 */

void * __fastcall FUN_00469cf9(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  
  if (param_1 < 0x1000) {
    if (param_1 != 0) {
      uStack_8 = 0x469d33;
      pvVar1 = operator_new(param_1);
      return pvVar1;
    }
    return (void *)0x0;
  }
  if (param_1 < param_1 + 0x23) {
    uStack_8 = 0x469d12;
    pvVar1 = operator_new(param_1 + 0x23);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = (void *)((int)pvVar1 + 0x23U & 0xffffffe0);
      *(void **)((int)pvVar2 + -4) = pvVar1;
      return pvVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00469d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)o__invalid_parameter_noinfo_noreturn();
    return pvVar1;
  }
  FUN_00467215(auStack_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_10,(ThrowInfo *)&DAT_004d6830);
}



/* Function: FUN_00469d3e */

void __fastcall FUN_00469d3e(int param_1)

{
  FUN_0046cf92((int *)(param_1 + 0x44));
  FUN_0046b1dc((int *)(param_1 + 0x3c));
  FUN_00469d62(param_1 + 4);
  return;
}



/* Function: FUN_00469d62 */

void __fastcall FUN_00469d62(int param_1)

{
  ~CComPtr<>((int *)(param_1 + 0x30));
  ~CComPtr<>((int *)(param_1 + 0x2c));
  ~CComPtr<>((int *)(param_1 + 0x18));
  return;
}



/* Function: thunk_FUN_0046b1dc */

void __fastcall thunk_FUN_0046b1dc(int *param_1)

{
  FUN_0046b48a(param_1,*(int **)(*param_1 + 4));
  FUN_0046996d(*param_1,0x58);
  return;
}



/* Function: FUN_00469d91 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_00469d91(undefined4 *param_1)

{
  void *pvVar1;
  
  FUN_0049eed3(param_1,(int *)&stack0x00000004,'\0');
  *param_1 = &PTR_FUN_00401168;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  pvVar1 = FUN_00469cf9(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  param_1[0x1e] = pvVar1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x23,4,2,FUN_0046b1d0,FUN_00469e70);
  _eh_vector_constructor_iterator_(param_1 + 0x2c,4,2,FUN_0046b1d0,FUN_00469e70);
  param_1[0x2f] = 0;
  param_1[0x31] = 0xffffffff;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((int)param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0x137) = 0;
  FUN_0046b1dc((int *)&stack0x00000004);
  return param_1;
}



/* Function: FUN_00469e70 */

void __fastcall FUN_00469e70(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7324;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004da5e8)(piVar1,DAT_004d8a80 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = pvStack_10;
  return;
}



/* Function: thunk_FUN_0046b1a1 */

void __fastcall thunk_FUN_0046b1a1(int *param_1)

{
  FUN_0046b441(param_1,*(int **)(*param_1 + 4));
  FUN_0046996d(*param_1,0x18);
  return;
}



/* Function: FUN_00469e90 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_00469e90(int *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  int local_2c [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x469e9c;
  pcVar1 = *(code **)(*param_1 + 0x48);
  (*(code *)PTR_guard_check_icall_004da5e8)(param_1);
  DVar2 = (*pcVar1)();
  if ((int)DVar2 < 0) {
    FUN_004b1af9(local_2c,DVar2);
    local_8 = 0;
    FUN_00481830(L"DXCap: force TDR failed: Please run as administrator. Error text: %s\n");
    FUN_0046cf92(local_2c);
  }
  FUN_004c693e();
  return;
}



/* Function: FUN_00469f00 */

int __thiscall FUN_00469f00(void *this,byte param_1)

{
  FUN_0046c95a((int)this);
  FUN_0046c95a((int)this);
  if ((param_1 & 1) != 0) {
    FUN_004c56a5(this);
  }
  return (int)this;
}



/* Function: FUN_00469f31 */

/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00469f31(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  LPCOLESTR ****lpsz;
  HRESULT HVar5;
  void *this;
  undefined4 *puVar6;
  undefined4 *****pppppuVar7;
  undefined4 *puVar8;
  int local_154;
  int local_150 [18];
  int local_108 [4];
  int local_f8;
  undefined4 local_f0 [12];
  int local_c0 [6];
  int local_a8 [18];
  LPCOLESTR ***local_60 [5];
  uint local_4c;
  int local_48 [6];
  undefined4 ****local_30 [2];
  CLSID local_28 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x160;
  local_154 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_0046ce57(local_c0,"c");
  local_8._0_1_ = 2;
  FUN_004b204f(param_2,local_108,(char *)local_c0);
  local_8._0_1_ = 4;
  FUN_0046cd6b(local_c0);
  if (local_f8 == 0) {
    FUN_0046ce57(local_60,"p");
    local_8 = CONCAT31(local_8._1_3_,0xb);
    iVar4 = FUN_004b204f(param_2,local_a8,(char *)local_60);
    local_8 = 0xc;
    bVar2 = false;
    bVar1 = false;
    if (*(int *)(iVar4 + 0x10) == 0) {
LAB_0046a13d:
      bVar3 = false;
    }
    else {
      FUN_0046ce57(local_48,"launch");
      local_8 = 0xd;
      iVar4 = FUN_004b204f(param_2,local_150,(char *)local_48);
      bVar2 = true;
      bVar1 = true;
      bVar3 = true;
      if (*(int *)(iVar4 + 0x10) != 0) goto LAB_0046a13d;
    }
    if (bVar1) {
      FUN_0046a626(local_150);
    }
    if (bVar2) {
      FUN_0046cd6b(local_48);
    }
    FUN_0046a626(local_a8);
    local_8 = 4;
    FUN_0046cd6b((int *)local_60);
    if (bVar3) {
      puVar6 = (undefined4 *)operator_new(100);
      local_8._0_1_ = 0xe;
      FUN_0046b206(local_28[0].Data4,param_2);
      local_8._0_1_ = 0xf;
      FUN_0049eed3(puVar6,(int *)local_28[0].Data4,'\0');
      *puVar6 = &PTR_FUN_00401198;
    }
    else {
      FUN_0046ce57(local_48,"e");
      local_8._0_1_ = 0x10;
      iVar4 = FUN_004b204f(param_2,local_a8,(char *)local_48);
      iVar4 = *(int *)(iVar4 + 0x10);
      FUN_0046a626(local_a8);
      local_8._0_1_ = 4;
      FUN_0046cd6b(local_48);
      if (iVar4 == 0) {
        FUN_0046ce57(local_48,"v");
        local_8._0_1_ = 0x13;
        iVar4 = FUN_004b204f(param_2,local_a8,(char *)local_48);
        iVar4 = *(int *)(iVar4 + 0x10);
        FUN_0046a626(local_a8);
        local_8._0_1_ = 4;
        FUN_0046cd6b(local_48);
        if (iVar4 != 0) {
          puVar6 = (undefined4 *)operator_new(0x4e0);
          local_8._0_1_ = 0x14;
          FUN_0046b206(&stack0xfffffe78,param_2);
          puVar6 = FUN_00469d91(puVar6);
          goto LAB_0046a59c;
        }
        FUN_0046ce57(local_48,"launch");
        local_8._0_1_ = 0x15;
        iVar4 = FUN_004b204f(param_2,local_a8,(char *)local_48);
        iVar4 = *(int *)(iVar4 + 0x10);
        FUN_0046a626(local_a8);
        local_8._0_1_ = 4;
        FUN_0046cd6b(local_48);
        if (iVar4 == 0) {
          FUN_0046ce57(local_48,"measure");
          local_8._0_1_ = 0x18;
          iVar4 = FUN_004b204f(param_2,local_a8,(char *)local_48);
          iVar4 = *(int *)(iVar4 + 0x10);
          FUN_0046a626(local_a8);
          local_8._0_1_ = 4;
          FUN_0046cd6b(local_48);
          if (iVar4 == 0) {
            FUN_0046ce57(local_48,"analyze");
            local_8._0_1_ = 0x1b;
            iVar4 = FUN_004b204f(param_2,local_a8,(char *)local_48);
            iVar4 = *(int *)(iVar4 + 0x10);
            FUN_0046a626(local_a8);
            local_8._0_1_ = 4;
            FUN_0046cd6b(local_48);
            if (iVar4 == 0) {
              FUN_0046ce57(local_48,"reference");
              local_8._0_1_ = 0x1e;
              iVar4 = FUN_004b204f(param_2,local_a8,(char *)local_48);
              iVar4 = *(int *)(iVar4 + 0x10);
              FUN_0046a626(local_a8);
              local_8._0_1_ = 4;
              FUN_0046cd6b(local_48);
              if (iVar4 == 0) {
                FUN_0046ce57(local_48,"forcetdr");
                local_8._0_1_ = 0x21;
                iVar4 = FUN_004b204f(param_2,local_a8,(char *)local_48);
                iVar4 = *(int *)(iVar4 + 0x10);
                FUN_0046a626(local_a8);
                local_8._0_1_ = 4;
                FUN_0046cd6b(local_48);
                if (iVar4 == 0) {
                  FUN_0046ce57(local_48,"gc");
                  local_8._0_1_ = 0x24;
                  iVar4 = FUN_004b204f(param_2,local_a8,(char *)local_48);
                  iVar4 = *(int *)(iVar4 + 0x10);
                  FUN_0046a626(local_a8);
                  local_8._0_1_ = 4;
                  FUN_0046cd6b(local_48);
                  if (iVar4 == 0) goto LAB_0046a5a7;
                  puVar6 = (undefined4 *)operator_new(100);
                  local_8._0_1_ = 0x25;
                  FUN_0046b206(local_28[0].Data4,param_2);
                  local_8._0_1_ = 0x26;
                  FUN_0049eed3(puVar6,(int *)local_28[0].Data4,'\x01');
                  *puVar6 = &PTR_FUN_004011b0;
                }
                else {
                  puVar6 = (undefined4 *)operator_new(100);
                  local_8._0_1_ = 0x22;
                  FUN_0046b206(local_28[0].Data4,param_2);
                  local_8._0_1_ = 0x23;
                  FUN_0049eed3(puVar6,(int *)local_28[0].Data4,'\0');
                  *puVar6 = &PTR_FUN_00401120;
                }
              }
              else {
                puVar6 = (undefined4 *)operator_new(0x84);
                local_8._0_1_ = 0x1f;
                FUN_0046b206(local_28[0].Data4,param_2);
                local_8._0_1_ = 0x20;
                FUN_0049eed3(puVar6,(int *)local_28[0].Data4,'\0');
                *puVar6 = &PTR_FUN_00401180;
                puVar8 = puVar6 + 0x19;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar8 = 0;
                  puVar8 = puVar8 + 1;
                }
              }
              goto LAB_0046a593;
            }
            puVar6 = (undefined4 *)operator_new(0x68);
            local_8._0_1_ = 0x1c;
            FUN_0046b206(local_28[0].Data4,param_2);
            local_8._0_1_ = 0x1d;
          }
          else {
            puVar6 = (undefined4 *)operator_new(0x68);
            local_8._0_1_ = 0x19;
            FUN_0046b206(local_28[0].Data4,param_2);
            local_8._0_1_ = 0x1a;
          }
          FUN_0049eed3(puVar6,(int *)local_28[0].Data4,'\0');
          *puVar6 = &PTR_FUN_00401138;
        }
        else {
          puVar6 = (undefined4 *)operator_new(100);
          local_8._0_1_ = 0x16;
          FUN_0046b206(local_28[0].Data4,param_2);
          local_8._0_1_ = 0x17;
          FUN_0049eed3(puVar6,(int *)local_28[0].Data4,'\0');
          *puVar6 = &PTR_FUN_00401150;
        }
      }
      else {
        puVar6 = (undefined4 *)operator_new(100);
        local_8._0_1_ = 0x11;
        FUN_0046b206(local_28[0].Data4,param_2);
        local_8._0_1_ = 0x12;
        FUN_0049eed3(puVar6,(int *)local_28[0].Data4,'\0');
        *puVar6 = &PTR_FUN_004011c8;
      }
    }
LAB_0046a593:
    FUN_0046b1dc((int *)local_28[0].Data4);
  }
  else {
    FUN_0046cf05(local_30,local_f0);
    pppppuVar7 = local_30;
    if (7 < (uint)local_28[0].Data4._4_4_) {
      pppppuVar7 = (undefined4 *****)local_30[0];
    }
    iVar4 = FUN_0046b2af((int)pppppuVar7,local_28[0].Data4._0_4_,0,0x2c);
    FUN_0046cf92((int *)local_30);
    if (iVar4 != -1) {
      FUN_0046cf05(local_48,local_f0);
      local_8._0_1_ = 5;
      FUN_0046cd14(local_48,local_60,0,0x26);
      local_8._0_1_ = 7;
      FUN_0046cf92(local_48);
      lpsz = local_60;
      if (7 < local_4c) {
        lpsz = (LPCOLESTR ****)local_60[0];
      }
      HVar5 = CLSIDFromString((LPCOLESTR)lpsz,local_28);
      if (HVar5 < 0) {
        puVar6 = (undefined4 *)operator_new(0x94);
        local_8._0_1_ = 9;
        FUN_0046b206(&stack0xfffffe78,param_2);
        iVar4 = FUN_004a619b(puVar6);
      }
      else {
        this = operator_new(0x94);
        local_8._0_1_ = 8;
        iVar4 = FUN_004a5dc5(this,param_2);
      }
      FUN_0046b090(&local_154,iVar4);
      FUN_0046cf92((int *)local_60);
      goto LAB_0046a5a7;
    }
    puVar6 = (undefined4 *)operator_new(100);
    local_8._0_1_ = 10;
    FUN_0049eed3(puVar6,param_2,'\x01');
    *puVar6 = &PTR_FUN_004011e0;
  }
LAB_0046a59c:
  FUN_0046b090(&local_154,(int)puVar6);
LAB_0046a5a7:
  FUN_0046a626(local_108);
  iVar4 = local_154;
  local_154 = 0;
  *param_1 = iVar4;
  FUN_0046b0bd(&local_154);
  FUN_0046a61a();
  return;
}



/* Function: Catch@0046a5d6 */

undefined * Catch_0046a5d6(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x16c) + 4);
  (*(code *)PTR_guard_check_icall_004da5e8)();
  (*pcVar1)();
  FUN_00481830(&DAT_0040d0a0);
  **(undefined4 **)(unaff_EBP + -0x164) = 0;
  return &DAT_0046a609;
}



/* Function: FUN_0046a61a */

void FUN_0046a61a(void)

{
  FUN_004c6953();
  return;
}



/* Function: FUN_0046a626 */

void __fastcall FUN_0046a626(int *param_1)

{
  FUN_0046cf92(param_1 + 0xc);
  FUN_0046cf92(param_1 + 6);
  FUN_0046cf92(param_1);
  return;
}



/* Function: FUN_0046a649 */

void __fastcall FUN_0046a649(char param_1)

{
  FUN_00481934(L"xperf.exe",L"-stop DxProviders");
  FUN_00481934(L"xperf.exe",L"-stop");
  if (param_1 == '\0') {
    FUN_00481934(L"xperf.exe",L"-merge kernel.etl dx.etl merged.etl");
    return;
  }
  o__wunlink(L"kernel.etl");
  o__wunlink(L"dx.etl");
  return;
}



/* Function: FUN_0046a6a0 */

void FUN_0046a6a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00481934(L"xperf.exe",L"-on CSWITCH+LOADER+PROC_THREAD+DISPATCHER -f kernel.etl");
  if (iVar1 == 0) {
    iVar1 = FUN_00481934(L"xperf.exe",
                         L"-start DxProviders -on db6f6ddb-ac77-4e88-8253-819df9bbf140:0xffffffffffffffff:6+5d8087dd-3a9b-4f56-90df-49196cdc4f11:0xffffffffffffffff:6+802ec45a-1e99-4b83-9920-87c98277ba9d:0xffffffffffffffff+CA11C036-0102-4A2D-A6AD-F03CFED5D3C9:0xf:6 -f dx.etl"
                        );
    if (iVar1 == 0) {
      iVar1 = FUN_00481934(L"xperf.exe",
                           L"-capturestate DxProviders db6f6ddb-ac77-4e88-8253-819df9bbf140:0xffffffffffffffff:6+5d8087dd-3a9b-4f56-90df-49196cdc4f11:0xffffffffffffffff:6+802ec45a-1e99-4b83-9920-87c98277ba9d:0xffffffffffffffff+CA11C036-0102-4A2D-A6AD-F03CFED5D3C9:0xf:6"
                          );
      if (iVar1 == 0) {
        return;
      }
    }
  }
  FUN_00481830(L"Failed to start trace.  Try re-running with administrative credentials.");
  FUN_0046a649('\x01');
  return;
}



/* Function: FUN_0046a6f3 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0046a6f3(int *param_1)

{
  wchar_t wVar1;
  ushort uVar2;
  code *pcVar3;
  byte bVar4;
  LPWSTR pWVar5;
  DWORD DVar6;
  int iVar7;
  ushort *****pppppuVar8;
  short *****pppppsVar9;
  int *piVar10;
  ushort *puVar11;
  short *****pppppsVar12;
  uint uVar13;
  bool bVar14;
  undefined ***pppuVar15;
  wchar_t *pwVar16;
  undefined **local_2f8;
  undefined **local_2f4;
  int *local_2f0;
  int *local_2ec;
  int local_2e8 [2];
  char local_2dd;
  int *local_2dc;
  _OSVERSIONINFOW local_2d8;
  int local_1c4 [18];
  int local_17c [4];
  int local_16c;
  undefined4 local_164 [12];
  int local_134 [4];
  int local_124;
  undefined4 local_11c [12];
  short ***local_ec [6];
  ushort ****local_d4 [5];
  uint local_c0;
  ushort ****local_bc [5];
  uint local_a8;
  int local_a4 [18];
  int local_5c [6];
  short ****local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  short ****local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2e8;
  local_8 = 0x46a702;
  uVar13 = 0;
  local_2ec = (int *)0x0;
  FUN_0046cb40(0x4d71f8);
  FUN_0046ca8a();
  OutputDebugStringW(L"DXCap command line:");
  pWVar5 = GetCommandLineW();
  OutputDebugStringW(pWVar5);
  OutputDebugStringW(L"\n");
  OutputDebugStringW(L"\n");
  local_2f8 = &PTR_FUN_00401104;
  local_2f4 = &PTR_u_help_004d7008;
  iVar7 = *param_1;
  pppuVar15 = &local_2f8;
  pWVar5 = GetCommandLineW();
  FUN_004b1cae(local_2e8,pWVar5,pppuVar15);
  local_8 = 0;
  FUN_0046ce57(&local_44,"log");
  local_8._0_1_ = 1;
  FUN_004b204f(local_2e8,local_17c,(char *)&local_44);
  local_8._0_1_ = 3;
  FUN_0046cd6b((int *)&local_44);
  if (local_16c == 0) {
    FUN_004b27bb((short *)0x0);
  }
  else {
    FUN_0046cf05(&local_2c,local_164);
    uVar13 = 0x10;
    local_8._0_1_ = 4;
    pppppsVar9 = &local_2c;
    if (7 < local_18) {
      pppppsVar9 = (short *****)local_2c;
    }
    FUN_004b27bb((short *)pppppsVar9);
    local_8._0_1_ = 3;
    FUN_0046cf92((int *)&local_2c);
  }
  FUN_0046ce57(local_5c,"error");
  local_8._0_1_ = 5;
  FUN_004b204f(local_2e8,local_134,(char *)local_5c);
  local_8._0_1_ = 7;
  FUN_0046cd6b(local_5c);
  if (local_124 != 0) {
    FUN_0046cf05(&local_2c,local_11c);
    pppppsVar9 = &local_2c;
    if (7 < local_18) {
      pppppsVar9 = (short *****)local_2c;
    }
    DVar6 = o_wcstoul(pppppsVar9,0,0x10);
    FUN_0046cf92((int *)&local_2c);
    FUN_004b1af9(local_ec,DVar6);
    local_8._0_1_ = 8;
    FUN_00481830(L"Error 0x%08x is %s\n");
    pppppsVar9 = (short *****)local_ec;
    goto LAB_0046accc;
  }
  if (iVar7 < 2) {
    FUN_00481830(
                L"\nDXCap.exe: Capture and replay of Direct3D rendering. There are several modes:\n\nTo launch and capture : DXCap.exe [options] -c <exe-name> [args-for-exe]\nTo play a recording   : DXCap.exe -p [filename] [options] \nEnum store apps       : DXCap.exe -e [searchstring]\nDriver validation     : DXCap.exe -v [options]\nGPU Usage Collection  : DXCap.exe -usage -[start|stop]\nShow current sysinfo  : DXCap.exe -info\n\nMore details on these modes:\n  -c                 The next argument must be one of:\n                         exename             Capture a desktop executable\n                         package,appid       Capture a store app\n                         guid,uri            Capture a phone app\n                     -c must be the last option on the command line, since the\n                     rest of the command line is passed to the exe itself.\n  -p [filename]      Play back a capture file. The filename can be specified\n                     immediately after -p, or the -file option can be used.\n                     If neither file specification is given, DXCap.exe\n                     will take the most recent capture file name, which is\n                     stored in the registry.\n  -e [search]        Enumerate installed app packages. If the next argument\n                     is given, the results will be restricted to those\n                     packages that contain \"searchstring\" in their name.\n  -v                 Driver validation mode: Play the file to both hardware\n                     and WARP, detecting differences. Follow with:\n                         -examine <list> Restrict difference checks to a comma-\n                                         separated list. Default is all of:\n                                         present,draw,copy,clear\n                         -haltonfail     Pause for keystroke on differences\n                         -exitonfail     Exit, return 0 (or 1 otherwise)\n                         -showprogress   Display WARP on left, h/w on right.\n  -info              Show machine info and de..." /* TRUNCATED STRING LITERAL */
                );
LAB_0046afda:
    if (DAT_004d9154 != 0) {
      o_fclose(DAT_004d9154);
    }
    FUN_0046ca20(0x4d71f8);
    goto LAB_0046aff5;
  }
  FUN_0046ce57(&local_44,"help");
  local_8 = CONCAT31(local_8._1_3_,9);
  local_2ec = (int *)(uVar13 | 1);
  local_2dc = local_2ec;
  iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)&local_44);
  local_8 = 10;
  piVar10 = (int *)(uVar13 | 3);
  local_2ec = piVar10;
  local_2dc = piVar10;
  if (*(int *)(iVar7 + 0x10) == 0) {
    FUN_0046ce57(&local_2c,"?");
    piVar10 = local_2dc;
    local_8 = 0xb;
    local_2ec = (int *)((uint)local_2dc | 4);
    local_2dc = local_2ec;
    iVar7 = FUN_004b204f(local_2e8,local_1c4,(char *)&local_2c);
    local_2dd = '\0';
    piVar10 = (int *)((uint)piVar10 | 0xc);
    if (*(int *)(iVar7 + 0x10) != 0) goto LAB_0046a93d;
  }
  else {
LAB_0046a93d:
    local_2dd = '\x01';
  }
  if (((uint)piVar10 & 8) != 0) {
    local_2dc = (int *)((uint)piVar10 & 0xfffffff7);
    FUN_0046a626(local_1c4);
    piVar10 = local_2dc;
  }
  if (((uint)piVar10 & 4) != 0) {
    local_2dc = (int *)((uint)piVar10 & 0xfffffffb);
    FUN_0046cd6b((int *)&local_2c);
    piVar10 = local_2dc;
  }
  if (((uint)piVar10 & 2) != 0) {
    local_2dc = (int *)((uint)piVar10 & 0xfffffffd);
    FUN_0046a626(local_a4);
    piVar10 = local_2dc;
  }
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  if (((uint)piVar10 & 1) != 0) {
    FUN_0046cd6b((int *)&local_44);
  }
  if (local_2dd == '\0') {
    FUN_0046ce57(&local_2c,"info");
    local_8._0_1_ = 0xc;
    iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)&local_2c);
    iVar7 = *(int *)(iVar7 + 0x10);
    FUN_0046a626(local_a4);
    local_8._0_1_ = 7;
    FUN_0046cd6b((int *)&local_2c);
    if (iVar7 == 0) {
      FUN_0046ce57(&local_2c,"usage");
      local_8._0_1_ = 0xf;
      iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)&local_2c);
      iVar7 = *(int *)(iVar7 + 0x10);
      FUN_0046a626(local_a4);
      local_8._0_1_ = 7;
      FUN_0046cd6b((int *)&local_2c);
      if (iVar7 != 0) {
        iVar7 = FUN_00481934(L"Xperf.exe",L"");
        if (iVar7 == 0) {
          FUN_0046ce57(&local_2c,"usage");
          local_8._0_1_ = 0x10;
          iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)&local_2c);
          local_8._0_1_ = 0x11;
          FUN_0046cf05(local_bc,(undefined4 *)(iVar7 + 0x18));
          pppppuVar8 = local_bc;
          if (7 < local_a8) {
            pppppuVar8 = (ushort *****)local_bc[0];
          }
          pwVar16 = L"start";
          do {
            wVar1 = *(wchar_t *)pppppuVar8;
            bVar14 = (ushort)wVar1 < (ushort)*pwVar16;
            if (wVar1 != *pwVar16) {
LAB_0046ab43:
              uVar13 = -(uint)bVar14 | 1;
              goto LAB_0046ab48;
            }
            if (wVar1 == L'\0') break;
            wVar1 = *(wchar_t *)((int)pppppuVar8 + 2);
            bVar14 = (ushort)wVar1 < (ushort)pwVar16[1];
            if (wVar1 != pwVar16[1]) goto LAB_0046ab43;
            pppppuVar8 = pppppuVar8 + 1;
            pwVar16 = pwVar16 + 2;
          } while (wVar1 != L'\0');
          uVar13 = 0;
LAB_0046ab48:
          FUN_0046cf92((int *)local_bc);
          FUN_0046a626(local_a4);
          local_8._0_1_ = 7;
          FUN_0046cd6b((int *)&local_2c);
          if (uVar13 == 0) {
            FUN_0046a6a0();
            goto LAB_0046aff5;
          }
          FUN_0046ce57(&local_2c,"usage");
          local_8._0_1_ = 0x12;
          iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)&local_2c);
          local_8._0_1_ = 0x13;
          FUN_0046cf05(local_d4,(undefined4 *)(iVar7 + 0x18));
          puVar11 = &DAT_0040e098;
          pppppuVar8 = local_d4;
          if (7 < local_c0) {
            pppppuVar8 = (ushort *****)local_d4[0];
          }
          do {
            uVar2 = *(ushort *)pppppuVar8;
            bVar14 = uVar2 < *puVar11;
            if (uVar2 != *puVar11) {
LAB_0046abef:
              uVar13 = -(uint)bVar14 | 1;
              goto LAB_0046abf4;
            }
            if (uVar2 == 0) break;
            uVar2 = *(ushort *)((int)pppppuVar8 + 2);
            bVar14 = uVar2 < puVar11[1];
            if (uVar2 != puVar11[1]) goto LAB_0046abef;
            pppppuVar8 = pppppuVar8 + 1;
            puVar11 = puVar11 + 2;
          } while (uVar2 != 0);
          uVar13 = 0;
LAB_0046abf4:
          FUN_0046cf92((int *)local_d4);
          FUN_0046a626(local_a4);
          local_8._0_1_ = 7;
          FUN_0046cd6b((int *)&local_2c);
          if (uVar13 == 0) {
            FUN_0046a649('\0');
            goto LAB_0046aff5;
          }
          pwVar16 = L"Requires either start or stop after -usage!";
        }
        else {
          pwVar16 = 
          L"Xperf.exe is not installed on this machine.  Please be sure to install the Windows ADK.\n"
          ;
        }
        goto LAB_0046adf5;
      }
      FUN_0046ce57(&local_2c,"memoryinfo");
      local_8._0_1_ = 0x14;
      iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)&local_2c);
      iVar7 = *(int *)(iVar7 + 0x10);
      FUN_0046a626(local_a4);
      local_8._0_1_ = 7;
      FUN_0046cd6b((int *)&local_2c);
      if (iVar7 == 0) {
        FUN_0046ce57(&local_2c,"semaphore");
        local_8._0_1_ = 0x17;
        iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)&local_2c);
        iVar7 = *(int *)(iVar7 + 0x10);
        FUN_0046a626(local_a4);
        local_8._0_1_ = 7;
        FUN_0046cd6b((int *)&local_2c);
        if (iVar7 != 0) {
          CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,1,1,L"DXEnableCapture");
          uStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          local_1c = 0;
          local_18 = 0xf;
          local_2c = (short ****)0x0;
          local_8._0_1_ = 0x18;
          bVar4 = FUN_0046c898((void *)((int)&DAT_004d9808 + *(int *)(DAT_004d9808 + 4)),10);
          FUN_0046b323(&DAT_004d9808,&local_2c,bVar4);
          FUN_0046cd6b((int *)&local_2c);
          goto LAB_0046aff5;
        }
        FUN_0046ce57(&local_2c,"d2d");
        local_8._0_1_ = 0x19;
        iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)&local_2c);
        iVar7 = *(int *)(iVar7 + 0x10);
        FUN_0046a626(local_a4);
        local_8._0_1_ = 7;
        FUN_0046cd6b((int *)&local_2c);
        if (iVar7 != 0) {
          memset(&local_2d8.dwMajorVersion,0,0x110);
          local_2d8.dwOSVersionInfoSize = 0x114;
          GetVersionExW(&local_2d8);
          if (local_2d8.dwBuildNumber < 0x2b3c) {
            pwVar16 = L"D2D capture is not supported on this build of Windows.\n";
            goto LAB_0046adf5;
          }
        }
        FUN_00469f31((int *)&local_2f0,local_2e8);
        local_8._0_1_ = 0x1a;
        if (local_2f0 == (int *)0x0) {
          FUN_00481830(
                      L"\nDXCap.exe: Capture and replay of Direct3D rendering. There are several modes:\n\nTo launch and capture : DXCap.exe [options] -c <exe-name> [args-for-exe]\nTo play a recording   : DXCap.exe -p [filename] [options] \nEnum store apps       : DXCap.exe -e [searchstring]\nDriver validation     : DXCap.exe -v [options]\nGPU Usage Collection  : DXCap.exe -usage -[start|stop]\nShow current sysinfo  : DXCap.exe -info\n\nMore details on these modes:\n  -c                 The next argument must be one of:\n                         exename             Capture a desktop executable\n                         package,appid       Capture a store app\n                         guid,uri            Capture a phone app\n                     -c must be the last option on the command line, since the\n                     rest of the command line is passed to the exe itself.\n  -p [filename]      Play back a capture file. The filename can be specified\n                     immediately after -p, or the -file option can be used.\n                     If neither file specification is given, DXCap.exe\n                     will take the most recent capture file name, which is\n                     stored in the registry.\n  -e [search]        Enumerate installed app packages. If the next argument\n                     is given, the results will be restricted to those\n                     packages that contain \"searchstring\" in their name.\n  -v                 Driver validation mode: Play the file to both hardware\n                     and WARP, detecting differences. Follow with:\n                         -examine <list> Restrict difference checks to a comma-\n                                         separated list. Default is all of:\n                                         present,draw,copy,clear\n                         -haltonfail     Pause for keystroke on differences\n                         -exitonfail     Exit, return 0 (or 1 otherwise)\n                         -showprogress   Display WARP on left, h/w on right.\n  -info              Show machine info and de..." /* TRUNCATED STRING LITERAL */
                      );
        }
        else {
          local_2dc = (int *)0x0;
          local_2ec = (int *)0x0;
          local_8._0_1_ = 0x1c;
          FUN_0046ce57(local_5c,"remote");
          local_8._0_1_ = 0x1d;
          iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)local_5c);
          iVar7 = *(int *)(iVar7 + 0x10);
          FUN_0046a626(local_a4);
          local_8._0_1_ = 0x1c;
          FUN_0046cd6b(local_5c);
          if (iVar7 == 0) {
            FUN_004743cc(&local_2ec,&local_2dc);
          }
          else {
            FUN_0046ce57(local_5c,"remote");
            local_8._0_1_ = 0x1e;
            iVar7 = FUN_004b204f(local_2e8,local_a4,(char *)local_5c);
            local_8._0_1_ = 0x1f;
            FUN_0046cf05(&local_44,(undefined4 *)(iVar7 + 0x18));
            FUN_0046a626(local_a4);
            local_8._0_1_ = 0x22;
            FUN_0046cd6b(local_5c);
            FUN_0046ca43(local_ec,L"dxcap");
            local_8._0_1_ = 0x23;
            FUN_004818c4(&local_2c,local_2e8,"prefix",local_ec);
            local_8._0_1_ = 0x25;
            FUN_0046cf92((int *)local_ec);
            pppppsVar9 = &local_2c;
            if (7 < local_18) {
              pppppsVar9 = (short *****)local_2c;
            }
            pppppsVar12 = &local_44;
            if (7 < local_30) {
              pppppsVar12 = (short *****)local_44;
            }
            FUN_0047bd41((short *)pppppsVar12,(short *)pppppsVar9,&local_2ec,(int *)&local_2dc);
            FUN_0046cf92((int *)&local_2c);
            local_8._0_1_ = 0x1c;
            FUN_0046cf92((int *)&local_44);
          }
          if (local_2dc == (int *)0x0) {
            FUN_00481830(
                        L"Controller instantiation failed. Typical cause is missing or incorrect DLLs.\nPlease run \"DXCap -info\" for details on such potentially missing components.\n"
                        );
          }
          else {
            pcVar3 = *(code **)(*local_2dc + 0x44);
            (*(code *)PTR_guard_check_icall_004da5e8)(local_2dc,local_2f0);
            (*pcVar3)();
            pcVar3 = *(code **)(*local_2f0 + 0x10);
            (*(code *)PTR_guard_check_icall_004da5e8)(local_2dc);
            (*pcVar3)();
          }
          ~CComPtr<>((int *)&local_2ec);
          ~CComPtr<>((int *)&local_2dc);
        }
        FUN_0046b0bd((int *)&local_2f0);
        goto LAB_0046afda;
      }
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      local_1c = 0;
      local_18 = 7;
      local_2c = (short ****)0x0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      local_34 = 0;
      local_30 = 7;
      local_44 = (short ****)0x0;
      local_8._0_1_ = 0x16;
      FUN_00482440(&local_2c);
      pppppsVar9 = &local_44;
      if (7 < local_30) {
        pppppsVar9 = (short *****)local_44;
      }
      FUN_00481830(pppppsVar9);
      FUN_0046cf92((int *)&local_44);
      pppppsVar9 = &local_2c;
    }
    else {
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      local_34 = 0;
      local_30 = 7;
      local_44 = (short ****)0x0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      local_1c = 0;
      local_18 = 7;
      local_2c = (short ****)0x0;
      local_8._0_1_ = 0xe;
      FUN_00482440(&local_44);
      pppppsVar9 = &local_44;
      if (7 < local_30) {
        pppppsVar9 = (short *****)local_44;
      }
      FUN_00481830(pppppsVar9);
      FUN_0046cf92((int *)&local_2c);
      pppppsVar9 = &local_44;
    }
LAB_0046accc:
    FUN_0046cf92((int *)pppppsVar9);
  }
  else {
    pwVar16 = 
    L"\nDXCap.exe: Capture and replay of Direct3D rendering. There are several modes:\n\nTo launch and capture : DXCap.exe [options] -c <exe-name> [args-for-exe]\nTo play a recording   : DXCap.exe -p [filename] [options] \nEnum store apps       : DXCap.exe -e [searchstring]\nDriver validation     : DXCap.exe -v [options]\nGPU Usage Collection  : DXCap.exe -usage -[start|stop]\nShow current sysinfo  : DXCap.exe -info\n\nMore details on these modes:\n  -c                 The next argument must be one of:\n                         exename             Capture a desktop executable\n                         package,appid       Capture a store app\n                         guid,uri            Capture a phone app\n                     -c must be the last option on the command line, since the\n                     rest of the command line is passed to the exe itself.\n  -p [filename]      Play back a capture file. The filename can be specified\n                     immediately after -p, or the -file option can be used.\n                     If neither file specification is given, DXCap.exe\n                     will take the most recent capture file name, which is\n                     stored in the registry.\n  -e [search]        Enumerate installed app packages. If the next argument\n                     is given, the results will be restricted to those\n                     packages that contain \"searchstring\" in their name.\n  -v                 Driver validation mode: Play the file to both hardware\n                     and WARP, detecting differences. Follow with:\n                         -examine <list> Restrict difference checks to a comma-\n                                         separated list. Default is all of:\n                                         present,draw,copy,clear\n                         -haltonfail     Pause for keystroke on differences\n                         -exitonfail     Exit, return 0 (or 1 otherwise)\n                         -showprogress   Display WARP on left, h/w on right.\n  -info              Show machine info and de..." /* TRUNCATED STRING LITERAL */
    ;
LAB_0046adf5:
    FUN_00481830(pwVar16);
  }
LAB_0046aff5:
  FUN_0046a626(local_134);
  FUN_0046a626(local_17c);
  FUN_0046b1dc(local_2e8);
  FUN_004c693e();
  return;
}



/* Function: FUN_0046b030 */

void FUN_0046b030(undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_00481830(L"Unrecognized command-line switch \"-%s\": ignoring\n");
  uVar1 = FUN_0046cc4d(param_1,(ushort *)L"manual");
  if ((char)uVar1 != '\0') {
    FUN_00481830(L"(The \"-manual\" option has been retired. Use \"-frame manual\" instead.)\n");
  }
  return;
}



/* Function: FUN_0046b07c */

void __fastcall FUN_0046b07c(undefined4 param_1)

{
  FUN_004b2308(param_1,(int *)&stack0x00000004);
  return;
}



/* Function: FUN_0046b090 */

void __thiscall FUN_0046b090(void *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  *(int *)this = param_1;
  if (iVar1 != 0) {
    FUN_00469d3e(iVar1);
    FUN_004c56a5(iVar1);
  }
  return;
}



/* Function: FUN_0046b0bd */

void __fastcall FUN_0046b0bd(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_00469d3e(iVar1);
    FUN_004c56a5(iVar1);
  }
  return;
}



/* Function: FUN_0046b0e0 */

int __fastcall FUN_0046b0e0(int param_1)

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



/* Function: FUN_0046b0f0 */

void FUN_0046b0f0(int *param_1)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7324;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar1 = *(code **)(*param_1 + 0xc);
  (*(code *)PTR_guard_check_icall_004da5e8)
            (param_1,L"APPID",&DAT_0040e384,DAT_004d8a80 ^ (uint)&stack0xfffffffc);
  (*pcVar1)();
  ExceptionList = local_10;
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
  puStack_c = &LAB_004c7324;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004da5e8)(piVar1,DAT_004d8a80 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0046b1a1 */

void __fastcall FUN_0046b1a1(int *param_1)

{
  FUN_0046b441(param_1,*(int **)(*param_1 + 4));
  FUN_0046996d(*param_1,0x18);
  return;
}



/* Function: FUN_0046b1d0 */

undefined4 * __fastcall FUN_0046b1d0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* Function: FUN_0046b1dc */

void __fastcall FUN_0046b1dc(int *param_1)

{
  FUN_0046b48a(param_1,*(int **)(*param_1 + 4));
  FUN_0046996d(*param_1,0x58);
  return;
}



/* Function: FUN_0046b1fd */

undefined4 __fastcall FUN_0046b1fd(undefined4 param_1)

{
  return param_1;
}



/* Function: FUN_0046b206 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __thiscall FUN_0046b206(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  void *local_18;
  void *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46b212;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  local_18 = this;
  local_14 = this;
  pvVar6 = FUN_00469cf9(0x58);
  *(void **)pvVar6 = pvVar6;
  *(void **)((int)pvVar6 + 4) = pvVar6;
  *(void **)((int)pvVar6 + 8) = pvVar6;
  *(undefined2 *)((int)pvVar6 + 0xc) = 0x101;
  *(void **)this = pvVar6;
  local_8 = 0;
  puVar7 = FUN_0046b6f0(this,*(undefined4 **)(*param_1 + 4),pvVar6);
                    /* WARNING: Load size is inaccurate */
  *(undefined4 **)(*this + 4) = puVar7;
                    /* WARNING: Load size is inaccurate */
  piVar2 = *this;
  *(int *)((int)this + 4) = param_1[1];
  piVar3 = (int *)piVar2[1];
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0xd);
    piVar5 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar5 + 0xd);
      piVar3 = piVar5;
      piVar5 = (int *)*piVar5;
    }
    *piVar2 = (int)piVar3;
                    /* WARNING: Load size is inaccurate */
    iVar4 = *(int *)(*this + 4);
    do {
      iVar8 = iVar4;
      iVar4 = *(int *)(iVar8 + 8);
    } while (*(char *)(iVar4 + 0xd) == '\0');
    *(int *)(*this + 8) = iVar8;
  }
  else {
    *piVar2 = (int)piVar2;
                    /* WARNING: Load size is inaccurate */
    *(int *)(*this + 8) = *this;
  }
  local_14 = (void *)0x0;
  FUN_0046b2f8(&local_18);
  return (int *)this;
}



/* Function: FUN_0046b2af */

int __fastcall FUN_0046b2af(int param_1,uint param_2,uint param_3,short param_4)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  
  if (param_3 < param_2) {
    iVar2 = param_2 - param_3;
    psVar3 = (short *)(param_1 + param_3 * 2);
    psVar1 = (short *)0x0;
    if (iVar2 != 0) {
      for (; (psVar1 = psVar3, *psVar3 != param_4 && (psVar1 = (short *)0x0, iVar2 != 1));
          iVar2 = iVar2 + -1) {
        psVar3 = psVar3 + 1;
      }
    }
    if (psVar1 != (short *)0x0) {
      return (int)psVar1 - param_1 >> 1;
    }
  }
  return -1;
}



/* Function: FUN_0046b2f8 */

void __fastcall FUN_0046b2f8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    FUN_0046b48a(*param_1,*(int **)(*piVar1 + 4));
    FUN_0046996d(*piVar1,0x58);
    return;
  }
  return;
}



/* Function: FUN_0046b323 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __fastcall FUN_0046b323(int *param_1,undefined4 *param_2,byte param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_30;
  char local_2c;
  uint local_24;
  int *local_20;
  undefined4 *local_1c;
  undefined1 local_15;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x46b32f;
  local_15 = 0;
  local_20 = param_1;
  local_1c = param_2;
  FUN_0046b4de(&local_30,param_1);
  local_8 = 0;
  if (local_2c == '\0') {
    FUN_0046c1ee((void *)(*(int *)(*param_1 + 4) + (int)param_1),2,'\0');
    ~_Sentry_base(&local_30);
    return param_1;
  }
  local_8 = 1;
  puVar3 = local_1c;
  if (0xf < (uint)local_1c[5]) {
    puVar3 = (undefined4 *)*local_1c;
  }
  local_1c[4] = 0;
  local_24 = (uint)param_3;
  *(undefined1 *)puVar3 = 0;
  uVar1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sgetc
                    (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                      (*(int *)(*param_1 + 4) + 0x38 + (int)param_1));
  while( true ) {
    if (uVar1 == 0xffffffff) {
      piVar2 = (int *)FUN_0046b407();
      return piVar2;
    }
    if (uVar1 == local_24) break;
    if (0x7ffffffe < (uint)local_1c[4]) {
      piVar2 = (int *)FUN_0046b407();
      return piVar2;
    }
    FUN_0046b6ad(local_1c,(char)uVar1);
    local_15 = 1;
    uVar1 = FUN_0046b591(*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                          (*(int *)(*param_1 + 4) + 0x38 + (int)param_1));
  }
  local_15 = 1;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::sbumpc
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
              (*(int *)(*param_1 + 4) + 0x38 + (int)param_1));
  piVar2 = (int *)FUN_0046b407();
  return piVar2;
}



/* Function: Catch_All@0046b3d1 */

undefined * Catch_All_0046b3d1(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = 4;
  if (*(int *)((int)piVar1 + iVar2 + 0x38) != 0) {
    uVar3 = 0;
  }
  uVar3 = uVar3 | *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    return &DAT_0046b400;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_0046b407 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0046b407(void)

{
  undefined4 unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = unaff_EBX;
  if (*(char *)(unaff_EBP + -0x11) == '\0') {
    unaff_EDI = unaff_EDI | 2;
  }
  FUN_0046c1ee((void *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI),unaff_EDI,(char)unaff_EBX);
  ~_Sentry_base((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: FUN_0046b441 */

void FUN_0046b441(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_2 + 0xd);
  while (cVar1 == '\0') {
    FUN_0046b441(param_1,(int *)param_2[2]);
    piVar2 = (int *)*param_2;
    ~CComPtr<>(param_2 + 5);
    FUN_0046996d((int)param_2,0x18);
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}



/* Function: FUN_0046b48a */

void FUN_0046b48a(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_2 + 0xd);
  while (cVar1 == '\0') {
    FUN_0046b48a(param_1,(int *)param_2[2]);
    piVar2 = (int *)*param_2;
    FUN_0046b8a6(param_2 + 4);
    FUN_0046996d((int)param_2,0x58);
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}



/* Function: ~_Sentry_base */

void __fastcall ~_Sentry_base(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7298;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  piVar1 = *(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004da5e8)(DAT_004d8a80 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = pvStack_10;
  return;
}



/* Function: FUN_0046b4de */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall FUN_0046b4de(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  
  *(int **)this = param_1;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_004da5e8)();
    (*pcVar2)();
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = FUN_0046b64a(*this);
  *(char *)((int)this + 4) = (char)uVar3;
  return (undefined4 *)this;
}



/* Function: ~_Sentry_base */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::basic_ostream<char,struct std::char_traits<char>
   >::_Sentry_base::~_Sentry_base(void)
    public: __thiscall std::basic_ostream<unsigned short,struct std::char_traits<unsigned short>
   >::_Sentry_base::~_Sentry_base(void)
    public: __thiscall std::basic_ostream<wchar_t,struct std::char_traits<wchar_t>
   >::_Sentry_base::~_Sentry_base(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __fastcall ~_Sentry_base(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7298;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004da5e8)(DAT_004d8a80 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0046b591 */

uint __fastcall FUN_0046b591(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if ((**(int **)(param_1 + 0x1c) == 0) || (piVar1 = *(int **)(param_1 + 0x2c), *piVar1 < 2)) {
    iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sbumpc(param_1);
    uVar3 = 0xffffffff;
    if (iVar2 != -1) {
      uVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sgetc(param_1);
    }
  }
  else {
    *piVar1 = *piVar1 + -1;
    piVar1 = *(int **)(param_1 + 0x1c);
    *piVar1 = *piVar1 + 1;
    uVar3 = (uint)*(byte *)*piVar1;
  }
  return uVar3;
}



/* Function: sgetc */

/* Library Function - Single Match
    public: int __thiscall std::basic_streambuf<char,struct std::char_traits<char> >::sgetc(void)
   
   Library: Visual Studio 2019 Release */

int __thiscall
std::basic_streambuf<char,struct_std::char_traits<char>_>::sgetc
          (basic_streambuf<char,struct_std::char_traits<char>_> *this)

{
  code *pcVar1;
  int iVar2;
  
  if (((byte *)**(undefined4 **)(this + 0x1c) != (byte *)0x0) && (0 < **(int **)(this + 0x2c))) {
    return (uint)*(byte *)**(undefined4 **)(this + 0x1c);
  }
  pcVar1 = *(code **)(*(int *)this + 0x18);
  (*(code *)PTR_guard_check_icall_004da5e8)();
  iVar2 = (*pcVar1)();
  return iVar2;
}



/* Function: sbumpc */

/* Library Function - Single Match
    public: int __thiscall std::basic_streambuf<char,struct std::char_traits<char> >::sbumpc(void)
   
   Library: Visual Studio 2019 Release */

int __thiscall
std::basic_streambuf<char,struct_std::char_traits<char>_>::sbumpc
          (basic_streambuf<char,struct_std::char_traits<char>_> *this)

{
  int *piVar1;
  byte *pbVar2;
  code *pcVar3;
  int iVar4;
  
  if ((**(int **)(this + 0x1c) != 0) && (piVar1 = *(int **)(this + 0x2c), 0 < *piVar1)) {
    *piVar1 = *piVar1 + -1;
    pbVar2 = (byte *)**(int **)(this + 0x1c);
    **(int **)(this + 0x1c) = (int)(pbVar2 + 1);
    return (uint)*pbVar2;
  }
  pcVar3 = *(code **)(*(int *)this + 0x1c);
  (*(code *)PTR_guard_check_icall_004da5e8)();
  iVar4 = (*pcVar3)();
  return iVar4;
}



/* Function: FUN_0046b64a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_0046b64a(int *param_1)

{
  uint uVar1;
  void *this;
  
  this = (void *)(*(int *)(*param_1 + 4) + (int)param_1);
  if (*(int *)((int)this + 0xc) == 0) {
    if (*(int **)((int)this + 0x3c) != (int *)0x0) {
      FUN_0046bae6(*(int **)((int)this + 0x3c));
    }
    uVar1 = CONCAT31((int3)((uint)*(int *)(*param_1 + 4) >> 8),
                     *(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0);
  }
  else {
    uVar1 = 6;
    if (*(int *)((int)this + 0x38) != 0) {
      uVar1 = 2;
    }
    uVar1 = FUN_0046c183(this,uVar1 | *(uint *)((int)this + 0xc),'\0');
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_0046b6ad */

void __thiscall FUN_0046b6ad(void *this,undefined1 param_1)

{
  uint uVar1;
  uint local_8;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    *(uint *)((int)this + 0x10) = uVar1 + 1;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      this = *this;
    }
    *(undefined1 *)((int)this + uVar1) = param_1;
    *(undefined1 *)((int)this + uVar1 + 1) = 0;
  }
  else {
    local_8 = (uint)this & 0xffffff00;
    FUN_0046b781(this,this,local_8,param_1);
  }
  return;
}



/* Function: FUN_0046b6f0 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall FUN_0046b6f0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* WARNING: Load size is inaccurate */
  puVar3 = *this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_0046b827(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_0046b6f0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_0046b6f0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  return puVar3;
}



/* Function: Catch_All@0046b75b */

void Catch_All_0046b75b(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  int *piVar2;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  uVar1 = FUN_0046b1fd(*(undefined4 *)(unaff_EBP + -0x18));
  FUN_0046b48a(uVar1,piVar2);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_0046b781 */

undefined4 * __thiscall
FUN_0046b781(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  size_t _Size;
  uint uVar1;
  void *_Src;
  code *pcVar2;
  uint uVar3;
  void *_Dst;
  undefined4 *puVar4;
  
  _Size = *(size_t *)((int)this + 0x10);
  if (_Size != 0x7fffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar3 = FUN_0046cda1(this,_Size + 1);
    _Dst = FUN_00469cf9(uVar3 + 1);
    *(size_t *)((int)this + 0x10) = _Size + 1;
    *(uint *)((int)this + 0x14) = uVar3;
    if (uVar1 < 0x10) {
      memcpy(_Dst,this,_Size);
      *(undefined1 *)((int)_Dst + _Size) = param_3;
      *(undefined1 *)((int)_Dst + _Size + 1) = 0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      _Src = *this;
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((int)_Dst + _Size) = param_3;
      *(undefined1 *)((int)_Dst + _Size + 1) = 0;
      FUN_0046996d((int)_Src,uVar1 + 1);
    }
    *(void **)this = _Dst;
    return (undefined4 *)this;
  }
  FUN_0046ce98();
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar2)();
  return puVar4;
}



/* Function: FUN_0046b827 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_0046b827(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  puVar2 = (undefined4 *)FUN_00469cf9(0x58);
  FUN_0046cf05(puVar2 + 4,param_1);
  FUN_0046cf05(puVar2 + 10,param_1 + 6);
  FUN_0046cf05(puVar2 + 0x10,param_1 + 0xc);
  *puVar2 = uVar1;
  puVar2[1] = uVar1;
  puVar2[2] = uVar1;
  *(undefined2 *)(puVar2 + 3) = 0;
  return;
}



/* Function: FUN_0046b8a6 */

void __fastcall FUN_0046b8a6(int *param_1)

{
  FUN_0046cf92(param_1 + 0xc);
  FUN_0046cf92(param_1 + 6);
  FUN_0046cf92(param_1);
  return;
}



/* Function: FUN_0046b8cb */

void __fastcall FUN_0046b8cb(int *param_1)

{
  FUN_0046cf92(param_1 + 6);
  FUN_0046cf92(param_1);
  return;
}



/* Function: FUN_0046b8e6 */

void __fastcall FUN_0046b8e6(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0046996d(*(int *)(param_1 + 4),0x58);
    return;
  }
  return;
}



/* Function: FUN_0046b900 */

HRESULT __thiscall FUN_0046b900(void *this,undefined4 *param_1)

{
  LPVOID *ppv;
  code *pcVar1;
  uint uVar2;
  HRESULT HVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004c7275;
  local_10 = ExceptionList;
  uVar2 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == (undefined4 *)0x0) {
    HVar3 = -0x7fffbffd;
  }
  else {
    HVar3 = 0;
    ppv = (LPVOID *)((int)this + 0x28);
    if ((*ppv != (LPVOID)0x0) ||
       (HVar3 = CoCreateInstance((IID *)&DAT_00409244,(LPUNKNOWN)0x0,1,(IID *)&DAT_0040e2e8,ppv),
       -1 < HVar3)) {
      *param_1 = *ppv;
                    /* WARNING: Load size is inaccurate */
      pcVar1 = *(code **)(**ppv + 4);
      (*(code *)PTR_guard_check_icall_004da5e8)(*ppv,uVar2);
      (*pcVar1)();
    }
  }
  ExceptionList = local_10;
  return HVar3;
}



/* Function: FUN_0046b990 */

undefined4 __fastcall FUN_0046b990(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Function: FUN_0046b9a0 */

int __fastcall FUN_0046b9a0(int param_1)

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



/* Function: FUN_0046b9b0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall FUN_0046b9b0(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  *(int **)this = param_1;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_004da5e8)();
    (*pcVar2)();
  }
  bVar3 = false;
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1);
    if ((piVar1 == (int *)0x0) || (piVar1 == param_1)) {
      bVar3 = true;
    }
    else {
      FUN_0046bae6(piVar1);
      bVar3 = *(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0;
    }
  }
  *(bool *)((int)this + 4) = bVar3;
  return (undefined4 *)this;
}



/* Function: FUN_0046ba2e */

void __fastcall FUN_0046ba2e(int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004c79ba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = *(int *)(*param_1 + 4);
  if ((*(int *)(iVar2 + 0xc + (int)param_1) == 0) &&
     ((*(byte *)(iVar2 + 0x14 + (int)param_1) & 2) != 0)) {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x38 + (int)param_1) + 0x34);
    (*(code *)PTR_guard_check_icall_004da5e8)();
    iVar2 = (*pcVar1)();
    if (iVar2 == -1) {
      this = (void *)(*(int *)(*param_1 + 4) + (int)param_1);
      FUN_0046c183(this,*(uint *)((int)this + 0xc) | 4,'\0');
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: Catch_All@0046bab1 */

undefined4 Catch_All_0046bab1(void)

{
  return 0x46baa1;
}



/* Function: FUN_0046bac2 */

void __fastcall FUN_0046bac2(int *param_1)

{
  char cVar1;
  
  cVar1 = __uncaught_exception();
  if (cVar1 == '\0') {
    FUN_0046ba2e((int *)*param_1);
  }
  ~_Sentry_base(param_1);
  return;
}



/* Function: FUN_0046bae6 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __fastcall FUN_0046bae6(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int local_2c;
  char local_28;
  int *local_20;
  int *local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x46baf2;
  piVar3 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar3 != (int *)0x0) {
    local_20 = piVar3;
    local_1c = param_1;
    FUN_0046b9b0(&local_2c,param_1);
    local_8 = 0;
    if (local_28 != '\0') {
      local_8 = 1;
      pcVar1 = *(code **)(*piVar3 + 0x34);
      (*(code *)PTR_guard_check_icall_004da5e8)();
      iVar2 = (*pcVar1)();
      uVar4 = 4;
      if (iVar2 != -1) {
        uVar4 = 0;
      }
      piVar3 = (int *)FUN_0046bb78(uVar4);
      return piVar3;
    }
    FUN_0046bac2(&local_2c);
  }
  return param_1;
}



/* Function: Catch_All@0046bb42 */

undefined * Catch_All_0046bb42(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x18);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = 4;
  if (*(int *)((int)piVar1 + iVar2 + 0x38) != 0) {
    uVar3 = 0;
  }
  uVar3 = uVar3 | *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    return &DAT_0046bb71;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_0046bb78 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0046bb78(uint param_1)

{
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = unaff_EDI;
  FUN_0046c1ee((void *)(*(int *)(*unaff_EBX + 4) + (int)unaff_EBX),param_1,(char)unaff_EDI);
  FUN_0046bac2((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: FUN_0046bba7 */

void FUN_0046bba7(void)

{
  FUN_0048ace3("invalid string position");
  return;
}



/* Function: exception */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,char *param_1)

{
  char *local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = param_1;
  _local_8 = CONCAT31((int3)((uint)this >> 8),1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  o___std_exception_copy(&local_c,this + 4);
  return this;
}



/* Function: FUN_0046bbf4 */

undefined4 * __fastcall FUN_0046bbf4(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  return param_1;
}



/* Function: FUN_0046bc05 */

undefined4 * __thiscall
FUN_0046bc05(void *this,uint param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  void *_Dst;
  size_t _Size;
  uint uVar1;
  void *_Src;
  code *pcVar2;
  uint uVar3;
  void *_Dst_00;
  undefined4 *puVar4;
  
  _Size = *(size_t *)((int)this + 0x10);
  if (param_1 <= 0x7fffffff - _Size) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar3 = FUN_0046cda1(this,_Size + param_1);
    _Dst_00 = FUN_00469cf9(uVar3 + 1);
    *(size_t *)((int)this + 0x10) = _Size + param_1;
    *(uint *)((int)this + 0x14) = uVar3;
    _Dst = (void *)((int)_Dst_00 + _Size);
    if (uVar1 < 0x10) {
      memcpy(_Dst_00,this,_Size);
      memcpy(_Dst,param_3,param_4);
      *(undefined1 *)((int)_Dst + param_4) = 0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      _Src = *this;
      memcpy(_Dst_00,_Src,_Size);
      memcpy(_Dst,param_3,param_4);
      *(undefined1 *)((int)_Dst + param_4) = 0;
      FUN_0046996d((int)_Src,uVar1 + 1);
    }
    *(void **)this = _Dst_00;
    return (undefined4 *)this;
  }
  FUN_0046ce98();
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar2)();
  return puVar4;
}



/* Function: FUN_0046bcbe */

undefined4 * __thiscall FUN_0046bcbe(void *this,void *param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if ((uint)(*(int *)((int)this + 0x14) - iVar1) < param_2) {
    local_8 = (uint)this & 0xffffff00;
    this = FUN_0046bc05(this,param_2,local_8,param_1,param_2);
  }
  else {
    *(uint *)((int)this + 0x10) = iVar1 + param_2;
    pvVar2 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar2 = *this;
    }
    memmove((void *)((int)pvVar2 + iVar1),param_1,param_2);
    *(undefined1 *)((int)pvVar2 + iVar1 + param_2) = 0;
  }
  return (undefined4 *)this;
}



/* Function: FUN_0046bd20 */

undefined4 * __thiscall FUN_0046bd20(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  puVar2 = param_1;
  puVar3 = (undefined4 *)this;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  param_1[5] = 0xf;
  return (undefined4 *)this;
}



/* Function: FUN_0046bd61 */

undefined4 * __thiscall FUN_0046bd61(void *this,undefined4 *param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  void *_Dst;
  undefined4 *puVar4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = param_1[4];
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (uVar1 < 0x80000000) {
    *(undefined4 *)((int)this + 0x14) = 0xf;
    if (uVar1 < 0x10) {
      *(uint *)((int)this + 0x10) = uVar1;
      *(undefined4 *)this = *param_1;
      *(undefined4 *)((int)this + 4) = param_1[1];
      *(undefined4 *)((int)this + 8) = param_1[2];
      *(undefined4 *)((int)this + 0xc) = param_1[3];
    }
    else {
      uVar3 = FUN_0046cda1(this,uVar1);
      _Dst = FUN_00469cf9(uVar3 + 1);
      *(void **)this = _Dst;
      *(uint *)((int)this + 0x10) = uVar1;
      *(uint *)((int)this + 0x14) = uVar3;
      memcpy(_Dst,param_1,uVar1 + 1);
    }
    return (undefined4 *)this;
  }
  FUN_0046ce98();
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar2)();
  return puVar4;
}



/* Function: FUN_0046bde9 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0046bde9(void *this,undefined4 *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  undefined4 ***pppuVar2;
  char ***pppcVar3;
  int local_68 [4];
  int local_58;
  void *local_4c;
  char **local_48 [5];
  uint local_34;
  undefined4 **local_30 [4];
  uint local_20;
  uint local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x46bdf5;
  local_4c = this;
  FUN_0046bd61(local_68,param_1);
  local_4c = (void *)param_2;
  local_8 = 0;
  if (local_58 != 0) {
    FUN_0046bcbe(local_68,&DAT_0040e340,2);
  }
  pcVar1 = *(code **)(*param_3 + 8);
  (*(code *)PTR_guard_check_icall_004da5e8)(local_30,local_4c);
  (*pcVar1)();
  local_8 = CONCAT31(local_8._1_3_,1);
  pppuVar2 = local_30;
  if (0xf < local_1c) {
    pppuVar2 = (undefined4 ***)local_30[0];
  }
  FUN_0046bcbe(local_68,pppuVar2,local_20);
  FUN_0046cd6b((int *)local_30);
  FUN_0046bd20(local_48,local_68);
  FUN_0046cd6b(local_68);
  pppcVar3 = local_48;
  if (0xf < local_34) {
    pppcVar3 = (char ***)local_48[0];
  }
  std::exception::exception((exception *)this,(char *)pppcVar3);
  *(undefined ***)this = std::runtime_error::vftable;
  FUN_0046cd6b((int *)local_48);
  *(undefined ***)this = std::_System_error::vftable;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(int **)((int)this + 0x10) = param_3;
  FUN_004c693e();
  return;
}



/* Function: FUN_0046bebd */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0046bebd(void *this,char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int local_2c [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x46bec9;
  uVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  FUN_0046ce57(local_2c,param_1);
  local_8 = 0;
  FUN_0046bde9(this,local_2c,uVar1,piVar2);
  FUN_0046cd6b(local_2c);
  *(undefined ***)this = std::ios_base::failure::vftable;
  FUN_004c693e();
  return;
}



/* Function: FUN_0046bf20 */

void * __thiscall FUN_0046bf20(void *this,byte param_1)

{
  if ((param_1 & 1) != 0) {
    FUN_004c56a5(this);
  }
  return this;
}



/* Function: FUN_0046bf50 */

char * FUN_0046bf50(void)

{
  return "iostream";
}



/* Function: FUN_0046bf60 */

undefined4 * FUN_0046bf60(undefined4 *param_1,undefined *param_2)

{
  char *pcVar1;
  
  if (param_2 == (undefined *)0x1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_0046cddd(param_1,"iostream stream error",0x15);
  }
  else {
    pcVar1 = FUN_0048b3ea(param_2);
    FUN_0046ce57(param_1,pcVar1);
  }
  return param_1;
}



/* Function: equivalent */

/* Library Function - Single Match
    public: virtual bool __thiscall std::error_category::equivalent(class std::error_code const
   &,int)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  bool bVar1;
  
  if ((*(int *)(this + 4) == *(int *)(*(int *)(param_1 + 4) + 4)) && (*(int *)param_1 == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Function: FUN_0046bff0 */

void __thiscall FUN_0046bff0(void *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = this;
  return;
}



/* Function: FUN_0046c010 */

uint __thiscall FUN_0046c010(void *this,undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  void *local_c;
  void *pvStack_8;
  
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0xc);
  local_c = this;
  pvStack_8 = this;
  (*(code *)PTR_guard_check_icall_004da5e8)(&local_c,param_1);
  piVar2 = (int *)(*pcVar1)();
  if ((*(int *)(piVar2[1] + 4) == *(int *)(param_2[1] + 4)) &&
     (piVar2 = (int *)*piVar2, piVar2 == (int *)*param_2)) {
    uVar3 = CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
  else {
    uVar3 = (uint)piVar2 & 0xffffff00;
  }
  return uVar3;
}



/* Function: FUN_0046c05c */

undefined4 * __fastcall FUN_0046c05c(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = &PTR_vftable_004d7000;
  return param_1;
}



/* Function: FUN_0046c080 */

undefined4 * __thiscall FUN_0046c080(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_004c56a5(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0046c0c0 */

undefined4 * __thiscall FUN_0046c0c0(void *this,exception *param_1)

{
  FUN_0046c120(this,param_1);
  *(undefined ***)this = std::ios_base::failure::vftable;
  return (undefined4 *)this;
}



/* Function: FUN_0046c0f0 */

undefined4 * __thiscall FUN_0046c0f0(void *this,exception *param_1)

{
  FUN_0046c120(this,param_1);
  *(undefined ***)this = std::system_error::vftable;
  return (undefined4 *)this;
}



/* Function: FUN_0046c120 */

exception * __thiscall FUN_0046c120(void *this,exception *param_1)

{
  undefined4 uVar1;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::_System_error::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = uVar1;
  return (exception *)this;
}



/* Function: FUN_0046c160 */

exception * __thiscall FUN_0046c160(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::runtime_error::vftable;
  return (exception *)this;
}



/* Function: FUN_0046c183 */

void __thiscall FUN_0046c183(void *this,uint param_1,char param_2)

{
  undefined4 *puVar1;
  char *extraout_EDX;
  undefined1 *pExceptionObject;
  ThrowInfo *pThrowInfo;
  undefined1 local_20 [20];
  undefined4 local_c [2];
  
  *(uint *)((int)this + 0xc) = param_1 & 0x17;
  if ((*(uint *)((int)this + 0x10) & param_1 & 0x17) == 0) {
    return;
  }
  if (param_2 == '\0') {
    puVar1 = FUN_0046c05c(local_c);
    FUN_0046bebd(local_20,extraout_EDX,puVar1);
    pThrowInfo = (ThrowInfo *)&DAT_004d68dc;
    pExceptionObject = local_20;
  }
  else {
    pThrowInfo = (ThrowInfo *)0x0;
    pExceptionObject = (undefined1 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(pExceptionObject,pThrowInfo);
}



/* Function: FUN_0046c1ee */

void __thiscall FUN_0046c1ee(void *this,uint param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (*(int *)((int)this + 0x38) != 0) {
    uVar1 = 0;
  }
  FUN_0046c183(this,uVar1 | *(uint *)((int)this + 0xc) | param_1,param_2);
  return;
}



/* Function: FUN_0046c217 */

int __fastcall FUN_0046c217(int *param_1)

{
  int local_8;
  
  if (*param_1 == 0) {
    local_8 = 0;
    lock_locales();
    if (*param_1 == 0) {
      DAT_004d90cc = DAT_004d90cc + 1;
      *param_1 = DAT_004d90cc;
    }
    FUN_0048b1b8(&local_8);
  }
  return *param_1;
}



/* Function: FUN_0046c254 */

int __thiscall FUN_0046c254(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 < *(uint *)(iVar1 + 0xc)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_1 * 4);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    iVar2 = 0;
  }
  if (*(char *)(iVar1 + 0x14) != '\0') {
    if (param_1 < *(uint *)(DAT_004d90dc + 0xc)) {
      iVar2 = *(int *)(*(int *)(DAT_004d90dc + 8) + param_1 * 4);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* Function: FUN_0046c29b */

void __fastcall FUN_0046c29b(undefined4 *param_1)

{
  *param_1 = std::_Facet_base::vftable;
  return;
}



/* Function: FUN_0046c2b0 */

undefined4 * __thiscall FUN_0046c2b0(void *this,byte param_1)

{
  FUN_0046c2da((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_004c56a5(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0046c2da */

void __fastcall FUN_0046c2da(undefined4 *param_1)

{
  *param_1 = std::ctype<char>::vftable;
  if ((int)param_1[4] < 1) {
    if ((int)param_1[4] < 0) {
      o_free(param_1[3]);
    }
  }
  else {
    o_free(param_1[3]);
  }
  o_free(param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  return;
}



/* Function: FUN_0046c320 */

byte * __thiscall FUN_0046c320(void *this,byte *param_1,byte *param_2)

{
  uint uVar1;
  
  if (param_1 != param_2) {
    do {
      uVar1 = FUN_0048b1df((uint)*param_1,(UINT *)((int)this + 8));
      *param_1 = (byte)uVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}



/* Function: FUN_0046c360 */

void __thiscall FUN_0046c360(void *this,byte param_1)

{
  FUN_0048b1df((uint)param_1,(UINT *)((int)this + 8));
  return;
}



/* Function: FUN_0046c380 */

byte * __thiscall FUN_0046c380(void *this,byte *param_1,byte *param_2)

{
  uint uVar1;
  
  if (param_1 != param_2) {
    do {
      uVar1 = FUN_0048b2e4((uint)*param_1,(UINT *)((int)this + 8));
      *param_1 = (byte)uVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}



/* Function: FUN_0046c3c0 */

void __thiscall FUN_0046c3c0(void *this,byte param_1)

{
  FUN_0048b2e4((uint)param_1,(UINT *)((int)this + 8));
  return;
}



/* Function: do_widen */

/* Library Function - Single Match
    protected: virtual char const * __thiscall std::ctype<char>::do_widen(char const *,char const
   *,char *)const 
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

char * __thiscall
std::ctype<char>::do_widen(ctype<char> *this,char *param_1,char *param_2,char *param_3)

{
  memcpy(param_3,param_1,(int)param_2 - (int)param_1);
  return param_2;
}



/* Function: FUN_0046c410 */

undefined1 FUN_0046c410(undefined1 param_1)

{
  return param_1;
}



/* Function: do_narrow */

/* Library Function - Single Match
    protected: virtual char const * __thiscall std::ctype<char>::do_narrow(char const *,char const
   *,char,char *)const 
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

char * __thiscall
std::ctype<char>::do_narrow
          (ctype<char> *this,char *param_1,char *param_2,char param_3,char *param_4)

{
  memcpy(param_4,param_1,(int)param_2 - (int)param_1);
  return param_2;
}



/* Function: FUN_0046c460 */

undefined1 FUN_0046c460(undefined1 param_1)

{
  return param_1;
}



/* Function: FUN_0046c472 */

void FUN_0046c472(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar1 = o____lc_codepage_func();
  puVar2 = (undefined4 *)o__calloc_base(0x100,2);
  if (puVar2 == (undefined4 *)0x0) {
    uVar5 = 0;
    puVar2 = (undefined4 *)o___pctype_func();
  }
  else {
    puVar3 = (undefined4 *)o___pctype_func();
    puVar6 = puVar2;
    for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar5 = 1;
  }
  iVar4 = o____lc_locale_name_func();
  iVar4 = *(int *)(iVar4 + 4);
  if (iVar4 != 0) {
    iVar4 = o__wcsdup(iVar4);
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = uVar5;
  param_1[3] = iVar4;
  return;
}



/* Function: FUN_0046c4ea */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __thiscall FUN_0046c4ea(void *this,char *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = 0;
  lock_locales();
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  if (param_1 != (char *)0x0) {
    FUN_0048b0fd((int)this,param_1);
    return (undefined4 *)this;
  }
  FUN_0048ad33();
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined4 *)(*pcVar1)();
  return puVar2;
}



/* Function: FUN_0046c558 */

undefined1 * __fastcall FUN_0046c558(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    puVar2 = &DAT_00408dec;
  }
  else {
    puVar2 = *(undefined1 **)(iVar1 + 0x18);
    if (puVar2 == (undefined1 *)0x0) {
      return (undefined1 *)(iVar1 + 0x1c);
    }
  }
  return puVar2;
}



/* Function: FUN_0046c576 */

void __fastcall FUN_0046c576(int *param_1)

{
  if (*param_1 != 0) {
    o_free(*param_1);
  }
  *param_1 = 0;
  return;
}



/* Function: FUN_0046c594 */

void __fastcall FUN_0046c594(int *param_1)

{
  if (param_1[9] != 0) {
    o_setlocale(0,param_1[9]);
  }
  if (param_1[0xb] != 0) {
    o_free(param_1[0xb]);
  }
  param_1[0xb] = 0;
  if (param_1[9] != 0) {
    o_free(param_1[9]);
  }
  param_1[9] = 0;
  if (param_1[7] != 0) {
    o_free(param_1[7]);
  }
  param_1[7] = 0;
  if (param_1[5] != 0) {
    o_free(param_1[5]);
  }
  param_1[5] = 0;
  if (param_1[3] != 0) {
    o_free(param_1[3]);
  }
  param_1[3] = 0;
  if (param_1[1] != 0) {
    o_free(param_1[1]);
  }
  param_1[1] = 0;
  FUN_0048b1b8(param_1);
  return;
}



/* Function: FUN_0046c627 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_0046c627(int *param_1,int param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int local_5c [13];
  undefined4 local_28 [4];
  undefined4 *local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x46c633;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    local_14 = param_1;
    puVar1 = (undefined4 *)operator_new(0x18);
    local_8 = 0;
    local_18 = puVar1;
    pcVar2 = FUN_0046c558(param_2);
    FUN_0046c4ea(local_5c,pcVar2);
    puVar1[1] = 0;
    *puVar1 = std::ctype<char>::vftable;
    puVar3 = (undefined4 *)FUN_0046c472(local_28);
    puVar1[2] = *puVar3;
    puVar1[3] = puVar3[1];
    puVar1[4] = puVar3[2];
    puVar1[5] = puVar3[3];
    *local_14 = (int)puVar1;
    FUN_0046c594(local_5c);
  }
  return 2;
}



/* Function: FUN_0046c69b */

undefined4 * __fastcall FUN_0046c69b(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



/* Function: FUN_0046c6c0 */

exception * __thiscall FUN_0046c6c0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_cast::vftable;
  return (exception *)this;
}



/* Function: FUN_0046c6e3 */

void FUN_0046c6e3(void)

{
  void *pExceptionObject;
  undefined4 local_10 [3];
  
  FUN_0046c69b(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(pExceptionObject,(ThrowInfo *)&DAT_004d6908);
}



/* Function: FUN_0046c707 */

void __fastcall FUN_0046c707(int *param_1)

{
  code *pcVar1;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)*param_1;
    (*(code *)PTR_guard_check_icall_004da5e8)(1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0046c72c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __fastcall FUN_0046c72c(void *param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c738;
  local_18 = 0;
  lock_locales();
  piVar5 = DAT_004d9098;
  local_8 = 0;
  local_14[0] = DAT_004d9098;
  uVar2 = FUN_0046c217((int *)&DAT_004d9878);
  piVar3 = (int *)FUN_0046c254(param_1,uVar2);
  if ((piVar3 == (int *)0x0) && (piVar3 = piVar5, piVar5 == (int *)0x0)) {
    iVar4 = FUN_0046c627((int *)local_14,(int)param_1);
    piVar3 = local_14[0];
    if (iVar4 == -1) {
      FUN_0046c6e3();
      pcVar1 = (code *)swi(3);
      piVar5 = (int *)(*pcVar1)();
      return piVar5;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0048ae74(local_14[0]);
    pcVar1 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_004da5e8)();
    (*pcVar1)();
    local_14[0] = (int *)0x0;
    DAT_004d9098 = piVar3;
    FUN_0046c707((int *)local_14);
  }
  FUN_0048b1b8(&local_18);
  return piVar3;
}



/* Function: FUN_0046c7d0 */

void __fastcall FUN_0046c7d0(int param_1)

{
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  return;
}



/* Function: locale */

/* Library Function - Single Match
    public: __thiscall std::locale::locale(class std::locale const &)
   
   Library: Visual Studio 2019 Release */

locale * __thiscall std::locale::locale(locale *this,locale *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  *(int **)(this + 4) = piVar1;
  pcVar2 = *(code **)(*piVar1 + 4);
  (*(code *)PTR_guard_check_icall_004da5e8)();
  (*pcVar2)();
  return this;
}



/* Function: FUN_0046c810 */

int __fastcall FUN_0046c810(int param_1)

{
  int iVar1;
  int iVar2;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  UNLOCK();
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar2 = param_1;
  }
  return iVar2;
}



/* Function: FUN_0046c830 */

undefined4 * __thiscall FUN_0046c830(void *this,byte param_1)

{
  *(undefined ***)this = std::_Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_004c56a5(this);
  }
  return (undefined4 *)this;
}



/* Function: ~locale */

/* Library Function - Single Match
    public: __thiscall std::locale::~locale(void)
   
   Library: Visual Studio 2019 Release */

void __thiscall std::locale::~locale(locale *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if (*(int **)(this + 4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 4) + 8);
    (*(code *)PTR_guard_check_icall_004da5e8)();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      (*(code *)PTR_guard_check_icall_004da5e8)(1);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_0046c898 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 __thiscall FUN_0046c898(void *this,undefined4 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int *piVar3;
  locale local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c8a4;
  std::locale::locale(local_18,*(locale **)((int)this + 0x30));
  local_8 = 0;
  piVar3 = FUN_0046c72c(local_18);
  pcVar1 = *(code **)(*piVar3 + 0x20);
  (*(code *)PTR_guard_check_icall_004da5e8)(param_1);
  uVar2 = (*pcVar1)();
  std::locale::~locale(local_18);
  return uVar2;
}



/* Function: FUN_0046c8eb */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_0046c8eb(LPCRITICAL_SECTION param_1)

{
  undefined4 local_14;
  
  InitializeCriticalSection(param_1);
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_0046c942 */

void FUN_0046c942(void)

{
  RaiseException(0xc0000005,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_0046c95a */

void __fastcall FUN_0046c95a(int param_1)

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
  puStack_c = &LAB_004c7347;
  local_10 = ExceptionList;
  uVar5 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  piVar6 = (int *)(param_1 + 4);
  if (*piVar6 != 0) {
    ppvVar4 = &local_10;
    if (*(int *)(param_1 + 0xc) != 0) {
      if (param_1 == 0) {
        piVar6 = (int *)0x0;
      }
      if (piVar6 == (int *)0x0) {
        ExceptionList = &local_10;
        FUN_0046c942();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar3 = (undefined4 *)piVar6[2];
      while (ExceptionList = ppvVar4, puVar3 != (undefined4 *)0x0) {
        pcVar1 = (code *)*puVar3;
        (*(code *)PTR_guard_check_icall_004da5e8)(puVar3[1],uVar5);
        (*pcVar1)();
        puVar2 = (undefined4 *)puVar3[2];
        FUN_004c56a5(puVar3);
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
      (*(code *)PTR_guard_check_icall_004da5e8)(piVar6);
      (*pcVar1)();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0046ca20 */

void __fastcall FUN_0046ca20(int param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  RegHandle = *(REGHANDLE *)(puVar1 + 6);
  *puVar1 = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  EventUnregister(RegHandle);
  return;
}



/* Function: FUN_0046ca43 */

undefined4 * __thiscall FUN_0046ca43(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_0046cc8f(this,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return (undefined4 *)this;
}



/* Function: FUN_0046ca8a */

void FUN_0046ca8a(void)

{
  undefined1 auStack_58 [3];
  undefined1 local_55;
  undefined4 local_54;
  _EVENT_DATA_DESCRIPTOR local_50 [2];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_004d8a80 ^ (uint)auStack_58;
  if ((((DAT_004d7200 != '\0') && (5 < *(uint *)PTR_DAT_004d7204)) &&
      ((*(uint *)(PTR_DAT_004d7204 + 0xc) & 0x2000) != 0)) &&
     ((*(int *)(PTR_DAT_004d7204 + 0x10) == 0 &&
      ((*(uint *)(PTR_DAT_004d7204 + 0x14) & 0x2000) == *(uint *)(PTR_DAT_004d7204 + 0x14))))) {
    local_1c = 0;
    local_14 = 0;
    local_20 = &local_55;
    local_55 = 1;
    local_30 = &local_54;
    local_54 = 1;
    local_18 = 1;
    local_2c = 0;
    local_28 = 4;
    local_24 = 0;
    FUN_00466932((int)PTR_DAT_004d7204,&DAT_004663c1,(LPCGUID)0x0,(LPCGUID)0x0,4,local_50);
  }
  FUN_004c52a0(local_c ^ (uint)auStack_58);
  return;
}



/* Function: FUN_0046cb40 */

void __fastcall FUN_0046cb40(int param_1)

{
  PREGHANDLE RegHandle;
  PVOID pvVar1;
  int iVar2;
  code *pcVar3;
  PVOID pvVar4;
  PVOID extraout_EDX;
  longlong lVar5;
  LARGE_INTEGER local_20;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_004d8a80 ^ (uint)&stack0xfffffffc;
  pvVar1 = *(PVOID *)(param_1 + 0xc);
  iVar2 = *(int *)((int)pvVar1 + 4);
  local_18.Data1 = *(ulong *)(iVar2 + -0x10);
  local_18._4_4_ = *(undefined4 *)(iVar2 + -0xc);
  local_18.Data4._0_4_ = *(undefined4 *)(iVar2 + -8);
  local_18.Data4._4_4_ = *(undefined4 *)(iVar2 + -4);
  RegHandle = (PREGHANDLE)((int)pvVar1 + 0x18);
  pvVar4 = pvVar1;
  local_20._4_4_ = pvVar1;
  if (*(int *)RegHandle != 0 || *(int *)((int)pvVar1 + 0x1c) != 0) {
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    pvVar4 = extraout_EDX;
  }
  *(undefined4 *)((int)pvVar4 + 0x20) = 0;
  *(undefined4 *)((int)pvVar4 + 0x24) = 0;
  pvVar4 = (PVOID)EventRegister(&local_18,FUN_004669d0,pvVar4,RegHandle);
  if (pvVar4 == (PVOID)0x0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)pvVar1 + 0x1c),2,
                        *(undefined2 **)(local_20.s.HighPart + 4),
                        **(undefined2 **)(local_20.s.HighPart + 4));
  }
  else {
    local_20.s.HighPart = (LONG)(PVOID)((uint)pvVar4 & 0xffff | 0x80070000);
    if ((int)pvVar4 < 1) {
      local_20._4_4_ = pvVar4;
    }
    if (local_20.s.HighPart < 0) goto LAB_0046cbfa;
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 8) = 1;
  QueryPerformanceFrequency(&local_20);
  *(DWORD *)(param_1 + 0x10) = local_20.s.LowPart;
  *(LONG *)(param_1 + 0x14) = local_20.s.HighPart;
  lVar5 = __allmul(local_20.s.LowPart,local_20.s.HighPart,6,0);
  *(longlong *)(param_1 + 0x20) = lVar5;
LAB_0046cbfa:
  FUN_004c52a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0046cc11 */

int __fastcall FUN_0046cc11(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = param_1 - (int)param_2;
    do {
      uVar1 = *(ushort *)(iVar2 + (int)param_2);
      if (uVar1 != *param_2) {
        return (-(uint)(uVar1 < *param_2) & 0xfffffffe) + 1;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}



/* Function: FUN_0046cc4d */

undefined4 __fastcall FUN_0046cc4d(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 uVar3;
  ushort *puVar4;
  
  uVar3 = 0;
  puVar4 = param_2;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (uVar1 != 0);
  iVar2 = param_1[4];
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (iVar2 == (int)puVar4 - (int)(param_2 + 1) >> 1) {
    iVar2 = FUN_0046cc11((int)param_1,param_2,iVar2);
    if (iVar2 == 0) {
      uVar3 = 1;
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),uVar3);
}



/* Function: FUN_0046cc8f */

void __thiscall FUN_0046cc8f(void *this,void *param_1,uint param_2)

{
  code *pcVar1;
  void *_Dst;
  undefined4 extraout_ECX;
  void *local_8;
  
  local_8 = this;
  if (param_2 < 0x7fffffff) {
    *(undefined4 *)((int)this + 0x14) = 7;
    if (param_2 < 8) {
      *(uint *)((int)this + 0x10) = param_2;
      memcpy(this,param_1,param_2 * 2);
      *(undefined2 *)(param_2 * 2 + (int)this) = 0;
    }
    else {
      local_8 = (void *)FUN_0046cea8(param_2,7,0x7ffffffe);
      _Dst = (void *)FUN_0046cedd(extraout_ECX,(uint *)&local_8);
      *(void **)this = _Dst;
      *(uint *)((int)this + 0x10) = param_2;
      *(void **)((int)this + 0x14) = local_8;
      memcpy(_Dst,param_1,param_2 * 2);
      *(undefined2 *)(param_2 * 2 + (int)_Dst) = 0;
    }
    return;
  }
  FUN_0046ce98();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0046cd14 */

undefined4 * __thiscall FUN_0046cd14(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 <= *(uint *)((int)this + 0x10)) {
    uVar2 = *(uint *)((int)this + 0x10) - param_2;
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      this = *this;
    }
    FUN_0046cc8f(param_1,(void *)((int)this + param_2 * 2),param_3);
    return param_1;
  }
  FUN_0046bba7();
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar1)();
  return puVar3;
}



/* Function: FUN_0046cd6b */

void __fastcall FUN_0046cd6b(int *param_1)

{
  if (0xf < (uint)param_1[5]) {
    FUN_0046996d(*param_1,param_1[5] + 1);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



/* Function: FUN_0046cd96 */

void __fastcall FUN_0046cd96(undefined1 *param_1)

{
  if (0xf < *(uint *)(param_1 + 0x14)) {
    FUN_0046996d(*(int *)param_1,*(uint *)(param_1 + 0x14) + 1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  return;
}



/* Function: FUN_0046cda1 */

uint __thiscall FUN_0046cda1(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 | 0xf;
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = 0x7fffffff;
  if (((uVar3 < 0x80000000) && (uVar1 <= 0x7fffffff - (uVar1 >> 1))) &&
     (uVar1 = (uVar1 >> 1) + uVar1, uVar2 = uVar3, uVar3 < uVar1)) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Function: FUN_0046cddd */

void __thiscall FUN_0046cddd(void *this,void *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  void *_Dst;
  
  if (param_2 < 0x80000000) {
    *(undefined4 *)((int)this + 0x14) = 0xf;
    if (param_2 < 0x10) {
      *(uint *)((int)this + 0x10) = param_2;
      memcpy(this,param_1,param_2);
      *(undefined1 *)(param_2 + (int)this) = 0;
    }
    else {
      uVar2 = FUN_0046cda1(this,param_2);
      _Dst = FUN_00469cf9(uVar2 + 1);
      *(void **)this = _Dst;
      *(uint *)((int)this + 0x10) = param_2;
      *(uint *)((int)this + 0x14) = uVar2;
      memcpy(_Dst,param_1,param_2);
      *(undefined1 *)((int)_Dst + param_2) = 0;
    }
    return;
  }
  FUN_0046ce98();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0046ce57 */

undefined4 * __thiscall FUN_0046ce57(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0046cddd(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (undefined4 *)this;
}



/* Function: FUN_0046ce98 */

void FUN_0046ce98(void)

{
  FUN_0048ac93("string too long");
  return;
}



/* Function: FUN_0046cea8 */

uint __fastcall FUN_0046cea8(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 | 7;
  if (((uVar2 <= param_3) && (param_2 <= param_3 - (param_2 >> 1))) &&
     (uVar1 = (param_2 >> 1) + param_2, param_3 = uVar2, uVar2 < uVar1)) {
    param_3 = uVar1;
  }
  return param_3;
}



/* Function: FUN_0046cedd */

void __fastcall FUN_0046cedd(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  
  *param_2 = *param_2 + 1;
  if (*param_2 < 0x80000000) {
    FUN_00469cf9(*param_2 * 2);
    *param_2 = *param_2 - 1;
    return;
  }
  FUN_00467233();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0046cf05 */

undefined4 * __thiscall FUN_0046cf05(void *this,undefined4 *param_1)

{
  uint uVar1;
  code *pcVar2;
  void *_Dst;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  void *local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = param_1[4];
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  local_8 = this;
  if (uVar1 < 0x7fffffff) {
    *(undefined4 *)((int)this + 0x14) = 7;
    if (uVar1 < 8) {
      *(uint *)((int)this + 0x10) = uVar1;
      *(undefined4 *)this = *param_1;
      *(undefined4 *)((int)this + 4) = param_1[1];
      *(undefined4 *)((int)this + 8) = param_1[2];
      *(undefined4 *)((int)this + 0xc) = param_1[3];
    }
    else {
      local_8 = (void *)FUN_0046cea8(uVar1,7,0x7ffffffe);
      _Dst = (void *)FUN_0046cedd(extraout_ECX,(uint *)&local_8);
      *(void **)((int)this + 0x14) = local_8;
      *(void **)this = _Dst;
      *(uint *)((int)this + 0x10) = uVar1;
      memcpy(_Dst,param_1,uVar1 * 2 + 2);
    }
    return (undefined4 *)this;
  }
  FUN_0046ce98();
  pcVar2 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar2)();
  return puVar3;
}



/* Function: FUN_0046cf92 */

void __fastcall FUN_0046cf92(int *param_1)

{
  if (7 < (uint)param_1[5]) {
    FUN_0046996d(*param_1,param_1[5] * 2 + 2);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}



/* Function: FUN_0046cfc5 */

void __fastcall FUN_0046cfc5(undefined2 *param_1)

{
  if (7 < *(uint *)(param_1 + 10)) {
    FUN_0046996d(*(int *)param_1,*(uint *)(param_1 + 10) * 2 + 2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 7;
  *param_1 = 0;
  return;
}



/* Function: FUN_0046cfd0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void * __thiscall FUN_0046cfd0(void *this,undefined4 *param_1)

{
  FUN_0046cf05(this,param_1);
  FUN_0046cf05((void *)((int)this + 0x18),param_1 + 6);
  FUN_0046cf05((void *)((int)this + 0x30),param_1 + 0xc);
  *(undefined1 *)((int)this + 0x48) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)((int)this + 0x49) = *(undefined1 *)((int)param_1 + 0x49);
  *(undefined1 *)((int)this + 0x4a) = *(undefined1 *)((int)param_1 + 0x4a);
  return this;
}



/* Function: FUN_0046d02c */

void FUN_0046d02c(int param_1)

{
  if (param_1 != 0) {
    do {
      FUN_0046e212((int *)&DAT_004d9888,(short *)&DAT_0040e3ec);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  FUN_0046e3e4((int *)&DAT_004d9888);
  return;
}



/* Function: FUN_0046d068 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0046d068(void *param_1)

{
  longlong lVar1;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  int in_stack_00000018;
  int in_stack_00000020;
  char in_stack_00000024;
  int local_2c [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 1;
  FUN_0046cf05(param_1,(undefined4 *)&stack0x00000008);
  uVar4 = in_stack_00000020 - in_stack_00000018;
  if (0 < (int)uVar4) {
    lVar1 = (ulonglong)(uVar4 + 1) * 2;
    psVar2 = (short *)FUN_004c57ac(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    psVar2[uVar4] = 0;
    FUN_004706da((undefined4 *)psVar2,0x20,uVar4);
    if (in_stack_00000024 == '\0') {
      piVar3 = (int *)FUN_00470636(local_2c,(undefined4 *)&stack0x00000008,psVar2);
    }
    else {
      piVar3 = (int *)FUN_0046e41e(local_2c,psVar2,(undefined4 *)&stack0x00000008);
    }
    FUN_0047069b(param_1,piVar3);
    FUN_0046cf92(local_2c);
    o_free(psVar2);
  }
  FUN_0046cf92((int *)&stack0x00000008);
  FUN_004c693e();
  return;
}



/* Function: FUN_0046d116 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall
FUN_0046d116(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *this_00;
  void *pvVar2;
  char cVar3;
  undefined4 uVar4;
  double *pdVar5;
  int *piVar6;
  int *this_01;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  void *pvVar11;
  int iVar12;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  uint local_2f4;
  undefined4 *local_2f0;
  undefined4 *local_2ec;
  undefined4 local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  uint local_2d8;
  int *local_2d4;
  int *local_2d0;
  int local_2cc;
  uint local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  undefined4 local_2b8;
  void *local_2b4;
  undefined4 *local_2b0;
  int local_2ac [22];
  double local_254 [5];
  int local_22c [22];
  double local_1d4 [5];
  int local_1ac [22];
  double local_154 [5];
  int local_12c [22];
  undefined8 local_d4 [4];
  int local_b4;
  int local_ac [13];
  int local_78 [9];
  double local_54;
  int local_4c [2];
  int local_44 [3];
  uint local_38;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2f0;
  local_2d0 = param_1;
  local_2c0 = 0;
  local_2bc = 0;
  local_2b8 = 0;
  local_2f0 = (undefined4 *)0x0;
  local_2ec = (undefined4 *)0x0;
  local_2e8 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  pcVar1 = *(code **)(*param_1 + 4);
  local_2b4 = this;
  (*(code *)PTR_guard_check_icall_004da5e8)
            (param_2,param_3,param_4,*(undefined4 *)((int)this + 4),&local_2c0,&local_2f0);
  (*pcVar1)();
  pvVar2 = local_2b4;
  this_01 = (int *)((int)local_2b4 + 0x14);
  pvVar11 = (void *)((int)local_2b4 + 8);
  local_2b0 = (undefined4 *)((*(int *)((int)local_2b4 + 0x18) - *this_01) / 0xc);
  piVar6 = local_2d0 + 2;
  local_2d4 = this_01;
  FUN_0046cfd0(local_78,piVar6);
  local_8._0_1_ = 2;
  FUN_0046e16e(pvVar11,local_78);
  local_8._0_1_ = 1;
  FUN_0046a626(local_78);
  FUN_0046cfd0(local_78,piVar6);
  local_8._0_1_ = 3;
  FUN_0046e072(local_2b4,0,local_38);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0046a626(local_78);
  puVar9 = local_2ec;
  for (puVar7 = local_2f0; puVar7 != puVar9; puVar7 = puVar7 + 0x13) {
    FUN_0046cfd0(local_78,puVar7);
    local_8 = CONCAT31(local_8._1_3_,4);
    this_00 = *(undefined4 **)((int)pvVar2 + 0xc);
    if (this_00 == *(undefined4 **)((int)pvVar2 + 0x10)) {
      FUN_0046eaa5(pvVar11,this_00,local_78);
    }
    else {
      FUN_0046cfd0(this_00,local_78);
      *(int *)((int)pvVar2 + 0xc) = *(int *)((int)pvVar2 + 0xc) + 0x4c;
    }
    FUN_0046e072(local_2b4,0,local_38);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0046a626(local_78);
    this_01 = local_2d4;
  }
  local_2c8 = 0;
  if ((local_2bc - local_2c0) / 0xc != 0) {
    local_2cc = (int)local_2b0 * 0xc;
    local_2c4 = 0;
    do {
      iVar12 = local_2c4;
      iVar8 = 0;
      local_8._0_1_ = 5;
      puVar7 = (undefined4 *)this_01[1];
      local_2e4 = iVar8;
      local_2e0 = iVar8;
      local_2dc = iVar8;
      if (puVar7 == (undefined4 *)this_01[2]) {
        FUN_0046e8ad(this_01,puVar7,&local_2e4);
      }
      else {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        this_01[1] = this_01[1] + 0xc;
      }
      FUN_004704e7(&local_2e4);
      FUN_0046d67c(local_22c);
      FUN_0046d67c(local_1ac);
      FUN_0046d67c(local_12c);
      piVar6 = local_2d0;
      local_8._0_1_ = 8;
      local_d4[0] = 0;
      puVar7 = *(undefined4 **)(local_2c0 + 4 + iVar12);
      puVar9 = *(undefined4 **)(local_2c0 + iVar12);
      local_2b0 = puVar7;
      local_b4 = iVar8;
      for (; puVar9 != puVar7; puVar9 = puVar9 + 0x20) {
        FUN_0046d6fd(local_ac,puVar9);
        local_8 = CONCAT31(local_8._1_3_,9);
        uVar4 = FUN_00470450(local_1d4);
        if ((char)uVar4 == '\0') {
          if ((char)piVar6[0x15] == '\0') {
LAB_0046d39a:
            cVar3 = FUN_004703b0(&local_54,(uint *)local_1d4);
            if (cVar3 != '\0') goto LAB_0046d3ad;
          }
          else {
            cVar3 = FUN_004703b0(local_1d4,(uint *)&local_54);
            if (cVar3 != '\0') goto LAB_0046d3ad;
            if ((char)piVar6[0x15] == '\0') goto LAB_0046d39a;
          }
        }
        else {
LAB_0046d3ad:
          FUN_0046d769(local_22c,local_ac);
        }
        uVar4 = FUN_00470450(local_154);
        if ((char)uVar4 == '\0') {
          if ((char)piVar6[0x15] == '\0') {
            cVar3 = FUN_004703b0(local_154,(uint *)&local_54);
            if (cVar3 != '\0') goto LAB_0046d3fe;
            if ((char)piVar6[0x15] != '\0') goto LAB_0046d3eb;
          }
          else {
LAB_0046d3eb:
            cVar3 = FUN_004703b0(&local_54,(uint *)local_154);
            if (cVar3 != '\0') goto LAB_0046d3fe;
          }
        }
        else {
LAB_0046d3fe:
          FUN_0046d769(local_1ac,local_ac);
        }
        FUN_00470077(local_d4,(uint *)&local_54);
        local_8._0_1_ = 8;
        FUN_0047047e(local_ac);
        this_01 = local_2d4;
        iVar12 = local_2c4;
      }
      pdVar5 = FUN_0046fe85(local_d4,&local_54,
                            *(int *)(local_2c0 + 4 + iVar12) - *(int *)(local_2c0 + iVar12) >> 7);
      local_8._0_1_ = 10;
      FUN_00470029(local_d4,pdVar5);
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_0046cf92(local_4c);
      FUN_0046e49a((undefined4 *)(local_2c0 + iVar12),&local_2f8,*(int **)(local_2c0 + iVar12),
                   local_1ac);
      FUN_0046e49a((undefined4 *)(local_2c0 + iVar12),&local_2fc,*(int **)(local_2c0 + iVar12),
                   local_22c);
      FUN_0046e49a((undefined4 *)(local_2c0 + iVar12),&local_300,*(int **)(local_2c0 + iVar12),
                   local_12c);
      local_2d8 = *(int *)(local_2c0 + 4 + iVar12) - *(int *)(local_2c0 + iVar12) >> 7;
      if (local_2d8 != 0) {
        local_2b0 = (undefined4 *)0x0;
        uVar10 = 0;
        do {
          FUN_0046d6fd(local_2ac,(undefined4 *)(*(int *)(local_2c0 + iVar12) + (int)local_2b0));
          uStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          local_1c = 0;
          local_18 = 7;
          local_2c = 0;
          local_8 = CONCAT31(local_8._1_3_,0xc);
          uVar4 = FUN_00470450(local_254);
          if ((char)uVar4 == '\0') {
            piVar6 = (int *)FUN_004702a4(local_254,local_44);
            FUN_0047069b(&local_2c,piVar6);
            FUN_0046cf92(local_44);
          }
          else {
            FUN_0046fe14(&local_2c,(short *)&DAT_0040e3f8);
          }
          local_2f4 = uVar10 + 1;
          FUN_0046e072(local_2b4,local_2f4,local_1c);
          pvVar11 = (void *)(*this_01 + local_2cc);
          puVar7 = *(undefined4 **)((int)pvVar11 + 4);
          if (puVar7 == *(undefined4 **)((int)pvVar11 + 8)) {
            FUN_0046ebd0(pvVar11,puVar7,&local_2c);
          }
          else {
            FUN_0046cf05(puVar7,&local_2c);
            *(int *)((int)pvVar11 + 4) = *(int *)((int)pvVar11 + 4) + 0x18;
          }
          FUN_0046cf92(&local_2c);
          local_8 = CONCAT31(local_8._1_3_,8);
          FUN_0047047e(local_2ac);
          local_2b0 = local_2b0 + 0x20;
          uVar10 = local_2f4;
          iVar12 = local_2c4;
        } while (local_2f4 < local_2d8);
      }
      FUN_0047047e(local_12c);
      FUN_0047047e(local_1ac);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0047047e(local_22c);
      local_2cc = local_2cc + 0xc;
      local_2c4 = iVar12 + 0xc;
      local_2c8 = local_2c8 + 1;
    } while (local_2c8 < (uint)((local_2bc - local_2c0) / 0xc));
  }
  FUN_0046e19f((int *)&local_2f0);
  FUN_0046e116(&local_2c0);
  FUN_004c693e();
  return;
}



/* Function: FUN_0046d67c */

undefined4 * __fastcall FUN_0046d67c(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_00465788;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 7;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 7;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 7;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  param_1[0x1e] = 1;
  return param_1;
}



/* Function: FUN_0046d6fd */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void * __thiscall FUN_0046d6fd(void *this,undefined4 *param_1)

{
  FUN_0046cf05(this,param_1);
  FUN_0046cf05((void *)((int)this + 0x18),param_1 + 6);
  FUN_0046cf05((void *)((int)this + 0x30),param_1 + 0xc);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  FUN_0046fe43((void *)((int)this + 0x58),(undefined8 *)(param_1 + 0x16));
  return this;
}



/* Function: FUN_0046d769 */

void * __thiscall FUN_0046d769(void *this,undefined4 *param_1)

{
  FUN_0046fff9(this,param_1);
  FUN_0046fff9((void *)((int)this + 0x18),param_1 + 6);
  FUN_0046fff9((void *)((int)this + 0x30),param_1 + 0xc);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  FUN_00470029((void *)((int)this + 0x58),(undefined8 *)(param_1 + 0x16));
  return this;
}



/* Function: FUN_0046d7bf */
