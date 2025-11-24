/* Function: FUN_004047c0 */

void FUN_004047c0(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_004182ac)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00404843 */

void __fastcall FUN_00404843(undefined4 *param_1)

{
  REGHANDLE RegHandle;
  
  RegHandle = *(REGHANDLE *)(param_1 + 6);
  *param_1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  EventUnregister(RegHandle);
  return;
}



/* Function: FUN_00404863 */

void __fastcall FUN_00404863(PVOID param_1)

{
  PREGHANDLE RegHandle;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  GUID local_1c;
  uint local_c;
  
  local_c = DAT_00417380 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)param_1 + 4);
  local_1c.Data1 = *(ulong *)(iVar1 + -0x10);
  local_1c._4_4_ = *(undefined4 *)(iVar1 + -0xc);
  local_1c.Data4._0_4_ = *(undefined4 *)(iVar1 + -8);
  local_1c.Data4._4_4_ = *(undefined4 *)(iVar1 + -4);
  RegHandle = (PREGHANDLE)((int)param_1 + 0x18);
  if (*(int *)RegHandle != 0 || *(int *)((int)param_1 + 0x1c) != 0) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  UVar3 = EventRegister(&local_1c,FUN_004047c0,param_1,RegHandle);
  uVar4 = extraout_EDX;
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)param_1 + 0x1c),2,
                        *(undefined2 **)((int)param_1 + 4),**(undefined2 **)((int)param_1 + 4));
    uVar4 = extraout_EDX_00;
  }
  FUN_00414450(local_c ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_004048f5 */

void FUN_004048f5(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x750;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_0040498a */

uint __thiscall FUN_0040498a(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_004049c1:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_004049c1;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_004049cd */

void __fastcall
FUN_004049cd(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  FUN_0040513d(param_20,local_18);
  FUN_0040518b(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_0040513d(param_17,local_48);
  FUN_0040518b(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_0040518b(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_0040513d(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_0040518b(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_0040518b(param_8,local_d8);
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
  FUN_004048f5(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x12,local_128);
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00404b88 */

void __fastcall
FUN_00404b88(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  FUN_0040518b(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_0040513d(param_19,local_48);
  FUN_0040518b(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_0040513d(param_16,local_78);
  FUN_0040518b(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_0040518b(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_0040513d(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_0040518b(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_0040518b(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_004048f5(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00404d7b */

void __fastcall
FUN_00404d7b(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
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
  FUN_004048f5(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,9,local_98);
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00404e30 */

void __fastcall
FUN_00404e30(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
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
  FUN_004048f5(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,10,local_a8);
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00404ef8 */

void __fastcall
FUN_00404ef8(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  local_18 = param_22;
  local_10 = 4;
  FUN_0040518b(param_21,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_20;
  local_30 = 4;
  FUN_0040518b(param_19,local_48);
  FUN_0040518b(param_18,local_58);
  FUN_0040518b(param_17,local_68);
  FUN_0040518b(param_16,local_78);
  local_88 = param_15;
  local_84 = 0;
  local_80 = 2;
  local_7c = 0;
  FUN_0040518b(param_14,local_98);
  FUN_0040518b(param_13,local_a8);
  FUN_0040518b(param_12,local_b8);
  local_c8 = param_11;
  local_c4 = 0;
  local_c0 = 2;
  local_bc = 0;
  FUN_0040518b(param_10,local_d8);
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
  FUN_004048f5(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004050ef */

void __fastcall
FUN_004050ef(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 extraout_EDX;
  _EVENT_DATA_DESCRIPTOR local_38 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  local_10 = 8;
  local_14 = 0;
  local_18 = *param_5;
  local_c = 0;
  FUN_004048f5(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,3,local_38);
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040513d */

void __thiscall FUN_0040513d(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)&DAT_0040130c;
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



/* Function: FUN_0040518b */

void __thiscall FUN_0040518b(void *this,undefined4 *param_1)

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



/* Function: FUN_004051d0 */

void FUN_004051d0(void)

{
  DAT_00417b9c = FUN_00405e80;
  DAT_00417b88 = DebugBreak;
  DAT_00417b98 = FUN_00405ec0;
  DAT_00417b78 = FUN_00406720;
  DAT_00417b68 = FUN_004067f0;
  DAT_00417ba0 = FUN_00406770;
  DAT_00417b84 = FUN_004067b0;
  return;
}



/* Function: FUN_00405220 */

void FUN_00405220(void)

{
  FUN_00414653(FUN_00415720);
  return;
}



/* Function: FUN_00405240 */

void FUN_00405240(void)

{
  FUN_00414653(FUN_00415740);
  return;
}



/* Function: FUN_00405260 */

void FUN_00405260(void)

{
  DAT_00417b80 = FUN_00407780;
  DAT_00417b58 = &PTR_s_WilError_03_004172b8;
  DAT_00417b6c = &DAT_00417710;
  return;
}



/* Function: FUN_00405290 */

void FUN_00405290(void)

{
  FUN_0040b294();
  FUN_00414653(FUN_00415750);
  return;
}



/* Function: FUN_004052b0 */

void FUN_004052b0(void)

{
  FUN_00414653(FUN_00415760);
  return;
}



/* Function: FUN_004052d0 */

void FUN_004052d0(void)

{
  DAT_00417c98 = FUN_004094f0;
  DAT_00417bb0 = FUN_00409570;
  DAT_00417c04 = FUN_004095f0;
  DAT_00417ca8 = FUN_00409660;
  DAT_00417c10 = FUN_00406f50;
  return;
}



/* Function: FUN_00405310 */

void FUN_00405310(void)

{
  DAT_00417bbc = FUN_00409c00;
  return;
}



/* Function: FUN_00405330 */

void FUN_00405330(void)

{
  DAT_00417cb8 = FUN_00409d00;
  return;
}



/* Function: FUN_00405350 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405350(void)

{
  _DAT_00417bfc = GetProcessHeap();
  _DAT_00417bf8 = &PTR_FUN_0040105c;
  DAT_00417c00 = 0;
  FUN_00414653(FUN_00415770);
  return;
}



/* Function: FUN_00405380 */

void FUN_00405380(void)

{
  FUN_00414653(FUN_00415780);
  return;
}



/* Function: FUN_004053a0 */

void FUN_004053a0(void)

{
  FUN_0040c99d((LPCRITICAL_SECTION)&DAT_004172f4);
  FUN_00414653(FUN_004157a0);
  return;
}



/* Function: FUN_004053c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004053c0(void)

{
  int iVar1;
  
  iVar1 = FUN_0040c99d((LPCRITICAL_SECTION)&DAT_0041777c);
  if (iVar1 < 0) {
    _DAT_00417778 = 0;
  }
  FUN_00414653(FUN_004157b0);
  return;
}



/* Function: FUN_004053f0 */

void __fastcall FUN_004053f0(DWORD param_1)

{
  RaiseException(param_1,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_00405404 */

void __fastcall FUN_00405404(int param_1)

{
  DWORD DVar1;
  
  DVar1 = 0xc000001d;
  if (param_1 == -0x7ff8fff2) {
    DVar1 = 0xc0000017;
  }
  FUN_004053f0(DVar1);
  return;
}



/* Function: FUN_00405422 */

undefined4 __fastcall FUN_00405422(int param_1)

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
  uVar1 = FUN_00405404(iVar2);
  return uVar1;
}



/* Function: FUN_0040545b */

ushort * __fastcall FUN_0040545b(HMODULE param_1,HRSRC param_2,uint param_3)

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



/* Function: FUN_004054c4 */

void __fastcall FUN_004054c4(int *param_1)

{
  if (*param_1 != 0) {
    RegCloseKey((HKEY)*param_1);
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_004054e1 */

LSTATUS __thiscall FUN_004054e1(void *this,HKEY param_1,LPCWSTR param_2,REGSAM param_3)

{
  LSTATUS LVar1;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyExW(param_1,param_2,0,param_3,&local_8);
  if (LVar1 == 0) {
                    /* WARNING: Load size is inaccurate */
    if (*this != 0) {
                    /* WARNING: Load size is inaccurate */
      LVar1 = RegCloseKey(*this);
    }
    *(HKEY *)this = local_8;
  }
  return LVar1;
}



/* Function: FUN_00405529 */

LSTATUS __thiscall FUN_00405529(void *this,LPCWSTR param_1,LPBYTE param_2)

{
  LSTATUS LVar1;
  void *local_c;
  DWORD local_8;
  
  local_8 = 4;
                    /* WARNING: Load size is inaccurate */
  local_c = this;
  LVar1 = RegQueryValueExW(*this,param_1,(LPDWORD)0x0,(LPDWORD)&local_c,param_2,&local_8);
  if (LVar1 == 0) {
    if (local_c != (void *)0x4) {
      LVar1 = 0xd;
    }
  }
  return LVar1;
}



/* Function: FUN_00405567 */

LSTATUS __thiscall FUN_00405567(void *this,LPCWSTR param_1,LPBYTE param_2,uint *param_3)

{
  LSTATUS LVar1;
  uint local_c;
  void *local_8;
  
  local_c = *param_3 * 2;
  *param_3 = 0;
                    /* WARNING: Load size is inaccurate */
  local_8 = this;
  LVar1 = RegQueryValueExW(*this,param_1,(LPDWORD)0x0,(LPDWORD)&local_8,param_2,&local_c);
  if (LVar1 != 0) {
    return LVar1;
  }
  if ((local_8 == (void *)0x1) || (local_8 == (void *)0x2)) {
    if (param_2 != (LPBYTE)0x0) {
      if (local_c == 0) {
        param_2[0] = '\0';
        param_2[1] = '\0';
      }
      else if (((local_c & 1) != 0) || (*(short *)(param_2 + ((local_c & 0xfffffffe) - 2)) != 0))
      goto LAB_004055c2;
    }
    LVar1 = 0;
    *param_3 = local_c >> 1;
  }
  else {
LAB_004055c2:
    LVar1 = 0xd;
  }
  return LVar1;
}



/* Function: FUN_004055df */

void __fastcall FUN_004055df(undefined4 *param_1)

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
    (*(code *)PTR_guard_check_icall_004182ac)(param_1);
    (*pcVar3)();
  }
  return;
}



/* Function: FUN_0040560b */

uint __fastcall FUN_0040560b(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  bool bVar2;
  
  while( true ) {
    uVar1 = *param_1;
    bVar2 = uVar1 < *param_2;
    if (uVar1 != *param_2) break;
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = param_1[1];
    bVar2 = uVar1 < param_2[1];
    if (uVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return -(uint)bVar2 | 1;
}



/* Function: FUN_0040563e */

void FUN_0040563e(void)

{
  DWORD dwThreadId;
  HDESK hObj;
  BOOL BVar1;
  int iVar2;
  HANDLE hObject;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  wchar_t local_30 [2];
  wchar_t awStack_2c [2];
  wchar_t awStack_28 [2];
  wchar_t awStack_24 [2];
  wchar_t wStack_20;
  wchar_t local_1c [8];
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  dwThreadId = GetCurrentThreadId();
  hObj = GetThreadDesktop(dwThreadId);
  if (hObj != (HDESK)0x0) {
    local_30[0] = u_Winlogon_004014b0[0];
    local_30[1] = u_Winlogon_004014b0[1];
    awStack_2c[0] = u_Winlogon_004014b0[2];
    awStack_2c[1] = u_Winlogon_004014b0[3];
    awStack_28[0] = u_Winlogon_004014b0[4];
    awStack_28[1] = u_Winlogon_004014b0[5];
    awStack_24[0] = u_Winlogon_004014b0[6];
    awStack_24[1] = u_Winlogon_004014b0[7];
    wStack_20 = u_Winlogon_004014b0[8];
    BVar1 = GetUserObjectInformationW(hObj,2,local_1c,0x12,(LPDWORD)0x0);
    if (BVar1 != 0) {
      local_c = 0;
      iVar2 = _wcsicmp(local_1c,local_30);
      uVar3 = extraout_EDX;
      if (iVar2 == 0) goto LAB_004056c6;
    }
  }
  hObject = OpenMutexW(0x100000,0,L"Global\\Windows.Machine.OOBE");
  uVar3 = extraout_EDX_00;
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
    uVar3 = extraout_EDX_01;
  }
LAB_004056c6:
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004056db */

void __fastcall
FUN_004056db(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,&stack0x0000000c,4,0);
  return;
}



/* Function: FUN_00405705 */

void __fastcall
FUN_00405705(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,pwVar2,iVar3,0);
  return;
}



/* Function: FUN_00405770 */

undefined4 FUN_00405770(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  *param_3 = 0;
  if (param_1 == 4) {
    uVar3 = GetTraceLoggerHandle(param_4);
    uVar1 = GetTraceEnableLevel(uVar3);
    uVar2 = GetTraceEnableFlags(uVar3);
  }
  else {
    if (param_1 != 5) {
      return 0x57;
    }
    uVar1 = 0;
    uVar3 = 0;
  }
  if (((*(byte *)(param_2 + 0x1a) & 2) != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    param_2 = *(int *)(param_2 + 0x10);
  }
  *(undefined1 *)(param_2 + 0x19) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  return 0;
}



/* Function: FUN_004057f7 */

undefined4 __fastcall FUN_004057f7(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_0040585d */

undefined4 __thiscall FUN_0040585d(void *this,int param_1)

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
    uVar2 = FUN_004058f8((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_004058b4 */

undefined4 __cdecl FUN_004058b4(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_0040594b(param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_004058f8 */

undefined4 __fastcall FUN_004058f8(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_0040594b */

undefined4 __fastcall
FUN_0040594b(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4,va_list param_5)

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



/* Function: FUN_00405991 */

wchar_t * __thiscall FUN_00405991(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_0040594b(param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_004059e8 */

void __fastcall FUN_004059e8(wchar_t *param_1,int param_2,int param_3)

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
  
  pcVar3 = DAT_00417b60;
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  iVar5 = param_2;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((pcVar3 != (code *)0x0) && (DAT_00417b70 != '\0')) {
      (*(code *)PTR_guard_check_icall_004182ac)(param_3,param_1,param_2);
      (*pcVar3)();
      iVar5 = extraout_EDX;
      if (*param_1 != L'\0') goto LAB_00405c40;
    }
    memset(local_208,0,0x200);
    pcVar3 = DAT_00417b78;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_00417b78 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_004182ac)(*(undefined4 *)(param_3 + 0xc),local_208,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    pwVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_20c = FUN_00405991(pcVar3,param_1,pwVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_20c = FUN_00405991(pcVar3,param_1,pwVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_20c = FUN_00405991(pvVar4,local_20c,pwVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    pwVar2 = FUN_00405991(local_208,local_20c,pwVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (iVar5 = extraout_EDX_00, *(int *)(param_3 + 0x20) != 0)) {
      pwVar2 = FUN_00405991((void *)0x0,pwVar2,pwVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        pwVar2 = FUN_00405991(this,pwVar2,pwVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        pwVar2 = FUN_00405991(pvVar4,pwVar2,pwVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00405991(pvVar4,pwVar2,pwVar1,L"\n");
          iVar5 = extraout_EDX_03;
        }
        else {
          FUN_00405991(pvVar4,pwVar2,pwVar1,L"[%hs]\n");
          iVar5 = extraout_EDX_02;
        }
      }
      else {
        FUN_00405991(pvVar4,pwVar2,pwVar1,L"[%hs(%hs)]\n");
        iVar5 = extraout_EDX_01;
      }
    }
  }
LAB_00405c40:
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,iVar5);
  return;
}



/* Function: FUN_00405c58 */

uint * __thiscall FUN_00405c58(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00405f61((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00405c7c */

LPVOID __fastcall FUN_00405c7c(DWORD param_1,SIZE_T param_2)

{
  FARPROC pFVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  HMODULE hModule;
  
  hHeap = GetProcessHeap();
  pvVar2 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_00417b18 == (FARPROC)0x0) {
    if (DAT_00417c0c != '\0') {
      return pvVar2;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00417b18 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_00417c0c = '\x01';
    if (DAT_00417b18 == (FARPROC)0x0) {
      DAT_00417c0c = '\x01';
      return pvVar2;
    }
  }
  pFVar1 = DAT_00417b18;
  (*(code *)PTR_guard_check_icall_004182ac)(hHeap,pvVar2);
  (*pFVar1)();
  return pvVar2;
}



/* Function: FUN_00405cf9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00405cf9(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00417bb4;
  _DAT_00417bb8 = param_1;
  LOCK();
  DAT_00417bb4 = DAT_00417bb4 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00405d12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00405d12(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00417c28;
  _DAT_00417b4c = param_1;
  LOCK();
  DAT_00417c28 = DAT_00417c28 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00405d2b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00405d2b(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00417ca0;
  _DAT_00417c1c = param_1;
  LOCK();
  DAT_00417ca0 = DAT_00417ca0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00405d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00405d50(undefined4 param_1)

{
  _DAT_00417c78 = param_1;
  return 1;
}



/* Function: FUN_00405d6a */

void FUN_00405d6a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00417b98;
  if (DAT_00417b98 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405d9a */

void __fastcall
FUN_00405d9a(undefined4 param_1,undefined4 param_2,LPCWSTR param_3,uint *param_4,char *param_5,
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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
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
      FUN_004057f7(param_5,param_6,(int)pcVar5);
      param_2 = extraout_EDX_01;
    }
  }
  else if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00405e80 */

undefined * __fastcall FUN_00405e80(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00417bc0 == '\0') {
    FUN_00405d9a(param_1,param_2,(LPCWSTR)FUN_00405d50,(uint *)0x0,&DAT_00417c30,0x40);
    DAT_00417bc0 = '\x01';
  }
  return &DAT_00417c30;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00405eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00405ec0 */

void FUN_00405ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00405f01 */

uint __fastcall FUN_00405f01(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_00417ba0;
  if (-1 < (int)param_1) {
    return 0;
  }
  if (param_1 != 0xc0000017) {
    if (DAT_00417ba0 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_004182ac)(param_1);
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



/* Function: FUN_00405f61 */

uint __fastcall FUN_00405f61(uint param_1)

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



/* Function: FUN_00406136 */

DWORD __fastcall
FUN_00406136(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0040bcca(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  return DVar1;
}



/* Function: FUN_00406172 */

uint __fastcall
FUN_00406172(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0040bcca(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_004061c1 */

void __fastcall FUN_004061c1(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00406172(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_004061de */

int __fastcall FUN_004061de(short *param_1)

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



/* Function: FUN_00406206 */

undefined1 FUN_00406206(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_00417b84;
  if (DAT_00417b94 != '\0') {
    return 1;
  }
  if (DAT_00417b84 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00406236 */

void __fastcall
FUN_00406236(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
    iVar3 = FUN_00405cf9(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_00405d12(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_0040bcca(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar6 = FUN_00405f61(0x8007029c);
      param_15[3] = uVar6;
    }
    iVar3 = FUN_00405d2b(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_00405d50(iVar3);
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
  iVar4 = DAT_00417bc4 + 1;
  DAT_00417bc4 = DAT_00417bc4 + 1;
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
  pcVar1 = DAT_00417b9c;
  if (DAT_00417b9c == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004182ac)();
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_00417b68;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00417b80;
  if (DAT_00417b80 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00417b7c;
  if (DAT_00417b7c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00417b8c;
  if ((DAT_00417b8c != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_004066af();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar6 = FUN_00405f61(0x8000ffff);
    param_15[3] = uVar6;
  }
  pcVar1 = DAT_00417b54;
  if (DAT_00417b5c == '\0') {
    if (DAT_00417b54 == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_004182ac)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00406427;
  }
  else {
LAB_00406427:
    pcVar1 = DAT_00417b60;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_00417b60 != (code *)0x0) && (DAT_00417b70 == '\0')) {
        (*(code *)PTR_guard_check_icall_004182ac)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_004059e8(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00406490;
    }
  }
  pcVar1 = DAT_00417b60;
  if ((DAT_00417b60 != (code *)0x0) && (DAT_00417b70 == '\0')) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00406490:
  pcVar1 = DAT_00417b88;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_00417b64 != '\0')) &&
     (DAT_00417b88 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004182ac)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004064c8 */

void __fastcall FUN_004064c8(int param_1)

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
  
  pcVar1 = DAT_00417ba4;
  if (DAT_00417ba4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_00417b90;
  if (DAT_00417b90 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00406535;
  uVar3 = 1;
  do {
    FUN_00405d6a(uVar3);
    iVar2 = extraout_ECX;
LAB_00406535:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_00406555 */

void __fastcall
FUN_00406555(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_0040bde8(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00406573 */

void __fastcall
FUN_00406573(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar2 = FUN_00405c58((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_00406555(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_004065b8 */

void __fastcall FUN_004065b8(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00406136(param_1,param_2,0x4017f0,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00405c58(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_00406555(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_00406619 */

void __fastcall FUN_00406619(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_retaddr;
  
  FUN_0040c077(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  return;
}



/* Function: FUN_00406638 */

void __fastcall FUN_00406638(int param_1,int param_2)

{
  FUN_0040c0ba(param_1,param_2);
  return;
}



/* Function: FUN_00406654 */

void __fastcall FUN_00406654(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_004065b8(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040666c */

void __fastcall FUN_0040666c(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_00406573(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040668d */

void __fastcall FUN_0040668d(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_00406573(param_1,0x137b,"onecore\\internal\\sdk\\inc\\wil\\Staging.h",param_1,param_1,
               unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_004066af */

void FUN_004066af(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004066bb */

void __fastcall FUN_004066bb(LPCSTR param_1)

{
  if (DAT_00417c18 == (HMODULE)0x0) {
    DAT_00417c18 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_00417c18,param_1);
  return;
}



/* Function: FUN_004066e7 */

FARPROC __fastcall FUN_004066e7(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_00417c70 == (HMODULE)0x0) &&
     (DAT_00417c70 = GetModuleHandleW(L"kernelbase.dll"), DAT_00417c70 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_00417c70,param_1);
  return pFVar1;
}



/* Function: FUN_00406720 */

void FUN_00406720(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_00417c18 == (HMODULE)0x0) {
    DAT_00417c18 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_00417c18,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00406770 */

void FUN_00406770(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_00417b24 == (code *)0x0) &&
     (DAT_00417b24 = (code *)FUN_004066bb("RtlNtStatusToDosErrorNoTeb"), DAT_00417b24 == (code *)0x0
     )) {
    return;
  }
  pcVar1 = DAT_00417b24;
  (*(code *)PTR_guard_check_icall_004182ac)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_004067b0 */

undefined4 FUN_004067b0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_00417c74 == (code *)0x0) {
    DAT_00417c74 = (code *)FUN_004066bb("RtlDllShutdownInProgress");
    if (DAT_00417c74 == (code *)0x0) {
      return 0;
    }
  }
  pcVar1 = DAT_00417c74;
  (*(code *)PTR_guard_check_icall_004182ac)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_004067f0 */

void FUN_004067f0(undefined1 *param_1)

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
  local_1e = DAT_00417ba8;
  local_1c = *(undefined2 *)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  if (DAT_00417bac == (FARPROC)0x0) {
    DAT_00417bac = FUN_004066e7("WilFailureNotifyWatchers");
    if (DAT_00417bac == (FARPROC)0x0) goto LAB_0040686c;
  }
  pFVar1 = DAT_00417bac;
  (*(code *)PTR_guard_check_icall_004182ac)(0,&local_28,&local_c);
  (*pFVar1)();
LAB_0040686c:
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



/* Function: FUN_004068a1 */

undefined4 FUN_004068a1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_00417c08 == (code *)0x0) &&
     (DAT_00417c08 = (code *)FUN_004066bb("NtQueryWnfStateData"), DAT_00417c08 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00417c08;
  (*(code *)PTR_guard_check_icall_004182ac)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_004068f5 */

undefined4 __fastcall
FUN_004068f5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_00417c7c == (code *)0x0) &&
     (DAT_00417c7c = (code *)FUN_004066bb("NtUpdateWnfStateData"), DAT_00417c7c == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00417c7c;
  (*(code *)PTR_guard_check_icall_004182ac)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_0040694e */

int __fastcall FUN_0040694e(int param_1,int param_2)

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



/* Function: FUN_004069cb */

uint * __fastcall FUN_004069cb(uint *param_1,uint param_2,uint *param_3)

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
    FUN_00406b31(param_1,param_2,0,param_3);
    break;
  case 1:
  case 5:
    FUN_00406c01(param_1,param_2,0,param_3);
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



/* Function: FUN_00406b31 */

void __fastcall FUN_00406b31(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_00406c01 */

void __fastcall FUN_00406c01(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_00406cca */

void __fastcall FUN_00406cca(undefined4 param_1,uint *param_2)

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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
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
    FUN_004096da((int)&local_38,iVar6);
    uVar4 = extraout_EDX;
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00406de4 */

void __fastcall FUN_00406de4(uint *param_1,undefined4 param_2,int param_3,uint *param_4)

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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  local_18 = (uint)(param_3 == 0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_1c = param_2;
  if (DAT_00417b20 == (code *)0x0) {
    DAT_00417b20 = (code *)FUN_004066bb("RtlQueryFeatureConfiguration");
    if (DAT_00417b20 == (code *)0x0) {
      iVar2 = -0x3ffffec7;
      goto LAB_00406eb7;
    }
  }
  pcVar1 = DAT_00417b20;
  (*(code *)PTR_guard_check_icall_004182ac)(local_1c,local_18,local_28,&local_14);
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
LAB_00406eb7:
  if (local_20 != (uint *)0x0) {
    *local_20 = (uint)(iVar2 != -0x7fffffde);
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,iVar2);
  return;
}



/* Function: FUN_00406ee4 */

undefined4 __fastcall FUN_00406ee4(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_00417b1c == (code *)0x0) &&
     (DAT_00417b1c = (code *)FUN_004066bb("RtlNotifyFeatureUsage"), DAT_00417b1c == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00417b1c;
  (*(code *)PTR_guard_check_icall_004182ac)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_00406f50 */

void FUN_00406f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if ((DAT_00417c24 == (FARPROC)0x0) &&
     (DAT_00417c24 = FUN_004066e7("LogStagedFeatureUsage"), DAT_00417c24 == (FARPROC)0x0)) {
    return;
  }
  pFVar1 = DAT_00417c24;
  (*(code *)PTR_guard_check_icall_004182ac)(param_1,param_2,param_3);
  (*pFVar1)();
  return;
}



/* Function: FUN_00406f94 */

void FUN_00406f94(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00406654(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406fc1 */

void FUN_00406fc1(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00406654(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406fec */

uint __fastcall FUN_00406fec(void *param_1,int *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  uVar1 = FUN_0040720f(param_1,local_c);
  if ((int)uVar1 < 0) {
    FUN_00406619(unaff_retaddr,100,&DAT_004016b4,uVar1);
    FUN_00406619(unaff_retaddr,0x6d,&DAT_004016b4,uVar1);
  }
  else {
    *param_2 = local_c[0] << 2;
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00407049 */

void __thiscall FUN_00407049(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_004066af();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004058f8(local_214,0x104,this,param_1);
  FUN_0040585d(local_214,0x401828);
  uVar4 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar4 != 0) {
    uVar2 = uVar4;
  }
  uVar2 = FUN_0040ae40(this,uVar4,uVar2,local_214);
  uVar3 = extraout_EDX;
  if ((int)uVar2 < 0) {
    FUN_00406619(unaff_retaddr,0x88,&DAT_004016b4,uVar2);
    uVar3 = extraout_EDX_00;
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004070f0 */

undefined4 __fastcall FUN_004070f0(HANDLE param_1,int *param_2)

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
    goto LAB_00407113;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00407113:
        uVar2 = FUN_00406638(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_004071e1:
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
        goto LAB_00407113;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00407113;
          }
          if (DVar1 == 0) goto LAB_004071e1;
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
  FUN_00406619(unaff_retaddr,uVar2,&DAT_004016b4,0x8000ffff);
  return 0x8000ffff;
}



/* Function: FUN_0040720f */

void __thiscall FUN_0040720f(void *this,int *param_1)

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
  
  local_c = DAT_00417380 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_004058f8(local_218,0x104,this,(int)this);
  FUN_0040585d(local_218,0x401828);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar4 = extraout_EDX;
    if (DVar2 != 2) {
      FUN_00406638(unaff_retaddr,0xcd);
      uVar4 = extraout_EDX_00;
    }
LAB_004072b9:
    if (pvVar1 == (HANDLE)0x0) goto LAB_004072d3;
  }
  else {
    iStack_220 = 0;
    uVar3 = FUN_004070f0(pvVar1,&iStack_220);
    if ((int)uVar3 < 0) {
      FUN_00406619(unaff_retaddr,0xd3,&DAT_004016b4,uVar3);
      uVar4 = extraout_EDX_01;
      goto LAB_004072b9;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00406f94(pvVar1);
  uVar4 = extraout_EDX_02;
LAB_004072d3:
  FUN_00414450(local_c ^ (uint)auStack_224,uVar4);
  return;
}



/* Function: FUN_004072f2 */

void __thiscall FUN_004072f2(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar5 = FUN_004061de(*(short **)(param_1 + 0x14));
  piVar2 = (int *)((int)this + 0x28);
  pcVar4 = local_c + iVar5 + (int)pcVar4;
  if (((*(int *)((int)this + 0x24) == 0) || ((char *)*piVar2 < pcVar4)) &&
     (pvVar6 = FUN_00405c7c(8,(SIZE_T)pcVar4), pvVar6 != (LPVOID)0x0)) {
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
    FUN_0040bd81(pcVar4,pcVar7,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_0040bd81(extraout_EAX,pcVar7,(char *)*local_8,(undefined4 *)((int)this + 0x14));
    _Dst = FUN_0040bd11(extraout_EAX_00,pcVar7,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar7 - (int)_Dst);
  }
  return;
}



/* Function: FUN_0040742e */

void __fastcall FUN_0040742e(int param_1)

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



/* Function: FUN_0040749d */

void __thiscall FUN_0040749d(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00405c7c(8,0xdc);
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
    FUN_004072f2(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_0040755b */

DWORD * __fastcall FUN_0040755b(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_00417b58;
  if (DAT_00417b58 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_00417b58[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_0040aed7(*DAT_00417b58,&local_8);
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



/* Function: FUN_004075e4 */

uint __fastcall FUN_004075e4(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_004075e4(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_004173c4 + 1;
        DAT_004173c4 = DAT_004173c4 + 1;
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



/* Function: FUN_004076a3 */

void __fastcall FUN_004076a3(int param_1,char *param_2,int param_3)

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
  iVar2 = DAT_00417b6c;
  if (DAT_00417b6c != 0) {
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
      uVar5 = FUN_004075e4(param_1,*pDVar6,param_2,param_3);
      if ((char)uVar5 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar6;
      local_5 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_004182ac)(param_1);
        bVar3 = (*pcVar1)();
        local_5 = local_5 | bVar3;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
    }
  }
  pcVar1 = DAT_00417b74;
  if (DAT_00417b74 != (code *)0x0) {
    if ((local_5 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (*(code *)PTR_guard_check_icall_004182ac)(uVar5,param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00407780 */

void FUN_00407780(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_004076a3((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_00417c80 != DVar2) {
    LOCK();
    iVar1 = DAT_00417ca4 + 1;
    UNLOCK();
    iVar3 = DAT_00417ca4 + 1;
    DAT_00417ca4 = iVar1;
    if (iVar3 < 4) {
      DAT_00417c80 = DVar2;
      this = FUN_0040755b(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_0040749d(this,param_1);
      }
      DAT_00417c80 = 0;
    }
    LOCK();
    DAT_00417ca4 = DAT_00417ca4 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_004077e5 */

void __fastcall FUN_004077e5(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_00407831 */

undefined4 __thiscall FUN_00407831(void *this,uint param_1)

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
    _Dst = FUN_00405c7c(0,_DstSize);
    if (_Dst == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    _MaxCount = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    memcpy_s(_Dst,_DstSize,*this,_MaxCount);
    FUN_0040ad7a((void *)((int)this + 0xc),(int)_Dst);
    *(LPVOID *)this = _Dst;
    *(rsize_t *)((int)this + 4) = _MaxCount + (int)_Dst;
    *(SIZE_T *)((int)this + 8) = (int)_Dst + _DstSize;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_004078bc */

undefined4 __thiscall FUN_004078bc(void *this,uint param_1)

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
    uVar2 = FUN_00407831(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_004078f2 */

undefined4 __thiscall FUN_004078f2(void *this,void *param_1,uint param_2)

{
  void *_Dst;
  undefined4 uVar1;
  errno_t eVar2;
  
  uVar1 = FUN_004078bc(this,param_2);
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



/* Function: FUN_00407950 */

void __thiscall FUN_00407950(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_004079ac(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00407aa5(this,param_2);
    }
  }
  return;
}



/* Function: FUN_0040798d */

void __fastcall FUN_0040798d(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401020;
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_00404843((undefined4 *)param_1[1]);
  }
  return;
}



/* Function: FUN_004079ac */

void __thiscall FUN_004079ac(void *this,undefined4 *param_1)

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
    uVar1 = FUN_0040498a(this_00,0,0x2000);
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
      FUN_004049cd((int)this_00,&DAT_00403df9,0x1000000,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00407aa5 */

void __thiscall FUN_00407aa5(void *this,undefined4 *param_1)

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
    FUN_00404b88((int)*(uint **)((int)this + 4),&DAT_00403f1c,param_1,param_1,&local_4c,&local_48,
                 &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                 &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
  }
  return;
}



/* Function: FUN_00407b94 */

void __thiscall FUN_00407b94(void *this,PVOID param_1)

{
  code *pcVar1;
  
  *(PVOID *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 1;
  FUN_00404863(param_1);
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)((int)this + 0xc) = 1;
  pcVar1 = *(code **)(*this + 4);
  (*(code *)PTR_guard_check_icall_004182ac)();
  (*pcVar1)();
  return;
}



/* Function: FUN_00407be0 */

undefined4 __thiscall FUN_00407be0(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_004173c8 != iVar1;
  iVar3 = DAT_004173c8;
  DAT_004173c8 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_004182ac)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00407c20 */

undefined4 * __thiscall FUN_00407c20(void *this,byte param_1)

{
  FUN_0040798d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407c47 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00407c47(int *param_1)

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
  
  local_c = DAT_00417380 ^ (uint)&local_102c;
  iVar6 = 0;
  uVar4 = 0xc;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar8 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_004068a1(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_00407d56;
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
LAB_00407d56:
            piVar5 = piVar5 + 3;
            iVar8 = local_1024;
          } while (piVar5 != local_101c);
        }
        iVar6 = FUN_004068f5(&DAT_00401bbc,local_1010,uVar7,piVar2,piVar2,local_1018,1);
        uVar4 = extraout_EDX_00;
        param_1 = local_1028;
      }
      local_1024 = iVar8 + 1;
    } while (((iVar6 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_00414450(local_c ^ (uint)&local_102c,uVar4);
  return;
}



/* Function: FUN_00407dcc */

void FUN_00407dcc(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_00417b50 == (code *)0x0) &&
     (DAT_00417b50 = (code *)FUN_004066bb("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_00417b50 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_00417b50;
  (*(code *)PTR_guard_check_icall_004182ac)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407e0a */

int __thiscall FUN_00407e0a(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_00407e37 */

void __thiscall FUN_00407e37(void *this,int param_1)

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



/* Function: FUN_00407e82 */

uint __fastcall FUN_00407e82(ushort *param_1)

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



/* Function: FUN_00407ead */

uint __thiscall FUN_00407ead(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  undefined4 local_8;
  
  _Dst = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_00407f46;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    memcpy_s(_Dst,2,&local_8,2);
    _Dst = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)_Dst + 4);
      if (param_2 < pvVar1) goto LAB_00407f46;
      memcpy_s(_Dst,4,(void *)((int)this + 4),4);
      _Dst = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)_Dst + 2);
    if (param_2 < pvVar1) goto LAB_00407f46;
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
LAB_00407f46:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_00407f75 */

uint __thiscall FUN_00407f75(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_00408006;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    memcpy_s(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_00408006;
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
    if (param_2 < puVar3) goto LAB_00408006;
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
LAB_00408006:
  return (uint)puVar3 & 0xffffff00;
}



/* Function: FUN_00408020 */

undefined2 * __thiscall
FUN_00408020(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_00407e82(&local_18);
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



/* Function: FUN_0040809e */

void __thiscall FUN_0040809e(void *this,int param_1)

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
  FUN_0040ad7a(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_0040ad7a((void *)(param_1 + 0x1c),local_8);
  FUN_0040ada4(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_00408127 */

void __thiscall FUN_00408127(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_0040668d(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_004081ca;
  }
  if (9 < param_2) {
    return;
  }
LAB_004081ca:
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



/* Function: FUN_00408212 */

undefined4 __thiscall FUN_00408212(void *this,int param_1)

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
  uVar3 = FUN_00407f75(&local_44,&local_14,*(ushort **)((int)this + 0x14));
  cVar2 = (char)uVar3;
  do {
    if (cVar2 == '\0') {
      uVar5 = FUN_0040c113(param_1);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    uVar3 = 0;
    if (local_40 != 0) {
      do {
        uVar4 = FUN_00407f75(&local_58,&local_14,*(ushort **)((int)this + 0x14));
        if ((char)uVar4 == '\0') break;
        local_18 = local_54;
        local_1c = (uint)local_50;
        local_20 = local_48;
        local_24 = (uint)local_3c;
        local_28 = local_34;
        local_2c = *(int **)(param_1 + 0x40);
        if (local_2c == (int *)0x0) {
          FUN_004066af();
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        pcVar1 = *(code **)(*local_2c + 0x10);
        (*(code *)PTR_guard_check_icall_004182ac)(&local_28,&local_24,&local_20,&local_1c,&local_18)
        ;
        cVar2 = (*pcVar1)();
        if (cVar2 == '\0') {
          uVar3 = FUN_0040c113(param_1);
          return uVar3 & 0xffffff00;
        }
        uVar3 = uVar3 + 1;
        this = local_30;
      } while (uVar3 < local_40);
    }
    uVar3 = FUN_00407f75(&local_44,&local_14,*(ushort **)((int)this + 0x14));
    cVar2 = (char)uVar3;
  } while( true );
}



/* Function: FUN_0040834f */

undefined4 __thiscall
FUN_0040834f(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_0040865b(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_004078bc(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_00408127(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_0040ad7a((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_0040ada4(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_004078bc((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_0040865b(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_00408407 */

uint __thiscall FUN_00408407(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_00407f75(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_00407e0a(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_00408492 */

uint __thiscall
FUN_00408492(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_00407f75(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_00407e37(param_1,local_c);
          uVar1 = local_14;
          goto LAB_00408588;
        }
        local_14 = FUN_00407e0a(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_00408588;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00407e37(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_00408407(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_00407f75(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_00407e0a(&local_28,param_3,param_4);
LAB_00408588:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_00407e37(&local_28,local_24 + param_5);
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



/* Function: FUN_004085c8 */

uint __thiscall FUN_004085c8(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_00407f75(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_00407e37(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_00407e37(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_0040865b */

uint __thiscall
FUN_0040865b(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar3 = FUN_00407f75(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar3 == '\0') break;
      iVar2 = FUN_00407e0a(&local_24,param_1,param_2);
      if (iVar2 < 0) {
LAB_004087b9:
        local_c = pvVar4;
        if ((char)uVar3 != '\0') goto LAB_004086e6;
        break;
      }
      if (iVar2 == 0) {
        pvVar4 = (void *)FUN_00408492(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          bVar1 = true;
          local_5 = '\x01';
          goto LAB_004087b9;
        }
        goto LAB_004087ab;
      }
      pvVar4 = (void *)FUN_004085c8(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_004086e6:
    pvVar4 = local_c;
    local_10 = 0;
    if (!bVar1) {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      local_10 = FUN_00407e82(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    uVar3 = FUN_00407e82(&local_38);
    in_EAX = *(uint *)((int)this + 0x18);
    uVar3 = uVar3 + local_10;
    if (uVar3 <= (-(uint)(*(uint *)((int)this + 0x14) < in_EAX) &
                 in_EAX - *(int *)((int)this + 0x14))) {
      memmove_s((void *)(uVar3 + (int)pvVar4),(in_EAX - uVar3) - (int)pvVar4,pvVar4,
                *(int *)((int)this + 0x14) - (int)pvVar4);
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + uVar3);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_00407ead(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_00407e37(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_00407ead(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_004087ab:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_004087fd */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004087fd(uint param_1,int param_2,undefined2 *param_3)

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
  
  local_14 = DAT_00417380 ^ (uint)&stack0xfffffff0;
  local_1028 = 0;
  local_1034 = 0;
  local_1038 = param_3;
  local_103c = param_1 + param_2 * 8;
  local_1024 = param_1;
  while( true ) {
    FUN_00408020(local_106c,*local_1038,local_1038[1],*(undefined1 *)(local_1038 + 2),local_1038[3],
                 *(undefined1 *)(local_1038 + 4));
    local_1020 = 0x1000;
    uVar2 = FUN_004068a1(extraout_ECX,&local_102c,local_1018,&local_1020);
    FUN_00405f01(uVar2);
    if (uVar2 != 0) {
      local_102c = 0;
      local_1020 = 0;
    }
    FUN_00408127(local_106c,local_1018,local_1020,0x1000);
    if (local_104b != '\0') break;
    local_10ac = &local_1030;
    local_1030 = 0;
    puStack_10a8 = &local_1034;
    local_10b0 = &PTR_FUN_00401030;
    puStack_10a4 = local_106c;
    local_1078 = &local_10b0;
    local_1048 = local_10ac;
    local_1044 = puStack_10a8;
    local_1040 = puStack_10a4;
    uVar3 = FUN_00408212(local_1038,(int)local_10b8);
    uVar2 = local_1024;
    local_1019 = (char)uVar3;
    if (local_104c == '\0') {
LAB_004089b8:
      uVar2 = uVar2 + 8;
      local_1034 = local_1030;
      local_1024 = uVar2;
    }
    else {
      iVar4 = local_1058 - local_105c;
      iVar4 = FUN_004068f5(local_1024,local_105c,iVar4,iVar4,iVar4,local_102c,1);
      if (iVar4 != -0x3fffffff) {
        if (iVar4 != 0) {
          FUN_004068f5(uVar2,local_105c,local_1058 - local_105c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_004089b8;
      }
      local_1028 = local_1028 + 1;
      local_1019 = '\0';
    }
    uVar1 = local_1028;
    FUN_0040ada4(&local_1050);
    uVar3 = extraout_EDX;
    if (((local_1019 != '\0') || (local_103c <= uVar2)) || (0x31 < uVar1)) goto LAB_00408a0b;
  }
  FUN_0040ada4(&local_1050);
  uVar3 = extraout_EDX_00;
LAB_00408a0b:
  FUN_00414450(local_14 ^ (uint)&stack0xfffffff0,uVar3);
  return;
}



/* Function: FUN_00408a26 */

void * __fastcall FUN_00408a26(void *param_1)

{
  FUN_00408020(param_1,0,4,1,4,0);
  FUN_00408020((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_00408020((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_00408a68 */

void __fastcall FUN_00408a68(undefined2 *param_1,undefined4 param_2)

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
  
  local_c = DAT_00417380 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_00401b80;
    local_3c = DAT_00401b7c;
    local_30 = DAT_00401b70;
    local_34 = DAT_00401b6c;
    local_28 = DAT_00401bb0;
    local_2c = DAT_00401bac;
    FUN_004087fd((uint)&local_3c,3,param_1);
    param_2 = extraout_EDX;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00401bb4;
    local_34 = DAT_00401b54;
    local_38 = DAT_00401bb8;
    local_2c = DAT_00401b74;
    local_30 = DAT_00401b58;
    local_28 = DAT_00401b78;
    FUN_004087fd((uint)&local_3c,3,param_1 + 0x12);
    param_2 = extraout_EDX_00;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00401ba4;
    local_34 = DAT_00401b3c;
    local_38 = DAT_00401ba8;
    local_2c = DAT_00401b94;
    local_30 = DAT_00401b40;
    local_24 = DAT_00401b5c;
    local_28 = DAT_00401b98;
    local_1c = DAT_00401b64;
    local_20 = DAT_00401b60;
    local_14 = DAT_00401b9c;
    local_18 = DAT_00401b68;
    local_10 = DAT_00401ba0;
    FUN_004087fd((uint)&local_3c,6,param_1 + 0x24);
    param_2 = extraout_EDX_01;
  }
  FUN_00414450(local_c ^ (uint)&local_3c,param_2);
  return;
}



/* Function: FUN_00408bbe */

void __thiscall FUN_00408bbe(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_004078f2(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_00408c35 */

void __thiscall FUN_00408c35(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_00408c94 */

void __thiscall FUN_00408c94(void *this,PSRWLOCK param_1)

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
            goto LAB_00408d19;
          }
        } while (uVar3 < uVar2);
      }
      local_14 = 0;
LAB_00408d19:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_10 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_004182ac)(local_14);
        (*local_10)();
      }
      if (this != (void *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
    } while (uVar3 < uVar2);
  }
  return;
}



/* Function: FUN_00408d67 */

void __fastcall FUN_00408d67(void *param_1)

{
  FUN_00408d94(param_1);
  FUN_0040ada4((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_00408f25((int)param_1 + 4);
  return;
}



/* Function: FUN_00408d94 */

void __fastcall FUN_00408d94(void *param_1)

{
  undefined4 extraout_EDX;
  undefined2 local_70 [54];
  
  FUN_00408a26(local_70);
  FUN_00408ed8(param_1,local_70);
  FUN_00408a68(local_70,extraout_EDX);
  FUN_00408f25((int)local_70);
  return;
}



/* Function: FUN_00408dcb */

undefined1 __thiscall FUN_00408dcb(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_0040ad58((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_0040ad35((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_00408e24 */

undefined1 __thiscall FUN_00408e24(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_00408e8f((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_00408dcb(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00408e8f */

void __fastcall FUN_00408e8f(PSRWLOCK param_1)

{
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar1;
  undefined2 local_70 [54];
  
  FUN_00408a26(local_70);
  AcquireSRWLockExclusive(param_1);
  FUN_00408ed8(param_1,local_70);
  uVar1 = extraout_EDX;
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
    uVar1 = extraout_EDX_00;
  }
  FUN_00408a68(local_70,uVar1);
  FUN_00408f25((int)local_70);
  return;
}



/* Function: FUN_00408ed8 */

void __thiscall FUN_00408ed8(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_0040809e(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_0040809e((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_0040809e((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_00408f25 */

void __fastcall FUN_00408f25(int param_1)

{
  FUN_0040ada4((int *)(param_1 + 100));
  FUN_0040ada4((int *)(param_1 + 0x40));
  FUN_0040ada4((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_00408f49 */

void __fastcall FUN_00408f49(undefined1 *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_0040adc4(piVar3,0);
  FUN_0040adc4(param_1 + 0x1c,0);
  FUN_0040ada4((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_004093cb(*(int *)(param_1 + 0x78));
  }
  FUN_0040ada4((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00407dcc(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_0040ada4((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0040b6b8(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*piVar3 != 0) {
    FUN_0040b6b8((PTP_TIMER)*piVar3);
  }
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    cVar1 = FUN_00406206();
    if (cVar1 == '\0') {
      FUN_0040b675(piVar3 + 1,(undefined4 *)&stack0xfffffff8);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_0040ae90(piVar3 + 2,0);
        FUN_0040ae90(piVar3 + 3,0);
        if (piVar3 != (int *)0x0) {
          DVar2 = GetLastError();
          FUN_00406fc1(piVar3);
          SetLastError(DVar2);
        }
        FUN_0040b407((int)piVar3);
        DVar2 = 0;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,DVar2,piVar3);
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        FUN_00406fc1(piVar3);
      }
    }
    else {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_00408d94(piVar3 + 4);
      }
    }
    return;
  }
  return;
}



/* Function: FUN_00408fe3 */

void __thiscall FUN_00408fe3(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((((*this != '\0') && (bVar1 = FUN_00409194((int)this), bVar1)) &&
      (cVar2 = FUN_00408e24(*(void **)((int)this + 0xc),param_1,param_2,param_3), cVar2 != '\0')) &&
     (cVar2 = FUN_00406206(), cVar2 == '\0')) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    FUN_00409221(this);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00409040 */

void __thiscall FUN_00409040(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_00406206(), cVar1 == '\0')) &&
     (bVar2 = FUN_00409194((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_00408bbe(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x409380,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_00408bbe((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_004090e0 */

void __fastcall FUN_004090e0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00406206();
  if (cVar1 == '\0') {
    bVar2 = FUN_00409194(param_1);
    if (bVar2) {
      FUN_00408c94(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_00408e8f(*(PSRWLOCK *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



/* Function: FUN_00409116 */

void __fastcall
FUN_00409116(char *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  if ((*param_1 != '\0') && (cVar1 = FUN_00406206(), param_2 = extraout_EDX, cVar1 == '\0')) {
    SRWLock = (PSRWLOCK)(param_1 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    local_e = 0;
    local_14 = param_3;
    local_10 = param_4;
    local_c = param_5;
    FUN_004078f2(param_1 + 0x7c,&local_14,0xc);
    FUN_00409282(param_1);
    param_2 = extraout_EDX_00;
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
      param_2 = extraout_EDX_01;
    }
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00409194 */

bool __fastcall FUN_00409194(int param_1)

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
        iVar1 = FUN_0040b096(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_00409221 */

void __fastcall FUN_00409221(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040c140,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040adc4(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_004077e5(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_00409282 */

void __fastcall FUN_00409282(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040c180,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040adc4(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_004077e5(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_004092f0 */

void FUN_004092f0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00408c94(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00409313 */

bool __fastcall FUN_00409313(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_00417b48;
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0x4c);
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_004066bb("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_00417b48 = pcVar2, pcVar2 == (code *)0x0)) {
      iVar3 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_004182ac)(FUN_004092f0,param_1,0,piVar1);
      iVar3 = (*pcVar2)();
    }
  }
  return iVar3 == 0;
}



/* Function: FUN_00409380 */

void FUN_00409380(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00408c94(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_004093a3 */

LPCRITICAL_SECTION __fastcall FUN_004093a3(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_004093cb */

void FUN_004093cb(int param_1)

{
  if ((param_1 != 0) && (DAT_00417cd0 != (PSRWLOCK)0x0)) {
    FUN_00408c35(DAT_00417cd0 + 0x1c,DAT_00417cd0,param_1);
  }
  return;
}



/* Function: FUN_004093f6 */

bool __fastcall
FUN_004093f6(uint *param_1,undefined4 param_2,byte param_3,int param_4,undefined4 *param_5)

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
  
  puVar5 = &DAT_00417cb0;
  if (param_4 != 0) {
    puVar5 = &DAT_00417b40;
  }
  local_c = param_1;
  if ((*puVar5 & 2) != 0) {
    if ((*puVar5 & 1) == 0) {
      return false;
    }
    *param_5 = 1;
    iVar2 = FUN_00406de4(param_1,param_2,(uint)param_3,(uint *)0x0);
    return iVar2 != 0;
  }
  iVar2 = FUN_004099f0();
  local_8 = 0;
  *param_5 = 1;
  iVar3 = FUN_00406de4(local_c,param_2,(uint)param_3,&local_8);
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
  if (DAT_0041773c == '\0') {
    return bVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00417740);
  if ((iVar2 != 0) && (iVar2 == DAT_0041774c)) {
    local_14 = 0;
    local_10 = puVar5;
    uVar4 = FUN_004078f2(&DAT_00417768,&local_14,8);
    if ((char)uVar4 != '\0') goto LAB_004094ce;
  }
  LOCK();
  *puVar5 = *puVar5 & 0xfffff7c1;
  UNLOCK();
LAB_004094ce:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00417740);
  return bVar6;
}



/* Function: FUN_004094f0 */

uint FUN_004094f0(undefined4 param_1,uint param_2,undefined4 *param_3)

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
  bVar1 = FUN_004093f6(local_20,param_1,(byte)uVar3,param_2 >> 7 & 1,param_3);
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



/* Function: FUN_00409570 */

void FUN_00409570(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_004090e0(0x417cc4);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_00406ee4(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_00408fe3(&DAT_00417cc4,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_00409116(&DAT_00417cc4,param_2 >> 0x1f,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_004095f0 */

void FUN_004095f0(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_00409040(&DAT_00417cc4,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_00417cc4 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_00417cd4);
      bVar1 = FUN_00409313(0x417cc4);
      if (bVar1) {
        FUN_00408bbe(&DAT_00417ce8,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00417cd4);
    }
  }
  return;
}



/* Function: FUN_00409660 */

void FUN_00409660(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_00417cc4 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_00417d14;
  }
  else {
    if (DAT_00417cc4 == '\0') {
      return;
    }
    this = &DAT_00417ce8;
  }
  FUN_00408c35(this,(PSRWLOCK)&DAT_00417cd4,param_1);
  return;
}



/* Function: FUN_004096a4 */

void __fastcall FUN_004096a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_00417bb0;
  if ((DAT_00417bb0 != (code *)0x0) || (pcVar1 = DAT_00417c14, DAT_00417c14 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_1,param_2,param_3,0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004096da */

void FUN_004096da(int param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ushort *)(param_1 + 4);
    do {
      FUN_004096a4(*(undefined4 *)(puVar1 + -2),(uint)*puVar1,(uint)puVar1[1]);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Function: FUN_00409713 */

void __fastcall FUN_00409713(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_00417c04;
  if ((DAT_00417c04 == (code *)0x0) && (pcVar1 = DAT_00417c20, DAT_00417c20 == (code *)0x0)) {
    *param_1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004182ac)(param_1,param_2,param_3);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040974b */

void FUN_0040974b(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00417ca8;
  if ((DAT_00417ca8 != (code *)0x0) || (pcVar1 = DAT_00417cac, DAT_00417cac != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040977d */

void __fastcall FUN_0040977d(undefined1 *param_1)

{
  int *this;
  
  this = (int *)(param_1 + 8);
  *param_1 = 0;
  FUN_0040adc4(this,0);
  *param_1 = 0;
  FUN_00409947((int)param_1);
  FUN_0040ada4((int *)(param_1 + 0x38));
  FUN_0040ada4((int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0040974b(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0040974b(*(undefined4 *)(param_1 + 0x14));
  }
  if (*this != 0) {
    FUN_0040b6b8((PTP_TIMER)*this);
  }
  return;
}



/* Function: FUN_004097dd */

void __thiscall FUN_004097dd(void *this,char *param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  char cVar1;
  char *local_c;
  void *local_8;
  
                    /* WARNING: Load size is inaccurate */
  if ((*this != '\0') &&
     (local_c = (char *)this, local_8 = this, cVar1 = FUN_00406206(), cVar1 == '\0')) {
    SRWLock = (PSRWLOCK)((int)this + 4);
    AcquireSRWLockExclusive(SRWLock);
    local_c = param_1;
    local_8 = (void *)param_2;
    FUN_004078f2((void *)((int)this + 0x1c),&local_c,8);
    FUN_0040998f(this);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00409838 */

void __fastcall FUN_00409838(char *param_1)

{
  PSRWLOCK SRWLock;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    FUN_00409947((int)param_1);
    param_1[0xc] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040986c */

void __fastcall FUN_0040986c(char *param_1)

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



/* Function: FUN_004098d1 */

undefined4 __fastcall FUN_004098d1(char *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  undefined4 uVar2;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x14) == 0) {
      piVar1 = FUN_0040acd7((int *)(param_1 + 0x14));
      FUN_00409713(piVar1,FUN_00409930,param_1);
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



/* Function: FUN_00409930 */

void FUN_00409930(char *param_1)

{
  FUN_0040986c(param_1);
  return;
}



/* Function: FUN_00409947 */

void __fastcall FUN_00409947(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (7 < (uint)((int)puVar1 - (int)puVar2)) {
    for (; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      FUN_00406cca(*puVar2,(uint *)puVar2[1]);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    FUN_004096a4(0,0xfe,0);
  }
  return;
}



/* Function: FUN_0040998f */

void __fastcall FUN_0040998f(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 8);
  if (*(char *)((int)param_1 + 0xc) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040c1d0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040adc4(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_004077e5(this,(char *)((int)param_1 + 0xc),300000,0);
  }
  return;
}



/* Function: FUN_004099f0 */

void FUN_004099f0(void)

{
  if (DAT_0041774c == 0) {
    FUN_004098d1(&DAT_0041773c);
    return;
  }
  return;
}



/* Function: FUN_00409a0b */

undefined4 __fastcall FUN_00409a0b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = DAT_00417c98;
  if ((DAT_00417c98 == (code *)0x0) && (pcVar2 = DAT_00417c9c, DAT_00417c9c == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004182ac)(param_1,param_2,param_3);
    uVar1 = (*pcVar2)();
  }
  return uVar1;
}



/* Function: FUN_00409a43 */

void __fastcall
FUN_00409a43(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_00417bbc;
  if ((DAT_00417bbc != (code *)0x0) && ((param_2 == 0 || (param_2 - 100U < 0x32)))) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_1,param_2,1);
    (*pcVar1)();
  }
  if (*param_5 != 0) {
    FUN_004097dd(&DAT_0041773c,param_1,param_4);
  }
  if (param_5[1] != 0) {
    FUN_004096a4(param_1,param_5[2],param_5[1]);
  }
  if ((param_5[4] == 0) && (DAT_0041773c != '\0')) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_00417740);
    if (DAT_00417754 == 0) {
      uVar3 = 0xffffffff;
      piVar2 = FUN_0040acd7(&DAT_00417754);
      FUN_00409713(piVar2,FUN_00409af0,uVar3);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00417740);
  }
  return;
}



/* Function: FUN_00409af0 */

void FUN_00409af0(void)

{
  FUN_00409838(&DAT_0041773c);
  return;
}



/* Function: FUN_00409b03 */

bool __fastcall
FUN_00409b03(uint *param_1,char *param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
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
  puVar3 = FUN_004069cb(param_1,param_5,local_3c);
  puVar6 = local_20;
  for (iVar4 = 6; pcVar2 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00409a43(local_8,param_5,0,param_1,(int *)local_20);
  if (param_3 != 0) {
    uVar5 = param_5 | 0x80000000;
    if (param_4 == 0) {
      uVar5 = param_5;
    }
    FUN_004096a4(pcVar2,uVar5,0);
  }
  pcVar1 = DAT_00417c10;
  if ((local_10 == 0) && (DAT_00417c10 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004182ac)(local_8,param_5,param_8);
    (*pcVar1)();
  }
  return local_10 == 0;
}



/* Function: FUN_00409b95 */

void __fastcall
FUN_00409b95(uint *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_8;
  
  uVar3 = (uint)*(byte *)(param_5 + 4);
  uVar6 = 3;
  local_8 = 3;
  uVar5 = 3;
  uVar4 = FUN_0040694e(3,param_6);
  bVar2 = FUN_00409b03(param_1,param_2,param_3,param_4,uVar4,uVar5,uVar6,uVar3);
  pcVar1 = DAT_00417cb8;
  if ((CONCAT31(extraout_var,bVar2) != 0) && (DAT_00417cb8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004182ac)(param_2,param_5,0,param_6,&local_8,0,0,1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00409c00 */

void FUN_00409c00(undefined4 param_1,uint param_2,undefined4 param_3)

{
  FUN_004096a4(param_1,param_2 | 0x40000000,param_3);
  return;
}



/* Function: FUN_00409c24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00409c24(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00417b28,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_00417b28;
    local_8 = &DAT_00417b2c;
    _DAT_00417b30 = 0;
    DAT_00417b34 = 0;
    _DAT_00417b38 = 0;
    _DAT_00417b2c = &PTR_FUN_00401020;
    _DAT_00417b3c = &DAT_00417058;
    FUN_00414653(FUN_00409cb0);
    local_10 = 0;
    FUN_0040b263((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00409cb0 */

void FUN_00409cb0(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00417b28,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_004182ac)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00409d00 */

void FUN_00409d00(uint param_1,ushort *param_2,undefined4 *param_3,int param_4,uint *param_5,
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
  
  puVar2 = FUN_00409c24();
  if ((*(int **)(puVar2 + 4) != (int *)0x0) && (**(int **)(puVar2 + 4) != 0)) {
    if (param_5 == (uint *)0x0) {
      if (param_6 == (uint *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          puVar2 = FUN_00409c24();
          puVar1 = *(uint **)(puVar2 + 4);
          if (2 < *puVar1) {
            uVar3 = FUN_0040498a(puVar1,1,0);
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
              FUN_00404ef8((int)puVar1,&DAT_004040da,param_2,param_2,local_c,&local_10,&local_44,
                           &local_48,&local_14,&local_18,&local_4e,&local_1c,&local_20,&local_24,
                           &local_4c,&local_28,&local_2c,&local_30,&local_40,&local_3c,&local_38,
                           &local_34);
            }
          }
        }
      }
      else {
        puVar2 = FUN_00409c24();
        puVar1 = *(uint **)(puVar2 + 4);
        if (5 < *puVar1) {
          uVar3 = FUN_0040498a(puVar1,4,0);
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
            FUN_00404e30((int)puVar1,&DAT_00404052,param_2,param_2,&local_34,&local_40,&local_44,
                         &local_48,&local_4c,&local_3c,&local_4e,&local_38);
          }
        }
      }
    }
    else {
      puVar2 = FUN_00409c24();
      if (5 < **(uint **)(puVar2 + 4)) {
        uVar3 = FUN_0040498a(*(uint **)(puVar2 + 4),2,0);
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
          FUN_00404d7b(extraout_ECX,&DAT_00403d0f,extraout_ECX,extraout_ECX,&local_38,&local_3c,
                       &local_48,&local_4c,&local_4e,&local_40,&local_44);
        }
      }
      if (((param_2 != (ushort *)0x0) && ((char)param_2[2] == '\x01')) && (param_4 != 0)) {
        puVar2 = FUN_00409c24();
        if (5 < **(uint **)(puVar2 + 4)) {
          uVar3 = FUN_0040498a(*(uint **)(puVar2 + 4),10,0);
          if ((char)uVar3 != '\0') {
            local_38 = param_8;
            local_3c = *param_5;
            local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
            local_40 = (uint)param_2[1];
            local_44 = (uint)*param_2;
            local_4c = param_1;
            local_4e = CONCAT11(local_4e._1_1_,1);
            FUN_00404d7b(extraout_ECX_00,&DAT_004041fa,extraout_ECX_00,extraout_ECX_00,&local_4c,
                         &local_44,&local_40,&local_48,&local_4e,&local_3c,&local_38);
          }
        }
      }
    }
  }
  return;
}



/* Function: FUN_0040a084 */

void FUN_0040a084(void)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 extraout_EDX;
  wchar_t *pwVar4;
  WCHAR *pWVar5;
  LPWSTR local_4c;
  WCHAR local_48 [32];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  pwVar4 = L"%SystemRoot%\\System32\\Sethc.exe";
  pWVar5 = local_48;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pWVar5 = *(undefined4 *)pwVar4;
    pwVar4 = pwVar4 + 2;
    pWVar5 = pWVar5 + 2;
  }
  local_4c = (LPWSTR)0x0;
  bVar1 = FUN_0040ac79(&local_4c,0x104);
  if (((bVar1) && (DVar2 = ExpandEnvironmentStringsW(local_48,local_4c,0x104), DVar2 != 0)) &&
     (DVar2 < 0x105)) {
    ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,local_4c,L"/AccessibilitySoundAgent",(LPCWSTR)0x0,0);
  }
  free(local_4c);
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040a110 */

void __fastcall FUN_0040a110(undefined4 *param_1)

{
  free((void *)*param_1);
  *param_1 = 0;
  return;
}



/* Function: FUN_0040a129 */

void FUN_0040a129(void)

{
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  BOOL local_18;
  PSID local_14;
  _SID_IDENTIFIER_AUTHORITY local_10;
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  local_10.Value[4] = '\0';
  local_10.Value[5] = '\x05';
  local_18 = 0;
  local_10.Value[0] = '\0';
  local_10.Value[1] = '\0';
  local_10.Value[2] = '\0';
  local_10.Value[3] = '\0';
  BVar1 = AllocateAndInitializeSid(&local_10,'\x01',4,0,0,0,0,0,0,0,&local_14);
  if (BVar1 == 0) {
    local_14 = (PSID)0x0;
  }
  uVar2 = extraout_EDX;
  if (local_14 != (PSID)0x0) {
    CheckTokenMembership((HANDLE)0x0,local_14,&local_18);
    FreeSid(local_14);
    uVar2 = extraout_EDX_00;
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040a1b2 */

void __fastcall FUN_0040a1b2(int param_1,wchar_t *param_2)

{
  HANDLE hObject;
  LSTATUS LVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  bool bVar4;
  int local_220;
  HKEY local_21c;
  undefined4 local_218;
  undefined4 local_214;
  uint local_210 [2];
  wchar_t local_208 [256];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  *param_2 = L'\0';
  bVar4 = true;
  local_208[0] = L'\0';
  hObject = OpenMutexW(0x100000,0,L"Global\\Windows.Machine.OOBE");
  if (hObject == (HANDLE)0x0) {
    local_21c = (HKEY)0x0;
    local_210[0] = 0x100;
    local_218 = 0;
    local_214 = 0;
    if (param_1 == 0) {
      LVar1 = FUN_004054e1(&local_21c,(HKEY)0x80000002,
                           L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\SlateLaunch"
                           ,0x20019);
      if ((LVar1 == 0) &&
         (LVar1 = FUN_00405567(&local_21c,L"ATapp",(LPBYTE)local_208,local_210), LVar1 == 0)) {
        iVar2 = 0;
        uVar3 = extraout_EDX_04;
        if (local_210[0] < 2) {
          bVar4 = false;
        }
        goto LAB_0040a2d1;
      }
LAB_0040a2b9:
      wcscpy_s(local_208,0x100,L"Narrator");
      iVar2 = 0;
      uVar3 = extraout_EDX_01;
    }
    else {
      LVar1 = FUN_004054e1(&local_21c,(HKEY)0x80000001,
                           L"Control Panel\\Accessibility\\SlateLaunch\\",0x20019);
      if (LVar1 != 0) goto LAB_0040a2b9;
      local_220 = 0;
      LVar1 = FUN_00405529(&local_21c,L"LaunchAT",(LPBYTE)&local_220);
      iVar2 = 0;
      uVar3 = extraout_EDX;
      if (LVar1 == 0) {
        bVar4 = local_220 != 0;
        if (bVar4) {
          iVar2 = FUN_00405567(&local_21c,L"ATapp",(LPBYTE)local_208,local_210);
          uVar3 = extraout_EDX_00;
        }
        if (iVar2 != 0) goto LAB_0040a2b9;
      }
    }
LAB_0040a2d1:
    if (local_21c != (HKEY)0x0) {
      RegCloseKey(local_21c);
      uVar3 = extraout_EDX_02;
    }
    if ((iVar2 != 0) || (!bVar4)) goto LAB_0040a305;
  }
  else {
    CloseHandle(hObject);
    wcscpy_s(local_208,0x100,L"Narrator");
  }
  wcscpy_s(param_2,0x100,local_208);
  uVar3 = extraout_EDX_03;
LAB_0040a305:
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040a36c */

void FUN_0040a36c(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  ushort *puStack_2cc;
  ushort local_2c8 [92];
  wchar_t local_210 [258];
  uint local_c;
  
  local_c = DAT_00417380 ^ (uint)&puStack_2cc;
  local_210[0] = L'\0';
  iVar2 = FUN_0040a129();
  cVar1 = FUN_0040a1b2(iVar2,local_210);
  uVar4 = extraout_EDX;
  if (cVar1 != '\0') {
    FUN_0040ca34(local_2c8,iVar2);
    piVar3 = FUN_00410cea(local_210);
    if (piVar3 != (int *)0x0) {
      puStack_2cc = local_2c8;
      *(undefined1 *)(piVar3 + 0xc) = 1;
      FUN_0040e19c(puStack_2cc,extraout_EDX_00,piVar3,puStack_2cc,0,0);
      if (iVar2 != 0) {
        FUN_0041140f(&puStack_2cc);
      }
    }
    FUN_0040ca7b((undefined4 *)local_2c8);
    uVar4 = extraout_EDX_01;
  }
  FUN_00414450(local_c ^ (uint)&puStack_2cc,uVar4);
  return;
}



/* Function: FUN_0040a40d */

bool FUN_0040a40d(void)

{
  SC_HANDLE hSCManager;
  SC_HANDLE hService;
  LPQUERY_SERVICE_CONFIGW lpServiceConfig;
  BOOL BVar1;
  bool bVar2;
  DWORD local_8;
  
  bVar2 = false;
  hSCManager = OpenSCManagerW((LPCWSTR)0x0,(LPCWSTR)0x0,1);
  if (hSCManager != (SC_HANDLE)0x0) {
    hService = OpenServiceW(hSCManager,L"Themes",1);
    if (hService != (SC_HANDLE)0x0) {
      local_8 = 0;
      QueryServiceConfigW(hService,(LPQUERY_SERVICE_CONFIGW)0x0,0,&local_8);
      lpServiceConfig = (LPQUERY_SERVICE_CONFIGW)LocalAlloc(0,local_8);
      if (lpServiceConfig != (LPQUERY_SERVICE_CONFIGW)0x0) {
        BVar1 = QueryServiceConfigW(hService,lpServiceConfig,local_8,&local_8);
        if (BVar1 != 0) {
          bVar2 = lpServiceConfig->dwStartType == 2;
        }
        LocalFree(lpServiceConfig);
      }
      CloseServiceHandle(hService);
    }
    CloseServiceHandle(hSCManager);
  }
  return bVar2;
}



/* Function: FUN_0040a49c */

void FUN_0040a49c(void)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  undefined4 local_288;
  uint local_284;
  undefined4 local_280;
  WCHAR local_27c [118];
  _OSVERSIONINFOW local_190;
  char local_76;
  wchar_t local_74 [54];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  local_288 = 0xc;
  local_284 = 0;
  local_280 = 0;
  BVar2 = SystemParametersInfoW(0x42,0xc,&local_288,0);
  uVar4 = extraout_EDX;
  if ((BVar2 != 0) && ((local_284 & 1) != 0)) {
    local_190.dwOSVersionInfoSize = 0x11c;
    BVar2 = GetVersionExW(&local_190);
    if (((BVar2 == 0) || ((uVar4 = extraout_EDX_00, local_76 != '\x03' && (local_76 != '\x02')))) &&
       (bVar1 = FUN_0040a40d(), uVar4 = extraout_EDX_01, bVar1)) {
      pwVar5 = L"%SystemRoot%\\Resources\\Themes\\Aero\\AeroLite.msstyles";
      pwVar6 = local_74;
      for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pwVar6 = *(undefined4 *)pwVar5;
        pwVar5 = pwVar5 + 2;
        pwVar6 = pwVar6 + 2;
      }
      *pwVar6 = *pwVar5;
      uVar7 = SHExpandEnvironmentStringsW(local_74,local_27c,0x104);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (((int)uVar7 - 1U < 0x104) &&
         (BVar2 = PathFileExistsW(local_27c), uVar4 = extraout_EDX_02, BVar2 != 0)) {
        iVar3 = 0;
        do {
          uVar7 = Ordinal_65(local_27c,L"NormalColor",L"NormalSize",0);
          uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if (-1 < (int)uVar7) break;
          Sleep(100);
          iVar3 = iVar3 + 1;
          uVar4 = extraout_EDX_03;
        } while (iVar3 < 0x1e);
      }
    }
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040a59f */

void __fastcall FUN_0040a59f(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar5;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50;
  _EVENT_DATA_DESCRIPTOR local_4c [2];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_004102d9();
  uVar5 = extraout_EDX;
  if ((char)uVar1 == '\0') {
    piVar2 = FUN_00410cea(L"narrator");
    uVar3 = FUN_0040dc40(param_1,extraout_EDX_00,piVar2);
    FUN_00410410();
    uVar5 = extraout_EDX_01;
    if (5 < DAT_00417028) {
      uVar4 = FUN_0040498a(&DAT_00417028,0,0x4000);
      uVar5 = extraout_EDX_02;
      if ((char)uVar4 != '\0') {
        local_1c = &local_50;
        local_5c = 0x2000000;
        local_2c = &local_5c;
        local_50 = ~uVar3 >> 0x1f;
        local_58 = 0;
        local_18 = 0;
        local_14 = 4;
        local_10 = 0;
        local_28 = 0;
        local_24 = 8;
        local_20 = 0;
        FUN_004048f5(0x417028,&DAT_00403cb1,(LPCGUID)0x0,(LPCGUID)0x0,4,local_4c);
        uVar5 = extraout_EDX_03;
      }
    }
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar5);
  return;
}



/* Function: FUN_0040a65b */

void FUN_0040a65b(void)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  WCHAR local_418 [260];
  wchar_t local_210 [39];
  undefined1 local_1c2 [442];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  pwVar3 = L"%SystemRoot%\\Speech\\Common\\sapisvr.exe";
  pwVar4 = local_210;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pwVar4 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar4 = pwVar4 + 2;
  }
  *pwVar4 = *pwVar3;
  memset(local_1c2,0,0x1ba);
  uVar5 = SHExpandEnvironmentStringsW(local_210,local_418,0x104);
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 != 0) {
    ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,local_418,L"-SpeechUX",(LPCWSTR)0x0,1);
    uVar2 = extraout_EDX;
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040a6e3 */

/* WARNING: Removing unreachable block (ram,0x0040aa77) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040a6e3(uint param_1,int param_2)

{
  wchar_t wVar1;
  REGHANDLE RVar2;
  ushort *puVar3;
  char cVar4;
  bool bVar5;
  wchar_t *pwVar6;
  uint uVar7;
  ushort *puVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  byte *pbVar11;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 uVar12;
  undefined1 uVar13;
  int *piVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  ushort *puStack_d0;
  undefined4 uStack_cc;
  ushort **local_c8;
  undefined4 local_c4;
  ushort *apuStack_c0 [47];
  
  DAT_00417bc8 = &DAT_00401b84;
  DAT_00417be8 = 1;
  puVar15 = &DAT_00417bd0;
  DAT_00417be0 = 0;
  DAT_00417bd0 = 0;
  piVar14 = (int *)&DAT_00417bc8;
  DAT_00417be9 = 0;
  _DAT_00417bea = 0;
  _DAT_00417bec = 0;
  PTR_LOOP_00417050 = (undefined *)&DAT_00417bd0;
  do {
    local_c4 = 0;
    local_c8 = (ushort **)*piVar14;
    piVar14 = piVar14 + 1;
    puVar15[8] = local_c8;
    RegisterTraceGuidsW(FUN_00405770,puVar15,local_c8,1,&local_c8,0,0,puVar15 + 2);
    puVar15 = (undefined4 *)*puVar15;
  } while (puVar15 != (undefined4 *)0x0);
  FUN_00404863(&DAT_00417028);
  FUN_00404863(&DAT_00417000);
  SetProcessShutdownParameters(0x100,1);
  bVar5 = false;
  if (param_1 == 2) {
    pwVar9 = *(wchar_t **)(param_2 + 4);
    pwVar6 = L"/hardwarebuttonlaunch";
    do {
      wVar1 = *pwVar6;
      bVar16 = (ushort)wVar1 < (ushort)*pwVar9;
      if (wVar1 != *pwVar9) {
LAB_0040a7ce:
        uVar7 = -(uint)bVar16 | 1;
        goto LAB_0040a7d2;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar6[1];
      bVar16 = (ushort)wVar1 < (ushort)pwVar9[1];
      if (wVar1 != pwVar9[1]) goto LAB_0040a7ce;
      pwVar6 = pwVar6 + 2;
      pwVar9 = pwVar9 + 2;
    } while (wVar1 != L'\0');
    uVar7 = 0;
LAB_0040a7d2:
    if (uVar7 == 0) {
      bVar5 = true;
      FUN_0040a36c();
    }
  }
  puVar8 = (ushort *)FUN_0040a129();
  puStack_d0 = puVar8;
  if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
     ((PTR_LOOP_00417050[0x1c] & 0x10) != 0)) {
    pwVar9 = L"true";
    if (puVar8 == (ushort *)0x0) {
      pwVar9 = L"false";
    }
    FUN_00405705(10,&DAT_00401b44,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00417050 + 0x14),pwVar9);
  }
  FUN_0040ca34(apuStack_c0,puVar8);
  if (bVar5) goto LAB_0040a901;
  local_c8 = apuStack_c0;
  if ((2 < param_1) && (iVar10 = lstrcmpiW(L"/start",*(LPCWSTR *)(param_2 + 4)), iVar10 == 0)) {
    uVar13 = 0;
    uStack_d2 = 0;
    uStack_d1 = 0;
    if (param_1 < 4) {
LAB_0040a8a5:
      uVar7 = FUN_0040b5e5(&DAT_00417c88);
      if (((char)uVar7 != '\0') &&
         (((3 < param_1 && (puStack_d0 != (ushort *)0x0)) &&
          (iVar10 = lstrcmpiW(L"/launchnarratorupdates",*(LPCWSTR *)(param_2 + 0xc)), iVar10 == 0)))
         ) {
        uVar13 = 1;
      }
    }
    else {
      iVar10 = lstrcmpiW(L"/hardwarebuttonlaunch",*(LPCWSTR *)(param_2 + 0xc));
      if (iVar10 == 0) {
        uStack_d2 = 1;
      }
      else {
        if ((puStack_d0 == (ushort *)0x0) ||
           (iVar10 = lstrcmpiW(L"/launchnarratorhome",*(LPCWSTR *)(param_2 + 0xc)), iVar10 != 0))
        goto LAB_0040a8a5;
        uStack_d1 = 1;
        uStack_d2 = 0;
      }
    }
    piVar14 = FUN_00410cea(*(short **)(param_2 + 8));
    puVar8 = puStack_d0;
    if (piVar14 != (int *)0x0) {
      iVar10 = lstrcmpiW(L"speechreco",*(LPCWSTR *)(param_2 + 8));
      if (iVar10 == 0) {
        FUN_0040a65b();
        puVar8 = puStack_d0;
      }
      else {
        *(undefined1 *)(piVar14 + 0xc) = uStack_d2;
        *(undefined1 *)((int)piVar14 + 0x31) = uStack_d1;
        uVar7 = FUN_0040b5e5(&DAT_00417c88);
        if ((char)uVar7 != '\0') {
          *(undefined1 *)((int)piVar14 + 0x32) = uVar13;
        }
        FUN_0040e19c((ushort *)apuStack_c0,extraout_EDX,piVar14,extraout_ECX_00,0,0);
        FUN_0041140f(&local_c8);
        puVar8 = puStack_d0;
      }
    }
    goto LAB_0040a901;
  }
  uVar7 = FUN_004114c2(&local_c8);
  cVar4 = FUN_0040563e();
  uVar12 = extraout_EDX_00;
  if ((cVar4 == '\0') || (FUN_0040a084(), uVar12 = extraout_EDX_01, uVar7 != 1)) {
    if (1 < uVar7) {
      iVar10 = lstrcmpiW(L"/colorfiltershortcut",*(LPCWSTR *)(param_2 + 4));
      uVar12 = extraout_EDX_04;
      if (iVar10 == 0) {
        if ((uVar7 == 3) &&
           (iVar10 = lstrcmpiW(L"/resettransferkeys",*(LPCWSTR *)(param_2 + 8)), iVar10 == 0)) {
          FUN_0041269c(0);
        }
        piVar14 = FUN_00410cea(L"ColorFiltering");
        FUN_0040e19c((ushort *)apuStack_c0,extraout_EDX_05,piVar14,extraout_ECX_01,0,0);
        goto LAB_0040a901;
      }
      goto LAB_0040a9a0;
    }
LAB_0040aa50:
    FUN_0040e6d3(apuStack_c0,uVar12);
    FUN_0040b39b(&puStack_d0,(int *)&PTR_PTR_004172c0);
    FUN_0040b33b(&puStack_d0,"narrator");
    puVar3 = puStack_d0;
    puVar15 = FUN_0040bc9a(apuStack_c0,puStack_d0);
    FUN_004055df((undefined4 *)(puVar3 + -8));
    if (puVar15 != (undefined4 *)0x0) {
      cVar4 = FUN_0040563e();
      if ((cVar4 == '\0') && (puVar8 != (ushort *)0x0)) {
        if ((5 < DAT_00417028) &&
           (uVar7 = FUN_0040498a(&DAT_00417028,0,0x4000), (char)uVar7 != '\0')) {
          pbVar11 = &DAT_00403d80;
          iVar10 = extraout_ECX_02;
LAB_0040ab04:
          local_c8 = &puStack_d0;
          uStack_cc = 0;
          puStack_d0 = (ushort *)0x2000000;
          FUN_004050ef(iVar10,pbVar11,iVar10,iVar10,&local_c8);
        }
      }
      else {
        cVar4 = FUN_0040563e();
        if ((cVar4 != '\0') &&
           ((5 < DAT_00417028 && (uVar7 = FUN_0040498a(&DAT_00417028,0,0x4000), (char)uVar7 != '\0')
            ))) {
          pbVar11 = &DAT_00403dbc;
          iVar10 = extraout_ECX_03;
          goto LAB_0040ab04;
        }
      }
    }
    puVar15 = FUN_0040bc9a(apuStack_c0,(ushort *)L"magnifierpane");
    uVar12 = extraout_EDX_06;
    if (puVar15 != (undefined4 *)0x0) {
      cVar4 = FUN_0040563e();
      if ((cVar4 == '\0') && (puVar8 != (ushort *)0x0)) {
        uVar12 = extraout_EDX_07;
        if ((5 < DAT_00417000) &&
           (uVar7 = FUN_0040498a(&DAT_00417000,0,0x4000), uVar12 = extraout_EDX_08,
           (char)uVar7 != '\0')) {
          pbVar11 = &DAT_00403d80;
          iVar10 = extraout_ECX_04;
LAB_0040ab94:
          local_c8 = &puStack_d0;
          uStack_cc = 0;
          puStack_d0 = (ushort *)0x2000000;
          FUN_004050ef(iVar10,pbVar11,iVar10,iVar10,&local_c8);
          uVar12 = extraout_EDX_11;
        }
      }
      else {
        cVar4 = FUN_0040563e();
        uVar12 = extraout_EDX_09;
        if ((cVar4 != '\0') &&
           ((5 < DAT_00417000 &&
            (uVar7 = FUN_0040498a(&DAT_00417000,0,0x4000), uVar12 = extraout_EDX_10,
            (char)uVar7 != '\0')))) {
          pbVar11 = &DAT_00403dbc;
          iVar10 = extraout_ECX_05;
          goto LAB_0040ab94;
        }
      }
    }
    FUN_0040dddc((ushort *)apuStack_c0,uVar12);
    if (((undefined **)PTR_LOOP_00417050 == &PTR_LOOP_00417050) ||
       ((PTR_LOOP_00417050[0x1c] & 0x10) == 0)) goto LAB_0040a901;
    uVar12 = *(undefined4 *)(PTR_LOOP_00417050 + 0x14);
    uVar18 = *(undefined4 *)(PTR_LOOP_00417050 + 0x10);
    uVar17 = 0xc;
  }
  else {
    FUN_0040a49c();
    uVar12 = extraout_EDX_02;
LAB_0040a9a0:
    if ((uVar7 != 2) ||
       (iVar10 = lstrcmpiW(L"/SessionTransit",*(LPCWSTR *)(param_2 + 4)), uVar12 = extraout_EDX_03,
       iVar10 != 0)) goto LAB_0040aa50;
    FUN_0040dfe3(apuStack_c0);
    if (((undefined **)PTR_LOOP_00417050 == &PTR_LOOP_00417050) ||
       ((PTR_LOOP_00417050[0x1c] & 0x10) == 0)) goto LAB_0040a901;
    uVar12 = *(undefined4 *)(PTR_LOOP_00417050 + 0x14);
    uVar18 = *(undefined4 *)(PTR_LOOP_00417050 + 0x10);
    uVar17 = 0xb;
  }
  FUN_004056db(uVar17,&DAT_00401b44,uVar18,uVar12);
LAB_0040a901:
  FUN_0040a59f((int *)apuStack_c0);
  if (((puVar8 != (ushort *)0x0) && (cVar4 = FUN_0040563e(), cVar4 == '\0')) &&
     (cVar4 = FUN_00414115(), cVar4 == '\0')) {
    bVar5 = FUN_00411eb8();
    FUN_0040d001(extraout_ECX,(uint)bVar5);
  }
  puVar15 = (undefined4 *)PTR_LOOP_00417050;
  if ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) {
    for (; puVar15 != (undefined4 *)0x0; puVar15 = (undefined4 *)*puVar15) {
      if (puVar15[2] != 0 || puVar15[3] != 0) {
        UnregisterTraceGuids(puVar15[2],puVar15[3]);
        puVar15[2] = 0;
        puVar15[3] = 0;
      }
    }
    PTR_LOOP_00417050 = (undefined *)&PTR_LOOP_00417050;
  }
  RVar2 = _DAT_00417040;
  DAT_00417028 = 0;
  _DAT_00417040 = 0.0;
  EventUnregister(RVar2);
  RVar2 = _DAT_00417018;
  DAT_00417000 = 0;
  _DAT_00417018 = 0.0;
  EventUnregister(RVar2);
  FUN_0040ca7b(apuStack_c0);
  return 1;
}



/* Function: FUN_0040ac79 */

bool __thiscall FUN_0040ac79(void *this,uint param_1)

{
  void *pvVar1;
  bool bVar2;
  
  if ((int)((ulonglong)param_1 * 2 >> 0x20) == 0) {
    pvVar1 = malloc((size_t)((ulonglong)param_1 * 2));
    bVar2 = pvVar1 != (void *)0x0;
    *(void **)this = pvVar1;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Function: FUN_0040acb2 */

void __fastcall FUN_0040acb2(undefined1 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00406206();
  if (cVar1 != '\0') {
    *param_1 = 0;
    FUN_00409947((int)param_1);
    return;
  }
  FUN_0040977d(param_1);
  return;
}



/* Function: FUN_0040acd7 */

int * __fastcall FUN_0040acd7(int *param_1)

{
  int iVar1;
  DWORD dwErrCode;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    dwErrCode = GetLastError();
    FUN_0040974b(iVar1);
    SetLastError(dwErrCode);
  }
  *param_1 = 0;
  return param_1;
}



/* Function: FUN_0040ad08 */

void __fastcall FUN_0040ad08(undefined1 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00406206();
  if (cVar1 == '\0') {
    FUN_00408f49(param_1);
    return;
  }
  *param_1 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0040b1c9(*(int **)(param_1 + 8));
    return;
  }
  return;
}



/* Function: FUN_0040ad35 */

void __thiscall FUN_0040ad35(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0040834f(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_0040ad58 */

void __fastcall FUN_0040ad58(void *param_1)

{
  FUN_0040834f(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_0040ad7a */

void __thiscall FUN_0040ad7a(void *this,int param_1)

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



/* Function: FUN_0040ada4 */

void __fastcall FUN_0040ada4(int *param_1)

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



/* Function: FUN_0040adc4 */

void __thiscall FUN_0040adc4(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_0040b6b8(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040adfb */

void __fastcall FUN_0040adfb(int *param_1)

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



/* Function: FUN_0040ae40 */

undefined4 __thiscall FUN_0040ae40(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_004061c1(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_0040ae90(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_0040ae90 */

void __thiscall FUN_0040ae90(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00406f94(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040aec7 */

void __fastcall FUN_0040aec7(int *param_1)

{
  FUN_004055df((undefined4 *)(*param_1 + -0x10));
  return;
}



/* Function: FUN_0040aed7 */

void __fastcall FUN_0040aed7(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004058b4(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040ae90(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_004061c1(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_0040afc3;
  }
  FUN_0040b675(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_00406fec(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_0040aff1:
    FUN_00406619(unaff_retaddr,uVar3,&DAT_004016b4,uVar2);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_0040b459((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_0040aff1;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00406fc1(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00406f94(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_0040afc3:
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040b096 */

void __fastcall FUN_0040b096(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_004058b4(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0040ae90(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_004061c1(extraout_ECX);
    uVar3 = extraout_EDX;
    goto LAB_0040b185;
  }
  FUN_0040b675(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_00406fec(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_0040b1b3:
    FUN_00406619(unaff_retaddr,uVar3,&DAT_004016b4,uVar2);
    uVar3 = extraout_EDX_04;
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_0040b51e((int)local_210,&local_214,param_2);
    uVar3 = extraout_EDX_03;
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_0040b1b3;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
    uVar3 = extraout_EDX_00;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00406fc1(local_21c);
    uVar3 = extraout_EDX_01;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00406f94(local_214);
    uVar3 = extraout_EDX_02;
  }
LAB_0040b185:
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040b1c9 */

void __fastcall FUN_0040b1c9(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00406206();
  if (cVar1 == '\0') {
    FUN_0040b675(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_0040ae90(param_1 + 2,0);
      FUN_0040ae90(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00406fc1(local_8);
        SetLastError(DVar2);
      }
      FUN_0040b407((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00406fc1(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_00408d94(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_0040b263 */

void __fastcall FUN_0040b263(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_00407b94((void *)(*param_1 + 4),*(PVOID *)(*param_1 + 0x14));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_0040b294 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b294(void)

{
  _DAT_00417cc8 = "WilStaging_02";
  DAT_00417cc4 = 0;
  _DAT_00417ccc = 0;
  DAT_00417cd0 = 0;
  _DAT_00417cd4 = 0;
  _DAT_00417cd8 = 0;
  _DAT_00417cdc = 0;
  _DAT_00417ce0 = 0;
  _DAT_00417ce4 = 0;
  FUN_004093a3((LPCRITICAL_SECTION)&DAT_00417ce8);
  _DAT_00417d10 = 0;
  FUN_004093a3((LPCRITICAL_SECTION)&DAT_00417d14);
  _DAT_00417d4c = 0;
  _DAT_00417d3c = 0;
  uRam00417d40 = 0;
  uRam00417d44 = 0;
  uRam00417d48 = 0;
  DAT_00417cc4 = 1;
  return;
}



/* Function: FUN_0040b30d */

undefined1 __thiscall FUN_0040b30d(void *this,uint param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && ((param_1 & 0xffff0000) == 0)) {
    FUN_0040b6e3(this,param_1 & 0xffff);
    uVar1 = 1;
  }
  return uVar1;
}



/* Function: FUN_0040b33b */

int * __thiscall FUN_0040b33b(void *this,LPCSTR param_1)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = MultiByteToWideChar(3,0,param_1,-1,(LPWSTR)0x0,0);
    iVar1 = iVar1 + -1;
    if (0 < iVar1) {
      lpWideCharStr = (LPWSTR)FUN_0040b75e(this,iVar1);
      MultiByteToWideChar(3,0,param_1,-1,lpWideCharStr,iVar1);
      FUN_0040ba7b(this,iVar1);
      return (int *)this;
    }
  }
  FUN_0040b78d((int *)this);
  return (int *)this;
}



/* Function: FUN_0040b39b */

int * __thiscall FUN_0040b39b(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    (*(code *)PTR_guard_check_icall_004182ac)();
    iVar2 = (*pcVar1)();
    *(int *)this = iVar2 + 0x10;
    return (int *)this;
  }
  FUN_00405404(-0x7fffbffb);
  pcVar1 = (code *)swi(3);
  piVar3 = (int *)(*pcVar1)();
  return piVar3;
}



/* Function: FUN_0040b3dc */

void __fastcall FUN_0040b3dc(int param_1)

{
  FUN_0040b61a((int *)(param_1 + 0x18));
  FUN_0040b432((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00406f94(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040b407 */

void __fastcall FUN_0040b407(int param_1)

{
  FUN_00408d67((void *)(param_1 + 0x10));
  FUN_0040b432((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00406f94(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040b432 */

void __fastcall FUN_0040b432(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00406f94((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00406f94((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0040b459 */

uint __fastcall FUN_0040b459(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00405c7c(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00406619(unaff_retaddr,0x148,&DAT_004016b4,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004066af();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00407049(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00406619(unaff_retaddr,0x14b,&DAT_004016b4,uVar3);
    }
    else {
      FUN_0040b7d6(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_0040b432(local_10);
  }
  FUN_0040ada4((int *)&local_18);
  return uVar3;
}



/* Function: FUN_0040b51e */

uint __fastcall FUN_0040b51e(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00405c7c(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00406619(unaff_retaddr,0x148,&DAT_004016b4,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004066af();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00407049(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00406619(unaff_retaddr,0x14b,&DAT_004016b4,uVar3);
    }
    else {
      FUN_0040b83a(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_0040b432(local_10);
  }
  FUN_0040ada4((int *)&local_18);
  return uVar3;
}



/* Function: FUN_0040b5e5 */

uint __fastcall FUN_0040b5e5(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_c;
  void *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_0040b89e(param_1,(uint *)&local_c);
  uVar1 = local_c._0_1_;
  local_8 = (void *)(CONCAT31(local_8._1_3_,local_c._0_1_) & 0xffffff01);
  uVar2 = FUN_0040b9a3(param_1,(byte)local_8);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_0040b61a */

void __fastcall FUN_0040b61a(int *param_1)

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
        FUN_0040742e((int)lpMem + 8);
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



/* Function: FUN_0040b675 */

void __thiscall FUN_0040b675(void *this,undefined4 *param_1)

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
    FUN_0040666c(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_0040b6b8 */

void FUN_0040b6b8(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0040b6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_0040b6e3 */

undefined4 __thiscall FUN_0040b6e3(void *this,uint param_1)

{
  HMODULE hModule;
  HRSRC pHVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  hModule = (HMODULE)FUN_0040c895(0);
  if (hModule != (HMODULE)0x0) {
    iVar4 = 1;
    do {
      pHVar1 = FindResourceExW(hModule,(LPCWSTR)0x6,(LPCWSTR)((param_1 >> 4) + 1 & 0xffff),0);
      if ((pHVar1 != (HRSRC)0x0) &&
         (puVar2 = FUN_0040545b(hModule,pHVar1,param_1), puVar2 != (ushort *)0x0)) {
        if (hModule == (HMODULE)0x0) {
          return 0;
        }
        uVar3 = FUN_0040b9fc(this,hModule,param_1);
        return uVar3;
      }
      hModule = (HMODULE)FUN_0040c895(iVar4);
      iVar4 = iVar4 + 1;
    } while (hModule != (HMODULE)0x0);
  }
  return 0;
}



/* Function: FUN_0040b75e */

int __thiscall FUN_0040b75e(void *this,int param_1)

{
                    /* WARNING: Load size is inaccurate */
  if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - param_1) < 0) {
    FUN_0040bb45(this,param_1);
  }
                    /* WARNING: Load size is inaccurate */
  return *this;
}



/* Function: FUN_0040b78d */

void __fastcall FUN_0040b78d(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *param_1;
  piVar1 = *(int **)(iVar3 + -0x10);
  if (*(int *)(iVar3 + -0xc) != 0) {
    if (*(int *)(iVar3 + -4) < 0) {
      FUN_0040ba7b(param_1,0);
    }
    else {
      FUN_004055df((undefined4 *)(iVar3 + -0x10));
      pcVar2 = *(code **)(*piVar1 + 0xc);
      (*(code *)PTR_guard_check_icall_004182ac)();
      iVar3 = (*pcVar2)();
      *param_1 = iVar3 + 0x10;
    }
  }
  return;
}



/* Function: FUN_0040b7d6 */

undefined4 * __thiscall FUN_0040b7d6(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_0040b83a */

undefined4 * __thiscall FUN_0040b83a(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_00408a26((void *)((int)this + 0x14));
  FUN_004093a3((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_0040b89e */

uint * __thiscall FUN_0040b89e(void *this,uint *param_1)

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
  local_10 = FUN_004099f0();
  FUN_0040baae(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_0041773c == '\0')) goto LAB_0040b97d;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00417740);
  if ((local_10 == 0) || (local_10 != DAT_0041774c)) {
LAB_0040b96d:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 1;
    local_14 = this;
    uVar2 = FUN_004078f2(&DAT_00417768,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_0040b96d;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00417740);
LAB_0040b97d:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040b9a3 */

void __thiscall FUN_0040b9a3(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040b89e(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 1;
  local_10 = 0;
  FUN_00409b95((uint *)((int)this + 8),(char *)0x386e0e2,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_10,(uint)param_1);
  return;
}



/* Function: FUN_0040b9fc */

undefined4 __thiscall FUN_0040b9fc(void *this,HMODULE param_1,uint param_2)

{
  HRSRC pHVar1;
  ushort *puVar2;
  void *_Dst;
  errno_t eVar3;
  uint uVar4;
  
  pHVar1 = FindResourceExW(param_1,(LPCWSTR)0x6,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),0);
  if ((pHVar1 != (HRSRC)0x0) &&
     (puVar2 = FUN_0040545b(param_1,pHVar1,param_2), puVar2 != (ushort *)0x0)) {
    uVar4 = (uint)*puVar2;
    _Dst = (void *)FUN_0040b75e(this,uVar4);
    eVar3 = memcpy_s(_Dst,uVar4 * 2,puVar2 + 1,(uint)*puVar2 * 2);
    FUN_00405422(eVar3);
    FUN_0040ba7b(this,uVar4);
    return 1;
  }
  return 0;
}



/* Function: FUN_0040ba7b */

void __thiscall FUN_0040ba7b(void *this,int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Load size is inaccurate */
  if ((-1 < param_1) && (param_1 <= *(int *)(*this + -8))) {
    *(int *)(*this + -0xc) = param_1;
                    /* WARNING: Load size is inaccurate */
    *(undefined2 *)(*this + param_1 * 2) = 0;
    return;
  }
  FUN_00405404(-0x7ff8ffa9);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040baae */

uint * FUN_0040baae(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_00409a0b(0x386e0e2,1,param_2);
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
LAB_0040bb22:
    if (((uVar4 & 0x40) == 0) || (!bVar1)) {
      uVar2 = 0;
      goto LAB_0040bb32;
    }
  }
  else if ((uVar4 & 0x40) == 0) goto LAB_0040bb22;
  uVar2 = 1;
LAB_0040bb32:
  *param_1 = uVar2 | uVar4;
  return param_1;
}



/* Function: FUN_0040bb45 */

void __thiscall FUN_0040bb45(void *this,int param_1)

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
      FUN_0040bba2(this,param_1);
    }
  }
  else {
    FUN_0040bbf0(this,param_1);
  }
  return;
}



/* Function: FUN_0040bba2 */

void __thiscall FUN_0040bba2(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* WARNING: Load size is inaccurate */
  puVar3 = (undefined4 *)(*this + -0x10);
  if ((*(int *)(*this + -8) < param_1) && (0 < param_1)) {
    pcVar1 = *(code **)(*(int *)*puVar3 + 8);
    (*(code *)PTR_guard_check_icall_004182ac)(puVar3,param_1,2);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(int *)this = iVar2 + 0x10;
      return;
    }
  }
  FUN_0040bc8a();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040bbf0 */

void __thiscall FUN_0040bbf0(void *this,int param_1)

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
  (*(code *)PTR_guard_check_icall_004182ac)();
  puVar3 = (undefined4 *)(*pcVar2)();
  pcVar2 = *(code **)*puVar3;
  (*(code *)PTR_guard_check_icall_004182ac)(param_1,2);
  iVar4 = (*pcVar2)();
  if (iVar4 != 0) {
    if (iVar1 < param_1) {
      param_1 = iVar1;
    }
    _DstSize = param_1 * 2 + 2;
    memcpy_s((void *)(iVar4 + 0x10),_DstSize,_Src,_DstSize);
    *(int *)(iVar4 + 4) = iVar1;
    FUN_004055df((undefined4 *)((int)_Src + -0x10));
    *(void **)this = (void *)(iVar4 + 0x10);
    return;
  }
  FUN_0040bc8a();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_0040bc8a */

void FUN_0040bc8a(void)

{
  FUN_00405404(-0x7ff8fff2);
  return;
}



/* Function: FUN_0040bc9a */

undefined4 * __thiscall FUN_0040bc9a(void *this,ushort *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
                    /* WARNING: Load size is inaccurate */
  puVar2 = *this;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    uVar1 = FUN_0040560b((ushort *)puVar2[2],param_1);
    if (uVar1 == 0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2;
}



/* Function: FUN_0040bcca */

void __fastcall
FUN_0040bcca(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00405f61(param_7);
  local_8 = 0;
  FUN_0040c040(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_0040bd11 */

void * __fastcall FUN_0040bd11(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint _MaxCount;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    _MaxCount = FUN_004061de(param_3);
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



/* Function: FUN_0040bd81 */

char * __fastcall FUN_0040bd81(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

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



/* Function: FUN_0040bde8 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040bde8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  uStack_c = 0x40bdfa;
  local_1458 = *param_7;
  local_1008[0] = L'\0';
  local_1408[0] = 0;
  local_1454 = param_7[1];
  uStack_1434 = FUN_00405d50(local_1458);
  local_1460 = 3;
  local_145c = 0;
  if (param_7[2] == 1) {
    local_145c = 8;
  }
  LOCK();
  UNLOCK();
  local_1450 = DAT_00417bc4 + 1;
  local_144c = 0;
  DAT_00417bc4 = DAT_00417bc4 + 1;
  DStack_1448 = GetCurrentThreadId();
  pcVar1 = DAT_00417b9c;
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
  if (DAT_00417b9c == (code *)0x0) {
    uStack_1414 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_004182ac)();
    uStack_1414 = (*pcVar1)();
  }
  pcVar1 = DAT_00417b68;
  if (DAT_00417b68 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_00417b80;
  if (DAT_00417b80 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(&local_1460,local_1408,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00417b7c;
  if (DAT_00417b7c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_00417b8c;
  if ((DAT_00417b8c != (code *)0x0) && ((local_145c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004182ac)(&local_1460);
    (*pcVar1)();
  }
  if (-1 < local_1458) {
    local_1458 = -0x7fff0001;
    local_1454 = FUN_00405f61(0x8000ffff);
  }
  pcVar1 = DAT_00417b54;
  if (DAT_00417b5c == '\0') {
    if (DAT_00417b54 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_004182ac)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040bf87;
  }
  else {
LAB_0040bf87:
    pcVar1 = DAT_00417b60;
    if ((local_145c & 2) == 0) {
      if ((DAT_00417b60 != (code *)0x0) && (DAT_00417b70 == '\0')) {
        (*(code *)PTR_guard_check_icall_004182ac)(&local_1460,local_1008,0x800);
        (*pcVar1)();
      }
      if (local_1008[0] == L'\0') {
        FUN_004059e8(local_1008,0x800,(int)&local_1460);
      }
      OutputDebugStringW(local_1008);
      goto LAB_0040c00d;
    }
  }
  pcVar1 = DAT_00417b60;
  if ((DAT_00417b60 != (code *)0x0) && (DAT_00417b70 == '\0')) {
    (*(code *)PTR_guard_check_icall_004182ac)(&local_1460,0,0);
    (*pcVar1)();
  }
LAB_0040c00d:
  pcVar1 = DAT_00417b88;
  if ((((local_145c & 4) != 0) || (DAT_00417b64 != '\0')) && (DAT_00417b88 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004182ac)();
    (*pcVar1)();
  }
  FUN_004064c8((int)&local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040c040 */

void __fastcall
FUN_0040c040(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_0040c218(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_0040c066 */

void __fastcall
FUN_0040c066(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  FUN_0040c2be(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Function: FUN_0040c077 */

void __fastcall
FUN_0040c077(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00405f61(param_7);
  local_8 = 0;
  FUN_0040c066(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_0040c0ba */

uint __fastcall FUN_0040c0ba(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int in_stack_00000010;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00406172(param_1,param_2,0x4016b4,param_1,param_1,in_stack_00000010);
  local_10 = uVar1;
  local_c = FUN_00405f61(uVar1);
  local_8 = 0;
  FUN_0040c066(param_1,param_2,&DAT_004016b4,extraout_ECX,extraout_ECX,in_stack_00000010,
               (int *)&local_10);
  return uVar1;
}



/* Function: FUN_0040c113 */

void __fastcall FUN_0040c113(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_004182ac)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040c140 */

void FUN_0040c140(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_004090e0((int)param_2);
  }
  return;
}



/* Function: FUN_0040c180 */

void FUN_0040c180(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_00407c47(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040c1d0 */

void FUN_0040c1d0(undefined4 param_1,char *param_2)

{
  FUN_00409838(param_2);
  return;
}



/* Function: FUN_0040c1f0 */

undefined4 * __thiscall FUN_0040c1f0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0040100c;
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040c218 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040c218(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_00417380 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00406236(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_00414450(local_c ^ (uint)&local_1474,extraout_EDX);
    return;
  }
  FUN_004064c8((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040c2be */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040c2be(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  local_c = DAT_00417380 ^ (uint)&local_1474;
  local_1470 = param_6;
  local_1010[0] = L'\0';
  local_1410[0] = 0;
  local_145c = param_7[1];
  local_1460 = *param_7;
  local_1474 = param_2;
  local_146c = param_1;
  iStack_143c = FUN_00405d12(local_1460);
  local_1464 = 0;
  if (param_7[2] == 1) {
    local_1464 = 8;
  }
  local_1468 = 1;
  LOCK();
  UNLOCK();
  local_1458 = DAT_00417bc4 + 1;
  local_1454 = 0;
  DAT_00417bc4 = DAT_00417bc4 + 1;
  DStack_1450 = GetCurrentThreadId();
  pcVar1 = DAT_00417b9c;
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
  if (DAT_00417b9c == (code *)0x0) {
    lVar5 = (ulonglong)extraout_EDX << 0x20;
  }
  else {
    (*(code *)PTR_guard_check_icall_004182ac)();
    lVar5 = (*pcVar1)();
  }
  pcVar1 = DAT_00417b68;
  uStack_141c = (undefined4)lVar5;
  if (DAT_00417b68 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_00,uStack_141c);
  }
  pcVar1 = DAT_00417b80;
  uStack_141c = (undefined4)lVar5;
  if (DAT_00417b80 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(&local_1468,local_1410,0x400);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_01,uStack_141c);
  }
  pcVar1 = DAT_00417b7c;
  uStack_141c = (undefined4)lVar5;
  if (DAT_00417b7c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_004182ac)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_02,uStack_141c);
  }
  pcVar1 = DAT_00417b8c;
  uStack_141c = (undefined4)lVar5;
  if ((DAT_00417b8c != (code *)0x0) && ((local_1464 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_004182ac)(&local_1468);
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_03,uStack_141c);
  }
  pcVar1 = DAT_00417b54;
  uStack_141c = (undefined4)lVar5;
  if (-1 < local_1460) {
    FUN_004066af();
    goto LAB_0040c524;
  }
  if (DAT_00417b5c == '\0') {
    if (DAT_00417b54 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      uVar2 = (uint)(BVar3 != 0);
      uVar4 = extraout_EDX_04;
    }
    else {
      (*(code *)PTR_guard_check_icall_004182ac)();
      uVar6 = (*pcVar1)();
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar2 = (uint)uVar6 & 0xff;
    }
    lVar5 = CONCAT44(uVar4,uStack_141c);
    if (uVar2 != 0) goto LAB_0040c458;
LAB_0040c45f:
    pcVar1 = DAT_00417b60;
    uStack_141c = (undefined4)lVar5;
    if ((DAT_00417b60 != (code *)0x0) && (DAT_00417b70 == '\0')) {
      (*(code *)PTR_guard_check_icall_004182ac)(&local_1468,0,0);
      (*pcVar1)();
      lVar5 = CONCAT44(extraout_EDX_05,uStack_141c);
    }
  }
  else {
LAB_0040c458:
    pcVar1 = DAT_00417b60;
    uStack_141c = (undefined4)lVar5;
    if ((local_1464 & 2) != 0) goto LAB_0040c45f;
    if ((DAT_00417b60 != (code *)0x0) && (DAT_00417b70 == '\0')) {
      (*(code *)PTR_guard_check_icall_004182ac)(&local_1468,local_1010,0x800);
      (*pcVar1)();
    }
    if (local_1010[0] == L'\0') {
      FUN_004059e8(local_1010,0x800,(int)&local_1468);
    }
    OutputDebugStringW(local_1010);
    lVar5 = CONCAT44(extraout_EDX_06,uStack_141c);
  }
  pcVar1 = DAT_00417b88;
  uStack_141c = (undefined4)lVar5;
  if ((((local_1464 & 4) != 0) || (DAT_00417b64 != '\0')) && (DAT_00417b88 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_004182ac)();
    (*pcVar1)();
    lVar5 = CONCAT44(extraout_EDX_07,uStack_141c);
  }
  uStack_141c = (undefined4)lVar5;
  if ((local_1464 & 1) == 0) {
    FUN_00414450(local_c ^ (uint)&local_1474,(int)((ulonglong)lVar5 >> 0x20));
    return;
  }
LAB_0040c524:
  FUN_004064c8((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040c540 */

void __thiscall FUN_0040c540(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401030;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: FUN_0040c570 */

undefined4 __thiscall
FUN_0040c570(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_0040834f(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_0040c5d0 */

int * __thiscall FUN_0040c5d0(void *this,int param_1,uint param_2)

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
    (*(code *)PTR_guard_check_icall_004182ac)(uVar2 + 0x10);
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



/* Function: FUN_0040c660 */

void __thiscall FUN_0040c660(void *this,undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)((int)this + 4) + 4);
  (*(code *)PTR_guard_check_icall_004182ac)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040c690 */

int __thiscall FUN_0040c690(void *this,undefined4 param_1,int param_2,uint param_3)

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
    (*(code *)PTR_guard_check_icall_004182ac)(param_1,uVar2 + 0x10);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 8) = uVar4 - 1;
      return iVar3;
    }
  }
  return 0;
}



/* Function: FUN_0040c710 */

int __fastcall FUN_0040c710(int param_1)

{
  LOCK();
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  UNLOCK();
  return param_1 + 8;
}



/* Function: FUN_0040c720 */

undefined4 __fastcall FUN_0040c720(undefined4 param_1)

{
  return param_1;
}



/* Function: FUN_0040c730 */

undefined4 * __thiscall FUN_0040c730(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401044;
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
  *(undefined ***)this = &PTR_FUN_0040105c;
  if ((this[8] != (CWin32Heap)0x0) && (*(int *)(this + 4) != 0)) {
    HeapDestroy(*(HANDLE *)(this + 4));
  }
  return;
}



/* Function: FUN_0040c780 */

void __thiscall FUN_0040c780(void *this,SIZE_T param_1)

{
  HeapAlloc(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



/* Function: FUN_0040c7a0 */

void __thiscall FUN_0040c7a0(void *this,LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(*(HANDLE *)((int)this + 4),0,param_1);
  }
  return;
}



/* Function: FUN_0040c7d0 */

LPVOID __thiscall FUN_0040c7d0(void *this,LPVOID param_1,SIZE_T param_2)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (param_1 == (LPVOID)0x0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = (code *)**this;
    (*(code *)PTR_guard_check_icall_004182ac)(param_2);
    pvVar2 = (LPVOID)(*pcVar1)();
  }
  else if (param_2 == 0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *(code **)(*this + 4);
    (*(code *)PTR_guard_check_icall_004182ac)(param_1);
    (*pcVar1)();
    pvVar2 = (LPVOID)0x0;
  }
  else {
    pvVar2 = HeapReAlloc(*(HANDLE *)((int)this + 4),0,param_1,param_2);
  }
  return pvVar2;
}



/* Function: FUN_0040c830 */

void __thiscall FUN_0040c830(void *this,LPCVOID param_1)

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



/* Function: FUN_0040c877 */

void __fastcall FUN_0040c877(int param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
            ((CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *)
             (param_1 + 0x30));
  return;
}



/* Function: FUN_0040c895 */

undefined * FUN_0040c895(int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004172f4);
  if ((DAT_00417310 < param_1) || (param_1 < 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_IMAGE_DOS_HEADER_004172e4;
    if (param_1 != DAT_00417310) {
      if (DAT_00417310 <= param_1) {
        FUN_004053f0(0xc000008c);
        pcVar1 = (code *)swi(3);
        puVar2 = (undefined *)(*pcVar1)();
        return puVar2;
      }
      puVar2 = *(undefined **)(DAT_0041730c + param_1 * 4);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004172f4);
  return puVar2;
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



/* Function: FUN_0040c918 */

undefined4 __fastcall FUN_0040c918(int *param_1,HINSTANCE param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
LAB_0040c984:
    uVar2 = 0x80070057;
  }
  else {
    if (*param_1 != 0) {
      if (*param_1 != 0x2c) goto LAB_0040c984;
      iVar3 = 0;
      if (0 < param_1[9]) {
        do {
          if ((iVar3 < 0) || (param_1[9] <= iVar3)) {
            FUN_004053f0(0xc000008c);
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



/* Function: FUN_0040c99d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_0040c99d(LPCRITICAL_SECTION param_1)

{
  undefined4 local_14;
  
  InitializeCriticalSection(param_1);
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_0040c9f4 */

void * __fastcall FUN_0040c9f4(void *param_1)

{
  FUN_0040da79(param_1,1);
  *(undefined4 *)((int)param_1 + 0xb0) = 10;
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  return param_1;
}



/* Function: FUN_0040ca34 */

void * __thiscall FUN_0040ca34(void *this,undefined4 param_1)

{
  FUN_0040da79(this,param_1);
  *(undefined4 *)((int)this + 0xb0) = 10;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  return this;
}



/* Function: FUN_0040ca7b */

void __fastcall FUN_0040ca7b(undefined4 *param_1)

{
  int *_Memory;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00414da6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1[0x29] != 0) {
    puVar1 = (undefined4 *)param_1[0x27];
    while (puVar1 != (undefined4 *)0x0) {
      _Memory = (int *)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      local_8 = 0xffffffff;
      if (_Memory != (int *)0x0) {
        FUN_00410c80(_Memory);
        free(_Memory);
      }
    }
  }
  FUN_0040cc61(param_1 + 0x27);
  FUN_0040dad6(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040cb05 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0040cb05(int param_1)

{
  HKEY hKey;
  LSTATUS LVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  DWORD dwIndex;
  HKEY local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int *local_9c;
  DWORD local_98;
  WCHAR local_94 [70];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_a8 = (HKEY)0x0;
  local_a4 = 0;
  local_a0 = 0;
  local_8 = 0;
  LVar1 = FUN_004054e1(&local_a8,(HKEY)0x80000002,
                       L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATs",
                       0x20019);
  hKey = local_a8;
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if (LVar1 == 0) {
    dwIndex = 0;
    while( true ) {
      local_98 = 0x40;
      LVar1 = RegEnumKeyExW(hKey,dwIndex,local_94,&local_98,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      uVar2 = extraout_ECX_00;
      uVar3 = extraout_EDX_00;
      if (LVar1 == 0x103) break;
      local_9c = FUN_00410cea(local_94);
      if (local_9c != (int *)0x0) {
        FUN_0040cbde((void *)(param_1 + 0x9c),&local_9c);
      }
      dwIndex = dwIndex + 1;
    }
  }
  local_8 = 0xffffffff;
  if (hKey != (HKEY)0x0) {
    RegCloseKey(hKey);
    uVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_01;
  }
  FUN_00414bee(uVar2,uVar3);
  return;
}



/* Function: FUN_0040cbde */

undefined4 * __thiscall FUN_0040cbde(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 0x10) == 0) {
    puVar3 = FUN_0040ccfa((undefined4 *)((int)this + 0xc),*(uint *)((int)this + 0x14));
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00405404(-0x7ff8fff2);
      pcVar2 = (code *)swi(3);
      puVar3 = (undefined4 *)(*pcVar2)();
      return puVar3;
    }
    iVar4 = *(int *)((int)this + 0x14);
    puVar3 = puVar3 + iVar4 * 3 + -2;
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      *puVar3 = *(undefined4 *)((int)this + 0x10);
      *(undefined4 **)((int)this + 0x10) = puVar3;
      puVar3 = puVar3 + -3;
    }
  }
  puVar3 = *(undefined4 **)((int)this + 0x10);
  puVar3[2] = *param_1;
  *(undefined4 *)((int)this + 0x10) = *puVar3;
  *puVar3 = 0;
  puVar3[1] = uVar1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if (*(undefined4 **)((int)this + 4) == (undefined4 *)0x0) {
    *(undefined4 **)this = puVar3;
  }
  else {
    **(undefined4 **)((int)this + 4) = puVar3;
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  return puVar3;
}



/* Function: FUN_0040cc61 */

void __fastcall FUN_0040cc61(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414e09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while( true ) {
    if (param_1[2] == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      piVar3 = (int *)param_1[3];
      if ((int *)param_1[3] != (int *)0x0) {
        do {
          piVar1 = (int *)*piVar3;
          free(piVar3);
          piVar3 = piVar1;
        } while (piVar1 != (int *)0x0);
        param_1[3] = 0;
      }
      ExceptionList = local_10;
      return;
    }
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) break;
    *param_1 = *piVar3;
    *piVar3 = param_1[4];
    piVar1 = param_1 + 2;
    *piVar1 = *piVar1 + -1;
    param_1[4] = (int)piVar3;
    if (*piVar1 == 0) {
      FUN_0040cc61(param_1);
    }
  }
  FUN_00405404(-0x7fffbffb);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_0040ccfa */

undefined4 * __fastcall FUN_0040ccfa(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = (uint)((ulonglong)param_2 * 0xc);
  if ((((int)((ulonglong)param_2 * 0xc >> 0x20) == 0) && (3 < ~uVar1)) &&
     (puVar2 = (undefined4 *)malloc(uVar1 + 4), puVar2 != (undefined4 *)0x0)) {
    *puVar2 = *param_1;
    *param_1 = puVar2;
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}



/* Function: FUN_0040cd3f */

LSTATUS __thiscall
FUN_0040cd3f(void *this,HKEY param_1,LPCWSTR param_2,undefined4 param_3,DWORD param_4,REGSAM param_5
            ,undefined4 param_6,undefined4 *param_7)

{
  LSTATUS LVar1;
  void *local_18;
  HKEY local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414e2c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (HKEY)0x0;
  local_18 = this;
  LVar1 = RegCreateKeyExW(param_1,param_2,0,(LPWSTR)0x0,param_4,param_5,(LPSECURITY_ATTRIBUTES)0x0,
                          &local_14,(LPDWORD)&local_18);
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = local_18;
  }
  if (LVar1 == 0) {
    LVar1 = 0;
                    /* WARNING: Load size is inaccurate */
    if (*this != 0) {
                    /* WARNING: Load size is inaccurate */
      LVar1 = RegCloseKey(*this);
    }
    *(HKEY *)this = local_14;
  }
  ExceptionList = local_10;
  return LVar1;
}



/* Function: FUN_0040cdd0 */

void __thiscall FUN_0040cdd0(void *this,LPCWSTR param_1,short *param_2)

{
  short sVar1;
  code *pcVar2;
  short *psVar3;
  
  if (param_2 != (short *)0x0) {
    psVar3 = param_2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
                    /* WARNING: Load size is inaccurate */
    RegSetValueExW(*this,param_1,0,1,(BYTE *)param_2,((int)psVar3 - (int)(param_2 + 1) >> 1) * 2 + 2
                  );
    return;
  }
  FUN_00405404(-0x7fffbffb);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_0040ce26 */

void FUN_0040ce26(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

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
  TraceMessage(param_1,param_2,0x2b,&LAB_00401d20,0xb,pwVar2,iVar3,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_0040ce8d */

undefined4 * __thiscall FUN_0040ce8d(void *this,wchar_t *param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_2;
  *(wchar_t **)((int)this + 4) = param_1;
  if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
     ((PTR_LOOP_00417050[0x1c] & 0x40) != 0)) {
    FUN_00405705(10,&LAB_00401d20,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00417050 + 0x14),param_1);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040ced5 */

void __fastcall FUN_0040ced5(int *param_1)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414e4f;
  local_10 = ExceptionList;
  ppvVar1 = &local_10;
  if (((int *)*param_1 != (int *)0x0) && (*(int *)*param_1 < 0)) {
    if ((undefined **)PTR_LOOP_00417050 == &PTR_LOOP_00417050) {
      return;
    }
    if ((PTR_LOOP_00417050[0x1c] & 4) != 0) {
      ExceptionList = &local_10;
      FUN_0040ce26(*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14),(wchar_t *)param_1[1]);
      ppvVar1 = (void **)ExceptionList;
    }
  }
  ExceptionList = ppvVar1;
  if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
     ((PTR_LOOP_00417050[0x1c] & 0x40) != 0)) {
    FUN_00405705(0xc,&LAB_00401d20,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00417050 + 0x14),(wchar_t *)param_1[1]);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040cf6b */

undefined4 __fastcall FUN_0040cf6b(undefined4 param_1,void *param_2)

{
  wchar_t *pwVar1;
  
  switch(param_1) {
  case 0:
    pwVar1 = L"narrator";
    break;
  case 1:
    pwVar1 = L"magnifierpane";
    break;
  case 2:
    pwVar1 = L"osk";
    break;
  case 3:
    pwVar1 = L"colorfiltering";
    break;
  case 4:
    pwVar1 = L"cursorindicator";
    break;
  case 5:
    pwVar1 = L"speechreco";
    break;
  case 6:
    FUN_0040d394(&DAT_00417d50,1);
    pwVar1 = L"livecaptions";
    break;
  case 7:
    pwVar1 = L"voiceaccess";
    break;
  default:
    return 0x80070057;
  }
  FUN_0040d1a5(param_2,pwVar1);
  return 0;
}



/* Function: FUN_0040d001 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_0040d001(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  int local_d4 [46];
  int *local_1c;
  ushort *local_18;
  short *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc4;
  local_8 = 0;
  FUN_0040b39b(local_14,(int *)&PTR_PTR_004172c0);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uVar1 = FUN_0040cf6b(3,local_14);
  if ((int)uVar1 < 0) {
    FUN_00406619(unaff_retaddr,0x363,"enduser\\ezap\\easeofaccess\\atmanager\\atlist.cpp",uVar1);
    goto LAB_0040d133;
  }
  iVar2 = FUN_0040a129();
  if (iVar2 == 0) {
LAB_0040d131:
    uVar1 = 0;
    goto LAB_0040d133;
  }
  piVar3 = FUN_00410cea(local_14[0]);
  local_8._0_1_ = 2;
  local_1c = piVar3;
  if (piVar3 == (int *)0x0) {
    uVar1 = 0x80004005;
  }
  else {
    FUN_0040ca34(local_d4,1);
    local_8._0_1_ = 3;
    if (param_2 == 0) {
      uVar1 = FUN_0040dc40(local_d4,extraout_EDX,piVar3);
      if (-1 < (int)uVar1) {
LAB_0040d11e:
        FUN_0040ca7b(local_d4);
        FUN_0040d17f(&local_1c);
        goto LAB_0040d131;
      }
      uVar4 = 0x37e;
LAB_0040d156:
      FUN_00406619(unaff_retaddr,uVar4,"enduser\\ezap\\easeofaccess\\atmanager\\atlist.cpp",uVar1);
    }
    else {
      uVar1 = FUN_0040db11(local_d4,extraout_EDX,piVar3);
      if ((int)uVar1 < 0) {
        uVar4 = 0x370;
        goto LAB_0040d156;
      }
      local_8._0_1_ = 4;
      FUN_0040b39b(&local_18,(int *)&PTR_PTR_004172c0);
      local_8._0_1_ = 5;
      uVar1 = FUN_0040cf6b(0,&local_18);
      if (-1 < (int)uVar1) {
        local_8._0_1_ = 6;
        iVar2 = FUN_0040d1e8(local_14,local_18);
        local_8._0_1_ = 5;
        if (iVar2 == 0) {
          FUN_00410410();
        }
        FUN_004055df((undefined4 *)(local_18 + -8));
        goto LAB_0040d11e;
      }
      FUN_00406619(unaff_retaddr,0x373,"enduser\\ezap\\easeofaccess\\atmanager\\atlist.cpp",uVar1);
      FUN_004055df((undefined4 *)(local_18 + -8));
    }
    FUN_0040ca7b(local_d4);
  }
  FUN_0040d17f(&local_1c);
LAB_0040d133:
  FUN_004055df((undefined4 *)(local_14[0] + -8));
  return uVar1;
}



/* Function: FUN_0040d17f */

void __fastcall FUN_0040d17f(undefined4 *param_1)

{
  int *_Memory;
  
  _Memory = (int *)*param_1;
  if (_Memory != (int *)0x0) {
    FUN_00410c80(_Memory);
    free(_Memory);
  }
  *param_1 = 0;
  return;
}



/* Function: FUN_0040d1a5 */

void * __thiscall FUN_0040d1a5(void *this,short *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  if (param_1 == (short *)0x0) {
    iVar2 = 0;
  }
  else {
    psVar3 = param_1;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar3 - (int)(param_1 + 1) >> 1;
  }
  FUN_0040d3ed(this,param_1,iVar2);
  return this;
}



/* Function: FUN_0040d1e8 */

void __thiscall FUN_0040d1e8(void *this,ushort *param_1)

{
  code *pcVar1;
  
  if (param_1 != (ushort *)0x0) {
                    /* WARNING: Load size is inaccurate */
    FUN_0040560b(*this,param_1);
    return;
  }
  FUN_00405404(-0x7fffbffb);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040d210 */

int * __fastcall FUN_0040d210(int *param_1)

{
  rsize_t _DstSize;
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  pcVar1 = *(code **)(*(int *)*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_004182ac)();
  puVar2 = (undefined4 *)(*pcVar1)();
  piVar3 = param_1 + 3;
  if ((*piVar3 < 0) || (puVar2 != (undefined4 *)*param_1)) {
    pcVar1 = *(code **)*puVar2;
    (*(code *)PTR_guard_check_icall_004182ac)(param_1[1],2);
    piVar3 = (int *)(*pcVar1)();
    if (piVar3 == (int *)0x0) {
      FUN_0040bc8a();
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



/* Function: FUN_0040d28f */

uint * __thiscall FUN_0040d28f(void *this,uint *param_1)

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
  local_c = FUN_004099f0();
  FUN_0040d47f(local_1c,&local_8);
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
  if (((uVar4 & 4) != 0) || (DAT_0041773c == '\0')) goto LAB_0040d36e;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00417740);
  if ((local_c == 0) || (local_c != DAT_0041774c)) {
LAB_0040d35e:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_14 = 3;
    local_10 = this;
    uVar2 = FUN_004078f2(&DAT_00417768,&local_14,8);
    if ((char)uVar2 == '\0') goto LAB_0040d35e;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00417740);
LAB_0040d36e:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_0040d394 */

void __thiscall FUN_0040d394(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_0040d28f(this,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_00409b95((uint *)((int)this + 8),(char *)0x1da223d,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_c,(uint)param_1);
  return;
}



/* Function: FUN_0040d3ed */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_0040d3ed(void *this,void *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  rsize_t _DstSize;
  void *_Dst;
  uint uVar3;
  
  if (param_2 == 0) {
    FUN_0040b78d((int *)this);
  }
  else {
    if (param_1 == (void *)0x0) {
      FUN_00405404(-0x7ff8ffa9);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
                    /* WARNING: Load size is inaccurate */
    uVar3 = (int)param_1 - *this >> 1;
    uVar1 = *(uint *)(*this + -0xc);
    _Dst = (void *)FUN_0040b75e(this,param_2);
    _DstSize = param_2 * 2;
    if (uVar1 < uVar3) {
      memcpy_s(_Dst,_DstSize,param_1,_DstSize);
    }
    else {
      memmove_s(_Dst,_DstSize,(void *)((int)_Dst + uVar3 * 2),_DstSize);
    }
    FUN_0040ba7b(this,param_2);
  }
  return;
}



/* Function: FUN_0040d47f */

uint * FUN_0040d47f(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00409a0b(0x1da223d,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_0040d4ee */

undefined4 * __fastcall FUN_0040d4ee(undefined4 *param_1)

{
  param_1[5] = 10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Function: FUN_0040d510 */

void __thiscall FUN_0040d510(void *this,short *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0040d6ac(this,param_1,*(undefined4 *)((int)this + 4));
  if (*(undefined4 **)((int)this + 4) == (undefined4 *)0x0) {
    *(undefined4 **)this = puVar1;
  }
  else {
    **(undefined4 **)((int)this + 4) = puVar1;
  }
  *(undefined4 **)((int)this + 4) = puVar1;
  return;
}



/* Function: FUN_0040d53f */

void __thiscall FUN_0040d53f(void *this,int *param_1)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414ee3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
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
    FUN_0040d724(this,param_1);
    ExceptionList = local_10;
    return;
  }
  FUN_00405404(-0x7fffbffb);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: thunk_FUN_0040d620 */

void __fastcall thunk_FUN_0040d620(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int *_Memory;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414e09;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  while( true ) {
    if (param_1[2] == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      _Memory = (int *)param_1[3];
      if ((int *)param_1[3] != (int *)0x0) {
        do {
          piVar2 = (int *)*_Memory;
          free(_Memory);
          _Memory = piVar2;
        } while (piVar2 != (int *)0x0);
        param_1[3] = 0;
      }
      ExceptionList = pvStack_10;
      return;
    }
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 == (undefined4 *)0x0) break;
    *param_1 = *puVar1;
    FUN_0040d724(param_1,puVar1);
  }
  FUN_00405404(-0x7fffbffb);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



/* Function: FUN_0040d5c7 */

int FUN_0040d5c7(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414f06;
  local_10 = ExceptionList;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = *piVar1;
    return (int)(piVar1 + 2);
  }
  ExceptionList = &local_10;
  FUN_00405404(-0x7fffbffb);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}



/* Function: FUN_0040d620 */

void __fastcall FUN_0040d620(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414e09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while( true ) {
    if (param_1[2] == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      _Memory = (int *)param_1[3];
      if ((int *)param_1[3] != (int *)0x0) {
        do {
          piVar2 = (int *)*_Memory;
          free(_Memory);
          _Memory = piVar2;
        } while (piVar2 != (int *)0x0);
        param_1[3] = 0;
      }
      ExceptionList = local_10;
      return;
    }
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 == (undefined4 *)0x0) break;
    *param_1 = *puVar1;
    FUN_0040d724(param_1,puVar1);
  }
  FUN_00405404(-0x7fffbffb);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



/* Function: FUN_0040d6ac */

undefined4 * __thiscall FUN_0040d6ac(void *this,short *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x10) == 0) {
    puVar3 = FUN_0040ccfa((undefined4 *)((int)this + 0xc),*(uint *)((int)this + 0x14));
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00405404(-0x7ff8fff2);
      pcVar2 = (code *)swi(3);
      puVar3 = (undefined4 *)(*pcVar2)();
      return puVar3;
    }
    iVar4 = *(int *)((int)this + 0x14);
    puVar3 = puVar3 + iVar4 * 3 + -2;
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      *puVar3 = *(undefined4 *)((int)this + 0x10);
      *(undefined4 **)((int)this + 0x10) = puVar3;
      puVar3 = puVar3 + -3;
    }
  }
  puVar3 = *(undefined4 **)((int)this + 0x10);
  uVar1 = *puVar3;
  FUN_0040d75c(puVar3 + 2,param_1);
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *puVar3 = 0;
  puVar3[1] = param_2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return puVar3;
}



/* Function: FUN_0040d724 */

void __thiscall FUN_0040d724(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  FUN_004055df((undefined4 *)(param_1[2] + -0x10));
  *param_1 = *(undefined4 *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 8);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    FUN_0040d620((undefined4 *)this);
  }
  return;
}



/* Function: FUN_0040d75c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void * __thiscall FUN_0040d75c(void *this,short *param_1)

{
  char cVar1;
  
  FUN_0040b39b(this,(int *)&PTR_PTR_004172c0);
  cVar1 = FUN_0040b30d(this,(uint)param_1);
  if (cVar1 == '\0') {
    FUN_0040d1a5(this,param_1);
  }
  return this;
}



/* Function: FUN_0040d7a3 */

uint __fastcall
FUN_0040d7a3(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  DWORD local_10;
  DWORD local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 4;
  uVar1 = RegGetValueW(param_1,param_2,param_3,0x10000012,&local_c,&local_8,&local_10);
  if (uVar1 != 0) {
    if (uVar1 == 0xea) {
      uVar1 = 0xd;
    }
    goto LAB_0040d826;
  }
  uVar1 = 0xd;
  if (local_c == 4) {
    if ((local_8 != 0) && (local_8 != 1)) goto LAB_0040d826;
    bVar3 = local_8 == 1;
  }
  else {
    if (local_10 != 4) goto LAB_0040d826;
    if (((short)local_8 != 0x30) && ((short)local_8 != 0x31)) goto LAB_0040d826;
    bVar3 = (short)local_8 == 0x31;
  }
  *param_5 = (uint)bVar3;
  uVar1 = 0;
LAB_0040d826:
  uVar2 = uVar1 & 0xffff | 0x80070000;
  if ((int)uVar1 < 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Function: FUN_0040d83e */

bool __fastcall FUN_0040d83e(HKEY param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  HKEY local_8;
  
  local_c = 0;
  uVar3 = 0;
  if (param_1 != (HKEY)0x0) {
    local_8 = param_1;
    uVar1 = RegOpenKeyExW((HKEY)0x80000002,
                          L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\CandidateAccountManager"
                          ,0,0x20019,&local_8);
    uVar2 = uVar1 & 0xffff | 0x80070000;
    if ((int)uVar1 < 1) {
      uVar2 = uVar1;
    }
    if (-1 < (int)uVar2) {
      FUN_0040d7a3(local_8,(LPCWSTR)param_1,L"CxhOnlyUse",uVar2,&local_c);
      RegCloseKey(local_8);
      uVar3 = local_c;
    }
  }
  return uVar3 != 0;
}



/* Function: FUN_0040d8ad */

undefined4 __fastcall FUN_0040d8ad(HKEY param_1)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined1 uVar3;
  uint local_8;
  
  uVar3 = 0;
  local_8 = 0;
  uVar2 = FUN_0040d7a3((HKEY)0x80000002,L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
                       L"LaunchUserOOBE",param_1,&local_8);
  if (local_8 == 0) {
    local_8 = 0;
    uVar2 = FUN_0040d7a3((HKEY)0x80000002,
                         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\CFL\\ExperienceManagerData"
                         ,L"LaunchCflScenario",extraout_ECX,&local_8);
    if (local_8 == 0) {
      bVar1 = FUN_0040d83e(param_1);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (!bVar1) goto LAB_0040d908;
    }
  }
  uVar3 = 1;
LAB_0040d908:
  return CONCAT31((int3)(uVar2 >> 8),uVar3);
}



/* Function: FUN_0040d914 */

void __thiscall FUN_0040d914(void *this,undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00402474,this,0);
  return;
}



/* Function: FUN_0040d93c */

void __thiscall FUN_0040d93c(void *this,undefined4 param_1,undefined4 param_2,wchar_t *param_3)

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
  TraceMessage(param_1,param_2,0x2b,&DAT_00402474,this,pwVar2,iVar3,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_0040d9a4 */

void __thiscall
FUN_0040d9a4(void *this,undefined4 param_1,undefined4 param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  iVar3 = 10;
  iVar5 = iVar3;
  if (param_4 != (wchar_t *)0x0) {
    pwVar4 = param_4;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    iVar5 = ((int)pwVar4 - (int)(param_4 + 1) >> 1) * 2 + 2;
  }
  pwVar4 = L"NULL";
  if (param_4 != (wchar_t *)0x0) {
    pwVar4 = param_4;
  }
  if (param_3 != (wchar_t *)0x0) {
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
  TraceMessage(param_1,param_2,0x2b,&DAT_00402474,this,pwVar2,iVar3,pwVar4,iVar5,&stack0x00000014,4,
               0);
  return;
}



/* Function: FUN_0040da4b */

void __thiscall FUN_0040da4b(void *this,undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00402474,this,&stack0x0000000c,4,0);
  return;
}



/* Function: FUN_0040da79 */

int __thiscall FUN_0040da79(void *this,undefined4 param_1)

{
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  
  FUN_0040d4ee((undefined4 *)this);
  FUN_0040d4ee((undefined4 *)(extraout_EDX + 0x18));
  FUN_0040d4ee((undefined4 *)(extraout_EDX_00 + 0x30));
  FUN_0040d4ee((undefined4 *)(extraout_EDX_01 + 0x48));
  FUN_0040d4ee((undefined4 *)(extraout_EDX_02 + 0x60));
  FUN_0040d4ee((undefined4 *)(extraout_EDX_03 + 0x78));
  *(undefined4 *)(extraout_EDX_04 + 0x90) = 0;
  *(undefined4 *)(extraout_EDX_04 + 0x98) = 0;
  *(undefined4 *)(extraout_EDX_04 + 0x94) = param_1;
  return extraout_EDX_04;
}



/* Function: FUN_0040dad6 */

void __fastcall FUN_0040dad6(undefined4 *param_1)

{
  FUN_0040d620(param_1 + 0x1e);
  FUN_0040d620(param_1 + 0x18);
  FUN_0040d620(param_1 + 0x12);
  FUN_0040d620(param_1 + 0xc);
  FUN_0040d620(param_1 + 6);
  FUN_0040d620(param_1);
  return;
}



/* Function: FUN_0040db11 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __fastcall FUN_0040db11(int *param_1,undefined4 param_2,int *param_3)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  bool bVar8;
  
  if (param_3 == (int *)0x0) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    iVar2 = FUN_0040e6d3(param_1,param_2);
    if (-1 < iVar2) {
      pwVar3 = (wchar_t *)param_3[5];
      pwVar7 = L"SystemSetting";
      do {
        wVar1 = *pwVar3;
        bVar8 = (ushort)wVar1 < (ushort)*pwVar7;
        if (wVar1 != *pwVar7) {
LAB_0040db6e:
          uVar4 = -(uint)bVar8 | 1;
          goto LAB_0040db73;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar3[1];
        bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
        if (wVar1 != pwVar7[1]) goto LAB_0040db6e;
        pwVar3 = pwVar3 + 2;
        pwVar7 = pwVar7 + 2;
      } while (wVar1 != L'\0');
      uVar4 = 0;
LAB_0040db73:
      if (uVar4 == 0) {
        piVar5 = FUN_0040d210((int *)(*param_3 + -0x10));
        puVar6 = FUN_0040bc9a(param_1 + 0x12,(ushort *)(piVar5 + 4));
        FUN_004055df(piVar5);
        if (puVar6 == (undefined4 *)0x0) {
          piVar5 = FUN_0040d210((int *)(*param_3 + -0x10));
          FUN_0040d510(param_1 + 0x12,(short *)(piVar5 + 4));
          FUN_004055df(piVar5);
        }
      }
      else {
        piVar5 = FUN_0040d210((int *)(*param_3 + -0x10));
        puVar6 = FUN_0040bc9a(param_1,(ushort *)(piVar5 + 4));
        FUN_004055df(piVar5);
        if (puVar6 == (undefined4 *)0x0) {
          piVar5 = FUN_0040d210((int *)(*param_3 + -0x10));
          FUN_0040d510(param_1,(short *)(piVar5 + 4));
          FUN_004055df(piVar5);
        }
      }
      iVar2 = FUN_0040ee02(param_1);
    }
  }
  return iVar2;
}



/* Function: FUN_0040dc40 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __fastcall FUN_0040dc40(int *param_1,undefined4 param_2,int *param_3)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  wchar_t *pwVar7;
  bool bVar8;
  
  if (param_3 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar2 = FUN_0040e6d3(param_1,param_2);
  if (iVar2 < 0) {
    return iVar2;
  }
  pwVar3 = (wchar_t *)param_3[5];
  pwVar7 = L"SystemSetting";
  do {
    wVar1 = *pwVar3;
    bVar8 = (ushort)wVar1 < (ushort)*pwVar7;
    if (wVar1 != *pwVar7) {
LAB_0040dc9a:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_0040dc9f;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar3[1];
    bVar8 = (ushort)wVar1 < (ushort)pwVar7[1];
    if (wVar1 != pwVar7[1]) goto LAB_0040dc9a;
    pwVar3 = pwVar3 + 2;
    pwVar7 = pwVar7 + 2;
  } while (wVar1 != L'\0');
  uVar4 = 0;
LAB_0040dc9f:
  if (uVar4 == 0) {
    piVar5 = FUN_0040d210((int *)(*param_3 + -0x10));
    piVar6 = FUN_0040bc9a(param_1 + 0x12,(ushort *)(piVar5 + 4));
    FUN_004055df(piVar5);
    if (piVar6 == (int *)0x0) goto LAB_0040dcff;
    piVar5 = param_1 + 0x12;
  }
  else {
    piVar5 = FUN_0040d210((int *)(*param_3 + -0x10));
    piVar6 = FUN_0040bc9a(param_1,(ushort *)(piVar5 + 4));
    FUN_004055df(piVar5);
    piVar5 = param_1;
    if (piVar6 == (int *)0x0) goto LAB_0040dcff;
  }
  FUN_0040d53f(piVar5,piVar6);
LAB_0040dcff:
  iVar2 = FUN_0040ee02(param_1);
  return iVar2;
}



/* Function: FUN_0040dd19 */

int FUN_0040dd19(void)

{
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = 4;
  local_10 = 0;
  local_8 = 0;
  uVar1 = NtQueryWnfStateData(&DAT_00402484,0,0,&local_10,&local_8,&local_c);
  if ((((int)(uVar1 | 0x10000000) < 0) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050))
     && ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
    FUN_004056db(10,&DAT_00402474,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
  }
  if (local_8 == 0) {
    local_c = 4;
    local_14 = 1;
    uVar1 = NtUpdateWnfStateData(&DAT_00402484,&local_14,4,0,0,local_10,0);
    if ((((int)(uVar1 | 0x10000000) < 0) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050))
       && ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_004056db(0xb,&DAT_00402474,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
    }
  }
  return local_8;
}



/* Function: FUN_0040dddc */

DWORD __fastcall FUN_0040dddc(ushort *param_1,undefined4 param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int local_10;
  int aiStack_c [2];
  
  DVar1 = FUN_0040e6d3(param_1,param_2);
  if ((int)DVar1 < 0) {
    return DVar1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    local_10 = *(int *)(param_1 + 0x24);
    while (local_10 != 0) {
      puVar2 = (undefined4 *)FUN_0040d5c7(&local_10);
      piVar3 = FUN_00410cea((short *)*puVar2);
      if (piVar3 == (int *)0x0) {
        return 0x8007000e;
      }
      DVar1 = FUN_0040e19c(param_1,extraout_EDX,piVar3,extraout_ECX,0,0);
      if ((((int)DVar1 < 0) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
         ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
        FUN_0040d93c((void *)0xc,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00417050 + 0x14),(wchar_t *)*piVar3);
      }
    }
  }
  iVar4 = FUN_0040a129();
  if (iVar4 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_0040dd19();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0040f782();
      local_10 = *(int *)(param_1 + 0xc);
      DVar1 = 0;
      while( true ) {
        if (local_10 == 0) {
          return DVar1;
        }
        puVar2 = (undefined4 *)FUN_0040d5c7(&local_10);
        piVar3 = FUN_00410cea((short *)*puVar2);
        if (piVar3 == (int *)0x0) break;
        DVar5 = FUN_0040e19c(param_1,extraout_EDX_00,piVar3,extraout_ECX_00,0,0);
        if ((((int)DVar5 < 0) &&
            (DVar1 = DVar5, (undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
           ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
          FUN_0040d93c((void *)0xd,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00417050 + 0x14),(wchar_t *)*piVar3);
        }
      }
      return 0x8007000e;
    }
  }
  aiStack_c[0] = *(int *)param_1;
  DVar1 = 0;
  while (aiStack_c[0] != 0) {
    puVar2 = (undefined4 *)FUN_0040d5c7(aiStack_c);
    piVar3 = FUN_00410cea((short *)*puVar2);
    if (piVar3 == (int *)0x0) {
      return 0x8007000e;
    }
    if (((piVar3[0xb] != 1) || (local_10 == 0)) &&
       ((DVar5 = FUN_0040e19c(param_1,extraout_EDX_01,piVar3,extraout_ECX_01,0,0), (int)DVar5 < 0 &&
        ((DVar1 = DVar5, (undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050 &&
         ((PTR_LOOP_00417050[0x1c] & 8) != 0)))))) {
      FUN_0040d93c((void *)0xe,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14),(wchar_t *)*piVar3);
    }
  }
  aiStack_c[0] = *(int *)(param_1 + 0x30);
  while( true ) {
    if (aiStack_c[0] == 0) {
      return DVar1;
    }
    puVar2 = (undefined4 *)FUN_0040d5c7(aiStack_c);
    piVar3 = FUN_00410cea((short *)*puVar2);
    if (piVar3 == (int *)0x0) break;
    DVar5 = FUN_0040e19c(param_1,extraout_EDX_02,piVar3,extraout_ECX_02,0,0);
    if ((((int)DVar5 < 0) && (DVar1 = DVar5, (undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050))
       && ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040d93c((void *)0xf,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14),(wchar_t *)*piVar3);
    }
  }
  return 0x8007000e;
}



/* Function: FUN_0040dfe3 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int __fastcall FUN_0040dfe3(void *param_1)

{
  HKEY hKey;
  int iVar1;
  undefined4 *puVar2;
  LSTATUS LVar3;
  int *piVar4;
  int iVar5;
  undefined4 *extraout_ECX;
  int iVar6;
  int local_3c [2];
  int local_34;
  HKEY local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  ushort *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x40dfef;
  iVar6 = 0;
  FUN_0040d4ee(local_3c);
  local_8 = 0;
  FUN_0040d620(extraout_ECX);
  local_8._0_1_ = 1;
  FUN_0040b39b(local_14,(int *)&PTR_PTR_004172c0);
  local_8._0_1_ = 2;
  FUN_00410165(local_14);
  FUN_0040f117(local_14,local_3c);
  local_8._0_1_ = 0;
  FUN_004055df((undefined4 *)(local_14[0] + -8));
  if (local_34 != 0) {
    FUN_0040d75c(local_14,L"narrator");
    local_8._0_1_ = 3;
    puVar2 = FUN_0040bc9a(local_3c,local_14[0]);
    iVar1 = local_3c[0];
    if (puVar2 != (undefined4 *)0x0) {
      local_24 = (HKEY)0x0;
      local_20 = 0;
      local_1c = 0;
      LVar3 = FUN_004054e1(&local_24,(HKEY)0x80000001,L"Software\\Microsoft\\Narrator",0x2001f);
      hKey = local_24;
      if (LVar3 == 0) {
        local_18 = 2;
        LVar3 = RegSetValueExW(local_24,L"KeyboardLayoutMigrationState",0,4,(BYTE *)&local_18,4);
        if (((LVar3 != 0) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
           ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
          FUN_0040da4b((void *)0x10,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
        }
      }
      iVar1 = local_3c[0];
      if (hKey != (HKEY)0x0) {
        RegCloseKey(hKey);
        iVar1 = local_3c[0];
      }
    }
    while (local_18 = iVar1, local_18 != 0) {
      puVar2 = (undefined4 *)FUN_0040d5c7(&local_18);
      piVar4 = FUN_00410cea((short *)*puVar2);
      if (piVar4 == (int *)0x0) {
        FUN_004055df((undefined4 *)(local_14[0] + -8));
        iVar6 = -0x7ff8fff2;
        goto LAB_0040e153;
      }
      iVar5 = FUN_0040e17b(param_1,piVar4);
      iVar1 = local_18;
      if (((iVar5 < 0) && (iVar6 = iVar5, (undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
         ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
        FUN_0040d93c((void *)0x11,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00417050 + 0x14),(wchar_t *)*piVar4);
        iVar1 = local_18;
      }
    }
    FUN_004055df((undefined4 *)(local_14[0] + -8));
  }
LAB_0040e153:
  FUN_0040d620(local_3c);
  return iVar6;
}



/* Function: FUN_0040e17b */

void __thiscall FUN_0040e17b(void *this,int *param_1)

{
  undefined4 in_EDX;
  
  FUN_0040e19c((ushort *)this,in_EDX,param_1,this,0,0);
  return;
}



/* Function: FUN_0040e19c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

DWORD __fastcall
FUN_0040e19c(ushort *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
            int param_6)

{
  wchar_t wVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int *piVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  void *this;
  undefined4 extraout_EDX;
  undefined4 uVar11;
  undefined4 extraout_EDX_00;
  ushort *puVar13;
  ushort local_dc [94];
  int *local_20;
  DWORD local_1c;
  ushort *local_18;
  ushort *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  undefined2 uVar12;
  
  uStack_4 = 0xcc;
  local_8 = 0x40e1ab;
  local_20 = (int *)0x0;
  if (param_3 == (int *)0x0) {
    return 0x80070057;
  }
  local_18 = param_1;
  local_1c = FUN_0040e6d3(param_1,param_2);
  if ((int)local_1c < 0) {
    return local_1c;
  }
  bVar2 = FUN_0041051f(param_3 + 10);
  if ((bVar2) && (iVar4 = FUN_0040a129(), iVar4 == 0)) {
    cVar3 = FUN_00414115();
    if (cVar3 != '\0') {
      pwVar5 = (wchar_t *)param_3[5];
      pwVar10 = L"SystemSetting";
      uVar11 = extraout_EDX;
      do {
        wVar1 = *pwVar5;
        uVar12 = (undefined2)((uint)uVar11 >> 0x10);
        uVar11 = CONCAT22(uVar12,wVar1);
        bVar2 = (ushort)wVar1 < (ushort)*pwVar10;
        if (wVar1 != *pwVar10) {
LAB_0040e221:
          uVar6 = -(uint)bVar2 | 1;
          goto LAB_0040e226;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar5[1];
        uVar11 = CONCAT22(uVar12,wVar1);
        bVar2 = (ushort)wVar1 < (ushort)pwVar10[1];
        if (wVar1 != pwVar10[1]) goto LAB_0040e221;
        pwVar5 = pwVar5 + 2;
        pwVar10 = pwVar10 + 2;
      } while (wVar1 != L'\0');
      uVar6 = 0;
LAB_0040e226:
      local_8 = 0xffffffff;
      if (uVar6 == 0) {
        FUN_0040db11((int *)param_1,uVar11,param_3);
      }
    }
    piVar7 = FUN_00410cea((short *)param_3[10]);
    if (piVar7 == (int *)0x0) {
      return 0x8007000e;
    }
    DVar8 = FUN_0040e17b(param_1,piVar7);
    return DVar8;
  }
  pwVar5 = (wchar_t *)param_3[5];
  pwVar10 = L"SystemSetting";
  do {
    wVar1 = *pwVar5;
    local_14 = (ushort *)0x1;
    bVar2 = (ushort)wVar1 < (ushort)*pwVar10;
    if (wVar1 != *pwVar10) {
LAB_0040e291:
      uVar6 = -(uint)bVar2 | 1;
      goto LAB_0040e295;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar5[1];
    bVar2 = (ushort)wVar1 < (ushort)pwVar10[1];
    if (wVar1 != pwVar10[1]) goto LAB_0040e291;
    pwVar5 = pwVar5 + 2;
    pwVar10 = pwVar10 + 2;
  } while (wVar1 != L'\0');
  uVar6 = 0;
LAB_0040e295:
  local_8 = 0xffffffff;
  pwVar5 = (wchar_t *)param_3[3];
  if (uVar6 != 0) {
    if (pwVar5 == (wchar_t *)0x0) {
      return 0x80004005;
    }
    if ((param_6 == 0) && (cVar3 = FUN_00410103(param_3), cVar3 == '\0')) {
      iVar4 = FUN_0040a129();
      if ((iVar4 != 0) && (iVar4 = FUN_00414018(), iVar4 == 0)) {
        if (param_3[8] == 0) {
          if (param_5 == 0) {
            FUN_0040f21d(pwVar5,(int)param_3);
          }
          else {
            FUN_0040f4b5(param_3,1);
          }
        }
        else {
          FUN_0040fcda(this,param_3);
          FUN_00410971();
        }
        return 0;
      }
      if ((param_3[8] == 0) && (iVar4 = FUN_0040a129(), iVar4 != 0)) {
        local_1c = FUN_0040f4b5(param_3,0);
      }
      else {
        local_1c = FUN_0040f21d(pwVar5,(int)param_3);
      }
      if ((int)local_1c < 0) {
        return local_1c;
      }
    }
    else {
      cVar3 = FUN_00410103(param_3);
      if (cVar3 != '\0') {
        FUN_00411f7a();
      }
    }
    FUN_0040e4f4((int)param_3);
    iVar4 = FUN_0040a129();
    if (iVar4 == 0) {
      return local_1c;
    }
    local_14 = param_1 + 0xc;
    piVar7 = FUN_0040d210((int *)(*param_3 + -0x10));
    puVar9 = FUN_0040bc9a(param_1 + 0xc,(ushort *)(piVar7 + 4));
    FUN_004055df(piVar7);
    if (puVar9 == (undefined4 *)0x0) {
      piVar7 = FUN_0040d210((int *)(*param_3 + -0x10));
      local_20 = piVar7 + 4;
      local_8 = 3;
      FUN_0040d510(local_14,(short *)local_20);
      local_8 = 0xffffffff;
      FUN_004055df(piVar7);
    }
    FUN_0040eef9((int)local_18);
    if ((param_3[9] == 0) && (param_3[8] != 0)) {
      return local_1c;
    }
    FUN_0040ca34(local_dc,1);
    local_18 = local_dc;
    local_8 = 4;
    FUN_0041140f(&local_18);
    FUN_0040ca7b((undefined4 *)local_dc);
    return local_1c;
  }
  uVar6 = _wtoi(pwVar5);
  if (0x15 < uVar6) {
    return local_1c;
  }
  local_1c = FUN_00413ce5(param_3,uVar6,(UINT *)0x0,*(int *)(param_1 + 0x4a));
  if ((int)local_1c < 0) {
    return local_1c;
  }
  iVar4 = FUN_0040a129();
  puVar13 = local_18;
  if (iVar4 != 0) {
    piVar7 = FUN_0040d210((int *)(*param_3 + -0x10));
    local_20 = (int *)0x1;
    puVar13 = (ushort *)(piVar7 + 4);
    puVar9 = FUN_0040bc9a(param_1,puVar13);
    if (puVar9 != (undefined4 *)0x0) goto LAB_0040e304;
  }
  local_14 = (ushort *)((uint)local_14 & 0xffffff00);
LAB_0040e304:
  if (((uint)local_20 & 1) != 0) {
    FUN_004055df((undefined4 *)(puVar13 + -8));
  }
  if ((char)local_14 == '\0') {
    cVar3 = FUN_00414115();
    if (cVar3 != '\0') {
      FUN_0040db11((int *)param_1,extraout_EDX_00,param_3);
    }
  }
  else {
    local_14 = param_1 + 0xc;
    piVar7 = FUN_0040d210((int *)(*param_3 + -0x10));
    puVar9 = FUN_0040bc9a(param_1 + 0xc,(ushort *)(piVar7 + 4));
    FUN_004055df(piVar7);
    if (puVar9 == (undefined4 *)0x0) {
      piVar7 = FUN_0040d210((int *)(*param_3 + -0x10));
      local_20 = piVar7 + 4;
      local_8 = 2;
      FUN_0040d510(local_14,(short *)local_20);
      local_8 = 0xffffffff;
      FUN_004055df(piVar7);
    }
    FUN_0040eef9((int)local_18);
  }
  return local_1c;
}



/* Function: FUN_0040e4f4 */

void FUN_0040e4f4(int param_1)

{
  wchar_t *_Str;
  int iVar1;
  wchar_t *pwVar2;
  undefined4 local_c;
  wchar_t *local_8;
  
  iVar1 = WinSqmIsOptedIn();
  if ((iVar1 != 0) && (_Str = *(wchar_t **)(param_1 + 0xc), _Str != (wchar_t *)0x0)) {
    pwVar2 = wcsrchr(_Str,L'\\');
    local_8 = _Str;
    if (pwVar2 != (wchar_t *)0x0) {
      local_8 = pwVar2 + 1;
    }
    if ((local_8 == (wchar_t *)0x0) || (*local_8 == L'\0')) {
      local_8 = L"(null)";
    }
    local_c = 2;
    WinSqmAddToStream(0,0x107d,1,&local_c);
  }
  return;
}



/* Function: FUN_0040e55c */

uint FUN_0040e55c(void)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  undefined4 *TokenInformation;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  DWORD DVar5;
  HANDLE *TokenHandle;
  HKEY local_10;
  HANDLE local_c;
  DWORD local_8;
  
  TokenHandle = &local_c;
  uVar4 = 0;
  DVar5 = 8;
  local_c = (HANDLE)0x0;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,DVar5,TokenHandle);
  if (BVar1 != 0) {
    local_8 = 0;
    BVar1 = GetTokenInformation(local_c,TokenUser,(LPVOID)0x0,0,&local_8);
    uVar4 = 0;
    if (((BVar1 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) &&
       (TokenInformation = (undefined4 *)FUN_00414b3e(local_8), uVar4 = 0,
       TokenInformation != (undefined4 *)0x0)) {
      BVar1 = GetTokenInformation(local_c,TokenUser,TokenInformation,local_8,&local_8);
      uVar4 = 0;
      if ((BVar1 != 0) && (iVar2 = ConvertSidToStringSidW(*TokenInformation,&local_10), iVar2 != 0))
      {
        uVar3 = FUN_0040d8ad(local_10);
        uVar4 = (undefined1)uVar3;
        LocalFree(local_10);
      }
      operator_delete__(TokenInformation);
    }
    BVar1 = CloseHandle(local_c);
  }
  return CONCAT31((int3)((uint)BVar1 >> 8),uVar4);
}



/* Function: FUN_0040e60b */

void FUN_0040e60b(int param_1,void *param_2,void *param_3)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  short local_818 [1024];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0041503a;
  local_10 = ExceptionList;
  local_18 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040d1a5(param_2,(short *)&DAT_0040130c);
  memset(local_818,0,0x800);
  FUN_0040f8e8((LPBYTE)local_818,extraout_ECX,param_3,'\0');
  FUN_004106c7(param_2,local_818);
  uVar2 = extraout_EDX;
  if (param_1 != 0) {
    uVar1 = FUN_0040e55c();
    uVar2 = extraout_EDX_00;
    if ((char)uVar1 != '\0') {
      FUN_0040f8e8((LPBYTE)local_818,extraout_ECX_00,param_3,'\x01');
      FUN_004106c7(param_2,local_818);
      uVar2 = extraout_EDX_01;
    }
  }
  ExceptionList = local_10;
  FUN_00414450(local_18 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040e6d3 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040e6d3(void *param_1,undefined4 param_2)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  HANDLE hObject;
  LSTATUS LVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  void *pvVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  HKEY local_184c;
  undefined4 local_1848;
  undefined4 local_1844;
  HKEY local_1840;
  undefined4 local_183c;
  undefined4 local_1838;
  void *local_1834;
  int local_1830;
  void *local_182c;
  HKEY local_1828;
  undefined4 local_1824;
  undefined4 local_1820;
  int local_181c;
  int local_1818;
  short local_1814 [1024];
  short local_1014 [1024];
  short local_814 [1024];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004150dd;
  local_10 = ExceptionList;
  local_14 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1834 = param_1;
  if (*(int *)((int)param_1 + 0x90) != 0) goto LAB_0040ecb2;
  *(undefined4 *)((int)param_1 + 0x90) = 1;
  cVar2 = FUN_004140e9();
  if (cVar2 != '\0') {
    memset(local_1014,0,0x800);
    local_1828 = (HKEY)0x0;
    local_1824 = 0;
    local_1820 = 0;
    local_8 = 0;
    FUN_0040f9d3((LPBYTE)local_1014,extraout_ECX,&local_1828);
    FUN_0040d75c(&local_181c,local_1014);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0040f117(&local_181c,(void *)((int)param_1 + 0x48));
    FUN_004055df((undefined4 *)(local_181c + -0x10));
    local_8 = 0xffffffff;
    if (local_1828 != (HKEY)0x0) {
      RegCloseKey(local_1828);
    }
  }
  iVar3 = FUN_0040a129();
  local_1840 = (HKEY)0x0;
  local_183c = 0;
  local_1838 = 0;
  local_8 = 3;
  FUN_0040b39b(&local_182c,(int *)&PTR_PTR_004172c0);
  local_8._0_1_ = 4;
  FUN_0040e60b(iVar3,&local_182c,&local_1840);
  FUN_0040f117(&local_182c,(int *)((int)param_1 + 0x18));
  memset(local_814,0,0x800);
  local_8._0_1_ = 5;
  FUN_0040b39b(&local_1818,(int *)&PTR_PTR_004172c0);
  pvVar1 = local_182c;
  local_8._0_1_ = 6;
  if (iVar3 == 0) {
    hObject = OpenMutexW(0x100000,0,L"Global\\Windows.Machine.OOBE");
    if (hObject != (HANDLE)0x0) {
      CloseHandle(hObject);
      local_1828 = (HKEY)0x0;
      local_1824 = 0;
      local_1820 = 0;
      local_8 = CONCAT31(local_8._1_3_,0xc);
      LVar5 = FUN_004054e1(&local_1828,(HKEY)0x80000002,u_SOFTWARE_Microsoft_Windows_NT_Cu_00417510,
                           0x20019);
      if (LVar5 == 0) {
        local_1834 = (void *)0x400;
        LVar5 = FUN_00405567(&local_1828,L"Configuration",(LPBYTE)local_814,(uint *)&local_1834);
        if (LVar5 != 0) {
          local_814[0] = 0;
        }
      }
      FUN_0040d1a5(&local_1818,local_814);
      goto LAB_0040ec05;
    }
    FUN_0040f8e8((LPBYTE)local_814,extraout_ECX_02,&local_1840,'\x01');
    FUN_0040d1a5(&local_1818,local_814);
    if (*(int *)(local_1818 + -0xc) != 0) {
      FUN_00410822(&local_1818,&DAT_00401fb0,1);
    }
    FUN_00410822(&local_1818,local_182c,*(int *)((int)local_182c + -0xc));
  }
  else {
    local_1828 = (HKEY)0x0;
    local_1824 = 0;
    local_1820 = 0;
    local_8._0_1_ = 7;
    memset(local_1014,0,0x800);
    memset(local_1814,0,0x800);
    FUN_0040fb63(local_1014,extraout_ECX_00,local_1814,extraout_ECX_00,&local_1828);
    FUN_0040d75c(&local_181c,local_1014);
    local_8._0_1_ = 8;
    FUN_0040d75c(&local_1830,local_1814);
    local_8._0_1_ = 9;
    FUN_0040f117(&local_181c,(void *)((int)param_1 + 0x60));
    FUN_0040f117(&local_1830,(void *)((int)param_1 + 0x78));
    local_184c = (HKEY)0x0;
    local_1848 = 0;
    local_1844 = 0;
    local_8 = CONCAT31(local_8._1_3_,10);
    pvVar4 = (void *)FUN_0040fa84((LPBYTE)local_814,extraout_ECX_01,&local_184c);
    if ((int)pvVar4 < 0) {
      pvVar6 = pvVar4;
      if (((uint)pvVar4 & 0x1fff0000) == 0x70000) {
        pvVar6 = (void *)((uint)pvVar4 & 0xffff);
      }
      if (pvVar6 != (void *)0x2) {
        if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
           ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
          FUN_004056db(0x14,&DAT_00402474,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
        }
        local_8._0_1_ = 9;
        if (local_184c != (HKEY)0x0) {
          RegCloseKey(local_184c);
        }
        FUN_004055df((undefined4 *)(local_1830 + -0x10));
        FUN_004055df((undefined4 *)(local_181c + -0x10));
        local_8 = CONCAT31(local_8._1_3_,6);
        if (local_1828 != (HKEY)0x0) {
          RegCloseKey(local_1828);
        }
        FUN_004055df((undefined4 *)(local_1818 + -0x10));
        FUN_004055df((undefined4 *)((int)local_182c + -0x10));
        local_8 = 0xffffffff;
        param_2 = extraout_EDX;
        if (local_1840 != (HKEY)0x0) {
          RegCloseKey(local_1840);
          param_2 = extraout_EDX_00;
        }
        goto LAB_0040ecb2;
      }
      iVar3 = FUN_0040fd46((void *)((uint)pvVar4 & 0xffff),(int *)((int)param_1 + 0x18),&local_1818,
                           &local_184c);
      param_1 = local_1834;
      if (iVar3 < 0) {
        if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
           ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
          FUN_004056db(0x15,&DAT_00402474,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
        }
        local_8._0_1_ = 9;
        if (local_184c != (HKEY)0x0) {
          RegCloseKey(local_184c);
        }
        FUN_004055df((undefined4 *)(local_1830 + -0x10));
        FUN_004055df((undefined4 *)(local_181c + -0x10));
        local_8 = CONCAT31(local_8._1_3_,6);
        if (local_1828 != (HKEY)0x0) {
          RegCloseKey(local_1828);
        }
        FUN_004055df((undefined4 *)(local_1818 + -0x10));
        FUN_004055df((undefined4 *)((int)local_182c + -0x10));
        local_8 = 0xffffffff;
        param_2 = extraout_EDX_01;
        if (local_1840 != (HKEY)0x0) {
          RegCloseKey(local_1840);
          param_2 = extraout_EDX_02;
        }
        goto LAB_0040ecb2;
      }
    }
    else {
      FUN_0040d1a5(&local_1818,local_814);
    }
    local_8 = CONCAT31(local_8._1_3_,0xb);
    iVar3 = FUN_0040cdd0(&local_1840,L"SecureConfiguration",(short *)&DAT_0040130c);
    if (((iVar3 != 0) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040da4b((void *)0x1d,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
    }
    local_8 = CONCAT31(local_8._1_3_,9);
    if (local_184c != (HKEY)0x0) {
      RegCloseKey(local_184c);
    }
    FUN_004055df((undefined4 *)(local_1830 + -0x10));
    FUN_004055df((undefined4 *)(local_181c + -0x10));
LAB_0040ec05:
    local_8._0_1_ = 6;
    if (local_1828 != (HKEY)0x0) {
      RegCloseKey(local_1828);
    }
  }
  FUN_0040f117(&local_1818,param_1);
  FUN_004055df((undefined4 *)(local_1818 + -0x10));
  FUN_004055df((undefined4 *)((int)pvVar1 + -0x10));
  local_8 = 0xffffffff;
  param_2 = extraout_EDX_03;
  if (local_1840 != (HKEY)0x0) {
    RegCloseKey(local_1840);
    param_2 = extraout_EDX_04;
  }
LAB_0040ecb2:
  ExceptionList = local_10;
  FUN_00414450(local_14 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_0040ecd2 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_0040ecd2(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,wchar_t *param_4)

{
  uint uVar1;
  wchar_t *pwVar2;
  void *pvStackY_54;
  undefined4 uVar3;
  undefined4 uVar4;
  HKEY local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [2];
  uint local_18 [4];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x40ecde;
  local_18[0] = 0;
  FUN_0040ce8d(local_20,L"`anonymous-namespace\'::WriteAccessibilityConfigStringListToRegistry",
               local_18);
  local_2c = (HKEY)0x0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 1;
  uVar1 = FUN_004054e1(&local_2c,param_1,param_2,0x20006);
  pwVar2 = L"HKLM";
  if (param_1 != (HKEY)0x80000002) {
    pwVar2 = L"HKCU";
  }
  if (uVar1 == 0) {
    uVar1 = FUN_0040cdd0(&local_2c,param_3,param_4);
    if (uVar1 == 0) {
      if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
         ((PTR_LOOP_00417050[0x1c] & 0x10) != 0)) {
        FUN_00405705(0x18,&DAT_00402474,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00417050 + 0x14),param_4);
      }
      goto LAB_0040edd4;
    }
    local_18[0] = uVar1 & 0xffff | 0x80070000;
    if ((int)uVar1 < 1) {
      local_18[0] = uVar1;
    }
    if (((undefined **)PTR_LOOP_00417050 == &PTR_LOOP_00417050) ||
       ((PTR_LOOP_00417050[0x1c] & 8) == 0)) goto LAB_0040edd4;
    uVar4 = *(undefined4 *)(PTR_LOOP_00417050 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_00417050 + 0x10);
    pvStackY_54 = (void *)0x17;
  }
  else {
    local_18[0] = uVar1 & 0xffff | 0x80070000;
    if ((int)uVar1 < 1) {
      local_18[0] = uVar1;
    }
    if (((undefined **)PTR_LOOP_00417050 == &PTR_LOOP_00417050) ||
       ((PTR_LOOP_00417050[0x1c] & 8) == 0)) goto LAB_0040edd4;
    uVar4 = *(undefined4 *)(PTR_LOOP_00417050 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_00417050 + 0x10);
    pvStackY_54 = (void *)0x16;
  }
  FUN_0040d9a4(pvStackY_54,uVar3,uVar4,pwVar2,param_2);
LAB_0040edd4:
  uVar1 = local_18[0];
  local_8 = local_8 & 0xffffff00;
  if (local_2c != (HKEY)0x0) {
    RegCloseKey(local_2c);
  }
  FUN_0040ced5(local_20);
  return uVar1;
}



/* Function: FUN_0040ee02 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_0040ee02(int *param_1)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  int local_24 [2];
  undefined4 local_1c;
  wchar_t *local_18;
  char local_11;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x40ee0e;
  local_1c = 0;
  FUN_0040ce8d(local_24,L"StartList::SaveSettings",&local_1c);
  local_8 = 0;
  local_11 = FUN_00414115();
  iVar3 = FUN_0040a129();
  if (local_11 != '\0') {
    local_8._0_1_ = 1;
    FUN_0040b39b(&local_18,(int *)&PTR_PTR_004172c0);
    local_8._0_1_ = 2;
    FUN_0040f0be((int *)&local_18,param_1 + 0x12);
    pwVar2 = local_18;
    pwVar4 = u_SOFTWARE_Microsoft_Windows_NT_Cu_00417590;
    if (iVar3 == 0) {
      pwVar4 = u_SOFTWARE_Microsoft_Windows_NT_Cu_00417510;
    }
    FUN_0040ecd2((HKEY)(-0x7ffffffe - (uint)(iVar3 != 0)),pwVar4,u_SettingConfiguration_004174c8,
                 local_18);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004055df((undefined4 *)(pwVar2 + -8));
  }
  if (iVar3 != 0) {
    local_8._0_1_ = 3;
    FUN_0040b39b(&local_18,(int *)&PTR_PTR_004172c0);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_11 != '\0') {
      param_1 = param_1 + 6;
    }
    FUN_0040f0be((int *)&local_18,param_1);
    FUN_0040ecd2((HKEY)0x80000001,u_SOFTWARE_Microsoft_Windows_NT_Cu_00417590,
                 u_Configuration_004174f4,local_18);
    FUN_004055df((undefined4 *)(local_18 + -8));
  }
  uVar1 = local_1c;
  FUN_0040ced5(local_24);
  return uVar1;
}



/* Function: FUN_0040eef9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040eef9(int param_1)

{
  undefined4 *puVar1;
  LSTATUS LVar2;
  int iVar3;
  bool bVar4;
  HKEY local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [2];
  undefined4 local_18;
  wchar_t *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x40ef05;
  bVar4 = false;
  local_18 = 0;
  FUN_0040ce8d(local_20,L"StartList::SaveSessionKey",0);
  local_2c = (HKEY)0x0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 1;
  puVar1 = (undefined4 *)FUN_00414070(local_14);
  LVar2 = FUN_004054e1(&local_2c,(HKEY)0x80000002,(LPCWSTR)*puVar1,0x20006);
  FUN_004055df((undefined4 *)(local_14[0] + -8));
  if (LVar2 == 0) {
LAB_0040efd1:
    local_8._0_1_ = 2;
    FUN_0040b39b(local_14,(int *)&PTR_PTR_004172c0);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_0040f0be((int *)local_14,(int *)(param_1 + 0x30));
    iVar3 = FUN_0040cdd0(&local_2c,L"SecureConfiguration",local_14[0]);
    if (((iVar3 != 0) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040da4b((void *)0x1a,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
    }
    FUN_0040f0be((int *)local_14,(int *)(param_1 + 0x18));
    iVar3 = FUN_0040cdd0(&local_2c,u_Configuration_004174f4,local_14[0]);
    if (iVar3 == 0) {
      if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
         ((PTR_LOOP_00417050[0x1c] & 0x10) != 0)) {
        FUN_00405705(0x1c,&DAT_00402474,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00417050 + 0x14),local_14[0]);
      }
    }
    else if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
            ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040da4b((void *)0x1b,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_00414070(local_14);
    LVar2 = FUN_0040cd3f(&local_2c,(HKEY)0x80000002,(LPCWSTR)*puVar1,&local_18,1,3,&local_18,
                         &local_18);
    FUN_004055df((undefined4 *)(local_14[0] + -8));
    if (LVar2 == 0) goto LAB_0040efd1;
    if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      puVar1 = (undefined4 *)FUN_00414070(local_14);
      bVar4 = true;
      FUN_0040d93c((void *)0x19,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14),(wchar_t *)*puVar1);
    }
    if (!bVar4) goto LAB_0040f097;
  }
  FUN_004055df((undefined4 *)(local_14[0] + -8));
LAB_0040f097:
  local_8 = local_8 & 0xffffff00;
  if (local_2c != (HKEY)0x0) {
    RegCloseKey(local_2c);
  }
  FUN_0040ced5(local_20);
  return;
}



/* Function: FUN_0040f0be */

void __fastcall FUN_0040f0be(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *local_8;
  
  local_8 = param_1;
  FUN_0040d1a5(param_1,(short *)&DAT_0040130c);
  local_8 = (int *)*param_2;
  while (local_8 != (int *)0x0) {
    if (*(int *)(*param_1 + -0xc) != 0) {
      FUN_004106c7(param_1,(short *)&DAT_00401fb0);
    }
    puVar1 = (undefined4 *)FUN_0040d5c7((int *)&local_8);
    FUN_00410822(param_1,(void *)*puVar1,*(int *)((int)*puVar1 + -0xc));
  }
  return;
}



/* Function: FUN_0040f117 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040f117(void *param_1,void *param_2)

{
  bool bVar1;
  LSTATUS LVar2;
  int *piVar3;
  HKEY local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  wchar_t local_20 [2];
  int local_1c;
  LPCWSTR local_18;
  short *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x40f123;
  local_20[0] = L',';
  local_20[1] = L'\0';
  local_1c = 0;
  FUN_00410587(param_1,(int *)local_14,local_20,&local_1c);
  local_8 = 0;
  while( true ) {
    bVar1 = FUN_0041051f((int *)local_14);
    if (!bVar1) break;
    if (*(int *)(local_14[0] + -6) != 0) {
      FUN_0040d75c(&local_18,
                   L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATs\\");
      local_8._0_1_ = 1;
      FUN_00410822(&local_18,local_14[0],*(int *)(local_14[0] + -6));
      local_30 = (HKEY)0x0;
      local_2c = 0;
      local_28 = 0;
      local_8 = CONCAT31(local_8._1_3_,2);
      LVar2 = FUN_004054e1(&local_30,(HKEY)0x80000002,local_18,0x20019);
      if (LVar2 == 0) {
        FUN_0040d510(param_2,local_14[0]);
      }
      local_8._0_1_ = 1;
      if (local_30 != (HKEY)0x0) {
        RegCloseKey(local_30);
        local_30 = (HKEY)0x0;
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004055df((undefined4 *)(local_18 + -8));
    }
    piVar3 = FUN_00410587(param_1,&local_24,local_20,&local_1c);
    local_8._0_1_ = 3;
    FUN_00410671(local_14,piVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004055df((undefined4 *)(local_24 + -0x10));
  }
  FUN_004055df((undefined4 *)(local_14[0] + -8));
  return;
}



/* Function: FUN_0040f21d */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0040f21d(LPCWSTR param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  LPCWSTR pWVar3;
  uint uVar4;
  HINSTANCE pHVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  LPCWSTR lpFile;
  int local_230 [2];
  LPCWSTR local_228;
  undefined4 local_224;
  undefined4 local_220;
  int local_21c;
  LPCWSTR local_218;
  wchar_t local_214 [262];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x220;
  local_8 = 0x40f22c;
  local_224 = 0;
  local_21c = param_2;
  FUN_0040ce8d(local_230,L"StartList::CreateATProcess",&local_224);
  local_8 = 0;
  if ((param_1 != (LPCWSTR)0x0) && (*param_1 != L'\0')) {
    local_220 = *(undefined4 *)(param_2 + 0x10);
    local_218 = (LPCWSTR)0x0;
    iVar2 = FUN_00410c4a(param_1,(int *)&local_218);
    if ((-1 < iVar2) && (pWVar3 = local_218 + 0x82, local_228 = pWVar3, local_218 <= pWVar3)) {
      local_218 = (LPWSTR)0x0;
      local_8 = CONCAT31(local_8._1_3_,1);
      bVar1 = FUN_0040ac79(&local_218,(uint)pWVar3);
      lpFile = local_218;
      if (bVar1) {
        pWVar3 = (LPCWSTR)ExpandEnvironmentStringsW(param_1,local_218,(DWORD)pWVar3);
        if (pWVar3 == (LPCWSTR)0x0) {
          GetLastError();
        }
        else if (pWVar3 <= local_228) {
          uVar4 = FUN_0040b5e5(&DAT_00417c88);
          if ((char)uVar4 == '\0') {
            FUN_004058b4(local_214,0x100,L"%s %s %s");
          }
          else {
            FUN_004058b4(local_214,0x100,L"%s %s %s %s");
            lpFile = local_218;
          }
          pHVar5 = ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,lpFile,local_214,(LPCWSTR)0x0,5);
          if ((((int)pHVar5 < 0x21) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
             ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
            FUN_0040d93c((void *)0x1e,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00417050 + 0x14),lpFile);
          }
        }
      }
      local_8 = local_8 & 0xffffff00;
      free(lpFile);
    }
  }
  FUN_0040ced5(local_230);
  FUN_00414bee(extraout_ECX,extraout_EDX);
  return;
}



/* Function: FUN_0040f460 */

undefined4 __fastcall FUN_0040f460(DWORD param_1,undefined4 *param_2)

{
  HWND hWnd;
  DWORD DVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  DWORD local_8;
  
  *param_2 = 0;
  local_8 = param_1;
  hWnd = GetShellWindow();
  if ((hWnd == (HWND)0x0) || (DVar1 = GetWindowThreadProcessId(hWnd,&local_8), DVar1 == 0)) {
    uVar3 = 0x80004005;
  }
  else {
    pvVar2 = OpenProcess(0x80,0,local_8);
    uVar3 = 0;
    *param_2 = pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
      uVar3 = 0x80004005;
    }
  }
  return uVar3;
}



/* Function: FUN_0040f4b5 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

DWORD FUN_0040f4b5(undefined4 *param_1,int param_2)

{
  LPPROC_THREAD_ATTRIBUTE_LIST nSize;
  LPCWSTR lpApplicationName;
  ULONG_PTR dwBytes;
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  LPPROC_THREAD_ATTRIBUTE_LIST p_Var5;
  DWORD DVar6;
  uint uVar7;
  HANDLE pvVar8;
  LPPROC_THREAD_ATTRIBUTE_LIST p_Var9;
  BOOL BVar10;
  undefined4 extraout_ECX;
  wchar_t *lpCommandLine;
  _STARTUPINFOW local_8c;
  LPPROC_THREAD_ATTRIBUTE_LIST local_48;
  _PROCESS_INFORMATION local_44;
  undefined4 local_34;
  undefined *local_30;
  DWORD local_2c;
  LPCWSTR local_28;
  LPPROC_THREAD_ATTRIBUTE_LIST local_24;
  LPPROC_THREAD_ATTRIBUTE_LIST local_20;
  ULONG_PTR local_1c;
  wchar_t *local_18;
  undefined1 local_11;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x7c;
  local_8 = 0x40f4c1;
  iVar3 = FUN_00410f16(param_1);
  if (iVar3 == 0) {
    local_24 = (LPPROC_THREAD_ATTRIBUTE_LIST)0x0;
    iVar3 = FUN_00410c05(u__SystemRoot__System32_ATBroker_e_00417468,0x7fffffff,(int *)&local_24);
    p_Var9 = local_24;
    if ((iVar3 < 0) || (nSize = local_24 + 0x104, nSize < local_24)) {
      DVar4 = 0x80004005;
    }
    else {
      local_28 = (LPCWSTR)0x0;
      local_8 = 0;
      bVar2 = FUN_0040ac79(&local_28,(uint)nSize);
      lpApplicationName = local_28;
      if (bVar2) {
        p_Var5 = (LPPROC_THREAD_ATTRIBUTE_LIST)
                 ExpandEnvironmentStringsW
                           (u__SystemRoot__System32_ATBroker_e_00417468,local_28,(DWORD)nSize);
        if (p_Var5 == (LPPROC_THREAD_ATTRIBUTE_LIST)0x0) {
          DVar6 = GetLastError();
          DVar4 = DVar6 & 0xffff | 0x80070000;
          if ((int)DVar6 < 1) {
            DVar4 = DVar6;
          }
        }
        else if (nSize < p_Var5) {
          DVar4 = 0x8007007a;
        }
        else {
          p_Var5 = p_Var9 + 0x11a;
          if ((p_Var5 < nSize) || (local_20 = p_Var9 + 0x21e, local_20 < p_Var5)) {
            DVar4 = 0x80004005;
          }
          else {
            local_18 = (wchar_t *)0x0;
            local_8 = CONCAT31(local_8._1_3_,1);
            bVar2 = FUN_0040ac79(&local_18,(uint)local_20);
            pwVar1 = local_18;
            if (bVar2) {
              uVar7 = FUN_0040b5e5(&DAT_00417c88);
              lpCommandLine = local_18;
              local_11 = *(undefined1 *)((int)param_1 + 0x31);
              if ((char)uVar7 == '\0') {
                iVar3 = FUN_004058b4(local_18,(uint)local_20,L"%s /start %s %s %s");
              }
              else {
                local_30 = &DAT_0040130c;
                iVar3 = FUN_004058b4(pwVar1,(uint)local_20,L"%s /start %s %s %s %s");
                lpCommandLine = pwVar1;
              }
              if (iVar3 < 0) {
                DVar4 = 0x80004005;
              }
              else {
                memset(&local_8c,0,0x48);
                local_30 = (undefined *)0x0;
                local_20 = (LPPROC_THREAD_ATTRIBUTE_LIST)0x0;
                local_1c = 0;
                local_8c.cb = 0x48;
                local_2c = 0;
                DVar4 = 0;
                if ((param_2 != 0) && (iVar3 = FUN_0040f460(extraout_ECX,&local_34), -1 < iVar3)) {
                  InitializeProcThreadAttributeList((LPPROC_THREAD_ATTRIBUTE_LIST)0x0,1,0,&local_1c)
                  ;
                  dwBytes = local_1c;
                  pvVar8 = GetProcessHeap();
                  p_Var9 = (LPPROC_THREAD_ATTRIBUTE_LIST)HeapAlloc(pvVar8,0,dwBytes);
                  uVar7 = (uint)(p_Var9 != (LPPROC_THREAD_ATTRIBUTE_LIST)0x0);
                  local_20 = p_Var9;
                  if (p_Var9 != (LPPROC_THREAD_ATTRIBUTE_LIST)0x0) {
                    uVar7 = InitializeProcThreadAttributeList(p_Var9,1,0,&local_1c);
                  }
                  DVar4 = local_2c;
                  if (uVar7 != 0) {
                    local_30 = (undefined *)0x1;
                    BVar10 = UpdateProcThreadAttribute
                                       (p_Var9,0,0x20000,&local_34,4,(PVOID)0x0,(PSIZE_T)0x0);
                    DVar4 = local_2c;
                    if (BVar10 != 0) {
                      local_48 = p_Var9;
                    }
                  }
                }
                BVar10 = CreateProcessW(lpApplicationName,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                                        (LPSECURITY_ATTRIBUTES)0x0,0,0x1080000,(LPVOID)0x0,
                                        (LPCWSTR)0x0,&local_8c,&local_44);
                if (BVar10 == 0) {
                  DVar4 = 0x80004005;
                }
                else {
                  CloseHandle(local_44.hProcess);
                  CloseHandle(local_44.hThread);
                }
                if (local_30 != (undefined *)0x0) {
                  DeleteProcThreadAttributeList(local_20);
                }
                if (local_20 != (LPPROC_THREAD_ATTRIBUTE_LIST)0x0) {
                  DVar6 = 0;
                  p_Var9 = local_20;
                  pvVar8 = GetProcessHeap();
                  HeapFree(pvVar8,DVar6,p_Var9);
                }
              }
            }
            else {
              DVar4 = 0x8007000e;
              lpCommandLine = local_18;
            }
            local_8 = local_8 & 0xffffff00;
            free(lpCommandLine);
          }
        }
      }
      else {
        DVar4 = 0x8007000e;
      }
      local_8 = 0xffffffff;
      free(lpApplicationName);
    }
  }
  else {
    DVar4 = 0;
  }
  return DVar4;
}



/* Function: FUN_0040f782 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0040f807) */

undefined4 FUN_0040f782(void)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int *piVar3;
  LSTATUS LVar4;
  wchar_t *pwVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  HKEY local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [2];
  void *local_18;
  LPCWSTR local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x40f78e;
  FUN_0040ce8d(local_20,L"StartList::IsDesktopSwitch",0);
  local_2c = (HKEY)0x0;
  local_28 = 0;
  local_24 = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_0040b39b(local_14,(int *)&PTR_PTR_004172c0);
  local_8._0_1_ = 3;
  puVar2 = (undefined4 *)FUN_00414070(&local_18);
  local_8._0_1_ = 4;
  FUN_00410671(local_14,puVar2);
  local_8._0_1_ = 3;
  FUN_004055df((undefined4 *)((int)local_18 + -0x10));
  piVar3 = (int *)FUN_004107e2((int *)local_14);
  FUN_0040b39b(&local_18,piVar3);
  local_8._0_1_ = 5;
  FUN_0040b33b(&local_18,"\\");
  local_8._0_1_ = 6;
  FUN_00410822(local_14,local_18,*(int *)((int)local_18 + -0xc));
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004055df((undefined4 *)((int)local_18 + -0x10));
  pwVar1 = u_SwitchApps_004174b0;
  do {
    pwVar5 = pwVar1;
    pwVar1 = pwVar5 + 1;
  } while (*pwVar5 != L'\0');
  FUN_00410822(local_14,u_SwitchApps_004174b0,(int)(pwVar5 + -0x20ba58) >> 1);
  LVar4 = FUN_004054e1(&local_2c,(HKEY)0x80000002,local_14[0],0x20006);
  if (LVar4 == 0) {
    uVar6 = 1;
  }
  else {
    LVar4 = FUN_0040cd3f(&local_2c,(HKEY)0x80000002,local_14[0],extraout_ECX,1,3,extraout_ECX,
                         &local_18);
    if (((LVar4 != 0) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040d93c((void *)0x1f,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14),local_14[0]);
    }
    uVar6 = 0;
  }
  FUN_004055df((undefined4 *)(local_14[0] + -8));
  local_8 = local_8 & 0xffffff00;
  if (local_2c != (HKEY)0x0) {
    RegCloseKey(local_2c);
  }
  FUN_0040ced5(local_20);
  return uVar6;
}



/* Function: FUN_0040f8e8 */

void FUN_0040f8e8(LPBYTE param_1,undefined4 param_2,void *param_3,char param_4)

{
  undefined4 *puVar1;
  LSTATUS LVar2;
  wchar_t *pwVar3;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414e2c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[0] = '\0';
  param_1[1] = '\0';
  puVar1 = (undefined4 *)FUN_00414070(&local_14);
  LVar2 = FUN_004054e1(param_3,(HKEY)0x80000002,(LPCWSTR)*puVar1,0x2001f);
  FUN_004055df((undefined4 *)(local_14 - 0x10));
  if (((LVar2 != 0) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
     ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
    FUN_0040da4b((void *)0x20,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
  }
  local_14 = 0x400;
  pwVar3 = L"SecureConfiguration";
  if (param_4 == '\0') {
    pwVar3 = L"Configuration";
  }
  LVar2 = FUN_00405567(param_3,pwVar3,param_1,&local_14);
  if (LVar2 != 0) {
    if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040da4b((void *)0x21,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
    }
    param_1[0] = '\0';
    param_1[1] = '\0';
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040f9d3 */

void FUN_0040f9d3(LPBYTE param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  LSTATUS LVar2;
  wchar_t *pwVar3;
  uint local_8;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  iVar1 = FUN_0040a129();
  pwVar3 = u_SOFTWARE_Microsoft_Windows_NT_Cu_00417510;
  if (iVar1 != 0) {
    pwVar3 = u_SOFTWARE_Microsoft_Windows_NT_Cu_00417590;
  }
  LVar2 = FUN_004054e1(param_3,(HKEY)(-0x7ffffffe - (uint)(iVar1 != 0)),pwVar3,0x2001f);
  if (((LVar2 != 0) && ((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050)) &&
     ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
    FUN_0040da4b((void *)0x22,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
  }
  local_8 = 0x400;
  LVar2 = FUN_00405567(param_3,u_SettingConfiguration_004174c8,param_1,&local_8);
  if (LVar2 != 0) {
    if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040da4b((void *)0x23,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
    }
    param_1[0] = '\0';
    param_1[1] = '\0';
  }
  return;
}



/* Function: FUN_0040fa84 */

uint FUN_0040fa84(LPBYTE param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  LSTATUS LVar2;
  uint uVar3;
  uint local_8;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  uVar1 = FUN_004054e1(param_3,(HKEY)0x80000001,u_SOFTWARE_Microsoft_Windows_NT_Cu_00417590,0x20019)
  ;
  if (uVar1 == 0) {
    local_8 = 0x400;
    LVar2 = FUN_00405567(param_3,L"Configuration",param_1,&local_8);
    if (LVar2 == 2) {
      if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
         ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
        FUN_0040da4b((void *)0x25,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
      }
      uVar3 = 0x80070002;
    }
    else {
      if (LVar2 != 0) {
        if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
           ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
          FUN_0040da4b((void *)0x26,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
        }
        param_1[0] = '\0';
        param_1[1] = '\0';
      }
      uVar3 = 0;
    }
  }
  else {
    if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040da4b((void *)0x24,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
    }
    uVar3 = uVar1 & 0xffff | 0x80070000;
    if ((int)uVar1 < 1) {
      uVar3 = uVar1;
    }
  }
  return uVar3;
}



/* Function: FUN_0040fb63 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040fb63(short *param_1,undefined4 param_2,short *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  wchar_t wVar1;
  short sVar2;
  LSTATUS LVar3;
  int *piVar4;
  wchar_t *pwVar5;
  uint uVar6;
  wchar_t *pwVar7;
  short *psVar8;
  short *this;
  bool bVar9;
  undefined4 local_d4 [45];
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc4;
  local_8 = 0x40fb72;
  *param_1 = 0;
  *param_3 = 0;
  LVar3 = FUN_004054e1(param_5,(HKEY)0x80000001,
                       L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AccessibilityTemp",0x2001f
                      );
  if (LVar3 == 0) {
    FUN_0040c9f4(local_d4);
    local_8 = 0;
    piVar4 = (int *)FUN_0040cb05((int)local_d4);
    local_1c = *piVar4;
    while (local_1c != 0) {
      piVar4 = (int *)FUN_0040d5c7(&local_1c);
      piVar4 = (int *)*piVar4;
      pwVar5 = (wchar_t *)piVar4[5];
      pwVar7 = L"SystemSetting";
      do {
        wVar1 = *pwVar5;
        bVar9 = (ushort)wVar1 < (ushort)*pwVar7;
        if (wVar1 != *pwVar7) {
LAB_0040fc02:
          uVar6 = -(uint)bVar9 | 1;
          goto LAB_0040fc07;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar5[1];
        bVar9 = (ushort)wVar1 < (ushort)pwVar7[1];
        if (wVar1 != pwVar7[1]) goto LAB_0040fc02;
        pwVar5 = pwVar5 + 2;
        pwVar7 = pwVar7 + 2;
      } while (wVar1 != L'\0');
      uVar6 = 0;
LAB_0040fc07:
      if (((uVar6 != 0) &&
          (LVar3 = FUN_00405529(param_5,(LPCWSTR)*piVar4,(LPBYTE)local_14), LVar3 == 0)) &&
         ((local_14[0] & 2) != 0)) {
        local_18 = local_14[0] & 0xfffffffd;
        *(undefined4 *)(local_20 + 0x98) = 1;
        local_14[0] = local_18;
        RegSetValueExW((HKEY)*param_5,(LPCWSTR)*piVar4,0,4,(BYTE *)&local_18,4);
        if ((local_14[0] & 1) == 0) {
          psVar8 = param_3;
          do {
            sVar2 = *psVar8;
            psVar8 = psVar8 + 1;
          } while (sVar2 != (short)local_8);
          this = param_3;
          if ((int)psVar8 - (int)(param_3 + 1) >> 1 != 0) {
            FUN_00410901(param_3,0x401fb0);
          }
        }
        else {
          psVar8 = param_1;
          do {
            sVar2 = *psVar8;
            psVar8 = psVar8 + 1;
          } while (sVar2 != (short)local_8);
          this = param_1;
          if ((int)psVar8 - (int)(param_1 + 1) >> 1 != 0) {
            FUN_00410901(param_1,0x401fb0);
          }
        }
        FUN_00410901(this,*piVar4);
      }
    }
    FUN_0040ca7b(local_d4);
  }
  return;
}



/* Function: FUN_0040fcda */

void __thiscall FUN_0040fcda(void *this,undefined4 *param_1)

{
  LSTATUS LVar1;
  HKEY local_14;
  undefined4 local_10;
  undefined4 local_c;
  BYTE local_8 [4];
  
  local_14 = (HKEY)0x0;
  local_10 = 0;
  local_c = 0;
  LVar1 = FUN_0040cd3f(&local_14,(HKEY)0x80000001,
                       L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AccessibilityTemp",this,1,
                       0x2001f,this,(undefined4 *)0x0);
  if (LVar1 == 0) {
    local_8[0] = '\x03';
    local_8[1] = '\0';
    local_8[2] = '\0';
    local_8[3] = '\0';
    RegSetValueExW(local_14,(LPCWSTR)*param_1,0,4,local_8,4);
  }
  if (local_14 != (HKEY)0x0) {
    RegCloseKey(local_14);
  }
  return;
}



/* Function: FUN_0040fd46 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_0040fd46(void *this,int *param_1,void *param_2,void *param_3)

{
  void *this_00;
  LSTATUS LVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *puVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar7;
  int local_258 [6];
  void *local_240;
  HKEY local_23c;
  undefined4 local_238;
  undefined4 local_234;
  uint local_230;
  LPCWSTR local_22c;
  LPCWSTR local_228;
  LPCWSTR local_224;
  int *local_220;
  short local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x248;
  local_8._0_1_ = 0x55;
  local_8._1_3_ = 0x40fd;
  local_220 = param_1;
  local_240 = param_2;
  LVar1 = FUN_0040cd3f(param_3,(HKEY)0x80000001,u_SOFTWARE_Microsoft_Windows_NT_Cu_00417590,this,0,3
                       ,this,&local_230);
  if (LVar1 == 0) {
    FUN_0040d4ee(local_258);
    local_8 = 0;
    local_220 = (int *)*local_220;
    while (local_220 != (int *)0x0) {
      puVar2 = (undefined4 *)FUN_0040d5c7((int *)&local_220);
      piVar3 = FUN_00410cea((short *)*puVar2);
      if (piVar3[0xb] != 1) {
        FUN_0040d510(local_258,(short *)*puVar2);
      }
    }
    local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
    local_8._0_1_ = 1;
    FUN_0040b39b(&local_220,(int *)&PTR_PTR_004172c0);
    local_8._0_1_ = 2;
    FUN_0040f0be((int *)&local_220,local_258);
    piVar3 = local_220;
    iVar4 = FUN_0040cdd0(param_3,u_Configuration_004174f4,(short *)local_220);
    if (iVar4 == 0) {
      local_23c = (HKEY)0x0;
      local_238 = 0;
      local_234 = 0;
      local_8._0_1_ = 3;
      LVar1 = FUN_004054e1(&local_23c,(HKEY)0x80000001,
                           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Shell Folders",
                           0x20019);
      if (LVar1 == 0) {
        memset(local_21c,0,0x208);
        local_230 = 0x104;
        FUN_00405567(&local_23c,L"Startup",(LPBYTE)local_21c,&local_230);
        FUN_0040d75c(&local_22c,local_21c);
        local_8._0_1_ = 4;
        FUN_0040d75c(&local_228,local_21c);
        local_8._0_1_ = 5;
        FUN_0040d75c(&local_224,local_21c);
        local_8._0_1_ = 6;
        FUN_00410822(&local_22c,L"\\On-Screen Keyboard.lnk",0x17);
        FUN_00410822(&local_228,L"\\Narrator.lnk",0xd);
        FUN_00410822(&local_224,L"\\Magnifier.lnk",0xe);
        this_00 = local_240;
        FUN_00410671(local_240,&local_220);
        DVar5 = GetFileAttributesW(local_22c);
        if (DVar5 != 0xffffffff) {
          FUN_004106c7(this_00,L",osk");
          DeleteFileW(local_22c);
          if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
             ((PTR_LOOP_00417050[0x1c] & 0x10) != 0)) {
            FUN_0040d914((void *)0x2c,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
          }
        }
        DVar5 = GetFileAttributesW(local_228);
        if (DVar5 != 0xffffffff) {
          FUN_004106c7(this_00,L",Narrator");
          DeleteFileW(local_228);
          if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
             ((PTR_LOOP_00417050[0x1c] & 0x10) != 0)) {
            FUN_0040d914((void *)0x2d,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
          }
        }
        DVar5 = GetFileAttributesW(local_224);
        if (DVar5 != 0xffffffff) {
          FUN_004106c7(this_00,L",magnifierpane");
          DeleteFileW(local_224);
          if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
             ((PTR_LOOP_00417050[0x1c] & 0x10) != 0)) {
            FUN_0040d914((void *)0x2e,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
          }
        }
        FUN_004055df((undefined4 *)(local_224 + -8));
        FUN_004055df((undefined4 *)(local_228 + -8));
        FUN_004055df((undefined4 *)(local_22c + -8));
      }
      else if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
              ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
        FUN_0040da4b((void *)0x2b,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
      }
      local_8._0_1_ = 2;
      if (local_23c != (HKEY)0x0) {
        RegCloseKey(local_23c);
      }
    }
    else if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
            ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040da4b((void *)0x2a,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
    }
    FUN_004055df(piVar3 + -4);
    FUN_0040d620(local_258);
    puVar6 = extraout_ECX_00;
    uVar7 = extraout_EDX_01;
  }
  else {
    puVar6 = PTR_LOOP_00417050;
    uVar7 = extraout_EDX;
    if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040da4b((void *)0x29,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
      puVar6 = extraout_ECX;
      uVar7 = extraout_EDX_00;
    }
  }
  FUN_00414bee(puVar6,uVar7);
  return;
}



/* Function: FUN_00410103 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 FUN_00410103(undefined4 *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    pwVar2 = (wchar_t *)*param_1;
    pwVar4 = L"colorfiltering";
    do {
      wVar1 = *pwVar2;
      bVar5 = (ushort)wVar1 < (ushort)*pwVar4;
      if (wVar1 != *pwVar4) {
LAB_00410146:
        uVar3 = -(uint)bVar5 | 1;
        goto LAB_0041014a;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar2[1];
      bVar5 = (ushort)wVar1 < (ushort)pwVar4[1];
      if (wVar1 != pwVar4[1]) goto LAB_00410146;
      pwVar2 = pwVar2 + 2;
      pwVar4 = pwVar4 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_0041014a:
    if (uVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00410165 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_00410165(void *param_1)

{
  LSTATUS LVar1;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *puVar2;
  undefined *extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar3;
  undefined4 extraout_EDX_03;
  void *pvStackY_848;
  undefined4 uVar4;
  HKEY local_828;
  undefined4 local_824;
  undefined4 local_820;
  uint local_81c;
  short local_818 [1032];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x818;
  local_8 = 0x410174;
  FUN_0040d1a5(param_1,(short *)&DAT_0040130c);
  local_828 = (HKEY)0x0;
  local_824 = 0;
  local_820 = 0;
  local_8 = 0;
  LVar1 = FUN_004054e1(&local_828,(HKEY)0x80000002,u_SOFTWARE_Microsoft_Windows_NT_Cu_004173d0,
                       0x20019);
  if (LVar1 == 0) {
    memset(local_818,0,0x800);
    local_81c = 0x400;
    LVar1 = FUN_00405567(&local_828,u_Configuration_004174f4,(LPBYTE)local_818,&local_81c);
    if (LVar1 == 0) {
      FUN_004106c7(param_1,local_818);
    }
    else if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
            ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      FUN_0040da4b((void *)0x30,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
    }
    local_81c = 0x400;
    LVar1 = FUN_00405567(&local_828,L"SecureConfiguration",(LPBYTE)local_818,&local_81c);
    if (LVar1 == 0) {
      FUN_004106c7(param_1,local_818);
      puVar2 = extraout_ECX_00;
      uVar3 = extraout_EDX_02;
      goto LAB_004102b2;
    }
    puVar2 = PTR_LOOP_00417050;
    uVar3 = extraout_EDX_00;
    if (((undefined **)PTR_LOOP_00417050 == &PTR_LOOP_00417050) ||
       ((PTR_LOOP_00417050[0x1c] & 8) == 0)) goto LAB_004102b2;
    uVar3 = *(undefined4 *)(PTR_LOOP_00417050 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_00417050 + 0x10);
    pvStackY_848 = (void *)0x31;
  }
  else {
    puVar2 = PTR_LOOP_00417050;
    uVar3 = extraout_EDX;
    if (((undefined **)PTR_LOOP_00417050 == &PTR_LOOP_00417050) ||
       ((PTR_LOOP_00417050[0x1c] & 8) == 0)) goto LAB_004102b2;
    uVar3 = *(undefined4 *)(PTR_LOOP_00417050 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_00417050 + 0x10);
    pvStackY_848 = (void *)0x2f;
  }
  FUN_0040da4b(pvStackY_848,uVar4,uVar3);
  puVar2 = extraout_ECX;
  uVar3 = extraout_EDX_01;
LAB_004102b2:
  local_8 = 0xffffffff;
  if (local_828 != (HKEY)0x0) {
    RegCloseKey(local_828);
    puVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_03;
  }
  FUN_00414bee(puVar2,uVar3);
  return;
}



/* Function: FUN_004102d9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004102d9(void)

{
  PHKEY phkResult;
  LSTATUS LVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DWORD local_1c;
  int local_18;
  HKEY local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  uVar3 = 0;
  local_14[0] = (HKEY)0x0;
  local_8 = 0;
  phkResult = (PHKEY)FUN_004104b6(local_14);
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,u_SOFTWARE_Microsoft_Windows_NT_Cu_00417590,0,0x2001f,
                        phkResult);
  if (LVar1 == 0) {
    local_18 = 0;
    local_1c = 4;
    puVar2 = (undefined *)
             RegQueryValueExW(local_14[0],L"NarratorAfterSigninResetCompleted",(LPDWORD)0x0,
                              (LPDWORD)0x0,(LPBYTE)&local_18,&local_1c);
    if (puVar2 == (undefined *)0x0) {
      uVar3 = 1;
      if (local_18 != 1) {
        uVar3 = 0;
      }
      goto LAB_0041039b;
    }
    if (puVar2 == (undefined *)0x2) goto LAB_0041039b;
    if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      uVar6 = *(undefined4 *)(PTR_LOOP_00417050 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_00417050 + 0x10);
      uVar4 = 0x32;
      goto LAB_0041038e;
    }
  }
  else {
    puVar2 = PTR_LOOP_00417050;
    if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
       ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
      uVar6 = *(undefined4 *)(PTR_LOOP_00417050 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_00417050 + 0x10);
      uVar4 = 0x33;
LAB_0041038e:
      puVar2 = (undefined *)FUN_004056db(uVar4,&DAT_00402474,uVar5,uVar6);
    }
  }
  uVar3 = 1;
LAB_0041039b:
  if (local_14[0] != (HKEY)0x0) {
    local_8 = 3;
    puVar2 = (undefined *)RegCloseKey(local_14[0]);
  }
  return CONCAT31((int3)((uint)puVar2 >> 8),uVar3);
}



/* Function: FUN_004103c3 */

void __fastcall FUN_004103c3(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0041542b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*param_1 != 0) {
    local_8 = 0;
    RegCloseKey((HKEY)*param_1);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00410410 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00410410(void)

{
  PHKEY phkResult;
  LSTATUS LVar1;
  BYTE local_18 [4];
  HKEY local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_14[0] = (HKEY)0x0;
  local_8 = 0;
  phkResult = (PHKEY)FUN_004104b6(local_14);
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,u_SOFTWARE_Microsoft_Windows_NT_Cu_00417590,0,0x2001f,
                        phkResult);
  if (LVar1 == 0) {
    local_18[0] = '\x01';
    local_18[1] = '\0';
    local_18[2] = '\0';
    local_18[3] = '\0';
    RegSetValueExW(local_14[0],L"NarratorAfterSigninResetCompleted",0,4,local_18,4);
  }
  else if (((undefined **)PTR_LOOP_00417050 != &PTR_LOOP_00417050) &&
          ((PTR_LOOP_00417050[0x1c] & 8) != 0)) {
    FUN_004056db(0x34,&DAT_00402474,*(undefined4 *)(PTR_LOOP_00417050 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00417050 + 0x14));
  }
  if (local_14[0] != (HKEY)0x0) {
    local_8 = 1;
    RegCloseKey(local_14[0]);
  }
  return;
}



/* Function: FUN_004104b6 */

undefined4 * __fastcall FUN_004104b6(undefined4 *param_1)

{
  HKEY hKey;
  DWORD dwErrCode;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00414da6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  hKey = (HKEY)*param_1;
  if (hKey != (HKEY)0x0) {
    local_8 = 0;
    dwErrCode = GetLastError();
    RegCloseKey(hKey);
    SetLastError(dwErrCode);
  }
  *param_1 = 0;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_0041051f */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool __fastcall FUN_0041051f(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  ushort *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x41052b;
  piVar2 = (int *)FUN_004107e2(param_1);
  FUN_0040b39b(local_14,piVar2);
  local_8 = 0;
  cVar1 = FUN_0040b30d(local_14,0x401506);
  if (cVar1 == '\0') {
    FUN_0040b33b(local_14,"");
  }
  local_8 = 1;
  iVar3 = FUN_0040d1e8(param_1,local_14[0]);
  FUN_004055df((undefined4 *)(local_14[0] + -8));
  return iVar3 != 0;
}



/* Function: FUN_00410587 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __thiscall FUN_00410587(void *this,int *param_1,wchar_t *param_2,int *param_3)

{
  wchar_t *_Str;
  wchar_t *pwVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  size_t sVar7;
  size_t sVar8;
  int *piVar9;
  
  iVar3 = *param_3;
  if (iVar3 < 0) {
    FUN_00405404(-0x7ff8ffa9);
    pcVar5 = (code *)swi(3);
    piVar9 = (int *)(*pcVar5)();
    return piVar9;
  }
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
                    /* WARNING: Load size is inaccurate */
    if (iVar3 < *(int *)(*this + -0xc)) {
      piVar9 = (int *)FUN_004107e2((int *)this);
                    /* WARNING: Load size is inaccurate */
      psVar2 = (short *)(*this + *param_3 * 2);
      FUN_0040b39b(param_1,piVar9);
      cVar6 = FUN_0040b30d(param_1,(uint)psVar2);
      if (cVar6 != '\0') {
        return param_1;
      }
      FUN_0040d1a5(param_1,psVar2);
      return param_1;
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    iVar4 = *this;
    _Str = (wchar_t *)(iVar4 + iVar3 * 2);
    pwVar1 = (wchar_t *)(iVar4 + *(int *)(iVar4 + -0xc) * 2);
    if (_Str < pwVar1) {
      sVar7 = wcsspn(_Str,param_2);
      if (_Str + sVar7 < pwVar1) {
        sVar8 = wcscspn(_Str + sVar7,param_2);
        iVar3 = *param_3;
        *param_3 = iVar3 + sVar7 + 1 + sVar8;
        FUN_00410747((int *)this,param_1,iVar3 + sVar7,sVar8);
        return param_1;
      }
    }
  }
  *param_3 = -1;
  piVar9 = (int *)FUN_004107e2((int *)this);
  FUN_0040b39b(param_1,piVar9);
  return param_1;
}



/* Function: FUN_00410671 */

int * __thiscall FUN_00410671(void *this,undefined4 *param_1)

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
      FUN_0040d3ed(this,pvVar1,*(int *)((int)pvVar1 + -0xc));
    }
    else {
      piVar2 = FUN_0040d210(piVar2);
      FUN_004055df(piVar3);
      *(int **)this = piVar2 + 4;
    }
  }
  return (int *)this;
}



/* Function: FUN_004106c7 */

void __thiscall FUN_004106c7(void *this,short *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  if (param_1 == (short *)0x0) {
    iVar2 = 0;
  }
  else {
    psVar3 = param_1;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar3 - (int)(param_1 + 1) >> 1;
  }
  FUN_00410822(this,param_1,iVar2);
  return;
}



/* Function: ~CSemExclusiveLocal */

/* Library Function - Single Match
    public: __thiscall CSemExclusiveLocal::~CSemExclusiveLocal(void)
   
   Library: Visual Studio 2019 Release */

void __thiscall CSemExclusiveLocal::~CSemExclusiveLocal(CSemExclusiveLocal *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414f06;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  RegCloseKey((HKEY)this);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00410747 */

/* WARNING: Variable defined which should be unmapped: param_2 */

int * __thiscall FUN_00410747(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (-1 < param_3) {
    iVar7 = param_3;
  }
  iVar6 = 0;
  if (-1 < param_4) {
    iVar6 = param_4;
  }
  if (iVar6 <= 0x7fffffff - iVar7) {
    iVar1 = *(int *)(*param_1 + -0xc);
    iVar5 = iVar1 - iVar7;
    if (iVar6 + iVar7 <= iVar1) {
      iVar5 = iVar6;
    }
    iVar6 = 0;
    if (iVar7 <= iVar1) {
      iVar6 = iVar5;
    }
    if ((iVar7 == 0) && (iVar6 == iVar1)) {
      piVar3 = FUN_0040d210((int *)(*param_1 + -0x10));
      *param_2 = (int)(piVar3 + 4);
    }
    else {
      puVar4 = (undefined4 *)FUN_004107e2(param_1);
      FUN_00410881(param_2,(void *)(*param_1 + iVar7 * 2),iVar6,puVar4);
    }
    return param_2;
  }
  FUN_00405404(-0x7ff8ffa9);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return param_2;
}



/* Function: FUN_004107e2 */

void __fastcall FUN_004107e2(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int **)(*param_1 + -0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(*param_1 + -0x10) + 0x10);
    (*(code *)PTR_guard_check_icall_004182ac)();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      return;
    }
  }
  pcVar1 = *(code **)(PTR_PTR_004172c0 + 0x10);
  (*(code *)PTR_guard_check_icall_004182ac)();
  (*pcVar1)();
  return;
}



/* Function: FUN_00410822 */

void __thiscall FUN_00410822(void *this,void *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
                    /* WARNING: Load size is inaccurate */
  uVar3 = (int)param_1 - *this >> 1;
  uVar1 = *(uint *)(*this + -0xc);
  iVar2 = FUN_0040b75e(this,uVar1 + param_2);
  if (uVar3 <= uVar1) {
    param_1 = (void *)(iVar2 + uVar3 * 2);
  }
  memcpy_s((void *)(iVar2 + uVar1 * 2),param_2 * 2,param_1,param_2 * 2);
  FUN_0040ba7b(this,uVar1 + param_2);
  return;
}



/* Function: FUN_00410881 */

int * __thiscall FUN_00410881(void *this,void *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar3 = -0x7fffbffb;
  }
  else {
    if ((param_1 != (void *)0x0) || (param_2 == 0)) {
      pcVar1 = *(code **)*param_3;
      (*(code *)PTR_guard_check_icall_004182ac)(param_2,2);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        *(int *)this = iVar3 + 0x10;
        FUN_0040ba7b(this,param_2);
                    /* WARNING: Load size is inaccurate */
        memcpy_s(*this,param_2 * 2,param_1,param_2 * 2);
        return (int *)this;
      }
      goto LAB_004108f5;
    }
    iVar3 = -0x7ff8ffa9;
  }
  FUN_00405404(iVar3);
LAB_004108f5:
  FUN_0040bc8a();
  pcVar1 = (code *)swi(3);
  piVar2 = (int *)(*pcVar1)();
  return piVar2;
}



/* Function: FUN_00410901 */

int __thiscall FUN_00410901(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  void *local_8;
  
  local_8 = this;
  iVar2 = FUN_00410c05((short *)this,0x200,(int *)&local_8);
  if (-1 < iVar2) {
    psVar4 = (short *)((int)this + (int)local_8 * 2);
    iVar6 = 0x200 - (int)local_8;
    if (iVar6 != 0) {
      iVar2 = 0x7ffffffe;
      iVar5 = param_1 - (int)psVar4;
      do {
        if ((iVar2 == 0) || (sVar1 = *(short *)(iVar5 + (int)psVar4), sVar1 == 0)) break;
        *psVar4 = sVar1;
        psVar4 = psVar4 + 1;
        iVar2 = iVar2 + -1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    psVar3 = psVar4 + -1;
    if (iVar6 != 0) {
      psVar3 = psVar4;
    }
    *psVar3 = 0;
    iVar2 = -0x7ff8ff86;
    if (iVar6 != 0) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* Function: FUN_00410971 */

void FUN_00410971(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  SHORT SVar4;
  SHORT SVar5;
  SHORT SVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_EDX;
  tagINPUT local_1c8;
  DWORD DStack_1ac;
  WORD aWStack_1a8 [2];
  LONG aLStack_1a4 [6];
  WORD aWStack_18c [2];
  LONG aLStack_188 [6];
  WORD aWStack_170 [2];
  LONG aLStack_16c [89];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  SVar1 = GetKeyState(0xa2);
  SVar2 = GetKeyState(0xa3);
  SVar3 = GetKeyState(0xa4);
  SVar4 = GetKeyState(0xa5);
  SVar5 = GetKeyState(0xa0);
  SVar6 = GetKeyState(0xa1);
  local_1c8.type = 0;
  memset(&local_1c8.field1_0x4,0,0x1bc);
  if (SVar1 < 0) {
    local_1c8.type = 1;
    local_1c8.field1_0x4.ki.wVk = 0xa2;
    local_1c8.field1_0x4.mi.dy = 2;
    local_1c8.field1_0x4.mi.dwFlags = 0x1000;
  }
  uVar8 = (uint)(SVar1 < 0);
  uVar7 = uVar8;
  if (SVar2 < 0) {
    uVar7 = uVar8 + 1;
    (&local_1c8)[uVar8].field1_0x4.ki.wVk = 0xa3;
    (&local_1c8)[uVar8].type = 1;
    (&local_1c8)[uVar8].field1_0x4.mi.dy = 3;
    (&local_1c8)[uVar8].field1_0x4.mi.dwFlags = 0x1000;
  }
  uVar8 = uVar7;
  if (SVar3 < 0) {
    uVar8 = uVar7 + 1;
    (&local_1c8)[uVar7].type = 1;
    (&local_1c8)[uVar7].field1_0x4.ki.wVk = 0xa4;
    (&local_1c8)[uVar7].field1_0x4.mi.dy = 2;
    (&local_1c8)[uVar7].field1_0x4.mi.dwFlags = 0x1000;
  }
  uVar7 = uVar8;
  if (SVar4 < 0) {
    uVar7 = uVar8 + 1;
    (&local_1c8)[uVar8].field1_0x4.ki.wVk = 0xa5;
    (&local_1c8)[uVar8].type = 1;
    (&local_1c8)[uVar8].field1_0x4.mi.dy = 3;
    (&local_1c8)[uVar8].field1_0x4.mi.dwFlags = 0x1000;
  }
  uVar8 = uVar7;
  if (SVar5 < 0) {
    uVar8 = uVar7 + 1;
    (&local_1c8)[uVar7].type = 1;
    (&local_1c8)[uVar7].field1_0x4.ki.wVk = 0xa0;
    (&local_1c8)[uVar7].field1_0x4.mi.dy = 2;
    (&local_1c8)[uVar7].field1_0x4.mi.dwFlags = 0x1000;
  }
  uVar7 = uVar8;
  if (SVar6 < 0) {
    uVar7 = uVar8 + 1;
    (&local_1c8)[uVar8].type = 1;
    (&local_1c8)[uVar8].field1_0x4.ki.wVk = 0xa1;
    (&local_1c8)[uVar8].field1_0x4.mi.dy = 2;
    (&local_1c8)[uVar8].field1_0x4.mi.dwFlags = 0x1000;
  }
  iVar9 = uVar7 + 1;
  (&local_1c8)[uVar7].field1_0x4.mi.dy = 0;
  (&local_1c8)[uVar7].field1_0x4.mi.dwFlags = 0x1000;
  (&local_1c8)[uVar7].type = 1;
  (&local_1c8)[uVar7].field1_0x4.ki.wVk = 0x5b;
  iVar10 = uVar7 + 2;
  (&local_1c8)[iVar9].field1_0x4.mi.dy = 0;
  (&local_1c8)[iVar9].field1_0x4.ki.wVk = 0x55;
  (&local_1c8)[iVar9].type = 1;
  (&local_1c8)[iVar9].field1_0x4.mi.dwFlags = 0x1000;
  iVar9 = uVar7 + 3;
  (&local_1c8)[iVar10].field1_0x4.ki.wVk = 0x55;
  (&local_1c8)[iVar10].type = 1;
  (&local_1c8)[iVar10].field1_0x4.mi.dy = 2;
  (&local_1c8)[iVar10].field1_0x4.mi.dwFlags = 0x1000;
  (&local_1c8)[iVar9].type = 1;
  (&local_1c8)[iVar9].field1_0x4.ki.wVk = 0x5b;
  (&local_1c8)[iVar9].field1_0x4.mi.dy = 2;
  (&local_1c8)[iVar9].field1_0x4.mi.dwFlags = 0x1000;
  SendInput(uVar7 + 4,&local_1c8,0x1c);
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00410c05 */

undefined4 __fastcall FUN_00410c05(short *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2;
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
  return uVar2;
}



/* Function: FUN_00410c4a */

int __thiscall FUN_00410c4a(void *this,int *param_1)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_00410c05((short *)this,0x7fffffff,param_1);
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  return iVar1;
}



/* Function: FUN_00410c80 */

void __fastcall FUN_00410c80(int *param_1)

{
  FUN_004055df((undefined4 *)(param_1[10] + -0x10));
  FUN_004055df((undefined4 *)(param_1[7] + -0x10));
  FUN_004055df((undefined4 *)(param_1[6] + -0x10));
  FUN_004055df((undefined4 *)(param_1[5] + -0x10));
  FUN_004055df((undefined4 *)(param_1[4] + -0x10));
  FUN_004055df((undefined4 *)(param_1[3] + -0x10));
  FUN_004055df((undefined4 *)(param_1[2] + -0x10));
  FUN_004055df((undefined4 *)(param_1[1] + -0x10));
  FUN_004055df((undefined4 *)(*param_1 + -0x10));
  return;
}



/* Function: FUN_00410cea */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __fastcall FUN_00410cea(short *param_1)

{
  int *piVar1;
  wchar_t wVar2;
  LSTATUS LVar3;
  int *piVar4;
  wchar_t *pwVar5;
  uint uVar6;
  wchar_t *pwVar7;
  bool bVar8;
  HKEY local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  LPCWSTR local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0;
  FUN_0040b39b(local_18,(int *)&PTR_PTR_004172c0);
  local_8 = 2;
  FUN_0040d1a5(local_18,L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATs\\");
  FUN_004106c7(local_18,param_1);
  local_28 = (HKEY)0x0;
  local_24 = 0;
  local_20 = 0;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  LVar3 = FUN_004054e1(&local_28,(HKEY)0x80000002,local_18[0],0x20019);
  if (LVar3 == 0) {
    local_1c = (int *)FUN_00414b4f(0x34);
    local_8._0_1_ = 5;
    if (local_1c == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_00410fb5(local_1c,param_1);
    }
    local_8._0_1_ = 6;
    local_1c = piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_00411071(&local_28,L"ApplicationName",piVar4 + 1);
      FUN_00411071(&local_28,L"Description",piVar4 + 2);
      FUN_00411071(&local_28,L"StartExe",piVar4 + 3);
      FUN_00411071(&local_28,L"StartParams",piVar4 + 4);
      FUN_00411071(&local_28,L"SimpleProfile",piVar4 + 5);
      FUN_00411071(&local_28,L"Profile",piVar4 + 6);
      FUN_00411071(&local_28,L"ATExe",piVar4 + 7);
      piVar1 = piVar4 + 8;
      *piVar1 = 1;
      LVar3 = FUN_00405529(&local_28,L"TerminateOnDesktopSwitch",(LPBYTE)piVar1);
      if (LVar3 != 0) {
        *piVar1 = 1;
      }
      piVar1 = piVar4 + 9;
      *piVar1 = 0;
      LVar3 = FUN_00405529(&local_28,L"CopySettingsToLockedDesktop",(LPBYTE)piVar1);
      if (LVar3 != 0) {
        *piVar1 = 0;
      }
      FUN_00411071(&local_28,L"SecureDesktopAccommodation",piVar4 + 10);
      piVar1 = piVar4 + 0xb;
      *piVar1 = 0;
      LVar3 = FUN_00405529(&local_28,L"PassiveAutoStartBehavior",(LPBYTE)piVar1);
      if (LVar3 != 0) {
        *piVar1 = 0;
      }
      pwVar5 = (wchar_t *)piVar4[5];
      pwVar7 = L"SystemSetting";
      do {
        wVar2 = *pwVar5;
        bVar8 = (ushort)wVar2 < (ushort)*pwVar7;
        if (wVar2 != *pwVar7) {
LAB_00410eb7:
          uVar6 = -(uint)bVar8 | 1;
          goto LAB_00410ebc;
        }
        if (wVar2 == L'\0') break;
        wVar2 = pwVar5[1];
        bVar8 = (ushort)wVar2 < (ushort)pwVar7[1];
        if (wVar2 != pwVar7[1]) goto LAB_00410eb7;
        pwVar5 = pwVar5 + 2;
        pwVar7 = pwVar7 + 2;
      } while (wVar2 != L'\0');
      uVar6 = 0;
LAB_00410ebc:
      local_8._0_1_ = 6;
      if (uVar6 != 0) {
        FUN_004113de(piVar4 + 5);
      }
      local_1c = (int *)0x0;
      FUN_0040d17f(&local_1c);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (local_28 != (HKEY)0x0) {
        RegCloseKey(local_28);
      }
      FUN_004055df((undefined4 *)(local_18[0] + -8));
      return piVar4;
    }
    FUN_0040d17f(&local_1c);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_28 != (HKEY)0x0) {
    RegCloseKey(local_28);
  }
  piVar4 = (int *)FUN_00410f03((undefined4 *)(local_18[0] + -8));
  return piVar4;
}



/* Function: Catch@00410ef7 */

undefined * Catch_00410ef7(void)

{
  return &DAT_00410efd;
}



/* Function: FUN_00410f03 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_00410f03(undefined4 *param_1)

{
  FUN_004055df(param_1);
  return 0;
}



/* Function: FUN_00410f16 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_00410f16(undefined4 *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  bool bVar7;
  HANDLE local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  uVar6 = 0;
  pwVar2 = (wchar_t *)param_1[5];
  pwVar5 = L"SystemSetting";
  do {
    wVar1 = *pwVar2;
    bVar7 = (ushort)wVar1 < (ushort)*pwVar5;
    if (wVar1 != *pwVar5) {
LAB_00410f54:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_00410f59;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar2[1];
    bVar7 = (ushort)wVar1 < (ushort)pwVar5[1];
    if (wVar1 != pwVar5[1]) goto LAB_00410f54;
    pwVar2 = pwVar2 + 2;
    pwVar5 = pwVar5 + 2;
  } while (wVar1 != L'\0');
  uVar3 = 0;
LAB_00410f59:
  local_8 = 0xffffffff;
  if (uVar3 == 0) {
    uVar3 = _wtoi((wchar_t *)param_1[3]);
    if (uVar3 < 0x16) {
      uVar6 = FUN_00413c7b(param_1,uVar3);
    }
  }
  else if (*(int *)(param_1[7] + -0xc) == 0) {
    uVar6 = 0;
  }
  else {
    iVar4 = FUN_00411250(param_1[7],local_14);
    if (iVar4 != 0) {
      CloseHandle(local_14[0]);
      uVar6 = 1;
    }
  }
  return uVar6;
}



/* Function: FUN_00410fb5 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __thiscall FUN_00410fb5(void *this,short *param_1)

{
  FUN_0040b39b(this,(int *)&PTR_PTR_004172c0);
  FUN_0040b39b((void *)((int)this + 4),(int *)&PTR_PTR_004172c0);
  FUN_0040b39b((void *)((int)this + 8),(int *)&PTR_PTR_004172c0);
  FUN_0040b39b((void *)((int)this + 0xc),(int *)&PTR_PTR_004172c0);
  FUN_0040b39b((void *)((int)this + 0x10),(int *)&PTR_PTR_004172c0);
  FUN_0040b39b((void *)((int)this + 0x14),(int *)&PTR_PTR_004172c0);
  FUN_0040b39b((void *)((int)this + 0x18),(int *)&PTR_PTR_004172c0);
  FUN_0040b39b((void *)((int)this + 0x1c),(int *)&PTR_PTR_004172c0);
  FUN_0040b39b((void *)((int)this + 0x28),(int *)&PTR_PTR_004172c0);
  *(undefined2 *)((int)this + 0x31) = 0;
  FUN_0040d1a5(this,param_1);
  FUN_004113de((int *)this);
  *(undefined1 *)((int)this + 0x30) = 0;
  return (int *)this;
}



/* Function: FUN_00411071 */

/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00411071(undefined4 *param_1,LPCWSTR param_2,void *param_3)

{
  LSTATUS LVar1;
  short *psVar2;
  short *extraout_ECX;
  short *psVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined8 uVar5;
  short *in_stack_fffff7ac;
  uint local_824;
  int local_820;
  undefined4 *local_81c;
  WCHAR local_818 [1023];
  undefined2 local_1a;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x834;
  local_820 = 1;
  local_8 = 0;
  local_81c = param_1;
  FUN_0040b33b(param_3,"");
  local_8 = 0xffffffff;
  local_824 = 0;
  LVar1 = FUN_00405567(param_1,param_2,(LPBYTE)0x0,&local_824);
  psVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if ((LVar1 == 0) && (local_824 != 0)) {
    psVar3 = in_stack_fffff7ac;
    uVar5 = FUN_00414b3e(-(uint)((int)((ulonglong)local_824 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)local_824 * 2));
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    psVar2 = (short *)uVar5;
    if (psVar2 != (short *)0x0) {
      *psVar2 = 0;
      LVar1 = FUN_00405567(local_81c,param_2,(LPBYTE)psVar2,&local_824);
      if ((LVar1 == 0) && (local_824 != 0)) {
        if (0x400 < local_824) {
          psVar2[0x3ff] = 0;
        }
        local_8 = 2;
        FUN_0040d1a5(param_3,psVar2);
        local_8 = 0xffffffff;
      }
      if ((*psVar2 == 0x40) && (local_820 != 0)) {
        LVar1 = RegLoadMUIStringW((HKEY)*local_81c,param_2,local_818,0x400,(LPDWORD)0x0,1,
                                  (LPCWSTR)0x0);
        local_8 = 4;
        if (LVar1 == 0) {
          local_1a = 0;
          FUN_0040d1a5(param_3,local_818);
        }
        else {
          FUN_0040b33b(param_3,"");
        }
      }
      psVar3 = psVar2;
      operator_delete__(psVar2);
      uVar4 = extraout_EDX_00;
    }
  }
  FUN_00414c03(psVar3,uVar4);
  return;
}



/* Function: Catch@004111cd */

undefined * Catch_004111cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x818) = 0;
  return &DAT_004111da;
}



/* Function: Catch@00411215 */

undefined * Catch_00411215(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x818) = 0;
  return &DAT_00411222;
}



/* Function: Catch@00411235 */

undefined4 Catch_00411235(void)

{
  return 0x41123b;
}



/* Function: FUN_00411250 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00411250(wchar_t *param_1,undefined4 *param_2)

{
  DWORD dwProcessId;
  BOOL BVar1;
  HANDLE hObject;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 local_2230 [4];
  undefined4 *local_222c;
  wchar_t *local_2228;
  undefined4 local_2224;
  DWORD local_2220;
  DWORD local_221c;
  DWORD local_2218;
  uint local_2214;
  DWORD local_2210 [2048];
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  local_222c = param_2;
  local_2228 = param_1;
  uVar5 = K32EnumProcesses(local_2210,0x2000,&local_2214);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 != 0) {
    local_2214 = local_2214 >> 2;
    if (0x800 < local_2214) {
      local_2214 = 0x800;
    }
    dwProcessId = GetCurrentProcessId();
    local_2218 = 0;
    local_221c = dwProcessId;
    BVar1 = ProcessIdToSessionId(dwProcessId,&local_2218);
    uVar3 = extraout_EDX;
    if ((BVar1 != 0) && (uVar4 = 0, local_2214 != 0)) {
      do {
        BVar1 = ProcessIdToSessionId(local_2210[uVar4],&local_2220);
        uVar3 = extraout_EDX_00;
        if ((BVar1 != 0) &&
           (((local_2220 == local_2218 && (dwProcessId != local_2210[uVar4])) &&
            (hObject = OpenProcess(0x410,0,local_2210[uVar4]), uVar3 = extraout_EDX_01,
            dwProcessId = local_221c, hObject != (HANDLE)0x0)))) {
          iVar2 = K32EnumProcessModules(hObject,&local_2224,4,local_2230);
          if (((iVar2 != 0) &&
              (iVar2 = K32GetModuleBaseNameW(hObject,local_2224,local_210,0x104), iVar2 != 0)) &&
             (iVar2 = _wcsicmp(local_210,local_2228), iVar2 == 0)) {
            *local_222c = hObject;
            uVar3 = extraout_EDX_02;
            break;
          }
          CloseHandle(hObject);
          uVar3 = extraout_EDX_03;
          dwProcessId = local_221c;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_2214);
    }
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004113de */

int * __fastcall FUN_004113de(int *param_1)

{
  int iVar1;
  wchar_t *_Str;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  _Str = (wchar_t *)FUN_0040b75e(param_1,iVar1);
  _wcslwr_s(_Str,iVar1 + 1);
  FUN_0040ba7b(param_1,iVar1);
  return param_1;
}



/* Function: FUN_0041140f */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_0041140f(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  HKEY local_28;
  undefined4 local_24;
  undefined4 local_20;
  HKEY local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x41141b;
  iVar1 = FUN_0040a129();
  if (iVar1 == 0) {
    return param_1;
  }
  local_28 = (HKEY)0x0;
  local_24 = 0;
  local_20 = 0;
  local_8 = 0;
  uVar2 = FUN_0041167e(&local_28,0x20019);
  if ((int)uVar2 < 0) {
    uVar3 = 0x80004005;
    goto LAB_004114a1;
  }
  local_1c = (HKEY)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = FUN_00411575(&local_1c,0x2001f);
  if (iVar1 < 0) {
LAB_0041148a:
    uVar3 = 0x80004005;
  }
  else {
    iVar1 = FUN_004116ce(param_1,&local_28,&local_1c);
    uVar3 = 0;
    if (iVar1 < 0) goto LAB_0041148a;
  }
  local_8 = local_8 & 0xffffff00;
  if (local_1c != (HKEY)0x0) {
    RegCloseKey(local_1c);
  }
LAB_004114a1:
  local_8 = 0xffffffff;
  if (local_28 != (HKEY)0x0) {
    RegCloseKey(local_28);
  }
  return uVar3;
}



/* Function: FUN_004114c2 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_004114c2(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  HKEY local_28;
  undefined4 local_24;
  undefined4 local_20;
  HKEY local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4114ce;
  iVar1 = FUN_0040a129();
  if (iVar1 != 0) {
    return param_1;
  }
  local_28 = (HKEY)0x0;
  local_24 = 0;
  local_20 = 0;
  local_8 = 0;
  iVar1 = FUN_00411575(&local_28,0x20019);
  if (iVar1 < 0) {
    uVar3 = 0x80004005;
    goto LAB_00411554;
  }
  local_1c = (HKEY)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar2 = FUN_0041167e(&local_1c,0x2001f);
  if ((int)uVar2 < 0) {
LAB_0041153d:
    uVar3 = 0x80004005;
  }
  else {
    iVar1 = FUN_004116ce(param_1,&local_28,&local_1c);
    uVar3 = 0;
    if (iVar1 < 0) goto LAB_0041153d;
  }
  local_8 = local_8 & 0xffffff00;
  if (local_1c != (HKEY)0x0) {
    RegCloseKey(local_1c);
  }
LAB_00411554:
  local_8 = 0xffffffff;
  if (local_28 != (HKEY)0x0) {
    RegCloseKey(local_28);
  }
  return uVar3;
}



/* Function: FUN_00411575 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00411575(void *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  LSTATUS LVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  uint local_1c;
  void *local_18;
  wchar_t *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x411581;
  FUN_00414070(&local_18);
  local_8 = 0;
  local_1c = 0;
  local_14[0] = (wchar_t *)0x0;
  iVar2 = FUN_00410c05(u__s_ATConfig_00417608,0x7fffffff,(int *)&local_1c);
  if (-1 < iVar2) {
    iVar2 = FUN_00410c4a(local_18,(int *)local_14);
    if ((-1 < iVar2) && (uVar4 = (int)local_14[0] + local_1c, local_1c <= uVar4)) {
      local_14[0] = (wchar_t *)0x0;
      local_8 = CONCAT31(local_8._1_3_,1);
      bVar1 = FUN_0040ac79(local_14,uVar4);
      if (bVar1) {
        iVar2 = FUN_004058b4(local_14[0],uVar4,u__s_ATConfig_00417608);
        if (-1 < iVar2) {
          LVar3 = FUN_004054e1(param_1,(HKEY)0x80000002,local_14[0],param_2);
          if (LVar3 == 0) {
LAB_0041164d:
            uVar5 = 0;
            goto LAB_0041164f;
          }
          if ((param_2 & 0x20006) == 0x20006) {
            LVar3 = FUN_0040cd3f(param_1,(HKEY)0x80000002,local_14[0],0x20006,1,param_2,0x20006,
                                 &local_20);
            if (LVar3 == 0) goto LAB_0041164d;
          }
        }
        uVar5 = 0x80004005;
      }
      else {
        uVar5 = 0x8007000e;
      }
LAB_0041164f:
      local_8 = local_8 & 0xffffff00;
      free(local_14[0]);
      goto LAB_00411663;
    }
  }
  uVar5 = 0x80004005;
LAB_00411663:
  FUN_004055df((undefined4 *)((int)local_18 + -0x10));
  return uVar5;
}



/* Function: FUN_0041167e */

uint __fastcall FUN_0041167e(void *param_1,REGSAM param_2)

{
  LSTATUS LVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  void *local_8;
  
  local_8 = param_1;
  LVar1 = FUN_004054e1(param_1,(HKEY)0x80000001,u_SOFTWARE_Microsoft_Windows_NT_Cu_00417620,param_2)
  ;
  if (LVar1 == 0) {
    uVar2 = 0;
  }
  else {
    LVar1 = FUN_0040cd3f(param_1,(HKEY)0x80000001,u_SOFTWARE_Microsoft_Windows_NT_Cu_00417620,
                         extraout_ECX,1,param_2,extraout_ECX,&local_8);
    uVar2 = -(uint)(LVar1 != 0) & 0x80004005;
  }
  return uVar2;
}



/* Function: FUN_004116ce */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_004116ce(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  HKEY hKey;
  LSTATUS LVar2;
  int *piVar3;
  int iVar4;
  LPBYTE extraout_ECX;
  LPBYTE extraout_ECX_00;
  LPBYTE extraout_ECX_01;
  LPBYTE extraout_ECX_02;
  LPBYTE extraout_ECX_03;
  LPBYTE extraout_ECX_04;
  LPBYTE extraout_ECX_05;
  LPBYTE extraout_ECX_06;
  LPBYTE extraout_ECX_07;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 uVar5;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  LPBYTE lpData;
  HKEY hKey_00;
  undefined8 uVar6;
  HKEY local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 *local_244;
  HKEY local_240;
  undefined4 local_23c;
  undefined4 local_238;
  int local_234;
  undefined4 *local_230;
  DWORD local_22c [2];
  DWORD local_224;
  DWORD local_220;
  WCHAR local_21c [266];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24c;
  local_8 = 0x4116dd;
  local_230 = param_1;
  local_244 = param_2;
  LVar2 = RegDeleteTreeW((HKEY)*param_2,(LPCWSTR)0x0);
  lpData = extraout_ECX;
  uVar5 = extraout_EDX;
  if (LVar2 == 0) {
                    /* WARNING: Load size is inaccurate */
    uVar6 = FUN_0040cb05(*this);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_234 = *(int *)uVar6;
    lpData = extraout_ECX_00;
    if (local_234 != 0) {
LAB_00411720:
      piVar3 = (int *)FUN_0040d5c7(&local_234);
      puVar1 = (undefined4 *)*piVar3;
      lpData = extraout_ECX_01;
      uVar5 = extraout_EDX_00;
      if (puVar1[9] != 0) {
        local_250 = (HKEY)0x0;
        local_24c = 0;
        local_248 = 0;
        local_8 = 0;
        hKey_00 = (HKEY)0x0;
        local_240 = (HKEY)0x0;
        local_23c = 0;
        local_238 = 0;
        LVar2 = FUN_004054e1(&local_250,(HKEY)*param_1,(LPCWSTR)*puVar1,0x20019);
        hKey = local_250;
        lpData = extraout_ECX_02;
        uVar5 = extraout_EDX_01;
        if ((LVar2 == 0) &&
           (LVar2 = FUN_0040cd3f(&local_240,(HKEY)*local_244,(LPCWSTR)*puVar1,extraout_ECX_02,1,
                                 0x2001f,extraout_ECX_02,&local_220), hKey_00 = local_240,
           lpData = extraout_ECX_03, uVar5 = extraout_EDX_02, LVar2 == 0)) {
          local_220 = 0;
          do {
            local_224 = 0;
            lpData = (BYTE *)0x0;
            local_22c[1] = 0x104;
            local_8._0_1_ = 2;
            iVar4 = RegEnumValueW(hKey,local_220,local_21c,local_22c + 1,(LPDWORD)0x0,local_22c,
                                  (LPBYTE)0x0,&local_224);
            if ((iVar4 == 0) || (iVar4 == 0xea)) {
              lpData = (LPBYTE)malloc(local_224);
              if (lpData == (LPBYTE)0x0) {
                local_8._0_1_ = 1;
                free((void *)0x0);
                local_8 = (uint)local_8._1_3_ << 8;
                uVar5 = extraout_EDX_06;
                if (hKey_00 != (HKEY)0x0) {
                  RegCloseKey(hKey_00);
                  lpData = extraout_ECX_06;
                  uVar5 = extraout_EDX_07;
                }
                local_8 = 0xffffffff;
                if (hKey != (HKEY)0x0) {
                  RegCloseKey(hKey);
                  lpData = extraout_ECX_07;
                  uVar5 = extraout_EDX_08;
                }
                goto LAB_00411904;
              }
              local_22c[1] = 0x104;
              iVar4 = RegEnumValueW(hKey,local_220,local_21c,local_22c + 1,(LPDWORD)0x0,local_22c,
                                    lpData,&local_224);
            }
            if (iVar4 == 0) {
              RegSetValueExW(hKey_00,local_21c,0,local_22c[0],lpData,local_224);
            }
            else if ((iVar4 == 0x103) || (100 < local_220)) goto LAB_004118b7;
            local_220 = local_220 + 1;
            local_8 = CONCAT31(local_8._1_3_,1);
            free(lpData);
          } while( true );
        }
        goto LAB_004118c3;
      }
      goto LAB_004118f5;
    }
  }
LAB_00411904:
  FUN_00414bee(lpData,uVar5);
  return;
LAB_004118b7:
  local_8 = CONCAT31(local_8._1_3_,1);
  free(lpData);
  uVar5 = extraout_EDX_03;
LAB_004118c3:
  local_8 = local_8 & 0xffffff00;
  if (hKey_00 != (HKEY)0x0) {
    RegCloseKey(hKey_00);
    local_240 = (HKEY)0x0;
    lpData = extraout_ECX_04;
    uVar5 = extraout_EDX_04;
  }
  local_8 = 0xffffffff;
  param_1 = local_230;
  if (hKey != (HKEY)0x0) {
    RegCloseKey(hKey);
    local_250 = (HKEY)0x0;
    lpData = extraout_ECX_05;
    uVar5 = extraout_EDX_05;
    param_1 = local_230;
  }
LAB_004118f5:
  if (local_234 == 0) goto LAB_00411904;
  goto LAB_00411720;
}



/* Function: FUN_00411943 */

void __fastcall FUN_00411943(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414ee3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  free((void *)*param_1);
  *param_1 = 0;
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0041198f */

void __fastcall FUN_0041198f(uint param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (100 < param_1) {
    return;
  }
  return;
}



/* Function: FUN_004119cc */

uint __fastcall
FUN_004119cc(uint param_1,uint param_2,uint param_3,float *param_4,float *param_5,float *param_6)

{
  uint in_EAX;
  uint uVar1;
  float fVar2;
  
  if ((param_1 < param_2) || (in_EAX = param_3, param_3 < param_1)) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    fVar2 = (float)((double)(int)(param_1 - param_2) +
                   *(double *)(&DAT_00403a00 + ((int)(param_1 - param_2) >> 0x1f) * -8)) /
            (float)((double)(int)(param_3 - param_2) +
                   *(double *)(&DAT_00403a00 + ((int)(param_3 - param_2) >> 0x1f) * -8));
    *param_6 = (*param_5 - *param_4) * fVar2 + *param_4;
    param_6[1] = (param_5[1] - param_4[1]) * fVar2 + param_4[1];
    param_6[2] = (param_5[2] - param_4[2]) * fVar2 + param_4[2];
    param_6[5] = (param_5[5] - param_4[5]) * fVar2 + param_4[5];
    param_6[6] = (param_5[6] - param_4[6]) * fVar2 + param_4[6];
    param_6[7] = (param_5[7] - param_4[7]) * fVar2 + param_4[7];
    param_6[10] = (param_5[10] - param_4[10]) * fVar2 + param_4[10];
    param_6[0xb] = (param_5[0xb] - param_4[0xb]) * fVar2 + param_4[0xb];
    param_6[0xc] = (param_5[0xc] - param_4[0xc]) * fVar2 + param_4[0xc];
    uVar1 = CONCAT31((int3)((uint)param_6 >> 8),1);
  }
  return uVar1;
}



/* Function: FUN_00411b07 */

void __fastcall
FUN_00411b07(uint param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6
            ,float *param_7,float *param_8,float *param_9,float *param_10,float *param_11,
            float *param_12)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float local_6c [25];
  float *local_8;
  
  local_8 = param_2;
  pfVar3 = (float *)&DAT_00403560;
  pfVar4 = local_6c;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  if (param_1 < 100) {
    uVar1 = FUN_004119cc(param_1,0,10,(float *)&DAT_00403560,param_2,local_6c);
    if (((((((char)uVar1 == '\0') &&
           (uVar1 = FUN_004119cc(param_1,10,0x14,local_8,param_4,local_6c), (char)uVar1 == '\0')) &&
          (uVar1 = FUN_004119cc(param_1,0x14,0x1e,param_4,param_5,local_6c), (char)uVar1 == '\0'))
         && ((uVar1 = FUN_004119cc(param_1,0x1e,0x28,param_5,param_6,local_6c), (char)uVar1 == '\0'
             && (uVar1 = FUN_004119cc(param_1,0x28,0x32,param_6,param_7,local_6c),
                (char)uVar1 == '\0')))) &&
        ((uVar1 = FUN_004119cc(param_1,0x32,0x3c,param_7,param_8,local_6c), (char)uVar1 == '\0' &&
         ((uVar1 = FUN_004119cc(param_1,0x3c,0x46,param_8,param_9,local_6c), (char)uVar1 == '\0' &&
          (uVar1 = FUN_004119cc(param_1,0x46,0x50,param_9,param_10,local_6c), (char)uVar1 == '\0')))
         ))) && (uVar1 = FUN_004119cc(param_1,0x50,0x5a,param_10,param_11,local_6c),
                (char)uVar1 == '\0')) {
      uVar1 = FUN_004119cc(param_1,0x5a,100,param_11,param_12,local_6c);
      pfVar3 = (float *)&DAT_00403560;
      if ((char)uVar1 == '\0') goto LAB_00411c58;
    }
  }
  else {
    pfVar3 = local_6c;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = *param_12;
      param_12 = param_12 + 1;
      pfVar3 = pfVar3 + 1;
    }
  }
  pfVar3 = local_6c;
LAB_00411c58:
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    param_3 = param_3 + 1;
  }
  return;
}



/* Function: FUN_00411c6f */

void FUN_00411c6f(undefined4 *param_1)

{
  undefined4 in_XMM1_Da;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
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
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = 0x3f800000;
  param_1[1] = in_XMM1_Da;
  param_1[0xb] = in_XMM1_Da;
  param_1[0xc] = 0x3f800000;
  return;
}



/* Function: FUN_00411cec */

void FUN_00411cec(undefined4 *param_1)

{
  undefined4 in_XMM1_Da;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
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
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[5] = in_XMM1_Da;
  param_1[6] = 0x3f800000;
  param_1[10] = in_XMM1_Da;
  param_1[0xc] = 0x3f800000;
  return;
}



/* Function: FUN_00411d69 */

void FUN_00411d69(undefined4 *param_1)

{
  undefined4 in_XMM1_Da;
  
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
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
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = 0x3f800000;
  param_1[2] = in_XMM1_Da;
  param_1[6] = 0x3f800000;
  param_1[7] = in_XMM1_Da;
  return;
}



/* Function: FUN_00411de6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00411de6(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00417d60,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_00417d60;
    local_8 = &DAT_00417d64;
    _DAT_00417d68 = 0;
    DAT_00417d6c = 0;
    _DAT_00417d70 = 0;
    _DAT_00417d64 = &PTR_FUN_00401020;
    _DAT_00417d74 = &DAT_00417080;
    FUN_00414653(FUN_00411e70);
    local_10 = 0;
    FUN_0040b263((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00411e70 */

void FUN_00411e70(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00417d60,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_004182ac)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00411eb8 */

bool FUN_00411eb8(void)

{
  LSTATUS LVar1;
  bool bVar2;
  HKEY local_20;
  undefined4 local_1c;
  undefined4 local_18;
  HKEY local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  bVar2 = true;
  local_8 = 0;
  local_20 = (HKEY)0x0;
  local_1c = 0;
  local_18 = 0;
  LVar1 = FUN_004054e1(&local_20,(HKEY)0x80000001,
                       L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\colorfiltering"
                       ,1);
  if (LVar1 == 0) {
    LVar1 = FUN_00405529(&local_20,L"Active",(LPBYTE)&local_8);
    if ((LVar1 == 0) && (local_8 != 0)) goto LAB_00411f5b;
  }
  local_14 = (HKEY)0x0;
  local_10 = 0;
  local_c = 0;
  LVar1 = FUN_004054e1(&local_14,(HKEY)0x80000001,L"Software\\Microsoft\\ColorFiltering",1);
  if (LVar1 == 0) {
    LVar1 = FUN_00405529(&local_14,L"Active",(LPBYTE)&local_8);
    if (LVar1 != 0) goto LAB_00411f4a;
    FUN_0041269c(local_8 != 0);
    bVar2 = local_8 != 0;
  }
  else {
LAB_00411f4a:
    bVar2 = false;
  }
  if (local_14 != (HKEY)0x0) {
    RegCloseKey(local_14);
  }
LAB_00411f5b:
  if (local_20 != (HKEY)0x0) {
    RegCloseKey(local_20);
  }
  return bVar2;
}



/* Function: FUN_00411f7a */

void FUN_00411f7a(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  LSTATUS LVar5;
  int iVar6;
  float *pfVar7;
  undefined4 extraout_EDX;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float local_23c [26];
  float local_1d4 [26];
  HKEY local_16c;
  undefined4 local_168;
  undefined4 local_164;
  HKEY local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  uint local_150;
  uint local_14c;
  char local_145;
  float local_144 [26];
  float local_dc [26];
  float local_74 [27];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  local_154 = -1;
  local_150 = 100;
  local_14c = 0x46;
  bVar4 = FUN_00411eb8();
  if (bVar4) {
    local_16c = (HKEY)0x0;
    local_168 = 0;
    local_164 = 0;
    bVar1 = true;
    bVar4 = true;
    local_145 = '\x01';
    LVar5 = FUN_004054e1(&local_16c,(HKEY)0x80000001,
                         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\colorfiltering"
                         ,1);
    if (LVar5 == 0) {
      LVar5 = FUN_00405529(&local_16c,L"FilterType",(LPBYTE)&local_154);
      if (LVar5 == 0) {
        bVar4 = false;
      }
      else {
        local_160 = (HKEY)0x0;
        local_15c = 0;
        local_158 = 0;
        LVar5 = FUN_004054e1(&local_160,(HKEY)0x80000001,L"Software\\Microsoft\\ColorFiltering",1);
        if ((LVar5 == 0) &&
           (LVar5 = FUN_00405529(&local_160,L"FilterType",(LPBYTE)&local_154), LVar5 == 0)) {
          bVar4 = false;
          FUN_0041276c();
        }
        if (local_160 != (HKEY)0x0) {
          RegCloseKey(local_160);
        }
      }
      bVar1 = true;
      LVar5 = FUN_00405529(&local_16c,L"Intensity",(LPBYTE)&local_150);
      if (LVar5 == 0) {
        bVar1 = false;
      }
      else {
        local_160 = (HKEY)0x0;
        local_15c = 0;
        local_158 = 0;
        LVar5 = FUN_004054e1(&local_160,(HKEY)0x80000001,L"Software\\Microsoft\\ColorFiltering",1);
        if ((LVar5 == 0) &&
           (LVar5 = FUN_00405529(&local_160,L"Intensity",(LPBYTE)&local_150), LVar5 == 0)) {
          bVar1 = false;
          FUN_0041283e();
        }
        if (local_160 != (HKEY)0x0) {
          RegCloseKey(local_160);
        }
      }
      LVar5 = FUN_00405529(&local_16c,L"Gain",(LPBYTE)&local_14c);
      if (LVar5 == 0) {
        local_145 = '\0';
      }
      else {
        local_160 = (HKEY)0x0;
        local_15c = 0;
        local_158 = 0;
        LVar5 = FUN_004054e1(&local_160,(HKEY)0x80000001,L"Software\\Microsoft\\ColorFiltering",1);
        if ((LVar5 == 0) &&
           (LVar5 = FUN_00405529(&local_160,L"Gain",(LPBYTE)&local_14c), LVar5 == 0)) {
          local_145 = '\0';
          FUN_00412910();
        }
        if (local_160 != (HKEY)0x0) {
          RegCloseKey(local_160);
        }
      }
      if (bVar4) goto LAB_004121a1;
    }
    else {
LAB_004121a1:
      local_154 = 0;
    }
    if (bVar1) {
      local_150 = 100;
    }
    if (local_145 != '\0') {
      local_14c = 0x46;
    }
    if (local_16c != (HKEY)0x0) {
      RegCloseKey(local_16c);
    }
  }
  uVar3 = local_14c;
  uVar2 = local_150;
  iVar6 = local_154;
  memset(local_74,0,100);
  if (iVar6 == 0) {
    pfVar8 = (float *)&DAT_004035c8;
  }
  else if (iVar6 == 1) {
    pfVar8 = (float *)&DAT_00402b38;
  }
  else {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        FUN_0041198f(uVar3);
        pfVar8 = (float *)FUN_00411c6f(local_23c);
        pfVar18 = (float *)&DAT_00402930;
        pfVar17 = (float *)&LAB_004034f8;
        pfVar16 = (float *)&DAT_00403490;
        pfVar15 = (float *)&LAB_00403358;
        pfVar14 = (float *)&LAB_00403080;
        pfVar13 = (float *)&DAT_00402d40;
        pfVar12 = (float *)&DAT_00403018;
        pfVar11 = (float *)&LAB_004032f0;
        pfVar10 = (float *)&DAT_00402e10;
        pfVar7 = (float *)&DAT_00402ba0;
LAB_00412360:
        pfVar9 = local_144;
        for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar9 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar9 = pfVar9 + 1;
        }
        pfVar8 = (float *)FUN_00411b07(uVar2,pfVar7,local_1d4,pfVar10,pfVar11,pfVar12,pfVar13,
                                       pfVar14,pfVar15,pfVar16,pfVar17,pfVar18);
        pfVar7 = local_dc;
        for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar7 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar7 = pfVar7 + 1;
        }
        pfVar8 = local_144;
        pfVar7 = local_dc;
      }
      else {
        if (iVar6 == 4) {
          FUN_0041198f(uVar3);
          pfVar8 = (float *)FUN_00411cec(local_23c);
          pfVar18 = (float *)&LAB_00402e78;
          pfVar17 = (float *)&LAB_00403288;
          pfVar16 = (float *)&LAB_004031b8;
          pfVar15 = (float *)&DAT_004030e8;
          pfVar14 = (float *)&DAT_00402860;
          pfVar13 = (float *)&DAT_00402f48;
          pfVar12 = (float *)&DAT_00402a00;
          pfVar11 = (float *)&DAT_00402ee0;
          pfVar10 = (float *)&DAT_00402c08;
          pfVar7 = (float *)&DAT_00402da8;
          goto LAB_00412360;
        }
        if (iVar6 != 5) {
          pfVar8 = (float *)&DAT_004176a8;
          goto LAB_004123af;
        }
        FUN_0041198f(uVar3);
        pfVar8 = (float *)FUN_00411d69(local_1d4);
        pfVar7 = local_dc;
        for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar7 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar7 = pfVar7 + 1;
        }
        pfVar8 = (float *)FUN_00411b07(uVar2,(float *)&DAT_00402ad0,local_23c,(float *)&DAT_004028c8
                                       ,(float *)&DAT_00403428,(float *)&DAT_00402c70,
                                       (float *)&DAT_004033c0,(float *)&DAT_00402fb0,
                                       (float *)&DAT_00402a68,(float *)&LAB_00403220,
                                       (float *)&DAT_00402cd8,(float *)&DAT_00403150);
        pfVar7 = local_144;
        for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar7 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar7 = pfVar7 + 1;
        }
        pfVar8 = local_dc;
        pfVar7 = local_144;
      }
      FUN_0041240a(pfVar7,pfVar8,local_74);
      goto LAB_004123b7;
    }
    pfVar8 = (float *)&DAT_00402998;
  }
LAB_004123af:
  pfVar7 = local_74;
  for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar7 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar7 = pfVar7 + 1;
  }
LAB_004123b7:
  FUN_00413ae7(&DAT_00417d78,1);
  iVar6 = Ordinal_260(local_74);
  if (iVar6 < 0) {
    SetDesktopColorTransform(local_74);
  }
  FUN_00413bae(&local_154,&local_150,&local_14c);
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0041240a */

void __fastcall FUN_0041240a(float *param_1,float *param_2,float *param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float local_178 [25];
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c [25];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  FUN_004129e2(param_2,param_1,local_6c);
  FUN_004132b1(extraout_ECX,param_2,local_178);
  FUN_00413669(local_178,local_6c,&local_114);
  local_70 = local_d4;
  local_74 = local_c0;
  local_78 = local_10c;
  local_7c = local_f8;
  local_80 = local_e4;
  local_84 = local_d0;
  local_88 = local_bc;
  local_8c = local_108;
  local_90 = local_f4;
  local_94 = local_e0;
  local_98 = local_cc;
  local_9c = local_b8;
  local_a0 = local_104;
  local_a4 = local_f0;
  local_a8 = local_dc;
  local_ac = local_c8;
  local_b0 = local_b4;
  *param_3 = local_114;
  param_3[1] = local_100;
  param_3[2] = local_ec;
  param_3[3] = local_d8;
  param_3[4] = local_c4;
  param_3[5] = local_110;
  param_3[6] = local_fc;
  param_3[7] = local_e8;
  param_3[8] = local_d4;
  param_3[9] = local_c0;
  param_3[10] = local_10c;
  param_3[0xb] = local_f8;
  param_3[0xc] = local_e4;
  param_3[0xd] = local_d0;
  param_3[0xe] = local_bc;
  param_3[0xf] = local_108;
  param_3[0x10] = local_f4;
  param_3[0x11] = local_e0;
  param_3[0x12] = local_cc;
  param_3[0x13] = local_b8;
  param_3[0x14] = local_104;
  param_3[0x15] = local_f0;
  param_3[0x16] = local_dc;
  param_3[0x17] = local_c8;
  param_3[0x18] = local_b4;
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0041269c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0041269c(byte param_1)

{
  PHKEY ppHVar1;
  LSTATUS LVar2;
  LPDWORD lpdwDisposition;
  uint local_18;
  CSemExclusiveLocal *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_18 = (uint)param_1;
  if (param_1 == 0) {
    local_14[0] = (CSemExclusiveLocal *)0x0;
    local_8 = 0xffffffff;
    ppHVar1 = (PHKEY)FUN_004104b6(local_14);
    LVar2 = RegOpenKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\"
                          ,0,0xf003f,ppHVar1);
    if (LVar2 == 0) {
      RegDeleteTreeW((HKEY)local_14[0],L"colorfiltering");
    }
    local_8 = 3;
  }
  else {
    local_14[0] = (CSemExclusiveLocal *)0x0;
    local_8 = 0xffffffff;
    lpdwDisposition = (LPDWORD)0x0;
    ppHVar1 = (PHKEY)FUN_004104b6(local_14);
    LVar2 = RegCreateKeyExW((HKEY)0x80000001,
                            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\colorfiltering"
                            ,0,(LPWSTR)0x0,1,3,(LPSECURITY_ATTRIBUTES)0x0,ppHVar1,lpdwDisposition);
    if (LVar2 == 0) {
      RegSetValueExW((HKEY)local_14[0],L"Active",0,4,(BYTE *)&local_18,4);
    }
    local_8 = 1;
  }
  if (local_14[0] != (CSemExclusiveLocal *)0x0) {
    CSemExclusiveLocal::~CSemExclusiveLocal(local_14[0]);
  }
  return;
}



/* Function: FUN_0041276c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0041276c(void)

{
  bool bVar1;
  PHKEY ppHVar2;
  LSTATUS LVar3;
  LPDWORD lpdwDisposition;
  BYTE local_18 [4];
  CSemExclusiveLocal *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x412778;
  bVar1 = FUN_00411eb8();
  if (bVar1) {
    local_14[0] = (CSemExclusiveLocal *)0x0;
    local_8 = 0xffffffff;
    lpdwDisposition = (LPDWORD)0x0;
    ppHVar2 = (PHKEY)FUN_004104b6(local_14);
    LVar3 = RegCreateKeyExW((HKEY)0x80000001,
                            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\colorfiltering"
                            ,0,(LPWSTR)0x0,1,3,(LPSECURITY_ATTRIBUTES)0x0,ppHVar2,lpdwDisposition);
    if (LVar3 == 0) {
      RegSetValueExW((HKEY)local_14[0],L"FilterType",0,4,local_18,4);
    }
    local_8 = 1;
  }
  else {
    local_14[0] = (CSemExclusiveLocal *)0x0;
    local_8 = 0xffffffff;
    ppHVar2 = (PHKEY)FUN_004104b6(local_14);
    LVar3 = RegOpenKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\"
                          ,0,0xf003f,ppHVar2);
    if (LVar3 == 0) {
      RegDeleteTreeW((HKEY)local_14[0],L"colorfiltering");
    }
    local_8 = 3;
  }
  if (local_14[0] != (CSemExclusiveLocal *)0x0) {
    CSemExclusiveLocal::~CSemExclusiveLocal(local_14[0]);
  }
  return;
}



/* Function: FUN_0041283e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0041283e(void)

{
  bool bVar1;
  PHKEY ppHVar2;
  LSTATUS LVar3;
  LPDWORD lpdwDisposition;
  BYTE local_18 [4];
  CSemExclusiveLocal *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x41284a;
  bVar1 = FUN_00411eb8();
  if (bVar1) {
    local_14[0] = (CSemExclusiveLocal *)0x0;
    local_8 = 0xffffffff;
    lpdwDisposition = (LPDWORD)0x0;
    ppHVar2 = (PHKEY)FUN_004104b6(local_14);
    LVar3 = RegCreateKeyExW((HKEY)0x80000001,
                            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\colorfiltering"
                            ,0,(LPWSTR)0x0,1,3,(LPSECURITY_ATTRIBUTES)0x0,ppHVar2,lpdwDisposition);
    if (LVar3 == 0) {
      RegSetValueExW((HKEY)local_14[0],L"Intensity",0,4,local_18,4);
    }
    local_8 = 1;
  }
  else {
    local_14[0] = (CSemExclusiveLocal *)0x0;
    local_8 = 0xffffffff;
    ppHVar2 = (PHKEY)FUN_004104b6(local_14);
    LVar3 = RegOpenKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\"
                          ,0,0xf003f,ppHVar2);
    if (LVar3 == 0) {
      RegDeleteTreeW((HKEY)local_14[0],L"colorfiltering");
    }
    local_8 = 3;
  }
  if (local_14[0] != (CSemExclusiveLocal *)0x0) {
    CSemExclusiveLocal::~CSemExclusiveLocal(local_14[0]);
  }
  return;
}



/* Function: FUN_00412910 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00412910(void)

{
  bool bVar1;
  PHKEY ppHVar2;
  LSTATUS LVar3;
  LPDWORD lpdwDisposition;
  BYTE local_18 [4];
  CSemExclusiveLocal *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x41291c;
  bVar1 = FUN_00411eb8();
  if (bVar1) {
    local_14[0] = (CSemExclusiveLocal *)0x0;
    local_8 = 0xffffffff;
    lpdwDisposition = (LPDWORD)0x0;
    ppHVar2 = (PHKEY)FUN_004104b6(local_14);
    LVar3 = RegCreateKeyExW((HKEY)0x80000001,
                            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\colorfiltering"
                            ,0,(LPWSTR)0x0,1,3,(LPSECURITY_ATTRIBUTES)0x0,ppHVar2,lpdwDisposition);
    if (LVar3 == 0) {
      RegSetValueExW((HKEY)local_14[0],L"Gain",0,4,local_18,4);
    }
    local_8 = 1;
  }
  else {
    local_14[0] = (CSemExclusiveLocal *)0x0;
    local_8 = 0xffffffff;
    ppHVar2 = (PHKEY)FUN_004104b6(local_14);
    LVar3 = RegOpenKeyExW((HKEY)0x80000001,
                          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\ATConfig\\"
                          ,0,0xf003f,ppHVar2);
    if (LVar3 == 0) {
      RegDeleteTreeW((HKEY)local_14[0],L"colorfiltering");
    }
    local_8 = 3;
  }
  if (local_14[0] != (CSemExclusiveLocal *)0x0) {
    CSemExclusiveLocal::~CSemExclusiveLocal(local_14[0]);
  }
  return;
}



/* Function: FUN_004129e2 */

void __fastcall FUN_004129e2(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  
  fVar1 = param_2[5];
  fVar2 = param_2[10];
  fVar3 = param_2[0xf];
  fVar4 = param_2[0x14];
  fVar5 = param_2[6];
  fVar6 = param_2[1];
  fVar7 = param_2[0xb];
  fVar8 = param_2[0x10];
  fVar9 = param_2[0x15];
  fVar10 = param_2[7];
  fVar11 = param_2[2];
  fVar12 = param_2[0xc];
  fVar13 = param_2[0x11];
  fVar14 = param_2[0x16];
  fVar15 = param_2[8];
  fVar16 = param_2[3];
  fVar17 = param_2[0xd];
  fVar18 = param_2[0x12];
  fVar19 = param_2[0x17];
  fVar20 = param_2[9];
  fVar21 = param_2[4];
  fVar22 = param_2[0xe];
  fVar23 = param_2[0x13];
  fVar24 = param_2[0x18];
  fVar25 = param_1[6];
  fVar26 = param_1[5];
  fVar27 = param_1[8];
  fVar28 = param_1[9];
  fVar29 = *param_2;
  fVar30 = param_1[0xb];
  fVar31 = param_1[1];
  fVar32 = *param_1;
  fVar33 = param_1[2];
  fVar34 = param_1[3];
  fVar35 = param_1[4];
  fVar36 = param_1[7];
  fVar37 = param_1[10];
  fVar38 = param_1[0xc];
  fVar39 = param_1[0xd];
  fVar40 = param_1[0xe];
  fVar41 = param_1[0x10];
  fVar42 = param_1[0xf];
  fVar43 = param_1[0x11];
  fVar44 = param_1[0x12];
  fVar45 = param_1[0x13];
  fVar46 = param_1[0x15];
  fVar47 = param_1[0x14];
  fVar48 = param_1[0x16];
  fVar49 = param_1[0x17];
  fVar50 = param_1[0x18];
  *param_3 = fVar29 * fVar32 + fVar31 * fVar1 + fVar33 * fVar2 + fVar34 * fVar3 + fVar35 * fVar4;
  param_3[1] = fVar6 * fVar32 + fVar5 * fVar31 + fVar7 * fVar33 + fVar8 * fVar34 + fVar9 * fVar35;
  param_3[2] = fVar11 * fVar32 + fVar10 * fVar31 + fVar12 * fVar33 + fVar13 * fVar34 +
               fVar14 * fVar35;
  param_3[3] = fVar16 * fVar32 + fVar15 * fVar31 + fVar17 * fVar33 + fVar18 * fVar34 +
               fVar19 * fVar35;
  param_3[4] = fVar21 * fVar32 + fVar20 * fVar31 + fVar22 * fVar33 + fVar23 * fVar34 +
               fVar24 * fVar35;
  param_3[5] = fVar26 * fVar29 + fVar25 * fVar1 + fVar36 * fVar2 + fVar27 * fVar3 + fVar28 * fVar4;
  param_3[6] = fVar26 * fVar6 + fVar25 * fVar5 + fVar36 * fVar7 + fVar27 * fVar8 + fVar28 * fVar9;
  param_3[7] = fVar26 * fVar11 + fVar25 * fVar10 + fVar36 * fVar12 + fVar27 * fVar13 +
               fVar28 * fVar14;
  param_3[8] = fVar26 * fVar16 + fVar25 * fVar15 + fVar36 * fVar17 + fVar27 * fVar18 +
               fVar28 * fVar19;
  param_3[9] = fVar26 * fVar21 + fVar25 * fVar20 + fVar36 * fVar22 + fVar27 * fVar23 +
               fVar28 * fVar24;
  param_3[10] = fVar29 * fVar37 + fVar1 * fVar30 + fVar2 * fVar38 + fVar3 * fVar39 + fVar4 * fVar40;
  param_3[0xb] = fVar6 * fVar37 + fVar5 * fVar30 + fVar7 * fVar38 + fVar8 * fVar39 + fVar9 * fVar40;
  param_3[0xc] = fVar11 * fVar37 + fVar10 * fVar30 + fVar12 * fVar38 + fVar13 * fVar39 +
                 fVar14 * fVar40;
  param_3[0xd] = fVar16 * fVar37 + fVar15 * fVar30 + fVar17 * fVar38 + fVar18 * fVar39 +
                 fVar19 * fVar40;
  param_3[0xe] = fVar21 * fVar37 + fVar20 * fVar30 + fVar22 * fVar38 + fVar23 * fVar39 +
                 fVar24 * fVar40;
  param_3[0xf] = fVar29 * fVar42 + fVar1 * fVar41 + fVar2 * fVar43 + fVar3 * fVar44 + fVar4 * fVar45
  ;
  param_3[0x10] = fVar6 * fVar42 + fVar5 * fVar41 + fVar7 * fVar43 + fVar8 * fVar44 + fVar9 * fVar45
  ;
  param_3[0x11] =
       fVar10 * fVar41 + fVar11 * fVar42 + fVar12 * fVar43 + fVar13 * fVar44 + fVar14 * fVar45;
  param_3[0x12] =
       fVar16 * fVar42 + fVar15 * fVar41 + fVar17 * fVar43 + fVar18 * fVar44 + fVar19 * fVar45;
  param_3[0x13] =
       fVar21 * fVar42 + fVar20 * fVar41 + fVar22 * fVar43 + fVar23 * fVar44 + fVar24 * fVar45;
  param_3[0x14] =
       fVar29 * fVar47 + fVar1 * fVar46 + fVar2 * fVar48 + fVar3 * fVar49 + fVar4 * fVar50;
  param_3[0x15] = fVar6 * fVar47 + fVar5 * fVar46 + fVar7 * fVar48 + fVar8 * fVar49 + fVar9 * fVar50
  ;
  param_3[0x16] =
       fVar11 * fVar47 + fVar10 * fVar46 + fVar12 * fVar48 + fVar13 * fVar49 + fVar14 * fVar50;
  param_3[0x17] =
       fVar16 * fVar47 + fVar15 * fVar46 + fVar17 * fVar48 + fVar18 * fVar49 + fVar19 * fVar50;
  param_3[0x18] =
       fVar21 * fVar47 + fVar20 * fVar46 + fVar22 * fVar48 + fVar23 * fVar49 + fVar24 * fVar50;
  return;
}



/* Function: FUN_004132b1 */

void __fastcall FUN_004132b1(undefined4 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  fVar42 = DAT_00417700;
  fVar41 = DAT_004176f8;
  fVar40 = DAT_004176f4;
  fVar39 = DAT_004176f0;
  fVar38 = DAT_004176ec;
  fVar37 = DAT_004176e8;
  fVar36 = DAT_004176e4;
  fVar35 = DAT_004176e0;
  fVar34 = DAT_004176dc;
  fVar33 = DAT_004176d8;
  fVar32 = DAT_004176d4;
  fVar31 = DAT_004176d0;
  fVar30 = DAT_004176cc;
  fVar29 = DAT_004176c8;
  fVar28 = DAT_004176c4;
  fVar27 = DAT_004176c0;
  fVar26 = DAT_004176bc;
  fVar25 = DAT_004176b8;
  fVar24 = DAT_004176b4;
  fVar23 = DAT_004176b0;
  fVar22 = DAT_004176ac;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  fVar8 = param_2[8];
  fVar9 = param_2[9];
  fVar10 = param_2[10];
  fVar11 = param_2[0xb];
  fVar12 = param_2[0xc];
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  fVar15 = param_2[0xf];
  fVar16 = param_2[0x10];
  fVar17 = param_2[0x13];
  fVar18 = param_2[0x11];
  fVar19 = param_2[0x12];
  fVar20 = param_2[0x14];
  fVar21 = param_2[0x16];
  fVar45 = DAT_00417704 + param_2[0x17];
  fVar43 = DAT_00417708 + param_2[0x18];
  fVar44 = param_2[0x15] + DAT_004176fc;
  *param_3 = *param_2 + DAT_004176a8;
  param_3[1] = fVar22 + fVar1;
  param_3[2] = fVar23 + fVar2;
  param_3[3] = fVar24 + fVar3;
  param_3[4] = fVar25 + fVar4;
  param_3[5] = fVar26 + fVar5;
  param_3[6] = fVar27 + fVar6;
  param_3[7] = fVar28 + fVar7;
  param_3[8] = fVar29 + fVar8;
  param_3[9] = fVar30 + fVar9;
  param_3[10] = fVar31 + fVar10;
  param_3[0xb] = fVar32 + fVar11;
  param_3[0xc] = fVar33 + fVar12;
  param_3[0xd] = fVar34 + fVar13;
  param_3[0xe] = fVar35 + fVar14;
  param_3[0xf] = fVar15 + fVar36;
  param_3[0x10] = fVar37 + fVar16;
  param_3[0x11] = fVar38 + fVar18;
  param_3[0x12] = fVar19 + fVar39;
  param_3[0x13] = fVar40 + fVar17;
  param_3[0x14] = fVar20 + fVar41;
  param_3[0x15] = fVar44;
  param_3[0x16] = fVar42 + fVar21;
  param_3[0x17] = fVar45;
  param_3[0x18] = fVar43;
  return;
}



/* Function: FUN_00413669 */

void __fastcall FUN_00413669(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  fVar1 = param_1[1];
  fVar2 = param_2[1];
  fVar3 = param_1[2];
  fVar4 = param_2[2];
  fVar5 = param_1[3];
  fVar6 = param_2[3];
  fVar7 = param_1[4];
  fVar8 = param_2[4];
  fVar9 = param_1[5];
  fVar10 = param_2[5];
  fVar11 = param_1[6];
  fVar12 = param_2[6];
  fVar13 = param_1[7];
  fVar14 = param_2[7];
  fVar15 = param_1[8];
  fVar16 = param_2[8];
  fVar17 = param_1[9];
  fVar18 = param_2[9];
  fVar19 = param_1[10];
  fVar20 = param_2[10];
  fVar21 = param_1[0xb];
  fVar22 = param_2[0xb];
  fVar23 = param_1[0xc];
  fVar24 = param_2[0xc];
  fVar25 = param_1[0xd];
  fVar26 = param_2[0xd];
  fVar27 = param_1[0xe];
  fVar28 = param_2[0xe];
  fVar29 = param_1[0xf];
  fVar30 = param_2[0xf];
  fVar31 = param_1[0x10];
  fVar32 = param_2[0x10];
  fVar33 = param_2[0x14];
  fVar34 = param_1[0x11];
  fVar35 = param_2[0x11];
  fVar36 = param_1[0x12];
  fVar37 = param_2[0x12];
  fVar38 = param_1[0x13];
  fVar39 = param_2[0x13];
  fVar40 = param_1[0x14];
  fVar41 = param_1[0x15];
  fVar42 = param_1[0x16];
  fVar43 = param_2[0x15];
  fVar44 = param_2[0x16];
  fVar45 = param_1[0x17];
  fVar46 = param_2[0x17];
  fVar47 = param_1[0x18];
  fVar48 = param_2[0x18];
  *param_3 = *param_1 - *param_2;
  param_3[1] = fVar1 - fVar2;
  param_3[2] = fVar3 - fVar4;
  param_3[3] = fVar5 - fVar6;
  param_3[4] = fVar7 - fVar8;
  param_3[5] = fVar9 - fVar10;
  param_3[6] = fVar11 - fVar12;
  param_3[7] = fVar13 - fVar14;
  param_3[8] = fVar15 - fVar16;
  param_3[9] = fVar17 - fVar18;
  param_3[10] = fVar19 - fVar20;
  param_3[0xb] = fVar21 - fVar22;
  param_3[0xc] = fVar23 - fVar24;
  param_3[0xd] = fVar25 - fVar26;
  param_3[0xe] = fVar27 - fVar28;
  param_3[0xf] = fVar29 - fVar30;
  param_3[0x10] = fVar31 - fVar32;
  param_3[0x11] = fVar34 - fVar35;
  param_3[0x12] = fVar36 - fVar37;
  param_3[0x13] = fVar38 - fVar39;
  param_3[0x14] = fVar40 - fVar33;
  param_3[0x15] = fVar41 - fVar43;
  param_3[0x16] = fVar42 - fVar44;
  param_3[0x17] = fVar45 - fVar46;
  param_3[0x18] = fVar47 - fVar48;
  return;
}



/* Function: FUN_004139d9 */

uint * __thiscall FUN_004139d9(void *this,uint *param_1)

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
  iVar1 = FUN_004099f0();
  local_c = iVar1;
  FUN_00413b40(local_1c,&local_8);
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
  if (((uVar5 & 4) != 0) || (DAT_0041773c == '\0')) goto LAB_00413ac1;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00417740);
  if ((local_c == 0) || (local_c != DAT_0041774c)) {
LAB_00413aaf:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffff7c1;
    UNLOCK();
  }
  else {
    local_14 = 0;
    local_10 = this;
    uVar3 = FUN_004078f2(&DAT_00417768,&local_14,8);
    if ((char)uVar3 == '\0') goto LAB_00413aaf;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00417740);
LAB_00413ac1:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_1c[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00413ae7 */

void __thiscall FUN_00413ae7(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_14 [2];
  undefined4 local_c;
  undefined1 local_8;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004139d9(this,local_14);
    uVar2 = *puVar1;
  }
  local_8 = 3;
  local_c = 0;
  FUN_00409b95((uint *)((int)this + 8),(char *)0x260e88a,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,
               (int)&local_c,(uint)param_1);
  return;
}



/* Function: FUN_00413b40 */

uint * FUN_00413b40(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00409a0b(0x260e88a,0,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00413bae */

void __fastcall FUN_00413bae(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  _EVENT_DATA_DESCRIPTOR local_70 [2];
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_00417380 ^ (uint)&stack0xfffffffc;
  puVar1 = FUN_00411de6();
  uVar3 = extraout_EDX;
  if (5 < **(uint **)(puVar1 + 4)) {
    uVar2 = FUN_0040498a(*(uint **)(puVar1 + 4),0,0x4000);
    uVar3 = extraout_EDX_00;
    if ((char)uVar2 != '\0') {
      local_88 = 0x2000000;
      local_74 = *param_3;
      local_78 = *param_2;
      local_7c = *param_1;
      local_20 = &local_88;
      local_30 = &local_74;
      local_40 = &local_78;
      local_50 = &local_7c;
      local_84 = 0;
      local_1c = 0;
      local_18 = 8;
      local_14 = 0;
      local_2c = 0;
      local_28 = 4;
      local_24 = 0;
      local_3c = 0;
      local_38 = 4;
      local_34 = 0;
      local_4c = 0;
      local_48 = 4;
      local_44 = 0;
      FUN_004048f5(extraout_ECX,&DAT_00404272,(LPCGUID)0x0,(LPCGUID)0x0,6,local_70);
      uVar3 = extraout_EDX_01;
    }
  }
  FUN_00414450(local_c ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00413c7b */

void __fastcall FUN_00413c7b(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  UINT local_44 [15];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  bVar1 = FUN_00413e43(param_1,param_2);
  uVar3 = extraout_EDX;
  if ((CONCAT31(extraout_var,bVar1) != 0) &&
     (iVar2 = param_2 * 0x18, *(int *)(&DAT_004170b4 + iVar2) == 2)) {
    local_44[0] = *(UINT *)(&DAT_004170b8 + iVar2);
    SystemParametersInfoW(*(UINT *)(&DAT_004170ac + iVar2),local_44[0],local_44,0);
    uVar3 = extraout_EDX_00;
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00413ce5 */

void __fastcall FUN_00413ce5(undefined4 *param_1,int param_2,UINT *param_3,int param_4)

{
  wchar_t wVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined3 extraout_var;
  wchar_t *pwVar5;
  uint uVar6;
  BOOL BVar7;
  wchar_t *pwVar8;
  undefined4 extraout_EDX;
  undefined4 uVar9;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int iVar11;
  uint fWinIni;
  undefined8 uVar12;
  UINT UVar13;
  UINT *pvParam;
  UINT local_44;
  uint local_40;
  uint local_8;
  undefined2 uVar10;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  fWinIni = -(uint)(param_4 != 0) & 3;
  bVar3 = FUN_00413e43(param_1,param_2);
  uVar9 = extraout_EDX;
  if (CONCAT31(extraout_var,bVar3) == 0) goto LAB_00413df3;
  iVar11 = param_2 * 0x18;
  pwVar8 = L"animations";
  pwVar5 = (wchar_t *)(&PTR_u_filterkeys_004170a8)[param_2 * 6];
  do {
    wVar1 = *pwVar5;
    uVar10 = (undefined2)((uint)uVar9 >> 0x10);
    uVar9 = CONCAT22(uVar10,wVar1);
    bVar3 = (ushort)wVar1 < (ushort)*pwVar8;
    if (wVar1 != *pwVar8) {
LAB_00413d52:
      uVar6 = -(uint)bVar3 | 1;
      goto LAB_00413d57;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar5[1];
    uVar9 = CONCAT22(uVar10,wVar1);
    bVar3 = (ushort)wVar1 < (ushort)pwVar8[1];
    if (wVar1 != pwVar8[1]) goto LAB_00413d52;
    pwVar5 = pwVar5 + 2;
    pwVar8 = pwVar8 + 2;
  } while (wVar1 != L'\0');
  uVar6 = 0;
LAB_00413d57:
  if (uVar6 == 0) {
    uVar12 = FUN_00413e87((PVOID)*param_3);
    uVar9 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 < 0) goto LAB_00413df3;
  }
  iVar2 = *(int *)(&DAT_004170b4 + iVar11);
  if (iVar2 == 0) {
    pvParam = *(UINT **)(&DAT_004170bc + iVar11);
    UVar13 = *param_3;
LAB_00413e18:
    BVar7 = SystemParametersInfoW(*(UINT *)(&DAT_004170b0 + iVar11),UVar13,pvParam,fWinIni);
    uVar9 = extraout_EDX_03;
    if (BVar7 != 0) goto LAB_00413df3;
  }
  else {
    if (iVar2 == 1) {
      param_3 = (UINT *)*param_3;
LAB_00413e0d:
      UVar13 = *(UINT *)(&DAT_004170b8 + iVar11);
      pvParam = param_3;
      goto LAB_00413e18;
    }
    if (iVar2 != 2) goto LAB_00413df3;
    UVar13 = *(UINT *)(&DAT_004170b8 + iVar11);
    if (param_3 != (UINT *)0x0) {
      *param_3 = UVar13;
      goto LAB_00413e0d;
    }
    local_44 = UVar13;
    BVar7 = SystemParametersInfoW(*(UINT *)(&DAT_004170ac + iVar11),UVar13,&local_44,0);
    if (BVar7 != 0) {
      uVar9 = extraout_EDX_00;
      if ((local_40 & 1) == 0) {
        local_40 = local_40 | 1;
        if ((*(int *)(&DAT_004170b0 + iVar11) == 0x43) && (cVar4 = FUN_0040563e(), cVar4 != '\0')) {
          local_40 = local_40 | 0x1000;
        }
        SystemParametersInfoW
                  (*(UINT *)(&DAT_004170b0 + iVar11),*(UINT *)(&DAT_004170b8 + iVar11),&local_44,
                   fWinIni);
        uVar9 = extraout_EDX_01;
        if (param_4 == 0) {
          SendNotifyMessageW((HWND)0xffff,0x1a,*(WPARAM *)(&DAT_004170b0 + iVar11),0);
          uVar9 = extraout_EDX_02;
        }
      }
      goto LAB_00413df3;
    }
  }
  GetLastError();
  uVar9 = extraout_EDX_04;
LAB_00413df3:
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar9);
  return;
}



/* Function: FUN_00413e43 */

bool __fastcall FUN_00413e43(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  bool bVar5;
  
  puVar3 = (ushort *)*param_1;
  puVar2 = (ushort *)(&PTR_u_filterkeys_004170a8)[param_2 * 6];
  do {
    uVar1 = *puVar2;
    bVar5 = uVar1 < *puVar3;
    if (uVar1 != *puVar3) {
LAB_00413e74:
      uVar4 = -(uint)bVar5 | 1;
      goto LAB_00413e79;
    }
    if (uVar1 == 0) break;
    uVar1 = puVar2[1];
    bVar5 = uVar1 < puVar3[1];
    if (uVar1 != puVar3[1]) goto LAB_00413e74;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
  } while (uVar1 != 0);
  uVar4 = 0;
LAB_00413e79:
  return uVar4 == 0;
}



/* Function: FUN_00413e87 */

void __fastcall FUN_00413e87(PVOID param_1)

{
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_24;
  PVOID local_20;
  UINT local_1c [5];
  uint local_8;
  
  local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
  local_1c[0] = 0x1003;
  local_1c[1] = 0x1005;
  uVar3 = 0;
  local_1c[2] = 0x1007;
  local_1c[3] = 0x1015;
  local_1c[4] = 0x1017;
  do {
    BVar1 = SystemParametersInfoW(local_1c[uVar3],0,param_1,3);
    if (BVar1 == 0) goto LAB_00413efd;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  local_24 = 8;
  local_20 = param_1;
  BVar1 = SystemParametersInfoW(0x49,0,&local_24,3);
  uVar2 = extraout_EDX;
  if (BVar1 == 0) {
LAB_00413efd:
    GetLastError();
    uVar2 = extraout_EDX_00;
  }
  FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_00414018 */

undefined4 FUN_00414018(void)

{
  HANDLE JobHandle;
  HANDLE ProcessHandle;
  BOOL BVar1;
  undefined4 uVar2;
  BOOL local_8;
  
  uVar2 = 0;
  local_8 = 0;
  BVar1 = 0;
  JobHandle = OpenJobObjectW(4,0,L"WinlogonAccess");
  if (JobHandle != (HANDLE)0x0) {
    ProcessHandle = GetCurrentProcess();
    BVar1 = IsProcessInJob(ProcessHandle,JobHandle,&local_8);
    CloseHandle(JobHandle);
  }
  if ((local_8 != 0) && (BVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: FUN_00414070 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00414070(void *param_1)

{
  DWORD dwProcessId;
  BOOL BVar1;
  errno_t eVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  DWORD *pSessionId;
  DWORD local_30;
  wchar_t local_2c [18];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0;
  local_30 = 0;
  FUN_0040d75c(param_1,L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility\\Session");
  pSessionId = &local_30;
  local_8 = 0;
  dwProcessId = GetCurrentProcessId();
  BVar1 = ProcessIdToSessionId(dwProcessId,pSessionId);
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if (BVar1 != 0) {
    eVar2 = _ltow_s(local_30,local_2c,0xc,10);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
    if (eVar2 == 0) {
      FUN_004106c7(param_1,local_2c);
      uVar3 = extraout_ECX_01;
      uVar4 = extraout_EDX_01;
    }
  }
  FUN_00414bee(uVar3,uVar4);
  return;
}



/* Function: FUN_004140e9 */

undefined1 FUN_004140e9(void)

{
  int iVar1;
  undefined1 uVar2;
  int local_8;
  
  uVar2 = 0;
  local_8 = 0;
  iVar1 = OOBEComplete(&local_8);
  if ((iVar1 != 0) && (local_8 == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: FUN_00414115 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00414115(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  wchar_t *pwVar5;
  DWORD local_438 [2];
  wchar_t local_430 [274];
  WCHAR local_20c [258];
  uint local_8;
  
  cVar1 = FUN_004140e9();
  if (cVar1 != '\0') {
    local_8 = DAT_00417380 ^ (uint)&stack0xfffffffc;
    pwVar5 = (LPCWSTR)0x0;
    memset(local_20c,0,0x202);
    local_438[0] = 0x202;
    memset(local_430,0,0x222);
    local_438[1] = 0x111;
    cVar1 = GetUserNameExW(2,local_430,local_438 + 1);
    if (cVar1 != '\0') {
      pwVar5 = wcschr(local_430,L'\\');
      pwVar5 = pwVar5 + 1;
    }
    uVar2 = RegGetValueW((HKEY)0x80000002,L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
                         L"DefaultAccountSAMName",2,(LPDWORD)0x0,local_20c,local_438);
    uVar3 = uVar2 & 0xffff | 0x80070000;
    if ((int)uVar2 < 1) {
      uVar3 = uVar2;
    }
    uVar4 = extraout_EDX;
    if ((-1 < (int)uVar3) && (pwVar5 != (LPCWSTR)0x0)) {
      CompareStringOrdinal(pwVar5,-1,local_20c,-1,1);
      uVar4 = extraout_EDX_00;
    }
    FUN_00414450(local_8 ^ (uint)&stack0xfffffffc,uVar4);
    return;
  }
  return;
}



/* Function: FUN_00414129 */

void FUN_00414129(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_004039e8,DelayLoadFailureHook_exref,param_2,DAT_004039e8);
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0041467c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: FUN_00414170 */

undefined4 FUN_00414170(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_004143cf();
  DAT_004177d8 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_004147b4(1);
  __set_app_type(iVar2);
  DAT_00417d90 = 0xffffffff;
  DAT_00417d94 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_00417b08;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_00417afc;
  FUN_00414810();
  if (DAT_00417340 == 0) {
    __setusermatherr(FUN_00414810);
  }
  FUN_00414a17();
  return 0;
}



/* Function: FUN_004141e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004141e0(void)

{
  _DAT_004177dc = DAT_00417b04;
  _DAT_004177d4 =
       __wgetmainargs(&DAT_004177c8,(wchar_t ***)&DAT_004177cc,(wchar_t ***)&DAT_004177d0,
                      DAT_00417b00,(_startupinfo *)&DAT_004177dc);
  return;
}



/* Function: FUN_00414219 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00414219(void)

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
    if (DAT_00417d88 != 0) {
      iVar4 = DAT_00417d88;
      iVar3 = DAT_00417d88;
    }
    DAT_00417d88 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_00414261;
    if (iVar4 == iVar5) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00414261:
  if (DAT_00417d8c == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_00417d8c == 0) {
    DAT_00417d8c = 1;
    iVar5 = FUN_00414398((undefined4 *)&DAT_00401174,(undefined4 *)&DAT_00401180);
    if (iVar5 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_004177c4 = 1;
  }
  if (DAT_00417d8c == 1) {
    initterm(&DAT_00401134,&DAT_00401170);
    DAT_00417d8c = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00417d88 = 0;
    UNLOCK();
  }
  if ((DAT_00417d98 != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00417d98), pcVar2 = DAT_00417d98, BVar6 != 0
     )) {
    (*(code *)PTR_guard_check_icall_004182ac)(0,2,0);
    (*pcVar2)();
  }
  DAT_004177c0 = FUN_0040a6e3(DAT_004177c8,DAT_004177cc);
  if (DAT_004177d8 != 0) {
    if (DAT_004177c4 == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_004177c0;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_004177c0);
}



/* Function: FUN_00414398 */

void __cdecl FUN_00414398(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_004182ac)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_004143cf */

bool FUN_004143cf(void)

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
    iVar2 = *(int *)(IMAGE_NT_HEADERS32_004000e0.Signature + IMAGE_DOS_HEADER_00400000.e_lfanew + 8)
    ;
  }
  else {
    if (sVar1 != 0x20b) {
      return false;
    }
    if (*(uint *)(&UNK_00400080.field_0x4 + IMAGE_DOS_HEADER_00400000.e_lfanew) < 0xf) {
      return false;
    }
    iVar2 = *(int *)((int)&((IMAGE_OPTIONAL_HEADER32 *)
                           (IMAGE_NT_HEADERS32_004000e0.OptionalHeader.DataDirectory + -0xc))->Magic
                    + IMAGE_DOS_HEADER_00400000.e_lfanew);
  }
  return iVar2 != 0;
}



/* Function: entry */

void entry(void)

{
  FUN_00414979();
  FUN_00414219();
  return;
}



/* Function: FUN_00414450 */

void __fastcall FUN_00414450(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00417380) {
    return;
  }
  FUN_00414496(param_1,param_2);
  return;
}



/* Function: FUN_00414466 */

void __cdecl FUN_00414466(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00414496 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00414496(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_004178f0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_004178f4 = &stack0x00000004;
  _DAT_00417830 = 0x10001;
  _DAT_004177e0 = 0xc0000409;
  _DAT_004177e4 = 1;
  _DAT_004177f0 = 3;
  DAT_004177f4 = 2;
  DAT_004177f8 = DAT_00417380;
  DAT_004177fc = DAT_004173c0;
  uStack_c = DAT_00417380;
  uStack_8 = DAT_004173c0;
  _DAT_004177ec = unaff_retaddr;
  _DAT_004178bc = in_GS;
  _DAT_004178c0 = in_FS;
  _DAT_004178c4 = in_ES;
  _DAT_004178c8 = in_DS;
  _DAT_004178cc = unaff_EDI;
  _DAT_004178d0 = unaff_ESI;
  _DAT_004178d4 = unaff_EBX;
  _DAT_004178d8 = param_2;
  _DAT_004178dc = param_1;
  _DAT_004178e0 = in_EAX;
  _DAT_004178e4 = unaff_EBP;
  DAT_004178e8 = unaff_retaddr;
  _DAT_004178ec = in_CS;
  _DAT_004178f8 = in_SS;
  FUN_00414466((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_004145aa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_004145aa(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00416128;
  uStack_c = 0x4145b6;
  local_20[0] = DAT_00417d94;
  if (DAT_00417d94 == -1) {
    (*(code *)PTR_guard_check_icall_004182ac)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_00417d94;
    local_24 = DAT_00417d90;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_00417d94 = local_20[0];
    DAT_00417d90 = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_00414644();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_00414644 */

void FUN_00414644(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_00414653 */

int __cdecl FUN_00414653(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_004145aa(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00414670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0041467c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: malloc */

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00414688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



/* Function: FUN_004146a0 */

void __cdecl
FUN_004146a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00417380,FUN_00414450,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_004146d0 */

undefined4 FUN_004146d0(int *param_1)

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



/* Function: FUN_00414720 */

undefined4 FUN_00414720(void)

{
  SetUnhandledExceptionFilter(FUN_004146d0);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00414734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00414740 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00414740(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_004147b4 */

undefined4 __cdecl FUN_004147b4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00414740(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x004147f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00414810 */

undefined4 FUN_00414810(void)

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
  
  pcStack_10 = FUN_004146a0;
  local_14 = ExceptionList;
  local_c = DAT_00417380 ^ 0x416168;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00414940((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00414940 */

bool __cdecl FUN_00414940(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00414979 */

void FUN_00414979(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00417380 == 0xbb40e64e) || ((DAT_00417380 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00417380 & 0xffff0000, DAT_00417380 = local_8, uVar1 == 0)) {
      DAT_00417380 = 0xbb40e64f;
    }
  }
  DAT_004173c0 = ~DAT_00417380;
  return;
}



/* Function: FUN_00414a17 */

void FUN_00414a17(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00414a30. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00417380 ^ (uint)&param_2;
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
                    /* WARNING: Could not recover jumptable at 0x00414a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x00414aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00414ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00414abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: DelayLoad_GetUserNameExW */

void DelayLoad_GetUserNameExW(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00414129(&ImgDelayDescr_00416184,&GetUserNameExW_exref);
                    /* WARNING: Could not recover jumptable at 0x00414ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_Ordinal_260 */

void DelayLoad_Ordinal_260(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00414129(&ImgDelayDescr_004161a4,&Ordinal_260_exref);
                    /* WARNING: Could not recover jumptable at 0x00414b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_SHExpandEnvironmentStringsW */

void DelayLoad_SHExpandEnvironmentStringsW(void)

{
  FUN_00414b17();
  return;
}



/* Function: FUN_00414b17 */

void FUN_00414b17(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00414129(&ImgDelayDescr_004161c4,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x00414b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_PathFileExistsW */

void DelayLoad_PathFileExistsW(void)

{
  FUN_00414b17();
  return;
}



/* Function: FUN_00414b3e */

void FUN_00414b3e(size_t param_1)

{
  FUN_00414b4f(param_1);
  return;
}



/* Function: FUN_00414b4f */

void * __cdecl FUN_00414b4f(size_t param_1)

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



/* Function: Unwind@00414b90 */

void __cdecl Unwind_00414b90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00414b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* Function: FUN_00414ba0 */

type_info * __thiscall FUN_00414ba0(void *this,byte param_1)

{
  type_info::~type_info((type_info *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (type_info *)this;
}



/* Function: _callnewh */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00414bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
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



/* Function: FUN_00414bee */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00414bee(undefined4 param_1,undefined4 param_2)

{
  uint unaff_EBP;
  
  FUN_00414450(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP,param_2);
  return;
}



/* Function: FUN_00414c03 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00414c03(undefined4 param_1,undefined4 param_2)

{
  uint unaff_EBP;
  
  FUN_00414450(*(uint *)(unaff_EBP - 0x14) ^ unaff_EBP,param_2);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00417380 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00417380 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00417380 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00417380 ^ (uint)&param_1;
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
  
                    /* WARNING: Could not recover jumptable at 0x00414d81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00414d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: Unwind@00414dc9 */

void Unwind_00414dc9(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0xa4));
  return;
}



/* Function: Unwind@00414e72 */

void Unwind_00414e72(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00414e7a */

void Unwind_00414e7a(void)

{
  int unaff_EBP;
  
  FUN_0040d17f((undefined4 *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00414e82 */

void Unwind_00414e82(void)

{
  int unaff_EBP;
  
  FUN_0040ca7b((undefined4 *)(unaff_EBP + -0xd0));
  return;
}



/* Function: Unwind@00414e8d */

void Unwind_00414e8d(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00414f29 */

void Unwind_00414f29(void)

{
  int unaff_EBP;
  
  FUN_0040aec7(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00414f59 */

void Unwind_00414f59(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00414f61 */

void Unwind_00414f61(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00414fb4 */

void Unwind_00414fb4(void)

{
  int unaff_EBP;
  
  thunk_FUN_0040d620((undefined4 *)(unaff_EBP + -0x38));
  return;
}



/* Function: Unwind@00414fbc */

void Unwind_00414fbc(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00414fc4 */

void Unwind_00414fc4(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00414ff4 */

void Unwind_00414ff4(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00414ffc */

void Unwind_00414ffc(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00415004 */

void Unwind_00415004(void)

{
  int unaff_EBP;
  
  FUN_0040ca7b((undefined4 *)(unaff_EBP + -0xd8));
  return;
}



/* Function: Unwind@0041506a */

void Unwind_0041506a(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x1824));
  return;
}



/* Function: Unwind@00415075 */

void Unwind_00415075(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x1818));
  return;
}



/* Function: Unwind@00415080 */

void Unwind_00415080(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x183c));
  return;
}



/* Function: Unwind@0041508b */

void Unwind_0041508b(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x1828));
  return;
}



/* Function: Unwind@00415096 */

void Unwind_00415096(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x1814));
  return;
}



/* Function: Unwind@004150a1 */

void Unwind_004150a1(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x1824));
  return;
}



/* Function: Unwind@004150ac */

void Unwind_004150ac(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x1818));
  return;
}



/* Function: Unwind@004150b7 */

void Unwind_004150b7(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x182c));
  return;
}



/* Function: Unwind@004150c2 */

void Unwind_004150c2(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x1848));
  return;
}



/* Function: Unwind@004150cd */

void Unwind_004150cd(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x1824));
  return;
}



/* Function: Unwind@0041510d */

void Unwind_0041510d(void)

{
  int unaff_EBP;
  
  FUN_0040ced5((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@00415115 */

void Unwind_00415115(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@00415145 */

void Unwind_00415145(void)

{
  int unaff_EBP;
  
  FUN_0040ced5((int *)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@0041514d */

void Unwind_0041514d(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00415155 */

void Unwind_00415155(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00415185 */

void Unwind_00415185(void)

{
  int unaff_EBP;
  
  FUN_0040ced5((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@0041518d */

void Unwind_0041518d(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@00415195 */

void Unwind_00415195(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004151c5 */

void Unwind_004151c5(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004151cd */

void Unwind_004151cd(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004151d5 */

void Unwind_004151d5(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@004151dd */

void Unwind_004151dd(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@0041520d */

void Unwind_0041520d(void)

{
  int unaff_EBP;
  
  FUN_0040ced5((int *)(unaff_EBP + -0x22c));
  return;
}



/* Function: Unwind@00415218 */

void Unwind_00415218(void)

{
  int unaff_EBP;
  
  FUN_0040a110((undefined4 *)(unaff_EBP + -0x214));
  return;
}



/* Function: Unwind@00415258 */

void Unwind_00415258(void)

{
  int unaff_EBP;
  
  FUN_0040a110((undefined4 *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@00415260 */

void Unwind_00415260(void)

{
  int unaff_EBP;
  
  FUN_0040a110((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00415293 */

void Unwind_00415293(void)

{
  int unaff_EBP;
  
  FUN_0040ced5((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: Unwind@0041529b */

void Unwind_0041529b(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@004152a3 */

void Unwind_004152a3(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004152ab */

void Unwind_004152ab(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004152b3 */

void Unwind_004152b3(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004152bb */

void Unwind_004152bb(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004152eb */

void Unwind_004152eb(void)

{
  int unaff_EBP;
  
  FUN_0040ca7b((undefined4 *)(unaff_EBP + -0xd0));
  return;
}



/* Function: Unwind@00415321 */

void Unwind_00415321(void)

{
  int unaff_EBP;
  
  thunk_FUN_0040d620((undefined4 *)(unaff_EBP + -0x254));
  return;
}



/* Function: Unwind@0041532c */

void Unwind_0041532c(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x21c));
  return;
}



/* Function: Unwind@00415337 */

void Unwind_00415337(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x238));
  return;
}



/* Function: Unwind@00415342 */

void Unwind_00415342(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x228));
  return;
}



/* Function: Unwind@0041534d */

void Unwind_0041534d(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x224));
  return;
}



/* Function: Unwind@00415358 */

void Unwind_00415358(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x220));
  return;
}



/* Function: Unwind@004153bb */

void Unwind_004153bb(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x824));
  return;
}



/* Function: Unwind@004153fb */

void Unwind_004153fb(void)

{
  int unaff_EBP;
  
  FUN_004103c3((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0041544e */

void Unwind_0041544e(void)

{
  int unaff_EBP;
  
  FUN_004103c3((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0041547e */

void Unwind_0041547e(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@004154ae */

void Unwind_004154ae(void)

{
  int unaff_EBP;
  
  FUN_0040aec7(*(int **)(unaff_EBP + 8));
  return;
}



/* Function: Unwind@004154de */

void Unwind_004154de(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@004154e6 */

void Unwind_004154e6(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@004154ee */

void Unwind_004154ee(void)

{
  int unaff_EBP;
  
  free(*(void **)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@004154f8 */

void Unwind_004154f8(void)

{
  int unaff_EBP;
  
  FUN_0040d17f((undefined4 *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00415528 */

void Unwind_00415528(void)

{
  int unaff_EBP;
  
  FUN_0040aec7(*(int **)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00415530 */

void Unwind_00415530(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* Function: Unwind@0041553b */

void Unwind_0041553b(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* Function: Unwind@00415546 */

void Unwind_00415546(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/* Function: Unwind@00415551 */

void Unwind_00415551(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}



/* Function: Unwind@0041555c */

void Unwind_0041555c(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* Function: Unwind@00415567 */

void Unwind_00415567(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}



/* Function: Unwind@00415572 */

void Unwind_00415572(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* Function: Unwind@0041557d */

void Unwind_0041557d(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(*(int *)(unaff_EBP + -0x10) + 0x28));
  return;
}



/* Function: Unwind@004155e0 */

void Unwind_004155e0(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@004155e8 */

void Unwind_004155e8(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x18));
  return;
}



/* Function: Unwind@00415618 */

void Unwind_00415618(void)

{
  int unaff_EBP;
  
  FUN_0040aec7((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@00415620 */

void Unwind_00415620(void)

{
  int unaff_EBP;
  
  FUN_0040a110((undefined4 *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@00415650 */

void Unwind_00415650(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x24c));
  return;
}



/* Function: Unwind@0041565b */

void Unwind_0041565b(void)

{
  int unaff_EBP;
  
  FUN_004054c4((int *)(unaff_EBP + -0x23c));
  return;
}



/* Function: Unwind@00415666 */

void Unwind_00415666(void)

{
  int unaff_EBP;
  
  FUN_00411943((undefined4 *)(unaff_EBP + -0x250));
  return;
}



/* Function: Unwind@004156c9 */

void Unwind_004156c9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    FUN_0040aec7(*(int **)(unaff_EBP + -0x34));
    return;
  }
  return;
}



/* Function: FUN_00415720 */

int FUN_00415720(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int in_EAX;
  int *piVar4;
  int *lpMem;
  int *local_8;
  
  lpMem = DAT_004172bc;
  if (DAT_004172bc != (int *)0x0) {
    local_8 = DAT_004172bc;
    cVar1 = FUN_00406206();
    if (cVar1 == '\0') {
      iVar2 = FUN_0040b675(lpMem + 1,&local_8);
      *lpMem = *lpMem + -1;
      piVar4 = local_8;
      if (*lpMem == 0) {
        FUN_0040ae90(lpMem + 2,0);
        FUN_0040ae90(lpMem + 3,0);
        if (local_8 != (int *)0x0) {
          DVar3 = GetLastError();
          FUN_00406fc1(local_8);
          SetLastError(DVar3);
        }
        FUN_0040b3dc((int)lpMem);
        DVar3 = 0;
        hHeap = GetProcessHeap();
        iVar2 = HeapFree(hHeap,DVar3,lpMem);
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        iVar2 = FUN_00406fc1(piVar4);
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



/* Function: FUN_00415740 */

void FUN_00415740(void)

{
  FUN_0040adfb((int *)&DAT_00417710);
  return;
}



/* Function: FUN_00415750 */

void FUN_00415750(void)

{
  FUN_0040ad08(&DAT_00417cc4);
  return;
}



/* Function: FUN_00415760 */

void FUN_00415760(void)

{
  FUN_0040acb2(&DAT_0041773c);
  return;
}



/* Function: FUN_00415770 */

void FUN_00415770(void)

{
  ATL::CWin32Heap::~CWin32Heap((CWin32Heap *)&DAT_00417bf8);
  return;
}



/* Function: FUN_00415780 */

void FUN_00415780(void)

{
  PTR_PTR_004172c0 = (undefined *)&PTR_FUN_00401044;
  return;
}



/* Function: FUN_004157a0 */

void FUN_004157a0(void)

{
  FUN_0040c877(0x4172dc);
  return;
}



/* Function: FUN_004157b0 */

void FUN_004157b0(void)

{
  FUN_0040c918((int *)&DAT_00417778,(HINSTANCE)PTR_IMAGE_DOS_HEADER_004172e0);
  ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
            ((CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *)
             &DAT_00417798);
  return;
}



