/* Function: FUN_004034b0 */

void FUN_004034b0(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_0040f250)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00403533 */

void FUN_00403533(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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



/* Function: FUN_004035c8 */

uint __thiscall FUN_004035c8(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_004035ff:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_004035ff;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_0040360b */

void __fastcall
FUN_0040360b(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  FUN_00403d2d(param_20,local_18);
  FUN_00403d7b(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_00403d2d(param_17,local_48);
  FUN_00403d7b(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00403d7b(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00403d2d(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_00403d7b(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_00403d7b(param_8,local_d8);
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
  FUN_00403533(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x12,local_128);
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004037c6 */

void __fastcall
FUN_004037c6(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  FUN_00403d7b(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_00403d2d(param_19,local_48);
  FUN_00403d7b(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00403d2d(param_16,local_78);
  FUN_00403d7b(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_00403d7b(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_00403d2d(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_00403d7b(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_00403d7b(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00403533(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004039b9 */

void __fastcall
FUN_004039b9(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
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
  FUN_00403533(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,9,local_98);
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00403a6e */

void __fastcall
FUN_00403a6e(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
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
  FUN_00403533(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,10,local_a8);
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00403b36 */

void __fastcall
FUN_00403b36(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  local_18 = param_22;
  local_10 = 4;
  FUN_00403d7b(param_21,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_20;
  local_30 = 4;
  FUN_00403d7b(param_19,local_48);
  FUN_00403d7b(param_18,local_58);
  FUN_00403d7b(param_17,local_68);
  FUN_00403d7b(param_16,local_78);
  local_88 = param_15;
  local_84 = 0;
  local_80 = 2;
  local_7c = 0;
  FUN_00403d7b(param_14,local_98);
  FUN_00403d7b(param_13,local_a8);
  FUN_00403d7b(param_12,local_b8);
  local_c8 = param_11;
  local_c4 = 0;
  local_c0 = 2;
  local_bc = 0;
  FUN_00403d7b(param_10,local_d8);
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
  FUN_00403533(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00403d2d */

void __thiscall FUN_00403d2d(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = &DAT_0040270c;
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



/* Function: FUN_00403d7b */

void __thiscall FUN_00403d7b(void *this,undefined4 *param_1)

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



/* Function: FUN_00403dc0 */

void FUN_00403dc0(void)

{
  FUN_0040ad7f(FUN_0040c090);
  return;
}



/* Function: FUN_00403de0 */

void FUN_00403de0(void)

{
  FUN_0040ad7f(FUN_0040c0b0);
  return;
}



/* Function: FUN_00403e00 */

void FUN_00403e00(void)

{
  DAT_0040e5a8 = FUN_00405570;
  DAT_0040e580 = &PTR_s_WilError_03_0040e038;
  DAT_0040e594 = &DAT_0040e1d0;
  return;
}



/* Function: FUN_00403e30 */

void FUN_00403e30(void)

{
  DAT_0040e5c4 = FUN_004045e0;
  DAT_0040e5b0 = DebugBreak;
  DAT_0040e5c0 = FUN_00404620;
  DAT_0040e5a0 = FUN_00405640;
  DAT_0040e590 = FUN_00405710;
  DAT_0040e5c8 = FUN_00405690;
  DAT_0040e5ac = FUN_004056d0;
  return;
}



/* Function: FUN_00403e80 */

void FUN_00403e80(void)

{
  FUN_0040ad7f(FUN_0040c0c0);
  return;
}



/* Function: FUN_00403ea0 */

void FUN_00403ea0(void)

{
  FUN_00409dbb();
  FUN_0040ad7f(FUN_0040c0e0);
  return;
}



/* Function: FUN_00403ec0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ec0(void)

{
  _DAT_0040e680 = FUN_00409250;
  _DAT_0040e684 = FUN_004092d0;
  _DAT_0040e690 = FUN_00409340;
  return;
}



/* Function: FUN_00403ef0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ef0(void)

{
  _DAT_0040e694 = FUN_00409500;
  return;
}



/* Function: FUN_00403f10 */

void FUN_00403f10(void)

{
  FUN_0040ad7f(FUN_0040c0f0);
  return;
}



/* Function: FUN_00403f30 */

void FUN_00403f30(void)

{
  FUN_0040ad7f(FUN_0040c110);
  return;
}



/* Function: FUN_00403f50 */

void FUN_00403f50(void)

{
  FUN_0040ad7f(FUN_0040c130);
  return;
}



/* Function: FUN_00403f62 */

undefined4 __fastcall FUN_00403f62(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00403fc8 */

undefined4 __thiscall FUN_00403fc8(void *this,int param_1)

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
    uVar2 = FUN_00404063((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_0040401f */

undefined4 __cdecl FUN_0040401f(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_004040b6(param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_00404063 */

undefined4 __fastcall FUN_00404063(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_004040b6 */

undefined4 __fastcall
FUN_004040b6(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4,va_list param_5)

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



/* Function: FUN_004040fc */

wchar_t * __thiscall FUN_004040fc(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_004040b6(param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_00404153 */

void __fastcall FUN_00404153(wchar_t *param_1,int param_2,int param_3)

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
  
  pcVar3 = DAT_0040e588;
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  iVar5 = param_2;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((pcVar3 != (code *)0x0) && (DAT_0040e598 != '\0')) {
      (*(code *)PTR_guard_check_icall_0040f250)(param_3,param_1,param_2);
      (*pcVar3)();
      iVar5 = extraout_EDX;
      if (*param_1 != L'\0') goto LAB_004043ab;
    }
    memset(local_208,0,0x200);
    pcVar3 = DAT_0040e5a0;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_0040e5a0 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040f250)(*(undefined4 *)(param_3 + 0xc),local_208,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    pwVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_20c = FUN_004040fc(pcVar3,param_1,pwVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_20c = FUN_004040fc(pcVar3,param_1,pwVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_20c = FUN_004040fc(pvVar4,local_20c,pwVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    pwVar2 = FUN_004040fc(local_208,local_20c,pwVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (iVar5 = extraout_EDX_00, *(int *)(param_3 + 0x20) != 0)) {
      pwVar2 = FUN_004040fc((void *)0x0,pwVar2,pwVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        pwVar2 = FUN_004040fc(this,pwVar2,pwVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        pwVar2 = FUN_004040fc(pvVar4,pwVar2,pwVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_004040fc(pvVar4,pwVar2,pwVar1,L"\n");
          iVar5 = extraout_EDX_03;
        }
        else {
          FUN_004040fc(pvVar4,pwVar2,pwVar1,L"[%hs]\n");
          iVar5 = extraout_EDX_02;
        }
      }
      else {
        FUN_004040fc(pvVar4,pwVar2,pwVar1,L"[%hs(%hs)]\n");
        iVar5 = extraout_EDX_01;
      }
    }
  }
LAB_004043ab:
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,iVar5);
  return;
}



/* Function: FUN_004043c3 */

uint * __thiscall FUN_004043c3(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00404661((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_004043e7 */

LPVOID __fastcall FUN_004043e7(DWORD param_1,SIZE_T param_2)

{
  FARPROC pFVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  HMODULE hModule;
  
  hHeap = GetProcessHeap();
  pvVar2 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0040e570 == (FARPROC)0x0) {
    if (DAT_0040e5e8 != '\0') {
      return pvVar2;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0040e570 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0040e5e8 = '\x01';
    if (DAT_0040e570 == (FARPROC)0x0) {
      DAT_0040e5e8 = '\x01';
      return pvVar2;
    }
  }
  pFVar1 = DAT_0040e570;
  (*(code *)PTR_guard_check_icall_0040f250)(hHeap,pvVar2);
  (*pFVar1)();
  return pvVar2;
}



/* Function: FUN_00404464 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404464(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040e5d8;
  _DAT_0040e5dc = param_1;
  LOCK();
  DAT_0040e5d8 = DAT_0040e5d8 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_0040447d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0040447d(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040e5f4;
  _DAT_0040e578 = param_1;
  LOCK();
  DAT_0040e5f4 = DAT_0040e5f4 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00404496 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00404496(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040e648;
  _DAT_0040e5f0 = param_1;
  LOCK();
  DAT_0040e648 = DAT_0040e648 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_004044b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004044b0(undefined4 param_1)

{
  _DAT_0040e640 = param_1;
  return 1;
}



/* Function: FUN_004044ca */

void FUN_004044ca(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0040e5c0;
  if (DAT_0040e5c0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004044fa */

void __fastcall
FUN_004044fa(undefined4 param_1,undefined4 param_2,LPCWSTR param_3,uint *param_4,char *param_5,
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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
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
      FUN_00403f62(param_5,param_6,(int)pcVar5);
      param_2 = extraout_EDX_01;
    }
  }
  else if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004045e0 */

undefined * __fastcall FUN_004045e0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_0040e5e0 == '\0') {
    FUN_004044fa(param_1,param_2,(LPCWSTR)FUN_004044b0,(uint *)0x0,&DAT_0040e5f8,0x40);
    DAT_0040e5e0 = '\x01';
  }
  return &DAT_0040e5f8;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00404620 */

void FUN_00404620(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00404661 */

uint __fastcall FUN_00404661(uint param_1)

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



/* Function: FUN_00404836 */

DWORD __fastcall
FUN_00404836(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00405cc5(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  return DVar1;
}



/* Function: FUN_00404872 */

uint __fastcall
FUN_00404872(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00405cc5(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_004048c1 */

void __fastcall FUN_004048c1(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00404872(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_004048de */

int __fastcall FUN_004048de(short *param_1)

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



/* Function: FUN_00404906 */

undefined1 FUN_00404906(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_0040e5ac;
  if (DAT_0040e5bc != '\0') {
    return 1;
  }
  if (DAT_0040e5ac != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00404936 */

void __fastcall
FUN_00404936(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
    iVar3 = FUN_00404464(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_0040447d(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_00405cc5(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar6 = FUN_00404661(0x8007029c);
      param_15[3] = uVar6;
    }
    iVar3 = FUN_00404496(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_004044b0(iVar3);
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
  iVar4 = DAT_0040e5e4 + 1;
  DAT_0040e5e4 = DAT_0040e5e4 + 1;
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
  pcVar1 = DAT_0040e5c4;
  if (DAT_0040e5c4 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040f250)();
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_0040e590;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040e5a8;
  if (DAT_0040e5a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040e5a4;
  if (DAT_0040e5a4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040e5b4;
  if ((DAT_0040e5b4 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040f250)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_00404d8b();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar6 = FUN_00404661(0x8000ffff);
    param_15[3] = uVar6;
  }
  pcVar1 = DAT_0040e57c;
  if (DAT_0040e584 == '\0') {
    if (DAT_0040e57c == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040f250)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00404b27;
  }
  else {
LAB_00404b27:
    pcVar1 = DAT_0040e588;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_0040e588 != (code *)0x0) && (DAT_0040e598 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040f250)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_00404153(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00404b90;
    }
  }
  pcVar1 = DAT_0040e588;
  if ((DAT_0040e588 != (code *)0x0) && (DAT_0040e598 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040f250)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00404b90:
  pcVar1 = DAT_0040e5b0;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_0040e58c != '\0')) &&
     (DAT_0040e5b0 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040f250)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00404bc8 */

void __fastcall FUN_00404bc8(int param_1)

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
  
  pcVar1 = DAT_0040e5cc;
  if (DAT_0040e5cc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040e5b8;
  if (DAT_0040e5b8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00404c35;
  uVar3 = 1;
  do {
    FUN_004044ca(uVar3);
    iVar2 = extraout_ECX;
LAB_00404c35:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_00404c55 */

void __fastcall
FUN_00404c55(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_00405de3(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00404c73 */

void __fastcall
FUN_00404c73(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar2 = FUN_004043c3((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_00404c55(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_00404cb8 */

void __fastcall FUN_00404cb8(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00404836(param_1,param_2,0x4023a4,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_004043c3(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_00404c55(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_00404d19 */

void __fastcall FUN_00404d19(undefined4 param_1,undefined4 param_2)

{
  FUN_00406072(param_1,param_2);
  return;
}



/* Function: FUN_00404d36 */

void __fastcall FUN_00404d36(int param_1,int param_2)

{
  FUN_004060b3(param_1,param_2);
  return;
}



/* Function: FUN_00404d52 */

void __fastcall FUN_00404d52(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_00404cb8(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404d6a */

void __fastcall FUN_00404d6a(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_00404c73(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404d8b */

void FUN_00404d8b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404d97 */

void FUN_00404d97(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00404d52(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404dc4 */

void FUN_00404dc4(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00404d52(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404def */

int __fastcall FUN_00404def(void *param_1,int *param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  iVar1 = FUN_00405005(param_1,local_c);
  if (iVar1 < 0) {
    FUN_00404d19(unaff_retaddr,100);
    FUN_00404d19(unaff_retaddr,0x6d);
  }
  else {
    *param_2 = local_c[0] << 2;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_00404e47 */

void __thiscall FUN_00404e47(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_00404d8b();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00404063(local_214,0x104,this,param_1);
  FUN_00403fc8(local_214,0x4023dc);
  uVar5 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  iVar3 = FUN_00405828(this,uVar5,uVar2,local_214);
  uVar4 = extraout_EDX;
  if (iVar3 < 0) {
    FUN_00404d19(unaff_retaddr,0x88);
    uVar4 = extraout_EDX_00;
  }
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00404eea */

undefined4 __fastcall FUN_00404eea(HANDLE param_1,int *param_2)

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
    goto LAB_00404f0d;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00404f0d:
        uVar2 = FUN_00404d36(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00404fdb:
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
        goto LAB_00404f0d;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00404f0d;
          }
          if (DVar1 == 0) goto LAB_00404fdb;
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
  FUN_00404d19(unaff_retaddr,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_00405005 */

void __thiscall FUN_00405005(void *this,int *param_1)

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
  
  local_c = DAT_0040e180 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00404063(local_218,0x104,this,(int)this);
  FUN_00403fc8(local_218,0x4023dc);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar4 = extraout_EDX;
    if (DVar2 != 2) {
      FUN_00404d36(unaff_retaddr,0xcd);
      uVar4 = extraout_EDX_00;
    }
LAB_004050ab:
    if (pvVar1 == (HANDLE)0x0) goto LAB_004050c5;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_00404eea(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_00404d19(unaff_retaddr,0xd3);
      uVar4 = extraout_EDX_01;
      goto LAB_004050ab;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00404d97(pvVar1);
  uVar4 = extraout_EDX_02;
LAB_004050c5:
  FUN_0040acc0(local_c ^ (uint)auStack_224,uVar4);
  return;
}



/* Function: FUN_004050e4 */

void __thiscall FUN_004050e4(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar5 = FUN_004048de(*(short **)(param_1 + 0x14));
  piVar2 = (int *)((int)this + 0x28);
  pcVar4 = local_c + iVar5 + (int)pcVar4;
  if (((*(int *)((int)this + 0x24) == 0) || ((char *)*piVar2 < pcVar4)) &&
     (pvVar6 = FUN_004043e7(8,(SIZE_T)pcVar4), pvVar6 != (LPVOID)0x0)) {
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
    FUN_00405d7c(pcVar4,pcVar7,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00405d7c(extraout_EAX,pcVar7,(char *)*local_8,(undefined4 *)((int)this + 0x14));
    _Dst = FUN_00405d0c(extraout_EAX_00,pcVar7,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar7 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00405220 */

void __fastcall FUN_00405220(int param_1)

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



/* Function: FUN_0040528f */

void __thiscall FUN_0040528f(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_004043e7(8,0xdc);
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
    FUN_004050e4(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_0040534d */

DWORD * __fastcall FUN_0040534d(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_0040e580;
  if (DAT_0040e580 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0040e580[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_004058af(*DAT_0040e580,&local_8);
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



/* Function: FUN_004053d6 */

uint __fastcall FUN_004053d6(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_004053d6(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0040e1c4 + 1;
        DAT_0040e1c4 = DAT_0040e1c4 + 1;
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



/* Function: FUN_00405495 */

void __fastcall FUN_00405495(int param_1,char *param_2,int param_3)

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
  iVar2 = DAT_0040e594;
  if (DAT_0040e594 != 0) {
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
      uVar5 = FUN_004053d6(param_1,*pDVar6,param_2,param_3);
      if ((char)uVar5 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar6;
      local_5 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_0040f250)(param_1);
        bVar3 = (*pcVar1)();
        local_5 = local_5 | bVar3;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
    }
  }
  pcVar1 = DAT_0040e59c;
  if (DAT_0040e59c != (code *)0x0) {
    if ((local_5 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (*(code *)PTR_guard_check_icall_0040f250)(uVar5,param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00405570 */

void FUN_00405570(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00405495((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_0040e644 != DVar2) {
    LOCK();
    iVar1 = DAT_0040e64c + 1;
    UNLOCK();
    iVar3 = DAT_0040e64c + 1;
    DAT_0040e64c = iVar1;
    if (iVar3 < 4) {
      DAT_0040e644 = DVar2;
      this = FUN_0040534d(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_0040528f(this,param_1);
      }
      DAT_0040e644 = 0;
    }
    LOCK();
    DAT_0040e64c = DAT_0040e64c + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_004055d5 */

void __fastcall FUN_004055d5(LPCSTR param_1)

{
  if (DAT_0040e5ec == (HMODULE)0x0) {
    DAT_0040e5ec = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_0040e5ec,param_1);
  return;
}



/* Function: FUN_00405601 */

FARPROC __fastcall FUN_00405601(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_0040e638 == (HMODULE)0x0) &&
     (DAT_0040e638 = GetModuleHandleW(L"kernelbase.dll"), DAT_0040e638 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_0040e638,param_1);
  return pFVar1;
}



/* Function: FUN_00405640 */

void FUN_00405640(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0040e5ec == (HMODULE)0x0) {
    DAT_0040e5ec = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0040e5ec,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00405690 */

void FUN_00405690(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_0040e574 == (code *)0x0) &&
     (DAT_0040e574 = (code *)FUN_004055d5("RtlNtStatusToDosErrorNoTeb"), DAT_0040e574 == (code *)0x0
     )) {
    return;
  }
  pcVar1 = DAT_0040e574;
  (*(code *)PTR_guard_check_icall_0040f250)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_004056d0 */

undefined4 FUN_004056d0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_0040e63c == (code *)0x0) {
    DAT_0040e63c = (code *)FUN_004055d5("RtlDllShutdownInProgress");
    if (DAT_0040e63c == (code *)0x0) {
      return 0;
    }
  }
  pcVar1 = DAT_0040e63c;
  (*(code *)PTR_guard_check_icall_0040f250)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00405710 */

void FUN_00405710(undefined1 *param_1)

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
  local_1e = DAT_0040e5d0;
  local_1c = *(undefined2 *)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  if (DAT_0040e5d4 == (FARPROC)0x0) {
    DAT_0040e5d4 = FUN_00405601("WilFailureNotifyWatchers");
    if (DAT_0040e5d4 == (FARPROC)0x0) goto LAB_0040578c;
  }
  pFVar1 = DAT_0040e5d4;
  (*(code *)PTR_guard_check_icall_0040f250)(0,&local_28,&local_c);
  (*pFVar1)();
LAB_0040578c:
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



/* Function: FUN_004057c1 */

void __fastcall FUN_004057c1(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040f250)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_004057e3 */

void __fastcall FUN_004057e3(int *param_1)

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



/* Function: FUN_00405828 */

undefined4 __thiscall FUN_00405828(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_004048c1(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_00405878(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_00405878 */

void __thiscall FUN_00405878(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00404d97(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004058af */

void __fastcall FUN_004058af(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_0040401f(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00405878(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_004048c1(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_0040599b;
  }
  FUN_00405bd4(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_00404def(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_004059c9:
    FUN_00404d19(unaff_retaddr,uVar3);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_00405abc((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_004059c9;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00404dc4(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00404d97(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_0040599b:
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00405a6a */

void __fastcall FUN_00405a6a(int param_1)

{
  FUN_00405b79((int *)(param_1 + 0x18));
  FUN_00405a95((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00404d97(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00405a95 */

void __fastcall FUN_00405a95(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00404d97((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00404d97((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00405abc */

int __fastcall FUN_00405abc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_004043e7(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00404d19(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00404d8b();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_00404e47(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00404d19(unaff_retaddr,0x14b);
    }
    else {
      FUN_00405c37(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_00405a95(local_10);
  }
  FUN_00405c17((int *)&local_18);
  return iVar3;
}



/* Function: FUN_00405b79 */

void __fastcall FUN_00405b79(int *param_1)

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
        FUN_00405220((int)lpMem + 8);
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



/* Function: FUN_00405bd4 */

void __thiscall FUN_00405bd4(void *this,undefined4 *param_1)

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
    FUN_00404d6a(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00405c17 */

void __fastcall FUN_00405c17(int *param_1)

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



/* Function: FUN_00405c37 */

undefined4 * __thiscall FUN_00405c37(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00405c9b */

void __thiscall FUN_00405c9b(void *this,int param_1)

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



/* Function: FUN_00405cc5 */

void __fastcall
FUN_00405cc5(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00404661(param_7);
  local_8 = 0;
  FUN_0040603b(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_00405d0c */

void * __fastcall FUN_00405d0c(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint _MaxCount;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    _MaxCount = FUN_004048de(param_3);
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



/* Function: FUN_00405d7c */

char * __fastcall FUN_00405d7c(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

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



/* Function: FUN_00405de3 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00405de3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  uStack_c = 0x405df5;
  local_1458 = *param_7;
  local_1008[0] = L'\0';
  local_1408[0] = 0;
  local_1454 = param_7[1];
  uStack_1434 = FUN_004044b0(local_1458);
  local_1460 = 3;
  local_145c = 0;
  if (param_7[2] == 1) {
    local_145c = 8;
  }
  LOCK();
  UNLOCK();
  local_1450 = DAT_0040e5e4 + 1;
  local_144c = 0;
  DAT_0040e5e4 = DAT_0040e5e4 + 1;
  DStack_1448 = GetCurrentThreadId();
  pcVar1 = DAT_0040e5c4;
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
  if (DAT_0040e5c4 == (code *)0x0) {
    uStack_1414 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040f250)();
    uStack_1414 = (*pcVar1)();
  }
  pcVar1 = DAT_0040e590;
  if (DAT_0040e590 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040e5a8;
  if (DAT_0040e5a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(&local_1460,local_1408,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040e5a4;
  if (DAT_0040e5a4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040e5b4;
  if ((DAT_0040e5b4 != (code *)0x0) && ((local_145c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040f250)(&local_1460);
    (*pcVar1)();
  }
  if (-1 < local_1458) {
    local_1458 = -0x7fff0001;
    local_1454 = FUN_00404661(0x8000ffff);
  }
  pcVar1 = DAT_0040e57c;
  if (DAT_0040e584 == '\0') {
    if (DAT_0040e57c == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040f250)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00405f82;
  }
  else {
LAB_00405f82:
    pcVar1 = DAT_0040e588;
    if ((local_145c & 2) == 0) {
      if ((DAT_0040e588 != (code *)0x0) && (DAT_0040e598 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040f250)(&local_1460,local_1008,0x800);
        (*pcVar1)();
      }
      if (local_1008[0] == L'\0') {
        FUN_00404153(local_1008,0x800,(int)&local_1460);
      }
      OutputDebugStringW(local_1008);
      goto LAB_00406008;
    }
  }
  pcVar1 = DAT_0040e588;
  if ((DAT_0040e588 != (code *)0x0) && (DAT_0040e598 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040f250)(&local_1460,0,0);
    (*pcVar1)();
  }
LAB_00406008:
  pcVar1 = DAT_0040e5b0;
  if ((((local_145c & 4) != 0) || (DAT_0040e58c != '\0')) && (DAT_0040e5b0 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040f250)();
    (*pcVar1)();
  }
  FUN_00404bc8((int)&local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040603b */

void __fastcall
FUN_0040603b(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00406108(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00406061 */

void __fastcall FUN_00406061(undefined4 param_1,undefined4 param_2)

{
  FUN_004061ae(param_1,param_2);
  return;
}



/* Function: FUN_00406072 */

void __fastcall FUN_00406072(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_00404661(in_stack_00000014);
  FUN_00406061(param_1,param_2);
  return;
}



/* Function: FUN_004060b3 */

uint __fastcall FUN_004060b3(int param_1,int param_2)

{
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = FUN_00404872(param_1,param_2,0x4023a0,param_1,param_1,in_stack_00000010);
  FUN_00404661(uVar1);
  FUN_00406061(param_1,param_2);
  return uVar1;
}



/* Function: FUN_00406108 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00406108(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_0040e180 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00404936(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_0040acc0(local_c ^ (uint)&local_1474,extraout_EDX);
    return;
  }
  FUN_00404bc8((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004061ae */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004061ae(undefined4 param_1,undefined4 param_2)

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
  
  local_c = DAT_0040e180 ^ (uint)auStack_1474;
  local_1470 = in_stack_00000010;
  local_1010[0] = L'\0';
  local_1410[0] = 0;
  local_145c = in_stack_00000014[1];
  local_1460 = *in_stack_00000014;
  local_146c = param_1;
  iStack_143c = FUN_0040447d(local_1460);
  local_1464 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1464 = 8;
  }
  local_1468 = 1;
  LOCK();
  UNLOCK();
  local_1458 = DAT_0040e5e4 + 1;
  local_1454 = 0;
  DAT_0040e5e4 = DAT_0040e5e4 + 1;
  DStack_1450 = GetCurrentThreadId();
  pcVar1 = DAT_0040e5c4;
  uStack_1418 = local_1470;
  uStack_1414 = local_146c;
  puStack_1444 = &DAT_004023a0;
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
  if (DAT_0040e5c4 == (code *)0x0) {
    lVar5 = (ulonglong)extraout_EDX << 0x20;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040f250)();
    lVar5 = (*pcVar1)();
  }
  pcVar1 = DAT_0040e590;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040e590 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_00,uStack_141c);
  }
  pcVar1 = DAT_0040e5a8;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040e5a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(&local_1468,local_1410,0x400);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_01,uStack_141c);
  }
  pcVar1 = DAT_0040e5a4;
  uStack_141c = (undefined4)lVar5;
  if (DAT_0040e5a4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040f250)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_02,uStack_141c);
  }
  pcVar1 = DAT_0040e5b4;
  uStack_141c = (undefined4)lVar5;
  if ((DAT_0040e5b4 != (code *)0x0) && ((local_1464 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040f250)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_03,uStack_141c);
  }
  pcVar1 = DAT_0040e57c;
  uStack_141c = (undefined4)lVar5;
  if (-1 < local_1460) {
    FUN_00404d8b();
    goto LAB_0040640f;
  }
  if (DAT_0040e584 == '\0') {
    if (DAT_0040e57c == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      uVar2 = (uint)(BVar3 != 0);
      uVar4 = extraout_EDX_04;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040f250)();
      uVar6 = (*pcVar1)();
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar2 = (uint)uVar6 & 0xff;
    }
    lVar5 = CONCAT44(uVar4,uStack_141c);
    if (uVar2 != 0) goto LAB_00406343;
LAB_0040634a:
    pcVar1 = DAT_0040e588;
    uStack_141c = (undefined4)lVar5;
    if ((DAT_0040e588 != (code *)0x0) && (DAT_0040e598 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040f250)(&local_1468,0,0);
      (*pcVar1)();
      lVar5 = CONCAT44(extraout_EDX_05,uStack_141c);
    }
  }
  else {
LAB_00406343:
    pcVar1 = DAT_0040e588;
    uStack_141c = (undefined4)lVar5;
    if ((local_1464 & 2) != 0) goto LAB_0040634a;
    if ((DAT_0040e588 != (code *)0x0) && (DAT_0040e598 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040f250)(&local_1468,local_1010,0x800);
      (*pcVar1)();
    }
    if (local_1010[0] == L'\0') {
      FUN_00404153(local_1010,0x800,(int)&local_1468);
    }
    OutputDebugStringW(local_1010);
    lVar5 = CONCAT44(extraout_EDX_06,uStack_141c);
  }
  pcVar1 = DAT_0040e5b0;
  uStack_141c = (undefined4)lVar5;
  if ((((local_1464 & 4) != 0) || (DAT_0040e58c != '\0')) && (DAT_0040e5b0 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040f250)();
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_07,uStack_141c);
  }
  uStack_141c = (undefined4)lVar5;
  if ((local_1464 & 1) == 0) {
    FUN_0040acc0(local_c ^ (uint)auStack_1474,(int)((ulonglong)lVar5 >> 0x20));
    return;
  }
LAB_0040640f:
  FUN_00404bc8((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040641f */

uint FUN_0040641f(void)

{
  uint uVar1;
  uint uVar2;
  BYTE local_c [4];
  HKEY local_8;
  
  local_c[0] = '\x01';
  local_c[1] = '\0';
  local_c[2] = '\0';
  local_c[3] = '\0';
  uVar1 = RegCreateKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer",0,
                          (LPWSTR)0x0,0,2,(LPSECURITY_ATTRIBUTES)0x0,&local_8,(LPDWORD)0x0);
  if (uVar1 == 0) {
    uVar1 = RegSetValueExW(local_8,L"NoLowDiskSpaceChecks",0,4,local_c,4);
    if (local_8 != (HKEY)0x80000001) {
      RegCloseKey(local_8);
    }
  }
  uVar2 = uVar1 & 0xffff | 0x80070000;
  if ((int)uVar1 < 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Function: FUN_00406495 */

void __fastcall FUN_00406495(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004015c4;
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_0040a702();
  }
  FUN_0040734b((IElementListener *)(param_1 + 2));
  FUN_00406e4f(param_1 + 1);
  return;
}



/* Function: FUN_004064d0 */

void FUN_004064d0(void)

{
  return;
}



/* Function: FUN_004064e0 */

undefined1 FUN_004064e0(void)

{
  return 1;
}



/* Function: FUN_004064f0 */

void FUN_004064f0(void)

{
  return;
}



/* Function: FUN_00406500 */

void FUN_00406500(void)

{
  return;
}



/* Function: FUN_00406509 */

int FUN_00406509(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_10 [3];
  
  puVar1 = param_3;
  local_10[1] = 0;
  *param_3 = 0;
  local_10[2] = 0;
  iVar3 = FUN_0040705d(local_10 + 2,local_10,local_10 + 1,&param_1,&param_2);
  iVar2 = local_10[2];
  if (-1 < iVar3) {
    local_10[2] = 0;
    *puVar1 = iVar2;
  }
  FUN_004057c1(local_10 + 2);
  return iVar3;
}



/* Function: FUN_00406560 */

undefined4 * __fastcall FUN_00406560(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_0040e650;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_00401574;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_0040f250)(piVar2);
    (*pcVar1)();
  }
  *param_1 = &PTR_FUN_00401590;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



/* Function: FUN_004065b0 */

int FUN_004065b0(int param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  LPVOID pv;
  LPVOID local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *param_2 = 0;
  psVar2 = *(short **)(param_1 + 0x14);
  if (psVar2 == (short *)0x0) {
    iVar3 = -0x7ff8fb70;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x18);
    local_10 = (LPVOID)0x0;
    local_c = 0;
    local_8 = 0;
    if (piVar5 == (int *)0xffffffff) {
      psVar4 = psVar2;
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
      } while (sVar1 != 0);
      piVar5 = (int *)((int)psVar4 - (int)(psVar2 + 1) >> 1);
    }
    iVar3 = FUN_00406e72(&local_10,psVar2,piVar5);
    pv = local_10;
    if (-1 < iVar3) {
      *param_2 = local_10;
      pv = (LPVOID)0x0;
    }
    if (pv != (LPVOID)0x0) {
      CoTaskMemFree(pv);
    }
  }
  return iVar3;
}



/* Function: FUN_00406630 */

undefined4 FUN_00406630(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}



/* Function: FUN_00406650 */

undefined4 FUN_00406650(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_0040f250)(piVar1);
    (*pcVar2)();
  }
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}



/* Function: FUN_00406690 */

void * __thiscall FUN_00406690(void *this,byte param_1)

{
  FUN_004066b8((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Function: FUN_004066b8 */

void __fastcall FUN_004066b8(int param_1)

{
  FUN_00406e2a((int *)(param_1 + 0x14));
  FUN_004057c1((int *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 8) = 0xc0000001;
  return;
}



/* Function: FUN_004066e0 */

void __thiscall FUN_004066e0(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)DirectUI::TouchButton::Click();
  if (*(int *)(param_2 + 4) == *piVar1) {
    FUN_0040641f();
    FUN_0040685f();
    FUN_004067fa((IElementListener *)this);
    *(undefined1 *)(param_2 + 8) = 1;
  }
  return;
}



/* Function: FUN_00406722 */

HRESULT __fastcall FUN_00406722(void *param_1)

{
  HRESULT HVar1;
  BOOL BVar2;
  MSG local_20;
  
  HVar1 = FUN_004069f0(param_1);
  if (-1 < HVar1) {
    while (BVar2 = GetMessageW(&local_20,(HWND)0x0,0,0), 0 < BVar2) {
      TranslateMessage(&local_20);
      DispatchMessageW(&local_20);
    }
  }
  return HVar1;
}



/* Function: FUN_00406770 */

undefined4 __fastcall FUN_00406770(IElementListener *param_1)

{
  FUN_004067fa(param_1);
  FUN_0040685f();
  return 0;
}



/* Function: FUN_00406790 */

undefined4 __fastcall FUN_00406790(IElementListener *param_1)

{
  int iVar1;
  HRESULT HVar2;
  IElementListener *local_c;
  IElementListener *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_004067fa(param_1);
  local_8 = (IElementListener *)0x0;
  HVar2 = CoCreateInstance((IID *)&DAT_004018d4,(LPUNKNOWN)0x0,1,(IID *)&DAT_004026fc,&local_8);
  if (-1 < HVar2) {
    iVar1 = *(int *)local_8;
    (*(code *)PTR_guard_check_icall_0040f250)
              (local_8,
               L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel"
               ,L"page=SettingsPageStorageSenseStorageOverview",0,&local_c);
    (**(code **)(iVar1 + 0xc))();
  }
  FUN_0040685f();
  FUN_004057c1((int *)&local_8);
  return 0;
}



/* Function: FUN_004067fa */

void __fastcall FUN_004067fa(IElementListener *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x94);
    (*(code *)PTR_guard_check_icall_0040f250)(piVar1);
    (*pcVar2)();
    FUN_00406e4f((int *)(param_1 + 4));
  }
  if (*(Element **)(param_1 + 0xc) != (Element *)0x0) {
    DirectUI::Element::RemoveListener(*(Element **)(param_1 + 0xc),param_1);
    if (*(Element **)(param_1 + 0xc) != (Element *)0x0) {
      DirectUI::Element::Destroy(*(Element **)(param_1 + 0xc),true);
    }
    if (*(Element **)(param_1 + 0xc) != (Element *)0x0) {
      DirectUI::Element::RemoveListener(*(Element **)(param_1 + 0xc),param_1 + 8);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}



/* Function: FUN_0040685f */

void FUN_0040685f(void)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 1;
  WinSqmAddToStream(0,0x31e8,1,&local_10);
  return;
}



/* Function: FUN_00406890 */

int __thiscall FUN_00406890(void *this,int *param_1)

{
  code *pcVar1;
  Element *this_00;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ushort *local_18;
  undefined4 local_14;
  undefined4 local_10;
  ulong local_c;
  Element *local_8;
  
  iVar2 = FUN_0040a61b();
  if (iVar2 < 0) {
    return iVar2;
  }
  *(undefined1 *)((int)this + 0x10) = 1;
  iVar2 = RegisterPVLBehaviorFactory();
  if (iVar2 < 0) {
    return iVar2;
  }
  local_8 = (Element *)0x0;
  local_c = 0;
  puVar3 = (undefined4 *)FUN_0040a78d();
  if ((puVar3 == (undefined4 *)0x0) || ((DUIXmlParser *)*puVar3 == (DUIXmlParser *)0x0)) {
    return -0x7fffbffb;
  }
  lVar4 = DirectUI::DUIXmlParser::CreateElement
                    ((DUIXmlParser *)*puVar3,(ushort *)L"LowStorageNotificationsDialog",
                     (Element *)0x0,(Element *)0x0,&local_c,&local_8);
  if (lVar4 < 0) {
    return lVar4;
  }
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_18 = (ushort *)0x0;
  iVar2 = FUN_0040987b(DAT_0040e654,0x71,&local_18);
  if ((iVar2 < 0) || (iVar2 = FUN_0040a575(local_8,local_18,DAT_0040e654), iVar2 < 0))
  goto LAB_004069cb;
  DirectUI::Element::EndDefer(local_8,local_c);
  this_00 = local_8;
  if (*(Element **)((int)this + 0xc) != (Element *)0x0) {
    DirectUI::Element::RemoveListener
              (*(Element **)((int)this + 0xc),(IElementListener *)((int)this + 8));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  iVar2 = -0x7ff8ffa9;
  if (this_00 == (Element *)0x0) {
LAB_00406987:
    if ((-1 < iVar2) &&
       (iVar2 = DirectUI::Element::AddListener
                          (*(Element **)((int)this + 0xc),(IElementListener *)this), -1 < iVar2)) {
      pcVar1 = *(code **)(*param_1 + 0xb0);
      (*(code *)PTR_guard_check_icall_0040f250)(param_1,*(undefined4 *)((int)this + 0xc));
      iVar2 = (*pcVar1)();
      if (-1 < iVar2) goto LAB_004069cb;
    }
  }
  else {
    *(Element **)((int)this + 0xc) = this_00;
    iVar2 = DirectUI::Element::AddListener(this_00,(IElementListener *)((int)this + 8));
    if (-1 < iVar2) goto LAB_00406987;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  DirectUI::Element::Destroy(local_8,false);
  local_8 = (Element *)0x0;
LAB_004069cb:
  if (local_18 != (ushort *)0x0) {
    CoTaskMemFree(local_18);
  }
  return iVar2;
}



/* Function: FUN_004069f0 */

HRESULT __fastcall FUN_004069f0(void *param_1)

{
  code *pcVar1;
  HMODULE pHVar2;
  LPVOID pv;
  int *piVar3;
  HRESULT HVar4;
  int *piVar5;
  LPVOID local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = param_1;
  HVar4 = CoCreateInstance((IID *)&DAT_004018c4,(LPUNKNOWN)0x0,1,(IID *)&DAT_004026ec,&local_8);
  if (-1 < HVar4) {
    pcVar1 = *(code **)(*local_8 + 0xc);
    (*(code *)PTR_guard_check_icall_0040f250)(local_8,1);
    (*pcVar1)();
    piVar3 = local_8;
    piVar5 = (int *)((int)param_1 + 4);
    pcVar1 = *(code **)(*local_8 + 0x28);
    FUN_00406e4f(piVar5);
    (*(code *)PTR_guard_check_icall_0040f250)(piVar3,piVar5);
    HVar4 = (*pcVar1)();
    if (-1 < HVar4) {
      local_20 = (LPVOID)0x0;
      local_1c = -1;
      local_18 = -1;
      HVar4 = FUN_0040987b(DAT_0040e654,0x70,&local_20);
      pv = local_20;
      if (-1 < HVar4) {
        pcVar1 = *(code **)(*(int *)*piVar5 + 0x10);
        (*(code *)PTR_guard_check_icall_0040f250)((int *)*piVar5,local_20);
        HVar4 = (*pcVar1)();
        if ((-1 < HVar4) &&
           (HVar4 = FUN_00406890(local_c,(int *)*piVar5), pHVar2 = DAT_0040e654, -1 < HVar4)) {
          local_14 = 0;
          FUN_00406fed(&local_18,local_c,FUN_00406790);
          HVar4 = FUN_00406509(pHVar2,0x68,&local_14);
          FUN_004057c1(&local_18);
          pHVar2 = DAT_0040e654;
          if (-1 < HVar4) {
            local_10 = 0;
            FUN_00406fed(&local_c,local_c,FUN_00406770);
            HVar4 = FUN_00406509(pHVar2,0x73,&local_10);
            FUN_004057c1((int *)&local_c);
            if (-1 < HVar4) {
              local_1c = local_10;
              local_18 = local_14;
              pcVar1 = *(code **)(*(int *)*piVar5 + 0x20);
              (*(code *)PTR_guard_check_icall_0040f250)((int *)*piVar5,2,&local_1c);
              HVar4 = (*pcVar1)();
              if (-1 < HVar4) {
                pcVar1 = *(code **)(*(int *)*piVar5 + 0x88);
                (*(code *)PTR_guard_check_icall_0040f250)((int *)*piVar5);
                HVar4 = (*pcVar1)();
              }
            }
            FUN_004057c1(&local_10);
          }
          FUN_004057c1(&local_14);
        }
      }
      if (pv != (LPVOID)0x0) {
        CoTaskMemFree(pv);
      }
    }
  }
  FUN_004057c1((int *)&local_8);
  return HVar4;
}



/* Function: FUN_00406b9c */

HRESULT FUN_00406b9c(undefined4 param_1)

{
  HRESULT HVar1;
  HANDLE hObject;
  DWORD DVar2;
  undefined4 *local_8;
  
  DAT_0040e654 = param_1;
  HVar1 = CoInitializeEx((LPVOID)0x0,2);
  if (-1 < HVar1) {
    hObject = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,L"CloudNotifications");
    if (hObject != (HANDLE)0x0) {
      DVar2 = GetLastError();
      if (DVar2 == 0xb7) {
        CloseHandle(hObject);
      }
      else {
        local_8 = (undefined4 *)FUN_0040adbc(0x14);
        if (local_8 == (undefined4 *)0x0) {
          local_8 = (undefined4 *)0x0;
        }
        else {
          *local_8 = &PTR_FUN_004015c4;
          local_8[1] = 0;
          local_8[3] = 0;
          local_8[2] = &PTR_FUN_004015ac;
          *(undefined1 *)(local_8 + 4) = 0;
        }
        HVar1 = -0x7ff8fff2;
        if (local_8 != (undefined4 *)0x0) {
          HVar1 = 0;
          FUN_00406722(local_8);
        }
        CloseHandle(hObject);
        FUN_00406c53(&local_8);
      }
    }
    CoUninitialize();
  }
  return HVar1;
}



/* Function: FUN_00406c53 */

void __fastcall FUN_00406c53(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00406495(puVar1);
    operator_delete(puVar1);
  }
  return;
}



/* Function: FUN_00406c76 */

int __thiscall FUN_00406c76(void *this,HMODULE param_1,uint param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = -0x7fffbffb;
  hResInfo = FindResourceExW(param_1,(LPCWSTR)0x6,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),0);
  if (((hResInfo != (HRSRC)0x0) &&
      (hResData = LoadResource(param_1,hResInfo), hResData != (HGLOBAL)0x0)) &&
     (puVar1 = (ushort *)LockResource(hResData), puVar1 != (ushort *)0x0)) {
    for (uVar3 = param_2 & 0xf; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar1 = puVar1 + *puVar1 + 1;
    }
    puVar2 = &DAT_0040270c;
    if (*puVar1 != 0) {
      puVar2 = puVar1 + 1;
    }
    iVar4 = FUN_00406e72(this,(short *)puVar2,(int *)(uint)*puVar1);
  }
  return iVar4;
}



/* Function: FUN_00406d00 */

int FUN_00406d00(int *param_1)

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
      pcVar3 = *(code **)(*param_1 + 0x18);
      (*(code *)PTR_guard_check_icall_0040f250)(1);
      (*pcVar3)();
    }
    if (DAT_0040e650 != (int *)0x0) {
      pcVar3 = *(code **)(*DAT_0040e650 + 8);
      (*(code *)PTR_guard_check_icall_0040f250)(DAT_0040e650);
      (*pcVar3)();
    }
  }
  return iVar2 + -1;
}



/* Function: FUN_00406d70 */

void FUN_00406d70(int param_1)

{
  FUN_0040731b((int *)(param_1 + 8));
  return;
}



/* Function: FUN_00406d90 */

undefined4 FUN_00406d90(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00407276(param_2,(int *)&DAT_004026dc);
  if (iVar1 == 0) {
    iVar1 = FUN_00407276(extraout_ECX,(int *)&DAT_004026cc);
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
  (*(code *)PTR_guard_check_icall_0040f250)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_00406e00 */

void * __thiscall FUN_00406e00(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Function: FUN_00406e2a */

void __fastcall FUN_00406e2a(int *param_1)

{
  if (*param_1 != 0) {
    CoTaskMemFree((LPVOID)*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Function: FUN_00406e4f */

void __fastcall FUN_00406e4f(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040f250)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00406e72 */

int __thiscall FUN_00406e72(void *this,short *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  int *piVar5;
  bool bVar6;
  
  iVar2 = 0;
  if (param_1 == (short *)0x0) {
    FUN_00406e2a((int *)this);
  }
  else {
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    piVar3 = (int *)((int)psVar4 - (int)(param_1 + 1) >> 1);
    piVar5 = piVar3;
    if ((param_2 != (int *)0xffffffff) &&
       (bVar6 = piVar3 <= param_2, piVar3 = param_2, piVar5 = param_2, bVar6)) {
      psVar4 = param_1;
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
      } while (sVar1 != 0);
      piVar3 = (int *)((int)psVar4 - (int)(param_1 + 1) >> 1);
    }
    iVar2 = FUN_00406ef9(this,piVar5);
    if (-1 < iVar2) {
                    /* WARNING: Load size is inaccurate */
      FUN_004072a1(*this,(int)piVar5 + 1,(int)param_1,(uint)piVar3);
      *(int **)((int)this + 4) = piVar3;
    }
  }
  return iVar2;
}



/* Function: FUN_00406ef9 */

int __thiscall FUN_00406ef9(void *this,int *param_1)

{
  short *psVar1;
  short sVar2;
  undefined2 *puVar3;
  LPVOID pvVar4;
  short *psVar5;
  int iVar6;
  int *this_00;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)((int)param_1 + 1);
  if (local_8 < param_1) {
    return -0x7ff8fdea;
  }
  this_00 = *(int **)((int)this + 8);
  if (this_00 == (int *)0xffffffff) {
    iVar6 = *(int *)((int)this + 4);
    if (iVar6 == -1) {
                    /* WARNING: Load size is inaccurate */
      psVar5 = *this;
      if (psVar5 == (short *)0x0) {
        iVar6 = 0;
      }
      else {
        psVar1 = psVar5 + 1;
        do {
          sVar2 = *psVar5;
          psVar5 = psVar5 + 1;
        } while (sVar2 != 0);
        iVar6 = (int)psVar5 - (int)psVar1 >> 1;
      }
      *(int *)((int)this + 4) = iVar6;
    }
    this_00 = (int *)(iVar6 + 1);
                    /* WARNING: Load size is inaccurate */
    if (*this == 0) {
      this_00 = (int *)0x0;
    }
    *(int **)((int)this + 8) = this_00;
  }
  local_c = (int *)this;
  if (this_00 == (int *)0x0) {
    iVar6 = FUN_00407383(local_8,&local_c);
    if (iVar6 < 0) {
      return iVar6;
    }
    puVar3 = (undefined2 *)CoTaskMemAlloc((SIZE_T)local_c);
    if (puVar3 != (undefined2 *)0x0) {
      *(int **)((int)this + 8) = local_8;
      *(undefined2 **)this = puVar3;
      *puVar3 = 0;
      return iVar6;
    }
  }
  else {
    if (local_8 <= this_00) {
      return 0;
    }
    iVar6 = FUN_00407383(this_00,&local_c);
    if (iVar6 < 0) {
      return iVar6;
    }
    if (0x800 < (uint)((int)local_c - (int)this_00)) {
      local_c = this_00 + 0x200;
    }
    if (local_c < local_8) {
      local_c = local_8;
    }
                    /* WARNING: Load size is inaccurate */
    pvVar4 = CoTaskMemRealloc(*this,(int)local_c * 2);
    if (pvVar4 != (LPVOID)0x0) {
      *(int **)((int)this + 8) = local_c;
      *(LPVOID *)this = pvVar4;
      return iVar6;
    }
  }
  return -0x7ff8fff2;
}



/* Function: FUN_00406fed */

undefined4 * __fastcall FUN_00406fed(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_0040adbc(0x14);
  piVar2 = DAT_0040e650;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_0040154c;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0040f250)(piVar2);
      (*pcVar1)();
    }
    puVar3[3] = param_2;
    puVar3[4] = param_3;
    *puVar3 = &PTR_FUN_00401560;
  }
  *param_1 = puVar3;
  return param_1;
}



/* Function: FUN_0040705d */

int __fastcall
FUN_0040705d(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  HMODULE local_c;
  uint local_8;
  
  *param_1 = 0;
  local_14 = param_1;
  puVar3 = (undefined4 *)FUN_0040adbc(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  else {
    puVar3 = FUN_00406560(puVar3);
    piVar1 = (int *)*param_2;
    uVar5 = *param_5;
    local_c = (HMODULE)*param_4;
    local_10 = *param_3;
    local_18 = puVar3;
    local_8 = uVar5;
    if ((int *)puVar3[3] != piVar1) {
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        (*(code *)PTR_guard_check_icall_0040f250)(piVar1);
        (*pcVar2)();
        uVar5 = local_8;
      }
      local_8 = puVar3[3];
      puVar3[3] = piVar1;
      FUN_004057c1((int *)&local_8);
    }
    puVar3[4] = local_10;
    iVar4 = FUN_00406c76(puVar3 + 5,local_c,uVar5);
    if (-1 < iVar4) {
      pcVar2 = *(code **)*puVar3;
      (*(code *)PTR_guard_check_icall_0040f250)(puVar3,&DAT_004026cc,local_14);
      iVar4 = (*pcVar2)();
    }
    FUN_004057c1((int *)&local_18);
  }
  return iVar4;
}



/* Function: FUN_00407130 */

int FUN_00407130(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_0040f250)(param_2,param_3);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    FUN_00407244(iVar2);
  }
  return iVar2;
}



/* Function: FUN_00407170 */

int FUN_00407170(int *param_1)

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
      (*(code *)PTR_guard_check_icall_0040f250)(1);
      (*pcVar3)();
    }
    if (DAT_0040e650 != (int *)0x0) {
      pcVar3 = *(code **)(*DAT_0040e650 + 8);
      (*(code *)PTR_guard_check_icall_0040f250)(DAT_0040e650);
      (*pcVar3)();
    }
  }
  return iVar2 + -1;
}



/* Function: FUN_004071e0 */

undefined4 FUN_004071e0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00407276(param_2,(int *)&DAT_004026dc);
  if (iVar1 == 0) {
    iVar1 = FUN_00407276(extraout_ECX,(int *)&DAT_004026bc);
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
  (*(code *)PTR_guard_check_icall_0040f250)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_00407244 */

void __fastcall FUN_00407244(undefined4 param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = RoGetMatchingRestrictedErrorInfo(param_1,&local_8);
  if (-1 < iVar1) {
    SetRestrictedErrorInfo(local_8);
  }
  FUN_004057c1(&local_8);
  return;
}



/* Function: FUN_00407276 */

undefined4 __fastcall FUN_00407276(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_004072a1 */

undefined4 __fastcall FUN_004072a1(short *param_1,uint param_2,int param_3,uint param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    if (param_2 == 0) {
      return 0x80070057;
    }
  }
  else if (param_4 < 0x7fffffff) {
    iVar3 = param_4 - param_2;
    iVar4 = param_3 - (int)param_1;
    do {
      if ((iVar3 + param_2 == 0) || (sVar1 = *(short *)(iVar4 + (int)param_1), sVar1 == 0)) break;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    psVar2 = param_1 + -1;
    if (param_2 != 0) {
      psVar2 = param_1;
    }
    *psVar2 = 0;
    if (param_2 == 0) {
      return 0x8007007a;
    }
    return 0;
  }
  *param_1 = 0;
  return 0x80070057;
}



/* Function: FUN_0040731b */

int __fastcall FUN_0040731b(int *param_1)

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



/* Function: FUN_0040734b */

void __fastcall FUN_0040734b(IElementListener *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_004015ac;
  if (*(Element **)(param_1 + 4) != (Element *)0x0) {
    DirectUI::Element::RemoveListener(*(Element **)(param_1 + 4),param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Function: FUN_00407370 */

void __fastcall FUN_00407370(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Function: FUN_00407383 */

undefined4 __thiscall FUN_00407383(void *this,undefined4 *param_1)

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



/* Function: FUN_004073b7 */

int __fastcall FUN_004073b7(short *param_1,uint param_2,short *param_3,uint param_4)

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
    psVar2 = &DAT_0040270c;
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
      iVar1 = FUN_00407473(param_1,param_2,&local_8,(int)psVar2,uVar3);
      if (((-1 < iVar1) && (1 < param_2 - local_8)) && (uVar3 = (param_2 - local_8) * 2, 2 < uVar3))
      {
        memset(param_1 + local_8 + 1,0,uVar3 - 2);
      }
    }
  }
  return iVar1;
}



/* Function: FUN_00407473 */

undefined4 __fastcall FUN_00407473(short *param_1,int param_2,int *param_3,int param_4,int param_5)

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



/* Function: FUN_004074da */

uint __fastcall FUN_004074da(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_0040e5c8;
  if (-1 < (int)param_1) {
    return 0;
  }
  if (param_1 != 0xc0000017) {
    if (DAT_0040e5c8 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040f250)(param_1);
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



/* Function: FUN_0040753a */

void __fastcall FUN_0040753a(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_00404c73(param_1,0x137b,"onecore\\internal\\sdk\\inc\\wil\\Staging.h",param_1,param_1,
               unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_00407570 */

void __thiscall FUN_00407570(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_004075e0(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_004076d9(this,param_2);
    }
  }
  return;
}



/* Function: FUN_004075ad */

void __fastcall FUN_004075ad(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_004015f0;
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



/* Function: FUN_004075e0 */

void __thiscall FUN_004075e0(void *this,undefined4 *param_1)

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
    uVar1 = FUN_004035c8(this_00,0,0x2000);
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
      FUN_0040360b((int)this_00,&DAT_00402c2a,0x1000000,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_004076d9 */

void __thiscall FUN_004076d9(void *this,undefined4 *param_1)

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
    FUN_004037c6((int)*(uint **)((int)this + 4),&DAT_00402d4d,param_1,param_1,&local_4c,&local_48,
                 &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                 &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
  }
  return;
}



/* Function: FUN_004077d0 */

undefined4 __thiscall FUN_004077d0(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_0040e1c8 != iVar1;
  iVar3 = DAT_0040e1c8;
  DAT_0040e1c8 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_0040f250)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00407810 */

undefined4 * __thiscall FUN_00407810(void *this,byte param_1)

{
  FUN_004075ad((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407838 */

undefined4 FUN_00407838(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0040e688 == (code *)0x0) &&
     (DAT_0040e688 = (code *)FUN_004055d5("NtQueryWnfStateData"), DAT_0040e688 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040e688;
  (*(code *)PTR_guard_check_icall_0040f250)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_0040788c */

undefined4 __fastcall
FUN_0040788c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0040e68c == (code *)0x0) &&
     (DAT_0040e68c = (code *)FUN_004055d5("NtUpdateWnfStateData"), DAT_0040e68c == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040e68c;
  (*(code *)PTR_guard_check_icall_0040f250)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_004078e5 */

undefined4 __fastcall FUN_004078e5(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_0040e65c == (code *)0x0) &&
     (DAT_0040e65c = (code *)FUN_004055d5("RtlNotifyFeatureUsage"), DAT_0040e65c == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040e65c;
  (*(code *)PTR_guard_check_icall_0040f250)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_00407947 */

void __fastcall FUN_00407947(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_00407993 */

undefined4 __thiscall FUN_00407993(void *this,uint param_1)

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
    _Dst = FUN_004043e7(0,_DstSize);
    if (_Dst == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    _MaxCount = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    memcpy_s(_Dst,_DstSize,*this,_MaxCount);
    FUN_00405c9b((void *)((int)this + 0xc),(int)_Dst);
    *(LPVOID *)this = _Dst;
    *(rsize_t *)((int)this + 4) = _MaxCount + (int)_Dst;
    *(SIZE_T *)((int)this + 8) = (int)_Dst + _DstSize;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_00407a1e */

undefined4 __thiscall FUN_00407a1e(void *this,uint param_1)

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
    uVar2 = FUN_00407993(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00407a54 */

undefined4 __thiscall FUN_00407a54(void *this,void *param_1,uint param_2)

{
  void *_Dst;
  undefined4 uVar1;
  errno_t eVar2;
  
  uVar1 = FUN_00407a1e(this,param_2);
  if ((char)uVar1 != '\0') {
    _Dst = *(void **)((int)this + 4);
    eVar2 = memcpy_s(_Dst,-(uint)(_Dst < *(void **)((int)this + 8)) &
                          *(int *)((int)this + 8) - (int)_Dst,param_1,param_2);
    uVar1 = CONCAT31((int3)((uint)eVar2 >> 8),1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return uVar1;
}



/* Function: FUN_00407a99 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00407a99(int *param_1)

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
  
  local_c = DAT_0040e180 ^ (uint)&local_102c;
  iVar6 = 0;
  uVar4 = 0xc;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar8 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_00407838(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_00407ba8;
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
LAB_00407ba8:
            piVar5 = piVar5 + 3;
            iVar8 = local_1024;
          } while (piVar5 != local_101c);
        }
        iVar6 = FUN_0040788c(&DAT_00402938,local_1010,uVar7,piVar2,piVar2,local_1018,1);
        uVar4 = extraout_EDX_00;
        param_1 = local_1028;
      }
      local_1024 = iVar8 + 1;
    } while (((iVar6 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_0040acc0(local_c ^ (uint)&local_102c,uVar4);
  return;
}



/* Function: FUN_00407c1e */

void FUN_00407c1e(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_0040e67c == (code *)0x0) &&
     (DAT_0040e67c = (code *)FUN_004055d5("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_0040e67c == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_0040e67c;
  (*(code *)PTR_guard_check_icall_0040f250)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407c5c */

int __thiscall FUN_00407c5c(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_00407c89 */

void __thiscall FUN_00407c89(void *this,int param_1)

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



/* Function: FUN_00407cd4 */

uint __fastcall FUN_00407cd4(ushort *param_1)

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



/* Function: FUN_00407cff */

uint __thiscall FUN_00407cff(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  undefined4 local_8;
  
  _Dst = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_00407d98;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    memcpy_s(_Dst,2,&local_8,2);
    _Dst = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)_Dst + 4);
      if (param_2 < pvVar1) goto LAB_00407d98;
      memcpy_s(_Dst,4,(void *)((int)this + 4),4);
      _Dst = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_00407d98;
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
LAB_00407d98:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_00407dc7 */

uint __thiscall FUN_00407dc7(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_00407e58;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    memcpy_s(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_00407e58;
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
    if (param_2 < puVar3) goto LAB_00407e58;
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
LAB_00407e58:
  return (uint)puVar3 & 0xffffff00;
}



/* Function: FUN_00407e72 */

undefined2 * __thiscall
FUN_00407e72(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_00407cd4(&local_18);
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



/* Function: FUN_00407ef0 */

void __thiscall FUN_00407ef0(void *this,int param_1)

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
  FUN_00405c9b(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_00405c9b((void *)(param_1 + 0x1c),local_8);
  FUN_00405c17(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_00407f79 */

void __thiscall FUN_00407f79(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_0040753a(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_0040801c;
  }
  if (9 < param_2) {
    return;
  }
LAB_0040801c:
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



/* Function: FUN_00408064 */

undefined4 __thiscall FUN_00408064(void *this,int param_1)

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
  uVar3 = FUN_00407dc7(&local_44,&local_14,*(ushort **)((int)this + 0x14));
  cVar2 = (char)uVar3;
  do {
    if (cVar2 == '\0') {
      uVar5 = FUN_00409fad(param_1);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    uVar3 = 0;
    if (local_40 != 0) {
      do {
        uVar4 = FUN_00407dc7(&local_58,&local_14,*(ushort **)((int)this + 0x14));
        if ((char)uVar4 == '\0') break;
        local_18 = local_54;
        local_1c = (uint)local_50;
        local_20 = local_48;
        local_24 = (uint)local_3c;
        local_28 = local_34;
        local_2c = *(int **)(param_1 + 0x40);
        if (local_2c == (int *)0x0) {
          FUN_00404d8b();
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        pcVar1 = *(code **)(*local_2c + 0x10);
        (*(code *)PTR_guard_check_icall_0040f250)(&local_28,&local_24,&local_20,&local_1c,&local_18)
        ;
        cVar2 = (*pcVar1)();
        if (cVar2 == '\0') {
          uVar3 = FUN_00409fad(param_1);
          return uVar3 & 0xffffff00;
        }
        uVar3 = uVar3 + 1;
        this = local_30;
      } while (uVar3 < local_40);
    }
    uVar3 = FUN_00407dc7(&local_44,&local_14,*(ushort **)((int)this + 0x14));
    cVar2 = (char)uVar3;
  } while( true );
}



/* Function: FUN_004081a1 */

undefined4 __thiscall
FUN_004081a1(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_004084ad(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_00407a1e(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_00407f79(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_00405c9b((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_00405c17(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_00407a1e((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_004084ad(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00408259 */

uint __thiscall FUN_00408259(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_00407dc7(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_00407c5c(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_004082e4 */

uint __thiscall
FUN_004082e4(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_00407dc7(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_00407c89(param_1,local_c);
          uVar1 = local_14;
          goto LAB_004083da;
        }
        local_14 = FUN_00407c5c(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_004083da;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00407c89(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_00408259(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_00407dc7(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_00407c5c(&local_28,param_3,param_4);
LAB_004083da:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_00407c89(&local_28,local_24 + param_5);
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



/* Function: FUN_0040841a */

uint __thiscall FUN_0040841a(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_00407dc7(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_00407c89(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00407c89(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_004084ad */

uint __thiscall
FUN_004084ad(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar3 = FUN_00407dc7(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar3 == '\0') break;
      iVar2 = FUN_00407c5c(&local_24,param_1,param_2);
      if (iVar2 < 0) {
LAB_0040860b:
        local_c = pvVar4;
        if ((char)uVar3 != '\0') goto LAB_00408538;
        break;
      }
      if (iVar2 == 0) {
        pvVar4 = (void *)FUN_004082e4(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          bVar1 = true;
          local_5 = '\x01';
          goto LAB_0040860b;
        }
        goto LAB_004085fd;
      }
      pvVar4 = (void *)FUN_0040841a(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_00408538:
    pvVar4 = local_c;
    local_10 = 0;
    if (!bVar1) {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      local_10 = FUN_00407cd4(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    uVar3 = FUN_00407cd4(&local_38);
    in_EAX = *(uint *)((int)this + 0x18);
    uVar3 = uVar3 + local_10;
    if (uVar3 <= (-(uint)(*(uint *)((int)this + 0x14) < in_EAX) &
                 in_EAX - *(int *)((int)this + 0x14))) {
      memmove_s((void *)(uVar3 + (int)pvVar4),(in_EAX - uVar3) - (int)pvVar4,pvVar4,
                *(int *)((int)this + 0x14) - (int)pvVar4);
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + uVar3);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_00407cff(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_00407c89(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_00407cff(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_004085fd:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_0040864f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040864f(uint param_1,int param_2,undefined2 *param_3)

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
  
  local_14 = DAT_0040e180 ^ (uint)&stack0xfffffff0;
  local_1028 = 0;
  local_1034 = 0;
  local_1038 = param_3;
  local_103c = param_1 + param_2 * 8;
  local_1024 = param_1;
  while( true ) {
    FUN_00407e72(local_106c,*local_1038,local_1038[1],*(undefined1 *)(local_1038 + 2),local_1038[3],
                 *(undefined1 *)(local_1038 + 4));
    local_1020 = 0x1000;
    uVar2 = FUN_00407838(extraout_ECX,&local_102c,local_1018,&local_1020);
    FUN_004074da(uVar2);
    if (uVar2 != 0) {
      local_102c = 0;
      local_1020 = 0;
    }
    FUN_00407f79(local_106c,local_1018,local_1020,0x1000);
    if (local_104b != '\0') break;
    local_10ac = &local_1030;
    local_1030 = 0;
    puStack_10a8 = &local_1034;
    local_10b0 = &PTR_FUN_00401600;
    puStack_10a4 = local_106c;
    local_1078 = &local_10b0;
    local_1048 = local_10ac;
    local_1044 = puStack_10a8;
    local_1040 = puStack_10a4;
    uVar3 = FUN_00408064(local_1038,(int)local_10b8);
    uVar2 = local_1024;
    local_1019 = (char)uVar3;
    if (local_104c == '\0') {
LAB_0040880a:
      uVar2 = uVar2 + 8;
      local_1034 = local_1030;
      local_1024 = uVar2;
    }
    else {
      iVar4 = local_1058 - local_105c;
      iVar4 = FUN_0040788c(local_1024,local_105c,iVar4,iVar4,iVar4,local_102c,1);
      if (iVar4 != -0x3fffffff) {
        if (iVar4 != 0) {
          FUN_0040788c(uVar2,local_105c,local_1058 - local_105c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_0040880a;
      }
      local_1028 = local_1028 + 1;
      local_1019 = '\0';
    }
    uVar1 = local_1028;
    FUN_00405c17(&local_1050);
    uVar3 = extraout_EDX;
    if (((local_1019 != '\0') || (local_103c <= uVar2)) || (0x31 < uVar1)) goto LAB_0040885d;
  }
  FUN_00405c17(&local_1050);
  uVar3 = extraout_EDX_00;
LAB_0040885d:
  FUN_0040acc0(local_14 ^ (uint)&stack0xfffffff0,uVar3);
  return;
}



/* Function: FUN_00408878 */

void * __fastcall FUN_00408878(void *param_1)

{
  FUN_00407e72(param_1,0,4,1,4,0);
  FUN_00407e72((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_00407e72((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_004088ba */

void __fastcall FUN_004088ba(undefined2 *param_1,undefined4 param_2)

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
  
  local_c = DAT_0040e180 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_0040290c;
    local_3c = DAT_00402908;
    local_30 = DAT_004028fc;
    local_34 = DAT_004028f8;
    local_28 = DAT_0040292c;
    local_2c = DAT_00402928;
    FUN_0040864f((uint)&local_3c,3,param_1);
    param_2 = extraout_EDX;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00402930;
    local_34 = DAT_004028e0;
    local_38 = DAT_00402934;
    local_2c = DAT_00402900;
    local_30 = DAT_004028e4;
    local_28 = DAT_00402904;
    FUN_0040864f((uint)&local_3c,3,param_1 + 0x12);
    param_2 = extraout_EDX_00;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00402920;
    local_34 = DAT_004028d8;
    local_38 = DAT_00402924;
    local_2c = DAT_00402910;
    local_30 = DAT_004028dc;
    local_24 = DAT_004028e8;
    local_28 = DAT_00402914;
    local_1c = DAT_004028f0;
    local_20 = DAT_004028ec;
    local_14 = DAT_00402918;
    local_18 = DAT_004028f4;
    local_10 = DAT_0040291c;
    FUN_0040864f((uint)&local_3c,6,param_1 + 0x24);
    param_2 = extraout_EDX_01;
  }
  FUN_0040acc0(local_c ^ (uint)&local_3c,param_2);
  return;
}



/* Function: FUN_00408a10 */

void __thiscall FUN_00408a10(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_00407a54(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_00408a87 */

void __thiscall FUN_00408a87(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_00408ae6 */

void __thiscall FUN_00408ae6(void *this,PSRWLOCK param_1)

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
            goto LAB_00408b6b;
          }
        } while (uVar3 < uVar2);
      }
      local_14 = 0;
LAB_00408b6b:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_10 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0040f250)(local_14);
        (*local_10)();
      }
      if (this != (void *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
    } while (uVar3 < uVar2);
  }
  return;
}



/* Function: FUN_00408bb9 */

void __fastcall FUN_00408bb9(void *param_1)

{
  FUN_00408be6(param_1);
  FUN_00405c17((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_00408d77((int)param_1 + 4);
  return;
}



/* Function: FUN_00408be6 */

void __fastcall FUN_00408be6(void *param_1)

{
  undefined4 extraout_EDX;
  undefined2 local_70 [54];
  
  FUN_00408878(local_70);
  FUN_00408d2a(param_1,local_70);
  FUN_004088ba(local_70,extraout_EDX);
  FUN_00408d77((int)local_70);
  return;
}



/* Function: FUN_00408c1d */

undefined1 __thiscall FUN_00408c1d(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_00409b6c((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_00409b49((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_00408c76 */

undefined1 __thiscall FUN_00408c76(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_00408ce1((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_00408c1d(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00408ce1 */

void __fastcall FUN_00408ce1(PSRWLOCK param_1)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar1;
  undefined2 local_70 [54];
  
  FUN_00408878(local_70);
  AcquireSRWLockExclusive(param_1);
  FUN_00408d2a(param_1,local_70);
  uVar1 = extraout_EDX;
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
    uVar1 = extraout_EDX_00;
  }
  FUN_004088ba(local_70,uVar1);
  FUN_00408d77((int)local_70);
  return;
}



/* Function: FUN_00408d2a */

void __thiscall FUN_00408d2a(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_00407ef0(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_00407ef0((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_00407ef0((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_00408d77 */

void __fastcall FUN_00408d77(int param_1)

{
  FUN_00405c17((int *)(param_1 + 100));
  FUN_00405c17((int *)(param_1 + 0x40));
  FUN_00405c17((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_00408e35 */

void __thiscall FUN_00408e35(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((((*this != '\0') && (bVar1 = FUN_00408fe6((int)this), bVar1)) &&
      (cVar2 = FUN_00408c76(*(void **)((int)this + 0xc),param_1,param_2,param_3), cVar2 != '\0')) &&
     (cVar2 = FUN_00404906(), cVar2 == '\0')) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    FUN_00409073(this);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00408e92 */

void __thiscall FUN_00408e92(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_00404906(), cVar1 == '\0')) &&
     (bVar2 = FUN_00408fe6((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_00408a10(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x4091d0,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_00408a10((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00408f32 */

void __fastcall FUN_00408f32(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00404906();
  if (cVar1 == '\0') {
    bVar2 = FUN_00408fe6(param_1);
    if (bVar2) {
      FUN_00408ae6(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_00408ce1(*(PSRWLOCK *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



/* Function: FUN_00408f68 */

void __fastcall
FUN_00408f68(char *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  if ((*param_1 != '\0') && (cVar1 = FUN_00404906(), param_2 = extraout_EDX, cVar1 == '\0')) {
    SRWLock = (PSRWLOCK)(param_1 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    local_e = 0;
    local_14 = param_3;
    local_10 = param_4;
    local_c = param_5;
    FUN_00407a54(param_1 + 0x7c,&local_14,0xc);
    FUN_004090d4(param_1);
    param_2 = extraout_EDX_00;
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
      param_2 = extraout_EDX_01;
    }
  }
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00408fe6 */

bool __fastcall FUN_00408fe6(int param_1)

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
        iVar1 = FUN_00409bc5(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_00409073 */

void __fastcall FUN_00409073(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00409fe0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00409b8e(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00407947(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_004090d4 */

void __fastcall FUN_004090d4(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040a020,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00409b8e(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00407947(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_00409140 */

void FUN_00409140(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00408ae6(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00409163 */

bool __fastcall FUN_00409163(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_0040e678;
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0x4c);
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_004055d5("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_0040e678 = pcVar2, pcVar2 == (code *)0x0)) {
      iVar3 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040f250)(FUN_00409140,param_1,0,piVar1);
      iVar3 = (*pcVar2)();
    }
  }
  return iVar3 == 0;
}



/* Function: FUN_004091d0 */

void FUN_004091d0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00408ae6(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_004091f3 */

LPCRITICAL_SECTION __fastcall FUN_004091f3(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_0040921b */

void FUN_0040921b(int param_1)

{
  if ((param_1 != 0) && (DAT_0040e6a8 != (PSRWLOCK)0x0)) {
    FUN_00408a87(DAT_0040e6a8 + 0x1c,DAT_0040e6a8,param_1);
  }
  return;
}



/* Function: FUN_00409250 */

void FUN_00409250(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_00408f32(0x40e69c);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_004078e5(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_00408e35(&DAT_0040e69c,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_00408f68(&DAT_0040e69c,param_2 >> 0x1f,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_004092d0 */

void FUN_004092d0(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_00408e92(&DAT_0040e69c,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_0040e69c != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040e6ac);
      bVar1 = FUN_00409163(0x40e69c);
      if (bVar1) {
        FUN_00408a10(&DAT_0040e6c0,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040e6ac);
    }
  }
  return;
}



/* Function: FUN_00409340 */

void FUN_00409340(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_0040e69c == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_0040e6ec;
  }
  else {
    if (DAT_0040e69c == '\0') {
      return;
    }
    this = &DAT_0040e6c0;
  }
  FUN_00408a87(this,(PSRWLOCK)&DAT_0040e6ac,param_1);
  return;
}



/* Function: FUN_00409384 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00409384(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040e660,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_0040e660;
    local_8 = &DAT_0040e664;
    _DAT_0040e668 = 0;
    DAT_0040e66c = 0;
    _DAT_0040e670 = 0;
    _DAT_0040e664 = &PTR_FUN_004015f0;
    _DAT_0040e674 = &DAT_0040e010;
    FUN_0040ad7f(FUN_00409410);
    local_10 = 0;
    FUN_00409d8e((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00409410 */

void FUN_00409410(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040e660,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_0040f250)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00409458 */

void __fastcall FUN_00409458(int *param_1)

{
  PREGHANDLE RegHandle;
  PVOID CallbackContext;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  undefined4 extraout_EDX;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
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
  UVar3 = EventRegister(&local_18,FUN_004034b0,CallbackContext,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)CallbackContext + 0x1c),2,
                        *(undefined2 **)((int)CallbackContext + 4),
                        **(undefined2 **)((int)CallbackContext + 4));
  }
  param_1[3] = 1;
  pcVar2 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_0040f250)();
  (*pcVar2)();
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00409500 */

void FUN_00409500(uint param_1,ushort *param_2,undefined4 *param_3,int param_4,uint *param_5,
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
  
  puVar2 = FUN_00409384();
  if ((*(int **)(puVar2 + 4) != (int *)0x0) && (**(int **)(puVar2 + 4) != 0)) {
    if (param_5 == (uint *)0x0) {
      if (param_6 == (uint *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          puVar2 = FUN_00409384();
          puVar1 = *(uint **)(puVar2 + 4);
          if (2 < *puVar1) {
            uVar3 = FUN_004035c8(puVar1,1,0);
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
              FUN_00403b36((int)puVar1,&DAT_00402f0b,param_2,param_2,local_c,&local_10,&local_44,
                           &local_48,&local_14,&local_18,&local_4e,&local_1c,&local_20,&local_24,
                           &local_4c,&local_28,&local_2c,&local_30,&local_40,&local_3c,&local_38,
                           &local_34);
            }
          }
        }
      }
      else {
        puVar2 = FUN_00409384();
        puVar1 = *(uint **)(puVar2 + 4);
        if (5 < *puVar1) {
          uVar3 = FUN_004035c8(puVar1,4,0);
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
            FUN_00403a6e((int)puVar1,&DAT_00402e83,param_2,param_2,&local_34,&local_40,&local_44,
                         &local_48,&local_4c,&local_3c,&local_4e,&local_38);
          }
        }
      }
    }
    else {
      puVar2 = FUN_00409384();
      if (5 < **(uint **)(puVar2 + 4)) {
        uVar3 = FUN_004035c8(*(uint **)(puVar2 + 4),2,0);
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
          FUN_004039b9(extraout_ECX,&DAT_00402bb9,extraout_ECX,extraout_ECX,&local_38,&local_3c,
                       &local_48,&local_4c,&local_4e,&local_40,&local_44);
        }
      }
      if (((param_2 != (ushort *)0x0) && ((char)param_2[2] == '\x01')) && (param_4 != 0)) {
        puVar2 = FUN_00409384();
        if (5 < **(uint **)(puVar2 + 4)) {
          uVar3 = FUN_004035c8(*(uint **)(puVar2 + 4),10,0);
          if ((char)uVar3 != '\0') {
            local_38 = param_8;
            local_3c = *param_5;
            local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
            local_40 = (uint)param_2[1];
            local_44 = (uint)*param_2;
            local_4c = param_1;
            local_4e = CONCAT11(local_4e._1_1_,1);
            FUN_004039b9(extraout_ECX_00,&DAT_0040302b,extraout_ECX_00,extraout_ECX_00,&local_4c,
                         &local_44,&local_40,&local_48,&local_4e,&local_3c,&local_38);
          }
        }
      }
    }
  }
  return;
}



/* Function: FUN_0040987b */

int __fastcall FUN_0040987b(HMODULE param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  wchar_t *_Str;
  wchar_t *pwVar2;
  wchar_t *pv;
  uint uVar3;
  int local_18;
  wchar_t *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar1 = false;
  local_14 = (wchar_t *)0x0;
  *param_3 = 0;
  local_10 = 0;
  local_c = 0;
  local_18 = FUN_00406c76(&local_14,param_1,param_2);
  _Str = local_14;
  pv = _Str;
  if (-1 < local_18) {
    uVar3 = 0;
    do {
      if (bVar1) goto LAB_004098f1;
      pwVar2 = wcsstr(_Str,*(wchar_t **)((int)&PTR_u_SKYDRIVE_BRAND_NAME_00401614 + uVar3));
      if (pwVar2 != (wchar_t *)0x0) {
        local_18 = FUN_0040990f(_Str,param_3);
        bVar1 = true;
      }
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0xc);
    if (!bVar1) {
      pv = (wchar_t *)0x0;
      *param_3 = _Str;
    }
  }
LAB_004098f1:
  if (pv != (wchar_t *)0x0) {
    CoTaskMemFree(pv);
  }
  return local_18;
}



/* Function: FUN_0040990f */

void __fastcall FUN_0040990f(undefined **param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Str;
  wchar_t *pwVar4;
  short *psVar5;
  short *psVar6;
  void *pvVar7;
  undefined4 extraout_ECX;
  undefined4 uVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  LPVOID pv;
  undefined8 uVar9;
  LPVOID local_278;
  undefined4 local_274;
  undefined4 local_270;
  LPVOID local_26c;
  undefined4 *local_268;
  int local_264;
  undefined **local_260;
  undefined1 local_25c [24];
  undefined4 local_244 [6];
  undefined4 local_22c [6];
  short local_214;
  undefined1 local_212 [522];
  uint local_8;
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  local_274 = 0xffffffff;
  local_270 = 0xffffffff;
  *param_2 = 0;
  local_278 = (LPVOID)0x0;
  local_268 = param_2;
  local_260 = param_1;
  uVar9 = Ordinal_487(L"@%SystemRoot%\\System32\\SettingSyncCore.dll,-1024",&local_214,0x104,0);
  uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
  pv = (LPVOID)0x0;
  if (-1 < (int)uVar9) {
    psVar6 = &local_214;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    pvVar7 = (void *)((int)psVar6 - (int)local_212 >> 1);
    iVar2 = FUN_0040a139(&local_214,pvVar7,pvVar7,&local_278);
    pv = local_278;
    uVar8 = extraout_EDX;
    if (-1 < iVar2) {
      FUN_0040a06f(local_25c,&local_260);
      local_26c = pv;
      FUN_0040a06f(local_22c,&local_26c);
      local_264 = 0;
      iVar3 = FUN_0040a0ac(&local_264,&local_260);
      uVar9 = CONCAT44(extraout_EDX_00,iVar3);
      uVar8 = extraout_EDX_00;
      iVar2 = local_264;
      if (-1 < iVar3) {
        local_26c = (LPVOID)0x0;
        local_260 = &PTR_u_SKYDRIVE_BRAND_NAME_00401614;
        do {
          uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
          pv = local_278;
          if ((int)uVar9 < 0) goto LAB_00409ae7;
          pwVar4 = (wchar_t *)*local_260;
          _Str = (wchar_t *)WindowsGetStringRawBuffer(iVar2,0);
          pwVar4 = wcsstr(_Str,pwVar4);
          uVar9 = CONCAT44(extraout_EDX_01,(int)uVar9);
          if (pwVar4 != (wchar_t *)0x0) {
            FUN_0040a06f(local_244,local_260);
            uVar9 = WindowsReplaceString(iVar2,local_244[0],local_22c[0],&local_264);
            iVar3 = local_264;
            if (-1 < (int)uVar9) {
              WindowsDeleteString(iVar2);
              uVar9 = CONCAT44(extraout_EDX_02,(int)uVar9);
              iVar2 = iVar3;
            }
          }
          uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
          local_26c = (LPVOID)((int)local_26c + 4);
          local_260 = local_260 + 1;
        } while (local_26c < (LPVOID)0xc);
        pv = local_278;
        if (-1 < (int)uVar9) {
          psVar5 = (short *)WindowsGetStringRawBuffer(iVar2,0);
          uVar8 = extraout_ECX;
          psVar6 = psVar5;
          do {
            sVar1 = *psVar6;
            uVar8 = CONCAT22((short)((uint)uVar8 >> 0x10),sVar1);
            psVar6 = psVar6 + 1;
          } while (sVar1 != 0);
          FUN_0040a139(psVar5,(void *)((int)psVar6 - (int)(psVar5 + 1) >> 1),uVar8,local_268);
          uVar8 = extraout_EDX_03;
          pv = local_278;
        }
      }
LAB_00409ae7:
      if (iVar2 != 0) {
        WindowsDeleteString(iVar2);
        uVar8 = extraout_EDX_04;
      }
    }
  }
  if (pv != (LPVOID)0x0) {
    CoTaskMemFree(pv);
    uVar8 = extraout_EDX_05;
  }
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,uVar8);
  return;
}



/* Function: FUN_00409b1c */

void __fastcall FUN_00409b1c(undefined1 *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  
  cVar1 = FUN_00404906();
  if (cVar1 != '\0') {
    *param_1 = 0;
    if (*(int **)(param_1 + 8) == (int *)0x0) {
      return;
    }
    FUN_00409cf4(*(int **)(param_1 + 8));
    return;
  }
  piVar3 = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_00409b8e(piVar3,0);
  FUN_00409b8e(param_1 + 0x1c,0);
  FUN_00405c17((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0040921b(*(int *)(param_1 + 0x78));
  }
  FUN_00405c17((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00407c1e(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_00405c17((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00409f1e(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*piVar3 != 0) {
    FUN_00409f1e((PTP_TIMER)*piVar3);
  }
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    cVar1 = FUN_00404906();
    if (cVar1 == '\0') {
      FUN_00405bd4(piVar3 + 1,(undefined4 *)&stack0xfffffff8);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_00405878(piVar3 + 2,0);
        FUN_00405878(piVar3 + 3,0);
        if (piVar3 != (int *)0x0) {
          DVar2 = GetLastError();
          FUN_00404dc4(piVar3);
          SetLastError(DVar2);
        }
        FUN_00409e34((int)piVar3);
        DVar2 = 0;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,DVar2,piVar3);
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        FUN_00404dc4(piVar3);
      }
    }
    else {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_00408be6(piVar3 + 4);
      }
    }
    return;
  }
  return;
}



/* Function: FUN_00409b49 */

void __thiscall FUN_00409b49(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_004081a1(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_00409b6c */

void __fastcall FUN_00409b6c(void *param_1)

{
  FUN_004081a1(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_00409b8e */

void __thiscall FUN_00409b8e(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_00409f1e(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00409bc5 */

void __fastcall FUN_00409bc5(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_0040401f(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00405878(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_004048c1(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_00409cb4;
  }
  FUN_00405bd4(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_00404def(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_00409ce2:
    FUN_00404d19(unaff_retaddr,uVar3);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_00409e5f((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_00409ce2;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00404dc4(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00404d97(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_00409cb4:
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00409cf4 */

void __fastcall FUN_00409cf4(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00404906();
  if (cVar1 == '\0') {
    FUN_00405bd4(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_00405878(param_1 + 2,0);
      FUN_00405878(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00404dc4(local_8);
        SetLastError(DVar2);
      }
      FUN_00409e34((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00404dc4(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_00408be6(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_00409d8e */

void __fastcall FUN_00409d8e(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_00409458((int *)(*param_1 + 4));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_00409dbb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409dbb(void)

{
  _DAT_0040e6a0 = "WilStaging_02";
  DAT_0040e69c = 0;
  _DAT_0040e6a4 = 0;
  DAT_0040e6a8 = 0;
  _DAT_0040e6ac = 0;
  _DAT_0040e6b0 = 0;
  _DAT_0040e6b4 = 0;
  _DAT_0040e6b8 = 0;
  _DAT_0040e6bc = 0;
  FUN_004091f3((LPCRITICAL_SECTION)&DAT_0040e6c0);
  _DAT_0040e6e8 = 0;
  FUN_004091f3((LPCRITICAL_SECTION)&DAT_0040e6ec);
  _DAT_0040e724 = 0;
  _DAT_0040e714 = 0;
  uRam0040e718 = 0;
  uRam0040e71c = 0;
  uRam0040e720 = 0;
  DAT_0040e69c = 1;
  return;
}



/* Function: FUN_00409e34 */

void __fastcall FUN_00409e34(int param_1)

{
  FUN_00408bb9((void *)(param_1 + 0x10));
  FUN_00405a95((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00404d97(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00409e5f */

int __fastcall FUN_00409e5f(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_004043e7(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00404d19(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00404d8b();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_00404e47(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00404d19(unaff_retaddr,0x14b);
    }
    else {
      FUN_00409f49(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_00405a95(local_10);
  }
  FUN_00405c17((int *)&local_18);
  return iVar3;
}



/* Function: FUN_00409f1e */

void FUN_00409f1e(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00409f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_00409f49 */

undefined4 * __thiscall FUN_00409f49(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_00408878((void *)((int)this + 0x14));
  FUN_004091f3((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_00409fad */

void __fastcall FUN_00409fad(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_0040f250)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00409fe0 */

void FUN_00409fe0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_00408f32((int)param_2);
  }
  return;
}



/* Function: FUN_0040a020 */

void FUN_0040a020(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_00407a99(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040a06f */

int __thiscall FUN_0040a06f(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = (short *)*param_1;
  psVar3 = psVar2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  WindowsCreateStringReference(psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1,(int)this + 4,this);
  return (int)this;
}



/* Function: FUN_0040a0ac */

int __thiscall FUN_0040a0ac(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  undefined4 local_8;
  
  psVar2 = (short *)*param_1;
  if (psVar2 == (short *)0x0) {
    iVar4 = -0x7fffbffd;
  }
  else {
    local_8 = 0;
    psVar5 = psVar2;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    iVar4 = WindowsCreateString(psVar2,(int)psVar5 - (int)(psVar2 + 1) >> 1,&local_8);
    if (-1 < iVar4) {
                    /* WARNING: Load size is inaccurate */
      uVar3 = *this;
      *(undefined4 *)this = local_8;
      WindowsDeleteString(uVar3);
    }
  }
  return iVar4;
}



/* Function: FUN_0040a110 */

undefined4 * __thiscall FUN_0040a110(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004015dc;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040a139 */

int FUN_0040a139(short *param_1,void *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  short *psVar2;
  SIZE_T local_8;
  
  *param_4 = 0;
  if ((void *)((int)param_2 + 1) < param_2) {
    iVar1 = -0x7ff8fdea;
  }
  else {
    *param_4 = 0;
    iVar1 = FUN_00407383((void *)((int)param_2 + 1),&local_8);
    if (-1 < iVar1) {
      psVar2 = (short *)CoTaskMemAlloc(local_8);
      *param_4 = psVar2;
      if (psVar2 == (short *)0x0) {
        iVar1 = -0x7ff8fff2;
      }
      else {
        FUN_004073b7(psVar2,(int)param_2 + 1,param_1,(uint)param_2);
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}



/* Function: FUN_0040a1b0 */

void __thiscall FUN_0040a1b0(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401600;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: FUN_0040a1e0 */

undefined4 __thiscall
FUN_0040a1e0(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_004081a1(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_0040a240 */

undefined1 FUN_0040a240(void)

{
  return 0;
}



/* Function: FUN_0040a249 */

HRESULT FUN_0040a249(void)

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
    riid = (IID *)&DAT_00402940;
    This = local_c;
    (*(code *)PTR_guard_check_icall_0040f250)();
    HVar3 = (*p_Var1)(This,riid,ppvObject);
    if (-1 < HVar3) {
      pcVar2 = *(code **)(*local_8 + 0xc);
      (*(code *)PTR_guard_check_icall_0040f250)(local_8,0x10002);
      HVar3 = (*pcVar2)();
    }
    FUN_004057c1((int *)&local_8);
  }
  FUN_004057c1((int *)&local_c);
  return HVar3;
}



/* Function: FUN_0040a2bf */

void FUN_0040a2bf(void)

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
  
  local_8 = DAT_0040e180 ^ (uint)&stack0xfffffffc;
  HVar1 = GetCurrentThemeName(local_210,0x104,local_2d8,100,(LPWSTR)0x0,0);
  if (-1 < HVar1) {
    PathRemoveFileSpecW(local_210);
    PathAppendW(local_210,L"Shell");
    PathAppendW(local_210,local_2d8);
    PathAppendW(local_210,L"ShellStyle.dll");
    pHVar2 = LoadLibraryExW(local_210,(HANDLE)0x0,2);
    uVar4 = extraout_EDX;
    if (pHVar2 != (HMODULE)0x0) goto LAB_0040a381;
  }
  DVar3 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\ShellStyle.dll",local_210,0x104);
  uVar4 = extraout_EDX_00;
  if (DVar3 != 0) {
    LoadLibraryExW(local_210,(HANDLE)0x0,2);
    uVar4 = extraout_EDX_01;
  }
LAB_0040a381:
  FUN_0040acc0(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040a3a0 */

Value * FUN_0040a3a0(ushort *param_1)

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



/* Function: FUN_0040a3d2 */

long __fastcall
FUN_0040a3d2(DUIXmlParser *param_1,uint param_2,undefined4 param_3,HWND__ *param_4,
            undefined4 *param_5)

{
  long lVar1;
  DUIXmlParser *local_8;
  
  *param_5 = 0;
  local_8 = param_1;
  lVar1 = DirectUI::DUIXmlParser::Create
                    (&local_8,(_func_Value_ptr_ushort_ptr_void_ptr *)0x0,(void *)0x0,FUN_0040a510,
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



/* Function: FUN_0040a446 */

void __fastcall
FUN_0040a446(DUIXmlParser *param_1,uint param_2,byte param_3,undefined4 param_4,HWND__ *param_5,
            DUIXmlParser **param_6)

{
  *param_6 = (DUIXmlParser *)0x0;
  if ((param_3 & 1) == 0) {
    FUN_0040a3d2(param_1,param_2,param_1,param_5,param_6);
  }
  else {
    FUN_0040a479((HINSTANCE__ *)param_1,param_2,param_1,param_5,param_6);
  }
  return;
}



/* Function: FUN_0040a479 */

int __fastcall
FUN_0040a479(HINSTANCE__ *param_1,uint param_2,undefined4 param_3,HWND__ *param_4,
            DUIXmlParser **param_5)

{
  HMODULE pHVar1;
  long lVar2;
  HMODULE hLibModule;
  
  *param_5 = (DUIXmlParser *)0x0;
  pHVar1 = (HMODULE)FUN_0040a2bf();
  hLibModule = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    hLibModule = param_1;
  }
  lVar2 = DirectUI::DUIXmlParser::Create(param_5,FUN_0040a3a0,(void *)0x0,FUN_0040a510,(void *)0x0);
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



/* Function: FUN_0040a510 */

void FUN_0040a510(void)

{
  return;
}



/* Function: FUN_0040a519 */

long __fastcall
FUN_0040a519(Element *param_1,_func_PropertyInfo_ptr *param_2,ushort *param_3,HINSTANCE__ *param_4)

{
  HINSTANCE__ *pHVar1;
  Value *this;
  long lVar2;
  
  pHVar1 = (HINSTANCE__ *)0x0;
  if (((uint)param_3 & 0xffff0000) == 0) {
    pHVar1 = param_4;
  }
  this = DirectUI::Value::CreateString(param_3,pHVar1);
  lVar2 = -0x7ff8fff2;
  if (this != (Value *)0x0) {
    lVar2 = DirectUI::Element::SetValue(param_1,param_2,1,this);
    DirectUI::Value::Release(this);
  }
  return lVar2;
}



/* Function: FUN_0040a575 */

long __thiscall FUN_0040a575(void *this,ushort *param_1,HINSTANCE__ *param_2)

{
  ushort uVar1;
  Element *pEVar2;
  long lVar3;
  
  uVar1 = StrToID(L"WarningText");
  pEVar2 = DirectUI::Element::FindDescendent((Element *)this,uVar1);
  if (pEVar2 == (Element *)0x0) {
    lVar3 = -0x7fffbffb;
  }
  else {
    lVar3 = FUN_0040a519(pEVar2,ContentProp_exref,param_1,param_2);
    if (-1 < lVar3) {
      lVar3 = FUN_0040a519(pEVar2,AccNameProp_exref,param_1,param_2);
    }
  }
  return lVar3;
}



/* Function: FUN_0040a5d6 */

int FUN_0040a5d6(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  
  puVar1 = PTR_FUN_0040e074;
  iVar3 = DAT_0040e050;
  if ((DAT_0040e050 == 0) && (iVar3 = DAT_0040e058, PTR_FUN_0040e074 != (undefined *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040f250)();
    cVar2 = (*(code *)puVar1)();
    iVar3 = DAT_0040e058;
    if (cVar2 != '\0') {
      iVar3 = DAT_0040e054;
    }
  }
  DAT_0040e050 = iVar3;
  return iVar3;
}



/* Function: FUN_0040a61b */

int FUN_0040a61b(void)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040e040);
  if (DAT_0040e048 == 0) {
    iVar1 = InitProcessPriv(0xe,0x400000,1,1,1);
    if (iVar1 < 0) goto LAB_0040a6ed;
    iVar1 = FUN_0040a7a8();
    if (-1 < iVar1) {
      DAT_0040e04c = TlsAlloc();
      iVar1 = -0x7fffbffb;
      if (DAT_0040e04c != 0xffffffff) goto LAB_0040a68c;
      FUN_0040a814(DAT_0040e06c);
    }
    UnInitProcessPriv(0x400000);
    goto LAB_0040a6ed;
  }
LAB_0040a68c:
  iVar1 = InitThread(0x10002);
  if (iVar1 < 0) {
LAB_0040a6b6:
    if (DAT_0040e048 != 0) goto LAB_0040a6ed;
    TlsFree(DAT_0040e04c);
    DAT_0040e04c = 0xffffffff;
    FUN_0040a814(DAT_0040e06c);
    UnInitProcessPriv(0x400000);
    if (iVar1 < 0) goto LAB_0040a6ed;
  }
  else {
    iVar1 = FUN_0040a854();
    if (iVar1 < 0) {
      UnInitThread();
      goto LAB_0040a6b6;
    }
    DAT_0040e048 = DAT_0040e048 + 1;
  }
  FUN_0040a249();
LAB_0040a6ed:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040e040);
  return iVar1;
}



/* Function: FUN_0040a702 */

void FUN_0040a702(void)

{
  int *piVar1;
  undefined4 *lpMem;
  HANDLE hHeap;
  DWORD dwFlags;
  
  lpMem = (undefined4 *)FUN_0040a78d();
  if (lpMem != (undefined4 *)0x0) {
    piVar1 = lpMem + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      DirectUI::DUIXmlParser::Destroy((DUIXmlParser *)*lpMem);
      dwFlags = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,dwFlags,lpMem);
      TlsSetValue(DAT_0040e04c,(LPVOID)0x0);
    }
  }
  UnInitThread();
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040e040);
  DAT_0040e048 = DAT_0040e048 + -1;
  if (DAT_0040e048 == 0) {
    TlsFree(DAT_0040e04c);
    DAT_0040e04c = 0xffffffff;
    FUN_0040a814(DAT_0040e06c);
    UnInitProcessPriv(0x400000);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040e040);
  return;
}



/* Function: FUN_0040a78d */

LPVOID FUN_0040a78d(void)

{
  LPVOID pvVar1;
  
  if (DAT_0040e04c == 0xffffffff) {
    return (LPVOID)0x0;
  }
  pvVar1 = TlsGetValue(DAT_0040e04c);
  return pvVar1;
}



/* Function: FUN_0040a7a8 */

int FUN_0040a7a8(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (DAT_0040e060 <= uVar2) {
      if (DAT_0040e068 == 0) {
        return iVar3;
      }
      while( true ) {
        if (DAT_0040e06c <= uVar4) {
          return iVar3;
        }
        pcVar1 = *(code **)(DAT_0040e068 + uVar4 * 8);
        (*(code *)PTR_guard_check_icall_0040f250)();
        iVar3 = (*pcVar1)();
        if (iVar3 < 0) break;
        uVar4 = uVar4 + 1;
      }
      FUN_0040a814(uVar4);
      return iVar3;
    }
    pcVar1 = *(code **)(DAT_0040e05c + uVar2 * 4);
    (*(code *)PTR_guard_check_icall_0040f250)();
    iVar3 = (*pcVar1)();
    uVar2 = uVar2 + 1;
  } while (-1 < iVar3);
  return iVar3;
}



/* Function: FUN_0040a814 */

void FUN_0040a814(uint param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_0040e068 != 0) && (uVar3 = 0, iVar2 = DAT_0040e068, param_1 != 0)) {
    do {
      pcVar1 = *(code **)(iVar2 + 4 + uVar3 * 8);
      if (pcVar1 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0040f250)();
        (*pcVar1)();
        iVar2 = DAT_0040e068;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1);
  }
  return;
}



/* Function: FUN_0040a854 */

int FUN_0040a854(void)

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
  if (DAT_0040e04c == 0xffffffff) {
    iVar7 = -0x7fffbffb;
  }
  else {
    pvVar3 = TlsGetValue(DAT_0040e04c);
    if (pvVar3 == (LPVOID)0x0) {
      dwBytes = 8;
      DVar8 = 8;
      pvVar4 = GetProcessHeap();
      lpTlsValue = (undefined4 *)HeapAlloc(pvVar4,DVar8,dwBytes);
      pHVar2 = DAT_0040e070;
      uVar1 = DAT_0040e044;
      iVar7 = -0x7ff8fff2;
      if (lpTlsValue != (undefined4 *)0x0) {
        uVar5 = FUN_0040a5d6();
        iVar7 = FUN_0040a446((DUIXmlParser *)&IMAGE_DOS_HEADER_00400000,uVar5,(byte)uVar1,&local_8,
                             pHVar2,&local_8);
        if (-1 < iVar7) {
          *lpTlsValue = local_8;
          lpTlsValue[1] = 1;
          BVar6 = TlsSetValue(DAT_0040e04c,lpTlsValue);
          iVar7 = -0x7fffbffb;
          if (BVar6 != 0) {
            return 0;
          }
          DirectUI::DUIXmlParser::Destroy(local_8);
        }
        DVar8 = 0;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar8,lpTlsValue);
        TlsSetValue(DAT_0040e04c,(LPVOID)0x0);
      }
    }
    else {
      *(int *)((int)pvVar3 + 4) = *(int *)((int)pvVar3 + 4) + 1;
    }
  }
  return iVar7;
}



/* Function: FUN_0040a92a */

void FUN_0040a92a(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_004029cc,DelayLoadFailureHook_exref,param_2,DAT_004029cc);
  return;
}



/* Function: HeapFree */

BOOL HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}



/* Function: HeapAlloc */

LPVOID HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}



/* Function: GetProcessHeap */

HANDLE GetProcessHeap(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040a974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetProcessHeap();
  return pvVar1;
}



/* Function: FUN_0040a980 */

undefined4 FUN_0040a980(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_0040ac40();
  DAT_0040e218 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_0040af04(2);
  __set_app_type(iVar2);
  DAT_0040e730 = 0xffffffff;
  DAT_0040e734 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_0040e22c;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_0040e220;
  FUN_0040af60();
  if (DAT_0040e140 == 0) {
    __setusermatherr(FUN_0040af60);
  }
  FUN_0040b177();
  return 0;
}



/* Function: FUN_0040a9f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a9f0(void)

{
  _DAT_0040e21c = DAT_0040e228;
  _DAT_0040e214 =
       __wgetmainargs((int *)&DAT_0040e208,(wchar_t ***)&DAT_0040e20c,(wchar_t ***)&DAT_0040e210,
                      DAT_0040e224,(_startupinfo *)&DAT_0040e21c);
  return;
}



/* Function: FUN_0040aa29 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

HRESULT FUN_0040aa29(void)

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
  
  local_8 = &DAT_0040c140;
  uStack_c = 0x40aa35;
  local_20 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = (undefined *)0x0;
  iVar6 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar5 = 0;
    LOCK();
    iVar3 = iVar6;
    if (DAT_0040e728 != 0) {
      iVar5 = DAT_0040e728;
      iVar3 = DAT_0040e728;
    }
    DAT_0040e728 = iVar3;
    UNLOCK();
    if (iVar5 == 0) goto LAB_0040aa7e;
    if (iVar5 == iVar6) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_0040aa7e:
  if (DAT_0040e72c == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0040e72c == 0) {
    DAT_0040e72c = 1;
    iVar6 = FUN_0040ac09((undefined4 *)&DAT_0040171c,(undefined4 *)&DAT_00401728);
    if (iVar6 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_0040e204 = 1;
  }
  if (DAT_0040e72c == 1) {
    initterm(&DAT_004016e4,&DAT_00401718);
    DAT_0040e72c = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_0040e728 = 0;
    UNLOCK();
  }
  if ((DAT_0040e738 != (code *)0x0) &&
     (BVar7 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0040e738), pcVar2 = DAT_0040e738, BVar7 != 0
     )) {
    (*(code *)PTR_guard_check_icall_0040f250)(0,2,0);
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
      if (uVar4 == 0) goto LAB_0040ab60;
      if (uVar8 == 0) {
        while ((uVar4 != 0 && (uVar4 < 0x21))) {
          local_24 = local_24 + 1;
          uVar4 = *local_24;
        }
LAB_0040ab60:
        DAT_0040e200 = FUN_00406b9c(0x400000);
        if (DAT_0040e218 == 0) {
                    /* WARNING: Subroutine does not return */
          exit(DAT_0040e200);
        }
        if (DAT_0040e204 == 0) {
          _cexit();
          ExceptionList = local_14;
          return DAT_0040e200;
        }
        ExceptionList = local_14;
        return DAT_0040e200;
      }
    }
    if (uVar4 == 0x22) {
      uVar8 = (uint)(uVar8 == 0);
      local_20 = uVar8;
    }
    local_24 = local_24 + 1;
  } while( true );
}



/* Function: FUN_0040ac09 */

void __cdecl FUN_0040ac09(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_0040f250)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_0040ac40 */

bool FUN_0040ac40(void)

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
  FUN_0040b0d9();
  FUN_0040aa29();
  return;
}



/* Function: FUN_0040acc0 */

void __fastcall FUN_0040acc0(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_0040e180) {
    return;
  }
  FUN_0040b25b(param_1,param_2);
  return;
}



/* Function: FUN_0040acd6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_0040acd6(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0040c160;
  uStack_c = 0x40ace2;
  local_20[0] = DAT_0040e734;
  if (DAT_0040e734 == -1) {
    (*(code *)PTR_guard_check_icall_0040f250)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_0040e734;
    local_24 = DAT_0040e730;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_0040e734 = local_20[0];
    DAT_0040e730 = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_0040ad70();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_0040ad70 */

void FUN_0040ad70(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_0040ad7f */

int __cdecl FUN_0040ad7f(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_0040acd6(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: operator_delete */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040ad9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* Function: purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* Function: FUN_0040adbc */

void FUN_0040adbc(size_t param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040bff6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0040b540(param_1);
  FUN_0040ae04();
  return;
}



/* Function: Catch_All@0040adf7 */

undefined * Catch_All_0040adf7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  return &DAT_0040ae01;
}



/* Function: FUN_0040ae04 */

void FUN_0040ae04(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_0040ae20 */

undefined4 FUN_0040ae20(int *param_1)

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



/* Function: FUN_0040ae70 */

undefined4 FUN_0040ae70(void)

{
  SetUnhandledExceptionFilter(FUN_0040ae20);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040ae84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_0040ae90 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_0040ae90(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0040af04 */

undefined4 __cdecl FUN_0040af04(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_0040ae90(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0040af46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_0040af60 */

undefined4 FUN_0040af60(void)

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
  
  pcStack_10 = FUN_0040b200;
  local_14 = ExceptionList;
  local_c = DAT_0040e180 ^ 0x40c1f8;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_0040b0a0((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_0040b0a0 */

bool __cdecl FUN_0040b0a0(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_0040b0d9 */

void FUN_0040b0d9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_0040e180 == 0xbb40e64e) || ((DAT_0040e180 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_0040e180 & 0xffff0000, DAT_0040e180 = local_8, uVar1 == 0)) {
      DAT_0040e180 = 0xbb40e64f;
    }
  }
  DAT_0040e1c0 = ~DAT_0040e180;
  return;
}



/* Function: FUN_0040b177 */

void FUN_0040b177(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040b190. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040e180 ^ (uint)&param_2;
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



/* Function: FUN_0040b200 */

void __cdecl
FUN_0040b200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_0040e180,FUN_0040acc0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040b22b */

void __cdecl FUN_0040b22b(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0040b25b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040b25b(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_0040e340 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040e344 = &stack0x00000004;
  _DAT_0040e280 = 0x10001;
  _DAT_0040e230 = 0xc0000409;
  _DAT_0040e234 = 1;
  _DAT_0040e240 = 3;
  DAT_0040e244 = 2;
  DAT_0040e248 = DAT_0040e180;
  DAT_0040e24c = DAT_0040e1c0;
  uStack_c = DAT_0040e180;
  uStack_8 = DAT_0040e1c0;
  _DAT_0040e23c = unaff_retaddr;
  _DAT_0040e30c = in_GS;
  _DAT_0040e310 = in_FS;
  _DAT_0040e314 = in_ES;
  _DAT_0040e318 = in_DS;
  _DAT_0040e31c = unaff_EDI;
  _DAT_0040e320 = unaff_ESI;
  _DAT_0040e324 = unaff_EBX;
  _DAT_0040e328 = param_2;
  _DAT_0040e32c = param_1;
  _DAT_0040e330 = in_EAX;
  _DAT_0040e334 = unaff_EBP;
  DAT_0040e338 = unaff_retaddr;
  _DAT_0040e33c = in_CS;
  _DAT_0040e348 = in_SS;
  FUN_0040b22b((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040b36f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040b37b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040b387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040b39f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: DelayLoad_?RemoveListener@Element@DirectUI@@QAEXPAUIElementListener@2@@Z */

void DelayLoad__RemoveListener_Element_DirectUI__QAEXPAUIElementListener_2__Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: FUN_0040b3b5 */

void FUN_0040b3b5(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0040a92a(&ImgDelayDescr_0040c3ac,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x0040b3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_?Click@TouchButton@DirectUI@@SG?AVUID@@XZ */

void DelayLoad__Click_TouchButton_DirectUI__SG_AVUID__XZ(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_RegisterPVLBehaviorFactory */

void DelayLoad_RegisterPVLBehaviorFactory(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?EndDefer@Element@DirectUI@@QAEXK@Z */

void DelayLoad__EndDefer_Element_DirectUI__QAEXK_Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?AddListener@Element@DirectUI@@QAEJPAUIElementListener@2@@Z */

void DelayLoad__AddListener_Element_DirectUI__QAEJPAUIElementListener_2__Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?Destroy@Element@DirectUI@@QAEJ_N@Z */

void DelayLoad__Destroy_Element_DirectUI__QAEJ_N_Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: FUN_0040b420 */

void FUN_0040b420(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?SetValue@Element@DirectUI@@QAEJP6GPBUPropertyInfo@2@XZHPAVValue@2@@Z */

void DelayLoad__SetValue_Element_DirectUI__QAEJP6GPBUPropertyInfo_2_XZHPAVValue_2__Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?CreateString@Value@DirectUI@@SGPAV12@PBGPAUHINSTANCE__@@@Z */

void DelayLoad__CreateString_Value_DirectUI__SGPAV12_PBGPAUHINSTANCE_____Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: FUN_0040b450 */

void FUN_0040b450(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_InitProcessPriv */

void DelayLoad_InitProcessPriv(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_UnInitProcessPriv */

void DelayLoad_UnInitProcessPriv(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?FindDescendent@Element@DirectUI@@QAEPAV12@G@Z */

void DelayLoad__FindDescendent_Element_DirectUI__QAEPAV12_G_Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_StrToID */

void DelayLoad_StrToID(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?CreateElement@DUIXmlParser@DirectUI@@QAEJPBGPAVElement@2@1PAKPAPAV32@@Z */

void DelayLoad__CreateElement_DUIXmlParser_DirectUI__QAEJPBGPAVElement_2_1PAKPAPAV32__Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_InitThread */

void DelayLoad_InitThread(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_UnInitThread */

void DelayLoad_UnInitThread(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?GetSheet@DUIXmlParser@DirectUI@@QAEJPBGPAPAVValue@2@@Z */

void DelayLoad__GetSheet_DUIXmlParser_DirectUI__QAEJPBGPAPAVValue_2__Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?Create@DUIXmlParser@DirectUI@@SGJPAPAV12@P6GPAVValue@2@PBGPAX@Z2P6GX11H2@Z2@Z */

void DelayLoad__Create_DUIXmlParser_DirectUI__SGJPAPAV12_P6GPAVValue_2_PBGPAX_Z2P6GX11H2_Z2_Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?SetRootWindowForTheming@DUIXmlParser@DirectUI@@QAEXPAUHWND__@@@Z */

void DelayLoad__SetRootWindowForTheming_DUIXmlParser_DirectUI__QAEXPAUHWND_____Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?Destroy@DUIXmlParser@DirectUI@@QAEXXZ */

void DelayLoad__Destroy_DUIXmlParser_DirectUI__QAEXXZ(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?SetXMLFromResource@DUIXmlParser@DirectUI@@QAEJPBGPAUHINSTANCE__@@1@Z */

void DelayLoad__SetXMLFromResource_DUIXmlParser_DirectUI__QAEJPBGPAUHINSTANCE____1_Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?SetXMLFromResourceWithTheme@DUIXmlParser@DirectUI@@QAEJIPAUHINSTANCE__@@00@Z */

void DelayLoad__SetXMLFromResourceWithTheme_DUIXmlParser_DirectUI__QAEJIPAUHINSTANCE____00_Z(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: DelayLoad_?Release@Value@DirectUI@@QAEXXZ */

void DelayLoad__Release_Value_DirectUI__QAEXXZ(void)

{
  FUN_0040b3b5();
  return;
}



/* Function: FUN_0040b540 */

void __cdecl FUN_0040b540(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  FUN_0040b9c0();
  return;
}



/* Function: FUN_0040b56f */

void __cdecl FUN_0040b56f(size_t param_1)

{
  int iVar1;
  exception aeStack_14 [8];
  undefined4 uStack_c;
  
  if (param_1 != 0) {
    uStack_c = 0x40b583;
    iVar1 = FUN_0040b540(param_1);
    if (iVar1 == 0) {
      FUN_0040b5f7(aeStack_14);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(aeStack_14,(ThrowInfo *)&LAB_0040c2c4);
    }
  }
  return;
}



/* Function: basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> */

/* Library Function - Single Match
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(char const *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2019 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>)0x0;
  uVar1 = char_traits<char>::length(param_1);
  FUN_0040bae3(this,(undefined4 *)param_1,uVar1);
  return this;
}



/* Function: FUN_0040b5d0 */

exception * __thiscall FUN_0040b5d0(void *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401008;
  return (exception *)this;
}



/* Function: FUN_0040b5f7 */

exception * __fastcall FUN_0040b5f7(exception *param_1)

{
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040c019;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = "bad allocation";
  exception::exception(param_1,&local_14,1);
  *(undefined ***)param_1 = &PTR_FUN_00401008;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_0040b660 */

exception * __thiscall FUN_0040b660(void *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401010;
  return (exception *)this;
}



/* Function: FUN_0040b687 */

exception * __thiscall FUN_0040b687(void *this,char *param_1)

{
  char *local_8;
  
  local_8 = param_1;
  exception::exception((exception *)this,&local_8);
  *(undefined ***)this = &PTR_FUN_00401010;
  return (exception *)this;
}



/* Function: FUN_0040b6c0 */

void __fastcall FUN_0040b6c0(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00401008;
  exception::~exception(param_1);
  return;
}



/* Function: FUN_0040b6e0 */

void __fastcall FUN_0040b6e0(exception *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040be8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception::~exception(param_1);
  return;
}



/* Function: operator== */

/* Library Function - Single Match
    public: bool __thiscall std::error_condition::operator==(class std::error_condition const
   &)const 
   
   Library: Visual Studio 2019 Release */

bool __thiscall std::error_condition::operator==(error_condition *this,error_condition *param_1)

{
  bool bVar1;
  
  if ((*(int *)(this + 4) == *(int *)(param_1 + 4)) && (*(int *)this == *(int *)param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Function: FUN_0040b720 */

undefined4 * __thiscall FUN_0040b720(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401018;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040b750 */

exception * __thiscall FUN_0040b750(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401008;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* Function: FUN_0040b780 */

exception * __thiscall FUN_0040b780(void *this,byte param_1)

{
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* Function: FUN_0040b7a7 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __thiscall FUN_0040b7a7(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 | 0xf;
  if (uVar3 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if (uVar3 / 3 < uVar2) {
      if (-uVar2 - 2 < uVar1) {
        param_1 = 0xfffffffe;
      }
      else {
        param_1 = uVar2 + uVar1;
      }
    }
  }
  FUN_0040b56f(param_1 + 1);
  FUN_0040b83d();
  return;
}



/* Function: Catch_All@0040b810 */

undefined * Catch_All_0040b810(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_0040b56f(*(int *)(unaff_EBP + 8) + 1);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  return &DAT_0040b831;
}



/* Function: FUN_0040b83d */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040b83d(void)

{
  int iVar1;
  void *in_EAX;
  undefined4 *_Src;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  
  *(void **)(unaff_EBP + -0x14) = in_EAX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    _Src = unaff_EDI;
    if (0xf < (uint)unaff_EDI[5]) {
      _Src = (undefined4 *)*unaff_EDI;
    }
    memcpy(in_EAX,_Src,*(size_t *)(unaff_EBP + 0xc));
  }
  FUN_0040b972(unaff_EDI,'\x01',0);
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *unaff_EDI = *(undefined4 *)(unaff_EBP + -0x14);
  *unaff_EBX = unaff_ESI;
  FUN_0040b8a4(unaff_EDI,iVar1);
  return;
}



/* Function: Catch_All@0040b883 */

void Catch_All_0040b883(void)

{
  int unaff_EBP;
  
  FUN_0040b972(*(void **)(unaff_EBP + -0x18),'\x01',0);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_0040b8a4 */

void __thiscall FUN_0040b8a4(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
    pvVar1 = *this;
  }
  *(int *)((int)this + 0x10) = param_1;
  *(undefined1 *)((int)pvVar1 + param_1) = 0;
  return;
}



/* Function: FUN_0040b8c9 */

bool __thiscall FUN_0040b8c9(void *this,uint param_1,char param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_1 != 0xffffffff) {
    if (*(uint *)((int)this + 0x14) < param_1) {
      FUN_0040b7a7(this,param_1);
    }
    else if ((param_2 == '\0') || (0xf < param_1)) {
      if (param_1 == 0) {
        puVar4 = (undefined1 *)this;
        if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
          puVar4 = *this;
        }
        *(undefined4 *)((int)this + 0x10) = 0;
        *puVar4 = 0;
      }
    }
    else {
      uVar3 = *(uint *)((int)this + 0x10);
      if (param_1 < *(uint *)((int)this + 0x10)) {
        uVar3 = param_1;
      }
      FUN_0040b972(this,'\x01',uVar3);
    }
    return param_1 != 0;
  }
  FUN_0040b9e5();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}



/* Function: FUN_0040b931 */

uint __thiscall FUN_0040b931(void *this,undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  void *pvVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    in_EAX = (undefined4 *)this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      in_EAX = *this;
    }
    if (in_EAX <= param_1) {
      pvVar2 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar2 = *this;
      }
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x10) + (int)pvVar2);
      return CONCAT31((int3)((uint)puVar1 >> 8),param_1 < puVar1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}



/* Function: FUN_0040b972 */

void __thiscall FUN_0040b972(void *this,char param_1,size_t param_2)

{
  void *_Src;
  
  if ((param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
                    /* WARNING: Load size is inaccurate */
    _Src = *this;
    if (param_2 != 0) {
      memcpy(this,_Src,param_2);
    }
    operator_delete(_Src);
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  FUN_0040b8a4(this,param_2);
  return;
}



/* Function: FUN_0040b9c0 */

void FUN_0040b9c0(void)

{
  exception local_10 [12];
  
  FUN_0040b5f7(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&LAB_0040c2c4);
}



/* Function: FUN_0040b9e5 */

void FUN_0040b9e5(void)

{
  code *pcVar1;
  
  FUN_0040b9f6("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040b9f6 */

void FUN_0040b9f6(char *param_1)

{
  undefined1 local_10 [12];
  
  FUN_0040b687(local_10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_0040c334);
}



/* Function: FUN_0040ba1e */

void FUN_0040ba1e(char *param_1)

{
  undefined1 local_10 [12];
  
  FUN_0040b687(local_10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_0040c370);
}



/* Function: FUN_0040ba46 */

void FUN_0040ba46(void)

{
  code *pcVar1;
  
  FUN_0040ba1e("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040ba57 */

undefined4 * __thiscall FUN_0040ba57(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  void *_Dst;
  undefined4 *puVar3;
  uint _Size;
  
  if ((uint)param_1[4] < param_2) {
    FUN_0040ba46();
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  _Size = param_1[4] - param_2;
  if (param_3 < _Size) {
    _Size = param_3;
  }
  if ((undefined4 *)this == param_1) {
    FUN_0040bc59(this,param_2 + _Size);
    FUN_0040bc82(this,0,param_2);
  }
  else {
    bVar2 = FUN_0040b8c9(this,_Size,'\0');
    if (bVar2) {
      if (0xf < (uint)param_1[5]) {
        param_1 = (undefined4 *)*param_1;
      }
      _Dst = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        _Dst = *this;
      }
      if (_Size != 0) {
        memcpy(_Dst,(void *)(param_2 + (int)param_1),_Size);
      }
      FUN_0040b8a4(this,_Size);
    }
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040bae3 */

undefined4 * __thiscall FUN_0040bae3(void *this,undefined4 *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  
  uVar2 = FUN_0040b931(this,param_1);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_0040b8c9(this,param_2,'\0');
    if (bVar1) {
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *this;
      }
      if (param_2 != 0) {
        memcpy(pvVar3,param_1,param_2);
      }
      FUN_0040b8a4(this,param_2);
    }
  }
  else {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar3 = *this;
    }
    this = FUN_0040ba57(this,(undefined4 *)this,(int)param_1 - (int)pvVar3,param_2);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040bb60 */

int * FUN_0040bb60(int *param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040c05f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0040bdec(param_2);
  *param_1 = param_2;
  if (iVar1 == 0) {
    param_1[1] = (int)&PTR_PTR_0040e008;
  }
  else {
    param_1[1] = (int)&PTR_PTR_0040e000;
  }
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_0040bbd0 */

void __thiscall FUN_0040bbd0(void *this,undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = this;
  return;
}



/* Function: equivalent */

/* Library Function - Single Match
    public: virtual bool __thiscall std::error_category::equivalent(class std::error_code const
   &,int)const 
   
   Library: Visual Studio 2019 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  bool bVar1;
  
  if ((this == *(error_category **)(param_1 + 4)) && (*(int *)param_1 == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Function: FUN_0040bc20 */

void __thiscall FUN_0040bc20(void *this,undefined4 param_1,error_condition *param_2)

{
  code *pcVar1;
  error_condition *this_00;
  void *local_c;
  void *pvStack_8;
  
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0xc);
  local_c = this;
  pvStack_8 = this;
  (*(code *)PTR_guard_check_icall_0040f250)(&local_c,param_1);
  this_00 = (error_condition *)(*pcVar1)();
  std::error_condition::operator==(this_00,param_2);
  return;
}



/* Function: FUN_0040bc59 */

void * __thiscall FUN_0040bc59(void *this,uint param_1)

{
  code *pcVar1;
  void *pvVar2;
  
  if (param_1 <= *(uint *)((int)this + 0x10)) {
    FUN_0040b8a4(this,param_1);
    return this;
  }
  FUN_0040ba46();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



/* Function: FUN_0040bc82 */

undefined4 * __thiscall FUN_0040bc82(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  size_t _Size;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
    FUN_0040ba46();
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar2)();
    return puVar4;
  }
  if (param_2 < uVar1 - param_1) {
    if (param_2 != 0) {
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *this;
      }
      _Size = (uVar1 - param_2) - param_1;
      if (_Size != 0) {
        memmove((void *)((int)pvVar3 + param_1),(void *)((int)((int)pvVar3 + param_1) + param_2),
                _Size);
      }
      FUN_0040b8a4(this,uVar1 - param_2);
    }
  }
  else {
    FUN_0040b8a4(this,param_1);
  }
  return (undefined4 *)this;
}



/* Function: length */

/* Library Function - Single Match
    public: static unsigned int __cdecl std::char_traits<char>::length(char const *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2019 Release */

uint __cdecl std::char_traits<char>::length(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  if (*param_1 == '\0') {
    return 0;
  }
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}



/* Function: FUN_0040bd20 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_0040bd20(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0040bdec(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_0040bd50 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_0040bd50(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  if (param_2 == 1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (param_1,"iostream stream error");
  }
  else {
    FUN_0040bd20(param_1,param_2);
  }
  return param_1;
}



/* Function: FUN_0040bd90 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_0040bd90(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0040be1e(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_0040bdc0 */

char * FUN_0040bdc0(void)

{
  return "generic";
}



/* Function: FUN_0040bdd0 */

char * FUN_0040bdd0(void)

{
  return "iostream";
}



/* Function: FUN_0040bde0 */

char * FUN_0040bde0(void)

{
  return "system";
}



/* Function: FUN_0040bdec */

int __cdecl FUN_0040bdec(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_004012d0;
  if (PTR_s_address_family_not_supported_004012d4 != (undefined *)0x0) {
    do {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
      piVar1 = piVar2 + 3;
      piVar2 = piVar2 + 2;
    } while (*piVar1 != 0);
  }
  return 0;
}



/* Function: FUN_0040be1e */

int __cdecl FUN_0040be1e(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_00401078;
  if (PTR_s_permission_denied_0040107c != (undefined *)0x0) {
    do {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
      piVar1 = piVar2 + 3;
      piVar2 = piVar2 + 2;
    } while (*piVar1 != 0);
  }
  return 0;
}



/* Function: _callnewh */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,char **param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040be5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,char **param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0040be68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1,param_2);
  return;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,exception *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040be80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: ~exception */

void __thiscall exception::~exception(exception *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040be8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~exception(this);
  return;
}



/* Function: what */

char * __thiscall exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0040beac. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040e180 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: FUN_0040bf30 */

type_info * __thiscall FUN_0040bf30(void *this,byte param_1)

{
  type_info::~type_info((type_info *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (type_info *)this;
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
  
                    /* WARNING: Could not recover jumptable at 0x0040bfd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: FUN_0040c090 */

int FUN_0040c090(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int in_EAX;
  int *piVar4;
  int *lpMem;
  int *local_8;
  
  lpMem = DAT_0040e03c;
  if (DAT_0040e03c != (int *)0x0) {
    local_8 = DAT_0040e03c;
    cVar1 = FUN_00404906();
    if (cVar1 == '\0') {
      iVar2 = FUN_00405bd4(lpMem + 1,&local_8);
      *lpMem = *lpMem + -1;
      piVar4 = local_8;
      if (*lpMem == 0) {
        FUN_00405878(lpMem + 2,0);
        FUN_00405878(lpMem + 3,0);
        if (local_8 != (int *)0x0) {
          DVar3 = GetLastError();
          FUN_00404dc4(local_8);
          SetLastError(DVar3);
        }
        FUN_00405a6a((int)lpMem);
        DVar3 = 0;
        hHeap = GetProcessHeap();
        iVar2 = HeapFree(hHeap,DVar3,lpMem);
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        iVar2 = FUN_00404dc4(piVar4);
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



/* Function: FUN_0040c0b0 */

void FUN_0040c0b0(void)

{
  FUN_004057e3((int *)&DAT_0040e1d0);
  return;
}



/* Function: FUN_0040c0c0 */

void FUN_0040c0c0(void)

{
  if (DAT_0040e658 != (LPVOID)0x0) {
    CoTaskMemFree(DAT_0040e658);
  }
  return;
}



/* Function: FUN_0040c0e0 */

void FUN_0040c0e0(void)

{
  FUN_00409b1c(&DAT_0040e69c);
  return;
}



/* Function: FUN_0040c0f0 */

void FUN_0040c0f0(void)

{
  PTR_PTR_0040e000 = (undefined *)&PTR_FUN_00401018;
  return;
}



/* Function: FUN_0040c110 */

void FUN_0040c110(void)

{
  PTR_PTR_0040e004 = (undefined *)&PTR_FUN_00401018;
  return;
}



/* Function: FUN_0040c130 */

void FUN_0040c130(void)

{
  PTR_PTR_0040e008 = (undefined *)&PTR_FUN_00401018;
  return;
}



