/* Function: FUN_00405940 */

void FUN_00405940(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_00421328)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_004059c3 */

void FUN_004059c3(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x2387;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_00405a58 */

uint __thiscall FUN_00405a58(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_00405a8f:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_00405a8f;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_00405a9b */

void __fastcall
FUN_00405a9b(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  FUN_00406c14(param_20,local_18);
  FUN_00406c62(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_00406c14(param_17,local_48);
  FUN_00406c62(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00406c62(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00406c14(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_00406c62(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_00406c62(param_8,local_d8);
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
  FUN_004059c3(param_1,param_2,param_3,(LPCGUID)0x0,0x12,local_128);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00405c64 */

void __fastcall
FUN_00405c64(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  FUN_00406c62(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_00406c14(param_19,local_48);
  FUN_00406c62(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00406c14(param_16,local_78);
  FUN_00406c62(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_00406c62(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_00406c14(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_00406c62(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_00406c62(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_004059c3(param_1,param_2,param_3,(LPCGUID)0x0,0x14,local_148);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00405e65 */

void __fastcall
FUN_00405e65(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 extraout_EDX;
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
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
  FUN_004059c3(param_1,param_2,param_3,(LPCGUID)0x0,5,local_58);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00405edb */

void __fastcall
FUN_00405edb(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,undefined4 *param_5,
            undefined4 param_6)

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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_18 = param_6;
  local_28 = *param_5;
  local_14 = 0;
  local_10 = 4;
  local_c = 0;
  local_24 = 0;
  local_20 = 8;
  local_1c = 0;
  FUN_004059c3(param_1,param_2,param_3,param_4,4,local_48);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00405f46 */

void __fastcall
FUN_00405f46(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  FUN_00406c14(param_23,local_18);
  local_28 = param_22;
  local_38 = param_21;
  local_20 = 1;
  local_30 = 1;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_00406c14(param_20,local_48);
  FUN_00406c62(param_19,local_58);
  local_68 = param_18;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00406c14(param_17,local_78);
  FUN_00406c62(param_16,local_88);
  local_98 = param_15;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_00406c62(param_14,local_a8);
  local_b8 = param_13;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_00406c14(param_12,local_c8);
  local_d8 = param_11;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_00406c62(param_10,local_e8);
  local_f8 = param_9;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_00406c62(param_8,local_108);
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
  FUN_004059c3(param_1,param_2,param_3,(LPCGUID)0x0,0x15,local_158);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00406163 */

void __fastcall
FUN_00406163(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7,void *param_8,undefined4 param_9,void *param_10,
            undefined4 param_11,void *param_12,undefined4 param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,undefined4 param_18,void *param_19,
            void *param_20,void *param_21)

{
  undefined4 extraout_EDX;
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  FUN_00406c14(param_21,local_18);
  FUN_00406c14(param_20,local_28);
  FUN_00406c62(param_19,local_38);
  local_48 = param_18;
  local_44 = 0;
  local_40 = 4;
  local_3c = 0;
  FUN_00406c14(param_17,local_58);
  FUN_00406c62(param_16,local_68);
  local_78 = param_15;
  local_74 = 0;
  local_70 = 4;
  local_6c = 0;
  FUN_00406c62(param_14,local_88);
  local_98 = param_13;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_00406c14(param_12,local_a8);
  local_b8 = param_11;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_00406c62(param_10,local_c8);
  local_d8 = param_9;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_00406c62(param_8,local_e8);
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
  FUN_004059c3(param_1,param_2,param_3,(LPCGUID)0x0,0x13,local_138);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040634e */

void __fastcall
FUN_0040634e(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7,void *param_8,undefined4 param_9,void *param_10,
            undefined4 param_11,void *param_12,undefined4 param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,undefined4 param_18,void *param_19,
            void *param_20,undefined4 param_21,undefined4 param_22,undefined4 param_23,
            undefined4 param_24,undefined4 param_25,undefined4 param_26)

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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  local_44 = 0;
  local_3c = 0;
  local_54 = 0;
  local_4c = 0;
  local_64 = 0;
  local_5c = 0;
  local_18 = param_26;
  local_28 = param_25;
  local_38 = param_24;
  local_48 = param_23;
  local_58 = param_22;
  local_68 = param_21;
  local_10 = 4;
  local_20 = 4;
  local_30 = 4;
  local_40 = 4;
  local_50 = 4;
  local_60 = 4;
  FUN_00406c14(param_20,local_78);
  FUN_00406c62(param_19,local_88);
  local_94 = 0;
  local_8c = 0;
  local_98 = param_18;
  local_90 = 4;
  FUN_00406c14(param_17,local_a8);
  FUN_00406c62(param_16,local_b8);
  local_c8 = param_15;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_00406c62(param_14,local_d8);
  local_e8 = param_13;
  local_e4 = 0;
  local_e0 = 4;
  local_dc = 0;
  FUN_00406c14(param_12,local_f8);
  local_108 = param_11;
  local_104 = 0;
  local_100 = 4;
  local_fc = 0;
  FUN_00406c62(param_10,local_118);
  local_128 = param_9;
  local_124 = 0;
  local_120 = 4;
  local_11c = 0;
  FUN_00406c62(param_8,local_138);
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
  FUN_004059c3(param_1,param_2,param_3,(LPCGUID)0x0,0x18,local_188);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004065ad */

void __fastcall
FUN_004065ad(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  undefined4 extraout_EDX;
  _EVENT_DATA_DESCRIPTOR local_b8 [2];
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_18 = param_13;
  local_28 = param_12;
  local_38 = param_11;
  local_48 = param_10;
  local_58 = param_9;
  local_68 = param_8;
  local_78 = param_7;
  local_88 = param_6;
  local_14 = 0;
  local_98 = *param_5;
  local_10 = 4;
  local_c = 0;
  local_24 = 0;
  local_20 = 4;
  local_1c = 0;
  local_34 = 0;
  local_30 = 4;
  local_2c = 0;
  local_44 = 0;
  local_40 = 4;
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
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  local_94 = 0;
  local_90 = 8;
  local_8c = 0;
  FUN_004059c3(param_1,param_2,param_3,(LPCGUID)0x0,0xb,local_b8);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00406692 */

void __fastcall
FUN_00406692(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  undefined4 extraout_EDX;
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
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
  FUN_004059c3(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,9,local_98);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00406747 */

void __fastcall
FUN_00406747(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 extraout_EDX;
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
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
  FUN_004059c3(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,10,local_a8);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040680f */

void __fastcall
FUN_0040680f(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            void *param_10,undefined4 param_11,void *param_12,void *param_13,void *param_14,
            undefined4 param_15,void *param_16,void *param_17,void *param_18,void *param_19,
            undefined4 param_20,void *param_21,undefined4 param_22)

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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  local_18 = param_22;
  local_10 = 4;
  FUN_00406c62(param_21,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_20;
  local_30 = 4;
  FUN_00406c62(param_19,local_48);
  FUN_00406c62(param_18,local_58);
  FUN_00406c62(param_17,local_68);
  FUN_00406c62(param_16,local_78);
  local_88 = param_15;
  local_84 = 0;
  local_80 = 2;
  local_7c = 0;
  FUN_00406c62(param_14,local_98);
  FUN_00406c62(param_13,local_a8);
  FUN_00406c62(param_12,local_b8);
  local_c8 = param_11;
  local_c4 = 0;
  local_c0 = 2;
  local_bc = 0;
  FUN_00406c62(param_10,local_d8);
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
  FUN_004059c3(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00406a06 */

void __fastcall
FUN_00406a06(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6,void *param_7,undefined4 param_8,void *param_9,undefined4 param_10,
            void *param_11,undefined4 param_12,void *param_13,undefined4 param_14,void *param_15,
            void *param_16,undefined4 param_17,void *param_18,void *param_19)

{
  undefined4 extraout_EDX;
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  FUN_00406c14(param_19,local_18);
  FUN_00406c62(param_18,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_17;
  local_30 = 4;
  FUN_00406c14(param_16,local_48);
  FUN_00406c62(param_15,local_58);
  local_68 = param_14;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00406c62(param_13,local_78);
  local_88 = param_12;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00406c14(param_11,local_98);
  local_a8 = param_10;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_00406c62(param_9,local_b8);
  local_c8 = param_8;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_00406c62(param_7,local_d8);
  local_e8 = param_6;
  local_e4 = 0;
  local_e0 = 4;
  local_dc = 0;
  local_f4 = 0;
  local_f8 = *param_5;
  local_f0 = 8;
  local_ec = 0;
  FUN_004059c3(param_1,param_2,param_3,(LPCGUID)0x0,0x11,local_118);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00406bb3 */

void __fastcall
FUN_00406bb3(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_10 = 8;
  local_14 = 0;
  local_18 = *param_6;
  local_28 = param_5;
  local_c = 0;
  local_24 = 0;
  local_20 = 4;
  local_1c = 0;
  FUN_004059c3(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,4,local_48);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00406c14 */

void __thiscall FUN_00406c14(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = &DAT_00401d18;
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



/* Function: FUN_00406c62 */

void __thiscall FUN_00406c62(void *this,undefined4 *param_1)

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



/* Function: FUN_00406cb0 */

void FUN_00406cb0(void)

{
  DAT_00420588 = FUN_00407f40;
  DAT_00420574 = DebugBreak;
  DAT_00420584 = FUN_00407f80;
  DAT_00420564 = FUN_00408b80;
  DAT_00420554 = FUN_00408c50;
  DAT_0042058c = FUN_00408bd0;
  DAT_00420570 = FUN_00408c10;
  return;
}



/* Function: FUN_00406d00 */

void FUN_00406d00(void)

{
  FUN_0041e372(FUN_0041ea90);
  return;
}



/* Function: FUN_00406d20 */

void FUN_00406d20(void)

{
  FUN_0041e372(FUN_0041eab0);
  return;
}



/* Function: FUN_00406d40 */

void FUN_00406d40(void)

{
  DAT_0042056c = FUN_00409c60;
  DAT_00420544 = &PTR_s_WilError_03_004200a0;
  DAT_00420558 = &DAT_00420150;
  return;
}



/* Function: FUN_00406d70 */

void FUN_00406d70(void)

{
  FUN_00416544();
  FUN_0041e372(FUN_0041eac0);
  return;
}



/* Function: FUN_00406d90 */

void FUN_00406d90(void)

{
  FUN_0041e372(FUN_0041ead0);
  return;
}



/* Function: FUN_00406db0 */

void FUN_00406db0(void)

{
  DAT_00420664 = FUN_0040ba90;
  DAT_0042059c = FUN_0040bb10;
  DAT_004205cc = FUN_0040bb90;
  DAT_00420688 = FUN_0040bc00;
  DAT_004205d8 = FUN_004093b0;
  return;
}



/* Function: FUN_00406df0 */

void FUN_00406df0(void)

{
  DAT_004205ac = FUN_0040c1b0;
  return;
}



/* Function: FUN_00406e10 */

void FUN_00406e10(void)

{
  DAT_004206a0 = FUN_00411c90;
  return;
}



/* Function: FUN_00406e30 */

void FUN_00406e30(void)

{
  FUN_0041b5e7();
  DAT_004207b0 = 1;
  return;
}



/* Function: FUN_00406e50 */

void FUN_00406e50(void)

{
  FUN_0041e372(FUN_0041eaf0);
  return;
}



/* Function: FUN_00406e70 */

void FUN_00406e70(void)

{
  FUN_0041e372(FUN_0041eae0);
  return;
}



/* Function: FUN_00406e90 */

void FUN_00406e90(void)

{
  DAT_00420588 = FUN_00407f40;
  DAT_00420574 = DebugBreak;
  DAT_00420584 = FUN_00407f80;
  return;
}



/* Function: FUN_00406eb5 */

undefined4 __fastcall FUN_00406eb5(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00406ee0 */

void __fastcall FUN_00406ee0(DWORD param_1)

{
  RaiseException(param_1,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_00406f00 */

undefined4 FUN_00406f00(void)

{
  return DAT_00420680;
}



/* Function: FUN_00406f10 */

undefined * FUN_00406f10(void)

{
  return &DAT_0041ebd4;
}



/* Function: FUN_00406f20 */

undefined * FUN_00406f20(void)

{
  return &DAT_0041ebe8;
}



/* Function: FUN_00406f30 */

undefined * FUN_00406f30(void)

{
  return &DAT_0041ebec;
}



/* Function: FUN_00406f40 */

undefined * FUN_00406f40(void)

{
  return &DAT_00420678;
}



/* Function: FUN_00406f4e */

undefined4 __thiscall FUN_00406f4e(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *extraout_ECX;
  
  iVar1 = FUN_00406eb5(param_1,(int *)&LAB_004029d4);
  if ((iVar1 == 0) && (iVar1 = FUN_00406eb5(extraout_ECX,(int *)&DAT_00402a3c), iVar1 == 0)) {
    return 0x80004002;
  }
  *param_2 = this;
  return 0;
}



/* Function: FUN_00406f8e */

undefined4 * __fastcall FUN_00406f8e(undefined4 *param_1)

{
  int *piVar1;
  _func_5021 *p_Var2;
  code *pcVar3;
  HRESULT HVar4;
  LPUNKNOWN This;
  IID *riid;
  void **ppvObject;
  LPUNKNOWN local_8;
  
  *param_1 = &PTR_purecall_00401638;
  ppvObject = (void **)(param_1 + 3);
  *ppvObject = (void *)0x0;
  local_8 = (IUnknown *)0x0;
  HVar4 = CoCreateFreeThreadedMarshaler((LPUNKNOWN)0x0,&local_8);
  This = local_8;
  if (-1 < HVar4) {
    piVar1 = (int *)*ppvObject;
    p_Var2 = local_8->lpVtbl->QueryInterface;
    if (piVar1 != (int *)0x0) {
      *ppvObject = (void *)0x0;
      pcVar3 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_00421328)(piVar1);
      (*pcVar3)();
    }
    riid = (IID *)&DAT_00402a3c;
    (*(code *)PTR_guard_check_icall_00421328)();
    (*p_Var2)(This,riid,ppvObject);
  }
  FUN_00414048((int *)&local_8);
  return param_1;
}



/* Function: FUN_00407010 */

undefined4
FUN_00407010(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    (*(code *)PTR_guard_check_icall_00421328)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00407060 */

undefined4
FUN_00407060(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    (*(code *)PTR_guard_check_icall_00421328)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004070b0 */

undefined4
FUN_004070b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    (*(code *)PTR_guard_check_icall_00421328)
              (piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00407100 */

undefined4 FUN_00407100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    (*(code *)PTR_guard_check_icall_00421328)(piVar1,param_2,param_3,param_4);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00407140 */

undefined4 FUN_00407140(int param_1,undefined4 param_2)

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
    (*(code *)PTR_guard_check_icall_00421328)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00407180 */

undefined4 FUN_00407180(int param_1,undefined4 param_2)

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
    (*(code *)PTR_guard_check_icall_00421328)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004071b5 */

int __fastcall FUN_004071b5(int *param_1)

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



/* Function: FUN_004071e5 */

int __fastcall FUN_004071e5(int *param_1)

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



/* Function: FUN_0040720f */

undefined4 * __thiscall FUN_0040720f(void *this,undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_0042067c;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined ***)this = &PTR_FUN_004016bc;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar2);
    (*pcVar1)();
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0x3fffffff;
  *(undefined ***)this = &PTR_FUN_004015d0;
  *(undefined4 *)((int)this + 8) = 2;
  return (undefined4 *)this;
}



/* Function: FUN_00407270 */

undefined4 FUN_00407270(int param_1,undefined4 param_2,undefined4 *param_3)

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
  (*(code *)PTR_guard_check_icall_00421328)(*(undefined4 **)(param_1 + 0x10),param_2,param_3);
  uVar5 = (*pcVar3)();
  pcVar3 = *(code **)(**(int **)(param_1 + 0x10) + 8);
  (*(code *)PTR_guard_check_icall_00421328)(*(int **)(param_1 + 0x10));
  (*pcVar3)();
  return uVar5;
}



/* Function: FUN_004072e0 */

undefined4 * __thiscall FUN_004072e0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004015d0;
  *(undefined4 *)((int)this + 0xc) = 0xc0000001;
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407313 */

undefined4 * __fastcall FUN_00407313(undefined4 param_1)

{
  void *this;
  undefined4 *puVar1;
  
  this = (void *)FUN_0041e266(0x14);
  if (this != (void *)0x0) {
    puVar1 = FUN_0040720f(this,param_1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}



/* Function: FUN_0040733e */

void __thiscall FUN_0040733e(void *this,undefined4 param_1,uint param_2,uint param_3)

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
  FUN_00406ee0(DVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407375 */

uint __thiscall FUN_00407375(void *this,char param_1)

{
  code *pcVar1;
  PVOID Ptr;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  PSRWLOCK SRWLock;
  int *piVar5;
  int iVar6;
  
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0x10);
  (*(code *)PTR_guard_check_icall_00421328)(this);
  piVar2 = (int *)(*pcVar1)();
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0x18);
  (*(code *)PTR_guard_check_icall_00421328)(this);
  piVar3 = (int *)(*pcVar1)();
  while( true ) {
    do {
      piVar2 = piVar2 + 1;
      if (piVar3 <= piVar2) {
                    /* WARNING: Load size is inaccurate */
        pcVar1 = *(code **)(*this + 0xc);
        (*(code *)PTR_guard_check_icall_00421328)(this);
        iVar6 = (*pcVar1)();
        return CONCAT31((int3)((uint)-iVar6 >> 8),'\x01' - (iVar6 != 0));
      }
    } while (*piVar2 == 0);
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *(code **)(*this + 0xc);
    (*(code *)PTR_guard_check_icall_00421328)(this);
    uVar4 = (*pcVar1)();
    if ((uVar4 != 0) && (param_1 == '\0')) break;
    if (**(int **)(*piVar2 + 0xc) != 0) {
                    /* WARNING: Load size is inaccurate */
      pcVar1 = *(code **)(*this + 0x1c);
      (*(code *)PTR_guard_check_icall_00421328)(this);
      SRWLock = (PSRWLOCK)(*pcVar1)();
      AcquireSRWLockExclusive(SRWLock);
      Ptr = (PVOID)**(undefined4 **)(*piVar2 + 0xc);
      if (Ptr == (PVOID)0x0) {
        if (SRWLock != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(SRWLock);
        }
      }
      else {
        **(undefined4 **)(*piVar2 + 0xc) = 0;
        if (SRWLock != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(SRWLock);
        }
        piVar5 = (int *)DecodePointer(Ptr);
        pcVar1 = *(code **)(*piVar5 + 8);
        (*(code *)PTR_guard_check_icall_00421328)(piVar5);
        (*pcVar1)();
      }
    }
  }
  return uVar4 & 0xffffff00;
}



/* Function: FUN_0040746e */

int __fastcall
FUN_0040746e(int *param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5)

{
  code *pcVar1;
  PSRWLOCK pRVar2;
  int iVar3;
  PVOID pvVar4;
  int *piVar5;
  int *local_8;
  
  piVar5 = (int *)0x0;
  *param_5 = 0;
  local_8 = (int *)0x0;
  if (*(int *)param_4[3] != 0) {
    pcVar1 = *(code **)(*param_1 + 0x1c);
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    pRVar2 = (PSRWLOCK)(*pcVar1)();
    AcquireSRWLockShared(pRVar2);
    if (*(int *)param_4[3] != 0) {
      local_8 = (int *)DecodePointer(*(PVOID *)param_4[3]);
      pcVar1 = *(code **)*local_8;
      (*(code *)PTR_guard_check_icall_00421328)(local_8,&DAT_00402b94,param_5);
      iVar3 = (*pcVar1)();
      if (pRVar2 == (PSRWLOCK)0x0) {
        return iVar3;
      }
      ReleaseSRWLockShared(pRVar2);
      return iVar3;
    }
    if (pRVar2 != (PSRWLOCK)0x0) {
      ReleaseSRWLockShared(pRVar2);
    }
  }
  pcVar1 = (code *)*param_4;
  (*(code *)PTR_guard_check_icall_00421328)(param_2,param_4,&DAT_00402b94,&local_8);
  iVar3 = (*pcVar1)();
  if (-1 < iVar3) {
    if ((*param_2 & 4) == 0) {
      pcVar1 = *(code **)(*param_1 + 0x1c);
      (*(code *)PTR_guard_check_icall_00421328)(param_1);
      pRVar2 = (PSRWLOCK)(*pcVar1)();
      AcquireSRWLockExclusive(pRVar2);
      if (*(PVOID *)param_4[3] == (PVOID)0x0) {
        pvVar4 = EncodePointer(local_8);
        *(PVOID *)param_4[3] = pvVar4;
      }
      else {
        piVar5 = (int *)DecodePointer(*(PVOID *)param_4[3]);
        pcVar1 = *(code **)(*piVar5 + 4);
        (*(code *)PTR_guard_check_icall_00421328)(piVar5);
        (*pcVar1)();
      }
      if (pRVar2 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar2);
      }
      if (piVar5 != (int *)0x0) {
        pcVar1 = *(code **)(*local_8 + 8);
        (*(code *)PTR_guard_check_icall_00421328)(local_8);
        (*pcVar1)();
        pcVar1 = *(code **)(*local_8 + 8);
        (*(code *)PTR_guard_check_icall_00421328)(local_8);
        (*pcVar1)();
        local_8 = piVar5;
      }
    }
    *param_5 = local_8;
    iVar3 = 0;
  }
  return iVar3;
}



/* Function: FUN_004075cd */

int __fastcall FUN_004075cd(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *_Memory;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_10;
  
  local_10 = 0;
  pcVar1 = *(code **)(*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  iVar3 = (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x14);
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  piVar4 = (int *)(*pcVar1)();
  piVar9 = (int *)(iVar3 + 4);
  piVar5 = piVar9;
  uVar6 = 0;
  if (piVar9 < piVar4) {
    do {
      uVar7 = uVar6 + 1;
      if (*piVar5 == 0) {
        uVar7 = uVar6;
      }
      piVar5 = piVar5 + 1;
      uVar6 = uVar7;
    } while (piVar5 < piVar4);
    if (uVar7 != 0) {
      _Memory = (undefined4 *)
                FUN_0041e39c(-(uint)((int)((ulonglong)uVar7 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar7 * 4));
      piVar5 = piVar9;
      puVar8 = _Memory;
      if (_Memory == (undefined4 *)0x0) {
        local_10 = -0x7ff8fff2;
      }
      else {
        do {
          if (*piVar5 != 0) {
            *puVar8 = *(undefined4 *)(*(int *)(*piVar5 + 0xc) + 4);
            puVar8 = puVar8 + 1;
          }
          piVar5 = piVar5 + 1;
        } while (piVar5 < piVar4);
        pcVar1 = *(code **)(*param_1 + 0x2c);
        (*(code *)PTR_guard_check_icall_00421328)(param_1,0,_Memory,uVar7);
        local_10 = (*pcVar1)();
        puVar8 = _Memory;
        do {
          if (*piVar9 != 0) {
            uVar2 = *puVar8;
            puVar8 = puVar8 + 1;
            *(undefined4 *)(*(int *)(*piVar9 + 0xc) + 4) = uVar2;
          }
          piVar9 = piVar9 + 1;
        } while (piVar9 < piVar4);
      }
      free(_Memory);
      if (local_10 < 0) goto LAB_0040773a;
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x18);
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  piVar9 = (int *)(*pcVar1)();
  piVar4 = piVar4 + 1;
  for (piVar5 = piVar4; piVar5 < piVar9; piVar5 = piVar5 + 1) {
    if (*piVar5 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x24);
      (*(code *)PTR_guard_check_icall_00421328)
                (param_1,0,*(undefined4 *)(*(int *)(*piVar5 + 0xc) + 4));
      local_10 = (*pcVar1)();
      if (-1 < local_10) {
        do {
          if (*piVar4 != 0) {
            *(undefined4 *)(*(int *)(*piVar4 + 0xc) + 4) = 0;
          }
          piVar4 = piVar4 + 1;
        } while (piVar4 < piVar9);
      }
      break;
    }
  }
LAB_0040773a:
  FUN_00407375(param_1,'\0');
  return local_10;
}



/* Function: FUN_00407751 */

undefined4 __fastcall FUN_00407751(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_004077b7 */

undefined4 __fastcall FUN_004077b7(short *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00407984(param_1,param_2,(int *)0x0,param_3,0x7ffffffe);
  }
  return uVar1;
}



/* Function: FUN_004077f1 */

int __fastcall FUN_004077f1(short *param_1,uint param_2,short *param_3,uint param_4)

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
    psVar2 = &DAT_00401d18;
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
      iVar1 = FUN_00407984(param_1,param_2,&local_8,(int)psVar2,uVar3);
      if (((-1 < iVar1) && (1 < param_2 - local_8)) && (uVar3 = (param_2 - local_8) * 2, 2 < uVar3))
      {
        memset(param_1 + local_8 + 1,0,uVar3 - 2);
      }
    }
  }
  return iVar1;
}



/* Function: FUN_004078ad */

undefined4 __thiscall FUN_004078ad(void *this,int param_1)

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
    uVar2 = FUN_00407984((short *)((int)this + uVar3 * 2),0x104 - uVar3,(int *)0x0,param_1,
                         0x7ffffffe);
  }
  return uVar2;
}



/* Function: FUN_00407909 */

undefined4 __fastcall FUN_00407909(wchar_t *param_1,uint param_2,wchar_t *param_3,va_list param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_004079eb(param_1,param_2,param_1,param_3,param_4);
  }
  return uVar1;
}



/* Function: FUN_00407940 */

undefined4 __cdecl FUN_00407940(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_004079eb(param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_00407984 */

undefined4 __fastcall FUN_00407984(short *param_1,int param_2,int *param_3,int param_4,int param_5)

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



/* Function: FUN_004079eb */

undefined4 __fastcall
FUN_004079eb(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4,va_list param_5)

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



/* Function: FUN_00407a31 */

wchar_t * __cdecl FUN_00407a31(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  FUN_00407909(param_1,(int)param_2 - (int)param_1 >> 1,param_3,&stack0x00000010);
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



/* Function: FUN_00407a76 */

void __fastcall FUN_00407a76(wchar_t *param_1,int param_2,int param_3)

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
  
  pcVar2 = DAT_0042054c;
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  iVar4 = param_2;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((pcVar2 != (code *)0x0) && (DAT_0042055c != '\0')) {
      (*(code *)PTR_guard_check_icall_00421328)(param_3,param_1,param_2);
      (*pcVar2)();
      iVar4 = extraout_EDX;
      if (*param_1 != L'\0') goto LAB_00407cce;
    }
    memset(local_208,0,0x200);
    pcVar2 = DAT_00420564;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
    }
    else if (DAT_00420564 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00421328)(*(undefined4 *)(param_3 + 0xc),local_208,0x100);
      (*pcVar2)();
    }
    pwVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_20c = FUN_00407a31(param_1,pwVar1,L"%hs!%p: ");
    }
    else {
      local_20c = FUN_00407a31(param_1,pwVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_20c = FUN_00407a31(local_20c,pwVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    pwVar3 = FUN_00407a31(local_20c,pwVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (iVar4 = extraout_EDX_00, *(int *)(param_3 + 0x20) != 0)) {
      pwVar3 = FUN_00407a31(pwVar3,pwVar1,L"    ");
      if (*(int *)(param_3 + 0x14) != 0) {
        pwVar3 = FUN_00407a31(pwVar3,pwVar1,L"Msg:[%ws] ");
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        pwVar3 = FUN_00407a31(pwVar3,pwVar1,L"CallContext:[%hs] ");
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00407a31(pwVar3,pwVar1,L"\n");
          iVar4 = extraout_EDX_03;
        }
        else {
          FUN_00407a31(pwVar3,pwVar1,L"[%hs]\n");
          iVar4 = extraout_EDX_02;
        }
      }
      else {
        FUN_00407a31(pwVar3,pwVar1,L"[%hs(%hs)]\n");
        iVar4 = extraout_EDX_01;
      }
    }
  }
LAB_00407cce:
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,iVar4);
  return;
}



/* Function: FUN_00407ce6 */

uint * __thiscall FUN_00407ce6(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00408021((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00407d0a */

LPVOID __fastcall FUN_00407d0a(DWORD param_1,SIZE_T param_2)

{
  FARPROC pFVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  HMODULE hModule;
  
  hHeap = GetProcessHeap();
  pvVar2 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_00420514 == (FARPROC)0x0) {
    if (DAT_004205d4 != '\0') {
      return pvVar2;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00420514 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_004205d4 = '\x01';
    if (DAT_00420514 == (FARPROC)0x0) {
      DAT_004205d4 = '\x01';
      return pvVar2;
    }
  }
  pFVar1 = DAT_00420514;
  (*(code *)PTR_guard_check_icall_00421328)(hHeap,pvVar2);
  (*pFVar1)();
  return pvVar2;
}



/* Function: FUN_00407d87 */

void __fastcall FUN_00407d87(undefined4 *param_1)

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



/* Function: FUN_00407dbe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00407dbe(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004205a0;
  _DAT_004205a4 = param_1;
  LOCK();
  DAT_004205a0 = DAT_004205a0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00407dd7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00407dd7(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00420600;
  _DAT_00420534 = param_1;
  LOCK();
  DAT_00420600 = DAT_00420600 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00407df0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00407df0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0042066c;
  _DAT_004205ec = param_1;
  LOCK();
  DAT_0042066c = DAT_0042066c + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00407e10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00407e10(undefined4 param_1)

{
  _DAT_00420650 = param_1;
  return 1;
}



/* Function: FUN_00407e2a */

void FUN_00407e2a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00420584;
  if (DAT_00420584 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407e5a */

void __fastcall
FUN_00407e5a(undefined4 param_1,undefined4 param_2,LPCWSTR param_3,uint *param_4,char *param_5,
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
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
      FUN_00407751(param_5,param_6,(int)pcVar5);
      param_2 = extraout_EDX_01;
    }
  }
  else if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00407f40 */

undefined * __fastcall FUN_00407f40(undefined4 param_1,undefined4 param_2)

{
  if (DAT_004205b8 == '\0') {
    FUN_00407e5a(param_1,param_2,(LPCWSTR)FUN_00407e10,(uint *)0x0,&DAT_00420608,0x40);
    DAT_004205b8 = '\x01';
  }
  return &DAT_00420608;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00407f80 */

void FUN_00407f80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00407fc1 */

uint __fastcall FUN_00407fc1(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_0042058c;
  if (-1 < (int)param_1) {
    return 0;
  }
  if (param_1 != 0xc0000017) {
    if (DAT_0042058c != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00421328)(param_1);
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



/* Function: FUN_00408021 */

uint __fastcall FUN_00408021(uint param_1)

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



/* Function: FUN_004081f6 */

DWORD __fastcall
FUN_004081f6(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0041958b(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  return DVar1;
}



/* Function: FUN_00408232 */

DWORD __fastcall FUN_00408232(undefined4 param_1)

{
  DWORD DVar1;
  uint uVar2;
  int unaff_retaddr;
  
  DVar1 = FUN_004081f6(0,0,0,param_1,param_1,unaff_retaddr);
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_0040825f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040825f(wchar_t *param_1,undefined4 param_2,int param_3,va_list param_4)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  wchar_t local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  if (param_3 == 0) {
    *param_1 = L'\0';
  }
  else if (param_4 == (va_list)0x0) {
    FUN_00407940(param_1,0x800,L"%hs");
    param_2 = extraout_EDX;
  }
  else {
    FUN_00407940(local_1008,0x800,L"%hs");
    FUN_004079eb(param_1,0x800,extraout_ECX,local_1008,param_4);
    param_2 = extraout_EDX_00;
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004082ea */

char * __fastcall FUN_004082ea(char *param_1)

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



/* Function: FUN_00408308 */

int __fastcall FUN_00408308(short *param_1)

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



/* Function: FUN_00408330 */

undefined1 FUN_00408330(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_00420570;
  if (DAT_00420580 != '\0') {
    return 1;
  }
  if (DAT_00420570 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00408360 */

void __thiscall FUN_00408360(void *this,undefined4 *param_1)

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
  iVar12 = FUN_00408308((short *)param_1[0x12]);
  iVar2 = FUN_00408308((short *)param_1[0xf]);
  iVar3 = FUN_00408308((short *)param_1[5]);
  pcVar4 = FUN_004082ea((char *)param_1[0x11]);
  pcVar5 = FUN_004082ea((char *)param_1[0xe]);
  pcVar6 = FUN_004082ea((char *)param_1[0xc]);
  pcVar7 = FUN_004082ea((char *)param_1[9]);
  pcVar8 = FUN_004082ea((char *)param_1[8]);
  pcVar9 = FUN_004082ea((char *)param_1[7]);
  pcVar10 = FUN_004082ea((char *)param_1[0x13]);
  pcVar10 = pcVar4 + iVar12 + iVar2 + iVar3 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 + (int)pcVar8
            + (int)pcVar9 + (int)pcVar10;
  piVar1 = (int *)((int)this + 0x58);
  if ((((int *)*piVar1 == (int *)0x0) || (*(int *)*piVar1 != 1)) ||
     (*(char **)((int)this + 0x5c) < pcVar10)) {
    FUN_00407d87(piVar1);
    if (pcVar10 == (char *)0x0) {
      FUN_00407d87(piVar1);
    }
    else {
      pcVar4 = pcVar10 + 4;
      dwFlags = 0;
      hHeap = GetProcessHeap();
      piVar11 = (int *)HeapAlloc(hHeap,dwFlags,(SIZE_T)pcVar4);
      if (piVar11 != (int *)0x0) {
        *piVar11 = 0;
        FUN_00407d87(piVar1);
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
    pcVar5 = (char *)FUN_004195db(pvVar14,pcVar4,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_0041964b(pcVar5,pcVar4,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_0041964b(extraout_EAX,pcVar4,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_0041964b(extraout_EAX_00,pcVar4,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_0041964b(extraout_EAX_01,pcVar4,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_0041964b(extraout_EAX_02,pcVar4,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_0041964b(extraout_EAX_03,pcVar4,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar5 = (char *)FUN_004195db(extraout_EAX_04,pcVar4,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_0041964b(pcVar5,pcVar4,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar14 = FUN_004195db(extraout_EAX_05,pcVar4,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar14,0,(int)pcVar4 - (int)pvVar14);
  }
  return;
}



/* Function: FUN_00408518 */

void __fastcall
FUN_00408518(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
    iVar3 = FUN_00407dbe(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_00407dd7(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_0041958b(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar6 = FUN_00408021(0x8007029c);
      param_15[3] = uVar6;
    }
    iVar3 = FUN_00407df0(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_00407e10(iVar3);
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
  iVar4 = DAT_004205bc + 1;
  DAT_004205bc = DAT_004205bc + 1;
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
  pcVar1 = DAT_00420588;
  if (DAT_00420588 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00421328)();
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_00420554;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042056c;
  if (DAT_0042056c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00420568;
  if (DAT_00420568 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00420578;
  if ((DAT_00420578 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00421328)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_00408b07();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar6 = FUN_00408021(0x8000ffff);
    param_15[3] = uVar6;
  }
  pcVar1 = DAT_00420540;
  if (DAT_00420548 == '\0') {
    if (DAT_00420540 == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00421328)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00408701;
  }
  else {
LAB_00408701:
    pcVar1 = DAT_0042054c;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_0042054c != (code *)0x0) && (DAT_0042055c == '\0')) {
        (*(code *)PTR_guard_check_icall_00421328)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_00407a76(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_0040876a;
    }
  }
  pcVar1 = DAT_0042054c;
  if ((DAT_0042054c != (code *)0x0) && (DAT_0042055c == '\0')) {
    (*(code *)PTR_guard_check_icall_00421328)(param_15,0,0);
    (*pcVar1)();
  }
LAB_0040876a:
  pcVar1 = DAT_00420574;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_00420550 != '\0')) &&
     (DAT_00420574 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004087a0 */

void __fastcall FUN_004087a0(int param_1)

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
  
  pcVar1 = DAT_00420590;
  if (DAT_00420590 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042057c;
  if (DAT_0042057c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_0040880d;
  uVar3 = 1;
  do {
    FUN_00407e2a(uVar3);
    iVar2 = extraout_ECX;
LAB_0040880d:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_0040882d */

void __fastcall
FUN_0040882d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,short *param_8)

{
  code *pcVar1;
  
  FUN_004196ae(param_1,param_2,param_3,param_1,param_1,param_6,param_7,param_8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040884d */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040884d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,int param_8,va_list param_9)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  wchar_t local_1008 [2048];
  undefined4 uStack_8;
  
  uStack_8 = 0x40885c;
  FUN_0040825f(local_1008,param_2,param_8,param_9);
  FUN_0040882d(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,param_7,local_1008);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004088ac */

void __fastcall
FUN_004088ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 extraout_ECX;
  uint local_24 [4];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 local_8;
  
  local_8 = param_1;
  puVar2 = FUN_00407ce6((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  FUN_0040882d(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14,
               (short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004088f2 */

void __fastcall FUN_004088f2(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_004081f6(param_1,param_2,0x40200c,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00407ce6(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  FUN_0040882d(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14,(short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408954 */

void __fastcall
FUN_00408954(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,void *param_7,int param_8,va_list param_9)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 extraout_ECX;
  uint local_24 [4];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 local_8;
  
  local_8 = param_1;
  puVar2 = FUN_00407ce6(param_7,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  FUN_0040884d(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14,param_8,
               param_9);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040899b */

void __fastcall FUN_0040899b(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_retaddr;
  
  FUN_0041995a(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  return;
}



/* Function: FUN_004089ba */

void __fastcall FUN_004089ba(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_retaddr;
  
  FUN_0041999d(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  return;
}



/* Function: FUN_004089d9 */

void __fastcall FUN_004089d9(int param_1,int param_2,int param_3)

{
  int unaff_retaddr;
  
  FUN_004199f4(param_1,param_2,param_3,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_004089f7 */

uint __thiscall FUN_004089f7(void *this,undefined4 param_1,uint param_2)

{
  int unaff_retaddr;
  
  FUN_0041958b((int)this,0x3be,0x40204c,0,0,unaff_retaddr,param_2);
  return param_2;
}



/* Function: FUN_00408a22 */

void __fastcall FUN_00408a22(void *param_1)

{
  FUN_00419a55(param_1);
  return;
}



/* Function: FUN_00408a3e */

void __fastcall FUN_00408a3e(int param_1,int param_2,int param_3,uint param_4)

{
  int unaff_retaddr;
  
  FUN_0041958b(param_1,param_2,param_3,0,0,unaff_retaddr,param_4);
  return;
}



/* Function: FUN_00408a5f */

void __fastcall FUN_00408a5f(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_004088f2(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408a77 */

void __fastcall
FUN_00408a77(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            void *param_5,int param_6,va_list param_7)

{
  code *pcVar1;
  
  FUN_00408954(param_1,param_2,param_3,param_1,param_1,param_4,param_5,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408a9a */

uint __cdecl
FUN_00408a9a(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4,char param_5,
            int param_6)

{
  code *pcVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 unaff_retaddr;
  
  if (param_5 == '\0') {
    return in_EAX & 0xffffff00;
  }
  FUN_00408a77(param_1,param_2,param_3,unaff_retaddr,param_4,param_6,&stack0x0000001c);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00408acb */

void __fastcall FUN_00408acb(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_004088ac(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408aec */

void __fastcall FUN_00408aec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_004088ac(param_1,param_2,param_3,param_1,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00408b07 */

void FUN_00408b07(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408b13 */

void __fastcall FUN_00408b13(LPCSTR param_1)

{
  if (DAT_004205e8 == (HMODULE)0x0) {
    DAT_004205e8 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_004205e8,param_1);
  return;
}



/* Function: FUN_00408b3f */

FARPROC __fastcall FUN_00408b3f(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_00420648 == (HMODULE)0x0) &&
     (DAT_00420648 = GetModuleHandleW(L"kernelbase.dll"), DAT_00420648 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_00420648,param_1);
  return pFVar1;
}



/* Function: FUN_00408b80 */

void FUN_00408b80(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_004205e8 == (HMODULE)0x0) {
    DAT_004205e8 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_004205e8,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00408bd0 */

void FUN_00408bd0(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_00420520 == (code *)0x0) &&
     (DAT_00420520 = (code *)FUN_00408b13("RtlNtStatusToDosErrorNoTeb"), DAT_00420520 == (code *)0x0
     )) {
    return;
  }
  pcVar1 = DAT_00420520;
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408c10 */

undefined4 FUN_00408c10(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_0042064c == (code *)0x0) {
    DAT_0042064c = (code *)FUN_00408b13("RtlDllShutdownInProgress");
    if (DAT_0042064c == (code *)0x0) {
      return 0;
    }
  }
  pcVar1 = DAT_0042064c;
  (*(code *)PTR_guard_check_icall_00421328)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00408c50 */

void FUN_00408c50(undefined1 *param_1)

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
  local_1e = DAT_00420594;
  local_1c = *(undefined2 *)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  if (DAT_00420598 == (FARPROC)0x0) {
    DAT_00420598 = FUN_00408b3f("WilFailureNotifyWatchers");
    if (DAT_00420598 == (FARPROC)0x0) goto LAB_00408ccc;
  }
  pFVar1 = DAT_00420598;
  (*(code *)PTR_guard_check_icall_00421328)(0,&local_28,&local_c);
  (*pFVar1)();
LAB_00408ccc:
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



/* Function: FUN_00408d01 */

undefined4 FUN_00408d01(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_004205d0 == (code *)0x0) &&
     (DAT_004205d0 = (code *)FUN_00408b13("NtQueryWnfStateData"), DAT_004205d0 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_004205d0;
  (*(code *)PTR_guard_check_icall_00421328)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00408d55 */

undefined4 __fastcall
FUN_00408d55(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_00420654 == (code *)0x0) &&
     (DAT_00420654 = (code *)FUN_00408b13("NtUpdateWnfStateData"), DAT_00420654 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00420654;
  (*(code *)PTR_guard_check_icall_00421328)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00408dae */

int __fastcall FUN_00408dae(int param_1,int param_2)

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



/* Function: FUN_00408e2b */

uint * __fastcall FUN_00408e2b(uint *param_1,uint param_2,uint *param_3)

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
    FUN_00408f91(param_1,param_2,0,param_3);
    break;
  case 1:
  case 5:
    FUN_00409061(param_1,param_2,0,param_3);
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



/* Function: FUN_00408f91 */

void __fastcall FUN_00408f91(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_00409061 */

void __fastcall FUN_00409061(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_0040912a */

void __fastcall FUN_0040912a(undefined4 param_1,uint *param_2)

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
  undefined4 local_38;
  ushort local_34 [2];
  undefined4 local_30 [10];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
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
  puVar5 = &local_38;
  if ((uVar4 & 1) != 0) {
    puVar5 = local_30;
    local_34[0] = 2;
    local_34[1] = 1;
    local_38 = param_1;
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
  iVar6 = (int)puVar5 - (int)&local_38 >> 3;
  if (0 < iVar6) {
    FUN_0040bc7a((int)&local_38,iVar6);
    uVar4 = extraout_EDX;
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00409244 */

void __fastcall FUN_00409244(uint *param_1,undefined4 param_2,int param_3,uint *param_4)

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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  local_18 = (uint)(param_3 == 0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_1c = param_2;
  if (DAT_0042051c == (code *)0x0) {
    DAT_0042051c = (code *)FUN_00408b13("RtlQueryFeatureConfiguration");
    if (DAT_0042051c == (code *)0x0) {
      iVar2 = -0x3ffffec7;
      goto LAB_00409317;
    }
  }
  pcVar1 = DAT_0042051c;
  (*(code *)PTR_guard_check_icall_00421328)(local_1c,local_18,local_28,&local_14);
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
LAB_00409317:
  if (local_20 != (uint *)0x0) {
    *local_20 = (uint)(iVar2 != -0x7fffffde);
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,iVar2);
  return;
}



/* Function: FUN_00409344 */

undefined4 __fastcall FUN_00409344(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_00420518 == (code *)0x0) &&
     (DAT_00420518 = (code *)FUN_00408b13("RtlNotifyFeatureUsage"), DAT_00420518 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00420518;
  (*(code *)PTR_guard_check_icall_00421328)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_004093b0 */

void FUN_004093b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if ((DAT_004205f4 == (FARPROC)0x0) &&
     (DAT_004205f4 = FUN_00408b3f("LogStagedFeatureUsage"), DAT_004205f4 == (FARPROC)0x0)) {
    return;
  }
  pFVar1 = DAT_004205f4;
  (*(code *)PTR_guard_check_icall_00421328)(param_1,param_2,param_3);
  (*pFVar1)();
  return;
}



/* Function: FUN_004093f4 */

void FUN_004093f4(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00408a5f(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409421 */

void FUN_00409421(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00408a5f(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040944c */

uint __fastcall FUN_0040944c(void *param_1,int *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  uVar1 = FUN_00409677(param_1,local_c);
  if ((int)uVar1 < 0) {
    FUN_0040899b(unaff_retaddr,100,&DAT_00401ed0,uVar1);
    FUN_0040899b(unaff_retaddr,0x6d,&DAT_00401ed0,uVar1);
  }
  else {
    *param_2 = local_c[0] << 2;
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_004094a9 */

void __thiscall FUN_004094a9(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_00408b07();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00407984(local_214,0x104,(int *)0x0,param_1,0x7ffffffe);
  FUN_004078ad(local_214,0x402044);
  uVar5 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  DVar3 = FUN_00415c8d(this,uVar5,uVar2,local_214);
  uVar4 = extraout_EDX;
  if ((int)DVar3 < 0) {
    FUN_0040899b(unaff_retaddr,0x88,&DAT_00401ed0,DVar3);
    uVar4 = extraout_EDX_00;
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00409554 */

undefined4 __fastcall FUN_00409554(HANDLE param_1,int *param_2)

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
    goto LAB_00409577;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00409577:
        uVar2 = FUN_004089d9(unaff_retaddr,iVar4,0x401ed0);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00409649:
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
        goto LAB_00409577;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00409577;
          }
          if (DVar1 == 0) goto LAB_00409649;
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
  FUN_0040899b(unaff_retaddr,uVar2,&DAT_00401ed0,0x8000ffff);
  return 0x8000ffff;
}



/* Function: FUN_00409677 */

void __thiscall FUN_00409677(void *this,int *param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  uint uVar3;
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
  
  local_c = DAT_00420100 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00407984(local_218,0x104,(int *)0x0,(int)this,0x7ffffffe);
  FUN_004078ad(local_218,0x402044);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar4 = extraout_EDX;
    if (DVar2 != 2) {
      FUN_004089d9(unaff_retaddr,0xcd,0x401ed0);
      uVar4 = extraout_EDX_00;
    }
LAB_00409729:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00409743;
  }
  else {
    iStack_220 = 0;
    uVar3 = FUN_00409554(pvVar1,&iStack_220);
    if ((int)uVar3 < 0) {
      FUN_0040899b(unaff_retaddr,0xd3,&DAT_00401ed0,uVar3);
      uVar4 = extraout_EDX_01;
      goto LAB_00409729;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_004093f4(pvVar1);
  uVar4 = extraout_EDX_02;
LAB_00409743:
  FUN_0041e250(local_c ^ (uint)auStack_224,uVar4);
  return;
}



/* Function: FUN_00409762 */

void __thiscall FUN_00409762(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_00408308(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_004082ea(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_004082ea(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00407d0a(8,(SIZE_T)pcVar4);
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
    FUN_0041964b(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_0041964b(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_004195db(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00409855 */

void __fastcall FUN_00409855(int param_1)

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



/* Function: FUN_004098c4 */

void __thiscall FUN_004098c4(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00407d0a(8,0xdc);
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
    FUN_00409762(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00409982 */

DWORD * __fastcall FUN_00409982(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_00420544;
  if (DAT_00420544 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_00420544[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_00415e99(*DAT_00420544,&local_8);
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



/* Function: FUN_00409a0b */

undefined4 * __thiscall FUN_00409a0b(void *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_2;
  if (param_3 != '\0') {
    FUN_00409a42((undefined4 *)this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00409a42 */

void __fastcall FUN_00409a42(undefined4 *param_1)

{
  code *pcVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  undefined1 local_60 [92];
  
  if (param_1[3] == 0) {
    if (DAT_00420558 == 0) {
      *param_1 = 0;
    }
    else {
      pDVar2 = FUN_00415bb6('\x01');
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
  FUN_004087a0((int)local_60);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409aa5 */

void __fastcall FUN_00409aa5(undefined4 *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  void *unaff_retaddr;
  
  DVar2 = GetCurrentThreadId();
  if (param_1[3] != DVar2) {
    FUN_004089f7(unaff_retaddr,extraout_ECX,0x8007029c);
  }
  param_1[3] = 0;
  piVar3 = (int *)*param_1;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 == (undefined4 *)0x0) {
LAB_00409ae5:
      *param_1 = 0;
      return;
    }
    if (puVar1 == param_1) {
      *piVar3 = param_1[2];
      goto LAB_00409ae5;
    }
    piVar3 = puVar1 + 2;
    *param_1 = piVar3;
  } while( true );
}



/* Function: FUN_00409af2 */

uint __fastcall FUN_00409af2(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00409af2(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_00420144 + 1;
        DAT_00420144 = DAT_00420144 + 1;
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



/* Function: FUN_00409bb1 */

void __fastcall FUN_00409bb1(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  DWORD *pDVar3;
  undefined4 uVar4;
  DWORD DVar5;
  undefined1 local_5;
  
  local_5 = 0;
  *param_2 = '\0';
  if (DAT_00420558 != 0) {
    pDVar3 = FUN_00415bb6('\0');
    if ((pDVar3 == (DWORD *)0x0) || (*pDVar3 == 0)) {
      local_5 = 0;
    }
    else {
      *param_2 = '\0';
      uVar4 = FUN_00409af2(param_1,*pDVar3,param_2,param_3);
      if ((char)uVar4 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar5 = *pDVar3;
      local_5 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar5 + 4);
        (*(code *)PTR_guard_check_icall_00421328)(param_1);
        bVar2 = (*pcVar1)();
        local_5 = local_5 | bVar2;
        DVar5 = *(DWORD *)(DVar5 + 8);
      } while (DVar5 != 0);
    }
  }
  pcVar1 = DAT_00420560;
  if (DAT_00420560 != (code *)0x0) {
    if ((local_5 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    (*(code *)PTR_guard_check_icall_00421328)(uVar4,param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00409c60 */

void FUN_00409c60(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00409bb1((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_00420658 != DVar2) {
    LOCK();
    iVar1 = DAT_00420670 + 1;
    UNLOCK();
    iVar3 = DAT_00420670 + 1;
    DAT_00420670 = iVar1;
    if (iVar3 < 4) {
      DAT_00420658 = DVar2;
      this = FUN_00409982(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_004098c4(this,param_1);
      }
      DAT_00420658 = 0;
    }
    LOCK();
    DAT_00420670 = DAT_00420670 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00409cc5 */

void __fastcall FUN_00409cc5(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_00409d11 */

undefined4 __thiscall FUN_00409d11(void *this,uint param_1)

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
    _Dst = FUN_00407d0a(0,_DstSize);
    if (_Dst == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    _MaxCount = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    memcpy_s(_Dst,_DstSize,*this,_MaxCount);
    FUN_00415b35((void *)((int)this + 0xc),(int)_Dst);
    *(LPVOID *)this = _Dst;
    *(rsize_t *)((int)this + 4) = _MaxCount + (int)_Dst;
    *(SIZE_T *)((int)this + 8) = (int)_Dst + _DstSize;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_00409d9c */

undefined4 __thiscall FUN_00409d9c(void *this,uint param_1)

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
    uVar2 = FUN_00409d11(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00409dd2 */

undefined4 __thiscall FUN_00409dd2(void *this,void *param_1,uint param_2)

{
  void *_Dst;
  undefined4 uVar1;
  errno_t eVar2;
  
  uVar1 = FUN_00409d9c(this,param_2);
  if ((char)uVar1 != '\0') {
    _Dst = *(void **)((int)this + 4);
    eVar2 = memcpy_s(_Dst,-(uint)(_Dst < *(void **)((int)this + 8)) &
                          *(int *)((int)this + 8) - (int)_Dst,param_1,param_2);
    uVar1 = CONCAT31((int3)((uint)eVar2 >> 8),1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return uVar1;
}



/* Function: FUN_00409e17 */

undefined4 __fastcall FUN_00409e17(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) && (param_1[3] == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Function: FUN_00409e35 */

void __fastcall FUN_00409e35(int param_1)

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



/* Function: FUN_00409e80 */

void __thiscall FUN_00409e80(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_00409ef0(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00409fea(this,param_2);
    }
  }
  return;
}



/* Function: FUN_00409ebd */

void __fastcall FUN_00409ebd(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_00401478;
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



/* Function: FUN_00409ef0 */

void __thiscall FUN_00409ef0(void *this,undefined4 *param_1)

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
    uVar1 = FUN_00405a58(this_00,0,0x2000);
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
      FUN_00405a9b((int)this_00,&DAT_00403d9f,(LPCGUID)0x0,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00409fea */

void __thiscall FUN_00409fea(void *this,undefined4 *param_1)

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
    FUN_00405c64((int)*(uint **)((int)this + 4),&DAT_00404277,(LPCGUID)0x0,param_1,&local_4c,
                 &local_48,&local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                 &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,
                 &local_8);
  }
  return;
}



/* Function: FUN_0040a0da */

void __thiscall FUN_0040a0da(void *this,PVOID param_1)

{
  PREGHANDLE RegHandle;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  undefined4 extraout_EDX;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
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
  UVar3 = EventRegister(&local_18,FUN_00405940,param_1,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)param_1 + 0x1c),2,
                        *(undefined2 **)((int)param_1 + 4),**(undefined2 **)((int)param_1 + 4));
  }
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)((int)this + 0xc) = 1;
  pcVar2 = *(code **)(*this + 4);
  (*(code *)PTR_guard_check_icall_00421328)();
  (*pcVar2)();
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040a180 */

undefined4 __thiscall FUN_0040a180(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_00420148 != iVar1;
  iVar3 = DAT_00420148;
  DAT_00420148 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_00421328)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_0040a1c0 */

undefined4 * __thiscall FUN_0040a1c0(void *this,byte param_1)

{
  FUN_00409ebd((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040a1e7 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040a1e7(int *param_1)

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
  
  local_c = DAT_00420100 ^ (uint)&local_102c;
  iVar6 = 0;
  uVar4 = 0xc;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar8 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_00408d01(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_0040a2f6;
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
LAB_0040a2f6:
            piVar5 = piVar5 + 3;
            iVar8 = local_1024;
          } while (piVar5 != local_101c);
        }
        iVar6 = FUN_00408d55(&DAT_00402d24,local_1010,uVar7,piVar2,piVar2,local_1018,1);
        uVar4 = extraout_EDX_00;
        param_1 = local_1028;
      }
      local_1024 = iVar8 + 1;
    } while (((iVar6 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_0041e250(local_c ^ (uint)&local_102c,uVar4);
  return;
}



/* Function: FUN_0040a36c */

void FUN_0040a36c(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_00420538 == (code *)0x0) &&
     (DAT_00420538 = (code *)FUN_00408b13("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_00420538 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_00420538;
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040a3aa */

int __thiscall FUN_0040a3aa(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_0040a3d7 */

void __thiscall FUN_0040a3d7(void *this,int param_1)

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



/* Function: FUN_0040a422 */

uint __fastcall FUN_0040a422(ushort *param_1)

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



/* Function: FUN_0040a44d */

uint __thiscall FUN_0040a44d(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  undefined4 local_8;
  
  _Dst = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_0040a4e6;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    memcpy_s(_Dst,2,&local_8,2);
    _Dst = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)_Dst + 4);
      if (param_2 < pvVar1) goto LAB_0040a4e6;
      memcpy_s(_Dst,4,(void *)((int)this + 4),4);
      _Dst = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_0040a4e6;
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
LAB_0040a4e6:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_0040a515 */

uint __thiscall FUN_0040a515(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_0040a5a6;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    memcpy_s(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_0040a5a6;
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
    if (param_2 < puVar3) goto LAB_0040a5a6;
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
LAB_0040a5a6:
  return (uint)puVar3 & 0xffffff00;
}



/* Function: FUN_0040a5c0 */

undefined2 * __thiscall
FUN_0040a5c0(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_0040a422(&local_18);
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



/* Function: FUN_0040a63e */

void __thiscall FUN_0040a63e(void *this,int param_1)

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
  FUN_00415b35(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_00415b35((void *)(param_1 + 0x1c),local_8);
  FUN_00415b5f(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_0040a6c7 */

void __thiscall FUN_0040a6c7(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_00408aec(unaff_retaddr,0x137b,"onecore\\internal\\sdk\\inc\\wil\\Staging.h");
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_0040a76a;
  }
  if (9 < param_2) {
    return;
  }
LAB_0040a76a:
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



/* Function: FUN_0040a7bb */

undefined4 __thiscall FUN_0040a7bb(void *this,int param_1)

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
  uVar3 = FUN_0040a515(&local_44,&local_14,*(ushort **)((int)this + 0x14));
  cVar2 = (char)uVar3;
  do {
    if (cVar2 == '\0') {
      uVar5 = FUN_00419b83(param_1);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    uVar3 = 0;
    if (local_40 != 0) {
      do {
        uVar4 = FUN_0040a515(&local_58,&local_14,*(ushort **)((int)this + 0x14));
        if ((char)uVar4 == '\0') break;
        local_18 = local_54;
        local_1c = (uint)local_50;
        local_20 = local_48;
        local_24 = (uint)local_3c;
        local_28 = local_34;
        local_2c = *(int **)(param_1 + 0x40);
        if (local_2c == (int *)0x0) {
          FUN_00408b07();
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        pcVar1 = *(code **)(*local_2c + 0x10);
        (*(code *)PTR_guard_check_icall_00421328)(&local_28,&local_24,&local_20,&local_1c,&local_18)
        ;
        cVar2 = (*pcVar1)();
        if (cVar2 == '\0') {
          uVar3 = FUN_00419b83(param_1);
          return uVar3 & 0xffffff00;
        }
        uVar3 = uVar3 + 1;
        this = local_30;
      } while (uVar3 < local_40);
    }
    uVar3 = FUN_0040a515(&local_44,&local_14,*(ushort **)((int)this + 0x14));
    cVar2 = (char)uVar3;
  } while( true );
}



/* Function: FUN_0040a8f8 */

undefined4 __thiscall
FUN_0040a8f8(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_0040ac04(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_00409d9c(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_0040a6c7(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_00415b35((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_00415b5f(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_00409d9c((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_0040ac04(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_0040a9b0 */

uint __thiscall FUN_0040a9b0(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_0040a515(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_0040a3aa(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_0040aa3b */

uint __thiscall
FUN_0040aa3b(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_0040a515(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_0040a3d7(param_1,local_c);
          uVar1 = local_14;
          goto LAB_0040ab31;
        }
        local_14 = FUN_0040a3aa(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_0040ab31;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_0040a3d7(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_0040a9b0(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_0040a515(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_0040a3aa(&local_28,param_3,param_4);
LAB_0040ab31:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_0040a3d7(&local_28,local_24 + param_5);
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



/* Function: FUN_0040ab71 */

uint __thiscall FUN_0040ab71(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_0040a515(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_0040a3d7(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_0040a3d7(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_0040ac04 */

uint __thiscall
FUN_0040ac04(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar3 = FUN_0040a515(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar3 == '\0') break;
      iVar2 = FUN_0040a3aa(&local_24,param_1,param_2);
      if (iVar2 < 0) {
LAB_0040ad62:
        local_c = pvVar4;
        if ((char)uVar3 != '\0') goto LAB_0040ac8f;
        break;
      }
      if (iVar2 == 0) {
        pvVar4 = (void *)FUN_0040aa3b(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          bVar1 = true;
          local_5 = '\x01';
          goto LAB_0040ad62;
        }
        goto LAB_0040ad54;
      }
      pvVar4 = (void *)FUN_0040ab71(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_0040ac8f:
    pvVar4 = local_c;
    local_10 = 0;
    if (!bVar1) {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      local_10 = FUN_0040a422(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    uVar3 = FUN_0040a422(&local_38);
    in_EAX = *(uint *)((int)this + 0x18);
    uVar3 = uVar3 + local_10;
    if (uVar3 <= (-(uint)(*(uint *)((int)this + 0x14) < in_EAX) &
                 in_EAX - *(int *)((int)this + 0x14))) {
      memmove_s((void *)(uVar3 + (int)pvVar4),(in_EAX - uVar3) - (int)pvVar4,pvVar4,
                *(int *)((int)this + 0x14) - (int)pvVar4);
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + uVar3);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_0040a44d(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_0040a3d7(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_0040a44d(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_0040ad54:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_0040ada6 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040ada6(uint param_1,int param_2,undefined2 *param_3)

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
  
  local_14 = DAT_00420100 ^ (uint)&stack0xfffffff0;
  local_1028 = 0;
  local_1034 = 0;
  local_1038 = param_3;
  local_103c = param_1 + param_2 * 8;
  local_1024 = param_1;
  while( true ) {
    FUN_0040a5c0(local_106c,*local_1038,local_1038[1],*(undefined1 *)(local_1038 + 2),local_1038[3],
                 *(undefined1 *)(local_1038 + 4));
    local_1020 = 0x1000;
    uVar2 = FUN_00408d01(extraout_ECX,&local_102c,local_1018,&local_1020);
    FUN_00407fc1(uVar2);
    if (uVar2 != 0) {
      local_102c = 0;
      local_1020 = 0;
    }
    FUN_0040a6c7(local_106c,local_1018,local_1020,0x1000);
    if (local_104b != '\0') break;
    local_10ac = &local_1030;
    local_1030 = 0;
    puStack_10a8 = &local_1034;
    local_10b0 = &PTR_FUN_00401614;
    puStack_10a4 = local_106c;
    local_1078 = &local_10b0;
    local_1048 = local_10ac;
    local_1044 = puStack_10a8;
    local_1040 = puStack_10a4;
    uVar3 = FUN_0040a7bb(local_1038,(int)local_10b8);
    uVar2 = local_1024;
    local_1019 = (char)uVar3;
    if (local_104c == '\0') {
LAB_0040af61:
      uVar2 = uVar2 + 8;
      local_1034 = local_1030;
      local_1024 = uVar2;
    }
    else {
      iVar4 = local_1058 - local_105c;
      iVar4 = FUN_00408d55(local_1024,local_105c,iVar4,iVar4,iVar4,local_102c,1);
      if (iVar4 != -0x3fffffff) {
        if (iVar4 != 0) {
          FUN_00408d55(uVar2,local_105c,local_1058 - local_105c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_0040af61;
      }
      local_1028 = local_1028 + 1;
      local_1019 = '\0';
    }
    uVar1 = local_1028;
    FUN_00415b5f(&local_1050);
    uVar3 = extraout_EDX;
    if (((local_1019 != '\0') || (local_103c <= uVar2)) || (0x31 < uVar1)) goto LAB_0040afb4;
  }
  FUN_00415b5f(&local_1050);
  uVar3 = extraout_EDX_00;
LAB_0040afb4:
  FUN_0041e250(local_14 ^ (uint)&stack0xfffffff0,uVar3);
  return;
}



/* Function: FUN_0040afcf */

void * __fastcall FUN_0040afcf(void *param_1)

{
  FUN_0040a5c0(param_1,0,4,1,4,0);
  FUN_0040a5c0((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_0040a5c0((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_0040b011 */

void __fastcall FUN_0040b011(undefined2 *param_1,undefined4 param_2)

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
  
  local_c = DAT_00420100 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_00402a90;
    local_3c = DAT_00402a8c;
    local_30 = DAT_00402a70;
    local_34 = DAT_00402a6c;
    local_28 = DAT_00402bb0;
    local_2c = DAT_00402bac;
    FUN_0040ada6((uint)&local_3c,3,param_1);
    param_2 = extraout_EDX;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00402c44;
    local_34 = DAT_00402920;
    local_38 = DAT_00402c48;
    local_2c = DAT_00402a74;
    local_30 = DAT_00402924;
    local_28 = DAT_00402a78;
    FUN_0040ada6((uint)&local_3c,3,param_1 + 0x12);
    param_2 = extraout_EDX_00;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00402ba4;
    local_34 = DAT_00402890;
    local_38 = DAT_00402ba8;
    local_2c = DAT_00402b74;
    local_30 = DAT_00402894;
    local_24 = DAT_004029cc;
    local_28 = DAT_00402b78;
    local_1c = DAT_00402a14;
    local_20 = DAT_004029d0;
    local_14 = DAT_00402b8c;
    local_18 = DAT_00402a18;
    local_10 = DAT_00402b90;
    FUN_0040ada6((uint)&local_3c,6,param_1 + 0x24);
    param_2 = extraout_EDX_01;
  }
  FUN_0041e250(local_c ^ (uint)&local_3c,param_2);
  return;
}



/* Function: FUN_0040b167 */

void __thiscall FUN_0040b167(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_00409dd2(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_0040b1de */

void __thiscall FUN_0040b1de(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_0040b23d */

void __thiscall FUN_0040b23d(void *this,PSRWLOCK param_1)

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
            goto LAB_0040b2c2;
          }
        } while (uVar3 < uVar2);
      }
      local_14 = 0;
LAB_0040b2c2:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_10 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_00421328)(local_14);
        (*local_10)();
      }
      if (this != (void *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
    } while (uVar3 < uVar2);
  }
  return;
}



/* Function: FUN_0040b310 */

void __fastcall FUN_0040b310(void *param_1)

{
  FUN_0040b33d(param_1);
  FUN_00415b5f((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_0040b4ce((int)param_1 + 4);
  return;
}



/* Function: FUN_0040b33d */

void __fastcall FUN_0040b33d(void *param_1)

{
  undefined4 extraout_EDX;
  undefined2 local_70 [54];
  
  FUN_0040afcf(local_70);
  FUN_0040b481(param_1,local_70);
  FUN_0040b011(local_70,extraout_EDX);
  FUN_0040b4ce((int)local_70);
  return;
}



/* Function: FUN_0040b374 */

undefined1 __thiscall FUN_0040b374(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_00415b13((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_00415af0((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_0040b3cd */

undefined1 __thiscall FUN_0040b3cd(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_0040b438((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_0040b374(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040b438 */

void __fastcall FUN_0040b438(PSRWLOCK param_1)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar1;
  undefined2 local_70 [54];
  
  FUN_0040afcf(local_70);
  AcquireSRWLockExclusive(param_1);
  FUN_0040b481(param_1,local_70);
  uVar1 = extraout_EDX;
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
    uVar1 = extraout_EDX_00;
  }
  FUN_0040b011(local_70,uVar1);
  FUN_0040b4ce((int)local_70);
  return;
}



/* Function: FUN_0040b481 */

void __thiscall FUN_0040b481(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_0040a63e(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_0040a63e((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_0040a63e((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_0040b4ce */

void __fastcall FUN_0040b4ce(int param_1)

{
  FUN_00415b5f((int *)(param_1 + 100));
  FUN_00415b5f((int *)(param_1 + 0x40));
  FUN_00415b5f((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_0040b4f2 */

void __fastcall FUN_0040b4f2(undefined1 *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_00415b7f(piVar3,0);
  FUN_00415b7f(param_1 + 0x1c,0);
  FUN_00415b5f((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0040b96b(*(int *)(param_1 + 0x78));
  }
  FUN_00415b5f((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_0040a36c(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_00415b5f((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00416e3f(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*piVar3 != 0) {
    FUN_00416e3f((PTP_TIMER)*piVar3);
  }
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    cVar1 = FUN_00408330();
    if (cVar1 == '\0') {
      FUN_00416dfc(piVar3 + 1,(undefined4 *)&stack0xfffffff8);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_00415cfa(piVar3 + 2,0);
        FUN_00415cfa(piVar3 + 3,0);
        if (piVar3 != (int *)0x0) {
          DVar2 = GetLastError();
          FUN_00409421(piVar3);
          SetLastError(DVar2);
        }
        FUN_00416613((int)piVar3);
        DVar2 = 0;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,DVar2,piVar3);
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        FUN_00409421(piVar3);
      }
    }
    else {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_0040b33d(piVar3 + 4);
      }
    }
    return;
  }
  return;
}



/* Function: FUN_0040b58c */

void __thiscall FUN_0040b58c(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((((*this != '\0') && (bVar1 = FUN_0040b73d((int)this), bVar1)) &&
      (cVar2 = FUN_0040b3cd(*(void **)((int)this + 0xc),param_1,param_2,param_3), cVar2 != '\0')) &&
     (cVar2 = FUN_00408330(), cVar2 == '\0')) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    FUN_0040b7ca(this);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040b5e9 */

void __thiscall FUN_0040b5e9(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_00408330(), cVar1 == '\0')) &&
     (bVar2 = FUN_0040b73d((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_0040b167(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x40b920,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_0040b167((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040b689 */

void __fastcall FUN_0040b689(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00408330();
  if (cVar1 == '\0') {
    bVar2 = FUN_0040b73d(param_1);
    if (bVar2) {
      FUN_0040b23d(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_0040b438(*(PSRWLOCK *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



/* Function: FUN_0040b6bf */

void __fastcall
FUN_0040b6bf(char *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  if ((*param_1 != '\0') && (cVar1 = FUN_00408330(), param_2 = extraout_EDX, cVar1 == '\0')) {
    SRWLock = (PSRWLOCK)(param_1 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    local_e = 0;
    local_14 = param_3;
    local_10 = param_4;
    local_c = param_5;
    FUN_00409dd2(param_1 + 0x7c,&local_14,0xc);
    FUN_0040b82b(param_1);
    param_2 = extraout_EDX_00;
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
      param_2 = extraout_EDX_01;
    }
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040b73d */

bool __fastcall FUN_0040b73d(int param_1)

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
        iVar1 = FUN_00416058(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_0040b7ca */

void __fastcall FUN_0040b7ca(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00419bb0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00415b7f(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00409cc5(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_0040b82b */

void __fastcall FUN_0040b82b(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00419bf0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00415b7f(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00409cc5(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_0040b890 */

void FUN_0040b890(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_0040b23d(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_0040b8b3 */

bool __fastcall FUN_0040b8b3(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_00420530;
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0x4c);
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_00408b13("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_00420530 = pcVar2, pcVar2 == (code *)0x0)) {
      iVar3 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_00421328)(FUN_0040b890,param_1,0,piVar1);
      iVar3 = (*pcVar2)();
    }
  }
  return iVar3 == 0;
}



/* Function: FUN_0040b920 */

void FUN_0040b920(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_0040b23d(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_0040b943 */

LPCRITICAL_SECTION __fastcall FUN_0040b943(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_0040b96b */

void FUN_0040b96b(int param_1)

{
  if ((param_1 != 0) && (DAT_004207f4 != (PSRWLOCK)0x0)) {
    FUN_0040b1de(DAT_004207f4 + 0x1c,DAT_004207f4,param_1);
  }
  return;
}



/* Function: FUN_0040b996 */

bool __fastcall
FUN_0040b996(uint *param_1,undefined4 param_2,byte param_3,int param_4,undefined4 *param_5)

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
  
  puVar5 = &DAT_00420698;
  if (param_4 != 0) {
    puVar5 = &DAT_00420528;
  }
  local_c = param_1;
  if ((*puVar5 & 2) != 0) {
    if ((*puVar5 & 1) == 0) {
      return false;
    }
    *param_5 = 1;
    iVar2 = FUN_00409244(param_1,param_2,(uint)param_3,(uint *)0x0);
    return iVar2 != 0;
  }
  iVar2 = FUN_0040bf90();
  local_8 = 0;
  *param_5 = 1;
  iVar3 = FUN_00409244(local_c,param_2,(uint)param_3,&local_8);
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
  if (DAT_0042017c == '\0') {
    return bVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((iVar2 != 0) && (iVar2 == DAT_0042018c)) {
    local_14 = 0;
    local_10 = puVar5;
    uVar4 = FUN_00409dd2(&DAT_004201a8,&local_14,8);
    if ((char)uVar4 != '\0') goto LAB_0040ba6e;
  }
  LOCK();
  *puVar5 = *puVar5 & 0xfffff7c1;
  UNLOCK();
LAB_0040ba6e:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  return bVar6;
}



/* Function: FUN_0040ba90 */

uint FUN_0040ba90(undefined4 param_1,uint param_2,undefined4 *param_3)

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
  bVar1 = FUN_0040b996(local_20,param_1,(byte)uVar3,param_2 >> 7 & 1,param_3);
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



/* Function: FUN_0040bb10 */

void FUN_0040bb10(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_0040b689(0x4207e8);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_00409344(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_0040b58c(&DAT_004207e8,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_0040b6bf(&DAT_004207e8,param_2 >> 0x1f,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_0040bb90 */

void FUN_0040bb90(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_0040b5e9(&DAT_004207e8,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_004207e8 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_004207f8);
      bVar1 = FUN_0040b8b3(0x4207e8);
      if (bVar1) {
        FUN_0040b167(&DAT_0042080c,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004207f8);
    }
  }
  return;
}



/* Function: FUN_0040bc00 */

void FUN_0040bc00(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_004207e8 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_00420838;
  }
  else {
    if (DAT_004207e8 == '\0') {
      return;
    }
    this = &DAT_0042080c;
  }
  FUN_0040b1de(this,(PSRWLOCK)&DAT_004207f8,param_1);
  return;
}



/* Function: FUN_0040bc44 */

void __fastcall FUN_0040bc44(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_0042059c;
  if ((DAT_0042059c != (code *)0x0) || (pcVar1 = DAT_004205e4, DAT_004205e4 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00421328)(param_1,param_2,param_3,0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040bc7a */

void FUN_0040bc7a(int param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ushort *)(param_1 + 4);
    do {
      FUN_0040bc44(*(undefined4 *)(puVar1 + -2),(uint)*puVar1,(uint)puVar1[1]);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Function: FUN_0040bcb3 */

void __fastcall FUN_0040bcb3(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_004205cc;
  if ((DAT_004205cc == (code *)0x0) && (pcVar1 = DAT_004205f0, DAT_004205f0 == (code *)0x0)) {
    *param_1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00421328)(param_1,param_2,param_3);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040bceb */

void FUN_0040bceb(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00420688;
  if ((DAT_00420688 != (code *)0x0) || (pcVar1 = DAT_00420690, DAT_00420690 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040bd1d */

void __fastcall FUN_0040bd1d(undefined1 *param_1)

{
  int *this;
  
  this = (int *)(param_1 + 8);
  *param_1 = 0;
  FUN_00415b7f(this,0);
  *param_1 = 0;
  FUN_0040bee7((int)param_1);
  FUN_00415b5f((int *)(param_1 + 0x38));
  FUN_00415b5f((int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0040bceb(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0040bceb(*(undefined4 *)(param_1 + 0x14));
  }
  if (*this != 0) {
    FUN_00416e3f((PTP_TIMER)*this);
  }
  return;
}



/* Function: FUN_0040bd7d */

void __thiscall FUN_0040bd7d(void *this,char *param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  char cVar1;
  char *local_c;
  void *local_8;
  
                    /* WARNING: Load size is inaccurate */
  if ((*this != '\0') &&
     (local_c = (char *)this, local_8 = this, cVar1 = FUN_00408330(), cVar1 == '\0')) {
    SRWLock = (PSRWLOCK)((int)this + 4);
    AcquireSRWLockExclusive(SRWLock);
    local_c = param_1;
    local_8 = (void *)param_2;
    FUN_00409dd2((void *)((int)this + 0x1c),&local_c,8);
    FUN_0040bf2f(this);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040bdd8 */

void __fastcall FUN_0040bdd8(char *param_1)

{
  PSRWLOCK SRWLock;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    FUN_0040bee7((int)param_1);
    param_1[0xc] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040be0c */

void __fastcall FUN_0040be0c(char *param_1)

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



/* Function: FUN_0040be71 */

undefined4 __fastcall FUN_0040be71(char *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  undefined4 uVar2;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x14) == 0) {
      piVar1 = FUN_00415a92((int *)(param_1 + 0x14));
      FUN_0040bcb3(piVar1,FUN_0040bed0,param_1);
      if (*(int *)(param_1 + 0x14) != 0) {
        uVar2 = 1;
        param_1[0x10] = '\x01';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
      }
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    return uVar2;
  }
  return 0;
}



/* Function: FUN_0040bed0 */

void FUN_0040bed0(char *param_1)

{
  FUN_0040be0c(param_1);
  return;
}



/* Function: FUN_0040bee7 */

void __fastcall FUN_0040bee7(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (7 < (uint)((int)puVar1 - (int)puVar2)) {
    for (; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      FUN_0040912a(*puVar2,(uint *)puVar2[1]);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    FUN_0040bc44(0,0xfe,0);
  }
  return;
}



/* Function: FUN_0040bf2f */

void __fastcall FUN_0040bf2f(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 8);
  if (*(char *)((int)param_1 + 0xc) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00419c40,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00415b7f(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00409cc5(this,(char *)((int)param_1 + 0xc),300000,0);
  }
  return;
}



/* Function: FUN_0040bf90 */

void FUN_0040bf90(void)

{
  if (DAT_0042018c == 0) {
    FUN_0040be71(&DAT_0042017c);
    return;
  }
  return;
}



/* Function: FUN_0040bfab */

undefined4 __fastcall FUN_0040bfab(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = DAT_00420664;
  if ((DAT_00420664 == (code *)0x0) && (pcVar2 = DAT_00420668, DAT_00420668 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00421328)(param_1,param_2,param_3);
    uVar1 = (*pcVar2)();
  }
  return uVar1;
}



/* Function: FUN_0040bfe3 */

void __fastcall
FUN_0040bfe3(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_004205ac;
  if ((DAT_004205ac != (code *)0x0) && ((param_2 == 0 || (param_2 - 100U < 0x32)))) {
    (*(code *)PTR_guard_check_icall_00421328)(param_1,param_2,1);
    (*pcVar1)();
  }
  if (*param_5 != 0) {
    FUN_0040bd7d(&DAT_0042017c,param_1,param_4);
  }
  if (param_5[1] != 0) {
    FUN_0040bc44(param_1,param_5[2],param_5[1]);
  }
  if ((param_5[4] == 0) && (DAT_0042017c != '\0')) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
    if (DAT_00420194 == 0) {
      uVar3 = 0xffffffff;
      piVar2 = FUN_00415a92(&DAT_00420194);
      FUN_0040bcb3(piVar2,FUN_0040c090,uVar3);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  }
  return;
}



/* Function: FUN_0040c090 */

void FUN_0040c090(void)

{
  FUN_0040bdd8(&DAT_0042017c);
  return;
}



/* Function: FUN_0040c0a3 */

bool __fastcall
FUN_0040c0a3(uint *param_1,char *param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint local_3c [7];
  uint local_20 [4];
  int local_10;
  char *local_8;
  
  local_8 = param_2;
  puVar3 = FUN_00408e2b(param_1,param_5,local_3c);
  puVar6 = local_20;
  for (iVar4 = 6; pcVar2 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0040bfe3(local_8,param_5,0,param_1,(int *)local_20);
  if (param_3 != 0) {
    uVar5 = param_5 | 0x80000000;
    if (param_4 == 0) {
      uVar5 = param_5;
    }
    FUN_0040bc44(pcVar2,uVar5,0);
  }
  pcVar1 = DAT_004205d8;
  if ((local_10 == 0) && (DAT_004205d8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00421328)(local_8,param_5,param_8);
    (*pcVar1)();
  }
  return local_10 == 0;
}



/* Function: FUN_0040c135 */

void __fastcall
FUN_0040c135(uint *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7
            )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  if (param_7 != 0) {
    uVar3 = FUN_00408dae(param_7,param_6);
    uVar4 = (uint)*(byte *)(param_5 + 4);
    bVar2 = FUN_0040c0a3(param_1,param_2,param_3,param_4,uVar3,uVar4,uVar4,uVar4);
    pcVar1 = DAT_004206a0;
    if ((CONCAT31(extraout_var,bVar2) != 0) && (DAT_004206a0 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_00421328)(param_2,param_5,0,param_6,&param_7,0,0,1);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_0040c1b0 */

void FUN_0040c1b0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  FUN_0040bc44(param_1,param_2 | 0x40000000,param_3);
  return;
}



/* Function: FUN_0040c1d4 */

DWORD FUN_0040c1d4(void)

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



/* Function: FUN_0040c1fb */

undefined4 __thiscall FUN_0040c1fb(void *this,undefined4 *param_1)

{
  SIZE_T cb;
  LPVOID pv;
  LPVOID _Dst;
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0x2c) = *param_1;
  *(undefined4 *)((int)this + 0x30) = param_1[1];
  *(undefined4 *)((int)this + 0x34) = param_1[2];
  *(undefined4 *)((int)this + 0x38) = param_1[3];
  *(undefined4 *)((int)this + 0x3c) = param_1[4];
  cb = param_1[5];
  *(undefined4 *)((int)this + 0x40) = 0;
  *(SIZE_T *)((int)this + 0x28) = cb;
  _Dst = CoTaskMemAlloc(cb);
  pv = *(LPVOID *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x24) = 0;
  CoTaskMemFree(pv);
  *(LPVOID *)((int)this + 0x24) = _Dst;
  uVar1 = 0x8007000e;
  if (_Dst != (LPVOID)0x0) {
    uVar1 = 0;
    memcpy(_Dst,(void *)param_1[6],param_1[5]);
  }
  return uVar1;
}



/* Function: FUN_0040c270 */

undefined4 FUN_0040c270(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  return 0;
}



/* Function: FUN_0040c290 */

undefined4 FUN_0040c290(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x2c);
  param_2[1] = *(undefined4 *)(param_1 + 0x30);
  param_2[2] = *(undefined4 *)(param_1 + 0x34);
  param_2[3] = *(undefined4 *)(param_1 + 0x38);
  return 0;
}



/* Function: FUN_0040c2c0 */

undefined4 FUN_0040c2c0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x3c);
  return 0;
}



/* Function: FUN_0040c2e0 */

undefined4 FUN_0040c2e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  LPVOID _Dst;
  undefined4 uVar1;
  LPVOID pv;
  
  *param_2 = 0;
  *param_3 = 0;
  _Dst = CoTaskMemAlloc(*(SIZE_T *)(param_1 + 0x24));
  CoTaskMemFree((LPVOID)0x0);
  uVar1 = 0x8007000e;
  pv = _Dst;
  if (_Dst != (LPVOID)0x0) {
    uVar1 = 0;
    memcpy(_Dst,*(void **)(param_1 + 0x20),*(size_t *)(param_1 + 0x24));
    pv = (LPVOID)0x0;
    *param_3 = _Dst;
    *param_2 = *(undefined4 *)(param_1 + 0x24);
  }
  CoTaskMemFree(pv);
  return uVar1;
}



/* Function: FUN_0040c350 */

int FUN_0040c350(int param_1,undefined4 *param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_2 = 0;
  psVar1 = *(short **)(param_1 + 0x40);
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    iVar2 = FUN_00415968((undefined4 *)(param_1 + 0x40),param_2);
  }
  return iVar2;
}



/* Function: FUN_0040c383 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040c383(void)

{
  BOOL BVar1;
  undefined *local_18;
  int local_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00420728,0,&local_14,&local_18);
  if ((BVar1 != 0) && (local_14 != 0)) {
    puStack_10 = &DAT_00420728;
    local_18 = &DAT_0042072c;
    _DAT_00420730 = 0;
    DAT_00420734 = 0;
    _DAT_00420738 = 0;
    _DAT_0042072c = &PTR_FUN_00401478;
    _DAT_0042073c = &DAT_00420050;
    FUN_0041e372(FUN_0040c420);
    uStack_c = 0;
    FUN_00416225((int *)&puStack_10);
  }
  return local_18;
}



/* Function: FUN_0040c420 */

void FUN_0040c420(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00420728,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_00421328)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040c470 */

void __fastcall FUN_0040c470(PSRWLOCK param_1)

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
    FUN_00414707(param_1);
    puVar2 = FUN_0040c383();
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x4000);
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
        local_44 = &DAT_00402888;
        FUN_00405a9b(extraout_ECX,&DAT_0040456b,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX,
                     &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28
                     ,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8)
        ;
      }
    }
  }
  else {
    FUN_00414707(param_1);
    puVar2 = FUN_0040c383();
    this = *(uint **)(puVar2 + 4);
    if (5 < *this) {
      uVar3 = FUN_00405a58(this,0,0x4000);
      if ((char)uVar3 != '\0') {
        local_44 = (undefined *)GetCurrentThreadId();
        local_3c = &DAT_00402888;
        local_40 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
        FUN_00405e65((int)this,&DAT_00405181,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX_00,
                     &local_3c,&local_40,&local_44);
      }
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_00409aa5(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_0040c610 */

bool FUN_0040c610(int param_1)

{
  bool bVar1;
  
  bVar1 = DAT_00420148 == param_1;
  DAT_00420148 = param_1;
  return bVar1;
}



/* Function: FUN_0040c631 */

void __fastcall FUN_0040c631(PSRWLOCK param_1)

{
  PSRWLOCK pRVar1;
  code *pcVar2;
  bool bVar3;
  PSRWLOCK local_c [2];
  
  bVar3 = true;
  pRVar1 = param_1 + 0x2b;
  param_1->Ptr = &PTR_FUN_0040170c;
  local_c[0] = param_1;
  if (pRVar1->Ptr != (PVOID)0x0) {
    FUN_0041631a(param_1,local_c);
                    /* WARNING: Load size is inaccurate */
    if (((int *)pRVar1->Ptr == (int *)0x0) || (*pRVar1->Ptr != 1)) {
      bVar3 = false;
      FUN_0041642c(pRVar1);
    }
    if (local_c[0] != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_c[0]);
    }
    if (!bVar3) goto LAB_0040c6a6;
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_1[0x2a].Ptr == 1) {
    FUN_004162b7((int)param_1[0x2a].Ptr);
    pcVar2 = *(code **)((int)param_1->Ptr + 4);
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar2)();
  }
LAB_0040c6a6:
  FUN_0040d125((int)param_1);
  return;
}



/* Function: FUN_0040c6ba */

void __thiscall FUN_0040c6ba(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *this_00;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  LPCGUID pGVar5;
  DWORD local_8c;
  undefined4 local_88;
  PSRWLOCK local_84;
  _EVENT_DATA_DESCRIPTOR local_80 [2];
  undefined *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  DWORD *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [4];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_88 = param_1;
  FUN_0041631a(this,&local_84);
  puVar1 = *(undefined4 **)((int)this + 0xa8);
  puVar2 = FUN_0040c383();
  if (**(uint **)(puVar2 + 4) < 6) {
LAB_0040c717:
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    param_1 = local_88;
  }
  else {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x4000);
    if ((char)uVar3 == '\0') goto LAB_0040c717;
    EventActivityIdControl(3,(LPGUID)(puVar1 + 2));
  }
  *puVar1 = 1;
  if (local_84 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_84);
  }
  puVar2 = FUN_0040c383();
  this_00 = *(uint **)(puVar2 + 4);
  uVar4 = extraout_EDX;
  if (*this_00 < 6) goto LAB_0040c820;
  uVar3 = FUN_00405a58(this_00,0,0x4000);
  uVar4 = extraout_EDX_00;
  if ((char)uVar3 == '\0') goto LAB_0040c820;
  local_88 = param_2;
  local_84 = (PSRWLOCK)WindowsGetStringRawBuffer(param_1,0);
  local_8c = GetCurrentThreadId();
  if (*(char *)(*(int *)((int)this + 0xa8) + 4) == '\0') {
LAB_0040c79d:
    pGVar5 = (LPCGUID)0x0;
  }
  else {
    pGVar5 = (LPCGUID)(*(int *)((int)this + 0xa8) + 0x18);
    uVar4 = FUN_00409e17((int *)pGVar5);
    if ((char)uVar4 != '\0') goto LAB_0040c79d;
  }
  local_1c = 0;
  local_14 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = param_3;
  local_30 = &local_88;
  local_18 = 0x10;
  local_28 = 4;
  FUN_00406c14(&local_84,local_40);
  local_50 = &local_8c;
  local_48 = 4;
  local_4c = 0;
  local_44 = 0;
  local_5c = 0;
  local_54 = 0;
  local_60 = &DAT_00402888;
  local_58 = 8;
  FUN_004059c3((int)this_00,&DAT_004033cd,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),pGVar5,7,
               local_80);
  uVar4 = extraout_EDX_01;
LAB_0040c820:
  if (*(int *)((int)this + 0xbc) == 0) {
    FUN_00409a42((undefined4 *)((int)this + 0xb0));
    uVar4 = extraout_EDX_02;
  }
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040c84b */

void __thiscall FUN_0040c84b(void *this,undefined1 param_1,undefined1 param_2,undefined *param_3)

{
  int iVar1;
  uint *this_00;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar4;
  undefined4 extraout_EDX_05;
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
  undefined *local_a4;
  undefined *local_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined1 local_92;
  undefined1 local_91;
  _EVENT_DATA_DESCRIPTOR local_90 [2];
  undefined *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 **local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)this + 0xa8);
  if (((*(int *)(iVar1 + 0x38) < 0) && (*(int *)(iVar1 + 0x38) == *(int *)(iVar1 + 0x44))) &&
     ((undefined4 *)(iVar1 + 0x3c) != (undefined4 *)0x0)) {
    FUN_00414707((PSRWLOCK)this);
    puVar2 = FUN_0040c383();
    uVar4 = extraout_EDX;
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x4000);
      uVar4 = extraout_EDX_00;
      if ((char)uVar3 != '\0') {
        local_a4 = param_3;
        local_91 = param_2;
        local_92 = param_1;
        local_a8 = *(undefined4 *)(iVar1 + 0x84);
        local_ac = *(undefined4 *)(iVar1 + 0x80);
        local_b0 = *(undefined4 *)(iVar1 + 0x7c);
        local_b4 = *(undefined4 *)(iVar1 + 0x78);
        local_b8 = *(undefined4 *)(iVar1 + 0x74);
        local_bc = *(undefined4 *)(iVar1 + 0x70);
        local_c0 = *(undefined4 *)(iVar1 + 0x6c);
        local_c4 = *(undefined4 *)(iVar1 + 0x54);
        local_c8 = *(undefined4 *)(iVar1 + 0x50);
        local_cc = *(undefined4 *)(iVar1 + 0x3c);
        local_d0 = *(undefined4 *)(iVar1 + 0x88);
        local_d4 = *(undefined4 *)(iVar1 + 100);
        local_d8 = *(undefined4 *)(iVar1 + 0x60);
        local_98 = *(undefined4 *)(iVar1 + 0x44);
        local_9c = &local_e0;
        local_dc = 0;
        local_e0 = 0x1000000;
        local_a0 = &DAT_00402888;
        FUN_00405f46(extraout_ECX,&DAT_0040469f,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                     extraout_ECX,&local_a0,&local_9c,&local_98,&local_d8,&local_d4,&local_d0,
                     &local_cc,&local_c8,&local_c4,&local_c0,&local_bc,&local_b8,&local_b4,&local_b0
                     ,&local_ac,&local_a8,&local_92,&local_91,&local_a4);
        uVar4 = extraout_EDX_01;
      }
    }
  }
  else {
    FUN_00414707((PSRWLOCK)this);
    puVar2 = FUN_0040c383();
    this_00 = *(uint **)(puVar2 + 4);
    uVar4 = extraout_EDX_02;
    if (5 < *this_00) {
      uVar3 = FUN_00405a58(this_00,0,0x4000);
      uVar4 = extraout_EDX_03;
      if ((char)uVar3 != '\0') {
        local_a0 = param_3;
        local_92 = param_2;
        local_91 = param_1;
        local_9c = (undefined4 *)GetCurrentThreadId();
        iVar1 = *(int *)((int)this + 0xa8);
        local_98 = *(undefined4 *)(iVar1 + 0x38);
        FUN_00406c14(&local_a0,local_20);
        local_30 = &local_92;
        local_70 = &DAT_00402888;
        local_40 = &local_91;
        local_28 = 1;
        local_50 = &local_9c;
        local_38 = 1;
        local_60 = &local_98;
        local_48 = 4;
        local_58 = 4;
        local_2c = 0;
        local_24 = 0;
        local_3c = 0;
        local_34 = 0;
        local_4c = 0;
        local_44 = 0;
        local_5c = 0;
        local_54 = 0;
        local_6c = 0;
        local_68 = 8;
        local_64 = 0;
        FUN_004059c3((int)this_00,&DAT_004035bb,(LPCGUID)(iVar1 + 8),(LPCGUID)0x0,8,local_90);
        uVar4 = extraout_EDX_04;
      }
    }
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    FUN_00409aa5((undefined4 *)((int)this + 0xb0));
    uVar4 = extraout_EDX_05;
  }
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040cb30 */

void __fastcall FUN_0040cb30(PSRWLOCK param_1)

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
    FUN_00414707(param_1);
    puVar2 = FUN_0040c383();
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
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
        local_44 = &DAT_00402888;
        FUN_00405a9b(extraout_ECX,&DAT_00403b09,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX,
                     &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28
                     ,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8)
        ;
      }
    }
  }
  else {
    FUN_00414707(param_1);
    puVar2 = FUN_0040c383();
    this = *(uint **)(puVar2 + 4);
    if (5 < *this) {
      uVar3 = FUN_00405a58(this,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_44 = (undefined *)GetCurrentThreadId();
        local_3c = &DAT_00402888;
        local_40 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
        FUN_00405e65((int)this,&DAT_00405291,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX_00,
                     &local_3c,&local_40,&local_44);
      }
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_00409aa5(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_0040cccc */

void __fastcall FUN_0040cccc(PSRWLOCK param_1)

{
  PSRWLOCK pRVar1;
  code *pcVar2;
  bool bVar3;
  PSRWLOCK local_c [2];
  
  bVar3 = true;
  pRVar1 = param_1 + 0x2b;
  param_1->Ptr = &PTR_FUN_00401488;
  local_c[0] = param_1;
  if (pRVar1->Ptr != (PVOID)0x0) {
    FUN_0041631a(param_1,local_c);
                    /* WARNING: Load size is inaccurate */
    if (((int *)pRVar1->Ptr == (int *)0x0) || (*pRVar1->Ptr != 1)) {
      bVar3 = false;
      FUN_00416464(pRVar1);
    }
    if (local_c[0] != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_c[0]);
    }
    if (!bVar3) goto LAB_0040cd41;
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_1[0x2a].Ptr == 1) {
    FUN_004162b7((int)param_1[0x2a].Ptr);
    pcVar2 = *(code **)((int)param_1->Ptr + 4);
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar2)();
  }
LAB_0040cd41:
  FUN_0040d0f5((int)param_1);
  return;
}



/* Function: FUN_0040cd55 */

void __thiscall FUN_0040cd55(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  uint *this_00;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
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
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_68 = param_1;
  FUN_0041631a(this,&local_64);
  puVar1 = *(undefined4 **)((int)this + 0xa8);
  puVar2 = FUN_0040c383();
  if (**(uint **)(puVar2 + 4) < 6) {
LAB_0040cdac:
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    param_1 = local_68;
  }
  else {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
    if ((char)uVar3 == '\0') goto LAB_0040cdac;
    EventActivityIdControl(3,(LPGUID)(puVar1 + 2));
  }
  *puVar1 = 1;
  if (local_64 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_64);
  }
  puVar2 = FUN_0040c383();
  this_00 = *(uint **)(puVar2 + 4);
  uVar4 = extraout_EDX;
  if (*this_00 < 6) goto LAB_0040ce76;
  uVar3 = FUN_00405a58(this_00,0,0x2000);
  uVar4 = extraout_EDX_00;
  if ((char)uVar3 == '\0') goto LAB_0040ce76;
  local_68 = WindowsGetStringRawBuffer(param_1,0);
  local_64 = (PSRWLOCK)GetCurrentThreadId();
  if (*(char *)(*(int *)((int)this + 0xa8) + 4) == '\0') {
LAB_0040ce23:
    pGVar5 = (LPCGUID)0x0;
  }
  else {
    pGVar5 = (LPCGUID)(*(int *)((int)this + 0xa8) + 0x18);
    uVar4 = FUN_00409e17((int *)pGVar5);
    if ((char)uVar4 != '\0') goto LAB_0040ce23;
  }
  FUN_00406c14(&local_68,local_20);
  local_30 = &local_64;
  local_28 = 4;
  local_2c = 0;
  local_24 = 0;
  local_3c = 0;
  local_34 = 0;
  local_40 = &DAT_00402888;
  local_38 = 8;
  FUN_004059c3((int)this_00,&DAT_00404d3a,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),pGVar5,5,
               local_60);
  uVar4 = extraout_EDX_01;
LAB_0040ce76:
  if (*(int *)((int)this + 0xbc) == 0) {
    FUN_00409a42((undefined4 *)((int)this + 0xb0));
    uVar4 = extraout_EDX_02;
  }
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040cea1 */

void __thiscall FUN_0040cea1(void *this,undefined *param_1)

{
  int iVar1;
  uint *this_00;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar4;
  undefined4 extraout_EDX_05;
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
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)this + 0xa8);
  if (((*(int *)(iVar1 + 0x38) < 0) && (*(int *)(iVar1 + 0x38) == *(int *)(iVar1 + 0x44))) &&
     ((undefined4 *)(iVar1 + 0x3c) != (undefined4 *)0x0)) {
    FUN_00414707((PSRWLOCK)this);
    puVar2 = FUN_0040c383();
    uVar4 = extraout_EDX;
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
      uVar4 = extraout_EDX_00;
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
        local_7c = &DAT_00402888;
        FUN_00406163(extraout_ECX,&DAT_00403c4a,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                     extraout_ECX,&local_7c,&local_78,&local_74,&local_b4,&local_b0,&local_ac,
                     &local_a8,&local_a4,&local_a0,&local_9c,&local_98,&local_94,&local_90,&local_8c
                     ,&local_88,&local_84,&local_80);
        uVar4 = extraout_EDX_01;
      }
    }
  }
  else {
    FUN_00414707((PSRWLOCK)this);
    puVar2 = FUN_0040c383();
    this_00 = *(uint **)(puVar2 + 4);
    uVar4 = extraout_EDX_02;
    if (5 < *this_00) {
      uVar3 = FUN_00405a58(this_00,0,0x2000);
      uVar4 = extraout_EDX_03;
      if ((char)uVar3 != '\0') {
        local_7c = param_1;
        local_78 = (undefined4 *)GetCurrentThreadId();
        iVar1 = *(int *)((int)this + 0xa8);
        local_74 = *(undefined4 *)(iVar1 + 0x38);
        FUN_00406c14(&local_7c,local_20);
        local_30 = &local_78;
        local_28 = 4;
        local_40 = &local_74;
        local_2c = 0;
        local_24 = 0;
        local_3c = 0;
        local_38 = 4;
        local_34 = 0;
        local_50 = &DAT_00402888;
        local_4c = 0;
        local_48 = 8;
        local_44 = 0;
        FUN_004059c3((int)this_00,&DAT_00405103,(LPCGUID)(iVar1 + 8),(LPCGUID)0x0,6,local_70);
        uVar4 = extraout_EDX_04;
      }
    }
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    FUN_00409aa5((undefined4 *)((int)this + 0xb0));
    uVar4 = extraout_EDX_05;
  }
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040d0f5 */

void __fastcall FUN_0040d0f5(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_00409aa5((undefined4 *)(param_1 + 0xb0));
  }
  FUN_00416464((undefined4 *)(param_1 + 0xac));
  FUN_0040d155((int *)(param_1 + 4));
  return;
}



/* Function: FUN_0040d125 */

void __fastcall FUN_0040d125(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_00409aa5((undefined4 *)(param_1 + 0xb0));
  }
  FUN_0041642c((undefined4 *)(param_1 + 0xac));
  FUN_0040d17b((int *)(param_1 + 4));
  return;
}



/* Function: FUN_0040d155 */

void __fastcall FUN_0040d155(int *param_1)

{
  FUN_00407d87(param_1 + 0x25);
  FUN_00409e35((int)(param_1 + 10));
  FUN_004156d8(param_1);
  return;
}



/* Function: FUN_0040d17b */

void __fastcall FUN_0040d17b(int *param_1)

{
  FUN_00407d87(param_1 + 0x25);
  FUN_00409e35((int)(param_1 + 10));
  FUN_00415449(param_1);
  return;
}



/* Function: FUN_0040d1a1 */

uint __thiscall FUN_0040d1a1(void *this,HKEY param_1,LPCWSTR param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  undefined4 *local_18;
  HKEY local_14;
  undefined1 local_10;
  int local_c [2];
  
  local_14 = (HKEY)0x0;
  local_10 = 1;
  puVar1 = (undefined4 *)((int)this + 4);
  local_18 = puVar1;
  uVar2 = RegOpenKeyExW(param_1,param_2,0,0x20019,&local_14);
  FUN_00415406(&local_18);
  if (uVar2 == 0) {
    local_c[1] = 0x100;
    uVar2 = FUN_0040d36e((HKEY)*puVar1,L"ExtensionClass",2,(PVOID)((int)this + 0x10),
                         (LPDWORD)(local_c + 1));
    if ((int)uVar2 < 0) {
      uVar3 = 0xe3;
    }
    else {
      local_c[0] = 0;
      local_c[1] = 4;
      uVar2 = FUN_0040d36e((HKEY)*puVar1,L"Test",0x10,local_c,(LPDWORD)(local_c + 1));
      if ((int)uVar2 < 0) {
        uVar3 = 0xe7;
      }
      else {
        local_c[1] = 4;
        *(bool *)((int)this + 8) = local_c[0] != 0;
        uVar2 = FUN_0040d36e((HKEY)*puVar1,L"VelocityFeatureId",0x10,(PVOID)((int)this + 0xc),
                             (LPDWORD)(local_c + 1));
        if (-1 < (int)uVar2) {
          return 0;
        }
        uVar3 = 0xeb;
      }
    }
    FUN_0040899b(unaff_retaddr,uVar3,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 uVar2);
  }
  else {
    uVar2 = FUN_004089ba(unaff_retaddr,0xe0,
                         "onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",uVar2);
  }
  return uVar2;
}



/* Function: FUN_0040d2b0 */

undefined1 __fastcall FUN_0040d2b0(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Function: FUN_0040d2c0 */

bool __fastcall FUN_0040d2c0(int param_1)

{
  return *(short *)(param_1 + 0x10) == 0;
}



/* Function: FUN_0040d2d0 */

undefined4 __fastcall FUN_0040d2d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Function: FUN_0040d2e0 */

uint __thiscall FUN_0040d2e0(void *this,short *param_1,uint param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = FUN_004077b7(param_1,param_2,(int)this + 0x10);
  if ((int)uVar1 < 0) {
    FUN_0040899b(unaff_retaddr,0x100,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040d320 */

undefined4 __thiscall FUN_0040d320(void *this,PVOID param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  DWORD local_8;
  
  local_8 = param_2 * 2;
  uVar1 = RegGetValueW(*(HKEY *)((int)this + 4),(LPCWSTR)0x0,L"ActivatableClassID",2,(LPDWORD)0x0,
                       param_1,&local_8);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004089ba(unaff_retaddr,0x107,
                         "onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",uVar1);
  }
  return uVar2;
}



/* Function: FUN_0040d36e */

undefined4 __fastcall
FUN_0040d36e(HKEY param_1,LPCWSTR param_2,DWORD param_3,PVOID param_4,LPDWORD param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  
  uVar1 = RegGetValueW(param_1,(LPCWSTR)0x0,param_2,param_3,(LPDWORD)0x0,param_4,param_5);
  uVar3 = 0;
  if (uVar1 != 2) {
    uVar3 = uVar1;
  }
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004089ba(unaff_retaddr,0x118,
                         "onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",uVar3);
  }
  return uVar2;
}



/* Function: FUN_0040d3b5 */

void __thiscall FUN_0040d3b5(void *this,undefined4 param_1)

{
  uint uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  int local_11c;
  HKEY local_118;
  undefined1 local_114;
  wchar_t local_110 [130];
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  WindowsGetStringRawBuffer(param_1,0);
  uVar1 = FUN_00407940(local_110,0x80,L"SOFTWARE\\Classes\\OneCoreContracts\\%s");
  if ((int)uVar1 < 0) {
    FUN_0040899b(unaff_retaddr,0x129,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 uVar1);
    uVar2 = extraout_EDX;
  }
  else {
    local_118 = (HKEY)0x0;
    local_11c = (int)this + 4;
    local_114 = 1;
    RegOpenKeyExW((HKEY)0x80000002,local_110,0,0x20019,&local_118);
    FUN_00415406(&local_11c);
    uVar2 = extraout_EDX_00;
  }
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040d470 */

undefined4 __thiscall FUN_0040d470(void *this,DWORD *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  void *local_8;
  
  *param_1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    local_8 = this;
    uVar1 = RegQueryInfoKeyW(*(HKEY *)((int)this + 4),(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPDWORD)&local_8,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
    if (uVar1 != 0) {
      uVar2 = FUN_004089ba(unaff_retaddr,0x137,
                           "onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",uVar1);
      return uVar2;
    }
    *param_1 = (DWORD)local_8;
  }
  return 0;
}



/* Function: FUN_0040d4d0 */

void __thiscall FUN_0040d4d0(void *this,DWORD param_1,int *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *this_00;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 extraout_EDX_00;
  undefined4 unaff_retaddr;
  DWORD local_110;
  undefined4 *local_10c;
  WCHAR local_108 [128];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_110 = 0x80;
  uVar3 = RegEnumKeyExW(*(HKEY *)((int)this + 4),param_1,local_108,&local_110,(LPDWORD)0x0,
                        (LPWSTR)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  if (uVar3 != 0) {
    FUN_004089ba(unaff_retaddr,0x141,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 uVar3);
    uVar4 = extraout_EDX;
    goto LAB_0040d5f1;
  }
  this_00 = (undefined4 *)FUN_0041e266(0x110);
  if (this_00 == (undefined4 *)0x0) {
    local_10c = (undefined4 *)0x0;
    uVar3 = 0x8007000e;
    uVar4 = 0x143;
LAB_0040d5d3:
    FUN_0040899b(unaff_retaddr,uVar4,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 uVar3);
  }
  else {
    this_00[1] = 0;
    *(undefined2 *)(this_00 + 4) = 0;
    *this_00 = &PTR_FUN_00401718;
    *(undefined1 *)(this_00 + 2) = 0;
    this_00[3] = 0;
    memset((void *)((int)this_00 + 0x12),0,0xfe);
    local_10c = this_00;
    uVar3 = FUN_0040d1a1(this_00,*(HKEY *)((int)this + 4),local_108);
    if ((int)uVar3 < 0) {
      uVar4 = 0x144;
      goto LAB_0040d5d3;
    }
    local_10c = (undefined4 *)0x0;
    puVar1 = (undefined4 *)*param_2;
    *param_2 = (int)this_00;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar1;
      (*(code *)PTR_guard_check_icall_00421328)(1);
      (*pcVar2)();
    }
  }
  FUN_004153e4(&local_10c);
  uVar4 = extraout_EDX_00;
LAB_0040d5f1:
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040d610 */

undefined4 * __thiscall FUN_0040d610(void *this,byte param_1)

{
  FUN_0040d637((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040d637 */

void __fastcall FUN_0040d637(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    RegCloseKey((HKEY)param_1[1]);
  }
  *param_1 = &PTR_purecall_004011f8;
  return;
}



/* Function: FUN_0040d659 */

uint __fastcall FUN_0040d659(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *this;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_retaddr;
  undefined4 *local_8;
  
  uVar5 = 0;
  puVar1 = (undefined4 *)*param_2;
  *param_2 = 0;
  local_8 = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_00421328)(1);
    (*pcVar2)();
  }
  puVar1 = local_8;
  this = (undefined4 *)FUN_0041e266(8);
  if (this == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
    uVar3 = 0x8007000e;
    uVar4 = 0x155;
  }
  else {
    *this = &PTR_FUN_00401300;
    this[1] = 0;
    local_8 = this;
    uVar3 = FUN_0040d3b5(this,puVar1);
    if (-1 < (int)uVar3) {
      local_8 = (undefined4 *)0x0;
      FUN_0041538c(param_2,(int)this);
      goto LAB_0040d6ed;
    }
    uVar4 = 0x156;
  }
  FUN_0040899b(unaff_retaddr,uVar4,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
               uVar3);
  uVar5 = uVar3;
LAB_0040d6ed:
  FUN_0041536a(&local_8);
  return uVar5;
}



/* Function: FUN_0040d710 */

undefined4 * __thiscall FUN_0040d710(void *this,byte param_1)

{
  FUN_0040d737((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040d737 */

void __fastcall FUN_0040d737(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    RegCloseKey((HKEY)param_1[1]);
  }
  *param_1 = &PTR_purecall_004011a0;
  return;
}



/* Function: FUN_0040d759 */

uint __fastcall FUN_0040d759(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_retaddr;
  int *local_28;
  char *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  int *local_10;
  char local_9 [5];
  
  local_14 = (int *)0x0;
  local_20 = param_2;
  uVar4 = FUN_0040d659(param_1,(int *)&local_14);
  piVar2 = local_14;
  if ((int)uVar4 < 0) {
    uVar5 = 0x160;
  }
  else {
    pcVar1 = *(code **)(*local_14 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(&local_1c);
    uVar4 = (*pcVar1)();
    if (-1 < (int)uVar4) {
      local_18 = 0;
      if (local_1c != 0) {
        do {
          local_10 = (int *)0x0;
          pcVar1 = *(code **)(*piVar2 + 8);
          (*(code *)PTR_guard_check_icall_00421328)(local_18,&local_10);
          uVar4 = (*pcVar1)();
          if ((int)uVar4 < 0) {
            uVar5 = 0x16d;
LAB_0040d89a:
            FUN_0040899b(unaff_retaddr,uVar5,
                         "onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",uVar4);
            FUN_004153bc((int *)&local_10);
            goto LAB_0040d875;
          }
          pcVar1 = *(code **)(*local_10 + 4);
          (*(code *)PTR_guard_check_icall_00421328)();
          cVar3 = (*pcVar1)();
          if (cVar3 == '\0') {
            pcVar1 = *(code **)(*local_10 + 0x14);
            (*(code *)PTR_guard_check_icall_00421328)();
            (*pcVar1)();
            local_24 = local_9;
            local_9[1] = 0;
            local_28 = local_10;
            if (*(int **)(local_20 + 0x40) == (int *)0x0) {
              FUN_00408b07();
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return uVar4;
            }
            pcVar1 = *(code **)(**(int **)(local_20 + 0x40) + 0x10);
            (*(code *)PTR_guard_check_icall_00421328)(&local_28,local_9 + 1,&local_24);
            uVar4 = (*pcVar1)();
            if ((int)uVar4 < 0) {
              uVar5 = 0x185;
              goto LAB_0040d89a;
            }
            if (local_9[0] == '\0') {
              FUN_004153bc((int *)&local_10);
              break;
            }
          }
          FUN_004153bc((int *)&local_10);
          local_18 = local_18 + 1;
        } while (local_18 < local_1c);
      }
      uVar4 = 0;
      goto LAB_0040d875;
    }
    uVar5 = 0x163;
  }
  FUN_0040899b(unaff_retaddr,uVar5,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
               uVar4);
LAB_0040d875:
  FUN_004153bc((int *)&local_14);
  return uVar4;
}



/* Function: FUN_0040d8be */

void __fastcall
FUN_0040d8be(undefined4 *param_1,undefined2 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined2 ***pppuVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 unaff_retaddr;
  undefined2 **local_154 [2];
  RTL_SRWLOCK *local_14c;
  char *local_148;
  int *local_144;
  undefined4 local_140;
  int local_13c;
  undefined4 *local_138;
  PSRWLOCK local_134;
  undefined2 *local_130;
  char local_129;
  undefined1 local_128 [8];
  undefined **local_120;
  undefined4 local_11c [13];
  undefined ***local_e8;
  RTL_SRWLOCK local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_b4;
  char *local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [88];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  RTL_SRWLOCK *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  uint local_14;
  
  local_14 = DAT_00420100 ^ (uint)&stack0xfffffff0;
  local_dc = 0;
  local_d8 = 0;
  local_a8 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_48 = 0;
  local_44 = 0;
  local_140 = 0x80;
  local_b0 = "TryLookupExtensionPointImplementationAcid";
  local_138 = param_1;
  local_130 = param_2;
  memset(local_a0,0,0x58);
  local_38 = &local_dc;
  local_2c = &local_e0;
  local_40 = 1;
  local_3c = 0;
  local_20 = &local_b4;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_e0.Ptr = &PTR_FUN_00401488;
  if (param_4 != (undefined4 *)0x0) {
    FUN_0041631a(&local_e0,&local_134);
    puVar1 = local_38;
    bVar7 = local_134 != (PSRWLOCK)0x0;
    puVar6 = local_38 + 7;
    local_38[6] = *param_4;
    *puVar6 = param_4[1];
    puVar1[8] = param_4[2];
    puVar1[9] = param_4[3];
    *(undefined1 *)(puVar1 + 1) = 1;
    if (bVar7) {
      ReleaseSRWLockExclusive(local_134);
    }
  }
  FUN_0040cd55(&local_e0,local_138);
  local_120 = &PTR_FUN_00401730;
  *local_130 = 0;
  local_13c = 0;
  local_154[0] = &local_130;
  local_154[1] = (undefined2 **)&local_140;
  local_14c = &local_e0;
  local_148 = &local_129;
  local_129 = '\0';
  local_144 = &local_13c;
  pppuVar5 = local_154;
  puVar6 = local_11c;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *pppuVar5;
    pppuVar5 = pppuVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_e8 = &local_120;
  uVar3 = FUN_0040d759(local_138,(int)local_128);
  FUN_00419b83((int)local_128);
  if ((int)uVar3 < 0) {
    FUN_0040899b(unaff_retaddr,0x1b7,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 uVar3);
  }
  else {
    if ((local_129 == '\0') && (1 < local_13c)) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    FUN_00408a9a(unaff_retaddr,0x1bb,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 (void *)0x8007000d,cVar2,0x402218);
    FUN_0040cea1(&local_e0,(undefined *)local_130);
  }
  FUN_0040cccc(&local_e0);
  FUN_0041e250(local_14 ^ (uint)&stack0xfffffff0,extraout_EDX);
  return;
}



/* Function: FUN_0040daf3 */

uint __thiscall FUN_0040daf3(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  undefined4 uStack_8;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
                    /* WARNING: Load size is inaccurate */
  uStack_8 = this;
  (*(code *)PTR_guard_check_icall_00421328)(**this,**(undefined4 **)((int)this + 4));
  uVar3 = (*pcVar1)();
  if ((int)uVar3 < 0) {
    FUN_0040899b(unaff_retaddr,0x1b7,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 uVar3);
  }
  else {
    pcVar1 = *(code **)(*param_1 + 8);
    (*(code *)PTR_guard_check_icall_00421328)();
    cVar2 = (*pcVar1)();
                    /* WARNING: Load size is inaccurate */
    uStack_8 = (void *)CONCAT13(cVar2,(undefined3)uStack_8);
    FUN_00419d2b(*this,(undefined1 *)((int)&uStack_8 + 3));
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



/* Function: FUN_0040db90 */

void FUN_0040db90(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  WindowsCreateString(L"Windows.Internal.Foundation.Contracts.ActivationFactoryContractRedirectorContext"
                      ,0x50,param_2);
  return;
}



/* Function: FUN_0040dbc0 */

undefined4 FUN_0040dbc0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}



/* Function: FUN_0040dbe0 */

void FUN_0040dbe0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_00415280(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040dc00 */

void FUN_0040dc00(int *param_1,int *param_2,int *param_3)

{
  FUN_0041b11e(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040dc20 */

void FUN_0040dc20(int *param_1)

{
  FUN_004152e0(param_1);
  return;
}



/* Function: FUN_0040dc40 */

void FUN_0040dc40(int param_1)

{
  FUN_00414c50(param_1);
  return;
}



/* Function: FUN_0040dc60 */

undefined4 FUN_0040dc60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return 0;
}



/* Function: FUN_0040dc80 */

undefined4 FUN_0040dc80(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  return 0;
}



/* Function: FUN_0040dca0 */

undefined4 FUN_0040dca0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return 0;
}



/* Function: FUN_0040dcc0 */

undefined4 FUN_0040dcc0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  return 0;
}



/* Function: FUN_0040dcdc */

void __fastcall FUN_0040dcdc(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  short sVar1;
  code *pcVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  short *psVar8;
  undefined4 uVar9;
  undefined4 extraout_EDX;
  undefined4 unaff_retaddr;
  uint local_200;
  int *local_1fc;
  int local_1f8;
  int *local_1f4;
  int *local_1f0;
  RTL_SRWLOCK local_1ec [42];
  int local_144;
  undefined1 local_124 [20];
  undefined4 local_110;
  short local_10c;
  undefined1 local_10a [258];
  uint local_8;
  
  piVar4 = param_4;
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_200 = param_1;
  FUN_0041bb63(local_1ec,param_2,&local_200,&param_3,param_2);
  *piVar4 = 0;
  local_200 = local_200 & 0xffffff00;
  uVar6 = FUN_0040d8be(param_1,&local_10c,extraout_ECX,(undefined4 *)(local_144 + 8));
  if ((int)uVar6 < 0) {
    FUN_0040899b(unaff_retaddr,0x23e,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 uVar6);
    goto LAB_0040dfc7;
  }
  if (local_10c == 0) {
LAB_0040dfa3:
    FUN_0040c84b(local_1ec,*piVar4 != 0,(char)local_200,(undefined *)&local_10c);
  }
  else {
    psVar8 = &local_10c;
    local_1f4 = (int *)0x0;
    do {
      sVar1 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar1 != 0);
    uVar6 = (int)psVar8 - (int)local_10a >> 1;
    if (uVar6 + 1 < uVar6) {
      FUN_00406ee0(0x80070216);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_0040733e(local_124,&local_10c,uVar6 + 1,uVar6);
    uVar6 = RoGetActivationFactory(local_110,&DAT_00402b94,&local_1f4);
    if ((int)uVar6 < 0) {
      FUN_0040899b(unaff_retaddr,0x242,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                   uVar6);
    }
    else {
      local_1f0 = (int *)0x0;
      local_1fc = (int *)0x0;
      pcVar2 = *(code **)*local_1f4;
      (*(code *)PTR_guard_check_icall_00421328)(local_1f4,&DAT_00402a4c,&local_1fc);
      iVar7 = (*pcVar2)();
      piVar5 = local_1f4;
      if (iVar7 < 0) {
        pcVar2 = *(code **)(*local_1f4 + 0x18);
        if (local_1f0 != (int *)0x0) {
          pcVar3 = *(code **)(*local_1f0 + 8);
          (*(code *)PTR_guard_check_icall_00421328)(local_1f0);
          (*pcVar3)();
        }
        (*(code *)PTR_guard_check_icall_00421328)(piVar5,&local_1f0);
        uVar6 = (*pcVar2)();
        if (-1 < (int)uVar6) {
LAB_0040deca:
          if (local_1f0 != (int *)0x0) {
            pcVar2 = *(code **)*local_1f0;
            (*(code *)PTR_guard_check_icall_00421328)(local_1f0,param_2,piVar4);
            uVar6 = (*pcVar2)();
            if ((int)uVar6 < 0) {
              uVar9 = 600;
              goto LAB_0040defd;
            }
          }
          FUN_0041525a((int *)&local_1fc);
          FUN_0041525a((int *)&local_1f0);
          FUN_0041525a((int *)&local_1f4);
          goto LAB_0040dfa3;
        }
        uVar9 = 0x250;
LAB_0040defd:
        FUN_0040899b(unaff_retaddr,uVar9,
                     "onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",uVar6);
      }
      else {
        local_200 = CONCAT31(local_200._1_3_,1);
        local_1f8 = 0;
        uVar6 = FUN_00419e8b(&local_1f8,&param_3);
        piVar5 = local_1fc;
        if ((int)uVar6 < 0) {
          uVar9 = 0x24b;
        }
        else {
          pcVar2 = *(code **)(*local_1fc + 0x18);
          if (local_1f0 != (int *)0x0) {
            pcVar3 = *(code **)(*local_1f0 + 8);
            (*(code *)PTR_guard_check_icall_00421328)(local_1f0);
            (*pcVar3)();
          }
          (*(code *)PTR_guard_check_icall_00421328)(piVar5,param_1,local_1f8,&local_1f0);
          uVar6 = (*pcVar2)();
          if (-1 < (int)uVar6) {
            FUN_0041525a(&local_1f8);
            goto LAB_0040deca;
          }
          uVar9 = 0x24c;
        }
        FUN_0040899b(unaff_retaddr,uVar9,
                     "onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",uVar6);
        FUN_0041525a(&local_1f8);
      }
      FUN_0041525a((int *)&local_1fc);
      FUN_0041525a((int *)&local_1f0);
    }
    FUN_0041525a((int *)&local_1f4);
  }
LAB_0040dfc7:
  FUN_0040c631(local_1ec);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040dff6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040dff6(void)

{
  BOOL BVar1;
  undefined *local_18;
  int local_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_004206f8,0,&local_14,&local_18);
  if ((BVar1 != 0) && (local_14 != 0)) {
    puStack_10 = &DAT_004206f8;
    local_18 = &DAT_004206fc;
    _DAT_00420700 = 0;
    DAT_00420704 = 0;
    _DAT_00420708 = 0;
    _DAT_004206fc = &PTR_FUN_00401478;
    _DAT_0042070c = &DAT_00420000;
    FUN_0041e372(FUN_0040e090);
    uStack_c = 0;
    FUN_00416225((int *)&puStack_10);
  }
  return local_18;
}



/* Function: FUN_0040e090 */

void FUN_0040e090(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_004206f8,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_00421328)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040e0e0 */

void __fastcall FUN_0040e0e0(PSRWLOCK param_1)

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
    FUN_00414707(param_1);
    puVar2 = FUN_0040dff6();
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
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
        local_44 = &DAT_00402938;
        FUN_00405a9b(extraout_ECX,&DAT_00403482,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX,
                     &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28
                     ,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8)
        ;
      }
    }
  }
  else {
    FUN_00414707(param_1);
    puVar2 = FUN_0040dff6();
    this = *(uint **)(puVar2 + 4);
    if (5 < *this) {
      uVar3 = FUN_00405a58(this,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_44 = (undefined *)GetCurrentThreadId();
        local_3c = &DAT_00402938;
        local_40 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
        FUN_00405e65((int)this,&DAT_004031e5,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX_00,
                     &local_3c,&local_40,&local_44);
      }
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_00409aa5(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_0040e27c */

void __fastcall FUN_0040e27c(void *param_1)

{
  undefined4 *puVar1;
  uint *this;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  LPCGUID extraout_ECX;
  LPCGUID pGVar5;
  int extraout_EDX;
  int iVar6;
  undefined *local_c;
  PSRWLOCK local_8;
  
  FUN_0041631a(param_1,&local_8);
  puVar1 = *(undefined4 **)((int)param_1 + 0xa8);
  puVar2 = FUN_0040dff6();
  if (**(uint **)(puVar2 + 4) < 6) {
LAB_0040e2c3:
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  else {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
    if ((char)uVar3 == '\0') goto LAB_0040e2c3;
    EventActivityIdControl(3,(LPGUID)(puVar1 + 2));
  }
  *puVar1 = 1;
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
  }
  puVar2 = FUN_0040dff6();
  this = *(uint **)(puVar2 + 4);
  if (*this < 6) goto LAB_0040e343;
  uVar3 = FUN_00405a58(this,0,0x2000);
  if ((char)uVar3 == '\0') goto LAB_0040e343;
  local_8 = (PSRWLOCK)GetCurrentThreadId();
  iVar6 = *(int *)((int)param_1 + 0xa8);
  local_c = &DAT_00402938;
  if (*(char *)(iVar6 + 4) == '\0') {
LAB_0040e328:
    pGVar5 = (LPCGUID)0x0;
  }
  else {
    uVar4 = FUN_00409e17((int *)(iVar6 + 0x18));
    pGVar5 = extraout_ECX;
    iVar6 = extraout_EDX;
    if ((char)uVar4 != '\0') goto LAB_0040e328;
  }
  FUN_00405edb((int)this,&DAT_00404f13,(LPCGUID)(iVar6 + 8),pGVar5,&local_c,&local_8);
LAB_0040e343:
  if (*(int *)((int)param_1 + 0xbc) == 0) {
    FUN_00409a42((undefined4 *)((int)param_1 + 0xb0));
  }
  return;
}



/* Function: FUN_0040e362 */

void __fastcall FUN_0040e362(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_00409aa5((undefined4 *)(param_1 + 0xb0));
  }
  FUN_00416391((undefined4 *)(param_1 + 0xac));
  FUN_0040e392((int *)(param_1 + 4));
  return;
}



/* Function: FUN_0040e392 */

void __fastcall FUN_0040e392(int *param_1)

{
  FUN_00407d87(param_1 + 0x25);
  FUN_00409e35((int)(param_1 + 10));
  FUN_00414e4d(param_1);
  return;
}



/* Function: FUN_0040e3c0 */

undefined4 FUN_0040e3c0(void)

{
  return 0;
}



/* Function: FUN_0040e3cb */

uint __thiscall FUN_0040e3cb(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 *puVar3;
  short *psVar4;
  int iVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 unaff_retaddr;
  undefined4 uStackY_20;
  void *local_8;
  
  local_8 = this;
  if (*(int **)((int)this + 0x78) != param_2) {
    if (param_2 != (int *)0x0) {
      pcVar1 = *(code **)(*param_2 + 4);
      (*(code *)PTR_guard_check_icall_00421328)(param_2);
      (*pcVar1)();
    }
    local_8 = *(void **)((int)this + 0x78);
    *(int **)((int)this + 0x78) = param_2;
    FUN_00414048((int *)&local_8);
  }
  if (*(int **)((int)this + 0x7c) != param_3) {
    if (param_3 != (int *)0x0) {
      pcVar1 = *(code **)(*param_3 + 4);
      (*(code *)PTR_guard_check_icall_00421328)(param_3);
      (*pcVar1)();
    }
    local_8 = *(void **)((int)this + 0x7c);
    *(int **)((int)this + 0x7c) = param_3;
    FUN_00414048((int *)&local_8);
  }
  if (*(int **)((int)this + 0x80) != param_4) {
    if (param_4 != (int *)0x0) {
      pcVar1 = *(code **)(*param_4 + 4);
      (*(code *)PTR_guard_check_icall_00421328)(param_4);
      (*pcVar1)();
    }
    local_8 = *(void **)((int)this + 0x80);
    *(int **)((int)this + 0x80) = param_4;
    FUN_00414048((int *)&local_8);
  }
  *(undefined4 *)((int)this + 0x20) = param_1[10];
  *(uint *)((int)this + 0x24) = param_1[9] & 0xf7ffffff;
  *(undefined4 *)((int)this + 0x28) = *param_1;
  *(bool *)((int)this + 0x40) = param_1[7] != 0;
  *(bool *)((int)this + 0x41) = param_1[8] != 0;
  pvVar2 = (void *)param_1[2];
  local_8 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    puVar3 = *(undefined4 **)((int)pvVar2 + 0x24);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x54) = *puVar3;
      *(undefined4 *)((int)this + 0x58) = puVar3[1];
      *(undefined4 *)((int)this + 0x5c) = puVar3[2];
      *(undefined4 *)((int)this + 0x60) = puVar3[3];
    }
    puVar3 = *(undefined4 **)((int)pvVar2 + 0x38);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 100) = *puVar3;
      *(undefined4 *)((int)this + 0x68) = puVar3[1];
      *(undefined4 *)((int)this + 0x6c) = puVar3[2];
      *(undefined4 *)((int)this + 0x70) = puVar3[3];
    }
    if ((*(int *)((int)pvVar2 + 0x14) != 0) &&
       (uVar8 = FUN_00419f4f((void *)((int)this + 0x38),(int *)((int)pvVar2 + 0x14)), (int)uVar8 < 0
       )) {
      uStackY_20 = 99;
LAB_0040e4e4:
      FUN_0040899b(unaff_retaddr,uStackY_20,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",
                   uVar8);
      return uVar8;
    }
    if ((*(int *)((int)pvVar2 + 0x18) != 0) &&
       (uVar8 = FUN_00419f4f((void *)((int)this + 0x2c),(int *)((int)pvVar2 + 0x18)), (int)uVar8 < 0
       )) {
      uStackY_20 = 0x68;
      goto LAB_0040e4e4;
    }
    if ((*(int *)((int)pvVar2 + 0x34) != 0) &&
       (uVar8 = FUN_00419f4f((void *)((int)this + 0x3c),(int *)((int)pvVar2 + 0x34)), (int)uVar8 < 0
       )) {
      uStackY_20 = 0x6d;
      goto LAB_0040e4e4;
    }
    if ((*(int *)((int)pvVar2 + 4) != 0) &&
       (uVar8 = FUN_00419fb9((int *)((int)pvVar2 + 4),(int *)((int)this + 0x84)), (int)uVar8 < 0)) {
      uStackY_20 = 0x72;
      goto LAB_0040e4e4;
    }
    *(byte *)((int)this + 0x42) = (byte)(*(uint *)((int)pvVar2 + 0x10) >> 0xc) & 1;
    *(byte *)((int)this + 0x47) = (byte)(*(uint *)((int)pvVar2 + 0x10) >> 0xd) & 1;
    uVar8 = FUN_00416941(&DAT_00420878);
    if ((char)uVar8 != '\0') {
      *(byte *)((int)this + 0x43) = (byte)(*(uint *)((int)pvVar2 + 0x10) >> 0x11) & 1;
      *(byte *)((int)this + 0x44) = (byte)(*(uint *)((int)pvVar2 + 0x10) >> 0x12) & 1;
      *(byte *)((int)this + 0x48) = (byte)(*(uint *)((int)pvVar2 + 0x10) >> 0x13) & 1;
    }
  }
  uVar8 = FUN_0040f4e5(this,(int)param_1);
  if ((int)uVar8 < 0) {
    uVar9 = 0x80;
  }
  else {
    uVar8 = FUN_0040f581(this,(int)param_1);
    if ((int)uVar8 < 0) {
      uVar9 = 0x81;
    }
    else {
      uVar8 = FUN_0040f616(this,(int)param_1);
      if ((int)uVar8 < 0) {
        uVar9 = 0x82;
      }
      else {
        uVar10 = FUN_0040f264(this,(int)param_1);
        uVar8 = (uint)uVar10;
        if ((int)uVar8 < 0) {
          uVar9 = 0x83;
        }
        else {
          uVar8 = FUN_0040f2ea((int)this,(int)((ulonglong)uVar10 >> 0x20),(int)param_1);
          if ((int)uVar8 < 0) {
            uVar9 = 0x84;
          }
          else {
            if (param_1[2] != 0) {
              puVar3 = (undefined4 *)(param_1[2] + 0x34);
              psVar4 = (short *)*puVar3;
              if (((psVar4 != (short *)0x0) && (*psVar4 != 0)) &&
                 (uVar8 = FUN_00419f4f((void *)((int)this + 0x3c),puVar3), (int)uVar8 < 0)) {
                FUN_0040899b(unaff_retaddr,0x2b4,
                             "shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar8);
                uVar9 = 0x85;
                goto LAB_0040e5ca;
              }
            }
            uVar8 = FUN_00416941(&DAT_00420878);
            if ((char)uVar8 == '\0') {
              return 0;
            }
            uVar8 = FUN_0040f6b0(this,(int)param_1);
            if ((int)uVar8 < 0) {
              uVar9 = 0x88;
            }
            else {
              uVar8 = FUN_0040f868(this,(int)param_1);
              if (-1 < (int)uVar8) {
                iVar5 = param_1[2];
                if (iVar5 == 0) {
                  return 0;
                }
                bVar6 = *(byte *)(iVar5 + 0x12) & 1;
                *(byte *)((int)this + 0x46) = bVar6;
                if ((bVar6 == 0) || ((*(uint *)(iVar5 + 0x10) & 0x8000) == 0)) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = 1;
                }
                *(undefined1 *)((int)this + 0x45) = uVar7;
                return 0;
              }
              uVar9 = 0x89;
            }
          }
        }
      }
    }
  }
LAB_0040e5ca:
  FUN_0040899b(unaff_retaddr,uVar9,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar8);
  return uVar8;
}



/* Function: FUN_0040e6f0 */

uint FUN_0040e6f0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     (uVar1 = WindowsDuplicateString(*(undefined4 *)(param_1 + 0x2c),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0xa1,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040e740 */

uint FUN_0040e740(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (uVar1 = WindowsDuplicateString(*(undefined4 *)(param_1 + 0x30),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0xab,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040e790 */

uint FUN_0040e790(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x34) != 0) &&
     (uVar1 = WindowsDuplicateString(*(undefined4 *)(param_1 + 0x34),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0xb5,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040e7e0 */

uint FUN_0040e7e0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x38) != 0) &&
     (uVar1 = WindowsDuplicateString(*(undefined4 *)(param_1 + 0x38),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0xbf,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040e830 */

uint FUN_0040e830(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x3c) != 0) &&
     (uVar1 = WindowsDuplicateString(*(undefined4 *)(param_1 + 0x3c),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0xc9,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040e880 */

undefined4 FUN_0040e880(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x40);
  return 0;
}



/* Function: FUN_0040e8a0 */

undefined4 FUN_0040e8a0(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x41);
  return 0;
}



/* Function: FUN_0040e8c0 */

uint FUN_0040e8c0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (uVar1 = WindowsDuplicateString(*(undefined4 *)(param_1 + 0x4c),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0xdf,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040e910 */

uint FUN_0040e910(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_00421328)(puVar1,&DAT_00402b7c,param_2);
    uVar3 = (*pcVar2)();
    if ((int)uVar3 < 0) {
      FUN_0040899b(unaff_retaddr,0xe9,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar3)
      ;
      return uVar3;
    }
  }
  return 0;
}



/* Function: FUN_0040e970 */

undefined4 FUN_0040e970(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = *(undefined4 *)(param_1 + 0x58);
  param_2[2] = *(undefined4 *)(param_1 + 0x5c);
  param_2[3] = *(undefined4 *)(param_1 + 0x60);
  return 0;
}



/* Function: FUN_0040e9a0 */

undefined4 FUN_0040e9a0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 100);
  param_2[1] = *(undefined4 *)(param_1 + 0x68);
  param_2[2] = *(undefined4 *)(param_1 + 0x6c);
  param_2[3] = *(undefined4 *)(param_1 + 0x70);
  return 0;
}



/* Function: FUN_0040e9d0 */

uint FUN_0040e9d0(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x74) != 0) &&
     (uVar1 = FUN_00414ad7((int *)(param_1 + 0x74),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0xff,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040ea20 */

undefined4 FUN_0040ea20(int param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((char)uVar1 == '\0') {
    bVar2 = ~(byte)(*(uint *)(param_1 + 0x28) >> 2) & 1;
  }
  else if (((*(uint *)(param_1 + 0x28) & 4) == 0) && (*(char *)(param_1 + 0x46) == '\0')) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  *param_2 = bVar2;
  return 0;
}



/* Function: FUN_0040ea70 */

undefined4 FUN_0040ea70(int param_1,byte *param_2)

{
  *param_2 = *(byte *)(param_1 + 0x28) & 1;
  return 0;
}



/* Function: FUN_0040ea90 */

undefined4 FUN_0040ea90(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = ((byte)*(undefined4 *)(param_1 + 0x28) & 0x21) == 0x21;
  return 0;
}



/* Function: FUN_0040eac0 */

uint FUN_0040eac0(int param_1,byte *param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  
  uVar3 = *(uint *)(param_1 + 0x28) >> 1;
  *param_2 = (byte)uVar3 & 1;
  piVar1 = *(int **)(param_1 + 0x78);
  if ((piVar1 != (int *)0x0) && ((uVar3 & 1) == 0)) {
    pcVar2 = *(code **)(*piVar1 + 0x20);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1,param_2);
    uVar3 = (*pcVar2)();
    if ((int)uVar3 < 0) {
      FUN_0040899b(unaff_retaddr,0x125,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar3
                  );
      return uVar3;
    }
  }
  return 0;
}



/* Function: FUN_0040eb20 */

undefined4 FUN_0040eb20(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = ((byte)*(undefined4 *)(param_1 + 0x28) & 5) == 5;
  return 0;
}



/* Function: FUN_0040eb50 */

uint __thiscall FUN_0040eb50(uint3 param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 unaff_retaddr;
  undefined4 uStack_8;
  
  uVar5 = 0;
  *param_3 = 0;
  uStack_8 = (uint)param_1;
  piVar1 = *(int **)(param_2 + 0x78);
  cVar3 = '\0';
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x24);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1,(int)&uStack_8 + 3);
    uVar4 = (*pcVar2)();
    if ((int)uVar4 < 0) {
      FUN_0040899b(unaff_retaddr,0x13d,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar4
                  );
      return uVar4;
    }
    cVar3 = uStack_8._3_1_;
  }
  if ((((*(byte *)(param_2 + 0x28) & 2) == 0) && ((*(byte *)(param_2 + 0x24) & 1) == 0)) &&
     ((cVar3 != '\0' || ((*(uint *)(param_2 + 0x24) & 0x1000) != 0)))) {
    uVar5 = 1;
  }
  *param_3 = uVar5;
  return 0;
}



/* Function: FUN_0040ebe0 */

undefined4 FUN_0040ebe0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
    *param_2 = *(undefined4 *)(param_1 + 0x84);
  }
  return 0;
}



/* Function: FUN_0040ec30 */

undefined4 FUN_0040ec30(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x7c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
    *param_2 = *(undefined4 *)(param_1 + 0x7c);
  }
  return 0;
}



/* Function: FUN_0040ec70 */

undefined4 FUN_0040ec70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
    *param_2 = *(undefined4 *)(param_1 + 0x80);
  }
  return 0;
}



/* Function: FUN_0040ecc0 */

uint FUN_0040ecc0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x28);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1,param_2);
    uVar3 = (*pcVar2)();
    if ((int)uVar3 < 0) {
      FUN_0040899b(unaff_retaddr,0x16f,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar3
                  );
      return uVar3;
    }
  }
  return 0;
}



/* Function: FUN_0040ed20 */

undefined4 FUN_0040ed20(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x42);
  return 0;
}



/* Function: FUN_0040ed40 */

undefined4 FUN_0040ed40(int param_1,undefined1 *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((char)uVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0x43);
  }
  return 0;
}



/* Function: FUN_0040ed70 */

undefined4 FUN_0040ed70(int param_1,undefined1 *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((char)uVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0x44);
  }
  return 0;
}



/* Function: FUN_0040eda0 */

undefined4 FUN_0040eda0(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x47);
  return 0;
}



/* Function: FUN_0040edc0 */

undefined4 FUN_0040edc0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((char)uVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0x48);
  }
  return 0;
}



/* Function: FUN_0040edf0 */

undefined4 FUN_0040edf0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  
  *param_3 = 0;
  piVar1 = *(int **)(param_1 + 0x78);
  if ((piVar1 != (int *)0x0) && (param_2 != 0)) {
    pcVar2 = *(code **)(*piVar1 + 0x30);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1,param_2,param_3);
    (*pcVar2)();
  }
  return 0;
}



/* Function: FUN_0040ee30 */

undefined4 FUN_0040ee30(int param_1,undefined1 *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((char)uVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0x88);
  }
  return 0;
}



/* Function: FUN_0040ee70 */

uint FUN_0040ee70(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((((char)uVar1 != '\0') && (*(int *)(param_1 + 0x8c) != 0)) &&
     (uVar1 = WindowsDuplicateString(*(int *)(param_1 + 0x8c),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0x1ba,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040eed0 */

uint FUN_0040eed0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((((char)uVar1 != '\0') && (*(int *)(param_1 + 0x90) != 0)) &&
     (uVar1 = WindowsDuplicateString(*(int *)(param_1 + 0x90),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0x1c7,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040ef30 */

uint FUN_0040ef30(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((((char)uVar1 != '\0') && (*(int *)(param_1 + 0x9c) != 0)) &&
     (uVar1 = FUN_00414ad7((int *)(param_1 + 0x9c),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0x1d4,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040ef90 */

undefined4 FUN_0040ef90(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *param_2 = 5;
  uVar1 = FUN_0041697f(&DAT_004208a0);
  if ((char)uVar1 != '\0') {
    *param_2 = *(undefined4 *)(param_1 + 0x94);
  }
  return 0;
}



/* Function: FUN_0040efd0 */

undefined4 FUN_0040efd0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *param_2 = 5;
  uVar1 = FUN_0041697f(&DAT_004208a0);
  if ((char)uVar1 != '\0') {
    *param_2 = *(undefined4 *)(param_1 + 0x98);
  }
  return 0;
}



/* Function: FUN_0040f010 */

undefined4 FUN_0040f010(int param_1,undefined1 *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((char)uVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0xa0);
  }
  return 0;
}



/* Function: FUN_0040f050 */

uint FUN_0040f050(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((((char)uVar1 != '\0') && (*(int *)(param_1 + 0xa4) != 0)) &&
     (uVar1 = WindowsDuplicateString(*(int *)(param_1 + 0xa4),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0x1ff,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040f0b0 */

uint FUN_0040f0b0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((((char)uVar1 != '\0') && (*(int *)(param_1 + 0xa8) != 0)) &&
     (uVar1 = WindowsDuplicateString(*(int *)(param_1 + 0xa8),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0x20c,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040f110 */

uint FUN_0040f110(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((((char)uVar1 != '\0') && (*(int *)(param_1 + 0xac) != 0)) &&
     (uVar1 = FUN_00414ad7((int *)(param_1 + 0xac),param_2), (int)uVar1 < 0)) {
    FUN_0040899b(unaff_retaddr,0x219,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    return uVar1;
  }
  return 0;
}



/* Function: FUN_0040f170 */

undefined4 FUN_0040f170(int param_1,undefined1 *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((char)uVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0x45);
  }
  return 0;
}



/* Function: FUN_0040f1a0 */

undefined4 FUN_0040f1a0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_00416941(&DAT_00420878);
  if ((char)uVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0x46);
  }
  return 0;
}



/* Function: FUN_0040f1cf */

undefined4 __fastcall FUN_0040f1cf(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  
  if ((param_4 & 0x27f3cc8c) == 0) {
    if ((param_4 & 0x120) == 0x120) {
      uVar1 = 0x239;
    }
    else if ((param_4 & 1) == 0 || (param_4 & 0x110) == 0) {
      if (((param_4 & 2) == 0) || (param_3 != 0)) {
        if (((param_4 & 0x20) == 0) || ((param_1 != 0 && (param_2 != 0)))) {
          return 0;
        }
        uVar1 = 0x242;
      }
      else {
        uVar1 = 0x23f;
      }
    }
    else {
      uVar1 = 0x23c;
    }
  }
  else {
    uVar1 = 0x236;
  }
  FUN_0040899b(unaff_retaddr,uVar1,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",
               0x80070057);
  return 0x80070057;
}



/* Function: FUN_0040f264 */

void __thiscall FUN_0040f264(void *this,int param_1)

{
  uint uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_c = *(int *)(param_1 + 0x14);
  if (local_c == 0) {
    local_10 = 0;
    local_c = 0;
  }
  else {
    local_10 = *(undefined4 *)(param_1 + 0x18);
  }
  local_24 = **(undefined4 **)(param_1 + 0x10);
  local_20 = DAT_00401cf4;
  uStack_1c = DAT_00401cf8;
  uStack_18 = DAT_00401cfc;
  uStack_14 = DAT_00401d00;
  uVar1 = FUN_0041a039(&local_24,(int *)((int)this + 0x50));
  uVar2 = extraout_EDX;
  if ((int)uVar1 < 0) {
    FUN_0040899b(unaff_retaddr,0x25a,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
    uVar2 = extraout_EDX_00;
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040f2ea */

void __fastcall FUN_0040f2ea(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  DWORD DVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_retaddr;
  void *local_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined1 local_24 [20];
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 0) goto LAB_0040f4c6;
  local_2c = (int *)0x0;
  local_10 = 0;
  DVar4 = WindowsCreateStringReference(L"Windows.Storage.Streams.Buffer",0x1e,local_24,&local_10);
  if ((int)DVar4 < 0) {
    FUN_00406ee0(DVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_34 = local_10;
  if (local_2c != (int *)0x0) {
    pcVar2 = *(code **)(*local_2c + 8);
    (*(code *)PTR_guard_check_icall_00421328)(local_2c);
    (*pcVar2)();
  }
  uVar5 = RoGetActivationFactory(local_34,&DAT_004029bc,&local_2c);
  if ((int)uVar5 < 0) {
    FUN_0040899b(unaff_retaddr,0x264,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar5);
  }
  else {
    local_28 = (int *)0x0;
    pcVar2 = *(code **)(*local_2c + 0x18);
    (*(code *)PTR_guard_check_icall_00421328)(local_2c,*(undefined4 *)(iVar1 + 0x20),&local_28);
    uVar5 = (*pcVar2)();
    if ((int)uVar5 < 0) {
      FUN_0040899b(unaff_retaddr,0x267,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar5
                  );
    }
    else {
      local_30 = (int *)0x0;
      pcVar2 = *(code **)*local_28;
      (*(code *)PTR_guard_check_icall_00421328)(local_28,&DAT_00402d04,&local_30);
      uVar5 = (*pcVar2)();
      if ((int)uVar5 < 0) {
        uVar6 = 0x26a;
      }
      else {
        pcVar2 = *(code **)(*local_30 + 0xc);
        (*(code *)PTR_guard_check_icall_00421328)(local_30,&local_38);
        uVar5 = (*pcVar2)();
        if (-1 < (int)uVar5) {
          memcpy(local_38,*(void **)(iVar1 + 0x1c),*(size_t *)(iVar1 + 0x20));
          if (*(int *)(iVar1 + 0x20) != 0) {
            pcVar2 = *(code **)(*local_28 + 0x20);
            (*(code *)PTR_guard_check_icall_00421328)(local_28,*(undefined4 *)(iVar1 + 0x20));
            uVar5 = (*pcVar2)();
            if ((int)uVar5 < 0) {
              uVar6 = 0x272;
              goto LAB_0040f44a;
            }
            piVar3 = *(int **)(param_1 + 0x74);
            if (piVar3 != (int *)0x0) {
              *(undefined4 *)(param_1 + 0x74) = 0;
              pcVar2 = *(code **)(*piVar3 + 8);
              (*(code *)PTR_guard_check_icall_00421328)(piVar3);
              (*pcVar2)();
            }
            if (local_28 != (int *)0x0) {
              pcVar2 = *(code **)(*local_28 + 4);
              (*(code *)PTR_guard_check_icall_00421328)(local_28);
              (*pcVar2)();
            }
            *(int **)(param_1 + 0x74) = local_28;
          }
          FUN_00414048((int *)&local_30);
          FUN_00414048((int *)&local_28);
          FUN_00414048((int *)&local_2c);
          param_2 = extraout_EDX_00;
          goto LAB_0040f4c6;
        }
        uVar6 = 0x26d;
      }
LAB_0040f44a:
      FUN_0040899b(unaff_retaddr,uVar6,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar5
                  );
      FUN_00414048((int *)&local_30);
    }
    FUN_00414048((int *)&local_28);
  }
  FUN_00414048((int *)&local_2c);
  param_2 = extraout_EDX;
LAB_0040f4c6:
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040f4e5 */

uint __thiscall FUN_0040f4e5(void *this,int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + 0x28);
      psVar2 = (short *)*puVar1;
      if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
        uVar5 = FUN_00419f4f((void *)((int)this + 0x4c),puVar1);
        if (-1 < (int)uVar5) {
          return 0;
        }
        uVar6 = 0x281;
        goto LAB_0040f525;
      }
    }
    piVar3 = *(int **)((int)this + 0x78);
    if (piVar3 != (int *)0x0) {
      puVar1 = (undefined4 *)((int)this + 0x4c);
      pcVar4 = *(code **)(*piVar3 + 0x2c);
      WindowsDeleteString(*puVar1);
      *puVar1 = 0;
      (*(code *)PTR_guard_check_icall_00421328)(piVar3,*(undefined4 *)(param_1 + 0xc),puVar1);
      uVar5 = (*pcVar4)();
      if ((int)uVar5 < 0) {
        uVar6 = 0x285;
LAB_0040f525:
        FUN_0040899b(unaff_retaddr,uVar6,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",
                     uVar5);
        return uVar5;
      }
    }
  }
  return 0;
}



/* Function: FUN_0040f581 */

uint __thiscall FUN_0040f581(void *this,int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 unaff_retaddr;
  
  if ((*(byte *)((int)this + 0x28) & 1) == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + 0xc);
      psVar2 = (short *)*puVar1;
      if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
        uVar5 = FUN_00419f4f((void *)((int)this + 0x30),puVar1);
        if (-1 < (int)uVar5) {
          return 0;
        }
        uVar6 = 0x292;
        goto LAB_0040f5c2;
      }
    }
    piVar3 = *(int **)((int)this + 0x78);
    if (piVar3 != (int *)0x0) {
      puVar1 = (undefined4 *)((int)this + 0x30);
      pcVar4 = *(code **)(*piVar3 + 0x18);
      WindowsDeleteString(*puVar1);
      *puVar1 = 0;
      (*(code *)PTR_guard_check_icall_00421328)(piVar3,puVar1);
      uVar5 = (*pcVar4)();
      if ((int)uVar5 < 0) {
        uVar6 = 0x296;
LAB_0040f5c2:
        FUN_0040899b(unaff_retaddr,uVar6,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",
                     uVar5);
        return uVar5;
      }
    }
  }
  return 0;
}



/* Function: FUN_0040f616 */

uint __thiscall FUN_0040f616(void *this,int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 unaff_retaddr;
  
  if ((*(byte *)((int)this + 0x28) & 1) == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + 8);
      psVar2 = (short *)*puVar1;
      if (((psVar2 != (short *)0x0) && (*psVar2 != 0)) &&
         (uVar5 = FUN_00419f4f((void *)((int)this + 0x34),puVar1), (int)uVar5 < 0)) {
        uVar6 = 0x2a3;
LAB_0040f656:
        FUN_0040899b(unaff_retaddr,uVar6,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",
                     uVar5);
        return uVar5;
      }
    }
  }
  else if (((*(byte *)((int)this + 0x28) & 0x24) == 0) &&
          (piVar3 = *(int **)((int)this + 0x78), piVar3 != (int *)0x0)) {
    puVar1 = (undefined4 *)((int)this + 0x34);
    pcVar4 = *(code **)(*piVar3 + 0x1c);
    WindowsDeleteString(*puVar1);
    *puVar1 = 0;
    (*(code *)PTR_guard_check_icall_00421328)(piVar3,puVar1);
    uVar5 = (*pcVar4)();
    if ((int)uVar5 < 0) {
      uVar6 = 0x2a9;
      goto LAB_0040f656;
    }
  }
  return 0;
}



/* Function: FUN_0040f6b0 */

uint __thiscall FUN_0040f6b0(void *this,int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  
  if ((*(int *)(param_1 + 8) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x3c), piVar1 != (int *)0x0)) {
    cVar2 = '\0';
    if ((*piVar1 != 0) && (((piVar1[1] != 0 && (piVar1[4] != 0)) && (piVar1[2] != 0)))) {
      cVar2 = '\x01';
    }
    *(char *)((int)this + 0x88) = cVar2;
    if (cVar2 != '\0') {
      uVar3 = FUN_00419f4f((void *)((int)this + 0x8c),piVar1);
      if ((int)uVar3 < 0) {
        uVar4 = 0x2c5;
      }
      else {
        uVar3 = FUN_00419f4f((void *)((int)this + 0x90),piVar1 + 1);
        if (-1 < (int)uVar3) {
          uVar3 = FUN_0040f781((int)piVar1,(int *)((int)this + 0x94),(int *)((int)this + 0x9c));
          if (-1 < (int)uVar3) {
            return 0;
          }
          FUN_0040899b(unaff_retaddr,0x2c7,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",
                       uVar3);
          return uVar3;
        }
        uVar4 = 0x2c6;
      }
      FUN_0040899b(unaff_retaddr,uVar4,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar3
                  );
      return uVar3;
    }
  }
  return 0;
}



/* Function: FUN_0040f781 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_0040f781(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  int local_10;
  uint local_c [2];
  
  uVar3 = FUN_0041697f(&DAT_004208a0);
  if ((char)uVar3 != '\0') {
    if (4 < *(int *)(param_1 + 0xc)) {
      FUN_0041a0ca();
      return 0x80070057;
    }
    *param_2 = *(int *)(param_1 + 0xc);
  }
  piVar1 = (int *)*param_3;
  if (piVar1 != (int *)0x0) {
    *param_3 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *param_3 = 0;
  }
  else {
    local_10 = Ordinal_12(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    uVar3 = 0x8007000e;
    if (local_10 != 0) {
      local_c[1] = 0;
      uVar3 = CreateRandomAccessStreamOverStream(local_10,0,&DAT_00402b24,local_c + 1);
      local_c[0] = uVar3;
      if ((int)uVar3 < 0) {
        FUN_0041a155(local_c);
      }
      else {
        uVar3 = FUN_00414ad7(local_c + 1,param_3);
      }
      FUN_00414048((int *)(local_c + 1));
    }
    FUN_00414048(&local_10);
    if ((int)uVar3 < 0) {
      FUN_0040899b(unaff_retaddr,0x2d8,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar3
                  );
      return uVar3;
    }
  }
  return 0;
}



/* Function: FUN_0040f868 */

uint __thiscall FUN_0040f868(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  
  if (((*(int *)(param_1 + 8) == 0) ||
      (puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x40), puVar1 == (undefined4 *)0x0)) ||
     (iVar2 = puVar1[1], *(bool *)((int)this + 0xa0) = iVar2 != 0, iVar2 == 0)) {
LAB_0040f91b:
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00419f4f((void *)((int)this + 0xa4),puVar1);
    if ((int)uVar3 < 0) {
      uVar4 = 0x2e8;
    }
    else {
      uVar3 = FUN_00419f4f((void *)((int)this + 0xa8),puVar1 + 1);
      if (-1 < (int)uVar3) {
        uVar3 = FUN_0040f781((int)puVar1,(int *)((int)this + 0x98),(int *)((int)this + 0xac));
        if ((int)uVar3 < 0) {
          FUN_0040899b(unaff_retaddr,0x2ea,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",
                       uVar3);
          return uVar3;
        }
        goto LAB_0040f91b;
      }
      uVar4 = 0x2e9;
    }
    FUN_0040899b(unaff_retaddr,uVar4,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar3);
  }
  return uVar3;
}



/* Function: FUN_0040f92a */

uint FUN_0040f92a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 *param_6,uint param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *this;
  undefined4 unaff_retaddr;
  int *in_stack_00000030;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  *in_stack_00000030 = 0;
  uVar2 = FUN_0040f1cf(param_4,param_5,(int)param_6,param_7);
  if ((int)uVar2 < 0) {
    FUN_0040899b(unaff_retaddr,0x354,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar2);
    return uVar2;
  }
  local_2c = param_1;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  local_1c = param_5;
  local_18 = param_7 >> 1 & 1;
  local_34 = 0;
  local_30 = 0;
  if (param_6 == (undefined4 *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_6;
  }
  local_10 = param_7;
  local_c = param_8;
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_0041e266(0xb0);
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    this = FUN_0041bd16(puVar3);
    uVar2 = FUN_0040e3cb(this,&local_34,(int *)0x0,(int *)0x0,(int *)0x0);
    if ((int)uVar2 < 0) {
      if (this != (int *)0x0) {
        FUN_00414bc0(this);
      }
    }
    else {
      uVar2 = FUN_0041af83(this,&DAT_00402b64,&local_8);
      if (this != (int *)0x0) {
        FUN_00414bc0(this);
      }
      iVar1 = local_8;
      if (-1 < (int)uVar2) {
        local_8 = 0;
        uVar2 = 0;
        *in_stack_00000030 = iVar1;
        goto LAB_0040fa3e;
      }
    }
  }
  FUN_0040899b(unaff_retaddr,0x366,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar2);
LAB_0040fa3e:
  FUN_00414048(&local_8);
  return uVar2;
}



/* Function: FUN_0040fa55 */

uint __fastcall
FUN_0040fa55(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  undefined4 *local_10;
  int *local_c;
  char local_5;
  
  local_10 = (undefined4 *)0x0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  pcVar1 = *(code **)(*param_1 + 0x18);
  (*(code *)PTR_guard_check_icall_00421328)(param_1,&local_10);
  uVar2 = (*pcVar1)();
  if ((int)uVar2 < 0) {
    FUN_0040899b(unaff_retaddr,0x374,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar2);
    goto LAB_0040fb7c;
  }
  local_c = (int *)0x0;
  pcVar1 = *(code **)*local_10;
  (*(code *)PTR_guard_check_icall_00421328)(local_10,&DAT_00402928,&local_c);
  uVar2 = (*pcVar1)();
  if ((int)uVar2 < 0) {
    uVar3 = 0x377;
LAB_0040fb58:
    FUN_0040899b(unaff_retaddr,uVar3,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar2);
  }
  else {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_00421328)(local_c,param_2);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) {
      uVar3 = 0x379;
      goto LAB_0040fb58;
    }
    uVar2 = FUN_00416941(&DAT_00420878);
    if ((char)uVar2 != '\0') {
      FUN_0041a1b0(param_2);
    }
    pcVar1 = *(code **)(*local_c + 0x18);
    (*(code *)PTR_guard_check_icall_00421328)(local_c,param_4,param_3);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) {
      uVar3 = 0x37e;
      goto LAB_0040fb58;
    }
    if (param_5 != (uint *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x1c);
      (*(code *)PTR_guard_check_icall_00421328)(param_1,&local_5);
      uVar2 = (*pcVar1)();
      if ((int)uVar2 < 0) {
        uVar3 = 899;
        goto LAB_0040fb58;
      }
      *param_5 = (uint)(local_5 != '\0');
    }
    uVar2 = 0;
  }
  FUN_00414048((int *)&local_c);
LAB_0040fb7c:
  FUN_00414048((int *)&local_10);
  return uVar2;
}



/* Function: FUN_0040fb93 */

void __fastcall FUN_0040fb93(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  LPCWSTR lpName;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  HANDLE pvVar5;
  undefined4 unaff_retaddr;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  uint *in_stack_00000034;
  uint in_stack_00000038;
  undefined1 *in_stack_0000003c;
  int *local_ec;
  int *local_e8;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  char local_d6;
  char local_d5;
  RTL_SRWLOCK local_d4 [51];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  *in_stack_0000003c = 0;
  local_dc = in_stack_00000018;
  local_ec = param_1;
  FUN_0041be0e(local_d4);
  local_e8 = (int *)0x0;
  uVar2 = FUN_0040f92a(in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                       in_stack_00000028,in_stack_00000034,in_stack_00000038,param_2);
  piVar3 = local_e8;
  if ((int)uVar2 < 0) {
    uVar4 = 0x3a3;
  }
  else {
    pvVar5 = (HANDLE)0x0;
    local_d6 = '\0';
    pcVar1 = *(code **)(*local_e8 + 0x48);
    (*(code *)PTR_guard_check_icall_00421328)(local_e8,&local_d6);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) {
      uVar4 = 0x3a6;
    }
    else {
      local_d7 = 0;
      pcVar1 = *(code **)(*piVar3 + 0x4c);
      (*(code *)PTR_guard_check_icall_00421328)(piVar3,&local_d7);
      uVar2 = (*pcVar1)();
      if ((int)uVar2 < 0) {
        uVar4 = 0x3a9;
      }
      else {
        local_d5 = '\0';
        pcVar1 = *(code **)(*piVar3 + 0x5c);
        (*(code *)PTR_guard_check_icall_00421328)(piVar3,&local_d5);
        uVar2 = (*pcVar1)();
        if (-1 < (int)uVar2) {
          if ((local_d6 == '\0') || (local_d8 = 1, local_d5 != '\0')) {
            local_d8 = 0;
          }
          FUN_0041a20b(&local_d8,&local_d7,&local_d5);
          if (((local_dc != (int *)0x0) && (lpName = (LPCWSTR)local_dc[0xb], lpName != (LPCWSTR)0x0)
              ) && (*lpName != L'\0')) {
            pvVar5 = OpenEventW(0x100000,0,lpName);
          }
          local_e0 = (int *)0x0;
          pcVar1 = *(code **)(*local_ec + 0x18);
          (*(code *)PTR_guard_check_icall_00421328)(local_ec,piVar3,&local_e0);
          uVar2 = (*pcVar1)();
          if ((int)uVar2 < 0) {
            FUN_0040899b(unaff_retaddr,0x3be,"shellcommon\\internal\\shell\\inc\\creduxparameters.h"
                         ,uVar2);
          }
          else {
            local_e4 = (int *)0x0;
            uVar2 = FUN_0041a2d2(local_e0,(int *)0x18,(int *)&local_e4,(int)pvVar5);
            if (uVar2 == 0x800704c7) {
              *in_stack_0000003c = 1;
LAB_0040fe80:
              FUN_00415178((int *)local_d4);
            }
            else if ((int)uVar2 < 0) {
              FUN_0040899b(unaff_retaddr,0x3c8,
                           "shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar2);
            }
            else {
              local_dc = (int *)0x0;
              pcVar1 = *(code **)*local_e0;
              (*(code *)PTR_guard_check_icall_00421328)(local_e0,&DAT_00402b14,&local_dc);
              piVar3 = (int *)(*pcVar1)();
              if ((int)piVar3 < 0) {
                uVar4 = 0x3cb;
LAB_0040fe99:
                FUN_0040899b(unaff_retaddr,uVar4,
                             "shellcommon\\internal\\shell\\inc\\creduxparameters.h",(uint)piVar3);
              }
              else {
                pcVar1 = *(code **)(*local_dc + 0x20);
                (*(code *)PTR_guard_check_icall_00421328)(local_dc,&local_ec);
                piVar3 = (int *)(*pcVar1)();
                if ((int)piVar3 < 0) {
                  uVar4 = 0x3cd;
                  goto LAB_0040fe99;
                }
                if (local_ec == (int *)0x0) {
                  if (local_e4 != (int *)0x0) {
                    piVar3 = (int *)FUN_0040fa55(local_e4,in_stack_00000020,in_stack_0000002c,
                                                 in_stack_00000030,in_stack_00000034);
                    if (-1 < (int)piVar3) goto LAB_0040fe73;
                    uVar4 = 0x3d1;
                    goto LAB_0040fe99;
                  }
                }
                else if (local_ec == (int *)0x800704c7) {
                  *in_stack_0000003c = 1;
LAB_0040fe73:
                  FUN_00414048((int *)&local_dc);
                  goto LAB_0040fe80;
                }
                if ((int)local_ec < 0) {
                  uVar4 = 0x3d9;
                  piVar3 = local_ec;
                  goto LAB_0040fe99;
                }
              }
              FUN_00414048((int *)&local_dc);
            }
            FUN_00414048((int *)&local_e4);
          }
          FUN_00414048((int *)&local_e0);
          goto LAB_0040fec8;
        }
        uVar4 = 0x3ac;
      }
    }
  }
  FUN_0040899b(unaff_retaddr,uVar4,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar2);
LAB_0040fec8:
  FUN_00414048((int *)&local_e8);
  local_d4[0].Ptr = &PTR_FUN_00401434;
  FUN_00414e7f(local_d4);
  FUN_0040e362((int)local_d4);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040ff0c */

uint __fastcall FUN_0040ff0c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  undefined4 *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  uint *in_stack_0000003c;
  char local_5;
  
  *in_stack_0000003c = 0x4d5;
  if ((in_stack_0000002c == (undefined4 *)0x0) || (in_stack_00000030 == (undefined4 *)0x0)) {
    uVar1 = 0x80070057;
    uVar2 = 0x3fe;
LAB_0040ff86:
    FUN_0040899b(unaff_retaddr,uVar2,"shellcommon\\internal\\shell\\inc\\creduxparameters.h",uVar1);
  }
  else {
    *in_stack_0000002c = 0;
    *in_stack_00000030 = 0;
    uVar1 = FUN_0040fb93(param_1,param_2);
    if (((int)uVar1 < 0) || (local_5 = (char)((uint)param_1 >> 0x18), local_5 == '\0')) {
      *in_stack_0000003c = uVar1 & 0xffff;
      if ((int)uVar1 < 0) {
        uVar2 = 0x40c;
        goto LAB_0040ff86;
      }
    }
    else {
      *in_stack_0000003c = 0x4c7;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040ffa5 */

void __fastcall FUN_0040ffa5(undefined4 param_1,DWORD param_2,PBOOL param_3)

{
  PSID *pSid;
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  int unaff_retaddr;
  int iVar3;
  PSID local_14;
  _SID_IDENTIFIER_AUTHORITY local_10;
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_10.Value[4] = '\0';
  local_10.Value[5] = '\x05';
  local_10.Value[0] = '\0';
  local_10.Value[1] = '\0';
  local_10.Value[2] = '\0';
  local_10.Value[3] = '\0';
  local_14 = (PSID)0x0;
  *param_3 = 0;
  pSid = (PSID *)FUN_00414aa5(&local_14);
  BVar1 = AllocateAndInitializeSid(&local_10,'\x01',param_2,0,0,0,0,0,0,0,pSid);
  if (BVar1 == 0) {
    iVar3 = 0x47;
  }
  else {
    BVar1 = CheckTokenMembership((HANDLE)0x0,local_14,param_3);
    uVar2 = extraout_EDX;
    if (BVar1 != 0) goto LAB_0041001a;
    iVar3 = 0x49;
  }
  FUN_004089d9(unaff_retaddr,iVar3,0x402364);
  uVar2 = extraout_EDX_00;
LAB_0041001a:
  if (local_14 != (HLOCAL)0x0) {
    LocalFree(local_14);
    uVar2 = extraout_EDX_01;
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_00410042 */

void __fastcall FUN_00410042(undefined4 *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 unaff_retaddr;
  undefined4 uVar4;
  int *local_30;
  int *local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined1 local_20 [20];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_30 = (int *)0x0;
  local_c = 0;
  DVar2 = WindowsCreateStringReference
                    (L"Windows.ApplicationModel.Core.CoreApplication",0x2d,local_20,&local_c);
  if ((int)DVar2 < 0) {
    FUN_00406ee0(DVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = RoGetActivationFactory(local_c,&DAT_00402d2c,&local_30);
  if ((int)uVar3 < 0) {
    FUN_0040899b(unaff_retaddr,0x6f,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar3);
    goto LAB_004101b1;
  }
  local_2c = (int *)0x0;
  pcVar1 = *(code **)(*local_30 + 0x20);
  (*(code *)PTR_guard_check_icall_00421328)(local_30,&local_2c);
  uVar3 = (*pcVar1)();
  if ((int)uVar3 < 0) {
    uVar4 = 0x72;
LAB_004100ea:
    FUN_0040899b(unaff_retaddr,uVar4,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar3);
  }
  else {
    if (local_2c == (int *)0x0) {
      uVar3 = 0x80004003;
      uVar4 = 0x73;
      goto LAB_004100ea;
    }
    local_28 = (undefined4 *)0x0;
    pcVar1 = *(code **)(*local_2c + 0x18);
    (*(code *)PTR_guard_check_icall_00421328)(local_2c,&local_28);
    uVar3 = (*pcVar1)();
    if ((int)uVar3 < 0) {
      uVar4 = 0x76;
LAB_00410133:
      FUN_0040899b(unaff_retaddr,uVar4,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar3)
      ;
    }
    else {
      if (local_28 == (undefined4 *)0x0) {
        uVar3 = 0x80004003;
        uVar4 = 0x77;
        goto LAB_00410133;
      }
      local_24 = (int *)0x0;
      pcVar1 = *(code **)*local_28;
      (*(code *)PTR_guard_check_icall_00421328)(local_28,&DAT_00402a04,&local_24);
      uVar3 = (*pcVar1)();
      if ((int)uVar3 < 0) {
        uVar4 = 0x7a;
LAB_0041018c:
        FUN_0040899b(unaff_retaddr,uVar4,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",
                     uVar3);
      }
      else {
        pcVar1 = *(code **)(*local_24 + 0xc);
        (*(code *)PTR_guard_check_icall_00421328)(local_24,*param_1);
        uVar3 = (*pcVar1)();
        if ((int)uVar3 < 0) {
          uVar4 = 0x7c;
          goto LAB_0041018c;
        }
      }
      FUN_00414048((int *)&local_24);
    }
    FUN_00414048((int *)&local_28);
  }
  FUN_00414048((int *)&local_2c);
LAB_004101b1:
  FUN_00414048((int *)&local_30);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004101e0 */

undefined4 FUN_004101e0(undefined4 *param_1)

{
  int *******pppppppiVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int unaff_retaddr;
  int local_30;
  undefined4 local_2c;
  int local_28;
  size_t *local_24;
  undefined4 *local_20;
  size_t local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  
  local_2c = param_1[8];
  pppppppiVar1 = (int *******)*param_1;
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  local_28 = param_1[7];
  local_24 = (size_t *)param_1[6];
  local_20 = (undefined4 *)param_1[5];
  local_1c = param_1[4];
  local_18 = (void *)param_1[3];
  local_14 = (undefined1 *)param_1[2];
  local_10 = param_1[1];
  iVar4 = FUN_0041200b(&local_30);
  if ((iVar4 < 0) || (uVar6 = 1, local_30 != 1)) {
    uVar6 = 0;
  }
  uVar5 = FUN_00410930(uVar6,pppppppiVar1,local_10,local_14,local_18,local_1c,local_20,local_24,
                       local_28,local_2c,uVar2,uVar3,local_c);
  if ((int)uVar5 < 0) {
    FUN_00408a3e(unaff_retaddr,0x97,0x402364,uVar5);
  }
  return local_c[0];
}



/* Function: FUN_004102a5 */

void __fastcall FUN_004102a5(int *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 unaff_retaddr;
  int local_40 [2];
  int *local_38;
  code *local_34;
  int *local_30;
  undefined1 local_2c [20];
  code *local_18;
  uint local_14;
  
  local_14 = DAT_00420100 ^ (uint)&stack0xfffffff0;
  local_38 = param_1;
  uVar6 = IsEnhancedWindowingEnabled();
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 0) {
    local_30 = (int *)0x0;
    local_18 = (code *)0x0;
    DVar2 = WindowsCreateStringReference
                      (L"Windows.UI.WindowManagement.Preview.WindowManagementPreview",0x3b,local_2c,
                       &local_18);
    if ((int)DVar2 < 0) {
      FUN_00406ee0(DVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_34 = local_18;
    if (local_30 != (int *)0x0) {
      pcVar1 = *(code **)(*local_30 + 8);
      (*(code *)PTR_guard_check_icall_00421328)(local_30);
      (*pcVar1)();
    }
    uVar3 = RoGetActivationFactory(local_34,&DAT_00402c34,&local_30);
    if ((int)uVar3 < 0) {
      FUN_0040899b(unaff_retaddr,0xa3,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar3);
    }
    else {
      pcVar1 = *(code **)(*local_30 + 0x18);
      local_34 = pcVar1;
      (*(code *)PTR_guard_check_icall_00421328)
                (local_30,DAT_00401cf4,DAT_00401cf8,DAT_00401cfc,DAT_00401d00,*param_1,
                 *param_1 >> 0x1f,local_40);
      iVar4 = (*pcVar1)();
      if (-1 < iVar4) {
        *local_38 = local_40[0];
        FUN_00414048((int *)&local_30);
        uVar5 = extraout_EDX_00;
        goto LAB_004103a2;
      }
    }
    FUN_00414048((int *)&local_30);
    uVar5 = extraout_EDX;
  }
LAB_004103a2:
  FUN_0041e250(local_14 ^ (uint)&stack0xfffffff0,uVar5);
  return;
}



/* Function: FUN_004103c3 */

uint __fastcall
FUN_004103c3(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            LPDWORD param_10)

{
  uint uVar1;
  HANDLE hHandle;
  undefined4 uVar2;
  int unaff_retaddr;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_8 = param_2;
  uVar1 = UMgrQueryUserContext(0,&local_14);
  if ((int)uVar1 < 0) {
    uVar2 = 0xbb;
  }
  else {
    uVar1 = FUN_004102a5((int *)(param_1 + 4));
    if (-1 < (int)uVar1) {
      local_40 = local_8;
      local_3c = param_3;
      local_38 = param_4;
      local_34 = param_5;
      local_30 = param_6;
      local_2c = param_7;
      local_28 = param_8;
      local_24 = param_9;
      local_1c = local_14;
      local_18 = local_10;
      local_44 = param_1;
      hHandle = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004101e0,&local_44,0,(LPDWORD)0x0);
      if (hHandle == (HANDLE)0x0) {
        uVar1 = FUN_004089d9(unaff_retaddr,0xd5,0x402364);
        return uVar1;
      }
      WaitForSingleObject(hHandle,0xffffffff);
      GetExitCodeThread(hHandle,param_10);
      if (hHandle == (HANDLE)0xffffffff) {
        return 0;
      }
      CloseHandle(hHandle);
      return 0;
    }
    uVar2 = 0xbd;
  }
  FUN_0040899b(unaff_retaddr,uVar2,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar1);
  return uVar1;
}



/* Function: FUN_004104b1 */

undefined4 __fastcall FUN_004104b1(int *******param_1,char param_2,undefined4 *param_3)

{
  int ******ppppppiVar1;
  undefined4 *puVar2;
  int *******pppppppiVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  int ********local_c;
  int *******local_8;
  
  if (param_1 == (int *******)0x0) {
    return 0;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  local_c = (int ********)param_1;
  local_8 = param_1;
  if ((*param_1 != (int ******)0x14) && (*param_1 != (int ******)0x44)) {
    FUN_0040899b(unaff_retaddr,0xe1,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",
                 0x80070057);
    return 0x80070057;
  }
  iVar5 = 0x44;
  puVar2 = param_3;
  do {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *param_3 = 0x44;
  if (param_2 == '\0') {
    local_c = &local_8;
    local_8 = (int *******)0x0;
    FUN_00410042(&local_c);
    pppppppiVar3 = local_8;
    if (local_8 == (int *******)0x0) goto LAB_00410532;
  }
  else {
    pppppppiVar3 = (int *******)param_1[1];
  }
  param_3[1] = pppppppiVar3;
LAB_00410532:
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  if (*param_1 == (int ******)0x44) {
    if (((uint)param_1[4] & 0x100) != 0) {
      param_3[5] = param_1[5];
    }
    if (((uint)param_1[4] & 0x200) != 0) {
      param_3[6] = param_1[6];
    }
    if (((uint)param_1[4] & 0x400) != 0) {
      param_3[7] = param_1[7];
      param_3[8] = param_1[8];
      param_3[9] = param_1[9];
    }
    if (((uint)param_1[4] & 0x800) != 0) {
      param_3[10] = param_1[10];
    }
    ppppppiVar1 = param_1[0xb];
    if ((ppppppiVar1 != (int ******)0x0) && (*(short *)ppppppiVar1 != 0)) {
      param_3[0xb] = ppppppiVar1;
    }
    ppppppiVar1 = param_1[0xc];
    if ((ppppppiVar1 != (int ******)0x0) && (*(short *)ppppppiVar1 != 0)) {
      param_3[0xc] = ppppppiVar1;
    }
    ppppppiVar1 = param_1[0xd];
    if ((ppppppiVar1 != (int ******)0x0) && (*(short *)ppppppiVar1 != 0)) {
      param_3[0xd] = ppppppiVar1;
    }
    if (param_1[0xe] != (int ******)0x0) {
      param_3[0xe] = param_1[0xe];
    }
    uVar4 = FUN_00416941(&DAT_00420878);
    if ((char)uVar4 == '\0') {
      param_3[0xf] = 0;
      param_3[0x10] = 0;
    }
    else {
      if (param_1[0xf] != (int ******)0x0) {
        param_3[0xf] = param_1[0xf];
      }
      if (param_1[0x10] != (int ******)0x0) {
        param_3[0x10] = param_1[0x10];
      }
    }
    param_3[4] = param_1[4];
  }
  return 0;
}



/* Function: FUN_00410605 */

void __fastcall
FUN_00410605(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
            void *param_5,size_t param_6,undefined4 *param_7,size_t *param_8,int param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 *param_13)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  LPVOID _Dst;
  undefined1 *puVar5;
  size_t sVar6;
  undefined4 extraout_EDX;
  undefined4 unaff_retaddr;
  size_t *local_64;
  int *local_60;
  undefined1 local_5c;
  undefined4 *local_58;
  int local_54;
  undefined4 local_50;
  void *local_4c;
  int *local_48;
  undefined4 *local_44;
  int *local_40;
  size_t local_3c;
  short local_38 [2];
  int local_34;
  undefined1 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 local_24 [20];
  uint local_10;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_30 = param_4;
  local_3c = param_6;
  local_58 = param_7;
  local_34 = param_9;
  *param_13 = 0x4d5;
  local_50 = param_2;
  local_2c = Ordinal_411(0x11,0,param_6);
  local_64 = &local_3c;
  local_60 = &local_2c;
  if ((local_2c != 0) && (local_3c != 0)) {
    iVar2 = Ordinal_23(local_2c,&local_4c);
    if (iVar2 < 0) {
      Ordinal_16(local_2c);
      local_2c = 0;
    }
    else {
      memcpy(local_4c,param_5,local_3c);
      Ordinal_24(local_2c);
    }
  }
  local_48 = (int *)0x0;
  local_10 = 0;
  DVar3 = WindowsCreateStringReference
                    (L"Windows.Internal.Shell.CredUXHostForHighIL",0x2a,local_24,&local_10);
  if ((int)DVar3 < 0) {
    FUN_00406ee0(DVar3);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = FUN_0040dcdc(local_10,&DAT_00402b34,0,(int *)&local_48);
  if ((int)uVar4 < 0) {
    FUN_0040899b(unaff_retaddr,0x299,"onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",
                 uVar4);
    FUN_0040899b(unaff_retaddr,0x16c,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar4);
  }
  else {
    local_44 = (undefined4 *)0x0;
    local_10 = 0;
    pcVar1 = *(code **)(*local_48 + 0x18);
    (*(code *)PTR_guard_check_icall_00421328)(local_48,param_11,param_12,&local_44);
    uVar4 = (*pcVar1)();
    if ((int)uVar4 < 0) {
      FUN_0040899b(unaff_retaddr,0x16f,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar4)
      ;
    }
    else {
      local_40 = (int *)0x0;
      pcVar1 = *(code **)*local_44;
      (*(code *)PTR_guard_check_icall_00421328)(local_44,&DAT_00402c24,&local_40);
      uVar4 = (*pcVar1)();
      if ((int)uVar4 < 0) {
        FUN_0040899b(unaff_retaddr,0x172,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",
                     uVar4);
      }
      else {
        pcVar1 = *(code **)(*local_40 + 0xc);
        (*(code *)PTR_guard_check_icall_00421328)
                  (local_40,local_50,0,0,param_3,local_30,local_2c,&local_28,local_34,param_10,
                   param_13);
        iVar2 = (*pcVar1)();
        if (((((-1 < iVar2) && (iVar2 = Ordinal_17(local_28), iVar2 == 1)) &&
             (iVar2 = Ordinal_18(local_28), iVar2 == 1)) &&
            ((iVar2 = Ordinal_20(local_28,1,&local_54), -1 < iVar2 && (local_54 == 0)))) &&
           ((iVar2 = Ordinal_77(local_28,local_38), -1 < iVar2 && (local_38[0] == 0x11)))) {
          local_30 = (undefined1 *)0x0;
          iVar2 = Ordinal_19(local_28,1,&local_34);
          if (((-1 < iVar2) && (0 < local_34)) &&
             (iVar2 = Ordinal_23(local_28,&local_30), -1 < iVar2)) {
            *param_8 = local_34 + 1U;
            _Dst = CoTaskMemAlloc(local_34 + 1U);
            *local_58 = _Dst;
            if (_Dst != (LPVOID)0x0) {
              memcpy(_Dst,local_30,*param_8);
            }
            puVar5 = local_30;
            for (sVar6 = *param_8; sVar6 != 0; sVar6 = sVar6 - 1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            Ordinal_24(local_28);
          }
        }
        Ordinal_16(local_28);
      }
      FUN_00414048((int *)&local_40);
    }
    FUN_00414048((int *)&local_44);
  }
  FUN_00414048((int *)&local_48);
  local_5c = 0;
  FUN_004108da(&local_64);
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004108da */

void __fastcall FUN_004108da(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  local_8 = param_1;
  if ((*(int *)*param_1 != 0) &&
     (iVar1 = Ordinal_23(*(undefined4 *)param_1[1],&local_8), -1 < iVar1)) {
    puVar2 = local_8;
    for (iVar1 = *(int *)*param_1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    Ordinal_24(*(undefined4 *)param_1[1]);
  }
  Ordinal_16(*(undefined4 *)param_1[1]);
  return;
}



/* Function: FUN_00410930 */

void __fastcall
FUN_00410930(int param_1,int *******param_2,undefined4 param_3,undefined1 *param_4,void *param_5,
            size_t param_6,undefined4 *param_7,size_t *param_8,int param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 *param_13)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 extraout_EDX_00;
  undefined4 unaff_retaddr;
  undefined4 local_98 [19];
  undefined1 *local_4c;
  void *local_48;
  undefined4 *local_44;
  size_t *local_40;
  int local_3c;
  int local_38;
  BOOL local_34;
  BOOL local_30;
  BOOL local_2c;
  int local_28;
  undefined1 local_24 [20];
  uint local_10;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_4c = param_4;
  local_48 = param_5;
  local_44 = param_7;
  local_40 = param_8;
  local_3c = param_9;
  *param_13 = 0x1f;
  local_38 = param_1;
  uVar2 = RoInitialize(1);
  if ((int)uVar2 < 0) {
    FUN_0040899b(unaff_retaddr,0x1a2,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar2);
    uVar4 = extraout_EDX;
    goto LAB_00410b04;
  }
  memset(local_98,0,0x44);
  uVar2 = FUN_004104b1(param_2,local_38 != 0,local_98);
  if ((int)uVar2 < 0) {
    uVar4 = 0x1a9;
LAB_00410b4a:
    FUN_0040899b(unaff_retaddr,uVar4,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar2);
  }
  else {
    local_2c = 0;
    uVar2 = FUN_0040ffa5(extraout_ECX,0x13,&local_2c);
    if ((int)uVar2 < 0) {
      uVar4 = 0x1ac;
      goto LAB_00410b4a;
    }
    local_30 = 0;
    uVar2 = FUN_0040ffa5(extraout_ECX_00,0x12,&local_30);
    if ((int)uVar2 < 0) {
      uVar4 = 0x1af;
      goto LAB_00410b4a;
    }
    local_34 = 0;
    uVar2 = FUN_0040ffa5(extraout_ECX_01,0x14,&local_34);
    if ((int)uVar2 < 0) {
      uVar4 = 0x1b2;
      goto LAB_00410b4a;
    }
    if (((local_2c == 0) && (local_30 == 0)) && (local_34 == 0)) {
      local_28 = 0;
      local_10 = 0;
      DVar3 = WindowsCreateStringReference(L"Windows.Internal.Shell.CredUX",0x1d,local_24,&local_10)
      ;
      if ((int)DVar3 < 0) {
        FUN_00406ee0(DVar3);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar2 = FUN_0040dcdc(local_10,&DAT_00402bc4,0,&local_28);
      if ((int)uVar2 < 0) {
        FUN_0040899b(unaff_retaddr,0x299,
                     "onecoreuap\\internal\\shell\\inc\\platformextensiontools.h",uVar2);
        uVar4 = 0x1bb;
      }
      else {
        uVar2 = FUN_0040ff0c(local_28,local_38);
        if (-1 < (int)uVar2) {
          FUN_00414048(&local_28);
          goto LAB_00410afc;
        }
        uVar4 = 0x1bd;
      }
      FUN_0040899b(unaff_retaddr,uVar4,"shellcommon\\internal\\shell\\inc\\CredUIApiCommon.h",uVar2)
      ;
      FUN_00414048(&local_28);
    }
    else {
      uVar2 = FUN_00410605(extraout_ECX_02,local_98,param_3,local_4c,local_48,param_6,local_44,
                           local_40,local_3c,param_10,param_11,param_12,param_13);
      if ((int)uVar2 < 0) {
        uVar4 = 0x1b6;
        goto LAB_00410b4a;
      }
    }
  }
LAB_00410afc:
  RoUninitialize();
  uVar4 = extraout_EDX_00;
LAB_00410b04:
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00410b68 */

undefined4 FUN_00410b68(SIZE_T param_1,undefined4 *param_2)

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



/* Function: FUN_00410b93 */

void __fastcall FUN_00410b93(short *param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_0041bea1(param_1,(int)psVar2 - (int)(param_1 + 1) >> 1,param_1,param_2);
  return;
}



/* Function: FUN_00410bbd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00410bbd(void)

{
  BOOL BVar1;
  undefined *local_18;
  int local_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00420710,0,&local_14,&local_18);
  if ((BVar1 != 0) && (local_14 != 0)) {
    puStack_10 = &DAT_00420710;
    local_18 = &DAT_00420714;
    _DAT_00420718 = 0;
    DAT_0042071c = 0;
    _DAT_00420720 = 0;
    _DAT_00420714 = &PTR_FUN_00401478;
    _DAT_00420724 = &DAT_00420028;
    FUN_0041e372(FUN_00410c50);
    uStack_c = 0;
    FUN_00416225((int *)&puStack_10);
  }
  return local_18;
}



/* Function: FUN_00410c50 */

void FUN_00410c50(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00420710,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_00421328)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00410ca0 */

void __fastcall FUN_00410ca0(PSRWLOCK param_1)

{
  uint *this;
  undefined4 *puVar1;
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
  
  puVar1 = (undefined4 *)FUN_004146e8((int)param_1);
  FUN_00414707(param_1);
  puVar2 = FUN_00410bbd();
  if (puVar1 == (undefined4 *)0x0) {
    this = *(uint **)(puVar2 + 4);
    if (5 < *this) {
      uVar3 = FUN_00405a58(this,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_44 = (undefined *)GetCurrentThreadId();
        local_3c = &DAT_00402888;
        local_40 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
        FUN_00405e65((int)this,&DAT_004050a4,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX_00,
                     &local_3c,&local_40,&local_44);
      }
    }
  }
  else if (5 < **(uint **)(puVar2 + 4)) {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
    if ((char)uVar3 != '\0') {
      local_8 = puVar1[0x12];
      local_c = puVar1[0x11];
      local_10 = puVar1[0x10];
      local_14 = puVar1[0xf];
      local_18 = puVar1[0xe];
      local_1c = puVar1[0xd];
      local_20 = puVar1[0xc];
      local_24 = puVar1[6];
      local_28 = puVar1[5];
      local_2c = *puVar1;
      local_30 = puVar1[0x13];
      local_34 = puVar1[10];
      local_38 = puVar1[9];
      local_3c = (undefined *)puVar1[2];
      local_40 = &local_4c;
      local_4c = 0x1000000;
      local_48 = 0;
      local_44 = &DAT_00402888;
      FUN_00405a9b(extraout_ECX,&DAT_00403658,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX,
                   &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                   &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_00409aa5(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_00410e1a */

void __fastcall FUN_00410e1a(PSRWLOCK param_1)

{
  uint *this;
  undefined *puVar1;
  uint uVar2;
  LPCGUID pGVar3;
  PSRWLOCK pRStack_10;
  PSRWLOCK apRStack_c [2];
  
  pRStack_10 = param_1;
  apRStack_c[0] = param_1;
  FUN_0041473d(param_1);
  puVar1 = FUN_00410bbd();
  this = *(uint **)(puVar1 + 4);
  if (5 < *this) {
    uVar2 = FUN_00405a58(this,0,0x2000);
    if ((char)uVar2 != '\0') {
      pRStack_10 = (PSRWLOCK)GetCurrentThreadId();
      apRStack_c[0] = (PSRWLOCK)&DAT_00402888;
      pGVar3 = (LPCGUID)FUN_004147aa((int)param_1);
      FUN_00405edb((int)this,&DAT_004043ad,(LPCGUID)((int)param_1[0x2a].Ptr + 8),pGVar3,apRStack_c,
                   &pRStack_10);
    }
  }
  if (param_1[0x2f].Ptr == (PVOID)0x0) {
    FUN_00409a42(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_00410ea6 */

void __thiscall
FUN_00410ea6(void *this,DWORD param_1,DWORD param_2,DWORD param_3,DWORD param_4,undefined4 *param_5,
            undefined *param_6)

{
  uint *this_00;
  DWORD *pDVar1;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined *local_68;
  undefined4 *local_64;
  DWORD local_60;
  DWORD local_5c;
  DWORD local_58;
  DWORD local_54;
  DWORD local_50;
  DWORD local_4c;
  DWORD local_48;
  DWORD local_44;
  DWORD local_40;
  DWORD local_3c;
  DWORD local_38;
  undefined *local_34;
  DWORD local_30;
  DWORD local_2c;
  DWORD local_28;
  DWORD local_24;
  DWORD local_20;
  DWORD local_1c;
  undefined4 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  pDVar1 = (DWORD *)FUN_004146e8((int)this);
  FUN_00414707((PSRWLOCK)this);
  puVar2 = FUN_00410bbd();
  if (pDVar1 == (DWORD *)0x0) {
    this_00 = *(uint **)(puVar2 + 4);
    if (5 < *this_00) {
      uVar3 = FUN_00405a58(this_00,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_14 = param_6;
        local_18 = param_5;
        local_1c = param_4;
        local_20 = param_3;
        local_24 = param_2;
        local_28 = param_1;
        local_2c = GetCurrentThreadId();
        local_34 = &DAT_00402888;
        local_30 = *(DWORD *)(*(int *)((int)this + 0xa8) + 0x38);
        FUN_004065ad((int)this_00,&DAT_00404dee,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                     extraout_ECX_00,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,
                     &local_1c,&local_18,&local_14);
      }
    }
  }
  else if (5 < **(uint **)(puVar2 + 4)) {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
    if ((char)uVar3 != '\0') {
      local_68 = param_6;
      local_64 = param_5;
      local_60 = param_4;
      local_5c = param_3;
      local_58 = param_2;
      local_54 = param_1;
      local_50 = pDVar1[0x12];
      local_4c = pDVar1[0x11];
      local_48 = pDVar1[0x10];
      local_44 = pDVar1[0xf];
      local_40 = pDVar1[0xe];
      local_3c = pDVar1[0xd];
      local_38 = pDVar1[0xc];
      local_34 = (undefined *)pDVar1[6];
      local_30 = pDVar1[5];
      local_2c = *pDVar1;
      local_28 = pDVar1[0x13];
      local_24 = pDVar1[10];
      local_20 = pDVar1[9];
      local_1c = pDVar1[2];
      local_18 = &local_10;
      local_10 = 0x1000000;
      local_c = 0;
      local_14 = &DAT_00402888;
      FUN_0040634e(extraout_ECX,&DAT_00403985,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),extraout_ECX
                   ,&local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30,
                   &local_34,&local_38,&local_3c,&local_40,&local_44,&local_48,&local_4c,&local_50,
                   &local_54,&local_58,&local_5c,&local_60,&local_64,&local_68);
    }
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    FUN_00409aa5((undefined4 *)((int)this + 0xb0));
  }
  return;
}



/* Function: FUN_00411110 */

void __fastcall FUN_00411110(PSRWLOCK param_1)

{
  uint *this;
  undefined4 *puVar1;
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
  
  puVar1 = (undefined4 *)FUN_004146e8((int)param_1);
  FUN_00414707(param_1);
  puVar2 = FUN_00410bbd();
  if (puVar1 == (undefined4 *)0x0) {
    this = *(uint **)(puVar2 + 4);
    if (5 < *this) {
      uVar3 = FUN_00405a58(this,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_44 = (undefined *)GetCurrentThreadId();
        local_3c = &DAT_00402888;
        local_40 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
        FUN_00405e65((int)this,&DAT_0040498f,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX_00,
                     &local_3c,&local_40,&local_44);
      }
    }
  }
  else if (5 < **(uint **)(puVar2 + 4)) {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
    if ((char)uVar3 != '\0') {
      local_8 = puVar1[0x12];
      local_c = puVar1[0x11];
      local_10 = puVar1[0x10];
      local_14 = puVar1[0xf];
      local_18 = puVar1[0xe];
      local_1c = puVar1[0xd];
      local_20 = puVar1[0xc];
      local_24 = puVar1[6];
      local_28 = puVar1[5];
      local_2c = *puVar1;
      local_30 = puVar1[0x13];
      local_34 = puVar1[10];
      local_38 = puVar1[9];
      local_3c = (undefined *)puVar1[2];
      local_40 = &local_4c;
      local_4c = 0x1000000;
      local_48 = 0;
      local_44 = &DAT_00402888;
      FUN_00405a9b(extraout_ECX,&DAT_0040378e,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX,
                   &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                   &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_00409aa5(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_0041128a */

void __fastcall FUN_0041128a(PSRWLOCK param_1)

{
  uint *this;
  undefined *puVar1;
  uint uVar2;
  LPCGUID pGVar3;
  PSRWLOCK pRStack_10;
  PSRWLOCK apRStack_c [2];
  
  pRStack_10 = param_1;
  apRStack_c[0] = param_1;
  FUN_0041473d(param_1);
  puVar1 = FUN_00410bbd();
  this = *(uint **)(puVar1 + 4);
  if (5 < *this) {
    uVar2 = FUN_00405a58(this,0,0x2000);
    if ((char)uVar2 != '\0') {
      pRStack_10 = (PSRWLOCK)GetCurrentThreadId();
      apRStack_c[0] = (PSRWLOCK)&DAT_00402888;
      pGVar3 = (LPCGUID)FUN_004147aa((int)param_1);
      FUN_00405edb((int)this,&DAT_004044cc,(LPCGUID)((int)param_1[0x2a].Ptr + 8),pGVar3,apRStack_c,
                   &pRStack_10);
    }
  }
  if (param_1[0x2f].Ptr == (PVOID)0x0) {
    FUN_00409a42(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_00411316 */

void __thiscall
FUN_00411316(void *this,DWORD param_1,DWORD param_2,DWORD param_3,DWORD param_4,undefined4 *param_5,
            undefined *param_6)

{
  uint *this_00;
  DWORD *pDVar1;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined *local_68;
  undefined4 *local_64;
  DWORD local_60;
  DWORD local_5c;
  DWORD local_58;
  DWORD local_54;
  DWORD local_50;
  DWORD local_4c;
  DWORD local_48;
  DWORD local_44;
  DWORD local_40;
  DWORD local_3c;
  DWORD local_38;
  undefined *local_34;
  DWORD local_30;
  DWORD local_2c;
  DWORD local_28;
  DWORD local_24;
  DWORD local_20;
  DWORD local_1c;
  undefined4 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  pDVar1 = (DWORD *)FUN_004146e8((int)this);
  FUN_00414707((PSRWLOCK)this);
  puVar2 = FUN_00410bbd();
  if (pDVar1 == (DWORD *)0x0) {
    this_00 = *(uint **)(puVar2 + 4);
    if (5 < *this_00) {
      uVar3 = FUN_00405a58(this_00,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_14 = param_6;
        local_18 = param_5;
        local_1c = param_4;
        local_20 = param_3;
        local_24 = param_2;
        local_28 = param_1;
        local_2c = GetCurrentThreadId();
        local_34 = &DAT_00402888;
        local_30 = *(DWORD *)(*(int *)((int)this + 0xa8) + 0x38);
        FUN_004065ad((int)this_00,&DAT_00405358,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                     extraout_ECX_00,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,
                     &local_1c,&local_18,&local_14);
      }
    }
  }
  else if (5 < **(uint **)(puVar2 + 4)) {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
    if ((char)uVar3 != '\0') {
      local_68 = param_6;
      local_64 = param_5;
      local_60 = param_4;
      local_5c = param_3;
      local_58 = param_2;
      local_54 = param_1;
      local_50 = pDVar1[0x12];
      local_4c = pDVar1[0x11];
      local_48 = pDVar1[0x10];
      local_44 = pDVar1[0xf];
      local_40 = pDVar1[0xe];
      local_3c = pDVar1[0xd];
      local_38 = pDVar1[0xc];
      local_34 = (undefined *)pDVar1[6];
      local_30 = pDVar1[5];
      local_2c = *pDVar1;
      local_28 = pDVar1[0x13];
      local_24 = pDVar1[10];
      local_20 = pDVar1[9];
      local_1c = pDVar1[2];
      local_18 = &local_10;
      local_10 = 0x1000000;
      local_c = 0;
      local_14 = &DAT_00402888;
      FUN_0040634e(extraout_ECX,&DAT_00404a29,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),extraout_ECX
                   ,&local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30,
                   &local_34,&local_38,&local_3c,&local_40,&local_44,&local_48,&local_4c,&local_50,
                   &local_54,&local_58,&local_5c,&local_60,&local_64,&local_68);
    }
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    FUN_00409aa5((undefined4 *)((int)this + 0xb0));
  }
  return;
}



/* Function: FUN_00411580 */

void __fastcall FUN_00411580(PSRWLOCK param_1)

{
  uint *this;
  undefined4 *puVar1;
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
  
  puVar1 = (undefined4 *)FUN_004146e8((int)param_1);
  FUN_00414707(param_1);
  puVar2 = FUN_00410bbd();
  if (puVar1 == (undefined4 *)0x0) {
    this = *(uint **)(puVar2 + 4);
    if (5 < *this) {
      uVar3 = FUN_00405a58(this,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_44 = (undefined *)GetCurrentThreadId();
        local_3c = &DAT_00402888;
        local_40 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
        FUN_00405e65((int)this,&DAT_00403920,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX_00,
                     &local_3c,&local_40,&local_44);
      }
    }
  }
  else if (5 < **(uint **)(puVar2 + 4)) {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
    if ((char)uVar3 != '\0') {
      local_8 = puVar1[0x12];
      local_c = puVar1[0x11];
      local_10 = puVar1[0x10];
      local_14 = puVar1[0xf];
      local_18 = puVar1[0xe];
      local_1c = puVar1[0xd];
      local_20 = puVar1[0xc];
      local_24 = puVar1[6];
      local_28 = puVar1[5];
      local_2c = *puVar1;
      local_30 = puVar1[0x13];
      local_34 = puVar1[10];
      local_38 = puVar1[9];
      local_3c = (undefined *)puVar1[2];
      local_40 = &local_4c;
      local_4c = 0x1000000;
      local_48 = 0;
      local_44 = &DAT_00402888;
      FUN_00405a9b(extraout_ECX,&DAT_0040413b,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX,
                   &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                   &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_00409aa5(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_004116fa */

void __fastcall FUN_004116fa(PSRWLOCK param_1)

{
  uint *this;
  undefined *puVar1;
  uint uVar2;
  LPCGUID pGVar3;
  PSRWLOCK pRStack_10;
  PSRWLOCK apRStack_c [2];
  
  pRStack_10 = param_1;
  apRStack_c[0] = param_1;
  FUN_0041473d(param_1);
  puVar1 = FUN_00410bbd();
  this = *(uint **)(puVar1 + 4);
  if (5 < *this) {
    uVar2 = FUN_00405a58(this,0,0x2000);
    if ((char)uVar2 != '\0') {
      pRStack_10 = (PSRWLOCK)GetCurrentThreadId();
      apRStack_c[0] = (PSRWLOCK)&DAT_00402888;
      pGVar3 = (LPCGUID)FUN_004147aa((int)param_1);
      FUN_00405edb((int)this,&DAT_00404813,(LPCGUID)((int)param_1[0x2a].Ptr + 8),pGVar3,apRStack_c,
                   &pRStack_10);
    }
  }
  if (param_1[0x2f].Ptr == (PVOID)0x0) {
    FUN_00409a42(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_00411786 */

void __thiscall
FUN_00411786(void *this,DWORD param_1,DWORD param_2,DWORD param_3,DWORD param_4,undefined4 *param_5,
            undefined *param_6)

{
  uint *this_00;
  DWORD *pDVar1;
  undefined *puVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined *local_68;
  undefined4 *local_64;
  DWORD local_60;
  DWORD local_5c;
  DWORD local_58;
  DWORD local_54;
  DWORD local_50;
  DWORD local_4c;
  DWORD local_48;
  DWORD local_44;
  DWORD local_40;
  DWORD local_3c;
  DWORD local_38;
  undefined *local_34;
  DWORD local_30;
  DWORD local_2c;
  DWORD local_28;
  DWORD local_24;
  DWORD local_20;
  DWORD local_1c;
  undefined4 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  pDVar1 = (DWORD *)FUN_004146e8((int)this);
  FUN_00414707((PSRWLOCK)this);
  puVar2 = FUN_00410bbd();
  if (pDVar1 == (DWORD *)0x0) {
    this_00 = *(uint **)(puVar2 + 4);
    if (5 < *this_00) {
      uVar3 = FUN_00405a58(this_00,0,0x2000);
      if ((char)uVar3 != '\0') {
        local_14 = param_6;
        local_18 = param_5;
        local_1c = param_4;
        local_20 = param_3;
        local_24 = param_2;
        local_28 = param_1;
        local_2c = GetCurrentThreadId();
        local_34 = &DAT_00402888;
        local_30 = *(DWORD *)(*(int *)((int)this + 0xa8) + 0x38);
        FUN_004065ad((int)this_00,&DAT_004051de,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                     extraout_ECX_00,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,
                     &local_1c,&local_18,&local_14);
      }
    }
  }
  else if (5 < **(uint **)(puVar2 + 4)) {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
    if ((char)uVar3 != '\0') {
      local_68 = param_6;
      local_64 = param_5;
      local_60 = param_4;
      local_5c = param_3;
      local_58 = param_2;
      local_54 = param_1;
      local_50 = pDVar1[0x12];
      local_4c = pDVar1[0x11];
      local_48 = pDVar1[0x10];
      local_44 = pDVar1[0xf];
      local_40 = pDVar1[0xe];
      local_3c = pDVar1[0xd];
      local_38 = pDVar1[0xc];
      local_34 = (undefined *)pDVar1[6];
      local_30 = pDVar1[5];
      local_2c = *pDVar1;
      local_28 = pDVar1[0x13];
      local_24 = pDVar1[10];
      local_20 = pDVar1[9];
      local_1c = pDVar1[2];
      local_18 = &local_10;
      local_10 = 0x1000000;
      local_c = 0;
      local_14 = &DAT_00402888;
      FUN_0040634e(extraout_ECX,&DAT_00404bb0,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),extraout_ECX
                   ,&local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30,
                   &local_34,&local_38,&local_3c,&local_40,&local_44,&local_48,&local_4c,&local_50,
                   &local_54,&local_58,&local_5c,&local_60,&local_64,&local_68);
    }
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    FUN_00409aa5((undefined4 *)((int)this + 0xb0));
  }
  return;
}



/* Function: FUN_004119e3 */

void FUN_004119e3(void)

{
  uint uVar1;
  int unaff_retaddr;
  undefined1 *local_c;
  undefined1 local_8 [4];
  
  local_c = local_8;
  uVar1 = FUN_00411a18(&local_c);
  if ((int)uVar1 < 0) {
    FUN_00408a3e(unaff_retaddr,0x66,0x4024d4,uVar1);
  }
  return;
}



/* Function: FUN_00411a18 */

uint __fastcall FUN_00411a18(undefined4 *param_1)

{
  HANDLE hObject;
  uint uVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  undefined1 local_78 [8];
  undefined **local_70;
  HANDLE *local_6c;
  undefined4 *local_68;
  undefined ***local_38;
  HANDLE *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  DWORD local_24;
  undefined4 local_20;
  HANDLE local_1c;
  HANDLE local_18;
  HANDLE local_14;
  
  local_14 = (HANDLE)0x0;
  uVar1 = FUN_0041d509(&local_14);
  if (-1 < (int)uVar1) {
    local_24 = GetProcessId(local_14);
  }
  hObject = local_14;
  local_14 = (HANDLE)0x0;
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
  }
  if ((int)uVar1 < 0) {
    FUN_0040899b(unaff_retaddr,0x5b,
                 "pcshell\\shell\\auth\\creduibroker\\exe\\CredUIBrokerTelemetry.h",uVar1);
  }
  else {
    local_18 = (HANDLE)0x0;
    local_30 = &local_18;
    local_2c = 0;
    local_28 = 1;
    uVar2 = FUN_0041d509(&local_2c);
    uVar1 = 0;
    if ((int)uVar2 < 0) {
      uVar1 = uVar2;
    }
    FUN_004145f4(&local_30);
    if ((int)uVar1 < 0) {
      FUN_0040899b(unaff_retaddr,0x5e,
                   "pcshell\\shell\\auth\\creduibroker\\exe\\CredUIBrokerTelemetry.h",uVar1);
    }
    else {
      local_68 = &local_20;
      local_14 = (HANDLE)0x0;
      local_20 = 0;
      local_1c = local_18;
      local_6c = &local_1c;
      local_38 = &local_70;
      local_70 = &PTR_FUN_00401464;
      uVar1 = FUN_0041beed(&local_14,(int)local_78);
      if ((int)uVar1 < 0) {
        FUN_0040899b(unaff_retaddr,0x61,
                     "pcshell\\shell\\auth\\creduibroker\\exe\\CredUIBrokerTelemetry.h",uVar1);
      }
      else {
        local_20 = *(undefined4 *)*param_1;
        local_1c = local_14;
        FUN_0041a32f(&local_1c,&local_24,&local_20);
        uVar1 = 0;
      }
      FUN_00415cdd((int *)&local_14);
    }
    if ((local_18 != (HANDLE)0x0) && (local_18 != (HANDLE)0xffffffff)) {
      CloseHandle(local_18);
    }
  }
  return uVar1;
}



/* Function: FUN_00411b66 */

void __fastcall FUN_00411b66(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_00409aa5((undefined4 *)(param_1 + 0xb0));
  }
  FUN_00416281((undefined4 *)(param_1 + 0xac));
  FUN_00411b96((int *)(param_1 + 4));
  return;
}



/* Function: FUN_00411b96 */

void __fastcall FUN_00411b96(int *param_1)

{
  FUN_00407d87(param_1 + 0x25);
  FUN_00409e35((int)(param_1 + 10));
  FUN_0041463c(param_1);
  return;
}



/* Function: FUN_00411bbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00411bbc(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00420888,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_00420888;
    local_8 = &DAT_0042088c;
    _DAT_00420890 = 0;
    DAT_00420894 = 0;
    _DAT_00420898 = 0;
    _DAT_0042088c = &PTR_FUN_00401478;
    _DAT_0042089c = &DAT_00420078;
    FUN_0041e372(FUN_00411c40);
    local_10 = 0;
    FUN_00416225((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00411c40 */

void FUN_00411c40(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00420888,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_00421328)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00411c90 */

void FUN_00411c90(uint param_1,ushort *param_2,undefined4 *param_3,int param_4,uint *param_5,
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
  
  puVar2 = FUN_00411bbc();
  if ((*(int **)(puVar2 + 4) != (int *)0x0) && (**(int **)(puVar2 + 4) != 0)) {
    if (param_5 == (uint *)0x0) {
      if (param_6 == (uint *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          puVar2 = FUN_00411bbc();
          puVar1 = *(uint **)(puVar2 + 4);
          if (2 < *puVar1) {
            uVar3 = FUN_00405a58(puVar1,1,0);
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
              FUN_0040680f((int)puVar1,&DAT_0040486f,param_2,param_2,local_c,&local_10,&local_44,
                           &local_48,&local_14,&local_18,&local_4e,&local_1c,&local_20,&local_24,
                           &local_4c,&local_28,&local_2c,&local_30,&local_40,&local_3c,&local_38,
                           &local_34);
            }
          }
        }
      }
      else {
        puVar2 = FUN_00411bbc();
        puVar1 = *(uint **)(puVar2 + 4);
        if (5 < *puVar1) {
          uVar3 = FUN_00405a58(puVar1,4,0);
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
            FUN_00406747((int)puVar1,&DAT_00404444,param_2,param_2,&local_34,&local_40,&local_44,
                         &local_48,&local_4c,&local_3c,&local_4e,&local_38);
          }
        }
      }
    }
    else {
      puVar2 = FUN_00411bbc();
      if (5 < **(uint **)(puVar2 + 4)) {
        uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),2,0);
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
          FUN_00406692(extraout_ECX,&DAT_0040335c,extraout_ECX,extraout_ECX,&local_38,&local_3c,
                       &local_48,&local_4c,&local_4e,&local_40,&local_44);
        }
      }
      if (((param_2 != (ushort *)0x0) && ((char)param_2[2] == '\x01')) && (param_4 != 0)) {
        puVar2 = FUN_00411bbc();
        if (5 < **(uint **)(puVar2 + 4)) {
          uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),10,0);
          if ((char)uVar3 != '\0') {
            local_38 = param_8;
            local_3c = *param_5;
            local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
            local_40 = (uint)param_2[1];
            local_44 = (uint)*param_2;
            local_4c = param_1;
            local_4e = CONCAT11(local_4e._1_1_,1);
            FUN_00406692(extraout_ECX_00,&DAT_00404e9b,extraout_ECX_00,extraout_ECX_00,&local_4c,
                         &local_44,&local_40,&local_48,&local_4e,&local_3c,&local_38);
          }
        }
      }
    }
  }
  return;
}



/* Function: FUN_0041200b */

void FUN_0041200b(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  DWORD DVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  undefined4 unaff_retaddr;
  undefined4 uStack_60;
  int *local_28;
  undefined1 local_24 [20];
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_28 = (int *)0x0;
  local_10 = 0;
  DVar3 = WindowsCreateStringReference
                    (L"Windows.Internal.Shell.Holographic.ContextIdentifier",0x34,local_24,&local_10
                    );
  uVar2 = local_10;
  if ((int)DVar3 < 0) {
    FUN_00406ee0(DVar3);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_28 != (int *)0x0) {
    pcVar1 = *(code **)(*local_28 + 8);
    (*(code *)PTR_guard_check_icall_00421328)(local_28);
    (*pcVar1)();
  }
  uVar4 = RoGetActivationFactory(uVar2,&DAT_00402d14,&local_28);
  if ((int)uVar4 < 0) {
    uStack_60 = 0x2b;
  }
  else {
    pcVar1 = *(code **)(*local_28 + 0x18);
    (*(code *)PTR_guard_check_icall_00421328)(local_28);
    uVar4 = (*pcVar1)();
    if (-1 < (int)uVar4) goto LAB_004120b7;
    uStack_60 = 0x30;
  }
  FUN_0040899b(unaff_retaddr,uStack_60,"onecoreuap\\internal\\shell\\inc\\HolographicSession.h",
               uVar4);
LAB_004120b7:
  FUN_00414048((int *)&local_28);
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004120e0 */

undefined4 __thiscall FUN_004120e0(void *this,uint param_1)

{
  LPVOID pv;
  SIZE_T cb;
  uint uVar1;
  LPVOID _Dst;
  rsize_t _MaxCount;
  DWORD dwErrCode;
  undefined4 uVar2;
  
  uVar1 = *(int *)((int)this + 0x810) - *(int *)((int)this + 0x808);
  if (param_1 < uVar1) {
    param_1 = uVar1;
  }
  cb = param_1 * 2;
  _Dst = CoTaskMemAlloc(cb);
  if (_Dst == (LPVOID)0x0) {
    *(undefined1 *)((int)this + 4) = 1;
    uVar2 = 0;
  }
  else {
    _MaxCount = *(int *)((int)this + 0x80c) - (int)*(void **)((int)this + 0x808);
    memcpy_s(_Dst,cb,*(void **)((int)this + 0x808),_MaxCount);
                    /* WARNING: Load size is inaccurate */
    pv = *this;
    if (pv != (LPVOID)0x0) {
      dwErrCode = GetLastError();
      CoTaskMemFree(pv);
      SetLastError(dwErrCode);
    }
    *(LPVOID *)this = _Dst;
    *(rsize_t *)((int)this + 0x80c) = _MaxCount + (int)_Dst;
    *(LPVOID *)((int)this + 0x810) = (LPVOID)((int)_Dst + cb);
    uVar2 = CONCAT31((int3)((uint)((int)_Dst + cb) >> 8),1);
    *(LPVOID *)((int)this + 0x808) = _Dst;
  }
  return uVar2;
}



/* Function: FUN_00412189 */

undefined4 * __fastcall FUN_00412189(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x204] = (int)param_1 + 0x805;
  param_1[0x202] = (undefined4 *)((int)param_1 + 5);
  *(undefined4 *)((int)param_1 + 5) = 0x80408040;
  param_1[0x203] = (undefined1 *)((int)param_1 + 9);
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[0x203] = param_1[0x203] + 1;
  return param_1;
}



/* Function: FUN_004121c6 */

undefined4 __fastcall FUN_004121c6(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined4 *)(param_1 + 0x808) = 0;
    *(undefined4 *)(param_1 + 0x80c) = 0;
    *(undefined4 *)(param_1 + 0x810) = 0;
    return 0x8007000e;
  }
  uVar3 = *(int *)(param_1 + 0x80c) - (int)*(uint **)(param_1 + 0x808);
  if (uVar3 < 0x1000000) {
    **(uint **)(param_1 + 0x808) =
         (((uVar3 & 0xfc0000 | 0xfe010201) << 2 | uVar3 & 0x3f000) << 2 | uVar3 & 0xfc0) << 2 |
         uVar3 & 0x3f;
    return 0;
  }
  FUN_00408b07();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_0041223e */

undefined4 __thiscall FUN_0041223e(void *this,void *param_1,uint param_2)

{
  undefined4 uVar1;
  errno_t eVar2;
  
  if (((uint)(*(int *)((int)this + 0x810) - *(int *)((int)this + 0x80c)) < param_2) &&
     (uVar1 = FUN_004120e0(this,param_2), (char)uVar1 == '\0')) {
    return uVar1;
  }
  eVar2 = memcpy_s(*(void **)((int)this + 0x80c),
                   *(int *)((int)this + 0x810) - (int)*(void **)((int)this + 0x80c),param_1,param_2)
  ;
  *(int *)((int)this + 0x80c) = *(int *)((int)this + 0x80c) + param_2;
  return CONCAT31((int3)((uint)eVar2 >> 8),1);
}



/* Function: FUN_00412295 */

undefined4 * __thiscall FUN_00412295(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = this;
  if (this == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)this + 1;
    do {
                    /* WARNING: Load size is inaccurate */
      cVar1 = *this;
      this = (void *)((int)this + 1);
    } while (cVar1 != '\0');
    iVar2 = (int)this - iVar2;
  }
  param_1[1] = iVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



/* Function: FUN_004122c8 */

undefined4 * __thiscall FUN_004122c8(void *this,undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  
  *param_1 = this;
  if (this == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)this + 2;
    do {
                    /* WARNING: Load size is inaccurate */
      sVar1 = *this;
      this = (void *)((int)this + 2);
    } while (sVar1 != 0);
    iVar2 = (int)this - iVar2 >> 1;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = iVar2;
  return param_1;
}



/* Function: FUN_00412304 */

undefined4 __thiscall FUN_00412304(void *this,char param_1)

{
  byte *pbVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_8;
  
  if (*(int *)((int)this + 0x74) == 0) {
    *(undefined1 *)((int)this + 0xc) = 1;
    iVar6 = 4;
  }
  else {
    iVar6 = *(int *)((int)this + 0x74) << 2;
  }
  iVar2 = *(int *)((int)this + iVar6 + 0xc);
  uStack_8._0_3_ = SUB43(this,0);
  if (iVar2 == 2) {
    *(undefined4 *)((int)this + iVar6 + 0xc) = 3;
    uStack_8 = (void *)CONCAT13(3,(undefined3)uStack_8);
    FUN_0041a3e9(*(void **)((int)this + 0x7c),(undefined1 *)((int)&uStack_8 + 3));
    FUN_0041223e(*(void **)((int)this + 0x7c),(undefined2 *)((int)this + 6),2);
    *(undefined2 *)((int)this + 6) = 0;
    pvVar3 = uStack_8;
  }
  else {
    pvVar3 = this;
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + iVar6 + 0xc) = 1;
      uStack_8 = (void *)CONCAT13(1,(undefined3)uStack_8);
      FUN_0041a3e9(*(void **)((int)this + 0x7c),(undefined1 *)((int)&uStack_8 + 3));
      pvVar3 = uStack_8;
    }
  }
  uStack_8 = pvVar3;
  uVar4 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (*(int *)((int)this + iVar6 + 0xc) != 3) {
    if (param_1 != '\0') {
      *(undefined4 *)this = 0;
      uStack_8 = (void *)CONCAT13(6,(undefined3)uStack_8);
      uVar5 = FUN_0041a3e9(*(void **)((int)this + 0x7c),(undefined1 *)((int)&uStack_8 + 3));
      return uVar5 & 0xffffff00;
    }
    pbVar1 = (byte *)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
    if (*this == 0) {
      *(undefined **)this = &DAT_00402090;
      *pbVar1 = 1;
    }
    pvVar3 = *(void **)((int)this + 0x7c);
    uStack_8 = (void *)CONCAT13(5,(undefined3)uStack_8);
    *(int *)((int)this + 8) = *(int *)((int)pvVar3 + 0x80c) - *(int *)((int)pvVar3 + 0x808);
    FUN_0041a3e9(pvVar3,(undefined1 *)((int)&uStack_8 + 3));
    FUN_0041a3e9(*(void **)((int)this + 0x7c),pbVar1);
                    /* WARNING: Load size is inaccurate */
    uVar4 = FUN_0041223e(*(void **)((int)this + 0x7c),*this,(uint)*pbVar1);
    *(undefined4 *)this = 0;
  }
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}



/* Function: FUN_004123f3 */

bool __thiscall FUN_004123f3(void *this,char param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = FUN_00412304(this,param_1);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    FUN_0041a3e9(*(void **)((int)this + 0x7c),&stack0x00000008);
  }
  return bVar2;
}



/* Function: FUN_00412424 */

void __thiscall FUN_00412424(void *this,int param_1,void *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uStack_8;
  
  uVar2 = param_1 + 1;
  if (uVar2 < 0x80) {
    uVar3 = 0;
    if (param_2 != (void *)0x0) {
      uVar3 = (char)uVar2;
    }
    puVar1 = (undefined1 *)((int)&uStack_8 + 3);
    uStack_8._0_3_ = SUB43(this,0);
    uStack_8 = CONCAT13(uVar3,(undefined3)uStack_8);
  }
  else {
    if ((0x7fff < uVar2) && (-1 < *(int *)((int)this + 0x78))) {
      *(undefined4 *)((int)this + 0x78) = 0x8000000b;
    }
    uStack_8._0_3_ = CONCAT12((char)uVar2,(short)this);
    uStack_8 = CONCAT13((char)(uVar2 >> 8),(undefined3)uStack_8) | 0x80000000;
    FUN_0041a3e9(*(void **)((int)this + 0x7c),(undefined1 *)((int)&uStack_8 + 3));
    puVar1 = (undefined1 *)((int)&uStack_8 + 2);
  }
  FUN_0041a3e9(*(void **)((int)this + 0x7c),puVar1);
  FUN_0041223e(*(void **)((int)this + 0x7c),param_2,param_3);
  return;
}



/* Function: FUN_004124a0 */

undefined4 * __thiscall FUN_004124a0(void *this,void *param_1)

{
  undefined4 uStack_8;
  
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  uStack_8 = this;
  memset((void *)((int)this + 0x10),0,100);
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(void **)((int)this + 0x7c) = param_1;
  uStack_8 = (void *)CONCAT13(0x80,(undefined3)uStack_8);
  FUN_0041a3e9(param_1,(undefined1 *)((int)&uStack_8 + 3));
  FUN_0041a3e9(*(void **)((int)this + 0x7c),&stack0x00000008);
  if (*(uint *)((int)this + 0x74) < 0x19) {
    *(undefined4 *)((int)this + *(uint *)((int)this + 0x74) * 4 + 0x10) = 1;
    *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + 1;
  }
  else {
    *(undefined1 *)((int)this + 0xc) = 1;
  }
  return (undefined4 *)this;
}



/* Function: FUN_00412518 */

void __fastcall FUN_00412518(void *param_1)

{
  FUN_00412304(param_1,'\0');
  if (*(uint *)((int)param_1 + 0x74) < 0x19) {
    *(undefined4 *)((int)param_1 + *(uint *)((int)param_1 + 0x74) * 4 + 0x10) = 0;
    *(int *)((int)param_1 + 0x74) = *(int *)((int)param_1 + 0x74) + 1;
    return;
  }
  *(undefined1 *)((int)param_1 + 0xc) = 1;
  return;
}



/* Function: FUN_00412542 */

void __fastcall FUN_00412542(int param_1)

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    iVar5 = 4;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x74) << 2;
  }
  iVar5 = *(int *)(iVar5 + 0xc + param_1);
  uStack_8._0_3_ = (undefined3)param_1;
  if (iVar5 == 0) {
    uVar1 = *(uint *)(param_1 + 8);
    pvVar2 = *(void **)(param_1 + 0x7c);
    if (uVar1 == 0) {
      uStack_8 = CONCAT13(1,(undefined3)uStack_8);
      FUN_0041a3e9(pvVar2,(undefined1 *)((int)&uStack_8 + 3));
      iVar4 = uStack_8;
      goto LAB_00412615;
    }
    if ((uint)(*(int *)((int)pvVar2 + 0x810) - *(int *)((int)pvVar2 + 0x808)) <= uVar1) {
LAB_0041263a:
      uStack_8 = param_1;
      FUN_00408b07();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_8 = CONCAT13(8,(undefined3)uStack_8);
    *(uint *)((int)pvVar2 + 0x80c) = *(int *)((int)pvVar2 + 0x808) + uVar1;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    iVar4 = param_1;
    if (iVar5 == 1) {
LAB_00412615:
      uStack_8 = iVar4;
      uStack_8 = CONCAT13(2,(undefined3)uStack_8);
    }
    else {
      if (iVar5 == 2) {
        uVar1 = *(uint *)(param_1 + 8);
        pvVar2 = *(void **)(param_1 + 0x7c);
        if (uVar1 != 0) {
          if ((uint)(*(int *)((int)pvVar2 + 0x810) - *(int *)((int)pvVar2 + 0x808)) <= uVar1)
          goto LAB_0041263a;
          uStack_8 = CONCAT13(7,(undefined3)uStack_8);
          *(uint *)((int)pvVar2 + 0x80c) = *(int *)((int)pvVar2 + 0x808) + uVar1;
          *(undefined4 *)(param_1 + 8) = 0;
          goto LAB_00412619;
        }
        uStack_8 = CONCAT13(3,(undefined3)uStack_8);
        FUN_0041a3e9(pvVar2,(undefined1 *)((int)&uStack_8 + 3));
        *(undefined2 *)(param_1 + 6) = 0;
        FUN_0041223e(*(void **)(param_1 + 0x7c),(undefined2 *)(param_1 + 6),2);
      }
      else {
        uStack_8 = param_1;
        if (iVar5 != 3) goto LAB_00412625;
      }
      uStack_8 = CONCAT13(4,(undefined3)uStack_8);
    }
  }
LAB_00412619:
  FUN_0041a3e9(*(void **)(param_1 + 0x7c),(undefined1 *)((int)&uStack_8 + 3));
LAB_00412625:
  if (*(int *)(param_1 + 0x74) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
  }
  return;
}



/* Function: FUN_00412646 */

uint __thiscall FUN_00412646(void *this,char param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *in_EAX;
  undefined3 uVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 < *(char **)(iVar1 + 8)) {
    in_EAX = pcVar2 + 1;
    *(char **)(iVar1 + 4) = in_EAX;
    if (pcVar2 != (char *)0x0) {
      uVar3 = (undefined3)((uint)in_EAX >> 8);
      if (param_1 == *pcVar2) {
        return CONCAT31(uVar3,1);
      }
      in_EAX = (char *)CONCAT31(uVar3,param_1);
      if (-1 < *(int *)((int)this + 4)) {
        *(char **)((int)this + 4) = param_2;
        in_EAX = param_2;
      }
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0xc) = 1;
  }
  return (uint)in_EAX & 0xffffff00;
}



/* Function: FUN_0041268a */

uint __fastcall FUN_0041268a(int *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  undefined *_Buf1;
  
  _Buf1 = (undefined *)param_1[2];
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  if (param_1[0x1e] == 0) {
    *(undefined1 *)(param_1 + 4) = 1;
    piVar5 = param_1 + 5;
  }
  else {
    piVar5 = param_1 + param_1[0x1e] + 4;
  }
  if (*piVar5 != 1) {
    iVar2 = *param_1;
    if (*(char **)(iVar2 + 4) < *(char **)(iVar2 + 8)) {
      cVar4 = **(char **)(iVar2 + 4);
    }
    else {
      cVar4 = '\0';
    }
    if (cVar4 != '\x06') {
      if ((cVar4 != '\a') && (cVar4 != '\b')) {
        if (_Buf1 == (undefined *)0x0) {
          _Buf1 = &DAT_00402090;
          *(undefined1 *)(param_1 + 3) = 1;
        }
        pcVar3 = *(char **)(iVar2 + 4);
        piVar5 = (int *)(pcVar3 + *(byte *)(param_1 + 3) + 2);
        if (*(int **)(iVar2 + 8) < piVar5) {
          *(undefined1 *)(iVar2 + 0xc) = 1;
        }
        else {
          *(int **)(iVar2 + 4) = piVar5;
          if (pcVar3 != (char *)0x0) {
            if ((*pcVar3 != '\x05') && (-1 < param_1[1])) {
              param_1[1] = -0x7ff8f9a3;
            }
            bVar1 = *(byte *)(param_1 + 3);
            piVar5 = (int *)CONCAT31((int3)((uint)piVar5 >> 8),bVar1);
            if (((pcVar3[1] != bVar1) ||
                (piVar5 = (int *)memcmp(_Buf1,pcVar3 + 2,(uint)bVar1), piVar5 != (int *)0x0)) &&
               (-1 < param_1[1])) {
              param_1[1] = -0x7ff8f8f4;
            }
          }
        }
        goto LAB_0041273c;
      }
      *(undefined1 *)((int)param_1 + 0xd) = 1;
    }
    uVar6 = *(uint *)(iVar2 + 4);
    if (uVar6 < *(uint *)(iVar2 + 8)) {
      uVar6 = uVar6 + 1;
      *(uint *)(iVar2 + 4) = uVar6;
    }
    else {
      *(undefined1 *)(iVar2 + 0xc) = 1;
    }
    return uVar6 & 0xffffff00;
  }
LAB_0041273c:
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}



/* Function: FUN_00412768 */

void __fastcall FUN_00412768(int *param_1)

{
  int iVar1;
  char *pcVar2;
  int *extraout_ECX;
  
  iVar1 = *param_1;
  pcVar2 = *(char **)(iVar1 + 4);
  if ((pcVar2 < *(char **)(iVar1 + 8)) && (*pcVar2 == '\x03')) {
    *(char **)(iVar1 + 4) = pcVar2 + 1;
    if (0x18 < (uint)param_1[0x1e]) {
LAB_004127b0:
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
    param_1[param_1[0x1e] + 5] = 1;
  }
  else {
    FUN_00412646(param_1,'\x01',(char *)0x8007065d);
    param_1 = extraout_ECX;
    if (0x18 < (uint)extraout_ECX[0x1e]) goto LAB_004127b0;
    extraout_ECX[extraout_ECX[0x1e] + 5] = 0;
  }
  param_1[0x1e] = param_1[0x1e] + 1;
  return;
}



/* Function: FUN_004127bc */

void FUN_004127bc(void)

{
  if (DAT_004205c8 == (HMODULE)0x0) {
    DAT_004205c8 = GetModuleHandleW(L"kernelbase.dll");
  }
  return;
}



/* Function: FUN_004127dc */

void FUN_004127dc(undefined4 param_1,undefined4 *param_2)

{
  FARPROC pFVar1;
  HMODULE hModule;
  int iVar2;
  undefined4 *puVar3;
  char *lpProcName;
  undefined4 local_34 [12];
  
  if (DAT_004205fc == (FARPROC)0x0) {
    lpProcName = "TestUnlockData";
    hModule = (HMODULE)FUN_004127bc();
    DAT_004205fc = GetProcAddress(hModule,lpProcName);
    if (DAT_004205fc == (FARPROC)0x0) {
      memset(local_34,0,0x30);
      puVar3 = local_34;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
      return;
    }
  }
  pFVar1 = DAT_004205fc;
  (*(code *)PTR_guard_check_icall_00421328)();
  (*pFVar1)();
  return;
}



/* Function: FUN_0041284a */

void FUN_0041284a(undefined4 param_1)

{
  FARPROC pFVar1;
  HMODULE hModule;
  char *lpProcName;
  
  if (DAT_004205a8 == (FARPROC)0x0) {
    lpProcName = "TestClose";
    hModule = (HMODULE)FUN_004127bc();
    DAT_004205a8 = GetProcAddress(hModule,lpProcName);
    if (DAT_004205a8 == (FARPROC)0x0) {
      return;
    }
  }
  pFVar1 = DAT_004205a8;
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  (*pFVar1)();
  return;
}



/* Function: FUN_0041288f */

void FUN_0041288f(void)

{
  FARPROC pFVar1;
  HMODULE hModule;
  char *lpProcName;
  
  if (DAT_0042068c == (FARPROC)0x0) {
    lpProcName = "TestReport";
    hModule = (HMODULE)FUN_004127bc();
    DAT_0042068c = GetProcAddress(hModule,lpProcName);
    if (DAT_0042068c == (FARPROC)0x0) {
      return;
    }
  }
  pFVar1 = DAT_0042068c;
  (*(code *)PTR_guard_check_icall_00421328)();
  (*pFVar1)();
  return;
}



/* Function: FUN_004128d0 */

short * __fastcall FUN_004128d0(int param_1,short *param_2,char param_3)

{
  int *piVar1;
  short *psVar2;
  
  do {
    for (psVar2 = *(short **)(param_1 + 0x3c);
        psVar2 != *(short **)(param_1 + 0x3c) + *(int *)(param_1 + 0x44) * 0x2c;
        psVar2 = psVar2 + 0x2c) {
      if (*psVar2 == *param_2) goto LAB_004128f8;
    }
    psVar2 = (short *)0x0;
LAB_004128f8:
    if ((psVar2 != (short *)0x0) == (bool)param_3) {
      return param_2;
    }
    piVar1 = (int *)(param_2 + 6);
    param_2 = param_2 + 4;
    if (*piVar1 == 0) {
      return (short *)0x0;
    }
  } while( true );
}



/* Function: FUN_0041291e */

uint __fastcall FUN_0041291e(int param_1,short *param_2,short *param_3,short *param_4)

{
  undefined4 uVar1;
  ushort *in_EAX;
  uint uVar2;
  
  if (param_2 == (short *)0x0) {
LAB_0041294b:
    if (param_3 != (short *)0x0) {
      in_EAX = (ushort *)FUN_004128d0(param_1,param_3,'\x01');
      if (in_EAX != (ushort *)0x0) goto LAB_00412936;
    }
    if (param_4 != (short *)0x0) {
      in_EAX = (ushort *)FUN_004128d0(param_1,param_4,'\x01');
      if (in_EAX == (ushort *)0x0) {
        uVar2 = *(uint *)(param_4 + 2);
        if (*(char *)(param_1 + 0x58) == '\0') {
          *(short *)(param_1 + 0x5a) = *param_4;
          *(uint *)(param_1 + 0x5c) = uVar2;
          goto LAB_00412988;
        }
        goto LAB_0041298c;
      }
    }
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    in_EAX = (ushort *)FUN_004128d0(param_1,param_2,'\0');
    if (in_EAX == (ushort *)0x0) goto LAB_0041294b;
LAB_00412936:
    uVar1 = *(undefined4 *)(in_EAX + 2);
    uVar2 = (uint)*in_EAX;
    if (*(char *)(param_1 + 0x58) == '\0') {
      *(ushort *)(param_1 + 0x5a) = *in_EAX;
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
LAB_00412988:
      *(undefined1 *)(param_1 + 0x58) = 3;
    }
LAB_0041298c:
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}



/* Function: FUN_0041299e */

void __fastcall FUN_0041299e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined *local_5c;
  undefined1 local_58;
  undefined4 *local_54;
  char *local_50;
  undefined1 local_4c;
  undefined4 *local_48;
  char *local_44;
  undefined1 local_40;
  undefined4 *local_3c;
  undefined *local_38;
  undefined1 local_34;
  undefined2 *local_30;
  undefined *local_2c;
  undefined1 local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  undefined1 local_10;
  undefined4 *local_c;
  undefined2 local_8 [2];
  
  local_1c = param_2[2];
  local_8[0] = *(undefined2 *)(param_2 + 10);
  local_18 = *param_2;
  local_20 = param_1;
  puVar1 = FUN_00412295((void *)param_2[9],&local_14);
  local_8c = *puVar1;
  uStack_88 = puVar1[1];
  uStack_84 = puVar1[2];
  puVar1 = FUN_00412295((void *)param_2[0x13],&local_14);
  local_80 = *puVar1;
  uStack_7c = puVar1[1];
  uStack_78 = puVar1[2];
  puVar1 = FUN_004122c8((void *)param_2[5],&local_14);
  local_74 = *puVar1;
  uStack_70 = puVar1[1];
  uStack_6c = puVar1[2];
  puVar2 = FUN_00412295((void *)param_2[0xc],&local_14);
  puVar1 = local_20;
  local_44 = "context";
  local_3c = &local_68;
  local_40 = 7;
  local_68 = *puVar2;
  local_48 = &local_74;
  local_54 = &local_18;
  local_c = &local_80;
  local_50 = "message";
  uStack_64 = puVar2[1];
  local_4c = 7;
  local_5c = &DAT_004025d4;
  local_58 = 4;
  uStack_60 = puVar2[2];
  local_30 = local_8;
  local_24 = &local_1c;
  local_14 = "module";
  local_10 = 6;
  local_38 = &DAT_004025e4;
  local_34 = 4;
  local_2c = &DAT_004025f4;
  local_28 = 2;
  FUN_0041c139(local_20,&local_2c);
  *puVar1 = &DAT_004025ec;
  *(undefined1 *)(puVar1 + 1) = 4;
  FUN_0041ced1(puVar1,&local_8c);
  FUN_0041c0e9(puVar1,&local_38);
  FUN_0041ce3f(puVar1,&local_14,&local_5c,&local_50,&local_44);
  return;
}



/* Function: FUN_00412ad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00412ad0(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  uint uVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34 [3];
  char *local_28;
  undefined1 local_24;
  ushort *local_20;
  char *local_1c;
  undefined1 local_18;
  int local_14;
  undefined8 local_10;
  undefined4 *local_8;
  
  local_10 = (double)CONCAT44(param_2,(undefined4 *)local_10);
  local_28 = "type";
  local_24 = 4;
  local_20 = (ushort *)(param_2 + 8);
  local_8 = param_1;
  puVar4 = FUN_00412295(*(void **)(param_2 + 4),local_34);
  puVar5 = local_8;
  local_1c = "reason";
  local_40 = *puVar4;
  local_18 = 6;
  uStack_3c = puVar4[1];
  uStack_38 = puVar4[2];
  iVar2 = local_10._4_4_;
  local_14 = local_10._4_4_;
  FUN_0041c0e9(local_8,&local_1c);
  *puVar5 = &DAT_004025f8;
  *(undefined1 *)(puVar5 + 1) = 4;
  FUN_0041ced1(puVar5,&local_40);
  FUN_0041c0e9(puVar5,&local_28);
  uVar1 = *(ushort *)(param_2 + 8);
  if (uVar1 < 0x13) {
    if (uVar1 == 0x12) {
      local_20 = (ushort *)(iVar2 + 0x10);
      local_28 = "value";
      local_24 = 5;
      FUN_0041c0e9(puVar5,&local_28);
      return;
    }
    if (uVar1 == 2) {
      *puVar5 = "value";
      *(undefined1 *)(puVar5 + 1) = 5;
      local_8 = (undefined4 *)CONCAT22(local_8._2_2_,*(short *)(iVar2 + 0x10));
      bVar3 = FUN_004123f3(puVar5,*(short *)(iVar2 + 0x10) == 0);
      if (!bVar3) {
        return;
      }
      uVar7 = 2;
      ppuVar6 = &local_8;
    }
    else {
      if (uVar1 == 3) {
        local_20 = (ushort *)(iVar2 + 0x10);
        local_28 = "value";
        local_24 = 5;
        FUN_0041c139(puVar5,&local_28);
        return;
      }
      if (uVar1 != 5) {
        if (uVar1 == 0xb) {
          local_10._0_6_ = CONCAT15(*(short *)(iVar2 + 0x10) != 0,0x500402608);
          FUN_0041a42a(puVar5,(undefined4 *)&local_10);
          return;
        }
        if (uVar1 != 0x10) {
          if (uVar1 != 0x11) {
            return;
          }
          local_20 = (ushort *)(iVar2 + 0x10);
          local_28 = "value";
          local_24 = 5;
          FUN_0041a4fe(puVar5,&local_28);
          return;
        }
        local_20 = (ushort *)(iVar2 + 0x10);
        local_28 = "value";
        local_24 = 5;
        FUN_0041a493(puVar5,&local_28);
        return;
      }
      *puVar5 = "value";
      *(undefined1 *)(puVar5 + 1) = 5;
      local_10 = *(double *)(iVar2 + 0x10);
      local_8 = (undefined4 *)CONCAT31(local_8._1_3_,1);
      if (local_10 != _DAT_00402888) {
        local_8 = (undefined4 *)((uint)local_8._1_3_ << 8);
      }
      bVar3 = FUN_004123f3(puVar5,(char)local_8);
      if (!bVar3) {
        return;
      }
      uVar7 = 8;
      ppuVar6 = (undefined4 **)&local_10;
    }
  }
  else {
    if (uVar1 != 0x13) {
      if (uVar1 == 0x14) {
        local_20 = (ushort *)(iVar2 + 0x10);
        local_28 = "value";
        local_24 = 5;
        FUN_0041a54b(puVar5,&local_28);
        return;
      }
      if (uVar1 == 0x15) {
        local_20 = (ushort *)(iVar2 + 0x10);
        local_28 = "value";
        local_24 = 5;
        FUN_0041a5ac(puVar5,&local_28);
        return;
      }
      if (uVar1 == 0x1e) {
        puVar5 = FUN_00412295(*(void **)(iVar2 + 0x10),local_34);
        local_40 = *puVar5;
        uStack_3c = puVar5[1];
        uStack_38 = puVar5[2];
        *local_8 = "value";
        *(undefined1 *)(local_8 + 1) = 5;
        FUN_0041ced1(local_8,&local_40);
        return;
      }
      if (uVar1 != 0x1f) {
        return;
      }
      puVar5 = FUN_004122c8(*(void **)(iVar2 + 0x10),local_34);
      local_40 = *puVar5;
      uStack_3c = puVar5[1];
      uStack_38 = puVar5[2];
      *local_8 = "value";
      *(undefined1 *)(local_8 + 1) = 5;
      FUN_0041cf1c(local_8,&local_40);
      return;
    }
    *puVar5 = "value";
    *(undefined1 *)(puVar5 + 1) = 5;
    local_10 = (double)CONCAT44(*(int *)(iVar2 + 0x10),(undefined4 *)local_10);
    bVar3 = FUN_004123f3(puVar5,*(int *)(iVar2 + 0x10) == 0);
    if (!bVar3) {
      return;
    }
    uVar7 = 4;
    ppuVar6 = (undefined4 **)((int)&local_10 + 4);
  }
  FUN_0041223e((void *)puVar5[0x1f],ppuVar6,uVar7);
  return;
}



/* Function: FUN_00412dc0 */

void __fastcall FUN_00412dc0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  
  if (*(int *)(param_1 + 8) < 0) {
    pcVar4 = "reason::ControllerInstanceNotCreated";
    cVar5 = 'r';
    pcVar6 = "reason::ControllerInstanceNotCreated";
    do {
      pcVar4 = pcVar4 + 1;
      pcVar2 = pcVar4;
      if (cVar5 != ':') {
        pcVar2 = pcVar6;
      }
      cVar5 = *pcVar4;
      pcVar6 = pcVar2;
    } while (cVar5 != '\0');
    iVar1 = *(int *)(param_1 + 4);
    if (*(char *)(iVar1 + 0x58) != '\0') {
      return;
    }
    uVar3 = 2;
  }
  else {
    if (*(int *)(param_1 + 0xc) < 0) {
      pcVar4 = "reason::PasskeySyncOTSThroughBrokerFailed";
      cVar5 = 'r';
      pcVar6 = "reason::PasskeySyncOTSThroughBrokerFailed";
      do {
        pcVar4 = pcVar4 + 1;
        pcVar2 = pcVar4;
        if (cVar5 != ':') {
          pcVar2 = pcVar6;
        }
        cVar5 = *pcVar4;
        pcVar6 = pcVar2;
      } while (cVar5 != '\0');
      iVar1 = *(int *)(param_1 + 4);
      if (*(char *)(iVar1 + 0x58) != '\0') {
        return;
      }
      uVar3 = 3;
      *(undefined1 *)(iVar1 + 0x58) = 3;
      goto LAB_00412df6;
    }
    if (-1 < *(int *)(param_1 + 0x10)) {
      iVar1 = *(int *)(param_1 + 4);
      if ((*(uint *)(iVar1 + 0x20) & 0x200) == 0) {
        if (*(char *)(iVar1 + 0x58) != '\0') {
          return;
        }
        uVar3 = 0x4001;
      }
      else {
        if (*(int *)(iVar1 + 0x2c) == 0) {
          pcVar4 = "reason::Succeeded";
          cVar5 = 'r';
          pcVar6 = "reason::Succeeded";
          do {
            pcVar4 = pcVar4 + 1;
            pcVar2 = pcVar4;
            if (cVar5 != ':') {
              pcVar2 = pcVar6;
            }
            cVar5 = *pcVar4;
            pcVar6 = pcVar2;
          } while (cVar5 != '\0');
          if (*(char *)(iVar1 + 0x58) != '\0') {
            return;
          }
          *(char **)(iVar1 + 0x5c) = pcVar2;
          uVar3 = 1;
          *(undefined1 *)(iVar1 + 0x58) = 1;
          goto LAB_00412eb8;
        }
        if (*(char *)(iVar1 + 0x58) != '\0') {
          return;
        }
        uVar3 = 0x4000;
      }
      *(undefined1 *)(iVar1 + 0x58) = 3;
      *(undefined4 *)(iVar1 + 0x5c) = 0;
LAB_00412eb8:
      *(undefined2 *)(iVar1 + 0x5a) = uVar3;
      return;
    }
    pcVar4 = "reason::ShellHostLaunchFailed";
    cVar5 = 'r';
    pcVar6 = "reason::ShellHostLaunchFailed";
    do {
      pcVar4 = pcVar4 + 1;
      pcVar2 = pcVar4;
      if (cVar5 != ':') {
        pcVar2 = pcVar6;
      }
      cVar5 = *pcVar4;
      pcVar6 = pcVar2;
    } while (cVar5 != '\0');
    iVar1 = *(int *)(param_1 + 4);
    if (*(char *)(iVar1 + 0x58) != '\0') {
      return;
    }
    uVar3 = 4;
  }
  *(undefined1 *)(iVar1 + 0x58) = 3;
LAB_00412df6:
  *(undefined2 *)(iVar1 + 0x5a) = uVar3;
  *(char **)(iVar1 + 0x5c) = pcVar2;
  return;
}



/* Function: FUN_00412ec5 */

int __fastcall FUN_00412ec5(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  short local_8 [2];
  
  iVar2 = 0;
  iVar1 = Ordinal_17(param_1);
  if (iVar1 == 1) {
    iVar1 = Ordinal_18(param_1);
    if (iVar1 == 1) {
      iVar1 = Ordinal_20(param_1,1,&local_c);
      if ((-1 < iVar1) && (local_c == 0)) {
        iVar1 = Ordinal_77(param_1,local_8);
        if ((-1 < iVar1) && (local_8[0] == 0x11)) {
          iVar1 = Ordinal_19(param_1,1,&local_10);
          if ((-1 < iVar1) && (0 < local_10)) {
            iVar2 = local_10 + 1;
          }
        }
      }
    }
  }
  return iVar2;
}



/* Function: FUN_00412f3e */

void __fastcall FUN_00412f3e(int param_1)

{
  BOOL BVar1;
  HWND pHVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  void *unaff_retaddr;
  tagRECT tStack_1c;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&tStack_1c;
  if ((((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
      (BVar1 = IsWindow(*(HWND *)(param_1 + 4)), BVar1 != 0)) &&
     (BVar1 = IsWindowVisible(*(HWND *)(param_1 + 4)), BVar1 != 0)) {
    BVar1 = GetWindowRect(*(HWND *)(param_1 + 4),&tStack_1c);
    if (BVar1 == 0) {
      FUN_00408a22(unaff_retaddr);
      uVar3 = extraout_EDX_00;
      goto LAB_00412fe9;
    }
    if (((0x13 < tStack_1c.right - tStack_1c.left) && (0x13 < tStack_1c.bottom - tStack_1c.top)) &&
       ((pHVar2 = GetDesktopWindow(), *(HWND *)(param_1 + 4) != pHVar2 &&
        (pHVar2 = GetShellWindow(), uVar3 = extraout_EDX, *(HWND *)(param_1 + 4) != pHVar2))))
    goto LAB_00412fe9;
  }
  FUN_004119e3();
  uVar3 = extraout_EDX_01;
LAB_00412fe9:
  FUN_0041e250(local_c ^ (uint)&tStack_1c,uVar3);
  return;
}



/* Function: FUN_00412fff */

uint FUN_00412fff(IUnknown *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,undefined4 param_7,undefined4 param_8,
                 LPDWORD param_9)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  undefined1 *puVar6;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  char cVar7;
  int *piVar8;
  size_t _Size;
  void *_Src;
  void *local_6c;
  int *local_68;
  int *local_64;
  int *piStack_60;
  void *local_5c;
  int local_58 [2];
  undefined4 auStack_50 [19];
  
  *param_6 = 0;
  if ((param_2 != (int *)0x0) && (*param_2 != 0x44)) {
    return 0x80070057;
  }
  local_64 = (int *)0x0;
  iVar2 = FUN_00412ec5(param_5);
  if ((iVar2 != 0) && (iVar3 = Ordinal_23(param_5,&local_64), iVar3 < 0)) {
    iVar2 = 0;
  }
  local_68 = (int *)0x0;
  local_6c = (void *)0x0;
  iVar3 = FUN_0041200b(local_58);
  if ((iVar3 < 0) || (local_58[0] != 1)) {
    uVar4 = CoCreateInstance((IID *)&LAB_00402a5c,(LPUNKNOWN)0x0,1,(IID *)&DAT_004029e4,&piStack_60)
    ;
    if (-1 < (int)uVar4) {
      FUN_00413301(local_5c,param_2,auStack_50);
      SHSetThreadRef(param_1);
      pcVar1 = *(code **)(*piStack_60 + 0xc);
      piVar8 = local_64;
      (*(code *)PTR_guard_check_icall_00421328)
                (piStack_60,8,0,auStack_50,param_3,param_4,local_64,iVar2,&local_68,&local_6c,
                 param_7,param_8,param_9);
      uVar4 = (*pcVar1)();
      SHSetThreadRef((IUnknown *)0x0);
      pcVar1 = *(code **)(*piVar8 + 8);
      (*(code *)PTR_guard_check_icall_00421328)(piVar8);
      (*pcVar1)();
    }
  }
  else {
    uVar4 = FUN_004103c3((int)param_2,param_3,param_4,local_64,iVar2,&local_68,&local_6c,param_7,
                         param_8,param_9);
  }
  if (iVar2 != 0) {
    Ordinal_24(param_5);
  }
  cVar7 = false;
  _Size = 0;
  _Src = local_6c;
  iVar2 = Ordinal_411(0x11);
  *param_6 = iVar2;
  if (iVar2 == 0) {
LAB_0041319a:
    puVar6 = unaff_ESI;
    if (unaff_EDI != 0) {
      do {
        *puVar6 = 0;
        unaff_EDI = unaff_EDI + -1;
        puVar6 = puVar6 + 1;
      } while (unaff_EDI != 0);
    }
  }
  else if (unaff_EDI != 0) {
    iVar2 = Ordinal_23(iVar2,&piStack_60);
    if (iVar2 < 0) {
      Ordinal_16(*param_6);
      *param_6 = 0;
    }
    else {
      memcpy(local_68,_Src,_Size);
      Ordinal_24(*param_6);
    }
    goto LAB_0041319a;
  }
  CoTaskMemFree(unaff_ESI);
  piVar8 = local_68;
  if ((-1 < (int)uVar4) && (*param_6 == 0)) {
    uVar4 = 0x8007000e;
  }
  if (*local_68 != 0) {
    DVar5 = WaitForSingleObject((HANDLE)*local_68,0);
    cVar7 = DVar5 == 0;
    if (DVar5 == 0) goto LAB_004131fa;
  }
  if (piVar8[5] != 0) {
    DVar5 = WaitForSingleObject((HANDLE)piVar8[5],0);
    cVar7 = '\x01' - (DVar5 != 0);
  }
LAB_004131fa:
  FUN_004134d4(piVar8);
  if (cVar7 != '\0') {
    PostQuitMessage(0);
  }
  return uVar4;
}



/* Function: FUN_0041321e */

DWORD FUN_0041321e(HWND param_1,undefined1 *param_2)

{
  DWORD DVar1;
  HANDLE ProcessHandle;
  BOOL BVar2;
  DWORD local_14;
  DWORD local_10;
  HANDLE local_c;
  int local_8;
  
  *param_2 = 0;
  DVar1 = GetWindowThreadProcessId(param_1,&local_10);
  if ((DVar1 == 0) && (DVar1 = FUN_0040c1d4(), (int)DVar1 < 0)) {
    return DVar1;
  }
  ProcessHandle = OpenProcess(0x1000,0,local_10);
  if ((ProcessHandle == (HANDLE)0x0) && (DVar1 = FUN_0040c1d4(), (int)DVar1 < 0)) {
    return DVar1;
  }
  BVar2 = OpenProcessToken(ProcessHandle,8,&local_c);
  if ((BVar2 == 0) && (DVar1 = FUN_0040c1d4(), (int)DVar1 < 0)) goto LAB_004132ca;
  local_8 = 0;
  BVar2 = GetTokenInformation(local_c,TokenElevation,&local_8,4,&local_14);
  if (BVar2 == 0) {
    DVar1 = FUN_0040c1d4();
    if (-1 < (int)DVar1) goto LAB_004132b8;
  }
  else {
    DVar1 = 0;
LAB_004132b8:
    *param_2 = local_8 != 0;
  }
  CloseHandle(local_c);
LAB_004132ca:
  CloseHandle(ProcessHandle);
  return DVar1;
}



/* Function: FUN_004132e0 */

void FUN_004132e0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    SetEvent(*(HANDLE *)(param_1 + 8));
  }
  return;
}



/* Function: FUN_00413301 */

void __thiscall FUN_00413301(void *this,undefined4 *param_1,undefined4 *param_2)

{
  LPCWSTR lpName;
  undefined4 *puVar1;
  HRESULT HVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  uint uVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  int iVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 *local_1a0;
  GUID local_19c;
  wchar_t local_18c [128];
  OLECHAR local_8c [66];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_1a0 = param_1;
  puVar10 = param_2;
  for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *param_1;
    param_1 = param_1 + 1;
    puVar10 = puVar10 + 1;
  }
  HVar2 = CoCreateGuid(&local_19c);
  uVar9 = extraout_EDX;
  if (HVar2 < 0) goto LAB_004134bd;
  iVar8 = StringFromGUID2(&local_19c,local_8c,0x40);
  uVar9 = extraout_EDX_00;
  if (iVar8 < 0) goto LAB_004134bd;
  iVar8 = FUN_00407940(local_18c,0x80,L"Local\\AbortEvent-%s");
  uVar9 = extraout_EDX_01;
  if (iVar8 < 0) goto LAB_004134bd;
  puVar10 = (undefined4 *)((int)this + 0x1c);
  uVar11 = FUN_00410b93(local_18c,puVar10);
  uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if ((int)uVar11 < 0) goto LAB_004134bd;
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)*puVar10);
  *(HANDLE *)((int)this + 8) = pvVar3;
  if (pvVar3 == (HANDLE)0x0) {
    DVar4 = FUN_0040c1d4();
    uVar9 = extraout_EDX_02;
    if ((int)DVar4 < 0) goto LAB_004134bd;
  }
  uVar5 = FUN_0041d509((undefined4 *)this);
  puVar1 = local_1a0;
  uVar9 = extraout_EDX_03;
  if (-1 < (int)uVar5) {
    if (local_1a0[1] != 0) {
      DVar4 = GetWindowThreadProcessId((HWND)local_1a0[1],(LPDWORD)&local_1a0);
      if (DVar4 == 0) {
        DVar4 = FUN_0040c1d4();
        if ((int)DVar4 < 0) goto LAB_00413451;
      }
                    /* WARNING: Load size is inaccurate */
      puVar6 = (undefined4 *)GetProcessId(*this);
      if (local_1a0 != puVar6) {
        pvVar3 = OpenProcess(0x100000,0,(DWORD)local_1a0);
        *(HANDLE *)((int)this + 0x14) = pvVar3;
        if (pvVar3 == (HANDLE)0x0) {
          DVar4 = FUN_0040c1d4();
          if ((int)DVar4 < 0) goto LAB_00413451;
        }
        RegisterWaitForSingleObject
                  ((PHANDLE)((int)this + 0x18),*(HANDLE *)((int)this + 0x14),FUN_004132e0,this,
                   0xffffffff,8);
      }
    }
LAB_00413451:
                    /* WARNING: Load size is inaccurate */
    BVar7 = RegisterWaitForSingleObject
                      ((PHANDLE)((int)this + 4),*this,FUN_004132e0,this,0xffffffff,8);
    uVar9 = extraout_EDX_04;
    if (BVar7 == 0) {
      FUN_0040c1d4();
      uVar9 = extraout_EDX_05;
    }
  }
  lpName = (LPCWSTR)puVar1[0xb];
  if ((lpName != (LPCWSTR)0x0) && (*lpName != L'\0')) {
    pvVar3 = OpenEventW(0x100000,0,lpName);
    *(HANDLE *)((int)this + 0x10) = pvVar3;
    if (pvVar3 == (HANDLE)0x0) {
      DVar4 = FUN_0040c1d4();
      uVar9 = extraout_EDX_06;
      if ((int)DVar4 < 0) goto LAB_004134b2;
    }
    RegisterWaitForSingleObject
              ((PHANDLE)((int)this + 0xc),*(HANDLE *)((int)this + 0x10),FUN_004132e0,this,0xffffffff
               ,8);
    uVar9 = extraout_EDX_07;
  }
LAB_004134b2:
  param_2[0xb] = *puVar10;
LAB_004134bd:
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar9);
  return;
}



/* Function: FUN_004134d4 */

void __fastcall FUN_004134d4(int *param_1)

{
  if (param_1[1] != 0) {
    UnregisterWait((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    UnregisterWait((HANDLE)param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[6] != 0) {
    UnregisterWait((HANDLE)param_1[6]);
    param_1[6] = 0;
  }
  if (*param_1 != 0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[4] != 0) {
    CloseHandle((HANDLE)param_1[4]);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    CloseHandle((HANDLE)param_1[5]);
    param_1[5] = 0;
  }
  CoTaskMemFree((LPVOID)param_1[7]);
  param_1[7] = 0;
  return;
}



/* Function: FUN_00413570 */

void FUN_00413570(IUnknown *param_1,int *param_2,undefined4 param_3,DWORD *param_4,
                 undefined4 param_5,int *param_6,undefined4 param_7,DWORD param_8,LPDWORD param_9)

{
  DWORD DVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 extraout_EDX;
  DWORD local_dc;
  RTL_SRWLOCK local_cc [49];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  FUN_00414a28(local_cc,"BrokerForAppContainersActivity");
  local_cc[0].Ptr = &PTR_FUN_0040104c;
  FUN_00410e1a(local_cc);
  FUN_00412f3e((int)param_2);
  *param_6 = 0;
  local_dc = 0x80070057;
  if (param_2 != (int *)0x0) {
    if ((*param_2 != 0x44) || (param_2[0xc] != 0)) goto LAB_0041363f;
    if (param_2[1] != 0) {
      DVar1 = FUN_004136ce((HWND)param_2[1]);
      if ((int)DVar1 < 0) goto LAB_0041363f;
    }
  }
  local_dc = FUN_00412fff(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
LAB_0041363f:
  puVar2 = (undefined4 *)FUN_00412ec5(param_5);
  puVar3 = (undefined *)FUN_00412ec5(*param_6);
  FUN_00410ea6(local_cc,local_dc,param_8,*param_4,*param_9,puVar2,puVar3);
  local_cc[0].Ptr = &PTR_FUN_0040104c;
  FUN_0041466c(local_cc);
  FUN_00411b66((int)local_cc);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004136c0 */

undefined4 FUN_004136c0(void)

{
  return 0x80004001;
}



/* Function: FUN_004136ce */

DWORD FUN_004136ce(HWND param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  HANDLE *local_1c;
  undefined4 local_18;
  undefined1 local_14;
  HANDLE local_10;
  HLOCAL local_c;
  HLOCAL local_8;
  
  uVar2 = FUN_0041d9fe(param_1);
  if (uVar2 == 0x80070005) {
    local_1c = &local_10;
    local_14 = 1;
    local_10 = (HANDLE)0x0;
    local_18 = 0;
    uVar3 = FUN_0041d509(&local_18);
    uVar2 = 0;
    if ((int)uVar3 < 0) {
      uVar2 = uVar3;
    }
    FUN_004145f4(&local_1c);
    if ((int)uVar2 < 0) {
      FUN_0040899b(unaff_retaddr,0x233,"pcshell\\shell\\auth\\creduibroker\\exe\\creduibroker.cpp",
                   uVar2);
    }
    else {
      local_c = (HLOCAL)0x0;
      puVar4 = FUN_00414aa5(&local_c);
      uVar2 = FUN_0041dd68(local_10,puVar4);
      if ((int)uVar2 < 0) {
        FUN_0040899b(unaff_retaddr,0x235,"pcshell\\shell\\auth\\creduibroker\\exe\\creduibroker.cpp"
                     ,uVar2);
      }
      else {
        local_8 = (HLOCAL)0x0;
        puVar4 = FUN_00414aa5(&local_8);
        uVar2 = FUN_0041dce1(param_1,puVar4);
        if ((int)uVar2 < 0) {
          FUN_0040899b(unaff_retaddr,0x237,
                       "pcshell\\shell\\auth\\creduibroker\\exe\\creduibroker.cpp",uVar2);
        }
        else {
          cVar1 = RtlIsParentOfChildAppContainer(local_c,local_8);
          if ((cVar1 == '\0') &&
             (cVar1 = RtlIsParentOfChildAppContainer(local_8,local_c), cVar1 == '\0')) {
            FUN_0040899b(unaff_retaddr,0x23a,
                         "pcshell\\shell\\auth\\creduibroker\\exe\\creduibroker.cpp",0x80070005);
            uVar2 = 0x80070005;
          }
          else {
            uVar2 = 0;
          }
        }
        if (local_8 != (HLOCAL)0x0) {
          LocalFree(local_8);
        }
      }
      if (local_c != (HLOCAL)0x0) {
        LocalFree(local_c);
      }
    }
    if ((local_10 != (HANDLE)0x0) && (local_10 != (HANDLE)0xffffffff)) {
      CloseHandle(local_10);
    }
    return uVar2;
  }
  if (-1 < (int)uVar2) {
    return uVar2;
  }
  FUN_0040899b(unaff_retaddr,0x22f,"pcshell\\shell\\auth\\creduibroker\\exe\\creduibroker.cpp",uVar2
              );
  return uVar2;
}



/* Function: FUN_00413830 */

void FUN_00413830(IUnknown *param_1,int *param_2,undefined4 param_3,DWORD *param_4,
                 undefined4 param_5,int *param_6,undefined4 param_7,DWORD param_8,DWORD *param_9)

{
  HWND pHVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 extraout_EDX;
  int *piVar6;
  int local_128 [17];
  undefined4 local_e4;
  DWORD *local_e0;
  DWORD *local_dc;
  int *local_d8;
  undefined4 local_d4;
  char local_cd;
  RTL_SRWLOCK local_cc [49];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_e0 = param_4;
  local_d4 = param_5;
  local_d8 = param_6;
  local_e4 = param_7;
  local_dc = param_9;
  FUN_00414a28(local_cc,"BrokerForNonAppContainersActivity");
  local_cc[0].Ptr = &PTR_FUN_00401558;
  FUN_0041128a(local_cc);
  FUN_00412f3e((int)param_2);
  if ((param_2 != (int *)0x0) && (pHVar1 = (HWND)param_2[1], pHVar1 != (HWND)0x0)) {
    if ((LPCWSTR)param_2[0xc] == (LPCWSTR)0x0) {
      DVar2 = FUN_0041321e(pHVar1,&local_cd);
      if (((int)DVar2 < 0) || (local_cd != '\0')) {
        piVar6 = local_128;
        for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar6 = *param_2;
          param_2 = param_2 + 1;
          piVar6 = piVar6 + 1;
        }
        local_128[1] = 0;
        param_2 = local_128;
      }
    }
    else {
      DVar2 = FUN_0041d87f(pHVar1,(LPCWSTR)param_2[0xc],(undefined4 *)0x0);
      if ((int)DVar2 < 0) goto LAB_0041392d;
    }
  }
  DVar2 = FUN_00412fff(param_1,param_2,param_3,local_e0,local_d4,local_d8,local_e4,param_8,local_dc)
  ;
LAB_0041392d:
  puVar3 = (undefined4 *)FUN_00412ec5(local_d4);
  puVar4 = (undefined *)FUN_00412ec5(*local_d8);
  FUN_00411316(local_cc,DVar2,param_8,*local_e0,*local_dc,puVar3,puVar4);
  local_cc[0].Ptr = &PTR_FUN_00401558;
  FUN_0041466c(local_cc);
  FUN_00411b66((int)local_cc);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004139b0 */

HRESULT FUN_004139b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  undefined4 *puVar2;
  LPVOID *ppv;
  HRESULT HVar3;
  undefined4 local_28 [6];
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  ppv = (LPVOID *)FUN_0041a60d((int *)&local_8);
  HVar3 = CoCreateInstance((IID *)&LAB_00402a5c,(LPUNKNOWN)0x0,1,(IID *)&DAT_004029e4,ppv);
  local_c = (undefined4 *)0x0;
  FUN_00414314(&local_c,local_28);
  if (local_c != (undefined4 *)0x0) {
    FUN_00416256(local_c);
  }
  puVar2 = local_10;
  local_c = local_10;
  if (local_10 != (undefined4 *)0x0) {
    LOCK();
    local_10[0x29] = local_10[0x29] + 1;
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(local_10 + 0x1d));
  puVar2[0x26] = HVar3;
  FUN_00414267((int *)&local_c);
  if (-1 < HVar3) {
    pcVar1 = *(code **)(*local_8 + 0x14);
    (*(code *)PTR_guard_check_icall_00421328)(local_8,param_2,param_3);
    HVar3 = (*pcVar1)();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(local_10 + 0x1d);
  EnterCriticalSection(lpCriticalSection);
  local_10[10] = local_10[10] | 0x300;
  if (local_10[0x23] != 0) {
    FUN_00417da2(local_10 + 1,2);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  FUN_00413aff((int)local_28);
  FUN_00414048((int *)&local_8);
  return HVar3;
}



/* Function: FUN_00413aa0 */

HRESULT FUN_00413aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  LPVOID *ppv;
  HRESULT HVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  ppv = (LPVOID *)FUN_0041a60d((int *)&local_8);
  HVar2 = CoCreateInstance((IID *)&LAB_00402a5c,(LPUNKNOWN)0x0,1,(IID *)&DAT_004029e4,ppv);
  if (-1 < HVar2) {
    pcVar1 = *(code **)(*local_8 + 0x1c);
    (*(code *)PTR_guard_check_icall_00421328)(local_8,param_2,param_3);
    HVar2 = (*pcVar1)();
  }
  FUN_00414048((int *)&local_8);
  return HVar2;
}



/* Function: FUN_00413aff */

void __fastcall FUN_00413aff(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  void *unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    FUN_00416256(*(undefined4 **)(param_1 + 0x18));
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x10) != DVar3) {
    FUN_004089f7(unaff_retaddr,extraout_ECX,0x8007029c);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar4 = (undefined4 *)*puVar1;
  do {
    puVar2 = (undefined4 *)*puVar4;
    if (puVar2 == (undefined4 *)0x0) {
LAB_00409ae5:
      *puVar1 = 0;
      return;
    }
    if (puVar2 == puVar1) {
      *puVar4 = *(undefined4 *)(param_1 + 0xc);
      goto LAB_00409ae5;
    }
    puVar4 = puVar2 + 2;
    *puVar1 = puVar4;
  } while( true );
}



/* Function: FUN_00413b30 */

void FUN_00413b30(IUnknown *param_1,int *param_2,undefined4 param_3,DWORD *param_4,
                 undefined4 param_5,int *param_6,undefined4 param_7,DWORD param_8,LPDWORD param_9)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 extraout_EDX;
  int *piVar5;
  int local_124 [17];
  undefined4 local_e0;
  DWORD *local_dc;
  LPDWORD local_d8;
  int *local_d4;
  undefined4 local_d0;
  RTL_SRWLOCK local_cc [49];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_dc = param_4;
  local_d0 = param_5;
  local_d4 = param_6;
  local_e0 = param_7;
  local_d8 = param_9;
  FUN_00414a28(local_cc,"BrokerForNonAppContainersPPLActivity");
  local_cc[0].Ptr = &PTR_FUN_004013ec;
  FUN_004116fa(local_cc);
  FUN_00412f3e((int)param_2);
  if ((param_2 != (int *)0x0) && (param_2[1] != 0)) {
    piVar5 = local_124;
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *param_2;
      param_2 = param_2 + 1;
      piVar5 = piVar5 + 1;
    }
    local_124[1] = 0;
    param_2 = local_124;
  }
  uVar1 = FUN_00412fff(param_1,param_2,param_3,local_dc,local_d0,local_d4,local_e0,param_8,local_d8)
  ;
  puVar2 = (undefined4 *)FUN_00412ec5(local_d0);
  puVar3 = (undefined *)FUN_00412ec5(*local_d4);
  FUN_00411786(local_cc,uVar1,param_8,*local_dc,*local_d8,puVar2,puVar3);
  local_cc[0].Ptr = &PTR_FUN_004013ec;
  FUN_0041466c(local_cc);
  FUN_00411b66((int)local_cc);
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00413c70 */

int FUN_00413c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  puVar2 = (undefined4 *)FUN_0041e266(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    local_c = FUN_0041c5ca(puVar2);
    pcVar1 = *(code **)*local_c;
    (*(code *)PTR_guard_check_icall_00421328)(local_c,&LAB_0040299c,&local_8);
    iVar3 = (*pcVar1)();
    FUN_00414048((int *)&local_c);
    if (-1 < iVar3) {
      pcVar1 = *(code **)(*local_8 + 0xc);
      (*(code *)PTR_guard_check_icall_00421328)
                (local_8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      iVar3 = (*pcVar1)();
    }
  }
  FUN_00414048((int *)&local_8);
  return iVar3;
}



/* Function: FUN_00413d10 */

int FUN_00413d10(int param_1,undefined4 param_2,IID *param_3,int param_4,undefined4 *param_5,
                uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HRESULT HVar4;
  uint local_8;
  
  HVar4 = 0;
  iVar1 = param_4 - (int)param_5;
  local_8 = 0;
  do {
    if (param_6 <= local_8) {
      return HVar4;
    }
    *param_5 = 0;
    FUN_00417d48(&DAT_004207d8,1);
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 1) {
      iVar2 = 0;
      do {
        if (*(int *)(param_3->Data4 + iVar2 * 4 + -8) != (&DAT_00402a94)[iVar2]) goto LAB_00413dce;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      iVar2 = 4;
LAB_00413dbd:
      HVar4 = FUN_0041a97b(iVar2,param_3,(undefined4 *)(iVar1 + (int)param_5),(int)param_5);
    }
    else {
      if (iVar2 == 2) {
        iVar3 = 0;
        do {
          if (*(int *)(param_3->Data4 + iVar3 * 4 + -8) != (&DAT_004029ac)[iVar3])
          goto LAB_00413d84;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
        goto LAB_00413dbd;
      }
LAB_00413d84:
      if (iVar2 == 3) {
        iVar3 = 0;
        do {
          if (*(int *)(param_3->Data4 + iVar3 * 4 + -8) != (&DAT_00402bb4)[iVar3])
          goto LAB_00413da3;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
        goto LAB_00413dbd;
      }
LAB_00413da3:
      if (iVar2 == 4) {
        iVar2 = 0;
        do {
          if (*(int *)(param_3->Data4 + iVar2 * 4 + -8) != (&DAT_00402bd4)[iVar2])
          goto LAB_00413dce;
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
        goto LAB_00413dbd;
      }
    }
LAB_00413dce:
    param_5 = param_5 + 1;
    local_8 = local_8 + 1;
    param_3 = param_3 + 1;
    if (HVar4 < 0) {
      return HVar4;
    }
  } while( true );
}



/* Function: FUN_00413df5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00413df5(undefined4 param_1,undefined4 param_2,LPCWSTR param_3)

{
  code *pcVar1;
  undefined4 *_Memory;
  HRESULT HVar2;
  uint uVar3;
  PDWORD pDVar4;
  DWORD DVar5;
  int *piVar6;
  int iVar7;
  BOOL BVar8;
  undefined4 uVar9;
  undefined4 unaff_retaddr;
  MSG local_2c;
  uint local_10;
  undefined4 *local_c;
  int *local_8;
  
  HVar2 = CoInitializeEx((LPVOID)0x0,2);
  if (HVar2 < 0) {
LAB_00414039:
    uVar3 = 0;
  }
  else {
    FUN_00417d48(&DAT_004207d8,1);
    local_c = (undefined4 *)0x0;
    uVar3 = FUN_0041aa0b((int *)&local_c,(HANDLE)0xfffffffc);
    _Memory = local_c;
    if ((int)uVar3 < 0) {
      FUN_0040899b(unaff_retaddr,0x365,"pcshell\\shell\\auth\\creduibroker\\exe\\creduibroker.cpp",
                   uVar3);
    }
    else {
      GetSidSubAuthority((PSID)*local_c,0);
      pDVar4 = GetSidSubAuthority((PSID)*_Memory,0);
      if (*pDVar4 < 0x2001) {
LAB_00413f18:
        free(_Memory);
        DVar5 = GetCurrentThreadId();
        piVar6 = (int *)FUN_0041b5e7();
        if (piVar6[1] == 0) {
          DAT_0042074c = 1;
          DAT_00420744 = 0;
          _DAT_00420740 = &PTR_FUN_0040109c;
          _DAT_00420748 = DVar5;
          piVar6[1] = (int)&DAT_00420740;
        }
        FUN_00417d48(&DAT_004207d8,1);
        iVar7 = FindStringOrdinal(0x400000,param_3,-1,L"NonAppContainerFailedMip",-1,1);
        if (iVar7 == -1) {
          iVar7 = FindStringOrdinal(0x400000,param_3,-1,L"NonAppContainerPPL",-1,1);
          if (iVar7 == -1) {
            iVar7 = FindStringOrdinal(0x400000,param_3,-1,L"NonAppContainer",-1,1);
            if (iVar7 == -1) {
              iVar7 = FindStringOrdinal(0x400000,param_3,-1,L"AppContainer",-1,1);
              if (iVar7 != -1) {
                piVar6[2] = 1;
              }
            }
            else {
              piVar6[2] = 2;
            }
          }
          else {
            piVar6[2] = 3;
          }
        }
        else {
          piVar6[2] = 4;
        }
        iVar7 = FUN_0041aae7(piVar6);
        if (-1 < iVar7) {
          while (BVar8 = GetMessageW(&local_2c,(HWND)0x0,0,0), 0 < BVar8) {
            TranslateMessage(&local_2c);
            DispatchMessageW(&local_2c);
          }
          FUN_004075cd(piVar6);
        }
        CoUninitialize();
        goto LAB_00414039;
      }
      local_8 = (int *)0x0;
      uVar3 = CoCreateInstance((IID *)&DAT_00401d04,(LPUNKNOWN)0x0,1,(IID *)&DAT_00402910,&local_8);
      if ((int)uVar3 < 0) {
        uVar9 = 0x370;
      }
      else {
        pcVar1 = *(code **)(*local_8 + 0x10);
        (*(code *)PTR_guard_check_icall_00421328)(local_8,4,&local_10);
        uVar3 = (*pcVar1)();
        if ((int)uVar3 < 0) {
          uVar9 = 0x371;
        }
        else {
          pcVar1 = *(code **)(*local_8 + 0xc);
          (*(code *)PTR_guard_check_icall_00421328)(local_8,4,local_10 | 0x100);
          uVar3 = (*pcVar1)();
          if (-1 < (int)uVar3) {
            FUN_00414048((int *)&local_8);
            goto LAB_00413f18;
          }
          uVar9 = 0x372;
        }
      }
      FUN_0040899b(unaff_retaddr,uVar9,"pcshell\\shell\\auth\\creduibroker\\exe\\creduibroker.cpp",
                   uVar3);
      FUN_00414048((int *)&local_8);
    }
    if (local_c != (undefined4 *)0x0) {
      free(local_c);
    }
  }
  return uVar3;
}



/* Function: FUN_00414048 */

void __fastcall FUN_00414048(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00414070 */

ULONG FUN_00414070(int param_1)

{
  code *pcVar1;
  ULONG UVar2;
  
  UVar2 = CoReleaseServerProcess();
  if ((UVar2 == 0) && (*(int **)(param_1 + 4) != (int *)0x0)) {
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 4);
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar1)();
  }
  return UVar2;
}



/* Function: FUN_004140b0 */

void FUN_004140b0(void)

{
  CoAddRefServerProcess();
  return;
}



/* Function: FUN_004140c0 */

undefined4 FUN_004140c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RoRevokeActivationFactories(param_3);
  return 0;
}



/* Function: FUN_004140e0 */

void __thiscall
FUN_004140e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4
            ,uint param_5)

{
  FUN_0041ae09(this,param_3,param_4,param_5);
  return;
}



/* Function: FUN_00414100 */

void FUN_00414100(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

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



/* Function: FUN_00414140 */

void __fastcall FUN_00414140(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_1 = &PTR_FUN_004014e8;
  if (puVar1 != (undefined4 *)0x0) {
    if (*(char *)(puVar1 + 1) != '\0') {
      pcVar2 = *(code **)*puVar1;
      (*(code *)PTR_guard_check_icall_00421328)(1);
      (*pcVar2)();
    }
    param_1[1] = 0;
  }
  FUN_00414245(param_1);
  return;
}



/* Function: FUN_00414180 */

undefined4 FUN_00414180(void)

{
  return 0;
}



/* Function: FUN_00414190 */

undefined4 FUN_00414190(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_004141b0 */

undefined4 FUN_004141b0(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_004141d0 */

undefined4 FUN_004141d0(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_004141f0 */

undefined4 FUN_004141f0(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00414210 */

int FUN_00414210(void)

{
  int iVar1;
  
  iVar1 = DAT_00420680;
  LOCK();
  DAT_00420680 = DAT_00420680 + -1;
  UNLOCK();
  return iVar1 + -1;
}



/* Function: FUN_00414230 */

int FUN_00414230(void)

{
  int iVar1;
  
  iVar1 = DAT_00420680;
  LOCK();
  DAT_00420680 = DAT_00420680 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00414245 */

void __fastcall FUN_00414245(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004014b8;
  FUN_00407375(param_1,'\x01');
  DAT_0042067c = 0;
  DAT_004207b0 = 0;
  return;
}



/* Function: FUN_00414267 */

int __fastcall FUN_00414267(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EAX;
  
  if (*param_1 != 0) {
    in_EAX = FUN_004169ef((void *)(*param_1 + 4));
    puVar3 = (undefined4 *)*param_1;
    *param_1 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      in_EAX = FUN_00416256(puVar3);
    }
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 == (undefined4 *)0x0) {
    return in_EAX;
  }
  LOCK();
  piVar1 = puVar3 + 0x29;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    FUN_004169bd(puVar3);
    CoTaskMemFree(puVar3);
  }
  return iVar2 + -1;
}



/* Function: FUN_004142a0 */

uint __thiscall FUN_004142a0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 auStack_68 [22];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)((int)this + 0x18);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x74));
  if ((*(uint *)(iVar1 + 0x28) & 0x100) == 0) {
    uStack_10 = 0;
    uStack_c = 0;
    FUN_00408360(auStack_68,param_1);
    uVar2 = FUN_00416c2f((void *)(iVar1 + 0x2c),auStack_68);
    FUN_00407d87(&uStack_10);
    if ((char)uVar2 == '\0') {
      *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 0x100000;
    }
  }
  uVar3 = FUN_004169ef((void *)(iVar1 + 4));
  return uVar3 & 0xffffff00;
}



/* Function: FUN_00414314 */

undefined4 * __thiscall FUN_00414314(void *this,undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_14 [4];
  
                    /* WARNING: Load size is inaccurate */
  puVar3 = *this;
  if (puVar3 != (undefined4 *)0x0) {
    if ((puVar3[0x23] != 0) || ((puVar3[10] & 0x100) != 0)) {
      *(undefined4 *)this = 0;
      FUN_00416256(puVar3);
    }
                    /* WARNING: Load size is inaccurate */
    if (*this != 0) goto LAB_00414367;
  }
  puVar3 = (undefined4 *)CoTaskMemAlloc(0xa8);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_00408b07();
    pcVar2 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar2)();
    return puVar3;
  }
  puVar4 = FUN_0041b645(puVar3);
                    /* WARNING: Load size is inaccurate */
  puVar3 = *this;
  *(undefined4 **)this = puVar4;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00416256(puVar3);
  }
LAB_00414367:
                    /* WARNING: Load size is inaccurate */
  FUN_00416ac2((void *)(*this + 4),local_14);
  *param_1 = &PTR_FUN_004016d0;
  param_1[1] = 0;
  param_1[2] = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_00409a42(param_1 + 1);
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  param_1[6] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 0xa4) = *(int *)(iVar1 + 0xa4) + 1;
    UNLOCK();
  }
  return param_1;
}



/* Function: FUN_004143c0 */

void FUN_004143c0(void)

{
  return;
}



/* Function: FUN_004143d0 */

void __thiscall FUN_004143d0(void *this,void *param_1)

{
  *(undefined **)((int)param_1 + 8) = &DAT_004027a8;
  *(undefined1 *)((int)param_1 + 0xc) = 4;
  FUN_0041cf69(param_1,-(uint)(this != (void *)0x0) & (int)this + 0x90U);
  return;
}



/* Function: FUN_00414410 */

void __thiscall FUN_00414410(void *this,undefined4 *param_1,byte param_2)

{
  bool bVar1;
  char *local_28;
  undefined1 local_24;
  int local_20;
  char *local_1c;
  undefined1 local_18;
  int local_14;
  char *local_10;
  undefined1 local_c;
  int local_8;
  
  if ((param_2 & 2) != 0) {
    *param_1 = "metrics";
    *(undefined1 *)(param_1 + 1) = 7;
    FUN_00412518(param_1);
    *(undefined4 *)((int)this + 0x68) = 0;
    FUN_00412542((int)param_1);
  }
  if ((param_2 & 1) != 0) {
    *param_1 = &DAT_004027a8;
    *(undefined1 *)(param_1 + 1) = 4;
    FUN_00412518(param_1);
    bVar1 = this == (void *)0x0;
    local_28 = "shellHostLaunchFailed";
    local_24 = 0x15;
    local_20 = (int)this + 0xa0;
    if (bVar1) {
      local_20 = 0x10;
    }
    local_1c = "passkeySyncOTSThroughBrokerFailed";
    local_14 = (int)this + 0x9c;
    if (bVar1) {
      local_14 = 0xc;
    }
    local_18 = 0x21;
    local_8 = (int)this + 0x98;
    if (bVar1) {
      local_8 = 8;
    }
    local_10 = "controllerInstanceNotCreated";
    local_c = 0x1c;
    FUN_0041c139(param_1,&local_10);
    FUN_0041c139(param_1,&local_1c);
    FUN_0041c139(param_1,&local_28);
    FUN_00412542((int)param_1);
  }
  return;
}



/* Function: FUN_004144f0 */

void __fastcall FUN_004144f0(int param_1)

{
  FUN_00412dc0(param_1 + 0x90);
  return;
}



/* Function: FUN_00414510 */

int FUN_00414510(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_004071e5(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x18);
      (*(code *)PTR_guard_check_icall_00421328)(1);
      (*pcVar1)();
    }
    if (DAT_0042067c != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0042067c + 8);
      (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00414570 */

void FUN_00414570(int param_1)

{
  FUN_004071b5((int *)(param_1 + 8));
  return;
}



/* Function: FUN_00414590 */

undefined4 FUN_00414590(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00406eb5(param_2,(int *)&DAT_00402a1c);
  if (iVar1 == 0) {
    iVar1 = FUN_00406eb5(extraout_ECX,(int *)&LAB_0040299c);
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
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_004145f4 */

void __fastcall FUN_004145f4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  HANDLE hObject;
  DWORD dwErrCode;
  
  if (*(char *)(param_1 + 2) != '\0') {
    uVar1 = param_1[1];
    puVar2 = (undefined4 *)*param_1;
    hObject = (HANDLE)*puVar2;
    if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
      dwErrCode = GetLastError();
      CloseHandle(hObject);
      SetLastError(dwErrCode);
    }
    *puVar2 = uVar1;
  }
  return;
}



/* Function: FUN_0041463c */

void __fastcall FUN_0041463c(int *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == 1) {
    *param_1 = 2;
    puVar1 = FUN_00410bbd();
    FUN_0041af29(*(uint **)(puVar1 + 4),(LPCGUID)(param_1 + 2));
  }
  *param_1 = 3;
  return;
}



/* Function: FUN_0041466c */

void __fastcall FUN_0041466c(PSRWLOCK param_1)

{
  PSRWLOCK pRVar1;
  code *pcVar2;
  bool bVar3;
  PSRWLOCK local_c [2];
  
  bVar3 = true;
  pRVar1 = param_1 + 0x2b;
  local_c[0] = param_1;
  if (pRVar1->Ptr != (PVOID)0x0) {
    FUN_0041631a(param_1,local_c);
                    /* WARNING: Load size is inaccurate */
    if (((int *)pRVar1->Ptr == (int *)0x0) || (*pRVar1->Ptr != 1)) {
      bVar3 = false;
      FUN_00416281(pRVar1);
    }
    if (local_c[0] != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_c[0]);
    }
    if (!bVar3) {
      return;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*param_1[0x2a].Ptr == 1) {
    FUN_004162b7((int)param_1[0x2a].Ptr);
    pcVar2 = *(code **)((int)param_1->Ptr + 4);
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_004146e8 */

int __fastcall FUN_004146e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((*(int *)(iVar1 + 0x38) < 0) && (*(int *)(iVar1 + 0x38) == *(int *)(iVar1 + 0x44))) {
    return iVar1 + 0x3c;
  }
  return 0;
}



/* Function: FUN_00414707 */

void __fastcall FUN_00414707(PSRWLOCK param_1)

{
  PSRWLOCK local_8;
  
  local_8 = param_1;
  FUN_0041631a(param_1,&local_8);
  *(undefined4 *)param_1[0x2a].Ptr = 2;
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
  }
  return;
}



/* Function: FUN_0041473d */

void __fastcall FUN_0041473d(PSRWLOCK param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  PSRWLOCK local_8;
  
  local_8 = param_1;
  FUN_0041631a(param_1,&local_8);
  puVar1 = (undefined4 *)param_1[0x2a].Ptr;
  puVar2 = FUN_00410bbd();
  if (5 < **(uint **)(puVar2 + 4)) {
    uVar3 = FUN_00405a58(*(uint **)(puVar2 + 4),0,0x2000);
    if ((char)uVar3 != '\0') {
      EventActivityIdControl(3,(LPGUID)(puVar1 + 2));
      goto LAB_0041478b;
    }
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
LAB_0041478b:
  *puVar1 = 1;
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
  }
  return;
}



/* Function: FUN_004147aa */

undefined4 __fastcall FUN_004147aa(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  
  if ((*(char *)(*(int *)(param_1 + 0xa8) + 4) != '\0') &&
     (uVar1 = FUN_00409e17((int *)(*(int *)(param_1 + 0xa8) + 0x18)), (char)uVar1 == '\0')) {
    return extraout_ECX;
  }
  return 0;
}



/* Function: FUN_004147d0 */

undefined4 __thiscall FUN_004147d0(void *this,undefined4 *param_1)

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
    (*(code *)PTR_guard_check_icall_00421328)(param_1[4]);
    cVar3 = (*pcVar1)();
    if (cVar3 == '\0') {
      puVar4 = FUN_00410bbd();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00405a58(*(uint **)(puVar4 + 4),0,0x2000);
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
          FUN_00406a06(extraout_ECX,&DAT_00403eee,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                       &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,
                       &local_c,&local_8);
        }
      }
    }
    else {
      puVar4 = FUN_00410bbd();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00405a58(*(uint **)(puVar4 + 4),0,0x2000);
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
          FUN_00405c64(extraout_ECX_00,&DAT_00404003,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX_00,local_50,&local_48,&local_44,&local_8,&local_c,&local_10,
                       &local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,
                       &local_30,&local_34,&local_38,&local_3c,&local_40);
        }
      }
    }
  }
  FUN_0041631a(this,&local_8);
  iVar2 = *(int *)((int)this + 0xa8);
  iVar6 = param_1[2];
  if ((iVar6 != *(int *)(iVar2 + 0x44)) &&
     ((iVar6 != *(int *)(iVar2 + 0x38) || (-1 < *(int *)(iVar2 + 0x38))))) {
    iVar6 = FUN_00408360((void *)(iVar2 + 0x3c),param_1);
  }
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
    iVar6 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}



/* Function: FUN_00414a28 */

undefined4 * __thiscall FUN_00414a28(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_0040101c;
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  memset((void *)((int)this + 0x40),0,0x58);
  *(undefined4 *)((int)this + 0xa0) = 1;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 **)((int)this + 0xa8) = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 0xac) = 0;
  FUN_00409a0b((void *)((int)this + 0xb0),this,(int)this + 0x2c,'\0');
  return (undefined4 *)this;
}



/* Function: FUN_00414aa5 */

undefined4 * __fastcall FUN_00414aa5(undefined4 *param_1)

{
  HLOCAL hMem;
  DWORD dwErrCode;
  
  hMem = (HLOCAL)*param_1;
  if (hMem != (HLOCAL)0x0) {
    dwErrCode = GetLastError();
    LocalFree(hMem);
    SetLastError(dwErrCode);
  }
  *param_1 = 0;
  return param_1;
}



/* Function: FUN_00414ad7 */

undefined4 __thiscall FUN_00414ad7(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
                    /* WARNING: Load size is inaccurate */
  piVar1 = *this;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
  }
                    /* WARNING: Load size is inaccurate */
  *param_1 = *this;
  return 0;
}



/* Function: FUN_00414b10 */

undefined4 FUN_00414b10(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00414b30 */

undefined4 FUN_00414b30(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00414b60 */

undefined4 FUN_00414b60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
    *puVar1 = DAT_00402b64;
    puVar1[1] = DAT_00402b68;
    puVar1[2] = DAT_00402b6c;
    puVar1[3] = DAT_00402b70;
    puVar1[4] = DAT_00402c4c;
    puVar1[5] = DAT_00402c50;
    puVar1[6] = DAT_00402c54;
    puVar1[7] = DAT_00402c58;
    *param_2 = 2;
    *param_3 = puVar1;
  }
  return uVar2;
}



/* Function: FUN_00414bc0 */

int FUN_00414bc0(int *param_1)

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
      iVar5 = FUN_004071e5((int *)(iVar3 * 2 + 0xc));
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
      pcVar2 = *(code **)(*param_1 + 0xc4);
      (*(code *)PTR_guard_check_icall_00421328)(1);
      (*pcVar2)();
    }
    if (DAT_0042067c != (int *)0x0) {
      pcVar2 = *(code **)(*DAT_0042067c + 8);
      (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
      (*pcVar2)();
    }
  }
  return iVar5;
}



/* Function: FUN_00414c50 */

int FUN_00414c50(int param_1)

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
      iVar3 = FUN_004071b5((int *)(iVar3 * 2 + 0xc));
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



/* Function: FUN_00414cb0 */

void FUN_00414cb0(int *param_1,int *param_2,undefined4 *param_3)

{
  FUN_0041af83(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00414cd0 */

undefined4 FUN_00414cd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
    *puVar1 = DAT_00402b7c;
    puVar1[1] = DAT_00402b80;
    puVar1[2] = DAT_00402b84;
    puVar1[3] = DAT_00402b88;
    puVar1[4] = DAT_00402a7c;
    puVar1[5] = DAT_00402a80;
    puVar1[6] = DAT_00402a84;
    puVar1[7] = DAT_00402a88;
    puVar1[8] = DAT_00402c4c;
    puVar1[9] = DAT_00402c50;
    puVar1[10] = DAT_00402c54;
    puVar1[0xb] = DAT_00402c58;
    *param_2 = 3;
    *param_3 = puVar1;
  }
  return uVar2;
}



/* Function: FUN_00414d40 */

int FUN_00414d40(int *param_1)

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
      iVar5 = FUN_004071e5((int *)(iVar3 * 2 + 0xc));
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
      (*(code *)PTR_guard_check_icall_00421328)(1);
      (*pcVar2)();
    }
    if (DAT_0042067c != (int *)0x0) {
      pcVar2 = *(code **)(*DAT_0042067c + 8);
      (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
      (*pcVar2)();
    }
  }
  return iVar5;
}



/* Function: FUN_00414dd0 */

int FUN_00414dd0(int param_1)

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
      iVar3 = FUN_004071b5((int *)(iVar3 * 2 + 0xc));
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



/* Function: FUN_00414e30 */

void FUN_00414e30(int *param_1,int *param_2,int *param_3)

{
  FUN_0041b02b(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00414e4d */

void __fastcall FUN_00414e4d(int *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == 1) {
    *param_1 = 2;
    puVar1 = FUN_0040dff6();
    FUN_0041af29(*(uint **)(puVar1 + 4),(LPCGUID)(param_1 + 2));
  }
  *param_1 = 3;
  return;
}



/* Function: FUN_00414e7f */

void __fastcall FUN_00414e7f(PSRWLOCK param_1)

{
  int *this;
  code *pcVar1;
  bool bVar2;
  PSRWLOCK pRVar3;
  PSRWLOCK local_c [2];
  
  bVar2 = true;
  pRVar3 = param_1 + 0x2b;
  if (pRVar3->Ptr != (PVOID)0x0) {
    local_c[0] = param_1;
    FUN_0041631a(param_1,local_c);
                    /* WARNING: Load size is inaccurate */
    if (((int *)pRVar3->Ptr == (int *)0x0) || (*pRVar3->Ptr != 1)) {
      bVar2 = false;
      FUN_00416391(pRVar3);
    }
    if (local_c[0] != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_c[0]);
    }
    if (!bVar2) {
      return;
    }
  }
  this = (int *)param_1[0x2a].Ptr;
  if (*this == 1) {
    local_c[0] = (PSRWLOCK)this[0x11];
    pRVar3 = (PSRWLOCK)0x8007023e;
    if ((int)local_c[0] < 0) {
      pRVar3 = local_c[0];
    }
    FUN_004163c9(this,(int)pRVar3,(int *)local_c);
    pcVar1 = *(code **)((int)param_1->Ptr + 4);
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00414f20 */

undefined4 __thiscall FUN_00414f20(void *this,undefined4 *param_1)

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
    (*(code *)PTR_guard_check_icall_00421328)(param_1[4]);
    cVar3 = (*pcVar1)();
    if (cVar3 == '\0') {
      puVar4 = FUN_0040dff6();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00405a58(*(uint **)(puVar4 + 4),0,0x2000);
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
          FUN_00406a06(extraout_ECX,&DAT_00403eee,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                       &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,
                       &local_c,&local_8);
        }
      }
    }
    else {
      puVar4 = FUN_0040dff6();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00405a58(*(uint **)(puVar4 + 4),0,0x2000);
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
          FUN_00405c64(extraout_ECX_00,&DAT_00404003,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX_00,local_50,&local_48,&local_44,&local_8,&local_c,&local_10,
                       &local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,
                       &local_30,&local_34,&local_38,&local_3c,&local_40);
        }
      }
    }
  }
  FUN_0041631a(this,&local_8);
  iVar2 = *(int *)((int)this + 0xa8);
  iVar6 = param_1[2];
  if ((iVar6 != *(int *)(iVar2 + 0x44)) &&
     ((iVar6 != *(int *)(iVar2 + 0x38) || (-1 < *(int *)(iVar2 + 0x38))))) {
    iVar6 = FUN_00408360((void *)(iVar2 + 0x3c),param_1);
  }
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
    iVar6 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}



/* Function: FUN_00415178 */

void __fastcall FUN_00415178(int *param_1)

{
  code *pcVar1;
  uint *this;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  PSRWLOCK local_1c;
  undefined4 uStack_18;
  undefined4 *local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_0041631a(param_1,&local_1c);
  uVar2 = FUN_004163c9((void *)param_1[0x2a],0,(int *)&local_14);
  if (local_1c != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_1c);
  }
  if ((char)uVar2 == '\0') {
    puVar3 = FUN_0040dff6();
    this = *(uint **)(puVar3 + 4);
    if (5 < *this) {
      uVar4 = FUN_00405a58(this,0,0x2000);
      if ((char)uVar4 != '\0') {
        local_1c = (PSRWLOCK)GetCurrentThreadId();
        uStack_18 = 0;
        uStack_c = 0;
        local_14 = &uStack_10;
        uStack_10 = 0x1000000;
        FUN_00405e65((int)this,&DAT_004038c7,(LPCGUID)(param_1[0x2a] + 8),extraout_ECX,&local_14,
                     &uStack_18,&local_1c);
      }
    }
  }
  else {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar1)();
  }
  if (param_1[0x2f] != 0) {
    FUN_00409aa5(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_0041525a */

void __fastcall FUN_0041525a(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00415280 */

undefined4 FUN_00415280(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
    *puVar1 = DAT_00402b54;
    puVar1[1] = DAT_00402b58;
    puVar1[2] = DAT_00402b5c;
    puVar1[3] = DAT_00402b60;
    puVar1[4] = DAT_00402c4c;
    puVar1[5] = DAT_00402c50;
    puVar1[6] = DAT_00402c54;
    puVar1[7] = DAT_00402c58;
    *param_2 = 2;
    *param_3 = puVar1;
  }
  return uVar2;
}



/* Function: FUN_004152e0 */

int FUN_004152e0(int *param_1)

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
      iVar5 = FUN_004071e5((int *)(iVar3 * 2 + 0xc));
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
      (*(code *)PTR_guard_check_icall_00421328)(1);
      (*pcVar2)();
    }
    if (DAT_0042067c != (int *)0x0) {
      pcVar2 = *(code **)(*DAT_0042067c + 8);
      (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
      (*pcVar2)();
    }
  }
  return iVar5;
}



/* Function: FUN_0041536a */

void __fastcall FUN_0041536a(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  *param_1 = 0;
  if (_Memory != (undefined4 *)0x0) {
    FUN_0040d737(_Memory);
    free(_Memory);
  }
  return;
}



/* Function: FUN_0041538c */

void __thiscall FUN_0041538c(void *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *this;
  *(int *)this = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_00421328)(1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_004153bc */

void __fastcall FUN_004153bc(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    (*(code *)PTR_guard_check_icall_00421328)(1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_004153e4 */

void __fastcall FUN_004153e4(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  *param_1 = 0;
  if (_Memory != (undefined4 *)0x0) {
    FUN_0040d637(_Memory);
    free(_Memory);
  }
  return;
}



/* Function: FUN_00415406 */

void __fastcall FUN_00415406(undefined4 *param_1)

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



/* Function: FUN_00415449 */

void __fastcall FUN_00415449(int *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == 1) {
    *param_1 = 2;
    puVar1 = FUN_0040c383();
    FUN_0041b0c5(*(uint **)(puVar1 + 4),(LPCGUID)(param_1 + 2));
  }
  *param_1 = 3;
  return;
}



/* Function: FUN_00415480 */

undefined4 __thiscall FUN_00415480(void *this,undefined4 *param_1)

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
    (*(code *)PTR_guard_check_icall_00421328)(param_1[4]);
    cVar3 = (*pcVar1)();
    if (cVar3 == '\0') {
      puVar4 = FUN_0040c383();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00405a58(*(uint **)(puVar4 + 4),0,0x6000);
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
          FUN_00406a06(extraout_ECX,&DAT_00403247,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                       &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,
                       &local_c,&local_8);
        }
      }
    }
    else {
      puVar4 = FUN_0040c383();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00405a58(*(uint **)(puVar4 + 4),0,0x4000);
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
          FUN_00405c64(extraout_ECX_00,&DAT_00404f6c,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX_00,local_50,&local_48,&local_44,&local_8,&local_c,&local_10,
                       &local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,
                       &local_30,&local_34,&local_38,&local_3c,&local_40);
        }
      }
    }
  }
  FUN_0041631a(this,&local_8);
  iVar2 = *(int *)((int)this + 0xa8);
  iVar6 = param_1[2];
  if ((iVar6 != *(int *)(iVar2 + 0x44)) &&
     ((iVar6 != *(int *)(iVar2 + 0x38) || (-1 < *(int *)(iVar2 + 0x38))))) {
    iVar6 = FUN_00408360((void *)(iVar2 + 0x3c),param_1);
  }
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
    iVar6 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}



/* Function: FUN_004156d8 */

void __fastcall FUN_004156d8(int *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == 1) {
    *param_1 = 2;
    puVar1 = FUN_0040c383();
    FUN_0041af29(*(uint **)(puVar1 + 4),(LPCGUID)(param_1 + 2));
  }
  *param_1 = 3;
  return;
}



/* Function: FUN_00415710 */

undefined4 __thiscall FUN_00415710(void *this,undefined4 *param_1)

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
    (*(code *)PTR_guard_check_icall_00421328)(param_1[4]);
    cVar3 = (*pcVar1)();
    if (cVar3 == '\0') {
      puVar4 = FUN_0040c383();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00405a58(*(uint **)(puVar4 + 4),0,0x2000);
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
          FUN_00406a06(extraout_ECX,&DAT_00403eee,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                       &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,
                       &local_c,&local_8);
        }
      }
    }
    else {
      puVar4 = FUN_0040c383();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00405a58(*(uint **)(puVar4 + 4),0,0x2000);
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
          FUN_00405c64(extraout_ECX_00,&DAT_00404003,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX_00,local_50,&local_48,&local_44,&local_8,&local_c,&local_10,
                       &local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,
                       &local_30,&local_34,&local_38,&local_3c,&local_40);
        }
      }
    }
  }
  FUN_0041631a(this,&local_8);
  iVar2 = *(int *)((int)this + 0xa8);
  iVar6 = param_1[2];
  if ((iVar6 != *(int *)(iVar2 + 0x44)) &&
     ((iVar6 != *(int *)(iVar2 + 0x38) || (-1 < *(int *)(iVar2 + 0x38))))) {
    iVar6 = FUN_00408360((void *)(iVar2 + 0x3c),param_1);
  }
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
    iVar6 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}



/* Function: FUN_00415968 */

int __thiscall FUN_00415968(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  LPVOID pv;
  LPVOID local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  psVar2 = *this;
  if (psVar2 == (short *)0x0) {
    iVar3 = -0x7ff8fb70;
  }
  else {
    uVar5 = *(uint *)((int)this + 4);
    local_10 = (LPVOID)0x0;
    local_c = 0;
    local_8 = 0;
    if (uVar5 == 0xffffffff) {
      psVar4 = psVar2;
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
      } while (sVar1 != 0);
      uVar5 = (int)psVar4 - (int)(psVar2 + 1) >> 1;
    }
    iVar3 = FUN_0041649c(&local_10,psVar2,uVar5);
    pv = local_10;
    if (-1 < iVar3) {
      *param_1 = local_10;
      pv = (LPVOID)0x0;
    }
    if (pv != (LPVOID)0x0) {
      CoTaskMemFree(pv);
    }
  }
  return iVar3;
}



/* Function: FUN_004159e0 */

undefined4 FUN_004159e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
    *puVar1 = DAT_00402b7c;
    puVar1[1] = DAT_00402b80;
    puVar1[2] = DAT_00402b84;
    puVar1[3] = DAT_00402b88;
    puVar1[4] = DAT_00402928;
    puVar1[5] = DAT_0040292c;
    puVar1[6] = DAT_00402930;
    puVar1[7] = DAT_00402934;
    puVar1[8] = DAT_00402c4c;
    puVar1[9] = DAT_00402c50;
    puVar1[10] = DAT_00402c54;
    puVar1[0xb] = DAT_00402c58;
    *param_2 = 3;
    *param_3 = puVar1;
  }
  return uVar2;
}



/* Function: FUN_00415a50 */

void FUN_00415a50(int *param_1,int *param_2,int *param_3)

{
  FUN_0041b1ac(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00415a6d */

void __fastcall FUN_00415a6d(undefined1 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00408330();
  if (cVar1 != '\0') {
    *param_1 = 0;
    FUN_0040bee7((int)param_1);
    return;
  }
  FUN_0040bd1d(param_1);
  return;
}



/* Function: FUN_00415a92 */

int * __fastcall FUN_00415a92(int *param_1)

{
  int iVar1;
  DWORD dwErrCode;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    dwErrCode = GetLastError();
    FUN_0040bceb(iVar1);
    SetLastError(dwErrCode);
  }
  *param_1 = 0;
  return param_1;
}



/* Function: FUN_00415ac3 */

void __fastcall FUN_00415ac3(undefined1 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00408330();
  if (cVar1 == '\0') {
    FUN_0040b4f2(param_1);
    return;
  }
  *param_1 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0041618b(*(int **)(param_1 + 8));
    return;
  }
  return;
}



/* Function: FUN_00415af0 */

void __thiscall FUN_00415af0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0040a8f8(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_00415b13 */

void __fastcall FUN_00415b13(void *param_1)

{
  FUN_0040a8f8(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_00415b35 */

void __thiscall FUN_00415b35(void *this,int param_1)

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



/* Function: FUN_00415b5f */

void __fastcall FUN_00415b5f(int *param_1)

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



/* Function: FUN_00415b7f */

void __thiscall FUN_00415b7f(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_00416e3f(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00415bb6 */

DWORD * FUN_00415bb6(char param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  
  iVar3 = DAT_00420558;
  DVar4 = GetCurrentThreadId();
  pDVar1 = (DWORD *)(iVar3 + (DVar4 % 10) * 4);
  pDVar5 = (DWORD *)*pDVar1;
  while( true ) {
    if (pDVar5 == (DWORD *)0x0) {
      if ((param_1 == '\0') || (pDVar5 = (DWORD *)FUN_00407d0a(0,0xc), pDVar5 == (DWORD *)0x0)) {
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



/* Function: FUN_00415c48 */

void __fastcall FUN_00415c48(int *param_1)

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



/* Function: FUN_00415c8d */

DWORD __thiscall FUN_00415c8d(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  DWORD DVar2;
  
  DVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = FUN_00408232(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_00415cfa(this,pvVar1);
  }
  return DVar2;
}



/* Function: FUN_00415cdd */

void __fastcall FUN_00415cdd(int *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (*param_1 != 0) {
    lpMem = (LPVOID)*param_1;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
  }
  return;
}



/* Function: FUN_00415cfa */

void __thiscall FUN_00415cfa(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_004093f4(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00415d40 */

int FUN_00415d40(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_004071e5(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_00421328)(1);
      (*pcVar1)();
    }
    if (DAT_0042067c != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0042067c + 8);
      (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00415da0 */

undefined4 FUN_00415da0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00406eb5(param_2,(int *)&DAT_00402a1c);
  if (iVar1 == 0) {
    iVar1 = FUN_00406eb5(extraout_ECX,(int *)&DAT_00402a2c);
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
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_00415e10 */

undefined4 * __thiscall FUN_00415e10(void *this,byte param_1)

{
  FUN_00414140((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00415e40 */

undefined4 * __thiscall FUN_00415e40(void *this,byte param_1)

{
  FUN_00414245((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00415e70 */

void * __thiscall FUN_00415e70(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_00415e99 */

void __fastcall FUN_00415e99(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  uint uVar2;
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00407940(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00415cfa(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00408232(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_00415f85;
  }
  FUN_00416dfc(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_0040944c(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_00415fb3:
    FUN_0040899b(unaff_retaddr,uVar3,&DAT_00401ed0,uVar2);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_004167b5((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_00415fb3;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00409421(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004093f4(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_00415f85:
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00416058 */

void __fastcall FUN_00416058(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  uint uVar2;
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
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00407940(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00415cfa(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00408232(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_00416147;
  }
  FUN_00416dfc(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_0040944c(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_00416175:
    FUN_0040899b(unaff_retaddr,uVar3,&DAT_00401ed0,uVar2);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_0041687a((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_00416175;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00409421(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004093f4(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_00416147:
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0041618b */

void __fastcall FUN_0041618b(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00408330();
  if (cVar1 == '\0') {
    FUN_00416dfc(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_00415cfa(param_1 + 2,0);
      FUN_00415cfa(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00409421(local_8);
        SetLastError(DVar2);
      }
      FUN_00416613((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00409421(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_0040b33d(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_00416225 */

void __fastcall FUN_00416225(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_0040a0da((void *)(*param_1 + 4),*(PVOID *)(*param_1 + 0x14));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_00416256 */

int __fastcall FUN_00416256(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 0x29;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    FUN_004169bd(param_1);
    CoTaskMemFree(param_1);
  }
  return iVar2 + -1;
}



/* Function: FUN_00416281 */

void __fastcall FUN_00416281(undefined4 *param_1)

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
      FUN_00411b96((int *)((int)_Memory + 4));
      free(_Memory);
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_004162b7 */

int __fastcall FUN_004162b7(int param_1)

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
  FUN_004087a0((int)local_60);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}



/* Function: FUN_0041631a */

undefined4 * __thiscall FUN_0041631a(void *this,undefined4 *param_1)

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



/* Function: FUN_00416391 */

void __fastcall FUN_00416391(undefined4 *param_1)

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
      FUN_0040e392((int *)((int)_Memory + 4));
      free(_Memory);
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_004163c9 */

undefined4 __thiscall FUN_004163c9(void *this,int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_60 [92];
  
  iVar1 = *(int *)((int)this + 0x9c);
  if (0 < iVar1) {
    iVar3 = *(int *)((int)this + 0x38);
    if (-1 < *(int *)((int)this + 0x38)) {
      *(int *)((int)this + 0x38) = param_1;
      iVar3 = param_1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
    }
    iVar1 = iVar1 + -1;
    *(int *)((int)this + 0x9c) = iVar1;
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  memset(local_60,0,0x58);
  FUN_004087a0((int)local_60);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}



/* Function: FUN_0041642c */

void __fastcall FUN_0041642c(undefined4 *param_1)

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
      FUN_0040d17b((int *)((int)_Memory + 4));
      free(_Memory);
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00416464 */

void __fastcall FUN_00416464(undefined4 *param_1)

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
      FUN_0040d155((int *)((int)_Memory + 4));
      free(_Memory);
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0041649c */

int __thiscall FUN_0041649c(void *this,short *param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = 0;
  if (param_1 == (short *)0x0) {
    FUN_00416c95((int *)this);
  }
  else {
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    uVar3 = (int)psVar4 - (int)(param_1 + 1) >> 1;
    uVar5 = uVar3;
    if ((param_2 != 0xffffffff) &&
       (bVar6 = uVar3 <= param_2, uVar3 = param_2, uVar5 = param_2, bVar6)) {
      psVar4 = param_1;
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
      } while (sVar1 != 0);
      uVar3 = (int)psVar4 - (int)(param_1 + 1) >> 1;
    }
    iVar2 = FUN_00416cba(this,uVar5);
    if (-1 < iVar2) {
      uVar5 = uVar5 + 1;
                    /* WARNING: Load size is inaccurate */
      if (uVar5 != 0) {
        if ((uVar5 < 0x80000000) && (uVar3 < 0x7fffffff)) {
          FUN_00407984(*this,uVar5,(int *)0x0,(int)param_1,uVar3);
        }
        else {
          **this = 0;
        }
      }
      *(uint *)((int)this + 4) = uVar3;
    }
  }
  return iVar2;
}



/* Function: FUN_00416544 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416544(void)

{
  _DAT_004207ec = "WilStaging_02";
  DAT_004207e8 = 0;
  _DAT_004207f0 = 0;
  DAT_004207f4 = 0;
  _DAT_004207f8 = 0;
  _DAT_004207fc = 0;
  _DAT_00420800 = 0;
  _DAT_00420804 = 0;
  _DAT_00420808 = 0;
  FUN_0040b943((LPCRITICAL_SECTION)&DAT_0042080c);
  _DAT_00420834 = 0;
  FUN_0040b943((LPCRITICAL_SECTION)&DAT_00420838);
  _DAT_00420870 = 0;
  _DAT_00420860 = 0;
  uRam00420864 = 0;
  uRam00420868 = 0;
  uRam0042086c = 0;
  DAT_004207e8 = 1;
  return;
}



/* Function: FUN_004165c0 */

undefined4 * __thiscall FUN_004165c0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401220;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004165e8 */

void __fastcall FUN_004165e8(int param_1)

{
  FUN_00416da1((int *)(param_1 + 0x18));
  FUN_0041663e((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004093f4(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00416613 */

void __fastcall FUN_00416613(int param_1)

{
  FUN_0040b310((void *)(param_1 + 0x10));
  FUN_0041663e((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004093f4(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0041663e */

void __fastcall FUN_0041663e(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_004093f4((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_004093f4((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00416665 */

uint __fastcall FUN_00416665(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00416ec0(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00416fc5(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0041669d */

uint __fastcall FUN_0041669d(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_0041701e(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00417123(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_004166d5 */

uint __fastcall FUN_004166d5(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_0041717c(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00417281(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0041670d */

uint __fastcall FUN_0041670d(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00417330(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00417435(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_00416745 */

uint __fastcall FUN_00416745(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_004174e4(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_004175e9(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_0041677d */

uint __fastcall FUN_0041677d(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00417698(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_0041779d(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_004167b5 */

uint __fastcall FUN_004167b5(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00407d0a(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_0040899b(unaff_retaddr,0x148,&DAT_00401ed0,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00408b07();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_004094a9(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_0040899b(unaff_retaddr,0x14b,&DAT_00401ed0,uVar3);
    }
    else {
      FUN_004178a2(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_0041663e(local_10);
  }
  FUN_00415b5f((int *)&local_18);
  return uVar3;
}



/* Function: FUN_0041687a */

uint __fastcall FUN_0041687a(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00407d0a(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_0040899b(unaff_retaddr,0x148,&DAT_00401ed0,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00408b07();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_004094a9(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_0040899b(unaff_retaddr,0x14b,&DAT_00401ed0,uVar3);
    }
    else {
      FUN_00417906(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_0041663e(local_10);
  }
  FUN_00415b5f((int *)&local_18);
  return uVar3;
}



/* Function: FUN_00416941 */

uint __fastcall FUN_00416941(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  void *pvStack_c;
  
  local_10 = param_1;
  pvStack_c = param_1;
  FUN_0041796a(param_1,(uint *)&local_10);
  uVar1 = local_10._0_1_;
  local_10 = (void *)((uint)local_10 & 0xffffff01);
  uVar2 = FUN_00417a6f(param_1,(byte)local_10);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_0041697f */

uint __fastcall FUN_0041697f(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_10;
  void *pvStack_c;
  
  local_10 = param_1;
  pvStack_c = param_1;
  FUN_00417ad2(param_1,(uint *)&local_10);
  uVar1 = local_10._0_1_;
  local_10 = (void *)((uint)local_10 & 0xffffff01);
  uVar2 = FUN_00417bd7(param_1,(byte)local_10);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_004169bd */

void __fastcall FUN_004169bd(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004012f0;
  if ((param_1[0x23] != 0) && ((*(byte *)(param_1 + 4) & 1) == 0)) {
    FUN_00417da2(param_1 + 1,4);
  }
  FUN_0041809d((int)(param_1 + 1));
  return;
}



/* Function: FUN_004169ef */

void __fastcall FUN_004169ef(void *param_1)

{
  uint uVar1;
  void *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  undefined4 local_858 [4];
  undefined4 local_848;
  uint local_844;
  LPVOID local_840;
  LPVOID local_828 [519];
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)local_858;
  uVar2 = 0;
  uVar1 = *(uint *)((int)param_1 + 0x24);
  *(uint *)((int)param_1 + 0x24) = uVar1 | 0x800;
  if ((*(int *)((int)param_1 + 0x88) != 0) && ((uVar1 & 0x100) == 0)) {
    memset(local_858,0,0x30);
    FUN_00412189(local_828);
    if ((*(uint *)((int)param_1 + 0xc) & 0x8000) == 0) {
      uVar2 = FUN_00417e8c(param_1,extraout_EDX,extraout_ECX,1);
    }
    FUN_004127dc(uVar2,local_858);
    *(uint *)((int)param_1 + 0x24) = *(uint *)((int)param_1 + 0x24) | local_844;
    if (local_840 == (LPVOID)0x0) {
      *(undefined4 *)((int)param_1 + 0x6c) = local_848;
    }
    if (local_828[0] != (LPVOID)0x0) {
      CoTaskMemFree(local_828[0]);
    }
    CoTaskMemFree(local_840);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_0041e250(local_c ^ (uint)local_858,extraout_EDX_00);
  return;
}



/* Function: FUN_00416ac2 */

void __thiscall FUN_00416ac2(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  FARPROC pFVar6;
  undefined4 uVar7;
  HMODULE hModule;
  DWORD dwErrCode;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int iVar8;
  char *lpProcName;
  LPVOID local_81c [517];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x70));
  FUN_00412189(local_81c);
  uVar7 = 0;
  if (((*(uint *)((int)this + 0x24) & 0x800) == 0) ||
     (bVar5 = true, (*(uint *)((int)this + 0xc) & 0x8000) != 0)) {
    bVar5 = false;
  }
  if (bVar5) {
    uVar7 = FUN_00417e8c(this,extraout_EDX,local_81c,1);
  }
  uVar2 = *(undefined4 *)((int)this + 0xc);
  uVar1 = *(undefined1 *)((int)this + 0x14);
  uVar3 = *(undefined4 *)((int)this + 8);
  if (DAT_0042053c == (FARPROC)0x0) {
    lpProcName = "TestCreate";
    hModule = (HMODULE)FUN_004127bc();
    DAT_0042053c = GetProcAddress(hModule,lpProcName);
    if (DAT_0042053c == (FARPROC)0x0) {
      *(undefined4 *)((int)this + 0x4c) = 0;
      *(undefined4 *)((int)this + 0x50) = 0;
      *(undefined4 *)((int)this + 0x54) = 0;
      *(undefined4 *)((int)this + 0x58) = 0;
      iVar8 = 0;
      uVar7 = extraout_EDX_00;
      goto LAB_00416bab;
    }
  }
  pFVar6 = DAT_0042053c;
  (*(code *)PTR_guard_check_icall_00421328)(uVar3,0,uVar1,uVar2,uVar7,(int)this + 0x4c);
  iVar8 = (*pFVar6)();
  uVar7 = extraout_EDX_01;
LAB_00416bab:
  iVar4 = *(int *)((int)this + 0x88);
  if (iVar4 != 0) {
    dwErrCode = GetLastError();
    FUN_0041284a(iVar4);
    SetLastError(dwErrCode);
    uVar7 = extraout_EDX_02;
  }
  *(int *)((int)this + 0x88) = iVar8;
  *(undefined4 *)((int)this + 0x6c) = 1;
  *param_1 = *(undefined4 *)((int)this + 0x4c);
  param_1[1] = *(undefined4 *)((int)this + 0x50);
  param_1[2] = *(undefined4 *)((int)this + 0x54);
  param_1[3] = *(undefined4 *)((int)this + 0x58);
  if (local_81c[0] != (LPVOID)0x0) {
    CoTaskMemFree(local_81c[0]);
    uVar7 = extraout_EDX_03;
  }
  if ((LPCRITICAL_SECTION)((int)this + 0x70) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x70));
    uVar7 = extraout_EDX_04;
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar7);
  return;
}



/* Function: FUN_00416c2f */

undefined4 __thiscall FUN_00416c2f(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 <= *(uint *)((int)this + 8)) {
    if (uVar1 == 0) {
      uVar1 = 10;
    }
    else {
      uVar1 = uVar1 * 2;
    }
    uVar2 = FUN_00419109(this,uVar1);
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar4 = (undefined4 *)(*(int *)((int)this + 8) * 0x60 + *this);
  puVar5 = param_1;
  puVar6 = puVar4;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4[0x16] = param_1[0x16];
  puVar4[0x17] = param_1[0x17];
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return CONCAT31((int3)((uint)this >> 8),1);
}



/* Function: FUN_00416c95 */

void __fastcall FUN_00416c95(int *param_1)

{
  if (*param_1 != 0) {
    CoTaskMemFree((LPVOID)*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_00416cba */

undefined4 __thiscall FUN_00416cba(void *this,uint param_1)

{
  uint uVar1;
  short *psVar2;
  short sVar3;
  undefined2 *puVar4;
  uint uVar5;
  LPVOID pvVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  
  uVar1 = param_1 + 1;
  if (uVar1 < param_1) {
LAB_00416d8d:
    uVar10 = 0x80070216;
  }
  else {
    uVar9 = *(uint *)((int)this + 8);
    if (uVar9 == 0xffffffff) {
      iVar8 = *(int *)((int)this + 4);
      if (iVar8 == -1) {
                    /* WARNING: Load size is inaccurate */
        psVar7 = *this;
        if (psVar7 == (short *)0x0) {
          iVar8 = 0;
        }
        else {
          psVar2 = psVar7 + 1;
          do {
            sVar3 = *psVar7;
            psVar7 = psVar7 + 1;
          } while (sVar3 != 0);
          iVar8 = (int)psVar7 - (int)psVar2 >> 1;
        }
        *(int *)((int)this + 4) = iVar8;
      }
      uVar9 = iVar8 + 1;
                    /* WARNING: Load size is inaccurate */
      if (*this == 0) {
        uVar9 = 0;
      }
      *(uint *)((int)this + 8) = uVar9;
    }
    if (uVar9 == 0) {
      if ((int)((ulonglong)uVar1 * 2 >> 0x20) != 0) goto LAB_00416d8d;
      puVar4 = (undefined2 *)CoTaskMemAlloc((SIZE_T)((ulonglong)uVar1 * 2));
      if (puVar4 != (undefined2 *)0x0) {
        *(uint *)((int)this + 8) = uVar1;
        *(undefined2 **)this = puVar4;
        *puVar4 = 0;
        return 0;
      }
    }
    else {
      if (uVar1 <= uVar9) {
        return 0;
      }
      uVar5 = (uint)((ulonglong)uVar9 * 2);
      if ((int)((ulonglong)uVar9 * 2 >> 0x20) != 0) goto LAB_00416d8d;
      if (0x800 < uVar5 - uVar9) {
        uVar5 = uVar9 + 0x800;
      }
      if (uVar5 < uVar1) {
        uVar5 = uVar1;
      }
                    /* WARNING: Load size is inaccurate */
      pvVar6 = CoTaskMemRealloc(*this,uVar5 * 2);
      if (pvVar6 != (LPVOID)0x0) {
        *(uint *)((int)this + 8) = uVar5;
        *(LPVOID *)this = pvVar6;
        return 0;
      }
    }
    uVar10 = 0x8007000e;
  }
  return uVar10;
}



/* Function: FUN_00416da1 */

void __fastcall FUN_00416da1(int *param_1)

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
        FUN_00409855((int)lpMem + 8);
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



/* Function: FUN_00416dfc */

void __thiscall FUN_00416dfc(void *this,undefined4 *param_1)

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
    FUN_00408acb(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00416e3f */

void FUN_00416e3f(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00416e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_00416e6a */

void __fastcall FUN_00416e6a(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00418159(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040c135(param_1 + 2,(char *)0x2af34f3,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_00416ec0 */

uint * __thiscall FUN_00416ec0(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_0041825e(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00416f9f;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_00416f8f:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00416f8f;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00416f9f:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00416fc5 */

void __thiscall FUN_00416fc5(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00416ec0(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040c135((uint *)((int)this + 8),(char *)0x3667ca2,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_10,(uint)param_1,0);
  return;
}



/* Function: FUN_0041701e */

uint * __thiscall FUN_0041701e(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_00418337(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_004170fd;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_004170ed:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004170ed;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_004170fd:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00417123 */

void __thiscall FUN_00417123(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0041701e(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040c135((uint *)((int)this + 8),(char *)0x33b9b30,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_10,(uint)param_1,0);
  return;
}



/* Function: FUN_0041717c */

uint * __thiscall FUN_0041717c(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_00418410(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_0041725b;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_0041724b:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0041724b;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_0041725b:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00417281 */

void __thiscall FUN_00417281(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0041717c(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040c135((uint *)((int)this + 8),(char *)0x33b9b29,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_10,(uint)param_1,0);
  return;
}



/* Function: FUN_004172da */

void __fastcall FUN_004172da(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004184c6(param_1,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_0040c135(param_1 + 2,(char *)0x2af34e9,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_c,1,0);
  return;
}



/* Function: FUN_00417330 */

uint * __thiscall FUN_00417330(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_004185cb(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_0041740f;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_004173ff:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004173ff;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_0041740f:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00417435 */

void __thiscall FUN_00417435(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00417330(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040c135((uint *)((int)this + 8),(char *)0x3667c9a,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_10,(uint)param_1,0);
  return;
}



/* Function: FUN_0041748e */

void __fastcall FUN_0041748e(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004186a4(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040c135(param_1 + 2,(char *)0x2af34f6,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_004174e4 */

uint * __thiscall FUN_004174e4(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_004187a9(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_004175c3;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_004175b3:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004175b3;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_004175c3:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004175e9 */

void __thiscall FUN_004175e9(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004174e4(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040c135((uint *)((int)this + 8),(char *)0x30483c4,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_10,(uint)param_1,0);
  return;
}



/* Function: FUN_00417642 */

void __fastcall FUN_00417642(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0041886a(param_1,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_0040c135(param_1 + 2,(char *)0x33b9b24,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_c,1,0);
  return;
}



/* Function: FUN_00417698 */

uint * __thiscall FUN_00417698(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_0041896f(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00417777;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_00417767:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00417767;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00417777:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0041779d */

void __thiscall FUN_0041779d(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00417698(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0040c135((uint *)((int)this + 8),(char *)0x3667c98,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_10,(uint)param_1,0);
  return;
}



/* Function: FUN_004177f6 */

void __fastcall FUN_004177f6(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00418a48(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040c135(param_1 + 2,(char *)0x2af34f1,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_0041784c */

void __fastcall FUN_0041784c(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00418b4d(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0040c135(param_1 + 2,(char *)0x2af34ec,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_004178a2 */

undefined4 * __thiscall FUN_004178a2(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00417906 */

undefined4 * __thiscall FUN_00417906(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_0040afcf((void *)((int)this + 0x14));
  FUN_0040b943((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_0041796a */

uint * __thiscall FUN_0041796a(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_00418c52(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00417a49;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_00417a39:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00417a39;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00417a49:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00417a6f */

void __thiscall FUN_00417a6f(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10 [3];
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0041796a(this,local_10);
    uVar2 = *puVar1;
  }
  local_14 = 2;
  local_18 = 0;
  FUN_0040c135((uint *)((int)this + 8),(char *)0x28f3bc5,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_18,(uint)param_1,3);
  return;
}



/* Function: FUN_00417ad2 */

uint * __thiscall FUN_00417ad2(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_00418d13(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00417bb1;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_00417ba1:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00417ba1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00417bb1:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00417bd7 */

void __thiscall FUN_00417bd7(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10 [3];
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00417ad2(this,local_10);
    uVar2 = *puVar1;
  }
  local_14 = 2;
  local_18 = 0;
  FUN_0040c135((uint *)((int)this + 8),(char *)0x3250252,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_18,(uint)param_1,3);
  return;
}



/* Function: FUN_00417c3a */

uint * __thiscall FUN_00417c3a(void *this,uint *param_1)

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
  iVar1 = FUN_0040bf90();
  local_c = iVar1;
  FUN_00418dd4(local_1c,&local_8);
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
  if (((uVar5 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00417d22;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_c == 0) || (local_c != DAT_0042018c)) {
LAB_00417d10:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffff7c1;
    UNLOCK();
  }
  else {
    local_14 = 0;
    local_10 = this;
    uVar3 = FUN_00409dd2(&DAT_004201a8,&local_14,8);
    if ((char)uVar3 == '\0') goto LAB_00417d10;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00417d22:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00417d48 */

void __thiscall FUN_00417d48(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00417c3a(this,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_0040c135((uint *)((int)this + 8),(char *)0x31fc11f,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_c,(uint)param_1,3);
  return;
}



/* Function: FUN_00417da2 */

void __thiscall FUN_00417da2(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  FARPROC pFVar2;
  HMODULE hModule;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *lpProcName;
  undefined4 local_74;
  undefined4 auStack_70 [12];
  undefined4 local_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  LPVOID pvStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&local_74;
  memset(local_40,0,0x30);
  local_74 = *(undefined4 *)((int)this + 0x88);
  uVar1 = *(undefined4 *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x88) = 0;
  if (DAT_004205f8 == (FARPROC)0x0) {
    lpProcName = "TestQueryData";
    hModule = (HMODULE)FUN_004127bc();
    DAT_004205f8 = GetProcAddress(hModule,lpProcName);
    if (DAT_004205f8 == (FARPROC)0x0) {
      memset(auStack_70,0,0x30);
      puVar4 = auStack_70;
      puVar5 = local_40;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      goto LAB_00417e68;
    }
  }
  pFVar2 = DAT_004205f8;
  (*(code *)PTR_guard_check_icall_00421328)(local_74,param_1,uVar1,local_40);
  iVar3 = (*pFVar2)();
  if (iVar3 != 0) {
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | uStack_2c;
    if (pvStack_28 == (LPVOID)0x0) {
      *(undefined4 *)((int)this + 0x6c) = uStack_30;
    }
    FUN_00418e42((undefined4 *)this,extraout_EDX,uStack_20,uStack_1c);
  }
LAB_00417e68:
  CoTaskMemFree(pvStack_28);
  FUN_0041e250(local_c ^ (uint)&local_74,extraout_EDX_00);
  return;
}



/* Function: FUN_00417e8c */

void __fastcall FUN_00417e8c(void *param_1,undefined4 param_2,void *param_3,uint param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  void *this;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 auStack_ec [4];
  undefined1 local_e8 [4];
  uint local_e4;
  char *local_e0;
  int local_dc;
  char *local_d8;
  undefined4 *local_d4;
  void *local_d0;
  void *local_cc;
  char *local_c8;
  undefined1 local_c4;
  int local_c0;
  char *local_b4;
  undefined1 local_b0;
  int local_ac;
  undefined *local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined *local_90;
  undefined1 local_8c;
  char local_84;
  int local_18;
  void *local_14;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)auStack_ec;
  local_cc = param_3;
  local_d0 = param_1;
  if (param_4 != 0) {
    FUN_004124a0(&local_90,param_3);
    if (((param_4 & 4) != 0) && (*(char *)((int)param_1 + 0x15) != '\0')) {
      local_e0 = "version";
      local_dc = CONCAT31(local_dc._1_3_,7);
      local_d8 = (char *)((int)param_1 + 0x15);
      FUN_0041a4fe(&local_90,&local_e0);
    }
    if ((param_4 & 1) != 0) {
      if ((*(uint *)((int)param_1 + 0xc) & 0x40000) != 0) {
        this = *(void **)((int)param_1 + 4);
        if (this == (void *)0x0) {
          this = *(void **)((int)param_1 + 0x10);
        }
        puVar1 = FUN_00412295(this,&local_c8);
        local_a4 = 4;
        local_a8 = &DAT_004025f8;
        local_a0 = *puVar1;
        uStack_9c = puVar1[1];
        uStack_98 = puVar1[2];
        local_90 = &DAT_004025f8;
        local_8c = 4;
        FUN_0041ced1(&local_90,&local_a0);
      }
      local_ac = (int)param_1 + 0x40;
      local_b4 = "flags";
      local_c0 = (int)param_1 + 0x28;
      local_b0 = 5;
      local_c8 = "errors";
      local_c4 = 6;
      local_90 = &DAT_004027fc;
      local_8c = 3;
      FUN_00412518(&local_90);
      local_e4 = *(uint *)((int)param_1 + 0x3c);
      FUN_0041d01f(&local_90,&local_e4);
      puVar1 = *(undefined4 **)((int)param_1 + 0x34);
      local_d4 = puVar1 + *(int *)((int)param_1 + 0x3c);
      if (puVar1 != local_d4) {
        local_e8[0] = 0x17;
        do {
          piVar2 = FUN_00412295((void *)*puVar1,&local_a8);
          local_e0 = (char *)*piVar2;
          local_dc = piVar2[1];
          local_d8 = (char *)piVar2[2];
          uVar3 = FUN_00412304(&local_90,local_e0 == (char *)0x0);
          if ((char)uVar3 != '\0') {
            FUN_0041a3e9(local_14,local_e8);
            FUN_00412424(&local_90,local_dc,local_e0,local_dc);
          }
          puVar1 = puVar1 + 1;
          param_1 = local_d0;
        } while (puVar1 != local_d4);
      }
      FUN_00412542((int)&local_90);
      FUN_0041cb8c(&local_90,&local_c8,&local_b4);
    }
    FUN_00419052(param_1,&local_90,param_4);
    param_2 = extraout_EDX;
    if (((local_18 < 0) || (local_84 != '\0')) ||
       (iVar4 = FUN_004121c6((int)local_14), param_2 = extraout_EDX_00, iVar4 < 0)) {
      *(uint *)((int)param_1 + 0x24) = *(uint *)((int)param_1 + 0x24) | 0x100000;
    }
  }
  FUN_0041e250(local_c ^ (uint)auStack_ec,param_2);
  return;
}



/* Function: FUN_0041809d */

void __fastcall FUN_0041809d(int param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0041284a(*(int *)(param_1 + 0x88));
  }
  FUN_00418127((int *)(param_1 + 4));
  return;
}



/* Function: FUN_004180cb */

void __fastcall FUN_004180cb(int *param_1)

{
  uint *puVar1;
  LPVOID lpMem;
  HANDLE hHeap;
  int iVar2;
  uint local_8;
  
  iVar2 = 0;
  puVar1 = (uint *)(param_1 + 2);
  if (*param_1 != 0) {
    local_8 = 0;
    if (*puVar1 != 0) {
      do {
        PropVariantClear((PROPVARIANT *)(*param_1 + 8 + iVar2));
        iVar2 = iVar2 + 0x58;
        local_8 = local_8 + 1;
      } while (local_8 < *puVar1);
    }
    lpMem = (LPVOID)*param_1;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
    *param_1 = 0;
  }
  param_1[1] = 0;
  *puVar1 = 0;
  return;
}



/* Function: FUN_00418127 */

void __fastcall FUN_00418127(int *param_1)

{
  FUN_004180cb(param_1 + 0xf);
  FUN_004190b8(param_1 + 0xc);
  FUN_004191da(param_1 + 9);
  if (*param_1 != 0) {
    CoTaskMemFree((LPVOID)*param_1);
  }
  return;
}



/* Function: FUN_00418159 */

uint * __thiscall FUN_00418159(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_00419234(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00418238;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_00418228:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00418228;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00418238:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0041825e */

uint * FUN_0041825e(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040bfab(0x3667ca2,3,param_2);
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
    if (uVar3 == 0) goto LAB_00418315;
    bVar1 = false;
  }
  uVar3 = FUN_0041670d(&DAT_004207c8);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    FUN_0041748e((uint *)&DAT_00420760);
  }
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00418315:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00418337 */

uint * FUN_00418337(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040bfab(0x33b9b30,3,param_2);
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
    if (uVar3 == 0) goto LAB_004183ee;
    bVar1 = false;
  }
  uVar3 = FUN_004166d5(&DAT_004206b8);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    FUN_0041784c((uint *)&DAT_00420780);
  }
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_004183ee:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00418410 */

uint * FUN_00418410(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_0040bfab(0x33b9b29,3,param_2);
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
    FUN_00417642((uint *)&DAT_004206c8);
    FUN_004172da((uint *)&DAT_004206e8);
    bVar1 = true;
  }
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar1)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_004184c6 */

uint * __thiscall FUN_004184c6(void *this,uint *param_1)

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
  local_c = FUN_0040bf90();
  FUN_004192a3(local_1c,&local_8);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_004185a5;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_c == 0) || (local_c != DAT_0042018c)) {
LAB_00418595:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_14 = 3;
    local_10 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_14,8);
    if ((char)uVar2 == '\0') goto LAB_00418595;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_004185a5:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004185cb */

uint * FUN_004185cb(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040bfab(0x3667c9a,3,param_2);
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
    if (uVar3 == 0) goto LAB_00418682;
    bVar1 = false;
  }
  uVar3 = FUN_0041677d(&DAT_00420790);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    FUN_00416e6a((uint *)&DAT_004207a0);
  }
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00418682:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_004186a4 */

uint * __thiscall FUN_004186a4(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_00419312(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00418783;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_00418773:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00418773;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00418783:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004187a9 */

uint * FUN_004187a9(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_0040bfab(0x30483c4,3,param_2);
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
    if (uVar4 == 0) goto LAB_00418848;
    bVar1 = false;
  }
  uVar4 = FUN_00416665(&DAT_004207b8);
  cVar2 = (char)uVar4;
  if ((bVar1) && (cVar2 == '\0')) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00418848:
  uVar4 = 1;
  if (((*param_1 & 0x40) == 0) || (cVar2 == '\0')) {
    uVar4 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar4;
  return param_1;
}



/* Function: FUN_0041886a */

uint * __thiscall FUN_0041886a(void *this,uint *param_1)

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
  local_c = FUN_0040bf90();
  FUN_00419381(local_1c,&local_8);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00418949;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_c == 0) || (local_c != DAT_0042018c)) {
LAB_00418939:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_14 = 3;
    local_10 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_14,8);
    if ((char)uVar2 == '\0') goto LAB_00418939;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00418949:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0041896f */

uint * FUN_0041896f(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0040bfab(0x3667c98,3,param_2);
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
    if (uVar3 == 0) goto LAB_00418a26;
    bVar1 = false;
  }
  uVar3 = FUN_0041669d(&DAT_00420770);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    FUN_004177f6((uint *)&DAT_00420750);
  }
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00418a26:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00418a48 */

uint * __thiscall FUN_00418a48(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_004193f0(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00418b27;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_00418b17:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00418b17;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00418b27:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00418b4d */

uint * __thiscall FUN_00418b4d(void *this,uint *param_1)

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
  local_10 = FUN_0040bf90();
  FUN_0041945f(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0042017c == '\0')) goto LAB_00418c2c;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00420180);
  if ((local_10 == 0) || (local_10 != DAT_0042018c)) {
LAB_00418c1c:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00409dd2(&DAT_004201a8,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00418c1c;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00420180);
LAB_00418c2c:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00418c52 */

uint * FUN_00418c52(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_0040bfab(0x28f3bc5,3,param_2);
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
    if (uVar4 == 0) goto LAB_00418cf1;
    bVar1 = false;
  }
  uVar4 = FUN_0041670d(&DAT_004207c8);
  cVar2 = (char)uVar4;
  if ((bVar1) && (cVar2 == '\0')) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00418cf1:
  uVar4 = 1;
  if (((*param_1 & 0x40) == 0) || (cVar2 == '\0')) {
    uVar4 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar4;
  return param_1;
}



/* Function: FUN_00418d13 */

uint * FUN_00418d13(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_0040bfab(0x3250252,3,param_2);
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
    if (uVar4 == 0) goto LAB_00418db2;
    bVar1 = false;
  }
  uVar4 = FUN_00416745(&DAT_004206a8);
  cVar2 = (char)uVar4;
  if ((bVar1) && (cVar2 == '\0')) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00418db2:
  uVar4 = 1;
  if (((*param_1 & 0x40) == 0) || (cVar2 == '\0')) {
    uVar4 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar4;
  return param_1;
}



/* Function: FUN_00418dd4 */

uint * FUN_00418dd4(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040bfab(0x31fc11f,0,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00418e42 */

void __fastcall
FUN_00418e42(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *extraout_ECX;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar8;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_87c;
  undefined4 local_878;
  undefined4 local_874;
  undefined4 local_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  uint local_860;
  undefined1 local_85c;
  undefined2 local_85a;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined2 local_83c;
  undefined4 local_830;
  undefined4 local_82c;
  LPVOID local_824 [519];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  if ((*(char *)(param_1 + 0x17) == '\0') &&
     (uVar4 = FUN_0041291e((int)(param_1 + 1),(short *)param_1[6],(short *)param_1[8],
                           (short *)param_1[7]), param_2 = extraout_EDX, (char)uVar4 != '\0')) {
    FUN_00419531(param_1);
    param_2 = extraout_EDX_00;
  }
  cVar1 = *(char *)(param_1 + 0x17);
  if (cVar1 == '\x05') goto LAB_0041903b;
  bVar3 = 0;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x17) = 3;
    *(undefined2 *)((int)param_1 + 0x5e) = 0x400a;
    param_1[0x18] = 0;
LAB_00418ec0:
    if ((param_1[9] & 0x800) != 0) {
      bVar3 = 1;
    }
  }
  else if (((cVar1 == '\x02') || (cVar1 == '\x03')) ||
          (((param_1[3] & 0x1000) != 0 && (cVar1 != '\x04')))) goto LAB_00418ec0;
  uVar2 = param_1[3];
  uVar10 = bVar3 | 2;
  if ((uVar2 >> 9 & 1) == 0) {
    uVar10 = (uint)bVar3;
  }
  FUN_00412189(local_824);
  uVar5 = uVar10 | 4;
  if ((uVar2 >> 9 & 1) == 0 && bVar3 == 0) {
    uVar5 = uVar10;
  }
  uVar4 = FUN_00417e8c(param_1,extraout_EDX_01,extraout_ECX,uVar5);
  memset(&local_87c,0,0x58);
  iVar8 = param_1[0x1a];
  local_87c = iVar8;
  if (iVar8 == 0) {
    local_87c = param_1[2];
  }
  local_878 = param_1[4];
  local_874 = param_1[3];
  local_870 = param_1[0x13];
  uStack_86c = param_1[0x14];
  uStack_868 = param_1[0x15];
  uStack_864 = param_1[0x16];
  local_850 = param_4;
  local_860 = param_1[9] | 0x200000;
  local_85c = *(undefined1 *)(param_1 + 0x17);
  local_85a = *(undefined2 *)((int)param_1 + 0x5e);
  local_858 = param_1[0x18];
  local_854 = param_3;
  local_830 = param_1[0x19];
  if (iVar8 == 0) {
    local_82c = 0;
  }
  else {
    local_82c = param_1[2];
  }
  iVar7 = 0;
  iVar8 = param_1[10];
  iVar11 = param_1[0xc] * 0x60 + iVar8;
  iVar9 = 0;
  if (iVar8 != iVar11) {
    do {
      iVar6 = *(int *)(iVar8 + 8);
      if (iVar9 != iVar6) {
        iVar7 = iVar8;
      }
      iVar8 = iVar8 + 0x60;
      if (iVar9 == iVar6) {
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
    } while (iVar8 != iVar11);
    if (iVar7 != 0) {
      local_844 = *(undefined4 *)(iVar7 + 8);
      local_840 = *(undefined4 *)(iVar7 + 0x24);
      local_83c = *(undefined2 *)(iVar7 + 0x28);
    }
  }
  local_848 = uVar4;
  FUN_0041288f();
  FUN_004194ce(param_1,(int)&local_87c);
  param_2 = extraout_EDX_02;
  if (local_824[0] != (LPVOID)0x0) {
    CoTaskMemFree(local_824[0]);
    param_2 = extraout_EDX_03;
  }
LAB_0041903b:
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00419052 */

void __thiscall FUN_00419052(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_00420674;
                    /* WARNING: Load size is inaccurate */
  if (DAT_00420674 == (code *)0x0) {
    pcVar1 = *(code **)(**this + 4);
    (*(code *)PTR_guard_check_icall_00421328)(param_1,param_2);
    (*pcVar1)();
  }
  else {
    (*(code *)PTR_guard_check_icall_00421328)(*this,param_1,param_2,0,0);
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') {
      *(undefined4 *)((int)this + 0x60) = 0;
      *(undefined1 *)((int)this + 0x5c) = 3;
      *(undefined2 *)((int)this + 0x5e) = 0x400c;
    }
  }
  return;
}



/* Function: FUN_004190b8 */

void __fastcall FUN_004190b8(int *param_1)

{
  uint *puVar1;
  LPVOID lpMem;
  HANDLE hHeap;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 2);
  if (*param_1 != 0) {
    uVar2 = 0;
    if (*puVar1 != 0) {
      do {
        if (*(int *)(*param_1 + uVar2 * 4) != 0) {
          CoTaskMemFree(*(LPVOID *)(*param_1 + uVar2 * 4));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *puVar1);
    }
    lpMem = (LPVOID)*param_1;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
    *param_1 = 0;
  }
  *puVar1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: FUN_00419109 */

undefined4 __thiscall FUN_00419109(void *this,uint param_1)

{
  LPVOID lpMem;
  SIZE_T dwBytes;
  HANDLE pvVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  DWORD dwFlags;
  uint local_8;
  
  if (*(uint *)((int)this + 4) < param_1) {
    dwBytes = param_1 * 0x60;
    dwFlags = 0;
    pvVar1 = GetProcessHeap();
    pvVar2 = HeapAlloc(pvVar1,dwFlags,dwBytes);
    if (pvVar2 == (LPVOID)0x0) {
      return 0;
    }
                    /* WARNING: Load size is inaccurate */
    if (*this != 0) {
      local_8 = 0;
      if (*(int *)((int)this + 8) != 0) {
        puVar5 = (undefined4 *)((int)pvVar2 + 0x58);
        do {
                    /* WARNING: Load size is inaccurate */
          puVar4 = (undefined4 *)((int)puVar5 + *this + (-0x58 - (int)pvVar2));
          puVar6 = puVar4;
          puVar7 = puVar5 + -0x16;
          for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          *puVar5 = puVar4[0x16];
          puVar5[1] = puVar4[0x17];
          puVar4[0x16] = 0;
          puVar4[0x17] = 0;
                    /* WARNING: Load size is inaccurate */
          FUN_00407d87((undefined4 *)((int)puVar5 + *this + 0x58 + (-0x58 - (int)pvVar2)));
          puVar5 = puVar5 + 0x18;
          local_8 = local_8 + 1;
        } while (local_8 < *(uint *)((int)this + 8));
      }
                    /* WARNING: Load size is inaccurate */
      lpMem = *this;
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,0,lpMem);
    }
    *(LPVOID *)this = pvVar2;
    *(uint *)((int)this + 4) = param_1;
  }
  return CONCAT31((int3)(param_1 >> 8),1);
}



/* Function: FUN_004191da */

void __fastcall FUN_004191da(int *param_1)

{
  uint *puVar1;
  LPVOID lpMem;
  HANDLE hHeap;
  int iVar2;
  uint local_8;
  
  iVar2 = 0;
  puVar1 = (uint *)(param_1 + 2);
  if (*param_1 != 0) {
    local_8 = 0;
    if (*puVar1 != 0) {
      do {
        FUN_00407d87((undefined4 *)(*param_1 + 0x58 + iVar2));
        iVar2 = iVar2 + 0x60;
        local_8 = local_8 + 1;
      } while (local_8 < *puVar1);
    }
    lpMem = (LPVOID)*param_1;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
    *param_1 = 0;
  }
  param_1[1] = 0;
  *puVar1 = 0;
  return;
}



/* Function: FUN_00419234 */

uint * FUN_00419234(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040bfab(0x2af34f3,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_004192a3 */

uint * FUN_004192a3(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040bfab(0x2af34e9,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00419312 */

uint * FUN_00419312(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040bfab(0x2af34f6,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00419381 */

uint * FUN_00419381(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040bfab(0x33b9b24,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_004193f0 */

uint * FUN_004193f0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040bfab(0x2af34f1,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_0041945f */

uint * FUN_0041945f(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040bfab(0x2af34ec,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_004194ce */

void __thiscall FUN_004194ce(void *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_00420674;
                    /* WARNING: Load size is inaccurate */
  if (DAT_00420674 == (code *)0x0) {
    pcVar1 = *(code **)(**this + 0xc);
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    (*pcVar1)();
  }
  else {
    (*(code *)PTR_guard_check_icall_00421328)(*this,0,0,0,param_1);
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x20) = 3;
      *(undefined2 *)(param_1 + 0x22) = 0x400e;
      FUN_0041288f();
    }
  }
  return;
}



/* Function: FUN_00419531 */

void __fastcall FUN_00419531(undefined4 *param_1)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_00420674;
  if (DAT_00420674 == (code *)0x0) {
    pcVar1 = (code *)**(undefined4 **)*param_1;
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar1)();
  }
  else {
    (*(code *)PTR_guard_check_icall_00421328)((undefined4 *)*param_1,0,0,0,0);
    cVar2 = (*pcVar1)();
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0x17) == '\0')) {
      param_1[0x18] = 0;
      *(undefined1 *)(param_1 + 0x17) = 3;
      *(undefined2 *)((int)param_1 + 0x5e) = 0x400b;
    }
  }
  return;
}



/* Function: FUN_0041958b */

void __fastcall
FUN_0041958b(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_14;
  uint local_10;
  undefined4 local_c;
  
  local_14 = param_7;
  local_10 = FUN_00408021(param_7);
  local_c = 0;
  FUN_00419921(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_14);
  return;
}



/* Function: FUN_004195db */

void * __fastcall FUN_004195db(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint _MaxCount;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    _MaxCount = FUN_00408308(param_3);
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



/* Function: FUN_0041964b */

char * __fastcall FUN_0041964b(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *_MaxCount;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar1;
  
  pcVar1 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    _MaxCount = FUN_004082ea(param_3);
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



/* Function: FUN_004196ae */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_004196ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,short *param_8)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 local_1460;
  uint local_145c;
  int local_1458;
  uint local_1454;
  int local_1450;
  short *local_144c;
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
  
  uStack_c = 0x4196c0;
  local_1458 = *param_7;
  local_1008[0] = L'\0';
  local_1408[0] = 0;
  local_1454 = param_7[1];
  uStack_1434 = FUN_00407e10(local_1458);
  local_1460 = 3;
  local_145c = 0;
  if (param_7[2] == 1) {
    local_145c = 8;
  }
  LOCK();
  UNLOCK();
  local_1450 = DAT_004205bc + 1;
  if ((param_8 == (short *)0x0) || (*param_8 == 0)) {
    param_8 = (short *)0x0;
  }
  DAT_004205bc = DAT_004205bc + 1;
  local_144c = param_8;
  DStack_1448 = GetCurrentThreadId();
  pcVar1 = DAT_00420588;
  uStack_143c = param_3;
  uStack_1410 = param_6;
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
  if (DAT_00420588 == (code *)0x0) {
    uStack_1414 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00421328)();
    uStack_1414 = (*pcVar1)();
  }
  pcVar1 = DAT_00420554;
  if (DAT_00420554 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042056c;
  if (DAT_0042056c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(&local_1460,local_1408,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00420568;
  if (DAT_00420568 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_00420578;
  if ((DAT_00420578 != (code *)0x0) && ((local_145c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00421328)(&local_1460);
    (*pcVar1)();
  }
  if (-1 < local_1458) {
    local_1458 = -0x7fff0001;
    local_1454 = FUN_00408021(0x8000ffff);
  }
  pcVar1 = DAT_00420540;
  if (DAT_00420548 == '\0') {
    if (DAT_00420540 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00421328)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00419862;
  }
  else {
LAB_00419862:
    pcVar1 = DAT_0042054c;
    if ((local_145c & 2) == 0) {
      if ((DAT_0042054c != (code *)0x0) && (DAT_0042055c == '\0')) {
        (*(code *)PTR_guard_check_icall_00421328)(&local_1460,local_1008,0x800);
        (*pcVar1)();
      }
      if (local_1008[0] == L'\0') {
        FUN_00407a76(local_1008,0x800,(int)&local_1460);
      }
      OutputDebugStringW(local_1008);
      goto LAB_004198ed;
    }
  }
  pcVar1 = DAT_0042054c;
  if ((DAT_0042054c != (code *)0x0) && (DAT_0042055c == '\0')) {
    (*(code *)PTR_guard_check_icall_00421328)(&local_1460,0,0);
    (*pcVar1)();
  }
LAB_004198ed:
  pcVar1 = DAT_00420574;
  if ((((local_145c & 4) != 0) || (DAT_00420550 != '\0')) && (DAT_00420574 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar1)();
  }
  FUN_004087a0((int)&local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00419921 */

void __fastcall
FUN_00419921(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_0041b77b(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00419949 */

void __fastcall
FUN_00419949(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  FUN_0041b808(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Function: FUN_0041995a */

void __fastcall
FUN_0041995a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00408021(param_7);
  local_8 = 0;
  FUN_00419949(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_0041999d */

uint __fastcall
FUN_0041999d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 extraout_ECX;
  uint uVar1;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = param_7 & 0xffff | 0x80070000;
  if ((int)param_7 < 1) {
    uVar1 = param_7;
  }
  local_10 = uVar1;
  local_c = FUN_00408021(uVar1);
  local_8 = 0;
  FUN_00419949(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10);
  return uVar1;
}



/* Function: FUN_004199f4 */

uint __fastcall
FUN_004199f4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  DVar1 = FUN_004081f6(param_1,param_2,param_3,param_1,param_1,param_6);
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  local_10 = uVar2;
  local_c = FUN_00408021(uVar2);
  local_8 = 0;
  FUN_00419949(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10);
  return uVar2;
}



/* Function: FUN_00419a55 */

DWORD __thiscall FUN_00419a55(void *this)

{
  DWORD dwErrCode;
  int in_stack_00000010;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  dwErrCode = FUN_004081f6((int)this,0x5f,0x4026b0,this,this,in_stack_00000010);
  local_10 = dwErrCode & 0xffff | 0x80070000;
  if ((int)dwErrCode < 1) {
    local_10 = dwErrCode;
  }
  local_c = FUN_00408021(local_10);
  local_8 = 0;
  FUN_00419921((int)this,0x5f,0x4026b0,0,0,in_stack_00000010,(int *)&local_10);
  SetLastError(dwErrCode);
  return dwErrCode;
}



/* Function: FUN_00419ac1 */

undefined4 * __fastcall FUN_00419ac1(undefined4 *param_1,short *param_2,uint param_3)

{
  code *pcVar1;
  short *psVar2;
  HANDLE hHeap;
  undefined2 *_Dst;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if ((param_2 == (short *)0x0) && (param_3 == 0xffffffff)) {
    FUN_00408aec(unaff_retaddr,0xdaf,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h"
                );
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  uVar4 = param_3;
  if (param_2 != (short *)0x0) {
    psVar2 = param_2;
    uVar4 = 0x7fffffff;
    if (param_3 < 0x7fffffff) {
      uVar4 = param_3;
    }
    for (; (uVar4 != 0 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
      uVar4 = uVar4 - 1;
    }
    uVar4 = (int)psVar2 - (int)param_2 >> 1;
  }
  if (param_3 == 0xffffffff) {
    param_3 = uVar4;
  }
  dwBytes = param_3 * 2 + 2;
  dwFlags = 8;
  hHeap = GetProcessHeap();
  _Dst = (undefined2 *)HeapAlloc(hHeap,dwFlags,dwBytes);
  if (_Dst != (undefined2 *)0x0) {
    if (param_2 == (short *)0x0) {
      *_Dst = 0;
    }
    else {
      memcpy_s(_Dst,param_3 * 2 + 2,param_2,uVar4 * 2);
      _Dst[uVar4] = 0;
    }
    _Dst[param_3] = 0;
  }
  *param_1 = _Dst;
  return param_1;
}



/* Function: FUN_00419b83 */

void __fastcall FUN_00419b83(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00419bb0 */

void FUN_00419bb0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_0040b689((int)param_2);
  }
  return;
}



/* Function: FUN_00419bf0 */

void FUN_00419bf0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_0040a1e7(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00419c40 */

void FUN_00419c40(undefined4 param_1,char *param_2)

{
  FUN_0040bdd8(param_2);
  return;
}



/* Function: FUN_00419c60 */

undefined4 FUN_00419c60(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 *_Memory;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  puVar1 = (uint *)(param_1 + 0x18);
  uVar4 = *puVar1;
  *param_2 = 0;
  if ((int)uVar4 < 0) {
LAB_00419cec:
    _Memory = (undefined4 *)(uVar4 * 2);
    FUN_004071b5(_Memory + 2);
  }
  else {
    _Memory = FUN_00407313(param_1 + -8);
    if (_Memory == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    uVar2 = (int)_Memory >> 1 | 0x80000000;
    _Memory[3] = uVar4;
    LOCK();
    uVar3 = *puVar1;
    if (uVar4 == uVar3) {
      *puVar1 = uVar2;
      uVar3 = uVar4;
    }
    UNLOCK();
    bVar5 = uVar3 != uVar4;
    uVar4 = uVar3;
    if (bVar5) {
      do {
        if ((int)uVar4 < 0) {
          *_Memory = &PTR_FUN_004015d0;
          _Memory[3] = 0xc0000001;
          _Memory[2] = 0xc0000001;
          free(_Memory);
          goto LAB_00419cec;
        }
        _Memory[3] = uVar4;
        LOCK();
        uVar3 = *puVar1;
        if (uVar4 == uVar3) {
          *puVar1 = uVar2;
          uVar3 = uVar4;
        }
        UNLOCK();
        bVar5 = uVar3 != uVar4;
        uVar4 = uVar3;
      } while (bVar5);
    }
  }
  *param_2 = (int)_Memory;
  return 0;
}



/* Function: FUN_00419d08 */

void __fastcall FUN_00419d08(int param_1)

{
  if (*(int *)(param_1 + 0x20) < 0) {
    FUN_00415d40((int *)(*(int *)(param_1 + 0x20) * 2));
  }
  FUN_00414048((int *)(param_1 + 0x18));
  return;
}



/* Function: FUN_00419d2b */

void __fastcall FUN_00419d2b(undefined4 *param_1,undefined1 *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
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
  
  local_c = DAT_00420100 ^ (uint)auStack_5c;
  puVar2 = FUN_0040c383();
  puVar1 = *(uint **)(puVar2 + 4);
  uVar3 = extraout_EDX;
  if (5 < *puVar1) {
    local_55 = *param_2;
    local_54 = *param_1;
    local_20 = &local_55;
    local_1c = 0;
    local_18 = 1;
    local_14 = 0;
    FUN_00406c14(&local_54,local_30);
    FUN_004059c3((int)puVar1,&DAT_004049f1,(LPCGUID)0x0,(LPCGUID)0x0,4,local_50);
    uVar3 = extraout_EDX_00;
  }
  FUN_0041e250(local_c ^ (uint)auStack_5c,uVar3);
  return;
}



/* Function: FUN_00419dc0 */

undefined4 FUN_00419dc0(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 *_Memory;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  puVar1 = (uint *)(param_1 + 0x18);
  uVar4 = *puVar1;
  *param_2 = 0;
  if ((int)uVar4 < 0) {
LAB_00419e4c:
    _Memory = (undefined4 *)(uVar4 * 2);
    FUN_004071b5(_Memory + 2);
  }
  else {
    _Memory = FUN_00407313(param_1 + -4);
    if (_Memory == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    uVar2 = (int)_Memory >> 1 | 0x80000000;
    _Memory[3] = uVar4;
    LOCK();
    uVar3 = *puVar1;
    if (uVar4 == uVar3) {
      *puVar1 = uVar2;
      uVar3 = uVar4;
    }
    UNLOCK();
    bVar5 = uVar3 != uVar4;
    uVar4 = uVar3;
    if (bVar5) {
      do {
        if ((int)uVar4 < 0) {
          *_Memory = &PTR_FUN_004015d0;
          _Memory[3] = 0xc0000001;
          _Memory[2] = 0xc0000001;
          free(_Memory);
          goto LAB_00419e4c;
        }
        _Memory[3] = uVar4;
        LOCK();
        uVar3 = *puVar1;
        if (uVar4 == uVar3) {
          *puVar1 = uVar2;
          uVar3 = uVar4;
        }
        UNLOCK();
        bVar5 = uVar3 != uVar4;
        uVar4 = uVar3;
      } while (bVar5);
    }
  }
  *param_2 = (int)_Memory;
  return 0;
}



/* Function: FUN_00419e68 */

void __fastcall FUN_00419e68(int param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_00415d40((int *)(*(int *)(param_1 + 0x1c) * 2));
  }
  FUN_00414048((int *)(param_1 + 0x14));
  return;
}



/* Function: FUN_00419e8b */

int __fastcall FUN_00419e8b(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_0041e266(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    piVar2 = FUN_00419ee3(puVar1);
    piVar2[9] = *param_2;
    local_8 = piVar2;
    iVar3 = FUN_0041bc07(&local_8,param_1);
    FUN_004152e0(piVar2);
  }
  return iVar3;
}



/* Function: FUN_00419ee3 */

undefined4 * __fastcall FUN_00419ee3(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  
  puVar1 = param_1 + 2;
  FUN_00406f8e(puVar1);
  piVar3 = DAT_0042067c;
  param_1[7] = 1;
  *param_1 = &PTR_FUN_00401070;
  param_1[1] = &PTR_FUN_00401408;
  *puVar1 = &PTR_FUN_00401028;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar3);
    (*pcVar2)();
  }
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00401580;
  param_1[1] = &PTR_FUN_004013f8;
  *puVar1 = &PTR_FUN_004016e8;
  param_1[9] = 0;
  return param_1;
}



/* Function: FUN_00419f4f */

void __thiscall FUN_00419f4f(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = (short *)*param_1;
  if (psVar2 == (short *)0x0) {
                    /* WARNING: Load size is inaccurate */
    WindowsDeleteString(*this);
    *(undefined4 *)this = 0;
    WindowsCreateString(&DAT_00401d18,0,this);
  }
  else {
    psVar3 = psVar2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
                    /* WARNING: Load size is inaccurate */
    WindowsDeleteString(*this);
    *(undefined4 *)this = 0;
    WindowsCreateString(psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1,this);
  }
  return;
}



/* Function: FUN_00419fb9 */

undefined4 __thiscall FUN_00419fb9(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *local_8;
  
  piVar1 = (int *)*param_1;
  local_8 = (undefined4 *)this;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
  }
  *param_1 = 0;
  puVar3 = (undefined4 *)FUN_0041e266(0x28);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0x8007000e;
  }
  else {
    local_8 = FUN_0041c3e2(puVar3);
                    /* WARNING: Load size is inaccurate */
    local_8[9] = *this;
    pcVar2 = *(code **)*local_8;
    (*(code *)PTR_guard_check_icall_00421328)(local_8,&DAT_00402b7c,param_1);
    uVar4 = (*pcVar2)();
    FUN_00414048((int *)&local_8);
  }
  return uVar4;
}



/* Function: FUN_0041a039 */

int __thiscall FUN_0041a039(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *local_8;
  
  piVar1 = (int *)*param_1;
  local_8 = (undefined4 *)this;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
  }
  puVar3 = local_8;
  *param_1 = 0;
  puVar4 = (undefined4 *)FUN_0041e266(0x50);
  if (puVar4 == (undefined4 *)0x0) {
    iVar5 = -0x7ff8fff2;
  }
  else {
    puVar4 = FUN_0041bc81(puVar4);
    local_8 = puVar4;
    iVar5 = FUN_0040c1fb(puVar4,puVar3);
    if (-1 < iVar5) {
      pcVar2 = *(code **)*puVar4;
      (*(code *)PTR_guard_check_icall_00421328)(puVar4,&DAT_00402928,param_1);
      iVar5 = (*pcVar2)();
    }
    FUN_00414048((int *)&local_8);
  }
  return iVar5;
}



/* Function: FUN_0041a0ca */

void FUN_0041a0ca(void)

{
  uint *this;
  undefined *puVar1;
  uint uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 local_5c;
  undefined4 local_58;
  wchar_t *local_50;
  _EVENT_DATA_DESCRIPTOR local_4c [2];
  undefined4 local_2c [4];
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  puVar1 = FUN_0040dff6();
  this = *(uint **)(puVar1 + 4);
  uVar3 = extraout_EDX;
  if (5 < *this) {
    uVar2 = FUN_00405a58(this,0,0x2000);
    uVar3 = extraout_EDX_00;
    if ((char)uVar2 != '\0') {
      local_1c = &local_5c;
      local_5c = 0x3000000;
      local_58 = 0;
      local_50 = L"Creation of ViewModel failed as MIME_TYPE is invalid";
      local_18 = 0;
      local_14 = 8;
      local_10 = 0;
      FUN_00406c14(&local_50,local_2c);
      FUN_004059c3((int)this,&DAT_00404daf,(LPCGUID)0x0,(LPCGUID)0x0,4,local_4c);
      uVar3 = extraout_EDX_01;
    }
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0041a155 */

void __fastcall FUN_0041a155(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar1 = FUN_0040dff6();
  if (5 < **(uint **)(puVar1 + 4)) {
    uVar2 = FUN_00405a58(*(uint **)(puVar1 + 4),0,0x4000);
    if ((char)uVar2 != '\0') {
      local_10 = 0;
      local_8 = &local_14;
      local_c = *param_1;
      local_14 = 0x1000000;
      FUN_00406bb3(extraout_ECX,&DAT_00404403,extraout_ECX,extraout_ECX,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_0041a1b0 */

void __fastcall FUN_0041a1b0(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar1 = FUN_0040dff6();
  if (5 < **(uint **)(puVar1 + 4)) {
    uVar2 = FUN_00405a58(*(uint **)(puVar1 + 4),0,0x2000);
    if ((char)uVar2 != '\0') {
      local_10 = 0;
      local_8 = &local_14;
      local_c = *param_1;
      local_14 = 0x2000000;
      FUN_00406bb3(extraout_ECX,&DAT_00403454,extraout_ECX,extraout_ECX,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_0041a20b */

void __fastcall FUN_0041a20b(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  _EVENT_DATA_DESCRIPTOR local_70 [2];
  undefined1 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  puVar1 = FUN_0040dff6();
  uVar3 = extraout_EDX;
  if (5 < **(uint **)(puVar1 + 4)) {
    uVar2 = FUN_00405a58(*(uint **)(puVar1 + 4),0,0x2000);
    uVar3 = extraout_EDX_00;
    if ((char)uVar2 != '\0') {
      local_80 = 0x1000000;
      local_7c = 0;
      local_1c = 0;
      local_71 = *param_3;
      local_72 = *param_2;
      local_73 = *param_1;
      local_20 = &local_80;
      local_30 = &local_71;
      local_40 = &local_72;
      local_50 = &local_73;
      local_18 = 8;
      local_14 = 0;
      local_2c = 0;
      local_28 = 1;
      local_24 = 0;
      local_3c = 0;
      local_38 = 1;
      local_34 = 0;
      local_4c = 0;
      local_48 = 1;
      local_44 = 0;
      FUN_004059c3(extraout_ECX,&DAT_004052fb,(LPCGUID)0x0,(LPCGUID)0x0,6,local_70);
      uVar3 = extraout_EDX_01;
    }
  }
  FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0041a2d2 */

void __fastcall FUN_0041a2d2(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  
  piVar1 = (int *)*param_3;
  if (piVar1 != (int *)0x0) {
    *param_3 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
  }
  DVar3 = FUN_0041c75a(param_1,param_2,param_4);
  if (-1 < (int)DVar3) {
    pcVar2 = *(code **)(*param_1 + 0x20);
    (*(code *)PTR_guard_check_icall_00421328)(param_1,param_3);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_0041a32f */

void __fastcall FUN_0041a32f(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *this;
  undefined *puVar1;
  uint uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  _EVENT_DATA_DESCRIPTOR local_60 [2];
  undefined4 local_40 [4];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)&local_6c;
  puVar1 = FUN_00410bbd();
  this = *(uint **)(puVar1 + 4);
  uVar3 = extraout_EDX;
  if (5 < *this) {
    uVar2 = FUN_00405a58(this,0,0x2000);
    uVar3 = extraout_EDX_00;
    if ((char)uVar2 != '\0') {
      local_18 = 4;
      local_6c = *param_3;
      local_68 = *param_2;
      local_64 = *param_1;
      local_20 = &local_6c;
      local_30 = &local_68;
      local_28 = 4;
      local_1c = 0;
      local_14 = 0;
      local_2c = 0;
      local_24 = 0;
      FUN_00406c14(&local_64,local_40);
      FUN_004059c3((int)this,&DAT_00404525,(LPCGUID)0x0,(LPCGUID)0x0,5,local_60);
      uVar3 = extraout_EDX_01;
    }
  }
  FUN_0041e250(local_c ^ (uint)&local_6c,uVar3);
  return;
}



/* Function: FUN_0041a3e9 */

undefined4 __thiscall FUN_0041a3e9(void *this,undefined1 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x80c);
  if ((*(uint *)((int)this + 0x810) <= uVar1) && (uVar1 = FUN_004120e0(this,1), (char)uVar1 == '\0')
     ) {
    return uVar1;
  }
  **(undefined1 **)((int)this + 0x80c) = *param_1;
  *(int *)((int)this + 0x80c) = *(int *)((int)this + 0x80c) + 1;
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_0041a42a */

undefined4 * __thiscall FUN_0041a42a(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  void *this_00;
  bool bVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = uVar1;
  cVar2 = *(char *)((int)param_1 + 5);
  bVar3 = FUN_004123f3(this,cVar2 == '\0');
  if (bVar3) {
    this_00 = *(void **)((int)this + 0x7c);
    if ((*(uint *)((int)this_00 + 0x810) <= *(uint *)((int)this_00 + 0x80c)) &&
       (uVar4 = FUN_004120e0(this_00,1), (char)uVar4 == '\0')) {
      return (undefined4 *)this;
    }
    **(char **)((int)this_00 + 0x80c) = cVar2;
    *(int *)((int)this_00 + 0x80c) = *(int *)((int)this_00 + 0x80c) + 1;
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041a493 */

undefined4 * __thiscall FUN_0041a493(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  void *this_00;
  bool bVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = uVar1;
  cVar2 = *(char *)param_1[2];
  bVar3 = FUN_004123f3(this,cVar2 == '\0');
  if (bVar3) {
    this_00 = *(void **)((int)this + 0x7c);
    if ((*(uint *)((int)this_00 + 0x810) <= *(uint *)((int)this_00 + 0x80c)) &&
       (uVar4 = FUN_004120e0(this_00,1), (char)uVar4 == '\0')) {
      return (undefined4 *)this;
    }
    **(char **)((int)this_00 + 0x80c) = cVar2;
    *(int *)((int)this_00 + 0x80c) = *(int *)((int)this_00 + 0x80c) + 1;
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041a4fe */

undefined4 * __thiscall FUN_0041a4fe(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  char local_8;
  undefined3 uStack_7;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = uVar1;
  _local_8 = CONCAT31((int3)((uint)this >> 8),*(char *)param_1[2]);
  bVar2 = FUN_004123f3(this,*(char *)param_1[2] == '\0');
  if (bVar2) {
    FUN_0041a3e9(*(void **)((int)this + 0x7c),&local_8);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041a54b */

undefined4 * __thiscall FUN_0041a54b(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = uVar1;
  local_10 = *(int *)param_1[2];
  local_c = ((int *)param_1[2])[1];
  if (local_10 != 0 || local_c != 0) {
    local_8 = (uint)local_8._1_3_ << 8;
  }
  bVar2 = FUN_004123f3(this,(char)local_8);
  if (bVar2) {
    FUN_0041223e(*(void **)((int)this + 0x7c),&local_10,8);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041a5ac */

undefined4 * __thiscall FUN_0041a5ac(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = uVar1;
  local_10 = *(int *)param_1[2];
  local_c = ((int *)param_1[2])[1];
  if (local_10 != 0 || local_c != 0) {
    local_8 = (uint)local_8._1_3_ << 8;
  }
  bVar2 = FUN_004123f3(this,(char)local_8);
  if (bVar2) {
    FUN_0041223e(*(void **)((int)this + 0x7c),&local_10,8);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041a60d */

int * FUN_0041a60d(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00421328)(piVar1);
    (*pcVar2)();
  }
  return param_1;
}



/* Function: FUN_0041a640 */

undefined4 * FUN_0041a640(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_0041e266(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[2] = 1;
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_00401188;
    puVar2 = PTR_FUN_0040118c;
    local_c = puVar3;
    (*(code *)PTR_guard_check_icall_00421328)(puVar3);
    (*(code *)puVar2)();
    local_8 = puVar3;
    FUN_00414048((int *)&local_c);
    puVar3[4] = *(undefined4 *)param_1;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_00421328)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_c = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0042067c + 4);
        (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
        (*pcVar1)();
        puVar4 = local_c;
      }
    }
  }
  FUN_00414048((int *)&local_8);
  return puVar4;
}



/* Function: FUN_0041a710 */

undefined4 * FUN_0041a710(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_0041e266(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[2] = 1;
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_00401344;
    puVar2 = PTR_FUN_00401348;
    local_c = puVar3;
    (*(code *)PTR_guard_check_icall_00421328)(puVar3);
    (*(code *)puVar2)();
    local_8 = puVar3;
    FUN_00414048((int *)&local_c);
    puVar3[4] = *(undefined4 *)param_1;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_00421328)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_c = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0042067c + 4);
        (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
        (*pcVar1)();
        puVar4 = local_c;
      }
    }
  }
  FUN_00414048((int *)&local_8);
  return puVar4;
}



/* Function: FUN_0041a7e0 */

undefined4 * FUN_0041a7e0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_0041e266(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[2] = 1;
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_00401058;
    puVar2 = PTR_FUN_0040105c;
    local_c = puVar3;
    (*(code *)PTR_guard_check_icall_00421328)(puVar3);
    (*(code *)puVar2)();
    local_8 = puVar3;
    FUN_00414048((int *)&local_c);
    puVar3[4] = *(undefined4 *)param_1;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_00421328)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_c = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0042067c + 4);
        (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
        (*pcVar1)();
        puVar4 = local_c;
      }
    }
  }
  FUN_00414048((int *)&local_8);
  return puVar4;
}



/* Function: FUN_0041a8b0 */

undefined4 * FUN_0041a8b0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_0041e266(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[2] = 1;
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_004016a4;
    puVar2 = PTR_FUN_004016a8;
    local_c = puVar3;
    (*(code *)PTR_guard_check_icall_00421328)(puVar3);
    (*(code *)puVar2)();
    local_8 = puVar3;
    FUN_00414048((int *)&local_c);
    puVar3[4] = *(undefined4 *)param_1;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_00421328)(puVar3,param_3,param_4);
    puVar4 = (undefined4 *)(*pcVar1)();
    local_c = puVar4;
    if ((*param_1 & 1) != 0) {
      if ((int)puVar4 < 0) {
        puVar3[4] = puVar3[4] & 0xfffffffa;
      }
      else if ((*param_1 & 4) == 0) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        pcVar1 = *(code **)(*DAT_0042067c + 4);
        (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
        (*pcVar1)();
        puVar4 = local_c;
      }
    }
  }
  FUN_00414048((int *)&local_8);
  return puVar4;
}



/* Function: FUN_0041a97b */

HRESULT __fastcall FUN_0041a97b(undefined4 param_1,IID *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  IID *local_c;
  int local_8;
  
  uVar2 = 0;
  iVar1 = param_4 - (int)param_3;
  local_8 = 0;
  local_c = param_2;
  do {
    if (local_8 < 0) goto LAB_0041a9de;
    local_8 = CoRegisterClassObject(local_c,(LPUNKNOWN)*param_3,4,4,(LPDWORD)(iVar1 + (int)param_3))
    ;
    uVar2 = uVar2 + 1;
    local_c = local_c + 1;
    param_3 = param_3 + 1;
  } while (uVar2 == 0);
  if ((local_8 < 0) || (local_8 = CoResumeClassObjects(), local_8 < 0)) {
LAB_0041a9de:
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        CoRevokeClassObject(*(DWORD *)(param_4 + uVar3 * 4));
        *(undefined4 *)(param_4 + uVar3 * 4) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  return local_8;
}



/* Function: FUN_0041aa0b */

undefined4 __fastcall FUN_0041aa0b(int *param_1,HANDLE param_2)

{
  void *pvVar1;
  BOOL BVar2;
  DWORD DVar3;
  void *pvVar4;
  undefined4 uVar5;
  int unaff_retaddr;
  int *local_8;
  
  uVar5 = 0;
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 != (void *)0x0) {
    local_8 = param_1;
    free(pvVar4);
  }
  local_8 = (int *)0x0;
  if (param_2 == (HANDLE)0x0) {
    param_2 = (HANDLE)0xfffffffa;
  }
  BVar2 = GetTokenInformation(param_2,TokenIntegrityLevel,(LPVOID)0x0,0,(PDWORD)&local_8);
  if ((BVar2 == 0) && (DVar3 = GetLastError(), DVar3 == 0x7a)) {
    pvVar4 = (void *)FUN_0041e266((size_t)local_8);
    if (pvVar4 == (LPVOID)0x0) {
      uVar5 = 0x8007000e;
      FUN_0040899b(unaff_retaddr,0x119,
                   "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\token_helpers.h",0x8007000e);
    }
    else {
      BVar2 = GetTokenInformation(param_2,TokenIntegrityLevel,pvVar4,(DWORD)local_8,(PDWORD)&local_8
                                 );
      if (BVar2 == 0) {
        uVar5 = FUN_004089d9(unaff_retaddr,0x11a,0x402544);
      }
      else {
        pvVar1 = (void *)*param_1;
        *param_1 = (int)pvVar4;
        pvVar4 = pvVar1;
      }
    }
    if (pvVar4 != (void *)0x0) {
      free(pvVar4);
    }
  }
  else {
    uVar5 = FUN_004089d9(unaff_retaddr,0x117,0x402544);
  }
  return uVar5;
}



/* Function: FUN_0041aae7 */

int __fastcall FUN_0041aae7(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 local_34;
  undefined4 *local_30;
  int *local_2c;
  int *local_28;
  uint local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  int local_c;
  void *local_8;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
  iVar7 = 0;
  local_c = 0;
  local_18 = param_1;
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  iVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*local_18 + 0x14);
  (*(code *)PTR_guard_check_icall_00421328)(local_18);
  local_14 = (int *)(*pcVar1)();
  local_2c = (int *)(iVar2 + 4);
  piVar4 = local_2c;
  uVar10 = 0;
  if (local_2c < local_14) {
    do {
      uVar8 = uVar10 + 1;
      if (*piVar4 == 0) {
        uVar8 = uVar10;
      }
      piVar4 = piVar4 + 1;
      uVar10 = uVar8;
    } while (piVar4 < local_14);
    if (uVar8 != 0) {
      local_10 = (void *)FUN_0041e39c(-(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) |
                                      (uint)((ulonglong)uVar8 * 4));
      local_8 = (void *)FUN_0041e39c(-(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) |
                                     (uint)((ulonglong)uVar8 * 4));
      local_30 = (undefined4 *)
                 FUN_0041e39c(-(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar8 * 0x10));
      if (((local_10 == (void *)0x0) || (local_8 == (void *)0x0)) || (local_30 == (undefined4 *)0x0)
         ) {
        iVar7 = -0x7ff8fff2;
      }
      else {
        uVar10 = 0;
        local_24 = 0;
        local_1c = local_2c;
        local_28 = local_30;
        do {
          if (iVar7 < 0) goto LAB_0041aca0;
          puVar6 = (undefined4 *)*local_1c;
          if (puVar6 != (undefined4 *)0x0) {
            local_20 = 0;
            local_34 = 2;
            pcVar1 = (code *)*puVar6;
            (*(code *)PTR_guard_check_icall_00421328)(&local_34,puVar6,&DAT_00402b44,&local_20);
            iVar7 = (*pcVar1)();
            local_c = iVar7;
            if (-1 < iVar7) {
              *(undefined4 *)((int)local_8 + uVar10 * 4) = local_20;
              puVar6 = *(undefined4 **)(*local_1c + 4);
              *local_28 = *puVar6;
              local_28[1] = puVar6[1];
              local_28[2] = puVar6[2];
              local_28[3] = puVar6[3];
              uVar10 = local_24 + 1;
              local_28 = local_28 + 4;
              local_24 = uVar10;
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_14);
        if (-1 < iVar7) {
          pcVar1 = *(code **)(*local_18 + 0x28);
          (*(code *)PTR_guard_check_icall_00421328)(local_18,0,local_30,local_8,local_10,uVar8);
          iVar7 = (*pcVar1)();
          local_c = iVar7;
          if (-1 < iVar7) {
            uVar10 = 0;
            piVar4 = local_2c;
            do {
              if (*piVar4 != 0) {
                iVar2 = uVar10 * 4;
                uVar10 = uVar10 + 1;
                *(undefined4 *)(*(int *)(*piVar4 + 0xc) + 4) =
                     *(undefined4 *)((int)local_10 + iVar2);
              }
              piVar4 = piVar4 + 1;
            } while (piVar4 < local_14);
          }
        }
LAB_0041aca0:
        if (uVar10 != 0) {
          uVar8 = 0;
          do {
            piVar4 = *(int **)((int)local_8 + uVar8 * 4);
            pcVar1 = *(code **)(*piVar4 + 8);
            (*(code *)PTR_guard_check_icall_00421328)(piVar4);
            (*pcVar1)();
            uVar8 = uVar8 + 1;
            iVar7 = local_c;
          } while (uVar8 < uVar10);
        }
      }
      free(local_10);
      free(local_30);
      free(local_8);
      if (iVar7 < 0) {
        return iVar7;
      }
    }
  }
  pcVar1 = *(code **)(*local_18 + 0x18);
  (*(code *)PTR_guard_check_icall_00421328)(local_18);
  piVar3 = (int *)(*pcVar1)();
  piVar9 = local_14 + 1;
  uVar10 = 0;
  piVar4 = piVar9;
  if (piVar9 < piVar3) {
    do {
      uVar8 = uVar10 + 1;
      if (*piVar4 == 0) {
        uVar8 = uVar10;
      }
      piVar4 = piVar4 + 1;
      uVar10 = uVar8;
    } while (piVar4 < piVar3);
    if (uVar8 != 0) {
      local_2c = piVar9;
      local_28 = piVar3;
      piVar4 = (int *)FUN_0041e39c(-(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) |
                                   (uint)((ulonglong)uVar8 * 4));
      local_1c = piVar4;
      if (piVar4 == (int *)0x0) {
        iVar7 = -0x7ff8fff2;
      }
      else if (-1 < iVar7) {
        local_24 = 0;
        puVar6 = (undefined4 *)0x0;
        local_30 = (undefined4 *)0x0;
        do {
          if (*piVar9 != 0) {
            pcVar1 = *(code **)(*piVar9 + 4);
            (*(code *)PTR_guard_check_icall_00421328)();
            uVar5 = (*pcVar1)();
            *(undefined4 *)((int)local_1c + (int)local_30 * 4) = uVar5;
            puVar6 = (undefined4 *)((int)local_30 + 1);
            piVar4 = local_1c;
            piVar3 = local_28;
            local_30 = puVar6;
          }
          piVar9 = piVar9 + 1;
        } while (piVar9 < piVar3);
        pcVar1 = *(code **)(*local_18 + 0x20);
        (*(code *)PTR_guard_check_icall_00421328)(local_18,0,piVar4,&local_24,puVar6);
        iVar7 = (*pcVar1)();
        piVar4 = local_2c;
        if (-1 < iVar7) {
          do {
            if (*piVar4 != 0) {
              *(uint *)(*(int *)(*piVar4 + 0xc) + 4) = local_24;
            }
            piVar4 = piVar4 + 1;
          } while (piVar4 < local_28);
        }
      }
      free(local_1c);
    }
  }
  return iVar7;
}



/* Function: FUN_0041ae09 */

int __fastcall FUN_0041ae09(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  void *_Memory;
  void *_Memory_00;
  short *psVar3;
  uint uVar4;
  int local_14;
  undefined4 *local_10;
  uint local_8;
  
  _Memory = (void *)FUN_0041e39c(-(uint)((int)((ulonglong)param_4 * 4 >> 0x20) != 0) |
                                 (uint)((ulonglong)param_4 * 4));
  _Memory_00 = (void *)FUN_0041e39c(-(uint)((int)((ulonglong)param_4 * 4 >> 0x20) != 0) |
                                    (uint)((ulonglong)param_4 * 4));
  uVar4 = 0;
  local_14 = 0;
  if ((_Memory == (void *)0x0) || (_Memory_00 == (void *)0x0)) {
    local_14 = -0x7ff8fff2;
    goto LAB_0041af0a;
  }
  local_8 = 0;
  if (param_4 == 0) {
LAB_0041aed5:
    local_14 = RoRegisterActivationFactories(_Memory_00,_Memory,param_4,param_3);
  }
  else {
    local_10 = param_2;
    do {
      if (local_14 < 0) goto LAB_0041aeeb;
      *(code **)(((int)_Memory - (int)param_2) + (int)local_10) = FUN_0041c1f0;
      psVar3 = (short *)*local_10;
      psVar1 = psVar3 + 1;
      do {
        sVar2 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar2 != 0);
      local_14 = WindowsCreateString(*local_10,(int)psVar3 - (int)psVar1 >> 1,
                                     ((int)_Memory_00 - (int)param_2) + (int)local_10);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < param_4);
    if (-1 < local_14) goto LAB_0041aed5;
  }
LAB_0041aeeb:
  if (local_8 != 0) {
    do {
      WindowsDeleteString(*(undefined4 *)((int)_Memory_00 + uVar4 * 4));
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_8);
  }
LAB_0041af0a:
  free(_Memory);
  free(_Memory_00);
  return local_14;
}



/* Function: FUN_0041af29 */

void __fastcall FUN_0041af29(uint *param_1,LPCGUID param_2)

{
  uint uVar1;
  int extraout_ECX;
  LPCGUID extraout_EDX;
  LPCGUID extraout_EDX_00;
  LPCGUID pGVar2;
  undefined1 auStack_34 [4];
  _EVENT_DATA_DESCRIPTOR local_30 [2];
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)auStack_34;
  pGVar2 = param_2;
  if (5 < *param_1) {
    uVar1 = FUN_00405a58(param_1,0,0x2000);
    pGVar2 = extraout_EDX;
    if ((char)uVar1 != '\0') {
      FUN_004059c3(extraout_ECX,&DAT_004031b9,param_2,(LPCGUID)0x0,2,local_30);
      pGVar2 = extraout_EDX_00;
    }
  }
  FUN_0041e250(local_c ^ (uint)auStack_34,pGVar2);
  return;
}



/* Function: FUN_0041af83 */

int __fastcall FUN_0041af83(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  *param_3 = 0;
  iVar2 = FUN_00406eb5(param_2,(int *)&DAT_00402a1c);
  if ((iVar2 != 0) || (iVar2 = FUN_00406eb5(extraout_ECX,&DAT_00402b7c), iVar2 != 0)) {
    *param_3 = param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    (*pcVar1)();
    return 0;
  }
  iVar2 = FUN_00406eb5(extraout_ECX_00,&DAT_00402b64);
  piVar3 = param_1;
  if (iVar2 == 0) {
    piVar3 = param_1 + 1;
    iVar2 = FUN_00406eb5(extraout_ECX_01,&DAT_00402c4c);
    if (iVar2 == 0) {
      iVar4 = FUN_00406f4e(param_1 + 2,extraout_ECX_02,param_3);
      if (iVar4 == -0x7fffbffe) {
        iVar4 = -0x7fffbffe;
      }
      if (iVar4 < 0) {
        return iVar4;
      }
      goto LAB_0041aff4;
    }
  }
  *param_3 = piVar3;
LAB_0041aff4:
  pcVar1 = *(code **)(*(int *)*param_3 + 4);
  (*(code *)PTR_guard_check_icall_00421328)((int *)*param_3);
  (*pcVar1)();
  return iVar4;
}



/* Function: FUN_0041b02b */

int __fastcall FUN_0041b02b(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_EDX;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  *param_3 = 0;
  iVar2 = FUN_00406eb5(param_2,(int *)&DAT_00402a1c);
  if ((iVar2 != 0) || (iVar2 = FUN_00406eb5(extraout_ECX,&DAT_00402b7c), iVar2 != 0)) {
    *param_3 = (int)param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    (*pcVar1)();
    return 0;
  }
  iVar2 = FUN_00406eb5(extraout_ECX_00,extraout_EDX);
  piVar3 = param_1;
  if (iVar2 == 0) {
    piVar3 = param_1 + 1;
    iVar2 = FUN_00406eb5(extraout_ECX_01,&DAT_00402a7c);
    if (iVar2 == 0) {
      iVar4 = FUN_0041b738(param_1 + 2,extraout_ECX_02,param_3);
      if (iVar4 < 0) {
        return iVar4;
      }
      goto LAB_0041b08e;
    }
  }
  *param_3 = (int)piVar3;
LAB_0041b08e:
  pcVar1 = *(code **)(*(int *)*param_3 + 4);
  (*(code *)PTR_guard_check_icall_00421328)((int *)*param_3);
  (*pcVar1)();
  return iVar4;
}



/* Function: FUN_0041b0c5 */

void __fastcall FUN_0041b0c5(uint *param_1,LPCGUID param_2)

{
  uint uVar1;
  int extraout_ECX;
  LPCGUID extraout_EDX;
  LPCGUID extraout_EDX_00;
  LPCGUID pGVar2;
  undefined1 auStack_34 [4];
  _EVENT_DATA_DESCRIPTOR local_30 [2];
  uint local_c;
  
  local_c = DAT_00420100 ^ (uint)auStack_34;
  pGVar2 = param_2;
  if (5 < *param_1) {
    uVar1 = FUN_00405a58(param_1,0,0x4000);
    pGVar2 = extraout_EDX;
    if ((char)uVar1 != '\0') {
      FUN_004059c3(extraout_ECX,&DAT_00403ec2,param_2,(LPCGUID)0x0,2,local_30);
      pGVar2 = extraout_EDX_00;
    }
  }
  FUN_0041e250(local_c ^ (uint)auStack_34,pGVar2);
  return;
}



/* Function: FUN_0041b11e */

int __fastcall FUN_0041b11e(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar3;
  
  iVar3 = 0;
  *param_3 = 0;
  iVar2 = FUN_00406eb5(param_2,(int *)&DAT_00402a1c);
  if ((iVar2 == 0) && (iVar2 = FUN_00406eb5(extraout_ECX,&DAT_00402b7c), iVar2 == 0)) {
    iVar2 = FUN_00406eb5(extraout_ECX_00,&DAT_00402b54);
    if (iVar2 == 0) {
      iVar3 = FUN_0041b738(param_1 + 1,extraout_ECX_01,param_3);
      if (iVar3 < 0) {
        return iVar3;
      }
    }
    else {
      *param_3 = (int)param_1;
    }
    pcVar1 = *(code **)(*(int *)*param_3 + 4);
    (*(code *)PTR_guard_check_icall_00421328)((int *)*param_3);
    (*pcVar1)();
  }
  else {
    *param_3 = (int)param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    (*pcVar1)();
    iVar3 = 0;
  }
  return iVar3;
}



/* Function: FUN_0041b1ac */

int __fastcall FUN_0041b1ac(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_EDX;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  *param_3 = 0;
  iVar2 = FUN_00406eb5(param_2,(int *)&DAT_00402a1c);
  if ((iVar2 != 0) || (iVar2 = FUN_00406eb5(extraout_ECX,&DAT_00402b7c), iVar2 != 0)) {
    *param_3 = (int)param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    (*pcVar1)();
    return 0;
  }
  iVar2 = FUN_00406eb5(extraout_ECX_00,extraout_EDX);
  piVar3 = param_1;
  if (iVar2 == 0) {
    piVar3 = param_1 + 1;
    iVar2 = FUN_00406eb5(extraout_ECX_01,&DAT_00402928);
    if (iVar2 == 0) {
      iVar4 = FUN_0041b738(param_1 + 2,extraout_ECX_02,param_3);
      if (iVar4 < 0) {
        return iVar4;
      }
      goto LAB_0041b20f;
    }
  }
  *param_3 = (int)piVar3;
LAB_0041b20f:
  pcVar1 = *(code **)(*(int *)*param_3 + 4);
  (*(code *)PTR_guard_check_icall_00421328)((int *)*param_3);
  (*pcVar1)();
  return iVar4;
}



/* Function: FUN_0041b250 */

void * __thiscall FUN_0041b250(void *this,byte param_1)

{
  FUN_00419e68((int)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_0041b280 */

void __fastcall FUN_0041b280(int param_1)

{
  PostThreadMessageW(*(DWORD *)(param_1 + 8),0x12,0,0);
  return;
}



/* Function: FUN_0041b2a0 */

int FUN_0041b2a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_8;
  
  *param_4 = 0;
  if (param_2 == 0) {
    local_8 = (undefined4 *)0x0;
    iVar2 = FUN_0041c207((int *)&local_8);
    if (-1 < iVar2) {
      pcVar1 = *(code **)*local_8;
      (*(code *)PTR_guard_check_icall_00421328)(local_8,param_3,param_4);
      iVar2 = (*pcVar1)();
    }
    FUN_00414048((int *)&local_8);
  }
  else {
    iVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return iVar2;
}



/* Function: FUN_0041b310 */

int FUN_0041b310(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_8;
  
  *param_4 = 0;
  if (param_2 == 0) {
    local_8 = (undefined4 *)0x0;
    iVar2 = FUN_0041c287((int *)&local_8);
    if (-1 < iVar2) {
      pcVar1 = *(code **)*local_8;
      (*(code *)PTR_guard_check_icall_00421328)(local_8,param_3,param_4);
      iVar2 = (*pcVar1)();
    }
    FUN_00414048((int *)&local_8);
  }
  else {
    iVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return iVar2;
}



/* Function: FUN_0041b380 */

int FUN_0041b380(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_8;
  
  *param_4 = 0;
  if (param_2 == 0) {
    local_8 = (undefined4 *)0x0;
    iVar2 = FUN_0041c307(&local_8);
    if (-1 < iVar2) {
      pcVar1 = *(code **)*local_8;
      (*(code *)PTR_guard_check_icall_00421328)(local_8,param_3,param_4);
      iVar2 = (*pcVar1)();
    }
    FUN_00414048((int *)&local_8);
  }
  else {
    iVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return iVar2;
}



/* Function: FUN_0041b3f0 */

int FUN_0041b3f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_8;
  
  *param_4 = 0;
  if (param_2 == 0) {
    local_8 = (undefined4 *)0x0;
    iVar2 = FUN_0041c362((int *)&local_8);
    if (-1 < iVar2) {
      pcVar1 = *(code **)*local_8;
      (*(code *)PTR_guard_check_icall_00421328)(local_8,param_3,param_4);
      iVar2 = (*pcVar1)();
    }
    FUN_00414048((int *)&local_8);
  }
  else {
    iVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return iVar2;
}



/* Function: FUN_0041b460 */

undefined4 FUN_0041b460(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0042067c == (int *)0x0) {
    RoOriginateError(0x80004005,0);
    uVar2 = 0x80004005;
  }
  else {
    iVar1 = *DAT_0042067c;
    if (param_2 == 0) {
      (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
      (**(code **)(iVar1 + 8))();
    }
    else {
      (*(code *)PTR_guard_check_icall_00421328)();
      (**(code **)(iVar1 + 4))();
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0041b4b0 */

undefined4 FUN_0041b4b0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00406eb5(param_2,(int *)&DAT_00402a1c);
  if (iVar1 == 0) {
    iVar1 = FUN_00406eb5(extraout_ECX,(int *)&DAT_00402b44);
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
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_0041b520 */

int FUN_0041b520(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = FUN_004071e5(param_1 + 2);
  uVar1 = param_1[4];
  if (iVar3 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x14);
      (*(code *)PTR_guard_check_icall_00421328)(1);
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
  if ((bVar4) && (DAT_0042067c != (int *)0x0)) {
    pcVar2 = *(code **)(*DAT_0042067c + 8);
    (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
    (*pcVar2)();
  }
  return iVar3;
}



/* Function: FUN_0041b5a0 */

int FUN_0041b5a0(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_004071b5((int *)(param_1 + 8));
  if ((((*(byte *)(param_1 + 0x10) & 6) == 0) && (iVar2 == 2)) && (DAT_0042067c != (int *)0x0)) {
    pcVar1 = *(code **)(*DAT_0042067c + 4);
    (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_0041b5e7 */

undefined * FUN_0041b5e7(void)

{
  InitOnceExecuteOnce((PINIT_ONCE)&DAT_00420684,FUN_0041b610,(PVOID)0x0,(LPVOID *)0x0);
  DAT_004206e4 = 1;
  return &DAT_004206d8;
}



/* Function: FUN_0041b610 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041b610(void)

{
  _DAT_004206dc = 0;
  _DAT_004206e0 = 0;
  DAT_004206e4 = 1;
  DAT_0042067c = &DAT_004206d8;
  _DAT_004206d8 = &PTR_FUN_0040135c;
  return 1;
}



/* Function: FUN_0041b645 */

undefined4 * __fastcall FUN_0041b645(undefined4 *param_1)

{
  int iVar1;
  char **ppcVar2;
  undefined4 *puVar3;
  char *local_20 [3];
  undefined2 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20[0] = (char *)0x32f132b;
  local_10 = 0;
  *param_1 = &PTR_purecall_00401210;
  param_1[2] = 0;
  param_1[1] = param_1;
  puVar3 = param_1 + 3;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[10] = 0;
  param_1[0x14] = 0;
  local_c = 0;
  param_1[0x15] = 0;
  local_8 = 0;
  local_20[1] = (char *)0xc014;
  local_20[2] = "PassKeySyncOTSTipTest";
  param_1[0x16] = 0;
  local_14 = 1;
  param_1[0x17] = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 0xffff;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x23] = 0;
  ppcVar2 = local_20;
  puVar3 = param_1 + 3;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppcVar2;
    ppcVar2 = ppcVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1c] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  *param_1 = &PTR_FUN_004012f0;
  param_1[0x25] = param_1 + 2;
  param_1[0x29] = 1;
  return param_1;
}



/* Function: FUN_0041b710 */

undefined4 * __thiscall FUN_0041b710(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401008;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041b738 */

int __thiscall FUN_0041b738(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *extraout_ECX;
  
  iVar1 = FUN_00406eb5(param_1,&DAT_00402c4c);
  if (iVar1 == 0) {
    iVar1 = FUN_00406f4e((void *)((int)this + 4),extraout_ECX,param_2);
    if (iVar1 == -0x7fffbffe) {
      iVar1 = -0x7fffbffe;
    }
  }
  else {
    *param_2 = (int)this;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_0041b77b */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0041b77b(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            short *param_8)

{
  code *pcVar1;
  undefined4 extraout_EDX;
  int local_1470;
  byte local_146c;
  int local_1414;
  wchar_t local_1410 [2048];
  undefined1 local_410 [1028];
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x41b78a;
  local_c = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_1414 = param_2;
  FUN_00408518(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,param_3,local_1410,
               param_3,local_410,param_3,&local_1470);
  if ((local_146c & 1) == 0) {
    FUN_0041e250(local_c ^ (uint)&stack0xfffffffc,extraout_EDX);
    return;
  }
  FUN_004087a0((int)&local_1470);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041b808 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0041b808(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

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
  undefined4 local_1474;
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
  undefined4 uStack_1444;
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
  
  local_c = DAT_00420100 ^ (uint)&local_1474;
  local_1470 = param_6;
  local_1010[0] = L'\0';
  local_1410[0] = 0;
  local_145c = param_7[1];
  local_1460 = *param_7;
  local_1474 = param_2;
  local_146c = param_1;
  iStack_143c = FUN_00407dd7(local_1460);
  local_1464 = 0;
  if (param_7[2] == 1) {
    local_1464 = 8;
  }
  local_1468 = 1;
  LOCK();
  UNLOCK();
  local_1458 = DAT_004205bc + 1;
  local_1454 = 0;
  DAT_004205bc = DAT_004205bc + 1;
  DStack_1450 = GetCurrentThreadId();
  pcVar1 = DAT_00420588;
  uStack_1440 = local_1474;
  uStack_1418 = local_1470;
  uStack_1444 = param_3;
  uStack_1414 = local_146c;
  uStack_144c = 0;
  uStack_1448 = 0;
  uStack_1438 = 0;
  uStack_1428 = 0;
  uStack_1424 = 0;
  uStack_1420 = 0;
  uStack_1434 = 0;
  uStack_1430 = 0;
  uStack_142c = 0;
  if (DAT_00420588 == (code *)0x0) {
    lVar5 = (ulonglong)extraout_EDX << 0x20;
  }
  else {
    (*(code *)PTR_guard_check_icall_00421328)();
    lVar5 = (*pcVar1)();
  }
  pcVar1 = DAT_00420554;
  uStack_141c = (undefined4)lVar5;
  if (DAT_00420554 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_00,uStack_141c);
  }
  pcVar1 = DAT_0042056c;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0042056c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(&local_1468,local_1410,0x400);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_01,uStack_141c);
  }
  pcVar1 = DAT_00420568;
  uStack_141c = (undefined4)lVar5;
  if (DAT_00420568 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00421328)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_02,uStack_141c);
  }
  pcVar1 = DAT_00420578;
  uStack_141c = (undefined4)lVar5;
  if ((DAT_00420578 != (code *)0x0) && ((local_1464 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00421328)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_03,uStack_141c);
  }
  pcVar1 = DAT_00420540;
  uStack_141c = (undefined4)lVar5;
  if (-1 < local_1460) {
    FUN_00408b07();
    goto LAB_0041ba6e;
  }
  if (DAT_00420548 == '\0') {
    if (DAT_00420540 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      uVar2 = (uint)(BVar3 != 0);
      uVar4 = extraout_EDX_04;
    }
    else {
      (*(code *)PTR_guard_check_icall_00421328)();
      uVar6 = (*pcVar1)();
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar2 = (uint)uVar6 & 0xff;
    }
    lVar5 = CONCAT44(uVar4,uStack_141c);
    if (uVar2 != 0) goto LAB_0041b9a2;
LAB_0041b9a9:
    pcVar1 = DAT_0042054c;
    uStack_141c = (undefined4)lVar5;
    if ((DAT_0042054c != (code *)0x0) && (DAT_0042055c == '\0')) {
      (*(code *)PTR_guard_check_icall_00421328)(&local_1468,0,0);
      (*pcVar1)();
      lVar5 = CONCAT44(extraout_EDX_05,uStack_141c);
    }
  }
  else {
LAB_0041b9a2:
    pcVar1 = DAT_0042054c;
    uStack_141c = (undefined4)lVar5;
    if ((local_1464 & 2) != 0) goto LAB_0041b9a9;
    if ((DAT_0042054c != (code *)0x0) && (DAT_0042055c == '\0')) {
      (*(code *)PTR_guard_check_icall_00421328)(&local_1468,local_1010,0x800);
      (*pcVar1)();
    }
    if (local_1010[0] == L'\0') {
      FUN_00407a76(local_1010,0x800,(int)&local_1468);
    }
    OutputDebugStringW(local_1010);
    lVar5 = CONCAT44(extraout_EDX_06,uStack_141c);
  }
  pcVar1 = DAT_00420574;
  uStack_141c = (undefined4)lVar5;
  if ((((local_1464 & 4) != 0) || (DAT_00420550 != '\0')) && (DAT_00420574 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00421328)();
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_07,uStack_141c);
  }
  uStack_141c = (undefined4)lVar5;
  if ((local_1464 & 1) == 0) {
    FUN_0041e250(local_c ^ (uint)&local_1474,(int)((ulonglong)lVar5 >> 0x20));
    return;
  }
LAB_0041ba6e:
  FUN_004087a0((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041ba80 */

void __thiscall FUN_0041ba80(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401614;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: FUN_0041bab0 */

undefined4 __thiscall
FUN_0041bab0(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_0040a8f8(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_0041bb10 */

void __thiscall FUN_0041bb10(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_00401730;
  puVar2 = (undefined4 *)((int)this + 4);
  for (iVar1 = 5; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  return;
}



/* Function: FUN_0041bb40 */

void __thiscall FUN_0041bb40(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0040daf3((void *)((int)this + 4),(int *)*param_1,this,*param_3);
  return;
}



/* Function: FUN_0041bb63 */

undefined4 * __thiscall
FUN_0041bb63(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 param_4)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(char **)((int)this + 0x30) = "TryActivateContractExtension";
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  memset((void *)((int)this + 0x40),0,0x58);
  *(undefined4 *)((int)this + 0xa0) = 1;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(int *)((int)this + 0xc0) = (int)this + 0x2c;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(void **)((int)this + 0xb4) = this;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 **)((int)this + 0xa8) = (undefined4 *)((int)this + 4);
  *(undefined ***)this = &PTR_FUN_0040170c;
  FUN_0040c6ba(this,*param_2,*param_3,param_4);
  return (undefined4 *)this;
}



/* Function: FUN_0041bc07 */

int __thiscall FUN_0041bc07(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar3;
  int *piVar4;
  
                    /* WARNING: Load size is inaccurate */
  piVar4 = *this;
  iVar3 = 0;
  *param_1 = 0;
  iVar2 = FUN_00406eb5(&DAT_00402b54,(int *)&DAT_00402a1c);
  if ((iVar2 == 0) && (iVar2 = FUN_00406eb5(extraout_ECX,&DAT_00402b7c), iVar2 == 0)) {
    iVar2 = FUN_00406eb5(extraout_ECX_00,extraout_ECX_00);
    if (iVar2 == 0) {
      iVar3 = FUN_0041b738(piVar4 + 1,extraout_ECX_01,param_1);
      if (iVar3 < 0) {
        return iVar3;
      }
    }
    else {
      *param_1 = (int)piVar4;
    }
    piVar4 = (int *)*param_1;
    iVar2 = *piVar4;
  }
  else {
    *param_1 = (int)piVar4;
    iVar2 = *piVar4;
  }
  pcVar1 = *(code **)(iVar2 + 4);
  (*(code *)PTR_guard_check_icall_00421328)(piVar4);
  (*pcVar1)();
  return iVar3;
}



/* Function: FUN_0041bc81 */

undefined4 * __fastcall FUN_0041bc81(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  
  puVar1 = param_1 + 3;
  FUN_00406f8e(puVar1);
  piVar3 = DAT_0042067c;
  param_1[8] = 1;
  *param_1 = &PTR_FUN_004013d0;
  param_1[1] = &PTR_FUN_0040165c;
  param_1[2] = &PTR_FUN_004015c0;
  *puVar1 = &PTR_FUN_004013ac;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar3);
    (*pcVar2)();
  }
  *puVar1 = &PTR_FUN_004013ac;
  *param_1 = &PTR_FUN_00401418;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = &PTR_FUN_0040138c;
  param_1[0xc] = DAT_00401cf4;
  param_1[2] = &PTR_FUN_004015c0;
  param_1[0x10] = 0;
  param_1[0xd] = DAT_00401cf8;
  param_1[0xe] = DAT_00401cfc;
  param_1[0xf] = DAT_00401d00;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



/* Function: FUN_0041bd16 */

undefined4 * __fastcall FUN_0041bd16(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  
  puVar1 = param_1 + 2;
  FUN_00406f8e(puVar1);
  piVar3 = DAT_0042067c;
  param_1[7] = 1;
  *param_1 = &PTR_FUN_00401228;
  param_1[1] = &PTR_FUN_00401628;
  *puVar1 = &PTR_FUN_004011d4;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar3);
    (*pcVar2)();
  }
  *puVar1 = &PTR_FUN_004011d4;
  *param_1 = &PTR_FUN_004010c0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = DAT_00401cf4;
  param_1[1] = &PTR_FUN_00401628;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x16] = DAT_00401cf8;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x17] = DAT_00401cfc;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x18] = DAT_00401d00;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x25] = 5;
  param_1[0x19] = DAT_00401cf4;
  param_1[0x26] = 5;
  param_1[0x1a] = DAT_00401cf8;
  param_1[0x1b] = DAT_00401cfc;
  param_1[0x1c] = DAT_00401d00;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



/* Function: FUN_0041be0e */

undefined4 * __fastcall FUN_0041be0e(undefined4 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = "AcceptCredentialsOrCancelActivity";
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  memset(param_1 + 0x10,0,0x58);
  param_1[0x28] = 1;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = param_1 + 0xb;
  param_1[0x2a] = param_1 + 1;
  *param_1 = &PTR_FUN_00401434;
  FUN_0040e27c(param_1);
  return param_1;
}



/* Function: FUN_0041bea1 */

int FUN_0041bea1(short *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  if (param_2 + 1 < param_2) {
    iVar1 = -0x7ff8fdea;
  }
  else {
    iVar1 = FUN_0041c974(param_2 + 1,param_4);
    if (-1 < iVar1) {
      FUN_004077f1((short *)*param_4,param_2 + 1,param_1,param_2);
    }
  }
  return iVar1;
}



/* Function: FUN_0041beed */

/* WARNING: Removing unreachable block (ram,0x0041bfce) */
/* WARNING: Removing unreachable block (ram,0x0041bfe9) */
/* WARNING: Removing unreachable block (ram,0x0041bff2) */
/* WARNING: Removing unreachable block (ram,0x0041c0a4) */
/* WARNING: Removing unreachable block (ram,0x0041c024) */
/* WARNING: Removing unreachable block (ram,0x0041c0a0) */
/* WARNING: Removing unreachable block (ram,0x0041c041) */
/* WARNING: Removing unreachable block (ram,0x0041bfbd) */
/* WARNING: Removing unreachable block (ram,0x0041c0d3) */

void __fastcall FUN_0041beed(void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  undefined4 extraout_EDX_00;
  undefined4 unaff_retaddr;
  int local_214;
  int local_210;
  short local_20c [258];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  local_210 = 0;
  memset(local_20c,0,0x200);
  iVar1 = FUN_0041c71d(param_2);
  if (-1 < iVar1) {
    piVar2 = FUN_00419ac1(&local_214,local_20c,0xffffffff);
    FUN_0041c6c4(&local_210,piVar2);
    FUN_00415cdd(&local_214);
    if (local_210 != 0) {
      local_214 = local_210;
      local_210 = 0;
      FUN_0041c6c4(param_1,&local_214);
      FUN_00415cdd(&local_214);
      FUN_00415cdd(&local_210);
      FUN_00419b83(param_2);
      uVar3 = extraout_EDX;
      goto LAB_0041c091;
    }
    FUN_0040899b(unaff_retaddr,0x165,
                 "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",0x8007000e);
  }
  FUN_00415cdd(&local_210);
  FUN_00419b83(param_2);
  uVar3 = extraout_EDX_00;
LAB_0041c091:
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0041c0e9 */

void __thiscall FUN_0041c0e9(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  short local_8;
  undefined2 uStack_6;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = uVar1;
  _local_8 = CONCAT22((short)((uint)this >> 0x10),*(short *)param_1[2]);
  bVar2 = FUN_004123f3(this,*(short *)param_1[2] == 0);
  if (bVar2) {
    FUN_0041223e(*(void **)((int)this + 0x7c),&local_8,2);
  }
  return;
}



/* Function: FUN_0041c139 */

void __thiscall FUN_0041c139(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int local_8;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = uVar1;
  local_8 = *(int *)param_1[2];
  bVar2 = FUN_004123f3(this,local_8 == 0);
  if (bVar2) {
    FUN_0041223e(*(void **)((int)this + 0x7c),&local_8,4);
  }
  return;
}



/* Function: FUN_0041c186 */

void __thiscall FUN_0041c186(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[1];
  *(int *)((int)this + 8) = *param_1;
  *(char *)((int)this + 0xc) = (char)iVar2;
  puVar1 = (undefined4 *)param_1[2];
  uVar3 = FUN_0041268a((int *)this);
  if ((char)uVar3 == '\0') {
    *puVar1 = 0;
  }
  else {
    FUN_00412646(this,'\x11',(char *)0x8007065d);
                    /* WARNING: Load size is inaccurate */
    iVar2 = *this;
    if (*(undefined4 **)(iVar2 + 8) < *(undefined4 **)(iVar2 + 4) + 1) {
      *(undefined1 *)(iVar2 + 0xc) = 1;
    }
    else {
      *puVar1 = **(undefined4 **)(iVar2 + 4);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 4;
    }
  }
  return;
}



/* Function: FUN_0041c1f0 */

void FUN_0041c1f0(undefined4 param_1,undefined4 *param_2)

{
  FUN_0041ca51(DAT_0042067c,param_1,param_2);
  return;
}



/* Function: FUN_0041c207 */

undefined4 __fastcall FUN_0041c207(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  piVar2 = (int *)FUN_0041e266(0x2c);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    FUN_0041c68c(piVar2);
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    *piVar2 = (int)&PTR_FUN_0040153c;
    puVar1 = PTR_FUN_0040153c;
    local_8 = piVar2;
    (*(code *)PTR_guard_check_icall_00421328)(piVar2,&DAT_00402a1c,param_1);
    uVar3 = (*(code *)puVar1)();
    FUN_00414048((int *)&local_8);
  }
  return uVar3;
}



/* Function: FUN_0041c287 */

undefined4 __fastcall FUN_0041c287(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  piVar2 = (int *)FUN_0041e266(0x2c);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    FUN_0041c68c(piVar2);
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    *piVar2 = (int)&PTR_FUN_00401564;
    puVar1 = PTR_FUN_00401564;
    local_8 = piVar2;
    (*(code *)PTR_guard_check_icall_00421328)(piVar2,&DAT_00402a1c,param_1);
    uVar3 = (*(code *)puVar1)();
    FUN_00414048((int *)&local_8);
  }
  return uVar3;
}



/* Function: FUN_0041c307 */

undefined4 __fastcall FUN_0041c307(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  puVar2 = (undefined4 *)FUN_0041e266(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    local_8 = FUN_0041c5ca(puVar2);
    pcVar1 = *(code **)*local_8;
    (*(code *)PTR_guard_check_icall_00421328)(local_8,&DAT_00402a1c,param_1);
    uVar3 = (*pcVar1)();
    FUN_00414048((int *)&local_8);
  }
  return uVar3;
}



/* Function: FUN_0041c362 */

undefined4 __fastcall FUN_0041c362(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  piVar2 = (int *)FUN_0041e266(0x2c);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    FUN_0041c68c(piVar2);
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    *piVar2 = (int)&PTR_FUN_004010a4;
    puVar1 = PTR_FUN_004010a4;
    local_8 = piVar2;
    (*(code *)PTR_guard_check_icall_00421328)(piVar2,&DAT_00402a1c,param_1);
    uVar3 = (*(code *)puVar1)();
    FUN_00414048((int *)&local_8);
  }
  return uVar3;
}



/* Function: FUN_0041c3e2 */

undefined4 * __fastcall FUN_0041c3e2(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  
  puVar1 = param_1 + 3;
  FUN_00406f8e(puVar1);
  piVar3 = DAT_0042067c;
  param_1[8] = 1;
  *param_1 = &PTR_FUN_00401328;
  param_1[1] = &PTR_FUN_004015ac;
  param_1[2] = &PTR_FUN_004014a8;
  *puVar1 = &PTR_FUN_00401440;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar3);
    (*pcVar2)();
  }
  *param_1 = &PTR_FUN_00401328;
  param_1[1] = &PTR_FUN_004011ac;
  param_1[2] = &PTR_FUN_004014a8;
  *puVar1 = &PTR_FUN_00401440;
  return param_1;
}



/* Function: FUN_0041c460 */

void * __thiscall FUN_0041c460(void *this,byte param_1)

{
  FUN_0041c487((int)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_0041c487 */

void __fastcall FUN_0041c487(int param_1)

{
  LPVOID pv;
  
  FUN_00416c95((int *)(param_1 + 0x44));
  pv = *(LPVOID *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  CoTaskMemFree(pv);
  FUN_00419d08(param_1);
  return;
}



/* Function: FUN_0041c4b0 */

void * __thiscall FUN_0041c4b0(void *this,byte param_1)

{
  FUN_0041c4d7((int)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_0041c4d7 */

void __fastcall FUN_0041c4d7(int param_1)

{
  FUN_00414048((int *)(param_1 + 0xac));
  WindowsDeleteString(*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  WindowsDeleteString(*(undefined4 *)(param_1 + 0xa4));
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_00414048((int *)(param_1 + 0x9c));
  WindowsDeleteString(*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  WindowsDeleteString(*(undefined4 *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_00414048((int *)(param_1 + 0x84));
  FUN_00414048((int *)(param_1 + 0x80));
  FUN_00414048((int *)(param_1 + 0x7c));
  FUN_00414048((int *)(param_1 + 0x78));
  FUN_00414048((int *)(param_1 + 0x74));
  FUN_00414048((int *)(param_1 + 0x50));
  WindowsDeleteString(*(undefined4 *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x4c) = 0;
  WindowsDeleteString(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x3c) = 0;
  WindowsDeleteString(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  WindowsDeleteString(*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x34) = 0;
  WindowsDeleteString(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  WindowsDeleteString(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_00419e68(param_1);
  return;
}



/* Function: FUN_0041c5ca */

undefined4 * __fastcall FUN_0041c5ca(undefined4 *param_1)

{
  FUN_0041c68c(param_1);
  *param_1 = &PTR_FUN_0040130c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



/* Function: FUN_0041c600 */

void * __thiscall FUN_0041c600(void *this,byte param_1)

{
  FUN_00419d08((int)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_0041c630 */

void * __thiscall FUN_0041c630(void *this,byte param_1)

{
  FUN_004134d4((int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_0041c661 */

void __fastcall FUN_0041c661(undefined4 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 3) != '\0') {
    pcVar1 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_00421328)(0);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Function: FUN_0041c68c */

undefined4 * __fastcall FUN_0041c68c(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_0042067c;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_004015e4;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar2);
    (*pcVar1)();
  }
  return param_1;
}



/* Function: FUN_0041c6c4 */

int * __thiscall FUN_0041c6c4(void *this,int *param_1)

{
  int iVar1;
  DWORD dwErrCode;
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if ((int *)this != param_1) {
    iVar1 = *param_1;
                    /* WARNING: Load size is inaccurate */
    lpMem = *this;
    if (lpMem != (LPVOID)0x0) {
      dwErrCode = GetLastError();
      dwFlags = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,dwFlags,lpMem);
      SetLastError(dwErrCode);
    }
    *(int *)this = iVar1;
    *param_1 = 0;
  }
  return (int *)this;
}



/* Function: FUN_0041c71d */

void __fastcall FUN_0041c71d(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x10);
    (*(code *)PTR_guard_check_icall_00421328)(&stack0x00000004,&stack0x00000008,&stack0x0000000c);
    (*pcVar1)();
    return;
  }
  FUN_00408b07();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041c75a */

DWORD __fastcall FUN_0041c75a(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  int *piVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  HANDLE local_24;
  int local_20;
  int *local_1c;
  DWORD local_18;
  int *local_14;
  int local_10;
  DWORD local_c;
  int *local_8;
  
  local_1c = param_1;
  local_14 = param_1;
  local_8 = param_2;
  if (param_1 != (int *)0x0) {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(param_1);
    (*pcVar1)();
  }
  local_10 = 0;
  local_c = FUN_0041cdb1(&local_10);
  iVar6 = local_10;
  if ((int)local_c < 0) goto LAB_0041c89a;
  pcVar1 = *(code **)(*param_1 + 0x18);
  (*(code *)PTR_guard_check_icall_00421328)(param_1,local_10);
  local_18 = (*pcVar1)();
  local_c = local_18;
  if ((int)local_18 < 0) goto LAB_0041c89a;
  local_24 = *(HANDLE *)(iVar6 + 0x20);
  local_20 = param_3;
  local_c = CoWaitForMultipleHandles
                      ((DWORD)local_8,0xffffffff,(param_3 != 0) + 1,&local_24,&local_18);
  piVar2 = local_14;
  if (((int)local_c < 0) || (local_18 == 0)) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = (int *)0x0;
    local_c = 0x800704c7;
    pcVar1 = *(code **)*local_14;
    piVar4 = FUN_0041a60d((int *)&local_8);
    (*(code *)PTR_guard_check_icall_00421328)(piVar2,&DAT_00402b14,piVar4);
    iVar5 = (*pcVar1)();
    if (-1 < iVar5) {
      pcVar1 = *(code **)(*local_8 + 0x24);
      (*(code *)PTR_guard_check_icall_00421328)(local_8);
      (*pcVar1)();
    }
  }
  if ((-1 < (int)local_c) && (*(int *)(iVar6 + 0x1c) != 1)) {
    if (local_8 == (int *)0x0) {
      pcVar1 = *(code **)*piVar2;
      piVar4 = FUN_0041a60d((int *)&local_8);
      (*(code *)PTR_guard_check_icall_00421328)(piVar2,&DAT_00402b14,piVar4);
      iVar6 = (*pcVar1)();
      if (iVar6 < 0) goto LAB_0041c88a;
    }
    pcVar1 = *(code **)(*local_8 + 0x20);
    (*(code *)PTR_guard_check_icall_00421328)(local_8,&local_c);
    (*pcVar1)();
  }
LAB_0041c88a:
  FUN_00414048((int *)&local_8);
LAB_0041c89a:
  DVar3 = local_c;
  FUN_00414048(&local_10);
  FUN_00414048((int *)&local_1c);
  return DVar3;
}



/* Function: FUN_0041c8b9 */

undefined4 * __fastcall FUN_0041c8b9(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_purecall_00401210;
  FUN_00406f8e(puVar1);
  piVar3 = DAT_0042067c;
  param_1[6] = 1;
  *param_1 = &PTR_FUN_0040167c;
  *puVar1 = &PTR_FUN_00401518;
  if (piVar3 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar3);
    (*pcVar2)();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00401494;
  *puVar1 = &PTR_FUN_00401518;
  return param_1;
}



/* Function: FUN_0041c920 */

undefined4 FUN_0041c920(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  SetEvent(*(HANDLE *)(param_1 + 0x20));
  return 0;
}



/* Function: FUN_0041c943 */

void __fastcall FUN_0041c943(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401494;
  param_1[1] = &PTR_FUN_00401518;
  CloseHandle((HANDLE)param_1[8]);
  param_1[6] = 0xc0000001;
  FUN_00414048(param_1 + 4);
  return;
}



/* Function: FUN_0041c974 */

undefined4 FUN_0041c974(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  if ((int)((ulonglong)param_1 * 2 >> 0x20) == 0) {
    uVar1 = FUN_00410b68((SIZE_T)((ulonglong)param_1 * 2),param_2);
  }
  else {
    uVar1 = 0x80070216;
  }
  return uVar1;
}



/* Function: FUN_0041c9b0 */

void __thiscall FUN_0041c9b0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_00401464;
  uVar1 = *(undefined4 *)((int)this + 8);
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = uVar1;
  return;
}



/* Function: FUN_0041c9e0 */

undefined4 __thiscall
FUN_0041c9e0(void *this,undefined4 *param_1,DWORD *param_2,undefined4 *param_3)

{
  int *piVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_retaddr;
  DWORD local_8;
  
  piVar1 = (int *)*param_3;
  local_8 = *param_2;
  BVar2 = QueryFullProcessImageNameW
                    ((HANDLE)**(undefined4 **)((int)this + 4),**(DWORD **)((int)this + 8),
                     (LPWSTR)*param_1,&local_8);
  if ((BVar2 == 0) && (DVar3 = GetLastError(), DVar3 != 0x7a)) {
    uVar4 = FUN_004089d9(unaff_retaddr,0x1af,0x40242c);
    return uVar4;
  }
  iVar5 = local_8 * 2;
  if (BVar2 != 0) {
    iVar5 = local_8 + 1;
  }
  *piVar1 = iVar5;
  return 0;
}



/* Function: FUN_0041ca51 */

void __thiscall FUN_0041ca51(void *this,undefined4 param_1,undefined4 *param_2)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  ushort *puVar6;
  uint uVar7;
  int *piVar8;
  ushort *puVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  bool bVar13;
  int local_3c;
  int *local_38;
  int *local_34;
  wchar_t local_30 [20];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  local_38 = (int *)this;
  iVar3 = WindowsIsStringEmpty(param_1);
  if (((iVar3 == 0) && (iVar3 = WindowsStringHasEmbeddedNull(param_1,&local_3c), -1 < iVar3)) &&
     (local_3c != 1)) {
    puVar4 = (ushort *)WindowsGetStringRawBuffer(param_1,0);
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 0x14);
    (*(code *)PTR_guard_check_icall_00421328)(this);
    piVar5 = (int *)(*pcVar2)();
    pcVar2 = *(code **)(*local_38 + 0x18);
    (*(code *)PTR_guard_check_icall_00421328)(local_38);
    local_34 = (int *)(*pcVar2)();
    piVar8 = local_34;
    do {
      do {
        piVar5 = piVar5 + 1;
        if (piVar8 <= piVar5) {
          RoOriginateError(0x80040111,param_1);
          uVar10 = extraout_EDX;
          goto LAB_0041cb75;
        }
      } while (*piVar5 == 0);
      pcVar2 = *(code **)(*piVar5 + 4);
      (*(code *)PTR_guard_check_icall_00421328)();
      puVar6 = (ushort *)(*pcVar2)();
      puVar9 = puVar4;
      do {
        uVar1 = *puVar9;
        bVar13 = uVar1 < *puVar6;
        if (uVar1 != *puVar6) {
LAB_0041cb16:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0041cb1b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar9[1];
        bVar13 = uVar1 < puVar6[1];
        if (uVar1 != puVar6[1]) goto LAB_0041cb16;
        puVar9 = puVar9 + 2;
        puVar6 = puVar6 + 2;
      } while (uVar1 != 0);
      uVar7 = 0;
LAB_0041cb1b:
      piVar8 = local_34;
    } while (uVar7 != 0);
    local_34 = (int *)0x2;
    FUN_0040746e(local_38,(byte *)&local_34,puVar9,(undefined4 *)*piVar5,param_2);
    uVar10 = extraout_EDX_00;
  }
  else {
    pwVar11 = L"activatibleClassId";
    pwVar12 = local_30;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pwVar12 = *(undefined4 *)pwVar11;
      pwVar11 = pwVar11 + 2;
      pwVar12 = pwVar12 + 2;
    }
    *pwVar12 = *pwVar11;
    RoOriginateErrorW(0x80070057,0x12,local_30);
    uVar10 = extraout_EDX_01;
  }
LAB_0041cb75:
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar10);
  return;
}



/* Function: FUN_0041cb8c */

void __thiscall FUN_0041cb8c(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *local_8;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = uVar1;
  piVar2 = (int *)param_1[2];
  local_8 = this;
  FUN_00412518(this);
  local_8 = (void *)piVar2[2];
  FUN_0041d01f(this,(uint *)&local_8);
  puVar4 = (undefined4 *)*piVar2;
  puVar6 = puVar4 + piVar2[2] * 0x18;
  for (; puVar4 != puVar6; puVar4 = puVar4 + 0x18) {
    FUN_00412518(this);
    FUN_0041299e(this,puVar4);
    FUN_00412542((int)this);
  }
  FUN_00412542((int)this);
  uVar3 = *param_2;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)this = uVar3;
  piVar2 = (int *)param_2[2];
  FUN_00412518(this);
  local_8 = (void *)piVar2[2];
  FUN_0041d01f(this,(uint *)&local_8);
  iVar5 = *piVar2;
  iVar7 = piVar2[2] * 0x58 + iVar5;
  for (; iVar5 != iVar7; iVar5 = iVar5 + 0x58) {
    FUN_00412518(this);
    FUN_00412ad0(this,iVar5);
    FUN_00412542((int)this);
  }
  FUN_00412542((int)this);
  return;
}



/* Function: FUN_0041cc50 */

undefined4 * __thiscall FUN_0041cc50(void *this,byte param_1)

{
  FUN_0041c943((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041cc80 */

int FUN_0041cc80(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_004071e5(param_1 + 6);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_00421328)(1);
      (*pcVar1)();
    }
    if (DAT_0042067c != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0042067c + 8);
      (*(code *)PTR_guard_check_icall_00421328)(DAT_0042067c);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_0041cce0 */

void FUN_0041cce0(int param_1)

{
  FUN_004071b5((int *)(param_1 + 0x18));
  return;
}



/* Function: FUN_0041cd00 */

int FUN_0041cd00(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar3;
  
  iVar3 = 0;
  *param_3 = 0;
  iVar2 = FUN_00406eb5(param_2,(int *)&DAT_00402a1c);
  if (iVar2 == 0) {
    iVar2 = FUN_00406eb5(extraout_ECX,(int *)&LAB_004029f4);
    if (iVar2 == 0) {
      iVar3 = FUN_00406f4e(param_1 + 1,extraout_ECX_00,param_3);
      if (iVar3 == -0x7fffbffe) {
        return -0x7fffbffe;
      }
      if (iVar3 < 0) {
        return iVar3;
      }
    }
    else {
      *param_3 = param_1;
    }
    param_1 = (int *)*param_3;
    iVar2 = *param_1;
  }
  else {
    *param_3 = param_1;
    iVar2 = *param_1;
  }
  pcVar1 = *(code **)(iVar2 + 4);
  (*(code *)PTR_guard_check_icall_00421328)(param_1);
  (*pcVar1)();
  return iVar3;
}



/* Function: FUN_0041cd80 */

void * __thiscall FUN_0041cd80(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 0x18) = 0xc0000001;
  FUN_00414048((int *)((int)this + 0x10));
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_0041cdb1 */

DWORD __fastcall FUN_0041cdb1(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  uint uVar6;
  int *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  puVar2 = (undefined4 *)FUN_0041e266(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  piVar3 = FUN_0041c8b9(puVar2);
  local_8 = piVar3;
  pvVar4 = CreateEventExW((LPSECURITY_ATTRIBUTES)0x0,(LPCWSTR)0x0,0,0x1f0003);
  piVar3[8] = (int)pvVar4;
  if (pvVar4 == (HANDLE)0x0) {
    DVar5 = GetLastError();
    uVar6 = DVar5 & 0xffff | 0x80070000;
    if ((int)DVar5 < 1) {
      uVar6 = DVar5;
    }
    if ((int)uVar6 < 0) goto LAB_0041ce2a;
  }
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00421328)(piVar3);
    (*pcVar1)();
  }
  *param_1 = (int)piVar3;
  uVar6 = 0;
LAB_0041ce2a:
  FUN_00414048((int *)&local_8);
  return uVar6;
}



/* Function: FUN_0041ce3f */

void __thiscall
FUN_0041ce3f(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  bool bVar3;
  void *local_8;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = uVar1;
  local_8 = this;
  FUN_0041ced1(this,(undefined4 *)param_1[2]);
  uVar1 = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)this = *param_2;
  *(undefined1 *)((int)this + 4) = uVar1;
  local_8 = *(void **)param_2[2];
  bVar3 = FUN_004123f3(this,local_8 == (void *)0x0);
  if (bVar3) {
    FUN_0041223e(*(void **)((int)this + 0x7c),&local_8,4);
  }
  uVar2 = *param_3;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_3 + 1);
  *(undefined4 *)this = uVar2;
  FUN_0041cf1c(this,(undefined4 *)param_3[2]);
  uVar2 = *param_4;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_4 + 1);
  *(undefined4 *)this = uVar2;
  FUN_0041ced1(this,(undefined4 *)param_4[2]);
  return;
}



/* Function: FUN_0041ced1 */

void * __thiscall FUN_0041ced1(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  
  pvVar1 = (void *)*param_1;
  iVar2 = param_1[1];
  bVar3 = FUN_004123f3(this,pvVar1 == (void *)0x0);
  if (bVar3) {
    FUN_00412424(this,iVar2,pvVar1,iVar2);
  }
  return this;
}



/* Function: FUN_0041cf1c */

void * __thiscall FUN_0041cf1c(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  
  pvVar1 = (void *)*param_1;
  iVar2 = param_1[1];
  bVar3 = FUN_004123f3(this,pvVar1 == (void *)0x0);
  if (bVar3) {
    FUN_00412424(this,iVar2,pvVar1,iVar2 * 2);
  }
  return this;
}



/* Function: FUN_0041cf69 */

void __thiscall FUN_0041cf69(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  char *local_28;
  undefined1 local_24;
  int local_20;
  char *local_1c;
  undefined1 local_18;
  int local_14;
  char *local_10;
  undefined1 local_c;
  int local_8;
  
  FUN_0041268a((int *)this);
  if (*(char *)((int)this + 0xd) == '\0') {
    FUN_00412768((int *)this);
  }
  local_28 = "shellHostLaunchFailed";
  local_24 = 0x15;
  local_1c = "passkeySyncOTSThroughBrokerFailed";
  local_20 = param_1 + 0x10;
  local_18 = 0x21;
  local_14 = param_1 + 0xc;
  local_8 = param_1 + 8;
  local_10 = "controllerInstanceNotCreated";
  local_c = 0x1c;
  FUN_0041c186(this,(int *)&local_10);
  FUN_0041c186(this,(int *)&local_1c);
  FUN_0041c186(this,(int *)&local_28);
  if (*(char *)((int)this + 0xd) != '\0') goto LAB_0041d010;
  if (*(int *)((int)this + 0x78) == 0) {
    *(undefined1 *)((int)this + 0x10) = 1;
LAB_0041d002:
    cVar2 = '\x02';
  }
  else {
    iVar1 = *(int *)((int)this + 0x78) + -1;
    *(int *)((int)this + 0x78) = iVar1;
    if (*(int *)((int)this + iVar1 * 4 + 0x14) != 1) goto LAB_0041d002;
    cVar2 = '\x04';
  }
  FUN_00412646(this,cVar2,(char *)0x8007065d);
LAB_0041d010:
  *(undefined1 *)((int)this + 0xd) = 0;
  return;
}



/* Function: FUN_0041d01f */

int __thiscall FUN_0041d01f(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (*(int *)((int)this + 0x74) == 0) {
    *(undefined1 *)((int)this + 0xc) = 1;
    iVar2 = 4;
  }
  else {
    iVar2 = *(int *)((int)this + 0x74) << 2;
  }
  *(undefined4 *)(iVar2 + 0xc + (int)this) = 2;
  if ((0xffff < uVar1) && (-1 < *(int *)((int)this + 0x78))) {
    *(undefined4 *)((int)this + 0x78) = 0x8000000b;
  }
  *(short *)((int)this + 6) = (short)uVar1;
  return (int)this;
}



/* Function: FUN_0041d070 */

void FUN_0041d070(int param_1)

{
  FUN_00414d40((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0041d080 */

void FUN_0041d080(int param_1,int *param_2,int *param_3)

{
  FUN_0040dc00((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0041d090 */

void FUN_0041d090(int param_1)

{
  FUN_00414dd0(param_1 + -0xc);
  return;
}



/* Function: FUN_0041d0a0 */

void FUN_0041d0a0(int param_1)

{
  FUN_0041cce0(param_1 + -4);
  return;
}



/* Function: FUN_0041d0b0 */

void FUN_0041d0b0(int param_1)

{
  FUN_0040dc20((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0041d0c0 */

void FUN_0041d0c0(int param_1)

{
  FUN_0040dc40(param_1 + -4);
  return;
}



/* Function: FUN_0041d0d0 */

void FUN_0041d0d0(int param_1)

{
  FUN_00414d40((int *)(param_1 + -8));
  return;
}



/* Function: FUN_0041d0e0 */

void FUN_0041d0e0(int param_1,int *param_2,int *param_3)

{
  FUN_0040dc00((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_0041d0f0 */

void FUN_0041d0f0(int param_1)

{
  FUN_004152e0((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0041d100 */

void FUN_0041d100(int param_1)

{
  FUN_0040dc20((int *)(param_1 + -8));
  return;
}



/* Function: FUN_0041d110 */

void FUN_0041d110(int param_1)

{
  FUN_0040dc40(param_1 + -8);
  return;
}



/* Function: FUN_0041d120 */

void FUN_0041d120(int param_1,int *param_2,int *param_3)

{
  FUN_00415a50((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0041d130 */

void FUN_0041d130(int param_1,int *param_2,int *param_3)

{
  FUN_00414e30((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0041d140 */

void FUN_0041d140(int param_1)

{
  FUN_00414d40((int *)(param_1 + -0xc));
  return;
}



/* Function: FUN_0041d150 */

void FUN_0041d150(int param_1)

{
  FUN_0041cc80((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0041d160 */

void FUN_0041d160(int param_1)

{
  FUN_004152e0((int *)(param_1 + -8));
  return;
}



/* Function: FUN_0041d170 */

void FUN_0041d170(int param_1,int *param_2,int *param_3)

{
  FUN_00415a50((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_0041d180 */

void FUN_0041d180(int param_1,int *param_2,int *param_3)

{
  FUN_00414e30((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_0041d190 */

void FUN_0041d190(int param_1,int *param_2,int *param_3)

{
  FUN_00415a50((int *)(param_1 + -0xc),param_2,param_3);
  return;
}



/* Function: FUN_0041d1a0 */

void FUN_0041d1a0(int param_1,int *param_2,int *param_3)

{
  FUN_00414e30((int *)(param_1 + -0xc),param_2,param_3);
  return;
}



/* Function: FUN_0041d1b0 */

void FUN_0041d1b0(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_0041cd00((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0041d1c0 */

void FUN_0041d1c0(int param_1)

{
  FUN_00414dd0(param_1 + -4);
  return;
}



/* Function: FUN_0041d1d0 */

void FUN_0041d1d0(int param_1)

{
  FUN_00414c50(param_1 + -4);
  return;
}



/* Function: FUN_0041d1e0 */

void FUN_0041d1e0(int param_1)

{
  FUN_00414bc0((int *)(param_1 + -4));
  return;
}



/* Function: FUN_0041d1f0 */

void FUN_0041d1f0(int param_1)

{
  FUN_00414dd0(param_1 + -8);
  return;
}



/* Function: FUN_0041d200 */

void FUN_0041d200(int param_1)

{
  FUN_00414c50(param_1 + -8);
  return;
}



/* Function: FUN_0041d210 */

void FUN_0041d210(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00414cb0((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0041d220 */

void FUN_0041d220(int param_1)

{
  FUN_00414bc0((int *)(param_1 + -8));
  return;
}



/* Function: FUN_0041d230 */

void FUN_0041d230(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00414cb0((int *)(param_1 + -8),param_2,param_3);
  return;
}



/* Function: FUN_0041d240 */

undefined4 __fastcall FUN_0041d240(int *param_1)

{
  if (*param_1 != 0) {
    RtlFreeHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return 0;
}



/* Function: FUN_0041d26e */

DWORD __fastcall FUN_0041d26e(HANDLE param_1,PHANDLE param_2)

{
  HANDLE pvVar1;
  BOOL BVar2;
  DWORD DVar3;
  
  pvVar1 = GetCurrentProcess();
  if (param_1 == pvVar1) {
    *param_2 = (HANDLE)0xfffffffc;
  }
  else {
    BVar2 = OpenProcessToken(param_1,8,param_2);
    if (BVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0041d290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      DVar3 = GetLastError();
      return DVar3;
    }
  }
  return 0;
}



/* Function: FUN_0041d2a7 */

undefined4 __fastcall FUN_0041d2a7(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  void *_Dst;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 local_1c [8];
  undefined4 *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  uVar4 = 0;
  local_14 = param_2;
  iVar1 = NtQueryInformationToken(param_1,0x27,0,0,&local_8);
  if (iVar1 == -0x3fffffdd) {
    _Dst = (void *)FUN_0041d823(local_8);
    pvVar3 = _Dst;
    if (_Dst == (void *)0x0) {
      uVar4 = 8;
    }
    else {
      memset(_Dst,0,local_8);
      iVar1 = NtQueryInformationToken(param_1,0x27,_Dst,local_8,&local_8);
      if (iVar1 < 0) {
        uVar4 = RtlNtStatusToDosErrorNoTeb(iVar1);
      }
      else {
        if (*(int *)((int)_Dst + 4) != 0) {
          RtlInitUnicodeString(local_1c,L"WIN://SYSAPPID");
          uVar2 = 0;
          if (*(int *)((int)_Dst + 4) != 0) {
            local_c = 0;
            do {
              local_10 = *(int *)((int)_Dst + 8) + local_c;
              iVar1 = RtlCompareUnicodeString(local_1c,local_10,1);
              if (iVar1 == 0) {
                *param_3 = local_10;
                pvVar3 = (void *)0x0;
                *local_14 = _Dst;
                goto LAB_0041d376;
              }
              uVar2 = uVar2 + 1;
              local_c = local_c + 0x18;
            } while (uVar2 < *(uint *)((int)_Dst + 4));
          }
        }
        uVar4 = 0x490;
      }
    }
LAB_0041d376:
    _BaseConvertCharFree_4((int)pvVar3);
  }
  else if (iVar1 == 0) {
    uVar4 = 0x54f;
  }
  else {
    uVar4 = RtlNtStatusToDosErrorNoTeb(iVar1);
  }
  return uVar4;
}



/* Function: FUN_0041d39e */

undefined4 __fastcall FUN_0041d39e(int param_1,uint param_2,uint *param_3,void *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar2 = *(ushort **)(param_1 + 0x14);
  uVar1 = *puVar2;
  pwVar4 = wcschr(*(wchar_t **)(puVar2 + 2),L'_');
  iVar3 = *(int *)(puVar2 + 2);
  iVar7 = (int)pwVar4 + (2 - iVar3) >> 1;
  *param_3 = iVar7 + 0xeU;
  if (param_2 < iVar7 + 0xeU) {
    uVar5 = 0x7a;
  }
  else {
    memcpy(param_4,*(void **)(puVar2 + 2),iVar7 * 2);
    puVar8 = (undefined4 *)(iVar3 + ((uVar1 >> 1) - 0xd) * 2);
    puVar9 = (undefined4 *)(iVar7 * 2 + (int)param_4);
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
    *(undefined2 *)((int)param_4 + iVar7 * 2 + 0x1a) = 0;
    uVar5 = 0;
  }
  return uVar5;
}



/* Function: FUN_0041d425 */

int __fastcall FUN_0041d425(uint param_1,uint param_2,int *param_3,void *param_4)

{
  int iVar1;
  undefined2 *_Size;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  uVar3 = (uint)(*(ushort *)(*(int *)(param_1 + 0x14) + 8) >> 1);
  iVar1 = uVar3 + 1;
  local_8 = param_1;
  if (iVar1 == 0) {
    _Size = (undefined2 *)(uVar3 * 2);
    memcpy((void *)0x0,*(void **)(*(int *)(param_1 + 0x14) + 0xc),(size_t)_Size);
    *_Size = 0;
LAB_0041d458:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041d39e(param_1,param_2,&local_8,param_4);
    uVar3 = local_8;
    if (iVar2 != 0x7a) {
      if (iVar2 != 0) {
        return iVar2;
      }
      if (iVar1 + local_8 <= param_2) {
        iVar2 = local_8 - 1;
        *(undefined2 *)((int)param_4 + iVar2 * 2) = 0x21;
        FUN_0041d4c4(param_1,(param_2 - iVar2) - 1,&local_8,(void *)((int)param_4 + iVar2 * 2 + 2));
        *param_3 = uVar3 + iVar1;
        goto LAB_0041d458;
      }
    }
    iVar2 = 0x7a;
    *param_3 = iVar1 + local_8;
  }
  return iVar2;
}



/* Function: FUN_0041d4c4 */

undefined4 __fastcall FUN_0041d4c4(int param_1,uint param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  size_t _Size;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar4 = (uint)(*(ushort *)(iVar2 + 8) >> 1);
  uVar1 = uVar4 + 1;
  *param_3 = uVar1;
  if (param_2 < uVar1) {
    uVar3 = 0x7a;
  }
  else {
    _Size = uVar4 * 2;
    memcpy(param_4,*(void **)(iVar2 + 0xc),_Size);
    uVar3 = 0;
    *(undefined2 *)(_Size + (int)param_4) = 0;
  }
  return uVar3;
}



/* Function: FUN_0041d509 */

uint FUN_0041d509(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  HANDLE pvVar3;
  undefined4 in_ECX;
  uint uVar4;
  undefined4 unaff_retaddr;
  int *local_8;
  
  uVar4 = 0;
  *param_1 = 0;
  local_8 = (int *)0x0;
  uVar2 = CoGetCallContext((IID *)&DAT_00402d90,&local_8);
  if ((int)uVar2 < 0) {
    if (uVar2 == 0x80010117) {
      pvVar3 = GetCurrentProcess();
      *param_1 = pvVar3;
      goto LAB_0041d579;
    }
    FUN_0040899b(unaff_retaddr,0x58,"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",uVar2)
    ;
  }
  else {
    pcVar1 = *(code **)(*local_8 + 0xc);
    (*(code *)PTR_guard_check_icall_00421328)(local_8,in_ECX,param_1);
    uVar2 = (*pcVar1)();
    if (-1 < (int)uVar2) goto LAB_0041d579;
  }
  uVar4 = uVar2;
LAB_0041d579:
  FUN_00414048((int *)&local_8);
  return uVar4;
}



/* Function: FUN_0041d590 */

uint __fastcall FUN_0041d590(HANDLE param_1,undefined4 *param_2)

{
  void *pvVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  LPVOID pv;
  uint uVar5;
  undefined4 unaff_retaddr;
  HANDLE local_1c;
  void *pvStack_18;
  undefined4 *local_14;
  int local_10;
  uint local_c [2];
  
  local_10 = 0;
  *param_2 = 0;
  local_c[0] = 0;
  local_14 = param_2;
  FUN_0041d240(&local_10);
  DVar2 = FUN_0041d26e(param_1,&local_1c);
  if ((DVar2 == 0) &&
     (DVar2 = FUN_0041d2a7(local_1c,&local_10,(int *)local_c), local_1c != (HANDLE)0xfffffffc)) {
    CloseHandle(local_1c);
  }
  uVar5 = DVar2 & 0xffff | 0x80070000;
  if ((int)DVar2 < 1) {
    uVar5 = DVar2;
  }
  if ((uVar5 != 0x80070490) && (uVar5 != 0x80070005)) {
    if ((int)uVar5 < 0) {
      uVar4 = 0xa5;
    }
    else {
      iVar3 = FUN_0041d425(local_c[0],0,(int *)&local_1c,(void *)0x0);
      if (iVar3 == 0x7a) {
        pvStack_18 = (void *)0x0;
        CoTaskMemFree((LPVOID)0x0);
        uVar5 = FUN_0041bea1((short *)0x0,(uint)local_1c,extraout_ECX,&pvStack_18);
        pvVar1 = pvStack_18;
        if ((int)uVar5 < 0) {
          FUN_0040899b(unaff_retaddr,0xab,"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                       uVar5);
          pv = pvStack_18;
        }
        else {
          uVar5 = FUN_0041d425(local_c[0],(uint)local_1c,(int *)&local_1c,pvStack_18);
          if (uVar5 == 0) {
            *local_14 = pvVar1;
            uVar5 = 0;
            pv = (LPVOID)0x0;
          }
          else {
            uVar5 = FUN_004089ba(unaff_retaddr,0xac,
                                 "onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",uVar5);
            pv = pvStack_18;
          }
        }
        CoTaskMemFree(pv);
        goto LAB_0041d6ce;
      }
      uVar5 = 0x8000ffff;
      uVar4 = 0xa8;
    }
    FUN_0040899b(unaff_retaddr,uVar4,"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",uVar5
                );
  }
LAB_0041d6ce:
  FUN_0041d240(&local_10);
  return uVar5;
}



/* Function: FUN_0041d6e6 */

DWORD __fastcall FUN_0041d6e6(HANDLE param_1,undefined1 *param_2)

{
  HANDLE hObject;
  DWORD DVar1;
  BOOL BVar2;
  uint uVar3;
  DWORD local_10;
  int local_c;
  HANDLE local_8;
  
  local_8 = (HANDLE)0x0;
  *param_2 = 0;
  DVar1 = FUN_0041d26e(param_1,&local_8);
  uVar3 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar3 = DVar1;
  }
  if (-1 < (int)uVar3) {
    local_c = 0;
    BVar2 = GetTokenInformation(local_8,MaxTokenInfoClass,&local_c,4,&local_10);
    if (BVar2 == 0) {
      uVar3 = FUN_0040c1d4();
      if ((int)uVar3 < 0) goto LAB_0041d747;
    }
    else {
      uVar3 = 0;
    }
    *param_2 = local_c != 0;
  }
LAB_0041d747:
  hObject = local_8;
  local_8 = (HANDLE)0x0;
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
  }
  return uVar3;
}



/* Function: FUN_0041d76a */

undefined4 * __fastcall FUN_0041d76a(undefined4 *param_1,short *param_2,uint param_3)

{
  code *pcVar1;
  short *psVar2;
  undefined2 *_Dst;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  
  if ((param_2 == (short *)0x0) && (param_3 == 0xffffffff)) {
    FUN_00408aec(unaff_retaddr,0xdaf,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h"
                );
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  uVar4 = param_3;
  if (param_2 != (short *)0x0) {
    psVar2 = param_2;
    uVar4 = 0x7fffffff;
    if (param_3 < 0x7fffffff) {
      uVar4 = param_3;
    }
    for (; (uVar4 != 0 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
      uVar4 = uVar4 - 1;
    }
    uVar4 = (int)psVar2 - (int)param_2 >> 1;
  }
  if (param_3 == 0xffffffff) {
    param_3 = uVar4;
  }
  _Dst = (undefined2 *)CoTaskMemAlloc(param_3 * 2 + 2);
  if (_Dst != (undefined2 *)0x0) {
    if (param_2 == (short *)0x0) {
      *_Dst = 0;
    }
    else {
      memcpy_s(_Dst,param_3 * 2 + 2,param_2,uVar4 * 2);
      _Dst[uVar4] = 0;
    }
    _Dst[param_3] = 0;
  }
  *param_1 = _Dst;
  return param_1;
}



/* Function: FUN_0041d823 */

undefined4 __fastcall FUN_0041d823(uint param_1)

{
  undefined4 uVar1;
  
  if ((int)((ulonglong)param_1 * 0xc >> 0x20) != 0) {
    return 0;
  }
  uVar1 = RtlAllocateHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,
                          (int)((ulonglong)param_1 * 0xc),param_1);
  return uVar1;
}



/* Function: _BaseConvertCharFree@4 */

/* Library Function - Single Match
    _BaseConvertCharFree@4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _BaseConvertCharFree_4(int param_1)

{
  if (param_1 != 0) {
    RtlFreeHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,param_1);
  }
  return;
}



/* Function: FUN_0041d87f */

DWORD __fastcall FUN_0041d87f(HWND param_1,LPCWSTR param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  int *piVar5;
  LPVOID *ppv;
  int local_10;
  int *local_c;
  LPCWSTR local_8;
  
  local_8 = (LPCWSTR)0x0;
  CoTaskMemFree((LPVOID)0x0);
  uVar2 = FUN_0041dbfa(param_1,(int *)&local_8);
  if ((int)uVar2 < 0) {
    iVar3 = GetWindowBand(param_1,&local_10);
    if (iVar3 == 0) {
      DVar4 = FUN_0040c1d4();
      if ((int)DVar4 < 0) goto LAB_0041d97e;
    }
    if (local_10 != 1) {
      DVar4 = 0x80070057;
      goto LAB_0041d97e;
    }
    local_c = (int *)0x0;
    if (param_3 == (undefined4 *)0x0) {
      ppv = (LPVOID *)FUN_0041a60d((int *)&local_c);
      DVar4 = CoCreateInstance((IID *)&DAT_00402da0,(LPUNKNOWN)0x0,3,(IID *)&DAT_00402db0,ppv);
    }
    else {
      pcVar1 = *(code **)*param_3;
      piVar5 = FUN_0041a60d((int *)&local_c);
      (*(code *)PTR_guard_check_icall_00421328)(param_3,&DAT_00402db0,piVar5);
      DVar4 = (*pcVar1)();
    }
    piVar5 = local_c;
    if (-1 < (int)DVar4) {
      pcVar1 = *(code **)(*local_c + 0x14);
      CoTaskMemFree(local_8);
      (*(code *)PTR_guard_check_icall_00421328)(piVar5,param_1,&local_8,0,0,0);
      DVar4 = (*pcVar1)();
    }
    FUN_00414048((int *)&local_c);
    if ((int)DVar4 < 0) goto LAB_0041d97e;
  }
  iVar3 = CompareStringOrdinal(param_2,-1,local_8,-1,1);
  DVar4 = -(uint)(iVar3 != 2) & 0x80070005;
LAB_0041d97e:
  CoTaskMemFree(local_8);
  return DVar4;
}



/* Function: FUN_0041d995 */

DWORD __fastcall FUN_0041d995(HWND param_1,HANDLE param_2)

{
  char cVar1;
  DWORD DVar2;
  HLOCAL local_c;
  HWND local_8;
  
  local_c = (HLOCAL)0x0;
  local_8 = param_1;
  DVar2 = FUN_0041dd68(param_2,&local_c);
  if (-1 < (int)DVar2) {
    local_8 = (HWND)0x0;
    DVar2 = FUN_0041dce1(param_1,&local_8);
    if (-1 < (int)DVar2) {
      cVar1 = RtlEqualSid(local_c,local_8);
      if (cVar1 == '\0') {
        DVar2 = 0x80070005;
      }
    }
    LocalFree(local_8);
  }
  LocalFree(local_c);
  return DVar2;
}



/* Function: FUN_0041d9fe */

uint __fastcall FUN_0041d9fe(HWND param_1)

{
  code *pcVar1;
  int *piVar2;
  HANDLE hObject;
  uint uVar3;
  LPVOID *ppv;
  DWORD DVar4;
  int *local_18;
  int *local_14;
  LPCWSTR local_10;
  HANDLE local_c;
  char local_5;
  
  local_c = (HANDLE)0x0;
  uVar3 = FUN_0041d509(&local_c);
  if (((int)uVar3 < 0) || (uVar3 = FUN_0041d6e6(local_c,&local_5), (int)uVar3 < 0))
  goto LAB_0041db44;
  if (local_5 == '\0') {
    uVar3 = 1;
    goto LAB_0041db44;
  }
  uVar3 = FUN_0041d995(param_1,local_c);
  if (-1 < (int)uVar3) goto LAB_0041db44;
  local_10 = (LPCWSTR)0x0;
  local_18 = (int *)0x0;
  CoTaskMemFree((LPVOID)0x0);
  uVar3 = FUN_0041d590(local_c,&local_10);
  if ((int)uVar3 < 0) {
    local_14 = (int *)0x0;
    ppv = (LPVOID *)FUN_0041a60d((int *)&local_14);
    uVar3 = CoCreateInstance((IID *)&DAT_00402da0,(LPUNKNOWN)0x0,3,(IID *)&DAT_00402db0,ppv);
    if (-1 < (int)uVar3) {
      DVar4 = GetProcessId(local_c);
      piVar2 = local_14;
      pcVar1 = *(code **)(*local_14 + 0x18);
      CoTaskMemFree(local_10);
      (*(code *)PTR_guard_check_icall_00421328)(piVar2,DVar4,&local_10,0,0,0);
      uVar3 = (*pcVar1)();
      if (-1 < (int)uVar3) {
        if (local_18 != (int *)0x0) {
          pcVar1 = *(code **)(*local_18 + 8);
          (*(code *)PTR_guard_check_icall_00421328)(local_18);
          (*pcVar1)();
        }
        pcVar1 = *(code **)*local_14;
        (*(code *)PTR_guard_check_icall_00421328)(local_14,&DAT_00402a1c,&local_18);
        uVar3 = (*pcVar1)();
      }
    }
    FUN_00414048((int *)&local_14);
    if (-1 < (int)uVar3) goto LAB_0041db24;
  }
  else {
LAB_0041db24:
    uVar3 = FUN_0041d87f(param_1,local_10,local_18);
  }
  FUN_00414048((int *)&local_18);
  CoTaskMemFree(local_10);
LAB_0041db44:
  hObject = local_c;
  local_c = (HANDLE)0x0;
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
  }
  return uVar3;
}



/* Function: FUN_0041db67 */

void __fastcall FUN_0041db67(HWND param_1,int *param_2)

{
  HANDLE pvVar1;
  UINT UVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  int local_20c;
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00420100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  pvVar1 = GetPropW(param_1,L"{9F4C2855-9F79-4B39-A8D0-E1D42DE1D5F3} 5");
  uVar3 = extraout_EDX;
  if (((ATOM)pvVar1 != 0) &&
     (UVar2 = GlobalGetAtomNameW((ATOM)pvVar1,local_208,0x100), uVar3 = extraout_EDX_00, UVar2 != 0)
     ) {
    FUN_0041d76a(&local_20c,local_208,UVar2);
    *param_2 = local_20c;
    uVar3 = extraout_EDX_01;
    if (local_20c == 0) {
      FUN_0040899b(unaff_retaddr,0x60,
                   "onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",0x8007000e);
      uVar3 = extraout_EDX_02;
    }
  }
  FUN_0041e250(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0041dbfa */

uint __fastcall FUN_0041dbfa(HWND param_1,int *param_2)

{
  DWORD DVar1;
  HANDLE hObject;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  int unaff_retaddr;
  undefined8 local_18;
  int *local_10;
  HWND local_c;
  DWORD local_8;
  
  uVar4 = 0;
  *param_2 = 0;
  local_10 = param_2;
  local_c = param_1;
  DVar1 = GetWindowThreadProcessId(param_1,&local_8);
  if (DVar1 == 0) {
    uVar4 = FUN_004089d9(unaff_retaddr,0x6c,0x402e14);
    return uVar4;
  }
  hObject = OpenProcess(0x1000,0,local_8);
  if ((hObject == (HANDLE)0x0) || (hObject == (HANDLE)0xffffffff)) {
    uVar3 = FUN_00408232(extraout_ECX);
  }
  else {
    local_18 = 0;
    iVar2 = Ordinal_2521(hObject,&local_18);
    if (iVar2 == 0) {
      uVar3 = FUN_004089d9(unaff_retaddr,0x72,0x402e14);
    }
    else if (((int)local_18 == 2) &&
            (uVar3 = FUN_0041db67(local_c,param_2), param_2 = local_10, (int)uVar3 < 0)) {
      FUN_0040899b(unaff_retaddr,0x79,
                   "onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",uVar3);
    }
    else if ((*param_2 != 0) || (uVar3 = FUN_0041d590(hObject,param_2), -1 < (int)uVar3))
    goto LAB_0041dccd;
  }
  uVar4 = uVar3;
  if (hObject == (HANDLE)0x0) {
    return uVar4;
  }
  if (hObject == (HANDLE)0xffffffff) {
    return uVar4;
  }
LAB_0041dccd:
  CloseHandle(hObject);
  return uVar4;
}



/* Function: FUN_0041dce1 */

void __fastcall FUN_0041dce1(HWND param_1,undefined4 *param_2)

{
  DWORD DVar1;
  HWND local_8;
  
  *param_2 = 0;
  local_8 = param_1;
  DVar1 = GetWindowThreadProcessId(param_1,(LPDWORD)&local_8);
  if ((DVar1 == 0) && (DVar1 = FUN_0040c1d4(), (int)DVar1 < 0)) {
    return;
  }
  FUN_0041dd18((DWORD)local_8,param_2);
  return;
}



/* Function: FUN_0041dd18 */

DWORD __fastcall FUN_0041dd18(DWORD param_1,undefined4 *param_2)

{
  HANDLE hObject;
  DWORD DVar1;
  
  *param_2 = 0;
  hObject = OpenProcess(0x1000,0,param_1);
  if ((hObject == (HANDLE)0x0) && (DVar1 = FUN_0040c1d4(), (int)DVar1 < 0)) {
    return DVar1;
  }
  DVar1 = FUN_0041dd68(hObject,param_2);
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
  }
  return DVar1;
}



/* Function: FUN_0041dd68 */

DWORD __fastcall FUN_0041dd68(HANDLE param_1,undefined4 *param_2)

{
  HANDLE hObject;
  DWORD DVar1;
  uint uVar2;
  HANDLE local_8;
  
  local_8 = (HANDLE)0x0;
  *param_2 = 0;
  DVar1 = FUN_0041d26e(param_1,&local_8);
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  if (-1 < (int)uVar2) {
    uVar2 = FUN_0041ddc2(local_8,param_2);
  }
  hObject = local_8;
  local_8 = (HANDLE)0x0;
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
  }
  return uVar2;
}



/* Function: FUN_0041ddc2 */

DWORD __fastcall FUN_0041ddc2(HANDLE param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  int *TokenInformation;
  HLOCAL pDestinationSid;
  uint uVar3;
  DWORD DVar4;
  SIZE_T local_8;
  
  BVar1 = GetTokenInformation(param_1,TokenLogonSid|TokenPrivileges,(LPVOID)0x0,0,&local_8);
  if (BVar1 != 0) {
    return -(uint)(BVar1 != 0) & 0x8000ffff;
  }
  DVar2 = GetLastError();
  if (DVar2 != 0x7a) {
    uVar3 = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      uVar3 = DVar2;
    }
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  TokenInformation = (int *)LocalAlloc(0x40,local_8);
  if (TokenInformation == (int *)0x0) {
    return 0x8007000e;
  }
  BVar1 = GetTokenInformation(param_1,TokenLogonSid|TokenPrivileges,TokenInformation,local_8,
                              &local_8);
  if ((BVar1 == 0) && (DVar2 = FUN_0040c1d4(), (int)DVar2 < 0)) {
    return DVar2;
  }
  if (*TokenInformation == 0) {
    DVar4 = 0x80070490;
  }
  else {
    DVar2 = GetLengthSid((PSID)*TokenInformation);
    pDestinationSid = LocalAlloc(0x40,DVar2);
    DVar4 = 0x8007000e;
    if (pDestinationSid != (HLOCAL)0x0) {
      BVar1 = CopySid(DVar2,pDestinationSid,(PSID)*TokenInformation);
      if (BVar1 == 0) {
        DVar4 = FUN_0040c1d4();
        if ((int)DVar4 < 0) {
          LocalFree(pDestinationSid);
          goto LAB_0041deb4;
        }
      }
      else {
        DVar4 = 0;
      }
      *param_2 = pDestinationSid;
    }
  }
LAB_0041deb4:
  LocalFree(TokenInformation);
  return DVar4;
}



/* Function: FUN_0041dec8 */

void FUN_0041dec8(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_00402e50,DelayLoadFailureHook_exref,param_2,DAT_00402e50);
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0041e3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: FUN_0041df10 */

undefined4 FUN_0041df10(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_0041e1d0();
  DAT_004201d8 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_0041e4a4(2);
  __set_app_type(iVar2);
  DAT_004208b8 = 0xffffffff;
  DAT_004208bc = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_004201ec;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_004201e0;
  FUN_0041e500();
  if (DAT_004200c0 == 0) {
    __setusermatherr(FUN_0041e500);
  }
  FUN_0041e707();
  return 0;
}



/* Function: FUN_0041df80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041df80(void)

{
  _DAT_004201dc = DAT_004201e8;
  _DAT_004201d4 =
       __wgetmainargs((int *)&DAT_004201c8,(wchar_t ***)&DAT_004201cc,(wchar_t ***)&DAT_004201d0,
                      DAT_004201e4,(_startupinfo *)&DAT_004201dc);
  return;
}



/* Function: FUN_0041dfb9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint FUN_0041dfb9(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  WCHAR WVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  uint uVar8;
  _STARTUPINFOW local_6c;
  WCHAR *local_24;
  uint local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0041eb00;
  uStack_c = 0x41dfc5;
  local_20 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = (undefined *)0x0;
  iVar6 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar5 = 0;
    LOCK();
    iVar3 = iVar6;
    if (DAT_004208b0 != 0) {
      iVar5 = DAT_004208b0;
      iVar3 = DAT_004208b0;
    }
    DAT_004208b0 = iVar3;
    UNLOCK();
    if (iVar5 == 0) goto LAB_0041e00e;
    if (iVar5 == iVar6) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_0041e00e:
  if (DAT_004208b4 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_004208b4 == 0) {
    DAT_004208b4 = 1;
    iVar6 = FUN_0041e199((undefined4 *)&DAT_0040184c,(undefined4 *)&DAT_00401858);
    if (iVar6 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_004201c4 = 1;
  }
  if (DAT_004208b4 == 1) {
    initterm(&DAT_0040180c,&DAT_00401848);
    DAT_004208b4 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_004208b0 = 0;
    UNLOCK();
  }
  if ((DAT_004208c0 != (code *)0x0) &&
     (BVar7 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004208c0), pcVar2 = DAT_004208c0, BVar7 != 0
     )) {
    (*(code *)PTR_guard_check_icall_00421328)(0,2,0);
    (*pcVar2)();
  }
  local_24 = *(WCHAR **)_wcmdln_exref;
  uVar8 = local_20;
  if (local_24 == (LPCWSTR)0x0) {
    ExceptionList = local_14;
    return 0xff;
  }
  do {
    WVar4 = *local_24;
    if ((ushort)WVar4 < 0x21) {
      if (WVar4 == L'\0') goto LAB_0041e0f0;
      if (uVar8 == 0) {
        while ((WVar4 != L'\0' && ((ushort)WVar4 < 0x21))) {
          local_24 = local_24 + 1;
          WVar4 = *local_24;
        }
LAB_0041e0f0:
        DAT_004201c0 = FUN_00413df5(0x400000,0,local_24);
        if (DAT_004201d8 == 0) {
                    /* WARNING: Subroutine does not return */
          exit(DAT_004201c0);
        }
        if (DAT_004201c4 == 0) {
          _cexit();
          ExceptionList = local_14;
          return DAT_004201c0;
        }
        ExceptionList = local_14;
        return DAT_004201c0;
      }
    }
    if (WVar4 == L'\"') {
      uVar8 = (uint)(uVar8 == 0);
      local_20 = uVar8;
    }
    local_24 = local_24 + 1;
  } while( true );
}



/* Function: FUN_0041e199 */

void __cdecl FUN_0041e199(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_00421328)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_0041e1d0 */

bool FUN_0041e1d0(void)

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
  FUN_0041e669();
  FUN_0041dfb9();
  return;
}



/* Function: FUN_0041e250 */

void __fastcall FUN_0041e250(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00420100) {
    return;
  }
  FUN_0041e7eb(param_1,param_2);
  return;
}



/* Function: FUN_0041e266 */

void FUN_0041e266(size_t param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0041ea66;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0041e97d(param_1);
  FUN_0041e2ae();
  return;
}



/* Function: Catch_All@0041e2a1 */

undefined * Catch_All_0041e2a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  return &DAT_0041e2ab;
}



/* Function: FUN_0041e2ae */

void FUN_0041e2ae(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_0041e2c9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_0041e2c9(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0041eb78;
  uStack_c = 0x41e2d5;
  local_20[0] = DAT_004208bc;
  if (DAT_004208bc == -1) {
    (*(code *)PTR_guard_check_icall_00421328)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_004208bc;
    local_24 = DAT_004208b8;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_004208bc = local_20[0];
    DAT_004208b8 = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_0041e363();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_0041e363 */

void FUN_0041e363(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_0041e372 */

int __cdecl FUN_0041e372(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_0041e2c9(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* Function: FUN_0041e39c */

void FUN_0041e39c(size_t param_1)

{
  FUN_0041e266(param_1);
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0041e3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: FUN_0041e3c0 */

undefined4 FUN_0041e3c0(int *param_1)

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



/* Function: FUN_0041e410 */

undefined4 FUN_0041e410(void)

{
  SetUnhandledExceptionFilter(FUN_0041e3c0);
  return 0;
}



/* Function: FUN_0041e430 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_0041e430(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0041e4a4 */

undefined4 __cdecl FUN_0041e4a4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_0041e430(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0041e4e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_0041e500 */

undefined4 FUN_0041e500(void)

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
  
  pcStack_10 = FUN_0041e790;
  local_14 = ExceptionList;
  local_c = DAT_00420100 ^ 0x41ebb8;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_0041e630((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_0041e630 */

bool __cdecl FUN_0041e630(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_0041e669 */

void FUN_0041e669(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00420100 == 0xbb40e64e) || ((DAT_00420100 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00420100 & 0xffff0000, DAT_00420100 = local_8, uVar1 == 0)) {
      DAT_00420100 = 0xbb40e64f;
    }
  }
  DAT_00420140 = ~DAT_00420100;
  return;
}



/* Function: FUN_0041e707 */

void FUN_0041e707(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041e720. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00420100 ^ (uint)&param_2;
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



/* Function: FUN_0041e790 */

void __cdecl
FUN_0041e790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00420100,FUN_0041e250,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0041e7bb */

void __cdecl FUN_0041e7bb(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0041e7eb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041e7eb(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_00420300 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_00420304 = &stack0x00000004;
  _DAT_00420240 = 0x10001;
  _DAT_004201f0 = 0xc0000409;
  _DAT_004201f4 = 1;
  _DAT_00420200 = 3;
  DAT_00420204 = 2;
  DAT_00420208 = DAT_00420100;
  DAT_0042020c = DAT_00420140;
  uStack_c = DAT_00420100;
  uStack_8 = DAT_00420140;
  _DAT_004201fc = unaff_retaddr;
  _DAT_004202cc = in_GS;
  _DAT_004202d0 = in_FS;
  _DAT_004202d4 = in_ES;
  _DAT_004202d8 = in_DS;
  _DAT_004202dc = unaff_EDI;
  _DAT_004202e0 = unaff_ESI;
  _DAT_004202e4 = unaff_EBX;
  _DAT_004202e8 = param_2;
  _DAT_004202ec = param_1;
  _DAT_004202f0 = in_EAX;
  _DAT_004202f4 = unaff_EBP;
  DAT_004202f8 = unaff_retaddr;
  _DAT_004202fc = in_CS;
  _DAT_00420308 = in_SS;
  FUN_0041e7bb((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0041e90b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0041e917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041e923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0041e92f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: DelayLoad_UMgrQueryUserContext */

void DelayLoad_UMgrQueryUserContext(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0041dec8(&ImgDelayDescr_0041ebf0,&UMgrQueryUserContext_exref);
                    /* WARNING: Could not recover jumptable at 0x0041e954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_IsEnhancedWindowingEnabled */

void DelayLoad_IsEnhancedWindowingEnabled(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)FUN_0041dec8(&ImgDelayDescr_0041ec10,&IsEnhancedWindowingEnabled_exref);
                    /* WARNING: Could not recover jumptable at 0x0041e975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_0041e97d */

void * __cdecl FUN_0041e97d(size_t param_1)

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



/* Function: malloc */

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041e9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



/* Function: _callnewh */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041e9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
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
  
                    /* WARNING: Could not recover jumptable at 0x0041ea41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041ea4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041ea59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: FUN_0041ea90 */

int FUN_0041ea90(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int in_EAX;
  int *piVar4;
  int *lpMem;
  int *local_8;
  
  lpMem = DAT_004200a4;
  if (DAT_004200a4 != (int *)0x0) {
    local_8 = DAT_004200a4;
    cVar1 = FUN_00408330();
    if (cVar1 == '\0') {
      iVar2 = FUN_00416dfc(lpMem + 1,&local_8);
      *lpMem = *lpMem + -1;
      piVar4 = local_8;
      if (*lpMem == 0) {
        FUN_00415cfa(lpMem + 2,0);
        FUN_00415cfa(lpMem + 3,0);
        if (local_8 != (int *)0x0) {
          DVar3 = GetLastError();
          FUN_00409421(local_8);
          SetLastError(DVar3);
        }
        FUN_004165e8((int)lpMem);
        DVar3 = 0;
        hHeap = GetProcessHeap();
        iVar2 = HeapFree(hHeap,DVar3,lpMem);
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        iVar2 = FUN_00409421(piVar4);
      }
    }
    else {
      *lpMem = *lpMem + -1;
      iVar2 = *lpMem;
    }
    return iVar2;
  }
  return in_EAX;
}



/* Function: FUN_0041eab0 */

void FUN_0041eab0(void)

{
  FUN_00415c48((int *)&DAT_00420150);
  return;
}



/* Function: FUN_0041eac0 */

void FUN_0041eac0(void)

{
  FUN_00415ac3(&DAT_004207e8);
  return;
}



/* Function: FUN_0041ead0 */

void FUN_0041ead0(void)

{
  FUN_00415a6d(&DAT_0042017c);
  return;
}



/* Function: FUN_0041eae0 */

void FUN_0041eae0(void)

{
  FUN_0041c661((undefined4 *)&DAT_004206d8);
  return;
}



/* Function: FUN_0041eaf0 */

void FUN_0041eaf0(void)

{
  FUN_0041c661((undefined4 *)&DAT_00420740);
  return;
}



