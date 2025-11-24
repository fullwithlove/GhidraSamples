/* Function: FUN_00402cf0 */

void FUN_00402cf0(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_0041427c)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00402d73 */

void FUN_00402d73(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x34b;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_00402e08 */

uint __thiscall FUN_00402e08(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_00402e3f:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_00402e3f;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_00402e4b */

void __fastcall
FUN_00402e4b(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7,void *param_8,undefined4 param_9,void *param_10,
            undefined4 param_11,void *param_12,undefined4 param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,undefined4 param_18,void *param_19,
            void *param_20)

{
  _EVENT_DATA_DESCRIPTOR local_128 [2];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [4];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  uint local_8;
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  FUN_004031f9(param_20,local_18);
  FUN_00403247(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_004031f9(param_17,local_48);
  FUN_00403247(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00403247(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_004031f9(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_00403247(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_00403247(param_8,local_d8);
  local_e8 = param_7;
  local_e4 = 0;
  local_e0 = 4;
  local_dc = 0;
  local_f4 = 0;
  local_f8 = *param_6;
  local_f0 = 8;
  local_ec = 0;
  local_104 = 0;
  local_108 = *param_5;
  local_100 = 8;
  local_fc = 0;
  FUN_00402d73(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x12,local_128);
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403006 */

void __fastcall
FUN_00403006(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6,void *param_7,undefined4 param_8,void *param_9,undefined4 param_10,
            void *param_11,undefined4 param_12,void *param_13,undefined4 param_14,void *param_15,
            void *param_16,undefined4 param_17,void *param_18,void *param_19,undefined4 param_20,
            undefined4 param_21,void *param_22)

{
  _EVENT_DATA_DESCRIPTOR local_148 [2];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108 [4];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8 [4];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [4];
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [4];
  uint local_8;
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  FUN_00403247(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_004031f9(param_19,local_48);
  FUN_00403247(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_004031f9(param_16,local_78);
  FUN_00403247(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_00403247(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_004031f9(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_00403247(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_00403247(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00402d73(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004031f9 */

void __thiscall FUN_004031f9(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = &DAT_004020e4;
    iVar3 = 2;
  }
  else {
    psVar2 = psVar4;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    iVar3 = ((int)psVar2 - (int)(psVar4 + 1) >> 1) * 2 + 2;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  *param_1 = psVar4;
  param_1[2] = iVar3;
  return;
}



/* Function: FUN_00403247 */

void __thiscall FUN_00403247(void *this,undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
                    /* WARNING: Load size is inaccurate */
  pcVar3 = *this;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
    pcVar2 = (char *)0x1;
  }
  else {
    pcVar2 = pcVar3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = pcVar2 + (1 - (int)(pcVar3 + 1));
  }
  param_1[1] = 0;
  param_1[3] = 0;
  *param_1 = pcVar3;
  param_1[2] = pcVar2;
  return;
}



/* Function: FUN_00403290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403290(void)

{
  _DAT_0041370c = FUN_004044f0;
  DAT_00413724 = FUN_00404500;
  _DAT_00413718 = FUN_00404590;
  return;
}



/* Function: FUN_004032c0 */

void FUN_004032c0(void)

{
  FUN_0040f1bf(FUN_00410700);
  return;
}



/* Function: FUN_004032e0 */

void FUN_004032e0(void)

{
  FUN_0040f1bf(FUN_00410730);
  return;
}



/* Function: FUN_00403300 */

void FUN_00403300(void)

{
  DAT_004136fc = FUN_004054a0;
  DAT_004136cc = &PTR_s_WilError_03_00413060;
  DAT_004136e4 = &DAT_00413298;
  return;
}



/* Function: FUN_00403330 */

void FUN_00403330(void)

{
  DAT_0041372c = FUN_00403d50;
  DAT_00413704 = DebugBreak;
  DAT_00413728 = FUN_00403d90;
  DAT_004136f0 = FUN_00405570;
  DAT_004136e0 = FUN_004056a0;
  DAT_00413730 = FUN_004055c0;
  DAT_00413700 = FUN_00405630;
  return;
}



/* Function: FUN_00403380 */

void FUN_00403380(void)

{
  FUN_0040f1bf(FUN_00410740);
  return;
}



/* Function: FUN_004033a0 */

void FUN_004033a0(void)

{
  FUN_0040b7ca();
  FUN_0040f1bf(FUN_00410760);
  return;
}



/* Function: FUN_004033c0 */

void FUN_004033c0(void)

{
  FUN_0040f1bf(FUN_00410770);
  return;
}



/* Function: FUN_004033e0 */

void FUN_004033e0(void)

{
  DAT_00413804 = FUN_004087e0;
  DAT_004137fc = FUN_00408860;
  DAT_004137f0 = FUN_004088e0;
  DAT_004137e8 = FUN_00408950;
  DAT_004137e0 = FUN_00406c10;
  return;
}



/* Function: FUN_00403420 */

void FUN_00403420(void)

{
  DAT_004137f4 = FUN_00409000;
  return;
}



/* Function: FUN_00403440 */

void FUN_00403440(void)

{
  DAT_004136f4 = FUN_004093a0;
  return;
}



/* Function: FUN_00403460 */

void FUN_00403460(void)

{
  DAT_0041372c = FUN_00403d50;
  DAT_00413704 = DebugBreak;
  DAT_00413728 = FUN_00403d90;
  return;
}



/* Function: FUN_00403485 */

undefined4 __fastcall FUN_00403485(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_0040350c */

undefined4 __fastcall FUN_0040350c(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00403572 */

undefined4 __thiscall FUN_00403572(void *this,int param_1)

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
    uVar2 = FUN_0040360d((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_004035c9 */

undefined4 __cdecl FUN_004035c9(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00403660((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_0040360d */

undefined4 __fastcall FUN_0040360d(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_00403660 */

undefined4 __fastcall
FUN_00403660(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_0040fc7e(param_1,uVar1,param_4,param_5);
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



/* Function: FUN_004036f0 */

char * __fastcall FUN_004036f0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_00403710 */

undefined4 * __thiscall FUN_00403710(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403745 */

short * __thiscall FUN_00403745(void *this,short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_00403660((int)param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_0040379c */

void __fastcall FUN_0040379c(short *param_1,int param_2,int param_3)

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
  
  pcVar3 = DAT_004136d4;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040ffd5;
  local_10 = ExceptionList;
  local_14 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar3 != (code *)0x0) && (DAT_004136e8 != '\0')) {
      (*(code *)PTR_guard_check_icall_0041427c)(param_3,param_1,param_2,local_14);
      (*pcVar3)();
      if (*param_1 != 0) goto LAB_00403a0b;
    }
    memset(local_214,0,0x200);
    pcVar3 = DAT_004136f0;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_004136f0 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0041427c)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_00403745(pcVar3,param_1,psVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_218 = FUN_00403745(pcVar3,param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_00403745(pvVar4,local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar2 = FUN_00403745(local_214,local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar2 = FUN_00403745((void *)0x0,psVar2,psVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar2 = FUN_00403745(this,psVar2,psVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar2 = FUN_00403745(pvVar4,psVar2,psVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00403745(pvVar4,psVar2,psVar1,&DAT_00401a20);
        }
        else {
          FUN_00403745(pvVar4,psVar2,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_00403745(pvVar4,psVar2,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_00403a0b:
  ExceptionList = local_10;
  FUN_0040ef30(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403a34 */

uint * __thiscall FUN_00403a34(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00403dd1((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00403a58 */

LPVOID __fastcall FUN_00403a58(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_00410005;
  local_10 = ExceptionList;
  uVar2 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_004136bc == (FARPROC)0x0) {
    if (DAT_00413750 != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_004136bc = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_00413750 = '\x01';
    if (DAT_004136bc == (FARPROC)0x0) {
      DAT_00413750 = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_004136bc;
  (*(code *)PTR_guard_check_icall_0041427c)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00403b08 */

undefined4 * __thiscall FUN_00403b08(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_00403b41((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403b41 */

void __fastcall FUN_00403b41(undefined4 *param_1)

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



/* Function: FUN_00403b78 */

undefined4 __thiscall FUN_00403b78(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_00403b41((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_00403bc2;
    *piVar1 = 0;
    FUN_00403b41((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_00403bc2:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_00403bd1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403bd1(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00413740;
  _DAT_00413744 = param_1;
  LOCK();
  DAT_00413740 = DAT_00413740 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00403bea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403bea(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0041375c;
  _DAT_004136c4 = param_1;
  LOCK();
  DAT_0041375c = DAT_0041375c + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00403c03 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403c03(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004137c4;
  _DAT_00413758 = param_1;
  LOCK();
  DAT_004137c4 = DAT_004137c4 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00403c20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403c20(undefined4 param_1)

{
  _DAT_004137a8 = param_1;
  return 1;
}



/* Function: FUN_00403c3a */

void FUN_00403c3a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00413728;
  if (DAT_00413728 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403c6a */

void FUN_00403c6a(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
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
      FUN_0040350c(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403d50 */

undefined * FUN_00403d50(void)

{
  if (DAT_00413748 == '\0') {
    FUN_00403c6a((LPCWSTR)FUN_00403c20,(uint *)0x0,&DAT_00413760,0x40);
    DAT_00413748 = '\x01';
  }
  return &DAT_00413760;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00403d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00403d90 */

void FUN_00403d90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00403dd1 */

uint __fastcall FUN_00403dd1(uint param_1)

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



/* Function: FUN_00403fa6 */

DWORD __fastcall
FUN_00403fa6(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00410028;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00405d25(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_00404011 */

uint __fastcall
FUN_00404011(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0041004b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00405d25(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_00404092 */

void __fastcall FUN_00404092(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00404011(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_004040af */

char * __fastcall FUN_004040af(char *param_1)

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



/* Function: FUN_004040cd */

int __fastcall FUN_004040cd(short *param_1)

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



/* Function: FUN_004040f5 */

undefined1 FUN_004040f5(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_00413700;
  if (DAT_00413720 != '\0') {
    return 1;
  }
  if (DAT_00413700 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00404125 */

void __thiscall FUN_00404125(void *this,undefined4 *param_1)

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
  iVar10 = FUN_004040cd((short *)param_1[0x12]);
  iVar1 = FUN_004040cd((short *)param_1[0xf]);
  iVar2 = FUN_004040cd((short *)param_1[5]);
  pcVar3 = FUN_004040af((char *)param_1[0x11]);
  pcVar4 = FUN_004040af((char *)param_1[0xe]);
  pcVar5 = FUN_004040af((char *)param_1[0xc]);
  pcVar6 = FUN_004040af((char *)param_1[9]);
  pcVar7 = FUN_004040af((char *)param_1[8]);
  pcVar8 = FUN_004040af((char *)param_1[7]);
  pcVar9 = FUN_004040af((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_00403b41(this_00);
    FUN_00403b78(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_00405d6c(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_00405ddc(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_00405ddc(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_00405ddc(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_00405ddc(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_00405ddc(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_00405ddc(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_00405d6c(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_00405ddc(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_00405d6c(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_004042b8 */

undefined4 * __thiscall FUN_004042b8(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401034;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_00404125((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_00404300 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00404300(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_0040379c(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_00403b78(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
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
  FUN_004043e0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  return this;
}



/* Function: FUN_004043e0 */

void __fastcall FUN_004043e0(undefined4 *param_1)

{
  FUN_00403b41(param_1 + 0x1b);
  FUN_00403b41(param_1 + 0x19);
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_0040440d */

void FUN_0040440d(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_00413724;
  if (DAT_00413724 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040442d */

void __fastcall FUN_0040442d(int *param_1,undefined2 *param_2,uint param_3)

{
  code *pcVar1;
  
  if (param_2 != (undefined2 *)0x0) {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*pcVar1)();
    FUN_004035c9(param_2,param_3,L"std::exception: %hs");
  }
  return;
}



/* Function: FUN_0040446d */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_0040446d(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_004136dc;
  (*(code *)PTR_guard_check_icall_0041427c)();
  iVar2 = (*pcVar1)();
  if ((iVar2 < 0) && (param_1 == 0)) {
    FUN_004044cb();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: Catch@0040449e */

undefined * Catch_0040449e(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x20),*(undefined2 **)(unaff_EBP + -0x1c),
               *(uint *)(unaff_EBP + -0x18));
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (-1 < iVar1) {
    iVar1 = -0x7ff8fdc2;
  }
  *(int *)(unaff_EBP + -0x14) = iVar1;
  return &DAT_004044c8;
}



/* Function: Catch_All@004044c2 */

undefined * Catch_All_004044c2(void)

{
  return &DAT_004044c8;
}



/* Function: FUN_004044cb */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004044cb(void)

{
  return;
}



/* Function: FUN_004044f0 */

void FUN_004044f0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00404500 */

void FUN_00404500(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_004042b8(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_00410f7c);
}



/* Function: FUN_00404530 */

exception * __thiscall FUN_00404530(void *this,exception *param_1)

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
  FUN_00403b08((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_00403b08((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00404590 */

void FUN_00404590(uint *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00410091;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0;
  }
  pcVar1 = DAT_004136f4;
  *param_4 = 0;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_2,param_3,param_4);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) goto LAB_004045ed;
  }
  pcVar1 = DAT_0041371c;
  if (DAT_0041371c == (code *)0x0) {
    if (DAT_004136dc != 0) {
      uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
    }
    FUN_004046c8((ThrowInfo *)0x0);
    return;
  }
  (*(code *)PTR_guard_check_icall_0041427c)(param_2,param_3,param_4);
  uVar2 = (*pcVar1)();
LAB_004045ed:
  *param_1 = uVar2;
  FUN_0040476d(uVar2);
  return;
}



/* Function: Catch@0040462a */

undefined * Catch_0040462a(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_0040379c(psVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_00404664;
}



/* Function: Catch@00404674 */

undefined * Catch_00404674(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x1c),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_00403dd1(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00404664;
}



/* Function: Catch_All@0040469c */

undefined * Catch_All_0040469c(void)

{
  uint uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_0040446d(*(int *)(unaff_EBP + 0xc));
  if ((int)uVar1 < 0) {
    *(uint *)(unaff_EBP + -0x30) = uVar1;
    uVar1 = FUN_00403dd1(uVar1);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(uint *)(unaff_EBP + -0x2c) = uVar1;
    return &DAT_00404664;
  }
  return &DAT_00404764;
}



/* Function: FUN_004046c8 */

void FUN_004046c8(ThrowInfo *param_1)

{
  int unaff_EBP;
  void *unaff_retaddr;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(unaff_retaddr,param_1);
}



/* Function: Catch@004046d4 */

undefined * Catch_004046d4(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x18);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_0040379c(psVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_00404664;
}



/* Function: Catch@0040470e */

undefined * Catch_0040470e(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x20),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_00403dd1(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00404664;
}



/* Function: Catch@00404736 */

undefined * Catch_00404736(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x24),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007023e;
  uVar1 = FUN_00403dd1(0x8007023e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00404664;
}



/* Function: Catch_All@0040475e */

undefined * Catch_All_0040475e(void)

{
  return &DAT_00404764;
}



/* Function: FUN_0040476d */

void __fastcall FUN_0040476d(uint param_1)

{
  uint uVar1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  uVar1 = FUN_00403dd1(param_1);
  *(uint *)(unaff_ESI + 4) = uVar1;
  *(undefined4 *)(unaff_ESI + 8) = unaff_EBX;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_004047a0 */

void __fastcall
FUN_004047a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
  puStack_c = &LAB_004100b4;
  local_10 = ExceptionList;
  uVar3 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar4 = *param_8;
  param_15[2] = iVar4;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar4 = FUN_00403bd1(iVar4);
  }
  else if (param_7 == 1) {
    iVar4 = FUN_00403bea(iVar4);
  }
  else if (param_7 == 2) {
    if (-1 < iVar4) {
      iVar4 = -0x7ff8fd64;
      FUN_00405d25(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar5 = FUN_00403dd1(0x8007029c);
      param_15[3] = uVar5;
    }
    iVar4 = FUN_00403c03(iVar4);
  }
  else if (param_7 == 3) {
    iVar4 = FUN_00403c20(iVar4);
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
  iVar6 = DAT_0041374c + 1;
  DAT_0041374c = DAT_0041374c + 1;
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
  pcVar1 = DAT_0041372c;
  if (DAT_0041372c == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0041427c)(uVar3);
    iVar4 = (*pcVar1)();
  }
  pcVar1 = DAT_004136e0;
  param_15[0x13] = iVar4;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004136fc;
  if (DAT_004136fc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004136f8;
  if (DAT_004136f8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00413710;
  if ((DAT_00413710 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_00404cc5();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar3 = FUN_00403dd1(0x8000ffff);
    param_15[3] = uVar3;
  }
  pcVar1 = DAT_004136c8;
  if (DAT_004136d0 == '\0') {
    if (DAT_004136c8 == (code *)0x0) {
      BVar8 = IsDebuggerPresent();
      cVar2 = BVar8 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0041427c)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_004049a8;
  }
  else {
LAB_004049a8:
    pcVar1 = DAT_004136d4;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_004136d4 != (code *)0x0) && (DAT_004136e8 == '\0')) {
        (*(code *)PTR_guard_check_icall_0041427c)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_0040379c(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00404a11;
    }
  }
  pcVar1 = DAT_004136d4;
  if ((DAT_004136d4 != (code *)0x0) && (DAT_004136e8 == '\0')) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00404a11:
  pcVar1 = DAT_00413704;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_004136d8 != '\0')) &&
     (DAT_00413704 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404a57 */

void __fastcall FUN_00404a57(int param_1)

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
  
  pcVar1 = DAT_00413734;
  if (DAT_00413734 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_00413714;
  if (DAT_00413714 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00404ac4;
  uVar3 = 1;
  do {
    FUN_00403c3a(uVar3);
    iVar2 = extraout_ECX;
LAB_00404ac4:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_00404ae4 */

void __fastcall
FUN_00404ae4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  code *pcVar1;
  
  FUN_00405e65(param_1,param_2,param_3,param_1,param_1,param_6,param_7,param_8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404b04 */

void __fastcall
FUN_00404b04(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 extraout_ECX;
  uint local_24 [4];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  int local_8;
  
  local_8 = param_1;
  puVar2 = FUN_00403a34((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  FUN_00404ae4(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14,
               (short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404b4a */

void __fastcall FUN_00404b4a(int param_1,int param_2)

{
  code *pcVar1;
  void *pvVar2;
  uint *puVar3;
  void *this;
  undefined4 extraout_ECX;
  int in_stack_00000010;
  uint local_24 [4];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  int local_8;
  
  local_8 = param_1;
  pvVar2 = (void *)FUN_00403fa6(param_1,param_2,0x401acc,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00403a34(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  FUN_00404ae4(local_8,param_2,0x401acc,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14
               ,(short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404bac */

void __fastcall FUN_00404bac(int param_1,int param_2,int param_3,uint param_4)

{
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100d7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405ec8(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404bfa */

void __fastcall FUN_00404bfa(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405f0c(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404c44 */

void __fastcall FUN_00404c44(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00404b4a(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404c80 */

void __fastcall FUN_00404c80(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100d7;
  local_10 = ExceptionList;
  uVar2 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00404b04(param_1,0xc27,0x401acc,param_1,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2);
  return;
}



/* Function: FUN_00404cc5 */

void FUN_00404cc5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404cd1 */

void FUN_00404cd1(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00404c44(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404cfe */

void FUN_00404cfe(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00404c44(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404d29 */

uint __fastcall FUN_00404d29(void *param_1,int *param_2)

{
  uint uVar1;
  int unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  uVar1 = FUN_00404f4c(param_1,local_c);
  if ((int)uVar1 < 0) {
    FUN_00404bac(unaff_retaddr,100,0x401aa0,uVar1);
    FUN_00404bac(unaff_retaddr,0x6d,0x401aa0,uVar1);
  }
  else {
    *param_2 = local_c[0] << 2;
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00404d86 */

void __thiscall FUN_00404d86(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_00404cc5();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_0040360d(local_214,0x104,this,param_1);
  FUN_00403572(local_214,0x401b04);
  uVar3 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar3 != 0) {
    uVar2 = uVar3;
  }
  uVar2 = FUN_00405824(this,uVar3,uVar2,local_214);
  if ((int)uVar2 < 0) {
    FUN_00404bac(unaff_retaddr,0x88,0x401aa0,uVar2);
  }
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404e2d */

undefined4 __fastcall FUN_00404e2d(HANDLE param_1,int *param_2)

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
    goto LAB_00404e50;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00404e50:
        uVar2 = FUN_00404bfa(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00404f1e:
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
        goto LAB_00404e50;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00404e50;
          }
          if (DVar1 == 0) goto LAB_00404f1e;
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
  FUN_00404bac(unaff_retaddr,iVar4,0x401aa0,0x8000ffff);
  return 0x8000ffff;
}



/* Function: FUN_00404f4c */

void __thiscall FUN_00404f4c(void *this,int *param_1)

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
  
  local_c = DAT_00413240 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0040360d(local_218,0x104,this,(int)this);
  FUN_00403572(local_218,0x401b04);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_00404bfa(unaff_retaddr,0xcd);
    }
LAB_00404ff6:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00405010;
  }
  else {
    iStack_220 = 0;
    uVar3 = FUN_00404e2d(pvVar1,&iStack_220);
    if ((int)uVar3 < 0) {
      FUN_00404bac(unaff_retaddr,0xd3,0x401aa0,uVar3);
      goto LAB_00404ff6;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00404cd1(pvVar1);
LAB_00405010:
  FUN_0040ef30(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_0040502f */

void __thiscall FUN_0040502f(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_004040cd(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_004040af(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_004040af(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00403a58(8,(SIZE_T)pcVar4);
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
    FUN_00405ddc(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00405ddc(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_00405d6c(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00405122 */

void __fastcall FUN_00405122(int param_1)

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



/* Function: FUN_00405191 */

void __thiscall FUN_00405191(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00403a58(8,0xdc);
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
    FUN_0040502f(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_0040524f */

DWORD * __fastcall FUN_0040524f(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_004136cc;
  if (DAT_004136cc != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_004136cc[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_004058ab(*DAT_004136cc,&local_8);
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



/* Function: FUN_004052d8 */

uint __fastcall FUN_004052d8(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_004052d8(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0041328c + 1;
        DAT_0041328c = DAT_0041328c + 1;
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
        pcVar5 = (char *)FUN_00403485(pcVar7,(uint)pcVar9,(void *)piVar2[1],(uint)pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00405397 */

void __fastcall FUN_00405397(int param_1,char *param_2,int param_3)

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
  puStack_c = &LAB_0041011d;
  local_10 = ExceptionList;
  uVar3 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ppvVar5 = &local_10;
  ExceptionList = ppvVar5;
  *param_2 = '\0';
  iVar7 = DAT_004136e4;
  local_11 = 0;
  if (DAT_004136e4 != 0) {
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
      uVar6 = FUN_004052d8(param_1,*pDVar9,param_2,param_3);
      if ((char)uVar6 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar9;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_0041427c)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
      ppvVar5 = (void **)0x0;
    }
  }
  pcVar1 = DAT_004136ec;
  if (DAT_004136ec != (code *)0x0) {
    uVar8 = (uint3)((uint)ppvVar5 >> 8);
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    (*(code *)PTR_guard_check_icall_0041427c)(iVar7,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004054a0 */

void FUN_004054a0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00405397((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_004137ac != DVar2) {
    LOCK();
    iVar1 = DAT_004137c8 + 1;
    UNLOCK();
    iVar3 = DAT_004137c8 + 1;
    DAT_004137c8 = iVar1;
    if (iVar3 < 4) {
      DAT_004137ac = DVar2;
      this = FUN_0040524f(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00405191(this,param_1);
      }
      DAT_004137ac = 0;
    }
    LOCK();
    DAT_004137c8 = DAT_004137c8 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00405505 */

void __fastcall FUN_00405505(LPCSTR param_1)

{
  if (DAT_00413754 == (HMODULE)0x0) {
    DAT_00413754 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_00413754,param_1);
  return;
}



/* Function: FUN_00405531 */

FARPROC __fastcall FUN_00405531(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_004137a0 == (HMODULE)0x0) &&
     (DAT_004137a0 = GetModuleHandleW(L"kernelbase.dll"), DAT_004137a0 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_004137a0,param_1);
  return pFVar1;
}



/* Function: FUN_00405570 */

void FUN_00405570(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_00413754 == (HMODULE)0x0) {
    DAT_00413754 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_00413754,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_004055c0 */

void FUN_004055c0(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  uVar2 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_004136c0 == (code *)0x0) &&
     (DAT_004136c0 = (code *)FUN_00405505("RtlNtStatusToDosErrorNoTeb"), DAT_004136c0 == (code *)0x0
     )) {
    ExceptionList = local_10;
    return;
  }
  pcVar1 = DAT_004136c0;
  (*(code *)PTR_guard_check_icall_0041427c)(param_1,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405630 */

undefined4 FUN_00405630(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  uVar2 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_004137a4 == (code *)0x0) &&
     (DAT_004137a4 = (code *)FUN_00405505("RtlDllShutdownInProgress"), DAT_004137a4 == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_004137a4;
  (*(code *)PTR_guard_check_icall_0041427c)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_004056a0 */

void FUN_004056a0(undefined1 *param_1)

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
  
  puStack_c = &LAB_00410163;
  local_10 = ExceptionList;
  uVar2 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_00413738;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_0041373c == (FARPROC)0x0) {
    DAT_0041373c = FUN_00405531("WilFailureNotifyWatchers");
    if (DAT_0041373c == (FARPROC)0x0) goto LAB_0040573f;
  }
  pFVar1 = DAT_0041373c;
  (*(code *)PTR_guard_check_icall_0041427c)(0,&local_34,&local_18,uVar2);
  (*pFVar1)();
LAB_0040573f:
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



/* Function: FUN_00405784 */

void __fastcall FUN_00405784(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00410186;
  local_10 = ExceptionList;
  uVar3 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004057df */

void __fastcall FUN_004057df(int *param_1)

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



/* Function: FUN_00405824 */

undefined4 __thiscall FUN_00405824(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00404092(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_00405874(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_00405874 */

void __thiscall FUN_00405874(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00404cd1(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004058ab */

void __fastcall FUN_004058ab(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int unaff_retaddr;
  HANDLE local_21c;
  int *local_218;
  HANDLE local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004035c9(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00405874(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00404092(extraout_ECX);
    goto LAB_00405997;
  }
  FUN_00405c34(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_00404d29(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    iVar3 = 299;
LAB_004059c5:
    FUN_00404bac(unaff_retaddr,iVar3,0x401aa0,uVar2);
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_00405b14((int)local_210,&local_214,param_2);
    if ((int)uVar2 < 0) {
      iVar3 = 0x134;
      goto LAB_004059c5;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00404cfe(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00404cd1(local_214);
  }
LAB_00405997:
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004059db */

int __fastcall FUN_004059db(int *param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int *piVar4;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_004040f5();
  if (cVar1 == '\0') {
    iVar2 = FUN_00405c34(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar4 = local_8;
    if (*param_1 == 0) {
      FUN_00405874(param_1 + 2,0);
      FUN_00405874(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar3 = GetLastError();
        FUN_00404cfe(local_8);
        SetLastError(DVar3);
      }
      FUN_00405ac2((int)param_1);
      DVar3 = 0;
      hHeap = GetProcessHeap();
      iVar2 = HeapFree(hHeap,DVar3,param_1);
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = FUN_00404cfe(piVar4);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    iVar2 = *param_1;
  }
  return iVar2;
}



/* Function: FUN_00405a6a */

void __fastcall FUN_00405a6a(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  uVar3 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405ac2 */

void __fastcall FUN_00405ac2(int param_1)

{
  FUN_00405bd9((int *)(param_1 + 0x18));
  FUN_00405aed((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00404cd1(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00405aed */

void __fastcall FUN_00405aed(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00404cd1((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00404cd1((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00405b14 */

uint __fastcall FUN_00405b14(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  int unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00403a58(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00404bac(unaff_retaddr,0x148,0x401aa0,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00404cc5();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00404d86(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00404bac(unaff_retaddr,0x14b,0x401aa0,uVar3);
    }
    else {
      FUN_00405c97(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_00405aed(local_10);
  }
  FUN_00405c77((int *)&local_18);
  return uVar3;
}



/* Function: FUN_00405bd9 */

void __fastcall FUN_00405bd9(int *param_1)

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
        FUN_00405122((int)lpMem + 8);
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



/* Function: FUN_00405c34 */

void __thiscall FUN_00405c34(void *this,undefined4 *param_1)

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
    FUN_00404c80(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00405c77 */

void __fastcall FUN_00405c77(int *param_1)

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



/* Function: FUN_00405c97 */

undefined4 * __thiscall FUN_00405c97(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00405cfb */

void __thiscall FUN_00405cfb(void *this,int param_1)

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



/* Function: FUN_00405d25 */

void __fastcall
FUN_00405d25(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00403dd1(param_7);
  local_8 = 0;
  FUN_00405e3f(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_00405d6c */

void * __fastcall FUN_00405d6c(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_004040cd(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_00403485(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_00405ddc */

char * __fastcall FUN_00405ddc(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_004040af(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      FUN_00403485(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar1);
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



/* Function: FUN_00405e3f */

void __fastcall
FUN_00405e3f(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00405f66(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00405e65 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00405e65(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  code *pcVar1;
  int local_1460 [22];
  undefined1 local_1408 [1024];
  WCHAR local_1008 [2046];
  undefined4 uStack_c;
  
  uStack_c = 0x405e77;
  FUN_004047a0(param_1,param_2,param_3,0,0,param_6,3,param_7,param_8,param_1,local_1008,param_1,
               local_1408,param_1,local_1460);
  FUN_00404a57((int)local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405eb7 */

void __fastcall
FUN_00405eb7(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  FUN_0040600c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Function: FUN_00405ec8 */

void __fastcall
FUN_00405ec8(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            uint param_7)

{
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00403dd1(param_7);
  local_8 = 0;
  FUN_00405eb7(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10,
               (short *)0x0);
  return;
}



/* Function: FUN_00405f0c */

uint __fastcall FUN_00405f0c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int in_stack_00000010;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00404011(param_1,param_2,0x401aa0,param_1,param_1,in_stack_00000010);
  local_10 = uVar1;
  local_c = FUN_00403dd1(uVar1);
  local_8 = 0;
  FUN_00405eb7(param_1,param_2,0x401aa0,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_10
               ,(short *)0x0);
  return uVar1;
}



/* Function: FUN_00405f66 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00405f66(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_00413240 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_004047a0(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_0040ef30(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_00404a57((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040600c */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040600c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  code *pcVar1;
  int local_1468;
  byte local_1464;
  undefined1 local_1410 [1024];
  WCHAR local_1010 [2050];
  uint local_c;
  
  local_c = DAT_00413240 ^ (uint)&local_1468;
  FUN_004047a0(param_1,param_2,param_3,0,0,param_6,1,param_7,param_8,param_1,local_1010,param_1,
               local_1410,param_1,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_0040ef30(local_c ^ (uint)&local_1468);
    return;
  }
  FUN_00404a57((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406089 */

void __fastcall FUN_00406089(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  BOOL BVar4;
  tagMSG local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004101a9;
  local_10 = ExceptionList;
  uVar3 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00401210;
  SHSetThreadRef((IUnknown *)0x0);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1,uVar3);
    (*pcVar2)();
    param_1[2] = 0;
  }
  while (param_1[1] != 0) {
    BVar4 = GetMessageW(&local_2c,(HWND)0x0,0,0);
    if (BVar4 != 0) {
      TranslateMessage(&local_2c);
      DispatchMessageW(&local_2c);
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406130 */

undefined4 * __thiscall FUN_00406130(void *this,byte param_1)

{
  FUN_00406089((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  return (undefined4 *)this;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_00406170 */

void __thiscall FUN_00406170(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_004061e0(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_004062d9(this,param_2);
    }
  }
  return;
}



/* Function: FUN_004061ad */

void __fastcall FUN_004061ad(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_00401200;
  if (*(char *)(param_1 + 2) != '\0') {
    puVar1 = (undefined4 *)param_1[1];
    RegHandle = *(REGHANDLE *)(puVar1 + 6);
    *puVar1 = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    EventUnregister(RegHandle);
  }
  return;
}



/* Function: FUN_004061e0 */

void __thiscall FUN_004061e0(void *this,undefined4 *param_1)

{
  uint *this_00;
  uint uVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
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
  undefined4 local_c;
  undefined4 local_8;
  
  this_00 = *(uint **)((int)this + 4);
  if (2 < *this_00) {
    uVar1 = FUN_00402e08(this_00,0,0x2000);
    if ((char)uVar1 != '\0') {
      local_48 = 0;
      local_50 = 0;
      local_8 = param_1[0x12];
      local_c = param_1[0x11];
      local_10 = param_1[0x10];
      local_14 = param_1[0xf];
      local_18 = param_1[0xe];
      local_1c = param_1[0xd];
      local_20 = param_1[0xc];
      local_24 = param_1[6];
      local_28 = param_1[5];
      local_2c = *param_1;
      local_30 = param_1[0x13];
      local_34 = param_1[10];
      local_38 = param_1[9];
      local_3c = param_1[2];
      local_40 = &local_4c;
      local_44 = &local_54;
      local_4c = 0x1000000;
      local_54 = 0x1000000;
      FUN_00402e4b((int)this_00,&DAT_004026ca,0x1000000,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_004062d9 */

void __thiscall FUN_004062d9(void *this,undefined4 *param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
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
  undefined4 local_c;
  undefined4 local_8;
  
  if (2 < **(uint **)((int)this + 4)) {
    local_50 = 0;
    local_54 = 0x1000000;
    local_8 = param_1[8];
    local_c = param_1[0xb];
    local_10 = param_1[4];
    local_14 = param_1[0x12];
    local_18 = param_1[0x11];
    local_1c = param_1[0x10];
    local_20 = param_1[0xf];
    local_24 = param_1[0xe];
    local_28 = param_1[0xd];
    local_2c = param_1[0xc];
    local_30 = param_1[6];
    local_34 = param_1[5];
    local_38 = *param_1;
    local_3c = param_1[0x13];
    local_40 = param_1[10];
    local_44 = param_1[9];
    local_48 = param_1[2];
    local_4c = &local_54;
    FUN_00403006((int)*(uint **)((int)this + 4),&DAT_00402594,param_1,param_1,&local_4c,&local_48,
                 &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                 &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
  }
  return;
}



/* Function: FUN_004063d0 */

undefined4 __thiscall FUN_004063d0(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_00413290 != iVar1;
  iVar3 = DAT_00413290;
  DAT_00413290 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00406410 */

undefined4 * __thiscall FUN_00406410(void *this,byte param_1)

{
  FUN_004061ad((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040643a */

int __thiscall FUN_0040643a(void *this,undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int *local_8;
  
  *param_2 = 0;
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0x20);
  local_8 = (int *)this;
  (*(code *)PTR_guard_check_icall_0041427c)(this,0,&local_8);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    pcVar1 = *(code **)*local_8;
    (*(code *)PTR_guard_check_icall_0041427c)(local_8,&DAT_004020d4,param_2);
    iVar2 = (*pcVar1)();
    pcVar1 = *(code **)(*local_8 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(local_8);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_004064a1 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __thiscall FUN_004064a1(void *this,undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  *param_1 = 0;
  if (this == (void *)0x0) {
    uVar3 = 0x80004002;
  }
  else {
    local_14[0] = (int *)0x0;
                    /* WARNING: Load size is inaccurate */
    pcVar1 = (code *)**this;
    local_8 = 0;
    (*(code *)PTR_guard_check_icall_0041427c)(this,&DAT_004020a4,local_14);
    uVar3 = (*pcVar1)();
    if (-1 < (int)uVar3) {
      pcVar1 = *(code **)(*local_14[0] + 0x10);
      (*(code *)PTR_guard_check_icall_0041427c)(local_14[0],this,2,&local_18);
      uVar3 = (*pcVar1)();
      piVar2 = local_14[0];
      if ((-1 < (int)uVar3) && (uVar3 = -(uint)(local_18 != 1) & 0x80004002, local_18 == 1)) {
        local_14[0] = (int *)0x0;
        *param_1 = piVar2;
      }
    }
    FUN_00405784((int *)local_14);
  }
  return uVar3;
}



/* Function: FUN_0040653d */

undefined4 FUN_0040653d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_00413820 == (code *)0x0) &&
     (DAT_00413820 = (code *)FUN_00405505("NtQueryWnfStateData"), DAT_00413820 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00413820;
  (*(code *)PTR_guard_check_icall_0041427c)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00406591 */

undefined4 __fastcall
FUN_00406591(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0041381c == (code *)0x0) &&
     (DAT_0041381c = (code *)FUN_00405505("NtUpdateWnfStateData"), DAT_0041381c == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0041381c;
  (*(code *)PTR_guard_check_icall_0041427c)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_004065ea */

int __fastcall FUN_004065ea(int param_1,int param_2)

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



/* Function: FUN_00406667 */

uint * __fastcall FUN_00406667(uint *param_1,uint param_2,uint *param_3)

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
    FUN_004067cd(param_1,param_2,0,param_3);
    break;
  case 1:
  case 5:
    FUN_0040689d(param_1,param_2,0,param_3);
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



/* Function: FUN_004067cd */

void __fastcall FUN_004067cd(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_0040689d */

void __fastcall FUN_0040689d(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_00406966 */

void __fastcall FUN_00406966(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
  puStack_c = &LAB_004101fc;
  local_10 = ExceptionList;
  local_14 = DAT_00413240 ^ (uint)&stack0xfffffffc;
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
  if ((uVar1 >> 5 & 0x1ff) != 0) {
    *puVar5 = param_1;
    *(ushort *)((int)puVar5 + 6) = (ushort)(uVar1 >> 5) & 0x1ff;
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
    FUN_004089ca((int)&local_44,iVar6);
  }
  ExceptionList = local_10;
  FUN_0040ef30(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406aa8 */

void __fastcall FUN_00406aa8(uint *param_1,undefined4 param_2,int param_3,uint *param_4)

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
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  local_18 = (uint)(param_3 == 0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_1c = param_2;
  if (DAT_00413818 == (code *)0x0) {
    DAT_00413818 = (code *)FUN_00405505("RtlQueryFeatureConfiguration");
    if (DAT_00413818 == (code *)0x0) {
      iVar2 = -0x3ffffec7;
      goto LAB_00406b7b;
    }
  }
  pcVar1 = DAT_00413818;
  (*(code *)PTR_guard_check_icall_0041427c)(local_1c,local_18,local_28,&local_14);
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
LAB_00406b7b:
  if (local_20 != (uint *)0x0) {
    *local_20 = (uint)(iVar2 != -0x7fffffde);
  }
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406ba8 */

undefined4 __fastcall FUN_00406ba8(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_0041380c == (code *)0x0) &&
     (DAT_0041380c = (code *)FUN_00405505("RtlNotifyFeatureUsage"), DAT_0041380c == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0041380c;
  (*(code *)PTR_guard_check_icall_0041427c)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_00406c10 */

void FUN_00406c10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if ((DAT_00413808 == (FARPROC)0x0) &&
     (DAT_00413808 = FUN_00405531("LogStagedFeatureUsage"), DAT_00413808 == (FARPROC)0x0)) {
    return;
  }
  pFVar1 = DAT_00413808;
  (*(code *)PTR_guard_check_icall_0041427c)(param_1,param_2,param_3);
  (*pFVar1)();
  return;
}



/* Function: FUN_00406c54 */

void __fastcall FUN_00406c54(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_00406ca0 */

undefined4 __thiscall FUN_00406ca0(void *this,uint param_1)

{
  uint uVar1;
  DWORD dwErrCode;
  LPVOID pvVar2;
  uint extraout_EAX;
  uint extraout_EAX_00;
  SIZE_T SVar3;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(int *)((int)this + 8) - *this;
  if (uVar1 < param_1) {
    dwErrCode = GetLastError();
    SVar3 = (param_1 & 0xffffffc0) + 0x40;
    pvVar2 = FUN_00403a58(0,SVar3);
    if (pvVar2 == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    uVar1 = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    FUN_00403485(pvVar2,SVar3,*this,uVar1);
    FUN_00405cfb((void *)((int)this + 0xc),(int)pvVar2);
    *(LPVOID *)this = pvVar2;
    *(uint *)((int)this + 4) = uVar1 + (int)pvVar2;
    *(SIZE_T *)((int)this + 8) = (int)pvVar2 + SVar3;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_00406d2b */

undefined4 __thiscall FUN_00406d2b(void *this,uint param_1)

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
    uVar2 = FUN_00406ca0(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00406d61 */

undefined4 __thiscall FUN_00406d61(void *this,void *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00406d2b(this,param_2);
  if ((char)uVar2 != '\0') {
    pvVar1 = *(void **)((int)this + 4);
    uVar2 = FUN_00403485(pvVar1,-(uint)(pvVar1 < *(void **)((int)this + 8)) &
                                *(int *)((int)this + 8) - (int)pvVar1,param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00406da2 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00406da2(int *param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_102c;
  int *local_1028;
  int local_1024;
  uint local_1020;
  int *local_101c;
  undefined4 local_1018;
  int local_1014;
  int local_1010 [1025];
  uint local_c;
  
  local_c = DAT_00413240 ^ (uint)&local_102c;
  iVar5 = 0;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar7 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_0040653d(extraout_ECX,&local_1018,local_1010,&local_102c);
      if (local_1014 == 0) {
        if (local_102c % 0xc != 0) {
          local_102c = 0;
        }
        piVar4 = (int *)*param_1;
        local_1020 = local_102c / 0xc;
        piVar2 = (int *)(((uint)(local_1028[1] - (int)piVar4) / 0xc) * 0xc);
        local_101c = (int *)((int)piVar2 + (int)piVar4);
        uVar6 = local_102c;
        if (piVar4 != local_101c) {
          piVar3 = local_1010 + local_1020 * 3;
          do {
            piVar2 = local_1010;
            if (piVar2 != piVar3) {
              do {
                if ((*piVar2 == *piVar4) && ((short)piVar2[1] == (short)piVar4[1])) {
                  piVar2[2] = piVar2[2] + piVar4[2];
                  uVar6 = local_102c;
                  goto LAB_00406eb1;
                }
                piVar2 = piVar2 + 3;
              } while (piVar2 != piVar3);
            }
            uVar1 = uVar6 + 0xc;
            if (uVar1 < 0x1001) {
              *piVar3 = *piVar4;
              piVar3[1] = piVar4[1];
              piVar3[2] = piVar4[2];
              piVar3 = piVar3 + 3;
              uVar6 = uVar1;
              local_102c = uVar1;
            }
LAB_00406eb1:
            piVar4 = piVar4 + 3;
            iVar7 = local_1024;
          } while (piVar4 != local_101c);
        }
        iVar5 = FUN_00406591(&DAT_0040203c,local_1010,uVar6,piVar2,piVar2,local_1018,1);
        param_1 = local_1028;
      }
      local_1024 = iVar7 + 1;
    } while (((iVar5 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_0040ef30(local_c ^ (uint)&local_102c);
  return;
}



/* Function: FUN_00406f27 */

void FUN_00406f27(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_00413810 == (code *)0x0) &&
     (DAT_00413810 = (code *)FUN_00405505("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_00413810 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_00413810;
  (*(code *)PTR_guard_check_icall_0041427c)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406f65 */

int __thiscall FUN_00406f65(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_00406f92 */

void __thiscall FUN_00406f92(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_8;
  
  piVar1 = (int *)((int)this + 4);
  if (*piVar1 != param_1) {
    *piVar1 = param_1;
    if (*(char *)((int)this + 2) == '\x01') {
      local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)piVar1);
      piVar1 = &local_8;
      uVar2 = 2;
    }
    else {
      if (*(char *)((int)this + 2) != '\x02') {
        return;
      }
      uVar2 = 4;
      local_8 = this;
    }
    FUN_00403485(*(void **)((int)this + 0xc),uVar2,piVar1,uVar2);
  }
  return;
}



/* Function: FUN_00406fd8 */

uint __fastcall FUN_00406fd8(ushort *param_1)

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



/* Function: FUN_00407003 */

uint __thiscall FUN_00407003(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_8;
  
  pvVar3 = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_0040709a;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    FUN_00403485(pvVar3,2,&local_8,2);
    pvVar3 = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)pvVar3 + 4);
      if (param_2 < pvVar1) goto LAB_0040709a;
      FUN_00403485(pvVar3,4,(void *)((int)this + 4),4);
      pvVar3 = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_0040709a;
    FUN_00403485(pvVar3,(int)param_2 - (int)pvVar3,(void *)((int)this + 8),2);
    pvVar3 = pvVar1;
  }
  pvVar1 = (void *)((uint)*(ushort *)((int)this + 8) + (int)pvVar3);
  if (pvVar1 <= param_2) {
    FUN_00403485(pvVar3,(int)param_2 - (int)pvVar3,*(void **)((int)this + 0x10),
                 (uint)*(ushort *)((int)this + 8));
    iVar2 = (uint)*(ushort *)((int)this + 8) + (int)pvVar3;
    *param_1 = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
LAB_0040709a:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_004070c9 */

uint __thiscall FUN_004070c9(void *this,uint *param_1,ushort *param_2)

{
  char cVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *local_8;
  
  puVar2 = (ushort *)*param_1;
  cVar1 = *(char *)((int)this + 2);
  puVar4 = (ushort *)CONCAT31((int3)((uint)param_1 >> 8),cVar1);
  if (cVar1 == '\x01') {
    if (param_2 < puVar2 + 1) goto LAB_00407157;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    FUN_00403485(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_00407157;
      *(ushort **)((int)this + 0xc) = puVar2;
      local_8 = (ushort *)this;
      FUN_00403485((void *)((int)this + 4),4,puVar2,4);
      local_8 = puVar2 + 2;
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar2 = (ushort *)((int)this + 8);
  *puVar2 = *this;
  if (*this == 0) {
    puVar4 = local_8 + 1;
    if (param_2 < puVar4) goto LAB_00407157;
    puVar3 = local_8;
    local_8 = puVar4;
    FUN_00403485(puVar2,2,puVar3,2);
  }
  puVar4 = (ushort *)((uint)*puVar2 + (int)local_8);
  if (puVar4 <= param_2) {
    *(ushort **)((int)this + 0x10) = local_8;
    *param_1 = (uint)puVar4;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
LAB_00407157:
  return (uint)puVar4 & 0xffffff00;
}



/* Function: FUN_00407171 */

undefined2 * __thiscall
FUN_00407171(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_00406fd8(&local_18);
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



/* Function: FUN_004071ef */

void __thiscall FUN_004071ef(void *this,int param_1)

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
  FUN_00405cfb(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_00405cfb((void *)(param_1 + 0x1c),local_8);
  FUN_00405c77(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_00407278 */

void __thiscall FUN_00407278(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_0040d8a7(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_0040731b;
  }
  if (9 < param_2) {
    return;
  }
LAB_0040731b:
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



/* Function: FUN_00407363 */

void FUN_00407363(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int extraout_ECX;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_retaddr;
  
  __EH_prolog3_align(0x48,8,unaff_retaddr);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar1 + 10;
  *(undefined2 *)(unaff_EBP + -0x44) = *(undefined2 *)(extraout_ECX + 2);
  *(undefined1 *)(unaff_EBP + -0x42) = *(undefined1 *)(extraout_ECX + 4);
  *(undefined2 *)(unaff_EBP + -0x3c) = 0;
  *(undefined2 *)(unaff_EBP + -0x58) = *(undefined2 *)(extraout_ECX + 6);
  *(undefined1 *)(unaff_EBP + -0x56) = *(undefined1 *)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined2 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  do {
    do {
      uVar5 = FUN_004070c9((void *)(unaff_EBP + -0x44),(uint *)(unaff_EBP + -0x14),
                           *(ushort **)(extraout_ECX + 0x14));
      if ((char)uVar5 == '\0') {
        FUN_0040c5ac(*(int *)(unaff_EBX + 8));
LAB_00407462:
        __EH_epilog3_align();
        return;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    } while (*(int *)(unaff_EBP + -0x40) == 0);
    do {
      uVar5 = FUN_004070c9((void *)(unaff_EBP + -0x58),(uint *)(unaff_EBP + -0x14),
                           *(ushort **)(extraout_ECX + 0x14));
      if ((char)uVar5 == '\0') break;
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x54);
      *(uint *)(unaff_EBP + -0x20) = (uint)*(ushort *)(unaff_EBP + -0x50);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x48);
      *(uint *)(unaff_EBP + -0x28) = (uint)*(ushort *)(unaff_EBP + -0x3c);
      *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x34);
      piVar2 = *(int **)(*(int *)(unaff_EBX + 8) + 0x40);
      *(int **)(unaff_EBP + -0x30) = piVar2;
      if (piVar2 == (int *)0x0) {
        FUN_00404cc5();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = *(code **)(*piVar2 + 0x10);
      (*(code *)PTR_guard_check_icall_0041427c)
                (unaff_EBP + -0x2c,unaff_EBP + -0x28,unaff_EBP + -0x24,unaff_EBP + -0x20,
                 unaff_EBP + -0x1c);
      cVar4 = (*pcVar3)();
      if (cVar4 == '\0') {
        FUN_0040c5ac(*(int *)(unaff_EBX + 8));
        goto LAB_00407462;
      }
      uVar5 = *(int *)(unaff_EBP + -0x18) + 1;
      *(uint *)(unaff_EBP + -0x18) = uVar5;
    } while (uVar5 < *(uint *)(unaff_EBP + -0x40));
  } while( true );
}



/* Function: FUN_00407482 */

undefined4 __thiscall
FUN_00407482(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_0040778e(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_00406d2b(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_00407278(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_00405cfb((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_00405c77(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_00406d2b((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_0040778e(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_0040753a */

uint __thiscall FUN_0040753a(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_004070c9(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_00406f65(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_004075c5 */

uint __thiscall
FUN_004075c5(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_004070c9(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_00406f92(param_1,local_c);
          uVar1 = local_14;
          goto LAB_004076bb;
        }
        local_14 = FUN_00406f65(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_004076bb;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00406f92(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_0040753a(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_004070c9(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_00406f65(&local_28,param_3,param_4);
LAB_004076bb:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_00406f92(&local_28,local_24 + param_5);
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



/* Function: FUN_004076fb */

uint __thiscall FUN_004076fb(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_004070c9(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_00406f92(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00406f92(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_0040778e */

uint __thiscall
FUN_0040778e(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint _Size;
  undefined4 *puVar3;
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
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = (void *)0x0;
    local_5 = '\0';
    while( true ) {
      local_c = pvVar4;
      uVar2 = FUN_004070c9(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar2 == '\0') break;
      iVar1 = FUN_00406f65(&local_24,param_1,param_2);
      if (iVar1 < 0) {
LAB_004078d9:
        local_c = pvVar4;
        if ((char)uVar2 != '\0') goto LAB_00407817;
        break;
      }
      if (iVar1 == 0) {
        pvVar4 = (void *)FUN_004075c5(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          local_5 = '\x01';
          goto LAB_004078d9;
        }
        goto LAB_004078c9;
      }
      pvVar4 = (void *)FUN_004076fb(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_00407817:
    pvVar4 = local_c;
    uVar2 = 0;
    if (local_5 == '\0') {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      uVar2 = FUN_00406fd8(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    local_10 = FUN_00406fd8(&local_38);
    local_10 = local_10 + uVar2;
    uVar2 = *(uint *)((int)this + 0x18);
    in_EAX = *(uint *)((int)this + 0x14);
    if (local_10 <= (-(uint)(in_EAX < uVar2) & uVar2 - in_EAX)) {
      _Size = in_EAX - (int)pvVar4;
      if (_Size != 0) {
        if (((void *)(local_10 + (int)pvVar4) == (void *)0x0) || (pvVar4 == (void *)0x0)) {
          puVar3 = (undefined4 *)o__errno();
          *puVar3 = 0x16;
        }
        else {
          if (_Size <= (uVar2 - local_10) - (int)pvVar4) {
            memmove((void *)(local_10 + (int)pvVar4),pvVar4,_Size);
            goto LAB_00407907;
          }
          puVar3 = (undefined4 *)o__errno();
          *puVar3 = 0x22;
        }
        o__invalid_parameter_noinfo();
      }
LAB_00407907:
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + local_10);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_00407003(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_00406f92(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_00407003(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_004078c9:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_0040795f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040795f(uint param_1,int param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  undefined4 extraout_ECX_00;
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
  puStack_18 = &LAB_0041026c;
  local_1c = ExceptionList;
  local_24 = DAT_00413240 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_104c = param_1 + param_2 * 8;
  local_1038 = 0;
  local_1044 = 0;
  local_1048 = param_3;
  local_1034 = param_1;
  while( true ) {
    FUN_00407171(local_107c,*local_1048,local_1048[1],*(undefined1 *)(local_1048 + 2),local_1048[3],
                 *(undefined1 *)(local_1048 + 4));
    local_14 = 0;
    local_1030 = 0x1000;
    uVar2 = FUN_0040653d(extraout_ECX,&local_103c,local_1028,&local_1030);
    FUN_0040d441(uVar2);
    if (uVar2 != 0) {
      local_103c = 0;
      local_1030 = 0;
    }
    FUN_00407278(local_107c,local_1028,local_1030,0x1000);
    if (local_105b != '\0') break;
    local_10bc = &local_1040;
    local_1040 = 0;
    puStack_10b8 = &local_1044;
    local_10c0 = &PTR_FUN_00401098;
    puStack_10b4 = local_107c;
    local_1088 = &local_10c0;
    local_1058 = local_10bc;
    local_1054 = puStack_10b8;
    local_1050 = puStack_10b4;
    local_1029 = FUN_00407363();
    uVar2 = local_1034;
    if (local_105c == '\0') {
LAB_00407b37:
      uVar2 = uVar2 + 8;
      local_1044 = local_1040;
      local_1034 = uVar2;
    }
    else {
      iVar3 = local_1068 - local_106c;
      iVar3 = FUN_00406591(local_1034,local_106c,iVar3,iVar3,iVar3,local_103c,1);
      if (iVar3 != -0x3fffffff) {
        if (iVar3 != 0) {
          FUN_00406591(uVar2,local_106c,local_1068 - local_106c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_00407b37;
      }
      local_1038 = local_1038 + 1;
      local_1029 = '\0';
    }
    uVar1 = local_1038;
    local_14 = 0xffffffff;
    FUN_00405c77(&local_1060);
    if (((local_1029 != '\0') || (local_104c <= uVar2)) || (0x31 < uVar1)) goto LAB_00407b8e;
  }
  FUN_00405c77(&local_1060);
LAB_00407b8e:
  ExceptionList = local_1c;
  FUN_0040ef30(local_24 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_00407bb4 */

void __fastcall FUN_00407bb4(int param_1)

{
  FUN_00405c77((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_00407bc2 */

void * __fastcall FUN_00407bc2(void *param_1)

{
  FUN_00407171(param_1,0,4,1,4,0);
  FUN_00407171((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_00407171((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_00407c04 */

void __fastcall FUN_00407c04(undefined2 *param_1)

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
  
  local_c = DAT_00413240 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_004020a0;
    local_3c = DAT_0040209c;
    local_30 = DAT_00402098;
    local_34 = DAT_00402094;
    local_28 = DAT_00402090;
    local_2c = DAT_0040208c;
    FUN_0040795f((uint)&local_3c,3,param_1);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00402084;
    local_34 = DAT_0040207c;
    local_38 = DAT_00402088;
    local_2c = DAT_00402074;
    local_30 = DAT_00402080;
    local_28 = DAT_00402078;
    FUN_0040795f((uint)&local_3c,3,param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_0040206c;
    local_34 = DAT_00402064;
    local_38 = DAT_00402070;
    local_2c = DAT_0040205c;
    local_30 = DAT_00402068;
    local_24 = DAT_00402054;
    local_28 = DAT_00402060;
    local_1c = DAT_0040204c;
    local_20 = DAT_00402058;
    local_14 = DAT_00402044;
    local_18 = DAT_00402050;
    local_10 = DAT_00402048;
    FUN_0040795f((uint)&local_3c,6,param_1 + 0x24);
  }
  FUN_0040ef30(local_c ^ (uint)&local_3c);
  return;
}



/* Function: FUN_00407d5a */

void __thiscall FUN_00407d5a(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_00406d61(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_00407dd1 */

void __thiscall FUN_00407dd1(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_00407e30 */

void __thiscall FUN_00407e30(void *this,PSRWLOCK param_1)

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
  puStack_c = &LAB_004100b4;
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
            goto LAB_00407ed4;
          }
        } while (uVar3 < uVar2);
      }
      local_20 = 0;
LAB_00407ed4:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_1c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0041427c)(local_20);
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



/* Function: FUN_00407f32 */

void __fastcall FUN_00407f32(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00410028;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00407f93(param_1);
  FUN_00405c77((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_00408138((int)param_1 + 4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407f93 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00407f93(void *param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x407f9f;
  FUN_00407bc2(local_7c);
  local_8 = 0;
  FUN_004080eb(param_1,local_7c);
  FUN_00407c04(local_7c);
  FUN_00408138((int)local_7c);
  return;
}



/* Function: FUN_00407fd4 */

undefined1 __thiscall FUN_00407fd4(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_0040b577((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_0040b554((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_0040802d */

undefined1 __thiscall FUN_0040802d(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_00408098((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_00407fd4(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00408098 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00408098(PSRWLOCK param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x4080a4;
  FUN_00407bc2(local_7c);
  local_8 = 0;
  AcquireSRWLockExclusive(param_1);
  FUN_004080eb(param_1,local_7c);
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
  }
  FUN_00407c04(local_7c);
  FUN_00408138((int)local_7c);
  return;
}



/* Function: FUN_004080eb */

void __thiscall FUN_004080eb(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_004071ef(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_004071ef((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_004071ef((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_00408138 */

void __fastcall FUN_00408138(int param_1)

{
  FUN_00405c77((int *)(param_1 + 100));
  FUN_00405c77((int *)(param_1 + 0x40));
  FUN_00405c77((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_0040815c */

void __fastcall FUN_0040815c(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004102cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_0040b599(this,0);
  FUN_0040b599(param_1 + 0x1c,0);
  FUN_00405c77((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_004086bb(*(int *)(param_1 + 0x78));
  }
  FUN_00405c77((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00406f27(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_00405c77((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0040bab3(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*this != 0) {
    FUN_0040bab3((PTP_TIMER)*this);
  }
  local_8 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0040b703(*(int **)(param_1 + 8));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040822e */

void __thiscall FUN_0040822e(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00410028;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    bVar1 = FUN_0040845b((int)this);
    if (bVar1) {
      cVar2 = FUN_0040802d(*(void **)((int)this + 0xc),param_1,param_2,param_3);
      if (cVar2 != '\0') {
        cVar2 = FUN_004040f5();
        if (cVar2 == '\0') {
          SRWLock = (PSRWLOCK)((int)this + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          FUN_004084e8(this);
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



/* Function: FUN_004082ba */

void __thiscall FUN_004082ba(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_004040f5(), cVar1 == '\0')) &&
     (bVar2 = FUN_0040845b((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_00407d5a(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x408670,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_00407d5a((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040835a */

void __fastcall FUN_0040835a(int param_1)

{
  char cVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004040f5();
  if (cVar1 == '\0') {
    bVar2 = FUN_0040845b(param_1);
    if (bVar2) {
      FUN_00407e30(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_00408098(*(PSRWLOCK *)(param_1 + 0xc));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004083c2 */

void __thiscall FUN_004083c2(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  PSRWLOCK SRWLock;
  char cVar1;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041011d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    cVar1 = FUN_004040f5();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 0x14);
      AcquireSRWLockExclusive(SRWLock);
      local_16 = 0;
      local_1c = param_1;
      local_18 = param_2;
      local_14 = param_3;
      FUN_00406d61((void *)((int)this + 0x7c),&local_1c,0xc);
      FUN_00408549(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040845b */

bool __fastcall FUN_0040845b(int param_1)

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
        iVar1 = FUN_0040b5d0(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_004084e8 */

void __fastcall FUN_004084e8(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040c5e0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040b599(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00406c54(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_00408549 */

void __fastcall FUN_00408549(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040c620,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040b599(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00406c54(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_004085b0 */

void FUN_004085b0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00407e30(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_004085d3 */

bool __fastcall FUN_004085d3(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar3 = DAT_00413814;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004102ef;
  local_10 = ExceptionList;
  uVar2 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(param_1 + 0x4c);
  iVar4 = 0;
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar3 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_00405505("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_00413814 = pcVar3, pcVar3 == (code *)0x0)) {
      iVar4 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_0041427c)(FUN_004085b0,param_1,0,piVar1,uVar2);
      iVar4 = (*pcVar3)();
    }
  }
  ExceptionList = local_10;
  return iVar4 == 0;
}



/* Function: FUN_00408670 */

void FUN_00408670(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00407e30(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00408693 */

LPCRITICAL_SECTION __fastcall FUN_00408693(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_004086bb */

void FUN_004086bb(int param_1)

{
  if ((param_1 != 0) && (DAT_00413840 != (PSRWLOCK)0x0)) {
    FUN_00407dd1(DAT_00413840 + 0x1c,DAT_00413840,param_1);
  }
  return;
}



/* Function: FUN_004086e6 */

bool __fastcall
FUN_004086e6(uint *param_1,undefined4 param_2,byte param_3,int param_4,undefined4 *param_5)

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
  
  puVar5 = &DAT_004137d8;
  if (param_4 != 0) {
    puVar5 = &DAT_004137d0;
  }
  local_c = param_1;
  if ((*puVar5 & 2) != 0) {
    if ((*puVar5 & 1) == 0) {
      return false;
    }
    *param_5 = 1;
    iVar2 = FUN_00406aa8(param_1,param_2,(uint)param_3,(uint *)0x0);
    return iVar2 != 0;
  }
  iVar2 = FUN_00408dd3();
  local_8 = 0;
  *param_5 = 1;
  iVar3 = FUN_00406aa8(local_c,param_2,(uint)param_3,&local_8);
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
  if (DAT_004132c4 == '\0') {
    return bVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
  if ((iVar2 != 0) && (iVar2 == DAT_004132d4)) {
    local_14 = 0;
    local_10 = puVar5;
    uVar4 = FUN_00406d61(&DAT_004132f0,&local_14,8);
    if ((char)uVar4 != '\0') goto LAB_004087be;
  }
  LOCK();
  *puVar5 = *puVar5 & 0xfffff7c1;
  UNLOCK();
LAB_004087be:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
  return bVar6;
}



/* Function: FUN_004087e0 */

uint FUN_004087e0(undefined4 param_1,uint param_2,undefined4 *param_3)

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
  bVar1 = FUN_004086e6(local_20,param_1,(byte)uVar3,param_2 >> 7 & 1,param_3);
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



/* Function: FUN_00408860 */

void FUN_00408860(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_0040835a(0x413834);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_00406ba8(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_0040822e(&DAT_00413834,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_004083c2(&DAT_00413834,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_004088e0 */

void FUN_004088e0(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_004082ba(&DAT_00413834,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_00413834 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_00413844);
      bVar1 = FUN_004085d3(0x413834);
      if (bVar1) {
        FUN_00407d5a(&DAT_00413858,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00413844);
    }
  }
  return;
}



/* Function: FUN_00408950 */

void FUN_00408950(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_00413834 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_00413884;
  }
  else {
    if (DAT_00413834 == '\0') {
      return;
    }
    this = &DAT_00413858;
  }
  FUN_00407dd1(this,(PSRWLOCK)&DAT_00413844,param_1);
  return;
}



/* Function: FUN_00408994 */

void __fastcall FUN_00408994(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_004137fc;
  if ((DAT_004137fc != (code *)0x0) || (pcVar1 = DAT_004137f8, DAT_004137f8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,param_2,param_3,0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004089ca */

void FUN_004089ca(int param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ushort *)(param_1 + 4);
    do {
      FUN_00408994(*(undefined4 *)(puVar1 + -2),(uint)*puVar1,(uint)puVar1[1]);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Function: FUN_00408a03 */

void __fastcall FUN_00408a03(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_004137f0;
  if ((DAT_004137f0 == (code *)0x0) && (pcVar1 = DAT_004137ec, DAT_004137ec == (code *)0x0)) {
    *param_1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,param_2,param_3);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00408a3b */

void FUN_00408a3b(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_004137e8;
  if ((DAT_004137e8 != (code *)0x0) || (pcVar1 = DAT_004137e4, DAT_004137e4 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041427c)(param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00408a6d */

void __fastcall FUN_00408a6d(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00410312;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 8);
  *param_1 = 0;
  FUN_0040b599(this,0);
  *param_1 = 0;
  FUN_00408cf7((int)param_1);
  FUN_00405c77((int *)(param_1 + 0x38));
  FUN_00405c77((int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x18) != 0) {
    local_8 = 0;
    FUN_00408a3b(*(undefined4 *)(param_1 + 0x18));
    local_8 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    local_8 = 1;
    FUN_00408a3b(*(undefined4 *)(param_1 + 0x14));
  }
  if (*this != 0) {
    FUN_0040bab3((PTP_TIMER)*this);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408b0e */

void __thiscall FUN_00408b0e(void *this,char *param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  char cVar1;
  char *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004102ef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    local_18 = (char *)this;
    local_14 = this;
    cVar1 = FUN_004040f5();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 4);
      AcquireSRWLockExclusive(SRWLock);
      local_18 = param_1;
      local_14 = (void *)param_2;
      FUN_00406d61((void *)((int)this + 0x1c),&local_18,8);
      FUN_00408d72(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408b98 */

void __fastcall FUN_00408b98(char *param_1)

{
  PSRWLOCK SRWLock;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    FUN_00408cf7((int)param_1);
    param_1[0xc] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00408bcc */

void __fastcall FUN_00408bcc(char *param_1)

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



/* Function: FUN_00408c31 */

undefined4 __fastcall FUN_00408c31(char *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00410005;
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
    piVar3 = FUN_0040b487(piVar1);
    FUN_00408a03(piVar3,FUN_00408ce0,param_1);
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



/* Function: FUN_00408ce0 */

void FUN_00408ce0(char *param_1)

{
  FUN_00408bcc(param_1);
  return;
}



/* Function: FUN_00408cf7 */

void __fastcall FUN_00408cf7(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00410005;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (7 < (uint)((int)puVar1 - (int)puVar2)) {
    for (; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      FUN_00406966(*puVar2,(uint *)puVar2[1]);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    FUN_00408994(0,0xfe,0);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408d72 */

void __fastcall FUN_00408d72(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 8);
  if (*(char *)((int)param_1 + 0xc) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040c670,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040b599(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00406c54(this,(char *)((int)param_1 + 0xc),300000,0);
  }
  return;
}



/* Function: FUN_00408dd3 */

void FUN_00408dd3(void)

{
  if (DAT_004132d4 == 0) {
    FUN_00408c31(&DAT_004132c4);
    return;
  }
  return;
}



/* Function: FUN_00408dee */

undefined4 __fastcall FUN_00408dee(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = DAT_00413804;
  if ((DAT_00413804 == (code *)0x0) && (pcVar2 = DAT_00413800, DAT_00413800 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,param_2,param_3);
    uVar1 = (*pcVar2)();
  }
  return uVar1;
}



/* Function: FUN_00408e26 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 * __fastcall
FUN_00408e26(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

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
  
  pcVar2 = DAT_004137f4;
  uStack_4 = 0;
  puVar3 = &LAB_00410140;
  local_8 = 0x408e32;
  puVar7 = (undefined4 *)auStack_20;
  uVar5 = param_1;
  if ((DAT_004137f4 != (code *)0x0) &&
     ((param_2 == 0 || (puVar3 = (undefined1 *)(param_2 + -100), puVar3 < (undefined1 *)0x32)))) {
    uStack_24 = 1;
    puVar6 = &uStack_30;
    uStack_30 = 0x408e56;
    uStack_2c = param_1;
    iStack_28 = param_2;
    (*(code *)PTR_guard_check_icall_0041427c)();
    puVar7 = puVar6 + -1;
    puVar6[-1] = 0x408e58;
    puVar3 = (undefined1 *)(*pcVar2)();
    uVar5 = extraout_ECX;
  }
  if (*param_5 != 0) {
    *(undefined4 *)((int)puVar7 + -4) = param_4;
    *(undefined4 *)((int)puVar7 + -8) = param_1;
    *(undefined4 *)((int)puVar7 + -0xc) = 0x408e6e;
    puVar3 = (undefined1 *)
             FUN_00408b0e(&DAT_004132c4,*(char **)((int)puVar7 + -8),
                          *(undefined4 *)((int)puVar7 + -4));
    uVar5 = extraout_ECX_00;
  }
  if (param_5[1] != 0) {
    iVar1 = param_5[2];
    *(undefined4 *)((int)puVar7 + -4) = uVar5;
    *(int *)((int)puVar7 + -8) = param_5[1];
    *(undefined4 *)((int)puVar7 + -0xc) = 0x408e82;
    puVar3 = (undefined1 *)FUN_00408994(param_1,iVar1,*(undefined4 *)((int)puVar7 + -8));
  }
  if ((param_5[4] == 0) && (local_8 = 0, DAT_004132c4 != '\0')) {
    *(undefined **)((int)puVar7 + -4) = &DAT_004132c8;
    puVar8 = (undefined1 *)((int)puVar7 + -8);
    *(undefined4 *)((int)puVar7 + -8) = 0x408ea1;
    AcquireSRWLockExclusive(*(PSRWLOCK *)((int)puVar7 + -4));
    if (DAT_004132dc == 0) {
      *(undefined4 *)(puVar8 + -4) = 0xffffffff;
      *(undefined4 *)(puVar8 + -8) = 0x408eb6;
      piVar4 = FUN_0040b487(&DAT_004132dc);
      *(undefined4 *)(puVar8 + -8) = 0x408ec2;
      FUN_00408a03(piVar4,FUN_00408ee0,*(undefined4 *)(puVar8 + -4));
    }
    *(undefined **)(puVar8 + -4) = &DAT_004132c8;
    puVar7 = (undefined4 *)(puVar8 + -8);
    *(undefined4 *)(puVar8 + -8) = 0x408ec9;
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(puVar8 + -4));
    puVar3 = extraout_EAX;
  }
  *(undefined4 *)((int)puVar7 + -4) = 0x408ece;
  return puVar3;
}



/* Function: FUN_00408ee0 */

void FUN_00408ee0(void)

{
  FUN_00408b98(&DAT_004132c4);
  return;
}



/* Function: FUN_00408ef3 */

bool __fastcall
FUN_00408ef3(uint *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
  puVar3 = FUN_00406667(param_1,param_5,local_3c);
  puVar6 = local_20;
  for (iVar4 = 6; uVar2 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00408e26(local_8,param_5,0,param_1,(int *)local_20);
  if (param_3 != 0) {
    uVar5 = param_5 | 0x80000000;
    if (param_4 == 0) {
      uVar5 = param_5;
    }
    FUN_00408994(uVar2,uVar5,0);
  }
  pcVar1 = DAT_004137e0;
  if ((local_10 == 0) && (DAT_004137e0 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041427c)(local_8,param_5,param_8);
    (*pcVar1)();
  }
  return local_10 == 0;
}



/* Function: FUN_00408f85 */

void __fastcall
FUN_00408f85(uint *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  if (param_7 != 0) {
    uVar3 = FUN_004065ea(param_7,param_6);
    uVar4 = (uint)*(byte *)(param_5 + 4);
    bVar2 = FUN_00408ef3(param_1,param_2,param_3,param_4,uVar3,uVar4,uVar4,uVar4);
    pcVar1 = DAT_00413824;
    if ((CONCAT31(extraout_var,bVar2) != 0) && (DAT_00413824 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_0041427c)(param_2,param_5,0,param_6,&param_7,0,0,1);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00409000 */

void FUN_00409000(undefined4 param_1,uint param_2,undefined4 param_3)

{
  FUN_00408994(param_1,param_2 | 0x40000000,param_3);
  return;
}



/* Function: FUN_00409024 */

void FUN_00409024(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409036 */

undefined4 * __fastcall FUN_00409036(undefined4 *param_1)

{
  char *local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = "length";
  _local_8 = CONCAT31((int3)((uint)param_1 >> 8),1);
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  o___std_exception_copy(&local_c,param_1 + 1);
  *param_1 = &PTR_FUN_004011f8;
  return param_1;
}



/* Function: FUN_00409080 */

void __fastcall FUN_00409080(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_004090a0 */

exception * __thiscall FUN_004090a0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_004011f8;
  return (exception *)this;
}



/* Function: FUN_004090c3 */

undefined4 * __fastcall FUN_004090c3(uint param_1)

{
  longlong lVar1;
  SIZE_T dwBytes;
  HANDLE hHeap;
  undefined4 *puVar2;
  DWORD dwFlags;
  ThrowInfo *pThrowInfo;
  undefined4 local_10 [2];
  int local_8;
  
  lVar1 = (ulonglong)param_1 * 2 + 0x1c;
  dwBytes = (SIZE_T)lVar1;
  local_8 = (int)((ulonglong)lVar1 >> 0x20);
  if (local_8 == 0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    puVar2 = (undefined4 *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[4] = puVar2 + 6;
      puVar2[1] = param_1;
      LOCK();
      puVar2[5] = 1;
      UNLOCK();
      *(undefined2 *)((int)puVar2 + param_1 * 2 + 0x18) = 0;
      return puVar2;
    }
    FUN_0040d423(local_10);
    pThrowInfo = (ThrowInfo *)&DAT_00410fd4;
  }
  else {
    FUN_00409036(local_10);
    pThrowInfo = (ThrowInfo *)&DAT_0041101c;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,pThrowInfo);
}



/* Function: FUN_00409146 */

undefined4 * __fastcall FUN_00409146(undefined4 *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004102ef;
  local_10 = ExceptionList;
  uVar1 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = (undefined2 *)((int)param_2 + (param_3 - 1) * 2);
  if (param_3 != 0) {
    do {
      iVar2 = o_iswspace(*puVar3,uVar1);
      if (iVar2 == 0) {
        puVar4 = FUN_004090c3(param_3);
        FUN_00403485(puVar4 + 6,param_3 * 2,param_2,param_3 * 2);
        goto LAB_0040919b;
      }
      puVar3 = puVar3 + -1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0040919b:
  *param_1 = puVar4;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_004091d8 */

undefined4 * __thiscall FUN_004091d8(void *this,undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  void *pvVar6;
  int local_14;
  void *local_10;
  int local_c;
  void *local_8;
  
  piVar1 = *(int **)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    local_14 = 0;
    local_10 = (void *)0x0;
    local_8 = (void *)0x0;
    local_c = 0;
    pcVar2 = *(code **)(*piVar1 + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1,&local_10,&local_14,&local_8,&local_c);
    iVar3 = (*pcVar2)();
    if ((iVar3 == 0) && (local_14 == *(int *)((int)this + 8))) {
      if (local_8 == (void *)0x0) {
        uVar4 = Ordinal_7(local_10);
        pvVar6 = local_10;
      }
      else {
        uVar4 = Ordinal_7(local_8);
        pvVar6 = local_8;
      }
      FUN_00409146(param_1,pvVar6,uVar4);
      if (local_c != 0) {
        Ordinal_6(local_c);
        local_c = 0;
      }
      if (local_8 != (void *)0x0) {
        Ordinal_6(local_8);
        local_8 = (void *)0x0;
      }
      if (local_10 == (void *)0x0) {
        return param_1;
      }
      Ordinal_6(local_10);
      return param_1;
    }
    if (local_c != 0) {
      Ordinal_6(local_c);
      local_c = 0;
    }
    if (local_8 != (void *)0x0) {
      Ordinal_6(local_8);
      local_8 = (void *)0x0;
    }
    if (local_10 != (void *)0x0) {
      Ordinal_6(local_10);
    }
  }
  local_10 = (void *)0x0;
  DVar5 = FormatMessageW(0x1300,(LPCVOID)0x0,*(DWORD *)((int)this + 8),0x400,(LPWSTR)&local_10,0,
                         (va_list *)0x0);
  FUN_00409146(param_1,local_10,DVar5);
  FUN_0040b32e((int *)&local_10);
  return param_1;
}



/* Function: FUN_004092f0 */

void __thiscall FUN_004092f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *local_c;
  void *local_8;
  
  puVar1 = *(undefined4 **)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    local_8 = (void *)0x0;
    puVar2 = (undefined4 *)*puVar1;
    local_c = this;
    (*(code *)PTR_guard_check_icall_0041427c)(puVar1,&DAT_0040201c,&local_8);
    (*(code *)*puVar2)();
    pvVar3 = local_8;
    local_c = local_8;
    Ordinal_201(0,local_8);
    if (pvVar3 != (void *)0x0) {
      FUN_0040ba18(&local_c);
    }
  }
  *param_1 = *(undefined4 *)((int)this + 8);
  return;
}



/* Function: FUN_0040934a */

void __fastcall FUN_0040934a(void *param_1,undefined2 *param_2,uint param_3)

{
  void *local_8;
  
  if (param_2 != (undefined2 *)0x0) {
    local_8 = param_1;
    FUN_004091d8(param_1,&local_8);
    FUN_004035c9(param_2,param_3,L"winrt::hresult_error: %ls");
    FUN_0040b352((int *)&local_8);
  }
  return;
}



/* Function: FUN_004093a0 */

void FUN_004093a0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00410335;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_004136dc == 0) {
    FUN_00409491((ThrowInfo *)0x0);
    return;
  }
  uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: Catch@004093e2 */

undefined1 * Catch_004093e2(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  **(undefined1 **)(unaff_EBP + 0x10) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_0040379c(psVar1,*(int *)(unaff_EBP + 0xc),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 0x14);
  return &LAB_0040940a;
}



/* Function: Catch@00409412 */

undefined1 * Catch_00409412(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_0040934a(*(void **)(unaff_EBP + -0x1c),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  puVar1 = (undefined4 *)
           FUN_004092f0(*(void **)(unaff_EBP + -0x1c),(undefined4 *)(unaff_EBP + -0x18));
  *(undefined4 *)(unaff_EBP + -0x18) = *puVar1;
  return &LAB_0040940a;
}



/* Function: Catch@00409437 */

undefined1 * Catch_00409437(void)

{
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x28),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_004094fe;
}



/* Function: Catch@0040944b */

undefined1 * Catch_0040944b(void)

{
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x2c),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_00409519;
}



/* Function: Catch@0040945f */

undefined1 * Catch_0040945f(void)

{
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x30),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_00409534;
}



/* Function: Catch_All@00409473 */

undefined1 * Catch_All_00409473(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = FUN_0040446d(*(int *)(unaff_EBP + 8));
  *(int *)(unaff_EBP + -0x18) = iVar1;
  if (iVar1 < 0) {
    return &LAB_0040940a;
  }
  return &LAB_0040955c;
}



/* Function: FUN_00409491 */

void FUN_00409491(ThrowInfo *param_1)

{
  int unaff_EBP;
  void *unaff_retaddr;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(unaff_retaddr,param_1);
}



/* Function: Catch@0040949d */

undefined1 * Catch_0040949d(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + -0x20);
  **(undefined1 **)(unaff_EBP + 0x10) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_0040379c(psVar1,*(int *)(unaff_EBP + 0xc),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 0x14);
  return &LAB_0040940a;
}



/* Function: Catch@004094c5 */

undefined1 * Catch_004094c5(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_0040934a(*(void **)(unaff_EBP + -0x24),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  puVar1 = (undefined4 *)
           FUN_004092f0(*(void **)(unaff_EBP + -0x24),(undefined4 *)(unaff_EBP + -0x18));
  *(undefined4 *)(unaff_EBP + -0x18) = *puVar1;
  return &LAB_0040940a;
}



/* Function: Catch@004094ea */

undefined1 * Catch_004094ea(void)

{
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x34),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_004094fe;
}



/* Function: Catch@00409505 */

undefined1 * Catch_00409505(void)

{
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x38),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_00409519;
}



/* Function: Catch@00409520 */

undefined1 * Catch_00409520(void)

{
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x3c),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_00409534;
}



/* Function: Catch@0040953b */

undefined1 * Catch_0040953b(void)

{
  int unaff_EBP;
  
  FUN_0040442d(*(int **)(unaff_EBP + -0x40),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_0040954f;
}



/* Function: Catch_All@00409556 */

undefined1 * Catch_All_00409556(void)

{
  return &LAB_0040955c;
}



/* Function: FUN_00409584 */

uint FUN_00409584(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int unaff_retaddr;
  int iVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00410358;
  local_10 = ExceptionList;
  uVar2 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (int *)0x0;
  local_8 = 0xffffffff;
  uVar3 = CoCreateInstance((IID *)&DAT_004018bc,(LPUNKNOWN)0x0,0x401,(IID *)&DAT_00401ffc,&local_14)
  ;
  if ((int)uVar3 < 0) {
    iVar4 = 0x1c;
  }
  else {
    pcVar1 = *(code **)(*local_14 + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)(local_14,1,2,uVar2);
    uVar3 = (*pcVar1)();
    if ((int)uVar3 < 0) {
      iVar4 = 0x1d;
    }
    else {
      pcVar1 = *(code **)(*local_14 + 0xc);
      (*(code *)PTR_guard_check_icall_0041427c)(local_14,4,0x218);
      uVar3 = (*pcVar1)();
      if (-1 < (int)uVar3) {
        uVar3 = 0;
        goto LAB_00409639;
      }
      iVar4 = 0x1e;
    }
  }
  FUN_00404bac(unaff_retaddr,iVar4,0x401da0,uVar3);
LAB_00409639:
  ~CComPtr<>((int *)&local_14);
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_0040965c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040965c(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_004138c0,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_004138c0;
    local_8 = &DAT_004138c4;
    _DAT_004138c8 = 0;
    DAT_004138cc = 0;
    _DAT_004138d0 = 0;
    _DAT_004138c4 = &PTR_FUN_004011e8;
    _DAT_004138d4 = &DAT_00413038;
    FUN_0040f1bf(FUN_004096e0);
    local_10 = 0;
    FUN_0040b79d((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_004096e0 */

void FUN_004096e0(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_004138c0,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00409728 */

void __fastcall FUN_00409728(int *param_1)

{
  PREGHANDLE RegHandle;
  PVOID CallbackContext;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  CallbackContext = (PVOID)param_1[4];
  param_1[1] = (int)CallbackContext;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar1 = *(int *)((int)CallbackContext + 4);
  local_18.Data1 = *(ulong *)(iVar1 + -0x10);
  local_18._4_4_ = *(undefined4 *)(iVar1 + -0xc);
  local_18.Data4._0_4_ = *(undefined4 *)(iVar1 + -8);
  local_18.Data4._4_4_ = *(undefined4 *)(iVar1 + -4);
  RegHandle = (PREGHANDLE)((int)CallbackContext + 0x18);
  if (*(int *)RegHandle != 0 || *(int *)((int)CallbackContext + 0x1c) != 0) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  *(undefined4 *)((int)CallbackContext + 0x20) = 0;
  *(undefined4 *)((int)CallbackContext + 0x24) = 0;
  UVar3 = EventRegister(&local_18,FUN_00402cf0,CallbackContext,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)CallbackContext + 0x1c),2,
                        *(undefined2 **)((int)CallbackContext + 4),
                        **(undefined2 **)((int)CallbackContext + 4));
  }
  param_1[3] = 1;
  pcVar2 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_0041427c)();
  (*pcVar2)();
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004097d0 */

undefined4 * __thiscall FUN_004097d0(void *this,byte param_1)

{
  FUN_004061ad((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00409800 */

undefined4 FUN_00409800(int param_1,IUnknown *param_2)

{
  IUnknown_Set((IUnknown **)(param_1 + 4),param_2);
  return 0;
}



/* Function: FUN_00409830 */

undefined4 FUN_00409830(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  *param_3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0x80004005;
  }
  else {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_0041427c)(puVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00409870 */

undefined4 * __thiscall FUN_00409870(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00410186;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = &PTR_o__purecall_004011d0;
  FUN_0040c687((int *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}



/* Function: FUN_004098d6 */

int __thiscall FUN_004098d6(void *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int *local_8;
  
  iVar2 = -0x7fffbffb;
  *param_1 = 0;
  if (this != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = (code *)**this;
    local_8 = (int *)this;
    (*(code *)PTR_guard_check_icall_0041427c)(this,&LAB_00401fec,&local_8);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) {
      pcVar1 = *(code **)(*local_8 + 0x10);
      (*(code *)PTR_guard_check_icall_0041427c)(local_8,&DAT_004020c4,param_1);
      iVar2 = (*pcVar1)();
      pcVar1 = *(code **)(*local_8 + 8);
      (*(code *)PTR_guard_check_icall_0041427c)(local_8);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00409949 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __fastcall FUN_00409949(IUnknown *param_1,undefined4 param_2)

{
  _func_5023 *p_Var1;
  IUnknown *pIVar2;
  int iVar3;
  HRESULT HVar4;
  IUnknown *This;
  IUnknown *local_18;
  IUnknown *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x409955;
  This = (IUnknown *)0x0;
  local_18 = (IUnknown *)0x0;
  local_14[0] = param_1;
  do {
    iVar3 = Ordinal_172(local_14[0],param_2);
    if ((iVar3 < 0) &&
       (HVar4 = IUnknown_GetSite(local_14[0],(IID *)&DAT_004020e8,local_14), pIVar2 = local_14[0],
       -1 < HVar4)) {
      local_8 = 0;
      if (This != (IUnknown *)0x0) {
        p_Var1 = This->lpVtbl->Release;
        (*(code *)PTR_guard_check_icall_0041427c)();
        (*p_Var1)(This);
      }
      local_8 = 0xffffffff;
      This = pIVar2;
    }
  } while ((local_14[0] != (IUnknown *)0x0) && (iVar3 < 0));
  local_18 = This;
  FUN_00405784((int *)&local_18);
  return iVar3;
}



/* Function: FUN_004099e0 */

void FUN_004099e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Ordinal_219(param_1,&PTR_DAT_004012d8,param_2,param_3);
  return;
}



/* Function: FUN_00409a10 */

int FUN_00409a10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* Function: Release */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual unsigned long __stdcall CEnumMediaTypes::Release(void)
    public: virtual unsigned long __stdcall CEnumPins::Release(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int Release(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  LOCK();
  piVar1 = param_1 + 5;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (int *)0x0)) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    (*(code *)PTR_guard_check_icall_0041427c)(1);
    (*pcVar3)();
  }
  return iVar2 + -1;
}



/* Function: FUN_00409a70 */

undefined4 FUN_00409a70(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return 0;
}



/* Function: FUN_00409a90 */

undefined4 FUN_00409a90(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Ordinal_236(param_1 + 0x2c,param_2);
  uVar2 = 0x8007000e;
  if (iVar1 != 0) {
    uVar2 = 0;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  }
  return uVar2;
}



/* Function: FUN_00409ad0 */

undefined4 FUN_00409ad0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  return 0;
}



/* Function: FUN_00409b00 */

undefined4 FUN_00409b00(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return 0;
}



/* Function: FUN_00409b20 */

undefined4 FUN_00409b20(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return 0;
}



/* Function: FUN_00409b50 */

undefined4 FUN_00409b50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Ordinal_236(param_1 + 0x30,param_2);
  uVar2 = 0x8007000e;
  if (iVar1 != 0) {
    uVar2 = 0;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
  }
  return uVar2;
}



/* Function: FUN_00409b90 */

undefined4 FUN_00409b90(int param_1,IUnknown *param_2)

{
  FUN_0040c687((int *)(param_1 + 0x34));
  IUnknown_Set((IUnknown **)(param_1 + 0x30),param_2);
  return 0;
}



/* Function: FUN_00409bc0 */

undefined4 FUN_00409bc0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  *param_3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0x80004002;
  }
  else {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_0041427c)(puVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00409c00 */

undefined4 FUN_00409c00(int param_1,IUnknown *param_2)

{
  IUnknown_Set((IUnknown **)(param_1 + 0x34),param_2);
  return 0;
}



/* Function: FUN_00409c30 */

undefined4 FUN_00409c30(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  *param_3 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0x80070490;
  }
  else {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_0041427c)(puVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00409c6b */

void __fastcall FUN_00409c6b(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004102cc;
  local_10 = ExceptionList;
  uVar3 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_004011b8;
  param_1[2] = &PTR_FUN_00401190;
  param_1[3] = &PTR_FUN_0040117c;
  param_1[4] = &PTR_FUN_00401168;
  Ordinal_236(param_1 + 0xd,0,uVar3);
  Ordinal_236(param_1 + 0xe,0);
  FUN_0040c687(param_1 + 0x11);
  piVar1 = (int *)param_1[0xf];
  param_1[0xf] = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1);
    (*pcVar2)();
  }
  FUN_0040c687(param_1 + 0x10);
  local_8 = 0;
  *param_1 = &PTR_o__purecall_004011d0;
  FUN_0040c687(param_1 + 1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00409d1d */

int __thiscall FUN_00409d1d(void *this,int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  byte *local_10 [2];
  int local_8;
  
  local_8 = 0;
  local_10[0] = (byte *)((int)this + 0x18);
  if ((*local_10[0] & 0x10) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,*(undefined4 *)((int)this + 0x28));
    local_8 = (*pcVar1)();
    if (local_8 < 0) goto LAB_00409e0c;
  }
  local_10[0] = (byte *)((int)this + 0x18);
  if ((*local_10[0] & 8) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x14);
    (*(code *)PTR_guard_check_icall_0041427c)
              (param_1,*(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24));
    local_8 = (*pcVar1)();
    if (local_8 < 0) goto LAB_00409e0c;
  }
  if ((*(byte *)((int)this + 0x18) & 2) != 0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,*(undefined4 *)((int)this + 0x1c));
    local_8 = (*pcVar1)();
    if (local_8 < 0) goto LAB_00409e0c;
  }
  if ((*local_10[0] & 0x80) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x20);
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,*(undefined4 *)((int)this + 0x38));
    local_8 = (*pcVar1)();
    if (local_8 < 0) goto LAB_00409e0c;
  }
  if ((*(byte *)((int)this + 0x18) & 4) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x10);
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,*(undefined4 *)((int)this + 0x34));
    local_8 = (*pcVar1)();
    if (local_8 < 0) goto LAB_00409e0c;
  }
  if ((*(uint *)((int)this + 0x18) & 0x100) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x1c);
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,*(undefined4 *)((int)this + 0x2c));
    local_8 = (*pcVar1)();
  }
LAB_00409e0c:
  uVar2 = *(undefined4 *)((int)this + 0x44);
  if (param_1 != (int *)0x0) {
    pcVar1 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,&LAB_00401fec,local_10);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      pcVar1 = *(code **)(*(int *)local_10[0] + 0xc);
      (*(code *)PTR_guard_check_icall_0041427c)(local_10[0],uVar2);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)local_10[0] + 8);
      (*(code *)PTR_guard_check_icall_0041427c)(local_10[0]);
      (*pcVar1)();
    }
  }
  return local_8;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall CRectTracker::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2015 Release */

void * __thiscall CRectTracker::_scalar_deleting_destructor_(CRectTracker *this,uint param_1)

{
  FUN_00409c6b((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  return this;
}



/* Function: FUN_00409e9a */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00409e9a(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  LPVOID *ppv;
  HRESULT HVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  IID *rclsid;
  HRESULT local_3c;
  int *local_38;
  _EVENT_DATA_DESCRIPTOR local_34;
  HRESULT *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x409ea6;
  if ((DAT_004137c0 & 1) != 0) {
    FUN_0040d344((wchar_t *)param_1[1]);
  }
  local_38 = (int *)0x0;
  local_8 = 0;
  uVar2 = FUN_0040b9a5(&DAT_004138f8);
  if ((char)uVar2 == '\0') {
    ppv = (LPVOID *)FUN_0040c548((int *)&local_38);
    rclsid = (IID *)&DAT_00401be8;
  }
  else {
    ppv = (LPVOID *)FUN_0040c548((int *)&local_38);
    rclsid = (IID *)&DAT_00401bf8;
  }
  HVar3 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401fa0,ppv);
  uVar4 = extraout_ECX;
  if (-1 < HVar3) {
    pcVar1 = *(code **)(*local_38 + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)(local_38,*param_1,param_1[1],param_1[2]);
    HVar3 = (*pcVar1)();
    uVar4 = extraout_ECX_00;
  }
  if ((DAT_004137c0 & 1) != 0) {
    local_24 = &local_3c;
    local_20 = 0;
    local_1c = 4;
    local_18 = 0;
    local_3c = HVar3;
    FUN_0040d2ee(uVar4,(PCEVENT_DESCRIPTOR)&DAT_00401bd8,uVar4,2,&local_34);
  }
  FUN_00405784((int *)&local_38);
  FUN_0040fdd4();
  return;
}



/* Function: FUN_00409f80 */

void FUN_00409f80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Ordinal_219(param_1,&PTR_DAT_00401290,param_2,param_3);
  return;
}



/* Function: FUN_00409fb0 */

int FUN_00409fb0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* Function: FUN_00409fd0 */

void FUN_00409fd0(int param_1)

{
  Release((int *)(param_1 + 0x14));
  return;
}



/* Function: FUN_00409ff0 */

void FUN_00409ff0(int param_1,short *param_2)

{
  int *piVar1;
  
  piVar1 = FUN_0040b2e2((int *)(param_1 + 0x5c));
  FUN_0040dad2(param_2,piVar1);
  return;
}



/* Function: FUN_0040a020 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0040a020(int param_1)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  HRESULT HVar6;
  DWORD idThread;
  BOOL BVar7;
  int unaff_retaddr;
  IUnknown *This;
  UINT Msg;
  IID *pIVar8;
  WPARAM wParam;
  void **ppvObject;
  LPARAM lParam;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  int *local_bc;
  char local_b6;
  char local_b5;
  IID *local_b4;
  int *local_b0;
  WCHAR local_ac [4];
  undefined4 local_a4;
  int *local_2c;
  int local_28 [8];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb8;
  local_8 = 0x40a02f;
  KillTimer((HWND)0x0,DAT_004137cc);
  iVar4 = CompareStringOrdinal
                    (L"InvokeDefaultVerbInOtherProcess",-1,*(LPCWSTR *)(param_1 + 0x40),-1,1);
  if (iVar4 == 2) {
    if (((*(int *)(param_1 + 0x3c) != 0) && (uVar5 = FUN_0040dafc(&local_c0), -1 < (int)uVar5)) &&
       (local_c4 = 0x80070005, local_c0 == 2)) {
      local_c4 = 0;
      local_b0 = (int *)0x0;
      local_8._0_1_ = 0;
      local_8._1_3_ = 0;
      FUN_00405a6a((int *)&local_b0);
      HVar6 = IUnknown_QueryService
                        (*(IUnknown **)(param_1 + -4),(GUID *)&DAT_00401f40,(IID *)&DAT_00401f40,
                         &local_b0);
      if (-1 < HVar6) {
        pcVar3 = *(code **)(*local_b0 + 0xc);
        (*(code *)PTR_guard_check_icall_0041427c)();
        iVar4 = (*pcVar3)();
        if (iVar4 == 0) {
          local_b4 = (IID *)0x0;
          local_8._0_1_ = 1;
          pcVar3 = *(code **)**(undefined4 **)(param_1 + -4);
          FUN_00405a6a((int *)&local_b4);
          (*(code *)PTR_guard_check_icall_0041427c)();
          iVar4 = (*pcVar3)();
          if (-1 < iVar4) {
            local_c0 = 0;
            piVar1 = (int *)(param_1 + 0x4c);
            FUN_00405a6a(piVar1);
            HVar6 = FUN_0040c6a9((IUnknown *)local_b4,piVar1);
            if (-1 < HVar6) {
              local_bc = (int *)0x0;
              local_8._0_1_ = 3;
              uVar5 = FUN_004064a1((void *)*piVar1,&local_bc);
              if (-1 < (int)uVar5) {
                pcVar3 = *(code **)(*local_bc + 0xc);
                (*(code *)PTR_guard_check_icall_0041427c)();
                (*pcVar3)();
              }
              FUN_00405784((int *)&local_bc);
            }
            FUN_00405784(&local_c0);
          }
          pIVar8 = local_b4;
          local_8._0_1_ = 5;
          if (local_b4 != (IID *)0x0) {
            local_b4 = (IID *)0x0;
            pcVar3 = *(code **)(pIVar8->Data1 + 8);
            (*(code *)PTR_guard_check_icall_0041427c)();
            (*pcVar3)((IUnknown *)pIVar8);
          }
        }
      }
      piVar1 = local_b0;
      local_8._0_1_ = 6;
      if (local_b0 != (int *)0x0) {
        local_b0 = (int *)0x0;
        pcVar3 = *(code **)(*piVar1 + 8);
        (*(code *)PTR_guard_check_icall_0041427c)();
        (*pcVar3)();
      }
      local_8._0_1_ = 0;
      FUN_00409949(*(IUnknown **)(param_1 + -4),&local_c8);
      local_2c = *(int **)(param_1 + 0x3c);
      pcVar3 = *(code **)(*local_2c + 4);
      (*(code *)PTR_guard_check_icall_0041427c)();
      (*pcVar3)();
      FUN_0040dd6a((undefined4 *)local_ac);
      local_8 = CONCAT31(local_8._1_3_,7);
      local_a4 = local_c8;
      FUN_0040ddfe(local_ac,(undefined4 *)(-(uint)(param_1 != 0x1c) & param_1 - 0x14U));
      FUN_0040df9f(local_ac);
      FUN_0040c687(local_28);
      FUN_0040ddb9((int)local_ac);
      piVar1 = local_b0;
      local_8 = 8;
      if (local_b0 != (int *)0x0) {
        local_b0 = (int *)0x0;
        pcVar3 = *(code **)(*piVar1 + 8);
        (*(code *)PTR_guard_check_icall_0041427c)();
        (*pcVar3)();
      }
    }
    PostQuitMessage(0);
    goto LAB_0040a435;
  }
  local_b0 = (int *)0x0;
  puVar2 = (uint *)(param_1 + 0x50);
  *puVar2 = 0;
  local_8 = 9;
  HVar6 = IUnknown_QueryService
                    (*(IUnknown **)(param_1 + -4),(GUID *)&DAT_00401850,(IID *)&DAT_00401f30,
                     &local_b0);
  if (-1 < HVar6) {
    pcVar3 = *(code **)(*local_b0 + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*pcVar3)();
  }
  local_b4 = (IID *)0x0;
  if ((*(byte *)puVar2 & 0x10) == 0) goto LAB_0040a387;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  uVar5 = IUnknown_QueryService
                    (*(IUnknown **)(param_1 + -4),(GUID *)&DAT_00401bb0,(IID *)&DAT_00401c08,
                     &local_b4);
  if ((int)uVar5 < 0) {
    iVar4 = 0xbf;
LAB_0040a378:
    FUN_0040d4d4(unaff_retaddr,iVar4,unaff_retaddr,uVar5);
  }
  else {
    pcVar3 = *(code **)(local_b4->Data1 + 0x18);
    ppvObject = (void **)&local_b5;
    This = (IUnknown *)0x40a33e;
    pIVar8 = local_b4;
    (*(code *)PTR_guard_check_icall_0041427c)();
    uVar5 = (*pcVar3)(This,pIVar8,ppvObject);
    if ((int)uVar5 < 0) {
      iVar4 = 0xc3;
      goto LAB_0040a378;
    }
    if (local_b5 != '\0') {
      FUN_0040ba7b((int *)(param_1 + 0x54),0);
      uVar5 = FUN_0040a90f(*(IUnknown **)(param_1 + -4),(int *)(param_1 + 0x54));
      if ((int)uVar5 < 0) {
        iVar4 = 0xc6;
        goto LAB_0040a378;
      }
      *puVar2 = *puVar2 | 0x800;
    }
  }
LAB_0040a387:
  local_bc = (int *)0x0;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  HVar6 = IUnknown_QueryService
                    (*(IUnknown **)(param_1 + -4),(GUID *)&DAT_00401bb0,(IID *)&DAT_00401bb0,
                     &local_bc);
  if (-1 < HVar6) {
    pcVar3 = *(code **)(*local_bc + 0x20);
    (*(code *)PTR_guard_check_icall_0041427c)();
    iVar4 = (*pcVar3)();
    if ((-1 < iVar4) && (local_b6 != '\0')) {
      *puVar2 = *puVar2 | 0x40;
    }
  }
  FUN_0040ad01((void *)(param_1 + -0x1c));
  lParam = 0;
  wParam = 0;
  Msg = 0x8001;
  idThread = GetCurrentThreadId();
  BVar7 = PostThreadMessageW(idThread,Msg,wParam,lParam);
  if (BVar7 == 0) {
    FUN_0040d3d1();
  }
  FUN_00405784((int *)&local_bc);
  FUN_00405784((int *)&local_b4);
  FUN_00405784((int *)&local_b0);
LAB_0040a435:
  FUN_0040fdd4();
  return;
}



/* Function: FUN_0040a450 */

undefined4 FUN_0040a450(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}



/* Function: FUN_0040a470 */

undefined4 FUN_0040a470(int param_1,IUnknown *param_2)

{
  FUN_00405a6a((int *)(param_1 + 0x54));
  IUnknown_Set((IUnknown **)(param_1 + 4),param_2);
  return 0;
}



/* Function: FUN_0040a4a0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT FUN_0040a4a0(int param_1,GUID *param_2,IID *param_3,void **param_4)

{
  int *piVar1;
  code *pcVar2;
  IUnknown *punk;
  _func_5022 *p_Var3;
  HRESULT HVar4;
  IUnknown *This;
  IUnknown *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x40a4ac;
  local_14[0] = (IUnknown *)0x0;
  FUN_0040c062(&DAT_004138e8,1);
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 == (int *)0x0) {
    punk = *(IUnknown **)(param_1 + 0x10);
    local_8 = 0;
    local_14[0] = punk;
    if (punk != (IUnknown *)0x0) {
      p_Var3 = punk->lpVtbl->AddRef;
      This = punk;
      (*(code *)PTR_guard_check_icall_0041427c)();
      (*p_Var3)(This);
    }
    HVar4 = IUnknown_QueryService(punk,param_2,param_3,param_4);
    FUN_00405784((int *)local_14);
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1,param_2,param_3,param_4);
    HVar4 = (*pcVar2)();
  }
  return HVar4;
}



/* Function: FUN_0040a540 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0040a540(undefined4 ***param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *****pppppuVar2;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 **local_50;
  undefined4 ****local_4c;
  DWORD local_48;
  undefined4 **local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  undefined4 ****local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x40a54c;
  local_4c = (undefined4 ****)param_1;
  KillTimer((HWND)0x0,DAT_004137cc);
  uVar1 = FUN_0040b9da(&DAT_004138d8);
  if ((char)uVar1 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
    local_44 = (undefined4 ***)0x0;
    local_30 = 7;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_18 = 7;
    local_1c = 0;
    local_2c = (undefined4 *****)0x0;
    local_8 = 0;
    pppppuVar2 = (undefined4 *****)local_4c;
    if ((undefined4 *****)local_4c == (undefined4 *****)0xc) {
      pppppuVar2 = (undefined4 *****)0x0;
    }
    local_50 = (undefined4 **)FUN_0040adb4(pppppuVar2,&local_48);
    if ((int)local_50 < 0) {
      FUN_0040c853(&local_50);
    }
    else {
      local_4c = &local_2c;
      if (7 < local_18) {
        local_4c = local_2c;
      }
      local_50 = &local_44;
      if (7 < local_30) {
        local_50 = local_44;
      }
      FUN_0040c76b(&local_48,&local_50,&local_4c);
    }
    local_8 = 0xffffffff;
    FUN_0040b400((int *)&local_2c);
    FUN_0040b400((int *)&local_44);
  }
  local_5c = param_2;
  local_58 = param_3;
  local_54 = param_4;
  FUN_00409e9a(&local_5c);
  PostQuitMessage(0);
  FUN_0040fdd4();
  return;
}



/* Function: FUN_0040a640 */

void FUN_0040a640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = (code *)**(undefined4 **)(param_1 + -0x10);
  (*(code *)PTR_guard_check_icall_0041427c)((undefined4 *)(param_1 + -0x10),param_3,param_4);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040a670 */

undefined4 FUN_0040a670(void)

{
  return 0;
}



/* Function: FUN_0040a67b */

HRESULT __fastcall FUN_0040a67b(int *param_1)

{
  HRESULT HVar1;
  BOOL BVar2;
  MSG local_24;
  DWORD local_8;
  
  HVar1 = CoRegisterClassObject
                    ((IID *)&DAT_00401890,
                     (LPUNKNOWN)(-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 7)),4,0,&local_8)
  ;
  if (-1 < HVar1) {
    DAT_004137cc = SetTimer((HWND)0x0,0,20000,(TIMERPROC)0x0);
    while( true ) {
      BVar2 = GetMessageW(&local_24,(HWND)0x0,0,0);
      if (BVar2 < 1) break;
      if (local_24.message == 0x8001) {
        FUN_0040aa2e(param_1);
      }
      else if (((local_24.message == 0x113) && (local_24.hwnd == (HWND)0x0)) &&
              (local_24.wParam == DAT_004137cc)) {
        PostQuitMessage(0);
      }
      TranslateMessage(&local_24);
      DispatchMessageW(&local_24);
    }
    CoRevokeClassObject(local_8);
  }
  return HVar1;
}



/* Function: FUN_0040a730 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 __fastcall FUN_0040a730(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined1 uVar5;
  int local_2c [3];
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14 [3];
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  uVar5 = 1;
  local_20 = (int *)0x0;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  piVar4 = param_1 + 2;
  pcVar1 = *(code **)(*piVar4 + 0xc);
  local_8 = 1;
  uStack_7 = 0;
  local_1c = piVar4;
  local_18 = param_1;
  (*(code *)PTR_guard_check_icall_0041427c)(piVar4,&DAT_00401840,&DAT_00401f20,&local_20);
  iVar3 = (*pcVar1)();
  piVar2 = local_20;
  if (-1 < iVar3) {
    pcVar1 = *(code **)(*local_20 + 0xc);
    piVar4 = FUN_0040b2e2(local_2c);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar2,piVar4);
    iVar3 = (*pcVar1)();
    piVar4 = local_1c;
    if (-1 < iVar3) {
      local_14[0] = (int *)0x0;
      local_8 = 3;
      iVar3 = Ordinal_764(&DAT_00401820,&DAT_00401f10,local_14);
      if (-1 < iVar3) {
        local_18 = (int *)0x0;
        pcVar1 = *(code **)*local_14[0];
        local_8 = 5;
        (*(code *)PTR_guard_check_icall_0041427c)(local_14[0],&DAT_0040202c,&local_18);
        iVar3 = (*pcVar1)();
        local_8 = 4;
        if (-1 < iVar3) {
          pcVar1 = *(code **)(*local_18 + 0x10);
          (*(code *)PTR_guard_check_icall_0041427c)(local_18,local_2c[0]);
          iVar3 = (*pcVar1)();
          if (-1 < iVar3) {
            pcVar1 = *(code **)(*local_14[0] + 0x18);
            (*(code *)PTR_guard_check_icall_0041427c)(local_14[0],0x10f0000,L"NoOpenWith");
            iVar3 = (*pcVar1)();
            uVar5 = 1;
            if (-1 < iVar3) {
              uVar5 = 0;
            }
          }
        }
        FUN_00405784((int *)&local_18);
      }
      FUN_00405784((int *)local_14);
      goto LAB_0040a8f1;
    }
  }
  local_1c = (int *)0x0;
  local_8 = 7;
  if (local_18 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  iVar3 = FUN_004098d6(piVar4,&local_1c);
  if (-1 < iVar3) {
    local_14[0] = (int *)0x0;
    local_8 = 8;
    iVar3 = FUN_0040643a(local_1c,extraout_ECX,local_14);
    if (-1 < iVar3) {
      local_18 = (int *)0x0;
      local_8 = 9;
      pcVar1 = *(code **)(*local_14[0] + 0xc);
      (*(code *)PTR_guard_check_icall_0041427c)(local_14[0],0,&DAT_00401870,&DAT_004020b4,&local_18)
      ;
      iVar3 = (*pcVar1)();
      if (-1 < iVar3) {
        pcVar1 = *(code **)(*local_18 + 0x18);
        (*(code *)PTR_guard_check_icall_0041427c)(local_18,0x10f0000,L"NoOpenWith");
        iVar3 = (*pcVar1)();
        uVar5 = 1;
        if (-1 < iVar3) {
          uVar5 = 0;
        }
      }
      FUN_00405784((int *)&local_18);
    }
    FUN_00405784((int *)local_14);
  }
  FUN_00405784((int *)&local_1c);
LAB_0040a8f1:
  FUN_0040b309(local_2c);
  FUN_00405784((int *)&local_20);
  return uVar5;
}



/* Function: FUN_0040a90f */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_0040a90f(IUnknown *param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int unaff_retaddr;
  undefined4 local_1c;
  int *local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_18 = (int *)0x0;
  *param_2 = 0;
  local_8 = 0;
  uVar2 = IUnknown_QueryService(param_1,(GUID *)&DAT_00401f00,(IID *)&DAT_00401f00,&local_18);
  if ((int)uVar2 < 0) {
    iVar3 = 399;
  }
  else {
    pcVar1 = *(code **)(*local_18 + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)(local_18,param_2);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) {
      iVar3 = 400;
    }
    else {
      if (*param_2 != 0) {
LAB_0040aa14:
        uVar2 = 0;
        goto LAB_0040aa16;
      }
      pcVar1 = *(code **)(*local_18 + 0x10);
      (*(code *)PTR_guard_check_icall_0041427c)(local_18,&local_1c);
      uVar2 = (*pcVar1)();
      if (-1 < (int)uVar2) {
        local_14[0] = (int *)0x0;
        local_8 = CONCAT31(local_8._1_3_,2);
        uVar2 = CoCreateInstance((IID *)&DAT_00401830,(LPUNKNOWN)0x0,3,(IID *)&DAT_00401ef0,local_14
                                );
        if ((int)uVar2 < 0) {
          iVar3 = 0x198;
        }
        else {
          pcVar1 = *(code **)(*local_14[0] + 0x18);
          (*(code *)PTR_guard_check_icall_0041427c)(local_14[0],local_1c,param_2,0,0,0);
          uVar2 = (*pcVar1)();
          if (-1 < (int)uVar2) {
            FUN_00405784((int *)local_14);
            goto LAB_0040aa14;
          }
          iVar3 = 0x199;
        }
        FUN_00404bac(unaff_retaddr,iVar3,0x401e18,uVar2);
        FUN_00405784((int *)local_14);
        goto LAB_0040aa16;
      }
      iVar3 = 0x195;
    }
  }
  FUN_00404bac(unaff_retaddr,iVar3,0x401e18,uVar2);
LAB_0040aa16:
  FUN_00405784((int *)&local_18);
  return uVar2;
}



/* Function: FUN_0040aa2e */

void __fastcall FUN_0040aa2e(int *param_1)

{
  int iVar1;
  
  iVar1 = CompareStringOrdinal(L"openas",-1,(LPCWSTR)param_1[0x17],-1,1);
  if ((iVar1 != 2) || (iVar1 = FUN_0040ab04((int)param_1), iVar1 < 0)) {
    CompareStringOrdinal(L"OpenWithSetDefaultOn",-1,(LPCWSTR)param_1[0x17],-1,1);
    if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
      FUN_0040ad01(param_1);
    }
    FUN_0040a730(param_1);
    FUN_0040ad01(param_1);
    FUN_0040c687(param_1 + 0x16);
    if (param_1[0x1d] != 0) {
      IUnknown_SetSite((IUnknown *)param_1[0x1d],(IUnknown *)0x0);
    }
  }
  PostQuitMessage(0);
  return;
}



/* Function: FUN_0040ab04 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __fastcall FUN_0040ab04(int param_1)

{
  code *pcVar1;
  _func_5021 *p_Var2;
  _func_5023 *p_Var3;
  int *piVar4;
  undefined4 extraout_ECX;
  int iVar5;
  IUnknown *pIVar6;
  IUnknown *This;
  IID *pIVar7;
  int **ppvObject;
  int *local_18;
  IUnknown *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0;
  iVar5 = -0x7ffdfff5;
  local_18 = (int *)0x0;
  piVar4 = *(int **)(param_1 + 0x58);
  if (piVar4 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar4 + 0x20);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar4,0,local_14);
    iVar5 = (*pcVar1)();
    if (iVar5 < 0) goto LAB_0040abd9;
    p_Var2 = local_14[0]->lpVtbl->QueryInterface;
    ppvObject = &local_18;
    pIVar7 = (IID *)&DAT_004020d4;
    pIVar6 = local_14[0];
    (*(code *)PTR_guard_check_icall_0041427c)();
    iVar5 = (*p_Var2)(pIVar6,pIVar7,ppvObject);
    p_Var3 = local_14[0]->lpVtbl->Release;
    pIVar6 = local_14[0];
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*p_Var3)(pIVar6);
  }
  if (-1 < iVar5) {
    local_14[0] = (IUnknown *)0x0;
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar4 = FUN_0040c548((int *)local_14);
    iVar5 = FUN_0040abef(local_18,extraout_ECX,piVar4);
    if (-1 < iVar5) {
      iVar5 = FUN_00409d1d((void *)(param_1 + 0x14),(int *)local_14[0]);
      if (-1 < iVar5) {
        This = (IUnknown *)0x40abbc;
        CoAllowSetForegroundWindow(local_14[0],(LPVOID)0x0);
        p_Var2 = local_14[0]->lpVtbl[3].QueryInterface;
        pIVar7 = (IID *)0x40abcd;
        pIVar6 = local_14[0];
        (*(code *)PTR_guard_check_icall_0041427c)();
        iVar5 = (*p_Var2)(This,pIVar7,&pIVar6->lpVtbl);
      }
    }
    FUN_00405784((int *)local_14);
  }
LAB_0040abd9:
  FUN_00405784((int *)&local_18);
  return iVar5;
}



/* Function: FUN_0040abef */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0040abef(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  short *local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_3c = (short *)0x0;
  local_38 = 0;
  *param_3 = 0;
  local_34 = 0;
  local_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0x44);
  piVar3 = FUN_0040b2e2((int *)&local_3c);
  (*(code *)PTR_guard_check_icall_0041427c)(param_1,&LAB_004021f4,piVar3);
  iVar4 = (*pcVar1)();
  if (-1 < iVar4) {
    if ((local_3c == (short *)0x0) || (bVar2 = false, *local_3c == 0)) {
      bVar2 = true;
    }
    if (!bVar2) {
      local_28 = local_3c;
      local_24 = 0;
      local_1c = 0;
      local_2c = 2;
      uVar5 = InstallApplication(&local_2c);
      uVar6 = uVar5 & 0xffff | 0x80070000;
      if ((int)uVar5 < 1) {
        uVar6 = uVar5;
      }
      if (-1 < (int)uVar6) {
        local_30 = (int *)0x0;
        local_8 = CONCAT31(local_8._1_3_,1);
        pcVar1 = *(code **)(*param_1 + 0xc);
        piVar3 = FUN_0040c548((int *)&local_30);
        (*(code *)PTR_guard_check_icall_0041427c)(param_1,0,&DAT_00401870,&DAT_004020b4,piVar3);
        iVar4 = (*pcVar1)();
        if (-1 < iVar4) {
          pcVar1 = *(code **)(*local_30 + 0x20);
          (*(code *)PTR_guard_check_icall_0041427c)(local_30,0x2200010,0,&DAT_00401fcc,param_3);
          (*pcVar1)();
        }
        FUN_00405784((int *)&local_30);
      }
    }
  }
  FUN_0040b309((int *)&local_3c);
  FUN_0040fdd4();
  return;
}



/* Function: FUN_0040ad01 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0040ad01(void *this)

{
  int *this_00;
  LPVOID pvVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_stack_00000028;
  IID *rclsid;
  LPVOID local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  this_00 = (int *)((int)this + 0x74);
  local_8 = 0;
  uVar4 = 0x80004001;
  if (*this_00 == 0) {
    uVar3 = FUN_0040b9a5(&DAT_004138f8);
    if ((char)uVar3 == '\0') {
      rclsid = (IID *)&DAT_00401be8;
    }
    else {
      rclsid = (IID *)&DAT_00401bf8;
    }
    local_14[0] = (LPVOID)0x0;
    local_8 = local_8 & 0xffffff00;
    CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401fa0,local_14);
    FUN_0040c8f6(this_00,(int *)local_14);
    ~CComPtr<>((int *)local_14);
  }
  pvVar1 = (LPVOID)*this_00;
  if (pvVar1 != (LPVOID)0x0) {
    local_14[0] = pvVar1;
    if (in_stack_00000028 == (int *)0x0) {
      std::_Xbad_function_call();
    }
    pcVar2 = *(code **)(*in_stack_00000028 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(local_14);
    uVar4 = (*pcVar2)();
  }
  Tidy((int *)&stack0x00000004);
  return uVar4;
}



/* Function: FUN_0040adb4 */

/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void FUN_0040adb4(void *param_1,DWORD *param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  wchar_t *pwVar3;
  DWORD local_228;
  HANDLE local_224;
  WCHAR local_220 [268];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x21c;
  local_8 = 0x40adc3;
  if (param_1 == (void *)0x0) {
    RaiseFailFastException((PEXCEPTION_RECORD)0x0,(PCONTEXT)0x0,1);
  }
  local_8 = 0;
  FUN_0040d251(&local_224,param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  DVar1 = GetProcessId(local_224);
  *param_2 = DVar1;
  memset(local_220,0,0x208);
  local_228 = 0x104;
  BVar2 = QueryFullProcessImageNameW(local_224,0,local_220,&local_228);
  if (BVar2 != 0) {
    FUN_0040b392(param_2 + 7,local_220);
    pwVar3 = wcsrchr(local_220,L'\\');
    if (pwVar3 == (wchar_t *)0x0) {
      pwVar3 = local_220;
    }
    else {
      pwVar3 = pwVar3 + 1;
    }
    FUN_0040b392(param_2 + 1,pwVar3);
    if (local_224 != (HANDLE)0x0) {
      CloseHandle(local_224);
    }
    FUN_0040aecf();
    return;
  }
  if (local_224 != (HANDLE)0x0) {
    CloseHandle(local_224);
  }
  FUN_0040aecf();
  return;
}



/* Function: Catch@0040aea7 */

undefined1 * Catch_0040aea7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x224) = *(undefined4 *)(*(int *)(unaff_EBP + -0x228) + 0x14);
  return &LAB_0040aebc;
}



/* Function: Catch_All@0040aec4 */

undefined * Catch_All_0040aec4(void)

{
  return &DAT_0040aeca;
}



/* Function: FUN_0040aecf */

void FUN_0040aecf(void)

{
  FUN_0040fde9();
  return;
}



/* Function: Tidy */

void __fastcall Tidy(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1 != param_1);
    (*pcVar2)();
    param_1[9] = 0;
  }
  return;
}



/* Function: FUN_0040aee8 */

void __fastcall FUN_0040aee8(int param_1)

{
  FUN_0040b400((int *)(param_1 + 0x1c));
  FUN_0040b400((int *)(param_1 + 4));
  return;
}



/* Function: FUN_0040af05 */

uint FUN_0040af05(undefined4 param_1,undefined4 param_2,void *param_3)

{
  WCHAR WVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  LPCWSTR pszPath;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  int unaff_retaddr;
  undefined4 **local_1c;
  LPCWSTR local_18;
  IUnknown *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  FUN_0040d0a4();
  local_1c = &local_c;
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  local_18 = (LPCWSTR)0x0;
  local_14 = (IUnknown *)CONCAT31(local_14._1_3_,1);
  uVar3 = FUN_0040eacf(param_3,&local_18,&local_8);
  FUN_0040b22a(&local_1c);
  puVar4 = local_c;
  if ((int)uVar3 < 0) {
    iVar8 = 0x280;
  }
  else {
    local_10 = local_c;
    uVar3 = CoInitializeEx((LPVOID)0x0,6);
    if (-1 < (int)uVar3) {
      uVar3 = FUN_00409584();
      if ((int)uVar3 < 0) {
        iVar8 = 0x285;
LAB_0040b0f3:
        FUN_00404bac(unaff_retaddr,iVar8,0x401e18,uVar3);
      }
      else {
        if ((local_8 != 1) || (*(short *)*puVar4 == 0)) {
LAB_0040b07d:
          local_1c = (undefined4 **)0x0;
          uVar7 = 0;
          uVar3 = 0x80070057;
          local_14 = (IUnknown *)0x0;
          pszPath = (LPCWSTR)0x0;
          local_18 = (LPCWSTR)0x0;
          if (local_8 != 0) {
            do {
              WVar1 = *(LPCWSTR)local_10[uVar7];
              if ((WVar1 != L'-') && (WVar1 != L'/')) {
                if (pszPath != (LPCWSTR)0x0) break;
                uVar3 = 0;
                pszPath = (LPCWSTR)local_10[uVar7];
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < local_8);
            local_18 = pszPath;
            if (-1 < (int)uVar3) {
              BVar6 = PathIsURLW(pszPath);
              if (BVar6 != 0) {
                local_14 = (IUnknown *)((uint)local_14 | 8);
              }
              local_14 = (IUnknown *)((uint)local_14 | 0x40);
              uVar3 = FUN_00409e9a(&local_1c);
              if (-1 < (int)uVar3) goto LAB_0040b04c;
              iVar8 = 0x2a0;
              goto LAB_0040b0f3;
            }
          }
          iVar8 = 0x29f;
          goto LAB_0040b0f3;
        }
        iVar8 = CompareStringOrdinal(L"embedding",-1,(short *)*puVar4 + 1,-1,1);
        if (iVar8 != 2) goto LAB_0040b07d;
        local_18 = (LPCWSTR)0x0;
        local_14 = (IUnknown *)0x0;
        local_1c = (undefined4 **)&PTR_FUN_00401210;
        SHCreateThreadRef((LONG *)&local_18,&local_14);
        SHSetThreadRef(local_14);
        local_1c = (undefined4 **)&PTR_FUN_00401210;
        SetProcessReference(local_14);
        puVar4 = (undefined4 *)FUN_0040f228(0x78);
        if (puVar4 == (undefined4 *)0x0) {
LAB_0040b058:
          uVar3 = 0x8007000e;
          FUN_00404bac(unaff_retaddr,0x28e,0x401e18,0x8007000e);
          FUN_00406089(&local_1c);
        }
        else {
          memset(puVar4,0,0x78);
          piVar5 = FUN_0040b127(puVar4);
          if (piVar5 == (int *)0x0) goto LAB_0040b058;
          FUN_0040a67b(piVar5);
          pcVar2 = *(code **)(*piVar5 + 8);
          (*(code *)PTR_guard_check_icall_0041427c)(piVar5);
          (*pcVar2)();
          FUN_00406089(&local_1c);
LAB_0040b04c:
          FUN_0040cf58();
          uVar3 = 0;
        }
      }
      CoUninitialize();
      goto LAB_0040b107;
    }
    iVar8 = 0x283;
  }
  FUN_00404bac(unaff_retaddr,iVar8,0x401e18,uVar3);
LAB_0040b107:
  puVar4 = local_c;
  local_c = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    LocalFree(puVar4);
  }
  return uVar3;
}



/* Function: FUN_0040b127 */

undefined4 * __fastcall FUN_0040b127(undefined4 *param_1)

{
  param_1[7] = &PTR_FUN_00401190;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = &PTR_FUN_0040117c;
  param_1[9] = &PTR_FUN_00401168;
  param_1[10] = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_00401158;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[1] = &PTR_FUN_00401148;
  param_1[2] = &PTR_FUN_00401138;
  param_1[3] = &PTR_FUN_00401128;
  param_1[4] = &PTR_FUN_00401114;
  param_1[5] = &PTR_FUN_004010fc;
  param_1[7] = &PTR_FUN_004010d4;
  param_1[8] = &PTR_FUN_004010c0;
  param_1[9] = &PTR_FUN_004010ac;
  return param_1;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::UMSFreeVirtualProcessorRoot::`scalar
   deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeVirtualProcessorRoot::_scalar_deleting_destructor_
          (UMSFreeVirtualProcessorRoot *this,uint param_1)

{
  FUN_0040b1ef((int)this);
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  return this;
}



/* Function: FUN_0040b1ef */

void __fastcall FUN_0040b1ef(int param_1)

{
  ~CComPtr<>((int *)(param_1 + 0x74));
  if (*(int *)(param_1 + 0x70) != 0) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x70));
  }
  FUN_00405a6a((int *)(param_1 + 0x68));
  FUN_0040b309((int *)(param_1 + 0x5c));
  FUN_00409c6b((undefined4 *)(param_1 + 0x14));
  return;
}



/* Function: FUN_0040b22a */

void __fastcall FUN_0040b22a(undefined4 *param_1)

{
  HLOCAL hMem;
  
  if (*(char *)(param_1 + 2) != '\0') {
    hMem = *(HLOCAL *)*param_1;
    *(undefined4 *)*param_1 = param_1[1];
    if (hMem != (HLOCAL)0x0) {
      LocalFree(hMem);
    }
  }
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
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1,DAT_00413240 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: Tidy */

/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall std::_Func_class<void>::_Tidy(void)
    protected: void __thiscall std::_Func_class<void,unsigned int const &>::_Tidy(void)
    protected: void __thiscall std::_Func_class<void,class Concurrency::message<unsigned int>
   *>::_Tidy(void)
    protected: void __thiscall std::_Func_class<void,class Concurrency::message<enum
   Concurrency::agent_status> *>::_Tidy(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __fastcall Tidy(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1 != param_1);
    (*pcVar2)();
    param_1[9] = 0;
  }
  return;
}



/* Function: FUN_0040b2d7 */

void __fastcall FUN_0040b2d7(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100fa;
  pvStack_10 = ExceptionList;
  uVar3 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = pvStack_10;
  return;
}



/* Function: FUN_0040b2e2 */

int * __fastcall FUN_0040b2e2(int *param_1)

{
  if (*param_1 != 0) {
    CoTaskMemFree((LPVOID)*param_1);
    *param_1 = 0;
  }
  param_1[1] = -1;
  param_1[2] = -1;
  return param_1;
}



/* Function: FUN_0040b309 */

void __fastcall FUN_0040b309(int *param_1)

{
  if (*param_1 != 0) {
    CoTaskMemFree((LPVOID)*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_0040b32e */

void __fastcall FUN_0040b32e(int *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (*param_1 != 0) {
    lpMem = (LPVOID)*param_1;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0040b352 */

void __fastcall FUN_0040b352(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  lpMem = (LPVOID)*param_1;
  if (lpMem != (LPVOID)0x0) {
    piVar1 = (int *)((int)lpMem + 0x14);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    dwFlags = iVar2 - 1;
    if (dwFlags == 0) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,dwFlags,lpMem);
    }
    else if ((int)dwFlags < 0) {
      o_abort();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0040b392 */

int * __thiscall FUN_0040b392(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  void *_Dst;
  uint local_8;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar3 = (int)psVar2 - (int)(param_1 + 1) >> 1;
  if (*(uint *)((int)this + 0x14) < uVar3) {
    local_8 = (uint)this & 0xffffff00;
    this = FUN_0040c960(this,uVar3,local_8,param_1);
  }
  else {
    _Dst = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      _Dst = *this;
    }
    *(uint *)((int)this + 0x10) = uVar3;
    memmove(_Dst,param_1,uVar3 * 2);
    *(undefined2 *)(uVar3 * 2 + (int)_Dst) = 0;
  }
  return (int *)this;
}



/* Function: FUN_0040b400 */

void __fastcall FUN_0040b400(int *param_1)

{
  if (7 < (uint)param_1[5]) {
    FUN_0040ba36(param_1,*param_1,param_1[5]);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}



/* Function: FUN_0040b42d */

void __fastcall FUN_0040b42d(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004040f5();
  if (cVar1 == '\0') {
    FUN_00408a6d(param_1);
  }
  else {
    *param_1 = 0;
    FUN_00408cf7((int)param_1);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040b487 */

int * __fastcall FUN_0040b487(int *param_1)

{
  int iVar1;
  DWORD dwErrCode;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004102cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    local_8 = 0;
    dwErrCode = GetLastError();
    FUN_00408a3b(iVar1);
    SetLastError(dwErrCode);
  }
  *param_1 = 0;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_0040b4ef */

void __fastcall FUN_0040b4ef(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00410186;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004040f5();
  if (cVar1 == '\0') {
    FUN_0040815c(param_1);
  }
  else {
    *param_1 = 0;
    local_8 = 0;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      FUN_0040b703(*(int **)(param_1 + 8));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040b554 */

void __thiscall FUN_0040b554(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00407482(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_0040b577 */

void __fastcall FUN_0040b577(void *param_1)

{
  FUN_00407482(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_0040b599 */

void __thiscall FUN_0040b599(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_0040bab3(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040b5d0 */

void __fastcall FUN_0040b5d0(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int unaff_retaddr;
  HANDLE local_21c;
  int *local_218;
  HANDLE local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004035c9(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00405874(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00404092(extraout_ECX);
    goto LAB_0040b6bf;
  }
  FUN_00405c34(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_00404d29(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    iVar3 = 299;
LAB_0040b6ed:
    FUN_00404bac(unaff_retaddr,iVar3,0x401aa0,uVar2);
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_0040b8de((int)local_210,&local_214,param_2);
    if ((int)uVar2 < 0) {
      iVar3 = 0x134;
      goto LAB_0040b6ed;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00404cfe(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00404cd1(local_214);
  }
LAB_0040b6bf:
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040b703 */

void __fastcall FUN_0040b703(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_004040f5();
  if (cVar1 == '\0') {
    FUN_00405c34(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_00405874(param_1 + 2,0);
      FUN_00405874(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00404cfe(local_8);
        SetLastError(DVar2);
      }
      FUN_0040b843((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00404cfe(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_00407f93(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_0040b79d */

void __fastcall FUN_0040b79d(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_00409728((int *)(*param_1 + 4));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_0040b7ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b7ca(void)

{
  _DAT_00413838 = "WilStaging_02";
  DAT_00413834 = 0;
  _DAT_0041383c = 0;
  DAT_00413840 = 0;
  _DAT_00413844 = 0;
  _DAT_00413848 = 0;
  _DAT_0041384c = 0;
  _DAT_00413850 = 0;
  _DAT_00413854 = 0;
  FUN_00408693((LPCRITICAL_SECTION)&DAT_00413858);
  _DAT_00413880 = 0;
  FUN_00408693((LPCRITICAL_SECTION)&DAT_00413884);
  _DAT_004138bc = 0;
  _DAT_004138ac = 0;
  uRam004138b0 = 0;
  uRam004138b4 = 0;
  uRam004138b8 = 0;
  DAT_00413834 = 1;
  return;
}



/* Function: FUN_0040b843 */

void __fastcall FUN_0040b843(int param_1)

{
  FUN_00407f32((void *)(param_1 + 0x10));
  FUN_00405aed((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00404cd1(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040b86e */

uint __fastcall FUN_0040b86e(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_0040bade(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_0040bbe3(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0040b8a6 */

uint __fastcall FUN_0040b8a6(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_0040bc3c(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_0040bd41(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0040b8de */

uint __fastcall FUN_0040b8de(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  int unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00403a58(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00404bac(unaff_retaddr,0x148,0x401aa0,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00404cc5();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00404d86(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00404bac(unaff_retaddr,0x14b,0x401aa0,uVar3);
    }
    else {
      FUN_0040bd9a(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_00405aed(local_10);
  }
  FUN_00405c77((int *)&local_18);
  return uVar3;
}



/* Function: FUN_0040b9a5 */

uint __fastcall FUN_0040b9a5(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_c;
  void *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_0040bdfe(param_1,(uint *)&local_c);
  uVar1 = local_c._0_1_;
  local_8 = (void *)(CONCAT31(local_8._1_3_,local_c._0_1_) & 0xffffff01);
  uVar2 = FUN_0040bf03(param_1,(byte)local_8);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_0040b9da */

uint __fastcall FUN_0040b9da(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  void *pvStack_c;
  
  local_10 = param_1;
  pvStack_c = param_1;
  FUN_0040c0bc(param_1,(uint *)&local_10);
  uVar1 = local_10._0_1_;
  local_10 = (void *)((uint)local_10 & 0xffffff01);
  uVar2 = FUN_0040c1c1(param_1,(byte)local_10);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_0040ba18 */

void __fastcall FUN_0040ba18(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  pcVar2 = *(code **)(*piVar1 + 8);
  (*(code *)PTR_guard_check_icall_0041427c)(piVar1);
  (*pcVar2)();
  return;
}



/* Function: FUN_0040ba36 */

void __fastcall FUN_0040ba36(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  if ((0xfff < param_3 * 2 + 2U) && (iVar2 = *(int *)(param_2 + -4), 0x1f < (param_2 - iVar2) - 4U))
  {
    o__invalid_parameter_noinfo_noreturn();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_0040f1dc(iVar2);
  return;
}



/* Function: FUN_0040ba7b */

void __thiscall FUN_0040ba7b(void *this,undefined4 param_1)

{
  LPVOID pv;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pv = *this;
  if (pv != (LPVOID)0x0) {
    dwErrCode = GetLastError();
    CoTaskMemFree(pv);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040bab3 */

void FUN_0040bab3(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0040bad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_0040bade */

uint * __thiscall FUN_0040bade(void *this,uint *param_1)

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
  local_10 = FUN_00408dd3();
  FUN_0040c224(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_004132c4 == '\0')) goto LAB_0040bbbd;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
  if ((local_10 == 0) || (local_10 != DAT_004132d4)) {
LAB_0040bbad:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406d61(&DAT_004132f0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0040bbad;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
LAB_0040bbbd:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040bbe3 */

void __thiscall FUN_0040bbe3(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040bade(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 1;
  local_10 = 0;
  FUN_00408f85((uint *)((int)this + 8),0x2e30a37,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_0040bc3c */

uint * __thiscall FUN_0040bc3c(void *this,uint *param_1)

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
  local_10 = FUN_00408dd3();
  FUN_0040c2e5(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_004132c4 == '\0')) goto LAB_0040bd1b;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
  if ((local_10 == 0) || (local_10 != DAT_004132d4)) {
LAB_0040bd0b:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00406d61(&DAT_004132f0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0040bd0b;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
LAB_0040bd1b:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040bd41 */

void __thiscall FUN_0040bd41(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040bc3c(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 1;
  local_10 = 0;
  FUN_00408f85((uint *)((int)this + 8),0x2f29a04,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_0040bd9a */

undefined4 * __thiscall FUN_0040bd9a(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_00407bc2((void *)((int)this + 0x14));
  FUN_00408693((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_0040bdfe */

uint * __thiscall FUN_0040bdfe(void *this,uint *param_1)

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
  local_c = FUN_00408dd3();
  FUN_0040c37c(local_1c,&local_8);
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
  if (((uVar4 & 4) != 0) || (DAT_004132c4 == '\0')) goto LAB_0040bedd;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
  if ((local_c == 0) || (local_c != DAT_004132d4)) {
LAB_0040becd:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_14 = 1;
    local_10 = this;
    uVar2 = FUN_00406d61(&DAT_004132f0,&local_14,8);
    if ((char)uVar2 == '\0') goto LAB_0040becd;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
LAB_0040bedd:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040bf03 */

void __thiscall FUN_0040bf03(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040bdfe(this,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 1;
  local_c = 0;
  FUN_00408f85((uint *)((int)this + 8),0x365f966,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_c,
               (uint)param_1,3);
  return;
}



/* Function: FUN_0040bf5d */

uint * __thiscall FUN_0040bf5d(void *this,uint *param_1)

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
  local_c = FUN_00408dd3();
  FUN_0040c413(local_1c,&local_8);
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
  if (((uVar4 & 4) != 0) || (DAT_004132c4 == '\0')) goto LAB_0040c03c;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
  if ((local_c == 0) || (local_c != DAT_004132d4)) {
LAB_0040c02c:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_14 = 3;
    local_10 = this;
    uVar2 = FUN_00406d61(&DAT_004132f0,&local_14,8);
    if ((char)uVar2 == '\0') goto LAB_0040c02c;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
LAB_0040c03c:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040c062 */

void __thiscall FUN_0040c062(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040bf5d(this,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_00408f85((uint *)((int)this + 8),0x1024ffc,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_c,
               (uint)param_1,3);
  return;
}



/* Function: FUN_0040c0bc */

uint * __thiscall FUN_0040c0bc(void *this,uint *param_1)

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
  local_10 = FUN_00408dd3();
  FUN_0040c482(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_004132c4 == '\0')) goto LAB_0040c19b;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
  if ((local_10 == 0) || (local_10 != DAT_004132d4)) {
LAB_0040c18b:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 1;
    local_14 = this;
    uVar2 = FUN_00406d61(&DAT_004132f0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0040c18b;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004132c8);
LAB_0040c19b:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040c1c1 */

void __thiscall FUN_0040c1c1(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10 [3];
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040c0bc(this,local_10);
    uVar2 = *puVar1;
  }
  local_14 = 1;
  local_18 = 0;
  FUN_00408f85((uint *)((int)this + 8),0x38472b4,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_18,
               (uint)param_1,3);
  return;
}



/* Function: FUN_0040c224 */

uint * FUN_0040c224(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = FUN_00408dee(0x2e30a37,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = (((uVar3 & 3) << 2 | uVar3 & 0x40) << 2 | uVar3 & 0x80) << 3;
  if ((uVar3 & 0xffffff3f) != 0) {
    uVar4 = 0;
    if ((uVar3 & 0xffffff3f) == 2) {
      uVar4 = 0x40;
    }
    uVar5 = uVar5 | uVar4;
  }
  *param_1 = uVar5;
  cVar2 = '\0';
  if ((uVar5 & 0xc00) == 0xc00) {
    bVar1 = true;
  }
  else {
    if ((uVar5 & 0x40) == 0) goto LAB_0040c2c3;
    bVar1 = false;
  }
  uVar3 = FUN_0040b8a6(&DAT_00413908);
  cVar2 = (char)uVar3;
  if ((bVar1) && (cVar2 == '\0')) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_0040c2c3:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (cVar2 == '\0')) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_0040c2e5 */

uint * FUN_0040c2e5(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_00408dee(0x2f29a04,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
    uVar4 = uVar4 | uVar3;
  }
  bVar1 = false;
  if ((uVar4 & 0xc00) == 0xc00) {
    bVar1 = true;
LAB_0040c359:
    if (((uVar4 & 0x40) == 0) || (!bVar1)) {
      uVar2 = 0;
      goto LAB_0040c369;
    }
  }
  else if ((uVar4 & 0x40) == 0) goto LAB_0040c359;
  uVar2 = 1;
LAB_0040c369:
  *param_1 = uVar2 | uVar4;
  return param_1;
}



/* Function: FUN_0040c37c */

uint * FUN_0040c37c(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_00408dee(0x365f966,1,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
    uVar4 = uVar4 | uVar3;
  }
  bVar1 = false;
  if ((uVar4 & 0xc00) == 0xc00) {
    bVar1 = true;
LAB_0040c3f0:
    if (((uVar4 & 0x40) == 0) || (!bVar1)) {
      uVar2 = 0;
      goto LAB_0040c400;
    }
  }
  else if ((uVar4 & 0x40) == 0) goto LAB_0040c3f0;
  uVar2 = 1;
LAB_0040c400:
  *param_1 = uVar2 | uVar4;
  return param_1;
}



/* Function: FUN_0040c413 */

uint * FUN_0040c413(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00408dee(0x1024ffc,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_0040c482 */

uint * FUN_0040c482(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = FUN_00408dee(0x38472b4,1,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = (((uVar3 & 3) << 2 | uVar3 & 0x40) << 2 | uVar3 & 0x80) << 3;
  if ((uVar3 & 0xffffff3f) != 0) {
    uVar4 = 0;
    if ((uVar3 & 0xffffff3f) == 2) {
      uVar4 = 0x40;
    }
    uVar5 = uVar5 | uVar4;
  }
  *param_1 = uVar5;
  cVar2 = '\0';
  if ((uVar5 & 0xc00) == 0xc00) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((uVar5 & 0x40) == 0) goto LAB_0040c526;
  }
  uVar3 = FUN_0040b86e(&DAT_00413918);
  cVar2 = (char)uVar3;
  if ((bVar1) && (cVar2 == '\0')) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_0040c526:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (cVar2 == '\0')) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_0040c548 */

int * FUN_0040c548(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00410358;
  local_10 = ExceptionList;
  uVar3 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_0040c5ac */

void __fastcall FUN_0040c5ac(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040c5e0 */

void FUN_0040c5e0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_0040835a((int)param_2);
  }
  return;
}



/* Function: FUN_0040c620 */

void FUN_0040c620(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_00406da2(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040c670 */

void FUN_0040c670(undefined4 param_1,char *param_2)

{
  FUN_00408b98(param_2);
  return;
}



/* Function: FUN_0040c687 */

void __fastcall FUN_0040c687(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_0040c6a9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT __fastcall FUN_0040c6a9(IUnknown *param_1,undefined4 *param_2)

{
  _func_5021 *p_Var1;
  _func_5023 *p_Var2;
  HRESULT HVar3;
  IUnknown *pIVar4;
  IID *riid;
  IUnknown **ppvObject;
  IUnknown *local_18;
  IUnknown *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x40c6b5;
  local_18 = (IUnknown *)0x0;
  local_14[0] = (IUnknown *)0x0;
  *param_2 = 0;
  HVar3 = CoCopyProxy(param_1,&local_18);
  pIVar4 = local_18;
  if (-1 < HVar3) {
    local_8 = 1;
    p_Var1 = local_18->lpVtbl->QueryInterface;
    FUN_00405a6a((int *)local_14);
    ppvObject = local_14;
    riid = (IID *)&DAT_00401f80;
    (*(code *)PTR_guard_check_icall_0041427c)();
    HVar3 = (*p_Var1)(pIVar4,riid,ppvObject);
    if ((-1 < HVar3) &&
       (HVar3 = CoSetProxyBlanket(local_14[0],0xffffffff,0xffffffff,(OLECHAR *)0xffffffff,0,0,
                                  (RPC_AUTH_IDENTITY_HANDLE)0xffffffff,0x800), pIVar4 = local_14[0],
       -1 < HVar3)) {
      local_14[0] = (IUnknown *)0x0;
      *param_2 = pIVar4;
    }
  }
  pIVar4 = local_14[0];
  local_8 = 2;
  if (local_14[0] != (IUnknown *)0x0) {
    local_14[0] = (IUnknown *)0x0;
    p_Var2 = pIVar4->lpVtbl->Release;
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*p_Var2)(pIVar4);
  }
  FUN_00405784((int *)&local_18);
  return HVar3;
}



/* Function: FUN_0040c76b */

void __fastcall FUN_0040c76b(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *this;
  undefined *puVar1;
  uint uVar2;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  _EVENT_DATA_DESCRIPTOR local_70 [2];
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_00413240 ^ (uint)&local_84;
  puVar1 = FUN_0040965c();
  this = *(uint **)(puVar1 + 4);
  if (5 < *this) {
    uVar2 = FUN_00402e08(this,0,0x4000);
    if ((char)uVar2 != '\0') {
      local_74 = 0;
      local_78 = 0x1000000;
      local_18 = 8;
      local_84 = *param_3;
      local_80 = *param_2;
      local_7c = *param_1;
      local_20 = &local_78;
      local_1c = 0;
      local_14 = 0;
      FUN_004031f9(&local_84,local_30);
      FUN_004031f9(&local_80,local_40);
      local_50 = &local_7c;
      local_4c = 0;
      local_48 = 4;
      local_44 = 0;
      FUN_00402d73((int)this,&DAT_0040253d,(LPCGUID)0x0,(LPCGUID)0x0,6,local_70);
    }
  }
  FUN_0040ef30(local_c ^ (uint)&local_84);
  return;
}



/* Function: FUN_0040c853 */

void __fastcall FUN_0040c853(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int extraout_ECX;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  _EVENT_DATA_DESCRIPTOR local_50 [2];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_00413240 ^ (uint)auStack_60;
  puVar1 = FUN_0040965c();
  if (5 < **(uint **)(puVar1 + 4)) {
    uVar2 = FUN_00402e08(*(uint **)(puVar1 + 4),0,0x4000);
    if ((char)uVar2 != '\0') {
      local_5c = *param_1;
      local_20 = &local_58;
      local_30 = &local_5c;
      local_58 = 0x1000000;
      local_54 = 0;
      local_1c = 0;
      local_18 = 8;
      local_14 = 0;
      local_2c = 0;
      local_28 = 4;
      local_24 = 0;
      FUN_00402d73(extraout_ECX,&DAT_004024f9,(LPCGUID)0x0,(LPCGUID)0x0,4,local_50);
    }
  }
  FUN_0040ef30(local_c ^ (uint)auStack_60);
  return;
}



/* Function: FUN_0040c8f6 */

int * __thiscall FUN_0040c8f6(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00410358;
  local_10 = ExceptionList;
  uVar4 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  *param_1 = 0;
  local_8 = 0;
                    /* WARNING: Load size is inaccurate */
  piVar2 = *this;
  *(int *)this = iVar1;
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar2,uVar4);
    (*pcVar3)();
  }
  ExceptionList = local_10;
  return (int *)this;
}



/* Function: FUN_0040c960 */

int * __thiscall FUN_0040c960(void *this,uint param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  int *piVar4;
  void *pvVar5;
  void *local_8;
  
  if (param_1 < 0x7fffffff) {
    pvVar5 = (void *)(param_1 | 7);
    uVar1 = *(uint *)((int)this + 0x14);
    local_8 = (void *)0x7ffffffe;
    if (((pvVar5 < (void *)0x7fffffff) && (uVar1 <= 0x7ffffffe - (uVar1 >> 1))) &&
       (pvVar3 = (void *)((uVar1 >> 1) + uVar1), local_8 = pvVar5, pvVar5 < pvVar3)) {
      local_8 = pvVar3;
    }
    pvVar5 = FUN_0040cae3(pvVar5,(uint *)&local_8);
    *(uint *)((int)this + 0x10) = param_1;
    *(void **)((int)this + 0x14) = local_8;
    memcpy(pvVar5,param_3,param_1 * 2);
    *(undefined2 *)(param_1 * 2 + (int)pvVar5) = 0;
    if (7 < uVar1) {
                    /* WARNING: Load size is inaccurate */
      FUN_0040ba36(0,*this,uVar1);
    }
    *(void **)this = pvVar5;
    return (int *)this;
  }
  local_8 = this;
  FUN_00409024();
  pcVar2 = (code *)swi(3);
  piVar4 = (int *)(*pcVar2)();
  return piVar4;
}



/* Function: FUN_0040ca00 */

undefined4 * __thiscall FUN_0040ca00(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401084;
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040ca30 */

undefined4 * __thiscall FUN_0040ca30(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401084;
  if ((param_1 & 1) != 0) {
    FUN_0040f1dc(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040ca60 */

void __thiscall FUN_0040ca60(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401098;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: FUN_0040ca90 */

undefined4 __thiscall
FUN_0040ca90(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_00407482(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_0040cae3 */

void * __fastcall FUN_0040cae3(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  
  *param_2 = *param_2 + 1;
  if (0x7fffffff < *param_2) {
LAB_0040cb34:
    FUN_0040cf33();
    pcVar1 = (code *)swi(3);
    pvVar2 = (void *)(*pcVar1)();
    return pvVar2;
  }
  uVar4 = *param_2 * 2;
  if (0xfff < uVar4) {
    if (uVar4 + 0x23 <= uVar4) goto LAB_0040cb34;
    pvVar2 = operator_new(uVar4 + 0x23);
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)((int)pvVar2 + 0x23U & 0xffffffe0);
      *(void **)((int)pvVar3 - 4) = pvVar2;
      goto LAB_0040cb30;
    }
    uVar4 = o__invalid_parameter_noinfo_noreturn();
  }
  if (uVar4 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = operator_new(uVar4);
  }
LAB_0040cb30:
  *param_2 = *param_2 - 1;
  return pvVar3;
}



/* Function: FUN_0040cb40 */

void __thiscall FUN_0040cb40(void *this,char param_1)

{
  if (param_1 != '\0') {
    FUN_0040f1dc(this);
  }
  return;
}



/* Function: FUN_0040cb60 */

int __fastcall FUN_0040cb60(int param_1)

{
  return param_1 + 4;
}



/* Function: FUN_0040cb70 */

TypeDescriptor * FUN_0040cb70(void)

{
  return &<lambda_cd8b9b3f64c623a4ac9c8f30c0f51a37>::RTTI_Type_Descriptor;
}



/* Function: FUN_0040cb80 */

void __thiscall FUN_0040cb80(void *this,undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)((int)this + 4);
  pcVar2 = *(code **)(*(int *)*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_0041427c)
            ((int *)*param_1,-(uint)(iVar1 != 0) & iVar1 + 0x1cU,*(undefined4 *)((int)this + 8),
             *(undefined4 *)(iVar1 + 0x70));
  (*pcVar2)();
  return;
}



/* Function: FUN_0040cbc0 */

void __thiscall FUN_0040cbc0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_0040103c;
  uVar1 = *(undefined4 *)((int)this + 8);
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = uVar1;
  return;
}



/* Function: FUN_0040cbf0 */

void __thiscall FUN_0040cbf0(void *this,char param_1)

{
  if (param_1 != '\0') {
    FUN_0040f1dc(this);
  }
  return;
}



/* Function: FUN_0040cc10 */

TypeDescriptor * FUN_0040cc10(void)

{
  return &<lambda_59f8b161047826baee444f7ac9b6fce5>::RTTI_Type_Descriptor;
}



/* Function: FUN_0040cc20 */

void __thiscall FUN_0040cc20(void *this,undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)*param_1 + 0x14);
  (*(code *)PTR_guard_check_icall_0041427c)
            ((int *)*param_1,*(undefined4 *)(*(int *)((int)this + 4) + 0x34),
             *(undefined4 *)(*(int *)((int)this + 4) + 0x38));
  (*pcVar1)();
  return;
}



/* Function: FUN_0040cc50 */

void __thiscall FUN_0040cc50(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401054;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}



/* Function: FUN_0040cc70 */

TypeDescriptor * FUN_0040cc70(void)

{
  return &<lambda_c63bcffb4ba8ef399d9c6adb122abf89>::RTTI_Type_Descriptor;
}



/* Function: FUN_0040cc80 */

undefined4 __thiscall FUN_0040cc80(void *this,undefined4 *param_1)

{
  IUnknown_SetSite((IUnknown *)*param_1,
                   (IUnknown *)
                   (-(uint)(*(int *)((int)this + 4) != 0) & *(int *)((int)this + 4) + 8U));
  return 0;
}



/* Function: FUN_0040ccb0 */

void __thiscall FUN_0040ccb0(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0040106c;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}



/* Function: FUN_0040ccd0 */

void FUN_0040ccd0(int param_1)

{
  FUN_00409fd0(param_1 + -0xc);
  return;
}



/* Function: FUN_0040cce0 */

void FUN_0040cce0(int param_1)

{
  FUN_00409fb0(param_1 + -4);
  return;
}



/* Function: FUN_0040ccf0 */

void FUN_0040ccf0(int param_1)

{
  FUN_00409fb0(param_1 + -0x24);
  return;
}



/* Function: FUN_0040cd00 */

void FUN_0040cd00(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409f80(param_1 + -0x10,param_2,param_3);
  return;
}



/* Function: FUN_0040cd10 */

void FUN_0040cd10(int param_1)

{
  FUN_00409fd0(param_1 + -0x10);
  return;
}



/* Function: FUN_0040cd20 */

void FUN_0040cd20(int param_1)

{
  FUN_00409fb0(param_1 + -8);
  return;
}



/* Function: FUN_0040cd30 */

void __thiscall FUN_0040cd30(void *this,uint param_1)

{
  Concurrency::details::UMSFreeVirtualProcessorRoot::_scalar_deleting_destructor_
            ((UMSFreeVirtualProcessorRoot *)((int)this + -0x14),param_1);
  return;
}



/* Function: FUN_0040cd40 */

void FUN_0040cd40(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409f80(param_1 + -0x14,param_2,param_3);
  return;
}



/* Function: FUN_0040cd50 */

void FUN_0040cd50(int param_1)

{
  Release((int *)(param_1 + -8));
  return;
}



/* Function: FUN_0040cd60 */

void FUN_0040cd60(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004099e0(param_1 + -8,param_2,param_3);
  return;
}



/* Function: FUN_0040cd70 */

void FUN_0040cd70(int param_1)

{
  FUN_00409fd0(param_1 + -0x14);
  return;
}



/* Function: FUN_0040cd80 */

void FUN_0040cd80(int param_1)

{
  FUN_00409fb0(param_1 + -0xc);
  return;
}



/* Function: FUN_0040cd90 */

void FUN_0040cd90(int param_1)

{
  Release((int *)(param_1 + -0xc));
  return;
}



/* Function: FUN_0040cda0 */

void FUN_0040cda0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004099e0(param_1 + -0xc,param_2,param_3);
  return;
}



/* Function: FUN_0040cdb0 */

void FUN_0040cdb0(int param_1)

{
  FUN_00409fb0(param_1 + -0x10);
  return;
}



/* Function: FUN_0040cdc0 */

void FUN_0040cdc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409f80(param_1 + -0x1c,param_2,param_3);
  return;
}



/* Function: FUN_0040cdd0 */

void FUN_0040cdd0(int param_1)

{
  FUN_00409a10(param_1 + -8);
  return;
}



/* Function: FUN_0040cde0 */

void FUN_0040cde0(int param_1)

{
  Release((int *)(param_1 + -0x10));
  return;
}



/* Function: FUN_0040cdf0 */

void FUN_0040cdf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004099e0(param_1 + -0x10,param_2,param_3);
  return;
}



/* Function: FUN_0040ce00 */

void FUN_0040ce00(int param_1)

{
  FUN_00409fd0(param_1 + -0x1c);
  return;
}



/* Function: FUN_0040ce10 */

void FUN_0040ce10(int param_1)

{
  FUN_00409fb0(param_1 + -0x14);
  return;
}



/* Function: FUN_0040ce20 */

void FUN_0040ce20(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409f80(param_1 + -0x20,param_2,param_3);
  return;
}



/* Function: FUN_0040ce30 */

void FUN_0040ce30(int param_1)

{
  FUN_00409a10(param_1 + -0xc);
  return;
}



/* Function: FUN_0040ce40 */

void FUN_0040ce40(int param_1)

{
  FUN_00409fd0(param_1 + -0x20);
  return;
}



/* Function: FUN_0040ce50 */

void FUN_0040ce50(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409f80(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_0040ce60 */

void FUN_0040ce60(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409f80(param_1 + -0x24,param_2,param_3);
  return;
}



/* Function: FUN_0040ce70 */

void FUN_0040ce70(int param_1)

{
  FUN_00409a10(param_1 + -0x10);
  return;
}



/* Function: FUN_0040ce80 */

void FUN_0040ce80(int param_1)

{
  FUN_00409fd0(param_1 + -4);
  return;
}



/* Function: FUN_0040ce90 */

void FUN_0040ce90(int param_1)

{
  FUN_00409fd0(param_1 + -0x24);
  return;
}



/* Function: FUN_0040cea0 */

void FUN_0040cea0(int param_1)

{
  FUN_00409fb0(param_1 + -0x1c);
  return;
}



/* Function: FUN_0040ceb0 */

void FUN_0040ceb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409f80(param_1 + -8,param_2,param_3);
  return;
}



/* Function: FUN_0040cec0 */

void FUN_0040cec0(int param_1)

{
  FUN_00409fd0(param_1 + -8);
  return;
}



/* Function: FUN_0040ced0 */

void FUN_0040ced0(int param_1)

{
  FUN_00409fb0(param_1 + -0x20);
  return;
}



/* Function: FUN_0040cee0 */

void FUN_0040cee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00409f80(param_1 + -0xc,param_2,param_3);
  return;
}



/* Function: FUN_0040cef0 */

undefined4 * __fastcall FUN_0040cef0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* Function: FUN_0040cf10 */

exception * __thiscall FUN_0040cf10(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_0040cf33 */

void FUN_0040cf33(void)

{
  undefined4 local_10 [3];
  
  FUN_0040cef0(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00410fa8);
}



/* Function: FUN_0040cf58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cf58(void)

{
  if (DAT_00413000 == 0 && DAT_00413004 == 0) {
    return;
  }
  EventUnregister(_DAT_00413000);
  _DAT_00413000 = 0.0;
  return;
}



/* Function: FUN_0040cf90 */

void FUN_0040cf90(undefined4 param_1,int param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_9 != 0) {
    if (param_2 == 0) {
      *(undefined4 *)(param_9 + 0x24) = 0;
      *(undefined1 *)(param_9 + 0x28) = 0;
      *(undefined4 *)(param_9 + 0x10) = 0;
      *(undefined4 *)(param_9 + 0x14) = 0;
      *(undefined4 *)(param_9 + 0x18) = 0;
      *(undefined4 *)(param_9 + 0x1c) = 0;
      if (*(ushort *)(param_9 + 0x2a) != 0) {
        iVar5 = *(ushort *)(param_9 + 0x2a) - 1;
        memset(*(void **)(param_9 + 0x2c),0,((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4 + 4);
      }
    }
    else if (param_2 == 1) {
      uVar6 = 0;
      *(undefined1 *)(param_9 + 0x28) = param_3;
      *(undefined4 *)(param_9 + 0x10) = param_4;
      *(undefined4 *)(param_9 + 0x18) = param_6;
      *(undefined4 *)(param_9 + 0x14) = param_5;
      *(undefined4 *)(param_9 + 0x1c) = param_7;
      *(undefined4 *)(param_9 + 0x24) = 1;
      if (*(short *)(param_9 + 0x2a) != 0) {
        do {
          uVar4 = *(uint *)(*(int *)(param_9 + 0x30) + uVar6 * 8);
          uVar2 = *(uint *)(*(int *)(param_9 + 0x30) + 4 + uVar6 * 8);
          if (((*(byte *)(param_9 + 0x28) < *(byte *)(uVar6 + *(int *)(param_9 + 0x34))) &&
              (*(byte *)(param_9 + 0x28) != 0)) ||
             ((uVar4 != 0 || uVar2 != 0 &&
              ((((uVar4 & *(uint *)(param_9 + 0x10)) == 0 &&
                 (*(uint *)(param_9 + 0x14) & uVar2) == 0 ||
                ((*(uint *)(param_9 + 0x18) & uVar4) != *(uint *)(param_9 + 0x18))) ||
               ((*(uint *)(param_9 + 0x1c) & uVar2) != *(uint *)(param_9 + 0x1c))))))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          puVar1 = (uint *)(*(int *)(param_9 + 0x2c) + (uVar6 >> 5) * 4);
          uVar4 = *puVar1;
          if (bVar3) {
            uVar4 = uVar4 | 1 << (uVar6 & 0x1f);
          }
          else {
            uVar4 = uVar4 & ~(1 << (uVar6 & 0x1f));
          }
          *puVar1 = uVar4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ushort *)(param_9 + 0x2a));
      }
    }
  }
  return;
}



/* Function: FUN_0040d0a4 */

ULONG FUN_0040d0a4(void)

{
  ULONG UVar1;
  
  if (DAT_00413000 == 0 && DAT_00413004 == 0) {
    UVar1 = EventRegister((LPCGUID)&DAT_00401ba0,FUN_0040cf90,&DAT_00413000,
                          (PREGHANDLE)&DAT_00413000);
  }
  else {
    UVar1 = 0;
  }
  return UVar1;
}



/* Function: FUN_0040d0d5 */

void __fastcall FUN_0040d0d5(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00410186;
  local_10 = ExceptionList;
  uVar3 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    piVar1 = *(int **)*param_1;
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_0041427c)(piVar1,uVar3);
      (*pcVar2)();
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d139 */

void __thiscall FUN_0040d139(void *this,undefined4 param_1)

{
  HANDLE hObject;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  hObject = *this;
  if (hObject != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    CloseHandle(hObject);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040d171 */

uint __thiscall FUN_0040d171(void *this,void *param_1)

{
  code *pcVar1;
  uint uVar2;
  HANDLE pvVar3;
  int iVar4;
  int unaff_retaddr;
  int **local_1c;
  undefined1 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004102ef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (int *)0x0;
  local_1c = &local_14;
  local_18 = 1;
  uVar2 = Ordinal_167(this,&DAT_00401eb8,local_1c,DAT_00413240 ^ (uint)&stack0xfffffffc);
  if ((int)uVar2 < 0) {
    iVar4 = 0x1c1;
LAB_0040d1f7:
    FUN_00404bac(unaff_retaddr,iVar4,0x401ec8,uVar2);
  }
  else {
    if (local_14 == (int *)0x0) {
      pvVar3 = GetCurrentProcess();
      FUN_0040d139(param_1,pvVar3);
    }
    else {
      pcVar1 = *(code **)(*local_14 + 0xc);
      FUN_0040d139(param_1,0);
      (*(code *)PTR_guard_check_icall_0041427c)(local_14,0x1000,param_1);
      uVar2 = (*pcVar1)();
      if ((int)uVar2 < 0) {
        iVar4 = 0x1c4;
        goto LAB_0040d1f7;
      }
    }
    uVar2 = 0;
  }
  FUN_0040d0d5(&local_1c);
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_0040d23d */

void __fastcall FUN_0040d23d(int *param_1)

{
  if (*param_1 != 0) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0040d251 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_0040d251(undefined4 *param_1,void *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  
  *param_1 = 0;
  uVar2 = FUN_0040d171(param_2,param_1);
  if (-1 < (int)uVar2) {
    return param_1;
  }
  FUN_0040d88d(unaff_retaddr);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar1)(uVar2);
  return puVar3;
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
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1,DAT_00413240 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d2ee */

void __fastcall
FUN_0040d2ee(undefined4 param_1,PCEVENT_DESCRIPTOR param_2,undefined4 param_3,ULONG param_4,
            PEVENT_DATA_DESCRIPTOR param_5)

{
  ushort *puVar1;
  ULONG UVar2;
  uint uVar3;
  
  puVar1 = DAT_00413008;
  *(undefined4 *)((int)&param_5->Ptr + 4) = 0;
  if (puVar1 == (ushort *)0x0) {
    *(undefined4 *)&param_5->Ptr = 0;
    UVar2 = 0;
    uVar3 = 0;
  }
  else {
    *(ushort **)&param_5->Ptr = puVar1;
    uVar3 = (uint)*puVar1;
    UVar2 = 2;
  }
  param_5->Size = uVar3;
  param_5->Reserved = UVar2;
  EventWriteTransfer((REGHANDLE)CONCAT44(DAT_00413004,DAT_00413000),param_2,(LPCGUID)0x0,
                     (LPCGUID)0x0,param_4,param_5);
  return;
}



/* Function: FUN_0040d344 */

void FUN_0040d344(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  _EVENT_DATA_DESCRIPTOR local_38;
  wchar_t *local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  if (param_1 == (wchar_t *)0x0) {
    local_20 = 10;
  }
  else {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_20 = ((int)pwVar2 - (int)(param_1 + 1) >> 1) * 2 + 2;
  }
  local_24 = 0;
  local_28 = L"NULL";
  if (param_1 != (wchar_t *)0x0) {
    local_28 = param_1;
  }
  local_1c = 0;
  local_18 = &stack0x00000008;
  local_14 = 0;
  local_10 = 4;
  local_c = 0;
  FUN_0040d2ee(local_20,(PCEVENT_DESCRIPTOR)&DAT_00401bc0,local_20,3,&local_38);
  FUN_0040ef30(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040d3d1 */

DWORD FUN_0040d3d1(void)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  if (-1 < (int)uVar2) {
    uVar2 = 0x80004005;
  }
  return uVar2;
}



/* Function: FUN_0040d400 */

exception * __thiscall FUN_0040d400(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_0040d423 */

undefined4 * __fastcall FUN_0040d423(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* Function: FUN_0040d441 */

uint __fastcall FUN_0040d441(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_00413730;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00410028;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int)param_1 < 0) {
    if (param_1 == 0xc0000017) {
      uVar2 = 0x8007000e;
    }
    else {
      if (DAT_00413730 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0041427c)(param_1,DAT_00413240 ^ (uint)&stack0xfffffffc);
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



/* Function: FUN_0040d4d4 */

void __fastcall FUN_0040d4d4(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100d7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405d25(param_1,param_2,0x401e18,0,0,unaff_retaddr,param_4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d526 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0040d526(void *this)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  BOOL BVar5;
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
  char *local_1450;
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
  void *local_1420;
  char local_1415;
  WCHAR local_1414 [2048];
  undefined1 local_414 [1024];
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004106a8;
  local_10 = ExceptionList;
  uStack_14 = 0x40d543;
  uVar4 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1415 = DAT_00413708 != (code *)0x0;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_146c = *in_stack_00000014;
  local_1468 = in_stack_00000014[1];
  local_1448 = FUN_00403bd1(local_146c);
  local_1474 = 0;
  local_1470 = 0;
  if (*(int *)(extraout_EDX + 8) == 1) {
    local_1470 = 8;
  }
  LOCK();
  UNLOCK();
  local_1464 = DAT_0041374c + 1;
  local_1460 = 0;
  DAT_0041374c = DAT_0041374c + 1;
  local_145c = GetCurrentThreadId();
  pcVar2 = DAT_0041372c;
  local_1450 = "onecore\\internal\\sdk\\inc\\wil/Resource.h";
  local_144c = 0x1d9;
  local_1458 = 0;
  local_1454 = 0;
  local_1444 = 0;
  local_1434 = 0;
  uStack_1430 = 0;
  uStack_142c = 0;
  local_1440 = 0;
  uStack_143c = 0;
  uStack_1438 = 0;
  local_1420 = this;
  if (DAT_0041372c == (code *)0x0) {
    local_1428 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0041427c)(uVar4);
    local_1428 = (*pcVar2)();
  }
  pcVar2 = DAT_004136e0;
  if (DAT_004136e0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(&local_1474);
    (*pcVar2)();
  }
  pcVar2 = DAT_004136fc;
  if (DAT_004136fc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(&local_1474,local_414,0x400);
    (*pcVar2)();
  }
  pcVar2 = DAT_004136f8;
  if (DAT_004136f8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041427c)(&local_1474);
    (*pcVar2)();
  }
  pcVar2 = DAT_00413710;
  if (((DAT_00413710 != (code *)0x0) && (local_1415 == '\0')) && ((local_1470 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0041427c)(&local_1474);
    (*pcVar2)();
  }
  if (-1 < local_146c) {
    FUN_00404cc5();
  }
  pcVar2 = DAT_004136c8;
  if (DAT_004136d0 == '\0') {
    if (DAT_004136c8 == (code *)0x0) {
      BVar5 = IsDebuggerPresent();
      cVar3 = BVar5 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0041427c)();
      cVar3 = (*pcVar2)();
    }
    if (cVar3 != '\0') goto LAB_0040d713;
  }
  else {
LAB_0040d713:
    if ((local_1470 & 2) == 0) {
      bVar1 = true;
      goto LAB_0040d723;
    }
  }
  bVar1 = false;
LAB_0040d723:
  pcVar2 = DAT_004136d4;
  if ((local_1415 != '\0') || (bVar1)) {
    if ((DAT_004136d4 != (code *)0x0) && (DAT_004136e8 == '\0')) {
      (*(code *)PTR_guard_check_icall_0041427c)(&local_1474,local_1414,0x800);
      (*pcVar2)();
    }
    if (local_1414[0] == L'\0') {
      FUN_0040379c(local_1414,0x800,(int)&local_1474);
    }
    if (bVar1) {
      OutputDebugStringW(local_1414);
    }
  }
  else if ((DAT_004136d4 != (code *)0x0) && (DAT_004136e8 == '\0')) {
    (*(code *)PTR_guard_check_icall_0041427c)(&local_1474,0,0);
    (*pcVar2)();
  }
  pcVar2 = DAT_00413704;
  if ((((local_1470 & 4) != 0) || (DAT_004136d8 != '\0')) && (DAT_00413704 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*pcVar2)();
  }
  local_8 = 0xffffffff;
  if ((local_1470 & 1) == 0) goto LAB_0040d7f7;
  do {
    FUN_00404a57((int)&local_1474);
LAB_0040d7f7:
    pcVar2 = DAT_00413708;
    if (local_1415 != '\0') {
      (*(code *)PTR_guard_check_icall_0041427c)(&local_1474,local_1414);
      (*pcVar2)();
    }
    FUN_0040440d();
  } while( true );
}



/* Function: FUN_0040d836 */

void __fastcall FUN_0040d836(void *param_1)

{
  code *pcVar1;
  
  FUN_0040d526(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040d852 */

void __thiscall FUN_0040d852(void *this)

{
  code *pcVar1;
  uint *puVar2;
  void *in_stack_00000014;
  uint local_1c [3];
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  
  puVar2 = FUN_00403a34(in_stack_00000014,local_1c);
  local_10 = *puVar2;
  uStack_c = puVar2[1];
  uStack_8 = puVar2[2];
  FUN_0040d836(this);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040d88d */

void __fastcall FUN_0040d88d(void *param_1)

{
  code *pcVar1;
  
  FUN_0040d852(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040d8a7 */

void __fastcall FUN_0040d8a7(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004100fa;
  local_10 = ExceptionList;
  uVar2 = DAT_00413240 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00404b04(param_1,0x137b,0x401cfc,param_1,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2,param_1);
  return;
}



/* Function: FUN_0040d8ed */

undefined4 __thiscall FUN_0040d8ed(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = (undefined4)(ZEXT48(this) * 2);
  if ((int)(ZEXT48(this) * 2 >> 0x20) != 0) {
    uVar2 = 0x80070216;
    uVar1 = 0xffffffff;
  }
  *param_1 = uVar1;
  return uVar2;
}



/* Function: FUN_0040d921 */

undefined4 FUN_0040d921(SIZE_T param_1,undefined4 *param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  pvVar1 = CoTaskMemAlloc(param_1);
  uVar2 = 0x8007000e;
  *param_2 = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0040d94c */

undefined4 __fastcall FUN_0040d94c(short *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  if (param_2 != 0) {
    iVar2 = param_4 - (int)param_1;
    do {
      if ((param_5 == 0) || (sVar1 = *(short *)(iVar2 + (int)param_1), sVar1 == 0)) break;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      param_5 = param_5 + -1;
      iVar4 = iVar4 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar5 = 0x8007007a;
  if (param_2 != 0) {
    uVar5 = 0;
  }
  psVar3 = param_1 + -1;
  if (param_2 != 0) {
    psVar3 = param_1;
  }
  *psVar3 = 0;
  if (param_3 != (int *)0x0) {
    iVar2 = iVar4 + -1;
    if (param_2 != 0) {
      iVar2 = iVar4;
    }
    *param_3 = iVar2;
  }
  return uVar5;
}



/* Function: FUN_0040d9b3 */

int __fastcall FUN_0040d9b3(short *param_1,uint param_2,short *param_3,uint param_4)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  int local_8;
  
  if ((((param_1 == (short *)0x0) && (param_2 != 0)) || (0x7fffffff < param_2)) ||
     (0x7ffffffe < param_4)) {
    iVar1 = -0x7ff8ffa9;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    psVar2 = &DAT_004020e4;
    if (param_3 != (short *)0x0) {
      psVar2 = param_3;
    }
    uVar3 = 0;
    if (param_3 != (short *)0x0) {
      uVar3 = param_4;
    }
    if (param_2 == 0) {
      iVar1 = 0;
      if ((uVar3 != 0) && (*psVar2 != 0)) {
        iVar1 = -0x7ff8ff86;
        if (param_1 == (short *)0x0) {
          iVar1 = -0x7ff8ffa9;
        }
      }
    }
    else {
      local_8 = 0;
      iVar1 = FUN_0040d94c(param_1,param_2,&local_8,(int)psVar2,uVar3);
      if (((-1 < iVar1) && (1 < param_2 - local_8)) && (uVar3 = (param_2 - local_8) * 2, 2 < uVar3))
      {
        memset(param_1 + local_8 + 1,0,uVar3 - 2);
      }
    }
  }
  return iVar1;
}



/* Function: FUN_0040da6f */

int FUN_0040da6f(short *param_1,void *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  SIZE_T local_8;
  
  *param_4 = 0;
  if ((void *)((int)param_2 + 1) < param_2) {
    iVar1 = -0x7ff8fdea;
  }
  else {
    *param_4 = 0;
    iVar1 = FUN_0040d8ed((void *)((int)param_2 + 1),&local_8);
    if (-1 < iVar1) {
      iVar1 = FUN_0040d921(local_8,param_4);
      if (-1 < iVar1) {
        FUN_0040d9b3((short *)*param_4,(int)param_2 + 1,param_1,(uint)param_2);
      }
    }
  }
  return iVar1;
}



/* Function: FUN_0040dad2 */

void __fastcall FUN_0040dad2(short *param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_0040da6f(param_1,(void *)((int)psVar2 - (int)(param_1 + 1) >> 1),param_1,param_2);
  return;
}



/* Function: FUN_0040dafc */

uint __fastcall FUN_0040dafc(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10 [2];
  HANDLE local_8;
  
  uVar1 = FUN_0040db5e(param_1,&local_8);
  if (uVar1 == 0x80010117) {
    local_8 = GetCurrentProcess();
  }
  else if ((int)uVar1 < 0) {
    return uVar1;
  }
  iVar2 = Ordinal_2521(local_8,local_10);
  if (iVar2 == 0) {
    uVar1 = 0x80070006;
  }
  else {
    uVar1 = 0;
    *param_1 = local_10[0];
  }
  CloseHandle(local_8);
  return uVar1;
}



/* Function: FUN_0040db5e */

uint __fastcall FUN_0040db5e(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040db76(param_2);
  uVar2 = 0;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Function: FUN_0040db76 */

uint FUN_0040db76(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  HANDLE pvVar3;
  uint uVar4;
  int unaff_retaddr;
  int *local_8;
  
  uVar4 = 0;
  *param_1 = 0;
  local_8 = (int *)0x0;
  uVar2 = CoGetCallContext((IID *)&DAT_00401eb8,&local_8);
  if ((int)uVar2 < 0) {
    if (uVar2 == 0x80010117) {
      pvVar3 = GetCurrentProcess();
      *param_1 = pvVar3;
      goto LAB_0040dbe4;
    }
    FUN_00404bac(unaff_retaddr,0x58,0x4020f8,uVar2);
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0xc);
    (*(code *)PTR_guard_check_icall_0041427c)(local_8,0x1000,param_1);
    uVar2 = (*pcVar1)();
    if (-1 < (int)uVar2) goto LAB_0040dbe4;
  }
  uVar4 = uVar2;
LAB_0040dbe4:
  FUN_0040dbfb((int *)&local_8);
  return uVar4;
}



/* Function: FUN_0040dbfb */

void __fastcall FUN_0040dbfb(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_0040dc1d */

undefined4 __fastcall FUN_0040dc1d(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0040dc48 */

int __fastcall FUN_0040dc48(int *param_1)

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



/* Function: FUN_0040dc80 */

undefined4 FUN_0040dc80(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[3] = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}



/* Function: FUN_0040dcb0 */

undefined4 FUN_0040dcb0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}



/* Function: FUN_0040dcd0 */

undefined4 FUN_0040dcd0(void)

{
  return 0x80004001;
}



/* Function: FUN_0040dcde */

undefined4 __fastcall FUN_0040dcde(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  
  puVar3 = (undefined4 *)FUN_0040f228(0x24);
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = 0x8007000e;
  }
  else {
    piVar4 = FUN_0040e74d(puVar3);
    piVar4[4] = DAT_004018ac;
    piVar4[5] = DAT_004018b0;
    piVar4[6] = DAT_004018b4;
    piVar4[7] = DAT_004018b8;
    piVar4[8] = 0;
    FUN_0040dc48(piVar4 + 3);
    FUN_0040e400(piVar4);
    piVar1 = (int *)*param_1;
    uVar5 = 0x8007000e;
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 0x24);
      (*(code *)PTR_guard_check_icall_0041427c)(piVar1,L"HeterogeneousContextMenu",piVar4);
      uVar5 = (*pcVar2)();
    }
    if (piVar4 != (int *)0x0) {
      FUN_0040e400(piVar4);
    }
  }
  return uVar5;
}



/* Function: FUN_0040dd6a */

void __fastcall FUN_0040dd6a(undefined4 *param_1)

{
  memset(param_1,0,0x40);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *param_1 = 0x40;
  param_1[6] = 1;
  param_1[1] = 0x4000000;
  return;
}



/* Function: FUN_0040ddb9 */

void __fastcall FUN_0040ddb9(int param_1)

{
  CoTaskMemFree(*(LPVOID *)(param_1 + 0x8c));
  CoTaskMemFree(*(LPVOID *)(param_1 + 0x90));
  FUN_0040c687((int *)(param_1 + 0x80));
  FUN_0040c687((int *)(param_1 + 0x84));
  FUN_0040c687((int *)(param_1 + 0x88));
  return;
}



/* Function: FUN_0040ddfe */

void __thiscall FUN_0040ddfe(void *this,undefined4 *param_1)

{
  code *pcVar1;
  
  FUN_0040c687((int *)((int)this + 0x84));
  if (param_1 != (undefined4 *)0x0) {
    pcVar1 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_0041427c)(param_1,&DAT_004020e8,(int *)((int)this + 0x84));
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040de38 */

int __thiscall FUN_0040de38(void *this,int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  void **ppvOut;
  int *piVar4;
  int *local_14;
  int *local_10;
  int local_c;
  LPBC local_8;
  
  *param_1 = 0;
  if (*(int *)((int)this + 0x80) == 0) {
    return -0x7ff8fff2;
  }
  local_8 = (LPBC)0x0;
  local_14 = (int *)this;
  CreateBindCtx(0,&local_8);
  iVar3 = FUN_0040dcde((int *)&local_8);
  if (iVar3 < 0) goto LAB_0040df88;
  pcVar1 = *(code **)(**(int **)((int)this + 0x80) + 0xc);
  (*(code *)PTR_guard_check_icall_0041427c)
            (*(int **)((int)this + 0x80),local_8,&DAT_00401860,&DAT_00402194,param_1);
  iVar3 = (*pcVar1)();
  piVar4 = local_14;
  if ((iVar3 < 0) || (local_14[0x22] == 0)) goto LAB_0040df88;
  local_14 = (int *)0x0;
  ppvOut = (void **)FUN_0040e639((int *)&local_14);
  iVar3 = IUnknown_QueryService
                    ((IUnknown *)*param_1,(GUID *)&DAT_00401880,(IID *)&DAT_004021c4,ppvOut);
  if (iVar3 < 0) {
LAB_0040df67:
    piVar4 = (int *)*param_1;
    *param_1 = 0;
    if (piVar4 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar4 + 8);
      (*(code *)PTR_guard_check_icall_0041427c)(piVar4);
      (*pcVar1)();
    }
  }
  else {
    puVar2 = (undefined4 *)piVar4[0x22];
    local_10 = (int *)0x0;
    pcVar1 = *(code **)*puVar2;
    piVar4 = FUN_0040e639((int *)&local_10);
    (*(code *)PTR_guard_check_icall_0041427c)(puVar2,&DAT_004021c4,piVar4);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      local_c = 0;
      pcVar1 = *(code **)(*local_10 + 0x10);
      (*(code *)PTR_guard_check_icall_0041427c)(local_10,&local_c);
      iVar3 = (*pcVar1)();
      if (-1 < iVar3) {
        pcVar1 = *(code **)(*local_14 + 0xc);
        (*(code *)PTR_guard_check_icall_0041427c)(local_14,local_c);
        iVar3 = (*pcVar1)();
      }
      FUN_0040dbfb(&local_c);
    }
    FUN_0040dbfb((int *)&local_10);
    if (iVar3 < 0) goto LAB_0040df67;
  }
  FUN_0040dbfb((int *)&local_14);
LAB_0040df88:
  FUN_0040dbfb((int *)&local_8);
  return iVar3;
}



/* Function: FUN_0040df9f */

uint __fastcall FUN_0040df9f(LPWSTR param_1)

{
  _func_5021 *p_Var1;
  code *pcVar2;
  _func_5022 *p_Var3;
  _func_5023 *p_Var4;
  undefined4 *puVar5;
  LPWSTR pWVar6;
  uint uVar7;
  HRESULT HVar8;
  uint uVar9;
  UINT UVar10;
  int *piVar11;
  int *piVar12;
  void **ppvObject;
  int iVar13;
  int unaff_retaddr;
  IUnknown *This;
  int **ppiVar14;
  HMENU *ppvObject_00;
  IUnknown *pIVar15;
  IID *pIVar16;
  LPWSTR local_24;
  int *local_20;
  HMENU local_1c;
  int *local_18;
  int *local_14;
  LPWSTR local_10;
  IUnknown *local_c;
  IUnknown *local_8;
  
  local_24 = param_1;
  uVar7 = FUN_0040de38(param_1,(int *)&local_c);
  if (-1 < (int)uVar7) {
    local_1c = CreatePopupMenu();
    piVar11 = (int *)0x8007000e;
    if (local_1c == (HMENU)0x0) goto LAB_0040e17d;
    local_10 = (LPWSTR)0x0;
    if ((*(int *)(param_1 + 6) != 0) &&
       (HVar8 = SHStrDupA(*(LPCSTR *)(param_1 + 6),&local_10), -1 < HVar8)) {
      local_18 = (int *)0x0;
      p_Var1 = local_c->lpVtbl->QueryInterface;
      ppiVar14 = &local_18;
      pIVar16 = (IID *)&DAT_004021d4;
      pIVar15 = local_c;
      (*(code *)PTR_guard_check_icall_0041427c)();
      HVar8 = (*p_Var1)(pIVar15,pIVar16,ppiVar14);
      if (-1 < HVar8) {
        local_24 = local_10;
        iVar13 = *local_18;
        (*(code *)PTR_guard_check_icall_0041427c)(local_18,&local_24,1);
        (**(code **)(iVar13 + 0xc))();
      }
      FUN_0040dbfb((int *)&local_18);
    }
    local_8 = (IUnknown *)0x0;
    FUN_00405a6a((int *)&local_8);
    local_24 = *(LPWSTR *)(param_1 + 0x42);
    local_8 = (IUnknown *)0x0;
    FUN_0040e6c3((int *)&local_20,(int *)&local_24);
    if (local_20 == (int *)0x0) {
      local_14 = (int *)0x8007000e;
    }
    else {
      pcVar2 = *(code **)*local_20;
      (*(code *)PTR_guard_check_icall_0041427c)(local_20,&DAT_004020e8,&local_8);
      local_14 = (int *)(*pcVar2)();
    }
    piVar11 = local_14;
    FUN_0040dbfb((int *)&local_20);
    if (-1 < (int)piVar11) {
      IUnknown_SetSite(local_c,local_8);
      uVar7 = 2;
      if ((char)param_1[0x4a] != '\0') {
        uVar7 = 0;
      }
      uVar9 = 1;
      if (*(int *)(param_1 + 6) != 0) {
        uVar9 = 0x800;
      }
      ppvObject = (void **)(uVar7 | uVar9);
      pIVar16 = (IID *)0xff;
      pIVar15 = (IUnknown *)0x1;
      p_Var1 = local_c->lpVtbl[1].QueryInterface;
      (*(code *)PTR_guard_check_icall_0041427c)(local_c,local_1c,0);
      local_14 = (int *)(*p_Var1)(pIVar15,pIVar16,ppvObject);
      if (-1 < (int)local_14) {
        if (*(int *)(param_1 + 6) == 0) {
          UVar10 = GetMenuDefaultItem(local_1c,0,0);
          if (UVar10 != 0xffffffff) {
            *(UINT *)(param_1 + 6) = UVar10 - 1 & 0xffff;
          }
          if (*(int *)(param_1 + 6) != 0) goto LAB_0040e125;
          if (UVar10 == 0xffffffff) {
            local_14 = (int *)0x80004005;
            goto LAB_0040e152;
          }
        }
        else {
LAB_0040e125:
          if ((*(uint *)(param_1 + 6) & 0xffff0000) != 0) {
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x4000;
            *(LPWSTR *)(param_1 + 0x14) = local_10;
          }
        }
        p_Var3 = local_c->lpVtbl[1].AddRef;
        (*(code *)PTR_guard_check_icall_0041427c)(local_c);
        local_14 = (int *)(*p_Var3)((IUnknown *)param_1);
      }
LAB_0040e152:
      IUnknown_SetSite(local_c,(IUnknown *)0x0);
    }
    DestroyMenu(local_1c);
    FUN_00405784((int *)&local_8);
    pWVar6 = local_10;
    local_10 = (LPWSTR)0x0;
    CoTaskMemFree(pWVar6);
    piVar11 = local_14;
LAB_0040e17d:
    p_Var4 = local_c->lpVtbl->Release;
    (*(code *)PTR_guard_check_icall_0041427c)();
    (*p_Var4)(local_c);
    return (uint)piVar11;
  }
  if (uVar7 != 0x8007007f) {
    return uVar7;
  }
  local_10 = (LPWSTR)0x0;
  if (*(int *)(param_1 + 6) != 0) {
    SHStrDupA(*(LPCSTR *)(param_1 + 6),&local_10);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x44);
  local_14 = (int *)0x0;
  if (puVar5 == (undefined4 *)0x0) {
    piVar11 = *(int **)(param_1 + 0x40);
    pcVar2 = *(code **)(*piVar11 + 0xc);
    piVar12 = FUN_0040c548((int *)&local_14);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar11,0,&DAT_00401870,&DAT_004020b4,piVar12);
    uVar7 = (*pcVar2)();
    if ((int)uVar7 < 0) {
      iVar13 = 0x17e;
      goto LAB_0040e229;
    }
  }
  else {
    pcVar2 = *(code **)*puVar5;
    piVar11 = FUN_0040c548((int *)&local_14);
    (*(code *)PTR_guard_check_icall_0041427c)(puVar5,&DAT_004020b4,piVar11);
    uVar7 = (*pcVar2)();
    if ((int)uVar7 < 0) {
      iVar13 = 0x17a;
LAB_0040e229:
      FUN_00404bac(unaff_retaddr,iVar13,0x402160,uVar7);
      goto LAB_0040e3d9;
    }
  }
  piVar11 = local_14;
  local_8 = (IUnknown *)0x0;
  pcVar2 = *(code **)(*local_14 + 0x20);
  piVar12 = FUN_0040c548((int *)&local_8);
  (*(code *)PTR_guard_check_icall_0041427c)(piVar11,0x2200010,local_10,&DAT_00401fcc,piVar12);
  uVar7 = (*pcVar2)();
  if ((int)uVar7 < 0) {
    FUN_00404bac(unaff_retaddr,0x182,0x402160,uVar7);
  }
  else {
    IUnknown_SetSite(local_8,*(IUnknown **)(local_24 + 0x42));
    piVar11 = local_14;
    local_18 = (int *)0x0;
    pcVar2 = *(code **)(*local_14 + 0x20);
    FUN_00405a6a((int *)&local_18);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar11,0x220000e,local_10,&DAT_00401f10,&local_18);
    uVar7 = (*pcVar2)();
    if ((int)uVar7 < 0) {
      FUN_00404bac(unaff_retaddr,0x186,0x402160,uVar7);
    }
    else {
      local_20 = (int *)0x0;
      p_Var1 = local_8->lpVtbl->QueryInterface;
      ppiVar14 = &local_20;
      pIVar16 = (IID *)&DAT_00401fbc;
      pIVar15 = local_8;
      (*(code *)PTR_guard_check_icall_0041427c)();
      (*p_Var1)(pIVar15,pIVar16,ppiVar14);
      pcVar2 = *(code **)(*local_20 + 0xc);
      (*(code *)PTR_guard_check_icall_0041427c)(local_20,local_18);
      uVar7 = (*pcVar2)();
      if ((int)uVar7 < 0) {
        FUN_00404bac(unaff_retaddr,0x18c,0x402160,uVar7);
      }
      else {
        local_1c = (HMENU)0x0;
        p_Var1 = local_8->lpVtbl->QueryInterface;
        ppvObject_00 = &local_1c;
        pIVar16 = (IID *)&LAB_00401fec;
        pIVar15 = local_8;
        (*(code *)PTR_guard_check_icall_0041427c)();
        (*p_Var1)(pIVar15,pIVar16,ppvObject_00);
        pcVar2 = *(code **)(local_1c->unused + 0xc);
        (*(code *)PTR_guard_check_icall_0041427c)(local_1c,*(undefined4 *)(local_24 + 0x40));
        uVar7 = (*pcVar2)();
        if ((int)uVar7 < 0) {
          iVar13 = 0x193;
LAB_0040e3a7:
          FUN_00404bac(unaff_retaddr,iVar13,0x402160,uVar7);
        }
        else {
          This = (IUnknown *)0x40e389;
          CoAllowSetForegroundWindow(local_8,(LPVOID)0x0);
          p_Var1 = local_8->lpVtbl[3].QueryInterface;
          pIVar16 = (IID *)0x40e39a;
          pIVar15 = local_8;
          (*(code *)PTR_guard_check_icall_0041427c)();
          uVar7 = (*p_Var1)(This,pIVar16,&pIVar15->lpVtbl);
          if ((int)uVar7 < 0) {
            iVar13 = 0x19a;
            goto LAB_0040e3a7;
          }
          uVar7 = 0;
        }
        FUN_0040dbfb((int *)&local_1c);
      }
      FUN_0040dbfb((int *)&local_20);
    }
    FUN_00405784((int *)&local_18);
  }
  FUN_00405784((int *)&local_8);
LAB_0040e3d9:
  FUN_00405784((int *)&local_14);
  pWVar6 = local_10;
  local_10 = (LPWSTR)0x0;
  CoTaskMemFree(pWVar6);
  return uVar7;
}



/* Function: FUN_0040e400 */

int FUN_0040e400(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  piVar1 = param_1 + 3;
  do {
    iVar2 = *piVar1;
    if (iVar2 == 0x7fffffff) break;
    LOCK();
    iVar4 = *piVar1;
    if (iVar2 == iVar4) {
      *piVar1 = iVar2 + -1;
      iVar4 = iVar2;
    }
    UNLOCK();
  } while (iVar4 != iVar2);
  if (iVar2 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar3 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_0041427c)(1);
      (*pcVar3)();
    }
    if (DAT_00413828 != (int *)0x0) {
      pcVar3 = *(code **)(*DAT_00413828 + 8);
      (*(code *)PTR_guard_check_icall_0041427c)(DAT_00413828);
      (*pcVar3)();
    }
  }
  return iVar2 + -1;
}



/* Function: FUN_0040e470 */

void FUN_0040e470(int param_1)

{
  FUN_0040dc48((int *)(param_1 + 0xc));
  return;
}



/* Function: FUN_0040e490 */

undefined4 FUN_0040e490(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_0040dc1d(param_2,(int *)&DAT_004020e8);
  if (iVar1 == 0) {
    iVar1 = FUN_0040dc1d(extraout_ECX,(int *)&DAT_004021a4);
    if (iVar1 == 0) {
      iVar1 = FUN_0040dc1d(extraout_ECX_00,(int *)&DAT_004021e4);
      if (iVar1 == 0) {
        return 0x80004002;
      }
      param_1 = param_1 + 1;
    }
    *param_3 = (int)param_1;
    pcVar2 = *(code **)(*param_1 + 4);
  }
  else {
    *param_3 = (int)param_1;
    pcVar2 = *(code **)(*param_1 + 4);
  }
  (*(code *)PTR_guard_check_icall_0041427c)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_0040e510 */

int FUN_0040e510(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  piVar1 = param_1 + 2;
  do {
    iVar2 = *piVar1;
    if (iVar2 == 0x7fffffff) break;
    LOCK();
    iVar4 = *piVar1;
    if (iVar2 == iVar4) {
      *piVar1 = iVar2 + -1;
      iVar4 = iVar2;
    }
    UNLOCK();
  } while (iVar4 != iVar2);
  if (iVar2 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar3 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_0041427c)(1);
      (*pcVar3)();
    }
    if (DAT_00413828 != (int *)0x0) {
      pcVar3 = *(code **)(*DAT_00413828 + 8);
      (*(code *)PTR_guard_check_icall_0041427c)(DAT_00413828);
      (*pcVar3)();
    }
  }
  return iVar2 + -1;
}



/* Function: FUN_0040e580 */

void FUN_0040e580(int param_1)

{
  FUN_0040dc48((int *)(param_1 + 8));
  return;
}



/* Function: FUN_0040e5a0 */

undefined4 FUN_0040e5a0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_0040dc1d(param_2,(int *)&DAT_004020e8);
  if (iVar1 == 0) {
    iVar1 = FUN_0040dc1d(extraout_ECX,(int *)&DAT_00401f80);
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
  (*(code *)PTR_guard_check_icall_0041427c)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_0040e610 */

int __thiscall FUN_0040e610(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_0040e639 */

int * FUN_0040e639(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar1);
    (*pcVar2)();
  }
  return param_1;
}



/* Function: FUN_0040e670 */

void FUN_0040e670(int param_1,GUID *param_2,IID *param_3,void **param_4)

{
  int iVar1;
  
  iVar1 = 0;
  *param_4 = (void *)0x0;
  do {
    if (*(int *)(param_2->Data4 + iVar1 * 4 + -8) != (&DAT_004021b4)[iVar1]) {
      iVar1 = -0x7fffbfff;
      goto LAB_0040e6a1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  iVar1 = -0x7fffbffe;
LAB_0040e6a1:
  if (iVar1 == -0x7fffbfff) {
    IUnknown_QueryService(*(IUnknown **)(param_1 + 0x10),param_2,param_3,param_4);
  }
  return;
}



/* Function: FUN_0040e6c3 */

int * __fastcall FUN_0040e6c3(int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  *param_1 = 0;
  puVar4 = (undefined4 *)FUN_0040f228(0x14);
  piVar3 = DAT_00413828;
  if (puVar4 != (undefined4 *)0x0) {
    iVar1 = *param_2;
    puVar4[2] = 1;
    *puVar4 = &PTR_FUN_0040123c;
    if (piVar3 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar3 + 4);
      (*(code *)PTR_guard_check_icall_0041427c)(piVar3);
      (*pcVar2)();
    }
    *puVar4 = &PTR_FUN_00401214;
    puVar4[4] = iVar1;
    ~CComPtr<>(puVar4 + 4);
    piVar3 = (int *)*param_1;
    if (piVar3 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar3 + 8);
      (*(code *)PTR_guard_check_icall_0041427c)(piVar3);
      (*pcVar2)();
    }
    *param_1 = (int)puVar4;
  }
  return param_1;
}



/* Function: FUN_0040e74d */

undefined4 * __fastcall FUN_0040e74d(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_00413828;
  param_1[3] = 1;
  *param_1 = &PTR_FUN_00401228;
  param_1[1] = &PTR_FUN_00401250;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_0041427c)(piVar2);
    (*pcVar1)();
  }
  *param_1 = &PTR_FUN_00401264;
  param_1[1] = &PTR_FUN_00401278;
  return param_1;
}



/* Function: FUN_0040e7a0 */

int __thiscall FUN_0040e7a0(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 0xc) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_0040e7d0 */

int __thiscall FUN_0040e7d0(void *this,byte param_1)

{
  FUN_00405784((int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_0040e810 */

void FUN_0040e810(int param_1,int *param_2,int *param_3)

{
  FUN_0040e490((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0040e820 */

void FUN_0040e820(int param_1)

{
  FUN_0040e470(param_1 + -4);
  return;
}



/* Function: FUN_0040e830 */

void FUN_0040e830(int param_1)

{
  FUN_0040e400((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0040e840 */

undefined4 __fastcall FUN_0040e840(int param_1,uint *param_2,undefined1 *param_3)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = false;
  while( true ) {
    uVar2 = *param_2;
    sVar1 = *(short *)(param_1 + uVar2 * 2);
    if ((sVar1 != 0x20) && (sVar1 != 9)) break;
    bVar3 = true;
    if (uVar2 + 1 < uVar2) {
      *param_2 = 0xffffffff;
      return 0x80070216;
    }
    *param_2 = uVar2 + 1;
  }
  if (*(short *)(param_1 + uVar2 * 2) != 0) {
    *param_3 = 1;
    return 0;
  }
  if (!bVar3) {
    *param_3 = 0;
    return 0;
  }
  return 0x80070057;
}



/* Function: FUN_0040e8b7 */

uint __fastcall FUN_0040e8b7(int param_1,uint *param_2,uint *param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int local_10;
  bool local_6;
  
  uVar3 = 0;
  *param_3 = 0;
  bVar2 = false;
  do {
    local_10 = 1;
    local_6 = true;
    uVar6 = *param_2;
    sVar4 = *(short *)(param_1 + uVar6 * 2);
    if (bVar2) {
      if (sVar4 == 0) {
        return 0x80070057;
      }
      if (sVar4 == 0x22) {
        sVar1 = *(short *)(param_1 + 2 + uVar6 * 2);
        if (sVar1 == 0x22) {
          local_10 = 2;
        }
        else {
          bVar2 = false;
        }
        local_6 = sVar1 == 0x22;
      }
    }
    else {
      if (((sVar4 == 0) || (sVar4 == 9)) || (sVar4 == 0x20)) break;
      local_6 = sVar4 == 0x22;
      if (local_6) {
        bVar2 = true;
        sVar4 = *(short *)(param_1 + uVar6 * 2);
      }
      local_6 = !local_6;
    }
    if (local_6) {
      if (param_4 != 0) {
        *(short *)(param_4 + *param_3 * 2) = sVar4;
      }
      uVar6 = *param_3;
      uVar3 = uVar6 + 1;
      uVar5 = 0xffffffff;
      if (uVar3 >= uVar6) {
        uVar5 = uVar3;
      }
      *param_3 = uVar5;
      uVar3 = -(uint)(uVar3 < uVar6) & 0x80070216;
      uVar6 = *param_2;
    }
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar5 = local_10 + uVar6;
    uVar3 = 0xffffffff;
    if (uVar5 >= uVar6) {
      uVar3 = uVar5;
    }
    *param_2 = uVar3;
    uVar3 = -(uint)(uVar5 < uVar6) & 0x80070216;
  } while (uVar6 <= uVar5);
  if (-1 < (int)uVar3) {
    if (param_4 != 0) {
      *(undefined2 *)(param_4 + *param_3 * 2) = 0;
    }
    uVar6 = *param_3;
    uVar3 = uVar6 + 1;
    uVar5 = 0xffffffff;
    if (uVar3 >= uVar6) {
      uVar5 = uVar3;
    }
    *param_3 = uVar5;
    uVar3 = -(uint)(uVar3 < uVar6) & 0x80070216;
  }
  return uVar3;
}



/* Function: FUN_0040ea0d */

uint __thiscall FUN_0040ea0d(void *this,int *param_1,int *param_2,int param_3,uint *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint local_18;
  void *local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
                    /* WARNING: Load size is inaccurate */
  sVar1 = *this;
  if ((sVar1 == 0x20) || (sVar1 == 9)) {
    uVar2 = 0x80070057;
  }
  else {
    iVar3 = 0;
    local_5 = sVar1 != 0;
    local_10 = 0;
    local_c = 0;
    uVar2 = 0;
    local_14 = this;
    do {
      if (local_5 == '\0') {
        *param_2 = iVar3;
        *param_4 = local_c;
        return uVar2;
      }
      uVar2 = FUN_0040e8b7((int)local_14,&local_10,&local_18,param_3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (param_1 != (int *)0x0) {
        *param_1 = param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + local_18 * 2;
      }
      iVar3 = iVar3 + 1;
      if (local_18 + local_c < local_c) {
        return 0x80070216;
      }
      local_c = local_18 + local_c;
      uVar2 = FUN_0040e840((int)local_14,&local_10,&local_5);
    } while (-1 < (int)uVar2);
  }
  return uVar2;
}



/* Function: FUN_0040eacf */

uint __thiscall FUN_0040eacf(void *this,undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uBytes;
  int *hMem;
  uint local_c;
  uint local_8;
  
  *param_2 = 0;
  *param_1 = 0;
  local_8 = 0;
  local_c = 0;
  uVar1 = FUN_0040ea0d(this,(int *)0x0,(int *)&local_8,0,&local_c);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)((ulonglong)local_8 * 4);
    if ((((int)((ulonglong)local_8 * 4 >> 0x20) == 0) &&
        ((int)((ulonglong)local_c * 2 >> 0x20) == 0)) &&
       (uBytes = (int)((ulonglong)local_c * 2) + uVar1, uVar1 <= uBytes)) {
      hMem = (int *)LocalAlloc(0,uBytes);
      if (hMem == (int *)0x0) {
        uVar1 = 0x8007000e;
      }
      else {
        uVar1 = FUN_0040ea0d(this,hMem,(int *)&local_8,(int)hMem + uVar1,&local_c);
        if ((int)uVar1 < 0) {
          LocalFree(hMem);
        }
        else {
          *param_1 = hMem;
          *param_2 = local_8;
        }
      }
    }
    else {
      uVar1 = 0x80070216;
    }
  }
  return uVar1;
}



/* Function: FUN_0040eb92 */

void FUN_0040eb92(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_00402208,DelayLoadFailureHook_exref,param_2,DAT_00402208);
  return;
}



/* Function: DelayLoad_EventUnregister */

void DelayLoad_EventUnregister(void)

{
  FUN_0040ebce();
  return;
}



/* Function: FUN_0040ebce */

void FUN_0040ebce(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0040eb92(&ImgDelayDescr_00411064,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040ebdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_EventRegister */

void DelayLoad_EventRegister(void)

{
  FUN_0040ebce();
  return;
}



/* Function: DelayLoad_EventSetInformation */

void DelayLoad_EventSetInformation(void)

{
  FUN_0040ebce();
  return;
}



/* Function: DelayLoad_EventWriteTransfer */

void DelayLoad_EventWriteTransfer(void)

{
  FUN_0040ebce();
  return;
}



/* Function: DelayLoad_InstallApplication */

void DelayLoad_InstallApplication(void)

{
  FUN_0040ebce();
  return;
}



/* Function: HeapFree */

BOOL HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ec25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}



/* Function: FormatMessageW */

DWORD FormatMessageW(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,
                    LPWSTR lpBuffer,DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ec31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageW(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}



/* Function: HeapAlloc */

LPVOID HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ec3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}



/* Function: GetProcessHeap */

HANDLE GetProcessHeap(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ec49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetProcessHeap();
  return pvVar1;
}



/* Function: FUN_0040ec60 */

undefined4 FUN_0040ec60(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040ec85();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040ec91();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_0040ec85 */

undefined * FUN_0040ec85(void)

{
  return &DAT_00413348;
}



/* Function: FUN_0040ec91 */

undefined * FUN_0040ec91(void)

{
  return &DAT_00413350;
}



/* Function: FUN_0040eca0 */

undefined4 FUN_0040eca0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040ec85();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040ec91();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_0040ecd0 */

void FUN_0040ecd0(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(2);
  uVar3 = FUN_0040f376();
  o__set_fmode(uVar3);
  uVar3 = FUN_0040f36d();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_0040f62c();
    FUN_0040f1bf(FUN_0040f660);
    uVar3 = FUN_0040f363();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_0040f382();
      guard_check_icall();
      guard_check_icall();
      FUN_0040f39d();
      uVar3 = FUN_0040f36d();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_0040f394();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_0040f36d();
      iVar5 = thunk_FUN_0040f36d();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_0040f3ff();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040ed70 */

undefined4 FUN_0040ed70(void)

{
  FUN_0040f3c4();
  return 0;
}



/* Function: FUN_0040ed80 */

void FUN_0040ed80(void)

{
  undefined4 uVar1;
  
  FUN_0040f5a7();
  uVar1 = FUN_0040f36d();
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
  void *pvVar6;
  uint uVar7;
  uint unaff_ESI;
  undefined4 local_24;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_00413358 != 1) {
      if (DAT_00413358 == 0) {
        DAT_00413358 = 1;
        iVar4 = initterm_e(&DAT_00401534,&DAT_00401548);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_004014f8,&DAT_00401530);
        DAT_00413358 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_0040f3e7();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_0041427c)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_0040f3f3();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      FUN_0040f51c();
      pvVar6 = (void *)o__get_wide_winmain_command_line();
      unaff_ESI = FUN_0040af05(0x400000,0,pvVar6);
      uVar7 = FUN_0040f55f();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_0040ef05;
    }
  }
  FUN_0040f3ff();
LAB_0040ef05:
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



/* Function: FUN_0040ef30 */

void __fastcall FUN_0040ef30(int param_1)

{
  if (param_1 == DAT_00413240) {
    return;
  }
  FUN_0040f767();
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
      if (DAT_0041335c != 0) {
        uVar3 = DAT_0041335c;
        uVar1 = DAT_0041335c;
      }
      DAT_0041335c = uVar1;
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
    DAT_00413379 = 1;
  }
  FUN_0040f869();
  cVar1 = FUN_0040f394();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_0040f394();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_0040f394();
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
  
  if (DAT_00413378 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_0040f3ff();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_00413360 = 0xffffffff;
    _DAT_00413364 = 0xffffffff;
    _DAT_00413368 = 0xffffffff;
    _DAT_0041336c = 0xffffffff;
    _DAT_00413370 = 0xffffffff;
    _DAT_00413374 = 0xffffffff;
LAB_0040f080:
    DAT_00413378 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_00413360);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_0041336c);
      if (uVar3 == 0) goto LAB_0040f080;
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
  iVar1 = DAT_0041335c;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0041335c = 0;
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
  if ((DAT_00413379 == '\0') || (param_2 == '\0')) {
    FUN_0040f394();
    FUN_0040f394();
  }
  return 1;
}



/* Function: FUN_0040f189 */

undefined4 __cdecl FUN_0040f189(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_00413360 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_00413360,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_0040f1bf */

int __cdecl FUN_0040f1bf(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040f189(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_0040f1dc */

void __cdecl FUN_0040f1dc(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_0040f200 */

undefined4 * __thiscall FUN_0040f200(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040f228 */

void FUN_0040f228(uint param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004106ce;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  operator_new(param_1);
  FUN_0040f26a();
  return;
}



/* Function: Catch_All@0040f262 */

undefined * Catch_All_0040f262(void)

{
  return &DAT_0040f268;
}



/* Function: FUN_0040f26a */

void FUN_0040f26a(void)

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
    uStack_c = 0x40f2a1;
    pvVar2 = (void *)o_malloc();
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x40f294;
    iVar1 = o__callnewh();
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    pvVar2 = (void *)FUN_0040fa62();
    return pvVar2;
  }
  puStack_8 = &stack0xfffffffc;
  FUN_0040cef0(auStack_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_14,(ThrowInfo *)&DAT_00410fa8);
}



/* Function: FUN_0040f2bd */

uint FUN_0040f2bd(void)

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
  if ((DAT_00413240 == 0xbb40e64e) || ((DAT_00413240 & 0xffff0000) == 0)) {
    DAT_00413240 = FUN_0040f2bd();
    if (DAT_00413240 == 0xbb40e64e) {
      DAT_00413240 = 0xbb40e64f;
    }
    else if ((DAT_00413240 & 0xffff0000) == 0) {
      DAT_00413240 = DAT_00413240 | (DAT_00413240 | 0x4711) << 0x10;
    }
  }
  DAT_00413280 = ~DAT_00413240;
  return;
}



/* Function: FUN_0040f363 */

undefined4 FUN_0040f363(void)

{
  return 1;
}



/* Function: FUN_0040f36d */

undefined4 FUN_0040f36d(void)

{
  return 0;
}



/* Function: FUN_0040f376 */

undefined4 FUN_0040f376(void)

{
  return 0x4000;
}



/* Function: FUN_0040f382 */

void FUN_0040f382(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_00413380);
  return;
}



/* Function: FUN_0040f394 */

undefined1 FUN_0040f394(void)

{
  return 1;
}



/* Function: FUN_0040f39d */

void FUN_0040f39d(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_0040f3ff();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040f3c4 */

void FUN_0040f3c4(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040ec85();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040ec91();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_0040f3e7 */

undefined * FUN_0040f3e7(void)

{
  return &DAT_0041392c;
}



/* Function: FUN_0040f3f3 */

undefined * FUN_0040f3f3(void)

{
  return &DAT_00413928;
}



/* Function: FUN_0040f3ff */

void FUN_0040f3ff(void)

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
  FUN_0040f61e();
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
    FUN_0040f61e();
  }
  return;
}



/* Function: FUN_0040f51c */

WORD FUN_0040f51c(void)

{
  WORD WVar1;
  _STARTUPINFOW local_48;
  
  memset(&local_48,0,0x44);
  GetStartupInfoW(&local_48);
  WVar1 = 10;
  if (((byte)local_48.dwFlags & 1) != 0) {
    WVar1 = local_48.wShowWindow;
  }
  return WVar1;
}



/* Function: thunk_FUN_0040f36d */

undefined4 thunk_FUN_0040f36d(void)

{
  return 0;
}



/* Function: FUN_0040f55f */

uint FUN_0040f55f(void)

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



/* Function: FUN_0040f5a7 */

void FUN_0040f5a7(void)

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



/* Function: FUN_0040f61e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f61e(void)

{
  _DAT_00413388 = 0;
  return;
}



/* Function: FUN_0040f62c */

/* WARNING: Removing unreachable block (ram,0x0040f63e) */
/* WARNING: Removing unreachable block (ram,0x0040f63f) */
/* WARNING: Removing unreachable block (ram,0x0040f645) */
/* WARNING: Removing unreachable block (ram,0x0040f64f) */
/* WARNING: Removing unreachable block (ram,0x0040f656) */

void FUN_0040f62c(void)

{
  return;
}



/* Function: FUN_0040f660 */

/* WARNING: Removing unreachable block (ram,0x0040f672) */
/* WARNING: Removing unreachable block (ram,0x0040f673) */
/* WARNING: Removing unreachable block (ram,0x0040f679) */
/* WARNING: Removing unreachable block (ram,0x0040f683) */
/* WARNING: Removing unreachable block (ram,0x0040f68a) */

void FUN_0040f660(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00413240 ^ (uint)&param_2;
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
  
  iVar1 = FUN_0040fcd2(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_00413240,FUN_0040ef30,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040f737 */

void __cdecl FUN_0040f737(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0040f767 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f767(void)

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
  _DAT_00413488 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00413490 = (undefined4)uVar9;
  _DAT_004134a0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_004134a4 = &stack0x00000004;
  _DAT_004133e0 = 0x10001;
  _DAT_00413390 = 0xc0000409;
  _DAT_00413394 = 1;
  _DAT_004133a0 = 1;
  DAT_004133a4 = 2;
  _DAT_0041339c = unaff_retaddr;
  _DAT_0041346c = in_GS;
  _DAT_00413470 = in_FS;
  _DAT_00413474 = in_ES;
  _DAT_00413478 = in_DS;
  _DAT_0041347c = unaff_EDI;
  _DAT_00413480 = unaff_ESI;
  _DAT_00413484 = unaff_EBX;
  _DAT_0041348c = uVar3;
  _DAT_00413494 = unaff_EBP;
  DAT_00413498 = unaff_retaddr;
  _DAT_0041349c = in_CS;
  _DAT_004134a8 = in_SS;
  FUN_0040f737((_EXCEPTION_POINTERS *)&PTR_DAT_00401008);
  return;
}



/* Function: FUN_0040f869 */

/* WARNING: Removing unreachable block (ram,0x0040f8da) */
/* WARNING: Removing unreachable block (ram,0x0040f89e) */
/* WARNING: Removing unreachable block (ram,0x0040f952) */

undefined4 FUN_0040f869(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_004136ac = 0;
  DAT_00413284 = DAT_00413284 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00413284;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_004136b0 = DAT_004136b0 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_004136b0 = DAT_004136b0 | 2;
      }
    }
    DAT_004136ac = 1;
    uVar5 = DAT_00413284 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_00413284 | 6;
      DAT_004136ac = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_004136ac = 3;
        uVar5 = DAT_00413284 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_004136ac = 5;
          uVar5 = DAT_00413284 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_00413284 = DAT_00413284 | 0x6e;
            DAT_004136ac = 6;
            uVar5 = DAT_00413284;
          }
        }
      }
    }
  }
  DAT_00413284 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_00413288 != 0;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_0040fa62 */

void FUN_0040fa62(void)

{
  undefined4 local_10 [3];
  
  FUN_0040d423(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00410fd4);
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fa87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fa93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fa9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040faab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: Unwind@0040fad0 */

void Unwind_0040fad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040faf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_wide_winmain_command_line */

void __cdecl o__get_wide_winmain_command_line(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_wide_winmain_command_line();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040fc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0040fc38. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: FUN_0040fc44 */

int __cdecl
FUN_0040fc44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_0040ec85();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0040fc7e */

void __cdecl
FUN_0040fc7e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040fc44(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: DelayLoad_CoAllowSetForegroundWindow */

void DelayLoad_CoAllowSetForegroundWindow(void)

{
  FUN_0040fcab();
  return;
}



/* Function: FUN_0040fcab */

void FUN_0040fcab(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0040eb92(&ImgDelayDescr_00411084,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040fcba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_CreateBindCtx */

void DelayLoad_CreateBindCtx(void)

{
  FUN_0040fcab();
  return;
}



/* Function: FUN_0040fcd2 */

int __cdecl FUN_0040fcd2(int param_1)

{
  uint uVar1;
  
  if ((DAT_004136ac < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: Ordinal_6 */

void Ordinal_6(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fd51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_6();
  return;
}



/* Function: Ordinal_7 */

void Ordinal_7(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fd5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_7();
  return;
}



/* Function: Ordinal_201 */

void Ordinal_201(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040fd69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_201();
  return;
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



/* Function: FUN_0040fdd4 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040fdd4(void)

{
  uint unaff_EBP;
  
  FUN_0040ef30(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
  return;
}



/* Function: FUN_0040fde9 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040fde9(void)

{
  uint unaff_EBP;
  
  FUN_0040ef30(*(uint *)(unaff_EBP - 0x14) ^ unaff_EBP);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00413240 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00413240 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00413240 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00413240 ^ (uint)&param_1;
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
  *(uint *)((int)puVar2 + iVar1 + -0x1c) = DAT_00413240 ^ (uint)puVar2;
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



/* Function: memcmp */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ffb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ffbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ffc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@004101cc */

void Unwind_004101cc(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00410229 */

void Unwind_00410229(void)

{
  int unaff_EBP;
  
  FUN_0040c5ac(*(int *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* Function: Unwind@0041025c */

void Unwind_0041025c(void)

{
  int unaff_EBP;
  
  FUN_00407bb4(unaff_EBP + -0x106c);
  return;
}



/* Function: Unwind@0041029c */

void Unwind_0041029c(void)

{
  int unaff_EBP;
  
  FUN_00408138(unaff_EBP + -0x78);
  return;
}



/* Function: Unwind@0041039e */

void Unwind_0041039e(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x34));
  return;
}



/* Function: Unwind@004103d8 */

void Unwind_004103d8(void)

{
  int unaff_EBP;
  
  FUN_0040b2d7((int *)(unaff_EBP + -0xac));
  return;
}



/* Function: Unwind@004103e3 */

void Unwind_004103e3(void)

{
  int unaff_EBP;
  
  FUN_0040b2d7((int *)(unaff_EBP + -0xb0));
  return;
}



/* Function: Unwind@004103ee */

void Unwind_004103ee(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0xbc));
  return;
}



/* Function: Unwind@004103f9 */

void Unwind_004103f9(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0xb8));
  return;
}



/* Function: Unwind@00410404 */

void Unwind_00410404(void)

{
  int unaff_EBP;
  
  FUN_0040ddb9(unaff_EBP + -0xa8);
  return;
}



/* Function: Unwind@0041040f */

void Unwind_0041040f(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0xac));
  return;
}



/* Function: Unwind@0041041a */

void Unwind_0041041a(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0xb0));
  return;
}



/* Function: Unwind@00410425 */

void Unwind_00410425(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0xb8));
  return;
}



/* Function: Unwind@00410488 */

void Unwind_00410488(void)

{
  int unaff_EBP;
  
  FUN_0040aee8(unaff_EBP + -0x44);
  return;
}



/* Function: Unwind@004104c2 */

void Unwind_004104c2(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@004104ca */

void Unwind_004104ca(void)

{
  int unaff_EBP;
  
  FUN_0040b309((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@004104d2 */

void Unwind_004104d2(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004104da */

void Unwind_004104da(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004104e2 */

void Unwind_004104e2(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@004104ea */

void Unwind_004104ea(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004104f2 */

void Unwind_004104f2(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00410522 */

void Unwind_00410522(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0041052a */

void Unwind_0041052a(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0041055a */

void Unwind_0041055a(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00410562 */

void Unwind_00410562(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00410592 */

void Unwind_00410592(void)

{
  int unaff_EBP;
  
  FUN_0040b309((int *)(unaff_EBP + -0x38));
  return;
}



/* Function: Unwind@0041059a */

void Unwind_0041059a(void)

{
  int unaff_EBP;
  
  FUN_00405784((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@004105d4 */

void Unwind_004105d4(void)

{
  int unaff_EBP;
  
  Tidy((int *)(unaff_EBP + 8));
  return;
}



/* Function: Unwind@00410604 */

void Unwind_00410604(void)

{
  int unaff_EBP;
  
  FUN_0040d23d((int *)(unaff_EBP + -0x220));
  return;
}



/* Function: Unwind@00410667 */

void Unwind_00410667(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_0040d23d(*(int **)(unaff_EBP + -0x14));
    return;
  }
  return;
}



/* Function: FUN_00410700 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_00410700(void)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_00410140;
  if (DAT_00413064 != (int *)0x0) {
    puVar1 = (undefined1 *)FUN_004059db(DAT_00413064);
  }
  return puVar1;
}



/* Function: FUN_00410730 */

void FUN_00410730(void)

{
  FUN_004057df((int *)&DAT_00413298);
  return;
}



/* Function: FUN_00410740 */

void FUN_00410740(void)

{
  if (DAT_00413830 != (LPVOID)0x0) {
    CoTaskMemFree(DAT_00413830);
  }
  return;
}



/* Function: FUN_00410760 */

void FUN_00410760(void)

{
  FUN_0040b4ef(&DAT_00413834);
  return;
}



/* Function: FUN_00410770 */

void FUN_00410770(void)

{
  FUN_0040b42d(&DAT_004132c4);
  return;
}



