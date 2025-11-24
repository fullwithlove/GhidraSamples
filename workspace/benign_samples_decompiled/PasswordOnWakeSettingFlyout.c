/* Function: FUN_00402390 */

void FUN_00402390(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_0040c230)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00402413 */

void FUN_00402413(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x532;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_004024a8 */

uint __thiscall FUN_004024a8(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_004024df:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_004024df;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_004024eb */

void __fastcall
FUN_004024eb(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  FUN_00402c0d(param_20,local_18);
  FUN_00402c5b(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_00402c0d(param_17,local_48);
  FUN_00402c5b(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00402c5b(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00402c0d(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_00402c5b(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_00402c5b(param_8,local_d8);
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
  FUN_00402413(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x12,local_128);
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004026a6 */

void __fastcall
FUN_004026a6(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  FUN_00402c5b(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_00402c0d(param_19,local_48);
  FUN_00402c5b(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00402c0d(param_16,local_78);
  FUN_00402c5b(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_00402c5b(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_00402c0d(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_00402c5b(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_00402c5b(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00402413(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00402899 */

void __fastcall
FUN_00402899(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
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
  FUN_00402413(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,9,local_98);
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040294e */

void __fastcall
FUN_0040294e(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
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
  FUN_00402413(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,10,local_a8);
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00402a16 */

void __fastcall
FUN_00402a16(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  local_18 = param_22;
  local_10 = 4;
  FUN_00402c5b(param_21,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_20;
  local_30 = 4;
  FUN_00402c5b(param_19,local_48);
  FUN_00402c5b(param_18,local_58);
  FUN_00402c5b(param_17,local_68);
  FUN_00402c5b(param_16,local_78);
  local_88 = param_15;
  local_84 = 0;
  local_80 = 2;
  local_7c = 0;
  FUN_00402c5b(param_14,local_98);
  FUN_00402c5b(param_13,local_a8);
  FUN_00402c5b(param_12,local_b8);
  local_c8 = param_11;
  local_c4 = 0;
  local_c0 = 2;
  local_bc = 0;
  FUN_00402c5b(param_10,local_d8);
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
  FUN_00402413(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00402c0d */

void __thiscall FUN_00402c0d(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = &DAT_004014b0;
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



/* Function: FUN_00402c5b */

void __thiscall FUN_00402c5b(void *this,undefined4 *param_1)

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



/* Function: FUN_00402ca0 */

void FUN_00402ca0(void)

{
  FUN_004067e0();
  FUN_004099d4(FUN_00409cd0);
  return;
}



/* Function: FUN_00402cc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402cc0(void)

{
  _DAT_0040b51c = FUN_00405950;
  _DAT_0040b518 = FUN_004059d0;
  _DAT_0040b514 = FUN_00405a40;
  return;
}



/* Function: FUN_00402cf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402cf0(void)

{
  _DAT_0040b53c = FUN_00405c00;
  return;
}



/* Function: FUN_00402d10 */

void FUN_00402d10(void)

{
  DAT_0040b510 = FUN_004084c0;
  DAT_0040b4f0 = DebugBreak;
  DAT_0040b500 = FUN_00408500;
  DAT_0040b4e0 = FUN_00408570;
  DAT_0040b4c8 = FUN_00408640;
  DAT_0040b4a0 = FUN_004085c0;
  DAT_0040b4a8 = FUN_00408600;
  return;
}



/* Function: FUN_00402d60 */

void FUN_00402d60(void)

{
  FUN_004099d4(FUN_00409ce0);
  return;
}



/* Function: FUN_00402d80 */

void FUN_00402d80(void)

{
  FUN_004099d4(FUN_00409d00);
  return;
}



/* Function: FUN_00402da0 */

void FUN_00402da0(void)

{
  DAT_0040b4cc = FUN_00408b80;
  DAT_0040b49c = &PTR_s_WilError_03_0040b060;
  DAT_0040b504 = &DAT_0040b110;
  return;
}



/* Function: FUN_00402dd0 */

void FUN_00402dd0(void)

{
  DAT_0040b510 = FUN_004084c0;
  DAT_0040b4f0 = DebugBreak;
  DAT_0040b500 = FUN_00408500;
  return;
}



/* Function: FUN_00402df5 */

DWORD __fastcall FUN_00402df5(LPCWSTR param_1,int *param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  LPCWSTR local_c;
  LPWSTR *local_8;
  
  local_c = param_1;
  local_8 = (LPWSTR *)param_1;
  local_8 = CommandLineToArgvW(param_1,(int *)&local_c);
  if (local_8 == (LPWSTR *)0x0) {
    DVar2 = GetLastError();
    DVar3 = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      DVar3 = DVar2;
    }
  }
  else {
    if (local_c == (LPCWSTR)0x4) {
      iVar4 = 0;
      do {
        iVar1 = _wtoi(local_8[iVar4]);
        if (iVar4 == 0) {
          *param_2 = iVar1;
        }
        else if (iVar4 == 1) {
          param_2[1] = iVar1;
        }
        else if (iVar4 == 2) {
          param_2[2] = iVar1;
        }
        else {
          if (iVar4 == 3) {
            param_2[3] = iVar1;
            return 0;
          }
          if (3 < iVar4 + 1) {
            return 0;
          }
        }
        iVar4 = iVar4 + 1;
      } while( true );
    }
    DVar3 = 0x8000ffff;
  }
  return DVar3;
}



/* Function: FUN_00402e85 */

void FUN_00402e85(undefined4 param_1,undefined4 param_2,LPCWSTR param_3)

{
  HRESULT HVar1;
  DWORD DVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  DAT_0040b494 = param_1;
  HVar1 = CoInitializeEx((LPVOID)0x0,2);
  uVar3 = extraout_EDX;
  if (-1 < HVar1) {
    DVar2 = FUN_00402df5(param_3,&local_18);
    if (-1 < (int)DVar2) {
      FUN_00403430(local_18,uStack_14,uStack_10,uStack_c);
    }
    CoUninitialize();
    uVar3 = extraout_EDX_00;
  }
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00402f07 */

void __fastcall FUN_00402f07(undefined4 param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = RoGetMatchingRestrictedErrorInfo(param_1,&local_8);
  if (-1 < iVar1) {
    SetRestrictedErrorInfo(local_8);
  }
  FUN_004035e3(&local_8);
  return;
}



/* Function: FUN_00402f39 */

undefined4 * __thiscall FUN_00402f39(void *this,undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_0040b498;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined ***)this = &PTR_FUN_00401060;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_0040c230)(piVar2);
    (*pcVar1)();
  }
  *(undefined ***)this = &PTR_FUN_0040107c;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(int **)((int)this + 0x10) = param_2;
  if (param_2 != (int *)0x0) {
    pcVar1 = *(code **)(*param_2 + 4);
    (*(code *)PTR_guard_check_icall_0040c230)(param_2);
    (*pcVar1)();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00402fa0 */

void FUN_00402fa0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  iVar1 = LoadStringW(DAT_0040b494,*(UINT *)(param_1 + 0xc),local_210,0x104);
  uVar2 = extraout_EDX;
  if (iVar1 - 1U < 0x104) {
    FUN_00403bbe(local_210,param_2);
    uVar2 = extraout_EDX_00;
  }
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_00403010 */

undefined4 FUN_00403010(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}



/* Function: FUN_00403030 */

undefined4 FUN_00403030(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_0040c230)(piVar1);
    (*pcVar2)();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}



/* Function: FUN_00403070 */

void * __thiscall FUN_00403070(void *this,byte param_1)

{
  FUN_004035e3((int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_004030a1 */

void __thiscall
FUN_004030a1(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  HRESULT HVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 extraout_EDX;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  local_20 = (int *)0x0;
  HVar3 = CoCreateInstance((IID *)&DAT_004012e4,(LPUNKNOWN)0x0,1,(IID *)&DAT_004014a0,&local_20);
  if (-1 < HVar3) {
    pcVar1 = *(code **)(*local_20 + 0xc);
    (*(code *)PTR_guard_check_icall_0040c230)(local_20,1);
    iVar4 = (*pcVar1)();
    if (-1 < iVar4) {
      local_1c = (int *)0x0;
      pcVar1 = *(code **)(*local_20 + 0x18);
      (*(code *)PTR_guard_check_icall_0040c230)
                (local_20,*(undefined4 *)((int)this + 0xc),&local_18,1,&local_1c);
      iVar4 = (*pcVar1)();
      if (-1 < iVar4) {
        lVar5 = FUN_0040326d(this,local_1c);
        if (-1 < lVar5) {
          iVar4 = FUN_00403354(this,local_1c);
          piVar2 = local_1c;
          if (-1 < iVar4) {
            pcVar1 = *(code **)(*local_1c + 0x54);
            puVar6 = FUN_00403729(&local_24,this);
            (*(code *)PTR_guard_check_icall_0040c230)(piVar2,*puVar6);
            iVar4 = (*pcVar1)();
            FUN_004035e3(&local_24);
            piVar2 = local_1c;
            if (-1 < iVar4) {
              if (*(int **)((int)this + 0x10) != local_1c) {
                if (local_1c != (int *)0x0) {
                  pcVar1 = *(code **)(*local_1c + 4);
                  (*(code *)PTR_guard_check_icall_0040c230)(local_1c);
                  (*pcVar1)();
                }
                local_24 = *(int *)((int)this + 0x10);
                *(int **)((int)this + 0x10) = piVar2;
                FUN_004035e3(&local_24);
              }
              pcVar1 = *(code **)(**(int **)((int)this + 0x10) + 0x88);
              (*(code *)PTR_guard_check_icall_0040c230)(*(int **)((int)this + 0x10));
              (*pcVar1)();
            }
          }
        }
      }
      FUN_004035e3((int *)&local_1c);
    }
  }
  FUN_004035e3((int *)&local_20);
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00403200 */

undefined4 __fastcall FUN_00403200(void *param_1)

{
  FUN_00403313(param_1,0);
  return 0;
}



/* Function: FUN_00403220 */

int __thiscall FUN_00403220(void *this,undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  void *local_8;
  
  iVar2 = 0;
  if (param_2 != (int *)0x0) {
    pcVar1 = *(code **)(*param_2 + 0x10);
    local_8 = this;
    (*(code *)PTR_guard_check_icall_0040c230)(param_2,&local_8);
    iVar2 = (*pcVar1)();
    if ((-1 < iVar2) && (local_8 == (void *)0xbba)) {
      FUN_00403313(this,1);
    }
  }
  return iVar2;
}



/* Function: FUN_0040326d */

long __thiscall FUN_0040326d(void *this,int *param_1)

{
  DUIXmlParser *this_00;
  code *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  Element **ppEVar4;
  void *local_8;
  
  local_8 = this;
  puVar2 = (undefined4 *)FUN_004063a2();
  lVar3 = -0x7ff8fff2;
  if (((puVar2 != (undefined4 *)0x0) &&
      (this_00 = (DUIXmlParser *)*puVar2, this_00 != (DUIXmlParser *)0x0)) &&
     (lVar3 = DirectUI::DUIXmlParser::SetXMLFromResource
                        (this_00,0xc9,DAT_0040b494,(HINSTANCE__ *)&IMAGE_DOS_HEADER_00400000),
     -1 < lVar3)) {
    ppEVar4 = (Element **)((int)this + 0x14);
    lVar3 = DirectUI::DUIXmlParser::CreateElement
                      (this_00,(ushort *)L"main",(Element *)0x0,(Element *)0x0,(ulong *)&local_8,
                       ppEVar4);
    if (-1 < lVar3) {
      DirectUI::Element::EndDefer(*ppEVar4,(ulong)local_8);
      pcVar1 = *(code **)(*param_1 + 0xb0);
      (*(code *)PTR_guard_check_icall_0040c230)(param_1,*ppEVar4);
      lVar3 = (*pcVar1)();
      if (lVar3 < 0) {
        DirectUI::Element::Destroy(*ppEVar4,false);
        *ppEVar4 = (Element *)0x0;
      }
    }
  }
  return lVar3;
}



/* Function: FUN_00403313 */

void __thiscall FUN_00403313(void *this,undefined1 param_1)

{
  code *pcVar1;
  int *local_8;
  
  local_8 = *(int **)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x18) = param_1;
  if (local_8 != (int *)0x0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    pcVar1 = *(code **)(*local_8 + 0x94);
    (*(code *)PTR_guard_check_icall_0040c230)(local_8);
    (*pcVar1)();
    FUN_004035e3((int *)&local_8);
  }
  return;
}



/* Function: FUN_00403354 */

undefined4 __thiscall FUN_00403354(void *this,int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  void *this_00;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *local_10;
  int local_c;
  undefined4 *local_8;
  
  piVar3 = (int *)FUN_004094a6(0x14);
  piVar2 = DAT_0040b498;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[2] = 1;
    *piVar3 = (int)&PTR_FUN_00401024;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0040c230)(piVar2);
      (*pcVar1)();
    }
    piVar3[3] = (int)this;
    piVar3[4] = (int)FUN_00403220;
    *piVar3 = (int)&PTR_FUN_0040104c;
  }
  puVar5 = (undefined4 *)0x0;
  local_10 = piVar3;
  this_00 = (void *)FUN_004094a6(0x14);
  if (this_00 != (void *)0x0) {
    puVar5 = FUN_00402f39(this_00,0xbba,piVar3);
  }
  local_c = 0;
  local_8 = puVar5;
  FUN_004035e3(&local_c);
  FUN_004035e3((int *)&local_10);
  uVar4 = 0x8007000e;
  if (local_8 != (undefined4 *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0x20);
    (*(code *)PTR_guard_check_icall_0040c230)(param_1,1,&local_8);
    uVar4 = (*pcVar1)();
  }
  FUN_004035e3((int *)&local_8);
  return uVar4;
}



/* Function: FUN_00403430 */

int FUN_00403430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  LPVOID *ppv;
  int iVar3;
  int *this;
  uint uVar4;
  undefined4 unaff_EDI;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  ppv = (LPVOID *)FUN_00409107((int *)&local_8);
  iVar3 = CoCreateInstance((IID *)&DAT_00401908,(LPUNKNOWN)0x0,0x404,(IID *)&DAT_00401928,ppv);
  if (-1 < iVar3) {
    iVar3 = FUN_00409062(local_8,&local_c);
  }
  FUN_004035e3((int *)&local_8);
  if (-1 < iVar3) {
    local_8 = (int *)0x0;
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0040c230)(local_c,1,&DAT_00401490,&local_8);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      pcVar1 = *(code **)(*local_8 + 0x10);
      (*(code *)PTR_guard_check_icall_0040c230)(local_8,&local_10);
      iVar3 = (*pcVar1)();
      if (-1 < iVar3) {
        iVar3 = InitProcessPriv(0xe,0x400000,1,1,1);
        if (-1 < iVar3) {
          iVar3 = FUN_0040621e(0x10002,0);
          if (-1 < iVar3) {
            this = (int *)FUN_004094a6(0x1c);
            if (this == (int *)0x0) {
              iVar3 = -0x7ff8fff2;
            }
            else {
              cVar2 = FUN_00409b71((uint3)unaff_EDI);
              uVar4 = 2;
              *this = -0x7ff8ffeb;
              this[1] = 2;
              if (cVar2 != '\0') {
                uVar4 = 0;
              }
              this[2] = uVar4;
              iVar3 = FUN_0040621e(2,uVar4);
              this[3] = local_10;
              *this = iVar3;
              this[4] = 0;
              this[5] = 0;
              *(undefined1 *)(this + 6) = 0;
              iVar3 = FUN_004030a1(this,param_1,param_2,param_3,param_4);
              if (-1 < iVar3) {
                StartMessagePump();
                if ((char)this[6] == '\0') {
                  iVar3 = -0x7ff8fb39;
                }
              }
              FUN_004035be(this);
              free(this);
            }
            FUN_00406315();
          }
          UnInitProcessPriv(0x400000);
        }
      }
    }
    FUN_004035e3((int *)&local_8);
  }
  FUN_004035e3((int *)&local_c);
  return iVar3;
}



/* Function: FUN_004035be */

void __fastcall FUN_004035be(int *param_1)

{
  FUN_004035e3(param_1 + 4);
  if (-1 < *param_1) {
    FUN_00406315();
    *param_1 = -0x7ff8ffeb;
  }
  return;
}



/* Function: FUN_004035e3 */

void __fastcall FUN_004035e3(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040c230)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00403610 */

int FUN_00403610(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_004039af(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x18);
      (*(code *)PTR_guard_check_icall_0040c230)(1);
      (*pcVar1)();
    }
    if (DAT_0040b498 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0040b498 + 8);
      (*(code *)PTR_guard_check_icall_0040c230)(DAT_0040b498);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00403670 */

void FUN_00403670(int param_1)

{
  FUN_0040397f((int *)(param_1 + 8));
  return;
}



/* Function: FUN_00403690 */

undefined4 FUN_00403690(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00403954(param_2,(int *)&DAT_00401480);
  if (iVar1 == 0) {
    iVar1 = FUN_00403954(extraout_ECX,(int *)&DAT_00401470);
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
  (*(code *)PTR_guard_check_icall_0040c230)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_00403700 */

void * __thiscall FUN_00403700(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* Function: FUN_00403729 */

undefined4 * __fastcall FUN_00403729(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_004094a6(0x14);
  piVar2 = DAT_0040b498;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_00401010;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0040c230)(piVar2);
      (*pcVar1)();
    }
    puVar3[3] = param_2;
    puVar3[4] = FUN_00403200;
    *puVar3 = &PTR_FUN_00401038;
  }
  *param_1 = puVar3;
  return param_1;
}



/* Function: FUN_004037a0 */

int FUN_004037a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_0040c230)(param_2,param_3);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    FUN_00402f07(iVar2);
  }
  return iVar2;
}



/* Function: FUN_004037e0 */

int FUN_004037e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_004039af(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_0040c230)(1);
      (*pcVar1)();
    }
    if (DAT_0040b498 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0040b498 + 8);
      (*(code *)PTR_guard_check_icall_0040c230)(DAT_0040b498);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00403840 */

undefined4 FUN_00403840(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00403954(param_2,(int *)&DAT_00401480);
  if (iVar1 == 0) {
    iVar1 = FUN_00403954(extraout_ECX,(int *)&DAT_00401460);
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
  (*(code *)PTR_guard_check_icall_0040c230)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_004038b0 */

int FUN_004038b0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_0040c230)(param_2);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    FUN_00402f07(iVar2);
  }
  return iVar2;
}



/* Function: FUN_004038f0 */

undefined4 FUN_004038f0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00403954(param_2,(int *)&DAT_00401480);
  if (iVar1 == 0) {
    iVar1 = FUN_00403954(extraout_ECX,(int *)&DAT_00401450);
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
  (*(code *)PTR_guard_check_icall_0040c230)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_00403954 */

undefined4 __fastcall FUN_00403954(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0040397f */

int __fastcall FUN_0040397f(int *param_1)

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



/* Function: FUN_004039af */

int __fastcall FUN_004039af(int *param_1)

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



/* Function: FUN_004039d9 */

undefined4 __thiscall FUN_004039d9(void *this,undefined4 *param_1)

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



/* Function: FUN_00403a0d */

undefined4 FUN_00403a0d(SIZE_T param_1,undefined4 *param_2)

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



/* Function: FUN_00403a38 */

undefined4 __fastcall FUN_00403a38(short *param_1,int param_2,int *param_3,int param_4,int param_5)

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



/* Function: FUN_00403a9f */

int __fastcall FUN_00403a9f(short *param_1,uint param_2,short *param_3,uint param_4)

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
    psVar2 = &DAT_004014b0;
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
      iVar1 = FUN_00403a38(param_1,param_2,&local_8,(int)psVar2,uVar3);
      if (((-1 < iVar1) && (1 < param_2 - local_8)) && (uVar3 = (param_2 - local_8) * 2, 2 < uVar3))
      {
        memset(param_1 + local_8 + 1,0,uVar3 - 2);
      }
    }
  }
  return iVar1;
}



/* Function: FUN_00403b5b */

int FUN_00403b5b(short *param_1,void *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  SIZE_T local_8;
  
  *param_4 = 0;
  if ((void *)((int)param_2 + 1) < param_2) {
    iVar1 = -0x7ff8fdea;
  }
  else {
    *param_4 = 0;
    iVar1 = FUN_004039d9((void *)((int)param_2 + 1),&local_8);
    if (-1 < iVar1) {
      iVar1 = FUN_00403a0d(local_8,param_4);
      if (-1 < iVar1) {
        FUN_00403a9f((short *)*param_4,(int)param_2 + 1,param_1,(uint)param_2);
      }
    }
  }
  return iVar1;
}



/* Function: FUN_00403bbe */

void __fastcall FUN_00403bbe(short *param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_00403b5b(param_1,(void *)((int)psVar2 - (int)(param_1 + 1) >> 1),param_1,param_2);
  return;
}



/* Function: FUN_00403bf0 */

undefined1 FUN_00403bf0(void)

{
  return 0;
}



/* Function: FUN_00403bf9 */

HRESULT FUN_00403bf9(void)

{
  _func_5021 *p_Var1;
  code *pcVar2;
  HRESULT HVar3;
  IUnknown *This;
  IID *riid;
  int **ppvObject;
  IUnknown *local_c;
  int *local_8;
  
  local_c = (IUnknown *)0x0;
  HVar3 = SHGetThreadRef(&local_c);
  if (-1 < HVar3) {
    local_8 = (int *)0x0;
    p_Var1 = local_c->lpVtbl->QueryInterface;
    ppvObject = &local_8;
    riid = (IID *)&DAT_0040187c;
    This = local_c;
    (*(code *)PTR_guard_check_icall_0040c230)();
    HVar3 = (*p_Var1)(This,riid,ppvObject);
    if (-1 < HVar3) {
      pcVar2 = *(code **)(*local_8 + 0xc);
      (*(code *)PTR_guard_check_icall_0040c230)(local_8);
      HVar3 = (*pcVar2)();
    }
    FUN_004035e3((int *)&local_8);
  }
  FUN_004035e3((int *)&local_c);
  return HVar3;
}



/* Function: FUN_00403c6f */

undefined4 FUN_00403c6f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0040b538 == (code *)0x0) &&
     (DAT_0040b538 = (code *)FUN_004082f5("NtQueryWnfStateData"), DAT_0040b538 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040b538;
  (*(code *)PTR_guard_check_icall_0040c230)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00403cc3 */

undefined4 __fastcall
FUN_00403cc3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0040b534 == (code *)0x0) &&
     (DAT_0040b534 = (code *)FUN_004082f5("NtUpdateWnfStateData"), DAT_0040b534 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040b534;
  (*(code *)PTR_guard_check_icall_0040c230)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00403d1c */

undefined4 __fastcall FUN_00403d1c(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_0040b528 == (code *)0x0) &&
     (DAT_0040b528 = (code *)FUN_004082f5("RtlNotifyFeatureUsage"), DAT_0040b528 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040b528;
  (*(code *)PTR_guard_check_icall_0040c230)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_00403d7e */

void __fastcall FUN_00403d7e(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_00403dca */

undefined4 __thiscall FUN_00403dca(void *this,uint param_1)

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
    _Dst = FUN_004081f6(0,_DstSize);
    if (_Dst == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    _MaxCount = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    memcpy_s(_Dst,_DstSize,*this,_MaxCount);
    FUN_00408273((void *)((int)this + 0xc),(int)_Dst);
    *(LPVOID *)this = _Dst;
    *(rsize_t *)((int)this + 4) = _MaxCount + (int)_Dst;
    *(SIZE_T *)((int)this + 8) = (int)_Dst + _DstSize;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_00403e54 */

undefined4 __thiscall FUN_00403e54(void *this,uint param_1)

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
    uVar2 = FUN_00403dca(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00403e8a */

undefined4 __thiscall FUN_00403e8a(void *this,void *param_1,uint param_2)

{
  void *_Dst;
  undefined4 uVar1;
  errno_t eVar2;
  
  uVar1 = FUN_00403e54(this,param_2);
  if ((char)uVar1 != '\0') {
    _Dst = *(void **)((int)this + 4);
    eVar2 = memcpy_s(_Dst,-(uint)(_Dst < *(void **)((int)this + 8)) &
                          *(int *)((int)this + 8) - (int)_Dst,param_1,param_2);
    uVar1 = CONCAT31((int3)((uint)eVar2 >> 8),1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return uVar1;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_00403ee0 */

void __thiscall FUN_00403ee0(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_00403f50(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00404049(this,param_2);
    }
  }
  return;
}



/* Function: FUN_00403f1d */

void __fastcall FUN_00403f1d(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_004010c0;
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



/* Function: FUN_00403f50 */

void __thiscall FUN_00403f50(void *this,undefined4 *param_1)

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
    uVar1 = FUN_004024a8(this_00,0,0x2000);
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
      FUN_004024eb((int)this_00,&DAT_00401ee0,0x1000000,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00404049 */

void __thiscall FUN_00404049(void *this,undefined4 *param_1)

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
    FUN_004026a6((int)*(uint **)((int)this + 4),&DAT_00401daa,param_1,param_1,&local_4c,&local_48,
                 &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                 &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
  }
  return;
}



/* Function: FUN_00404140 */

undefined4 __thiscall FUN_00404140(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_0040b104 != iVar1;
  iVar3 = DAT_0040b104;
  DAT_0040b104 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_0040c230)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00404180 */

undefined4 * __thiscall FUN_00404180(void *this,byte param_1)

{
  FUN_00403f1d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004041a7 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004041a7(int *param_1)

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
  
  local_c = DAT_0040b0c0 ^ (uint)&local_102c;
  iVar6 = 0;
  uVar4 = 0xc;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar8 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_00403c6f(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_004042b6;
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
LAB_004042b6:
            piVar5 = piVar5 + 3;
            iVar8 = local_1024;
          } while (piVar5 != local_101c);
        }
        iVar6 = FUN_00403cc3(&DAT_00401684,local_1010,uVar7,piVar2,piVar2,local_1018,1);
        uVar4 = extraout_EDX_00;
        param_1 = local_1028;
      }
      local_1024 = iVar8 + 1;
    } while (((iVar6 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_00409490(local_c ^ (uint)&local_102c,uVar4);
  return;
}



/* Function: FUN_0040432c */

void FUN_0040432c(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_0040b52c == (code *)0x0) &&
     (DAT_0040b52c = (code *)FUN_004082f5("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_0040b52c == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_0040b52c;
  (*(code *)PTR_guard_check_icall_0040c230)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040436a */

int __thiscall FUN_0040436a(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_00404397 */

void __thiscall FUN_00404397(void *this,int param_1)

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



/* Function: FUN_004043e2 */

uint __fastcall FUN_004043e2(ushort *param_1)

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



/* Function: FUN_0040440d */

uint __thiscall FUN_0040440d(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  undefined4 local_8;
  
  _Dst = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_004044a6;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    memcpy_s(_Dst,2,&local_8,2);
    _Dst = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)_Dst + 4);
      if (param_2 < pvVar1) goto LAB_004044a6;
      memcpy_s(_Dst,4,(void *)((int)this + 4),4);
      _Dst = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_004044a6;
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
LAB_004044a6:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_004044d5 */

uint __thiscall FUN_004044d5(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_00404566;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    memcpy_s(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_00404566;
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
    if (param_2 < puVar3) goto LAB_00404566;
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
LAB_00404566:
  return (uint)puVar3 & 0xffffff00;
}



/* Function: FUN_00404580 */

undefined2 * __thiscall
FUN_00404580(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_004043e2(&local_18);
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



/* Function: FUN_004045fe */

void __thiscall FUN_004045fe(void *this,int param_1)

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
  FUN_00408273(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_00408273((void *)(param_1 + 0x1c),local_8);
  FUN_0040829d(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_00404687 */

void __thiscall FUN_00404687(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_004074a9(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_0040472a;
  }
  if (9 < param_2) {
    return;
  }
LAB_0040472a:
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



/* Function: FUN_00404772 */

undefined4 __thiscall FUN_00404772(void *this,int param_1)

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
  uVar3 = FUN_004044d5(&local_44,&local_14,*(ushort **)((int)this + 0x14));
  cVar2 = (char)uVar3;
  do {
    if (cVar2 == '\0') {
      uVar5 = FUN_004069d2(param_1);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    uVar3 = 0;
    if (local_40 != 0) {
      do {
        uVar4 = FUN_004044d5(&local_58,&local_14,*(ushort **)((int)this + 0x14));
        if ((char)uVar4 == '\0') break;
        local_18 = local_54;
        local_1c = (uint)local_50;
        local_20 = local_48;
        local_24 = (uint)local_3c;
        local_28 = local_34;
        local_2c = *(int **)(param_1 + 0x40);
        if (local_2c == (int *)0x0) {
          FUN_00406b43();
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        pcVar1 = *(code **)(*local_2c + 0x10);
        (*(code *)PTR_guard_check_icall_0040c230)(&local_28,&local_24,&local_20,&local_1c,&local_18)
        ;
        cVar2 = (*pcVar1)();
        if (cVar2 == '\0') {
          uVar3 = FUN_004069d2(param_1);
          return uVar3 & 0xffffff00;
        }
        uVar3 = uVar3 + 1;
        this = local_30;
      } while (uVar3 < local_40);
    }
    uVar3 = FUN_004044d5(&local_44,&local_14,*(ushort **)((int)this + 0x14));
    cVar2 = (char)uVar3;
  } while( true );
}



/* Function: FUN_004048af */

undefined4 __thiscall
FUN_004048af(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_00404bbb(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_00403e54(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_00404687(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_00408273((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_0040829d(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_00403e54((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_00404bbb(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00404967 */

uint __thiscall FUN_00404967(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_004044d5(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_0040436a(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_004049f2 */

uint __thiscall
FUN_004049f2(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_004044d5(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_00404397(param_1,local_c);
          uVar1 = local_14;
          goto LAB_00404ae8;
        }
        local_14 = FUN_0040436a(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_00404ae8;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00404397(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_00404967(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_004044d5(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_0040436a(&local_28,param_3,param_4);
LAB_00404ae8:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_00404397(&local_28,local_24 + param_5);
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



/* Function: FUN_00404b28 */

uint __thiscall FUN_00404b28(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_004044d5(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_00404397(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00404397(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_00404bbb */

uint __thiscall
FUN_00404bbb(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar3 = FUN_004044d5(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar3 == '\0') break;
      iVar2 = FUN_0040436a(&local_24,param_1,param_2);
      if (iVar2 < 0) {
LAB_00404d19:
        local_c = pvVar4;
        if ((char)uVar3 != '\0') goto LAB_00404c46;
        break;
      }
      if (iVar2 == 0) {
        pvVar4 = (void *)FUN_004049f2(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          bVar1 = true;
          local_5 = '\x01';
          goto LAB_00404d19;
        }
        goto LAB_00404d0b;
      }
      pvVar4 = (void *)FUN_00404b28(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_00404c46:
    pvVar4 = local_c;
    local_10 = 0;
    if (!bVar1) {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      local_10 = FUN_004043e2(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    uVar3 = FUN_004043e2(&local_38);
    in_EAX = *(uint *)((int)this + 0x18);
    uVar3 = uVar3 + local_10;
    if (uVar3 <= (-(uint)(*(uint *)((int)this + 0x14) < in_EAX) &
                 in_EAX - *(int *)((int)this + 0x14))) {
      memmove_s((void *)(uVar3 + (int)pvVar4),(in_EAX - uVar3) - (int)pvVar4,pvVar4,
                *(int *)((int)this + 0x14) - (int)pvVar4);
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + uVar3);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_0040440d(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_00404397(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_0040440d(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_00404d0b:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_00404d5d */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00404d5d(uint param_1,int param_2,undefined2 *param_3)

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
  
  local_14 = DAT_0040b0c0 ^ (uint)&stack0xfffffff0;
  local_1028 = 0;
  local_1034 = 0;
  local_1038 = param_3;
  local_103c = param_1 + param_2 * 8;
  local_1024 = param_1;
  while( true ) {
    FUN_00404580(local_106c,*local_1038,local_1038[1],*(undefined1 *)(local_1038 + 2),local_1038[3],
                 *(undefined1 *)(local_1038 + 4));
    local_1020 = 0x1000;
    uVar2 = FUN_00403c6f(extraout_ECX,&local_102c,local_1018,&local_1020);
    FUN_00407419(uVar2);
    if (uVar2 != 0) {
      local_102c = 0;
      local_1020 = 0;
    }
    FUN_00404687(local_106c,local_1018,local_1020,0x1000);
    if (local_104b != '\0') break;
    local_10ac = &local_1030;
    local_1030 = 0;
    puStack_10a8 = &local_1034;
    local_10b0 = &PTR_FUN_004010ac;
    puStack_10a4 = local_106c;
    local_1078 = &local_10b0;
    local_1048 = local_10ac;
    local_1044 = puStack_10a8;
    local_1040 = puStack_10a4;
    uVar3 = FUN_00404772(local_1038,(int)local_10b8);
    uVar2 = local_1024;
    local_1019 = (char)uVar3;
    if (local_104c == '\0') {
LAB_00404f18:
      uVar2 = uVar2 + 8;
      local_1034 = local_1030;
      local_1024 = uVar2;
    }
    else {
      iVar4 = local_1058 - local_105c;
      iVar4 = FUN_00403cc3(local_1024,local_105c,iVar4,iVar4,iVar4,local_102c,1);
      if (iVar4 != -0x3fffffff) {
        if (iVar4 != 0) {
          FUN_00403cc3(uVar2,local_105c,local_1058 - local_105c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_00404f18;
      }
      local_1028 = local_1028 + 1;
      local_1019 = '\0';
    }
    uVar1 = local_1028;
    FUN_0040829d(&local_1050);
    uVar3 = extraout_EDX;
    if (((local_1019 != '\0') || (local_103c <= uVar2)) || (0x31 < uVar1)) goto LAB_00404f6b;
  }
  FUN_0040829d(&local_1050);
  uVar3 = extraout_EDX_00;
LAB_00404f6b:
  FUN_00409490(local_14 ^ (uint)&stack0xfffffff0,uVar3);
  return;
}



/* Function: FUN_00404f86 */

void * __fastcall FUN_00404f86(void *param_1)

{
  FUN_00404580(param_1,0,4,1,4,0);
  FUN_00404580((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_00404580((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_00404fc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00404fc8(undefined2 *param_1,undefined4 param_2)

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
  
  local_c = DAT_0040b0c0 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = _DAT_004016e8;
    local_3c = DAT_004016e4;
    local_30 = DAT_004016e0;
    local_34 = DAT_004016dc;
    local_28 = DAT_004016d8;
    local_2c = DAT_004016d4;
    FUN_00404d5d((uint)&local_3c,3,param_1);
    param_2 = extraout_EDX;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_004016cc;
    local_34 = DAT_004016c4;
    local_38 = DAT_004016d0;
    local_2c = DAT_004016bc;
    local_30 = DAT_004016c8;
    local_28 = DAT_004016c0;
    FUN_00404d5d((uint)&local_3c,3,param_1 + 0x12);
    param_2 = extraout_EDX_00;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_004016b4;
    local_34 = DAT_004016ac;
    local_38 = DAT_004016b8;
    local_2c = DAT_004016a4;
    local_30 = DAT_004016b0;
    local_24 = DAT_0040169c;
    local_28 = DAT_004016a8;
    local_1c = DAT_00401694;
    local_20 = DAT_004016a0;
    local_14 = DAT_0040168c;
    local_18 = DAT_00401698;
    local_10 = DAT_00401690;
    FUN_00404d5d((uint)&local_3c,6,param_1 + 0x24);
    param_2 = extraout_EDX_01;
  }
  FUN_00409490(local_c ^ (uint)&local_3c,param_2);
  return;
}



/* Function: FUN_0040511e */

void __thiscall FUN_0040511e(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_00403e8a(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_00405195 */

void __thiscall FUN_00405195(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_004051f4 */

void __thiscall FUN_004051f4(void *this,PSRWLOCK param_1)

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
            goto LAB_00405279;
          }
        } while (uVar3 < uVar2);
      }
      local_14 = 0;
LAB_00405279:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_10 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0040c230)(local_14);
        (*local_10)();
      }
      if (this != (void *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
    } while (uVar3 < uVar2);
  }
  return;
}



/* Function: FUN_004052c7 */

void __fastcall FUN_004052c7(void *param_1)

{
  FUN_004052f4(param_1);
  FUN_0040829d((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_00405485((int)param_1 + 4);
  return;
}



/* Function: FUN_004052f4 */

void __fastcall FUN_004052f4(void *param_1)

{
  undefined4 extraout_EDX;
  undefined2 local_70 [54];
  
  FUN_00404f86(local_70);
  FUN_00405438(param_1,local_70);
  FUN_00404fc8(local_70,extraout_EDX);
  FUN_00405485((int)local_70);
  return;
}



/* Function: FUN_0040532b */

undefined1 __thiscall FUN_0040532b(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_00406593((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_00406570((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_00405384 */

undefined1 __thiscall FUN_00405384(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_004053ef((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_0040532b(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_004053ef */

void __fastcall FUN_004053ef(PSRWLOCK param_1)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar1;
  undefined2 local_70 [54];
  
  FUN_00404f86(local_70);
  AcquireSRWLockExclusive(param_1);
  FUN_00405438(param_1,local_70);
  uVar1 = extraout_EDX;
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
    uVar1 = extraout_EDX_00;
  }
  FUN_00404fc8(local_70,uVar1);
  FUN_00405485((int)local_70);
  return;
}



/* Function: FUN_00405438 */

void __thiscall FUN_00405438(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_004045fe(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_004045fe((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_004045fe((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_00405485 */

void __fastcall FUN_00405485(int param_1)

{
  FUN_0040829d((int *)(param_1 + 100));
  FUN_0040829d((int *)(param_1 + 0x40));
  FUN_0040829d((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_004054a9 */

void __fastcall FUN_004054a9(undefined1 *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_004065b5(piVar3,0);
  FUN_004065b5(param_1 + 0x1c,0);
  FUN_0040829d((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0040591b(*(int *)(param_1 + 0x78));
  }
  FUN_0040829d((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_0040432c(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_0040829d((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00406943(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*piVar3 != 0) {
    FUN_00406943((PTP_TIMER)*piVar3);
  }
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    cVar1 = FUN_00407479();
    if (cVar1 == '\0') {
      FUN_00406b70(piVar3 + 1,(undefined4 *)&stack0xfffffff8);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_00406f09(piVar3 + 2,0);
        FUN_00406f09(piVar3 + 3,0);
        if (piVar3 != (int *)0x0) {
          DVar2 = GetLastError();
          FUN_00406bb3(piVar3);
          SetLastError(DVar2);
        }
        FUN_00406859((int)piVar3);
        DVar2 = 0;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,DVar2,piVar3);
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        FUN_00406bb3(piVar3);
      }
    }
    else {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_004052f4(piVar3 + 4);
      }
    }
    return;
  }
  return;
}



/* Function: FUN_00405543 */

void __thiscall FUN_00405543(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((((*this != '\0') && (bVar1 = FUN_004056f4((int)this), bVar1)) &&
      (cVar2 = FUN_00405384(*(void **)((int)this + 0xc),param_1,param_2,param_3), cVar2 != '\0')) &&
     (cVar2 = FUN_00407479(), cVar2 == '\0')) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    FUN_00405780(this);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_004055a0 */

void __thiscall FUN_004055a0(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_00407479(), cVar1 == '\0')) &&
     (bVar2 = FUN_004056f4((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_0040511e(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x4058d0,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_0040511e((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00405640 */

void __fastcall FUN_00405640(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00407479();
  if (cVar1 == '\0') {
    bVar2 = FUN_004056f4(param_1);
    if (bVar2) {
      FUN_004051f4(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_004053ef(*(PSRWLOCK *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



/* Function: FUN_00405676 */

void __fastcall
FUN_00405676(char *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  if ((*param_1 != '\0') && (cVar1 = FUN_00407479(), param_2 = extraout_EDX, cVar1 == '\0')) {
    SRWLock = (PSRWLOCK)(param_1 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    local_e = 0;
    local_14 = param_3;
    local_10 = param_4;
    local_c = param_5;
    FUN_00403e8a(param_1 + 0x7c,&local_14,0xc);
    FUN_004057e0(param_1);
    param_2 = extraout_EDX_00;
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
      param_2 = extraout_EDX_01;
    }
  }
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004056f4 */

bool __fastcall FUN_004056f4(int param_1)

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
        iVar1 = FUN_004065eb(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_00405780 */

void __fastcall FUN_00405780(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00406a00,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_004065b5(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00403d7e(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_004057e0 */

void __fastcall FUN_004057e0(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00406a40,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_004065b5(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00403d7e(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_00405840 */

void FUN_00405840(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_004051f4(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00405863 */

bool __fastcall FUN_00405863(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_0040b530;
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0x4c);
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_004082f5("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_0040b530 = pcVar2, pcVar2 == (code *)0x0)) {
      iVar3 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c230)(FUN_00405840,param_1,0,piVar1);
      iVar3 = (*pcVar2)();
    }
  }
  return iVar3 == 0;
}



/* Function: FUN_004058d0 */

void FUN_004058d0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_004051f4(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_004058f3 */

LPCRITICAL_SECTION __fastcall FUN_004058f3(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_0040591b */

void FUN_0040591b(int param_1)

{
  if ((param_1 != 0) && (DAT_0040b5b4 != (PSRWLOCK)0x0)) {
    FUN_00405195(DAT_0040b5b4 + 0x1c,DAT_0040b5b4,param_1);
  }
  return;
}



/* Function: FUN_00405950 */

void FUN_00405950(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_00405640(0x40b5a8);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_00403d1c(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_00405543(&DAT_0040b5a8,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_00405676(&DAT_0040b5a8,param_2 >> 0x1f,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_004059d0 */

void FUN_004059d0(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_004055a0(&DAT_0040b5a8,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_0040b5a8 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040b5b8);
      bVar1 = FUN_00405863(0x40b5a8);
      if (bVar1) {
        FUN_0040511e(&DAT_0040b5cc,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040b5b8);
    }
  }
  return;
}



/* Function: FUN_00405a40 */

void FUN_00405a40(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_0040b5a8 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_0040b5f8;
  }
  else {
    if (DAT_0040b5a8 == '\0') {
      return;
    }
    this = &DAT_0040b5cc;
  }
  FUN_00405195(this,(PSRWLOCK)&DAT_0040b5b8,param_1);
  return;
}



/* Function: FUN_00405a84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00405a84(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b634,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_0040b634;
    local_8 = &DAT_0040b638;
    _DAT_0040b63c = 0;
    DAT_0040b640 = 0;
    _DAT_0040b644 = 0;
    _DAT_0040b638 = &PTR_FUN_004010c0;
    _DAT_0040b648 = &DAT_0040b000;
    FUN_004099d4(FUN_00405b10);
    local_10 = 0;
    FUN_004067b3((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00405b10 */

void FUN_00405b10(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040b634,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0040c230)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00405b58 */

void __fastcall FUN_00405b58(int *param_1)

{
  PREGHANDLE RegHandle;
  PVOID CallbackContext;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  undefined4 extraout_EDX;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
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
  UVar3 = EventRegister(&local_18,FUN_00402390,CallbackContext,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)CallbackContext + 0x1c),2,
                        *(undefined2 **)((int)CallbackContext + 4),
                        **(undefined2 **)((int)CallbackContext + 4));
  }
  param_1[3] = 1;
  pcVar2 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_0040c230)();
  (*pcVar2)();
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00405c00 */

void FUN_00405c00(uint param_1,ushort *param_2,undefined4 *param_3,int param_4,uint *param_5,
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
  
  puVar2 = FUN_00405a84();
  if ((*(int **)(puVar2 + 4) != (int *)0x0) && (**(int **)(puVar2 + 4) != 0)) {
    if (param_5 == (uint *)0x0) {
      if (param_6 == (uint *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          puVar2 = FUN_00405a84();
          puVar1 = *(uint **)(puVar2 + 4);
          if (2 < *puVar1) {
            uVar3 = FUN_004024a8(puVar1,1,0);
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
              FUN_00402a16((int)puVar1,&DAT_00401b19,param_2,param_2,local_c,&local_10,&local_44,
                           &local_48,&local_14,&local_18,&local_4e,&local_1c,&local_20,&local_24,
                           &local_4c,&local_28,&local_2c,&local_30,&local_40,&local_3c,&local_38,
                           &local_34);
            }
          }
        }
      }
      else {
        puVar2 = FUN_00405a84();
        puVar1 = *(uint **)(puVar2 + 4);
        if (5 < *puVar1) {
          uVar3 = FUN_004024a8(puVar1,4,0);
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
            FUN_0040294e((int)puVar1,&DAT_00401c39,param_2,param_2,&local_34,&local_40,&local_44,
                         &local_48,&local_4c,&local_3c,&local_4e,&local_38);
          }
        }
      }
    }
    else {
      puVar2 = FUN_00405a84();
      if (5 < **(uint **)(puVar2 + 4)) {
        uVar3 = FUN_004024a8(*(uint **)(puVar2 + 4),2,0);
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
          FUN_00402899(extraout_ECX,&DAT_00401d39,extraout_ECX,extraout_ECX,&local_38,&local_3c,
                       &local_48,&local_4c,&local_4e,&local_40,&local_44);
        }
      }
      if (((param_2 != (ushort *)0x0) && ((char)param_2[2] == '\x01')) && (param_4 != 0)) {
        puVar2 = FUN_00405a84();
        if (5 < **(uint **)(puVar2 + 4)) {
          uVar3 = FUN_004024a8(*(uint **)(puVar2 + 4),10,0);
          if ((char)uVar3 != '\0') {
            local_38 = param_8;
            local_3c = *param_5;
            local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
            local_40 = (uint)param_2[1];
            local_44 = (uint)*param_2;
            local_4c = param_1;
            local_4e = CONCAT11(local_4e._1_1_,1);
            FUN_00402899(extraout_ECX_00,&DAT_00401cc1,extraout_ECX_00,extraout_ECX_00,&local_4c,
                         &local_44,&local_40,&local_48,&local_4e,&local_3c,&local_38);
          }
        }
      }
    }
  }
  return;
}



/* Function: FUN_00405f7b */

void FUN_00405f7b(void)

{
  HRESULT HVar1;
  HMODULE pHVar2;
  DWORD DVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  WCHAR local_2d8 [100];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  HVar1 = GetCurrentThemeName(local_210,0x104,local_2d8,100,(LPWSTR)0x0,0);
  if (-1 < HVar1) {
    PathRemoveFileSpecW(local_210);
    PathAppendW(local_210,L"Shell");
    PathAppendW(local_210,local_2d8);
    PathAppendW(local_210,L"ShellStyle.dll");
    pHVar2 = LoadLibraryExW(local_210,(HANDLE)0x0,2);
    uVar4 = extraout_EDX;
    if (pHVar2 != (HMODULE)0x0) goto LAB_0040603d;
  }
  DVar3 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\ShellStyle.dll",local_210,0x104);
  uVar4 = extraout_EDX_00;
  if (DVar3 != 0) {
    LoadLibraryExW(local_210,(HANDLE)0x0,2);
    uVar4 = extraout_EDX_01;
  }
LAB_0040603d:
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00406060 */

Value * FUN_00406060(ushort *param_1)

{
  DUIXmlParser *this;
  Value *local_8;
  
  local_8 = (Value *)0x0;
  this = (DUIXmlParser *)TlsGetValue(0xffffffff);
  if (this != (DUIXmlParser *)0x0) {
    DirectUI::DUIXmlParser::GetSheet(this,param_1,&local_8);
  }
  return local_8;
}



/* Function: FUN_00406092 */

long __fastcall
FUN_00406092(DUIXmlParser *param_1,uint param_2,undefined4 param_3,HWND__ *param_4,
            undefined4 *param_5)

{
  long lVar1;
  DUIXmlParser *local_8;
  
  *param_5 = 0;
  local_8 = param_1;
  lVar1 = DirectUI::DUIXmlParser::Create
                    (&local_8,(_func_Value_ptr_ushort_ptr_void_ptr *)0x0,(void *)0x0,FUN_004061d0,
                     (void *)0x0);
  if (-1 < lVar1) {
    DirectUI::DUIXmlParser::SetRootWindowForTheming(local_8,param_4);
    lVar1 = DirectUI::DUIXmlParser::SetXMLFromResource
                      (local_8,(ushort *)(param_2 & 0xffff),(HINSTANCE__ *)param_1,
                       (HINSTANCE__ *)&IMAGE_DOS_HEADER_00400000);
    if (lVar1 < 0) {
      DirectUI::DUIXmlParser::Destroy(local_8);
    }
    else {
      *param_5 = local_8;
    }
  }
  return lVar1;
}



/* Function: FUN_00406106 */

void __fastcall
FUN_00406106(DUIXmlParser *param_1,uint param_2,byte param_3,undefined4 param_4,HWND__ *param_5,
            DUIXmlParser **param_6)

{
  *param_6 = (DUIXmlParser *)0x0;
  if ((param_3 & 1) == 0) {
    FUN_00406092(param_1,param_2,param_1,param_5,param_6);
  }
  else {
    FUN_00406139((HINSTANCE__ *)param_1,param_2,param_1,param_5,param_6);
  }
  return;
}



/* Function: FUN_00406139 */

int __fastcall
FUN_00406139(HINSTANCE__ *param_1,uint param_2,undefined4 param_3,HWND__ *param_4,
            DUIXmlParser **param_5)

{
  HMODULE pHVar1;
  long lVar2;
  HMODULE hLibModule;
  
  *param_5 = (DUIXmlParser *)0x0;
  pHVar1 = (HMODULE)FUN_00405f7b();
  hLibModule = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    hLibModule = param_1;
  }
  lVar2 = DirectUI::DUIXmlParser::Create(param_5,FUN_00406060,(void *)0x0,FUN_004061d0,(void *)0x0);
  if (-1 < lVar2) {
    DirectUI::DUIXmlParser::SetRootWindowForTheming(*param_5,param_4);
    lVar2 = DirectUI::DUIXmlParser::SetXMLFromResourceWithTheme
                      (*param_5,param_2,param_1,hLibModule,(HINSTANCE__ *)&IMAGE_DOS_HEADER_00400000
                      );
  }
  if (pHVar1 != (HMODULE)0x0) {
    FreeLibrary(hLibModule);
  }
  if ((lVar2 < 0) && (*param_5 != (DUIXmlParser *)0x0)) {
    DirectUI::DUIXmlParser::Destroy(*param_5);
    *param_5 = (DUIXmlParser *)0x0;
  }
  return lVar2;
}



/* Function: FUN_004061d0 */

void FUN_004061d0(void)

{
  return;
}



/* Function: FUN_004061d9 */

int FUN_004061d9(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  
  puVar1 = PTR_FUN_0040b05c;
  iVar3 = DAT_0040b038;
  if ((DAT_0040b038 == 0) && (iVar3 = DAT_0040b040, PTR_FUN_0040b05c != (undefined *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c230)();
    cVar2 = (*(code *)puVar1)();
    iVar3 = DAT_0040b040;
    if (cVar2 != '\0') {
      iVar3 = DAT_0040b03c;
    }
  }
  DAT_0040b038 = iVar3;
  return iVar3;
}



/* Function: FUN_0040621e */

int FUN_0040621e(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040b028);
  if (DAT_0040b030 == 0) {
    iVar1 = InitProcessPriv(0xe,0x400000,1,1,~(byte)(param_2 >> 1) & 1);
    if (iVar1 < 0) goto LAB_004062ff;
    iVar1 = FUN_004063bd();
    if (-1 < iVar1) {
      DAT_0040b034 = TlsAlloc();
      iVar1 = -0x7fffbffb;
      if (DAT_0040b034 != 0xffffffff) goto LAB_0040629d;
      FUN_00406429(DAT_0040b054);
    }
    UnInitProcessPriv(0x400000);
    goto LAB_004062ff;
  }
LAB_0040629d:
  iVar1 = InitThread(param_1);
  if (iVar1 < 0) {
LAB_004062c5:
    if (DAT_0040b030 != 0) goto LAB_004062ff;
    TlsFree(DAT_0040b034);
    DAT_0040b034 = 0xffffffff;
    FUN_00406429(DAT_0040b054);
    UnInitProcessPriv(0x400000);
    if (iVar1 < 0) goto LAB_004062ff;
  }
  else {
    iVar1 = FUN_00406469();
    if (iVar1 < 0) {
      UnInitThread();
      goto LAB_004062c5;
    }
    DAT_0040b030 = DAT_0040b030 + 1;
  }
  FUN_00403bf9();
LAB_004062ff:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040b028);
  return iVar1;
}



/* Function: FUN_00406315 */

void FUN_00406315(void)

{
  int *piVar1;
  undefined4 *lpMem;
  HANDLE hHeap;
  DWORD dwFlags;
  
  lpMem = (undefined4 *)FUN_004063a2();
  if (lpMem != (undefined4 *)0x0) {
    piVar1 = lpMem + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      DirectUI::DUIXmlParser::Destroy((DUIXmlParser *)*lpMem);
      dwFlags = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,dwFlags,lpMem);
      TlsSetValue(DAT_0040b034,(LPVOID)0x0);
    }
  }
  UnInitThread();
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040b028);
  DAT_0040b030 = DAT_0040b030 + -1;
  if (DAT_0040b030 == 0) {
    TlsFree(DAT_0040b034);
    DAT_0040b034 = 0xffffffff;
    FUN_00406429(DAT_0040b054);
    UnInitProcessPriv(0x400000);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040b028);
  return;
}



/* Function: FUN_004063a2 */

LPVOID FUN_004063a2(void)

{
  LPVOID pvVar1;
  
  if (DAT_0040b034 == 0xffffffff) {
    return (LPVOID)0x0;
  }
  pvVar1 = TlsGetValue(DAT_0040b034);
  return pvVar1;
}



/* Function: FUN_004063bd */

int FUN_004063bd(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (DAT_0040b048 <= uVar2) {
      if (DAT_0040b050 == 0) {
        return iVar3;
      }
      while( true ) {
        if (DAT_0040b054 <= uVar4) {
          return iVar3;
        }
        pcVar1 = *(code **)(DAT_0040b050 + uVar4 * 8);
        (*(code *)PTR_guard_check_icall_0040c230)();
        iVar3 = (*pcVar1)();
        if (iVar3 < 0) break;
        uVar4 = uVar4 + 1;
      }
      FUN_00406429(uVar4);
      return iVar3;
    }
    pcVar1 = *(code **)(DAT_0040b044 + uVar2 * 4);
    (*(code *)PTR_guard_check_icall_0040c230)();
    iVar3 = (*pcVar1)();
    uVar2 = uVar2 + 1;
  } while (-1 < iVar3);
  return iVar3;
}



/* Function: FUN_00406429 */

void FUN_00406429(uint param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_0040b050 != 0) && (uVar3 = 0, iVar2 = DAT_0040b050, param_1 != 0)) {
    do {
      pcVar1 = *(code **)(iVar2 + 4 + uVar3 * 8);
      if (pcVar1 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0040c230)();
        (*pcVar1)();
        iVar2 = DAT_0040b050;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1);
  }
  return;
}



/* Function: FUN_00406469 */

int FUN_00406469(void)

{
  undefined4 uVar1;
  HWND__ *pHVar2;
  LPVOID pvVar3;
  HANDLE pvVar4;
  undefined4 *lpTlsValue;
  uint uVar5;
  BOOL BVar6;
  int iVar7;
  DWORD DVar8;
  SIZE_T dwBytes;
  DUIXmlParser *local_8;
  
  iVar7 = 0;
  if (DAT_0040b034 == 0xffffffff) {
    iVar7 = -0x7fffbffb;
  }
  else {
    pvVar3 = TlsGetValue(DAT_0040b034);
    if (pvVar3 == (LPVOID)0x0) {
      dwBytes = 8;
      DVar8 = 8;
      pvVar4 = GetProcessHeap();
      lpTlsValue = (undefined4 *)HeapAlloc(pvVar4,DVar8,dwBytes);
      pHVar2 = DAT_0040b058;
      uVar1 = DAT_0040b02c;
      iVar7 = -0x7ff8fff2;
      if (lpTlsValue != (undefined4 *)0x0) {
        uVar5 = FUN_004061d9();
        iVar7 = FUN_00406106((DUIXmlParser *)&IMAGE_DOS_HEADER_00400000,uVar5,(byte)uVar1,&local_8,
                             pHVar2,&local_8);
        if (-1 < iVar7) {
          *lpTlsValue = local_8;
          lpTlsValue[1] = 1;
          BVar6 = TlsSetValue(DAT_0040b034,lpTlsValue);
          iVar7 = -0x7fffbffb;
          if (BVar6 != 0) {
            return 0;
          }
          DirectUI::DUIXmlParser::Destroy(local_8);
        }
        DVar8 = 0;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar8,lpTlsValue);
        TlsSetValue(DAT_0040b034,(LPVOID)0x0);
      }
    }
    else {
      *(int *)((int)pvVar3 + 4) = *(int *)((int)pvVar3 + 4) + 1;
    }
  }
  return iVar7;
}



/* Function: FUN_00406543 */

void __fastcall FUN_00406543(undefined1 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00407479();
  if (cVar1 == '\0') {
    FUN_004054a9(param_1);
    return;
  }
  *param_1 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0040671a(*(int **)(param_1 + 8));
    return;
  }
  return;
}



/* Function: FUN_00406570 */

void __thiscall FUN_00406570(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_004048af(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_00406593 */

void __fastcall FUN_00406593(void *param_1)

{
  FUN_004048af(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_004065b5 */

void __thiscall FUN_004065b5(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_00406943(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004065eb */

void __fastcall FUN_004065eb(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_0040816c(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00406f09(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00406eec(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_004066da;
  }
  FUN_00406b70(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_00406e46(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_00406708:
    FUN_004073fc(unaff_retaddr,uVar3);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_00406884((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_00406708;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00406bb3(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004070e5(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_004066da:
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040671a */

void __fastcall FUN_0040671a(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00407479();
  if (cVar1 == '\0') {
    FUN_00406b70(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_00406f09(param_1 + 2,0);
      FUN_00406f09(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00406bb3(local_8);
        SetLastError(DVar2);
      }
      FUN_00406859((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00406bb3(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_004052f4(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_004067b3 */

void __fastcall FUN_004067b3(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_00405b58((int *)(*param_1 + 4));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_004067e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004067e0(void)

{
  _DAT_0040b5ac = "WilStaging_02";
  DAT_0040b5a8 = 0;
  _DAT_0040b5b0 = 0;
  DAT_0040b5b4 = 0;
  _DAT_0040b5b8 = 0;
  _DAT_0040b5bc = 0;
  _DAT_0040b5c0 = 0;
  _DAT_0040b5c4 = 0;
  _DAT_0040b5c8 = 0;
  FUN_004058f3((LPCRITICAL_SECTION)&DAT_0040b5cc);
  _DAT_0040b5f4 = 0;
  FUN_004058f3((LPCRITICAL_SECTION)&DAT_0040b5f8);
  _DAT_0040b630 = 0;
  _DAT_0040b620 = 0;
  uRam0040b624 = 0;
  uRam0040b628 = 0;
  uRam0040b62c = 0;
  DAT_0040b5a8 = 1;
  return;
}



/* Function: FUN_00406859 */

void __fastcall FUN_00406859(int param_1)

{
  FUN_004052c7((void *)(param_1 + 0x10));
  FUN_00407112((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004070e5(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00406884 */

int __fastcall FUN_00406884(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_004081f6(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_004073fc(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00406b43();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_00406f8e(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_004073fc(unaff_retaddr,0x14b);
    }
    else {
      FUN_0040696e(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_00407112(local_10);
  }
  FUN_0040829d((int *)&local_18);
  return iVar3;
}



/* Function: FUN_00406943 */

void FUN_00406943(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00406962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_0040696e */

undefined4 * __thiscall FUN_0040696e(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_00404f86((void *)((int)this + 0x14));
  FUN_004058f3((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_004069d2 */

void __fastcall FUN_004069d2(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_0040c230)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00406a00 */

void FUN_00406a00(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_00405640((int)param_2);
  }
  return;
}



/* Function: FUN_00406a40 */

void FUN_00406a40(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_004041a7(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00406a90 */

undefined4 * __thiscall FUN_00406a90(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401098;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00406ac0 */

void __thiscall FUN_00406ac0(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004010ac;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: FUN_00406af0 */

undefined4 __thiscall
FUN_00406af0(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_004048af(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_00406b43 */

void FUN_00406b43(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406b4f */

void __fastcall FUN_00406b4f(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_00407798(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406b70 */

void __thiscall FUN_00406b70(void *this,undefined4 *param_1)

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
    FUN_00406b4f(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00406bb3 */

void FUN_00406bb3(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_004070cd(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406bde */

uint __fastcall FUN_00406bde(int param_1,int param_2)

{
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = FUN_00406e9e(param_1,param_2,0x401680,param_1,param_1,in_stack_00000010);
  FUN_00407e6f(uVar1);
  FUN_004073aa(param_1,param_2);
  return uVar1;
}



/* Function: FUN_00406c33 */

void __fastcall FUN_00406c33(int param_1,int param_2)

{
  FUN_00406bde(param_1,param_2);
  return;
}



/* Function: FUN_00406c4f */

undefined4 __fastcall FUN_00406c4f(HANDLE param_1,int *param_2)

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
    goto LAB_00406c72;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00406c72:
        uVar2 = FUN_00406c33(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00406d3e:
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
        goto LAB_00406c72;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00406c72;
          }
          if (DVar1 == 0) goto LAB_00406d3e;
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
  FUN_004073fc(unaff_retaddr,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_00406d68 */

void __thiscall FUN_00406d68(void *this,int *param_1)

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
  
  local_c = DAT_0040b0c0 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00408321(local_218,0x104,this,(int)this);
  FUN_004074cb(local_218,4200000);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar4 = extraout_EDX;
    if (DVar2 != 2) {
      FUN_00406c33(unaff_retaddr,0xcd);
      uVar4 = extraout_EDX_00;
    }
LAB_00406e0d:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00406e27;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_00406c4f(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_004073fc(unaff_retaddr,0xd3);
      uVar4 = extraout_EDX_01;
      goto LAB_00406e0d;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_004070e5(pvVar1);
  uVar4 = extraout_EDX_02;
LAB_00406e27:
  FUN_00409490(local_c ^ (uint)auStack_224,uVar4);
  return;
}



/* Function: FUN_00406e46 */

int __fastcall FUN_00406e46(void *param_1,int *param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  iVar1 = FUN_00406d68(param_1,local_c);
  if (iVar1 < 0) {
    FUN_004073fc(unaff_retaddr,100);
    FUN_004073fc(unaff_retaddr,0x6d);
  }
  else {
    *param_2 = local_c[0] << 2;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_00406e9e */

uint __fastcall
FUN_00406e9e(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00408068(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_00406eec */

void __fastcall FUN_00406eec(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00406e9e(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00406f09 */

void __thiscall FUN_00406f09(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_004070e5(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00406f3f */

undefined4 __thiscall FUN_00406f3f(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00406eec(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_00406f09(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_00406f8e */

void __thiscall FUN_00406f8e(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_00406b43();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00408321(local_214,0x104,this,param_1);
  FUN_004074cb(local_214,4200000);
  uVar5 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  iVar3 = FUN_00406f3f(this,uVar5,uVar2,local_214);
  uVar4 = extraout_EDX;
  if (iVar3 < 0) {
    FUN_004073fc(unaff_retaddr,0x88);
    uVar4 = extraout_EDX_00;
  }
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00407031 */

DWORD __fastcall
FUN_00407031(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00408068(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  return DVar1;
}



/* Function: FUN_0040706c */

void __fastcall FUN_0040706c(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00407031(param_1,param_2,0x401648,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00408044(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_0040777a(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_004070cd */

void __fastcall FUN_004070cd(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_0040706c(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004070e5 */

void FUN_004070e5(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_004070cd(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407112 */

void __fastcall FUN_00407112(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_004070e5((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_004070e5((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00407139 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00407139(undefined4 param_1,undefined4 param_2)

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
  
  local_c = DAT_0040b0c0 ^ (uint)auStack_1474;
  local_1470 = in_stack_00000010;
  local_1010[0] = L'\0';
  local_1410[0] = 0;
  local_145c = in_stack_00000014[1];
  local_1460 = *in_stack_00000014;
  local_146c = param_1;
  iStack_143c = FUN_004077f6(local_1460);
  local_1464 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1464 = 8;
  }
  local_1468 = 1;
  LOCK();
  UNLOCK();
  local_1458 = DAT_0040b4f4 + 1;
  local_1454 = 0;
  DAT_0040b4f4 = DAT_0040b4f4 + 1;
  DStack_1450 = GetCurrentThreadId();
  pcVar1 = DAT_0040b510;
  uStack_1418 = local_1470;
  uStack_1414 = local_146c;
  puStack_1444 = &DAT_00401680;
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
  if (DAT_0040b510 == (code *)0x0) {
    lVar5 = (ulonglong)extraout_EDX << 0x20;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c230)();
    lVar5 = (*pcVar1)();
  }
  pcVar1 = DAT_0040b4c8;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040b4c8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_00,uStack_141c);
  }
  pcVar1 = DAT_0040b4cc;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040b4cc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(&local_1468,local_1410,0x400);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_01,uStack_141c);
  }
  pcVar1 = DAT_0040b4d0;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040b4d0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_02,uStack_141c);
  }
  pcVar1 = DAT_0040b4d4;
  uStack_141c = (undefined4)lVar5;
  if ((DAT_0040b4d4 != (code *)0x0) && ((local_1464 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040c230)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_03,uStack_141c);
  }
  pcVar1 = DAT_0040b4dc;
  uStack_141c = (undefined4)lVar5;
  if (-1 < local_1460) {
    FUN_00406b43();
    goto LAB_0040739a;
  }
  if (DAT_0040b4d8 == '\0') {
    if (DAT_0040b4dc == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      uVar2 = (uint)(BVar3 != 0);
      uVar4 = extraout_EDX_04;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c230)();
      uVar6 = (*pcVar1)();
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar2 = (uint)uVar6 & 0xff;
    }
    lVar5 = CONCAT44(uVar4,uStack_141c);
    if (uVar2 != 0) goto LAB_004072ce;
LAB_004072d5:
    pcVar1 = DAT_0040b4e8;
    uStack_141c = (undefined4)lVar5;
    if ((DAT_0040b4e8 != (code *)0x0) && (DAT_0040b4e4 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040c230)(&local_1468,0,0);
      (*pcVar1)();
      lVar5 = CONCAT44(extraout_EDX_05,uStack_141c);
    }
  }
  else {
LAB_004072ce:
    pcVar1 = DAT_0040b4e8;
    uStack_141c = (undefined4)lVar5;
    if ((local_1464 & 2) != 0) goto LAB_004072d5;
    if ((DAT_0040b4e8 != (code *)0x0) && (DAT_0040b4e4 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040c230)(&local_1468,local_1010,0x800);
      (*pcVar1)();
    }
    if (local_1010[0] == L'\0') {
      FUN_004078a1(local_1010,0x800,(int)&local_1468);
    }
    OutputDebugStringW(local_1010);
    lVar5 = CONCAT44(extraout_EDX_06,uStack_141c);
  }
  pcVar1 = DAT_0040b4f0;
  uStack_141c = (undefined4)lVar5;
  if ((((local_1464 & 4) != 0) || (DAT_0040b4ec != '\0')) && (DAT_0040b4f0 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c230)();
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_07,uStack_141c);
  }
  uStack_141c = (undefined4)lVar5;
  if ((local_1464 & 1) == 0) {
    FUN_00409490(local_c ^ (uint)auStack_1474,(int)((ulonglong)lVar5 >> 0x20));
    return;
  }
LAB_0040739a:
  FUN_004080df((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004073aa */

void __fastcall FUN_004073aa(undefined4 param_1,undefined4 param_2)

{
  FUN_00407139(param_1,param_2);
  return;
}



/* Function: FUN_004073bb */

void __fastcall FUN_004073bb(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_00407e6f(in_stack_00000014);
  FUN_004073aa(param_1,param_2);
  return;
}



/* Function: FUN_004073fc */

void __fastcall FUN_004073fc(undefined4 param_1,undefined4 param_2)

{
  FUN_004073bb(param_1,param_2);
  return;
}



/* Function: FUN_00407419 */

uint __fastcall FUN_00407419(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_0040b4a0;
  if (-1 < (int)param_1) {
    return 0;
  }
  if (param_1 != 0xc0000017) {
    if (DAT_0040b4a0 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040c230)(param_1);
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



/* Function: FUN_00407479 */

undefined1 FUN_00407479(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_0040b4a8;
  if (DAT_0040b4a4 != '\0') {
    return 1;
  }
  if (DAT_0040b4a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_004074a9 */

void __fastcall FUN_004074a9(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_00407798(param_1,0x137b,"onecore\\internal\\sdk\\inc\\wil\\staging.h",param_1,param_1,
               unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_004074cb */

undefined4 __thiscall FUN_004074cb(void *this,int param_1)

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
    uVar2 = FUN_00408321((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_00407522 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00407522(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  uStack_c = 0x407534;
  local_1458 = *param_7;
  local_1008[0] = L'\0';
  local_1408[0] = 0;
  local_1454 = param_7[1];
  uStack_1434 = FUN_00407830(local_1458);
  local_1460 = 3;
  local_145c = 0;
  if (param_7[2] == 1) {
    local_145c = 8;
  }
  LOCK();
  UNLOCK();
  local_1450 = DAT_0040b4f4 + 1;
  local_144c = 0;
  DAT_0040b4f4 = DAT_0040b4f4 + 1;
  DStack_1448 = GetCurrentThreadId();
  pcVar1 = DAT_0040b510;
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
  if (DAT_0040b510 == (code *)0x0) {
    uStack_1414 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c230)();
    uStack_1414 = (*pcVar1)();
  }
  pcVar1 = DAT_0040b4c8;
  if (DAT_0040b4c8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b4cc;
  if (DAT_0040b4cc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(&local_1460,local_1408,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b4d0;
  if (DAT_0040b4d0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b4d4;
  if ((DAT_0040b4d4 != (code *)0x0) && ((local_145c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040c230)(&local_1460);
    (*pcVar1)();
  }
  if (-1 < local_1458) {
    local_1458 = -0x7fff0001;
    local_1454 = FUN_00407e6f(0x8000ffff);
  }
  pcVar1 = DAT_0040b4dc;
  if (DAT_0040b4d8 == '\0') {
    if (DAT_0040b4dc == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c230)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_004076c1;
  }
  else {
LAB_004076c1:
    pcVar1 = DAT_0040b4e8;
    if ((local_145c & 2) == 0) {
      if ((DAT_0040b4e8 != (code *)0x0) && (DAT_0040b4e4 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040c230)(&local_1460,local_1008,0x800);
        (*pcVar1)();
      }
      if (local_1008[0] == L'\0') {
        FUN_004078a1(local_1008,0x800,(int)&local_1460);
      }
      OutputDebugStringW(local_1008);
      goto LAB_00407747;
    }
  }
  pcVar1 = DAT_0040b4e8;
  if ((DAT_0040b4e8 != (code *)0x0) && (DAT_0040b4e4 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040c230)(&local_1460,0,0);
    (*pcVar1)();
  }
LAB_00407747:
  pcVar1 = DAT_0040b4f0;
  if ((((local_145c & 4) != 0) || (DAT_0040b4ec != '\0')) && (DAT_0040b4f0 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c230)();
    (*pcVar1)();
  }
  FUN_004080df((int)&local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040777a */

void __fastcall
FUN_0040777a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_00407522(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00407798 */

void __fastcall
FUN_00407798(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar2 = FUN_00408044((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_0040777a(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_004077dd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004077dd(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040b4b0;
  _DAT_0040b4ac = param_1;
  LOCK();
  DAT_0040b4b0 = DAT_0040b4b0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_004077f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004077f6(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040b4b8;
  _DAT_0040b4b4 = param_1;
  LOCK();
  DAT_0040b4b8 = DAT_0040b4b8 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_0040780f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0040780f(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040b4c0;
  _DAT_0040b4bc = param_1;
  LOCK();
  DAT_0040b4c0 = DAT_0040b4c0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00407830 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00407830(undefined4 param_1)

{
  _DAT_0040b4c4 = param_1;
  return 1;
}



/* Function: FUN_0040784a */

wchar_t * __thiscall FUN_0040784a(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_004081b0(param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_004078a1 */

void __fastcall FUN_004078a1(wchar_t *param_1,int param_2,int param_3)

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
  
  pcVar3 = DAT_0040b4e8;
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  iVar5 = param_2;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((pcVar3 != (code *)0x0) && (DAT_0040b4e4 != '\0')) {
      (*(code *)PTR_guard_check_icall_0040c230)(param_3,param_1,param_2);
      (*pcVar3)();
      iVar5 = extraout_EDX;
      if (*param_1 != L'\0') goto LAB_00407af9;
    }
    memset(local_208,0,0x200);
    pcVar3 = DAT_0040b4e0;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_0040b4e0 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040c230)(*(undefined4 *)(param_3 + 0xc),local_208,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    pwVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_20c = FUN_0040784a(pcVar3,param_1,pwVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_20c = FUN_0040784a(pcVar3,param_1,pwVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_20c = FUN_0040784a(pvVar4,local_20c,pwVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    pwVar2 = FUN_0040784a(local_208,local_20c,pwVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (iVar5 = extraout_EDX_00, *(int *)(param_3 + 0x20) != 0)) {
      pwVar2 = FUN_0040784a((void *)0x0,pwVar2,pwVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        pwVar2 = FUN_0040784a(this,pwVar2,pwVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        pwVar2 = FUN_0040784a(pvVar4,pwVar2,pwVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_0040784a(pvVar4,pwVar2,pwVar1,L"\n");
          iVar5 = extraout_EDX_03;
        }
        else {
          FUN_0040784a(pvVar4,pwVar2,pwVar1,L"[%hs]\n");
          iVar5 = extraout_EDX_02;
        }
      }
      else {
        FUN_0040784a(pvVar4,pwVar2,pwVar1,L"[%hs(%hs)]\n");
        iVar5 = extraout_EDX_01;
      }
    }
  }
LAB_00407af9:
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,iVar5);
  return;
}



/* Function: FUN_00407b11 */

void __fastcall
FUN_00407b11(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
    iVar3 = FUN_004077dd(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_004077f6(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_00408068(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar6 = FUN_00407e6f(0x8007029c);
      param_15[3] = uVar6;
    }
    iVar3 = FUN_0040780f(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_00407830(iVar3);
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
  iVar4 = DAT_0040b4f4 + 1;
  DAT_0040b4f4 = DAT_0040b4f4 + 1;
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
  pcVar1 = DAT_0040b510;
  if (DAT_0040b510 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040c230)();
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_0040b4c8;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b4cc;
  if (DAT_0040b4cc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b4d0;
  if (DAT_0040b4d0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b4d4;
  if ((DAT_0040b4d4 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040c230)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_00406b43();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar6 = FUN_00407e6f(0x8000ffff);
    param_15[3] = uVar6;
  }
  pcVar1 = DAT_0040b4dc;
  if (DAT_0040b4d8 == '\0') {
    if (DAT_0040b4dc == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040c230)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00407d02;
  }
  else {
LAB_00407d02:
    pcVar1 = DAT_0040b4e8;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_0040b4e8 != (code *)0x0) && (DAT_0040b4e4 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040c230)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_004078a1(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00407d6b;
    }
  }
  pcVar1 = DAT_0040b4e8;
  if ((DAT_0040b4e8 != (code *)0x0) && (DAT_0040b4e4 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040c230)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00407d6b:
  pcVar1 = DAT_0040b4f0;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_0040b4ec != '\0')) &&
     (DAT_0040b4f0 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040c230)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00407da3 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00407da3(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_0040b0c0 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00407b11(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_00409490(local_c ^ (uint)&local_1474,extraout_EDX);
    return;
  }
  FUN_004080df((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407e49 */

void __fastcall
FUN_00407e49(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00407da3(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00407e6f */

uint __fastcall FUN_00407e6f(uint param_1)

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



/* Function: FUN_00408044 */

uint * __thiscall FUN_00408044(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00407e6f((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00408068 */

void __fastcall
FUN_00408068(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00407e6f(param_7);
  local_8 = 0;
  FUN_00407e49(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_004080af */

void FUN_004080af(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0040b500;
  if (DAT_0040b500 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004080df */

void __fastcall FUN_004080df(int param_1)

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
  
  pcVar1 = DAT_0040b4f8;
  if (DAT_0040b4f8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040b4fc;
  if (DAT_0040b4fc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_0040814c;
  uVar3 = 1;
  do {
    FUN_004080af(uVar3);
    iVar2 = extraout_ECX;
LAB_0040814c:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_0040816c */

undefined4 __cdecl FUN_0040816c(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_004081b0(param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_004081b0 */

undefined4 __fastcall
FUN_004081b0(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4,va_list param_5)

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



/* Function: FUN_004081f6 */

LPVOID __fastcall FUN_004081f6(DWORD param_1,SIZE_T param_2)

{
  FARPROC pFVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  HMODULE hModule;
  
  hHeap = GetProcessHeap();
  pvVar2 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0040b50c == (FARPROC)0x0) {
    if (DAT_0040b508 != '\0') {
      return pvVar2;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0040b50c = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0040b508 = '\x01';
    if (DAT_0040b50c == (FARPROC)0x0) {
      DAT_0040b508 = '\x01';
      return pvVar2;
    }
  }
  pFVar1 = DAT_0040b50c;
  (*(code *)PTR_guard_check_icall_0040c230)(hHeap,pvVar2);
  (*pFVar1)();
  return pvVar2;
}



/* Function: FUN_00408273 */

void __thiscall FUN_00408273(void *this,int param_1)

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



/* Function: FUN_0040829d */

void __fastcall FUN_0040829d(int *param_1)

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



/* Function: FUN_004082bd */

FARPROC __fastcall FUN_004082bd(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_0040b520 == (HMODULE)0x0) &&
     (DAT_0040b520 = GetModuleHandleW(L"kernelbase.dll"), DAT_0040b520 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_0040b520,param_1);
  return pFVar1;
}



/* Function: FUN_004082f5 */

void __fastcall FUN_004082f5(LPCSTR param_1)

{
  if (DAT_0040b524 == (HMODULE)0x0) {
    DAT_0040b524 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_0040b524,param_1);
  return;
}



/* Function: FUN_00408321 */

undefined4 __fastcall FUN_00408321(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_00408374 */

undefined4 __fastcall FUN_00408374(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_004083da */

void __fastcall
FUN_004083da(undefined4 param_1,undefined4 param_2,LPCWSTR param_3,uint *param_4,char *param_5,
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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
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
      FUN_00408374(param_5,param_6,(int)pcVar5);
      param_2 = extraout_EDX_01;
    }
  }
  else if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004084c0 */

undefined * __fastcall FUN_004084c0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_0040b550 == '\0') {
    FUN_004083da(param_1,param_2,(LPCWSTR)FUN_00407830,(uint *)0x0,&DAT_0040b558,0x40);
    DAT_0040b550 = '\x01';
  }
  return &DAT_0040b558;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x004084f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00408500 */

void FUN_00408500(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0040c230)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00408541 */

int __fastcall FUN_00408541(short *param_1)

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



/* Function: FUN_00408570 */

void FUN_00408570(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0040b524 == (HMODULE)0x0) {
    DAT_0040b524 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0040b524,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_004085c0 */

void FUN_004085c0(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_0040b540 == (code *)0x0) &&
     (DAT_0040b540 = (code *)FUN_004082f5("RtlNtStatusToDosErrorNoTeb"), DAT_0040b540 == (code *)0x0
     )) {
    return;
  }
  pcVar1 = DAT_0040b540;
  (*(code *)PTR_guard_check_icall_0040c230)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408600 */

undefined4 FUN_00408600(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_0040b598 == (code *)0x0) {
    DAT_0040b598 = (code *)FUN_004082f5("RtlDllShutdownInProgress");
    if (DAT_0040b598 == (code *)0x0) {
      return 0;
    }
  }
  pcVar1 = DAT_0040b598;
  (*(code *)PTR_guard_check_icall_0040c230)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00408640 */

void FUN_00408640(undefined1 *param_1)

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
  local_1e = DAT_0040b548;
  local_1c = *(undefined2 *)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  if (DAT_0040b54c == (FARPROC)0x0) {
    DAT_0040b54c = FUN_004082bd("WilFailureNotifyWatchers");
    if (DAT_0040b54c == (FARPROC)0x0) goto LAB_004086bc;
  }
  pFVar1 = DAT_0040b54c;
  (*(code *)PTR_guard_check_icall_0040c230)(0,&local_28,&local_c);
  (*pFVar1)();
LAB_004086bc:
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



/* Function: FUN_004086f1 */

void __thiscall FUN_004086f1(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar5 = FUN_00408541(*(short **)(param_1 + 0x14));
  piVar2 = (int *)((int)this + 0x28);
  pcVar4 = local_c + iVar5 + (int)pcVar4;
  if (((*(int *)((int)this + 0x24) == 0) || ((char *)*piVar2 < pcVar4)) &&
     (pvVar6 = FUN_004081f6(8,(SIZE_T)pcVar4), pvVar6 != (LPVOID)0x0)) {
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
    FUN_00408ffb(pcVar4,pcVar7,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00408ffb(extraout_EAX,pcVar7,(char *)*local_8,(undefined4 *)((int)this + 0x14));
    _Dst = FUN_00408f8b(extraout_EAX_00,pcVar7,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar7 - (int)_Dst);
  }
  return;
}



/* Function: FUN_0040882d */

void __fastcall FUN_0040882d(int param_1)

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



/* Function: FUN_0040889c */

void __thiscall FUN_0040889c(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_004081f6(8,0xdc);
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
    FUN_004086f1(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_0040895a */

DWORD * __fastcall FUN_0040895a(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_0040b49c;
  if (DAT_0040b49c != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0040b49c[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_00408c2a(*DAT_0040b49c,&local_8);
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



/* Function: FUN_004089e3 */

uint __fastcall FUN_004089e3(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_004089e3(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0040b108 + 1;
        DAT_0040b108 = DAT_0040b108 + 1;
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



/* Function: FUN_00408aa2 */

void __fastcall FUN_00408aa2(int param_1,char *param_2,int param_3)

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
  iVar2 = DAT_0040b504;
  if (DAT_0040b504 != 0) {
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
      uVar5 = FUN_004089e3(param_1,*pDVar6,param_2,param_3);
      if ((char)uVar5 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar6;
      local_5 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_0040c230)(param_1);
        bVar3 = (*pcVar1)();
        local_5 = local_5 | bVar3;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
    }
  }
  pcVar1 = DAT_0040b544;
  if (DAT_0040b544 != (code *)0x0) {
    if ((local_5 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (*(code *)PTR_guard_check_icall_0040c230)(uVar5,param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00408b80 */

void FUN_00408b80(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00408aa2((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_0040b59c != DVar2) {
    LOCK();
    iVar1 = DAT_0040b5a0 + 1;
    UNLOCK();
    iVar3 = DAT_0040b5a0 + 1;
    DAT_0040b5a0 = iVar1;
    if (iVar3 < 4) {
      DAT_0040b59c = DVar2;
      this = FUN_0040895a(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_0040889c(this,param_1);
      }
      DAT_0040b59c = 0;
    }
    LOCK();
    DAT_0040b5a0 = DAT_0040b5a0 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00408be5 */

void __fastcall FUN_00408be5(int *param_1)

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



/* Function: FUN_00408c2a */

void __fastcall FUN_00408c2a(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0040b0c0 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_0040816c(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00406f09(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00406eec(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_00408d16;
  }
  FUN_00406b70(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_00406e46(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_00408d44:
    FUN_004073fc(unaff_retaddr,uVar3);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_00408e0f((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_00408d44;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00406bb3(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004070e5(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_00408d16:
  FUN_00409490(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00408de4 */

void __fastcall FUN_00408de4(int param_1)

{
  FUN_00408ecc((int *)(param_1 + 0x18));
  FUN_00407112((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004070e5(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00408e0f */

int __fastcall FUN_00408e0f(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_004081f6(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_004073fc(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00406b43();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_00406f8e(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_004073fc(unaff_retaddr,0x14b);
    }
    else {
      FUN_00408f27(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_00407112(local_10);
  }
  FUN_0040829d((int *)&local_18);
  return iVar3;
}



/* Function: FUN_00408ecc */

void __fastcall FUN_00408ecc(int *param_1)

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
        FUN_0040882d((int)lpMem + 8);
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



/* Function: FUN_00408f27 */

undefined4 * __thiscall FUN_00408f27(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00408f8b */

void * __fastcall FUN_00408f8b(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint _MaxCount;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    _MaxCount = FUN_00408541(param_3);
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



/* Function: FUN_00408ffb */

char * __fastcall FUN_00408ffb(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

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



/* Function: FUN_00409062 */

int __thiscall FUN_00409062(void *this,undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  pcVar1 = (code *)**this;
  local_8 = (int *)this;
  piVar2 = FUN_00409107((int *)&local_c);
  (*(code *)PTR_guard_check_icall_0040c230)(this,&DAT_00401928,piVar2);
  iVar3 = (*pcVar1)();
  piVar2 = local_c;
  if (-1 < iVar3) {
    local_8 = (int *)0x0;
    pcVar1 = *(code **)(*local_c + 0xc);
    piVar4 = FUN_00409107((int *)&local_8);
    (*(code *)PTR_guard_check_icall_0040c230)(piVar2,&LAB_0040133c,&LAB_00401918,piVar4);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      pcVar1 = *(code **)(*local_8 + 0x10);
      (*(code *)PTR_guard_check_icall_0040c230)
                (local_8,
                 L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel"
                 ,param_1);
      iVar3 = (*pcVar1)();
    }
    FUN_004035e3((int *)&local_8);
  }
  FUN_004035e3((int *)&local_c);
  return iVar3;
}



/* Function: FUN_00409107 */

int * FUN_00409107(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040c230)(piVar1);
    (*pcVar2)();
  }
  return param_1;
}



/* Function: GetLastError */

DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0040951c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: FUN_00409150 */

undefined4 FUN_00409150(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00409410();
  DAT_0040b158 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_00409614(2);
  __set_app_type(iVar2);
  DAT_0040b64c = 0xffffffff;
  DAT_0040b650 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_0040b16c;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_0040b160;
  FUN_00409670();
  if (DAT_0040b080 == 0) {
    __setusermatherr(FUN_00409670);
  }
  FUN_00409877();
  return 0;
}



/* Function: FUN_004091c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004091c0(void)

{
  _DAT_0040b15c = DAT_0040b168;
  _DAT_0040b154 =
       __wgetmainargs((int *)&DAT_0040b148,(wchar_t ***)&DAT_0040b14c,(wchar_t ***)&DAT_0040b150,
                      DAT_0040b164,(_startupinfo *)&DAT_0040b15c);
  return;
}



/* Function: FUN_004091f9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_004091f9(void)

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
  
  local_8 = &DAT_00409d10;
  uStack_c = 0x409205;
  local_20 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = (undefined *)0x0;
  iVar6 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar5 = 0;
    LOCK();
    iVar3 = iVar6;
    if (DAT_0040b654 != 0) {
      iVar5 = DAT_0040b654;
      iVar3 = DAT_0040b654;
    }
    DAT_0040b654 = iVar3;
    UNLOCK();
    if (iVar5 == 0) goto LAB_0040924e;
    if (iVar5 == iVar6) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_0040924e:
  if (DAT_0040b658 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0040b658 == 0) {
    DAT_0040b658 = 1;
    iVar6 = FUN_004093d9((undefined4 *)&DAT_004011c0,(undefined4 *)&DAT_004011cc);
    if (iVar6 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_0040b144 = 1;
  }
  if (DAT_0040b658 == 1) {
    initterm(&DAT_00401194,&DAT_004011bc);
    DAT_0040b658 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_0040b654 = 0;
    UNLOCK();
  }
  if ((DAT_0040b65c != (code *)0x0) &&
     (BVar7 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0040b65c), pcVar2 = DAT_0040b65c, BVar7 != 0
     )) {
    (*(code *)PTR_guard_check_icall_0040c230)(0,2,0);
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
      if (WVar4 == L'\0') goto LAB_00409330;
      if (uVar8 == 0) {
        while ((WVar4 != L'\0' && ((ushort)WVar4 < 0x21))) {
          local_24 = local_24 + 1;
          WVar4 = *local_24;
        }
LAB_00409330:
        DAT_0040b140 = FUN_00402e85(0x400000,0,local_24);
        if (DAT_0040b158 == 0) {
                    /* WARNING: Subroutine does not return */
          exit(DAT_0040b140);
        }
        if (DAT_0040b144 == 0) {
          _cexit();
          ExceptionList = local_14;
          return DAT_0040b140;
        }
        ExceptionList = local_14;
        return DAT_0040b140;
      }
    }
    if (WVar4 == L'\"') {
      uVar8 = (uint)(uVar8 == 0);
      local_20 = uVar8;
    }
    local_24 = local_24 + 1;
  } while( true );
}



/* Function: FUN_004093d9 */

void __cdecl FUN_004093d9(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_0040c230)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_00409410 */

bool FUN_00409410(void)

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
    iVar2 = *(int *)(IMAGE_NT_HEADERS32_004000e8.Signature + IMAGE_DOS_HEADER_00400000.e_lfanew);
  }
  else {
    if (sVar1 != 0x20b) {
      return false;
    }
    if (*(uint *)(&UNK_00400080.field_0x4 + IMAGE_DOS_HEADER_00400000.e_lfanew) < 0xf) {
      return false;
    }
    iVar2 = *(int *)((int)(IMAGE_NT_HEADERS32_004000e8.OptionalHeader.DataDirectory + -0xd) +
                    IMAGE_DOS_HEADER_00400000.e_lfanew);
  }
  return iVar2 != 0;
}



/* Function: entry */

void entry(void)

{
  FUN_004097d9();
  FUN_004091f9();
  return;
}



/* Function: FUN_00409490 */

void __fastcall FUN_00409490(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_0040b0c0) {
    return;
  }
  FUN_00409a21(param_1,param_2);
  return;
}



/* Function: FUN_004094a6 */

void FUN_004094a6(size_t param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00409ca6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00409bc7(param_1);
  FUN_004094ee();
  return;
}



/* Function: Catch_All@004094e1 */

undefined * Catch_All_004094e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  return &DAT_004094eb;
}



/* Function: FUN_004094ee */

void FUN_004094ee(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0040951c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: FUN_00409530 */

undefined4 FUN_00409530(int *param_1)

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



/* Function: FUN_00409580 */

undefined4 FUN_00409580(void)

{
  SetUnhandledExceptionFilter(FUN_00409530);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_004095a0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_004095a0(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00409614 */

undefined4 __cdecl FUN_00409614(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_004095a0(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00409656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00409670 */

undefined4 FUN_00409670(void)

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
  
  pcStack_10 = FUN_00409900;
  local_14 = ExceptionList;
  local_c = DAT_0040b0c0 ^ 0x409da8;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_004097a0((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_004097a0 */

bool __cdecl FUN_004097a0(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_004097d9 */

void FUN_004097d9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_0040b0c0 == 0xbb40e64e) || ((DAT_0040b0c0 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_0040b0c0 & 0xffff0000, DAT_0040b0c0 = local_8, uVar1 == 0)) {
      DAT_0040b0c0 = 0xbb40e64f;
    }
  }
  DAT_0040b100 = ~DAT_0040b0c0;
  return;
}



/* Function: FUN_00409877 */

void FUN_00409877(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409890. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040b0c0 ^ (uint)&param_2;
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



/* Function: FUN_00409900 */

void __cdecl
FUN_00409900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_0040b0c0,FUN_00409490,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040992b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_0040992b(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00409dc8;
  uStack_c = 0x409937;
  local_20[0] = DAT_0040b650;
  if (DAT_0040b650 == -1) {
    (*(code *)PTR_guard_check_icall_0040c230)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_0040b650;
    local_24 = DAT_0040b64c;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_0040b650 = local_20[0];
    DAT_0040b64c = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_004099c5();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_004099c5 */

void FUN_004099c5(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_004099d4 */

int __cdecl FUN_004099d4(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_0040992b(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: FUN_004099f1 */

void __cdecl FUN_004099f1(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00409a21 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00409a21(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_0040b280 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040b284 = &stack0x00000004;
  _DAT_0040b1c0 = 0x10001;
  _DAT_0040b170 = 0xc0000409;
  _DAT_0040b174 = 1;
  _DAT_0040b180 = 3;
  DAT_0040b184 = 2;
  DAT_0040b188 = DAT_0040b0c0;
  DAT_0040b18c = DAT_0040b100;
  uStack_c = DAT_0040b0c0;
  uStack_8 = DAT_0040b100;
  _DAT_0040b17c = unaff_retaddr;
  _DAT_0040b24c = in_GS;
  _DAT_0040b250 = in_FS;
  _DAT_0040b254 = in_ES;
  _DAT_0040b258 = in_DS;
  _DAT_0040b25c = unaff_EDI;
  _DAT_0040b260 = unaff_ESI;
  _DAT_0040b264 = unaff_EBX;
  _DAT_0040b268 = param_2;
  _DAT_0040b26c = param_1;
  _DAT_0040b270 = in_EAX;
  _DAT_0040b274 = unaff_EBP;
  DAT_0040b278 = unaff_retaddr;
  _DAT_0040b27c = in_CS;
  _DAT_0040b288 = in_SS;
  FUN_004099f1((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x00409b4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x00409b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: FUN_00409b71 */

char __fastcall FUN_00409b71(uint3 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (DAT_0040b48c == 1) {
    return '\x01';
  }
  if (DAT_0040b48c != 2) {
    uStack_8 = (uint)param_1;
    iVar1 = ApiSetQueryApiSetPresence(&DAT_00401008,(int)&uStack_8 + 3);
    if (-1 < iVar1) {
      DAT_0040b48c = (uStack_8._3_1_ == '\0') + 1;
      return uStack_8._3_1_;
    }
  }
  return '\0';
}



/* Function: ApiSetQueryApiSetPresence */

void ApiSetQueryApiSetPresence(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ApiSetQueryApiSetPresence();
  return;
}



/* Function: FUN_00409bc7 */

void * __cdecl FUN_00409bc7(size_t param_1)

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
  
                    /* WARNING: Could not recover jumptable at 0x00409bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



/* Function: _callnewh */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409c02. Too many branches */
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
  
                    /* WARNING: Could not recover jumptable at 0x00409c81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409c8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: FUN_00409cd0 */

void FUN_00409cd0(void)

{
  FUN_00406543(&DAT_0040b5a8);
  return;
}



/* Function: FUN_00409ce0 */

int FUN_00409ce0(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int in_EAX;
  int *piVar4;
  int *lpMem;
  int *local_8;
  
  lpMem = DAT_0040b064;
  if (DAT_0040b064 != (int *)0x0) {
    local_8 = DAT_0040b064;
    cVar1 = FUN_00407479();
    if (cVar1 == '\0') {
      iVar2 = FUN_00406b70(lpMem + 1,&local_8);
      *lpMem = *lpMem + -1;
      piVar4 = local_8;
      if (*lpMem == 0) {
        FUN_00406f09(lpMem + 2,0);
        FUN_00406f09(lpMem + 3,0);
        if (local_8 != (int *)0x0) {
          DVar3 = GetLastError();
          FUN_00406bb3(local_8);
          SetLastError(DVar3);
        }
        FUN_00408de4((int)lpMem);
        DVar3 = 0;
        hHeap = GetProcessHeap();
        iVar2 = HeapFree(hHeap,DVar3,lpMem);
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        iVar2 = FUN_00406bb3(piVar4);
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



/* Function: FUN_00409d00 */

void FUN_00409d00(void)

{
  FUN_00408be5((int *)&DAT_0040b110);
  return;
}



