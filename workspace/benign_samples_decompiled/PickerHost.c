/* Function: FUN_00404690 */

void FUN_00404690(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_0041b28c)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00404713 */

void FUN_00404713(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x12c3;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_004047a8 */

uint __thiscall FUN_004047a8(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_004047df:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_004047df;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_004047eb */

void __fastcall
FUN_004047eb(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  FUN_004051e0(param_20,local_18);
  FUN_0040522e(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_004051e0(param_17,local_48);
  FUN_0040522e(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_0040522e(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_004051e0(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_0040522e(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_0040522e(param_8,local_d8);
  local_e8 = param_7;
  local_e4 = 0;
  local_e0 = 4;
  local_f8 = *param_6;
  local_dc = 0;
  local_f4 = 0;
  local_f0 = 8;
  local_108 = *param_5;
  local_ec = 0;
  local_104 = 0;
  local_100 = 8;
  local_fc = 0;
  FUN_00404713(param_1,param_2,param_3,(LPCGUID)0x0,0x12,local_128);
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004049b4 */

void __fastcall
FUN_004049b4(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  FUN_0040522e(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_004051e0(param_19,local_48);
  FUN_0040522e(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_004051e0(param_16,local_78);
  FUN_0040522e(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_0040522e(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_004051e0(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_0040522e(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_0040522e(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00404713(param_1,param_2,param_3,(LPCGUID)0x0,0x14,local_148);
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404bb5 */

void __fastcall
FUN_00404bb5(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7)

{
  _EVENT_DATA_DESCRIPTOR local_58 [2];
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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  local_18 = param_7;
  local_28 = param_6;
  local_14 = 0;
  local_38 = *param_5;
  local_10 = 4;
  local_c = 0;
  local_24 = 0;
  local_20 = 4;
  local_1c = 0;
  local_34 = 0;
  local_30 = 8;
  local_2c = 0;
  FUN_00404713(param_1,param_2,param_3,(LPCGUID)0x0,5,local_58);
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404c2b */

void __fastcall
FUN_00404c2b(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7,void *param_8,undefined4 param_9,void *param_10,
            undefined4 param_11,void *param_12,undefined4 param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,undefined4 param_18,void *param_19,
            void *param_20,undefined4 param_21,undefined4 param_22,void *param_23)

{
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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  FUN_004051e0(param_23,local_18);
  local_28 = param_22;
  local_38 = param_21;
  local_20 = 1;
  local_30 = 1;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_004051e0(param_20,local_48);
  FUN_0040522e(param_19,local_58);
  local_68 = param_18;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_004051e0(param_17,local_78);
  FUN_0040522e(param_16,local_88);
  local_98 = param_15;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_0040522e(param_14,local_a8);
  local_b8 = param_13;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_004051e0(param_12,local_c8);
  local_d8 = param_11;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_0040522e(param_10,local_e8);
  local_f8 = param_9;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_0040522e(param_8,local_108);
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
  FUN_00404713(param_1,param_2,param_3,(LPCGUID)0x0,0x15,local_158);
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404e48 */

void __fastcall
FUN_00404e48(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7,void *param_8,undefined4 param_9,void *param_10,
            undefined4 param_11,void *param_12,undefined4 param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,undefined4 param_18,void *param_19,
            void *param_20,void *param_21)

{
  _EVENT_DATA_DESCRIPTOR local_138 [2];
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
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  uint local_8;
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  FUN_004051e0(param_21,local_18);
  FUN_004051e0(param_20,local_28);
  FUN_0040522e(param_19,local_38);
  local_48 = param_18;
  local_44 = 0;
  local_40 = 4;
  local_3c = 0;
  FUN_004051e0(param_17,local_58);
  FUN_0040522e(param_16,local_68);
  local_78 = param_15;
  local_74 = 0;
  local_70 = 4;
  local_6c = 0;
  FUN_0040522e(param_14,local_88);
  local_98 = param_13;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_004051e0(param_12,local_a8);
  local_b8 = param_11;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_0040522e(param_10,local_c8);
  local_d8 = param_9;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_0040522e(param_8,local_e8);
  local_f8 = param_7;
  local_f4 = 0;
  local_108 = *param_6;
  local_f0 = 4;
  local_ec = 0;
  local_104 = 0;
  local_118 = *param_5;
  local_100 = 8;
  local_fc = 0;
  local_114 = 0;
  local_110 = 8;
  local_10c = 0;
  FUN_00404713(param_1,param_2,param_3,(LPCGUID)0x0,0x13,local_138);
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405033 */

void __fastcall
FUN_00405033(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6,void *param_7,undefined4 param_8,void *param_9,undefined4 param_10,
            void *param_11,undefined4 param_12,void *param_13,undefined4 param_14,void *param_15,
            void *param_16,undefined4 param_17,void *param_18,void *param_19)

{
  _EVENT_DATA_DESCRIPTOR local_118 [2];
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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  FUN_004051e0(param_19,local_18);
  FUN_0040522e(param_18,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_17;
  local_30 = 4;
  FUN_004051e0(param_16,local_48);
  FUN_0040522e(param_15,local_58);
  local_68 = param_14;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_0040522e(param_13,local_78);
  local_88 = param_12;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_004051e0(param_11,local_98);
  local_a8 = param_10;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_0040522e(param_9,local_b8);
  local_c8 = param_8;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_0040522e(param_7,local_d8);
  local_e8 = param_6;
  local_e4 = 0;
  local_e0 = 4;
  local_dc = 0;
  local_f4 = 0;
  local_f8 = *param_5;
  local_f0 = 8;
  local_ec = 0;
  FUN_00404713(param_1,param_2,param_3,(LPCGUID)0x0,0x11,local_118);
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004051e0 */

void __thiscall FUN_004051e0(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)&DAT_00401e18;
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



/* Function: FUN_0040522e */

void __thiscall FUN_0040522e(void *this,undefined4 *param_1)

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



/* Function: FUN_0040526e */

void __fastcall
FUN_0040526e(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
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
  FUN_00404713(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,9,local_98);
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405323 */

void __fastcall
FUN_00405323(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
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
  FUN_00404713(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,10,local_a8);
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004053eb */

void __fastcall
FUN_004053eb(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  local_18 = param_22;
  local_10 = 4;
  FUN_0040522e(param_21,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_20;
  local_30 = 4;
  FUN_0040522e(param_19,local_48);
  FUN_0040522e(param_18,local_58);
  FUN_0040522e(param_17,local_68);
  FUN_0040522e(param_16,local_78);
  local_88 = param_15;
  local_84 = 0;
  local_80 = 2;
  local_7c = 0;
  FUN_0040522e(param_14,local_98);
  FUN_0040522e(param_13,local_a8);
  FUN_0040522e(param_12,local_b8);
  local_c8 = param_11;
  local_c4 = 0;
  local_c0 = 2;
  local_bc = 0;
  FUN_0040522e(param_10,local_d8);
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
  FUN_00404713(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004055f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004055f0(void)

{
  _DAT_0041a5d0 = FUN_004077d0;
  DAT_0041a5e8 = FUN_004077e0;
  DAT_0041a5dc = FUN_00407870;
  return;
}



/* Function: FUN_00405620 */

void FUN_00405620(void)

{
  FUN_00416722(FUN_00417c90);
  return;
}



/* Function: FUN_00405640 */

void FUN_00405640(void)

{
  FUN_00416722(FUN_00417cc0);
  return;
}



/* Function: FUN_00405660 */

void FUN_00405660(void)

{
  DAT_0041a5c0 = FUN_00408a20;
  DAT_0041a590 = &PTR_s_WilError_03_0041a050;
  DAT_0041a5a8 = &DAT_0041a158;
  return;
}



/* Function: FUN_00405690 */

void FUN_00405690(void)

{
  DAT_0041a5f0 = FUN_00406f10;
  DAT_0041a5c8 = DebugBreak;
  DAT_0041a5ec = FUN_00406f50;
  DAT_0041a5b4 = FUN_00408af0;
  DAT_0041a5a4 = FUN_00408c20;
  DAT_0041a5f4 = FUN_00408b40;
  DAT_0041a5c4 = FUN_00408bb0;
  return;
}



/* Function: FUN_004056e0 */

void FUN_004056e0(void)

{
  FUN_0040f3c0();
  FUN_00416722(FUN_00417cd0);
  return;
}



/* Function: FUN_00405700 */

void FUN_00405700(void)

{
  FUN_00416722(FUN_00417ce0);
  return;
}



/* Function: FUN_00405720 */

void FUN_00405720(void)

{
  DAT_0041a720 = FUN_0040d120;
  DAT_0041a604 = FUN_0040d1a0;
  DAT_0041a63c = FUN_0040d220;
  DAT_0041a740 = FUN_0040d290;
  DAT_0041a648 = FUN_0040b550;
  return;
}



/* Function: FUN_00405760 */

void FUN_00405760(void)

{
  DAT_0041a630 = FUN_0040d940;
  return;
}



/* Function: FUN_00405780 */

void FUN_00405780(void)

{
  DAT_0041a780 = FUN_00412c80;
  return;
}



/* Function: FUN_004057a0 */

void FUN_004057a0(void)

{
  FUN_00414b40();
  DAT_0041a8b8 = 1;
  return;
}



/* Function: FUN_004057c0 */

void FUN_004057c0(void)

{
  FUN_00416722(FUN_00417d00);
  return;
}



/* Function: FUN_004057e0 */

void FUN_004057e0(void)

{
  FUN_00416722(FUN_00417cf0);
  return;
}



/* Function: FUN_004057f2 */

undefined4 __fastcall FUN_004057f2(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0040581d */

int __fastcall FUN_0040581d(int *param_1)

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



/* Function: FUN_0040584d */

int __fastcall FUN_0040584d(int *param_1)

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



/* Function: FUN_00405880 */

void FUN_00405880(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0xc);
  (*(code *)PTR_guard_check_icall_0041b28c)(*(int **)(param_1 + 0xc),param_2);
  (*pcVar1)();
  return;
}



/* Function: FUN_004058b0 */

void FUN_004058b0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x10);
  (*(code *)PTR_guard_check_icall_0041b28c)(*(int **)(param_1 + 0xc));
  (*pcVar1)();
  return;
}



/* Function: FUN_004058e0 */

int FUN_004058e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0040584d(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x14);
      (*(code *)PTR_guard_check_icall_0041b28c)(1);
      (*pcVar1)();
    }
    if (DAT_0041a558 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0041a558 + 8);
      (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00405940 */

void FUN_00405940(int param_1)

{
  FUN_0040581d((int *)(param_1 + 8));
  return;
}



/* Function: FUN_00405960 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00405960(int *param_1,int *param_2,undefined4 *param_3)

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
  piStack_24 = (int *)0x405983;
  iVar1 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if (iVar1 == 0) {
    piStack_24 = (int *)0x405991;
    iVar1 = FUN_004057f2(extraout_ECX,(int *)&DAT_00401db4);
    if (iVar1 == 0) {
      uVar5 = 0x80004002;
      goto LAB_004059be;
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
  uStack_28 = 0x4059bc;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x4059be;
  (*pcVar4)();
LAB_004059be:
  *(undefined4 *)((int)puVar3 + -4) = 0x4059c5;
  return uVar5;
}



/* Function: FUN_004059d3 */

void __fastcall FUN_004059d3(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417578;
  local_10 = ExceptionList;
  uVar3 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405a30 */

undefined4 * FUN_00405a30(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041759b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_00416434(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_00401034;
    puVar3[2] = 1;
    puVar2 = PTR_FUN_00401038;
    local_8 = 1;
    local_18 = puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3);
    (*(code *)puVar2)();
    local_14 = puVar3;
    FUN_004059d3((int *)&local_18);
    puVar3[4] = *(undefined4 *)param_1;
    local_8 = 2;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_8 = 0xffffffff;
    local_18 = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0041a558 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
        (*pcVar1)();
        puVar4 = local_18;
      }
    }
  }
  FUN_004059d3((int *)&local_14);
  ExceptionList = local_10;
  return puVar4;
}



/* Function: FUN_00405b40 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT FUN_00405b40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  HRESULT HVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x405b4c;
  *param_4 = 0;
  if (param_2 == 0) {
    local_14[0] = (undefined4 *)0x0;
    HVar2 = FUN_00405d47(local_14);
    if (-1 < HVar2) {
      local_8 = 0;
      pcVar1 = *(code **)*local_14[0];
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],param_3,param_4);
      HVar2 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  else {
    HVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return HVar2;
}



/* Function: FUN_00405bb0 */

undefined4 FUN_00405bb0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0041a558 == (int *)0x0) {
    RoOriginateError(0x80004005,0);
    uVar2 = 0x80004005;
  }
  else {
    iVar1 = *DAT_0041a558;
    if (param_2 == 0) {
      (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
      (**(code **)(iVar1 + 8))();
    }
    else {
      (*(code *)PTR_guard_check_icall_0041b28c)();
      (**(code **)(iVar1 + 4))();
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00405c00 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00405c00(int *param_1,int *param_2,undefined4 *param_3)

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
  piStack_24 = (int *)0x405c23;
  iVar1 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if (iVar1 == 0) {
    piStack_24 = (int *)0x405c31;
    iVar1 = FUN_004057f2(extraout_ECX,(int *)&DAT_00401dc4);
    if (iVar1 == 0) {
      uVar5 = 0x80004002;
      goto LAB_00405c5e;
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
  uStack_28 = 0x405c5c;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x405c5e;
  (*pcVar4)();
LAB_00405c5e:
  *(undefined4 *)((int)puVar3 + -4) = 0x405c65;
  return uVar5;
}



/* Function: FUN_00405c80 */

int FUN_00405c80(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = FUN_0040584d(param_1 + 2);
  uVar1 = param_1[4];
  if (iVar3 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x14);
      (*(code *)PTR_guard_check_icall_0041b28c)(1);
      (*pcVar2)();
    }
    bVar4 = (uVar1 & 5) == 5;
  }
  else {
    if ((uVar1 & 6) != 0) {
      return iVar3;
    }
    bVar4 = iVar3 == 1;
  }
  if ((bVar4) && (DAT_0041a558 != (int *)0x0)) {
    pcVar2 = *(code **)(*DAT_0041a558 + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
    (*pcVar2)();
  }
  return iVar3;
}



/* Function: FUN_00405d00 */

int FUN_00405d00(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0040581d((int *)(param_1 + 8));
  if ((((*(byte *)(param_1 + 0x10) & 6) == 0) && (iVar2 == 2)) && (DAT_0041a558 != (int *)0x0)) {
    pcVar1 = *(code **)(*DAT_0041a558 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_00405d47 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT __fastcall FUN_00405d47(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  HRESULT HVar4;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x405d53;
  *param_1 = 0;
  puVar3 = (undefined4 *)FUN_00416434(0x10);
  piVar2 = DAT_0041a558;
  if (puVar3 == (undefined4 *)0x0) {
    HVar4 = -0x7ff8fff2;
  }
  else {
    local_8 = 0;
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_00401078;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0041b28c)(piVar2);
      (*pcVar1)();
    }
    *puVar3 = &PTR_FUN_0040104c;
    puVar3[3] = (LPVOID)0x0;
    local_8 = 0xffffffff;
    local_14[0] = puVar3;
    HVar4 = CoCreateInstance((IID *)&DAT_00401dd4,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401db4,
                             (LPVOID *)(puVar3 + 3));
    if (-1 < HVar4) {
      local_8 = 3;
      pcVar1 = *(code **)*puVar3;
      (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,&DAT_00401da4,param_1);
      HVar4 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  return HVar4;
}



/* Function: FUN_00405e10 */

int __thiscall FUN_00405e10(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (int)this;
}



/* Function: FUN_00405e40 */

int __thiscall FUN_00405e40(void *this,byte param_1)

{
  FUN_004059d3((int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (int)this;
}



/* Function: FUN_00405e80 */

int __thiscall FUN_00405e80(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (int)this;
}



/* Function: FUN_00405eb0 */

void FUN_00405eb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0xc);
  (*(code *)PTR_guard_check_icall_0041b28c)
            (*(int **)(param_1 + 0xc),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10,param_11);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405f00 */

void FUN_00405f00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x10);
  (*(code *)PTR_guard_check_icall_0041b28c)
            (*(int **)(param_1 + 0xc),param_2,param_3,param_4,param_5);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405f40 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00405f40(int *param_1,int *param_2,undefined4 *param_3)

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
  piStack_24 = (int *)0x405f63;
  iVar1 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if (iVar1 == 0) {
    piStack_24 = (int *)0x405f71;
    iVar1 = FUN_004057f2(extraout_ECX,(int *)&DAT_00401de4);
    if (iVar1 == 0) {
      uVar5 = 0x80004002;
      goto LAB_00405f9e;
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
  uStack_28 = 0x405f9c;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x405f9e;
  (*pcVar4)();
LAB_00405f9e:
  *(undefined4 *)((int)puVar3 + -4) = 0x405fa5;
  return uVar5;
}



/* Function: FUN_00405fc0 */

undefined4 * FUN_00405fc0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041759b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_00416434(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_004010bc;
    puVar3[2] = 1;
    puVar2 = PTR_FUN_004010c0;
    local_8 = 1;
    local_18 = puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3);
    (*(code *)puVar2)();
    local_14 = puVar3;
    FUN_004059d3((int *)&local_18);
    puVar3[4] = *(undefined4 *)param_1;
    local_8 = 2;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_8 = 0xffffffff;
    local_18 = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0041a558 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
        (*pcVar1)();
        puVar4 = local_18;
      }
    }
  }
  FUN_004059d3((int *)&local_14);
  ExceptionList = local_10;
  return puVar4;
}



/* Function: FUN_004060d0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT FUN_004060d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  HRESULT HVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4060dc;
  *param_4 = 0;
  if (param_2 == 0) {
    local_14[0] = (undefined4 *)0x0;
    HVar2 = FUN_00406140(local_14);
    if (-1 < HVar2) {
      local_8 = 0;
      pcVar1 = *(code **)*local_14[0];
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],param_3,param_4);
      HVar2 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  else {
    HVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return HVar2;
}



/* Function: FUN_00406140 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT __fastcall FUN_00406140(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  HRESULT HVar4;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x40614c;
  *param_1 = 0;
  puVar3 = (undefined4 *)FUN_00416434(0x10);
  piVar2 = DAT_0041a558;
  if (puVar3 == (undefined4 *)0x0) {
    HVar4 = -0x7ff8fff2;
  }
  else {
    local_8 = 0;
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_00401090;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0041b28c)(piVar2);
      (*pcVar1)();
    }
    *puVar3 = &PTR_FUN_004010d4;
    puVar3[3] = (LPVOID)0x0;
    local_8 = 0xffffffff;
    local_14[0] = puVar3;
    HVar4 = CoCreateInstance((IID *)&DAT_00401df4,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401de4,
                             (LPVOID *)(puVar3 + 3));
    if (-1 < HVar4) {
      local_8 = 3;
      pcVar1 = *(code **)*puVar3;
      (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,&DAT_00401da4,param_1);
      HVar4 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  return HVar4;
}



/* Function: FUN_004061fe */

undefined4 __fastcall FUN_004061fe(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_00406285 */

void __fastcall FUN_00406285(DWORD param_1)

{
  RaiseException(param_1,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_00406299 */

undefined4 * __fastcall FUN_00406299(undefined4 *param_1)

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
  
  puStack_c = &LAB_00417604;
  local_10 = ExceptionList;
  uVar5 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &PTR_o__purecall_00401314;
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
      (*(code *)PTR_guard_check_icall_0041b28c)(piVar3,uVar5);
      (*pcVar4)();
    }
    ppvObject = (void **)(param_1 + 3);
    riid = (IID *)&DAT_00402580;
    local_8 = CONCAT31(local_8._1_3_,1);
    (*(code *)PTR_guard_check_icall_0041b28c)();
    (*p_Var2)(This,riid,ppvObject);
  }
  FUN_004059d3((int *)&local_14);
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00406360 */

undefined4
FUN_00406360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    (*(code *)PTR_guard_check_icall_0041b28c)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004063b0 */

undefined4
FUN_004063b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    (*(code *)PTR_guard_check_icall_0041b28c)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406400 */

undefined4
FUN_00406400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    (*(code *)PTR_guard_check_icall_0041b28c)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406450 */

undefined4 FUN_00406450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar1,param_2,param_3,param_4);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406490 */

undefined4 FUN_00406490(int param_1,undefined4 param_2)

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
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004064d0 */

undefined4 FUN_004064d0(int param_1,undefined4 param_2)

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
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406505 */

undefined4 * __thiscall FUN_00406505(void *this,undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = DAT_0041a558;
  puStack_c = &LAB_00417627;
  local_10 = ExceptionList;
  uVar3 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined ***)this = &PTR_FUN_00401350;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar2,uVar3);
    (*pcVar1)();
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0x3fffffff;
  *(undefined ***)this = &PTR_FUN_004012d0;
  *(undefined4 *)((int)this + 8) = 2;
  ExceptionList = local_10;
  return (undefined4 *)this;
}



/* Function: FUN_00406590 */

undefined4 FUN_00406590(int param_1,undefined4 param_2,undefined4 *param_3)

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
  (*(code *)PTR_guard_check_icall_0041b28c)(*(undefined4 **)(param_1 + 0x10),param_2,param_3);
  uVar5 = (*pcVar3)();
  pcVar3 = *(code **)(**(int **)(param_1 + 0x10) + 8);
  (*(code *)PTR_guard_check_icall_0041b28c)(*(int **)(param_1 + 0x10));
  (*pcVar3)();
  return uVar5;
}



/* Function: FUN_00406600 */

undefined4 * __thiscall FUN_00406600(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004012d0;
  *(undefined4 *)((int)this + 0xc) = 0xc0000001;
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00406636 */

void __thiscall FUN_00406636(void *this,undefined4 param_1,uint param_2,uint param_3)

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
  FUN_00406285(DVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040666d */

void __fastcall FUN_0040666d(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* Function: FUN_00406678 */

undefined4 __fastcall FUN_00406678(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_004066de */

undefined4 __fastcall FUN_004066de(short *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_004067e5(param_1,param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_00406713 */

undefined4 __thiscall FUN_00406713(void *this,int param_1)

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
    uVar2 = FUN_004067e5((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_0040676a */

undefined4 __fastcall
FUN_0040676a(undefined2 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00406838((int)param_1,param_2,param_1,param_3,param_4);
  }
  return uVar1;
}



/* Function: FUN_004067a1 */

undefined4 __cdecl FUN_004067a1(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00406838((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_004067e5 */

undefined4 __fastcall FUN_004067e5(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_00406838 */

undefined4 __fastcall
FUN_00406838(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_0041728e(param_1,uVar1,param_4,param_5);
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



/* Function: FUN_004068c0 */

char * __fastcall FUN_004068c0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_004068e0 */

undefined4 * __thiscall FUN_004068e0(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00406915 */

short * __cdecl FUN_00406915(short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  
  FUN_0040676a(param_1,(int)param_2 - (int)param_1 >> 1,param_3,&stack0x00000010);
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



/* Function: FUN_0040695a */

void __fastcall FUN_0040695a(short *param_1,int param_2,int param_3)

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
  
  pcVar2 = DAT_0041a598;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041764a;
  local_10 = ExceptionList;
  local_14 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar2 != (code *)0x0) && (DAT_0041a5ac != '\0')) {
      (*(code *)PTR_guard_check_icall_0041b28c)(param_3,param_1,param_2,local_14);
      (*pcVar2)();
      if (*param_1 != 0) goto LAB_00406bc9;
    }
    memset(local_214,0,0x200);
    pcVar2 = DAT_0041a5b4;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
    }
    else if (DAT_0041a5b4 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0041b28c)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar2)();
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_00406915(param_1,psVar1,L"%hs!%p: ");
    }
    else {
      local_218 = FUN_00406915(param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_00406915(local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar3 = FUN_00406915(local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar3 = FUN_00406915(psVar3,psVar1,L"    ");
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar3 = FUN_00406915(psVar3,psVar1,L"Msg:[%ws] ");
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar3 = FUN_00406915(psVar3,psVar1,L"CallContext:[%hs] ");
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00406915(psVar3,psVar1,&DAT_00401f6c);
        }
        else {
          FUN_00406915(psVar3,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_00406915(psVar3,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_00406bc9:
  ExceptionList = local_10;
  FUN_00416420(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406bf2 */

uint * __thiscall FUN_00406bf2(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00407024((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00406c16 */

LPVOID __fastcall FUN_00406c16(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_0041767a;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0041a564 == (FARPROC)0x0) {
    if (DAT_0041a644 != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0041a564 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0041a644 = '\x01';
    if (DAT_0041a564 == (FARPROC)0x0) {
      DAT_0041a644 = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_0041a564;
  (*(code *)PTR_guard_check_icall_0041b28c)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00406cc6 */

undefined4 * __thiscall FUN_00406cc6(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_00406cff((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00406cff */

void __fastcall FUN_00406cff(undefined4 *param_1)

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



/* Function: FUN_00406d36 */

undefined4 __thiscall FUN_00406d36(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_00406cff((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_00406d80;
    *piVar1 = 0;
    FUN_00406cff((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_00406d80:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_00406d8f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00406d8f(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0041a608;
  _DAT_0041a60c = param_1;
  LOCK();
  DAT_0041a608 = DAT_0041a608 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00406da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00406da8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0041a670;
  _DAT_0041a584 = param_1;
  LOCK();
  DAT_0041a670 = DAT_0041a670 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00406dc1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00406dc1(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0041a738;
  _DAT_0041a654 = param_1;
  LOCK();
  DAT_0041a738 = DAT_0041a738 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00406de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00406de0(undefined4 param_1)

{
  _DAT_0041a6f4 = param_1;
  return 1;
}



/* Function: FUN_00406dfa */

void FUN_00406dfa(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0041a5ec;
  if (DAT_0041a5ec != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406e2a */

void FUN_00406e2a(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
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
      FUN_00406678(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406f10 */

undefined * FUN_00406f10(void)

{
  if (DAT_0041a634 == '\0') {
    FUN_00406e2a((LPCWSTR)FUN_00406de0,(uint *)0x0,&DAT_0041a678,0x40);
    DAT_0041a634 = '\x01';
  }
  return &DAT_0041a678;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00406f50 */

void FUN_00406f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00406f91 */

uint __fastcall FUN_00406f91(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_0041a5f4;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041769d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int)param_1 < 0) {
    if (param_1 == 0xc0000017) {
      uVar2 = 0x8007000e;
    }
    else {
      if (DAT_0041a5f4 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0041b28c)(param_1,DAT_0041a100 ^ (uint)&stack0xfffffffc);
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



/* Function: FUN_00407024 */

uint __fastcall FUN_00407024(uint param_1)

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



/* Function: FUN_004071f9 */

DWORD __fastcall
FUN_004071f9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041769d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00411338(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_00407264 */

uint __fastcall
FUN_00407264(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004176c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00411338(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_004072e5 */

void __fastcall FUN_004072e5(undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  FUN_00407264(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00407302 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00407302(void *this,int param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined2 local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
    *(undefined2 *)this = 0;
  }
  else if (param_2 == 0) {
    FUN_004067a1((undefined2 *)this,0x800,&DAT_00401fdc);
  }
  else {
    FUN_004067a1(local_1008,0x800,&DAT_00401fdc);
    FUN_00406838((int)this,0x800,extraout_ECX,local_1008,param_2);
  }
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040738d */

char * __fastcall FUN_0040738d(char *param_1)

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



/* Function: FUN_004073ab */

int __fastcall FUN_004073ab(short *param_1)

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



/* Function: FUN_004073d3 */

undefined1 FUN_004073d3(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_0041a5c4;
  if (DAT_0041a5e4 != '\0') {
    return 1;
  }
  if (DAT_0041a5c4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00407403 */

void __thiscall FUN_00407403(void *this,undefined4 *param_1)

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
  iVar10 = FUN_004073ab((short *)param_1[0x12]);
  iVar1 = FUN_004073ab((short *)param_1[0xf]);
  iVar2 = FUN_004073ab((short *)param_1[5]);
  pcVar3 = FUN_0040738d((char *)param_1[0x11]);
  pcVar4 = FUN_0040738d((char *)param_1[0xe]);
  pcVar5 = FUN_0040738d((char *)param_1[0xc]);
  pcVar6 = FUN_0040738d((char *)param_1[9]);
  pcVar7 = FUN_0040738d((char *)param_1[8]);
  pcVar8 = FUN_0040738d((char *)param_1[7]);
  pcVar9 = FUN_0040738d((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_00406cff(this_00);
    FUN_00406d36(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_00411380(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_004113f0(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_004113f0(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_004113f0(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_004113f0(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_004113f0(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_004113f0(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_00411380(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_004113f0(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_00411380(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_00407596 */

undefined4 * __thiscall FUN_00407596(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401364;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_00407403((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_004075e0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004075e0(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_0040695a(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_00406d36(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
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
  FUN_004076c0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return this;
}



/* Function: FUN_004076c0 */

void __fastcall FUN_004076c0(undefined4 *param_1)

{
  FUN_00406cff(param_1 + 0x1b);
  FUN_00406cff(param_1 + 0x19);
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_004076ed */

void FUN_004076ed(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_0041a5e8;
  if (DAT_0041a5e8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040770d */

void __fastcall FUN_0040770d(int *param_1,undefined2 *param_2,uint param_3)

{
  code *pcVar1;
  
  if (param_2 != (undefined2 *)0x0) {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)();
    (*pcVar1)();
    FUN_004067a1(param_2,param_3,L"std::exception: %hs");
  }
  return;
}



/* Function: FUN_0040774d */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_0040774d(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0041a5a0;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  iVar2 = (*pcVar1)();
  if ((iVar2 < 0) && (param_1 == 0)) {
    FUN_004077ab();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: Catch@0040777e */

undefined * Catch_0040777e(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_0040770d(*(int **)(unaff_EBP + -0x20),*(undefined2 **)(unaff_EBP + -0x1c),
               *(uint *)(unaff_EBP + -0x18));
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (-1 < iVar1) {
    iVar1 = -0x7ff8fdc2;
  }
  *(int *)(unaff_EBP + -0x14) = iVar1;
  return &DAT_004077a8;
}



/* Function: Catch_All@004077a2 */

undefined * Catch_All_004077a2(void)

{
  return &DAT_004077a8;
}



/* Function: FUN_004077ab */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004077ab(void)

{
  return;
}



/* Function: FUN_004077d0 */

void FUN_004077d0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_004077e0 */

void FUN_004077e0(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_00407596(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_00418468);
}



/* Function: FUN_00407810 */

exception * __thiscall FUN_00407810(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401364;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_00406cc6((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_00406cc6((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00407870 */

void FUN_00407870(uint *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417706;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0;
  }
  pcVar1 = DAT_0041a5b8;
  *param_4 = 0;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_2,param_3,param_4);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) goto LAB_004078cd;
  }
  pcVar1 = DAT_0041a5e0;
  if (DAT_0041a5e0 == (code *)0x0) {
    if (DAT_0041a5a0 != 0) {
      uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
    }
    FUN_004079a8((ThrowInfo *)0x0);
    return;
  }
  (*(code *)PTR_guard_check_icall_0041b28c)(param_2,param_3,param_4);
  uVar2 = (*pcVar1)();
LAB_004078cd:
  *param_1 = uVar2;
  FUN_00407a4d(uVar2);
  return;
}



/* Function: Catch@0040790a */

undefined * Catch_0040790a(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_0040695a(psVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_00407944;
}



/* Function: Catch@00407954 */

undefined * Catch_00407954(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_0040770d(*(int **)(unaff_EBP + -0x1c),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_00407024(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00407944;
}



/* Function: Catch_All@0040797c */

undefined * Catch_All_0040797c(void)

{
  uint uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_0040774d(*(int *)(unaff_EBP + 0xc));
  if ((int)uVar1 < 0) {
    *(uint *)(unaff_EBP + -0x30) = uVar1;
    uVar1 = FUN_00407024(uVar1);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(uint *)(unaff_EBP + -0x2c) = uVar1;
    return &DAT_00407944;
  }
  return &DAT_00407a44;
}



/* Function: FUN_004079a8 */

void FUN_004079a8(ThrowInfo *param_1)

{
  int unaff_EBP;
  void *unaff_retaddr;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(unaff_retaddr,param_1);
}



/* Function: Catch@004079b4 */

undefined * Catch_004079b4(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x18);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_0040695a(psVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_00407944;
}



/* Function: Catch@004079ee */

undefined * Catch_004079ee(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_0040770d(*(int **)(unaff_EBP + -0x20),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_00407024(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00407944;
}



/* Function: Catch@00407a16 */

undefined * Catch_00407a16(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_0040770d(*(int **)(unaff_EBP + -0x24),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007023e;
  uVar1 = FUN_00407024(0x8007023e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00407944;
}



/* Function: Catch_All@00407a3e */

undefined * Catch_All_00407a3e(void)

{
  return &DAT_00407a44;
}



/* Function: FUN_00407a4d */

void __fastcall FUN_00407a4d(uint param_1)

{
  uint uVar1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  uVar1 = FUN_00407024(param_1);
  *(uint *)(unaff_ESI + 4) = uVar1;
  *(undefined4 *)(unaff_ESI + 8) = unaff_EBX;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_00407a80 */

void __fastcall
FUN_00407a80(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
  puStack_c = &LAB_00417729;
  local_10 = ExceptionList;
  uVar3 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar4 = *param_8;
  param_15[2] = iVar4;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar4 = FUN_00406d8f(iVar4);
  }
  else if (param_7 == 1) {
    iVar4 = FUN_00406da8(iVar4);
  }
  else if (param_7 == 2) {
    if (-1 < iVar4) {
      iVar4 = -0x7ff8fd64;
      FUN_00411338(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar5 = FUN_00407024(0x8007029c);
      param_15[3] = uVar5;
    }
    iVar4 = FUN_00406dc1(iVar4);
  }
  else if (param_7 == 3) {
    iVar4 = FUN_00406de0(iVar4);
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
  iVar6 = DAT_0041a638 + 1;
  DAT_0041a638 = DAT_0041a638 + 1;
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
  pcVar1 = DAT_0041a5f0;
  if (DAT_0041a5f0 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0041b28c)(uVar3);
    iVar4 = (*pcVar1)();
  }
  pcVar1 = DAT_0041a5a4;
  param_15[0x13] = iVar4;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0041a5c0;
  if (DAT_0041a5c0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0041a5bc;
  if (DAT_0041a5bc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0041a5d4;
  if ((DAT_0041a5d4 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_004081b7();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar3 = FUN_00407024(0x8000ffff);
    param_15[3] = uVar3;
  }
  pcVar1 = DAT_0041a58c;
  if (DAT_0041a594 == '\0') {
    if (DAT_0041a58c == (code *)0x0) {
      BVar8 = IsDebuggerPresent();
      cVar2 = BVar8 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0041b28c)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00407c88;
  }
  else {
LAB_00407c88:
    pcVar1 = DAT_0041a598;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_0041a598 != (code *)0x0) && (DAT_0041a5ac == '\0')) {
        (*(code *)PTR_guard_check_icall_0041b28c)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_0040695a(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00407cf1;
    }
  }
  pcVar1 = DAT_0041a598;
  if ((DAT_0041a598 != (code *)0x0) && (DAT_0041a5ac == '\0')) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00407cf1:
  pcVar1 = DAT_0041a5c8;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_0041a59c != '\0')) &&
     (DAT_0041a5c8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041b28c)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407d37 */

void __fastcall FUN_00407d37(int param_1)

{
  code *pcVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar1 = DAT_0041a5f8;
  if (DAT_0041a5f8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_0041a5d8;
  if (DAT_0041a5d8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
    (*pcVar1)();
  }
  memset(&uStack_58,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  uStack_58 = 0xc0000409;
  uStack_48 = 1;
  uStack_54 = 1;
  uStack_44 = 7;
  if (iVar2 != 0) goto LAB_00407dad;
  uVar3 = 1;
  do {
    FUN_00406dfa(uVar3);
    iVar2 = extraout_ECX;
LAB_00407dad:
    uStack_40 = *(undefined4 *)(param_1 + 8);
    uStack_3c = *(undefined4 *)(param_1 + 0x28);
    uStack_48 = 3;
    uVar3 = 0;
    iStack_4c = iVar2;
  } while( true );
}



/* Function: FUN_00407dd5 */

void __fastcall
FUN_00407dd5(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  code *pcVar1;
  
  FUN_00411464(param_1,param_2,param_3,param_1,param_1,param_6,param_7,param_8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407df5 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00407df5(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,int param_8,int param_9)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  short local_1008 [2048];
  undefined4 uStack_8;
  
  uStack_8 = 0x407e04;
  FUN_00407302(local_1008,param_8,param_9);
  FUN_00407dd5(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,param_7,local_1008);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407e4b */

void __fastcall
FUN_00407e4b(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

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
  puVar2 = FUN_00406bf2((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  FUN_00407dd5(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14,
               (short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407e91 */

void __fastcall FUN_00407e91(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_004071f9(param_1,param_2,
                                "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
                                param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00406bf2(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  FUN_00407dd5(local_8,param_2,0x402020,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14
               ,(short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407ef3 */

void __fastcall
FUN_00407ef3(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            void *param_7,int param_8,int param_9)

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
  puVar2 = FUN_00406bf2(param_7,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  FUN_00407df5(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14,param_8,
               param_9);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407f3a */

void __fastcall FUN_00407f3a(int param_1,int param_2,int param_3,uint param_4)

{
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041774c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004114c7(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407f88 */

void __fastcall FUN_00407f88(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041774c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0041150a(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00407fd4 */

void __fastcall FUN_00407fd4(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041776f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00411563(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040801e */

uint __thiscall FUN_0040801e(void *this,undefined4 param_1,uint param_2)

{
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041774c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00411338(this,0x3be,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",0,0,
               unaff_retaddr,param_2);
  ExceptionList = local_10;
  return param_2;
}



/* Function: FUN_00408078 */

void __fastcall FUN_00408078(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041776f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00407e91(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004080b4 */

void __fastcall
FUN_004080b4(undefined4 param_1,int param_2,int param_3,int param_4,void *param_5,int param_6,
            int param_7)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041776f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00407ef3(param_1,param_2,param_3,param_1,param_1,param_4,param_5,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_004080fb */

uint __cdecl
FUN_004080fb(undefined4 param_1,int param_2,int param_3,void *param_4,char param_5,int param_6)

{
  code *pcVar1;
  uint in_EAX;
  uint uVar2;
  int unaff_retaddr;
  
  if (param_5 == '\0') {
    return in_EAX & 0xffffff00;
  }
  FUN_004080b4(param_1,param_2,param_3,unaff_retaddr,param_4,param_6,(int)&stack0x0000001c);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_0040812c */

void __fastcall FUN_0040812c(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041774c;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407e4b(param_1,0xc27,0x402020,param_1,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2);
  return;
}



/* Function: FUN_00408171 */

void __fastcall FUN_00408171(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041776f;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00407e4b(param_1,0x137b,0x4023b4,param_1,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2,param_1);
  return;
}



/* Function: FUN_004081b7 */

void FUN_004081b7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004081c3 */

void FUN_004081c3(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00408078(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004081f0 */

void FUN_004081f0(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00408078(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040821b */

uint __fastcall FUN_0040821b(void *param_1,int *param_2)

{
  uint uVar1;
  int unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  uVar1 = FUN_0040843e(param_1,local_c);
  if ((int)uVar1 < 0) {
    FUN_00407f3a(unaff_retaddr,100,0x401ff4,uVar1);
    FUN_00407f3a(unaff_retaddr,0x6d,0x401ff4,uVar1);
  }
  else {
    *param_2 = local_c[0] << 2;
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00408278 */

void __thiscall FUN_00408278(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_004081b7();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004067e5(local_214,0x104,this,param_1);
  FUN_00406713(local_214,0x402058);
  uVar3 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar3 != 0) {
    uVar2 = uVar3;
  }
  uVar2 = FUN_0040ef06(this,uVar3,uVar2,local_214);
  if ((int)uVar2 < 0) {
    FUN_00407f3a(unaff_retaddr,0x88,0x401ff4,uVar2);
  }
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040831f */

undefined4 __fastcall FUN_0040831f(HANDLE param_1,int *param_2)

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
    goto LAB_00408342;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00408342:
        uVar2 = FUN_00407fd4(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00408410:
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
        goto LAB_00408342;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00408342;
          }
          if (DVar1 == 0) goto LAB_00408410;
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
  FUN_00407f3a(unaff_retaddr,iVar4,0x401ff4,0x8000ffff);
  return 0x8000ffff;
}



/* Function: FUN_0040843e */

void __thiscall FUN_0040843e(void *this,int *param_1)

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
  
  local_c = DAT_0041a100 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_004067e5(local_218,0x104,this,(int)this);
  FUN_00406713(local_218,0x402058);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_00407fd4(unaff_retaddr,0xcd);
    }
LAB_004084e8:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00408502;
  }
  else {
    iStack_220 = 0;
    uVar3 = FUN_0040831f(pvVar1,&iStack_220);
    if ((int)uVar3 < 0) {
      FUN_00407f3a(unaff_retaddr,0xd3,0x401ff4,uVar3);
      goto LAB_004084e8;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_004081c3(pvVar1);
LAB_00408502:
  FUN_00416420(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_00408521 */

void __thiscall FUN_00408521(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_004073ab(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_0040738d(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_0040738d(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00406c16(8,(SIZE_T)pcVar4);
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
    FUN_004113f0(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_004113f0(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_00411380(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00408614 */

void __fastcall FUN_00408614(int param_1)

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



/* Function: FUN_00408683 */

void __thiscall FUN_00408683(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00406c16(8,0xdc);
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
    FUN_00408521(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00408741 */

DWORD * __fastcall FUN_00408741(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_0041a590;
  if (DAT_0041a590 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0041a590[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_0040f003(*DAT_0041a590,&local_8);
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



/* Function: FUN_004087ca */

void __fastcall FUN_004087ca(undefined4 *param_1)

{
  code *pcVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  undefined1 local_60 [92];
  
  if (param_1[3] == 0) {
    if (DAT_0041a5a8 == 0) {
      *param_1 = 0;
    }
    else {
      pDVar2 = FUN_0040ee2f('\x01');
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
  FUN_00407d37((int)local_60);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040882d */

void __fastcall FUN_0040882d(undefined4 *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  void *unaff_retaddr;
  
  DVar2 = GetCurrentThreadId();
  if (param_1[3] != DVar2) {
    FUN_0040801e(unaff_retaddr,extraout_ECX,0x8007029c);
  }
  param_1[3] = 0;
  piVar3 = (int *)*param_1;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 == (undefined4 *)0x0) {
LAB_0040886d:
      *param_1 = 0;
      return;
    }
    if (puVar1 == param_1) {
      *piVar3 = param_1[2];
      goto LAB_0040886d;
    }
    piVar3 = puVar1 + 2;
    *param_1 = piVar3;
  } while( true );
}



/* Function: FUN_0040887a */

uint __fastcall FUN_0040887a(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_0040887a(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0041a14c + 1;
        DAT_0041a14c = DAT_0041a14c + 1;
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
        pcVar5 = (char *)FUN_004061fe(pcVar7,(uint)pcVar9,(void *)piVar2[1],(uint)pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00408939 */

void __fastcall FUN_00408939(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  DWORD *pDVar4;
  undefined4 uVar5;
  DWORD DVar6;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417792;
  local_10 = ExceptionList;
  uVar3 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_11 = 0;
  *param_2 = '\0';
  if (DAT_0041a5a8 != 0) {
    pDVar4 = FUN_0040ee2f('\0');
    if ((pDVar4 == (DWORD *)0x0) || (*pDVar4 == 0)) {
      local_11 = 0;
    }
    else {
      *param_2 = '\0';
      uVar5 = FUN_0040887a(param_1,*pDVar4,param_2,param_3);
      if ((char)uVar5 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar6 = *pDVar4;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar6 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar6 = *(DWORD *)(DVar6 + 8);
      } while (DVar6 != 0);
    }
  }
  pcVar1 = DAT_0041a5b0;
  if (DAT_0041a5b0 != (code *)0x0) {
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (*(code *)PTR_guard_check_icall_0041b28c)(uVar5,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408a20 */

void FUN_00408a20(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00408939((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_0041a71c != DVar2) {
    LOCK();
    iVar1 = DAT_0041a73c + 1;
    UNLOCK();
    iVar3 = DAT_0041a73c + 1;
    DAT_0041a73c = iVar1;
    if (iVar3 < 4) {
      DAT_0041a71c = DVar2;
      this = FUN_00408741(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00408683(this,param_1);
      }
      DAT_0041a71c = 0;
    }
    LOCK();
    DAT_0041a73c = DAT_0041a73c + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00408a85 */

void __fastcall FUN_00408a85(LPCSTR param_1)

{
  if (DAT_0041a650 == (HMODULE)0x0) {
    DAT_0041a650 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_0041a650,param_1);
  return;
}



/* Function: FUN_00408ab1 */

FARPROC __fastcall FUN_00408ab1(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_0041a6b8 == (HMODULE)0x0) &&
     (DAT_0041a6b8 = GetModuleHandleW(L"kernelbase.dll"), DAT_0041a6b8 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_0041a6b8,param_1);
  return pFVar1;
}



/* Function: FUN_00408af0 */

void FUN_00408af0(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0041a650 == (HMODULE)0x0) {
    DAT_0041a650 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0041a650,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00408b40 */

void FUN_00408b40(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041776f;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_0041a570 == (code *)0x0) &&
     (DAT_0041a570 = (code *)FUN_00408a85("RtlNtStatusToDosErrorNoTeb"), DAT_0041a570 == (code *)0x0
     )) {
    ExceptionList = local_10;
    return;
  }
  pcVar1 = DAT_0041a570;
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408bb0 */

undefined4 FUN_00408bb0(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041776f;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_0041a6f0 == (code *)0x0) &&
     (DAT_0041a6f0 = (code *)FUN_00408a85("RtlDllShutdownInProgress"), DAT_0041a6f0 == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_0041a6f0;
  (*(code *)PTR_guard_check_icall_0041b28c)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_00408c20 */

void FUN_00408c20(undefined1 *param_1)

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
  
  puStack_c = &LAB_004177b5;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_0041a5fc;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_0041a600 == (FARPROC)0x0) {
    DAT_0041a600 = FUN_00408ab1("WilFailureNotifyWatchers");
    if (DAT_0041a600 == (FARPROC)0x0) goto LAB_00408cbf;
  }
  pFVar1 = DAT_0041a600;
  (*(code *)PTR_guard_check_icall_0041b28c)(0,&local_34,&local_18,uVar2);
  (*pFVar1)();
LAB_00408cbf:
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



/* Function: FUN_00408d04 */

void __fastcall FUN_00408d04(int param_1)

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



/* Function: FUN_00408d50 */

void __thiscall FUN_00408d50(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_00408dc0(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00408eba(this,param_2);
    }
  }
  return;
}



/* Function: FUN_00408d8d */

void __fastcall FUN_00408d8d(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_0040121c;
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



/* Function: FUN_00408dc0 */

void __thiscall FUN_00408dc0(void *this,undefined4 *param_1)

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
    uVar1 = FUN_004047a8(this_00,0,0x2000);
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
      FUN_004047eb((int)this_00,&DAT_004033e4,(LPCGUID)0x0,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00408eba */

void __thiscall FUN_00408eba(void *this,undefined4 *param_1)

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
    FUN_004049b4((int)*(uint **)((int)this + 4),&DAT_0040366b,(LPCGUID)0x0,param_1,&local_4c,
                 &local_48,&local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                 &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,
                 &local_8);
  }
  return;
}



/* Function: FUN_00408fab */

void __thiscall FUN_00408fab(void *this,PVOID param_1)

{
  PREGHANDLE RegHandle;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
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
  UVar3 = EventRegister(&local_18,FUN_00404690,param_1,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)param_1 + 0x1c),2,
                        *(undefined2 **)((int)param_1 + 4),**(undefined2 **)((int)param_1 + 4));
  }
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)((int)this + 0xc) = 1;
  pcVar2 = *(code **)(*this + 4);
  (*(code *)PTR_guard_check_icall_0041b28c)();
  (*pcVar2)();
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00409050 */

undefined4 __thiscall FUN_00409050(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_0041a150 != iVar1;
  iVar3 = DAT_0041a150;
  DAT_0041a150 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00409090 */

undefined4 * __thiscall FUN_00409090(void *this,byte param_1)

{
  FUN_00408d8d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004090ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004090ba(void)

{
  BOOL BVar1;
  undefined *local_18;
  int local_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0041a7b8,0,&local_14,&local_18);
  if ((BVar1 != 0) && (local_14 != 0)) {
    puStack_10 = &DAT_0041a7b8;
    local_18 = &DAT_0041a7bc;
    _DAT_0041a7c0 = 0;
    DAT_0041a7c4 = 0;
    _DAT_0041a7c8 = 0;
    _DAT_0041a7bc = &PTR_FUN_00401238;
    _DAT_0041a7cc = &DAT_0041a000;
    FUN_00416722(FUN_00409150);
    uStack_c = 0;
    FUN_0040f1c2((int *)&puStack_10);
  }
  return local_18;
}



/* Function: FUN_00409150 */

void FUN_00409150(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0041a7b8,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0041b28c)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004091a0 */

void __fastcall FUN_004091a0(PSRWLOCK param_1)

{
  PVOID pvVar1;
  uint *this;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 *local_40;
  undefined *local_3c;
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
  
  pvVar1 = param_1[0x2a].Ptr;
  if (((*(int *)((int)pvVar1 + 0x38) < 0) &&
      (*(int *)((int)pvVar1 + 0x38) == *(int *)((int)pvVar1 + 0x44))) &&
     ((undefined4 *)((int)pvVar1 + 0x3c) != (undefined4 *)0x0)) {
    FUN_0040e8d9(param_1);
    puVar2 = FUN_004090ba();
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_004047a8(*(uint **)(puVar2 + 4),0,0x4000);
      if ((char)uVar3 != '\0') {
        local_8 = *(undefined4 *)((int)pvVar1 + 0x84);
        local_c = *(undefined4 *)((int)pvVar1 + 0x80);
        local_10 = *(undefined4 *)((int)pvVar1 + 0x7c);
        local_14 = *(undefined4 *)((int)pvVar1 + 0x78);
        local_18 = *(undefined4 *)((int)pvVar1 + 0x74);
        local_1c = *(undefined4 *)((int)pvVar1 + 0x70);
        local_20 = *(undefined4 *)((int)pvVar1 + 0x6c);
        local_24 = *(undefined4 *)((int)pvVar1 + 0x54);
        local_28 = *(undefined4 *)((int)pvVar1 + 0x50);
        local_2c = *(undefined4 *)((int)pvVar1 + 0x3c);
        local_30 = *(undefined4 *)((int)pvVar1 + 0x88);
        local_34 = *(undefined4 *)((int)pvVar1 + 100);
        local_38 = *(undefined4 *)((int)pvVar1 + 0x60);
        local_3c = *(undefined **)((int)pvVar1 + 0x44);
        local_40 = &local_4c;
        local_4c = 0x1000000;
        local_48 = 0;
        local_44 = &DAT_004024e8;
        FUN_004047eb(extraout_ECX,&DAT_004038b6,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX,
                     &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28
                     ,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8)
        ;
      }
    }
  }
  else {
    FUN_0040e8d9(param_1);
    puVar2 = FUN_004090ba();
    this = *(uint **)(puVar2 + 4);
    if (5 < *this) {
      uVar3 = FUN_004047a8(this,0,0x4000);
      if ((char)uVar3 != '\0') {
        local_44 = (undefined *)GetCurrentThreadId();
        local_3c = &DAT_004024e8;
        local_40 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
        FUN_00404bb5((int)this,&DAT_00403dc1,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX_00,
                     &local_3c,&local_40,&local_44);
      }
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_0040882d(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_00409340 */

bool FUN_00409340(int param_1)

{
  bool bVar1;
  
  bVar1 = DAT_0041a150 == param_1;
  DAT_0041a150 = param_1;
  return bVar1;
}



/* Function: FUN_00409361 */

void __fastcall FUN_00409361(PSRWLOCK param_1)

{
  PSRWLOCK pRVar1;
  bool bVar2;
  PSRWLOCK local_8;
  
  bVar2 = true;
  pRVar1 = param_1 + 0x2b;
  param_1->Ptr = &PTR_FUN_00401390;
  local_8 = param_1;
  if (pRVar1->Ptr != (PVOID)0x0) {
    FUN_0040f504(param_1,&local_8);
                    /* WARNING: Load size is inaccurate */
    if (((int *)pRVar1->Ptr == (int *)0x0) || (*pRVar1->Ptr != 1)) {
      bVar2 = false;
      FUN_0040f439((int *)pRVar1);
    }
    if (local_8 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_8);
    }
    if (!bVar2) goto LAB_004093c7;
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_1[0x2a].Ptr == 1) {
    FUN_0040f475((int)param_1[0x2a].Ptr);
    FUN_0040f57b((int *)param_1);
  }
LAB_004093c7:
  FUN_00409e9a((int)param_1);
  return;
}



/* Function: FUN_004093d9 */

void __thiscall FUN_004093d9(void *this,undefined4 param_1,PSRWLOCK param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *this_00;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  LPCGUID pGVar5;
  PSRWLOCK local_8c;
  undefined4 local_88;
  DWORD DStack_84;
  _EVENT_DATA_DESCRIPTOR a_Stack_80 [2];
  undefined *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  DWORD *pDStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [4];
  PSRWLOCK *ppRStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_c;
  
  local_c = DAT_0041a100 ^ (uint)&local_8c;
  local_88 = param_1;
  FUN_0040f504(this,&local_8c);
  puVar1 = *(undefined4 **)((int)this + 0xa8);
  puVar3 = FUN_004090ba();
  if (5 < **(uint **)(puVar3 + 4)) {
    uVar4 = FUN_004047a8(*(uint **)(puVar3 + 4),0,0x4000);
    if ((char)uVar4 != '\0') {
      EventActivityIdControl(3,(LPGUID)(puVar1 + 2));
      goto LAB_00409445;
    }
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
LAB_00409445:
  *puVar1 = 1;
  if (local_8c != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8c);
  }
  puVar3 = FUN_004090ba();
  this_00 = *(uint **)(puVar3 + 4);
  if (5 < *this_00) {
    uVar4 = FUN_004047a8(this_00,0,0x4000);
    if ((char)uVar4 != '\0') {
      local_8c = param_2;
      local_88 = WindowsGetStringRawBuffer(local_88,0);
      DStack_84 = GetCurrentThreadId();
      iVar2 = *(int *)((int)this + 0xa8);
      if ((*(char *)(iVar2 + 4) == '\0') ||
         ((((pGVar5 = (LPCGUID)(iVar2 + 0x18), pGVar5->Data1 == 0 && (*(int *)(iVar2 + 0x1c) == 0))
           && (*(int *)(iVar2 + 0x20) == 0)) && (*(int *)(iVar2 + 0x24) == 0)))) {
        pGVar5 = (LPCGUID)0x0;
      }
      uStack_20 = param_3;
      ppRStack_30 = &local_8c;
      uStack_1c = 0;
      uStack_14 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_18 = 0x10;
      uStack_28 = 4;
      FUN_004051e0(&local_88,auStack_40);
      pDStack_50 = &DStack_84;
      uStack_48 = 4;
      uStack_4c = 0;
      uStack_44 = 0;
      uStack_5c = 0;
      uStack_54 = 0;
      puStack_60 = &DAT_004024e8;
      uStack_58 = 8;
      FUN_00404713((int)this_00,&DAT_0040302a,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),pGVar5,7,
                   a_Stack_80);
    }
  }
  if (*(int *)((int)this + 0xbc) == 0) {
    FUN_004087ca((undefined4 *)((int)this + 0xb0));
  }
  FUN_00416420(local_c ^ (uint)&local_8c);
  return;
}



/* Function: FUN_0040958c */

void __thiscall FUN_0040958c(void *this,undefined1 param_1,undefined1 param_2,undefined *param_3)

{
  int iVar1;
  uint *this_00;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  undefined1 auStack_e4 [6];
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined4 *local_d8;
  undefined *local_d4;
  undefined *local_d0;
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
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  _EVENT_DATA_DESCRIPTOR a_Stack_90 [2];
  undefined *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 **ppuStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [5];
  uint local_c;
  
  local_c = DAT_0041a100 ^ (uint)auStack_e4;
  iVar1 = *(int *)((int)this + 0xa8);
  if (((*(int *)(iVar1 + 0x38) < 0) && (*(int *)(iVar1 + 0x38) == *(int *)(iVar1 + 0x44))) &&
     ((undefined4 *)(iVar1 + 0x3c) != (undefined4 *)0x0)) {
    FUN_0040e8d9((PSRWLOCK)this);
    puVar2 = FUN_004090ba();
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_004047a8(*(uint **)(puVar2 + 4),0,0x4000);
      if ((char)uVar3 != '\0') {
        local_d0 = param_3;
        local_de = param_2;
        local_dd = param_1;
        local_cc = *(undefined4 *)(iVar1 + 0x84);
        local_c8 = *(undefined4 *)(iVar1 + 0x80);
        local_c4 = *(undefined4 *)(iVar1 + 0x7c);
        local_c0 = *(undefined4 *)(iVar1 + 0x78);
        local_bc = *(undefined4 *)(iVar1 + 0x74);
        local_b8 = *(undefined4 *)(iVar1 + 0x70);
        local_b4 = *(undefined4 *)(iVar1 + 0x6c);
        local_b0 = *(undefined4 *)(iVar1 + 0x54);
        local_ac = *(undefined4 *)(iVar1 + 0x50);
        local_a8 = *(undefined4 *)(iVar1 + 0x3c);
        local_a4 = *(undefined4 *)(iVar1 + 0x88);
        local_a0 = *(undefined4 *)(iVar1 + 100);
        local_9c = *(undefined4 *)(iVar1 + 0x60);
        local_dc = *(undefined4 *)(iVar1 + 0x44);
        local_d8 = &local_98;
        local_94 = 0;
        local_98 = 0x1000000;
        local_d4 = &DAT_004024e8;
        FUN_00404c2b(extraout_ECX,&DAT_004039ea,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                     extraout_ECX,&local_d4,&local_d8,&local_dc,&local_9c,&local_a0,&local_a4,
                     &local_a8,&local_ac,&local_b0,&local_b4,&local_b8,&local_bc,&local_c0,&local_c4
                     ,&local_c8,&local_cc,&local_dd,&local_de,&local_d0);
      }
    }
  }
  else {
    FUN_0040e8d9((PSRWLOCK)this);
    puVar2 = FUN_004090ba();
    this_00 = *(uint **)(puVar2 + 4);
    if (5 < *this_00) {
      uVar3 = FUN_004047a8(this_00,0,0x4000);
      if ((char)uVar3 != '\0') {
        local_d4 = param_3;
        local_dd = param_2;
        local_de = param_1;
        local_d8 = (undefined4 *)GetCurrentThreadId();
        iVar1 = *(int *)((int)this + 0xa8);
        local_dc = *(undefined4 *)(iVar1 + 0x38);
        FUN_004051e0(&local_d4,auStack_20);
        puStack_30 = &local_dd;
        puStack_70 = &DAT_004024e8;
        puStack_40 = &local_de;
        uStack_28 = 1;
        ppuStack_50 = &local_d8;
        uStack_38 = 1;
        puStack_60 = &local_dc;
        uStack_48 = 4;
        uStack_58 = 4;
        uStack_2c = 0;
        uStack_24 = 0;
        uStack_3c = 0;
        uStack_34 = 0;
        uStack_4c = 0;
        uStack_44 = 0;
        uStack_5c = 0;
        uStack_54 = 0;
        uStack_6c = 0;
        uStack_68 = 8;
        uStack_64 = 0;
        FUN_00404713((int)this_00,&DAT_004030b1,(LPCGUID)(iVar1 + 8),(LPCGUID)0x0,8,a_Stack_90);
      }
    }
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    FUN_0040882d((undefined4 *)((int)this + 0xb0));
  }
  FUN_00416420(local_c ^ (uint)auStack_e4);
  return;
}



/* Function: FUN_00409870 */

void __fastcall FUN_00409870(PSRWLOCK param_1)

{
  PVOID pvVar1;
  uint *this;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 *local_40;
  undefined *local_3c;
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
  
  pvVar1 = param_1[0x2a].Ptr;
  if (((*(int *)((int)pvVar1 + 0x38) < 0) &&
      (*(int *)((int)pvVar1 + 0x38) == *(int *)((int)pvVar1 + 0x44))) &&
     ((undefined4 *)((int)pvVar1 + 0x3c) != (undefined4 *)0x0)) {
    FUN_0040e8d9(param_1);
    puVar2 = FUN_004090ba();
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_004047a8(*(uint **)(puVar2 + 4),0,0x2000);
      if ((char)uVar3 != '\0') {
        local_8 = *(undefined4 *)((int)pvVar1 + 0x84);
        local_c = *(undefined4 *)((int)pvVar1 + 0x80);
        local_10 = *(undefined4 *)((int)pvVar1 + 0x7c);
        local_14 = *(undefined4 *)((int)pvVar1 + 0x78);
        local_18 = *(undefined4 *)((int)pvVar1 + 0x74);
        local_1c = *(undefined4 *)((int)pvVar1 + 0x70);
        local_20 = *(undefined4 *)((int)pvVar1 + 0x6c);
        local_24 = *(undefined4 *)((int)pvVar1 + 0x54);
        local_28 = *(undefined4 *)((int)pvVar1 + 0x50);
        local_2c = *(undefined4 *)((int)pvVar1 + 0x3c);
        local_30 = *(undefined4 *)((int)pvVar1 + 0x88);
        local_34 = *(undefined4 *)((int)pvVar1 + 100);
        local_38 = *(undefined4 *)((int)pvVar1 + 0x60);
        local_3c = *(undefined **)((int)pvVar1 + 0x44);
        local_40 = &local_4c;
        local_4c = 0x1000000;
        local_48 = 0;
        local_44 = &DAT_004024e8;
        FUN_004047eb(extraout_ECX,&DAT_0040314e,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX,
                     &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28
                     ,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8)
        ;
      }
    }
  }
  else {
    FUN_0040e8d9(param_1);
    puVar2 = FUN_004090ba();
    this = *(uint **)(puVar2 + 4);
    if (5 < *this) {
      uVar3 = FUN_004047a8(this,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_44 = (undefined *)GetCurrentThreadId();
        local_3c = &DAT_004024e8;
        local_40 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
        FUN_00404bb5((int)this,&DAT_00403e1e,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX_00,
                     &local_3c,&local_40,&local_44);
      }
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_0040882d(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_00409a0c */

void __fastcall FUN_00409a0c(PSRWLOCK param_1)

{
  PSRWLOCK pRVar1;
  code *pcVar2;
  bool bVar3;
  PSRWLOCK local_c [2];
  
  bVar3 = true;
  pRVar1 = param_1 + 0x2b;
  param_1->Ptr = &PTR_FUN_0040122c;
  local_c[0] = param_1;
  if (pRVar1->Ptr != (PVOID)0x0) {
    FUN_0040f504(param_1,local_c);
                    /* WARNING: Load size is inaccurate */
    if (((int *)pRVar1->Ptr == (int *)0x0) || (*pRVar1->Ptr != 1)) {
      bVar3 = false;
      FUN_0040f5a6((int *)pRVar1);
    }
    if (local_c[0] != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_c[0]);
    }
    if (!bVar3) goto LAB_00409a81;
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_1[0x2a].Ptr == 1) {
    FUN_0040f5e4((int)param_1[0x2a].Ptr);
    pcVar2 = *(code **)((int)param_1->Ptr + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)();
    (*pcVar2)();
  }
LAB_00409a81:
  FUN_00409e6a((int)param_1);
  return;
}



/* Function: FUN_00409a95 */

void __thiscall FUN_00409a95(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  uint *this_00;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  LPCGUID pGVar5;
  undefined4 local_68;
  PSRWLOCK local_64;
  _EVENT_DATA_DESCRIPTOR local_60 [2];
  undefined *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  PSRWLOCK *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  uint local_c;
  
  local_c = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  local_68 = param_1;
  FUN_0040f504(this,&local_64);
  puVar1 = *(undefined4 **)((int)this + 0xa8);
  puVar3 = FUN_004090ba();
  if (5 < **(uint **)(puVar3 + 4)) {
    uVar4 = FUN_004047a8(*(uint **)(puVar3 + 4),0,0x2000);
    if ((char)uVar4 != '\0') {
      EventActivityIdControl(3,(LPGUID)(puVar1 + 2));
      goto LAB_00409af5;
    }
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
LAB_00409af5:
  *puVar1 = 1;
  if (local_64 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_64);
  }
  puVar3 = FUN_004090ba();
  this_00 = *(uint **)(puVar3 + 4);
  if (5 < *this_00) {
    uVar4 = FUN_004047a8(this_00,0,0x2000);
    if ((char)uVar4 != '\0') {
      local_68 = WindowsGetStringRawBuffer(local_68,0);
      local_64 = (PSRWLOCK)GetCurrentThreadId();
      iVar2 = *(int *)((int)this + 0xa8);
      if ((*(char *)(iVar2 + 4) == '\0') ||
         ((((pGVar5 = (LPCGUID)(iVar2 + 0x18), pGVar5->Data1 == 0 && (*(int *)(iVar2 + 0x1c) == 0))
           && (*(int *)(iVar2 + 0x20) == 0)) && (*(int *)(iVar2 + 0x24) == 0)))) {
        pGVar5 = (LPCGUID)0x0;
      }
      FUN_004051e0(&local_68,local_20);
      local_30 = &local_64;
      local_28 = 4;
      local_2c = 0;
      local_24 = 0;
      local_3c = 0;
      local_34 = 0;
      local_40 = &DAT_004024e8;
      local_38 = 8;
      FUN_00404713((int)this_00,&DAT_00403b96,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),pGVar5,5,
                   local_60);
    }
  }
  if (*(int *)((int)this + 0xbc) == 0) {
    FUN_004087ca((undefined4 *)((int)this + 0xb0));
  }
  FUN_00416420(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00409bec */

void __thiscall FUN_00409bec(void *this,undefined *param_1)

{
  int iVar1;
  uint *this_00;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
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
  undefined *local_80;
  undefined *local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  _EVENT_DATA_DESCRIPTOR local_70 [2];
  undefined *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 **local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  uint local_c;
  
  local_c = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)this + 0xa8);
  if (((*(int *)(iVar1 + 0x38) < 0) && (*(int *)(iVar1 + 0x38) == *(int *)(iVar1 + 0x44))) &&
     ((undefined4 *)(iVar1 + 0x3c) != (undefined4 *)0x0)) {
    FUN_0040e8d9((PSRWLOCK)this);
    puVar2 = FUN_004090ba();
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_004047a8(*(uint **)(puVar2 + 4),0,0x2000);
      if ((char)uVar3 != '\0') {
        local_80 = param_1;
        local_84 = *(undefined4 *)(iVar1 + 0x84);
        local_88 = *(undefined4 *)(iVar1 + 0x80);
        local_8c = *(undefined4 *)(iVar1 + 0x7c);
        local_90 = *(undefined4 *)(iVar1 + 0x78);
        local_94 = *(undefined4 *)(iVar1 + 0x74);
        local_98 = *(undefined4 *)(iVar1 + 0x70);
        local_9c = *(undefined4 *)(iVar1 + 0x6c);
        local_a0 = *(undefined4 *)(iVar1 + 0x54);
        local_a4 = *(undefined4 *)(iVar1 + 0x50);
        local_a8 = *(undefined4 *)(iVar1 + 0x3c);
        local_ac = *(undefined4 *)(iVar1 + 0x88);
        local_b0 = *(undefined4 *)(iVar1 + 100);
        local_b4 = *(undefined4 *)(iVar1 + 0x60);
        local_74 = *(undefined4 *)(iVar1 + 0x44);
        local_78 = &local_c0;
        local_bc = 0;
        local_c0 = 0x1000000;
        local_7c = &DAT_004024e8;
        FUN_00404e48(extraout_ECX,&DAT_0040328f,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                     extraout_ECX,&local_7c,&local_78,&local_74,&local_b4,&local_b0,&local_ac,
                     &local_a8,&local_a4,&local_a0,&local_9c,&local_98,&local_94,&local_90,&local_8c
                     ,&local_88,&local_84,&local_80);
      }
    }
  }
  else {
    FUN_0040e8d9((PSRWLOCK)this);
    puVar2 = FUN_004090ba();
    this_00 = *(uint **)(puVar2 + 4);
    if (5 < *this_00) {
      uVar3 = FUN_004047a8(this_00,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_7c = param_1;
        local_78 = (undefined4 *)GetCurrentThreadId();
        iVar1 = *(int *)((int)this + 0xa8);
        local_74 = *(undefined4 *)(iVar1 + 0x38);
        FUN_004051e0(&local_7c,local_20);
        local_30 = &local_78;
        local_28 = 4;
        local_40 = &local_74;
        local_2c = 0;
        local_24 = 0;
        local_3c = 0;
        local_38 = 4;
        local_34 = 0;
        local_50 = &DAT_004024e8;
        local_4c = 0;
        local_48 = 8;
        local_44 = 0;
        FUN_00404713((int)this_00,&DAT_00403d43,(LPCGUID)(iVar1 + 8),(LPCGUID)0x0,6,local_70);
      }
    }
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    FUN_0040882d((undefined4 *)((int)this + 0xb0));
  }
  FUN_00416420(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00409e40 */

undefined4 * __thiscall FUN_00409e40(void *this,byte param_1)

{
  FUN_00408d8d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00409e6a */

void __fastcall FUN_00409e6a(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_0040882d((undefined4 *)(param_1 + 0xb0));
  }
  FUN_0040f5a6((int *)(param_1 + 0xac));
  FUN_00409eca((int *)(param_1 + 4));
  return;
}



/* Function: FUN_00409e9a */

void __fastcall FUN_00409e9a(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_0040882d((undefined4 *)(param_1 + 0xb0));
  }
  FUN_0040f439((int *)(param_1 + 0xac));
  FUN_00409ef0((int *)(param_1 + 4));
  return;
}



/* Function: FUN_00409eca */

void __fastcall FUN_00409eca(int *param_1)

{
  FUN_00406cff(param_1 + 0x25);
  FUN_00408d04((int)(param_1 + 10));
  FUN_0040eb68(param_1);
  return;
}



/* Function: FUN_00409ef0 */

void __fastcall FUN_00409ef0(int *param_1)

{
  FUN_00406cff(param_1 + 0x25);
  FUN_00408d04((int)(param_1 + 10));
  FUN_0040e8ab(param_1);
  return;
}



/* Function: FUN_00409f16 */

uint __thiscall FUN_00409f16(void *this,HKEY param_1,LPCWSTR param_2)

{
  undefined4 *puVar1;
  LSTATUS LVar2;
  uint uVar3;
  int iVar4;
  int unaff_retaddr;
  undefined4 *local_18;
  HKEY local_14;
  undefined1 local_10;
  int local_c [2];
  
  local_14 = (HKEY)0x0;
  local_10 = 1;
  puVar1 = (undefined4 *)((int)this + 4);
  local_18 = puVar1;
  LVar2 = RegOpenKeyExW(param_1,param_2,0,0x20019,&local_14);
  FUN_0040e868(&local_18);
  if (LVar2 == 0) {
    local_c[1] = 0x100;
    uVar3 = FUN_0040a0da((HKEY)*puVar1,L"ExtensionClass",2,(PVOID)((int)this + 0x10),
                         (LPDWORD)(local_c + 1));
    if ((int)uVar3 < 0) {
      iVar4 = 0xe3;
    }
    else {
      local_c[0] = 0;
      local_c[1] = 4;
      uVar3 = FUN_0040a0da((HKEY)*puVar1,L"Test",0x10,local_c,(LPDWORD)(local_c + 1));
      if ((int)uVar3 < 0) {
        iVar4 = 0xe7;
      }
      else {
        local_c[1] = 4;
        *(bool *)((int)this + 8) = local_c[0] != 0;
        uVar3 = FUN_0040a0da((HKEY)*puVar1,L"VelocityFeatureId",0x10,(PVOID)((int)this + 0xc),
                             (LPDWORD)(local_c + 1));
        if (-1 < (int)uVar3) {
          return 0;
        }
        iVar4 = 0xeb;
      }
    }
    FUN_00407f3a(unaff_retaddr,iVar4,0x402144,uVar3);
  }
  else {
    uVar3 = FUN_00407f88(unaff_retaddr,0xe0);
  }
  return uVar3;
}



/* Function: FUN_0040a020 */

undefined1 __fastcall FUN_0040a020(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Function: FUN_0040a030 */

bool __fastcall FUN_0040a030(int param_1)

{
  return *(short *)(param_1 + 0x10) == 0;
}



/* Function: FUN_0040a040 */

undefined4 __fastcall FUN_0040a040(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Function: FUN_0040a050 */

uint __thiscall FUN_0040a050(void *this,short *param_1,uint param_2)

{
  uint uVar1;
  int unaff_retaddr;
  
  uVar1 = FUN_004066de(param_1,param_2,(int)this + 0x10);
  if ((int)uVar1 < 0) {
    FUN_00407f3a(unaff_retaddr,0x100,0x402144,uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040a090 */

undefined4 __thiscall FUN_0040a090(void *this,PVOID param_1,int param_2)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  DWORD local_8;
  
  local_8 = param_2 * 2;
  LVar1 = RegGetValueW(*(HKEY *)((int)this + 4),(LPCWSTR)0x0,L"ActivatableClassID",2,(LPDWORD)0x0,
                       param_1,&local_8);
  if (LVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00407f88(unaff_retaddr,0x107);
  }
  return uVar2;
}



/* Function: FUN_0040a0da */

undefined4 __fastcall
FUN_0040a0da(HKEY param_1,LPCWSTR param_2,DWORD param_3,PVOID param_4,LPDWORD param_5)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_retaddr;
  
  LVar1 = RegGetValueW(param_1,(LPCWSTR)0x0,param_2,param_3,(LPDWORD)0x0,param_4,param_5);
  iVar3 = 0;
  if (LVar1 != 2) {
    iVar3 = LVar1;
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00407f88(unaff_retaddr,0x118);
  }
  return uVar2;
}



/* Function: FUN_0040a11d */

void __thiscall FUN_0040a11d(void *this,undefined4 param_1)

{
  uint uVar1;
  int unaff_retaddr;
  int local_11c;
  HKEY local_118;
  undefined1 local_114;
  WCHAR local_110 [130];
  uint local_c;
  
  local_c = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  WindowsGetStringRawBuffer(param_1,0);
  uVar1 = FUN_004067a1(local_110,0x80,L"SOFTWARE\\Classes\\OneCoreContracts\\%s");
  if ((int)uVar1 < 0) {
    FUN_00407f3a(unaff_retaddr,0x129,0x402144,uVar1);
  }
  else {
    local_118 = (HKEY)0x0;
    local_11c = (int)this + 4;
    local_114 = 1;
    RegOpenKeyExW((HKEY)0x80000002,local_110,0,0x20019,&local_118);
    FUN_0040e868(&local_11c);
  }
  FUN_00416420(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040a1e0 */

undefined4 __thiscall FUN_0040a1e0(void *this,DWORD *param_1)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  void *local_8;
  
  *param_1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    local_8 = this;
    LVar1 = RegQueryInfoKeyW(*(HKEY *)((int)this + 4),(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPDWORD)&local_8,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
    if (LVar1 != 0) {
      uVar2 = FUN_00407f88(unaff_retaddr,0x137);
      return uVar2;
    }
    *param_1 = (DWORD)local_8;
  }
  return 0;
}



/* Function: FUN_0040a240 */

void __thiscall FUN_0040a240(void *this,DWORD param_1,int *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  LSTATUS LVar3;
  undefined4 *this_00;
  uint uVar4;
  int iVar5;
  int unaff_retaddr;
  DWORD local_110;
  undefined4 *local_10c;
  WCHAR local_108 [128];
  uint local_8;
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  local_110 = 0x80;
  LVar3 = RegEnumKeyExW(*(HKEY *)((int)this + 4),param_1,local_108,&local_110,(LPDWORD)0x0,
                        (LPWSTR)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  if (LVar3 != 0) {
    FUN_00407f88(unaff_retaddr,0x141);
    goto LAB_0040a355;
  }
  this_00 = (undefined4 *)FUN_00416434(0x110);
  if (this_00 == (undefined4 *)0x0) {
    local_10c = (undefined4 *)0x0;
    uVar4 = 0x8007000e;
    iVar5 = 0x143;
LAB_0040a339:
    FUN_00407f3a(unaff_retaddr,iVar5,0x402144,uVar4);
  }
  else {
    *this_00 = &PTR__scalar_deleting_destructor__0040139c;
    this_00[1] = 0;
    *(undefined2 *)(this_00 + 4) = 0;
    *(undefined1 *)(this_00 + 2) = 0;
    this_00[3] = 0;
    memset((void *)((int)this_00 + 0x12),0,0xfe);
    local_10c = this_00;
    uVar4 = FUN_00409f16(this_00,*(HKEY *)((int)this + 4),local_108);
    if ((int)uVar4 < 0) {
      iVar5 = 0x144;
      goto LAB_0040a339;
    }
    puVar1 = (undefined4 *)*param_2;
    local_10c = (undefined4 *)0x0;
    *param_2 = (int)this_00;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar1;
      (*(code *)PTR_guard_check_icall_0041b28c)(1);
      (*pcVar2)();
    }
  }
  FUN_0040e840(&local_10c);
LAB_0040a355:
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::source_block<class
   Concurrency::single_link_registry<class Concurrency::ITarget<unsigned int> >,class
   Concurrency::ordered_message_processor<unsigned int> >::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::
source_block<class_Concurrency::single_link_registry<class_Concurrency::ITarget<unsigned_int>_>,class_Concurrency::ordered_message_processor<unsigned_int>_>
::_scalar_deleting_destructor_
          (source_block<class_Concurrency::single_link_registry<class_Concurrency::ITarget<unsigned_int>_>,class_Concurrency::ordered_message_processor<unsigned_int>_>
           *this,uint param_1)

{
  FUN_0040a39d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return this;
}



/* Function: FUN_0040a39d */

void __fastcall FUN_0040a39d(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    RegCloseKey((HKEY)param_1[1]);
  }
  *param_1 = &PTR_o__purecall_00401190;
  return;
}



/* Function: FUN_0040a3bf */

uint __fastcall FUN_0040a3bf(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *this;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_retaddr;
  undefined4 *local_8;
  
  uVar5 = 0;
  puVar1 = (undefined4 *)*param_2;
  *param_2 = 0;
  local_8 = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_0041b28c)(1);
    (*pcVar2)();
  }
  puVar1 = local_8;
  this = (undefined4 *)FUN_00416434(8);
  if (this == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
    uVar3 = 0x8007000e;
    iVar4 = 0x155;
  }
  else {
    *this = &PTR_FUN_004011a8;
    this[1] = 0;
    local_8 = this;
    uVar3 = FUN_0040a11d(this,puVar1);
    if (-1 < (int)uVar3) {
      local_8 = (undefined4 *)0x0;
      FUN_0040e7e8(param_2,(int)this);
      goto LAB_0040a453;
    }
    iVar4 = 0x156;
  }
  FUN_00407f3a(unaff_retaddr,iVar4,0x402144,uVar3);
  uVar5 = uVar3;
LAB_0040a453:
  FUN_0040e7c3(&local_8);
  return uVar5;
}



/* Function: FUN_0040a470 */

undefined4 * __thiscall FUN_0040a470(void *this,byte param_1)

{
  FUN_0040a49a((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040a49a */

void __fastcall FUN_0040a49a(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    RegCloseKey((HKEY)param_1[1]);
  }
  *param_1 = &PTR_o__purecall_00401184;
  return;
}



/* Function: FUN_0040a4bc */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_0040a4bc(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int unaff_retaddr;
  int *local_34;
  char *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  char local_15 [13];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_20 = (int *)0x0;
  local_8 = 0;
  local_2c = param_2;
  uVar4 = FUN_0040a3bf(param_1,(int *)&local_20);
  piVar2 = local_20;
  if ((int)uVar4 < 0) {
    iVar5 = 0x160;
  }
  else {
    pcVar1 = *(code **)(*local_20 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(&local_28);
    uVar4 = (*pcVar1)();
    if (-1 < (int)uVar4) {
      local_24 = 0;
      if (local_28 != 0) {
        do {
          local_1c = (int *)0x0;
          local_8 = CONCAT31(local_8._1_3_,1);
          pcVar1 = *(code **)(*piVar2 + 8);
          (*(code *)PTR_guard_check_icall_0041b28c)(local_24,&local_1c);
          uVar4 = (*pcVar1)();
          if ((int)uVar4 < 0) {
            iVar5 = 0x16d;
LAB_0040a60b:
            FUN_00407f3a(unaff_retaddr,iVar5,0x402144,uVar4);
            FUN_0040e818((int *)&local_1c);
            goto LAB_0040a5e5;
          }
          pcVar1 = *(code **)(*local_1c + 4);
          (*(code *)PTR_guard_check_icall_0041b28c)();
          cVar3 = (*pcVar1)();
          if (cVar3 == '\0') {
            pcVar1 = *(code **)(*local_1c + 0x14);
            (*(code *)PTR_guard_check_icall_0041b28c)();
            (*pcVar1)();
            local_30 = local_15;
            local_15[1] = 0;
            local_34 = local_1c;
            if (*(int **)(local_2c + 0x40) == (int *)0x0) {
              FUN_004081b7();
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return uVar4;
            }
            pcVar1 = *(code **)(**(int **)(local_2c + 0x40) + 0x10);
            (*(code *)PTR_guard_check_icall_0041b28c)(&local_34,local_15 + 1,&local_30);
            uVar4 = (*pcVar1)();
            if ((int)uVar4 < 0) {
              iVar5 = 0x185;
              goto LAB_0040a60b;
            }
            if (local_15[0] == '\0') {
              FUN_0040e818((int *)&local_1c);
              break;
            }
          }
          local_8 = local_8 & 0xffffff00;
          FUN_0040e818((int *)&local_1c);
          local_24 = local_24 + 1;
        } while (local_24 < local_28);
      }
      uVar4 = 0;
      goto LAB_0040a5e5;
    }
    iVar5 = 0x163;
  }
  FUN_00407f3a(unaff_retaddr,iVar5,0x402144,uVar4);
LAB_0040a5e5:
  FUN_0040e818((int *)&local_20);
  return uVar4;
}



/* Function: FUN_0040a62f */

void __fastcall
FUN_0040a62f(undefined4 *param_1,undefined2 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 ***pppuVar5;
  undefined4 *puVar6;
  bool bVar7;
  int unaff_retaddr;
  undefined2 **local_164 [2];
  RTL_SRWLOCK *local_15c;
  char *local_158;
  int *local_154;
  undefined4 local_150;
  int local_14c;
  undefined4 *local_148;
  PSRWLOCK local_144;
  undefined2 *local_140;
  char local_139;
  undefined1 local_138 [8];
  undefined **local_130;
  undefined4 local_12c [13];
  undefined ***local_f8;
  RTL_SRWLOCK local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_c4;
  char *local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [88];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  RTL_SRWLOCK *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00417810;
  local_1c = ExceptionList;
  local_24 = DAT_0041a100 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_ec = 0;
  local_e8 = 0;
  local_b8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_58 = 0;
  local_54 = 0;
  local_150 = 0x80;
  local_c0 = "TryLookupExtensionPointImplementationAcid";
  local_148 = param_1;
  local_140 = param_2;
  memset(local_b0,0,0x58);
  local_50 = 1;
  local_48 = &local_ec;
  local_4c = 0;
  local_44 = 0;
  local_14 = 0xffffffff;
  local_3c = &local_f0;
  local_30 = &local_c4;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_f0.Ptr = &PTR_FUN_0040122c;
  if (param_4 != (undefined4 *)0x0) {
    FUN_0040f504(&local_f0,&local_144);
    puVar1 = local_48;
    bVar7 = local_144 != (PSRWLOCK)0x0;
    puVar6 = local_48 + 7;
    local_48[6] = *param_4;
    *puVar6 = param_4[1];
    puVar1[8] = param_4[2];
    puVar1[9] = param_4[3];
    *(undefined1 *)(puVar1 + 1) = 1;
    if (bVar7) {
      ReleaseSRWLockExclusive(local_144);
    }
  }
  FUN_00409a95(&local_f0,local_148);
  local_130 = &PTR_FUN_004013b4;
  *local_140 = 0;
  local_14c = 0;
  local_164[0] = &local_140;
  local_164[1] = (undefined2 **)&local_150;
  local_15c = &local_f0;
  local_158 = &local_139;
  local_139 = '\0';
  local_154 = &local_14c;
  pppuVar5 = local_164;
  puVar6 = local_12c;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *pppuVar5;
    pppuVar5 = pppuVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_f8 = &local_130;
  uVar3 = FUN_0040a4bc(local_148,(int)local_138);
  FUN_004115bc((int)local_138);
  if ((int)uVar3 < 0) {
    FUN_00407f3a(unaff_retaddr,0x1b7,0x402144,uVar3);
  }
  else {
    if ((local_139 == '\0') && (1 < local_14c)) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    FUN_004080fb(unaff_retaddr,0x1bb,0x402144,(void *)0x8007000d,cVar2,0x402248);
    FUN_00409bec(&local_f0,(undefined *)local_140);
  }
  FUN_00409a0c(&local_f0);
  ExceptionList = local_1c;
  FUN_00416420(local_24 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_0040a891 */

uint __thiscall FUN_0040a891(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int unaff_retaddr;
  undefined4 uStack_8;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
                    /* WARNING: Load size is inaccurate */
  uStack_8 = this;
  (*(code *)PTR_guard_check_icall_0041b28c)(**this,**(undefined4 **)((int)this + 4));
  uVar3 = (*pcVar1)();
  if ((int)uVar3 < 0) {
    FUN_00407f3a(unaff_retaddr,0x1b7,0x402144,uVar3);
  }
  else {
    pcVar1 = *(code **)(*param_1 + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)();
    cVar2 = (*pcVar1)();
                    /* WARNING: Load size is inaccurate */
    uStack_8 = (void *)CONCAT13(cVar2,(undefined3)uStack_8);
    FUN_004115e1(*this,(undefined1 *)((int)&uStack_8 + 3));
    if (cVar2 == '\0') {
      **(int **)((int)this + 0x10) = **(int **)((int)this + 0x10) + 1;
    }
    else {
      **(undefined1 **)((int)this + 0xc) = 1;
    }
    *(bool *)param_3 = cVar2 == '\0';
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_0040a920 */

void FUN_0040a920(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  WindowsCreateString(L"Windows.Internal.Foundation.Contracts.ActivationFactoryContractRedirectorContext"
                      ,0x50,param_2);
  return;
}



/* Function: FUN_0040a950 */

undefined4 FUN_0040a950(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}



/* Function: FUN_0040a970 */

void FUN_0040a970(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040e680(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040a990 */

void FUN_0040a990(int *param_1,int *param_2,int *param_3)

{
  FUN_00411a17(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040a9b0 */

void FUN_0040a9b0(int *param_1)

{
  FUN_0040e6e0(param_1);
  return;
}



/* Function: FUN_0040a9d0 */

void FUN_0040a9d0(int param_1)

{
  FUN_0040e770(param_1);
  return;
}



/* Function: FUN_0040a9f0 */

undefined4 FUN_0040a9f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return 0;
}



/* Function: FUN_0040aa10 */

undefined4 FUN_0040aa10(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  return 0;
}



/* Function: FUN_0040aa30 */

undefined4 FUN_0040aa30(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return 0;
}



/* Function: FUN_0040aa50 */

undefined4 FUN_0040aa50(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  return 0;
}



/* Function: FUN_0040aa6c */

void __thiscall FUN_0040aa6c(void *this,PSRWLOCK param_1,int *param_2)

{
  short sVar1;
  code *pcVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  short *psVar9;
  int unaff_retaddr;
  undefined1 local_208;
  int local_200;
  int *local_1fc;
  int *local_1f8;
  int *local_1f4;
  undefined1 local_1f0 [20];
  undefined4 local_1dc;
  RTL_SRWLOCK local_1d8;
  undefined4 local_1d4;
  undefined1 local_1d0;
  undefined4 local_1ac;
  char *local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [88];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 *local_130;
  undefined4 local_12c;
  undefined4 local_128;
  RTL_SRWLOCK *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 *local_118;
  short local_114;
  undefined1 local_112 [254];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  piVar4 = param_2;
  puStack_c = &LAB_00417840;
  local_10 = ExceptionList;
  uVar6 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1d4 = 0;
  local_1d0 = 0;
  local_1a0 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_140 = 0;
  local_13c = 0;
  local_1a8 = "TryActivateContractExtension";
  local_14 = uVar6;
  memset(local_198,0,0x58);
  local_138 = 1;
  local_130 = &local_1d4;
  local_134 = 0;
  local_12c = 0;
  local_8 = local_8 & 0xffffff00;
  local_124 = &local_1d8;
  local_118 = &local_1ac;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0;
  local_1d8.Ptr = &PTR_FUN_00401390;
  FUN_004093d9(&local_1d8,this,param_1,&DAT_004025b8);
  local_8 = 0xffffffff;
  *piVar4 = 0;
  local_208 = 0;
  uVar7 = FUN_0040a62f(this,&local_114,extraout_ECX,local_130 + 2);
  if ((int)uVar7 < 0) {
    FUN_00407f3a(unaff_retaddr,0x23e,0x402144,uVar7);
  }
  else {
    if (local_114 == 0) {
LAB_0040ae15:
      FUN_0040958c(&local_1d8,*piVar4 != 0,local_208,(undefined *)&local_114);
      FUN_00409361(&local_1d8);
      goto LAB_0040ae44;
    }
    psVar9 = &local_114;
    local_8 = 0xffffffff;
    local_1f8 = (int *)0x0;
    do {
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar1 != 0);
    uVar7 = (int)psVar9 - (int)local_112 >> 1;
    if (uVar7 + 1 < uVar7) {
      FUN_00406285(0x80070216);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_00406636(local_1f0,&local_114,uVar7 + 1,uVar7);
    uVar6 = RoGetActivationFactory(local_1dc,&DAT_00402628,&local_1f8,uVar6);
    if ((int)uVar6 < 0) {
      FUN_00407f3a(unaff_retaddr,0x242,0x402144,uVar6);
    }
    else {
      local_1f4 = (int *)0x0;
      local_8 = 0xffffffff;
      local_1fc = (int *)0x0;
      pcVar2 = *(code **)*local_1f8;
      (*(code *)PTR_guard_check_icall_0041b28c)(local_1f8,&DAT_00402590,&local_1fc);
      iVar8 = (*pcVar2)();
      piVar5 = local_1f8;
      if (iVar8 < 0) {
        pcVar2 = *(code **)(*local_1f8 + 0x18);
        local_8 = 6;
        if (local_1f4 != (int *)0x0) {
          pcVar3 = *(code **)(*local_1f4 + 8);
          (*(code *)PTR_guard_check_icall_0041b28c)(local_1f4);
          (*pcVar3)();
        }
        local_8 = 0xffffffff;
        (*(code *)PTR_guard_check_icall_0041b28c)(piVar5,&local_1f4);
        uVar6 = (*pcVar2)();
        local_208 = 0;
        if (-1 < (int)uVar6) {
LAB_0040ad25:
          if (local_1f4 != (int *)0x0) {
            pcVar2 = *(code **)*local_1f4;
            (*(code *)PTR_guard_check_icall_0041b28c)(local_1f4,&DAT_004025b8,piVar4);
            uVar6 = (*pcVar2)();
            if ((int)uVar6 < 0) {
              iVar8 = 600;
              goto LAB_0040ad57;
            }
          }
          ~CComPtr<>((int *)&local_1fc);
          ~CComPtr<>((int *)&local_1f4);
          ~CComPtr<>((int *)&local_1f8);
          goto LAB_0040ae15;
        }
        iVar8 = 0x250;
LAB_0040ad57:
        FUN_00407f3a(unaff_retaddr,iVar8,0x402144,uVar6);
      }
      else {
        local_8 = 0xffffffff;
        local_200 = 0;
        uVar6 = FUN_0041175a(&local_200,(int *)&param_1);
        piVar5 = local_1fc;
        if ((int)uVar6 < 0) {
          iVar8 = 0x24b;
        }
        else {
          pcVar2 = *(code **)(*local_1fc + 0x18);
          local_8 = 5;
          if (local_1f4 != (int *)0x0) {
            pcVar3 = *(code **)(*local_1f4 + 8);
            (*(code *)PTR_guard_check_icall_0041b28c)(local_1f4);
            (*pcVar3)();
          }
          local_8 = 0xffffffff;
          (*(code *)PTR_guard_check_icall_0041b28c)(piVar5,this,local_200,&local_1f4);
          uVar6 = (*pcVar2)();
          if (-1 < (int)uVar6) {
            ~CComPtr<>(&local_200);
            local_208 = 1;
            goto LAB_0040ad25;
          }
          iVar8 = 0x24c;
        }
        FUN_00407f3a(unaff_retaddr,iVar8,0x402144,uVar6);
        ~CComPtr<>(&local_200);
      }
      ~CComPtr<>((int *)&local_1fc);
      ~CComPtr<>((int *)&local_1f4);
    }
    ~CComPtr<>((int *)&local_1f8);
  }
  FUN_00409361(&local_1d8);
LAB_0040ae44:
  ExceptionList = local_10;
  FUN_00416420(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040ae76 */

undefined4 FUN_0040ae76(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0041a640 == (code *)0x0) &&
     (DAT_0041a640 = (code *)FUN_00408a85("NtQueryWnfStateData"), DAT_0041a640 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0041a640;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_0040aeca */

undefined4 __fastcall
FUN_0040aeca(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0041a718 == (code *)0x0) &&
     (DAT_0041a718 = (code *)FUN_00408a85("NtUpdateWnfStateData"), DAT_0041a718 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0041a718;
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_0040af23 */

int __fastcall FUN_0040af23(int param_1,int param_2)

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



/* Function: FUN_0040afa0 */

uint * __fastcall FUN_0040afa0(uint *param_1,uint param_2,uint *param_3)

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
    FUN_0040b106(param_1,param_2,0,param_3);
    break;
  case 1:
  case 5:
    FUN_0040b1d6(param_1,param_2,0,param_3);
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



/* Function: FUN_0040b106 */

void __fastcall FUN_0040b106(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_0040b1d6 */

void __fastcall FUN_0040b1d6(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_0040b29f */

void __fastcall FUN_0040b29f(undefined4 param_1,uint *param_2)

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
  puStack_c = &LAB_00417870;
  local_10 = ExceptionList;
  local_14 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
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
    FUN_0040d30a((int)&local_44,iVar6);
  }
  ExceptionList = local_10;
  FUN_00416420(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040b3e1 */

void __fastcall FUN_0040b3e1(uint *param_1,undefined4 param_2,int param_3,uint *param_4)

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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  local_18 = (uint)(param_3 == 0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_1c = param_2;
  if (DAT_0041a56c == (code *)0x0) {
    DAT_0041a56c = (code *)FUN_00408a85("RtlQueryFeatureConfiguration");
    if (DAT_0041a56c == (code *)0x0) {
      iVar2 = -0x3ffffec7;
      goto LAB_0040b4b4;
    }
  }
  pcVar1 = DAT_0041a56c;
  (*(code *)PTR_guard_check_icall_0041b28c)(local_1c,local_18,local_28,&local_14);
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
LAB_0040b4b4:
  if (local_20 != (uint *)0x0) {
    *local_20 = (uint)(iVar2 != -0x7fffffde);
  }
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040b4e1 */

undefined4 __fastcall FUN_0040b4e1(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_0041a568 == (code *)0x0) &&
     (DAT_0041a568 = (code *)FUN_00408a85("RtlNotifyFeatureUsage"), DAT_0041a568 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0041a568;
  (*(code *)PTR_guard_check_icall_0041b28c)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_0040b550 */

void FUN_0040b550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if ((DAT_0041a65c == (FARPROC)0x0) &&
     (DAT_0041a65c = FUN_00408ab1("LogStagedFeatureUsage"), DAT_0041a65c == (FARPROC)0x0)) {
    return;
  }
  pFVar1 = DAT_0041a65c;
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1,param_2,param_3);
  (*pFVar1)();
  return;
}



/* Function: FUN_0040b594 */

void __fastcall FUN_0040b594(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_0040b5e0 */

undefined4 __thiscall FUN_0040b5e0(void *this,uint param_1)

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
    pvVar2 = FUN_00406c16(0,SVar3);
    if (pvVar2 == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    uVar1 = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    FUN_004061fe(pvVar2,SVar3,*this,uVar1);
    FUN_0040e5bb((void *)((int)this + 0xc),(int)pvVar2);
    *(LPVOID *)this = pvVar2;
    *(uint *)((int)this + 4) = uVar1 + (int)pvVar2;
    *(SIZE_T *)((int)this + 8) = (int)pvVar2 + SVar3;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_0040b66b */

undefined4 __thiscall FUN_0040b66b(void *this,uint param_1)

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
    uVar2 = FUN_0040b5e0(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_0040b6a1 */

undefined4 __thiscall FUN_0040b6a1(void *this,void *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040b66b(this,param_2);
  if ((char)uVar2 != '\0') {
    pvVar1 = *(void **)((int)this + 4);
    uVar2 = FUN_004061fe(pvVar1,-(uint)(pvVar1 < *(void **)((int)this + 8)) &
                                *(int *)((int)this + 8) - (int)pvVar1,param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_0040b6e2 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040b6e2(int *param_1)

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
  
  local_c = DAT_0041a100 ^ (uint)&local_102c;
  iVar5 = 0;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar7 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_0040ae76(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_0040b7f1;
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
LAB_0040b7f1:
            piVar4 = piVar4 + 3;
            iVar7 = local_1024;
          } while (piVar4 != local_101c);
        }
        iVar5 = FUN_0040aeca(&DAT_00402734,local_1010,uVar6,piVar2,piVar2,local_1018,1);
        param_1 = local_1028;
      }
      local_1024 = iVar7 + 1;
    } while (((iVar5 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_00416420(local_c ^ (uint)&local_102c);
  return;
}



/* Function: FUN_0040b867 */

void FUN_0040b867(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_0041a588 == (code *)0x0) &&
     (DAT_0041a588 = (code *)FUN_00408a85("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_0041a588 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_0041a588;
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040b8a5 */

int __thiscall FUN_0040b8a5(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_0040b8d2 */

void __thiscall FUN_0040b8d2(void *this,int param_1)

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
    FUN_004061fe(*(void **)((int)this + 0xc),uVar2,piVar1,uVar2);
  }
  return;
}



/* Function: FUN_0040b918 */

uint __fastcall FUN_0040b918(ushort *param_1)

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



/* Function: FUN_0040b943 */

uint __thiscall FUN_0040b943(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_8;
  
  pvVar3 = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_0040b9da;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    FUN_004061fe(pvVar3,2,&local_8,2);
    pvVar3 = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)pvVar3 + 4);
      if (param_2 < pvVar1) goto LAB_0040b9da;
      FUN_004061fe(pvVar3,4,(void *)((int)this + 4),4);
      pvVar3 = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_0040b9da;
    FUN_004061fe(pvVar3,(int)param_2 - (int)pvVar3,(void *)((int)this + 8),2);
    pvVar3 = pvVar1;
  }
  pvVar1 = (void *)((uint)*(ushort *)((int)this + 8) + (int)pvVar3);
  if (pvVar1 <= param_2) {
    FUN_004061fe(pvVar3,(int)param_2 - (int)pvVar3,*(void **)((int)this + 0x10),
                 (uint)*(ushort *)((int)this + 8));
    iVar2 = (uint)*(ushort *)((int)this + 8) + (int)pvVar3;
    *param_1 = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
LAB_0040b9da:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_0040ba09 */

uint __thiscall FUN_0040ba09(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_0040ba97;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    FUN_004061fe(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_0040ba97;
      *(ushort **)((int)this + 0xc) = puVar2;
      local_8 = (ushort *)this;
      FUN_004061fe((void *)((int)this + 4),4,puVar2,4);
      local_8 = puVar2 + 2;
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar2 = (ushort *)((int)this + 8);
  *puVar2 = *this;
  if (*this == 0) {
    puVar4 = local_8 + 1;
    if (param_2 < puVar4) goto LAB_0040ba97;
    puVar3 = local_8;
    local_8 = puVar4;
    FUN_004061fe(puVar2,2,puVar3,2);
  }
  puVar4 = (ushort *)((uint)*puVar2 + (int)local_8);
  if (puVar4 <= param_2) {
    *(ushort **)((int)this + 0x10) = local_8;
    *param_1 = (uint)puVar4;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
LAB_0040ba97:
  return (uint)puVar4 & 0xffffff00;
}



/* Function: FUN_0040bab1 */

undefined2 * __thiscall
FUN_0040bab1(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_0040b918(&local_18);
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



/* Function: FUN_0040bb2f */

void __thiscall FUN_0040bb2f(void *this,int param_1)

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
  FUN_0040e5bb(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_0040e5bb((void *)(param_1 + 0x1c),local_8);
  FUN_0040e5e5(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_0040bbb8 */

void __thiscall FUN_0040bbb8(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_00408171(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_0040bc5b;
  }
  if (9 < param_2) {
    return;
  }
LAB_0040bc5b:
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



/* Function: FUN_0040bca3 */

void FUN_0040bca3(void)

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
      uVar5 = FUN_0040ba09((void *)(unaff_EBP + -0x44),(uint *)(unaff_EBP + -0x14),
                           *(ushort **)(extraout_ECX + 0x14));
      if ((char)uVar5 == '\0') {
        FUN_004115bc(*(int *)(unaff_EBX + 8));
LAB_0040bda2:
        __EH_epilog3_align();
        return;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    } while (*(int *)(unaff_EBP + -0x40) == 0);
    do {
      uVar5 = FUN_0040ba09((void *)(unaff_EBP + -0x58),(uint *)(unaff_EBP + -0x14),
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
        FUN_004081b7();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = *(code **)(*piVar2 + 0x10);
      (*(code *)PTR_guard_check_icall_0041b28c)
                (unaff_EBP + -0x2c,unaff_EBP + -0x28,unaff_EBP + -0x24,unaff_EBP + -0x20,
                 unaff_EBP + -0x1c);
      cVar4 = (*pcVar3)();
      if (cVar4 == '\0') {
        FUN_004115bc(*(int *)(unaff_EBX + 8));
        goto LAB_0040bda2;
      }
      uVar5 = *(int *)(unaff_EBP + -0x18) + 1;
      *(uint *)(unaff_EBP + -0x18) = uVar5;
    } while (uVar5 < *(uint *)(unaff_EBP + -0x40));
  } while( true );
}



/* Function: FUN_0040bdc2 */

undefined4 __thiscall
FUN_0040bdc2(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_0040c0ce(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_0040b66b(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_0040bbb8(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_0040e5bb((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_0040e5e5(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_0040b66b((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_0040c0ce(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_0040be7a */

uint __thiscall FUN_0040be7a(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_0040ba09(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_0040b8a5(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_0040bf05 */

uint __thiscall
FUN_0040bf05(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_0040ba09(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_0040b8d2(param_1,local_c);
          uVar1 = local_14;
          goto LAB_0040bffb;
        }
        local_14 = FUN_0040b8a5(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_0040bffb;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_0040b8d2(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_0040be7a(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_0040ba09(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_0040b8a5(&local_28,param_3,param_4);
LAB_0040bffb:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_0040b8d2(&local_28,local_24 + param_5);
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



/* Function: FUN_0040c03b */

uint __thiscall FUN_0040c03b(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_0040ba09(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_0040b8d2(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_0040b8d2(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_0040c0ce */

uint __thiscall
FUN_0040c0ce(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar2 = FUN_0040ba09(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar2 == '\0') break;
      iVar1 = FUN_0040b8a5(&local_24,param_1,param_2);
      if (iVar1 < 0) {
LAB_0040c219:
        local_c = pvVar4;
        if ((char)uVar2 != '\0') goto LAB_0040c157;
        break;
      }
      if (iVar1 == 0) {
        pvVar4 = (void *)FUN_0040bf05(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          local_5 = '\x01';
          goto LAB_0040c219;
        }
        goto LAB_0040c209;
      }
      pvVar4 = (void *)FUN_0040c03b(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_0040c157:
    pvVar4 = local_c;
    uVar2 = 0;
    if (local_5 == '\0') {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      uVar2 = FUN_0040b918(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    local_10 = FUN_0040b918(&local_38);
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
            goto LAB_0040c247;
          }
          puVar3 = (undefined4 *)o__errno();
          *puVar3 = 0x22;
        }
        o__invalid_parameter_noinfo();
      }
LAB_0040c247:
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + local_10);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_0040b943(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_0040b8d2(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_0040b943(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_0040c209:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_0040c29f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040c29f(uint param_1,int param_2,undefined2 *param_3)

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
  puStack_18 = &LAB_004178e0;
  local_1c = ExceptionList;
  local_24 = DAT_0041a100 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_104c = param_1 + param_2 * 8;
  local_1038 = 0;
  local_1044 = 0;
  local_1048 = param_3;
  local_1034 = param_1;
  while( true ) {
    FUN_0040bab1(local_107c,*local_1048,local_1048[1],*(undefined1 *)(local_1048 + 2),local_1048[3],
                 *(undefined1 *)(local_1048 + 4));
    local_14 = 0;
    local_1030 = 0x1000;
    uVar2 = FUN_0040ae76(extraout_ECX,&local_103c,local_1028,&local_1030);
    FUN_00406f91(uVar2);
    if (uVar2 != 0) {
      local_103c = 0;
      local_1030 = 0;
    }
    FUN_0040bbb8(local_107c,local_1028,local_1030,0x1000);
    if (local_105b != '\0') break;
    local_10bc = &local_1040;
    local_1040 = 0;
    puStack_10b8 = &local_1044;
    local_10c0 = &PTR_FUN_004012e4;
    puStack_10b4 = local_107c;
    local_1088 = &local_10c0;
    local_1058 = local_10bc;
    local_1054 = puStack_10b8;
    local_1050 = puStack_10b4;
    local_1029 = FUN_0040bca3();
    uVar2 = local_1034;
    if (local_105c == '\0') {
LAB_0040c477:
      uVar2 = uVar2 + 8;
      local_1044 = local_1040;
      local_1034 = uVar2;
    }
    else {
      iVar3 = local_1068 - local_106c;
      iVar3 = FUN_0040aeca(local_1034,local_106c,iVar3,iVar3,iVar3,local_103c,1);
      if (iVar3 != -0x3fffffff) {
        if (iVar3 != 0) {
          FUN_0040aeca(uVar2,local_106c,local_1068 - local_106c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_0040c477;
      }
      local_1038 = local_1038 + 1;
      local_1029 = '\0';
    }
    uVar1 = local_1038;
    local_14 = 0xffffffff;
    FUN_0040e5e5(&local_1060);
    if (((local_1029 != '\0') || (local_104c <= uVar2)) || (0x31 < uVar1)) goto LAB_0040c4ce;
  }
  FUN_0040e5e5(&local_1060);
LAB_0040c4ce:
  ExceptionList = local_1c;
  FUN_00416420(local_24 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_0040c4f4 */

void __fastcall FUN_0040c4f4(int param_1)

{
  FUN_0040e5e5((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_0040c502 */

void * __fastcall FUN_0040c502(void *param_1)

{
  FUN_0040bab1(param_1,0,4,1,4,0);
  FUN_0040bab1((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_0040bab1((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_0040c544 */

void __fastcall FUN_0040c544(undefined2 *param_1)

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
  
  local_c = DAT_0041a100 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_004025d4;
    local_3c = DAT_004025d0;
    local_30 = DAT_004025b4;
    local_34 = DAT_004025b0;
    local_28 = DAT_00402654;
    local_2c = DAT_00402650;
    FUN_0040c29f((uint)&local_3c,3,param_1);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00402668;
    local_34 = DAT_00402508;
    local_38 = DAT_0040266c;
    local_2c = DAT_004025c8;
    local_30 = DAT_0040250c;
    local_28 = DAT_004025cc;
    FUN_0040c29f((uint)&local_3c,3,param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00402648;
    local_34 = DAT_00402500;
    local_38 = DAT_0040264c;
    local_2c = DAT_00402608;
    local_30 = DAT_00402504;
    local_24 = DAT_00402510;
    local_28 = DAT_0040260c;
    local_1c = DAT_00402528;
    local_20 = DAT_00402514;
    local_14 = DAT_00402620;
    local_18 = DAT_0040252c;
    local_10 = DAT_00402624;
    FUN_0040c29f((uint)&local_3c,6,param_1 + 0x24);
  }
  FUN_00416420(local_c ^ (uint)&local_3c);
  return;
}



/* Function: FUN_0040c69a */

void __thiscall FUN_0040c69a(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_0040b6a1(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_0040c711 */

void __thiscall FUN_0040c711(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_0040c770 */

void __thiscall FUN_0040c770(void *this,PSRWLOCK param_1)

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
  puStack_c = &LAB_00417729;
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
            goto LAB_0040c814;
          }
        } while (uVar3 < uVar2);
      }
      local_20 = 0;
LAB_0040c814:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_1c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0041b28c)(local_20);
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



/* Function: FUN_0040c872 */

void __fastcall FUN_0040c872(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041769d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040c8d3(param_1);
  FUN_0040e5e5((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_0040ca78((int)param_1 + 4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040c8d3 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040c8d3(void *param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x40c8df;
  FUN_0040c502(local_7c);
  local_8 = 0;
  FUN_0040ca2b(param_1,local_7c);
  FUN_0040c544(local_7c);
  FUN_0040ca78((int)local_7c);
  return;
}



/* Function: FUN_0040c914 */

undefined1 __thiscall FUN_0040c914(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_0040e599((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_0040e576((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_0040c96d */

undefined1 __thiscall FUN_0040c96d(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_0040c9d8((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_0040c914(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040c9d8 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040c9d8(PSRWLOCK param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x40c9e4;
  FUN_0040c502(local_7c);
  local_8 = 0;
  AcquireSRWLockExclusive(param_1);
  FUN_0040ca2b(param_1,local_7c);
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
  }
  FUN_0040c544(local_7c);
  FUN_0040ca78((int)local_7c);
  return;
}



/* Function: FUN_0040ca2b */

void __thiscall FUN_0040ca2b(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_0040bb2f(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_0040bb2f((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_0040bb2f((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_0040ca78 */

void __fastcall FUN_0040ca78(int param_1)

{
  FUN_0040e5e5((int *)(param_1 + 100));
  FUN_0040e5e5((int *)(param_1 + 0x40));
  FUN_0040e5e5((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_0040ca9c */

void __fastcall FUN_0040ca9c(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00417940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_0040edf8(this,0);
  FUN_0040edf8(param_1 + 0x1c,0);
  FUN_0040e5e5((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0040cffb(*(int *)(param_1 + 0x78));
  }
  FUN_0040e5e5((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_0040b867(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_0040e5e5((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0040fa70(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*this != 0) {
    FUN_0040fa70((PTP_TIMER)*this);
  }
  local_8 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0040f326(*(int **)(param_1 + 8));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040cb6e */

void __thiscall FUN_0040cb6e(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041769d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    bVar1 = FUN_0040cd9b((int)this);
    if (bVar1) {
      cVar2 = FUN_0040c96d(*(void **)((int)this + 0xc),param_1,param_2,param_3);
      if (cVar2 != '\0') {
        cVar2 = FUN_004073d3();
        if (cVar2 == '\0') {
          SRWLock = (PSRWLOCK)((int)this + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          FUN_0040ce28(this);
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



/* Function: FUN_0040cbfa */

void __thiscall FUN_0040cbfa(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_004073d3(), cVar1 == '\0')) &&
     (bVar2 = FUN_0040cd9b((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_0040c69a(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x40cfb0,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_0040c69a((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040cc9a */

void __fastcall FUN_0040cc9a(int param_1)

{
  char cVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041776f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004073d3();
  if (cVar1 == '\0') {
    bVar2 = FUN_0040cd9b(param_1);
    if (bVar2) {
      FUN_0040c770(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_0040c9d8(*(PSRWLOCK *)(param_1 + 0xc));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040cd02 */

void __thiscall FUN_0040cd02(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3)

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
  puStack_c = &LAB_00417792;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    cVar1 = FUN_004073d3();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 0x14);
      AcquireSRWLockExclusive(SRWLock);
      local_16 = 0;
      local_1c = param_1;
      local_18 = param_2;
      local_14 = param_3;
      FUN_0040b6a1((void *)((int)this + 0x7c),&local_1c,0xc);
      FUN_0040ce89(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040cd9b */

bool __fastcall FUN_0040cd9b(int param_1)

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
        iVar1 = FUN_0040f1f3(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_0040ce28 */

void __fastcall FUN_0040ce28(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00411860,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040edf8(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_0040b594(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_0040ce89 */

void __fastcall FUN_0040ce89(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_004118a0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040edf8(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_0040b594(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_0040cef0 */

void FUN_0040cef0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_0040c770(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_0040cf13 */

bool __fastcall FUN_0040cf13(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar3 = DAT_0041a580;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417963;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(param_1 + 0x4c);
  iVar4 = 0;
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar3 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_00408a85("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_0041a580 = pcVar3, pcVar3 == (code *)0x0)) {
      iVar4 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_0041b28c)(FUN_0040cef0,param_1,0,piVar1,uVar2);
      iVar4 = (*pcVar3)();
    }
  }
  ExceptionList = local_10;
  return iVar4 == 0;
}



/* Function: FUN_0040cfb0 */

void FUN_0040cfb0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_0040c770(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_0040cfd3 */

LPCRITICAL_SECTION __fastcall FUN_0040cfd3(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_0040cffb */

void FUN_0040cffb(int param_1)

{
  if ((param_1 != 0) && (DAT_0041a7ec != (PSRWLOCK)0x0)) {
    FUN_0040c711(DAT_0041a7ec + 0x1c,DAT_0041a7ec,param_1);
  }
  return;
}



/* Function: FUN_0040d026 */

bool __fastcall
FUN_0040d026(uint *param_1,undefined4 param_2,byte param_3,int param_4,undefined4 *param_5)

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
  
  puVar5 = &DAT_0041a778;
  if (param_4 != 0) {
    puVar5 = &DAT_0041a578;
  }
  local_c = param_1;
  if ((*puVar5 & 2) != 0) {
    if ((*puVar5 & 1) == 0) {
      return false;
    }
    *param_5 = 1;
    iVar2 = FUN_0040b3e1(param_1,param_2,(uint)param_3,(uint *)0x0);
    return iVar2 != 0;
  }
  iVar2 = FUN_0040d713();
  local_8 = 0;
  *param_5 = 1;
  iVar3 = FUN_0040b3e1(local_c,param_2,(uint)param_3,&local_8);
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
  if (DAT_0041a184 == '\0') {
    return bVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((iVar2 != 0) && (iVar2 == DAT_0041a194)) {
    local_14 = 0;
    local_10 = puVar5;
    uVar4 = FUN_0040b6a1(&DAT_0041a1b0,&local_14,8);
    if ((char)uVar4 != '\0') goto LAB_0040d0fe;
  }
  LOCK();
  *puVar5 = *puVar5 & 0xfffff7c1;
  UNLOCK();
LAB_0040d0fe:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  return bVar6;
}



/* Function: FUN_0040d120 */

uint FUN_0040d120(undefined4 param_1,uint param_2,undefined4 *param_3)

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
  bVar1 = FUN_0040d026(local_20,param_1,(byte)uVar3,param_2 >> 7 & 1,param_3);
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



/* Function: FUN_0040d1a0 */

void FUN_0040d1a0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_0040cc9a(0x41a7e0);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_0040b4e1(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_0040cb6e(&DAT_0041a7e0,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_0040cd02(&DAT_0041a7e0,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_0040d220 */

void FUN_0040d220(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_0040cbfa(&DAT_0041a7e0,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_0041a7e0 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a7f0);
      bVar1 = FUN_0040cf13(0x41a7e0);
      if (bVar1) {
        FUN_0040c69a(&DAT_0041a804,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a7f0);
    }
  }
  return;
}



/* Function: FUN_0040d290 */

void FUN_0040d290(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_0041a7e0 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_0041a830;
  }
  else {
    if (DAT_0041a7e0 == '\0') {
      return;
    }
    this = &DAT_0041a804;
  }
  FUN_0040c711(this,(PSRWLOCK)&DAT_0041a7f0,param_1);
  return;
}



/* Function: FUN_0040d2d4 */

void __fastcall FUN_0040d2d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_0041a604;
  if ((DAT_0041a604 != (code *)0x0) || (pcVar1 = DAT_0041a64c, DAT_0041a64c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1,param_2,param_3,0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040d30a */

void FUN_0040d30a(int param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ushort *)(param_1 + 4);
    do {
      FUN_0040d2d4(*(undefined4 *)(puVar1 + -2),(uint)*puVar1,(uint)puVar1[1]);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Function: FUN_0040d343 */

void __fastcall FUN_0040d343(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_0041a63c;
  if ((DAT_0041a63c == (code *)0x0) && (pcVar1 = DAT_0041a658, DAT_0041a658 == (code *)0x0)) {
    *param_1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1,param_2,param_3);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040d37b */

void FUN_0040d37b(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0041a740;
  if ((DAT_0041a740 != (code *)0x0) || (pcVar1 = DAT_0041a770, DAT_0041a770 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040d3ad */

void __fastcall FUN_0040d3ad(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00417986;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 8);
  *param_1 = 0;
  FUN_0040edf8(this,0);
  *param_1 = 0;
  FUN_0040d637((int)param_1);
  FUN_0040e5e5((int *)(param_1 + 0x38));
  FUN_0040e5e5((int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x18) != 0) {
    local_8 = 0;
    FUN_0040d37b(*(undefined4 *)(param_1 + 0x18));
    local_8 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    local_8 = 1;
    FUN_0040d37b(*(undefined4 *)(param_1 + 0x14));
  }
  if (*this != 0) {
    FUN_0040fa70((PTP_TIMER)*this);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d44e */

void __thiscall FUN_0040d44e(void *this,char *param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  char cVar1;
  char *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417963;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    local_18 = (char *)this;
    local_14 = this;
    cVar1 = FUN_004073d3();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 4);
      AcquireSRWLockExclusive(SRWLock);
      local_18 = param_1;
      local_14 = (void *)param_2;
      FUN_0040b6a1((void *)((int)this + 0x1c),&local_18,8);
      FUN_0040d6b2(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d4d8 */

void __fastcall FUN_0040d4d8(char *param_1)

{
  PSRWLOCK SRWLock;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    FUN_0040d637((int)param_1);
    param_1[0xc] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040d50c */

void __fastcall FUN_0040d50c(char *param_1)

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



/* Function: FUN_0040d571 */

undefined4 __fastcall FUN_0040d571(char *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041767a;
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
    piVar3 = FUN_0040e4a9(piVar1);
    FUN_0040d343(piVar3,FUN_0040d620,param_1);
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



/* Function: FUN_0040d620 */

void FUN_0040d620(char *param_1)

{
  FUN_0040d50c(param_1);
  return;
}



/* Function: FUN_0040d637 */

void __fastcall FUN_0040d637(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041767a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (7 < (uint)((int)puVar1 - (int)puVar2)) {
    for (; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      FUN_0040b29f(*puVar2,(uint *)puVar2[1]);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    FUN_0040d2d4(0,0xfe,0);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d6b2 */

void __fastcall FUN_0040d6b2(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 8);
  if (*(char *)((int)param_1 + 0xc) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_004118f0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040edf8(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_0040b594(this,(char *)((int)param_1 + 0xc),300000,0);
  }
  return;
}



/* Function: FUN_0040d713 */

void FUN_0040d713(void)

{
  if (DAT_0041a194 == 0) {
    FUN_0040d571(&DAT_0041a184);
    return;
  }
  return;
}



/* Function: FUN_0040d72e */

undefined4 __fastcall FUN_0040d72e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = DAT_0041a720;
  if ((DAT_0041a720 == (code *)0x0) && (pcVar2 = DAT_0041a724, DAT_0041a724 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1,param_2,param_3);
    uVar1 = (*pcVar2)();
  }
  return uVar1;
}



/* Function: FUN_0040d766 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 * __fastcall
FUN_0040d766(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

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
  
  pcVar2 = DAT_0041a630;
  uStack_4 = 0;
  puVar3 = &LAB_00417555;
  local_8 = 0x40d772;
  puVar7 = (undefined4 *)auStack_20;
  uVar5 = param_1;
  if ((DAT_0041a630 != (code *)0x0) &&
     ((param_2 == 0 || (puVar3 = (undefined1 *)(param_2 + -100), puVar3 < (undefined1 *)0x32)))) {
    uStack_24 = 1;
    puVar6 = &uStack_30;
    uStack_30 = 0x40d796;
    uStack_2c = param_1;
    iStack_28 = param_2;
    (*(code *)PTR_guard_check_icall_0041b28c)();
    puVar7 = puVar6 + -1;
    puVar6[-1] = 0x40d798;
    puVar3 = (undefined1 *)(*pcVar2)();
    uVar5 = extraout_ECX;
  }
  if (*param_5 != 0) {
    *(undefined4 *)((int)puVar7 + -4) = param_4;
    *(undefined4 *)((int)puVar7 + -8) = param_1;
    *(undefined4 *)((int)puVar7 + -0xc) = 0x40d7ae;
    puVar3 = (undefined1 *)
             FUN_0040d44e(&DAT_0041a184,*(char **)((int)puVar7 + -8),
                          *(undefined4 *)((int)puVar7 + -4));
    uVar5 = extraout_ECX_00;
  }
  if (param_5[1] != 0) {
    iVar1 = param_5[2];
    *(undefined4 *)((int)puVar7 + -4) = uVar5;
    *(int *)((int)puVar7 + -8) = param_5[1];
    *(undefined4 *)((int)puVar7 + -0xc) = 0x40d7c2;
    puVar3 = (undefined1 *)FUN_0040d2d4(param_1,iVar1,*(undefined4 *)((int)puVar7 + -8));
  }
  if ((param_5[4] == 0) && (local_8 = 0, DAT_0041a184 != '\0')) {
    *(undefined **)((int)puVar7 + -4) = &DAT_0041a188;
    puVar8 = (undefined1 *)((int)puVar7 + -8);
    *(undefined4 *)((int)puVar7 + -8) = 0x40d7e1;
    AcquireSRWLockExclusive(*(PSRWLOCK *)((int)puVar7 + -4));
    if (DAT_0041a19c == 0) {
      *(undefined4 *)(puVar8 + -4) = 0xffffffff;
      *(undefined4 *)(puVar8 + -8) = 0x40d7f6;
      piVar4 = FUN_0040e4a9(&DAT_0041a19c);
      *(undefined4 *)(puVar8 + -8) = 0x40d802;
      FUN_0040d343(piVar4,FUN_0040d820,*(undefined4 *)(puVar8 + -4));
    }
    *(undefined **)(puVar8 + -4) = &DAT_0041a188;
    puVar7 = (undefined4 *)(puVar8 + -8);
    *(undefined4 *)(puVar8 + -8) = 0x40d809;
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(puVar8 + -4));
    puVar3 = extraout_EAX;
  }
  *(undefined4 *)((int)puVar7 + -4) = 0x40d80e;
  return puVar3;
}



/* Function: FUN_0040d820 */

void FUN_0040d820(void)

{
  FUN_0040d4d8(&DAT_0041a184);
  return;
}



/* Function: FUN_0040d833 */

bool __fastcall
FUN_0040d833(uint *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
  puVar3 = FUN_0040afa0(param_1,param_5,local_3c);
  puVar6 = local_20;
  for (iVar4 = 6; uVar2 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0040d766(local_8,param_5,0,param_1,(int *)local_20);
  if (param_3 != 0) {
    uVar5 = param_5 | 0x80000000;
    if (param_4 == 0) {
      uVar5 = param_5;
    }
    FUN_0040d2d4(uVar2,uVar5,0);
  }
  pcVar1 = DAT_0041a648;
  if ((local_10 == 0) && (DAT_0041a648 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041b28c)(local_8,param_5,param_8);
    (*pcVar1)();
  }
  return local_10 == 0;
}



/* Function: FUN_0040d8c5 */

void __fastcall
FUN_0040d8c5(uint *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  if (param_7 != 0) {
    uVar3 = FUN_0040af23(param_7,param_6);
    uVar4 = (uint)*(byte *)(param_5 + 4);
    bVar2 = FUN_0040d833(param_1,param_2,param_3,param_4,uVar3,uVar4,uVar4,uVar4);
    pcVar1 = DAT_0041a780;
    if ((CONCAT31(extraout_var,bVar2) != 0) && (DAT_0041a780 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_0041b28c)(param_2,param_5,0,param_6,&param_7,0,0,1);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_0040d940 */

void FUN_0040d940(undefined4 param_1,uint param_2,undefined4 param_3)

{
  FUN_0040d2d4(param_1,param_2 | 0x40000000,param_3);
  return;
}



/* Function: FUN_0040d964 */

uint __thiscall FUN_0040d964(void *this,void *param_1)

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
  puStack_c = &LAB_00417963;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (int *)0x0;
  local_1c = &local_14;
  local_18 = 1;
  uVar2 = Ordinal_167(this,&DAT_004024d4,local_1c,DAT_0041a100 ^ (uint)&stack0xfffffffc);
  if ((int)uVar2 < 0) {
    iVar4 = 0x1c1;
LAB_0040d9ea:
    FUN_00407f3a(unaff_retaddr,iVar4,0x4023ec,uVar2);
  }
  else {
    if (local_14 == (int *)0x0) {
      pvVar3 = GetCurrentProcess();
      FUN_0040e417(param_1,pvVar3);
    }
    else {
      pcVar1 = *(code **)(*local_14 + 0xc);
      FUN_0040e417(param_1,0);
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14,0x1000,param_1);
      uVar2 = (*pcVar1)();
      if ((int)uVar2 < 0) {
        iVar4 = 0x1c4;
        goto LAB_0040d9ea;
      }
    }
    uVar2 = 0;
  }
  FUN_0040e3b3(&local_1c);
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_0040da30 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __thiscall FUN_0040da30(void *this,int *param_1)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  int unaff_retaddr;
  int local_18;
  HANDLE local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x40da3c;
  if (*(int **)((int)this + 0x10) != param_1) {
    local_8 = 0;
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 4);
      (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
      (*pcVar1)();
    }
    local_18 = *(int *)((int)this + 0x10);
    *(int **)((int)this + 0x10) = param_1;
    FUN_004059d3(&local_18);
  }
  local_14[0] = (HANDLE)0x0;
  uVar2 = FUN_0040d964(param_1,local_14);
  if ((int)uVar2 < 0) {
    FUN_00407f3a(unaff_retaddr,0x21,0x402414,uVar2);
  }
  else {
    DVar3 = GetProcessId(local_14[0]);
    *(DWORD *)((int)this + 0xc) = DVar3;
    uVar2 = 0;
  }
  if (local_14[0] != (HANDLE)0x0) {
    CloseHandle(local_14[0]);
  }
  return uVar2;
}



/* Function: FUN_0040dad0 */

undefined4 FUN_0040dad0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}



/* Function: FUN_0040daf0 */

int __thiscall FUN_0040daf0(void *this,byte param_1)

{
  FUN_004059d3((int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (int)this;
}



/* Function: FUN_0040db30 */

undefined4 FUN_0040db30(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0x80004001;
}



/* Function: FUN_0040db50 */

void FUN_0040db50(int param_1,int *param_2,undefined4 *param_3)

{
  *param_3 = 0;
  FUN_0040dbda((void *)(param_1 + -4),(PSRWLOCK)0x0,param_2,0,param_3);
  return;
}



/* Function: FUN_0040db80 */

void FUN_0040db80(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = 0;
  FUN_0040dbda((void *)(param_1 + -4),(PSRWLOCK)0x0,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040dbb0 */

void FUN_0040dbb0(int param_1,PSRWLOCK param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

{
  *param_5 = 0;
  FUN_0040dbda((void *)(param_1 + -8),param_2,param_3,param_4,param_5);
  return;
}



/* Function: FUN_0040dbda */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall
FUN_0040dbda(void *this,PSRWLOCK param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int unaff_retaddr;
  undefined4 **local_54;
  PSRWLOCK local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  undefined4 **local_34;
  undefined4 *local_30;
  undefined1 local_2c [20];
  undefined4 local_18 [4];
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_50 = param_1;
  local_4c = param_2;
  *param_4 = 0;
  local_30 = (undefined4 *)0x0;
  local_8 = 0;
  uStack_7 = 0;
  local_34 = &local_30;
  piVar5 = FUN_0040e039(&local_34);
  iVar6 = FUN_0040df4f(local_50,param_2,param_3,piVar5);
  if (iVar6 < 0) {
    local_34 = (undefined4 **)0x0;
    local_8 = 1;
    local_18[0] = 0;
    DVar7 = WindowsCreateStringReference(L"Windows.UI.Popups.MessageDialog",0x1f,local_2c,local_18);
    uVar4 = local_18[0];
    ppuVar2 = local_34;
    if ((int)DVar7 < 0) {
      FUN_00406285(DVar7);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_8 = 2;
    if (local_34 != (undefined4 **)0x0) {
      local_34 = (undefined4 **)0x0;
      pcVar1 = (code *)(*ppuVar2)[2];
      (*(code *)PTR_guard_check_icall_0041b28c)(ppuVar2);
      (*pcVar1)();
    }
    local_8 = 1;
    uVar8 = RoGetActivationFactory(uVar4,&DAT_004025a0,&local_34);
    ppuVar2 = local_34;
    if ((int)uVar8 < 0) {
      iVar6 = 0x6d;
    }
    else {
      pcVar1 = (code *)(*local_34)[7];
      local_54 = &local_30;
      piVar5 = FUN_0040e039(&local_54);
      (*(code *)PTR_guard_check_icall_0041b28c)(ppuVar2,local_4c,param_3,piVar5);
      uVar8 = (*pcVar1)();
      if (-1 < (int)uVar8) {
        FUN_004059d3((int *)&local_34);
        goto LAB_0040dced;
      }
      iVar6 = 0x6f;
    }
    FUN_00407f3a(unaff_retaddr,iVar6,0x402414,uVar8);
    FUN_004059d3((int *)&local_34);
    goto LAB_0040df2d;
  }
LAB_0040dced:
  local_48 = (int *)0x0;
  pcVar1 = *(code **)*local_30;
  local_8 = 4;
  (*(code *)PTR_guard_check_icall_0041b28c)(local_30,&DAT_00402658,&local_48);
  uVar8 = (*pcVar1)();
  local_8 = 3;
  if ((int)uVar8 < 0) {
    FUN_00407f3a(unaff_retaddr,0x73,0x402414,uVar8);
  }
  else {
    _local_8 = CONCAT31(uStack_7,8);
    local_38 = (int *)0x0;
    iVar6 = FUN_004057f2(&DAT_00402628,(int *)&DAT_00401da4);
    if (iVar6 == 0) {
      iVar6 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402610);
      if (iVar6 != 0) goto LAB_0040dd81;
      uVar8 = FUN_00411c82(this,extraout_ECX_00,(int *)&local_38);
      if (-1 < (int)uVar8) {
        pcVar1 = *(code **)(*local_38 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(local_38);
        (*pcVar1)();
      }
    }
    else {
LAB_0040dd81:
                    /* WARNING: Load size is inaccurate */
      pcVar1 = *(code **)(*this + 4);
      local_38 = (int *)this;
      (*(code *)PTR_guard_check_icall_0041b28c)(this);
      (*pcVar1)();
      uVar8 = 0;
    }
    local_8 = 6;
    if ((int)uVar8 < 0) {
      FUN_00407f3a(unaff_retaddr,0x76,0x402414,uVar8);
    }
    else {
      local_44 = 0;
      local_4c = local_38;
      local_8 = 9;
      uVar8 = FUN_00412093(&local_44,&local_4c);
      if ((int)uVar8 < 0) {
        iVar6 = 0x79;
LAB_0040de01:
        FUN_00407f3a(unaff_retaddr,iVar6,0x402414,uVar8);
      }
      else {
        pcVar1 = *(code **)(*local_48 + 0xc);
        (*(code *)PTR_guard_check_icall_0041b28c)(local_48,local_44);
        uVar8 = (*pcVar1)();
        if ((int)uVar8 < 0) {
          iVar6 = 0x7a;
          goto LAB_0040de01;
        }
        local_40 = (int *)0x0;
        pcVar1 = *(code **)*local_30;
        local_8 = 0xc;
        (*(code *)PTR_guard_check_icall_0041b28c)(local_30,&DAT_004025d8,&local_40);
        iVar6 = (*pcVar1)();
        local_8 = 0xb;
        if (iVar6 < 0) {
LAB_0040de6c:
          local_3c = (int *)0x0;
          pcVar1 = *(code **)*local_30;
          local_8 = 0xf;
          (*(code *)PTR_guard_check_icall_0041b28c)(local_30,&DAT_004025e8,&local_3c);
          iVar6 = (*pcVar1)();
          local_8 = 0xe;
          if (iVar6 < 0) {
LAB_0040def7:
            puVar3 = local_30;
            local_30 = (undefined4 *)0x0;
            *param_4 = puVar3;
          }
          else {
            pcVar1 = *(code **)(*local_3c + 0xc);
            (*(code *)PTR_guard_check_icall_0041b28c)(local_3c,1);
            uVar8 = (*pcVar1)();
            if (-1 < (int)uVar8) {
              uVar8 = FUN_0040f994(&DAT_0041a7d0);
              if ((char)uVar8 != '\0') {
                pcVar1 = *(code **)(*local_3c + 0x1c);
                (*(code *)PTR_guard_check_icall_0041b28c)(local_3c,1);
                uVar8 = (*pcVar1)();
                if ((int)uVar8 < 0) {
                  iVar6 = 0x88;
                  goto LAB_0040dee7;
                }
              }
              goto LAB_0040def7;
            }
            iVar6 = 0x85;
LAB_0040dee7:
            FUN_00407f3a(unaff_retaddr,iVar6,0x402414,uVar8);
          }
          FUN_004059d3((int *)&local_3c);
        }
        else {
          pcVar1 = *(code **)(*local_40 + 0xc);
          (*(code *)PTR_guard_check_icall_0041b28c)(local_40,local_50);
          uVar8 = (*pcVar1)();
          if (-1 < (int)uVar8) goto LAB_0040de6c;
          FUN_00407f3a(unaff_retaddr,0x7f,0x402414,uVar8);
        }
        FUN_004059d3((int *)&local_40);
      }
      FUN_004059d3(&local_44);
    }
    FUN_004059d3((int *)&local_38);
  }
  FUN_004059d3((int *)&local_48);
LAB_0040df2d:
  FUN_004059d3((int *)&local_30);
  FUN_0041736b();
  return;
}



/* Function: FUN_0040df4f */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0040df4f(PSRWLOCK param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int *piVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  int unaff_retaddr;
  char *pcVar6;
  int *local_30;
  undefined1 local_2c [20];
  void *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_30 = (int *)0x0;
  local_8 = 0;
  local_18[0] = (void *)0x0;
  DVar3 = WindowsCreateStringReference
                    (L"Windows.Internal.SystemMessageDialogExperience",0x2e,local_2c,local_18);
  if ((int)DVar3 < 0) {
    FUN_00406285(DVar3);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = FUN_0040aa6c(local_18[0],param_1,(int *)&local_30);
  if ((int)uVar4 < 0) {
    pcVar6 = "onecoreuap\\internal\\shell\\inc\\platformextensiontools.h";
    iVar5 = 0x299;
  }
  else {
    if (local_30 == (int *)0x0) goto LAB_0040e019;
    pcVar1 = *(code **)(*local_30 + 0x1c);
    (*(code *)PTR_guard_check_icall_0041b28c)(local_30,param_3);
    uVar4 = (*pcVar1)();
    if ((int)uVar4 < 0) {
      iVar5 = 0x9f;
    }
    else {
      pcVar1 = *(code **)(*local_30 + 0x38);
      (*(code *)PTR_guard_check_icall_0041b28c)(local_30,param_2);
      uVar4 = (*pcVar1)();
      piVar2 = local_30;
      if (-1 < (int)uVar4) {
        local_30 = (int *)0x0;
        *param_4 = piVar2;
        goto LAB_0040e019;
      }
      iVar5 = 0xa0;
    }
    pcVar6 = "onecoreuap\\shell\\pickerhost\\exe\\messagedialog.cpp";
  }
  FUN_00407f3a(unaff_retaddr,iVar5,(int)pcVar6,uVar4);
LAB_0040e019:
  FUN_004059d3((int *)&local_30);
  FUN_0041736b();
  return;
}



/* Function: FUN_0040e039 */

int * __fastcall FUN_0040e039(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417627;
  local_10 = ExceptionList;
  uVar4 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  local_8 = 0;
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    *piVar1 = 0;
    pcVar3 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar2,uVar4);
    (*pcVar3)();
  }
  ExceptionList = local_10;
  return piVar1;
}



/* Function: FUN_0040e0a0 */

undefined4 FUN_0040e0a0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_0040e0d0 */

undefined4 FUN_0040e0d0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = 2;
  }
  else {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x18) + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)();
    uVar2 = (*pcVar1)();
  }
  *param_2 = uVar2;
  return 0;
}



/* Function: FUN_0040e110 */

undefined4 FUN_0040e110(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  RoOriginateError(0x8000000e,0);
  return 0x8000000e;
}



/* Function: FUN_0040e140 */

undefined4 FUN_0040e140(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPVOID pvVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  int local_8;
  
  uVar2 = 0;
  *param_3 = 0;
  *param_2 = 0;
  pvVar1 = CoTaskMemAlloc(0x30);
  if (pvVar1 == (LPVOID)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    local_8 = 0;
    FUN_00411c30(&local_8,(int)pvVar1);
    *param_2 = 3;
    *param_3 = extraout_EDX;
  }
  return uVar2;
}



/* Function: FUN_0040e190 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_0040e190(int *param_1,int *param_2,int *param_3)

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
  iVar2 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if (iVar2 == 0) {
    iVar2 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402610);
    if (iVar2 != 0) goto LAB_0040e1dd;
    iVar5 = FUN_00411c82(param_1,extraout_ECX_00,param_3);
    if (iVar5 < 0) goto LAB_0040e1f2;
    iVar2 = *(int *)*param_3;
  }
  else {
LAB_0040e1dd:
    *param_3 = (int)param_1;
    iVar2 = *param_1;
  }
  pcVar1 = *(code **)(iVar2 + 4);
  puVar3 = &stack0xffffffd8;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  puVar4 = puVar3 + -4;
  *(undefined4 *)(puVar3 + -4) = 0x40e1f2;
  (*pcVar1)();
LAB_0040e1f2:
  *(undefined4 *)(puVar4 + -4) = 0x40e1f9;
  return iVar5;
}



/* Function: FUN_0040e210 */

int FUN_0040e210(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = FUN_0040584d(param_1 + 4);
  uVar1 = param_1[7];
  if (iVar3 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x1c);
      (*(code *)PTR_guard_check_icall_0041b28c)(1);
      (*pcVar2)();
    }
    if ((uVar1 >> 2 & 1) == 0) {
      return 0;
    }
  }
  else {
    if ((uVar1 & 4) != 0) {
      return iVar3;
    }
    if (iVar3 != 1) {
      return iVar3;
    }
  }
  if (DAT_0041a558 != (int *)0x0) {
    pcVar2 = *(code **)(*DAT_0041a558 + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
    (*pcVar2)();
  }
  return iVar3;
}



/* Function: FUN_0040e290 */

int FUN_0040e290(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0040581d((int *)(param_1 + 0x10));
  if ((((*(byte *)(param_1 + 0x1c) & 4) == 0) && (iVar2 == 2)) && (DAT_0041a558 != (int *)0x0)) {
    pcVar1 = *(code **)(*DAT_0041a558 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_0040e2e0 */

int FUN_0040e2e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0040584d(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_0041b28c)(1);
      (*pcVar1)();
    }
    if (DAT_0041a558 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0041a558 + 8);
      (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_0040e340 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0040e340(int *param_1,int *param_2,undefined4 *param_3)

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
  piStack_24 = (int *)0x40e363;
  iVar1 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if (iVar1 == 0) {
    piStack_24 = (int *)0x40e371;
    iVar1 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402638);
    if (iVar1 == 0) {
      uVar5 = 0x80004002;
      goto LAB_0040e39e;
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
  uStack_28 = 0x40e39c;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x40e39e;
  (*pcVar4)();
LAB_0040e39e:
  *(undefined4 *)((int)puVar3 + -4) = 0x40e3a5;
  return uVar5;
}



/* Function: FUN_0040e3b3 */

void __fastcall FUN_0040e3b3(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417578;
  local_10 = ExceptionList;
  uVar3 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    piVar1 = *(int **)*param_1;
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_0041b28c)(piVar1,uVar3);
      (*pcVar2)();
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040e417 */

void __thiscall FUN_0040e417(void *this,undefined4 param_1)

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



/* Function: FUN_0040e44f */

void __fastcall FUN_0040e44f(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041776f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004073d3();
  if (cVar1 == '\0') {
    FUN_0040d3ad(param_1);
  }
  else {
    *param_1 = 0;
    FUN_0040d637((int)param_1);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040e4a9 */

int * __fastcall FUN_0040e4a9(int *param_1)

{
  int iVar1;
  DWORD dwErrCode;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417940;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    local_8 = 0;
    dwErrCode = GetLastError();
    FUN_0040d37b(iVar1);
    SetLastError(dwErrCode);
  }
  *param_1 = 0;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_0040e511 */

void __fastcall FUN_0040e511(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00417578;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004073d3();
  if (cVar1 == '\0') {
    FUN_0040ca9c(param_1);
  }
  else {
    *param_1 = 0;
    local_8 = 0;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      FUN_0040f326(*(int **)(param_1 + 8));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040e576 */

void __thiscall FUN_0040e576(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0040bdc2(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_0040e599 */

void __fastcall FUN_0040e599(void *param_1)

{
  FUN_0040bdc2(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_0040e5bb */

void __thiscall FUN_0040e5bb(void *this,int param_1)

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



/* Function: FUN_0040e5e5 */

void __fastcall FUN_0040e5e5(int *param_1)

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
  puStack_c = &LAB_0041776f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar1,DAT_0041a100 ^ (uint)&stack0xfffffffc);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040e660 */

undefined4 FUN_0040e660(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_0040e680 */

undefined4 FUN_0040e680(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_3 = 0;
  *param_2 = 0;
  puVar1 = (undefined4 *)CoTaskMemAlloc(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    *puVar1 = DAT_004025f8;
    puVar1[1] = DAT_004025fc;
    puVar1[2] = DAT_00402600;
    puVar1[3] = DAT_00402604;
    puVar1[4] = DAT_00402670;
    puVar1[5] = DAT_00402674;
    puVar1[6] = DAT_00402678;
    puVar1[7] = DAT_0040267c;
    *param_2 = 2;
    *param_3 = puVar1;
  }
  return uVar2;
}



/* Function: FUN_0040e6e0 */

int FUN_0040e6e0(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  piVar1 = param_1 + 7;
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      iVar5 = FUN_0040584d((int *)(iVar3 * 2 + 0xc));
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
      pcVar2 = *(code **)(*param_1 + 0x28);
      (*(code *)PTR_guard_check_icall_0041b28c)(1);
      (*pcVar2)();
    }
    if (DAT_0041a558 != (int *)0x0) {
      pcVar2 = *(code **)(*DAT_0041a558 + 8);
      (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
      (*pcVar2)();
    }
  }
  return iVar5;
}



/* Function: FUN_0040e770 */

int FUN_0040e770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  piVar4 = (int *)(param_1 + 0x1c);
  iVar3 = *piVar4;
  while( true ) {
    if (iVar3 < 0) {
      iVar3 = FUN_0040581d((int *)(iVar3 * 2 + 0xc));
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



/* Function: FUN_0040e7c3 */

void __fastcall FUN_0040e7c3(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0040a49a(puVar1);
    FUN_00416491(puVar1);
  }
  return;
}



/* Function: FUN_0040e7e8 */

void __thiscall FUN_0040e7e8(void *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *this;
  *(int *)this = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_0041b28c)(1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_0040e818 */

void __fastcall FUN_0040e818(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_0041b28c)(1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_0040e840 */

void __fastcall FUN_0040e840(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0040a39d(puVar1);
    FUN_00416491(puVar1);
  }
  return;
}



/* Function: FUN_0040e868 */

void __fastcall FUN_0040e868(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  HKEY hKey;
  DWORD dwErrCode;
  
  if (*(char *)(param_1 + 2) != '\0') {
    uVar1 = param_1[1];
    puVar2 = (undefined4 *)*param_1;
    hKey = (HKEY)*puVar2;
    if (hKey != (HKEY)0x0) {
      dwErrCode = GetLastError();
      RegCloseKey(hKey);
      SetLastError(dwErrCode);
    }
    *puVar2 = uVar1;
  }
  return;
}



/* Function: FUN_0040e8ab */

void __fastcall FUN_0040e8ab(int *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == 1) {
    *param_1 = 2;
    puVar1 = FUN_004090ba();
    FUN_00411ad4(*(uint **)(puVar1 + 4),(LPCGUID)(param_1 + 2));
  }
  *param_1 = 3;
  return;
}



/* Function: FUN_0040e8d9 */

void __fastcall FUN_0040e8d9(PSRWLOCK param_1)

{
  PSRWLOCK local_8;
  
  local_8 = param_1;
  FUN_0040f504(param_1,&local_8);
  *(undefined4 *)param_1[0x2a].Ptr = 2;
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
  }
  return;
}



/* Function: FUN_0040e910 */

undefined4 __thiscall FUN_0040e910(void *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int extraout_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
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
  PSRWLOCK local_8;
  
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1[4]);
    cVar3 = (*pcVar1)();
    if (cVar3 == '\0') {
      puVar4 = FUN_004090ba();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_004047a8(*(uint **)(puVar4 + 4),0,0x6000);
        if ((char)uVar5 != '\0') {
          local_8 = (PSRWLOCK)param_1[0x12];
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
          local_40 = &local_54;
          local_50[0] = (undefined4 *)0x0;
          local_54 = 0x1000000;
          FUN_00405033(extraout_ECX,&DAT_00402f15,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                       &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,
                       &local_c,&local_8);
        }
      }
    }
    else {
      puVar4 = FUN_004090ba();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_004047a8(*(uint **)(puVar4 + 4),0,0x4000);
        if ((char)uVar5 != '\0') {
          local_40 = (undefined4 *)param_1[8];
          local_3c = param_1[0xb];
          local_38 = param_1[4];
          local_34 = param_1[0x12];
          local_30 = param_1[0x11];
          local_2c = param_1[0x10];
          local_28 = param_1[0xf];
          local_24 = param_1[0xe];
          local_20 = param_1[0xd];
          local_1c = param_1[0xc];
          local_18 = param_1[6];
          local_14 = param_1[5];
          local_10 = *param_1;
          local_c = param_1[0x13];
          local_8 = (PSRWLOCK)param_1[10];
          local_44 = param_1[9];
          local_48 = param_1[2];
          local_50[0] = &local_5c;
          local_58 = 0;
          local_5c = 0x1000000;
          FUN_004049b4(extraout_ECX_00,&DAT_00403c0b,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX_00,local_50,&local_48,&local_44,&local_8,&local_c,&local_10,
                       &local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,
                       &local_30,&local_34,&local_38,&local_3c,&local_40);
        }
      }
    }
  }
  FUN_0040f504(this,&local_8);
  iVar2 = *(int *)((int)this + 0xa8);
  iVar6 = param_1[2];
  if ((iVar6 != *(int *)(iVar2 + 0x44)) &&
     ((iVar6 != *(int *)(iVar2 + 0x38) || (-1 < *(int *)(iVar2 + 0x38))))) {
    iVar6 = FUN_00407403((void *)(iVar2 + 0x3c),param_1);
  }
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
    iVar6 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}



/* Function: FUN_0040eb68 */

void __fastcall FUN_0040eb68(int *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == 1) {
    *param_1 = 2;
    puVar1 = FUN_004090ba();
    FUN_00411b2d(*(uint **)(puVar1 + 4),(LPCGUID)(param_1 + 2));
  }
  *param_1 = 3;
  return;
}



/* Function: FUN_0040eba0 */

undefined4 __thiscall FUN_0040eba0(void *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int extraout_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
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
  PSRWLOCK local_8;
  
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1[4]);
    cVar3 = (*pcVar1)();
    if (cVar3 == '\0') {
      puVar4 = FUN_004090ba();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_004047a8(*(uint **)(puVar4 + 4),0,0x2000);
        if ((char)uVar5 != '\0') {
          local_8 = (PSRWLOCK)param_1[0x12];
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
          local_40 = &local_54;
          local_50[0] = (undefined4 *)0x0;
          local_54 = 0x1000000;
          FUN_00405033(extraout_ECX,&DAT_004037a1,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                       &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,
                       &local_c,&local_8);
        }
      }
    }
    else {
      puVar4 = FUN_004090ba();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_004047a8(*(uint **)(puVar4 + 4),0,0x2000);
        if ((char)uVar5 != '\0') {
          local_40 = (undefined4 *)param_1[8];
          local_3c = param_1[0xb];
          local_38 = param_1[4];
          local_34 = param_1[0x12];
          local_30 = param_1[0x11];
          local_2c = param_1[0x10];
          local_28 = param_1[0xf];
          local_24 = param_1[0xe];
          local_20 = param_1[0xd];
          local_1c = param_1[0xc];
          local_18 = param_1[6];
          local_14 = param_1[5];
          local_10 = *param_1;
          local_c = param_1[0x13];
          local_8 = (PSRWLOCK)param_1[10];
          local_44 = param_1[9];
          local_48 = param_1[2];
          local_50[0] = &local_5c;
          local_58 = 0;
          local_5c = 0x1000000;
          FUN_004049b4(extraout_ECX_00,&DAT_00403533,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX_00,local_50,&local_48,&local_44,&local_8,&local_c,&local_10,
                       &local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,
                       &local_30,&local_34,&local_38,&local_3c,&local_40);
        }
      }
    }
  }
  FUN_0040f504(this,&local_8);
  iVar2 = *(int *)((int)this + 0xa8);
  iVar6 = param_1[2];
  if ((iVar6 != *(int *)(iVar2 + 0x44)) &&
     ((iVar6 != *(int *)(iVar2 + 0x38) || (-1 < *(int *)(iVar2 + 0x38))))) {
    iVar6 = FUN_00407403((void *)(iVar2 + 0x3c),param_1);
  }
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
    iVar6 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}



/* Function: FUN_0040edf8 */

void __thiscall FUN_0040edf8(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_0040fa70(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040ee2f */

DWORD * FUN_0040ee2f(char param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  
  iVar3 = DAT_0041a5a8;
  DVar4 = GetCurrentThreadId();
  pDVar1 = (DWORD *)(iVar3 + (DVar4 % 10) * 4);
  pDVar5 = (DWORD *)*pDVar1;
  while( true ) {
    if (pDVar5 == (DWORD *)0x0) {
      if ((param_1 == '\0') || (pDVar5 = (DWORD *)FUN_00406c16(0,0xc), pDVar5 == (DWORD *)0x0)) {
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



/* Function: FUN_0040eec1 */

void __fastcall FUN_0040eec1(int *param_1)

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



/* Function: FUN_0040ef06 */

undefined4 __thiscall FUN_0040ef06(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_004072e5(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_0040ef56(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_0040ef56 */

void __thiscall FUN_0040ef56(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_004081c3(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040ef90 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0040ef90(int *param_1,int *param_2,undefined4 *param_3)

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
  piStack_24 = (int *)0x40efb3;
  iVar1 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if (iVar1 == 0) {
    piStack_24 = (int *)0x40efc1;
    iVar1 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402530);
    if (iVar1 == 0) {
      uVar5 = 0x80004002;
      goto LAB_0040efee;
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
  uStack_28 = 0x40efec;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x40efee;
  (*pcVar4)();
LAB_0040efee:
  *(undefined4 *)((int)puVar3 + -4) = 0x40eff5;
  return uVar5;
}



/* Function: FUN_0040f003 */

void __fastcall FUN_0040f003(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004067a1(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040ef56(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_004072e5(extraout_ECX);
    goto LAB_0040f0ef;
  }
  FUN_0040fa2d(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_0040821b(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    iVar3 = 299;
LAB_0040f11d:
    FUN_00407f3a(unaff_retaddr,iVar3,0x401ff4,uVar2);
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_0040f808((int)local_210,&local_214,param_2);
    if ((int)uVar2 < 0) {
      iVar3 = 0x134;
      goto LAB_0040f11d;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_004081f0(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004081c3(local_214);
  }
LAB_0040f0ef:
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040f133 */

int __fastcall FUN_0040f133(int *param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int *piVar4;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_004073d3();
  if (cVar1 == '\0') {
    iVar2 = FUN_0040fa2d(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar4 = local_8;
    if (*param_1 == 0) {
      FUN_0040ef56(param_1 + 2,0);
      FUN_0040ef56(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar3 = GetLastError();
        FUN_004081f0(local_8);
        SetLastError(DVar3);
      }
      FUN_0040f673((int)param_1);
      DVar3 = 0;
      hHeap = GetProcessHeap();
      iVar2 = HeapFree(hHeap,DVar3,param_1);
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = FUN_004081f0(piVar4);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    iVar2 = *param_1;
  }
  return iVar2;
}



/* Function: FUN_0040f1c2 */

void __fastcall FUN_0040f1c2(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_00408fab((void *)(*param_1 + 4),*(PVOID *)(*param_1 + 0x14));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_0040f1f3 */

void __fastcall FUN_0040f1f3(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004067a1(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040ef56(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_004072e5(extraout_ECX);
    goto LAB_0040f2e2;
  }
  FUN_0040fa2d(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_0040821b(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    iVar3 = 299;
LAB_0040f310:
    FUN_00407f3a(unaff_retaddr,iVar3,0x401ff4,uVar2);
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_0040f8cd((int)local_210,&local_214,param_2);
    if ((int)uVar2 < 0) {
      iVar3 = 0x134;
      goto LAB_0040f310;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_004081f0(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004081c3(local_214);
  }
LAB_0040f2e2:
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040f326 */

void __fastcall FUN_0040f326(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_004073d3();
  if (cVar1 == '\0') {
    FUN_0040fa2d(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_0040ef56(param_1 + 2,0);
      FUN_0040ef56(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_004081f0(local_8);
        SetLastError(DVar2);
      }
      FUN_0040f69e((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_004081f0(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_0040c8d3(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_0040f3c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f3c0(void)

{
  _DAT_0041a7e4 = "WilStaging_02";
  DAT_0041a7e0 = 0;
  _DAT_0041a7e8 = 0;
  DAT_0041a7ec = 0;
  _DAT_0041a7f0 = 0;
  _DAT_0041a7f4 = 0;
  _DAT_0041a7f8 = 0;
  _DAT_0041a7fc = 0;
  _DAT_0041a800 = 0;
  FUN_0040cfd3((LPCRITICAL_SECTION)&DAT_0041a804);
  _DAT_0041a82c = 0;
  FUN_0040cfd3((LPCRITICAL_SECTION)&DAT_0041a830);
  _DAT_0041a868 = 0;
  _DAT_0041a858 = 0;
  uRam0041a85c = 0;
  uRam0041a860 = 0;
  uRam0041a864 = 0;
  DAT_0041a7e0 = 1;
  return;
}



/* Function: FUN_0040f439 */

void __fastcall FUN_0040f439(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (iVar1 = *param_1, iVar1 != 0)) {
      FUN_00409ef0((int *)(iVar1 + 4));
      FUN_00416491(iVar1);
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0040f475 */

int __fastcall FUN_0040f475(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417a70;
  local_10 = ExceptionList;
  iVar2 = -0x7ff8fdc2;
  if (*(int *)(param_1 + 0x44) < 0) {
    iVar2 = *(int *)(param_1 + 0x44);
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    iVar3 = *(int *)(param_1 + 0x38);
    if (-1 < *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x38) = iVar2;
      iVar3 = iVar2;
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    return iVar3;
  }
  ExceptionList = &local_10;
  memset(local_68,0,0x58);
  FUN_00407d37((int)local_68);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}



/* Function: FUN_0040f504 */

undefined4 * __thiscall FUN_0040f504(void *this,undefined4 *param_1)

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



/* Function: FUN_0040f57b */

void __fastcall FUN_0040f57b(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_0041b28c)();
  (*pcVar1)();
  return;
}



/* Function: FUN_0040f5a6 */

void __fastcall FUN_0040f5a6(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (iVar1 = *param_1, iVar1 != 0)) {
      FUN_00409eca((int *)(iVar1 + 4));
      FUN_00416491(iVar1);
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0040f5e4 */

int __fastcall FUN_0040f5e4(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 local_6c [92];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417a93;
  local_10 = ExceptionList;
  iVar2 = -0x7ff8fdc2;
  if (*(int *)(param_1 + 0x44) < 0) {
    iVar2 = *(int *)(param_1 + 0x44);
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    iVar3 = *(int *)(param_1 + 0x38);
    if (-1 < *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x38) = iVar2;
      iVar3 = iVar2;
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    return iVar3;
  }
  ExceptionList = &local_10;
  memset(local_6c,0,0x58);
  FUN_00407d37((int)local_6c);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}



/* Function: FUN_0040f673 */

void __fastcall FUN_0040f673(int param_1)

{
  FUN_0040f9d2((int *)(param_1 + 0x18));
  FUN_0040f6c9((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004081c3(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040f69e */

void __fastcall FUN_0040f69e(int param_1)

{
  FUN_0040c872((void *)(param_1 + 0x10));
  FUN_0040f6c9((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004081c3(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040f6c9 */

void __fastcall FUN_0040f6c9(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_004081c3((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_004081c3((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0040f6f0 */

uint __fastcall FUN_0040f6f0(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_0040fa9b(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_0040fba0(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0040f728 */

uint __fastcall FUN_0040f728(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_0040fbf9(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_0040fcfe(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0040f760 */

uint __fastcall FUN_0040f760(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_0040fd57(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_0040fe5c(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0040f798 */

uint __fastcall FUN_0040f798(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_0040feb5(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_0040ffba(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0040f7d0 */

uint __fastcall FUN_0040f7d0(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00410013(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00410118(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0040f808 */

uint __fastcall FUN_0040f808(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  int unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00406c16(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00407f3a(unaff_retaddr,0x148,0x401ff4,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004081b7();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00408278(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00407f3a(unaff_retaddr,0x14b,0x401ff4,uVar3);
    }
    else {
      FUN_00410375(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_0040f6c9(local_10);
  }
  FUN_0040e5e5((int *)&local_18);
  return uVar3;
}



/* Function: FUN_0040f8cd */

uint __fastcall FUN_0040f8cd(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  int unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00406c16(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00407f3a(unaff_retaddr,0x148,0x401ff4,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004081b7();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00408278(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00407f3a(unaff_retaddr,0x14b,0x401ff4,uVar3);
    }
    else {
      FUN_004103d9(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_0040f6c9(local_10);
  }
  FUN_0040e5e5((int *)&local_18);
  return uVar3;
}



/* Function: FUN_0040f994 */

uint __fastcall FUN_0040f994(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  void *pvStack_c;
  
  local_10 = param_1;
  pvStack_c = param_1;
  FUN_0041043d(param_1,(uint *)&local_10);
  uVar1 = local_10._0_1_;
  local_10 = (void *)((uint)local_10 & 0xffffff01);
  uVar2 = FUN_00410542(param_1,(byte)local_10);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_0040f9d2 */

void __fastcall FUN_0040f9d2(int *param_1)

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
        FUN_00408614((int)lpMem + 8);
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



/* Function: FUN_0040fa2d */

void __thiscall FUN_0040fa2d(void *this,undefined4 *param_1)

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
    FUN_0040812c(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_0040fa70 */

void FUN_0040fa70(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0040fa8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_0040fa9b */

uint * __thiscall FUN_0040fa9b(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_004105a5(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_0040fb7a;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_0040fb6a:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0040fb6a;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_0040fb7a:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040fba0 */

void __thiscall FUN_0040fba0(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040fa9b(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040d8c5((uint *)((int)this + 8),0x3667ca2,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_0040fbf9 */

uint * __thiscall FUN_0040fbf9(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_0041067e(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_0040fcd8;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_0040fcc8:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0040fcc8;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_0040fcd8:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040fcfe */

void __thiscall FUN_0040fcfe(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040fbf9(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040d8c5((uint *)((int)this + 8),0x3667c9a,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_0040fd57 */

uint * __thiscall FUN_0040fd57(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_00410757(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_0040fe36;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_0040fe26:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0040fe26;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_0040fe36:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040fe5c */

void __thiscall FUN_0040fe5c(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040fd57(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040d8c5((uint *)((int)this + 8),0x33b9b29,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_0040feb5 */

uint * __thiscall FUN_0040feb5(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_0041080d(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_0040ff94;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_0040ff84:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0040ff84;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_0040ff94:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040ffba */

void __thiscall FUN_0040ffba(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040feb5(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040d8c5((uint *)((int)this + 8),0x3667c98,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_00410013 */

uint * __thiscall FUN_00410013(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_004108e6(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_004100f2;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_004100e2:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004100e2;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_004100f2:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00410118 */

void __thiscall FUN_00410118(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00410013(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040d8c5((uint *)((int)this + 8),0x33b9b30,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_00410171 */

void __fastcall FUN_00410171(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004109bf(param_1,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_0040d8c5(param_1 + 2,0x33b9b24,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_c,1,0);
  return;
}



/* Function: FUN_004101c7 */

void __fastcall FUN_004101c7(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00410ac4(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040d8c5(param_1 + 2,0x2af34f6,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_0041021d */

void __fastcall FUN_0041021d(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00410bc9(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040d8c5(param_1 + 2,0x2af34f3,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_00410273 */

void __fastcall FUN_00410273(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00410cce(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040d8c5(param_1 + 2,0x2af34f1,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_004102c9 */

void __fastcall FUN_004102c9(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00410dd3(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040d8c5(param_1 + 2,0x2af34ec,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_0041031f */

void __fastcall FUN_0041031f(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00410ed8(param_1,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_0040d8c5(param_1 + 2,0x2af34e9,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_c,1,0);
  return;
}



/* Function: FUN_00410375 */

undefined4 * __thiscall FUN_00410375(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_004103d9 */

undefined4 * __thiscall FUN_004103d9(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_0040c502((void *)((int)this + 0x14));
  FUN_0040cfd3((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_0041043d */

uint * __thiscall FUN_0041043d(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_00410fdd(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_0041051c;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_0041050c:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0041050c;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_0041051c:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00410542 */

void __thiscall FUN_00410542(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10 [3];
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0041043d(this,local_10);
    uVar2 = *puVar1;
  }
  local_14 = 2;
  local_18 = 0;
  FUN_0040d8c5((uint *)((int)this + 8),0x370bf4c,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_18,
               (uint)param_1,3);
  return;
}



/* Function: FUN_004105a5 */

uint * FUN_004105a5(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040d72e(0x3667ca2,3,param_2);
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
    if (uVar3 == 0) goto LAB_0041065c;
    bVar1 = false;
  }
  uVar3 = FUN_0040f728(&DAT_0041a610);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    FUN_004101c7((uint *)&DAT_0041a6f8);
  }
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_0041065c:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_0041067e */

uint * FUN_0041067e(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040d72e(0x3667c9a,3,param_2);
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
    if (uVar3 == 0) goto LAB_00410735;
    bVar1 = false;
  }
  uVar3 = FUN_0040f798(&DAT_0041a6c0);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    FUN_0041021d((uint *)&DAT_0041a660);
  }
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00410735:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00410757 */

uint * FUN_00410757(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_0040d72e(0x33b9b29,3,param_2);
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
    FUN_00410171((uint *)&DAT_0041a748);
    FUN_0041031f((uint *)&DAT_0041a728);
    bVar1 = true;
  }
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar1)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_0041080d */

uint * FUN_0041080d(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040d72e(0x3667c98,3,param_2);
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
    if (uVar3 == 0) goto LAB_004108c4;
    bVar1 = false;
  }
  uVar3 = FUN_0040f7d0(&DAT_0041a6e0);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    FUN_00410273((uint *)&DAT_0041a708);
  }
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_004108c4:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_004108e6 */

uint * FUN_004108e6(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040d72e(0x33b9b30,3,param_2);
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
    if (uVar3 == 0) goto LAB_0041099d;
    bVar1 = false;
  }
  uVar3 = FUN_0040f760(&DAT_0041a760);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    FUN_004102c9((uint *)&DAT_0041a6d0);
  }
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_0041099d:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_004109bf */

uint * __thiscall FUN_004109bf(void *this,uint *param_1)

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
  local_c = FUN_0040d713();
  FUN_0041109e(local_1c,&local_8);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_00410a9e;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_c == 0) || (local_c != DAT_0041a194)) {
LAB_00410a8e:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_14 = 3;
    local_10 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_14,8);
    if ((char)uVar2 == '\0') goto LAB_00410a8e;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_00410a9e:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00410ac4 */

uint * __thiscall FUN_00410ac4(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_0041110d(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_00410ba3;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_00410b93:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00410b93;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_00410ba3:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00410bc9 */

uint * __thiscall FUN_00410bc9(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_0041117c(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_00410ca8;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_00410c98:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00410c98;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_00410ca8:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00410cce */

uint * __thiscall FUN_00410cce(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_004111eb(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_00410dad;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_00410d9d:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00410d9d;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_00410dad:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00410dd3 */

uint * __thiscall FUN_00410dd3(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_0041125a(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_00410eb2;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_00410ea2:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00410ea2;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_00410eb2:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00410ed8 */

uint * __thiscall FUN_00410ed8(void *this,uint *param_1)

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
  local_c = FUN_0040d713();
  FUN_004112c9(local_1c,&local_8);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_00410fb7;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_c == 0) || (local_c != DAT_0041a194)) {
LAB_00410fa7:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_14 = 3;
    local_10 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_14,8);
    if ((char)uVar2 == '\0') goto LAB_00410fa7;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_00410fb7:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00410fdd */

uint * FUN_00410fdd(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_0040d72e(0x370bf4c,3,param_2);
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
    if (uVar4 == 0) goto LAB_0041107c;
    bVar1 = false;
  }
  uVar4 = FUN_0040f6f0(&DAT_0041a620);
  cVar2 = (char)uVar4;
  if ((bVar1) && (cVar2 == '\0')) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_0041107c:
  uVar4 = 1;
  if (((*param_1 & 0x40) == 0) || (cVar2 == '\0')) {
    uVar4 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar4;
  return param_1;
}



/* Function: FUN_0041109e */

uint * FUN_0041109e(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040d72e(0x33b9b24,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_0041110d */

uint * FUN_0041110d(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040d72e(0x2af34f6,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_0041117c */

uint * FUN_0041117c(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040d72e(0x2af34f3,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_004111eb */

uint * FUN_004111eb(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040d72e(0x2af34f1,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_0041125a */

uint * FUN_0041125a(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040d72e(0x2af34ec,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_004112c9 */

uint * FUN_004112c9(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040d72e(0x2af34e9,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00411338 */

void __fastcall
FUN_00411338(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00407024(param_7);
  local_8 = 0;
  FUN_00411453(param_1,param_2,param_3,param_4,param_5,param_6,&local_10,0);
  return;
}



/* Function: FUN_00411380 */

void * __fastcall FUN_00411380(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_004073ab(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_004061fe(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_004113f0 */

char * __fastcall FUN_004113f0(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_0040738d(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      FUN_004061fe(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar1);
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



/* Function: FUN_00411453 */

void __fastcall
FUN_00411453(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_00411deb(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Function: FUN_00411464 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00411464(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  code *pcVar1;
  int local_1460 [22];
  undefined1 local_1408 [1024];
  WCHAR local_1008 [2046];
  undefined4 uStack_c;
  
  uStack_c = 0x411476;
  FUN_00407a80(param_1,param_2,param_3,0,0,param_6,3,param_7,param_8,param_1,local_1008,param_1,
               local_1408,param_1,local_1460);
  FUN_00407d37((int)local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004114b6 */

void __fastcall
FUN_004114b6(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7)

{
  FUN_00411e91(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Function: FUN_004114c7 */

void __fastcall
FUN_004114c7(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            uint param_7)

{
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00407024(param_7);
  local_8 = 0;
  FUN_004114b6(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_0041150a */

uint __fastcall FUN_0041150a(int param_1,int param_2)

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
  local_c = FUN_00407024(uVar1);
  local_8 = 0;
  FUN_004114b6(param_1,param_2,0x402144,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_10
              );
  return uVar1;
}



/* Function: FUN_00411563 */

uint __fastcall FUN_00411563(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int in_stack_00000010;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00407264(param_1,param_2,&DAT_00401ff4,param_1,param_1,in_stack_00000010);
  local_10 = uVar1;
  local_c = FUN_00407024(uVar1);
  local_8 = 0;
  FUN_004114b6(param_1,param_2,0x401ff4,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_10
              );
  return uVar1;
}



/* Function: FUN_004115bc */

void __fastcall FUN_004115bc(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_0041b28c)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004115e1 */

void __fastcall FUN_004115e1(undefined4 *param_1,undefined1 *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined1 auStack_5c [7];
  undefined1 local_55;
  undefined4 local_54;
  _EVENT_DATA_DESCRIPTOR local_50 [2];
  undefined4 local_30 [4];
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_0041a100 ^ (uint)auStack_5c;
  puVar2 = FUN_004090ba();
  puVar1 = *(uint **)(puVar2 + 4);
  if (5 < *puVar1) {
    local_55 = *param_2;
    local_54 = *param_1;
    local_20 = &local_55;
    local_1c = 0;
    local_18 = 1;
    local_14 = 0;
    FUN_004051e0(&local_54,local_30);
    FUN_00404713((int)puVar1,&DAT_00403b5e,(LPCGUID)0x0,(LPCGUID)0x0,4,local_50);
  }
  FUN_00416420(local_c ^ (uint)auStack_5c);
  return;
}



/* Function: FUN_00411670 */

undefined4 FUN_00411670(int param_1,int *param_2)

{
  uint *puVar1;
  void *this;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = (uint *)(param_1 + 0x18);
  uVar5 = *puVar1;
  *param_2 = 0;
  if ((int)uVar5 < 0) {
LAB_00411691:
    FUN_0040581d((int *)(uVar5 * 2 + 8));
    *param_2 = uVar5 * 2;
  }
  else {
    this = (void *)FUN_00416434(0x14);
    if ((this == (void *)0x0) ||
       (puVar2 = FUN_00406505(this,param_1 + -4), puVar2 == (undefined4 *)0x0)) {
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
          *puVar2 = &PTR_FUN_004012d0;
          puVar2[3] = 0xc0000001;
          puVar2[2] = 0xc0000001;
          FUN_00416491(puVar2);
          goto LAB_00411691;
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



/* Function: FUN_00411737 */

void __fastcall FUN_00411737(int param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_0040e2e0((int *)(*(int *)(param_1 + 0x1c) * 2));
  }
  FUN_004059d3((int *)(param_1 + 0x14));
  return;
}



/* Function: FUN_0041175a */

int __fastcall FUN_0041175a(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_00416434(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    piVar2 = FUN_004117b2(puVar1);
    piVar2[9] = *param_2;
    local_8 = piVar2;
    iVar3 = FUN_00411f63(&local_8,param_1);
    FUN_0040e6e0(piVar2);
  }
  return iVar3;
}



/* Function: FUN_004117b2 */

undefined4 * __fastcall FUN_004117b2(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417940;
  local_10 = ExceptionList;
  uVar4 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = param_1 + 2;
  FUN_00406299(puVar1);
  piVar3 = DAT_0041a558;
  param_1[7] = 1;
  *param_1 = &PTR_FUN_00401158;
  param_1[1] = &PTR_FUN_004011f8;
  *puVar1 = &PTR_FUN_00401114;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar3,uVar4);
    (*pcVar2)();
  }
  param_1[8] = 0;
  *param_1 = &PTR_FUN_004012a4;
  param_1[1] = &PTR_FUN_004011e8;
  *puVar1 = &PTR_FUN_0040136c;
  param_1[9] = 0;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00411860 */

void FUN_00411860(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_0040cc9a((int)param_2);
  }
  return;
}



/* Function: FUN_004118a0 */

void FUN_004118a0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_0040b6e2(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_004118f0 */

void FUN_004118f0(undefined4 param_1,char *param_2)

{
  FUN_0040d4d8(param_2);
  return;
}



/* Function: FUN_00411910 */

undefined4 * FUN_00411910(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041759b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_00416434(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_00401338;
    puVar3[2] = 1;
    puVar2 = PTR_FUN_0040133c;
    local_8 = 1;
    local_18 = puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3);
    (*(code *)puVar2)();
    local_14 = puVar3;
    FUN_004059d3((int *)&local_18);
    puVar3[4] = *(undefined4 *)param_1;
    local_8 = 2;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_8 = 0xffffffff;
    local_18 = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0041a558 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
        (*pcVar1)();
        puVar4 = local_18;
      }
    }
  }
  FUN_004059d3((int *)&local_14);
  ExceptionList = local_10;
  return puVar4;
}



/* Function: FUN_00411a17 */

int __fastcall FUN_00411a17(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417963;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = 0;
  *param_3 = 0;
  iVar3 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if ((iVar3 == 0) && (iVar3 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402610), iVar3 == 0)) {
    iVar3 = FUN_004057f2(extraout_ECX_00,&DAT_004025f8);
    if (iVar3 == 0) {
      iVar4 = FUN_00411d9a(param_1 + 1,extraout_ECX_01,param_3);
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return iVar4;
      }
    }
    else {
      *param_3 = (int)param_1;
    }
    pcVar1 = *(code **)(*(int *)*param_3 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)((int *)*param_3);
    (*pcVar1)();
  }
  else {
    *param_3 = (int)param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1,uVar2);
    (*pcVar1)();
    iVar4 = 0;
  }
  ExceptionList = local_10;
  return iVar4;
}



/* Function: FUN_00411ad4 */

void __fastcall FUN_00411ad4(uint *param_1,LPCGUID param_2)

{
  uint uVar1;
  int extraout_ECX;
  undefined1 auStack_34 [4];
  _EVENT_DATA_DESCRIPTOR local_30 [2];
  uint local_c;
  
  local_c = DAT_0041a100 ^ (uint)auStack_34;
  if (5 < *param_1) {
    uVar1 = FUN_004047a8(param_1,0,0x4000);
    if ((char)uVar1 != '\0') {
      FUN_00404713(extraout_ECX,&DAT_00403507,param_2,(LPCGUID)0x0,2,local_30);
    }
  }
  FUN_00416420(local_c ^ (uint)auStack_34);
  return;
}



/* Function: FUN_00411b2d */

void __fastcall FUN_00411b2d(uint *param_1,LPCGUID param_2)

{
  uint uVar1;
  int extraout_ECX;
  undefined1 auStack_34 [4];
  _EVENT_DATA_DESCRIPTOR local_30 [2];
  uint local_c;
  
  local_c = DAT_0041a100 ^ (uint)auStack_34;
  if (5 < *param_1) {
    uVar1 = FUN_004047a8(param_1,0,0x2000);
    if ((char)uVar1 != '\0') {
      FUN_00404713(extraout_ECX,&DAT_00402ee9,param_2,(LPCGUID)0x0,2,local_30);
    }
  }
  FUN_00416420(local_c ^ (uint)auStack_34);
  return;
}



/* Function: FUN_00411b90 */

int __thiscall FUN_00411b90(void *this,byte param_1)

{
  FUN_00411737((int)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (int)this;
}



/* Function: FUN_00411bc0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_00411bc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x411bcc;
  *param_4 = 0;
  if (param_2 == 0) {
    local_14[0] = (undefined4 *)0x0;
    iVar2 = FUN_00412134(local_14);
    if (-1 < iVar2) {
      local_8 = 0;
      pcVar1 = *(code **)*local_14[0];
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],param_3,param_4);
      iVar2 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  else {
    iVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return iVar2;
}



/* Function: FUN_00411c30 */

void FUN_00411c30(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_1;
  puVar2 = (undefined4 *)(iVar1 * 0x10 + param_2);
  *puVar2 = DAT_00402628;
  puVar2[1] = DAT_0040262c;
  puVar2[2] = DAT_00402630;
  puVar2[3] = DAT_00402634;
  puVar2 = (undefined4 *)((iVar1 + 1) * 0x10 + param_2);
  *puVar2 = DAT_004025a0;
  puVar2[1] = DAT_004025a4;
  puVar2[2] = DAT_004025a8;
  puVar2[3] = DAT_004025ac;
  puVar2 = (undefined4 *)((iVar1 + 2) * 0x10 + param_2);
  *param_1 = iVar1 + 3;
  *puVar2 = DAT_00402724;
  puVar2[1] = DAT_00402728;
  puVar2[2] = DAT_0040272c;
  puVar2[3] = DAT_00402730;
  return;
}



/* Function: FUN_00411c82 */

undefined4 __thiscall FUN_00411c82(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  void *pvVar2;
  
  iVar1 = FUN_004057f2(param_1,&DAT_00402628);
  pvVar2 = this;
  if (iVar1 == 0) {
    pvVar2 = (void *)((int)this + 4);
    iVar1 = FUN_004057f2(extraout_ECX,&DAT_004025a0);
    if (iVar1 == 0) {
      iVar1 = FUN_004057f2(extraout_ECX_00,&DAT_00402724);
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



/* Function: FUN_00411ce0 */

undefined4 * __thiscall FUN_00411ce0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004010ec;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00411d10 */

undefined4 * __thiscall FUN_00411d10(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004010ec;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00411d40 */

undefined4 * __thiscall FUN_00411d40(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004010ec;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00411d70 */

int __thiscall FUN_00411d70(void *this,byte param_1)

{
  FUN_00411737((int)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (int)this;
}



/* Function: FUN_00411d9a */

undefined4 __thiscall FUN_00411d9a(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  
  iVar1 = FUN_004057f2(param_1,&DAT_00402670);
  if (iVar1 == 0) {
    this = (void *)((int)this + 4);
    iVar1 = FUN_004057f2(extraout_ECX,(int *)&LAB_00402518);
    if ((iVar1 == 0) && (iVar1 = FUN_004057f2(extraout_ECX_00,(int *)&DAT_00402580), iVar1 == 0)) {
      return 0x80004002;
    }
  }
  *param_2 = (int)this;
  return 0;
}



/* Function: FUN_00411deb */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00411deb(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_0041a100 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00407a80(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_00416420(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_00407d37((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00411e91 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00411e91(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7)

{
  code *pcVar1;
  int local_1468;
  byte local_1464;
  undefined1 local_1410 [1024];
  WCHAR local_1010 [2050];
  uint local_c;
  
  local_c = DAT_0041a100 ^ (uint)&local_1468;
  FUN_00407a80(param_1,param_2,param_3,0,0,param_6,1,param_7,(short *)0x0,param_1,local_1010,param_1
               ,local_1410,param_1,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_00416420(local_c ^ (uint)&local_1468);
    return;
  }
  FUN_00407d37((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00411f10 */

void __thiscall FUN_00411f10(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_004013b4;
  puVar2 = (undefined4 *)((int)this + 4);
  for (iVar1 = 5; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  return;
}



/* Function: FUN_00411f40 */

void __thiscall FUN_00411f40(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0040a891((void *)((int)this + 4),(int *)*param_1,this,*param_3);
  return;
}



/* Function: FUN_00411f63 */

int __thiscall FUN_00411f63(void *this,int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417940;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  piVar5 = *this;
  iVar4 = 0;
  local_8 = 0;
  *param_1 = 0;
  iVar3 = FUN_004057f2(&DAT_004025f8,(int *)&DAT_00401da4);
  if ((iVar3 == 0) && (iVar3 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402610), iVar3 == 0)) {
    iVar3 = FUN_004057f2(extraout_ECX_00,extraout_ECX_00);
    if (iVar3 == 0) {
      iVar4 = FUN_00411d9a(piVar5 + 1,extraout_ECX_01,param_1);
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return iVar4;
      }
    }
    else {
      *param_1 = (int)piVar5;
    }
    piVar5 = (int *)*param_1;
    iVar3 = *piVar5;
  }
  else {
    *param_1 = (int)piVar5;
    iVar3 = *piVar5;
  }
  pcVar1 = *(code **)(iVar3 + 4);
  (*(code *)PTR_guard_check_icall_0041b28c)(piVar5,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return iVar4;
}



/* Function: FUN_00412010 */

void __thiscall FUN_00412010(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004012e4;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: FUN_00412040 */

undefined4 __thiscall
FUN_00412040(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_0040bdc2(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_00412093 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_00412093(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int *piVar2;
  int *this;
  uint uVar3;
  
  *param_1 = 0;
  this = (int *)FUN_00416434(0x14);
  piVar2 = DAT_0041a558;
  if (this == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    this[2] = 1;
    *this = (int)&PTR_FUN_00401100;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0041b28c)(piVar2);
      (*pcVar1)();
    }
    this[3] = 0;
    *this = (int)&PTR_FUN_00401208;
    this[4] = 0;
    uVar3 = FUN_0040da30(this,(int *)*param_2);
    if (-1 < (int)uVar3) {
      uVar3 = FUN_0040e340(this,(int *)&DAT_00402638,param_1);
    }
    FUN_0040e2e0(this);
  }
  return uVar3;
}



/* Function: FUN_00412134 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_00412134(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x412140;
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_00416434(0x20);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    local_14[0] = FUN_004121a1(puVar2);
    local_8 = 1;
    pcVar1 = *(code **)*local_14[0];
    (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],&DAT_00401da4,param_1);
    uVar3 = (*pcVar1)();
    FUN_004059d3((int *)local_14);
  }
  return uVar3;
}



/* Function: FUN_004121a1 */

undefined4 * __fastcall FUN_004121a1(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417627;
  local_10 = ExceptionList;
  uVar3 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  param_1[6] = 0;
  piVar2 = DAT_0041a558;
  param_1[4] = 1;
  *param_1 = &PTR_FUN_00401248;
  param_1[1] = &PTR_FUN_00401268;
  param_1[2] = &PTR_FUN_004012f8;
  param_1[7] = 4;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar2,uVar3);
    (*pcVar1)();
  }
  *param_1 = &PTR_FUN_004011b4;
  param_1[1] = &PTR_FUN_00401138;
  param_1[2] = &PTR_FUN_00401288;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00412240 */

int __thiscall FUN_00412240(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 0x10) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (int)this;
}



/* Function: FUN_00412270 */

void FUN_00412270(int param_1,undefined4 *param_2)

{
  FUN_0040e0d0(param_1 + -4,param_2);
  return;
}



/* Function: FUN_00412280 */

void FUN_00412280(int param_1,int *param_2,int *param_3)

{
  FUN_0040a990((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_00412290 */

void FUN_00412290(int param_1)

{
  FUN_0040e290(param_1 + -4);
  return;
}



/* Function: FUN_004122a0 */

void FUN_004122a0(int param_1)

{
  FUN_0040a9b0((int *)(param_1 + -4));
  return;
}



/* Function: FUN_004122b0 */

void FUN_004122b0(int param_1)

{
  FUN_0040a9d0(param_1 + -4);
  return;
}



/* Function: FUN_004122c0 */

void FUN_004122c0(int param_1,undefined4 *param_2)

{
  FUN_0040e0d0(param_1 + -8,param_2);
  return;
}



/* Function: FUN_004122d0 */

void FUN_004122d0(int param_1,int *param_2,int *param_3)

{
  FUN_0040a990((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_004122e0 */

void FUN_004122e0(int param_1,int *param_2,int *param_3)

{
  FUN_0040e190((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_004122f0 */

void FUN_004122f0(int param_1)

{
  FUN_0040e6e0((int *)(param_1 + -4));
  return;
}



/* Function: FUN_00412300 */

void FUN_00412300(int param_1)

{
  FUN_0040e290(param_1 + -8);
  return;
}



/* Function: FUN_00412310 */

void FUN_00412310(int param_1,undefined4 *param_2)

{
  FUN_0040e110(param_1 + -4,param_2);
  return;
}



/* Function: FUN_00412320 */

void FUN_00412320(int param_1)

{
  FUN_0040a9b0((int *)(param_1 + -8));
  return;
}



/* Function: FUN_00412330 */

void FUN_00412330(int param_1)

{
  FUN_0040a9d0(param_1 + -8);
  return;
}



/* Function: FUN_00412340 */

void FUN_00412340(int param_1,int *param_2,int *param_3)

{
  FUN_0040e190((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_00412350 */

void FUN_00412350(int param_1)

{
  FUN_0040e6e0((int *)(param_1 + -8));
  return;
}



/* Function: FUN_00412360 */

void FUN_00412360(int param_1,undefined4 *param_2)

{
  FUN_0040e110(param_1 + -8,param_2);
  return;
}



/* Function: FUN_00412370 */

void FUN_00412370(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040e140(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_00412380 */

void FUN_00412380(int param_1)

{
  FUN_0040e210((int *)(param_1 + -4));
  return;
}



/* Function: FUN_00412390 */

void FUN_00412390(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_0040e140(param_1 + -8,param_2,param_3);
  return;
}



/* Function: FUN_004123a0 */

void FUN_004123a0(int param_1)

{
  FUN_0040e210((int *)(param_1 + -8));
  return;
}



/* Function: FUN_004123b0 */

void FUN_004123b0(int param_1)

{
  FUN_0040e770(param_1 + -4);
  return;
}



/* Function: FUN_004123c0 */

void FUN_004123c0(int param_1)

{
  FUN_0040e770(param_1 + -8);
  return;
}



/* Function: FUN_004123d0 */

undefined4 FUN_004123d0(void)

{
  return DAT_0041a790;
}



/* Function: FUN_004123e0 */

undefined * FUN_004123e0(void)

{
  return &DAT_00418484;
}



/* Function: FUN_004123f0 */

undefined * FUN_004123f0(void)

{
  return &DAT_004184a8;
}



/* Function: FUN_00412400 */

undefined * FUN_00412400(void)

{
  return &DAT_004184ac;
}



/* Function: FUN_00412410 */

undefined * FUN_00412410(void)

{
  return &DAT_0041a78c;
}



/* Function: FUN_0041241e */

bool __fastcall FUN_0041241e(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 == (ushort *)0x0) {
    return true;
  }
  puVar2 = *(ushort **)(param_1 + 0x10);
  if (puVar2 == (ushort *)0x0) {
    return false;
  }
  do {
    uVar1 = *puVar2;
    bVar4 = uVar1 < *param_2;
    if (uVar1 != *param_2) {
LAB_00412455:
      uVar3 = -(uint)bVar4 | 1;
      goto LAB_0041245a;
    }
    if (uVar1 == 0) break;
    uVar1 = puVar2[1];
    bVar4 = uVar1 < param_2[1];
    if (uVar1 != param_2[1]) goto LAB_00412455;
    puVar2 = puVar2 + 2;
    param_2 = param_2 + 2;
  } while (uVar1 != 0);
  uVar3 = 0;
LAB_0041245a:
  return uVar3 == 0;
}



/* Function: FUN_00412466 */

uint __fastcall FUN_00412466(int *param_1,ushort *param_2,char param_3)

{
  code *pcVar1;
  PVOID Ptr;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  PSRWLOCK SRWLock;
  int *piVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417729;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar1 = *(code **)(*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1,DAT_0041a100 ^ (uint)&stack0xfffffffc);
  piVar3 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x18);
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
  piVar4 = (int *)(*pcVar1)();
  while( true ) {
    do {
      piVar3 = piVar3 + 1;
      if (piVar4 <= piVar3) {
        pcVar1 = *(code **)(*param_1 + 0xc);
        (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
        iVar7 = (*pcVar1)();
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)-iVar7 >> 8),'\x01' - (iVar7 != 0));
      }
    } while ((*piVar3 == 0) || (bVar2 = FUN_0041241e(*piVar3,param_2), !bVar2));
    pcVar1 = *(code **)(*param_1 + 0xc);
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
    uVar5 = (*pcVar1)();
    if ((uVar5 != 0) && (param_3 == '\0')) break;
    if (**(int **)(*piVar3 + 0xc) != 0) {
      pcVar1 = *(code **)(*param_1 + 0x1c);
      (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
      SRWLock = (PSRWLOCK)(*pcVar1)();
      AcquireSRWLockExclusive(SRWLock);
      Ptr = (PVOID)**(undefined4 **)(*piVar3 + 0xc);
      if (Ptr == (PVOID)0x0) {
        if (SRWLock != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(SRWLock);
        }
      }
      else {
        **(undefined4 **)(*piVar3 + 0xc) = 0;
        if (SRWLock != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(SRWLock);
        }
        piVar6 = (int *)DecodePointer(Ptr);
        pcVar1 = *(code **)(*piVar6 + 8);
        (*(code *)PTR_guard_check_icall_0041b28c)(piVar6);
        (*pcVar1)();
      }
    }
  }
  ExceptionList = local_10;
  return uVar5 & 0xffffff00;
}



/* Function: FUN_004125a8 */

int __fastcall
FUN_004125a8(int *param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5)

{
  code *pcVar1;
  uint uVar2;
  PSRWLOCK pRVar3;
  int iVar4;
  PVOID pvVar5;
  int *piVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417729;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar6 = (int *)0x0;
  local_14 = (int *)0x0;
  *param_5 = 0;
  if (*(int *)param_4[3] != 0) {
    pcVar1 = *(code **)(*param_1 + 0x1c);
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1,uVar2);
    pRVar3 = (PSRWLOCK)(*pcVar1)();
    AcquireSRWLockShared(pRVar3);
    if (*(int *)param_4[3] != 0) {
      local_14 = (int *)DecodePointer(*(PVOID *)param_4[3]);
      pcVar1 = *(code **)*local_14;
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14,&DAT_00402628,param_5);
      iVar4 = (*pcVar1)();
      if (pRVar3 == (PSRWLOCK)0x0) {
        ExceptionList = local_10;
        return iVar4;
      }
      ReleaseSRWLockShared(pRVar3);
      ExceptionList = local_10;
      return iVar4;
    }
    if (pRVar3 != (PSRWLOCK)0x0) {
      ReleaseSRWLockShared(pRVar3);
    }
  }
  pcVar1 = (code *)*param_4;
  (*(code *)PTR_guard_check_icall_0041b28c)(param_2,param_4,&DAT_00402628,&local_14);
  iVar4 = (*pcVar1)();
  if (-1 < iVar4) {
    if ((*param_2 & 4) == 0) {
      pcVar1 = *(code **)(*param_1 + 0x1c);
      (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
      pRVar3 = (PSRWLOCK)(*pcVar1)();
      AcquireSRWLockExclusive(pRVar3);
      if (*(PVOID *)param_4[3] == (PVOID)0x0) {
        pvVar5 = EncodePointer(local_14);
        *(PVOID *)param_4[3] = pvVar5;
      }
      else {
        piVar6 = (int *)DecodePointer(*(PVOID *)param_4[3]);
        pcVar1 = *(code **)(*piVar6 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(piVar6);
        (*pcVar1)();
      }
      if (pRVar3 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar3);
      }
      if (piVar6 != (int *)0x0) {
        pcVar1 = *(code **)(*local_14 + 8);
        (*(code *)PTR_guard_check_icall_0041b28c)(local_14);
        (*pcVar1)();
        pcVar1 = *(code **)(*local_14 + 8);
        (*(code *)PTR_guard_check_icall_0041b28c)(local_14);
        (*pcVar1)();
        local_14 = piVar6;
      }
    }
    *param_5 = local_14;
    iVar4 = 0;
  }
  ExceptionList = local_10;
  return iVar4;
}



/* Function: FUN_00412736 */

int __fastcall FUN_00412736(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  for (piVar2 = (int *)(param_1 + 4); piVar2 < param_2; piVar2 = piVar2 + 1) {
    if (*piVar2 != 0) {
      bVar1 = FUN_0041241e(*piVar2,param_3);
      if (bVar1) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  return iVar3;
}



/* Function: FUN_00412770 */

int __fastcall FUN_00412770(int *param_1,ushort *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *local_24;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417ad9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (undefined4 *)0x0;
  pcVar1 = *(code **)(*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1,DAT_0041a100 ^ (uint)&stack0xfffffffc);
  iVar4 = (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x14);
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
  piVar5 = (int *)(*pcVar1)();
  uVar6 = FUN_00412736(iVar4,piVar5,param_2);
  if (uVar6 != 0) {
    puVar7 = (undefined4 *)
             FUN_00416773(-(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar6 * 4));
    if (puVar7 == (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x8007000e;
    }
    else {
      piVar9 = (int *)(iVar4 + 4);
      local_1c = puVar7;
      for (piVar8 = piVar9; piVar8 < piVar5; piVar8 = piVar8 + 1) {
        if ((*piVar8 != 0) && (bVar3 = FUN_0041241e(*piVar8,param_2), bVar3)) {
          *local_1c = *(undefined4 *)(*(int *)(*piVar8 + 0xc) + 4);
          local_1c = local_1c + 1;
        }
      }
      pcVar1 = *(code **)(*param_1 + 0x2c);
      (*(code *)PTR_guard_check_icall_0041b28c)(param_1,param_2,puVar7,uVar6);
      local_1c = (undefined4 *)(*pcVar1)();
      local_24 = puVar7;
      for (; piVar9 < piVar5; piVar9 = piVar9 + 1) {
        if ((*piVar9 != 0) && (bVar3 = FUN_0041241e(*piVar9,param_2), bVar3)) {
          uVar2 = *local_24;
          local_24 = local_24 + 1;
          *(undefined4 *)(*(int *)(*piVar9 + 0xc) + 4) = uVar2;
        }
      }
    }
    o_free(puVar7);
    if ((int)local_1c < 0) goto LAB_00412948;
  }
  pcVar1 = *(code **)(*param_1 + 0x18);
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
  piVar8 = (int *)(*pcVar1)();
  piVar5 = piVar5 + 1;
  for (piVar9 = piVar5; piVar9 < piVar8; piVar9 = piVar9 + 1) {
    if ((*piVar9 != 0) && (bVar3 = FUN_0041241e(*piVar9,param_2), bVar3)) {
      pcVar1 = *(code **)(*param_1 + 0x24);
      (*(code *)PTR_guard_check_icall_0041b28c)
                (param_1,param_2,*(undefined4 *)(*(int *)(*piVar9 + 0xc) + 4));
      local_1c = (undefined4 *)(*pcVar1)();
      if (-1 < (int)local_1c) {
        do {
          iVar4 = *piVar5;
          if ((iVar4 != 0) && (bVar3 = FUN_0041241e(iVar4,param_2), bVar3)) {
            *(undefined4 *)(*(int *)(iVar4 + 0xc) + 4) = 0;
          }
          piVar5 = piVar5 + 1;
        } while (piVar5 < piVar8);
      }
      break;
    }
  }
LAB_00412948:
  FUN_00412466(param_1,param_2,'\0');
  ExceptionList = local_10;
  return (int)local_1c;
}



/* Function: FUN_00412972 */

void __fastcall FUN_00412972(void *param_1)

{
  code *pcVar1;
  
  FUN_00413e6a(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041298e */

void __thiscall FUN_0041298e(void *this)

{
  code *pcVar1;
  uint *puVar2;
  void *in_stack_00000014;
  uint local_1c [3];
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  
  puVar2 = FUN_00406bf2(in_stack_00000014,local_1c);
  local_10 = *puVar2;
  uStack_c = puVar2[1];
  uStack_8 = puVar2[2];
  FUN_00412972(this);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004129c9 */

void __fastcall FUN_004129c9(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041774c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00413df6(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00412a13 */

void __fastcall FUN_00412a13(void *param_1)

{
  code *pcVar1;
  
  FUN_0041298e(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00412a2d */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_00412a2d(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  DWORD DVar4;
  uint uVar5;
  int unaff_retaddr;
  int iStack_6c;
  int *local_30;
  undefined1 local_2c [20];
  undefined4 local_18 [4];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_30 = (int *)0x0;
  local_8 = 0;
  local_18[0] = 0;
  DVar4 = WindowsCreateStringReference
                    (L"Windows.Internal.Shell.Holographic.ContextIdentifier",0x34,local_2c,local_18)
  ;
  uVar3 = local_18[0];
  piVar2 = local_30;
  if ((int)DVar4 < 0) {
    FUN_00406285(DVar4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_8._0_1_ = 1;
  if (local_30 != (int *)0x0) {
    local_30 = (int *)0x0;
    pcVar1 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar2);
    (*pcVar1)();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  uVar5 = RoGetActivationFactory(uVar3,&DAT_004029b4,&local_30);
  if ((int)uVar5 < 0) {
    iStack_6c = 0x2b;
  }
  else {
    pcVar1 = *(code **)(*local_30 + 0x18);
    (*(code *)PTR_guard_check_icall_0041b28c)(local_30);
    uVar5 = (*pcVar1)();
    if (-1 < (int)uVar5) goto LAB_00412adf;
    iStack_6c = 0x30;
  }
  FUN_00407f3a(unaff_retaddr,iStack_6c,0x40273c,uVar5);
LAB_00412adf:
  FUN_004059d3((int *)&local_30);
  FUN_0041736b();
  return;
}



/* Function: FUN_00412aff */

uint __fastcall FUN_00412aff(int param_1,LPVOID *param_2)

{
  int iVar1;
  uint uVar2;
  HRESULT HVar3;
  int unaff_retaddr;
  int local_8;
  
  local_8 = param_1;
  FUN_00413775(&DAT_0041a888,1);
  local_8 = 0;
  iVar1 = FUN_00412a2d(&local_8);
  if ((iVar1 < 0) || (local_8 != 1)) {
    HVar3 = CoCreateInstance((IID *)&DAT_00401d4c,(LPUNKNOWN)0x0,1,(IID *)&DAT_004028cc,param_2);
    if (-1 < HVar3) {
      return 0;
    }
    uVar2 = CoCreateInstance((IID *)&DAT_0040283c,(LPUNKNOWN)0x0,1,(IID *)&DAT_004028cc,param_2);
    if (-1 < (int)uVar2) {
      return uVar2;
    }
    iVar1 = 0x20;
  }
  else {
    uVar2 = CoCreateInstance((IID *)&DAT_0040283c,(LPUNKNOWN)0x0,1,(IID *)&DAT_004028cc,param_2);
    if (-1 < (int)uVar2) {
      return uVar2;
    }
    iVar1 = 0x19;
  }
  FUN_00407f3a(unaff_retaddr,iVar1,0x402770,uVar2);
  return uVar2;
}



/* Function: FUN_00412ba9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00412ba9(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0041a8d0,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_0041a8d0;
    local_8 = &DAT_0041a8d4;
    _DAT_0041a8d8 = 0;
    DAT_0041a8dc = 0;
    _DAT_0041a8e0 = 0;
    _DAT_0041a8d4 = &PTR_FUN_00401238;
    _DAT_0041a8e4 = &DAT_0041a028;
    FUN_00416722(FUN_00412c30);
    local_10 = 0;
    FUN_0040f1c2((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00412c30 */

void FUN_00412c30(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0041a8d0,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0041b28c)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00412c80 */

void FUN_00412c80(uint param_1,ushort *param_2,undefined4 *param_3,int param_4,uint *param_5,
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
  
  puVar2 = FUN_00412ba9();
  if ((*(int **)(puVar2 + 4) != (int *)0x0) && (**(int **)(puVar2 + 4) != 0)) {
    if (param_5 == (uint *)0x0) {
      if (param_6 == (uint *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          puVar2 = FUN_00412ba9();
          puVar1 = *(uint **)(puVar2 + 4);
          if (2 < *puVar1) {
            uVar3 = FUN_004047a8(puVar1,1,0);
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
              FUN_004053eb((int)puVar1,&DAT_00403f81,param_2,param_2,local_c,&local_10,&local_44,
                           &local_48,&local_14,&local_18,&local_4e,&local_1c,&local_20,&local_24,
                           &local_4c,&local_28,&local_2c,&local_30,&local_40,&local_3c,&local_38,
                           &local_34);
            }
          }
        }
      }
      else {
        puVar2 = FUN_00412ba9();
        puVar1 = *(uint **)(puVar2 + 4);
        if (5 < *puVar1) {
          uVar3 = FUN_004047a8(puVar1,4,0);
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
            FUN_00405323((int)puVar1,&DAT_00403ef9,param_2,param_2,&local_34,&local_40,&local_44,
                         &local_48,&local_4c,&local_3c,&local_4e,&local_38);
          }
        }
      }
    }
    else {
      puVar2 = FUN_00412ba9();
      if (5 < **(uint **)(puVar2 + 4)) {
        uVar3 = FUN_004047a8(*(uint **)(puVar2 + 4),2,0);
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
          FUN_0040526e(extraout_ECX,&DAT_00403e88,extraout_ECX,extraout_ECX,&local_38,&local_3c,
                       &local_48,&local_4c,&local_4e,&local_40,&local_44);
        }
      }
      if (((param_2 != (ushort *)0x0) && ((char)param_2[2] == '\x01')) && (param_4 != 0)) {
        puVar2 = FUN_00412ba9();
        if (5 < **(uint **)(puVar2 + 4)) {
          uVar3 = FUN_004047a8(*(uint **)(puVar2 + 4),10,0);
          if ((char)uVar3 != '\0') {
            local_38 = param_8;
            local_3c = *param_5;
            local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
            local_40 = (uint)param_2[1];
            local_44 = (uint)*param_2;
            local_4c = param_1;
            local_4e = CONCAT11(local_4e._1_1_,1);
            FUN_0040526e(extraout_ECX_00,&DAT_004040a1,extraout_ECX_00,extraout_ECX_00,&local_4c,
                         &local_44,&local_40,&local_48,&local_4e,&local_3c,&local_38);
          }
        }
      }
    }
  }
  return;
}



/* Function: FUN_00413000 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

uint FUN_00413000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  LPVOID *ppvVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar6 = (undefined4 *)auStack_20;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  if (*(char *)(param_1 + 0xc) == '\0') {
    ppvVar1 = (LPVOID *)(param_1 + 0x10);
    local_8 = 0;
    piVar2 = (int *)*ppvVar1;
    if (piVar2 != (int *)0x0) {
      *ppvVar1 = (LPVOID)0x0;
      pcVar3 = *(code **)(*piVar2 + 8);
      puVar5 = &uStack_28;
      uStack_28 = 0x413042;
      piStack_24 = piVar2;
      (*(code *)PTR_guard_check_icall_0041b28c)();
      puVar6 = puVar5 + -1;
      puVar5[-1] = 0x413044;
      (*pcVar3)();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)((int)puVar6 + -4) = 0x413052;
    uVar10 = FUN_00412aff(param_2,ppvVar1);
    if (-1 < (int)uVar10) {
      *(int *)((int)puVar6 + -4) = param_1;
      puVar7 = (undefined1 *)((int)puVar6 + -8);
      *(undefined4 *)((int)puVar6 + -8) = 0x41305f;
      SHSetThreadRef(*(IUnknown **)((int)puVar6 + -4));
      *(undefined4 **)(puVar7 + -4) = param_5;
      piVar2 = (int *)*ppvVar1;
      *(undefined4 *)(puVar7 + -8) = param_4;
      *(undefined4 *)(puVar7 + -0xc) = param_3;
      iVar4 = *piVar2;
      *(undefined4 *)(puVar7 + -0x10) = param_2;
      *(int **)(puVar7 + -0x14) = piVar2;
      pcVar3 = *(code **)(iVar4 + 0xc);
      puVar8 = puVar7 + -0x18;
      *(undefined4 *)(puVar7 + -0x18) = 0x41307b;
      (*(code *)PTR_guard_check_icall_0041b28c)();
      puVar9 = puVar8 + -4;
      *(undefined4 *)(puVar8 + -4) = 0x41307d;
      uVar10 = (*pcVar3)();
      *(undefined4 *)(puVar9 + -4) = 0;
      puVar6 = (undefined4 *)(puVar9 + -8);
      *(undefined4 *)(puVar9 + -8) = 0x413087;
      SHSetThreadRef(*(IUnknown **)(puVar9 + -4));
    }
  }
  else {
    uVar10 = 0x800704c7;
  }
  *(undefined4 *)((int)puVar6 + -4) = 0x41308e;
  return uVar10;
}



/* Function: FUN_004130a0 */

undefined4 FUN_004130a0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xc) = 1;
  if (piVar1 == (int *)0x0) {
    uVar3 = 0x80004005;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar1);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004130e0 */

void __thiscall
FUN_004130e0(void *this,undefined4 param_1,undefined4 param_2,IID *param_3,undefined4 *param_4,
            int param_5,uint param_6)

{
  FUN_004143b7(this,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_00413100 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00413100(void)

{
  code *pcVar1;
  wchar_t *pwVar2;
  LPWSTR lpCmdLine;
  LPWSTR *ppWVar3;
  HRESULT HVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  BOOL BVar9;
  MSG MStack_4c;
  wchar_t *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x41310c;
  piVar7 = &local_24;
  local_24 = 0;
  lpCmdLine = GetCommandLineW();
  ppWVar3 = CommandLineToArgvW(lpCmdLine,piVar7);
  local_30 = L"DefaultSharedServer";
  if (2 < local_24) {
    local_30 = ppWVar3[1];
  }
  pwVar2 = local_30;
  HVar4 = CoInitializeEx((LPVOID)0x0,2);
  if (-1 < HVar4) {
    local_18[0] = (int *)0x0;
    HVar4 = CoCreateInstance((IID *)&DAT_00401d5c,(LPUNKNOWN)0x0,1,(IID *)&DAT_0040282c,local_18);
    if (-1 < HVar4) {
      pcVar1 = *(code **)(*local_18[0] + 0xc);
      (*(code *)PTR_guard_check_icall_0041b28c)(local_18[0],4,0x1c);
      (*pcVar1)();
      pcVar1 = *(code **)(*local_18[0] + 8);
      (*(code *)PTR_guard_check_icall_0041b28c)(local_18[0]);
      (*pcVar1)();
      local_18[0] = (int *)0x0;
    }
    *(byte *)((int)ProcessEnvironmentBlock + 3) = *(byte *)((int)ProcessEnvironmentBlock + 3) | 0x80
    ;
    uVar5 = FUN_0041359b(&DAT_0041a898);
    if ((char)uVar5 != '\0') {
      local_8 = 0;
      FUN_0041444c(&local_2c);
      pcVar1 = *(code **)(*local_2c + 0x2c);
      local_20 = 0;
      local_8._0_1_ = 2;
      (*(code *)PTR_guard_check_icall_0041b28c)(local_2c,&local_20);
      (*pcVar1)();
      FUN_004144b7(&local_28);
      pcVar1 = *(code **)(*local_28 + 0x18);
      local_8 = CONCAT31(local_8._1_3_,5);
      local_1c = (int *)0x0;
      (*(code *)PTR_guard_check_icall_0041b28c)(local_28,local_20,&local_1c);
      (*pcVar1)();
      pcVar1 = *(code **)(*local_1c + 0x44);
      (*(code *)PTR_guard_check_icall_0041b28c)(local_1c,1);
      (*pcVar1)();
      ~CComPtr<>((int *)&local_1c);
      ~CComPtr<>((int *)&local_28);
      ~CComPtr<>(&local_20);
      ~CComPtr<>((int *)&local_2c);
      uVar6 = FUN_0041325c();
      return uVar6;
    }
    local_30 = (wchar_t *)GetCurrentThreadId();
    piVar7 = (int *)FUN_00414b40();
    if (piVar7[1] == 0) {
      DAT_0041a8b4 = 1;
      DAT_0041a8ac = 0;
      _DAT_0041a8a8 = &PTR_FUN_004013c8;
      _DAT_0041a8b0 = (DWORD)local_30;
      piVar7[1] = (int)&DAT_0041a8a8;
    }
    iVar8 = FUN_00414522(piVar7,(ushort *)pwVar2);
    if (-1 < iVar8) {
      while (BVar9 = GetMessageW(&MStack_4c,(HWND)0x0,0,0), 0 < BVar9) {
        TranslateMessage(&MStack_4c);
        DispatchMessageW(&MStack_4c);
      }
      FUN_00412770(piVar7,(ushort *)pwVar2);
    }
    CoUninitialize();
  }
  return 0;
}



/* Function: Catch_All@00413248 */

undefined * Catch_All_00413248(void)

{
  int unaff_EBP;
  
  FUN_004129c9(*(void **)(unaff_EBP + 4));
  return &DAT_00413257;
}



/* Function: FUN_0041325c */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041325c(void)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  HWND unaff_EBX;
  int unaff_EBP;
  ushort *unaff_EDI;
  
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(unaff_EBP + -0x2c) = DVar1;
  piVar2 = (int *)FUN_00414b40();
  if ((HWND)piVar2[1] == unaff_EBX) {
    _DAT_0041a8b0 = *(undefined4 *)(unaff_EBP + -0x2c);
    DAT_0041a8b4 = 1;
    DAT_0041a8ac = SUB41(unaff_EBX,0);
    _DAT_0041a8a8 = &PTR_FUN_004013c8;
    piVar2[1] = (int)&DAT_0041a8a8;
  }
  iVar3 = FUN_00414522(piVar2,unaff_EDI);
  if (-1 < iVar3) {
    while (BVar4 = GetMessageW((LPMSG)(unaff_EBP + -0x48),unaff_EBX,(UINT)unaff_EBX,(UINT)unaff_EBX)
          , 0 < BVar4) {
      TranslateMessage((MSG *)(unaff_EBP + -0x48));
      DispatchMessageW((MSG *)(unaff_EBP + -0x48));
    }
    FUN_00412770(piVar2,unaff_EDI);
  }
  CoUninitialize();
  return 0;
}



/* Function: FUN_004132f0 */

ULONG FUN_004132f0(int param_1)

{
  code *pcVar1;
  ULONG UVar2;
  
  UVar2 = CoReleaseServerProcess();
  if ((UVar2 == 0) && (*(int **)(param_1 + 4) != (int *)0x0)) {
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)();
    (*pcVar1)();
  }
  return UVar2;
}



/* Function: FUN_00413330 */

void FUN_00413330(void)

{
  CoAddRefServerProcess();
  return;
}



/* Function: FUN_00413340 */

undefined4 FUN_00413340(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RoRevokeActivationFactories(param_3);
  return 0;
}



/* Function: FUN_00413360 */

void __thiscall
FUN_00413360(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4
            ,uint param_5)

{
  FUN_004148bb(this,param_3,param_4,param_5);
  return;
}



/* Function: FUN_00413380 */

void FUN_00413380(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      if (iVar1 < 0) {
        return;
      }
      if ((*(int *)(param_3 + uVar2 * 4) != 0) &&
         (iVar1 = CoRevokeClassObject(*(DWORD *)(param_3 + uVar2 * 4)), -1 < iVar1)) {
        *(undefined4 *)(param_3 + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  return;
}



/* Function: FUN_004133c0 */

void __fastcall FUN_004133c0(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_1 = (int)&PTR_FUN_00401438;
  if (puVar1 != (undefined4 *)0x0) {
    if (*(char *)(puVar1 + 1) != '\0') {
      pcVar2 = *(code **)*puVar1;
      (*(code *)PTR_guard_check_icall_0041b28c)(1);
      (*pcVar2)();
    }
    param_1[1] = 0;
  }
  FUN_004134c5(param_1);
  return;
}



/* Function: FUN_00413400 */

undefined4 FUN_00413400(void)

{
  return 0;
}



/* Function: FUN_00413410 */

undefined4 FUN_00413410(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00413430 */

undefined4 FUN_00413430(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00413450 */

undefined4 FUN_00413450(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00413470 */

undefined4 FUN_00413470(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00413490 */

int FUN_00413490(void)

{
  int iVar1;
  
  iVar1 = DAT_0041a790;
  LOCK();
  DAT_0041a790 = DAT_0041a790 + -1;
  UNLOCK();
  return iVar1 + -1;
}



/* Function: FUN_004134b0 */

int FUN_004134b0(void)

{
  int iVar1;
  
  iVar1 = DAT_0041a790;
  LOCK();
  DAT_0041a790 = DAT_0041a790 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_004134c5 */

void __fastcall FUN_004134c5(int *param_1)

{
  *param_1 = (int)&PTR_FUN_00401408;
  FUN_00412466(param_1,(ushort *)0x0,'\x01');
  DAT_0041a558 = 0;
  DAT_0041a8b8 = 0;
  return;
}



/* Function: FUN_004134f0 */

void FUN_004134f0(int *param_1,int *param_2,undefined4 *param_3)

{
  FUN_004149db(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00413510 */

int * __thiscall FUN_00413510(void *this,byte param_1)

{
  FUN_004133c0((int *)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (int *)this;
}



/* Function: FUN_00413540 */

int * __thiscall FUN_00413540(void *this,byte param_1)

{
  FUN_004134c5((int *)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (int *)this;
}



/* Function: FUN_00413570 */

undefined4 * __thiscall FUN_00413570(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004013d0;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041359b */

uint __fastcall FUN_0041359b(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  void *pvStack_c;
  
  local_10 = param_1;
  pvStack_c = param_1;
  FUN_004137cf(param_1,(uint *)&local_10);
  uVar1 = local_10._0_1_;
  local_10 = (void *)((uint)local_10 & 0xffffff01);
  uVar2 = FUN_004138d4(param_1,(byte)local_10);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_004135d9 */

uint __fastcall FUN_004135d9(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00413937(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00413a3c(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_00413611 */

void __fastcall FUN_00413611(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413a95(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040d8c5(param_1 + 2,0x2af34f8,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_00413667 */

uint * __thiscall FUN_00413667(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_1c [2];
  undefined4 local_14;
  void *local_10;
  int local_c;
  int local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  param_1[1] = 0;
  *param_1 = uVar2;
  if (((byte)uVar2 & 6) == 6) {
    return param_1;
  }
  iVar1 = FUN_0040d713();
  local_c = iVar1;
  FUN_00413b9a(local_1c,&local_8);
  if (iVar1 == 0) {
    local_8 = 0;
  }
  uVar2 = *param_1;
  do {
    uVar5 = uVar2;
    *param_1 = uVar5;
    uVar4 = uVar5;
    if ((local_8 != 0) && ((uVar5 & 2) == 0)) {
      uVar4 = uVar5 & 0xfffff63e | local_1c[0] & 0x9c1 | 2;
      *param_1 = uVar4;
    }
    if ((uVar5 & 4) == 0) {
      uVar4 = uVar4 & 0xfffffbff | local_1c[0] & 0x400 | 4;
      *param_1 = uVar4;
    }
                    /* WARNING: Load size is inaccurate */
    LOCK();
    uVar2 = *this;
    if (uVar5 == uVar2) {
      *(uint *)this = uVar4;
      uVar2 = uVar5;
    }
    UNLOCK();
  } while (uVar2 != uVar5);
  if (((uVar5 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_0041374f;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_c == 0) || (local_c != DAT_0041a194)) {
LAB_0041373d:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffff7c1;
    UNLOCK();
  }
  else {
    local_14 = 0;
    local_10 = this;
    uVar3 = FUN_0040b6a1(&DAT_0041a1b0,&local_14,8);
    if ((char)uVar3 == '\0') goto LAB_0041373d;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_0041374f:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00413775 */

void __thiscall FUN_00413775(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413667(this,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_0040d8c5((uint *)((int)this + 8),0x961bff,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_c,
               (uint)param_1,3);
  return;
}



/* Function: FUN_004137cf */

uint * __thiscall FUN_004137cf(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_00413c08(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_004138ae;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_0041389e:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 1;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0041389e;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_004138ae:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004138d4 */

void __thiscall FUN_004138d4(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10 [3];
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004137cf(this,local_10);
    uVar2 = *puVar1;
  }
  local_14 = 2;
  local_18 = 0;
  FUN_0040d8c5((uint *)((int)this + 8),0x386a0cd,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_18,
               (uint)param_1,3);
  return;
}



/* Function: FUN_00413937 */

uint * __thiscall FUN_00413937(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_00413cde(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_00413a16;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_00413a06:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00413a06;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_00413a16:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00413a3c */

void __thiscall FUN_00413a3c(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00413937(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040d8c5((uint *)((int)this + 8),0x352889c,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_00413a95 */

uint * __thiscall FUN_00413a95(void *this,uint *param_1)

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
  local_10 = FUN_0040d713();
  FUN_00413d87(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041a184 == '\0')) goto LAB_00413b74;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
  if ((local_10 == 0) || (local_10 != DAT_0041a194)) {
LAB_00413b64:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_0040b6a1(&DAT_0041a1b0,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00413b64;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0041a188);
LAB_00413b74:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00413b9a */

uint * FUN_00413b9a(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040d72e(0x961bff,0,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00413c08 */

uint * FUN_00413c08(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040d72e(0x386a0cd,1,param_2);
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
    bVar1 = false;
    if (uVar3 == 0) goto LAB_00413cbc;
  }
  FUN_00413611((uint *)&DAT_0041a878);
  uVar3 = FUN_004135d9(&DAT_0041a8c0);
  bVar4 = (char)uVar3 != '\0';
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00413cbc:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00413cde */

uint * FUN_00413cde(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_0040d72e(0x352889c,3,param_2);
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
    FUN_0041031f((uint *)&DAT_0041a728);
    bVar1 = true;
  }
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar1)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00413d87 */

uint * FUN_00413d87(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040d72e(0x2af34f8,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00413df6 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00413df6(void *param_1)

{
  int *piVar1;
  int local_1020 [3];
  int local_1014;
  int iStack_1010;
  int iStack_100c;
  undefined1 local_1008 [4096];
  uint local_8;
  
  local_8 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  memset(local_1008,0,0x1000);
  piVar1 = FUN_0041417a(param_1,local_1020);
  local_1014 = *piVar1;
  iStack_1010 = piVar1[1];
  iStack_100c = piVar1[2];
  FUN_00416420(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00413e6a */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00413e6a(void *this)

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
  
  puStack_c = &LAB_00417b7e;
  local_10 = ExceptionList;
  uStack_14 = 0x413e87;
  uVar4 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1415 = DAT_0041a5cc != (code *)0x0;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_146c = *in_stack_00000014;
  local_1468 = in_stack_00000014[1];
  local_1448 = FUN_00406d8f(local_146c);
  local_1474 = 0;
  local_1470 = 0;
  if (*(int *)(extraout_EDX + 8) == 1) {
    local_1470 = 8;
  }
  LOCK();
  UNLOCK();
  local_1464 = DAT_0041a638 + 1;
  local_1460 = 0;
  DAT_0041a638 = DAT_0041a638 + 1;
  local_145c = GetCurrentThreadId();
  pcVar2 = DAT_0041a5f0;
  local_1450 = "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h";
  local_144c = 0x756;
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
  if (DAT_0041a5f0 == (code *)0x0) {
    local_1428 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0041b28c)(uVar4);
    local_1428 = (*pcVar2)();
  }
  pcVar2 = DAT_0041a5a4;
  if (DAT_0041a5a4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(&local_1474);
    (*pcVar2)();
  }
  pcVar2 = DAT_0041a5c0;
  if (DAT_0041a5c0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(&local_1474,local_414,0x400);
    (*pcVar2)();
  }
  pcVar2 = DAT_0041a5bc;
  if (DAT_0041a5bc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)(&local_1474);
    (*pcVar2)();
  }
  pcVar2 = DAT_0041a5d4;
  if (((DAT_0041a5d4 != (code *)0x0) && (local_1415 == '\0')) && ((local_1470 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0041b28c)(&local_1474);
    (*pcVar2)();
  }
  if (-1 < local_146c) {
    FUN_004081b7();
  }
  pcVar2 = DAT_0041a58c;
  if (DAT_0041a594 == '\0') {
    if (DAT_0041a58c == (code *)0x0) {
      BVar5 = IsDebuggerPresent();
      cVar3 = BVar5 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0041b28c)();
      cVar3 = (*pcVar2)();
    }
    if (cVar3 != '\0') goto LAB_00414057;
  }
  else {
LAB_00414057:
    if ((local_1470 & 2) == 0) {
      bVar1 = true;
      goto LAB_00414067;
    }
  }
  bVar1 = false;
LAB_00414067:
  pcVar2 = DAT_0041a598;
  if ((local_1415 != '\0') || (bVar1)) {
    if ((DAT_0041a598 != (code *)0x0) && (DAT_0041a5ac == '\0')) {
      (*(code *)PTR_guard_check_icall_0041b28c)(&local_1474,local_1414,0x800);
      (*pcVar2)();
    }
    if (local_1414[0] == L'\0') {
      FUN_0040695a(local_1414,0x800,(int)&local_1474);
    }
    if (bVar1) {
      OutputDebugStringW(local_1414);
    }
  }
  else if ((DAT_0041a598 != (code *)0x0) && (DAT_0041a5ac == '\0')) {
    (*(code *)PTR_guard_check_icall_0041b28c)(&local_1474,0,0);
    (*pcVar2)();
  }
  pcVar2 = DAT_0041a5c8;
  if ((((local_1470 & 4) != 0) || (DAT_0041a59c != '\0')) && (DAT_0041a5c8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0041b28c)();
    (*pcVar2)();
  }
  local_8 = 0xffffffff;
  if ((local_1470 & 1) == 0) goto LAB_0041413b;
  do {
    FUN_00407d37((int)&local_1474);
LAB_0041413b:
    pcVar2 = DAT_0041a5cc;
    if (local_1415 != '\0') {
      (*(code *)PTR_guard_check_icall_0041b28c)(&local_1474,local_1414);
      (*pcVar2)();
    }
    FUN_004076ed();
  } while( true );
}



/* Function: FUN_0041417a */

int * __thiscall FUN_0041417a(void *this,int *param_1)

{
  short sVar1;
  code *pcVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  short *psVar6;
  int iVar7;
  int in_stack_00000014;
  short *in_stack_00000018;
  undefined1 local_28 [12];
  int local_1c;
  int iStack_18;
  int iStack_14;
  void *local_10;
  code *local_c;
  undefined1 local_5;
  
  pcVar2 = DAT_0041a5dc;
  local_5 = 0;
  psVar6 = in_stack_00000018;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  iVar7 = (int)psVar6 - (int)(in_stack_00000018 + 1) >> 1;
  local_c = DAT_0041a5dc;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  local_10 = this;
  if (pcVar2 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0041b28c)
              (local_28,in_stack_00000018 + iVar7,0x800 - iVar7,&local_5);
    piVar4 = (int *)(*local_c)();
    local_1c = *piVar4;
    iStack_18 = piVar4[1];
    iStack_14 = piVar4[2];
    *param_1 = local_1c;
    param_1[1] = iStack_18;
    param_1[2] = iStack_14;
  }
  pvVar3 = local_10;
  if (*param_1 < 0) {
    FUN_00411453(local_10,0x83,"onecoreuap\\shell\\pickerhost\\exe\\pickerhost.cpp",0,0,
                 in_stack_00000014,param_1,in_stack_00000018);
    return param_1;
  }
  *param_1 = -0x7ff8fdc2;
  uVar5 = FUN_00407024(0x8007023e);
  param_1[1] = uVar5;
  param_1[2] = 0;
  FUN_00407dd5((int)pvVar3,0x83,0x4027d4,extraout_ECX,extraout_ECX,in_stack_00000014,param_1,
               in_stack_00000018);
  pcVar2 = (code *)swi(3);
  piVar4 = (int *)(*pcVar2)();
  return piVar4;
}



/* Function: FUN_00414257 */

void * __thiscall FUN_00414257(void *this,undefined4 *param_1)

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
    FUN_00406636(this,psVar2,uVar6 + 1,uVar6);
    return this;
  }
  FUN_00406285(0x80070216);
  pcVar3 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar3)();
  return pvVar4;
}



/* Function: FUN_004142b0 */

undefined4 * FUN_004142b0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041759b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_00416434(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_00401494;
    puVar3[2] = 1;
    puVar2 = PTR_FUN_00401498;
    local_8 = 1;
    local_18 = puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3);
    (*(code *)puVar2)();
    local_14 = puVar3;
    FUN_004059d3((int *)&local_18);
    puVar3[4] = *(undefined4 *)param_1;
    local_8 = 2;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_8 = 0xffffffff;
    local_18 = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0041a558 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
        (*pcVar1)();
        puVar4 = local_18;
      }
    }
  }
  FUN_004059d3((int *)&local_14);
  ExceptionList = local_10;
  return puVar4;
}



/* Function: FUN_004143b7 */

HRESULT __fastcall
FUN_004143b7(undefined4 param_1,IID *param_2,undefined4 *param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  IID *local_c;
  int local_8;
  
  uVar2 = 0;
  local_8 = 0;
  if (param_5 != 0) {
    iVar1 = param_4 - (int)param_3;
    local_c = param_2;
    do {
      if (local_8 < 0) goto LAB_0041441f;
      local_8 = CoRegisterClassObject
                          (local_c,(LPUNKNOWN)*param_3,4,4,(LPDWORD)(iVar1 + (int)param_3));
      uVar2 = uVar2 + 1;
      local_c = local_c + 1;
      param_3 = param_3 + 1;
    } while (uVar2 < param_5);
    if (local_8 < 0) goto LAB_0041441f;
  }
  local_8 = CoResumeClassObjects();
  if (-1 < local_8) {
    return local_8;
  }
LAB_0041441f:
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      CoRevokeClassObject(*(DWORD *)(param_4 + uVar3 * 4));
      *(undefined4 *)(param_4 + uVar3 * 4) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return local_8;
}



/* Function: FUN_0041444c */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0041444c(undefined4 *param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  void *unaff_retaddr;
  wchar_t *local_30;
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x414458;
  local_30 = L"Windows.UI.Internal.Input.InputSite";
  *param_1 = 0;
  pvVar2 = FUN_00414257(local_2c,&local_30);
  local_8 = 2;
  iVar3 = RoGetActivationFactory(*(undefined4 *)((int)pvVar2 + 0x14),&DAT_00402994,param_1);
  if (-1 < iVar3) {
    FUN_0041736b();
    return;
  }
  FUN_00412a13(unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(iVar3);
  return;
}



/* Function: FUN_004144b7 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_004144b7(undefined4 *param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  void *unaff_retaddr;
  wchar_t *local_30;
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x4144c3;
  local_30 = L"Windows.UI.Internal.Input.InputDelegationInputObject";
  *param_1 = 0;
  pvVar2 = FUN_00414257(local_2c,&local_30);
  local_8 = 2;
  iVar3 = RoGetActivationFactory(*(undefined4 *)((int)pvVar2 + 0x14),&DAT_0040284c,param_1);
  if (-1 < iVar3) {
    FUN_0041736b();
    return;
  }
  FUN_00412a13(unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(iVar3);
  return;
}



/* Function: FUN_00414522 */

int __fastcall FUN_00414522(int *param_1,ushort *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort *puVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *local_50 [2];
  int local_48;
  int *local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  uint local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  ushort *local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417bf7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar9 = 0;
  local_48 = 0;
  local_20 = 0;
  pcVar1 = *(code **)(*param_1 + 0x10);
  local_30 = param_1;
  local_1c = param_2;
  (*(code *)PTR_guard_check_icall_0041b28c)(param_1,DAT_0041a100 ^ (uint)&stack0xfffffffc);
  local_40 = (*pcVar1)();
  pcVar1 = *(code **)(*local_30 + 0x14);
  (*(code *)PTR_guard_check_icall_0041b28c)(local_30);
  local_18 = (int *)(*pcVar1)();
  iVar3 = local_40;
  local_34 = FUN_00412736(local_40,local_18,local_1c);
  if (local_34 == 0) goto LAB_0041478d;
  local_2c = FUN_00416773(-(uint)((int)((ulonglong)local_34 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)local_34 * 4));
  local_24 = FUN_00416773(-(uint)((int)((ulonglong)local_34 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)local_34 * 4));
  local_44 = (int *)FUN_00416773(-(uint)((int)((ulonglong)local_34 * 0x10 >> 0x20) != 0) |
                                 (uint)((ulonglong)local_34 * 0x10));
  if (((local_2c == 0) || (local_24 == 0)) || (local_44 == (undefined4 *)0x0)) {
    iVar9 = -0x7ff8fff2;
  }
  else {
    piVar11 = (int *)(iVar3 + 4);
    local_14 = 0;
    piVar6 = local_18;
    puVar2 = local_44;
    local_28 = piVar11;
    if (piVar11 < local_18) {
      do {
        local_3c = puVar2;
        local_28 = piVar11;
        if (iVar9 < 0) goto LAB_00414736;
        if ((*piVar11 != 0) && (bVar5 = FUN_0041241e(*piVar11,local_1c), piVar6 = local_18, bVar5))
        {
          local_50[0] = (int *)0x2;
          local_38 = 0;
          pcVar1 = *(code **)*piVar11;
          (*(code *)PTR_guard_check_icall_0041b28c)
                    (local_50,(undefined4 *)*piVar11,&DAT_00401dc4,&local_38);
          iVar9 = (*pcVar1)();
          piVar6 = local_18;
          piVar11 = local_28;
          local_20 = iVar9;
          if (-1 < iVar9) {
            *(undefined4 *)(local_24 + local_14 * 4) = local_38;
            local_14 = local_14 + 1;
            puVar2 = *(undefined4 **)(*local_28 + 4);
            *local_3c = *puVar2;
            local_3c[1] = puVar2[1];
            local_3c[2] = puVar2[2];
            local_3c[3] = puVar2[3];
            local_3c = local_3c + 4;
          }
        }
        piVar11 = piVar11 + 1;
        puVar2 = local_3c;
      } while (piVar11 < piVar6);
      local_28 = piVar11;
      if (-1 < iVar9) goto LAB_004146bb;
    }
    else {
LAB_004146bb:
      pcVar1 = *(code **)(*local_30 + 0x28);
      (*(code *)PTR_guard_check_icall_0041b28c)
                (local_30,local_1c,local_44,local_24,local_2c,local_34);
      local_20 = (*pcVar1)();
      puVar4 = local_1c;
      iVar3 = local_2c;
      iVar9 = local_20;
      if (-1 < local_20) {
        piVar11 = (int *)(local_40 + 4);
        local_14 = 0;
        piVar6 = local_18;
        if (piVar11 < local_18) {
          do {
            if ((*piVar11 != 0) && (bVar5 = FUN_0041241e(*piVar11,puVar4), piVar6 = local_18, bVar5)
               ) {
              iVar9 = local_14 * 4;
              local_14 = local_14 + 1;
              *(undefined4 *)(*(int *)(*piVar11 + 0xc) + 4) = *(undefined4 *)(iVar3 + iVar9);
            }
            piVar11 = piVar11 + 1;
            iVar9 = local_20;
          } while (piVar11 < piVar6);
        }
      }
    }
LAB_00414736:
    uVar7 = local_14;
    local_50[0] = (int *)0x0;
    if (local_14 != 0) {
      uVar10 = 0;
      do {
        piVar6 = *(int **)(local_24 + uVar10 * 4);
        pcVar1 = *(code **)(*piVar6 + 8);
        (*(code *)PTR_guard_check_icall_0041b28c)(piVar6);
        (*pcVar1)();
        uVar10 = uVar10 + 1;
        iVar9 = local_20;
      } while (uVar10 < uVar7);
    }
  }
  o_free(local_2c);
  o_free(local_44);
  o_free(local_24);
  if (iVar9 < 0) {
    ExceptionList = local_10;
    return iVar9;
  }
LAB_0041478d:
  pcVar1 = *(code **)(*local_30 + 0x18);
  (*(code *)PTR_guard_check_icall_0041b28c)(local_30);
  piVar6 = (int *)(*pcVar1)();
  local_44 = piVar6;
  uVar7 = FUN_00412736((int)local_18,piVar6,local_1c);
  if (uVar7 != 0) {
    local_34 = FUN_00416773(-(uint)((int)((ulonglong)uVar7 * 4 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar7 * 4));
    if (local_34 == 0) {
      iVar9 = -0x7ff8fff2;
    }
    else {
      local_3c = (undefined4 *)0x0;
      piVar11 = local_18 + 1;
      local_50[0] = piVar11;
      iVar9 = local_48;
      if (piVar11 < piVar6) {
        iVar9 = 0;
        do {
          if ((*piVar11 != 0) && (bVar5 = FUN_0041241e(*piVar11,local_1c), bVar5)) {
            pcVar1 = *(code **)(*piVar11 + 4);
            (*(code *)PTR_guard_check_icall_0041b28c)();
            uVar8 = (*pcVar1)();
            *(undefined4 *)(local_34 + iVar9 * 4) = uVar8;
            iVar9 = iVar9 + 1;
            piVar6 = local_44;
          }
          piVar11 = piVar11 + 1;
        } while (piVar11 < piVar6);
      }
      local_48 = iVar9;
      piVar6 = local_50[0];
      pcVar1 = *(code **)(*local_30 + 0x20);
      (*(code *)PTR_guard_check_icall_0041b28c)(local_30,local_1c,local_34,&local_3c,local_48);
      iVar9 = (*pcVar1)();
      puVar4 = local_1c;
      piVar11 = local_44;
      local_20 = iVar9;
      if (-1 < iVar9) {
        for (; local_20 = iVar9, piVar6 < piVar11; piVar6 = piVar6 + 1) {
          if ((*piVar6 != 0) && (bVar5 = FUN_0041241e(*piVar6,puVar4), bVar5)) {
            *(undefined4 **)(*(int *)(*piVar6 + 0xc) + 4) = local_3c;
          }
          iVar9 = local_20;
        }
      }
    }
    o_free(local_34);
  }
  ExceptionList = local_10;
  return iVar9;
}



/* Function: FUN_004148bb */

int __fastcall FUN_004148bb(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  int local_14;
  undefined4 *local_10;
  uint local_8;
  
  iVar3 = FUN_00416773(-(uint)((int)((ulonglong)param_4 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 4));
  iVar4 = FUN_00416773(-(uint)((int)((ulonglong)param_4 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 4));
  uVar6 = 0;
  local_14 = 0;
  if ((iVar3 == 0) || (iVar4 == 0)) {
    local_14 = -0x7ff8fff2;
    goto LAB_004149bc;
  }
  local_8 = 0;
  if (param_4 == 0) {
LAB_00414987:
    local_14 = RoRegisterActivationFactories(iVar4,iVar3,param_4,param_3);
  }
  else {
    local_10 = param_2;
    do {
      if (local_14 < 0) goto LAB_0041499d;
      *(code **)((iVar3 - (int)param_2) + (int)local_10) = FUN_00414bd0;
      psVar5 = (short *)*local_10;
      psVar1 = psVar5 + 1;
      do {
        sVar2 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar2 != 0);
      local_14 = WindowsCreateString(*local_10,(int)psVar5 - (int)psVar1 >> 1,
                                     (iVar4 - (int)param_2) + (int)local_10);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < param_4);
    if (-1 < local_14) goto LAB_00414987;
  }
LAB_0041499d:
  if (local_8 != 0) {
    do {
      WindowsDeleteString(*(undefined4 *)(iVar4 + uVar6 * 4));
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_8);
  }
LAB_004149bc:
  o_free(iVar3);
  o_free(iVar4);
  return local_14;
}



/* Function: FUN_004149db */

undefined4 __fastcall FUN_004149db(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041769d;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  *param_3 = 0;
  if ((((*param_2 == 0) && (param_2[1] == DAT_00401da8)) && (param_2[2] == DAT_00401dac)) &&
     (param_2[3] == DAT_00401db0)) {
    *param_3 = param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1);
    (*pcVar1)();
    uVar3 = 0;
  }
  else if (((*param_2 == 0xed2ab50) && (param_2[1] == DAT_004028d0)) &&
          ((param_2[2] == DAT_004028d4 && (param_2[3] == DAT_004028d8)))) {
    *param_3 = param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1,uVar2);
    (*pcVar1)();
  }
  else {
    uVar3 = 0x80004002;
  }
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_00414ab0 */

void __fastcall FUN_00414ab0(int param_1)

{
  PostThreadMessageW(*(DWORD *)(param_1 + 8),0x12,0,0);
  return;
}



/* Function: FUN_00414ad0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_00414ad0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x414adc;
  *param_4 = 0;
  if (param_2 == 0) {
    local_14[0] = (undefined4 *)0x0;
    iVar2 = FUN_00414be7(local_14);
    if (-1 < iVar2) {
      local_8 = 0;
      pcVar1 = *(code **)*local_14[0];
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],param_3,param_4);
      iVar2 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  else {
    iVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return iVar2;
}



/* Function: FUN_00414b40 */

undefined * FUN_00414b40(void)

{
  InitOnceExecuteOnce((PINIT_ONCE)&DAT_0041a794,FUN_00414b70,(PVOID)0x0,(LPVOID *)0x0);
  DAT_0041a874 = 1;
  return &DAT_0041a86c;
}



/* Function: FUN_00414b70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00414b70(void)

{
  _DAT_0041a870 = 0;
  DAT_0041a874 = 1;
  DAT_0041a558 = &DAT_0041a86c;
  _DAT_0041a86c = &PTR_FUN_004013d8;
  return 1;
}



/* Function: FUN_00414ba0 */

undefined4 * __thiscall FUN_00414ba0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004013d0;
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00414bd0 */

void FUN_00414bd0(undefined4 param_1,undefined4 *param_2)

{
  FUN_00414ce0(DAT_0041a558,param_1,param_2);
  return;
}



/* Function: FUN_00414be7 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_00414be7(undefined4 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x414bf3;
  *param_1 = 0;
  local_14[0] = (undefined4 *)FUN_00416434(0x14);
  piVar3 = DAT_0041a558;
  if (local_14[0] == (undefined4 *)0x0) {
    uVar4 = 0x8007000e;
  }
  else {
    local_8 = 0;
    local_14[0][2] = 1;
    *local_14[0] = &PTR_FUN_004014ac;
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 4);
      (*(code *)PTR_guard_check_icall_0041b28c)(piVar3);
      (*pcVar1)();
    }
    *local_14[0] = &PTR_FUN_00401468;
    local_14[0][4] = 0;
    *(undefined1 *)(local_14[0] + 3) = 0;
    puVar2 = PTR_FUN_00401468;
    local_8 = 2;
    (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],&DAT_00401da4,param_1);
    uVar4 = (*(code *)puVar2)();
    FUN_004059d3((int *)local_14);
  }
  return uVar4;
}



/* Function: FUN_00414c8a */

void __fastcall FUN_00414c8a(undefined4 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 2) != '\0') {
    pcVar1 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_0041b28c)(0);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



/* Function: FUN_00414cb5 */

void __fastcall FUN_00414cb5(undefined4 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 3) != '\0') {
    pcVar1 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_0041b28c)(0);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Function: FUN_00414ce0 */

void __thiscall FUN_00414ce0(void *this,undefined4 param_1,undefined4 *param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  wchar_t *pwVar10;
  int *piVar11;
  wchar_t *pwVar12;
  int local_48;
  int *local_44;
  int *local_40;
  wchar_t local_3c [20];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417c3d;
  local_10 = ExceptionList;
  local_14 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_2 = 0;
  local_44 = (int *)this;
  iVar4 = WindowsIsStringEmpty(param_1,local_14);
  if (((iVar4 == 0) && (iVar4 = WindowsStringHasEmbeddedNull(param_1,&local_48), -1 < iVar4)) &&
     (local_48 != 1)) {
    puVar5 = (ushort *)WindowsGetStringRawBuffer(param_1,0);
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 0x14);
    (*(code *)PTR_guard_check_icall_0041b28c)(this);
    iVar4 = (*pcVar2)();
    piVar11 = (int *)(iVar4 + 4);
    pcVar2 = *(code **)(*local_44 + 0x18);
    (*(code *)PTR_guard_check_icall_0041b28c)(local_44);
    piVar6 = (int *)(*pcVar2)();
    local_40 = piVar6;
    if (piVar11 < piVar6) {
      do {
        iVar4 = *piVar11;
        if ((iVar4 != 0) && (bVar3 = FUN_0041241e(iVar4,(ushort *)0x0), piVar6 = local_40, bVar3)) {
          pcVar2 = *(code **)(iVar4 + 4);
          (*(code *)PTR_guard_check_icall_0041b28c)();
          puVar7 = (ushort *)(*pcVar2)();
          puVar9 = puVar5;
          do {
            uVar1 = *puVar9;
            bVar3 = uVar1 < *puVar7;
            if (uVar1 != *puVar7) {
LAB_00414dce:
              uVar8 = -(uint)bVar3 | 1;
              goto LAB_00414dd3;
            }
            if (uVar1 == 0) break;
            uVar1 = puVar9[1];
            bVar3 = uVar1 < puVar7[1];
            if (uVar1 != puVar7[1]) goto LAB_00414dce;
            puVar9 = puVar9 + 2;
            puVar7 = puVar7 + 2;
          } while (uVar1 != 0);
          uVar8 = 0;
LAB_00414dd3:
          piVar6 = local_40;
          if (uVar8 == 0) {
            local_40 = (int *)0x2;
            FUN_004125a8(local_44,(byte *)&local_40,puVar9,(undefined4 *)*piVar11,param_2);
            goto LAB_00414e2d;
          }
        }
        piVar11 = piVar11 + 1;
      } while (piVar11 < piVar6);
    }
    RoOriginateError(0x80040111,param_1);
  }
  else {
    pwVar10 = L"activatibleClassId";
    pwVar12 = local_3c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pwVar12 = *(undefined4 *)pwVar10;
      pwVar10 = pwVar10 + 2;
      pwVar12 = pwVar12 + 2;
    }
    *pwVar12 = *pwVar10;
    RoOriginateErrorW(0x80070057,0x12,local_3c);
  }
LAB_00414e2d:
  ExceptionList = local_10;
  FUN_00416420(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00414e60 */

void FUN_00414e60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x10);
  (*(code *)PTR_guard_check_icall_0041b28c)
            (*(int **)(param_1 + 0xc),param_2,param_3,param_4,param_5,param_6);
  (*pcVar1)();
  return;
}



/* Function: FUN_00414ea0 */

void FUN_00414ea0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x14);
  (*(code *)PTR_guard_check_icall_0041b28c)(*(int **)(param_1 + 0xc));
  (*pcVar1)();
  return;
}



/* Function: FUN_00414ed0 */

void FUN_00414ed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x18);
  (*(code *)PTR_guard_check_icall_0041b28c)
            (*(int **)(param_1 + 0xc),param_2,param_3,param_4,param_5,param_6,param_7);
  (*pcVar1)();
  return;
}



/* Function: FUN_00414f10 */

void FUN_00414f10(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x1c);
  (*(code *)PTR_guard_check_icall_0041b28c)(*(int **)(param_1 + 0xc),param_2);
  (*pcVar1)();
  return;
}



/* Function: FUN_00414f40 */

void FUN_00414f40(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x20);
  (*(code *)PTR_guard_check_icall_0041b28c)(*(int **)(param_1 + 0xc));
  (*pcVar1)();
  return;
}



/* Function: FUN_00414f70 */

int FUN_00414f70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0040584d(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x24);
      (*(code *)PTR_guard_check_icall_0041b28c)(1);
      (*pcVar1)();
    }
    if (DAT_0041a558 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0041a558 + 8);
      (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00414fd0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00414fd0(int *param_1,int *param_2,undefined4 *param_3)

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
  piStack_24 = (int *)0x414ff3;
  iVar1 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if (iVar1 == 0) {
    piStack_24 = (int *)0x415001;
    iVar1 = FUN_004057f2(extraout_ECX,(int *)&DAT_004029c4);
    if (iVar1 == 0) {
      uVar5 = 0x80004002;
      goto LAB_0041502e;
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
  uStack_28 = 0x41502c;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x41502e;
  (*pcVar4)();
LAB_0041502e:
  *(undefined4 *)((int)puVar3 + -4) = 0x415035;
  return uVar5;
}



/* Function: FUN_00415050 */

undefined4 * FUN_00415050(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041759b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_00416434(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_004014c4;
    puVar3[2] = 1;
    puVar2 = PTR_FUN_004014c8;
    local_8 = 1;
    local_18 = puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3);
    (*(code *)puVar2)();
    local_14 = puVar3;
    FUN_004059d3((int *)&local_18);
    puVar3[4] = *(undefined4 *)param_1;
    local_8 = 2;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_8 = 0xffffffff;
    local_18 = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0041a558 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
        (*pcVar1)();
        puVar4 = local_18;
      }
    }
  }
  FUN_004059d3((int *)&local_14);
  ExceptionList = local_10;
  return puVar4;
}



/* Function: FUN_00415160 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT FUN_00415160(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  HRESULT HVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x41516c;
  *param_4 = 0;
  if (param_2 == 0) {
    local_14[0] = (undefined4 *)0x0;
    HVar2 = FUN_004151d0(local_14);
    if (-1 < HVar2) {
      local_8 = 0;
      pcVar1 = *(code **)*local_14[0];
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],param_3,param_4);
      HVar2 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  else {
    HVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return HVar2;
}



/* Function: FUN_004151d0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT __fastcall FUN_004151d0(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  HRESULT HVar4;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4151dc;
  *param_1 = 0;
  puVar3 = (undefined4 *)FUN_00416434(0x10);
  piVar2 = DAT_0041a558;
  if (puVar3 == (undefined4 *)0x0) {
    HVar4 = -0x7ff8fff2;
  }
  else {
    local_8 = 0;
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_00401518;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0041b28c)(piVar2);
      (*pcVar1)();
    }
    *puVar3 = &PTR_FUN_004014f0;
    puVar3[3] = (LPVOID)0x0;
    local_8 = 0xffffffff;
    local_14[0] = puVar3;
    HVar4 = CoCreateInstance((IID *)&DAT_00401d3c,(LPUNKNOWN)0x0,1,(IID *)&DAT_004029c4,
                             (LPVOID *)(puVar3 + 3));
    if (-1 < HVar4) {
      local_8 = 3;
      pcVar1 = *(code **)*puVar3;
      (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,&DAT_00401da4,param_1);
      HVar4 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  return HVar4;
}



/* Function: FUN_00415290 */

void FUN_00415290(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0xc);
  (*(code *)PTR_guard_check_icall_0041b28c)(*(int **)(param_1 + 0xc),param_2,param_3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004152c0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_004152c0(int *param_1,int *param_2,undefined4 *param_3)

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
  piStack_24 = (int *)0x4152e3;
  iVar1 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if (iVar1 == 0) {
    piStack_24 = (int *)0x4152f1;
    iVar1 = FUN_004057f2(extraout_ECX,(int *)&DAT_004029f4);
    if (iVar1 == 0) {
      uVar5 = 0x80004002;
      goto LAB_0041531e;
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
  uStack_28 = 0x41531c;
  (*(code *)PTR_guard_check_icall_0041b28c)();
  puVar3 = puVar2 + -1;
  puVar2[-1] = 0x41531e;
  (*pcVar4)();
LAB_0041531e:
  *(undefined4 *)((int)puVar3 + -4) = 0x415325;
  return uVar5;
}



/* Function: FUN_00415340 */

undefined4 * FUN_00415340(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041759b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_00416434(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_00401568;
    puVar3[2] = 1;
    puVar2 = PTR_FUN_0040156c;
    local_8 = 1;
    local_18 = puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3);
    (*(code *)puVar2)();
    local_14 = puVar3;
    FUN_004059d3((int *)&local_18);
    puVar3[4] = *(undefined4 *)param_1;
    local_8 = 2;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_8 = 0xffffffff;
    local_18 = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0041a558 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
        (*pcVar1)();
        puVar4 = local_18;
      }
    }
  }
  FUN_004059d3((int *)&local_14);
  ExceptionList = local_10;
  return puVar4;
}



/* Function: FUN_00415450 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT FUN_00415450(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  HRESULT HVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x41545c;
  *param_4 = 0;
  if (param_2 == 0) {
    local_14[0] = (undefined4 *)0x0;
    HVar2 = FUN_004154c0(local_14);
    if (-1 < HVar2) {
      local_8 = 0;
      pcVar1 = *(code **)*local_14[0];
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],param_3,param_4);
      HVar2 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  else {
    HVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return HVar2;
}



/* Function: FUN_004154c0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT __fastcall FUN_004154c0(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  HRESULT HVar4;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4154cc;
  *param_1 = 0;
  puVar3 = (undefined4 *)FUN_00416434(0x10);
  piVar2 = DAT_0041a558;
  if (puVar3 == (undefined4 *)0x0) {
    HVar4 = -0x7ff8fff2;
  }
  else {
    local_8 = 0;
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_00401540;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0041b28c)(piVar2);
      (*pcVar1)();
    }
    *puVar3 = &PTR_FUN_00401580;
    puVar3[3] = (LPVOID)0x0;
    local_8 = 0xffffffff;
    local_14[0] = puVar3;
    HVar4 = CoCreateInstance((IID *)&DAT_004029e4,(LPUNKNOWN)0x0,1,(IID *)&DAT_004029f4,
                             (LPVOID *)(puVar3 + 3));
    if (-1 < HVar4) {
      local_8 = 3;
      pcVar1 = *(code **)*puVar3;
      (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,&DAT_00401da4,param_1);
      HVar4 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  return HVar4;
}



/* Function: FUN_0041557e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

HRESULT __fastcall FUN_0041557e(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  HRESULT HVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int unaff_retaddr;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar7 = (undefined4 *)auStack_20;
  piVar1 = (int *)(param_1 + 0x20);
  local_8 = 0;
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    *piVar1 = 0;
    pcVar3 = *(code **)(*piVar2 + 8);
    puVar6 = &uStack_28;
    uStack_28 = 0x4155a8;
    piStack_24 = piVar2;
    (*(code *)PTR_guard_check_icall_0041b28c)();
    puVar7 = puVar6 + -1;
    puVar6[-1] = 0x4155aa;
    (*pcVar3)();
  }
  *(int **)((int)puVar7 + -4) = piVar1;
  *(undefined4 **)((int)puVar7 + -8) = &DAT_00402abc;
  *(undefined4 *)((int)puVar7 + -0xc) = 1;
  *(undefined4 *)((int)puVar7 + -0x10) = 0;
  *(undefined4 **)((int)puVar7 + -0x14) = &DAT_00402abc;
  puVar8 = (undefined1 *)((int)puVar7 + -0x18);
  *(undefined4 *)((int)puVar7 + -0x18) = 0x4155bc;
  HVar5 = CoCreateInstance(*(IID **)((int)puVar7 + -0x14),*(LPUNKNOWN *)((int)puVar7 + -0x10),
                           *(DWORD *)((int)puVar7 + -0xc),*(IID **)((int)puVar7 + -8),
                           *(LPVOID **)((int)puVar7 + -4));
  if (HVar5 < 0) {
    *(HRESULT *)(puVar8 + -4) = HVar5;
    *(char **)(puVar8 + -8) = "onecoreuap\\shell\\pickerhost\\exe\\firewalluxbroker.cpp";
    *(undefined4 *)(puVar8 + -0xc) = 0x11;
    iVar4 = *(int *)(puVar8 + -0xc);
    *(undefined4 *)(puVar8 + -0xc) = 0x4155d3;
    FUN_00407f3a(unaff_retaddr,iVar4,*(int *)(puVar8 + -8),*(uint *)(puVar8 + -4));
  }
  else {
    HVar5 = 0;
  }
  *(undefined4 *)(puVar8 + -4) = 0x4155de;
  return HVar5;
}



/* Function: FUN_004155f0 */

uint FUN_004155f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int unaff_retaddr;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x20) + 0x18);
  (*(code *)PTR_guard_check_icall_0041b28c)(*(int **)(param_1 + 0x20),param_2);
  uVar2 = (*pcVar1)();
  if ((int)uVar2 < 0) {
    FUN_00407f3a(unaff_retaddr,0x17,0x402a04,uVar2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00415637 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

HRESULT __fastcall FUN_00415637(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  HRESULT HVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int unaff_retaddr;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar7 = (undefined4 *)auStack_20;
  piVar1 = (int *)(param_1 + 0x20);
  local_8 = 0;
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    *piVar1 = 0;
    pcVar3 = *(code **)(*piVar2 + 8);
    puVar6 = &uStack_28;
    uStack_28 = 0x415661;
    piStack_24 = piVar2;
    (*(code *)PTR_guard_check_icall_0041b28c)();
    puVar7 = puVar6 + -1;
    puVar6[-1] = 0x415663;
    (*pcVar3)();
  }
  *(int **)((int)puVar7 + -4) = piVar1;
  *(undefined4 **)((int)puVar7 + -8) = &DAT_00402acc;
  *(undefined4 *)((int)puVar7 + -0xc) = 1;
  *(undefined4 *)((int)puVar7 + -0x10) = 0;
  *(undefined4 **)((int)puVar7 + -0x14) = &DAT_00402acc;
  puVar8 = (undefined1 *)((int)puVar7 + -0x18);
  *(undefined4 *)((int)puVar7 + -0x18) = 0x415675;
  HVar5 = CoCreateInstance(*(IID **)((int)puVar7 + -0x14),*(LPUNKNOWN *)((int)puVar7 + -0x10),
                           *(DWORD *)((int)puVar7 + -0xc),*(IID **)((int)puVar7 + -8),
                           *(LPVOID **)((int)puVar7 + -4));
  if (HVar5 < 0) {
    *(HRESULT *)(puVar8 + -4) = HVar5;
    *(char **)(puVar8 + -8) = "onecoreuap\\shell\\pickerhost\\exe\\firewalluxbroker.cpp";
    *(undefined4 *)(puVar8 + -0xc) = 0x25;
    iVar4 = *(int *)(puVar8 + -0xc);
    *(undefined4 *)(puVar8 + -0xc) = 0x41568c;
    FUN_00407f3a(unaff_retaddr,iVar4,*(int *)(puVar8 + -8),*(uint *)(puVar8 + -4));
  }
  else {
    HVar5 = 0;
  }
  *(undefined4 *)(puVar8 + -4) = 0x415697;
  return HVar5;
}



/* Function: FUN_004156b0 */

uint FUN_004156b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  int unaff_retaddr;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x20) + 0x18);
  (*(code *)PTR_guard_check_icall_0041b28c)(*(int **)(param_1 + 0x20),param_2,param_3);
  uVar2 = (*pcVar1)();
  if ((int)uVar2 < 0) {
    FUN_00407f3a(unaff_retaddr,0x2b,0x402a04,uVar2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00415700 */

undefined4 FUN_00415700(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_3 = 0;
  *param_2 = 0;
  puVar1 = (undefined4 *)CoTaskMemAlloc(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    *puVar1 = DAT_00402acc;
    puVar1[1] = DAT_00402ad0;
    puVar1[2] = DAT_00402ad4;
    puVar1[3] = DAT_00402ad8;
    puVar1[4] = DAT_00402670;
    puVar1[5] = DAT_00402674;
    puVar1[6] = DAT_00402678;
    puVar1[7] = DAT_0040267c;
    *param_2 = 2;
    *param_3 = puVar1;
  }
  return uVar2;
}



/* Function: FUN_00415760 */

int FUN_00415760(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  piVar1 = param_1 + 7;
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      iVar5 = FUN_0040584d((int *)(iVar3 * 2 + 0xc));
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
      pcVar2 = *(code **)(*param_1 + 0x1c);
      (*(code *)PTR_guard_check_icall_0041b28c)(1);
      (*pcVar2)();
    }
    if (DAT_0041a558 != (int *)0x0) {
      pcVar2 = *(code **)(*DAT_0041a558 + 8);
      (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
      (*pcVar2)();
    }
  }
  return iVar5;
}



/* Function: FUN_004157f0 */

void FUN_004157f0(int *param_1,int *param_2,int *param_3)

{
  FUN_00415aa7(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00415810 */

undefined4 FUN_00415810(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_3 = 0;
  *param_2 = 0;
  puVar1 = (undefined4 *)CoTaskMemAlloc(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    *puVar1 = DAT_00402abc;
    puVar1[1] = DAT_00402ac0;
    puVar1[2] = DAT_00402ac4;
    puVar1[3] = DAT_00402ac8;
    puVar1[4] = DAT_00402670;
    puVar1[5] = DAT_00402674;
    puVar1[6] = DAT_00402678;
    puVar1[7] = DAT_0040267c;
    *param_2 = 2;
    *param_3 = puVar1;
  }
  return uVar2;
}



/* Function: FUN_00415870 */

void FUN_00415870(int *param_1,int *param_2,int *param_3)

{
  FUN_00415b64(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00415890 */

undefined4 * FUN_00415890(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041759b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_00416434(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_0040160c;
    puVar3[2] = 1;
    puVar2 = PTR_FUN_00401610;
    local_8 = 1;
    local_18 = puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3);
    (*(code *)puVar2)();
    local_14 = puVar3;
    FUN_004059d3((int *)&local_18);
    puVar3[4] = *(undefined4 *)param_1;
    local_8 = 2;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_8 = 0xffffffff;
    local_18 = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0041a558 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
        (*pcVar1)();
        puVar4 = local_18;
      }
    }
  }
  FUN_004059d3((int *)&local_14);
  ExceptionList = local_10;
  return puVar4;
}



/* Function: FUN_004159a0 */

undefined4 * FUN_004159a0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041759b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_00416434(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_00401648;
    puVar3[2] = 1;
    puVar2 = PTR_FUN_0040164c;
    local_8 = 1;
    local_18 = puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3);
    (*(code *)puVar2)();
    local_14 = puVar3;
    FUN_004059d3((int *)&local_18);
    puVar3[4] = *(undefined4 *)param_1;
    local_8 = 2;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_0041b28c)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_8 = 0xffffffff;
    local_18 = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0041a558 + 4);
        (*(code *)PTR_guard_check_icall_0041b28c)(DAT_0041a558);
        (*pcVar1)();
        puVar4 = local_18;
      }
    }
  }
  FUN_004059d3((int *)&local_14);
  ExceptionList = local_10;
  return puVar4;
}



/* Function: FUN_00415aa7 */

int __fastcall FUN_00415aa7(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417963;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = 0;
  *param_3 = 0;
  iVar3 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if ((iVar3 == 0) && (iVar3 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402610), iVar3 == 0)) {
    iVar3 = FUN_004057f2(extraout_ECX_00,&DAT_00402acc);
    if (iVar3 == 0) {
      iVar4 = FUN_00411d9a(param_1 + 1,extraout_ECX_01,param_3);
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return iVar4;
      }
    }
    else {
      *param_3 = (int)param_1;
    }
    pcVar1 = *(code **)(*(int *)*param_3 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)((int *)*param_3);
    (*pcVar1)();
  }
  else {
    *param_3 = (int)param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1,uVar2);
    (*pcVar1)();
    iVar4 = 0;
  }
  ExceptionList = local_10;
  return iVar4;
}



/* Function: FUN_00415b64 */

int __fastcall FUN_00415b64(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00417963;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = 0;
  *param_3 = 0;
  iVar3 = FUN_004057f2(param_2,(int *)&DAT_00401da4);
  if ((iVar3 == 0) && (iVar3 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402610), iVar3 == 0)) {
    iVar3 = FUN_004057f2(extraout_ECX_00,&DAT_00402abc);
    if (iVar3 == 0) {
      iVar4 = FUN_00411d9a(param_1 + 1,extraout_ECX_01,param_3);
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return iVar4;
      }
    }
    else {
      *param_3 = (int)param_1;
    }
    pcVar1 = *(code **)(*(int *)*param_3 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)((int *)*param_3);
    (*pcVar1)();
  }
  else {
    *param_3 = (int)param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(param_1,uVar2);
    (*pcVar1)();
    iVar4 = 0;
  }
  ExceptionList = local_10;
  return iVar4;
}



/* Function: FUN_00415c30 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT FUN_00415c30(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  HRESULT HVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x415c3c;
  *param_4 = 0;
  if (param_2 == 0) {
    local_14[0] = (undefined4 *)0x0;
    HVar2 = FUN_00415d10((int *)local_14);
    if (-1 < HVar2) {
      local_8 = 0;
      pcVar1 = *(code **)*local_14[0];
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],param_3,param_4);
      HVar2 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  else {
    HVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return HVar2;
}



/* Function: FUN_00415ca0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

HRESULT FUN_00415ca0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  HRESULT HVar2;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x415cac;
  *param_4 = 0;
  if (param_2 == 0) {
    local_14[0] = (undefined4 *)0x0;
    HVar2 = FUN_00415d72((int *)local_14);
    if (-1 < HVar2) {
      local_8 = 0;
      pcVar1 = *(code **)*local_14[0];
      (*(code *)PTR_guard_check_icall_0041b28c)(local_14[0],param_3,param_4);
      HVar2 = (*pcVar1)();
    }
    FUN_004059d3((int *)local_14);
  }
  else {
    HVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return HVar2;
}



/* Function: FUN_00415d10 */

HRESULT __fastcall FUN_00415d10(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  HRESULT HVar3;
  int *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_00416434(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    HVar3 = -0x7ff8fff2;
  }
  else {
    piVar2 = FUN_00415dd4(puVar1);
    local_8 = piVar2;
    HVar3 = FUN_00415637((int)piVar2);
    if (-1 < HVar3) {
      HVar3 = FUN_00415f54(&local_8,param_1);
    }
    if (piVar2 != (int *)0x0) {
      FUN_00415760(piVar2);
    }
  }
  return HVar3;
}



/* Function: FUN_00415d72 */

HRESULT __fastcall FUN_00415d72(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  HRESULT HVar3;
  int *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_00416434(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    HVar3 = -0x7ff8fff2;
  }
  else {
    piVar2 = FUN_00415e73(puVar1);
    local_8 = piVar2;
    HVar3 = FUN_0041557e((int)piVar2);
    if (-1 < HVar3) {
      HVar3 = FUN_00416000(&local_8,param_1);
    }
    if (piVar2 != (int *)0x0) {
      FUN_00415760(piVar2);
    }
  }
  return HVar3;
}



/* Function: FUN_00415dd4 */

undefined4 * __fastcall FUN_00415dd4(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417940;
  local_10 = ExceptionList;
  uVar4 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = param_1 + 2;
  FUN_00406299(puVar1);
  piVar3 = DAT_0041a558;
  param_1[7] = 1;
  *param_1 = &PTR_FUN_004015c8;
  param_1[1] = &PTR_FUN_00401660;
  *puVar1 = &PTR_FUN_004015e8;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar3,uVar4);
    (*pcVar2)();
  }
  *param_1 = &PTR_FUN_00401594;
  param_1[8] = 0;
  param_1[1] = &PTR_FUN_00401660;
  *puVar1 = &PTR_FUN_004015e8;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00415e73 */

undefined4 * __fastcall FUN_00415e73(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417940;
  local_10 = ExceptionList;
  uVar4 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = param_1 + 2;
  FUN_00406299(puVar1);
  piVar3 = DAT_0041a558;
  param_1[7] = 1;
  *param_1 = &PTR_FUN_004016b4;
  param_1[1] = &PTR_FUN_00401638;
  *puVar1 = &PTR_FUN_00401670;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_0041b28c)(piVar3,uVar4);
    (*pcVar2)();
  }
  *param_1 = &PTR_FUN_00401694;
  param_1[8] = 0;
  param_1[1] = &PTR_FUN_00401638;
  *puVar1 = &PTR_FUN_00401670;
  ExceptionList = local_10;
  return param_1;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: void * __thiscall Concurrency::details::WorkQueue::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::WorkQueue::_scalar_deleting_destructor_(WorkQueue *this,uint param_1)

{
  FUN_004059d3((int *)(this + 0x20));
  FUN_00411737((int)this);
  if ((param_1 & 1) != 0) {
    FUN_00416491(this);
  }
  return this;
}



/* Function: FUN_00415f54 */

int __thiscall FUN_00415f54(void *this,int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417940;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  piVar5 = *this;
  iVar4 = 0;
  local_8 = 0;
  *param_1 = 0;
  iVar3 = FUN_004057f2((int *)&DAT_00401da4,(int *)&DAT_00401da4);
  if ((iVar3 == 0) && (iVar3 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402610), iVar3 == 0)) {
    iVar3 = FUN_004057f2(extraout_ECX_00,&DAT_00402acc);
    if (iVar3 == 0) {
      iVar4 = FUN_00411d9a(piVar5 + 1,extraout_ECX_01,param_1);
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return iVar4;
      }
    }
    else {
      *param_1 = (int)piVar5;
    }
    piVar5 = (int *)*param_1;
    iVar3 = *piVar5;
  }
  else {
    *param_1 = (int)piVar5;
    iVar3 = *piVar5;
  }
  pcVar1 = *(code **)(iVar3 + 4);
  (*(code *)PTR_guard_check_icall_0041b28c)(piVar5,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return iVar4;
}



/* Function: FUN_00416000 */

int __thiscall FUN_00416000(void *this,int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417940;
  local_10 = ExceptionList;
  uVar2 = DAT_0041a100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  piVar5 = *this;
  iVar4 = 0;
  local_8 = 0;
  *param_1 = 0;
  iVar3 = FUN_004057f2((int *)&DAT_00401da4,(int *)&DAT_00401da4);
  if ((iVar3 == 0) && (iVar3 = FUN_004057f2(extraout_ECX,(int *)&DAT_00402610), iVar3 == 0)) {
    iVar3 = FUN_004057f2(extraout_ECX_00,&DAT_00402abc);
    if (iVar3 == 0) {
      iVar4 = FUN_00411d9a(piVar5 + 1,extraout_ECX_01,param_1);
      if (iVar4 < 0) {
        ExceptionList = local_10;
        return iVar4;
      }
    }
    else {
      *param_1 = (int)piVar5;
    }
    piVar5 = (int *)*param_1;
    iVar3 = *piVar5;
  }
  else {
    *param_1 = (int)piVar5;
    iVar3 = *piVar5;
  }
  pcVar1 = *(code **)(iVar3 + 4);
  (*(code *)PTR_guard_check_icall_0041b28c)(piVar5,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return iVar4;
}



/* Function: FUN_004160b0 */

void FUN_004160b0(int param_1,int *param_2,int *param_3)

{
  FUN_00415870((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_004160c0 */

void FUN_004160c0(int param_1,int *param_2,int *param_3)

{
  FUN_004157f0((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_004160d0 */

void FUN_004160d0(int param_1)

{
  FUN_00415760((int *)(param_1 + -4));
  return;
}



/* Function: FUN_004160e0 */

void FUN_004160e0(int param_1,int *param_2,int *param_3)

{
  FUN_004157f0((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_004160f0 */

void FUN_004160f0(int param_1)

{
  FUN_00415760((int *)(param_1 + -8));
  return;
}



/* Function: FUN_00416100 */

void FUN_00416100(int param_1,int *param_2,int *param_3)

{
  FUN_00415870((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_00416110 */

void FUN_00416110(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_00402adc,DelayLoadFailureHook_exref,param_2,DAT_00402adc);
  return;
}



/* Function: FUN_00416150 */

undefined4 FUN_00416150(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00416175();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00416181();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00416175 */

undefined * FUN_00416175(void)

{
  return &DAT_0041a1e0;
}



/* Function: FUN_00416181 */

undefined * FUN_00416181(void)

{
  return &DAT_0041a1e8;
}



/* Function: FUN_00416190 */

undefined4 FUN_00416190(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00416175();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00416181();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_004161c0 */

void FUN_004161c0(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(2);
  uVar3 = FUN_0041683d();
  o__set_fmode(uVar3);
  uVar3 = FUN_00416834();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_00416aec();
    FUN_00416722(FUN_00416b20);
    uVar3 = FUN_0041682a();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_00416849();
      guard_check_icall();
      guard_check_icall();
      FUN_00416864();
      uVar3 = FUN_00416834();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_0041685b();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_00416834();
      iVar5 = thunk_FUN_00416834();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_004168c6();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00416260 */

undefined4 FUN_00416260(void)

{
  FUN_0041688b();
  return 0;
}



/* Function: FUN_00416270 */

void FUN_00416270(void)

{
  undefined4 uVar1;
  
  FUN_00416a6e();
  uVar1 = FUN_00416834();
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
  WORD WVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int unaff_ESI;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_24;
  void *local_14;
  
  uVar4 = ___scrt_initialize_crt(1);
  if ((char)uVar4 != '\0') {
    bVar2 = false;
    uVar4 = ___scrt_acquire_startup_lock();
    if (DAT_0041a1f0 != 1) {
      if (DAT_0041a1f0 == 0) {
        DAT_0041a1f0 = 1;
        iVar5 = initterm_e(&DAT_00401908,&DAT_0040191c);
        if (iVar5 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_004018c8,&DAT_00401904);
        DAT_0041a1f0 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar4);
      piVar6 = (int *)FUN_004168ae();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        pcVar1 = (code *)*piVar6;
        (*(code *)PTR_guard_check_icall_0041b28c)(0,2,0);
        (*pcVar1)();
      }
      piVar6 = (int *)FUN_004168ba();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar6);
      }
      WVar3 = FUN_004169e3();
      uVar8 = (uint)WVar3;
      uVar4 = o__get_wide_winmain_command_line();
      uVar10 = 0;
      uVar9 = 0x400000;
      unaff_ESI = FUN_00413100();
      uVar7 = FUN_00416a26();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          o__cexit(uVar9,uVar10,uVar4,uVar8);
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_004163f5;
    }
  }
  uVar9 = 7;
  FUN_004168c6();
LAB_004163f5:
  o_exit(unaff_ESI,uVar9);
  o__exit(local_24);
  pcVar1 = (code *)swi(3);
  iVar5 = (*pcVar1)();
  return iVar5;
}



/* Function: entry */

void entry(void)

{
  ___security_init_cookie();
  __scrt_common_main_seh();
  return;
}



/* Function: FUN_00416420 */

void __fastcall FUN_00416420(int param_1)

{
  if (param_1 == DAT_0041a100) {
    return;
  }
  FUN_00416c27();
  return;
}



/* Function: FUN_00416434 */

void FUN_00416434(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00417c6a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00416d29(param_1);
  FUN_00416476();
  return;
}



/* Function: Catch_All@0041646e */

undefined * Catch_All_0041646e(void)

{
  return &DAT_00416474;
}



/* Function: FUN_00416476 */

void FUN_00416476(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_00416491 */

void __cdecl FUN_00416491(undefined4 param_1)

{
  o_free(param_1);
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
      if (DAT_0041a1f4 != 0) {
        uVar3 = DAT_0041a1f4;
        uVar1 = DAT_0041a1f4;
      }
      DAT_0041a1f4 = uVar1;
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
    DAT_0041a211 = 1;
  }
  FUN_00416d6c();
  cVar1 = FUN_0041685b();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_0041685b();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_0041685b();
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
  
  if (DAT_0041a210 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_004168c6();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_0041a1f8 = 0xffffffff;
    _DAT_0041a1fc = 0xffffffff;
    _DAT_0041a200 = 0xffffffff;
    _DAT_0041a204 = 0xffffffff;
    _DAT_0041a208 = 0xffffffff;
    _DAT_0041a20c = 0xffffffff;
LAB_004165e3:
    DAT_0041a210 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_0041a1f8);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_0041a204);
      if (uVar3 == 0) goto LAB_004165e3;
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
  iVar1 = DAT_0041a1f4;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0041a1f4 = 0;
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
  if ((DAT_0041a211 == '\0') || (param_2 == '\0')) {
    FUN_0041685b();
    FUN_0041685b();
  }
  return 1;
}



/* Function: FUN_004166ec */

undefined4 __cdecl FUN_004166ec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0041a1f8 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_0041a1f8,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_00416722 */

int __cdecl FUN_00416722(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004166ec(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_00416740 */

undefined4 * __thiscall FUN_00416740(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_00416773 */

void FUN_00416773(int param_1)

{
  FUN_00416434(param_1);
  return;
}



/* Function: FUN_00416784 */

uint FUN_00416784(void)

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
  if ((DAT_0041a100 == 0xbb40e64e) || ((DAT_0041a100 & 0xffff0000) == 0)) {
    DAT_0041a100 = FUN_00416784();
    if (DAT_0041a100 == 0xbb40e64e) {
      DAT_0041a100 = 0xbb40e64f;
    }
    else if ((DAT_0041a100 & 0xffff0000) == 0) {
      DAT_0041a100 = DAT_0041a100 | (DAT_0041a100 | 0x4711) << 0x10;
    }
  }
  DAT_0041a140 = ~DAT_0041a100;
  return;
}



/* Function: FUN_0041682a */

undefined4 FUN_0041682a(void)

{
  return 1;
}



/* Function: FUN_00416834 */

undefined4 FUN_00416834(void)

{
  return 0;
}



/* Function: FUN_0041683d */

undefined4 FUN_0041683d(void)

{
  return 0x4000;
}



/* Function: FUN_00416849 */

void FUN_00416849(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0041a218);
  return;
}



/* Function: FUN_0041685b */

undefined1 FUN_0041685b(void)

{
  return 1;
}



/* Function: FUN_00416864 */

void FUN_00416864(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_004168c6();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041688b */

void FUN_0041688b(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00416175();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00416181();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_004168ae */

undefined * FUN_004168ae(void)

{
  return &DAT_0041a8ec;
}



/* Function: FUN_004168ba */

undefined * FUN_004168ba(void)

{
  return &DAT_0041a8e8;
}



/* Function: FUN_004168c6 */

void FUN_004168c6(void)

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
  FUN_00416ade();
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
    FUN_00416ade();
  }
  return;
}



/* Function: FUN_004169e3 */

WORD FUN_004169e3(void)

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



/* Function: thunk_FUN_00416834 */

undefined4 thunk_FUN_00416834(void)

{
  return 0;
}



/* Function: FUN_00416a26 */

uint FUN_00416a26(void)

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



/* Function: FUN_00416a6e */

void FUN_00416a6e(void)

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



/* Function: FUN_00416ade */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416ade(void)

{
  _DAT_0041a220 = 0;
  return;
}



/* Function: FUN_00416aec */

/* WARNING: Removing unreachable block (ram,0x00416afe) */
/* WARNING: Removing unreachable block (ram,0x00416aff) */
/* WARNING: Removing unreachable block (ram,0x00416b05) */
/* WARNING: Removing unreachable block (ram,0x00416b0f) */
/* WARNING: Removing unreachable block (ram,0x00416b16) */

void FUN_00416aec(void)

{
  return;
}



/* Function: FUN_00416b20 */

/* WARNING: Removing unreachable block (ram,0x00416b32) */
/* WARNING: Removing unreachable block (ram,0x00416b33) */
/* WARNING: Removing unreachable block (ram,0x00416b39) */
/* WARNING: Removing unreachable block (ram,0x00416b43) */
/* WARNING: Removing unreachable block (ram,0x00416b4a) */

void FUN_00416b20(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041a100 ^ (uint)&param_2;
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
  
  iVar1 = FUN_004172d2(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_0041a100,FUN_00416420,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00416bf7 */

void __cdecl FUN_00416bf7(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00416c27 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416c27(void)

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
  _DAT_0041a320 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0041a328 = (undefined4)uVar9;
  _DAT_0041a338 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041a33c = &stack0x00000004;
  _DAT_0041a278 = 0x10001;
  _DAT_0041a228 = 0xc0000409;
  _DAT_0041a22c = 1;
  _DAT_0041a238 = 1;
  DAT_0041a23c = 2;
  _DAT_0041a234 = unaff_retaddr;
  _DAT_0041a304 = in_GS;
  _DAT_0041a308 = in_FS;
  _DAT_0041a30c = in_ES;
  _DAT_0041a310 = in_DS;
  _DAT_0041a314 = unaff_EDI;
  _DAT_0041a318 = unaff_ESI;
  _DAT_0041a31c = unaff_EBX;
  _DAT_0041a324 = uVar3;
  _DAT_0041a32c = unaff_EBP;
  DAT_0041a330 = unaff_retaddr;
  _DAT_0041a334 = in_CS;
  _DAT_0041a340 = in_SS;
  FUN_00416bf7((_EXCEPTION_POINTERS *)&PTR_DAT_00401008);
  return;
}



/* Function: FUN_00416d29 */

void __cdecl FUN_00416d29(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  do {
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x416d45;
    iVar1 = o_malloc();
    if (iVar1 != 0) {
      return;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x416d38;
    iVar1 = o__callnewh();
  } while (iVar1 != 0);
  if (param_1 != -1) {
    FUN_00417052();
    return;
  }
  puStack_8 = &stack0xfffffffc;
  FUN_00416fd3(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_004183f4);
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_00416d6c */

/* WARNING: Removing unreachable block (ram,0x00416ddd) */
/* WARNING: Removing unreachable block (ram,0x00416da1) */
/* WARNING: Removing unreachable block (ram,0x00416e55) */

undefined4 FUN_00416d6c(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_0041a544 = 0;
  DAT_0041a144 = DAT_0041a144 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_0041a144;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_0041a548 = DAT_0041a548 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_0041a548 = DAT_0041a548 | 2;
      }
    }
    DAT_0041a544 = 1;
    uVar5 = DAT_0041a144 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_0041a144 | 6;
      DAT_0041a544 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0041a544 = 3;
        uVar5 = DAT_0041a144 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_0041a544 = 5;
          uVar5 = DAT_0041a144 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_0041a144 = DAT_0041a144 | 0x6e;
            DAT_0041a544 = 6;
            uVar5 = DAT_0041a144;
          }
        }
      }
    }
  }
  DAT_0041a144 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0041a148 != 0;
}



/* Function: FUN_00416f60 */

exception * __thiscall FUN_00416f60(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_00416f83 */

undefined4 * __fastcall FUN_00416f83(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* Function: FUN_00416fb0 */

exception * __thiscall FUN_00416fb0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_00416fd3 */

undefined4 * __fastcall FUN_00416fd3(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* Function: FUN_00417000 */

void __fastcall FUN_00417000(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_00417020 */

undefined4 * __thiscall FUN_00417020(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00417052 */

void FUN_00417052(void)

{
  undefined4 local_10 [3];
  
  FUN_00416f83(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_004183bc);
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041709c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x004170a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004170b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x004170c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: Unwind@004170e0 */

void Unwind_004170e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x004170e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004170ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x004170f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041711c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041714c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_wide_winmain_command_line */

void __cdecl o__get_wide_winmain_command_line(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_wide_winmain_command_line();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041717c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x004171f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041720c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x00417224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00417230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041723c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00417248. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: FUN_00417254 */

int __cdecl
FUN_00417254(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_00416175();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0041728e */

void __cdecl
FUN_0041728e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00417254(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: DelayLoad_Ordinal_167 */

void DelayLoad_Ordinal_167(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00416110(&ImgDelayDescr_004184b0,&Ordinal_167_exref);
                    /* WARNING: Could not recover jumptable at 0x004172ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_004172d2 */

int __cdecl FUN_004172d2(int param_1)

{
  uint uVar1;
  
  if ((DAT_0041a544 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: FUN_0041736b */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0041736b(void)

{
  uint unaff_EBP;
  
  FUN_00416420(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041a100 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041a100 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041a100 ^ (uint)&param_1;
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
  *(uint *)((int)puVar2 + iVar1 + -0x1c) = DAT_0041a100 ^ (uint)puVar2;
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
  
                    /* WARNING: Could not recover jumptable at 0x00417531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041753d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00417549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@004177d8 */

void Unwind_004177d8(void)

{
  int unaff_EBP;
  
  FUN_0040e818((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@004177e0 */

void Unwind_004177e0(void)

{
  int unaff_EBP;
  
  FUN_0040e818((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0041789d */

void Unwind_0041789d(void)

{
  int unaff_EBP;
  
  FUN_004115bc(*(int *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* Function: Unwind@004178d0 */

void Unwind_004178d0(void)

{
  int unaff_EBP;
  
  FUN_0040c4f4(unaff_EBP + -0x106c);
  return;
}



/* Function: Unwind@00417910 */

void Unwind_00417910(void)

{
  int unaff_EBP;
  
  FUN_0040ca78(unaff_EBP + -0x78);
  return;
}



/* Function: Unwind@004179cc */

void Unwind_004179cc(void)

{
  int unaff_EBP;
  
  FUN_004059d3((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@004179d4 */

void Unwind_004179d4(void)

{
  int unaff_EBP;
  
  FUN_004059d3((int *)(unaff_EBP + -0x30));
  return;
}



/* Function: Unwind@004179dc */

void Unwind_004179dc(void)

{
  int unaff_EBP;
  
  FUN_004059d3((int *)(unaff_EBP + -0x44));
  return;
}



/* Function: Unwind@004179e4 */

void Unwind_004179e4(void)

{
  int unaff_EBP;
  
  FUN_004059d3((int *)(unaff_EBP + -0x34));
  return;
}



/* Function: Unwind@004179ec */

void Unwind_004179ec(void)

{
  int unaff_EBP;
  
  FUN_004059d3((int *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@004179f4 */

void Unwind_004179f4(void)

{
  int unaff_EBP;
  
  FUN_004059d3((int *)(unaff_EBP + -0x3c));
  return;
}



/* Function: Unwind@004179fc */

void Unwind_004179fc(void)

{
  int unaff_EBP;
  
  FUN_004059d3((int *)(unaff_EBP + -0x38));
  return;
}



/* Function: Unwind@00417a36 */

void Unwind_00417a36(void)

{
  int unaff_EBP;
  
  FUN_004059d3((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@00417afc */

void Unwind_00417afc(void)

{
  int unaff_EBP;
  
  FUN_004059d3((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@00417b36 */

void Unwind_00417b36(void)

{
  int unaff_EBP;
  
  ~CComPtr<>((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@00417b3e */

void Unwind_00417b3e(void)

{
  int unaff_EBP;
  
  ~CComPtr<>((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00417b46 */

void Unwind_00417b46(void)

{
  int unaff_EBP;
  
  ~CComPtr<>((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@00417b4e */

void Unwind_00417b4e(void)

{
  int unaff_EBP;
  
  ~CComPtr<>((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00417ba4 */

void Unwind_00417ba4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    ~CComPtr<>(*(int **)(unaff_EBP + -0x34));
    return;
  }
  return;
}



/* Function: Unwind@00417bbd */

void Unwind_00417bbd(void)

{
  int unaff_EBP;
  
  FUN_0040666d(unaff_EBP + -0x28);
  return;
}



/* Function: FUN_00417c90 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_00417c90(void)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_00417555;
  if (DAT_0041a054 != (int *)0x0) {
    puVar1 = (undefined1 *)FUN_0040f133(DAT_0041a054);
  }
  return puVar1;
}



/* Function: FUN_00417cc0 */

void FUN_00417cc0(void)

{
  FUN_0040eec1((int *)&DAT_0041a158);
  return;
}



/* Function: FUN_00417cd0 */

void FUN_00417cd0(void)

{
  FUN_0040e511(&DAT_0041a7e0);
  return;
}



/* Function: FUN_00417ce0 */

void FUN_00417ce0(void)

{
  FUN_0040e44f(&DAT_0041a184);
  return;
}



/* Function: FUN_00417cf0 */

void FUN_00417cf0(void)

{
  FUN_00414c8a((undefined4 *)&DAT_0041a86c);
  return;
}



/* Function: FUN_00417d00 */

void FUN_00417d00(void)

{
  FUN_00414cb5((undefined4 *)&DAT_0041a8a8);
  return;
}



