/* Function: FUN_004025e0 */

void FUN_004025e0(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_0040c1f0)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00402663 */

void FUN_00402663(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x5b9;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_004026f8 */

uint __thiscall FUN_004026f8(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_0040272f:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_0040272f;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_0040273b */

void __fastcall
FUN_0040273b(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  FUN_00402e5d(param_20,local_18);
  FUN_00402eab(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_00402e5d(param_17,local_48);
  FUN_00402eab(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00402eab(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00402e5d(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_00402eab(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_00402eab(param_8,local_d8);
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
  FUN_00402663(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x12,local_128);
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004028f6 */

void __fastcall
FUN_004028f6(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  FUN_00402eab(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_00402e5d(param_19,local_48);
  FUN_00402eab(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00402e5d(param_16,local_78);
  FUN_00402eab(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_00402eab(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_00402e5d(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_00402eab(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_00402eab(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00402663(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402ae9 */

void __fastcall
FUN_00402ae9(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  _EVENT_DATA_DESCRIPTOR local_98 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
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
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  local_18 = param_11;
  local_28 = param_10;
  local_38 = param_9;
  local_48 = param_8;
  local_58 = param_7;
  local_68 = param_6;
  local_78 = param_5;
  local_14 = 0;
  local_10 = 4;
  local_c = 0;
  local_24 = 0;
  local_20 = 4;
  local_1c = 0;
  local_34 = 0;
  local_30 = 1;
  local_2c = 0;
  local_44 = 0;
  local_40 = 2;
  local_3c = 0;
  local_54 = 0;
  local_50 = 4;
  local_4c = 0;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  local_74 = 0;
  local_70 = 4;
  local_6c = 0;
  FUN_00402663(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,9,local_98);
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402b9e */

void __fastcall
FUN_00402b9e(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  _EVENT_DATA_DESCRIPTOR local_a8 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
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
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  local_18 = param_12;
  local_28 = param_11;
  local_38 = param_10;
  local_48 = param_9;
  local_58 = param_8;
  local_68 = param_7;
  local_78 = param_6;
  local_88 = param_5;
  local_14 = 0;
  local_10 = 4;
  local_c = 0;
  local_24 = 0;
  local_20 = 1;
  local_1c = 0;
  local_34 = 0;
  local_30 = 4;
  local_2c = 0;
  local_44 = 0;
  local_40 = 1;
  local_3c = 0;
  local_54 = 0;
  local_50 = 2;
  local_4c = 0;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  local_74 = 0;
  local_70 = 4;
  local_6c = 0;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00402663(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,10,local_a8);
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402c66 */

void __fastcall
FUN_00402c66(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            void *param_10,undefined4 param_11,void *param_12,void *param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,void *param_18,void *param_19,
            undefined4 param_20,void *param_21,undefined4 param_22)

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
  undefined4 local_a8 [4];
  undefined4 local_98 [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  local_18 = param_22;
  local_10 = 4;
  FUN_00402eab(param_21,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_20;
  local_30 = 4;
  FUN_00402eab(param_19,local_48);
  FUN_00402eab(param_18,local_58);
  FUN_00402eab(param_17,local_68);
  FUN_00402eab(param_16,local_78);
  local_88 = param_15;
  local_84 = 0;
  local_80 = 2;
  local_7c = 0;
  FUN_00402eab(param_14,local_98);
  FUN_00402eab(param_13,local_a8);
  FUN_00402eab(param_12,local_b8);
  local_c8 = param_11;
  local_c4 = 0;
  local_c0 = 2;
  local_bc = 0;
  FUN_00402eab(param_10,local_d8);
  local_e8 = param_9;
  local_e4 = 0;
  local_f8 = param_8;
  local_108 = param_7;
  local_118 = param_6;
  local_128 = param_5;
  local_e0 = 4;
  local_dc = 0;
  local_f4 = 0;
  local_f0 = 2;
  local_ec = 0;
  local_104 = 0;
  local_100 = 4;
  local_fc = 0;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_124 = 0;
  local_120 = 4;
  local_11c = 0;
  FUN_00402663(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402e5d */

void __thiscall FUN_00402e5d(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)&DAT_00401508;
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



/* Function: FUN_00402eab */

void __thiscall FUN_00402eab(void *this,undefined4 *param_1)

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



/* Function: FUN_00402ef0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ef0(void)

{
  _DAT_0040b55c = FUN_004040d0;
  _DAT_0040b56c = FUN_004040e0;
  return;
}



/* Function: FUN_00402f10 */

void FUN_00402f10(void)

{
  FUN_00409a9c(FUN_0040ab70);
  return;
}



/* Function: FUN_00402f30 */

void FUN_00402f30(void)

{
  FUN_00409a9c(FUN_0040aba0);
  return;
}



/* Function: FUN_00402f50 */

void FUN_00402f50(void)

{
  DAT_0040b550 = FUN_00404ec0;
  DAT_0040b528 = &PTR_s_WilError_03_0040b050;
  DAT_0040b53c = &DAT_0040b158;
  return;
}



/* Function: FUN_00402f80 */

void FUN_00402f80(void)

{
  DAT_0040b574 = FUN_00403980;
  DAT_0040b558 = DebugBreak;
  DAT_0040b570 = FUN_004039c0;
  DAT_0040b548 = FUN_00404f90;
  DAT_0040b538 = FUN_004050c0;
  DAT_0040b578 = FUN_00404fe0;
  DAT_0040b554 = FUN_00405050;
  return;
}



/* Function: FUN_00402fd0 */

void FUN_00402fd0(void)

{
  FUN_00409a9c(FUN_0040abb0);
  return;
}



/* Function: FUN_00402ff0 */

void FUN_00402ff0(void)

{
  FUN_0040849f();
  FUN_00409a9c(FUN_0040abd0);
  return;
}



/* Function: FUN_00403010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403010(void)

{
  _DAT_0040b588 = FUN_00407450;
  _DAT_0040b59c = FUN_004074d0;
  _DAT_0040b618 = FUN_00407540;
  return;
}



/* Function: FUN_00403040 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403040(void)

{
  _DAT_0040b61c = FUN_00407660;
  return;
}



/* Function: FUN_00403051 */

undefined4 __fastcall FUN_00403051(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_004030d8 */

undefined4 __fastcall FUN_004030d8(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00403103 */

undefined4 __fastcall FUN_00403103(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00403169 */

undefined4 __fastcall FUN_00403169(short *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00403239(param_1,param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_0040319e */

undefined4 __thiscall FUN_0040319e(void *this,int param_1)

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
    uVar2 = FUN_00403239((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_004031f5 */

undefined4 __cdecl FUN_004031f5(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_0040328c((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_00403239 */

undefined4 __fastcall FUN_00403239(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_0040328c */

undefined4 __fastcall
FUN_0040328c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_0040a60e(param_1,uVar1,param_4,param_5);
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



/* Function: FUN_00403320 */

char * __fastcall FUN_00403320(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_00403340 */

undefined4 * __thiscall FUN_00403340(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_00409ab9(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403375 */

short * __thiscall FUN_00403375(void *this,short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_0040328c((int)param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_004033cc */

void __fastcall FUN_004033cc(short *param_1,int param_2,int param_3)

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
  
  pcVar3 = DAT_0040b530;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a825;
  local_10 = ExceptionList;
  local_14 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar3 != (code *)0x0) && (DAT_0040b540 != '\0')) {
      (*(code *)PTR_guard_check_icall_0040c1f0)(param_3,param_1,param_2,local_14);
      (*pcVar3)();
      if (*param_1 != 0) goto LAB_0040363b;
    }
    memset(local_214,0,0x200);
    pcVar3 = DAT_0040b548;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_0040b548 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040c1f0)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_00403375(pcVar3,param_1,psVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_218 = FUN_00403375(pcVar3,param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_00403375(pvVar4,local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar2 = FUN_00403375(local_214,local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar2 = FUN_00403375((void *)0x0,psVar2,psVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar2 = FUN_00403375(this,psVar2,psVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar2 = FUN_00403375(pvVar4,psVar2,psVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00403375(pvVar4,psVar2,psVar1,&DAT_0040165c);
        }
        else {
          FUN_00403375(pvVar4,psVar2,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_00403375(pvVar4,psVar2,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_0040363b:
  ExceptionList = local_10;
  FUN_004097b0(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403664 */

uint * __thiscall FUN_00403664(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00403a94((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00403688 */

LPVOID __fastcall FUN_00403688(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_0040a855;
  local_10 = ExceptionList;
  uVar2 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0040b50c == (FARPROC)0x0) {
    if (DAT_0040b5a4 != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0040b50c = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0040b5a4 = '\x01';
    if (DAT_0040b50c == (FARPROC)0x0) {
      DAT_0040b5a4 = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_0040b50c;
  (*(code *)PTR_guard_check_icall_0040c1f0)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00403738 */

undefined4 * __thiscall FUN_00403738(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_00403771((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00403771 */

void __fastcall FUN_00403771(undefined4 *param_1)

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



/* Function: FUN_004037a8 */

undefined4 __thiscall FUN_004037a8(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_00403771((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_004037f2;
    *piVar1 = 0;
    FUN_00403771((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_004037f2:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_00403801 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403801(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040b58c;
  _DAT_0040b590 = param_1;
  LOCK();
  DAT_0040b58c = DAT_0040b58c + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_0040381a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0040381a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040b5b0;
  _DAT_0040b51c = param_1;
  LOCK();
  DAT_0040b5b0 = DAT_0040b5b0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00403833 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403833(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040b60c;
  _DAT_0040b5ac = param_1;
  LOCK();
  DAT_0040b60c = DAT_0040b60c + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00403850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403850(undefined4 param_1)

{
  _DAT_0040b600 = param_1;
  return 1;
}



/* Function: FUN_0040386a */

void FUN_0040386a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0040b570;
  if (DAT_0040b570 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040389a */

void FUN_0040389a(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
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
      FUN_00403103(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403980 */

undefined * FUN_00403980(void)

{
  if (DAT_0040b594 == '\0') {
    FUN_0040389a((LPCWSTR)FUN_00403850,(uint *)0x0,&DAT_0040b5b8,0x40);
    DAT_0040b594 = '\x01';
  }
  return &DAT_0040b5b8;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x004039b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_004039c0 */

void FUN_004039c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00403a01 */

uint __fastcall FUN_00403a01(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_0040b578;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int)param_1 < 0) {
    if (param_1 == 0xc0000017) {
      uVar2 = 0x8007000e;
    }
    else {
      if (DAT_0040b578 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0040c1f0)(param_1,DAT_0040b100 ^ (uint)&stack0xfffffffc);
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



/* Function: FUN_00403a94 */

uint __fastcall FUN_00403a94(uint param_1)

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



/* Function: FUN_00403c69 */

DWORD __fastcall
FUN_00403c69(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004088b2(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_00403cd4 */

uint __fastcall
FUN_00403cd4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040a89b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004088b2(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_00403d55 */

void __fastcall FUN_00403d55(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00403cd4(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00403d72 */

char * __fastcall FUN_00403d72(char *param_1)

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



/* Function: FUN_00403d90 */

int __fastcall FUN_00403d90(short *param_1)

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



/* Function: FUN_00403db8 */

undefined1 FUN_00403db8(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_0040b554;
  if (DAT_0040b568 != '\0') {
    return 1;
  }
  if (DAT_0040b554 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00403de8 */

void __thiscall FUN_00403de8(void *this,undefined4 *param_1)

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
  iVar10 = FUN_00403d90((short *)param_1[0x12]);
  iVar1 = FUN_00403d90((short *)param_1[0xf]);
  iVar2 = FUN_00403d90((short *)param_1[5]);
  pcVar3 = FUN_00403d72((char *)param_1[0x11]);
  pcVar4 = FUN_00403d72((char *)param_1[0xe]);
  pcVar5 = FUN_00403d72((char *)param_1[0xc]);
  pcVar6 = FUN_00403d72((char *)param_1[9]);
  pcVar7 = FUN_00403d72((char *)param_1[8]);
  pcVar8 = FUN_00403d72((char *)param_1[7]);
  pcVar9 = FUN_00403d72((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_00403771(this_00);
    FUN_004037a8(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_004088f9(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_00408969(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_00408969(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_00408969(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_00408969(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_00408969(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_00408969(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_004088f9(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_00408969(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_004088f9(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_00403f7b */

undefined4 * __thiscall FUN_00403f7b(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401114;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_00403de8((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_00403fc0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00403fc0(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_004033cc(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_004037a8(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
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
  FUN_004040a0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00409ab9(this);
  }
  return this;
}



/* Function: FUN_004040a0 */

void __fastcall FUN_004040a0(undefined4 *param_1)

{
  FUN_00403771(param_1 + 0x1b);
  FUN_00403771(param_1 + 0x19);
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_004040d0 */

void FUN_004040d0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_004040e0 */

void FUN_004040e0(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_00403f7b(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_0040ae98);
}



/* Function: FUN_00404110 */

exception * __thiscall FUN_00404110(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401114;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_00403738((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_00403738((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00404166 */

void __fastcall
FUN_00404166(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
  puStack_c = &LAB_0040a8be;
  local_10 = ExceptionList;
  uVar3 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar4 = *param_8;
  param_15[2] = iVar4;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar4 = FUN_00403801(iVar4);
  }
  else if (param_7 == 1) {
    iVar4 = FUN_0040381a(iVar4);
  }
  else if (param_7 == 2) {
    if (-1 < iVar4) {
      iVar4 = -0x7ff8fd64;
      FUN_004088b2(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar5 = FUN_00403a94(0x8007029c);
      param_15[3] = uVar5;
    }
    iVar4 = FUN_00403833(iVar4);
  }
  else if (param_7 == 3) {
    iVar4 = FUN_00403850(iVar4);
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
  iVar6 = DAT_0040b598 + 1;
  DAT_0040b598 = DAT_0040b598 + 1;
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
  pcVar1 = DAT_0040b574;
  if (DAT_0040b574 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c1f0)(uVar3);
    iVar4 = (*pcVar1)();
  }
  pcVar1 = DAT_0040b538;
  param_15[0x13] = iVar4;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b550;
  if (DAT_0040b550 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b54c;
  if (DAT_0040b54c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b560;
  if ((DAT_0040b560 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_004046cf();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar3 = FUN_00403a94(0x8000ffff);
    param_15[3] = uVar3;
  }
  pcVar1 = DAT_0040b524;
  if (DAT_0040b52c == '\0') {
    if (DAT_0040b524 == (code *)0x0) {
      BVar8 = IsDebuggerPresent();
      cVar2 = BVar8 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c1f0)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040436e;
  }
  else {
LAB_0040436e:
    pcVar1 = DAT_0040b530;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_0040b530 != (code *)0x0) && (DAT_0040b540 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040c1f0)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_004033cc(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_004043d7;
    }
  }
  pcVar1 = DAT_0040b530;
  if ((DAT_0040b530 != (code *)0x0) && (DAT_0040b540 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(param_15,0,0);
    (*pcVar1)();
  }
LAB_004043d7:
  pcVar1 = DAT_0040b558;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_0040b534 != '\0')) &&
     (DAT_0040b558 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c1f0)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040441d */

void __fastcall FUN_0040441d(int param_1)

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
  
  pcVar1 = DAT_0040b57c;
  if (DAT_0040b57c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b564;
  if (DAT_0040b564 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_0040448a;
  uVar3 = 1;
  do {
    FUN_0040386a(uVar3);
    iVar2 = extraout_ECX;
LAB_0040448a:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_004044aa */

void __fastcall
FUN_004044aa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_004089f2(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_004044c8 */

void __fastcall
FUN_004044c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar2 = FUN_00403664((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_004044aa(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_0040450d */

void __fastcall FUN_0040450d(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00403c69(param_1,param_2,0x4016e0,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00403664(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_004044aa(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_0040456e */

void __fastcall FUN_0040456e(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a8e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408cd1(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004045bc */

void __fastcall FUN_004045bc(int param_1,int param_2,int param_3)

{
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a904;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408d14(param_1,param_2,param_3,param_1,param_1,unaff_retaddr);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404608 */

void __fastcall FUN_00404608(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a904;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040450d(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404644 */

void __fastcall FUN_00404644(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a8e1;
  local_10 = ExceptionList;
  uVar2 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004044c8(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2);
  return;
}



/* Function: FUN_00404689 */

void __fastcall FUN_00404689(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a904;
  local_10 = ExceptionList;
  uVar2 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004044c8(param_1,0x137b,"onecore\\internal\\sdk\\inc\\wil\\Staging.h",param_1,param_1,
               unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2,param_1);
  return;
}



/* Function: FUN_004046cf */

void FUN_004046cf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004046db */

void FUN_004046db(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00404608(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404708 */

void FUN_00404708(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00404608(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404733 */

void __fastcall FUN_00404733(int *param_1)

{
  if (*param_1 != 0) {
    Ordinal_6(*param_1);
  }
  return;
}



/* Function: FUN_00404747 */

uint __fastcall FUN_00404747(void *param_1,int *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  uVar1 = FUN_0040496e(param_1,local_c);
  if ((int)uVar1 < 0) {
    FUN_0040456e(unaff_retaddr,100,&DAT_004016dc,uVar1);
    FUN_0040456e(unaff_retaddr,0x6d,&DAT_004016dc,uVar1);
  }
  else {
    *param_2 = local_c[0] << 2;
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_004047a4 */

void __thiscall FUN_004047a4(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_004046cf();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00403239(local_214,0x104,this,param_1);
  FUN_0040319e(local_214,0x401718);
  uVar3 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar3 != 0) {
    uVar2 = uVar3;
  }
  uVar2 = FUN_0040805b(this,uVar3,uVar2,local_214);
  if ((int)uVar2 < 0) {
    FUN_0040456e(unaff_retaddr,0x88,&DAT_004016dc,uVar2);
  }
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040484b */

undefined4 __fastcall FUN_0040484b(HANDLE param_1,int *param_2)

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
    goto LAB_0040486e;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_0040486e:
        uVar2 = FUN_004045bc(unaff_retaddr,iVar4,0x4016dc);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00404940:
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
        goto LAB_0040486e;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_0040486e;
          }
          if (DVar1 == 0) goto LAB_00404940;
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
  FUN_0040456e(unaff_retaddr,uVar2,&DAT_004016dc,0x8000ffff);
  return 0x8000ffff;
}



/* Function: FUN_0040496e */

void __thiscall FUN_0040496e(void *this,int *param_1)

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
  
  local_c = DAT_0040b100 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00403239(local_218,0x104,this,(int)this);
  FUN_0040319e(local_218,0x401718);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_004045bc(unaff_retaddr,0xcd,0x4016dc);
    }
LAB_00404a1c:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00404a36;
  }
  else {
    iStack_220 = 0;
    uVar3 = FUN_0040484b(pvVar1,&iStack_220);
    if ((int)uVar3 < 0) {
      FUN_0040456e(unaff_retaddr,0xd3,&DAT_004016dc,uVar3);
      goto LAB_00404a1c;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_004046db(pvVar1);
LAB_00404a36:
  FUN_004097b0(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_00404a55 */

void __thiscall FUN_00404a55(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_00403d90(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_00403d72(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_00403d72(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00403688(8,(SIZE_T)pcVar4);
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
    FUN_00408969(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00408969(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_004088f9(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00404b48 */

void __fastcall FUN_00404b48(int param_1)

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



/* Function: FUN_00404bb7 */

void __thiscall FUN_00404bb7(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00403688(8,0xdc);
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
    FUN_00404a55(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00404c75 */

DWORD * __fastcall FUN_00404c75(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_0040b528;
  if (DAT_0040b528 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0040b528[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_004080e2(*DAT_0040b528,&local_8);
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



/* Function: FUN_00404cfe */

uint __fastcall FUN_00404cfe(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00404cfe(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0040b14c + 1;
        DAT_0040b14c = DAT_0040b14c + 1;
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
        pcVar5 = (char *)FUN_00403051(pcVar7,(uint)pcVar9,(void *)piVar2[1],(uint)pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00404dbd */

void __fastcall FUN_00404dbd(int param_1,char *param_2,int param_3)

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
  puStack_c = &LAB_0040a927;
  local_10 = ExceptionList;
  uVar3 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ppvVar5 = &local_10;
  ExceptionList = ppvVar5;
  *param_2 = '\0';
  iVar7 = DAT_0040b53c;
  local_11 = 0;
  if (DAT_0040b53c != 0) {
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
      uVar6 = FUN_00404cfe(param_1,*pDVar9,param_2,param_3);
      if ((char)uVar6 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar9;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_0040c1f0)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
      ppvVar5 = (void **)0x0;
    }
  }
  pcVar1 = DAT_0040b544;
  if (DAT_0040b544 != (code *)0x0) {
    uVar8 = (uint3)((uint)ppvVar5 >> 8);
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    (*(code *)PTR_guard_check_icall_0040c1f0)(iVar7,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404ec0 */

void FUN_00404ec0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00404dbd((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_0040b608 != DVar2) {
    LOCK();
    iVar1 = DAT_0040b610 + 1;
    UNLOCK();
    iVar3 = DAT_0040b610 + 1;
    DAT_0040b610 = iVar1;
    if (iVar3 < 4) {
      DAT_0040b608 = DVar2;
      this = FUN_00404c75(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00404bb7(this,param_1);
      }
      DAT_0040b608 = 0;
    }
    LOCK();
    DAT_0040b610 = DAT_0040b610 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00404f25 */

void __fastcall FUN_00404f25(LPCSTR param_1)

{
  if (DAT_0040b5a8 == (HMODULE)0x0) {
    DAT_0040b5a8 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_0040b5a8,param_1);
  return;
}



/* Function: FUN_00404f51 */

FARPROC __fastcall FUN_00404f51(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_0040b5f8 == (HMODULE)0x0) &&
     (DAT_0040b5f8 = GetModuleHandleW(L"kernelbase.dll"), DAT_0040b5f8 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_0040b5f8,param_1);
  return pFVar1;
}



/* Function: FUN_00404f90 */

void FUN_00404f90(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0040b5a8 == (HMODULE)0x0) {
    DAT_0040b5a8 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0040b5a8,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00404fe0 */

void FUN_00404fe0(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a904;
  local_10 = ExceptionList;
  uVar2 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_0040b514 == (code *)0x0) &&
     (DAT_0040b514 = (code *)FUN_00404f25("RtlNtStatusToDosErrorNoTeb"), DAT_0040b514 == (code *)0x0
     )) {
    ExceptionList = local_10;
    return;
  }
  pcVar1 = DAT_0040b514;
  (*(code *)PTR_guard_check_icall_0040c1f0)(param_1,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405050 */

undefined4 FUN_00405050(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a904;
  local_10 = ExceptionList;
  uVar2 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_0040b5fc == (code *)0x0) &&
     (DAT_0040b5fc = (code *)FUN_00404f25("RtlDllShutdownInProgress"), DAT_0040b5fc == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_0040b5fc;
  (*(code *)PTR_guard_check_icall_0040c1f0)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_004050c0 */

void FUN_004050c0(undefined1 *param_1)

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
  
  puStack_c = &LAB_0040a96d;
  local_10 = ExceptionList;
  uVar2 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_0040b580;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_0040b584 == (FARPROC)0x0) {
    DAT_0040b584 = FUN_00404f51("WilFailureNotifyWatchers");
    if (DAT_0040b584 == (FARPROC)0x0) goto LAB_0040515f;
  }
  pFVar1 = DAT_0040b584;
  (*(code *)PTR_guard_check_icall_0040c1f0)(0,&local_34,&local_18,uVar2);
  (*pFVar1)();
LAB_0040515f:
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



/* Function: FUN_004051a4 */

undefined4 * __fastcall FUN_004051a4(undefined4 *param_1)

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
  
  puStack_c = &LAB_0040a990;
  local_10 = ExceptionList;
  uVar5 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &PTR_o__purecall_004010dc;
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
      (*(code *)PTR_guard_check_icall_0040c1f0)(piVar3,uVar5);
      (*pcVar4)();
    }
    ppvObject = (void **)(param_1 + 3);
    riid = (IID *)&DAT_00401998;
    local_8 = CONCAT31(local_8._1_3_,1);
    (*(code *)PTR_guard_check_icall_0040c1f0)();
    (*p_Var2)(This,riid,ppvObject);
  }
  FUN_00407d6a((int *)&local_14);
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00405270 */

undefined4
FUN_00405270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    (*(code *)PTR_guard_check_icall_0040c1f0)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004052c0 */

undefined4
FUN_004052c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    (*(code *)PTR_guard_check_icall_0040c1f0)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00405310 */

undefined4
FUN_00405310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    (*(code *)PTR_guard_check_icall_0040c1f0)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00405360 */

undefined4 FUN_00405360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    (*(code *)PTR_guard_check_icall_0040c1f0)(piVar1,param_2,param_3,param_4);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004053a0 */

undefined4 FUN_004053a0(int param_1,undefined4 param_2)

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
    (*(code *)PTR_guard_check_icall_0040c1f0)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004053e0 */

undefined4 FUN_004053e0(int param_1,undefined4 param_2)

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
    (*(code *)PTR_guard_check_icall_0040c1f0)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_00405430 */

void __thiscall FUN_00405430(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_004054a0(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00405599(this,param_2);
    }
  }
  return;
}



/* Function: FUN_0040546d */

void __fastcall FUN_0040546d(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_00401090;
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



/* Function: FUN_004054a0 */

void __thiscall FUN_004054a0(void *this,undefined4 *param_1)

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
    uVar1 = FUN_004026f8(this_00,0,0x2000);
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
      FUN_0040273b((int)this_00,&DAT_00401cbe,0x1000000,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00405599 */

void __thiscall FUN_00405599(void *this,undefined4 *param_1)

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
    FUN_004028f6((int)*(uint **)((int)this + 4),&DAT_00401de1,param_1,param_1,&local_4c,&local_48,
                 &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                 &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
  }
  return;
}



/* Function: FUN_00405688 */

void __thiscall FUN_00405688(void *this,PVOID param_1)

{
  PREGHANDLE RegHandle;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  *(PVOID *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 1;
  iVar1 = *(int *)((int)param_1 + 4);
  local_18.Data1 = *(ulong *)(iVar1 + -0x10);
  local_18._4_4_ = *(undefined4 *)(iVar1 + -0xc);
  local_18.Data4._0_4_ = *(undefined4 *)(iVar1 + -8);
  local_18.Data4._4_4_ = *(undefined4 *)(iVar1 + -4);
  RegHandle = (PREGHANDLE)((int)param_1 + 0x18);
  if (*(int *)RegHandle != 0 || *(int *)((int)param_1 + 0x1c) != 0) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  UVar3 = EventRegister(&local_18,FUN_004025e0,param_1,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)param_1 + 0x1c),2,
                        *(undefined2 **)((int)param_1 + 4),**(undefined2 **)((int)param_1 + 4));
  }
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)((int)this + 0xc) = 1;
  pcVar2 = *(code **)(*this + 4);
  (*(code *)PTR_guard_check_icall_0040c1f0)();
  (*pcVar2)();
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405730 */

undefined4 __thiscall FUN_00405730(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_0040b150 != iVar1;
  iVar3 = DAT_0040b150;
  DAT_0040b150 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_0040c1f0)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00405770 */

undefined4 * __thiscall FUN_00405770(void *this,byte param_1)

{
  FUN_0040546d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00409ab9(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040579a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040579a(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b620,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_0040b620;
    local_8 = &DAT_0040b624;
    _DAT_0040b628 = 0;
    DAT_0040b62c = 0;
    _DAT_0040b630 = 0;
    _DAT_0040b624 = &PTR_FUN_00401080;
    _DAT_0040b634 = &DAT_0040b000;
    FUN_00409a9c(FUN_00405820);
    local_10 = 0;
    FUN_004082a1((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00405820 */

void FUN_00405820(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b620,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0040c1f0)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00405870 */

undefined4 * __thiscall FUN_00405870(void *this,byte param_1)

{
  FUN_0040546d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00409ab9(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040589a */

undefined4 FUN_0040589a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0040b5a0 == (code *)0x0) &&
     (DAT_0040b5a0 = (code *)FUN_00404f25("NtQueryWnfStateData"), DAT_0040b5a0 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040b5a0;
  (*(code *)PTR_guard_check_icall_0040c1f0)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_004058ee */

undefined4 __fastcall
FUN_004058ee(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0040b604 == (code *)0x0) &&
     (DAT_0040b604 = (code *)FUN_00404f25("NtUpdateWnfStateData"), DAT_0040b604 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040b604;
  (*(code *)PTR_guard_check_icall_0040c1f0)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00405947 */

undefined4 __fastcall FUN_00405947(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_0040b510 == (code *)0x0) &&
     (DAT_0040b510 = (code *)FUN_00404f25("RtlNotifyFeatureUsage"), DAT_0040b510 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040b510;
  (*(code *)PTR_guard_check_icall_0040c1f0)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_004059a9 */

void __fastcall FUN_004059a9(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_004059f5 */

undefined4 __thiscall FUN_004059f5(void *this,uint param_1)

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
    pvVar2 = FUN_00403688(0,SVar3);
    if (pvVar2 == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    uVar1 = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    FUN_00403051(pvVar2,SVar3,*this,uVar1);
    FUN_00407f93((void *)((int)this + 0xc),(int)pvVar2);
    *(LPVOID *)this = pvVar2;
    *(uint *)((int)this + 4) = uVar1 + (int)pvVar2;
    *(SIZE_T *)((int)this + 8) = (int)pvVar2 + SVar3;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_00405a80 */

undefined4 __thiscall FUN_00405a80(void *this,uint param_1)

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
    uVar2 = FUN_004059f5(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00405ab6 */

undefined4 __thiscall FUN_00405ab6(void *this,void *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00405a80(this,param_2);
  if ((char)uVar2 != '\0') {
    pvVar1 = *(void **)((int)this + 4);
    uVar2 = FUN_00403051(pvVar1,-(uint)(pvVar1 < *(void **)((int)this + 8)) &
                                *(int *)((int)this + 8) - (int)pvVar1,param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00405af7 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00405af7(int *param_1)

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
  
  local_c = DAT_0040b100 ^ (uint)&local_102c;
  iVar5 = 0;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar7 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_0040589a(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_00405c06;
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
LAB_00405c06:
            piVar4 = piVar4 + 3;
            iVar7 = local_1024;
          } while (piVar4 != local_101c);
        }
        iVar5 = FUN_004058ee(&DAT_004019f8,local_1010,uVar6,piVar2,piVar2,local_1018,1);
        param_1 = local_1028;
      }
      local_1024 = iVar7 + 1;
    } while (((iVar5 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_004097b0(local_c ^ (uint)&local_102c);
  return;
}



/* Function: FUN_00405c7c */

void FUN_00405c7c(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_0040b520 == (code *)0x0) &&
     (DAT_0040b520 = (code *)FUN_00404f25("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_0040b520 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_0040b520;
  (*(code *)PTR_guard_check_icall_0040c1f0)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405cba */

int __thiscall FUN_00405cba(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_00405ce7 */

void __thiscall FUN_00405ce7(void *this,int param_1)

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
    FUN_00403051(*(void **)((int)this + 0xc),uVar2,piVar1,uVar2);
  }
  return;
}



/* Function: FUN_00405d2d */

uint __fastcall FUN_00405d2d(ushort *param_1)

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



/* Function: FUN_00405d58 */

uint __thiscall FUN_00405d58(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_8;
  
  pvVar3 = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_00405def;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    FUN_00403051(pvVar3,2,&local_8,2);
    pvVar3 = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)pvVar3 + 4);
      if (param_2 < pvVar1) goto LAB_00405def;
      FUN_00403051(pvVar3,4,(void *)((int)this + 4),4);
      pvVar3 = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_00405def;
    FUN_00403051(pvVar3,(int)param_2 - (int)pvVar3,(void *)((int)this + 8),2);
    pvVar3 = pvVar1;
  }
  pvVar1 = (void *)((uint)*(ushort *)((int)this + 8) + (int)pvVar3);
  if (pvVar1 <= param_2) {
    FUN_00403051(pvVar3,(int)param_2 - (int)pvVar3,*(void **)((int)this + 0x10),
                 (uint)*(ushort *)((int)this + 8));
    iVar2 = (uint)*(ushort *)((int)this + 8) + (int)pvVar3;
    *param_1 = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
LAB_00405def:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_00405e1e */

uint __thiscall FUN_00405e1e(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_00405eac;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    FUN_00403051(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_00405eac;
      *(ushort **)((int)this + 0xc) = puVar2;
      local_8 = (ushort *)this;
      FUN_00403051((void *)((int)this + 4),4,puVar2,4);
      local_8 = puVar2 + 2;
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar2 = (ushort *)((int)this + 8);
  *puVar2 = *this;
  if (*this == 0) {
    puVar4 = local_8 + 1;
    if (param_2 < puVar4) goto LAB_00405eac;
    puVar3 = local_8;
    local_8 = puVar4;
    FUN_00403051(puVar2,2,puVar3,2);
  }
  puVar4 = (ushort *)((uint)*puVar2 + (int)local_8);
  if (puVar4 <= param_2) {
    *(ushort **)((int)this + 0x10) = local_8;
    *param_1 = (uint)puVar4;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
LAB_00405eac:
  return (uint)puVar4 & 0xffffff00;
}



/* Function: FUN_00405ec6 */

undefined2 * __thiscall
FUN_00405ec6(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_00405d2d(&local_18);
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



/* Function: FUN_00405f44 */

void __thiscall FUN_00405f44(void *this,int param_1)

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
  FUN_00407f93(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_00407f93((void *)(param_1 + 0x1c),local_8);
  FUN_00407fbd(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_00405fd0 */

void __thiscall FUN_00405fd0(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_00404689(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_00406073;
  }
  if (9 < param_2) {
    return;
  }
LAB_00406073:
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



/* Function: FUN_004060bb */

void FUN_004060bb(void)

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
      uVar5 = FUN_00405e1e((void *)(unaff_EBP + -0x44),(uint *)(unaff_EBP + -0x14),
                           *(ushort **)(extraout_ECX + 0x14));
      if ((char)uVar5 == '\0') {
        FUN_00408d69(*(int *)(unaff_EBX + 8));
LAB_004061ba:
        __EH_epilog3_align();
        return;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    } while (*(int *)(unaff_EBP + -0x40) == 0);
    do {
      uVar5 = FUN_00405e1e((void *)(unaff_EBP + -0x58),(uint *)(unaff_EBP + -0x14),
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
        FUN_004046cf();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = *(code **)(*piVar2 + 0x10);
      (*(code *)PTR_guard_check_icall_0040c1f0)
                (unaff_EBP + -0x2c,unaff_EBP + -0x28,unaff_EBP + -0x24,unaff_EBP + -0x20,
                 unaff_EBP + -0x1c);
      cVar4 = (*pcVar3)();
      if (cVar4 == '\0') {
        FUN_00408d69(*(int *)(unaff_EBX + 8));
        goto LAB_004061ba;
      }
      uVar5 = *(int *)(unaff_EBP + -0x18) + 1;
      *(uint *)(unaff_EBP + -0x18) = uVar5;
    } while (uVar5 < *(uint *)(unaff_EBP + -0x40));
  } while( true );
}



/* Function: FUN_004061da */

undefined4 __thiscall
FUN_004061da(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_004064e6(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_00405a80(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_00405fd0(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_00407f93((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_00407fbd(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_00405a80((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_004064e6(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00406292 */

uint __thiscall FUN_00406292(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_00405e1e(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_00405cba(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_0040631d */

uint __thiscall
FUN_0040631d(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_00405e1e(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_00405ce7(param_1,local_c);
          uVar1 = local_14;
          goto LAB_00406413;
        }
        local_14 = FUN_00405cba(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_00406413;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00405ce7(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_00406292(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_00405e1e(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_00405cba(&local_28,param_3,param_4);
LAB_00406413:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_00405ce7(&local_28,local_24 + param_5);
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



/* Function: FUN_00406453 */

uint __thiscall FUN_00406453(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_00405e1e(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_00405ce7(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00405ce7(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_004064e6 */

uint __thiscall
FUN_004064e6(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar2 = FUN_00405e1e(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar2 == '\0') break;
      iVar1 = FUN_00405cba(&local_24,param_1,param_2);
      if (iVar1 < 0) {
LAB_00406631:
        local_c = pvVar4;
        if ((char)uVar2 != '\0') goto LAB_0040656f;
        break;
      }
      if (iVar1 == 0) {
        pvVar4 = (void *)FUN_0040631d(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          local_5 = '\x01';
          goto LAB_00406631;
        }
        goto LAB_00406621;
      }
      pvVar4 = (void *)FUN_00406453(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_0040656f:
    pvVar4 = local_c;
    uVar2 = 0;
    if (local_5 == '\0') {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      uVar2 = FUN_00405d2d(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    local_10 = FUN_00405d2d(&local_38);
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
            goto LAB_0040665f;
          }
          puVar3 = (undefined4 *)o__errno();
          *puVar3 = 0x22;
        }
        o__invalid_parameter_noinfo();
      }
LAB_0040665f:
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + local_10);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_00405d58(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_00405ce7(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_00405d58(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_00406621:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_004066b7 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004066b7(uint param_1,int param_2,undefined2 *param_3)

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
  puStack_18 = &LAB_0040a9f6;
  local_1c = ExceptionList;
  local_24 = DAT_0040b100 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_104c = param_1 + param_2 * 8;
  local_1038 = 0;
  local_1044 = 0;
  local_1048 = param_3;
  local_1034 = param_1;
  while( true ) {
    FUN_00405ec6(local_107c,*local_1048,local_1048[1],*(undefined1 *)(local_1048 + 2),local_1048[3],
                 *(undefined1 *)(local_1048 + 4));
    local_14 = 0;
    local_1030 = 0x1000;
    uVar2 = FUN_0040589a(extraout_ECX,&local_103c,local_1028,&local_1030);
    FUN_00403a01(uVar2);
    if (uVar2 != 0) {
      local_103c = 0;
      local_1030 = 0;
    }
    FUN_00405fd0(local_107c,local_1028,local_1030,0x1000);
    if (local_105b != '\0') break;
    local_10bc = &local_1040;
    local_1040 = 0;
    puStack_10b8 = &local_1044;
    local_10c0 = &PTR_FUN_004010c8;
    puStack_10b4 = local_107c;
    local_1088 = &local_10c0;
    local_1058 = local_10bc;
    local_1054 = puStack_10b8;
    local_1050 = puStack_10b4;
    local_1029 = FUN_004060bb();
    uVar2 = local_1034;
    if (local_105c == '\0') {
LAB_0040688f:
      uVar2 = uVar2 + 8;
      local_1044 = local_1040;
      local_1034 = uVar2;
    }
    else {
      iVar3 = local_1068 - local_106c;
      iVar3 = FUN_004058ee(local_1034,local_106c,iVar3,iVar3,iVar3,local_103c,1);
      if (iVar3 != -0x3fffffff) {
        if (iVar3 != 0) {
          FUN_004058ee(uVar2,local_106c,local_1068 - local_106c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_0040688f;
      }
      local_1038 = local_1038 + 1;
      local_1029 = '\0';
    }
    uVar1 = local_1038;
    local_14 = 0xffffffff;
    FUN_00407fbd(&local_1060);
    if (((local_1029 != '\0') || (local_104c <= uVar2)) || (0x31 < uVar1)) goto LAB_004068e6;
  }
  FUN_00407fbd(&local_1060);
LAB_004068e6:
  ExceptionList = local_1c;
  FUN_004097b0(local_24 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_0040690c */

void __fastcall FUN_0040690c(int param_1)

{
  FUN_00407fbd((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_0040691a */

void * __fastcall FUN_0040691a(void *param_1)

{
  FUN_00405ec6(param_1,0,4,1,4,0);
  FUN_00405ec6((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_00405ec6((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_0040695c */

void __fastcall FUN_0040695c(undefined2 *param_1)

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
  
  local_c = DAT_0040b100 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_004019bc;
    local_3c = DAT_004019b8;
    local_30 = DAT_004019ac;
    local_34 = DAT_004019a8;
    local_28 = DAT_004019dc;
    local_2c = DAT_004019d8;
    FUN_004066b7((uint)&local_3c,3,param_1);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_004019f0;
    local_34 = DAT_00401950;
    local_38 = DAT_004019f4;
    local_2c = DAT_004019b0;
    local_30 = DAT_00401954;
    local_28 = DAT_004019b4;
    FUN_004066b7((uint)&local_3c,3,param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_004019d0;
    local_34 = DAT_00401948;
    local_38 = DAT_004019d4;
    local_2c = DAT_004019c0;
    local_30 = DAT_0040194c;
    local_24 = DAT_00401958;
    local_28 = DAT_004019c4;
    local_1c = DAT_00401980;
    local_20 = DAT_0040195c;
    local_14 = DAT_004019c8;
    local_18 = DAT_00401984;
    local_10 = DAT_004019cc;
    FUN_004066b7((uint)&local_3c,6,param_1 + 0x24);
  }
  FUN_004097b0(local_c ^ (uint)&local_3c);
  return;
}



/* Function: FUN_00406ab2 */

void __thiscall FUN_00406ab2(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_00405ab6(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_00406b29 */

void __thiscall FUN_00406b29(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_00406b88 */

void __thiscall FUN_00406b88(void *this,PSRWLOCK param_1)

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
  puStack_c = &LAB_0040a8be;
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
            goto LAB_00406c2c;
          }
        } while (uVar3 < uVar2);
      }
      local_20 = 0;
LAB_00406c2c:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_1c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0040c1f0)(local_20);
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



/* Function: FUN_00406c8a */

void __fastcall FUN_00406c8a(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00406ceb(param_1);
  FUN_00407fbd((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_00406e90((int)param_1 + 4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406ceb */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00406ceb(void *param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x406cf7;
  FUN_0040691a(local_7c);
  local_8 = 0;
  FUN_00406e43(param_1,local_7c);
  FUN_0040695c(local_7c);
  FUN_00406e90((int)local_7c);
  return;
}



/* Function: FUN_00406d2c */

undefined1 __thiscall FUN_00406d2c(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_00407f71((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_00407f4e((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_00406d85 */

undefined1 __thiscall FUN_00406d85(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_00406df0((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_00406d2c(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00406df0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00406df0(PSRWLOCK param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x406dfc;
  FUN_0040691a(local_7c);
  local_8 = 0;
  AcquireSRWLockExclusive(param_1);
  FUN_00406e43(param_1,local_7c);
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
  }
  FUN_0040695c(local_7c);
  FUN_00406e90((int)local_7c);
  return;
}



/* Function: FUN_00406e43 */

void __thiscall FUN_00406e43(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_00405f44(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_00405f44((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_00405f44((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_00406e90 */

void __fastcall FUN_00406e90(int param_1)

{
  FUN_00407fbd((int *)(param_1 + 100));
  FUN_00407fbd((int *)(param_1 + 0x40));
  FUN_00407fbd((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_00406eb4 */

void __fastcall FUN_00406eb4(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040aa56;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_00407fdf(this,0);
  FUN_00407fdf(param_1 + 0x1c,0);
  FUN_00407fbd((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0040741b(*(int *)(param_1 + 0x78));
  }
  FUN_00407fbd((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00405c7c(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_00407fbd((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004087bf(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*this != 0) {
    FUN_004087bf((PTP_TIMER)*this);
  }
  local_8 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_00408405(*(int **)(param_1 + 8));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00406f86 */

void __thiscall FUN_00406f86(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    bVar1 = FUN_004071b3((int)this);
    if (bVar1) {
      cVar2 = FUN_00406d85(*(void **)((int)this + 0xc),param_1,param_2,param_3);
      if (cVar2 != '\0') {
        cVar2 = FUN_00403db8();
        if (cVar2 == '\0') {
          SRWLock = (PSRWLOCK)((int)this + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          FUN_00407240(this);
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



/* Function: FUN_00407012 */

void __thiscall FUN_00407012(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_00403db8(), cVar1 == '\0')) &&
     (bVar2 = FUN_004071b3((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_00406ab2(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x4073d0,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_00406ab2((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_004070b2 */

void __fastcall FUN_004070b2(int param_1)

{
  char cVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040a904;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_00403db8();
  if (cVar1 == '\0') {
    bVar2 = FUN_004071b3(param_1);
    if (bVar2) {
      FUN_00406b88(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_00406df0(*(PSRWLOCK *)(param_1 + 0xc));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040711a */

void __thiscall FUN_0040711a(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3)

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
  puStack_c = &LAB_0040a927;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    cVar1 = FUN_00403db8();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 0x14);
      AcquireSRWLockExclusive(SRWLock);
      local_16 = 0;
      local_1c = param_1;
      local_18 = param_2;
      local_14 = param_3;
      FUN_00405ab6((void *)((int)this + 0x7c),&local_1c,0xc);
      FUN_004072a1(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004071b3 */

bool __fastcall FUN_004071b3(int param_1)

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
        iVar1 = FUN_004082d2(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_00407240 */

void __fastcall FUN_00407240(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00408d90,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00407fdf(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_004059a9(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_004072a1 */

void __fastcall FUN_004072a1(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00408dd0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00407fdf(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_004059a9(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_00407310 */

void FUN_00407310(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00406b88(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00407333 */

bool __fastcall FUN_00407333(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar3 = DAT_0040b518;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040aa79;
  local_10 = ExceptionList;
  uVar2 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(param_1 + 0x4c);
  iVar4 = 0;
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar3 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_00404f25("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_0040b518 = pcVar3, pcVar3 == (code *)0x0)) {
      iVar4 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c1f0)(FUN_00407310,param_1,0,piVar1,uVar2);
      iVar4 = (*pcVar3)();
    }
  }
  ExceptionList = local_10;
  return iVar4 == 0;
}



/* Function: FUN_004073d0 */

void FUN_004073d0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00406b88(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_004073f3 */

LPCRITICAL_SECTION __fastcall FUN_004073f3(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_0040741b */

void FUN_0040741b(int param_1)

{
  if ((param_1 != 0) && (DAT_0040b648 != (PSRWLOCK)0x0)) {
    FUN_00406b29(DAT_0040b648 + 0x1c,DAT_0040b648,param_1);
  }
  return;
}



/* Function: FUN_00407450 */

void FUN_00407450(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_004070b2(0x40b63c);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_00405947(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_00406f86(&DAT_0040b63c,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_0040711a(&DAT_0040b63c,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_004074d0 */

void FUN_004074d0(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_00407012(&DAT_0040b63c,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_0040b63c != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040b64c);
      bVar1 = FUN_00407333(0x40b63c);
      if (bVar1) {
        FUN_00406ab2(&DAT_0040b660,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040b64c);
    }
  }
  return;
}



/* Function: FUN_00407540 */

void FUN_00407540(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_0040b63c == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_0040b68c;
  }
  else {
    if (DAT_0040b63c == '\0') {
      return;
    }
    this = &DAT_0040b660;
  }
  FUN_00406b29(this,(PSRWLOCK)&DAT_0040b64c,param_1);
  return;
}



/* Function: FUN_00407584 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00407584(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b6c8,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_0040b6c8;
    local_8 = &DAT_0040b6cc;
    _DAT_0040b6d0 = 0;
    DAT_0040b6d4 = 0;
    _DAT_0040b6d8 = 0;
    _DAT_0040b6cc = &PTR_FUN_00401080;
    _DAT_0040b6dc = &DAT_0040b028;
    FUN_00409a9c(FUN_00407610);
    local_10 = 0;
    FUN_004082a1((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00407610 */

void FUN_00407610(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b6c8,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0040c1f0)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00407660 */

void FUN_00407660(uint param_1,ushort *param_2,undefined4 *param_3,int param_4,uint *param_5,
                 uint *param_6,undefined1 param_7,uint param_8)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined2 local_4e;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c [2];
  
  puVar2 = FUN_00407584();
  if ((*(int **)(puVar2 + 4) != (int *)0x0) && (**(int **)(puVar2 + 4) != 0)) {
    if (param_5 == (uint *)0x0) {
      if (param_6 == (uint *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          puVar2 = FUN_00407584();
          puVar1 = *(uint **)(puVar2 + 4);
          if (2 < *puVar1) {
            uVar3 = FUN_004026f8(puVar1,1,0);
            if ((char)uVar3 != '\0') {
              local_34 = param_3[0xb];
              local_38 = param_3[0xc];
              local_3c = param_3[5];
              local_40 = param_3[6];
              local_30 = param_3[7];
              local_2c = param_3[0xd];
              local_28 = param_3[10];
              local_4c = CONCAT22(local_4c._2_2_,*(undefined2 *)(param_3 + 8));
              local_24 = param_3[9];
              local_20 = param_3[3];
              local_1c = param_3[4];
              local_4e = *(undefined2 *)(param_3 + 1);
              local_18 = param_3[2];
              local_14 = *param_3;
              if (param_2 == (ushort *)0x0) {
                local_48 = CONCAT22(local_48._2_2_,0xffff);
                local_10 = 0xffffffff;
                local_44 = 0xffffffff;
              }
              else {
                local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
                local_44 = (uint)param_2[1];
                local_10 = (uint)*param_2;
              }
              local_c[0] = param_1;
              FUN_00402c66((int)puVar1,&DAT_00401f9f,param_2,param_2,local_c,&local_10,&local_44,
                           &local_48,&local_14,&local_18,&local_4e,&local_1c,&local_20,&local_24,
                           &local_4c,&local_28,&local_2c,&local_30,&local_40,&local_3c,&local_38,
                           &local_34);
            }
          }
        }
      }
      else {
        puVar2 = FUN_00407584();
        puVar1 = *(uint **)(puVar2 + 4);
        if (5 < *puVar1) {
          uVar3 = FUN_004026f8(puVar1,4,0);
          if ((char)uVar3 != '\0') {
            local_38 = param_8;
            local_4c = CONCAT31(local_4c._1_3_,param_4 != 0);
            local_4e = CONCAT11(local_4e._1_1_,param_7);
            local_3c = *param_6;
            if (param_2 == (ushort *)0x0) {
              local_48 = CONCAT22(local_48._2_2_,0xffff);
              local_40 = 0xffffffff;
              local_44 = 0xffffffff;
            }
            else {
              local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
              local_44 = (uint)param_2[1];
              local_40 = (uint)*param_2;
            }
            local_34 = param_1;
            FUN_00402b9e((int)puVar1,&DAT_00401f17,param_2,param_2,&local_34,&local_40,&local_44,
                         &local_48,&local_4c,&local_3c,&local_4e,&local_38);
          }
        }
      }
    }
    else {
      puVar2 = FUN_00407584();
      if (5 < **(uint **)(puVar2 + 4)) {
        uVar3 = FUN_004026f8(*(uint **)(puVar2 + 4),2,0);
        if ((char)uVar3 != '\0') {
          local_44 = param_8;
          local_40 = *param_5;
          local_4e = CONCAT11(local_4e._1_1_,param_4 != 0);
          if (param_2 == (ushort *)0x0) {
            local_4c = CONCAT22(local_4c._2_2_,0xffff);
            local_3c = 0xffffffff;
            local_48 = 0xffffffff;
          }
          else {
            local_4c = CONCAT22(local_4c._2_2_,(ushort)(byte)param_2[2]);
            local_48 = (uint)param_2[1];
            local_3c = (uint)*param_2;
          }
          local_38 = param_1;
          FUN_00402ae9(extraout_ECX,&DAT_00401c09,extraout_ECX,extraout_ECX,&local_38,&local_3c,
                       &local_48,&local_4c,&local_4e,&local_40,&local_44);
        }
      }
      if (((param_2 != (ushort *)0x0) && ((char)param_2[2] == '\x01')) && (param_4 != 0)) {
        puVar2 = FUN_00407584();
        if (5 < **(uint **)(puVar2 + 4)) {
          uVar3 = FUN_004026f8(*(uint **)(puVar2 + 4),10,0);
          if ((char)uVar3 != '\0') {
            local_38 = param_8;
            local_3c = *param_5;
            local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
            local_40 = (uint)param_2[1];
            local_44 = (uint)*param_2;
            local_4c = param_1;
            local_4e = CONCAT11(local_4e._1_1_,1);
            FUN_00402ae9(extraout_ECX_00,&DAT_004020bf,extraout_ECX_00,extraout_ECX_00,&local_4c,
                         &local_44,&local_40,&local_48,&local_4e,&local_3c,&local_38);
          }
        }
      }
    }
  }
  return;
}



/* Function: FUN_004079e0 */

int FUN_004079e0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  *param_4 = 0;
  do {
    if (*(int *)(param_2 + iVar1 * 4) != (&DAT_004014f4)[iVar1]) {
      return -0x7fffbfff;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  iVar1 = FUN_00407e80(param_1,param_3,param_4);
  return iVar1;
}



/* Function: FUN_00407a30 */

undefined4 FUN_00407a30(void)

{
  return 0;
}



/* Function: FUN_00407a40 */

undefined4 FUN_00407a40(void)

{
  return 0x800704c7;
}



/* Function: FUN_00407a4e */

undefined4 FUN_00407a4e(void)

{
  undefined4 *puVar1;
  HINSTANCE pHVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int unaff_retaddr;
  SHELLEXECUTEINFOW local_40;
  
  puVar1 = (undefined4 *)FUN_004097c4(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    pHVar2 = (HINSTANCE)0x0;
LAB_00407ad5:
    uVar6 = 0x8007000e;
    FUN_0040456e(unaff_retaddr,0x31,
                 "shell\\twinui\\associationlaunch\\launchwinapp\\launchwinapp.cpp",0x8007000e);
  }
  else {
    puVar5 = puVar1;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    pHVar2 = (HINSTANCE)FUN_00408ead(puVar1);
    if (pHVar2 == (HINSTANCE)0x0) goto LAB_00407ad5;
    uVar6 = 0;
    local_40.cbSize = 0x3c;
    memset(&local_40.fMask,0,0x38);
    local_40.fMask = 0x8000100;
    local_40.nShow = 1;
    local_40.hInstApp = pHVar2;
    BVar3 = ShellExecuteExW(&local_40);
    if (BVar3 != 0) goto LAB_00407aef;
    uVar6 = FUN_004045bc(unaff_retaddr,0x39,0x401864);
  }
  if (pHVar2 == (HINSTANCE)0x0) {
    return uVar6;
  }
LAB_00407aef:
  FUN_00407dd0(&pHVar2->unused);
  return uVar6;
}



/* Function: FUN_00407b02 */

bool __fastcall FUN_00407b02(short *param_1)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 local_28 [20];
  DWORD local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  
  *param_1 = 0;
  puVar6 = local_c;
  uVar5 = 0x18;
  puVar4 = local_28;
  uVar3 = 0;
  pvVar1 = GetCurrentProcess();
  iVar2 = NtQueryInformationProcess(pvVar1,uVar3,puVar4,uVar5,puVar6);
  if (((iVar2 == 0) && (pvVar1 = OpenProcess(0x410,0,local_14), pvVar1 != (HANDLE)0x0)) &&
     (pvVar1 != (HANDLE)0xffffffff)) {
    iVar2 = K32EnumProcessModulesEx(pvVar1,&local_8,4,local_10,3);
    if (iVar2 != 0) {
      K32GetModuleFileNameExW(pvVar1,local_8,param_1,0x104);
    }
    CloseHandle(pvVar1);
  }
  return *param_1 != 0;
}



/* Function: FUN_00407b8b */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Enum "__MIDL_IUri_0001": Some values do not have unique names */

bool __fastcall FUN_00407b8b(LPCWSTR param_1,short *param_2)

{
  short sVar1;
  _func_7837 *p_Var2;
  BSTR pOVar3;
  HRESULT HVar4;
  DWORD dwErrCode;
  LPWSTR pWVar5;
  IUri *This;
  BSTR *pbstrSchemeName;
  IUri *local_18;
  BSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  *param_2 = 0;
  local_18 = (IUri *)0x0;
  local_14[0] = (LPWSTR)0x0;
  local_8 = 1;
  HVar4 = CreateUri(param_1,0,0,&local_18);
  pOVar3 = local_14[0];
  This = local_18;
  if (-1 < HVar4) {
    p_Var2 = local_18->lpVtbl->GetSchemeName;
    if (local_14[0] != (LPWSTR)0x0) {
      dwErrCode = GetLastError();
      Ordinal_6(pOVar3);
      SetLastError(dwErrCode);
    }
    local_14[0] = (LPWSTR)0x0;
    pbstrSchemeName = local_14;
    (*(code *)PTR_guard_check_icall_0040c1f0)();
    HVar4 = (*p_Var2)(This,pbstrSchemeName);
    pWVar5 = local_14[0];
    if (-1 < HVar4) goto LAB_00407c1a;
  }
  pWVar5 = PathFindExtensionW(param_1);
LAB_00407c1a:
  FUN_00403169(param_2,0x40,(int)pWVar5);
  sVar1 = *param_2;
  if (local_14[0] != (LPWSTR)0x0) {
    Ordinal_6(local_14[0]);
  }
  FUN_00407d6a((int *)&local_18);
  return sVar1 != 0;
}



/* Function: FUN_00407c52 */

void FUN_00407c52(void)

{
  bool bVar1;
  uint uVar2;
  LPWSTR lpCmdLine;
  LPWSTR *hMem;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 unaff_retaddr;
  undefined4 uVar3;
  int *pNumArgs;
  int local_294;
  short local_290 [260];
  short local_88 [64];
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  uVar2 = RoInitialize(0);
  if ((int)uVar2 < 0) {
    FUN_0040456e(unaff_retaddr,0x77,
                 "shell\\twinui\\associationlaunch\\launchwinapp\\launchwinapp.cpp",uVar2);
    goto LAB_00407d53;
  }
  pNumArgs = &local_294;
  lpCmdLine = GetCommandLineW();
  hMem = CommandLineToArgvW(lpCmdLine,pNumArgs);
  if (hMem == (LPWSTR *)0x0) {
    uVar2 = 0x8007000e;
    uVar3 = 0x7b;
LAB_00407ccc:
    FUN_0040456e(unaff_retaddr,uVar3,
                 "shell\\twinui\\associationlaunch\\launchwinapp\\launchwinapp.cpp",uVar2);
    if (hMem != (LPWSTR *)0x0) goto LAB_00407d45;
  }
  else {
    if (local_294 < 2) {
      uVar2 = 0x80070057;
      uVar3 = 0x7c;
      goto LAB_00407ccc;
    }
    bVar1 = FUN_00407b02(local_290);
    if (!bVar1) {
      FUN_00403239(local_290,0x104,extraout_ECX,0x4018a4);
    }
    bVar1 = FUN_00407b8b(hMem[1],local_88);
    if (!bVar1) {
      FUN_00403239(local_88,0x40,extraout_ECX_00,0x4018d8);
    }
    FUN_00408e1f(local_290,local_88);
    FUN_00407a4e();
LAB_00407d45:
    LocalFree(hMem);
  }
  RoUninitialize();
LAB_00407d53:
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00407d6a */

void __fastcall FUN_00407d6a(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040aad4;
  local_10 = ExceptionList;
  uVar3 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040c1f0)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407dd0 */

int FUN_00407dd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  piVar1 = param_1 + 7;
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
      (*(code *)PTR_guard_check_icall_0040c1f0)(1);
      (*pcVar3)();
    }
    if (DAT_0040b614 != (int *)0x0) {
      pcVar3 = *(code **)(*DAT_0040b614 + 8);
      (*(code *)PTR_guard_check_icall_0040c1f0)(DAT_0040b614);
      (*pcVar3)();
    }
  }
  return iVar2 + -1;
}



/* Function: FUN_00407e40 */

int FUN_00407e40(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x1c);
  do {
    iVar1 = *piVar3;
    if (iVar1 == 0x7fffffff) {
      return 0x7fffffff;
    }
    LOCK();
    iVar2 = *piVar3;
    if (iVar1 == iVar2) {
      *piVar3 = iVar1 + 1;
      iVar2 = iVar1;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
  return iVar1 + 1;
}



/* Function: FUN_00407e80 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_00407e80(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
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
  iVar2 = FUN_004030d8(param_2,(int *)&DAT_00401988);
  if (iVar2 == 0) {
    iVar5 = FUN_00408f84(param_1,extraout_ECX,param_3);
    if (iVar5 < 0) goto LAB_00407ed4;
    iVar2 = *(int *)*param_3;
  }
  else {
    *param_3 = (int)param_1;
    iVar2 = *param_1;
  }
  pcVar1 = *(code **)(iVar2 + 4);
  puVar3 = &stack0xffffffd8;
  (*(code *)PTR_guard_check_icall_0040c1f0)();
  puVar4 = puVar3 + -4;
  *(undefined4 *)(puVar3 + -4) = 0x407ed4;
  (*pcVar1)();
LAB_00407ed4:
  *(undefined4 *)(puVar4 + -4) = 0x407edb;
  return iVar5;
}



/* Function: FUN_00407ee9 */

void __fastcall FUN_00407ee9(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040aad4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_00403db8();
  if (cVar1 == '\0') {
    FUN_00406eb4(param_1);
  }
  else {
    *param_1 = 0;
    local_8 = 0;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      FUN_00408405(*(int **)(param_1 + 8));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407f4e */

void __thiscall FUN_00407f4e(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_004061da(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_00407f71 */

void __fastcall FUN_00407f71(void *param_1)

{
  FUN_004061da(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_00407f93 */

void __thiscall FUN_00407f93(void *this,int param_1)

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



/* Function: FUN_00407fbd */

void __fastcall FUN_00407fbd(int *param_1)

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



/* Function: FUN_00407fdf */

void __thiscall FUN_00407fdf(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_004087bf(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00408016 */

void __fastcall FUN_00408016(int *param_1)

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



/* Function: FUN_0040805b */

undefined4 __thiscall FUN_0040805b(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00403d55(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_004080ab(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_004080ab */

void __thiscall FUN_004080ab(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_004046db(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004080e2 */

void __fastcall FUN_004080e2(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  HANDLE local_21c;
  int *local_218;
  HANDLE local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004031f5(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_004080ab(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00403d55(extraout_ECX);
    goto LAB_004081ce;
  }
  FUN_0040877c(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_00404747(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_004081fc:
    FUN_0040456e(unaff_retaddr,uVar3,&DAT_004016dc,uVar2);
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_00408595((int)local_210,&local_214,param_2);
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_004081fc;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00404708(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004046db(local_214);
  }
LAB_004081ce:
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00408212 */

int __fastcall FUN_00408212(int *param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int *piVar4;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00403db8();
  if (cVar1 == '\0') {
    iVar2 = FUN_0040877c(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar4 = local_8;
    if (*param_1 == 0) {
      FUN_004080ab(param_1 + 2,0);
      FUN_004080ab(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar3 = GetLastError();
        FUN_00404708(local_8);
        SetLastError(DVar3);
      }
      FUN_00408518((int)param_1);
      DVar3 = 0;
      hHeap = GetProcessHeap();
      iVar2 = HeapFree(hHeap,DVar3,param_1);
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = FUN_00404708(piVar4);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    iVar2 = *param_1;
  }
  return iVar2;
}



/* Function: FUN_004082a1 */

void __fastcall FUN_004082a1(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_00405688((void *)(*param_1 + 4),*(PVOID *)(*param_1 + 0x14));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_004082d2 */

void __fastcall FUN_004082d2(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  HANDLE local_21c;
  int *local_218;
  HANDLE local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004031f5(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_004080ab(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00403d55(extraout_ECX);
    goto LAB_004083c1;
  }
  FUN_0040877c(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_00404747(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_004083ef:
    FUN_0040456e(unaff_retaddr,uVar3,&DAT_004016dc,uVar2);
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_0040865a((int)local_210,&local_214,param_2);
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_004083ef;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00404708(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004046db(local_214);
  }
LAB_004083c1:
  FUN_004097b0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00408405 */

void __fastcall FUN_00408405(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00403db8();
  if (cVar1 == '\0') {
    FUN_0040877c(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_004080ab(param_1 + 2,0);
      FUN_004080ab(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00404708(local_8);
        SetLastError(DVar2);
      }
      FUN_00408543((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00404708(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_00406ceb(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_0040849f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040849f(void)

{
  _DAT_0040b640 = "WilStaging_02";
  DAT_0040b63c = 0;
  _DAT_0040b644 = 0;
  DAT_0040b648 = 0;
  _DAT_0040b64c = 0;
  _DAT_0040b650 = 0;
  _DAT_0040b654 = 0;
  _DAT_0040b658 = 0;
  _DAT_0040b65c = 0;
  FUN_004073f3((LPCRITICAL_SECTION)&DAT_0040b660);
  _DAT_0040b688 = 0;
  FUN_004073f3((LPCRITICAL_SECTION)&DAT_0040b68c);
  _DAT_0040b6c4 = 0;
  _DAT_0040b6b4 = 0;
  uRam0040b6b8 = 0;
  uRam0040b6bc = 0;
  uRam0040b6c0 = 0;
  DAT_0040b63c = 1;
  return;
}



/* Function: FUN_00408518 */

void __fastcall FUN_00408518(int param_1)

{
  FUN_00408721((int *)(param_1 + 0x18));
  FUN_0040856e((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004046db(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00408543 */

void __fastcall FUN_00408543(int param_1)

{
  FUN_00406c8a((void *)(param_1 + 0x10));
  FUN_0040856e((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004046db(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040856e */

void __fastcall FUN_0040856e(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_004046db((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_004046db((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00408595 */

uint __fastcall FUN_00408595(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00403688(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_0040456e(unaff_retaddr,0x148,&DAT_004016dc,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004046cf();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_004047a4(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_0040456e(unaff_retaddr,0x14b,&DAT_004016dc,uVar3);
    }
    else {
      FUN_004087ea(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_0040856e(local_10);
  }
  FUN_00407fbd((int *)&local_18);
  return uVar3;
}



/* Function: FUN_0040865a */

uint __fastcall FUN_0040865a(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00403688(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_0040456e(unaff_retaddr,0x148,&DAT_004016dc,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004046cf();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_004047a4(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_0040456e(unaff_retaddr,0x14b,&DAT_004016dc,uVar3);
    }
    else {
      FUN_0040884e(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_0040856e(local_10);
  }
  FUN_00407fbd((int *)&local_18);
  return uVar3;
}



/* Function: FUN_00408721 */

void __fastcall FUN_00408721(int *param_1)

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
        FUN_00404b48((int)lpMem + 8);
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



/* Function: FUN_0040877c */

void __thiscall FUN_0040877c(void *this,undefined4 *param_1)

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
    FUN_00404644(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_004087bf */

void FUN_004087bf(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x004087de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_004087ea */

undefined4 * __thiscall FUN_004087ea(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_0040884e */

undefined4 * __thiscall FUN_0040884e(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_0040691a((void *)((int)this + 0x14));
  FUN_004073f3((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_004088b2 */

void __fastcall
FUN_004088b2(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00403a94(param_7);
  local_8 = 0;
  FUN_004089cc(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_004088f9 */

void * __fastcall FUN_004088f9(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_00403d90(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_00403051(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_00408969 */

char * __fastcall FUN_00408969(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_00403d72(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      FUN_00403051(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar1);
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



/* Function: FUN_004089cc */

void __fastcall
FUN_004089cc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_0040905b(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_004089f2 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_004089f2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  WCHAR local_1414 [2048];
  undefined1 local_414 [1024];
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040aaf7;
  local_10 = ExceptionList;
  uStack_14 = 0x408a0f;
  uVar3 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_141c = param_6;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_1420 = param_1;
  local_1418 = param_2;
  local_1450 = FUN_00403850(local_1474);
  local_147c = 3;
  local_1478 = 0;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  LOCK();
  UNLOCK();
  local_146c = DAT_0040b598 + 1;
  local_1468 = 0;
  DAT_0040b598 = DAT_0040b598 + 1;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_0040b574;
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
  if (DAT_0040b574 == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c1f0)(uVar3);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_0040b538;
  if (DAT_0040b538 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b550;
  if (DAT_0040b550 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b54c;
  if (DAT_0040b54c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b560;
  if ((DAT_0040b560 != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c);
    (*pcVar1)();
  }
  if (-1 < local_1474) {
    local_1474 = -0x7fff0001;
    local_1470 = FUN_00403a94(0x8000ffff);
  }
  pcVar1 = DAT_0040b524;
  if (DAT_0040b52c == '\0') {
    if (DAT_0040b524 == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c1f0)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00408bf6;
  }
  else {
LAB_00408bf6:
    pcVar1 = DAT_0040b530;
    if ((local_1478 & 2) == 0) {
      if ((DAT_0040b530 != (code *)0x0) && (DAT_0040b540 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c,local_1414,0x800);
        (*pcVar1)();
      }
      if (local_1414[0] == L'\0') {
        FUN_004033cc(local_1414,0x800,(int)&local_147c);
      }
      OutputDebugStringW(local_1414);
      goto LAB_00408c80;
    }
  }
  pcVar1 = DAT_0040b530;
  if ((DAT_0040b530 != (code *)0x0) && (DAT_0040b540 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c,0,0);
    (*pcVar1)();
  }
LAB_00408c80:
  pcVar1 = DAT_0040b558;
  if ((((local_1478 & 4) != 0) || (DAT_0040b534 != '\0')) && (DAT_0040b558 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c1f0)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  FUN_0040441d((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408cc0 */

void __fastcall
FUN_00408cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  FUN_00409101(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Function: FUN_00408cd1 */

void __fastcall
FUN_00408cd1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00403a94(param_7);
  local_8 = 0;
  FUN_00408cc0(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_00408d14 */

uint __fastcall
FUN_00408d14(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  uint uVar1;
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00403cd4(param_1,param_2,param_3,param_1,param_1,param_6);
  local_10 = uVar1;
  local_c = FUN_00403a94(uVar1);
  local_8 = 0;
  FUN_00408cc0(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10);
  return uVar1;
}



/* Function: FUN_00408d69 */

void __fastcall FUN_00408d69(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_0040c1f0)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00408d90 */

void FUN_00408d90(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_004070b2((int)param_2);
  }
  return;
}



/* Function: FUN_00408dd0 */

void FUN_00408dd0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_00405af7(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00408e1f */

void __fastcall FUN_00408e1f(undefined4 param_1,undefined4 param_2)

{
  uint *this;
  undefined *puVar1;
  uint uVar2;
  undefined1 auStack_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  _EVENT_DATA_DESCRIPTOR local_50 [2];
  undefined4 local_30 [4];
  undefined4 local_20 [5];
  uint local_c;
  
  local_c = DAT_0040b100 ^ (uint)auStack_5c;
  puVar1 = FUN_0040579a();
  this = *(uint **)(puVar1 + 4);
  if (5 < *this) {
    uVar2 = FUN_004026f8(this,0,0x2000);
    if ((char)uVar2 != '\0') {
      local_58 = param_2;
      local_54 = param_1;
      FUN_00402e5d(&local_58,local_20);
      FUN_00402e5d(&local_54,local_30);
      FUN_00402663((int)this,&DAT_00401c7a,(LPCGUID)0x0,(LPCGUID)0x0,4,local_50);
    }
  }
  FUN_004097b0(local_c ^ (uint)auStack_5c);
  return;
}



/* Function: FUN_00408ead */

undefined4 * __fastcall FUN_00408ead(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040aa56;
  local_10 = ExceptionList;
  uVar4 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = param_1 + 2;
  FUN_004051a4(puVar1);
  piVar3 = DAT_0040b614;
  param_1[7] = 1;
  *param_1 = &PTR_FUN_004010a0;
  param_1[1] = &PTR_FUN_00401100;
  *puVar1 = &PTR_FUN_0040105c;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_0040c1f0)(piVar3,uVar4);
    (*pcVar2)();
  }
  *param_1 = &PTR_FUN_00401048;
  param_1[1] = &PTR_FUN_004010b4;
  *puVar1 = &PTR_FUN_0040105c;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00408f50 */

int __thiscall FUN_00408f50(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 0x1c) = 0xc0000001;
  FUN_00407d6a((int *)((int)this + 0x14));
  if ((param_1 & 1) != 0) {
    FUN_00409ab9(this);
  }
  return (int)this;
}



/* Function: FUN_00408f84 */

undefined4 __thiscall FUN_00408f84(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  void *pvVar2;
  
  iVar1 = FUN_004030d8(param_1,(int *)&DAT_004019e0);
  pvVar2 = this;
  if (iVar1 == 0) {
    pvVar2 = (void *)((int)this + 4);
    iVar1 = FUN_004030d8(extraout_ECX,(int *)&DAT_00401970);
    if (iVar1 == 0) {
      pvVar2 = (void *)((int)this + 8);
      iVar1 = FUN_004030d8(extraout_ECX_00,(int *)&LAB_00401960);
      if ((iVar1 == 0) && (iVar1 = FUN_004030d8(extraout_ECX_01,(int *)&DAT_00401998), iVar1 == 0))
      {
        return 0x80004002;
      }
    }
  }
  *param_2 = (int)pvVar2;
  return 0;
}



/* Function: FUN_00409000 */

undefined4 * __thiscall FUN_00409000(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401034;
  if ((param_1 & 1) != 0) {
    FUN_00409ab9(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00409030 */

undefined4 * __thiscall FUN_00409030(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401034;
  if ((param_1 & 1) != 0) {
    FUN_00409ab9(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040905b */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040905b(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_0040b100 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00404166(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_004097b0(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_0040441d((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409101 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00409101(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
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
  undefined4 local_1418;
  WCHAR local_1414 [2048];
  undefined1 local_414 [1024];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040ab1d;
  local_10 = ExceptionList;
  uVar3 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_141c = param_6;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_1420 = param_1;
  local_1418 = param_2;
  local_14 = uVar3;
  local_1450 = FUN_0040381a(local_1474);
  local_1478 = 0;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  local_147c = 1;
  LOCK();
  UNLOCK();
  local_146c = DAT_0040b598 + 1;
  local_1468 = 0;
  DAT_0040b598 = DAT_0040b598 + 1;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_0040b574;
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
  if (DAT_0040b574 == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c1f0)(uVar3);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_0040b538;
  if (DAT_0040b538 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b550;
  if (DAT_0040b550 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b54c;
  if (DAT_0040b54c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b560;
  if ((DAT_0040b560 != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b524;
  if (-1 < local_1474) {
    FUN_004046cf();
    goto LAB_004093ce;
  }
  if (DAT_0040b52c == '\0') {
    if (DAT_0040b524 == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c1f0)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_004092f1;
LAB_004092fa:
    pcVar1 = DAT_0040b530;
    if ((DAT_0040b530 != (code *)0x0) && (DAT_0040b540 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c,0,0);
      (*pcVar1)();
    }
  }
  else {
LAB_004092f1:
    pcVar1 = DAT_0040b530;
    if ((local_1478 & 2) != 0) goto LAB_004092fa;
    if ((DAT_0040b530 != (code *)0x0) && (DAT_0040b540 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040c1f0)(&local_147c,local_1414,0x800);
      (*pcVar1)();
    }
    if (local_1414[0] == L'\0') {
      FUN_004033cc(local_1414,0x800,(int)&local_147c);
    }
    OutputDebugStringW(local_1414);
  }
  pcVar1 = DAT_0040b558;
  if ((((local_1478 & 4) != 0) || (DAT_0040b534 != '\0')) && (DAT_0040b558 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c1f0)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  if ((local_1478 & 1) == 0) {
    ExceptionList = local_10;
    FUN_004097b0(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004093ce:
  FUN_0040441d((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004093f0 */

void __thiscall FUN_004093f0(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004010c8;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: FUN_00409420 */

undefined4 __thiscall
FUN_00409420(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_004061da(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_00409480 */

void FUN_00409480(int param_1)

{
  FUN_00407dd0((int *)(param_1 + -4));
  return;
}



/* Function: FUN_00409490 */

void FUN_00409490(int param_1)

{
  FUN_00407dd0((int *)(param_1 + -8));
  return;
}



/* Function: FUN_004094a0 */

void FUN_004094a0(int param_1,int *param_2,int *param_3)

{
  FUN_00407e80((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_004094b0 */

void FUN_004094b0(int param_1,int *param_2,int *param_3)

{
  FUN_00407e80((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_004094c0 */

void FUN_004094c0(int param_1)

{
  FUN_00407e40(param_1 + -4);
  return;
}



/* Function: FUN_004094d0 */

void FUN_004094d0(int param_1)

{
  FUN_00407e40(param_1 + -8);
  return;
}



/* Function: FUN_004094e0 */

undefined4 FUN_004094e0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00409505();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00409511();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00409505 */

undefined * FUN_00409505(void)

{
  return &DAT_0040b1a0;
}



/* Function: FUN_00409511 */

undefined * FUN_00409511(void)

{
  return &DAT_0040b1a8;
}



/* Function: FUN_00409520 */

undefined4 FUN_00409520(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00409505();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00409511();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00409550 */

void FUN_00409550(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(2);
  uVar3 = FUN_00409bb1();
  o__set_fmode(uVar3);
  uVar3 = FUN_00409ba8();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_00409e6c();
    FUN_00409a9c(FUN_00409ea0);
    uVar3 = FUN_00409b9e();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_00409bbd();
      guard_check_icall();
      guard_check_icall();
      FUN_00409bd8();
      uVar3 = FUN_00409ba8();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_00409bcf();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_00409ba8();
      iVar5 = thunk_FUN_00409ba8();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_00409c3a();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004095f0 */

undefined4 FUN_004095f0(void)

{
  FUN_00409bff();
  return 0;
}



/* Function: FUN_00409600 */

void FUN_00409600(void)

{
  undefined4 uVar1;
  
  FUN_00409de2();
  uVar1 = FUN_00409ba8();
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
    if (DAT_0040b1b0 != 1) {
      if (DAT_0040b1b0 == 0) {
        DAT_0040b1b0 = 1;
        iVar4 = initterm_e(&DAT_00401340,&DAT_00401354);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_00401310,&DAT_0040133c);
        DAT_0040b1b0 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00409c22();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_0040c1f0)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_00409c2e();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      FUN_00409d57();
      o__get_wide_winmain_command_line();
      unaff_ESI = FUN_00407c52();
      uVar6 = FUN_00409d9a();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_00409785;
    }
  }
  FUN_00409c3a();
LAB_00409785:
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



/* Function: FUN_004097b0 */

void __fastcall FUN_004097b0(int param_1)

{
  if (param_1 == DAT_0040b100) {
    return;
  }
  FUN_00409fa9();
  return;
}



/* Function: FUN_004097c4 */

void FUN_004097c4(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040ab4d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0040a0ab(param_1);
  FUN_00409806();
  return;
}



/* Function: Catch_All@004097fe */

undefined * Catch_All_004097fe(void)

{
  return &DAT_00409804;
}



/* Function: FUN_00409806 */

void FUN_00409806(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
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
      if (DAT_0040b1b4 != 0) {
        uVar3 = DAT_0040b1b4;
        uVar1 = DAT_0040b1b4;
      }
      DAT_0040b1b4 = uVar1;
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
    DAT_0040b1d1 = 1;
  }
  FUN_0040a0e3();
  cVar1 = FUN_00409bcf();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_00409bcf();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_00409bcf();
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
  
  if (DAT_0040b1d0 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00409c3a();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_0040b1b8 = 0xffffffff;
    _DAT_0040b1bc = 0xffffffff;
    _DAT_0040b1c0 = 0xffffffff;
    _DAT_0040b1c4 = 0xffffffff;
    _DAT_0040b1c8 = 0xffffffff;
    _DAT_0040b1cc = 0xffffffff;
LAB_0040995d:
    DAT_0040b1d0 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_0040b1b8);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_0040b1c4);
      if (uVar3 == 0) goto LAB_0040995d;
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
  iVar1 = DAT_0040b1b4;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0040b1b4 = 0;
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
  if ((DAT_0040b1d1 == '\0') || (param_2 == '\0')) {
    FUN_00409bcf();
    FUN_00409bcf();
  }
  return 1;
}



/* Function: FUN_00409a66 */

undefined4 __cdecl FUN_00409a66(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0040b1b8 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_0040b1b8,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_00409a9c */

int __cdecl FUN_00409a9c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409a66(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_00409ab9 */

void __cdecl FUN_00409ab9(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_00409ad0 */

undefined4 * __thiscall FUN_00409ad0(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00409af8 */

uint FUN_00409af8(void)

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
  if ((DAT_0040b100 == 0xbb40e64e) || ((DAT_0040b100 & 0xffff0000) == 0)) {
    DAT_0040b100 = FUN_00409af8();
    if (DAT_0040b100 == 0xbb40e64e) {
      DAT_0040b100 = 0xbb40e64f;
    }
    else if ((DAT_0040b100 & 0xffff0000) == 0) {
      DAT_0040b100 = DAT_0040b100 | (DAT_0040b100 | 0x4711) << 0x10;
    }
  }
  DAT_0040b140 = ~DAT_0040b100;
  return;
}



/* Function: FUN_00409b9e */

undefined4 FUN_00409b9e(void)

{
  return 1;
}



/* Function: FUN_00409ba8 */

undefined4 FUN_00409ba8(void)

{
  return 0;
}



/* Function: FUN_00409bb1 */

undefined4 FUN_00409bb1(void)

{
  return 0x4000;
}



/* Function: FUN_00409bbd */

void FUN_00409bbd(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0040b1d8);
  return;
}



/* Function: FUN_00409bcf */

undefined1 FUN_00409bcf(void)

{
  return 1;
}



/* Function: FUN_00409bd8 */

void FUN_00409bd8(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_00409c3a();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409bff */

void FUN_00409bff(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00409505();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00409511();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_00409c22 */

undefined * FUN_00409c22(void)

{
  return &DAT_0040b6e4;
}



/* Function: FUN_00409c2e */

undefined * FUN_00409c2e(void)

{
  return &DAT_0040b6e0;
}



/* Function: FUN_00409c3a */

void FUN_00409c3a(void)

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
  FUN_00409e5e();
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
    FUN_00409e5e();
  }
  return;
}



/* Function: FUN_00409d57 */

WORD FUN_00409d57(void)

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



/* Function: thunk_FUN_00409ba8 */

undefined4 thunk_FUN_00409ba8(void)

{
  return 0;
}



/* Function: FUN_00409d9a */

uint FUN_00409d9a(void)

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



/* Function: FUN_00409de2 */

void FUN_00409de2(void)

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



/* Function: FUN_00409e5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409e5e(void)

{
  _DAT_0040b1e0 = 0;
  return;
}



/* Function: FUN_00409e6c */

/* WARNING: Removing unreachable block (ram,0x00409e7e) */
/* WARNING: Removing unreachable block (ram,0x00409e7f) */
/* WARNING: Removing unreachable block (ram,0x00409e85) */
/* WARNING: Removing unreachable block (ram,0x00409e8f) */
/* WARNING: Removing unreachable block (ram,0x00409e96) */

void FUN_00409e6c(void)

{
  return;
}



/* Function: FUN_00409ea0 */

/* WARNING: Removing unreachable block (ram,0x00409eb2) */
/* WARNING: Removing unreachable block (ram,0x00409eb3) */
/* WARNING: Removing unreachable block (ram,0x00409eb9) */
/* WARNING: Removing unreachable block (ram,0x00409ec3) */
/* WARNING: Removing unreachable block (ram,0x00409eca) */

void FUN_00409ea0(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040b100 ^ (uint)&param_2;
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
  
  iVar1 = FUN_0040a631(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_0040b100,FUN_004097b0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00409f77 */

void __cdecl FUN_00409f77(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00409fa9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409fa9(void)

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
  _DAT_0040b2e0 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0040b2e8 = (undefined4)uVar9;
  _DAT_0040b2f8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0040b2fc = &stack0x00000004;
  _DAT_0040b238 = 0x10001;
  _DAT_0040b1e8 = 0xc0000409;
  _DAT_0040b1ec = 1;
  _DAT_0040b1f8 = 1;
  DAT_0040b1fc = 2;
  _DAT_0040b1f4 = unaff_retaddr;
  _DAT_0040b2c4 = in_GS;
  _DAT_0040b2c8 = in_FS;
  _DAT_0040b2cc = in_ES;
  _DAT_0040b2d0 = in_DS;
  _DAT_0040b2d4 = unaff_EDI;
  _DAT_0040b2d8 = unaff_ESI;
  _DAT_0040b2dc = unaff_EBX;
  _DAT_0040b2e4 = uVar3;
  _DAT_0040b2ec = unaff_EBP;
  DAT_0040b2f0 = unaff_retaddr;
  _DAT_0040b2f4 = in_CS;
  _DAT_0040b300 = in_SS;
  FUN_00409f77((_EXCEPTION_POINTERS *)&PTR_DAT_00401008);
  return;
}



/* Function: FUN_0040a0ab */

void __cdecl FUN_0040a0ab(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  do {
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x40a0c7;
    iVar1 = o_malloc();
    if (iVar1 != 0) {
      return;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x40a0ba;
    iVar1 = o__callnewh();
  } while (iVar1 != 0);
  if (param_1 != -1) {
    FUN_0040a3d2();
    return;
  }
  puStack_8 = &stack0xfffffffc;
  FUN_0040a353(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_0040ae24);
}



/* Function: FUN_0040a0e3 */

/* WARNING: Removing unreachable block (ram,0x0040a154) */
/* WARNING: Removing unreachable block (ram,0x0040a118) */
/* WARNING: Removing unreachable block (ram,0x0040a1cc) */

undefined4 FUN_0040a0e3(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_0040b504 = 0;
  DAT_0040b144 = DAT_0040b144 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_0040b144;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_0040b508 = DAT_0040b508 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_0040b508 = DAT_0040b508 | 2;
      }
    }
    DAT_0040b504 = 1;
    uVar5 = DAT_0040b144 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_0040b144 | 6;
      DAT_0040b504 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0040b504 = 3;
        uVar5 = DAT_0040b144 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_0040b504 = 5;
          uVar5 = DAT_0040b144 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_0040b144 = DAT_0040b144 | 0x6e;
            DAT_0040b504 = 6;
            uVar5 = DAT_0040b144;
          }
        }
      }
    }
  }
  DAT_0040b144 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0040b148 != 0;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_0040a2e0 */

exception * __thiscall FUN_0040a2e0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_0040a303 */

undefined4 * __fastcall FUN_0040a303(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* Function: FUN_0040a330 */

exception * __thiscall FUN_0040a330(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_0040a353 */

undefined4 * __fastcall FUN_0040a353(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* Function: FUN_0040a380 */

void __fastcall FUN_0040a380(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_0040a3a0 */

undefined4 * __thiscall FUN_0040a3a0(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040a3d2 */

void FUN_0040a3d2(void)

{
  undefined4 local_10 [3];
  
  FUN_0040a303(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_0040adec);
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: Unwind@0040a460 */

void Unwind_0040a460(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_wide_winmain_command_line */

void __cdecl o__get_wide_winmain_command_line(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_wide_winmain_command_line();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0040a5c8. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: FUN_0040a5d4 */

int __cdecl
FUN_0040a5d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_00409505();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0040a60e */

void __cdecl
FUN_0040a60e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0040a5d4(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: FUN_0040a631 */

int __cdecl FUN_0040a631(int param_1)

{
  uint uVar1;
  
  if ((DAT_0040b504 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040b100 ^ (uint)&param_1;
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
  *(uint *)((int)puVar2 + iVar1 + -0x1c) = DAT_0040b100 ^ (uint)puVar2;
  puVar2[1] = param_3;
  *(undefined4 *)((int)puVar2 + iVar1 + -0x20) = puVar2[-3];
  puVar2[-3] = ExceptionList;
  ExceptionList = puVar2 + -3;
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
  
                    /* WARNING: Could not recover jumptable at 0x0040a801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a80d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@0040a9b3 */

void Unwind_0040a9b3(void)

{
  int unaff_EBP;
  
  FUN_00408d69(*(int *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* Function: Unwind@0040a9e6 */

void Unwind_0040a9e6(void)

{
  int unaff_EBP;
  
  FUN_0040690c(unaff_EBP + -0x106c);
  return;
}



/* Function: Unwind@0040aa26 */

void Unwind_0040aa26(void)

{
  int unaff_EBP;
  
  FUN_00406e90(unaff_EBP + -0x78);
  return;
}



/* Function: Unwind@0040aa9c */

void Unwind_0040aa9c(void)

{
  int unaff_EBP;
  
  FUN_00407d6a((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0040aaa4 */

void Unwind_0040aaa4(void)

{
  int unaff_EBP;
  
  FUN_00404733((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: FUN_0040ab70 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_0040ab70(void)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_0040a94a;
  if (DAT_0040b054 != (int *)0x0) {
    puVar1 = (undefined1 *)FUN_00408212(DAT_0040b054);
  }
  return puVar1;
}



/* Function: FUN_0040aba0 */

void FUN_0040aba0(void)

{
  FUN_00408016((int *)&DAT_0040b158);
  return;
}



/* Function: FUN_0040abb0 */

void FUN_0040abb0(void)

{
  if (DAT_0040b638 != (LPVOID)0x0) {
    CoTaskMemFree(DAT_0040b638);
  }
  return;
}



/* Function: FUN_0040abd0 */

void FUN_0040abd0(void)

{
  FUN_00407ee9(&DAT_0040b63c);
  return;
}



