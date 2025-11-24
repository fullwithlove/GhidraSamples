/* Function: FUN_004069f2 */

uint __thiscall FUN_004069f2(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_00406a29:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_00406a29;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_00406a35 */

void __thiscall FUN_00406a35(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)&DAT_00402894;
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



/* Function: FUN_00406a83 */

void FUN_00406a83(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x613;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_00406b18 */

void __fastcall
FUN_00406b18(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4,void *param_5,
            undefined4 *param_6,undefined4 param_7)

{
  _EVENT_DATA_DESCRIPTOR local_58 [2];
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_18 = param_7;
  local_10 = 4;
  local_28 = *param_6;
  local_14 = 0;
  local_c = 0;
  local_24 = 0;
  local_20 = 8;
  local_1c = 0;
  FUN_00406a35(param_5,local_38);
  FUN_00406a83(0x42d038,param_2,(LPCGUID)0x0,(LPCGUID)0x0,5,local_58);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406b90 */

void FUN_00406b90(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_0042e4b0)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00406c13 */

void __fastcall
FUN_00406c13(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  FUN_00406a35(param_20,local_18);
  FUN_00407335(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_00406a35(param_17,local_48);
  FUN_00407335(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00407335(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00406a35(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_00407335(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_00407335(param_8,local_d8);
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
  FUN_00406a83(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x12,local_128);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406dce */

void __fastcall
FUN_00406dce(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  FUN_00407335(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_00406a35(param_19,local_48);
  FUN_00407335(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00406a35(param_16,local_78);
  FUN_00407335(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_00407335(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_00406a35(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_00407335(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_00407335(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00406a83(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406fc1 */

void __fastcall
FUN_00406fc1(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
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
  FUN_00406a83(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,9,local_98);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00407076 */

void __fastcall
FUN_00407076(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
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
  FUN_00406a83(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,10,local_a8);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040713e */

void __fastcall
FUN_0040713e(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  local_18 = param_22;
  local_10 = 4;
  FUN_00407335(param_21,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_20;
  local_30 = 4;
  FUN_00407335(param_19,local_48);
  FUN_00407335(param_18,local_58);
  FUN_00407335(param_17,local_68);
  FUN_00407335(param_16,local_78);
  local_88 = param_15;
  local_84 = 0;
  local_80 = 2;
  local_7c = 0;
  FUN_00407335(param_14,local_98);
  FUN_00407335(param_13,local_a8);
  FUN_00407335(param_12,local_b8);
  local_c8 = param_11;
  local_c4 = 0;
  local_c0 = 2;
  local_bc = 0;
  FUN_00407335(param_10,local_d8);
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
  FUN_00406a83(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00407335 */

void __thiscall FUN_00407335(void *this,undefined4 *param_1)

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



/* Function: FUN_00407380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407380(void)

{
  _DAT_0042dc74 = FUN_00408050;
  _DAT_0042dc70 = FUN_00408060;
  return;
}



/* Function: FUN_004073a0 */

void FUN_004073a0(void)

{
  DAT_0042dc8c = FUN_00407ad0;
  DAT_0042dc84 = DebugBreak;
  DAT_0042dc78 = FUN_00407b10;
  DAT_0042dca0 = FUN_00408150;
  DAT_0042dc98 = FUN_00408280;
  DAT_0042dc88 = FUN_004081a0;
  DAT_0042dc80 = FUN_00408210;
  return;
}



/* Function: FUN_004073f0 */

void FUN_004073f0(void)

{
  FUN_0042997b(FUN_0042bea0);
  return;
}



/* Function: FUN_00407410 */

void FUN_00407410(void)

{
  FUN_0042997b(FUN_0042bed0);
  return;
}



/* Function: FUN_00407430 */

void FUN_00407430(void)

{
  DAT_0042dc94 = FUN_004112d0;
  DAT_0042dcd4 = &PTR_s_WilError_03_0042d5b0;
  DAT_0042dcd8 = &DAT_0042d718;
  return;
}



/* Function: FUN_00407460 */

void FUN_00407460(void)

{
  FUN_00413487();
  FUN_0042997b(FUN_0042bee0);
  return;
}



/* Function: FUN_00407480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407480(void)

{
  _DAT_0042dcdc = FUN_00412dd0;
  _DAT_0042dce8 = FUN_00412e50;
  _DAT_0042dd10 = FUN_00412ec0;
  return;
}



/* Function: FUN_004074b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004074b0(void)

{
  _DAT_0042dd14 = FUN_00426520;
  return;
}



/* Function: FUN_004074d0 */

void FUN_004074d0(void)

{
  DAT_0042dc8c = FUN_00407ad0;
  DAT_0042dc84 = DebugBreak;
  DAT_0042dc78 = FUN_00407b10;
  return;
}



/* Function: FUN_004074f5 */

void __fastcall
FUN_004074f5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  EtwTraceMessage(param_3,param_4,0x2b,param_2,param_1,0);
  return;
}



/* Function: FUN_00407519 */

void __fastcall
FUN_00407519(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  EtwTraceMessage(param_3,param_4,0x2b,param_2,param_1,&stack0x0000000c,4,0);
  return;
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



/* Function: FUN_00407590 */

char * __fastcall FUN_00407590(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_004075b0 */

undefined4 * __thiscall FUN_004075b0(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004075e5 */

short * __thiscall FUN_004075e5(void *this,short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_00409717((int)param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_0040763c */

void __fastcall FUN_0040763c(short *param_1,int param_2,int param_3)

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
  
  pcVar3 = DAT_0042dcb4;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b105;
  local_10 = ExceptionList;
  local_14 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar3 != (code *)0x0) && (DAT_0042dca4 != '\0')) {
      (*(code *)PTR_guard_check_icall_0042e4b0)(param_3,param_1,param_2,local_14);
      (*pcVar3)();
      if (*param_1 != 0) goto LAB_004078ab;
    }
    memset(local_214,0,0x200);
    pcVar3 = DAT_0042dca0;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_0042dca0 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0042e4b0)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_004075e5(pcVar3,param_1,psVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_218 = FUN_004075e5(pcVar3,param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_004075e5(pvVar4,local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar2 = FUN_004075e5(local_214,local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar2 = FUN_004075e5((void *)0x0,psVar2,psVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar2 = FUN_004075e5(this,psVar2,psVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar2 = FUN_004075e5(pvVar4,psVar2,psVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_004075e5(pvVar4,psVar2,psVar1,&DAT_004020fc);
        }
        else {
          FUN_004075e5(pvVar4,psVar2,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_004075e5(pvVar4,psVar2,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_004078ab:
  ExceptionList = local_10;
  FUN_00429fd0(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004078d4 */

uint * __thiscall FUN_004078d4(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00407b51((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_004078f8 */

undefined4 * __thiscall FUN_004078f8(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_00407931((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407931 */

void __fastcall FUN_00407931(undefined4 *param_1)

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



/* Function: FUN_00407968 */

undefined4 __thiscall FUN_00407968(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_00407931((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_004079b2;
    *piVar1 = 0;
    FUN_00407931((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_004079b2:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_004079d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004079d0(undefined4 param_1)

{
  _DAT_0042dc64 = param_1;
  return 1;
}



/* Function: FUN_004079ea */

void FUN_004079ea(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
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
      FUN_0040962a(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00407ad0 */

undefined * FUN_00407ad0(void)

{
  if (DAT_0042dc60 == '\0') {
    FUN_004079ea((LPCWSTR)FUN_004079d0,(uint *)0x0,&DAT_0042dc20,0x40);
    DAT_0042dc60 = '\x01';
  }
  return &DAT_0042dc20;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00407b10 */

void FUN_00407b10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00407b51 */

uint __fastcall FUN_00407b51(uint param_1)

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



/* Function: FUN_00407d26 */

char * __fastcall FUN_00407d26(char *param_1)

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



/* Function: FUN_00407d44 */

int __fastcall FUN_00407d44(short *param_1)

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



/* Function: FUN_00407d6c */

void __thiscall FUN_00407d6c(void *this,undefined4 *param_1)

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
  iVar10 = FUN_00407d44((short *)param_1[0x12]);
  iVar1 = FUN_00407d44((short *)param_1[0xf]);
  iVar2 = FUN_00407d44((short *)param_1[5]);
  pcVar3 = FUN_00407d26((char *)param_1[0x11]);
  pcVar4 = FUN_00407d26((char *)param_1[0xe]);
  pcVar5 = FUN_00407d26((char *)param_1[0xc]);
  pcVar6 = FUN_00407d26((char *)param_1[9]);
  pcVar7 = FUN_00407d26((char *)param_1[8]);
  pcVar8 = FUN_00407d26((char *)param_1[7]);
  pcVar9 = FUN_00407d26((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_00407931(this_00);
    FUN_00407968(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_00408922(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_00408992(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_00408992(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_00408992(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_00408992(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_00408992(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_00408992(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_00408922(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_00408992(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_00408922(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_00407eff */

undefined4 * __thiscall FUN_00407eff(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__004010e4;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_00407d6c((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_00407f40 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00407f40(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_0040763c(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_00407968(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
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
  FUN_00408020((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return this;
}



/* Function: FUN_00408020 */

void __fastcall FUN_00408020(undefined4 *param_1)

{
  FUN_00407931(param_1 + 0x1b);
  FUN_00407931(param_1 + 0x19);
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_00408050 */

void FUN_00408050(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00408060 */

void FUN_00408060(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_00407eff(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&LAB_0042cb14);
}



/* Function: FUN_00408090 */

exception * __thiscall FUN_00408090(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__004010e4;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_004078f8((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_004078f8((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_004080e6 */

void __fastcall FUN_004080e6(LPCSTR param_1)

{
  if (DAT_0042dc18 == (HMODULE)0x0) {
    DAT_0042dc18 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_0042dc18,param_1);
  return;
}



/* Function: FUN_00408112 */

FARPROC __fastcall FUN_00408112(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_0042dc14 == (HMODULE)0x0) &&
     (DAT_0042dc14 = GetModuleHandleW(L"kernelbase.dll"), DAT_0042dc14 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_0042dc14,param_1);
  return pFVar1;
}



/* Function: FUN_00408150 */

void FUN_00408150(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0042dc18 == (HMODULE)0x0) {
    DAT_0042dc18 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0042dc18,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_004081a0 */

void FUN_004081a0(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_0042dc0c == (code *)0x0) &&
     (DAT_0042dc0c = (code *)FUN_004080e6("RtlNtStatusToDosErrorNoTeb"), DAT_0042dc0c == (code *)0x0
     )) {
    ExceptionList = local_10;
    return;
  }
  pcVar1 = DAT_0042dc0c;
  (*(code *)PTR_guard_check_icall_0042e4b0)(param_1,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00408210 */

undefined4 FUN_00408210(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_0042dc08 == (code *)0x0) &&
     (DAT_0042dc08 = (code *)FUN_004080e6("RtlDllShutdownInProgress"), DAT_0042dc08 == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_0042dc08;
  (*(code *)PTR_guard_check_icall_0042e4b0)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_00408280 */

void FUN_00408280(undefined1 *param_1)

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
  
  puStack_c = &LAB_0042b158;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_0042dc10;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_0042dc04 == (FARPROC)0x0) {
    DAT_0042dc04 = FUN_00408112("WilFailureNotifyWatchers");
    if (DAT_0042dc04 == (FARPROC)0x0) goto LAB_0040831f;
  }
  pFVar1 = DAT_0042dc04;
  (*(code *)PTR_guard_check_icall_0042e4b0)(0,&local_34,&local_18,uVar2);
  (*pFVar1)();
LAB_0040831f:
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



/* Function: FUN_0040836d */

undefined4 __thiscall FUN_0040836d(void *this,ushort *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  
  bVar2 = false;
  bVar1 = false;
  uVar7 = 0x80004005;
  if ((param_1 == (ushort *)0x0) || (param_2 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&DAT_0040234c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  uVar5 = *param_1;
  if (uVar5 == 0x22) {
    param_1 = param_1 + 1;
    uVar5 = *param_1;
    while ((uVar5 != 0 && (uVar5 != 0x22))) {
      param_1 = param_1 + 1;
      uVar5 = *param_1;
    }
    uVar5 = *param_1;
  }
  else {
    while (uVar5 != 0) {
      if (uVar5 < 0x21) goto LAB_00408403;
      param_1 = param_1 + 1;
      uVar5 = *param_1;
    }
  }
  while( true ) {
    if (uVar5 == 0) {
      return 0x80004005;
    }
LAB_00408403:
    if (0x20 < uVar5) break;
    param_1 = param_1 + 1;
    uVar5 = *param_1;
  }
LAB_00408422:
  do {
    puVar6 = param_1;
    if (uVar5 != 0x2d) {
      if (uVar5 != 0x2f) {
        param_1 = param_1 + 1;
        uVar5 = *param_1;
        if (uVar5 != 0) goto LAB_00408422;
      }
      puVar6 = param_1;
      if (uVar5 == 0) goto LAB_004084a9;
    }
    param_1 = puVar6 + 1;
    uVar5 = *param_1;
    if (uVar5 == 0x44) {
LAB_004084d0:
      do {
        param_1 = param_1 + 1;
      } while (*param_1 < 0x21);
      cVar3 = FUN_00409553(this,(short *)param_1);
      if (((cVar3 == '\0') &&
          (uVar7 = 0x8007000e, (undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0xb,&DAT_0040234c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      FUN_004089f5((int *)this,(short *)&DAT_004021b0);
      if (bVar1) {
        return uVar7;
      }
      if (bVar2) {
        return uVar7;
      }
                    /* WARNING: Load size is inaccurate */
      if (*this != *(int *)((int)this + 4)) {
        *param_2 = 1;
        return 0;
      }
      return uVar7;
    }
    if (uVar5 == 0x53) {
LAB_0040847b:
      do {
        param_1 = param_1 + 1;
      } while (*param_1 < 0x21);
      uVar4 = o__wtoi64(param_1);
      FUN_004093d1((void *)((int)this + 0x10),uVar4);
      bVar1 = true;
LAB_0040849a:
      uVar5 = *param_1;
    }
    else {
      if (uVar5 == 0x58) {
LAB_0040846d:
        param_1 = puVar6 + 2;
        bVar2 = true;
        goto LAB_0040849a;
      }
      if (uVar5 == 100) goto LAB_004084d0;
      if (uVar5 == 0x73) goto LAB_0040847b;
      if (uVar5 == 0x78) goto LAB_0040846d;
    }
    if (uVar5 == 0) {
LAB_004084a9:
      if (!bVar1) {
        return 0x80004005;
      }
      if (bVar2) {
        if (1 < *(int *)((int)this + 0x10) + 1U) {
          *param_2 = 2;
          return 0;
        }
        return 0x80004005;
      }
      return 0x80004005;
    }
  } while( true );
}



/* Function: FUN_00408572 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00408572(void *this,ushort *param_1,uint *param_2)

{
  int iVar1;
  int extraout_EAX;
  DWORD DVar2;
  LPCWSTR pWVar3;
  undefined4 uStackY_60c;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_5e8 [236];
  int local_238 [131];
  undefined4 local_2c;
  undefined2 *local_28;
  undefined2 *local_24;
  undefined2 local_20 [4];
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5dc;
  local_8 = 0x408581;
  if (param_2 == (uint *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xc,&DAT_0040234c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_00408728;
  }
  pWVar3 = (LPCWSTR)0x0;
  *param_2 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar1 = FUN_0040836d(this,param_1,(undefined4 *)((int)this + 0x14));
  if (iVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00408728;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_60c = 0xd;
  }
  else {
    if (*(int *)((int)this + 0x14) == 1) {
      FUN_0040e144(local_238);
      local_28 = local_20;
      local_18 = 0;
      local_20[0] = 0;
      local_2c = 0;
      local_8 = 0;
      if (*(int *)((int)this + 0x14) == 1) {
                    /* WARNING: Load size is inaccurate */
        pWVar3 = *this;
      }
      local_24 = local_28;
      FUN_0040982c(local_238,pWVar3,param_2);
      if (((extraout_EAX < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0xe,&DAT_0040234c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      FUN_004095b0((int *)&local_28);
      FUN_00408754(local_238);
      goto LAB_00408728;
    }
    if (*(int *)((int)this + 0x14) == 2) {
      FUN_0040d1da(local_5e8);
      local_8 = 1;
      if (*(int *)((int)this + 0x14) == 2) {
        pWVar3 = *(LPCWSTR *)((int)this + 0x10);
      }
      DVar2 = FUN_0040a74c(local_5e8,pWVar3,param_2);
      if ((((int)DVar2 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0xf,&DAT_0040234c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      FUN_0040d257(local_5e8);
      goto LAB_00408728;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00408728;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_60c = 0x10;
  }
  FUN_00407519(uStackY_60c,&DAT_0040234c,uVar4,uVar5);
LAB_00408728:
  FUN_0042ae87();
  return;
}



/* Function: FUN_00408736 */

void __fastcall FUN_00408736(int *param_1)

{
  FUN_004095b0(param_1 + 0x84);
  FUN_00408754(param_1);
  return;
}



/* Function: FUN_00408754 */

void __fastcall FUN_00408754(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004095b0(param_1 + 0x7c);
  FUN_004095b0(param_1 + 0x78);
  FUN_004095b0(param_1 + 0x74);
  FUN_004095b0(param_1 + 0x70);
  _eh_vector_destructor_iterator_(param_1 + 0x44,0x10,0xb,FUN_004095b0);
  _eh_vector_destructor_iterator_(param_1 + 0x1c,0x10,10,FUN_004095b0);
  FUN_004095b0(param_1 + 0x18);
  FUN_004095b0(param_1 + 0x14);
  FUN_004095b0(param_1 + 0x10);
  FUN_004095b0(param_1 + 0xc);
  FUN_004095b0(param_1 + 8);
  FUN_004095b0(param_1 + 4);
  FUN_004095b0(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040881d */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_0040881d(void)

{
  char cVar1;
  LPWSTR pWVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  undefined2 *local_2c;
  undefined2 *local_28;
  undefined2 local_24 [4];
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_2c = local_24;
  uVar3 = 0;
  local_24[0] = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  local_14[0] = 0;
  local_28 = local_2c;
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  FUN_004093a4(&DAT_004022c0,&DAT_0042d000,(PREGHANDLE)&DAT_0042d000);
  FUN_004093a4(&DAT_00402338,&DAT_0042d060,(PREGHANDLE)&DAT_0042d060);
  pWVar2 = GetCommandLineW();
  if (pWVar2 == (LPWSTR)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x11,&DAT_0040234c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    FUN_00409220();
    FUN_00408b34(L"WaitOnStart");
    cVar1 = FUN_0042a424((uint3)extraout_ECX);
    if (cVar1 != '\0') {
      ImmDisableIME(0xffffffff);
    }
    FUN_00408572(&local_2c,(ushort *)pWVar2,local_14);
    uVar3 = local_14[0];
  }
  FUN_00408b0c((REGHANDLE *)&DAT_0042d000);
  FUN_00408b0c((REGHANDLE *)&DAT_0042d060);
  FUN_004088fd((int *)&local_2c);
  return uVar3;
}



/* Function: FUN_004088fd */

void __fastcall FUN_004088fd(int *param_1)

{
  if (1 < param_1[4] + 1U) {
    CloseHandle((HANDLE)param_1[4]);
  }
  FUN_004095b0(param_1);
  return;
}



/* Function: FUN_00408922 */

void * __fastcall FUN_00408922(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_00407d44(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_00409690(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_00408992 */

char * __fastcall FUN_00408992(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_00407d26(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      FUN_00409690(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar1);
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



/* Function: FUN_004089f5 */

void __fastcall FUN_004089f5(int *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  short *psVar5;
  int iVar6;
  
  psVar5 = param_2;
  do {
    sVar1 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar1 != 0);
  iVar6 = (int)psVar5 - (int)(param_2 + 1) >> 1;
  iVar2 = FUN_00408a88(*param_1,param_1[1] - *param_1 >> 1,param_2 + 1,(int)param_2,iVar6);
  FUN_00408e2c(param_1,iVar2 + 1);
  psVar5 = (short *)*param_1;
  uVar3 = param_1[1] - (int)psVar5 >> 1;
  uVar4 = FUN_00408ac6(psVar5,uVar3,extraout_ECX,(int)param_2,iVar6);
  if (uVar4 < uVar3) {
    param_1[1] = param_1[1] + uVar4 * -2;
    memmove(psVar5,psVar5 + uVar4,(uVar3 - uVar4) * 2 + 2);
  }
  else {
    param_1[1] = (int)psVar5;
    *psVar5 = 0;
  }
  return;
}



/* Function: FUN_00408a88 */

int __fastcall FUN_00408a88(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if (param_2 != 0) {
    psVar2 = (short *)(param_1 + iVar3 * 2);
    do {
      iVar1 = 0;
      while( true ) {
        if (iVar1 == param_5) {
          return iVar3;
        }
        if (*(short *)(param_4 + iVar1 * 2) == *psVar2) break;
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + -1;
      psVar2 = psVar2 + -1;
    } while (iVar3 != -1);
  }
  return iVar3;
}



/* Function: FUN_00408ac6 */

uint __fastcall FUN_00408ac6(short *param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = 0;
      while( true ) {
        if (iVar1 == param_5) {
          return uVar2;
        }
        if (*(short *)(param_4 + iVar1 * 2) == *param_1) break;
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
  }
  return 0xffffffff;
}



/* Function: FUN_00408b0c */

void __fastcall FUN_00408b0c(REGHANDLE *param_1)

{
  if (*(int *)param_1 == 0 && *(int *)((int)param_1 + 4) == 0) {
    return;
  }
  EventUnregister(*param_1);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  return;
}



/* Function: FUN_00408b34 */

void __fastcall FUN_00408b34(short *param_1)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  char local_40 [60];
  
  FUN_00408bbb((undefined2 *)local_40);
  while( true ) {
    iVar3 = FUN_00408c1b(local_40,0,L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Debug",
                         param_1);
    if (((iVar3 < 0) || (uVar1 = FUN_00409006(local_40,(HKEY)0x80000002,0x100), (int)uVar1 < 0)) ||
       (iVar3 = FUN_004091ee(local_40), iVar3 == 0)) goto LAB_00408ba6;
    BVar2 = IsDebuggerPresent();
    if (BVar2 != 0) break;
    Sleep(1000);
  }
  DebugBreak();
LAB_00408ba6:
  FUN_00408bf7((int)local_40);
  return;
}



/* Function: FUN_00408bbb */

undefined2 * __fastcall FUN_00408bbb(undefined2 *param_1)

{
  undefined2 *puVar1;
  
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  puVar1 = param_1 + 0xe;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined2 **)(param_1 + 10) = puVar1;
  *(undefined2 **)(param_1 + 0xc) = puVar1;
  *puVar1 = 0;
  puVar1 = param_1 + 0x16;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 **)(param_1 + 0x12) = puVar1;
  *(undefined2 **)(param_1 + 0x14) = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return param_1;
}



/* Function: FUN_00408bf7 */

void __fastcall FUN_00408bf7(int param_1)

{
  FUN_004095b0((int *)(param_1 + 0x24));
  FUN_004095b0((int *)(param_1 + 0x14));
  FUN_00408ef6((int *)(param_1 + 8));
  return;
}



/* Function: FUN_00408c1b */

undefined4 __thiscall FUN_00408c1b(void *this,undefined4 param_1,short *param_2,short *param_3)

{
  char cVar1;
  
  cVar1 = FUN_00409553((void *)((int)this + 0x14),param_2);
  if ((cVar1 != '\0') && (cVar1 = FUN_00409553((void *)((int)this + 0x24),param_3), cVar1 != '\0'))
  {
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 4) = param_1;
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 8);
    *(undefined2 *)this = 0x100;
    return 0;
  }
  return 0x80004005;
}



/* Function: FUN_00408c6a */

void __fastcall FUN_00408c6a(int *param_1)

{
  if (*param_1 != 0) {
    RegCloseKey((HKEY)*param_1);
  }
  return;
}



/* Function: FUN_00408c7e */

undefined4 * __fastcall FUN_00408c7e(undefined4 *param_1)

{
  HKEY hKey;
  
  hKey = (HKEY)*param_1;
  *param_1 = 0;
  if (hKey != (HKEY)0x0) {
    RegCloseKey(hKey);
  }
  return param_1;
}



/* Function: FUN_00408c9d */

uint __thiscall FUN_00408c9d(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar2 = *this;
  uVar3 = *(int *)((int)this + 4) - iVar2;
  if (uVar3 < param_1) {
    uVar1 = FUN_00408fbd(this,param_1);
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    memset(*(void **)((int)this + 4),0,param_1 - uVar3);
                    /* WARNING: Load size is inaccurate */
    iVar2 = *this;
  }
  *(uint *)((int)this + 4) = iVar2 + param_1;
  return CONCAT31((int3)(iVar2 + param_1 >> 8),1);
}



/* Function: FUN_00408ce7 */

undefined4 __thiscall FUN_00408ce7(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined3 uVar3;
  uint uVar4;
  void *_Dst;
  
  pvVar2 = (void *)(param_1 + 4U & 0xfffffffc);
  iVar1 = (int)pvVar2 * 2;
  if (pvVar2 < (void *)0x80000000) {
    pvVar2 = (void *)FUN_0042a4d8(iVar1);
    _Dst = pvVar2;
  }
  else {
    _Dst = (void *)0x0;
  }
  uVar3 = (undefined3)((uint)pvVar2 >> 8);
  if (_Dst != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    uVar4 = *(int *)((int)this + 4) - *this & 0xfffffffe;
                    /* WARNING: Load size is inaccurate */
    memcpy(_Dst,*this,uVar4 + 2);
                    /* WARNING: Load size is inaccurate */
    if (*this != (int)this + 8) {
                    /* WARNING: Load size is inaccurate */
      FUN_0042a48f(*this);
    }
    *(void **)this = _Dst;
    *(uint *)((int)this + 4) = uVar4 + (int)_Dst;
    *(int *)((int)this + 8) = iVar1 + -2 + (int)_Dst;
    uVar3 = (undefined3)((uint)((int)this + 8) >> 8);
  }
  return CONCAT31(uVar3,_Dst != (void *)0x0);
}



/* Function: FUN_00408d79 */

uint __thiscall FUN_00408d79(void *this,uint param_1)

{
  uint uVar1;
  void *this_00;
  
  uVar1 = FUN_004093f6((int *)this);
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  if (0x3ffffffb < uVar1) {
    uVar1 = 0x3ffffffb;
  }
  if ((param_1 <= uVar1) && (uVar1 = FUN_00408ce7(this_00,uVar1), (char)uVar1 != '\0')) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}



/* Function: FUN_00408db3 */

uint __thiscall FUN_00408db3(void *this,uint param_1)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uStack_8;
  
  uStack_8 = 0x1000000;
  puVar4 = *(undefined4 **)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
  uVar5 = (int)puVar4 - *this >> 1;
  if (uVar5 < param_1) {
                    /* WARNING: Load size is inaccurate */
    if (*this == (int *)((int)this + 8)) {
      uVar3 = 3;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      uVar3 = *(int *)((int)this + 8) - *this >> 1;
    }
    if (uVar3 < param_1) {
      iVar2 = FUN_00408d79(this,param_1);
      if ((char)iVar2 == '\0') {
        uStack_8 = iVar2 << 0x18;
        param_1 = uVar5;
        goto LAB_00408e0f;
      }
      puVar4 = *(undefined4 **)((int)this + 4);
    }
    uVar5 = param_1 - uVar5;
    if (uVar5 != 0) {
      for (uVar3 = uVar5 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined2 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
    }
  }
LAB_00408e0f:
                    /* WARNING: Load size is inaccurate */
  puVar1 = (undefined2 *)(*this + param_1 * 2);
  *(undefined2 **)((int)this + 4) = puVar1;
  *puVar1 = 0;
  return uStack_8 >> 0x18;
}



/* Function: FUN_00408e2c */

int * __thiscall FUN_00408e2c(void *this,uint param_1)

{
  undefined2 *puVar1;
  code *pcVar2;
  int *extraout_ECX;
  int extraout_EDX;
  int iVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar3 = *this;
  if ((uint)(*(int *)((int)this + 4) - iVar3 >> 1) < param_1) {
    pcVar2 = (code *)swi(0x2c);
    (*pcVar2)();
    this = extraout_ECX;
    iVar3 = extraout_EDX;
  }
  puVar1 = (undefined2 *)(iVar3 + param_1 * 2);
  *(undefined2 **)((int)this + 4) = puVar1;
  *puVar1 = 0;
  return (int *)this;
}



/* Function: FUN_00408e5c */

uint __fastcall FUN_00408e5c(LPCWSTR param_1,undefined4 *param_2)

{
  DWORD DVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 == (LPCWSTR)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar3 = 0x80070057;
  }
  else {
    uVar3 = 0;
    param_2[1] = (undefined2 *)*param_2;
    *(undefined2 *)*param_2 = 0;
    DVar1 = ExpandEnvironmentStringsW(param_1,(LPWSTR)0x0,0);
    uVar2 = FUN_00408db3(param_2,DVar1);
    if ((char)uVar2 == '\0') {
      uVar3 = 0x8007000e;
    }
    else {
      DVar1 = ExpandEnvironmentStringsW(param_1,(LPWSTR)*param_2,DVar1);
      if (DVar1 == 0) {
        DVar1 = GetLastError();
        uVar3 = DVar1 & 0xffff | 0x80070000;
        if ((int)DVar1 < 1) {
          uVar3 = DVar1;
        }
        if (-1 < (int)uVar3) {
          uVar3 = 0x80004005;
        }
        param_2[1] = (undefined2 *)*param_2;
        *(undefined2 *)*param_2 = 0;
      }
      else {
        FUN_00408e2c(param_2,DVar1 - 1);
      }
    }
  }
  return uVar3;
}



/* Function: FUN_00408ef6 */

void __fastcall FUN_00408ef6(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != -1) {
    param_1[1] = iVar1;
    FUN_0042a48f(iVar1);
  }
  return;
}



/* Function: FUN_00408f14 */

undefined1 __thiscall FUN_00408f14(void *this,int param_1)

{
  int iVar1;
  void *_Dst;
  undefined1 uVar2;
  void *local_14;
  void *local_10;
  int local_c;
  int local_8;
  
  _Dst = (void *)FUN_0042a4d8(param_1);
  if (_Dst == (void *)0x0) {
    local_10 = (void *)0xffffffff;
    local_c = -1;
  }
  else {
    local_c = (int)_Dst + param_1;
    local_10 = _Dst;
    if (_Dst != (void *)0xffffffff) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
      local_14 = _Dst;
      memcpy(_Dst,*this,*(int *)((int)this + 4) - *this);
                    /* WARNING: Load size is inaccurate */
      iVar1 = *this;
      local_8 = (*(int *)((int)this + 4) - iVar1) + (int)_Dst;
      if (iVar1 != -1) {
        *(int *)((int)this + 4) = iVar1;
        FUN_0042a48f(iVar1);
      }
      *(void **)this = _Dst;
      *(int *)((int)this + 4) = local_8;
      *(int *)((int)this + 8) = local_c;
      uVar2 = 1;
      local_10 = (void *)0xffffffff;
      local_c = -1;
      goto LAB_00408fa6;
    }
  }
  uVar2 = 0;
LAB_00408fa6:
  local_14 = local_10;
  FUN_00408ef6((int *)&local_14);
  return uVar2;
}



/* Function: FUN_00408fbd */

uint __thiscall FUN_00408fbd(void *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *(int *)((int)this + 8) - *this;
  if (uVar2 < param_1) {
    uVar2 = (uVar2 >> 2) * 7 + 8;
    if (uVar2 < param_1) {
      uVar2 = param_1;
    }
    if (0x7fffffff < uVar2) {
      uVar2 = 0x7fffffff;
    }
    if (param_1 <= uVar2) {
      cVar1 = FUN_00408f14(this,uVar2);
      uVar2 = CONCAT31(extraout_var,cVar1);
      if (cVar1 != '\0') goto LAB_00408ffa;
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
LAB_00408ffa:
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00409006 */

uint __thiscall FUN_00409006(void *this,HKEY param_1,uint param_2)

{
  undefined4 *this_00;
  int iVar1;
  PHKEY phkResult;
  LSTATUS LVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined2 *local_24;
  undefined2 *local_20;
  undefined2 local_1c [4];
  undefined2 *local_14;
  DWORD local_10;
  HKEY local_c;
  DWORD local_8;
  
  local_24 = local_1c;
  local_c = (HKEY)0x0;
  local_8 = 0;
  local_1c[0] = 0;
  local_20 = local_24;
  if (param_1 == (HKEY)0x0) {
    uVar5 = 0x80070057;
    goto LAB_004091d0;
  }
  if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x28)) {
    uVar5 = 0x801b8003;
    goto LAB_004091d0;
  }
                    /* WARNING: Load size is inaccurate */
  if ((*(char *)((int)this + 1) == '\0') || (*this != '\0')) {
LAB_004091b7:
    uVar5 = 0;
  }
  else {
    if (*(int *)((int)this + 0x14) == *(int *)((int)this + 0x18)) {
LAB_00409094:
      LVar2 = RegQueryValueExW(param_1,*(LPCWSTR *)((int)this + 0x24),(LPDWORD)0x0,&local_10,
                               (LPBYTE)0x0,&local_8);
      if (LVar2 == 0) {
        if ((local_10 == 1) || (local_10 == 2)) {
          local_8 = local_8 + 1;
        }
        else if (local_10 == 7) {
          local_8 = local_8 + 2;
        }
        uVar5 = 0;
        do {
          if ((&DAT_0040226c)[uVar5 * 2] == local_10) {
            iVar4 = *(int *)(&UNK_00402268 + uVar5 * 8);
            goto LAB_004090ea;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xb);
        iVar4 = 9;
LAB_004090ea:
        iVar1 = *(int *)((int)this + 4);
        if ((iVar1 != iVar4) && (iVar1 != 9)) {
          if (iVar1 == 5) {
LAB_0040910d:
            bVar6 = iVar4 == 1;
          }
          else {
            if (iVar1 != 1) {
              if (iVar1 != 0) goto LAB_00409087;
              goto LAB_0040910d;
            }
            bVar6 = iVar4 == 5;
          }
          if (!bVar6) goto LAB_00409087;
        }
        *(int *)((int)this + 4) = iVar4;
        this_00 = (undefined4 *)((int)this + 8);
        uVar5 = FUN_00408c9d(this_00,local_8);
        if ((char)uVar5 == '\0') {
LAB_00409128:
          uVar5 = 0x8007000e;
        }
        else {
          LVar2 = RegQueryValueExW(param_1,*(LPCWSTR *)((int)this + 0x24),(LPDWORD)0x0,&local_10,
                                   (LPBYTE)*this_00,&local_8);
          if (LVar2 == 0) {
            FUN_00408c9d(this_00,local_8);
            if (*(int *)((int)this + 4) == 5) {
              uVar5 = FUN_00408e5c((LPCWSTR)*this_00,&local_24);
              if ((int)uVar5 < 0) goto LAB_004091b9;
              local_14 = local_24;
              uVar5 = ((int)local_20 - (int)local_24 >> 1) * 2 + 2;
              *(undefined4 *)((int)this + 0xc) = *this_00;
              local_8 = uVar5;
              uVar3 = FUN_00408fbd(this_00,uVar5);
              if ((char)uVar3 == '\0') goto LAB_00409128;
              memcpy(*(void **)((int)this + 0xc),local_14,uVar5);
              *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + uVar5;
            }
            *(undefined1 *)this = 1;
            goto LAB_004091b7;
          }
          uVar5 = 0x80004005;
          *(undefined4 *)((int)this + 0xc) = *this_00;
        }
        goto LAB_004091b9;
      }
    }
    else {
      phkResult = (PHKEY)FUN_00408c7e(&local_c);
      LVar2 = RegOpenKeyExW(param_1,*(LPCWSTR *)((int)this + 0x14),0,param_2 | 0x20019,phkResult);
      param_1 = local_c;
      if (LVar2 == 0) goto LAB_00409094;
    }
LAB_00409087:
    uVar5 = 0x80004005;
  }
LAB_004091b9:
  if (local_24 != local_1c) {
    FUN_0042a48f(local_24);
  }
LAB_004091d0:
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  return uVar5;
}



/* Function: FUN_004091ee */

undefined4 __fastcall FUN_004091ee(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      return **(undefined4 **)(param_1 + 8);
    }
    if (*(int *)(param_1 + 4) == 1) {
      uVar1 = o_wcstol(*(undefined4 *)(param_1 + 8),0,10);
      return uVar1;
    }
  }
  return *(undefined4 *)(param_1 + 0x34);
}



/* Function: FUN_00409220 */

void FUN_00409220(void)

{
  int iVar1;
  uint uVar2;
  char local_40 [60];
  
  FUN_00408bbb((undefined2 *)local_40);
  iVar1 = FUN_00408c1b(local_40,0,L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Debug",
                       L"DebugBreak");
  if (-1 < iVar1) {
    uVar2 = FUN_00409006(local_40,(HKEY)0x80000002,0x100);
    if (-1 < (int)uVar2) {
      iVar1 = FUN_004091ee(local_40);
      if (iVar1 != 0) {
        DebugBreak();
      }
    }
  }
  FUN_00408bf7((int)local_40);
  return;
}



/* Function: FUN_00409290 */

void FUN_00409290(undefined4 param_1,int param_2,undefined1 param_3,undefined4 param_4,
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



/* Function: FUN_004093a4 */

ULONG __thiscall FUN_004093a4(void *this,PVOID param_1,PREGHANDLE param_2)

{
  ULONG UVar1;
  
  if (*(int *)param_2 == 0 && *(int *)((int)param_2 + 4) == 0) {
    UVar1 = EventRegister((LPCGUID)this,FUN_00409290,param_1,param_2);
  }
  else {
    UVar1 = 0;
  }
  return UVar1;
}



/* Function: FUN_004093d1 */

void __thiscall FUN_004093d1(void *this,undefined4 param_1)

{
  HANDLE hObject;
  
                    /* WARNING: Load size is inaccurate */
  hObject = *this;
  *(undefined4 *)this = param_1;
  if (1 < (int)hObject + 1U) {
    CloseHandle(hObject);
  }
  return;
}



/* Function: FUN_004093f6 */

int __fastcall FUN_004093f6(int *param_1)

{
  int iVar1;
  
  if ((int *)*param_1 == param_1 + 2) {
    iVar1 = 3;
  }
  else {
    iVar1 = param_1[2] - *param_1 >> 1;
  }
  return iVar1 * 2 + 1;
}



/* Function: FUN_00409416 */

void __thiscall FUN_00409416(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004093f6((int *)this);
  if (uVar1 < param_2) {
    uVar1 = param_2;
  }
  if (uVar1 < 0x3ffffffc) {
    uVar1 = uVar1 + 1;
    if (0x7fffffff < uVar1) {
      uVar2 = 0;
      goto LAB_0040946c;
    }
  }
  else {
    if (0x3ffffffb < param_2) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    uVar1 = 0x3ffffffc;
  }
  uVar2 = FUN_0042a4d8(uVar1 * 2);
LAB_0040946c:
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Function: FUN_0040947f */

void __thiscall FUN_0040947f(void *this,int param_1,int param_2,int param_3)

{
                    /* WARNING: Load size is inaccurate */
  if (*this != (int *)((int)this + 8)) {
                    /* WARNING: Load size is inaccurate */
    FUN_0042a48f(*this);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_3 * 2;
  *(int *)((int)this + 8) = param_1 + (param_2 + -1) * 2;
  return;
}



/* Function: FUN_004094c0 */

undefined1 __thiscall FUN_004094c0(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  void *local_10;
  int local_c;
  undefined1 local_5;
  
  local_5 = 1;
                    /* WARNING: Load size is inaccurate */
  if (*this == (int *)((int)this + 8)) {
    uVar1 = 3;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    uVar1 = *(int *)((int)this + 8) - *this >> 1;
  }
  if (uVar1 < param_2) {
    FUN_00409416(this,&local_10,param_2);
    if (local_10 == (void *)0x0) {
      local_5 = 0;
    }
    else {
      memcpy(local_10,param_1,param_2 * 2);
      *(undefined2 *)(param_2 * 2 + (int)local_10) = 0;
      FUN_0040947f(this,(int)local_10,local_c,param_2);
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    memmove(*this,param_1,param_2 * 2);
                    /* WARNING: Load size is inaccurate */
    puVar2 = (undefined2 *)(*this + param_2 * 2);
    *(undefined2 **)((int)this + 4) = puVar2;
    *puVar2 = 0;
  }
  return local_5;
}



/* Function: FUN_00409553 */

void __thiscall FUN_00409553(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  if (param_1 == (short *)0x0) {
    uVar3 = 0;
  }
  else {
    psVar2 = param_1;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    uVar3 = (int)psVar2 - (int)(param_1 + 1) >> 1;
  }
  FUN_004094c0(this,param_1,uVar3);
  return;
}



/* Function: FUN_00409590 */

void __fastcall FUN_00409590(undefined4 *param_1)

{
  if (1 < (int)*param_1 + 1U) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_004095b0 */

void __fastcall FUN_004095b0(int *param_1)

{
  if ((int *)*param_1 != param_1 + 2) {
    FUN_0042a48f(*param_1);
  }
  return;
}



/* Function: FUN_004095d0 */

undefined4 * __fastcall FUN_004095d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 2;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  *(undefined2 *)puVar1 = 0;
  return param_1;
}



/* Function: FUN_004095e6 */

undefined4 __cdecl FUN_004095e6(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00409717((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_0040962a */

undefined4 __fastcall FUN_0040962a(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00409690 */

undefined4 __fastcall FUN_00409690(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_00409717 */

undefined4 __fastcall
FUN_00409717(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_0042ab61(param_1,uVar1,param_4,param_5);
  if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
    uVar3 = 0x8007007a;
  }
  else if (uVar2 != uVar1) {
    return 0;
  }
  *(undefined2 *)(param_1 + uVar1 * 2) = 0;
  return uVar3;
}



/* Function: FUN_0040975c */

void __fastcall
FUN_0040975c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  EtwTraceMessage(param_3,param_4,0x2b,param_2,param_1,pwVar2,iVar3,0);
  return;
}



/* Function: FUN_004097c1 */

void __fastcall
FUN_004097c1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  EtwTraceMessage(param_3,param_4,0x2b,param_2,param_1,pwVar2,iVar3,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_0040982c */

DWORD __thiscall FUN_0040982c(void *param_1,LPCWSTR param_2,uint *param_3)

{
  DWORD DVar1;
  DWORD unaff_ESI;
  undefined4 uStackY_28;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c [2];
  
  if ((param_2 == (LPCWSTR)0x0) || (param_3 == (uint *)0x0)) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return unaff_ESI;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return unaff_ESI;
    }
    local_c[0] = param_1;
    FUN_004074f5(10,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    return unaff_ESI;
  }
  local_c[0] = (void *)0x4;
  DVar1 = FUN_004099aa(param_1,param_2);
  if ((int)DVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_0040975c(0xb,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),param_2);
    }
    goto LAB_00409946;
  }
  if (*(int *)((int)param_1 + 0x60) == *(int *)((int)param_1 + 100)) {
    if (*(wchar_t **)((int)param_1 + 0x210) == *(wchar_t **)((int)param_1 + 0x214)) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0xc,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      DVar1 = 0x80004005;
      goto LAB_00409946;
    }
    DVar1 = FUN_00409f86(param_1,*(wchar_t **)((int)param_1 + 0x210));
    if (-1 < (int)DVar1) goto LAB_00409915;
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00409946;
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar2 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_28 = 0xd;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x208) = 1;
LAB_00409915:
    DVar1 = FUN_00409c76(param_1,(PWER_SUBMIT_RESULT)local_c);
    if (-1 < (int)DVar1) {
      DVar1 = 0;
      goto LAB_00409946;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00409946;
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar2 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_28 = 0xe;
  }
  FUN_00407519(uStackY_28,&DAT_004028a4,uVar2,uVar3);
LAB_00409946:
  if ((*(byte *)((int)param_1 + 0x200) & 1) != 0) {
    DeleteFileW(param_2);
  }
  *param_3 = DVar1 >> 0x1f;
  if (local_c[0] == (void *)0x3) {
    *param_3 = 0x10;
  }
  return unaff_ESI;
}



/* Function: FUN_004099aa */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __thiscall FUN_004099aa(void *this,LPCWSTR param_1)

{
  void *pvVar1;
  DWORD DVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 local_24;
  undefined4 local_20;
  short *local_1c;
  int *local_18;
  void *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pvVar1 = ThreadLocalStoragePointer;
  uStack_4 = 0x18;
  local_24 = 0;
  local_20 = 0;
  local_1c = (short *)0x0;
  local_8 = 0;
  piVar3 = (int *)((int)this + 0x20c);
  *piVar3 = 0x20000;
                    /* WARNING: Load size is inaccurate */
  local_18 = piVar3;
  local_14 = this;
  if (*(int *)(*pvVar1 + 4) < DAT_0042dd3c) {
    FUN_0042a794(&DAT_0042dd3c);
    if (DAT_0042dd3c == -1) {
      _DAT_0042d3a4 = (int)this + 0x1e0;
      _DAT_0042d4f4 = (int)this + 0x130;
      _DAT_0042d3b4 = (int)this + 0x210;
      _DAT_0042d504 = (int)this + 0x150;
      _DAT_0042d3c4 = (int)this + 0x200;
      _DAT_0042d3e4 = (int)this + 0x10;
      _DAT_0042d3d4 = (int)this + 0x204;
      _DAT_0042d3f4 = (int)this + 0x20;
      _DAT_0042d404 = (int)this + 0x30;
      _DAT_0042d414 = (int)this + 0x40;
      _DAT_0042d424 = (int)this + 0x50;
      _DAT_0042d434 = (int)this + 0x60;
      _DAT_0042d444 = (int)this + 0x1f0;
      _DAT_0042d454 = (int)this + 0x70;
      _DAT_0042d464 = (int)this + 0x80;
      _DAT_0042d474 = (int)this + 0x90;
      _DAT_0042d484 = (int)this + 0xa0;
      _DAT_0042d494 = (int)this + 0xb0;
      _DAT_0042d4a4 = (int)this + 0xc0;
      _DAT_0042d4b4 = (int)this + 0xd0;
      _DAT_0042d4c4 = (int)this + 0xe0;
      _DAT_0042d4d4 = (int)this + 0xf0;
      _DAT_0042d4e4 = (int)this + 0x100;
      _DAT_0042d514 = (int)this + 0x1c0;
      _DAT_0042d524 = (int)this + 0x180;
      _DAT_0042d594 = (int)local_14 + 0x220;
      _DAT_0042d554 = local_14;
      _DAT_0042d384 = piVar3;
      _DAT_0042d394 = this;
      _DAT_0042d534 = _DAT_0042d3f4;
      _DAT_0042d544 = _DAT_0042d4f4;
      _DAT_0042d564 = _DAT_0042d514;
      _DAT_0042d574 = _DAT_0042d504;
      _DAT_0042d584 = _DAT_0042d3e4;
      _DAT_0042d5a4 = _DAT_0042d524;
      FUN_0042a742(&DAT_0042dd3c);
      piVar3 = local_18;
      this = local_14;
    }
  }
  DVar2 = FUN_00427ac1(&local_24,param_1);
  if ((int)DVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004097c1(0xf,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),param_1);
    }
  }
  else {
    uVar4 = FUN_00427c67(&local_24);
    FUN_00427d28(local_1c,(uint)uVar4 >> 1 | (int)((ulonglong)uVar4 >> 0x20) << 0x1f,0x42d380,0x23);
    if (*(uint *)((int)this + 0x220) != 0) {
      FUN_0040d5ad(*(uint *)((int)this + 0x220),(uint *)((int)this + 0x200),
                   (uint *)((int)this + 0x204),(uint *)0x0);
    }
    if (*piVar3 == 0x20000) {
      if ((*(int *)((int)this + 0x60) != *(int *)((int)this + 100)) ||
         (*(int *)((int)this + 0x210) != *(int *)((int)this + 0x214))) {
        DVar2 = 0;
        goto LAB_00409aea;
      }
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x11,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
            ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x10,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    DVar2 = 0x80004005;
  }
LAB_00409aea:
  FUN_00427ce4(&local_24);
  return DVar2;
}



/* Function: FUN_00409c76 */

void __thiscall FUN_00409c76(void *this,PWER_SUBMIT_RESULT param_1)

{
  void *pvVar1;
  HREPORT *phReportHandle;
  HRESULT HVar2;
  uint dwFlags;
  WER_REPORT_TYPE repType;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  WER_CONSENT local_8c4;
  undefined2 *local_8c0;
  undefined2 *local_8bc;
  undefined2 local_8b8 [4];
  uint local_8b0;
  HREPORT local_8ac;
  _WER_REPORT_INFORMATION local_8a8;
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_8c0 = local_8b8;
  repType = WerReportNonCritical;
  local_8ac = (HREPORT)0x0;
  local_8b8[0] = 0;
  local_8bc = local_8c0;
  memset(&local_8a8,0,0x894);
  local_8b0 = 0;
  local_8c4 = WerConsentNotAsked;
  if (param_1 == (PWER_SUBMIT_RESULT)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x12,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_00409f3b;
  }
  *param_1 = WerReportFailed;
  if (*(int *)((int)this + 0x1f0) != *(int *)((int)this + 500)) {
    FUN_0040e25a((int)this);
  }
  pvVar1 = *(void **)((int)this + 0x1c0);
  if (pvVar1 != *(void **)((int)this + 0x1c4)) {
    FUN_004094c0(&local_8c0,pvVar1,(int)*(void **)((int)this + 0x1c4) - (int)pvVar1 >> 1);
    FUN_004089f5((int *)&local_8c0,(short *)&DAT_0040268c);
    FUN_0040a536(&local_8c0,(short *)&DAT_0040269c);
  }
  if (*(int *)((int)this + 0x10) != *(int *)((int)this + 0x14)) {
    FUN_0040a473(&local_8c0,*(void **)((int)this + 0x10),
                 *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 1);
  }
                    /* WARNING: Load size is inaccurate */
  local_8a8.dwSize = 0x894;
  if (*this != *(int *)((int)this + 4)) {
    FUN_0040a406(local_8a8.wzApplicationName,0x80,*this);
  }
  if (*(int *)((int)this + 0x1e0) != *(int *)((int)this + 0x1e4)) {
    FUN_0040a406(local_8a8.wzFriendlyEventName,0x80,*(int *)((int)this + 0x1e0));
  }
  if (local_8c0 != local_8bc) {
    FUN_0040a406(local_8a8.wzDescription,0x200,(int)local_8c0);
  }
  if ((*(int *)((int)this + 0x208) == 0) || ((*(uint *)((int)this + 0x200) & 0x800) != 0)) {
    repType = WerReportCritical;
  }
  phReportHandle = (HREPORT *)FUN_0040a3e7(&local_8ac);
  HVar2 = WerReportCreate(*(PCWSTR *)((int)this + 0x60),repType,&local_8a8,phReportHandle);
  if (HVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00409f3b;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar3 = 0x13;
  }
  else if (*(int *)((int)this + 0x208) == 2) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00409f3b;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar3 = 0x15;
  }
  else {
    HVar2 = FUN_0040df20(this,local_8ac);
    if (-1 < HVar2) {
      FUN_0040dc9d(this,local_8ac);
      FUN_0040ddd4(this,local_8ac);
      FUN_0040dbf0(this,&local_8b0,&local_8c4);
      dwFlags = local_8b0;
      if ((*(byte *)((int)this + 0x204) & 0x20) != 0) {
        dwFlags = local_8b0 | 8;
      }
      HVar2 = WerReportSubmit(local_8ac,local_8c4,dwFlags,param_1);
      if (((HVar2 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x16,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_00409f3b;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00409f3b;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar3 = 0x14;
  }
  FUN_00407519(uVar3,&DAT_004028a4,uVar4,uVar5);
LAB_00409f3b:
  if (local_8c0 != local_8b8) {
    FUN_0042a48f(local_8c0);
  }
  if (local_8ac != (HREPORT)0x0) {
    WerReportCloseHandle(local_8ac);
  }
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00409f86 */

int __thiscall FUN_00409f86(void *this,wchar_t *param_1)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined2 *local_24;
  undefined2 *local_20;
  undefined2 local_1c;
  undefined2 local_1a [3];
  short *local_14;
  undefined4 local_10;
  int local_c;
  
  local_24 = &local_1c;
  local_1c = 0;
  local_20 = local_24;
  if (*param_1 != L'/') {
    local_20 = local_1a;
    local_1a[0] = 0;
    local_1c = 0x2f;
  }
  cVar3 = FUN_0040a536(&local_24,param_1);
  if (cVar3 == '\0') {
    iVar6 = -0x7ff8fff2;
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004097c1(0x17,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),param_1);
    }
    goto LAB_0040a0e3;
  }
  *(undefined4 *)((int)this + 0x208) = 3;
  local_10 = 0;
  uVar5 = 0;
  local_c = 0;
  do {
    psVar2 = *(short **)((int)&PTR_u__dw_stagetwo_asp_00401358 + uVar5);
    local_14 = psVar2 + 1;
    psVar4 = psVar2;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != (short)local_10);
    iVar6 = o__wcsnicmp(local_24,psVar2,(int)psVar4 - (int)local_14 >> 1);
    if (iVar6 == 0) {
      *(undefined4 *)((int)this + 0x208) = *(undefined4 *)(&DAT_00401360 + local_c * 0xc);
      break;
    }
    local_c = local_c + 1;
    uVar5 = uVar5 + 0xc;
  } while (uVar5 < 0x30);
  iVar6 = *(int *)((int)this + 0x208);
  if (iVar6 == 1) {
    iVar6 = FUN_0040a109(param_1,0x4012b8,0xb);
LAB_0040a0af:
    if (-1 < iVar6) {
      iVar6 = 0;
      goto LAB_0040a0e3;
    }
  }
  else {
    if (iVar6 == 0) {
      iVar6 = FUN_0040a2e2(this,param_1);
      goto LAB_0040a0af;
    }
    if (iVar6 == 2) {
      cVar3 = FUN_00409553((void *)((int)this + 0x60),L"LEGACY");
      iVar6 = -0x7ff8fff2;
      if (cVar3 != '\0') {
        iVar6 = 0;
      }
      goto LAB_0040a0af;
    }
    iVar6 = -0x7fffbffb;
  }
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_004074f5(0x18,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
LAB_0040a0e3:
  if (local_24 != &local_1c) {
    FUN_0042a48f(local_24);
  }
  return iVar6;
}



/* Function: FUN_0040a109 */

int FUN_0040a109(wchar_t *param_1,int param_2,uint param_3)

{
  char cVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 *local_34;
  undefined2 *local_30;
  undefined2 local_2c [4];
  undefined2 *local_24;
  undefined2 *local_20;
  undefined2 local_1c [4];
  wchar_t *local_14;
  int local_10;
  wchar_t *local_c [2];
  
  local_c[0] = (wchar_t *)0x0;
  local_34 = local_2c;
  local_2c[0] = 0;
  local_24 = local_1c;
  local_1c[0] = 0;
  local_30 = local_34;
  local_20 = local_24;
  pwVar2 = wcschr(param_1,L'?');
  if (pwVar2 == (wchar_t *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_0040975c(0x19,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),(wchar_t *)0x0);
    }
    iVar3 = -0x7fffbffb;
  }
  else {
    pwVar2 = pwVar2 + 1;
joined_r0x0040a17f:
    do {
      if (pwVar2 == (wchar_t *)0x0) {
        iVar3 = 0;
        goto LAB_0040a261;
      }
      iVar3 = FUN_0040d625(pwVar2,local_c,&local_34,&local_24);
      if (iVar3 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040a261;
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar5 = 0x1a;
        goto LAB_0040a2cf;
      }
      uVar4 = 0;
      local_14 = local_c[0];
      if (param_3 != 0) {
        do {
          iVar3 = o__wcsicmp(*(undefined4 *)(param_2 + uVar4 * 8),local_34);
          if (iVar3 == 0) break;
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_3);
      }
      pwVar2 = local_14;
      iVar3 = o__wcsicmp(L"EventType",local_34);
      if (iVar3 == 0) {
        cVar1 = FUN_004094c0((void *)(local_10 + 0x60),local_24,(int)local_20 - (int)local_24 >> 1);
        if (cVar1 == '\0') {
          iVar3 = -0x7ff8fff2;
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_00407519(0x1b,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          goto LAB_0040a261;
        }
        goto joined_r0x0040a17f;
      }
    } while ((((param_3 <= uVar4) || (uVar4 == 0)) || (9 < uVar4 - 1)) ||
            (cVar1 = FUN_004094c0((void *)((uVar4 + 6) * 0x10 + local_10),local_24,
                                  (int)local_20 - (int)local_24 >> 1), cVar1 != '\0'));
    iVar3 = -0x7ff8fff2;
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0x1c;
LAB_0040a2cf:
      FUN_004074f5(uVar5,&DAT_004028a4,uVar6,uVar7);
    }
  }
LAB_0040a261:
  if (local_24 != local_1c) {
    FUN_0042a48f(local_24);
  }
  if (local_34 != local_2c) {
    FUN_0042a48f(local_34);
  }
  return iVar3;
}



/* Function: FUN_0040a2e2 */

int __thiscall FUN_0040a2e2(void *this,wchar_t *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *this_00;
  
  uVar3 = 8;
  this_00 = (void *)((int)this + 0x70);
  do {
    cVar1 = FUN_00409553(this_00,*(short **)(&UNK_00401314 + uVar3));
    if (((cVar1 == '\0') && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
      FUN_004097c1(0x1d,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),*(wchar_t **)(&UNK_00401314 + uVar3));
    }
    uVar3 = uVar3 + 8;
    this_00 = (void *)((int)this_00 + 0x10);
  } while (uVar3 < 0x48);
  iVar2 = FUN_0040a109(param_1,0x401310,9);
  if (iVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x1e,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    cVar1 = FUN_00409553((void *)((int)this + 0x60),L"APPCRASH");
    iVar2 = -0x7ff8fff2;
    if (cVar1 == '\0') {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_0040975c(0x1f,&DAT_004028a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),L"APPCRASH");
      }
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* Function: FUN_0040a3d3 */

void __fastcall FUN_0040a3d3(int *param_1)

{
  if (*param_1 != 0) {
    WerReportCloseHandle((HREPORT)*param_1);
  }
  return;
}



/* Function: FUN_0040a3e7 */

undefined4 * __fastcall FUN_0040a3e7(undefined4 *param_1)

{
  HREPORT hReportHandle;
  
  hReportHandle = (HREPORT)*param_1;
  *param_1 = 0;
  if (hReportHandle != (HREPORT)0x0) {
    WerReportCloseHandle(hReportHandle);
  }
  return param_1;
}



/* Function: FUN_0040a406 */

undefined4 __fastcall FUN_0040a406(short *param_1,uint param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar3 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    iVar4 = 0x7ffffffe - param_2;
    iVar5 = param_3 - (int)param_1;
    do {
      if ((iVar4 + param_2 == 0) || (sVar1 = *(short *)(iVar5 + (int)param_1), sVar1 == 0)) break;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    psVar2 = param_1 + -1;
    if (param_2 != 0) {
      psVar2 = param_1;
    }
    *psVar2 = 0;
    uVar3 = 0x8007007a;
    if (param_2 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Function: FUN_0040a473 */

undefined1 __thiscall FUN_0040a473(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_14;
  int local_10;
  void *local_c;
  int local_8;
  
                    /* WARNING: Load size is inaccurate */
  iVar3 = *(int *)((int)this + 4) - *this >> 1;
  uVar1 = iVar3 + param_2;
  if (param_2 <= uVar1) {
                    /* WARNING: Load size is inaccurate */
    if (*this == (int *)((int)this + 8)) {
      uVar2 = 3;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      uVar2 = *(int *)((int)this + 8) - *this >> 1;
    }
    local_c = this;
    local_8 = iVar3;
    if (uVar1 <= uVar2) {
      memmove(*(void **)((int)this + 4),param_1,param_2 * 2);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2 * 2;
      **(undefined2 **)((int)this + 4) = 0;
      return 1;
    }
    FUN_00409416(this,&local_14,uVar1);
    if (local_14 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
      memcpy(local_14,*this,iVar3 * 2);
      memcpy((void *)((int)local_14 + iVar3 * 2),param_1,param_2 * 2);
      *(undefined2 *)((int)local_14 + (local_8 + param_2) * 2) = 0;
      FUN_0040947f(local_c,(int)local_14,local_10,local_8 + param_2);
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_0040a536 */

void __thiscall FUN_0040a536(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  if (param_1 == (short *)0x0) {
    uVar3 = 0;
  }
  else {
    psVar2 = param_1;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    uVar3 = (int)psVar2 - (int)(param_1 + 1) >> 1;
  }
  FUN_0040a473(this,param_1,uVar3);
  return;
}



/* Function: FUN_0040a573 */

void __fastcall
FUN_0040a573(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  EtwTraceMessage(param_3,param_4,0x2b,param_2,param_1,&stack0x0000000c,4,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_0040a5a3 */

void __thiscall FUN_0040a5a3(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_3 == (char *)0x0) {
    pcVar3 = (char *)0x5;
  }
  else {
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_3 + 1));
  }
  pcVar2 = "NULL";
  if (param_3 != (char *)0x0) {
    pcVar2 = param_3;
  }
  EtwTraceMessage(param_1,param_2,0x2b,&DAT_00402994,this,pcVar2,pcVar3,0);
  return;
}



/* Function: FUN_0040a5f6 */

void __thiscall FUN_0040a5f6(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_3 == (char *)0x0) {
    pcVar3 = (char *)0x5;
  }
  else {
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_3 + 1));
  }
  pcVar2 = "NULL";
  if (param_3 != (char *)0x0) {
    pcVar2 = param_3;
  }
  EtwTraceMessage(param_1,param_2,0x2b,&DAT_00402994,this,pcVar2,pcVar3,&stack0x00000010,4,0);
  return;
}



/* Function: thunk_FUN_0040a65a */

void __fastcall thunk_FUN_0040a65a(int *param_1)

{
  if (*param_1 != 0) {
    CloseHandle((HANDLE)*param_1);
  }
  if (param_1[1] != 0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Function: FUN_0040a65a */

void __fastcall FUN_0040a65a(int *param_1)

{
  if (*param_1 != 0) {
    CloseHandle((HANDLE)*param_1);
  }
  if (param_1[1] != 0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Function: FUN_0040a6a0 */

DWORD __fastcall FUN_0040a6a0(undefined4 *param_1,UINT param_2,HINSTANCE param_3)

{
  char cVar1;
  uint uVar2;
  DWORD DVar3;
  void *local_8;
  
  local_8 = (void *)0x0;
  uVar2 = LoadStringW(param_3,param_2,(LPWSTR)&local_8,0);
  if (uVar2 == 0) {
    DVar3 = GetLastError();
    uVar2 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      uVar2 = DVar3;
    }
    param_1[1] = (undefined2 *)*param_1;
    *(undefined2 *)*param_1 = 0;
  }
  else {
    cVar1 = FUN_004094c0(param_1,local_8,uVar2);
    uVar2 = 0x8007000e;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Function: FUN_0040a705 */

undefined4 FUN_0040a705(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  uVar1 = FUN_0040d331(param_1,param_2,0,(ushort *)L"drwatson",8);
  if (uVar1 == 0xffffffff) {
    uVar1 = FUN_0040d331(param_1,param_2,0,(ushort *)L"drwtsn32",8);
    if (uVar1 == 0xffffffff) goto LAB_0040a73f;
  }
  uVar2 = 1;
LAB_0040a73f:
  return CONCAT31((int3)(uVar1 >> 8),uVar2);
}



/* Function: FUN_0040a74c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

DWORD __thiscall FUN_0040a74c(void *this,HANDLE param_1,undefined4 *param_2)

{
  int *piVar1;
  LPVOID lpParameter;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  HANDLE hHandle;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  DWORD local_1c;
  LPVOID local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  hHandle = (HANDLE)0x0;
  local_14 = 0;
  local_8 = 0;
  local_1c = 0;
  local_18 = this;
  if ((param_1 == (HANDLE)0x0) || (param_2 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    DVar2 = 0x80070057;
  }
  else {
    DVar2 = FUN_0040aa03(this,param_1);
    lpParameter = local_18;
    if ((int)DVar2 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0xb,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else {
      piVar1 = (int *)((int)local_18 + 0x228);
      iVar3 = FUN_004174b0(*(undefined4 *)(*(int *)((int)local_18 + 0x214) + 8),
                           (undefined4 *)((int)local_18 + 0x224),piVar1);
      if ((iVar3 < 0) || (iVar3 = FUN_0040c2ec((int)lpParameter), iVar3 == 0)) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0xc,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        DVar2 = 0x80004005;
      }
      else {
        hHandle = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0040a990,lpParameter,0,&local_1c);
        if ((int)hHandle + 1U < 2) {
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_004074f5(0xd,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          DVar4 = GetLastError();
          DVar2 = DVar4 & 0xffff | 0x80070000;
          if ((int)DVar4 < 1) {
            DVar2 = DVar4;
          }
        }
        else {
          local_14 = 1;
          do {
            if ((local_14 == 0) || (*(int *)((int)lpParameter + 0x21c) != 0)) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
                uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar5 = 0xf;
                goto LAB_0040a8a7;
              }
            }
            else {
              local_14 = FUN_0040c2ec((int)lpParameter);
              if (((local_14 == 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
                 ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
                uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar5 = 0xe;
LAB_0040a8a7:
                FUN_004074f5(uVar5,&DAT_00402994,uVar6,uVar7);
              }
            }
            DVar2 = WaitForSingleObject(hHandle,0x1a0a);
            if (DVar2 == 0) goto LAB_0040a8f3;
          } while (DVar2 == 0x102);
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_00407519(0x10,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
LAB_0040a8f3:
          SetEvent((HANDLE)*piVar1);
          DVar2 = 0;
        }
      }
    }
    *param_2 = *(undefined4 *)((int)local_18 + 0x220);
  }
  if (hHandle != (HANDLE)0xffffffff && hHandle != (HANDLE)0x0) {
    CloseHandle(hHandle);
  }
  return DVar2;
}



/* Function: FUN_0040a990 */

undefined4 FUN_0040a990(void *param_1)

{
  FUN_0040a9a9(param_1);
  return 0;
}



/* Function: FUN_0040a9a9 */

int __fastcall FUN_0040a9a9(void *param_1)

{
  int iVar1;
  _WER_SUBMIT_RESULT local_c [2];
  
  local_c[0] = WerReportFailed;
  iVar1 = FUN_0040adbe(param_1,local_c);
  if (iVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x11,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_0040aa03 */

void __thiscall FUN_0040aa03(void *this,HANDLE param_1)

{
  uint *puVar1;
  short sVar2;
  LPCVOID lpBaseAddress;
  int iVar3;
  LPVOID pvVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_264;
  byte abStack_260 [4];
  short sStack_25c;
  undefined1 auStack_25a [590];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&iStack_264;
  if (param_1 == (HANDLE)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x12,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0040ac38;
  }
  pvVar4 = MapViewOfFile(param_1,6,0,0,0);
  lpBaseAddress = *(LPCVOID *)((int)this + 0x20c);
  *(LPVOID *)((int)this + 0x20c) = pvVar4;
  if (lpBaseAddress != (LPCVOID)0x0) {
    UnmapViewOfFile(lpBaseAddress);
  }
  piVar5 = *(int **)((int)this + 0x20c);
  if (piVar5 == (int *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040ac38;
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar10 = 0x13;
  }
  else {
    iVar8 = *piVar5;
    if (iVar8 == 0x11d8) {
      *(undefined4 *)((int)this + 0x218) = 1;
      piVar5 = (int *)FUN_0040bf42(&iStack_264,(int)piVar5);
LAB_0040ab24:
      iVar8 = *piVar5;
      *piVar5 = 0;
      iVar3 = *(int *)((int)this + 0x210);
      *(int *)((int)this + 0x210) = iVar8;
      if (iVar3 != 0) {
        FUN_0042a48f(iVar3);
      }
      if (iStack_264 != 0) {
        FUN_0042a48f(iStack_264);
      }
      uVar7 = *(undefined4 *)((int)this + 0x210);
LAB_0040ab5e:
      *(undefined4 *)((int)this + 0x214) = uVar7;
    }
    else {
      if (iVar8 == 0x1c50) {
        *(undefined4 *)((int)this + 0x218) = 2;
        piVar5 = FUN_0040bc47(&iStack_264,(int)piVar5);
        goto LAB_0040ab24;
      }
      if (iVar8 == 0x9c9c) {
        iVar8 = *(int *)((int)this + 0x210);
        *(undefined4 *)((int)this + 0x218) = 0;
        *(undefined4 *)((int)this + 0x210) = 0;
        if (iVar8 != 0) {
          FUN_0042a48f(iVar8);
        }
        uVar7 = *(undefined4 *)((int)this + 0x20c);
        goto LAB_0040ab5e;
      }
    }
    iVar8 = *(int *)((int)this + 0x214);
    if (iVar8 != 0) {
      if (((((*(byte *)(iVar8 + 0x38) & 0x10) == 0) &&
           (uVar6 = FUN_004168e7(*(int *)(iVar8 + 0x28),(uint *)abStack_260), -1 < (int)uVar6)) &&
          ((abStack_260[0] & 1) != 0)) && (sStack_25c != 0)) {
        psVar9 = &sStack_25c;
        do {
          sVar2 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar2 != 0);
        uVar7 = FUN_0040a705((int)&sStack_25c,(int)psVar9 - (int)auStack_25a >> 1);
        if ((char)uVar7 == '\0') {
          puVar1 = (uint *)(*(int *)((int)this + 0x214) + 0x44);
          *puVar1 = *puVar1 | 0x10;
          puVar1 = (uint *)(*(int *)((int)this + 0x214) + 0x4c);
          *puVar1 = *puVar1 | 0x10;
        }
      }
      FUN_0040b312(this,1);
      iVar8 = FUN_0040c267((int)this);
      if (((iVar8 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x15,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_0040ac38;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040ac38;
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar10 = 0x14;
  }
  FUN_004074f5(uVar10,&DAT_00402994,uVar11,uVar7);
LAB_0040ac38:
  FUN_00429fd0(local_c ^ (uint)&iStack_264);
  return;
}



/* Function: FUN_0040ac55 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0040ac55(void *this,int param_1)

{
  short sVar1;
  LPCVOID pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  undefined4 *puVar8;
  HANDLE hObject;
  undefined4 local_588 [180];
  uint local_2b8;
  short local_2b4;
  undefined1 local_2b2 [586];
  undefined4 local_68 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x580;
  puVar8 = (undefined4 *)0x0;
  hObject = (HANDLE)0x0;
  local_8 = 0;
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
    FUN_004074f5(0x16,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  if (param_1 == 3) {
    hObject = OpenThread(0x40,0,*(DWORD *)(*(int *)((int)this + 0x214) + 0xc));
    if (1 < (int)hObject + 1U) {
      uVar3 = FUN_004168e7(*(int *)(*(int *)((int)this + 0x214) + 0x28),&local_2b8);
      if ((-1 < (int)uVar3) && (local_2b4 != 0)) {
        psVar7 = &local_2b4;
        do {
          sVar1 = *psVar7;
          psVar7 = psVar7 + 1;
        } while (sVar1 != 0);
        uVar4 = FUN_0040a705((int)&local_2b4,(int)psVar7 - (int)local_2b2 >> 1);
        if ((char)uVar4 == '\0') {
          puVar5 = (undefined4 *)0x0;
          pvVar2 = *(LPCVOID *)(*(int *)((int)this + 0x214) + 0x14);
          if (pvVar2 != (LPCVOID)0x0) {
            uVar3 = FUN_00426fed(*(HANDLE *)(*(int *)((int)this + 0x214) + 0x28),pvVar2,local_68,
                                 local_588);
            if ((int)uVar3 < 0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              puVar8 = local_68;
              puVar5 = local_588;
            }
          }
          FUN_00416c9b(*(HANDLE *)(*(int *)((int)this + 0x214) + 0x28),hObject,puVar8,puVar5,
                       &local_2b8);
        }
      }
    }
    FUN_0040b312(this,0x10);
    FUN_0040b2bc((int)this);
  }
  else {
    iVar6 = FUN_0040b631((int)this);
    if (iVar6 == 0) {
      FUN_0040b4b0(this,0);
    }
    else {
      FUN_0040bb4a((int)this);
      FUN_0040bac5((int)this);
    }
  }
  if (1 < (int)hObject + 1U) {
    CloseHandle(hObject);
  }
  FUN_0042ae87();
  return;
}



/* Function: FUN_0040adbe */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0040adbe(void *this,PWER_SUBMIT_RESULT param_1)

{
  HREPORT hReportHandle;
  int iVar1;
  DWORD DVar2;
  HREPORT *phReportHandle;
  HRESULT HVar3;
  undefined4 *puVar4;
  int iVar5;
  DWORD dwFlags;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *local_8d8;
  undefined2 *local_8d4;
  undefined2 local_8d0 [4];
  WER_CONSENT local_8c8;
  uint local_8c4;
  uint local_8c0;
  PWER_SUBMIT_RESULT local_8bc;
  HREPORT local_8b8;
  int local_8b4;
  _WER_REPORT_INFORMATION local_8b0;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8c8;
  local_8 = 0x40adcd;
  iVar5 = 0;
  local_8bc = param_1;
  local_8c0 = 0;
  local_8c8 = WerConsentNotAsked;
  memset(&local_8b0,0,0x894);
  local_8d8 = local_8d0;
  local_8d0[0] = 0;
  local_8b8 = (HREPORT)0x0;
  local_8 = 1;
  local_8c4 = 0;
  local_8d4 = local_8d8;
  if (param_1 == (PWER_SUBMIT_RESULT)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x17,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0040b277;
  }
  if (*(int *)((int)this + 0x214) == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x18,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0040b277;
  }
  *param_1 = WerReportFailed;
  iVar1 = FUN_0040c400(this);
  if (iVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x19,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    local_8b4 = FUN_0040ec4f();
    if (local_8b4 != 0) {
      NtSuspendProcess(*(undefined4 *)(*(int *)((int)this + 0x214) + 0x28));
    }
    FUN_0040c6b8(this,&local_8c0,&local_8c8);
    if (*(int *)((int)this + 0x1f0) != *(int *)((int)this + 500)) {
      FUN_0040e25a((int)this);
    }
    dwFlags = local_8c0 | 0x10;
    DVar2 = FUN_0040a6a0(&local_8d8,0x1b62,(HINSTANCE)&IMAGE_DOS_HEADER_00400000);
    if ((((int)DVar2 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x1a,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    local_8b0.dwSize = 0x894;
    local_8b0.hProcess = *(HANDLE *)(*(int *)((int)this + 0x214) + 0x28);
                    /* WARNING: Load size is inaccurate */
    if (*this != *(int *)((int)this + 4)) {
      FUN_0040a406(local_8b0.wzApplicationName,0x80,*this);
    }
    if (*(int *)((int)this + 0x1d0) != *(int *)((int)this + 0x1d4)) {
      FUN_0040a406(local_8b0.wzApplicationPath,0x104,*(int *)((int)this + 0x1d0));
    }
    if (local_8d8 != local_8d4) {
      FUN_0040a406(local_8b0.wzFriendlyEventName,0x80,(int)local_8d8);
    }
    if (*(int *)((int)this + 0x208) == 1) {
      phReportHandle = (HREPORT *)FUN_0040a3e7(&local_8b8);
      HVar3 = WerReportCreate(*(PCWSTR *)((int)this + 0x60),WerReportCritical,&local_8b0,
                              phReportHandle);
      if (HVar3 < 0) {
        iVar5 = local_8b4;
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar6 = 0x1b;
LAB_0040b04e:
          FUN_00407519(uVar6,&DAT_00402994,uVar7,uVar8);
          iVar5 = local_8b4;
        }
      }
      else {
        HVar3 = FUN_0040df20(this,local_8b8);
        if (HVar3 < 0) {
          iVar5 = local_8b4;
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar6 = 0x1c;
            goto LAB_0040b04e;
          }
        }
        else {
LAB_0040b0e6:
          iVar5 = WerpGetReportFlags(local_8b8,&local_8c4);
          if (iVar5 < 0) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              FUN_00407519(0x1f,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            }
          }
          else {
            dwFlags = dwFlags | local_8c4;
          }
          FUN_0040dc9d(this,local_8b8);
          FUN_0040ddd4(this,local_8b8);
          FUN_0040c730(this,local_8b8);
          iVar5 = WerpSetCallBack(local_8b8,FUN_0040d1c0,this);
          if (iVar5 < 0) {
            iVar5 = local_8b4;
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar6 = 0x20;
              goto LAB_0040b04e;
            }
          }
          else {
            HVar3 = WerReportSubmit(local_8b8,local_8c8,dwFlags,local_8bc);
            iVar5 = local_8b4;
            if (HVar3 < 0) {
              *(undefined4 *)((int)this + 0x220) = 1;
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar6 = 0x21;
                goto LAB_0040b04e;
              }
            }
            else {
              *(undefined4 *)((int)this + 0x220) = 0;
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
                FUN_0040a573(0x22,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
                iVar5 = local_8b4;
              }
            }
          }
        }
      }
    }
    else if (*(int *)((int)this + 0x208) == 0) {
      puVar4 = FUN_0040a3e7(&local_8b8);
      iVar5 = FUN_0040c937(this,&local_8b0,puVar4);
      if (-1 < iVar5) goto LAB_0040b0e6;
      iVar5 = local_8b4;
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar6 = 0x1d;
        goto LAB_0040b04e;
      }
    }
    else {
      iVar5 = local_8b4;
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0x1e,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        iVar5 = local_8b4;
      }
    }
  }
  FUN_0040ac55(this,*local_8bc);
  hReportHandle = local_8b8;
  local_8b8 = (HREPORT)0x0;
  if (hReportHandle != (HREPORT)0x0) {
    WerReportCloseHandle(hReportHandle);
  }
  if (iVar5 != 0) {
    NtResumeProcess(*(undefined4 *)(*(int *)((int)this + 0x214) + 0x28));
  }
LAB_0040b277:
  if (local_8b8 != (HREPORT)0x0) {
    WerReportCloseHandle(local_8b8);
  }
  if (local_8d8 != local_8d0) {
    FUN_0042a48f(local_8d8);
  }
  FUN_0042ae87();
  return;
}



/* Function: FUN_0040b2bc */

void __fastcall FUN_0040b2bc(int param_1)

{
  if (*(int *)(param_1 + 0x214) == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x23,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      return;
    }
  }
  else {
    SetEvent(*(HANDLE *)(*(int *)(param_1 + 0x214) + 0x18));
    SetEvent(*(HANDLE *)(*(int *)(param_1 + 0x214) + 0x20));
  }
  return;
}



/* Function: FUN_0040b312 */

undefined4 __thiscall FUN_0040b312(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x214) == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x24,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar2 = 0x80070057;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x214) + 0x9a84) = param_1;
    iVar1 = *(int *)((int)this + 0x218);
    if (iVar1 != 0) {
      if ((iVar1 != 1) && (iVar1 != 2)) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0x25,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        return 0x80004005;
      }
      *(undefined4 *)(*(int *)((int)this + 0x20c) + 0x2c) = param_1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0040b3ae */

undefined4 __fastcall FUN_0040b3ae(int param_1)

{
  int iVar1;
  undefined4 uStackY_10;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x26,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  iVar1 = *(int *)(param_1 + 0x218);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x20c);
    if (iVar1 != 0) goto LAB_0040b45c;
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0x801b8003;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0x801b8003;
    }
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar2 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_10 = 0x27;
  }
  else {
    if (iVar1 != 2) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x29,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      return 0x80004005;
    }
    iVar1 = *(int *)(param_1 + 0x20c);
    if (iVar1 != 0) {
LAB_0040b45c:
      *(undefined4 *)(*(int *)(param_1 + 0x214) + 0x9c94) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(*(int *)(param_1 + 0x214) + 0x9c98) =
           *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x44);
      return 0;
    }
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0x801b8003;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0x801b8003;
    }
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar2 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_10 = 0x28;
  }
  FUN_004074f5(uStackY_10,&DAT_00402994,uVar2,uVar3);
  return 0x801b8003;
}



/* Function: FUN_0040b4b0 */

uint __thiscall FUN_0040b4b0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
    FUN_004074f5(0x2a,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  iVar1 = *(int *)((int)this + 0x214);
  if (iVar1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x2b,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar2 = 0x801b8003;
  }
  else if ((*(uint *)((int)this + 0x200) & 0x1000) == 0) {
    BVar3 = TerminateProcess(*(HANDLE *)(iVar1 + 0x28),*(UINT *)(iVar1 + 0x9a84));
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      uVar2 = DVar4 & 0xffff | 0x80070000;
      if ((int)DVar4 < 1) {
        uVar2 = DVar4;
      }
      if (-1 < (int)uVar2) {
        uVar2 = 0x80004005;
      }
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0x2c,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else {
      if (param_1 != 0) {
        WaitForSingleObject(*(HANDLE *)(*(int *)((int)this + 0x214) + 0x28),4000);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0040b5a3 */

uint __fastcall FUN_0040b5a3(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x214);
  if (iVar1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x2d,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0;
  }
  return *(uint *)(iVar1 + 0x9a84) & *(uint *)(iVar1 + 0x48);
}



/* Function: FUN_0040b5ea */

uint __fastcall FUN_0040b5ea(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x214);
  if (iVar1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x2e,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0;
  }
  return *(uint *)(iVar1 + 0x9a84) & *(uint *)(iVar1 + 0x4c);
}



/* Function: FUN_0040b631 */

undefined4 __fastcall FUN_0040b631(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040b5a3(param_1);
  if (uVar1 == 0) {
    uVar1 = FUN_0040b5ea(param_1);
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



/* Function: FUN_0040b657 */

void __fastcall FUN_0040b657(int param_1)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  HANDLE local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(param_1 + 0x214);
  if (iVar1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040b93c;
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0x2f;
  }
  else {
    if (*(int *)(iVar1 + 0x1c) != 0) {
      local_14 = *(HANDLE *)(iVar1 + 0x20);
      local_10 = *(undefined4 *)(iVar1 + 0x1c);
      local_c = *(undefined4 *)(iVar1 + 0x28);
LAB_0040b6ea:
      do {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
          FUN_004074f5(0x31,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        do {
          while( true ) {
            DVar2 = FUN_0040d518(&local_14);
            if ((DVar2 == 0x102) || (DVar2 == 0xffffffff)) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
                FUN_00407519(0x32,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              }
              goto LAB_0040b93c;
            }
            if (DVar2 == 0) break;
            if (DVar2 == 1) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
                FUN_004074f5(0x39,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              }
              goto LAB_0040b93c;
            }
            if (DVar2 == 2) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
                uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar4 = 0x3a;
LAB_0040b891:
                FUN_004074f5(uVar4,&DAT_00402994,uVar5,uVar6);
              }
              goto LAB_0040b93c;
            }
            if ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) {
              if ((PTR_LOOP_0042d098[0x1c] & 4) != 0) {
                FUN_00407519(0x3b,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              }
              goto LAB_0040b6ea;
            }
          }
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
            FUN_004074f5(0x33,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          DVar2 = FUN_0040d485(L"Mutex while in notify loop",
                               *(HANDLE *)(*(int *)(param_1 + 0x214) + 0x24));
          if (DVar2 == 0x102) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
              uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar4 = 0x34;
              goto LAB_0040b891;
            }
            goto LAB_0040b93c;
          }
          if (DVar2 == 0x80) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
              FUN_004074f5(0x35,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            }
            ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x214) + 0x24));
            goto LAB_0040b93c;
          }
          FUN_0040b3ae(param_1);
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
            FUN_0040a573(0x36,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          if ((((*(int *)(*(int *)(param_1 + 0x214) + 0x9c94) != 0) &&
               (*(int *)(*(int *)(param_1 + 0x214) + 0x9c98) != 0)) &&
              ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
             ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
            FUN_0040a573(0x37,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          BVar3 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x214) + 0x24));
          if (BVar3 != 0) goto LAB_0040b6ea;
        } while ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098);
        if ((PTR_LOOP_0042d098[0x1c] & 1) != 0) {
          FUN_004074f5(0x38,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
      } while( true );
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040b93c;
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0x30;
  }
  FUN_004074f5(uVar4,&DAT_00402994,uVar5,uVar6);
LAB_0040b93c:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040b951 */

uint __thiscall FUN_0040b951(void *this,LPWSTR param_1)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  _STARTUPINFOW local_60;
  _PROCESS_INFORMATION local_18;
  
  if (*(int *)((int)this + 0x214) == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x3c,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar1 = 0x801b8003;
  }
  else {
    iVar2 = FUN_0040e9dd(*(HANDLE *)(*(int *)((int)this + 0x214) + 0x28));
    if (iVar2 == 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x3d,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      uVar1 = 0x80004005;
    }
    else {
      local_18.hProcess = (HANDLE)0x0;
      uVar1 = 0;
      local_18.hThread = (HANDLE)0x0;
      local_18.dwProcessId = 0;
      local_18.dwThreadId = 0;
      memset(&local_60,0,0x44);
      local_60.cb = 0x44;
      FUN_0040a65a((int *)&local_18);
      BVar3 = CreateProcessW((LPCWSTR)(*(int *)((int)this + 0x214) + 600),param_1,
                             (LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0,0x4000000,
                             (LPVOID)0x0,(LPCWSTR)0x0,&local_60,&local_18);
      if (BVar3 == 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          GetLastError();
          FUN_004097c1(0x3e,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),
                       (wchar_t *)(*(int *)((int)this + 0x214) + 600));
        }
        DVar4 = GetLastError();
        uVar1 = DVar4 & 0xffff | 0x80070000;
        if ((int)DVar4 < 1) {
          uVar1 = DVar4;
        }
        FUN_0040a65a((int *)&local_18);
      }
      else {
        FUN_0040a65a((int *)&local_18);
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
          FUN_0040975c(0x3f,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),
                       (wchar_t *)(*(int *)((int)this + 0x214) + 600));
        }
      }
    }
  }
  return uVar1;
}



/* Function: FUN_0040bac5 */

void __fastcall FUN_0040bac5(int param_1)

{
  uint uVar1;
  undefined4 uStackY_18;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x3a4) == 0) {
    if (*(int *)(param_1 + 0x214) != 0) {
      uVar1 = FUN_0040b5ea(param_1);
      if (uVar1 != 0) {
        *(undefined4 *)(param_1 + 0x21c) = 1;
        FUN_0040b2bc(param_1);
      }
      *(undefined4 *)(param_1 + 0x3a4) = 1;
      return;
    }
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return;
    }
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar2 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_18 = 0x41;
  }
  else {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 4) == 0) {
      return;
    }
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar2 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_18 = 0x40;
  }
  FUN_004074f5(uStackY_18,&DAT_00402994,uVar2,uVar3);
  return;
}



/* Function: FUN_0040bb4a */

void __fastcall FUN_0040bb4a(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uStackY_18;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return;
    }
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_18 = 0x42;
LAB_0040bb7c:
    FUN_004074f5(uStackY_18,&DAT_00402994,uVar3,uVar4);
    return;
  }
  if (*(int *)(param_1 + 0x3a0) != 0) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 4) == 0) {
      return;
    }
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_18 = 0x43;
    goto LAB_0040bb7c;
  }
  iVar1 = FUN_0040c2ec(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x21c) = 1;
    iVar1 = FUN_0040b631(param_1);
    if (iVar1 != 0) goto LAB_0040bc37;
  }
  iVar1 = FUN_0040b631(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x21c) = 1;
  }
  else {
    uVar2 = FUN_0040b5ea(param_1);
    if ((uVar2 == 0) || (uVar2 = FUN_0040b5a3(param_1), uVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x21c) = 1;
      FUN_0040b2bc(param_1);
      uVar2 = FUN_0040b5a3(param_1);
      if (uVar2 != 0) {
        FUN_0040b657(param_1);
      }
    }
  }
LAB_0040bc37:
  *(undefined4 *)(param_1 + 0x3a0) = 1;
  return;
}



/* Function: FUN_0040bc47 */

int * __fastcall FUN_0040bc47(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStackY_28;
  undefined4 uVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  
  FUN_0040d448(param_1);
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x44,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0040beef;
  }
  *(undefined4 *)*param_1 = 0x9c9c;
  *(undefined4 *)(*param_1 + 4) = 0x20000;
  *(undefined4 *)(*param_1 + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(*param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(*param_1 + 0x10) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(*param_1 + 0x14) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(*param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(*param_1 + 0x20) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(*param_1 + 0x24) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(*param_1 + 0x28) = *(undefined4 *)(param_2 + 0x24);
  iVar1 = *param_1;
  FUN_0040d5ad(*(uint *)(param_2 + 0x28),(uint *)(iVar1 + 0x2c),(uint *)(iVar1 + 0x30),
               (uint *)(iVar1 + 0x38));
  pwVar6 = (wchar_t *)(param_2 + 0x1418);
  *(undefined4 *)(*param_1 + 0x40) = *(undefined4 *)(param_2 + 0x1144);
  *(undefined4 *)(*param_1 + 0x44) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(*param_1 + 0x48) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(*param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(*param_1 + 0x8470) = 0;
  *(undefined4 *)(*param_1 + 0x9c94) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(*param_1 + 0x9c98) = *(undefined4 *)(param_2 + 0x44);
  iVar1 = *param_1;
  if ((*(byte *)(iVar1 + 0x2c) & 1) == 0) {
    iVar1 = FUN_0040a406((short *)(iVar1 + 0x11ac),0x400,(int)pwVar6);
    if (-1 < iVar1) goto LAB_0040bd8e;
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040beef;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_28 = 0x46;
  }
  else {
    FUN_0040a406((short *)(iVar1 + 0x9ac),0x400,(int)pwVar6);
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004097c1(0x45,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),pwVar6);
    }
LAB_0040bd8e:
    iVar1 = FUN_0040962a((char *)(*param_1 + 0x564),0x38,param_2 + 0x1c18);
    if (iVar1 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_0040a5f6((void *)0x47,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),(char *)(param_2 + 0x1c18));
      }
      goto LAB_0040beef;
    }
    puVar2 = (undefined4 *)(param_2 + 0x1210);
    puVar3 = (undefined4 *)(*param_1 + 0x7a4);
    for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    pwVar6 = (wchar_t *)(param_2 + 0xb8);
    iVar1 = FUN_0040a406((short *)(*param_1 + 600),0x104,(int)pwVar6);
    if (iVar1 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040beef;
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uStackY_28 = 0x48;
    }
    else {
      pwVar6 = (wchar_t *)(param_2 + 0x48);
      iVar1 = FUN_0040a406((short *)(*param_1 + 0x21ac),0x38,(int)pwVar6);
      if (iVar1 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040beef;
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uStackY_28 = 0x49;
      }
      else {
        pwVar6 = (wchar_t *)(param_2 + 0x2c0);
        iVar1 = FUN_0040a406((short *)(*param_1 + 0x3d1c),0x104,(int)pwVar6);
        if (-1 < iVar1) {
          FUN_0040a406((short *)(*param_1 + 0x32cc),0x38,param_2 + 0xd58);
          FUN_0040a406((short *)(*param_1 + 0x333c),0x38,param_2 + 0xdc8);
          return param_1;
        }
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040beef;
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uStackY_28 = 0x4a;
      }
    }
  }
  FUN_004097c1(uStackY_28,&DAT_00402994,uVar4,uVar5,pwVar6);
LAB_0040beef:
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    FUN_0042a48f(iVar1);
  }
  return param_1;
}



/* Function: FUN_0040bf42 */

void __fastcall FUN_0040bf42(int *param_1,int param_2)

{
  LANGID LVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  CHAR *pCVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  CHAR local_40 [55];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  FUN_0040d448(param_1);
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x4b,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    *(undefined4 *)*param_1 = 0x9c9c;
    *(undefined4 *)(*param_1 + 4) = 0x20000;
    *(undefined4 *)(*param_1 + 8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(*param_1 + 0x10) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(*param_1 + 0x14) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(*param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(*param_1 + 0x20) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(*param_1 + 0x24) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(*param_1 + 0x28) = *(undefined4 *)(param_2 + 0x24);
    iVar2 = *param_1;
    FUN_0040d5ad(*(uint *)(param_2 + 0x28),(uint *)(iVar2 + 0x2c),(uint *)(iVar2 + 0x30),
                 (uint *)(iVar2 + 0x38));
    LVar1 = GetUserDefaultUILanguage();
    pwVar7 = (wchar_t *)(param_2 + 0x9a0);
    *(uint *)(*param_1 + 0x40) = (uint)LVar1;
    *(undefined4 *)(*param_1 + 0x44) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(*param_1 + 0x48) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(*param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(*param_1 + 0x8470) = 0;
    *(undefined4 *)(*param_1 + 0x9c94) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(*param_1 + 0x9c98) = *(undefined4 *)(param_2 + 0x44);
    iVar2 = *param_1;
    if ((*(byte *)(iVar2 + 0x2c) & 1) == 0) {
      iVar2 = FUN_0040a406((short *)(iVar2 + 0x11ac),0x400,(int)pwVar7);
      if (-1 < iVar2) goto LAB_0040c098;
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040c23a;
      uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar10 = 0x4d;
LAB_0040c22f:
      FUN_004097c1(uVar10,&DAT_00402994,uVar11,uVar12,pwVar7);
    }
    else {
      FUN_0040a406((short *)(iVar2 + 0x9ac),0x400,(int)pwVar7);
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004097c1(0x4c,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),pwVar7);
      }
LAB_0040c098:
      iVar2 = FUN_0040962a((char *)(*param_1 + 0x564),0x38,param_2 + 0x11a0);
      if (iVar2 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_0040a5f6((void *)0x4e,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),(char *)(param_2 + 0x11a0));
        }
      }
      else {
        puVar6 = (undefined4 *)(param_2 + 0x798);
        puVar8 = (undefined4 *)(*param_1 + 0x7a4);
        for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        iVar2 = MultiByteToWideChar(0,0,(LPCSTR)(param_2 + 0xb8),-1,(LPWSTR)(*param_1 + 600),0x104);
        if (iVar2 == 0) {
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_0040a5a3((void *)0x4f,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),(LPCSTR)(param_2 + 0xb8));
          }
          DVar3 = GetLastError();
          uVar4 = DVar3 & 0xffff | 0x80070000;
          if ((int)DVar3 < 1) {
            uVar4 = DVar3;
          }
          if (-1 < (int)uVar4) goto LAB_0040c250;
        }
        else {
          iVar2 = *param_1;
          puVar6 = (undefined4 *)(param_2 + 0x48);
          pCVar9 = local_40;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pCVar9 = *puVar6;
            puVar6 = puVar6 + 1;
            pCVar9 = pCVar9 + 4;
          }
          local_9 = 0;
          iVar2 = MultiByteToWideChar(0,0,local_40,-1,(LPWSTR)(iVar2 + 0x21ac),0x38);
          if (iVar2 == 0) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              FUN_0040a5a3((void *)0x50,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),local_40);
            }
            goto LAB_0040c250;
          }
          pwVar7 = (wchar_t *)(param_2 + 0x1bc);
          iVar2 = FUN_0040a406((short *)(*param_1 + 0x3d1c),0x104,(int)pwVar7);
          if (-1 < iVar2) goto LAB_0040c250;
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar10 = 0x51;
            goto LAB_0040c22f;
          }
        }
      }
    }
  }
LAB_0040c23a:
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 != 0) {
    FUN_0042a48f(iVar2);
  }
LAB_0040c250:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040c267 */

undefined4 __fastcall FUN_0040c267(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x214);
  if (iVar1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x52,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x801b8003;
  }
  if ((((*(int *)(iVar1 + 0x24) != 0) && (*(int *)(iVar1 + 0x18) != 0)) &&
      (*(int *)(iVar1 + 0x20) != 0)) && (*(int *)(iVar1 + 0x28) != 0)) {
    return 0;
  }
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_004074f5(0x53,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  return 0x80004005;
}



/* Function: FUN_0040c2ec */

int __fastcall FUN_0040c2ec(int param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x214);
  if (iVar3 != 0) {
    DVar1 = WaitForSingleObject(*(HANDLE *)(iVar3 + 0x24),10000);
    if (DVar1 == 0) {
      DVar1 = WaitForSingleObject(*(HANDLE *)(*(int *)(param_1 + 0x214) + 0x18),1);
      if (DVar1 != 0) {
        BVar2 = SetEvent(*(HANDLE *)(*(int *)(param_1 + 0x214) + 0x20));
        if (((BVar2 == 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0x56,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x214) + 0x24));
        return 1;
      }
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
        FUN_004074f5(0x55,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
        FUN_00407519(0x54,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      FUN_0040b2bc(param_1);
      if (DVar1 != 0x80) {
        return 0;
      }
    }
    ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x214) + 0x24));
    iVar3 = 0;
  }
  return iVar3;
}



/* Function: FUN_0040c400 */

void __fastcall FUN_0040c400(void *param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  short *psVar3;
  int iVar4;
  undefined4 uStackY_58;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_34;
  int local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  iVar4 = *(int *)((int)param_1 + 0x214);
  local_30[0] = iVar4 + 0x8672;
  local_30[1] = iVar4 + 0x8870;
  local_30[2] = iVar4 + 0x8a6e;
  local_30[3] = iVar4 + 0x8c6c;
  local_20 = iVar4 + 0x8e6a;
  local_1c = iVar4 + 0x9068;
  local_18 = iVar4 + 0x9266;
  local_14 = iVar4 + 0x9464;
  local_10 = iVar4 + 0x9662;
  local_c = iVar4 + 0x9860;
  FUN_00409553(param_1,(short *)(iVar4 + 0x21ac));
  FUN_00409553((void *)((int)param_1 + 0x10),(short *)(*(int *)((int)param_1 + 0x214) + 0x3d1c));
  FUN_00409553((void *)((int)param_1 + 0x20),(short *)(*(int *)((int)param_1 + 0x214) + 0x9ac));
  FUN_00409553((void *)((int)param_1 + 0x30),(short *)(*(int *)((int)param_1 + 0x214) + 0x11ac));
  FUN_00409553((void *)((int)param_1 + 0x40),(short *)(*(int *)((int)param_1 + 0x214) + 0x19ac));
  iVar4 = 0x2494;
  if (*(short *)(*(int *)((int)param_1 + 0x214) + 0x2494) == 0) {
    iVar4 = 600;
  }
  FUN_00409553((void *)((int)param_1 + 0x130),(short *)(iVar4 + *(int *)((int)param_1 + 0x214)));
  FUN_00409553((void *)((int)param_1 + 0x140),(short *)(*(int *)((int)param_1 + 0x214) + 0x269c));
  FUN_00409553((void *)((int)param_1 + 0x150),(short *)(*(int *)((int)param_1 + 0x214) + 0x28a4));
  FUN_00409553((void *)((int)param_1 + 0x180),(short *)(*(int *)((int)param_1 + 0x214) + 0x333c));
  if (*(int *)(*(int *)((int)param_1 + 0x214) + 0x8470) == 0) {
    *(undefined4 *)((int)param_1 + 0x208) = 0;
    cVar1 = FUN_00409553((void *)((int)param_1 + 0x60),L"APPCRASH");
    if (cVar1 != '\0') goto LAB_0040c5e8;
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040c62c;
    pwVar2 = L"APPCRASH";
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_58 = 0x59;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x208) = 1;
    cVar1 = FUN_00409553((void *)((int)param_1 + 0x60),
                         (short *)(*(int *)((int)param_1 + 0x214) + 0x8474));
    if (cVar1 != '\0') {
      iVar4 = 0;
      local_34 = 0x70;
      do {
        psVar3 = (short *)local_30[iVar4];
        if ((psVar3 == (short *)0x0) || (*psVar3 == 0)) break;
        cVar1 = FUN_00409553((void *)(local_34 + (int)param_1),psVar3);
        if (cVar1 == '\0') {
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_0040a573(0x58,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          goto LAB_0040c62c;
        }
        iVar4 = iVar4 + 1;
        local_34 = local_34 + 0x10;
      } while (local_34 < 0x110);
LAB_0040c5e8:
      psVar3 = (short *)(*(int *)((int)param_1 + 0x214) + 0x50);
      if ((*psVar3 != 0) && (*(int *)((int)param_1 + 0x208) == 1)) {
        FUN_00409553((void *)((int)param_1 + 0x1f0),psVar3);
      }
      iVar4 = *(int *)((int)param_1 + 0x214);
      *(undefined4 *)((int)param_1 + 0x200) = *(undefined4 *)(iVar4 + 0x2c);
      *(undefined4 *)((int)param_1 + 0x204) = *(undefined4 *)(iVar4 + 0x30);
      *(undefined4 *)((int)param_1 + 0x22c) = *(undefined4 *)(iVar4 + 0x38);
      goto LAB_0040c62c;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040c62c;
    pwVar2 = (wchar_t *)(*(int *)((int)param_1 + 0x214) + 0x8474);
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_58 = 0x57;
  }
  FUN_004097c1(uStackY_58,&DAT_00402994,uVar5,uVar6,pwVar2);
LAB_0040c62c:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040c6b8 */

int __thiscall FUN_0040c6b8(void *this,uint *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (undefined4 *)0x0)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    *param_1 = 0;
    *param_2 = 1;
    iVar1 = FUN_0040dbf0(this,param_1,param_2);
    if (-1 < iVar1) {
      if ((*(byte *)((int)this + 0x22c) & 4) == 0) {
        iVar1 = *(int *)((int)this + 0x214);
        if (((*(byte *)(iVar1 + 0x44) & 4) == 0) || (*(int *)(iVar1 + 0x1c) == 0)) {
          if ((*(byte *)(iVar1 + 0x44) & 2) != 0) {
            *param_1 = *param_1 | 2;
          }
        }
        else {
          *param_1 = *param_1 | 3;
        }
      }
      if ((*(byte *)(*(int *)((int)this + 0x214) + 0x44) & 0x10) != 0) {
        *param_1 = *param_1 | 8;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* Function: FUN_0040c730 */

void __thiscall FUN_0040c730(void *this,HREPORT param_1)

{
  int iVar1;
  HANDLE hObject;
  uint uVar2;
  PWER_DUMP_CUSTOM_OPTIONS pDumpCustomOptions;
  PWER_EXCEPTION_INFORMATION pExceptionParam;
  HRESULT HVar3;
  int iVar4;
  DWORD *pDVar5;
  short *psVar6;
  _WER_DUMP_CUSTOM_OPTIONS *p_Var7;
  WCHAR *pWVar8;
  DWORD local_470 [138];
  _WER_EXCEPTION_INFORMATION local_248;
  HREPORT local_240;
  HANDLE local_23c;
  _WER_DUMP_CUSTOM_OPTIONS local_238;
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_240 = param_1;
  local_248.pExceptionPointers = *(PEXCEPTION_POINTERS *)(*(int *)((int)this + 0x214) + 0x14);
  local_248.bClientPointers = 1;
  local_23c = OpenThread(0x1fffff,0,*(DWORD *)(*(int *)((int)this + 0x214) + 0xc));
  if ((((int)local_23c + 1U < 2) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_00407519(0x5a,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  memset(local_470,0,0x228);
  hObject = local_23c;
  iVar1 = *(int *)((int)this + 0x214);
  pDVar5 = local_470;
  p_Var7 = &local_238;
  for (iVar4 = 0x8a; iVar4 != 0; iVar4 = iVar4 + -1) {
    p_Var7->dwSize = *pDVar5;
    pDVar5 = pDVar5 + 1;
    p_Var7 = (_WER_DUMP_CUSTOM_OPTIONS *)&p_Var7->dwMask;
  }
  uVar2 = 0;
  iVar4 = 0;
  if (*(int *)(iVar1 + 0x9a60) != 0) {
    local_238.dwSize = 0x228;
    iVar4 = 0x228;
    local_238.dwDumpFlags = *(DWORD *)(iVar1 + 0x9a64);
    local_238.dwExceptionThreadExFlags = *(DWORD *)(iVar1 + 0x9a74);
    local_238.dwExceptionThreadFlags = *(DWORD *)(iVar1 + 0x9a6c);
    local_238.bOnlyThisThread = *(BOOL *)(iVar1 + 0x9a68);
    local_238.dwOtherModuleFlags = *(DWORD *)(iVar1 + 0x9a80);
    local_238.dwOtherThreadExFlags = *(DWORD *)(iVar1 + 0x9a78);
    local_238.dwOtherThreadFlags = *(DWORD *)(iVar1 + 0x9a70);
    local_238.dwPreferredModuleFlags = *(DWORD *)(iVar1 + 0x9a7c);
    uVar2 = 0xfffffeff;
    local_238.dwMask = 0xfffffeff;
  }
  if (*(short *)(iVar1 + 0x7a4) != 0) {
    local_238.dwMask = uVar2 | 0x100;
    local_238.dwSize = 0x228;
    psVar6 = (short *)(iVar1 + 0x7a4);
    pWVar8 = local_238.wzPreferredModuleList;
    for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pWVar8 = *(undefined4 *)psVar6;
      psVar6 = psVar6 + 2;
      pWVar8 = pWVar8 + 2;
    }
    local_238.wzPreferredModuleList[0xfe] = L'\0';
    local_238.wzPreferredModuleList[0xff] = L'\0';
    iVar4 = 0x228;
  }
  pDumpCustomOptions = &local_238;
  if (iVar4 == 0) {
    pDumpCustomOptions = (PWER_DUMP_CUSTOM_OPTIONS)0x0;
  }
  pExceptionParam = &local_248;
  if (local_248.pExceptionPointers == (PEXCEPTION_POINTERS)0x0) {
    pExceptionParam = (PWER_EXCEPTION_INFORMATION)0x0;
  }
  HVar3 = WerReportAddDump(local_240,*(HANDLE *)(iVar1 + 0x28),local_23c,WerDumpTypeMiniDump,
                           pExceptionParam,pDumpCustomOptions,0);
  if (((HVar3 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_00407519(0x5b,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  if (1 < (int)hObject + 1U) {
    CloseHandle(hObject);
  }
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040c937 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0040c937(void *this,PWER_REPORT_INFORMATION param_1,undefined4 *param_2)

{
  char cVar1;
  HANDLE pvVar2;
  uint uVar3;
  PWER_REPORT_INFORMATION p_Var4;
  SubAllocator *pSVar5;
  HREPORT *phReportHandle;
  HRESULT HVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  void *pvVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_644 [21];
  uint local_5f0;
  undefined4 *local_5ec;
  undefined4 *local_5e8;
  int local_5e4;
  PWER_REPORT_INFORMATION local_5e0;
  HANDLE local_5dc;
  void *local_5d8;
  PWER_REPORT_INFORMATION local_5d4;
  int local_5d0;
  short *local_5cc;
  undefined4 local_5c8 [30];
  void *local_550;
  wchar_t *local_54c;
  undefined4 auStack_548 [30];
  undefined4 local_4d0;
  int local_4cc [20];
  wchar_t *local_47c;
  undefined4 auStack_478 [30];
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  int *local_3e4;
  undefined1 *local_3e0;
  undefined4 local_3dc;
  HANDLE local_3d8;
  undefined4 local_3c8;
  undefined1 local_3c4 [720];
  undefined4 local_f4 [32];
  undefined4 local_74 [7];
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_1c;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x634;
  local_5e0 = param_1;
  local_5ec = param_2;
  local_5dc = (HANDLE)0x0;
  local_8 = 0;
  local_5d8 = this;
  memset(local_4cc,0,0x50);
  memset(local_3c4,0,0x2cc);
  memset(&local_47c,0,0xb8);
  memset(&local_54c,0,0x80);
  memset(&local_5cc,0,0x80);
  local_5e4 = 0;
  _eh_vector_constructor_iterator_(local_f4,0x10,8,FUN_004095d0,FUN_004095b0);
  local_5d4 = (PWER_REPORT_INFORMATION)0x0;
  local_5d0 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00408b34(L"DWSHIM");
  iVar7 = local_5d0;
  local_5d0 = 0;
  if (iVar7 != 0) {
    WerpFreeString(iVar7);
  }
  WerpCreateIntegratorReportId(&local_5d0);
  pvVar2 = OpenThread(0x1fffff,0,*(DWORD *)(*(int *)((int)this + 0x214) + 0xc));
  local_5f0 = (int)pvVar2 + 1;
  local_5dc = pvVar2;
  if (((local_5f0 < 2) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
     ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
    GetLastError();
    FUN_00407519(0x5d,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  uVar3 = FUN_00426fed(*(HANDLE *)(*(int *)((int)this + 0x214) + 0x28),
                       *(LPCVOID *)(*(int *)((int)this + 0x214) + 0x14),local_4cc,local_3c4);
  if ((int)uVar3 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
      FUN_00407519(0x5e,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    memset(local_644,0,0x50);
    piVar9 = local_644;
    piVar11 = local_4cc;
    for (iVar7 = 0x14; pvVar2 = local_5dc, iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar11 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar11 = piVar11 + 1;
    }
  }
  if (local_4cc[3] == 0) {
    local_4cc[3] = *(int *)(*(int *)((int)this + 0x214) + 0x10);
  }
  iVar7 = FUN_004153f2((void *)((int)this + 0x230),*(HANDLE *)(*(int *)((int)this + 0x214) + 0x28),0
                       ,(int)pvVar2,local_4cc[0],local_4cc[3]);
  if (iVar7 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar16 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar15 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar14 = 0x5f;
LAB_0040cb57:
      FUN_00407519(uVar14,&DAT_00402994,uVar15,uVar16);
    }
  }
  else {
    FUN_00415e3d((int)this + 0x230);
    puVar8 = local_74;
    uVar3 = 0;
    puVar10 = local_f4;
    do {
      FUN_0040a6a0(puVar10,*(UINT *)((int)&DAT_0040296c + uVar3),
                   (HINSTANCE)&IMAGE_DOS_HEADER_00400000);
      pvVar13 = local_5d8;
      uVar16 = *puVar10;
      uVar3 = uVar3 + 4;
      puVar10 = puVar10 + 4;
      *puVar8 = uVar16;
      puVar8 = puVar8 + 3;
    } while (uVar3 < 0x20);
    uVar3 = 0;
    pvVar12 = (void *)0x8;
    local_5d8 = (void *)0x8;
    local_74[1] = *(undefined4 *)((int)pvVar13 + 0x248);
    local_74[4] = *(undefined4 *)((int)pvVar13 + 0x280);
    local_58 = *(undefined4 *)((int)pvVar13 + 0x290);
    local_4c = *(undefined4 *)((int)pvVar13 + 0x2b0);
    local_40 = *(undefined4 *)((int)pvVar13 + 0x2d0);
    local_34 = *(undefined4 *)((int)pvVar13 + 0x2e0);
    local_28 = *(undefined4 *)((int)pvVar13 + 0x30c);
    local_1c = *(undefined4 *)((int)pvVar13 + 0x2fc);
    do {
      uVar16 = *(undefined4 *)((int)local_74 + uVar3);
      uVar15 = *(undefined4 *)((int)local_74 + uVar3 + 4);
      *(undefined4 *)((int)auStack_478 + uVar3) = uVar16;
      *(undefined4 *)((int)auStack_478 + uVar3 + 4) = uVar15;
      *(undefined4 *)((int)auStack_548 + uVar3) = uVar16;
      *(undefined4 *)((int)auStack_548 + uVar3 + 4) = uVar15;
      uVar3 = uVar3 + 0xc;
    } while (uVar3 < 0x60);
    local_5e8 = (undefined4 *)((int)pvVar13 + 0x60);
    cVar1 = FUN_00409553(local_5e8,L"APPCRASH");
    if (cVar1 == '\0') {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040cb62;
      uVar16 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar15 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar14 = 0x60;
LAB_0040cccb:
      FUN_004074f5(uVar14,&DAT_00402994,uVar15,uVar16);
    }
    else {
      puVar8 = (undefined4 *)((int)pvVar13 + 0x3a8);
      iVar7 = FUN_0041773e(L"APPCRASH",puVar8);
      if (-1 < iVar7) {
        iVar7 = *(int *)((int)pvVar13 + 0x214);
        local_3f4 = *(undefined4 *)((int)pvVar13 + 0x238);
        local_3f0 = *(undefined4 *)((int)pvVar13 + 0x2a0);
        local_47c = L"APPCRASH";
        local_400 = 8;
        local_3fc = 1;
        local_3ec = *(undefined4 *)(iVar7 + 8);
        local_3e8 = *(undefined4 *)(iVar7 + 0xc);
        local_3e4 = local_4cc;
        local_3e0 = local_3c4;
        local_3dc = *(undefined4 *)(iVar7 + 0x28);
        local_3d8 = local_5dc;
        local_3c8 = *(undefined4 *)((int)pvVar13 + 0x398);
        iVar7 = FUN_00417cba((uint *)*puVar8,(int)&local_47c);
        if (iVar7 < 0) {
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_00407519(0x62,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          pSVar5 = (SubAllocator *)*puVar8;
          *puVar8 = 0;
          local_8 = CONCAT31(local_8._1_3_,5);
        }
        else {
          local_54c = L"APPCRASH";
          local_4d0 = 8;
          iVar7 = FUN_00417db1(*puVar8,(int)&local_54c,&local_5cc,&local_5e4);
          if (-1 < iVar7) goto LAB_0040ce30;
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_00407519(0x61,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          pSVar5 = (SubAllocator *)*puVar8;
          *puVar8 = 0;
          local_8 = CONCAT31(local_8._1_3_,4);
        }
        if (pSVar5 != (SubAllocator *)0x0) {
          FUN_00417ff0(pSVar5);
        }
      }
LAB_0040ce30:
      if (local_5e4 == 0) {
        puVar8 = local_74;
        puVar10 = local_5e8;
      }
      else {
        cVar1 = FUN_00409553((undefined4 *)((int)pvVar13 + 0x60),local_5cc);
        if (cVar1 == '\0') {
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040cb62;
          uVar16 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar15 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar14 = 99;
          goto LAB_0040cccb;
        }
        puVar8 = local_5c8;
        local_5d8 = local_550;
        puVar10 = (undefined4 *)((int)pvVar13 + 0x60);
        pvVar12 = local_550;
      }
      phReportHandle = (HREPORT *)FUN_0040a3e7(&local_5d4);
      HVar6 = WerReportCreate((PCWSTR)*puVar10,WerReportApplicationCrash,local_5e0,phReportHandle);
      if ((HVar6 < 0) || (local_5d4 == (PWER_REPORT_INFORMATION)0x0)) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(100,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        if (-1 < HVar6) {
LAB_0040cfae:
          p_Var4 = local_5d4;
          local_5d4 = (PWER_REPORT_INFORMATION)0x0;
          goto LAB_0040cb64;
        }
      }
      else {
        WerpSetIntegratorReportId(local_5d4,local_5d0);
        local_5e0 = local_5d4;
        if ((local_5d4 != (PWER_REPORT_INFORMATION)0x0) && (pvVar12 != (void *)0x0)) {
          pvVar13 = (void *)0x0;
          if (local_5d8 != (void *)0x0) {
            do {
              HVar6 = WerReportSetParameter
                                (local_5e0,(DWORD)pvVar13,(PCWSTR)*puVar8,(PCWSTR)puVar8[1]);
              if (HVar6 < 0) {
                if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                   ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                  FUN_00407519(0x5c,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                               *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
                }
                goto LAB_0040cf21;
              }
              pvVar13 = (void *)((int)pvVar13 + 1);
              puVar8 = puVar8 + 3;
            } while (pvVar13 < local_5d8);
          }
          HVar6 = 0;
LAB_0040cf21:
          if (-1 < HVar6) goto LAB_0040cfae;
        }
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar16 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar15 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar14 = 0x65;
          goto LAB_0040cb57;
        }
      }
    }
  }
LAB_0040cb62:
  p_Var4 = (PWER_REPORT_INFORMATION)0x0;
LAB_0040cb64:
  *local_5ec = p_Var4;
  if (local_5d0 != 0) {
    WerpFreeString(local_5d0);
  }
  if (local_5d4 != (PWER_REPORT_INFORMATION)0x0) {
    WerReportCloseHandle(local_5d4);
  }
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_(local_f4,0x10,8,FUN_004095b0);
  if (1 < local_5f0) {
    CloseHandle(local_5dc);
  }
  FUN_0042ae87();
  return;
}



/* Function: FUN_0040cfc6 */

undefined4 __thiscall FUN_0040cfc6(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x66,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar2 = 0x80070057;
  }
  else {
    LOCK();
    iVar1 = *(int *)((int)this + 0x3ac);
    if (iVar1 == 0) {
      *(int *)((int)this + 0x3ac) = 1;
      iVar1 = 0;
    }
    UNLOCK();
    if (iVar1 == 0) {
      uVar2 = WerpAddAppCompatData
                        (param_1,*(undefined4 *)((int)this + 0x238),
                         *(undefined4 *)((int)this + 0x2a0));
    }
  }
  return uVar2;
}



/* Function: FUN_0040d03c */

int __thiscall FUN_0040d03c(void *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  wchar_t *pwVar5;
  int iVar6;
  int local_c [2];
  
  iVar6 = 0;
  bVar2 = true;
  iVar1 = param_1[1];
  local_c[0] = 0;
  bVar3 = true;
  if (iVar1 == 0) {
LAB_0040d0a6:
    if (*(int *)((int)this + 0x208) == 0) {
      FUN_0040cfc6(this,*param_1);
      bVar2 = bVar3;
    }
  }
  else {
    if (iVar1 == 4) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
        FUN_004074f5(0x67,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      FUN_0040b312(this,4);
      FUN_0040bb4a((int)this);
      FUN_0040bac5((int)this);
    }
    else {
      if (iVar1 != 5) {
        if (iVar1 != 6) {
          if ((((iVar1 == 9) && (param_1[3] == 3)) &&
              (FUN_0040bac5((int)this), bVar2 = bVar3,
              *(int *)(*(int *)((int)this + 0x214) + 0x28) != 0)) &&
             (*(int *)((int)this + 0x208) == 0)) {
            FUN_0040b4b0(this,0);
          }
          goto LAB_0040d0b9;
        }
        if (param_1[3] != 0) goto LAB_0040d0b9;
        goto LAB_0040d0a6;
      }
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
        FUN_004074f5(0x68,&DAT_00402994,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      if ((*(byte *)(*(int *)((int)this + 0x214) + 0x9a84) & 4) == 0) {
        FUN_0040b312(this,2);
      }
      FUN_0040bb4a((int)this);
      FUN_0040bac5((int)this);
      FUN_0040b4b0(this,1);
      pwVar5 = L"Watson=1";
      if ((*(byte *)(*(int *)((int)this + 0x214) + 0x38) & 2) == 0) {
        pwVar5 = (LPWSTR)0x0;
      }
      FUN_0040b951(this,pwVar5);
    }
    bVar2 = false;
    iVar6 = 1;
    local_c[0] = 1;
  }
LAB_0040d0b9:
  if ((*(uint **)((int)this + 0x3a8) != (uint *)0x0) && (bVar2)) {
    piVar4 = local_c;
    if (iVar6 != 0) {
      piVar4 = (int *)0x0;
    }
    FUN_00417eec(*(uint **)((int)this + 0x3a8),*(int *)((int)this + 0x60),(int)param_1,piVar4);
    iVar6 = local_c[0];
  }
  return iVar6;
}



/* Function: FUN_0040d1c0 */

void FUN_0040d1c0(void *param_1,int *param_2)

{
  FUN_0040d03c(param_1,param_2);
  return;
}



/* Function: FUN_0040d1da */

undefined4 * __fastcall FUN_0040d1da(undefined4 *param_1)

{
  FUN_0040e144(param_1);
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 3;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  FUN_0041470d(param_1 + 0x8c);
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  return param_1;
}



/* Function: FUN_0040d257 */

void __fastcall FUN_0040d257(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0042b370;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((SubAllocator *)param_1[0xea] != (SubAllocator *)0x0) {
    FUN_00417ff0((SubAllocator *)param_1[0xea]);
  }
  FUN_004148ba((int)(param_1 + 0x8c));
  if (1 < param_1[0x8a] + 1U) {
    CloseHandle((HANDLE)param_1[0x8a]);
  }
  if (1 < param_1[0x89] + 1U) {
    CloseHandle((HANDLE)param_1[0x89]);
  }
  FUN_0040d317(param_1 + 0x84);
  if ((LPCVOID)param_1[0x83] != (LPCVOID)0x0) {
    UnmapViewOfFile((LPCVOID)param_1[0x83]);
  }
  FUN_00408754(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040d303 */

void __fastcall FUN_0040d303(int *param_1)

{
  if (*param_1 != 0) {
    WerpFreeString(*param_1);
  }
  return;
}



/* Function: FUN_0040d317 */

void __fastcall FUN_0040d317(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0042a48f(*param_1);
  }
  return;
}



/* Function: FUN_0040d331 */

uint __fastcall FUN_0040d331(int param_1,uint param_2,uint param_3,ushort *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  
  if ((param_5 <= param_2) && (param_3 <= param_2 - param_5)) {
    if (param_5 == 0) {
      return param_3;
    }
    puVar4 = (ushort *)(param_1 + param_3 * 2);
    uVar1 = (uint)*param_4;
    if (uVar1 - 0x61 < 0x1a) {
      uVar1 = uVar1 - 0x20;
    }
    while( true ) {
      iVar3 = 0;
      iVar5 = (int)((param_1 + ((param_2 - param_5) + 1) * 2) - (int)puVar4) >> 1;
      if (iVar5 == 0) break;
      while( true ) {
        uVar2 = (uint)*puVar4;
        if (uVar2 - 0x61 < 0x1a) {
          uVar2 = uVar2 - 0x20;
        }
        if (uVar1 == uVar2) break;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
        if (iVar3 == iVar5) {
          return 0xffffffff;
        }
      }
      if (puVar4 == (ushort *)0x0) {
        return 0xffffffff;
      }
      iVar3 = FUN_0040d3d9(puVar4 + 1,param_4 + 1,param_5 - 1);
      if (iVar3 == 0) {
        return (int)puVar4 - param_1 >> 1;
      }
      puVar4 = puVar4 + 1;
    }
  }
  return 0xffffffff;
}



/* Function: FUN_0040d3d9 */

int __fastcall FUN_0040d3d9(ushort *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != param_2) && (iVar3 = 0, param_3 != 0)) {
    iVar4 = (int)param_1 - (int)param_2;
    do {
      uVar2 = (uint)*(ushort *)(iVar4 + (int)param_2);
      uVar1 = (uint)*(ushort *)(iVar4 + (int)param_2);
      if (uVar2 - 0x61 < 0x1a) {
        uVar1 = uVar2 - 0x20;
      }
      uVar2 = (uint)*param_2;
      if (*param_2 - 0x61 < 0x1a) {
        uVar2 = *param_2 - 0x20;
      }
      if (uVar1 != uVar2) {
        return (-(uint)(uVar1 < uVar2) & 0xfffffffe) + 1;
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
    } while (iVar3 != param_3);
  }
  return 0;
}



/* Function: FUN_0040d448 */

undefined4 * __fastcall FUN_0040d448(undefined4 *param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_0042a4d8(0x9c9c);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,0x9c9c);
  }
  *param_1 = _Dst;
  return param_1;
}



/* Function: FUN_0040d485 */

DWORD __fastcall FUN_0040d485(undefined4 param_1,HANDLE param_2)

{
  uint extraout_EAX;
  DWORD DVar1;
  uint extraout_EAX_00;
  uint uVar2;
  undefined4 extraout_ECX;
  int *extraout_EDX;
  int extraout_EDX_00;
  DWORD local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_14 = param_1;
  GetTickCount64();
  local_10 = extraout_EDX;
  local_8 = extraout_EAX;
  DVar1 = WaitForSingleObjectEx(param_2,10000,0);
  GetTickCount64();
  if (4 < DAT_0042d038) {
    uVar2 = FUN_004069f2(&DAT_0042d038,0x10,0);
    if ((char)uVar2 != '\0') {
      local_c = extraout_EAX_00 - local_8;
      local_8 = (extraout_EDX_00 - (int)local_10) - (uint)(extraout_EAX_00 < local_8);
      local_18 = DVar1;
      local_10 = &local_c;
      FUN_00406b18(extraout_ECX,&DAT_00405ed9,extraout_ECX,extraout_ECX,&local_14,&local_10,
                   &local_18);
    }
  }
  return DVar1;
}



/* Function: FUN_0040d518 */

DWORD FUN_0040d518(HANDLE *param_1)

{
  wchar_t *extraout_EAX;
  DWORD DVar1;
  wchar_t *extraout_EAX_00;
  uint uVar2;
  undefined4 extraout_ECX;
  int *extraout_EDX;
  int extraout_EDX_00;
  int local_1c;
  int local_18;
  DWORD local_10;
  int *local_c;
  wchar_t *local_8;
  
  GetTickCount64();
  local_c = extraout_EDX;
  local_8 = extraout_EAX;
  DVar1 = WaitForMultipleObjectsEx(3,param_1,0,120000,0);
  GetTickCount64();
  if (4 < DAT_0042d038) {
    uVar2 = FUN_004069f2(&DAT_0042d038,0x10,0);
    if ((char)uVar2 != '\0') {
      local_1c = (int)extraout_EAX_00 - (int)local_8;
      local_18 = (extraout_EDX_00 - (int)local_c) - (uint)(extraout_EAX_00 < local_8);
      local_8 = L"Notification handles";
      local_10 = DVar1;
      local_c = &local_1c;
      FUN_00406b18(extraout_ECX,&DAT_00405f21,extraout_ECX,extraout_ECX,&local_8,&local_c,&local_10)
      ;
    }
  }
  return DVar1;
}



/* Function: FUN_0040d5ad */

undefined4 __fastcall FUN_0040d5ad(uint param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&LAB_004029a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar1 = 0x80070057;
  }
  else {
    if ((param_1 & 0x800) != 0) {
      *param_3 = *param_3 | 0x20;
    }
    if ((param_4 != (uint *)0x0) && ((param_1 & 0x1000) != 0)) {
      *param_4 = *param_4 | 2;
    }
    if ((param_1 & 0x40000) != 0) {
      *param_2 = *param_2 | 0x60;
    }
    if ((param_1 & 0x40) != 0) {
      *param_2 = *param_2 | 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040d625 */

undefined4 __fastcall FUN_0040d625(wchar_t *param_1,undefined4 *param_2,void *param_3,void *param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined4 uStackY_28;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((((param_1 == (wchar_t *)0x0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (void *)0x0))
     || (param_4 == (void *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xb,&LAB_004029a4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  *param_2 = 0;
  pwVar2 = wcschr(param_1,L'=');
  if (pwVar2 == (wchar_t *)0x0) {
    cVar1 = FUN_00409553(param_3,param_1);
    if (cVar1 != '\0') {
      return 0;
    }
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0x8007000e;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0x8007000e;
    }
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0xf;
  }
  else {
    cVar1 = FUN_004094c0(param_3,param_1,(int)pwVar2 - (int)param_1 >> 1);
    if (cVar1 != '\0') {
      pwVar2 = pwVar2 + 1;
      pwVar3 = wcschr(pwVar2,L'&');
      if (pwVar3 == (wchar_t *)0x0) {
        cVar1 = FUN_00409553(param_4,pwVar2);
        if (cVar1 != '\0') {
          return 0;
        }
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return 0x8007000e;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return 0x8007000e;
        }
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uStackY_28 = 0xe;
      }
      else {
        cVar1 = FUN_004094c0(param_4,pwVar2,(int)pwVar3 - (int)pwVar2 >> 1);
        if (cVar1 != '\0') {
          *param_2 = pwVar3 + 1;
          return 0;
        }
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return 0x8007000e;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return 0x8007000e;
        }
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uStackY_28 = 0xd;
      }
      FUN_004097c1(uStackY_28,&LAB_004029a4,uVar5,uVar6,pwVar2);
      return 0x8007000e;
    }
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0x8007000e;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0x8007000e;
    }
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0xc;
  }
  FUN_0040975c(uVar4,&LAB_004029a4,uVar5,uVar6,param_1);
  return 0x8007000e;
}



/* Function: FUN_0040d7c2 */

void FUN_0040d7c2(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

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
  EtwTraceMessage(param_1,param_2,0x2b,&DAT_00402a10,0x11,pwVar2,iVar3,&stack0x00000010,4,
                  &stack0x00000014,4,0);
  return;
}



/* Function: FUN_0040d82f */

void __fastcall FUN_0040d82f(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    o_free(*(undefined4 *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    o_free(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        o_free(*(undefined4 *)(*(int *)(param_1 + 0x10) + -4 + (uVar1 - uVar2) * 4));
        uVar1 = *(uint *)(param_1 + 0x14);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    o_free(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_0042a48f(param_1);
  return;
}



/* Function: FUN_0040d8a0 */

DWORD FUN_0040d8a0(DWORD *param_1)

{
  HMODULE hLibModule;
  HANDLE hEventLog;
  DWORD DVar1;
  BOOL BVar2;
  uint dwExitCode;
  
  hLibModule = (HMODULE)param_1[9];
  hEventLog = RegisterEventSourceW((LPCWSTR)0x0,(LPCWSTR)param_1[3]);
  if (hEventLog == (HANDLE)0x0) {
    DVar1 = GetLastError();
    dwExitCode = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      dwExitCode = DVar1;
    }
    if (-1 < (int)dwExitCode) {
      dwExitCode = 0x80004005;
    }
  }
  else {
    BVar2 = ReportEventW(hEventLog,(WORD)param_1[2],(WORD)param_1[1],*param_1,(PSID)param_1[8],
                         (WORD)param_1[5],param_1[7],(LPCWSTR *)param_1[4],(LPVOID)param_1[6]);
    if (BVar2 == 0) {
      DVar1 = GetLastError();
      dwExitCode = DVar1 & 0xffff | 0x80070000;
      if ((int)DVar1 < 1) {
        dwExitCode = DVar1;
      }
      if (-1 < (int)dwExitCode) {
        dwExitCode = 0x80004005;
      }
    }
    else {
      dwExitCode = 0;
    }
    DeregisterEventSource(hEventLog);
  }
  if ((param_1[10] != 0) && (FUN_0040d82f((int)param_1), hLibModule != (HMODULE)0x0)) {
                    /* WARNING: Subroutine does not return */
    FreeLibraryAndExitThread(hLibModule,dwExitCode);
  }
  return dwExitCode;
}



/* Function: FUN_0040d960 */

uint FUN_0040d960(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  short sVar1;
  short *_Src;
  longlong lVar2;
  size_t _Size;
  undefined4 *_Dst;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 *_Dst_00;
  void *_Dst_01;
  HANDLE hThread;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint local_10;
  HMODULE local_c;
  DWORD local_8;
  
  local_c = (HMODULE)0x0;
  local_8 = 0x80004005;
  if (param_2 == 0) {
    return 0x80070057;
  }
  _Dst = (undefined4 *)FUN_0042a4d8(0x2c);
  if (_Dst == (undefined4 *)0x0) {
    local_8 = 0x8007000e;
    goto LAB_0040dbd1;
  }
  memset(_Dst,0,0x2c);
  *_Dst = 0xc0001388;
  _Dst[1] = 0;
  _Dst[4] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  _Dst[2] = 4;
  _Dst[3] = param_2;
  _Dst[5] = param_4;
  BVar3 = GetModuleHandleExW(4,(LPCWSTR)FUN_0040d8a0,&local_c);
  if (BVar3 == 0) {
    DVar4 = GetLastError();
    local_8 = DVar4 & 0xffff | 0x80070000;
    if ((int)DVar4 < 1) {
      local_8 = DVar4;
    }
    if (-1 < (int)local_8) {
      local_8 = 0x80004005;
    }
  }
  else {
    _Dst[9] = local_c;
    if ((param_3 != 0) && (param_4 != 0)) {
      uVar5 = -(uint)((int)((ulonglong)param_4 * 4 >> 0x20) != 0) | (uint)((ulonglong)param_4 * 4);
      _Dst_00 = (undefined4 *)FUN_0042a8fe(uVar5);
      if (_Dst_00 == (undefined4 *)0x0) {
        local_8 = 0x8007000e;
        goto LAB_0040db44;
      }
      memset(_Dst_00,0,uVar5);
      local_10 = 0;
      _Dst[4] = _Dst_00;
      if (param_4 != 0) {
        iVar6 = param_3 - (int)_Dst_00;
        do {
          _Src = *(short **)(iVar6 + (int)_Dst_00);
          if (_Src != (short *)0x0) {
            psVar7 = _Src;
            do {
              sVar1 = *psVar7;
              psVar7 = psVar7 + 1;
            } while (sVar1 != 0);
            uVar5 = ((int)psVar7 - (int)(_Src + 1) >> 1) + 1;
            lVar2 = (ulonglong)uVar5 * 2;
            _Dst_01 = (void *)FUN_0042a8fe(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) |
                                           (uint)lVar2);
            if (_Dst_01 == (void *)0x0) {
              local_8 = 0x8007000e;
              goto LAB_0040db3c;
            }
            _Size = uVar5 * 2;
            memcpy(_Dst_01,_Src,_Size);
            *(undefined2 *)((_Size - 2) + (int)_Dst_01) = 0;
            *_Dst_00 = _Dst_01;
          }
          _Dst_00 = _Dst_00 + 1;
          local_10 = local_10 + 1;
        } while (local_10 < param_4);
      }
    }
    _Dst[10] = 1;
    hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0040d8a0,_Dst,0,(LPDWORD)0x0);
    if (1 < (int)hThread + 1U) {
      DVar4 = FUN_0040d485(L"LogEventWorkerThread",hThread);
      if (DVar4 == 0) {
        BVar3 = GetExitCodeThread(hThread,&local_8);
        if (BVar3 == 0) {
          local_8 = 0x80070507;
        }
      }
      else if (DVar4 == 0x102) {
        local_8 = 0x80070102;
      }
      else if (DVar4 == 0xffffffff) {
        DVar4 = GetLastError();
        local_8 = DVar4 & 0xffff | 0x80070000;
        if ((int)DVar4 < 1) {
          local_8 = DVar4;
        }
        if (-1 < (int)local_8) {
          local_8 = 0x80004005;
        }
      }
      CloseHandle(hThread);
      return local_8;
    }
    DVar4 = GetLastError();
    local_8 = DVar4 & 0xffff | 0x80070000;
    if ((int)DVar4 < 1) {
      local_8 = DVar4;
    }
    if (-1 < (int)local_8) {
      local_8 = 0x80004005;
    }
LAB_0040db3c:
    if (_Dst == (undefined4 *)0x0) goto LAB_0040dbd1;
  }
LAB_0040db44:
  FUN_0040d82f((int)_Dst);
LAB_0040dbd1:
  if (local_c != (HMODULE)0x0) {
    FreeLibrary(local_c);
  }
  return local_8;
}



/* Function: FUN_0040dbf0 */

undefined4 __thiscall FUN_0040dbf0(void *this,uint *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_1 != (uint *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = 0;
    *param_2 = 1;
    if ((*(byte *)((int)this + 0x204) & 3) != 0) {
      *param_1 = *param_1 | 0x80000000;
      if ((((byte)*(uint *)((int)this + 0x204) & 3) == 3) ||
         ((((*(uint *)((int)this + 0x204) & 1) != 0 && ((*(byte *)((int)this + 0x200) & 8) == 0)) &&
          (iVar1 = WerpIsTransportAvailable(0,0), iVar1 == 0)))) {
        *param_2 = 2;
      }
    }
    if ((*(byte *)((int)this + 0x200) & 0xc) != 0) {
      *param_1 = *param_1 | 0x804;
    }
    if ((*(byte *)((int)this + 0x200) & 0x10) != 0) {
      *param_1 = *param_1 & 0xfffffffb | 0x80;
    }
    if (*(int *)((int)this + 0x208) == 2) {
      *param_1 = *param_1 | 0x800;
    }
    return 0;
  }
  return 0x80070057;
}



/* Function: FUN_0040dc9d */

undefined4 __thiscall FUN_0040dc9d(void *this,HREPORT param_1)

{
  int *piVar1;
  WCHAR *pWVar2;
  uint uVar3;
  int *piVar4;
  WER_REPORT_UI repUITypeID;
  PCWSTR pwzValue;
  WCHAR *local_2c;
  WCHAR *local_28;
  WCHAR local_24 [4];
  int local_1c;
  WER_REPORT_UI local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  
  pWVar2 = local_24;
  piVar4 = (int *)((int)this + 0x110);
  local_24[0] = L'\0';
  local_18 = 0;
  local_2c = pWVar2;
  local_28 = pWVar2;
  local_10 = (int *)this;
  do {
    repUITypeID = local_18;
    pwzValue = (PCWSTR)*piVar4;
    if (pwzValue != (PCWSTR)piVar4[1]) {
                    /* WARNING: Load size is inaccurate */
      if (((local_18 == WerUIConsentDlgHeader) || (local_18 == WerUIConsentDlgBody)) &&
         (*this != *(int *)((int)this + 4))) {
        local_c = 0;
        *pWVar2 = L'\0';
        local_1c = *piVar4;
        uVar3 = piVar4[1] - local_1c >> 1;
        local_28 = pWVar2;
        local_14 = FUN_0040d331(local_1c,uVar3,0,(ushort *)PTR_u__General_AppName__00401388,0x11);
        piVar1 = local_10;
        if (local_14 != 0xffffffff) {
          do {
            FUN_0040a473(&local_2c,(void *)(*piVar4 + local_c * 2),local_14 - local_c);
            FUN_0040a473(&local_2c,(void *)*piVar1,piVar1[1] - *piVar1 >> 1);
            local_c = local_14 + 0x11;
            local_14 = FUN_0040d331(local_1c,uVar3,local_c,
                                    (ushort *)PTR_u__General_AppName__00401388,0x11);
          } while (local_14 != 0xffffffff);
          local_14 = 0xffffffff;
          repUITypeID = local_18;
        }
        FUN_0040a473(&local_2c,(void *)(*piVar4 + local_c * 2),(piVar4[1] - *piVar4 >> 1) - local_c)
        ;
        pwzValue = local_2c;
      }
      WerReportSetUIOption(param_1,repUITypeID,pwzValue);
      this = local_10;
      pWVar2 = local_2c;
    }
    local_18 = repUITypeID + WerUIAdditionalDataDlgHeader;
    piVar4 = piVar4 + 4;
  } while (local_18 < WerUICustomActionButtonText);
  if (pWVar2 != local_24) {
    FUN_0042a48f(pWVar2);
  }
  return 0;
}



/* Function: FUN_0040ddd4 */

int __thiscall FUN_0040ddd4(void *this,HREPORT param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(PCWSTR *)((int)this + 0x20) != *(PCWSTR *)((int)this + 0x24)) {
    uVar3 = *(uint *)((int)this + 0x200) >> 9 & 2;
    uVar1 = uVar3 | 1;
    if ((*(byte *)((int)this + 0x200) & 1) == 0) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_0040df94(param_1,*(PCWSTR *)((int)this + 0x20),WerFileTypeOther,uVar1);
    if (((iVar2 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(10,&DAT_00402a10,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  if (((*(PCWSTR *)((int)this + 0x30) != *(PCWSTR *)((int)this + 0x34)) &&
      (iVar2 = FUN_0040df94(param_1,*(PCWSTR *)((int)this + 0x30),WerFileTypeOther,
                            *(uint *)((int)this + 0x200) >> 9 & 2), iVar2 < 0)) &&
     (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098 && ((PTR_LOOP_0042d098[0x1c] & 1) != 0)
      ))) {
    FUN_00407519(0xb,&DAT_00402a10,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  if (((*(PCWSTR *)((int)this + 0x40) != *(PCWSTR *)((int)this + 0x44)) &&
      (iVar2 = FUN_0040df94(param_1,*(PCWSTR *)((int)this + 0x40),WerFileTypeUserDocument,0),
      iVar2 < 0)) &&
     (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098 && ((PTR_LOOP_0042d098[0x1c] & 1) != 0)
      ))) {
    FUN_00407519(0xc,&DAT_00402a10,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  if ((*(PCWSTR *)((int)this + 0x50) == *(PCWSTR *)((int)this + 0x54)) ||
     (iVar2 = FUN_0040df94(param_1,*(PCWSTR *)((int)this + 0x50),WerFileTypeHeapdump,
                           *(uint *)((int)this + 0x200) & 1), -1 < iVar2)) {
    iVar2 = 0;
  }
  else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
          ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_00407519(0xd,&DAT_00402a10,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  return iVar2;
}



/* Function: FUN_0040df20 */

HRESULT __thiscall FUN_0040df20(void *this,HREPORT param_1)

{
  HRESULT HVar1;
  int *piVar2;
  DWORD dwparamID;
  
  piVar2 = (int *)((int)this + 0x70);
  HVar1 = -0x7fffbffb;
  if (*piVar2 == *(int *)((int)this + 0x74)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xe,&DAT_00402a10,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    HVar1 = -0x7fe47ffd;
  }
  else {
    dwparamID = 0;
    do {
      if ((PCWSTR)*piVar2 != (PCWSTR)piVar2[1]) {
        HVar1 = WerReportSetParameter(param_1,dwparamID,(PCWSTR)0x0,(PCWSTR)*piVar2);
      }
      dwparamID = dwparamID + 1;
      piVar2 = piVar2 + 4;
    } while (dwparamID < 10);
  }
  return HVar1;
}



/* Function: FUN_0040df94 */

undefined4 FUN_0040df94(HREPORT param_1,PCWSTR param_2,WER_FILE_TYPE param_3,uint param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  int iVar3;
  HRESULT HVar4;
  uint dwFileFlags;
  undefined4 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  wchar_t *local_1c;
  wchar_t *local_18;
  wchar_t local_14 [4];
  wchar_t *local_c;
  wchar_t *local_8;
  
  local_1c = local_14;
  local_14[0] = L'\0';
  local_18 = local_1c;
  if ((param_2 == (PCWSTR)0x0) || (param_1 == (HREPORT)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xf,&DAT_00402a10,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar5 = 0x80070057;
  }
  else {
    local_8 = wcschr(param_2,L'|');
    uVar5 = 0;
    if (local_8 != (wchar_t *)0x0) {
      do {
        cVar1 = FUN_004094c0(&local_1c,param_2,(int)local_8 - (int)param_2 >> 1);
        if (cVar1 == '\0') {
          uVar5 = 0x8007000e;
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040e121;
          uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar7 = 0x10;
          goto LAB_0040e0c0;
        }
        if ((local_1c == (wchar_t *)0x0) ||
           (pwVar2 = wcsrchr(local_1c,L'.'), pwVar2 == (wchar_t *)0x0)) {
          bVar6 = false;
        }
        else {
          iVar3 = o__wcsicmp(pwVar2,L".cvr");
          bVar6 = iVar3 == 0;
        }
        dwFileFlags = param_4 | 2;
        if (!bVar6) {
          dwFileFlags = param_4;
        }
        HVar4 = WerReportAddFile(param_1,local_1c,param_3,dwFileFlags);
        if (((HVar4 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_0040d7c2(*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),local_1c);
        }
        param_2 = local_8 + 1;
        local_c = param_2;
        local_8 = wcschr(param_2,L'|');
      } while (local_8 != (wchar_t *)0x0);
      param_4 = dwFileFlags;
      if (param_2 == (wchar_t *)0x0) goto LAB_0040e121;
    }
    HVar4 = WerReportAddFile(param_1,param_2,param_3,param_4);
    if (((HVar4 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar7 = 0x12;
LAB_0040e0c0:
      FUN_0040975c(uVar7,&DAT_00402a10,uVar8,uVar9,param_2);
    }
  }
LAB_0040e121:
  if (local_1c != local_14) {
    FUN_0042a48f(local_1c);
  }
  return uVar5;
}



/* Function: FUN_0040e144 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_0040e144(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 2;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 6;
  param_1[4] = puVar1;
  param_1[5] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 10;
  param_1[8] = puVar1;
  param_1[9] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0xe;
  param_1[0xc] = puVar1;
  param_1[0xd] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x12;
  param_1[0x10] = puVar1;
  param_1[0x11] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x16;
  param_1[0x14] = puVar1;
  param_1[0x15] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x1a;
  param_1[0x18] = puVar1;
  param_1[0x19] = puVar1;
  *(undefined2 *)puVar1 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x1c,0x10,10,FUN_004095d0,FUN_004095b0);
  _eh_vector_constructor_iterator_(param_1 + 0x44,0x10,0xb,FUN_004095d0,FUN_004095b0);
  puVar1 = param_1 + 0x72;
  param_1[0x70] = puVar1;
  param_1[0x71] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x76;
  param_1[0x74] = puVar1;
  param_1[0x75] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x7a;
  param_1[0x78] = puVar1;
  param_1[0x79] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x7e;
  param_1[0x7c] = puVar1;
  param_1[0x7d] = puVar1;
  *(undefined2 *)puVar1 = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 3;
  return param_1;
}



/* Function: FUN_0040e25a */

void __fastcall FUN_0040e25a(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int local_34 [11];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  memset(local_34,0,0x2c);
  uVar2 = 1;
  if (*(int *)(param_1 + 0x1f0) != *(int *)(param_1 + 500)) {
    local_34[0] = *(int *)(param_1 + 0x60);
    piVar1 = (int *)(param_1 + 0x70);
    uVar3 = uVar2;
    do {
      if (*piVar1 == piVar1[1]) break;
      uVar3 = uVar3 + 1;
      local_34[uVar2] = *piVar1;
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (uVar2 < 0xb);
    FUN_0040d960(uVar2,*(int *)(param_1 + 0x1f0),(int)local_34,uVar3);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040e2e2 */

short * __fastcall FUN_0040e2e2(short *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  if (param_1 == (short *)0x0) {
    return (short *)0x0;
  }
  psVar3 = param_1;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  psVar3 = param_1 + ((int)psVar3 - (int)(param_1 + 1) >> 1);
  do {
    psVar2 = psVar3;
    if (psVar2 <= param_1) {
      return psVar2;
    }
    sVar1 = psVar2[-1];
    if (sVar1 == 0x5c) {
      return psVar2;
    }
    if (sVar1 == 0x2f) {
      return psVar2;
    }
    psVar3 = psVar2 + -1;
  } while (sVar1 != 0x3a);
  return psVar2;
}



/* Function: FUN_0040e328 */

undefined4 __fastcall
FUN_0040e328(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,undefined4 param_4,undefined1 *param_5)

{
  undefined4 uVar1;
  PHKEY phkResult;
  uint uVar2;
  uint uVar3;
  DWORD local_14;
  HKEY local_10;
  undefined4 local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = param_4;
  local_14 = 4;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  local_10 = param_1;
  phkResult = (PHKEY)FUN_00408c7e(&local_8);
  uVar2 = RegOpenKeyExW(local_10,param_2,0,0x101,phkResult);
  if ((uVar2 != 0) ||
     (uVar2 = RegGetValueW(local_8,(LPCWSTR)0x0,param_3,0x10,(LPDWORD)0x0,&local_c,&local_14),
     uVar2 != 0)) {
    uVar3 = uVar2 & 0xffff | 0x80070000;
    if ((int)uVar2 < 1) {
      uVar3 = uVar2;
    }
    if (((int)uVar3 < 0) && (local_c = param_4, param_5 != (undefined1 *)0x0)) {
      *param_5 = 1;
    }
  }
  uVar1 = local_c;
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return uVar1;
}



/* Function: FUN_0040e3ce */

uint __fastcall
FUN_0040e3ce(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,short *param_4,undefined4 *param_5,
            char param_6)

{
  char cVar1;
  PHKEY phkResult;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  wchar_t *local_28;
  wchar_t *local_24;
  wchar_t local_20 [4];
  HKEY local_18;
  LPCWSTR local_14;
  HKEY local_10;
  DWORD local_c [2];
  
  local_28 = local_20;
  local_10 = (HKEY)0x0;
  local_20[0] = L'\0';
  local_24 = local_28;
  local_18 = param_1;
  local_14 = param_2;
  if (param_5 == (undefined4 *)0x0) {
    uVar4 = 0x80070057;
    goto LAB_0040e51c;
  }
  if ((param_4 == (short *)0x0) || (cVar1 = FUN_00409553(&local_28,param_4), cVar1 != '\0')) {
    phkResult = (PHKEY)FUN_00408c7e(&local_10);
    uVar2 = RegOpenKeyExW(local_18,local_14,0,0x101,phkResult);
    if (uVar2 == 0) {
      local_18 = local_10;
      local_c[0] = 0;
      uVar2 = RegGetValueW(local_10,(LPCWSTR)0x0,param_3,2,(LPDWORD)0x0,(PVOID)0x0,local_c);
      if (uVar2 != 0) goto LAB_0040e441;
      local_24 = local_28;
      *local_28 = L'\0';
      uVar4 = FUN_00408db3(&local_28,(local_c[0] >> 1) + 1);
      if ((char)uVar4 == '\0') goto LAB_0040e418;
      uVar2 = RegGetValueW(local_18,(LPCWSTR)0x0,param_3,2,(LPDWORD)0x0,local_28,local_c);
      if (uVar2 != 0) goto LAB_0040e4a5;
      sVar3 = wcsnlen(local_28,local_c[0] >> 1);
      FUN_00408e2c(&local_28,sVar3);
LAB_0040e4d3:
      uVar4 = 0;
    }
    else {
LAB_0040e441:
      if (param_4 != (short *)0x0) goto LAB_0040e4d3;
LAB_0040e4a5:
      uVar4 = uVar2 & 0xffff | 0x80070000;
      if ((int)uVar2 < 1) {
        uVar4 = uVar2;
      }
      if (uVar4 != 0) goto LAB_0040e4f8;
    }
    if (param_6 == '\0') {
      FUN_0040ff24(param_5,&local_28);
    }
    else {
      uVar4 = FUN_00408e5c(local_28,param_5);
    }
    if (uVar4 != 0) goto LAB_0040e4f8;
  }
  else {
LAB_0040e418:
    uVar4 = 0x8007000e;
LAB_0040e4f8:
    param_5[1] = (undefined2 *)*param_5;
    *(undefined2 *)*param_5 = 0;
  }
  if (local_28 != local_20) {
    FUN_0042a48f(local_28);
  }
LAB_0040e51c:
  if (local_10 != (HKEY)0x0) {
    RegCloseKey(local_10);
  }
  return uVar4;
}



/* Function: FUN_0040e536 */

void __fastcall FUN_0040e536(void *param_1,undefined4 param_2)

{
  WCHAR WVar1;
  char cVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  uint uVar4;
  WCHAR *pWVar5;
  LPCSTR lpProcName;
  WCHAR local_88;
  undefined1 local_86 [126];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  if ((short)param_2 == 0) {
    uVar4 = GetSystemDirectoryW(&local_88,0x40);
  }
  else {
    lpProcName = "GetSystemWow64Directory2W";
    hModule = GetModuleHandleW(L"api-ms-win-core-wow64-l1-1-1.dll");
    pFVar3 = GetProcAddress(hModule,lpProcName);
    if (pFVar3 == (FARPROC)0x0) {
      uVar4 = GetSystemWow64DirectoryW(&local_88,0x40);
    }
    else {
      (*(code *)PTR_guard_check_icall_0042e4b0)(&local_88,0x40,param_2);
      uVar4 = (*pFVar3)();
    }
  }
  if ((uVar4 == 0) || (0x40 < uVar4)) {
    GetLastError();
  }
  else {
    pWVar5 = &local_88;
    do {
      WVar1 = *pWVar5;
      pWVar5 = pWVar5 + 1;
    } while (WVar1 != L'\0');
    uVar4 = (int)pWVar5 - (int)local_86 >> 1;
    FUN_0040fef0(param_1,uVar4 + 1);
    cVar2 = FUN_004094c0(param_1,&local_88,uVar4);
    if (cVar2 != '\0') {
      FUN_0040fe81(param_1,0x5c);
    }
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040e638 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_0040e638(undefined4 *param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  HMODULE pHVar3;
  WCHAR *local_2c;
  WCHAR *local_28;
  WCHAR local_24 [6];
  undefined4 *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_2c = local_24;
  local_24[0] = L'\0';
  local_8 = 0;
  local_28 = local_2c;
  local_18 = param_1;
  iVar2 = FUN_0040e536(&local_2c,0);
  if (-1 < iVar2) {
    cVar1 = FUN_0040a536(&local_2c,param_2);
    if (cVar1 != '\0') {
      pHVar3 = LoadLibraryExW(local_2c,(HANDLE)0x0,0);
      *param_1 = pHVar3;
      goto LAB_0040e68c;
    }
  }
  *param_1 = 0;
LAB_0040e68c:
  if (local_2c != local_24) {
    FUN_0042a48f(local_2c);
  }
  return param_1;
}



/* Function: FUN_0040e6b1 */

int __fastcall FUN_0040e6b1(int param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  undefined2 local_10;
  undefined2 local_e;
  wchar_t *local_c;
  undefined4 local_8;
  
  local_10 = 0x46;
  local_e = 0x48;
  local_28 = &local_10;
  local_c = L"\\KernelObjects\\SystemErrorPortReady";
  local_30 = 0x18;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar1 = NtOpenEvent(&local_8,0x100001,&local_30);
  if (-1 < iVar1) {
    if (param_1 != -1) {
      local_18 = (longlong)param_1 * -10000;
    }
    plVar2 = &local_18;
    if (param_1 == -1) {
      plVar2 = (longlong *)0x0;
    }
    iVar1 = NtWaitForSingleObject(local_8,0,plVar2);
    NtClose(local_8);
  }
  return iVar1;
}



/* Function: FUN_0040e745 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0040e745(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 local_94 [8];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  longlong local_74;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c [4];
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  local_c = 0x500;
  iVar3 = 0;
  local_5c[2] = 0;
  local_5c[3] = 0;
  local_64 = param_2;
  local_60 = param_1;
  iVar1 = ZwQueryWnfStateNameInformation(&DAT_0040298c,1,0,local_5c,4);
  if (((-1 < iVar1) && (local_5c[0] != 0)) &&
     (iVar1 = ZwUpdateWnfStateData(&DAT_0040298c,0,0,0,0,0,0), -1 < iVar1)) {
    iVar3 = 1;
  }
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  iVar2 = EtwEventWriteNoRegistration(&DAT_00402cc4,&local_20,0,0);
  iVar1 = iVar3 + 1;
  if (iVar2 != 0) {
    iVar1 = iVar3;
  }
  if (((iVar1 != 0) && (iVar3 = NtQuerySystemInformation(0x73,&local_6c,8,0), -1 < iVar3)) &&
     ((iVar3 = FUN_0040e6b1(local_6c), -1 < iVar3 &&
      ((iVar3 != 0x102 &&
       (iVar3 = RtlAllocateAndInitializeSid(&local_10,1,0x12,0,0,0,0,0,0,0,local_5c + 3), -1 < iVar3
       )))))) {
    if (local_68 != -1) {
      local_74 = (longlong)local_68 * -10000;
    }
    RtlInitUnicodeString(local_94,local_60);
    local_8c = 0x18;
    local_88 = 0;
    local_80 = 0;
    local_84 = 0;
    local_7c = 0;
    local_78 = 0;
    memset(local_4c,0,0x2c);
    plVar4 = &local_74;
    local_3c = 0x568;
    if (local_68 == -1) {
      plVar4 = (longlong *)0x0;
    }
    iVar3 = NtAlpcConnectPort(local_5c + 2,local_94,&local_8c,local_4c,0x20000,local_5c[3],0,0,0,0,
                              plVar4);
    if ((-1 < iVar3) && (iVar3 != 0x102)) {
      memset(param_3 + 1,0,0x564);
      *param_3 = 0x5680550;
      local_5c[1] = 0x568;
      NtAlpcSendWaitReceivePort(local_5c[2],0x20000,local_64,0,param_3,local_5c + 1,0,plVar4);
    }
  }
  if (local_5c[3] != 0) {
    RtlFreeSid(local_5c[3]);
  }
  if (local_5c[2] != 0) {
    NtClose(local_5c[2]);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040e97f */

void FUN_0040e97f(undefined4 param_1,undefined4 param_2)

{
  EtwTraceMessage(param_1,param_2,0x2b,&DAT_00402cb4,0x17,&stack0x0000000c,8,0);
  return;
}



/* Function: FUN_0040e9ae */

void FUN_0040e9ae(undefined4 param_1,undefined4 param_2)

{
  EtwTraceMessage(param_1,param_2,0x2b,&DAT_00402cb4,0x5e,&stack0x0000000c,4,0);
  return;
}



/* Function: FUN_0040e9dd */

undefined4 __fastcall FUN_0040e9dd(HANDLE param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  HRESULT HVar3;
  BOOL BVar4;
  HANDLE hProcess;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  _FILETIME *lpCreationTime;
  undefined4 uVar11;
  _FILETIME *lpExitTime;
  undefined4 uVar12;
  _FILETIME *lpKernelTime;
  _FILETIME *lpUserTime;
  _FILETIME local_48;
  _FILETIME local_40;
  _FILETIME local_38;
  _FILETIME local_30;
  _FILETIME local_28;
  _FILETIME local_20;
  uint local_18;
  DWORD local_14;
  uint local_10;
  DWORD local_c;
  char local_5;
  
  uVar7 = 0;
  local_5 = '\0';
  local_c = 0;
  local_28.dwLowDateTime = 0;
  local_28.dwHighDateTime = 0;
  local_30.dwLowDateTime = 0;
  local_30.dwHighDateTime = 0;
  local_20.dwLowDateTime = 0;
  local_20.dwHighDateTime = 0;
  local_14 = 0;
  HVar3 = GetApplicationRestartSettings(param_1,(PWSTR)0x0,&local_14,&local_c);
  if ((HVar3 < 0) || ((local_c & 0x80000000) == 0)) {
    BVar4 = GetProcessTimes(param_1,&local_28,&local_48,&local_40,&local_38);
    if (BVar4 == 0) {
      GetLastError();
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return 0;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) goto LAB_0040ebc0;
      uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar10 = 0x15;
    }
    else {
      lpUserTime = &local_38;
      lpKernelTime = &local_40;
      lpExitTime = &local_48;
      lpCreationTime = &local_30;
      hProcess = GetCurrentProcess();
      BVar4 = GetProcessTimes(hProcess,lpCreationTime,lpExitTime,lpKernelTime,lpUserTime);
      if (BVar4 != 0) {
        DVar2 = local_28.dwHighDateTime;
        DVar1 = local_30.dwLowDateTime;
        local_10 = local_28.dwLowDateTime;
        local_18 = local_30.dwHighDateTime;
        GetSystemTimeAsFileTime(&local_20);
        uVar5 = local_20.dwLowDateTime - local_10;
        uVar6 = (local_20.dwHighDateTime - DVar2) - (uint)(local_20.dwLowDateTime < local_10);
        if ((DVar2 <= local_18) && ((DVar2 < local_18 || (local_10 < DVar1)))) {
          bVar8 = CARRY4(uVar5,DVar1 - local_20.dwLowDateTime);
          uVar5 = uVar5 + (DVar1 - local_20.dwLowDateTime);
          uVar6 = uVar6 + ((local_18 - local_20.dwHighDateTime) -
                          (uint)(DVar1 < local_20.dwLowDateTime)) + (uint)bVar8;
        }
        uVar9 = __aulldiv(uVar5,uVar6,1000,0);
        uVar9 = __aulldiv((uint)uVar9,(uint)((ulonglong)uVar9 >> 0x20),10000,0);
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
          FUN_0040e97f(*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        uVar5 = FUN_0040e328(0x80000002,L"Software\\Microsoft\\Windows\\Windows Error Reporting",
                             L"RestartRunTime",0x3c,&local_5);
        if (local_5 != '\0') {
          uVar5 = FUN_0040e328(0x80000001,L"Software\\Microsoft\\Windows\\Windows Error Reporting",
                               L"RestartRunTime",0x3c,(undefined1 *)0x0);
        }
        if (((int)((ulonglong)uVar9 >> 0x20) == 0) && ((uint)uVar9 < uVar5)) goto LAB_0040ebc0;
        goto LAB_0040ebb8;
      }
      GetLastError();
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return 0;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) goto LAB_0040ebc0;
      uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar10 = 0x16;
    }
    FUN_00407519(uVar10,&DAT_00402cb4,uVar11,uVar12);
  }
  else {
LAB_0040ebb8:
    uVar7 = 1;
  }
LAB_0040ebc0:
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
    FUN_00407519(0x18,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  return uVar7;
}



/* Function: FUN_0040ebee */

undefined4 FUN_0040ebee(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char local_3c [56];
  
  FUN_00408bbb((undefined2 *)local_3c);
  uVar3 = 0;
  iVar1 = FUN_00408c1b(local_3c,0,L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Debug",
                       L"NoHardConsent");
  if (-1 < iVar1) {
    uVar2 = FUN_00409006(local_3c,(HKEY)0x80000002,0x100);
    if (-1 < (int)uVar2) {
      iVar1 = FUN_004091ee(local_3c);
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  FUN_00408bf7((int)local_3c);
  return uVar3;
}



/* Function: FUN_0040ec4f */

undefined4 FUN_0040ec4f(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char local_3c [56];
  
  FUN_00408bbb((undefined2 *)local_3c);
  uVar3 = 0;
  iVar1 = FUN_00408c1b(local_3c,0,L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Debug",
                       L"SuspendDWProcess");
  if (-1 < iVar1) {
    uVar2 = FUN_00409006(local_3c,(HKEY)0x80000002,0x100);
    if (-1 < (int)uVar2) {
      iVar1 = FUN_004091ee(local_3c);
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  FUN_00408bf7((int)local_3c);
  return uVar3;
}



/* Function: FUN_0040ecb0 */

void __fastcall FUN_0040ecb0(short *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  UINT UVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *local_a8;
  undefined2 *local_a4;
  undefined2 local_a0 [4];
  undefined4 *local_98;
  int *local_94;
  WCHAR local_90 [66];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_a8 = local_a0;
  *param_2 = 0;
  local_98 = param_3;
  local_a0[0] = 0;
  local_90[0] = L'\0';
  *param_3 = 3;
  local_a4 = local_a8;
  local_94 = param_2;
  UVar2 = GetSystemDirectoryW(local_90,0x40);
  if ((UVar2 == 0) || (0x40 < UVar2)) {
    GetLastError();
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x3a,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0040eeac;
  }
  psVar3 = FUN_0040e2e2(param_1);
  if ((psVar3 == (short *)0x0) || (psVar3 == param_1)) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040eeac;
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar6 = 0x3b;
  }
  else {
    cVar1 = FUN_004094c0(&local_a8,param_1,((int)psVar3 - (int)param_1 >> 1) - 1);
    if (cVar1 == '\0') {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0x3c,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_0040eeac;
    }
    iVar4 = o__wcsicmp(local_90,local_a8);
    if (iVar4 == 0) {
      uVar5 = 0;
      do {
        iVar4 = o__wcsicmp((&PTR_u_svchost_exe_0042d09c)[uVar5 * 2],psVar3);
        if (iVar4 == 0) {
          *local_94 = 1;
          *local_98 = (&DAT_0042d0a0)[uVar5 * 2];
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 2);
    }
    if (*local_94 != 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
        FUN_00407519(0x3d,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_0040eeac;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 4) == 0)) goto LAB_0040eeac;
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar6 = 0x3e;
  }
  FUN_004074f5(uVar6,&DAT_00402cb4,uVar7,uVar8);
LAB_0040eeac:
  if (local_a8 != local_a0) {
    FUN_0042a48f(local_a8);
  }
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040eee5 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0040eee5(HANDLE param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  wchar_t *pwVar6;
  undefined2 extraout_var;
  LPWSTR *hMem;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  void *local_26c [3];
  int local_260;
  LPCWSTR local_25c;
  WCHAR *local_258;
  WCHAR local_254 [4];
  undefined2 *local_24c;
  undefined2 *local_248;
  undefined2 local_244 [4];
  undefined2 *local_23c;
  undefined2 *local_238;
  undefined2 local_234 [4];
  wchar_t *local_22c;
  LPWSTR *local_228;
  undefined2 local_224 [2];
  WCHAR local_220 [268];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x25c;
  local_25c = local_254;
  hMem = (LPWSTR *)0x0;
  local_254[0] = L'\0';
  local_260 = 0;
  local_224[0] = 0;
  local_24c = local_244;
  local_244[0] = 0;
  local_23c = local_234;
  local_234[0] = 0;
  local_8 = 3;
  local_26c[2] = param_2;
  local_258 = local_25c;
  local_248 = local_24c;
  local_238 = local_23c;
  if ((param_1 == (HANDLE)0x0) || (param_2 == (void *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x3f,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      if (local_23c != local_234) {
        FUN_0042a48f(local_23c);
      }
      if (local_24c != local_244) {
        FUN_0042a48f(local_24c);
      }
    }
    if (local_25c != local_254) {
      FUN_0042a48f(local_25c);
    }
    goto LAB_0040f451;
  }
  local_220[0] = L'\0';
  iVar2 = FUN_004271ed(param_1,&local_25c);
  if (iVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar8 = 0x40;
      goto LAB_0040efb2;
    }
  }
  else {
    hMem = CommandLineToArgvW(local_25c,&local_260);
    local_228 = hMem;
    if (hMem == (LPWSTR *)0x0) {
      GetLastError();
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0x41;
        goto LAB_0040efb2;
      }
    }
    else if (local_260 < 2) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0x42;
LAB_0040f04c:
        FUN_004074f5(uVar8,&DAT_00402cb4,uVar9,uVar10);
      }
    }
    else {
      iVar2 = 1;
      if (1 < local_260) {
        do {
          if ((*hMem[iVar2] != L'/') && (*hMem[iVar2] != L'-')) break;
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_260);
      }
      if (iVar2 == local_260) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar8 = 0x43;
          goto LAB_0040f04c;
        }
      }
      else {
        pwVar6 = hMem[iVar2];
        pwVar3 = wcschr(pwVar6,L',');
        if (pwVar3 == (wchar_t *)0x0) {
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar8 = 0x44;
            goto LAB_0040f04c;
          }
        }
        else {
          *pwVar3 = L'\0';
          local_22c = wcsrchr(pwVar6,L'.');
          pwVar3 = wcschr(pwVar6,L'\\');
          if (pwVar3 == (wchar_t *)0x0) {
            puVar11 = local_224;
            pvVar4 = GetCurrentProcess();
            iVar2 = IsWow64Process2(pvVar4,puVar11,pwVar3);
            if (iVar2 == 0) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                FUN_00407519(0x45,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              }
              local_224[0] = 0;
            }
            iVar2 = FUN_004277ef(&local_24c);
            if (iVar2 < 0) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar8 = 0x46;
                goto LAB_0040efb2;
              }
            }
            else {
              iVar2 = FUN_0040e536(&local_23c,CONCAT22(extraout_var,local_224[0]));
              if (iVar2 < 0) {
                if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                   ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                  uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                  uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                  uVar8 = 0x47;
                  goto LAB_0040efb2;
                }
              }
              else {
                local_26c[0] = local_24c;
                local_26c[1] = local_23c;
                bVar7 = local_22c != (wchar_t *)0x0;
                local_228 = (LPWSTR *)0x0;
                local_22c = L".dll";
                if (bVar7) {
                  local_22c = (LPCWSTR)0x0;
                }
                do {
                  DVar5 = SearchPathW((LPCWSTR)local_26c[(int)local_228],pwVar6,local_22c,0x104,
                                      local_220,(LPWSTR *)0x0);
                  if (0x104 < DVar5) {
                    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f366;
                    uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                    uVar8 = 0x48;
                    goto LAB_0040f04c;
                  }
                  if (DVar5 != 0) goto LAB_0040f2de;
                  local_228 = (LPWSTR *)((int)local_228 + 1);
                } while (local_228 < (LPWSTR *)0x2);
                if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                   ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                  uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                  uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                  uVar8 = 0x49;
                  goto LAB_0040f04c;
                }
              }
            }
          }
          else {
            iVar2 = FUN_0040a406(local_220,0x104,(int)pwVar6);
            if (iVar2 < 0) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar8 = 0x4a;
                goto LAB_0040efb2;
              }
            }
            else {
LAB_0040f2de:
              pwVar6 = wcsrchr(local_220,L'.');
              if ((pwVar6 == (wchar_t *)0x0) &&
                 (iVar2 = FUN_004100de(local_220,0x402bec), iVar2 < 0)) {
                if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                   ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                  uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                  uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                  uVar8 = 0x4b;
LAB_0040efb2:
                  FUN_00407519(uVar8,&DAT_00402cb4,uVar9,uVar10);
                }
              }
              else {
                cVar1 = FUN_00409553(local_26c[2],local_220);
                if ((cVar1 == '\0') &&
                   (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098 &&
                    ((PTR_LOOP_0042d098[0x1c] & 1) != 0)))) {
                  uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                  uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                  uVar8 = 0x4c;
                  goto LAB_0040efb2;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0040f366:
  if (local_23c != local_234) {
    FUN_0042a48f(local_23c);
  }
  if (local_24c != local_244) {
    FUN_0042a48f(local_24c);
  }
  if (hMem != (LPWSTR *)0x0) {
    LocalFree(hMem);
  }
  if (local_25c != local_254) {
    FUN_0042a48f(local_25c);
  }
LAB_0040f451:
  FUN_0042ae87();
  return;
}



/* Function: FUN_0040f45d */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall
FUN_0040f45d(HANDLE param_1,int param_2,void *param_3,undefined4 *param_4,int *param_5,int *param_6,
            void *param_7,void *param_8)

{
  short sVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  PHKEY phkResult;
  LSTATUS LVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 *local_5c;
  undefined2 *local_58;
  undefined2 local_54 [4];
  short *local_4c;
  short *local_48;
  short local_44 [4];
  WCHAR *local_3c;
  WCHAR *local_38;
  WCHAR local_34 [4];
  short *local_2c;
  short *local_28;
  short local_24 [4];
  undefined4 local_1c;
  HANDLE local_18;
  HKEY local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_2c = local_24;
  local_24[0] = 0;
  local_3c = local_34;
  local_34[0] = L'\0';
  local_5c = local_54;
  local_54[0] = 0;
  local_4c = local_44;
  local_44[0] = 0;
  local_14[0] = (HKEY)0x0;
  local_8 = 4;
  local_58 = local_5c;
  local_48 = local_4c;
  local_38 = local_3c;
  local_28 = local_2c;
  local_18 = param_1;
  if ((((((param_1 == (HANDLE)0x0) || (param_2 == 0)) || (param_3 == (void *)0x0)) ||
       ((param_4 == (undefined4 *)0x0 || (param_5 == (int *)0x0)))) || (param_6 == (int *)0x0)) ||
     ((param_7 == (void *)0x0 || (param_8 == (void *)0x0)))) {
    uVar9 = 0x80070057;
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x4d,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0040f8da;
  }
  iVar3 = FUN_0040f949(param_1,param_3,param_4,param_5);
  if (((iVar3 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
     ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
    FUN_00407519(0x4e,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  if (*param_5 == param_5[1]) {
    uVar9 = FUN_0040faf3(param_2,&local_1c);
    if ((int)uVar9 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
      uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar10 = 0x50;
    }
    else {
      DVar4 = GetProcessId(local_18);
      uVar9 = FUN_0040fb96(DVar4,local_1c,&local_2c);
      if (-1 < (int)uVar9) goto LAB_0040f60d;
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
      uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar10 = 0x51;
    }
  }
  else {
    cVar2 = FUN_004094c0(&local_2c,(void *)*param_5,param_5[1] - *param_5 >> 1);
    if (cVar2 == '\0') {
      uVar9 = 0x8007000e;
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
      uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar10 = 0x4f;
    }
    else {
LAB_0040f60d:
      if (local_2c == local_28) {
LAB_0040f69c:
        uVar9 = FUN_0040fc36((int)local_2c,&local_5c);
        if (((int)uVar9 < 0) && (uVar9 != 0x80070032)) {
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
          uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar10 = 0x53;
        }
        else {
          cVar2 = FUN_00409553(&local_3c,L"SYSTEM\\CurrentControlSet\\Services\\");
          if (cVar2 == '\0') {
            uVar9 = 0x8007000e;
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
            uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar10 = 0x54;
          }
          else {
            cVar2 = FUN_0040a473(&local_3c,local_2c,(int)local_28 - (int)local_2c >> 1);
            if (cVar2 == '\0') {
              uVar9 = 0x8007000e;
              if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                 ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
              uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar10 = 0x55;
            }
            else {
              phkResult = (PHKEY)FUN_00408c7e(local_14);
              LVar5 = RegOpenKeyExW((HKEY)0x80000002,local_3c,0,1,phkResult);
              if (((LVar5 == 0) && (local_14[0] != (HKEY)0x0)) &&
                 (uVar9 = FUN_0040e3ce(local_14[0],L"Parameters",L"ServiceDll",(short *)0x0,
                                       &local_4c,'\x01'), -1 < (int)uVar9)) {
                psVar6 = FUN_0040e2e2(local_4c);
                cVar2 = FUN_00409553(param_7,psVar6);
                if (cVar2 == '\0') {
                  uVar9 = 0x8007000e;
                  if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                     ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
                  uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                  uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                  uVar10 = 0x56;
                  goto LAB_0040f583;
                }
              }
              if (local_5c == local_58) {
                if ((local_2c == local_28) ||
                   (cVar2 = FUN_004094c0(param_8,local_2c,(int)local_28 - (int)local_2c >> 1),
                   cVar2 != '\0')) goto LAB_0040f8ac;
                uVar9 = 0x8007000e;
                if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                   ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
                uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar10 = 0x58;
              }
              else {
                cVar2 = FUN_004094c0(param_8,local_5c,(int)local_58 - (int)local_5c >> 1);
                if (cVar2 != '\0') {
LAB_0040f8ac:
                  uVar9 = 0;
                  goto LAB_0040f8da;
                }
                uVar9 = 0x8007000e;
                if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                   ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
                uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar10 = 0x57;
              }
            }
          }
        }
      }
      else {
        cVar2 = FUN_0040fe81(param_6,0x5f);
        if (cVar2 != '\0') {
          uVar9 = (int)local_28 - (int)local_2c >> 1;
          if (uVar9 == 0) {
            uVar7 = 0xffffffff;
          }
          else {
            sVar1 = *local_2c;
            psVar6 = local_2c;
            for (uVar7 = uVar9;
                (psVar8 = psVar6, sVar1 != 0x5f && (psVar8 = (short *)0x0, uVar7 != 1));
                uVar7 = uVar7 - 1) {
              psVar6 = psVar6 + 1;
              sVar1 = *psVar6;
            }
            uVar7 = 0xffffffff;
            if (psVar8 != (short *)0x0) {
              uVar7 = (int)psVar8 - (int)local_2c >> 1;
            }
          }
          if (uVar9 < uVar7) {
            uVar7 = uVar9;
          }
          cVar2 = FUN_0040a473(param_6,local_2c,uVar7);
          if (cVar2 != '\0') {
            if (0x40 < (uint)(param_6[1] - *param_6 >> 1)) {
              FUN_00408e2c(param_6,0x40);
            }
            goto LAB_0040f69c;
          }
        }
        uVar9 = 0x8007000e;
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0040f8da;
        uVar12 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar10 = 0x52;
      }
    }
  }
LAB_0040f583:
  FUN_00407519(uVar10,&DAT_00402cb4,uVar11,uVar12);
LAB_0040f8da:
  if (local_14[0] != (HKEY)0x0) {
    RegCloseKey(local_14[0]);
  }
  if (local_4c != local_44) {
    FUN_0042a48f(local_4c);
  }
  if (local_5c != local_54) {
    FUN_0042a48f(local_5c);
  }
  if (local_3c != local_34) {
    FUN_0042a48f(local_3c);
  }
  if (local_2c != local_24) {
    FUN_0042a48f(local_2c);
  }
  return uVar9;
}



/* Function: FUN_0040f949 */

int __fastcall FUN_0040f949(HANDLE param_1,void *param_2,undefined4 *param_3,void *param_4)

{
  char cVar1;
  LPWSTR *ppWVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPWSTR *ppWVar6;
  undefined4 uStackY_3c;
  undefined4 uVar7;
  undefined4 uVar8;
  WCHAR *local_20;
  WCHAR *local_1c;
  WCHAR local_18 [4];
  int local_10;
  void *local_c;
  int local_8;
  
  local_20 = local_18;
  local_18[0] = L'\0';
  local_1c = local_20;
  local_c = param_2;
  if (param_1 == (HANDLE)0x0) {
    iVar5 = -0x7ff8ffa9;
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x59,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    iVar5 = FUN_004271ed(param_1,&local_20);
    if (iVar5 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uStackY_3c = 0x5c;
LAB_0040fac2:
        FUN_00407519(uStackY_3c,&DAT_00402cb4,uVar7,uVar8);
      }
    }
    else {
      ppWVar2 = CommandLineToArgvW(local_20,&local_8);
      if (1 < local_8) {
        iVar4 = 2;
        do {
          ppWVar6 = ppWVar2 + 1;
          local_10 = iVar4;
          iVar3 = o__wcsicmp(&DAT_00402c70,*ppWVar6);
          if (iVar3 == 0) {
            if (((iVar4 < local_8) && (*ppWVar2[2] != L'\0')) &&
               (cVar1 = FUN_00409553(local_c,ppWVar2[2]), cVar1 == '\0')) {
              iVar5 = -0x7ff8fff2;
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uStackY_3c = 0x5a;
                goto LAB_0040fac2;
              }
              break;
            }
          }
          else {
            iVar3 = o__wcsicmp(&DAT_00402c78,*ppWVar6);
            if ((((iVar3 == 0) && (*param_3 = 1, iVar4 < local_8)) && (*ppWVar2[2] != L'\0')) &&
               (cVar1 = FUN_00409553(param_4,ppWVar2[2]), cVar1 == '\0')) {
              iVar5 = -0x7ff8fff2;
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uStackY_3c = 0x5b;
                goto LAB_0040fac2;
              }
              break;
            }
          }
          iVar4 = iVar4 + 1;
          ppWVar2 = ppWVar6;
        } while (local_10 < local_8);
      }
    }
  }
  if (local_20 != local_18) {
    FUN_0042a48f(local_20);
  }
  return iVar5;
}



/* Function: FUN_0040faf3 */

uint __fastcall FUN_0040faf3(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x5d,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar1 = 0x80070057;
  }
  else {
    *param_2 = 0;
    local_14 = &local_8;
    local_10 = 0xf60;
    local_c = 4;
    uVar1 = ZwQueryInformationThread(param_1,0x1a,&local_14,0xc,0);
    if (uVar1 == 0) {
      uVar1 = 0;
      *param_2 = local_8;
    }
    else {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_0040e9ae(*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      uVar1 = uVar1 | 0x10000000;
    }
  }
  return uVar1;
}



/* Function: FUN_0040fb96 */

uint __fastcall FUN_0040fb96(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  short *hMem;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  short *local_c;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0x80070057;
  }
  else {
    param_3[1] = (undefined2 *)*param_3;
    *(undefined2 *)*param_3 = 0;
    uStack_10 = 0;
    local_c = (short *)0x0;
    uVar3 = 0;
    local_18 = param_1;
    local_14 = param_2;
    uVar2 = I_QueryTagInformation(0,1,&local_18);
    hMem = local_c;
    if (uVar2 == 0) {
      if (local_c != (short *)0x0) {
        if ((*local_c == 0) || (cVar1 = FUN_00409553(param_3,local_c), cVar1 != '\0')) {
          if (hMem == (short *)0x0) {
            return 0;
          }
        }
        else {
          uVar3 = 0x8007000e;
        }
        LocalFree(hMem);
      }
    }
    else {
      uVar3 = uVar2 & 0xffff | 0x80070000;
      if ((int)uVar2 < 1) {
        uVar3 = uVar2;
      }
    }
  }
  return uVar3;
}



/* Function: FUN_0040fc36 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040fc36(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  SC_HANDLE hSCObject;
  int iVar4;
  HMODULE hModule;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_2020;
  HMODULE local_201c;
  HMODULE local_2018;
  short local_2014 [4096];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0042b50c;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hModule = (HMODULE)0x0;
  local_201c = (HMODULE)0x0;
  local_8 = 0;
  local_14 = uVar2;
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x5f,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0040fe2c;
  }
  param_2[1] = (undefined2 *)*param_2;
  *(undefined2 *)*param_2 = 0;
  puVar3 = FUN_0040e638(&local_2018,L"advapi32.dll");
  hModule = (HMODULE)*puVar3;
  *puVar3 = 0;
  local_201c = hModule;
  if (local_2018 != (HMODULE)0x0) {
    FreeLibrary(local_2018);
  }
  if ((hModule == (HMODULE)0x0) ||
     (local_2018 = (HMODULE)GetProcAddress(hModule,"GetServiceDisplayNameW"),
     local_2018 == (HMODULE)0x0)) goto LAB_0040fe2c;
  hSCObject = OpenSCManagerW((LPCWSTR)0x0,(LPCWSTR)0x0,1);
  if (hSCObject == (SC_HANDLE)0x0) {
    GetLastError();
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x60,&DAT_00402cb4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0040fe2c;
  }
  local_2020 = 0x1000;
  local_2014[0] = 0;
  (*(code *)PTR_guard_check_icall_0042e4b0)(hSCObject,param_1,local_2014,&local_2020,uVar2);
  iVar4 = (*(code *)local_2018)();
  if (iVar4 == 0) {
    GetLastError();
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0x61;
LAB_0040fde9:
      FUN_00407519(uVar5,&DAT_00402cb4,uVar6,uVar7);
    }
  }
  else {
    cVar1 = FUN_00409553(param_2,local_2014);
    if (((cVar1 == '\0') && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0x62;
      goto LAB_0040fde9;
    }
  }
  CloseServiceHandle(hSCObject);
LAB_0040fe2c:
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  ExceptionList = local_10;
  FUN_00429fd0(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040fe59 */

void __fastcall FUN_0040fe59(int *param_1)

{
  if (*param_1 != 0) {
    LocalFree((HLOCAL)*param_1);
  }
  return;
}



/* Function: FUN_0040fe6d */

void __fastcall FUN_0040fe6d(int *param_1)

{
  if (*param_1 != 0) {
    FreeLibrary((HMODULE)*param_1);
  }
  return;
}



/* Function: FUN_0040fe81 */

undefined1 __thiscall FUN_0040fe81(void *this,undefined2 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_EDX;
  
  iVar3 = (int)this + 0xe;
                    /* WARNING: Load size is inaccurate */
  if (*this != (int *)((int)this + 8)) {
    iVar3 = *(int *)((int)this + 8);
  }
  if (*(int *)((int)this + 4) == iVar3) {
    uVar1 = FUN_004093f6((int *)this);
    if (0x3ffffffb < uVar1) {
      uVar1 = 0x3ffffffb;
    }
    if (uVar1 <= extraout_EDX) {
      return 0;
    }
    uVar2 = FUN_00408ce7(this,uVar1);
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  **(undefined2 **)((int)this + 4) = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
  **(undefined2 **)((int)this + 4) = 0;
  return 1;
}



/* Function: FUN_0040fef0 */

undefined4 __thiscall FUN_0040fef0(void *this,uint param_1)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
  if (*this == (int *)((int)this + 8)) {
    uVar1 = 3;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    uVar1 = *(int *)((int)this + 8) - *this >> 1;
  }
  if ((uVar1 < param_1) && (uVar1 = FUN_00408d79(this,param_1), (char)uVar1 == '\0')) {
    return uVar1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_0040ff24 */

void __thiscall FUN_0040ff24(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  
  uVar4 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  pvVar6 = (void *)param_1[1];
  puVar1 = param_1 + 2;
  uVar2 = *puVar1;
  puVar5 = (undefined4 *)*param_1;
  uVar3 = param_1[3];
  *(undefined2 *)puVar1 = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
                    /* WARNING: Load size is inaccurate */
  if (*this != (int)this + 8) {
                    /* WARNING: Load size is inaccurate */
    FUN_0042a48f(*this);
  }
  if (puVar5 == puVar1) {
    pvVar6 = (void *)((int)this + (((int)pvVar6 + (-8 - (int)param_1) >> 1) + 4) * 2);
    puVar5 = (undefined4 *)((int)this + 8);
  }
  *(undefined4 **)this = puVar5;
  *(void **)((int)this + 4) = pvVar6;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  FUN_00429fd0(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040ffb8 */

undefined4 * __fastcall FUN_0040ffb8(undefined4 *param_1)

{
  HANDLE hObject;
  
  hObject = (HANDLE)*param_1;
  *param_1 = 0;
  if (1 < (int)hObject + 1U) {
    CloseHandle(hObject);
  }
  return param_1;
}



/* Function: FUN_0040ffdb */

uint __cdecl FUN_0040ffdb(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  param_1[1] = *param_1;
  *(undefined2 *)*param_1 = 0;
  iVar3 = FUN_0042abbc(param_2,&stack0x0000000c);
  if (iVar3 < 0) {
    uVar5 = 0x80070057;
  }
  else if (iVar3 < 1) {
    uVar5 = 0;
  }
  else {
    iVar1 = param_1[1];
    iVar2 = *param_1;
    iVar4 = FUN_00410064(param_1,iVar3);
    iVar4 = FUN_0042ab3b(iVar4,iVar3 + 1,0xffffffff,param_2,&stack0x0000000c);
    iVar3 = 0;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_004100ae(param_1,iVar3 + (iVar1 - iVar2 >> 1));
    uVar5 = iVar4 >> 0x1f & 0x8000ffff;
  }
  return uVar5;
}



/* Function: FUN_00410064 */

int __fastcall FUN_00410064(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  uVar5 = param_1[1] - *param_1 >> 1;
  uVar1 = uVar5 + param_2;
  if (uVar5 < uVar1) {
    if ((int *)*param_1 == param_1 + 2) {
      uVar2 = 3;
    }
    else {
      uVar2 = param_1[2] - *param_1 >> 1;
    }
    if ((uVar2 < uVar1) && (uVar3 = FUN_0040fef0(param_1,uVar1), (char)uVar3 == '\0')) {
      return 0;
    }
    iVar4 = *param_1 + uVar5 * 2;
  }
  return iVar4;
}



/* Function: FUN_004100ae */

void __fastcall FUN_004100ae(int *param_1,uint param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *extraout_ECX;
  uint extraout_EDX;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == param_1 + 2) {
    uVar4 = 3;
  }
  else {
    uVar4 = param_1[2] - (int)piVar2 >> 1;
  }
  if (uVar4 < param_2) {
    pcVar3 = (code *)swi(0x2c);
    (*pcVar3)();
    param_1 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  puVar1 = (undefined2 *)((int)piVar2 + param_2 * 2);
  param_1[1] = (int)puVar1;
  *puVar1 = 0;
  return;
}



/* Function: FUN_004100de */

undefined4 __thiscall FUN_004100de(void *this,int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0x104;
  psVar2 = (short *)this;
  do {
    if (*psVar2 == 0) break;
    psVar2 = psVar2 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar6 = -(uint)(iVar7 != 0) & 0x104U - iVar7;
  uVar3 = 0x80070057;
  if (iVar7 != 0) {
    iVar7 = 0x104 - uVar6;
    psVar2 = (short *)((int)this + uVar6 * 2);
    if (iVar7 != 0) {
      iVar4 = 0x7ffffffe;
      iVar8 = param_1 - (int)psVar2;
      do {
        if ((iVar4 == 0) || (sVar1 = *(short *)(iVar8 + (int)psVar2), sVar1 == 0)) break;
        *psVar2 = sVar1;
        psVar2 = psVar2 + 1;
        iVar4 = iVar4 + -1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    psVar5 = psVar2 + -1;
    if (iVar7 != 0) {
      psVar5 = psVar2;
    }
    *psVar5 = 0;
    uVar3 = 0x8007007a;
    if (iVar7 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Function: FUN_00410167 */

LPVOID __fastcall FUN_00410167(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_0042b53c;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0042dcc0 == (FARPROC)0x0) {
    if (DAT_0042dcf0 != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0042dcc0 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0042dcf0 = '\x01';
    if (DAT_0042dcc0 == (FARPROC)0x0) {
      DAT_0042dcf0 = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_0042dcc0;
  (*(code *)PTR_guard_check_icall_0042e4b0)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00410217 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00410217(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0042dce0;
  _DAT_0042dce4 = param_1;
  LOCK();
  DAT_0042dce0 = DAT_0042dce0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00410230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00410230(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0042dcf8;
  _DAT_0042dccc = param_1;
  LOCK();
  DAT_0042dcf8 = DAT_0042dcf8 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00410249 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00410249(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0042dd08;
  _DAT_0042dcf4 = param_1;
  LOCK();
  DAT_0042dd08 = DAT_0042dd08 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00410262 */

void FUN_00410262(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0042dc78;
  if (DAT_0042dc78 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00410292 */

uint __fastcall FUN_00410292(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_0042dc88;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int)param_1 < 0) {
    if (param_1 == 0xc0000017) {
      uVar2 = 0x8007000e;
    }
    else {
      if (DAT_0042dc88 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0042e4b0)(param_1,DAT_0042d6c0 ^ (uint)&stack0xfffffffc);
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



/* Function: FUN_00410325 */

DWORD __fastcall
FUN_00410325(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0041389a(param_1,param_2,param_3,param_4,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_00410392 */

uint __fastcall
FUN_00410392(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0042b55f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0041389a(param_1,param_2,param_3,param_4,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_00410415 */

void __fastcall FUN_00410415(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00410392(0,0,0,0,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00410433 */

undefined1 FUN_00410433(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_0042dc80;
  if (DAT_0042dc7c != '\0') {
    return 1;
  }
  if (DAT_0042dc80 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00410463 */

undefined4 FUN_00410463(void)

{
  code *pcVar1;
  uint in_EAX;
  uint uVar2;
  BOOL BVar3;
  
  pcVar1 = DAT_0042dcb0;
  if (DAT_0042dcad == '\0') {
    if (DAT_0042dcb0 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      in_EAX = (uint)(BVar3 != 0);
    }
    else {
      (*(code *)PTR_guard_check_icall_0042e4b0)();
      uVar2 = (*pcVar1)();
      in_EAX = uVar2 & 0xff;
    }
    if (in_EAX == 0) {
      return 0;
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}



/* Function: FUN_004104a3 */

void __fastcall
FUN_004104a3(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
  puStack_c = &LAB_0042b582;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar3 = *param_8;
  param_15[2] = iVar3;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar3 = FUN_00410217(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_00410230(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_0041389a(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar4 = FUN_00407b51(0x8007029c);
      param_15[3] = uVar4;
    }
    iVar3 = FUN_00410249(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_004079d0(iVar3);
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
  iVar5 = DAT_0042dcfc + 1;
  DAT_0042dcfc = DAT_0042dcfc + 1;
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
  pcVar1 = DAT_0042dc8c;
  if (DAT_0042dc8c == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0042e4b0)(uVar2);
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_0042dc98;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc94;
  if (DAT_0042dc94 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc90;
  if (DAT_0042dc90 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc6c;
  if ((DAT_0042dc6c != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_004109e5();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar2 = FUN_00407b51(0x8000ffff);
    param_15[3] = uVar2;
  }
  uVar7 = FUN_00410463();
  pcVar1 = DAT_0042dcb4;
  if (((char)uVar7 == '\0') || ((*(byte *)(param_15 + 1) & 2) != 0)) {
    if ((DAT_0042dcb4 != (code *)0x0) && (DAT_0042dca4 == '\0')) {
      (*(code *)PTR_guard_check_icall_0042e4b0)(param_15,0,0);
      (*pcVar1)();
    }
  }
  else {
    if ((DAT_0042dcb4 != (code *)0x0) && (DAT_0042dca4 == '\0')) {
      (*(code *)PTR_guard_check_icall_0042e4b0)(param_15,param_11,0x800);
      (*pcVar1)();
    }
    if (*param_11 == L'\0') {
      FUN_0040763c(param_11,0x800,(int)param_15);
    }
    OutputDebugStringW(param_11);
  }
  pcVar1 = DAT_0042dc84;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_0042dcac != '\0')) &&
     (DAT_0042dc84 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00410731 */

void __fastcall FUN_00410731(int param_1)

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
  
  pcVar1 = DAT_0042dca8;
  if (DAT_0042dca8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc68;
  if (DAT_0042dc68 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_0041079e;
  uVar3 = 1;
  do {
    FUN_00410262(uVar3);
    iVar2 = extraout_ECX;
LAB_0041079e:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_004107be */

void __fastcall
FUN_004107be(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_00413912(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_004107dc */

void __fastcall
FUN_004107dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar2 = FUN_004078d4((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_004107be(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_00410821 */

void __fastcall FUN_00410821(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00410325(param_1,param_2,0x402da4,0,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_004078d4(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_004107be(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_00410883 */

void __fastcall FUN_00410883(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b5a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00413bc9(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004108d1 */

void __fastcall FUN_004108d1(int param_1,int param_2,int param_3)

{
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00413c0d(param_1,param_2,param_3,0,param_1,unaff_retaddr);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0041091e */

void __fastcall FUN_0041091e(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00410821(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041095a */

void __fastcall FUN_0041095a(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b5a5;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004107dc(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2);
  return;
}



/* Function: FUN_0041099f */

void __fastcall FUN_0041099f(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004107dc(param_1,0x137b,"onecore\\internal\\sdk\\inc\\wil/Staging.h",param_1,param_1,
               unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2,param_1);
  return;
}



/* Function: FUN_004109e5 */

void FUN_004109e5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004109f1 */

undefined4 FUN_004109f1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0042dcec == (code *)0x0) &&
     (DAT_0042dcec = (code *)FUN_004080e6("NtQueryWnfStateData"), DAT_0042dcec == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0042dcec;
  (*(code *)PTR_guard_check_icall_0042e4b0)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00410a45 */

undefined4 __fastcall
FUN_00410a45(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0042dd00 == (code *)0x0) &&
     (DAT_0042dd00 = (code *)FUN_004080e6("NtUpdateWnfStateData"), DAT_0042dd00 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0042dd00;
  (*(code *)PTR_guard_check_icall_0042e4b0)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00410a9e */

undefined4 __fastcall FUN_00410a9e(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_0042dcc4 == (code *)0x0) &&
     (DAT_0042dcc4 = (code *)FUN_004080e6("RtlNotifyFeatureUsage"), DAT_0042dcc4 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0042dcc4;
  (*(code *)PTR_guard_check_icall_0042e4b0)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_00410b00 */

void FUN_00410b00(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_0041091e(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00410b2d */

void FUN_00410b2d(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_0041091e(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00410b58 */

uint __fastcall FUN_00410b58(void *param_1,int *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  uVar1 = FUN_00410d7d(param_1,local_c);
  if ((int)uVar1 < 0) {
    FUN_00410883(unaff_retaddr,100,&DAT_00402cf4,uVar1);
    FUN_00410883(unaff_retaddr,0x6d,&DAT_00402cf4,uVar1);
  }
  else {
    *param_2 = local_c[0] << 2;
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00410bb5 */

void __thiscall FUN_00410bb5(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_004109e5();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_0040a406(local_214,0x104,param_1);
  FUN_004100de(local_214,0x402ddc);
  uVar3 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar3 != 0) {
    uVar2 = uVar3;
  }
  uVar2 = FUN_00413074(this,uVar3,uVar2,local_214);
  if ((int)uVar2 < 0) {
    FUN_00410883(unaff_retaddr,0x88,&DAT_00402cf4,uVar2);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00410c5a */

undefined4 __fastcall FUN_00410c5a(HANDLE param_1,int *param_2)

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
    goto LAB_00410c7d;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00410c7d:
        uVar2 = FUN_004108d1(unaff_retaddr,iVar4,0x402cf4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00410d4f:
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
        goto LAB_00410c7d;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00410c7d;
          }
          if (DVar1 == 0) goto LAB_00410d4f;
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
  FUN_00410883(unaff_retaddr,uVar2,&DAT_00402cf4,0x8000ffff);
  return 0x8000ffff;
}



/* Function: FUN_00410d7d */

void __thiscall FUN_00410d7d(void *this,int *param_1)

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
  
  local_c = DAT_0042d6c0 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0040a406(local_218,0x104,(int)this);
  FUN_004100de(local_218,0x402ddc);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_004108d1(unaff_retaddr,0xcd,0x402cf4);
    }
LAB_00410e29:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00410e43;
  }
  else {
    iStack_220 = 0;
    uVar3 = FUN_00410c5a(pvVar1,&iStack_220);
    if ((int)uVar3 < 0) {
      FUN_00410883(unaff_retaddr,0xd3,&DAT_00402cf4,uVar3);
      goto LAB_00410e29;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00410b00(pvVar1);
LAB_00410e43:
  FUN_00429fd0(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_00410e62 */

void __thiscall FUN_00410e62(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_00407d44(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_00407d26(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_00407d26(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00410167(8,(SIZE_T)pcVar4);
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
    FUN_00408992(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00408992(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_00408922(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00410f55 */

void __fastcall FUN_00410f55(int param_1)

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



/* Function: FUN_00410fc4 */

void __thiscall FUN_00410fc4(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00410167(8,0xdc);
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
    FUN_00410e62(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00411082 */

DWORD * __fastcall FUN_00411082(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_0042dcd4;
  if (DAT_0042dcd4 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0042dcd4[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_004130fb(*DAT_0042dcd4,&local_8);
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



/* Function: FUN_0041110b */

uint __fastcall FUN_0041110b(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_0041110b(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0042d70c + 1;
        DAT_0042d70c = DAT_0042d70c + 1;
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
        pcVar5 = (char *)FUN_00409690(pcVar7,(uint)pcVar9,(void *)piVar2[1],(uint)pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_004111ca */

void __fastcall FUN_004111ca(int param_1,char *param_2,int param_3)

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
  puStack_c = &LAB_0042b5c8;
  local_10 = ExceptionList;
  uVar3 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ppvVar5 = &local_10;
  ExceptionList = ppvVar5;
  *param_2 = '\0';
  iVar7 = DAT_0042dcd8;
  local_11 = 0;
  if (DAT_0042dcd8 != 0) {
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
      uVar6 = FUN_0041110b(param_1,*pDVar9,param_2,param_3);
      if ((char)uVar6 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar9;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_0042e4b0)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
      ppvVar5 = (void **)0x0;
    }
  }
  pcVar1 = DAT_0042dc9c;
  if (DAT_0042dc9c != (code *)0x0) {
    uVar8 = (uint3)((uint)ppvVar5 >> 8);
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    (*(code *)PTR_guard_check_icall_0042e4b0)(iVar7,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004112d0 */

void FUN_004112d0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_004111ca((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_0042dd04 != DVar2) {
    LOCK();
    iVar1 = DAT_0042dd0c + 1;
    UNLOCK();
    iVar3 = DAT_0042dd0c + 1;
    DAT_0042dd0c = iVar1;
    if (iVar3 < 4) {
      DAT_0042dd04 = DVar2;
      this = FUN_00411082(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00410fc4(this,param_1);
      }
      DAT_0042dd04 = 0;
    }
    LOCK();
    DAT_0042dd0c = DAT_0042dd0c + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00411335 */

void __fastcall FUN_00411335(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_00411381 */

undefined4 __thiscall FUN_00411381(void *this,uint param_1)

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
    pvVar2 = FUN_00410167(0,SVar3);
    if (pvVar2 == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    uVar1 = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    FUN_00409690(pvVar2,SVar3,*this,uVar1);
    FUN_00412fae((void *)((int)this + 0xc),(int)pvVar2);
    *(LPVOID *)this = pvVar2;
    *(uint *)((int)this + 4) = uVar1 + (int)pvVar2;
    *(SIZE_T *)((int)this + 8) = (int)pvVar2 + SVar3;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_0041140c */

undefined4 __thiscall FUN_0041140c(void *this,uint param_1)

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
    uVar2 = FUN_00411381(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00411442 */

undefined4 __thiscall FUN_00411442(void *this,void *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0041140c(this,param_2);
  if ((char)uVar2 != '\0') {
    pvVar1 = *(void **)((int)this + 4);
    uVar2 = FUN_00409690(pvVar1,-(uint)(pvVar1 < *(void **)((int)this + 8)) &
                                *(int *)((int)this + 8) - (int)pvVar1,param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00411483 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00411483(int *param_1)

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
  
  local_c = DAT_0042d6c0 ^ (uint)&local_102c;
  iVar5 = 0;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar7 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_004109f1(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_00411592;
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
LAB_00411592:
            piVar4 = piVar4 + 3;
            iVar7 = local_1024;
          } while (piVar4 != local_101c);
        }
        iVar5 = FUN_00410a45(&DAT_00402eb4,local_1010,uVar6,piVar2,piVar2,local_1018,1);
        param_1 = local_1028;
      }
      local_1024 = iVar7 + 1;
    } while (((iVar5 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_00429fd0(local_c ^ (uint)&local_102c);
  return;
}



/* Function: FUN_00411608 */

void FUN_00411608(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_0042dcd0 == (code *)0x0) &&
     (DAT_0042dcd0 = (code *)FUN_004080e6("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_0042dcd0 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_0042dcd0;
  (*(code *)PTR_guard_check_icall_0042e4b0)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00411646 */

int __thiscall FUN_00411646(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_00411673 */

void __thiscall FUN_00411673(void *this,int param_1)

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
    FUN_00409690(*(void **)((int)this + 0xc),uVar2,piVar1,uVar2);
  }
  return;
}



/* Function: FUN_004116b9 */

uint __fastcall FUN_004116b9(ushort *param_1)

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



/* Function: FUN_004116e4 */

uint __thiscall FUN_004116e4(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_8;
  
  pvVar3 = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_0041177b;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    FUN_00409690(pvVar3,2,&local_8,2);
    pvVar3 = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)pvVar3 + 4);
      if (param_2 < pvVar1) goto LAB_0041177b;
      FUN_00409690(pvVar3,4,(void *)((int)this + 4),4);
      pvVar3 = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_0041177b;
    FUN_00409690(pvVar3,(int)param_2 - (int)pvVar3,(void *)((int)this + 8),2);
    pvVar3 = pvVar1;
  }
  pvVar1 = (void *)((uint)*(ushort *)((int)this + 8) + (int)pvVar3);
  if (pvVar1 <= param_2) {
    FUN_00409690(pvVar3,(int)param_2 - (int)pvVar3,*(void **)((int)this + 0x10),
                 (uint)*(ushort *)((int)this + 8));
    iVar2 = (uint)*(ushort *)((int)this + 8) + (int)pvVar3;
    *param_1 = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
LAB_0041177b:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_004117aa */

uint __thiscall FUN_004117aa(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_00411838;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    FUN_00409690(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_00411838;
      *(ushort **)((int)this + 0xc) = puVar2;
      local_8 = (ushort *)this;
      FUN_00409690((void *)((int)this + 4),4,puVar2,4);
      local_8 = puVar2 + 2;
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar2 = (ushort *)((int)this + 8);
  *puVar2 = *this;
  if (*this == 0) {
    puVar4 = local_8 + 1;
    if (param_2 < puVar4) goto LAB_00411838;
    puVar3 = local_8;
    local_8 = puVar4;
    FUN_00409690(puVar2,2,puVar3,2);
  }
  puVar4 = (ushort *)((uint)*puVar2 + (int)local_8);
  if (puVar4 <= param_2) {
    *(ushort **)((int)this + 0x10) = local_8;
    *param_1 = (uint)puVar4;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
LAB_00411838:
  return (uint)puVar4 & 0xffffff00;
}



/* Function: FUN_00411852 */

undefined2 * __thiscall
FUN_00411852(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_004116b9(&local_18);
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



/* Function: FUN_004118d0 */

void __thiscall FUN_004118d0(void *this,int param_1)

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
  FUN_00412fae(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_00412fae((void *)(param_1 + 0x1c),local_8);
  FUN_00412fd8(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_00411959 */

void __thiscall FUN_00411959(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_0041099f(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_004119fc;
  }
  if (9 < param_2) {
    return;
  }
LAB_004119fc:
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



/* Function: FUN_00411a44 */

void FUN_00411a44(void)

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
      uVar5 = FUN_004117aa((void *)(unaff_EBP + -0x44),(uint *)(unaff_EBP + -0x14),
                           *(ushort **)(extraout_ECX + 0x14));
      if ((char)uVar5 == '\0') {
        FUN_00413c66(*(int *)(unaff_EBX + 8));
LAB_00411b43:
        __EH_epilog3_align();
        return;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    } while (*(int *)(unaff_EBP + -0x40) == 0);
    do {
      uVar5 = FUN_004117aa((void *)(unaff_EBP + -0x58),(uint *)(unaff_EBP + -0x14),
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
        FUN_004109e5();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = *(code **)(*piVar2 + 0x10);
      (*(code *)PTR_guard_check_icall_0042e4b0)
                (unaff_EBP + -0x2c,unaff_EBP + -0x28,unaff_EBP + -0x24,unaff_EBP + -0x20,
                 unaff_EBP + -0x1c);
      cVar4 = (*pcVar3)();
      if (cVar4 == '\0') {
        FUN_00413c66(*(int *)(unaff_EBX + 8));
        goto LAB_00411b43;
      }
      uVar5 = *(int *)(unaff_EBP + -0x18) + 1;
      *(uint *)(unaff_EBP + -0x18) = uVar5;
    } while (uVar5 < *(uint *)(unaff_EBP + -0x40));
  } while( true );
}



/* Function: FUN_00411b63 */

undefined4 __thiscall
FUN_00411b63(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_00411e6f(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_0041140c(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_00411959(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_00412fae((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_00412fd8(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_0041140c((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_00411e6f(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00411c1b */

uint __thiscall FUN_00411c1b(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_004117aa(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_00411646(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_00411ca6 */

uint __thiscall
FUN_00411ca6(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_004117aa(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_00411673(param_1,local_c);
          uVar1 = local_14;
          goto LAB_00411d9c;
        }
        local_14 = FUN_00411646(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_00411d9c;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00411673(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_00411c1b(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_004117aa(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_00411646(&local_28,param_3,param_4);
LAB_00411d9c:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_00411673(&local_28,local_24 + param_5);
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



/* Function: FUN_00411ddc */

uint __thiscall FUN_00411ddc(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_004117aa(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_00411673(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00411673(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_00411e6f */

uint __thiscall
FUN_00411e6f(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar2 = FUN_004117aa(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar2 == '\0') break;
      iVar1 = FUN_00411646(&local_24,param_1,param_2);
      if (iVar1 < 0) {
LAB_00411fba:
        local_c = pvVar4;
        if ((char)uVar2 != '\0') goto LAB_00411ef8;
        break;
      }
      if (iVar1 == 0) {
        pvVar4 = (void *)FUN_00411ca6(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          local_5 = '\x01';
          goto LAB_00411fba;
        }
        goto LAB_00411faa;
      }
      pvVar4 = (void *)FUN_00411ddc(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_00411ef8:
    pvVar4 = local_c;
    uVar2 = 0;
    if (local_5 == '\0') {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      uVar2 = FUN_004116b9(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    local_10 = FUN_004116b9(&local_38);
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
            goto LAB_00411fe8;
          }
          puVar3 = (undefined4 *)o__errno();
          *puVar3 = 0x22;
        }
        o__invalid_parameter_noinfo();
      }
LAB_00411fe8:
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + local_10);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_004116e4(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_00411673(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_004116e4(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_00411faa:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_00412040 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00412040(uint param_1,int param_2,undefined2 *param_3)

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
  puStack_18 = &LAB_0042b651;
  local_1c = ExceptionList;
  local_24 = DAT_0042d6c0 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_104c = param_1 + param_2 * 8;
  local_1038 = 0;
  local_1044 = 0;
  local_1048 = param_3;
  local_1034 = param_1;
  while( true ) {
    FUN_00411852(local_107c,*local_1048,local_1048[1],*(undefined1 *)(local_1048 + 2),local_1048[3],
                 *(undefined1 *)(local_1048 + 4));
    local_14 = 0;
    local_1030 = 0x1000;
    uVar2 = FUN_004109f1(extraout_ECX,&local_103c,local_1028,&local_1030);
    FUN_00410292(uVar2);
    if (uVar2 != 0) {
      local_103c = 0;
      local_1030 = 0;
    }
    FUN_00411959(local_107c,local_1028,local_1030,0x1000);
    if (local_105b != '\0') break;
    local_10bc = &local_1040;
    local_1040 = 0;
    puStack_10b8 = &local_1044;
    local_10c0 = &PTR_FUN_00401100;
    puStack_10b4 = local_107c;
    local_1088 = &local_10c0;
    local_1058 = local_10bc;
    local_1054 = puStack_10b8;
    local_1050 = puStack_10b4;
    local_1029 = FUN_00411a44();
    uVar2 = local_1034;
    if (local_105c == '\0') {
LAB_00412218:
      uVar2 = uVar2 + 8;
      local_1044 = local_1040;
      local_1034 = uVar2;
    }
    else {
      iVar3 = local_1068 - local_106c;
      iVar3 = FUN_00410a45(local_1034,local_106c,iVar3,iVar3,iVar3,local_103c,1);
      if (iVar3 != -0x3fffffff) {
        if (iVar3 != 0) {
          FUN_00410a45(uVar2,local_106c,local_1068 - local_106c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_00412218;
      }
      local_1038 = local_1038 + 1;
      local_1029 = '\0';
    }
    uVar1 = local_1038;
    local_14 = 0xffffffff;
    FUN_00412fd8(&local_1060);
    if (((local_1029 != '\0') || (local_104c <= uVar2)) || (0x31 < uVar1)) goto LAB_0041226f;
  }
  FUN_00412fd8(&local_1060);
LAB_0041226f:
  ExceptionList = local_1c;
  FUN_00429fd0(local_24 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_00412295 */

void __fastcall FUN_00412295(int param_1)

{
  FUN_00412fd8((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_004122a3 */

void * __fastcall FUN_004122a3(void *param_1)

{
  FUN_00411852(param_1,0,4,1,4,0);
  FUN_00411852((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_00411852((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_004122e5 */

void __fastcall FUN_004122e5(undefined2 *param_1)

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
  
  local_c = DAT_0042d6c0 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_00402e88;
    local_3c = DAT_00402e84;
    local_30 = DAT_00402e78;
    local_34 = DAT_00402e74;
    local_28 = DAT_00402ea8;
    local_2c = DAT_00402ea4;
    FUN_00412040((uint)&local_3c,3,param_1);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00402eac;
    local_34 = DAT_00402e5c;
    local_38 = DAT_00402eb0;
    local_2c = DAT_00402e7c;
    local_30 = DAT_00402e60;
    local_28 = DAT_00402e80;
    FUN_00412040((uint)&local_3c,3,param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00402e9c;
    local_34 = DAT_00402e54;
    local_38 = DAT_00402ea0;
    local_2c = DAT_00402e8c;
    local_30 = DAT_00402e58;
    local_24 = DAT_00402e64;
    local_28 = DAT_00402e90;
    local_1c = DAT_00402e6c;
    local_20 = DAT_00402e68;
    local_14 = DAT_00402e94;
    local_18 = DAT_00402e70;
    local_10 = DAT_00402e98;
    FUN_00412040((uint)&local_3c,6,param_1 + 0x24);
  }
  FUN_00429fd0(local_c ^ (uint)&local_3c);
  return;
}



/* Function: FUN_0041243b */

void __thiscall FUN_0041243b(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_00411442(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_004124b2 */

void __thiscall FUN_004124b2(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_00412511 */

void __thiscall FUN_00412511(void *this,PSRWLOCK param_1)

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
  puStack_c = &LAB_0042b582;
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
            goto LAB_004125b5;
          }
        } while (uVar3 < uVar2);
      }
      local_20 = 0;
LAB_004125b5:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_1c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0042e4b0)(local_20);
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



/* Function: FUN_00412613 */

void __fastcall FUN_00412613(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00412674(param_1);
  FUN_00412fd8((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_00412819((int)param_1 + 4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00412674 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00412674(void *param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x412680;
  FUN_004122a3(local_7c);
  local_8 = 0;
  FUN_004127cc(param_1,local_7c);
  FUN_004122e5(local_7c);
  FUN_00412819((int)local_7c);
  return;
}



/* Function: FUN_004126b5 */

undefined1 __thiscall FUN_004126b5(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_00412f8c((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_00412f69((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_0041270e */

undefined1 __thiscall FUN_0041270e(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_00412779((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_004126b5(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00412779 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00412779(PSRWLOCK param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x412785;
  FUN_004122a3(local_7c);
  local_8 = 0;
  AcquireSRWLockExclusive(param_1);
  FUN_004127cc(param_1,local_7c);
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
  }
  FUN_004122e5(local_7c);
  FUN_00412819((int)local_7c);
  return;
}



/* Function: FUN_004127cc */

void __thiscall FUN_004127cc(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_004118d0(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_004118d0((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_004118d0((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_00412819 */

void __fastcall FUN_00412819(int param_1)

{
  FUN_00412fd8((int *)(param_1 + 100));
  FUN_00412fd8((int *)(param_1 + 0x40));
  FUN_00412fd8((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_0041283d */

void __fastcall FUN_0041283d(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042b6b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_00412ff8(this,0);
  FUN_00412ff8(param_1 + 0x1c,0);
  FUN_00412fd8((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00412d9b(*(int *)(param_1 + 0x78));
  }
  FUN_00412fd8((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00411608(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_00412fd8((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004137a7(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*this != 0) {
    FUN_004137a7((PTP_TIMER)*this);
  }
  local_8 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_004133ed(*(int **)(param_1 + 8));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0041290f */

void __thiscall FUN_0041290f(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    bVar1 = FUN_00412b3c((int)this);
    if (bVar1) {
      cVar2 = FUN_0041270e(*(void **)((int)this + 0xc),param_1,param_2,param_3);
      if (cVar2 != '\0') {
        cVar2 = FUN_00410433();
        if (cVar2 == '\0') {
          SRWLock = (PSRWLOCK)((int)this + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          FUN_00412bc9(this);
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



/* Function: FUN_0041299b */

void __thiscall FUN_0041299b(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_00410433(), cVar1 == '\0')) &&
     (bVar2 = FUN_00412b3c((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_0041243b(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x412d50,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_0041243b((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00412a3b */

void __fastcall FUN_00412a3b(int param_1)

{
  char cVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_00410433();
  if (cVar1 == '\0') {
    bVar2 = FUN_00412b3c(param_1);
    if (bVar2) {
      FUN_00412511(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_00412779(*(PSRWLOCK *)(param_1 + 0xc));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00412aa3 */

void __thiscall FUN_00412aa3(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3)

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
  puStack_c = &LAB_0042b5c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    cVar1 = FUN_00410433();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 0x14);
      AcquireSRWLockExclusive(SRWLock);
      local_16 = 0;
      local_1c = param_1;
      local_18 = param_2;
      local_14 = param_3;
      FUN_00411442((void *)((int)this + 0x7c),&local_1c,0xc);
      FUN_00412c2a(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00412b3c */

bool __fastcall FUN_00412b3c(int param_1)

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
        iVar1 = FUN_004132ba(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_00412bc9 */

void __fastcall FUN_00412bc9(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00413c90,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00412ff8(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00411335(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_00412c2a */

void __fastcall FUN_00412c2a(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00413cd0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00412ff8(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00411335(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_00412c90 */

void FUN_00412c90(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00412511(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00412cb3 */

bool __fastcall FUN_00412cb3(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar3 = DAT_0042dcc8;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b6d4;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(param_1 + 0x4c);
  iVar4 = 0;
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar3 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_004080e6("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_0042dcc8 = pcVar3, pcVar3 == (code *)0x0)) {
      iVar4 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_0042e4b0)(FUN_00412c90,param_1,0,piVar1,uVar2);
      iVar4 = (*pcVar3)();
    }
  }
  ExceptionList = local_10;
  return iVar4 == 0;
}



/* Function: FUN_00412d50 */

void FUN_00412d50(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00412511(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00412d73 */

LPCRITICAL_SECTION __fastcall FUN_00412d73(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_00412d9b */

void FUN_00412d9b(int param_1)

{
  if ((param_1 != 0) && (DAT_0042dd4c != (PSRWLOCK)0x0)) {
    FUN_004124b2(DAT_0042dd4c + 0x1c,DAT_0042dd4c,param_1);
  }
  return;
}



/* Function: FUN_00412dd0 */

void FUN_00412dd0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_00412a3b(0x42dd40);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_00410a9e(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_0041290f(&DAT_0042dd40,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_00412aa3(&DAT_0042dd40,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_00412e50 */

void FUN_00412e50(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_0041299b(&DAT_0042dd40,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_0042dd40 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_0042dd50);
      bVar1 = FUN_00412cb3(0x42dd40);
      if (bVar1) {
        FUN_0041243b(&DAT_0042dd64,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0042dd50);
    }
  }
  return;
}



/* Function: FUN_00412ec0 */

void FUN_00412ec0(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_0042dd40 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_0042dd90;
  }
  else {
    if (DAT_0042dd40 == '\0') {
      return;
    }
    this = &DAT_0042dd64;
  }
  FUN_004124b2(this,(PSRWLOCK)&DAT_0042dd50,param_1);
  return;
}



/* Function: FUN_00412f04 */

void __fastcall FUN_00412f04(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042b370;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_00410433();
  if (cVar1 == '\0') {
    FUN_0041283d(param_1);
  }
  else {
    *param_1 = 0;
    local_8 = 0;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      FUN_004133ed(*(int **)(param_1 + 8));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00412f69 */

void __thiscall FUN_00412f69(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00411b63(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_00412f8c */

void __fastcall FUN_00412f8c(void *param_1)

{
  FUN_00411b63(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_00412fae */

void __thiscall FUN_00412fae(void *this,int param_1)

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



/* Function: FUN_00412fd8 */

void __fastcall FUN_00412fd8(int *param_1)

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



/* Function: FUN_00412ff8 */

void __thiscall FUN_00412ff8(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_004137a7(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0041302f */

void __fastcall FUN_0041302f(int *param_1)

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



/* Function: FUN_00413074 */

undefined4 __thiscall FUN_00413074(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00410415(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_004130c4(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_004130c4 */

void __thiscall FUN_004130c4(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00410b00(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004130fb */

void __fastcall FUN_004130fb(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004095e6(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_004130c4(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00410415(extraout_ECX);
    goto LAB_004131e7;
  }
  FUN_00413764(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_00410b58(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_00413215:
    FUN_00410883(unaff_retaddr,uVar3,&DAT_00402cf4,uVar2);
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_0041357d((int)local_210,&local_214,param_2);
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_00413215;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00410b2d(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00410b00(local_214);
  }
LAB_004131e7:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041322b */

int __fastcall FUN_0041322b(int *param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int *piVar4;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00410433();
  if (cVar1 == '\0') {
    iVar2 = FUN_00413764(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar4 = local_8;
    if (*param_1 == 0) {
      FUN_004130c4(param_1 + 2,0);
      FUN_004130c4(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar3 = GetLastError();
        FUN_00410b2d(local_8);
        SetLastError(DVar3);
      }
      FUN_00413500((int)param_1);
      DVar3 = 0;
      hHeap = GetProcessHeap();
      iVar2 = HeapFree(hHeap,DVar3,param_1);
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = FUN_00410b2d(piVar4);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    iVar2 = *param_1;
  }
  return iVar2;
}



/* Function: FUN_004132ba */

void __fastcall FUN_004132ba(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004095e6(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_004130c4(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00410415(extraout_ECX);
    goto LAB_004133a9;
  }
  FUN_00413764(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_00410b58(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_004133d7:
    FUN_00410883(unaff_retaddr,uVar3,&DAT_00402cf4,uVar2);
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_00413642((int)local_210,&local_214,param_2);
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_004133d7;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00410b2d(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00410b00(local_214);
  }
LAB_004133a9:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004133ed */

void __fastcall FUN_004133ed(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00410433();
  if (cVar1 == '\0') {
    FUN_00413764(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_004130c4(param_1 + 2,0);
      FUN_004130c4(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00410b2d(local_8);
        SetLastError(DVar2);
      }
      FUN_0041352b((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00410b2d(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_00412674(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_00413487 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413487(void)

{
  _DAT_0042dd44 = "WilStaging_02";
  DAT_0042dd40 = 0;
  _DAT_0042dd48 = 0;
  DAT_0042dd4c = 0;
  _DAT_0042dd50 = 0;
  _DAT_0042dd54 = 0;
  _DAT_0042dd58 = 0;
  _DAT_0042dd5c = 0;
  _DAT_0042dd60 = 0;
  FUN_00412d73((LPCRITICAL_SECTION)&DAT_0042dd64);
  _DAT_0042dd8c = 0;
  FUN_00412d73((LPCRITICAL_SECTION)&DAT_0042dd90);
  _DAT_0042ddc8 = 0;
  _DAT_0042ddb8 = 0;
  uRam0042ddbc = 0;
  uRam0042ddc0 = 0;
  uRam0042ddc4 = 0;
  DAT_0042dd40 = 1;
  return;
}



/* Function: FUN_00413500 */

void __fastcall FUN_00413500(int param_1)

{
  FUN_00413709((int *)(param_1 + 0x18));
  FUN_00413556((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00410b00(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0041352b */

void __fastcall FUN_0041352b(int param_1)

{
  FUN_00412613((void *)(param_1 + 0x10));
  FUN_00413556((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00410b00(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00413556 */

void __fastcall FUN_00413556(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00410b00((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00410b00((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0041357d */

uint __fastcall FUN_0041357d(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00410167(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00410883(unaff_retaddr,0x148,&DAT_00402cf4,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004109e5();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00410bb5(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00410883(unaff_retaddr,0x14b,&DAT_00402cf4,uVar3);
    }
    else {
      FUN_004137d2(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_00413556(local_10);
  }
  FUN_00412fd8((int *)&local_18);
  return uVar3;
}



/* Function: FUN_00413642 */

uint __fastcall FUN_00413642(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00410167(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00410883(unaff_retaddr,0x148,&DAT_00402cf4,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004109e5();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00410bb5(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00410883(unaff_retaddr,0x14b,&DAT_00402cf4,uVar3);
    }
    else {
      FUN_00413836(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_00413556(local_10);
  }
  FUN_00412fd8((int *)&local_18);
  return uVar3;
}



/* Function: FUN_00413709 */

void __fastcall FUN_00413709(int *param_1)

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
        FUN_00410f55((int)lpMem + 8);
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



/* Function: FUN_00413764 */

void __thiscall FUN_00413764(void *this,undefined4 *param_1)

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
    FUN_0041095a(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_004137a7 */

void FUN_004137a7(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x004137c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_004137d2 */

undefined4 * __thiscall FUN_004137d2(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00413836 */

undefined4 * __thiscall FUN_00413836(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_004122a3((void *)((int)this + 0x14));
  FUN_00412d73((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_0041389a */

void __fastcall
FUN_0041389a(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_14;
  uint local_10;
  undefined4 local_c;
  
  local_14 = param_7;
  local_10 = FUN_00407b51(param_7);
  local_c = 0;
  FUN_004138ea(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_14);
  return;
}



/* Function: FUN_004138ea */

void __fastcall
FUN_004138ea(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00413d7b(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00413912 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00413912(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  puStack_c = &LAB_0042b6f7;
  local_10 = ExceptionList;
  uStack_14 = 0x41392f;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_141c = param_6;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_1420 = param_1;
  local_1418 = param_2;
  local_1450 = FUN_004079d0(local_1474);
  local_147c = 3;
  local_1478 = 0;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  LOCK();
  UNLOCK();
  local_146c = DAT_0042dcfc + 1;
  local_1468 = 0;
  DAT_0042dcfc = DAT_0042dcfc + 1;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_0042dc8c;
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
  if (DAT_0042dc8c == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0042e4b0)(uVar2);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_0042dc98;
  if (DAT_0042dc98 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc94;
  if (DAT_0042dc94 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc90;
  if (DAT_0042dc90 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc6c;
  if ((DAT_0042dc6c != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c);
    (*pcVar1)();
  }
  if (-1 < local_1474) {
    local_1474 = -0x7fff0001;
    local_1470 = FUN_00407b51(0x8000ffff);
  }
  uVar3 = FUN_00410463();
  pcVar1 = DAT_0042dcb4;
  if (((char)uVar3 == '\0') || ((local_1478 & 2) != 0)) {
    if ((DAT_0042dcb4 != (code *)0x0) && (DAT_0042dca4 == '\0')) {
      (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c,0,0);
      (*pcVar1)();
    }
  }
  else {
    if ((DAT_0042dcb4 != (code *)0x0) && (DAT_0042dca4 == '\0')) {
      (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c,local_1414,0x800);
      (*pcVar1)();
    }
    if (local_1414[0] == L'\0') {
      FUN_0040763c(local_1414,0x800,(int)&local_147c);
    }
    OutputDebugStringW(local_1414);
  }
  pcVar1 = DAT_0042dc84;
  if ((((local_1478 & 4) != 0) || (DAT_0042dcac != '\0')) && (DAT_0042dc84 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  FUN_00410731((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00413bb8 */

void __fastcall
FUN_00413bb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  FUN_00413e08(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Function: FUN_00413bc9 */

void __fastcall
FUN_00413bc9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00407b51(param_7);
  local_8 = 0;
  FUN_00413bb8(param_1,param_2,param_3,0,extraout_ECX,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_00413c0d */

uint __fastcall
FUN_00413c0d(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  uint uVar1;
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00410392(param_1,param_2,param_3,param_4,param_1,param_6);
  local_10 = uVar1;
  local_c = FUN_00407b51(uVar1);
  local_8 = 0;
  FUN_00413bb8(param_1,param_2,param_3,param_4,extraout_ECX,param_6,(int *)&local_10);
  return uVar1;
}



/* Function: FUN_00413c66 */

void __fastcall FUN_00413c66(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00413c90 */

void FUN_00413c90(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_00412a3b((int)param_2);
  }
  return;
}



/* Function: FUN_00413cd0 */

void FUN_00413cd0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_00411483(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00413d20 */

undefined4 * __thiscall FUN_00413d20(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004010ec;
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00413d50 */

undefined4 * __thiscall FUN_00413d50(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004010ec;
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00413d7b */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00413d7b(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            short *param_8)

{
  code *pcVar1;
  int local_1470;
  byte local_146c;
  int local_1414;
  WCHAR local_1410 [2048];
  undefined1 local_410 [1028];
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x413d8a;
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_1414 = param_2;
  FUN_004104a3(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,param_3,local_1410,
               param_3,local_410,param_3,&local_1470);
  if ((local_146c & 1) == 0) {
    FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_00410731((int)&local_1470);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00413e08 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00413e08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  puStack_c = &LAB_0042b71d;
  local_10 = ExceptionList;
  uVar2 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_141c = param_4;
  local_1420 = param_6;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_1424 = param_1;
  local_1418 = param_2;
  local_14 = uVar2;
  local_1450 = FUN_00410230(local_1474);
  local_1478 = 0;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  local_147c = 1;
  LOCK();
  UNLOCK();
  local_146c = DAT_0042dcfc + 1;
  local_1468 = 0;
  DAT_0042dcfc = DAT_0042dcfc + 1;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_0042dc8c;
  local_1454 = local_1418;
  local_145c = local_141c;
  local_142c = local_1420;
  local_1458 = param_3;
  local_1428 = local_1424;
  local_1460 = 0;
  local_144c = 0;
  local_143c = 0;
  uStack_1438 = 0;
  uStack_1434 = 0;
  local_1448 = 0;
  uStack_1444 = 0;
  uStack_1440 = 0;
  if (DAT_0042dc8c == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0042e4b0)(uVar2);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_0042dc98;
  if (DAT_0042dc98 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc94;
  if (DAT_0042dc94 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc90;
  if (DAT_0042dc90 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc6c;
  if ((DAT_0042dc6c != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c);
    (*pcVar1)();
  }
  if (local_1474 < 0) {
    uVar3 = FUN_00410463();
    pcVar1 = DAT_0042dcb4;
    if (((char)uVar3 == '\0') || ((local_1478 & 2) != 0)) {
      if ((DAT_0042dcb4 != (code *)0x0) && (DAT_0042dca4 == '\0')) {
        (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c,0,0);
        (*pcVar1)();
      }
    }
    else {
      if ((DAT_0042dcb4 != (code *)0x0) && (DAT_0042dca4 == '\0')) {
        (*(code *)PTR_guard_check_icall_0042e4b0)(&local_147c,local_1414,0x800);
        (*pcVar1)();
      }
      if (local_1414[0] == L'\0') {
        FUN_0040763c(local_1414,0x800,(int)&local_147c);
      }
      OutputDebugStringW(local_1414);
    }
    pcVar1 = DAT_0042dc84;
    if ((((local_1478 & 4) != 0) || (DAT_0042dcac != '\0')) && (DAT_0042dc84 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_0042e4b0)();
      (*pcVar1)();
    }
    local_8 = 0xffffffff;
    if ((local_1478 & 1) == 0) {
      ExceptionList = local_10;
      FUN_00429fd0(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    FUN_004109e5();
  }
  FUN_00410731((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004140e0 */

void __thiscall FUN_004140e0(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401100;
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



/* Function: FUN_00414120 */

undefined4 __thiscall
FUN_00414120(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_00411b63(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_00414173 */

void __fastcall
FUN_00414173(REGHANDLE *param_1,PCEVENT_DESCRIPTOR param_2,undefined4 param_3,ULONG param_4,
            PEVENT_DATA_DESCRIPTOR param_5)

{
  ushort *puVar1;
  ULONG UVar2;
  uint uVar3;
  
  puVar1 = *(ushort **)(param_1 + 1);
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
  EventWriteTransfer(*param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,param_4,param_5);
  return;
}



/* Function: FUN_004141c1 */

void FUN_004141c1(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,
                 wchar_t *param_5,wchar_t *param_6,wchar_t *param_7,wchar_t *param_8)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *in_stack_00000030;
  wchar_t *in_stack_00000034;
  wchar_t *in_stack_00000038;
  wchar_t *in_stack_0000003c;
  wchar_t *in_stack_00000040;
  _EVENT_DATA_DESCRIPTOR local_108;
  wchar_t *local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  wchar_t *local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  wchar_t *local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  wchar_t *local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  wchar_t *local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  wchar_t *local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  wchar_t *local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  wchar_t *local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_10 = 10;
  local_f0 = local_10;
  if (param_1 != (wchar_t *)0x0) {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_f0 = ((int)pwVar2 - (int)(param_1 + 1) >> 1) * 2 + 2;
  }
  local_f4 = 0;
  local_f8 = L"NULL";
  if (param_1 != (wchar_t *)0x0) {
    local_f8 = param_1;
  }
  local_ec = 0;
  local_e0 = local_10;
  if (param_2 != (wchar_t *)0x0) {
    pwVar2 = param_2;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_e0 = ((int)pwVar2 - (int)(param_2 + 1) >> 1) * 2 + 2;
  }
  local_e4 = 0;
  local_e8 = L"NULL";
  if (param_2 != (wchar_t *)0x0) {
    local_e8 = param_2;
  }
  local_dc = 0;
  local_d0 = local_10;
  if (param_3 != (wchar_t *)0x0) {
    pwVar2 = param_3;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_d0 = ((int)pwVar2 - (int)(param_3 + 1) >> 1) * 2 + 2;
  }
  local_d4 = 0;
  local_d8 = L"NULL";
  if (param_3 != (wchar_t *)0x0) {
    local_d8 = param_3;
  }
  local_cc = 0;
  local_c0 = local_10;
  if (param_4 != (wchar_t *)0x0) {
    pwVar2 = param_4;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_c0 = ((int)pwVar2 - (int)(param_4 + 1) >> 1) * 2 + 2;
  }
  local_c4 = 0;
  local_c8 = L"NULL";
  if (param_4 != (wchar_t *)0x0) {
    local_c8 = param_4;
  }
  local_bc = 0;
  local_b0 = local_10;
  if (param_5 != (wchar_t *)0x0) {
    pwVar2 = param_5;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_b0 = ((int)pwVar2 - (int)(param_5 + 1) >> 1) * 2 + 2;
  }
  local_b4 = 0;
  local_b8 = L"NULL";
  if (param_5 != (wchar_t *)0x0) {
    local_b8 = param_5;
  }
  local_ac = 0;
  local_a0 = local_10;
  if (param_6 != (wchar_t *)0x0) {
    pwVar2 = param_6;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_a0 = ((int)pwVar2 - (int)(param_6 + 1) >> 1) * 2 + 2;
  }
  local_a4 = 0;
  local_a8 = L"NULL";
  if (param_6 != (wchar_t *)0x0) {
    local_a8 = param_6;
  }
  local_9c = 0;
  local_90 = local_10;
  if (param_7 != (wchar_t *)0x0) {
    pwVar2 = param_7;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_90 = ((int)pwVar2 - (int)(param_7 + 1) >> 1) * 2 + 2;
  }
  local_94 = 0;
  local_98 = L"NULL";
  if (param_7 != (wchar_t *)0x0) {
    local_98 = param_7;
  }
  local_8c = 0;
  local_80 = local_10;
  if (param_8 != (wchar_t *)0x0) {
    pwVar2 = param_8;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_80 = ((int)pwVar2 - (int)(param_8 + 1) >> 1) * 2 + 2;
  }
  local_84 = 0;
  local_88 = L"NULL";
  if (param_8 != (wchar_t *)0x0) {
    local_88 = param_8;
  }
  local_7c = 0;
  local_78 = &stack0x00000024;
  local_68 = &stack0x00000028;
  local_74 = 0;
  local_70 = 4;
  local_6c = 0;
  local_64 = 0;
  local_60 = 8;
  local_5c = 0;
  local_50 = local_10;
  if (in_stack_00000030 != (wchar_t *)0x0) {
    pwVar2 = in_stack_00000030;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_50 = ((int)pwVar2 - (int)(in_stack_00000030 + 1) >> 1) * 2 + 2;
  }
  local_54 = 0;
  local_58 = L"NULL";
  if (in_stack_00000030 != (wchar_t *)0x0) {
    local_58 = in_stack_00000030;
  }
  local_4c = 0;
  local_40 = local_10;
  if (in_stack_00000034 != (wchar_t *)0x0) {
    pwVar2 = in_stack_00000034;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_40 = ((int)pwVar2 - (int)(in_stack_00000034 + 1) >> 1) * 2 + 2;
  }
  local_44 = 0;
  local_48 = L"NULL";
  if (in_stack_00000034 != (wchar_t *)0x0) {
    local_48 = in_stack_00000034;
  }
  local_3c = 0;
  local_30 = local_10;
  if (in_stack_00000038 != (wchar_t *)0x0) {
    pwVar2 = in_stack_00000038;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_30 = ((int)pwVar2 - (int)(in_stack_00000038 + 1) >> 1) * 2 + 2;
  }
  local_34 = 0;
  local_38 = L"NULL";
  if (in_stack_00000038 != (wchar_t *)0x0) {
    local_38 = in_stack_00000038;
  }
  local_2c = 0;
  local_20 = local_10;
  if (in_stack_0000003c != (wchar_t *)0x0) {
    pwVar2 = in_stack_0000003c;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_20 = ((int)pwVar2 - (int)(in_stack_0000003c + 1) >> 1) * 2 + 2;
  }
  local_28 = L"NULL";
  if (in_stack_0000003c != (wchar_t *)0x0) {
    local_28 = in_stack_0000003c;
  }
  local_24 = 0;
  local_1c = 0;
  if (in_stack_00000040 != (wchar_t *)0x0) {
    pwVar2 = in_stack_00000040;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_10 = ((int)pwVar2 - (int)(in_stack_00000040 + 1) >> 1) * 2 + 2;
  }
  local_18 = L"NULL";
  if (in_stack_00000040 != (wchar_t *)0x0) {
    local_18 = in_stack_00000040;
  }
  local_14 = 0;
  local_c = 0;
  FUN_00414173((REGHANDLE *)&DAT_0042d000,(PCEVENT_DESCRIPTOR)&DAT_00402370,local_10,0x10,&local_108
              );
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004145b7 */

DWORD __fastcall FUN_004145b7(LPCWSTR param_1,wchar_t *param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  undefined4 uStackY_2c;
  undefined4 uVar6;
  undefined4 uVar7;
  WCHAR *local_14;
  WCHAR *local_10;
  WCHAR local_c [4];
  
  local_14 = local_c;
  local_c[0] = L'\0';
  local_10 = local_14;
  if ((param_1 == (LPCWSTR)0x0) || (param_2 == (wchar_t *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar5 = 0x80070057;
  }
  else {
    pwVar2 = FUN_0040e2e2(param_2);
    if ((pwVar2 == (wchar_t *)0x0) || (pwVar2 == param_2)) {
      uVar5 = 0x80070057;
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
        FUN_0040975c(0xb,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),param_2);
      }
    }
    else {
      cVar1 = FUN_004094c0(&local_14,param_2,((int)pwVar2 - (int)param_2 >> 1) - 1);
      if (cVar1 == '\0') {
        uVar5 = 0x8007000e;
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004146ea;
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uStackY_2c = 0xc;
      }
      else {
        BVar3 = SetEnvironmentVariableW(param_1,local_14);
        if (BVar3 != 0) {
          uVar5 = 0;
          goto LAB_004146ea;
        }
        DVar4 = GetLastError();
        uVar5 = DVar4 & 0xffff | 0x80070000;
        if ((int)DVar4 < 1) {
          uVar5 = DVar4;
        }
        if (-1 < (int)uVar5) {
          uVar5 = 0x80004005;
        }
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004146ea;
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uStackY_2c = 0xd;
      }
      FUN_00407519(uStackY_2c,&DAT_00403050,uVar6,uVar7);
    }
  }
LAB_004146ea:
  if (local_14 != local_c) {
    FUN_0042a48f(local_14);
  }
  return uVar5;
}



/* Function: FUN_0041470d */

undefined4 * __fastcall FUN_0041470d(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 4;
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 8;
  param_1[6] = puVar1;
  param_1[7] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0xc;
  param_1[10] = puVar1;
  param_1[0xb] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x16;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = puVar1;
  param_1[0x15] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x1a;
  param_1[0x18] = puVar1;
  param_1[0x19] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x1e;
  param_1[0x1c] = puVar1;
  param_1[0x1d] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x22;
  param_1[0x20] = puVar1;
  param_1[0x21] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x2a;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = puVar1;
  param_1[0x29] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x2e;
  param_1[0x2c] = puVar1;
  param_1[0x2d] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x35;
  param_1[0x33] = puVar1;
  param_1[0x34] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x39;
  param_1[0x37] = puVar1;
  param_1[0x38] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x40;
  param_1[0x3e] = puVar1;
  param_1[0x3f] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x44;
  param_1[0x42] = puVar1;
  param_1[0x43] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x48;
  param_1[0x46] = puVar1;
  param_1[0x47] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x4c;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 3;
  param_1[0x3d] = 0;
  param_1[0x4a] = puVar1;
  param_1[0x4b] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x50;
  param_1[0x56] = 0;
  param_1[0x4e] = puVar1;
  param_1[0x4f] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x54;
  param_1[0x52] = puVar1;
  param_1[0x53] = puVar1;
  *(undefined2 *)puVar1 = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  return param_1;
}



/* Function: FUN_004148ba */

void __fastcall FUN_004148ba(int param_1)

{
  if (1 < (int)*(HANDLE *)(param_1 + 0x168) + 1U) {
    CloseHandle(*(HANDLE *)(param_1 + 0x168));
  }
  FUN_004095b0((int *)(param_1 + 0x148));
  FUN_004095b0((int *)(param_1 + 0x138));
  FUN_004095b0((int *)(param_1 + 0x128));
  FUN_004095b0((int *)(param_1 + 0x118));
  FUN_004095b0((int *)(param_1 + 0x108));
  FUN_004095b0((int *)(param_1 + 0xf8));
  FUN_004095b0((int *)(param_1 + 0xdc));
  FUN_004095b0((int *)(param_1 + 0xcc));
  FUN_004095b0((int *)(param_1 + 0xb0));
  FUN_004095b0((int *)(param_1 + 0xa0));
  FUN_004095b0((int *)(param_1 + 0x80));
  FUN_004095b0((int *)(param_1 + 0x70));
  FUN_004095b0((int *)(param_1 + 0x60));
  FUN_004095b0((int *)(param_1 + 0x50));
  FUN_004095b0((int *)(param_1 + 0x28));
  FUN_004095b0((int *)(param_1 + 0x18));
  FUN_004095b0((int *)(param_1 + 8));
  return;
}



/* Function: FUN_00414984 */

undefined4
FUN_00414984(HANDLE param_1,short *param_2,LPCVOID param_3,undefined4 *param_4,int *param_5,
            undefined2 *param_6,int *param_7)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_38 [52];
  
  memset(local_38,0,0x34);
  if ((((param_2 == (short *)0x0) || (param_4 == (undefined4 *)0x0)) || (param_5 == (int *)0x0)) ||
     (param_7 == (int *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xe,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar4 = 0x80070057;
  }
  else {
    cVar1 = FUN_00409553(param_4,param_2);
    if (cVar1 != '\0') {
      psVar2 = FUN_0040e2e2(param_2);
      cVar1 = FUN_00409553(param_5,psVar2);
      if (cVar1 != '\0') {
        if (0x40 < (uint)(param_5[1] - *param_5 >> 1)) {
          FUN_00408e2c(param_5,0x40);
        }
        iVar3 = FUN_0042753f(param_1,param_3);
        *param_7 = iVar3;
        if (iVar3 == 0) {
          iVar3 = FUN_004274d2((LPCWSTR)*param_4);
          *param_7 = iVar3;
        }
        iVar3 = FUN_00426c2c((LPCWSTR)*param_4,local_38,(short *)0x0,(uint *)0x0,0);
        if (iVar3 < 0) {
          return 0;
        }
        *param_6 = SUB42(local_38._8_4_,2);
        param_6[1] = (short)local_38._8_4_;
        param_6[2] = SUB42(local_38._12_4_,2);
        param_6[3] = (short)local_38._12_4_;
        return 0;
      }
    }
    uVar4 = 0x8007000e;
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xf,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  return uVar4;
}



/* Function: FUN_00414ab6 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00414ab6(LPCWSTR param_1,int *param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  undefined2 *local_24;
  undefined2 *local_20;
  undefined2 local_1c [10];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_24 = local_1c;
  local_1c[0] = 0;
  uVar3 = 0;
  local_8 = 0;
  local_20 = local_24;
  psVar1 = FUN_0040e2e2((short *)*param_2);
  if (psVar1 != (short *)0x0) {
    do {
      iVar2 = o__wcsicmp(psVar1,*(undefined4 *)((int)&PTR_u_setup_exe_00401390 + uVar3));
      if (iVar2 == 0) {
        iVar2 = FUN_00427407(param_1,(int *)&local_24);
        if ((-1 < iVar2) && (local_24 != local_20)) {
          FUN_0040fe81(param_2,0x5f);
          FUN_0040a473(param_2,local_24,(int)local_20 - (int)local_24 >> 1);
          if (0x40 < (uint)(param_2[1] - *param_2 >> 1)) {
            FUN_00408e2c(param_2,0x40);
          }
        }
        break;
      }
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0x1c);
  }
  if (local_24 != local_1c) {
    FUN_0042a48f(local_24);
  }
  return 0;
}



/* Function: FUN_00414b72 */

uint __thiscall FUN_00414b72(void *this,HANDLE param_1,int param_2,short *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  
  FUN_0040ecb0(param_3,(int *)((int)this + 0xec),(int *)((int)this + 0xf0));
  if (*(int *)((int)this + 0xec) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xf0);
    if (iVar1 == 0) {
      uVar2 = FUN_0040f45d(param_1,param_2,(void *)((int)this + 0x138),
                           (undefined4 *)((int)this + 0x158),(int *)((int)this + 0x128),
                           (int *)((int)this + 0x18),(void *)((int)this + 0x148),
                           (void *)((int)this + 0x28));
    }
    else if (iVar1 == 1) {
      uVar2 = FUN_00414c08(this,param_1,param_4);
    }
    else if (iVar1 == 2) {
      uVar2 = 0x80004001;
    }
    else {
      uVar2 = 0x80004005;
    }
  }
  return uVar2;
}



/* Function: FUN_00414c08 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __thiscall FUN_00414c08(void *this,HANDLE param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  undefined4 uStackY_44;
  undefined4 uVar4;
  undefined4 uVar5;
  WCHAR *local_24;
  WCHAR *local_20;
  WCHAR local_1c [10];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_24 = local_1c;
  local_1c[0] = L'\0';
  local_8 = 0;
  local_20 = local_24;
  iVar2 = FUN_0040eee5(param_1,&local_24);
  if (iVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00414d01;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_44 = 0x10;
  }
  else {
    psVar3 = FUN_0040e2e2(local_24);
    if (psVar3 != (short *)0x0) {
      FUN_0040fe81(param_2,0x5f);
      FUN_0040a536(param_2,psVar3);
      if (0x40 < (uint)(param_2[1] - *param_2 >> 1)) {
        FUN_00408e2c(param_2,0x40);
      }
      iVar2 = FUN_00426af0(local_24,(void *)((int)this + 0x28));
      if (iVar2 < 0) {
        cVar1 = FUN_00409553((void *)((int)this + 0x28),psVar3);
        if (cVar1 == '\0') {
          iVar2 = -0x7ff8fff2;
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00414d01;
          uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uStackY_44 = 0x12;
          goto LAB_00414c8b;
        }
      }
      iVar2 = 0;
      goto LAB_00414d01;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00414d01;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_44 = 0x11;
  }
LAB_00414c8b:
  FUN_00407519(uStackY_44,&DAT_00403050,uVar4,uVar5);
LAB_00414d01:
  if (local_24 != local_1c) {
    FUN_0042a48f(local_24);
  }
  return iVar2;
}



/* Function: FUN_00414d28 */

DWORD __thiscall FUN_00414d28(void *this,uint *param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  LPCVOID local_14;
  LPCVOID local_10;
  LPCVOID local_c;
  SIZE_T local_8;
  
  local_c = (LPCVOID)0x0;
  local_10 = (LPCVOID)0x0;
  local_14 = (LPCVOID)0x0;
  local_1c = 0;
  RtlGetUnloadEventTraceEx(&local_c,&local_10,&local_14);
  if (((local_c == (LPCVOID)0x0) || (local_10 == (LPCVOID)0x0)) || (local_14 == (LPCVOID)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar4 = 0x13;
LAB_00414f17:
      FUN_004074f5(uVar4,&DAT_00403050,uVar5,uVar6);
    }
LAB_00414f22:
    uVar3 = 0x80004005;
  }
  else {
    local_8 = 0;
    BVar1 = ReadProcessMemory(*(HANDLE *)((int)this + 4),local_c,&local_20,4,&local_8);
    if ((BVar1 == 0) || (local_8 != 4)) {
      DVar2 = GetLastError();
      uVar3 = DVar2 & 0xffff | 0x80070000;
      if ((int)DVar2 < 1) {
        uVar3 = DVar2;
      }
      if (-1 < (int)uVar3) {
        uVar3 = 0x80004005;
      }
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return uVar3;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return uVar3;
      }
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar4 = 0x14;
    }
    else {
      if (local_20 != 0x5c) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar4 = 0x15;
          goto LAB_00414f17;
        }
        goto LAB_00414f22;
      }
      local_8 = 0;
      BVar1 = ReadProcessMemory(*(HANDLE *)((int)this + 4),local_10,&local_18,4,&local_8);
      if ((BVar1 == 0) || (local_8 != 4)) {
        DVar2 = GetLastError();
        uVar3 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar3 = DVar2;
        }
        if (-1 < (int)uVar3) {
          uVar3 = 0x80004005;
        }
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return uVar3;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return uVar3;
        }
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x16;
      }
      else {
        if (0x1000 < local_18) {
          local_18 = 0x1000;
        }
        local_8 = 0;
        BVar1 = ReadProcessMemory(*(HANDLE *)((int)this + 4),local_14,&local_1c,4,&local_8);
        if ((BVar1 != 0) && (local_8 == 4)) {
          *param_1 = local_18;
          *param_2 = local_1c;
          return 0;
        }
        DVar2 = GetLastError();
        uVar3 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar3 = DVar2;
        }
        if (-1 < (int)uVar3) {
          uVar3 = 0x80004005;
        }
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return uVar3;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return uVar3;
        }
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x17;
      }
    }
    FUN_00407519(uVar4,&DAT_00403050,uVar5,uVar6);
  }
  return uVar3;
}



/* Function: FUN_00414f36 */

DWORD __thiscall FUN_00414f36(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *lpBuffer;
  SIZE_T nSize;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  uint *puVar6;
  SIZE_T local_10;
  LPCVOID local_c;
  uint local_8;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_c = (LPCVOID)0x0;
  local_10 = 0;
  local_8 = 0;
  uVar2 = FUN_00414d28(this,&local_8,&local_c);
  uVar1 = local_8;
  if ((int)uVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x18,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    lpBuffer = (uint *)FUN_0042a8fe(-(uint)((int)((ulonglong)local_8 * 0x5c >> 0x20) != 0) |
                                    (uint)((ulonglong)local_8 * 0x5c));
    if (lpBuffer == (uint *)0x0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x19,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else {
      nSize = uVar1 * 0x5c;
      BVar3 = ReadProcessMemory(*(HANDLE *)((int)this + 4),local_c,lpBuffer,nSize,&local_10);
      if ((BVar3 == 0) || (local_10 != nSize)) {
        DVar4 = GetLastError();
        uVar2 = DVar4 & 0xffff | 0x80070000;
        if ((int)DVar4 < 1) {
          uVar2 = DVar4;
        }
        if (-1 < (int)uVar2) {
          uVar2 = 0x80004005;
        }
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_00407519(0x1a,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
      }
      else {
        uVar2 = 0;
        puVar6 = lpBuffer;
        if (uVar1 != 0) {
          do {
            if (*puVar6 == 0) break;
            if ((*puVar6 <= *(uint *)((int)this + 200)) &&
               (*(uint *)((int)this + 200) < puVar6[1] + *puVar6)) {
              iVar5 = uVar2 * 0x5c;
              *param_1 = 1;
              *(uint *)((int)this + 0xc0) = *(int *)((int)this + 200) - *puVar6;
              *(undefined2 *)(iVar5 + 0x52 + (int)lpBuffer) = 0;
              *(uint *)((int)this + 0x98) = lpBuffer[uVar2 * 0x17 + 3];
              *(uint *)((int)this + 0x9c) = lpBuffer[uVar2 * 0x17 + 1];
              FUN_00409553((void *)((int)this + 0x70),(short *)(puVar6 + 5));
              FUN_00409553((void *)((int)this + 0x80),(short *)(puVar6 + 5));
              FUN_0040a536((void *)((int)this + 0x80),L"_unloaded");
              *(undefined2 *)param_2 = *(undefined2 *)(iVar5 + 0x56 + (int)lpBuffer);
              *(short *)((int)param_2 + 2) = (short)lpBuffer[uVar2 * 0x17 + 0x15];
              *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar5 + 0x5a + (int)lpBuffer);
              *(short *)((int)param_2 + 6) = (short)lpBuffer[uVar2 * 0x17 + 0x16];
              break;
            }
            uVar2 = uVar2 + 1;
            puVar6 = puVar6 + 0x17;
          } while (uVar2 < local_8);
        }
        uVar2 = 0;
      }
      o_free(lpBuffer);
    }
  }
  return uVar2;
}



/* Function: FUN_00415147 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00415147(int param_1)

{
  char cVar1;
  LPCVOID lpBaseAddress;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  HMODULE local_a8;
  SIZE_T local_a4;
  FARPROC local_a0;
  int local_9c;
  short local_98 [31];
  undefined2 local_5a;
  short local_58 [40];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x9c;
  local_8 = 0x415156;
  memset(&local_9c,0,0x84);
  local_a4 = 0;
  FUN_0040e638(&local_a8,L"ntdll.dll");
  local_8 = 0;
  if (local_a8 == (HMODULE)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x1b,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_004153d9;
  }
  local_a0 = GetProcAddress(local_a8,"LdrGetFailureData");
  if (local_a0 == (FARPROC)0x0) {
    GetLastError();
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004153d9;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar3 = 0x1c;
  }
  else {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    lpBaseAddress = (LPCVOID)(*local_a0)();
    if (lpBaseAddress == (LPCVOID)0x0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x1d,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_004153d9;
    }
    BVar2 = ReadProcessMemory(*(HANDLE *)(param_1 + 4),lpBaseAddress,&local_9c,0x84,&local_a4);
    if ((BVar2 == 0) || (local_a4 != 0x84)) {
      GetLastError();
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004153d9;
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar3 = 0x1e;
    }
    else {
      if (local_9c != *(int *)(param_1 + 0xc4)) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0x1f,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        goto LAB_004153d9;
      }
      local_5a = 0;
      cVar1 = FUN_00409553((void *)(param_1 + 0x70),local_98);
      if (cVar1 == '\0') {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004153d9;
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar3 = 0x20;
      }
      else {
        local_a0 = (FARPROC)(param_1 + 0x80);
        cVar1 = FUN_00409553(local_a0,local_98);
        if (cVar1 != '\0') {
          if ((*(int *)(param_1 + 0xc4) == -0x3ffffec7) && (local_58[0] != 0)) {
            FUN_0040fe81(local_a0,0x21);
            FUN_0040a536(local_a0,local_58);
          }
          goto LAB_004153d9;
        }
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004153d9;
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar3 = 0x21;
      }
    }
  }
  FUN_00407519(uVar3,&DAT_00403050,uVar4,uVar5);
LAB_004153d9:
  if (local_a8 != (HMODULE)0x0) {
    FreeLibrary(local_a8);
  }
  FUN_0042ae87();
  return;
}



/* Function: FUN_004153f2 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FUN_004153f2(void *this,HANDLE param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined2 *puVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined3 extraout_var;
  int iVar6;
  BOOL BVar7;
  undefined4 uVar8;
  short *psVar9;
  HANDLE pvVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_6b8 [8];
  uint local_6b0;
  uint local_6ac;
  _FILETIME local_684;
  _FILETIME local_67c;
  _FILETIME local_674;
  _FILETIME local_66c;
  int local_664;
  DWORD local_660;
  int local_65c;
  HANDLE local_658;
  DWORD local_654 [6];
  uint local_63c;
  int local_638;
  LPCVOID local_634;
  undefined1 local_630 [512];
  WCHAR local_430 [260];
  wchar_t *local_228 [4];
  short local_218 [262];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_664 = param_3;
  local_658 = param_1;
  memset(local_654 + 1,0,0x428);
  local_65c = 0;
  local_228[0] = L"mscorwks.dll";
  local_66c.dwLowDateTime = 0;
  local_66c.dwHighDateTime = 0;
  local_228[1] = L"mscorsvr.dll";
  local_228[2] = L"clr.dll";
  local_228[3] = L"coreclr.dll";
  if (param_1 == (HANDLE)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x22,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_00415e26;
  }
  DVar4 = GetProcessId(param_1);
  local_654[0] = DVar4;
  if (DVar4 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x23,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    GetLastError();
    goto LAB_00415e26;
  }
  local_218[0] = 0;
  local_660 = GetTickCount();
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0xc4) = param_4;
  *(undefined4 *)((int)this + 200) = param_5;
  *(undefined4 *)((int)this + 0xc0) = param_5;
  DVar5 = GetProcessId(param_1);
  *(DWORD *)((int)this + 0x44) = DVar5;
  *(HANDLE *)((int)this + 4) = param_1;
  bVar2 = FUN_0042809d((int)param_1);
  *(int *)((int)this + 0xf4) = CONCAT31(extraout_var,bVar2);
  if (CONCAT31(extraout_var,bVar2) == 0) {
LAB_004155c7:
    BVar7 = GetProcessTimes(param_1,&local_66c,&local_684,&local_67c,&local_674);
    if (BVar7 != 0) {
      *(DWORD *)((int)this + 0x48) = local_66c.dwLowDateTime;
      *(DWORD *)((int)this + 0x4c) = local_66c.dwHighDateTime;
    }
    uVar8 = CreateToolhelp32Snapshot(8,DVar4);
    FUN_004093d1((int *)((int)this + 0x168),uVar8);
    iVar6 = *(int *)((int)this + 0x168);
    if (iVar6 + 1U < 2) {
      GetLastError();
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0x25,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      pvVar10 = local_658;
      local_654[0] = 0x104;
      BVar7 = QueryFullProcessImageNameW(local_658,0,local_430,local_654);
      if (BVar7 == 0) {
        GetLastError();
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_00407519(0x26,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        cVar3 = FUN_00409553((void *)((int)this + 0x18),L"bad_module_info");
        if (cVar3 == '\0') {
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar12 = 0x27;
        }
        else {
          cVar3 = FUN_00409553((void *)((int)this + 8),L"bad_module_info");
          if (cVar3 != '\0') {
LAB_00415936:
            FUN_00426af0(*(LPCWSTR *)((int)this + 8),(void *)((int)this + 0x28));
            FUN_00414b72(this,pvVar10,local_664,*(short **)((int)this + 8),(int *)((int)this + 0x18)
                        );
            FUN_00414ab6(*(LPCWSTR *)((int)this + 8),(int *)((int)this + 0x18));
            FUN_004145b7(L"appdir",*(wchar_t **)((int)this + 8));
            cVar3 = FUN_00409553((void *)((int)this + 0x70),L"unknown");
            if (cVar3 == '\0') {
              if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                 ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
              uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar12 = 0x2e;
            }
            else {
              cVar3 = FUN_00409553((void *)((int)this + 0x80),L"unknown");
              if (cVar3 != '\0') {
                do {
                  if (((local_65c == 0) &&
                      (uVar11 = *(uint *)((int)this + 200), local_63c <= uVar11)) &&
                     (uVar11 < local_638 + local_63c)) {
                    local_65c = 1;
                    local_218[0] = 0;
                    *(uint *)((int)this + 0xc0) = uVar11 - local_63c;
                    iVar6 = K32GetModuleFileNameExW(pvVar10,local_634,local_218,0x104);
                    if (iVar6 == 0) {
                      GetLastError();
                      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                        FUN_00407519(0x30,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
                      }
                      FUN_0040a406(local_218,0x104,(int)local_430);
                    }
                    iVar6 = FUN_00414984(pvVar10,local_218,local_634,
                                         (undefined4 *)((int)this + 0x70),(int *)((int)this + 0x80),
                                         (undefined2 *)((int)this + 0x90),(int *)((int)this + 0x98))
                    ;
                    if (iVar6 < 0) {
                      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
                      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                      uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                      uVar12 = 0x31;
                      goto LAB_00415923;
                    }
                    *(int *)((int)this + 0x9c) = local_638;
                  }
                  uVar11 = 0;
                  do {
                    iVar6 = o__wcsicmp(local_630,local_228[uVar11]);
                    if (iVar6 == 0) {
                      memset(local_6b8,0,0x34);
                      iVar6 = FUN_00426c2c(local_430,local_6b8,(short *)0x0,(uint *)0x0,0);
                      if ((-1 < iVar6) &&
                         ((*(int *)((int)this + 0x160) == 0 && *(int *)((int)this + 0x164) == 0 ||
                          ((local_6b0 <= *(uint *)((int)this + 0x164) &&
                           ((local_6b0 < *(uint *)((int)this + 0x164) ||
                            (local_6ac < *(uint *)((int)this + 0x160))))))))) {
                        *(uint *)((int)this + 0x160) = local_6ac;
                        *(uint *)((int)this + 0x164) = local_6b0;
                      }
                    }
                    pvVar10 = local_658;
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < 4);
                  iVar6 = Module32NextW(*(undefined4 *)((int)this + 0x168),local_654 + 1);
                } while (iVar6 != 0);
                if (local_65c == 0) {
                  FUN_00414f36(this,&local_65c,(undefined4 *)((int)this + 0x90));
                }
                iVar6 = *(int *)((int)this + 0xc4);
                if ((((iVar6 == -0x3ffffec7) || (iVar6 == -0x3ffffecb)) || (iVar6 == -0x3ffffec8))
                   || (iVar6 == -0x3ffffebe)) {
                  FUN_00415147((int)this);
                }
                GetTickCount();
                if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                   ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
                  FUN_00407519(0x32,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                               *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
                }
                FUN_004145b7(L"moddir",*(wchar_t **)((int)this + 0x70));
                uVar11 = FUN_0040ffdb((int *)((int)this + 0x50),L"%u.%u.%u.%u");
                if ((int)uVar11 < 0) {
                  if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                     ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
                  uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                  uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                  uVar12 = 0x33;
                }
                else {
                  uVar11 = FUN_0040ffdb((int *)((int)this + 0x60),L"%08x");
                  if ((int)uVar11 < 0) {
                    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
                    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                    uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                    uVar12 = 0x34;
                  }
                  else {
                    uVar11 = FUN_0040ffdb((int *)((int)this + 0xa0),L"%u.%u.%u.%u");
                    if ((int)uVar11 < 0) {
                      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
                      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                      uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                      uVar12 = 0x35;
                    }
                    else {
                      uVar11 = FUN_0040ffdb((int *)((int)this + 0xb0),L"%08x");
                      if ((int)uVar11 < 0) {
                        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
                        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                        uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                        uVar12 = 0x36;
                      }
                      else {
                        uVar11 = FUN_0040ffdb((int *)((int)this + 0xdc),L"%08x");
                        if ((int)uVar11 < 0) {
                          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
                          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                          uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                          uVar12 = 0x37;
                        }
                        else {
                          uVar11 = FUN_0040ffdb((int *)((int)this + 0xcc),L"%08x");
                          if (((-1 < (int)uVar11) ||
                              ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
                             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
                          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                          uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                          uVar12 = 0x38;
                        }
                      }
                    }
                  }
                }
                goto LAB_00415585;
              }
              if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                 ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
              uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar12 = 0x2f;
            }
            goto LAB_00415923;
          }
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar12 = 0x28;
        }
      }
      else {
        cVar3 = FUN_00409553((void *)((int)this + 8),local_430);
        if (cVar3 == '\0') {
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar12 = 0x29;
        }
        else {
          psVar9 = FUN_0040e2e2(local_430);
          cVar3 = FUN_00409553((void *)((int)this + 0x18),psVar9);
          if (cVar3 != '\0') goto LAB_00415936;
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar12 = 0x2a;
        }
      }
      FUN_00407519(uVar12,&DAT_00403050,uVar13,uVar8);
      goto LAB_00415e26;
    }
    local_654[1] = 0x428;
    iVar6 = Module32FirstW(iVar6,local_654 + 1);
    if (iVar6 != 0) {
      iVar6 = K32GetModuleFileNameExW(param_1,local_634,local_218,0x104);
      if (iVar6 == 0) {
        GetLastError();
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_00407519(0x2c,&DAT_00403050,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        FUN_0040a406(local_218,0x104,(int)local_430);
      }
      iVar6 = FUN_00414984(local_658,local_218,local_634,(undefined4 *)((int)this + 8),
                           (int *)((int)this + 0x18),(undefined2 *)((int)this + 0x38),
                           (int *)((int)this + 0x40));
      pvVar10 = local_658;
      if (-1 < iVar6) goto LAB_00415936;
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar12 = 0x2d;
LAB_00415923:
      FUN_004074f5(uVar12,&DAT_00403050,uVar13,uVar8);
      goto LAB_00415e26;
    }
    GetLastError();
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar12 = 0x2b;
  }
  else {
    iVar6 = FUN_00428104((int)param_1,(void *)((int)this + 0xf8));
    if (-1 < iVar6) {
      iVar6 = FUN_004282b3(param_1,(void *)((int)this + 0x118));
      DVar4 = local_654[0];
      if (-1 < iVar6) {
        iVar6 = FUN_00428460(*(void **)((int)this + 0x118),(undefined4 *)((int)this + 0x108));
        DVar4 = local_654[0];
        if (iVar6 < 0) {
          puVar1 = *(undefined2 **)((int)this + 0x108);
          *(undefined2 **)((int)this + 0x10c) = puVar1;
          *puVar1 = 0;
        }
      }
      goto LAB_004155c7;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00415e26;
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar12 = 0x24;
  }
LAB_00415585:
  FUN_00407519(uVar12,&DAT_00403050,uVar13,uVar8);
LAB_00415e26:
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00415e3d */

void __fastcall FUN_00415e3d(int param_1)

{
  if ((DAT_0042dbc0 & 1) != 0) {
    FUN_004141c1(*(wchar_t **)(param_1 + 0x18),*(wchar_t **)(param_1 + 0x50),
                 *(wchar_t **)(param_1 + 0x60),*(wchar_t **)(param_1 + 0x80),
                 *(wchar_t **)(param_1 + 0xa0),*(wchar_t **)(param_1 + 0xb0),
                 *(wchar_t **)(param_1 + 0xdc),*(wchar_t **)(param_1 + 0xcc));
  }
  return;
}



/* Function: FUN_00415e9f */

undefined4 __fastcall FUN_00415e9f(short *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2;
  if (param_1 == (short *)0x0) {
    uVar2 = 0x80070057;
  }
  else {
    do {
      if (*param_1 == 0) break;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar2 = 0x80070057;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
    if (param_3 != (int *)0x0) {
      if (iVar1 == 0) {
        *param_3 = 0;
      }
      else {
        *param_3 = param_2 - iVar1;
      }
    }
    if (iVar1 != 0) {
      return uVar2;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  return uVar2;
}



/* Function: FUN_00415efc */

uint __fastcall FUN_00415efc(LPCSTR param_1,undefined4 *param_2)

{
  DWORD DVar1;
  FARPROC pFVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((param_2 == (undefined4 *)0x0) || (param_1 == (LPCSTR)0x0)) {
    uVar4 = 0x102;
    DVar1 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR Invalid params\n",DVar1,uVar4);
    uVar3 = 0x80070057;
  }
  else if (((DAT_0042dd1c == (HMODULE)0x0) &&
           (DAT_0042dd1c = GetModuleHandleW(L"ntdll.dll"), DAT_0042dd1c == (HMODULE)0x0)) ||
          (pFVar2 = GetProcAddress(DAT_0042dd1c,param_1), pFVar2 == (FARPROC)0x0)) {
    DVar1 = GetLastError();
    uVar3 = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      uVar3 = DVar1;
    }
    if (-1 < (int)uVar3) {
      uVar3 = 0x80004005;
    }
  }
  else {
    *param_2 = pFVar2;
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_00415f8c */

uint FUN_00415f8c(undefined4 param_1)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 uVar4;
  code *local_8;
  
  local_8 = (code *)0x0;
  uVar1 = FUN_00415efc("NtWow64QueryInformationProcess64",&local_8);
  if ((int)uVar1 < 0) {
    uVar4 = 0x13e;
    DVar2 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR Unable to get NtWow64QueryInformationProcess64\n",
               DVar2,uVar4);
  }
  else {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    uVar1 = (*local_8)();
    if ((uVar1 & 0xc0000000) == 0xc0000000) {
      uVar4 = 0x14b;
      uVar3 = uVar1;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,
                 "WER/CrashAPI/%u:%u: ERROR NtWow64QueryInformationProcess64 failed with 0x%x\n",
                 DVar2,uVar4,uVar3);
    }
    uVar1 = uVar1 | 0x10000000;
  }
  return uVar1;
}



/* Function: FUN_00416028 */

uint __fastcall
FUN_00416028(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 uVar4;
  code *local_8;
  
  local_8 = (code *)0x0;
  uVar1 = FUN_00415efc("NtWow64ReadVirtualMemory64",&local_8);
  if ((int)uVar1 < 0) {
    uVar4 = 0x170;
    DVar2 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR Unable to get NtWow64ReadVirtualMemory64\n",DVar2,
               uVar4);
  }
  else {
    (*(code *)PTR_guard_check_icall_0042e4b0)(param_1,param_3,param_4,param_2,param_5,param_6,0);
    uVar1 = (*local_8)();
    if ((uVar1 & 0xc0000000) == 0xc0000000) {
      uVar4 = 0x17c;
      uVar3 = uVar1;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR NtWow64ReadVirtualMemory64 failed with 0x%x\n",
                 DVar2,uVar4,uVar3);
    }
    uVar1 = uVar1 | 0x10000000;
  }
  return uVar1;
}



/* Function: FUN_004160cf */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __fastcall FUN_004160cf(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_14;
  
  if (param_1 == 0) {
    uVar4 = 0x209;
    DVar1 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR Invalid args\n",DVar1,uVar4);
    uVar2 = 0x80070057;
  }
  else {
    iVar3 = wcsncmp((wchar_t *)(param_1 + 4),L"PEB_SIGNATURE",0xe);
    uVar2 = -(uint)(iVar3 != 0) & 0x80004005;
  }
  ExceptionList = local_14;
  return uVar2;
}



/* Function: FUN_00416164 */

uint __fastcall FUN_00416164(HANDLE param_1,LPVOID param_2)

{
  uint uVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_8;
  
  local_8 = 0;
  if ((param_1 == (HANDLE)0x0) || (param_2 == (LPVOID)0x0)) {
    uVar4 = 0xb7b;
    DVar2 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR Invalid arg\n",DVar2,uVar4);
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = NtQueryInformationProcess(param_1,0x1a,&local_8,4,0);
    if ((int)uVar1 < 0) {
      uVar4 = 0xb88;
      uVar5 = uVar1;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,
                 "WER/CrashAPI/%u:%u: ERROR NtQueryInformationProcess failed with status 0x%x\n",
                 DVar2,uVar4,uVar5);
      uVar1 = uVar1 | 0x10000000;
    }
    else if (local_8 == 0) {
      uVar4 = 0xb90;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR No 32 PEB for process\n",DVar2,uVar4);
      uVar1 = 0x80004005;
    }
    else {
      BVar3 = ReadProcessMemory(param_1,(LPCVOID)(local_8 + 0x230),param_2,4,(SIZE_T *)0x0);
      if (BVar3 == 0) {
        uVar4 = 0xb9a;
        DVar2 = GetCurrentProcessId();
        DbgPrintEx(0x96,0,
                   "WER/CrashAPI/%u:%u: ERROR ReadProcessMemory failed while trying to read Peb32BaseAddress\n"
                   ,DVar2,uVar4);
        DVar2 = GetLastError();
        uVar1 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar1 = DVar2;
        }
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



/* Function: FUN_00416278 */

void __fastcall FUN_00416278(int param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined1 local_3c [8];
  uint local_34;
  int local_30;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar3 = 0xbc1;
    DVar2 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR Invalid arg\n",DVar2,uVar3);
  }
  else {
    uVar1 = FUN_00415f8c(local_3c);
    if ((int)uVar1 < 0) {
      uVar3 = 0xbd4;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,
                 "WER/CrashAPI/%u:%u: ERROR WerpNtWow64QueryInformationProcess64 failed with status 0x%x\n"
                 ,DVar2,uVar3,uVar1);
    }
    else if (local_34 == 0 && local_30 == 0) {
      uVar3 = 0xbdc;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR No 64 bit PEB for process\n",DVar2,uVar3);
    }
    else {
      uVar1 = FUN_00416028(param_1,param_2,local_34 + 0x358,local_30 + (uint)(0xfffffca7 < local_34)
                           ,8,0);
      if ((int)uVar1 < 0) {
        uVar3 = 0xbe8;
        DVar2 = GetCurrentProcessId();
        DbgPrintEx(0x96,0,
                   "WER/CrashAPI/%u:%u: ERROR WerpNtWow64ReadVirtualMemory64  failed while trying to read PebBaseAddress\n"
                   ,DVar2,uVar3);
      }
    }
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00416391 */

DWORD __fastcall FUN_00416391(HANDLE param_1,LPVOID param_2)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined1 local_1c [4];
  int local_18;
  
  if ((param_1 == (HANDLE)0x0) || (param_2 == (LPVOID)0x0)) {
    uVar5 = 0xc1a;
    DVar2 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR Invalid arg\n",DVar2,uVar5);
    DVar2 = 0x80070057;
  }
  else {
    iVar1 = NtQueryInformationProcess(param_1,0,local_1c,0x18,0);
    if (iVar1 < 0) {
      uVar5 = 0xc24;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR NtQueryInformationProcess failed\n",DVar2,uVar5);
      DVar2 = 0x80070006;
    }
    else if (local_18 == 0) {
      uVar5 = 0xc2c;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR No PEB for process\n",DVar2,uVar5);
      DVar2 = 0x80004005;
    }
    else {
      BVar3 = ReadProcessMemory(param_1,(LPCVOID)(local_18 + 0x230),param_2,4,(SIZE_T *)0x0);
      if (BVar3 == 0) {
        uVar5 = 0xc36;
        DVar2 = GetCurrentProcessId();
        DbgPrintEx(0x96,0,
                   "WER/CrashAPI/%u:%u: ERROR ReadProcessMemory failed while trying to read PebBaseAddress\n"
                   ,DVar2,uVar5);
        DVar4 = GetLastError();
        DVar2 = DVar4 & 0xffff | 0x80070000;
        if ((int)DVar4 < 1) {
          DVar2 = DVar4;
        }
      }
      else {
        DVar2 = 0;
      }
    }
  }
  return DVar2;
}



/* Function: FUN_00416497 */

DWORD __fastcall FUN_00416497(HANDLE param_1,LPVOID param_2)

{
  HANDLE hProcess;
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  bool bVar4;
  BOOL *Wow64Process;
  undefined4 uVar5;
  undefined8 local_1c;
  DWORD local_14;
  BOOL local_10;
  BOOL local_c;
  LPCVOID local_8;
  
  local_8 = (LPCVOID)0x0;
  local_1c = 0;
  bVar4 = false;
  local_10 = 0;
  local_c = 0;
  if ((param_1 == (HANDLE)0x0) || (param_2 == (LPVOID)0x0)) {
    uVar5 = 0xc60;
    DVar2 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR Invalid arguments\n",DVar2,uVar5);
    return 0x80070057;
  }
  Wow64Process = &local_c;
  hProcess = GetCurrentProcess();
  BVar1 = IsWow64Process(hProcess,Wow64Process);
  if (BVar1 == 0) {
    local_c = 0;
  }
  if (local_c != 0) {
    BVar1 = IsWow64Process(param_1,&local_10);
    if (BVar1 == 0) {
      local_10 = 0;
    }
    bVar4 = local_10 == 0;
  }
  if (local_10 == 0) {
    if ((local_c != 0) && (bVar4)) {
      local_14 = FUN_00416278((int)param_1,(int)&local_1c);
      if ((int)local_14 < 0) {
        uVar5 = 0xc8f;
        goto LAB_00416543;
      }
      if ((int)local_1c == 0 && local_1c._4_4_ == 0) {
        return 0x80070490;
      }
      goto LAB_00416572;
    }
    local_14 = FUN_00416391(param_1,&local_8);
    if ((int)local_14 < 0) {
      uVar5 = 0xca4;
LAB_00416543:
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR Failed to read the peb from the process\n",DVar2,
                 uVar5);
      return local_14;
    }
  }
  else {
    local_14 = FUN_00416164(param_1,&local_8);
    if ((int)local_14 < 0) {
      uVar5 = 0xcb7;
      goto LAB_00416543;
    }
  }
  if (local_8 == (LPCVOID)0x0) {
    return 0x80070490;
  }
LAB_00416572:
  if ((local_c == 0) || (!bVar4)) {
    BVar1 = ReadProcessMemory(param_1,local_8,param_2,0x968,(SIZE_T *)0x0);
    if (BVar1 == 0) {
      uVar5 = 0xce3;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,
                 "WER/CrashAPI/%u:%u: ERROR ReadProcessMemory failed while trying to read WerRegistrationData\n"
                 ,DVar2,uVar5);
      DVar2 = GetLastError();
      if ((int)DVar2 < 1) {
        return DVar2;
      }
      return DVar2 & 0xffff | 0x80070000;
    }
  }
  else {
    uVar3 = FUN_00416028(param_1,param_2,(int)local_1c,local_1c._4_4_,0x968,0);
    if ((uVar3 & 0xc0000000) == 0xc0000000) {
      uVar5 = 0xcd4;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,
                 "WER/CrashAPI/%u:%u: ERROR WerpNtWow64ReadVirtualMemory64 failed while trying to read PebBaseAddress\n"
                 ,DVar2,uVar5);
      return uVar3 | 0x10000000;
    }
  }
  uVar3 = FUN_004160cf((int)param_2);
  if (-1 < (int)uVar3) {
    *(undefined2 *)((int)param_2 + 0x8a6) = 0;
    return 0;
  }
  uVar5 = 0xcec;
  DVar2 = GetCurrentProcessId();
  DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR WerpValidatePebHeader failed\n",DVar2,uVar5);
  return 0x80004005;
}



/* Function: FUN_004166df */

uint __fastcall FUN_004166df(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_24 [7];
  uint local_8;
  
  uVar1 = 0;
  if (param_1 != 0) {
    puVar4 = local_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_24[0] = 0x20;
    iVar3 = NtQueryInformationProcess(param_1,0,local_24,0x20,0);
    if (iVar3 < 0) {
      uVar5 = 0x1078;
      DVar2 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,
                 "WER/CrashAPI/%u:%u: ERROR NtQueryInformationProcess failed with status: 0x%x\n",
                 DVar2,uVar5,iVar3);
      uVar1 = 0;
    }
    else {
      uVar1 = local_8 & 1;
    }
  }
  return uVar1;
}



/* Function: FUN_00416746 */

void __fastcall FUN_00416746(int param_1)

{
  uint uVar1;
  uint uVar2;
  DWORD DVar3;
  short *psVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined2 local_25c;
  undefined1 local_25a [2];
  short *local_258;
  undefined1 local_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  HANDLE local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_25c = 0;
  local_20 = (HANDLE)0x0;
  memset(local_25a,0,0x212);
  local_1c = 0;
  local_24 = 0;
  local_18 = 0;
  uStack_14 = 0;
  local_10 = 0;
  uStack_c = 0;
  uVar1 = FUN_004166df(param_1);
  uVar2 = NtQueryInformationProcess(param_1,0x2b,&local_25c,0x210,0);
  if ((uVar2 & 0xc0000000) == 0xc0000000) {
    uVar7 = 0x10b1;
    DVar3 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR NtQueryInformationProcess failed 0x%x\n",DVar3,
               uVar7,uVar2);
  }
  else {
    psVar4 = FUN_0040e2e2(local_258);
    if (psVar4 == (short *)0x0) {
      uVar7 = 0x10b9;
      DVar3 = GetCurrentProcessId();
      DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR WerpPathTail returned NULL\n",DVar3,uVar7);
    }
    else {
      local_3c = 0x18;
      local_38 = 0;
      local_34 = &DAT_004013cc;
      local_30 = 0x40;
      if (uVar1 == 0) {
        local_34 = &DAT_004013d4;
      }
      local_2c = 0;
      puVar8 = &local_3c;
      local_28 = 0;
      uVar7 = 1;
      puVar5 = FUN_0040ffb8(&local_20);
      iVar6 = NtOpenKey(puVar5,uVar7,puVar8);
      if (-1 < iVar6) {
        uVar1 = RtlInitUnicodeStringEx(local_44,psVar4);
        if ((uVar1 & 0xc0000000) == 0xc0000000) {
          uVar7 = 0x10d3;
          DVar3 = GetCurrentProcessId();
          DbgPrintEx(0x96,0,"WER/CrashAPI/%u:%u: ERROR RtlInitUnicodeStringEx returned 0x%x\n",DVar3
                     ,uVar7,uVar1);
        }
        else {
          NtQueryValueKey(local_20,local_44,2,&local_1c,0x14,&local_24);
        }
      }
    }
  }
  if (local_20 != (HANDLE)0xffffffff && local_20 != (HANDLE)0x0) {
    CloseHandle(local_20);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004168e7 */

uint __fastcall FUN_004168e7(int param_1,uint *param_2)

{
  LPVOID _Dst;
  undefined4 *puVar1;
  undefined *puVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  HANDLE hObject;
  uint **ppuVar7;
  undefined4 uVar8;
  uint uVar9;
  uint local_284 [148];
  uint *local_34 [7];
  int local_18;
  uint local_14;
  undefined4 local_10;
  uint *local_c;
  HANDLE local_8;
  
  local_8 = (HANDLE)0x0;
  local_10 = 0;
  ppuVar7 = local_34;
  local_18 = param_1;
  local_c = param_2;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppuVar7 = (uint *)0x0;
    ppuVar7 = ppuVar7 + 1;
  }
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    uVar5 = 0x80070057;
    hObject = (HANDLE)0x0;
    goto LAB_00416c7f;
  }
  memset(local_284,0,0x250);
  puVar6 = local_284;
  for (iVar4 = 0x94; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_2 = *puVar6;
    puVar6 = puVar6 + 1;
    param_2 = param_2 + 1;
  }
  _Dst = VirtualAlloc((LPVOID)0x0,0x25a,0x1000,4);
  if (_Dst == (LPVOID)0x0) {
    uVar5 = 0x8007000e;
  }
  else {
    local_14 = FUN_004166df(local_18);
    local_34[0] = (uint *)0x18;
    local_34[2] = (uint *)&DAT_004013e4;
    local_34[1] = (uint *)0x0;
    if (local_14 == 0) {
      local_34[2] = (uint *)&DAT_004013ec;
    }
    local_34[3] = (uint *)0x40;
    ppuVar7 = local_34;
    uVar8 = 1;
    local_34[4] = (uint *)0x0;
    local_34[5] = (uint *)0x0;
    puVar1 = FUN_0040ffb8(&local_8);
    uVar5 = NtOpenKey(puVar1,uVar8,ppuVar7);
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 | 0x10000000;
    }
    else {
      memset(_Dst,0,0x25a);
      puVar2 = &DAT_004013bc;
      if (local_14 == 0) {
        puVar2 = &DAT_004013c4;
      }
      iVar4 = NtQueryValueKey(local_8,puVar2,2,_Dst,0x25a,&local_10);
      if ((iVar4 < 0) || (*(int *)((int)_Dst + 4) != 1)) {
        uVar5 = 0x80070490;
      }
      else {
        local_34[6] = local_c + 1;
        uVar5 = FUN_0040a406((short *)local_34[6],0x125,(int)_Dst + 0xc);
        puVar6 = local_c;
        if ((int)uVar5 < 0) {
          uVar8 = 0x1160;
          uVar9 = uVar5;
          DVar3 = GetCurrentProcessId();
          DbgPrintEx(0x96,0,
                     "WER/CrashAPI/%u:%u: ERROR Stringcchcopy failed while copying the debugger path 0x%x\n"
                     ,DVar3,uVar8,uVar9);
        }
        else {
          uVar5 = *local_c;
          *local_c = uVar5 | 1;
          if (local_14 != 0) {
            *local_c = uVar5 | 0x7d;
            memset(_Dst,0,0x25a);
            iVar4 = NtQueryValueKey(local_8,&DAT_004013b4,2,_Dst,0x25a,&local_10);
            if ((-1 < iVar4) && (*(int *)((int)_Dst + 4) == 4)) {
              uVar5 = 0;
              if (*(int *)((int)_Dst + 0xc) == 0) {
                uVar5 = 4;
              }
              *puVar6 = uVar5 | *puVar6 & 0xfffffffb;
            }
            if ((*puVar6 & 4) != 0) {
              memset(_Dst,0,0x25a);
              iVar4 = NtQueryValueKey(local_8,&DAT_004013dc,2,_Dst,0x25a,&local_10);
              if ((-1 < iVar4) && (*(int *)((int)_Dst + 4) == 4)) {
                uVar5 = *(uint *)((int)_Dst + 0xc);
                if (uVar5 < 5) {
                  if (((uVar5 == 4) || (uVar5 == 0)) ||
                     ((uVar5 == 1 || ((uVar5 == 2 || (uVar5 == 3)))))) {
LAB_00416b03:
                    *puVar6 = *puVar6 ^ (uVar5 << 3 ^ *puVar6) & 0x78;
                  }
                  else {
LAB_00416b7c:
                    *puVar6 = *puVar6 | 0x78;
                  }
                }
                else {
                  if (((uVar5 == 5) || (uVar5 == 6)) || (uVar5 == 7)) goto LAB_00416b03;
                  if (uVar5 != 0x80000000) goto LAB_00416b7c;
                  *puVar6 = *puVar6 & 0xfffffff7 | 0x70;
                }
              }
            }
          }
          memset(_Dst,0,0x25a);
          iVar4 = NtQueryValueKey(local_8,&DAT_004013ac,2,_Dst,0x25a,&local_10);
          if ((iVar4 < 0) ||
             ((((*(int *)((int)_Dst + 4) != 1 || (*(short *)((int)_Dst + 0xc) != 0x31)) &&
               ((*(int *)((int)_Dst + 4) != 4 || (*(int *)((int)_Dst + 0xc) == 0)))) ||
              (iVar4 = FUN_00416746(local_18), iVar4 != 0)))) {
            uVar5 = 0;
          }
          else {
            uVar5 = 2;
          }
          uVar9 = *puVar6;
          *local_c = uVar9 & 0xfffffffd | uVar5;
          DVar3 = GetCurrentProcessId();
          DbgPrintEx(0x96,2,"WER/CrashAPI/%u:%u: TRACE WERP_DEBUGGER_INFO.Available: %u\n",DVar3,
                     0x11c5,uVar9 & 1);
          uVar5 = *local_c;
          DVar3 = GetCurrentProcessId();
          DbgPrintEx(0x96,2,"WER/CrashAPI/%u:%u: TRACE WERP_DEBUGGER_INFO.AutoEnabled: %u\n",DVar3,
                     0x11c6,uVar5 >> 1 & 1);
          uVar5 = *local_c;
          DVar3 = GetCurrentProcessId();
          DbgPrintEx(0x96,2,"WER/CrashAPI/%u:%u: TRACE WERP_DEBUGGER_INFO.Protected: %u\n",DVar3,
                     0x11c7,uVar5 >> 2 & 1);
          uVar5 = *local_c;
          DVar3 = GetCurrentProcessId();
          DbgPrintEx(0x96,2,"WER/CrashAPI/%u:%u: TRACE WERP_DEBUGGER_INFO.ProtectionLevel: %08X\n",
                     DVar3,0x11c8,uVar5 >> 3 & 0xf);
          uVar8 = 0x11c9;
          puVar6 = local_34[6];
          DVar3 = GetCurrentProcessId();
          DbgPrintEx(0x96,2,"WER/CrashAPI/%u:%u: TRACE WERP_DEBUGGER_INFO.Debugger: %S\n",DVar3,
                     uVar8,puVar6);
          uVar5 = 0;
        }
      }
    }
  }
  hObject = local_8;
  if (_Dst != (LPVOID)0x0) {
    VirtualFree(_Dst,0,0x8000);
    hObject = local_8;
  }
LAB_00416c7f:
  if (1 < (int)hObject + 1U) {
    CloseHandle(hObject);
  }
  return uVar5;
}



/* Function: FUN_00416c9b */

void __fastcall
FUN_00416c9b(HANDLE param_1,HANDLE param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  byte bVar1;
  HANDLE pvVar2;
  HANDLE hSourceProcessHandle;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  uint uVar6;
  DWORD DVar7;
  LPWSTR pWVar8;
  undefined4 *puVar9;
  LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
  LPWSTR lpCommandLine;
  char *pcVar10;
  undefined4 uVar11;
  _STARTUPINFOW local_420;
  LPPROC_THREAD_ATTRIBUTE_LIST local_3dc;
  _PROCESS_INFORMATION local_3d4;
  _SECURITY_ATTRIBUTES local_3c4;
  HANDLE local_3b8;
  HANDLE local_3b4;
  uint local_3b0;
  undefined4 *local_3ac;
  int local_3a8;
  int local_3a4;
  DWORD local_3a0;
  undefined4 *local_39c;
  SIZE_T local_398;
  HANDLE local_394;
  DWORD local_390;
  undefined4 *local_38c;
  ULONG_PTR local_388;
  LPWSTR local_384;
  LPPROC_THREAD_ATTRIBUTE_LIST local_380;
  HANDLE local_37c;
  HANDLE local_378;
  uint *local_374;
  LPHANDLE local_370;
  uint local_36c;
  undefined4 *local_368;
  byte local_361;
  undefined4 local_360;
  uint local_35c;
  DWORD local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 *local_348;
  undefined4 local_344;
  undefined4 *local_340;
  undefined4 local_33c;
  undefined4 local_338 [20];
  undefined4 local_2e8 [180];
  ushort local_18 [6];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_3ac = param_3;
  local_39c = param_4;
  local_374 = param_5;
  local_37c = (HANDLE)0x0;
  local_420.cb = 0;
  local_394 = param_2;
  local_378 = param_1;
  memset(&local_420.lpReserved,0,0x44);
  local_36c = 0xffffffff;
  local_3d4.hProcess = (HANDLE)0x0;
  lpAttributeList = (LPPROC_THREAD_ATTRIBUTE_LIST)0x0;
  local_388 = 0;
  local_380 = (LPPROC_THREAD_ATTRIBUTE_LIST)0x0;
  local_3a4 = 0;
  local_3d4.hThread = (HANDLE)0x0;
  local_3a8 = 0;
  local_38c = (undefined4 *)0x0;
  local_3d4.dwProcessId = 0;
  local_368 = (undefined4 *)0x0;
  local_3d4.dwThreadId = 0;
  lpCommandLine = (LPWSTR)0x0;
  local_3a0 = GetProcessId(param_1);
  if (local_3a0 == 0) {
    GetLastError();
    goto LAB_00417409;
  }
  local_390 = GetCurrentProcessId();
  lpCommandLine = (LPWSTR)VirtualAlloc((LPVOID)0x0,0x4c0,0x1000,4);
  local_384 = lpCommandLine;
  if (lpCommandLine == (LPWSTR)0x0) goto LAB_00417409;
  local_3c4.lpSecurityDescriptor = (LPVOID)0x0;
  local_3c4.nLength = 0xc;
  local_3c4.bInheritHandle = 1;
  local_370 = (LPHANDLE)FUN_0040ffb8(&local_37c);
  pvVar2 = GetCurrentProcess();
  hSourceProcessHandle = GetCurrentProcess();
  DuplicateHandle(hSourceProcessHandle,local_394,pvVar2,local_370,0,1,2);
  local_370 = (LPHANDLE)CreateEventW(&local_3c4,1,0,(LPCWSTR)0x0);
  puVar9 = local_3ac;
  local_3b0 = (int)local_370 + 1;
  if (((1 < local_3b0) && (local_3ac != (undefined4 *)0x0)) &&
     (iVar3 = NtQuerySystemInformation(1,local_18,0xc,0), -1 < iVar3)) {
    if (local_394 == (HANDLE)0x0) {
      local_358 = 0;
    }
    else {
      local_358 = GetThreadId(local_394);
    }
    local_35c = (uint)local_18[0];
    local_350 = puVar9[3];
    local_360 = 0x28;
    local_354 = 0;
    local_34c = 0;
    if (local_3a0 == local_390) {
      local_340 = local_39c;
      local_344 = 0;
      local_33c = 0;
      puVar5 = &local_360;
      local_348 = puVar9;
LAB_00416f57:
      local_368 = puVar5;
    }
    else {
      local_38c = (undefined4 *)VirtualAllocEx(local_378,(LPVOID)0x0,0x348,0x1000,4);
      if (local_38c != (undefined4 *)0x0) {
        puVar5 = local_338;
        for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar9 = local_39c;
        puVar5 = local_2e8;
        for (iVar3 = 0xb3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar5 = puVar5 + 1;
        }
        local_344 = 0;
        local_33c = 0;
        local_398 = (int)local_38c - (int)&local_360;
        local_348 = (undefined4 *)((int)local_338 + local_398);
        local_340 = (undefined4 *)((int)local_2e8 + local_398);
        BVar4 = WriteProcessMemory(local_378,local_38c,&local_360,0x348,&local_398);
        lpAttributeList = local_380;
        lpCommandLine = local_384;
        if ((BVar4 != 0) && (puVar5 = local_38c, local_398 == 0x348)) goto LAB_00416f57;
      }
    }
  }
  pWVar8 = (LPWSTR)(local_374 + 1);
  if ((*pWVar8 == L'\"') || (iVar3 = RtlDetermineDosPathNameType_U(pWVar8), iVar3 != 5)) {
LAB_00416ffd:
    uVar6 = FUN_004095e6(lpCommandLine,0x13b,pWVar8);
    if ((int)uVar6 < 0) {
      uVar11 = 0x12f7;
      DVar7 = GetCurrentProcessId();
      pcVar10 = 
      "WER/CrashAPI/%u:%u: ERROR StringCchPrintf failed while printng the debugger commandline with 0x%x\n"
      ;
      goto LAB_00416fde;
    }
    local_3a8 = RtlGetCurrentTransaction();
    RtlSetCurrentTransaction(0);
    local_420.cb = 0x48;
    local_420.lpDesktop = L"";
    uVar6 = *local_374 & 4;
    local_368 = (undefined4 *)(uVar6 << 0x10);
    if (uVar6 != 0) {
      uVar6 = *local_374 >> 3 & 0xf;
      if (uVar6 < 6) {
        if ((((uVar6 == 5) || (uVar6 == 0)) || (uVar6 == 1)) || ((uVar6 == 2 || (uVar6 == 3)))) {
LAB_004170a2:
          local_36c = uVar6;
        }
      }
      else {
        if ((uVar6 == 6) || (uVar6 == 7)) goto LAB_004170a2;
        if (uVar6 == 0xe) {
          local_361 = 0;
          iVar3 = NtQueryInformationProcess(local_378,0x3d,&local_361,1,0);
          bVar1 = local_361;
          if (iVar3 < 0) {
            uVar11 = 0x1327;
            DVar7 = GetCurrentProcessId();
            DbgPrintEx(0x96,1,
                       "WER/CrashAPI/%u:%u: WARNING NtQueryInformationProcess/ProcessProtectionInformation failed: NTSTATUS %08X\n"
                       ,DVar7,uVar11,iVar3);
          }
          else {
            DVar7 = GetCurrentProcessId();
            DbgPrintEx(0x96,2,
                       "WER/CrashAPI/%u:%u: TRACE Faulting process protection/signer: %02x/%02x\n",
                       DVar7,0x132c,bVar1 & 7,bVar1 >> 4);
            if (((local_361 & 7) < 3) && ((local_361 & 0xf0) < 0x90)) {
              local_36c = *(uint *)(&DAT_00404078 +
                                   ((local_361 & 7) * 9 + (uint)(local_361 >> 4)) * 4);
            }
            else {
              local_36c = 0xffffffff;
            }
          }
        }
      }
    }
    uVar6 = local_36c;
    local_390 = *local_374 >> 3 & 0xf;
    DVar7 = GetCurrentProcessId();
    DbgPrintEx(0x96,2,"WER/CrashAPI/%u:%u: TRACE Mapped protection level %02X -> %08X\n",DVar7,
               0x133a,local_390,uVar6);
    puVar9 = local_368;
    if (((*local_374 & 4) != 0) && (local_36c != 0xffffffff)) {
      BVar4 = InitializeProcThreadAttributeList((LPPROC_THREAD_ATTRIBUTE_LIST)0x0,1,0,&local_388);
      if ((BVar4 == 0) && (DVar7 = GetLastError(), DVar7 != 0x7a)) {
        DVar7 = GetLastError();
        uVar6 = DVar7 & 0xffff | 0x80070000;
        if ((int)DVar7 < 1) {
          uVar6 = DVar7;
        }
        if (-1 < (int)uVar6) {
          uVar6 = 0x80004005;
        }
        uVar11 = 0x1349;
LAB_00417152:
        DVar7 = GetCurrentProcessId();
        pcVar10 = "WER/CrashAPI/%u:%u: ERROR InitializeProcThreadAttributeList failed: 0x%x\n";
      }
      else {
        lpAttributeList = (LPPROC_THREAD_ATTRIBUTE_LIST)VirtualAlloc((LPVOID)0x0,local_388,0x1000,4)
        ;
        if (lpAttributeList == (LPPROC_THREAD_ATTRIBUTE_LIST)0x0) {
          uVar6 = 0x8007000e;
          uVar11 = 0x1356;
          DVar7 = GetCurrentProcessId();
          pcVar10 = "WER/CrashAPI/%u:%u: ERROR Failed to allocate attribute list: 0x%x\n";
        }
        else {
          BVar4 = InitializeProcThreadAttributeList(lpAttributeList,1,0,&local_388);
          if (BVar4 == 0) {
            DVar7 = GetLastError();
            uVar6 = DVar7 & 0xffff | 0x80070000;
            if ((int)DVar7 < 1) {
              uVar6 = DVar7;
            }
            if (-1 < (int)uVar6) {
              uVar6 = 0x80004005;
            }
            uVar11 = 0x1362;
            goto LAB_00417152;
          }
          local_3a4 = 1;
          BVar4 = UpdateProcThreadAttribute
                            (lpAttributeList,0,0x2000b,&local_36c,4,(PVOID)0x0,(PSIZE_T)0x0);
          if (BVar4 != 0) {
            puVar9 = (undefined4 *)((uint)local_368 | 0x80000);
            local_3dc = lpAttributeList;
            goto LAB_00417320;
          }
          DVar7 = GetLastError();
          uVar6 = DVar7 & 0xffff | 0x80070000;
          if ((int)DVar7 < 1) {
            uVar6 = DVar7;
          }
          if (-1 < (int)uVar6) {
            uVar6 = 0x80004005;
          }
          uVar11 = 0x1372;
          DVar7 = GetCurrentProcessId();
          pcVar10 = "WER/CrashAPI/%u:%u: ERROR UpdateProcThreadAttribute failed: 0x%x\n";
        }
      }
      goto LAB_00416fde;
    }
LAB_00417320:
    FUN_0040a65a((int *)&local_3d4);
    BVar4 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,1,(DWORD)puVar9,(LPVOID)0x0,(LPCWSTR)0x0,
                           &local_420,&local_3d4);
    if (BVar4 == 0) {
      DVar7 = GetLastError();
      uVar6 = DVar7 & 0xffff | 0x80070000;
      if ((int)DVar7 < 1) {
        uVar6 = DVar7;
      }
      if (-1 < (int)uVar6) {
        uVar6 = 0x80004005;
      }
      uVar11 = 0x138b;
      DVar7 = GetCurrentProcessId();
      pcVar10 = "WER/CrashAPI/%u:%u: ERROR Debugger spawn failed: 0x%x\n";
      goto LAB_00416fde;
    }
    if (1 < local_3b0) {
      local_3b8 = local_370;
      local_3b4 = local_3d4.hProcess;
      do {
        iVar3 = NtWaitForMultipleObjects(2,&local_3b8,1,1,0);
        if (iVar3 == 0) break;
      } while (((iVar3 == 0xc0) || (iVar3 == 0x101)) || (iVar3 != 1));
    }
  }
  else {
    RtlGetNtSystemRoot(pWVar8);
    uVar6 = FUN_004095e6(lpCommandLine + 0x13b,0x125,L"%s\\system32\\%s");
    if (-1 < (int)uVar6) {
      pWVar8 = lpCommandLine + 0x13b;
      goto LAB_00416ffd;
    }
    uVar11 = 0x12e2;
    DVar7 = GetCurrentProcessId();
    pcVar10 = 
    "WER/CrashAPI/%u:%u: ERROR StringCchPrintf failed while printing the debugger path with 0x%x\n";
LAB_00416fde:
    DbgPrintEx(0x96,0,pcVar10,DVar7,uVar11,uVar6);
  }
  if (local_38c != (undefined4 *)0x0) {
    VirtualFreeEx(local_378,local_38c,0,0x8000);
  }
  if (1 < (int)local_370 + 1U) {
    CloseHandle(local_370);
  }
LAB_00417409:
  pvVar2 = local_37c;
  local_37c = (HANDLE)0x0;
  if (1 < (int)pvVar2 + 1U) {
    CloseHandle(pvVar2);
  }
  if ((local_3a4 != 0) && (lpAttributeList != (LPPROC_THREAD_ATTRIBUTE_LIST)0x0)) {
    DeleteProcThreadAttributeList(lpAttributeList);
  }
  if (local_3a8 != 0) {
    RtlSetCurrentTransaction(local_3a8);
  }
  if (lpCommandLine != (LPWSTR)0x0) {
    VirtualFree(lpCommandLine,0,0x8000);
  }
  if (lpAttributeList != (LPPROC_THREAD_ATTRIBUTE_LIST)0x0) {
    VirtualFree(lpAttributeList,0,0x8000);
  }
  FUN_0040a65a((int *)&local_3d4);
  if (1 < (int)local_37c + 1U) {
    CloseHandle(local_37c);
  }
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004174b0 */

void __fastcall FUN_004174b0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  HANDLE hObject;
  WCHAR local_88 [64];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  pvVar2 = (HANDLE)*param_2;
  hObject = (HANDLE)0x0;
  *param_2 = 0;
  if (1 < (int)pvVar2 + 1U) {
    CloseHandle(pvVar2);
  }
  pvVar2 = (HANDLE)*param_3;
  *param_3 = 0;
  if (1 < (int)pvVar2 + 1U) {
    CloseHandle(pvVar2);
  }
  iVar1 = FUN_004095e6(local_88,0x40,L"Local\\WERReportingForProcessComplete%u");
  if (-1 < iVar1) {
    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,local_88);
    FUN_004093d1(param_3,pvVar2);
    if (*param_3 + 1U < 2) {
LAB_0041758c:
      GetLastError();
    }
    else {
      iVar1 = FUN_004095e6(local_88,0x40,L"Local\\WERReportingForProcess%u");
      if (-1 < iVar1) {
        SetLastError(0);
        hObject = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,local_88);
        if ((int)hObject + 1U < 2) goto LAB_0041758c;
        DVar3 = GetLastError();
        if (DVar3 != 0xb7) {
          ResetEvent((HANDLE)*param_3);
          FUN_004093d1(param_2,hObject);
          goto LAB_004175db;
        }
      }
    }
  }
  if (1 < (int)hObject + 1U) {
    CloseHandle(hObject);
  }
LAB_004175db:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004175f4 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004175f4(HANDLE param_1,int *param_2)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_12e4 [603];
  HANDLE local_978;
  undefined4 local_974 [574];
  int local_7c;
  int local_78;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_978 = param_1;
  if ((param_1 == (HANDLE)0x0) || (param_2 == (int *)0x0)) {
    uVar5 = 0x15ac;
    DVar1 = GetCurrentProcessId();
    DbgPrintEx(0x96,0,
               "WER/CrashAPI/%u:%u: ERROR Invalid args in call to WerpGetRuntimeDllsListStart.\n",
               DVar1,uVar5);
  }
  else {
    *param_2 = 0;
    memset(local_12e4,0,0x968);
    puVar3 = local_12e4;
    puVar4 = local_974;
    for (iVar2 = 0x25a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    DVar1 = FUN_00416497(local_978,local_974);
    if ((-1 < (int)DVar1) && (local_7c != 0 || local_78 != 0)) {
      *param_2 = local_7c;
    }
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004176b4 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_004176b4(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (this == (void *)0x0) {
    FUN_00428022();
  }
  iVar1 = param_1;
                    /* WARNING: Load size is inaccurate */
  if (*this < 0xe) {
    if (param_1 != 0) {
      param_1 = 0;
      FUN_00418192((void *)((int)this + (*this + 1) * 4),iVar1);
                    /* WARNING: Load size is inaccurate */
      *(int *)this = *this + 1;
      goto LAB_00417726;
    }
    uVar2 = 0x8007000e;
  }
  else {
    FUN_00428022();
    uVar2 = 0x8007050c;
  }
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_00407519(10,&DAT_004045e0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
LAB_00417726:
  FUN_00418120(&param_1);
  return uVar2;
}



/* Function: FUN_0041773e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_0041773e(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  SubAllocator *pSVar2;
  undefined4 *this;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  if (param_2 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xb,&DAT_004045e0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar6 = 0x80070057;
  }
  else {
    pSVar2 = (SubAllocator *)*param_2;
    *param_2 = 0;
    if (pSVar2 != (SubAllocator *)0x0) {
      FUN_00417ff0(pSVar2);
    }
    this = (undefined4 *)FUN_0042a4d8(0x3c);
    if (this == (undefined4 *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      *this = 0;
      _eh_vector_constructor_iterator_(this + 1,4,0xe,FUN_004181d0,FUN_00418120);
    }
    if (this == (undefined4 *)0x0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0xd,&DAT_004045e0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      uVar6 = 0x8007000e;
    }
    else {
      iVar3 = o__wcsicmp(L"APPCRASH",L"APPCRASH");
      if ((iVar3 == 0) || (iVar3 = o__wcsicmp(L"APPCRASH",L"MoAppCrash"), iVar3 == 0)) {
        piVar4 = FUN_004181dc((undefined4 *)&stack0xffffffec);
        iVar3 = *piVar4;
        *piVar4 = 0;
        FUN_004176b4(this,iVar3);
        FUN_00418120((int *)&stack0xffffffec);
        puVar5 = (undefined4 *)FUN_0042a4d8(0x184);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_00418701(puVar5);
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
        puVar5 = (undefined4 *)FUN_0042a4d8(0x6a8);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_0041907c(puVar5);
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
        piVar4 = FUN_00418242((undefined4 *)&stack0xffffffec);
        iVar3 = *piVar4;
        *piVar4 = 0;
        FUN_004176b4(this,iVar3);
        FUN_00418120((int *)&stack0xffffffec);
        puVar5 = (undefined4 *)FUN_0042a4d8(0x6f8);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_0041c6e5(puVar5);
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
        piVar4 = FUN_00418289((undefined4 *)&stack0xffffffec);
        iVar3 = *piVar4;
        *piVar4 = 0;
        FUN_004176b4(this,iVar3);
        FUN_00418120((int *)&stack0xffffffec);
        puVar5 = (undefined4 *)FUN_0042a4d8(4);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = &PTR_FUN_004011bc;
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
        puVar5 = (undefined4 *)FUN_0042a4d8(4);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = &PTR_FUN_004011d4;
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
        puVar5 = (undefined4 *)FUN_0042a4d8(4);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = &PTR_FUN_004011ec;
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
        puVar5 = (undefined4 *)FUN_0042a4d8(0x8c);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_0041f530(puVar5);
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
        puVar5 = (undefined4 *)FUN_0042a4d8(4);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = &PTR_FUN_0040121c;
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
        piVar4 = FUN_004182d0((undefined4 *)&stack0xffffffec);
        iVar3 = *piVar4;
        *piVar4 = 0;
        FUN_004176b4(this,iVar3);
        FUN_00418120((int *)&stack0xffffffec);
        puVar5 = (undefined4 *)FUN_0042a4d8(0x2c);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar1 = puVar5 + 3;
          *puVar5 = &PTR_FUN_0040124c;
          puVar5[1] = puVar1;
          puVar5[2] = puVar1;
          *(undefined2 *)puVar1 = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          puVar5[10] = 0;
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
      }
      iVar3 = o__wcsicmp();
      if (iVar3 == 0) {
        puVar5 = (undefined4 *)FUN_0042a4d8(0x1c);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5[2] = 0xffffffff;
          puVar5[3] = 0xffffffff;
          puVar5[4] = 0xffffffff;
          *puVar5 = &PTR_FUN_00401264;
          puVar5[1] = 0;
          puVar5[5] = 0;
        }
        FUN_004176b4(this,(int)puVar5);
        FUN_00418120((int *)&stack0xffffffec);
        piVar4 = FUN_004182d0((undefined4 *)&stack0xffffffec);
        iVar3 = *piVar4;
        *piVar4 = 0;
        FUN_004176b4(this,iVar3);
        FUN_00418120((int *)&stack0xffffffec);
      }
      iVar3 = o__wcsicmp();
      if ((((iVar3 == 0) || (iVar3 = o__wcsicmp(), iVar3 == 0)) ||
          (iVar3 = o__wcsicmp(), iVar3 == 0)) || (iVar3 = o__wcsicmp(), iVar3 == 0)) {
        piVar4 = FUN_00418242((undefined4 *)&stack0xffffffec);
        iVar3 = *piVar4;
        *piVar4 = 0;
        FUN_004176b4(this,iVar3);
        FUN_00418120((int *)&stack0xffffffec);
        piVar4 = FUN_00418289((undefined4 *)&stack0xffffffec);
        iVar3 = *piVar4;
        *piVar4 = 0;
        FUN_004176b4(this,iVar3);
        FUN_00418120((int *)&stack0xffffffec);
        piVar4 = FUN_004182d0((undefined4 *)&stack0xffffffec);
        iVar3 = *piVar4;
        *piVar4 = 0;
        FUN_004176b4(this,iVar3);
        FUN_00418120((int *)&stack0xffffffec);
      }
      piVar4 = FUN_00418317((undefined4 *)&stack0xffffffec);
      iVar3 = *piVar4;
      *piVar4 = 0;
      FUN_004176b4(this,iVar3);
      FUN_00418120((int *)&stack0xffffffec);
      pSVar2 = (SubAllocator *)*param_2;
      *param_2 = this;
      if (pSVar2 != (SubAllocator *)0x0) {
        FUN_00417ff0(pSVar2);
      }
    }
  }
  return uVar6;
}



/* Function: FUN_00417cba */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_00417cba(uint *param_1,int param_2)

{
  uint *this;
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_24;
  void *local_14;
  
  if ((param_1 == (uint *)0x0) || (param_2 == 0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xe,&DAT_004045e0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar3 = 0x80070057;
  }
  else {
    for (local_24 = 0; local_24 < *param_1; local_24 = local_24 + 1) {
      this = param_1 + local_24 + 1;
      pcVar1 = (code *)**(undefined4 **)*this;
      (*(code *)PTR_guard_check_icall_0042e4b0)(param_2,0,0x400000);
      iVar2 = (*pcVar1)();
      if (iVar2 < 0) {
        pcVar1 = *(code **)(*(int *)*this + 0x10);
        (*(code *)PTR_guard_check_icall_0042e4b0)();
        (*pcVar1)();
        FUN_00418192(this,0);
      }
    }
    uVar3 = 0;
  }
  ExceptionList = local_14;
  return uVar3;
}



/* Function: FUN_00417db1 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_00417db1(uint *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_b4 [34];
  uint local_2c;
  int *local_28;
  int local_24;
  uint *local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0042c478;
  uStack_c = 0x417dc0;
  local_24 = param_2;
  local_20 = param_1;
  if (((param_2 == 0) || (param_3 == (undefined4 *)0x0)) || (param_4 == (int *)0x0)) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      ExceptionList = local_14;
      return 0x80070057;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      ExceptionList = local_14;
      return 0x80070057;
    }
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar7 = 0x10;
  }
  else {
    *param_4 = 0;
    memset(local_b4,0,0x80);
    puVar4 = local_b4;
    puVar5 = param_3;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    if (local_20 != (uint *)0x0) {
      local_8 = (undefined *)0x0;
      uVar6 = 0;
      puVar2 = local_20;
      do {
        if (*puVar2 <= uVar6) {
          ExceptionList = local_14;
          return 0;
        }
        local_28 = (int *)puVar2[uVar6 + 1];
        if (local_28 != (int *)0x0) {
          pcVar1 = *(code **)(*local_28 + 4);
          local_2c = uVar6;
          (*(code *)PTR_guard_check_icall_0042e4b0)(local_24,param_3,param_4);
          (*pcVar1)();
          puVar2 = local_20;
          if (*param_4 != 0) {
            ExceptionList = local_14;
            return 0;
          }
        }
        uVar6 = uVar6 + 1;
      } while( true );
    }
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      ExceptionList = local_14;
      return 0x80070057;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      ExceptionList = local_14;
      return 0x80070057;
    }
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar7 = 0x11;
  }
  FUN_004074f5(uVar7,&DAT_004045e0,uVar8,uVar9);
  ExceptionList = local_14;
  return 0x80070057;
}



/* Function: FUN_00417eec */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_00417eec(uint *param_1,int param_2,int param_3,int *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_24;
  int local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0042c498;
  uStack_c = 0x417ef8;
  local_20 = 0;
  if (((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x14,&DAT_004045e0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar2 = 0x80070057;
  }
  else {
    local_8 = (undefined *)0x0;
    for (uVar3 = 0; uVar3 < *param_1; uVar3 = uVar3 + 1) {
      if ((int *)param_1[uVar3 + 1] != (int *)0x0) {
        local_24 = 0;
        pcVar1 = *(code **)(*(int *)param_1[uVar3 + 1] + 8);
        (*(code *)PTR_guard_check_icall_0042e4b0)(param_2,param_3,&local_24);
        (*pcVar1)();
        if ((local_20 == 0) && (local_24 == 0)) {
          local_20 = 0;
        }
        else {
          local_20 = 1;
        }
      }
    }
    if (param_4 != (int *)0x0) {
      *param_4 = local_20;
    }
    uVar2 = 0;
  }
  ExceptionList = local_14;
  return uVar2;
}



/* Function: FUN_00417ff0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_00417ff0(SubAllocator *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_14;
  
  if (param_1 == (SubAllocator *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x16,&DAT_004045e0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar3 = 0x80070057;
  }
  else {
    for (uVar4 = 0; uVar4 < *(uint *)param_1; uVar4 = uVar4 + 1) {
      piVar1 = *(int **)(param_1 + (uVar4 + 1) * 4);
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 0x10);
        (*(code *)PTR_guard_check_icall_0042e4b0)();
        (*pcVar2)();
        FUN_00418192(param_1 + (uVar4 + 1) * 4,0);
      }
    }
    *(undefined4 *)param_1 = 0;
    Concurrency::details::SubAllocator::~SubAllocator(param_1);
    FUN_0042a48f(param_1);
    uVar3 = 0;
  }
  ExceptionList = local_14;
  return uVar3;
}



/* Function: ~SubAllocator */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::SubAllocator::~SubAllocator(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall Concurrency::details::SubAllocator::~SubAllocator(SubAllocator *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b5a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _eh_vector_destructor_iterator_(this + 4,4,0xe,FUN_00418120);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00418120 */

void __fastcall FUN_00418120(int *param_1)

{
  code *pcVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)*param_1 + 0x14);
    (*(code *)PTR_guard_check_icall_0042e4b0)(1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00418146 */

void __fastcall FUN_00418146(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0042b8f5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*param_1 != 0) {
    FUN_00417ff0((SubAllocator *)*param_1);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00418192 */

void __thiscall FUN_00418192(void *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  
                    /* WARNING: Load size is inaccurate */
  piVar1 = *this;
  *(int *)this = param_1;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x14);
    (*(code *)PTR_guard_check_icall_0042e4b0)(1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_004181d0 */

undefined4 * __fastcall FUN_004181d0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* Function: FUN_004181dc */

undefined4 * __fastcall FUN_004181dc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_0042a4d8(0x48);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_00401114;
    puVar1 = puVar3 + 4;
    *(undefined2 *)puVar1 = 0;
    puVar2 = puVar3 + 8;
    puVar3[2] = puVar1;
    puVar3[3] = puVar1;
    puVar3[1] = 0;
    puVar3[6] = puVar2;
    puVar3[7] = puVar2;
    *(undefined2 *)puVar2 = 0;
    puVar1 = puVar3 + 0xc;
    puVar3[10] = puVar1;
    puVar3[0xb] = puVar1;
    *(undefined2 *)puVar1 = 0;
    puVar1 = puVar3 + 0x10;
    puVar3[0xe] = puVar1;
    puVar3[0xf] = puVar1;
    *(undefined2 *)puVar1 = 0;
  }
  *param_1 = puVar3;
  return param_1;
}



/* Function: FUN_00418242 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_00418242(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)FUN_0042a4d8(0x2edc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0041a58a(puVar1);
  }
  *param_1 = puVar2;
  return param_1;
}



/* Function: FUN_00418289 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_00418289(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)FUN_0042a4d8(0x474);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0041d8bd(puVar1);
  }
  *param_1 = puVar2;
  return param_1;
}



/* Function: FUN_004182d0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_004182d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)FUN_0042a4d8(0xad8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004210d8(puVar1);
  }
  *param_1 = puVar2;
  return param_1;
}



/* Function: FUN_00418317 */

undefined4 * __fastcall FUN_00418317(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_0042a4d8(0x3c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar3 + 3;
    *puVar3 = &PTR_FUN_0040127c;
    puVar3[1] = puVar1;
    *(undefined2 *)puVar1 = 0;
    puVar2 = puVar3 + 0xd;
    puVar3[2] = puVar1;
    puVar3[0xb] = puVar2;
    puVar3[0xc] = puVar2;
    *(undefined2 *)puVar2 = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
  }
  *param_1 = puVar3;
  return param_1;
}



/* Function: FUN_00418380 */

undefined4 FUN_00418380(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return 0;
}



/* Function: FUN_004183a0 */

undefined4 FUN_004183a0(void)

{
  return 0;
}



/* Function: FUN_004183a9 */

void __fastcall FUN_004183a9(undefined4 *param_1)

{
  *param_1 = &PTR_o__purecall_0040112c;
  return;
}



/* Function: FUN_004183c0 */

undefined4 * __thiscall FUN_004183c0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_o__purecall_0040112c;
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall CRectTracker::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2015 Release */

void * __thiscall CRectTracker::_scalar_deleting_destructor_(CRectTracker *this,uint param_1)

{
  FUN_0041841a((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return this;
}



/* Function: FUN_0041841a */

void __fastcall FUN_0041841a(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401114;
  FUN_004095b0(param_1 + 0xe);
  FUN_004095b0(param_1 + 10);
  FUN_004095b0(param_1 + 6);
  FUN_004095b0(param_1 + 2);
  *param_1 = &PTR_o__purecall_0040112c;
  return;
}



/* Function: FUN_00418460 */

uint __thiscall FUN_00418460(void *this,undefined4 *param_1,undefined4 param_2,HINSTANCE param_3)

{
  wchar_t wVar1;
  uint uVar2;
  wchar_t *pwVar3;
  int iVar4;
  DWORD DVar5;
  wchar_t *pwVar6;
  uint uVar7;
  wchar_t *pwVar8;
  bool bVar9;
  void *local_c [2];
  
  pwVar8 = L"APPCRASH";
  pwVar6 = (wchar_t *)*param_1;
  pwVar3 = pwVar6;
  local_c[0] = this;
  do {
    bVar9 = (ushort)*pwVar3 < (ushort)*pwVar8;
    if (*pwVar3 != *pwVar8) {
LAB_004184af:
      uVar2 = -(uint)bVar9 | 1;
      goto LAB_004184b4;
    }
    if (*pwVar3 == L'\0') break;
    wVar1 = pwVar3[1];
    bVar9 = (ushort)wVar1 < (ushort)pwVar8[1];
    local_c[0] = (void *)CONCAT22(local_c[0]._2_2_,wVar1);
    if (wVar1 != pwVar8[1]) goto LAB_004184af;
    pwVar3 = pwVar3 + 2;
    pwVar8 = pwVar8 + 2;
  } while (wVar1 != L'\0');
  uVar2 = 0;
LAB_004184b4:
  if (uVar2 != 0) {
    pwVar3 = L"MoAppCrash";
    do {
      wVar1 = *pwVar6;
      bVar9 = (ushort)wVar1 < (ushort)*pwVar3;
      if (wVar1 != *pwVar3) {
LAB_004184e3:
        uVar2 = -(uint)bVar9 | 1;
        goto LAB_004184e8;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar6[1];
      bVar9 = (ushort)wVar1 < (ushort)pwVar3[1];
      if (wVar1 != pwVar3[1]) goto LAB_004184e3;
      pwVar6 = pwVar6 + 2;
      pwVar3 = pwVar3 + 2;
    } while (wVar1 != L'\0');
    uVar2 = 0;
LAB_004184e8:
    if (uVar2 != 0) {
      FUN_00428022();
    }
  }
  if (param_1[0x20] != 1) {
    FUN_00428022();
  }
  if (param_1[0x28] == 0) {
    FUN_00428022();
  }
  if (param_1[0x24] == 0) {
    FUN_00428022();
  }
  if (param_1[0x26] == 0) {
    FUN_00428022();
  }
  if ((*(byte *)(param_1 + 0x2c) & 4) == 0) {
    uVar2 = param_1[0x2b];
    uVar7 = (uVar2 >> 9 ^ *(uint *)((int)this + 4)) & 1 ^ *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar7;
    if ((uVar2 & 0x200) == 0) {
      iVar4 = NtQueryInformationProcess(param_1[0x28],0x1d,local_c,4,0);
      if (iVar4 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
          FUN_00407519(10,&DAT_00404638,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffffe;
        uVar7 = *(uint *)((int)this + 4);
      }
      else {
        uVar7 = (uint)(local_c[0] != (void *)0x0) | *(uint *)((int)this + 4) & 0xfffffffe;
        *(uint *)((int)this + 4) = uVar7;
      }
    }
    if ((uVar7 & 1) != 0) {
      DVar5 = FUN_0040a6a0((undefined4 *)((int)this + 8),0x1d4d,param_3);
      if ((int)DVar5 < 0) {
        return DVar5;
      }
      uVar2 = FUN_0040ffdb((int *)((int)this + 0x18),L"%08X");
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      DVar5 = FUN_0040a6a0((undefined4 *)((int)this + 0x28),0x1d69,param_3);
      if ((int)DVar5 < 0) {
        return DVar5;
      }
      uVar2 = FUN_0040ffdb((int *)((int)this + 0x38),L"0x%08X");
      if (-1 < (int)uVar2) {
        return 0;
      }
      return uVar2;
    }
  }
  return 0x80004005;
}



/* Function: FUN_00418650 */

undefined4 __thiscall
FUN_00418650(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_3 = 0;
  if (((*(byte *)((int)this + 4) & 1) == 0) || (param_1[0x1f] != 8)) {
    uVar1 = 1;
  }
  else {
    iVar2 = 0x18;
    *param_2 = L"CriticalProcessFault2";
    puVar3 = param_2;
    while( true ) {
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      *puVar3 = *param_1;
    }
    param_2[0x19] = *(undefined4 *)((int)this + 8);
    uVar1 = *(undefined4 *)((int)this + 0x18);
    param_2[0x1b] = 0;
    param_2[0x1a] = uVar1;
    param_2[0x1c] = *(undefined4 *)((int)this + 0x28);
    uVar1 = *(undefined4 *)((int)this + 0x38);
    param_2[0x1e] = 0;
    param_2[0x1d] = uVar1;
    param_2[0x1f] = 10;
    *param_3 = 1;
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_004186d0 */

undefined4 __fastcall FUN_004186d0(int param_1)

{
  *(undefined2 **)(param_1 + 0xc) = *(undefined2 **)(param_1 + 8);
  **(undefined2 **)(param_1 + 8) = 0;
  *(undefined2 **)(param_1 + 0x1c) = *(undefined2 **)(param_1 + 0x18);
  **(undefined2 **)(param_1 + 0x18) = 0;
  *(undefined2 **)(param_1 + 0x2c) = *(undefined2 **)(param_1 + 0x28);
  **(undefined2 **)(param_1 + 0x28) = 0;
  *(undefined2 **)(param_1 + 0x3c) = *(undefined2 **)(param_1 + 0x38);
  **(undefined2 **)(param_1 + 0x38) = 0;
  return 0;
}



/* Function: FUN_00418701 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_00418701(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401144;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  memset(param_1 + 4,0,0x168);
  _eh_vector_constructor_iterator_(param_1 + 4,0x24,10,FUN_004187a0,FUN_004187d0);
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  return param_1;
}



/* Function: FUN_00418770 */

undefined4 * __thiscall FUN_00418770(void *this,byte param_1)

{
  FUN_00418f45((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004187a0 */

undefined4 * __fastcall FUN_004187a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 2;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 6;
  param_1[4] = puVar1;
  param_1[5] = puVar1;
  *(undefined2 *)puVar1 = 0;
  return param_1;
}



/* Function: FUN_004187d0 */

void __fastcall FUN_004187d0(int *param_1)

{
  FUN_004095b0(param_1 + 4);
  FUN_004095b0(param_1);
  return;
}



/* Function: FUN_004187eb */

undefined4 __fastcall FUN_004187eb(HANDLE param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined1 local_20 [4];
  uint local_1c;
  uint local_18;
  
  uVar1 = FUN_004270eb(param_1,param_2,local_20);
  if ((int)uVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(10,&LAB_004046c8,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else if ((local_18 <= *(uint *)(param_3 + 0xc)) && (*(uint *)(param_3 + 0xc) <= local_1c)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00418850 */

undefined4 __thiscall
FUN_00418850(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  wchar_t wVar1;
  int *piVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *pwVar7;
  bool bVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xb,&LAB_004046c8,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  pwVar5 = (wchar_t *)*param_1;
  pwVar7 = L"APPCRASH";
  pwVar4 = pwVar5;
  do {
    bVar8 = (ushort)*pwVar4 < (ushort)*pwVar7;
    if (*pwVar4 != *pwVar7) {
LAB_004188d2:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_004188d7;
    }
    if (*pwVar4 == L'\0') break;
    wVar1 = pwVar4[1];
    bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
    if (wVar1 != pwVar7[1]) goto LAB_004188d2;
    pwVar4 = pwVar4 + 2;
    pwVar7 = pwVar7 + 2;
  } while (wVar1 != L'\0');
  uVar3 = 0;
LAB_004188d7:
  if (uVar3 != 0) {
    pwVar4 = L"MoAppCrash";
    do {
      wVar1 = *pwVar5;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar4;
      if (wVar1 != *pwVar4) {
LAB_00418906:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_0041890b;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar5[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar4[1];
      if (wVar1 != pwVar4[1]) goto LAB_00418906;
      pwVar5 = pwVar5 + 2;
      pwVar4 = pwVar4 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_0041890b:
    if (uVar3 != 0) {
      return 0x80004001;
    }
  }
  *(undefined4 *)((int)this + 0x178) = param_3;
  if (param_1[0x20] != 1) {
    FUN_00428022();
  }
  if (param_1[0x26] == 0) {
    FUN_00428022();
  }
  if (param_1[0x28] == 0) {
    FUN_00428022();
  }
  piVar2 = (int *)param_1[0x26];
  iVar6 = *piVar2;
  *(int *)((int)this + 4) = iVar6;
  if (iVar6 == -0x3ffffbf7) {
    if (piVar2[4] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = piVar2[5];
    }
    *(int *)((int)this + 8) = iVar6;
    if (((((iVar6 == 0x29) || (iVar6 == 0x2a)) || (iVar6 == 0x2b)) ||
        ((iVar6 == 0x2d || (iVar6 == 0x34)))) || (iVar6 == 0x37)) {
      *(undefined4 *)((int)this + 0x180) = 1;
    }
    if ((iVar6 == 0x29) && (1 < (uint)piVar2[4])) {
      if (*(int *)((int)this + 0x180) == 0) {
        FUN_00428022();
      }
      *(undefined4 *)((int)this + 4) = 0xc000001c;
      iVar6 = piVar2[6];
      *(int *)((int)this + 8) = iVar6;
      if (2 < (uint)piVar2[4]) {
        *(int *)((int)this + 0xc) = piVar2[7];
      }
    }
    if (iVar6 == 0x2b) {
      if ((uint)piVar2[4] < 2) {
        return 0;
      }
      if (*(int *)((int)this + 0x180) == 0) {
        FUN_00428022();
      }
      *(undefined4 *)((int)this + 4) = 0xc000a203;
      iVar6 = piVar2[6];
      *(int *)((int)this + 8) = iVar6;
    }
    if (iVar6 != 0x37) {
      return 0;
    }
    if ((uint)piVar2[4] < 2) {
      return 0;
    }
    if (*(int *)((int)this + 0x180) == 0) {
      FUN_00428022();
    }
    *(undefined4 *)((int)this + 4) = 0xc000a204;
    iVar6 = piVar2[6];
LAB_00418a59:
    *(int *)((int)this + 8) = iVar6;
    return 0;
  }
  if ((iVar6 != -0x3ffffbe9) && (iVar6 != -0x3ffffff3)) {
    if (iVar6 == -0x3ffff9fc) {
      if ((piVar2[4] == 0) || (piVar2[5] == 0)) {
        *(undefined4 *)((int)this + 0x17c) = 1;
        goto LAB_00418a3c;
      }
    }
    else if ((iVar6 == -0x3ffffffb) && (iVar6 = 8, piVar2[5] == 8)) goto LAB_00418a59;
    if ((param_1[0x29] != 0) &&
       (iVar6 = FUN_004187eb((HANDLE)param_1[0x28],param_1[0x29],(int)piVar2), iVar6 != 0)) {
      *(int *)((int)this + 4) = *piVar2;
      *(undefined4 *)((int)this + 8) = 0xbadc0de1;
      return 0;
    }
    return 0x80004001;
  }
LAB_00418a3c:
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}



/* Function: FUN_00418aa0 */

undefined4 __thiscall
FUN_00418aa0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  wchar_t wVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  void *this_00;
  undefined4 *puVar9;
  bool bVar10;
  int local_94;
  uint local_90;
  undefined4 local_88 [33];
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
     (param_3 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xc,&LAB_004046c8,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  memset(local_88,0,0x80);
  puVar8 = local_88;
  puVar9 = param_2;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *param_3 = 0;
  pwVar7 = L"APPCRASH";
  pwVar5 = (wchar_t *)*param_1;
  pwVar4 = pwVar5;
  do {
    wVar2 = *pwVar4;
    bVar10 = (ushort)wVar2 < (ushort)*pwVar7;
    if (wVar2 != *pwVar7) {
LAB_00418b34:
      uVar3 = -(uint)bVar10 | 1;
      goto LAB_00418b39;
    }
    if (wVar2 == L'\0') break;
    wVar2 = pwVar4[1];
    bVar10 = (ushort)wVar2 < (ushort)pwVar7[1];
    if (wVar2 != pwVar7[1]) goto LAB_00418b34;
    pwVar4 = pwVar4 + 2;
    pwVar7 = pwVar7 + 2;
  } while (wVar2 != L'\0');
  uVar3 = 0;
LAB_00418b39:
  if (uVar3 != 0) {
    pwVar7 = L"MoAppCrash";
    pwVar4 = pwVar5;
    do {
      wVar2 = *pwVar4;
      bVar10 = (ushort)wVar2 < (ushort)*pwVar7;
      if (wVar2 != *pwVar7) {
LAB_00418b74:
        uVar3 = -(uint)bVar10 | 1;
        goto LAB_00418b79;
      }
      if (wVar2 == L'\0') break;
      wVar2 = pwVar4[1];
      bVar10 = (ushort)wVar2 < (ushort)pwVar7[1];
      if (wVar2 != pwVar7[1]) goto LAB_00418b74;
      pwVar4 = pwVar4 + 2;
      pwVar7 = pwVar7 + 2;
    } while (wVar2 != L'\0');
    uVar3 = 0;
LAB_00418b79:
    if (uVar3 != 0) {
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return 0x80004005;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return 0x80004005;
      }
      FUN_0040975c(0xd,&LAB_004046c8,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),pwVar5);
      return 0x80004005;
    }
  }
  pwVar7 = L"APPCRASH";
  pwVar4 = pwVar5;
  do {
    bVar10 = (ushort)*pwVar4 < (ushort)*pwVar7;
    if (*pwVar4 != *pwVar7) {
LAB_00418be9:
      uVar3 = -(uint)bVar10 | 1;
      goto LAB_00418bee;
    }
    if (*pwVar4 == L'\0') break;
    wVar2 = pwVar4[1];
    bVar10 = (ushort)wVar2 < (ushort)pwVar7[1];
    if (wVar2 != pwVar7[1]) goto LAB_00418be9;
    pwVar4 = pwVar4 + 2;
    pwVar7 = pwVar7 + 2;
  } while (wVar2 != L'\0');
  uVar3 = 0;
LAB_00418bee:
  if ((uVar3 != 0) || (param_1[0x1f] == 8)) {
    pwVar4 = L"MoAppCrash";
    do {
      wVar2 = *pwVar5;
      bVar10 = (ushort)wVar2 < (ushort)*pwVar4;
      if (wVar2 != *pwVar4) {
LAB_00418c25:
        uVar3 = -(uint)bVar10 | 1;
        goto LAB_00418c2a;
      }
      if (wVar2 == L'\0') break;
      wVar2 = pwVar5[1];
      bVar10 = (ushort)wVar2 < (ushort)pwVar4[1];
      if (wVar2 != pwVar4[1]) goto LAB_00418c25;
      pwVar5 = pwVar5 + 2;
      pwVar4 = pwVar4 + 2;
    } while (wVar2 != L'\0');
    uVar3 = 0;
LAB_00418c2a:
    local_94 = 9;
    if ((uVar3 != 0) || (param_1[0x1f] == 9)) {
      local_90 = 0;
      if (param_1[0x1f] != 0) {
        this_00 = (void *)((int)this + 0x20);
        puVar8 = param_1 + 2;
        do {
          FUN_00409553((void *)((int)this_00 + -0x10),(short *)puVar8[-1]);
          FUN_00409553(this_00,(short *)*puVar8);
          puVar1 = puVar8 + 1;
          puVar8 = puVar8 + 3;
          *(uint *)((int)this_00 + 0x10) = *puVar1 & 0xfffffff7;
          this_00 = (void *)((int)this_00 + 0x24);
          local_90 = local_90 + 1;
        } while (local_90 < (uint)param_1[0x1f]);
      }
      pwVar5 = (wchar_t *)*param_1;
      pwVar4 = L"MoAppCrash";
      do {
        wVar2 = *pwVar5;
        bVar10 = (ushort)wVar2 < (ushort)*pwVar4;
        if (wVar2 != *pwVar4) {
LAB_00418cf6:
          uVar3 = -(uint)bVar10 | 1;
          goto LAB_00418cfb;
        }
        if (wVar2 == L'\0') break;
        wVar2 = pwVar5[1];
        bVar10 = (ushort)wVar2 < (ushort)pwVar4[1];
        if (wVar2 != pwVar4[1]) goto LAB_00418cf6;
        pwVar5 = pwVar5 + 2;
        pwVar4 = pwVar4 + 2;
      } while (wVar2 != L'\0');
      uVar3 = 0;
LAB_00418cfb:
      if (uVar3 == 0) {
        FUN_00409553((void *)((int)this + 0x130),(short *)param_1[0x16]);
        if ((*(int *)((int)this + 0x180) == 0) || (*(int *)((int)this + 4) == 0)) {
          FUN_00409553((void *)((int)this + 0x140),(short *)param_1[0x17]);
        }
        else {
          FUN_0040ffdb((int *)((int)this + 0x140),L"%08x");
          if ((*(int *)((int)this + 4) == -0x3fffffe4) && (*(int *)((int)this + 0xc) != 0)) {
            FUN_0040ffdb((int *)((int)this + 0xf8),L"%08Ix");
          }
        }
        FUN_00409553((void *)((int)this + 0x10c),(short *)param_1[0x19]);
        FUN_00409553((void *)((int)this + 0x11c),(short *)param_1[0x1a]);
        *(uint *)((int)this + 300) = *(uint *)((int)this + 300) | 8;
        FUN_0040a6a0((undefined4 *)((int)this + 0x154),0x1d4d,*(HINSTANCE *)((int)this + 0x178));
        FUN_0040ffdb((int *)((int)this + 0x164),L"%08x");
        local_94 = 10;
        if (*(int *)((int)this + 0x17c) == 0) {
          pwVar5 = L"MoOsMitigation";
          if (*(int *)((int)this + 0x180) == 0) {
            pwVar5 = L"MoBEX";
          }
        }
        else {
          pwVar5 = L"MoCFGSUP";
        }
      }
      else {
        FUN_00409553((void *)((int)this + 0x10c),(short *)param_1[0x13]);
        if ((*(int *)((int)this + 0x180) == 0) || (*(int *)((int)this + 4) == 0)) {
          FUN_00409553((void *)((int)this + 0x11c),(short *)param_1[0x14]);
        }
        else {
          FUN_0040ffdb((int *)((int)this + 0x11c),L"%08x");
          if ((*(int *)((int)this + 4) == -0x3fffffe4) && (*(int *)((int)this + 0xc) != 0)) {
            FUN_0040ffdb((int *)((int)this + 0xd4),L"%08Ix");
          }
        }
        FUN_00409553((void *)((int)this + 0xe8),(short *)param_1[0x16]);
        FUN_00409553((void *)((int)this + 0xf8),(short *)param_1[0x17]);
        *(uint *)((int)this + 0x108) = *(uint *)((int)this + 0x108) | 8;
        FUN_0040a6a0((undefined4 *)((int)this + 0x130),0x1d4d,*(HINSTANCE *)((int)this + 0x178));
        FUN_0040ffdb((int *)((int)this + 0x140),L"%08x");
        if (*(int *)((int)this + 0x17c) == 0) {
          pwVar5 = L"OsMitigation";
          if (*(int *)((int)this + 0x180) == 0) {
            pwVar5 = L"BEX";
          }
        }
        else {
          pwVar5 = L"CFGSUP";
        }
      }
      *param_2 = pwVar5;
      puVar8 = param_2 + 2;
      iVar6 = local_94;
      puVar9 = (undefined4 *)((int)this + 0x20);
      do {
        puVar8[-1] = puVar9[-4];
        *puVar8 = *puVar9;
        puVar8[1] = puVar9[4];
        iVar6 = iVar6 + -1;
        puVar8 = puVar8 + 3;
        puVar9 = puVar9 + 9;
      } while (iVar6 != 0);
      param_2[0x1f] = local_94;
      *param_3 = 1;
      return 0;
    }
  }
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_00407519(0xe,&LAB_004046c8,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  return 0x80004005;
}



/* Function: FUN_00418f45 */

void __fastcall FUN_00418f45(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00401144;
  _eh_vector_destructor_iterator_(param_1 + 4,0x24,10,FUN_004187d0);
  *param_1 = &PTR_o__purecall_0040112c;
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00418fa3 */

void FUN_00418fa3(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  _EVENT_DATA_DESCRIPTOR local_58;
  wchar_t *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_30 = 10;
  local_40 = local_30;
  if (param_1 != (wchar_t *)0x0) {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_40 = ((int)pwVar2 - (int)(param_1 + 1) >> 1) * 2 + 2;
  }
  local_44 = 0;
  local_3c = 0;
  local_48 = L"NULL";
  if (param_1 != (wchar_t *)0x0) {
    local_48 = param_1;
  }
  if (param_2 != (wchar_t *)0x0) {
    pwVar2 = param_2;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_30 = ((int)pwVar2 - (int)(param_2 + 1) >> 1) * 2 + 2;
  }
  local_28 = &stack0x0000000c;
  local_34 = 0;
  local_38 = L"NULL";
  if (param_2 != (wchar_t *)0x0) {
    local_38 = param_2;
  }
  local_18 = &stack0x00000010;
  local_20 = 4;
  local_10 = 4;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  FUN_00414173((REGHANDLE *)&DAT_0042d000,(PCEVENT_DESCRIPTOR)&DAT_00402360,4,5,&local_58);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041907c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_0041907c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0040115c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  memset(param_1 + 8,0,0x208);
  memset(param_1 + 0x8a,0,0x208);
  memset(param_1 + 0x10c,0,0x208);
  memset(param_1 + 0x18e,0,0x6c);
  _eh_vector_constructor_iterator_(param_1 + 0x18e,0x24,3,FUN_004187a0,FUN_004187d0);
  param_1[0x1a9] = 0;
  return param_1;
}



/* Function: FUN_00419120 */

undefined4 * __thiscall FUN_00419120(void *this,byte param_1)

{
  FUN_004198e4((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00419150 */

uint __thiscall FUN_00419150(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  bool bVar11;
  
  bVar4 = true;
  uVar10 = 0x80004005;
  *(undefined4 *)((int)this + 0x10) = param_3;
  if (param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  pwVar5 = (wchar_t *)*param_1;
  pwVar9 = L"APPCRASH";
  do {
    bVar11 = (ushort)*pwVar5 < (ushort)*pwVar9;
    if (*pwVar5 != *pwVar9) {
LAB_004191e5:
      uVar6 = -(uint)bVar11 | 1;
      goto LAB_004191ea;
    }
    if (*pwVar5 == L'\0') break;
    wVar1 = pwVar5[1];
    bVar11 = (ushort)wVar1 < (ushort)pwVar9[1];
    if (wVar1 != pwVar9[1]) goto LAB_004191e5;
    pwVar5 = pwVar5 + 2;
    pwVar9 = pwVar9 + 2;
  } while (wVar1 != L'\0');
  uVar6 = 0;
LAB_004191ea:
  if (uVar6 == 0) {
    if (param_1[0x20] != 1) {
      FUN_00428022();
    }
    if (param_1[0x28] == 0) {
      FUN_00428022();
    }
    if (param_1[0x24] == 0) {
      FUN_00428022();
    }
    if (param_1[0x26] == 0) {
      FUN_00428022();
    }
    *(undefined4 *)((int)this + 0x14) = param_1[0x28];
    *(undefined4 *)((int)this + 0x18) = param_1[0x24];
    piVar2 = (int *)param_1[0x26];
    if (piVar2 == (int *)0x0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0xb,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_004193ba;
    }
    iVar8 = *piVar2;
    *(int *)((int)this + 4) = iVar8;
    if (((((iVar8 == -0x3ffffffa) || (iVar8 == -0x3fffff6a)) || (iVar8 == -0x3fffffe3)) ||
        ((iVar8 == -0x3fffff85 || (iVar8 == -0x3fffffe2)))) || (iVar8 == -0x3ffffed1)) {
      iVar3 = piVar2[7];
      *(int *)((int)this + 8) = iVar3;
      if (((iVar8 == -0x3ffffffa) && (iVar3 != -0x3fffff64)) && (iVar3 != -0x3ffffe7b)) {
        bVar4 = false;
        *(undefined4 *)((int)this + 0x6a4) = 6;
      }
      uVar10 = FUN_00419b1e(this,piVar2[6],(undefined2 *)((int)this + 0x20));
      if ((int)uVar10 < 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00419c67((short *)((int)this + 0x20));
      }
      *(undefined4 *)((int)this + 0xc) = uVar7;
      FUN_004193d5((wchar_t *)((int)this + 0x20),(LPCWSTR)param_1[0x22]);
      if ((*(int *)((int)this + 0xc) != 4) ||
         (iVar8 = FUN_00419c67((short *)param_1[0x22]), iVar8 == 4)) {
        if (*(int *)((int)this + 0xc) != 3) {
          bVar4 = false;
          *(uint *)((int)this + 0x6a4) = (*(int *)((int)this + 0xc) != 4) + 3;
        }
        FUN_0040a406((short *)((int)this + 0x430),0x104,param_1[0x22]);
        if (bVar4) {
          iVar8 = FUN_00419d5e((int)this);
        }
        else {
          iVar8 = 0;
        }
        *(int *)((int)this + 0x1c) = iVar8;
        if (iVar8 == 0) {
          if (bVar4) {
            *(undefined4 *)((int)this + 0x6a4) = 7;
            uVar6 = FUN_0041a371((int)this);
            uVar10 = uVar6 & 0xffff | 0x80070000;
            if ((int)uVar6 < 1) {
              uVar10 = uVar6;
            }
          }
        }
        else {
          *(undefined4 *)((int)this + 0x6a4) = 2;
        }
        if (-1 < (int)uVar10) {
          return uVar10;
        }
        goto LAB_004193ba;
      }
    }
  }
  uVar10 = 0x80004001;
LAB_004193ba:
  *(undefined4 *)((int)this + 0x6a4) = 1;
  return uVar10;
}



/* Function: FUN_004193d5 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004193d5(wchar_t *param_1,LPCWSTR param_2)

{
  int iVar1;
  wchar_t *local_24;
  wchar_t *local_20;
  wchar_t local_1c [10];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_24 = local_1c;
  local_1c[0] = L'\0';
  local_8 = 0;
  local_20 = local_24;
  if ((param_1 == (wchar_t *)0x0) || (param_2 == (LPCWSTR)0x0)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_00426af0(param_2,&local_24);
    if (iVar1 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0xc,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else {
      if ((DAT_0042dbc0 & 1) != 0) {
        FUN_00418fa3(param_1,local_24);
      }
      iVar1 = 0;
    }
  }
  if (local_24 != local_1c) {
    FUN_0042a48f(local_24);
  }
  return iVar1;
}



/* Function: FUN_00419480 */

undefined4 __thiscall
FUN_00419480(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 local_88 [33];
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
     (param_3 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xd,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar6 = 0x80070057;
  }
  else {
    memset(local_88,0,0x80);
    pwVar5 = L"APPCRASH";
    puVar7 = local_88;
    puVar8 = param_2;
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *param_3 = 0;
    pwVar2 = (wchar_t *)*param_1;
    do {
      wVar1 = *pwVar2;
      bVar9 = (ushort)wVar1 < (ushort)*pwVar5;
      if (wVar1 != *pwVar5) {
LAB_00419509:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_0041950e;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar2[1];
      bVar9 = (ushort)wVar1 < (ushort)pwVar5[1];
      if (wVar1 != pwVar5[1]) goto LAB_00419509;
      pwVar2 = pwVar2 + 2;
      pwVar5 = pwVar5 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_0041950e:
    if (uVar3 == 0) {
      if (param_1[0x1f] == 8) {
        if (*(int *)((int)this + 4) != -0x3ffffffa) {
          return 0;
        }
        FUN_0040a6a0((undefined4 *)((int)this + 0x638),0x1d4e,*(HINSTANCE *)((int)this + 0x10));
        FUN_0040ffdb((int *)((int)this + 0x648),L"%08x");
        FUN_0040a6a0((undefined4 *)((int)this + 0x65c),0x1d4f,*(HINSTANCE *)((int)this + 0x10));
        FUN_0040ffdb((int *)((int)this + 0x66c),L"%08x");
        param_2[1] = *(undefined4 *)((int)this + 0x638);
        param_2[2] = *(int *)((int)this + 0x648);
        param_2[3] = 0;
        param_2[4] = *(undefined4 *)((int)this + 0x65c);
        param_2[5] = *(int *)((int)this + 0x66c);
        param_2[6] = 0;
        if (*(int *)((int)this + 0x1c) == 0) {
          uVar6 = 2;
          pwVar5 = L"InPageError";
        }
        else {
          FUN_0040a6a0((undefined4 *)((int)this + 0x680),0x1d5c,*(HINSTANCE *)((int)this + 0x10));
          FUN_0040e2e2((short *)((int)this + 0x20));
          FUN_0040ffdb((int *)((int)this + 0x690),&DAT_004046d8);
          pwVar5 = L"InPageCoFire";
          param_2[7] = *(undefined4 *)((int)this + 0x680);
          param_2[8] = *(int *)((int)this + 0x690);
          param_2[9] = 0;
          uVar6 = 3;
        }
        *param_2 = pwVar5;
        param_2[0x1f] = uVar6;
        *param_3 = 1;
        return 0;
      }
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0xf,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
            ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_0040975c(0xe,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),(wchar_t *)*param_1);
    }
    uVar6 = 0x80004005;
  }
  return uVar6;
}



/* Function: FUN_004196ab */

void FUN_004196ab(void)

{
  UINT UVar1;
  BOOL BVar2;
  int iVar3;
  DWORD *pDVar4;
  _STARTUPINFOW *p_Var5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_4c4 [4];
  _PROCESS_INFORMATION local_4c0;
  _STARTUPINFOW local_4b0;
  DWORD local_464 [17];
  WCHAR local_420 [260];
  WCHAR aWStack_218 [262];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)auStack_4c4;
  local_4c0.hProcess = (HANDLE)0x0;
  local_4c0.hThread = (HANDLE)0x0;
  local_4c0.dwProcessId = 0;
  local_4c0.dwThreadId = 0;
  memset(local_464,0,0x44);
  pDVar4 = local_464;
  p_Var5 = &local_4b0;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    p_Var5->cb = *pDVar4;
    pDVar4 = pDVar4 + 1;
    p_Var5 = (_STARTUPINFOW *)&p_Var5->lpReserved;
  }
  UVar1 = GetWindowsDirectoryW(local_420,0x104);
  if (UVar1 == 0) {
    GetLastError();
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004198a1;
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar6 = 0x10;
  }
  else if (UVar1 < 0x104) {
    iVar3 = FUN_004095e6(aWStack_218,0x104,L"%s\\system32\\cofire.exe");
    if (iVar3 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004198a1;
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar6 = 0x12;
    }
    else {
      iVar3 = FUN_004095e6(local_420,0x104,L"\"%s\" \"%s\" \"%s\"");
      if (-1 < iVar3) {
        local_4b0.cb = 0x44;
        FUN_0040a65a((int *)&local_4c0);
        BVar2 = CreateProcessW(aWStack_218,local_420,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0x8000000,(LPVOID)0x0,(LPCWSTR)0x0,
                               &local_4b0,&local_4c0);
        if (BVar2 == 0) {
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_004074f5(0x14,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          GetLastError();
        }
        goto LAB_004198a1;
      }
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004198a1;
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar6 = 0x13;
    }
  }
  else {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004198a1;
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar6 = 0x11;
  }
  FUN_004074f5(uVar6,&DAT_00404840,uVar7,uVar8);
LAB_004198a1:
  FUN_0040a65a((int *)&local_4c0);
  FUN_00429fd0(local_c ^ (uint)auStack_4c4);
  return;
}



/* Function: FUN_004198d0 */

undefined4 __fastcall FUN_004198d0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004196ab();
  }
  return 0;
}



/* Function: FUN_004198e4 */

void __fastcall FUN_004198e4(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_0040115c;
  _eh_vector_destructor_iterator_(param_1 + 0x18e,0x24,3,FUN_004187d0);
  *param_1 = &PTR_o__purecall_0040112c;
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00419945 */

void FUN_00419945(LPCWSTR param_1,undefined2 *param_2)

{
  WCHAR WVar1;
  int iVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  uint cchCount1;
  WCHAR *pWVar5;
  LPCWSTR pWVar6;
  uint uVar7;
  WCHAR local_430;
  undefined1 local_42e [518];
  WCHAR local_228;
  undefined1 local_226 [522];
  undefined4 local_1c;
  undefined2 local_18;
  uint local_14;
  
  local_14 = DAT_0042d6c0 ^ (uint)&stack0xfffffff0;
  local_228 = L'\0';
  memset(local_226,0,0x206);
  if ((param_1 != (LPCWSTR)0x0) && (param_2 != (undefined2 *)0x0)) {
    *param_2 = 0;
    pWVar6 = param_1;
    do {
      WVar1 = *pWVar6;
      pWVar6 = pWVar6 + 1;
    } while (WVar1 != L'\0');
    uVar7 = (int)pWVar6 - (int)(param_1 + 1) >> 1;
    if ((uVar7 < 0x18) ||
       (iVar2 = FUN_0040d3d9((ushort *)PTR_u__Device_LanmanRedirector_004013f4,(ushort *)param_1,
                             0x18), iVar2 != 0)) {
      DVar3 = GetLogicalDriveStringsW(0x103,&local_228);
      if (DVar3 != 0) {
        pWVar5 = &local_228;
        local_1c = DAT_004047a0;
        local_18 = DAT_004047a4;
        local_430 = L'\0';
        WVar1 = local_228;
        do {
          local_1c = CONCAT22(local_1c._2_2_,WVar1);
          DVar3 = QueryDosDeviceW((LPCWSTR)&local_1c,&local_430,0x103);
          if (DVar3 != 0) {
            pWVar4 = &local_430;
            do {
              WVar1 = *pWVar4;
              pWVar4 = pWVar4 + 1;
            } while (WVar1 != L'\0');
            cchCount1 = (int)pWVar4 - (int)local_42e >> 1;
            if (((cchCount1 == 0) ||
                ((cchCount1 <= uVar7 &&
                 (iVar2 = CompareStringOrdinal(param_1,cchCount1,&local_430,cchCount1,1), iVar2 == 2
                 )))) && (cchCount1 < uVar7)) {
              FUN_004095e6(param_2,0x104,L"%s%s");
              break;
            }
          }
          do {
            WVar1 = *pWVar5;
            pWVar5 = pWVar5 + 1;
          } while (WVar1 != L'\0');
          WVar1 = *pWVar5;
        } while (WVar1 != L'\0');
      }
    }
    else {
      FUN_004095e6(param_2,0x104,&DAT_00404798);
    }
  }
  FUN_00429fd0(local_14 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_00419b1e */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00419b1e(void *this,undefined4 param_1,undefined2 *param_2)

{
  HMODULE hModule;
  undefined4 *puVar1;
  DWORD DVar2;
  FARPROC pFVar3;
  int iVar4;
  DWORD DVar5;
  HMODULE local_42c;
  WCHAR local_428 [528];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x428;
  local_8 = 0;
  if (param_2 == (undefined2 *)0x0) goto LAB_00419c59;
  local_428[0] = L'\0';
  *param_2 = 0;
  puVar1 = FUN_0040e638(&local_42c,L"psapi.dll");
  hModule = (HMODULE)*puVar1;
  *puVar1 = 0;
  if (local_42c != (HMODULE)0x0) {
    FreeLibrary(local_42c);
  }
  if (hModule == (HMODULE)0x0) {
    DVar2 = GetLastError();
    DVar5 = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      DVar5 = DVar2;
    }
    if (-1 < (int)DVar5) {
      DVar5 = 0x80004005;
    }
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
LAB_00419c28:
      *param_2 = 0;
    }
    else {
      if ((PTR_LOOP_0042d098[0x1c] & 1) != 0) {
        FUN_004074f5(0x15,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
LAB_00419c24:
      if ((int)DVar5 < 0) goto LAB_00419c28;
    }
    if (hModule == (HMODULE)0x0) goto LAB_00419c59;
  }
  else {
    pFVar3 = GetProcAddress(hModule,"GetMappedFileNameW");
    if (pFVar3 == (FARPROC)0x0) {
LAB_00419c10:
      DVar2 = GetLastError();
      DVar5 = DVar2 & 0xffff | 0x80070000;
      if ((int)DVar2 < 1) {
        DVar5 = DVar2;
      }
      goto LAB_00419c24;
    }
    (*(code *)PTR_guard_check_icall_0042e4b0)
              (*(undefined4 *)((int)this + 0x14),param_1,local_428,0x410);
    iVar4 = (*pFVar3)();
    if (iVar4 == 0) goto LAB_00419c10;
    iVar4 = FUN_00419945(local_428,param_2);
    if (iVar4 < 0) goto LAB_00419c28;
  }
  FreeLibrary(hModule);
LAB_00419c59:
  FUN_0042ae87();
  return;
}



/* Function: FUN_00419c67 */

void FUN_00419c67(short *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  WCHAR local_218 [262];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  if (param_1 == (short *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x16,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    local_218[0] = L'\0';
    sVar1 = *param_1;
    psVar2 = param_1;
    iVar3 = 4;
    if (sVar1 != 0x5c) {
      iVar3 = 1;
    }
    while ((sVar1 != 0 && (iVar5 < iVar3))) {
      iVar4 = iVar5 + 1;
      if (*psVar2 != 0x5c) {
        iVar4 = iVar5;
      }
      sVar1 = psVar2[1];
      iVar5 = iVar4;
      psVar2 = psVar2 + 1;
    }
    if ((iVar5 == iVar3) &&
       (iVar5 = FUN_0041a4ba(local_218,(int)param_1,(int)psVar2 - (int)param_1 >> 1), -1 < iVar5)) {
      GetDriveTypeW(local_218);
    }
  }
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00419d5e */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00419d5e(int param_1)

{
  bool bVar1;
  UINT UVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  FARPROC pFVar7;
  FARPROC pFVar8;
  HMODULE hModule;
  HMODULE hModule_00;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  HANDLE local_438;
  undefined4 local_430;
  HMODULE local_42c;
  WCHAR local_428 [260];
  WCHAR local_220 [268];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x43c;
  local_8 = 0x419d6d;
  memset(local_220,0,0x208);
  local_438 = (HANDLE)0xffffffff;
  hModule_00 = (HMODULE)0x0;
  hModule = (HMODULE)0x0;
  local_8 = 2;
  local_430 = 0x104;
  UVar2 = GetWindowsDirectoryW(local_428,0x104);
  if ((UVar2 == 0) || (0x103 < UVar2)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar9 = 0x17;
LAB_00419fa2:
      FUN_004074f5(uVar9,&DAT_00404840,uVar10,uVar11);
    }
  }
  else {
    puVar3 = (undefined2 *)(param_1 + 0x20);
    iVar4 = o_tolower(*puVar3);
    iVar5 = o_tolower(local_428[0]);
    if (iVar5 == iVar4) {
      puVar6 = FUN_0040e638(&local_42c,L"sfc_os.dll");
      hModule_00 = (HMODULE)*puVar6;
      *puVar6 = 0;
      if (local_42c != (HMODULE)0x0) {
        FreeLibrary(local_42c);
      }
      if ((hModule_00 != (HMODULE)0x0) &&
         (pFVar7 = GetProcAddress(hModule_00,"SfcIsFileProtected"), pFVar7 != (FARPROC)0x0)) {
        puVar6 = FUN_0040e638(&local_42c,L"kernel32.dll");
        hModule = (HMODULE)*puVar6;
        *puVar6 = 0;
        if (local_42c != (HMODULE)0x0) {
          FreeLibrary(local_42c);
        }
        if (hModule == (HMODULE)0x0) goto LAB_0041a057;
        local_42c = (HMODULE)GetProcAddress(hModule,"FindFirstFileNameW");
        if ((local_42c != (HMODULE)0x0) &&
           (pFVar8 = GetProcAddress(hModule,"FindNextFileNameW"), pFVar8 != (FARPROC)0x0)) {
          (*(code *)PTR_guard_check_icall_0042e4b0)(puVar3,0,&local_430,local_220);
          local_438 = (HANDLE)(*(code *)local_42c)();
          if (local_438 != (HANDLE)0xffffffff) {
            do {
              bVar1 = FUN_00426f0e(local_220);
              if (bVar1) {
                (*(code *)PTR_guard_check_icall_0042e4b0)(0,local_220);
                iVar4 = (*pFVar7)();
                if ((iVar4 != 0) && (iVar4 = FUN_0041a082(param_1), iVar4 == 0)) {
                  *(undefined2 *)(param_1 + 0x228) = *puVar3;
                  *(undefined2 *)(param_1 + 0x22a) = 0x3a;
                  iVar4 = FUN_0040a406((short *)(param_1 + 0x22c),0x102,(int)local_220);
                  if ((iVar4 < 0) &&
                     (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098 &&
                      ((PTR_LOOP_0042d098[0x1c] & 1) != 0)))) {
                    uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                    uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                    uVar9 = 0x19;
                    goto LAB_00419fa2;
                  }
                  break;
                }
              }
              else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                      ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                FUN_004074f5(0x18,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              }
              memset(local_220,0,0x208);
              local_430 = 0x104;
              (*(code *)PTR_guard_check_icall_0042e4b0)(local_438,&local_430,local_220);
              iVar4 = (*pFVar8)();
            } while (iVar4 != 0);
          }
        }
      }
    }
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
LAB_0041a057:
  if (hModule_00 != (HMODULE)0x0) {
    FreeLibrary(hModule_00);
  }
  if (local_438 != (HANDLE)0xffffffff) {
    FindClose(local_438);
  }
  FUN_0042ae87();
  return;
}



/* Function: FUN_0041a082 */

void __fastcall FUN_0041a082(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  HANDLE hObject;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStackY_8ac;
  undefined4 uVar7;
  undefined4 local_88c [267];
  int local_460;
  HANDLE local_45c;
  HANDLE local_458;
  undefined2 *local_454;
  undefined2 *local_450;
  undefined2 local_44c [4];
  undefined2 *local_444;
  undefined2 *local_440;
  undefined2 local_43c [4];
  undefined4 local_434 [136];
  undefined1 local_214 [524];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_444 = local_43c;
  local_43c[0] = 0;
  bVar1 = false;
  local_454 = local_44c;
  local_44c[0] = 0;
  local_460 = param_1;
  local_450 = local_454;
  local_440 = local_444;
  memset(local_434,0,0x428);
  FUN_004277ef(&local_444);
  uVar3 = FUN_0040fef0(&local_454,((int)local_440 - (int)local_444 >> 1) + 0xc);
  if ((((char)uVar3 == '\0') ||
      (cVar2 = FUN_004094c0(&local_454,local_444,(int)local_440 - (int)local_444 >> 1),
      cVar2 == '\0')) || (cVar2 = FUN_0040a536(&local_454,L"svchost.exe"), cVar2 == '\0')) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041a31d;
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_8ac = 0x1a;
  }
  else {
    iVar4 = o__wcsicmp(param_1 + 0x430,local_454);
    if ((iVar4 != 0) || (cVar2 = FUN_00426a1d(), cVar2 == '\0')) goto LAB_0041a31d;
    hObject = (HANDLE)CreateToolhelp32Snapshot(8,*(undefined4 *)(param_1 + 0x18));
    local_45c = hObject;
    local_458 = hObject;
    if (1 < (int)hObject + 1U) {
      local_434[0] = 0x428;
      iVar4 = Module32FirstW(hObject,local_434);
      if (iVar4 == 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          GetLastError();
          FUN_00407519(0x1c,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
      }
      else {
        FUN_004094c0(&local_454,local_444,(int)local_440 - (int)local_444 >> 1);
        FUN_0040a536(&local_454,L"wdi.dll");
        do {
          iVar4 = o__wcsicmp(local_214,local_454);
          if (iVar4 == 0) {
            bVar1 = true;
            break;
          }
          memset(local_88c,0,0x428);
          puVar5 = local_88c;
          puVar6 = local_434;
          for (iVar4 = 0x10a; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_434[0] = 0x428;
          iVar4 = Module32NextW(local_458,local_434);
        } while (iVar4 != 0);
        hObject = local_45c;
        if (bVar1) {
          *(undefined4 *)(local_460 + 0x6a4) = 5;
        }
      }
      CloseHandle(hObject);
      goto LAB_0041a31d;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041a31d;
    GetLastError();
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_8ac = 0x1b;
  }
  FUN_00407519(uStackY_8ac,&DAT_00404840,uVar7,uVar3);
LAB_0041a31d:
  if (local_454 != local_44c) {
    FUN_0042a48f(local_454);
  }
  if (local_444 != local_43c) {
    FUN_0042a48f(local_444);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041a371 */

int __fastcall FUN_0041a371(int param_1)

{
  int iVar1;
  
  if ((DAT_0042dc00 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0041a3e1((wchar_t *)(param_1 + 0x20),(wchar_t *)(param_1 + 0x430));
    if (((iVar1 != 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x1d,&DAT_00404840,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      return iVar1;
    }
  }
  return iVar1;
}



/* Function: FUN_0041a3cd */

void __fastcall FUN_0041a3cd(int *param_1)

{
  if (*param_1 != -1) {
    FindClose((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0041a3e1 */

void FUN_0041a3e1(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  _EVENT_DATA_DESCRIPTOR local_58;
  wchar_t *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_30 = 10;
  local_40 = local_30;
  if (param_1 != (wchar_t *)0x0) {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_40 = ((int)pwVar2 - (int)(param_1 + 1) >> 1) * 2 + 2;
  }
  local_44 = 0;
  local_3c = 0;
  local_48 = L"NULL";
  if (param_1 != (wchar_t *)0x0) {
    local_48 = param_1;
  }
  if (param_2 != (wchar_t *)0x0) {
    pwVar2 = param_2;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_30 = ((int)pwVar2 - (int)(param_2 + 1) >> 1) * 2 + 2;
  }
  local_28 = &stack0x0000000c;
  local_34 = 0;
  local_38 = L"NULL";
  if (param_2 != (wchar_t *)0x0) {
    local_38 = param_2;
  }
  local_18 = &stack0x00000010;
  local_20 = 4;
  local_10 = 4;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  FUN_00414173((REGHANDLE *)&DAT_0042d060,(PCEVENT_DESCRIPTOR)&DAT_00402328,4,5,&local_58);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041a4ba */

undefined4 __thiscall FUN_0041a4ba(void *this,int param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 0x7fffffff) {
    iVar4 = 0x104;
    iVar5 = param_1 - (int)this;
    do {
      if (((param_2 - 0x104) + iVar4 == 0) || (sVar1 = *(short *)(iVar5 + (int)this), sVar1 == 0))
      break;
      *(short *)this = sVar1;
      this = (void *)((int)this + 2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    psVar3 = (short *)((int)this + -2);
    if (iVar4 != 0) {
      psVar3 = (short *)this;
    }
    *psVar3 = 0;
    uVar2 = 0x8007007a;
    if (iVar4 != 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x80070057;
    *(undefined2 *)this = 0;
  }
  return uVar2;
}



/* Function: FUN_0041a523 */

void FUN_0041a523(undefined4 param_1,undefined4 param_2,undefined4 param_3,wchar_t *param_4)

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
  EtwTraceMessage(param_1,param_2,0x2b,&LAB_00404d64,0x13,&param_3,4,pwVar2,iVar3,0);
  return;
}



/* Function: FUN_0041a58a */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_0041a58a(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00401174;
  param_1[1] = 0;
  memset(param_1 + 2,0,0x168);
  _eh_vector_constructor_iterator_(param_1 + 2,0x24,10,FUN_004187a0,FUN_004187d0);
  puVar1 = param_1 + 0x5f;
  param_1[0x5c] = 0;
  param_1[0x5d] = puVar1;
  param_1[0x5e] = puVar1;
  *(undefined2 *)puVar1 = 0;
  param_1[0x61] = 1;
  param_1[0x62] = 0;
  param_1[99] = 0;
  memset(param_1 + 100,0,0x50);
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  memset(param_1 + 0x7a,0,0x2cf4);
  _eh_vector_constructor_iterator_(param_1 + 0x7a,0x224,0x15,FUN_0041a690,FUN_0041a6b0);
  return param_1;
}



/* Function: FUN_0041a660 */

undefined4 * __thiscall FUN_0041a660(void *this,byte param_1)

{
  FUN_0041b436((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041a690 */

int __fastcall FUN_0041a690(int param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(param_1 + 0x214);
  *(undefined2 **)(param_1 + 0x20c) = puVar1;
  *(undefined2 **)(param_1 + 0x210) = puVar1;
  *puVar1 = 0;
  return param_1;
}



/* Function: FUN_0041a6b0 */

void __fastcall FUN_0041a6b0(int param_1)

{
  FUN_004095b0((int *)(param_1 + 0x20c));
  return;
}



/* Function: FUN_0041a6d0 */

undefined4 __thiscall
FUN_0041a6d0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  wchar_t wVar1;
  char cVar2;
  uint uVar3;
  wchar_t *pwVar4;
  short *psVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  if (param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  pwVar8 = (wchar_t *)*param_1;
  pwVar6 = L"APPCRASH";
  pwVar4 = pwVar8;
  do {
    wVar1 = *pwVar4;
    bVar11 = (ushort)wVar1 < (ushort)*pwVar6;
    if (wVar1 != *pwVar6) {
LAB_0041a747:
      uVar3 = -(uint)bVar11 | 1;
      goto LAB_0041a74c;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar4[1];
    bVar11 = (ushort)wVar1 < (ushort)pwVar6[1];
    if (wVar1 != pwVar6[1]) goto LAB_0041a747;
    pwVar4 = pwVar4 + 2;
    pwVar6 = pwVar6 + 2;
  } while (wVar1 != L'\0');
  uVar3 = 0;
LAB_0041a74c:
  if (uVar3 != 0) {
    pwVar6 = L"MoAppCrash";
    pwVar4 = pwVar8;
    do {
      wVar1 = *pwVar4;
      bVar11 = (ushort)wVar1 < (ushort)*pwVar6;
      if (wVar1 != *pwVar6) {
LAB_0041a781:
        uVar3 = -(uint)bVar11 | 1;
        goto LAB_0041a786;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar4[1];
      bVar11 = (ushort)wVar1 < (ushort)pwVar6[1];
      if (wVar1 != pwVar6[1]) goto LAB_0041a781;
      pwVar4 = pwVar4 + 2;
      pwVar6 = pwVar6 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_0041a786:
    if (uVar3 != 0) {
      pwVar6 = L"AppHangB1";
      pwVar4 = pwVar8;
      do {
        wVar1 = *pwVar4;
        bVar11 = (ushort)wVar1 < (ushort)*pwVar6;
        if (wVar1 != *pwVar6) {
LAB_0041a7bb:
          uVar3 = -(uint)bVar11 | 1;
          goto LAB_0041a7c0;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar4[1];
        bVar11 = (ushort)wVar1 < (ushort)pwVar6[1];
        if (wVar1 != pwVar6[1]) goto LAB_0041a7bb;
        pwVar4 = pwVar4 + 2;
        pwVar6 = pwVar6 + 2;
      } while (wVar1 != L'\0');
      uVar3 = 0;
LAB_0041a7c0:
      if (uVar3 != 0) {
        pwVar6 = L"AppHangXProcB1";
        pwVar4 = pwVar8;
        do {
          wVar1 = *pwVar4;
          bVar11 = (ushort)wVar1 < (ushort)*pwVar6;
          if (wVar1 != *pwVar6) {
LAB_0041a7f5:
            uVar3 = -(uint)bVar11 | 1;
            goto LAB_0041a7fa;
          }
          if (wVar1 == L'\0') break;
          wVar1 = pwVar4[1];
          bVar11 = (ushort)wVar1 < (ushort)pwVar6[1];
          if (wVar1 != pwVar6[1]) goto LAB_0041a7f5;
          pwVar4 = pwVar4 + 2;
          pwVar6 = pwVar6 + 2;
        } while (wVar1 != L'\0');
        uVar3 = 0;
LAB_0041a7fa:
        if (uVar3 != 0) {
          pwVar6 = L"MoAppHang";
          pwVar4 = pwVar8;
          do {
            wVar1 = *pwVar4;
            bVar11 = (ushort)wVar1 < (ushort)*pwVar6;
            if (wVar1 != *pwVar6) {
LAB_0041a82f:
              uVar3 = -(uint)bVar11 | 1;
              goto LAB_0041a834;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar4[1];
            bVar11 = (ushort)wVar1 < (ushort)pwVar6[1];
            if (wVar1 != pwVar6[1]) goto LAB_0041a82f;
            pwVar4 = pwVar4 + 2;
            pwVar6 = pwVar6 + 2;
          } while (wVar1 != L'\0');
          uVar3 = 0;
LAB_0041a834:
          if (uVar3 != 0) {
            pwVar4 = L"MoAppHangXProc";
            do {
              wVar1 = *pwVar8;
              bVar11 = (ushort)wVar1 < (ushort)*pwVar4;
              if (wVar1 != *pwVar4) {
LAB_0041a863:
                uVar3 = -(uint)bVar11 | 1;
                goto LAB_0041a868;
              }
              if (wVar1 == L'\0') break;
              wVar1 = pwVar8[1];
              bVar11 = (ushort)wVar1 < (ushort)pwVar4[1];
              if (wVar1 != pwVar4[1]) goto LAB_0041a863;
              pwVar8 = pwVar8 + 2;
              pwVar4 = pwVar4 + 2;
            } while (wVar1 != L'\0');
            uVar3 = 0;
LAB_0041a868:
            if (uVar3 != 0) {
              if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
                return 0x80004001;
              }
              if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
                return 0x80004001;
              }
              FUN_004074f5(0xb,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              return 0x80004001;
            }
          }
        }
      }
    }
  }
  if ((param_1[0x20] != 1) && (param_1[0x20] != 2)) {
    FUN_00428022();
  }
  if (param_1[0x20] == 1) {
    if (param_1[0x22] == 0) {
      FUN_00428022();
    }
    if (param_1[0x28] == 0) {
      FUN_00428022();
    }
    if (param_1[0x26] == 0) {
      FUN_00428022();
    }
    puVar9 = (undefined4 *)param_1[0x26];
    puVar10 = (undefined4 *)((int)this + 400);
    for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)((int)this + 0x188) = param_1[0x28];
    psVar5 = (short *)param_1[0x22];
  }
  else {
    if (param_1[0x20] != 2) goto LAB_0041a9a8;
    if (param_1[0x21] == 0) {
      FUN_00428022();
    }
    if (param_1[0x22] == 0) {
      FUN_00428022();
    }
    *(undefined4 *)((int)this + 0x188) = param_1[0x22];
    psVar5 = (short *)param_1[0x21];
  }
  psVar5 = FUN_0040e2e2(psVar5);
  if (psVar5 != (short *)0x0) {
    cVar2 = FUN_00409553((void *)((int)this + 0x174),psVar5);
    if (cVar2 != '\0') {
      *(undefined4 *)((int)this + 0x170) = param_3;
      return 0;
    }
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0x8007000e;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0x8007000e;
    }
    FUN_00407519(0xd,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    return 0x8007000e;
  }
LAB_0041a9a8:
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_004074f5(0xc,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  return 0x80004005;
}



/* Function: FUN_0041a9e3 */

void FUN_0041a9e3(int *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_a2c;
  undefined4 *local_a28;
  int *local_a24;
  short *local_a20;
  undefined4 *local_a1c;
  int local_a18;
  wchar_t *local_a14;
  int local_a10 [512];
  short local_210 [260];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_a28 = param_2;
  local_a24 = param_3;
  local_a1c = param_4;
  memset(local_a10,0,0x800);
  *param_1 = 0;
  local_a14 = (wchar_t *)0x0;
  iVar3 = 0;
  *local_a28 = 0;
  *local_a24 = 0;
  local_210[0] = 0;
  *param_4 = 0;
  iVar1 = K32EnumProcessModules(*(undefined4 *)(local_a18 + 0x188),local_a10,0x800,&local_a2c);
  if ((iVar1 == 0) || (0x800 < local_a2c)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xe,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    uVar2 = 0;
    if (local_a2c >> 2 != 0) {
      do {
        iVar1 = K32GetModuleFileNameExW
                          (*(undefined4 *)(local_a18 + 0x188),local_a10[uVar2],local_210,0x104);
        if ((iVar1 != 0) && (local_a20 = FUN_0040e2e2(local_210), local_a20 != (short *)0x0)) {
          iVar1 = o__wcsicmp(local_a20,L"vrfcore.dll");
          if (iVar1 == 0) {
            iVar3 = local_a10[uVar2];
            local_a14 = L"vrfcore.dll";
            *local_a1c = 0;
          }
          else if ((iVar3 == 0) && (iVar1 = o__wcsicmp(local_a20,L"verifier.dll"), iVar1 == 0)) {
            iVar3 = local_a10[uVar2];
            local_a14 = L"verifier.dll";
            *local_a1c = 1;
          }
          else {
            iVar1 = o__wcsicmp(local_a20,L"werdiagcontroller.dll");
            if (iVar1 == 0) {
              *local_a24 = local_a10[uVar2];
            }
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_a2c >> 2);
      if (iVar3 != 0) {
        *param_1 = iVar3;
        *local_a28 = local_a14;
      }
    }
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041abf0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_0041abf0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  FARPROC pFVar2;
  uint uVar3;
  HMODULE hModule;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_28;
  void *local_24;
  int local_20;
  int local_1c;
  LPCWSTR local_18;
  char local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  uVar4 = 0;
  hModule = (HMODULE)0x0;
  local_1c = 0;
  local_8 = 0;
  local_20 = 0;
  *param_1 = 0;
  param_2[1] = (undefined2 *)*param_2;
  local_18 = (LPCWSTR)0x0;
  local_28 = 0;
  *(undefined2 *)*param_2 = 0;
  iVar1 = FUN_0041a9e3(&local_1c,&local_18,&local_20,&local_28);
  if (iVar1 < 0) goto LAB_0041ad52;
  if (local_1c == 0) {
    FUN_00428022();
  }
  if (local_18 == (LPCWSTR)0x0) {
    FUN_00428022();
  }
  hModule = LoadLibraryExW(local_18,(HANDLE)0x0,0);
  if (hModule == (HMODULE)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0xf;
LAB_0041ac87:
      FUN_004074f5(uVar5,&LAB_00404d64,uVar6,uVar7);
    }
  }
  else {
    pFVar2 = GetProcAddress(hModule,"VerifierGetInfoForException");
    if (pFVar2 != (FARPROC)0x0) {
      local_18 = (LPCWSTR)((int)local_24 + 4);
      (*(code *)PTR_guard_check_icall_0042e4b0)
                (*(undefined4 *)((int)local_24 + 0x188),local_1c,(int)local_24 + 400,local_11,
                 local_18);
      uVar3 = (*pFVar2)();
      if ((int)uVar3 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_00407519(0x11,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        uVar4 = uVar3 | 0x10000000;
      }
      else if (((local_11[0] != '\0') && (*(int *)local_18 != 0)) && (*param_1 = 1, local_20 != 0))
      {
        FUN_0041b620(local_24,local_20,param_2);
      }
      goto LAB_0041ad52;
    }
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0x10;
      goto LAB_0041ac87;
    }
  }
  uVar4 = 0x80004005;
LAB_0041ad52:
  if (local_28 == 0) {
    hModule = (HMODULE)0x0;
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  return uVar4;
}



/* Function: FUN_0041ad80 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __thiscall FUN_0041ad80(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  uint uVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  wchar_t *pwVar9;
  void *pvVar10;
  void *pvVar11;
  bool bVar12;
  undefined4 local_a8 [32];
  undefined2 *local_28;
  undefined2 *local_24;
  undefined2 local_20 [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_28 = local_20;
  local_20[0] = 0;
  local_8 = 0;
  local_24 = local_28;
  local_18 = this;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
     (param_3 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x12,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar2 = 0x80070057;
    goto LAB_0041b192;
  }
  memset(local_a8,0,0x80);
  pvVar11 = local_18;
  puVar7 = local_a8;
  puVar8 = param_2;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *param_3 = 0;
  pwVar9 = L"APPCRASH";
  pwVar3 = (wchar_t *)*param_1;
  pwVar5 = L"APPCRASH";
  pwVar6 = pwVar3;
  do {
    wVar1 = *pwVar6;
    bVar12 = (ushort)wVar1 < (ushort)*pwVar5;
    if (wVar1 != *pwVar5) {
LAB_0041ae1a:
      uVar2 = -(uint)bVar12 | 1;
      goto LAB_0041ae1f;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar6[1];
    bVar12 = (ushort)wVar1 < (ushort)pwVar5[1];
    if (wVar1 != pwVar5[1]) goto LAB_0041ae1a;
    pwVar6 = pwVar6 + 2;
    pwVar5 = pwVar5 + 2;
  } while (wVar1 != L'\0');
  uVar2 = 0;
LAB_0041ae1f:
  pwVar6 = pwVar3;
  if (uVar2 == 0) {
LAB_0041ae73:
    do {
      wVar1 = *pwVar3;
      bVar12 = (ushort)wVar1 < (ushort)*pwVar9;
      if (wVar1 != *pwVar9) {
LAB_0041ae99:
        uVar2 = -(uint)bVar12 | 1;
        goto LAB_0041ae9e;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar3[1];
      bVar12 = (ushort)wVar1 < (ushort)pwVar9[1];
      if (wVar1 != pwVar9[1]) goto LAB_0041ae99;
      pwVar3 = pwVar3 + 2;
      pwVar9 = pwVar9 + 2;
    } while (wVar1 != L'\0');
    uVar2 = 0;
LAB_0041ae9e:
    if ((uVar2 != 0) || (iVar4 = param_1[0x1f], iVar4 == 8)) {
      pwVar5 = L"MoAppCrash";
      pwVar3 = pwVar6;
      do {
        wVar1 = *pwVar3;
        bVar12 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_0041aed4:
          uVar2 = -(uint)bVar12 | 1;
          goto LAB_0041aed9;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar3[1];
        bVar12 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_0041aed4;
        pwVar3 = pwVar3 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      uVar2 = 0;
LAB_0041aed9:
      if ((uVar2 != 0) || (iVar4 = param_1[0x1f], iVar4 == 9)) {
        local_14 = 0;
        uVar2 = FUN_0041abf0(&local_14,&local_28);
        if ((int)uVar2 < 0) {
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
            FUN_004074f5(0x14,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          goto LAB_0041b192;
        }
        if (local_14 != 0) {
          pwVar3 = (wchar_t *)*param_1;
          pwVar6 = L"MoAppCrash";
          do {
            wVar1 = *pwVar3;
            bVar12 = (ushort)wVar1 < (ushort)*pwVar6;
            if (wVar1 != *pwVar6) {
LAB_0041af93:
              uVar2 = -(uint)bVar12 | 1;
              goto LAB_0041af98;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar3[1];
            bVar12 = (ushort)wVar1 < (ushort)pwVar6[1];
            if (wVar1 != pwVar6[1]) goto LAB_0041af93;
            pwVar3 = pwVar3 + 2;
            pwVar6 = pwVar6 + 2;
          } while (wVar1 != L'\0');
          uVar2 = 0;
LAB_0041af98:
          local_14 = 0;
          if (uVar2 == 0) {
            if (param_1[0x1f] != 0) {
              pvVar10 = (void *)((int)pvVar11 + 0x18);
              puVar7 = param_1 + 2;
              do {
                FUN_00409553((void *)((int)pvVar10 + -0x10),(short *)puVar7[-1]);
                FUN_00409553(pvVar10,(short *)*puVar7);
                puVar8 = puVar7 + 1;
                puVar7 = puVar7 + 3;
                *(undefined4 *)((int)pvVar10 + 0x10) = *puVar8;
                pvVar10 = (void *)((int)pvVar10 + 0x24);
                local_14 = local_14 + 1;
                pvVar11 = local_18;
              } while (local_14 < (uint)param_1[0x1f]);
            }
            FUN_0040a6a0((undefined4 *)((int)pvVar11 + 0x104),0x1d50,
                         *(HINSTANCE *)((int)pvVar11 + 0x170));
            FUN_0040ffdb((int *)((int)pvVar11 + 0x114),L"%s/%x");
            FUN_0040a6a0((undefined4 *)((int)pvVar11 + 0x14c),0x1d61,
                         *(HINSTANCE *)((int)pvVar11 + 0x170));
            FUN_0040ff24((void *)((int)pvVar11 + 0x15c),&local_28);
            iVar4 = 10;
            *param_2 = L"MoAutoVerifier";
            puVar7 = param_2 + 2;
            puVar8 = (undefined4 *)((int)pvVar11 + 0x18);
            do {
              puVar7[-1] = puVar8[-4];
              *puVar7 = *puVar8;
              puVar7[1] = puVar8[4];
              iVar4 = iVar4 + -1;
              puVar7 = puVar7 + 3;
              puVar8 = puVar8 + 9;
            } while (iVar4 != 0);
          }
          else {
            if (param_1[0x1f] != 0) {
              pvVar10 = (void *)((int)pvVar11 + 0x18);
              puVar7 = param_1 + 2;
              do {
                FUN_00409553((void *)((int)pvVar10 + -0x10),(short *)puVar7[-1]);
                FUN_00409553(pvVar10,(short *)*puVar7);
                puVar8 = puVar7 + 1;
                puVar7 = puVar7 + 3;
                *(undefined4 *)((int)pvVar10 + 0x10) = *puVar8;
                pvVar10 = (void *)((int)pvVar10 + 0x24);
                local_14 = local_14 + 1;
                pvVar11 = local_18;
              } while (local_14 < (uint)param_1[0x1f]);
            }
            FUN_0040a6a0((undefined4 *)((int)pvVar11 + 0x128),0x1d50,
                         *(HINSTANCE *)((int)pvVar11 + 0x170));
            FUN_0040ffdb((int *)((int)pvVar11 + 0x138),&DAT_00402b50);
            FUN_0040a6a0((undefined4 *)((int)pvVar11 + 0x14c),0x1d61,
                         *(HINSTANCE *)((int)pvVar11 + 0x170));
            FUN_0040ff24((void *)((int)pvVar11 + 0x15c),&local_28);
            iVar4 = 10;
            *param_2 = L"AutoVerifierV2";
            puVar7 = param_2 + 2;
            puVar8 = (undefined4 *)((int)pvVar11 + 0x18);
            do {
              puVar7[-1] = puVar8[-4];
              *puVar7 = *puVar8;
              puVar7[1] = puVar8[4];
              iVar4 = iVar4 + -1;
              puVar7 = puVar7 + 3;
              puVar8 = puVar8 + 9;
            } while (iVar4 != 0);
          }
          param_2[0x1f] = 10;
          *param_3 = 1;
          *(undefined4 *)((int)pvVar11 + 0x1e4) = 1;
          uVar2 = FUN_0041c518();
          if ((((int)uVar2 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_004074f5(0x15,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          uVar2 = 0;
          goto LAB_0041b192;
        }
        goto LAB_0041ae67;
      }
    }
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_0041a523(*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),iVar4,pwVar6);
    }
    uVar2 = 0x80004005;
  }
  else {
    pwVar5 = L"MoAppCrash";
    do {
      bVar12 = (ushort)*pwVar3 < (ushort)*pwVar5;
      if (*pwVar3 != *pwVar5) {
LAB_0041ae5e:
        uVar2 = -(uint)bVar12 | 1;
        pwVar3 = pwVar6;
        goto LAB_0041ae63;
      }
      if (*pwVar3 == L'\0') break;
      wVar1 = pwVar3[1];
      bVar12 = (ushort)wVar1 < (ushort)pwVar5[1];
      local_14 = CONCAT22(wVar1,(undefined2)local_14);
      pwVar6 = (wchar_t *)*param_1;
      if (wVar1 != pwVar5[1]) goto LAB_0041ae5e;
      pwVar3 = pwVar3 + 2;
      pwVar5 = pwVar5 + 2;
    } while (wVar1 != L'\0');
    uVar2 = 0;
    pwVar3 = pwVar6;
LAB_0041ae63:
    pwVar6 = pwVar3;
    if (uVar2 == 0) goto LAB_0041ae73;
LAB_0041ae67:
    uVar2 = 0x80004001;
  }
LAB_0041b192:
  if (local_28 != local_20) {
    FUN_0042a48f(local_28);
  }
  return uVar2;
}



/* Function: FUN_0041b1c0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0041b417) */

uint __thiscall FUN_0041b1c0(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  DWORD DVar5;
  void *extraout_ECX;
  void *pvVar6;
  undefined4 uStackY_48;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0;
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x16,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  *param_3 = 0;
  pvVar6 = this;
  if (((param_2[1] == 0xc) || (param_2[1] == 6)) && (*(int *)((int)this + 0x1e4) != 0)) {
    local_14[0] = 0;
    uVar2 = WerpGetReportFlags(*param_2,local_14);
    if ((int)uVar2 < 0) {
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return uVar2;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return uVar2;
      }
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uStackY_48 = 0x17;
    }
    else {
      local_14[0] = local_14[0] | 0x800;
      uVar2 = WerpSetReportFlags(*param_2,local_14[0]);
      pvVar6 = extraout_ECX;
      if (-1 < (int)uVar2) goto LAB_0041b2aa;
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return uVar2;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return uVar2;
      }
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uStackY_48 = 0x18;
    }
LAB_0041b258:
    FUN_00407519(uStackY_48,&LAB_00404d64,uVar7,uVar9);
  }
  else {
LAB_0041b2aa:
    if ((((param_2[1] == 9) && (param_2[3] == 2)) &&
        (cVar1 = FUN_0042ad52((uint3)pvVar6), cVar1 != '\0')) &&
       (BVar3 = IsWindow((HWND)param_2[4]), BVar3 != 0)) {
      *(int *)((int)this + 0x18c) = param_2[4];
      *param_3 = 1;
      return 0;
    }
    if (param_2[1] == 3) {
      if (*(int *)((int)this + 0x1e0) == 1) {
        uVar2 = FUN_0041b4b7(param_2[4],param_2[5]);
        if (-1 < (int)uVar2) {
          return uVar2;
        }
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return uVar2;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return uVar2;
        }
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uStackY_48 = 0x19;
        goto LAB_0041b258;
      }
    }
    else if (((param_2[1] == 1) && (param_2[3] != 0)) &&
            ((param_2[4] != 0 && (iVar4 = o__wcsicmp(param_2[3],L"Autoverifier"), iVar4 == 0)))) {
      DVar5 = FUN_004252c8((int)this + 0x1e8,0x15,(int *)&PTR_u_GlobalFlag_0042d0b0,0x15,
                           (short *)param_2[4]);
      if ((int)DVar5 < 0) {
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return DVar5;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return DVar5;
        }
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0x1a;
      }
      else {
        DVar5 = FUN_0041c119(this,*param_2);
        if (-1 < (int)DVar5) {
          *param_3 = 1;
          return 0;
        }
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return DVar5;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return DVar5;
        }
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0x1b;
      }
      FUN_004074f5(uVar8,&LAB_00404d64,uVar7,uVar9);
      return DVar5;
    }
    uVar2 = 0x80004001;
  }
  return uVar2;
}



/* Function: FUN_0041b436 */

void __fastcall FUN_0041b436(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00401174;
  _eh_vector_destructor_iterator_(param_1 + 0x7a,0x224,0x15,FUN_0041a6b0);
  FUN_004095b0(param_1 + 0x5d);
  _eh_vector_destructor_iterator_(param_1 + 2,0x24,10,FUN_004187d0);
  *param_1 = &PTR_o__purecall_0040112c;
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0041b4b7 */

uint FUN_0041b4b7(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 *local_28;
  undefined2 *local_24;
  undefined2 local_20 [4];
  WCHAR *local_18;
  WCHAR *local_14;
  WCHAR local_10 [6];
  
  local_18 = local_10;
  local_10[0] = L'\0';
  local_28 = local_20;
  local_20[0] = 0;
  local_24 = local_28;
  local_14 = local_18;
  uVar1 = FUN_0040ffdb((int *)&local_18,
                       L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\%s\\Autoverifier"
                      );
  if ((int)uVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041b5df;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar3 = 0x1c;
  }
  else {
    if (param_2 == 0) {
      uVar1 = FUN_0040ffdb((int *)&local_28,L"%s@%s");
    }
    else {
      uVar1 = FUN_0040ffdb((int *)&local_28,L"%s:%s@%s");
    }
    if ((int)uVar1 < 0) goto LAB_0041b5df;
    uVar2 = RegSetKeyValueW((HKEY)0x80000001,local_18,L"OriginalBucket",1,local_28,
                            ((int)local_24 - (int)local_28 >> 1) * 2 + 2);
    if (uVar2 == 0) {
      uVar1 = 0;
      goto LAB_0041b5df;
    }
    uVar1 = uVar2 & 0xffff | 0x80070000;
    if ((int)uVar2 < 1) {
      uVar1 = uVar2;
    }
    if (-1 < (int)uVar1) {
      uVar1 = 0x80004005;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041b5df;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar3 = 0x1d;
  }
  FUN_00407519(uVar3,&LAB_00404d64,uVar4,uVar5);
LAB_0041b5df:
  if (local_28 != local_20) {
    FUN_0042a48f(local_28);
  }
  if (local_18 != local_10) {
    FUN_0042a48f(local_18);
  }
  return uVar1;
}



/* Function: FUN_0041b620 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0041b620(void *this,undefined4 param_1,undefined4 *param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  short local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x210;
  local_8 = 0x41b62f;
  param_2[1] = (undefined2 *)*param_2;
  *(undefined2 *)*param_2 = 0;
  hModule = LoadLibraryExW(L"werdiagcontroller.dll",(HANDLE)0x0,0);
  local_8 = 0;
  if (hModule == (HMODULE)0x0) {
    GetLastError();
  }
  else {
    pFVar1 = GetProcAddress(hModule,"QueryOriginalBucket");
    if (pFVar1 == (FARPROC)0x0) {
      GetLastError();
    }
    else {
      (*(code *)PTR_guard_check_icall_0042e4b0)
                (*(undefined4 *)((int)this + 0x188),param_1,local_214,0x100);
      iVar2 = (*pFVar1)();
      if (-1 < iVar2) {
        FUN_00409553(param_2,local_214);
      }
    }
    FreeLibrary(hModule);
  }
  FUN_0042ae87();
  return;
}



/* Function: FUN_0041b71d */

int __thiscall FUN_0041b71d(void *this,uint *param_1)

{
  PHKEY phkResult;
  LSTATUS LVar1;
  undefined4 extraout_ECX;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD *lpdwDisposition;
  HKEY local_10;
  DWORD local_c [2];
  
  local_10 = (HKEY)0x0;
  if (param_1 == (uint *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x1e,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    iVar2 = -0x7ff8ffa9;
    goto LAB_0041b86f;
  }
  iVar2 = FUN_0041b88b(this,param_1);
  if (iVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041b86f;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar3 = 0x1f;
  }
  else {
    if (*param_1 == 0) {
LAB_0041b869:
      iVar2 = 0;
      goto LAB_0041b86f;
    }
    lpdwDisposition = local_c;
    phkResult = (PHKEY)FUN_00408c7e(&local_10);
    LVar1 = RegCreateKeyExW((HKEY)0x80000001,
                            L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins",0,
                            (LPWSTR)0x0,0,5,(LPSECURITY_ATTRIBUTES)0x0,phkResult,lpdwDisposition);
    if (LVar1 != 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x20,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      iVar2 = -0x7fffbffb;
      goto LAB_0041b86f;
    }
    iVar2 = FUN_0042522c(local_10,(LPCWSTR)0x0,extraout_ECX,2,param_1);
    if (iVar2 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041b86f;
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar3 = 0x21;
    }
    else {
      if ((*param_1 == 0) || (iVar2 = FUN_0041b9db(param_1), -1 < iVar2)) goto LAB_0041b869;
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041b86f;
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar3 = 0x22;
    }
  }
  FUN_004074f5(uVar3,&LAB_00404d64,uVar4,uVar5);
LAB_0041b86f:
  if (local_10 != (HKEY)0x0) {
    RegCloseKey(local_10);
  }
  return iVar2;
}



/* Function: FUN_0041b88b */

void __thiscall FUN_0041b88b(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  _MEMORYSTATUSEX local_50;
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  memset(&local_50,0,0x40);
  if (param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x23,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    local_50.dwLength = 0x40;
    GlobalMemoryStatusEx(&local_50);
    *param_1 = 1;
    puVar4 = (uint *)((int)this + 0x404);
    iVar3 = 0;
    uVar5 = 0;
    do {
      iVar2 = o__wcsicmp(puVar4 + -0x86,L"Version");
      if (((((iVar2 == 0) && (*puVar4 != 0)) && (*(uint *)((int)this + 0x184) < *puVar4)) ||
          ((iVar2 = o__wcsicmp(puVar4 + -0x86,L"MinRamAmount"), iVar2 == 0 &&
           ((local_50.ullTotalPhys._0_4_ >> 0x14 | local_50.ullTotalPhys._4_4_ << 0xc) + 0x20 <
            *puVar4)))) ||
         ((iVar2 = o__wcsicmp(puVar4 + -0x86,L"AutoVerifierCount"), iVar2 == 0 && (*puVar4 == 0))))
      {
        *param_1 = 0;
        break;
      }
      if (((puVar4[-0x87] == 4) && (uVar1 = *(uint *)((int)&DAT_0042d0bc + uVar5), uVar1 != 0)) &&
         (uVar1 < *puVar4)) {
        *(uint *)(iVar3 * 0x224 + 0x404 + (int)this) = uVar1;
        break;
      }
      uVar5 = uVar5 + 0x18;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x89;
    } while (uVar5 < 0x1f8);
  }
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041b9db */

undefined4 FUN_0041b9db(uint *param_1)

{
  undefined4 uVar1;
  LSTATUS LVar2;
  int local_c [2];
  
  if (param_1 == (uint *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x24,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar1 = 0x80070057;
  }
  else {
    local_c[1] = 4;
    uVar1 = 0;
    *param_1 = 0;
    LVar2 = RegGetValueW((HKEY)0x80000001,
                         L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\Autoverifier"
                         ,L"AutoverifierEnabled",0x10,(LPDWORD)0x0,local_c,(LPDWORD)(local_c + 1));
    if (LVar2 == 0) {
      *param_1 = (uint)(local_c[0] != 1);
    }
    else if (LVar2 == 2) {
      *param_1 = 1;
    }
    else {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x25,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      uVar1 = 0x80004005;
    }
  }
  return uVar1;
}



/* Function: FUN_0041ba99 */

undefined4 FUN_0041ba99(void)

{
  PHKEY ppHVar1;
  LSTATUS LVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DWORD *lpdwDisposition;
  HKEY local_14;
  HKEY local_10;
  DWORD local_c [2];
  
  lpdwDisposition = local_c;
  uVar4 = 0;
  local_10 = (HKEY)0x0;
  local_14 = (HKEY)0x0;
  ppHVar1 = (PHKEY)FUN_00408c7e(&local_14);
  LVar2 = RegCreateKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins",0,
                          (LPWSTR)0x0,0,0x60004,(LPSECURITY_ATTRIBUTES)0x0,ppHVar1,lpdwDisposition);
  if (LVar2 == 0) {
    iVar3 = FUN_004258b1(0x80000002);
    if (((iVar3 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
      FUN_00407519(0x27,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    ppHVar1 = (PHKEY)FUN_00408c7e(&local_10);
    LVar2 = RegCreateKeyExW(local_14,L"Autoverifier",0,(LPWSTR)0x0,1,0x60002,
                            (LPSECURITY_ATTRIBUTES)0x0,ppHVar1,local_c);
    if (LVar2 == 0) {
      iVar3 = FUN_004258b1(0x80000002);
      if (((iVar3 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
         ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
        FUN_00407519(0x29,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      LVar2 = RegSetValueExW(local_10,L"AutoverifierEnabled",0,4,&stack0x00000004,4);
      if (LVar2 == 0) goto LAB_0041bc00;
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar5 = 0x2a;
        goto LAB_0041bbf5;
      }
    }
    else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
            ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0x28;
      goto LAB_0041bbf5;
    }
  }
  else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
          ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar5 = 0x26;
LAB_0041bbf5:
    FUN_004074f5(uVar5,&LAB_00404d64,uVar6,uVar4);
  }
  uVar4 = 0x80004005;
LAB_0041bc00:
  if (local_14 != (HKEY)0x0) {
    RegCloseKey(local_14);
  }
  if (local_10 != (HKEY)0x0) {
    RegCloseKey(local_10);
  }
  return uVar4;
}



/* Function: FUN_0041bc33 */

undefined4 __thiscall FUN_0041bc33(void *this,undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_64;
  uint local_60;
  undefined2 *local_5c;
  undefined2 *local_58;
  undefined2 local_54 [4];
  undefined2 *local_4c;
  undefined2 *local_48;
  undefined2 local_44 [4];
  undefined2 *local_3c;
  undefined2 *local_38;
  undefined2 local_34 [4];
  undefined2 *local_2c;
  undefined2 *local_28;
  undefined2 local_24 [4];
  undefined2 *local_1c;
  undefined2 *puStack_18;
  undefined2 *puStack_14;
  undefined2 *puStack_10;
  undefined4 uStack_c;
  
  local_2c = local_24;
  local_24[0] = 0;
  local_3c = local_34;
  local_34[0] = 0;
  local_4c = local_44;
  local_44[0] = 0;
  local_5c = local_54;
  local_54[0] = 0;
  local_1c = (undefined2 *)0x0;
  uVar3 = 0;
  local_64 = 0;
  local_60 = 0;
  puStack_18 = (undefined2 *)0x0;
  puStack_14 = (undefined2 *)0x0;
  puStack_10 = (undefined2 *)0x0;
  uStack_c = 0;
  local_58 = local_5c;
  local_48 = local_4c;
  local_38 = local_3c;
  local_28 = local_2c;
  iVar1 = FUN_0040ebee();
  if (((iVar1 == 0) && (iVar1 = FUN_004287f9(), iVar1 != 0)) &&
     (iVar1 = WerpGetReportFlags(param_1,&local_60), -1 < iVar1)) {
    if ((local_60 & 0x180000) == 0) {
      DVar2 = FUN_0040a6a0(&local_2c,0x1d57,*(HINSTANCE *)((int)this + 0x170));
      if ((int)DVar2 < 0) {
        uVar3 = local_64;
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041be71;
        uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x2b;
      }
      else {
        DVar2 = FUN_0040a6a0(&local_3c,0x1d58,*(HINSTANCE *)((int)this + 0x170));
        if ((int)DVar2 < 0) {
          uVar3 = local_64;
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041be71;
          uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar4 = 0x2c;
        }
        else {
          DVar2 = FUN_0040a6a0(&local_4c,0x1d5a,*(HINSTANCE *)((int)this + 0x170));
          if ((int)DVar2 < 0) {
            uVar3 = local_64;
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041be71;
            uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar4 = 0x2d;
          }
          else {
            DVar2 = FUN_0040a6a0(&local_5c,0x1d5b,*(HINSTANCE *)((int)this + 0x170));
            if (-1 < (int)DVar2) {
              local_1c = local_2c;
              puStack_18 = local_3c;
              puStack_14 = local_4c;
              puStack_10 = local_5c;
              iVar1 = WerpPromptUser(param_1,*(undefined4 *)((int)this + 0x18c),&local_1c,&local_64)
              ;
              if (iVar1 < 0) {
                if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                   ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                  FUN_00407519(0x2f,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                               *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
                }
                local_64 = 0;
                uVar3 = local_64;
              }
              else {
                FUN_00427607((HKEY)0x80000001,
                             L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins");
                uVar3 = local_64;
              }
              goto LAB_0041be71;
            }
            uVar3 = local_64;
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041be71;
            uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar4 = 0x2e;
          }
        }
      }
      FUN_00407519(uVar4,&LAB_00404d64,uVar5,uVar3);
      uVar3 = local_64;
    }
    else {
      uVar3 = 1;
    }
  }
LAB_0041be71:
  if (local_5c != local_54) {
    FUN_0042a48f(local_5c);
  }
  if (local_4c != local_44) {
    FUN_0042a48f(local_4c);
  }
  if (local_3c != local_34) {
    FUN_0042a48f(local_3c);
  }
  if (local_2c != local_24) {
    FUN_0042a48f(local_2c);
  }
  return uVar3;
}



/* Function: FUN_0041bedf */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0041bedf(int param_1)

{
  LSTATUS LVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_b24 [8];
  undefined4 local_b1c;
  undefined4 local_af0;
  DWORD local_aec;
  int local_ae8;
  undefined2 local_ae4;
  undefined1 local_ae2 [22];
  int local_acc;
  int local_ac8;
  undefined4 local_57c;
  undefined4 local_564;
  int local_55c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb14;
  local_8 = 0x41beee;
  local_57c = local_57c & 0xffff0000;
  memset((void *)((int)&local_57c + 2),0,0x566);
  local_ae4 = 0;
  memset(local_ae2,0,0x566);
  FUN_00408bbb((undefined2 *)local_b24);
  local_8 = 0;
  local_ae8 = 0;
  if (param_1 == 0) {
    local_aec = 4;
    LVar1 = RegGetValueW((HKEY)0x80000002,L"SYSTEM\\CurrentControlSet\\Control\\Session Manager",
                         L"ImageExecutionOptions",0x10,(LPDWORD)0x0,&local_ae8,&local_aec);
    if ((LVar1 == 0) && (local_ae8 != 0)) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
        FUN_004074f5(0x30,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_0041c0fe;
    }
  }
  iVar2 = FUN_00408c1b(local_b24,1,L"Software\\Microsoft\\Windows\\Windows Error Reporting",
                       L"ErrorPort");
  if (iVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c0fe;
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar6 = 0x31;
  }
  else {
    uVar3 = FUN_00409006(local_b24,(HKEY)0x80000002,0);
    if ((int)uVar3 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c0fe;
      uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar6 = 0x32;
    }
    else {
      if (local_b24[0] != '\0') {
        local_af0 = local_b1c;
      }
      local_57c = 0x5680550;
      local_564 = 0x80000000;
      local_55c = param_1;
      uVar4 = FUN_0040e745(local_af0,&local_57c,(undefined4 *)&local_ae4);
      uVar5 = RtlNtStatusToDosError(uVar4);
      uVar3 = uVar5 & 0xffff | 0x80070000;
      if ((int)uVar5 < 1) {
        uVar3 = uVar5;
      }
      if ((int)uVar3 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c0fe;
        uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar6 = 0x33;
      }
      else {
        if (local_acc == -0x7fffffff) {
          if (local_ac8 < 0) {
            FUN_00428022();
          }
          goto LAB_0041c0fe;
        }
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c0fe;
        uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar6 = 0x34;
      }
    }
  }
  FUN_00407519(uVar6,&LAB_00404d64,uVar7,uVar4);
LAB_0041c0fe:
  FUN_00408bf7((int)local_b24);
  FUN_0042ae87();
  return;
}



/* Function: FUN_0041c119 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

DWORD __thiscall FUN_0041c119(void *this,int param_1)

{
  int iVar1;
  PHKEY ppHVar2;
  LSTATUS LVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  DWORD DVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  LPDWORD lpdwDisposition;
  DWORD local_24;
  uint local_20;
  HKEY local_1c;
  HKEY local_18;
  HKEY local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_18 = (HKEY)0x0;
  local_14[0] = (HKEY)0x0;
  local_1c = (HKEY)0x0;
  local_8 = 2;
  local_20 = 0;
  if (param_1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x35,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    DVar7 = 0x80070057;
    goto LAB_0041c4dd;
  }
  DVar7 = FUN_0041b71d(this,&local_20);
  if ((int)DVar7 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c4dd;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar8 = 0x36;
  }
  else if (local_20 == 0) {
    DVar7 = 1;
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 4) == 0)) goto LAB_0041c4dd;
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar8 = 0x37;
  }
  else {
    iVar1 = FUN_0041bc33(this,param_1);
    if (iVar1 == 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
        FUN_004074f5(0x38,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      DVar7 = 1;
      goto LAB_0041c4dd;
    }
    DVar7 = FUN_0041ba99();
    if ((int)DVar7 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c4dd;
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar8 = 0x39;
    }
    else {
      lpdwDisposition = (LPDWORD)0x0;
      ppHVar2 = (PHKEY)FUN_00408c7e(&local_18);
      LVar3 = RegCreateKeyExW((HKEY)0x80000001,
                              L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options"
                              ,0,(LPWSTR)0x0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,ppHVar2,
                              lpdwDisposition);
      if ((LVar3 == 0) && (local_18 != (HKEY)0x0)) {
        ppHVar2 = (PHKEY)FUN_00408c7e(local_14);
        LVar3 = RegCreateKeyExW(local_18,*(LPCWSTR *)((int)this + 0x174),0,(LPWSTR)0x0,1,0x60002,
                                (LPSECURITY_ATTRIBUTES)0x0,ppHVar2,&local_24);
        if ((LVar3 == 0) && (local_14[0] != (HKEY)0x0)) {
          iVar1 = FUN_004258b1(0x80010000);
          if (((iVar1 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
             ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
            FUN_00407519(0x3c,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          DVar7 = FUN_004256ae((int)this + 0x1e8,0x15,local_14[0],(LPCWSTR)0x0);
          if ((int)DVar7 < 0) {
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c4dd;
            uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar8 = 0x3d;
          }
          else {
            ppHVar2 = (PHKEY)FUN_00408c7e(&local_1c);
            LVar3 = RegCreateKeyExW(local_14[0],L"Autoverifier",0,(LPWSTR)0x0,1,0x60002,
                                    (LPSECURITY_ATTRIBUTES)0x0,ppHVar2,&local_24);
            if ((LVar3 != 0) || (local_1c == (HKEY)0x0)) {
              DVar7 = 0x80004005;
              if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                 ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c4dd;
              uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar8 = 0x3e;
              goto LAB_0041c4d2;
            }
            iVar1 = FUN_004258b1(0x80000002);
            if (((iVar1 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
               ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
              FUN_00407519(0x3f,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            }
            iVar1 = (int)this + 0x1ec;
            iVar6 = 0x15;
            do {
              iVar4 = o__wcsicmp(iVar1,L"AutoVerifierFlags");
              if (iVar4 == 0) {
LAB_0041c3fc:
                if (*(int *)(iVar1 + 0x21c) != 0) {
                  FUN_00428022();
                }
                uVar5 = 1;
              }
              else {
                iVar4 = o__wcsicmp(iVar1,L"AutoVerifierCount");
                if (iVar4 == 0) goto LAB_0041c3fc;
                iVar4 = o__wcsicmp(iVar1,L"AutoVerifierTimeDuration");
                if (iVar4 == 0) goto LAB_0041c3fc;
                iVar4 = o__wcsicmp(iVar1,L"AutoVerifierBucketID");
                if (iVar4 == 0) goto LAB_0041c3fc;
                uVar5 = 0;
              }
              *(undefined4 *)(iVar1 + 0x21c) = uVar5;
              iVar1 = iVar1 + 0x224;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            DVar7 = FUN_004256ae((int)this + 0x1e8,0x15,local_1c,(LPCWSTR)0x0);
            if (-1 < (int)DVar7) {
              FUN_0041bedf(1);
              *(undefined4 *)((int)this + 0x1e0) = 1;
              DVar7 = 0;
              goto LAB_0041c4dd;
            }
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c4dd;
            uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar8 = 0x40;
          }
          FUN_00407519(uVar8,&LAB_00404d64,uVar9,uVar5);
          goto LAB_0041c4dd;
        }
        DVar7 = 0x80004005;
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c4dd;
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0x3b;
      }
      else {
        DVar7 = 0x80004005;
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041c4dd;
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0x3a;
      }
    }
  }
LAB_0041c4d2:
  FUN_004074f5(uVar8,&LAB_00404d64,uVar9,uVar5);
LAB_0041c4dd:
  if (local_1c != (HKEY)0x0) {
    RegCloseKey(local_1c);
  }
  if (local_14[0] != (HKEY)0x0) {
    RegCloseKey(local_14[0]);
  }
  if (local_18 != (HKEY)0x0) {
    RegCloseKey(local_18);
  }
  return DVar7;
}



/* Function: FUN_0041c518 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_0041c518(void)

{
  int iVar1;
  uint uVar2;
  LSTATUS LVar3;
  WCHAR *local_20;
  WCHAR *local_1c;
  WCHAR local_18 [8];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_20 = local_18;
  local_18[0] = L'\0';
  local_8 = 0;
  local_1c = local_20;
  FUN_0041bedf(0);
  iVar1 = FUN_0041ba99();
  if (((iVar1 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_004074f5(0x41,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  uVar2 = FUN_0040ffdb((int *)&local_20,
                       L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\%s"
                      );
  if ((int)uVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x42,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    LVar3 = RegDeleteKeyW((HKEY)0x80000001,local_20);
    if (LVar3 == 0) {
      uVar2 = 0;
    }
    else {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x43,&LAB_00404d64,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      uVar2 = 0x80004005;
    }
  }
  if (local_20 != local_18) {
    FUN_0042a48f(local_20);
  }
  return uVar2;
}



/* Function: FUN_0041c614 */

void __fastcall
FUN_0041c614(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            wchar_t *param_5,wchar_t *param_6)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  iVar3 = 10;
  iVar5 = iVar3;
  if (param_6 != (wchar_t *)0x0) {
    pwVar4 = param_6;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    iVar5 = ((int)pwVar4 - (int)(param_6 + 1) >> 1) * 2 + 2;
  }
  pwVar4 = L"NULL";
  if (param_6 != (wchar_t *)0x0) {
    pwVar4 = param_6;
  }
  if (param_5 != (wchar_t *)0x0) {
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
  EtwTraceMessage(param_3,param_4,0x2b,param_2,param_1,pwVar2,iVar3,pwVar4,iVar5,0);
  return;
}



/* Function: FUN_0041c6b6 */

void FUN_0041c6b6(undefined4 param_1,undefined4 param_2)

{
  EtwTraceMessage(param_1,param_2,0x2b,&DAT_00404ea0,0x17,&stack0x0000000c,4,0);
  return;
}



/* Function: FUN_0041c6e5 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_0041c6e5(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_0040118c;
  memset(param_1 + 1,0,0x168);
  _eh_vector_constructor_iterator_(param_1 + 1,0x24,10,FUN_004187a0,FUN_004187d0);
  puVar1 = param_1 + 0x5d;
  param_1[0x5b] = puVar1;
  param_1[0x5c] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 99;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = puVar1;
  param_1[0x62] = puVar1;
  *(undefined2 *)puVar1 = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  memset(param_1 + 0x6a,0,0x334);
  memset(param_1 + 0x137,0,0x218);
  param_1[0x1bd] = 0;
  return param_1;
}



/* Function: FUN_0041c7c0 */

undefined4 * __thiscall FUN_0041c7c0(void *this,byte param_1)

{
  FUN_0041c811((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041c7f0 */

undefined4 __fastcall FUN_0041c7f0(int param_1)

{
  HMODULE hLibModule;
  
  hLibModule = *(HMODULE *)(param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  if (hLibModule != (HMODULE)0x0) {
    FreeLibrary(hLibModule);
  }
  return 0;
}



/* Function: FUN_0041c811 */

void __fastcall FUN_0041c811(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_0040118c;
  FUN_0041c7f0((int)param_1);
  if ((HMODULE)param_1[0x69] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[0x69]);
  }
  FUN_004095b0(param_1 + 0x61);
  FUN_004095b0(param_1 + 0x5b);
  _eh_vector_destructor_iterator_(param_1 + 1,0x24,10,FUN_004187d0);
  *param_1 = &PTR_o__purecall_0040112c;
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0041c8a0 */

void __thiscall FUN_0041c8a0(void *this,undefined4 *param_1)

{
  wchar_t wVar1;
  int *piVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  uint uVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_22c;
  undefined4 local_228;
  undefined4 *local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined2 local_218 [262];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&local_22c;
  local_22c = 0;
  local_228 = 0;
  local_224 = param_1;
  local_21c = 0x104;
  local_218[0] = 0;
  if (param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0041cc33;
  }
  pwVar4 = (wchar_t *)*param_1;
  pwVar8 = L"APPCRASH";
  pwVar6 = pwVar4;
  do {
    wVar1 = *pwVar6;
    local_220 = 1;
    bVar11 = (ushort)wVar1 < (ushort)*pwVar8;
    if (wVar1 != *pwVar8) {
LAB_0041c94a:
      uVar5 = -(uint)bVar11 | 1;
      goto LAB_0041c94f;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar6[1];
    bVar11 = (ushort)wVar1 < (ushort)pwVar8[1];
    if (wVar1 != pwVar8[1]) goto LAB_0041c94a;
    pwVar6 = pwVar6 + 2;
    pwVar8 = pwVar8 + 2;
  } while (wVar1 != L'\0');
  uVar5 = 0;
LAB_0041c94f:
  if (uVar5 == 0) {
LAB_0041c9be:
    if (param_1[0x20] != 1) {
      FUN_00428022();
    }
    if (param_1[0x28] == 0) {
      FUN_00428022();
    }
    if (param_1[0x26] == 0) {
      FUN_00428022();
    }
    if (param_1[0x29] == 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
        FUN_00407519(0xc,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_0041cc33;
    }
    piVar2 = (int *)param_1[0x26];
    if ((*piVar2 == -0x3ffffbf7) || ((*piVar2 == -0x3ffffffb && (piVar2[5] == 8)))) {
      *(undefined4 *)((int)this + 0x6f4) = 1;
    }
    *(undefined4 *)((int)this + 0x17c) = param_1[0x28];
    *(undefined4 *)((int)this + 0x180) = param_1[0x29];
    if ((short *)param_1[0x2a] != (short *)0x0) {
      FUN_00409553((void *)((int)this + 0x184),(short *)param_1[0x2a]);
    }
    uVar14 = *(undefined4 *)((int)this + 0x17c);
    *(undefined4 *)((int)this + 0x1a8) = 0x334;
    puVar9 = (undefined4 *)param_1[0x26];
    puVar10 = (undefined4 *)((int)this + 0x1b4);
    for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar9 = (undefined4 *)local_224[0x27];
    puVar10 = (undefined4 *)((int)this + 0x204);
    for (iVar7 = 0xb3; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)((int)this + 0x1ac) = uVar14;
    *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)((int)this + 0x180);
    *(undefined4 *)((int)this + 0x4d0) = *(undefined4 *)((int)this + 0x184);
    *(uint *)((int)this + 0x4d4) = ~((uint)local_224[0x2c] >> 2) & 1;
    iVar7 = FUN_0041cfc3(this,(int)this + 0x194,(undefined4 *)((int)this + 0x198),
                         (undefined4 *)((int)this + 0x19c),(int *)((int)this + 0x1a4),
                         (int *)((int)this + 0x1a0));
    if (iVar7 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 4) == 0)) goto LAB_0041cc33;
      uVar14 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar12 = 0xd;
    }
    else {
      if (10 < *(uint *)((int)this + 0x194)) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0xe,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        goto LAB_0041cc33;
      }
      pcVar3 = *(code **)((int)this + 0x19c);
      *(undefined4 *)((int)this + 0x4e0) = local_220;
      *(undefined4 *)((int)this + 0x4dc) = 7;
      *(undefined4 *)((int)this + 0x6f0) = local_220;
      if (pcVar3 == (code *)0x0) goto LAB_0041cc33;
      (*(code *)PTR_guard_check_icall_0042e4b0)
                (*(undefined4 *)((int)this + 0x1a0),(int)this + 0x1a8,&local_22c,local_218,
                 &local_21c,&local_228);
      iVar7 = (*pcVar3)();
      if (iVar7 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 2) == 0)) goto LAB_0041cc33;
        uVar14 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar12 = 0xf;
      }
      else {
        if (local_22c == 0) goto LAB_0041cc33;
        iVar7 = FUN_0040a406((short *)((int)this + 0x4e4),0x104,(int)local_218);
        if (-1 < iVar7) {
          *(undefined4 *)((int)this + 0x6ec) = local_228;
          goto LAB_0041cc33;
        }
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 2) == 0)) goto LAB_0041cc33;
        uVar14 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar12 = 0x10;
      }
    }
  }
  else {
    pwVar6 = L"MoAppCrash";
    do {
      wVar1 = *pwVar4;
      bVar11 = (ushort)wVar1 < (ushort)*pwVar6;
      if (wVar1 != *pwVar6) {
LAB_0041c97e:
        uVar5 = -(uint)bVar11 | 1;
        goto LAB_0041c983;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar4[1];
      bVar11 = (ushort)wVar1 < (ushort)pwVar6[1];
      if (wVar1 != pwVar6[1]) goto LAB_0041c97e;
      pwVar4 = pwVar4 + 2;
      pwVar6 = pwVar6 + 2;
    } while (wVar1 != L'\0');
    uVar5 = 0;
LAB_0041c983:
    if (uVar5 == 0) goto LAB_0041c9be;
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041cc33;
    uVar14 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar13 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar12 = 0xb;
  }
  FUN_004074f5(uVar12,&DAT_00404ea0,uVar13,uVar14);
LAB_0041cc33:
  FUN_00429fd0(local_c ^ (uint)&local_22c);
  return;
}



/* Function: FUN_0041cc60 */

int __fastcall FUN_0041cc60(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x6f0) == 1) {
    iVar1 = param_1 + 0x4dc;
  }
  return iVar1;
}



/* Function: FUN_0041cc80 */

void __thiscall FUN_0041cc80(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  undefined4 *puVar12;
  uint uVar13;
  wchar_t *pwVar14;
  void *this_00;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  void *local_4b4;
  undefined4 local_4b0;
  undefined4 *local_4ac;
  undefined4 local_4a8;
  undefined4 *local_4a4;
  undefined4 local_4a0 [32];
  short local_420 [260];
  short local_218 [262];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&local_4b4;
  local_4ac = param_3;
  local_4a4 = param_2;
  local_420[0] = 0;
  local_218[0] = 0;
  local_4b4 = this;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
     (param_3 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x11,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    memset(local_4a0,0,0x80);
    puVar10 = local_4a0;
    for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
      *param_2 = *puVar10;
      puVar10 = puVar10 + 1;
      param_2 = param_2 + 1;
    }
    *local_4ac = 0;
    pwVar14 = L"APPCRASH";
    pwVar8 = L"APPCRASH";
    pwVar11 = (wchar_t *)*param_1;
    pwVar6 = pwVar11;
    do {
      wVar1 = *pwVar6;
      bVar15 = (ushort)wVar1 < (ushort)*pwVar8;
      if (wVar1 != *pwVar8) {
LAB_0041cd35:
        uVar4 = -(uint)bVar15 | 1;
        goto LAB_0041cd3a;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar6[1];
      bVar15 = (ushort)wVar1 < (ushort)pwVar8[1];
      if (wVar1 != pwVar8[1]) goto LAB_0041cd35;
      pwVar6 = pwVar6 + 2;
      pwVar8 = pwVar8 + 2;
    } while (wVar1 != L'\0');
    uVar4 = 0;
LAB_0041cd3a:
    pwVar8 = L"MoAppCrash";
    pwVar6 = pwVar11;
    if (uVar4 != 0) {
      pwVar9 = L"MoAppCrash";
      pwVar5 = pwVar11;
      do {
        bVar15 = (ushort)*pwVar5 < (ushort)*pwVar9;
        if (*pwVar5 != *pwVar9) {
LAB_0041cd7e:
          uVar4 = -(uint)bVar15 | 1;
          goto LAB_0041cd83;
        }
        if (*pwVar5 == L'\0') break;
        wVar1 = pwVar5[1];
        bVar15 = (ushort)wVar1 < (ushort)pwVar9[1];
        local_4b0 = CONCAT22(local_4b0._2_2_,wVar1);
        if (wVar1 != pwVar9[1]) goto LAB_0041cd7e;
        pwVar5 = pwVar5 + 2;
        pwVar9 = pwVar9 + 2;
      } while (wVar1 != L'\0');
      uVar4 = 0;
LAB_0041cd83:
      this = local_4b4;
      if (uVar4 != 0) goto LAB_0041cfa6;
    }
    do {
      wVar1 = *pwVar6;
      bVar15 = (ushort)wVar1 < (ushort)*pwVar14;
      if (wVar1 != *pwVar14) {
LAB_0041cdb9:
        uVar4 = -(uint)bVar15 | 1;
        goto LAB_0041cdbe;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar6[1];
      bVar15 = (ushort)wVar1 < (ushort)pwVar14[1];
      if (wVar1 != pwVar14[1]) goto LAB_0041cdb9;
      pwVar14 = pwVar14 + 2;
      pwVar6 = pwVar6 + 2;
    } while (wVar1 != L'\0');
    uVar4 = 0;
LAB_0041cdbe:
    if ((uVar4 != 0) || (param_1[0x1f] == 8)) {
      do {
        wVar1 = *pwVar11;
        bVar15 = (ushort)wVar1 < (ushort)*pwVar8;
        if (wVar1 != *pwVar8) {
LAB_0041cdf3:
          uVar4 = -(uint)bVar15 | 1;
          goto LAB_0041cdf8;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar11[1];
        bVar15 = (ushort)wVar1 < (ushort)pwVar8[1];
        if (wVar1 != pwVar8[1]) goto LAB_0041cdf3;
        pwVar11 = pwVar11 + 2;
        pwVar8 = pwVar8 + 2;
      } while (wVar1 != L'\0');
      uVar4 = 0;
LAB_0041cdf8:
      if ((uVar4 != 0) || (param_1[0x1f] == 9)) {
        local_4b4 = (void *)0x0;
        if (*(int *)((int)this + 0x194) != 0) {
          this_00 = (void *)((int)this + 0x14);
          do {
            pcVar2 = *(code **)((int)this + 0x198);
            local_4a8 = 0x104;
            local_4b0 = 0x104;
            (*(code *)PTR_guard_check_icall_0042e4b0)
                      (*(undefined4 *)((int)this + 0x1a0),(int)this + 0x1a8,local_4b4,local_420,
                       &local_4a8,local_218,&local_4b0);
            iVar7 = (*pcVar2)();
            if (iVar7 < 0) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                uVar18 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar17 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar16 = 0x13;
LAB_0041cf6f:
                FUN_004074f5(uVar16,&DAT_00404ea0,uVar17,uVar18);
              }
              goto LAB_0041cfa6;
            }
            cVar3 = FUN_00409553((void *)((int)this_00 + -0x10),local_420);
            if ((cVar3 == '\0') || (cVar3 = FUN_00409553(this_00,local_218), cVar3 == '\0')) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                uVar18 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar17 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar16 = 0x14;
                goto LAB_0041cf6f;
              }
              goto LAB_0041cfa6;
            }
            local_4b4 = (void *)((int)local_4b4 + 1);
            this_00 = (void *)((int)this_00 + 0x24);
          } while (local_4b4 < *(void **)((int)this + 0x194));
        }
        uVar13 = 0;
        *local_4a4 = *(undefined4 *)((int)this + 0x16c);
        uVar4 = *(uint *)((int)this + 0x194);
        if (uVar4 != 0) {
          puVar10 = local_4a4 + 2;
          puVar12 = (undefined4 *)((int)this + 0x14);
          do {
            puVar10[-1] = puVar12[-4];
            uVar18 = *puVar12;
            puVar12 = puVar12 + 9;
            puVar10[1] = 0;
            uVar13 = uVar13 + 1;
            *puVar10 = uVar18;
            puVar10 = puVar10 + 3;
            uVar4 = *(uint *)((int)this + 0x194);
          } while (uVar13 < uVar4);
        }
        local_4a4[0x1f] = uVar4;
        *local_4ac = 1;
        goto LAB_0041cfa6;
      }
    }
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x12,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
LAB_0041cfa6:
  FUN_00429fd0(local_c ^ (uint)&local_4b4);
  return;
}



/* Function: FUN_0041cfc3 */

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */

int __thiscall
FUN_0041cfc3(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
            int *param_5)

{
  SIZE_T nSize;
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  BOOL BVar4;
  int *lpBuffer;
  undefined3 extraout_var;
  SIZE_T *pSVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  SIZE_T SVar8;
  undefined4 uVar9;
  uint local_258;
  SIZE_T local_250;
  LPCVOID local_24c;
  int local_248;
  SIZE_T local_244 [6];
  WCHAR local_22c [268];
  void *pvStack_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0042c718;
  uStack_c = 0x41cfd2;
  local_24c = (LPCVOID)0x0;
  local_258 = 0;
  local_248 = 0;
  puVar2 = (undefined4 *)((int)this + 0x17c);
  iVar3 = FUN_004175f4((HANDLE)*puVar2,(int *)&local_24c);
  if ((iVar3 < 0) && (iVar3 != -0x7ff8fb70)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x15,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      iVar3 = FUN_0041d48b();
      return iVar3;
    }
    ExceptionList = pvStack_14;
    return iVar3;
  }
  if (local_24c == (LPCVOID)0x0) {
    if (iVar3 != -0x7ff8fb70) {
      FUN_00428022();
    }
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
      FUN_004074f5(0x16,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    iVar3 = FUN_0041d48b();
    return iVar3;
  }
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 8) != 0)) {
    FUN_0041c6b6(*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),*(undefined4 *)(PTR_LOOP_0042d098 + 0x14)
                );
  }
  local_8 = (undefined *)0x0;
  while( true ) {
    if (((local_248 != 0) || (local_24c == (LPCVOID)0x0)) || (0xf < local_258)) goto LAB_0041d43e;
    pSVar5 = local_244;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pSVar5 = 0;
      pSVar5 = pSVar5 + 1;
    }
    local_250 = 0;
    BVar4 = ReadProcessMemory((HANDLE)*puVar2,local_24c,local_244,0x18,&local_250);
    nSize = local_244[2];
    if ((BVar4 == 0) || (local_250 != 0x18)) break;
    if (0x208 < local_244[2] - 0x18) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0x21,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_0041d43e;
    }
    local_250 = 0;
    SVar8 = local_244[2];
    lpBuffer = (int *)FUN_0042a8fe(local_244[2]);
    if (lpBuffer == (int *)0x0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar6 = 0x19;
        goto LAB_0041d42d;
      }
      goto LAB_0041d43e;
    }
    local_8 = (undefined *)0x1;
    BVar4 = ReadProcessMemory((HANDLE)*puVar2,local_24c,lpBuffer,nSize,&local_250);
    if (BVar4 == 0) {
      local_24c = (LPCVOID)0x0;
    }
    else {
      local_24c = (LPCVOID)*lpBuffer;
      if (local_24c == (LPCVOID)0xffffffe8) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar7 = 0x1a;
LAB_0041d220:
          FUN_004074f5(uVar7,&DAT_00404ea0,uVar6,uVar9);
        }
      }
      else {
        local_22c[0] = L'\0';
        iVar3 = FUN_0040a406(local_22c,0x104,(int)(lpBuffer + 6));
        if (iVar3 < 0) {
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar7 = 0x1b;
            goto LAB_0041d220;
          }
        }
        else {
          uVar1 = FUN_0041d4a5(local_22c);
          if (CONCAT31(extraout_var,uVar1) == 0) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
              uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar7 = 0x1c;
              goto LAB_0041d220;
            }
          }
          else {
            if (CONCAT31(extraout_var,uVar1) == 1) {
              *(undefined4 *)((int)this + 0x6f4) = 1;
            }
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 8) != 0)) {
              FUN_004097c1(0x1d,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),local_22c);
            }
            iVar3 = FUN_0041d526(this,local_22c,lpBuffer[4],param_1,param_2,param_3,param_4);
            if (iVar3 < 0) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 8) != 0)) {
                uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar7 = 0x20;
                goto LAB_0041d390;
              }
            }
            else if (*(int *)((int)this + 0x6f4) == 0) {
              local_248 = 1;
              *param_5 = lpBuffer[4];
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 8) != 0)) {
                uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar7 = 0x1e;
LAB_0041d390:
                FUN_0040975c(uVar7,&DAT_00404ea0,uVar6,uVar9,local_22c);
              }
            }
            else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                    ((PTR_LOOP_0042d098[0x1c] & 8) != 0)) {
              uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar7 = 0x1f;
              goto LAB_0041d390;
            }
          }
        }
      }
    }
    local_8 = (undefined *)0x0;
    FUN_0041d3e5();
    local_258 = local_258 + 1;
  }
  GetLastError();
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    SVar8 = *(SIZE_T *)(PTR_LOOP_0042d098 + 0x10);
    uVar6 = 0x18;
LAB_0041d42d:
    FUN_004074f5(uVar6,&DAT_00404ea0,SVar8,uVar9);
  }
LAB_0041d43e:
  local_8 = (undefined *)0xfffffffe;
  iVar3 = FUN_0041d48b();
  return iVar3;
}



/* Function: FUN_0041d3e5 */

void FUN_0041d3e5(void)

{
  o_free();
  return;
}



/* Function: FUN_0041d48b */

void FUN_0041d48b(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}



/* Function: FUN_0041d4a5 */

char FUN_0041d4a5(LPCWSTR param_1)

{
  char cVar1;
  LSTATUS LVar2;
  
  if (param_1 == (LPCWSTR)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x23,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    cVar1 = '\0';
  }
  else {
    LVar2 = RegGetValueW((HKEY)0x80000002,
                         L"Software\\Microsoft\\Windows\\Windows Error Reporting\\RuntimeExceptionHelperModules"
                         ,param_1,0x10,(LPDWORD)0x0,(PVOID)0x0,(LPDWORD)0x0);
    if (LVar2 == 0) {
      cVar1 = '\x02';
    }
    else {
      LVar2 = RegGetValueW((HKEY)0x80000001,
                           L"Software\\Microsoft\\Windows\\Windows Error Reporting\\RuntimeExceptionHelperModules"
                           ,param_1,0x10,(LPDWORD)0x0,(PVOID)0x0,(LPDWORD)0x0);
      cVar1 = '\x01' - (LVar2 != 0);
    }
  }
  return cVar1;
}



/* Function: FUN_0041d526 */

void __thiscall
FUN_0041d526(void *this,LPCWSTR param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6)

{
  HMODULE pHVar1;
  char cVar2;
  HMODULE pHVar3;
  DWORD DVar4;
  FARPROC pFVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_224;
  undefined4 local_220;
  int local_21c;
  undefined4 *local_218;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  uVar8 = 0;
  local_218 = param_4;
  local_220 = 0;
  local_21c = 0;
  local_224 = 0;
  if ((((param_3 == 0) || (param_6 == (int *)0x0)) || (param_4 == (undefined4 *)0x0)) ||
     (param_1 == (LPCWSTR)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x24,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_0041d871;
  }
  local_214[0] = L'\0';
  RtlSetThreadErrorMode(0x10,&local_220);
  pHVar3 = LoadLibraryW(param_1);
  pHVar1 = (HMODULE)*param_6;
  *param_6 = (int)pHVar3;
  if (pHVar1 != (HMODULE)0x0) {
    FreeLibrary(pHVar1);
  }
  if (*param_6 == 0) {
    DVar4 = GetLastError();
    uVar8 = DVar4 & 0xffff | 0x80070000;
    if ((int)DVar4 < 1) {
      uVar8 = DVar4;
    }
    if (-1 < (int)uVar8) {
      uVar8 = 0x80004005;
    }
  }
  RtlSetThreadErrorMode(local_220,0);
  if ((int)uVar8 < 0) {
    puVar7 = local_218;
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x25,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      puVar7 = local_218;
    }
  }
  else {
    pFVar5 = GetProcAddress((HMODULE)*param_6,"OutOfProcessExceptionEventCallback");
    if (pFVar5 == (FARPROC)0x0) {
      puVar7 = local_218;
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x26,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        puVar7 = local_218;
      }
    }
    else {
      local_224 = 0x104;
      (*(code *)PTR_guard_check_icall_0042e4b0)
                (param_2,(int)this + 0x1a8,&local_21c,local_214,&local_224,param_3);
      iVar6 = (*pFVar5)();
      puVar7 = local_218;
      if (iVar6 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0x27,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          puVar7 = local_218;
        }
      }
      else if (local_21c != 0) {
        if (*(int *)((int)this + 0x6f4) != 0) {
          local_21c = 0;
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 4) == 0)) goto LAB_0041d830;
          FUN_0041c614(0x28,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),param_1,local_214);
        }
        puVar7 = local_218;
        if (local_21c != 0) {
          pFVar5 = GetProcAddress((HMODULE)*param_6,"OutOfProcessExceptionEventSignatureCallback");
          puVar7 = local_218;
          *local_218 = pFVar5;
          if (pFVar5 == (FARPROC)0x0) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              FUN_004074f5(0x29,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            }
          }
          else {
            cVar2 = FUN_00409553((void *)((int)this + 0x16c),local_214);
            if (cVar2 != '\0') {
              pFVar5 = GetProcAddress((HMODULE)*param_6,
                                      "OutOfProcessExceptionEventDebuggerLaunchCallback");
              *param_5 = pFVar5;
              if (((pFVar5 == (FARPROC)0x0) &&
                  ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                FUN_004074f5(0x2b,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              }
              goto LAB_0041d871;
            }
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              FUN_004074f5(0x2a,&DAT_00404ea0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            }
          }
        }
      }
    }
  }
LAB_0041d830:
  pHVar1 = (HMODULE)*param_6;
  *param_6 = 0;
  if (pHVar1 != (HMODULE)0x0) {
    FreeLibrary(pHVar1);
  }
  *puVar7 = 0;
LAB_0041d871:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041d888 */

void FUN_0041d888(undefined4 param_1,undefined4 param_2)

{
  EtwTraceMessage(param_1,param_2,0x2b,&DAT_004050c4,0x10,&stack0x0000000c,4,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_0041d8bd */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_0041d8bd(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_004011a4;
  param_1[1] = puVar1;
  param_1[2] = puVar1;
  *(undefined2 *)puVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  memset(param_1 + 0xb,0,0x448);
  _eh_vector_constructor_iterator_(param_1 + 0xb,0x224,2,FUN_0041a690,FUN_0041a6b0);
  return param_1;
}



/* Function: FUN_0041d940 */

undefined4 * __thiscall FUN_0041d940(void *this,byte param_1)

{
  FUN_0041d96d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041d96d */

void __fastcall FUN_0041d96d(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_004011a4;
  _eh_vector_destructor_iterator_(param_1 + 0xb,0x224,2,FUN_0041a6b0);
  FUN_004095b0(param_1 + 1);
  *param_1 = &PTR_o__purecall_0040112c;
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0041d9e0 */

uint __thiscall FUN_0041d9e0(void *this,undefined4 *param_1)

{
  wchar_t wVar1;
  char cVar2;
  wchar_t *pwVar3;
  DWORD DVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  pwVar3 = (wchar_t *)*param_1;
  pwVar7 = L"APPCRASH";
  pwVar6 = pwVar3;
  do {
    wVar1 = *pwVar6;
    bVar8 = (ushort)wVar1 < (ushort)*pwVar7;
    if (wVar1 != *pwVar7) {
LAB_0041da53:
      uVar5 = -(uint)bVar8 | 1;
      goto LAB_0041da58;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar6[1];
    bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
    if (wVar1 != pwVar7[1]) goto LAB_0041da53;
    pwVar6 = pwVar6 + 2;
    pwVar7 = pwVar7 + 2;
  } while (wVar1 != L'\0');
  uVar5 = 0;
LAB_0041da58:
  if (uVar5 == 0) {
LAB_0041dbaf:
    if ((param_1[0x20] != 1) && (param_1[0x20] != 2)) {
      FUN_00428022();
    }
    if (param_1[0x20] == 1) {
      if (param_1[0x22] == 0) {
        FUN_00428022();
      }
      if (param_1[0x28] == 0) {
        FUN_00428022();
      }
      if (param_1[0x24] == 0) {
        FUN_00428022();
      }
      *(undefined4 *)((int)this + 0x14) = param_1[0x24];
      cVar2 = FUN_00409553((void *)((int)this + 4),(short *)param_1[0x22]);
      uVar5 = 0x8007000e;
      if ((cVar2 == '\0') || (uVar5 = 0, *(int *)((int)this + 4) == *(int *)((int)this + 8))) {
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return uVar5;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return uVar5;
        }
        uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar9 = 0xc;
        goto LAB_0041db9f;
      }
    }
    else if (param_1[0x20] == 2) {
      if (param_1[0x21] == 0) {
        FUN_00428022();
      }
      if (param_1[0x22] == 0) {
        FUN_00428022();
      }
      DVar4 = GetProcessId((HANDLE)param_1[0x22]);
      *(DWORD *)((int)this + 0x14) = DVar4;
      cVar2 = FUN_00409553((void *)((int)this + 4),(short *)param_1[0x21]);
      uVar5 = 0x8007000e;
      if ((cVar2 == '\0') || (uVar5 = 0, *(int *)((int)this + 4) == *(int *)((int)this + 8))) {
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return uVar5;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return uVar5;
        }
        uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar9 = 0xd;
        goto LAB_0041db9f;
      }
    }
    uVar5 = FUN_0041e2f1((int)this);
    if ((int)uVar5 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0xe,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    pwVar7 = L"MoAppCrash";
    pwVar6 = pwVar3;
    do {
      wVar1 = *pwVar6;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar7;
      if (wVar1 != *pwVar7) {
LAB_0041da8d:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_0041da92;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar6[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
      if (wVar1 != pwVar7[1]) goto LAB_0041da8d;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    } while (wVar1 != L'\0');
    uVar5 = 0;
LAB_0041da92:
    if (uVar5 == 0) goto LAB_0041dbaf;
    pwVar7 = L"AppHangB1";
    pwVar6 = pwVar3;
    do {
      wVar1 = *pwVar6;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar7;
      if (wVar1 != *pwVar7) {
LAB_0041dac7:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_0041dacc;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar6[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
      if (wVar1 != pwVar7[1]) goto LAB_0041dac7;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    } while (wVar1 != L'\0');
    uVar5 = 0;
LAB_0041dacc:
    if (uVar5 == 0) goto LAB_0041dbaf;
    pwVar7 = L"AppHangXProcB1";
    pwVar6 = pwVar3;
    do {
      wVar1 = *pwVar6;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar7;
      if (wVar1 != *pwVar7) {
LAB_0041db01:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_0041db06;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar6[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
      if (wVar1 != pwVar7[1]) goto LAB_0041db01;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    } while (wVar1 != L'\0');
    uVar5 = 0;
LAB_0041db06:
    if (uVar5 == 0) goto LAB_0041dbaf;
    pwVar7 = L"MoAppHang";
    pwVar6 = pwVar3;
    do {
      wVar1 = *pwVar6;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar7;
      if (wVar1 != *pwVar7) {
LAB_0041db3b:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_0041db40;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar6[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
      if (wVar1 != pwVar7[1]) goto LAB_0041db3b;
      pwVar6 = pwVar6 + 2;
      pwVar7 = pwVar7 + 2;
    } while (wVar1 != L'\0');
    uVar5 = 0;
LAB_0041db40:
    if (uVar5 == 0) goto LAB_0041dbaf;
    pwVar6 = L"MoAppHangXProc";
    do {
      wVar1 = *pwVar3;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar6;
      if (wVar1 != *pwVar6) {
LAB_0041db6f:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_0041db74;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar3[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar6[1];
      if (wVar1 != pwVar6[1]) goto LAB_0041db6f;
      pwVar3 = pwVar3 + 2;
      pwVar6 = pwVar6 + 2;
    } while (wVar1 != L'\0');
    uVar5 = 0;
LAB_0041db74:
    if (uVar5 == 0) goto LAB_0041dbaf;
    uVar5 = 0x80004001;
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0x80004001;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0x80004001;
    }
    uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar9 = 0xb;
LAB_0041db9f:
    FUN_004074f5(uVar9,&DAT_004050c4,uVar10,uVar11);
  }
  return uVar5;
}



/* Function: FUN_0041dd20 */

DWORD __thiscall FUN_0041dd20(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  void *extraout_ECX;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint local_10;
  uint local_c [2];
  
  local_c[0] = 0;
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xf,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  *param_3 = 0;
  pvVar6 = this;
  if (((param_2[1] == 0xc) || (param_2[1] == 6)) && (*(int *)((int)this + 0x1c) != 0)) {
    local_10 = 0;
    if (*(int *)((int)this + 0x24) == 0) {
      uVar2 = FUN_0041e3e7();
      if ((int)uVar2 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
          FUN_0041d888(*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
      }
      else {
        *(undefined4 *)((int)this + 0x24) = 1;
      }
    }
    DVar3 = WerpGetReportFlags(*param_2,&local_10);
    if ((int)DVar3 < 0) {
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return DVar3;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return DVar3;
      }
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar7 = 0x11;
    }
    else {
      local_10 = local_10 | 0x800;
      DVar3 = WerpSetReportFlags(*param_2,local_10);
      pvVar6 = extraout_ECX;
      if (-1 < (int)DVar3) goto LAB_0041de3b;
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return DVar3;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return DVar3;
      }
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar7 = 0x12;
    }
    goto LAB_0041dde7;
  }
LAB_0041de3b:
  if ((((param_2[1] == 9) && (param_2[3] == 2)) &&
      (cVar1 = FUN_0042ad52((uint3)pvVar6), cVar1 != '\0')) &&
     (BVar4 = IsWindow((HWND)param_2[4]), BVar4 != 0)) {
    *(undefined4 *)((int)this + 0x28) = param_2[4];
    *param_3 = 1;
LAB_0041df3a:
    DVar3 = 0;
  }
  else {
    if (((param_2[1] != 1) || (param_2[3] == 0)) ||
       ((param_2[4] == 0 || (iVar5 = o__wcsicmp(param_2[3],L"ApplicationRecorder"), iVar5 != 0)))) {
      return 0x80004001;
    }
    if (*(int *)((int)this + 0x1c) == 0) {
      iVar5 = WerpGetReportFlags(*param_2,local_c);
      if (-1 < iVar5) {
        WerpSetReportFlags(*param_2,local_c[0] | 0x48000000);
      }
      if ((*(int *)((int)this + 0x20) != 0) ||
         (DVar3 = FUN_0041e007(this,(short *)param_2[4],*param_2), -1 < (int)DVar3))
      goto LAB_0041df31;
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return DVar3;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return DVar3;
      }
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar7 = 0x14;
    }
    else {
      DVar3 = FUN_0041df80((int)this);
      if (-1 < (int)DVar3) {
LAB_0041df31:
        *param_3 = 1;
        goto LAB_0041df3a;
      }
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return DVar3;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return DVar3;
      }
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar7 = 0x13;
    }
LAB_0041dde7:
    FUN_00407519(uVar7,&DAT_004050c4,uVar8,uVar9);
  }
  return DVar3;
}



/* Function: FUN_0041df80 */

DWORD __fastcall FUN_0041df80(int param_1)

{
  uint uVar1;
  LSTATUS LVar2;
  DWORD DVar3;
  undefined4 uStackY_14;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_0041ebb0(param_1);
  if ((int)uVar1 < 0) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return uVar1;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return uVar1;
    }
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_14 = 0x15;
  }
  else {
    LVar2 = RegDeleteKeyW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\AppRecorder"
                         );
    if (LVar2 == 0) {
      return 0;
    }
    DVar3 = GetLastError();
    uVar1 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      uVar1 = DVar3;
    }
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return uVar1;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 4) == 0) {
      return uVar1;
    }
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_14 = 0x16;
  }
  FUN_00407519(uStackY_14,&DAT_004050c4,uVar4,uVar5);
  return uVar1;
}



/* Function: FUN_0041e007 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

DWORD __thiscall FUN_0041e007(void *this,short *param_1,undefined4 param_2)

{
  int iVar1;
  PHKEY phkResult;
  LSTATUS LVar2;
  DWORD DVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  DWORD *lpdwDisposition;
  BYTE local_20 [4];
  DWORD local_1c;
  uint local_18;
  HKEY local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_18 = 0;
  local_14[0] = (HKEY)0x0;
  local_8 = 0;
  local_1c = 0;
  local_20[0] = '\x01';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  if (param_1 == (short *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x17,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    DVar3 = 0x80070057;
    goto LAB_0041e2d6;
  }
  if ((*(int *)((int)this + 0x1c) == 1) || (*(int *)((int)this + 0x20) == 1)) {
    DVar3 = 0;
    goto LAB_0041e2d6;
  }
  DVar3 = FUN_0042522c((HKEY)0x80000001,
                       L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins",1,2,
                       &local_18);
  if ((int)DVar3 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e2d6;
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar5 = 0x18;
LAB_0041e0af:
    FUN_004074f5(uVar5,&DAT_004050c4,uVar6,uVar7);
  }
  else {
    if (local_18 == 0) {
LAB_0041e2cd:
      DVar3 = 0;
      goto LAB_0041e2d6;
    }
    DVar3 = FUN_004252c8((int)this + 0x2c,2,(int *)&PTR_u_AppRecorderCount_0042d2a8,2,param_1);
    if ((int)DVar3 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e2d6;
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0x19;
    }
    else {
      local_18 = 0;
      puVar4 = (uint *)((int)this + 0x248);
      do {
        iVar1 = o__wcsicmp(puVar4 + -0x86,L"AppRecorderVersion");
        if (((iVar1 == 0) && (*puVar4 != 0)) && (1 < *puVar4)) goto LAB_0041e2cd;
        puVar4 = puVar4 + 0x89;
        local_18 = local_18 + 1;
      } while (local_18 < 2);
      iVar1 = FUN_0041e718(this,param_2);
      if (iVar1 == 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
          FUN_004074f5(0x1a,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        DVar3 = 1;
        goto LAB_0041e2d6;
      }
      DVar3 = FUN_0041e97b((int)this);
      if ((int)DVar3 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e2d6;
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar5 = 0x1b;
      }
      else {
        DVar3 = FUN_004256ae((int)this + 0x2c,2,(HKEY)0x80000001,
                             L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\AppRecorder"
                            );
        if (-1 < (int)DVar3) {
          lpdwDisposition = &local_1c;
          phkResult = (PHKEY)FUN_00408c7e(local_14);
          LVar2 = RegCreateKeyExW((HKEY)0x80000001,
                                  L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\AppRecorder"
                                  ,0,(LPWSTR)0x0,0,0x60002,(LPSECURITY_ATTRIBUTES)0x0,phkResult,
                                  lpdwDisposition);
          if (LVar2 == 0) {
            DVar3 = FUN_004258b1(0x80010002);
            if ((((int)DVar3 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
               ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
              FUN_00407519(0x1e,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            }
            LVar2 = RegSetValueExW(local_14[0],L"AppRecorderEnabled",0,4,local_20,4);
            if (LVar2 == 0) goto LAB_0041e2cd;
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e2d6;
            uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar5 = 0x1f;
          }
          else {
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e2d6;
            uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar5 = 0x1d;
          }
          goto LAB_0041e0af;
        }
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e2d6;
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar5 = 0x1c;
      }
    }
    FUN_00407519(uVar5,&DAT_004050c4,uVar6,uVar7);
  }
LAB_0041e2d6:
  if (local_14[0] != (HKEY)0x0) {
    RegCloseKey(local_14[0]);
  }
  return DVar3;
}



/* Function: FUN_0041e2f1 */

uint __fastcall FUN_0041e2f1(int param_1)

{
  uint uVar1;
  LSTATUS LVar2;
  HANDLE hObject;
  LPCWSTR local_20;
  WCHAR *local_1c;
  WCHAR local_18 [4];
  DWORD local_10;
  int local_c [2];
  
  local_20 = local_18;
  local_10 = 4;
  local_c[0] = 0;
  local_18[0] = L'\0';
  hObject = (HANDLE)0x0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_1c = local_20;
  uVar1 = FUN_0040ffdb((int *)&local_20,L"%d-AppRecorderEnabled");
  if ((int)uVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x20,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    hObject = OpenEventW(0x100000,0,local_20);
    if (1 < (int)hObject + 1U) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    LVar2 = RegGetValueW((HKEY)0x80000001,
                         L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\AppRecorder"
                         ,L"AppRecorderEnabled",0x18,(LPDWORD)0x0,local_c,&local_10);
    if (LVar2 == 0) {
      *(uint *)(param_1 + 0x20) = (uint)(local_c[0] != 0);
    }
    uVar1 = 0;
  }
  if (local_20 != local_18) {
    FUN_0042a48f(local_20);
  }
  if (1 < (int)hObject + 1U) {
    CloseHandle(hObject);
  }
  return uVar1;
}



/* Function: FUN_0041e3e7 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_0041e3e7(void)

{
  char cVar1;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE hHandle;
  undefined4 uVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  _STARTUPINFOW local_a0;
  undefined4 local_58;
  _PROCESS_INFORMATION local_54;
  WCHAR *local_44;
  WCHAR *local_40;
  WCHAR local_3c [4];
  WCHAR *local_34;
  WCHAR *local_30;
  WCHAR local_2c [4];
  WCHAR *local_24;
  WCHAR *local_20;
  WCHAR local_1c [10];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x90;
  local_8 = 0x41e3f6;
  memset(&local_a0,0,0x44);
  local_54.hProcess = (HANDLE)0x0;
  local_54.hThread = (HANDLE)0x0;
  local_54.dwProcessId = 0;
  local_54.dwThreadId = 0;
  local_44 = local_3c;
  local_3c[0] = L'\0';
  local_24 = local_1c;
  local_1c[0] = L'\0';
  hHandle = (HANDLE)0x0;
  local_58 = 0;
  local_34 = local_2c;
  local_2c[0] = L'\0';
  local_8 = 4;
  local_40 = local_44;
  local_30 = local_34;
  local_20 = local_24;
  uVar2 = FUN_0040e536(&local_24,0);
  if ((int)uVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e6ad;
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar5 = 0x21;
  }
  else {
    cVar1 = FUN_0040a536(&local_24,L"psr.exe");
    if (cVar1 == '\0') {
      uVar2 = 0x8007000e;
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e6ad;
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0x22;
    }
    else {
      uVar2 = FUN_0040ffdb((int *)&local_44,L"%s /stop");
      if ((int)uVar2 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e6ad;
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar5 = 0x23;
      }
      else {
        uVar2 = FUN_0040ffdb((int *)&local_34,L"%d-AppRecorderEnabled");
        if ((int)uVar2 < 0) {
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e6ad;
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar5 = 0x24;
        }
        else {
          uVar2 = 0;
          hHandle = OpenEventW(0x100000,0,local_34);
          if ((int)hHandle + 1U < 2) {
            DVar3 = GetLastError();
            uVar2 = DVar3 & 0xffff | 0x80070000;
            if ((int)DVar3 < 1) {
              uVar2 = DVar3;
            }
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e6ad;
            uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar5 = 0x25;
          }
          else {
            local_a0.cb = 0x44;
            FUN_0040a65a((int *)&local_54);
            BVar4 = CreateProcessW(local_24,local_44,(LPSECURITY_ATTRIBUTES)0x0,
                                   (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_a0
                                   ,&local_54);
            if (BVar4 != 0) {
              DVar3 = WaitForSingleObject(hHandle,20000);
              if (((DVar3 == 0x102) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
                 ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
                FUN_004074f5(0x27,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              }
              if (local_54.hProcess != (HANDLE)0x0) {
                DVar3 = WaitForSingleObject(local_54.hProcess,20000);
                if (DVar3 == 0x102) {
                  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                    FUN_004074f5(0x28,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
                  }
                  uVar8 = 1;
                  pwVar7 = L"WerAppRecorderNonResponsive";
                  uVar6 = 2;
                  DVar3 = GetProcessId(local_54.hProcess);
                  WerpAddTerminationReason(DVar3,uVar6,pwVar7,uVar8);
                  TerminateProcess(local_54.hProcess,0);
                  uVar2 = 0x80004005;
                }
              }
              goto LAB_0041e6ad;
            }
            DVar3 = GetLastError();
            uVar2 = DVar3 & 0xffff | 0x80070000;
            if ((int)DVar3 < 1) {
              uVar2 = DVar3;
            }
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e6ad;
            uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar5 = 0x26;
          }
        }
      }
    }
  }
  FUN_00407519(uVar5,&DAT_004050c4,uVar8,uVar6);
LAB_0041e6ad:
  if (local_34 != local_2c) {
    FUN_0042a48f(local_34);
  }
  if (1 < (int)hHandle + 1U) {
    CloseHandle(hHandle);
  }
  if (local_24 != local_1c) {
    FUN_0042a48f(local_24);
  }
  if (local_44 != local_3c) {
    FUN_0042a48f(local_44);
  }
  FUN_0040a65a((int *)&local_54);
  return uVar2;
}



/* Function: FUN_0041e718 */

undefined4 __thiscall FUN_0041e718(void *this,undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 *local_64;
  undefined2 *local_60;
  undefined2 *local_5c;
  undefined2 *local_58;
  undefined4 uStack_54;
  undefined2 *local_50;
  undefined2 *local_4c;
  undefined2 local_48 [4];
  undefined2 *local_40;
  undefined2 *local_3c;
  undefined2 local_38 [4];
  undefined2 *local_30;
  undefined2 *local_2c;
  undefined2 local_28 [4];
  undefined2 *local_20;
  undefined2 *local_1c;
  undefined2 local_18 [4];
  uint local_10;
  undefined4 local_c [2];
  
  local_50 = local_48;
  local_48[0] = 0;
  local_40 = local_38;
  local_38[0] = 0;
  local_30 = local_28;
  local_28[0] = 0;
  local_20 = local_18;
  local_18[0] = 0;
  local_64 = (undefined2 *)0x0;
  uVar3 = 0;
  local_c[0] = 0;
  local_10 = 0;
  local_60 = (undefined2 *)0x0;
  local_5c = (undefined2 *)0x0;
  local_58 = (undefined2 *)0x0;
  uStack_54 = 0;
  local_4c = local_50;
  local_3c = local_40;
  local_2c = local_30;
  local_1c = local_20;
  iVar1 = FUN_0040ebee();
  if (((iVar1 == 0) && (iVar1 = FUN_004287f9(), iVar1 != 0)) &&
     (iVar1 = WerpGetReportFlags(param_1,&local_10), -1 < iVar1)) {
    if ((local_10 & 0x180000) == 0) {
      DVar2 = FUN_0040a6a0(&local_50,0x1d65,*(HINSTANCE *)((int)this + 0x18));
      if ((int)DVar2 < 0) {
        uVar3 = local_c[0];
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e91b;
        uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x29;
      }
      else {
        DVar2 = FUN_0040a6a0(&local_40,0x1d66,*(HINSTANCE *)((int)this + 0x18));
        if ((int)DVar2 < 0) {
          uVar3 = local_c[0];
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e91b;
          uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar4 = 0x2a;
        }
        else {
          DVar2 = FUN_0040a6a0(&local_30,0x1d67,*(HINSTANCE *)((int)this + 0x18));
          if ((int)DVar2 < 0) {
            uVar3 = local_c[0];
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e91b;
            uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar4 = 0x2b;
          }
          else {
            DVar2 = FUN_0040a6a0(&local_20,0x1d68,*(HINSTANCE *)((int)this + 0x18));
            if (-1 < (int)DVar2) {
              local_64 = local_50;
              local_60 = local_40;
              local_5c = local_30;
              local_58 = local_20;
              iVar1 = WerpPromptUser(param_1,*(undefined4 *)((int)this + 0x28),&local_64,local_c);
              if (iVar1 < 0) {
                if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                   ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                  FUN_00407519(0x2d,&DAT_004050c4,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                               *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
                }
                local_c[0] = 0;
                uVar3 = local_c[0];
              }
              else {
                FUN_00427607((HKEY)0x80000001,
                             L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins");
                uVar3 = local_c[0];
              }
              goto LAB_0041e91b;
            }
            uVar3 = local_c[0];
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041e91b;
            uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar4 = 0x2c;
          }
        }
      }
      FUN_00407519(uVar4,&DAT_004050c4,uVar5,uVar3);
      uVar3 = local_c[0];
    }
    else {
      uVar3 = 1;
    }
  }
LAB_0041e91b:
  if (local_20 != local_18) {
    FUN_0042a48f(local_20);
  }
  if (local_30 != local_28) {
    FUN_0042a48f(local_30);
  }
  if (local_40 != local_38) {
    FUN_0042a48f(local_40);
  }
  if (local_50 != local_48) {
    FUN_0042a48f(local_50);
  }
  return uVar3;
}



/* Function: FUN_0041e97b */

void __fastcall FUN_0041e97b(int param_1)

{
  char cVar1;
  PHKEY phkResult;
  LSTATUS LVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DWORD *lpdwDisposition;
  DWORD local_230;
  DWORD local_22c;
  BYTE *local_228;
  BYTE *local_224;
  BYTE local_220 [8];
  HKEY local_218;
  undefined2 local_214 [262];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_228 = local_220;
  local_218 = (HKEY)0x0;
  local_22c = 0;
  local_230 = 0;
  local_220[0] = '\0';
  local_220[1] = '\0';
  local_214[0] = 0;
  local_224 = local_228;
  cVar1 = FUN_00409553(&local_228,L"AppRecorder");
  if (cVar1 == '\0') {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041eb65;
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0x2e;
  }
  else {
    lpdwDisposition = &local_22c;
    phkResult = (PHKEY)FUN_00408c7e(&local_218);
    LVar2 = RegCreateKeyExW((HKEY)0x80000001,
                            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers"
                            ,0,(LPWSTR)0x0,0,3,(LPSECURITY_ATTRIBUTES)0x0,phkResult,lpdwDisposition)
    ;
    if ((LVar2 == 0) && (local_218 != (HKEY)0x0)) {
      if (local_22c == 2) {
        local_230 = 0x208;
        LVar2 = RegGetValueW(local_218,(LPCWSTR)0x0,*(LPCWSTR *)(param_1 + 4),2,(LPDWORD)0x0,
                             local_214,&local_230);
        if ((LVar2 == 0) && (uVar3 = FUN_0040ffdb((int *)&local_228,L"%s %s"), (int)uVar3 < 0)) {
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041eb65;
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar4 = 0x30;
          goto LAB_0041eb5a;
        }
      }
      LVar2 = RegSetValueExW(local_218,*(LPCWSTR *)(param_1 + 4),0,1,local_228,
                             (int)local_224 - (int)local_228 & 0xfffffffe);
      if (((LVar2 == 0) || (GetLastError(), (undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098))
         || ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041eb65;
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar4 = 0x31;
    }
    else {
      GetLastError();
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041eb65;
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar4 = 0x2f;
    }
  }
LAB_0041eb5a:
  FUN_00407519(uVar4,&DAT_004050c4,uVar5,uVar6);
LAB_0041eb65:
  if (local_228 != local_220) {
    FUN_0042a48f(local_228);
  }
  if (local_218 != (HKEY)0x0) {
    RegCloseKey(local_218);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041ebb0 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0041ebb0(int param_1)

{
  short sVar1;
  code *pcVar2;
  short *_Src;
  LSTATUS LVar3;
  int iVar4;
  short *psVar5;
  PHKEY phkResult;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  size_t _Size;
  DWORD local_228;
  short *local_224;
  HKEY local_220;
  int local_21c;
  int local_218;
  short local_214 [262];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_228 = 0x208;
  local_214[0] = 0;
  local_220 = (HKEY)0x0;
  local_21c = param_1;
  LVar3 = RegGetValueW((HKEY)0x80000001,
                       L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers",
                       *(LPCWSTR *)(param_1 + 4),2,(LPDWORD)0x0,local_214,&local_228);
  if ((LVar3 == 0) && (1 < local_228)) {
    psVar5 = local_214;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    uVar7 = (int)psVar5 - (int)(local_214 + 1) >> 1;
    if (10 < uVar7) {
      uVar6 = 0;
      local_218 = 0x16;
      do {
        local_224 = (short *)((int)local_214 + local_218);
        iVar4 = o__wcsnicmp((int)local_214 + local_218 + 0xffffffeaU,L"AppRecorder",0xb);
        if (((iVar4 == 0) &&
            ((uVar6 == 0 ||
             (iVar4 = o_isspace(*(undefined2 *)((int)local_214 + local_218 + 0xffffffe8U)),
             iVar4 != 0)))) &&
           ((iVar4 = o_isspace(*(undefined2 *)((int)local_214 + local_218)), iVar4 != 0 ||
            (*local_224 == 0)))) {
          psVar5 = (short *)(uVar6 - 1);
          if (uVar6 == 0) {
            psVar5 = (short *)0x0;
          }
          if (uVar6 + 0xb < uVar7) {
            if (psVar5 == (short *)0x0) {
              _Size = (uVar7 - uVar6) * 2 - 0x16;
              local_224 = (short *)((int)local_214 + local_218 + 2U);
            }
            else {
              _Size = (uVar7 - uVar6) * 2 - 0x14;
            }
            _Src = local_224;
            local_224 = psVar5;
            memmove(local_214 + (int)psVar5,_Src,_Size);
            param_1 = local_21c;
          }
          else {
            if (0x207 < (uint)((int)psVar5 * 2)) {
              local_224 = psVar5;
              FUN_0042a116();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_214[(int)psVar5] = 0;
            param_1 = local_21c;
            local_224 = psVar5;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        local_218 = local_218 + 2;
        param_1 = local_21c;
      } while (uVar6 <= uVar7 - 0xb);
    }
    phkResult = (PHKEY)FUN_00408c7e(&local_220);
    LVar3 = RegOpenKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers"
                          ,0,2,phkResult);
    if ((LVar3 == 0) && (local_220 != (HKEY)0x0)) {
      if (local_214[0] == 0) {
        RegDeleteValueW(local_220,*(LPCWSTR *)(param_1 + 4));
        GetLastError();
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041ee9e;
        uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0x34;
      }
      else {
        psVar5 = local_214;
        do {
          sVar1 = *psVar5;
          psVar5 = psVar5 + 1;
        } while (sVar1 != 0);
        LVar3 = RegSetValueExW(local_220,
                               L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers"
                               ,0,1,(BYTE *)local_214,((int)psVar5 - (int)(local_214 + 1) >> 1) * 2)
        ;
        if (((LVar3 == 0) || (GetLastError(), (undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)
            ) || ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041ee9e;
        uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0x35;
      }
    }
    else {
      GetLastError();
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041ee9e;
      uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar8 = 0x33;
    }
  }
  else {
    GetLastError();
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0041ee9e;
    uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar8 = 0x32;
  }
  FUN_00407519(uVar8,&DAT_004050c4,uVar9,uVar10);
LAB_0041ee9e:
  if (local_220 != (HKEY)0x0) {
    RegCloseKey(local_220);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041eed0 */

void FUN_0041eed0(undefined4 *param_1)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  bool bVar6;
  int local_2c;
  _EVENT_DATA_DESCRIPTOR local_28;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (undefined4 *)0x0) && (pwVar3 = (wchar_t *)*param_1, pwVar3 != (wchar_t *)0x0)) {
    pwVar5 = L"APPCRASH";
    do {
      wVar1 = *pwVar3;
      bVar6 = (ushort)wVar1 < (ushort)*pwVar5;
      if (wVar1 != *pwVar5) {
LAB_0041ef28:
        uVar4 = -(uint)bVar6 | 1;
        goto LAB_0041ef2d;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar3[1];
      bVar6 = (ushort)wVar1 < (ushort)pwVar5[1];
      if (wVar1 != pwVar5[1]) goto LAB_0041ef28;
      pwVar3 = pwVar3 + 2;
      pwVar5 = pwVar5 + 2;
    } while (wVar1 != L'\0');
    uVar4 = 0;
LAB_0041ef2d:
    if (uVar4 == 0) {
      if (param_1[0x20] != 1) {
        FUN_00428022();
        pwVar5 = extraout_ECX;
      }
      if (param_1[0x23] == 0) {
        FUN_00428022();
        pwVar5 = extraout_ECX_00;
      }
      if (param_1[0x26] == 0) {
        FUN_00428022();
        pwVar5 = extraout_ECX_01;
      }
      iVar2 = *(int *)param_1[0x26];
      if (((iVar2 == -0x3ffffc8c) || (iVar2 == -0x3ffffffb)) && ((DAT_0042dc00 & 1) != 0)) {
        local_18 = &local_2c;
        local_14 = 0;
        local_10 = 4;
        local_c = 0;
        local_2c = iVar2;
        FUN_00414173((REGHANDLE *)&DAT_0042d060,(PCEVENT_DESCRIPTOR)&DAT_00402318,pwVar5,2,&local_28
                    );
      }
    }
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041efe0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_0041efe0(undefined4 *param_1)

{
  wchar_t wVar1;
  uint uVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  bool bVar9;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  puVar8 = (undefined2 *)0x0;
  local_14[0] = 0;
  local_8 = 0;
  if ((param_1 != (undefined4 *)0x0) && (pwVar3 = (wchar_t *)*param_1, pwVar3 != (wchar_t *)0x0)) {
    pwVar7 = L"APPCRASH";
    do {
      wVar1 = *pwVar3;
      bVar9 = (ushort)wVar1 < (ushort)*pwVar7;
      if (wVar1 != *pwVar7) {
LAB_0041f036:
        uVar2 = -(uint)bVar9 | 1;
        goto LAB_0041f03b;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar3[1];
      bVar9 = (ushort)wVar1 < (ushort)pwVar7[1];
      if (wVar1 != pwVar7[1]) goto LAB_0041f036;
      pwVar3 = pwVar3 + 2;
      pwVar7 = pwVar7 + 2;
    } while (wVar1 != L'\0');
    uVar2 = 0;
LAB_0041f03b:
    if (uVar2 == 0) {
      if (param_1[0x20] != 1) {
        FUN_00428022();
      }
      if (param_1[0x24] == 0) {
        FUN_00428022();
      }
      if (param_1[0x23] == 0) {
        FUN_00428022();
      }
      if (param_1[0x26] == 0) {
        FUN_00428022();
      }
      if ((((*(int *)param_1[0x26] == -0x3ffffffb) && (param_1[0x23] != 0)) && (param_1[0xb] != 0))
         && (pwVar3 = wcsstr((wchar_t *)param_1[0xb],L"_unloaded"), pwVar3 != (wchar_t *)0x0)) {
        puVar4 = FUN_0041f228(local_14,0x10d);
        puVar8 = (undefined2 *)*puVar4;
        *puVar4 = 0;
        if (local_14[0] != 0) {
          o_free(local_14[0]);
        }
        if (puVar8 == (undefined2 *)0x0) {
          DbgPrint("Out of memory.");
          uVar2 = 0x8007000e;
          goto LAB_0041f16c;
        }
        uVar2 = FUN_004095e6(puVar8,0x10d,L"%s%s");
        if ((int)uVar2 < 0) {
          DbgPrint("Cannot construct mod name signature.");
          goto LAB_0041f16c;
        }
        iVar5 = o__wcsicmp(param_1[0xb],puVar8);
        if (iVar5 == 0) {
          uVar6 = FUN_0041f187((short *)param_1[0x23],param_1[0x24]);
          if (uVar6 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = uVar6 & 0xffff | 0x80070000;
            if ((int)uVar6 < 1) {
              uVar2 = uVar6;
            }
            DbgPrint("Cannot log ETW event, Error %d",uVar6);
          }
          goto LAB_0041f16c;
        }
      }
    }
  }
  uVar2 = 0x80004001;
LAB_0041f16c:
  if (puVar8 != (undefined2 *)0x0) {
    o_free(puVar8);
  }
  return uVar2;
}



/* Function: FUN_0041f187 */

int FUN_0041f187(short *param_1,undefined4 param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  if ((DAT_0042dc00 & 1) != 0) {
    if (param_1 == (short *)0x0) {
      iVar3 = 0;
    }
    else {
      psVar2 = param_1;
      do {
        sVar1 = *psVar2;
        psVar2 = psVar2 + 1;
      } while (sVar1 != 0);
      iVar3 = (int)psVar2 - (int)(param_1 + 1) >> 1;
    }
    iVar3 = FUN_0041f256(param_2,iVar3,param_1);
    if (iVar3 != 0) {
      DbgPrint("Cannot log ETW event, Error %d",iVar3);
      return iVar3;
    }
  }
  return 0;
}



/* Function: FUN_0041f1e8 */

int * __thiscall FUN_0041f1e8(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  iVar2 = *this;
  *(int *)this = iVar1;
  if (iVar2 != 0) {
    o_free(iVar2);
  }
  return (int *)this;
}



/* Function: FUN_0041f214 */

void __fastcall FUN_0041f214(int *param_1)

{
  if (*param_1 != 0) {
    o_free(*param_1);
  }
  return;
}



/* Function: FUN_0041f228 */

undefined4 * __fastcall FUN_0041f228(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042a8fe(-(uint)((int)((ulonglong)param_2 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 2));
  *param_1 = uVar1;
  return param_1;
}



/* Function: FUN_0041f256 */

void FUN_0041f256(undefined4 param_1,int param_2,undefined4 param_3)

{
  _EVENT_DATA_DESCRIPTOR local_48;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_38 = &param_1;
  local_28 = &param_2;
  local_18 = param_3;
  local_10 = param_2 * 2;
  local_34 = 0;
  local_30 = 4;
  local_2c = 0;
  local_24 = 0;
  local_20 = 4;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  FUN_00414173((REGHANDLE *)&DAT_0042d060,(PCEVENT_DESCRIPTOR)&DAT_00402308,0,4,&local_48);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041f2d0 */

uint FUN_0041f2d0(undefined4 *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  BOOL BVar4;
  wchar_t *pwVar5;
  uint uVar6;
  bool bVar7;
  _FILETIME local_30;
  _FILETIME _Stack_28;
  _FILETIME local_20;
  _FILETIME local_18;
  _FILETIME local_10;
  
  if ((param_1 != (undefined4 *)0x0) && (pwVar2 = (wchar_t *)*param_1, pwVar2 != (wchar_t *)0x0)) {
    pwVar5 = L"APPCRASH";
    do {
      wVar1 = *pwVar2;
      bVar7 = (ushort)wVar1 < (ushort)*pwVar5;
      if (wVar1 != *pwVar5) {
LAB_0041f320:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_0041f325;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar2[1];
      bVar7 = (ushort)wVar1 < (ushort)pwVar5[1];
      if (wVar1 != pwVar5[1]) goto LAB_0041f320;
      pwVar2 = pwVar2 + 2;
      pwVar5 = pwVar5 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_0041f325:
    if (uVar3 == 0) {
      if (param_1[0x20] != 1) {
        FUN_00428022();
      }
      if (param_1[0x24] == 0) {
        FUN_00428022();
      }
      if (param_1[0x23] == 0) {
        FUN_00428022();
      }
      if (param_1[0x26] == 0) {
        FUN_00428022();
      }
      if (param_1[0x28] == 0) {
        FUN_00428022();
      }
      BVar4 = GetProcessTimes((HANDLE)param_1[0x28],&local_30,&local_10,&local_18,&local_20);
      if (BVar4 != 0) {
        GetSystemTimeAsFileTime(&_Stack_28);
        if ((_Stack_28.dwHighDateTime - local_30.dwHighDateTime ==
             (uint)(_Stack_28.dwLowDateTime < local_30.dwLowDateTime)) &&
           (_Stack_28.dwLowDateTime - local_30.dwLowDateTime < 0x2faf081)) {
          uVar3 = FUN_0041f410((short *)param_1[0x23]);
          if (uVar3 == 0) {
            return 0;
          }
          uVar6 = uVar3 & 0xffff | 0x80070000;
          if ((int)uVar3 < 1) {
            uVar6 = uVar3;
          }
          DbgPrint("Cannot log ETW event, Error %d",uVar3);
          return uVar6;
        }
      }
    }
  }
  return 0x80004001;
}



/* Function: FUN_0041f410 */

void FUN_0041f410(short *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  short *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_48 = &stack0x00000008;
  local_40 = 4;
  local_44 = 0;
  local_3c = 0;
  psVar3 = param_1;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  local_38 = param_1;
  local_34 = 0;
  local_2c = 0;
  local_30 = ((int)psVar3 - (int)(param_1 + 1) >> 1) * 2 + 2;
  local_24 = 0;
  local_28 = &stack0x0000000c;
  local_18 = &stack0x00000014;
  local_20 = 8;
  local_1c = 0;
  local_14 = 0;
  local_10 = 8;
  local_c = 0;
  iVar2 = EtwEventWriteNoRegistration(&DAT_00402338,&DAT_004022f8,4,&local_48);
  if (iVar2 != 0) {
    DbgPrint("Cannot log ETW event, Error %d",iVar2);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041f4ca */

void FUN_0041f4ca(undefined4 param_1,undefined4 param_2)

{
  EtwTraceMessage(param_1,param_2,0x2b,&DAT_00405240,10,&stack0x0000000c,4,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_0041f4ff */

void __fastcall FUN_0041f4ff(undefined4 *param_1)

{
  code *pcVar1;
  NTSTATUS NVar2;
  
  NVar2 = BCryptFinishHash((BCRYPT_HASH_HANDLE)*param_1,(PUCHAR)(param_1 + 1),0x10,0);
  if (NVar2 < 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  BCryptDestroyHash((BCRYPT_HASH_HANDLE)*param_1);
  *param_1 = 0;
  return;
}



/* Function: FUN_0041f530 */

undefined4 * __fastcall FUN_0041f530(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00401204;
  param_1[0x22] = 0;
  puVar1 = param_1 + 3;
  param_1[1] = puVar1;
  param_1[2] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 7;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0xb;
  param_1[9] = puVar1;
  param_1[10] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0xf;
  param_1[0xd] = puVar1;
  param_1[0xe] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x13;
  param_1[0x11] = puVar1;
  param_1[0x12] = puVar1;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 0x17;
  param_1[0x15] = puVar1;
  param_1[0x16] = puVar1;
  *(undefined2 *)puVar1 = 0;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  return param_1;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall CMFCRibbonInfo::XElementComboBox::`scalar deleting
   destructor'(unsigned int)
   
   Library: Visual Studio 2015 Release */

void * __thiscall
CMFCRibbonInfo::XElementComboBox::_scalar_deleting_destructor_(XElementComboBox *this,uint param_1)

{
  FUN_0041f5ed((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return this;
}



/* Function: FUN_0041f5ed */

void __fastcall FUN_0041f5ed(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401204;
  FUN_004208dc(param_1 + 0x1f);
  FUN_004208dc(param_1 + 0x1c);
  FUN_00408ef6(param_1 + 0x19);
  FUN_004095b0(param_1 + 0x15);
  FUN_004095b0(param_1 + 0x11);
  FUN_004095b0(param_1 + 0xd);
  FUN_004095b0(param_1 + 9);
  FUN_004095b0(param_1 + 5);
  FUN_004095b0(param_1 + 1);
  *param_1 = &PTR_o__purecall_0040112c;
  return;
}



/* Function: FUN_0041f650 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0041f650(void *this,undefined4 *param_1)

{
  wchar_t wVar1;
  LPCVOID pvVar2;
  uint uVar3;
  wchar_t *pwVar4;
  BOOL BVar5;
  DWORD DVar6;
  LPCVOID pvVar7;
  LPVOID lpBuffer;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;
  uint local_4c;
  int local_48 [3];
  LPCVOID local_3c;
  int local_38;
  uint local_34;
  LPCVOID local_30;
  uint local_2c;
  LPCVOID local_28;
  LPCVOID local_24;
  int local_20;
  uint local_1c;
  LPCVOID local_18;
  SIZE_T local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x41f65c;
  local_4c = 0;
  piVar11 = local_48;
  for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  pwVar9 = (wchar_t *)*param_1;
  local_14[0] = 0;
  local_18 = (LPCVOID)0x0;
  local_1c = 0;
  local_2c = 0;
  local_20 = 0;
  pwVar10 = L"APPCRASH";
  pwVar4 = pwVar9;
  do {
    wVar1 = *pwVar4;
    bVar13 = (ushort)wVar1 < (ushort)*pwVar10;
    if (wVar1 != *pwVar10) {
LAB_0041f6ae:
      uVar3 = -(uint)bVar13 | 1;
      goto LAB_0041f6b3;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar4[1];
    bVar13 = (ushort)wVar1 < (ushort)pwVar10[1];
    if (wVar1 != pwVar10[1]) goto LAB_0041f6ae;
    pwVar4 = pwVar4 + 2;
    pwVar10 = pwVar10 + 2;
  } while (wVar1 != L'\0');
  uVar3 = 0;
LAB_0041f6b3:
  if (uVar3 != 0) {
    pwVar4 = L"MoAppCrash";
    do {
      wVar1 = *pwVar9;
      bVar13 = (ushort)wVar1 < (ushort)*pwVar4;
      if (wVar1 != *pwVar4) {
LAB_0041f6e2:
        uVar3 = -(uint)bVar13 | 1;
        goto LAB_0041f6e7;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar9[1];
      bVar13 = (ushort)wVar1 < (ushort)pwVar4[1];
      if (wVar1 != pwVar4[1]) goto LAB_0041f6e2;
      pwVar9 = pwVar9 + 2;
      pwVar4 = pwVar4 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_0041f6e7:
    if (uVar3 != 0) {
      FUN_00428022();
    }
  }
  if (param_1[0x20] != 1) {
    FUN_00428022();
  }
  if (param_1[0x28] == 0) {
    FUN_00428022();
  }
  if (param_1[0x24] == 0) {
    FUN_00428022();
  }
  if (param_1[0x26] == 0) {
    FUN_00428022();
  }
  piVar11 = (int *)param_1[0x26];
  if ((*piVar11 == -0x3ffffd85) && (piVar11[4] == 2)) {
    local_28 = (LPCVOID)piVar11[5];
    uVar3 = piVar11[6];
    if ((local_28 != (LPCVOID)0x0) && (uVar3 != 0)) {
      *(undefined4 *)((int)this + 0x88) = param_1[0x24];
      uVar12 = 0x100;
      if (uVar3 < 0x100) {
        uVar12 = uVar3;
      }
      FUN_00420833(this,local_28,uVar12 << 2);
      pvVar2 = local_28;
      pvVar7 = local_24;
      for (; local_24 = pvVar2, uVar12 != 0; uVar12 = uVar12 - 1) {
        BVar5 = ReadProcessMemory((HANDLE)param_1[0x28],local_24,&local_18,4,local_14);
        if ((((BVar5 != 0) && (local_14[0] == 4)) &&
            (DVar6 = FUN_0041fc55(this,(HANDLE)param_1[0x28],local_18), (int)DVar6 < 0)) &&
           (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098 &&
            ((PTR_LOOP_0042d098[0x1c] & 2) != 0)))) {
          FUN_0041f4ca(*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        pvVar7 = (LPCVOID)((int)local_24 + 4);
        pvVar2 = pvVar7;
      }
      local_24 = pvVar7;
      BVar5 = ReadProcessMemory((HANDLE)param_1[0x28],local_28,&local_18,4,local_14);
      if ((((BVar5 != 0) && (local_14[0] == 4)) &&
          ((BVar5 = ReadProcessMemory((HANDLE)param_1[0x28],local_18,&local_4c,0x20,local_14),
           BVar5 != 0 && ((local_14[0] == 0x20 && (0x1f < local_4c)))))) &&
         ((local_48[0] == 0x53453031 || (local_48[0] == 0x53453032)))) {
        FUN_0040ffdb((int *)((int)this + 0x44),L"%08x");
        if ((local_48[2] & 3U) == 1) {
          FUN_004202df((int)this + 0x70,(HANDLE)param_1[0x28],param_1[0x24]);
          FUN_00420585((void *)((int)this + 0x7c),(HANDLE)param_1[0x28]);
          if ((local_3c == (LPCVOID)0x0) ||
             ((iVar8 = FUN_0042029e(&local_20,(undefined4 *)((int)this + 0x70),(uint)local_3c),
              iVar8 < 0 &&
              (iVar8 = FUN_0042029e(&local_20,(undefined4 *)((int)this + 0x7c),(uint)local_3c),
              iVar8 < 0)))) {
            if ((local_38 == 4) && ((local_34 != 0 && (local_30 != (LPCVOID)0x0)))) {
              if (0xffff < local_34) {
                local_34 = 0xffff;
              }
              local_2c = local_34 << 2;
              lpBuffer = VirtualAlloc((LPVOID)0x0,local_2c,0x1000,4);
              local_8 = 0;
              local_28 = lpBuffer;
              if (((lpBuffer != (LPVOID)0x0) &&
                  (BVar5 = ReadProcessMemory((HANDLE)param_1[0x28],local_30,lpBuffer,local_2c,
                                             local_14), BVar5 != 0)) && (local_14[0] != 0)) {
                FUN_00420141(&local_1c,local_14[0] >> 2,(int)lpBuffer,
                             (undefined4 *)((int)this + 0x70),(undefined4 *)((int)this + 0x7c));
                FUN_0040ffdb((int *)((int)this + 0x54),L"StackHash12_%03x");
              }
              local_8 = 1;
              if (lpBuffer != (LPVOID)0x0) {
                VirtualFree(lpBuffer,0,0x8000);
              }
            }
          }
          else {
            iVar8 = local_20;
            FUN_0040ffdb((int *)((int)this + 4),L"%08x");
            FUN_00409553((void *)((int)this + 0x14),*(short **)(iVar8 + 0x14));
            if ((*(byte *)(iVar8 + 0x18) & 1) != 0) {
              FUN_0040a536((void *)((int)this + 0x14),L"_unloaded");
            }
            FUN_0040ffdb((int *)((int)this + 0x24),L"%u.%u.%u.%u");
            FUN_0040ffdb((int *)((int)this + 0x34),L"%08x");
          }
        }
        else if ((local_48[2] & 3U) == 2) {
          DVar6 = FUN_0041fe8c(&local_2c,(HANDLE)param_1[0x28],local_3c);
          if ((int)DVar6 < 0) {
            if (DVar6 != 0xd0000106) {
              return 0;
            }
            uVar3 = 0xffff;
          }
          else {
            uVar3 = local_2c * 2;
            if (0xffff < uVar3) {
              FUN_00428022();
            }
            if (uVar3 == 0) {
              return 0;
            }
          }
          iVar8 = FUN_0041ff9c(&local_1c,(HANDLE)param_1[0x28],(int)local_3c,uVar3);
          if (-1 < iVar8) {
            FUN_0040ffdb((int *)((int)this + 0x54),L"TextHash12_%03x");
          }
        }
      }
      return 0;
    }
  }
  return 0x80070032;
}



/* Function: FUN_0041fa90 */

undefined4 __thiscall
FUN_0041fa90(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint local_8;
  
  local_8 = 0;
  *param_3 = 0;
  if (*(int *)((int)this + 0x44) == *(int *)((int)this + 0x48)) {
    uVar1 = 1;
  }
  else {
    *param_2 = *param_1;
    iVar3 = 0x1e;
    puVar5 = param_1;
    puVar7 = param_2;
    while( true ) {
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      *puVar7 = *puVar5;
    }
    iVar3 = param_1[0x1f];
    param_2[0x1f] = iVar3;
    if (iVar3 != 0) {
      piVar6 = param_2 + 2;
      do {
        if (((*(int *)((int)this + 4) != *(int *)((int)this + 8)) ||
            (*(int *)((int)this + 0x54) != *(int *)((int)this + 0x58))) &&
           ((*(byte *)(piVar6 + 1) & 8) != 0)) {
          puVar2 = &DAT_00405170;
          if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
            puVar2 = *(undefined **)((int)this + 4);
          }
          *piVar6 = (int)puVar2;
          *param_3 = 1;
        }
        iVar3 = *(int *)((int)this + 0x14);
        if (((iVar3 != *(int *)((int)this + 0x18)) ||
            (*(int *)((int)this + 0x54) != *(int *)((int)this + 0x58))) &&
           ((*(byte *)(piVar6 + 1) & 1) != 0)) {
          if (iVar3 == *(int *)((int)this + 0x18)) {
            iVar3 = *(int *)((int)this + 0x54);
          }
          *piVar6 = iVar3;
          *param_3 = 1;
        }
        if (((*(int *)((int)this + 0x24) != *(int *)((int)this + 0x28)) ||
            (*(int *)((int)this + 0x54) != *(int *)((int)this + 0x58))) &&
           ((*(byte *)(piVar6 + 1) & 2) != 0)) {
          pwVar4 = L"0.0.0.0";
          if (*(int *)((int)this + 0x54) == *(int *)((int)this + 0x58)) {
            pwVar4 = *(wchar_t **)((int)this + 0x24);
          }
          *piVar6 = (int)pwVar4;
          *param_3 = 1;
        }
        if (((*(wchar_t **)((int)this + 0x34) != *(wchar_t **)((int)this + 0x38)) ||
            (*(int *)((int)this + 0x54) != *(int *)((int)this + 0x58))) &&
           ((*(byte *)(piVar6 + 1) & 4) != 0)) {
          pwVar4 = L"00000000";
          if (*(int *)((int)this + 0x54) == *(int *)((int)this + 0x58)) {
            pwVar4 = *(wchar_t **)((int)this + 0x34);
          }
          *piVar6 = (int)pwVar4;
          *param_3 = 1;
        }
        if ((*(int *)((int)this + 0x44) != *(int *)((int)this + 0x48)) &&
           ((*(byte *)(piVar6 + 1) & 0x10) != 0)) {
          *piVar6 = *(int *)((int)this + 0x44);
          *param_3 = 1;
        }
        piVar6 = piVar6 + 3;
        local_8 = local_8 + 1;
      } while (local_8 < (uint)param_2[0x1f]);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0041fbf0 */

undefined4 __thiscall FUN_0041fbf0(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  *param_3 = 0;
  if (*(int *)(param_2 + 4) == 0x11) {
    *param_3 = 1;
    *(undefined4 *)(param_2 + 0x14) = 0;
    if (*(uint *)(param_2 + 0xc) <
        (uint)((*(int *)((int)this + 0x68) - *(int *)((int)this + 100)) / 0xc)) {
      puVar1 = (undefined4 *)(*(uint *)(param_2 + 0xc) * 0xc + *(int *)((int)this + 100));
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)((int)this + 0x88);
      *(undefined4 *)(param_2 + 0x14) = *puVar1;
      *(undefined4 *)(param_2 + 0x18) = puVar1[1];
      *(undefined4 *)(param_2 + 0x1c) = puVar1[2];
    }
  }
  return 0;
}



/* Function: FUN_0041fc55 */

DWORD __thiscall FUN_0041fc55(void *this,HANDLE param_1,LPCVOID param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint local_34;
  int local_30 [3];
  LPCVOID local_24;
  uint local_20;
  uint local_1c;
  LPCVOID local_18;
  undefined8 local_14;
  uint local_c;
  SIZE_T local_8;
  
  local_34 = 0;
  local_8 = 0;
  piVar5 = local_30;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_c = 0;
  local_14 = 0;
  BVar1 = ReadProcessMemory(param_1,param_2,&local_14,8,&local_8);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      uVar3 = DVar2;
    }
    if (-1 < (int)uVar3) {
      return 0x80004005;
    }
    return uVar3;
  }
  if (local_8 != 8) {
    return 0x8007012b;
  }
  if ((uint)local_14 < 9) {
    return 0x8007000d;
  }
  FUN_00420833(this,param_2,(uint)local_14);
  if ((0x1f < (uint)local_14) && ((local_14._4_4_ == 0x53453031 || (local_14._4_4_ == 0x53453032))))
  {
    BVar1 = ReadProcessMemory(param_1,param_2,&local_34,0x20,&local_8);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      uVar3 = DVar2 & 0xffff | 0x80070000;
      if ((int)DVar2 < 1) {
        uVar3 = DVar2;
      }
      if (-1 < (int)uVar3) {
        return 0x80004005;
      }
      return uVar3;
    }
    if (local_8 != 0x20) {
      return 0x8007012b;
    }
    if ((local_34 < 0x20) || ((local_30[0] != 0x53453031 && (local_30[0] != 0x53453032)))) {
      return 0x8007000d;
    }
    if ((local_30[2] & 3U) == 1) {
      if (local_20 == 0) {
        return 0;
      }
      if (local_1c == 0) {
        return 0;
      }
      if (local_18 == (LPCVOID)0x0) {
        return 0;
      }
      uVar3 = (uint)((ulonglong)local_1c * (ulonglong)local_20);
      if ((int)((ulonglong)local_1c * (ulonglong)local_20 >> 0x20) == 0) {
        uVar6 = 0x3fffc;
        if (uVar3 < 0x3fffc) {
          uVar6 = uVar3;
        }
      }
      else {
        uVar6 = 0x3fffc;
      }
    }
    else {
      if ((local_30[2] & 3U) != 2) {
        return 0x8007000d;
      }
      DVar2 = FUN_0041fe8c(&local_c,param_1,local_24);
      if ((int)DVar2 < 0) {
        if (DVar2 != 0xd0000106) {
          return 0;
        }
        uVar6 = 0xffff;
        local_18 = local_24;
      }
      else {
        uVar6 = local_c * 2;
        if (0xffff < uVar6) {
          FUN_00428022();
        }
        uVar6 = uVar6 + 2;
        local_18 = local_24;
      }
    }
    FUN_00420833(this,local_18,uVar6);
  }
  return 0;
}



/* Function: FUN_0041fe15 */

void __fastcall FUN_0041fe15(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = 0;
  uVar4 = 0;
  uVar3 = 0;
  do {
    uVar1 = FUN_004200e5(param_2,uVar3,uVar3 + 0xb);
    uVar3 = uVar3 + 0xc;
    uVar4 = uVar4 ^ uVar1;
  } while (uVar3 < 0x78);
  uVar3 = FUN_004200e5(param_2,0x78,0x7f);
  uVar1 = 0;
  iVar2 = 0;
  do {
    uVar1 = uVar1 * 2 | uVar3 >> ((byte)iVar2 & 0x1f) & 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  uVar3 = uVar4 ^ uVar3 ^ uVar1 << 4;
  if ((uVar3 & 0xfffff000) != 0) {
    FUN_00428022();
  }
  *param_1 = uVar3;
  return;
}



/* Function: FUN_0041fe8c */

DWORD __fastcall FUN_0041fe8c(uint *param_1,HANDLE param_2,LPCVOID param_3)

{
  short *lpBuffer;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  SIZE_T local_8;
  
  *param_1 = 0;
  uVar5 = 0;
  local_8 = 0;
  lpBuffer = (short *)VirtualAlloc((LPVOID)0x0,0x1000,0x1000,4);
  if (lpBuffer == (short *)0x0) {
    DVar1 = GetLastError();
    uVar5 = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      uVar5 = DVar1;
    }
    if (-1 < (int)uVar5) {
      uVar5 = 0x80004005;
    }
  }
  else {
    do {
      BVar2 = ReadProcessMemory(param_2,param_3,lpBuffer,0x1000,&local_8);
      if (BVar2 == 0) {
        DVar1 = GetLastError();
        uVar5 = DVar1 & 0xffff | 0x80070000;
        if ((int)DVar1 < 1) {
          uVar5 = DVar1;
        }
        if (-1 < (int)uVar5) {
          uVar5 = 0x80004005;
        }
        goto LAB_0041ff7e;
      }
      if (local_8 != 0x1000) {
        uVar5 = 0x8007012b;
        goto LAB_0041ff7e;
      }
      param_3 = (LPCVOID)((int)param_3 + 0x1000);
      iVar3 = 0x800;
      psVar4 = lpBuffer;
      do {
        if (*psVar4 == 0) break;
        psVar4 = psVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (iVar3 != 0) {
        uVar5 = uVar5 + ((-(uint)(iVar3 != 0) & (0x800 - iVar3) * 2) >> 1);
        break;
      }
      uVar5 = uVar5 + 0x800;
    } while (uVar5 < 0x7fff);
    *param_1 = uVar5;
    uVar5 = (-(uint)(uVar5 < 0x7fff) & 0x2ffffefa) + 0xd0000106;
LAB_0041ff7e:
    VirtualFree(lpBuffer,0,0x8000);
  }
  return uVar5;
}



/* Function: FUN_0041ff9c */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0041ff9c(uint *param_1,HANDLE param_2,int param_3,uint param_4)

{
  code *pcVar1;
  PUCHAR pbInput;
  NTSTATUS NVar2;
  BOOL BVar3;
  uint uVar4;
  SIZE_T nSize;
  SIZE_T local_2c;
  BCRYPT_HASH_HANDLE local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_2c = 0;
  local_8 = 0;
  *param_1 = 0;
  local_28 = (BCRYPT_HASH_HANDLE)0x0;
  uVar4 = 0;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  pbInput = (PUCHAR)VirtualAlloc((LPVOID)0x0,0x1000,0x1000,4);
  local_8 = local_8 & 0xffffff00;
  if (pbInput == (PUCHAR)0x0) {
    GetLastError();
  }
  else {
    NVar2 = BCryptCreateHash((BCRYPT_ALG_HANDLE)0x21,&local_28,(PUCHAR)0x0,0,(PUCHAR)0x0,0,0);
    if (NVar2 < 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    if (param_4 != 0) {
      do {
        nSize = param_4 - uVar4;
        if (0x1000 < nSize) {
          nSize = 0x1000;
        }
        BVar3 = ReadProcessMemory(param_2,(LPCVOID)(param_3 + uVar4),pbInput,nSize,&local_2c);
        if (BVar3 == 0) {
          GetLastError();
LAB_004200d5:
          FUN_0041f4ff(&local_28);
          goto LAB_0042008d;
        }
        if (local_2c != nSize) goto LAB_004200d5;
        NVar2 = BCryptHashData(local_28,pbInput,local_2c,0);
        if (NVar2 < 0) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
        }
        uVar4 = uVar4 + local_2c;
      } while (uVar4 < param_4);
    }
    FUN_0041f4ff(&local_28);
    FUN_0041fe15(param_1,(int)&local_24);
  }
LAB_0042008d:
  local_8 = 2;
  if (pbInput != (PUCHAR)0x0) {
    VirtualFree(pbInput,0,0x8000);
  }
  FUN_0042ae87();
  return;
}



/* Function: FUN_004200e5 */

uint __fastcall FUN_004200e5(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 < param_2) {
    FUN_00428022();
  }
  if (0x20 < (param_3 - param_2) + 1U) {
    FUN_00428022();
  }
  for (; param_2 <= param_3; param_3 = param_3 + -1) {
    uVar1 = uVar1 * 2 | *(byte *)((param_3 >> 3) + param_1) >> ((byte)param_3 & 7) & 1;
  }
  return uVar1;
}



/* Function: FUN_00420141 */

void __fastcall
FUN_00420141(uint *param_1,uint param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  short sVar1;
  short *psVar2;
  code *pcVar3;
  int *piVar4;
  NTSTATUS NVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  int *local_20;
  BCRYPT_HASH_HANDLE local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_1c = (BCRYPT_HASH_HANDLE)0x0;
  local_18 = 0;
  local_24 = param_3;
  local_28 = param_5;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uVar11 = 0;
  local_20 = (int *)0x0;
  local_2c = 0;
  *param_1 = 0;
  NVar5 = BCryptCreateHash((BCRYPT_ALG_HANDLE)0x21,&local_1c,(PUCHAR)0x0,0,(PUCHAR)0x0,0,0);
  if (NVar5 < 0) {
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
  }
  if (param_2 != 0) {
    do {
      iVar6 = FUN_0042029e((int *)&local_20,param_4,*(uint *)(param_3 + uVar11 * 4));
      if ((-1 < iVar6) ||
         (iVar6 = FUN_0042029e((int *)&local_20,param_5,*(uint *)(param_3 + uVar11 * 4)), -1 < iVar6
         )) {
        uVar7 = 0;
        psVar2 = (short *)local_20[5];
        psVar8 = psVar2;
        do {
          sVar1 = *psVar8;
          psVar8 = psVar8 + 1;
        } while (sVar1 != 0);
        iVar9 = (int)psVar8 - (int)(psVar2 + 1) >> 1;
        for (iVar6 = iVar9; (iVar10 = iVar9, iVar6 != 0 && (iVar10 = iVar6, psVar2[iVar6] != 0x2e));
            iVar6 = iVar6 + -1) {
        }
        do {
          iVar6 = o__wcsnicmp(psVar2,*(undefined4 *)((int)&PTR_u_ntdll_004013fc + uVar7),iVar10);
          piVar4 = local_20;
          param_3 = local_24;
          param_5 = local_28;
          if (iVar6 == 0) goto LAB_00420268;
          uVar7 = uVar7 + 4;
        } while (uVar7 < 0x30);
        NVar5 = BCryptHashData(local_1c,(PUCHAR)local_20[5],iVar10 * 2,0);
        if (NVar5 < 0) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
        }
        local_2c = *(int *)(local_24 + uVar11 * 4) - *piVar4;
        NVar5 = BCryptHashData(local_1c,(PUCHAR)&local_2c,4,0);
        param_3 = local_24;
        param_5 = local_28;
        if (NVar5 < 0) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          param_3 = local_24;
          param_5 = local_28;
        }
      }
LAB_00420268:
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_2);
  }
  FUN_0041f4ff(&local_1c);
  FUN_0041fe15(param_1,(int)&local_18);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0042029e */

undefined4 __fastcall FUN_0042029e(int *param_1,undefined4 *param_2,uint param_3)

{
  uint *puVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_2;
  while( true ) {
    if (piVar2 == (int *)param_2[1]) {
      return 0x80070490;
    }
    puVar1 = (uint *)*piVar2;
    if ((*puVar1 <= param_3) && (param_3 < puVar1[1] + *puVar1)) break;
    piVar2 = piVar2 + 1;
  }
  *param_1 = (int)puVar1;
  return 0;
}



/* Function: FUN_004202df */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_004202df(void *param_1,HANDLE param_2,DWORD param_3)

{
  uint uVar1;
  undefined2 uVar2;
  DWORD DVar3;
  HANDLE hObject;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_8b0 [266];
  undefined1 local_488 [8];
  undefined4 local_480;
  undefined4 local_47c;
  void *local_454;
  HANDLE local_450;
  undefined4 local_44c;
  HANDLE local_448;
  uint local_444;
  undefined4 *local_440;
  undefined4 local_43c [5];
  LPCVOID local_428;
  undefined4 local_424;
  short local_41c [255];
  undefined2 local_21e;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8a0;
  local_44c = 0;
  local_8 = 0;
  local_454 = param_1;
  local_450 = param_2;
  memset(local_488,0,0x34);
  local_444 = 0;
  DVar3 = GetProcessId(param_2);
  if (param_3 != DVar3) {
    FUN_00428022();
  }
  hObject = (HANDLE)CreateToolhelp32Snapshot(8,param_3);
  local_448 = hObject;
  if ((int)hObject + 1U < 2) {
    GetLastError();
  }
  else {
    memset(local_8b0,0,0x428);
    hObject = local_448;
    puVar7 = local_8b0;
    puVar8 = local_43c;
    for (iVar5 = 0x10a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_43c[0] = 0x428;
    iVar5 = Module32FirstW(local_448,local_43c);
    while (iVar5 != 0) {
      uVar6 = 0;
      iVar5 = FUN_00415e9f(local_41c,0x100,(int *)&local_444);
      if (iVar5 < 0) {
        local_444 = 0xff;
        local_21e = 0;
      }
      uVar1 = local_444;
      FUN_00420923(&local_440,local_444 * 2 + 0x1e);
      puVar7 = local_440;
      if (local_440 != (undefined4 *)0x0) {
        *local_440 = local_428;
        local_440[1] = local_424;
        uVar4 = FUN_0042753f(local_450,local_428);
        puVar7[2] = uVar4;
        iVar5 = FUN_00426c2c(local_21c,local_488,(short *)0x0,(uint *)0x0,0);
        if (-1 < iVar5) {
          *(short *)(puVar7 + 3) = (short)((uint)local_480 >> 0x10);
          *(short *)((int)puVar7 + 0xe) = (short)local_480;
          *(short *)(puVar7 + 4) = (short)((uint)local_47c >> 0x10);
          *(short *)((int)puVar7 + 0x12) = (short)local_47c;
        }
        local_44c = 0;
        puVar7[5] = puVar7 + 7;
        puVar7[6] = 0;
        if (uVar1 != 0) {
          do {
            uVar2 = o_towlower(local_41c[uVar6]);
            *(undefined2 *)(puVar7[5] + uVar6 * 2) = uVar2;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar1);
        }
        *(undefined2 *)(puVar7[5] + uVar1 * 2) = 0;
        if (*(int **)((int)local_454 + 4) == *(int **)((int)local_454 + 8)) {
          uVar6 = FUN_00420956(local_454,&local_440);
          if ((char)uVar6 == '\0') {
            hObject = local_448;
            if (local_440 != (undefined4 *)0x0) {
              o_free(local_440);
              hObject = local_448;
            }
            break;
          }
        }
        else {
          **(int **)((int)local_454 + 4) = (int)puVar7;
          *(int *)((int)local_454 + 4) = *(int *)((int)local_454 + 4) + 4;
          local_440 = (undefined4 *)0x0;
        }
      }
      memset(local_8b0,0,0x428);
      hObject = local_448;
      puVar7 = local_8b0;
      puVar8 = local_43c;
      for (iVar5 = 0x10a; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_43c[0] = 0x428;
      iVar5 = Module32NextW(local_448,local_43c);
      if (local_440 != (undefined4 *)0x0) {
        o_free(local_440);
      }
    }
  }
  if (1 < (int)hObject + 1U) {
    CloseHandle(hObject);
  }
  FUN_0042ae87();
  return;
}



/* Function: FUN_00420585 */

void __fastcall FUN_00420585(void *param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_94;
  uint local_90;
  LPCVOID local_88;
  LPCVOID local_84;
  int local_80;
  LPCVOID local_7c;
  int local_78;
  uint local_74;
  undefined4 *local_70;
  uint local_6c;
  SIZE_T local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  short local_50 [31];
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_68 = 0;
  local_7c = (LPCVOID)0x0;
  local_84 = (LPCVOID)0x0;
  local_88 = (LPCVOID)0x0;
  local_80 = 0;
  local_6c = 0;
  local_78 = 0;
  memset(&local_64,0,0x5c);
  local_74 = 0;
  RtlGetUnloadEventTraceEx(&local_7c,&local_84,&local_88);
  BVar3 = ReadProcessMemory(param_2,local_7c,&local_80,4,&local_68);
  if (BVar3 != 0) {
    if ((local_68 != 4) || (local_80 != 0x5c)) goto LAB_0042081e;
    BVar3 = ReadProcessMemory(param_2,local_84,&local_6c,4,&local_68);
    if (BVar3 != 0) {
      if (local_68 != 4) goto LAB_0042081e;
      uVar5 = 0x1000;
      if (local_6c < 0x1000) {
        uVar5 = local_6c;
      }
      local_6c = uVar5;
      BVar3 = ReadProcessMemory(param_2,local_88,&local_78,4,&local_68);
      if (BVar3 != 0) {
        if (((local_68 == 4) && (local_78 != 0)) && (local_90 = 0, local_6c != 0)) {
          local_94 = 0;
          do {
            BVar3 = ReadProcessMemory(param_2,(LPCVOID)(local_78 + local_94),&local_64,0x5c,
                                      &local_68);
            if ((BVar3 != 0) && (local_68 == 0x5c)) {
              iVar4 = FUN_00415e9f(local_50,0x20,(int *)&local_74);
              if (iVar4 < 0) {
                local_74 = 0x1f;
                local_12 = 0;
              }
              uVar5 = local_74;
              FUN_00420923(&local_70,local_74 * 2 + 0x1e);
              puVar1 = local_70;
              if (local_70 != (undefined4 *)0x0) {
                *local_70 = local_64;
                local_70[1] = local_60;
                local_70[2] = local_58;
                *(undefined2 *)(local_70 + 3) = local_e;
                *(undefined2 *)((int)local_70 + 0xe) = local_10;
                *(undefined2 *)(local_70 + 4) = local_a;
                *(undefined2 *)((int)local_70 + 0x12) = local_c;
                local_70[5] = local_70 + 7;
                local_70[6] = 1;
                if (uVar5 != 0) {
                  uVar6 = 0;
                  do {
                    uVar2 = o_towlower(local_50[uVar6]);
                    *(undefined2 *)(puVar1[5] + uVar6 * 2) = uVar2;
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < uVar5);
                }
                *(undefined2 *)(puVar1[5] + uVar5 * 2) = 0;
                if (*(int **)((int)param_1 + 4) == *(int **)((int)param_1 + 8)) {
                  uVar5 = FUN_00420956(param_1,&local_70);
                  if ((char)uVar5 == '\0') {
                    if (local_70 != (undefined4 *)0x0) {
                      o_free(local_70);
                    }
                    break;
                  }
                }
                else {
                  **(int **)((int)param_1 + 4) = (int)puVar1;
                  *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 4;
                  local_70 = (undefined4 *)0x0;
                }
                if (local_70 != (undefined4 *)0x0) {
                  o_free(local_70);
                }
              }
            }
            local_90 = local_90 + 1;
            local_94 = local_94 + 0x5c;
          } while (local_90 < local_6c);
        }
        goto LAB_0042081e;
      }
    }
  }
  GetLastError();
LAB_0042081e:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00420833 */

undefined4 __thiscall FUN_00420833(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  puVar1 = *(undefined4 **)((int)this + 0x68);
  local_c = param_2;
  local_8 = 2;
  if (puVar1 == *(undefined4 **)((int)this + 0x6c)) {
    uVar2 = FUN_004209d6((void *)((int)this + 100),&local_10);
    cVar3 = (char)uVar2;
  }
  else {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = 2;
    *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 0xc;
    cVar3 = '\x01';
  }
  uVar2 = 0x8007000e;
  if (cVar3 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0042088c */

void __fastcall FUN_0042088c(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b5a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*param_1 != 0) {
    VirtualFree((LPVOID)*param_1,0,0x8000);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004208dc */

void __fastcall FUN_004208dc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != -1) {
    iVar2 = param_1[1];
    param_1[1] = iVar1;
    iVar2 = iVar2 - iVar1 >> 2;
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      if (*(int *)(iVar1 + iVar2 * 4) != 0) {
        o_free(*(undefined4 *)(iVar1 + iVar2 * 4));
      }
    }
    FUN_0042a48f(*param_1);
  }
  return;
}



/* Function: FUN_00420923 */

undefined4 * __fastcall FUN_00420923(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0042a4d8(param_2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  *param_1 = puVar1;
  return param_1;
}



/* Function: FUN_00420956 */

uint __thiscall FUN_00420956(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)((int)this + 4);
  if (piVar4 == *(int **)((int)this + 8)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this;
    piVar5 = (int *)((int)*(int **)((int)this + 8) - *this >> 2);
    piVar4 = (int *)(((uint)piVar5 >> 2) * 7 + 8);
    if ((int *)0x1fffffff < piVar4) {
      piVar4 = (int *)0x1fffffff;
    }
    if ((piVar5 < piVar4) && (piVar4 = (int *)FUN_00420a49(this,(uint)piVar4), (char)piVar4 != '\0')
       ) {
      puVar2 = *(undefined4 **)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
      if ((uint)((int)param_1 - iVar1) < (uint)((int)puVar2 - *this)) {
        param_1 = (undefined4 *)(*this + ((int)param_1 - iVar1));
      }
      uVar3 = *param_1;
      *param_1 = 0;
      *puVar2 = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  else if (*piVar4 != 0) {
    piVar4 = (int *)o_free(*piVar4);
  }
  return (uint)piVar4 & 0xffffff00;
}



/* Function: FUN_004209d6 */

uint __thiscall FUN_004209d6(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar4 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 4) == uVar4) {
                    /* WARNING: Load size is inaccurate */
    uVar4 = (int)(uVar4 - *this) / 0xc;
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this;
    uVar6 = (uVar4 >> 2) * 7 + 8;
    if (0xaaaaaaa < uVar6) {
      uVar6 = 0xaaaaaaa;
    }
    if (uVar4 < uVar6) {
      cVar3 = FUN_00420b1b(this,uVar6);
      uVar4 = CONCAT31(extraout_var,cVar3);
      if (cVar3 != '\0') {
                    /* WARNING: Load size is inaccurate */
        puVar2 = *(undefined4 **)((int)this + 4);
        puVar5 = (undefined4 *)(*this + ((int)param_1 - iVar1));
        if ((uint)((int)puVar2 - *this) <= (uint)((int)param_1 - iVar1)) {
          puVar5 = param_1;
        }
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
        puVar2[2] = puVar5[2];
        *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
        return CONCAT31((int3)((uint)puVar5 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffff00;
}



/* Function: FUN_00420a49 */

uint __thiscall FUN_00420a49(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [3];
  undefined4 local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = (int *)this;
  if (param_1 < 0x40000000) {
    iVar2 = FUN_0042a4d8(param_1 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    local_1c = param_1 * 4 + iVar2;
    local_20 = iVar2;
    if (iVar2 == -1) goto LAB_00420b03;
                    /* WARNING: Load size is inaccurate */
    puVar4 = *this;
    iVar5 = *(int *)((int)this + 4) - (int)puVar4 >> 2;
    if (iVar5 != 0) {
      local_18[2] = iVar2 - (int)puVar4;
      do {
        uVar3 = *puVar4;
        *puVar4 = 0;
        *(undefined4 *)(local_18[2] + (int)puVar4) = uVar3;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
        this = local_8;
      } while (iVar5 != 0);
    }
    local_18[1] = 0;
    local_24 = iVar2;
    local_18[0] = iVar2;
    FUN_00420be3(local_18);
    iVar5 = *(int *)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this;
    FUN_004208dc(local_8);
    local_c = CONCAT31(local_c._1_3_,1);
    *local_8 = iVar2;
    local_8[1] = iVar2 + (iVar5 - iVar1 >> 2) * 4;
    local_8[2] = local_1c;
  }
  local_1c = -1;
  local_20 = -1;
LAB_00420b03:
  local_24 = local_20;
  uVar3 = FUN_004208dc(&local_24);
  return CONCAT31((int3)((uint)uVar3 >> 8),(undefined1)local_c);
}



/* Function: FUN_00420b1b */

undefined1 __thiscall FUN_00420b1b(void *this,uint param_1)

{
  int iVar1;
  void *_Dst;
  undefined1 uVar2;
  void *local_14;
  void *local_10;
  void *local_c;
  void *local_8;
  
  if (param_1 < 0x15555556) {
    _Dst = (void *)FUN_0042a4d8(param_1 * 0xc);
    if (_Dst == (void *)0x0) goto LAB_00420bbe;
    local_c = (void *)((int)_Dst + param_1 * 0xc);
    local_10 = _Dst;
    if (_Dst != (void *)0xffffffff) {
                    /* WARNING: Load size is inaccurate */
      local_8 = (void *)0xc;
                    /* WARNING: Load size is inaccurate */
      local_14 = _Dst;
      memcpy(_Dst,*this,((*(int *)((int)this + 4) - *this) / 0xc) * 0xc);
                    /* WARNING: Load size is inaccurate */
      iVar1 = *this;
      local_8 = (void *)(((*(int *)((int)this + 4) - iVar1) / (int)local_8) * 0xc + (int)_Dst);
      if (iVar1 != -1) {
        *(int *)((int)this + 4) = iVar1;
        FUN_0042a48f(iVar1);
      }
      *(void **)((int)this + 4) = local_8;
      *(void **)this = _Dst;
      *(void **)((int)this + 8) = local_c;
      uVar2 = 1;
      local_10 = (void *)0xffffffff;
      local_c = (void *)0xffffffff;
      goto LAB_00420bcc;
    }
  }
  else {
LAB_00420bbe:
    local_10 = (void *)0xffffffff;
    local_c = (void *)0xffffffff;
  }
  uVar2 = 0;
LAB_00420bcc:
  local_14 = local_10;
  FUN_00408ef6((int *)&local_14);
  return uVar2;
}



/* Function: FUN_00420be3 */

void __fastcall FUN_00420be3(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  iVar1 = *param_1;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      o_free(*(undefined4 *)(iVar1 + iVar2 * 4));
    }
  }
  return;
}



/* Function: FUN_00420c10 */

undefined4 FUN_00420c10(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    FUN_00428022();
  }
  if (*(int *)(param_1 + 0x80) != 1) {
    FUN_00428022();
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    FUN_00428022();
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    FUN_00428022();
  }
  piVar1 = *(int **)(param_1 + 0x98);
  if (((*piVar1 == -0x3ffffbf7) && (piVar1[4] != 0)) && (piVar1[5] == 10)) {
    FUN_00420eb7(*(HANDLE *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xb4),
                 *(short **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),
                 *(int *)(param_1 + 0x9c));
  }
  return 0;
}



/* Function: FUN_00420c9c */

undefined4 __thiscall FUN_00420c9c(void *this,int param_1)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 4;
  *(undefined4 *)((int)this + 0xc) = 0;
  psVar3 = (short *)(param_1 + 4);
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  *(short **)((int)this + 0x10) = (short *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(int *)((int)this + 0x18) = ((int)psVar3 - (param_1 + 6) >> 1) * 2 + 2;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int *)((int)this + 0x20) = param_1 + 0x20c;
  *(undefined4 *)((int)this + 0x28) = 4;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 **)((int)this + 0x30) = (undefined4 *)(param_1 + 0x290);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 4;
  *(undefined4 *)((int)this + 0x3c) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x290);
  *(int *)((int)this + 0x40) = param_1 + 0x210;
  *(undefined4 *)((int)this + 0x48) = uVar2;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 4;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(int *)((int)this + 0x50) = param_1 + 0x294;
  *(int *)((int)this + 0x60) = param_1 + 0x2a0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 4;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(int *)((int)this + 0x70) = param_1 + 0x2a4;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 4;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(int *)((int)this + 0x80) = param_1 + 0x2a8;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 4;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(int *)((int)this + 0x90) = param_1 + 0x2ac;
  *(undefined4 *)((int)this + 0x98) = 4;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return 10;
}



/* Function: FUN_00420d9c */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00420d9c(uint *param_1,HANDLE param_2,undefined4 param_3,int param_4)

{
  BOOL BVar1;
  SIZE_T SVar2;
  LPCVOID lpBaseAddress;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_458 [7];
  undefined4 local_43c;
  uint local_438 [6];
  uint local_420;
  int local_41c;
  undefined1 local_214 [524];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_43c = param_3;
  lpBaseAddress = (LPCVOID)*param_1;
  param_1[0xa4] = 0x80;
  if (param_4 == 0) {
    lpBaseAddress = (LPCVOID)((int)lpBaseAddress - 0x40);
  }
  BVar1 = ReadProcessMemory(param_2,lpBaseAddress,param_1 + 0x84,0x80,local_438);
  uVar3 = 0;
  if (BVar1 != 0) {
    uVar3 = local_438[0];
  }
  param_1[0xa4] = uVar3;
  SVar2 = VirtualQueryEx(param_2,(LPCVOID)*param_1,(PMEMORY_BASIC_INFORMATION)(param_1 + 0xa5),0x1c)
  ;
  if (SVar2 != 0x1c) {
    puVar5 = local_458;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = local_458;
    puVar6 = param_1 + 0xa5;
    for (iVar4 = 7; param_3 = local_43c, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  local_438[1] = 0x428;
  iVar4 = Module32FirstW(param_3,local_438 + 1);
  do {
    if (iVar4 == 0) {
LAB_00420ea0:
      FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if ((local_420 <= *param_1) && (*param_1 < local_41c + local_420)) {
      FUN_0040a406((short *)(param_1 + 1),0x104,(int)local_214);
      param_1[0x83] = *param_1 - local_420;
      goto LAB_00420ea0;
    }
    iVar4 = Module32NextW(param_3,local_438 + 1);
  } while( true );
}



/* Function: FUN_00420eb7 */

void __fastcall
FUN_00420eb7(HANDLE param_1,undefined4 param_2,short *param_3,undefined4 param_4,int param_5)

{
  short sVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  _FILETIME local_704;
  _FILETIME local_6fc;
  undefined4 local_6f4;
  uint local_6f0 [172];
  uint local_440;
  undefined1 local_43c [684];
  short *local_190 [2];
  int local_188;
  undefined4 local_184;
  undefined4 *local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  _FILETIME *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 *local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [324];
  uint local_c;
  
  iVar3 = param_5;
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  memset(local_6f0,0,0x2b0);
  memset(local_43c,0,0x2ac);
  local_440 = *(uint *)(iVar3 + 0xa8);
  local_6f4 = 0;
  BVar2 = GetProcessTimes(param_1,&local_704,&local_6fc,&local_6fc,&local_6fc);
  if (BVar2 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
      GetLastError();
      FUN_00407519(10,&DAT_00405250,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    local_704.dwLowDateTime = 0;
    local_704.dwHighDateTime = 0;
  }
  if (local_440 != 0) {
    FUN_00420d9c(&local_440,param_1,param_2,1);
  }
  if (local_6f0[0] != 0) {
    FUN_00420d9c(local_6f0,param_1,param_2,0);
  }
  psVar5 = param_3;
  do {
    sVar1 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar1 != 0);
  local_190[0] = param_3;
  local_190[1] = (short *)0x0;
  local_188 = ((int)psVar5 - (int)(param_3 + 1) >> 1) * 2 + 2;
  local_184 = 0;
  local_180 = &param_4;
  local_17c = 0;
  local_170 = &local_704;
  local_160 = &local_6f4;
  local_178 = 4;
  local_174 = 0;
  local_16c = 0;
  local_168 = 8;
  local_164 = 0;
  local_15c = 0;
  local_158 = 4;
  local_154 = 0;
  iVar3 = FUN_00420c9c(local_150,(int)local_6f0);
  iVar4 = FUN_00420c9c(local_190 + (iVar3 + 4) * 4,(int)&local_440);
  if (iVar4 + iVar3 + 4 != 0x18) {
    FUN_00428022();
  }
  iVar3 = EtwEventWriteNoRegistration(&DAT_00402338,&DAT_004022e8,0x18,local_190);
  if (((iVar3 != 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
     ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
    FUN_00407519(0xb,&DAT_00405250,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004210d8 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * __fastcall FUN_004210d8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401234;
  memset(param_1 + 1,0,0xab4);
  _eh_vector_constructor_iterator_(param_1 + 1,0x224,5,FUN_0041a690,FUN_0041a6b0);
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2b3] = 0;
  *(undefined1 *)(param_1 + 0x2b4) = 0;
  return param_1;
}



/* Function: FUN_00421160 */

undefined4 * __thiscall FUN_00421160(void *this,byte param_1)

{
  FUN_0042181f((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0042118d */

uint __thiscall FUN_0042118d(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  undefined4 uStackY_30;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short *local_c;
  uint local_8;
  
  uVar6 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x80) == 1) {
    psVar7 = *(short **)(param_1 + 0x88);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 2) {
      uVar6 = 0x80004005;
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return 0x80004005;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return 0x80004005;
      }
      uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar8 = 10;
      goto LAB_00421450;
    }
    psVar7 = *(short **)(param_1 + 0x84);
  }
  if (psVar7 == (short *)0x0) {
    FUN_00428022();
  }
  local_c = FUN_0040e2e2(psVar7);
  if (local_c == (short *)0x0) {
    uVar6 = 0x80004005;
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0x80004005;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0x80004005;
    }
    uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar8 = 0xb;
  }
  else {
    do {
      iVar2 = o__wcsicmp(local_c,*(undefined4 *)((int)&PTR_u_svchost_exe_00401430 + uVar6));
      if (iVar2 == 0) {
        uVar6 = 0x80004001;
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return 0x80004001;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return 0x80004001;
        }
        uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0xc;
        goto LAB_00421450;
      }
      uVar6 = uVar6 + 4;
    } while (uVar6 < 0x14);
    psVar5 = psVar7;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    uVar6 = ((int)psVar5 - (int)(psVar7 + 1) >> 1) + 1;
    piVar3 = FUN_0041f228(&local_c,uVar6);
    FUN_0041f1e8((void *)((int)this + 0xab8),piVar3);
    if (local_c != (short *)0x0) {
      o_free(local_c);
    }
    if (*(short **)((int)this + 0xab8) != (short *)0x0) {
      uVar6 = FUN_0040a406(*(short **)((int)this + 0xab8),uVar6,(int)psVar7);
      if (uVar6 == 0) {
        if (*(int *)(param_1 + 0x80) == 1) {
          iVar2 = *(int *)(param_1 + 0xa0);
        }
        else {
          if (*(int *)(param_1 + 0x80) != 2) {
            return 0;
          }
          iVar2 = *(int *)(param_1 + 0x88);
        }
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = GetPackageFamilyName(iVar2,&local_8,0);
        if (uVar4 == 0x3d54) {
          return 0;
        }
        if (uVar4 == 0x7a) {
          piVar3 = FUN_0041f228(&local_c,local_8);
          FUN_0041f1e8((void *)((int)this + 0xabc),piVar3);
          if (local_c != (short *)0x0) {
            o_free(local_c);
          }
          if (*(int *)((int)this + 0xabc) == 0) {
            uVar6 = 0x8007000e;
            if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
              return 0x8007000e;
            }
            if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
              return 0x8007000e;
            }
            uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar8 = 0x10;
            goto LAB_00421450;
          }
          uVar4 = GetPackageFamilyName(iVar2,&local_8,*(undefined4 *)((int)this + 0xabc));
          if (uVar4 == 0) {
            return 0;
          }
          uVar6 = uVar4 & 0xffff | 0x80070000;
          if ((int)uVar4 < 1) {
            uVar6 = uVar4;
          }
          if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
            return uVar6;
          }
          if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
            return uVar6;
          }
          uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uStackY_30 = 0x11;
        }
        else {
          uVar6 = uVar4 & 0xffff | 0x80070000;
          if ((int)uVar4 < 1) {
            uVar6 = uVar4;
          }
          if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
            return uVar6;
          }
          if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
            return uVar6;
          }
          uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uStackY_30 = 0xf;
        }
      }
      else {
        if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
          return uVar6;
        }
        if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
          return uVar6;
        }
        uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uStackY_30 = 0xe;
      }
      FUN_00407519(uStackY_30,&DAT_00405304,uVar9,uVar10);
      return uVar6;
    }
    uVar6 = 0x8007000e;
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0x8007000e;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0x8007000e;
    }
    uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar8 = 0xd;
  }
LAB_00421450:
  FUN_004074f5(uVar8,&DAT_00405304,uVar9,uVar10);
  return uVar6;
}



/* Function: FUN_00421470 */

uint __thiscall FUN_00421470(void *this,undefined4 *param_1)

{
  wchar_t wVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x12,&DAT_00405304,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0x80070057;
  }
  iVar2 = TelGetWerTelemetryMode();
  if (iVar2 < 3) {
    uVar7 = 0x80070005;
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0x80070005;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0x80070005;
    }
    uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar9 = 0x13;
LAB_004214e8:
    FUN_004074f5(uVar9,&DAT_00405304,uVar10,uVar11);
  }
  else {
    pwVar6 = (wchar_t *)*param_1;
    pwVar5 = L"BlueScreen";
    pwVar4 = pwVar6;
    do {
      wVar1 = *pwVar4;
      uVar7 = 0;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar5;
      if (wVar1 != *pwVar5) {
LAB_00421529:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_0042152e;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar4[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar5[1];
      if (wVar1 != pwVar5[1]) goto LAB_00421529;
      pwVar4 = pwVar4 + 2;
      pwVar5 = pwVar5 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_0042152e:
    if (uVar3 == 0) {
      *(undefined1 *)((int)this + 0xad0) = 1;
      return 0;
    }
    pwVar5 = L"APPCRASH";
    pwVar4 = pwVar6;
    do {
      wVar1 = *pwVar4;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar5;
      if (wVar1 != *pwVar5) {
LAB_0042156f:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_00421574;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar4[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar5[1];
      if (wVar1 != pwVar5[1]) goto LAB_0042156f;
      pwVar4 = pwVar4 + 2;
      pwVar5 = pwVar5 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_00421574:
    if (uVar3 != 0) {
      pwVar5 = L"AppHangB1";
      pwVar4 = pwVar6;
      do {
        wVar1 = *pwVar4;
        bVar8 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_004215a9:
          uVar3 = -(uint)bVar8 | 1;
          goto LAB_004215ae;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar4[1];
        bVar8 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_004215a9;
        pwVar4 = pwVar4 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      uVar3 = 0;
LAB_004215ae:
      if (uVar3 != 0) {
        pwVar5 = L"AppHangXProcB1";
        pwVar4 = pwVar6;
        do {
          wVar1 = *pwVar4;
          bVar8 = (ushort)wVar1 < (ushort)*pwVar5;
          if (wVar1 != *pwVar5) {
LAB_004215e3:
            uVar3 = -(uint)bVar8 | 1;
            goto LAB_004215e8;
          }
          if (wVar1 == L'\0') break;
          wVar1 = pwVar4[1];
          bVar8 = (ushort)wVar1 < (ushort)pwVar5[1];
          if (wVar1 != pwVar5[1]) goto LAB_004215e3;
          pwVar4 = pwVar4 + 2;
          pwVar5 = pwVar5 + 2;
        } while (wVar1 != L'\0');
        uVar3 = 0;
LAB_004215e8:
        if (uVar3 != 0) {
          pwVar5 = L"MoAppCrash";
          pwVar4 = pwVar6;
          do {
            wVar1 = *pwVar4;
            bVar8 = (ushort)wVar1 < (ushort)*pwVar5;
            if (wVar1 != *pwVar5) {
LAB_0042161d:
              uVar3 = -(uint)bVar8 | 1;
              goto LAB_00421622;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar4[1];
            bVar8 = (ushort)wVar1 < (ushort)pwVar5[1];
            if (wVar1 != pwVar5[1]) goto LAB_0042161d;
            pwVar4 = pwVar4 + 2;
            pwVar5 = pwVar5 + 2;
          } while (wVar1 != L'\0');
          uVar3 = 0;
LAB_00421622:
          if (uVar3 != 0) {
            pwVar5 = L"MoAppHang";
            pwVar4 = pwVar6;
            do {
              wVar1 = *pwVar4;
              bVar8 = (ushort)wVar1 < (ushort)*pwVar5;
              if (wVar1 != *pwVar5) {
LAB_00421657:
                uVar3 = -(uint)bVar8 | 1;
                goto LAB_0042165c;
              }
              if (wVar1 == L'\0') break;
              wVar1 = pwVar4[1];
              bVar8 = (ushort)wVar1 < (ushort)pwVar5[1];
              if (wVar1 != pwVar5[1]) goto LAB_00421657;
              pwVar4 = pwVar4 + 2;
              pwVar5 = pwVar5 + 2;
            } while (wVar1 != L'\0');
            uVar3 = 0;
LAB_0042165c:
            if (uVar3 != 0) {
              pwVar4 = L"MoAppHangXProc";
              do {
                wVar1 = *pwVar6;
                bVar8 = (ushort)wVar1 < (ushort)*pwVar4;
                if (wVar1 != *pwVar4) {
LAB_00421689:
                  uVar7 = -(uint)bVar8 | 1;
                  break;
                }
                if (wVar1 == L'\0') break;
                wVar1 = pwVar6[1];
                bVar8 = (ushort)wVar1 < (ushort)pwVar4[1];
                if (wVar1 != pwVar4[1]) goto LAB_00421689;
                pwVar6 = pwVar6 + 2;
                pwVar4 = pwVar4 + 2;
              } while (wVar1 != L'\0');
              if (uVar7 != 0) {
                uVar7 = 0x80004001;
                if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
                  return 0x80004001;
                }
                if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
                  return 0x80004001;
                }
                uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar9 = 0x14;
                goto LAB_004214e8;
              }
            }
          }
        }
      }
    }
    uVar7 = FUN_0042118d(this,(int)param_1);
  }
  return uVar7;
}



/* Function: FUN_004216e0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x004217bb) */

int __thiscall FUN_004216e0(void *this,undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uStackY_40;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_3 = 0;
  if ((((*(int *)(param_2 + 4) != 1) || (*(int *)(param_2 + 0xc) == 0)) ||
      (*(int *)(param_2 + 0x10) == 0)) ||
     (iVar1 = o__wcsicmp(*(undefined4 *)(param_2 + 0xc),&DAT_004052fc), iVar1 != 0)) {
    return -0x7fffbfff;
  }
  iVar1 = FUN_004252c8((int)this + 4,5,(int *)&PTR_u_IptOption_0042d2d8,5,
                       *(short **)(param_2 + 0x10));
  if (iVar1 < 0) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return iVar1;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return iVar1;
    }
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar2 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_40 = 0x15;
  }
  else {
    iVar1 = FUN_004218a7((int)this);
    if (-1 < iVar1) {
      *param_3 = 1;
      return 0;
    }
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return iVar1;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return iVar1;
    }
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar2 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uStackY_40 = 0x16;
  }
  FUN_00407519(uStackY_40,&DAT_00405304,uVar2,uVar3);
  return iVar1;
}



/* Function: FUN_004217e0 */

undefined4 __fastcall FUN_004217e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xab8);
  *(undefined4 *)(param_1 + 0xab8) = 0;
  if (iVar1 != 0) {
    o_free(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0xabc);
  *(undefined4 *)(param_1 + 0xabc) = 0;
  if (iVar1 != 0) {
    o_free(iVar1);
  }
  return 0;
}



/* Function: FUN_0042181f */

void __fastcall FUN_0042181f(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b135;
  local_10 = ExceptionList;
  uVar1 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00401234;
  FUN_004217e0((int)param_1);
  if (param_1[0x2af] != 0) {
    o_free(param_1[0x2af],uVar1);
  }
  if (param_1[0x2ae] != 0) {
    o_free(param_1[0x2ae],uVar1);
  }
  _eh_vector_destructor_iterator_(param_1 + 1,0x224,5,FUN_0041a6b0);
  *param_1 = &PTR_o__purecall_0040112c;
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004218a7 */

void __fastcall FUN_004218a7(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_40 [4];
  ushort local_3c [4];
  ushort local_34 [4];
  undefined4 local_2c [8];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)auStack_40;
  bVar4 = FUN_00427892();
  if (bVar4) {
    FUN_004219b5(param_1);
    if (*(char *)(param_1 + 0xad0) == '\0') {
      puVar6 = (ushort *)0x0;
      if (*(int *)(param_1 + 0xabc) != 0) {
        RtlInitUnicodeString(local_3c,*(int *)(param_1 + 0xabc));
        puVar6 = local_3c;
      }
      RtlInitUnicodeString(local_34,*(undefined4 *)(param_1 + 0xab8));
      FUN_00425abc(local_34,puVar6,*(undefined4 *)(param_1 + 0xac8),
                   *(int *)(param_1 + 0xacc) * 0x15180,*(undefined4 *)(param_1 + 0xac0),
                   *(undefined4 *)(param_1 + 0xac4));
    }
    else {
      iVar1 = *(int *)(param_1 + 0xacc);
      uVar2 = *(undefined4 *)(param_1 + 0xac4);
      uVar3 = *(undefined4 *)(param_1 + 0xac0);
      puVar7 = local_2c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_2c[1] = 4;
      FUN_00425f28(*(uint *)(param_1 + 0xac8),iVar1 * 0x15180,local_2c,uVar3,uVar2);
    }
  }
  else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
          ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_004074f5(0x17,&DAT_00405304,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  FUN_00429fd0(local_c ^ (uint)auStack_40);
  return;
}



/* Function: FUN_004219b5 */

void __fastcall FUN_004219b5(int param_1)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int local_14;
  short *local_10;
  undefined4 local_c;
  char local_5;
  
  lVar7 = 0;
  local_5 = '\0';
  if (*(char *)(param_1 + 0xad0) == '\0') {
    uVar1 = *(uint *)(param_1 + 0xac0) & 0xf0fffff1 | 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xac0) & 0xf4fffff1 | 0x4000001;
  }
  *(uint *)(param_1 + 0xac0) = uVar1;
  iVar6 = param_1 + 8;
  local_14 = 5;
  do {
    local_c = (undefined4)((ulonglong)lVar7 >> 0x20);
    uVar5 = (undefined4)lVar7;
    iVar2 = o__wcsicmp(iVar6,L"IptNumTries");
    lVar7 = CONCAT44(local_c,uVar5);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xac8) = *(undefined4 *)(iVar6 + 0x218);
    }
    else {
      iVar2 = o__wcsicmp(iVar6,L"IptBufferSize");
      if (iVar2 == 0) {
        uVar1 = *(uint *)(param_1 + 0xac0);
        uVar4 = (*(int *)(iVar6 + 0x218) << 0x10 ^ uVar1) & 0xf0000;
      }
      else {
        iVar2 = o__wcsicmp(iVar6,L"IptTimeStamp");
        if (iVar2 != 0) {
          psVar3 = (short *)o__wcsicmp(iVar6,L"IptOption");
          if (psVar3 == (short *)0x0) {
            local_10 = psVar3;
            lVar7 = o__wcstoui64(*(undefined4 *)(iVar6 + 0x208),&local_10,0x10);
            if ((((local_10 != (short *)0x0) && (*local_10 == 0)) && (lVar7 != -1)) && (lVar7 != 0))
            {
              local_5 = '\x01';
            }
          }
          else {
            iVar2 = o__wcsicmp(iVar6,L"IptTraceDurationInDays");
            lVar7 = CONCAT44(local_c,uVar5);
            if (iVar2 == 0) {
              *(undefined4 *)(param_1 + 0xacc) = *(undefined4 *)(iVar6 + 0x218);
              lVar7 = CONCAT44(local_c,uVar5);
            }
          }
          goto LAB_00421afe;
        }
        uVar1 = *(uint *)(param_1 + 0xac0);
        uVar4 = (*(int *)(iVar6 + 0x218) << 4 ^ uVar1) & 0xf0;
      }
      lVar7 = CONCAT44(local_c,uVar5);
      *(uint *)(param_1 + 0xac0) = uVar4 ^ uVar1;
    }
LAB_00421afe:
    local_c = (undefined4)((ulonglong)lVar7 >> 0x20);
    iVar6 = iVar6 + 0x224;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      if (local_5 != '\0') {
        *(longlong *)(param_1 + 0xac0) = lVar7;
      }
      if ((*(int *)(param_1 + 0xabc) != 0) &&
         (iVar6 = o__wcsicmp(*(int *)(param_1 + 0xabc),
                             PTR_u_Microsoft_MicrosoftEdge_8wekyb3d_0040142c), iVar6 == 0)) {
        *(uint *)(param_1 + 0xac0) = *(uint *)(param_1 + 0xac0) & 0xffbfffff | 0x300000;
      }
      return;
    }
  } while( true );
}



/* Function: FUN_00421b5c */

undefined4 __fastcall FUN_00421b5c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_20 [7];
  
  puVar2 = local_20;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = NtQueryInformationThread(param_1,0,local_20,0x1c,0);
  if (iVar1 < 0) {
    local_20[1] = 0;
  }
  return local_20[1];
}



/* Function: FUN_00421b96 */

undefined4 __fastcall FUN_00421b96(HANDLE param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  BOOL BVar4;
  char *pcVar5;
  undefined1 local_f4 [112];
  char local_84 [12];
  int local_78;
  int local_34;
  HANDLE *local_10;
  uint local_c;
  HANDLE local_8;
  
  local_8 = param_1;
  iVar1 = FUN_00421b5c(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_10 = &local_8;
    puVar3 = (undefined4 *)FUN_004228b2(&local_10,local_f4,iVar1);
    pcVar5 = local_84;
    for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      pcVar5 = pcVar5 + 4;
    }
    if (local_84[0] == '\0') {
      local_c = 0;
    }
    else {
      local_c = 0;
      BVar4 = ReadProcessMemory(local_8,(LPCVOID)(local_34 + local_78),&local_c,4,(SIZE_T *)0x0);
      local_c = -(uint)(BVar4 != 0) & local_c;
    }
    uVar2 = CONCAT31((int3)(local_c >> 8),local_c == 0x20000065);
  }
  return uVar2;
}



/* Function: FUN_00421c16 */

undefined4 __fastcall
FUN_00421c16(HANDLE param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  LPHANDLE ppvVar4;
  HANDLE pvVar5;
  BOOL BVar6;
  int unaff_retaddr;
  undefined4 local_2c [4];
  HANDLE local_1c;
  int local_18;
  HANDLE local_14;
  int local_10;
  HANDLE *local_c;
  HANDLE local_8;
  
  pvVar5 = (HANDLE)*param_3;
  *param_3 = 0;
  local_8 = param_1;
  if (1 < (int)pvVar5 + 1U) {
    CloseHandle(pvVar5);
  }
  pvVar5 = (HANDLE)*param_4;
  *param_4 = 0;
  if (1 < (int)pvVar5 + 1U) {
    CloseHandle(pvVar5);
  }
  iVar1 = FUN_00421b5c(param_2);
  if (iVar1 == 0) {
    uVar2 = 0x8000ffff;
  }
  else {
    local_c = &local_8;
    piVar3 = (int *)FUN_00422809(&local_c,local_2c,iVar1);
    local_1c = (HANDLE)*piVar3;
    local_18 = piVar3[1];
    local_14 = (HANDLE)piVar3[2];
    local_10 = piVar3[3];
    if ((local_1c == (HANDLE)0x0 && local_18 == 0) || (local_14 == (HANDLE)0x0 && local_10 == 0)) {
      iVar1 = 0xb6;
    }
    else {
      ppvVar4 = (LPHANDLE)FUN_0040ffb8(param_3);
      pvVar5 = GetCurrentProcess();
      BVar6 = DuplicateHandle(local_8,local_1c,pvVar5,ppvVar4,0,0,2);
      if (BVar6 == 0) {
        iVar1 = 0xbd;
      }
      else {
        ppvVar4 = (LPHANDLE)FUN_0040ffb8(param_4);
        pvVar5 = GetCurrentProcess();
        BVar6 = DuplicateHandle(local_8,local_14,pvVar5,ppvVar4,0,0,2);
        if (BVar6 != 0) {
          return 0;
        }
        iVar1 = 0xc4;
      }
    }
    uVar2 = FUN_004229aa(unaff_retaddr,iVar1);
  }
  return uVar2;
}



/* Function: FUN_00421d20 */

undefined4 * __thiscall FUN_00421d20(void *this,byte param_1)

{
  FUN_00421d4a((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00421d4a */

void __fastcall FUN_00421d4a(undefined4 *param_1)

{
  if (1 < (int)param_1[10] + 1U) {
    CloseHandle((HANDLE)param_1[10]);
  }
  if (1 < (int)param_1[9] + 1U) {
    CloseHandle((HANDLE)param_1[9]);
  }
  if (1 < (int)param_1[8] + 1U) {
    CloseHandle((HANDLE)param_1[8]);
  }
  if (1 < (int)param_1[7] + 1U) {
    CloseHandle((HANDLE)param_1[7]);
  }
  FUN_004095b0(param_1 + 1);
  *param_1 = &PTR_o__purecall_0040112c;
  return;
}



/* Function: FUN_00421db0 */

void __thiscall FUN_00421db0(void *this,undefined4 *param_1)

{
  wchar_t wVar1;
  HANDLE pvVar2;
  void *pvVar3;
  char cVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  LSTATUS LVar10;
  LPHANDLE ppvVar11;
  HANDLE pvVar12;
  HANDLE pvVar13;
  BOOL BVar14;
  undefined3 extraout_var;
  uint uVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_44c [4];
  undefined4 *local_448;
  void *local_444;
  undefined4 *local_440;
  undefined4 **ppuStack_43c;
  undefined4 local_438;
  undefined1 local_434 [16];
  undefined4 *puStack_424;
  int iStack_420;
  undefined1 auStack_418 [1036];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)auStack_44c;
  pwVar17 = L"APPCRASH";
  local_440 = param_1;
  pwVar5 = (wchar_t *)*param_1;
  pwVar16 = pwVar5;
  do {
    wVar1 = *pwVar16;
    bVar18 = (ushort)wVar1 < (ushort)*pwVar17;
    if (wVar1 != *pwVar17) {
LAB_00421e0b:
      uVar15 = -(uint)bVar18 | 1;
      goto LAB_00421e10;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar16[1];
    bVar18 = (ushort)wVar1 < (ushort)pwVar17[1];
    if (wVar1 != pwVar17[1]) goto LAB_00421e0b;
    pwVar16 = pwVar16 + 2;
    pwVar17 = pwVar17 + 2;
  } while (wVar1 != L'\0');
  uVar15 = 0;
LAB_00421e10:
  local_444 = this;
  if (uVar15 != 0) {
    pwVar16 = L"MoAppCrash";
    do {
      wVar1 = *pwVar5;
      bVar18 = (ushort)wVar1 < (ushort)*pwVar16;
      if (wVar1 != *pwVar16) {
LAB_00421e3f:
        uVar15 = -(uint)bVar18 | 1;
        goto LAB_00421e44;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar5[1];
      bVar18 = (ushort)wVar1 < (ushort)pwVar16[1];
      if (wVar1 != pwVar16[1]) goto LAB_00421e3f;
      pwVar5 = pwVar5 + 2;
      pwVar16 = pwVar16 + 2;
    } while (wVar1 != L'\0');
    uVar15 = 0;
LAB_00421e44:
    if (uVar15 != 0) goto LAB_00422129;
  }
  if ((param_1[0x20] == 1) || (FUN_00428022(), param_1[0x20] == 1)) {
    if (param_1[0x22] == 0) {
      FUN_00428022();
    }
    if (param_1[0x28] == 0) {
      FUN_00428022();
    }
    if (param_1[0x29] == 0) {
      FUN_00428022();
    }
    if (param_1[0x26] == 0) {
      FUN_00428022();
    }
    if (param_1[0x2d] == 0) {
      FUN_00428022();
    }
    if (((param_1[0x26] != 0) && (*(int *)(param_1[0x26] + 0xc) != 0)) &&
       (uVar6 = FUN_00421b96(param_1[0x28],param_1[0x29]), (char)uVar6 != '\0')) {
      iVar7 = FUN_0040e328(0x80000001,L"Software\\Microsoft\\TTD",L"RecordingPolicy",0,
                           (undefined1 *)0x0);
      iVar8 = FUN_0040e328(0x80000002,L"Software\\Microsoft\\TTD",L"RecordingPolicy",0,
                           (undefined1 *)0x0);
      if ((iVar7 != 0x14) && (iVar8 != 0x14)) {
        local_448 = *(undefined4 **)(param_1[0x26] + 0xc);
        psVar9 = FUN_0040e2e2((short *)param_1[0x22]);
        pvVar3 = local_444;
        FUN_00409553((void *)((int)local_444 + 4),psVar9);
        *(undefined4 *)((int)pvVar3 + 0x14) = param_1[0x24];
        memset(local_434,0,0x424);
        local_438 = 0x428;
        iVar7 = Module32FirstW(param_1[0x2d],&local_438);
        while (iVar7 != 0) {
          iVar7 = o__wcsicmp(auStack_418,L"TTDRecordCPU.dll");
          if (iVar7 == 0) {
            if ((puStack_424 <= local_448) &&
               (local_448 < (undefined4 *)(iStack_420 + (int)puStack_424))) {
              local_448 = (undefined4 *)0x14;
              LVar10 = RegSetKeyValueW((HKEY)0x80000001,L"Software\\Microsoft\\TTD",
                                       L"RecordingPolicy",4,&local_448,4);
              if ((LVar10 != 0) &&
                 (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098 &&
                  ((PTR_LOOP_0042d098[0x1c] & 2) != 0)))) {
                FUN_00407519(10,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              }
              goto LAB_00422129;
            }
            *(undefined1 *)((int)pvVar3 + 0x18) = 1;
            break;
          }
          iVar7 = Module32NextW(param_1[0x2d],&local_438);
        }
        local_448 = (undefined4 *)((int)pvVar3 + 0x1c);
        ppvVar11 = (LPHANDLE)FUN_0040ffb8(local_448);
        pvVar12 = GetCurrentProcess();
        pvVar2 = (HANDLE)param_1[0x28];
        pvVar13 = GetCurrentProcess();
        BVar14 = DuplicateHandle(pvVar13,pvVar2,pvVar12,ppvVar11,0,1,2);
        if (BVar14 == 0) {
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00422129;
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar20 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar19 = 0xb;
        }
        else {
          ppuStack_43c = (undefined4 **)((int)local_444 + 0x20);
          ppvVar11 = (LPHANDLE)FUN_0040ffb8(ppuStack_43c);
          pvVar12 = GetCurrentProcess();
          pvVar2 = (HANDLE)local_440[0x29];
          pvVar13 = GetCurrentProcess();
          BVar14 = DuplicateHandle(pvVar13,pvVar2,pvVar12,ppvVar11,0,1,2);
          if (BVar14 != 0) {
            local_440 = (undefined4 *)*local_448;
            iVar7 = FUN_00421b5c(*ppuStack_43c);
            if (iVar7 == 0) {
              iVar7 = 0;
            }
            else {
              ppuStack_43c = &local_440;
              cVar4 = FUN_00422670(&ppuStack_43c,iVar7);
              iVar7 = CONCAT31(extraout_var,cVar4);
            }
            *(bool *)((int)local_444 + 0x1b) = iVar7 == 2;
            goto LAB_00422129;
          }
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00422129;
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar20 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar19 = 0xc;
        }
        FUN_004074f5(uVar19,&DAT_00405448,uVar20,uVar6);
      }
    }
  }
LAB_00422129:
  FUN_00429fd0(local_c ^ (uint)auStack_44c);
  return;
}



/* Function: FUN_00422150 */

undefined4 __thiscall
FUN_00422150(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint unaff_ESI;
  void *local_c [2];
  
  *param_3 = 0;
  local_c[0] = this;
  if (((*(char *)((int)this + 0x19) == '\0') && (*(char *)((int)this + 0x18) != '\0')) &&
     (*(char *)((int)this + 0x1b) != '\0')) {
    local_c[0] = (void *)0x0;
    iVar1 = WerpGetReportFlags(*param_2,local_c);
    if (((iVar1 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0xd,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    iVar1 = WerpSetReportFlags(*param_2,unaff_ESI | 0x800);
    if (((iVar1 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0xe,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    iVar1 = WerpSetTtdStatus(*param_2,4);
    if (((iVar1 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0xf,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    *(undefined1 *)((int)this + 0x19) = 1;
  }
  if (((param_2[1] != 1) || (param_2[3] == 0)) ||
     ((param_2[4] == 0 ||
      ((iVar1 = o__wcsicmp(param_2[3],L"iData"), iVar1 != 0 ||
       (iVar1 = o__wcsicmp(param_2[4],&DAT_00405434), iVar1 != 0)))))) {
    return 1;
  }
  if (*(char *)((int)this + 0x1a) == '\0') {
    *(undefined1 *)((int)this + 0x1a) = 1;
    iVar1 = FUN_004222d2(this,param_2);
    if (iVar1 < 0) {
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return 1;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return 1;
      }
      FUN_00407519(0x10,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      return 1;
    }
  }
  *param_3 = 1;
  return 0;
}



/* Function: FUN_004222d2 */

void __thiscall FUN_004222d2(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *local_248;
  undefined4 local_244;
  undefined2 *local_240;
  undefined2 *local_23c;
  undefined2 local_238 [4];
  undefined2 *local_230;
  undefined2 *local_22c;
  undefined2 local_228 [4];
  short local_220 [266];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_244 = *(undefined4 *)((int)this + 0x1c);
  iVar2 = FUN_00421b5c(*(undefined4 *)((int)this + 0x20));
  if (iVar2 != 0) {
    local_248 = &local_244;
    uVar3 = FUN_00422730(&local_248,local_220,iVar2,iVar2 >> 0x1f,&local_248);
    if (uVar3 != 0) {
      iVar2 = FUN_00421c16(*(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),
                           (undefined4 *)((int)this + 0x24),(undefined4 *)((int)this + 0x28));
      if (iVar2 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0x12,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        goto LAB_00422596;
      }
      local_230 = local_228;
      local_228[0] = 0;
      local_22c = local_230;
      cVar1 = FUN_00409553(&local_230,local_220);
      if (cVar1 == '\0') {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_00407519(0x13,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
      }
      else {
        FUN_00408e2c(&local_230,((int)local_22c - (int)local_230 >> 1) - 4);
        local_240 = local_238;
        local_238[0] = 0;
        local_23c = local_240;
        cVar1 = FUN_004094c0(&local_240,local_230,(int)local_22c - (int)local_230 >> 1);
        if (cVar1 == '\0') {
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar5 = 0x14;
LAB_0042251d:
            FUN_00407519(uVar5,&DAT_00405448,uVar6,uVar4);
          }
        }
        else {
          FUN_00408e2c(&local_240,((int)local_23c - (int)local_240 >> 1) - 2);
          uVar3 = FUN_004225ad(local_230,L".run",1,param_1);
          uVar4 = 2;
          if (-1 < (int)uVar3) {
            uVar4 = 3;
            if (*(char *)((int)this + 0x1b) != '\0') {
              uVar4 = 1;
            }
          }
          FUN_004225ad(local_230,L".out",1,param_1);
          FUN_004225ad(local_230,L".err",1,param_1);
          FUN_004225ad(local_240,L".exe.ttdconfig",0,param_1);
          iVar2 = WerpSetTtdStatus(*param_1,uVar4);
          if (((iVar2 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar5 = 0x15;
            goto LAB_0042251d;
          }
        }
        if (local_240 != local_238) {
          FUN_0042a48f(local_240);
        }
      }
      if (local_230 != local_228) {
        FUN_0042a48f(local_230);
      }
      goto LAB_00422596;
    }
  }
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_004074f5(0x11,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
LAB_00422596:
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004225ad */

uint FUN_004225ad(undefined4 param_1,undefined4 param_2,DWORD param_3,undefined4 *param_4)

{
  uint uVar1;
  PCWSTR local_14;
  WCHAR *local_10;
  WCHAR local_c [4];
  
  local_14 = local_c;
  local_c[0] = L'\0';
  local_10 = local_14;
  uVar1 = FUN_0040ffdb((int *)&local_14,L"%ws%ws");
  if ((int)uVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00407519(0x16,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    uVar1 = WerReportAddFile((HREPORT)*param_4,local_14,WerFileTypeOther,param_3);
    if ((((int)uVar1 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
      FUN_004097c1(0x17,&DAT_00405448,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),local_14);
    }
  }
  if (local_14 != local_c) {
    FUN_0042a48f(local_14);
  }
  return uVar1;
}



/* Function: FUN_00422670 */

char __thiscall FUN_00422670(void *this,int param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_ec [112];
  char local_7c [28];
  int local_60;
  int local_54;
  int local_18;
  int local_c;
  char local_5;
  
  puVar1 = (undefined4 *)FUN_004228b2(this,local_ec,param_1);
  pcVar4 = local_7c;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    pcVar4 = pcVar4 + 4;
  }
  if (local_7c[0] != '\0') {
    local_c = 0;
                    /* WARNING: Load size is inaccurate */
    BVar2 = ReadProcessMemory((HANDLE)**this,(LPCVOID)(local_60 + local_18),&local_c,4,(SIZE_T *)0x0
                             );
    if (BVar2 != 0) {
      if (((((local_c != 1) && (local_c != 2)) && (local_c != 3)) &&
          ((local_c != 4 && (local_c != 7)))) && (local_c != 8)) {
        local_5 = '\0';
                    /* WARNING: Load size is inaccurate */
        if ((local_c == 5) &&
           (BVar2 = ReadProcessMemory((HANDLE)**this,(LPCVOID)(local_54 + local_18),&local_5,1,
                                      (SIZE_T *)0x0), BVar2 != 0)) {
          return (local_5 != '\0') + '\x01';
        }
        return '\x01';
      }
      return '\x02';
    }
  }
  return '\0';
}



/* Function: FUN_00422730 */

uint __fastcall
FUN_00422730(undefined4 param_1,LPVOID param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_f8 [112];
  char local_88 [12];
  int local_7c;
  int local_50;
  int local_44;
  LPVOID local_18;
  LPCVOID local_14;
  int local_10;
  uint local_c [2];
  
  local_18 = param_2;
  puVar2 = (undefined4 *)FUN_004228b2(param_5,local_f8,param_3);
  pcVar6 = local_88;
  for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    pcVar6 = pcVar6 + 4;
  }
  if (local_88[0] != '\0') {
    local_c[0] = 0;
    BVar3 = ReadProcessMemory(*(HANDLE *)*param_5,(LPCVOID)(local_44 + local_7c),local_c,4,
                              (SIZE_T *)0x0);
    if ((BVar3 != 0) && (local_c[0] != 0)) {
      local_14 = (LPCVOID)0x0;
      local_10 = 0;
      BVar3 = ReadProcessMemory(*(HANDLE *)*param_5,(LPCVOID)(local_50 + local_7c),&local_14,8,
                                (SIZE_T *)0x0);
      pvVar1 = local_18;
      if ((BVar3 != 0) && (local_14 != (LPCVOID)0x0 || local_10 != 0)) {
        uVar4 = 0x104;
        if (local_c[0] < 0x104) {
          uVar4 = local_c[0];
        }
        BVar3 = ReadProcessMemory(*(HANDLE *)*param_5,local_14,local_18,uVar4 * 2,(SIZE_T *)0x0);
        if (BVar3 != 0) {
          *(undefined2 *)(uVar4 * 2 + (int)pvVar1) = 0;
          return local_c[0];
        }
      }
    }
  }
  return 0;
}



/* Function: FUN_00422809 */

void __thiscall FUN_00422809(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_f8 [112];
  char local_88 [12];
  int local_7c;
  int local_4c;
  int local_48;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar1 = (undefined4 *)FUN_004228b2(this,local_f8,param_2);
  pcVar4 = local_88;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    pcVar4 = pcVar4 + 4;
  }
  if (local_88[0] != '\0') {
    local_18 = 0;
                    /* WARNING: Load size is inaccurate */
    local_10 = 0;
    BVar2 = ReadProcessMemory((HANDLE)**this,(LPCVOID)(local_4c + local_7c),&local_18,8,
                              (SIZE_T *)0x0);
                    /* WARNING: Load size is inaccurate */
    if ((BVar2 != 0) &&
       (BVar2 = ReadProcessMemory((HANDLE)**this,(LPCVOID)(local_48 + local_7c),&local_10,8,
                                  (SIZE_T *)0x0), BVar2 != 0)) {
      *param_1 = (undefined4)local_18;
      param_1[1] = local_18._4_4_;
      param_1[2] = (undefined4)local_10;
      param_1[3] = local_10._4_4_;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Function: FUN_004228b2 */

undefined1 * __thiscall FUN_004228b2(void *this,undefined1 *param_1,int param_2)

{
  undefined4 *lpBuffer;
  BOOL BVar1;
  LPCVOID local_18;
  int local_14;
  LPCVOID local_10;
  int local_c [2];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x14,0,0x50);
  lpBuffer = (undefined4 *)(param_1 + 100);
  *lpBuffer = 0;
  local_10 = (LPCVOID)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_c[0] = 0;
                    /* WARNING: Load size is inaccurate */
  BVar1 = ReadProcessMemory((HANDLE)**this,local_10,local_c,4,(SIZE_T *)0x0);
  if ((BVar1 != 0) && (local_c[0] == 0x31445454)) {
                    /* WARNING: Load size is inaccurate */
    BVar1 = ReadProcessMemory((HANDLE)**this,(LPCVOID)((int)local_10 + 4),lpBuffer,8,(SIZE_T *)0x0);
    if (BVar1 != 0) {
      if ((LPCVOID)*lpBuffer != (LPCVOID)0x0 || *(int *)(param_1 + 0x68) != 0) {
        local_18 = (LPCVOID)0x0;
                    /* WARNING: Load size is inaccurate */
        local_14 = 0;
        BVar1 = ReadProcessMemory((HANDLE)**this,(LPCVOID)*lpBuffer,&local_18,8,(SIZE_T *)0x0);
        if ((BVar1 != 0) && (local_18 != (LPCVOID)0x0 || local_14 != 0)) {
                    /* WARNING: Load size is inaccurate */
          BVar1 = ReadProcessMemory((HANDLE)**this,local_18,param_1 + 4,0x60,(SIZE_T *)0x0);
          if ((BVar1 != 0) && ((*(int *)(param_1 + 4) == 9 && (*(int *)(param_1 + 8) == 0xcc)))) {
            *param_1 = 1;
          }
        }
      }
    }
  }
  return param_1;
}



/* Function: FUN_004229aa */

void __fastcall FUN_004229aa(int param_1,int param_2)

{
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0042b5a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00413c0d(param_1,param_2,0x4053ec,0x4053cc,param_1,unaff_retaddr);
  ExceptionList = local_10;
  return;
}



/* Function: `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: virtual void * __thiscall CXMLParserRoot::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2015 Release */

void * __thiscall CXMLParserRoot::_scalar_deleting_destructor_(CXMLParserRoot *this,uint param_1)

{
  FUN_00422da9((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return this;
}



/* Function: FUN_00422a30 */

undefined4 __thiscall FUN_00422a30(void *this,undefined4 *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  bool bVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar5 = 0x80070057;
  }
  else {
    pwVar2 = (wchar_t *)*param_1;
    pwVar4 = L"BlueScreen";
    do {
      wVar1 = *pwVar2;
      uVar5 = 0;
      bVar6 = (ushort)wVar1 < (ushort)*pwVar4;
      if (wVar1 != *pwVar4) {
LAB_00422a9b:
        uVar3 = -(uint)bVar6 | 1;
        goto LAB_00422aa0;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar2[1];
      bVar6 = (ushort)wVar1 < (ushort)pwVar4[1];
      if (wVar1 != pwVar4[1]) goto LAB_00422a9b;
      pwVar2 = pwVar2 + 2;
      pwVar4 = pwVar4 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_00422aa0:
    if (uVar3 == 0) {
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    else {
      uVar5 = 0x80004001;
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0xb,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
  }
  return uVar5;
}



/* Function: FUN_00422ae1 */

void FUN_00422ae1(void)

{
  BOOL BVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 local_130;
  _OSVERSIONINFOW local_12c;
  char local_12;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_130 = 0;
  memset(&local_12c.dwMajorVersion,0,0x118);
  local_12c.dwOSVersionInfoSize = 0x11c;
  BVar1 = GetVersionExW(&local_12c);
  if ((((BVar1 != 0) && (local_12 == '\x01')) &&
      (iVar2 = FUN_0042522c((HKEY)0x80000002,
                            L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\DriverVerifier"
                            ,extraout_ECX,5,&local_130), iVar2 < 0)) &&
     (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098 && ((PTR_LOOP_0042d098[0x1c] & 1) != 0)
      ))) {
    FUN_00407519(0xc,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00422b97 */

void FUN_00422b97(void)

{
  undefined4 local_88;
  undefined1 local_84 [124];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  memset(local_84,0,0x78);
  local_88 = 0;
  NtQuerySystemInformation(0x33,local_84,0x78,&local_88);
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00422c00 */

int __thiscall FUN_00422c00(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (undefined4 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xd,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return -0x7ff8ffa9;
  }
  *param_3 = 0;
  if (param_2[1] == 3) {
    if (*(int *)((int)this + 0x18) == 1) {
      iVar2 = FUN_00423591((short *)param_2[3]);
      if (-1 < iVar2) {
        return iVar2;
      }
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return iVar2;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return iVar2;
      }
      FUN_00407519(0xe,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      return iVar2;
    }
LAB_00422cb7:
    if ((((param_2[1] == 1) && (param_2[3] != 0)) && (param_2[4] != 0)) &&
       (iVar2 = o__wcsicmp(param_2[3],L"Driververifier"), iVar2 == 0)) {
      *param_3 = 1;
      iVar2 = FUN_00422b97();
      if ((iVar2 == 0) && (iVar2 = FUN_00422ae1(), iVar2 != 0)) {
        iVar2 = FUN_00422fa6(this,(short *)param_2[4]);
        if (iVar2 < 0) {
          if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
            return iVar2;
          }
          if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
            return iVar2;
          }
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar4 = 0xf;
LAB_00422d2b:
          FUN_004074f5(uVar4,&DAT_00405568,uVar5,uVar6);
          return iVar2;
        }
        iVar2 = FUN_004233c3(this,*param_2);
        if (iVar2 < 0) {
          if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
            return iVar2;
          }
          if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
            return iVar2;
          }
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar4 = 0x10;
          goto LAB_00422d2b;
        }
        goto LAB_00422cb0;
      }
    }
    iVar2 = -0x7fffbfff;
  }
  else {
    if (((param_2[1] != 9) || (param_2[3] != 2)) ||
       ((cVar1 = FUN_0042ad52((uint3)this), cVar1 == '\0' ||
        (BVar3 = IsWindow((HWND)param_2[4]), BVar3 == 0)))) goto LAB_00422cb7;
    *(undefined4 *)((int)this + 4) = param_2[4];
    *param_3 = 1;
LAB_00422cb0:
    iVar2 = 0;
  }
  return iVar2;
}



/* Function: FUN_00422da9 */

void __fastcall FUN_00422da9(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401264;
  FUN_0042384f(param_1 + 2);
  *param_1 = &PTR_o__purecall_0040112c;
  return;
}



/* Function: FUN_00422dca */

undefined4 __thiscall FUN_00422dca(void *this,short *param_1)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 *this_00;
  char cVar3;
  short *psVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  undefined4 uVar13;
  short *local_38;
  short *local_34;
  short local_30 [6];
  short *local_24;
  uint local_20;
  void *local_1c;
  int *local_18;
  short *local_14;
  
  local_38 = local_30;
  local_30[0] = 0;
  local_34 = local_38;
  local_1c = this;
  if (param_1 == (short *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x11,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar13 = 0x80070057;
    psVar4 = local_14;
  }
  else {
    cVar3 = FUN_00409553(&local_38,param_1);
    if ((cVar3 == '\0') || (cVar3 = FUN_0040fe81(&local_38,0x7c), psVar4 = local_38, cVar3 == '\0'))
    {
LAB_00422f77:
      uVar13 = 0x8007000e;
      psVar4 = local_14;
    }
    else {
      for (; psVar4 != local_34; psVar4 = psVar4 + 1) {
        if (*psVar4 == 0x7c) {
          *psVar4 = 0;
        }
      }
      uVar13 = 0;
      local_14 = local_38;
      psVar4 = local_38;
      do {
        sVar2 = *psVar4;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      iVar11 = (int)psVar4 - (int)(local_38 + 1) >> 1;
      psVar4 = local_14;
      if (iVar11 != 0) {
        piVar9 = (int *)((int)local_1c + 8);
        local_20 = 0x7ffffff;
        local_18 = piVar9;
        do {
          local_24 = (short *)iVar11;
          iVar5 = FUN_00408a88((int)local_14,iVar11,piVar9,0x40550c,6);
          iVar5 = (iVar11 - iVar5) + -1;
          local_1c = (void *)(iVar11 - iVar5);
          pvVar6 = (void *)FUN_00408ac6(local_14,(uint)local_1c,iVar5,0x40550c,6);
          if (local_1c < pvVar6) {
            pvVar6 = local_1c;
          }
          local_1c = (void *)((int)local_1c - (int)pvVar6);
          local_24 = local_14 + (int)pvVar6;
          if (local_18[1] == local_18[2]) {
            uVar10 = local_18[2] - *local_18 >> 4;
            uVar7 = (uVar10 >> 2) * 7 + 8;
            if (0x7ffffff < uVar7) {
              uVar7 = local_20;
            }
            if ((uVar7 <= uVar10) || (uVar8 = FUN_00423749(local_18,uVar7), (char)uVar8 == '\0'))
            goto LAB_00422f77;
          }
          this_00 = (undefined4 *)local_18[1];
          puVar1 = this_00 + 2;
          *this_00 = puVar1;
          this_00[1] = puVar1;
          *(undefined2 *)puVar1 = 0;
          cVar3 = FUN_004094c0(this_00,local_24,(uint)local_1c);
          if (cVar3 == '\0') {
            FUN_004095b0((int *)local_18[1]);
            goto LAB_00422f77;
          }
          local_18[1] = local_18[1] + 0x10;
          psVar4 = local_14 + iVar11 + 1;
          if (*psVar4 == 0) break;
          piVar9 = (int *)(local_14 + iVar11 + 2);
          psVar12 = psVar4;
          do {
            sVar2 = *psVar12;
            psVar12 = psVar12 + 1;
          } while (sVar2 != 0);
          iVar11 = (int)psVar12 - (int)piVar9 >> 1;
          local_14 = psVar4;
        } while (iVar11 != 0);
      }
    }
  }
  local_14 = psVar4;
  if (local_38 != local_30) {
    FUN_0042a48f(local_38);
  }
  return uVar13;
}



/* Function: FUN_00422fa6 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __thiscall FUN_00422fa6(void *this,short *param_1)

{
  uint *puVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  wchar_t *local_50;
  wchar_t **local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  uint *local_3c;
  undefined1 local_38;
  undefined4 local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  wchar_t local_28 [4];
  short *local_20;
  short *local_1c;
  short local_18 [8];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_20 = local_18;
  local_18[0] = 0;
  local_30 = local_28;
  local_28[0] = L'\0';
  puVar1 = (uint *)((int)this + 0x14);
  local_8 = 1;
  local_4c = &local_30;
  *puVar1 = 0;
  local_50 = L"VerifyDrivers=";
  local_48 = 2;
  local_44 = 0;
  local_40 = L"VerifyFlags=";
  local_38 = 0;
  local_34 = 0;
  local_3c = puVar1;
  local_2c = local_30;
  local_1c = local_20;
  if (param_1 == (short *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x12,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    iVar4 = -0x7ff8ffa9;
    goto LAB_00423128;
  }
  cVar3 = FUN_00409553(&local_20,param_1);
  psVar2 = local_20;
  if (cVar3 == '\0') {
    iVar4 = -0x7ff8fff2;
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423128;
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar5 = 0x13;
  }
  else {
    for (; psVar2 != local_1c; psVar2 = psVar2 + 1) {
      if (*psVar2 == 0x3b) {
        *psVar2 = 10;
      }
    }
    FUN_00427d28(local_20,(int)local_1c - (int)local_20 >> 1,(int)&local_50,2);
    if ((local_30 == local_2c) || (*puVar1 == 0)) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004097c1(0x14,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),local_30);
      }
      iVar4 = -0x7fffbffb;
      goto LAB_00423128;
    }
    *puVar1 = *puVar1 & 0xbfb;
    iVar4 = FUN_00422dca(this,local_30);
    if (-1 < iVar4) {
      iVar4 = 0;
      goto LAB_00423128;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423128;
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar5 = 0x15;
  }
  FUN_00407519(uVar5,&DAT_00405568,uVar6,uVar7);
LAB_00423128:
  if (local_30 != local_28) {
    FUN_0042a48f(local_30);
  }
  if (local_20 != local_18) {
    FUN_0042a48f(local_20);
  }
  return iVar4;
}



/* Function: FUN_00423163 */

undefined4 __thiscall FUN_00423163(void *this,undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 *local_64;
  undefined2 *local_60;
  undefined2 *local_5c;
  undefined2 *local_58;
  undefined4 uStack_54;
  undefined2 *local_50;
  undefined2 *local_4c;
  undefined2 local_48 [4];
  undefined2 *local_40;
  undefined2 *local_3c;
  undefined2 local_38 [4];
  undefined2 *local_30;
  undefined2 *local_2c;
  undefined2 local_28 [4];
  undefined2 *local_20;
  undefined2 *local_1c;
  undefined2 local_18 [4];
  uint local_10;
  undefined4 local_c [2];
  
  local_50 = local_48;
  local_48[0] = 0;
  local_40 = local_38;
  local_38[0] = 0;
  local_30 = local_28;
  local_28[0] = 0;
  local_20 = local_18;
  local_18[0] = 0;
  local_64 = (undefined2 *)0x0;
  uVar3 = 0;
  local_c[0] = 0;
  local_10 = 0;
  local_60 = (undefined2 *)0x0;
  local_5c = (undefined2 *)0x0;
  local_58 = (undefined2 *)0x0;
  uStack_54 = 0;
  local_4c = local_50;
  local_3c = local_40;
  local_2c = local_30;
  local_1c = local_20;
  iVar1 = FUN_0040ebee();
  if (((iVar1 == 0) && (iVar1 = FUN_004287f9(), iVar1 != 0)) &&
     (iVar1 = WerpGetReportFlags(param_1,&local_10), -1 < iVar1)) {
    if ((local_10 & 0x180000) == 0) {
      DVar2 = FUN_0040a6a0(&local_50,0x1d5d,(HINSTANCE)&IMAGE_DOS_HEADER_00400000);
      if ((int)DVar2 < 0) {
        uVar3 = local_c[0];
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423363;
        uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x16;
      }
      else {
        DVar2 = FUN_0040a6a0(&local_40,0x1d5e,(HINSTANCE)&IMAGE_DOS_HEADER_00400000);
        if ((int)DVar2 < 0) {
          uVar3 = local_c[0];
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423363;
          uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar4 = 0x17;
        }
        else {
          DVar2 = FUN_0040a6a0(&local_30,0x1d5f,(HINSTANCE)&IMAGE_DOS_HEADER_00400000);
          if ((int)DVar2 < 0) {
            uVar3 = local_c[0];
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423363;
            uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar4 = 0x18;
          }
          else {
            DVar2 = FUN_0040a6a0(&local_20,0x1d60,(HINSTANCE)&IMAGE_DOS_HEADER_00400000);
            if (-1 < (int)DVar2) {
              local_64 = local_50;
              local_60 = local_40;
              local_5c = local_30;
              local_58 = local_20;
              iVar1 = WerpPromptUser(param_1,*(undefined4 *)((int)this + 4),&local_64,local_c);
              if (iVar1 < 0) {
                if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                   ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                  FUN_00407519(0x1a,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                               *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
                }
                local_c[0] = 0;
                uVar3 = local_c[0];
              }
              else {
                FUN_00427607((HKEY)0x80000002,
                             L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\DriverVerifier"
                            );
                uVar3 = local_c[0];
              }
              goto LAB_00423363;
            }
            uVar3 = local_c[0];
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423363;
            uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar4 = 0x19;
          }
        }
      }
      FUN_00407519(uVar4,&DAT_00405568,uVar5,uVar3);
      uVar3 = local_c[0];
    }
    else {
      uVar3 = 1;
    }
  }
LAB_00423363:
  if (local_20 != local_18) {
    FUN_0042a48f(local_20);
  }
  if (local_30 != local_28) {
    FUN_0042a48f(local_30);
  }
  if (local_40 != local_38) {
    FUN_0042a48f(local_40);
  }
  if (local_50 != local_48) {
    FUN_0042a48f(local_50);
  }
  return uVar3;
}



/* Function: FUN_004233c3 */

void __thiscall FUN_004233c3(void *this,undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_3c [11];
  char local_31;
  undefined4 local_30 [9];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_31 = '\0';
  puVar5 = local_30;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar3 = FUN_00423163(this,param_1);
  if (iVar3 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
      FUN_004074f5(0x1b,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    uVar2 = RtlAdjustPrivilege(0x14,1,0,&local_31);
    if ((uVar2 & 0xc0000000) == 0xc0000000) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_00407519(0x1c,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_00423578;
    }
    local_30[0] = 1;
    uVar2 = NtSetSystemInformation(0x5c,local_30,0x24);
    if ((uVar2 & 0xc0000000) == 0xc0000000) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar6 = 0x1d;
LAB_004234ac:
        FUN_00407519(uVar6,&DAT_00405568,uVar7,uVar8);
      }
    }
    else {
      uVar2 = NtSetSystemInformation(0x33,(int)this + 0x14,4);
      if ((uVar2 & 0xc0000000) == 0xc0000000) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar6 = 0x1e;
          goto LAB_004234ac;
        }
      }
      else {
        piVar1 = *(int **)((int)this + 0xc);
        for (piVar4 = *(int **)((int)this + 8); piVar4 != piVar1; piVar4 = piVar4 + 4) {
          if (*piVar4 != piVar4[1]) {
            RtlInitUnicodeString(local_3c,*piVar4);
            uVar2 = NtSetSystemInformation(0x28,local_3c,8);
            if ((((uVar2 & 0xc0000000) == 0xc0000000) &&
                ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              FUN_004097c1(0x1f,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),(wchar_t *)*piVar4);
            }
          }
        }
        *(undefined4 *)((int)this + 0x18) = 1;
      }
    }
  }
  if (local_31 != '\0') {
    RtlAdjustPrivilege(0x14,0,0,&local_31);
  }
LAB_00423578:
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00423591 */

void FUN_00423591(short *param_1)

{
  wchar_t *pwVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  psVar5 = param_1;
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  uVar6 = (int)psVar5 - (int)(param_1 + 1) >> 1;
  uVar3 = FUN_0040d331((int)param_1,uVar6,0,(ushort *)PTR_u_Bucket__00401444,7);
  if (uVar3 == 0xffffffff) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004236d3;
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar7 = 0x20;
  }
  else {
    pwVar1 = param_1 + uVar3 + 7;
    if (param_1 + uVar6 <= pwVar1) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x21,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      goto LAB_004236d3;
    }
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
      FUN_0040975c(0x22,&DAT_00405568,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),pwVar1);
    }
    local_30 = 1;
    RtlInitUnicodeString((int)&local_2c + 4,pwVar1);
    iVar4 = NtSetSystemInformation(0x5c,&local_30,0x24);
    if (((-1 < iVar4) || ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004236d3;
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar7 = 0x23;
  }
  FUN_00407519(uVar7,&DAT_00405568,uVar8,uVar9);
LAB_004236d3:
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004236ec */

undefined4 * __thiscall FUN_004236ec(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_1 + 2;
  if ((undefined4 *)*param_1 == puVar1) {
    *(undefined4 **)this = (undefined4 *)((int)this + 8);
    *(void **)((int)this + 4) =
         (void *)((int)this + (((param_1[1] - (int)param_1) + -8 >> 1) + 4) * 2);
    uVar2 = *puVar1;
    *(undefined4 *)((int)this + 0xc) = param_1[3];
  }
  else {
    *(undefined4 **)this = (undefined4 *)*param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    uVar2 = *puVar1;
  }
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined2 *)puVar1 = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return (undefined4 *)this;
}



/* Function: FUN_00423749 */

undefined4 __thiscall FUN_00423749(void *this,uint param_1)

{
  void *pvVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  int *local_8;
  
  local_10 = 0;
  local_8 = (int *)this;
  if (param_1 < 0x10000000) {
    pvVar1 = (void *)FUN_0042a4d8(param_1 << 4);
  }
  else {
    pvVar1 = (void *)0x0;
  }
  local_c = pvVar1;
  if (pvVar1 != (void *)0x0) {
    local_1c = (void *)(param_1 * 0x10 + (int)pvVar1);
    local_20 = pvVar1;
    if (pvVar1 == (void *)0xffffffff) goto LAB_00423807;
    iVar2 = *local_8;
    iVar4 = local_8[1] - iVar2 >> 4;
    local_24 = pvVar1;
    local_14 = iVar2;
    if (iVar4 != 0) {
      iVar3 = iVar2 - (int)pvVar1;
      local_18 = pvVar1;
      do {
        FUN_004236ec(pvVar1,(undefined4 *)(iVar3 + (int)pvVar1));
        pvVar1 = (void *)((int)pvVar1 + 0x10);
        iVar4 = iVar4 + -1;
        iVar2 = extraout_ECX;
      } while (iVar4 != 0);
    }
    pvVar1 = local_c;
    FUN_0042381f(iVar2,(int)local_c,0);
    iVar2 = local_8[1];
    iVar4 = *local_8;
    FUN_0042384f(local_8);
    local_10 = CONCAT31(local_10._1_3_,1);
    *local_8 = (int)pvVar1;
    local_8[1] = (iVar2 - iVar4 & 0xfffffff0U) + (int)pvVar1;
    local_8[2] = (int)local_1c;
  }
  local_1c = (void *)0xffffffff;
  local_20 = (void *)0xffffffff;
LAB_00423807:
  local_24 = local_20;
  FUN_0042384f((int *)&local_24);
  return local_10;
}



/* Function: FUN_0042381f */

void __fastcall FUN_0042381f(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 * 0x10 + param_2);
    do {
      piVar1 = piVar1 + -4;
      FUN_004095b0(piVar1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Function: FUN_0042384f */

void __fastcall FUN_0042384f(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != -1) {
    iVar2 = param_1[1];
    param_1[1] = iVar1;
    FUN_0042381f(param_1,iVar1,iVar2 - iVar1 >> 4);
    FUN_0042a48f(*param_1);
  }
  return;
}



/* Function: FUN_00423890 */

undefined4 * __thiscall FUN_00423890(void *this,byte param_1)

{
  FUN_00423a3d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004238ba */

undefined4 FUN_004238ba(short *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  char *pcVar8;
  int local_c;
  int local_8;
  
  bVar2 = false;
  local_8 = 0;
  if (param_1 != (short *)0x0) {
    psVar5 = param_1;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    uVar6 = (int)psVar5 - (int)(param_1 + 1) >> 1;
    if (uVar6 != 0) {
      if (uVar6 < 0x7fffffff) {
        piVar3 = FUN_0041f228(&local_c,uVar6 + 1);
        FUN_0041f1e8(param_4,piVar3);
        if (local_c != 0) {
          o_free(local_c);
        }
        psVar5 = (short *)*param_4;
        if (psVar5 == (short *)0x0) {
          DbgPrint(&DAT_004055a4);
          iVar4 = *param_4;
          *param_4 = 0;
          if (iVar4 == 0) {
            return 0x8007000e;
          }
          o_free(iVar4);
          return 0x8007000e;
        }
        sVar1 = *param_1;
        if (sVar1 != 0) {
          local_c = 1;
          psVar7 = param_1;
          do {
            while (sVar1 == 0x20) {
              if (bVar2) {
                local_8 = local_c;
              }
              sVar1 = psVar7[1];
              psVar7 = psVar7 + 1;
            }
            if ((local_8 != 0) && (*psVar7 != 0)) {
              *psVar5 = 0x20;
              psVar5 = psVar5 + 1;
              local_8 = 0;
            }
            iVar4 = o__wcsnicmp(psVar7,&DAT_004055a8,3);
            if (((iVar4 == 0) && ((psVar7[3] == 0 || (psVar7[3] == 0x20)))) &&
               ((psVar7 == param_1 || ((param_1 < psVar7 && (psVar7[-1] == 0)))))) {
              psVar7 = psVar7 + 3;
            }
            if (*psVar7 == 0) break;
            *psVar5 = *psVar7;
            psVar7 = psVar7 + 1;
            bVar2 = true;
            psVar5 = psVar5 + 1;
            sVar1 = *psVar7;
          } while (sVar1 != 0);
        }
        *psVar5 = 0;
        return 0;
      }
      pcVar8 = "Too large size";
      goto LAB_00423a14;
    }
  }
  pcVar8 = "Invalid params";
LAB_00423a14:
  DbgPrint(pcVar8);
  return 0x80070057;
}



/* Function: FUN_00423a30 */

undefined4 __fastcall FUN_00423a30(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 0;
}



/* Function: FUN_00423a3d */

void __fastcall FUN_00423a3d(undefined4 *param_1)

{
  param_1[8] = 0;
  *param_1 = &PTR_FUN_0040127c;
  FUN_004095b0(param_1 + 0xb);
  FUN_004095b0(param_1 + 1);
  *param_1 = &PTR_o__purecall_0040112c;
  return;
}



/* Function: FUN_00423a70 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall
FUN_00423a70(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *local_24;
  undefined2 *local_20;
  undefined2 local_1c [4];
  short *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_24 = local_1c;
  local_1c[0] = 0;
  uVar5 = 0;
  local_8 = 0;
  local_20 = local_24;
  if (param_1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(10,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar5 = 0x80070057;
    goto LAB_00423ca5;
  }
  iVar2 = o__wcsicmp(*param_1,L"APPCRASH");
  if (((((iVar2 == 0) || (iVar2 = o__wcsicmp(*param_1,L"MoAppCrash"), iVar2 == 0)) ||
       (iVar2 = o__wcsicmp(*param_1,L"AppHangB1"), iVar2 == 0)) ||
      ((iVar2 = o__wcsicmp(*param_1,L"AppHangXProcB1"), iVar2 == 0 ||
       (iVar2 = o__wcsicmp(*param_1,L"MoAppHang"), iVar2 == 0)))) ||
     (iVar2 = o__wcsicmp(*param_1,L"MoAppHangXProc"), iVar2 == 0)) {
    *(undefined4 *)((int)this + 0x20) = param_3;
    if ((param_1[0x20] != 1) && (param_1[0x20] != 2)) {
      FUN_00428022();
    }
    if (param_1[0x20] == 1) {
      local_14[0] = (short *)param_1[0x22];
      *(undefined4 *)((int)this + 0x14) = param_1[0x28];
      *(undefined4 *)((int)this + 0x18) = param_1[0x24];
LAB_00423bec:
      if ((local_14[0] != (short *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
        cVar1 = FUN_00409553((void *)((int)this + 4),local_14[0]);
        if (cVar1 == '\0') {
          uVar5 = 0x8007000e;
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_00407519(0xd,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
        }
        else {
          uVar4 = FUN_00424798((void *)((int)this + 0x2c),&local_24,(int *)local_14);
          if (-1 < (int)uVar4) {
            *(undefined4 *)((int)this + 0x24) = 1;
            iVar2 = o__wcsicmp(*(undefined4 *)((int)this + 4),local_24);
            if ((iVar2 == 0) && (*(short **)((int)this + 0x18) == local_14[0])) {
              *(undefined4 *)((int)this + 0x28) = 1;
            }
          }
        }
        goto LAB_00423ca5;
      }
    }
    else if (param_1[0x20] == 2) {
      local_14[0] = (short *)param_1[0x21];
      *(undefined4 *)((int)this + 0x14) = param_1[0x22];
      DVar3 = GetProcessId((HANDLE)param_1[0x22]);
      *(DWORD *)((int)this + 0x18) = DVar3;
      if (DVar3 == 0) {
        FUN_00428022();
      }
      goto LAB_00423bec;
    }
    uVar5 = 0x80070057;
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423ca5;
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar6 = 0xc;
  }
  else {
    uVar5 = 0x80004001;
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 4) == 0)) goto LAB_00423ca5;
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar6 = 0xb;
  }
  FUN_004074f5(uVar6,&DAT_00405734,uVar7,uVar8);
LAB_00423ca5:
  if (local_24 != local_1c) {
    FUN_0042a48f(local_24);
  }
  return uVar5;
}



/* Function: FUN_00423cd0 */

int __thiscall FUN_00423cd0(void *this,undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  BOOL BVar2;
  uint uVar3;
  void *extraout_ECX;
  void *pvVar4;
  int iVar5;
  undefined4 uStackY_38;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_1c;
  short *local_18;
  short *local_14;
  short local_10 [6];
  
  local_18 = local_10;
  local_10[0] = 0;
  local_14 = local_18;
  if (param_3 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xe,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    iVar5 = -0x7ff8ffa9;
    goto LAB_00423f9b;
  }
  *param_3 = 0;
  if (param_2 == (int *)0x0) {
LAB_00423f96:
    iVar5 = -0x7fffbfff;
    goto LAB_00423f9b;
  }
  pvVar4 = this;
  if (((param_2[1] == 0xc) || (param_2[1] == 6)) && (*(int *)((int)this + 0x28) != 0)) {
    local_1c = 0;
    iVar5 = WerpGetReportFlags(*param_2,&local_1c);
    if (iVar5 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423f9b;
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uStackY_38 = 0xf;
    }
    else {
      local_1c = local_1c | 0x800;
      iVar5 = WerpSetReportFlags(*param_2,local_1c);
      pvVar4 = extraout_ECX;
      if (-1 < iVar5) goto LAB_00423ddf;
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423f9b;
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uStackY_38 = 0x10;
    }
    FUN_00407519(uStackY_38,&DAT_00405734,uVar6,uVar8);
    goto LAB_00423f9b;
  }
LAB_00423ddf:
  if ((((param_2[1] == 9) && (param_2[3] == 2)) &&
      (cVar1 = FUN_0042ad52((uint3)pvVar4), cVar1 != '\0')) &&
     (BVar2 = IsWindow((HWND)param_2[4]), BVar2 != 0)) {
    *(int *)((int)this + 0x1c) = param_2[4];
    *param_3 = 1;
  }
  else {
    if (((param_2[1] != 1) || (*param_2 == 0)) ||
       ((param_2[3] == 0 ||
        ((param_2[4] == 0 || (iVar5 = o__wcsicmp(param_2[3],&DAT_004055a8), iVar5 != 0))))))
    goto LAB_00423f96;
    cVar1 = FUN_00409553(&local_18,(short *)param_2[4]);
    if (cVar1 == '\0') {
      iVar5 = -0x7ff8fff2;
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423f9b;
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar7 = 0x11;
LAB_00423e88:
      FUN_004074f5(uVar7,&DAT_00405734,uVar6,uVar8);
      goto LAB_00423f9b;
    }
    if (*(int *)((int)this + 0x24) == 0) {
      iVar5 = FUN_0042424c(this,local_18,*param_2);
      if (iVar5 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423f9b;
        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar7 = 0x12;
        goto LAB_00423e88;
      }
    }
    else if ((*(int *)((int)this + 0x28) != 0) &&
            (iVar5 = o__wcsicmp(*(undefined4 *)((int)this + 0x2c),local_18), iVar5 == 0)) {
      iVar5 = FUN_004250c9();
      if (iVar5 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_00407519(0x13,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
      }
      else {
        uVar3 = FUN_00424a43((HREPORT)*param_2);
        if ((((int)uVar3 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0x14,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
      }
      iVar5 = FUN_00424d7a();
      if (iVar5 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00423f9b;
        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar7 = 0x15;
        goto LAB_00423e88;
      }
    }
    *param_3 = 1;
  }
  iVar5 = 0;
LAB_00423f9b:
  if (local_18 != local_10) {
    FUN_0042a48f(local_18);
  }
  return iVar5;
}



/* Function: FUN_00423fc6 */

undefined4 __thiscall FUN_00423fc6(void *this,undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *local_64;
  undefined2 *local_60;
  undefined2 *local_5c;
  undefined2 *local_58;
  undefined4 uStack_54;
  undefined2 *local_50;
  undefined2 *local_4c;
  undefined2 local_48 [4];
  undefined2 *local_40;
  undefined2 *local_3c;
  undefined2 local_38 [4];
  undefined2 *local_30;
  undefined2 *local_2c;
  undefined2 local_28 [4];
  undefined2 *local_20;
  undefined2 *local_1c;
  undefined2 local_18 [4];
  undefined4 local_10;
  uint local_c [2];
  
  local_50 = local_48;
  local_48[0] = 0;
  local_40 = local_38;
  local_38[0] = 0;
  local_30 = local_28;
  local_28[0] = 0;
  local_20 = local_18;
  local_18[0] = 0;
  local_64 = (undefined2 *)0x0;
  uVar4 = 0;
  local_10 = 0;
  local_c[0] = 0;
  local_60 = (undefined2 *)0x0;
  local_5c = (undefined2 *)0x0;
  local_58 = (undefined2 *)0x0;
  uStack_54 = 0;
  local_4c = local_50;
  local_3c = local_40;
  local_2c = local_30;
  local_1c = local_20;
  iVar1 = FUN_0040ebee();
  if (((iVar1 == 0) && (iVar1 = FUN_004287f9(), iVar1 != 0)) &&
     (iVar1 = WerpGetReportFlags(param_1,local_c), -1 < iVar1)) {
    if ((local_c[0] & 0x180000) == 0) {
      DVar2 = FUN_0040a6a0(&local_50,0x1d52,*(HINSTANCE *)((int)this + 0x20));
      if ((int)DVar2 < 0) {
        uVar4 = local_10;
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004241ec;
        uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar5 = 0x16;
      }
      else {
        DVar2 = FUN_0040a6a0(&local_40,0x1d53,*(HINSTANCE *)((int)this + 0x20));
        if ((int)DVar2 < 0) {
          uVar4 = local_10;
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004241ec;
          uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar5 = 0x17;
        }
        else {
          DVar2 = FUN_0040a6a0(&local_30,0x1d54,*(HINSTANCE *)((int)this + 0x20));
          if ((int)DVar2 < 0) {
            uVar4 = local_10;
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004241ec;
            uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar5 = 0x18;
          }
          else {
            DVar2 = FUN_0040a6a0(&local_20,0x1d55,*(HINSTANCE *)((int)this + 0x20));
            if (-1 < (int)DVar2) {
              local_64 = local_50;
              local_60 = local_40;
              local_5c = local_30;
              local_58 = local_20;
              iVar1 = WerpPromptUser(param_1,*(undefined4 *)((int)this + 0x1c),&local_64,&local_10);
              iVar3 = WerpGetReportFlags(param_1,local_c);
              if (-1 < iVar3) {
                WerpSetReportFlags(param_1,local_c[0] | 0x48000000);
              }
              if (iVar1 < 0) {
                if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                   ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                  FUN_00407519(0x1a,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                               *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
                }
                local_10 = 0;
                uVar4 = local_10;
              }
              else {
                FUN_00427607((HKEY)0x80000001,
                             L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins");
                uVar4 = local_10;
              }
              goto LAB_004241ec;
            }
            uVar4 = local_10;
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004241ec;
            uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar5 = 0x19;
          }
        }
      }
      FUN_00407519(uVar5,&DAT_00405734,uVar6,uVar4);
      uVar4 = local_10;
    }
    else {
      uVar4 = 1;
    }
  }
LAB_004241ec:
  if (local_20 != local_18) {
    FUN_0042a48f(local_20);
  }
  if (local_30 != local_28) {
    FUN_0042a48f(local_30);
  }
  if (local_40 != local_38) {
    FUN_0042a48f(local_40);
  }
  if (local_50 != local_48) {
    FUN_0042a48f(local_50);
  }
  return uVar4;
}



/* Function: FUN_0042424c */

int __thiscall FUN_0042424c(void *this,short *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_0042522c((HKEY)0x80000001,
                       L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins",this,2,
                       &local_8);
  if (iVar1 < 0) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return iVar1;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return iVar1;
    }
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar2 = 0x1b;
  }
  else {
    if ((local_8 == 0) || (iVar1 = FUN_00423fc6(this,param_2), iVar1 == 0)) {
      return 1;
    }
    iVar1 = FUN_004244f4(this,param_1);
    if (iVar1 < 0) {
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return iVar1;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return iVar1;
      }
      uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar2 = 0x1c;
    }
    else {
      iVar1 = FUN_00424324((int)this);
      if (-1 < iVar1) {
        return 0;
      }
      if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
        return iVar1;
      }
      if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
        return iVar1;
      }
      uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar2 = 0x1d;
    }
  }
  FUN_004074f5(uVar2,&DAT_00405734,uVar3,uVar4);
  return iVar1;
}



/* Function: FUN_00424324 */

int __fastcall FUN_00424324(int param_1)

{
  short sVar1;
  char cVar2;
  PHKEY phkResult;
  LSTATUS LVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  DWORD *lpdwDisposition;
  char local_54 [8];
  short *local_4c;
  short *local_20;
  short *local_1c;
  short *local_18;
  short local_14 [4];
  DWORD local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  FUN_00408bbb((undefined2 *)local_54);
  local_1c = local_14;
  local_14[0] = 0;
  lpdwDisposition = &local_c;
  local_18 = local_1c;
  phkResult = (PHKEY)FUN_00408c7e(&local_8);
  LVar3 = RegCreateKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers"
                          ,0,(LPWSTR)0x0,0,3,(LPSECURITY_ATTRIBUTES)0x0,phkResult,lpdwDisposition);
  if (LVar3 == 0) {
    iVar7 = FUN_00408c1b(local_54,1,(short *)&DAT_00402894,*(short **)(param_1 + 4));
    if (iVar7 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004244ba;
      uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar8 = 0x1f;
LAB_004243df:
      FUN_00407519(uVar8,&DAT_00405734,uVar9,uVar10);
      goto LAB_004244ba;
    }
    uVar4 = FUN_00409006(local_54,local_8,0);
    if ((int)uVar4 < 0) {
LAB_0042445c:
      psVar5 = &DAT_004055a8;
    }
    else {
      psVar5 = local_20;
      if (local_54[0] != '\0') {
        psVar5 = local_4c;
      }
      if (psVar5 == (short *)0x0) goto LAB_0042445c;
      cVar2 = FUN_00409553(&local_1c,L"FDR ");
      if (cVar2 == '\0') {
LAB_0042443a:
        iVar7 = -0x7ff8fff2;
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004244ba;
        uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar8 = 0x20;
        goto LAB_004243df;
      }
      if (local_54[0] != '\0') {
        local_20 = local_4c;
      }
      cVar2 = FUN_0040a536(&local_1c,local_20);
      psVar5 = local_1c;
      if (cVar2 == '\0') goto LAB_0042443a;
    }
    psVar6 = psVar5;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    LVar3 = RegSetValueExW(local_8,*(LPCWSTR *)(param_1 + 4),0,1,(BYTE *)psVar5,
                           ((int)psVar6 - (int)(psVar5 + 1) >> 1) * 2 + 2);
    if (LVar3 == 0) {
      iVar7 = 0;
      goto LAB_004244ba;
    }
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar8 = 0x21;
      goto LAB_0042438e;
    }
  }
  else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
          ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar8 = 0x1e;
LAB_0042438e:
    FUN_004074f5(uVar8,&DAT_00405734,uVar9,uVar10);
  }
  iVar7 = -0x7fffbffb;
LAB_004244ba:
  if (local_1c != local_14) {
    FUN_0042a48f(local_1c);
  }
  FUN_00408bf7((int)local_54);
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return iVar7;
}



/* Function: FUN_004244f4 */

int __thiscall FUN_004244f4(void *this,short *param_1)

{
  short sVar1;
  PHKEY phkResult;
  LSTATUS LVar2;
  int extraout_EAX;
  short *psVar3;
  short *psVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  DWORD *lpdwDisposition;
  undefined4 uVar8;
  DWORD local_14;
  LPCWSTR local_10;
  short *local_c;
  HKEY local_8;
  
  psVar4 = (short *)0x0;
  local_8 = (HKEY)0x0;
  local_14 = 0;
  local_10 = (LPCWSTR)0x0;
  local_c = (short *)0x0;
  if (param_1 == (short *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x22,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    iVar5 = -0x7ff8ffa9;
    goto LAB_00424760;
  }
  lpdwDisposition = &local_14;
  phkResult = (PHKEY)FUN_00408c7e(&local_8);
  LVar2 = RegCreateKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\FDR\\CurrentSession"
                          ,0,(LPWSTR)0x0,1,0x60002,(LPSECURITY_ATTRIBUTES)0x0,phkResult,
                          lpdwDisposition);
  if (LVar2 == 0) {
    iVar5 = FUN_004258b1(0x80010002);
    if (((iVar5 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
      FUN_00407519(0x24,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    psVar3 = param_1;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    LVar2 = RegSetValueExW(local_8,L"SessionSettings",0,1,(BYTE *)param_1,
                           ((int)psVar3 - (int)(param_1 + 1) >> 1) * 2 + 2);
    if (LVar2 == 0) {
      LVar2 = RegSetValueExW(local_8,L"AppPath",0,1,*(BYTE **)((int)this + 4),
                             (*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 1) * 2 + 2);
      if (LVar2 == 0) {
        FUN_00424e1b((int *)&local_10,(int *)&local_c);
        psVar4 = local_c;
        if (extraout_EAX < 0) {
          iVar5 = extraout_EAX;
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_004074f5(0x27,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            psVar4 = local_c;
          }
          goto LAB_00424760;
        }
        psVar3 = local_c;
        do {
          sVar1 = *psVar3;
          psVar3 = psVar3 + 1;
        } while (sVar1 != 0);
        LVar2 = RegSetValueExW(local_8,L"LogPath",0,1,(BYTE *)local_c,
                               ((int)psVar3 - (int)(local_c + 1) >> 1) * 2 + 2);
        if (LVar2 == 0) {
          iVar5 = FUN_00425042(local_10);
          if (iVar5 < 0) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              FUN_004074f5(0x29,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            }
          }
          else {
            iVar5 = 0;
          }
          goto LAB_00424760;
        }
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar6 = 0x28;
          goto LAB_00424591;
        }
      }
      else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
              ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar6 = 0x26;
        goto LAB_00424591;
      }
    }
    else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
            ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar6 = 0x25;
      goto LAB_00424591;
    }
  }
  else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
          ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar6 = 0x23;
LAB_00424591:
    FUN_004074f5(uVar6,&DAT_00405734,uVar7,uVar8);
  }
  iVar5 = -0x7fffbffb;
LAB_00424760:
  if (psVar4 != (short *)0x0) {
    o_free(psVar4);
  }
  if (local_10 != (LPCWSTR)0x0) {
    o_free(local_10);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return iVar5;
}



/* Function: FUN_00424798 */

uint FUN_00424798(void *param_1,void *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *local_18;
  undefined2 *local_14;
  undefined2 local_10 [6];
  
  local_18 = local_10;
  local_10[0] = 0;
  local_14 = local_18;
  if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (int *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x2a,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar2 = 0x80070057;
    goto LAB_00424909;
  }
  *param_3 = 0;
  uVar2 = FUN_0040e3ce((HKEY)0x80000001,
                       L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\FDR\\CurrentSession"
                       ,L"AppPath",(short *)0x0,&local_18,'\x01');
  if ((int)uVar2 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424909;
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0x2b;
LAB_00424822:
    FUN_00407519(uVar4,&DAT_00405734,uVar5,uVar6);
  }
  else {
    cVar1 = FUN_004094c0(param_2,local_18,(int)local_14 - (int)local_18 >> 1);
    if (cVar1 != '\0') {
      uVar2 = FUN_0040e3ce((HKEY)0x80000001,
                           L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\FDR\\CurrentSession"
                           ,L"SessionSettings",(short *)0x0,&local_18,'\0');
      if ((int)uVar2 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424909;
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x2c;
        goto LAB_00424822;
      }
      cVar1 = FUN_004094c0(param_1,local_18,(int)local_14 - (int)local_18 >> 1);
      if (cVar1 != '\0') {
        iVar3 = FUN_0040e328(0x80000001,
                             L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\FDR\\CurrentSession"
                             ,L"ProcID",0,(undefined1 *)0x0);
        uVar2 = 0;
        *param_3 = iVar3;
        if (iVar3 == 0) {
          uVar2 = 0x80004005;
        }
        goto LAB_00424909;
      }
    }
    uVar2 = 0x8007000e;
  }
LAB_00424909:
  if (local_18 != local_10) {
    FUN_0042a48f(local_18);
  }
  return uVar2;
}



/* Function: FUN_0042492f */

uint FUN_0042492f(void *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_40 [8];
  wchar_t *local_38;
  wchar_t *local_c;
  
  FUN_00408bbb((undefined2 *)local_40);
  uVar3 = FUN_00408c1b(local_40,1,
                       L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\FDR\\CurrentSession"
                       ,L"LogPath");
  if ((int)uVar3 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424a2e;
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar5 = 0x2d;
  }
  else {
    uVar3 = FUN_00409006(local_40,(HKEY)0x80000001,0);
    if (-1 < (int)uVar3) {
      pwVar4 = local_c;
      if (local_40[0] != '\0') {
        pwVar4 = local_38;
      }
      bVar1 = FUN_00426f0e(pwVar4);
      if (bVar1) {
        if (local_40[0] != '\0') {
          local_c = local_38;
        }
        cVar2 = FUN_00409553(param_1,local_c);
        uVar3 = 0x8007000e;
        if (cVar2 != '\0') {
          uVar3 = 0;
        }
      }
      else {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          if (local_40[0] != '\0') {
            local_c = local_38;
          }
          FUN_0040975c(0x2f,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),local_c);
        }
        uVar3 = 0x80070002;
      }
      goto LAB_00424a2e;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424a2e;
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar5 = 0x2e;
  }
  FUN_00407519(uVar5,&DAT_00405734,uVar6,uVar7);
LAB_00424a2e:
  FUN_00408bf7((int)local_40);
  return uVar3;
}



/* Function: FUN_00424a43 */

uint FUN_00424a43(HREPORT param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  WCHAR *local_18;
  WCHAR *local_14;
  WCHAR local_10 [6];
  
  local_18 = local_10;
  local_10[0] = L'\0';
  local_14 = local_18;
  if (param_1 == (HREPORT)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x30,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar1 = 0x80070057;
    goto LAB_00424b00;
  }
  uVar1 = FUN_0042492f(&local_18);
  if ((int)uVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424b00;
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar2 = 0x31;
  }
  else {
    uVar1 = WerReportAddFile(param_1,local_18,WerFileTypeOther,1);
    if (-1 < (int)uVar1) {
      uVar1 = 0;
      goto LAB_00424b00;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424b00;
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar2 = 0x32;
  }
  FUN_004074f5(uVar2,&DAT_00405734,uVar3,uVar4);
LAB_00424b00:
  if (local_18 != local_10) {
    FUN_0042a48f(local_18);
  }
  return uVar1;
}



/* Function: FUN_00424b21 */

uint FUN_00424b21(void)

{
  short sVar1;
  PHKEY phkResult;
  uint uVar2;
  short *psVar3;
  LSTATUS LVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char local_58 [8];
  short *local_50;
  short *local_24;
  undefined2 *local_20;
  undefined2 *local_1c;
  undefined2 local_18 [4];
  int local_10;
  short *local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  FUN_00408bbb((undefined2 *)local_58);
  local_20 = local_18;
  psVar5 = (short *)0x0;
  local_c = (short *)0x0;
  local_18[0] = 0;
  local_1c = local_20;
  phkResult = (PHKEY)FUN_00408c7e(&local_8);
  uVar2 = RegOpenKeyExW((HKEY)0x80000001,
                        L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers",0
                        ,0xf003f,phkResult);
  if (uVar2 == 0) {
    uVar6 = FUN_00408c1b(local_58,1,(short *)&DAT_00402894,*(short **)(local_10 + 4));
    if ((int)uVar6 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar7 = 0x35;
LAB_00424c04:
        FUN_00407519(uVar7,&DAT_00405734,uVar8,uVar9);
      }
    }
    else {
      uVar6 = FUN_00409006(local_58,local_8,0);
      if (-1 < (int)uVar6) {
        psVar3 = local_24;
        if (local_58[0] != '\0') {
          psVar3 = local_50;
        }
        if (psVar3 != (short *)0x0) {
          if (local_58[0] != '\0') {
            local_24 = local_50;
          }
          uVar6 = FUN_004238ba(local_24,local_24,local_24,(int *)&local_c);
          psVar5 = local_c;
          if ((int)uVar6 < 0) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              FUN_00407519(0x37,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              psVar5 = local_c;
            }
            goto LAB_00424d10;
          }
          if ((local_c == (short *)0x0) || (*local_c == 0)) {
            RegDeleteValueW(local_8,*(LPCWSTR *)(local_10 + 4));
          }
          else {
            psVar3 = local_c;
            do {
              sVar1 = *psVar3;
              psVar3 = psVar3 + 1;
            } while (sVar1 != 0);
            LVar4 = RegSetValueExW(local_8,*(LPCWSTR *)(local_10 + 4),0,1,(BYTE *)local_c,
                                   ((int)psVar3 - (int)(local_c + 1) >> 1) * 2 + 2);
            if (LVar4 != 0) {
              if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                 ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
                FUN_00407519(0x38,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                             *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
              }
              uVar6 = 0x80004005;
              goto LAB_00424d10;
            }
          }
        }
LAB_00424d30:
        uVar6 = 0;
        goto LAB_00424d34;
      }
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar7 = 0x36;
        goto LAB_00424c04;
      }
    }
  }
  else {
    if (uVar2 == 2) goto LAB_00424d30;
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x34,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar6 = uVar2 & 0xffff | 0x80070000;
    if ((int)uVar2 < 1) {
      uVar6 = uVar2;
    }
    if (-1 < (int)uVar6) {
      uVar6 = 0x80004005;
    }
  }
LAB_00424d10:
  if (local_8 != (HKEY)0x0) {
    RegDeleteValueW(local_8,*(LPCWSTR *)(local_10 + 4));
  }
LAB_00424d34:
  if (local_20 != local_18) {
    FUN_0042a48f(local_20);
  }
  if (psVar5 != (short *)0x0) {
    o_free(psVar5);
  }
  FUN_00408bf7((int)local_58);
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return uVar6;
}



/* Function: FUN_00424d7a */

undefined4 FUN_00424d7a(void)

{
  uint uVar1;
  LSTATUS LVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00424b21();
  if ((((int)uVar1 < 0) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
     ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
    FUN_004074f5(0x39,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  LVar2 = RegDeleteKeyW((HKEY)0x80000001,
                        L"Software\\Microsoft\\Windows\\Windows Error Reporting\\Plugins\\FDR\\CurrentSession"
                       );
  if ((LVar2 == 0) || (LVar2 == 2)) {
    uVar3 = 0;
  }
  else {
    if ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) {
      if ((PTR_LOOP_0042d098[0x1c] & 1) != 0) {
        FUN_004074f5(0x33,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x3a,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    uVar3 = 0x80004005;
  }
  return uVar3;
}



/* Function: FUN_00424e1b */

int FUN_00424e1b(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8;
  
  if ((param_2 == (int *)0x0) || (param_1 == (int *)0x0)) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return unaff_EDI;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return unaff_EDI;
    }
    FUN_004074f5(0x3b,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    return unaff_EDI;
  }
  FUN_0041f228(&local_8,0x104);
  iVar1 = local_8;
  if (local_8 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424ffc;
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0x3c;
LAB_00424e68:
    FUN_004074f5(uVar4,&DAT_00405734,uVar5,uVar6);
  }
  else {
    iVar2 = SHGetFolderPathW(0,0x1c,0,0,local_8);
    if (iVar2 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424ffc;
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar4 = 0x3d;
    }
    else {
      piVar3 = FUN_0041f228(&local_8,0x104);
      FUN_0041f1e8(param_2,piVar3);
      if (local_8 != 0) {
        o_free(local_8);
      }
      if (*param_2 == 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424ffc;
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x3e;
        goto LAB_00424e68;
      }
      GetCurrentThreadId();
      GetTickCount();
      iVar2 = FUN_004095e6((undefined2 *)*param_2,0x104,L"%s\\%s\\%u-%u.etl");
      if (iVar2 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424ffc;
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x3f;
      }
      else {
        piVar3 = FUN_0041f228(&local_8,0x104);
        FUN_0041f1e8(param_1,piVar3);
        if (local_8 != 0) {
          o_free(local_8);
        }
        if (*param_1 == 0) {
          if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
             ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424ffc;
          uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar4 = 0x40;
          goto LAB_00424e68;
        }
        iVar2 = FUN_004095e6((undefined2 *)*param_1,0x104,L"%s\\%s");
        if (((-1 < iVar2) || ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00424ffc;
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x41;
      }
    }
    FUN_004074f5(uVar4,&DAT_00405734,uVar5,uVar6);
  }
LAB_00424ffc:
  if (iVar1 != 0) {
    o_free(iVar1);
  }
  return unaff_EDI;
}



/* Function: FUN_00425042 */

undefined4 FUN_00425042(LPCWSTR param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (LPCWSTR)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x42,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = 0;
    iVar2 = SHCreateDirectoryExW((HWND)0x0,param_1,(SECURITY_ATTRIBUTES *)0x0);
    if ((iVar2 != 0) && (iVar2 != 0xb7)) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x43,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      uVar1 = 0x80004005;
    }
  }
  return uVar1;
}



/* Function: FUN_004250c9 */

int FUN_004250c9(void)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE hEvent;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPCWSTR local_8;
  
  hEvent = (HANDLE)0x0;
  FUN_0041f228(&local_8,0x104);
  if (local_8 == (LPCWSTR)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x44,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    iVar3 = -0x7ff8fff2;
    goto LAB_00425205;
  }
  iVar3 = FUN_004095e6(local_8,0x104,L"%s-%d");
  if (iVar3 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x45,&DAT_00405734,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_00425205;
  }
  hEvent = OpenEventW(0x100002,0,local_8);
  if ((int)hEvent + 1U < 2) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar4 = 0x46;
LAB_0042519f:
      FUN_004074f5(uVar4,&DAT_00405734,uVar5,uVar6);
    }
  }
  else {
    BVar1 = SetEvent(hEvent);
    if (BVar1 == 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x47;
        goto LAB_0042519f;
      }
    }
    else {
      DVar2 = WaitForSingleObject(hEvent,5000);
      if (DVar2 != 0xffffffff) {
        iVar3 = 0;
        goto LAB_00425205;
      }
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar4 = 0x48;
        goto LAB_0042519f;
      }
    }
  }
  iVar3 = -0x7fffbffb;
LAB_00425205:
  if (local_8 != (LPCWSTR)0x0) {
    o_free(local_8);
  }
  if (1 < (int)hEvent + 1U) {
    CloseHandle(hEvent);
  }
  return iVar3;
}



/* Function: FUN_0042522c */

undefined4 __fastcall
FUN_0042522c(HKEY param_1,LPCWSTR param_2,undefined4 param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_18;
  char local_9 [5];
  
  if (((param_2 != (LPCWSTR)0x0) || (param_1 != (HKEY)0x0)) && (param_5 != (undefined4 *)0x0)) {
    *param_5 = 0;
    local_9[0] = '\0';
    local_18 = 0;
    iVar1 = FUN_00427744(param_1,param_2,param_1,&local_18,(int)local_9);
    if (-1 < iVar1) {
      if (local_9[0] != '\0') {
        uVar2 = __aulldiv((uint)local_18,local_18._4_4_,0xe10,0);
        if ((uint)((uVar2 & 0xffffffff) / 0x18) <= param_4) {
          return 0;
        }
      }
      *param_5 = 1;
    }
    return 0;
  }
  if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_004074f5(10,&DAT_0040574c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
  return 0x80070057;
}



/* Function: FUN_004252c8 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __fastcall FUN_004252c8(int param_1,uint param_2,int *param_3,uint param_4,short *param_5)

{
  uint uVar1;
  short *psVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  short *local_40;
  short *local_3c;
  short local_38 [4];
  undefined2 *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  iVar7 = 0;
  local_2c = 0;
  local_40 = local_38;
  local_38[0] = 0;
  local_8 = 1;
  local_3c = local_40;
  local_20 = param_1;
  local_1c = param_2;
  if ((((param_5 == (short *)0x0) || (param_2 != param_4)) || (param_1 == 0)) ||
     (param_3 == (int *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xb,&DAT_0040574c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    iVar8 = -0x7ff8ffa9;
  }
  else {
    piVar4 = (int *)FUN_004259f6(local_18,param_2);
    iVar7 = *piVar4;
    *piVar4 = 0;
    local_2c = iVar7;
    if (local_18[0] != (int *)0x0) {
      o_free(local_18[0]);
    }
    if (iVar7 == 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0xc,&DAT_0040574c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      iVar8 = -0x7ff8fff2;
    }
    else {
      local_24 = 0;
      if (param_2 != 0) {
        piVar4 = param_3 + 1;
        local_18[0] = (int *)(local_20 + 4);
        do {
          local_18[0][-1] = *piVar4;
          local_18[0][0x87] = piVar4[1];
          if (piVar4[-1] == 0) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              FUN_004074f5(0xd,&DAT_0040574c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            }
            iVar8 = -0x7fff0001;
            goto LAB_0042567f;
          }
          iVar8 = FUN_0040a406((short *)local_18[0],0x104,piVar4[-1]);
          if (iVar8 < 0) {
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042567f;
            uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar9 = 0xe;
            goto LAB_00425562;
          }
          if (*piVar4 == 1) {
            if ((piVar4[4] != 0) &&
               (cVar3 = FUN_00409553(local_18[0] + 0x82,(short *)piVar4[4]), cVar3 == '\0')) {
              iVar8 = -0x7ff8fff2;
              if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                 ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042567f;
              uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar9 = 0xf;
              goto LAB_00425562;
            }
          }
          else if (*piVar4 == 4) {
            local_18[0][0x86] = piVar4[3];
          }
          local_18[0] = local_18[0] + 0x89;
          local_24 = local_24 + 1;
          piVar4 = piVar4 + 6;
        } while (local_24 < local_1c);
        pcVar5 = (char *)(iVar7 + 8);
        local_24 = 0;
        local_28 = local_20 + 0x21c;
        local_18[0] = param_3;
        do {
          local_30 = (undefined2 *)(local_28 - 0x218);
          iVar8 = FUN_004095e6(local_30,0x104,&DAT_00405744);
          if (iVar8 < 0) {
            if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
               ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042567f;
            uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
            uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
            uVar9 = 0x10;
            goto LAB_00425562;
          }
          *(undefined2 **)(pcVar5 + -8) = local_30;
          if (*(int *)(local_28 - 0x21c) == 1) {
            *(uint *)(pcVar5 + -4) = local_28 - 0x10;
            if (*pcVar5 != '\x02') {
              *pcVar5 = '\x02';
            }
          }
          else if ((*(int *)(local_28 - 0x21c) == 4) &&
                  (*(uint *)(pcVar5 + -4) = local_28, *pcVar5 != '\0')) {
            *pcVar5 = '\0';
          }
          local_28 = local_28 + 0x224;
          local_24 = local_24 + 1;
          local_18[0] = local_18[0] + 6;
          pcVar5 = pcVar5 + 0x10;
          param_2 = local_1c;
        } while (local_24 < local_1c);
      }
      cVar3 = FUN_00409553(&local_40,param_5);
      psVar2 = local_40;
      if (cVar3 == '\0') {
        iVar8 = -0x7ff8fff2;
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar9 = 0x11;
LAB_00425562:
          FUN_00407519(uVar9,&DAT_0040574c,uVar10,uVar11);
        }
      }
      else {
        for (; psVar2 != local_3c; psVar2 = psVar2 + 1) {
          if (*psVar2 == 0x3b) {
            *psVar2 = 10;
          }
        }
        FUN_00427d28(local_40,(int)local_3c - (int)local_40 >> 1,iVar7,param_2);
        local_28 = 0;
        if (param_2 != 0) {
          puVar6 = (uint *)(local_20 + 0x21c);
          do {
            iVar8 = FUN_0040a406((short *)(puVar6 + -0x86),0x104,*param_3);
            if (iVar8 < 0) {
              if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                 ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042567f;
              uVar11 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar10 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar9 = 0x12;
              goto LAB_00425562;
            }
            if (((puVar6[-0x87] == 4) && (uVar1 = param_3[3], uVar1 != 0)) && (uVar1 < *puVar6)) {
              *puVar6 = uVar1;
            }
            param_3 = param_3 + 6;
            local_28 = local_28 + 1;
            puVar6 = puVar6 + 0x89;
          } while (local_28 < local_1c);
        }
        iVar8 = 0;
      }
    }
  }
LAB_0042567f:
  if (local_40 != local_38) {
    FUN_0042a48f(local_40);
  }
  if (iVar7 != 0) {
    o_free(iVar7);
  }
  return iVar8;
}



/* Function: FUN_004256ae */

DWORD __fastcall FUN_004256ae(int param_1,uint param_2,HKEY param_3,LPCWSTR param_4)

{
  PHKEY phkResult;
  LSTATUS LVar1;
  DWORD DVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  LPDWORD lpdwDisposition;
  undefined4 uVar8;
  uint local_10;
  HKEY local_c [2];
  
  uVar5 = 0;
  local_c[0] = (HKEY)0x0;
  if ((param_1 == 0) || (param_3 == (HKEY)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x13,&DAT_0040574c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar5 = 0x80070057;
  }
  else {
    if (param_4 != (LPCWSTR)0x0) {
      lpdwDisposition = (LPDWORD)0x0;
      phkResult = (PHKEY)FUN_00408c7e(local_c);
      LVar1 = RegCreateKeyExW(param_3,param_4,0,(LPWSTR)0x0,0,2,(LPSECURITY_ATTRIBUTES)0x0,phkResult
                              ,lpdwDisposition);
      if ((LVar1 != 0) || (param_3 = local_c[0], local_c[0] == (HKEY)0x0)) {
        DVar2 = GetLastError();
        uVar5 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar5 = DVar2;
        }
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_00407519(0x14,&DAT_0040574c,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        goto LAB_00425891;
      }
    }
    local_10 = 0;
    if (param_2 != 0) {
      piVar4 = (int *)(param_1 + 0x220);
      do {
        if (*piVar4 != 0) {
          if (piVar4[-0x88] == 1) {
            if (piVar4[-5] != piVar4[-4]) {
              uVar3 = piVar4[-4] - piVar4[-5] >> 1;
              if (uVar3 < 0x7fffffff) {
                LVar1 = RegSetValueExW(param_3,(LPCWSTR)(piVar4 + -0x87),0,1,(BYTE *)piVar4[-5],
                                       uVar3 * 2 + 2);
                if (LVar1 == 0) goto LAB_00425805;
                uVar5 = 0x80004005;
                if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                   ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) break;
                uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar6 = 0x17;
              }
              else {
                uVar5 = 0x80070216;
                if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
                   ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) break;
                uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
                uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
                uVar6 = 0x16;
              }
LAB_0042585a:
              FUN_004074f5(uVar6,&DAT_0040574c,uVar7,uVar8);
              break;
            }
          }
          else if ((piVar4[-0x88] == 4) &&
                  (LVar1 = RegSetValueExW(param_3,(LPCWSTR)(piVar4 + -0x87),0,4,
                                          (BYTE *)(piVar4 + -1),4), LVar1 != 0)) {
            uVar5 = 0x80004005;
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
              uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
              uVar6 = 0x15;
              goto LAB_0042585a;
            }
            break;
          }
        }
LAB_00425805:
        local_10 = local_10 + 1;
        piVar4 = piVar4 + 0x89;
      } while (local_10 < param_2);
    }
  }
LAB_00425891:
  if (local_c[0] != (HKEY)0x0) {
    RegCloseKey(local_c[0]);
  }
  return uVar5;
}



/* Function: FUN_004258b1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004258b1(DWORD param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  PSECURITY_DESCRIPTOR pSecurityDescriptor;
  undefined4 *puVar4;
  undefined4 local_a4 [8];
  _EXPLICIT_ACCESS_W local_84;
  HKEY local_64;
  DWORD local_60;
  PSECURITY_DESCRIPTOR local_5c;
  WCHAR local_58 [38];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_60 = 0x44;
  pSecurityDescriptor = (PSECURITY_DESCRIPTOR)0x0;
  local_5c = (HLOCAL)0x0;
  BVar1 = CreateWellKnownSid(WinLocalLogonSid|WinCreatorGroupSid,(PSID)0x0,local_58,&local_60);
  if (BVar1 == 0) {
    GetLastError();
  }
  else {
    local_84.grfAccessMode = GRANT_ACCESS;
    puVar4 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_84.grfAccessPermissions = param_1;
    local_84.Trustee.ptstrName = local_58;
    local_84.grfInheritance = 3;
    local_84.Trustee.pMultipleTrustee = _DAT_00405bb0;
    local_84.Trustee.MultipleTrusteeOperation = _UNK_00405bb4;
    local_84.Trustee.TrusteeForm = _UNK_00405bb8;
    local_84.Trustee.TrusteeType = _UNK_00405bbc;
    iVar3 = RegGetKeySecurity(local_64,4,(PSECURITY_DESCRIPTOR)0x0,&local_60);
    if (iVar3 == 0x7a) {
      pSecurityDescriptor = (PSECURITY_DESCRIPTOR)FUN_0042a8fe(local_60);
      if (pSecurityDescriptor == (PSECURITY_DESCRIPTOR)0x0) goto LAB_004259c3;
      iVar3 = RegGetKeySecurity(local_64,4,pSecurityDescriptor,&local_60);
    }
    if (iVar3 == 0) {
      if (local_5c != (HLOCAL)0x0) {
        LocalFree(local_5c);
      }
      DVar2 = BuildSecurityDescriptorW
                        ((PTRUSTEE_W)0x0,(PTRUSTEE_W)0x0,1,&local_84,0,(PEXPLICIT_ACCESS_W)0x0,
                         pSecurityDescriptor,&local_60,&local_5c);
      if (DVar2 == 0) {
        RegSetKeySecurity(local_64,4,local_5c);
      }
    }
  }
LAB_004259c3:
  if (local_5c != (HLOCAL)0x0) {
    LocalFree(local_5c);
  }
  if (pSecurityDescriptor != (PSECURITY_DESCRIPTOR)0x0) {
    o_free(pSecurityDescriptor);
  }
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004259f6 */

void __fastcall FUN_004259f6(undefined4 *param_1,uint param_2)

{
  void *_Dst;
  uint _Size;
  void *pvVar1;
  
  _Size = -(uint)((int)((ulonglong)param_2 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x10)
  ;
  _Dst = (void *)FUN_0042a8fe(_Size);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,_Size);
    pvVar1 = _Dst;
    if (param_2 != 0) {
      do {
        FUN_00425a5d((int)pvVar1);
        pvVar1 = (void *)((int)pvVar1 + 0x10);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  *param_1 = _Dst;
  return;
}



/* Function: FUN_00425a5d */

int __fastcall FUN_00425a5d(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



/* Function: FUN_00425a6e */

void __fastcall FUN_00425a6e(undefined4 param_1)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [8];
  
  local_24 = 0x18;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_1c = &DAT_0042d350;
  NtCreateFile(param_1,0x120089,&local_24,local_c,0,0x80,1,1,0x4c,0,0);
  return;
}



/* Function: FUN_00425abc */

void __fastcall
FUN_00425abc(ushort *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined1 local_44 [8];
  undefined4 *local_3c;
  undefined4 local_38;
  ushort *local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined1 local_24 [28];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  iVar3 = *param_1 + 0x30;
  local_2c = 0;
  local_28 = (undefined4 *)0x0;
  local_34 = param_1;
  iVar2 = FUN_00425a6e(&local_2c);
  if (-1 < iVar2) {
    if (param_2 != (ushort *)0x0) {
      iVar3 = iVar3 + (uint)*param_2;
    }
    local_30 = iVar3;
    iVar2 = NtAllocateVirtualMemory(0xffffffff,&local_28,0,&local_30,0x3000,4);
    puVar1 = local_34;
    if (iVar2 < 0) {
      NtClose(local_2c);
    }
    else {
      *local_28 = 1;
      local_28[1] = 0;
      local_28[2] = 4;
      local_28[4] = param_5;
      local_28[5] = param_6;
      local_28[6] = param_3;
      local_28[7] = param_4;
      *(ushort *)(local_28 + 8) = *local_34;
      memcpy(local_28 + 9,*(void **)(local_34 + 2),(uint)*local_34);
      if (param_2 == (ushort *)0x0) {
        *(undefined2 *)((int)local_28 + 0x22) = 0;
      }
      else {
        *(ushort *)((int)local_28 + 0x22) = *param_2;
        memcpy((void *)((int)local_28 + *puVar1 + 0x24),*(void **)(param_2 + 2),(uint)*param_2);
      }
      NtDeviceIoControlFile(local_2c,0,0,0,local_44,0x220004,local_28,iVar3,local_24,0x18);
      local_3c = local_28;
      local_38 = 0;
      NtFreeVirtualMemory(0xffffffff,&local_3c,&local_38,0x8000);
      NtClose(local_2c);
    }
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00425c20 */

void __thiscall FUN_00425c20(void *this,undefined4 *param_1)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  ushort *puVar4;
  
  psVar2 = (short *)((uint)*(ushort *)((int)this + 0x48) + (int)this);
  puVar4 = (ushort *)(psVar2 + 2);
  for (uVar3 = (uint)(ushort)psVar2[1]; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar4 = puVar4 + (uint)*puVar4 * 2;
  }
  psVar2[1] = psVar2[1] + 1;
  *psVar2 = *psVar2 + 9;
  *puVar4 = 9;
  puVar4[1] = 1;
  for (iVar1 = 8; puVar4 = puVar4 + 2, iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)puVar4 = *param_1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: FUN_00425c73 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00425c73(int param_1)

{
  LSTATUS LVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  DWORD local_10 [2];
  HKEY local_8;
  
  LVar1 = RegCreateKeyExW((HKEY)0x80000002,
                          L"SYSTEM\\CurrentControlSet\\Control\\WMI\\Autologger\\Microsoft-OCA-IPT",
                          0,(LPWSTR)0x0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,local_10);
  if (LVar1 != 0) {
    return;
  }
  if (local_10[0] == 2) {
    RegCloseKey(local_8);
    return;
  }
  LVar1 = RegSetKeyValueW(local_8,(LPCWSTR)0x0,L"BufferSize",4,(LPCVOID)(param_1 + 0x30),4);
  if ((((LVar1 == 0) &&
       (LVar1 = RegSetKeyValueW(local_8,(LPCWSTR)0x0,L"Guid",1,
                                L"{C712AF3D-ED1E-46A9-B843-E9014D29CAEE}",0x4e), LVar1 == 0)) &&
      (LVar1 = RegSetKeyValueW(local_8,(LPCWSTR)0x0,L"LogFileMode",4,(LPCVOID)(param_1 + 0x40),4),
      LVar1 == 0)) &&
     (LVar1 = RegSetKeyValueW(local_8,(LPCWSTR)0x0,L"MinimumBuffers",4,(LPCVOID)(param_1 + 0x34),4),
     LVar1 == 0)) {
    if (*(int *)(param_1 + 0x48) < 0) {
      puVar2 = (ushort *)(param_1 + 4 + (uint)*(ushort *)(param_1 + 0x48));
      uVar3 = 0;
      uVar4 = (uint)*(ushort *)(*(ushort *)(param_1 + 0x48) + 2 + param_1);
      if (uVar4 != 0) {
        do {
          if (puVar2[1] == 1) break;
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + (uint)*puVar2 * 2;
        } while (uVar3 < uVar4);
      }
      puVar2 = puVar2 + 2;
      if (uVar4 <= uVar3) goto LAB_00425d70;
    }
    else {
LAB_00425d70:
      puVar2 = (ushort *)0x0;
    }
    LVar1 = RegSetKeyValueW(local_8,(LPCWSTR)0x0,L"EnableKernelFlags",3,puVar2,0x20);
    if (LVar1 == 0) {
      local_10[1] = 0;
      LVar1 = RegSetKeyValueW(local_8,(LPCWSTR)0x0,L"Status",4,local_10 + 1,4);
      if (LVar1 == 0) {
        local_10[1] = 1;
        LVar1 = RegSetKeyValueW(local_8,(LPCWSTR)0x0,L"Start",4,local_10 + 1,4);
        if (LVar1 == 0) goto LAB_00425dcd;
      }
    }
  }
  RegDeleteKeyA(local_8,(LPCSTR)0x0);
LAB_00425dcd:
  RegCloseKey(local_8);
  return;
}



/* Function: FUN_00425de1 */

void __fastcall FUN_00425de1(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined8 local_f4;
  undefined4 local_ec [11];
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_7c;
  undefined1 local_74 [64];
  undefined2 local_34;
  undefined2 local_32;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_f4 = 0;
  hModule = LoadLibraryExW(L"api-ms-win-eventing-controller-l1-1-0.dll",(HANDLE)0x0,0x800);
  if ((hModule != (HMODULE)0x0) &&
     (pFVar1 = GetProcAddress(hModule,"StartTraceW"), pFVar1 != (FARPROC)0x0)) {
    memset(local_ec,0,0xe0);
    local_ec[0] = 0xe0;
    local_c0 = 0x20000;
    local_7c = 0x78;
    o_wcscpy_s(local_74,0x20,L"Microsoft-OCA-IPT");
    local_b8 = 1;
    local_ac = 0x82000400;
    local_bc = ((uint)(1 << ((byte)((uint)param_3 >> 0x10) & 0xf) + 0xc) >> 7) + 0x3ff >> 10;
    local_a4 = 0x80ff00b8;
    local_32 = 0;
    local_34 = 1;
    FUN_00425c20(local_ec,param_2);
    if (1 < param_1) {
      FUN_00425c73((int)local_ec);
    }
    (*(code *)PTR_guard_check_icall_0042e4b0)(&local_f4,local_74,local_ec);
    (*pFVar1)();
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00425f28 */

void __fastcall
FUN_00425f28(uint param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [28];
  uint local_c;
  
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_2c = 0;
  local_30 = param_2;
  iVar1 = FUN_00425a6e(&local_2c);
  if (-1 < iVar1) {
    local_4c = param_5;
    local_44 = local_30;
    local_60 = 1;
    local_5c = 0;
    local_58 = 3;
    local_50 = param_4;
    local_48 = param_1;
    iVar1 = NtDeviceIoControlFile(local_2c,0,0,0,local_68,0x220004,&local_60,0x30,local_28,0x18);
    NtClose(local_2c);
    if (-1 < iVar1) {
      FUN_00425de1(param_1,param_3,param_4);
    }
  }
  FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00425fd3 */

void FUN_00425fd3(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_00405964,DelayLoadFailureHook_exref,param_2,DAT_00405964);
  return;
}



/* Function: FUN_00426005 */

void FUN_00426005(undefined4 param_1,undefined4 param_2)

{
  EtwTraceMessage(param_1,param_2,0x2b,&LAB_00405a60,0x3a,&stack0x0000000c,4,&stack0x00000010,4,
                  &stack0x00000014,4,0);
  return;
}



/* Function: FUN_00426040 */

void FUN_00426040(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

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
  EtwTraceMessage(param_1,param_2,0x2b,&LAB_00405a60,0x30,pwVar2,iVar3,&stack0x00000010,4,
                  &stack0x00000014,4,0);
  return;
}



/* Function: FUN_004260b0 */

void __thiscall FUN_004260b0(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_00426120(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00426219(this,param_2);
    }
  }
  return;
}



/* Function: FUN_004260ed */

void __fastcall FUN_004260ed(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_004012a4;
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



/* Function: FUN_00426120 */

void __thiscall FUN_00426120(void *this,undefined4 *param_1)

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
    uVar1 = FUN_004069f2(this_00,0,0x2000);
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
      FUN_00406c13((int)this_00,&DAT_00406333,0x1000000,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00426219 */

void __thiscall FUN_00426219(void *this,undefined4 *param_1)

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
    FUN_00406dce((int)*(uint **)((int)this + 4),&DAT_004061fd,param_1,param_1,&local_4c,&local_48,
                 &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                 &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
  }
  return;
}



/* Function: FUN_00426310 */

undefined4 __thiscall FUN_00426310(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_0042d710 != iVar1;
  iVar3 = DAT_0042d710;
  DAT_0042d710 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_0042e4b0)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00426350 */

undefined4 * __thiscall FUN_00426350(void *this,byte param_1)

{
  FUN_004260ed((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0042637a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0042637a(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0042ddcc,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_0042ddcc;
    local_8 = &DAT_0042ddd0;
    _DAT_0042ddd4 = 0;
    DAT_0042ddd8 = 0;
    _DAT_0042dddc = 0;
    _DAT_0042ddd0 = &PTR_FUN_00401294;
    _DAT_0042dde0 = &DAT_0042d358;
    FUN_0042997b(FUN_00426400);
    local_10 = 0;
    FUN_004279f7((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00426400 */

void FUN_00426400(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0042ddcc,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0042e4b0)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00426448 */

void __fastcall FUN_00426448(int *param_1)

{
  PREGHANDLE RegHandle;
  PVOID CallbackContext;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
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
  UVar3 = EventRegister(&local_18,FUN_00406b90,CallbackContext,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)CallbackContext + 0x1c),2,
                        *(undefined2 **)((int)CallbackContext + 4),
                        **(undefined2 **)((int)CallbackContext + 4));
  }
  param_1[3] = 1;
  pcVar2 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_0042e4b0)();
  (*pcVar2)();
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004264f0 */

undefined4 * __thiscall FUN_004264f0(void *this,byte param_1)

{
  FUN_004260ed((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0042a48f(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00426520 */

void FUN_00426520(uint param_1,ushort *param_2,undefined4 *param_3,int param_4,uint *param_5,
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
  
  puVar2 = FUN_0042637a();
  if ((*(int **)(puVar2 + 4) != (int *)0x0) && (**(int **)(puVar2 + 4) != 0)) {
    if (param_5 == (uint *)0x0) {
      if (param_6 == (uint *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          puVar2 = FUN_0042637a();
          puVar1 = *(uint **)(puVar2 + 4);
          if (2 < *puVar1) {
            uVar3 = FUN_004069f2(puVar1,1,0);
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
              FUN_0040713e((int)puVar1,&DAT_00405f6c,param_2,param_2,local_c,&local_10,&local_44,
                           &local_48,&local_14,&local_18,&local_4e,&local_1c,&local_20,&local_24,
                           &local_4c,&local_28,&local_2c,&local_30,&local_40,&local_3c,&local_38,
                           &local_34);
            }
          }
        }
      }
      else {
        puVar2 = FUN_0042637a();
        puVar1 = *(uint **)(puVar2 + 4);
        if (5 < *puVar1) {
          uVar3 = FUN_004069f2(puVar1,4,0);
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
            FUN_00407076((int)puVar1,&DAT_0040608c,param_2,param_2,&local_34,&local_40,&local_44,
                         &local_48,&local_4c,&local_3c,&local_4e,&local_38);
          }
        }
      }
    }
    else {
      puVar2 = FUN_0042637a();
      if (5 < **(uint **)(puVar2 + 4)) {
        uVar3 = FUN_004069f2(*(uint **)(puVar2 + 4),2,0);
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
          FUN_00406fc1(extraout_ECX,&DAT_0040618c,extraout_ECX,extraout_ECX,&local_38,&local_3c,
                       &local_48,&local_4c,&local_4e,&local_40,&local_44);
        }
      }
      if (((param_2 != (ushort *)0x0) && ((char)param_2[2] == '\x01')) && (param_4 != 0)) {
        puVar2 = FUN_0042637a();
        if (5 < **(uint **)(puVar2 + 4)) {
          uVar3 = FUN_004069f2(*(uint **)(puVar2 + 4),10,0);
          if ((char)uVar3 != '\0') {
            local_38 = param_8;
            local_3c = *param_5;
            local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
            local_40 = (uint)param_2[1];
            local_44 = (uint)*param_2;
            local_4c = param_1;
            local_4e = CONCAT11(local_4e._1_1_,1);
            FUN_00406fc1(extraout_ECX_00,&DAT_00406114,extraout_ECX_00,extraout_ECX_00,&local_4c,
                         &local_44,&local_40,&local_48,&local_4e,&local_3c,&local_38);
          }
        }
      }
    }
  }
  return;
}



/* Function: FUN_0042689b */

void FUN_0042689b(void)

{
  BOOL BVar1;
  PSID local_24;
  PSID *local_20;
  BOOL local_18;
  PSID local_14;
  _SID_IDENTIFIER_AUTHORITY local_10;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_10.Value[4] = '\0';
  local_10.Value[5] = '\x05';
  local_20 = &local_14;
  local_10.Value[0] = '\0';
  local_10.Value[1] = '\0';
  local_10.Value[2] = '\0';
  local_10.Value[3] = '\0';
  local_24 = (PSID)0x0;
  local_14 = (PSID)0x0;
  BVar1 = AllocateAndInitializeSid(&local_10,'\x02',0x5a,0,0,0,0,0,0,0,&local_24);
  FUN_004279d8((int *)&local_24);
  if ((BVar1 == 0) || (BVar1 = CheckTokenMembership((HANDLE)0x0,local_14,&local_18), BVar1 == 0)) {
    GetLastError();
  }
  if (local_14 != (PSID)0x0) {
    FreeSid(local_14);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0042694a */

void FUN_0042694a(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PSID local_24;
  PSID *local_20;
  BOOL local_18;
  PSID local_14;
  _SID_IDENTIFIER_AUTHORITY local_10;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_10.Value[4] = '\0';
  local_10.Value[5] = '\x05';
  local_20 = &local_14;
  local_10.Value[0] = '\0';
  local_10.Value[1] = '\0';
  local_10.Value[2] = '\0';
  local_10.Value[3] = '\0';
  local_18 = 0;
  local_24 = (PSID)0x0;
  local_14 = (PSID)0x0;
  BVar1 = AllocateAndInitializeSid(&local_10,'\x02',0x53,0,0,0,0,0,0,0,&local_24);
  FUN_004279d8((int *)&local_24);
  if (BVar1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004269f2;
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar2 = 0x1e;
  }
  else {
    BVar1 = CheckTokenMembership((HANDLE)0x0,local_14,&local_18);
    if (((BVar1 != 0) || ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_004269f2;
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar2 = 0x1f;
  }
  FUN_004074f5(uVar2,&LAB_00405a60,uVar3,uVar4);
LAB_004269f2:
  if (local_14 != (PSID)0x0) {
    FreeSid(local_14);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00426a1d */

void FUN_00426a1d(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PSID local_24;
  PSID *local_20;
  BOOL local_18;
  PSID local_14;
  _SID_IDENTIFIER_AUTHORITY local_10;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_10.Value[4] = '\0';
  local_10.Value[5] = '\x05';
  local_20 = &local_14;
  local_10.Value[0] = '\0';
  local_10.Value[1] = '\0';
  local_10.Value[2] = '\0';
  local_10.Value[3] = '\0';
  local_18 = 0;
  local_24 = (PSID)0x0;
  local_14 = (PSID)0x0;
  BVar1 = AllocateAndInitializeSid(&local_10,'\x01',0x12,0,0,0,0,0,0,0,&local_24);
  FUN_004279d8((int *)&local_24);
  if (BVar1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00426ac5;
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar2 = 0x20;
  }
  else {
    BVar1 = CheckTokenMembership((HANDLE)0x0,local_14,&local_18);
    if (((BVar1 != 0) || ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00426ac5;
    uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar2 = 0x21;
  }
  FUN_004074f5(uVar2,&LAB_00405a60,uVar3,uVar4);
LAB_00426ac5:
  if (local_14 != (PSID)0x0) {
    FreeSid(local_14);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00426af0 */

undefined4 __fastcall FUN_00426af0(LPCWSTR param_1,void *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar5;
  short *psVar6;
  undefined4 uVar7;
  short *local_34;
  short *local_30;
  short *local_24;
  short *local_20;
  void *local_8;
  
  if ((param_2 == (void *)0x0) || (param_1 == (LPCWSTR)0x0)) {
    return 0x80070057;
  }
  local_8 = param_2;
  _eh_vector_constructor_iterator_(&local_34,0x10,2,FUN_004095d0,FUN_004095b0);
  FUN_00426c2c(param_1,(LPVOID)0x0,(short *)&PTR_u_FileDescription_00401450,(uint *)&local_34,2);
  if (local_34 == local_30) {
    local_30 = local_20;
    local_34 = local_24;
  }
  iVar3 = FUN_00408a88((int)local_34,(int)local_30 - (int)local_34 >> 1,extraout_ECX,0x40550c,6);
  uVar5 = iVar3 + 1;
  uVar4 = FUN_00408ac6(local_34,uVar5,extraout_ECX_00,0x40550c,6);
  if (uVar5 < uVar4) {
    uVar4 = uVar5;
  }
  local_34 = local_34 + uVar4;
  uVar7 = 0;
  uVar5 = uVar5 - uVar4;
  if (uVar5 == 0) {
    local_34 = FUN_0040e2e2(param_1);
    psVar6 = local_34;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    uVar5 = (int)psVar6 - (int)(local_34 + 1) >> 1;
    if (uVar5 == 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x22,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      uVar7 = 0x80004005;
      goto LAB_00426c06;
    }
  }
  cVar2 = FUN_004094c0(local_8,local_34,uVar5);
  if (((cVar2 == '\0') &&
      (uVar7 = 0x8007000e, (undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
     ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
    FUN_004074f5(0x23,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  }
LAB_00426c06:
  _eh_vector_destructor_iterator_(&local_34,0x10,2,FUN_004095b0);
  return uVar7;
}



/* Function: FUN_00426c2c */

void __fastcall
FUN_00426c2c(LPCWSTR param_1,LPVOID param_2,short *param_3,uint *param_4,uint param_5)

{
  LPVOID pBlock;
  LANGID LVar1;
  DWORD dwLen;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  void *this;
  undefined4 *puVar5;
  undefined4 unaff_EDI;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_13c;
  undefined4 local_138;
  uint local_134;
  LPVOID local_130;
  undefined4 *local_12c;
  DWORD local_128;
  undefined4 *local_124;
  uint *local_120;
  void *local_11c;
  short *local_118;
  int iStack_114;
  uint uStack_110;
  WCHAR aWStack_10c [128];
  uint local_c;
  uint uStack_8;
  
  local_c = DAT_0042d6c0 ^ (uint)&uStack_13c;
  local_118 = param_3;
  local_120 = param_4;
  local_12c = (undefined4 *)0x0;
  local_134 = 0;
  local_138 = 0;
  local_124 = (undefined4 *)0x0;
  local_11c = (void *)0x0;
  local_128 = 0;
  local_130 = param_2;
  if (param_1 == (LPCWSTR)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x24,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    goto LAB_00426eef;
  }
  dwLen = GetFileVersionInfoSizeExW(2,param_1,(LPDWORD)&local_12c);
  if (dwLen == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
LAB_00426cda:
      FUN_004074f5(uVar8,&LAB_00405a60,uVar9,unaff_EDI);
    }
LAB_00426ce5:
    GetLastError();
  }
  else {
    local_130 = (LPVOID)FUN_0042a8fe(dwLen);
    if (local_130 == (LPVOID)0x0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x26,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else {
      BVar2 = GetFileVersionInfoExW(2,param_1,local_128,dwLen,local_130);
      puVar6 = local_12c;
      if (BVar2 == 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          unaff_EDI = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar8 = 0x27;
          goto LAB_00426cda;
        }
        goto LAB_00426ce5;
      }
      if (local_12c != (undefined4 *)0x0) {
        BVar2 = VerQueryValueW(local_130,L"\\",&local_124,&local_134);
        if (BVar2 == 0) {
          GetLastError();
          if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
             ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
            FUN_004074f5(0x28,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          }
          goto LAB_00426ee0;
        }
        puVar5 = local_124;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      pBlock = local_130;
      BVar2 = VerQueryValueW(local_130,L"\\VarFileInfo\\Translation",&local_120,&local_134);
      if (BVar2 == 0) {
        LVar1 = GetUserDefaultUILanguage();
        uVar3 = (uint)LVar1;
      }
      else {
        LVar1 = GetUserDefaultUILanguage();
        uVar3 = 0;
        if (local_134 >> 2 != 0) {
          do {
            if (LVar1 == (LANGID)local_120[uVar3]) {
              uVar3 = local_120[uVar3];
              goto LAB_00426e5b;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < local_134 >> 2);
        }
        uVar3 = *local_120;
      }
LAB_00426e5b:
      if (((iStack_114 != 0) && (local_11c != (void *)0x0)) && (uVar7 = 0, param_5 != 0)) {
        local_12c = (undefined4 *)(uVar3 >> 0x10);
        uStack_110 = uVar3 & 0xffff;
        this = local_11c;
        do {
          iVar4 = FUN_004095e6(aWStack_10c,0x80,L"\\StringFileInfo\\%04x%04x\\%ls");
          if ((-1 < iVar4) &&
             (BVar2 = VerQueryValueW(pBlock,aWStack_10c,&local_118,&local_134), BVar2 != 0)) {
            FUN_00409553(this,local_118);
          }
          uVar7 = uVar7 + 1;
          this = (void *)((int)this + 0x10);
        } while (uVar7 < param_5);
      }
    }
  }
LAB_00426ee0:
  if (local_130 != (LPVOID)0x0) {
    o_free(local_130);
  }
LAB_00426eef:
  uStack_13c = 0x426f02;
  FUN_00429fd0(uStack_8 ^ (uint)&local_138);
  return;
}



/* Function: FUN_00426f0e */

bool __fastcall FUN_00426f0e(LPCWSTR param_1)

{
  uint uVar1;
  DWORD DVar2;
  HANDLE hObject;
  bool bVar3;
  LPCWSTR local_14;
  WCHAR *local_10;
  WCHAR local_c [4];
  
  local_14 = local_c;
  local_c[0] = L'\0';
  local_10 = local_14;
  uVar1 = FUN_00408e5c(param_1,&local_14);
  if ((int)uVar1 < 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x2f,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    DVar2 = GetFileAttributesW(local_14);
    if (((DVar2 & 0x10) == 0) && (DVar2 != 0xffffffff)) {
      hObject = CreateFileW(local_14,1,7,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      bVar3 = 1 < (int)hObject + 1U;
      if (1 < (int)hObject + 1U) {
        CloseHandle(hObject);
      }
      goto LAB_00426fca;
    }
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 8) != 0)) {
      GetLastError();
      FUN_00426040(*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),param_1);
    }
  }
  bVar3 = false;
LAB_00426fca:
  if (local_14 != local_c) {
    FUN_0042a48f(local_14);
  }
  return bVar3;
}



/* Function: FUN_00426fed */

uint __fastcall FUN_00426fed(HANDLE param_1,LPCVOID param_2,LPVOID param_3,LPVOID param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  LPCVOID local_10;
  LPCVOID local_c;
  SIZE_T local_8;
  
  BVar1 = ReadProcessMemory(param_1,param_2,&local_10,8,&local_8);
  if (BVar1 != 0) {
    if (local_8 != 8) {
      return 0x8007012b;
    }
    BVar1 = ReadProcessMemory(param_1,local_10,param_3,0x50,&local_8);
    if (BVar1 != 0) {
      if (local_8 != 0x50) {
        return 0x8007012b;
      }
      if (param_4 == (LPVOID)0x0) {
        return 0;
      }
      BVar1 = ReadProcessMemory(param_1,local_c,param_4,0x2cc,&local_8);
      if (BVar1 != 0) {
        if (local_8 != 0x2cc) {
          return 0x8007012b;
        }
        return 0;
      }
    }
  }
  DVar2 = GetLastError();
  uVar3 = DVar2 & 0xffff | 0x80070000;
  if ((int)DVar2 < 1) {
    uVar3 = DVar2;
  }
  return uVar3;
}



/* Function: FUN_0042708f */

bool FUN_0042708f(void)

{
  LSTATUS LVar1;
  HKEY local_14;
  HKEY *local_10;
  HKEY local_8;
  
  local_10 = &local_8;
  local_14 = (HKEY)0x0;
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyExW((HKEY)0x80000002,L"SYSTEM\\CurrentControlSet\\Control\\MiniNT",0,0x20019,
                        &local_14);
  FUN_004279b9((int *)&local_14);
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return LVar1 == 0;
}



/* Function: FUN_004270eb */

uint __fastcall FUN_004270eb(HANDLE param_1,int param_2,LPVOID param_3)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  LPCVOID *ppvVar5;
  LPCVOID local_20 [7];
  
  ppvVar5 = local_20;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppvVar5 = (LPCVOID)0x0;
    ppvVar5 = ppvVar5 + 1;
  }
  if ((param_2 == 0) || (param_3 == (LPVOID)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x36,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = NtQueryInformationThread(param_2,0,local_20,0x1c,0);
    if ((int)uVar1 < 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x37,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      uVar1 = uVar1 | 0x10000000;
    }
    else {
      BVar2 = ReadProcessMemory(param_1,local_20[1],param_3,0x1c,(SIZE_T *)0x0);
      if (BVar2 == 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0x38,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        DVar3 = GetLastError();
        uVar1 = DVar3 & 0xffff | 0x80070000;
        if ((int)DVar3 < 1) {
          uVar1 = DVar3;
        }
        if (-1 < (int)uVar1) {
          uVar1 = 0x80004005;
        }
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



/* Function: FUN_004271ed */

undefined4 __fastcall FUN_004271ed(HANDLE param_1,void *param_2)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  undefined4 uVar4;
  int *piVar5;
  uint nSize;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_44 [6];
  undefined2 *local_2c;
  undefined2 *local_28;
  undefined2 local_24 [4];
  undefined8 local_1c;
  void *local_14;
  int local_10;
  int local_c;
  SIZE_T local_8;
  
  piVar5 = local_44;
  local_14 = param_2;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_2c = local_24;
  uVar4 = 0;
  local_1c = 0;
  local_24[0] = 0;
  local_8 = 0;
  local_c = 0;
  local_28 = local_2c;
  if ((param_1 == (HANDLE)0x0) || (param_2 == (void *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x39,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar4 = 0x80070057;
    goto LAB_004273e6;
  }
  iVar3 = NtQueryInformationProcess(param_1,0,local_44,0x18,&local_c);
  if (((iVar3 < 0) || (local_c != 0x18)) || (local_44[1] == 0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_00426005(*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    BVar1 = ReadProcessMemory(param_1,(LPCVOID)(local_44[1] + 0x10),&local_10,4,&local_8);
    if ((BVar1 == 0) || (local_8 != 4)) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar6 = 0x3b;
LAB_0042732d:
        FUN_004074f5(uVar6,&LAB_00405a60,uVar7,uVar4);
      }
    }
    else {
      local_8 = 0;
      BVar1 = ReadProcessMemory(param_1,(LPCVOID)(local_10 + 0x40),&local_1c,8,&local_8);
      if (((BVar1 == 0) || (local_8 != 8)) || (local_1c._4_4_ == (LPCVOID)0x0)) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar6 = 0x3c;
          goto LAB_0042732d;
        }
      }
      else {
        nSize = (uint)(ushort)local_1c;
        if (0x2000 < (ushort)local_1c) {
          nSize = 0x2000;
        }
        uVar2 = FUN_00408db3(&local_2c,nSize >> 1);
        if ((char)uVar2 == '\0') {
          uVar4 = 0x8007000e;
          goto LAB_004273e6;
        }
        local_8 = 0;
        BVar1 = ReadProcessMemory(param_1,local_1c._4_4_,local_2c,nSize,&local_8);
        if (BVar1 != 0) {
          FUN_00408e2c(&local_2c,local_8 >> 1);
          FUN_0040ff24(local_14,extraout_ECX);
          goto LAB_004273e6;
        }
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          uVar4 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
          uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
          uVar6 = 0x3d;
          goto LAB_0042732d;
        }
      }
    }
  }
  uVar4 = 0x80004005;
LAB_004273e6:
  if (local_2c != local_24) {
    FUN_0042a48f(local_2c);
  }
  return uVar4;
}



/* Function: FUN_00427407 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_00427407(LPCWSTR param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x427413;
  _eh_vector_constructor_iterator_(local_24,0x10,1,FUN_004095d0,FUN_004095b0);
  if ((param_1 == (LPCWSTR)0x0) || (param_2 == (int *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x3e,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar2 = 0x80070057;
  }
  else {
    param_2[1] = *param_2;
    *(undefined2 *)*param_2 = 0;
    iVar1 = FUN_00426c2c(param_1,(LPVOID)0x0,(short *)&PTR_u_ProductName_0040144c,local_24,1);
    if (-1 < iVar1) {
      FUN_004089f5((int *)local_24,(short *)&DAT_0040550c);
      FUN_0040ff24(param_2,local_24);
    }
    if (*param_2 == param_2[1]) {
      FUN_00409553(param_2,L"unknown");
    }
    uVar2 = 0;
  }
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_24,0x10,1,FUN_004095b0);
  return uVar2;
}



/* Function: FUN_004274d2 */

undefined4 __fastcall FUN_004274d2(LPCWSTR param_1)

{
  HMODULE hLibModule;
  HANDLE pvVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 == (LPCWSTR)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x42,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar2 = 0;
  }
  else {
    hLibModule = LoadLibraryExW(param_1,(HANDLE)0x0,2);
    if (hLibModule != (HMODULE)0x0) {
      pvVar1 = GetCurrentProcess();
      uVar2 = FUN_0042753f(pvVar1,(LPCVOID)((uint)hLibModule & 0xfffffffc));
      FreeLibrary(hLibModule);
    }
  }
  return uVar2;
}



/* Function: FUN_0042753f */

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_0042753f(HANDLE param_1,LPCVOID param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int local_230;
  SIZE_T local_22c;
  undefined1 local_228 [532];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0042c948;
  uStack_c = 0x42754e;
  uVar3 = 0;
  memset(local_228,0,0x200);
  local_22c = 0;
  local_230 = 0;
  local_8 = (undefined *)0x0;
  BVar1 = ReadProcessMemory(param_1,param_2,local_228,0x200,&local_22c);
  if ((BVar1 == 0) || (local_22c != 0x200)) {
    uVar3 = 0;
  }
  else {
    iVar2 = RtlImageNtHeaderEx(0,local_228,0x200,0,&local_230);
    if ((-1 < iVar2) && (local_230 != 0)) {
      uVar3 = *(undefined4 *)(local_230 + 8);
    }
  }
  ExceptionList = local_14;
  return uVar3;
}



/* Function: FUN_00427607 */

uint __fastcall FUN_00427607(HKEY param_1,LPCWSTR param_2)

{
  LSTATUS LVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  HKEY local_2c;
  HKEY *local_28;
  _FILETIME local_20;
  DWORD local_18;
  DWORD local_14;
  HKEY local_c [2];
  
  local_c[0] = (HKEY)0x0;
  uVar3 = 0x80004005;
  local_20.dwLowDateTime = 0;
  local_20.dwHighDateTime = 0;
  local_18 = 0;
  local_14 = 0;
  if (param_2 == (LPCWSTR)0x0) {
    if (param_1 == (HKEY)0x0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        FUN_004074f5(0x57,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
      uVar3 = 0x80070057;
      goto LAB_0042772a;
    }
LAB_004276c5:
    GetSystemTimeAsFileTime(&local_20);
    local_14 = local_20.dwHighDateTime;
    local_18 = local_20.dwLowDateTime;
    uVar2 = RegSetValueExW(param_1,L"LastPromptedTime",0,0xb,(BYTE *)&local_18,8);
    if (uVar2 == 0) {
      uVar3 = 0;
      goto LAB_0042772a;
    }
    uVar3 = uVar2 & 0xffff | 0x80070000;
    if ((int)uVar2 < 1) {
      uVar3 = uVar2;
    }
    if (-1 < (int)uVar3) {
      uVar3 = 0x80004005;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042772a;
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0x59;
  }
  else {
    local_28 = local_c;
    local_2c = (HKEY)0x0;
    LVar1 = RegCreateKeyExW(param_1,param_2,0,(LPWSTR)0x0,0,0x20106,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_2c,(LPDWORD)0x0);
    FUN_004279b9((int *)&local_2c);
    param_1 = local_c[0];
    if (LVar1 == 0) goto LAB_004276c5;
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042772a;
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0x58;
  }
  FUN_004074f5(uVar4,&LAB_00405a60,uVar5,uVar6);
LAB_0042772a:
  if (local_c[0] != (HKEY)0x0) {
    RegCloseKey(local_c[0]);
  }
  return uVar3;
}



/* Function: FUN_00427744 */

undefined4 __fastcall
FUN_00427744(HKEY param_1,LPCWSTR param_2,undefined4 param_3,undefined8 *param_4,int param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  _FILETIME local_18;
  int local_10;
  char local_9;
  
  local_9 = '\0';
  local_18.dwLowDateTime = 0;
  local_18.dwHighDateTime = 0;
  if (((param_2 == (LPCWSTR)0x0) && (param_1 == (HKEY)0x0)) || (param_4 == (undefined8 *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0x5a,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    uVar1 = 0x80070057;
  }
  else {
    uVar2 = FUN_00427a24(param_1,param_2);
    local_10 = (int)((ulonglong)uVar2 >> 0x20);
    if (param_5 != 0) {
      *(bool *)param_5 = local_9 == '\0';
    }
    GetSystemTimeAsFileTime(&local_18);
    uVar2 = __aulldiv(local_18.dwLowDateTime - (uint)uVar2,
                      (local_18.dwHighDateTime - local_10) -
                      (uint)(local_18.dwLowDateTime < (uint)uVar2),10000000,0);
    uVar1 = 0;
    *param_4 = uVar2;
  }
  return uVar1;
}



/* Function: FUN_004277ef */

void __fastcall FUN_004277ef(void *param_1)

{
  char cVar1;
  UINT UVar2;
  WCHAR local_88 [64];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  UVar2 = GetWindowsDirectoryW(local_88,0x40);
  if ((UVar2 == 0) || (0x40 < UVar2)) {
    GetLastError();
  }
  else {
    FUN_0040fef0(param_1,UVar2 + 1);
    cVar1 = FUN_004094c0(param_1,local_88,UVar2);
    if (cVar1 != '\0') {
      FUN_0040fe81(param_1,0x5c);
    }
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00427892 */

bool FUN_00427892(void)

{
  SC_HANDLE hSCManager;
  SC_HANDLE hService;
  DWORD DVar1;
  BOOL BVar2;
  
  BVar2 = 0;
  hSCManager = OpenSCManagerW((LPCWSTR)0x0,(LPCWSTR)0x0,1);
  if (hSCManager == (SC_HANDLE)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      GetLastError();
      FUN_00407519(0xab,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
  }
  else {
    hService = OpenServiceW(hSCManager,L"Ipt",0x10);
    if (hService == (SC_HANDLE)0x0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
        GetLastError();
        FUN_00407519(0xac,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
      }
    }
    else {
      BVar2 = StartServiceW(hService,0,(LPCWSTR *)0x0);
      if (BVar2 == 0) {
        DVar1 = GetLastError();
        if (DVar1 == 0x420) {
          BVar2 = 1;
        }
        else if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
                ((PTR_LOOP_0042d098[0x1c] & 4) != 0)) {
          GetLastError();
          FUN_00407519(0xad,&LAB_00405a60,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
      }
      CloseServiceHandle(hService);
    }
    CloseServiceHandle(hSCManager);
  }
  return BVar2 != 0;
}



/* Function: FUN_004279a5 */

void __fastcall FUN_004279a5(int *param_1)

{
  if (*param_1 != 0) {
    CoTaskMemFree((LPVOID)*param_1);
  }
  return;
}



/* Function: FUN_004279b9 */

void __fastcall FUN_004279b9(int *param_1)

{
  HKEY hKey;
  
  if (*param_1 != 0) {
    hKey = *(HKEY *)param_1[1];
    *(int *)param_1[1] = *param_1;
    if (hKey != (HKEY)0x0) {
      RegCloseKey(hKey);
    }
  }
  return;
}



/* Function: FUN_004279d8 */

void __fastcall FUN_004279d8(int *param_1)

{
  PSID pSid;
  
  if (*param_1 != 0) {
    pSid = *(PSID *)param_1[1];
    *(int *)param_1[1] = *param_1;
    if (pSid != (PSID)0x0) {
      FreeSid(pSid);
    }
  }
  return;
}



/* Function: FUN_004279f7 */

void __fastcall FUN_004279f7(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_00426448((int *)(*param_1 + 4));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_00427a24 */

undefined8 __fastcall FUN_00427a24(HKEY param_1,LPCWSTR param_2)

{
  undefined8 uVar1;
  PHKEY phkResult;
  LSTATUS LVar2;
  undefined1 *in_stack_00000010;
  undefined8 local_18;
  DWORD local_10;
  HKEY local_c [2];
  
  local_c[0] = (HKEY)0x0;
  local_18 = 0;
  local_10 = 8;
  if (in_stack_00000010 != (undefined1 *)0x0) {
    *in_stack_00000010 = 0;
  }
  phkResult = (PHKEY)FUN_00408c7e(local_c);
  LVar2 = RegOpenKeyExW(param_1,param_2,0,0x101,phkResult);
  if (LVar2 == 0) {
    LVar2 = RegGetValueW(local_c[0],(LPCWSTR)0x0,L"LastPromptedTime",0x40,(LPDWORD)0x0,&local_18,
                         &local_10);
    if (LVar2 == 0) goto LAB_00427a9b;
  }
  local_18 = 0;
  if (in_stack_00000010 != (undefined1 *)0x0) {
    *in_stack_00000010 = 1;
  }
LAB_00427a9b:
  uVar1 = local_18;
  if (local_c[0] != (HKEY)0x0) {
    RegCloseKey(local_c[0]);
  }
  return uVar1;
}



/* Function: FUN_00427ac1 */

DWORD __thiscall FUN_00427ac1(void *this,LPCWSTR param_1)

{
  LPCVOID lpBaseAddress;
  HANDLE pvVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00427c1e((undefined4 *)this);
  uVar4 = 0;
                    /* WARNING: Load size is inaccurate */
  while (*this + 1U < 2) {
    pvVar1 = CreateFileW(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,8,(HANDLE)0x0);
    FUN_004093d1(this,pvVar1);
                    /* WARNING: Load size is inaccurate */
    if ((1 < *this + 1U) ||
       (((DVar2 = GetLastError(), DVar2 != 0x20 && (DVar2 != 0x21)) && (DVar2 != 0x36)))) break;
    uVar4 = uVar4 + 1;
    Sleep(0xfa);
    if (4 < uVar4) break;
  }
                    /* WARNING: Load size is inaccurate */
  if ((int)*this + 1U < 2) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_0040975c(10,&DAT_00405a70,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),param_1);
    }
  }
  else {
    pvVar1 = CreateFileMappingW(*this,(LPSECURITY_ATTRIBUTES)0x0,8,0,0,(LPCWSTR)0x0);
    FUN_004093d1((void *)((int)this + 4),pvVar1);
    if ((int)*(HANDLE *)((int)this + 4) + 1U < 2) {
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00427bea;
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0xb;
    }
    else {
      pvVar3 = MapViewOfFile(*(HANDLE *)((int)this + 4),1,0,0,0);
      lpBaseAddress = *(LPCVOID *)((int)this + 8);
      *(LPVOID *)((int)this + 8) = pvVar3;
      if (lpBaseAddress != (LPCVOID)0x0) {
        UnmapViewOfFile(lpBaseAddress);
      }
      if (*(int *)((int)this + 8) != 0) {
        return 0;
      }
      if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00427bea;
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0xc;
    }
    FUN_004074f5(uVar5,&DAT_00405a70,uVar6,uVar7);
  }
LAB_00427bea:
  DVar2 = GetLastError();
  uVar4 = DVar2 & 0xffff | 0x80070000;
  if ((int)DVar2 < 1) {
    uVar4 = DVar2;
  }
  if (-1 < (int)uVar4) {
    uVar4 = 0x80004005;
  }
  FUN_00427c1e((undefined4 *)this);
  return uVar4;
}



/* Function: FUN_00427c1e */

void __fastcall FUN_00427c1e(undefined4 *param_1)

{
  LPCVOID lpBaseAddress;
  HANDLE pvVar1;
  
  lpBaseAddress = (LPCVOID)param_1[2];
  param_1[2] = 0;
  if (lpBaseAddress != (LPCVOID)0x0) {
    UnmapViewOfFile(lpBaseAddress);
  }
  pvVar1 = (HANDLE)param_1[1];
  param_1[1] = 0;
  if (1 < (int)pvVar1 + 1U) {
    CloseHandle(pvVar1);
  }
  pvVar1 = (HANDLE)*param_1;
  *param_1 = 0;
  if (1 < (int)pvVar1 + 1U) {
    CloseHandle(pvVar1);
  }
  return;
}



/* Function: FUN_00427c67 */

undefined8 __fastcall FUN_00427c67(undefined4 *param_1)

{
  BOOL BVar1;
  LARGE_INTEGER local_c;
  
  local_c.s.LowPart = 0;
  local_c.s.HighPart = 0;
  BVar1 = GetFileSizeEx((HANDLE)*param_1,&local_c);
  if (BVar1 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      GetLastError();
      FUN_00407519(0xd,&DAT_00405a70,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    return 0xffffffffffffffff;
  }
  return CONCAT44(local_c.s.HighPart,local_c.s.LowPart);
}



/* Function: FUN_00427ce4 */

void __fastcall FUN_00427ce4(undefined4 *param_1)

{
  FUN_00427c1e(param_1);
  if (param_1[2] != 0) {
    UnmapViewOfFile((LPCVOID)param_1[2]);
  }
  if (1 < (int)param_1[1] + 1U) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if (1 < (int)*param_1 + 1U) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00427d28 */

void __fastcall FUN_00427d28(short *param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  short *local_3c;
  int *local_38;
  int local_34;
  uint local_30;
  short *local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  short *local_1c;
  short *psStack_18;
  int iStack_14;
  int iStack_10;
  short **ppsStack_c;
  
  local_2c = param_1;
  local_28 = param_2;
  if ((param_1 == (short *)0x0) || (param_3 == 0)) {
LAB_00427eb5:
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xe,&DAT_00405a80,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    FUN_00428022();
  }
  else {
    psVar8 = param_1 + param_2;
    if (param_1 < psVar8) {
      local_24 = 0;
      local_3c = param_1;
      local_1c = psVar8;
      do {
        psVar5 = local_3c;
        if (*local_3c == 0) {
          return;
        }
        do {
          sVar2 = *psVar5;
          if (((sVar2 == 0) || (sVar2 == 10)) || (sVar2 == 0xd)) break;
          psVar5 = psVar5 + 1;
        } while (psVar5 < psVar8);
        local_30 = 0;
        if (param_4 != 0) {
          local_20 = local_28 - ((int)local_3c - (int)local_2c >> 1);
          local_34 = param_3 + 4;
          do {
            psVar8 = *(short **)(local_34 + -4);
            local_38 = (int *)(psVar8 + 1);
            psVar6 = psVar8;
            do {
              sVar2 = *psVar6;
              psVar6 = psVar6 + 1;
            } while (sVar2 != (short)local_24);
            uVar7 = (int)psVar6 - (int)local_38 >> 1;
            if ((uVar7 <= local_20) && (iVar4 = o__wcsnicmp(local_3c,psVar8,uVar7), iVar4 == 0)) {
              psStack_18 = local_3c + uVar7;
              iStack_14 = (int)psVar5 - (int)psStack_18 >> 1;
              ppsStack_c = &psStack_18;
              local_38 = &iStack_10;
              iStack_10 = local_34;
              bVar1 = *(byte *)(local_34 + 4);
              if (2 < bVar1) {
                pcVar3 = (code *)swi(0x2c);
                (*pcVar3)();
                goto LAB_00427eb5;
              }
              if (bVar1 == 0) {
                FUN_00427eee((int *)&local_38);
              }
              else if (bVar1 == 1) {
                FUN_00427f45((int *)&local_38);
              }
              else {
                FUN_00427fa5((int *)&local_38);
              }
            }
            local_30 = local_30 + 1;
            local_34 = local_34 + 0x10;
            psVar8 = local_1c;
          } while (local_30 < param_4);
        }
        sVar2 = *psVar5;
        local_3c = psVar5;
        while ((sVar2 != 0 && ((sVar2 == 10 || (sVar2 == 0xd))))) {
          local_3c = local_3c + 1;
          sVar2 = *local_3c;
        }
      } while (local_3c < psVar8);
    }
  }
  return;
}



/* Function: FUN_00427eee */

void __fastcall FUN_00427eee(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)**(int **)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xf,&DAT_00405a80,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    FUN_00428022();
  }
  else {
    uVar2 = o__wtoi(*(undefined4 *)((undefined4 *)*param_1)[1]);
    *puVar1 = uVar2;
  }
  return;
}



/* Function: FUN_00427f45 */

void __fastcall FUN_00427f45(int *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)**(int **)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xf,&DAT_00405a80,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    FUN_00428022();
  }
  else {
    uVar2 = o__wcstoui64(*(undefined4 *)((undefined4 *)*param_1)[1],0,10);
    *puVar1 = uVar2;
  }
  return;
}



/* Function: FUN_00427fa5 */

void __fastcall FUN_00427fa5(int *param_1)

{
  undefined4 *puVar1;
  void *this;
  wchar_t *pwVar2;
  char cVar3;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1)[1];
  this = (void *)**(undefined4 **)*param_1;
  if (this == (void *)0x0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004074f5(0xf,&DAT_00405a80,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    }
    FUN_00428022();
  }
  else {
    pwVar2 = (wchar_t *)*puVar1;
    cVar3 = FUN_004094c0(this,pwVar2,puVar1[1]);
    if (((cVar3 == '\0') && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      FUN_004097c1(0xb,&DAT_00405a80,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),pwVar2);
    }
  }
  return;
}



/* Function: FUN_00428022 */

void FUN_00428022(void)

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
      (*(code *)PTR_guard_check_icall_0042e4b0)(&local_28);
      (*pFVar2)();
    }
  }
  return;
}



/* Function: FUN_0042809d */

bool __fastcall FUN_0042809d(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  bool bVar4;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 == 0) {
LAB_004280f8:
    bVar4 = false;
  }
  else {
    cVar1 = FUN_0042abf1((uint3)param_1);
    uVar3 = extraout_ECX;
    if (cVar1 == '\0') {
      cVar1 = FUN_0042ac5c((uint3)extraout_ECX);
      uVar3 = extraout_ECX_00;
      if (cVar1 == '\0') goto LAB_004280f8;
    }
    cVar1 = FUN_0042abf1((uint3)uVar3);
    if (cVar1 == '\0') {
      iVar2 = XerGetPackageIdentity(param_1,&local_8,0,0,0);
      bVar4 = iVar2 == -0x7ff8c2ac;
    }
    else {
      iVar2 = GetPackageFullName(param_1,&local_8);
      bVar4 = iVar2 == 0x3d54;
    }
    bVar4 = !bVar4;
  }
  return bVar4;
}



/* Function: FUN_00428104 */

void __fastcall FUN_00428104(int param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_110;
  undefined1 local_10c [260];
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042829d;
    uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar5 = 10;
LAB_00428292:
    FUN_004074f5(uVar5,&DAT_00405ac0,uVar6,uVar7);
  }
  else {
    cVar1 = FUN_0042abf1((uint3)param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_0042ac5c((uint3)extraout_ECX);
      if (cVar1 == '\0') {
        if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
           ((PTR_LOOP_0042d098[0x1c] & 4) == 0)) goto LAB_0042829d;
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar5 = 0xd;
        goto LAB_00428292;
      }
      local_110 = 0x80;
      iVar3 = XerGetPackageIdentity(param_1,&local_110,local_10c,0,0);
      if (-1 < iVar3) goto LAB_00428213;
      if (((iVar3 == -0x7ff8c2ac) || ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042829d;
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0xc;
    }
    else {
      local_110 = 0x80;
      uVar2 = GetPackageFullName(param_1,&local_110,local_10c);
      if (uVar2 == 0) {
LAB_00428213:
        cVar1 = FUN_004094c0(param_2,local_10c,local_110 - 1);
        if (((cVar1 != '\0') || ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
           ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042829d;
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar5 = 0xe;
        goto LAB_00428292;
      }
      uVar4 = uVar2 & 0xffff | 0x80070000;
      if ((int)uVar2 < 1) {
        uVar4 = uVar2;
      }
      if (((uVar4 == 0x80073d54) || ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042829d;
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0xb;
    }
    FUN_00407519(uVar5,&DAT_00405ac0,uVar6,uVar7);
  }
LAB_0042829d:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004282b3 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_004282b3(HANDLE param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  short *pv;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_124;
  short *local_120;
  undefined1 local_11c [276];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x114;
  pv = (short *)0x0;
  local_8 = 0;
  if ((param_1 == (HANDLE)0x0) || (param_2 == (void *)0x0)) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00428447;
    uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar4 = 0xf;
  }
  else {
    cVar1 = FUN_0042abf1((uint3)param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_0042ac5c((uint3)extraout_ECX);
      if (cVar1 == '\0') goto LAB_00428447;
      local_124 = 0x83;
      iVar3 = XerGetPackageIdentity(param_1,0,0,&local_124,local_11c);
      if (iVar3 < 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_00407519(0x12,&DAT_00405ac0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
        goto LAB_00428447;
      }
      cVar1 = FUN_004094c0(param_2,local_11c,local_124 - 1);
      if (((cVar1 != '\0') || ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00428447;
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar4 = 0x13;
    }
    else {
      local_120 = (short *)0x0;
      uVar2 = FUN_004291c9(param_1,&local_120);
      pv = local_120;
      if ((int)uVar2 < 0) {
        if (((uVar2 != 0x80070490) && ((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098)) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_00407519(0x10,&DAT_00405ac0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
          pv = local_120;
        }
        goto LAB_00428447;
      }
      cVar1 = FUN_00409553(param_2,local_120);
      if (((cVar1 != '\0') || ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098)) ||
         ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_00428447;
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar4 = 0x11;
    }
  }
  FUN_004074f5(uVar4,&DAT_00405ac0,uVar5,uVar6);
LAB_00428447:
  if (pv != (short *)0x0) {
    CoTaskMemFree(pv);
  }
  FUN_0042ae87();
  return;
}



/* Function: FUN_00428460 */

undefined4 __thiscall FUN_00428460(void *this,undefined4 *param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  
  pwVar2 = wcschr((wchar_t *)this,L'!');
                    /* WARNING: Load size is inaccurate */
  if (((*this == 0x21) || (pwVar2 == (wchar_t *)0x0)) || (pwVar2[1] == L'\0')) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 2) != 0)) {
      FUN_0040975c(0x14,&DAT_00405ac0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                   *(undefined4 *)(PTR_LOOP_0042d098 + 0x14),(wchar_t *)this);
    }
    return 0x80070057;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  param_1[1] = (undefined2 *)*param_1;
  *(undefined2 *)*param_1 = 0;
  cVar1 = FUN_00409553(param_1,pwVar2 + 1);
  if (cVar1 != '\0') {
    return 0;
  }
  if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
    return 0x8007000e;
  }
  if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
    return 0x8007000e;
  }
  FUN_004074f5(0x16,&DAT_00405ac0,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
               *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
  return 0x8007000e;
}



/* Function: FUN_0042850b */

undefined4 __fastcall FUN_0042850b(uint3 param_1)

{
  PVOID pvInfo;
  PVOID pvInfo_00;
  char cVar1;
  HWINSTA hObj;
  DWORD DVar2;
  HDESK hObj_00;
  BOOL BVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_c;
  DWORD local_8;
  
  uVar6 = 0;
  cVar1 = FUN_0042acc7(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_0042acc7((uint3)extraout_ECX);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_0042acc7((uint3)extraout_ECX_00);
  if (cVar1 == '\0') {
    return 0;
  }
  hObj = GetProcessWindowStation();
  DVar2 = GetCurrentThreadId();
  hObj_00 = GetThreadDesktop(DVar2);
  if (hObj == (HWINSTA)0x0) {
    return 0;
  }
  if (hObj_00 == (HDESK)0x0) {
    return 0;
  }
  local_8 = 0;
  BVar3 = GetUserObjectInformationW(hObj,2,(PVOID)0x0,0,&local_8);
  if ((BVar3 == 0) && (DVar2 = GetLastError(), DVar2 != 0x7a)) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0;
    }
    GetLastError();
    FUN_00407519(10,&LAB_00405b30,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    return 0;
  }
  if (local_8 + 1 == 0) {
    if ((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) {
      return 0;
    }
    if ((PTR_LOOP_0042d098[0x1c] & 1) == 0) {
      return 0;
    }
    FUN_004074f5(0xb,&LAB_00405b30,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                 *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
    return 0;
  }
  puVar4 = FUN_0041f228(&local_c,local_8 + 1);
  pvInfo = (PVOID)*puVar4;
  *puVar4 = 0;
  if (local_c != 0) {
    o_free(local_c);
  }
  if (pvInfo == (PVOID)0x0) {
    return 0;
  }
  BVar3 = GetUserObjectInformationW(hObj,2,pvInfo,local_8,&local_8);
  if (BVar3 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042879c;
    GetLastError();
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar7 = 0xc;
  }
  else {
    local_8 = 0;
    BVar3 = GetUserObjectInformationW(hObj_00,2,(PVOID)0x0,0,&local_8);
    if ((BVar3 != 0) || (DVar2 = GetLastError(), DVar2 == 0x7a)) {
      if (local_8 == 0) {
        if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
           ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
          FUN_004074f5(0xe,&LAB_00405b30,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                       *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
        }
      }
      else {
        puVar4 = FUN_0041f228(&local_c,local_8 + 1);
        pvInfo_00 = (PVOID)*puVar4;
        *puVar4 = 0;
        if (local_c != 0) {
          o_free(local_c);
        }
        if (pvInfo_00 != (PVOID)0x0) {
          BVar3 = GetUserObjectInformationW(hObj_00,2,pvInfo_00,local_8,&local_8);
          if (BVar3 == 0) {
            if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
               ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
              GetLastError();
              FUN_00407519(0xf,&LAB_00405b30,*(undefined4 *)(PTR_LOOP_0042d098 + 0x10),
                           *(undefined4 *)(PTR_LOOP_0042d098 + 0x14));
            }
          }
          else {
            iVar5 = o__wcsicmp(pvInfo,L"WinSta0");
            if ((iVar5 == 0) && (iVar5 = o__wcsicmp(pvInfo_00,L"default"), iVar5 == 0)) {
              uVar6 = 1;
            }
          }
          o_free(pvInfo_00);
        }
      }
      goto LAB_0042879c;
    }
    if (((undefined **)PTR_LOOP_0042d098 == &PTR_LOOP_0042d098) ||
       ((PTR_LOOP_0042d098[0x1c] & 1) == 0)) goto LAB_0042879c;
    GetLastError();
    uVar9 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
    uVar7 = 0xd;
  }
  FUN_00407519(uVar7,&LAB_00405b30,uVar8,uVar9);
LAB_0042879c:
  o_free(pvInfo);
  return uVar6;
}



/* Function: FUN_004287b0 */

bool FUN_004287b0(void)

{
  char cVar1;
  int iVar2;
  HANDLE hObject;
  undefined4 extraout_ECX;
  bool bVar3;
  
  bVar3 = false;
  cVar1 = FUN_00426a1d();
  if (cVar1 != '\0') {
    iVar2 = FUN_0042850b((uint3)extraout_ECX);
    if (iVar2 != 0) {
      hObject = OpenMutexW(0x1f0001,0,L"Global\\Microsoft.Windows.Setup");
      bVar3 = 1 < (int)hObject + 1U;
      if (1 < (int)hObject + 1U) {
        CloseHandle(hObject);
      }
    }
  }
  return bVar3;
}



/* Function: FUN_004287f9 */

void FUN_004287f9(void)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PSID local_18;
  BOOL local_14;
  _SID_IDENTIFIER_AUTHORITY local_10;
  uint local_8;
  
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  local_10.Value[4] = '\0';
  local_10.Value[5] = '\x05';
  local_10.Value[0] = '\0';
  local_10.Value[1] = '\0';
  local_10.Value[2] = '\0';
  local_10.Value[3] = '\0';
  local_14 = 0;
  local_18 = (PSID)0x0;
  BVar3 = AllocateAndInitializeSid(&local_10,'\x01',4,0,0,0,0,0,0,0,&local_18);
  if (BVar3 == 0) {
    if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
       ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
      uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
      uVar5 = 0x10;
LAB_00428854:
      FUN_004074f5(uVar5,&LAB_00405b30,uVar6,uVar7);
    }
LAB_0042889c:
    if (local_14 == 0) goto LAB_004288a1;
LAB_004288c3:
    iVar4 = FUN_0042689b();
    if ((iVar4 != 0) && (cVar2 = FUN_0042694a(), cVar2 == '\0')) goto LAB_004288dd;
  }
  else {
    BVar3 = CheckTokenMembership((HANDLE)0x0,local_18,&local_14);
    if (BVar3 == 0) {
      if (((undefined **)PTR_LOOP_0042d098 != &PTR_LOOP_0042d098) &&
         ((PTR_LOOP_0042d098[0x1c] & 1) != 0)) {
        uVar7 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0042d098 + 0x10);
        uVar5 = 0x11;
        goto LAB_00428854;
      }
      goto LAB_0042889c;
    }
    if (local_14 != 0) {
      local_14 = FUN_0042850b((uint3)extraout_ECX);
      goto LAB_0042889c;
    }
LAB_004288a1:
    bVar1 = FUN_004287b0();
    if ((CONCAT31(extraout_var,bVar1) != 0) ||
       ((bVar1 = FUN_0042708f(), bVar1 && (iVar4 = FUN_0042850b((uint3)extraout_ECX_00), iVar4 != 0)
        ))) {
      local_14 = 1;
      goto LAB_004288c3;
    }
  }
  local_14 = 0;
LAB_004288dd:
  if (local_18 != (PSID)0x0) {
    FreeSid(local_18);
  }
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00428901 */

int __fastcall FUN_00428901(short *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int local_8;
  
  if ((((param_1 == (short *)0x0) && (param_2 != 0)) || (0x7fffffff < param_2)) ||
     (0x7ffffffe < param_4)) {
    iVar2 = -0x7ff8ffa9;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    iVar2 = 0;
    if (param_2 != 0) {
      local_8 = 0;
      iVar2 = FUN_00428986(param_1,param_2,&local_8,0x402894,0);
      if (((-1 < iVar2) && (1 < param_2 - local_8)) && (uVar1 = (param_2 - local_8) * 2, 2 < uVar1))
      {
        memset(param_1 + local_8 + 1,0,uVar1 - 2);
      }
    }
  }
  return iVar2;
}



/* Function: FUN_00428986 */

undefined4 __fastcall FUN_00428986(short *param_1,int param_2,int *param_3,int param_4,int param_5)

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



/* Function: FUN_004289ed */

short * __cdecl FUN_004289ed(short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  uVar2 = (int)param_2 - (int)param_1 >> 1;
  if (uVar2 != 0) {
    if (uVar2 < 0x80000000) {
      uVar2 = uVar2 - 1;
      uVar3 = FUN_0042ab61(param_1,uVar2,param_3,&stack0x00000010);
      if ((((int)uVar3 < 0) || (uVar2 < uVar3)) || (uVar3 == uVar2)) {
        param_1[uVar2] = 0;
      }
    }
    else {
      *param_1 = 0;
    }
  }
  if (param_2 != param_1) {
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    param_1 = param_1 + ((int)psVar4 - (int)(param_1 + 1) >> 1);
  }
  return param_1;
}



/* Function: FUN_00428a5a */

void __thiscall FUN_00428a5a(void *this,int param_1)

{
  code *pcVar1;
  short *psVar2;
  short *psVar3;
  short *local_20c;
  WCHAR local_208 [256];
  uint local_8;
  
  pcVar1 = DAT_0042dcb4;
  local_8 = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  if (this != (void *)0x0) {
    *(undefined2 *)this = 0;
    if ((pcVar1 != (code *)0x0) && (DAT_0042dca4 != '\0')) {
      (*(code *)PTR_guard_check_icall_0042e4b0)(param_1,this,0x800);
      (*pcVar1)();
                    /* WARNING: Load size is inaccurate */
      if (*this != 0) goto LAB_00428ca5;
    }
    memset(local_208,0,0x200);
    pcVar1 = DAT_0042dd34;
    if ((*(byte *)(param_1 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_1 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
    }
    else if (DAT_0042dd34 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0042e4b0)(*(undefined4 *)(param_1 + 0xc),local_208,0x100);
      (*pcVar1)();
    }
    psVar3 = (short *)((int)this + 0x1000);
    if (*(int *)(param_1 + 0x24) == 0) {
      local_20c = FUN_004289ed((short *)this,psVar3,L"%hs!%p: ");
    }
    else {
      local_20c = FUN_004289ed((short *)this,psVar3,L"%hs(%u)\\%hs!%p: ");
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      local_20c = FUN_004289ed(local_20c,psVar3,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar2 = FUN_004289ed(local_20c,psVar3,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_1 + 0x14) != 0) || (*(int *)(param_1 + 0x30) != 0)) ||
       (*(int *)(param_1 + 0x20) != 0)) {
      psVar2 = FUN_004289ed(psVar2,psVar3,L"    ");
      if (*(int *)(param_1 + 0x14) != 0) {
        psVar2 = FUN_004289ed(psVar2,psVar3,L"Msg:[%ws] ");
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        psVar2 = FUN_004289ed(psVar2,psVar3,L"CallContext:[%hs] ");
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          FUN_004289ed(psVar2,psVar3,&DAT_004020fc);
        }
        else {
          FUN_004289ed(psVar2,psVar3,L"[%hs]\n");
        }
      }
      else {
        FUN_004289ed(psVar2,psVar3,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_00428ca5:
  FUN_00429fd0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00428cbd */

void __thiscall FUN_00428cbd(void *this)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_EDX;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_00000018;
  LPCWSTR in_stack_00000024;
  undefined1 *in_stack_0000002c;
  undefined4 *in_stack_00000034;
  
  *in_stack_00000024 = L'\0';
  *in_stack_0000002c = 0;
  uVar4 = *in_stack_00000018;
  in_stack_00000034[2] = uVar4;
  in_stack_00000034[3] = in_stack_00000018[1];
  iVar2 = FUN_00410230(uVar4);
  *in_stack_00000034 = 1;
  in_stack_00000034[1] = 0;
  if (*(int *)(extraout_EDX + 8) == 1) {
    in_stack_00000034[1] = 8;
  }
  LOCK();
  UNLOCK();
  iVar5 = DAT_0042dd38 + 1;
  DAT_0042dd38 = DAT_0042dd38 + 1;
  in_stack_00000034[4] = iVar5;
  in_stack_00000034[5] = 0;
  DVar3 = GetCurrentThreadId();
  in_stack_00000034[6] = DVar3;
  in_stack_00000034[0xb] = iVar2;
  in_stack_00000034[0x15] = this;
  in_stack_00000034[0x14] = in_stack_00000010;
  in_stack_00000034[9] = "onecore\\shell\\lib\\calleridentity\\calleridentity.cpp";
  in_stack_00000034[10] = 0xac;
  in_stack_00000034[7] = 0;
  in_stack_00000034[8] = 0;
  in_stack_00000034[0xc] = 0;
  in_stack_00000034[0x10] = 0;
  in_stack_00000034[0x11] = 0;
  in_stack_00000034[0x12] = 0;
  in_stack_00000034[0xd] = 0;
  in_stack_00000034[0xe] = 0;
  in_stack_00000034[0xf] = 0;
  pcVar1 = DAT_0042dc8c;
  if (DAT_0042dc8c == (code *)0x0) {
    uVar4 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    uVar4 = (*pcVar1)();
  }
  pcVar1 = DAT_0042dc98;
  in_stack_00000034[0x13] = uVar4;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc94;
  if (DAT_0042dc94 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc90;
  if (DAT_0042dc90 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*pcVar1)();
  }
  pcVar1 = DAT_0042dc6c;
  if ((DAT_0042dc6c != (code *)0x0) && ((*(byte *)(in_stack_00000034 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*pcVar1)();
  }
  if ((int)in_stack_00000034[2] < 0) {
    uVar4 = FUN_00410463();
    pcVar1 = DAT_0042dcb4;
    if (((char)uVar4 == '\0') || ((*(byte *)(in_stack_00000034 + 1) & 2) != 0)) {
      if ((DAT_0042dcb4 != (code *)0x0) && (DAT_0042dca4 == '\0')) {
        (*(code *)PTR_guard_check_icall_0042e4b0)();
        (*pcVar1)();
      }
    }
    else {
      if ((DAT_0042dcb4 != (code *)0x0) && (DAT_0042dca4 == '\0')) {
        (*(code *)PTR_guard_check_icall_0042e4b0)();
        (*pcVar1)();
      }
      if (*in_stack_00000024 == L'\0') {
        FUN_00428a5a(in_stack_00000024,(int)in_stack_00000034);
      }
      OutputDebugStringW(in_stack_00000024);
    }
    pcVar1 = DAT_0042dc84;
    if ((((*(byte *)(in_stack_00000034 + 1) & 4) != 0) || (DAT_0042dcac != '\0')) &&
       (DAT_0042dc84 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_0042e4b0)();
      (*pcVar1)();
    }
    return;
  }
  FUN_004109e5();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00428e80 */

void __fastcall FUN_00428e80(void *param_1)

{
  FUN_00429318(param_1);
  return;
}



/* Function: FUN_00428e9d */

undefined4 __fastcall FUN_00428e9d(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  short *psVar2;
  undefined4 extraout_ECX;
  
  *param_3 = 0;
  if (param_2 <= param_2 + 1) {
    lVar1 = (ulonglong)(param_2 + 1) * 2;
    *param_3 = 0;
    if ((int)((ulonglong)lVar1 >> 0x20) == 0) {
      psVar2 = (short *)CoTaskMemAlloc((SIZE_T)lVar1);
      *param_3 = psVar2;
      if (psVar2 != (short *)0x0) {
        FUN_00428901(psVar2,param_2 + 1,extraout_ECX,param_2);
        return 0;
      }
      return 0x8007000e;
    }
  }
  return 0x80070216;
}



/* Function: FUN_00428f00 */

undefined4 __fastcall FUN_00428f00(int *param_1)

{
  if (*param_1 != 0) {
    RtlFreeHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return 0;
}



/* Function: FUN_00428f2e */

DWORD __fastcall FUN_00428f2e(HANDLE param_1,PHANDLE param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00428f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      DVar3 = GetLastError();
      return DVar3;
    }
  }
  return 0;
}



/* Function: FUN_00428f67 */

undefined4 __fastcall FUN_00428f67(undefined4 param_1,undefined4 *param_2,int *param_3)

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
    _Dst = (void *)FUN_00429367(local_8);
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
                goto LAB_00429036;
              }
              uVar2 = uVar2 + 1;
              local_c = local_c + 0x18;
            } while (uVar2 < *(uint *)((int)_Dst + 4));
          }
        }
        uVar4 = 0x490;
      }
    }
LAB_00429036:
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



/* Function: FUN_0042905e */

undefined4 __fastcall FUN_0042905e(int param_1,uint param_2,uint *param_3,void *param_4)

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



/* Function: FUN_004290e5 */

int __fastcall FUN_004290e5(uint param_1,uint param_2,int *param_3,void *param_4)

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
LAB_00429118:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0042905e(param_1,param_2,&local_8,param_4);
    uVar3 = local_8;
    if (iVar2 != 0x7a) {
      if (iVar2 != 0) {
        return iVar2;
      }
      if (iVar1 + local_8 <= param_2) {
        iVar2 = local_8 - 1;
        *(undefined2 *)((int)param_4 + iVar2 * 2) = 0x21;
        FUN_00429184(param_1,(param_2 - iVar2) - 1,&local_8,(void *)((int)param_4 + iVar2 * 2 + 2));
        *param_3 = uVar3 + iVar1;
        goto LAB_00429118;
      }
    }
    iVar2 = 0x7a;
    *param_3 = iVar1 + local_8;
  }
  return iVar2;
}



/* Function: FUN_00429184 */

undefined4 __fastcall FUN_00429184(int param_1,uint param_2,uint *param_3,void *param_4)

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



/* Function: FUN_004291c9 */

uint __fastcall FUN_004291c9(HANDLE param_1,undefined4 *param_2)

{
  void *pvVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  LPVOID pv;
  uint uVar5;
  void *unaff_retaddr;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  void *local_c;
  HANDLE local_8;
  
  local_18 = 0;
  *param_2 = 0;
  local_14 = 0;
  local_10 = param_2;
  FUN_00428f00(&local_18);
  DVar2 = FUN_00428f2e(param_1,&local_8);
  if ((DVar2 == 0) &&
     (DVar2 = FUN_00428f67(local_8,&local_18,(int *)&local_14), local_8 != (HANDLE)0xfffffffc)) {
    CloseHandle(local_8);
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
      iVar3 = FUN_004290e5(local_14,0,(int *)&local_8,(void *)0x0);
      if (iVar3 == 0x7a) {
        local_c = (void *)0x0;
        CoTaskMemFree((LPVOID)0x0);
        uVar5 = FUN_00428e9d(extraout_ECX,(uint)local_8,&local_c);
        pvVar1 = local_c;
        if ((int)uVar5 < 0) {
          FUN_00410883(unaff_retaddr,0xab,"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                       uVar5);
          pv = local_c;
        }
        else {
          iVar3 = FUN_004290e5(local_14,(uint)local_8,(int *)&local_8,local_c);
          if (iVar3 == 0) {
            *local_10 = pvVar1;
            uVar5 = 0;
            pv = (LPVOID)0x0;
          }
          else {
            uVar5 = FUN_00428e80(unaff_retaddr);
            pv = local_c;
          }
        }
        CoTaskMemFree(pv);
        goto LAB_004292e2;
      }
      uVar5 = 0x8000ffff;
      uVar4 = 0xa8;
    }
    FUN_00410883(unaff_retaddr,uVar4,"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",uVar5
                );
  }
LAB_004292e2:
  FUN_00428f00(&local_18);
  return uVar5;
}



/* Function: FUN_004292f7 */

void __fastcall FUN_004292f7(void *param_1)

{
  FUN_004293c3(param_1);
  return;
}



/* Function: FUN_00429318 */

uint __thiscall FUN_00429318(void *this)

{
  uint uVar1;
  uint in_stack_00000014;
  
  uVar1 = in_stack_00000014 & 0xffff | 0x80070000;
  if ((int)in_stack_00000014 < 1) {
    uVar1 = in_stack_00000014;
  }
  FUN_00407b51(uVar1);
  FUN_004292f7(this);
  return uVar1;
}



/* Function: FUN_00429367 */

undefined4 __fastcall FUN_00429367(uint param_1)

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



/* Function: FUN_004293c3 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004293c3(void *param_1)

{
  code *pcVar1;
  undefined1 local_1468 [4];
  byte local_1464;
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x4293d2;
  local_c = DAT_0042d6c0 ^ (uint)&stack0xfffffffc;
  FUN_00428cbd(param_1);
  if ((local_1464 & 1) == 0) {
    FUN_00429fd0(local_c ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_00410731((int)local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00429430 */

undefined4 FUN_00429430(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00429455();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00429461();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00429455 */

undefined * FUN_00429455(void)

{
  return &DAT_0042d780;
}



/* Function: FUN_00429461 */

undefined * FUN_00429461(void)

{
  return &DAT_0042d788;
}



/* Function: FUN_00429470 */

undefined4 FUN_00429470(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00429455();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00429461();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_004294a0 */

void FUN_004294a0(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(1);
  uVar3 = FUN_00429a48();
  o__set_fmode(uVar3);
  uVar3 = FUN_004183a0();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_00429ccc();
    FUN_0042997b(FUN_00429d00);
    uVar3 = FUN_00429a3e();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_00429a54();
      guard_check_icall();
      guard_check_icall();
      FUN_00429a6f();
      uVar3 = FUN_004183a0();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_00429a66();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_004183a0();
      iVar5 = thunk_FUN_004183a0();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_00429ad1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00429540 */

undefined4 FUN_00429540(void)

{
  FUN_00429a96();
  return 0;
}



/* Function: FUN_00429550 */

void FUN_00429550(void)

{
  undefined4 uVar1;
  
  FUN_00429c41();
  uVar1 = FUN_004183a0();
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
  uint unaff_ESI;
  undefined4 local_24;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_0042d790 != 1) {
      if (DAT_0042d790 == 0) {
        DAT_0042d790 = 1;
        iVar4 = initterm_e(&DAT_00401690,&DAT_004016a8);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_00401660,&DAT_0040168c);
        DAT_0042d790 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00429ab9();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_0042e4b0)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_00429ac5();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      o__get_initial_wide_environment();
      o___p___wargv();
      o___p___argc();
      unaff_ESI = FUN_0040881d();
      uVar6 = FUN_00429bf9();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_004296db;
    }
  }
  FUN_00429ad1();
LAB_004296db:
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
      if (DAT_0042d794 != 0) {
        uVar3 = DAT_0042d794;
        uVar1 = DAT_0042d794;
      }
      DAT_0042d794 = uVar1;
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
    DAT_0042d7b1 = 1;
  }
  FUN_00429dd7();
  cVar1 = FUN_00429a66();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_00429a66();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_00429a66();
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
  
  if (DAT_0042d7b0 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00429ad1();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_0042d798 = 0xffffffff;
    _DAT_0042d79c = 0xffffffff;
    _DAT_0042d7a0 = 0xffffffff;
    _DAT_0042d7a4 = 0xffffffff;
    _DAT_0042d7a8 = 0xffffffff;
    _DAT_0042d7ac = 0xffffffff;
LAB_0042983c:
    DAT_0042d7b0 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_0042d798);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_0042d7a4);
      if (uVar3 == 0) goto LAB_0042983c;
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
  iVar1 = DAT_0042d794;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0042d794 = 0;
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
  if ((DAT_0042d7b1 == '\0') || (param_2 == '\0')) {
    FUN_00429a66();
    FUN_00429a66();
  }
  return 1;
}



/* Function: FUN_00429945 */

undefined4 __cdecl FUN_00429945(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0042d798 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_0042d798,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_0042997b */

int __cdecl FUN_0042997b(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00429945(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_00429998 */

uint FUN_00429998(void)

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
  if ((DAT_0042d6c0 == 0xbb40e64e) || ((DAT_0042d6c0 & 0xffff0000) == 0)) {
    DAT_0042d6c0 = FUN_00429998();
    if (DAT_0042d6c0 == 0xbb40e64e) {
      DAT_0042d6c0 = 0xbb40e64f;
    }
    else if ((DAT_0042d6c0 & 0xffff0000) == 0) {
      DAT_0042d6c0 = DAT_0042d6c0 | (DAT_0042d6c0 | 0x4711) << 0x10;
    }
  }
  DAT_0042d700 = ~DAT_0042d6c0;
  return;
}



/* Function: FUN_00429a3e */

undefined4 FUN_00429a3e(void)

{
  return 1;
}



/* Function: FUN_00429a48 */

undefined4 FUN_00429a48(void)

{
  return 0x4000;
}



/* Function: FUN_00429a54 */

void FUN_00429a54(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0042d7b8);
  return;
}



/* Function: FUN_00429a66 */

undefined1 FUN_00429a66(void)

{
  return 1;
}



/* Function: FUN_00429a6f */

void FUN_00429a6f(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_00429ad1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00429a96 */

void FUN_00429a96(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00429455();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00429461();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_00429ab9 */

undefined * FUN_00429ab9(void)

{
  return &DAT_0042dde8;
}



/* Function: FUN_00429ac5 */

undefined * FUN_00429ac5(void)

{
  return &DAT_0042dde4;
}



/* Function: FUN_00429ad1 */

void FUN_00429ad1(void)

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
  FUN_00429cbe();
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
    FUN_00429cbe();
  }
  return;
}



/* Function: thunk_FUN_004183a0 */

undefined4 thunk_FUN_004183a0(void)

{
  return 0;
}



/* Function: FUN_00429bf9 */

uint FUN_00429bf9(void)

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



/* Function: FUN_00429c41 */

void FUN_00429c41(void)

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



/* Function: FUN_00429cbe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429cbe(void)

{
  _DAT_0042d7c0 = 0;
  return;
}



/* Function: FUN_00429ccc */

/* WARNING: Removing unreachable block (ram,0x00429cde) */
/* WARNING: Removing unreachable block (ram,0x00429cdf) */
/* WARNING: Removing unreachable block (ram,0x00429ce5) */
/* WARNING: Removing unreachable block (ram,0x00429cef) */
/* WARNING: Removing unreachable block (ram,0x00429cf6) */

void FUN_00429ccc(void)

{
  return;
}



/* Function: FUN_00429d00 */

/* WARNING: Removing unreachable block (ram,0x00429d12) */
/* WARNING: Removing unreachable block (ram,0x00429d13) */
/* WARNING: Removing unreachable block (ram,0x00429d19) */
/* WARNING: Removing unreachable block (ram,0x00429d23) */
/* WARNING: Removing unreachable block (ram,0x00429d2a) */

void FUN_00429d00(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0042d6c0 ^ (uint)&param_2;
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
  
  iVar1 = FUN_0042adee(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_0042d6c0,FUN_00429fd0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00429dd7 */

/* WARNING: Removing unreachable block (ram,0x00429e48) */
/* WARNING: Removing unreachable block (ram,0x00429e0c) */
/* WARNING: Removing unreachable block (ram,0x00429ec0) */

undefined4 FUN_00429dd7(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_0042d7c4 = 0;
  DAT_0042d680 = DAT_0042d680 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_0042d680;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_0042d7c8 = DAT_0042d7c8 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_0042d7c8 = DAT_0042d7c8 | 2;
      }
    }
    DAT_0042d7c4 = 1;
    uVar5 = DAT_0042d680 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_0042d680 | 6;
      DAT_0042d7c4 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0042d7c4 = 3;
        uVar5 = DAT_0042d680 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_0042d7c4 = 5;
          uVar5 = DAT_0042d680 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_0042d680 = DAT_0042d680 | 0x6e;
            DAT_0042d7c4 = 6;
            uVar5 = DAT_0042d680;
          }
        }
      }
    }
  }
  DAT_0042d680 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0042d708 != 0;
}



/* Function: FUN_00429fd0 */

void __fastcall FUN_00429fd0(int param_1)

{
  if (param_1 == DAT_0042d6c0) {
    return;
  }
  FUN_0042a014();
  return;
}



/* Function: FUN_00429fe4 */

void __cdecl FUN_00429fe4(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0042a014 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a014(void)

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
  _DAT_0042d8c8 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0042d8d0 = (undefined4)uVar9;
  _DAT_0042d8e0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0042d8e4 = &stack0x00000004;
  _DAT_0042d820 = 0x10001;
  _DAT_0042d7d0 = 0xc0000409;
  _DAT_0042d7d4 = 1;
  _DAT_0042d7e0 = 1;
  DAT_0042d7e4 = 2;
  _DAT_0042d7dc = unaff_retaddr;
  _DAT_0042d8ac = in_GS;
  _DAT_0042d8b0 = in_FS;
  _DAT_0042d8b4 = in_ES;
  _DAT_0042d8b8 = in_DS;
  _DAT_0042d8bc = unaff_EDI;
  _DAT_0042d8c0 = unaff_ESI;
  _DAT_0042d8c4 = unaff_EBX;
  _DAT_0042d8cc = uVar3;
  _DAT_0042d8d4 = unaff_EBP;
  DAT_0042d8d8 = unaff_retaddr;
  _DAT_0042d8dc = in_CS;
  _DAT_0042d8e8 = in_SS;
  FUN_00429fe4((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_0042a116 */

void FUN_0042a116(void)

{
  FUN_0042a12a(8);
  return;
}



/* Function: FUN_0042a12a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0042a12a(undefined4 param_1)

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
  _DAT_0042d8c8 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0042d8d0 = (undefined4)uVar9;
  _DAT_0042d8e0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0042d8e4 = &param_1;
  _DAT_0042d7d0 = 0xc0000409;
  _DAT_0042d7d4 = 1;
  _DAT_0042d7e0 = 1;
  DAT_0042d7e4 = param_1;
  _DAT_0042d7dc = unaff_retaddr;
  _DAT_0042d8ac = in_GS;
  _DAT_0042d8b0 = in_FS;
  _DAT_0042d8b4 = in_ES;
  _DAT_0042d8b8 = in_DS;
  _DAT_0042d8bc = unaff_EDI;
  _DAT_0042d8c0 = unaff_ESI;
  _DAT_0042d8c4 = unaff_EBX;
  _DAT_0042d8cc = uVar3;
  _DAT_0042d8d4 = unaff_EBP;
  DAT_0042d8d8 = unaff_retaddr;
  _DAT_0042d8dc = in_CS;
  _DAT_0042d8e8 = in_SS;
  FUN_00429fe4((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a20d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: o___p___argc */

void __cdecl o___p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___argc();
  return;
}



/* Function: o___p___wargv */

void __cdecl o___p___wargv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a23d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___wargv();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vsnwprintf_s */

void __cdecl o___stdio_common_vsnwprintf_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a26d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vsnwprintf_s();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a29d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a2a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a2cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_initial_wide_environment */

void __cdecl o__get_initial_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a2d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_initial_wide_environment();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a2e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a2f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: o_wcscpy_s */

void __cdecl o_wcscpy_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_wcscpy_s();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: GetCurrentProcessId */

DWORD GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}



/* Function: GetModuleHandleW */

HMODULE GetModuleHandleW(LPCWSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleW(lpModuleName);
  return pHVar1;
}



/* Function: GetCurrentProcess */

HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}



/* Function: CreateProcessW */

BOOL CreateProcessW(LPCWSTR lpApplicationName,LPWSTR lpCommandLine,
                   LPSECURITY_ATTRIBUTES lpProcessAttributes,
                   LPSECURITY_ATTRIBUTES lpThreadAttributes,BOOL bInheritHandles,
                   DWORD dwCreationFlags,LPVOID lpEnvironment,LPCWSTR lpCurrentDirectory,
                   LPSTARTUPINFOW lpStartupInfo,LPPROCESS_INFORMATION lpProcessInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateProcessW(lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,
                         bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,
                         lpStartupInfo,lpProcessInformation);
  return BVar1;
}



/* Function: DeleteProcThreadAttributeList */

void DeleteProcThreadAttributeList(LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList)

{
                    /* WARNING: Could not recover jumptable at 0x0042a3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteProcThreadAttributeList(lpAttributeList);
  return;
}



/* Function: InitializeProcThreadAttributeList */

BOOL InitializeProcThreadAttributeList
               (LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,DWORD dwAttributeCount,DWORD dwFlags,
               PSIZE_T lpSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitializeProcThreadAttributeList(lpAttributeList,dwAttributeCount,dwFlags,lpSize);
  return BVar1;
}



/* Function: UpdateProcThreadAttribute */

BOOL UpdateProcThreadAttribute
               (LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,DWORD dwFlags,DWORD_PTR Attribute,
               PVOID lpValue,SIZE_T cbSize,PVOID lpPreviousValue,PSIZE_T lpReturnSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateProcThreadAttribute
                    (lpAttributeList,dwFlags,Attribute,lpValue,cbSize,lpPreviousValue,lpReturnSize);
  return BVar1;
}



/* Function: GetProcessId */

DWORD GetProcessId(HANDLE Process)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetProcessId(Process);
  return DVar1;
}



/* Function: FUN_0042a424 */

char __fastcall FUN_0042a424(uint3 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (DAT_0042daec == 1) {
    return '\x01';
  }
  if (DAT_0042daec != 2) {
    uStack_8 = (uint)param_1;
    iVar1 = ApiSetQueryApiSetPresence(&DAT_00401008,(int)&uStack_8 + 3);
    if (-1 < iVar1) {
      DAT_0042daec = (uStack_8._3_1_ == '\0') + 1;
      return uStack_8._3_1_;
    }
  }
  return '\0';
}



/* Function: DelayLoad_ImmDisableIME */

void DelayLoad_ImmDisableIME(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00425fd3(&ImgDelayDescr_0042cb4c,&ImmDisableIME_exref);
                    /* WARNING: Could not recover jumptable at 0x0042a487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_0042a48f */

void __cdecl FUN_0042a48f(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_0042a4b0 */

undefined4 * __thiscall FUN_0042a4b0(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0042a4d8 */

void FUN_0042a4d8(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0042be70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0042a91a(param_1);
  FUN_0042a51a();
  return;
}



/* Function: Catch_All@0042a512 */

undefined * Catch_All_0042a512(void)

{
  return &DAT_0042a518;
}



/* Function: FUN_0042a51a */

void FUN_0042a51a(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
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
    pvVar1 = (void *)0x42a574;
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  FUN_0042a5aa();
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0042a5aa */

void FUN_0042a5aa(void)

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
    pvVar2 = (void *)0x42a5eb;
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*param_4)(pvVar2);
  }
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0042a660 */

undefined4 FUN_0042a660(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  __scrt_initialize_thread_safe_statics_platform_specific();
  uVar2 = ___scrt_initialize_onexit_tables(0);
  if ((char)uVar2 != '\0') {
    FUN_0042997b(FUN_0042a720);
    return 0;
  }
  FUN_00429ad1();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: __scrt_initialize_thread_safe_statics_platform_specific */

/* Library Function - Single Match
    void __cdecl __scrt_initialize_thread_safe_statics_platform_specific(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl __scrt_initialize_thread_safe_statics_platform_specific(void)

{
  code *pcVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_0042db08,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule != (HMODULE)0x0) ||
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule != (HMODULE)0x0)) {
    pFVar2 = GetProcAddress(hModule,"SleepConditionVariableCS");
    pFVar3 = GetProcAddress(hModule,"WakeAllConditionVariable");
    if (((pFVar2 != (FARPROC)0x0) && (pFVar3 != (FARPROC)0x0)) ||
       (DAT_0042db04 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0),
       pFVar2 = DAT_0042db20, pFVar3 = DAT_0042db24, DAT_0042db04 != (HANDLE)0x0)) {
      DAT_0042db24 = pFVar3;
      DAT_0042db20 = pFVar2;
      return;
    }
  }
  FUN_00429ad1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0042a720 */

void FUN_0042a720(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0042db08);
  if (DAT_0042db04 != (HANDLE)0x0) {
    CloseHandle(DAT_0042db04);
  }
  return;
}



/* Function: FUN_0042a742 */

void FUN_0042a742(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042db08);
  DAT_0042d704 = DAT_0042d704 + 1;
  *param_1 = DAT_0042d704;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_0042d704;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042db08);
  FUN_0042a7eb();
  return;
}



/* Function: FUN_0042a794 */

void __cdecl FUN_0042a794(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042db08);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_0042a7da:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042db08);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_0042d704;
      goto LAB_0042a7da;
    }
    FUN_0042a829();
  } while( true );
}



/* Function: FUN_0042a7eb */

void FUN_0042a7eb(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_0042db24;
  if (DAT_0042db24 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&DAT_0042db00);
    (*pcVar1)();
    return;
  }
  SetEvent(DAT_0042db04);
  ResetEvent(DAT_0042db04);
  return;
}



/* Function: FUN_0042a829 */

void FUN_0042a829(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_0042db20;
  if (DAT_0042db20 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0042e4b0)(&DAT_0042db00,&DAT_0042db08,0xffffffff);
    (*pcVar1)();
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042db08);
  WaitForSingleObjectEx(DAT_0042db04,100,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042db08);
  return;
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
    pvVar2 = (void *)0x42a89e;
    (*(code *)PTR_guard_check_icall_0042e4b0)();
    (*param_4)(pvVar2);
  }
  FUN_0042a8d9();
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0042a8d9 */

void FUN_0042a8d9(void)

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



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_0042a8fe */

void FUN_0042a8fe(int param_1)

{
  FUN_0042a4d8(param_1);
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042a364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_0042a91a */

void __cdecl FUN_0042a91a(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  do {
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x42a936;
    iVar1 = o_malloc();
    if (iVar1 != 0) {
      return;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x42a929;
    iVar1 = o__callnewh();
  } while (iVar1 != 0);
  if (param_1 != -1) {
    FUN_0042aa52();
    return;
  }
  puStack_8 = &stack0xfffffffc;
  FUN_0042a9d3(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&LAB_0042cabc);
}



/* Function: FUN_0042a960 */

exception * __thiscall FUN_0042a960(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_0042a983 */

undefined4 * __fastcall FUN_0042a983(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* Function: FUN_0042a9b0 */

exception * __thiscall FUN_0042a9b0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_0042a9d3 */

undefined4 * __fastcall FUN_0042a9d3(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* Function: FUN_0042aa00 */

void __fastcall FUN_0042aa00(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_0042aa20 */

undefined4 * __thiscall FUN_0042aa20(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0042aa52 */

void FUN_0042aa52(void)

{
  undefined4 local_10 [3];
  
  FUN_0042a983(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&LAB_0042ca84);
}



/* Function: Unwind@0042aab0 */

void Unwind_0042aab0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0042aabc. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: FUN_0042aac8 */

int __cdecl
FUN_0042aac8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_00429455();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0042ab02 */

int __cdecl
FUN_0042ab02(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00429455();
  iVar2 = o___stdio_common_vsnwprintf_s
                    (*puVar1,puVar1[1],param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0042ab3b */

void __cdecl
FUN_0042ab3b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_0042ab02(param_1,param_2,param_3,param_4,0,param_5);
  return;
}



/* Function: FUN_0042ab61 */

void __cdecl
FUN_0042ab61(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0042aac8(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: FUN_0042ab84 */

int __cdecl FUN_0042ab84(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  puVar1 = (uint *)FUN_00429455();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 2,puVar1[1],uVar3,uVar4,param_1,param_2,param_3);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0042abbc */

void __cdecl FUN_0042abbc(undefined4 param_1,undefined4 param_2)

{
  FUN_0042ab84(param_1,0,param_2);
  return;
}



/* Function: ApiSetQueryApiSetPresence */

void ApiSetQueryApiSetPresence(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042abd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ApiSetQueryApiSetPresence();
  return;
}



/* Function: CoTaskMemFree */

void CoTaskMemFree(LPVOID pv)

{
                    /* WARNING: Could not recover jumptable at 0x0042abe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoTaskMemFree(pv);
  return;
}



/* Function: FUN_0042abf1 */

char __fastcall FUN_0042abf1(uint3 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (DAT_0042db2c == 1) {
    return '\x01';
  }
  if (DAT_0042db2c != 2) {
    uStack_8 = (uint)param_1;
    iVar1 = ApiSetQueryApiSetPresence(&DAT_00401054,(int)&uStack_8 + 3);
    if (-1 < iVar1) {
      DAT_0042db2c = (uStack_8._3_1_ == '\0') + 1;
      return uStack_8._3_1_;
    }
  }
  return '\0';
}



/* Function: DelayLoad_GetPackageFullName */

void DelayLoad_GetPackageFullName(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00425fd3(&ImgDelayDescr_0042cb6c,&GetPackageFullName_exref);
                    /* WARNING: Could not recover jumptable at 0x0042ac54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_0042ac5c */

char __fastcall FUN_0042ac5c(uint3 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (DAT_0042db40 == 1) {
    return '\x01';
  }
  if (DAT_0042db40 != 2) {
    uStack_8 = (uint)param_1;
    iVar1 = ApiSetQueryApiSetPresence(&DAT_00401074,(int)&uStack_8 + 3);
    if (-1 < iVar1) {
      DAT_0042db40 = (uStack_8._3_1_ == '\0') + 1;
      return uStack_8._3_1_;
    }
  }
  return '\0';
}



/* Function: DelayLoad_XerGetPackageIdentity */

void DelayLoad_XerGetPackageIdentity(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00425fd3(&ImgDelayDescr_0042cb8c,&XerGetPackageIdentity_exref)
  ;
                    /* WARNING: Could not recover jumptable at 0x0042acbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_0042acc7 */

char __fastcall FUN_0042acc7(uint3 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (DAT_0042db54 == 1) {
    return '\x01';
  }
  if (DAT_0042db54 != 2) {
    uStack_8 = (uint)param_1;
    iVar1 = ApiSetQueryApiSetPresence(&DAT_00401094,(int)&uStack_8 + 3);
    if (-1 < iVar1) {
      DAT_0042db54 = (uStack_8._3_1_ == '\0') + 1;
      return uStack_8._3_1_;
    }
  }
  return '\0';
}



/* Function: DelayLoad_GetProcessWindowStation */

void DelayLoad_GetProcessWindowStation(void)

{
  FUN_0042ad1b();
  return;
}



/* Function: FUN_0042ad1b */

void FUN_0042ad1b(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00425fd3(&ImgDelayDescr_0042cbac,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0042ad2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_GetThreadDesktop */

void DelayLoad_GetThreadDesktop(void)

{
  FUN_0042ad1b();
  return;
}



/* Function: DelayLoad_GetUserObjectInformationW */

void DelayLoad_GetUserObjectInformationW(void)

{
  FUN_0042ad1b();
  return;
}



/* Function: FUN_0042ad52 */

char __fastcall FUN_0042ad52(uint3 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (DAT_0042db64 == 1) {
    return '\x01';
  }
  if (DAT_0042db64 != 2) {
    uStack_8 = (uint)param_1;
    iVar1 = ApiSetQueryApiSetPresence(&DAT_004010ac,(int)&uStack_8 + 3);
    if (-1 < iVar1) {
      DAT_0042db64 = (uStack_8._3_1_ == '\0') + 1;
      return uStack_8._3_1_;
    }
  }
  return '\0';
}



/* Function: DelayLoad_IsWindow */

void DelayLoad_IsWindow(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00425fd3(&ImgDelayDescr_0042cbcc,&IsWindow_exref);
                    /* WARNING: Could not recover jumptable at 0x0042adb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_SHGetFolderPathW */

void DelayLoad_SHGetFolderPathW(void)

{
  FUN_0042adc7();
  return;
}



/* Function: FUN_0042adc7 */

void FUN_0042adc7(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00425fd3(&ImgDelayDescr_0042cbec,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0042add6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_SHCreateDirectoryExW */

void DelayLoad_SHCreateDirectoryExW(void)

{
  FUN_0042adc7();
  return;
}



/* Function: FUN_0042adee */

int __cdecl FUN_0042adee(int param_1)

{
  uint uVar1;
  
  if ((DAT_0042d7c4 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: FUN_0042ae87 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0042ae87(void)

{
  uint unaff_EBP;
  
  FUN_00429fd0(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0042d6c0 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0042d6c0 ^ (uint)&param_1;
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
  *(uint *)((int)puVar2 + iVar1 + -0x1c) = DAT_0042d6c0 ^ (uint)puVar2;
  puVar2[1] = param_3;
  *(undefined4 *)((int)puVar2 + iVar1 + -0x20) = puVar2[-3];
  puVar2[-3] = ExceptionList;
  ExceptionList = puVar2 + -3;
  return;
}



/* Function: __SEH_prolog4_GS */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4_GS
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4_GS(undefined4 param_1,int param_2)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0042d6c0 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
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



/* Function: memcmp */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042b0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042b0ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042b0f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@0042b17b */

void Unwind_0042b17b(void)

{
  int unaff_EBP;
  
  FUN_00408736((int *)(unaff_EBP + -0x234));
  return;
}



/* Function: Unwind@0042b186 */

void Unwind_0042b186(void)

{
  int unaff_EBP;
  
  FUN_0040d257((int *)(unaff_EBP + -0x5e4));
  return;
}



/* Function: Unwind@0042b1e9 */

void Unwind_0042b1e9(void)

{
  int unaff_EBP;
  
  FUN_004088fd((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@0042b219 */

void Unwind_0042b219(void)

{
  int unaff_EBP;
  
  FUN_00427ce4((undefined4 *)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@0042b249 */

void Unwind_0042b249(void)

{
  int unaff_EBP;
  
  FUN_00409590((undefined4 *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b279 */

void Unwind_0042b279(void)

{
  int unaff_EBP;
  
  FUN_00409590((undefined4 *)(unaff_EBP + -0x58c));
  return;
}



/* Function: Unwind@0042b2b9 */

void Unwind_0042b2b9(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x8d4));
  return;
}



/* Function: Unwind@0042b2c4 */

void Unwind_0042b2c4(void)

{
  int unaff_EBP;
  
  FUN_0040a3d3((int *)(unaff_EBP + -0x8b4));
  return;
}



/* Function: Unwind@0042b304 */

void Unwind_0042b304(void)

{
  int unaff_EBP;
  
  FUN_00409590((undefined4 *)(unaff_EBP + -0x5d8));
  return;
}



/* Function: Unwind@0042b30f */

void Unwind_0042b30f(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(unaff_EBP + -0xf0),0x10,8,FUN_004095b0);
  return;
}



/* Function: Unwind@0042b325 */

void Unwind_0042b325(void)

{
  int unaff_EBP;
  
  FUN_0040a3d3((int *)(unaff_EBP + -0x5d0));
  return;
}



/* Function: Unwind@0042b330 */

void Unwind_0042b330(void)

{
  int unaff_EBP;
  
  FUN_0040d303((int *)(unaff_EBP + -0x5cc));
  return;
}



/* Function: Unwind@0042b393 */

void Unwind_0042b393(void)

{
  int unaff_EBP;
  
  FUN_004095b0(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b39b */

void Unwind_0042b39b(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}



/* Function: Unwind@0042b3a6 */

void Unwind_0042b3a6(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(*(int *)(unaff_EBP + -0x10) + 0x20));
  return;
}



/* Function: Unwind@0042b3b1 */

void Unwind_0042b3b1(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}



/* Function: Unwind@0042b3bc */

void Unwind_0042b3bc(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}



/* Function: Unwind@0042b3c7 */

void Unwind_0042b3c7(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(*(int *)(unaff_EBP + -0x10) + 0x50));
  return;
}



/* Function: Unwind@0042b3d2 */

void Unwind_0042b3d2(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}



/* Function: Unwind@0042b3dd */

void Unwind_0042b3dd(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 0x70),0x10,10,FUN_004095b0)
  ;
  return;
}



/* Function: Unwind@0042b41b */

void Unwind_0042b41b(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@0042b44b */

void Unwind_0042b44b(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -600));
  return;
}



/* Function: Unwind@0042b456 */

void Unwind_0042b456(void)

{
  int unaff_EBP;
  
  FUN_0040fe59((int *)(unaff_EBP + -0x224));
  return;
}



/* Function: Unwind@0042b461 */

void Unwind_0042b461(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x248));
  return;
}



/* Function: Unwind@0042b46c */

void Unwind_0042b46c(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x238));
  return;
}



/* Function: Unwind@0042b4ac */

void Unwind_0042b4ac(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@0042b4b4 */

void Unwind_0042b4b4(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x38));
  return;
}



/* Function: Unwind@0042b4bc */

void Unwind_0042b4bc(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x58));
  return;
}



/* Function: Unwind@0042b4c4 */

void Unwind_0042b4c4(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x48));
  return;
}



/* Function: Unwind@0042b4cc */

void Unwind_0042b4cc(void)

{
  int unaff_EBP;
  
  FUN_00408c6a((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b4fc */

void Unwind_0042b4fc(void)

{
  int unaff_EBP;
  
  FUN_0040fe6d((int *)(unaff_EBP + -0x2018));
  return;
}



/* Function: Unwind@0042b60e */

void Unwind_0042b60e(void)

{
  int unaff_EBP;
  
  FUN_00413c66(*(int *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* Function: Unwind@0042b641 */

void Unwind_0042b641(void)

{
  int unaff_EBP;
  
  FUN_00412295(unaff_EBP + -0x106c);
  return;
}



/* Function: Unwind@0042b681 */

void Unwind_0042b681(void)

{
  int unaff_EBP;
  
  FUN_00412819(unaff_EBP + -0x78);
  return;
}



/* Function: Unwind@0042b74d */

void Unwind_0042b74d(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@0042b77d */

void Unwind_0042b77d(void)

{
  int unaff_EBP;
  
  FUN_0040fe6d((int *)(unaff_EBP + -0xa4));
  return;
}



/* Function: Unwind@0042b7bd */

void Unwind_0042b7bd(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + 8));
  return;
}



/* Function: Unwind@0042b7ed */

void Unwind_0042b7ed(void)

{
  int unaff_EBP;
  
  FUN_0042a48f(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042b7fd */

void Unwind_0042b7fd(void)

{
  int unaff_EBP;
  
  FUN_00418146((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042b805 */

void Unwind_0042b805(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b80d */

void Unwind_0042b80d(void)

{
  int unaff_EBP;
  
  FUN_0042a48f(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0042b81d */

void Unwind_0042b81d(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b825 */

void Unwind_0042b825(void)

{
  int unaff_EBP;
  
  FUN_0042a48f(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0042b835 */

void Unwind_0042b835(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b83d */

void Unwind_0042b83d(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b845 */

void Unwind_0042b845(void)

{
  int unaff_EBP;
  
  FUN_0042a48f(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0042b855 */

void Unwind_0042b855(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b85d */

void Unwind_0042b85d(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b865 */

void Unwind_0042b865(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b86d */

void Unwind_0042b86d(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b875 */

void Unwind_0042b875(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b87d */

void Unwind_0042b87d(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b885 */

void Unwind_0042b885(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b88d */

void Unwind_0042b88d(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b895 */

void Unwind_0042b895(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b89d */

void Unwind_0042b89d(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b8a5 */

void Unwind_0042b8a5(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b8ad */

void Unwind_0042b8ad(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b8b5 */

void Unwind_0042b8b5(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b8bd */

void Unwind_0042b8bd(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b8c5 */

void Unwind_0042b8c5(void)

{
  int unaff_EBP;
  
  FUN_00418120((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b918 */

void Unwind_0042b918(void)

{
  int unaff_EBP;
  
  FUN_0042a48f(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b950 */

void Unwind_0042b950(void)

{
  int unaff_EBP;
  
  FUN_004183a9(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042b980 */

void Unwind_0042b980(void)

{
  int unaff_EBP;
  
  FUN_0040fe6d((int *)(unaff_EBP + -0x42c));
  return;
}



/* Function: Unwind@0042b9c0 */

void Unwind_0042b9c0(void)

{
  int unaff_EBP;
  
  FUN_0041a3cd((int *)(unaff_EBP + -0x434));
  return;
}



/* Function: Unwind@0042b9cb */

void Unwind_0042b9cb(void)

{
  int unaff_EBP;
  
  FUN_0040fe6d((int *)(unaff_EBP + -0x444));
  return;
}



/* Function: Unwind@0042b9d6 */

void Unwind_0042b9d6(void)

{
  int unaff_EBP;
  
  FUN_0040fe6d((int *)(unaff_EBP + -0x448));
  return;
}



/* Function: Unwind@0042ba16 */

void Unwind_0042ba16(void)

{
  int unaff_EBP;
  
  FUN_004183a9(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042ba1e */

void Unwind_0042ba1e(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 8),0x24,10,FUN_004187d0);
  return;
}



/* Function: Unwind@0042ba34 */

void Unwind_0042ba34(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(*(int *)(unaff_EBP + -0x10) + 0x174));
  return;
}



/* Function: Unwind@0042ba6a */

void Unwind_0042ba6a(void)

{
  int unaff_EBP;
  
  FUN_0040fe6d((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@0042ba9a */

void Unwind_0042ba9a(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@0042bacd */

void Unwind_0042bacd(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@0042bafd */

void Unwind_0042bafd(void)

{
  int unaff_EBP;
  
  FUN_0040fe6d((int *)(unaff_EBP + -0x21c));
  return;
}



/* Function: Unwind@0042bb3d */

void Unwind_0042bb3d(void)

{
  int unaff_EBP;
  
  FUN_00408bf7(unaff_EBP + -0xb20);
  return;
}



/* Function: Unwind@0042bb7d */

void Unwind_0042bb7d(void)

{
  int unaff_EBP;
  
  FUN_00408c6a((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0042bb85 */

void Unwind_0042bb85(void)

{
  int unaff_EBP;
  
  FUN_00408c6a((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042bb8d */

void Unwind_0042bb8d(void)

{
  int unaff_EBP;
  
  FUN_00408c6a((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@0042bbbd */

void Unwind_0042bbbd(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@0042bbed */

void Unwind_0042bbed(void)

{
  int unaff_EBP;
  
  FUN_004183a9(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042bbf5 */

void Unwind_0042bbf5(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* Function: Unwind@0042bc28 */

void Unwind_0042bc28(void)

{
  int unaff_EBP;
  
  FUN_00408c6a((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042bc58 */

void Unwind_0042bc58(void)

{
  int unaff_EBP;
  
  thunk_FUN_0040a65a((int *)(unaff_EBP + -0x50));
  return;
}



/* Function: Unwind@0042bc60 */

void Unwind_0042bc60(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@0042bc68 */

void Unwind_0042bc68(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@0042bc70 */

void Unwind_0042bc70(void)

{
  int unaff_EBP;
  
  FUN_00409590((undefined4 *)(unaff_EBP + -0x54));
  return;
}



/* Function: Unwind@0042bc78 */

void Unwind_0042bc78(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x30));
  return;
}



/* Function: Unwind@0042bcab */

void Unwind_0042bcab(void)

{
  int unaff_EBP;
  
  FUN_0041f214((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0042bcdb */

void Unwind_0042bcdb(void)

{
  int unaff_EBP;
  
  FUN_0042088c((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@0042bd0b */

void Unwind_0042bd0b(void)

{
  int unaff_EBP;
  
  FUN_0042088c((int *)(unaff_EBP + -0x38));
  return;
}



/* Function: Unwind@0042bd45 */

void Unwind_0042bd45(void)

{
  int unaff_EBP;
  
  FUN_00409590((undefined4 *)(unaff_EBP + -0x448));
  return;
}



/* Function: Unwind@0042bd85 */

void Unwind_0042bd85(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@0042bd8d */

void Unwind_0042bd8d(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@0042bdbd */

void Unwind_0042bdbd(void)

{
  int unaff_EBP;
  
  FUN_0041f214((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@0042bdc5 */

void Unwind_0042bdc5(void)

{
  int unaff_EBP;
  
  FUN_004095b0((int *)(unaff_EBP + -0x3c));
  return;
}



/* Function: Unwind@0042bdf5 */

void Unwind_0042bdf5(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(unaff_EBP + -0x20),0x10,1,FUN_004095b0);
  return;
}



/* Function: Unwind@0042be30 */

void Unwind_0042be30(void)

{
  int unaff_EBP;
  
  FUN_004279a5((int *)(unaff_EBP + -0x11c));
  return;
}



/* Function: FUN_0042bea0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_0042bea0(void)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_0042b5eb;
  if (DAT_0042d5b4 != (int *)0x0) {
    puVar1 = (undefined1 *)FUN_0041322b(DAT_0042d5b4);
  }
  return puVar1;
}



/* Function: FUN_0042bed0 */

void FUN_0042bed0(void)

{
  FUN_0041302f((int *)&DAT_0042d718);
  return;
}



/* Function: FUN_0042bee0 */

void FUN_0042bee0(void)

{
  FUN_00412f04(&DAT_0042dd40);
  return;
}



