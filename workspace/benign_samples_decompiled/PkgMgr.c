/* Function: FUN_0041c270 */

void FUN_0041c270(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_00437340)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_0041c2f3 */

void __thiscall FUN_0041c2f3(void *this,undefined4 param_1,undefined4 param_2)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  BVar1 = GetModuleHandleExW(0,L"api-ms-win-eventing-provider-l1-1-0.dll",&local_c);
  if ((BVar1 != 0) || (BVar1 = GetModuleHandleExW(0,L"advapi32.dll",&local_c), BVar1 != 0)) {
    pFVar2 = GetProcAddress(local_c,"EventSetInformation");
    if (pFVar2 != (FARPROC)0x0) {
      (*(code *)PTR_guard_check_icall_00437340)
                (*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),2,param_1,
                 param_2);
      (*pFVar2)();
    }
    FreeLibrary(local_c);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041c398 */

void FUN_0041c398(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
                 PEVENT_DATA_DESCRIPTOR param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  EVENT_DESCRIPTOR local_18;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
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
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041c44d */

uint __thiscall FUN_0041c44d(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_0041c484:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_0041c484;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_0041c490 */

void __fastcall
FUN_0041c490(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  FUN_0041cbb2(param_20,local_18);
  FUN_0041cc00(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_0041cbb2(param_17,local_48);
  FUN_0041cc00(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_0041cc00(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_0041cbb2(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_0041cc00(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_0041cc00(param_8,local_d8);
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
  FUN_0041c398(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x12,local_128);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041c64b */

void __fastcall
FUN_0041c64b(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  FUN_0041cc00(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_0041cbb2(param_19,local_48);
  FUN_0041cc00(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_0041cbb2(param_16,local_78);
  FUN_0041cc00(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_0041cc00(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_0041cbb2(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_0041cc00(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_0041cc00(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_0041c398(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041c83e */

void __fastcall
FUN_0041c83e(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
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
  FUN_0041c398(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,9,local_98);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041c8f3 */

void __fastcall
FUN_0041c8f3(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
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
  FUN_0041c398(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,10,local_a8);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041c9bb */

void __fastcall
FUN_0041c9bb(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  local_18 = param_22;
  local_10 = 4;
  FUN_0041cc00(param_21,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_20;
  local_30 = 4;
  FUN_0041cc00(param_19,local_48);
  FUN_0041cc00(param_18,local_58);
  FUN_0041cc00(param_17,local_68);
  FUN_0041cc00(param_16,local_78);
  local_88 = param_15;
  local_84 = 0;
  local_80 = 2;
  local_7c = 0;
  FUN_0041cc00(param_14,local_98);
  FUN_0041cc00(param_13,local_a8);
  FUN_0041cc00(param_12,local_b8);
  local_c8 = param_11;
  local_c4 = 0;
  local_c0 = 2;
  local_bc = 0;
  FUN_0041cc00(param_10,local_d8);
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
  FUN_0041c398(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041cbb2 */

void __thiscall FUN_0041cbb2(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)&DAT_00403c00;
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



/* Function: FUN_0041cc00 */

void __thiscall FUN_0041cc00(void *this,undefined4 *param_1)

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



/* Function: FUN_0041cc40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041cc40(void)

{
  _DAT_00436548 = GetProcessHeap();
  _DAT_00436544 = &PTR_FUN_00401068;
  DAT_0043654c = 0;
  FUN_004345d3(FUN_00435720);
  return;
}



/* Function: FUN_0041cc70 */

void FUN_0041cc70(void)

{
  FUN_004345d3(FUN_00435730);
  return;
}



/* Function: FUN_0041cc90 */

void FUN_0041cc90(void)

{
  DAT_004365fc = FUN_00420b60;
  DAT_004365e8 = DebugBreak;
  DAT_004365f8 = FUN_00420ba0;
  DAT_004365d8 = FUN_00421400;
  DAT_004365c8 = FUN_004214d0;
  DAT_00436600 = FUN_00421450;
  DAT_004365e4 = FUN_00421490;
  return;
}



/* Function: FUN_0041cce0 */

void FUN_0041cce0(void)

{
  FUN_004345d3(FUN_00435750);
  return;
}



/* Function: FUN_0041cd00 */

void FUN_0041cd00(void)

{
  FUN_004345d3(FUN_00435770);
  return;
}



/* Function: FUN_0041cd20 */

void FUN_0041cd20(void)

{
  DAT_004365e0 = FUN_00421f00;
  DAT_004365b8 = &PTR_s_WilError_03_00436094;
  DAT_004365cc = &DAT_0043615c;
  return;
}



/* Function: FUN_0041cd50 */

void FUN_0041cd50(void)

{
  FUN_00425546();
  FUN_004345d3(FUN_00435780);
  return;
}



/* Function: FUN_0041cd70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041cd70(void)

{
  _DAT_00436610 = FUN_00423990;
  _DAT_00436624 = FUN_00423a10;
  _DAT_004366cc = FUN_00423a80;
  return;
}



/* Function: FUN_0041cda0 */

void FUN_0041cda0(void)

{
  FUN_004345d3(FUN_00435790);
  return;
}



/* Function: FUN_0041cdc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041cdc0(void)

{
  _DAT_004366d0 = FUN_00432150;
  return;
}



/* Function: FUN_0041cde0 */

void FUN_0041cde0(void)

{
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)(*ThreadLocalStoragePointer + 0x9c) = 0;
  FUN_004351f9(0x4357b0);
  return;
}



/* Function: FUN_0041ce10 */

void FUN_0041ce10(void)

{
  FUN_0043297c();
  FUN_004345d3(FUN_004357d0);
  return;
}



/* Function: FUN_0041ce30 */

void __fastcall FUN_0041ce30(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00426b01(*param_1);
  }
  if (param_1[9] != 0) {
    FUN_00426b01(param_1[9]);
  }
  if (param_1[0x1f] != 0) {
    FUN_00426b01(param_1[0x1f]);
  }
  if (param_1[0x20] != 0) {
    FUN_00426b01(param_1[0x20]);
  }
  if (param_1[10] != 0) {
    FUN_00426b01(param_1[10]);
  }
  FUN_0041da1a(param_1 + 0x22);
  FUN_0041da1a(param_1 + 0x15);
  FUN_0041da1a(param_1 + 0xb);
  FUN_0041da1a(param_1 + 1);
  return;
}



/* Function: FUN_0041ce9d */

uint __thiscall FUN_0041ce9d(void *this,int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  wchar_t wVar3;
  short *psVar4;
  code *pcVar5;
  int iVar6;
  wchar_t *pwVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  wchar_t *local_c;
  short *local_8;
  
  uVar11 = 0;
  local_c = (wchar_t *)0x0;
  if (1 < param_1) {
    iVar10 = 1;
LAB_0041cec3:
    psVar4 = *(short **)(param_2 + iVar10 * 4);
    if ((*psVar4 == 0x2f) || (*psVar4 == 0x2d)) {
      local_8 = psVar4 + 1;
      psVar8 = psVar4;
      do {
        sVar2 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar2 != 0);
      if ((uint)((int)psVar8 - (int)local_8 >> 1) < 2) {
LAB_0041d656:
        uVar11 = 1;
        goto LAB_0041d65b;
      }
      local_8 = psVar4 + 1;
      iVar6 = o__wcsicmp(local_8,&DAT_0040152c);
      if (((iVar6 == 0) || (iVar6 = o__wcsicmp(local_8,&DAT_00401530), iVar6 == 0)) ||
         (iVar6 = o__wcsicmp(local_8,L"help"), iVar6 == 0)) goto LAB_0041d656;
      iVar6 = o__wcsnicmp(local_8,&DAT_00401540,2);
      if (iVar6 == 0) {
        uVar11 = FUN_0041d692(local_8 + 2,(void *)((int)this + 0x88),1);
        if ((int)uVar11 < 0) {
          pcVar12 = "Failed parsing offline parameters";
          goto LAB_0041d4bf;
        }
        if (*(int *)((int)this + 0x94) == 1) {
          uVar11 = FUN_00426a2d((int *)&local_c,(short *)**(undefined4 **)((int)this + 0x9c));
          if ((int)uVar11 < 0) {
            if (*(int *)((int)this + 0x94) == 0) {
              pcVar5 = (code *)swi(0x29);
              (*pcVar5)();
            }
            FUN_00424d95(0x4000000,uVar11,'\x01',
                         "Failed allocating memory for boot directory path %S");
            goto LAB_0041d65b;
          }
          pwVar7 = local_c;
          do {
            wVar3 = *pwVar7;
            pwVar7 = pwVar7 + 1;
          } while (wVar3 != L'\0');
          if (local_c[((int)pwVar7 - (int)(local_c + 1) >> 1) + -1] == L'\\') {
            pwVar7 = local_c;
            do {
              wVar3 = *pwVar7;
              pwVar7 = pwVar7 + 1;
            } while (wVar3 != L'\0');
            local_c[((int)pwVar7 - (int)(local_c + 1) >> 1) + -1] = L'\0';
          }
          pwVar7 = wcsrchr(local_c,L'\\');
          if (pwVar7 != (wchar_t *)0x0) {
            *pwVar7 = L'\0';
            uVar11 = FUN_0041d9a1((void *)((int)this + 0x88),&local_c,0);
            if ((int)uVar11 < 0) {
              pcVar12 = "Failed inserting boot directory into the offline location array";
              goto LAB_0041d4bf;
            }
            local_c = (wchar_t *)0x0;
          }
        }
        if (*(int *)((int)this + 0x94) != 2) {
          uVar11 = 0x80070057;
          FUN_00424d95(0x4000000,0x80070057,'\x01',
                       "Invalid number of parameter %S - expected 2 and got %ld");
          goto LAB_0041d65b;
        }
LAB_0041d423:
        if (local_8 == (short *)0x0) goto LAB_0041d63e;
        iVar10 = iVar10 + 1;
        if (param_1 <= iVar10) goto code_r0x0041d43a;
        goto LAB_0041cec3;
      }
      iVar6 = o__wcsicmp(local_8,L"settingsonly");
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0xb0) = 1;
        goto LAB_0041d423;
      }
      iVar6 = o__wcsicmp(local_8,L"quiet");
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0xa8) = 1;
        goto LAB_0041d423;
      }
      iVar6 = o__wcsicmp(local_8,L"norestart");
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0xac) = 1;
        goto LAB_0041d423;
      }
      iVar6 = o__wcsicmp(local_8,L"exedir");
      if (iVar6 == 0) {
                    /* WARNING: Load size is inaccurate */
        if (*this != 0) {
LAB_0041d509:
          pcVar12 = "Invalid parameter %S - Package location was already specified\n";
          goto LAB_0041d514;
        }
        uVar11 = FUN_0041dfb8((int *)this);
        if (-1 < (int)uVar11) goto LAB_0041d423;
        pcVar12 = "Failed getting module location";
        goto LAB_0041d4bf;
      }
      iVar6 = o__wcsnicmp(local_8,&DAT_004016c4,3);
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0x74) = 1;
LAB_0041d137:
        uVar11 = FUN_0041d692(local_8 + 3,(void *)((int)this + 0x54),0);
        if (-1 < (int)uVar11) {
          if (*(int *)((int)this + 0x60) != 0) goto LAB_0041d423;
          pcVar12 = "Invalid parameter %S - selectable update missing";
          goto LAB_0041d514;
        }
        pcVar12 = "Failed parsing selectable update list";
        goto LAB_0041d4bf;
      }
      iVar6 = o__wcsnicmp(local_8,&DAT_00401728,3);
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0x78) = 1;
        goto LAB_0041d137;
      }
      iVar6 = o__wcsicmp(local_8,&DAT_00401730);
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0x4c) = 1;
        goto LAB_0041d423;
      }
      iVar6 = o__wcsicmp(local_8,&DAT_00401738);
      psVar4 = local_8;
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0x50) = 1;
        goto LAB_0041d423;
      }
      iVar6 = o__wcsnicmp(local_8,&DAT_00401740,3);
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0x50) = 1;
        uVar11 = FUN_0041d692(psVar4 + 3,(void *)((int)this + 0x2c),0);
        if (-1 < (int)uVar11) {
          if (*(int *)((int)this + 0x38) != 0) goto LAB_0041d423;
          pcVar12 = "Invalid parameter %S - uninstall package name missing";
          goto LAB_0041d514;
        }
        pcVar12 = "Failed parsing uninstall package name list";
        goto LAB_0041d4bf;
      }
      iVar6 = o__wcsnicmp(psVar4,&DAT_004017ac,2);
      if (iVar6 == 0) {
        if (psVar4[2] != L'\0') {
                    /* WARNING: Load size is inaccurate */
          if (*this != 0) goto LAB_0041d509;
          uVar11 = FUN_0041d692(psVar4 + 2,(void *)((int)this + 4),1);
          if ((int)uVar11 < 0) {
            pcVar12 = "Failed parsing package location list";
          }
          else {
            if (*(int *)((int)this + 0x10) == 0) {
              pcVar12 = "Invalid parameter %S - package location missing";
              goto LAB_0041d514;
            }
            uVar11 = FUN_00426a2d((int *)this,(short *)**(undefined4 **)((int)this + 0x18));
            if (-1 < (int)uVar11) goto LAB_0041d423;
            pcVar12 = "Failed allocating memory for the package location";
          }
          goto LAB_0041d4bf;
        }
        pcVar12 = "Invalid parameter %S - Package location is blank";
      }
      else {
        iVar6 = o__wcsnicmp(psVar4,&DAT_00401874,2);
        if (iVar6 != 0) {
          iVar6 = o__wcsnicmp(psVar4,L"log:",4);
          if ((iVar6 == 0) || (iVar6 = o__wcsnicmp(psVar4,L"ocs:",4), iVar6 == 0)) {
            if (psVar4[4] == L'\0') goto LAB_0041d58c;
            if (*(int *)((int)this + 0x80) == 0) {
              uVar11 = FUN_0041dda0((int *)((int)this + 0x80),psVar4 + 4);
              if ((int)uVar11 < 0) {
LAB_0041d32a:
                pcVar12 = "Failed getting full path for log file %S";
                goto LAB_0041d51e;
              }
              iVar6 = o__wcsnicmp(local_8,L"ocs:",4);
              if (iVar6 == 0) {
                *(undefined4 *)((int)this + 0x84) = 1;
              }
              goto LAB_0041d423;
            }
LAB_0041d57f:
            pcVar12 = "Invalid parameter %S - log file name was already specified\n";
            goto LAB_0041d514;
          }
          iVar6 = o__wcsnicmp(psVar4,&DAT_004019b4,2);
          if (iVar6 == 0) {
            if (psVar4[2] != L'\0') {
              if (*(int *)((int)this + 0x80) != 0) goto LAB_0041d57f;
              uVar11 = FUN_0041dda0((int *)((int)this + 0x80),psVar4 + 2);
              if ((int)uVar11 < 0) goto LAB_0041d32a;
              goto LAB_0041d423;
            }
LAB_0041d58c:
            pcVar12 = "Invalid parameter %S - log file name is blank";
            goto LAB_0041d514;
          }
          iVar6 = o__wcsnicmp(psVar4,&DAT_004019bc,2);
          if (iVar6 != 0) {
            iVar6 = o__wcsnicmp(psVar4,&DAT_00401a68,2);
            if (iVar6 != 0) goto LAB_0041d63e;
            if (psVar4[2] == L'\0') {
              pcVar12 = "Invalid parameter %S - sandbox directory is blank";
            }
            else {
              if (*(int *)((int)this + 0x28) == 0) {
                uVar11 = FUN_0041dda0((int *)((int)this + 0x28),psVar4 + 2);
                if (-1 < (int)uVar11) goto LAB_0041d423;
                pcVar12 = "Failed allocating memory for sandbox directory %S";
                goto LAB_0041d51e;
              }
              pcVar12 = "Invalid parameter %S - sandbox directory was already specified\n";
            }
            goto LAB_0041d514;
          }
          if (psVar4[2] == L'\0') {
            pcVar12 = "Invalid parameter %S - Unattend file name is blank";
            goto LAB_0041d514;
          }
          if (*(int *)((int)this + 0x7c) != 0) {
            pcVar12 = "Invalid parameter %S - Unattend file name was already specified\n";
            goto LAB_0041d514;
          }
          uVar11 = FUN_0041dda0((int *)((int)this + 0x7c),psVar4 + 2);
          if (-1 < (int)uVar11) goto LAB_0041d423;
          pcVar12 = "Failed getting full path for unattend %S";
          goto LAB_0041d51e;
        }
        if (psVar4[2] != 0) {
          if (*(int *)((int)this + 0x24) != 0) {
            pcVar12 = "Invalid parameter %S - Package name was already specified\n";
            goto LAB_0041d514;
          }
          uVar11 = FUN_00426a2d((int *)((int)this + 0x24),psVar4 + 2);
          if (-1 < (int)uVar11) goto LAB_0041d423;
          pcVar12 = "Failed allocating memory";
          goto LAB_0041d4bf;
        }
        pcVar12 = "Invalid parameter %S - Package name is blank";
      }
    }
    else {
LAB_0041d63e:
      pcVar12 = "Invalid command line parameter \"%S\"";
    }
LAB_0041d514:
    uVar11 = 0x80070057;
LAB_0041d51e:
    FUN_00424d95(0x4000000,uVar11,'\x01',pcVar12);
    goto LAB_0041d65b;
  }
  uVar11 = 1;
  goto LAB_0041d66e;
code_r0x0041d43a:
  iVar10 = *(int *)((int)this + 0x4c) + *(int *)((int)this + 0x50);
  if (((*(int *)((int)this + 0x74) + *(int *)((int)this + 0x78) + iVar10 < 2) &&
      (uVar9 = (uint)(*(int *)((int)this + 0x7c) != 0), (int)(uVar9 + iVar10) < 2)) &&
     (uVar9 + *(int *)((int)this + 0x74) + *(int *)((int)this + 0x78) + iVar10 != 0)) {
    if (((*(int *)((int)this + 0x50) != 0) && (*(int *)((int)this + 0x38) == 0)) &&
       (piVar1 = (int *)((int)this + 0x24), *piVar1 != 0)) {
      uVar11 = FUN_0041d7ee((void *)((int)this + 0x2c),piVar1);
      if ((int)uVar11 < 0) {
        pcVar12 = "Failed to add a value to the package uninstall list";
        goto LAB_0041d4bf;
      }
      *piVar1 = 0;
    }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    if (((*(int *)((int)this + 0x4c) == 0) || (*this != 0)) &&
       ((*(int *)((int)this + 0x50) == 0 || ((*(int *)((int)this + 0x38) != 0 || (*this != 0)))))) {
      if ((*(int *)((int)this + 0x4c) < 1) || (*(int *)((int)this + 0x24) == 0)) goto LAB_0041d65b;
      pcVar12 = "Error: /p: is not used for the requested operation";
    }
    else {
      pcVar12 = "Invalid parameter - package missing";
    }
    uVar11 = 0x80070057;
    FUN_00424d95(0x4000000,0x80070057,'\x01',pcVar12);
  }
  else {
    pcVar12 = "Error: Only one operation is supported at a time";
    uVar11 = 0x80070057;
LAB_0041d4bf:
    FUN_00424d95(0x4000000,uVar11,'\x01',pcVar12);
  }
LAB_0041d65b:
  if (local_c != (wchar_t *)0x0) {
    FUN_00426b01((int)local_c);
  }
  if (uVar11 != 1) {
    return uVar11;
  }
LAB_0041d66e:
  FUN_0041ff35((HWND)0x0,0xea61,60000,0x40);
  return uVar11;
}



/* Function: FUN_0041d692 */

uint FUN_0041d692(wchar_t *param_1,void *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  wchar_t *local_c;
  int local_8;
  
  local_8 = 0;
  uVar3 = 0;
  if (param_1 != (wchar_t *)0x0) {
    while (*param_1 != L'\0') {
      local_c = wcschr(param_1,L';');
      if (local_c != (wchar_t *)0x0) {
        *local_c = L'\0';
        local_c = local_c + 1;
      }
      if (param_3 == 0) {
        uVar3 = FUN_0041d763(param_2,param_1);
        iVar2 = 0;
        if ((int)uVar3 < 0) {
LAB_0041d724:
          pcVar1 = "Failed to add a value to the option array";
LAB_0041d729:
          FUN_00424d95(0x4000000,uVar3,'\x01',pcVar1);
          if (iVar2 == 0) {
            return uVar3;
          }
          FUN_00426b01(iVar2);
          return uVar3;
        }
      }
      else {
        uVar3 = FUN_0041dda0(&local_8,param_1);
        if ((int)uVar3 < 0) {
          pcVar1 = "Failed getting full path";
          iVar2 = local_8;
          goto LAB_0041d729;
        }
        uVar3 = FUN_0041d7ee(param_2,&local_8);
        iVar2 = local_8;
        if ((int)uVar3 < 0) goto LAB_0041d724;
        local_8 = 0;
      }
      param_1 = local_c;
      if (local_c == (wchar_t *)0x0) {
        return uVar3;
      }
    }
  }
  return uVar3;
}



/* Function: FUN_0041d763 */

uint __thiscall FUN_0041d763(void *this,short *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (param_1 == (short *)0x0) {
    FUN_00424d95(0x4000000,0x80070057,'\x01',"No string specified");
    return 0x80070057;
  }
  uVar1 = FUN_00426a2d(&local_8,param_1);
  if ((int)uVar1 < 0) {
    pcVar3 = "Failed to duplicate sz";
  }
  else {
    uVar1 = FUN_0041d7ee(this,&local_8);
    if (-1 < (int)uVar1) goto LAB_0041d7d4;
    pcVar3 = "Failed to add the new string";
  }
  FUN_00424d95(0x4000000,uVar1,'\x01',pcVar3);
  iVar2 = local_8;
LAB_0041d7d4:
  if (iVar2 != 0) {
    FUN_00426b01(iVar2);
  }
  return uVar1;
}



/* Function: FUN_0041d7ee */

uint __thiscall FUN_0041d7ee(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0041d9a1(this,param_1,*(uint *)((int)this + 0xc));
  if ((int)uVar1 < 0) {
    FUN_00424d95(0x4000000,uVar1,'\x01',"Failed adding element to cbs array");
  }
  return uVar1;
}



/* Function: FUN_0041d827 */

undefined4 __thiscall FUN_0041d827(void *this,uint param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  
  uVar6 = *(uint *)((int)this + 0xc);
  if (uVar6 < param_1) {
    FUN_00424d95(0x4000000,0x80070057,'\x01',
                 "Index of element to insert exceeds the number of elements.");
    return 0x80070057;
  }
  puVar2 = *(undefined1 **)((int)this + 0x14);
  if (puVar2 == (undefined1 *)0x0) {
    if (uVar6 != 0) {
      FUN_00424d95(0x4000000,0x80070057,'\x01',
                   "Array is invalid; expected %zu elements, but found none");
      return 0x80070057;
    }
    uVar6 = *(uint *)((int)this + 0x10);
    if ((uVar6 == 0) || (0xfffffff < uVar6)) {
      uVar6 = 8;
      *(undefined4 *)((int)this + 0x10) = 8;
    }
    puVar2 = (undefined1 *)o_malloc(uVar6 << 2);
    *(undefined1 **)((int)this + 0x14) = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
      for (iVar3 = *(int *)((int)this + 0x10) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      goto LAB_0041d98f;
    }
LAB_0041d90a:
    pcVar7 = "On allocating cbs array";
    uVar5 = 0x8007000e;
    uVar6 = 0x8007000e;
LAB_0041d919:
    FUN_00424d95(0x4000000,uVar6,'\x01',pcVar7);
    return uVar5;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 <= uVar6) {
    if (0xfffffff < uVar1 * 2) {
      pcVar7 = "Array size too big";
      uVar5 = 0x800288c5;
      uVar6 = 0x800288c5;
      goto LAB_0041d919;
    }
    puVar2 = (undefined1 *)o_malloc(uVar1 << 3);
    if (puVar2 == (undefined1 *)0x0) goto LAB_0041d90a;
    puVar4 = puVar2;
    for (iVar3 = uVar1 << 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    if (*(int *)((int)this + 0x14) != 0) {
      memcpy(puVar2,*(void **)((int)this + 0x14),*(int *)((int)this + 0x10) << 2);
      o_free(*(undefined4 *)((int)this + 0x14));
    }
    *(undefined1 **)((int)this + 0x14) = puVar2;
    *(uint *)((int)this + 0x10) = uVar1 * 2;
  }
  if (param_1 < *(uint *)((int)this + 0xc)) {
    memmove(puVar2 + param_1 * 4 + 4,puVar2 + param_1 * 4,(*(uint *)((int)this + 0xc) - param_1) * 4
           );
  }
LAB_0041d98f:
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return 0;
}



/* Function: FUN_0041d9a1 */

uint __thiscall FUN_0041d9a1(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0041d827(this,param_2);
  if ((int)uVar1 < 0) {
    FUN_00424d95(0x4000000,uVar1,'\x01',"Failed inserting element io cbs array");
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x14) + param_2 * 4) = *param_1;
  }
  return uVar1;
}



/* Function: FUN_0041d9f0 */

undefined4 * __thiscall FUN_0041d9f0(void *this,byte param_1)

{
  FUN_0041da1a((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00434314(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0041da1a */

void __fastcall FUN_0041da1a(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_00401018;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = &PTR_FUN_00401028;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x18;
  iVar1 = param_1[5];
  for (uVar2 = 0; (iVar1 != 0 && (uVar2 < (uint)param_1[3])); uVar2 = uVar2 + 1) {
    iVar1 = *(int *)(iVar1 + uVar2 * 4);
    if (iVar1 != 0) {
      FUN_00426b01(iVar1);
    }
    iVar1 = param_1[5];
  }
  o_free(iVar1);
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0041dc86(param_1);
  return;
}



/* Function: FUN_0041da90 */

void FUN_0041da90(int param_1,void *param_2,int *param_3)

{
  FUN_0041db1e((param_1 - *(int *)(param_1 + -4)) + -0xc,param_2,param_3);
  return;
}



/* Function: FUN_0041dab0 */

void FUN_0041dab0(int param_1)

{
  FUN_0041dc16((param_1 - *(int *)(param_1 + -4)) + -0xc);
  return;
}



/* Function: FUN_0041dad0 */

undefined4 * __thiscall FUN_0041dad0(void *this,byte param_1)

{
  FUN_0041dc86((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00434314(this);
  }
  return (undefined4 *)this;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_0041db10 */

undefined4 FUN_0041db10(void)

{
  return 0x80004002;
}



/* Function: FUN_0041db1e */

undefined4 FUN_0041db1e(int param_1,void *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_3 == (int *)0x0) {
    FUN_00424d95(0x4000000,0x80004003,'\x01',"Invalid pointer ppvObject");
    return 0x80004003;
  }
  *param_3 = 0;
  iVar2 = memcmp(&DAT_00401480,param_2,0x10);
  piVar3 = (int *)(param_1 + -0x10);
  if (iVar2 == 0) {
    if (piVar3 == (int *)0x0) goto LAB_0041dbd4;
    iVar2 = *(int *)(*(int *)(param_1 + -0xc) + 4) + -0xc + param_1;
  }
  else {
    iVar2 = 0;
    do {
      if ((&DAT_00401da4)[iVar2] != *(int *)((int)param_2 + iVar2 * 4)) goto LAB_0041dbd4;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    if (piVar3 == (int *)0x0) goto LAB_0041dbd4;
    iVar2 = *(int *)(*(int *)(param_1 + -0xc) + 4) + 4 + (int)piVar3;
  }
  if (iVar2 != 0) {
    piVar3 = (int *)(*(int *)(*(int *)(param_1 + -0xc) + 4) + param_1 + -0xc);
    pcVar1 = *(code **)(*piVar3 + 4);
    (*(code *)PTR_guard_check_icall_00437340)(piVar3);
    (*pcVar1)();
    *param_3 = iVar2;
    return 0;
  }
LAB_0041dbd4:
  pcVar1 = *(code **)(*piVar3 + 0xc);
  (*(code *)PTR_guard_check_icall_00437340)(param_2,param_3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



/* Function: FUN_0041dc00 */

void FUN_0041dc00(int param_1,void *param_2,int *param_3)

{
  FUN_0041db1e(param_1 - *(int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_0041dc16 */

int FUN_0041dc16(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(int *)(param_1 + -0x10) + 4);
  (*(code *)PTR_guard_check_icall_00437340)();
  (*pcVar3)();
  LOCK();
  piVar1 = (int *)(param_1 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* Function: FUN_0041dc50 */

void FUN_0041dc50(int param_1)

{
  FUN_0041dc16(param_1 - *(int *)(param_1 + -4));
  return;
}



/* Function: FUN_0041dc70 */

void FUN_0041dc70(int param_1)

{
  FUN_0041dcad(param_1 - *(int *)(param_1 + -4));
  return;
}



/* Function: FUN_0041dc86 */

void __fastcall FUN_0041dc86(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401034;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = &PTR_FUN_00401044;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0xc;
  return;
}



/* Function: FUN_0041dcad */

int FUN_0041dcad(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + -0x10);
  pcVar3 = *(code **)(*piVar1 + 8);
  (*(code *)PTR_guard_check_icall_00437340)();
  (*pcVar3)();
  LOCK();
  piVar2 = (int *)(param_1 + -8);
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  iVar4 = iVar4 + -1;
  if (iVar4 < 1) {
    if (piVar1 != (int *)0x0) {
      pcVar3 = *(code **)*piVar1;
      (*(code *)PTR_guard_check_icall_00437340)(1);
      (*pcVar3)();
    }
    iVar4 = 0;
  }
  return iVar4;
}



/* Function: FUN_0041dd00 */

void FUN_0041dd00(int param_1)

{
  FUN_0041dcad((param_1 - *(int *)(param_1 + -4)) + -0xc);
  return;
}



/* Function: FUN_0041dd19 */

undefined4 * __fastcall FUN_0041dd19(undefined4 *param_1)

{
  param_1[1] = &DAT_00401d80;
  *param_1 = &PTR_FUN_00401034;
  param_1[7] = &PTR_FUN_00401044;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0xc;
  *param_1 = &PTR_FUN_00401018;
  param_1[2] = 1;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = &PTR_FUN_00401028;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x18;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 8;
  *param_1 = &PTR_FUN_00401018;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = &PTR_FUN_00401028;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



/* Function: FUN_0041dda0 */

void __fastcall FUN_0041dda0(int *param_1,LPCWSTR param_2)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  LPWSTR pWVar4;
  char *pcVar5;
  LPCWSTR local_14;
  LPWSTR local_10;
  LPWSTR local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  pWVar4 = (LPWSTR)0x0;
  local_c = (LPWSTR)0x0;
  local_14 = (LPCWSTR)0x0;
  local_10 = (LPWSTR)0x0;
  uVar1 = FUN_0041decf(&local_14,param_2);
  uVar3 = 0x104;
  if ((int)uVar1 < 0) {
    pcVar5 = "Failed expanding string: %S";
LAB_0041dde3:
    FUN_00424d95(0x4000000,uVar1,'\x01',pcVar5);
  }
  else {
    while (uVar1 = FUN_00426338((int *)&local_10,uVar3), pWVar4 = local_10, -1 < (int)uVar1) {
      DVar2 = GetFullPathNameW(local_14,uVar3,local_10,&local_c);
      if (DVar2 == 0) {
        DVar2 = GetLastError();
        uVar3 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar3 = DVar2;
        }
        if (-1 < (int)uVar3) {
          uVar3 = 0x80004005;
        }
        FUN_00424d95(0x4000000,uVar3,'\x01',"Failed getting the full path name");
        goto LAB_0041de52;
      }
      if (DVar2 <= uVar3) {
        uVar1 = FUN_00426a2d(param_1,pWVar4);
        if (-1 < (int)uVar1) goto LAB_0041de52;
        pcVar5 = "Failed allocating memory for full directory path %S";
        goto LAB_0041dde3;
      }
      uVar3 = DVar2;
      if (pWVar4 != (LPWSTR)0x0) {
        FUN_00426b01((int)pWVar4);
        local_10 = (LPWSTR)0x0;
      }
    }
    FUN_00424d95(0x4000000,uVar1,'\x01',"Failed allocating buffer for path expansion");
    pWVar4 = local_10;
  }
LAB_0041de52:
  if (local_14 != (LPCWSTR)0x0) {
    FUN_00426b01((int)local_14);
  }
  if (pWVar4 != (LPWSTR)0x0) {
    FUN_00426b01((int)pWVar4);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041decf */

uint __fastcall FUN_0041decf(undefined4 *param_1,LPCWSTR param_2)

{
  WCHAR WVar1;
  uint uVar2;
  DWORD DVar3;
  LPCWSTR pWVar4;
  uint nSize;
  LPWSTR pWVar5;
  LPWSTR local_8;
  
  local_8 = (LPWSTR)0x0;
  pWVar4 = param_2;
  do {
    WVar1 = *pWVar4;
    pWVar4 = pWVar4 + 1;
  } while (WVar1 != L'\0');
  nSize = ((int)pWVar4 - (int)(param_2 + 1) >> 1) + 1;
  uVar2 = FUN_00426338((int *)&local_8,nSize);
  do {
    pWVar5 = local_8;
    if ((int)uVar2 < 0) {
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for expand string: %S");
      pWVar5 = local_8;
LAB_0041df62:
      if (pWVar5 != (LPWSTR)0x0) {
        FUN_00426b01((int)pWVar5);
      }
      return uVar2;
    }
    DVar3 = ExpandEnvironmentStringsW(param_2,local_8,nSize);
    if (DVar3 == 0) {
      DVar3 = GetLastError();
      uVar2 = DVar3 & 0xffff | 0x80070000;
      if ((int)DVar3 < 1) {
        uVar2 = DVar3;
      }
      if (-1 < (int)uVar2) {
        uVar2 = 0x80004005;
      }
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed expanding string: %S");
      goto LAB_0041df62;
    }
    if (DVar3 <= nSize) {
      *param_1 = pWVar5;
      pWVar5 = (LPWSTR)0x0;
      goto LAB_0041df62;
    }
    if (pWVar5 != (LPWSTR)0x0) {
      FUN_00426b01((int)pWVar5);
      local_8 = (LPWSTR)0x0;
    }
    uVar2 = FUN_00426338((int *)&local_8,DVar3);
    nSize = DVar3;
  } while( true );
}



/* Function: FUN_0041dfb8 */

void __fastcall FUN_0041dfb8(int *param_1)

{
  DWORD DVar1;
  wchar_t *pwVar2;
  uint uVar3;
  char *pcVar4;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  memset(local_210,0,0x208);
  *param_1 = 0;
  DVar1 = GetModuleFileNameW((HMODULE)0x0,local_210,0x104);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    pcVar4 = "Failed getting module location";
    uVar3 = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      uVar3 = DVar1;
    }
    if (-1 < (int)uVar3) {
      uVar3 = 0x80004005;
    }
  }
  else if (DVar1 < 0x104) {
    pwVar2 = wcsrchr(local_210,L'\\');
    if (pwVar2 != (wchar_t *)0x0) {
      *pwVar2 = L'\0';
    }
    uVar3 = FUN_00426a2d(param_1,local_210);
    if (-1 < (int)uVar3) goto LAB_0041e093;
    pcVar4 = "Failed allocating memory";
  }
  else {
    DVar1 = GetLastError();
    pcVar4 = "Failed getting module location - path too long";
    uVar3 = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      uVar3 = DVar1;
    }
    if (-1 < (int)uVar3) {
      uVar3 = 0x80004005;
    }
  }
  FUN_00424d95(0x4000000,uVar3,'\x01',pcVar4);
LAB_0041e093:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041e0a9 */

void __fastcall
FUN_0041e0a9(short *param_1,int param_2,size_t *param_3,undefined4 param_4,undefined4 *param_5)

{
  size_t sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  size_t *_Dst;
  char *unaff_EDI;
  uint uVar8;
  char cVar9;
  char *pcVar10;
  undefined8 local_418;
  short local_410;
  undefined1 local_40e [1026];
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)&stack0xfffffffc;
  _Dst = (size_t *)0x0;
  local_418 = 0;
  memset(&local_410,0,0x400);
  if (param_1 == (short *)0x0) {
    cVar9 = ' ';
LAB_0041e10c:
    uVar8 = 1;
  }
  else {
    if (param_2 == 0) {
      cVar9 = '8';
      goto LAB_0041e10c;
    }
    if (param_3 == (size_t *)0x0) {
      cVar9 = 'T';
      goto LAB_0041e10c;
    }
    GetCurrentProcessId();
    uVar8 = FUN_0041e721(&local_410,0x200,L"%s%ld");
    if (-1 < (int)uVar8) {
      psVar5 = &local_410;
      do {
        sVar2 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar2 != 0);
      iVar6 = (int)psVar5 - (int)local_40e >> 1;
      psVar5 = param_1;
      do {
        sVar2 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar2 != 0);
      uVar8 = ((int)psVar5 - (int)(param_1 + 1) >> 1) + 1;
      sVar1 = (uVar8 + iVar6) * 2 + 0x7a;
      _Dst = (size_t *)FUN_00433fd7(sVar1);
      if (_Dst != (size_t *)0x0) {
        memset(_Dst,0,sVar1);
        *_Dst = sVar1;
        _Dst[0xb] = 0x20000;
        _Dst[10] = 1;
        sVar1 = iVar6 * 2 + 0x7a;
        _Dst[6] = *param_3;
        _Dst[7] = param_3[1];
        _Dst[8] = param_3[2];
        _Dst[9] = param_3[3];
        _Dst[0x10] = 0x1000004;
        _Dst[0x1c] = 0x78;
        _Dst[0x1b] = sVar1;
        FUN_0041e6b4((short *)(sVar1 + (int)_Dst),uVar8,(int)param_1);
        uVar8 = StartTraceW(&local_418,&local_410,_Dst);
        if ((uVar8 == 0xb7) || (uVar8 == 0x20)) {
          *param_5 = 0;
          param_5[1] = 0;
        }
        else {
          if (uVar8 == 0) {
            uVar8 = EnableTrace(1,0x1f,param_4,param_3,(int)local_418,local_418._4_4_);
            if (uVar8 == 0) {
              uVar3 = (int)local_418;
              uVar4 = local_418._4_4_;
              local_418 = 0;
              *param_5 = uVar3;
              param_5[1] = uVar4;
              goto LAB_0041e2dd;
            }
            pcVar10 = "Enable cbs trace failed";
          }
          else {
            pcVar10 = "Start trace failed";
          }
          uVar7 = uVar8 & 0xffff | 0x80070000;
          if ((int)uVar8 < 1) {
            uVar7 = uVar8;
          }
          FUN_00424d95(0x4000000,uVar7,'\x01',pcVar10);
        }
LAB_0041e2dd:
        o_free(_Dst);
        goto LAB_0041e2e4;
      }
      uVar8 = 0x8007000e;
      unaff_EDI = "Failed to allocate memory for event trace properties";
    }
    cVar9 = '\x01';
  }
  FUN_00424d95(0x4000000,uVar8,cVar9,unaff_EDI);
LAB_0041e2e4:
  if ((int)local_418 != 0 || local_418._4_4_ != 0) {
    ControlTraceW(0,0,&local_410,_Dst,1);
    CloseTrace((int)local_418,local_418._4_4_);
  }
  FUN_00434300(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041e331 */

uint __thiscall FUN_0041e331(void *this,int param_1,int param_2)

{
  undefined4 *_Dst;
  uint uVar1;
  char *unaff_EDI;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  
  uVar1 = 0;
  if ((param_1 == 0) && (param_2 == 0)) {
    cVar4 = '\f';
  }
  else {
    if (this != (void *)0x0) {
      _Dst = (undefined4 *)FUN_00433fd7(0x1078);
      if (_Dst != (undefined4 *)0x0) {
        memset(_Dst,0,0x1078);
        *_Dst = 0x1078;
        _Dst[0x1c] = 0x78;
        _Dst[0x1b] = 0x878;
        uVar3 = EnableTrace(0,0,0,this,param_1,param_2);
        if (uVar3 == 0) {
          uVar3 = ControlTraceW(param_1,param_2,0,_Dst,1);
          if (uVar3 == 0) goto LAB_0041e408;
          pcVar2 = "Stop trace failed";
        }
        else {
          pcVar2 = "Disable cbs trace failed";
        }
        uVar1 = uVar3 & 0xffff | 0x80070000;
        if ((int)uVar3 < 1) {
          uVar1 = uVar3;
        }
        FUN_00424d95(0x4000000,uVar1,'\x01',pcVar2);
LAB_0041e408:
        o_free(_Dst);
        return uVar1;
      }
      unaff_EDI = "Failed to allocate memory for event trace properties";
      uVar1 = 0x8007000e;
      cVar4 = '\x01';
      uVar3 = 0x8007000e;
      goto LAB_0041e356;
    }
    cVar4 = 'T';
  }
  uVar3 = 1;
  uVar1 = 0x80070057;
LAB_0041e356:
  FUN_00424d95(0x4000000,uVar3,cVar4,unaff_EDI);
  return uVar1;
}



/* Function: FUN_0041e41e */

void __fastcall FUN_0041e41e(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  short *psVar7;
  char *pcVar8;
  undefined1 auStack_424 [4];
  short *local_420;
  undefined4 *local_41c;
  int local_418;
  short *local_414;
  WCHAR local_410 [514];
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)auStack_424;
  local_420 = (short *)0x0;
  memset(local_410,0,0x400);
  if (param_1 == 0) {
    pcVar8 = "No config specified";
  }
  else {
    local_414 = *(short **)(param_1 + 0x80);
    if (local_414 != (short *)0x0) {
      uVar6 = (uint)(*(int *)(param_1 + 0x84) != 0);
      if (*(int *)(param_1 + 0x94) == 2) {
        local_418 = *(int *)(*(int *)(param_1 + 0x9c) + 4);
      }
      else {
        local_418 = 0;
      }
      local_41c = &DAT_00436030 + uVar6 * 10;
      do {
        uVar2 = FUN_00426a2d((int *)&local_420,local_414);
        if ((int)uVar2 < 0) {
          pcVar8 = "Failed allocating log file name: %S";
LAB_0041e62b:
          FUN_00424d95(0x4000000,uVar2,'\x01',pcVar8);
          psVar7 = local_420;
          goto LAB_0041e63f;
        }
        if ((local_418 != 0) &&
           (uVar2 = FUN_00426574((int *)&local_420,L".bootstrap"), (int)uVar2 < 0)) {
          pcVar8 = "Failed adding bootstrap log file name marker: %S";
          goto LAB_0041e62b;
        }
        puVar1 = local_41c;
        if (((short *)local_41c[2] != (short *)0x0) &&
           (uVar2 = FUN_00426574((int *)&local_420,(short *)local_41c[2]), (int)uVar2 < 0)) {
          pcVar8 = "Failed adding log file name extension: %S";
          goto LAB_0041e62b;
        }
        psVar7 = local_420;
        uVar2 = FUN_0041e0a9(local_420,puVar1[-2],puVar1 + 3,puVar1[7],puVar1);
        if ((int)uVar2 < 0) {
          FUN_00424d95(0x4000000,uVar2,'\x01',"Failed enabling tracing to file: %S");
        }
        if (psVar7 != (short *)0x0) {
          FUN_00426b01((int)psVar7);
          psVar7 = (short *)0x0;
          local_420 = (short *)0x0;
        }
        local_41c = local_41c + 10;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 2);
      if (local_418 != 0) {
        DVar3 = FUN_0041e721(local_410,0x200,L"%s.txt");
        if ((int)DVar3 < 0) {
          pcVar8 = "Failed creating the offline CBS text log file name: %S.txt";
        }
        else {
          BVar4 = SetEnvironmentVariableW(L"COMPONENT_BASED_SERVICING_LOGFILE",local_410);
          DVar3 = 0;
          if (BVar4 == 0) {
            DVar5 = GetLastError();
            DVar3 = DVar5 & 0xffff | 0x80070000;
            if ((int)DVar5 < 1) {
              DVar3 = DVar5;
            }
          }
          if (-1 < (int)DVar3) {
            DVar3 = GetEnvironmentVariableW(L"WINDOWS_TRACING_LOGFILE",(LPWSTR)0x0,0);
            if (DVar3 == 0) {
              SetEnvironmentVariableW(L"WINDOWS_TRACING_LOGFILE",local_410);
            }
            goto LAB_0041e63f;
          }
          pcVar8 = "Failed setting offline CBS text log file name: %S";
        }
        FUN_00424d95(0x4000000,DVar3,'\x01',pcVar8);
      }
LAB_0041e63f:
      if (psVar7 != (short *)0x0) {
        FUN_00426b01((int)psVar7);
      }
      goto LAB_0041e64a;
    }
    pcVar8 = "Config does not define filename";
  }
  FUN_00424d95(0x4000000,0x80070057,'\x01',pcVar8);
LAB_0041e64a:
  FUN_00434300(local_c ^ (uint)auStack_424);
  return;
}



/* Function: FUN_0041e667 */

void FUN_0041e667(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_00436030 + uVar1) != 0 || *(int *)((int)&DAT_00436034 + uVar1) != 0) {
      FUN_0041e331(&DAT_0043603c + uVar1,*(int *)((int)&DAT_00436030 + uVar1),
                   *(int *)((int)&DAT_00436034 + uVar1));
      *(undefined4 *)((int)&DAT_00436030 + uVar1) = 0;
      *(undefined4 *)((int)&DAT_00436034 + uVar1) = 0;
    }
    uVar1 = uVar1 + 0x28;
  } while (uVar1 < 0x50);
  return;
}



/* Function: FUN_0041e6b4 */

undefined4 __fastcall FUN_0041e6b4(short *param_1,uint param_2,int param_3)

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



/* Function: FUN_0041e721 */

undefined4 __cdecl FUN_0041e721(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar3 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = param_2 - 1;
    uVar3 = 0;
    uVar2 = FUN_00435052(param_1,uVar1,param_3,&stack0x00000010);
    if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
      uVar3 = 0x8007007a;
    }
    else if (uVar2 != uVar1) {
      return 0;
    }
    param_1[uVar1] = 0;
  }
  return uVar3;
}



/* Function: FUN_0041e784 */

void __fastcall FUN_0041e784(DWORD param_1,undefined4 *param_2)

{
  DWORD DVar1;
  uint uVar2;
  HLOCAL local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_c = (HLOCAL)0x0;
  DVar1 = FormatMessageW(0x1300,(LPCVOID)0x0,param_1,0x400,(LPWSTR)&local_c,0,(va_list *)0x0);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    uVar2 = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      uVar2 = DVar1;
    }
    if (-1 < (int)uVar2) {
      uVar2 = 0x80004005;
    }
    FUN_00424d95(0x4000000,uVar2,'\x01',"Failed getting error message");
  }
  else {
    *param_2 = local_c;
    local_c = (HLOCAL)0x0;
  }
  if (local_c != (HLOCAL)0x0) {
    LocalFree(local_c);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041e81d */

void __fastcall FUN_0041e81d(undefined4 param_1,int param_2)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  DWORD DesiredAccess;
  HANDLE *TokenHandle;
  char *pcVar4;
  HANDLE local_24;
  _TOKEN_PRIVILEGES local_20;
  _LUID local_10;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_20.PrivilegeCount = 0;
  local_10.LowPart = 0;
  local_10.HighPart = 0;
  local_24 = (HANDLE)0x0;
  local_20.Privileges[0].Luid.LowPart = 0;
  local_20.Privileges[0].Luid.HighPart = 0;
  local_20.Privileges[0].Attributes = 0;
  TokenHandle = &local_24;
  DesiredAccess = 0x28;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
    pcVar4 = "Failed opening the process token";
  }
  else {
    BVar1 = LookupPrivilegeValueW((LPCWSTR)0x0,L"SeShutdownPrivilege",&local_10);
    if (BVar1 == 0) {
      uVar2 = GetLastError();
      pcVar4 = "Failed looking up the privilege";
    }
    else {
      local_20.Privileges[0].Luid.LowPart = local_10.LowPart;
      local_20.PrivilegeCount = 1;
      local_20.Privileges[0].Luid.HighPart = local_10.HighPart;
      local_20.Privileges[0].Attributes = -(uint)(param_2 != 0) & 2;
      BVar1 = AdjustTokenPrivileges(local_24,0,&local_20,0x10,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
      if (BVar1 != 0) goto LAB_0041e8f5;
      uVar2 = GetLastError();
      pcVar4 = "Failed adjusting token privilege";
    }
  }
  uVar3 = uVar2 & 0xffff | 0x80070000;
  if ((int)uVar2 < 1) {
    uVar3 = uVar2;
  }
  if (-1 < (int)uVar3) {
    uVar3 = 0x80004005;
  }
  FUN_00424d95(0x4000000,uVar3,'\x01',pcVar4);
LAB_0041e8f5:
  if ((local_24 != (HANDLE)0x0) && (local_24 != (HANDLE)0xffffffff)) {
    CloseHandle(local_24);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041e91f */

uint __fastcall FUN_0041e91f(undefined4 param_1)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  
  uVar1 = FUN_0041e81d(param_1,1);
  if ((int)uVar1 < 0) {
    FUN_00424d95(0x4000000,uVar1,'\x01',"Failed enabling shutdown privilege");
  }
  else {
    BVar2 = InitiateSystemShutdownExW((LPWSTR)0x0,(LPWSTR)0x0,0,0,1,0x80020003);
    uVar5 = extraout_ECX;
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      uVar1 = DVar3 & 0xffff | 0x80070000;
      if ((int)DVar3 < 1) {
        uVar1 = DVar3;
      }
      FUN_00424d95(0x4000000,uVar1,'\x01',"Failed restart attempt.");
      uVar5 = extraout_ECX_00;
    }
    uVar4 = FUN_0041e81d(uVar5,0);
    if ((int)uVar4 < 0) {
      FUN_00424d95(0x4000000,uVar4,'\x01',"Failed disabling shutdown privilege");
    }
  }
  return uVar1;
}



/* Function: FUN_0041e9b0 */

uint __fastcall FUN_0041e9b0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  char *pcVar3;
  int local_8;
  
  local_8 = 1;
  *param_4 = 0;
  if (param_2 != 0) {
    return 0;
  }
  if (param_3 == 0) {
    uVar1 = FUN_00420093(param_1,&local_8);
    if ((int)uVar1 < 0) {
      pcVar3 = "Failed asking user if it was ok to restart the computer";
      goto LAB_0041e9e2;
    }
    param_1 = extraout_ECX;
    if (local_8 == 0) {
      return uVar1;
    }
  }
  while ((uVar2 = FUN_0041e91f(param_1), uVar2 == 0x800704f7 || (uVar2 == 0x80070015))) {
    Sleep(3000);
    param_1 = extraout_ECX_00;
  }
  uVar1 = 0;
  if (uVar2 != 0x8007045b) {
    uVar1 = uVar2;
  }
  if (-1 < (int)uVar1) {
    *param_4 = 1;
    return uVar1;
  }
  pcVar3 = "Failed restarting the computer";
LAB_0041e9e2:
  FUN_00424d95(0x4000000,uVar1,'\x01',pcVar3);
  return uVar1;
}



/* Function: FUN_0041ea3f */

uint __fastcall FUN_0041ea3f(int *param_1)

{
  uint uVar1;
  short *local_8;
  
  local_8 = (short *)0x0;
  uVar1 = FUN_00426851((int *)&local_8,L" /add-package /packagepath:\"%s\" /ignorecheck");
  if (-1 < (int)uVar1) {
    uVar1 = FUN_00426574(param_1,local_8);
    if (-1 < (int)uVar1) goto LAB_0041ea8a;
  }
  FUN_00424d95(0x4000000,uVar1,'\x01',"Failed to allocate memory for command line.");
LAB_0041ea8a:
  if (local_8 != (short *)0x0) {
    FUN_00426b01((int)local_8);
  }
  return uVar1;
}



/* Function: FUN_0041eaa4 */

uint __fastcall FUN_0041eaa4(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  short *local_8;
  
  uVar3 = 0;
  psVar4 = (short *)0x0;
  local_8 = (short *)0x0;
  uVar2 = FUN_00426574(param_1,L" /remove-package");
  if ((int)uVar2 < 0) {
    FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
    return uVar2;
  }
  if (param_2 != 0) {
    uVar2 = FUN_00426851((int *)&local_8,L" /packagepath:\"%s\"");
    psVar4 = local_8;
    if ((int)uVar2 < 0) {
LAB_0041eb7e:
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
      psVar4 = local_8;
      goto LAB_0041eb96;
    }
    uVar2 = FUN_00426574(param_1,local_8);
    if ((int)uVar2 < 0) {
LAB_0041eb1a:
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
      goto LAB_0041eb96;
    }
  }
  if (*(int *)(param_3 + 0xc) != 0) {
    if (*(int *)(param_3 + 0xc) == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    do {
      uVar2 = FUN_00426851((int *)&local_8,L" /packagename:\"%s\"");
      psVar4 = local_8;
      if ((int)uVar2 < 0) goto LAB_0041eb7e;
      uVar2 = FUN_00426574(param_1,local_8);
      if ((int)uVar2 < 0) goto LAB_0041eb1a;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0xc));
  }
LAB_0041eb96:
  if (psVar4 != (short *)0x0) {
    FUN_00426b01((int)psVar4);
  }
  return uVar2;
}



/* Function: FUN_0041ebb0 */

uint __fastcall FUN_0041ebb0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  wchar_t *pwVar3;
  uint uVar4;
  short *psVar5;
  short *local_8;
  
  psVar5 = (short *)0x0;
  local_8 = (short *)0x0;
  if (param_5 == 0) {
    pwVar3 = L" /disable-feature";
  }
  else {
    pwVar3 = L" /enable-feature /ignorecheck";
  }
  uVar2 = FUN_00426574(param_1,pwVar3);
  if ((int)uVar2 < 0) {
    FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
    return uVar2;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      pwVar3 = L" /packagename:\"%s\"";
      goto LAB_0041ec0b;
    }
  }
  else {
    pwVar3 = L" /packagepath:\"%s\"";
LAB_0041ec0b:
    uVar2 = FUN_00426851((int *)&local_8,pwVar3);
    psVar5 = local_8;
    if ((int)uVar2 < 0) {
LAB_0041eccb:
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
      psVar5 = local_8;
      goto LAB_0041ece3;
    }
    uVar2 = FUN_00426574(param_1,local_8);
    if ((int)uVar2 < 0) {
LAB_0041ec33:
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
      goto LAB_0041ece3;
    }
    if (psVar5 != (short *)0x0) {
      FUN_00426b01((int)psVar5);
      psVar5 = (short *)0x0;
      local_8 = (short *)0x0;
    }
  }
  uVar4 = 0;
  if (*(int *)(param_4 + 0xc) != 0) {
    if (*(int *)(param_4 + 0xc) == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    do {
      uVar2 = FUN_00426851((int *)&local_8,L" /featurename:\"%s\"");
      psVar5 = local_8;
      if ((int)uVar2 < 0) goto LAB_0041eccb;
      uVar2 = FUN_00426574(param_1,local_8);
      if ((int)uVar2 < 0) goto LAB_0041ec33;
      if (psVar5 != (short *)0x0) {
        FUN_00426b01((int)psVar5);
        psVar5 = (short *)0x0;
        local_8 = (short *)0x0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_4 + 0xc));
  }
LAB_0041ece3:
  if (psVar5 != (short *)0x0) {
    FUN_00426b01((int)psVar5);
  }
  return uVar2;
}



/* Function: FUN_0041ecfd */

uint __thiscall FUN_0041ecfd(void *this,int param_1)

{
  wchar_t wVar1;
  uint uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *local_c;
  short *local_8;
  
  pwVar4 = (wchar_t *)0x0;
  local_8 = (short *)0x0;
  local_c = (wchar_t *)0x0;
  uVar2 = FUN_00426851((int *)this,L"\"%sdism.exe\"");
  if ((int)uVar2 < 0) {
    FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
    return uVar2;
  }
  if ((*(int *)(param_1 + 0x94) == 2) && (*(int *)(*(int *)(param_1 + 0x9c) + 4) != 0)) {
    uVar2 = FUN_00426a2d((int *)&local_c,*(short **)(*(int *)(param_1 + 0x9c) + 4));
    pwVar4 = local_c;
    if (-1 < (int)uVar2) {
      pwVar3 = wcsrchr(local_c,L'\\');
      if (pwVar3 == (wchar_t *)0x0) {
        uVar2 = 0x8007000d;
        FUN_00424d95(0x4000000,0x8007000d,'\x01',"Invalid image path.");
        goto LAB_0041ef00;
      }
      *pwVar3 = L'\0';
      pwVar3 = pwVar4;
      do {
        wVar1 = *pwVar3;
        pwVar3 = pwVar3 + 1;
      } while (wVar1 != L'\0');
      if ((((int)pwVar3 - (int)(pwVar4 + 1) >> 1 != 2) || (pwVar4[1] != L':')) ||
         (uVar2 = FUN_00426b14((int *)&local_c), pwVar4 = local_c, -1 < (int)uVar2)) {
        uVar2 = FUN_00426851((int *)&local_8,L" /image:\"%s\" /sysdrivedir:\"%s\"");
        if ((-1 < (int)uVar2) && (uVar2 = FUN_00426574((int *)this,local_8), -1 < (int)uVar2))
        goto LAB_0041ee4b;
        goto LAB_0041eedf;
      }
    }
    FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
    pwVar4 = local_c;
  }
  else {
    uVar2 = FUN_00426574((int *)this,L" /online");
    if ((int)uVar2 < 0) {
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
      return uVar2;
    }
LAB_0041ee4b:
    if (((((*(int *)(param_1 + 0x28) != 0) &&
          ((uVar2 = FUN_00426851((int *)&local_8,L" /scratchdir:\"%s\""), (int)uVar2 < 0 ||
           (uVar2 = FUN_00426574((int *)this,local_8), (int)uVar2 < 0)))) ||
         ((*(int *)(param_1 + 0xa8) != 0 &&
          (uVar2 = FUN_00426574((int *)this,L" /quiet"), (int)uVar2 < 0)))) ||
        (uVar2 = FUN_00426574((int *)this,L" /norestart"), (int)uVar2 < 0)) ||
       ((*(int *)(param_1 + 0x80) != 0 &&
        ((uVar2 = FUN_00426851((int *)&local_8,L" /logpath:\"%s.txt\""), (int)uVar2 < 0 ||
         (uVar2 = FUN_00426574((int *)this,local_8), (int)uVar2 < 0)))))) {
LAB_0041eedf:
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate memory for command line.");
    }
    if (local_8 != (short *)0x0) {
      FUN_00426b01((int)local_8);
    }
  }
LAB_0041ef00:
  if (pwVar4 != (wchar_t *)0x0) {
    FUN_00426b01((int)pwVar4);
  }
  return uVar2;
}



/* Function: FUN_0041ef48 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __cdecl FUN_0041ef48(int param_1,int param_2)

{
  HLOCAL hMem;
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int local_e4;
  short *local_e0;
  int local_dc;
  short *local_d8;
  HLOCAL local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8 [8];
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [8];
  int local_80;
  int local_7c;
  undefined4 local_78 [8];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44 [8];
  int local_24;
  int local_20;
  int local_1c;
  DWORD local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xd4;
  local_8 = 0x41ef57;
  FUN_0041dd19(local_c8);
  FUN_0041dd19(local_a0);
  FUN_0041dd19(local_78);
  FUN_0041dd19(local_44);
  local_cc = 0;
  local_a8 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_a4 = 0;
  local_80 = 0;
  local_7c = 0;
  local_58 = 0;
  local_54 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_8 = 0;
  local_dc = 0;
  local_e4 = 0;
  local_d4 = (HLOCAL)0x0;
  local_18[0] = 0;
  local_d8 = (short *)0x0;
  local_d0 = 0;
  local_e0 = (short *)0x0;
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  uVar1 = FUN_0041ce9d(&local_cc,param_1,param_2);
  if (uVar1 == 0) {
    if ((local_4c == 0) || (uVar2 = FUN_0041e41e((int)&local_cc), -1 < (int)uVar2)) {
      uVar2 = FUN_0041dfb8((int *)&local_d8);
      if ((int)uVar2 < 0) {
        pcVar3 = "Failed getting module location";
      }
      else {
        uVar2 = FUN_00426b14((int *)&local_d8);
        if ((int)uVar2 < 0) {
          pcVar3 = "Failed adding backslash to module path %S";
LAB_0041f072:
          FUN_00424d95(0x4000000,uVar2,'\x01',pcVar3);
          goto LAB_0041f337;
        }
        uVar1 = FUN_00424020(local_d8);
        if ((int)uVar1 < 0) {
          FUN_00424d95(0x4000000,uVar1,'\x01',
                       "Failed to load and initialize WDS, continuing without text logging support."
                      );
        }
        FUN_00424d95(0x4000000,0,'\0',&DAT_00402986);
        GetCommandLineW();
        FUN_00424d95(0x4000000,0,'\0',"pkgmgr called with: \"%S\"");
        uVar2 = FUN_0041ecfd(&local_d0,(int)&local_cc);
        if ((int)uVar2 < 0) {
          pcVar3 = "Failed to add global dism options to the command line.";
        }
        else {
          if (local_1c != 0) {
LAB_0041f22b:
            if (local_50 == 0) goto LAB_0041f301;
            uVar2 = FUN_0041ecfd(&local_d0,(int)&local_cc);
            if ((int)uVar2 < 0) {
              pcVar3 = "Failed to add global dism options to the command line.";
LAB_0041f254:
              FUN_00424d95(0x4000000,uVar2,'\x01',pcVar3);
LAB_0041f301:
              if (local_dc == 0) goto LAB_0041f333;
            }
            else {
              uVar2 = FUN_00426851((int *)&local_e0,L" /apply-unattend:\"%s\"");
              if (((int)uVar2 < 0) || (uVar2 = FUN_00426574(&local_d0,local_e0), (int)uVar2 < 0)) {
                pcVar3 = "Failed to allocate memory for command line.";
                goto LAB_0041f254;
              }
              uVar2 = FUN_0041f4e2(local_d0,&local_d4,local_18);
              if ((int)uVar2 < 0) {
                pcVar3 = "Failed to start dism.exe.";
                goto LAB_0041f254;
              }
              if (local_d4 == (HLOCAL)0x0) goto LAB_0041f301;
              if (local_18[0] != 0xbc2) {
                uVar2 = local_18[0] & 0xffff | 0x80070000;
                if ((int)local_18[0] < 1) {
                  uVar2 = local_18[0];
                }
                goto LAB_0041f301;
              }
              local_dc = 1;
              FUN_00424d95(0x4000000,0,'\0',"Dism.exe returned: ERROR_SUCCESS_REBOOT_REQUIRED");
            }
            uVar1 = FUN_0041e9b0(uVar2,local_20,local_24,&local_e4);
            if ((int)uVar1 < 0) {
              FUN_00424d95(0x4000000,uVar1,'\x01',"Failed initiate restart if needed");
            }
            goto LAB_0041f333;
          }
          if (local_80 == 0) {
            if (local_7c == 0) {
              if (local_58 == 0) {
                if (local_54 == 0) goto LAB_0041f22b;
                uVar2 = FUN_0041ebb0(&local_d0,local_cc,local_a8,(int)local_78,0);
                if (-1 < (int)uVar2) goto LAB_0041f1c7;
                pcVar3 = "Failed uninstalling selectable updates";
              }
              else {
                uVar2 = FUN_0041ebb0(&local_d0,local_cc,local_a8,(int)local_78,1);
                if (-1 < (int)uVar2) goto LAB_0041f1c7;
                pcVar3 = "Failed installing selectable updates";
              }
            }
            else {
              uVar2 = FUN_0041eaa4(&local_d0,local_cc,(int)local_a0);
              if (-1 < (int)uVar2) goto LAB_0041f1c7;
              pcVar3 = "Failed uninstalling package(s)";
            }
          }
          else {
            uVar2 = FUN_0041ea3f(&local_d0);
            if ((int)uVar2 < 0) {
              pcVar3 = "Failed installing package %S";
              goto LAB_0041f072;
            }
LAB_0041f1c7:
            uVar2 = FUN_0041f4e2(local_d0,&local_d4,local_18);
            if (-1 < (int)uVar2) {
              if (local_d4 != (HLOCAL)0x0) {
                if (local_18[0] == 0xbc2) {
                  local_dc = 1;
                  FUN_00424d95(0x4000000,0,'\0',"Dism.exe returned: ERROR_SUCCESS_REBOOT_REQUIRED");
                }
                else {
                  uVar2 = local_18[0] & 0xffff | 0x80070000;
                  if ((int)local_18[0] < 1) {
                    uVar2 = local_18[0];
                  }
                }
              }
              goto LAB_0041f22b;
            }
            pcVar3 = "Failed to start dism.exe.";
          }
        }
      }
    }
    else {
      pcVar3 = "Failed enabling tracing";
    }
    FUN_00424d95(0x4000000,uVar2,'\x01',pcVar3);
  }
  else {
    uVar2 = 0;
    if (uVar1 != 1) {
      uVar2 = uVar1;
    }
LAB_0041f333:
    if (-1 < (int)uVar2) goto LAB_0041f394;
  }
LAB_0041f337:
  if ((local_24 == 0) && (local_d4 = (HLOCAL)0x0, (uVar2 & 0x1fff0000) == 0x70000)) {
    FUN_0041e784(uVar2 & 0xffff,&local_d4);
    hMem = local_d4;
    FUN_0041ff35((HWND)0x0,0xea64,60000,0x10);
    if (hMem != (HLOCAL)0x0) {
      LocalFree(hMem);
    }
  }
LAB_0041f394:
  if (local_dc != 0) {
    if (((int)uVar2 < 0) || (uVar2 == 1)) {
      uVar2 = (local_e4 != 0) + 0x80070bc9;
    }
    else {
      uVar2 = 0x80070bc2;
    }
  }
  uVar1 = uVar2 & 0xffff;
  if ((uVar2 & 0x1fff0000) != 0x70000) {
    uVar1 = uVar2;
  }
  FUN_00424d95(0x4000000,0,'\0',"pkgmgr return code: 0x%x");
  if (local_d8 != (short *)0x0) {
    FUN_00426b01((int)local_d8);
  }
  if (local_d0 != 0) {
    FUN_00426b01(local_d0);
  }
  if (local_e0 != (short *)0x0) {
    FUN_00426b01((int)local_e0);
  }
  FUN_0041e667();
  FUN_00424c02();
  SetLastError(uVar1 & 0xffff);
  FUN_0041ce30(&local_cc);
  FUN_00435522();
  return;
}



/* Function: FUN_0041f441 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_0041f441(short *param_1,int *param_2)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  short *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x41f44d;
  pcVar1 = *(code **)(PTR_PTR_00436078 + 0xc);
  (*(code *)PTR_guard_check_icall_00437340)();
  iVar3 = (*pcVar1)();
  local_18[0] = (short *)(iVar3 + 0x10);
  *param_2 = 0;
  local_8 = 2;
  FUN_0041f96d(local_18,param_1);
  FUN_0041f7d6((int *)local_18);
  psVar2 = local_18[0];
  local_8 = 1;
  uVar4 = FUN_00426a2d(param_2,local_18[0]);
  if ((int)uVar4 < 0) {
    FUN_00424d95(0x4000000,uVar4,'\x01',"Failed to allocate memory for command line.");
    uVar4 = FUN_0041f4cc();
    return uVar4;
  }
  FUN_0041fc3e((undefined4 *)(psVar2 + -8));
  return uVar4;
}



/* Function: Catch@0041f4ba */

undefined * Catch_0041f4ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
  return &DAT_0041f4c6;
}



/* Function: FUN_0041f4cc */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0041f4cc(void)

{
  int unaff_ESI;
  
  FUN_0041fc3e((undefined4 *)(unaff_ESI + -0x10));
  return;
}



/* Function: FUN_0041f4e2 */

void __fastcall FUN_0041f4e2(short *param_1,undefined4 *param_2,LPDWORD param_3)

{
  LPPROC_THREAD_ATTRIBUTE_LIST p_Var1;
  BOOL BVar2;
  DWORD DVar3;
  LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
  uint uVar4;
  uint uVar5;
  LPWSTR lpCommandLine;
  char cVar6;
  char *pcVar7;
  undefined1 auStack_8c [4];
  LPWSTR local_88;
  LPDWORD local_84;
  int local_80;
  short *local_7c;
  undefined4 *local_78;
  ULONG_PTR local_74;
  _PROCESS_INFORMATION local_70;
  _STARTUPINFOW local_60;
  LPPROC_THREAD_ATTRIBUTE_LIST p_Stack_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)auStack_8c;
  local_84 = param_3;
  local_7c = param_1;
  local_78 = param_2;
  memset(&local_60.lpReserved,0,0x44);
  local_88 = (LPWSTR)0x0;
  local_74 = 0;
  local_70.hProcess = (HANDLE)0x0;
  lpAttributeList = (LPPROC_THREAD_ATTRIBUTE_LIST)0x0;
  local_18 = 0;
  local_14 = 0x1000;
  local_80 = 0;
  local_70.hThread = (HANDLE)0x0;
  local_60.cb = 0x48;
  local_70.dwProcessId = 0;
  local_70.dwThreadId = 0;
  BVar2 = InitializeProcThreadAttributeList((LPPROC_THREAD_ATTRIBUTE_LIST)0x0,1,0,&local_74);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    uVar4 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      uVar4 = DVar3;
    }
    if ((uVar4 != 0x8007007a) && ((int)uVar4 < 0)) goto LAB_0041f752;
    lpAttributeList = (LPPROC_THREAD_ATTRIBUTE_LIST)LocalAlloc(0x40,local_74);
    BVar2 = InitializeProcThreadAttributeList(lpAttributeList,1,0,&local_74);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      pcVar7 = "Failed to initialize ProcThreadAttributeList.";
      uVar4 = DVar3 & 0xffff | 0x80070000;
      if ((int)DVar3 < 1) {
        uVar4 = DVar3;
      }
      if (-1 < (int)uVar4) {
        uVar4 = 0x80004005;
      }
    }
    else {
      local_80 = 1;
      BVar2 = UpdateProcThreadAttribute
                        (lpAttributeList,0,0x20007,&local_18,8,(PVOID)0x0,(PSIZE_T)0x0);
      p_Var1 = lpAttributeList;
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        uVar4 = DVar3 & 0xffff | 0x80070000;
        if ((int)DVar3 < 1) {
          uVar4 = DVar3;
        }
        if (((uVar4 == 0x80070032) || (uVar4 == 0x80070018)) || (uVar4 == 0x80070057)) {
          p_Stack_1c = (LPPROC_THREAD_ATTRIBUTE_LIST)0x0;
          p_Var1 = p_Stack_1c;
        }
        else {
          p_Var1 = p_Stack_1c;
          if ((int)uVar4 < 0) {
            pcVar7 = "Failed to set mitigation policy attribute.";
            goto LAB_0041f757;
          }
        }
      }
      p_Stack_1c = p_Var1;
      uVar4 = FUN_0041f441(local_7c,(int *)&local_88);
      lpCommandLine = local_88;
      if (-1 < (int)uVar4) {
        FUN_00424d95(0x4000000,0,'\0',"Executing DISM: %S");
        BVar2 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0x8000000,(LPVOID)0x0,(LPCWSTR)0x0,
                               &local_60,&local_70);
        if (BVar2 == 0) {
          DVar3 = GetLastError();
          uVar4 = DVar3 & 0xffff | 0x80070000;
          if ((int)DVar3 < 1) {
            uVar4 = DVar3;
          }
          pcVar7 = "Could not create process with command line \"%S\"";
          if (-1 < (int)uVar4) {
            uVar4 = 0x80004005;
          }
          cVar6 = '\x01';
LAB_0041f731:
          FUN_00424d95(0x4000000,uVar4,cVar6,pcVar7);
        }
        else {
          DVar3 = WaitForSingleObject(local_70.hProcess,0xffffffff);
          if (DVar3 == 0) {
            *local_78 = 1;
            BVar2 = GetExitCodeProcess(local_70.hProcess,local_84);
            if (BVar2 != 0) {
              pcVar7 = "Dism.exe returned: %d";
              cVar6 = '\0';
              uVar4 = 0;
              goto LAB_0041f731;
            }
            uVar4 = GetLastError();
            pcVar7 = "Could not get exit code for spawned process";
          }
          else {
            uVar4 = GetLastError();
            pcVar7 = "Failed waiting on created process";
          }
          uVar5 = uVar4 & 0xffff | 0x80070000;
          if ((int)uVar4 < 1) {
            uVar5 = uVar4;
          }
          if (-1 < (int)uVar5) {
            uVar5 = 0x80004005;
          }
          FUN_00424d95(0x4000000,uVar5,'\x01',pcVar7);
        }
        goto LAB_0041f76b;
      }
      pcVar7 = "Failed to escape command line.";
    }
  }
  else {
    uVar4 = 0x8000ffff;
LAB_0041f752:
    pcVar7 = "Unexpected result from InitializeProcThreadAttributeList";
  }
LAB_0041f757:
  FUN_00424d95(0x4000000,uVar4,'\x01',pcVar7);
  lpCommandLine = local_88;
LAB_0041f76b:
  if ((local_70.hProcess != (HANDLE)0x0) && (local_70.hProcess != (HANDLE)0xffffffff)) {
    CloseHandle(local_70.hProcess);
  }
  if ((local_70.hThread != (HANDLE)0x0) && (local_70.hThread != (HANDLE)0xffffffff)) {
    CloseHandle(local_70.hThread);
  }
  if (lpCommandLine != (LPWSTR)0x0) {
    FUN_00426b01((int)lpCommandLine);
  }
  if (local_80 != 0) {
    DeleteProcThreadAttributeList(lpAttributeList);
  }
  if (lpAttributeList != (LPPROC_THREAD_ATTRIBUTE_LIST)0x0) {
    LocalFree(lpAttributeList);
  }
  FUN_00434300(local_c ^ (uint)auStack_8c);
  return;
}



/* Function: FUN_0041f7d6 */

int __fastcall FUN_0041f7d6(int *param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  
  iVar3 = FUN_0041fdb4((short *)&DAT_0040281c);
  iVar8 = iVar3;
  if (iVar3 != 0) {
    iVar4 = FUN_0041fdb4((short *)&DAT_00402814);
    pwVar9 = (wchar_t *)*param_1;
    iVar8 = 0;
    local_1c = 0;
    pwVar1 = pwVar9 + *(int *)(pwVar9 + -6);
    if (pwVar9 < pwVar1) {
      do {
        pwVar5 = wcsstr(pwVar9,L"\\\"");
        while (pwVar5 != (wchar_t *)0x0) {
          pwVar9 = pwVar5 + iVar3;
          iVar8 = iVar8 + 1;
          pwVar5 = wcsstr(pwVar9,L"\\\"");
          local_1c = iVar8;
        }
        iVar6 = FUN_0041fdb4(pwVar9);
        pwVar9 = pwVar9 + iVar6 + 1;
      } while (pwVar9 < pwVar1);
      if (0 < iVar8) {
        iVar6 = *(int *)(*param_1 + -0xc);
        iVar11 = (iVar4 - iVar3) * iVar8 + iVar6;
        iVar8 = iVar6;
        if (iVar6 < iVar11) {
          iVar8 = iVar11;
        }
        pwVar5 = (wchar_t *)FUN_0041f9fd(param_1,iVar8);
        pwVar1 = pwVar5 + iVar6;
        for (pwVar9 = pwVar5; pwVar9 < pwVar1; pwVar9 = pwVar9 + iVar8 + 1) {
          pwVar7 = wcsstr(pwVar9,L"\\\"");
          if (pwVar7 != (wchar_t *)0x0) {
            do {
              pwVar9 = pwVar7 + iVar4;
              iVar10 = (iVar6 - ((int)pwVar7 - (int)pwVar5 >> 1)) - iVar3;
              uVar2 = iVar10 * 2;
              iVar8 = FUN_0041fd63(pwVar9,uVar2,pwVar7 + iVar3,uVar2);
              FUN_0041fd2a(iVar8);
              iVar8 = FUN_0041fc6a(pwVar7,iVar4 * 2,&DAT_00402814,iVar4 * 2);
              FUN_0041fd2a(iVar8);
              iVar6 = iVar6 + (iVar4 - iVar3);
              pwVar7[iVar10 + iVar4] = L'\0';
              pwVar7 = wcsstr(pwVar9,L"\\\"");
            } while (pwVar7 != (wchar_t *)0x0);
          }
          iVar8 = FUN_0041fdb4(pwVar9);
        }
        FUN_0041fa2c(param_1,iVar11);
        iVar8 = local_1c;
      }
    }
  }
  return iVar8;
}



/* Function: FUN_0041f96d */

int * __thiscall FUN_0041f96d(void *this,short *param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  
  if (param_1 != (short *)0x0) {
    psVar6 = param_1;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    iVar7 = (int)psVar6 - (int)(param_1 + 1) >> 1;
    if (iVar7 != 0) {
                    /* WARNING: Load size is inaccurate */
      uVar5 = (int)param_1 - *this >> 1;
      uVar2 = *(uint *)(*this + -0xc);
      pvVar4 = (void *)FUN_0041f9fd(this,iVar7);
      uVar3 = iVar7 * 2;
      if (uVar2 < uVar5) {
        FUN_0041fc6a(pvVar4,uVar3,param_1,uVar3);
      }
      else {
        FUN_0041fd63(pvVar4,uVar3,(void *)((int)pvVar4 + uVar5 * 2),uVar3);
      }
      FUN_0041fa2c(this,iVar7);
      return (int *)this;
    }
  }
  FUN_0041fba0((int *)this);
  return (int *)this;
}



/* Function: FUN_0041f9ed */

void __fastcall FUN_0041f9ed(int *param_1)

{
  FUN_0041fc3e((undefined4 *)(*param_1 + -0x10));
  return;
}



/* Function: FUN_0041f9fd */

int __thiscall FUN_0041f9fd(void *this,int param_1)

{
                    /* WARNING: Load size is inaccurate */
  if ((int)(1U - *(int *)(*this + -4) | *(int *)(*this + -8) - param_1) < 0) {
    FUN_0041fa5f(this,param_1);
  }
                    /* WARNING: Load size is inaccurate */
  return *this;
}



/* Function: FUN_0041fa2c */

void __thiscall FUN_0041fa2c(void *this,int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Load size is inaccurate */
  if ((-1 < param_1) && (param_1 <= *(int *)(*this + -8))) {
    *(int *)(*this + -0xc) = param_1;
                    /* WARNING: Load size is inaccurate */
    *(undefined2 *)(*this + param_1 * 2) = 0;
    return;
  }
  FUN_0041fd07(0x80070057);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041fa5f */

void __thiscall FUN_0041fa5f(void *this,int param_1)

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
      FUN_0041fabc(this,param_1);
    }
  }
  else {
    FUN_0041fb0a(this,param_1);
  }
  return;
}



/* Function: FUN_0041fabc */

void __thiscall FUN_0041fabc(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* WARNING: Load size is inaccurate */
  puVar3 = (undefined4 *)(*this + -0x10);
  if ((*(int *)(*this + -8) < param_1) && (0 < param_1)) {
    pcVar1 = *(code **)(*(int *)*puVar3 + 8);
    (*(code *)PTR_guard_check_icall_00437340)(puVar3,param_1,2);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(int *)this = iVar2 + 0x10;
      return;
    }
  }
  FUN_0041fc2e();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0041fb0a */

void __thiscall FUN_0041fb0a(void *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  
                    /* WARNING: Load size is inaccurate */
  pvVar2 = *this;
  iVar3 = *(int *)((int)pvVar2 + -0xc);
  pcVar4 = *(code **)(**(int **)((int)pvVar2 + -0x10) + 0x10);
  (*(code *)PTR_guard_check_icall_00437340)();
  puVar5 = (undefined4 *)(*pcVar4)();
  pcVar4 = *(code **)*puVar5;
  (*(code *)PTR_guard_check_icall_00437340)(param_1,2);
  iVar6 = (*pcVar4)();
  if (iVar6 != 0) {
    if (iVar3 < param_1) {
      param_1 = iVar3;
    }
    uVar1 = param_1 * 2 + 2;
    FUN_0041fc6a((void *)(iVar6 + 0x10),uVar1,pvVar2,uVar1);
    *(int *)(iVar6 + 4) = iVar3;
    FUN_0041fc3e((undefined4 *)((int)pvVar2 + -0x10));
    *(void **)this = (void *)(iVar6 + 0x10);
    return;
  }
  FUN_0041fc2e();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



/* Function: FUN_0041fba0 */

void __fastcall FUN_0041fba0(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004356c1;
  local_10 = ExceptionList;
  uVar3 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *param_1;
  piVar1 = *(int **)(iVar4 + -0x10);
  if (*(int *)(iVar4 + -0xc) != 0) {
    if (*(int *)(iVar4 + -4) < 0) {
      if (*(int *)(iVar4 + -8) < 0) {
        FUN_0041fd07(0x80070057);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(iVar4 + -0xc) = 0;
      *(undefined2 *)*param_1 = 0;
    }
    else {
      FUN_0041fc3e((undefined4 *)(iVar4 + -0x10));
      pcVar2 = *(code **)(*piVar1 + 0xc);
      (*(code *)PTR_guard_check_icall_00437340)(uVar3);
      iVar4 = (*pcVar2)();
      *param_1 = iVar4 + 0x10;
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0041fc2e */

void FUN_0041fc2e(void)

{
  FUN_0041fd07(0x8007000e);
  return;
}



/* Function: FUN_0041fc3e */

void __fastcall FUN_0041fc3e(undefined4 *param_1)

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
    (*(code *)PTR_guard_check_icall_00437340)(param_1);
    (*pcVar3)();
  }
  return;
}



/* Function: FUN_0041fc6a */

undefined4 __fastcall FUN_0041fc6a(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_0041fcf1 */

undefined4 * __thiscall FUN_0041fcf1(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return (undefined4 *)this;
}



/* Function: FUN_0041fd07 */

void __fastcall FUN_0041fd07(undefined4 param_1)

{
  void *pExceptionObject;
  undefined4 local_8;
  
  local_8 = param_1;
  FUN_0041fcf1(&local_8,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(pExceptionObject,(ThrowInfo *)&DAT_004359f0);
}



/* Function: FUN_0041fd2a */

undefined4 __fastcall FUN_0041fd2a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 0xc) {
    uVar1 = 0x8007000e;
  }
  else if ((param_1 == 0x16) || (param_1 == 0x22)) {
    uVar1 = 0x80070057;
  }
  else {
    if (param_1 == 0x50) {
      return 0x50;
    }
    uVar1 = 0x80004005;
  }
  uVar1 = FUN_0041fd07(uVar1);
  return uVar1;
}



/* Function: FUN_0041fd63 */

undefined4 __fastcall FUN_0041fd63(void *param_1,uint param_2,void *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
LAB_0041fda9:
    uVar2 = 0;
  }
  else {
    if ((param_1 == (void *)0x0) || (param_3 == (void *)0x0)) {
      puVar1 = (undefined4 *)o__errno();
      uVar2 = 0x16;
    }
    else {
      if (param_4 <= param_2) {
        memmove(param_1,param_3,param_4);
        goto LAB_0041fda9;
      }
      puVar1 = (undefined4 *)o__errno();
      uVar2 = 0x22;
    }
    *puVar1 = uVar2;
    o__invalid_parameter_noinfo();
  }
  return uVar2;
}



/* Function: FUN_0041fdb4 */

int __fastcall FUN_0041fdb4(short *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  
  if (param_1 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    psVar1 = param_1 + 1;
    do {
      sVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (sVar2 != 0);
    iVar3 = (int)param_1 - (int)psVar1 >> 1;
  }
  return iVar3;
}



/* Function: FUN_0041fde0 */

void FUN_0041fde0(DWORD param_1,va_list *param_2,int *param_3)

{
  int iVar1;
  BOOL BVar2;
  HLOCAL pvVar3;
  HMODULE pHVar4;
  DWORD DVar5;
  uint uVar6;
  HMODULE local_10;
  HLOCAL local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  pHVar4 = (HMODULE)0x0;
  local_c = (HLOCAL)0x0;
  local_10 = (HMODULE)0x0;
  DVar5 = 0;
  if (DAT_00436540 == (HMODULE)0x0) {
    iVar1 = FUN_00426b7e((int *)&local_10);
    pHVar4 = local_10;
    if (-1 < iVar1) {
      DAT_00436540 = LoadLibraryExW((LPCWSTR)local_10,(HANDLE)0x0,0x22);
    }
    if (DAT_00436540 != (HMODULE)0x0) goto LAB_0041fe40;
LAB_0041fe65:
    if (DAT_0043653c == (HMODULE)0x0) {
      local_10 = (HMODULE)0x0;
      BVar2 = GetModuleHandleExW(6,(LPCWSTR)FUN_0041fde0,&local_10);
      if (BVar2 != 0) {
        DAT_0043653c = local_10;
      }
      if (DAT_0043653c != (HMODULE)0x0) goto LAB_0041fe9c;
    }
    else {
LAB_0041fe9c:
      DVar5 = FormatMessageW(0x900,DAT_0043653c,param_1,0,(LPWSTR)&local_c,0,param_2);
    }
    if ((DVar5 == 0) || (pvVar3 = local_c, local_c == (HLOCAL)0x0)) {
      DVar5 = GetLastError();
      uVar6 = DVar5 & 0xffff | 0x80070000;
      if ((int)DVar5 < 1) {
        uVar6 = DVar5;
      }
      if (-1 < (int)uVar6) {
        uVar6 = 0x80004005;
      }
      FUN_00424d95(0x4000000,uVar6,'\x01',"Failed getting caption text");
      goto LAB_0041ff03;
    }
  }
  else {
LAB_0041fe40:
    DVar5 = FormatMessageW(0x900,DAT_00436540,param_1,0,(LPWSTR)&local_c,0,param_2);
    if ((DVar5 == 0) || (pvVar3 = local_c, local_c == (HLOCAL)0x0)) goto LAB_0041fe65;
  }
  local_c = (HLOCAL)0x0;
  *param_3 = (int)pvVar3;
LAB_0041ff03:
  if (pHVar4 != (HMODULE)0x0) {
    FUN_00426b01((int)pHVar4);
  }
  if (local_c != (HLOCAL)0x0) {
    LocalFree(local_c);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0041ff35 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __cdecl FUN_0041ff35(HWND param_1,DWORD param_2,DWORD param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  short *hMem;
  LPCWSTR pWVar4;
  LPCWSTR local_28;
  short *local_24;
  LPCWSTR local_20;
  short *local_1c;
  va_list local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x41ff41;
  hMem = (short *)0x0;
  local_20 = (LPCWSTR)0x0;
  local_1c = (short *)0x0;
  local_24 = (short *)0x0;
  pcVar1 = *(code **)(PTR_PTR_00436078 + 0xc);
  (*(code *)PTR_guard_check_icall_00437340)();
  iVar2 = (*pcVar1)();
  pWVar4 = (LPCWSTR)(iVar2 + 0x10);
  local_8 = 0xffffffff;
  local_18[0] = &stack0x00000014;
  local_28 = pWVar4;
  uVar3 = FUN_0041fde0(param_3,(va_list *)0x0,(int *)&local_20);
  if ((int)uVar3 < 0) {
    FUN_00424d95(0x4000000,uVar3,'\x01',"Failed getting caption text");
    local_18[0] = (va_list)0x0;
  }
  else {
    uVar3 = FUN_0041fde0(param_2,local_18,(int *)&local_1c);
    if ((int)uVar3 < 0) {
      FUN_00424d95(0x4000000,uVar3,'\x01',"Failed getting message text");
    }
    else {
      uVar3 = FUN_0041fde0(0xea65,(va_list *)0x0,(int *)&local_24);
      hMem = local_24;
      if ((int)uVar3 < 0) {
        FUN_00424d95(0x4000000,uVar3,'\x01',"Failed getting deprecation message text");
        hMem = local_24;
      }
      else {
        FUN_0041f96d(&local_28,local_24);
        FUN_004200e3(&local_28,local_1c);
        pWVar4 = local_28;
        MessageBoxW(param_1,local_28,local_20,param_4 | 0x10000);
      }
    }
    local_18[0] = (va_list)0x0;
    if (local_1c != (short *)0x0) {
      LocalFree(local_1c);
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    LocalFree(local_20);
  }
  if (hMem != (short *)0x0) {
    LocalFree(hMem);
  }
  FUN_0041fc3e((undefined4 *)(pWVar4 + -8));
  FUN_00435522();
  return;
}



/* Function: FUN_00420093 */

undefined4 __fastcall FUN_00420093(int param_1,undefined4 *param_2)

{
  int iVar1;
  DWORD DVar2;
  
  *param_2 = 0;
  if ((param_1 < 0) || (param_1 == 1)) {
    DVar2 = 0xea63;
  }
  else {
    DVar2 = 0xea62;
  }
  iVar1 = FUN_0041ff35((HWND)0x0,DVar2,60000,0x1024);
  if (iVar1 == 6) {
    *param_2 = 1;
  }
  return 0;
}



/* Function: FUN_004200e3 */

int * __thiscall FUN_004200e3(void *this,short *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  
  if (param_1 == (short *)0x0) {
    iVar5 = 0;
  }
  else {
    psVar6 = param_1;
    do {
      sVar1 = *psVar6;
      psVar6 = psVar6 + 1;
    } while (sVar1 != 0);
    iVar5 = (int)psVar6 - (int)(param_1 + 1) >> 1;
  }
                    /* WARNING: Load size is inaccurate */
  uVar4 = (int)param_1 - *this >> 1;
  uVar2 = *(uint *)(*this + -0xc);
  iVar3 = FUN_0041f9fd(this,uVar2 + iVar5);
  if (uVar4 <= uVar2) {
    param_1 = (short *)(iVar3 + uVar4 * 2);
  }
  FUN_0041fc6a((void *)(iVar3 + uVar2 * 2),iVar5 * 2,param_1,iVar5 * 2);
  FUN_0041fa2c(this,uVar2 + iVar5);
  return (int *)this;
}



/* Function: FUN_00420160 */

int * __thiscall FUN_00420160(void *this,int param_1,uint param_2)

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
    (*(code *)PTR_guard_check_icall_00437340)(uVar2 + 0x10);
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



/* Function: FUN_004201f0 */

void __thiscall FUN_004201f0(void *this,undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)((int)this + 4) + 4);
  (*(code *)PTR_guard_check_icall_00437340)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00420220 */

int __thiscall FUN_00420220(void *this,undefined4 param_1,int param_2,uint param_3)

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
    (*(code *)PTR_guard_check_icall_00437340)(param_1,uVar2 + 0x10);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 8) = uVar4 - 1;
      return iVar3;
    }
  }
  return 0;
}



/* Function: FUN_004202a0 */

int __fastcall FUN_004202a0(int param_1)

{
  LOCK();
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  UNLOCK();
  return param_1 + 8;
}



/* Function: FUN_004202b0 */

undefined4 __fastcall FUN_004202b0(undefined4 param_1)

{
  return param_1;
}



/* Function: FUN_004202c0 */

undefined4 * __thiscall FUN_004202c0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401050;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: ~CWin32Heap */

/* Library Function - Single Match
    public: virtual __thiscall ATL::CWin32Heap::~CWin32Heap(void)
   
   Library: Visual Studio 2012 Release */

void __thiscall ATL::CWin32Heap::~CWin32Heap(CWin32Heap *this)

{
  *(undefined ***)this = &PTR_FUN_00401068;
  if ((this[8] != (CWin32Heap)0x0) && (*(int *)(this + 4) != 0)) {
    HeapDestroy(*(HANDLE *)(this + 4));
  }
  return;
}



/* Function: FUN_00420310 */

void __thiscall FUN_00420310(void *this,SIZE_T param_1)

{
  HeapAlloc(*(HANDLE *)((int)this + 4),0,param_1);
  return;
}



/* Function: FUN_00420330 */

void __thiscall FUN_00420330(void *this,LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(*(HANDLE *)((int)this + 4),0,param_1);
  }
  return;
}



/* Function: FUN_00420360 */

LPVOID __thiscall FUN_00420360(void *this,LPVOID param_1,SIZE_T param_2)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  if (param_1 == (LPVOID)0x0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = (code *)**this;
    (*(code *)PTR_guard_check_icall_00437340)(param_2);
    pvVar2 = (LPVOID)(*pcVar1)();
  }
  else if (param_2 == 0) {
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *(code **)(*this + 4);
    (*(code *)PTR_guard_check_icall_00437340)(param_1);
    (*pcVar1)();
    pvVar2 = (LPVOID)0x0;
  }
  else {
    pvVar2 = HeapReAlloc(*(HANDLE *)((int)this + 4),0,param_1,param_2);
  }
  return pvVar2;
}



/* Function: FUN_004203c0 */

void __thiscall FUN_004203c0(void *this,LPCVOID param_1)

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
    o_free(this);
  }
  return this;
}



/* Function: FUN_00420407 */

undefined4 __fastcall FUN_00420407(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_0042048b */

undefined4 __fastcall FUN_0042048b(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_004204f1 */

undefined4 __fastcall FUN_004204f1(short *param_1,uint param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  
  if ((param_2 == 0) || (psVar2 = param_1, uVar5 = param_2, 0x7fffffff < param_2)) {
    uVar7 = 0x80070057;
  }
  else {
    do {
      if (*psVar2 == 0) break;
      uVar5 = uVar5 - 1;
      psVar2 = psVar2 + 1;
    } while (uVar5 != 0);
    uVar7 = 0x80070057;
    if (uVar5 != 0) {
      uVar7 = 0;
    }
    uVar8 = -(uint)(uVar5 != 0) & param_2 - uVar5;
    if (uVar5 != 0) {
      psVar2 = param_1 + uVar8;
      iVar6 = param_2 - uVar8;
      if (iVar6 != 0) {
        iVar3 = (uVar8 - param_2) + 0x7ffffffe + iVar6;
        iVar9 = param_3 - (int)psVar2;
        do {
          if ((iVar3 == 0) || (sVar1 = *(short *)(iVar9 + (int)psVar2), sVar1 == 0)) break;
          *psVar2 = sVar1;
          psVar2 = psVar2 + 1;
          iVar3 = iVar3 + -1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      psVar4 = psVar2 + -1;
      if (iVar6 != 0) {
        psVar4 = psVar2;
      }
      *psVar4 = 0;
      uVar7 = 0x8007007a;
      if (iVar6 != 0) {
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}



/* Function: FUN_0042059b */

undefined4 __fastcall
FUN_0042059b(undefined2 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar3 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = param_2 - 1;
    uVar3 = 0;
    uVar2 = FUN_00435052(param_1,uVar1,param_3,param_4);
    if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
      uVar3 = 0x8007007a;
    }
    else if (uVar2 != uVar1) {
      return 0;
    }
    param_1[uVar1] = 0;
  }
  return uVar3;
}



/* Function: FUN_004205fc */

undefined4 __cdecl FUN_004205fc(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_0042063f((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_0042063f */

undefined4 __fastcall
FUN_0042063f(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_004350af(param_1,uVar1,param_4,param_5);
  if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
    *(undefined1 *)(uVar1 + param_1) = 0;
    uVar3 = 0x8007007a;
  }
  else if (uVar2 == uVar1) {
    *(undefined1 *)(uVar1 + param_1) = 0;
  }
  return uVar3;
}



/* Function: FUN_00420684 */

short * __cdecl FUN_00420684(short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  
  FUN_0042059b(param_1,(int)param_2 - (int)param_1 >> 1,param_3,&stack0x00000010);
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



/* Function: FUN_004206c9 */

void __fastcall FUN_004206c9(short *param_1,int param_2,int param_3)

{
  short *psVar1;
  code *pcVar2;
  short *psVar3;
  short *local_20c;
  WCHAR local_208 [256];
  uint local_8;
  
  pcVar2 = DAT_004365c0;
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar2 != (code *)0x0) && (DAT_004365d0 != '\0')) {
      (*(code *)PTR_guard_check_icall_00437340)(param_3,param_1,param_2);
      (*pcVar2)();
      if (*param_1 != 0) goto LAB_00420921;
    }
    memset(local_208,0,0x200);
    pcVar2 = DAT_004365d8;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
    }
    else if (DAT_004365d8 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00437340)(*(undefined4 *)(param_3 + 0xc),local_208,0x100);
      (*pcVar2)();
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_20c = FUN_00420684(param_1,psVar1,L"%hs!%p: ");
    }
    else {
      local_20c = FUN_00420684(param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_20c = FUN_00420684(local_20c,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar3 = FUN_00420684(local_20c,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar3 = FUN_00420684(psVar3,psVar1,L"    ");
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar3 = FUN_00420684(psVar3,psVar1,L"Msg:[%ws] ");
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar3 = FUN_00420684(psVar3,psVar1,L"CallContext:[%hs] ");
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00420684(psVar3,psVar1,&DAT_00402b74);
        }
        else {
          FUN_00420684(psVar3,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_00420684(psVar3,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_00420921:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00420939 */

uint * __thiscall FUN_00420939(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00420c41((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_0042095d */

LPVOID __fastcall FUN_0042095d(DWORD param_1,SIZE_T param_2)

{
  FARPROC pFVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  HMODULE hModule;
  
  hHeap = GetProcessHeap();
  pvVar2 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_00436598 == (FARPROC)0x0) {
    if (DAT_0043662c != '\0') {
      return pvVar2;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00436598 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0043662c = '\x01';
    if (DAT_00436598 == (FARPROC)0x0) {
      DAT_0043662c = '\x01';
      return pvVar2;
    }
  }
  pFVar1 = DAT_00436598;
  (*(code *)PTR_guard_check_icall_00437340)(hHeap,pvVar2);
  (*pFVar1)();
  return pvVar2;
}



/* Function: FUN_004209da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004209da(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00436614;
  _DAT_00436618 = param_1;
  LOCK();
  DAT_00436614 = DAT_00436614 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_004209f3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004209f3(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00436648;
  _DAT_004365a8 = param_1;
  LOCK();
  DAT_00436648 = DAT_00436648 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00420a0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00420a0c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004366c4;
  _DAT_0043663c = param_1;
  LOCK();
  DAT_004366c4 = DAT_004366c4 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00420a30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00420a30(undefined4 param_1)

{
  _DAT_004366a4 = param_1;
  return 1;
}



/* Function: FUN_00420a4a */

void FUN_00420a4a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_004365f8;
  if (DAT_004365f8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00420a7a */

void FUN_00420a7a(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
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
      FUN_0042048b(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00420b60 */

undefined * FUN_00420b60(void)

{
  if (DAT_00436620 == '\0') {
    FUN_00420a7a((LPCWSTR)FUN_00420a30,(uint *)0x0,&DAT_00436650,0x40);
    DAT_00436620 = '\x01';
  }
  return &DAT_00436650;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00420b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00420ba0 */

void FUN_00420ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00420be1 */

uint __fastcall FUN_00420be1(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_00436600;
  if (-1 < (int)param_1) {
    return 0;
  }
  if (param_1 != 0xc0000017) {
    if (DAT_00436600 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00437340)(param_1);
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



/* Function: FUN_00420c41 */

uint __fastcall FUN_00420c41(uint param_1)

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



/* Function: FUN_00420e16 */

DWORD __fastcall
FUN_00420e16(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00425975(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  return DVar1;
}



/* Function: FUN_00420e52 */

uint __fastcall
FUN_00420e52(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00425975(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_00420ea1 */

void __fastcall FUN_00420ea1(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00420e52(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00420ebe */

int __fastcall FUN_00420ebe(short *param_1)

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



/* Function: FUN_00420ee6 */

undefined1 FUN_00420ee6(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_004365e4;
  if (DAT_004365f4 != '\0') {
    return 1;
  }
  if (DAT_004365e4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00420f16 */

void __fastcall
FUN_00420f16(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8,short *param_9,undefined4 param_10,LPCWSTR param_11,undefined4 param_12,
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
    iVar3 = FUN_004209da(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_004209f3(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_00425975(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar6 = FUN_00420c41(0x8007029c);
      param_15[3] = uVar6;
    }
    iVar3 = FUN_00420a0c(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_00420a30(iVar3);
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
  iVar4 = DAT_00436690 + 1;
  DAT_00436690 = DAT_00436690 + 1;
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
  pcVar1 = DAT_004365fc;
  if (DAT_004365fc == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00437340)();
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_004365c8;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365e0;
  if (DAT_004365e0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365dc;
  if (DAT_004365dc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365ec;
  if ((DAT_004365ec != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00437340)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_0042138d();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar6 = FUN_00420c41(0x8000ffff);
    param_15[3] = uVar6;
  }
  pcVar1 = DAT_004365b4;
  if (DAT_004365bc == '\0') {
    if (DAT_004365b4 == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00437340)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00421107;
  }
  else {
LAB_00421107:
    pcVar1 = DAT_004365c0;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_004365c0 != (code *)0x0) && (DAT_004365d0 == '\0')) {
        (*(code *)PTR_guard_check_icall_00437340)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_004206c9(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00421170;
    }
  }
  pcVar1 = DAT_004365c0;
  if ((DAT_004365c0 != (code *)0x0) && (DAT_004365d0 == '\0')) {
    (*(code *)PTR_guard_check_icall_00437340)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00421170:
  pcVar1 = DAT_004365e8;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_004365c4 != '\0')) &&
     (DAT_004365e8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00437340)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004211a8 */

void __fastcall FUN_004211a8(int param_1)

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
  
  pcVar1 = DAT_00436604;
  if (DAT_00436604 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365f0;
  if (DAT_004365f0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00421215;
  uVar3 = 1;
  do {
    FUN_00420a4a(uVar3);
    iVar2 = extraout_ECX;
LAB_00421215:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_00421235 */

void __fastcall
FUN_00421235(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_00425a93(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00421253 */

void __fastcall
FUN_00421253(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar2 = FUN_00420939((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_00421235(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_00421298 */

void __fastcall FUN_00421298(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00420e16(param_1,param_2,0x402ce8,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00420939(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_00421235(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_004212f9 */

void __fastcall FUN_004212f9(undefined4 param_1,undefined4 param_2)

{
  FUN_00425d22(param_1,param_2);
  return;
}



/* Function: FUN_00421316 */

void __fastcall FUN_00421316(int param_1,int param_2)

{
  FUN_00425d63(param_1,param_2);
  return;
}



/* Function: FUN_00421332 */

void __fastcall FUN_00421332(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_00421298(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0042134a */

void __fastcall FUN_0042134a(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_00421253(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0042136b */

void __fastcall FUN_0042136b(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_00421253(param_1,0x137b,"onecore\\internal\\sdk\\inc\\wil\\Staging.h",param_1,param_1,
               unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_0042138d */

void FUN_0042138d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00421399 */

void __fastcall FUN_00421399(LPCSTR param_1)

{
  if (DAT_00436630 == (HMODULE)0x0) {
    DAT_00436630 = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_00436630,param_1);
  return;
}



/* Function: FUN_004213c5 */

FARPROC __fastcall FUN_004213c5(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_00436694 == (HMODULE)0x0) &&
     (DAT_00436694 = GetModuleHandleW(L"kernelbase.dll"), DAT_00436694 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_00436694,param_1);
  return pFVar1;
}



/* Function: FUN_00421400 */

void FUN_00421400(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_00436630 == (HMODULE)0x0) {
    DAT_00436630 = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_00436630,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00421450 */

void FUN_00421450(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_004365a0 == (code *)0x0) &&
     (DAT_004365a0 = (code *)FUN_00421399("RtlNtStatusToDosErrorNoTeb"), DAT_004365a0 == (code *)0x0
     )) {
    return;
  }
  pcVar1 = DAT_004365a0;
  (*(code *)PTR_guard_check_icall_00437340)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00421490 */

undefined4 FUN_00421490(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_004366a0 == (code *)0x0) {
    DAT_004366a0 = (code *)FUN_00421399("RtlDllShutdownInProgress");
    if (DAT_004366a0 == (code *)0x0) {
      return 0;
    }
  }
  pcVar1 = DAT_004366a0;
  (*(code *)PTR_guard_check_icall_00437340)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_004214d0 */

void FUN_004214d0(undefined1 *param_1)

{
  FARPROC pFVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  local_10 = 0;
  local_2c = *(undefined4 *)(param_1 + 8);
  local_28 = *(undefined4 *)(param_1 + 0x14);
  local_24 = *param_1;
  local_22 = DAT_00436608;
  local_20 = *(undefined2 *)(param_1 + 0x28);
  local_18 = *(undefined4 *)(param_1 + 0x24);
  local_14 = *(undefined4 *)(param_1 + 0x4c);
  if (DAT_0043660c == (FARPROC)0x0) {
    DAT_0043660c = FUN_004213c5("WilFailureNotifyWatchers");
    if (DAT_0043660c == (FARPROC)0x0) goto LAB_00421556;
  }
  pFVar1 = DAT_0043660c;
  (*(code *)PTR_guard_check_icall_00437340)(0,&local_2c,&local_10);
  (*pFVar1)();
LAB_00421556:
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_10;
  if (local_10._4_1_ == '\x01') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  else if (local_10._4_1_ == '\x02') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  }
  else if (local_10._4_1_ == '\x03') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00421595 */

void FUN_00421595(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  
  BVar2 = FindClose(param_1);
  if (BVar2 == 0) {
    GetLastError();
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004215bc */

void FUN_004215bc(HMODULE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  
  BVar2 = FreeLibrary(param_1);
  if (BVar2 == 0) {
    GetLastError();
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004215e3 */

undefined4 FUN_004215e3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_00436628 == (code *)0x0) &&
     (DAT_00436628 = (code *)FUN_00421399("NtQueryWnfStateData"), DAT_00436628 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00436628;
  (*(code *)PTR_guard_check_icall_00437340)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00421637 */

undefined4 __fastcall
FUN_00421637(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_004366ac == (code *)0x0) &&
     (DAT_004366ac = (code *)FUN_00421399("NtUpdateWnfStateData"), DAT_004366ac == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_004366ac;
  (*(code *)PTR_guard_check_icall_00437340)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00421690 */

void __fastcall FUN_00421690(undefined4 param_1,undefined2 param_2,int param_3)

{
  code *pcVar1;
  uint6 uVar2;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_10._0_6_ = CONCAT24(param_2,param_1);
  uVar2 = (uint6)local_10;
  local_10 = (ulonglong)(uint6)local_10;
  if (param_3 != 0) {
    local_10 = CONCAT26(1,uVar2);
  }
  if ((DAT_0043659c != (code *)0x0) ||
     (DAT_0043659c = (code *)FUN_00421399("RtlNotifyFeatureUsage"), DAT_0043659c != (code *)0x0)) {
    pcVar1 = DAT_0043659c;
    (*(code *)PTR_guard_check_icall_00437340)(&local_10);
    (*pcVar1)();
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00421707 */

void FUN_00421707(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00421332(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00421734 */

void FUN_00421734(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00421332(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0042175f */

int __fastcall FUN_0042175f(void *param_1,int *param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  iVar1 = FUN_0042198c(param_1,local_c);
  if (iVar1 < 0) {
    FUN_004212f9(unaff_retaddr,100);
    FUN_004212f9(unaff_retaddr,0x6d);
  }
  else {
    *param_2 = local_c[0] << 2;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_004217b7 */

void __thiscall FUN_004217b7(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_0042138d();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_0041e6b4(local_214,0x104,param_1);
  FUN_004204f1(local_214,0x104,0x402d20);
  uVar4 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar4 != 0) {
    uVar2 = uVar4;
  }
  iVar3 = FUN_004250ec(this,uVar4,uVar2,local_214);
  if (iVar3 < 0) {
    FUN_004212f9(unaff_retaddr,0x88);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0042185d */

void __fastcall FUN_0042185d(HANDLE param_1,int *param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  long local_10;
  long local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  DVar1 = WaitForSingleObject(param_1,0);
  if (DVar1 == 0xffffffff) {
    iVar3 = 0x99;
    goto LAB_0042188a;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_c = 0;
    if (DVar1 == 0) {
      BVar2 = ReleaseSemaphore(param_1,1,&local_c);
      if (BVar2 != 0) {
        local_c = local_c + 1;
        BVar2 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if (BVar2 == 0) {
          DVar1 = GetLastError();
          if (DVar1 == 0x12a) {
LAB_00421958:
            *param_2 = local_c;
            goto LAB_00421977;
          }
        }
        uVar4 = 0xa7;
        goto LAB_00421966;
      }
      iVar3 = 0xa2;
    }
    else {
      local_10 = 0;
      BVar2 = ReleaseSemaphore(param_1,1,&local_10);
      if (BVar2 != 0) {
        if (local_10 == 0) {
          BVar2 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
          if (BVar2 == 0) {
            DVar1 = GetLastError();
            if (DVar1 == 0x12a) {
              DVar1 = WaitForSingleObject(param_1,0);
              if (DVar1 == 0xffffffff) {
                iVar3 = 0xb8;
                goto LAB_0042188a;
              }
              if (DVar1 == 0) goto LAB_00421958;
              uVar4 = 0xb9;
              goto LAB_00421966;
            }
          }
          uVar4 = 0xb5;
        }
        else {
          uVar4 = 0xb2;
        }
        goto LAB_00421966;
      }
      iVar3 = 0xb1;
    }
LAB_0042188a:
    FUN_00421316(unaff_retaddr,iVar3);
  }
  else {
    uVar4 = 0x9a;
LAB_00421966:
    FUN_004212f9(unaff_retaddr,uVar4);
  }
LAB_00421977:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0042198c */

void __thiscall FUN_0042198c(void *this,int *param_1)

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
  
  local_c = DAT_00436100 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0041e6b4(local_218,0x104,(int)this);
  FUN_004204f1(local_218,0x104,0x402d20);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_00421316(unaff_retaddr,0xcd);
    }
LAB_00421a34:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00421a4e;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_0042185d(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_004212f9(unaff_retaddr,0xd3);
      goto LAB_00421a34;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00421707(pvVar1);
LAB_00421a4e:
  FUN_00434300(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_00421a6d */

void __thiscall FUN_00421a6d(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar5 = FUN_00420ebe(*(short **)(param_1 + 0x14));
  piVar2 = (int *)((int)this + 0x28);
  pcVar4 = local_c + iVar5 + (int)pcVar4;
  if (((*(int *)((int)this + 0x24) == 0) || ((char *)*piVar2 < pcVar4)) &&
     (pvVar6 = FUN_0042095d(8,(SIZE_T)pcVar4), pvVar6 != (LPVOID)0x0)) {
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
    FUN_00425a2c(pcVar4,pcVar7,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00425a2c(extraout_EAX,pcVar7,(char *)*local_8,(undefined4 *)((int)this + 0x14));
    _Dst = FUN_004259bc(extraout_EAX_00,pcVar7,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar7 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00421ba9 */

void __fastcall FUN_00421ba9(int param_1)

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



/* Function: FUN_00421c18 */

void __thiscall FUN_00421c18(void *this,undefined1 *param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  iVar3 = *(int *)((int)this + 0xc);
  if ((*(int *)((int)this + 0x10) == 0) && (iVar3 != 0)) {
    puVar5 = (undefined2 *)FUN_0042095d(8,0xdc);
    *(undefined2 **)((int)this + 0x10) = puVar5;
    if (puVar5 != (undefined2 *)0x0) {
      *(undefined2 *)((int)this + 0x14) = 5;
      *(undefined2 *)((int)this + 0x16) = 0;
      puVar2 = puVar5 + 0x6e;
      for (; puVar5 != puVar2; puVar5 = puVar5 + 0x16) {
        *puVar5 = 0x2c;
      }
    }
  }
  piVar8 = *(int **)((int)this + 0x10);
  if (piVar8 != (int *)0x0) {
    if ((iVar3 != 0) &&
       (piVar7 = piVar8 + (uint)*(ushort *)((int)this + 0x14) * 0xb, piVar8 != piVar7)) {
      piVar6 = piVar8 + 2;
      do {
        if ((*(uint *)((int)this + 0xc) < (uint)piVar6[-1]) &&
           (piVar8 = *(int **)((int)this + 0x10), *piVar6 == *(int *)(param_1 + 8))) {
          return;
        }
        piVar1 = piVar6 + 9;
        piVar6 = piVar6 + 0xb;
      } while (piVar1 != piVar7);
    }
    uVar4 = (ulonglong)(*(ushort *)((int)this + 0x16) + 1) %
            (ulonglong)*(ushort *)((int)this + 0x14);
    *(short *)((int)this + 0x16) = (short)uVar4;
    piVar7 = *(int **)((int)this + 8);
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    FUN_00421a6d(piVar8 + (int)uVar4 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00421cdf */

DWORD * __fastcall FUN_00421cdf(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_004365b8;
  if (DAT_004365b8 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_004365b8[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_00425197(*DAT_004365b8,&local_8);
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



/* Function: FUN_00421d68 */

uint __fastcall FUN_00421d68(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00421d68(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_00436150 + 1;
        DAT_00436150 = DAT_00436150 + 1;
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
        pcVar5 = (char *)FUN_00420407(pcVar7,(uint)pcVar9,(void *)piVar2[1],(uint)pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00421e27 */

void __fastcall FUN_00421e27(int param_1,char *param_2,int param_3)

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
  iVar2 = DAT_004365cc;
  if (DAT_004365cc != 0) {
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
      uVar5 = FUN_00421d68(param_1,*pDVar6,param_2,param_3);
      if ((char)uVar5 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar6;
      local_5 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_00437340)(param_1);
        bVar3 = (*pcVar1)();
        local_5 = local_5 | bVar3;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
    }
  }
  pcVar1 = DAT_004365d4;
  if (DAT_004365d4 != (code *)0x0) {
    if ((local_5 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (*(code *)PTR_guard_check_icall_00437340)(uVar5,param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00421f00 */

void FUN_00421f00(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00421e27((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_004366b0 != DVar2) {
    LOCK();
    iVar1 = DAT_004366c8 + 1;
    UNLOCK();
    iVar3 = DAT_004366c8 + 1;
    DAT_004366c8 = iVar1;
    if (iVar3 < 4) {
      DAT_004366b0 = DVar2;
      this = FUN_00421cdf(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00421c18(this,param_1);
      }
      DAT_004366b0 = 0;
    }
    LOCK();
    DAT_004366c8 = DAT_004366c8 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00421f65 */

void __fastcall FUN_00421f65(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  PTP_TIMER pti;
  _FILETIME local_10;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  pti = (PTP_TIMER)*param_1;
  if (pti != (PTP_TIMER)0x0) {
    local_10 = (_FILETIME)__allmul(param_3,param_4,0xffffd8f0,-1);
    SetThreadpoolTimer(pti,&local_10,0,param_3 >> 2);
    *param_2 = 1;
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00421fc6 */

undefined4 __thiscall FUN_00421fc6(void *this,uint param_1)

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
    pvVar2 = FUN_0042095d(0,SVar3);
    if (pvVar2 == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    uVar1 = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    FUN_00420407(pvVar2,SVar3,*this,uVar1);
    FUN_00425026((void *)((int)this + 0xc),(int)pvVar2);
    *(LPVOID *)this = pvVar2;
    *(uint *)((int)this + 4) = uVar1 + (int)pvVar2;
    *(SIZE_T *)((int)this + 8) = (int)pvVar2 + SVar3;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_00422051 */

undefined4 __thiscall FUN_00422051(void *this,uint param_1)

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
    uVar2 = FUN_00421fc6(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00422087 */

undefined4 __thiscall FUN_00422087(void *this,void *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00422051(this,param_2);
  if ((char)uVar2 != '\0') {
    pvVar1 = *(void **)((int)this + 4);
    uVar2 = FUN_00420407(pvVar1,-(uint)(pvVar1 < *(void **)((int)this + 8)) &
                                *(int *)((int)this + 8) - (int)pvVar1,param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_004220c8 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004220c8(int *param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *local_102c;
  int local_1028;
  uint local_1024;
  int *local_1020;
  int local_101c;
  uint local_1018;
  undefined4 local_1014;
  int local_1010 [1025];
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)&local_102c;
  iVar5 = 0;
  local_102c = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1028 = 0;
    do {
      iVar7 = local_1028;
      memset(local_1010,0,0x1000);
      local_1018 = 0x1000;
      local_101c = FUN_004215e3(extraout_ECX,&local_1014,local_1010,&local_1018);
      if (local_101c == 0) {
        if (local_1018 % 0xc != 0) {
          local_1018 = 0;
        }
        piVar4 = (int *)*param_1;
        local_1024 = local_1018 / 0xc;
        piVar2 = (int *)(((uint)(local_102c[1] - (int)piVar4) / 0xc) * 0xc);
        local_1020 = (int *)((int)piVar2 + (int)piVar4);
        uVar6 = local_1018;
        if (piVar4 != local_1020) {
          piVar3 = local_1010 + local_1024 * 3;
          do {
            piVar2 = local_1010;
            if (piVar2 != piVar3) {
              do {
                if ((*piVar2 == *piVar4) && ((short)piVar2[1] == (short)piVar4[1])) {
                  piVar2[2] = piVar2[2] + piVar4[2];
                  uVar6 = local_1018;
                  goto LAB_004221d7;
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
              local_1018 = uVar1;
            }
LAB_004221d7:
            piVar4 = piVar4 + 3;
            iVar7 = local_1028;
          } while (piVar4 != local_1020);
        }
        iVar5 = FUN_00421637(&DAT_00403bf8,local_1010,uVar6,piVar2,piVar2,local_1014,1);
        param_1 = local_102c;
      }
      local_1028 = iVar7 + 1;
    } while (((iVar5 == -0x3fffffff) && (local_1028 < 100)) && (local_101c == 0));
  }
  FUN_00434300(local_c ^ (uint)&local_102c);
  return;
}



/* Function: FUN_0042224d */

void FUN_0042224d(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_004365b0 == (code *)0x0) &&
     (DAT_004365b0 = (code *)FUN_00421399("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_004365b0 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_004365b0;
  (*(code *)PTR_guard_check_icall_00437340)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_0042228b */

int __thiscall FUN_0042228b(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_004222b8 */

void __thiscall FUN_004222b8(void *this,int param_1)

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
    FUN_00420407(*(void **)((int)this + 0xc),uVar2,piVar1,uVar2);
  }
  return;
}



/* Function: FUN_004222fe */

uint __fastcall FUN_004222fe(ushort *param_1)

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



/* Function: FUN_00422329 */

uint __thiscall FUN_00422329(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_8;
  
  pvVar3 = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_004223c0;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    FUN_00420407(pvVar3,2,&local_8,2);
    pvVar3 = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)pvVar3 + 4);
      if (param_2 < pvVar1) goto LAB_004223c0;
      FUN_00420407(pvVar3,4,(void *)((int)this + 4),4);
      pvVar3 = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_004223c0;
    FUN_00420407(pvVar3,(int)param_2 - (int)pvVar3,(void *)((int)this + 8),2);
    pvVar3 = pvVar1;
  }
  pvVar1 = (void *)((uint)*(ushort *)((int)this + 8) + (int)pvVar3);
  if (pvVar1 <= param_2) {
    FUN_00420407(pvVar3,(int)param_2 - (int)pvVar3,*(void **)((int)this + 0x10),
                 (uint)*(ushort *)((int)this + 8));
    iVar2 = (uint)*(ushort *)((int)this + 8) + (int)pvVar3;
    *param_1 = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
LAB_004223c0:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_004223ef */

void __thiscall FUN_004223ef(void *this,uint *param_1,void *param_2)

{
  ushort *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  pvVar2 = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar3 = (void *)((int)pvVar2 + 2);
    if (param_2 < pvVar3) goto LAB_0042249a;
    *(void **)((int)this + 0xc) = pvVar2;
    FUN_00420407(&local_c,2,pvVar2,2);
    *(uint *)((int)this + 4) = (uint)local_c & 0xffff;
  }
  else {
    pvVar3 = pvVar2;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar3 = (void *)((int)pvVar2 + 4);
      if (param_2 < pvVar3) goto LAB_0042249a;
      *(void **)((int)this + 0xc) = pvVar2;
      FUN_00420407((void *)((int)this + 4),4,pvVar2,4);
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar1 = (ushort *)((int)this + 8);
  *puVar1 = *this;
  if (*this == 0) {
    local_c = (void *)((int)pvVar3 + 2);
    if (param_2 < local_c) goto LAB_0042249a;
    FUN_00420407(puVar1,2,pvVar3,2);
    pvVar3 = local_c;
  }
  if ((void *)((uint)*puVar1 + (int)pvVar3) <= param_2) {
    *(void **)((int)this + 0x10) = pvVar3;
    *param_1 = (uint)*puVar1 + (int)pvVar3;
  }
LAB_0042249a:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004224b0 */

undefined2 * __thiscall
FUN_004224b0(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_004222fe(&local_18);
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



/* Function: FUN_0042252e */

void __thiscall FUN_0042252e(void *this,int param_1)

{
  int *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  this_00 = (int *)((int)this + 0x1c);
  iVar5 = *this_00;
  uVar1 = *(undefined4 *)((int)this + 0x10);
  uVar2 = *(undefined4 *)((int)this + 0x14);
  uVar3 = *(undefined4 *)((int)this + 0x18);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00425026(this_00,iVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_c = 0;
  FUN_00425026((void *)(param_1 + 0x1c),iVar5);
  FUN_00425050(&local_c);
  uVar4 = *(undefined1 *)((int)this + 0x20);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)this + 0x21);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004225d1 */

void __thiscall FUN_004225d1(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_0042136b(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_00422674;
  }
  if (9 < param_2) {
    return;
  }
LAB_00422674:
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



/* Function: FUN_004226bc */

void __thiscall FUN_004226bc(void *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_40;
  ushort local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  uint local_24;
  ushort local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_24 = 0;
  local_1c = 0;
  local_48 = *(int *)((int)this + 0x10) + 10;
  local_18 = 0;
  local_28 = *(undefined2 *)((int)this + 2);
  local_26 = *(undefined1 *)((int)this + 4);
  local_20 = 0;
  local_44 = *(undefined2 *)((int)this + 6);
  local_42 = *(undefined1 *)((int)this + 8);
  local_3c = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  cVar2 = FUN_004223ef(&local_28,&local_48,*(void **)((int)this + 0x14));
  do {
    if (cVar2 == '\0') {
      FUN_00425db8(param_1);
LAB_004227da:
      FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar3 = 0;
    if (local_24 != 0) {
      do {
        cVar2 = FUN_004223ef(&local_44,&local_48,*(void **)((int)this + 0x14));
        if (cVar2 == '\0') break;
        local_c = local_40;
        local_10 = (uint)local_3c;
        local_2c = local_34;
        local_14 = (uint)local_20;
        local_30 = local_18;
        if (*(int **)(param_1 + 0x40) == (int *)0x0) {
          FUN_0042138d();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x10);
        (*(code *)PTR_guard_check_icall_00437340)(&local_30,&local_14,&local_2c,&local_10,&local_c);
        cVar2 = (*pcVar1)();
        if (cVar2 == '\0') {
          FUN_00425db8(param_1);
          goto LAB_004227da;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_24);
    }
    cVar2 = FUN_004223ef(&local_28,&local_48,*(void **)((int)this + 0x14));
  } while( true );
}



/* Function: FUN_004227f7 */

void __thiscall
FUN_004227f7(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  void *local_24;
  void *local_20;
  short *local_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)&local_24;
  local_24 = param_3;
  local_20 = param_1;
  cVar2 = FUN_00422b77(this,param_1,param_2,param_3,param_4,param_5);
  if (cVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_1c = (short *)0x0;
      uStack_18 = 0;
      iStack_14 = 0;
      iStack_10 = 0;
      uVar4 = FUN_00422051(&local_1c,uVar3 + 10);
      if ((char)uVar4 != '\0') {
        FUN_004225d1(this,local_1c,0,iStack_14 - (int)local_1c);
        iVar1 = iStack_10;
        iStack_10 = 0;
        FUN_00425026((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_00425050(&iStack_10);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_00422051((int *)((int)this + 0x10),uVar3);
    }
    FUN_00422b77(this,local_20,param_2,local_24,param_4,param_5);
  }
  FUN_00434300(local_c ^ (uint)&local_24);
  return;
}



/* Function: FUN_004228d3 */

void __thiscall FUN_004228d3(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

{
  int iVar1;
  uint uVar2;
  uint local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_1c = *(undefined2 *)((int)this + 6);
  local_1a = *(undefined1 *)((int)this + 8);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_2 != 0) {
    do {
      uVar2 = param_2 >> 1;
      local_20 = *(int *)((int)this + 0xc) * uVar2 + param_1;
      FUN_004223ef(&local_1c,&local_20,*(void **)((int)this + 0x14));
      iVar1 = FUN_0042228b(&local_1c,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_20;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00422972 */

void __thiscall
FUN_00422972(void *this,void *param_1,void *param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  void *pvVar6;
  uint local_34;
  void *local_28;
  void *local_24;
  char local_1d;
  undefined2 local_1c;
  char local_1a;
  int local_18;
  undefined2 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_28 = (void *)0xffffffff;
  local_1c = *(undefined2 *)((int)this + 6);
  local_1a = *(char *)((int)this + 8);
  local_24 = param_1;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    local_34 = 0;
    if (*(int *)((int)param_1 + 4) != 0) {
      do {
        local_24 = param_2;
        cVar3 = FUN_004223ef(&local_1c,(uint *)&local_24,*(void **)((int)this + 0x14));
        if (cVar3 == '\0') {
          FUN_004222b8(param_1,local_34);
          pvVar6 = local_28;
          goto LAB_00422a87;
        }
        local_28 = (void *)FUN_0042228b(&local_1c,param_3,param_4);
        pvVar6 = local_28;
        if ((int)local_28 < 1) goto LAB_00422a87;
        local_34 = local_34 + 1;
        param_2 = local_24;
      } while (local_34 < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar5 = (uint)(*(int *)((int)this + 0x14) - (int)param_2) / *(uint *)((int)this + 0xc);
    if (uVar5 < *(uint *)((int)param_1 + 4)) {
      FUN_004222b8(param_1,uVar5);
    }
    iVar1 = *(int *)((int)this + 0xc);
    iVar2 = *(int *)((int)local_24 + 4);
    pvVar6 = (void *)FUN_004228d3(this,(uint)param_2,*(uint *)((int)local_24 + 4),param_3,param_4);
    if (pvVar6 < (void *)(iVar1 * iVar2 + (int)param_2)) {
      local_28 = pvVar6;
      FUN_004223ef(&local_1c,(uint *)&local_28,*(void **)((int)this + 0x14));
      pvVar6 = (void *)FUN_0042228b(&local_1c,param_3,param_4);
LAB_00422a87:
      if (pvVar6 == (void *)0x0) {
        local_1d = local_1a != '\0';
        if (local_1a != '\0') {
          FUN_004222b8(&local_1c,local_18 + param_5);
        }
        if ((local_1d == '\0') && (*(char *)((int)this + 0x20) == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined1 *)((int)this + 0x20) = uVar4;
      }
    }
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00422ac6 */

void __thiscall FUN_00422ac6(void *this,void *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_20 = param_2;
  if (*(int *)((int)this + 0xc) == 0) {
    local_1c = *(undefined2 *)((int)this + 6);
    local_1a = *(undefined1 *)((int)this + 8);
    uVar2 = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    if (*(int *)((int)param_1 + 4) != 0) {
      do {
        cVar1 = FUN_004223ef(&local_1c,&local_20,*(void **)((int)this + 0x14));
        if (cVar1 == '\0') break;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)param_1 + 4));
    }
    FUN_004222b8(param_1,uVar2);
  }
  else {
    uVar2 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar2 < *(uint *)((int)param_1 + 4)) {
      FUN_004222b8(param_1,uVar2);
    }
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00422b77 */

void __thiscall
FUN_00422b77(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  ushort local_44;
  undefined1 local_42;
  int local_40;
  undefined2 local_3c;
  undefined4 local_38;
  void *local_34;
  size_t local_30;
  int local_2c;
  void *local_28;
  void *local_24;
  char local_1d;
  ushort local_1c;
  char local_1a;
  int local_18;
  undefined2 local_14;
  undefined4 local_10;
  void *local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_28 = param_3;
  local_30 = param_4;
  local_2c = param_5;
  if (*(int *)((int)this + 0x10) == 0) goto LAB_00422d4f;
  local_1c = *(ushort *)((int)this + 2);
  pvVar6 = (void *)(*(int *)((int)this + 0x10) + 10);
  local_1a = *(char *)((int)this + 4);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = (void *)0x0;
  local_1d = '\0';
  while (local_24 = pvVar6,
        cVar1 = FUN_004223ef(&local_1c,(uint *)&local_24,*(void **)((int)this + 0x14)),
        cVar1 != '\0') {
    iVar2 = FUN_0042228b(&local_1c,param_1,param_2);
    if (iVar2 < 0) {
LAB_00422cda:
      local_24 = pvVar6;
      if (cVar1 != '\0') goto LAB_00422c1c;
      break;
    }
    if (iVar2 == 0) {
      pvVar6 = (void *)FUN_00422972(this,&local_1c,local_24,local_28,local_30,local_2c);
      local_24 = pvVar6;
      if (pvVar6 != (void *)0x0) {
        local_1d = '\x01';
        goto LAB_00422cda;
      }
      goto LAB_00422d4f;
    }
    pvVar6 = (void *)FUN_00422ac6(this,&local_1c,(uint)local_24);
  }
  *(void **)((int)this + 0x14) = local_24;
LAB_00422c1c:
  pvVar6 = local_24;
  uVar5 = 0;
  if (local_1d == '\0') {
    local_10 = 0;
    local_14 = (undefined2)param_2;
    local_18 = 1;
    local_c = param_1;
    uVar5 = FUN_004222fe(&local_1c);
  }
  local_44 = *(ushort *)((int)this + 6);
  local_38 = 0;
  local_42 = *(undefined1 *)((int)this + 8);
  local_40 = local_2c;
  local_3c = (undefined2)local_30;
  local_34 = local_28;
  uVar3 = FUN_004222fe(&local_44);
  local_28 = (void *)(uVar3 + uVar5);
  uVar5 = *(uint *)((int)this + 0x18);
  uVar3 = *(uint *)((int)this + 0x14);
  if ((void *)(-(uint)(uVar3 < uVar5) & uVar5 - uVar3) < local_28) goto LAB_00422d4f;
  uVar3 = uVar3 - (int)pvVar6;
  if (uVar3 != 0) {
    if (((void *)((int)local_28 + (int)pvVar6) == (void *)0x0) || (pvVar6 == (void *)0x0)) {
      puVar4 = (undefined4 *)o__errno();
      *puVar4 = 0x16;
    }
    else {
      if (uVar3 <= (uVar5 - (int)local_28) - (int)pvVar6) {
        memmove((void *)((int)local_28 + (int)pvVar6),pvVar6,uVar3);
        goto LAB_00422d07;
      }
      puVar4 = (undefined4 *)o__errno();
      *puVar4 = 0x22;
    }
    o__invalid_parameter_noinfo();
  }
LAB_00422d07:
  pvVar6 = (void *)(*(int *)((int)this + 0x14) + (int)local_28);
  *(void **)((int)this + 0x14) = pvVar6;
  if (local_1d == '\0') {
    FUN_00422329(&local_1c,(int *)&local_24,pvVar6);
  }
  else if (local_1a != '\0') {
    FUN_004222b8(&local_1c,local_18 + 1);
  }
  FUN_00422329(&local_44,(int *)&local_24,*(void **)((int)this + 0x14));
  *(undefined1 *)((int)this + 0x20) = 1;
LAB_00422d4f:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00422d66 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00422d66(uint param_1,int param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  undefined4 extraout_ECX_00;
  undefined1 local_10b8 [8];
  undefined **local_10b0;
  undefined4 *local_10ac;
  undefined4 *puStack_10a8;
  undefined1 *puStack_10a4;
  undefined ***local_1078;
  uint local_106c;
  undefined2 *local_1068;
  uint local_1064;
  uint local_1060;
  char local_1059;
  undefined1 local_1058 [16];
  int local_1048;
  int local_1044;
  int local_103c;
  char local_1038;
  char local_1037;
  undefined4 *local_1034;
  undefined4 *local_1030;
  undefined1 *local_102c;
  undefined4 local_1028;
  undefined4 local_1024;
  undefined4 local_1020;
  uint local_101c;
  short local_1018 [2050];
  uint local_14;
  
  local_14 = DAT_00436100 ^ (uint)&stack0xfffffff0;
  local_1064 = 0;
  local_1028 = 0;
  local_1068 = param_3;
  local_106c = param_1 + param_2 * 8;
  local_1060 = param_1;
  while( true ) {
    FUN_004224b0(local_1058,*local_1068,local_1068[1],*(undefined1 *)(local_1068 + 2),local_1068[3],
                 *(undefined1 *)(local_1068 + 4));
    local_101c = 0x1000;
    uVar2 = FUN_004215e3(extraout_ECX,&local_1020,local_1018,&local_101c);
    FUN_00420be1(uVar2);
    if (uVar2 != 0) {
      local_1020 = 0;
      local_101c = 0;
    }
    FUN_004225d1(local_1058,local_1018,local_101c,0x1000);
    if (local_1037 != '\0') break;
    local_10ac = &local_1024;
    local_1024 = 0;
    puStack_10a8 = &local_1028;
    local_10b0 = &PTR_FUN_004010b0;
    puStack_10a4 = local_1058;
    local_1078 = &local_10b0;
    local_1034 = local_10ac;
    local_1030 = puStack_10a8;
    local_102c = puStack_10a4;
    local_1059 = FUN_004226bc(local_1068,(int)local_10b8);
    uVar2 = local_1060;
    if (local_1038 == '\0') {
LAB_00422f21:
      uVar2 = uVar2 + 8;
      local_1028 = local_1024;
      local_1060 = uVar2;
    }
    else {
      iVar3 = local_1044 - local_1048;
      iVar3 = FUN_00421637(local_1060,local_1048,iVar3,iVar3,iVar3,local_1020,1);
      if (iVar3 != -0x3fffffff) {
        if (iVar3 != 0) {
          FUN_00421637(uVar2,local_1048,local_1044 - local_1048,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_00422f21;
      }
      local_1064 = local_1064 + 1;
      local_1059 = '\0';
    }
    uVar1 = local_1064;
    FUN_00425050(&local_103c);
    if (((local_1059 != '\0') || (local_106c <= uVar2)) || (0x31 < uVar1)) goto LAB_00422f74;
  }
  FUN_00425050(&local_103c);
LAB_00422f74:
  FUN_00434300(local_14 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_00422f8f */

void * __fastcall FUN_00422f8f(void *param_1)

{
  FUN_004224b0(param_1,0,4,1,4,0);
  FUN_004224b0((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_004224b0((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_00422fd1 */

void __fastcall FUN_00422fd1(undefined2 *param_1)

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
  
  local_c = DAT_00436100 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_00403bac;
    local_3c = DAT_00403ba8;
    local_30 = DAT_00403b8c;
    local_34 = DAT_00403b88;
    local_28 = DAT_00403bdc;
    local_2c = DAT_00403bd8;
    FUN_00422d66((uint)&local_3c,3,param_1);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00403bf0;
    local_34 = DAT_00403b60;
    local_38 = DAT_00403bf4;
    local_2c = DAT_00403ba0;
    local_30 = DAT_00403b64;
    local_28 = DAT_00403ba4;
    FUN_00422d66((uint)&local_3c,3,param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00403bd0;
    local_34 = DAT_00403b58;
    local_38 = DAT_00403bd4;
    local_2c = DAT_00403bb0;
    local_30 = DAT_00403b5c;
    local_24 = DAT_00403b68;
    local_28 = DAT_00403bb4;
    local_1c = DAT_00403b70;
    local_20 = DAT_00403b6c;
    local_14 = DAT_00403bc8;
    local_18 = DAT_00403b74;
    local_10 = DAT_00403bcc;
    FUN_00422d66((uint)&local_3c,6,param_1 + 0x24);
  }
  FUN_00434300(local_c ^ (uint)&local_3c);
  return;
}



/* Function: FUN_00423127 */

void __thiscall FUN_00423127(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_00422087(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_0042319e */

void __thiscall FUN_0042319e(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_00423201 */

void __thiscall FUN_00423201(void *this,PSRWLOCK param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int local_14;
  code *pcStack_c;
  
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
      if (uVar3 < uVar2) {
        do {
          piVar1 = (int *)(*(int *)((int)this + 0x18) + uVar3 * 8);
          uVar3 = uVar3 + 1;
          if (*piVar1 != 0) {
            pcStack_c = (code *)*piVar1;
            local_14 = piVar1[1];
            goto LAB_00423295;
          }
        } while (uVar3 < uVar2);
        local_14 = 0;
        pcStack_c = (code *)0x0;
      }
      else {
        local_14 = 0;
        pcStack_c = (code *)0x0;
      }
LAB_00423295:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (pcStack_c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_00437340)(local_14);
        (*pcStack_c)();
      }
      if (this != (void *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
      }
    } while (uVar3 < uVar2);
  }
  return;
}



/* Function: FUN_004232df */

void __fastcall FUN_004232df(void *param_1)

{
  FUN_0042330c(param_1);
  FUN_00425050((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_004234c5((int)param_1 + 4);
  return;
}



/* Function: FUN_0042330c */

void __fastcall FUN_0042330c(void *param_1)

{
  undefined2 local_74 [54];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  FUN_00422f8f(local_74);
  FUN_00423478(param_1,local_74);
  FUN_00422fd1(local_74);
  FUN_004234c5((int)local_74);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00423357 */

undefined1 __thiscall FUN_00423357(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_00425004((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_00424fe1((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_004233b0 */

undefined1 __thiscall FUN_004233b0(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_0042341b((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_00423357(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0042341b */

void __fastcall FUN_0042341b(PSRWLOCK param_1)

{
  undefined2 local_74 [54];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  FUN_00422f8f(local_74);
  AcquireSRWLockExclusive(param_1);
  FUN_00423478(param_1,local_74);
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
  }
  FUN_00422fd1(local_74);
  FUN_004234c5((int)local_74);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00423478 */

void __thiscall FUN_00423478(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_0042252e(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_0042252e((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_0042252e((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_004234c5 */

void __fastcall FUN_004234c5(int param_1)

{
  FUN_00425050((int *)(param_1 + 100));
  FUN_00425050((int *)(param_1 + 0x40));
  FUN_00425050((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_004234e9 */

void __fastcall FUN_004234e9(undefined1 *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_00425070(piVar3,0);
  FUN_00425070(param_1 + 0x1c,0);
  FUN_00425050((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0042395b(*(int *)(param_1 + 0x78));
  }
  FUN_00425050((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_0042224d(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_00425050((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00425882(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*piVar3 != 0) {
    FUN_00425882((PTP_TIMER)*piVar3);
  }
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    cVar1 = FUN_00420ee6();
    if (cVar1 == '\0') {
      FUN_0042583f(piVar3 + 1,(undefined4 *)&stack0xfffffff8);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_0042513c(piVar3 + 2,0);
        FUN_0042513c(piVar3 + 3,0);
        if (piVar3 != (int *)0x0) {
          DVar2 = GetLastError();
          FUN_00421734(piVar3);
          SetLastError(DVar2);
        }
        FUN_004255ea((int)piVar3);
        DVar2 = 0;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,DVar2,piVar3);
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        FUN_00421734(piVar3);
      }
    }
    else {
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_0042330c(piVar3 + 4);
      }
    }
    return;
  }
  return;
}



/* Function: FUN_00423583 */

void __thiscall FUN_00423583(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((((*this != '\0') && (bVar1 = FUN_00423727((int)this), bVar1)) &&
      (cVar2 = FUN_004233b0(*(void **)((int)this + 0xc),param_1,param_2,param_3), cVar2 != '\0')) &&
     (cVar2 = FUN_00420ee6(), cVar2 == '\0')) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    FUN_004237b4(this);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_004235e0 */

void __thiscall FUN_004235e0(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_00420ee6(), cVar1 == '\0')) &&
     (bVar2 = FUN_00423727((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_00423127(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x423910,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_00423127((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00423687 */

void __fastcall FUN_00423687(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00420ee6();
  if (cVar1 == '\0') {
    bVar2 = FUN_00423727(param_1);
    if (bVar2) {
      FUN_00423201(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_0042341b(*(PSRWLOCK *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



/* Function: FUN_004236bd */

void __thiscall FUN_004236bd(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  PSRWLOCK SRWLock;
  char cVar1;
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined4 local_8;
  
                    /* WARNING: Load size is inaccurate */
  if ((*this != '\0') && (cVar1 = FUN_00420ee6(), cVar1 == '\0')) {
    SRWLock = (PSRWLOCK)((int)this + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    local_a = 0;
    local_10 = param_1;
    local_c = param_2;
    local_8 = param_3;
    FUN_00422087((void *)((int)this + 0x7c),&local_10,0xc);
    FUN_00423815(this);
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00423727 */

bool __fastcall FUN_00423727(int param_1)

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
        iVar1 = FUN_00425352(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_004237b4 */

void __fastcall FUN_004237b4(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00425de0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00425070(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00421f65(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_00423815 */

void __fastcall FUN_00423815(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00425e20,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00425070(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00421f65(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_00423880 */

void FUN_00423880(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00423201(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_004238a3 */

bool __fastcall FUN_004238a3(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_004365a4;
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0x4c);
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_00421399("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_004365a4 = pcVar2, pcVar2 == (code *)0x0)) {
      iVar3 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_00437340)(FUN_00423880,param_1,0,piVar1);
      iVar3 = (*pcVar2)();
    }
  }
  return iVar3 == 0;
}



/* Function: FUN_00423910 */

void FUN_00423910(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00423201(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_00423933 */

LPCRITICAL_SECTION __fastcall FUN_00423933(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_0042395b */

void FUN_0042395b(int param_1)

{
  if ((param_1 != 0) && (DAT_004366f0 != (PSRWLOCK)0x0)) {
    FUN_0042319e(DAT_004366f0 + 0x1c,DAT_004366f0,param_1);
  }
  return;
}



/* Function: FUN_00423990 */

void FUN_00423990(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_00423687(0x4366e4);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_00421690(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_00423583(&DAT_004366e4,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_004236bd(&DAT_004366e4,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_00423a10 */

void FUN_00423a10(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_004235e0(&DAT_004366e4,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_004366e4 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_004366f4);
      bVar1 = FUN_004238a3(0x4366e4);
      if (bVar1) {
        FUN_00423127(&DAT_00436708,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004366f4);
    }
  }
  return;
}



/* Function: FUN_00423a80 */

void FUN_00423a80(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_004366e4 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_00436734;
  }
  else {
    if (DAT_004366e4 == '\0') {
      return;
    }
    this = &DAT_00436708;
  }
  FUN_0042319e(this,(PSRWLOCK)&DAT_004366f4,param_1);
  return;
}



/* Function: FUN_00423ac4 */

char * __fastcall FUN_00423ac4(uint param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = FUN_00427be2(param_1);
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (pcVar1[iVar2] != "Unknown Error"[iVar2]) {
      return pcVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xe);
  if ((param_1 & 0x1fff0000) == 0x70000) {
    pcVar1 = FUN_00428c8c(param_1);
    return pcVar1;
  }
  if ((param_1 & 0x1fff0000) == 0xf0000) {
    pcVar1 = FUN_004281c0(param_1);
    return pcVar1;
  }
  if ((param_1 & 0x1fff0000) != 0xe5e0000) {
    pcVar1 = FUN_0042fdb6(param_1);
    do {
      if (pcVar1[iVar3] != "Unknown Error"[iVar3]) {
        return pcVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0xe);
    pcVar1 = "NTSTATUS Error";
    if (param_1 != (param_1 | 0x10000000)) {
      pcVar1 = "Unknown Error";
    }
    return pcVar1;
  }
  pcVar1 = FUN_004307cc(param_1);
  return pcVar1;
}



/* Function: FUN_00423b62 */

void __cdecl FUN_00423b62(uint param_1,char param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  LPCSTR lpOutputString;
  CHAR local_808 [1024];
  CHAR local_408 [1023];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_004350af(local_408,0x3ff,param_3,&stack0x00000010);
  if (((int)uVar1 < 0) || (0x3ff < uVar1)) {
    local_9 = 0;
  }
  else {
    if (uVar1 == 0x3ff) {
      local_9 = 0;
    }
    if (param_2 == '\0') {
      lpOutputString = local_408;
    }
    else {
      FUN_00423ac4(param_1);
      iVar2 = FUN_004205fc(local_808,0x400,"%hs [HRESULT = 0x%08x - %hs]");
      if (iVar2 < 0) goto LAB_00423bf4;
      lpOutputString = local_808;
    }
    OutputDebugStringA(lpOutputString);
  }
LAB_00423bf4:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00423c10 */

undefined4 FUN_00423c10(void)

{
  return 2;
}



/* Function: FUN_00423c20 */

void FUN_00423c20(undefined4 *param_1)

{
  *param_1 = DAT_00403b78;
  param_1[1] = DAT_00403b7c;
  param_1[2] = DAT_00403b80;
  param_1[3] = DAT_00403b84;
  return;
}



/* Function: FUN_00423c40 */

undefined4 FUN_00423c40(void)

{
  return 1;
}



/* Function: FUN_00423c50 */

void FUN_00423c50(void)

{
  return;
}



/* Function: FUN_00423c60 */

wchar_t * FUN_00423c60(void)

{
  return L"CbsLogMonitorProvider";
}



/* Function: FUN_00423c70 */

void __fastcall FUN_00423c70(undefined4 param_1)

{
  FUN_00434314(param_1);
  return;
}



/* Function: FUN_00423c90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423c90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_c = 0;
  if (param_1 != (int *)0x0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    (*(code *)PTR_guard_check_icall_00437340)(&local_c,0);
    iVar2 = (*pcVar1)();
    pcVar1 = DAT_00436638;
    if (iVar2 != 0) {
      bVar4 = CARRY4(local_c,_DAT_00436698);
      _DAT_00436698 = local_c + _DAT_00436698;
      _DAT_0043669c = _DAT_0043669c + (uint)bVar4;
      if ((_DAT_0043669c != 0) || (0x40000000 < (_DAT_00436698 & 0xc0000000))) {
        (*(code *)PTR_guard_check_icall_00437340)();
        piVar3 = (int *)(*pcVar1)();
        if (piVar3 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar3 + 4);
          (*(code *)PTR_guard_check_icall_00437340)(piVar3,DAT_00436634);
          (*pcVar1)();
          pcVar1 = *(code **)(*piVar3 + 4);
          (*(code *)PTR_guard_check_icall_00437340)(piVar3,DAT_004366c0);
          (*pcVar1)();
          pcVar1 = DAT_004365ac;
          DAT_004366c0 = 0;
          DAT_00436634 = 0;
          (*(code *)PTR_guard_check_icall_00437340)();
          (*pcVar1)();
        }
      }
    }
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00423d90 */

undefined4 * FUN_00423d90(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00433ff3(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00401090;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



/* Function: FUN_00423dac */

void __fastcall FUN_00423dac(short *param_1)

{
  int iVar1;
  uint uVar2;
  HANDLE pvVar3;
  LONG LVar4;
  BOOL BVar5;
  DWORD DVar6;
  LPCWSTR pWVar7;
  _WIN32_FIND_DATAW *p_Var8;
  LPCWSTR pWVar9;
  DWORD *pDVar10;
  HANDLE local_4b8;
  DWORD local_4b4 [5];
  FILETIME local_4a0 [71];
  _WIN32_FIND_DATAW local_264;
  LPCWSTR local_10;
  LPCWSTR local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_10 = (LPCWSTR)0x0;
  memset(&local_264,0,0x250);
  memset(local_4b4,0,0x250);
  local_c = (LPCWSTR)0x0;
  iVar1 = FUN_00431c75(L"NumCBSPersistLogs",&local_c);
  pWVar7 = local_c;
  if (iVar1 < 0) {
    pWVar7 = (LPCWSTR)0x5;
  }
  uVar2 = FUN_00426a2d((int *)&local_10,param_1);
  if ((int)uVar2 < 0) {
    FUN_00424d95(0x4000000,uVar2,'\x01',
                 "Failed to allocate delete search string for backup logs directory path: %ws");
  }
  else {
    uVar2 = FUN_00426574((int *)&local_10,L"\\CbsPersist_*.*");
    if ((int)uVar2 < 0) {
      FUN_00424d95(0x4000000,uVar2,'\x01',
                   "Failed to allocate delete search string for backup logs path.");
    }
    else {
      while( true ) {
        pWVar9 = (LPCWSTR)0x0;
        local_4b8 = (HANDLE)0x0;
        local_c = (LPCWSTR)0x0;
        pvVar3 = FindFirstFileW(local_10,&local_264);
        FUN_00424f8b(&local_4b8,(int)pvVar3);
        pvVar3 = local_4b8;
        if ((local_4b8 != (HANDLE)0x0) && (local_4b8 != (HANDLE)0xffffffff)) {
          do {
            if (((byte)local_264.dwFileAttributes & 0x10) == 0) {
              if ((pWVar9 == (LPCWSTR)0x0) ||
                 (LVar4 = CompareFileTime(local_4a0,&local_264.ftLastWriteTime), 0 < LVar4)) {
                p_Var8 = &local_264;
                pDVar10 = local_4b4;
                for (iVar1 = 0x94; pvVar3 = local_4b8, pWVar9 = local_c, iVar1 != 0;
                    iVar1 = iVar1 + -1) {
                  *pDVar10 = p_Var8->dwFileAttributes;
                  p_Var8 = (_WIN32_FIND_DATAW *)&p_Var8->ftCreationTime;
                  pDVar10 = pDVar10 + 1;
                }
              }
              pWVar9 = (LPCWSTR)((int)pWVar9 + 1);
              local_c = pWVar9;
            }
            BVar5 = FindNextFileW(pvVar3,&local_264);
          } while (BVar5 != 0);
          if ((pvVar3 != (HANDLE)0x0) && (pvVar3 != (HANDLE)0xffffffff)) {
            FUN_00421595(pvVar3);
            pvVar3 = (HANDLE)0x0;
          }
        }
        if (local_c <= pWVar7) goto joined_r0x00423fee;
        local_c = (LPCWSTR)0x0;
        uVar2 = FUN_00426851((int *)&local_c,L"%ws\\%ws");
        pWVar9 = local_c;
        if ((int)uVar2 < 0) {
          FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate path for oldest backup log.");
          if (local_c != (LPCWSTR)0x0) {
            FUN_00426b01((int)local_c);
          }
          goto joined_r0x00423fee;
        }
        BVar5 = DeleteFileW(local_c);
        if (BVar5 == 0) break;
        if (pWVar9 != (LPCWSTR)0x0) {
          FUN_00426b01((int)pWVar9);
        }
        if ((pvVar3 != (HANDLE)0x0) && (pvVar3 != (HANDLE)0xffffffff)) {
          FUN_00421595(pvVar3);
        }
      }
      DVar6 = GetLastError();
      uVar2 = DVar6 & 0xffff | 0x80070000;
      if ((int)DVar6 < 1) {
        uVar2 = DVar6;
      }
      if (-1 < (int)uVar2) {
        uVar2 = 0x80004005;
      }
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to delete oldest backup log.");
      if (pWVar9 != (LPCWSTR)0x0) {
        FUN_00426b01((int)pWVar9);
      }
joined_r0x00423fee:
      if ((pvVar3 != (HANDLE)0x0) && (pvVar3 != (HANDLE)0xffffffff)) {
        FUN_00421595(pvVar3);
      }
    }
  }
  if (local_10 != (LPCWSTR)0x0) {
    FUN_00426b01((int)local_10);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00424020 */

void __fastcall FUN_00424020(short *param_1)

{
  WCHAR WVar1;
  code *pcVar2;
  FARPROC pFVar3;
  undefined4 *puVar4;
  short *psVar5;
  HMODULE hModule;
  short *psVar6;
  DWORD DVar7;
  BOOL BVar8;
  int iVar9;
  LPCWSTR pWVar10;
  int *piVar11;
  FARPROC pFVar12;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar13;
  uint uVar14;
  LPCWSTR pWVar15;
  LPCWSTR pWVar16;
  bool bVar17;
  char *pcVar18;
  undefined1 auStack_504 [4];
  undefined4 *local_500;
  short *local_4fc;
  undefined4 *local_4f8;
  int local_4f4;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined *puStack_4dc;
  undefined *puStack_4d8;
  undefined *puStack_4d4;
  undefined *puStack_4d0;
  undefined *puStack_4cc;
  undefined4 uStack_4c8;
  wchar_t *pwStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  wchar_t *local_4b4;
  LPCWSTR local_4b0;
  LPCWSTR local_4ac;
  short *local_4a8;
  LPCWSTR local_4a4;
  _SYSTEMTIME _Stack_4a0;
  WCHAR aWStack_490 [64];
  WCHAR aWStack_410 [514];
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)auStack_504;
  local_500 = (undefined4 *)0x0;
  pWVar15 = (LPCWSTR)0x0;
  local_4b4 = (wchar_t *)0x0;
  pWVar16 = (LPCWSTR)0x0;
  local_4a4 = (LPCWSTR)0x0;
  local_4a8 = (short *)0x0;
  local_4f8 = (undefined4 *)0x0;
  local_4b0 = (LPCWSTR)0x0;
  local_4f4 = 3;
  local_4ac = (LPCWSTR)0x0;
  LOCK();
  UNLOCK();
  local_4fc = param_1;
  if (DAT_004366b4 + 1 < 2) {
    if (param_1 == (short *)0x0) {
      uVar14 = 0x80070057;
      pcVar18 = "No core dll path specified";
      goto LAB_00424089;
    }
    DAT_004366b4 = DAT_004366b4 + 1;
    uVar14 = FUN_00426fdc((int *)&local_4a8);
    if ((int)uVar14 < 0) {
      pcVar18 = "Failed to get windows directory for WDSCORE DLL path.";
      goto LAB_00424b50;
    }
    psVar5 = (short *)FUN_00426a2d((int *)&local_4b0,local_4fc);
    if ((int)psVar5 < 0) {
      pcVar18 = "Failed to allocate relative path to WDSCORE DLL.";
LAB_004240de:
      FUN_00423b62((uint)psVar5,'\x01',pcVar18);
      pWVar15 = local_4b0;
      goto LAB_00424b5d;
    }
    psVar5 = (short *)FUN_00426b14((int *)&local_4b0);
    if ((int)psVar5 < 0) {
LAB_00424100:
      pcVar18 = "Failed to ensure Wds path ended with a backslash: %ws";
      pWVar15 = local_4b0;
      goto LAB_0042410c;
    }
    psVar5 = (short *)FUN_00426574((int *)&local_4b0,L"wdscore.dll");
    pWVar15 = local_4b0;
    local_4fc = psVar5;
    if ((int)psVar5 < 0) {
      pcVar18 = "Failed to concat full path to WDSCORE DLL";
      goto LAB_004240de;
    }
    hModule = LoadLibraryW(local_4b0);
    if (DAT_00436550 != (HMODULE)0x0) {
LAB_00424bf0:
      RtlRaiseStatus(0xc00000e5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (hModule == (HMODULE)0x0) {
      DAT_00436550 = hModule;
      uVar14 = FUN_00426a2d((int *)&local_4b0,local_4a8);
      if (-1 < (int)uVar14) {
        psVar5 = (short *)FUN_00426b14((int *)&local_4b0);
        if ((int)psVar5 < 0) goto LAB_00424100;
        psVar5 = (short *)FUN_004266b5((int *)&local_4b0,L"system32\\",L"wdscore.dll");
        pWVar15 = local_4b0;
        local_4fc = psVar5;
        if ((int)psVar5 < 0) {
          pcVar18 = "Failed to allocate full path to WDSCORE DLL.";
          goto LAB_004240de;
        }
        hModule = LoadLibraryW(local_4b0);
        if (DAT_00436550 != (HMODULE)0x0) goto LAB_00424bf0;
        if (hModule != (HMODULE)0x0) goto LAB_0042422c;
        DAT_00436550 = hModule;
        psVar6 = (short *)GetLastError();
        if (psVar6 == (short *)0x7e) {
          FUN_00423b62(1,'\x01',
                       "Could not load WDSCORE DLL from path: %ws.  Continuing without text file logging."
                      );
          goto LAB_00424ba3;
        }
        pcVar18 = "Failed to load WDSCORE DLL: %ws";
        psVar5 = (short *)((uint)psVar6 & 0xffff | 0x80070000);
        if ((int)psVar6 < 1) {
          psVar5 = psVar6;
        }
        if (-1 < (int)psVar5) {
          psVar5 = (short *)0x80004005;
        }
        goto LAB_0042410c;
      }
      FUN_00423b62(uVar14,'\x01',"Failed to allocate Wds path from windows directory: %ws");
      pWVar15 = local_4b0;
      goto LAB_00424b5d;
    }
LAB_0042422c:
    DAT_00436550 = hModule;
    DAT_004366bc = GetProcAddress(hModule,"WdsSetupLogInit");
    if (DAT_004366bc == (FARPROC)0x0) {
      DVar7 = GetLastError();
      pcVar18 = "Failed to get proc address for WdsSetupLogInit.";
      uVar14 = DVar7 & 0xffff | 0x80070000;
      if ((int)DVar7 < 1) {
        uVar14 = DVar7;
      }
      if (-1 < (int)uVar14) {
        uVar14 = 0x80004005;
      }
LAB_00424b50:
      FUN_00423b62(uVar14,'\x01',pcVar18);
      goto LAB_00424b5d;
    }
    DAT_00436640 = GetProcAddress(DAT_00436550,"WdsGenericSetupLogInit");
    if (DAT_00436640 == (FARPROC)0x0) {
      DVar7 = GetLastError();
      pcVar18 = "Failed to get proc address for WdsGenericSetupLogInit.";
      uVar14 = DVar7 & 0xffff | 0x80070000;
      if ((int)DVar7 < 1) {
        uVar14 = DVar7;
      }
      if (-1 < (int)uVar14) {
        uVar14 = 0x80004005;
      }
      goto LAB_00424b50;
    }
    DAT_00436638 = GetProcAddress(DAT_00436550,"WdsGetSetupLog");
    if (DAT_00436638 == (FARPROC)0x0) {
      DVar7 = GetLastError();
      pcVar18 = "Failed to get proc address for WdsGetSetupLog.";
      uVar14 = DVar7 & 0xffff | 0x80070000;
      if ((int)DVar7 < 1) {
        uVar14 = DVar7;
      }
      if (-1 < (int)uVar14) {
        uVar14 = 0x80004005;
      }
      goto LAB_00424b50;
    }
    DAT_004365ac = GetProcAddress(DAT_00436550,"WdsSetupLogDestroy");
    if (DAT_004365ac == (FARPROC)0x0) {
      DVar7 = GetLastError();
      pcVar18 = "Failed to get proc address for WdsSetupLogDestroy.";
      uVar14 = DVar7 & 0xffff | 0x80070000;
      if ((int)DVar7 < 1) {
        uVar14 = DVar7;
      }
      if (-1 < (int)uVar14) {
        uVar14 = 0x80004005;
      }
      goto LAB_00424b50;
    }
    DAT_00436644 = GetProcAddress(DAT_00436550,"WdsSetupLogMessageA");
    if (DAT_00436644 == (FARPROC)0x0) {
      DVar7 = GetLastError();
      pcVar18 = "Failed to get proc address for WdsSetupLogMessageA.";
      uVar14 = DVar7 & 0xffff | 0x80070000;
      if ((int)DVar7 < 1) {
        uVar14 = DVar7;
      }
      if (-1 < (int)uVar14) {
        uVar14 = 0x80004005;
      }
      goto LAB_00424b50;
    }
    DAT_004366a8 = GetProcAddress(DAT_00436550,"ConstructPartialMsgVA");
    if (DAT_004366a8 == (FARPROC)0x0) {
      DVar7 = GetLastError();
      pcVar18 = "Failed to get proc address for ConstructPartialMsgVA.";
      uVar14 = DVar7 & 0xffff | 0x80070000;
      if ((int)DVar7 < 1) {
        uVar14 = DVar7;
      }
      if (-1 < (int)uVar14) {
        uVar14 = 0x80004005;
      }
      goto LAB_00424b50;
    }
    DAT_004366b8 = GetProcAddress(DAT_00436550,"CurrentIP");
    if (DAT_004366b8 == (FARPROC)0x0) {
      DVar7 = GetLastError();
      pcVar18 = "Failed to get proc address for CurrentIP.";
      uVar14 = DVar7 & 0xffff | 0x80070000;
      if ((int)DVar7 < 1) {
        uVar14 = DVar7;
      }
      if (-1 < (int)uVar14) {
        uVar14 = 0x80004005;
      }
      goto LAB_00424b50;
    }
    FUN_00424cfe(&local_4b4);
    if (local_4b4 != (wchar_t *)0x0) {
      local_500 = (undefined4 *)0x0;
      FUN_00427941(extraout_ECX,L"SYSTEM\\Setup",extraout_ECX,L"SystemSetupInProgress",&local_500);
      if (local_500 == (undefined4 *)0x0) {
        local_500 = (undefined4 *)0x0;
        FUN_00427941(0,L"SYSTEM\\Setup",0,L"OOBEInProgress",&local_500);
      }
      local_4f8 = local_500;
      if (local_500 == (undefined4 *)0x0) goto LAB_00424466;
      goto LAB_004247bb;
    }
LAB_00424466:
    memset(aWStack_410,0,0x400);
    DVar7 = GetEnvironmentVariableW(L"COMPONENT_BASED_SERVICING_LOGFILE",aWStack_410,0x200);
    if (DVar7 - 1 < 0x1ff) {
      psVar5 = (short *)FUN_00426a2d((int *)&local_4b4,aWStack_410);
      local_4fc = psVar5;
      if ((int)psVar5 < 0) {
        pcVar18 = "Failed to allocate log file name: %ws";
        goto LAB_0042410c;
      }
LAB_004247c3:
      if (local_4b4 == (LPCWSTR)0x0) {
LAB_00424805:
        local_4f4 = 1;
        iVar9 = FUN_00431c75(L"CBSLogCompress",&local_4f4);
        if (iVar9 < 0) {
          local_4f4 = 1;
        }
        bVar17 = local_4f4 == 0;
        local_4f4 = 0;
        if (bVar17) {
          FUN_00424f6d(&local_4f4);
          FUN_004274ad(local_4b4);
        }
        else {
          FUN_00424f6d(&local_4f4);
          FUN_00427610(local_4b4);
        }
        FUN_0042551b(&local_4f4);
      }
      else {
        DVar7 = GetFileAttributesW(local_4b4);
        if (DVar7 == 0xffffffff) {
          GetLastError();
          goto LAB_00424805;
        }
        if ((DVar7 & 0x10) != 0) goto LAB_00424805;
      }
      pFVar3 = DAT_004366bc;
      pFVar12 = DAT_00436640;
      if (local_500 == (undefined4 *)0x0) {
        (*(code *)PTR_guard_check_icall_00437340)(local_4b4,0x8000);
        iVar9 = (*pFVar12)();
        if (iVar9 == 0) {
          uVar14 = 0x80004005;
          pcVar18 = "Failed to initialize logging with DLL: %ws, log file: %ws";
          goto LAB_0042489a;
        }
        local_4ac = (LPCWSTR)0x400;
        memset(aWStack_490,0,0x80);
        DVar7 = GetEnvironmentVariableW(L"COMPONENT_BASED_SERVICING_LOGLEVEL",aWStack_490,0x40);
        if (DVar7 - 1 < 0x3f) {
          local_4f4 = 0;
          pWVar10 = (LPCWSTR)o_wcstoul(aWStack_490,&local_4f4,0x10);
          local_4ac = pWVar10;
          if ((pWVar10 == (LPCWSTR)0x0) &&
             (piVar11 = (int *)o__errno(), local_4ac = pWVar10, *piVar11 == 0x22)) {
            local_4ac = (LPCWSTR)0x400;
          }
        }
        pFVar12 = DAT_00436638;
        (*(code *)PTR_guard_check_icall_00437340)();
        local_500 = (undefined4 *)(*pFVar12)();
        if (local_500 == (undefined4 *)0x0) {
          FUN_00423b62(0x8000ffff,'\x01',"Failed to acquire log manager");
          psVar5 = local_4fc;
          goto LAB_00424b2b;
        }
        if (local_4ac == (LPCWSTR)0x100) {
          uVar13 = 0;
        }
        else if (local_4ac == (LPCWSTR)0x200) {
          uVar13 = 0x2000000;
        }
        else {
          uVar13 = 0x4000000;
          if (local_4ac != (LPCWSTR)0x400) {
            uVar13 = 0x9000000;
          }
        }
        uStack_4f0 = CONCAT44(uVar13,&DAT_00403968);
        puStack_4d8 = &DAT_00403968;
        uStack_4e8 = 1;
        pwStack_4c4 = local_4b4;
        uStack_4e4 = 0;
        uStack_4c8 = 0;
        uStack_4c0 = 0;
        uStack_4bc = 0;
        uStack_4b8 = 0;
        puStack_4dc = &DAT_00403970;
        puStack_4d4 = &DAT_00403978;
        puStack_4d0 = &DAT_00403980;
        puStack_4cc = &DAT_00403988;
        pcVar2 = *(code **)*local_500;
        (*(code *)PTR_guard_check_icall_00437340)
                  (local_500,&DAT_00403b90,&uStack_4f0,&DAT_00403bb8,&puStack_4dc,&DAT_00403be0,
                   &pwStack_4c4,&DAT_00436634);
        iVar9 = (*pcVar2)();
        if (iVar9 != 0) {
          pFVar12 = GetProcAddress(DAT_00436550,"WdsLogRegisterProvider");
          if (pFVar12 == (FARPROC)0x0) {
LAB_00424b31:
            pcVar18 = "Failed to register CbsLogMonitor provider";
          }
          else {
            (*(code *)PTR_guard_check_icall_00437340)(&DAT_00403b78,FUN_00423d90);
            iVar9 = (*pFVar12)();
            if (iVar9 != 1) goto LAB_00424b31;
            pcVar2 = *(code **)*local_500;
            (*(code *)PTR_guard_check_icall_00437340)
                      (local_500,&DAT_00403b90,&uStack_4f0,&DAT_00403bb8,&puStack_4dc,&DAT_00403b78,
                       0,&DAT_004366c0);
            iVar9 = (*pcVar2)();
            if (iVar9 != 0) goto LAB_00424ae4;
            pcVar18 = "Failed to add CbsLogMonitor provider";
          }
          FUN_00424d95(0x4000000,0,'\0',pcVar18);
          goto LAB_00424ae4;
        }
        FUN_00423b62(0x8000ffff,'\x01',"Failed to configure logging settings");
        goto LAB_00424b17;
      }
      (*(code *)PTR_guard_check_icall_00437340)(0,0xb000,local_4b4);
      iVar9 = (*pFVar3)();
      psVar5 = local_4fc;
      if (iVar9 == 0) {
        uVar14 = 0x8000ffff;
        pcVar18 = "Failed to initialize logging with dll: %ws, log directory: %ws";
LAB_0042489a:
        FUN_00423b62(uVar14,'\x01',pcVar18);
        goto LAB_00424b5d;
      }
    }
    else {
      iVar9 = FUN_00427941(extraout_ECX_00,
                           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Component Based Servicing"
                           ,extraout_ECX_00,L"EnableLog",&local_4f8);
      if ((iVar9 < 0) || (local_4f8 == (undefined4 *)0x0)) {
        uVar14 = 0x80004004;
        pcVar18 = "WDS logging is not enabled in the registry, continuing without logging.";
        goto LAB_00424b50;
      }
      iVar9 = FUN_00427714(extraout_ECX_01,
                           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\SideBySide\\Configuration"
                           ,extraout_ECX_01,L"LogPath",(int *)&local_4b4);
      if ((iVar9 < 0) || (*local_4b4 == L'\0')) {
        psVar5 = (short *)FUN_00426a2d((int *)&local_4b4,local_4a8);
        if ((int)psVar5 < 0) {
          pcVar18 = "Failed to allocate log directory from windows directory: %ws";
        }
        else {
          psVar5 = (short *)FUN_00426b14((int *)&local_4b4);
          if ((int)psVar5 < 0) {
            pcVar18 = "Failed to ensure log directory ended with a backslash: %ws";
          }
          else {
            psVar5 = (short *)FUN_00426574((int *)&local_4b4,L"Logs\\CBS");
            if (-1 < (int)psVar5) {
              uVar14 = FUN_00426a2d((int *)&local_4ac,local_4b4);
              if ((int)uVar14 < 0) {
                pcVar18 = "Failed to store log path argument: %ws";
              }
              else {
                uVar14 = FUN_00426574((int *)&local_4b4,L"\\CBS.log");
                if (-1 < (int)uVar14) goto LAB_00424620;
                pcVar18 = "Failed to add log name log directory: %ws";
              }
              goto LAB_0042452b;
            }
            pcVar18 = "Failed to concat CBS name on to log directory: %ws";
          }
        }
LAB_0042410c:
        FUN_00423b62((uint)psVar5,'\x01',pcVar18);
        goto LAB_00424b5d;
      }
      uVar14 = FUN_0042707f(local_4b4,(int *)&local_4ac);
      if ((int)uVar14 < 0) {
        pcVar18 = "Failed to get log path from: %ws";
LAB_0042452b:
        FUN_00423b62(uVar14,'\x01',pcVar18);
        pWVar16 = local_4ac;
        goto LAB_00424b5d;
      }
      pWVar16 = local_4ac;
      do {
        WVar1 = *pWVar16;
        pWVar16 = pWVar16 + 1;
      } while (WVar1 != L'\0');
      iVar9 = (int)pWVar16 - (int)(local_4ac + 1) >> 1;
      if ((iVar9 != 0) && (local_4ac[iVar9 + -1] == L'\\')) {
        local_4ac[iVar9 + -1] = L'\0';
      }
LAB_00424620:
      pWVar16 = local_4ac;
      psVar5 = (short *)FUN_00427260(local_4ac,(_SECURITY_ATTRIBUTES *)0x0);
      local_4fc = psVar5;
      if ((int)psVar5 < 0) {
        pcVar18 = "Failed to ensure that logging directory exists: %ws";
        goto LAB_0042410c;
      }
      local_4b0 = (LPCWSTR)0x0;
      local_4ac = (LPCWSTR)0x0;
      iVar9 = FUN_00431c75(L"CBSLogMaxInMB",&local_4ac);
      if ((iVar9 < 0) || ((LPCWSTR)0x28 < local_4ac)) {
        local_4ac = (LPCWSTR)0xf;
      }
      iVar9 = FUN_00431c75(L"CBSLogHardMaxInMB",&local_4b0);
      if ((iVar9 < 0) || (local_4b0 < local_4ac)) {
        local_4b0 = (LPCWSTR)0x64;
      }
      uStack_4f0 = 0;
      iVar9 = FUN_004271a9(local_4b4,(undefined4 *)&uStack_4f0);
      if (-1 < iVar9) {
        if ((uStack_4f0._4_4_ != 0) || ((uint)((int)local_4ac << 0x14) < (uint)uStack_4f0)) {
          iVar9 = FUN_00427941(extraout_ECX_02,
                               L"System\\CurrentControlSet\\Services\\TrustedInstaller",
                               extraout_ECX_02,L"Start",&local_4f4);
          if ((-1 < iVar9) && (local_4f4 == 2)) {
            if ((uStack_4f0._4_4_ == 0) && ((uint)uStack_4f0 <= (uint)((int)local_4b0 << 0x14)))
            goto LAB_004247bb;
          }
          GetSystemTime(&_Stack_4a0);
          uVar14 = FUN_00426851((int *)&local_4a4,L"%ws\\CbsPersist_%02d%02d%02d%02d%02d%02d.log");
          if ((int)uVar14 < 0) {
            FUN_00423b62(uVar14,'\x01',
                         "Could not allocate a backup name for the log file: %ws, we\'ll just continue with our current log file."
                        );
          }
          else {
            FUN_00431c06(extraout_ECX_03);
            BVar8 = MoveFileExW(local_4b4,local_4a4,1);
            if (BVar8 == 0) {
              DVar7 = GetLastError();
              uVar14 = DVar7 & 0xffff | 0x80070000;
              if ((int)DVar7 < 1) {
                uVar14 = DVar7;
              }
              FUN_00423b62(uVar14,'\x01',
                           "Failed to move log: %ws to backup log: %ws, continuing anyway.");
            }
          }
        }
      }
LAB_004247bb:
      puVar4 = local_500;
      if (local_4f8 != (undefined4 *)0x0) goto LAB_004247c3;
      local_500 = (undefined4 *)0x0;
      local_4fc = psVar5;
      if (puVar4 != (undefined4 *)0x0) goto LAB_00424b2b;
LAB_00424ae4:
      psVar5 = local_4fc;
      if ((pWVar16 != (LPCWSTR)0x0) &&
         (psVar5 = (short *)FUN_00423dac(pWVar16), local_4fc = psVar5, (int)psVar5 < 0)) {
        FUN_00424d95(0x4000000,(uint)psVar5,'\x01',"Failed to delete extra backup log files.");
      }
      if (local_500 != (undefined4 *)0x0) {
LAB_00424b17:
        pFVar12 = DAT_004365ac;
        (*(code *)PTR_guard_check_icall_00437340)();
        (*pFVar12)();
        psVar5 = local_4fc;
      }
    }
LAB_00424b2b:
    if ((int)psVar5 < 0) goto LAB_00424b5d;
  }
  else {
    uVar14 = 0x800704df;
    pcVar18 = "Wds logger is already initialized";
LAB_00424089:
    DAT_004366b4 = DAT_004366b4 + 1;
    FUN_00424d95(0x4000000,uVar14,'\x01',pcVar18);
LAB_00424b5d:
    DAT_004366bc = (FARPROC)0x0;
    DAT_00436640 = (FARPROC)0x0;
    DAT_00436638 = (FARPROC)0x0;
    DAT_004365ac = (FARPROC)0x0;
    DAT_00436644 = (FARPROC)0x0;
    DAT_004366a8 = (FARPROC)0x0;
    DAT_004366b8 = (FARPROC)0x0;
    if (DAT_00436550 != (HMODULE)0x0) {
      FUN_004215bc(DAT_00436550);
      DAT_00436550 = (HMODULE)0x0;
    }
  }
  if (pWVar16 != (LPCWSTR)0x0) {
    FUN_00426b01((int)pWVar16);
  }
LAB_00424ba3:
  if (local_4a8 != (short *)0x0) {
    FUN_00426b01((int)local_4a8);
  }
  if (pWVar15 != (LPCWSTR)0x0) {
    FUN_00426b01((int)pWVar15);
  }
  if (local_4a4 != (LPCWSTR)0x0) {
    FUN_00426b01((int)local_4a4);
  }
  if (local_4b4 != (wchar_t *)0x0) {
    FUN_00426b01((int)local_4b4);
  }
  FUN_00434300(local_c ^ (uint)auStack_504);
  return;
}



/* Function: FUN_00424c02 */

void FUN_00424c02(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  FARPROC pFVar5;
  bool bVar6;
  
  pcVar1 = DAT_00436638;
  LOCK();
  iVar2 = DAT_004366b4 + -1;
  UNLOCK();
  iVar3 = DAT_004366b4 + -1;
  bVar6 = DAT_004366b4 == 1;
  DAT_004366b4 = iVar2;
  if (bVar6 || iVar3 < 0) {
    if (DAT_004365ac != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00437340)();
      piVar4 = (int *)(*pcVar1)();
      if (piVar4 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar4 + 4);
        (*(code *)PTR_guard_check_icall_00437340)(piVar4,DAT_00436634);
        (*pcVar1)();
        pcVar1 = *(code **)(*piVar4 + 4);
        (*(code *)PTR_guard_check_icall_00437340)(piVar4,DAT_004366c0);
        (*pcVar1)();
        pcVar1 = DAT_004365ac;
        DAT_004366c0 = 0;
        DAT_00436634 = 0;
        (*(code *)PTR_guard_check_icall_00437340)();
        (*pcVar1)();
      }
      pcVar1 = DAT_004365ac;
      (*(code *)PTR_guard_check_icall_00437340)();
      (*pcVar1)();
      pFVar5 = GetProcAddress(DAT_00436550,"WdsLogUnRegisterProvider");
      if (pFVar5 != (FARPROC)0x0) {
        (*(code *)PTR_guard_check_icall_00437340)(&DAT_00403b78);
        (*pFVar5)();
      }
    }
    if (DAT_00436550 != (HMODULE)0x0) {
      FUN_004215bc(DAT_00436550);
      DAT_00436550 = (HMODULE)0x0;
    }
    DAT_004366b8 = 0;
    DAT_004366a8 = 0;
    DAT_00436644 = 0;
    DAT_004365ac = (code *)0x0;
    DAT_00436640 = 0;
    DAT_004366bc = 0;
  }
  return;
}



/* Function: FUN_00424cfe */

void __fastcall FUN_00424cfe(undefined4 *param_1)

{
  int iVar1;
  short *psVar2;
  short *local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_c = (short *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  iVar1 = FUN_00427714(param_1,L"SYSTEM\\Setup",param_1,L"WorkingDirectory",(int *)&local_c);
  psVar2 = local_c;
  if (((-1 < iVar1) && (*local_c != 0)) && (psVar2 = (short *)0x0, param_1 != (undefined4 *)0x0)) {
    *param_1 = local_c;
  }
  if (psVar2 != (short *)0x0) {
    FUN_00426b01((int)psVar2);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00424d6b */

void __cdecl FUN_00424d6b(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = DAT_004366a8;
  (*(code *)PTR_guard_check_icall_00437340)(param_1,param_2,&stack0x0000000c);
  (*pcVar1)();
  return;
}



/* Function: FUN_00424d95 */

void __cdecl FUN_00424d95(undefined4 param_1,uint param_2,char param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined1 local_c08 [1024];
  undefined1 local_808 [1023];
  undefined1 local_409;
  undefined1 local_408 [1023];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  if (DAT_0043661c != (code *)0x0) {
    uVar2 = FUN_004350af(local_408,0x3ff,param_4,&stack0x00000014);
    if (((int)uVar2 < 0) || (0x3ff < uVar2)) {
      local_9 = 0;
    }
    else {
      if (uVar2 == 0x3ff) {
        local_9 = 0;
      }
      if (param_3 == '\0') {
        puVar4 = local_408;
      }
      else {
        FUN_00423ac4(param_2);
        iVar3 = FUN_004205fc(local_c08,0x400,"%hs [HRESULT = 0x%08x - %hs]");
        if (iVar3 < 0) goto LAB_00424e4c;
        puVar4 = local_c08;
      }
      pcVar7 = DAT_0043661c;
      (*(code *)PTR_guard_check_icall_00437340)(param_1,puVar4);
      (*pcVar7)();
    }
  }
LAB_00424e4c:
  pcVar7 = DAT_004366a8;
  if (((DAT_00436644 != (code *)0x0) && (DAT_004366a8 != (code *)0x0)) &&
     (DAT_004366b8 != (code *)0x0)) {
    if (param_3 == '\0') {
      (*(code *)PTR_guard_check_icall_00437340)(param_1);
      uVar5 = (*pcVar7)();
      pcVar1 = DAT_004366b8;
      pcVar7 = DAT_00436644;
      (*(code *)PTR_guard_check_icall_00437340)(0,0,0);
      uVar6 = (*pcVar1)();
      uVar8 = 0x64f;
    }
    else {
      uVar2 = FUN_004350af(local_808,0x3ff,param_4,&stack0x00000014);
      if (((int)uVar2 < 0) || (0x3ff < uVar2)) {
        local_409 = 0;
        goto LAB_00424f58;
      }
      if (uVar2 == 0x3ff) {
        local_409 = 0;
      }
      FUN_00423ac4(param_2);
      uVar5 = FUN_00424d6b(param_1,"%hs [HRESULT = 0x%08x - %hs]");
      pcVar1 = DAT_004366b8;
      pcVar7 = DAT_00436644;
      (*(code *)PTR_guard_check_icall_00437340)(0,0,0);
      uVar6 = (*pcVar1)();
      uVar8 = 0x648;
    }
    (*(code *)PTR_guard_check_icall_00437340)
              (uVar5,0x20000,&DAT_00403b1c,0,uVar8,"onecore\\base\\cbs\\util\\cbsutil.cpp",
               "CBSWdsLog",uVar6);
    (*pcVar7)();
  }
LAB_00424f58:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00424f6d */

int * __fastcall FUN_00424f6d(int *param_1)

{
  int *extraout_ECX;
  
  if ((*param_1 != 0) && (*param_1 != -1)) {
    RtlRaiseStatus(0xc00000e5);
    param_1 = extraout_ECX;
  }
  return param_1;
}



/* Function: FUN_00424f8b */

void __thiscall FUN_00424f8b(void *this,int param_1)

{
  int *extraout_ECX;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if ((*this != 0) && (*this != -1)) {
    RtlRaiseStatus(0xc00000e5);
    this = extraout_ECX;
  }
  *(int *)this = param_1;
  return;
}



/* Function: FUN_00424fb4 */

void __fastcall FUN_00424fb4(undefined1 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_00420ee6();
  if (cVar1 == '\0') {
    FUN_004234e9(param_1);
    return;
  }
  *param_1 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_00425481(*(int **)(param_1 + 8));
    return;
  }
  return;
}



/* Function: FUN_00424fe1 */

void __thiscall FUN_00424fe1(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_004227f7(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_00425004 */

void __fastcall FUN_00425004(void *param_1)

{
  FUN_004227f7(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_00425026 */

void __thiscall FUN_00425026(void *this,int param_1)

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



/* Function: FUN_00425050 */

void __fastcall FUN_00425050(int *param_1)

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



/* Function: FUN_00425070 */

void __thiscall FUN_00425070(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_00425882(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004250a7 */

void __fastcall FUN_004250a7(int *param_1)

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



/* Function: FUN_004250ec */

undefined4 __thiscall FUN_004250ec(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00420ea1(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_0042513c(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_0042513c */

void __thiscall FUN_0042513c(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00421707(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00425173 */

void __thiscall FUN_00425173(void *this,int param_1)

{
  int *extraout_ECX;
  
                    /* WARNING: Load size is inaccurate */
  if (*this != 0) {
    RtlRaiseStatus(0xc00000e5);
    this = extraout_ECX;
  }
  *(int *)this = param_1;
  return;
}



/* Function: FUN_00425197 */

void __fastcall FUN_00425197(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  HANDLE local_21c;
  int *local_218;
  HANDLE local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_0041e721(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0042513c(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00420ea1(extraout_ECX);
    goto LAB_00425283;
  }
  FUN_0042583f(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_0042175f(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_004252b1:
    FUN_004212f9(unaff_retaddr,uVar3);
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_0042563c((int)local_210,&local_214,param_2);
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_004252b1;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00421734(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00421707(local_214);
  }
LAB_00425283:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00425352 */

void __fastcall FUN_00425352(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  HANDLE local_21c;
  int *local_218;
  HANDLE local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_0041e721(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_0042513c(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00420ea1(extraout_ECX);
    goto LAB_00425441;
  }
  FUN_0042583f(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_0042175f(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_0042546f:
    FUN_004212f9(unaff_retaddr,uVar3);
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_0042570f((int)local_210,&local_214,param_2);
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_0042546f;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00421734(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00421707(local_214);
  }
LAB_00425441:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00425481 */

void __fastcall FUN_00425481(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_00420ee6();
  if (cVar1 == '\0') {
    FUN_0042583f(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_0042513c(param_1 + 2,0);
      FUN_0042513c(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00421734(local_8);
        SetLastError(DVar2);
      }
      FUN_004255ea((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00421734(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_0042330c(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_0042551b */

void __fastcall FUN_0042551b(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((*param_1 != 0) && (*param_1 != -1)) {
    iVar2 = NtClose(*param_1);
    if (iVar2 < 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00425546 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425546(void)

{
  _DAT_004366e8 = "WilStaging_02";
  DAT_004366e4 = 0;
  _DAT_004366ec = 0;
  DAT_004366f0 = 0;
  _DAT_004366f4 = 0;
  _DAT_004366f8 = 0;
  _DAT_004366fc = 0;
  _DAT_00436700 = 0;
  _DAT_00436704 = 0;
  FUN_00423933((LPCRITICAL_SECTION)&DAT_00436708);
  _DAT_00436730 = 0;
  FUN_00423933((LPCRITICAL_SECTION)&DAT_00436734);
  _DAT_0043676c = 0;
  _DAT_0043675c = 0;
  uRam00436760 = 0;
  uRam00436764 = 0;
  uRam00436768 = 0;
  DAT_004366e4 = 1;
  return;
}



/* Function: FUN_004255bf */

void __fastcall FUN_004255bf(int param_1)

{
  FUN_004257e4((int *)(param_1 + 0x18));
  FUN_00425615((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00421707(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_004255ea */

void __fastcall FUN_004255ea(int param_1)

{
  FUN_004232df((void *)(param_1 + 0x10));
  FUN_00425615((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00421707(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00425615 */

void __fastcall FUN_00425615(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00421707((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00421707((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0042563c */

void __fastcall FUN_0042563c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_1c;
  LPVOID local_18;
  int local_14 [4];
  
  local_14[2] = DAT_00436100 ^ (uint)&local_1c;
  *param_3 = 0;
  local_1c = FUN_0042095d(8,0x40);
  local_18 = local_1c;
  if (local_1c == (LPVOID)0x0) {
    FUN_004212f9(unaff_retaddr,0x148);
  }
  else {
    local_14[0] = 0;
    local_14[1] = 0;
    if (((uint)local_1c & 3) != 0) {
      FUN_0042138d();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = FUN_004217b7(local_14,param_1,0,(uint)local_1c >> 2,0);
    pvVar2 = local_1c;
    if (iVar3 < 0) {
      FUN_004212f9(unaff_retaddr,0x14b);
    }
    else {
      FUN_004258ad(local_1c,param_2,local_14);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
    }
    FUN_00425615(local_14);
  }
  FUN_00425050((int *)&local_18);
  FUN_00434300(local_14[2] ^ (uint)&local_1c);
  return;
}



/* Function: FUN_0042570f */

void __fastcall FUN_0042570f(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_1c;
  LPVOID local_18;
  int local_14 [4];
  
  local_14[2] = DAT_00436100 ^ (uint)&local_1c;
  *param_3 = 0;
  local_1c = FUN_0042095d(8,0xa8);
  local_18 = local_1c;
  if (local_1c == (LPVOID)0x0) {
    FUN_004212f9(unaff_retaddr,0x148);
  }
  else {
    local_14[0] = 0;
    local_14[1] = 0;
    if (((uint)local_1c & 3) != 0) {
      FUN_0042138d();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = FUN_004217b7(local_14,param_1,0,(uint)local_1c >> 2,0);
    pvVar2 = local_1c;
    if (iVar3 < 0) {
      FUN_004212f9(unaff_retaddr,0x14b);
    }
    else {
      FUN_00425911(local_1c,param_2,local_14);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
    }
    FUN_00425615(local_14);
  }
  FUN_00425050((int *)&local_18);
  FUN_00434300(local_14[2] ^ (uint)&local_1c);
  return;
}



/* Function: FUN_004257e4 */

void __fastcall FUN_004257e4(int *param_1)

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
        FUN_00421ba9((int)lpMem + 8);
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



/* Function: FUN_0042583f */

void __thiscall FUN_0042583f(void *this,undefined4 *param_1)

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
    FUN_0042134a(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00425882 */

void FUN_00425882(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x004258a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_004258ad */

undefined4 * __thiscall FUN_004258ad(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00425911 */

undefined4 * __thiscall FUN_00425911(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_00422f8f((void *)((int)this + 0x14));
  FUN_00423933((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_00425975 */

void __fastcall
FUN_00425975(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00420c41(param_7);
  local_8 = 0;
  FUN_00425ceb(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_004259bc */

void * __fastcall FUN_004259bc(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_00420ebe(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_00420407(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_00425a2c */

char * __fastcall FUN_00425a2c(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (pcVar2 = param_3, param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_3 + 1));
    if (pcVar3 <= param_2 + -(int)param_1) {
      FUN_00420407(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar3);
      if (param_4 == (undefined4 *)0x0) {
        return pcVar3;
      }
      *param_4 = param_1;
      return pcVar3;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return pcVar2;
}



/* Function: FUN_00425a93 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00425a93(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  WCHAR local_1008 [2046];
  undefined4 uStack_c;
  
  uStack_c = 0x425aa5;
  local_1458 = *param_7;
  local_1008[0] = L'\0';
  local_1408[0] = 0;
  local_1454 = param_7[1];
  uStack_1434 = FUN_00420a30(local_1458);
  local_1460 = 3;
  local_145c = 0;
  if (param_7[2] == 1) {
    local_145c = 8;
  }
  LOCK();
  UNLOCK();
  local_1450 = DAT_00436690 + 1;
  local_144c = 0;
  DAT_00436690 = DAT_00436690 + 1;
  DStack_1448 = GetCurrentThreadId();
  pcVar1 = DAT_004365fc;
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
  if (DAT_004365fc == (code *)0x0) {
    uStack_1414 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00437340)();
    uStack_1414 = (*pcVar1)();
  }
  pcVar1 = DAT_004365c8;
  if (DAT_004365c8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365e0;
  if (DAT_004365e0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(&local_1460,local_1408,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365dc;
  if (DAT_004365dc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365ec;
  if ((DAT_004365ec != (code *)0x0) && ((local_145c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00437340)(&local_1460);
    (*pcVar1)();
  }
  if (-1 < local_1458) {
    local_1458 = -0x7fff0001;
    local_1454 = FUN_00420c41(0x8000ffff);
  }
  pcVar1 = DAT_004365b4;
  if (DAT_004365bc == '\0') {
    if (DAT_004365b4 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00437340)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00425c32;
  }
  else {
LAB_00425c32:
    pcVar1 = DAT_004365c0;
    if ((local_145c & 2) == 0) {
      if ((DAT_004365c0 != (code *)0x0) && (DAT_004365d0 == '\0')) {
        (*(code *)PTR_guard_check_icall_00437340)(&local_1460,local_1008,0x800);
        (*pcVar1)();
      }
      if (local_1008[0] == L'\0') {
        FUN_004206c9(local_1008,0x800,(int)&local_1460);
      }
      OutputDebugStringW(local_1008);
      goto LAB_00425cb8;
    }
  }
  pcVar1 = DAT_004365c0;
  if ((DAT_004365c0 != (code *)0x0) && (DAT_004365d0 == '\0')) {
    (*(code *)PTR_guard_check_icall_00437340)(&local_1460,0,0);
    (*pcVar1)();
  }
LAB_00425cb8:
  pcVar1 = DAT_004365e8;
  if ((((local_145c & 4) != 0) || (DAT_004365c4 != '\0')) && (DAT_004365e8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00437340)();
    (*pcVar1)();
  }
  FUN_004211a8((int)&local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00425ceb */

void __fastcall
FUN_00425ceb(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00425ecb(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00425d11 */

void __fastcall FUN_00425d11(undefined4 param_1,undefined4 param_2)

{
  FUN_00425f71(param_1,param_2);
  return;
}



/* Function: FUN_00425d22 */

void __fastcall FUN_00425d22(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_00420c41(in_stack_00000014);
  FUN_00425d11(param_1,param_2);
  return;
}



/* Function: FUN_00425d63 */

uint __fastcall FUN_00425d63(int param_1,int param_2)

{
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = FUN_00420e52(param_1,param_2,0x402be4,param_1,param_1,in_stack_00000010);
  FUN_00420c41(uVar1);
  FUN_00425d11(param_1,param_2);
  return uVar1;
}



/* Function: FUN_00425db8 */

void __fastcall FUN_00425db8(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_00437340)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00425de0 */

void FUN_00425de0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_00423687((int)param_2);
  }
  return;
}



/* Function: FUN_00425e20 */

void FUN_00425e20(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_004220c8(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00425e70 */

undefined4 * __thiscall FUN_00425e70(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0040107c;
  if ((param_1 & 1) != 0) {
    FUN_00434314(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00425ea0 */

undefined4 * __thiscall FUN_00425ea0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0040107c;
  if ((param_1 & 1) != 0) {
    FUN_00434314(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00425ecb */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00425ecb(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_00436100 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00420f16(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_00434300(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_004211a8((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00425f71 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00425f71(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
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
  WCHAR local_1010 [2050];
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)auStack_1474;
  local_1470 = in_stack_00000010;
  local_1010[0] = L'\0';
  local_1410[0] = 0;
  local_145c = in_stack_00000014[1];
  local_1460 = *in_stack_00000014;
  local_146c = param_1;
  iStack_143c = FUN_004209f3(local_1460);
  local_1464 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1464 = 8;
  }
  local_1468 = 1;
  LOCK();
  UNLOCK();
  local_1458 = DAT_00436690 + 1;
  local_1454 = 0;
  DAT_00436690 = DAT_00436690 + 1;
  DStack_1450 = GetCurrentThreadId();
  pcVar1 = DAT_004365fc;
  uStack_1418 = local_1470;
  uStack_1414 = local_146c;
  puStack_1444 = &DAT_00402be4;
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
  if (DAT_004365fc == (code *)0x0) {
    uStack_141c = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00437340)();
    uStack_141c = (*pcVar1)();
  }
  pcVar1 = DAT_004365c8;
  if (DAT_004365c8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(&local_1468);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365e0;
  if (DAT_004365e0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(&local_1468,local_1410,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365dc;
  if (DAT_004365dc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(&local_1468);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365ec;
  if ((DAT_004365ec != (code *)0x0) && ((local_1464 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00437340)(&local_1468);
    (*pcVar1)();
  }
  pcVar1 = DAT_004365b4;
  if (-1 < local_1460) {
    FUN_0042138d();
    goto LAB_004261d2;
  }
  if (DAT_004365bc == '\0') {
    if (DAT_004365b4 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00437340)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00426106;
LAB_0042610d:
    pcVar1 = DAT_004365c0;
    if ((DAT_004365c0 != (code *)0x0) && (DAT_004365d0 == '\0')) {
      (*(code *)PTR_guard_check_icall_00437340)(&local_1468,0,0);
      (*pcVar1)();
    }
  }
  else {
LAB_00426106:
    pcVar1 = DAT_004365c0;
    if ((local_1464 & 2) != 0) goto LAB_0042610d;
    if ((DAT_004365c0 != (code *)0x0) && (DAT_004365d0 == '\0')) {
      (*(code *)PTR_guard_check_icall_00437340)(&local_1468,local_1010,0x800);
      (*pcVar1)();
    }
    if (local_1010[0] == L'\0') {
      FUN_004206c9(local_1010,0x800,(int)&local_1468);
    }
    OutputDebugStringW(local_1010);
  }
  pcVar1 = DAT_004365e8;
  if ((((local_1464 & 4) != 0) || (DAT_004365c4 != '\0')) && (DAT_004365e8 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00437340)();
    (*pcVar1)();
  }
  if ((local_1464 & 1) == 0) {
    FUN_00434300(local_c ^ (uint)auStack_1474);
    return;
  }
LAB_004261d2:
  FUN_004211a8((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004261f0 */

void __thiscall FUN_004261f0(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004010b0;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: FUN_00426220 */

undefined4 __thiscall
FUN_00426220(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_004227f7(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_00426273 */

undefined4 __fastcall FUN_00426273(short *param_1,uint param_2,int param_3,uint param_4)

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



/* Function: FUN_004262ed */

undefined4 __thiscall FUN_004262ed(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0x7fffffff;
  do {
                    /* WARNING: Load size is inaccurate */
    if (*this == 0) break;
    this = (void *)((int)this + 2);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = 0x80070057;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  if (param_1 != (int *)0x0) {
    if (iVar1 == 0) {
      *param_1 = 0;
    }
    else {
      *param_1 = 0x7fffffff - iVar1;
    }
  }
  return uVar2;
}



/* Function: FUN_00426338 */

uint __fastcall FUN_00426338(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  uint local_8;
  
  local_8 = 0;
  if (param_1 == (int *)0x0) {
    uVar2 = 0x80004003;
    pcVar3 = "No string result specified";
  }
  else if (param_2 < 0x40000000) {
    uVar2 = 0;
    if (*param_1 != 0) {
      uVar2 = FUN_00426abd(*param_1,&local_8);
      if ((int)uVar2 < 0) {
        pcVar3 = "Failed to get size of existing string";
        goto LAB_00426357;
      }
      if (local_8 < param_2) {
        FUN_00426b01(*param_1);
        *param_1 = 0;
      }
      else {
        if (local_8 != 0) {
          *(undefined2 *)*param_1 = 0;
        }
        if (*param_1 != 0) {
          return uVar2;
        }
      }
    }
    pcVar3 = (char *)(param_2 * 2 + 4);
    puVar1 = (uint *)FUN_00433fd7(pcVar3);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = param_2;
      *param_1 = (int)(puVar1 + 1);
      *(undefined2 *)(puVar1 + 1) = 0;
      return uVar2;
    }
    uVar2 = 0x8007000e;
  }
  else {
    uVar2 = 0x800288c5;
    pcVar3 = "string size too big";
  }
LAB_00426357:
  FUN_00424d95(0x4000000,uVar2,'\x01',pcVar3);
  return uVar2;
}



/* Function: FUN_004263fa */

uint __fastcall FUN_004263fa(int *param_1,short *param_2)

{
  short sVar1;
  size_t _Size;
  uint uVar2;
  uint *puVar3;
  short *psVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  int local_18;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_18 = 0;
  local_8 = 0;
  local_10 = 0;
  uVar5 = 0;
  uVar7 = 0;
  local_c = param_1;
  if (param_1 == (int *)0x0) {
    uVar7 = 0x80004003;
    pcVar8 = "No string result specified";
  }
  else if (param_2 == (short *)0x0) {
    uVar7 = 0x80070057;
    pcVar8 = "No prefix string specified";
  }
  else {
    puVar3 = (uint *)*param_1;
    if (puVar3 != (uint *)0x0) {
      uVar7 = FUN_00426abd((int)puVar3,&local_10);
      if ((int)uVar7 < 0) {
        pcVar8 = "Failed to get size of destination string.";
        goto LAB_00426557;
      }
      puVar3 = (uint *)*local_c;
      puVar6 = puVar3;
      do {
        uVar5 = *puVar6;
        puVar6 = (uint *)((int)puVar6 + 2);
      } while ((short)uVar5 != 0);
      uVar5 = (int)puVar6 - (int)((int)puVar3 + 2) >> 1;
      local_8 = local_10;
    }
    psVar4 = param_2;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    local_10 = (int)psVar4 - (int)(param_2 + 1) >> 1;
    uVar2 = local_10 + 1 + uVar5;
    if ((uVar5 <= uVar2) && (local_10 <= uVar2)) {
      if (local_8 < uVar2) {
        pcVar8 = (char *)(uVar2 * 2 + 4);
        local_8 = uVar2;
        puVar3 = (uint *)FUN_00433fd7(pcVar8);
        if (puVar3 == (uint *)0x0) {
          uVar7 = 0x8007000e;
          goto LAB_00426557;
        }
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
        if ((void *)*local_c == (void *)0x0) {
          *(short *)puVar3 = 0;
        }
        else {
          memcpy(puVar3,(void *)*local_c,uVar5 * 2 + 2);
        }
        local_18 = *local_c;
        *local_c = (int)puVar3;
      }
      _Size = local_10 * 2;
      memmove((short *)(_Size + (int)puVar3),puVar3,local_8 * 2 + local_10 * -2);
      memcpy((void *)*local_c,param_2,_Size);
      if (local_18 == 0) {
        return uVar7;
      }
      FUN_00426b01(local_18);
      return uVar7;
    }
    pcVar8 = "Insufficient buffer to prefix string.";
    uVar7 = 0x8007007a;
  }
LAB_00426557:
  FUN_00424d95(0x4000000,uVar7,'\x01',pcVar8);
  return uVar7;
}



/* Function: FUN_00426574 */

uint __fastcall FUN_00426574(int *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  uint *_Dst;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  short *local_c;
  int *local_8;
  
  iVar4 = 0;
  local_c = (short *)0x0;
  iVar6 = 0;
  local_8 = param_1;
  if (param_1 == (int *)0x0) {
    uVar5 = 0x80004003;
    pcVar8 = "No string result specified";
  }
  else {
    if (param_2 != (short *)0x0) {
      _Dst = (uint *)*param_1;
      psVar2 = (short *)0x0;
      if (_Dst != (uint *)0x0) {
        uVar5 = FUN_00426abd((int)_Dst,&local_c);
        if ((int)uVar5 < 0) {
          pcVar8 = "Failed to get size of destination string.";
          goto LAB_0042659e;
        }
        _Dst = (uint *)*local_8;
        puVar7 = _Dst;
        do {
          uVar5 = *puVar7;
          puVar7 = (uint *)((int)puVar7 + 2);
        } while ((short)uVar5 != 0);
        iVar6 = (int)puVar7 - ((int)_Dst + 2) >> 1;
        psVar2 = local_c;
      }
      psVar3 = param_2;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      local_c = (short *)(((int)psVar3 - (int)(param_2 + 1) >> 1) + 1 + iVar6);
      psVar3 = param_2 + 1;
      if (psVar2 < local_c) {
        pcVar8 = (char *)((int)local_c * 2 + 4);
        puVar7 = (uint *)FUN_00433fd7(pcVar8);
        if (puVar7 == (uint *)0x0) {
          uVar5 = 0x8007000e;
          goto LAB_0042659e;
        }
        _Dst = puVar7 + 1;
        *puVar7 = (uint)local_c;
        if ((void *)*local_8 == (void *)0x0) {
          *(undefined2 *)_Dst = 0;
        }
        else {
          memcpy(_Dst,(void *)*local_8,iVar6 * 2 + 2);
        }
        iVar4 = *local_8;
        *local_8 = (int)_Dst;
        psVar2 = local_c;
        psVar3 = local_c;
      }
      local_c = psVar3;
      uVar5 = FUN_004204f1((short *)_Dst,(uint)psVar2,(int)param_2);
      if ((int)uVar5 < 0) {
        FUN_00424d95(0x4000000,uVar5,'\x01',"Failed to concat string.");
      }
      if (iVar4 == 0) {
        return uVar5;
      }
      FUN_00426b01(iVar4);
      return uVar5;
    }
    uVar5 = 0x80070057;
    pcVar8 = "No string to append specified";
  }
LAB_0042659e:
  FUN_00424d95(0x4000000,uVar5,'\x01',pcVar8);
  return uVar5;
}



/* Function: FUN_004266b5 */

uint __fastcall FUN_004266b5(int *param_1,short *param_2,short *param_3)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  short *_Dst;
  int iVar7;
  char *pcVar8;
  short *local_10;
  int *local_c;
  short *local_8;
  
  iVar5 = 0;
  local_8 = (short *)0x0;
  local_10 = (short *)0x0;
  iVar7 = 0;
  local_c = param_1;
  if (param_1 == (int *)0x0) {
    uVar6 = 0x80004003;
    pcVar8 = "No string result specified";
  }
  else {
    if (param_2 == (short *)0x0) {
      pcVar8 = "No string to append specified";
    }
    else {
      if (param_3 != (short *)0x0) {
        _Dst = (short *)*param_1;
        if (_Dst != (short *)0x0) {
          uVar6 = FUN_00426abd((int)_Dst,&local_10);
          if ((int)uVar6 < 0) {
            pcVar8 = "Failed to get size of destination string.";
            goto LAB_004266e5;
          }
          _Dst = (short *)*local_c;
          psVar3 = _Dst;
          do {
            sVar1 = *psVar3;
            psVar3 = psVar3 + 1;
          } while (sVar1 != 0);
          iVar7 = (int)psVar3 - (int)(_Dst + 1) >> 1;
          local_8 = local_10;
        }
        psVar3 = param_2;
        do {
          sVar1 = *psVar3;
          psVar3 = psVar3 + 1;
        } while (sVar1 != 0);
        local_10 = param_3;
        do {
          sVar1 = *local_10;
          local_10 = local_10 + 1;
        } while (sVar1 != 0);
        psVar3 = (short *)(((int)local_10 - (int)(param_3 + 1) >> 1) + 1 +
                           ((int)psVar3 - (int)(param_2 + 1) >> 1) + iVar7);
        if (local_8 < psVar3) {
          pcVar8 = (char *)((int)psVar3 * 2 + 4);
          local_8 = psVar3;
          puVar4 = (undefined4 *)FUN_00433fd7(pcVar8);
          if (puVar4 == (undefined4 *)0x0) {
            uVar6 = 0x8007000e;
            goto LAB_004266e5;
          }
          _Dst = (short *)(puVar4 + 1);
          *puVar4 = local_8;
          if ((void *)*local_c == (void *)0x0) {
            *_Dst = 0;
          }
          else {
            memcpy(_Dst,(void *)*local_c,iVar7 * 2 + 2);
          }
          iVar5 = *local_c;
          *local_c = (int)_Dst;
        }
        piVar2 = local_c;
        uVar6 = FUN_004204f1(_Dst,(uint)local_8,(int)param_2);
        if ((int)uVar6 < 0) {
          pcVar8 = "Failed to concat string.";
        }
        else {
          uVar6 = FUN_004204f1((short *)*piVar2,(uint)local_8,(int)param_3);
          if (-1 < (int)uVar6) goto LAB_00426837;
          pcVar8 = "Failed to concat second string.";
        }
        FUN_00424d95(0x4000000,uVar6,'\x01',pcVar8);
LAB_00426837:
        if (iVar5 == 0) {
          return uVar6;
        }
        FUN_00426b01(iVar5);
        return uVar6;
      }
      pcVar8 = "No second string to append specified";
    }
    uVar6 = 0x80070057;
  }
LAB_004266e5:
  FUN_00424d95(0x4000000,uVar6,'\x01',pcVar8);
  return uVar6;
}



/* Function: FUN_00426851 */

uint __cdecl FUN_00426851(int *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == (int *)0x0) {
    pcVar3 = "No string result specified";
    uVar1 = 0x80004003;
    uVar2 = 0x80004003;
  }
  else {
    if (param_2 == (short *)0x0) {
      pcVar3 = "No format string specified";
    }
    else {
      if (*param_2 != 0) {
        uVar1 = FUN_004268b6(param_1,param_2,&stack0x0000000c);
        return uVar1;
      }
      pcVar3 = "Format string is empty";
    }
    uVar1 = 0x80070057;
    uVar2 = 0x80070057;
  }
  FUN_00424d95(0x4000000,uVar2,'\x01',pcVar3);
  return uVar1;
}



/* Function: FUN_004268b6 */

uint __fastcall FUN_004268b6(int *param_1,short *param_2,undefined4 param_3)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint local_c;
  int *local_8;
  
  local_c = 0;
  iVar4 = 0;
  iVar7 = 0;
  local_8 = param_1;
  if (param_1 == (int *)0x0) {
    uVar6 = 0x80004003;
    pcVar8 = "No string result specified";
  }
  else {
    if (param_2 == (short *)0x0) {
      pcVar8 = "No format string specified";
    }
    else {
      if (*param_2 != 0) {
        if (*param_1 != 0) {
          uVar6 = FUN_00426abd(*param_1,&local_c);
          if ((int)uVar6 < 0) {
            pcVar8 = "Failed to get size of destination string.";
            goto LAB_004268e3;
          }
          psVar5 = (short *)*local_8;
          psVar1 = psVar5 + 1;
          do {
            sVar2 = *psVar5;
            psVar5 = psVar5 + 1;
          } while (sVar2 != 0);
          iVar4 = (int)psVar5 - (int)psVar1 >> 1;
          uVar6 = local_c;
          if (local_c != 0) goto LAB_0042698c;
        }
        local_c = 0x40;
        uVar6 = FUN_00426338(local_8,0x40);
        if ((int)uVar6 < 0) {
          FUN_00424d95(0x4000000,uVar6,'\x01',"failed to allocate string to format: %S");
          return uVar6;
        }
        uVar6 = 0x40;
LAB_0042698c:
        do {
          while (uVar3 = FUN_0042059b((undefined2 *)*local_8,uVar6,param_2,param_3),
                uVar3 != 0x8007007a) {
            uVar6 = local_c;
            if (uVar3 != 1) {
              if ((int)uVar3 < 0) {
                FUN_00424d95(0x4000000,uVar3,'\x01',"Failed to format string.");
              }
              goto LAB_00426a13;
            }
          }
          if (iVar7 == 0) {
            iVar7 = *local_8;
            *local_8 = 0;
            *(undefined2 *)(iVar7 + iVar4 * 2) = 0;
          }
          local_c = local_c * 2;
          uVar3 = FUN_00426338(local_8,local_c);
          uVar6 = local_c;
        } while (-1 < (int)uVar3);
        FUN_00424d95(0x4000000,uVar3,'\x01',"Failed to allocate string to format: %S");
LAB_00426a13:
        if (iVar7 == 0) {
          return uVar3;
        }
        FUN_00426b01(iVar7);
        return uVar3;
      }
      pcVar8 = "Format string is empty";
    }
    uVar6 = 0x80070057;
  }
LAB_004268e3:
  FUN_00424d95(0x4000000,uVar6,'\x01',pcVar8);
  return uVar6;
}



/* Function: FUN_00426a2d */

uint __fastcall FUN_00426a2d(int *param_1,short *param_2)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    uVar4 = 0x80004003;
    pcVar5 = "No string result specified";
  }
  else if (param_2 == (short *)0x0) {
    uVar4 = 0x80070057;
    pcVar5 = "No string specified";
  }
  else {
    psVar3 = param_2;
    do {
      sVar2 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar2 != 0);
    uVar1 = ((int)psVar3 - (int)(param_2 + 1) >> 1) + 1;
    uVar4 = FUN_00426338(param_1,uVar1);
    if ((int)uVar4 < 0) {
      pcVar5 = "Failed to allocate new string";
    }
    else {
      uVar4 = FUN_0041e6b4((short *)*param_1,uVar1,(int)param_2);
      if (-1 < (int)uVar4) {
        return uVar4;
      }
      pcVar5 = "Failed to copy source string to destination";
    }
  }
  FUN_00424d95(0x4000000,uVar4,'\x01',pcVar5);
  return uVar4;
}



/* Function: FUN_00426abd */

uint __fastcall FUN_00426abd(int param_1,undefined4 *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x80070057;
    pcVar2 = "No string specified";
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + -4);
      return 0;
    }
    uVar1 = 0x80004003;
    pcVar2 = "No count result specified";
  }
  FUN_00424d95(0x4000000,uVar1,'\x01',pcVar2);
  return uVar1;
}



/* Function: FUN_00426b01 */

undefined4 __fastcall FUN_00426b01(int param_1)

{
  o_free(param_1 + -4);
  return 0;
}



/* Function: FUN_00426b14 */

uint __fastcall FUN_00426b14(int *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    uVar4 = 0x80004003;
    pcVar5 = "No path result specified";
  }
  else {
    psVar2 = (short *)*param_1;
    psVar3 = psVar2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    if (psVar2[((int)psVar3 - (int)(psVar2 + 1) >> 1) + -1] == 0x5c) {
      return 0;
    }
    uVar4 = FUN_00426574(param_1,(short *)&DAT_00401528);
    if (-1 < (int)uVar4) {
      return uVar4;
    }
    pcVar5 = "Failed to concat backslash onto string.";
  }
  FUN_00424d95(0x4000000,uVar4,'\x01',pcVar5);
  return uVar4;
}



/* Function: FUN_00426b7e */

void __fastcall FUN_00426b7e(int *param_1)

{
  uint uVar1;
  LPWSTR pWVar2;
  DWORD DVar3;
  uint uVar4;
  LPWSTR pWVar5;
  LPWSTR pWVar6;
  char *pcVar7;
  LPWSTR local_18;
  LPWSTR local_14;
  LPWSTR local_10;
  LPWSTR local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_10 = (wchar_t *)0x0;
  local_14 = (LPWSTR)0x0;
  if (param_1 == (int *)0x0) {
    FUN_00424d95(0x4000000,0x80004003,'\x01',"No full path result specified");
    goto LAB_00426e79;
  }
  local_18 = (LPWSTR)0x40;
  uVar1 = FUN_00426338((int *)&local_10,0x40);
  pWVar6 = local_10;
  if ((int)uVar1 < 0) {
    FUN_00424d95(0x4000000,uVar1,'\x01',"Failed to allocate space for expanded path.");
    pWVar6 = local_10;
  }
  else {
    pWVar2 = (LPWSTR)ExpandEnvironmentStringsW
                               (L"%windir%\\servicing\\trustedinstaller.exe",local_10,0x40);
    local_c = pWVar2;
    if (pWVar2 != (LPWSTR)0x0) {
      if (pWVar2 < (LPWSTR)0x41) {
LAB_00426ca0:
        if ((LPWSTR)0x104 < pWVar2) {
          uVar4 = FUN_00426e90((int *)&local_10);
          pWVar6 = local_10;
          uVar1 = 0;
          if (uVar4 != 0x80070057) {
            uVar1 = uVar4;
          }
          if ((int)uVar1 < 0) {
            pcVar7 = "Failed to prefix long path after expanding environment variables.";
            goto LAB_00426cc3;
          }
          uVar1 = FUN_00426abd((int)local_10,&local_18);
          if ((int)uVar1 < 0) {
            pcVar7 = "Failed to get max length of expanded path.";
            goto LAB_00426cf6;
          }
        }
        local_c = (LPWSTR)0x0;
        local_10 = L"%windir%\\servicing\\trustedinstaller.exe";
        if (pWVar6 != (wchar_t *)0x0) {
          local_10 = pWVar6;
        }
        pWVar2 = (LPWSTR)0x40;
        if ((LPWSTR)0x40 < local_18) {
          pWVar2 = local_18;
        }
        local_18 = pWVar2;
        uVar1 = FUN_00426338((int *)&local_14,(uint)pWVar2);
        pWVar2 = local_14;
        if ((int)uVar1 < 0) {
          pcVar7 = "Failed to allocate space for full path.";
LAB_00426d3b:
          FUN_00424d95(0x4000000,uVar1,'\x01',pcVar7);
          pWVar2 = local_14;
        }
        else {
          pWVar5 = (LPWSTR)GetFullPathNameW(local_10,(DWORD)local_18,local_14,&local_c);
          if (pWVar5 != (LPWSTR)0x0) {
            if (local_18 < pWVar5) {
              local_18 = (LPWSTR)((int)pWVar5 + 7);
              if (pWVar5 < (LPWSTR)0x104) {
                local_18 = pWVar5;
              }
              uVar1 = FUN_00426338((int *)&local_14,(uint)local_18);
              pWVar2 = local_14;
              if (-1 < (int)uVar1) {
                pWVar5 = (LPWSTR)GetFullPathNameW(local_10,(DWORD)local_18,local_14,&local_c);
                if (pWVar5 == (LPWSTR)0x0) goto LAB_00426d68;
                if (pWVar5 <= local_18) goto LAB_00426dfe;
                pcVar7 = "Failed to allocate buffer for full path.";
                uVar1 = 0x8007007a;
LAB_00426e54:
                FUN_00424d95(0x4000000,uVar1,'\x01',pcVar7);
                goto LAB_00426e61;
              }
              pcVar7 = "Failed to re-allocate more space for full path.";
            }
            else {
LAB_00426dfe:
              if ((pWVar5 < (LPWSTR)0x105) ||
                 (uVar1 = FUN_00426e90((int *)&local_14), pWVar2 = local_14, -1 < (int)uVar1)) {
                if (pWVar2 == (LPWSTR)0x0) {
                  uVar1 = FUN_00426a2d(param_1,L"%windir%\\servicing\\trustedinstaller.exe");
                  if ((int)uVar1 < 0) {
                    pcVar7 = "Failed to copy relative path into full path.";
                    pWVar2 = (LPWSTR)0x0;
                    goto LAB_00426e54;
                  }
                }
                else {
                  if (*param_1 != 0) {
                    FUN_00426b01(*param_1);
                  }
                  *param_1 = (int)pWVar2;
                }
                goto LAB_00426e6d;
              }
              pcVar7 = "Failed to prefix long path after expanding.";
            }
            goto LAB_00426d3b;
          }
LAB_00426d68:
          DVar3 = GetLastError();
          uVar1 = DVar3 & 0xffff | 0x80070000;
          if ((int)DVar3 < 1) {
            uVar1 = DVar3;
          }
          if (-1 < (int)uVar1) {
            uVar1 = 0x80004005;
          }
          FUN_00424d95(0x4000000,uVar1,'\x01',"Failed to get full path for string: %S");
        }
LAB_00426e61:
        if (pWVar2 != (LPWSTR)0x0) {
          FUN_00426b01((int)pWVar2);
        }
        goto LAB_00426e6d;
      }
      local_18 = pWVar2;
      uVar1 = FUN_00426338((int *)&local_10,(uint)pWVar2);
      pWVar6 = local_10;
      if ((int)uVar1 < 0) {
        pcVar7 = "Failed to re-allocate more space for expanded path.";
LAB_00426cc3:
        FUN_00424d95(0x4000000,uVar1,'\x01',pcVar7);
        pWVar6 = local_10;
        goto LAB_00426e6d;
      }
      pWVar2 = (LPWSTR)ExpandEnvironmentStringsW
                                 (L"%windir%\\servicing\\trustedinstaller.exe",local_10,
                                  (DWORD)pWVar2);
      if (pWVar2 != (LPWSTR)0x0) {
        if (pWVar2 <= local_c) goto LAB_00426ca0;
        pcVar7 = "Failed to allocate buffer for expanded path.";
        uVar1 = 0x8007007a;
LAB_00426cf6:
        FUN_00424d95(0x4000000,uVar1,'\x01',pcVar7);
        goto LAB_00426e6d;
      }
    }
    DVar3 = GetLastError();
    uVar1 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      uVar1 = DVar3;
    }
    if (-1 < (int)uVar1) {
      uVar1 = 0x80004005;
    }
    FUN_00424d95(0x4000000,uVar1,'\x01',"Failed to expand environment variables in string: %S");
  }
LAB_00426e6d:
  if (pWVar6 != (wchar_t *)0x0) {
    FUN_00426b01((int)pWVar6);
  }
LAB_00426e79:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00426e90 */

uint __fastcall FUN_00426e90(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *_Dst;
  ushort *puVar3;
  uint uVar4;
  char *pcVar5;
  int *local_8;
  
  local_8 = param_1;
  if (param_1 == (int *)0x0) {
    FUN_00424d95(0x4000000,0x80004003,'\x01',"No full path result specified");
    return 0x80004003;
  }
  _Dst = (ushort *)*param_1;
  if (_Dst == (ushort *)0x0) {
    pcVar5 = "Invalid full path specified";
  }
  else {
    uVar1 = *_Dst;
    local_8 = (int *)0x5c;
    if ((((0x60 < uVar1) && (uVar1 < 0x7b)) || ((ushort)(uVar1 - 0x41) < 0x1a)) &&
       ((_Dst[1] == 0x3a && (_Dst[2] == 0x5c)))) {
      uVar4 = FUN_004263fa(param_1,L"\\\\?\\");
      if (-1 < (int)uVar4) {
        return uVar4;
      }
      pcVar5 = "Failed to add prefix to file path.";
      goto LAB_00426fc2;
    }
    puVar3 = _Dst;
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
    if (((3 < (uint)((int)puVar3 - (int)(_Dst + 1) >> 1)) && (uVar1 == 0x5c)) && (_Dst[1] == 0x5c))
    {
      if (_Dst[2] == 0x3f) {
        return 0;
      }
      if (_Dst[3] == 0x5c) {
        return 0;
      }
      local_8 = (int *)0x0;
      uVar4 = FUN_00426abd((int)_Dst,&local_8);
      if ((int)uVar4 < 0) {
        pcVar5 = "Failed to get size of full path.";
      }
      else {
        memmove(_Dst,_Dst + 1,(int)local_8 * 2 - 2);
        uVar4 = FUN_004263fa(param_1,L"\\\\?\\UNC");
        if (-1 < (int)uVar4) {
          return uVar4;
        }
        pcVar5 = "Failed to add prefix to UNC path.";
      }
      goto LAB_00426fc2;
    }
    pcVar5 = "Invalid path provided to prefix.";
  }
  uVar4 = 0x80070057;
LAB_00426fc2:
  FUN_00424d95(0x4000000,uVar4,'\x01',pcVar5);
  return uVar4;
}



/* Function: FUN_00426fdc */

uint __fastcall FUN_00426fdc(int *param_1)

{
  UINT uSize;
  LPWSTR pWVar1;
  uint uVar2;
  LPWSTR local_8;
  
  pWVar1 = (LPWSTR)0x0;
  local_8 = (LPWSTR)0x0;
  if (param_1 == (int *)0x0) {
    uVar2 = 0x80004003;
    FUN_00424d95(0x4000000,0x80004003,'\x01',"No path result specified");
  }
  else {
    uSize = GetSystemWindowsDirectoryW((LPWSTR)0x0,0);
    uVar2 = FUN_00426338((int *)&local_8,uSize + 2);
    if ((int)uVar2 < 0) {
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to allocate windir string");
      pWVar1 = local_8;
    }
    else {
      GetSystemWindowsDirectoryW(local_8,uSize);
      FUN_00426b14((int *)&local_8);
      if (*param_1 != 0) {
        FUN_00426b01(*param_1);
      }
      *param_1 = (int)local_8;
    }
    if (pWVar1 != (LPWSTR)0x0) {
      FUN_00426b01((int)pWVar1);
    }
  }
  return uVar2;
}



/* Function: FUN_0042707f */

uint __fastcall FUN_0042707f(wchar_t *param_1,int *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  char *pcVar7;
  short *local_8;
  
  local_8 = (short *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    pcVar7 = "No path specified";
  }
  else {
    if (param_2 == (int *)0x0) {
      pcVar7 = "No directory result specified";
      uVar4 = 0x80004003;
      uVar6 = 0x80004003;
      goto LAB_0042718f;
    }
    if (*param_2 != 0) {
      FUN_00426b01(*param_2);
      *param_2 = 0;
    }
    pwVar2 = wcsrchr(param_1,L'\\');
    if ((pwVar2 != (wchar_t *)0x0) && (pwVar2 != param_1)) {
      iVar3 = (int)pwVar2 - (int)param_1 >> 1;
      uVar4 = FUN_00426338((int *)&local_8,iVar3 + 3);
      psVar5 = local_8;
      if ((int)uVar4 < 0) {
        FUN_00424d95(0x4000000,uVar4,'\x01',"Failed to allocate directory string");
        psVar5 = local_8;
      }
      else {
        if (local_8 != (short *)0x0) {
          pwVar2 = param_1;
          do {
            wVar1 = *pwVar2;
            pwVar2 = pwVar2 + 1;
          } while (wVar1 != L'\0');
          if ((iVar3 + 1U <= (uint)((int)pwVar2 - (int)(param_1 + 1) >> 1)) &&
             (uVar4 = FUN_00426273(local_8,iVar3 + 3,(int)param_1,iVar3 + 1U), (int)uVar4 < 0)) {
            FUN_00424d95(0x4000000,uVar4,'\x01',"Failed to copy source string to destination");
            goto LAB_00427173;
          }
        }
        *param_2 = (int)psVar5;
        psVar5 = (short *)0x0;
      }
LAB_00427173:
      if (psVar5 == (short *)0x0) {
        return uVar4;
      }
      FUN_00426b01((int)psVar5);
      return uVar4;
    }
    pcVar7 = "Invalid path.";
  }
  uVar6 = 0x80070057;
  uVar4 = 0x80070057;
LAB_0042718f:
  FUN_00424d95(0x4000000,uVar6,'\x01',pcVar7);
  return uVar4;
}



/* Function: FUN_004271a9 */

void __fastcall FUN_004271a9(LPCWSTR param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_2c [28];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  if (param_1 == (LPCWSTR)0x0) {
    uVar3 = 0x80070057;
    pcVar4 = "No file path specified";
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2c);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        uVar3 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar3 = DVar2;
        }
        if (-1 < (int)uVar3) {
          uVar3 = 0x80004005;
        }
        FUN_00424d95(0x4000000,uVar3,'\x01',"Failed to get attributes for file: %S");
      }
      else {
        *param_2 = local_c;
        param_2[1] = local_10;
      }
      goto LAB_00427249;
    }
    uVar3 = 0x80004003;
    pcVar4 = "No file size result specified";
  }
  FUN_00424d95(0x4000000,uVar3,'\x01',pcVar4);
LAB_00427249:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00427260 */

void __fastcall FUN_00427260(short *param_1,_SECURITY_ATTRIBUTES *param_2)

{
  WCHAR WVar1;
  longlong lVar2;
  uint uVar3;
  BOOL BVar4;
  DWORD DVar5;
  wchar_t *pwVar6;
  short *psVar7;
  LPCWSTR pWVar8;
  LPCWSTR _Str;
  char *pcVar9;
  _SECURITY_ATTRIBUTES *local_20;
  char local_19;
  _SECURITY_ATTRIBUTES local_18;
  LPCWSTR local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_18.nLength = 0;
  local_18.lpSecurityDescriptor = (_SECURITY_ATTRIBUTES *)0x0;
  local_18.bInheritHandle = 0;
  local_c = (LPCWSTR)0x0;
  local_20 = param_2;
  if (param_1 == (short *)0x0) {
    FUN_00424d95(0x4000000,0x80070057,'\x01',"No path specified");
    goto LAB_00427496;
  }
  uVar3 = FUN_00426a2d((int *)&local_c,param_1);
  if ((int)uVar3 < 0) {
    pcVar9 = "Out of memory";
LAB_004272c5:
    FUN_00424d95(0x4000000,uVar3,'\x01',pcVar9);
    _Str = local_c;
  }
  else {
    uVar3 = FUN_00426e90((int *)&local_c);
    if ((int)uVar3 < 0) {
      pcVar9 = "Out of memory.";
      goto LAB_004272c5;
    }
    if (param_2 == (_SECURITY_ATTRIBUTES *)0x0) {
      local_19 = '\0';
      uVar3 = FUN_00433ac8(&local_19);
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 | 0x10000000;
        pcVar9 = "Failed calling CanSetSystemOwner";
        goto LAB_004272c5;
      }
      if (local_19 != '\0') {
        local_20 = (_SECURITY_ATTRIBUTES *)0x0;
        uVar3 = FUN_00433905(&local_20);
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 | 0x10000000;
          pcVar9 = "Failed calling GetSystemSecurity";
          goto LAB_004272c5;
        }
        local_18.nLength = 0xc;
        local_18.lpSecurityDescriptor = local_20;
        local_18.bInheritHandle = 0;
        param_2 = &local_18;
        local_20 = param_2;
      }
    }
    _Str = local_c;
    BVar4 = CreateDirectoryW(local_c,param_2);
    if ((BVar4 == 0) && (DVar5 = GetLastError(), DVar5 != 0xb7)) {
      pwVar6 = wcsrchr(_Str,L'\\');
      if (pwVar6 == (wchar_t *)0x0) {
        FUN_00424d95(0x4000000,0x80070003,'\x01',"Cannot find parent for path: %ws.");
      }
      else {
        uVar3 = (int)pwVar6 - (int)_Str >> 1;
        lVar2 = (ulonglong)(uVar3 + 1) * 2;
        psVar7 = (short *)FUN_00433fd7(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
        if (psVar7 == (short *)0x0) {
          FUN_00424d95(0x4000000,0x8007000e,'\x01',"Failed to allocate memory");
        }
        else {
          pWVar8 = _Str;
          do {
            WVar1 = *pWVar8;
            pWVar8 = pWVar8 + 1;
          } while (WVar1 != L'\0');
          if (((uint)((int)pWVar8 - (int)(_Str + 1) >> 1) < uVar3) ||
             (uVar3 = FUN_00426273(psVar7,uVar3 + 1,(int)_Str,uVar3), -1 < (int)uVar3)) {
            uVar3 = FUN_00427260(psVar7,local_20);
            if ((int)uVar3 < 0) {
              pcVar9 = "Failed to create path: %ws";
              goto LAB_0042742b;
            }
            BVar4 = CreateDirectoryW(_Str,local_20);
            if (BVar4 == 0) {
              GetLastError();
            }
          }
          else {
            pcVar9 = "Failed to copy parent of path: %ws";
LAB_0042742b:
            FUN_00424d95(0x4000000,uVar3,'\x01',pcVar9);
          }
          o_free(psVar7);
        }
      }
    }
  }
  if (_Str != (LPCWSTR)0x0) {
    FUN_00426b01((int)_Str);
  }
LAB_00427496:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004274ad */

void __thiscall FUN_004274ad(void *this)

{
  uint uVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  uint uVar4;
  undefined4 *in_stack_00000018;
  char *pcVar5;
  LPVOID local_24;
  LPCWSTR local_20;
  undefined4 *local_1c;
  char local_15;
  _SECURITY_ATTRIBUTES local_14;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  pvVar3 = (HANDLE)0xffffffff;
  local_1c = in_stack_00000018;
  local_24 = (LPVOID)0x0;
  local_14.nLength = 0xc;
  local_14.lpSecurityDescriptor = (LPVOID)0x0;
  local_14.bInheritHandle = 0;
  uVar4 = 0;
  local_20 = (LPCWSTR)this;
  if (this == (void *)0x0) {
    FUN_00424d95(0x4000000,0x80070057,'\x01',"No file path specified");
    pvVar3 = (HANDLE)0xffffffff;
    if (local_1c == (undefined4 *)0x0) goto LAB_004275f7;
  }
  else {
    if (in_stack_00000018 == (undefined4 *)0x0) {
      FUN_00424d95(0x4000000,0x80004003,'\x01',"No file handle result specified");
      goto LAB_004275f7;
    }
    local_15 = '\0';
    uVar1 = FUN_00433ac8(&local_15);
    if ((int)uVar1 < 0) {
      pcVar5 = "Failed calling CanSetSystemOwner";
LAB_00427549:
      FUN_00424d95(0x4000000,uVar1 | 0x10000000,'\x01',pcVar5);
    }
    else {
      if (local_15 != '\0') {
        uVar1 = FUN_00433905(&local_24);
        if ((int)uVar1 < 0) {
          pcVar5 = "Failed calling GetSystemSecurity";
          goto LAB_00427549;
        }
        local_14.lpSecurityDescriptor = local_24;
      }
      do {
        pvVar3 = CreateFileW(local_20,0x40000001,0,&local_14,2,0x2000080,(HANDLE)0x0);
        if (pvVar3 != (HANDLE)0xffffffff) goto LAB_004275f5;
        if (2 < uVar4) break;
        Sleep(1000);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
      DVar2 = GetLastError();
      uVar4 = DVar2 & 0xffff | 0x80070000;
      if ((int)DVar2 < 1) {
        uVar4 = DVar2;
      }
      if (-1 < (int)uVar4) {
        uVar4 = 0x80004005;
      }
      FUN_00424d95(0x4000000,uVar4,'\x01',"Failed to create file: %S");
    }
  }
LAB_004275f5:
  *local_1c = pvVar3;
LAB_004275f7:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00427610 */

void __thiscall FUN_00427610(void *this)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 *in_stack_00000018;
  char *pcVar4;
  DWORD local_10;
  undefined2 local_c [2];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  local_c[0] = 2;
  if (this == (void *)0x0) {
    uVar3 = 0x80070057;
    pcVar4 = "No file path specified";
  }
  else {
    if (in_stack_00000018 != (undefined4 *)0x0) {
      uVar3 = FUN_004274ad(this);
      if ((int)uVar3 < 0) {
        pcVar4 = "Failed creating file %S";
      }
      else {
        BVar1 = DeviceIoControl((HANDLE)*in_stack_00000018,0x9c040,local_c,2,(LPVOID)0x0,0,&local_10
                                ,(LPOVERLAPPED)0x0);
        if (BVar1 != 0) goto LAB_004276fb;
        DVar2 = GetLastError();
        uVar3 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar3 = DVar2;
        }
        if (((uVar3 == 0x80070001) || (uVar3 == 0x80070032)) || (-1 < (int)uVar3))
        goto LAB_004276fb;
        DVar2 = GetLastError();
        uVar3 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar3 = DVar2;
        }
        pcVar4 = "Failed NTFS compressing file %S";
        if (-1 < (int)uVar3) {
          uVar3 = 0x80004005;
        }
      }
      FUN_00424d95(0x4000000,uVar3,'\x01',pcVar4);
      goto LAB_004276fb;
    }
    uVar3 = 0x80004003;
    pcVar4 = "No file handle result specified";
  }
  FUN_00424d95(0x4000000,uVar3,'\x01',pcVar4);
LAB_004276fb:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00427714 */

void __fastcall
FUN_00427714(undefined4 param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,int *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint local_1c;
  int *local_18;
  HKEY local_14;
  DWORD local_10;
  DWORD local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_18 = param_5;
  local_14 = (HKEY)0x0;
  local_10 = 0;
  local_c = 0;
  uVar4 = 0;
  local_1c = 0;
  if (param_5 == (int *)0x0) {
    uVar3 = 0x80004003;
    pcVar5 = "No value result specified";
    goto LAB_00427758;
  }
  if (param_2 == (LPCWSTR)0x0) {
    local_14 = (HKEY)0x80000002;
LAB_004277dd:
    if (*param_5 == 0) {
      uVar3 = RegQueryValueExW(local_14,param_4,(LPDWORD)0x0,&local_10,(LPBYTE)0x0,&local_c);
      if (uVar3 != 2) {
        if (uVar3 == 0) {
          bVar1 = false;
          goto LAB_00427895;
        }
        pcVar5 = "Failed to query value to get type and size of registry root: n/a, value: %S";
LAB_00427848:
        uVar2 = uVar3 & 0xffff | 0x80070000;
        if ((int)uVar3 < 1) {
          uVar2 = uVar3;
        }
LAB_00427856:
        FUN_00424d95(0x4000000,uVar2,'\x01',pcVar5);
      }
    }
    else {
      uVar3 = FUN_00426abd(*param_5,&local_1c);
      uVar4 = local_1c;
      if ((int)uVar3 < 0) {
        pcVar5 = "Failed to determine size of string.";
      }
      else {
        local_c = local_1c * 2 - 4;
        uVar3 = RegQueryValueExW(local_14,param_4,(LPDWORD)0x0,&local_10,(LPBYTE)*local_18,&local_c)
        ;
        if (uVar3 == 0) {
          bVar1 = true;
        }
        else {
          if (uVar3 != 0xea) {
            if (uVar3 != 2) {
              pcVar5 = 
              "Failed initial query of value to get type, size, and value of registry value: %S";
              goto LAB_00427848;
            }
            goto LAB_00427913;
          }
          bVar1 = false;
        }
LAB_00427895:
        if ((local_10 == 1) || (local_10 == 2)) {
          if (!bVar1) {
            uVar4 = (local_c >> 1) + 2;
            uVar2 = FUN_00426338(local_18,uVar4);
            if ((int)uVar2 < 0) {
              pcVar5 = "Failed to allocate string to read registry value: %S";
              goto LAB_00427856;
            }
            uVar3 = RegQueryValueExW(local_14,param_4,(LPDWORD)0x0,&local_10,(LPBYTE)*local_18,
                                     &local_c);
            if (uVar3 != 0) {
              pcVar5 = "Failed to query registry value: %S";
              goto LAB_00427848;
            }
          }
          *(undefined2 *)(*local_18 + -4 + uVar4 * 2) = 0;
          *(undefined2 *)(*local_18 + -2 + uVar4 * 2) = 0;
          goto LAB_00427913;
        }
        uVar3 = 0x8007000d;
        pcVar5 = "Registry value is not a string type.";
      }
LAB_00427758:
      FUN_00424d95(0x4000000,uVar3,'\x01',pcVar5);
    }
LAB_00427913:
    if (param_2 == (LPCWSTR)0x0) goto LAB_00427928;
  }
  else {
    uVar3 = FUN_00427aa4(&local_14,param_2,&local_14,0x20019,&local_14);
    if ((uVar3 != 2) && (uVar3 != 3)) {
      if (uVar3 == 0) goto LAB_004277dd;
      uVar4 = uVar3 & 0xffff | 0x80070000;
      if ((int)uVar3 < 1) {
        uVar4 = uVar3;
      }
      FUN_00424d95(0x4000000,uVar4,'\x01',"Failed to open the registry root: n/a, key: %S.");
    }
  }
  if (local_14 != (HKEY)0x0) {
    RegCloseKey(local_14);
  }
LAB_00427928:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00427941 */

void __fastcall
FUN_00427941(undefined4 param_1,LPCWSTR param_2,undefined4 param_3,LPCWSTR param_4,
            undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  HKEY local_18;
  undefined4 local_14;
  DWORD local_10 [2];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_18 = (HKEY)0x0;
  local_10[0] = 0;
  local_10[1] = 0;
  local_14 = 0;
  if (param_4 == (LPCWSTR)0x0) {
    uVar1 = 0x80070057;
    pcVar3 = "No value name specified";
LAB_0042797d:
    FUN_00424d95(0x4000000,uVar1,'\x01',pcVar3);
LAB_00427a78:
    if (param_2 == (LPCWSTR)0x0) goto LAB_00427a8b;
  }
  else {
    if (param_5 == (undefined4 *)0x0) {
      uVar1 = 0x80004003;
      pcVar3 = "No value result specified";
      goto LAB_0042797d;
    }
    if (param_2 == (LPCWSTR)0x0) {
      local_18 = (HKEY)0x80000002;
LAB_00427a09:
      local_10[1] = 4;
      uVar1 = RegQueryValueExW(local_18,param_4,(LPDWORD)0x0,local_10,(LPBYTE)&local_14,local_10 + 1
                              );
      if (uVar1 != 2) {
        if (uVar1 == 0) {
          if (local_10[0] != 4) {
            uVar1 = 0x8007000d;
            pcVar3 = "Registry value is not a DWORD type.";
            goto LAB_0042797d;
          }
          *param_5 = local_14;
        }
        else {
          uVar2 = uVar1 & 0xffff | 0x80070000;
          if ((int)uVar1 < 1) {
            uVar2 = uVar1;
          }
          FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to query registry value: %S");
        }
      }
      goto LAB_00427a78;
    }
    uVar1 = FUN_00427aa4(param_1,param_2,param_1,0x20019,&local_18);
    if ((uVar1 != 2) && (uVar1 != 3)) {
      if (uVar1 == 0) goto LAB_00427a09;
      uVar2 = uVar1 & 0xffff | 0x80070000;
      if ((int)uVar1 < 1) {
        uVar2 = uVar1;
      }
      FUN_00424d95(0x4000000,uVar2,'\x01',"Failed to open the registry root: n/a, key: %S.");
    }
  }
  if (local_18 != (HKEY)0x0) {
    RegCloseKey(local_18);
  }
LAB_00427a8b:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00427aa4 */

LSTATUS __fastcall
FUN_00427aa4(undefined4 param_1,LPCWSTR param_2,undefined4 param_3,REGSAM param_4,PHKEY param_5)

{
  LSTATUS LVar1;
  HANDLE local_8;
  
  local_8 = (HANDLE)0x0;
  if (param_5 == (PHKEY)0x0) {
    LVar1 = -0x7fffbffd;
    FUN_00424d95(0x4000000,0x80004003,'\x01',"No key result specified");
  }
  else {
    FUN_004324f8(&local_8);
    if (local_8 == (HANDLE)0x0) {
      LVar1 = RegOpenKeyExW((HKEY)0x80000002,param_2,0,param_4,param_5);
    }
    else {
      LVar1 = RegOpenKeyTransactedW((HKEY)0x80000002,param_2,0,param_4,param_5,local_8,(PVOID)0x0);
    }
  }
  return LVar1;
}



/* Function: FUN_00427b1d */

void __fastcall FUN_00427b1d(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  HKEY local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_c = (HKEY)0x0;
  uVar1 = FUN_00427aa4(param_1,L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\SideBySide",param_1,2
                       ,&local_c);
  if ((uVar1 != 2) && (uVar1 != 3)) {
    if (uVar1 == 0) {
      uVar1 = RegSetValueExW(local_c,L"MaintenanceFlags",0,4,&stack0x0000000c,4);
      if ((uVar1 == 2) || (uVar1 == 0)) goto LAB_00427bbb;
      pcVar3 = "Failed to set registry value: %S";
    }
    else {
      pcVar3 = "Failed to open key: %S";
    }
    uVar2 = uVar1 & 0xffff | 0x80070000;
    if ((int)uVar1 < 1) {
      uVar2 = uVar1;
    }
    FUN_00424d95(0x4000000,uVar2,'\x01',pcVar3);
  }
LAB_00427bbb:
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00427be2 */

char * __fastcall FUN_00427be2(int param_1)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_1 < -0x7ff6dfdb) {
    if (param_1 == -0x7ff6dfdc) {
      return "CRYPT_E_NOT_CHAR_STRING";
    }
    if (param_1 < -0x7ff6efef) {
      if (param_1 == -0x7ff6eff0) {
        return "CRYPT_E_STREAM_MSG_NOT_READY";
      }
      if (-0x7ff6effd < param_1) {
        switch(param_1) {
        case -0x7ff6effc:
          return "CRYPT_E_INVALID_MSG_TYPE";
        case -0x7ff6effb:
          return "CRYPT_E_UNEXPECTED_ENCODING";
        case -0x7ff6effa:
          return "CRYPT_E_AUTH_ATTR_MISSING";
        case -0x7ff6eff9:
          return "CRYPT_E_HASH_VALUE";
        case -0x7ff6eff8:
          return "CRYPT_E_INVALID_INDEX";
        case -0x7ff6eff7:
          return "CRYPT_E_ALREADY_DECRYPTED";
        case -0x7ff6eff6:
          return "CRYPT_E_NOT_DECRYPTED";
        case -0x7ff6eff5:
          return "CRYPT_E_RECIPIENT_NOT_FOUND";
        case -0x7ff6eff4:
          return "CRYPT_E_CONTROL_TYPE";
        case -0x7ff6eff3:
          return "CRYPT_E_ISSUER_SERIALNUMBER";
        case -0x7ff6eff2:
          return "CRYPT_E_SIGNER_NOT_FOUND";
        case -0x7ff6eff1:
          return "CRYPT_E_ATTRIBUTES_MISSING";
        }
switchD_00427cdd_default:
        return "Unknown Error";
      }
      if (param_1 == -0x7ff6effd) {
        return "CRYPT_E_OID_FORMAT";
      }
      if (param_1 < -0x7ff8fffa) {
        if (param_1 == -0x7ff8fffb) {
          return "E_ACCESSDENIED";
        }
        if (param_1 == -0x7fffbfff) {
          return "E_NOTIMPL";
        }
        if (param_1 == -0x7fffbffe) {
          return "E_NOINTERFACE";
        }
        if (param_1 == -0x7fffbffd) {
          return "E_POINTER";
        }
        if (param_1 == -0x7fffbffc) {
          return "E_ABORT";
        }
        if (param_1 == -0x7fffbffb) {
          return "E_FAIL";
        }
        pcVar1 = "E_UNEXPECTED";
        bVar2 = param_1 == -0x7fff0001;
      }
      else {
        if (param_1 == -0x7ff8fffa) {
          return "E_HANDLE";
        }
        if (param_1 == -0x7ff8fff2) {
          return "E_OUTOFMEMORY";
        }
        if (param_1 == -0x7ff8ffa9) {
          return "E_INVALIDARG";
        }
        if (param_1 == -0x7ff6efff) {
          return "CRYPT_E_MSG_ERROR";
        }
        pcVar1 = "CRYPT_E_UNKNOWN_ALGO";
        bVar2 = param_1 == -0x7ff6effe;
      }
    }
    else {
      if (-0x7ff6dff4 < param_1) {
        switch(param_1) {
        case -0x7ff6dff3:
          return "CRYPT_E_BAD_MSG";
        case -0x7ff6dff2:
          return "CRYPT_E_NO_SIGNER";
        case -0x7ff6dff1:
          return "CRYPT_E_PENDING_CLOSE";
        case -0x7ff6dff0:
          return "CRYPT_E_REVOKED";
        case -0x7ff6dfef:
          return "CRYPT_E_NO_REVOCATION_DLL";
        case -0x7ff6dfee:
          return "CRYPT_E_NO_REVOCATION_CHECK";
        case -0x7ff6dfed:
          return "CRYPT_E_REVOCATION_OFFLINE";
        case -0x7ff6dfec:
          return "CRYPT_E_NOT_IN_REVOCATION_DATABASE";
        case -0x7ff6dfe0:
          return "CRYPT_E_INVALID_NUMERIC_STRING";
        case -0x7ff6dfdf:
          return "CRYPT_E_INVALID_PRINTABLE_STRING";
        case -0x7ff6dfde:
          return "CRYPT_E_INVALID_IA5_STRING";
        case -0x7ff6dfdd:
          return "CRYPT_E_INVALID_X500_STRING";
        }
        goto switchD_00427cdd_default;
      }
      if (param_1 == -0x7ff6dff4) {
        return "CRYPT_E_NO_DECRYPT_CERT";
      }
      if (param_1 < -0x7ff6dff9) {
        if (param_1 == -0x7ff6dffa) {
          return "CRYPT_E_NO_PROVIDER";
        }
        if (param_1 == -0x7ff6efef) {
          return "CRYPT_E_STREAM_INSUFFICIENT_DATA";
        }
        if (param_1 == -0x7ff6dfff) {
          return "CRYPT_E_BAD_LEN";
        }
        if (param_1 == -0x7ff6dffe) {
          return "CRYPT_E_BAD_ENCODE";
        }
        if (param_1 == -0x7ff6dffd) {
          return "CRYPT_E_FILE_ERROR";
        }
        if (param_1 == -0x7ff6dffc) {
          return "CRYPT_E_NOT_FOUND";
        }
        pcVar1 = "CRYPT_E_EXISTS";
        bVar2 = param_1 == -0x7ff6dffb;
      }
      else {
        if (param_1 == -0x7ff6dff9) {
          return "CRYPT_E_SELF_SIGNED";
        }
        if (param_1 == -0x7ff6dff8) {
          return "CRYPT_E_DELETED_PREV";
        }
        if (param_1 == -0x7ff6dff7) {
          return "CRYPT_E_NO_MATCH";
        }
        if (param_1 == -0x7ff6dff6) {
          return "CRYPT_E_UNEXPECTED_MSG_TYPE";
        }
        pcVar1 = "CRYPT_E_NO_KEY_PROPERTY";
        bVar2 = param_1 == -0x7ff6dff5;
      }
    }
  }
  else if (param_1 < -0x7ff6cecb) {
    if (param_1 == -0x7ff6cecc) {
      return "CRYPT_E_ASN1_NYI";
    }
    if (-0x7ff6cefd < param_1) {
      if (param_1 < -0x7ff6cecc) {
        if (param_1 == -0x7ff6cecd) {
          return "CRYPT_E_ASN1_PDU_TYPE";
        }
        switch(param_1) {
        case -0x7ff6cefc:
          return "CRYPT_E_ASN1_LARGE";
        case -0x7ff6cefb:
          return "CRYPT_E_ASN1_CONSTRAINT";
        case -0x7ff6cefa:
          return "CRYPT_E_ASN1_MEMORY";
        case -0x7ff6cef9:
          return "CRYPT_E_ASN1_OVERFLOW";
        case -0x7ff6cef8:
          return "CRYPT_E_ASN1_BADPDU";
        case -0x7ff6cef7:
          return "CRYPT_E_ASN1_BADARGS";
        case -0x7ff6cef6:
          return "CRYPT_E_ASN1_BADREAL";
        case -0x7ff6cef5:
          return "CRYPT_E_ASN1_BADTAG";
        case -0x7ff6cef4:
          return "CRYPT_E_ASN1_CHOICE";
        case -0x7ff6cef3:
          return "CRYPT_E_ASN1_RULE";
        case -0x7ff6cef2:
          return "CRYPT_E_ASN1_UTF8";
        }
      }
      goto switchD_00427cdd_default;
    }
    if (param_1 == -0x7ff6cefd) {
      return "CRYPT_E_ASN1_CORRUPT";
    }
    if (param_1 < -0x7ff6dfd4) {
      if (param_1 == -0x7ff6dfd5) {
        return "CRYPT_E_NO_TRUSTED_SIGNER";
      }
      if (param_1 == -0x7ff6dfdb) {
        return "CRYPT_E_FILERESIZED";
      }
      if (param_1 == -0x7ff6dfda) {
        return "CRYPT_E_SECURITY_SETTINGS";
      }
      if (param_1 == -0x7ff6dfd9) {
        return "CRYPT_E_NO_VERIFY_USAGE_DLL";
      }
      if (param_1 == -0x7ff6dfd8) {
        return "CRYPT_E_NO_VERIFY_USAGE_CHECK";
      }
      if (param_1 == -0x7ff6dfd7) {
        return "CRYPT_E_VERIFY_USAGE_OFFLINE";
      }
      pcVar1 = "CRYPT_E_NOT_IN_CTL";
      bVar2 = param_1 == -0x7ff6dfd6;
    }
    else {
      if (param_1 == -0x7ff6dfd4) {
        return "CRYPT_E_MISSING_PUBKEY_PARA";
      }
      if (param_1 == -0x7ff6d000) {
        return "CRYPT_E_OSS_ERROR";
      }
      if (param_1 == -0x7ff6cf00) {
        return "CRYPT_E_ASN1_ERROR";
      }
      if (param_1 == -0x7ff6ceff) {
        return "CRYPT_E_ASN1_INTERNAL";
      }
      pcVar1 = "CRYPT_E_ASN1_EOD";
      bVar2 = param_1 == -0x7ff6cefe;
    }
  }
  else if (param_1 < -0x7ff4fef5) {
    if (param_1 == -0x7ff4fef6) {
      return "CERT_E_CHAINING";
    }
    if (param_1 < -0x7ff4fefb) {
      if (param_1 == -0x7ff4fefc) {
        return "CERT_E_PATHLENCONST";
      }
      if (param_1 == -0x7ff6cdff) {
        return "CRYPT_E_ASN1_EXTENDED";
      }
      if (param_1 == -0x7ff6cdfe) {
        return "CRYPT_E_ASN1_NOEOD";
      }
      if (param_1 == -0x7ff4ff00) {
        return "TRUST_E_NOSIGNATURE";
      }
      if (param_1 == -0x7ff4feff) {
        return "CERT_E_EXPIRED";
      }
      if (param_1 == -0x7ff4fefe) {
        return "CERT_E_VALIDITYPERIODNESTING";
      }
      pcVar1 = "CERT_E_ROLE";
      bVar2 = param_1 == -0x7ff4fefd;
    }
    else {
      if (param_1 == -0x7ff4fefb) {
        return "CERT_E_CRITICAL";
      }
      if (param_1 == -0x7ff4fefa) {
        return "CERT_E_PURPOSE";
      }
      if (param_1 == -0x7ff4fef9) {
        return "CERT_E_ISSUERCHAINING";
      }
      if (param_1 == -0x7ff4fef8) {
        return "CERT_E_MALFORMED";
      }
      pcVar1 = "CERT_E_UNTRUSTEDROOT";
      bVar2 = param_1 == -0x7ff4fef7;
    }
  }
  else {
    if (-0x7ff4feee < param_1) {
      if (param_1 == -0x7ff4feed) {
        return "CERT_E_INVALID_POLICY";
      }
      if (param_1 == -0x7ff4feec) {
        return "CERT_E_INVALID_NAME";
      }
      if (param_1 == -0x7fdbffdf) {
        return "WU_E_TIME_OUT";
      }
      if (param_1 != 0) {
        pcVar1 = "Unknown Error";
        if (param_1 == 1) {
          pcVar1 = "S_FALSE";
        }
        return pcVar1;
      }
      return "S_OK";
    }
    if (param_1 == -0x7ff4feee) {
      return "CERT_E_UNTRUSTEDCA";
    }
    if (param_1 == -0x7ff4fef4) {
      return "CERT_E_REVOKED";
    }
    if (param_1 == -0x7ff4fef3) {
      return "CERT_E_UNTRUSTEDTESTROOT";
    }
    if (param_1 == -0x7ff4fef2) {
      return "CERT_E_REVOCATION_FAILURE";
    }
    if (param_1 == -0x7ff4fef1) {
      return "CERT_E_CN_NO_MATCH";
    }
    pcVar1 = "CERT_E_WRONG_USAGE";
    bVar2 = param_1 == -0x7ff4fef0;
  }
  if (!bVar2) {
    pcVar1 = "Unknown Error";
  }
  return pcVar1;
}



/* Function: FUN_004281c0 */

char * __fastcall FUN_004281c0(int param_1)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_1 < -0x7ff0f7e6) {
    if (param_1 == -0x7ff0f7e7) {
      return "CBS_E_DUPLICATE_UPDATENAME";
    }
    if (param_1 < -0x7ff0fdd0) {
      if (param_1 == -0x7ff0fdd1) {
        return "SPAPI_E_NO_CATALOG_FOR_OEM_INF";
      }
      if (param_1 < -0x7ff0fdec) {
        if (param_1 == -0x7ff0fded) {
          return "SPAPI_E_DEVINFO_DATA_LOCKED";
        }
        if (param_1 < -0x7ff0fdfa) {
          if (param_1 == -0x7ff0fdfb) {
            return "SPAPI_E_INVALID_DEVINST_NAME";
          }
          if (param_1 < -0x7ff0fefd) {
            if (param_1 == -0x7ff0fefe) {
              return "SPAPI_E_LINE_NOT_FOUND";
            }
            if (param_1 == -0x7ff10000) {
              return "SPAPI_E_EXPECTED_SECTION_NAME";
            }
            if (param_1 == -0x7ff0ffff) {
              return "SPAPI_E_BAD_SECTION_NAME_LINE";
            }
            if (param_1 == -0x7ff0fffe) {
              return "SPAPI_E_SECTION_NAME_TOO_LONG";
            }
            if (param_1 == -0x7ff0fffd) {
              return "SPAPI_E_GENERAL_SYNTAX";
            }
            if (param_1 == -0x7ff0ff00) {
              return "SPAPI_E_WRONG_INF_STYLE";
            }
            pcVar1 = "SPAPI_E_SECTION_NOT_FOUND";
            bVar2 = param_1 == -0x7ff0feff;
          }
          else {
            if (param_1 == -0x7ff0fefd) {
              return "SPAPI_E_NO_BACKUP";
            }
            if (param_1 == -0x7ff0fe00) {
              return "SPAPI_E_NO_ASSOCIATED_CLASS";
            }
            if (param_1 == -0x7ff0fdff) {
              return "SPAPI_E_CLASS_MISMATCH";
            }
            if (param_1 == -0x7ff0fdfe) {
              return "SPAPI_E_DUPLICATE_FOUND";
            }
            if (param_1 == -0x7ff0fdfd) {
              return "SPAPI_E_NO_DRIVER_SELECTED";
            }
            pcVar1 = "SPAPI_E_KEY_DOES_NOT_EXIST";
            bVar2 = param_1 == -0x7ff0fdfc;
          }
          if (!bVar2) {
            pcVar1 = "Unknown Error";
          }
          return pcVar1;
        }
        switch(param_1) {
        case -0x7ff0fdfa:
          return "SPAPI_E_INVALID_CLASS";
        case -0x7ff0fdf9:
          return "SPAPI_E_DEVINST_ALREADY_EXISTS";
        case -0x7ff0fdf8:
          return "SPAPI_E_DEVINFO_NOT_REGISTERED";
        case -0x7ff0fdf7:
          return "SPAPI_E_INVALID_REG_PROPERTY";
        case -0x7ff0fdf6:
          return "SPAPI_E_NO_INF";
        case -0x7ff0fdf5:
          return "SPAPI_E_NO_SUCH_DEVINST";
        case -0x7ff0fdf4:
          return "SPAPI_E_CANT_LOAD_CLASS_ICON";
        case -0x7ff0fdf3:
          return "SPAPI_E_INVALID_CLASS_INSTALLER";
        case -0x7ff0fdf2:
          return "SPAPI_E_DI_DO_DEFAULT";
        case -0x7ff0fdf1:
          return "SPAPI_E_DI_NOFILECOPY";
        case -0x7ff0fdf0:
          return "SPAPI_E_INVALID_HWPROFILE";
        case -0x7ff0fdef:
          return "SPAPI_E_NO_DEVICE_SELECTED";
        case -0x7ff0fdee:
          return "SPAPI_E_DEVINFO_LIST_LOCKED";
        }
      }
      else {
        switch(param_1) {
        case -0x7ff0fdec:
          return "SPAPI_E_DI_BAD_PATH";
        case -0x7ff0fdeb:
          return "SPAPI_E_NO_CLASSINSTALL_PARAMS";
        case -0x7ff0fdea:
          return "SPAPI_E_FILEQUEUE_LOCKED";
        case -0x7ff0fde9:
          return "SPAPI_E_BAD_SERVICE_INSTALLSECT";
        case -0x7ff0fde8:
          return "SPAPI_E_NO_CLASS_DRIVER_LIST";
        case -0x7ff0fde7:
          return "SPAPI_E_NO_ASSOCIATED_SERVICE";
        case -0x7ff0fde6:
          return "SPAPI_E_NO_DEFAULT_DEVICE_INTERFACE";
        case -0x7ff0fde5:
          return "SPAPI_E_DEVICE_INTERFACE_ACTIVE";
        case -0x7ff0fde4:
          return "SPAPI_E_DEVICE_INTERFACE_REMOVED";
        case -0x7ff0fde3:
          return "SPAPI_E_BAD_INTERFACE_INSTALLSECT";
        case -0x7ff0fde2:
          return "SPAPI_E_NO_SUCH_INTERFACE_CLASS";
        case -0x7ff0fde1:
          return "SPAPI_E_INVALID_REFERENCE_STRING";
        case -0x7ff0fde0:
          return "SPAPI_E_INVALID_MACHINENAME";
        case -0x7ff0fddf:
          return "SPAPI_E_REMOTE_COMM_FAILURE";
        case -0x7ff0fdde:
          return "SPAPI_E_MACHINE_UNAVAILABLE";
        case -0x7ff0fddd:
          return "SPAPI_E_NO_CONFIGMGR_SERVICES";
        case -0x7ff0fddc:
          return "SPAPI_E_INVALID_PROPPAGE_PROVIDER";
        case -0x7ff0fddb:
          return "SPAPI_E_NO_SUCH_DEVICE_INTERFACE";
        case -0x7ff0fdda:
          return "SPAPI_E_DI_POSTPROCESSING_REQUIRED";
        case -0x7ff0fdd9:
          return "SPAPI_E_INVALID_COINSTALLER";
        case -0x7ff0fdd8:
          return "SPAPI_E_NO_COMPAT_DRIVERS";
        case -0x7ff0fdd7:
          return "SPAPI_E_NO_DEVICE_ICON";
        case -0x7ff0fdd6:
          return "SPAPI_E_INVALID_INF_LOGCONFIG";
        case -0x7ff0fdd5:
          return "SPAPI_E_DI_DONT_INSTALL";
        case -0x7ff0fdd4:
          return "SPAPI_E_INVALID_FILTER_DRIVER";
        case -0x7ff0fdd3:
          return "SPAPI_E_NON_WINDOWS_NT_DRIVER";
        case -0x7ff0fdd2:
          return "SPAPI_E_NON_WINDOWS_DRIVER";
        }
      }
    }
    else if (param_1 < -0x7ff0fcff) {
      if (param_1 == -0x7ff0fd00) {
        return "SPAPI_E_UNRECOVERABLE_STACK_OVERFLOW";
      }
      switch(param_1) {
      case -0x7ff0fdd0:
        return "SPAPI_E_DEVINSTALL_QUEUE_NONNATIVE";
      case -0x7ff0fdcf:
        return "SPAPI_E_NOT_DISABLEABLE";
      case -0x7ff0fdce:
        return "SPAPI_E_CANT_REMOVE_DEVINST";
      case -0x7ff0fdcd:
        return "SPAPI_E_INVALID_TARGET";
      case -0x7ff0fdcc:
        return "SPAPI_E_DRIVER_NONNATIVE";
      case -0x7ff0fdcb:
        return "SPAPI_E_IN_WOW64";
      case -0x7ff0fdca:
        return "SPAPI_E_SET_SYSTEM_RESTORE_POINT";
      case -0x7ff0fdc9:
        return "SPAPI_E_INCORRECTLY_COPIED_INF";
      case -0x7ff0fdc8:
        return "SPAPI_E_SCE_DISABLED";
      case -0x7ff0fdc7:
        return "SPAPI_E_UNKNOWN_EXCEPTION";
      case -0x7ff0fdc6:
        return "SPAPI_E_PNP_REGISTRY_ERROR";
      case -0x7ff0fdc5:
        return "SPAPI_E_REMOTE_REQUEST_UNSUPPORTED";
      case -0x7ff0fdc4:
        return "SPAPI_E_NOT_AN_INSTALLED_OEM_INF";
      case -0x7ff0fdc3:
        return "SPAPI_E_INF_IN_USE_BY_DEVICES";
      case -0x7ff0fdc2:
        return "SPAPI_E_DI_FUNCTION_OBSOLETE";
      case -0x7ff0fdc1:
        return "SPAPI_E_NO_AUTHENTICODE_CATALOG";
      case -0x7ff0fdc0:
        return "SPAPI_E_AUTHENTICODE_DISALLOWED";
      case -0x7ff0fdbf:
        return "SPAPI_E_AUTHENTICODE_TRUSTED_PUBLISHER";
      case -0x7ff0fdbe:
        return "SPAPI_E_AUTHENTICODE_TRUST_NOT_ESTABLISHED";
      case -0x7ff0fdbd:
        return "SPAPI_E_AUTHENTICODE_PUBLISHER_NOT_TRUSTED";
      case -0x7ff0fdbc:
        return "SPAPI_E_SIGNATURE_OSATTRIBUTE_MISMATCH";
      case -0x7ff0fdbb:
        return "SPAPI_E_ONLY_VALIDATE_VIA_AUTHENTICODE";
      case -0x7ff0fdba:
        return "SPAPI_E_DEVICE_INSTALLER_NOT_READY";
      case -0x7ff0fdb9:
        return "SPAPI_E_DRIVER_STORE_ADD_FAILED";
      case -0x7ff0fdb8:
        return "SPAPI_E_DEVICE_INSTALL_BLOCKED";
      case -0x7ff0fdb7:
        return "SPAPI_E_DRIVER_INSTALL_BLOCKED";
      case -0x7ff0fdb6:
        return "SPAPI_E_WRONG_INF_TYPE";
      case -0x7ff0fdb5:
        return "SPAPI_E_FILE_HASH_NOT_IN_CATALOG";
      case -0x7ff0fdb4:
        return "SPAPI_E_DRIVER_STORE_DELETE_FAILED";
      }
    }
    else {
      switch(param_1) {
      case -0x7ff0f800:
        return "CBS_E_INTERNAL_ERROR";
      case -0x7ff0f7ff:
        return "CBS_E_NOT_INITIALIZED";
      case -0x7ff0f7fe:
        return "CBS_E_ALREADY_INITIALIZED";
      case -0x7ff0f7fd:
        return "CBS_E_INVALID_PARAMETER";
      case -0x7ff0f7fc:
        return "CBS_E_OPEN_FAILED";
      case -0x7ff0f7fb:
        return "CBS_E_INVALID_PACKAGE";
      case -0x7ff0f7fa:
        return "CBS_E_PENDING";
      case -0x7ff0f7f9:
        return "CBS_E_NOT_INSTALLABLE";
      case -0x7ff0f7f8:
        return "CBS_E_IMAGE_NOT_ACCESSIBLE";
      case -0x7ff0f7f7:
        return "CBS_E_ARRAY_ELEMENT_MISSING";
      case -0x7ff0f7f6:
        return "CBS_E_REESTABLISH_SESSION";
      case -0x7ff0f7f5:
        return "CBS_E_PROPERTY_NOT_AVAILABLE";
      case -0x7ff0f7f4:
        return "CBS_E_UNKNOWN_UPDATE";
      case -0x7ff0f7f3:
        return "CBS_E_MANIFEST_INVALID_ITEM";
      case -0x7ff0f7f2:
        return "CBS_E_MANIFEST_VALIDATION_DUPLICATE_ATTRIBUTES";
      case -0x7ff0f7f1:
        return "CBS_E_MANIFEST_VALIDATION_DUPLICATE_ELEMENT";
      case -0x7ff0f7f0:
        return "CBS_E_MANIFEST_VALIDATION_MISSING_REQUIRED_ATTRIBUTES";
      case -0x7ff0f7ef:
        return "CBS_E_MANIFEST_VALIDATION_MISSING_REQUIRED_ELEMENTS";
      case -0x7ff0f7ee:
        return "CBS_E_MANIFEST_VALIDATION_UPDATES_PARENT_MISSING";
      case -0x7ff0f7ed:
        return "CBS_E_INVALID_INSTALL_STATE";
      case -0x7ff0f7ec:
        return "CBS_E_INVALID_CONFIG_VALUE";
      case -0x7ff0f7eb:
        return "CBS_E_INVALID_CARDINALITY";
      case -0x7ff0f7ea:
        return "CBS_E_DPX_JOB_STATE_SAVED";
      case -0x7ff0f7e9:
        return "CBS_E_PACKAGE_DELETED";
      case -0x7ff0f7e8:
        return "CBS_E_IDENTITY_MISMATCH";
      }
    }
  }
  else if (param_1 < -0x7ff0f7b0) {
    if (param_1 == -0x7ff0f7b1) {
      return "CBS_E_RESOLVE_FAILED";
    }
    switch(param_1) {
    case -0x7ff0f7e6:
      return "CBS_E_INVALID_DRIVER_OPERATION_KEY";
    case -0x7ff0f7e5:
      return "CBS_E_UNEXPECTED_PROCESSOR_ARCHITECTURE";
    case -0x7ff0f7e4:
      return "CBS_E_EXCESSIVE_EVALUATION";
    case -0x7ff0f7e3:
      return "CBS_E_CYCLE_EVALUATION";
    case -0x7ff0f7e2:
      return "CBS_E_NOT_APPLICABLE ";
    case -0x7ff0f7e1:
      return "CBS_E_SOURCE_MISSING";
    case -0x7ff0f7e0:
      return "CBS_E_CANCEL";
    case -0x7ff0f7df:
      return "CBS_E_ABORT";
    case -0x7ff0f7de:
      return "CBS_E_ILLEGAL_COMPONENT_UPDATE";
    case -0x7ff0f7dd:
      return "CBS_E_NEW_SERVICING_STACK_REQUIRED";
    case -0x7ff0f7dc:
      return "CBS_E_SOURCE_NOT_IN_LIST";
    case -0x7ff0f7db:
      return "CBS_E_CANNOT_REMOVE";
    case -0x7ff0f7da:
      return "CBS_E_PENDING_VICTIM";
    case -0x7ff0f7d9:
      return "CBS_E_STACK_SHUTDOWN_REQUIRED";
    case -0x7ff0f7d8:
      return "CBS_E_INSUFFICIENT_DISK_SPACE";
    case -0x7ff0f7d7:
      return "CBS_E_AC_POWER_REQUIRED";
    case -0x7ff0f7d6:
      return "CBS_E_STACK_UPDATE_FAILED_REBOOT_REQUIRED";
    case -0x7ff0f7d5:
      return "CBS_E_SQM_REPORT_IGNORED_AI_FAILURES_ON_TRANSACTION_RESOLVE";
    case -0x7ff0f7d4:
      return "CBS_E_DEPENDENT_FAILURE";
    case -0x7ff0f7d3:
      return "CBS_E_PAC_INITIAL_FAILURE";
    case -0x7ff0f7d2:
      return "CBS_E_NOT_ALLOWED_OFFLINE";
    case -0x7ff0f7d1:
      return "CBS_E_EXCLUSIVE_WOULD_MERGE";
    case -0x7ff0f7d0:
      return "CBS_E_IMAGE_UNSERVICEABLE";
    case -0x7ff0f7cf:
      return "CBS_E_STORE_CORRUPTION";
    case -0x7ff0f7ce:
      return "CBS_E_STORE_TOO_MUCH_CORRUPTION";
    case -0x7ff0f7cd:
      return "CBS_S_STACK_RESTART_REQUIRED";
    case -0x7ff0f7cc:
      return "CBS_E_CANNOT_USE_PNP_DRIVER_ON_DECONSTRUCTED_DRIVER_IMAGE";
    case -0x7ff0f7cb:
      return "CBS_E_STACK_SHUTTING_DOWN";
    case -0x7ff0f7ca:
      return "CBS_E_MUV6_STACK_SHUTDOWN_NEEDED";
    case -0x7ff0f7c9:
      return "CBS_E_POSTPONED_INSTALL_CONSIDERED";
    case -0x7ff0f7c8:
      return "CBS_E_RESERVICING_REQUIRED_BASELINE";
    case -0x7ff0f7c7:
      return "CBS_E_RPT_CRASHED";
    case -0x7ff0f7c0:
      return "CBS_E_SESSION_CORRUPT";
    case -0x7ff0f7bf:
      return "CBS_E_SESSION_INTERRUPTED";
    case -0x7ff0f7be:
      return "CBS_E_SESSION_FINALIZED";
    case -0x7ff0f7bd:
      return "CBS_E_SESSION_READONLY";
    case -0x7ff0f7ba:
      return "CBS_E_NOT_SUPPORTED_ON_IMAGE_TYPE";
    }
  }
  else if (param_1 < -0x7ff0f6cf) {
    if (param_1 == -0x7ff0f6d0) {
      return "CBS_E_UNO_PACKAGE_CAB_MISSING";
    }
    switch(param_1) {
    case -0x7ff0f700:
      return "CBS_E_XML_PARSER_FAILURE";
    case -0x7ff0f6ff:
      return "CBS_E_MANIFEST_VALIDATION_MULTIPLE_UPDATE_COMPONENT_ON_SAME_FAMILY_NOT_ALLOWED";
    case -0x7ff0f6fe:
      return "CBS_E_BUSY";
    case -0x7ff0f6fc:
      return "CBS_E_MORE_THAN_ONE_ACTIVE_EDITION";
    case -0x7ff0f6fb:
      return "CBS_E_NO_ACTIVE_EDITION";
    case -0x7ff0f6fa:
      return "CBS_E_DOWNLOAD_FAILURE";
    case -0x7ff0f6f9:
      return "CBS_E_GROUPPOLICY_DISALLOWED";
    case -0x7ff0f6f8:
      return "CBS_E_METERED_NETWORK";
    case -0x7ff0f6f7:
      return "CBS_E_PUBLIC_OBJECT_LEAK";
    case -0x7ff0f6f5:
      return "CBS_E_REPAIR_PACKAGE_CORRUPT";
    case -0x7ff0f6f4:
      return "CBS_E_COMPONENT_NOT_INSTALLED_BY_CBS";
    case -0x7ff0f6f3:
      return "CBS_E_MISSING_PACKAGE_MAPPING_INDEX";
    case -0x7ff0f6f2:
      return "CBS_E_EMPTY_PACKAGE_MAPPING_INDEX";
    case -0x7ff0f6f1:
      return "CBS_E_WINDOWS_UPDATE_SEARCH_FAILURE";
    case -0x7ff0f6f0:
      return "CBS_E_WINDOWS_AUTOMATIC_UPDATE_SETTING_DISALLOWED";
    case -0x7ff0f6ef:
      return "CBS_E_SOURCE_MODIFIED";
    case -0x7ff0f6ee:
      return "CBS_E_ONDEMAND_LOCALSOURCE_NOT_FOUND";
    case -0x7ff0f6ec:
      return "CBS_E_WINRE_NOT_ENABLED";
    case -0x7ff0f6eb:
      return "CBS_E_REPAIR_CONTENT_MISSING";
    case -0x7ff0f6ea:
      return "CBS_E_PAYLOAD_FILE_MISSING";
    case -0x7ff0f6e0:
      return "CBS_E_HANG_DETECTED";
    case -0x7ff0f6df:
      return "CBS_E_PRIMITIVES_FAILED";
    case -0x7ff0f6de:
      return "CBS_E_INSTALLERS_FAILED";
    case -0x7ff0f6dd:
      return "CBS_E_SAFEMODE_ENTERED";
    case -0x7ff0f6dc:
      return "CBS_E_SESSIONS_LEAKED";
    case -0x7ff0f6db:
      return "CBS_E_INVALID_EXECUTESTATE";
    case -0x7ff0f6da:
      return "CBS_E_CANNOT_REMOVE_CONTAINER_DEPENDENCY";
    case -0x7ff0f6d9:
      return "CBS_E_ONDEMAND_RESERVICING_REQUIRED";
    case -0x7ff0f6d8:
      return "CBS_E_ONLINE_ACTIONS_POSTPONED";
    }
  }
  else if (param_1 < -0x7ff0efff) {
    if (param_1 == -0x7ff0f000) {
      return "SPAPI_E_ERROR_NOT_INSTALLED";
    }
    switch(param_1) {
    case -0x7ff0f6c0:
      return "CBS_E_WUSUS_MAPPING_UNAVAILABLE";
    case -0x7ff0f6bf:
      return "CBS_E_WU_MAPPING_UNAVAILABLE";
    case -0x7ff0f6be:
      return "CBS_E_WUSUS_BYPASS_MAPPING_UNAVAILABLE";
    case -0x7ff0f6bd:
      return "CBS_E_WUSUS_MISSING_PACKAGE_MAPPING_INDEX";
    case -0x7ff0f6bc:
      return "CBS_E_WU_MISSING_PACKAGE_MAPPING_INDEX";
    case -0x7ff0f6bb:
      return "CBS_E_WUSUS_BYPASS_MISSING_PACKAGE_MAPPING_INDEX";
    case -0x7ff0f6ba:
      return "CBS_E_SOURCE_MISSING_FROM_WUSUS_CAB";
    case -0x7ff0f6b9:
      return "CBS_E_SOURCE_MISSING_FROM_WUSUS_EXPRESS";
    case -0x7ff0f6b8:
      return "CBS_E_SOURCE_MISSING_FROM_WU_CAB";
    case -0x7ff0f6b7:
      return "CBS_E_SOURCE_MISSING_FROM_WU_EXPRESS";
    case -0x7ff0f6b6:
      return "CBS_E_SOURCE_MISSING_FROM_WUSUS_BYPASS_CAB";
    case -0x7ff0f6b5:
      return "CBS_E_SOURCE_MISSING_FROM_WUSUS_BYPASS_EXPRESS";
    case -0x7ff0f6b4:
      return "CBS_E_3RD_PARTY_MAPPING_UNAVAILABLE";
    case -0x7ff0f6b3:
      return "CBS_E_3RD_PARTY_MISSING_PACKAGE_MAPPING_INDEX";
    case -0x7ff0f6b2:
      return "CBS_E_SOURCE_MISSING_FROM_3RD_PARTY_CAB";
    case -0x7ff0f6b1:
      return "CBS_E_SOURCE_MISSING_FROM_3RD_PARTY_EXPRESS";
    case -0x7ff0f6b0:
      return "CBS_E_NO_OPTIONAL_CONTENT_FOUND_FOR_BUILD";
    case -0x7ff0f6af:
      return "CBS_E_INVALID_NO_PRODUCT_REGISTERED";
    case -0x7ff0f6ae:
      return "CBS_E_INVALID_ACTION_LIST_PACKAGE_COUNT";
    case -0x7ff0f6ad:
      return "CBS_E_INVALID_ACTION_LIST_INSTALL_REASON";
    case -0x7ff0f6ac:
      return "CBS_E_NO_OPTIONAL_CONTENT_FOUND_ON_UPDATE_SERVERS";
    case -0x7ff0f6ab:
      return "CBS_E_INVALID_PACKAGE_REQUEST_ON_MULTILINGUAL_FOD";
    case -0x7ff0f6aa:
      return "CBS_E_INVALID_ACTION_LIST_INSTALL_ACTION";
    case -0x7ff0f680:
      return "PSFX_E_DELTA_NOT_SUPPORTED_FOR_COMPONENT";
    case -0x7ff0f67f:
      return "PSFX_E_REVERSE_AND_FORWARD_DELTAS_MISSING";
    case -0x7ff0f67e:
      return "PSFX_E_MATCHING_COMPONENT_NOT_FOUND";
    case -0x7ff0f67d:
      return "PSFX_E_MATCHING_COMPONENT_DIRECTORY_MISSING";
    case -0x7ff0f67c:
      return "PSFX_E_MATCHING_BINARY_MISSING";
    case -0x7ff0f67b:
      return "PSFX_E_APPLY_REVERSE_DELTA_FAILED";
    case -0x7ff0f67a:
      return "PSFX_E_APPLY_FORWARD_DELTA_FAILED";
    case -0x7ff0f679:
      return "PSFX_E_NULL_DELTA_HYDRATION_FAILED";
    case -0x7ff0f678:
      return "PSFX_E_INVALID_DELTA_COMBINATION";
    case -0x7ff0f677:
      return "PSFX_E_REVERSE_DELTA_MISSING";
    case -0x7ff0f670:
      return "PSFX_E_UNSUPPORTED_COMPRESSION_SWITCH";
    case -0x7ff0f66f:
      return "PSFX_E_MISSING_PAYLOAD_FILE";
    case -0x7ff0f66e:
      return "PSFX_E_PARTIAL_HYDRATION";
    case -0x7ff0f66d:
      return "PSFX_E_REBASE_HYDRATION_CANDIDATES_MISSING";
    case -0x7ff0f66c:
      return "PSFX_E_REBASE_HASH_ALG_NOT_SUPPORTED";
    case -0x7ff0f66b:
      return "PSFX_E_REBASE_MISSING_BASE_FILE";
    }
  }
  else {
    if (param_1 == 0xf0801) {
      return "CBS_S_BUSY";
    }
    if (param_1 == 0xf0802) {
      return "CBS_S_ALREADY_EXISTS";
    }
    if (param_1 == 0xf0803) {
      return "CBS_S_STACK_SHUTDOWN_REQUIRED";
    }
  }
  return "Unknown Error";
}



/* Function: FUN_00428c8c */

char * __fastcall FUN_00428c8c(int param_1)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_1 < -0x7ff8ff0f) {
    if (param_1 == -0x7ff8ff10) {
      return "ERROR_VC_DISCONNECTED";
    }
    switch(param_1) {
    case -0x7ff8ffff:
      return "ERROR_INVALID_FUNCTION";
    case -0x7ff8fffe:
      return "ERROR_FILE_NOT_FOUND";
    case -0x7ff8fffd:
      return "ERROR_PATH_NOT_FOUND";
    case -0x7ff8fffc:
      return "ERROR_TOO_MANY_bczED";
    case -0x7ff8fffa:
      return "ERROR_INVALID_HANDLE";
    case -0x7ff8fff9:
      return "ERROR_ARENA_TRASHED";
    case -0x7ff8fff8:
      return "ERROR_NOT_ENOUGH_MEMORY";
    case -0x7ff8fff7:
      return "ERROR_INVALID_BLOCK";
    case -0x7ff8fff6:
      return "ERROR_BAD_ENVIRONMENT";
    case -0x7ff8fff5:
      return "ERROR_BAD_FORMAT";
    case -0x7ff8fff4:
      return "ERROR_INVALID_ACCESS";
    case -0x7ff8fff3:
      return "ERROR_INVALID_DATA";
    case -0x7ff8fff2:
      return "ERROR_OUTOFMEMORY";
    case -0x7ff8fff1:
      return "ERROR_INVALID_DRIVE";
    case -0x7ff8fff0:
      return "ERROR_CURRENT_DIRECTORY";
    case -0x7ff8ffef:
      return "ERROR_NOT_SAME_DEVICE";
    case -0x7ff8ffee:
      return "ERROR_NO_MORE_FILES";
    case -0x7ff8ffed:
      return "ERROR_WRITE_PROTECT";
    case -0x7ff8ffec:
      return "ERROR_BAD_UNIT";
    case -0x7ff8ffeb:
      return "ERROR_NOT_READY";
    case -0x7ff8ffea:
      return "ERROR_BAD_COMMAND";
    case -0x7ff8ffe9:
      return "ERROR_CRC";
    case -0x7ff8ffe8:
      return "ERROR_BAD_LENGTH";
    case -0x7ff8ffe7:
      return "ERROR_SEEK";
    case -0x7ff8ffe6:
      return "ERROR_NOT_DOS_DISK";
    case -0x7ff8ffe5:
      return "ERROR_SECTOR_NOT_FOUND";
    case -0x7ff8ffe4:
      return "ERROR_OUT_OF_PAPER";
    case -0x7ff8ffe3:
      return "ERROR_WRITE_FAULT";
    case -0x7ff8ffe2:
      return "ERROR_READ_FAULT";
    case -0x7ff8ffe1:
      return "ERROR_GEN_FAILURE";
    case -0x7ff8ffe0:
      return "ERROR_SHARING_VIOLATION";
    case -0x7ff8ffdf:
      return "ERROR_LOCK_VIOLATION";
    case -0x7ff8ffde:
      return "ERROR_WRONG_DISK";
    case -0x7ff8ffdc:
      return "ERROR_SHARING_BUFFER_EXCEEDED";
    case -0x7ff8ffda:
      return "ERROR_HANDLE_EOF";
    case -0x7ff8ffd9:
      return "ERROR_HANDLE_DISK_FULL";
    case -0x7ff8ffce:
      return "ERROR_NOT_SUPPORTED";
    case -0x7ff8ffcd:
      return "ERROR_REM_NOT_LIST";
    case -0x7ff8ffcc:
      return "ERROR_DUP_NAME";
    case -0x7ff8ffcb:
      return "ERROR_BAD_NETPATH";
    case -0x7ff8ffca:
      return "ERROR_NETWORK_BUSY";
    case -0x7ff8ffc9:
      return "ERROR_DEV_NOT_EXIST";
    case -0x7ff8ffc8:
      return "ERROR_TOO_MANY_CMDS";
    case -0x7ff8ffc7:
      return "ERROR_ADAP_HDW_ERR";
    case -0x7ff8ffc6:
      return "ERROR_BAD_NET_RESP";
    case -0x7ff8ffc5:
      return "ERROR_UNEXP_NET_ERR";
    case -0x7ff8ffc4:
      return "ERROR_BAD_REM_ADAP";
    case -0x7ff8ffc3:
      return "ERROR_PRINTQ_FULL";
    case -0x7ff8ffc2:
      return "ERROR_NO_SPOOL_SPACE";
    case -0x7ff8ffc1:
      return "ERROR_PRINT_CANCELLED";
    case -0x7ff8ffc0:
      return "ERROR_NETNAME_DELETED";
    case -0x7ff8ffbf:
      return "ERROR_NETWORK_ACCESS_DENIED";
    case -0x7ff8ffbe:
      return "ERROR_BAD_DEV_TYPE";
    case -0x7ff8ffbd:
      return "ERROR_BAD_NET_NAME";
    case -0x7ff8ffbc:
      return "ERROR_TOO_MANY_NAMES";
    case -0x7ff8ffbb:
      return "ERROR_TOO_MANY_SESS";
    case -0x7ff8ffba:
      return "ERROR_SHARING_PAUSED";
    case -0x7ff8ffb9:
      return "ERROR_REQ_NOT_ACCEP";
    case -0x7ff8ffb8:
      return "ERROR_REDIR_PAUSED";
    case -0x7ff8ffb0:
      return "ERROR_FILE_EXISTS";
    case -0x7ff8ffae:
      return "ERROR_CANNOT_MAKE";
    case -0x7ff8ffad:
      return "ERROR_FAIL_I24";
    case -0x7ff8ffac:
      return "ERROR_OUT_OF_STRUCTURES";
    case -0x7ff8ffab:
      return "ERROR_ALREADY_ASSIGNED";
    case -0x7ff8ffaa:
      return "ERROR_INVALID_PASSWORD";
    case -0x7ff8ffa9:
      return "ERROR_INVALID_PARAMETER";
    case -0x7ff8ffa8:
      return "ERROR_NET_WRITE_FAULT";
    case -0x7ff8ffa7:
      return "ERROR_NO_PROC_SLOTS";
    case -0x7ff8ff9c:
      return "ERROR_TOO_MANY_SEMAPHORES";
    case -0x7ff8ff9b:
      return "ERROR_EXCL_SEM_ALREADY_OWNED";
    case -0x7ff8ff9a:
      return "ERROR_SEM_IS_SET";
    case -0x7ff8ff99:
      return "ERROR_TOO_MANY_SEM_REQUESTS";
    case -0x7ff8ff98:
      return "ERROR_INVALID_AT_INTERRUPT_TIME";
    case -0x7ff8ff97:
      return "ERROR_SEM_OWNER_DIED";
    case -0x7ff8ff96:
      return "ERROR_SEM_USER_LIMIT";
    case -0x7ff8ff95:
      return "ERROR_DISK_CHANGE";
    case -0x7ff8ff94:
      return "ERROR_DRIVE_LOCKED";
    case -0x7ff8ff93:
      return "ERROR_BROKEN_PIPE";
    case -0x7ff8ff92:
      return "ERROR_OPEN_FAILED";
    case -0x7ff8ff91:
      return "ERROR_BUFFER_OVERFLOW";
    case -0x7ff8ff90:
      return "ERROR_DISK_FULL";
    case -0x7ff8ff8f:
      return "ERROR_NO_MORE_SEARCH_HANDLES";
    case -0x7ff8ff8e:
      return "ERROR_INVALID_TARGET_HANDLE";
    case -0x7ff8ff8b:
      return "ERROR_INVALID_CATEGORY";
    case -0x7ff8ff8a:
      return "ERROR_INVALID_VERIFY_SWITCH";
    case -0x7ff8ff89:
      return "ERROR_BAD_DRIVER_LEVEL";
    case -0x7ff8ff88:
      return "ERROR_CALL_NOT_IMPLEMENTED";
    case -0x7ff8ff87:
      return "ERROR_SEM_TIMEOUT";
    case -0x7ff8ff86:
      return "ERROR_INSUFFICIENT_BUFFER";
    case -0x7ff8ff85:
      return "ERROR_INVALID_NAME";
    case -0x7ff8ff84:
      return "ERROR_INVALID_LEVEL";
    case -0x7ff8ff83:
      return "ERROR_NO_VOLUME_LABEL";
    case -0x7ff8ff82:
      return "ERROR_MOD_NOT_FOUND";
    case -0x7ff8ff81:
      return "ERROR_PROC_NOT_FOUND";
    case -0x7ff8ff80:
      return "ERROR_WAIT_NO_CHILDREN";
    case -0x7ff8ff7f:
      return "ERROR_CHILD_NOT_COMPLETE";
    case -0x7ff8ff7e:
      return "ERROR_DIRECT_ACCESS_HANDLE";
    case -0x7ff8ff7d:
      return "ERROR_NEGATIVE_SEEK";
    case -0x7ff8ff7c:
      return "ERROR_SEEK_ON_DEVICE";
    case -0x7ff8ff7b:
      return "ERROR_IS_JOIN_TARGET";
    case -0x7ff8ff7a:
      return "ERROR_IS_JOINED";
    case -0x7ff8ff79:
      return "ERROR_IS_SUBSTED";
    case -0x7ff8ff78:
      return "ERROR_NOT_JOINED";
    case -0x7ff8ff77:
      return "ERROR_NOT_SUBSTED";
    case -0x7ff8ff76:
      return "ERROR_JOIN_TO_JOIN";
    case -0x7ff8ff75:
      return "ERROR_SUBST_TO_SUBST";
    case -0x7ff8ff74:
      return "ERROR_JOIN_TO_SUBST";
    case -0x7ff8ff73:
      return "ERROR_SUBST_TO_JOIN";
    case -0x7ff8ff72:
      return "ERROR_BUSY_DRIVE";
    case -0x7ff8ff71:
      return "ERROR_SAME_DRIVE";
    case -0x7ff8ff70:
      return "ERROR_DIR_NOT_ROOT";
    case -0x7ff8ff6f:
      return "ERROR_DIR_NOT_EMPTY";
    case -0x7ff8ff6e:
      return "ERROR_IS_SUBST_PATH";
    case -0x7ff8ff6d:
      return "ERROR_IS_JOIN_PATH";
    case -0x7ff8ff6c:
      return "ERROR_PATH_BUSY";
    case -0x7ff8ff6b:
      return "ERROR_IS_SUBST_TARGET";
    case -0x7ff8ff6a:
      return "ERROR_SYSTEM_TRACE";
    case -0x7ff8ff69:
      return "ERROR_INVALID_EVENT_COUNT";
    case -0x7ff8ff68:
      return "ERROR_TOO_MANY_MUXWAITERS";
    case -0x7ff8ff67:
      return "ERROR_INVALID_LIST_FORMAT";
    case -0x7ff8ff66:
      return "ERROR_LABEL_TOO_LONG";
    case -0x7ff8ff65:
      return "ERROR_TOO_MANY_TCBS";
    case -0x7ff8ff64:
      return "ERROR_SIGNAL_REFUSED";
    case -0x7ff8ff63:
      return "ERROR_DISCARDED";
    case -0x7ff8ff62:
      return "ERROR_NOT_LOCKED";
    case -0x7ff8ff61:
      return "ERROR_BAD_THREADID_ADDR";
    case -0x7ff8ff60:
      return "ERROR_BAD_ARGUMENTS";
    case -0x7ff8ff5f:
      return "ERROR_BAD_PATHNAME";
    case -0x7ff8ff5e:
      return "ERROR_SIGNAL_PENDING";
    case -0x7ff8ff5c:
      return "ERROR_MAX_THRDS_REACHED";
    case -0x7ff8ff59:
      return "ERROR_LOCK_FAILED";
    case -0x7ff8ff56:
      return "ERROR_BUSY";
    case -0x7ff8ff53:
      return "ERROR_CANCEL_VIOLATION";
    case -0x7ff8ff52:
      return "ERROR_ATOMIC_LOCKS_NOT_SUPPORTED";
    case -0x7ff8ff4c:
      return "ERROR_INVALID_SEGMENT_NUMBER";
    case -0x7ff8ff4a:
      return "ERROR_INVALID_ORDINAL";
    case -0x7ff8ff49:
      return "ERROR_ALREADY_EXISTS";
    case -0x7ff8ff46:
      return "ERROR_INVALID_FLAG_NUMBER";
    case -0x7ff8ff45:
      return "ERROR_SEM_NOT_FOUND";
    case -0x7ff8ff44:
      return "ERROR_INVALID_STARTING_CODESEG";
    case -0x7ff8ff43:
      return "ERROR_INVALID_STACKSEG";
    case -0x7ff8ff42:
      return "ERROR_INVALID_MODULETYPE";
    case -0x7ff8ff41:
      return "ERROR_INVALID_EXE_SIGNATURE";
    case -0x7ff8ff40:
      return "ERROR_EXE_MARKED_INVALID";
    case -0x7ff8ff3f:
      return "ERROR_BAD_EXE_FORMAT";
    case -0x7ff8ff3e:
      return "ERROR_ITERATED_DATA_EXCEEDS_64k";
    case -0x7ff8ff3d:
      return "ERROR_INVALID_MINALLOCSIZE";
    case -0x7ff8ff3c:
      return "ERROR_DYNLINK_FROM_INVALID_RING";
    case -0x7ff8ff3b:
      return "ERROR_IOPL_NOT_ENABLED";
    case -0x7ff8ff3a:
      return "ERROR_INVALID_SEGDPL";
    case -0x7ff8ff39:
      return "ERROR_AUTODATASEG_EXCEEDS_64k";
    case -0x7ff8ff38:
      return "ERROR_RING2SEG_MUST_BE_MOVABLE";
    case -0x7ff8ff37:
      return "ERROR_RELOC_CHAIN_XEEDS_SEGLIM";
    case -0x7ff8ff36:
      return "ERROR_INFLOOP_IN_RELOC_CHAIN";
    case -0x7ff8ff35:
      return "ERROR_ENVVAR_NOT_FOUND";
    case -0x7ff8ff33:
      return "ERROR_NO_SIGNAL_SENT";
    case -0x7ff8ff32:
      return "ERROR_FILENAME_EXCED_RANGE";
    case -0x7ff8ff31:
      return "ERROR_RING2_STACK_IN_USE";
    case -0x7ff8ff30:
      return "ERROR_META_EXPANSION_TOO_LONG";
    case -0x7ff8ff2f:
      return "ERROR_INVALID_SIGNAL_NUMBER";
    case -0x7ff8ff2e:
      return "ERROR_THREAD_1_INACTIVE";
    case -0x7ff8ff2c:
      return "ERROR_LOCKED";
    case -0x7ff8ff2a:
      return "ERROR_TOO_MANY_MODULES";
    case -0x7ff8ff29:
      return "ERROR_NESTING_NOT_ALLOWED";
    case -0x7ff8ff28:
      return "ERROR_EXE_MACHINE_TYPE_MISMATCH";
    case -0x7ff8ff27:
      return "ERROR_EXE_CANNOT_MODIFY_SIGNED_BINARY";
    case -0x7ff8ff26:
      return "ERROR_EXE_CANNOT_MODIFY_STRONG_SIGNED_BINARY";
    case -0x7ff8ff24:
      return "ERROR_FILE_CHECKED_OUT";
    case -0x7ff8ff23:
      return "ERROR_CHECKOUT_REQUIRED";
    case -0x7ff8ff22:
      return "ERROR_BAD_FILE_TYPE";
    case -0x7ff8ff21:
      return "ERROR_FILE_TOO_LARGE";
    case -0x7ff8ff20:
      return "ERROR_FORMS_AUTH_REQUIRED";
    case -0x7ff8ff1f:
      return "ERROR_VIRUS_INFECTED";
    case -0x7ff8ff1e:
      return "ERROR_VIRUS_DELETED";
    case -0x7ff8ff1b:
      return "ERROR_PIPE_LOCAL";
    case -0x7ff8ff1a:
      return "ERROR_BAD_PIPE";
    case -0x7ff8ff19:
      return "ERROR_PIPE_BUSY";
    case -0x7ff8ff18:
      return "ERROR_NO_DATA";
    case -0x7ff8ff17:
      return "ERROR_PIPE_NOT_CONNECTED";
    case -0x7ff8ff16:
      return "ERROR_MORE_DATA";
    }
  }
  else if (param_1 < -0x7ff8ec69) {
    if (param_1 == -0x7ff8ec6a) {
      return "ERROR_GROUP_NOT_ONLINE";
    }
    if (param_1 < -0x7ff8fada) {
      if (param_1 == -0x7ff8fadb) {
        return "ERROR_NO_SUCH_USER";
      }
      if (param_1 + 0x7ff8ff02U < 0x427) {
                    /* WARNING: Could not recover jumptable at 0x0042912e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar1 = (char *)(*(code *)(&PTR_LAB_0042ca00)[param_1 + 0x7ff8ff02U])();
        return pcVar1;
      }
    }
    else if (param_1 < -0x7ff8f735) {
      if (param_1 == -0x7ff8f736) {
        return "ERROR_NOT_CONNECTED";
      }
      switch(param_1) {
      case -0x7ff8fada:
        return "ERROR_GROUP_EXISTS";
      case -0x7ff8fad9:
        return "ERROR_NO_SUCH_GROUP";
      case -0x7ff8fad8:
        return "ERROR_MEMBER_IN_GROUP";
      case -0x7ff8fad7:
        return "ERROR_MEMBER_NOT_IN_GROUP";
      case -0x7ff8fad6:
        return "ERROR_LAST_ADMIN";
      case -0x7ff8fad5:
        return "ERROR_WRONG_PASSWORD";
      case -0x7ff8fad4:
        return "ERROR_ILL_FORMED_PASSWORD";
      case -0x7ff8fad3:
        return "ERROR_PASSWORD_RESTRICTION";
      case -0x7ff8fad2:
        return "ERROR_LOGON_FAILURE";
      case -0x7ff8fad1:
        return "ERROR_ACCOUNT_RESTRICTION";
      case -0x7ff8fad0:
        return "ERROR_INVALID_LOGON_HOURS";
      case -0x7ff8facf:
        return "ERROR_INVALID_WORKSTATION";
      case -0x7ff8face:
        return "ERROR_PASSWORD_EXPIRED";
      case -0x7ff8facd:
        return "ERROR_ACCOUNT_DISABLED";
      case -0x7ff8facc:
        return "ERROR_NONE_MAPPED";
      case -0x7ff8facb:
        return "ERROR_TOO_MANY_LUIDS_REQUESTED";
      case -0x7ff8faca:
        return "ERROR_LUIDS_EXHAUSTED";
      case -0x7ff8fac9:
        return "ERROR_INVALID_SUB_AUTHORITY";
      case -0x7ff8fac8:
        return "ERROR_INVALID_ACL";
      case -0x7ff8fac7:
        return "ERROR_INVALID_SID";
      case -0x7ff8fac6:
        return "ERROR_INVALID_SECURITY_DESCR";
      case -0x7ff8fac4:
        return "ERROR_BAD_INHERITANCE_ACL";
      case -0x7ff8fac3:
        return "ERROR_SERVER_DISABLED";
      case -0x7ff8fac2:
        return "ERROR_SERVER_NOT_DISABLED";
      case -0x7ff8fac1:
        return "ERROR_INVALID_ID_AUTHORITY";
      case -0x7ff8fac0:
        return "ERROR_ALLOTTED_SPACE_EXCEEDED";
      case -0x7ff8fabf:
        return "ERROR_INVALID_GROUP_ATTRIBUTES";
      case -0x7ff8fabe:
        return "ERROR_BAD_IMPERSONATION_LEVEL";
      case -0x7ff8fabd:
        return "ERROR_CANT_OPEN_ANONYMOUS";
      case -0x7ff8fabc:
        return "ERROR_BAD_VALIDATION_CLASS";
      case -0x7ff8fabb:
        return "ERROR_BAD_TOKEN_TYPE";
      case -0x7ff8faba:
        return "ERROR_NO_SECURITY_ON_OBJECT";
      case -0x7ff8fab9:
        return "ERROR_CANT_ACCESS_DOMAIN_INFO";
      case -0x7ff8fab8:
        return "ERROR_INVALID_SERVER_STATE";
      case -0x7ff8fab7:
        return "ERROR_INVALID_DOMAIN_STATE";
      case -0x7ff8fab6:
        return "ERROR_INVALID_DOMAIN_ROLE";
      case -0x7ff8fab5:
        return "ERROR_NO_SUCH_DOMAIN";
      case -0x7ff8fab4:
        return "ERROR_DOMAIN_EXISTS";
      case -0x7ff8fab3:
        return "ERROR_DOMAIN_LIMIT_EXCEEDED";
      case -0x7ff8fab2:
        return "ERROR_INTERNAL_DB_CORRUPTION";
      case -0x7ff8fab1:
        return "ERROR_INTERNAL_ERROR";
      case -0x7ff8fab0:
        return "ERROR_GENERIC_NOT_MAPPED";
      case -0x7ff8faaf:
        return "ERROR_BAD_DESCRIPTOR_FORMAT";
      case -0x7ff8faae:
        return "ERROR_NOT_LOGON_PROCESS";
      case -0x7ff8faad:
        return "ERROR_LOGON_SESSION_EXISTS";
      case -0x7ff8faac:
        return "ERROR_NO_SUCH_PACKAGE";
      case -0x7ff8faab:
        return "ERROR_BAD_LOGON_SESSION_STATE";
      case -0x7ff8faaa:
        return "ERROR_LOGON_SESSION_COLLISION";
      case -0x7ff8faa9:
        return "ERROR_INVALID_LOGON_TYPE";
      case -0x7ff8faa8:
        return "ERROR_CANNOT_IMPERSONATE";
      case -0x7ff8faa7:
        return "ERROR_RXACT_INVALID_STATE";
      case -0x7ff8faa6:
        return "ERROR_RXACT_COMMIT_FAILURE";
      case -0x7ff8faa5:
        return "ERROR_SPECIAL_ACCOUNT";
      case -0x7ff8faa4:
        return "ERROR_SPECIAL_GROUP";
      case -0x7ff8faa3:
        return "ERROR_SPECIAL_USER";
      case -0x7ff8faa2:
        return "ERROR_MEMBERS_PRIMARY_GROUP";
      case -0x7ff8faa1:
        return "ERROR_TOKEN_ALREADY_IN_USE";
      case -0x7ff8faa0:
        return "ERROR_NO_SUCH_ALIAS";
      case -0x7ff8fa9f:
        return "ERROR_MEMBER_NOT_IN_ALIAS";
      case -0x7ff8fa9e:
        return "ERROR_MEMBER_IN_ALIAS";
      case -0x7ff8fa9d:
        return "ERROR_ALIAS_EXISTS";
      case -0x7ff8fa9c:
        return "ERROR_LOGON_NOT_GRANTED";
      case -0x7ff8fa9b:
        return "ERROR_TOO_MANY_SECRETS";
      case -0x7ff8fa9a:
        return "ERROR_SECRET_TOO_LONG";
      case -0x7ff8fa99:
        return "ERROR_INTERNAL_DB_ERROR";
      case -0x7ff8fa98:
        return "ERROR_TOO_MANY_CONTEXT_IDS";
      case -0x7ff8fa97:
        return "ERROR_LOGON_TYPE_NOT_GRANTED";
      case -0x7ff8fa96:
        return "ERROR_NT_CROSS_ENCRYPTION_REQUIRED";
      case -0x7ff8fa95:
        return "ERROR_NO_SUCH_MEMBER";
      case -0x7ff8fa94:
        return "ERROR_INVALID_MEMBER";
      case -0x7ff8fa93:
        return "ERROR_TOO_MANY_SIDS";
      case -0x7ff8fa92:
        return "ERROR_LM_CROSS_ENCRYPTION_REQUIRED";
      case -0x7ff8fa91:
        return "ERROR_NO_INHERITANCE";
      case -0x7ff8fa90:
        return "ERROR_FILE_CORRUPT";
      case -0x7ff8fa8f:
        return "ERROR_DISK_CORRUPT";
      case -0x7ff8fa8e:
        return "ERROR_NO_USER_SESSION_KEY";
      case -0x7ff8fa8d:
        return "ERROR_LICENSE_QUOTA_EXCEEDED";
      case -0x7ff8fa8c:
        return "ERROR_WRONG_TARGET_NAME";
      case -0x7ff8fa8b:
        return "ERROR_MUTUAL_AUTH_FAILED";
      case -0x7ff8fa8a:
        return "ERROR_TIME_SKEW";
      case -0x7ff8fa89:
        return "ERROR_CURRENT_DOMAIN_NOT_ALLOWED";
      case -0x7ff8fa88:
        return "ERROR_INVALID_WINDOW_HANDLE";
      case -0x7ff8fa87:
        return "ERROR_INVALID_MENU_HANDLE";
      case -0x7ff8fa86:
        return "ERROR_INVALID_CURSOR_HANDLE";
      case -0x7ff8fa85:
        return "ERROR_INVALID_ACCEL_HANDLE";
      case -0x7ff8fa84:
        return "ERROR_INVALID_HOOK_HANDLE";
      case -0x7ff8fa83:
        return "ERROR_INVALID_DWP_HANDLE";
      case -0x7ff8fa82:
        return "ERROR_TLW_WITH_WSCHILD";
      case -0x7ff8fa81:
        return "ERROR_CANNOT_FIND_WND_CLASS";
      case -0x7ff8fa80:
        return "ERROR_WINDOW_OF_OTHER_THREAD";
      case -0x7ff8fa7f:
        return "ERROR_HOTKEY_ALREADY_REGISTERED";
      case -0x7ff8fa7e:
        return "ERROR_CLASS_ALREADY_EXISTS";
      case -0x7ff8fa7d:
        return "ERROR_CLASS_DOES_NOT_EXIST";
      case -0x7ff8fa7c:
        return "ERROR_CLASS_HAS_WINDOWS";
      case -0x7ff8fa7b:
        return "ERROR_INVALID_INDEX";
      case -0x7ff8fa7a:
        return "ERROR_INVALID_ICON_HANDLE";
      case -0x7ff8fa79:
        return "ERROR_PRIVATE_DIALOG_INDEX";
      case -0x7ff8fa78:
        return "ERROR_LISTBOX_ID_NOT_FOUND";
      case -0x7ff8fa77:
        return "ERROR_NO_WILDCARD_CHARACTERS";
      case -0x7ff8fa76:
        return "ERROR_CLIPBOARD_NOT_OPEN";
      case -0x7ff8fa75:
        return "ERROR_HOTKEY_NOT_REGISTERED";
      case -0x7ff8fa74:
        return "ERROR_WINDOW_NOT_DIALOG";
      case -0x7ff8fa73:
        return "ERROR_CONTROL_ID_NOT_FOUND";
      case -0x7ff8fa72:
        return "ERROR_INVALID_COMBOBOX_MESSAGE";
      case -0x7ff8fa71:
        return "ERROR_WINDOW_NOT_COMBOBOX";
      case -0x7ff8fa70:
        return "ERROR_INVALID_EDIT_HEIGHT";
      case -0x7ff8fa6f:
        return "ERROR_DC_NOT_FOUND";
      case -0x7ff8fa6e:
        return "ERROR_INVALID_HOOK_FILTER";
      case -0x7ff8fa6d:
        return "ERROR_INVALID_FILTER_PROC";
      case -0x7ff8fa6c:
        return "ERROR_HOOK_NEEDS_HMOD";
      case -0x7ff8fa6b:
        return "ERROR_GLOBAL_ONLY_HOOK";
      case -0x7ff8fa6a:
        return "ERROR_JOURNAL_HOOK_SET";
      case -0x7ff8fa69:
        return "ERROR_HOOK_NOT_INSTALLED";
      case -0x7ff8fa68:
        return "ERROR_INVALID_LB_MESSAGE";
      case -0x7ff8fa67:
        return "ERROR_SETCOUNT_ON_BAD_LB";
      case -0x7ff8fa66:
        return "ERROR_LB_WITHOUT_TABSTOPS";
      case -0x7ff8fa65:
        return "ERROR_DESTROY_OBJECT_OF_OTHER_THREAD";
      case -0x7ff8fa64:
        return "ERROR_CHILD_WINDOW_MENU";
      case -0x7ff8fa63:
        return "ERROR_NO_SYSTEM_MENU";
      case -0x7ff8fa62:
        return "ERROR_INVALID_MSGBOX_STYLE";
      case -0x7ff8fa61:
        return "ERROR_INVALID_SPI_VALUE";
      case -0x7ff8fa60:
        return "ERROR_SCREEN_ALREADY_LOCKED";
      case -0x7ff8fa5f:
        return "ERROR_HWNDS_HAVE_DIFF_PARENT";
      case -0x7ff8fa5e:
        return "ERROR_NOT_CHILD_WINDOW";
      case -0x7ff8fa5d:
        return "ERROR_INVALID_GW_COMMAND";
      case -0x7ff8fa5c:
        return "ERROR_INVALID_THREAD_ID";
      case -0x7ff8fa5b:
        return "ERROR_NON_MDICHILD_WINDOW";
      case -0x7ff8fa5a:
        return "ERROR_POPUP_ALREADY_ACTIVE";
      case -0x7ff8fa59:
        return "ERROR_NO_SCROLLBARS";
      case -0x7ff8fa58:
        return "ERROR_INVALID_SCROLLBAR_RANGE";
      case -0x7ff8fa57:
        return "ERROR_INVALID_SHOWWIN_COMMAND";
      case -0x7ff8fa56:
        return "ERROR_NO_SYSTEM_RESOURCES";
      case -0x7ff8fa55:
        return "ERROR_NONPAGED_SYSTEM_RESOURCES";
      case -0x7ff8fa54:
        return "ERROR_PAGED_SYSTEM_RESOURCES";
      case -0x7ff8fa53:
        return "ERROR_WORKING_SET_QUOTA";
      case -0x7ff8fa52:
        return "ERROR_PAGEFILE_QUOTA";
      case -0x7ff8fa51:
        return "ERROR_COMMITMENT_LIMIT";
      case -0x7ff8fa50:
        return "ERROR_MENU_ITEM_NOT_FOUND";
      case -0x7ff8fa4f:
        return "ERROR_INVALID_KEYBOARD_HANDLE";
      case -0x7ff8fa4e:
        return "ERROR_HOOK_TYPE_NOT_ALLOWED";
      case -0x7ff8fa4d:
        return "ERROR_REQUIRES_INTERACTIVE_WINDOWSTATION";
      case -0x7ff8fa4c:
        return "ERROR_TIMEOUT";
      case -0x7ff8fa4b:
        return "ERROR_INVALID_MONITOR_HANDLE";
      case -0x7ff8fa4a:
        return "ERROR_INCORRECT_SIZE";
      case -0x7ff8fa49:
        return "ERROR_SYMLINK_CLASS_DISABLED";
      case -0x7ff8fa48:
        return "ERROR_SYMLINK_NOT_SUPPORTED";
      case -0x7ff8fa47:
        return "ERROR_XML_PARSE_ERROR";
      case -0x7ff8fa46:
        return "ERROR_XMLDSIG_ERROR";
      case -0x7ff8fa45:
        return "ERROR_RESTART_APPLICATION";
      case -0x7ff8fa44:
        return "ERROR_WRONG_COMPARTMENT";
      case -0x7ff8fa43:
        return "ERROR_AUTHIP_FAILURE";
      case -0x7ff8fa24:
        return "ERROR_EVENTLOG_FILE_CORRUPT";
      case -0x7ff8fa23:
        return "ERROR_EVENTLOG_CANT_START";
      case -0x7ff8fa22:
        return "ERROR_LOG_FILE_FULL";
      case -0x7ff8fa21:
        return "ERROR_EVENTLOG_FILE_CHANGED";
      case -0x7ff8f9f2:
        return "ERROR_INVALID_TASK_NAME";
      case -0x7ff8f9f1:
        return "ERROR_INVALID_TASK_INDEX";
      case -0x7ff8f9f0:
        return "ERROR_THREAD_ALREADY_IN_TASK";
      case -0x7ff8f9bf:
        return "ERROR_INSTALL_SERVICE_FAILURE";
      case -0x7ff8f9be:
        return "ERROR_INSTALL_USEREXIT";
      case -0x7ff8f9bd:
        return "ERROR_INSTALL_FAILURE";
      case -0x7ff8f9bc:
        return "ERROR_INSTALL_SUSPEND";
      case -0x7ff8f9bb:
        return "ERROR_UNKNOWN_PRODUCT";
      case -0x7ff8f9ba:
        return "ERROR_UNKNOWN_FEATURE";
      case -0x7ff8f9b9:
        return "ERROR_UNKNOWN_COMPONENT";
      case -0x7ff8f9b8:
        return "ERROR_UNKNOWN_PROPERTY";
      case -0x7ff8f9b7:
        return "ERROR_INVALID_HANDLE_STATE";
      case -0x7ff8f9b6:
        return "ERROR_BAD_CONFIGURATION";
      case -0x7ff8f9b5:
        return "ERROR_INDEX_ABSENT";
      case -0x7ff8f9b4:
        return "ERROR_INSTALL_SOURCE_ABSENT";
      case -0x7ff8f9b3:
        return "ERROR_INSTALL_PACKAGE_VERSION";
      case -0x7ff8f9b2:
        return "ERROR_PRODUCT_UNINSTALLED";
      case -0x7ff8f9b1:
        return "ERROR_BAD_QUERY_SYNTAX";
      case -0x7ff8f9b0:
        return "ERROR_INVALID_FIELD";
      case -0x7ff8f9af:
        return "ERROR_DEVICE_REMOVED";
      case -0x7ff8f9ae:
        return "ERROR_INSTALL_ALREADY_RUNNING";
      case -0x7ff8f9ad:
        return "ERROR_INSTALL_PACKAGE_OPEN_FAILED";
      case -0x7ff8f9ac:
        return "ERROR_INSTALL_PACKAGE_INVALID";
      case -0x7ff8f9ab:
        return "ERROR_INSTALL_UI_FAILURE";
      case -0x7ff8f9aa:
        return "ERROR_INSTALL_LOG_FAILURE";
      case -0x7ff8f9a9:
        return "ERROR_INSTALL_LANGUAGE_UNSUPPORTED";
      case -0x7ff8f9a8:
        return "ERROR_INSTALL_TRANSFORM_FAILURE";
      case -0x7ff8f9a7:
        return "ERROR_INSTALL_PACKAGE_REJECTED";
      case -0x7ff8f9a6:
        return "ERROR_FUNCTION_NOT_CALLED";
      case -0x7ff8f9a5:
        return "ERROR_FUNCTION_FAILED";
      case -0x7ff8f9a4:
        return "ERROR_INVALID_TABLE";
      case -0x7ff8f9a3:
        return "ERROR_DATATYPE_MISMATCH";
      case -0x7ff8f9a2:
        return "ERROR_UNSUPPORTED_TYPE";
      case -0x7ff8f9a1:
        return "ERROR_CREATE_FAILED";
      case -0x7ff8f9a0:
        return "ERROR_INSTALL_TEMP_UNWRITABLE";
      case -0x7ff8f99f:
        return "ERROR_INSTALL_PLATFORM_UNSUPPORTED";
      case -0x7ff8f99e:
        return "ERROR_INSTALL_NOTUSED";
      case -0x7ff8f99d:
        return "ERROR_PATCH_PACKAGE_OPEN_FAILED";
      case -0x7ff8f99c:
        return "ERROR_PATCH_PACKAGE_INVALID";
      case -0x7ff8f99b:
        return "ERROR_PATCH_PACKAGE_UNSUPPORTED";
      case -0x7ff8f99a:
        return "ERROR_PRODUCT_VERSION";
      case -0x7ff8f999:
        return "ERROR_INVALID_COMMAND_LINE";
      case -0x7ff8f998:
        return "ERROR_INSTALL_REMOTE_DISALLOWED";
      case -0x7ff8f997:
        return "ERROR_SUCCESS_REBOOT_INITIATED";
      case -0x7ff8f996:
        return "ERROR_PATCH_TARGET_NOT_FOUND";
      case -0x7ff8f995:
        return "ERROR_PATCH_PACKAGE_REJECTED";
      case -0x7ff8f994:
        return "ERROR_INSTALL_TRANSFORM_REJECTED";
      case -0x7ff8f993:
        return "ERROR_INSTALL_REMOTE_PROHIBITED";
      case -0x7ff8f992:
        return "ERROR_PATCH_REMOVAL_UNSUPPORTED";
      case -0x7ff8f991:
        return "ERROR_UNKNOWN_PATCH";
      case -0x7ff8f990:
        return "ERROR_PATCH_NO_SEQUENCE";
      case -0x7ff8f98f:
        return "ERROR_PATCH_REMOVAL_DISALLOWED";
      case -0x7ff8f98e:
        return "ERROR_INVALID_PATCH_XML";
      case -0x7ff8f98d:
        return "ERROR_PATCH_MANAGED_ADVERTISED_PRODUCT";
      case -0x7ff8f98c:
        return "ERROR_INSTALL_SERVICE_SAFEBOOT";
      case -0x7ff8f95c:
        return "RPC_S_INVALID_STRING_BINDING";
      case -0x7ff8f95b:
        return "RPC_S_WRONG_KIND_OF_BINDING";
      case -0x7ff8f95a:
        return "RPC_S_INVALID_BINDING";
      case -0x7ff8f959:
        return "RPC_S_PROTSEQ_NOT_SUPPORTED";
      case -0x7ff8f958:
        return "RPC_S_INVALID_RPC_PROTSEQ";
      case -0x7ff8f957:
        return "RPC_S_INVALID_STRING_UUID";
      case -0x7ff8f956:
        return "RPC_S_INVALID_ENDPOINT_FORMAT";
      case -0x7ff8f955:
        return "RPC_S_INVALID_NET_ADDR";
      case -0x7ff8f954:
        return "RPC_S_NO_ENDPOINT_FOUND";
      case -0x7ff8f953:
        return "RPC_S_INVALID_TIMEOUT";
      case -0x7ff8f952:
        return "RPC_S_OBJECT_NOT_FOUND";
      case -0x7ff8f951:
        return "RPC_S_ALREADY_REGISTERED";
      case -0x7ff8f950:
        return "RPC_S_TYPE_ALREADY_REGISTERED";
      case -0x7ff8f94f:
        return "RPC_S_ALREADY_LISTENING";
      case -0x7ff8f94e:
        return "RPC_S_NO_PROTSEQS_REGISTERED";
      case -0x7ff8f94d:
        return "RPC_S_NOT_LISTENING";
      case -0x7ff8f94c:
        return "RPC_S_UNKNOWN_MGR_TYPE";
      case -0x7ff8f94b:
        return "RPC_S_UNKNOWN_IF";
      case -0x7ff8f94a:
        return "RPC_S_NO_BINDINGS";
      case -0x7ff8f949:
        return "RPC_S_NO_PROTSEQS";
      case -0x7ff8f948:
        return "RPC_S_CANT_CREATE_ENDPOINT";
      case -0x7ff8f947:
        return "RPC_S_OUT_OF_RESOURCES";
      case -0x7ff8f946:
        return "RPC_S_SERVER_UNAVAILABLE";
      case -0x7ff8f945:
        return "RPC_S_SERVER_TOO_BUSY";
      case -0x7ff8f944:
        return "RPC_S_INVALID_NETWORK_OPTIONS";
      case -0x7ff8f943:
        return "RPC_S_NO_CALL_ACTIVE";
      case -0x7ff8f942:
        return "RPC_S_CALL_FAILED";
      case -0x7ff8f941:
        return "RPC_S_CALL_FAILED_DNE";
      case -0x7ff8f940:
        return "RPC_S_PROTOCOL_ERROR";
      case -0x7ff8f93f:
        return "RPC_S_PROXY_ACCESS_DENIED";
      case -0x7ff8f93e:
        return "RPC_S_UNSUPPORTED_TRANS_SYN";
      case -0x7ff8f93c:
        return "RPC_S_UNSUPPORTED_TYPE";
      case -0x7ff8f93b:
        return "RPC_S_INVALID_TAG";
      case -0x7ff8f93a:
        return "RPC_S_INVALID_BOUND";
      case -0x7ff8f939:
        return "RPC_S_NO_ENTRY_NAME";
      case -0x7ff8f938:
        return "RPC_S_INVALID_NAME_SYNTAX";
      case -0x7ff8f937:
        return "RPC_S_UNSUPPORTED_NAME_SYNTAX";
      case -0x7ff8f935:
        return "RPC_S_UUID_NO_ADDRESS";
      case -0x7ff8f934:
        return "RPC_S_DUPLICATE_ENDPOINT";
      case -0x7ff8f933:
        return "RPC_S_UNKNOWN_AUTHN_TYPE";
      case -0x7ff8f932:
        return "RPC_S_MAX_CALLS_TOO_SMALL";
      case -0x7ff8f931:
        return "RPC_S_STRING_TOO_LONG";
      case -0x7ff8f930:
        return "RPC_S_PROTSEQ_NOT_FOUND";
      case -0x7ff8f92f:
        return "RPC_S_PROCNUM_OUT_OF_RANGE";
      case -0x7ff8f92e:
        return "RPC_S_BINDING_HAS_NO_AUTH";
      case -0x7ff8f92d:
        return "RPC_S_UNKNOWN_AUTHN_SERVICE";
      case -0x7ff8f92c:
        return "RPC_S_UNKNOWN_AUTHN_LEVEL";
      case -0x7ff8f92b:
        return "RPC_S_INVALID_AUTH_IDENTITY";
      case -0x7ff8f92a:
        return "RPC_S_UNKNOWN_AUTHZ_SERVICE";
      case -0x7ff8f926:
        return "RPC_S_NOTHING_TO_EXPORT";
      case -0x7ff8f925:
        return "RPC_S_INCOMPLETE_NAME";
      case -0x7ff8f924:
        return "RPC_S_INVALID_VERS_OPTION";
      case -0x7ff8f923:
        return "RPC_S_NO_MORE_MEMBERS";
      case -0x7ff8f922:
        return "RPC_S_NOT_ALL_OBJS_UNEXPORTED";
      case -0x7ff8f921:
        return "RPC_S_INTERFACE_NOT_FOUND";
      case -0x7ff8f920:
        return "RPC_S_ENTRY_ALREADY_EXISTS";
      case -0x7ff8f91f:
        return "RPC_S_ENTRY_NOT_FOUND";
      case -0x7ff8f91e:
        return "RPC_S_NAME_SERVICE_UNAVAILABLE";
      case -0x7ff8f91d:
        return "RPC_S_INVALID_NAF_ID";
      case -0x7ff8f91c:
        return "RPC_S_CANNOT_SUPPORT";
      case -0x7ff8f91b:
        return "RPC_S_NO_CONTEXT_AVAILABLE";
      case -0x7ff8f91a:
        return "RPC_S_INTERNAL_ERROR";
      case -0x7ff8f919:
        return "RPC_S_ZERO_DIVIDE";
      case -0x7ff8f918:
        return "RPC_S_ADDRESS_ERROR";
      case -0x7ff8f917:
        return "RPC_S_FP_DIV_ZERO";
      case -0x7ff8f916:
        return "RPC_S_FP_UNDERFLOW";
      case -0x7ff8f915:
        return "RPC_S_FP_OVERFLOW";
      case -0x7ff8f914:
        return "RPC_X_NO_MORE_ENTRIES";
      case -0x7ff8f913:
        return "RPC_X_SS_CHAR_TRANS_OPEN_FAIL";
      case -0x7ff8f912:
        return "RPC_X_SS_CHAR_TRANS_SHORT_FILE";
      case -0x7ff8f911:
        return "RPC_X_SS_IN_NULL_CONTEXT";
      case -0x7ff8f90f:
        return "RPC_X_SS_CONTEXT_DAMAGED";
      case -0x7ff8f90e:
        return "RPC_X_SS_HANDLES_MISMATCH";
      case -0x7ff8f90d:
        return "RPC_X_SS_CANNOT_GET_CALL_HANDLE";
      case -0x7ff8f90c:
        return "RPC_X_NULL_REF_POINTER";
      case -0x7ff8f90b:
        return "RPC_X_ENUM_VALUE_OUT_OF_RANGE";
      case -0x7ff8f90a:
        return "RPC_X_BYTE_COUNT_TOO_SMALL";
      case -0x7ff8f909:
        return "RPC_X_BAD_STUB_DATA";
      case -0x7ff8f908:
        return "ERROR_INVALID_USER_BUFFER";
      case -0x7ff8f907:
        return "ERROR_UNRECOGNIZED_MEDIA";
      case -0x7ff8f906:
        return "ERROR_NO_TRUST_LSA_SECRET";
      case -0x7ff8f905:
        return "ERROR_NO_TRUST_SAM_ACCOUNT";
      case -0x7ff8f904:
        return "ERROR_TRUSTED_DOMAIN_FAILURE";
      case -0x7ff8f903:
        return "ERROR_TRUSTED_RELATIONSHIP_FAILURE";
      case -0x7ff8f902:
        return "ERROR_TRUST_FAILURE";
      case -0x7ff8f901:
        return "RPC_S_CALL_IN_PROGRESS";
      case -0x7ff8f900:
        return "ERROR_NETLOGON_NOT_STARTED";
      case -0x7ff8f8ff:
        return "ERROR_ACCOUNT_EXPIRED";
      case -0x7ff8f8fe:
        return "ERROR_REDIRECTOR_HAS_OPEN_HANDLES";
      case -0x7ff8f8fd:
        return "ERROR_PRINTER_DRIVER_ALREADY_INSTALLED";
      case -0x7ff8f8fc:
        return "ERROR_UNKNOWN_PORT";
      case -0x7ff8f8fb:
        return "ERROR_UNKNOWN_PRINTER_DRIVER";
      case -0x7ff8f8fa:
        return "ERROR_UNKNOWN_PRINTPROCESSOR";
      case -0x7ff8f8f9:
        return "ERROR_INVALID_SEPARATOR_FILE";
      case -0x7ff8f8f8:
        return "ERROR_INVALID_PRIORITY";
      case -0x7ff8f8f7:
        return "ERROR_INVALID_PRINTER_NAME";
      case -0x7ff8f8f6:
        return "ERROR_PRINTER_ALREADY_EXISTS";
      case -0x7ff8f8f5:
        return "ERROR_INVALID_PRINTER_COMMAND";
      case -0x7ff8f8f4:
        return "ERROR_INVALID_DATATYPE";
      case -0x7ff8f8f3:
        return "ERROR_INVALID_ENVIRONMENT";
      case -0x7ff8f8f2:
        return "RPC_S_NO_MORE_BINDINGS";
      case -0x7ff8f8f1:
        return "ERROR_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT";
      case -0x7ff8f8f0:
        return "ERROR_NOLOGON_WORKSTATION_TRUST_ACCOUNT";
      case -0x7ff8f8ef:
        return "ERROR_NOLOGON_SERVER_TRUST_ACCOUNT";
      case -0x7ff8f8ee:
        return "ERROR_DOMAIN_TRUST_INCONSISTENT";
      case -0x7ff8f8ed:
        return "ERROR_SERVER_HAS_OPEN_HANDLES";
      case -0x7ff8f8ec:
        return "ERROR_RESOURCE_DATA_NOT_FOUND";
      case -0x7ff8f8eb:
        return "ERROR_RESOURCE_TYPE_NOT_FOUND";
      case -0x7ff8f8ea:
        return "ERROR_RESOURCE_NAME_NOT_FOUND";
      case -0x7ff8f8e9:
        return "ERROR_RESOURCE_LANG_NOT_FOUND";
      case -0x7ff8f8e8:
        return "ERROR_NOT_ENOUGH_QUOTA";
      case -0x7ff8f8e7:
        return "RPC_S_NO_INTERFACES";
      case -0x7ff8f8e6:
        return "RPC_S_CALL_CANCELLED";
      case -0x7ff8f8e5:
        return "RPC_S_BINDING_INCOMPLETE";
      case -0x7ff8f8e4:
        return "RPC_S_COMM_FAILURE";
      case -0x7ff8f8e3:
        return "RPC_S_UNSUPPORTED_AUTHN_LEVEL";
      case -0x7ff8f8e2:
        return "RPC_S_NO_PRINC_NAME";
      case -0x7ff8f8e1:
        return "RPC_S_NOT_RPC_ERROR";
      case -0x7ff8f8e0:
        return "RPC_S_UUID_LOCAL_ONLY";
      case -0x7ff8f8df:
        return "RPC_S_SEC_PKG_ERROR";
      case -0x7ff8f8de:
        return "RPC_S_NOT_CANCELLED";
      case -0x7ff8f8dd:
        return "RPC_X_INVALID_ES_ACTION";
      case -0x7ff8f8dc:
        return "RPC_X_WRONG_ES_VERSION";
      case -0x7ff8f8db:
        return "RPC_X_WRONG_STUB_VERSION";
      case -0x7ff8f8da:
        return "RPC_X_INVALID_PIPE_OBJECT";
      case -0x7ff8f8d9:
        return "RPC_X_WRONG_PIPE_ORDER";
      case -0x7ff8f8d8:
        return "RPC_X_WRONG_PIPE_VERSION";
      case -0x7ff8f8d7:
        return "RPC_S_COOKIE_AUTH_FAILED";
      case -0x7ff8f896:
        return "RPC_S_GROUP_MEMBER_NOT_FOUND";
      case -0x7ff8f894:
        return "RPC_S_INVALID_OBJECT";
      case -0x7ff8f893:
        return "ERROR_INVALID_TIME";
      case -0x7ff8f892:
        return "ERROR_INVALID_FORM_NAME";
      case -0x7ff8f891:
        return "ERROR_INVALID_FORM_SIZE";
      case -0x7ff8f890:
        return "ERROR_ALREADY_WAITING";
      case -0x7ff8f88f:
        return "ERROR_PRINTER_DELETED";
      case -0x7ff8f88e:
        return "ERROR_INVALID_PRINTER_STATE";
      case -0x7ff8f88d:
        return "ERROR_PASSWORD_MUST_CHANGE";
      case -0x7ff8f88c:
        return "ERROR_DOMAIN_CONTROLLER_NOT_FOUND";
      case -0x7ff8f88b:
        return "ERROR_ACCOUNT_LOCKED_OUT";
      case -0x7ff8f887:
        return "RPC_S_SEND_INCOMPLETE";
      case -0x7ff8f886:
        return "RPC_S_INVALID_ASYNC_HANDLE";
      case -0x7ff8f885:
        return "RPC_S_INVALID_ASYNC_CALL";
      case -0x7ff8f884:
        return "RPC_X_PIPE_CLOSED";
      case -0x7ff8f883:
        return "RPC_X_PIPE_DISCIPLINE_ERROR";
      case -0x7ff8f882:
        return "RPC_X_PIPE_EMPTY";
      case -0x7ff8f881:
        return "ERROR_NO_SITENAME";
      case -0x7ff8f880:
        return "ERROR_CANT_ACCESS_FILE";
      case -0x7ff8f87f:
        return "ERROR_CANT_RESOLVE_FILENAME";
      case -0x7ff8f87e:
        return "RPC_S_ENTRY_TYPE_MISMATCH";
      case -0x7ff8f87d:
        return "RPC_S_NOT_ALL_OBJS_EXPORTED";
      case -0x7ff8f87c:
        return "RPC_S_INTERFACE_NOT_EXPORTED";
      case -0x7ff8f87b:
        return "RPC_S_PROFILE_NOT_ADDED";
      case -0x7ff8f87a:
        return "RPC_S_PRF_ELT_NOT_ADDED";
      case -0x7ff8f879:
        return "RPC_S_PRF_ELT_NOT_REMOVED";
      case -0x7ff8f878:
        return "RPC_S_GRP_ELT_NOT_ADDED";
      case -0x7ff8f877:
        return "RPC_S_GRP_ELT_NOT_REMOVED";
      case -0x7ff8f876:
        return "ERROR_KM_DRIVER_BLOCKED";
      case -0x7ff8f875:
        return "ERROR_CONTEXT_EXPIRED";
      case -0x7ff8f874:
        return "ERROR_PER_USER_TRUST_QUOTA_EXCEEDED";
      case -0x7ff8f873:
        return "ERROR_ALL_USER_TRUST_QUOTA_EXCEEDED";
      case -0x7ff8f872:
        return "ERROR_USER_DELETE_TRUST_QUOTA_EXCEEDED";
      case -0x7ff8f871:
        return "ERROR_AUTHENTICATION_FIREWALL_FAILED";
      case -0x7ff8f870:
        return "ERROR_REMOTE_PRINT_CONNECTIONS_BLOCKED";
      case -0x7ff8f86f:
        return "ERROR_NTLM_BLOCKED";
      case -0x7ff8f830:
        return "ERROR_INVALID_PIXEL_FORMAT";
      case -0x7ff8f82f:
        return "ERROR_BAD_DRIVER";
      case -0x7ff8f82e:
        return "ERROR_INVALID_WINDOW_STYLE";
      case -0x7ff8f82d:
        return "ERROR_METAFILE_NOT_SUPPORTED";
      case -0x7ff8f82c:
        return "ERROR_TRANSFORM_NOT_SUPPORTED";
      case -0x7ff8f82b:
        return "ERROR_CLIPPING_NOT_SUPPORTED";
      case -0x7ff8f826:
        return "ERROR_INVALID_CMM";
      case -0x7ff8f825:
        return "ERROR_INVALID_PROFILE";
      case -0x7ff8f824:
        return "ERROR_TAG_NOT_FOUND";
      case -0x7ff8f823:
        return "ERROR_TAG_NOT_PRESENT";
      case -0x7ff8f822:
        return "ERROR_DUPLICATE_TAG";
      case -0x7ff8f821:
        return "ERROR_PROFILE_NOT_ASSOCIATED_WITH_DEVICE";
      case -0x7ff8f820:
        return "ERROR_PROFILE_NOT_FOUND";
      case -0x7ff8f81f:
        return "ERROR_INVALID_COLORSPACE";
      case -0x7ff8f81e:
        return "ERROR_ICM_NOT_ENABLED";
      case -0x7ff8f81d:
        return "ERROR_DELETING_ICM_XFORM";
      case -0x7ff8f81c:
        return "ERROR_INVALID_TRANSFORM";
      case -0x7ff8f81b:
        return "ERROR_COLORSPACE_MISMATCH";
      case -0x7ff8f81a:
        return "ERROR_INVALID_COLORINDEX";
      case -0x7ff8f819:
        return "ERROR_PROFILE_DOES_NOT_MATCH_DEVICE";
      case -0x7ff8f7c4:
        return "ERROR_CONNECTED_OTHER_PASSWORD";
      case -0x7ff8f7c3:
        return "ERROR_CONNECTED_OTHER_PASSWORD_DEFAULT";
      case -0x7ff8f766:
        return "ERROR_BAD_USERNAME";
      }
    }
    else {
      if (param_1 < -0x7ff8ef28) {
        if (param_1 == -0x7ff8ef29) {
          return "ERROR_UNABLE_TO_CLEAN";
        }
        if (param_1 < -0x7ff8f05b) {
          if (param_1 == -0x7ff8f05c) {
            return "ERROR_FULL_BACKUP";
          }
          if (param_1 < -0x7ff8f43c) {
            if (param_1 == -0x7ff8f43d) {
              return "ERROR_SUCCESS_RESTART_REQUIRED";
            }
            if (param_1 < -0x7ff8f443) {
              if (param_1 == -0x7ff8f444) {
                return "ERROR_SPL_NO_ADDJOB";
              }
              if (param_1 == -0x7ff8f69f) {
                return "ERROR_OPEN_FILES";
              }
              if (param_1 == -0x7ff8f69e) {
                return "ERROR_ACTIVE_CONNECTIONS";
              }
              if (param_1 == -0x7ff8f69c) {
                return "ERROR_DEVICE_IN_USE";
              }
              if (param_1 == -0x7ff8f448) {
                return "ERROR_UNKNOWN_PRINT_MONITOR";
              }
              if (param_1 == -0x7ff8f447) {
                return "ERROR_PRINTER_DRIVER_IN_USE";
              }
              if (param_1 == -0x7ff8f446) {
                return "ERROR_SPOOL_FILE_NOT_FOUND";
              }
              pcVar1 = "ERROR_SPL_NO_STARTDOC";
              bVar2 = param_1 == -0x7ff8f445;
            }
            else {
              if (param_1 == -0x7ff8f443) {
                return "ERROR_PRINT_PROCESSOR_ALREADY_INSTALLED";
              }
              if (param_1 == -0x7ff8f442) {
                return "ERROR_PRINT_MONITOR_ALREADY_INSTALLED";
              }
              if (param_1 == -0x7ff8f441) {
                return "ERROR_INVALID_PRINT_MONITOR";
              }
              if (param_1 == -0x7ff8f440) {
                return "ERROR_PRINT_MONITOR_IN_USE";
              }
              if (param_1 == -0x7ff8f43f) {
                return "ERROR_PRINTER_HAS_JOBS_QUEUED";
              }
              pcVar1 = "ERROR_SUCCESS_REBOOT_REQUIRED";
              bVar2 = param_1 == -0x7ff8f43e;
            }
          }
          else {
            if (param_1 < -0x7ff8f091) {
              if (param_1 == -0x7ff8f092) {
                return "ERROR_IO_REISSUE_AS_CACHED";
              }
              switch(param_1) {
              case -0x7ff8f43c:
                return "ERROR_PRINTER_NOT_FOUND";
              case -0x7ff8f43b:
                return "ERROR_PRINTER_DRIVER_WARNED";
              case -0x7ff8f43a:
                return "ERROR_PRINTER_DRIVER_BLOCKED";
              case -0x7ff8f439:
                return "ERROR_PRINTER_DRIVER_PACKAGE_IN_USE";
              case -0x7ff8f438:
                return "ERROR_CORE_DRIVER_PACKAGE_NOT_FOUND";
              case -0x7ff8f437:
                return "ERROR_FAIL_REBOOT_REQUIRED";
              case -0x7ff8f436:
                return "ERROR_FAIL_REBOOT_INITIATED";
              case -0x7ff8f435:
                return "ERROR_PRINTER_DRIVER_DOWNLOAD_NEEDED";
              case -0x7ff8f434:
                return "ERROR_PRINT_JOB_RESTART_REQUIRED";
              }
              goto switchD_00428cb1_caseD_80070005;
            }
            if (param_1 == -0x7ff8f060) {
              return "ERROR_WINS_INTERNAL";
            }
            if (param_1 == -0x7ff8f05f) {
              return "ERROR_CAN_NOT_DEL_LOCAL_WINS";
            }
            if (param_1 == -0x7ff8f05e) {
              return "ERROR_STATIC_INIT";
            }
            pcVar1 = "ERROR_INC_BACKUP";
            bVar2 = param_1 == -0x7ff8f05d;
          }
        }
        else if (param_1 < -0x7ff8ef8c) {
          if (param_1 == -0x7ff8ef8d) {
            return "ERROR_WMI_INVALID_REGINFO";
          }
          if (param_1 < -0x7ff8ef93) {
            if (param_1 == -0x7ff8ef94) {
              return "ERROR_WMI_DP_NOT_FOUND";
            }
            if (param_1 == -0x7ff8f05b) {
              return "ERROR_REC_NON_EXISTENT";
            }
            if (param_1 == -0x7ff8f05a) {
              return "ERROR_RPL_NOT_ALLOWED";
            }
            if (param_1 == -0x7ff8effc) {
              return "ERROR_DHCP_ADDRESS_CONFLICT";
            }
            if (param_1 == -0x7ff8ef98) {
              return "ERROR_WMI_GUID_NOT_FOUND";
            }
            if (param_1 == -0x7ff8ef97) {
              return "ERROR_WMI_INSTANCE_NOT_FOUND";
            }
            if (param_1 == -0x7ff8ef96) {
              return "ERROR_WMI_ITEMID_NOT_FOUND";
            }
            pcVar1 = "ERROR_WMI_TRY_AGAIN";
            bVar2 = param_1 == -0x7ff8ef95;
          }
          else {
            if (param_1 == -0x7ff8ef93) {
              return "ERROR_WMI_UNRESOLVED_INSTANCE_REF";
            }
            if (param_1 == -0x7ff8ef92) {
              return "ERROR_WMI_ALREADY_ENABLED";
            }
            if (param_1 == -0x7ff8ef91) {
              return "ERROR_WMI_GUID_DISCONNECTED";
            }
            if (param_1 == -0x7ff8ef90) {
              return "ERROR_WMI_SERVER_UNAVAILABLE";
            }
            if (param_1 == -0x7ff8ef8f) {
              return "ERROR_WMI_DP_FAILED";
            }
            pcVar1 = "ERROR_WMI_INVALID_MOF";
            bVar2 = param_1 == -0x7ff8ef8e;
          }
        }
        else if (param_1 < -0x7ff8ef2f) {
          if (param_1 == -0x7ff8ef30) {
            return "ERROR_MEDIA_OFFLINE";
          }
          if (param_1 == -0x7ff8ef8c) {
            return "ERROR_WMI_ALREADY_DISABLED";
          }
          if (param_1 == -0x7ff8ef8b) {
            return "ERROR_WMI_READ_ONLY";
          }
          if (param_1 == -0x7ff8ef8a) {
            return "ERROR_WMI_SET_FAILURE";
          }
          if (param_1 == -0x7ff8ef34) {
            return "ERROR_INVALID_MEDIA";
          }
          if (param_1 == -0x7ff8ef33) {
            return "ERROR_INVALID_LIBRARY";
          }
          if (param_1 == -0x7ff8ef32) {
            return "ERROR_INVALID_MEDIA_POOL";
          }
          pcVar1 = "ERROR_DRIVE_MEDIA_MISMATCH";
          bVar2 = param_1 == -0x7ff8ef31;
        }
        else {
          if (param_1 == -0x7ff8ef2f) {
            return "ERROR_LIBRARY_OFFLINE";
          }
          if (param_1 == -0x7ff8ef2e) {
            return "ERROR_EMPTY";
          }
          if (param_1 == -0x7ff8ef2d) {
            return "ERROR_NOT_EMPTY";
          }
          if (param_1 == -0x7ff8ef2c) {
            return "ERROR_MEDIA_UNAVAILABLE";
          }
          if (param_1 == -0x7ff8ef2b) {
            return "ERROR_RESOURCE_DISABLED";
          }
          pcVar1 = "ERROR_INVALID_CLEANER";
          bVar2 = param_1 == -0x7ff8ef2a;
        }
LAB_0042c5f5:
        if (!bVar2) {
          pcVar1 = "Unknown Error";
        }
        return pcVar1;
      }
      if (param_1 < -0x7ff8ee6b) {
        if (param_1 == -0x7ff8ee6c) {
          return "ERROR_VOLUME_NOT_SIS_ENABLED";
        }
        switch(param_1) {
        case -0x7ff8ef28:
          return "ERROR_OBJECT_NOT_FOUND";
        case -0x7ff8ef27:
          return "ERROR_DATABASE_FAILURE";
        case -0x7ff8ef26:
          return "ERROR_DATABASE_FULL";
        case -0x7ff8ef25:
          return "ERROR_MEDIA_INCOMPATIBLE";
        case -0x7ff8ef24:
          return "ERROR_RESOURCE_NOT_PRESENT";
        case -0x7ff8ef23:
          return "ERROR_INVALID_OPERATION";
        case -0x7ff8ef22:
          return "ERROR_MEDIA_NOT_AVAILABLE";
        case -0x7ff8ef21:
          return "ERROR_DEVICE_NOT_AVAILABLE";
        case -0x7ff8ef20:
          return "ERROR_REQUEST_REFUSED";
        case -0x7ff8ef1f:
          return "ERROR_INVALID_DRIVE_OBJECT";
        case -0x7ff8ef1e:
          return "ERROR_LIBRARY_FULL";
        case -0x7ff8ef1d:
          return "ERROR_MEDIUM_NOT_ACCESSIBLE";
        case -0x7ff8ef1c:
          return "ERROR_UNABLE_TO_LOAD_MEDIUM";
        case -0x7ff8ef1b:
          return "ERROR_UNABLE_TO_INVENTORY_DRIVE";
        case -0x7ff8ef1a:
          return "ERROR_UNABLE_TO_INVENTORY_SLOT";
        case -0x7ff8ef19:
          return "ERROR_UNABLE_TO_INVENTORY_TRANSPORT";
        case -0x7ff8ef18:
          return "ERROR_TRANSPORT_FULL";
        case -0x7ff8ef17:
          return "ERROR_CONTROLLING_IEPORT";
        case -0x7ff8ef16:
          return "ERROR_UNABLE_TO_EJECT_MOUNTED_MEDIA";
        case -0x7ff8ef15:
          return "ERROR_CLEANER_SLOT_SET";
        case -0x7ff8ef14:
          return "ERROR_CLEANER_SLOT_NOT_SET";
        case -0x7ff8ef13:
          return "ERROR_CLEANER_CARTRIDGE_SPENT";
        case -0x7ff8ef12:
          return "ERROR_UNEXPECTED_OMID";
        case -0x7ff8ef11:
          return "ERROR_CANT_DELETE_LAST_ITEM";
        case -0x7ff8ef10:
          return "ERROR_MESSAGE_EXCEEDS_MAX_SIZE";
        case -0x7ff8ef0f:
          return "ERROR_VOLUME_CONTAINS_SYS_FILES";
        case -0x7ff8ef0e:
          return "ERROR_INDIGENOUS_TYPE";
        case -0x7ff8ef0d:
          return "ERROR_NO_SUPPORTING_DRIVES";
        case -0x7ff8ef0c:
          return "ERROR_CLEANER_CARTRIDGE_INSTALLED";
        case -0x7ff8ef0b:
          return "ERROR_IEPORT_FULL";
        case -0x7ff8ef02:
          return "ERROR_FILE_OFFLINE";
        case -0x7ff8ef01:
          return "ERROR_REMOTE_STORAGE_NOT_ACTIVE";
        case -0x7ff8ef00:
          return "ERROR_REMOTE_STORAGE_MEDIA_ERROR";
        case -0x7ff8eeda:
          return "ERROR_NOT_A_REPARSE_POINT";
        case -0x7ff8eed9:
          return "ERROR_REPARSE_ATTRIBUTE_CONFLICT";
        case -0x7ff8eed8:
          return "ERROR_INVALID_REPARSE_DATA";
        case -0x7ff8eed7:
          return "ERROR_REPARSE_TAG_INVALID";
        case -0x7ff8eed6:
          return "ERROR_REPARSE_TAG_MISMATCH";
        }
      }
      else {
        if (param_1 < -0x7ff8ec73) {
          if (param_1 == -0x7ff8ec74) {
            return "ERROR_RESOURCE_NOT_ONLINE";
          }
          if (param_1 < -0x7ff8ee34) {
            if (param_1 == -0x7ff8ee35) {
              return "ERROR_INVALID_FILE_VERSION_FLAG";
            }
            if (param_1 == -0x7ff8ee3a) {
              return "ERROR_FILE_VERSION_LIMIT_EXCEEDED";
            }
            if (param_1 == -0x7ff8ee39) {
              return "ERROR_SYSTEM_INTEGRITY_POLICY_VIOLATION";
            }
            if (param_1 == -0x7ff8ee38) {
              return "ERROR_FILE_VERSION_NAME_TOO_LONG";
            }
            if (param_1 == -0x7ff8ee37) {
              return "ERROR_FILE_VERSION_NOT_ALLOWED_FOR_VERSION";
            }
            pcVar1 = "ERROR_INVALID_FILE_VERSION_TAG";
            bVar2 = param_1 == -0x7ff8ee36;
          }
          else {
            if (param_1 == -0x7ff8ee34) {
              return "ERROR_FILE_VERSION_DIRECTORY_NOT_FOUND";
            }
            if (param_1 == -0x7ff8ec77) {
              return "ERROR_DEPENDENT_RESOURCE_EXISTS";
            }
            if (param_1 == -0x7ff8ec76) {
              return "ERROR_DEPENDENCY_NOT_FOUND";
            }
            pcVar1 = "ERROR_DEPENDENCY_ALREADY_EXISTS";
            bVar2 = param_1 == -0x7ff8ec75;
          }
          goto LAB_0042c5f5;
        }
        switch(param_1) {
        case -0x7ff8ec73:
          return "ERROR_HOST_NODE_NOT_AVAILABLE";
        case -0x7ff8ec72:
          return "ERROR_RESOURCE_NOT_AVAILABLE";
        case -0x7ff8ec71:
          return "ERROR_RESOURCE_NOT_FOUND";
        case -0x7ff8ec70:
          return "ERROR_SHUTDOWN_CLUSTER";
        case -0x7ff8ec6f:
          return "ERROR_CANT_EVICT_ACTIVE_NODE";
        case -0x7ff8ec6e:
          return "ERROR_OBJECT_ALREADY_EXISTS";
        case -0x7ff8ec6d:
          return "ERROR_OBJECT_IN_LIST";
        case -0x7ff8ec6c:
          return "ERROR_GROUP_NOT_AVAILABLE";
        case -0x7ff8ec6b:
          return "ERROR_GROUP_NOT_FOUND";
        }
      }
    }
  }
  else if (param_1 < -0x7ff8e8fd) {
    if (param_1 == -0x7ff8e8fe) {
      return "ERROR_CLUSTER_MEMBERSHIP_INVALID_STATE";
    }
    switch(param_1) {
    case -0x7ff8ec69:
      return "ERROR_HOST_NODE_NOT_RESOURCE_OWNER";
    case -0x7ff8ec68:
      return "ERROR_HOST_NODE_NOT_GROUP_OWNER";
    case -0x7ff8ec67:
      return "ERROR_RESMON_CREATE_FAILED";
    case -0x7ff8ec66:
      return "ERROR_RESMON_ONLINE_FAILED";
    case -0x7ff8ec65:
      return "ERROR_RESOURCE_ONLINE";
    case -0x7ff8ec64:
      return "ERROR_QUORUM_RESOURCE";
    case -0x7ff8ec63:
      return "ERROR_NOT_QUORUM_CAPABLE";
    case -0x7ff8ec62:
      return "ERROR_CLUSTER_SHUTTING_DOWN";
    case -0x7ff8ec61:
      return "ERROR_INVALID_STATE";
    case -0x7ff8ec60:
      return "ERROR_RESOURCE_PROPERTIES_STORED";
    case -0x7ff8ec5f:
      return "ERROR_NOT_QUORUM_CLASS";
    case -0x7ff8ec5e:
      return "ERROR_CORE_RESOURCE";
    case -0x7ff8ec5d:
      return "ERROR_QUORUM_RESOURCE_ONLINE_FAILED";
    case -0x7ff8ec5c:
      return "ERROR_QUORUMLOG_OPEN_FAILED";
    case -0x7ff8ec5b:
      return "ERROR_CLUSTERLOG_CORRUPT";
    case -0x7ff8ec5a:
      return "ERROR_CLUSTERLOG_RECORD_EXCEEDS_MAXSIZE";
    case -0x7ff8ec59:
      return "ERROR_CLUSTERLOG_EXCEEDS_MAXSIZE";
    case -0x7ff8ec58:
      return "ERROR_CLUSTERLOG_CHKPOINT_NOT_FOUND";
    case -0x7ff8ec57:
      return "ERROR_CLUSTERLOG_NOT_ENOUGH_SPACE";
    case -0x7ff8ec56:
      return "ERROR_QUORUM_OWNER_ALIVE";
    case -0x7ff8ec55:
      return "ERROR_NETWORK_NOT_AVAILABLE";
    case -0x7ff8ec54:
      return "ERROR_NODE_NOT_AVAILABLE";
    case -0x7ff8ec53:
      return "ERROR_ALL_NODES_NOT_AVAILABLE";
    case -0x7ff8ec52:
      return "ERROR_RESOURCE_FAILED";
    case -0x7ff8ec51:
      return "ERROR_CLUSTER_INVALID_NODE";
    case -0x7ff8ec50:
      return "ERROR_CLUSTER_NODE_EXISTS";
    case -0x7ff8ec4f:
      return "ERROR_CLUSTER_JOIN_IN_PROGRESS";
    case -0x7ff8ec4e:
      return "ERROR_CLUSTER_NODE_NOT_FOUND";
    case -0x7ff8ec4d:
      return "ERROR_CLUSTER_LOCAL_NODE_NOT_FOUND";
    case -0x7ff8ec4c:
      return "ERROR_CLUSTER_NETWORK_EXISTS";
    case -0x7ff8ec4b:
      return "ERROR_CLUSTER_NETWORK_NOT_FOUND";
    case -0x7ff8ec4a:
      return "ERROR_CLUSTER_NETINTERFACE_EXISTS";
    case -0x7ff8ec49:
      return "ERROR_CLUSTER_NETINTERFACE_NOT_FOUND";
    case -0x7ff8ec48:
      return "ERROR_CLUSTER_INVALID_REQUEST";
    case -0x7ff8ec47:
      return "ERROR_CLUSTER_INVALID_NETWORK_PROVIDER";
    case -0x7ff8ec46:
      return "ERROR_CLUSTER_NODE_DOWN";
    case -0x7ff8ec45:
      return "ERROR_CLUSTER_NODE_UNREACHABLE";
    case -0x7ff8ec44:
      return "ERROR_CLUSTER_NODE_NOT_MEMBER";
    case -0x7ff8ec43:
      return "ERROR_CLUSTER_JOIN_NOT_IN_PROGRESS";
    case -0x7ff8ec42:
      return "ERROR_CLUSTER_INVALID_NETWORK";
    case -0x7ff8ec40:
      return "ERROR_CLUSTER_NODE_UP";
    case -0x7ff8ec3f:
      return "ERROR_CLUSTER_IPADDR_IN_USE";
    case -0x7ff8ec3e:
      return "ERROR_CLUSTER_NODE_NOT_PAUSED";
    case -0x7ff8ec3d:
      return "ERROR_CLUSTER_NO_SECURITY_CONTEXT";
    case -0x7ff8ec3c:
      return "ERROR_CLUSTER_NETWORK_NOT_INTERNAL";
    case -0x7ff8ec3b:
      return "ERROR_CLUSTER_NODE_ALREADY_UP";
    case -0x7ff8ec3a:
      return "ERROR_CLUSTER_NODE_ALREADY_DOWN";
    case -0x7ff8ec39:
      return "ERROR_CLUSTER_NETWORK_ALREADY_ONLINE";
    case -0x7ff8ec38:
      return "ERROR_CLUSTER_NETWORK_ALREADY_OFFLINE";
    case -0x7ff8ec37:
      return "ERROR_CLUSTER_NODE_ALREADY_MEMBER";
    case -0x7ff8ec36:
      return "ERROR_CLUSTER_LAST_INTERNAL_NETWORK";
    case -0x7ff8ec35:
      return "ERROR_CLUSTER_NETWORK_HAS_DEPENDENTS";
    case -0x7ff8ec34:
      return "ERROR_INVALID_OPERATION_ON_QUORUM";
    case -0x7ff8ec33:
      return "ERROR_DEPENDENCY_NOT_ALLOWED";
    case -0x7ff8ec32:
      return "ERROR_CLUSTER_NODE_PAUSED";
    case -0x7ff8ec31:
      return "ERROR_NODE_CANT_HOST_RESOURCE";
    case -0x7ff8ec30:
      return "ERROR_CLUSTER_NODE_NOT_READY";
    case -0x7ff8ec2f:
      return "ERROR_CLUSTER_NODE_SHUTTING_DOWN";
    case -0x7ff8ec2e:
      return "ERROR_CLUSTER_JOIN_ABORTED";
    case -0x7ff8ec2d:
      return "ERROR_CLUSTER_INCOMPATIBLE_VERSIONS";
    case -0x7ff8ec2c:
      return "ERROR_CLUSTER_MAXNUM_OF_RESOURCES_EXCEEDED";
    case -0x7ff8ec2b:
      return "ERROR_CLUSTER_SYSTEM_CONFIG_CHANGED";
    case -0x7ff8ec2a:
      return "ERROR_CLUSTER_RESOURCE_TYPE_NOT_FOUND";
    case -0x7ff8ec29:
      return "ERROR_CLUSTER_RESTYPE_NOT_SUPPORTED";
    case -0x7ff8ec28:
      return "ERROR_CLUSTER_RESNAME_NOT_FOUND";
    case -0x7ff8ec27:
      return "ERROR_CLUSTER_NO_RPC_PACKAGES_REGISTERED";
    case -0x7ff8ec26:
      return "ERROR_CLUSTER_OWNER_NOT_IN_PREFLIST";
    case -0x7ff8ec25:
      return "ERROR_CLUSTER_DATABASE_SEQMISMATCH";
    case -0x7ff8ec24:
      return "ERROR_RESMON_INVALID_STATE";
    case -0x7ff8ec23:
      return "ERROR_CLUSTER_GUM_NOT_LOCKER";
    case -0x7ff8ec22:
      return "ERROR_QUORUM_DISK_NOT_FOUND";
    case -0x7ff8ec21:
      return "ERROR_DATABASE_BACKUP_CORRUPT";
    case -0x7ff8ec20:
      return "ERROR_CLUSTER_NODE_ALREADY_HAS_DFS_ROOT";
    case -0x7ff8ec1f:
      return "ERROR_RESOURCE_PROPERTY_UNCHANGEABLE";
    }
  }
  else if (param_1 < -0x7ff8e819) {
    if (param_1 == -0x7ff8e81a) {
      return "ERROR_NO_BROWSER_SERVERS_FOUND";
    }
    switch(param_1) {
    case -0x7ff8e8fd:
      return "ERROR_CLUSTER_QUORUMLOG_NOT_FOUND";
    case -0x7ff8e8fc:
      return "ERROR_CLUSTER_MEMBERSHIP_HALT";
    case -0x7ff8e8fb:
      return "ERROR_CLUSTER_INSTANCE_ID_MISMATCH";
    case -0x7ff8e8fa:
      return "ERROR_CLUSTER_NETWORK_NOT_FOUND_FOR_IP";
    case -0x7ff8e8f9:
      return "ERROR_CLUSTER_PROPERTY_DATA_TYPE_MISMATCH";
    case -0x7ff8e8f8:
      return "ERROR_CLUSTER_EVICT_WITHOUT_CLEANUP";
    case -0x7ff8e8f7:
      return "ERROR_CLUSTER_PARAMETER_MISMATCH";
    case -0x7ff8e8f6:
      return "ERROR_NODE_CANNOT_BE_CLUSTERED";
    case -0x7ff8e8f5:
      return "ERROR_CLUSTER_WRONG_OS_VERSION";
    case -0x7ff8e8f4:
      return "ERROR_CLUSTER_CANT_CREATE_DUP_CLUSTER_NAME";
    case -0x7ff8e8f3:
      return "ERROR_CLUSCFG_ALREADY_COMMITTED";
    case -0x7ff8e8f2:
      return "ERROR_CLUSCFG_ROLLBACK_FAILED";
    case -0x7ff8e8f1:
      return "ERROR_CLUSCFG_SYSTEM_DISK_DRIVE_LETTER_CONFLICT";
    case -0x7ff8e8f0:
      return "ERROR_CLUSTER_OLD_VERSION";
    case -0x7ff8e8ef:
      return "ERROR_CLUSTER_MISMATCHED_COMPUTER_ACCT_NAME";
    case -0x7ff8e8ee:
      return "ERROR_CLUSTER_NO_NET_ADAPTERS";
    case -0x7ff8e8ed:
      return "ERROR_CLUSTER_POISONED";
    case -0x7ff8e8ec:
      return "ERROR_CLUSTER_GROUP_MOVING";
    case -0x7ff8e8eb:
      return "ERROR_CLUSTER_RESOURCE_TYPE_BUSY";
    case -0x7ff8e8ea:
      return "ERROR_RESOURCE_CALL_TIMED_OUT";
    case -0x7ff8e8e9:
      return "ERROR_INVALID_CLUSTER_IPV6_ADDRESS";
    case -0x7ff8e8e8:
      return "ERROR_CLUSTER_INTERNAL_INVALID_FUNCTION";
    case -0x7ff8e8e7:
      return "ERROR_CLUSTER_PARAMETER_OUT_OF_BOUNDS";
    case -0x7ff8e8e6:
      return "ERROR_CLUSTER_PARTIAL_SEND";
    case -0x7ff8e8e5:
      return "ERROR_CLUSTER_REGISTRY_INVALID_FUNCTION";
    case -0x7ff8e8e4:
      return "ERROR_CLUSTER_INVALID_STRING_TERMINATION";
    case -0x7ff8e8e3:
      return "ERROR_CLUSTER_INVALID_STRING_FORMAT";
    case -0x7ff8e8e2:
      return "ERROR_CLUSTER_DATABASE_TRANSACTION_IN_PROGRESS";
    case -0x7ff8e8e1:
      return "ERROR_CLUSTER_DATABASE_TRANSACTION_NOT_IN_PROGRESS";
    case -0x7ff8e8e0:
      return "ERROR_CLUSTER_NULL_DATA";
    case -0x7ff8e8df:
      return "ERROR_CLUSTER_PARTIAL_READ";
    case -0x7ff8e8de:
      return "ERROR_CLUSTER_PARTIAL_WRITE";
    case -0x7ff8e8dd:
      return "ERROR_CLUSTER_CANT_DESERIALIZE_DATA";
    case -0x7ff8e8dc:
      return "ERROR_DEPENDENT_RESOURCE_PROPERTY_CONFLICT";
    case -0x7ff8e8db:
      return "ERROR_CLUSTER_NO_QUORUM";
    case -0x7ff8e8da:
      return "ERROR_CLUSTER_INVALID_IPV6_NETWORK";
    case -0x7ff8e8d9:
      return "ERROR_CLUSTER_INVALID_IPV6_TUNNEL_NETWORK";
    case -0x7ff8e8d8:
      return "ERROR_QUORUM_NOT_ALLOWED_IN_THIS_GROUP";
    case -0x7ff8e8d7:
      return "ERROR_DEPENDENCY_TREE_TOO_COMPLEX";
    case -0x7ff8e8d6:
      return "ERROR_EXCEPTION_IN_RESOURCE_CALL";
    case -0x7ff8e8d5:
      return "ERROR_CLUSTER_RHS_FAILED_INITIALIZATION";
    case -0x7ff8e8d4:
      return "ERROR_CLUSTER_NOT_INSTALLED";
    case -0x7ff8e8d3:
      return "ERROR_CLUSTER_RESOURCES_MUST_BE_ONLINE_ON_THE_SAME_NODE";
    case -0x7ff8e8d2:
      return "ERROR_CLUSTER_MAX_NODES_IN_CLUSTER";
    case -0x7ff8e8d1:
      return "ERROR_CLUSTER_TOO_MANY_NODES";
    case -0x7ff8e8d0:
      return "ERROR_CLUSTER_OBJECT_ALREADY_USED";
    case -0x7ff8e8cf:
      return "ERROR_NONCORE_GROUPS_FOUND";
    case -0x7ff8e8ce:
      return "ERROR_FILE_SHARE_RESOURCE_CONFLICT";
    case -0x7ff8e8cd:
      return "ERROR_CLUSTER_EVICT_INVALID_REQUEST";
    case -0x7ff8e8cc:
      return "ERROR_CLUSTER_SINGLETON_RESOURCE";
    case -0x7ff8e8cb:
      return "ERROR_CLUSTER_GROUP_SINGLETON_RESOURCE";
    case -0x7ff8e8ca:
      return "ERROR_CLUSTER_RESOURCE_PROVIDER_FAILED";
    case -0x7ff8e8c9:
      return "ERROR_CLUSTER_RESOURCE_CONFIGURATION_ERROR";
    case -0x7ff8e890:
      return "ERROR_ENCRYPTION_FAILED";
    case -0x7ff8e88f:
      return "ERROR_DECRYPTION_FAILED";
    case -0x7ff8e88e:
      return "ERROR_FILE_ENCRYPTED";
    case -0x7ff8e88d:
      return "ERROR_NO_RECOVERY_POLICY";
    case -0x7ff8e88c:
      return "ERROR_NO_EFS";
    case -0x7ff8e88b:
      return "ERROR_WRONG_EFS";
    case -0x7ff8e88a:
      return "ERROR_NO_USER_KEYS";
    case -0x7ff8e889:
      return "ERROR_FILE_NOT_ENCRYPTED";
    case -0x7ff8e888:
      return "ERROR_NOT_EXPORT_FORMAT";
    case -0x7ff8e887:
      return "ERROR_FILE_READ_ONLY";
    case -0x7ff8e886:
      return "ERROR_DIR_EFS_DISALLOWED";
    case -0x7ff8e885:
      return "ERROR_EFS_SERVER_NOT_TRUSTED";
    case -0x7ff8e884:
      return "ERROR_BAD_RECOVERY_POLICY";
    case -0x7ff8e883:
      return "ERROR_EFS_ALG_BLOB_TOO_BIG";
    case -0x7ff8e882:
      return "ERROR_VOLUME_NOT_SUPPORT_EFS";
    case -0x7ff8e881:
      return "ERROR_EFS_DISABLED";
    case -0x7ff8e880:
      return "ERROR_EFS_VERSION_NOT_SUPPORT";
    case -0x7ff8e87f:
      return "ERROR_CS_ENCRYPTION_INVALID_SERVER_RESPONSE";
    case -0x7ff8e87e:
      return "ERROR_CS_ENCRYPTION_UNSUPPORTED_SERVER";
    case -0x7ff8e87d:
      return "ERROR_CS_ENCRYPTION_EXISTING_ENCRYPTED_FILE";
    case -0x7ff8e87c:
      return "ERROR_CS_ENCRYPTION_NEW_ENCRYPTED_FILE";
    case -0x7ff8e87b:
      return "ERROR_CS_ENCRYPTION_FILE_NOT_CSE";
    }
  }
  else if (param_1 < -0x7ff8e4a6) {
    if (param_1 == -0x7ff8e4a7) {
      return "ERROR_CTX_WINSTATION_NAME_INVALID";
    }
    switch(param_1) {
    case -0x7ff8e638:
      return "ERROR_LOG_SECTOR_INVALID";
    case -0x7ff8e637:
      return "ERROR_LOG_SECTOR_PARITY_INVALID";
    case -0x7ff8e636:
      return "ERROR_LOG_SECTOR_REMAPPED";
    case -0x7ff8e635:
      return "ERROR_LOG_BLOCK_INCOMPLETE";
    case -0x7ff8e634:
      return "ERROR_LOG_INVALID_RANGE";
    case -0x7ff8e633:
      return "ERROR_LOG_BLOCKS_EXHAUSTED";
    case -0x7ff8e632:
      return "ERROR_LOG_READ_CONTEXT_INVALID";
    case -0x7ff8e631:
      return "ERROR_LOG_RESTART_INVALID";
    case -0x7ff8e630:
      return "ERROR_LOG_BLOCK_VERSION";
    case -0x7ff8e62f:
      return "ERROR_LOG_BLOCK_INVALID";
    case -0x7ff8e62e:
      return "ERROR_LOG_READ_MODE_INVALID";
    case -0x7ff8e62d:
      return "ERROR_LOG_NO_RESTART";
    case -0x7ff8e62c:
      return "ERROR_LOG_METADATA_CORRUPT";
    case -0x7ff8e62b:
      return "ERROR_LOG_METADATA_INVALID";
    case -0x7ff8e62a:
      return "ERROR_LOG_METADATA_INCONSISTENT";
    case -0x7ff8e629:
      return "ERROR_LOG_RESERVATION_INVALID";
    case -0x7ff8e628:
      return "ERROR_LOG_CANT_DELETE";
    case -0x7ff8e627:
      return "ERROR_LOG_CONTAINER_LIMIT_EXCEEDED";
    case -0x7ff8e626:
      return "ERROR_LOG_START_OF_LOG";
    case -0x7ff8e625:
      return "ERROR_LOG_POLICY_ALREADY_INSTALLED";
    case -0x7ff8e624:
      return "ERROR_LOG_POLICY_NOT_INSTALLED";
    case -0x7ff8e623:
      return "ERROR_LOG_POLICY_INVALID";
    case -0x7ff8e622:
      return "ERROR_LOG_POLICY_CONFLICT";
    case -0x7ff8e621:
      return "ERROR_LOG_PINNED_ARCHIVE_TAIL";
    case -0x7ff8e620:
      return "ERROR_LOG_RECORD_NONEXISTENT";
    case -0x7ff8e61f:
      return "ERROR_LOG_RECORDS_RESERVED_INVALID";
    case -0x7ff8e61e:
      return "ERROR_LOG_SPACE_RESERVED_INVALID";
    case -0x7ff8e61d:
      return "ERROR_LOG_TAIL_INVALID";
    case -0x7ff8e61c:
      return "ERROR_LOG_FULL";
    case -0x7ff8e61b:
      return "ERROR_COULD_NOT_RESIZE_LOG";
    case -0x7ff8e61a:
      return "ERROR_LOG_MULTIPLEXED";
    case -0x7ff8e619:
      return "ERROR_LOG_DEDICATED";
    case -0x7ff8e618:
      return "ERROR_LOG_ARCHIVE_NOT_IN_PROGRESS";
    case -0x7ff8e617:
      return "ERROR_LOG_ARCHIVE_IN_PROGRESS";
    case -0x7ff8e616:
      return "ERROR_LOG_EPHEMERAL";
    case -0x7ff8e615:
      return "ERROR_LOG_NOT_ENOUGH_CONTAINERS";
    case -0x7ff8e614:
      return "ERROR_LOG_CLIENT_ALREADY_REGISTERED";
    case -0x7ff8e613:
      return "ERROR_LOG_CLIENT_NOT_REGISTERED";
    case -0x7ff8e612:
      return "ERROR_LOG_FULL_HANDLER_IN_PROGRESS";
    case -0x7ff8e611:
      return "ERROR_LOG_CONTAINER_READ_FAILED";
    case -0x7ff8e610:
      return "ERROR_LOG_CONTAINER_WRITE_FAILED";
    case -0x7ff8e60f:
      return "ERROR_LOG_CONTAINER_OPEN_FAILED";
    case -0x7ff8e60e:
      return "ERROR_LOG_CONTAINER_STATE_INVALID";
    case -0x7ff8e60d:
      return "ERROR_LOG_STATE_INVALID";
    case -0x7ff8e60c:
      return "ERROR_LOG_PINNED";
    case -0x7ff8e60b:
      return "ERROR_LOG_METADATA_FLUSH_FAILED";
    case -0x7ff8e60a:
      return "ERROR_LOG_INCONSISTENT_SECURITY";
    case -0x7ff8e609:
      return "ERROR_LOG_APPENDED_FLUSH_FAILED";
    case -0x7ff8e608:
      return "ERROR_LOG_PINNED_RESERVATION";
    case -0x7ff8e5d4:
      return "ERROR_INVALID_TRANSACTION";
    case -0x7ff8e5d3:
      return "ERROR_TRANSACTION_NOT_ACTIVE";
    case -0x7ff8e5d2:
      return "ERROR_TRANSACTION_REQUEST_NOT_VALID";
    case -0x7ff8e5d1:
      return "ERROR_TRANSACTION_NOT_REQUESTED";
    case -0x7ff8e5d0:
      return "ERROR_TRANSACTION_ALREADY_ABORTED";
    case -0x7ff8e5cf:
      return "ERROR_TRANSACTION_ALREADY_COMMITTED";
    case -0x7ff8e5ce:
      return "ERROR_TM_INITIALIZATION_FAILED";
    case -0x7ff8e5cd:
      return "ERROR_RESOURCEMANAGER_READ_ONLY";
    case -0x7ff8e5cc:
      return "ERROR_TRANSACTION_NOT_JOINED";
    case -0x7ff8e5cb:
      return "ERROR_TRANSACTION_SUPERIOR_EXISTS";
    case -0x7ff8e5ca:
      return "ERROR_CRM_PROTOCOL_ALREADY_EXISTS";
    case -0x7ff8e5c9:
      return "ERROR_TRANSACTION_PROPAGATION_FAILED";
    case -0x7ff8e5c8:
      return "ERROR_CRM_PROTOCOL_NOT_FOUND";
    case -0x7ff8e5c7:
      return "ERROR_TRANSACTION_INVALID_MARSHALL_BUFFER";
    case -0x7ff8e5c6:
      return "ERROR_CURRENT_TRANSACTION_NOT_VALID";
    case -0x7ff8e5c5:
      return "ERROR_TRANSACTION_NOT_FOUND";
    case -0x7ff8e5c4:
      return "ERROR_RESOURCEMANAGER_NOT_FOUND";
    case -0x7ff8e5c3:
      return "ERROR_ENLISTMENT_NOT_FOUND";
    case -0x7ff8e5c2:
      return "ERROR_TRANSACTIONMANAGER_NOT_FOUND";
    case -0x7ff8e5c1:
      return "ERROR_TRANSACTIONMANAGER_NOT_ONLINE";
    case -0x7ff8e5c0:
      return "ERROR_TRANSACTIONMANAGER_RECOVERY_NAME_COLLISION";
    case -0x7ff8e5bf:
      return "ERROR_TRANSACTION_NOT_ROOT";
    case -0x7ff8e5be:
      return "ERROR_TRANSACTION_OBJECT_EXPIRED";
    case -0x7ff8e5bd:
      return "ERROR_TRANSACTION_RESPONSE_NOT_ENLISTED";
    case -0x7ff8e5bc:
      return "ERROR_TRANSACTION_RECORD_TOO_LONG";
    case -0x7ff8e5bb:
      return "ERROR_IMPLICIT_TRANSACTION_NOT_SUPPORTED";
    case -0x7ff8e5ba:
      return "ERROR_TRANSACTION_INTEGRITY_VIOLATED";
    case -0x7ff8e5b9:
      return "ERROR_TRANSACTIONMANAGER_IDENTITY_MISMATCH";
    case -0x7ff8e5b8:
      return "ERROR_RM_CANNOT_BE_FROZEN_FOR_SNAPSHOT";
    case -0x7ff8e5b7:
      return "ERROR_TRANSACTION_MUST_WRITETHROUGH";
    case -0x7ff8e5b6:
      return "ERROR_TRANSACTION_NO_SUPERIOR";
    case -0x7ff8e570:
      return "ERROR_TRANSACTIONAL_CONFLICT";
    case -0x7ff8e56f:
      return "ERROR_RM_NOT_ACTIVE";
    case -0x7ff8e56e:
      return "ERROR_RM_METADATA_CORRUPT";
    case -0x7ff8e56d:
      return "ERROR_DIRECTORY_NOT_RM";
    case -0x7ff8e56b:
      return "ERROR_TRANSACTIONS_UNSUPPORTED_REMOTE";
    case -0x7ff8e56a:
      return "ERROR_LOG_RESIZE_INVALID_SIZE";
    case -0x7ff8e569:
      return "ERROR_OBJECT_NO_LONGER_EXISTS";
    case -0x7ff8e568:
      return "ERROR_STREAM_MINIVERSION_NOT_FOUND";
    case -0x7ff8e567:
      return "ERROR_STREAM_MINIVERSION_NOT_VALID";
    case -0x7ff8e566:
      return "ERROR_MINIVERSION_INACCESSIBLE_FROM_SPECIFIED_TRANSACTION";
    case -0x7ff8e565:
      return "ERROR_CANT_OPEN_MINIVERSION_WITH_MODIFY_INTENT";
    case -0x7ff8e564:
      return "ERROR_CANT_CREATE_MORE_STREAM_MINIVERSIONS";
    case -0x7ff8e562:
      return "ERROR_REMOTE_FILE_VERSION_MISMATCH";
    case -0x7ff8e561:
      return "ERROR_HANDLE_NO_LONGER_VALID";
    case -0x7ff8e560:
      return "ERROR_NO_TXF_METADATA";
    case -0x7ff8e55f:
      return "ERROR_LOG_CORRUPTION_DETECTED";
    case -0x7ff8e55e:
      return "ERROR_CANT_RECOVER_WITH_HANDLE_OPEN";
    case -0x7ff8e55d:
      return "ERROR_RM_DISCONNECTED";
    case -0x7ff8e55c:
      return "ERROR_ENLISTMENT_NOT_SUPERIOR";
    case -0x7ff8e55b:
      return "ERROR_RECOVERY_NOT_NEEDED";
    case -0x7ff8e55a:
      return "ERROR_RM_ALREADY_STARTED";
    case -0x7ff8e559:
      return "ERROR_FILE_IDENTITY_NOT_PERSISTENT";
    case -0x7ff8e558:
      return "ERROR_CANT_BREAK_TRANSACTIONAL_DEPENDENCY";
    case -0x7ff8e557:
      return "ERROR_CANT_CROSS_RM_BOUNDARY";
    case -0x7ff8e556:
      return "ERROR_TXF_DIR_NOT_EMPTY";
    case -0x7ff8e555:
      return "ERROR_INDOUBT_TRANSACTIONS_EXIST";
    case -0x7ff8e554:
      return "ERROR_TM_VOLATILE";
    case -0x7ff8e553:
      return "ERROR_ROLLBACK_TIMER_EXPIRED";
    case -0x7ff8e552:
      return "ERROR_TXF_ATTRIBUTE_CORRUPT";
    case -0x7ff8e551:
      return "ERROR_EFS_NOT_ALLOWED_IN_TRANSACTION";
    case -0x7ff8e550:
      return "ERROR_TRANSACTIONAL_OPEN_NOT_ALLOWED";
    case -0x7ff8e54f:
      return "ERROR_LOG_GROWTH_FAILED";
    case -0x7ff8e54e:
      return "ERROR_TRANSACTED_MAPPING_UNSUPPORTED_REMOTE";
    case -0x7ff8e54d:
      return "ERROR_TXF_METADATA_ALREADY_PRESENT";
    case -0x7ff8e54c:
      return "ERROR_TRANSACTION_SCOPE_CALLBACKS_NOT_SET";
    case -0x7ff8e54b:
      return "ERROR_TRANSACTION_REQUIRED_PROMOTION";
    case -0x7ff8e54a:
      return "ERROR_CANNOT_EXECUTE_FILE_IN_TRANSACTION";
    case -0x7ff8e549:
      return "ERROR_TRANSACTIONS_NOT_FROZEN";
    case -0x7ff8e548:
      return "ERROR_TRANSACTION_FREEZE_IN_PROGRESS";
    case -0x7ff8e547:
      return "ERROR_NOT_SNAPSHOT_VOLUME";
    case -0x7ff8e546:
      return "ERROR_NO_SAVEPOINT_WITH_OPEN_FILES";
    case -0x7ff8e545:
      return "ERROR_DATA_LOST_REPAIR";
    case -0x7ff8e544:
      return "ERROR_SPARSE_NOT_ALLOWED_IN_TRANSACTION";
    case -0x7ff8e543:
      return "ERROR_TM_IDENTITY_MISMATCH";
    case -0x7ff8e542:
      return "ERROR_FLOATED_SECTION";
    case -0x7ff8e541:
      return "ERROR_CANNOT_ACCEPT_TRANSACTED_WORK";
    case -0x7ff8e540:
      return "ERROR_CANNOT_ABORT_TRANSACTIONS";
    case -0x7ff8e53f:
      return "ERROR_BAD_CLUSTERS";
    case -0x7ff8e53e:
      return "ERROR_COMPRESSION_NOT_ALLOWED_IN_TRANSACTION";
    case -0x7ff8e53d:
      return "ERROR_VOLUME_DIRTY";
    case -0x7ff8e53c:
      return "ERROR_NO_LINK_TRACKING_IN_TRANSACTION";
    case -0x7ff8e53b:
      return "ERROR_OPERATION_NOT_SUPPORTED_IN_TRANSACTION";
    case -0x7ff8e53a:
      return "ERROR_EXPIRED_HANDLE";
    }
  }
  else if (param_1 < -0x7ff8dff7) {
    if (param_1 == -0x7ff8dff8) {
      return "ERROR_DS_NOT_INSTALLED";
    }
    switch(param_1) {
    case -0x7ff8e4a6:
      return "ERROR_CTX_INVALID_PD";
    case -0x7ff8e4a5:
      return "ERROR_CTX_PD_NOT_FOUND";
    case -0x7ff8e4a4:
      return "ERROR_CTX_WD_NOT_FOUND";
    case -0x7ff8e4a3:
      return "ERROR_CTX_CANNOT_MAKE_EVENTLOG_ENTRY";
    case -0x7ff8e4a2:
      return "ERROR_CTX_SERVICE_NAME_COLLISION";
    case -0x7ff8e4a1:
      return "ERROR_CTX_CLOSE_PENDING";
    case -0x7ff8e4a0:
      return "ERROR_CTX_NO_OUTBUF";
    case -0x7ff8e49f:
      return "ERROR_CTX_MODEM_INF_NOT_FOUND";
    case -0x7ff8e49e:
      return "ERROR_CTX_INVALID_MODEMNAME";
    case -0x7ff8e49d:
      return "ERROR_CTX_MODEM_RESPONSE_ERROR";
    case -0x7ff8e49c:
      return "ERROR_CTX_MODEM_RESPONSE_TIMEOUT";
    case -0x7ff8e49b:
      return "ERROR_CTX_MODEM_RESPONSE_NO_CARRIER";
    case -0x7ff8e49a:
      return "ERROR_CTX_MODEM_RESPONSE_NO_DIALTONE";
    case -0x7ff8e499:
      return "ERROR_CTX_MODEM_RESPONSE_BUSY";
    case -0x7ff8e498:
      return "ERROR_CTX_MODEM_RESPONSE_VOICE";
    case -0x7ff8e497:
      return "ERROR_CTX_TD_ERROR";
    case -0x7ff8e492:
      return "ERROR_CTX_WINSTATION_NOT_FOUND";
    case -0x7ff8e491:
      return "ERROR_CTX_WINSTATION_ALREADY_EXISTS";
    case -0x7ff8e490:
      return "ERROR_CTX_WINSTATION_BUSY";
    case -0x7ff8e48f:
      return "ERROR_CTX_BAD_VIDEO_MODE";
    case -0x7ff8e485:
      return "ERROR_CTX_GRAPHICS_INVALID";
    case -0x7ff8e483:
      return "ERROR_CTX_LOGON_DISABLED";
    case -0x7ff8e482:
      return "ERROR_CTX_NOT_CONSOLE";
    case -0x7ff8e480:
      return "ERROR_CTX_CLIENT_QUERY_TIMEOUT";
    case -0x7ff8e47f:
      return "ERROR_CTX_CONSOLE_DISCONNECT";
    case -0x7ff8e47e:
      return "ERROR_CTX_CONSOLE_CONNECT";
    case -0x7ff8e47c:
      return "ERROR_CTX_SHADOW_DENIED";
    case -0x7ff8e47b:
      return "ERROR_CTX_WINSTATION_ACCESS_DENIED";
    case -0x7ff8e477:
      return "ERROR_CTX_INVALID_WD";
    case -0x7ff8e476:
      return "ERROR_CTX_SHADOW_INVALID";
    case -0x7ff8e475:
      return "ERROR_CTX_SHADOW_DISABLED";
    case -0x7ff8e474:
      return "ERROR_CTX_CLIENT_LICENSE_IN_USE";
    case -0x7ff8e473:
      return "ERROR_CTX_CLIENT_LICENSE_NOT_SET";
    case -0x7ff8e472:
      return "ERROR_CTX_LICENSE_NOT_AVAILABLE";
    case -0x7ff8e471:
      return "ERROR_CTX_LICENSE_CLIENT_INVALID";
    case -0x7ff8e470:
      return "ERROR_CTX_LICENSE_EXPIRED";
    case -0x7ff8e46f:
      return "ERROR_CTX_SHADOW_NOT_RUNNING";
    case -0x7ff8e46e:
      return "ERROR_CTX_SHADOW_ENDED_BY_MODE_CHANGE";
    case -0x7ff8e46d:
      return "ERROR_ACTIVATION_COUNT_EXCEEDED";
    case -0x7ff8e46c:
      return "ERROR_CTX_WINSTATIONS_DISABLED";
    case -0x7ff8e46b:
      return "ERROR_CTX_ENCRYPTION_LEVEL_REQUIRED";
    case -0x7ff8e46a:
      return "ERROR_CTX_SESSION_IN_USE";
    case -0x7ff8e469:
      return "ERROR_CTX_NO_FORCE_LOGOFF";
    case -0x7ff8e468:
      return "ERROR_CTX_ACCOUNT_RESTRICTION";
    case -0x7ff8e467:
      return "ERROR_RDP_PROTOCOL_ERROR";
    case -0x7ff8e466:
      return "ERROR_CTX_CDM_CONNECT";
    case -0x7ff8e465:
      return "ERROR_CTX_CDM_DISCONNECT";
    case -0x7ff8e464:
      return "ERROR_CTX_SECURITY_LAYER_ERROR";
    case -0x7ff8e463:
      return "ERROR_TS_INCOMPATIBLE_SESSIONS";
    }
  }
  else if (param_1 < -0x7ff8cd37) {
    if (param_1 == -0x7ff8cd38) {
      return "ERROR_IPSEC_QM_POLICY_EXISTS";
    }
    switch(param_1) {
    case -0x7ff8dff7:
      return "ERROR_DS_MEMBERSHIP_EVALUATED_LOCALLY";
    case -0x7ff8dff6:
      return "ERROR_DS_NO_ATTRIBUTE_OR_VALUE";
    case -0x7ff8dff5:
      return "ERROR_DS_INVALID_ATTRIBUTE_SYNTAX";
    case -0x7ff8dff4:
      return "ERROR_DS_ATTRIBUTE_TYPE_UNDEFINED";
    case -0x7ff8dff3:
      return "ERROR_DS_ATTRIBUTE_OR_VALUE_EXISTS";
    case -0x7ff8dff2:
      return "ERROR_DS_BUSY";
    case -0x7ff8dff1:
      return "ERROR_DS_UNAVAILABLE";
    case -0x7ff8dff0:
      return "ERROR_DS_NO_RIDS_ALLOCATED";
    case -0x7ff8dfef:
      return "ERROR_DS_NO_MORE_RIDS";
    case -0x7ff8dfee:
      return "ERROR_DS_INCORRECT_ROLE_OWNER";
    case -0x7ff8dfed:
      return "ERROR_DS_RIDMGR_INIT_ERROR";
    case -0x7ff8dfec:
      return "ERROR_DS_OBJ_CLASS_VIOLATION";
    case -0x7ff8dfeb:
      return "ERROR_DS_CANT_ON_NON_LEAF";
    case -0x7ff8dfea:
      return "ERROR_DS_CANT_ON_RDN";
    case -0x7ff8dfe9:
      return "ERROR_DS_CANT_MOD_OBJ_CLASS";
    case -0x7ff8dfe8:
      return "ERROR_DS_CROSS_DOM_MOVE_ERROR";
    case -0x7ff8dfe7:
      return "ERROR_DS_GC_NOT_AVAILABLE";
    case -0x7ff8dfe6:
      return "ERROR_SHARED_POLICY";
    case -0x7ff8dfe5:
      return "ERROR_POLICY_OBJECT_NOT_FOUND";
    case -0x7ff8dfe4:
      return "ERROR_POLICY_ONLY_IN_DS";
    case -0x7ff8dfe3:
      return "ERROR_PROMOTION_ACTIVE";
    case -0x7ff8dfe2:
      return "ERROR_NO_PROMOTION_ACTIVE";
    case -0x7ff8dfe0:
      return "ERROR_DS_OPERATIONS_ERROR";
    case -0x7ff8dfdf:
      return "ERROR_DS_PROTOCOL_ERROR";
    case -0x7ff8dfde:
      return "ERROR_DS_TIMELIMIT_EXCEEDED";
    case -0x7ff8dfdd:
      return "ERROR_DS_SIZELIMIT_EXCEEDED";
    case -0x7ff8dfdc:
      return "ERROR_DS_ADMIN_LIMIT_EXCEEDED";
    case -0x7ff8dfdb:
      return "ERROR_DS_COMPARE_FALSE";
    case -0x7ff8dfda:
      return "ERROR_DS_COMPARE_TRUE";
    case -0x7ff8dfd9:
      return "ERROR_DS_AUTH_METHOD_NOT_SUPPORTED";
    case -0x7ff8dfd8:
      return "ERROR_DS_STRONG_AUTH_REQUIRED";
    case -0x7ff8dfd7:
      return "ERROR_DS_INAPPROPRIATE_AUTH";
    case -0x7ff8dfd6:
      return "ERROR_DS_AUTH_UNKNOWN";
    case -0x7ff8dfd5:
      return "ERROR_DS_REFERRAL";
    case -0x7ff8dfd4:
      return "ERROR_DS_UNAVAILABLE_CRIT_EXTENSION";
    case -0x7ff8dfd3:
      return "ERROR_DS_CONFIDENTIALITY_REQUIRED";
    case -0x7ff8dfd2:
      return "ERROR_DS_INAPPROPRIATE_MATCHING";
    case -0x7ff8dfd1:
      return "ERROR_DS_CONSTRAINT_VIOLATION";
    case -0x7ff8dfd0:
      return "ERROR_DS_NO_SUCH_OBJECT";
    case -0x7ff8dfcf:
      return "ERROR_DS_ALIAS_PROBLEM";
    case -0x7ff8dfce:
      return "ERROR_DS_INVALID_DN_SYNTAX";
    case -0x7ff8dfcd:
      return "ERROR_DS_IS_LEAF";
    case -0x7ff8dfcc:
      return "ERROR_DS_ALIAS_DEREF_PROBLEM";
    case -0x7ff8dfcb:
      return "ERROR_DS_UNWILLING_TO_PERFORM";
    case -0x7ff8dfca:
      return "ERROR_DS_LOOP_DETECT";
    case -0x7ff8dfc9:
      return "ERROR_DS_NAMING_VIOLATION";
    case -0x7ff8dfc8:
      return "ERROR_DS_OBJECT_RESULTS_TOO_LARGE";
    case -0x7ff8dfc7:
      return "ERROR_DS_AFFECTS_MULTIPLE_DSAS";
    case -0x7ff8dfc6:
      return "ERROR_DS_SERVER_DOWN";
    case -0x7ff8dfc5:
      return "ERROR_DS_LOCAL_ERROR";
    case -0x7ff8dfc4:
      return "ERROR_DS_ENCODING_ERROR";
    case -0x7ff8dfc3:
      return "ERROR_DS_DECODING_ERROR";
    case -0x7ff8dfc2:
      return "ERROR_DS_FILTER_UNKNOWN";
    case -0x7ff8dfc1:
      return "ERROR_DS_PARAM_ERROR";
    case -0x7ff8dfc0:
      return "ERROR_DS_NOT_SUPPORTED";
    case -0x7ff8dfbf:
      return "ERROR_DS_NO_RESULTS_RETURNED";
    case -0x7ff8dfbe:
      return "ERROR_DS_CONTROL_NOT_FOUND";
    case -0x7ff8dfbd:
      return "ERROR_DS_CLIENT_LOOP";
    case -0x7ff8dfbc:
      return "ERROR_DS_REFERRAL_LIMIT_EXCEEDED";
    case -0x7ff8dfbb:
      return "ERROR_DS_SORT_CONTROL_MISSING";
    case -0x7ff8dfba:
      return "ERROR_DS_OFFSET_RANGE_ERROR";
    case -0x7ff8df93:
      return "ERROR_DS_ROOT_MUST_BE_NC";
    case -0x7ff8df92:
      return "ERROR_DS_ADD_REPLICA_INHIBITED";
    case -0x7ff8df91:
      return "ERROR_DS_ATT_NOT_DEF_IN_SCHEMA";
    case -0x7ff8df90:
      return "ERROR_DS_MAX_OBJ_SIZE_EXCEEDED";
    case -0x7ff8df8f:
      return "ERROR_DS_OBJ_STRING_NAME_EXISTS";
    case -0x7ff8df8e:
      return "ERROR_DS_NO_RDN_DEFINED_IN_SCHEMA";
    case -0x7ff8df8d:
      return "ERROR_DS_RDN_DOESNT_MATCH_SCHEMA";
    case -0x7ff8df8c:
      return "ERROR_DS_NO_REQUESTED_ATTS_FOUND";
    case -0x7ff8df8b:
      return "ERROR_DS_USER_BUFFER_TO_SMALL";
    case -0x7ff8df8a:
      return "ERROR_DS_ATT_IS_NOT_ON_OBJ";
    case -0x7ff8df89:
      return "ERROR_DS_ILLEGAL_MOD_OPERATION";
    case -0x7ff8df88:
      return "ERROR_DS_OBJ_TOO_LARGE";
    case -0x7ff8df87:
      return "ERROR_DS_BAD_INSTANCE_TYPE";
    case -0x7ff8df86:
      return "ERROR_DS_MASTERDSA_REQUIRED";
    case -0x7ff8df85:
      return "ERROR_DS_OBJECT_CLASS_REQUIRED";
    case -0x7ff8df84:
      return "ERROR_DS_MISSING_REQUIRED_ATT";
    case -0x7ff8df83:
      return "ERROR_DS_ATT_NOT_DEF_FOR_CLASS";
    case -0x7ff8df82:
      return "ERROR_DS_ATT_ALREADY_EXISTS";
    case -0x7ff8df80:
      return "ERROR_DS_CANT_ADD_ATT_VALUES";
    case -0x7ff8df7f:
      return "ERROR_DS_SINGLE_VALUE_CONSTRAINT";
    case -0x7ff8df7e:
      return "ERROR_DS_RANGE_CONSTRAINT";
    case -0x7ff8df7d:
      return "ERROR_DS_ATT_VAL_ALREADY_EXISTS";
    case -0x7ff8df7c:
      return "ERROR_DS_CANT_REM_MISSING_ATT";
    case -0x7ff8df7b:
      return "ERROR_DS_CANT_REM_MISSING_ATT_VAL";
    case -0x7ff8df7a:
      return "ERROR_DS_ROOT_CANT_BE_SUBREF";
    case -0x7ff8df79:
      return "ERROR_DS_NO_CHAINING";
    case -0x7ff8df78:
      return "ERROR_DS_NO_CHAINED_EVAL";
    case -0x7ff8df77:
      return "ERROR_DS_NO_PARENT_OBJECT";
    case -0x7ff8df76:
      return "ERROR_DS_PARENT_IS_AN_ALIAS";
    case -0x7ff8df75:
      return "ERROR_DS_CANT_MIX_MASTER_AND_REPS";
    case -0x7ff8df74:
      return "ERROR_DS_CHILDREN_EXIST";
    case -0x7ff8df73:
      return "ERROR_DS_OBJ_NOT_FOUND";
    case -0x7ff8df72:
      return "ERROR_DS_ALIASED_OBJ_MISSING";
    case -0x7ff8df71:
      return "ERROR_DS_BAD_NAME_SYNTAX";
    case -0x7ff8df70:
      return "ERROR_DS_ALIAS_POINTS_TO_ALIAS";
    case -0x7ff8df6f:
      return "ERROR_DS_CANT_DEREF_ALIAS";
    case -0x7ff8df6e:
      return "ERROR_DS_OUT_OF_SCOPE";
    case -0x7ff8df6d:
      return "ERROR_DS_OBJECT_BEING_REMOVED";
    case -0x7ff8df6c:
      return "ERROR_DS_CANT_DELETE_DSA_OBJ";
    case -0x7ff8df6b:
      return "ERROR_DS_GENERIC_ERROR";
    case -0x7ff8df6a:
      return "ERROR_DS_DSA_MUST_BE_INT_MASTER";
    case -0x7ff8df69:
      return "ERROR_DS_CLASS_NOT_DSA";
    case -0x7ff8df68:
      return "ERROR_DS_INSUFF_ACCESS_RIGHTS";
    case -0x7ff8df67:
      return "ERROR_DS_ILLEGAL_SUPERIOR";
    case -0x7ff8df66:
      return "ERROR_DS_ATTRIBUTE_OWNED_BY_SAM";
    case -0x7ff8df65:
      return "ERROR_DS_NAME_TOO_MANY_PARTS";
    case -0x7ff8df64:
      return "ERROR_DS_NAME_TOO_LONG";
    case -0x7ff8df63:
      return "ERROR_DS_NAME_VALUE_TOO_LONG";
    case -0x7ff8df62:
      return "ERROR_DS_NAME_UNPARSEABLE";
    case -0x7ff8df61:
      return "ERROR_DS_NAME_TYPE_UNKNOWN";
    case -0x7ff8df60:
      return "ERROR_DS_NOT_AN_OBJECT";
    case -0x7ff8df5f:
      return "ERROR_DS_SEC_DESC_TOO_SHORT";
    case -0x7ff8df5e:
      return "ERROR_DS_SEC_DESC_INVALID";
    case -0x7ff8df5d:
      return "ERROR_DS_NO_DELETED_NAME";
    case -0x7ff8df5c:
      return "ERROR_DS_SUBREF_MUST_HAVE_PARENT";
    case -0x7ff8df5b:
      return "ERROR_DS_NCNAME_MUST_BE_NC";
    case -0x7ff8df5a:
      return "ERROR_DS_CANT_ADD_SYSTEM_ONLY";
    case -0x7ff8df59:
      return "ERROR_DS_CLASS_MUST_BE_CONCRETE";
    case -0x7ff8df58:
      return "ERROR_DS_INVALID_DMD";
    case -0x7ff8df57:
      return "ERROR_DS_OBJ_GUID_EXISTS";
    case -0x7ff8df56:
      return "ERROR_DS_NOT_ON_BACKLINK";
    case -0x7ff8df55:
      return "ERROR_DS_NO_CROSSREF_FOR_NC";
    case -0x7ff8df54:
      return "ERROR_DS_SHUTTING_DOWN";
    case -0x7ff8df53:
      return "ERROR_DS_UNKNOWN_OPERATION";
    case -0x7ff8df52:
      return "ERROR_DS_INVALID_ROLE_OWNER";
    case -0x7ff8df51:
      return "ERROR_DS_COULDNT_CONTACT_FSMO";
    case -0x7ff8df50:
      return "ERROR_DS_CROSS_NC_DN_RENAME";
    case -0x7ff8df4f:
      return "ERROR_DS_CANT_MOD_SYSTEM_ONLY";
    case -0x7ff8df4e:
      return "ERROR_DS_REPLICATOR_ONLY";
    case -0x7ff8df4d:
      return "ERROR_DS_OBJ_CLASS_NOT_DEFINED";
    case -0x7ff8df4c:
      return "ERROR_DS_OBJ_CLASS_NOT_SUBCLASS";
    case -0x7ff8df4b:
      return "ERROR_DS_NAME_REFERENCE_INVALID";
    case -0x7ff8df4a:
      return "ERROR_DS_CROSS_REF_EXISTS";
    case -0x7ff8df49:
      return "ERROR_DS_CANT_DEL_MASTER_CROSSREF";
    case -0x7ff8df48:
      return "ERROR_DS_SUBTREE_NOTIFY_NOT_NC_HEAD";
    case -0x7ff8df47:
      return "ERROR_DS_NOTIFY_FILTER_TOO_COMPLEX";
    case -0x7ff8df46:
      return "ERROR_DS_DUP_RDN";
    case -0x7ff8df45:
      return "ERROR_DS_DUP_OID";
    case -0x7ff8df44:
      return "ERROR_DS_DUP_MAPI_ID";
    case -0x7ff8df43:
      return "ERROR_DS_DUP_SCHEMA_ID_GUID";
    case -0x7ff8df42:
      return "ERROR_DS_DUP_LDAP_DISPLAY_NAME";
    case -0x7ff8df41:
      return "ERROR_DS_SEMANTIC_ATT_TEST";
    case -0x7ff8df40:
      return "ERROR_DS_SYNTAX_MISMATCH";
    case -0x7ff8df3f:
      return "ERROR_DS_EXISTS_IN_MUST_HAVE";
    case -0x7ff8df3e:
      return "ERROR_DS_EXISTS_IN_MAY_HAVE";
    case -0x7ff8df3d:
      return "ERROR_DS_NONEXISTENT_MAY_HAVE";
    case -0x7ff8df3c:
      return "ERROR_DS_NONEXISTENT_MUST_HAVE";
    case -0x7ff8df3b:
      return "ERROR_DS_AUX_CLS_TEST_FAIL";
    case -0x7ff8df3a:
      return "ERROR_DS_NONEXISTENT_POSS_SUP";
    case -0x7ff8df39:
      return "ERROR_DS_SUB_CLS_TEST_FAIL";
    case -0x7ff8df38:
      return "ERROR_DS_BAD_RDN_ATT_ID_SYNTAX";
    case -0x7ff8df37:
      return "ERROR_DS_EXISTS_IN_AUX_CLS";
    case -0x7ff8df36:
      return "ERROR_DS_EXISTS_IN_SUB_CLS";
    case -0x7ff8df35:
      return "ERROR_DS_EXISTS_IN_POSS_SUP";
    case -0x7ff8df34:
      return "ERROR_DS_RECALCSCHEMA_FAILED";
    case -0x7ff8df33:
      return "ERROR_DS_TREE_DELETE_NOT_FINISHED";
    case -0x7ff8df32:
      return "ERROR_DS_CANT_DELETE";
    case -0x7ff8df31:
      return "ERROR_DS_ATT_SCHEMA_REQ_ID";
    case -0x7ff8df30:
      return "ERROR_DS_BAD_ATT_SCHEMA_SYNTAX";
    case -0x7ff8df2f:
      return "ERROR_DS_CANT_CACHE_ATT";
    case -0x7ff8df2e:
      return "ERROR_DS_CANT_CACHE_CLASS";
    case -0x7ff8df2d:
      return "ERROR_DS_CANT_REMOVE_ATT_CACHE";
    case -0x7ff8df2c:
      return "ERROR_DS_CANT_REMOVE_CLASS_CACHE";
    case -0x7ff8df2b:
      return "ERROR_DS_CANT_RETRIEVE_DN";
    case -0x7ff8df2a:
      return "ERROR_DS_MISSING_SUPREF";
    case -0x7ff8df29:
      return "ERROR_DS_CANT_RETRIEVE_INSTANCE";
    case -0x7ff8df28:
      return "ERROR_DS_CODE_INCONSISTENCY";
    case -0x7ff8df27:
      return "ERROR_DS_DATABASE_ERROR";
    case -0x7ff8df26:
      return "ERROR_DS_GOVERNSID_MISSING";
    case -0x7ff8df25:
      return "ERROR_DS_MISSING_EXPECTED_ATT";
    case -0x7ff8df24:
      return "ERROR_DS_NCNAME_MISSING_CR_REF";
    case -0x7ff8df23:
      return "ERROR_DS_SECURITY_CHECKING_ERROR";
    case -0x7ff8df22:
      return "ERROR_DS_SCHEMA_NOT_LOADED";
    case -0x7ff8df21:
      return "ERROR_DS_SCHEMA_ALLOC_FAILED";
    case -0x7ff8df20:
      return "ERROR_DS_ATT_SCHEMA_REQ_SYNTAX";
    case -0x7ff8df1f:
      return "ERROR_DS_GCVERIFY_ERROR";
    case -0x7ff8df1e:
      return "ERROR_DS_DRA_SCHEMA_MISMATCH";
    case -0x7ff8df1d:
      return "ERROR_DS_CANT_FIND_DSA_OBJ";
    case -0x7ff8df1c:
      return "ERROR_DS_CANT_FIND_EXPECTED_NC";
    case -0x7ff8df1b:
      return "ERROR_DS_CANT_FIND_NC_IN_CACHE";
    case -0x7ff8df1a:
      return "ERROR_DS_CANT_RETRIEVE_CHILD";
    case -0x7ff8df19:
      return "ERROR_DS_SECURITY_ILLEGAL_MODIFY";
    case -0x7ff8df18:
      return "ERROR_DS_CANT_REPLACE_HIDDEN_REC";
    case -0x7ff8df17:
      return "ERROR_DS_BAD_HIERARCHY_FILE";
    case -0x7ff8df16:
      return "ERROR_DS_BUILD_HIERARCHY_TABLE_FAILED";
    case -0x7ff8df15:
      return "ERROR_DS_CONFIG_PARAM_MISSING";
    case -0x7ff8df14:
      return "ERROR_DS_COUNTING_AB_INDICES_FAILED";
    case -0x7ff8df13:
      return "ERROR_DS_HIERARCHY_TABLE_MALLOC_FAILED";
    case -0x7ff8df12:
      return "ERROR_DS_INTERNAL_FAILURE";
    case -0x7ff8df11:
      return "ERROR_DS_UNKNOWN_ERROR";
    case -0x7ff8df10:
      return "ERROR_DS_ROOT_REQUIRES_CLASS_TOP";
    case -0x7ff8df0f:
      return "ERROR_DS_REFUSING_FSMO_ROLES";
    case -0x7ff8df0e:
      return "ERROR_DS_MISSING_FSMO_SETTINGS";
    case -0x7ff8df0d:
      return "ERROR_DS_UNABLE_TO_SURRENDER_ROLES";
    case -0x7ff8df0c:
      return "ERROR_DS_DRA_GENERIC";
    case -0x7ff8df0b:
      return "ERROR_DS_DRA_INVALID_PARAMETER";
    case -0x7ff8df0a:
      return "ERROR_DS_DRA_BUSY";
    case -0x7ff8df09:
      return "ERROR_DS_DRA_BAD_DN";
    case -0x7ff8df08:
      return "ERROR_DS_DRA_BAD_NC";
    case -0x7ff8df07:
      return "ERROR_DS_DRA_DN_EXISTS";
    case -0x7ff8df06:
      return "ERROR_DS_DRA_INTERNAL_ERROR";
    case -0x7ff8df05:
      return "ERROR_DS_DRA_INCONSISTENT_DIT";
    case -0x7ff8df04:
      return "ERROR_DS_DRA_CONNECTION_FAILED";
    case -0x7ff8df03:
      return "ERROR_DS_DRA_BAD_INSTANCE_TYPE";
    case -0x7ff8df02:
      return "ERROR_DS_DRA_OUT_OF_MEM";
    case -0x7ff8df01:
      return "ERROR_DS_DRA_MAIL_PROBLEM";
    case -0x7ff8df00:
      return "ERROR_DS_DRA_REF_ALREADY_EXISTS";
    case -0x7ff8deff:
      return "ERROR_DS_DRA_REF_NOT_FOUND";
    case -0x7ff8defe:
      return "ERROR_DS_DRA_OBJ_IS_REP_SOURCE";
    case -0x7ff8defd:
      return "ERROR_DS_DRA_DB_ERROR";
    case -0x7ff8defc:
      return "ERROR_DS_DRA_NO_REPLICA";
    case -0x7ff8defb:
      return "ERROR_DS_DRA_ACCESS_DENIED";
    case -0x7ff8defa:
      return "ERROR_DS_DRA_NOT_SUPPORTED";
    case -0x7ff8def9:
      return "ERROR_DS_DRA_RPC_CANCELLED";
    case -0x7ff8def8:
      return "ERROR_DS_DRA_SOURCE_DISABLED";
    case -0x7ff8def7:
      return "ERROR_DS_DRA_SINK_DISABLED";
    case -0x7ff8def6:
      return "ERROR_DS_DRA_NAME_COLLISION";
    case -0x7ff8def5:
      return "ERROR_DS_DRA_SOURCE_REINSTALLED";
    case -0x7ff8def4:
      return "ERROR_DS_DRA_MISSING_PARENT";
    case -0x7ff8def3:
      return "ERROR_DS_DRA_PREEMPTED";
    case -0x7ff8def2:
      return "ERROR_DS_DRA_ABANDON_SYNC";
    case -0x7ff8def1:
      return "ERROR_DS_DRA_SHUTDOWN";
    case -0x7ff8def0:
      return "ERROR_DS_DRA_INCOMPATIBLE_PARTIAL_SET";
    case -0x7ff8deef:
      return "ERROR_DS_DRA_SOURCE_IS_PARTIAL_REPLICA";
    case -0x7ff8deee:
      return "ERROR_DS_DRA_EXTN_CONNECTION_FAILED";
    case -0x7ff8deed:
      return "ERROR_DS_INSTALL_SCHEMA_MISMATCH";
    case -0x7ff8deec:
      return "ERROR_DS_DUP_LINK_ID";
    case -0x7ff8deeb:
      return "ERROR_DS_NAME_ERROR_RESOLVING";
    case -0x7ff8deea:
      return "ERROR_DS_NAME_ERROR_NOT_FOUND";
    case -0x7ff8dee9:
      return "ERROR_DS_NAME_ERROR_NOT_UNIQUE";
    case -0x7ff8dee8:
      return "ERROR_DS_NAME_ERROR_NO_MAPPING";
    case -0x7ff8dee7:
      return "ERROR_DS_NAME_ERROR_DOMAIN_ONLY";
    case -0x7ff8dee6:
      return "ERROR_DS_NAME_ERROR_NO_SYNTACTICAL_MAPPING";
    case -0x7ff8dee5:
      return "ERROR_DS_CONSTRUCTED_ATT_MOD";
    case -0x7ff8dee4:
      return "ERROR_DS_WRONG_OM_OBJ_CLASS";
    case -0x7ff8dee3:
      return "ERROR_DS_DRA_REPL_PENDING";
    case -0x7ff8dee2:
      return "ERROR_DS_DS_REQUIRED";
    case -0x7ff8dee1:
      return "ERROR_DS_INVALID_LDAP_DISPLAY_NAME";
    case -0x7ff8dee0:
      return "ERROR_DS_NON_BASE_SEARCH";
    case -0x7ff8dedf:
      return "ERROR_DS_CANT_RETRIEVE_ATTS";
    case -0x7ff8dede:
      return "ERROR_DS_BACKLINK_WITHOUT_LINK";
    case -0x7ff8dedd:
      return "ERROR_DS_EPOCH_MISMATCH";
    case -0x7ff8dedc:
      return "ERROR_DS_SRC_NAME_MISMATCH";
    case -0x7ff8dedb:
      return "ERROR_DS_SRC_AND_DST_NC_IDENTICAL";
    case -0x7ff8deda:
      return "ERROR_DS_DST_NC_MISMATCH";
    case -0x7ff8ded9:
      return "ERROR_DS_NOT_AUTHORITIVE_FOR_DST_NC";
    case -0x7ff8ded8:
      return "ERROR_DS_SRC_GUID_MISMATCH";
    case -0x7ff8ded7:
      return "ERROR_DS_CANT_MOVE_DELETED_OBJECT";
    case -0x7ff8ded6:
      return "ERROR_DS_PDC_OPERATION_IN_PROGRESS";
    case -0x7ff8ded5:
      return "ERROR_DS_CROSS_DOMAIN_CLEANUP_REQD";
    case -0x7ff8ded4:
      return "ERROR_DS_ILLEGAL_XDOM_MOVE_OPERATION";
    case -0x7ff8ded3:
      return "ERROR_DS_CANT_WITH_ACCT_GROUP_MEMBERSHPS";
    case -0x7ff8ded2:
      return "ERROR_DS_NC_MUST_HAVE_NC_PARENT";
    case -0x7ff8ded1:
      return "ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE";
    case -0x7ff8ded0:
      return "ERROR_DS_DST_DOMAIN_NOT_NATIVE";
    case -0x7ff8decf:
      return "ERROR_DS_MISSING_INFRASTRUCTURE_CONTAINER";
    case -0x7ff8dece:
      return "ERROR_DS_CANT_MOVE_ACCOUNT_GROUP";
    case -0x7ff8decd:
      return "ERROR_DS_CANT_MOVE_RESOURCE_GROUP";
    case -0x7ff8decc:
      return "ERROR_DS_INVALID_SEARCH_FLAG";
    case -0x7ff8decb:
      return "ERROR_DS_NO_TREE_DELETE_ABOVE_NC";
    case -0x7ff8deca:
      return "ERROR_DS_COULDNT_LOCK_TREE_FOR_DELETE";
    case -0x7ff8dec9:
      return "ERROR_DS_COULDNT_IDENTIFY_OBJECTS_FOR_TREE_DELETE";
    case -0x7ff8dec8:
      return "ERROR_DS_SAM_INIT_FAILURE";
    case -0x7ff8dec7:
      return "ERROR_DS_SENSITIVE_GROUP_VIOLATION";
    case -0x7ff8dec6:
      return "ERROR_DS_CANT_MOD_PRIMARYGROUPID";
    case -0x7ff8dec5:
      return "ERROR_DS_ILLEGAL_BASE_SCHEMA_MOD";
    case -0x7ff8dec4:
      return "ERROR_DS_NONSAFE_SCHEMA_CHANGE";
    case -0x7ff8dec3:
      return "ERROR_DS_SCHEMA_UPDATE_DISALLOWED";
    case -0x7ff8dec2:
      return "ERROR_DS_CANT_CREATE_UNDER_SCHEMA";
    case -0x7ff8dec1:
      return "ERROR_DS_INSTALL_NO_SRC_SCH_VERSION";
    case -0x7ff8dec0:
      return "ERROR_DS_INSTALL_NO_SCH_VERSION_IN_INIFILE";
    case -0x7ff8debf:
      return "ERROR_DS_INVALID_GROUP_TYPE";
    case -0x7ff8debe:
      return "ERROR_DS_NO_NEST_GLOBALGROUP_IN_MIXEDDOMAIN";
    case -0x7ff8debd:
      return "ERROR_DS_NO_NEST_LOCALGROUP_IN_MIXEDDOMAIN";
    case -0x7ff8debc:
      return "ERROR_DS_GLOBAL_CANT_HAVE_LOCAL_MEMBER";
    case -0x7ff8debb:
      return "ERROR_DS_GLOBAL_CANT_HAVE_UNIVERSAL_MEMBER";
    case -0x7ff8deba:
      return "ERROR_DS_UNIVERSAL_CANT_HAVE_LOCAL_MEMBER";
    case -0x7ff8deb9:
      return "ERROR_DS_GLOBAL_CANT_HAVE_CROSSDOMAIN_MEMBER";
    case -0x7ff8deb8:
      return "ERROR_DS_LOCAL_CANT_HAVE_CROSSDOMAIN_LOCAL_MEMBER";
    case -0x7ff8deb7:
      return "ERROR_DS_HAVE_PRIMARY_MEMBERS";
    case -0x7ff8deb6:
      return "ERROR_DS_STRING_SD_CONVERSION_FAILED";
    case -0x7ff8deb5:
      return "ERROR_DS_NAMING_MASTER_GC";
    case -0x7ff8deb4:
      return "ERROR_DS_DNS_LOOKUP_FAILURE";
    case -0x7ff8deb3:
      return "ERROR_DS_COULDNT_UPDATE_SPNS";
    case -0x7ff8deb2:
      return "ERROR_DS_CANT_RETRIEVE_SD";
    case -0x7ff8deb1:
      return "ERROR_DS_KEY_NOT_UNIQUE";
    case -0x7ff8deb0:
      return "ERROR_DS_WRONG_LINKED_ATT_SYNTAX";
    case -0x7ff8deaf:
      return "ERROR_DS_SAM_NEED_BOOTKEY_PASSWORD";
    case -0x7ff8deae:
      return "ERROR_DS_SAM_NEED_BOOTKEY_FLOPPY";
    case -0x7ff8dead:
      return "ERROR_DS_CANT_START";
    case -0x7ff8deac:
      return "ERROR_DS_INIT_FAILURE";
    case -0x7ff8deab:
      return "ERROR_DS_NO_PKT_PRIVACY_ON_CONNECTION";
    case -0x7ff8deaa:
      return "ERROR_DS_SOURCE_DOMAIN_IN_FOREST";
    case -0x7ff8dea9:
      return "ERROR_DS_DESTINATION_DOMAIN_NOT_IN_FOREST";
    case -0x7ff8dea8:
      return "ERROR_DS_DESTINATION_AUDITING_NOT_ENABLED";
    case -0x7ff8dea7:
      return "ERROR_DS_CANT_FIND_DC_FOR_SRC_DOMAIN";
    case -0x7ff8dea6:
      return "ERROR_DS_SRC_OBJ_NOT_GROUP_OR_USER";
    case -0x7ff8dea5:
      return "ERROR_DS_SRC_SID_EXISTS_IN_FOREST";
    case -0x7ff8dea4:
      return "ERROR_DS_SRC_AND_DST_OBJECT_CLASS_MISMATCH";
    case -0x7ff8dea3:
      return "ERROR_SAM_INIT_FAILURE";
    case -0x7ff8dea2:
      return "ERROR_DS_DRA_SCHEMA_INFO_SHIP";
    case -0x7ff8dea1:
      return "ERROR_DS_DRA_SCHEMA_CONFLICT";
    case -0x7ff8dea0:
      return "ERROR_DS_DRA_EARLIER_SCHEMA_CONFLICT";
    case -0x7ff8de9f:
      return "ERROR_DS_DRA_OBJ_NC_MISMATCH";
    case -0x7ff8de9e:
      return "ERROR_DS_NC_STILL_HAS_DSAS";
    case -0x7ff8de9d:
      return "ERROR_DS_GC_REQUIRED";
    case -0x7ff8de9c:
      return "ERROR_DS_LOCAL_MEMBER_OF_LOCAL_ONLY";
    case -0x7ff8de9b:
      return "ERROR_DS_NO_FPO_IN_UNIVERSAL_GROUPS";
    case -0x7ff8de9a:
      return "ERROR_DS_CANT_ADD_TO_GC";
    case -0x7ff8de99:
      return "ERROR_DS_NO_CHECKPOINT_WITH_PDC";
    case -0x7ff8de98:
      return "ERROR_DS_SOURCE_AUDITING_NOT_ENABLED";
    case -0x7ff8de97:
      return "ERROR_DS_CANT_CREATE_IN_NONDOMAIN_NC";
    case -0x7ff8de96:
      return "ERROR_DS_INVALID_NAME_FOR_SPN";
    case -0x7ff8de95:
      return "ERROR_DS_FILTER_USES_CONTRUCTED_ATTRS";
    case -0x7ff8de94:
      return "ERROR_DS_UNICODEPWD_NOT_IN_QUOTES";
    case -0x7ff8de93:
      return "ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED";
    case -0x7ff8de92:
      return "ERROR_DS_MUST_BE_RUN_ON_DST_DC";
    case -0x7ff8de91:
      return "ERROR_DS_SRC_DC_MUST_BE_SP4_OR_GREATER";
    case -0x7ff8de90:
      return "ERROR_DS_CANT_TREE_DELETE_CRITICAL_OBJ";
    case -0x7ff8de8f:
      return "ERROR_DS_INIT_FAILURE_CONSOLE";
    case -0x7ff8de8e:
      return "ERROR_DS_SAM_INIT_FAILURE_CONSOLE";
    case -0x7ff8de8d:
      return "ERROR_DS_FOREST_VERSION_TOO_HIGH";
    case -0x7ff8de8c:
      return "ERROR_DS_DOMAIN_VERSION_TOO_HIGH";
    case -0x7ff8de8b:
      return "ERROR_DS_FOREST_VERSION_TOO_LOW";
    case -0x7ff8de8a:
      return "ERROR_DS_DOMAIN_VERSION_TOO_LOW";
    case -0x7ff8de89:
      return "ERROR_DS_INCOMPATIBLE_VERSION";
    case -0x7ff8de88:
      return "ERROR_DS_LOW_DSA_VERSION";
    case -0x7ff8de87:
      return "ERROR_DS_NO_BEHAVIOR_VERSION_IN_MIXEDDOMAIN";
    case -0x7ff8de86:
      return "ERROR_DS_NOT_SUPPORTED_SORT_ORDER";
    case -0x7ff8de85:
      return "ERROR_DS_NAME_NOT_UNIQUE";
    case -0x7ff8de84:
      return "ERROR_DS_MACHINE_ACCOUNT_CREATED_PRENT4";
    case -0x7ff8de83:
      return "ERROR_DS_OUT_OF_VERSION_STORE";
    case -0x7ff8de82:
      return "ERROR_DS_INCOMPATIBLE_CONTROLS_USED";
    case -0x7ff8de81:
      return "ERROR_DS_NO_REF_DOMAIN";
    case -0x7ff8de80:
      return "ERROR_DS_RESERVED_LINK_ID";
    case -0x7ff8de7f:
      return "ERROR_DS_LINK_ID_NOT_AVAILABLE";
    case -0x7ff8de7e:
      return "ERROR_DS_AG_CANT_HAVE_UNIVERSAL_MEMBER";
    case -0x7ff8de7d:
      return "ERROR_DS_MODIFYDN_DISALLOWED_BY_INSTANCE_TYPE";
    case -0x7ff8de7c:
      return "ERROR_DS_NO_OBJECT_MOVE_IN_SCHEMA_NC";
    case -0x7ff8de7b:
      return "ERROR_DS_MODIFYDN_DISALLOWED_BY_FLAG";
    case -0x7ff8de7a:
      return "ERROR_DS_MODIFYDN_WRONG_GRANDPARENT";
    case -0x7ff8de79:
      return "ERROR_DS_NAME_ERROR_TRUST_REFERRAL";
    case -0x7ff8de78:
      return "ERROR_NOT_SUPPORTED_ON_STANDARD_SERVER";
    case -0x7ff8de77:
      return "ERROR_DS_CANT_ACCESS_REMOTE_PART_OF_AD";
    case -0x7ff8de76:
      return "ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE_V2";
    case -0x7ff8de75:
      return "ERROR_DS_THREAD_LIMIT_EXCEEDED";
    case -0x7ff8de74:
      return "ERROR_DS_NOT_CLOSEST";
    case -0x7ff8de73:
      return "ERROR_DS_CANT_DERIVE_SPN_WITHOUT_SERVER_REF";
    case -0x7ff8de72:
      return "ERROR_DS_SINGLE_USER_MODE_FAILED";
    case -0x7ff8de71:
      return "ERROR_DS_NTDSCRIPT_SYNTAX_ERROR";
    case -0x7ff8de70:
      return "ERROR_DS_NTDSCRIPT_PROCESS_ERROR";
    case -0x7ff8de6f:
      return "ERROR_DS_DIFFERENT_REPL_EPOCHS";
    case -0x7ff8de6e:
      return "ERROR_DS_DRS_EXTENSIONS_CHANGED";
    case -0x7ff8de6d:
      return "ERROR_DS_REPLICA_SET_CHANGE_NOT_ALLOWED_ON_DISABLED_CR";
    case -0x7ff8de6c:
      return "ERROR_DS_NO_MSDS_INTID";
    case -0x7ff8de6b:
      return "ERROR_DS_DUP_MSDS_INTID";
    case -0x7ff8de6a:
      return "ERROR_DS_EXISTS_IN_RDNATTID";
    case -0x7ff8de69:
      return "ERROR_DS_AUTHORIZATION_FAILED";
    case -0x7ff8de68:
      return "ERROR_DS_INVALID_SCRIPT";
    case -0x7ff8de67:
      return "ERROR_DS_REMOTE_CROSSREF_OP_FAILED";
    case -0x7ff8de66:
      return "ERROR_DS_CROSS_REF_BUSY";
    case -0x7ff8de65:
      return "ERROR_DS_CANT_DERIVE_SPN_FOR_DELETED_DOMAIN";
    case -0x7ff8de64:
      return "ERROR_DS_CANT_DEMOTE_WITH_WRITEABLE_NC";
    case -0x7ff8de63:
      return "ERROR_DS_DUPLICATE_ID_FOUND";
    case -0x7ff8de62:
      return "ERROR_DS_INSUFFICIENT_ATTR_TO_CREATE_OBJECT";
    case -0x7ff8de61:
      return "ERROR_DS_GROUP_CONVERSION_ERROR";
    case -0x7ff8de60:
      return "ERROR_DS_CANT_MOVE_APP_BASIC_GROUP";
    case -0x7ff8de5f:
      return "ERROR_DS_CANT_MOVE_APP_QUERY_GROUP";
    case -0x7ff8de5e:
      return "ERROR_DS_ROLE_NOT_VERIFIED";
    case -0x7ff8de5d:
      return "ERROR_DS_WKO_CONTAINER_CANNOT_BE_SPECIAL";
    case -0x7ff8de5c:
      return "ERROR_DS_DOMAIN_RENAME_IN_PROGRESS";
    case -0x7ff8de5b:
      return "ERROR_DS_EXISTING_AD_CHILD_NC";
    case -0x7ff8de5a:
      return "ERROR_DS_REPL_LIFETIME_EXCEEDED";
    case -0x7ff8de59:
      return "ERROR_DS_DISALLOWED_IN_SYSTEM_CONTAINER";
    case -0x7ff8de58:
      return "ERROR_DS_LDAP_SEND_QUEUE_FULL";
    case -0x7ff8de57:
      return "ERROR_DS_DRA_OUT_SCHEDULE_WINDOW";
    case -0x7ff8de56:
      return "ERROR_DS_POLICY_NOT_KNOWN";
    case -0x7ff8de55:
      return "ERROR_NO_SITE_SETTINGS_OBJECT";
    case -0x7ff8de54:
      return "ERROR_NO_SECRETS";
    case -0x7ff8de53:
      return "ERROR_NO_WRITABLE_DC_FOUND";
    case -0x7ff8de52:
      return "ERROR_DS_NO_SERVER_OBJECT";
    case -0x7ff8de51:
      return "ERROR_DS_NO_NTDSA_OBJECT";
    case -0x7ff8de50:
      return "ERROR_DS_NON_ASQ_SEARCH";
    case -0x7ff8de4f:
      return "ERROR_DS_AUDIT_FAILURE";
    case -0x7ff8de4e:
      return "ERROR_DS_INVALID_SEARCH_FLAG_SUBTREE";
    case -0x7ff8de4d:
      return "ERROR_DS_INVALID_SEARCH_FLAG_TUPLE";
    case -0x7ff8de4c:
      return "ERROR_DS_HIERARCHY_TABLE_TOO_DEEP";
    case -0x7ff8de4b:
      return "ERROR_DS_DRA_CORRUPT_UTD_VECTOR";
    case -0x7ff8de4a:
      return "ERROR_DS_DRA_SECRETS_DENIED";
    case -0x7ff8de49:
      return "ERROR_DS_RESERVED_MAPI_ID";
    case -0x7ff8de48:
      return "ERROR_DS_MAPI_ID_NOT_AVAILABLE";
    case -0x7ff8de47:
      return "ERROR_DS_DRA_MISSING_KRBTGT_SECRET";
    }
  }
  else if (param_1 < -0x7ff8ca17) {
    if (param_1 == -0x7ff8ca18) {
      return "ERROR_IPSEC_IKE_NEG_STATUS_BEGIN";
    }
    switch(param_1) {
    case -0x7ff8cd37:
      return "ERROR_IPSEC_QM_POLICY_NOT_FOUND";
    case -0x7ff8cd36:
      return "ERROR_IPSEC_QM_POLICY_IN_USE";
    case -0x7ff8cd35:
      return "ERROR_IPSEC_MM_POLICY_EXISTS";
    case -0x7ff8cd34:
      return "ERROR_IPSEC_MM_POLICY_NOT_FOUND";
    case -0x7ff8cd33:
      return "ERROR_IPSEC_MM_POLICY_IN_USE";
    case -0x7ff8cd32:
      return "ERROR_IPSEC_MM_FILTER_EXISTS";
    case -0x7ff8cd31:
      return "ERROR_IPSEC_MM_FILTER_NOT_FOUND";
    case -0x7ff8cd30:
      return "ERROR_IPSEC_TRANSPORT_FILTER_EXISTS";
    case -0x7ff8cd2f:
      return "ERROR_IPSEC_TRANSPORT_FILTER_NOT_FOUND";
    case -0x7ff8cd2e:
      return "ERROR_IPSEC_MM_AUTH_EXISTS";
    case -0x7ff8cd2d:
      return "ERROR_IPSEC_MM_AUTH_NOT_FOUND";
    case -0x7ff8cd2c:
      return "ERROR_IPSEC_MM_AUTH_IN_USE";
    case -0x7ff8cd2b:
      return "ERROR_IPSEC_DEFAULT_MM_POLICY_NOT_FOUND";
    case -0x7ff8cd2a:
      return "ERROR_IPSEC_DEFAULT_MM_AUTH_NOT_FOUND";
    case -0x7ff8cd29:
      return "ERROR_IPSEC_DEFAULT_QM_POLICY_NOT_FOUND";
    case -0x7ff8cd28:
      return "ERROR_IPSEC_TUNNEL_FILTER_EXISTS";
    case -0x7ff8cd27:
      return "ERROR_IPSEC_TUNNEL_FILTER_NOT_FOUND";
    case -0x7ff8cd26:
      return "ERROR_IPSEC_MM_FILTER_PENDING_DELETION";
    case -0x7ff8cd25:
      return "ERROR_IPSEC_TRANSPORT_FILTER_PENDING_DELETION";
    case -0x7ff8cd24:
      return "ERROR_IPSEC_TUNNEL_FILTER_PENDING_DELETION";
    case -0x7ff8cd23:
      return "ERROR_IPSEC_MM_POLICY_PENDING_DELETION";
    case -0x7ff8cd22:
      return "ERROR_IPSEC_MM_AUTH_PENDING_DELETION";
    case -0x7ff8cd21:
      return "ERROR_IPSEC_QM_POLICY_PENDING_DELETION";
    }
  }
  else if (param_1 < -0x7ff8c567) {
    if (param_1 == -0x7ff8c568) {
      return "ERROR_EVT_INVALID_CHANNEL_PATH";
    }
    switch(param_1) {
    case -0x7ff8ca17:
      return "ERROR_IPSEC_IKE_AUTH_FAIL";
    case -0x7ff8ca16:
      return "ERROR_IPSEC_IKE_ATTRIB_FAIL";
    case -0x7ff8ca15:
      return "ERROR_IPSEC_IKE_NEGOTIATION_PENDING";
    case -0x7ff8ca14:
      return "ERROR_IPSEC_IKE_GENERAL_PROCESSING_ERROR";
    case -0x7ff8ca13:
      return "ERROR_IPSEC_IKE_TIMED_OUT";
    case -0x7ff8ca12:
      return "ERROR_IPSEC_IKE_NO_CERT";
    case -0x7ff8ca11:
      return "ERROR_IPSEC_IKE_SA_DELETED";
    case -0x7ff8ca10:
      return "ERROR_IPSEC_IKE_SA_REAPED";
    case -0x7ff8ca0f:
      return "ERROR_IPSEC_IKE_MM_ACQUIRE_DROP";
    case -0x7ff8ca0e:
      return "ERROR_IPSEC_IKE_QM_ACQUIRE_DROP";
    case -0x7ff8ca0d:
      return "ERROR_IPSEC_IKE_QUEUE_DROP_MM";
    case -0x7ff8ca0c:
      return "ERROR_IPSEC_IKE_QUEUE_DROP_NO_MM";
    case -0x7ff8ca0b:
      return "ERROR_IPSEC_IKE_DROP_NO_RESPONSE";
    case -0x7ff8ca0a:
      return "ERROR_IPSEC_IKE_MM_DELAY_DROP";
    case -0x7ff8ca09:
      return "ERROR_IPSEC_IKE_QM_DELAY_DROP";
    case -0x7ff8ca08:
      return "ERROR_IPSEC_IKE_ERROR";
    case -0x7ff8ca07:
      return "ERROR_IPSEC_IKE_CRL_FAILED";
    case -0x7ff8ca06:
      return "ERROR_IPSEC_IKE_INVALID_KEY_USAGE";
    case -0x7ff8ca05:
      return "ERROR_IPSEC_IKE_INVALID_CERT_TYPE";
    case -0x7ff8ca04:
      return "ERROR_IPSEC_IKE_NO_PRIVATE_KEY";
    case -0x7ff8ca03:
      return "ERROR_IPSEC_IKE_SIMULTANEOUS_REKEY";
    case -0x7ff8ca02:
      return "ERROR_IPSEC_IKE_DH_FAIL";
    case -0x7ff8ca01:
      return "ERROR_IPSEC_IKE_CRITICAL_PAYLOAD_NOT_RECOGNIZED";
    case -0x7ff8ca00:
      return "ERROR_IPSEC_IKE_INVALID_HEADER";
    case -0x7ff8c9ff:
      return "ERROR_IPSEC_IKE_NO_POLICY";
    case -0x7ff8c9fe:
      return "ERROR_IPSEC_IKE_INVALID_SIGNATURE";
    case -0x7ff8c9fd:
      return "ERROR_IPSEC_IKE_KERBEROS_ERROR";
    case -0x7ff8c9fc:
      return "ERROR_IPSEC_IKE_NO_PUBLIC_KEY";
    case -0x7ff8c9fb:
      return "ERROR_IPSEC_IKE_PROCESS_ERR";
    case -0x7ff8c9fa:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_SA";
    case -0x7ff8c9f9:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_PROP";
    case -0x7ff8c9f8:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_TRANS";
    case -0x7ff8c9f7:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_KE";
    case -0x7ff8c9f6:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_ID";
    case -0x7ff8c9f5:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_CERT";
    case -0x7ff8c9f4:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_CERT_REQ";
    case -0x7ff8c9f3:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_HASH";
    case -0x7ff8c9f2:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_SIG";
    case -0x7ff8c9f1:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_NONCE";
    case -0x7ff8c9f0:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_NOTIFY";
    case -0x7ff8c9ef:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_DELETE";
    case -0x7ff8c9ee:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_VENDOR";
    case -0x7ff8c9ed:
      return "ERROR_IPSEC_IKE_INVALID_PAYLOAD";
    case -0x7ff8c9ec:
      return "ERROR_IPSEC_IKE_LOAD_SOFT_SA";
    case -0x7ff8c9eb:
      return "ERROR_IPSEC_IKE_SOFT_SA_TORN_DOWN";
    case -0x7ff8c9ea:
      return "ERROR_IPSEC_IKE_INVALID_COOKIE";
    case -0x7ff8c9e9:
      return "ERROR_IPSEC_IKE_NO_PEER_CERT";
    case -0x7ff8c9e8:
      return "ERROR_IPSEC_IKE_PEER_CRL_FAILED";
    case -0x7ff8c9e7:
      return "ERROR_IPSEC_IKE_POLICY_CHANGE";
    case -0x7ff8c9e6:
      return "ERROR_IPSEC_IKE_NO_MM_POLICY";
    case -0x7ff8c9e5:
      return "ERROR_IPSEC_IKE_NOTCBPRIV";
    case -0x7ff8c9e4:
      return "ERROR_IPSEC_IKE_SECLOADFAIL";
    case -0x7ff8c9e3:
      return "ERROR_IPSEC_IKE_FAILSSPINIT";
    case -0x7ff8c9e2:
      return "ERROR_IPSEC_IKE_FAILQUERYSSP";
    case -0x7ff8c9e1:
      return "ERROR_IPSEC_IKE_SRVACQFAIL";
    case -0x7ff8c9e0:
      return "ERROR_IPSEC_IKE_SRVQUERYCRED";
    case -0x7ff8c9df:
      return "ERROR_IPSEC_IKE_GETSPIFAIL";
    case -0x7ff8c9de:
      return "ERROR_IPSEC_IKE_INVALID_FILTER";
    case -0x7ff8c9dd:
      return "ERROR_IPSEC_IKE_OUT_OF_MEMORY";
    case -0x7ff8c9dc:
      return "ERROR_IPSEC_IKE_ADD_UPDATE_KEY_FAILED";
    case -0x7ff8c9db:
      return "ERROR_IPSEC_IKE_INVALID_POLICY";
    case -0x7ff8c9da:
      return "ERROR_IPSEC_IKE_UNKNOWN_DOI";
    case -0x7ff8c9d9:
      return "ERROR_IPSEC_IKE_INVALID_SITUATION";
    case -0x7ff8c9d8:
      return "ERROR_IPSEC_IKE_DH_FAILURE";
    case -0x7ff8c9d7:
      return "ERROR_IPSEC_IKE_INVALID_GROUP";
    case -0x7ff8c9d6:
      return "ERROR_IPSEC_IKE_ENCRYPT";
    case -0x7ff8c9d5:
      return "ERROR_IPSEC_IKE_DECRYPT";
    case -0x7ff8c9d4:
      return "ERROR_IPSEC_IKE_POLICY_MATCH";
    case -0x7ff8c9d3:
      return "ERROR_IPSEC_IKE_UNSUPPORTED_ID";
    case -0x7ff8c9d2:
      return "ERROR_IPSEC_IKE_INVALID_HASH";
    case -0x7ff8c9d1:
      return "ERROR_IPSEC_IKE_INVALID_HASH_ALG";
    case -0x7ff8c9d0:
      return "ERROR_IPSEC_IKE_INVALID_HASH_SIZE";
    case -0x7ff8c9cf:
      return "ERROR_IPSEC_IKE_INVALID_ENCRYPT_ALG";
    case -0x7ff8c9ce:
      return "ERROR_IPSEC_IKE_INVALID_AUTH_ALG";
    case -0x7ff8c9cd:
      return "ERROR_IPSEC_IKE_INVALID_SIG";
    case -0x7ff8c9cc:
      return "ERROR_IPSEC_IKE_LOAD_FAILED";
    case -0x7ff8c9cb:
      return "ERROR_IPSEC_IKE_RPC_DELETE";
    case -0x7ff8c9ca:
      return "ERROR_IPSEC_IKE_BENIGN_REINIT";
    case -0x7ff8c9c9:
      return "ERROR_IPSEC_IKE_INVALID_RESPONDER_LIFETIME_NOTIFY";
    case -0x7ff8c9c8:
      return "ERROR_IPSEC_IKE_INVALID_MAJOR_VERSION";
    case -0x7ff8c9c7:
      return "ERROR_IPSEC_IKE_INVALID_CERT_KEYLEN";
    case -0x7ff8c9c6:
      return "ERROR_IPSEC_IKE_MM_LIMIT";
    case -0x7ff8c9c5:
      return "ERROR_IPSEC_IKE_NEGOTIATION_DISABLED";
    case -0x7ff8c9c4:
      return "ERROR_IPSEC_IKE_QM_LIMIT";
    case -0x7ff8c9c3:
      return "ERROR_IPSEC_IKE_MM_EXPIRED";
    case -0x7ff8c9c2:
      return "ERROR_IPSEC_IKE_PEER_MM_ASSUMED_INVALID";
    case -0x7ff8c9c1:
      return "ERROR_IPSEC_IKE_CERT_CHAIN_POLICY_MISMATCH";
    case -0x7ff8c9c0:
      return "ERROR_IPSEC_IKE_UNEXPECTED_MESSAGE_ID";
    case -0x7ff8c9bf:
      return "ERROR_IPSEC_IKE_INVALID_AUTH_PAYLOAD";
    case -0x7ff8c9be:
      return "ERROR_IPSEC_IKE_DOS_COOKIE_SENT";
    case -0x7ff8c9bd:
      return "ERROR_IPSEC_IKE_SHUTTING_DOWN";
    case -0x7ff8c9bc:
      return "ERROR_IPSEC_IKE_CGA_AUTH_FAILED";
    case -0x7ff8c9bb:
      return "ERROR_IPSEC_IKE_PROCESS_ERR_NATOA";
    case -0x7ff8c9ba:
      return "ERROR_IPSEC_IKE_INVALID_MM_FOR_QM";
    case -0x7ff8c9b9:
      return "ERROR_IPSEC_IKE_QM_EXPIRED";
    case -0x7ff8c9b8:
      return "ERROR_IPSEC_IKE_TOO_MANY_FILTERS";
    case -0x7ff8c9b7:
      return "ERROR_IPSEC_IKE_NEG_STATUS_END";
    case -0x7ff8c9b6:
      return "ERROR_IPSEC_IKE_KILL_DUMMY_NAP_TUNNEL";
    case -0x7ff8c9b4:
      return "ERROR_IPSEC_IKE_NEG_STATUS_EXTENDED_END";
    case -0x7ff8c9aa:
      return "ERROR_IPSEC_BAD_SPI";
    case -0x7ff8c9a9:
      return "ERROR_IPSEC_SA_LIFETIME_EXPIRED";
    case -0x7ff8c9a8:
      return "ERROR_IPSEC_WRONG_SA";
    case -0x7ff8c9a7:
      return "ERROR_IPSEC_REPLAY_CHECK_FAILED";
    case -0x7ff8c9a6:
      return "ERROR_IPSEC_INVALID_PACKET";
    case -0x7ff8c9a5:
      return "ERROR_IPSEC_INTEGRITY_CHECK_FAILED";
    case -0x7ff8c9a4:
      return "ERROR_IPSEC_CLEAR_TEXT_DROP";
    case -0x7ff8c950:
      return "ERROR_SXS_SECTION_NOT_FOUND";
    case -0x7ff8c94f:
      return "ERROR_SXS_CANT_GEN_ACTCTX";
    case -0x7ff8c94e:
      return "ERROR_SXS_INVALID_ACTCTXDATA_FORMAT";
    case -0x7ff8c94d:
      return "ERROR_SXS_ASSEMBLY_NOT_FOUND";
    case -0x7ff8c94c:
      return "ERROR_SXS_MANIFEST_FORMAT_ERROR";
    case -0x7ff8c94b:
      return "ERROR_SXS_MANIFEST_PARSE_ERROR";
    case -0x7ff8c94a:
      return "ERROR_SXS_ACTIVATION_CONTEXT_DISABLED";
    case -0x7ff8c949:
      return "ERROR_SXS_KEY_NOT_FOUND";
    case -0x7ff8c948:
      return "ERROR_SXS_VERSION_CONFLICT";
    case -0x7ff8c947:
      return "ERROR_SXS_WRONG_SECTION_TYPE";
    case -0x7ff8c946:
      return "ERROR_SXS_THREAD_QUERIES_DISABLED";
    case -0x7ff8c945:
      return "ERROR_SXS_PROCESS_DEFAULT_ALREADY_SET";
    case -0x7ff8c944:
      return "ERROR_SXS_UNKNOWN_ENCODING_GROUP";
    case -0x7ff8c943:
      return "ERROR_SXS_UNKNOWN_ENCODING";
    case -0x7ff8c942:
      return "ERROR_SXS_INVALID_XML_NAMESPACE_URI";
    case -0x7ff8c941:
      return "ERROR_SXS_ROOT_MANIFEST_DEPENDENCY_NOT_INSTALLED";
    case -0x7ff8c940:
      return "ERROR_SXS_LEAF_MANIFEST_DEPENDENCY_NOT_INSTALLED";
    case -0x7ff8c93f:
      return "ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE";
    case -0x7ff8c93e:
      return "ERROR_SXS_MANIFEST_MISSING_REQUIRED_DEFAULT_NAMESPACE";
    case -0x7ff8c93d:
      return "ERROR_SXS_MANIFEST_INVALID_REQUIRED_DEFAULT_NAMESPACE";
    case -0x7ff8c93c:
      return "ERROR_SXS_PRIVATE_MANIFEST_CROSS_PATH_WITH_REPARSE_POINT";
    case -0x7ff8c93b:
      return "ERROR_SXS_DUPLICATE_DLL_NAME";
    case -0x7ff8c93a:
      return "ERROR_SXS_DUPLICATE_WINDOWCLASS_NAME";
    case -0x7ff8c939:
      return "ERROR_SXS_DUPLICATE_CLSID";
    case -0x7ff8c938:
      return "ERROR_SXS_DUPLICATE_IID";
    case -0x7ff8c937:
      return "ERROR_SXS_DUPLICATE_TLBID";
    case -0x7ff8c936:
      return "ERROR_SXS_DUPLICATE_PROGID";
    case -0x7ff8c935:
      return "ERROR_SXS_DUPLICATE_ASSEMBLY_NAME";
    case -0x7ff8c934:
      return "ERROR_SXS_FILE_HASH_MISMATCH";
    case -0x7ff8c933:
      return "ERROR_SXS_POLICY_PARSE_ERROR";
    case -0x7ff8c932:
      return "ERROR_SXS_XML_E_MISSINGQUOTE";
    case -0x7ff8c931:
      return "ERROR_SXS_XML_E_COMMENTSYNTAX";
    case -0x7ff8c930:
      return "ERROR_SXS_XML_E_BADSTARTNAMECHAR";
    case -0x7ff8c92f:
      return "ERROR_SXS_XML_E_BADNAMECHAR";
    case -0x7ff8c92e:
      return "ERROR_SXS_XML_E_BADCHARINSTRING";
    case -0x7ff8c92d:
      return "ERROR_SXS_XML_E_XMLDECLSYNTAX";
    case -0x7ff8c92c:
      return "ERROR_SXS_XML_E_BADCHARDATA";
    case -0x7ff8c92b:
      return "ERROR_SXS_XML_E_MISSINGWHITESPACE";
    case -0x7ff8c92a:
      return "ERROR_SXS_XML_E_EXPECTINGTAGEND";
    case -0x7ff8c929:
      return "ERROR_SXS_XML_E_MISSINGSEMICOLON";
    case -0x7ff8c928:
      return "ERROR_SXS_XML_E_UNBALANCEDPAREN";
    case -0x7ff8c927:
      return "ERROR_SXS_XML_E_INTERNALERROR";
    case -0x7ff8c926:
      return "ERROR_SXS_XML_E_UNEXPECTED_WHITESPACE";
    case -0x7ff8c925:
      return "ERROR_SXS_XML_E_INCOMPLETE_ENCODING";
    case -0x7ff8c924:
      return "ERROR_SXS_XML_E_MISSING_PAREN";
    case -0x7ff8c923:
      return "ERROR_SXS_XML_E_EXPECTINGCLOSEQUOTE";
    case -0x7ff8c922:
      return "ERROR_SXS_XML_E_MULTIPLE_COLONS";
    case -0x7ff8c921:
      return "ERROR_SXS_XML_E_INVALID_DECIMAL";
    case -0x7ff8c920:
      return "ERROR_SXS_XML_E_INVALID_HEXIDECIMAL";
    case -0x7ff8c91f:
      return "ERROR_SXS_XML_E_INVALID_UNICODE";
    case -0x7ff8c91e:
      return "ERROR_SXS_XML_E_WHITESPACEORQUESTIONMARK";
    case -0x7ff8c91d:
      return "ERROR_SXS_XML_E_UNEXPECTEDENDTAG";
    case -0x7ff8c91c:
      return "ERROR_SXS_XML_E_UNCLOSEDTAG";
    case -0x7ff8c91b:
      return "ERROR_SXS_XML_E_DUPLICATEATTRIBUTE";
    case -0x7ff8c91a:
      return "ERROR_SXS_XML_E_MULTIPLEROOTS";
    case -0x7ff8c919:
      return "ERROR_SXS_XML_E_INVALIDATROOTLEVEL";
    case -0x7ff8c918:
      return "ERROR_SXS_XML_E_BADXMLDECL";
    case -0x7ff8c917:
      return "ERROR_SXS_XML_E_MISSINGROOT";
    case -0x7ff8c916:
      return "ERROR_SXS_XML_E_UNEXPECTEDEOF";
    case -0x7ff8c915:
      return "ERROR_SXS_XML_E_BADPEREFINSUBSET";
    case -0x7ff8c914:
      return "ERROR_SXS_XML_E_UNCLOSEDSTARTTAG";
    case -0x7ff8c913:
      return "ERROR_SXS_XML_E_UNCLOSEDENDTAG";
    case -0x7ff8c912:
      return "ERROR_SXS_XML_E_UNCLOSEDSTRING";
    case -0x7ff8c911:
      return "ERROR_SXS_XML_E_UNCLOSEDCOMMENT";
    case -0x7ff8c910:
      return "ERROR_SXS_XML_E_UNCLOSEDDECL";
    case -0x7ff8c90f:
      return "ERROR_SXS_XML_E_UNCLOSEDCDATA";
    case -0x7ff8c90e:
      return "ERROR_SXS_XML_E_RESERVEDNAMESPACE";
    case -0x7ff8c90d:
      return "ERROR_SXS_XML_E_INVALIDENCODING";
    case -0x7ff8c90c:
      return "ERROR_SXS_XML_E_INVALIDSWITCH";
    case -0x7ff8c90b:
      return "ERROR_SXS_XML_E_BADXMLCASE";
    case -0x7ff8c90a:
      return "ERROR_SXS_XML_E_INVALID_STANDALONE";
    case -0x7ff8c909:
      return "ERROR_SXS_XML_E_UNEXPECTED_STANDALONE";
    case -0x7ff8c908:
      return "ERROR_SXS_XML_E_INVALID_VERSION";
    case -0x7ff8c907:
      return "ERROR_SXS_XML_E_MISSINGEQUALS";
    case -0x7ff8c906:
      return "ERROR_SXS_PROTECTION_RECOVERY_FAILED";
    case -0x7ff8c905:
      return "ERROR_SXS_PROTECTION_PUBLIC_KEY_TOO_SHORT";
    case -0x7ff8c904:
      return "ERROR_SXS_PROTECTION_CATALOG_NOT_VALID";
    case -0x7ff8c903:
      return "ERROR_SXS_UNTRANSLATABLE_HRESULT";
    case -0x7ff8c902:
      return "ERROR_SXS_PROTECTION_CATALOG_FILE_MISSING";
    case -0x7ff8c901:
      return "ERROR_SXS_MISSING_ASSEMBLY_IDENTITY_ATTRIBUTE";
    case -0x7ff8c900:
      return "ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE_NAME";
    case -0x7ff8c8ff:
      return "ERROR_SXS_ASSEMBLY_MISSING";
    case -0x7ff8c8fe:
      return "ERROR_SXS_CORRUPT_ACTIVATION_STACK";
    case -0x7ff8c8fd:
      return "ERROR_SXS_CORRUPTION";
    case -0x7ff8c8fc:
      return "ERROR_SXS_EARLY_DEACTIVATION";
    case -0x7ff8c8fb:
      return "ERROR_SXS_INVALID_DEACTIVATION";
    case -0x7ff8c8fa:
      return "ERROR_SXS_MULTIPLE_DEACTIVATION";
    case -0x7ff8c8f9:
      return "ERROR_SXS_PROCESS_TERMINATION_REQUESTED";
    case -0x7ff8c8f8:
      return "ERROR_SXS_RELEASE_ACTIVATION_CONTEXT";
    case -0x7ff8c8f7:
      return "ERROR_SXS_SYSTEM_DEFAULT_ACTIVATION_CONTEXT_EMPTY";
    case -0x7ff8c8f6:
      return "ERROR_SXS_INVALID_IDENTITY_ATTRIBUTE_VALUE";
    case -0x7ff8c8f5:
      return "ERROR_SXS_INVALID_IDENTITY_ATTRIBUTE_NAME";
    case -0x7ff8c8f4:
      return "ERROR_SXS_IDENTITY_DUPLICATE_ATTRIBUTE";
    case -0x7ff8c8f3:
      return "ERROR_SXS_IDENTITY_PARSE_ERROR";
    case -0x7ff8c8f2:
      return "ERROR_MALFORMED_SUBSTITUTION_STRING";
    case -0x7ff8c8f1:
      return "ERROR_SXS_INCORRECT_PUBLIC_KEY_TOKEN";
    case -0x7ff8c8f0:
      return "ERROR_UNMAPPED_SUBSTITUTION_STRING";
    case -0x7ff8c8ef:
      return "ERROR_SXS_ASSEMBLY_NOT_LOCKED";
    case -0x7ff8c8ee:
      return "ERROR_SXS_COMPONENT_STORE_CORRUPT";
    case -0x7ff8c8ed:
      return "ERROR_ADVANCED_INSTALLER_FAILED";
    case -0x7ff8c8ec:
      return "ERROR_XML_ENCODING_MISMATCH";
    case -0x7ff8c8eb:
      return "ERROR_SXS_MANIFEST_IDENTITY_SAME_BUT_CONTENTS_DIFFERENT";
    case -0x7ff8c8ea:
      return "ERROR_SXS_IDENTITIES_DIFFERENT";
    case -0x7ff8c8e9:
      return "ERROR_SXS_ASSEMBLY_IS_NOT_A_DEPLOYMENT";
    case -0x7ff8c8e8:
      return "ERROR_SXS_FILE_NOT_PART_OF_ASSEMBLY";
    case -0x7ff8c8e7:
      return "ERROR_SXS_MANIFEST_TOO_BIG";
    case -0x7ff8c8e6:
      return "ERROR_SXS_SETTING_NOT_REGISTERED";
    case -0x7ff8c8e5:
      return "ERROR_SXS_TRANSACTION_CLOSURE_INCOMPLETE";
    case -0x7ff8c8e4:
      return "ERROR_SMI_PRIMITIVE_INSTALLER_FAILED";
    case -0x7ff8c8e3:
      return "ERROR_GENERIC_COMMAND_FAILED";
    case -0x7ff8c8e2:
      return "ERROR_SXS_FILE_HASH_MISSING";
    }
  }
  else {
    if (-0x7ff8c4a0 < param_1) {
      if (-0x7ff8c49a < param_1) {
        if (param_1 == -0x7ff8c499) {
          return "ERROR_MCA_UNSUPPORTED_COLOR_TEMPERATURE";
        }
        if (param_1 != -0x7ff8c46e) {
          if (param_1 != -0x7ff8c43d) {
            pcVar1 = "Unknown Error";
            if (param_1 == 0) {
              pcVar1 = "ERROR_SUCCESS";
            }
            return pcVar1;
          }
          return "ERROR_SYSTEM_DEVICE_NOT_FOUND";
        }
        return "ERROR_AMBIGUOUS_SYSTEM_DEVICE";
      }
      if (param_1 == -0x7ff8c49a) {
        return "ERROR_MCA_INVALID_TECHNOLOGY_TYPE_RETURNED";
      }
      if (param_1 == -0x7ff8c49f) {
        return "ERROR_MCA_INVALID_VCP_VERSION";
      }
      if (param_1 == -0x7ff8c49e) {
        return "ERROR_MCA_MONITOR_VIOLATES_MCCS_SPECIFICATION";
      }
      if (param_1 == -0x7ff8c49d) {
        return "ERROR_MCA_MCCS_VERSION_MISMATCH";
      }
      if (param_1 == -0x7ff8c49c) {
        return "ERROR_MCA_UNSUPPORTED_MCCS_VERSION";
      }
      pcVar1 = "ERROR_MCA_INTERNAL_ERROR";
      bVar2 = param_1 == -0x7ff8c49b;
      goto LAB_0042c5f5;
    }
    if (param_1 == -0x7ff8c4a0) {
      return "ERROR_MCA_INVALID_CAPABILITIES_STRING";
    }
    switch(param_1) {
    case -0x7ff8c567:
      return "ERROR_EVT_INVALID_QUERY";
    case -0x7ff8c566:
      return "ERROR_EVT_PUBLISHER_METADATA_NOT_FOUND";
    case -0x7ff8c565:
      return "ERROR_EVT_EVENT_TEMPLATE_NOT_FOUND";
    case -0x7ff8c564:
      return "ERROR_EVT_INVALID_PUBLISHER_NAME";
    case -0x7ff8c563:
      return "ERROR_EVT_INVALID_EVENT_DATA";
    case -0x7ff8c561:
      return "ERROR_EVT_CHANNEL_NOT_FOUND";
    case -0x7ff8c560:
      return "ERROR_EVT_MALFORMED_XML_TEXT";
    case -0x7ff8c55f:
      return "ERROR_EVT_SUBSCRIPTION_TO_DIRECT_CHANNEL";
    case -0x7ff8c55e:
      return "ERROR_EVT_CONFIGURATION_ERROR";
    case -0x7ff8c55d:
      return "ERROR_EVT_QUERY_RESULT_STALE";
    case -0x7ff8c55c:
      return "ERROR_EVT_QUERY_RESULT_INVALID_POSITION";
    case -0x7ff8c55b:
      return "ERROR_EVT_NON_VALIDATING_MSXML";
    case -0x7ff8c55a:
      return "ERROR_EVT_FILTER_ALREADYSCOPED";
    case -0x7ff8c559:
      return "ERROR_EVT_FILTER_NOTELTSET";
    case -0x7ff8c558:
      return "ERROR_EVT_FILTER_INVARG";
    case -0x7ff8c557:
      return "ERROR_EVT_FILTER_INVTEST";
    case -0x7ff8c556:
      return "ERROR_EVT_FILTER_INVTYPE";
    case -0x7ff8c555:
      return "ERROR_EVT_FILTER_PARSEERR";
    case -0x7ff8c554:
      return "ERROR_EVT_FILTER_UNSUPPORTEDOP";
    case -0x7ff8c553:
      return "ERROR_EVT_FILTER_UNEXPECTEDTOKEN";
    case -0x7ff8c552:
      return "ERROR_EVT_INVALID_OPERATION_OVER_ENABLED_DIRECT_CHANNEL";
    case -0x7ff8c551:
      return "ERROR_EVT_INVALID_CHANNEL_PROPERTY_VALUE";
    case -0x7ff8c550:
      return "ERROR_EVT_INVALID_PUBLISHER_PROPERTY_VALUE";
    case -0x7ff8c54f:
      return "ERROR_EVT_CHANNEL_CANNOT_ACTIVATE";
    case -0x7ff8c54e:
      return "ERROR_EVT_FILTER_TOO_COMPLEX";
    case -0x7ff8c54d:
      return "ERROR_EVT_MESSAGE_NOT_FOUND";
    case -0x7ff8c54c:
      return "ERROR_EVT_MESSAGE_ID_NOT_FOUND";
    case -0x7ff8c54b:
      return "ERROR_EVT_UNRESOLVED_VALUE_INSERT";
    case -0x7ff8c54a:
      return "ERROR_EVT_UNRESOLVED_PARAMETER_INSERT";
    case -0x7ff8c549:
      return "ERROR_EVT_MAX_INSERTS_REACHED";
    case -0x7ff8c548:
      return "ERROR_EVT_EVENT_DEFINITION_NOT_FOUND";
    case -0x7ff8c547:
      return "ERROR_EVT_MESSAGE_LOCALE_NOT_FOUND";
    case -0x7ff8c546:
      return "ERROR_EVT_VERSION_TOO_OLD";
    case -0x7ff8c545:
      return "ERROR_EVT_VERSION_TOO_NEW";
    case -0x7ff8c544:
      return "ERROR_EVT_CANNOT_OPEN_CHANNEL_OF_QUERY";
    case -0x7ff8c543:
      return "ERROR_EVT_PUBLISHER_DISABLED";
    case -0x7ff8c542:
      return "ERROR_EVT_FILTER_OUT_OF_RANGE";
    case -0x7ff8c518:
      return "ERROR_EC_SUBSCRIPTION_CANNOT_ACTIVATE";
    case -0x7ff8c517:
      return "ERROR_EC_LOG_DISABLED";
    case -0x7ff8c516:
      return "ERROR_EC_CIRCULAR_FORWARDING";
    case -0x7ff8c515:
      return "ERROR_EC_CREDSTORE_FULL";
    case -0x7ff8c514:
      return "ERROR_EC_CRED_NOT_FOUND";
    case -0x7ff8c513:
      return "ERROR_EC_NO_ACTIVE_CHANNEL";
    case -0x7ff8c504:
      return "ERROR_MUI_FILE_NOT_FOUND";
    case -0x7ff8c503:
      return "ERROR_MUI_INVALID_FILE";
    case -0x7ff8c502:
      return "ERROR_MUI_INVALID_RC_CONFIG";
    case -0x7ff8c501:
      return "ERROR_MUI_INVALID_LOCALE_NAME";
    case -0x7ff8c500:
      return "ERROR_MUI_INVALID_ULTIMATEFALLBACK_NAME";
    case -0x7ff8c4ff:
      return "ERROR_MUI_FILE_NOT_LOADED";
    case -0x7ff8c4fe:
      return "ERROR_RESOURCE_ENUM_USER_STOP";
    case -0x7ff8c4fd:
      return "ERROR_MUI_INTLSETTINGS_UILANG_NOT_INSTALLED";
    case -0x7ff8c4fc:
      return "ERROR_MUI_INTLSETTINGS_INVALID_LOCALE_NAME";
    }
  }
switchD_00428cb1_caseD_80070005:
  return "Unknown Error";
}



/* Function: FUN_0042fdb6 */

char * __fastcall FUN_0042fdb6(int param_1)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_1 < -0x3ffb4ffe) {
    if (param_1 == -0x3ffb4fff) {
      return "SL_E_SRV_INVALID_PUBLISH_LICENSE";
    }
    switch(param_1) {
    case -0x7ffb1eff:
      return "SL_E_SFS_INVALID_FS_VERSION";
    case -0x7ffb1efe:
      return "SL_E_SFS_INVALID_FD_TABLE";
    case -0x7ffb1efd:
      return "SL_E_SFS_INVALID_SYNC";
    case -0x7ffb1efc:
      return "SL_E_SFS_BAD_TOKEN_NAME";
    case -0x7ffb1efb:
      return "SL_E_SFS_BAD_TOKEN_EXT";
    case -0x7ffb1efa:
      return "SL_E_SFS_DUPLICATE_TOKEN_NAME";
    case -0x7ffb1ef9:
      return "SL_E_SFS_TOKEN_SIZE_MISMATCH";
    case -0x7ffb1ef8:
      return "SL_E_SFS_INVALID_TOKEN_DATA_HASH";
    case -0x7ffb1ef7:
      return "SL_E_SFS_FILE_READ_ERROR";
    case -0x7ffb1ef6:
      return "SL_E_SFS_FILE_WRITE_ERROR";
    case -0x7ffb1ef5:
      return "SL_E_SFS_INVALID_FILE_POSITION";
    }
  }
  else if (param_1 < -0x3ffb0ffc) {
    if (param_1 == -0x3ffb0ffd) {
      return "SL_E_USE_LICENSE_NOT_INSTALLED";
    }
    if (param_1 < -0x3ffb38ae) {
      if (param_1 == -0x3ffb38af) {
        return "SL_E_CHPA_UNKNOWN_PROPERTY_NAME";
      }
      if (param_1 < -0x3ffb3ff1) {
        if (param_1 == -0x3ffb3ff2) {
          return "SL_E_CHPA_INVALID_PRODUCT_KEY_LENGTH";
        }
        if (param_1 < -0x3ffb3ffd) {
          if (param_1 == -0x3ffb3ffe) {
            return "SL_E_CHPA_INVALID_BINDING";
          }
          if (param_1 < -0x3ffb4ff8) {
            if (param_1 == -0x3ffb4ff9) {
              return "SL_E_SRV_SERVER_PONG";
            }
            if (param_1 == -0x3ffb4ffe) {
              return "SL_E_SRV_INVALID_PRODUCT_KEY_LICENSE";
            }
            if (param_1 == -0x3ffb4ffd) {
              return "SL_E_SRV_INVALID_RIGHTS_ACCOUNT_LICENSE";
            }
            if (param_1 == -0x3ffb4ffc) {
              return "SL_E_SRV_INVALID_LICENSE_STRUCTURE";
            }
            if (param_1 == -0x3ffb4ffb) {
              return "SL_E_SRV_AUTHORIZATION_FAILED";
            }
            pcVar1 = "SL_E_SRV_INVALID_BINDING";
            bVar2 = param_1 == -0x3ffb4ffa;
          }
          else {
            if (param_1 == -0x3ffb4ff8) {
              return "SL_E_SRV_INVALID_PAYLOAD";
            }
            if (param_1 == -0x3ffb4ff7) {
              return "SL_E_SRV_INVALID_SECURITY_PROCESSOR_LICENSE";
            }
            if (param_1 == -0x3ffb4fef) {
              return "SL_E_SRV_CLIENT_CLOCK_OUT_OF_SYNC";
            }
            if (param_1 == -0x3ffb4f00) {
              return "SL_E_SRV_GENERAL_ERROR";
            }
            pcVar1 = "SL_E_CHPA_PRODUCT_KEY_OUT_OF_RANGE";
            bVar2 = param_1 == -0x3ffb3fff;
          }
LAB_00430223:
          if (!bVar2) {
            pcVar1 = "Unknown Error";
          }
          return pcVar1;
        }
        switch(param_1) {
        case -0x3ffb3ffd:
          return "SL_E_CHPA_PRODUCT_KEY_BLOCKED";
        case -0x3ffb3ffc:
          return "SL_E_CHPA_INVALID_PRODUCT_KEY";
        case -0x3ffb3ffb:
          return "SL_E_CHPA_BINDING_NOT_FOUND";
        case -0x3ffb3ffa:
          return "SL_E_CHPA_BINDING_MAPPING_NOT_FOUND";
        case -0x3ffb3ff9:
          return "SL_E_CHPA_UNSUPPORTED_PRODUCT_KEY";
        case -0x3ffb3ff8:
          return "SL_E_CHPA_MAXIMUM_UNLOCK_EXCEEDED";
        case -0x3ffb3ff7:
          return "SL_E_CHPA_ACTCONFIG_ID_NOT_FOUND";
        case -0x3ffb3ff6:
          return "SL_E_CHPA_INVALID_PRODUCT_DATA_ID";
        case -0x3ffb3ff5:
          return "SL_E_CHPA_INVALID_PRODUCT_DATA";
        case -0x3ffb3ff4:
          return "SL_E_CHPA_SYSTEM_ERROR";
        case -0x3ffb3ff3:
          return "SL_E_CHPA_INVALID_ACTCONFIG_ID";
        }
      }
      else {
        if (-0x3ffb3fb1 < param_1) {
          if (param_1 == -0x3ffb3fb0) {
            return "SL_E_CHPA_GENERAL_ERROR";
          }
          if (param_1 == -0x3ffb3bff) {
            return "SL_E_VGA_NON_GENUINE_STATUS_FIRST";
          }
          if (param_1 == -0x3ffb3a00) {
            return "SL_E_VGA_NON_GENUINE_STATUS_LAST";
          }
          if (param_1 == -0x3ffb3900) {
            return "SL_E_CHPA_BUSINESS_RULE_INPUT_NOT_FOUND";
          }
          pcVar1 = "SL_E_CHPA_NULL_VALUE_FOR_PROPERTY_NAME_OR_ID";
          bVar2 = param_1 == -0x3ffb38b0;
          goto LAB_00430223;
        }
        if (param_1 == -0x3ffb3fb1) {
          return "SL_E_CHPA_NO_RULES_TO_ACTIVATE";
        }
        switch(param_1) {
        case -0x3ffb3ff1:
          return "SL_E_CHPA_INVALID_PRODUCT_KEY_FORMAT";
        case -0x3ffb3ff0:
          return "SL_E_CHPA_INVALID_PRODUCT_KEY_CHAR";
        case -0x3ffb3fef:
          return "SL_E_CHPA_INVALID_BINDING_URI";
        case -0x3ffb3fee:
          return "SL_E_CHPA_NETWORK_ERROR";
        case -0x3ffb3fed:
          return "SL_E_CHPA_DATABASE_ERROR";
        case -0x3ffb3fec:
          return "SL_E_CHPA_INVALID_ARGUMENT";
        case -0x3ffb3feb:
          return "SL_E_CHPA_RESPONSE_NOT_AVAILABLE";
        case -0x3ffb3fea:
          return "SL_E_CHPA_OEM_SLP_COA0";
        case -0x3ffb3fe0:
          return "SL_E_CHPA_DMAK_LIMIT_EXCEEDED";
        case -0x3ffb3fdf:
          return "SL_E_CHPA_DMAK_EXTENSION_LIMIT_EXCEEDED";
        case -0x3ffb3fde:
          return "SL_E_CHPA_REISSUANCE_LIMIT_NOT_FOUND";
        case -0x3ffb3fdd:
          return "SL_E_CHPA_OVERRIDE_REQUEST_NOT_FOUND";
        case -0x3ffb3fd0:
          return "SL_E_CHPA_TIMEBASED_ACTIVATION_BEFORE_START_DATE";
        case -0x3ffb3fcf:
          return "SL_E_CHPA_TIMEBASED_ACTIVATION_AFTER_END_DATE";
        case -0x3ffb3fce:
          return "SL_E_CHPA_TIMEBASED_ACTIVATION_NOT_AVAILABLE";
        case -0x3ffb3fcd:
          return "SL_E_CHPA_TIMEBASED_PRODUCT_KEY_NOT_CONFIGURED";
        }
      }
    }
    else if (param_1 < -0x3ffb1ff4) {
      if (param_1 == -0x3ffb1ff5) {
        return "SL_E_TOKSTO_NO_ID_SET";
      }
      if (param_1 < -0x3ffb387e) {
        if (param_1 == -0x3ffb387f) {
          return "SL_E_CHPA_FAILED_TO_UPDATE_PRODUCT_KEY_RECORD";
        }
        if (param_1 < -0x3ffb38a5) {
          if (param_1 == -0x3ffb38a6) {
            return "SL_E_CHPA_FAILED_TO_INSERT_PRODUCT_KEY_PROPERTY";
          }
          if (param_1 == -0x3ffb38ae) {
            return "SL_E_CHPA_UNKNOWN_PROPERTY_ID";
          }
          if (param_1 == -0x3ffb38ab) {
            return "SL_E_CHPA_FAILED_TO_UPDATE_PRODUCTKEY_BINDING";
          }
          if (param_1 == -0x3ffb38aa) {
            return "SL_E_CHPA_FAILED_TO_INSERT_PRODUCTKEY_BINDING";
          }
          if (param_1 == -0x3ffb38a9) {
            return "SL_E_CHPA_FAILED_TO_DELETE_PRODUCTKEY_BINDING";
          }
          pcVar1 = "SL_E_CHPA_FAILED_TO_PROCESS_PRODUCT_KEY_BINDINGS_XML";
          bVar2 = param_1 == -0x3ffb38a8;
        }
        else {
          if (param_1 == -0x3ffb38a5) {
            return "SL_E_CHPA_FAILED_TO_UPDATE_PRODUCT_KEY_PROPERTY";
          }
          if (param_1 == -0x3ffb38a4) {
            return "SL_E_CHPA_FAILED_TO_DELETE_PRODUCT_KEY_PROPERTY";
          }
          if (param_1 == -0x3ffb389c) {
            return "SL_E_CHPA_UNKNOWN_PRODUCT_KEY_TYPE";
          }
          if (param_1 == -0x3ffb3890) {
            return "SL_E_CHPA_PRODUCT_KEY_BEING_USED";
          }
          pcVar1 = "SL_E_CHPA_FAILED_TO_INSERT_PRODUCT_KEY_RECORD";
          bVar2 = param_1 == -0x3ffb3880;
        }
        goto LAB_00430223;
      }
      switch(param_1) {
      case -0x3ffb1fff:
        return "SL_E_INVALID_CONTEXT";
      case -0x3ffb1ffe:
        return "SL_E_TOKEN_STORE_INVALID_STATE";
      case -0x3ffb1ffd:
        return "SL_E_EVALUATION_FAILED";
      case -0x3ffb1ffc:
        return "SL_E_NOT_EVALUATED";
      case -0x3ffb1ffb:
        return "SL_E_NOT_ACTIVATED";
      case -0x3ffb1ffa:
        return "SL_E_INVALID_GUID";
      case -0x3ffb1ff9:
        return "SL_E_TOKSTO_TOKEN_NOT_FOUND";
      case -0x3ffb1ff8:
        return "SL_E_TOKSTO_NO_PROPERTIES";
      case -0x3ffb1ff7:
        return "SL_E_TOKSTO_NOT_INITIALIZED";
      case -0x3ffb1ff6:
        return "SL_E_TOKSTO_ALREADY_INITIALIZED";
      }
    }
    else {
      if (-0x3ffb0fff < param_1) {
        pcVar1 = "SL_E_RIGHT_NOT_CONSUMED";
        bVar2 = param_1 == -0x3ffb0ffe;
        goto LAB_00430223;
      }
      if (param_1 == -0x3ffb0fff) {
        return "SL_E_INTERNAL_ERROR";
      }
      switch(param_1) {
      case -0x3ffb1ff4:
        return "SL_E_TOKSTO_CANT_CREATE_FILE";
      case -0x3ffb1ff3:
        return "SL_E_TOKSTO_CANT_WRITE_TO_FILE";
      case -0x3ffb1ff2:
        return "SL_E_TOKSTO_CANT_READ_FILE";
      case -0x3ffb1ff1:
        return "SL_E_TOKSTO_CANT_PARSE_PROPERTIES";
      case -0x3ffb1ff0:
        return "SL_E_TOKSTO_PROPERTY_NOT_FOUND";
      case -0x3ffb1fef:
        return "SL_E_TOKSTO_INVALID_FILE";
      case -0x3ffb1fee:
        return "SL_E_TOKSTO_CANT_CREATE_MUTEX";
      case -0x3ffb1fed:
        return "SL_E_TOKSTO_CANT_ACQUIRE_MUTEX";
      case -0x3ffb1fec:
        return "SL_E_TOKSTO_NO_TOKEN_DATA";
      case -0x3ffb1feb:
        return "SL_E_EUL_CONSUMPTION_FAILED";
      case -0x3ffb1fea:
        return "SL_E_PKEY_INVALID_CONFIG";
      case -0x3ffb1fe9:
        return "SL_E_PKEY_INVALID_UNIQUEID";
      case -0x3ffb1fe8:
        return "SL_E_PKEY_INVALID_ALGORITHM";
      case -0x3ffb1fe7:
        return "SL_E_PKEY_INTERNAL_ERROR";
      case -0x3ffb1fe6:
        return "SL_E_LICENSE_INVALID_ADDON_INFO";
      case -0x3ffb1fe5:
        return "SL_E_HWID_ERROR";
      case -0x3ffb1fe4:
        return "SL_E_PKEY_INVALID_KEYCHANGE1";
      case -0x3ffb1fe3:
        return "SL_E_PKEY_INVALID_KEYCHANGE2";
      case -0x3ffb1fe2:
        return "SL_E_PKEY_INVALID_KEYCHANGE3";
      case -0x3ffb1fe1:
        return "SL_E_PKEY_INVALID_KEYCHANGE4";
      }
    }
  }
  else if (param_1 < -0x3ffb0fb8) {
    if (param_1 == -0x3ffb0fb9) {
      return "SL_E_PROXY_POLICY_NOT_UPDATED";
    }
    switch(param_1) {
    case -0x3ffb0ffc:
      return "SL_E_MISMATCHED_PKEY_RANGE";
    case -0x3ffb0ffb:
      return "SL_E_MISMATCHED_PID";
    case -0x3ffb0ffa:
      return "SL_E_EXTERNAL_SIGNATURE_NOT_FOUND";
    case -0x3ffb0ff9:
      return "SL_E_RAC_NOT_AVAILABLE";
    case -0x3ffb0ff8:
      return "SL_E_SPC_NOT_AVAILABLE";
    case -0x3ffb0ff7:
      return "SL_E_GRACE_TIME_EXPIRED";
    case -0x3ffb0ff6:
      return "SL_E_MISMATCHED_APPID";
    case -0x3ffb0ff5:
      return "SL_E_NO_PID_CONFIG_DATA";
    case -0x3ffb0ff2:
      return "SL_E_MISMATCHED_SECURITY_PROCESSOR";
    case -0x3ffb0ff1:
      return "SL_E_OUT_OF_TOLERANCE";
    case -0x3ffb0ff0:
      return "SL_E_INVALID_PKEY";
    case -0x3ffb0fef:
      return "SL_E_LICENSE_FILE_NOT_INSTALLED";
    case -0x3ffb0fee:
      return "SL_E_VALUE_NOT_FOUND";
    case -0x3ffb0fed:
      return "SL_E_RIGHT_NOT_GRANTED";
    case -0x3ffb0fec:
      return "SL_E_PKEY_NOT_INSTALLED";
    case -0x3ffb0feb:
      return "SL_E_PRODUCT_SKU_NOT_INSTALLED";
    case -0x3ffb0fea:
      return "SL_E_NOT_SUPPORTED";
    case -0x3ffb0fe9:
      return "SL_E_PUBLISHING_LICENSE_NOT_INSTALLED";
    case -0x3ffb0fe8:
      return "SL_E_LICENSE_SERVER_URL_NOT_FOUND";
    case -0x3ffb0fe7:
      return "SL_E_INVALID_EVENT_ID";
    case -0x3ffb0fe6:
      return "SL_E_EVENT_NOT_REGISTERED";
    case -0x3ffb0fe5:
      return "SL_E_EVENT_ALREADY_REGISTERED";
    case -0x3ffb0fe4:
      return "SL_E_DECRYPTION_LICENSES_NOT_AVAILABLE";
    case -0x3ffb0fe3:
      return "SL_E_LICENSE_SIGNATURE_VERIFICATION_FAILED";
    case -0x3ffb0fe2:
      return "SL_E_DATATYPE_MISMATCHED";
    case -0x3ffb0fe1:
      return "SL_E_INVALID_LICENSE";
    case -0x3ffb0fe0:
      return "SL_E_INVALID_PACKAGE";
    case -0x3ffb0fdf:
      return "SL_E_VALIDITY_TIME_EXPIRED";
    case -0x3ffb0fde:
      return "SL_E_LICENSE_AUTHORIZATION_FAILED";
    case -0x3ffb0fdd:
      return "SL_E_LICENSE_DECRYPTION_FAILED";
    case -0x3ffb0fdc:
      return "SL_E_WINDOWS_INVALID_LICENSE_STATE";
    case -0x3ffb0fdb:
      return "SL_E_LUA_ACCESSDENIED";
    case -0x3ffb0fda:
      return "SL_E_PROXY_KEY_NOT_FOUND";
    case -0x3ffb0fd9:
      return "SL_E_TAMPER_DETECTED";
    case -0x3ffb0fd8:
      return "SL_E_POLICY_CACHE_INVALID";
    case -0x3ffb0fd7:
      return "SL_E_INVALID_RUNNING_MODE";
    case -0x3ffb0fd6:
      return "SL_E_SLP_NOT_SIGNED";
    case -0x3ffb0fd4:
      return "SL_E_CIDIID_INVALID_DATA";
    case -0x3ffb0fd3:
      return "SL_E_CIDIID_INVALID_VERSION";
    case -0x3ffb0fd2:
      return "SL_E_CIDIID_VERSION_NOT_SUPPORTED";
    case -0x3ffb0fd1:
      return "SL_E_CIDIID_INVALID_DATA_LENGTH";
    case -0x3ffb0fd0:
      return "SL_E_CIDIID_NOT_DEPOSITED";
    case -0x3ffb0fcf:
      return "SL_E_CIDIID_MISMATCHED";
    case -0x3ffb0fce:
      return "SL_E_INVALID_BINDING_BLOB";
    case -0x3ffb0fcd:
      return "SL_E_PRODUCT_KEY_INSTALLATION_NOT_ALLOWED";
    case -0x3ffb0fcc:
      return "SL_E_EUL_NOT_AVAILABLE";
    case -0x3ffb0fcb:
      return "SL_E_VL_NOT_WINDOWS_SLP";
    case -0x3ffb0fc8:
      return "SL_E_VL_NOT_ENOUGH_COUNT";
    case -0x3ffb0fc7:
      return "SL_E_VL_BINDING_SERVICE_NOT_ENABLED";
    case -0x3ffb0fbf:
      return "SL_E_VL_KEY_MANAGEMENT_SERVICE_NOT_ACTIVATED";
    case -0x3ffb0fbe:
      return "SL_E_VL_KEY_MANAGEMENT_SERVICE_ID_MISMATCH";
    }
  }
  else if (param_1 < -0x3ffb03fa) {
    if (param_1 == -0x3ffb03fb) {
      return "SL_E_VALIDITY_PERIOD_EXPIRED";
    }
    switch(param_1) {
    case -0x3ffb0fb3:
      return "SL_E_CIDIID_INVALID_CHECK_DIGITS";
    case -0x3ffb0fb1:
      return "SL_E_LICENSE_MANAGEMENT_DATA_NOT_FOUND";
    case -0x3ffb0fb0:
      return "SL_E_INVALID_PRODUCT_KEY";
    case -0x3ffb0faf:
      return "SL_E_BLOCKED_PRODUCT_KEY";
    case -0x3ffb0fae:
      return "SL_E_DUPLICATE_POLICY";
    case -0x3ffb0fad:
      return "SL_E_MISSING_OVERRIDE_ONLY_ATTRIBUTE";
    case -0x3ffb0fac:
      return "SL_E_LICENSE_MANAGEMENT_DATA_DUPLICATED";
    case -0x3ffb0fab:
      return "SL_E_BASE_SKU_NOT_AVAILABLE";
    case -0x3ffb0faa:
      return "SL_E_VL_MACHINE_NOT_BOUND";
    case -0x3ffb0fa9:
      return "SL_E_SLP_MISSING_ACPI_SLIC";
    case -0x3ffb0fa8:
      return "SL_E_SLP_MISSING_SLP_MARKER";
    case -0x3ffb0fa7:
      return "SL_E_SLP_BAD_FORMAT";
    case -0x3ffb0fa0:
      return "SL_E_INVALID_PACKAGE_VERSION";
    case -0x3ffb0f9f:
      return "SL_E_PKEY_INVALID_UPGRADE";
    case -0x3ffb0f9e:
      return "SL_E_ISSUANCE_LICENSE_NOT_INSTALLED";
    case -0x3ffb0f9d:
      return "SL_E_SLP_OEM_CERT_MISSING";
    case -0x3ffb0f9c:
      return "SL_E_NONGENUINE_GRACE_TIME_EXPIRED";
    case -0x3ffb0f9a:
      return "SL_E_DEPENDENT_PROPERTY_NOT_SET";
    case -0x3ffb0f99:
      return "SL_E_NONGENUINE_GRACE_TIME_EXPIRED_2";
    case -0x3ffb0f97:
      return "SL_E_MISMATCHED_PRODUCT_SKU";
    case -0x3ffb0f96:
      return "SL_E_OPERATION_NOT_ALLOWED";
    case -0x3ffb0f95:
      return "SL_E_VL_KEY_MANAGEMENT_SERVICE_VM_NOT_SUPPORTED";
    case -0x3ffb0f94:
      return "SL_E_VL_INVALID_TIMESTAMP";
    case -0x3ffb0f90:
      return "SL_E_PLUGIN_ALREADY_REGISTERED";
    case -0x3ffb0f8f:
      return "SL_E_PLUGIN_INVALID_MANIFEST";
    case -0x3ffb0f8e:
      return "SL_E_APPLICATION_POLICIES_MISSING";
    case -0x3ffb0f8d:
      return "SL_E_APPLICATION_POLICIES_NOT_LOADED";
    case -0x3ffb0f8c:
      return "SL_E_VL_BINDING_SERVICE_UNAVAILABLE";
    }
  }
  else if (param_1 < 0x4004f041) {
    if (param_1 == 0x4004f040) {
      return "SL_E_VL_INFO_PRODUCT_USER_RIGHT";
    }
    switch(param_1) {
    case -0x3ffb02ff:
      return "SL_E_CAL_NOT_FOUND";
    case -0x3ffb02fe:
      return "SL_E_FREE_CAL_NOT_FOUND";
    case -0x3ffb02fd:
      return "SL_E_CAL_CLASS_UNKNOWN";
    case -0x3ffb02fc:
      return "SL_E_CAL_PRINCIPAL_UNKNOWN";
    case -0x3ffb02fb:
      return "SL_E_CAL_PRINCIPAL_UNEXPECTED_TYPE";
    case -0x3ffb02fa:
      return "SL_E_CAL_STORE_ENDOFROWSET";
    case -0x3ffb02f9:
      return "SL_E_CAL_STORE_COLUMNISNULL";
    case -0x3ffb02f8:
      return "SL_E_CAL_PRINCIPAL_INVALID";
    case -0x3ffb02f7:
      return "SL_E_TAMPER_RECOVERY_REQUIRES_ACTIVATION";
    }
  }
  return "Unknown Error";
}



/* Function: FUN_004307cc */

char * __fastcall FUN_004307cc(int param_1)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_1 < -0x71a1fba4) {
    if (param_1 == -0x71a1fba5) {
      return "JET_errInvalidInstance";
    }
    if (param_1 < -0x71a1fdbb) {
      if (param_1 == -0x71a1fdbc) {
        return "JET_errDatabasesNotFromSameSnapshot";
      }
      if (param_1 < -0x71a1fdf1) {
        if (param_1 == -0x71a1fdf2) {
          return "JET_errInvalidBackup";
        }
        if (param_1 < -0x71a1fea5) {
          if (param_1 == -0x71a1fea6) {
            return "JET_errKeyTruncated";
          }
          if (param_1 < -0x71a1febc) {
            if (param_1 == -0x71a1febd) {
              return "JET_errPageBoundary";
            }
            if (param_1 < -0x71a1ff98) {
              if (param_1 == -0x71a1ff99) {
                return "JET_errOutOfThreads";
              }
              if (param_1 == -0x7ff8fff2) {
                return "JET_errOutOfMemory";
              }
              if (param_1 == -0x71a1ffff) {
                return "JET_wrnNyi";
              }
              if (param_1 == -0x71a1ff9c) {
                return "JET_errRfsFailure";
              }
              if (param_1 == -0x71a1ff9b) {
                return "JET_errRfsNotArmed";
              }
              pcVar1 = "JET_errFileClose";
              bVar2 = param_1 == -0x71a1ff9a;
            }
            else {
              if (param_1 == -0x71a1ff97) {
                return "JET_errTooManyIO";
              }
              if (param_1 == -0x71a1ff96) {
                return "JET_errTaskDropped";
              }
              if (param_1 == -0x71a1ff95) {
                return "JET_errInternalError";
              }
              if (param_1 == -0x71a1ff01) {
                return "JET_errDatabaseBufferDependenciesCorrupted";
              }
              pcVar1 = "JET_errPreviousVersion";
              bVar2 = param_1 == -0x71a1febe;
            }
            goto LAB_0043139e;
          }
          switch(param_1) {
          case -0x71a1febc:
            return "JET_errKeyBoundary";
          case -0x71a1feb9:
            return "JET_errBadPageLink";
          case -0x71a1feb8:
            return "JET_errBadBookmark";
          case -0x71a1feb2:
            return "JET_errNTSystemCallFailed";
          case -0x71a1feae:
            return "JET_errBadParentPageLink";
          case -0x71a1feac:
            return "JET_errSPAvailExtCacheOutOfSync";
          case -0x71a1feab:
            return "JET_errSPAvailExtCorrupted";
          case -0x71a1feaa:
            return "JET_errSPAvailExtCacheOutOfMemory";
          case -0x71a1fea9:
            return "JET_errSPOwnExtCorrupted";
          case -0x71a1fea8:
            return "JET_errDbTimeCorrupted";
          }
        }
        else {
          if (param_1 < -0x71a1fdfe) {
            if (param_1 == -0x71a1fdff) {
              return "JET_errLogGenerationMismatch";
            }
            if (param_1 < -0x71a1fe06) {
              if (param_1 == -0x71a1fe07) {
                return "JET_errBackupInProgress";
              }
              if (param_1 == -0x71a1fe68) {
                return "JET_errKeyTooBig";
              }
              if (param_1 == -0x71a1fe0c) {
                return "JET_errInvalidLoggedOperation";
              }
              if (param_1 == -0x71a1fe0b) {
                return "JET_errLogFileCorrupt";
              }
              if (param_1 == -0x71a1fe09) {
                return "JET_errNoBackupDirectory";
              }
              pcVar1 = "JET_errBackupDirectoryNotEmpty";
              bVar2 = param_1 == -0x71a1fe08;
            }
            else {
              if (param_1 == -0x71a1fe06) {
                return "JET_errRestoreInProgress";
              }
              if (param_1 == -0x71a1fe03) {
                return "JET_errMissingPreviousLogFile";
              }
              if (param_1 == -0x71a1fe02) {
                return "JET_errLogWriteFail";
              }
              if (param_1 == -0x71a1fe01) {
                return "JET_errLogDisabledDueToRecoveryFailure";
              }
              pcVar1 = "JET_errCannotLogDuringRecoveryRedo";
              bVar2 = param_1 == -0x71a1fe00;
            }
            goto LAB_0043139e;
          }
          switch(param_1) {
          case -0x71a1fdfe:
            return "JET_errBadLogVersion";
          case -0x71a1fdfd:
            return "JET_errInvalidLogSequence";
          case -0x71a1fdfc:
            return "JET_errLoggingDisabled";
          case -0x71a1fdfb:
            return "JET_errLogBufferTooSmall";
          case -0x71a1fdf9:
            return "JET_errLogSequenceEnd";
          case -0x71a1fdf8:
            return "JET_errNoBackup";
          case -0x71a1fdf7:
            return "JET_errInvalidBackupSequence";
          case -0x71a1fdf5:
            return "JET_errBackupNotAllowedYet";
          case -0x71a1fdf4:
            return "JET_errDeleteBackupFileFail";
          case -0x71a1fdf3:
            return "JET_errMakeBackupDirectoryFail";
          }
        }
      }
      else {
        switch(param_1) {
        case -0x71a1fdf1:
          return "JET_errRecoveredWithErrors";
        case -0x71a1fdf0:
          return "JET_errMissingLogFile";
        case -0x71a1fdef:
          return "JET_errLogDiskFull";
        case -0x71a1fdee:
          return "JET_errBadLogSignature";
        case -0x71a1fded:
          return "JET_errBadDbSignature";
        case -0x71a1fdec:
          return "JET_errBadCheckpointSignature";
        case -0x71a1fdeb:
          return "JET_errCheckpointCorrupt";
        case -0x71a1fdea:
          return "JET_errMissingPatchPage";
        case -0x71a1fde9:
          return "JET_errBadPatchPage";
        case -0x71a1fde8:
          return "JET_errRedoAbruptEnded";
        case -0x71a1fde6:
          return "JET_errPatchFileMissing";
        case -0x71a1fde5:
          return "JET_errDatabaseLogSetMismatch";
        case -0x71a1fde4:
          return "JET_errDatabaseStreamingFileMismatch";
        case -0x71a1fde3:
          return "JET_errLogFileSizeMismatch";
        case -0x71a1fde2:
          return "JET_errCheckpointFileNotFound";
        case -0x71a1fde1:
          return "JET_errRequiredLogFilesMissing";
        case -0x71a1fde0:
          return "JET_errSoftRecoveryOnBackupDatabase";
        case -0x71a1fddf:
          return "JET_errLogFileSizeMismatchDatabasesConsistent";
        case -0x71a1fdde:
          return "JET_errLogSectorSizeMismatch";
        case -0x71a1fddd:
          return "JET_errLogSectorSizeMismatchDatabasesConsistent";
        case -0x71a1fddc:
          return "JET_errLogSequenceEndDatabasesConsistent";
        case -0x71a1fddb:
          return "JET_errStreamingDataNotLogged";
        case -0x71a1fdda:
          return "JET_errDatabaseDirtyShutdown";
        case -0x71a1fdd9:
          return "JET_errConsistentTimeMismatch";
        case -0x71a1fdd8:
          return "JET_errDatabasePatchFileMismatch";
        case -0x71a1fdd7:
          return "JET_errEndingRestoreLogTooLow";
        case -0x71a1fdd6:
          return "JET_errStartingRestoreLogTooHigh";
        case -0x71a1fdd5:
          return "JET_errGivenLogFileHasBadSignature";
        case -0x71a1fdd4:
          return "JET_errGivenLogFileIsNotContiguous";
        case -0x71a1fdd3:
          return "JET_errMissingRestoreLogFiles";
        case -0x71a1fdd0:
          return "JET_errMissingFullBackup";
        case -0x71a1fdcf:
          return "JET_errBadBackupDatabaseSize";
        case -0x71a1fdce:
          return "JET_errDatabaseAlreadyUpgraded";
        case -0x71a1fdcd:
          return "JET_errDatabaseIncompleteUpgrade";
        case -0x71a1fdcb:
          return "JET_errMissingCurrentLogFiles";
        case -0x71a1fdca:
          return "JET_errDbTimeTooOld";
        case -0x71a1fdc9:
          return "JET_errDbTimeTooNew";
        case -0x71a1fdc7:
          return "JET_errMissingFileToBackup";
        case -0x71a1fdc6:
          return "JET_errLogTornWriteDuringHardRestore";
        case -0x71a1fdc5:
          return "JET_errLogTornWriteDuringHardRecovery";
        case -0x71a1fdc3:
          return "JET_errLogCorruptDuringHardRestore";
        case -0x71a1fdc2:
          return "JET_errLogCorruptDuringHardRecovery";
        case -0x71a1fdc1:
          return "JET_errMustDisableLoggingForDbUpgrade";
        case -0x71a1fdbf:
          return "JET_errBadRestoreTargetInstance";
        case -0x71a1fdbd:
          return "JET_errRecoveredWithoutUndo";
        }
      }
    }
    else if (param_1 < -0x71a1fbea) {
      if (param_1 == -0x71a1fbeb) {
        return "JET_errInvalidBookmark";
      }
      if (param_1 < -0x71a1fc0a) {
        if (param_1 == -0x71a1fc0b) {
          return "JET_errOutOfCursors";
        }
        if (-0x71a1fd9a < param_1) {
          if (param_1 < -0x71a1fc15) {
            if (param_1 == -0x71a1fc16) {
              return "JET_errInvalidName";
            }
            if (param_1 == -0x71a1fd99) {
              return "JET_errRestoreOfNonBackupDatabase";
            }
            if (param_1 == -0x71a1fd98) {
              return "JET_errLogFileNotCopied";
            }
            if (param_1 == -0x71a1fc7c) {
              return "JET_errInvalidGrbit";
            }
            if (param_1 == -0x71a1fc18) {
              return "JET_errTermInProgress";
            }
            pcVar1 = "JET_errFeatureNotAvailable";
            bVar2 = param_1 == -0x71a1fc17;
          }
          else {
            if (param_1 == -0x71a1fc15) {
              return "JET_errInvalidParameter";
            }
            if (param_1 == -0x71a1fc10) {
              return "JET_errDatabaseFileReadOnly";
            }
            if (param_1 == -0x71a1fc0e) {
              return "JET_errInvalidDatabaseId";
            }
            pcVar1 = "JET_errOutOfDatabaseSpace";
            bVar2 = param_1 == -0x71a1fc0c;
          }
          goto LAB_0043139e;
        }
        if (param_1 == -0x71a1fd9a) {
          return "JET_errCheckpointDepthTooDeep";
        }
        switch(param_1) {
        case -0x71a1fdbb:
          return "JET_errSoftRecoveryOnSnapshot";
        case -0x71a1fdba:
          return "JET_errCommittedLogFilesMissing";
        case -0x71a1fdb9:
          return "JET_errSectorSizeNotSupported";
        case -0x71a1fdb8:
          return "JET_errRecoveredWithoutUndoDatabasesConsistent";
        case -0x71a1fdb6:
          return "JET_errCommittedLogFileCorrupt";
        case -0x71a1fda7:
          return "JET_errUnicodeTranslationBufferTooSmall";
        case -0x71a1fda6:
          return "JET_errUnicodeTranslationFail";
        case -0x71a1fda5:
          return "JET_errUnicodeNormalizationNotSupported";
        case -0x71a1fd9e:
          return "JET_errExistingLogFileHasBadSignature";
        case -0x71a1fd9d:
          return "JET_errExistingLogFileIsNotContiguous";
        case -0x71a1fd9c:
          return "JET_errLogReadVerifyFailure";
        }
      }
      else {
        switch(param_1) {
        case -0x71a1fc0a:
          return "JET_errOutOfBuffers";
        case -0x71a1fc09:
          return "JET_errTooManyIndexes";
        case -0x71a1fc08:
          return "JET_errTooManyKeys";
        case -0x71a1fc07:
          return "JET_errRecordDeleted";
        case -0x71a1fc06:
          return "JET_errReadVerifyFailure";
        case -0x71a1fc05:
          return "JET_errPageNotInitialized";
        case -0x71a1fc04:
          return "JET_errOutOfFileHandles";
        case -0x71a1fc02:
          return "JET_errDiskIO";
        case -0x71a1fc01:
          return "JET_errInvalidPath";
        case -0x71a1fc00:
          return "JET_errInvalidSystemPath";
        case -0x71a1fbff:
          return "JET_errInvalidLogDirectory";
        case -0x71a1fbfe:
          return "JET_errRecordTooBig";
        case -0x71a1fbfd:
          return "JET_errTooManyOpenDatabases";
        case -0x71a1fbfc:
          return "JET_errInvalidDatabase";
        case -0x71a1fbfb:
          return "JET_errNotInitialized";
        case -0x71a1fbfa:
          return "JET_errAlreadyInitialized";
        case -0x71a1fbf9:
          return "JET_errInitInProgress";
        case -0x71a1fbf8:
          return "JET_errFileAccessDenied";
        case -0x71a1fbf2:
          return "JET_errBufferTooSmall";
        case -0x71a1fbf0:
          return "JET_errTooManyColumns";
        case -0x71a1fbed:
          return "JET_errContainerNotEmpty";
        case -0x71a1fbec:
          return "JET_errInvalidFilename";
        }
      }
    }
    else {
      switch(param_1) {
      case -0x71a1fbea:
        return "JET_errColumnInUse";
      case -0x71a1fbe9:
        return "JET_errInvalidBufferSize";
      case -0x71a1fbe8:
        return "JET_errColumnNotUpdatable";
      case -0x71a1fbe5:
        return "JET_errIndexInUse";
      case -0x71a1fbe4:
        return "JET_errLinkNotSupported";
      case -0x71a1fbe3:
        return "JET_errNullKeyDisallowed";
      case -0x71a1fbe2:
        return "JET_errNotInTransaction";
      case -0x71a1fbdd:
        return "JET_errTooManyActiveUsers";
      case -0x71a1fbdb:
        return "JET_errInvalidCountry";
      case -0x71a1fbda:
        return "JET_errInvalidLanguageId";
      case -0x71a1fbd9:
        return "JET_errInvalidCodePage";
      case -0x71a1fbd8:
        return "JET_errInvalidLCMapStringFlags";
      case -0x71a1fbd7:
        return "JET_errVersionStoreEntryTooBig";
      case -0x71a1fbd6:
        return "JET_errVersionStoreOutOfMemoryAndCleanupTimedOut";
      case -0x71a1fbd3:
        return "JET_errVersionStoreOutOfMemory";
      case -0x71a1fbd1:
        return "JET_errCannotIndex";
      case -0x71a1fbd0:
        return "JET_errRecordNotDeleted";
      case -0x71a1fbcf:
        return "JET_errTooManyMempoolEntries";
      case -0x71a1fbce:
        return "JET_errOutOfObjectIDs";
      case -0x71a1fbcd:
        return "JET_errOutOfLongValueIDs";
      case -0x71a1fbcc:
        return "JET_errOutOfAutoincrementValues";
      case -0x71a1fbcb:
        return "JET_errOutOfDbtimeValues";
      case -0x71a1fbca:
        return "JET_errOutOfSequentialIndexValues";
      case -0x71a1fbc8:
        return "JET_errRunningInOneInstanceMode";
      case -0x71a1fbc7:
        return "JET_errRunningInMultiInstanceMode";
      case -0x71a1fbc6:
        return "JET_errSystemParamsAlreadySet";
      case -0x71a1fbc5:
        return "JET_errSystemPathInUse";
      case -0x71a1fbc4:
        return "JET_errLogFilePathInUse";
      case -0x71a1fbc3:
        return "JET_errTempPathInUse";
      case -0x71a1fbc2:
        return "JET_errInstanceNameInUse";
      case -0x71a1fbbe:
        return "JET_errInstanceUnavailable";
      case -0x71a1fbbd:
        return "JET_errDatabaseUnavailable";
      case -0x71a1fbbc:
        return "JET_errInstanceUnavailableDueToFatalLogDiskFull";
      case -0x71a1fbb3:
        return "JET_errOutOfSessions";
      case -0x71a1fbb2:
        return "JET_errWriteConflict";
      case -0x71a1fbb1:
        return "JET_errTransTooDeep";
      case -0x71a1fbb0:
        return "JET_errInvalidSesid";
      case -0x71a1fbaf:
        return "JET_errWriteConflictPrimaryIndex";
      case -0x71a1fbac:
        return "JET_errInTransaction";
      case -0x71a1fbab:
        return "JET_errRollbackRequired";
      case -0x71a1fbaa:
        return "JET_errTransReadOnly";
      case -0x71a1fba9:
        return "JET_errSessionWriteConflict";
      case -0x71a1fba8:
        return "JET_errRecordTooBigForBackwardCompatibility";
      case -0x71a1fba7:
        return "JET_errCannotMaterializeForwardOnlySort";
      case -0x71a1fba6:
        return "JET_errSesidTableIdMismatch";
      }
    }
  }
  else if (param_1 < -0x71a1fa06) {
    if (param_1 == -0x71a1fa07) {
      return "JET_errDerivedColumnCorruption";
    }
    switch(param_1) {
    case -0x71a1fba4:
      return "JET_errDirtyShutdown";
    case -0x71a1fb4f:
      return "JET_errDatabaseDuplicate";
    case -0x71a1fb4e:
      return "JET_errDatabaseInUse";
    case -0x71a1fb4d:
      return "JET_errDatabaseNotFound";
    case -0x71a1fb4c:
      return "JET_errDatabaseInvalidName";
    case -0x71a1fb4b:
      return "JET_errDatabaseInvalidPages";
    case -0x71a1fb4a:
      return "JET_errDatabaseCorrupted";
    case -0x71a1fb49:
      return "JET_errDatabaseLocked";
    case -0x71a1fb48:
      return "JET_errCannotDisableVersioning";
    case -0x71a1fb47:
      return "JET_errInvalidDatabaseVersion";
    case -0x71a1fb46:
      return "JET_errDatabase200Format";
    case -0x71a1fb45:
      return "JET_errDatabase400Format";
    case -0x71a1fb44:
      return "JET_errDatabase500Format";
    case -0x71a1fb43:
      return "JET_errPageSizeMismatch";
    case -0x71a1fb42:
      return "JET_errTooManyInstances";
    case -0x71a1fb41:
      return "JET_errDatabaseSharingViolation";
    case -0x71a1fb40:
      return "JET_errAttachedDatabaseMismatch";
    case -0x71a1fb3f:
      return "JET_errDatabaseInvalidPath";
    case -0x71a1fb3e:
      return "JET_errDatabaseIdInUse";
    case -0x71a1fb3d:
      return "JET_errForceDetachNotAllowed";
    case -0x71a1fb3c:
      return "JET_errCatalogCorrupted";
    case -0x71a1fb3b:
      return "JET_errPartiallyAttachedDB";
    case -0x71a1fb3a:
      return "JET_errDatabaseSignInUse";
    case -0x71a1fb38:
      return "JET_errDatabaseCorruptedNoRepair";
    case -0x71a1fb37:
      return "JET_errInvalidCreateDbVersion";
    case -0x71a1faea:
      return "JET_errTableLocked";
    case -0x71a1fae9:
      return "JET_errTableDuplicate";
    case -0x71a1fae8:
      return "JET_errTableInUse";
    case -0x71a1fae7:
      return "JET_errObjectNotFound";
    case -0x71a1fae5:
      return "JET_errDensityInvalid";
    case -0x71a1fae4:
      return "JET_errTableNotEmpty";
    case -0x71a1fae2:
      return "JET_errInvalidTableId";
    case -0x71a1fae1:
      return "JET_errTooManyOpenTables";
    case -0x71a1fae0:
      return "JET_errIllegalOperation";
    case -0x71a1fadf:
      return "JET_errTooManyOpenTablesAndCleanupTimedOut";
    case -0x71a1fade:
      return "JET_errObjectDuplicate";
    case -0x71a1fadc:
      return "JET_errInvalidObject";
    case -0x71a1fadb:
      return "JET_errCannotDeleteTempTable";
    case -0x71a1fada:
      return "JET_errCannotDeleteSystemTable";
    case -0x71a1fad9:
      return "JET_errCannotDeleteTemplateTable";
    case -0x71a1fad6:
      return "JET_errExclusiveTableLockRequired";
    case -0x71a1fad5:
      return "JET_errFixedDDL";
    case -0x71a1fad4:
      return "JET_errFixedInheritedDDL";
    case -0x71a1fad3:
      return "JET_errCannotNestDDL";
    case -0x71a1fad2:
      return "JET_errDDLNotInheritable";
    case -0x71a1fad0:
      return "JET_errInvalidSettings";
    case -0x71a1facf:
      return "JET_errClientRequestToStopJetService";
    case -0x71a1face:
      return "JET_errCannotAddFixedVarColumnToDerivedTable";
    case -0x71a1fa87:
      return "JET_errIndexCantBuild";
    case -0x71a1fa86:
      return "JET_errIndexHasPrimary";
    case -0x71a1fa85:
      return "JET_errIndexDuplicate";
    case -0x71a1fa84:
      return "JET_errIndexNotFound";
    case -0x71a1fa83:
      return "JET_errIndexMustStay";
    case -0x71a1fa82:
      return "JET_errIndexInvalidDef";
    case -0x71a1fa7f:
      return "JET_errInvalidCreateIndex";
    case -0x71a1fa7e:
      return "JET_errTooManyOpenIndexes";
    case -0x71a1fa7d:
      return "JET_errMultiValuedIndexViolation";
    case -0x71a1fa7c:
      return "JET_errIndexBuildCorrupted";
    case -0x71a1fa7b:
      return "JET_errPrimaryIndexCorrupted";
    case -0x71a1fa7a:
      return "JET_errSecondaryIndexCorrupted";
    case -0x71a1fa78:
      return "JET_errInvalidIndexId";
    case -0x71a1fa6a:
      return "JET_errIndexTuplesSecondaryIndexOnly";
    case -0x71a1fa69:
      return "JET_errIndexTuplesTooManyColumns";
    case -0x71a1fa68:
      return "JET_errIndexTuplesNonUniqueOnly";
    case -0x71a1fa67:
      return "JET_errIndexTuplesTextBinaryColumnsOnly";
    case -0x71a1fa66:
      return "JET_errIndexTuplesVarSegMacNotAllowed";
    case -0x71a1fa65:
      return "JET_errIndexTuplesInvalidLimits";
    case -0x71a1fa64:
      return "JET_errIndexTuplesCannotRetrieveFromIndex";
    case -0x71a1fa63:
      return "JET_errIndexTuplesKeyTooSmall";
    case -0x71a1fa23:
      return "JET_errColumnLong";
    case -0x71a1fa22:
      return "JET_errColumnNoChunk";
    case -0x71a1fa21:
      return "JET_errColumnDoesNotFit";
    case -0x71a1fa20:
      return "JET_errNullInvalid";
    case -0x71a1fa1f:
      return "JET_errColumnIndexed";
    case -0x71a1fa1e:
      return "JET_errColumnTooBig";
    case -0x71a1fa1d:
      return "JET_errColumnNotFound";
    case -0x71a1fa1c:
      return "JET_errColumnDuplicate";
    case -0x71a1fa1b:
      return "JET_errMultiValuedColumnMustBeTagged";
    case -0x71a1fa1a:
      return "JET_errColumnRedundant";
    case -0x71a1fa19:
      return "JET_errInvalidColumnType";
    case -0x71a1fa16:
      return "JET_errTaggedNotNULL";
    case -0x71a1fa15:
      return "JET_errNoCurrentIndex";
    case -0x71a1fa14:
      return "JET_errKeyIsMade";
    case -0x71a1fa13:
      return "JET_errBadColumnId";
    case -0x71a1fa12:
      return "JET_errBadItagSequence";
    case -0x71a1fa11:
      return "JET_errColumnInRelationship";
    case -0x71a1fa0f:
      return "JET_errCannotBeTagged";
    case -0x71a1fa0c:
      return "JET_errDefaultValueTooBig";
    case -0x71a1fa0b:
      return "JET_errMultiValuedDuplicate";
    case -0x71a1fa0a:
      return "JET_errLVCorrupted";
    case -0x71a1fa08:
      return "JET_errMultiValuedDuplicateAfterTruncation";
    }
  }
  else {
    if (param_1 < -0x71a1f05c) {
      if (param_1 == -0x71a1f05d) {
        return "JET_errFileIORetry";
      }
      if (param_1 < -0x71a1f88c) {
        if (param_1 == -0x71a1f88d) {
          return "JET_errAccessDenied";
        }
        if (param_1 < -0x71a1f95a) {
          if (param_1 == -0x71a1f95b) {
            return "JET_errTooManySorts";
          }
          if (param_1 < -0x71a1f9ba) {
            if (param_1 == -0x71a1f9bb) {
              return "JET_errKeyDuplicate";
            }
            if (param_1 == -0x71a1fa06) {
              return "JET_errInvalidPlaceholderColumn";
            }
            if (param_1 == -0x71a1f9bf) {
              return "JET_errRecordNotFound";
            }
            if (param_1 == -0x71a1f9be) {
              return "JET_errRecordNoCopy";
            }
            if (param_1 == -0x71a1f9bd) {
              return "JET_errNoCurrentRecord";
            }
            pcVar1 = "JET_errRecordPrimaryChanged";
            bVar2 = param_1 == -0x71a1f9bc;
          }
          else {
            if (param_1 == -0x71a1f9b9) {
              return "JET_errAlreadyPrepared";
            }
            if (param_1 == -0x71a1f9b8) {
              return "JET_errKeyNotMade";
            }
            if (param_1 == -0x71a1f9b7) {
              return "JET_errUpdateNotPrepared";
            }
            if (param_1 == -0x71a1f9b5) {
              return "JET_errDataHasChanged";
            }
            pcVar1 = "JET_errLanguageNotSupported";
            bVar2 = param_1 == -0x71a1f9ad;
          }
        }
        else if (param_1 < -0x71a1f8ec) {
          if (param_1 == -0x71a1f8ed) {
            return "JET_errFileNotFound";
          }
          if (param_1 == -0x71a1f95a) {
            return "JET_errInvalidOnSort";
          }
          if (param_1 == -0x71a1f8f5) {
            return "JET_errTempFileOpenError";
          }
          if (param_1 == -0x71a1f8f3) {
            return "JET_errTooManyAttachedDatabases";
          }
          if (param_1 == -0x71a1f8f0) {
            return "JET_errDiskFull";
          }
          pcVar1 = "JET_errPermissionDenied";
          bVar2 = param_1 == -0x71a1f8ef;
        }
        else {
          if (param_1 == -0x71a1f8ec) {
            return "JET_errFileInvalidType";
          }
          if (param_1 == -0x71a1f8c6) {
            return "JET_errAfterInitialization";
          }
          if (param_1 == -0x71a1f8c4) {
            return "JET_errLogCorrupted";
          }
          pcVar1 = "JET_errInvalidOperation";
          bVar2 = param_1 == -0x71a1f88e;
        }
      }
      else {
        if (param_1 < -0x71a1f7ca) {
          if (param_1 == -0x71a1f7cb) {
            return "JET_errCallbackFailed";
          }
          switch(param_1) {
          case -0x71a1f88b:
            return "JET_errTooManySplits";
          case -0x71a1f88a:
            return "JET_errSessionSharingViolation";
          case -0x71a1f889:
            return "JET_errEntryPointNotFound";
          case -0x71a1f888:
            return "JET_errSessionContextAlreadySet";
          case -0x71a1f887:
            return "JET_errSessionContextNotSetByThisThread";
          case -0x71a1f886:
            return "JET_errSessionInUse";
          case -0x71a1f885:
            return "JET_errRecordFormatConversionFailed";
          case -0x71a1f884:
            return "JET_errOneDatabasePerSession";
          case -0x71a1f883:
            return "JET_errRollbackError";
          }
          goto switchD_004308e4_caseD_8e5e0145;
        }
        if (param_1 < -0x71a1f447) {
          if (param_1 == -0x71a1f448) {
            return "JET_errLSCallbackNotSpecified";
          }
          if (param_1 == -0x71a1f7ca) {
            return "JET_errCallbackNotResolved";
          }
          if (param_1 == -0x71a1f7c9) {
            return "JET_errSpaceHintsInvalid";
          }
          if (param_1 == -0x71a1f69f) {
            return "JET_errOSSnapshotInvalidSequence";
          }
          if (param_1 == -0x71a1f69e) {
            return "JET_errOSSnapshotTimeOut";
          }
          if (param_1 == -0x71a1f69d) {
            return "JET_errOSSnapshotNotAllowed";
          }
          pcVar1 = "JET_errOSSnapshotInvalidSnapId";
          bVar2 = param_1 == -0x71a1f69c;
        }
        else {
          if (param_1 == -0x71a1f447) {
            return "JET_errLSAlreadySet";
          }
          if (param_1 == -0x71a1f446) {
            return "JET_errLSNotSet";
          }
          if (param_1 == -0x71a1f060) {
            return "JET_errFileIOSparse";
          }
          if (param_1 == -0x71a1f05f) {
            return "JET_errFileIOBeyondEOF";
          }
          pcVar1 = "JET_errFileIOAbort";
          bVar2 = param_1 == -0x71a1f05e;
        }
      }
LAB_0043139e:
      if (!bVar2) {
        pcVar1 = "Unknown Error";
      }
      return pcVar1;
    }
    if (param_1 < 0xe5e0423) {
      if (param_1 == 0xe5e0422) {
        return "JET_wrnNoIdleActivity";
      }
      if (param_1 < 0xe5e0235) {
        if (param_1 == 0xe5e0234) {
          return "JET_wrnSkipThisRecord";
        }
        if (param_1 < 0xe5e0064) {
          if (param_1 == 0xe5e0063) {
            return "JET_errIndexTuplesTextColumnsOnly";
          }
          if (param_1 == -0x71a1f05c) {
            return "JET_errFileIOFail";
          }
          if (param_1 == -0x71a1f05b) {
            return "JET_errFileCompressed";
          }
          if (param_1 == 0) {
            return "JET_errSuccess";
          }
          if (param_1 == 0xe5e0051) {
            return "JET_errDatabaseInconsistent";
          }
          pcVar1 = "JET_errIndexTuplesOneColumnOnly";
          bVar2 = param_1 == 0xe5e005a;
          goto LAB_0043139e;
        }
        if (param_1 == 0xe5e0141) {
          return "JET_wrnRemainingVersions";
        }
        if (param_1 == 0xe5e0159) {
          return "JET_wrnUniqueKey";
        }
        if (param_1 == 0xe5e0196) {
          return "JET_wrnSeparateLongValue";
        }
        if (param_1 == 0xe5e022e) {
          return "JET_wrnExistingLogFileHasBadSignature";
        }
        if (param_1 == 0xe5e022f) {
          return "JET_wrnExistingLogFileIsNotContiguous";
        }
      }
      else if (param_1 < 0xe5e03ef) {
        if (param_1 == 0xe5e03ee) {
          return "JET_wrnBufferTruncated";
        }
        if (param_1 == 0xe5e0242) {
          return "JET_wrnTargetInstanceRunning";
        }
        if (param_1 == 0xe5e0249) {
          return "JET_wrnCommittedLogFilesLost";
        }
        if (param_1 == 0xe5e024b) {
          return "JET_wrnCommittedLogFilesRemoved";
        }
        if (param_1 == 0xe5e0253) {
          return "JET_wrnDatabaseRepaired";
        }
        if (param_1 == 0xe5e03ec) {
          return "JET_wrnColumnNull";
        }
      }
      else {
        if (param_1 == 0xe5e03ef) {
          return "JET_wrnDatabaseAttached";
        }
        if (param_1 == 0xe5e03f1) {
          return "JET_wrnSortOverflow";
        }
        if (param_1 == 0xe5e040f) {
          return "JET_wrnSeekNotEqual";
        }
        if (param_1 == 0xe5e041f) {
          return "JET_wrnNoErrorInfo";
        }
      }
    }
    else if (param_1 < 0xe5e05ff) {
      if (param_1 == 0xe5e05fe) {
        return "JET_wrnColumnTruncated";
      }
      if (param_1 < 0xe5e05e9) {
        if (param_1 == 0xe5e05e8) {
          return "JET_wrnColumnMaxTruncated";
        }
        if (param_1 == 0xe5e042b) {
          return "JET_wrnNoWriteLock";
        }
        if (param_1 == 0xe5e042c) {
          return "JET_wrnColumnSetNull";
        }
        if (param_1 == 0xe5e0515) {
          return "JET_wrnTableEmpty";
        }
        if (param_1 == 0xe5e052f) {
          return "JET_wrnTableInUseBySystem";
        }
        if (param_1 == 0xe5e0587) {
          return "JET_wrnCorruptIndexDeleted";
        }
      }
      else {
        if (param_1 == 0xe5e05f0) {
          return "JET_wrnCopyLongValue";
        }
        if (param_1 == 0xe5e05fb) {
          return "JET_wrnColumnSkipped";
        }
        if (param_1 == 0xe5e05fc) {
          return "JET_wrnColumnNotLocal";
        }
        if (param_1 == 0xe5e05fd) {
          return "JET_wrnColumnMoreTags";
        }
      }
    }
    else if (param_1 < 0xe5e0716) {
      if (param_1 == 0xe5e0715) {
        return "JET_wrnFileOpenReadOnly";
      }
      if (param_1 == 0xe5e05ff) {
        return "JET_wrnColumnPresent";
      }
      if (param_1 == 0xe5e0600) {
        return "JET_wrnColumnSingleValue";
      }
      if (param_1 == 0xe5e0601) {
        return "JET_wrnColumnDefault";
      }
      if (param_1 == 0xe5e064a) {
        return "JET_wrnDataHasChanged";
      }
      if (param_1 == 0xe5e0652) {
        return "JET_wrnKeyChanged";
      }
    }
    else {
      if (param_1 == 0xe5e0774) {
        return "JET_wrnIdleFull";
      }
      if (param_1 == 0xe5e07d0) {
        return "JET_wrnDefragAlreadyRunning";
      }
      if (param_1 == 0xe5e07d1) {
        return "JET_wrnDefragNotRunning";
      }
      if (param_1 == 0xe5e0834) {
        return "JET_wrnCallbackNotRegistered";
      }
    }
  }
switchD_004308e4_caseD_8e5e0145:
  return "Unknown Error";
}



/* Function: FUN_00431c06 */

uint __fastcall FUN_00431c06(undefined4 param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  char *pcVar2;
  undefined4 local_8;
  
  local_8 = 0;
  uVar1 = FUN_00427941(param_1,L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\SideBySide",param_1,
                       L"MaintenanceFlags",&local_8);
  if ((uVar1 == 0x80070002) || (-1 < (int)uVar1)) {
    uVar1 = FUN_00427b1d(extraout_ECX);
    if (-1 < (int)uVar1) {
      return uVar1;
    }
    pcVar2 = "Failed updating maintenance flags.";
  }
  else {
    pcVar2 = "Failed getting maintenance flags.";
  }
  FUN_00424d95(0x4000000,uVar1,'\x01',pcVar2);
  return uVar1;
}



/* Function: FUN_00431c75 */

undefined4 __fastcall FUN_00431c75(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
    FUN_00424d95(0x4000000,0x80004003,'\x01',"No value result specified");
  }
  else {
    *param_2 = 0;
    uVar1 = FUN_00427941(param_1,
                         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\SideBySide\\Configuration",
                         param_1,(LPCWSTR)param_1,param_2);
  }
  return uVar1;
}



/* Function: FUN_00431cc0 */

void __thiscall FUN_00431cc0(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_00431d30(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00431e29(this,param_2);
    }
  }
  return;
}



/* Function: FUN_00431cfd */

void __fastcall FUN_00431cfd(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_004010c4;
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



/* Function: FUN_00431d30 */

void __thiscall FUN_00431d30(void *this,undefined4 *param_1)

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
    uVar1 = FUN_0041c44d(this_00,0,0x2000);
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
      FUN_0041c490((int)this_00,&DAT_0041b8aa,0x1000000,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00431e29 */

void __thiscall FUN_00431e29(void *this,undefined4 *param_1)

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
    FUN_0041c64b((int)*(uint **)((int)this + 4),&DAT_0041b9cd,param_1,param_1,&local_4c,&local_48,
                 &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                 &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
  }
  return;
}



/* Function: FUN_00431f20 */

undefined4 __thiscall FUN_00431f20(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_00436154 != iVar1;
  iVar3 = DAT_00436154;
  DAT_00436154 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_00437340)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00431f60 */

undefined4 * __thiscall FUN_00431f60(void *this,byte param_1)

{
  FUN_00431cfd((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00434314(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00431f8a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431f8a(void)

{
  BOOL BVar1;
  undefined *local_18;
  undefined4 local_14;
  undefined *local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_10 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00436770,0,&local_c,&local_10);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_18 = &DAT_00436770;
    local_10 = &DAT_00436774;
    _DAT_00436778 = 0;
    DAT_0043677c = 0;
    _DAT_00436780 = 0;
    _DAT_00436774 = &PTR_FUN_004010d4;
    _DAT_00436784 = &DAT_00436000;
    FUN_004345d3(FUN_00432020);
    local_14 = 0;
    FUN_004324cb((int *)&local_18);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00432020 */

void FUN_00432020(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_00436770,1,&local_c,&local_10);
  if ((BVar2 != 0) && (local_c == 0)) {
    pcVar1 = *(code **)(*local_10 + 0xc);
    (*(code *)PTR_guard_check_icall_00437340)(0);
    (*pcVar1)();
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0043207d */

void __fastcall FUN_0043207d(int *param_1)

{
  void *CallbackContext;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  PREGHANDLE extraout_EDX;
  PREGHANDLE RegHandle;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  CallbackContext = (void *)param_1[4];
  param_1[1] = (int)CallbackContext;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar1 = *(int *)((int)CallbackContext + 4);
  RegHandle = (PREGHANDLE)((int)CallbackContext + 0x18);
  local_18.Data1 = *(ulong *)(iVar1 + -0x10);
  local_18._4_4_ = *(undefined4 *)(iVar1 + -0xc);
  local_18.Data4._0_4_ = *(undefined4 *)(iVar1 + -8);
  local_18.Data4._4_4_ = *(undefined4 *)(iVar1 + -4);
  if (*(int *)RegHandle != 0 || *(int *)((int)CallbackContext + 0x1c) != 0) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    RegHandle = extraout_EDX;
  }
  *(undefined4 *)((int)CallbackContext + 0x20) = 0;
  *(undefined4 *)((int)CallbackContext + 0x24) = 0;
  UVar3 = EventRegister(&local_18,FUN_0041c270,CallbackContext,RegHandle);
  if (UVar3 == 0) {
    FUN_0041c2f3(CallbackContext,*(ushort **)((int)CallbackContext + 4),
                 (uint)**(ushort **)((int)CallbackContext + 4));
  }
  param_1[3] = 1;
  pcVar2 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_00437340)();
  (*pcVar2)();
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00432120 */

undefined4 * __thiscall FUN_00432120(void *this,byte param_1)

{
  FUN_00431cfd((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00434314(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00432150 */

void FUN_00432150(uint param_1,ushort *param_2,undefined4 *param_3,int param_4,uint *param_5,
                 uint *param_6,undefined1 param_7,uint param_8)

{
  uint *puVar1;
  int iVar2;
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
  
  iVar2 = FUN_00431f8a();
  if ((*(int **)(iVar2 + 4) != (int *)0x0) && (**(int **)(iVar2 + 4) != 0)) {
    if (param_5 == (uint *)0x0) {
      if (param_6 == (uint *)0x0) {
        if (param_3 != (undefined4 *)0x0) {
          iVar2 = FUN_00431f8a();
          puVar1 = *(uint **)(iVar2 + 4);
          if (2 < *puVar1) {
            uVar3 = FUN_0041c44d(puVar1,1,0);
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
              FUN_0041c9bb((int)puVar1,&DAT_0041bb8b,param_2,param_2,local_c,&local_10,&local_44,
                           &local_48,&local_14,&local_18,&local_4e,&local_1c,&local_20,&local_24,
                           &local_4c,&local_28,&local_2c,&local_30,&local_40,&local_3c,&local_38,
                           &local_34);
            }
          }
        }
      }
      else {
        iVar2 = FUN_00431f8a();
        puVar1 = *(uint **)(iVar2 + 4);
        if (5 < *puVar1) {
          uVar3 = FUN_0041c44d(puVar1,4,0);
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
            FUN_0041c8f3((int)puVar1,&DAT_0041bb03,param_2,param_2,&local_34,&local_40,&local_44,
                         &local_48,&local_4c,&local_3c,&local_4e,&local_38);
          }
        }
      }
    }
    else {
      iVar2 = FUN_00431f8a();
      if (5 < **(uint **)(iVar2 + 4)) {
        uVar3 = FUN_0041c44d(*(uint **)(iVar2 + 4),2,0);
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
          FUN_0041c83e(extraout_ECX,&DAT_0041b839,extraout_ECX,extraout_ECX,&local_38,&local_3c,
                       &local_48,&local_4c,&local_4e,&local_40,&local_44);
        }
      }
      if (((param_2 != (ushort *)0x0) && ((char)param_2[2] == '\x01')) && (param_4 != 0)) {
        iVar2 = FUN_00431f8a();
        if (5 < **(uint **)(iVar2 + 4)) {
          uVar3 = FUN_0041c44d(*(uint **)(iVar2 + 4),10,0);
          if ((char)uVar3 != '\0') {
            local_38 = param_8;
            local_3c = *param_5;
            local_48 = CONCAT22(local_48._2_2_,(ushort)(byte)param_2[2]);
            local_40 = (uint)param_2[1];
            local_44 = (uint)*param_2;
            local_4c = param_1;
            local_4e = CONCAT11(local_4e._1_1_,1);
            FUN_0041c83e(extraout_ECX_00,&DAT_0041bcab,extraout_ECX_00,extraout_ECX_00,&local_4c,
                         &local_44,&local_40,&local_48,&local_4e,&local_3c,&local_38);
          }
        }
      }
    }
  }
  return;
}



/* Function: FUN_004324cb */

void __fastcall FUN_004324cb(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_0043207d((int *)(*param_1 + 4));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_004324f8 */

undefined4 __fastcall FUN_004324f8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
    FUN_00424d95(0x4000000,0x80004003,'\x01',"No transaction result specified");
  }
  else {
    *param_1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00432530 */

undefined4 FUN_00432530(void)

{
  return 1;
}



/* Function: FUN_00432540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432540(void)

{
  LOCK();
  _DAT_00436590 = _DAT_00436590 + 1;
  UNLOCK();
  return;
}



/* Function: FUN_00432550 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432550(void)

{
  LOCK();
  _DAT_00436590 = _DAT_00436590 + -1;
  UNLOCK();
  return;
}



/* Function: FUN_00432560 */

void __thiscall FUN_00432560(void *this,LPCWSTR param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  _func_5072 *p_Var3;
  BOOL BVar4;
  HMODULE pHVar5;
  DWORD DVar6;
  FARPROC pFVar7;
  DWORD DVar8;
  LPMALLOC This;
  HMODULE local_1c;
  HMODULE local_18;
  IMAGE_DOS_HEADER *local_14;
  LPMALLOC local_10;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)((int)this + 4);
  local_10 = (IMalloc *)0x0;
  local_c = (int *)0x0;
  if (*piVar1 == 0) {
    local_14 = (IMAGE_DOS_HEADER *)0x0;
    BVar4 = GetModuleHandleExW(2,L"Cbscore.dll",(HMODULE *)&local_14);
    if (BVar4 != 0) {
      local_18 = (HMODULE)0x0;
      local_1c = (HMODULE)0x0;
      BVar4 = GetModuleHandleExW(2,L"cbs_unittests_offline.dll",&local_18);
      if (((BVar4 == 0) &&
          (BVar4 = GetModuleHandleExW(2,L"servicing_unittests_offline.dll",&local_1c), BVar4 == 0))
         && (local_14 != &IMAGE_DOS_HEADER_00400000)) {
        DVar8 = 0x80070032;
        goto LAB_00432702;
      }
    }
    pHVar5 = LoadLibraryExW(param_1,(HANDLE)0x0,8);
    FUN_00425173(piVar1,(int)pHVar5);
    if (*piVar1 == 0) {
      DVar6 = GetLastError();
      DVar8 = DVar6 & 0xffff | 0x80070000;
      if ((int)DVar6 < 1) {
        DVar8 = DVar6;
      }
      if (DVar8 == 0x8007007e) {
        DVar8 = 0x80004001;
      }
      goto LAB_00432702;
    }
    pFVar7 = GetProcAddress((HMODULE)*piVar1,"CbsCoreInitialize");
    *(FARPROC *)((int)this + 0x2c) = pFVar7;
    if (pFVar7 != (FARPROC)0x0) {
      pFVar7 = GetProcAddress((HMODULE)*piVar1,"CbsCoreFinalize");
      *(FARPROC *)((int)this + 0x30) = pFVar7;
      if (pFVar7 != (FARPROC)0x0) goto LAB_00432675;
    }
    DVar6 = GetLastError();
    DVar8 = DVar6 & 0xffff | 0x80070000;
    if ((int)DVar6 < 1) {
      DVar8 = DVar6;
    }
    goto LAB_00432702;
  }
LAB_00432675:
  piVar1 = (int *)((int)this + 0x34);
  if (*piVar1 == 0) {
    DVar8 = CoGetMalloc(1,&local_10);
    if ((int)DVar8 < 0) goto LAB_00432702;
    pcVar2 = *(code **)((int)this + 0x2c);
    if (*piVar1 != 0) {
      RtlRaiseStatus(0xc00000e5);
    }
    (*(code *)PTR_guard_check_icall_00437340)
              (local_10,FUN_00432530,guard_check_icall,FUN_00432540,FUN_00432550,guard_check_icall,
               guard_check_icall,piVar1);
    DVar8 = (*pcVar2)();
    if ((int)DVar8 < 0) goto LAB_00432702;
  }
  pcVar2 = *(code **)(*(int *)*piVar1 + 0xc);
  (*(code *)PTR_guard_check_icall_00437340)((int *)*piVar1,0,&DAT_0041af20,&local_c);
  DVar8 = (*pcVar2)();
  piVar1 = local_c;
  if (-1 < (int)DVar8) {
    local_c = (int *)0x0;
    *param_2 = piVar1;
  }
LAB_00432702:
  if (local_c != (int *)0x0) {
    pcVar2 = *(code **)(*local_c + 8);
    (*(code *)PTR_guard_check_icall_00437340)(local_c);
    (*pcVar2)();
  }
  if (local_10 != (IMalloc *)0x0) {
    p_Var3 = local_10->lpVtbl->Release;
    This = local_10;
    (*(code *)PTR_guard_check_icall_00437340)();
    (*p_Var3)(This);
  }
  if ((((int)DVar8 < 0) && (*(int *)((int)this + 4) != 0)) && (*(int *)((int)this + 0x34) == 0)) {
    FUN_004215bc(*(HMODULE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00432770 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00432770(void *this,short *param_1,undefined4 *param_2)

{
  WCHAR WVar1;
  code *pcVar2;
  int iVar3;
  WCHAR *pWVar4;
  int *piVar5;
  undefined4 local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_214 = (int *)0x0;
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) {
    local_210[0] = L'.';
    local_210[1] = 0;
  }
  else {
    iVar3 = FUN_0041e6b4(local_210,0x104,(int)param_1);
    if (iVar3 < 0) goto LAB_00432871;
  }
  pWVar4 = local_210;
  do {
    WVar1 = *pWVar4;
    pWVar4 = pWVar4 + 1;
  } while (WVar1 != L'\0');
  iVar3 = (int)pWVar4 - (int)(local_210 + 1) >> 1;
  if (*(short *)((int)&local_214 + iVar3 * 2 + 2) == 0x5c) {
    iVar3 = iVar3 * 2;
    if (0x207 < iVar3 - 2U) {
      FUN_00434b61();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined2 *)((int)&local_214 + iVar3 + 2) = 0;
  }
  iVar3 = FUN_004204f1(local_210,0x104,0x41af04);
  if (-1 < iVar3) {
    iVar3 = FUN_00432560(this,local_210,&local_214);
    piVar5 = local_214;
    if (-1 < iVar3) {
      *param_2 = local_214;
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar5 + 8);
      (*(code *)PTR_guard_check_icall_00437340)(piVar5);
      (*pcVar2)();
    }
  }
LAB_00432871:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00432890 */

void __fastcall FUN_00432890(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)param_1[0xc];
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)();
    (*pcVar1)();
    param_1[0xc] = 0;
  }
  param_1[0xb] = 0;
  pcVar1 = *(code **)(*param_1 + 8);
  (*(code *)PTR_guard_check_icall_00437340)();
  (*pcVar1)();
  CLoadDirectDraw::ReleaseDirectDraw((CLoadDirectDraw *)(param_1 + 0xd));
  if (param_1[1] != 0) {
    FUN_004215bc((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}



/* Function: FUN_004328f0 */

void __fastcall FUN_004328f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x30);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)();
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  CLoadDirectDraw::ReleaseDirectDraw((CLoadDirectDraw *)(param_1 + 0x34));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004215bc(*(HMODULE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Function: FUN_00432940 */

undefined4 __fastcall FUN_00432940(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Function: ReleaseDirectDraw */

/* Library Function - Single Match
    public: void __thiscall CLoadDirectDraw::ReleaseDirectDraw(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall CLoadDirectDraw::ReleaseDirectDraw(CLoadDirectDraw *this)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00437340)(piVar1);
    (*pcVar2)();
    *(undefined4 *)this = 0;
  }
  return;
}



/* Function: FUN_0043297c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0043297c(void)

{
  _DAT_00436588 = 0;
  _DAT_00436554 = &PTR_FUN_004010e4;
  _DAT_00436558 = 0;
  uRam0043655c = 0;
  uRam00436560 = 0;
  uRam00436564 = 0;
  DAT_0043658c = 0;
  _DAT_00436568 = 0;
  uRam0043656c = 0;
  uRam00436570 = 0;
  uRam00436574 = 0;
  _DAT_00436578 = 0;
  uRam0043657c = 0;
  uRam00436580 = 0;
  uRam00436584 = 0;
  return &DAT_00436554;
}



/* Function: FUN_004329b8 */

void __fastcall FUN_004329b8(int param_1)

{
  CLoadDirectDraw::ReleaseDirectDraw((CLoadDirectDraw *)(param_1 + 0x34));
  FUN_0043371f((int *)(param_1 + 0xc));
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004215bc(*(HMODULE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004215bc(*(HMODULE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Function: FUN_004329f9 */

int __fastcall FUN_004329f9(uint param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  HANDLE pvVar2;
  short *psVar3;
  uint uVar4;
  uint dwBytes;
  uint uVar5;
  DWORD dwFlags;
  uint local_c;
  uint local_8;
  
  uVar5 = 0;
  dwBytes = 2;
  uVar4 = dwBytes;
  local_8 = param_1;
  if (param_1 != 0) {
    do {
      psVar3 = *(short **)(param_2 + uVar5 * 4);
      local_c = 0;
      if (psVar3 == (short *)0x0) {
        return -0x7ff8ffa9;
      }
      iVar1 = FUN_004337d8(psVar3,0x1fffffff,(int *)&local_c);
      if (iVar1 < 0) {
        return iVar1;
      }
      dwBytes = uVar4 + local_c * 2;
      if (dwBytes < uVar4) {
        return -0x7ff8fdea;
      }
      uVar5 = uVar5 + 1;
      uVar4 = dwBytes;
    } while (uVar5 < local_8);
  }
  iVar1 = 0;
  pvVar2 = GetProcessHeap();
  psVar3 = (short *)HeapAlloc(pvVar2,0,dwBytes);
  if (psVar3 == (short *)0x0) {
    iVar1 = -0x7ff8fff2;
  }
  else {
    *psVar3 = 0;
    local_c = 0;
    if (local_8 != 0) {
      do {
        iVar1 = FUN_00433750(psVar3,dwBytes,*(int *)(param_2 + local_c * 4));
        if (iVar1 < 0) {
          dwFlags = 0;
          pvVar2 = GetProcessHeap();
          HeapFree(pvVar2,dwFlags,psVar3);
          return iVar1;
        }
        local_c = local_c + 1;
      } while (local_c < local_8);
    }
    *param_3 = psVar3;
  }
  return iVar1;
}



/* Function: FUN_00432ad0 */

void __fastcall FUN_00432ad0(int param_1)

{
  if (param_1 != 0) {
    FUN_004329b8(param_1);
    FUN_00434314(param_1);
  }
  return;
}



/* Function: FUN_00432af0 */

void __fastcall FUN_00432af0(int param_1)

{
  LPCWSTR pWVar1;
  int iVar2;
  HRESULT HVar3;
  BOOL BVar4;
  undefined4 extraout_ECX;
  undefined1 auStack_28c [4];
  LPCWSTR local_288;
  GUID local_284;
  wchar_t *pwStack_274;
  WCHAR *pWStack_270;
  OLECHAR *pOStack_26c;
  OLECHAR local_268 [40];
  WCHAR local_218 [262];
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)auStack_28c;
  memset(local_218,0,0x208);
  memset(local_268,0,0x50);
  local_288 = (LPCWSTR)0x0;
  iVar2 = FUN_00433d89(extraout_ECX,local_218);
  if ((-1 < iVar2) && (HVar3 = CoCreateGuid(&local_284), -1 < HVar3)) {
    StringFromGUID2(&local_284,local_268,0x28);
    pWStack_270 = local_218;
    pwStack_274 = L"\\\\?\\";
    pOStack_26c = local_268;
    iVar2 = FUN_004329f9(3,(int)&pwStack_274,&local_288);
    pWVar1 = local_288;
    if (-1 < iVar2) {
      BVar4 = CreateDirectoryW(local_288,(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar4 == 0) {
        GetLastError();
      }
      else {
        FUN_0043371f((int *)(param_1 + 0xc));
        local_288 = (LPCWSTR)0x0;
        if (*(int *)(param_1 + 0xc) != 0) {
          RtlRaiseStatus(0xc00000e5);
        }
        *(LPCWSTR *)(param_1 + 0xc) = pWVar1;
      }
    }
  }
  FUN_0043371f((int *)&local_288);
  FUN_00434300(local_c ^ (uint)auStack_28c);
  return;
}



/* Function: FUN_00432c19 */

void __thiscall FUN_00432c19(void *this,LPCWSTR param_1)

{
  LPCWSTR lpLibFileName;
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE hHeap;
  LPCWSTR local_14;
  undefined4 local_10;
  wchar_t *local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_14 = (LPCWSTR)0x0;
  DVar1 = GetFileAttributesW(param_1);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) == 0)) {
    local_10 = *(undefined4 *)((int)this + 0xc);
    local_c = L"\\ssshim.dll";
    iVar2 = FUN_004329f9(2,(int)&local_10,&local_14);
    lpLibFileName = local_14;
    if (-1 < iVar2) {
      BVar3 = CopyFileW(param_1,local_14,0);
      if (BVar3 != 0) {
        LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
      }
    }
    if (lpLibFileName != (LPCWSTR)0x0) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpLibFileName);
    }
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00432cb0 */

void __thiscall FUN_00432cb0(void *this,int param_1,void *param_2,int *param_3)

{
  int iVar1;
  UINT uMode;
  HMODULE pHVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  LPCWSTR lpMem;
  int local_1c;
  LPCWSTR local_18;
  void *local_14;
  undefined *local_10;
  wchar_t *local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_18 = (LPCWSTR)0x0;
  local_1c = 0;
  *param_3 = 0;
  local_14 = param_2;
  if ((param_2 == (void *)0x0) || (iVar1 = FUN_004262ed(param_2,&local_1c), iVar1 < 0))
  goto LAB_00432e49;
  local_10 = &DAT_0041af48;
  if (*(short *)((int)param_2 + local_1c * 2 + -2) != 0x5c) {
    local_10 = &DAT_00401528;
  }
  if (((param_1 != 0) && (*(int *)((int)this + 0xc) == 0)) &&
     (iVar1 = FUN_00432af0((int)this), iVar1 < 0)) goto LAB_00432e49;
  local_c = L"system32\\ssshim.dll";
  iVar1 = FUN_004329f9(3,(int)&local_14,&local_18);
  lpMem = local_18;
  if (-1 < iVar1) {
    uMode = GetErrorMode();
    SetErrorMode(uMode | 1);
    lpMem = local_18;
    if (param_1 == 0) {
      pHVar2 = LoadLibraryExW(local_18,(HANDLE)0x0,0);
    }
    else {
      pHVar2 = (HMODULE)FUN_00432c19(this,local_18);
    }
    *param_3 = (int)pHVar2;
    SetErrorMode(uMode);
    if (*param_3 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0xc1) {
        if (lpMem != (LPCWSTR)0x0) {
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,lpMem);
          local_18 = (LPCWSTR)0x0;
        }
        local_c = L"syswow64\\ssshim.dll";
        iVar1 = FUN_004329f9(3,(int)&local_14,&local_18);
        lpMem = local_18;
        if (iVar1 < 0) goto LAB_00432e2e;
        if (param_1 == 0) {
          pHVar2 = LoadLibraryExW(local_18,(HANDLE)0x0,0);
        }
        else {
          pHVar2 = (HMODULE)FUN_00432c19(this,local_18);
        }
        *param_3 = (int)pHVar2;
        *(undefined1 *)((int)this + 0x38) = 1;
      }
      if (*param_3 == 0) {
        GetLastError();
      }
    }
  }
LAB_00432e2e:
  if (lpMem != (LPCWSTR)0x0) {
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,0,lpMem);
  }
LAB_00432e49:
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00432e70 */

void __thiscall FUN_00432e70(void *this,void *param_1,int *param_2)

{
  FUN_00432cb0(this,0,param_1,param_2);
  return;
}



/* Function: FUN_00432e8c */

void __thiscall
FUN_00432e8c(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            )

{
  code *pcVar1;
  int iVar2;
  uint dwBytes;
  HANDLE pvVar3;
  undefined2 *lpMem;
  DWORD dwFlags;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)((int)this + 0x1c);
  local_c = 0;
  (*(code *)PTR_guard_check_icall_00437340)(0,param_2,param_1,&local_c);
  iVar2 = (*pcVar1)();
  if ((-1 < iVar2) &&
     (dwBytes = (uint)((ulonglong)local_c * 2), (int)((ulonglong)local_c * 2 >> 0x20) == 0)) {
    pvVar3 = GetProcessHeap();
    lpMem = (undefined2 *)HeapAlloc(pvVar3,0,dwBytes);
    if (lpMem != (undefined2 *)0x0) {
      *lpMem = 0;
      pcVar1 = *(code **)((int)this + 0x20);
      (*(code *)PTR_guard_check_icall_00437340)(0,param_2,param_1,dwBytes >> 1,lpMem,&local_c);
      iVar2 = (*pcVar1)();
      if (iVar2 < 0) {
        dwFlags = 0;
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,dwFlags,lpMem);
      }
      else {
        *param_4 = lpMem;
      }
    }
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00432f70 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FUN_00432f70(void *this,int param_1,void *param_2,undefined4 param_3,int *param_4,int param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  int *piVar1;
  code *pcVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  FARPROC pFVar6;
  undefined4 uVar7;
  int iVar8;
  HANDLE pvVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint *puVar11;
  LPVOID local_7c;
  LPVOID local_78;
  LPVOID local_74;
  LPVOID local_70;
  void *local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  int *local_60;
  int local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  void *local_4c;
  uint local_48 [6];
  undefined4 *local_30;
  int iStack_24;
  int local_20 [2];
  undefined8 local_18;
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)&local_7c;
  local_6c = param_2;
  local_68 = param_3;
  local_60 = param_4;
  local_20[1] = 0;
  local_5c = param_5;
  local_64 = param_6;
  local_58 = param_7;
  local_18 = CONCAT44(local_18._4_4_,param_8);
  local_54 = 0;
  local_50 = 0;
  local_4c = (void *)0x0;
  local_70 = (LPVOID)0x0;
  puVar11 = local_48;
  for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_74 = (LPVOID)0x0;
  local_20[0] = 0;
  local_7c = (LPVOID)0x0;
  local_78 = (LPVOID)0x0;
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
    param_8[1] = 0;
  }
  piVar1 = (int *)((int)this + 8);
  if (*piVar1 == 0) {
    iVar10 = FUN_00432cb0(this,1,param_2,piVar1);
    if (iVar10 < 0) goto LAB_0043325a;
    pFVar6 = GetProcAddress((HMODULE)*piVar1,"SssBindServicingStack");
    *(FARPROC *)((int)this + 0x14) = pFVar6;
    if (pFVar6 != (FARPROC)0x0) {
      pFVar6 = GetProcAddress((HMODULE)*piVar1,"SssReleaseServicingStack");
      *(FARPROC *)((int)this + 0x18) = pFVar6;
      if (pFVar6 != (FARPROC)0x0) {
        pFVar6 = GetProcAddress((HMODULE)*piVar1,"SssGetServicingStackFilePathLength");
        *(FARPROC *)((int)this + 0x1c) = pFVar6;
        if (pFVar6 != (FARPROC)0x0) {
          pFVar6 = GetProcAddress((HMODULE)*piVar1,"SssGetServicingStackFilePath");
          *(FARPROC *)((int)this + 0x20) = pFVar6;
          if (pFVar6 != (FARPROC)0x0) {
            pFVar6 = GetProcAddress((HMODULE)*piVar1,"SssPreloadDownlevelDependencies");
            *(FARPROC *)((int)this + 0x24) = pFVar6;
            pFVar6 = GetProcAddress((HMODULE)*piVar1,"SssGetServicingStackVersion");
            *(FARPROC *)((int)this + 0x28) = pFVar6;
            goto LAB_004330a4;
          }
        }
      }
    }
    GetLastError();
    goto LAB_0043325a;
  }
LAB_004330a4:
  uVar7 = 0;
  piVar1 = (int *)((int)this + 0x10);
  if (*piVar1 == 0) {
    local_4c = local_6c;
    local_30 = &local_54;
    local_50 = 0;
    local_54 = 0xc;
    local_48[0] = 0x28;
    uVar5 = local_48[1] | 0x14;
    if (local_60 != (int *)0x0) {
      if (*local_60 != 0 || local_60[1] != 0) {
        uVar5 = local_48[1] | 0x15;
        local_48[2] = *local_60;
        local_48[3] = local_60[1];
      }
    }
    local_48[1] = uVar5;
    if (local_64 != (undefined4 *)0x0) {
      pcVar2 = *(code **)((int)this + 0x14);
      (*(code *)PTR_guard_check_icall_00437340)(local_48,local_20,local_20 + 1);
      iVar10 = (*pcVar2)();
      if (iVar10 < 0) goto LAB_0043325a;
      iVar10 = FUN_00432e8c(this,local_68,local_20[0],extraout_ECX,&local_78);
      local_7c = local_78;
      if (iVar10 < 0) goto LAB_0043325a;
    }
    uVar5 = local_48[1];
    if ((param_1 != 0) && (uVar5 = local_48[1] | 0x480, local_5c != 0)) {
      iStack_24 = local_5c;
      uVar5 = local_48[1] | 0x580;
    }
    local_48[1] = uVar5;
    pcVar2 = *(code **)((int)this + 0x14);
    (*(code *)PTR_guard_check_icall_00437340)(local_48,piVar1,local_20 + 1);
    iVar10 = (*pcVar2)();
    if (iVar10 < 0) goto LAB_0043325a;
    pcVar2 = *(code **)((int)this + 0x24);
    uVar7 = extraout_ECX_00;
    if (pcVar2 != (code *)0x0) {
      uVar7 = 2;
      if (*(char *)((int)this + 0x38) != '\0') {
        uVar7 = 4;
      }
      (*(code *)PTR_guard_check_icall_00437340)(uVar7,*piVar1,0);
      iVar8 = (*pcVar2)();
      iVar10 = 0;
      if (iVar8 != -0x7ff8ffa9) {
        iVar10 = iVar8;
      }
      uVar7 = extraout_ECX_01;
      if (iVar10 < 0) goto LAB_0043325a;
    }
  }
  iVar10 = FUN_00432e8c(this,local_68,*piVar1,uVar7,&local_74);
  if (iVar10 < 0) {
LAB_00433252:
    local_70 = local_74;
  }
  else {
    puVar4 = (undefined4 *)local_18;
    if (((undefined4 *)local_18 != (undefined4 *)0x0) &&
       (pcVar2 = *(code **)((int)this + 0x28), pcVar2 != (code *)0x0)) {
      local_18 = 0;
      (*(code *)PTR_guard_check_icall_00437340)(0,*(undefined4 *)((int)this + 0x10),&local_18);
      iVar10 = (*pcVar2)();
      if (iVar10 < 0) goto LAB_00433252;
      *puVar4 = (undefined4 *)local_18;
      puVar4[1] = local_18._4_4_;
    }
    pvVar3 = local_7c;
    local_70 = (LPVOID)0x0;
    *local_58 = local_74;
    if (local_64 != (undefined4 *)0x0) {
      local_7c = (LPVOID)0x0;
      *local_64 = pvVar3;
    }
  }
LAB_0043325a:
  if ((local_20[0] != 0) && (pcVar2 = *(code **)((int)this + 0x18), pcVar2 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00437340)(local_20[0]);
    (*pcVar2)();
  }
  pvVar3 = local_70;
  if (local_70 != (LPVOID)0x0) {
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,pvVar3);
  }
  pvVar3 = local_7c;
  if (local_7c != (LPVOID)0x0) {
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,pvVar3);
  }
  FUN_00434300(local_c ^ (uint)&local_7c);
  return;
}



/* Function: FUN_004332d0 */

void __thiscall
FUN_004332d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0x20);
  (*(code *)PTR_guard_check_icall_00437340)(param_1,param_2,param_3,0,0,0,param_4,0);
  (*pcVar1)();
  return;
}



/* Function: FUN_00433310 */

void __thiscall
FUN_00433310(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            )

{
  code *pcVar1;
  LPCWSTR lpMem;
  int iVar2;
  HMODULE pHVar3;
  HANDLE hHeap;
  LPCWSTR local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_c = (LPCWSTR)0x0;
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0x1c);
  (*(code *)PTR_guard_check_icall_00437340)(param_1,param_2,param_3,&local_c);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    pHVar3 = LoadLibraryExW(local_c,(HANDLE)0x0,8);
    if (pHVar3 == (HMODULE)0x0) {
      GetLastError();
    }
    else {
      *param_4 = pHVar3;
    }
  }
  lpMem = local_c;
  if (local_c != (LPCWSTR)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004333c0 */

void __thiscall FUN_004333c0(void *this,undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_18;
  LPCWSTR local_14;
  undefined4 local_10;
  wchar_t *local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_18 = (int *)0x0;
  local_14 = (LPCWSTR)0x0;
  *param_2 = 0;
  local_10 = param_1;
  local_c = L"\\cbscore.dll";
  iVar2 = FUN_004329f9(2,(int)&local_10,&local_14);
  if (-1 < iVar2) {
    iVar2 = FUN_00432560(this,local_14,&local_18);
    piVar3 = local_18;
    if (-1 < iVar2) {
      *param_2 = local_18;
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 8);
      (*(code *)PTR_guard_check_icall_00437340)(piVar3);
      (*pcVar1)();
    }
  }
  if (local_14 != (LPCWSTR)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,local_14);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00433470 */

void __thiscall FUN_00433470(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPCWSTR lpMem;
  int iVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_10;
  LPCWSTR local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  *param_3 = 0;
                    /* WARNING: Load size is inaccurate */
  local_10 = (int *)0x0;
  local_c = (LPCWSTR)0x0;
  pcVar1 = *(code **)(*this + 0x1c);
  (*(code *)PTR_guard_check_icall_00437340)(param_1,param_2,L"cbscore.dll",&local_c);
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    iVar2 = FUN_00432560(this,local_c,&local_10);
    piVar3 = local_10;
    if (-1 < iVar2) {
      *param_3 = local_10;
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 8);
      (*(code *)PTR_guard_check_icall_00437340)(piVar3);
      (*pcVar1)();
    }
  }
  lpMem = local_c;
  if (local_c != (LPCWSTR)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00433530 */

void __thiscall
FUN_00433530(void *this,undefined4 param_1,WCHAR *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  LPCWSTR lpMem;
  undefined4 uVar2;
  UINT UVar3;
  int iVar4;
  HANDLE hHeap;
  LPCWSTR local_218;
  undefined4 local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_214 = 0;
  *param_4 = 0;
  local_218 = (LPCWSTR)0x0;
  memset(local_210,0,0x208);
  if (param_2 == (WCHAR *)0x0) {
    UVar3 = GetSystemWindowsDirectoryW(local_210,0x104);
    if (UVar3 == 0) {
      GetLastError();
      goto LAB_0043361d;
    }
    param_2 = local_210;
  }
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0x20);
  (*(code *)PTR_guard_check_icall_00437340)(param_1,param_2,L"cbscore.dll",param_3,0,0,&local_218,0)
  ;
  iVar4 = (*pcVar1)();
  if ((-1 < iVar4) &&
     (iVar4 = FUN_00432560(this,local_218,&local_214), uVar2 = local_214, -1 < iVar4)) {
    local_214 = 0;
    *param_4 = uVar2;
  }
LAB_0043361d:
  lpMem = local_218;
  if (local_218 != (LPCWSTR)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
    local_218 = (LPCWSTR)0x0;
  }
  CLoadDirectDraw::ReleaseDirectDraw((CLoadDirectDraw *)&local_214);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00433670 */

void __fastcall FUN_00433670(int param_1)

{
  code *pcVar1;
  LPCWSTR lpMem;
  int iVar2;
  HANDLE hHeap;
  LPCWSTR local_14;
  int local_10;
  wchar_t *local_c;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_14 = (LPCWSTR)0x0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(param_1 + 0x18), pcVar1 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00437340)(*(undefined4 *)(param_1 + 0x10));
    (*pcVar1)();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004215bc(*(HMODULE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    local_c = L"\\ssshim.dll";
    local_10 = *(int *)(param_1 + 0xc);
    iVar2 = FUN_004329f9(2,(int)&local_10,&local_14);
    lpMem = local_14;
    if (iVar2 == 0) {
      DeleteFileW(local_14);
      RemoveDirectoryW(*(LPCWSTR *)(param_1 + 0xc));
    }
    if (lpMem != (LPCWSTR)0x0) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
    }
    FUN_0043371f((int *)(param_1 + 0xc));
  }
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0043371f */

void __fastcall FUN_0043371f(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar2 = RtlFreeHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,*param_1);
    if (iVar2 == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00433750 */

/* WARNING: Removing unreachable block (ram,0x00433769) */

int __fastcall FUN_00433750(short *param_1,uint param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  short *local_8;
  
  uVar6 = param_2 >> 1;
  if (uVar6 == 0) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    local_8 = param_1;
    iVar2 = FUN_004337d8(param_1,uVar6,(int *)&local_8);
    if (-1 < iVar2) {
      psVar5 = param_1 + (int)local_8;
      iVar4 = uVar6 - (int)local_8;
      if (iVar4 != 0) {
        iVar2 = (int)local_8 + (iVar4 - uVar6) + 0x7ffffffe;
        iVar7 = param_3 - (int)psVar5;
        do {
          if ((iVar2 == 0) || (sVar1 = *(short *)(iVar7 + (int)psVar5), sVar1 == 0)) break;
          *psVar5 = sVar1;
          psVar5 = psVar5 + 1;
          iVar2 = iVar2 + -1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      psVar3 = psVar5 + -1;
      if (iVar4 != 0) {
        psVar3 = psVar5;
      }
      *psVar3 = 0;
      iVar2 = -0x7ff8ff86;
      if (iVar4 != 0) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



/* Function: FUN_004337d8 */

undefined4 __fastcall FUN_004337d8(short *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*param_1 == 0) break;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar1 = 0x80070057;
  if (iVar2 != 0) {
    uVar1 = 0;
  }
  if (param_3 != (int *)0x0) {
    if (iVar2 == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = param_2 - iVar2;
    }
  }
  return uVar1;
}



/* Function: FUN_00433821 */

void __fastcall FUN_00433821(int *param_1)

{
  if (*param_1 != 0) {
    RtlFreeHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,*param_1);
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00433849 */

int __fastcall FUN_00433849(undefined4 *param_1)

{
  int iVar1;
  char *local_14;
  char *local_10;
  undefined4 local_c;
  char *local_8;
  
                    /* WARNING: Load size is inaccurate */
  if ((*(int *)(*ThreadLocalStoragePointer + 0x98) < DAT_00436798) &&
     (FUN_004353a4(&DAT_00436798), DAT_00436798 == -1)) {
    DAT_00436790 = 0;
    DAT_004366d8 = RtlAllocateAndInitializeSid(&DAT_0041b544,1,0x12,0,0,0,0,0,0,0,&DAT_00436790);
    FUN_004345d3(FUN_004357e0);
    FUN_00435352(&DAT_00436798);
  }
  *param_1 = DAT_00436790;
  iVar1 = DAT_004366d8;
  if (DAT_004366d8 < 0) {
    local_14 = "onecore\\base\\wcp\\rtllib\\nativelib\\security_library.cpp";
    local_10 = "Windows::WCP::Implementation::Rtl::GetSystemSid";
    local_c = 0x8e;
    local_8 = "g_SystemSidStatus";
    FUN_00433f71(&local_14,DAT_004366d8);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_00433905 */

int __fastcall FUN_00433905(undefined4 *param_1)

{
  int iVar1;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
                    /* WARNING: Load size is inaccurate */
  if (*(int *)(*ThreadLocalStoragePointer + 0x98) < DAT_00436794) {
    FUN_004353a4(&DAT_00436794);
    if (DAT_00436794 == -1) {
      DAT_00436788 = 0;
      DAT_0043678c = 0;
      local_8 = 0;
      DAT_004366dc = FUN_00433849(&local_8);
      if (-1 < DAT_004366dc) {
        DAT_004366dc = FUN_004339cd(local_8,local_8);
      }
      FUN_004345d3(FUN_004357f0);
      FUN_00435352(&DAT_00436794);
    }
  }
  *param_1 = DAT_00436788;
  iVar1 = DAT_004366dc;
  if (DAT_004366dc < 0) {
    local_18 = "onecore\\base\\wcp\\rtllib\\nativelib\\security_library.cpp";
    local_14 = "Windows::WCP::Implementation::Rtl::GetSystemSecurity";
    local_10 = 0xd9;
    local_c = "g_SystemSecurityStatus";
    FUN_00433f71(&local_18,DAT_004366dc);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_004339cd */

void FUN_004339cd(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *local_30;
  char *local_2c;
  int local_28;
  char *local_24;
  undefined1 local_20 [20];
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)&stack0xfffffffc;
  iVar2 = RtlCreateSecurityDescriptor(local_20,1);
  if (iVar2 < 0) {
    local_28 = 0x1d3;
    local_24 = "RtlCreateSecurityDescriptor( &AbsoluteSD, (1))";
  }
  else {
    iVar2 = RtlSetOwnerSecurityDescriptor(local_20,param_1,0);
    if (iVar2 < 0) {
      local_28 = 0x1dc;
      local_24 = "::RtlSetOwnerSecurityDescriptor( &AbsoluteSD, (PSID)Owner, 0)";
    }
    else {
      iVar2 = RtlSetGroupSecurityDescriptor(local_20,param_2,0);
      if (-1 < iVar2) {
        local_28 = 0;
        local_24 = (char *)0x0;
        iVar3 = FUN_00433c1c(&local_28,local_20);
        pcVar1 = local_24;
        iVar2 = local_28;
        if (-1 < iVar3) {
          local_28 = DAT_00436788;
          DAT_00436788 = iVar2;
          local_24 = DAT_0043678c;
          DAT_0043678c = pcVar1;
        }
        FUN_00433bf0(&local_28);
        goto LAB_00433aaf;
      }
      local_28 = 0x1e4;
      local_24 = "::RtlSetGroupSecurityDescriptor( &AbsoluteSD, (PSID)Group, 0)";
    }
  }
  local_30 = "onecore\\base\\wcp\\rtllib\\nativelib\\security_library.cpp";
  local_2c = "Windows::WCP::Implementation::Rtl::CreateSecurityDescriptorFromParts";
  FUN_00433f71(&local_30,iVar2);
LAB_00433aaf:
  FUN_00434300(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00433ac8 */

void __fastcall FUN_00433ac8(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  char **this;
  char *local_54;
  char *local_50;
  undefined4 local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  undefined4 local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  char local_9;
  uint local_8;
  
  local_8 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  *param_1 = 0;
  piVar1 = FUN_00424f6d(&local_10);
  iVar2 = NtOpenThreadToken(0xfffffffe,8,0,piVar1);
  if ((iVar2 == -0x3fffff84) || (-1 < iVar2)) {
    if ((local_10 == 0) || (local_10 == -1)) {
      piVar1 = FUN_00424f6d(&local_10);
      iVar2 = NtOpenProcessToken(0xffffffff,8,piVar1);
      if (iVar2 < 0) {
        local_44 = "onecore\\base\\wcp\\rtllib\\nativelib\\security_library.cpp";
        this = &local_44;
        local_40 = "Windows::WCP::Implementation::Rtl::CanSetSystemOwner";
        local_3c = 0x2de;
        local_38 = 
        "NtOpenProcessToken( ( (HANDLE)(LONG_PTR) -1 ), (0x0008), Token.GetInitPointer())";
        goto LAB_00433b6d;
      }
    }
    local_9 = '\0';
    local_1c = 0x12;
    local_24 = 1;
    local_20 = 1;
    local_18 = 0;
    local_14 = 0;
    iVar2 = NtPrivilegeCheck(local_10,&local_24,&local_9);
    if (-1 < iVar2) {
      *param_1 = local_9 != '\0';
      goto LAB_00433bd1;
    }
    local_54 = "onecore\\base\\wcp\\rtllib\\nativelib\\security_library.cpp";
    this = &local_54;
    local_50 = "Windows::WCP::Implementation::Rtl::CanSetSystemOwner";
    local_4c = 0x2e5;
    local_48 = "NtPrivilegeCheck(Token, &PrivilegeSet, &Result)";
  }
  else {
    local_34 = "onecore\\base\\wcp\\rtllib\\nativelib\\security_library.cpp";
    this = &local_34;
    local_30 = "Windows::WCP::Implementation::Rtl::CanSetSystemOwner";
    local_2c = 0x2d6;
    local_28 = "NtOpenThreadToken( ( (HANDLE)(LONG_PTR) -2 ), (0x0008), 0, Token.GetInitPointer())";
  }
LAB_00433b6d:
  FUN_00433f71(this,iVar2);
LAB_00433bd1:
  FUN_0042551b(&local_10);
  FUN_00434300(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00433bf0 */

void __fastcall FUN_00433bf0(int *param_1)

{
  if (*param_1 != 0) {
    RtlFreeHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



/* Function: FUN_00433c1c */

void __thiscall FUN_00433c1c(void *this,void *param_1)

{
  int iVar1;
  size_t _Size;
  void *_Dst;
  char *local_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined1 local_18 [4];
  ushort local_14 [2];
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)&stack0xfffffffc;
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) goto LAB_00433c46;
  do {
    RtlRaiseStatus(0xc00000e5);
LAB_00433c46:
    iVar1 = RtlGetControlSecurityDescriptor(param_1,local_14,local_18);
    if (iVar1 < 0) {
      local_20 = 0x3d0;
      local_1c = "RtlGetControlSecurityDescriptor(pTempSd, &Control, &Revision)";
      goto LAB_00433c69;
    }
    if ((local_14[0] & 0x8000) != 0) {
      _Size = RtlLengthSecurityDescriptor(param_1);
      _Dst = (void *)RtlAllocateHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,_Size);
      *(void **)this = _Dst;
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_1,_Size);
        *(size_t *)((int)this + 4) = _Size;
        goto LAB_00433cd6;
      }
      local_20 = 0x3d6;
      local_1c = 
      "m_pSD = RtlAllocateHeap((((PPEB)__readfsdword(((LONG)(LONG_PTR)&(((TEB *)0)->ProcessEnvironmentBlock))))->ProcessHeap), 0, Size)"
      ;
LAB_00433cbf:
      iVar1 = -0x3fffffe9;
      goto LAB_00433c69;
    }
    local_10 = 0;
    iVar1 = RtlMakeSelfRelativeSD(param_1,0,&local_10);
    if ((iVar1 == -0x7ffffffb) || (iVar1 == -0x3fffffdd)) {
      iVar1 = RtlAllocateHeap(*(undefined4 *)((int)ProcessEnvironmentBlock + 0x18),0,local_10);
      *(int *)this = iVar1;
      if (iVar1 == 0) {
        local_20 = 0x3e6;
        local_1c = 
        "m_pSD = ::RtlAllocateHeap((((PPEB)__readfsdword(((LONG)(LONG_PTR)&(((TEB *)0)->ProcessEnvironmentBlock))))->ProcessHeap), 0, cbSecurityDescriptor)"
        ;
        goto LAB_00433cbf;
      }
      *(undefined4 *)((int)this + 4) = local_10;
      iVar1 = RtlMakeSelfRelativeSD(param_1,iVar1,&local_10);
      if (-1 < iVar1) goto LAB_00433cd6;
      local_20 = 0x3ed;
      local_1c = "RtlMakeSelfRelativeSD( pTempSd, m_pSD, &cbSecurityDescriptor)";
      goto LAB_00433c69;
    }
  } while (-1 < iVar1);
  local_20 = 0x3e4;
  local_1c = "((TmpStatus == ((NTSTATUS)0x80000005L)) || (TmpStatus == ((NTSTATUS)0xC0000023L)))";
LAB_00433c69:
  local_24 = "Windows::Auto<struct _SECURITY_DESCRIPTOR>::Assign";
  local_28 = "onecore\\base\\wcp\\rtllib\\nativelib\\security_library.cpp";
  FUN_00433f71(&local_28,iVar1);
LAB_00433cd6:
  FUN_00434300(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00433d89 */

void __fastcall FUN_00433d89(undefined4 param_1,LPWSTR param_2)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  char *local_24;
  char *local_20;
  undefined4 local_1c;
  char *local_18;
  code *local_14;
  HMODULE local_10;
  uint local_c;
  
  local_c = DAT_00436100 ^ (uint)&stack0xfffffffc;
  local_10 = (HMODULE)0x0;
  local_14 = (code *)0x0;
  if (param_2 != (LPWSTR)0x0) {
    *param_2 = L'\0';
  }
  uVar1 = FUN_00433ea0((int *)&local_10,&local_14);
  if ((int)uVar1 < 0) {
    uVar1 = GetTempPathW(0x104,param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_00437340)();
    uVar1 = (*local_14)();
  }
  if (uVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0) {
      uVar1 = 0x36fd;
    }
    else {
      uVar1 = GetLastError();
      if (uVar1 == 0) {
        uVar1 = RtlRaiseStatus(0xc00000e5);
        goto LAB_00433e48;
      }
    }
    local_1c = 0x52;
    local_18 = "GetLastError";
    uVar3 = uVar1 & 0xffff | 0x80070000;
    if ((int)uVar1 < 1) {
      uVar3 = uVar1;
    }
  }
  else {
LAB_00433e48:
    if (uVar1 != 0xffffffff) {
      if (uVar1 < 0x105) {
        if (local_10 != (HMODULE)0x0) {
          FUN_004215bc(local_10);
        }
      }
      else if (local_10 != (HMODULE)0x0) {
        FUN_004215bc(local_10);
      }
      goto LAB_00433e8b;
    }
    local_1c = 0x56;
    uVar3 = 0x8007050c;
    local_18 = "static_cast<DWORD>(1292L)";
  }
  local_20 = "Windows::COM::GetTemporaryPath";
  local_24 = "onecore\\base\\wcp\\rtllib\\win32lib\\pathwin32_library.cpp";
  FUN_00433f71(&local_24,uVar3);
  if (local_10 != (HMODULE)0x0) {
    FUN_004215bc(local_10);
  }
LAB_00433e8b:
  FUN_00434300(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00433ea0 */

uint FUN_00433ea0(int *param_1,undefined4 *param_2)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  DWORD DVar3;
  char *local_14;
  char *local_10;
  undefined4 local_c;
  char *local_8;
  
  if (param_1 == (int *)0x0) {
    local_c = 0x6c;
    local_8 = "Not-null check failed: phDll";
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
      pHVar1 = LoadLibraryExW(L"kernelbase.dll",(HANDLE)0x0,0x800);
      FUN_00425173(param_1,(int)pHVar1);
      if (*param_1 != 0) {
        pFVar2 = GetProcAddress((HMODULE)*param_1,"GetTempPath2W");
        *param_2 = pFVar2;
        if (pFVar2 != (FARPROC)0x0) {
          return 0;
        }
      }
      DVar3 = GetLastError();
      if (DVar3 == 0) {
        DVar3 = 0x36fd;
      }
      else {
        DVar3 = GetLastError();
        if (DVar3 == 0) {
          RtlRaiseStatus(0xc00000e5);
          return 0;
        }
      }
      if ((int)DVar3 < 1) {
        return DVar3;
      }
      return DVar3 & 0xffff | 0x80070000;
    }
    local_c = 0x6d;
    local_8 = "Not-null check failed: ppfn";
  }
  local_10 = "Windows::COM::LoadSystemLibraryAndFunction";
  local_14 = "onecore\\base\\wcp\\rtllib\\win32lib\\pathwin32_library.cpp";
  FUN_00433f71(&local_14,-0x7fffbffd);
  return 0x80004003;
}



/* Function: FUN_00433f71 */

void __thiscall FUN_00433f71(void *this,int param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  if (param_1 == DAT_004366e0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == -0x3fffff1b) {
    if (this == (void *)0x0) {
      puVar2 = &DAT_00402986;
      uVar4 = 0;
      puVar3 = &DAT_00402986;
    }
    else {
      uVar4 = *(undefined4 *)((int)this + 8);
                    /* WARNING: Load size is inaccurate */
      puVar3 = *this;
      puVar2 = *(undefined **)((int)this + 0xc);
    }
    DbgPrintEx(0x65,0,"\n*** Assertion failed: %s\n***   Source File: %s, line %ld\n\n",puVar2,
               puVar3,uVar4);
    RtlRaiseStatus(0xc0000420);
  }
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_00433fd7 */

void FUN_00433fd7(undefined4 param_1)

{
  FUN_00433ff3(param_1);
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_00433ff3 */

int __cdecl FUN_00433ff3(undefined4 param_1)

{
  int iVar1;
  
  do {
    iVar1 = o_malloc(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = o__callnewh(param_1);
  } while (iVar1 != 0);
  return 0;
}



/* Function: FUN_00434030 */

undefined4 FUN_00434030(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00434055();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00434061();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00434055 */

undefined * FUN_00434055(void)

{
  return &DAT_004361a0;
}



/* Function: FUN_00434061 */

undefined * FUN_00434061(void)

{
  return &DAT_004361a8;
}



/* Function: FUN_00434070 */

undefined4 FUN_00434070(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00434055();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00434061();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_004340a0 */

void FUN_004340a0(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(1);
  uVar3 = FUN_004346e0();
  o__set_fmode(uVar3);
  uVar3 = FUN_004346d7();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_0043495c();
    FUN_004345d3(FUN_00434990);
    uVar3 = FUN_004346cd();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_004346ec();
      guard_check_icall();
      guard_check_icall();
      FUN_00434707();
      uVar3 = FUN_004346d7();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_004346fe();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_004346d7();
      iVar5 = thunk_FUN_004346d7();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_00434769();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00434140 */

undefined4 FUN_00434140(void)

{
  FUN_0043472e();
  return 0;
}



/* Function: FUN_00434150 */

void FUN_00434150(void)

{
  undefined4 uVar1;
  
  FUN_004348d9();
  uVar1 = FUN_004346d7();
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
  undefined **ppuVar5;
  int *piVar6;
  uint uVar7;
  int unaff_ESI;
  undefined4 local_24;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_004361b0 != 1) {
      if (DAT_004361b0 == 0) {
        DAT_004361b0 = 1;
        iVar4 = initterm_e(&DAT_00401280,&DAT_00401298);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&LAB_0040123c,&DAT_00401270);
        DAT_004361b0 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      ppuVar5 = FUN_00434751();
      if ((*ppuVar5 != (undefined *)0x0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)ppuVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*ppuVar5;
        (*(code *)PTR_guard_check_icall_00437340)(0,2,0);
        (*pcVar1)();
      }
      ppuVar5 = FUN_0043475d();
      if ((*ppuVar5 != (undefined *)0x0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)ppuVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*ppuVar5);
      }
      o__get_initial_wide_environment();
      piVar6 = (int *)o___p___wargv();
      iVar4 = *piVar6;
      piVar6 = (int *)o___p___argc();
      unaff_ESI = FUN_0041ef48(*piVar6,iVar4);
      uVar7 = FUN_00434891();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_004342db;
    }
  }
  FUN_00434769();
LAB_004342db:
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



/* Function: FUN_00434300 */

void __fastcall FUN_00434300(int param_1)

{
  if (param_1 == DAT_00436100) {
    return;
  }
  FUN_00434a5f();
  return;
}



/* Function: FUN_00434314 */

void __cdecl FUN_00434314(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_00434330 */

undefined4 * __thiscall FUN_00434330(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
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
      if (DAT_004361b4 != 0) {
        uVar3 = DAT_004361b4;
        uVar1 = DAT_004361b4;
      }
      DAT_004361b4 = uVar1;
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
    DAT_004361d1 = 1;
  }
  FUN_00434c4c();
  cVar1 = FUN_004346fe();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_004346fe();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_004346fe();
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
  
  if (DAT_004361d0 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00434769();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_004361b8 = 0xffffffff;
    _DAT_004361bc = 0xffffffff;
    _DAT_004361c0 = 0xffffffff;
    _DAT_004361c4 = 0xffffffff;
    _DAT_004361c8 = 0xffffffff;
    _DAT_004361cc = 0xffffffff;
LAB_00434494:
    DAT_004361d0 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_004361b8);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_004361c4);
      if (uVar3 == 0) goto LAB_00434494;
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
  iVar1 = DAT_004361b4;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_004361b4 = 0;
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
  if ((DAT_004361d1 == '\0') || (param_2 == '\0')) {
    FUN_004346fe();
    FUN_004346fe();
  }
  return 1;
}



/* Function: FUN_0043459d */

undefined4 __cdecl FUN_0043459d(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_004361b8 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_004361b8,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_004345d3 */

int __cdecl FUN_004345d3(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043459d(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: __except_handler4 */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2019 Release */

void __cdecl
__except_handler4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00435489(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_00436100,FUN_00434300,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00434627 */

uint FUN_00434627(void)

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
  if ((DAT_00436100 == 0xbb40e64e) || ((DAT_00436100 & 0xffff0000) == 0)) {
    DAT_00436100 = FUN_00434627();
    if (DAT_00436100 == 0xbb40e64e) {
      DAT_00436100 = 0xbb40e64f;
    }
    else if ((DAT_00436100 & 0xffff0000) == 0) {
      DAT_00436100 = DAT_00436100 | (DAT_00436100 | 0x4711) << 0x10;
    }
  }
  DAT_00436140 = ~DAT_00436100;
  return;
}



/* Function: FUN_004346cd */

undefined4 FUN_004346cd(void)

{
  return 1;
}



/* Function: FUN_004346d7 */

undefined4 FUN_004346d7(void)

{
  return 0;
}



/* Function: FUN_004346e0 */

undefined4 FUN_004346e0(void)

{
  return 0x4000;
}



/* Function: FUN_004346ec */

void FUN_004346ec(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_004361d8);
  return;
}



/* Function: FUN_004346fe */

undefined1 FUN_004346fe(void)

{
  return 1;
}



/* Function: FUN_00434707 */

void FUN_00434707(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_00434769();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0043472e */

void FUN_0043472e(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00434055();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00434061();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_00434751 */

undefined ** FUN_00434751(void)

{
  return &PTR_tls_callback_0_00401010;
}



/* Function: FUN_0043475d */

undefined ** FUN_0043475d(void)

{
  return &PTR_tls_callback_1_00401014;
}



/* Function: FUN_00434769 */

void FUN_00434769(void)

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
  FUN_0043494e();
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
    FUN_0043494e();
  }
  return;
}



/* Function: thunk_FUN_004346d7 */

undefined4 thunk_FUN_004346d7(void)

{
  return 0;
}



/* Function: FUN_00434891 */

uint FUN_00434891(void)

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



/* Function: FUN_004348d9 */

void FUN_004348d9(void)

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
    Unwind_00434fd0();
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return 0;
}



/* Function: FUN_0043494e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043494e(void)

{
  _DAT_004361e0 = 0;
  return;
}



/* Function: FUN_0043495c */

/* WARNING: Removing unreachable block (ram,0x0043496e) */
/* WARNING: Removing unreachable block (ram,0x0043496f) */
/* WARNING: Removing unreachable block (ram,0x00434975) */
/* WARNING: Removing unreachable block (ram,0x0043497f) */
/* WARNING: Removing unreachable block (ram,0x00434986) */

void FUN_0043495c(void)

{
  return;
}



/* Function: FUN_00434990 */

/* WARNING: Removing unreachable block (ram,0x004349a2) */
/* WARNING: Removing unreachable block (ram,0x004349a3) */
/* WARNING: Removing unreachable block (ram,0x004349a9) */
/* WARNING: Removing unreachable block (ram,0x004349b3) */
/* WARNING: Removing unreachable block (ram,0x004349ba) */

void FUN_00434990(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00436100 ^ (uint)&param_2;
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



/* Function: FUN_00434a2f */

void __cdecl FUN_00434a2f(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00434a5f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434a5f(void)

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
  _DAT_004362e0 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_004362e8 = (undefined4)uVar9;
  _DAT_004362f8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_004362fc = &stack0x00000004;
  _DAT_00436238 = 0x10001;
  _DAT_004361e8 = 0xc0000409;
  _DAT_004361ec = 1;
  _DAT_004361f8 = 1;
  DAT_004361fc = 2;
  _DAT_004361f4 = unaff_retaddr;
  _DAT_004362c4 = in_GS;
  _DAT_004362c8 = in_FS;
  _DAT_004362cc = in_ES;
  _DAT_004362d0 = in_DS;
  _DAT_004362d4 = unaff_EDI;
  _DAT_004362d8 = unaff_ESI;
  _DAT_004362dc = unaff_EBX;
  _DAT_004362e4 = uVar3;
  _DAT_004362ec = unaff_EBP;
  DAT_004362f0 = unaff_retaddr;
  _DAT_004362f4 = in_CS;
  _DAT_00436300 = in_SS;
  FUN_00434a2f((_EXCEPTION_POINTERS *)&PTR_DAT_00401008);
  return;
}



/* Function: FUN_00434b61 */

void FUN_00434b61(void)

{
  FUN_00434b75(8);
  return;
}



/* Function: FUN_00434b75 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00434b75(undefined4 param_1)

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
  _DAT_004362e0 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_004362e8 = (undefined4)uVar9;
  _DAT_004362f8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_004362fc = &param_1;
  _DAT_004361e8 = 0xc0000409;
  _DAT_004361ec = 1;
  _DAT_004361f8 = 1;
  DAT_004361fc = param_1;
  _DAT_004361f4 = unaff_retaddr;
  _DAT_004362c4 = in_GS;
  _DAT_004362c8 = in_FS;
  _DAT_004362cc = in_ES;
  _DAT_004362d0 = in_DS;
  _DAT_004362d4 = unaff_EDI;
  _DAT_004362d8 = unaff_ESI;
  _DAT_004362dc = unaff_EBX;
  _DAT_004362e4 = uVar3;
  _DAT_004362ec = unaff_EBP;
  DAT_004362f0 = unaff_retaddr;
  _DAT_004362f4 = in_CS;
  _DAT_00436300 = in_SS;
  FUN_00434a2f((_EXCEPTION_POINTERS *)&PTR_DAT_00401008);
  return;
}



/* Function: FUN_00434c4c */

/* WARNING: Removing unreachable block (ram,0x00434cbd) */
/* WARNING: Removing unreachable block (ram,0x00434c81) */
/* WARNING: Removing unreachable block (ram,0x00434d35) */

undefined4 FUN_00434c4c(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_00436504 = 0;
  DAT_00436144 = DAT_00436144 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00436144;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_00436508 = DAT_00436508 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_00436508 = DAT_00436508 | 2;
      }
    }
    DAT_00436504 = 1;
    uVar5 = DAT_00436144 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_00436144 | 6;
      DAT_00436504 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_00436504 = 3;
        uVar5 = DAT_00436144 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_00436504 = 5;
          uVar5 = DAT_00436144 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_00436144 = DAT_00436144 | 0x6e;
            DAT_00436504 = 6;
            uVar5 = DAT_00436144;
          }
        }
      }
    }
  }
  DAT_00436144 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0043614c != 0;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: o___p___argc */

void __cdecl o___p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___argc();
  return;
}



/* Function: o___p___wargv */

void __cdecl o___p___wargv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___wargv();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___stdio_common_vsprintf */

void __cdecl o___stdio_common_vsprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vsprintf();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__errno */

void __cdecl o__errno(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__errno();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__free_base */

void __cdecl o__free_base(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__free_base();
  return;
}



/* Function: o__get_initial_wide_environment */

void __cdecl o__get_initial_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_initial_wide_environment();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__malloc_base */

void __cdecl o__malloc_base(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__malloc_base();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: Unwind@00434fd0 */

void __cdecl Unwind_00434fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: o_wcstoul */

void __cdecl o_wcstoul(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_wcstoul();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x00434ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x00435000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: FUN_00435018 */

int __cdecl
FUN_00435018(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_00434055();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_00435052 */

void __cdecl
FUN_00435052(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00435018(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: FUN_00435075 */

int __cdecl
FUN_00435075(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_00434055();
  iVar2 = o___stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_004350af */

void __cdecl
FUN_004350af(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00435075(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: tls_callback_0 */

void tls_callback_0(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined **ppuVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004356c1;
  local_10 = ExceptionList;
  uVar3 = DAT_00436100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 == 2) &&
     (iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4),
     *(char *)(iVar1 + 8) != '\x01')) {
    *(undefined1 *)(iVar1 + 8) = 1;
    for (ppuVar4 = &PTR_FUN_00401278; ppuVar4 != (undefined **)&DAT_0040127c; ppuVar4 = ppuVar4 + 1)
    {
      pcVar2 = (code *)*ppuVar4;
      if (pcVar2 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_00437340)(uVar3);
        (*pcVar2)();
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: tls_callback_1 */

void tls_callback_1(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    piVar5 = *(int **)(iVar1 + 0x10);
    if (piVar5 != (int *)0x0) {
      while( true ) {
        iVar4 = *piVar5 + -1;
        if (-1 < iVar4) {
          piVar3 = piVar5 + *piVar5 + 1;
          do {
            pcVar2 = (code *)*piVar3;
            if (pcVar2 != (code *)0x0) {
              (*(code *)PTR_guard_check_icall_00437340)();
              (*pcVar2)();
            }
            piVar3 = piVar3 + -1;
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
        }
        piVar3 = (int *)piVar5[1];
        if (piVar3 == (int *)0x0) break;
        o__free_base(piVar5);
        *(int **)(iVar1 + 0x10) = piVar3;
        piVar5 = piVar3;
      }
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
  }
  return;
}



/* Function: FUN_004351f9 */

undefined4 __cdecl FUN_004351f9(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  piVar2 = *(int **)(iVar1 + 0x10);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(iVar1 + 0x18);
  }
  else {
    if (*piVar2 != 0x1e) goto LAB_00435256;
    piVar2 = (int *)o__malloc_base(0x80);
    o__free_base(0);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar2[1] = *(int *)(iVar1 + 0x10);
  }
  *piVar2 = 0;
  *(int **)(iVar1 + 0x10) = piVar2;
LAB_00435256:
  piVar2[*piVar2 + 2] = param_1;
  *piVar2 = *piVar2 + 1;
  return 0;
}



/* Function: FUN_00435270 */

undefined4 FUN_00435270(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  __scrt_initialize_thread_safe_statics_platform_specific();
  uVar2 = ___scrt_initialize_onexit_tables(0);
  if ((char)uVar2 != '\0') {
    FUN_004345d3(FUN_00435330);
    return 0;
  }
  FUN_00434769();
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
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_00436514,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule != (HMODULE)0x0) ||
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule != (HMODULE)0x0)) {
    pFVar2 = GetProcAddress(hModule,"SleepConditionVariableCS");
    pFVar3 = GetProcAddress(hModule,"WakeAllConditionVariable");
    if (((pFVar2 != (FARPROC)0x0) && (pFVar3 != (FARPROC)0x0)) ||
       (DAT_00436510 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0),
       pFVar2 = DAT_0043652c, pFVar3 = DAT_00436530, DAT_00436510 != (HANDLE)0x0)) {
      DAT_00436530 = pFVar3;
      DAT_0043652c = pFVar2;
      return;
    }
  }
  FUN_00434769();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00435330 */

void FUN_00435330(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00436514);
  if (DAT_00436510 != (HANDLE)0x0) {
    CloseHandle(DAT_00436510);
  }
  return;
}



/* Function: FUN_00435352 */

void FUN_00435352(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00436514);
  DAT_00436148 = DAT_00436148 + 1;
  *param_1 = DAT_00436148;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x98) = DAT_00436148;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00436514);
  FUN_004353fb();
  return;
}



/* Function: FUN_004353a4 */

void __cdecl FUN_004353a4(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00436514);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_004353ea:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00436514);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x98) =
           DAT_00436148;
      goto LAB_004353ea;
    }
    FUN_00435439();
  } while( true );
}



/* Function: FUN_004353fb */

void FUN_004353fb(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_00436530;
  if (DAT_00436530 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(&DAT_0043650c);
    (*pcVar1)();
    return;
  }
  SetEvent(DAT_00436510);
  ResetEvent(DAT_00436510);
  return;
}



/* Function: FUN_00435439 */

void FUN_00435439(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_0043652c;
  if (DAT_0043652c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00437340)(&DAT_0043650c,&DAT_00436514,0xffffffff);
    (*pcVar1)();
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00436514);
  WaitForSingleObjectEx(DAT_00436510,100,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00436514);
  return;
}



/* Function: FUN_00435489 */

int __cdecl FUN_00435489(int param_1)

{
  uint uVar1;
  
  if ((DAT_00436504 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: FUN_00435522 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00435522(void)

{
  uint unaff_EBP;
  
  FUN_00434300(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00436100 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00436100 ^ (uint)&param_1;
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



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00435621. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: memcmp */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043562d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00435639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00435645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@00435651 */

void Unwind_00435651(void)

{
  int unaff_EBP;
  
  FUN_0041ce30((int *)(unaff_EBP + -200));
  return;
}



/* Function: Unwind@00435691 */

void Unwind_00435691(void)

{
  int unaff_EBP;
  
  FUN_0041f9ed((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: FUN_00435720 */

void FUN_00435720(void)

{
  ATL::CWin32Heap::~CWin32Heap((CWin32Heap *)&DAT_00436544);
  return;
}



/* Function: FUN_00435730 */

void FUN_00435730(void)

{
  PTR_PTR_00436078 = (undefined *)&PTR_FUN_00401050;
  return;
}



/* Function: FUN_00435750 */

int FUN_00435750(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int in_EAX;
  int *piVar4;
  int *lpMem;
  int *local_8;
  
  lpMem = DAT_00436098;
  if (DAT_00436098 != (int *)0x0) {
    local_8 = DAT_00436098;
    cVar1 = FUN_00420ee6();
    if (cVar1 == '\0') {
      iVar2 = FUN_0042583f(lpMem + 1,&local_8);
      *lpMem = *lpMem + -1;
      piVar4 = local_8;
      if (*lpMem == 0) {
        FUN_0042513c(lpMem + 2,0);
        FUN_0042513c(lpMem + 3,0);
        if (local_8 != (int *)0x0) {
          DVar3 = GetLastError();
          FUN_00421734(local_8);
          SetLastError(DVar3);
        }
        FUN_004255bf((int)lpMem);
        DVar3 = 0;
        hHeap = GetProcessHeap();
        iVar2 = HeapFree(hHeap,DVar3,lpMem);
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        iVar2 = FUN_00421734(piVar4);
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



/* Function: FUN_00435770 */

void FUN_00435770(void)

{
  FUN_004250a7((int *)&DAT_0043615c);
  return;
}



/* Function: FUN_00435780 */

void FUN_00435780(void)

{
  FUN_00424fb4(&DAT_004366e4);
  return;
}



/* Function: FUN_00435790 */

void FUN_00435790(void)

{
  if (DAT_00436550 != (HMODULE)0x0) {
    FUN_004215bc(DAT_00436550);
    DAT_00436550 = (HMODULE)0x0;
  }
  return;
}



/* Function: thunk_FUN_0042551b */

void __fastcall thunk_FUN_0042551b(int *param_1)

{
                    /* WARNING: Load size is inaccurate */
  FUN_0042551b((int *)(*ThreadLocalStoragePointer + 0x9c));
  return;
}



/* Function: FUN_004357d0 */

void FUN_004357d0(void)

{
  FUN_004329b8(0x436554);
  return;
}



/* Function: FUN_004357e0 */

void FUN_004357e0(void)

{
  FUN_00433821(&DAT_00436790);
  return;
}



/* Function: FUN_004357f0 */

void FUN_004357f0(void)

{
  FUN_00433bf0(&DAT_00436788);
  return;
}



