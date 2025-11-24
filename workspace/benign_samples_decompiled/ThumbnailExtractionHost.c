/* Function: FUN_00402bc0 */

void FUN_00402bc0(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_0040c1e0)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00402c43 */

void FUN_00402c43(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x935;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_00402cd8 */

uint __thiscall FUN_00402cd8(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_00402d0f:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_00402d0f;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_00402d1b */

void __fastcall
FUN_00402d1b(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7,void *param_8,undefined4 param_9,void *param_10,
            undefined4 param_11,void *param_12,undefined4 param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,undefined4 param_18,void *param_19,
            void *param_20)

{
  undefined4 extraout_EDX;
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
  FUN_004035c0(param_20,local_18);
  FUN_0040360e(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_004035c0(param_17,local_48);
  FUN_0040360e(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_0040360e(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_004035c0(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_0040360e(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_0040360e(param_8,local_d8);
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
  FUN_00402c43(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x12,local_128);
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00402ed6 */

void __fastcall
FUN_00402ed6(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6,void *param_7,undefined4 param_8,void *param_9,undefined4 param_10,
            void *param_11,undefined4 param_12,void *param_13,undefined4 param_14,void *param_15,
            void *param_16,undefined4 param_17,void *param_18,void *param_19,undefined4 param_20,
            undefined4 param_21,void *param_22)

{
  undefined4 extraout_EDX;
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
  FUN_0040360e(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_004035c0(param_19,local_48);
  FUN_0040360e(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_004035c0(param_16,local_78);
  FUN_0040360e(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_0040360e(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_004035c0(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_0040360e(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_0040360e(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00402c43(param_1,param_2,param_3,(LPCGUID)0x0,0x14,local_148);
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004030d7 */

void __fastcall
FUN_004030d7(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7,void *param_8,undefined4 param_9,void *param_10,
            undefined4 param_11,void *param_12,undefined4 param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,undefined4 param_18,void *param_19,
            void *param_20,undefined4 param_21,undefined4 param_22,void *param_23)

{
  undefined4 extraout_EDX;
  _EVENT_DATA_DESCRIPTOR local_158 [2];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
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
  FUN_0040360e(param_23,local_18);
  local_28 = param_22;
  local_38 = param_21;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_004035c0(param_20,local_48);
  FUN_0040360e(param_19,local_58);
  local_68 = param_18;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_004035c0(param_17,local_78);
  FUN_0040360e(param_16,local_88);
  local_98 = param_15;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_0040360e(param_14,local_a8);
  local_b8 = param_13;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_004035c0(param_12,local_c8);
  local_d8 = param_11;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_0040360e(param_10,local_e8);
  local_f8 = param_9;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_0040360e(param_8,local_108);
  local_118 = param_7;
  local_114 = 0;
  local_128 = *param_6;
  local_110 = 4;
  local_10c = 0;
  local_124 = 0;
  local_138 = *param_5;
  local_120 = 8;
  local_11c = 0;
  local_134 = 0;
  local_130 = 8;
  local_12c = 0;
  FUN_00402c43(param_1,param_2,param_3,(LPCGUID)0x0,0x15,local_158);
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004032f4 */

void __fastcall
FUN_004032f4(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7,void *param_8,undefined4 param_9,void *param_10,
            undefined4 param_11,void *param_12,undefined4 param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,undefined4 param_18,void *param_19,
            void *param_20,undefined4 param_21,undefined4 param_22,void *param_23,
            undefined4 param_24,undefined4 *param_25,undefined4 param_26)

{
  undefined4 extraout_EDX;
  _EVENT_DATA_DESCRIPTOR local_188 [2];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138 [4];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118 [4];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [4];
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
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [4];
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
  local_14 = 0;
  local_c = 0;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  local_18 = param_26;
  local_28 = *param_25;
  local_38 = param_24;
  local_10 = 4;
  local_20 = 0x10;
  local_30 = 4;
  FUN_0040360e(param_23,local_48);
  local_58 = param_22;
  local_68 = param_21;
  local_50 = 4;
  local_60 = 4;
  local_54 = 0;
  local_4c = 0;
  local_64 = 0;
  local_5c = 0;
  FUN_004035c0(param_20,local_78);
  FUN_0040360e(param_19,local_88);
  local_98 = param_18;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_004035c0(param_17,local_a8);
  FUN_0040360e(param_16,local_b8);
  local_c8 = param_15;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_0040360e(param_14,local_d8);
  local_e8 = param_13;
  local_e4 = 0;
  local_e0 = 4;
  local_dc = 0;
  FUN_004035c0(param_12,local_f8);
  local_108 = param_11;
  local_104 = 0;
  local_100 = 4;
  local_fc = 0;
  FUN_0040360e(param_10,local_118);
  local_128 = param_9;
  local_124 = 0;
  local_120 = 4;
  local_11c = 0;
  FUN_0040360e(param_8,local_138);
  local_148 = param_7;
  local_144 = 0;
  local_158 = *param_6;
  local_140 = 4;
  local_13c = 0;
  local_154 = 0;
  local_168 = *param_5;
  local_150 = 8;
  local_14c = 0;
  local_164 = 0;
  local_160 = 8;
  local_15c = 0;
  FUN_00402c43(param_1,param_2,param_3,(LPCGUID)0x0,0x18,local_188);
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040355f */

void __fastcall
FUN_0040355f(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  undefined4 extraout_EDX;
  _EVENT_DATA_DESCRIPTOR local_48 [2];
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
  local_10 = 8;
  local_14 = 0;
  local_18 = *param_6;
  local_28 = param_5;
  local_c = 0;
  local_24 = 0;
  local_20 = 4;
  local_1c = 0;
  FUN_00402c43(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,4,local_48);
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004035c0 */

void __thiscall FUN_004035c0(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)&DAT_00401598;
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



/* Function: FUN_0040360e */

void __thiscall FUN_0040360e(void *this,undefined4 *param_1)

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



/* Function: FUN_00403650 */

void FUN_00403650(void)

{
  FUN_0040a2f6(FUN_0040a8d0);
  return;
}



/* Function: FUN_00403670 */

void FUN_00403670(void)

{
  FUN_0040a2f6(FUN_0040a8f0);
  return;
}



/* Function: FUN_00403690 */

void FUN_00403690(void)

{
  DAT_0040b54c = FUN_00405eb0;
  DAT_0040b524 = &PTR_s_WilError_03_0040b088;
  DAT_0040b538 = &DAT_0040b150;
  return;
}



/* Function: FUN_004036c0 */

void FUN_004036c0(void)

{
  DAT_0040b568 = FUN_00404d70;
  DAT_0040b554 = DebugBreak;
  DAT_0040b564 = FUN_00404db0;
  DAT_0040b544 = FUN_00405f50;
  DAT_0040b534 = FUN_00405fe0;
  DAT_0040b550 = FUN_00405fa0;
  return;
}



/* Function: FUN_00403710 */

void FUN_00403710(void)

{
  DAT_0040b680 = DAT_004014e8;
  DAT_0040b684 = DAT_004014ec;
  DAT_0040b688 = DAT_004014f0;
  DAT_0040b68c = DAT_004014f4;
  return;
}



/* Function: FUN_00403730 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403730(void)

{
  FUN_00407b53();
  _DAT_0040b690 = &PTR_FUN_004010f8;
  FUN_0040a2f6(FUN_0040a900);
  return;
}



/* Function: FUN_00403760 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403760(void)

{
  int iVar1;
  
  iVar1 = FUN_00403886((LPCRITICAL_SECTION)&DAT_0040b0a0);
  if (iVar1 < 0) {
    DAT_0040b5f0 = 1;
  }
  else {
    _DAT_0040b090 = 0x28;
  }
  FUN_0040a2f6(FUN_0040a910);
  return;
}



/* Function: FUN_004037a0 */

void FUN_004037a0(void)

{
  FUN_004098f0();
  FUN_0040a2f6(FUN_0040a920);
  return;
}



/* Function: FUN_004037c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004037c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00403886((LPCRITICAL_SECTION)&DAT_0040b180);
  if (iVar1 < 0) {
    _DAT_0040b17c = 0;
    DAT_0040b5f0 = 1;
  }
  FUN_0040a2f6(FUN_0040a930);
  return;
}



/* Function: FUN_004037f0 */

undefined4 __fastcall FUN_004037f0(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0040381b */

void __fastcall FUN_0040381b(DWORD param_1)

{
  RaiseException(param_1,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_0040382f */

void __fastcall FUN_0040382f(int param_1)

{
  DWORD DVar1;
  
  DVar1 = 0xc000001d;
  if (param_1 == -0x7ff8fff2) {
    DVar1 = 0xc0000017;
  }
  FUN_0040381b(DVar1);
  return;
}



/* Function: FUN_0040384d */

undefined4 __fastcall FUN_0040384d(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 0xc) {
    iVar2 = -0x7ff8fff2;
  }
  else if ((param_1 == 0x16) || (param_1 == 0x22)) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    if (param_1 == 0x50) {
      return 0x50;
    }
    iVar2 = -0x7fffbffb;
  }
  uVar1 = FUN_0040382f(iVar2);
  return uVar1;
}



/* Function: FUN_00403886 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_00403886(LPCRITICAL_SECTION param_1)

{
  undefined4 local_14;
  
  InitializeCriticalSection(param_1);
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_004038dd */

DWORD FUN_004038dd(void)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_004038fa */

int __thiscall FUN_004038fa(void *this,DWORD param_1)

{
  code *pcVar1;
  _func_5023 *p_Var2;
  int iVar3;
  LPUNKNOWN This;
  LPUNKNOWN local_8;
  
  local_8 = (LPUNKNOWN)0x0;
  pcVar1 = *(code **)((int)this + 8);
  if (pcVar1 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c1e0)
              (*(undefined4 *)((int)this + 0xc),&DAT_00401ac0,&local_8);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
                    /* WARNING: Load size is inaccurate */
      iVar3 = CoRegisterClassObject(*this,local_8,4,param_1,(LPDWORD)((int)this + 0x14));
    }
    if (local_8 != (IUnknown *)0x0) {
      p_Var2 = local_8->lpVtbl->Release;
      This = local_8;
      (*(code *)PTR_guard_check_icall_0040c1e0)();
      (*p_Var2)(This);
    }
  }
  return iVar3;
}



/* Function: FUN_0040396a */

undefined4 __fastcall FUN_0040396a(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0xc0)) && (param_1[3] == 0x46000000)
     ) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Function: FUN_0040398f */

void __fastcall FUN_0040398f(int *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  
  if (*param_1 != 0) {
    piVar4 = (int *)param_1[2];
    if (piVar4 < (int *)param_1[3]) {
      do {
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 0x10);
          if (piVar2 != (int *)0x0) {
            pcVar3 = *(code **)(*piVar2 + 8);
            (*(code *)PTR_guard_check_icall_0040c1e0)(piVar2);
            (*pcVar3)();
          }
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 < (int *)param_1[3]);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_004039ee */

void __fastcall FUN_004039ee(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  HKEY pHVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  iVar3 = 0;
  piVar5 = (int *)PTR_DAT_0040b09c;
  piVar6 = (int *)PTR_PTR_0040b098;
  if (PTR_PTR_0040b098 < PTR_DAT_0040b09c) {
    do {
      uVar7 = CONCAT44(param_2,iVar3);
      puVar1 = (undefined4 *)*piVar6;
      if (puVar1 != (undefined4 *)0x0) {
        pcVar2 = (code *)puVar1[7];
        (*(code *)PTR_guard_check_icall_0040c1e0)();
        pHVar4 = (HKEY)(*pcVar2)();
        iVar3 = FUN_004040ba((GUID *)*puVar1,pHVar4,0);
        if (iVar3 < 0) {
          return;
        }
        pcVar2 = (code *)puVar1[1];
        (*(code *)PTR_guard_check_icall_0040c1e0)(0);
        uVar7 = (*pcVar2)();
        piVar5 = (int *)PTR_DAT_0040b09c;
        if ((int)uVar7 < 0) {
          return;
        }
      }
      param_2 = (undefined4)((ulonglong)uVar7 >> 0x20);
      iVar3 = (int)uVar7;
      piVar6 = piVar6 + 1;
    } while (piVar6 < piVar5);
    if (iVar3 < 0) {
      return;
    }
  }
  FUN_00403ec4((HMODULE)PTR_IMAGE_DOS_HEADER_0040b094,param_2);
  return;
}



/* Function: FUN_00403a6c */

void FUN_00403a6c(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)PTR_DAT_0040b09c;
  piVar3 = (int *)PTR_PTR_0040b098;
  if (PTR_PTR_0040b098 < PTR_DAT_0040b09c) {
    do {
      if (*piVar3 != 0) {
        pcVar1 = *(code **)(*piVar3 + 0x20);
        (*(code *)PTR_guard_check_icall_0040c1e0)(param_1);
        (*pcVar1)();
        piVar2 = (int *)PTR_DAT_0040b09c;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 < piVar2);
  }
  return;
}



/* Function: FUN_00403ab0 */

void __fastcall FUN_00403ab0(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *_Memory;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 4);
  if (*piVar3 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      if (param_1 == 0) {
        piVar3 = (int *)0x0;
      }
      if (piVar3 == (int *)0x0) {
        FUN_0040381b(0xc0000005);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Memory = (undefined4 *)piVar3[2];
      while (_Memory != (undefined4 *)0x0) {
        pcVar1 = (code *)*_Memory;
        (*(code *)PTR_guard_check_icall_0040c1e0)(_Memory[1]);
        (*pcVar1)();
        puVar2 = (undefined4 *)_Memory[2];
        free(_Memory);
        _Memory = puVar2;
      }
      piVar3[2] = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    piVar3 = *(int **)(param_1 + 0x28);
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 8);
      (*(code *)PTR_guard_check_icall_0040c1e0)(piVar3);
      (*pcVar1)();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Function: FUN_00403b50 */

int __fastcall FUN_00403b50(int param_1)

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



/* Function: FUN_00403b60 */

undefined4 __fastcall FUN_00403b60(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Function: FUN_00403b70 */

HRESULT __thiscall FUN_00403b70(void *this,undefined4 *param_1)

{
  LPVOID *ppv;
  code *pcVar1;
  HRESULT HVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    HVar2 = -0x7fffbffd;
  }
  else {
    HVar2 = 0;
    ppv = (LPVOID *)((int)this + 0x28);
    if ((*ppv != (LPVOID)0x0) ||
       (HVar2 = CoCreateInstance((IID *)&DAT_00401cc4,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401cd4,ppv),
       -1 < HVar2)) {
      *param_1 = *ppv;
                    /* WARNING: Load size is inaccurate */
      pcVar1 = *(code **)(**ppv + 4);
      (*(code *)PTR_guard_check_icall_0040c1e0)(*ppv);
      (*pcVar1)();
    }
  }
  return HVar2;
}



/* Function: FUN_00403bce */

LPWSTR __fastcall FUN_00403bce(LPWSTR param_1,LPCWSTR param_2)

{
  LPCWSTR lpsz;
  LPWSTR pWVar1;
  
  do {
    if ((param_1 == (LPCWSTR)0x0) || (*param_1 == L'\0')) {
      return (LPWSTR)0x0;
    }
    lpsz = param_2;
    if (param_2 != (LPCWSTR)0x0) {
      do {
        if (*lpsz == L'\0') break;
        if (*param_1 == *lpsz) {
          pWVar1 = CharNextW(param_1);
          return pWVar1;
        }
        lpsz = CharNextW(lpsz);
      } while (lpsz != (LPWSTR)0x0);
    }
    param_1 = CharNextW(param_1);
  } while( true );
}



/* Function: FUN_00403c1d */

int __fastcall FUN_00403c1d(LPWSTR param_1,LPWSTR param_2)

{
  ushort uVar1;
  LPWSTR pWVar2;
  LPWSTR pWVar3;
  ushort uVar4;
  
  pWVar2 = CharUpperW((LPWSTR)(uint)(ushort)*param_1);
  uVar4 = (ushort)pWVar2;
  pWVar3 = CharUpperW((LPWSTR)(uint)(ushort)*param_2);
  uVar1 = (ushort)pWVar3;
  if (uVar4 != 0) {
    do {
      uVar1 = (ushort)pWVar3;
      uVar4 = (ushort)pWVar2;
      if (uVar4 != uVar1) goto LAB_00403c96;
      if ((uVar4 == 0x20) || (uVar4 == 9)) break;
      param_1 = CharNextW(param_1);
      param_2 = CharNextW(param_2);
      pWVar2 = CharUpperW((LPWSTR)(uint)(ushort)*param_1);
      uVar4 = (ushort)pWVar2;
      pWVar3 = CharUpperW((LPWSTR)(uint)(ushort)*param_2);
      uVar1 = (ushort)pWVar3;
    } while (uVar4 != 0);
    if (uVar4 != 0) {
LAB_00403c96:
      if ((uVar4 != 0x20) && (uVar4 != 9)) goto LAB_00403caf;
    }
  }
  if ((uVar1 == 0) || ((uVar1 == 0x20 || (uVar1 == 9)))) {
    return 0;
  }
LAB_00403caf:
  return (-(uint)(uVar4 < uVar1) & 0xfffffffe) + 1;
}



/* Function: FUN_00403cc6 */

void __thiscall FUN_00403cc6(void *this,undefined4 param_1)

{
  code *pcVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  
  if ((*(int *)((int)this + 4) == 0) && (*(int *)((int)this + 8) == 0)) {
    pHVar2 = GetModuleHandleW(L"API-MS-Win-Core-LocalRegistry-L1-1-0.dll");
    if (pHVar2 == (HMODULE)0x0) {
      pHVar2 = LoadLibraryExW(L"advapi32.dll",(HANDLE)0x0,0);
      if (pHVar2 != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(pHVar2,"RegDeleteKeyW");
        *(FARPROC *)((int)this + 8) = pFVar3;
      }
    }
    else {
      pFVar3 = GetProcAddress(pHVar2,"RegDeleteKeyExW");
      *(FARPROC *)((int)this + 4) = pFVar3;
    }
  }
  pcVar1 = *(code **)((int)this + 4);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = *(code **)((int)this + 8);
    if (pcVar1 == (code *)0x0) {
      GetLastError();
    }
    else {
                    /* WARNING: Load size is inaccurate */
      (*(code *)PTR_guard_check_icall_0040c1e0)(*this,param_1);
      (*pcVar1)();
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    (*(code *)PTR_guard_check_icall_0040c1e0)(*this,param_1,0,0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00403d61 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_00403d61(HMODULE param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  DWORD DVar1;
  LPCWSTR lpsz;
  errno_t eVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  LPCWSTR pWVar4;
  LPCWSTR _Dst;
  undefined8 uVar5;
  WCHAR local_230 [270];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  if ((param_3 != (undefined4 *)0x0) && (param_4 != (undefined4 *)0x0)) {
    *param_3 = 0;
    *param_4 = 0;
    DVar1 = GetModuleFileNameW(param_1,local_230,0x104);
    if (DVar1 == 0) {
      FUN_004038dd();
      param_2 = extraout_EDX_00;
    }
    else {
      param_2 = extraout_EDX;
      if (DVar1 != 0x104) {
        lpsz = local_230;
        _Dst = (LPCWSTR)0x0;
        while (local_230[0] != L'\0') {
          pWVar4 = lpsz;
          if ((local_230[0] != L'.') && (pWVar4 = _Dst, local_230[0] == L'\\')) {
            pWVar4 = (LPCWSTR)0x0;
          }
          lpsz = CharNextW(lpsz);
          _Dst = pWVar4;
          local_230[0] = *lpsz;
        }
        if (_Dst == (LPCWSTR)0x0) {
          _Dst = lpsz;
        }
        uVar5 = Ordinal_161(local_230,param_4);
        param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if ((int)uVar5 < 0) {
          iVar3 = (int)_Dst - (int)local_230 >> 1;
          local_14 = _DAT_0040159c;
          uStack_10 = DAT_004015a0;
          uStack_c = DAT_004015a4;
          if (0x104 < iVar3 + 5U) goto LAB_00403eaf;
          eVar2 = wcscpy_s(_Dst,0x10e - iVar3,(wchar_t *)&local_14);
          FUN_0040384d(eVar2);
          uVar5 = Ordinal_161(local_230,param_4);
          param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
          if ((int)uVar5 < 0) goto LAB_00403eaf;
        }
        uVar5 = Ordinal_2(local_230);
        param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
        *param_3 = (int)uVar5;
      }
    }
  }
LAB_00403eaf:
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00403ec4 */

int __fastcall FUN_00403ec4(HMODULE param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  local_10 = 0;
  local_8 = (int *)0x0;
  iVar2 = FUN_00403d61(param_1,param_2,&local_10,&local_8);
  if (-1 < iVar2) {
    pcVar1 = *(code **)(*local_8 + 0x1c);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,&local_c);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) {
      iVar2 = Ordinal_186(local_c,*(undefined2 *)(local_c + 0x18),*(undefined2 *)(local_c + 0x1a),
                          *(undefined4 *)(local_c + 0x10),*(undefined4 *)(local_c + 0x14));
      pcVar1 = *(code **)(*local_8 + 0x30);
      (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,local_c);
      (*pcVar1)();
    }
  }
  FUN_00407d28((int *)&local_8);
  Ordinal_6(local_10);
  return iVar2;
}



/* Function: FUN_00403f55 */

void __fastcall FUN_00403f55(HMODULE param_1,undefined4 param_2)

{
  code *pcVar1;
  LPCWSTR lpsz;
  undefined4 uVar2;
  int iVar3;
  rsize_t _MaxCount;
  errno_t eVar4;
  LPWSTR pWVar5;
  uint extraout_ECX;
  uint uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  wchar_t *_Src;
  LPCWSTR pWVar7;
  uint uVar8;
  WCHAR *pWVar9;
  int local_21c;
  wchar_t *local_218;
  int *local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  local_218 = (wchar_t *)0x0;
  local_214 = (int *)0x0;
  iVar3 = FUN_00403d61(param_1,param_2,&local_218,&local_214);
  _Src = local_218;
  if (-1 < iVar3) {
    local_21c = 0;
    pcVar1 = *(code **)(*local_214 + 0x24);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_214,0xffffffff,0,0,0,&local_21c);
    iVar3 = (*pcVar1)();
    if ((iVar3 < 0) || (local_21c == 0)) {
      pWVar9 = (WCHAR *)0x0;
    }
    else {
      _MaxCount = Ordinal_7(_Src);
      eVar4 = wcsncpy_s(local_210,0x104,_Src,_MaxCount);
      FUN_0040384d(eVar4);
      pWVar7 = local_210;
      local_210[0x103] = 0;
      lpsz = pWVar7;
      uVar6 = extraout_ECX;
      uVar2 = extraout_EDX;
      while (local_210[0] != L'\0') {
        pWVar5 = CharNextW(lpsz);
        uVar6 = (uint)(ushort)*lpsz;
        if (((uVar6 == 0x5c) || (uVar6 == 0x2f)) || (uVar6 == 0x3a)) {
          pWVar7 = pWVar5;
        }
        lpsz = pWVar5;
        uVar2 = extraout_EDX_00;
        _Src = local_218;
        local_210[0] = *pWVar5;
      }
      uVar8 = (int)pWVar7 - (int)local_210 >> 1;
      if (uVar8 < 0x104) {
        if (0x207 < uVar8 * 2) {
          FUN_0040a12a(uVar6,uVar2);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_210[uVar8] = L'\0';
      }
      pWVar9 = local_210;
    }
    Ordinal_163(local_214,_Src,pWVar9);
    Ordinal_6(local_21c);
  }
  FUN_00407d28((int *)&local_214);
  Ordinal_6(_Src);
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX_01);
  return;
}



/* Function: FUN_004040ba */

void __fastcall FUN_004040ba(GUID *param_1,HKEY param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  errno_t eVar5;
  LSTATUS LVar6;
  undefined4 extraout_EDX;
  code *pcVar7;
  HKEY hKey;
  HKEY hKey_00;
  HKEY hKey_01;
  HKEY local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  HKEY local_1b0;
  HKEY local_1ac;
  int *local_1a8;
  GUID *local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  OLECHAR local_190 [64];
  wchar_t local_110 [130];
  uint local_c;
  
  local_c = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  local_1a8 = (int *)0x0;
  local_1ac = param_2;
  local_1a4 = param_1;
  if (((param_2 == (HKEY)0x0) ||
      ((((param_1->Data1 == DAT_004014e8 &&
         (iVar4._0_2_ = param_1->Data2, iVar4._2_2_ = param_1->Data3, iVar4 == DAT_004014ec)) &&
        (*(int *)param_1->Data4 == DAT_004014f0)) && (*(int *)(param_1->Data4 + 4) == DAT_004014f4))
      )) || (HVar3 = CoCreateInstance((IID *)&DAT_004014d8,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401ab0,
                                      &local_1a8), HVar3 < 0)) goto LAB_00404416;
  iVar4 = param_2->unused;
  while (iVar4 != 0) {
    puVar1 = (undefined4 *)param_2[1].unused;
    local_1a0 = *puVar1;
    uStack_19c = puVar1[1];
    uStack_198 = puVar1[2];
    uStack_194 = puVar1[3];
    if (param_3 == 0) {
      iVar2 = *local_1a8;
      if (iVar4 == 1) {
        (*(code *)PTR_guard_check_icall_0040c1e0)();
        (**(code **)(iVar2 + 0x18))();
      }
      else {
        (*(code *)PTR_guard_check_icall_0040c1e0)(local_1a8,local_1a4,1,&local_1a0);
        (**(code **)(iVar2 + 0x20))();
      }
    }
    else {
      if (iVar4 == 1) {
        pcVar7 = *(code **)(*local_1a8 + 0x14);
      }
      else {
        pcVar7 = *(code **)(*local_1a8 + 0x1c);
      }
      (*(code *)PTR_guard_check_icall_0040c1e0)(local_1a8,local_1a4,1,&local_1a0);
      iVar4 = (*pcVar7)();
      if (iVar4 < 0) goto LAB_00404416;
    }
    param_2 = local_1ac + 2;
    param_1 = local_1a4;
    local_1ac = param_2;
    iVar4 = param_2->unused;
  }
  if (param_3 != 0) goto LAB_00404416;
  StringFromGUID2(param_1,local_190,0x40);
  eVar5 = wcscpy_s(local_110,0x80,L"CLSID\\");
  FUN_0040384d(eVar5);
  eVar5 = wcscat_s(local_110,0x80,local_190);
  FUN_0040384d(eVar5);
  eVar5 = wcscat_s(local_110,0x80,L"\\Required Categories");
  FUN_0040384d(eVar5);
  local_1b8 = 0;
  local_1b4 = 0;
  hKey_01 = (HKEY)0x80000000;
  local_1a4 = (GUID *)0x0;
  local_1bc = (HKEY)0x80000000;
  local_1ac = (HKEY)0x0;
  LVar6 = RegOpenKeyExW((HKEY)0x80000000,local_110,0,0x20019,&local_1ac);
  hKey = local_1ac;
  hKey_00 = (HKEY)0x0;
  if (LVar6 == 0) {
    local_1b0 = (HKEY)RegQueryInfoKeyW(local_1ac,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                       (LPDWORD)&local_1a4,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                       (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
    if (hKey != (HKEY)0x0) {
      RegCloseKey(hKey);
      hKey = (HKEY)0x0;
    }
    hKey_00 = hKey;
    if ((local_1b0 == (HKEY)0x0) && (local_1a4 == (GUID *)0x0)) {
      FUN_00403cc6(&local_1bc,local_110);
      hKey_01 = local_1bc;
    }
  }
  eVar5 = wcscpy_s(local_110,0x80,L"CLSID\\");
  FUN_0040384d(eVar5);
  eVar5 = wcscat_s(local_110,0x80,local_190);
  FUN_0040384d(eVar5);
  eVar5 = wcscat_s(local_110,0x80,L"\\Implemented Categories");
  FUN_0040384d(eVar5);
  local_1b0 = (HKEY)0x0;
  LVar6 = RegOpenKeyExW(hKey_01,local_110,0,0x20019,&local_1b0);
  if (LVar6 == 0) {
    iVar4 = 0;
    if (hKey_00 != (HKEY)0x0) {
      iVar4 = RegCloseKey(hKey_00);
    }
    hKey_00 = local_1b0;
    if (iVar4 != 0) goto LAB_004043fa;
    LVar6 = RegQueryInfoKeyW(local_1b0,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)&local_1a4,
                             (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPDWORD)0x0,(PFILETIME)0x0);
    if (hKey_00 != (HKEY)0x0) {
      RegCloseKey(hKey_00);
      hKey_00 = (HKEY)0x0;
    }
    if (LVar6 == 0) {
      if (local_1a4 == (GUID *)0x0) {
        FUN_00403cc6(&local_1bc,local_110);
        hKey_01 = local_1bc;
      }
      goto LAB_004043fa;
    }
  }
  else {
LAB_004043fa:
    if (hKey_00 != (HKEY)0x0) {
      RegCloseKey(hKey_00);
    }
  }
  if (hKey_01 != (HKEY)0x0) {
    RegCloseKey(hKey_01);
  }
LAB_00404416:
  FUN_00407d28((int *)&local_1a8);
  FUN_00409fd0(local_c ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040443a */

int __fastcall FUN_0040443a(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int extraout_EDX;
  int *piVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar3 = -0x7ff8ffa9;
  }
  else if (param_4 == (undefined4 *)0x0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    iVar3 = FUN_0040396a(param_3);
    if (iVar3 == 0) {
      for (piVar4 = (int *)(extraout_EDX + 8); *piVar4 != 0; piVar4 = piVar4 + 3) {
        piVar2 = (int *)piVar4[-2];
        if ((piVar2 == (int *)0x0) || (iVar3 = FUN_004037f0(piVar2,param_3), iVar3 != 0)) {
          pcVar1 = (code *)*piVar4;
          if (pcVar1 == (code *)0x1) {
            iVar3 = piVar4[-1];
            goto LAB_00404479;
          }
          (*(code *)PTR_guard_check_icall_0040c1e0)(param_1,param_3,param_4,piVar4[-1]);
          iVar3 = (*pcVar1)();
          if (iVar3 == 0) {
            return 0;
          }
          if ((piVar2 != (int *)0x0) && (iVar3 < 0)) {
            return iVar3;
          }
        }
      }
      iVar3 = -0x7fffbffe;
    }
    else {
      iVar3 = *(int *)(extraout_EDX + 4);
LAB_00404479:
      piVar4 = (int *)(iVar3 + param_1);
      pcVar1 = *(code **)(*piVar4 + 4);
      (*(code *)PTR_guard_check_icall_0040c1e0)(piVar4);
      (*pcVar1)();
      *param_4 = piVar4;
      iVar3 = 0;
    }
  }
  return iVar3;
}



/* Function: FUN_00404500 */

undefined4 FUN_00404500(void)

{
  return 0;
}



/* Function: FUN_00404510 */

void FUN_00404510(void)

{
  return;
}



/* Function: FUN_00404519 */

void FUN_00404519(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*DAT_0040b5ec + 8);
  (*(code *)PTR_guard_check_icall_0040c1e0)();
  (*pcVar1)();
  return;
}



/* Function: FUN_00404540 */

undefined4 FUN_00404540(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  undefined4 *extraout_EDX;
  
  uVar2 = 0x80004003;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    if ((param_2 != 0) &&
       (iVar3 = FUN_0040396a(param_3), param_3 = extraout_ECX, param_4 = extraout_EDX, iVar3 == 0))
    {
      return 0x80040110;
    }
    pcVar1 = *(code **)(param_1 + 0x24);
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_2,param_3,param_4);
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}



/* Function: FUN_00404590 */

undefined4 FUN_00404590(undefined4 param_1,int param_2)

{
  code *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = *(code **)(*DAT_0040b5ec + 8);
  }
  else {
    pcVar1 = *(code **)(*DAT_0040b5ec + 4);
  }
  (*(code *)PTR_guard_check_icall_0040c1e0)();
  (*pcVar1)();
  return 0;
}



/* Function: FUN_004045c7 */

undefined4 __fastcall FUN_004045c7(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_0040462d */

undefined4 __thiscall FUN_0040462d(void *this,int param_1)

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
    uVar2 = FUN_004046c8((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_00404684 */

undefined4 __cdecl FUN_00404684(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_0040471b(param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_004046c8 */

undefined4 __fastcall FUN_004046c8(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_0040471b */

undefined4 __fastcall
FUN_0040471b(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4,va_list param_5)

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



/* Function: FUN_00404770 */

void FUN_00404770(void *param_1,IID *param_2,void **param_3)

{
  QISearch(param_1,(LPCQITAB)&PTR_DAT_004011a0,param_2,param_3);
  return;
}



/* Function: FUN_004047a0 */

int FUN_004047a0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* Function: Release */

/* Library Function - Single Match
    public: virtual unsigned long __stdcall CImageStream::Release(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulong CImageStream::Release(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_stack_00000004;
  
  LOCK();
  piVar1 = in_stack_00000004 + 1;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (in_stack_00000004 != (undefined4 *)0x0)) {
    *in_stack_00000004 = &PTR_FUN_004010d8;
    free(in_stack_00000004);
  }
  return iVar2 - 1U;
}



/* Function: FUN_004047f2 */

void FUN_004047f2(undefined4 param_1,undefined4 param_2,PEVENT_DATA_DESCRIPTOR param_3)

{
  ushort *puVar1;
  uint uVar2;
  ULONG UVar3;
  
  puVar1 = DAT_0040b030;
  *(undefined4 *)((int)&param_3->Ptr + 4) = 0;
  if (puVar1 == (ushort *)0x0) {
    *(undefined4 *)&param_3->Ptr = 0;
    UVar3 = 0;
    uVar2 = 0;
  }
  else {
    *(ushort **)&param_3->Ptr = puVar1;
    uVar2 = (uint)*puVar1;
    UVar3 = 2;
  }
  param_3->Size = uVar2;
  param_3->Reserved = UVar3;
  EventWriteTransfer((REGHANDLE)CONCAT44(DAT_0040b02c,DAT_0040b028),
                     (PCEVENT_DESCRIPTOR)&DAT_00401a98,(LPCGUID)0x0,(LPCGUID)0x0,1,param_3);
  return;
}



/* Function: FUN_00404847 */

wchar_t * __thiscall FUN_00404847(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_0040471b(param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_0040489e */

void __fastcall FUN_0040489e(wchar_t *param_1,int param_2,int param_3)

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
  
  pcVar3 = DAT_0040b52c;
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  iVar5 = param_2;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((pcVar3 != (code *)0x0) && (DAT_0040b53c != '\0')) {
      (*(code *)PTR_guard_check_icall_0040c1e0)(param_3,param_1,param_2);
      (*pcVar3)();
      iVar5 = extraout_EDX;
      if (*param_1 != L'\0') goto LAB_00404af6;
    }
    memset(local_208,0,0x200);
    pcVar3 = DAT_0040b544;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_0040b544 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040c1e0)(*(undefined4 *)(param_3 + 0xc),local_208,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    pwVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_20c = FUN_00404847(pcVar3,param_1,pwVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_20c = FUN_00404847(pcVar3,param_1,pwVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_20c = FUN_00404847(pvVar4,local_20c,pwVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    pwVar2 = FUN_00404847(local_208,local_20c,pwVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (iVar5 = extraout_EDX_00, *(int *)(param_3 + 0x20) != 0)) {
      pwVar2 = FUN_00404847((void *)0x0,pwVar2,pwVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        pwVar2 = FUN_00404847(this,pwVar2,pwVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        pwVar2 = FUN_00404847(pvVar4,pwVar2,pwVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00404847(pvVar4,pwVar2,pwVar1,L"\n");
          iVar5 = extraout_EDX_03;
        }
        else {
          FUN_00404847(pvVar4,pwVar2,pwVar1,L"[%hs]\n");
          iVar5 = extraout_EDX_02;
        }
      }
      else {
        FUN_00404847(pvVar4,pwVar2,pwVar1,L"[%hs(%hs)]\n");
        iVar5 = extraout_EDX_01;
      }
    }
  }
LAB_00404af6:
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,iVar5);
  return;
}



/* Function: FUN_00404b0e */

uint * __thiscall FUN_00404b0e(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00404df1((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00404b32 */

LPVOID __fastcall FUN_00404b32(DWORD param_1,SIZE_T param_2)

{
  FARPROC pFVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  HMODULE hModule;
  
  hHeap = GetProcessHeap();
  pvVar2 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0040b518 == (FARPROC)0x0) {
    if (DAT_0040b588 != '\0') {
      return pvVar2;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0040b518 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0040b588 = '\x01';
    if (DAT_0040b518 == (FARPROC)0x0) {
      DAT_0040b588 = '\x01';
      return pvVar2;
    }
  }
  pFVar1 = DAT_0040b518;
  (*(code *)PTR_guard_check_icall_0040c1e0)(hHeap,pvVar2);
  (*pFVar1)();
  return pvVar2;
}



/* Function: FUN_00404baf */

void __fastcall FUN_00404baf(undefined4 *param_1)

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



/* Function: FUN_00404be6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404be6(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040b578;
  _DAT_0040b57c = param_1;
  LOCK();
  DAT_0040b578 = DAT_0040b578 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404bff */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404bff(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040b594;
  _DAT_0040b51c = param_1;
  LOCK();
  DAT_0040b594 = DAT_0040b594 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404c18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404c18(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040b5fc;
  _DAT_0040b590 = param_1;
  LOCK();
  DAT_0040b5fc = DAT_0040b5fc + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404c40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00404c40(undefined4 param_1)

{
  _DAT_0040b5e4 = param_1;
  return 1;
}



/* Function: FUN_00404c5a */

void FUN_00404c5a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0040b564;
  if (DAT_0040b564 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404c8a */

void __fastcall
FUN_00404c8a(undefined4 param_1,undefined4 param_2,LPCWSTR param_3,uint *param_4,char *param_5,
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
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
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
      FUN_004045c7(param_5,param_6,(int)pcVar5);
      param_2 = extraout_EDX_01;
    }
  }
  else if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00404d70 */

undefined * __fastcall FUN_00404d70(undefined4 param_1,undefined4 param_2)

{
  if (DAT_0040b580 == '\0') {
    FUN_00404c8a(param_1,param_2,(LPCWSTR)FUN_00404c40,(uint *)0x0,&DAT_0040b598,0x40);
    DAT_0040b580 = '\x01';
  }
  return &DAT_0040b598;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00404db0 */

void FUN_00404db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00404df1 */

uint __fastcall FUN_00404df1(uint param_1)

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



/* Function: FUN_00404fc6 */

DWORD __fastcall
FUN_00404fc6(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00408ee8(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  return DVar1;
}



/* Function: FUN_00405002 */

uint __fastcall
FUN_00405002(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00408ee8(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_00405051 */

void __fastcall FUN_00405051(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00405002(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_0040506e */

char * __fastcall FUN_0040506e(char *param_1)

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



/* Function: FUN_0040508c */

int __fastcall FUN_0040508c(short *param_1)

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



/* Function: FUN_004050b4 */

void __thiscall FUN_004050b4(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  HANDLE hHeap;
  int *piVar11;
  char *extraout_EAX;
  char *extraout_EAX_00;
  char *extraout_EAX_01;
  char *extraout_EAX_02;
  char *extraout_EAX_03;
  void *extraout_EAX_04;
  void *extraout_EAX_05;
  int iVar12;
  undefined4 *puVar13;
  void *pvVar14;
  undefined4 *puVar15;
  DWORD dwFlags;
  
  puVar13 = param_1;
  puVar15 = (undefined4 *)this;
  for (iVar12 = 0x16; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar15 = puVar15 + 1;
  }
  iVar12 = FUN_0040508c((short *)param_1[0x12]);
  iVar2 = FUN_0040508c((short *)param_1[0xf]);
  iVar3 = FUN_0040508c((short *)param_1[5]);
  pcVar4 = FUN_0040506e((char *)param_1[0x11]);
  pcVar5 = FUN_0040506e((char *)param_1[0xe]);
  pcVar6 = FUN_0040506e((char *)param_1[0xc]);
  pcVar7 = FUN_0040506e((char *)param_1[9]);
  pcVar8 = FUN_0040506e((char *)param_1[8]);
  pcVar9 = FUN_0040506e((char *)param_1[7]);
  pcVar10 = FUN_0040506e((char *)param_1[0x13]);
  pcVar10 = pcVar4 + iVar12 + iVar2 + iVar3 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 + (int)pcVar8
            + (int)pcVar9 + (int)pcVar10;
  piVar1 = (int *)((int)this + 0x58);
  if ((((int *)*piVar1 == (int *)0x0) || (*(int *)*piVar1 != 1)) ||
     (*(char **)((int)this + 0x5c) < pcVar10)) {
    FUN_00404baf(piVar1);
    if (pcVar10 == (char *)0x0) {
      FUN_00404baf(piVar1);
    }
    else {
      pcVar4 = pcVar10 + 4;
      dwFlags = 0;
      hHeap = GetProcessHeap();
      piVar11 = (int *)HeapAlloc(hHeap,dwFlags,(SIZE_T)pcVar4);
      if (piVar11 != (int *)0x0) {
        *piVar11 = 0;
        FUN_00404baf(piVar1);
        *piVar1 = (int)piVar11;
        *(char **)((int)this + 0x5c) = pcVar10;
        LOCK();
        *piVar11 = *piVar11 + 1;
        UNLOCK();
      }
    }
  }
  pvVar14 = (void *)(-(uint)(*piVar1 != 0) & *piVar1 + 4U);
  pcVar4 = (char *)(-(uint)(pvVar14 != (void *)0x0) & (int)pvVar14 + *(int *)((int)this + 0x5c));
  if (pvVar14 != (void *)0x0) {
    pcVar5 = (char *)FUN_00408f2f(pvVar14,pcVar4,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_00408f9f(pcVar5,pcVar4,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_00408f9f(extraout_EAX,pcVar4,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_00408f9f(extraout_EAX_00,pcVar4,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_00408f9f(extraout_EAX_01,pcVar4,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_00408f9f(extraout_EAX_02,pcVar4,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_00408f9f(extraout_EAX_03,pcVar4,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar5 = (char *)FUN_00408f2f(extraout_EAX_04,pcVar4,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_00408f9f(pcVar5,pcVar4,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar14 = FUN_00408f2f(extraout_EAX_05,pcVar4,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar14,0,(int)pcVar4 - (int)pvVar14);
  }
  return;
}



/* Function: FUN_0040526c */

void __fastcall
FUN_0040526c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
    iVar3 = FUN_00404be6(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_00404bff(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_00408ee8(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar6 = FUN_00404df1(0x8007029c);
      param_15[3] = uVar6;
    }
    iVar3 = FUN_00404c18(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_00404c40(iVar3);
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
  iVar4 = DAT_0040b584 + 1;
  DAT_0040b584 = DAT_0040b584 + 1;
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
  pcVar1 = DAT_0040b568;
  if (DAT_0040b568 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_0040b534;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b54c;
  if (DAT_0040b54c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b548;
  if (DAT_0040b548 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b558;
  if ((DAT_0040b558 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_004056da();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar6 = FUN_00404df1(0x8000ffff);
    param_15[3] = uVar6;
  }
  pcVar1 = DAT_0040b520;
  if (DAT_0040b528 == '\0') {
    if (DAT_0040b520 == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c1e0)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040545d;
  }
  else {
LAB_0040545d:
    pcVar1 = DAT_0040b52c;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_0040b52c != (code *)0x0) && (DAT_0040b53c == '\0')) {
        (*(code *)PTR_guard_check_icall_0040c1e0)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_0040489e(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_004054c6;
    }
  }
  pcVar1 = DAT_0040b52c;
  if ((DAT_0040b52c != (code *)0x0) && (DAT_0040b53c == '\0')) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_15,0,0);
    (*pcVar1)();
  }
LAB_004054c6:
  pcVar1 = DAT_0040b554;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_0040b530 != '\0')) &&
     (DAT_0040b554 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004054fe */

void __fastcall FUN_004054fe(int param_1)

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
  
  pcVar1 = DAT_0040b56c;
  if (DAT_0040b56c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b55c;
  if (DAT_0040b55c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_0040556b;
  uVar3 = 1;
  do {
    FUN_00404c5a(uVar3);
    iVar2 = extraout_ECX;
LAB_0040556b:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_0040558b */

void __fastcall FUN_0040558b(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  FUN_00409002(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004055a7 */

void __fastcall FUN_004055a7(undefined4 param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint local_1c [3];
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  
  puVar2 = FUN_00404b0e((void *)0x8000ffff,local_1c);
  local_10 = *puVar2;
  uStack_c = puVar2[1];
  uStack_8 = puVar2[2];
  FUN_0040558b(param_1,0xc27);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004055e9 */

void __fastcall FUN_004055e9(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00404fc6(param_1,param_2,0x4017c8,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00404b0e(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  FUN_0040558b(local_8,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405646 */

void __fastcall FUN_00405646(undefined4 param_1,undefined4 param_2)

{
  FUN_0040928c(param_1,param_2);
  return;
}



/* Function: FUN_00405663 */

void __fastcall FUN_00405663(int param_1,int param_2)

{
  FUN_004092cd(param_1,param_2);
  return;
}



/* Function: FUN_0040567f */

uint __thiscall FUN_0040567f(void *this,undefined4 param_1,uint param_2)

{
  int unaff_retaddr;
  
  FUN_00408ee8((int)this,0x3be,0x401808,0,0,unaff_retaddr,param_2);
  return param_2;
}



/* Function: FUN_004056aa */

void __fastcall FUN_004056aa(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_004055e9(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004056c2 */

void __fastcall FUN_004056c2(undefined4 param_1)

{
  code *pcVar1;
  
  FUN_004055a7(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004056da */

void FUN_004056da(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004056e6 */

void FUN_004056e6(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_004056aa(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405713 */

void FUN_00405713(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_004056aa(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040573e */

void __thiscall FUN_0040573e(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

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
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_004056da();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004046c8(local_214,0x104,this,param_1);
  FUN_0040462d(local_214,0x401800);
  uVar5 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  iVar3 = FUN_0040803e(this,uVar5,uVar2,local_214);
  uVar4 = extraout_EDX;
  if (iVar3 < 0) {
    FUN_00405646(unaff_retaddr,0x88);
    uVar4 = extraout_EDX_00;
  }
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_004057e1 */

undefined4 __fastcall FUN_004057e1(HANDLE param_1,int *param_2)

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
    goto LAB_00405804;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00405804:
        uVar2 = FUN_00405663(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_004058d2:
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
        goto LAB_00405804;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00405804;
          }
          if (DVar1 == 0) goto LAB_004058d2;
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
  FUN_00405646(unaff_retaddr,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_004058fc */

void __thiscall FUN_004058fc(void *this,int *param_1)

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
  
  local_c = DAT_0040b100 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_004046c8(local_218,0x104,this,(int)this);
  FUN_0040462d(local_218,0x401800);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar4 = extraout_EDX;
    if (DVar2 != 2) {
      FUN_00405663(unaff_retaddr,0xcd);
      uVar4 = extraout_EDX_00;
    }
LAB_004059a2:
    if (pvVar1 == (HANDLE)0x0) goto LAB_004059bc;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_004057e1(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_00405646(unaff_retaddr,0xd3);
      uVar4 = extraout_EDX_01;
      goto LAB_004059a2;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_004056e6(pvVar1);
  uVar4 = extraout_EDX_02;
LAB_004059bc:
  FUN_00409fd0(local_c ^ (uint)auStack_224,uVar4);
  return;
}



/* Function: FUN_004059db */

void __thiscall FUN_004059db(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_0040508c(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_0040506e(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_0040506e(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00404b32(8,(SIZE_T)pcVar4);
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
    FUN_00408f9f(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00408f9f(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_00408f2f(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00405ace */

void __fastcall FUN_00405ace(int param_1)

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



/* Function: FUN_00405b3d */

void __thiscall FUN_00405b3d(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00404b32(8,0xdc);
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
    FUN_004059db(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00405bfb */

DWORD * __fastcall FUN_00405bfb(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_0040b524;
  if (DAT_0040b524 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0040b524[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_004080fc(*DAT_0040b524,&local_8);
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



/* Function: FUN_00405c84 */

void __fastcall FUN_00405c84(undefined4 *param_1)

{
  code *pcVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  undefined1 local_60 [92];
  
  if (param_1[3] == 0) {
    if (DAT_0040b538 == 0) {
      *param_1 = 0;
    }
    else {
      pDVar2 = FUN_00407f67('\x01');
      *param_1 = pDVar2;
      if (pDVar2 != (DWORD *)0x0) {
        param_1[2] = *pDVar2;
        *pDVar2 = (DWORD)param_1;
        DVar3 = GetCurrentThreadId();
        param_1[3] = DVar3;
      }
    }
    return;
  }
  memset(local_60,0,0x58);
  FUN_004054fe((int)local_60);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405ce7 */

void __fastcall FUN_00405ce7(undefined4 *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  void *unaff_retaddr;
  
  DVar2 = GetCurrentThreadId();
  if (param_1[3] != DVar2) {
    FUN_0040567f(unaff_retaddr,extraout_ECX,0x8007029c);
  }
  param_1[3] = 0;
  piVar3 = (int *)*param_1;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 == (undefined4 *)0x0) {
LAB_00405d27:
      *param_1 = 0;
      return;
    }
    if (puVar1 == param_1) {
      *piVar3 = param_1[2];
      goto LAB_00405d27;
    }
    piVar3 = puVar1 + 2;
    *param_1 = piVar3;
  } while( true );
}



/* Function: FUN_00405d34 */

uint __fastcall FUN_00405d34(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00405d34(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0040b144 + 1;
        DAT_0040b144 = DAT_0040b144 + 1;
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



/* Function: FUN_00405df3 */

void __fastcall FUN_00405df3(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  DWORD *pDVar3;
  undefined4 uVar4;
  DWORD DVar5;
  undefined1 local_5;
  
  local_5 = 0;
  *param_2 = '\0';
  if (DAT_0040b538 != 0) {
    pDVar3 = FUN_00407f67('\0');
    if ((pDVar3 == (DWORD *)0x0) || (*pDVar3 == 0)) {
      local_5 = 0;
    }
    else {
      *param_2 = '\0';
      uVar4 = FUN_00405d34(param_1,*pDVar3,param_2,param_3);
      if ((char)uVar4 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar5 = *pDVar3;
      local_5 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar5 + 4);
        (*(code *)PTR_guard_check_icall_0040c1e0)(param_1);
        bVar2 = (*pcVar1)();
        local_5 = local_5 | bVar2;
        DVar5 = *(DWORD *)(DVar5 + 8);
      } while (DVar5 != 0);
    }
  }
  pcVar1 = DAT_0040b540;
  if (DAT_0040b540 != (code *)0x0) {
    if ((local_5 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    (*(code *)PTR_guard_check_icall_0040c1e0)(uVar4,param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00405eb0 */

void FUN_00405eb0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00405df3((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_0040b5e8 != DVar2) {
    LOCK();
    iVar1 = DAT_0040b600 + 1;
    UNLOCK();
    iVar3 = DAT_0040b600 + 1;
    DAT_0040b600 = iVar1;
    if (iVar3 < 4) {
      DAT_0040b5e8 = DVar2;
      this = FUN_00405bfb(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00405b3d(this,param_1);
      }
      DAT_0040b5e8 = 0;
    }
    LOCK();
    DAT_0040b600 = DAT_0040b600 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00405f15 */

void __fastcall FUN_00405f15(LPCSTR param_1)

{
  if (DAT_0040b58c == (HMODULE)0x0) {
    DAT_0040b58c = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_0040b58c,param_1);
  return;
}



/* Function: FUN_00405f50 */

void FUN_00405f50(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0040b58c == (HMODULE)0x0) {
    DAT_0040b58c = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0040b58c,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00405fa0 */

undefined4 FUN_00405fa0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_0040b5e0 == (code *)0x0) {
    DAT_0040b5e0 = (code *)FUN_00405f15("RtlDllShutdownInProgress");
    if (DAT_0040b5e0 == (code *)0x0) {
      return 0;
    }
  }
  pcVar1 = DAT_0040b5e0;
  (*(code *)PTR_guard_check_icall_0040c1e0)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00405fe0 */

void FUN_00405fe0(undefined1 *param_1)

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
  
  pFVar1 = DAT_0040b574;
  local_18 = 0;
  local_c = 0;
  local_28 = *(undefined4 *)(param_1 + 8);
  local_24 = *(undefined4 *)(param_1 + 0x14);
  local_20 = *param_1;
  local_1e = DAT_0040b570;
  local_1c = *(undefined2 *)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  if (DAT_0040b574 == (FARPROC)0x0) {
    if (DAT_0040b5d8 == (HMODULE)0x0) {
      DAT_0040b5d8 = GetModuleHandleW(L"kernelbase.dll");
      if (DAT_0040b5d8 != (HMODULE)0x0) goto LAB_0040604f;
    }
    else {
LAB_0040604f:
      pFVar1 = GetProcAddress(DAT_0040b5d8,"WilFailureNotifyWatchers");
    }
    DAT_0040b574 = pFVar1;
    if (pFVar1 == (FARPROC)0x0) goto LAB_0040607b;
  }
  pFVar1 = DAT_0040b574;
  (*(code *)PTR_guard_check_icall_0040c1e0)(0,&local_28,&local_c);
  (*pFVar1)();
LAB_0040607b:
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



/* Function: FUN_004060b0 */

void __fastcall FUN_004060b0(int param_1)

{
  LPVOID lpMem;
  HANDLE hHeap;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    lpMem = *(LPVOID *)(param_1 + 8);
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_00406100 */

void __thiscall FUN_00406100(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_00406170(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00406269(this,param_2);
    }
  }
  return;
}



/* Function: FUN_0040613d */

void __fastcall FUN_0040613d(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_00401008;
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



/* Function: FUN_00406170 */

void __thiscall FUN_00406170(void *this,undefined4 *param_1)

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
    uVar1 = FUN_00402cd8(this_00,0,0x2000);
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
      FUN_00402d1b((int)this_00,&DAT_0040207b,0x1000000,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00406269 */

void __thiscall FUN_00406269(void *this,undefined4 *param_1)

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
    FUN_00402ed6((int)*(uint **)((int)this + 4),&DAT_00402302,(LPCGUID)0x0,param_1,&local_4c,
                 &local_48,&local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                 &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,
                 &local_8);
  }
  return;
}



/* Function: FUN_00406360 */

undefined4 __thiscall FUN_00406360(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_0040b148 != iVar1;
  iVar3 = DAT_0040b148;
  DAT_0040b148 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_0040c1e0)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_004063a0 */

undefined4 * __thiscall FUN_004063a0(void *this,byte param_1)

{
  FUN_0040613d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004063c7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004063c7(void)

{
  BOOL BVar1;
  undefined *local_18;
  int local_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b664,0,&local_14,&local_18);
  if ((BVar1 != 0) && (local_14 != 0)) {
    puStack_10 = &DAT_0040b664;
    local_18 = &DAT_0040b668;
    _DAT_0040b66c = 0;
    DAT_0040b670 = 0;
    _DAT_0040b674 = 0;
    _DAT_0040b668 = &PTR_FUN_00401008;
    _DAT_0040b678 = &DAT_0040b060;
    FUN_0040a2f6(FUN_00406460);
    uStack_c = 0;
    FUN_004082fa((int *)&puStack_10);
  }
  return local_18;
}



/* Function: FUN_00406460 */

void FUN_00406460(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b664,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0040c1e0)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004064a8 */

void __fastcall FUN_004064a8(int *param_1)

{
  PREGHANDLE RegHandle;
  PVOID CallbackContext;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  undefined4 extraout_EDX;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
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
  UVar3 = EventRegister(&local_18,FUN_00402bc0,CallbackContext,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)CallbackContext + 0x1c),2,
                        *(undefined2 **)((int)CallbackContext + 4),
                        **(undefined2 **)((int)CallbackContext + 4));
  }
  param_1[3] = 1;
  pcVar2 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_0040c1e0)();
  (*pcVar2)();
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040654a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040654a(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b650,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_0040b650;
    local_8 = &DAT_0040b654;
    _DAT_0040b658 = 0;
    DAT_0040b65c = 0;
    _DAT_0040b660 = 0;
    _DAT_0040b654 = &PTR_FUN_00401008;
    FUN_0040a2f6(FUN_004065c0);
    local_10 = 0;
    FUN_00408327((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_004065c0 */

void FUN_004065c0(void)

{
  BOOL BVar1;
  undefined4 *local_c;
  int local_8;
  
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b650,1,&local_8,&local_c);
  if ((BVar1 != 0) && (local_8 == 0)) {
    FUN_0040613d(local_c);
  }
  return;
}



/* Function: FUN_00406600 */

void __fastcall FUN_00406600(PSRWLOCK param_1)

{
  PVOID pvVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar4;
  undefined4 extraout_EDX_03;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined4 *local_60;
  _EVENT_DATA_DESCRIPTOR local_5c [2];
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  pvVar1 = param_1[0x2a].Ptr;
  if (((*(int *)((int)pvVar1 + 0x38) < 0) &&
      (*(int *)((int)pvVar1 + 0x38) == *(int *)((int)pvVar1 + 0x44))) &&
     ((undefined4 *)((int)pvVar1 + 0x3c) != (undefined4 *)0x0)) {
    FUN_00407de3(param_1);
    puVar3 = FUN_004063c7();
    puVar2 = *(uint **)(puVar3 + 4);
    uVar4 = extraout_EDX;
    if (5 < *puVar2) {
      local_68 = *(undefined4 *)((int)pvVar1 + 0x5c);
      local_6c = *(undefined4 *)((int)pvVar1 + 0x68);
      local_70 = *(undefined4 *)((int)pvVar1 + 0x4c);
      local_74 = *(undefined4 *)((int)pvVar1 + 0x84);
      local_78 = *(undefined4 *)((int)pvVar1 + 0x80);
      local_7c = *(undefined4 *)((int)pvVar1 + 0x7c);
      local_80 = *(undefined4 *)((int)pvVar1 + 0x78);
      local_84 = *(undefined4 *)((int)pvVar1 + 0x74);
      local_88 = *(undefined4 *)((int)pvVar1 + 0x70);
      local_8c = *(undefined4 *)((int)pvVar1 + 0x6c);
      local_90 = *(undefined4 *)((int)pvVar1 + 0x54);
      local_94 = *(undefined4 *)((int)pvVar1 + 0x50);
      local_98 = *(undefined4 *)((int)pvVar1 + 0x3c);
      local_9c = *(undefined4 *)((int)pvVar1 + 0x88);
      local_a0 = *(undefined4 *)((int)pvVar1 + 100);
      local_a4 = *(undefined4 *)((int)pvVar1 + 0x60);
      local_a8 = *(undefined4 *)((int)pvVar1 + 0x44);
      local_60 = &local_b4;
      local_b4 = 0x1000000;
      local_b0 = 0;
      local_64 = &DAT_00401aa8;
      FUN_004030d7((int)puVar2,&DAT_004025ec,(LPCGUID)((int)param_1[0x2a].Ptr + 8),puVar2,&local_64,
                   &local_60,&local_a8,&local_a4,&local_a0,&local_9c,&local_98,&local_94,&local_90,
                   &local_8c,&local_88,&local_84,&local_80,&local_7c,&local_78,&local_74,&local_70,
                   &local_6c,&local_68);
      uVar4 = extraout_EDX_00;
    }
  }
  else {
    FUN_00407de3(param_1);
    puVar3 = FUN_004063c7();
    puVar2 = *(uint **)(puVar3 + 4);
    uVar4 = extraout_EDX_01;
    if (5 < *puVar2) {
      local_64 = (undefined *)GetCurrentThreadId();
      local_60 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
      local_1c = &local_64;
      local_2c = &local_60;
      local_18 = 0;
      local_14 = 4;
      local_10 = 0;
      local_28 = 0;
      local_24 = 4;
      local_20 = 0;
      local_3c = &DAT_00401aa8;
      local_38 = 0;
      local_34 = 8;
      local_30 = 0;
      FUN_00402c43((int)puVar2,&DAT_00401f42,(LPCGUID)((int)param_1[0x2a].Ptr + 8),(LPCGUID)0x0,5,
                   local_5c);
      uVar4 = extraout_EDX_02;
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_00405ce7(param_1 + 0x2c);
    uVar4 = extraout_EDX_03;
  }
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00406820 */

bool FUN_00406820(int param_1)

{
  bool bVar1;
  
  bVar1 = DAT_0040b148 == param_1;
  DAT_0040b148 = param_1;
  return bVar1;
}



/* Function: FUN_00406841 */

void __fastcall FUN_00406841(PSRWLOCK param_1)

{
  PSRWLOCK pRVar1;
  code *pcVar2;
  bool bVar3;
  PSRWLOCK local_c [2];
  
  bVar3 = true;
  pRVar1 = param_1 + 0x2b;
  param_1->Ptr = &PTR_FUN_004010cc;
  local_c[0] = param_1;
  if (pRVar1->Ptr != (PVOID)0x0) {
    FUN_0040877d(param_1,local_c);
                    /* WARNING: Load size is inaccurate */
    if (((int *)pRVar1->Ptr == (int *)0x0) || (*pRVar1->Ptr != 1)) {
      bVar3 = false;
      FUN_004086e4(pRVar1);
    }
    if (local_c[0] != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_c[0]);
    }
    if (!bVar3) goto LAB_004068b6;
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_1[0x2a].Ptr == 1) {
    FUN_0040871a((int)param_1[0x2a].Ptr);
    pcVar2 = *(code **)((int)param_1->Ptr + 4);
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    (*pcVar2)();
  }
LAB_004068b6:
  FUN_00406dc6((int)param_1);
  return;
}



/* Function: FUN_004068ca */

void __thiscall
FUN_004068ca(void *this,PSRWLOCK param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined *puVar4;
  LPCGUID pGVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  undefined1 auStack_8c [4];
  PSRWLOCK local_88;
  DWORD DStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  _EVENT_DATA_DESCRIPTOR a_Stack_70 [2];
  undefined *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  DWORD *pDStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  PSRWLOCK *ppRStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_c;
  
  local_c = DAT_0040b100 ^ (uint)auStack_8c;
  local_80 = param_2;
  uStack_7c = param_3;
  uStack_78 = param_4;
  uStack_74 = param_5;
  FUN_0040877d(this,&local_88);
  puVar1 = *(undefined4 **)((int)this + 0xa8);
  puVar4 = FUN_004063c7();
  if (**(uint **)(puVar4 + 4) < 6) {
    ((LPGUID)(puVar1 + 2))->Data1 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  else {
    EventActivityIdControl(3,(LPGUID)(puVar1 + 2));
  }
  *puVar1 = 1;
  if (local_88 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_88);
  }
  puVar4 = FUN_004063c7();
  puVar2 = *(uint **)(puVar4 + 4);
  uVar6 = extraout_EDX;
  if (5 < *puVar2) {
    local_88 = param_1;
    DStack_84 = GetCurrentThreadId();
    iVar3 = *(int *)((int)this + 0xa8);
    if ((*(char *)(iVar3 + 4) == '\0') ||
       ((((pGVar5 = (LPCGUID)(iVar3 + 0x18), pGVar5->Data1 == 0 && (*(int *)(iVar3 + 0x1c) == 0)) &&
         (*(int *)(iVar3 + 0x20) == 0)) && (*(int *)(iVar3 + 0x24) == 0)))) {
      pGVar5 = (LPCGUID)0x0;
    }
    uStack_24 = 0;
    puStack_20 = &local_80;
    uStack_3c = 0;
    ppRStack_30 = &local_88;
    pDStack_40 = &DStack_84;
    uStack_1c = 0;
    uStack_14 = 0;
    uStack_2c = 0;
    uStack_28 = 4;
    uStack_38 = 4;
    uStack_18 = 0x10;
    uStack_34 = 0;
    puStack_50 = &DAT_00401aa8;
    uStack_4c = 0;
    uStack_48 = 8;
    uStack_44 = 0;
    FUN_00402c43((int)puVar2,&DAT_0040200f,(LPCGUID)(iVar3 + 8),pGVar5,6,a_Stack_70);
    uVar6 = extraout_EDX_00;
  }
  if (*(int *)((int)this + 0xbc) == 0) {
    FUN_00405c84((undefined4 *)((int)this + 0xb0));
    uVar6 = extraout_EDX_01;
  }
  FUN_00409fd0(local_c ^ (uint)auStack_8c,uVar6);
  return;
}



/* Function: FUN_00406a35 */

void __thiscall
FUN_00406a35(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,undefined *param_6)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar4;
  undefined4 extraout_EDX_03;
  undefined1 auStack_104 [4];
  undefined4 local_100;
  DWORD local_fc;
  undefined4 *local_f8;
  undefined *local_f4;
  undefined *local_f0;
  undefined4 *local_ec;
  undefined4 *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  _EVENT_DATA_DESCRIPTOR a_Stack_90 [2];
  undefined *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  DWORD *pDStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_c;
  
  local_c = DAT_0040b100 ^ (uint)auStack_104;
  local_a0 = param_2;
  iVar1 = *(int *)((int)this + 0xa8);
  uStack_9c = param_3;
  uStack_98 = param_4;
  uStack_94 = param_5;
  if (((*(int *)(iVar1 + 0x38) < 0) && (*(int *)(iVar1 + 0x38) == *(int *)(iVar1 + 0x44))) &&
     ((undefined4 *)(iVar1 + 0x3c) != (undefined4 *)0x0)) {
    FUN_00407de3((PSRWLOCK)this);
    puVar3 = FUN_004063c7();
    puVar2 = *(uint **)(puVar3 + 4);
    uVar4 = extraout_EDX;
    if (5 < *puVar2) {
      local_f0 = param_6;
      local_ec = &local_a0;
      local_e8 = param_1;
      local_e4 = *(undefined4 *)(iVar1 + 0x5c);
      local_e0 = *(undefined4 *)(iVar1 + 0x68);
      local_dc = *(undefined4 *)(iVar1 + 0x4c);
      local_d8 = *(undefined4 *)(iVar1 + 0x84);
      local_d4 = *(undefined4 *)(iVar1 + 0x80);
      local_d0 = *(undefined4 *)(iVar1 + 0x7c);
      local_cc = *(undefined4 *)(iVar1 + 0x78);
      local_c8 = *(undefined4 *)(iVar1 + 0x74);
      local_c4 = *(undefined4 *)(iVar1 + 0x70);
      local_c0 = *(undefined4 *)(iVar1 + 0x6c);
      local_bc = *(undefined4 *)(iVar1 + 0x54);
      local_b8 = *(undefined4 *)(iVar1 + 0x50);
      local_b4 = *(undefined4 *)(iVar1 + 0x3c);
      local_b0 = *(undefined4 *)(iVar1 + 0x88);
      local_ac = *(undefined4 *)(iVar1 + 100);
      local_100 = *(undefined4 *)(iVar1 + 0x60);
      local_fc = *(DWORD *)(iVar1 + 0x44);
      local_f8 = &local_a8;
      local_a8 = 0x1000000;
      local_a4 = 0;
      local_f4 = &DAT_00401aa8;
      FUN_004032f4((int)puVar2,&DAT_00402438,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),puVar2,
                   &local_f4,&local_f8,&local_fc,&local_100,&local_ac,&local_b0,&local_b4,&local_b8,
                   &local_bc,&local_c0,&local_c4,&local_c8,&local_cc,&local_d0,&local_d4,&local_d8,
                   &local_dc,&local_e0,&local_e4,&local_e8,&local_ec,&local_f0);
      uVar4 = extraout_EDX_00;
    }
  }
  else {
    FUN_00407de3((PSRWLOCK)this);
    puVar3 = FUN_004063c7();
    puVar2 = *(uint **)(puVar3 + 4);
    uVar4 = extraout_EDX_01;
    if (5 < *puVar2) {
      local_f4 = param_6;
      local_f8 = param_1;
      local_fc = GetCurrentThreadId();
      local_100 = *(undefined4 *)(*(int *)((int)this + 0xa8) + 0x38);
      ppuStack_20 = &local_f4;
      puStack_30 = &local_a0;
      ppuStack_40 = &local_f8;
      pDStack_50 = &local_fc;
      puStack_60 = &local_100;
      uStack_18 = 4;
      uStack_38 = 4;
      uStack_48 = 4;
      uStack_58 = 4;
      uStack_1c = 0;
      uStack_14 = 0;
      uStack_2c = 0;
      uStack_28 = 0x10;
      uStack_24 = 0;
      uStack_3c = 0;
      uStack_34 = 0;
      uStack_4c = 0;
      uStack_44 = 0;
      uStack_5c = 0;
      uStack_54 = 0;
      puStack_70 = &DAT_00401aa8;
      uStack_6c = 0;
      uStack_68 = 8;
      uStack_64 = 0;
      FUN_00402c43((int)puVar2,&DAT_00401f96,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),(LPCGUID)0x0,
                   8,a_Stack_90);
      uVar4 = extraout_EDX_02;
    }
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    FUN_00405ce7((undefined4 *)((int)this + 0xb0));
    uVar4 = extraout_EDX_03;
  }
  FUN_00409fd0(local_c ^ (uint)auStack_104,uVar4);
  return;
}



/* Function: FUN_00406d32 */

void FUN_00406d32(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  _EVENT_DATA_DESCRIPTOR local_5c [2];
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [4];
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  puVar2 = FUN_004063c7();
  puVar1 = *(uint **)(puVar2 + 4);
  uVar3 = extraout_EDX;
  if (5 < *puVar1) {
    local_60 = param_2;
    local_64 = param_1;
    local_1c = &local_6c;
    local_6c = 0x1000000;
    local_68 = 0;
    local_18 = 0;
    local_14 = 8;
    local_10 = 0;
    FUN_004035c0(&local_60,local_2c);
    local_3c = &local_64;
    local_38 = 0;
    local_34 = 4;
    local_30 = 0;
    FUN_00402c43((int)puVar1,&DAT_00401eee,(LPCGUID)0x0,(LPCGUID)0x0,5,local_5c);
    uVar3 = extraout_EDX_00;
  }
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00406dc6 */

void __fastcall FUN_00406dc6(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_00405ce7((undefined4 *)(param_1 + 0xb0));
  }
  FUN_004086e4((undefined4 *)(param_1 + 0xac));
  FUN_00406df6((int *)(param_1 + 4));
  return;
}



/* Function: FUN_00406df6 */

void __fastcall FUN_00406df6(int *param_1)

{
  FUN_00404baf(param_1 + 0x25);
  FUN_004060b0((int)(param_1 + 10));
  FUN_00407db3(param_1);
  return;
}



/* Function: FUN_00406e20 */

void __thiscall FUN_00406e20(void *this,HANDLE param_1)

{
  HRESULT HVar1;
  HANDLE hProcess;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  LPWSTR local_9cc;
  HREPORT local_9c8;
  _WER_REPORT_INFORMATION local_9c4;
  _EVENT_DATA_DESCRIPTOR local_130;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [184];
  OLECHAR local_58 [40];
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  if ((DAT_0040b640 & 1) != 0) {
    FUN_004047f2(this,this,&local_130);
  }
  local_9c4.dwSize = 0x894;
  memset(&local_9c4.hProcess,0,0x890);
  GetModuleFileNameW((HMODULE)0x0,local_9c4.wzApplicationPath,0x104);
  FUN_004046c8(local_9c4.wzApplicationName,0x80,extraout_ECX,0x401898);
  local_9cc = PathFindFileNameW(local_9c4.wzApplicationPath);
  local_120 = DAT_004018b8;
  uStack_11c = DAT_004018bc;
  uStack_118 = DAT_004018c0;
  uStack_114 = DAT_004018c4;
  memset(local_110,0,0xb8);
  StringFromGUID2((GUID *)&DAT_0040b680,local_58,0x27);
  FUN_00409322();
  HVar1 = WerReportCreate(L"ShellThumbnailExtractionTimeout",WerReportCritical,&local_9c4,&local_9c8
                         );
  uVar2 = extraout_EDX;
  if (-1 < HVar1) {
    HVar1 = WerReportSetParameter(local_9c8,0,L"AppName",local_9cc);
    if (-1 < HVar1) {
      HVar1 = WerReportSetParameter(local_9c8,1,L"AppVersion",(PCWSTR)&local_120);
      if (-1 < HVar1) {
        HVar1 = WerReportSetParameter(local_9c8,2,L"Clsid",local_58);
        if (-1 < HVar1) {
          hProcess = GetCurrentProcess();
          HVar1 = WerReportAddDump(local_9c8,hProcess,param_1,WerDumpTypeMiniDump,
                                   (PWER_EXCEPTION_INFORMATION)0x0,(PWER_DUMP_CUSTOM_OPTIONS)0x0,0);
          if (-1 < HVar1) {
            WerReportSubmit(local_9c8,WerConsentNotAsked,0x24,(PWER_SUBMIT_RESULT)&local_9cc);
          }
        }
      }
    }
    WerReportCloseHandle(local_9c8);
    uVar2 = extraout_EDX_00;
  }
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_00406fc0 */

HRESULT FUN_00406fc0(void *param_1,IID *param_2,void **param_3)

{
  code *pcVar1;
  HRESULT HVar2;
  int iVar3;
  void *local_c;
  void *local_8;
  
  HVar2 = QISearch(param_1,(LPCQITAB)&PTR_DAT_00401148,param_2,param_3);
  if (-1 < HVar2) {
    pcVar1 = *(code **)**(undefined4 **)((int)param_1 + 0x18);
    (*(code *)PTR_guard_check_icall_0040c1e0)
              (*(undefined4 **)((int)param_1 + 0x18),param_2,&local_8);
    iVar3 = (*pcVar1)();
    if (iVar3 < 0) {
      local_8 = *param_3;
      HVar2 = -0x7fffbffe;
      *param_3 = (void *)0x0;
    }
    local_c = local_8;
    FUN_00407d28((int *)&local_c);
  }
  return HVar2;
}



/* Function: FUN_00407030 */

int FUN_00407030(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x1c);
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
  piVar1 = param_1 + 7;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (int *)0x0)) {
    pcVar3 = *(code **)(*param_1 + 0x10);
    (*(code *)PTR_guard_check_icall_0040c1e0)(1);
    (*pcVar3)();
  }
  return iVar2 + -1;
}



/* Function: FUN_00407090 */

undefined4 FUN_00407090(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int *local_c [2];
  
  puVar4 = FUN_0040654a();
  if ((*(int **)(puVar4 + 4) != (int *)0x0) && (**(int **)(puVar4 + 4) != 0)) {
    FUN_0040654a();
    FUN_00406d32(param_1 + -0xc,param_2);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  local_c[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    (*(code *)PTR_guard_check_icall_0040c1e0)(puVar1,&DAT_00401b30,local_c);
    (*(code *)*puVar2)();
    if (local_c[0] != (int *)0x0) {
      pcVar3 = *(code **)(*local_c[0] + 0xc);
      (*(code *)PTR_guard_check_icall_0040c1e0)(local_c[0],param_2,param_3);
      uVar5 = (*pcVar3)();
      goto LAB_0040710b;
    }
  }
  uVar5 = 0x80004002;
LAB_0040710b:
  FUN_00407d28((int *)local_c);
  return uVar5;
}



/* Function: FUN_00407130 */

undefined4 FUN_00407130(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int local_c;
  int *local_8;
  
  local_c = param_1 + -8;
  FUN_004093ce(&local_c);
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  local_8 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    (*(code *)PTR_guard_check_icall_0040c1e0)(puVar1,&DAT_00401b40,&local_8);
    (*(code *)*puVar2)();
    if (local_8 != (int *)0x0) {
      pcVar3 = *(code **)(*local_8 + 0xc);
      (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2,param_3);
      uVar4 = (*pcVar3)();
      goto LAB_00407190;
    }
  }
  uVar4 = 0x80004002;
LAB_00407190:
  FUN_00407d28((int *)&local_8);
  return uVar4;
}



/* Function: FUN_004071b0 */

undefined4 FUN_004071b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *local_8;
  
  local_8 = (int *)0x0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    (*(code *)PTR_guard_check_icall_0040c1e0)(puVar1,&DAT_00401ad0,&local_8);
    (*(code *)*puVar2)();
    if (local_8 != (int *)0x0) {
      pcVar3 = *(code **)(*local_8 + 0xc);
      (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2);
      uVar4 = (*pcVar3)();
      goto LAB_004071fe;
    }
  }
  uVar4 = 0x80004002;
LAB_004071fe:
  FUN_00407d28((int *)&local_8);
  return uVar4;
}



/* Function: FUN_00407220 */

undefined4 FUN_00407220(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *local_8;
  
  FUN_00407d7d(&local_8,*(undefined4 **)(param_1 + 8));
  if (local_8 == (int *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0x10);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8);
    uVar2 = (*pcVar1)();
  }
  FUN_00407d28((int *)&local_8);
  return uVar2;
}



/* Function: FUN_00407270 */

undefined4 FUN_00407270(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int *local_8;
  
  FUN_00407d7d(&local_8,*(undefined4 **)(param_1 + 4));
  if (local_8 == (int *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0x14);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2,param_3);
    uVar2 = (*pcVar1)();
  }
  FUN_00407d28((int *)&local_8);
  return uVar2;
}



/* Function: FUN_004072c0 */

undefined4 FUN_004072c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int *local_8;
  
  FUN_00407d7d(&local_8,*(undefined4 **)(param_1 + 4));
  if (local_8 == (int *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0x18);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2,param_3);
    uVar2 = (*pcVar1)();
  }
  FUN_00407d28((int *)&local_8);
  return uVar2;
}



/* Function: FUN_00407310 */

undefined4 FUN_00407310(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *local_8;
  
  FUN_00407d7d(&local_8,*(undefined4 **)(param_1 + 4));
  if (local_8 == (int *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0x1c);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2);
    uVar2 = (*pcVar1)();
  }
  FUN_00407d28((int *)&local_8);
  return uVar2;
}



/* Function: FUN_00407360 */

undefined4 FUN_00407360(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *local_8;
  
  FUN_00407d7d(&local_8,*(undefined4 **)(param_1 + 4));
  if (local_8 == (int *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0x20);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2);
    uVar2 = (*pcVar1)();
  }
  FUN_00407d28((int *)&local_8);
  return uVar2;
}



/* Function: FUN_004073b0 */

undefined4 FUN_004073b0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *local_8;
  
  FUN_00407d47(&local_8,*(undefined4 **)(param_1 + 8));
  if (local_8 == (int *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0x14);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2);
    uVar2 = (*pcVar1)();
  }
  FUN_00407d28((int *)&local_8);
  return uVar2;
}



/* Function: FUN_00407400 */

undefined4 FUN_00407400(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int *local_8;
  
  FUN_00407d47(&local_8,*(undefined4 **)(param_1 + 8));
  if (local_8 == (int *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0x18);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2,param_3);
    uVar2 = (*pcVar1)();
  }
  FUN_00407d28((int *)&local_8);
  return uVar2;
}



/* Function: FUN_00407450 */

undefined4 FUN_00407450(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *local_8;
  
  FUN_00407d47(&local_8,*(undefined4 **)(param_1 + 8));
  if (local_8 == (int *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0x1c);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2);
    uVar2 = (*pcVar1)();
  }
  FUN_00407d28((int *)&local_8);
  return uVar2;
}



/* Function: FUN_004074a0 */

undefined4 FUN_004074a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int local_c;
  int *local_8;
  
  local_c = param_1 + -4;
  FUN_00409425(&local_c);
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  local_8 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    (*(code *)PTR_guard_check_icall_0040c1e0)(puVar1,&DAT_00401af0,&local_8);
    (*(code *)*puVar2)();
    if (local_8 != (int *)0x0) {
      pcVar3 = *(code **)(*local_8 + 0xc);
      (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,param_2,param_3);
      uVar4 = (*pcVar3)();
      goto LAB_00407500;
    }
  }
  uVar4 = 0x80004002;
LAB_00407500:
  FUN_00407d28((int *)&local_8);
  return uVar4;
}



/* Function: FUN_00407515 */

void __fastcall FUN_00407515(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401018;
  param_1[1] = &PTR_FUN_00401110;
  param_1[2] = &PTR_FUN_00401050;
  param_1[3] = &PTR_FUN_00401040;
  param_1[4] = &PTR_FUN_00401060;
  param_1[5] = &PTR_FUN_004010a8;
  FUN_00407d28(param_1 + 6);
  return;
}



/* Function: FUN_00407550 */

undefined4 * __thiscall FUN_00407550(void *this,byte param_1)

{
  FUN_00407515((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407577 */

DWORD __fastcall FUN_00407577(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = param_1;
  if (DAT_0040b5dc != '\0') {
    iVar4 = 0;
    do {
      DVar5 = 0;
      if ((&DAT_0040b680)[iVar4] != (&DAT_004014e8)[iVar4]) goto LAB_004075b9;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    DVar5 = 0x8004b202;
LAB_004075b9:
    if ((int)DVar5 < 0) {
      return DVar5;
    }
    local_c = (undefined4 *)0x4;
    local_8 = param_1;
    uVar2 = RegGetValueW((HKEY)0x80000001,
                         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\ThumbnailCache",
                         L"ExtractionTimeoutInMS",0x10,(LPDWORD)0x0,&local_8,(LPDWORD)&local_c);
    uVar3 = uVar2 & 0xffff | 0x80070000;
    if ((int)uVar2 < 1) {
      uVar3 = uVar2;
    }
    if ((int)uVar3 < 0) {
      local_8 = (undefined4 *)0xea60;
    }
    DVar5 = FUN_00409a5b(param_1 + 0xc,(uint)local_8);
    if ((int)DVar5 < 0) {
      return DVar5;
    }
  }
  local_8 = (undefined4 *)0x0;
  DVar5 = CoCreateInstance((IID *)(param_1 + 8),(LPUNKNOWN)0x0,1,(IID *)&DAT_00401b20,&local_8);
  if (-1 < (int)DVar5) {
    pcVar1 = *(code **)*local_8;
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,&DAT_00401ac0,param_1 + 6);
    DVar5 = (*pcVar1)();
  }
  FUN_00407d28((int *)&local_8);
  return DVar5;
}



/* Function: FUN_00407670 */

void FUN_00407670(PSRWLOCK param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  PSRWLOCK pRVar4;
  undefined *puVar5;
  undefined4 extraout_EDX;
  int *local_d8;
  PSRWLOCK local_d4;
  undefined4 *local_d0;
  RTL_SRWLOCK local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_a0;
  char *local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined1 local_8c [88];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  RTL_SRWLOCK *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  local_d4 = param_1;
  local_d0 = param_3;
  local_c8 = 0;
  local_c4 = 0;
  local_94 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_34 = 0;
  local_30 = 0;
  local_9c = "GetThumbnailWrapper";
  memset(local_8c,0,0x58);
  pRVar4 = local_d4;
  local_24 = &local_c8;
  local_2c = 1;
  local_18 = &local_cc;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = &local_a0;
  local_cc.Ptr = &PTR_FUN_004010cc;
  FUN_004068ca(local_18,local_d4,param_1[8].Ptr,param_1[9].Ptr,param_1[10].Ptr,param_1[0xb].Ptr);
  local_d8 = (int *)0x0;
  *local_d0 = 0;
  *param_4 = 0;
  puVar1 = (undefined4 *)pRVar4[6].Ptr;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    (*(code *)PTR_guard_check_icall_0040c1e0)(puVar1,&DAT_00401b20,&local_d8);
    (*(code *)*puVar2)();
  }
  pcVar3 = *(code **)(*local_d8 + 0xc);
  (*(code *)PTR_guard_check_icall_0040c1e0)(local_d8,param_2,local_d0,param_4);
  puVar5 = (undefined *)(*pcVar3)();
  local_d0 = (undefined4 *)puVar5;
  FUN_00409b21(local_d4 + 0xc);
  FUN_00406a35(&local_cc,local_d4,param_1[8].Ptr,param_1[9].Ptr,param_1[10].Ptr,param_1[0xb].Ptr,
               puVar5);
  FUN_00407d28((int *)&local_d8);
  FUN_00406841(&local_cc);
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00407806 */

DWORD __fastcall FUN_00407806(IID *param_1,LPUNKNOWN param_2,IID *param_3,LPVOID *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  DWORD DVar3;
  void *this;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  *param_4 = (LPVOID)0x0;
  if (param_2 == (LPUNKNOWN)0x0) {
    this = (void *)FUN_0040a1ea(0x3c);
    if (this != (void *)0x0) {
      uVar1._0_2_ = param_1->Data2;
      uVar1._2_2_ = param_1->Data3;
      piVar4 = FUN_004078ab(this,param_1->Data1,uVar1,*(undefined4 *)param_1->Data4,
                            *(undefined4 *)(param_1->Data4 + 4));
      if (piVar4 != (int *)0x0) {
        DVar3 = FUN_00407577(piVar4);
        if (-1 < (int)DVar3) {
          pcVar2 = *(code **)*piVar4;
          (*(code *)PTR_guard_check_icall_0040c1e0)(piVar4,param_3,param_4);
          DVar3 = (*pcVar2)();
        }
        pcVar2 = *(code **)(*piVar4 + 8);
        (*(code *)PTR_guard_check_icall_0040c1e0)(piVar4);
        (*pcVar2)();
        goto LAB_00407894;
      }
    }
    DVar3 = 0x8007000e;
  }
  else {
    DVar3 = CoCreateInstance(param_1,param_2,1,param_3,param_4);
  }
LAB_00407894:
  FUN_00407d28(&local_8);
  return DVar3;
}



/* Function: FUN_004078ab */

undefined4 * __thiscall
FUN_004078ab(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined ***)this = &PTR_FUN_00401080;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined ***)((int)this + 4) = &PTR_FUN_00401110;
  *(undefined ***)((int)this + 8) = &PTR_FUN_00401050;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00401040;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_00401060;
  *(undefined ***)((int)this + 0x14) = &PTR_FUN_004010a8;
  *(undefined4 *)((int)this + 0x28) = param_3;
  *(undefined4 *)((int)this + 0x2c) = param_4;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  DAT_0040b680 = param_1;
  DAT_0040b684 = param_2;
  DAT_0040b688 = param_3;
  DAT_0040b68c = param_4;
  return (undefined4 *)this;
}



/* Function: FUN_00407914 */

void __fastcall FUN_00407914(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401080;
  param_1[1] = &PTR_FUN_00401110;
  param_1[2] = &PTR_FUN_00401050;
  param_1[3] = &PTR_FUN_00401040;
  param_1[4] = &PTR_FUN_00401060;
  param_1[5] = &PTR_FUN_004010a8;
  DAT_0040b680 = DAT_004014e8;
  DAT_0040b684 = DAT_004014ec;
  DAT_0040b688 = DAT_004014f0;
  DAT_0040b68c = DAT_004014f4;
  FUN_00409b21(param_1 + 0xc);
  FUN_004080c5(param_1 + 0xc);
  FUN_00407515(param_1);
  return;
}



/* Function: FUN_00407980 */

undefined4 * __thiscall FUN_00407980(void *this,byte param_1)

{
  FUN_00407914((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004079b0 */

void FUN_004079b0(undefined4 param_1,IID *param_2,LPUNKNOWN param_3,IID *param_4,LPVOID *param_5)

{
  FUN_00407806(param_2,param_3,param_4,param_5);
  return;
}



/* Function: FUN_004079d0 */

undefined4 FUN_004079d0(void)

{
  return 0;
}



/* Function: FUN_004079db */

int FUN_004079db(void)

{
  code *pcVar1;
  HRESULT HVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *local_8;
  
  iVar5 = 1;
  HVar2 = CoCreateInstance((IID *)&DAT_004014f8,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401a84,&local_8);
  puVar3 = (undefined4 *)PTR_DAT_0040b09c;
  puVar4 = (undefined4 *)PTR_PTR_0040b098;
  if (-1 < HVar2) {
    pcVar1 = *(code **)(*local_8 + 0xc);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8,1,2);
    (*pcVar1)();
    pcVar1 = *(code **)(*local_8 + 8);
    (*(code *)PTR_guard_check_icall_0040c1e0)(local_8);
    (*pcVar1)();
    puVar3 = (undefined4 *)PTR_DAT_0040b09c;
    puVar4 = (undefined4 *)PTR_PTR_0040b098;
  }
  while ((puVar4 < puVar3 && (-1 < iVar5))) {
    if ((void *)*puVar4 != (void *)0x0) {
      iVar5 = FUN_004038fa((void *)*puVar4,0);
      puVar3 = (undefined4 *)PTR_DAT_0040b09c;
    }
    puVar4 = puVar4 + 1;
  }
  return iVar5;
}



/* Function: FUN_00407a70 */

void * __thiscall FUN_00407a70(void *this,byte param_1)

{
  FUN_00407b1c((int)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_00407a97 */

int FUN_00407a97(void)

{
  char cVar1;
  LPWSTR pWVar2;
  int local_8;
  
  if (DAT_0040b5f0 == '\0') {
    local_8 = 0;
    pWVar2 = GetCommandLineW();
    cVar1 = FUN_00408631(pWVar2,&local_8);
    if (cVar1 == '\x01') {
      local_8 = FUN_004085b8();
    }
  }
  else {
    local_8 = -1;
  }
  return local_8;
}



/* Function: FUN_00407ae0 */

int __fastcall FUN_00407ae0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      PostThreadMessageW(*(DWORD *)(param_1 + 0x2c),0x12,0,0);
    }
    else {
      *(undefined1 *)(param_1 + 0x3d) = 1;
      SetEvent(*(HANDLE *)(param_1 + 0x30));
    }
  }
  return iVar2 + -1;
}



/* Function: FUN_00407b1c */

void __fastcall FUN_00407b1c(int param_1)

{
  FUN_00403a6c(0);
  FUN_00403ab0(param_1);
  FUN_0040398f((int *)&DAT_0040b090);
  if (*(char *)(param_1 + 0x3e) != '\0') {
    CoUninitialize();
  }
  FUN_00403ab0(param_1);
  return;
}



/* Function: FUN_00407b53 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00407b53(void)

{
  HRESULT HVar1;
  HMODULE pHVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_0040b6a0;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _DAT_0040b694 = 0;
  _DAT_0040b69c = 0;
  _DAT_0040b698 = 0;
  DAT_0040b5ec = &DAT_0040b690;
  _DAT_0040b6b8 = 0;
  iVar3 = FUN_00403886((LPCRITICAL_SECTION)&DAT_0040b6a0);
  if (iVar3 < 0) {
    DAT_0040b5f0 = 1;
  }
  else {
    _DAT_0040b694 = 0x24;
  }
  _DAT_0040b6bc = GetCurrentThreadId();
  DAT_0040b6c0 = 0;
  _DAT_0040b6c4 = 5000;
  DAT_0040b6c8 = 1000;
  DAT_0040b6cc = 1;
  DAT_0040b6ce = 0;
  HVar1 = CoInitialize((LPVOID)0x0);
  if (HVar1 < 0) {
    if (HVar1 == -0x7ffefefa) {
      pHVar2 = GetModuleHandleW(L"Mscoree.dll");
      if (pHVar2 != (HMODULE)0x0) goto LAB_00407c0c;
    }
    DAT_0040b5f0 = 1;
  }
  else {
    DAT_0040b6ce = 1;
LAB_00407c0c:
    FUN_00403a6c(1);
  }
  return &DAT_0040b690;
}



/* Function: FUN_00407c20 */

void FUN_00407c20(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0xc);
  (*(code *)PTR_guard_check_icall_0040c1e0)(param_1,L"APPID",&DAT_00401598);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407c50 */

void FUN_00407c50(int param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1 == 0) {
    FUN_00408501(0,param_2,param_3);
  }
  else {
    FUN_00408456(param_1,param_2,param_3);
  }
  return;
}



/* Function: FUN_00407c80 */

int FUN_00407c80(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *_Memory;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar2 = -0x7ff8fff2;
    _Memory = (undefined4 *)FUN_00409c24(0x28);
    if (_Memory != (undefined4 *)0x0) {
      _Memory[1] = 0;
      puVar4 = _Memory + 2;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)(_Memory + 8) = 0;
      *_Memory = &PTR_FUN_0040102c;
      _Memory[9] = param_1;
      iVar2 = FUN_00403886((LPCRITICAL_SECTION)(_Memory + 2));
      if (-1 < iVar2) {
        *(undefined1 *)(_Memory + 8) = 1;
      }
      iVar3 = 0;
      if (iVar2 < 0) {
        iVar3 = iVar2;
      }
      iVar2 = 0;
      if (iVar3 < 0) {
        iVar2 = iVar3;
      }
      if (iVar2 == 0) {
        pcVar1 = *(code **)*_Memory;
        (*(code *)PTR_guard_check_icall_0040c1e0)(_Memory,param_2,param_3);
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          return 0;
        }
      }
      FUN_0040843a(_Memory);
      free(_Memory);
    }
  }
  return iVar2;
}



/* Function: FUN_00407d28 */

void __fastcall FUN_00407d28(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040c1e0)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00407d47 */

undefined4 * __thiscall FUN_00407d47(void *this,undefined4 *param_1)

{
  code *pcVar1;
  
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    pcVar1 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_1,&DAT_00401ae0,this);
    (*pcVar1)();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407d7d */

undefined4 * __thiscall FUN_00407d7d(void *this,undefined4 *param_1)

{
  code *pcVar1;
  
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    pcVar1 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_0040c1e0)(param_1,&DAT_00401b10,this);
    (*pcVar1)();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407db3 */

void __fastcall FUN_00407db3(int *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == 1) {
    *param_1 = 2;
    puVar1 = FUN_004063c7();
    FUN_0040947c(*(uint **)(puVar1 + 4),(LPCGUID)(param_1 + 2));
  }
  *param_1 = 3;
  return;
}



/* Function: FUN_00407de3 */

void __fastcall FUN_00407de3(PSRWLOCK param_1)

{
  PSRWLOCK local_8;
  
  local_8 = param_1;
  FUN_0040877d(param_1,&local_8);
  *(undefined4 *)param_1[0x2a].Ptr = 2;
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
  }
  return;
}



/* Function: FUN_00407e20 */

undefined4 __thiscall FUN_00407e20(void *this,undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int extraout_EAX;
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
  PSRWLOCK local_8;
  
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    puVar3 = FUN_004063c7();
    puVar1 = *(uint **)(puVar3 + 4);
    if (2 < *puVar1) {
      local_8 = (PSRWLOCK)param_1[8];
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
      local_50 = 0;
      local_54 = 0x1000000;
      FUN_00402ed6((int)puVar1,&DAT_004021ca,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),puVar1,
                   &local_4c,&local_48,&local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,
                   &local_2c,&local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,
                   &local_c,&local_8);
    }
  }
  FUN_0040877d(this,&local_8);
  iVar2 = *(int *)((int)this + 0xa8);
  iVar4 = param_1[2];
  if ((iVar4 != *(int *)(iVar2 + 0x44)) &&
     ((iVar4 != *(int *)(iVar2 + 0x38) || (-1 < *(int *)(iVar2 + 0x38))))) {
    iVar4 = FUN_004050b4((void *)(iVar2 + 0x3c),param_1);
  }
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
    iVar4 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}



/* Function: FUN_00407f67 */

DWORD * FUN_00407f67(char param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  
  iVar3 = DAT_0040b538;
  DVar4 = GetCurrentThreadId();
  pDVar1 = (DWORD *)(iVar3 + (DVar4 % 10) * 4);
  pDVar5 = (DWORD *)*pDVar1;
  while( true ) {
    if (pDVar5 == (DWORD *)0x0) {
      if ((param_1 == '\0') || (pDVar5 = (DWORD *)FUN_00404b32(0,0xc), pDVar5 == (DWORD *)0x0)) {
        pDVar7 = (DWORD *)0x0;
      }
      else {
        pDVar5[1] = 0;
        *pDVar5 = DVar4;
        pDVar7 = pDVar5 + 2;
        *pDVar7 = 0;
        do {
          DVar2 = *(DWORD *)(iVar3 + (DVar4 % 10) * 4);
          pDVar5[1] = DVar2;
          LOCK();
          DVar6 = *pDVar1;
          if (DVar2 == DVar6) {
            *pDVar1 = (DWORD)pDVar5;
            DVar6 = DVar2;
          }
          UNLOCK();
        } while (DVar6 != DVar2);
      }
      return pDVar7;
    }
    if (*pDVar5 == DVar4) break;
    pDVar5 = (DWORD *)pDVar5[1];
  }
  return pDVar5 + 2;
}



/* Function: FUN_00407ff9 */

void __fastcall FUN_00407ff9(int *param_1)

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



/* Function: FUN_0040803e */

undefined4 __thiscall FUN_0040803e(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00405051(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_0040808e(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_0040808e */

void __thiscall FUN_0040808e(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_004056e6(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004080c5 */

void __fastcall FUN_004080c5(undefined4 *param_1)

{
  HANDLE hObject;
  
  hObject = (HANDLE)*param_1;
  *param_1 = 0;
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
  }
  return;
}



/* Function: FUN_004080e1 */

void __fastcall FUN_004080e1(int param_1)

{
  if (*(char *)(param_1 + 0x1c) != '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  return;
}



/* Function: FUN_004080fc */

void __fastcall FUN_004080fc(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00404684(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040808e(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00405051(extraout_ECX);
    uVar4 = extraout_EDX;
    goto LAB_0040820f;
  }
  FUN_00408d1b(&local_214,&local_218);
  local_220[0] = 0;
  local_220[1] = 0;
  uVar5 = FUN_004058fc(local_210,local_220);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 < 0) {
    FUN_00405646(unaff_retaddr,100);
    FUN_00405646(unaff_retaddr,0x6d);
    uVar4 = 299;
LAB_0040823d:
    FUN_00405646(unaff_retaddr,uVar4);
    uVar4 = extraout_EDX_03;
  }
  else {
    piVar3 = (int *)(local_220[0] << 2);
    if (piVar3 == (int *)0x0) {
      iVar2 = FUN_00408b10((int)local_210,&local_214,param_2);
      uVar4 = extraout_EDX_02;
      if (iVar2 < 0) {
        uVar4 = 0x134;
        goto LAB_0040823d;
      }
    }
    else {
      *param_2 = piVar3;
      *(int *)*param_2 = *piVar3 + 1;
    }
  }
  if (local_218 != (HANDLE)0x0) {
    FUN_00405713(local_218);
    uVar4 = extraout_EDX_00;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004056e6(local_214);
    uVar4 = extraout_EDX_01;
  }
LAB_0040820f:
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_004082fa */

void __fastcall FUN_004082fa(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_004064a8((int *)(*param_1 + 4));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_00408327 */

void __fastcall FUN_00408327(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  
  if (param_1[1] == 0) {
    iVar1 = *param_1;
    puVar3 = FUN_004063c7();
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(puVar3 + 4);
    *(undefined1 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    pcVar2 = *(code **)(*(int *)(iVar1 + 4) + 4);
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    (*pcVar2)();
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_00408380 */

void FUN_00408380(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_0040443a(param_1,0x4011b0,param_2,param_3);
  return;
}



/* Function: FUN_004083b0 */

int FUN_004083b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1 + 1;
  do {
    iVar2 = *piVar1;
    if (iVar2 == 0x7fffffff) break;
    LOCK();
    iVar3 = *piVar1;
    if (iVar2 == iVar3) {
      *piVar1 = iVar2 + -1;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (iVar3 != iVar2);
  if ((iVar2 + -1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_0040843a(param_1);
    free(param_1);
  }
  return iVar2 + -1;
}



/* Function: FUN_00408400 */

int FUN_00408400(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 4);
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



/* Function: FUN_0040843a */

void __fastcall FUN_0040843a(undefined4 *param_1)

{
  *param_1 = &PTR_purecall_00401130;
  param_1[1] = 0xc0000001;
  FUN_004080e1((int)(param_1 + 1));
  return;
}



/* Function: FUN_00408456 */

int __fastcall FUN_00408456(int param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar3 = -0x7ff8fff2;
    piVar4 = (int *)FUN_00409c24(0x14);
    piVar2 = DAT_0040b5ec;
    if (piVar4 != (int *)0x0) {
      piVar4[1] = 0;
      piVar4[4] = param_1;
      *piVar4 = (int)&PTR_FUN_004010e8;
      piVar4[3] = 1;
      piVar4[2] = (int)&PTR_FUN_00401120;
      DAT_0040b5dc = 1;
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0040c1e0)();
      (*pcVar1)();
      pcVar1 = *(code **)*piVar4;
      (*(code *)PTR_guard_check_icall_0040c1e0)(piVar4,param_2,param_3);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        pcVar1 = *(code **)(*piVar4 + 0xc);
        (*(code *)PTR_guard_check_icall_0040c1e0)(1);
        (*pcVar1)();
      }
    }
  }
  return iVar3;
}



/* Function: FUN_00408501 */

int __fastcall FUN_00408501(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar3 = -0x7ff8fff2;
    piVar4 = (int *)FUN_00409c24(0xc);
    piVar2 = DAT_0040b5ec;
    if (piVar4 != (int *)0x0) {
      piVar4[2] = 0;
      piVar4[1] = 1;
      *piVar4 = (int)&PTR_FUN_00401094;
      DAT_0040b5dc = 1;
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0040c1e0)();
      (*pcVar1)();
      iVar3 = piVar4[2];
      if ((iVar3 != 0x7fffffff) && (piVar4[2] = iVar3 + 1, iVar3 + 1 != 0x7fffffff)) {
        piVar4[2] = iVar3;
      }
      pcVar1 = *(code **)*piVar4;
      (*(code *)PTR_guard_check_icall_0040c1e0)(piVar4,param_2,param_3);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        pcVar1 = *(code **)(*piVar4 + 0x10);
        (*(code *)PTR_guard_check_icall_0040c1e0)(1);
        (*pcVar1)();
      }
    }
  }
  return iVar3;
}



/* Function: FUN_004085b8 */

int FUN_004085b8(void)

{
  int iVar1;
  HANDLE pvVar2;
  BOOL BVar3;
  MSG local_20;
  
  iVar1 = FUN_004079db();
  if (iVar1 == 0) {
    if ((DAT_0040b6cc != '\0') && (pvVar2 = FUN_00408e3b(), pvVar2 == (HANDLE)0x0)) {
      iVar1 = -0x7fffbffb;
    }
  }
  else {
    DAT_0040b6cc = '\0';
  }
  if (iVar1 == 0) {
    while (BVar3 = GetMessageW(&local_20,(HWND)0x0,0,0), 0 < BVar3) {
      TranslateMessage(&local_20);
      DispatchMessageW(&local_20);
    }
  }
  else if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = FUN_00408bcd();
  return iVar1;
}



/* Function: FUN_00408631 */

void FUN_00408631(LPWSTR param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0040b100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  local_10 = DAT_004019b8;
  local_c = DAT_004019bc;
  do {
    param_1 = FUN_00403bce(param_1,(LPCWSTR)&local_10);
    uVar3 = extraout_EDX_01;
    if (param_1 == (LPWSTR)0x0) goto LAB_00408694;
    iVar2 = FUN_00403c1d(param_1,L"UnregServer");
    pcVar1 = DAT_0040b5f8;
    if (iVar2 == 0) {
      uVar3 = extraout_ECX;
      uVar4 = extraout_EDX;
      if (DAT_0040b5f8 == (code *)0x0) {
LAB_004086ca:
        uVar5 = FUN_004039ee(uVar3,uVar4);
      }
      else {
        (*(code *)PTR_guard_check_icall_0040c1e0)();
        uVar5 = (*pcVar1)();
        uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar3 = extraout_ECX_01;
        if (-1 < (int)uVar5) goto LAB_004086ca;
      }
      uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
      *param_2 = (int)uVar5;
      if (-1 < (int)uVar5) {
        *param_2 = 0;
      }
      goto LAB_00408694;
    }
    iVar2 = FUN_00403c1d(param_1,L"RegServer");
  } while (iVar2 != 0);
  *param_2 = 0;
  uVar5 = FUN_00408c24(extraout_ECX_00,extraout_EDX_00);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  *param_2 = (int)uVar5;
LAB_00408694:
  FUN_00409fd0(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004086e4 */

void __fastcall FUN_004086e4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *_Memory;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (_Memory = (void *)*param_1, _Memory != (void *)0x0)) {
      FUN_00406df6((int *)((int)_Memory + 4));
      free(_Memory);
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0040871a */

int __fastcall FUN_0040871a(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 local_60 [92];
  
  iVar2 = -0x7ff8fdc2;
  if (*(int *)(param_1 + 0x44) < 0) {
    iVar2 = *(int *)(param_1 + 0x44);
  }
  if (0 < *(int *)(param_1 + 0x9c)) {
    iVar3 = *(int *)(param_1 + 0x38);
    if (-1 < *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x38) = iVar2;
      iVar3 = iVar2;
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    return iVar3;
  }
  memset(local_60,0,0x58);
  FUN_004054fe((int)local_60);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}



/* Function: FUN_0040877d */

undefined4 * __thiscall FUN_0040877d(void *this,undefined4 *param_1)

{
  PSRWLOCK *ppRVar1;
  PSRWLOCK SRWLock;
  bool bVar2;
  PSRWLOCK local_c;
  PSRWLOCK local_8;
  
  local_c = (PSRWLOCK)0x0;
  bVar2 = *(int *)((int)this + 0xac) == 0;
  local_8 = (PSRWLOCK)this;
  if (bVar2) {
    ppRVar1 = &local_8;
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(*(int *)((int)this + 0xac) + 0xa4);
    AcquireSRWLockExclusive(SRWLock);
    ppRVar1 = &local_c;
  }
  *ppRVar1 = (PSRWLOCK)0x0;
  *param_1 = SRWLock;
  if ((bVar2) && (local_8 != (PSRWLOCK)0x0)) {
    ReleaseSRWLockExclusive(local_8);
  }
  if ((!bVar2) && (local_c != (PSRWLOCK)0x0)) {
    ReleaseSRWLockExclusive(local_c);
  }
  return param_1;
}



/* Function: FUN_004087f4 */

void __fastcall FUN_004087f4(int param_1)

{
  FUN_00408cc0((int *)(param_1 + 0x18));
  FUN_0040881f((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004056e6(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040881f */

void __fastcall FUN_0040881f(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_004056e6((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_004056e6((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00408850 */

void FUN_00408850(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_0040443a(param_1,0x401188,param_2,param_3);
  return;
}



/* Function: FUN_00408880 */

int FUN_00408880(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1[2];
  if ((iVar1 != 0x7fffffff) && (param_1[2] = iVar1 + -1, iVar1 + -1 == 0)) {
    pcVar2 = *(code **)(*DAT_0040b5ec + 4);
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    (*pcVar2)();
    if (param_1 != (int *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_0040c1e0)(1);
      (*pcVar2)();
    }
    FUN_00404519();
  }
  return iVar1 + -1;
}



/* Function: FUN_004088f0 */

void FUN_004088f0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x7fffffff) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



/* Function: FUN_00408914 */

void __fastcall FUN_00408914(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_0040b5ec;
  *param_1 = &PTR_FUN_00401094;
  param_1[2] = 0xc0000001;
  pcVar1 = *(code **)(*piVar2 + 8);
  (*(code *)PTR_guard_check_icall_0040c1e0)();
  (*pcVar1)();
  *param_1 = &PTR_FUN_004010d8;
  return;
}



/* Function: FUN_00408950 */

void FUN_00408950(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)**(undefined4 **)(param_1 + 8);
  (*(code *)PTR_guard_check_icall_0040c1e0)(*(undefined4 **)(param_1 + 8),param_2,param_3);
  (*pcVar1)();
  return;
}



/* Function: Release */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual unsigned long __stdcall CBaseBasicVideo::Release(void)
    public: virtual unsigned long __stdcall CBaseVideoWindow::Release(void)
    public: virtual unsigned long __stdcall CSeekingPassThru::Release(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void Release(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 8) + 8);
  (*(code *)PTR_guard_check_icall_0040c1e0)(*(int **)(param_1 + 8));
  (*pcVar1)();
  return;
}



/* Function: AddRef */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual unsigned long __stdcall CBaseBasicVideo::AddRef(void)
    public: virtual unsigned long __stdcall CBaseVideoWindow::AddRef(void)
    public: virtual unsigned long __stdcall CSeekingPassThru::AddRef(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void AddRef(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 8) + 4);
  (*(code *)PTR_guard_check_icall_0040c1e0)(*(int **)(param_1 + 8));
  (*pcVar1)();
  return;
}



/* Function: FUN_004089e0 */

int FUN_004089e0(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *extraout_ECX;
  undefined4 *extraout_EDX;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    iVar2 = 0;
    *param_3 = 0;
    iVar3 = FUN_0040396a(param_2);
    if (iVar3 == 0) {
      iVar2 = FUN_0040443a((int)(param_1 + 2),0x401188,extraout_ECX,extraout_EDX);
    }
    else {
      *extraout_EDX = param_1;
      pcVar1 = *(code **)(*param_1 + 4);
      (*(code *)PTR_guard_check_icall_0040c1e0)(param_1);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00408a40 */

int FUN_00408a40(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0x7fffffff) && (param_1[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    pcVar2 = *(code **)(*DAT_0040b5ec + 4);
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    (*pcVar2)();
    if (param_1 != (int *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0xc);
      (*(code *)PTR_guard_check_icall_0040c1e0)(1);
      (*pcVar2)();
    }
    FUN_00404519();
  }
  return iVar1 + -1;
}



/* Function: FUN_00408ab0 */

void FUN_00408ab0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x7fffffff) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}



/* Function: FUN_00408ad4 */

void __fastcall FUN_00408ad4(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_0040b5ec;
  *param_1 = &PTR_FUN_004010e8;
  param_1[1] = 0xc0000001;
  pcVar1 = *(code **)(*piVar2 + 8);
  (*(code *)PTR_guard_check_icall_0040c1e0)();
  (*pcVar1)();
  param_1[2] = &PTR_FUN_004010d8;
  return;
}



/* Function: FUN_00408b10 */

int __fastcall FUN_00408b10(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00404b32(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00405646(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004056da();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_0040573e(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00405646(unaff_retaddr,0x14b);
    }
    else {
      FUN_00408dd7(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_0040881f(local_10);
  }
  FUN_00408db7((int *)&local_18);
  return iVar3;
}



/* Function: FUN_00408bcd */

int FUN_00408bcd(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  HRESULT HVar4;
  
  HVar4 = 0;
  piVar2 = (int *)PTR_DAT_0040b09c;
  piVar3 = (int *)PTR_PTR_0040b098;
  while ((piVar3 < piVar2 && (HVar4 == 0))) {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
      HVar4 = CoRevokeClassObject(*(DWORD *)(iVar1 + 0x14));
      piVar2 = (int *)PTR_DAT_0040b09c;
    }
    piVar3 = piVar3 + 1;
  }
  if (DAT_0040b6cc != '\0') {
    Sleep(DAT_0040b6c8);
  }
  return HVar4;
}



/* Function: FUN_00408c24 */

void __fastcall FUN_00408c24(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  HKEY pHVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  iVar3 = 0;
  piVar5 = (int *)PTR_DAT_0040b09c;
  piVar6 = (int *)PTR_PTR_0040b098;
  if (PTR_PTR_0040b098 < PTR_DAT_0040b09c) {
    do {
      uVar7 = CONCAT44(param_2,iVar3);
      puVar1 = (undefined4 *)*piVar6;
      if (puVar1 != (undefined4 *)0x0) {
        pcVar2 = (code *)puVar1[1];
        (*(code *)PTR_guard_check_icall_0040c1e0)(1);
        iVar3 = (*pcVar2)();
        if (iVar3 < 0) {
          return;
        }
        pcVar2 = (code *)puVar1[7];
        (*(code *)PTR_guard_check_icall_0040c1e0)();
        pHVar4 = (HKEY)(*pcVar2)();
        uVar7 = FUN_004040ba((GUID *)*puVar1,pHVar4,1);
        piVar5 = (int *)PTR_DAT_0040b09c;
        if ((int)uVar7 < 0) {
          return;
        }
      }
      param_2 = (undefined4)((ulonglong)uVar7 >> 0x20);
      iVar3 = (int)uVar7;
      piVar6 = piVar6 + 1;
    } while (piVar6 < piVar5);
    if (iVar3 < 0) {
      return;
    }
  }
  iVar3 = FUN_00403f55((HMODULE)PTR_IMAGE_DOS_HEADER_0040b094,param_2);
  pcVar2 = DAT_0040b5f4;
  if ((-1 < iVar3) && (DAT_0040b5f4 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(DAT_0040b6d4);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00408cc0 */

void __fastcall FUN_00408cc0(int *param_1)

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
        FUN_00405ace((int)lpMem + 8);
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



/* Function: FUN_00408d1b */

void __thiscall FUN_00408d1b(void *this,undefined4 *param_1)

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
    FUN_004056c2(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00408d60 */

undefined4 * __thiscall FUN_00408d60(void *this,byte param_1)

{
  FUN_00408914((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00408d90 */

undefined4 * __thiscall FUN_00408d90(void *this,byte param_1)

{
  FUN_00408ad4((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00408db7 */

void __fastcall FUN_00408db7(int *param_1)

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



/* Function: FUN_00408dd7 */

undefined4 * __thiscall FUN_00408dd7(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00408e3b */

HANDLE FUN_00408e3b(void)

{
  HANDLE pvVar1;
  DWORD local_8;
  
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  DAT_0040b6c0 = pvVar1;
  if ((pvVar1 != (HANDLE)0x0) &&
     (pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00408e90,&DAT_0040b690,0,&local_8),
     pvVar1 == (HANDLE)0x0)) {
    CloseHandle(DAT_0040b6c0);
  }
  return pvVar1;
}



/* Function: FUN_00408e90 */

undefined4 FUN_00408e90(int param_1)

{
  DWORD DVar1;
  
  do {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x30),0xffffffff);
    do {
      *(undefined1 *)(param_1 + 0x3d) = 0;
      DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x30),*(DWORD *)(param_1 + 0x34));
    } while (DVar1 == 0);
  } while ((*(char *)(param_1 + 0x3d) != '\0') || (*(int *)(param_1 + 8) != 0));
  CloseHandle(*(HANDLE *)(param_1 + 0x30));
  PostThreadMessageW(*(DWORD *)(param_1 + 0x2c),0x12,0,0);
  return 0;
}



/* Function: FUN_00408ee8 */

void __fastcall
FUN_00408ee8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00404df1(param_7);
  local_8 = 0;
  FUN_00409255(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_00408f2f */

void * __fastcall FUN_00408f2f(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint _MaxCount;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    _MaxCount = FUN_0040508c(param_3);
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



/* Function: FUN_00408f9f */

char * __fastcall FUN_00408f9f(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *_MaxCount;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar1;
  
  pcVar1 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    _MaxCount = FUN_0040506e(param_3);
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



/* Function: FUN_00409002 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00409002(undefined4 param_1,undefined4 param_2)

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
  
  uStack_c = 0x409014;
  local_1458 = *in_stack_00000014;
  local_1008[0] = L'\0';
  local_1408[0] = 0;
  local_1454 = in_stack_00000014[1];
  uStack_1434 = FUN_00404c40(local_1458);
  local_1460 = 3;
  local_145c = 0;
  if (in_stack_00000014[2] == 1) {
    local_145c = 8;
  }
  LOCK();
  UNLOCK();
  local_1450 = DAT_0040b584 + 1;
  local_144c = 0;
  DAT_0040b584 = DAT_0040b584 + 1;
  DStack_1448 = GetCurrentThreadId();
  pcVar1 = DAT_0040b568;
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
  if (DAT_0040b568 == (code *)0x0) {
    uStack_1414 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    uStack_1414 = (*pcVar1)();
  }
  pcVar1 = DAT_0040b534;
  if (DAT_0040b534 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b54c;
  if (DAT_0040b54c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1460,local_1408,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b548;
  if (DAT_0040b548 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b558;
  if ((DAT_0040b558 != (code *)0x0) && ((local_145c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1460);
    (*pcVar1)();
  }
  if (-1 < local_1458) {
    local_1458 = -0x7fff0001;
    local_1454 = FUN_00404df1(0x8000ffff);
  }
  pcVar1 = DAT_0040b520;
  if (DAT_0040b528 == '\0') {
    if (DAT_0040b520 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c1e0)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040919c;
  }
  else {
LAB_0040919c:
    pcVar1 = DAT_0040b52c;
    if ((local_145c & 2) == 0) {
      if ((DAT_0040b52c != (code *)0x0) && (DAT_0040b53c == '\0')) {
        (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1460,local_1008,0x800);
        (*pcVar1)();
      }
      if (local_1008[0] == L'\0') {
        FUN_0040489e(local_1008,0x800,(int)&local_1460);
      }
      OutputDebugStringW(local_1008);
      goto LAB_00409222;
    }
  }
  pcVar1 = DAT_0040b52c;
  if ((DAT_0040b52c != (code *)0x0) && (DAT_0040b53c == '\0')) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1460,0,0);
    (*pcVar1)();
  }
LAB_00409222:
  pcVar1 = DAT_0040b554;
  if ((((local_145c & 4) != 0) || (DAT_0040b530 != '\0')) && (DAT_0040b554 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    (*pcVar1)();
  }
  FUN_004054fe((int)&local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409255 */

void __fastcall
FUN_00409255(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_004094c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_0040927b */

void __fastcall FUN_0040927b(undefined4 param_1,undefined4 param_2)

{
  FUN_00409566(param_1,param_2);
  return;
}



/* Function: FUN_0040928c */

void __fastcall FUN_0040928c(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_00404df1(in_stack_00000014);
  FUN_0040927b(param_1,param_2);
  return;
}



/* Function: FUN_004092cd */

uint __fastcall FUN_004092cd(int param_1,int param_2)

{
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = FUN_00405002(param_1,param_2,0x4017c4,param_1,param_1,in_stack_00000010);
  FUN_00404df1(uVar1);
  FUN_0040927b(param_1,param_2);
  return uVar1;
}



/* Function: FUN_00409322 */

void FUN_00409322(void)

{
  undefined *puVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined1 auStack_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  local_c = DAT_0040b100 ^ (uint)auStack_6c;
  puVar1 = FUN_004063c7();
  uVar3 = extraout_EDX;
  if (2 < **(uint **)(puVar1 + 4)) {
    uVar2 = FUN_00402cd8(*(uint **)(puVar1 + 4),0,0x2000);
    uVar3 = extraout_EDX_00;
    if ((char)uVar2 != '\0') {
      local_68 = 0x1000000;
      local_20 = &local_68;
      local_64 = 0;
      local_30 = &local_60;
      local_1c = 0;
      local_60 = DAT_0040b680;
      uStack_5c = DAT_0040b684;
      uStack_58 = DAT_0040b688;
      local_18 = 8;
      local_14 = 0;
      uStack_54 = DAT_0040b68c;
      local_2c = 0;
      local_28 = 0x10;
      local_24 = 0;
      FUN_00402c43(extraout_ECX,&DAT_004025ab,(LPCGUID)0x0,(LPCGUID)0x0,4,local_50);
      uVar3 = extraout_EDX_01;
    }
  }
  FUN_00409fd0(local_c ^ (uint)auStack_6c,uVar3);
  return;
}



/* Function: FUN_004093ce */

void __fastcall FUN_004093ce(undefined4 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar2 = FUN_004063c7();
  puVar1 = *(uint **)(puVar2 + 4);
  if (5 < *puVar1) {
    local_c = 0;
    local_18 = &local_10;
    local_14 = *param_1;
    local_10 = 0x1000000;
    FUN_0040355f((int)puVar1,&DAT_0040273a,puVar1,puVar1,&local_14,&local_18);
  }
  return;
}



/* Function: FUN_00409425 */

void __fastcall FUN_00409425(undefined4 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar2 = FUN_004063c7();
  puVar1 = *(uint **)(puVar2 + 4);
  if (5 < *puVar1) {
    local_c = 0;
    local_18 = &local_10;
    local_14 = *param_1;
    local_10 = 0x1000000;
    FUN_0040355f((int)puVar1,&DAT_00401ea9,puVar1,puVar1,&local_14,&local_18);
  }
  return;
}



/* Function: FUN_0040947c */

void __fastcall FUN_0040947c(uint *param_1,LPCGUID param_2)

{
  LPCGUID extraout_EDX;
  _EVENT_DATA_DESCRIPTOR local_30 [2];
  uint local_c;
  
  local_c = DAT_0040b100 ^ (uint)local_30;
  if (5 < *param_1) {
    FUN_00402c43((int)param_1,&DAT_0040219e,param_2,(LPCGUID)0x0,2,local_30);
    param_2 = extraout_EDX;
  }
  FUN_00409fd0(local_c ^ (uint)local_30,param_2);
  return;
}



/* Function: FUN_004094c0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_004094c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_0040b100 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_0040526c(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_00409fd0(local_c ^ (uint)&local_1474,extraout_EDX);
    return;
  }
  FUN_004054fe((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409566 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00409566(undefined4 param_1,undefined4 param_2)

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
  
  local_c = DAT_0040b100 ^ (uint)auStack_1474;
  local_1470 = in_stack_00000010;
  local_1010[0] = L'\0';
  local_1410[0] = 0;
  local_145c = in_stack_00000014[1];
  local_1460 = *in_stack_00000014;
  local_146c = param_1;
  iStack_143c = FUN_00404bff(local_1460);
  local_1464 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1464 = 8;
  }
  local_1468 = 1;
  LOCK();
  UNLOCK();
  local_1458 = DAT_0040b584 + 1;
  local_1454 = 0;
  DAT_0040b584 = DAT_0040b584 + 1;
  DStack_1450 = GetCurrentThreadId();
  pcVar1 = DAT_0040b568;
  uStack_1418 = local_1470;
  uStack_1414 = local_146c;
  puStack_1444 = &DAT_004017c4;
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
  if (DAT_0040b568 == (code *)0x0) {
    lVar5 = (ulonglong)extraout_EDX << 0x20;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    lVar5 = (*pcVar1)();
  }
  pcVar1 = DAT_0040b534;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040b534 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_00,uStack_141c);
  }
  pcVar1 = DAT_0040b54c;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040b54c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1468,local_1410,0x400);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_01,uStack_141c);
  }
  pcVar1 = DAT_0040b548;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040b548 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_02,uStack_141c);
  }
  pcVar1 = DAT_0040b558;
  uStack_141c = (undefined4)lVar5;
  if ((DAT_0040b558 != (code *)0x0) && ((local_1464 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_03,uStack_141c);
  }
  pcVar1 = DAT_0040b520;
  uStack_141c = (undefined4)lVar5;
  if (-1 < local_1460) {
    FUN_004056da();
    goto LAB_004097c7;
  }
  if (DAT_0040b528 == '\0') {
    if (DAT_0040b520 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      uVar2 = (uint)(BVar3 != 0);
      uVar4 = extraout_EDX_04;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c1e0)();
      uVar6 = (*pcVar1)();
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar2 = (uint)uVar6 & 0xff;
    }
    lVar5 = CONCAT44(uVar4,uStack_141c);
    if (uVar2 != 0) goto LAB_004096fb;
LAB_00409702:
    pcVar1 = DAT_0040b52c;
    uStack_141c = (undefined4)lVar5;
    if ((DAT_0040b52c != (code *)0x0) && (DAT_0040b53c == '\0')) {
      (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1468,0,0);
      (*pcVar1)();
      lVar5 = CONCAT44(extraout_EDX_05,uStack_141c);
    }
  }
  else {
LAB_004096fb:
    pcVar1 = DAT_0040b52c;
    uStack_141c = (undefined4)lVar5;
    if ((local_1464 & 2) != 0) goto LAB_00409702;
    if ((DAT_0040b52c != (code *)0x0) && (DAT_0040b53c == '\0')) {
      (*(code *)PTR_guard_check_icall_0040c1e0)(&local_1468,local_1010,0x800);
      (*pcVar1)();
    }
    if (local_1010[0] == L'\0') {
      FUN_0040489e(local_1010,0x800,(int)&local_1468);
    }
    OutputDebugStringW(local_1010);
    lVar5 = CONCAT44(extraout_EDX_06,uStack_141c);
  }
  pcVar1 = DAT_0040b554;
  uStack_141c = (undefined4)lVar5;
  if ((((local_1464 & 4) != 0) || (DAT_0040b530 != '\0')) && (DAT_0040b554 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_07,uStack_141c);
  }
  uStack_141c = (undefined4)lVar5;
  if ((local_1464 & 1) == 0) {
    FUN_00409fd0(local_c ^ (uint)auStack_1474,(int)((ulonglong)lVar5 >> 0x20));
    return;
  }
LAB_004097c7:
  FUN_004054fe((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004097e0 */

void FUN_004097e0(int param_1)

{
  Release((int *)(param_1 + -0x14));
  return;
}



/* Function: FUN_004097f0 */

void FUN_004097f0(int param_1)

{
  FUN_00407030(param_1 + -0xc);
  return;
}



/* Function: FUN_00409800 */

void FUN_00409800(int param_1,IID *param_2,void **param_3)

{
  FUN_00406fc0((void *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_00409810 */

void FUN_00409810(int param_1)

{
  FUN_00407030(param_1 + -0x10);
  return;
}



/* Function: FUN_00409820 */

void FUN_00409820(int param_1,IID *param_2,void **param_3)

{
  FUN_00406fc0((void *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_00409830 */

void FUN_00409830(int param_1)

{
  FUN_00407030(param_1 + -0x14);
  return;
}



/* Function: FUN_00409840 */

void FUN_00409840(int param_1,IID *param_2,void **param_3)

{
  FUN_00406fc0((void *)(param_1 + -0xc),param_2,param_3);
  return;
}



/* Function: FUN_00409850 */

void FUN_00409850(int param_1,IID *param_2,void **param_3)

{
  FUN_00406fc0((void *)(param_1 + -0x10),param_2,param_3);
  return;
}



/* Function: FUN_00409860 */

void FUN_00409860(int param_1)

{
  Release((int *)(param_1 + -4));
  return;
}



/* Function: FUN_00409870 */

void FUN_00409870(int param_1,IID *param_2,void **param_3)

{
  FUN_00406fc0((void *)(param_1 + -0x14),param_2,param_3);
  return;
}



/* Function: FUN_00409880 */

void FUN_00409880(int param_1)

{
  Release((int *)(param_1 + -8));
  return;
}



/* Function: FUN_00409890 */

void FUN_00409890(int param_1)

{
  Release((int *)(param_1 + -0xc));
  return;
}



/* Function: FUN_004098a0 */

void FUN_004098a0(int param_1)

{
  FUN_00407030(param_1 + -4);
  return;
}



/* Function: FUN_004098b0 */

void FUN_004098b0(int param_1)

{
  FUN_00407220(param_1 + -4);
  return;
}



/* Function: FUN_004098c0 */

void FUN_004098c0(int param_1,undefined4 param_2)

{
  FUN_004071b0(param_1 + -4,param_2);
  return;
}



/* Function: FUN_004098d0 */

void FUN_004098d0(int param_1)

{
  Release((int *)(param_1 + -0x10));
  return;
}



/* Function: FUN_004098e0 */

void FUN_004098e0(int param_1)

{
  FUN_00407030(param_1 + -8);
  return;
}



/* Function: FUN_004098f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004098f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0040b6e8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_0040b700 = 0;
  _DAT_0040b704 = 0;
  _DAT_0040b708 = 0;
  _DAT_0040b6d0 = 0x3c;
  _DAT_0040b6d8 = 0x400000;
  DAT_0040b6d4 = 0x400000;
  DAT_0040b6dc = 1;
  _DAT_0040b6e0 = 0x800;
  _DAT_0040b6e4 = &DAT_00401ce4;
  iVar1 = FUN_00403886((LPCRITICAL_SECTION)&DAT_0040b6e8);
  if (iVar1 < 0) {
    DAT_0040b5f0 = 1;
  }
  return &DAT_0040b6d0;
}



/* Function: FUN_00409963 */

void __fastcall FUN_00409963(int param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
            ((CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *)
             (param_1 + 0x30));
  return;
}



/* Function: RemoveAll */

/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleArray<unsigned short,class
   ATL::CSimpleArrayEqualHelper<unsigned short> >::RemoveAll(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
          (CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *this)

{
  if (*(int *)this != 0) {
    free(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* Function: FUN_004099a7 */

undefined4 __fastcall FUN_004099a7(int *param_1,HINSTANCE param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
LAB_00409a13:
    uVar2 = 0x80070057;
  }
  else {
    if (*param_1 != 0) {
      if (*param_1 != 0x2c) goto LAB_00409a13;
      iVar3 = 0;
      if (0 < param_1[9]) {
        do {
          if ((iVar3 < 0) || (param_1[9] <= iVar3)) {
            FUN_0040381b(0xc000008c);
            pcVar1 = (code *)swi(3);
            uVar2 = (*pcVar1)();
            return uVar2;
          }
          UnregisterClassA((LPCSTR)(uint)*(ushort *)(param_1[8] + iVar3 * 2),param_2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_1[9]);
      }
      if (param_1[8] != 0) {
        free((void *)param_1[8]);
        param_1[8] = 0;
      }
      param_1[9] = 0;
      param_1[10] = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
      *param_1 = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00409a2c */

DWORD __fastcall FUN_00409a2c(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    DVar1 = GetLastError();
    uVar2 = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      uVar2 = DVar1;
    }
    if (-1 < (int)uVar2) {
      uVar2 = 0x80004005;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00409a5b */

DWORD __thiscall FUN_00409a5b(void *this,uint param_1)

{
  HANDLE hTargetProcessHandle;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  BOOL BVar1;
  DWORD DVar2;
  PTP_TIMER p_Var3;
  _FILETIME local_c;
  
  if (DAT_0040b64c == '\0') {
    local_c.dwLowDateTime = (DWORD)this;
    local_c.dwHighDateTime = (DWORD)this;
    hTargetProcessHandle = GetCurrentProcess();
    hSourceHandle = GetCurrentThread();
    hSourceProcessHandle = GetCurrentProcess();
    BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,(LPHANDLE)this,
                            0x1fffff,1,0);
    DVar2 = FUN_00409a2c(BVar1);
    if (-1 < (int)DVar2) {
      p_Var3 = CreateThreadpoolTimer(FUN_00409b70,this,(PTP_CALLBACK_ENVIRON)0x0);
      *(PTP_TIMER *)((int)this + 4) = p_Var3;
      DVar2 = FUN_00409a2c((uint)(p_Var3 != (PTP_TIMER)0x0));
      if (-1 < (int)DVar2) {
        *(code **)((int)this + 8) = FUN_00406e20;
        local_c = (_FILETIME)__allmul(param_1,0,0xffffd8f0,-1);
        SetThreadpoolTimer(*(PTP_TIMER *)((int)this + 4),&local_c,0,0);
        return DVar2;
      }
    }
    SHCreateThread(FUN_00409b90,(void *)0x0,0,(LPTHREAD_START_ROUTINE)0x0);
  }
  return 0x8004b202;
}



/* Function: FUN_00409b21 */

void __fastcall FUN_00409b21(undefined4 *param_1)

{
  HANDLE hObject;
  
  if (param_1[1] != 0) {
    SetThreadpoolTimer((PTP_TIMER)param_1[1],(PFILETIME)0x0,0,0);
    WaitForThreadpoolTimerCallbacks((PTP_TIMER)param_1[1],1);
    CloseThreadpoolTimer((PTP_TIMER)param_1[1]);
    param_1[1] = 0;
  }
  hObject = (HANDLE)*param_1;
  *param_1 = 0;
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
  }
  return;
}



/* Function: FUN_00409b70 */

void FUN_00409b70(undefined4 param_1,undefined4 *param_2)

{
  DAT_0040b64c = 1;
  FUN_00409b90(param_2);
  return;
}



/* Function: FUN_00409b90 */

undefined4 FUN_00409b90(undefined4 *param_1)

{
  code *pcVar1;
  HANDLE hProcess;
  UINT uExitCode;
  
  if (DAT_0040b64d == '\0') {
    DAT_0040b64d = '\x01';
    if ((param_1 != (undefined4 *)0x0) && (pcVar1 = (code *)param_1[2], pcVar1 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_0040c1e0)(*param_1);
      (*pcVar1)();
    }
    Sleep(1000);
    uExitCode = 1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  return 0;
}



/* Function: FUN_00409be7 */

void FUN_00409be7(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_00401cf4,DelayLoadFailureHook_exref,param_2,DAT_00401cf4);
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0040a32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: FUN_00409c24 */

void * __cdecl FUN_00409c24(size_t param_1)

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



/* Function: FUN_00409c60 */

undefined4 FUN_00409c60(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00409f20();
  DAT_0040b1d8 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_0040a434(2);
  __set_app_type(iVar2);
  DAT_0040b714 = 0xffffffff;
  DAT_0040b718 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_0040b508;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_0040b4fc;
  FUN_00404500();
  if (DAT_0040b0c0 == 0) {
    __setusermatherr(FUN_00404500);
  }
  FUN_0040a687();
  return 0;
}



/* Function: FUN_00409cd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409cd0(void)

{
  _DAT_0040b1dc = DAT_0040b504;
  _DAT_0040b1d4 =
       __wgetmainargs((int *)&DAT_0040b1c8,(wchar_t ***)&DAT_0040b1cc,(wchar_t ***)&DAT_0040b1d0,
                      DAT_0040b500,(_startupinfo *)&DAT_0040b1dc);
  return;
}



/* Function: FUN_00409d09 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00409d09(void)

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
  
  local_8 = &DAT_0040a970;
  uStack_c = 0x409d15;
  local_20 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = (undefined *)0x0;
  iVar6 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar5 = 0;
    LOCK();
    iVar3 = iVar6;
    if (DAT_0040b70c != 0) {
      iVar5 = DAT_0040b70c;
      iVar3 = DAT_0040b70c;
    }
    DAT_0040b70c = iVar3;
    UNLOCK();
    if (iVar5 == 0) goto LAB_00409d5e;
    if (iVar5 == iVar6) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00409d5e:
  if (DAT_0040b710 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0040b710 == 0) {
    DAT_0040b710 = 1;
    iVar6 = FUN_00409ee9((undefined4 *)&DAT_004012bc,(undefined4 *)&DAT_004012c8);
    if (iVar6 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_0040b1c4 = 1;
  }
  if (DAT_0040b710 == 1) {
    initterm(&DAT_0040128c,&DAT_004012b8);
    DAT_0040b710 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_0040b70c = 0;
    UNLOCK();
  }
  if ((DAT_0040b71c != (code *)0x0) &&
     (BVar7 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0040b71c), pcVar2 = DAT_0040b71c, BVar7 != 0
     )) {
    (*(code *)PTR_guard_check_icall_0040c1e0)(0,2,0);
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
      if (uVar4 == 0) goto LAB_00409e40;
      if (uVar8 == 0) {
        while ((uVar4 != 0 && (uVar4 < 0x21))) {
          local_24 = local_24 + 1;
          uVar4 = *local_24;
        }
LAB_00409e40:
        DAT_0040b1c0 = FUN_00407a97();
        if (DAT_0040b1d8 == 0) {
                    /* WARNING: Subroutine does not return */
          exit(DAT_0040b1c0);
        }
        if (DAT_0040b1c4 == 0) {
          _cexit();
          ExceptionList = local_14;
          return DAT_0040b1c0;
        }
        ExceptionList = local_14;
        return DAT_0040b1c0;
      }
    }
    if (uVar4 == 0x22) {
      uVar8 = (uint)(uVar8 == 0);
      local_20 = uVar8;
    }
    local_24 = local_24 + 1;
  } while( true );
}



/* Function: FUN_00409ee9 */

void __cdecl FUN_00409ee9(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_0040c1e0)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_00409f20 */

bool FUN_00409f20(void)

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
  FUN_0040a5e9();
  FUN_00409d09();
  return;
}



/* Function: FUN_00409fa0 */

void __cdecl
FUN_00409fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_0040b100,FUN_00409fd0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00409fd0 */

void __fastcall FUN_00409fd0(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_0040b100) {
    return;
  }
  FUN_0040a016(param_1,param_2);
  return;
}



/* Function: FUN_00409fe6 */

void __cdecl FUN_00409fe6(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0040a016 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040a016(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_0040b2f0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040b2f4 = &stack0x00000004;
  _DAT_0040b230 = 0x10001;
  _DAT_0040b1e0 = 0xc0000409;
  _DAT_0040b1e4 = 1;
  _DAT_0040b1f0 = 3;
  DAT_0040b1f4 = 2;
  DAT_0040b1f8 = DAT_0040b100;
  DAT_0040b1fc = DAT_0040b140;
  uStack_c = DAT_0040b100;
  uStack_8 = DAT_0040b140;
  _DAT_0040b1ec = unaff_retaddr;
  _DAT_0040b2bc = in_GS;
  _DAT_0040b2c0 = in_FS;
  _DAT_0040b2c4 = in_ES;
  _DAT_0040b2c8 = in_DS;
  _DAT_0040b2cc = unaff_EDI;
  _DAT_0040b2d0 = unaff_ESI;
  _DAT_0040b2d4 = unaff_EBX;
  _DAT_0040b2d8 = param_2;
  _DAT_0040b2dc = param_1;
  _DAT_0040b2e0 = in_EAX;
  _DAT_0040b2e4 = unaff_EBP;
  DAT_0040b2e8 = unaff_retaddr;
  _DAT_0040b2ec = in_CS;
  _DAT_0040b2f8 = in_SS;
  FUN_00409fe6((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_0040a12a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040a12a(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_0040b2f0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0040b230 = 0x10001;
  _DAT_0040b2f4 = &stack0x00000004;
  _DAT_0040b1e0 = 0xc0000409;
  _DAT_0040b1e4 = 1;
  _DAT_0040b1f0 = 1;
  DAT_0040b1f4 = 8;
  _DAT_0040b1ec = unaff_retaddr;
  _DAT_0040b2bc = in_GS;
  _DAT_0040b2c0 = in_FS;
  _DAT_0040b2c4 = in_ES;
  _DAT_0040b2c8 = in_DS;
  _DAT_0040b2cc = unaff_EDI;
  _DAT_0040b2d0 = unaff_ESI;
  _DAT_0040b2d4 = unaff_EBX;
  _DAT_0040b2d8 = param_2;
  _DAT_0040b2dc = param_1;
  _DAT_0040b2e0 = in_EAX;
  DAT_0040b2e8 = unaff_retaddr;
  _DAT_0040b2ec = in_CS;
  _DAT_0040b2f8 = in_SS;
  FUN_00409fe6((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_0040a1ea */

void FUN_0040a1ea(size_t param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040a8ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00409c24(param_1);
  FUN_0040a232();
  return;
}



/* Function: Catch_All@0040a225 */

undefined * Catch_All_0040a225(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  return &DAT_0040a22f;
}



/* Function: FUN_0040a232 */

void FUN_0040a232(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_0040a24d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_0040a24d(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0040a9e8;
  uStack_c = 0x40a259;
  local_20[0] = DAT_0040b718;
  if (DAT_0040b718 == -1) {
    (*(code *)PTR_guard_check_icall_0040c1e0)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_0040b718;
    local_24 = DAT_0040b714;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_0040b718 = local_20[0];
    DAT_0040b714 = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_0040a2e7();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_0040a2e7 */

void FUN_0040a2e7(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_0040a2f6 */

int __cdecl FUN_0040a2f6(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_0040a24d(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0040a32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: malloc */

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



/* Function: _callnewh */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}



/* Function: FUN_0040a350 */

undefined4 FUN_0040a350(int *param_1)

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



/* Function: FUN_0040a3a0 */

undefined4 FUN_0040a3a0(void)

{
  SetUnhandledExceptionFilter(FUN_0040a350);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_0040a3c0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_0040a3c0(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0040a434 */

undefined4 __cdecl FUN_0040a434(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_0040a3c0(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0040a476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
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
  
  pcStack_10 = FUN_00409fa0;
  local_14 = ExceptionList;
  local_c = DAT_0040b100 ^ 0x40aa28;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_0040a5b0((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_0040a5b0 */

bool __cdecl FUN_0040a5b0(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_0040a5e9 */

void FUN_0040a5e9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_0040b100 == 0xbb40e64e) || ((DAT_0040b100 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_0040b100 & 0xffff0000, DAT_0040b100 = local_8, uVar1 == 0)) {
      DAT_0040b100 = 0xbb40e64f;
    }
  }
  DAT_0040b140 = ~DAT_0040b100;
  return;
}



/* Function: FUN_0040a687 */

void FUN_0040a687(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a6a0. Too many branches */
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



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a70b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040a723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040a72f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040a73b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: DelayLoad_StringFromGUID2 */

void DelayLoad_StringFromGUID2(void)

{
  FUN_0040a751();
  return;
}



/* Function: FUN_0040a751 */

void FUN_0040a751(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00409be7(&ImgDelayDescr_0040aa50,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040a760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_CoUninitialize */

void DelayLoad_CoUninitialize(void)

{
  FUN_0040a751();
  return;
}



/* Function: DelayLoad_CoCreateInstance */

void DelayLoad_CoCreateInstance(void)

{
  FUN_0040a751();
  return;
}



/* Function: DelayLoad_CoRegisterClassObject */

void DelayLoad_CoRegisterClassObject(void)

{
  FUN_0040a751();
  return;
}



/* Function: DelayLoad_CoRevokeClassObject */

void DelayLoad_CoRevokeClassObject(void)

{
  FUN_0040a751();
  return;
}



/* Function: DelayLoad_CoInitialize */

void DelayLoad_CoInitialize(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00409be7(&ImgDelayDescr_0040aa70,&CoInitialize_exref);
                    /* WARNING: Could not recover jumptable at 0x0040a7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_WerReportAddDump */

void DelayLoad_WerReportAddDump(void)

{
  FUN_0040a7d3();
  return;
}



/* Function: FUN_0040a7d3 */

void FUN_0040a7d3(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00409be7(&ImgDelayDescr_0040aa90,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040a7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_WerReportSetParameter */

void DelayLoad_WerReportSetParameter(void)

{
  FUN_0040a7d3();
  return;
}



/* Function: DelayLoad_WerReportCloseHandle */

void DelayLoad_WerReportCloseHandle(void)

{
  FUN_0040a7d3();
  return;
}



/* Function: DelayLoad_WerReportSubmit */

void DelayLoad_WerReportSubmit(void)

{
  FUN_0040a7d3();
  return;
}



/* Function: DelayLoad_WerReportCreate */

void DelayLoad_WerReportCreate(void)

{
  FUN_0040a7d3();
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



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a8a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: FUN_0040a8d0 */

int FUN_0040a8d0(void)

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
  
  pcVar1 = DAT_0040b550;
  lpMem = DAT_0040b08c;
  if (DAT_0040b08c == (int *)0x0) {
    return in_EAX;
  }
  local_8 = DAT_0040b08c;
  if (DAT_0040b560 == '\0') {
    if (DAT_0040b550 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040c1e0)();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') goto LAB_004082ec;
    }
    iVar3 = FUN_00408d1b(lpMem + 1,&local_8);
    *lpMem = *lpMem + -1;
    piVar5 = local_8;
    if (*lpMem == 0) {
      FUN_0040808e(lpMem + 2,0);
      FUN_0040808e(lpMem + 3,0);
      if (local_8 != (int *)0x0) {
        DVar4 = GetLastError();
        FUN_00405713(local_8);
        SetLastError(DVar4);
      }
      FUN_004087f4((int)lpMem);
      DVar4 = 0;
      hHeap = GetProcessHeap();
      iVar3 = HeapFree(hHeap,DVar4,lpMem);
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      iVar3 = FUN_00405713(piVar5);
    }
  }
  else {
LAB_004082ec:
    *lpMem = *lpMem + -1;
    iVar3 = *lpMem;
  }
  return iVar3;
}



/* Function: FUN_0040a8f0 */

void FUN_0040a8f0(void)

{
  FUN_00407ff9((int *)&DAT_0040b150);
  return;
}



/* Function: FUN_0040a900 */

void FUN_0040a900(void)

{
  FUN_00407b1c(0x40b690);
  return;
}



/* Function: FUN_0040a910 */

void FUN_0040a910(void)

{
  FUN_0040398f((int *)&DAT_0040b090);
  return;
}



/* Function: FUN_0040a920 */

void FUN_0040a920(void)

{
  FUN_00409963(0x40b6d0);
  return;
}



/* Function: FUN_0040a930 */

void FUN_0040a930(void)

{
  FUN_004099a7((int *)&DAT_0040b17c,DAT_0040b6d4);
  ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
            ((CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *)
             &DAT_0040b19c);
  return;
}



