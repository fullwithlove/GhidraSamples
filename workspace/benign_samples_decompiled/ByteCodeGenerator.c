/* Function: FUN_00402e30 */

void FUN_00402e30(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_00410308)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00402eb3 */

void FUN_00402eb3(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x458;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_00402f48 */

uint __thiscall FUN_00402f48(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_00402f7f:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_00402f7f;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_00402f8b */

void __fastcall
FUN_00402f8b(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  FUN_00403370(param_20,local_18);
  FUN_004033be(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_00403370(param_17,local_48);
  FUN_004033be(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_004033be(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00403370(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_004033be(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_004033be(param_8,local_d8);
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
  FUN_00402eb3(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x12,local_128);
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403146 */

void __fastcall
FUN_00403146(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  FUN_004033be(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_00403370(param_19,local_48);
  FUN_004033be(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00403370(param_16,local_78);
  FUN_004033be(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_004033be(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_00403370(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_004033be(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_004033be(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00402eb3(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x14,local_148);
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403339 */

void __fastcall FUN_00403339(int param_1,byte *param_2)

{
  _EVENT_DATA_DESCRIPTOR local_28 [2];
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  FUN_00402eb3(param_1,param_2,(LPCGUID)0x0,(LPCGUID)0x0,2,local_28);
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403370 */

void __thiscall FUN_00403370(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)&DAT_00401748;
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



/* Function: FUN_004033be */

void __thiscall FUN_004033be(void *this,undefined4 *param_1)

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



/* Function: FUN_00403400 */

void FUN_00403400(void)

{
  FUN_0040d8d7(FUN_0040ec00);
  return;
}



/* Function: FUN_00403420 */

void FUN_00403420(void)

{
  FUN_0040d8d7(FUN_0040ec20);
  return;
}



/* Function: FUN_00403440 */

void FUN_00403440(void)

{
  DAT_0040f564 = FUN_00408fd0;
  DAT_0040f53c = &PTR_s_WilError_03_0040f05c;
  DAT_0040f550 = &DAT_0040f168;
  return;
}



/* Function: FUN_00403470 */

void FUN_00403470(void)

{
  DAT_0040f588 = FUN_00408690;
  DAT_0040f56c = DebugBreak;
  DAT_0040f584 = FUN_004086d0;
  DAT_0040f55c = FUN_004090a0;
  DAT_0040f54c = FUN_00409190;
  DAT_0040f58c = FUN_004090f0;
  DAT_0040f568 = FUN_00409140;
  return;
}



/* Function: FUN_004034c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004034c0(void)

{
  _DAT_0040f570 = FUN_0040a9e0;
  _DAT_0040f580 = FUN_0040a9f0;
  return;
}



/* Function: FUN_004034e0 */

void FUN_004034e0(void)

{
  FUN_0040cbb2();
  FUN_0040d8d7(FUN_0040ec30);
  return;
}



/* Function: FUN_00403500 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403500(void)

{
  _DAT_0040f674 = FUN_0040c7a0;
  _DAT_0040f678 = FUN_0040c820;
  _DAT_0040f684 = FUN_0040c890;
  return;
}



/* Function: FUN_00403525 */

undefined4 __fastcall FUN_00403525(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00403550 */

undefined4 __fastcall
FUN_00403550(undefined2 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00403628((int)param_1,param_2,param_1,param_3,param_4);
  }
  return uVar1;
}



/* Function: FUN_00403587 */

undefined4 __cdecl FUN_00403587(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00403628((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_004035cb */

undefined4 __fastcall FUN_004035cb(short *param_1,int param_2,int *param_3)

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



/* Function: FUN_00403628 */

undefined4 __fastcall
FUN_00403628(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_0040e515(param_1,param_2,uVar1,param_4,param_5);
  if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
    uVar3 = 0x8007007a;
  }
  else if (uVar2 != uVar1) {
    return 0;
  }
  *(undefined2 *)(param_1 + uVar1 * 2) = 0;
  return uVar3;
}



/* Function: FUN_0040366e */

short * __cdecl FUN_0040366e(short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  
  FUN_00403550(param_1,(int)param_2 - (int)param_1 >> 1,param_3,&stack0x00000010);
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



/* Function: FUN_004036b3 */

void __fastcall FUN_004036b3(short *param_1,int param_2,int param_3)

{
  short *psVar1;
  code *pcVar2;
  short *psVar3;
  short *local_20c;
  WCHAR local_208 [256];
  uint local_8;
  
  pcVar2 = DAT_0040f544;
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar2 != (code *)0x0) && (DAT_0040f554 != '\0')) {
      (*(code *)PTR_guard_check_icall_00410308)(param_3,param_1,param_2);
      (*pcVar2)();
      if (*param_1 != 0) goto LAB_0040390b;
    }
    memset(local_208,0,0x200);
    pcVar2 = DAT_0040f55c;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_208,0x100,
                     (va_list *)0x0);
    }
    else if (DAT_0040f55c != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00410308)(*(undefined4 *)(param_3 + 0xc),local_208,0x100);
      (*pcVar2)();
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_20c = FUN_0040366e(param_1,psVar1,L"%hs!%p: ");
    }
    else {
      local_20c = FUN_0040366e(param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_20c = FUN_0040366e(local_20c,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar3 = FUN_0040366e(local_20c,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar3 = FUN_0040366e(psVar3,psVar1,L"    ");
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar3 = FUN_0040366e(psVar3,psVar1,L"Msg:[%ws] ");
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar3 = FUN_0040366e(psVar3,psVar1,L"CallContext:[%hs] ");
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_0040366e(psVar3,psVar1,&DAT_00401888);
        }
        else {
          FUN_0040366e(psVar3,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_0040366e(psVar3,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_0040390b:
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403923 */

uint * __thiscall FUN_00403923(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00403a4a((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00403947 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403947(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040f598;
  _DAT_0040f59c = param_1;
  LOCK();
  DAT_0040f598 = DAT_0040f598 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00403960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403960(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040f5c0;
  _DAT_0040f534 = param_1;
  LOCK();
  DAT_0040f5c0 = DAT_0040f5c0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00403979 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403979(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0040f5e0;
  _DAT_0040f5bc = param_1;
  LOCK();
  DAT_0040f5e0 = DAT_0040f5e0 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_004039a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004039a0(undefined4 param_1)

{
  _DAT_0040f5dc = param_1;
  return 1;
}



/* Function: FUN_004039ba */

void FUN_004039ba(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0040f584;
  if (DAT_0040f584 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004039ea */

uint __fastcall FUN_004039ea(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_0040f58c;
  if (-1 < (int)param_1) {
    return 0;
  }
  if (param_1 != 0xc0000017) {
    if (DAT_0040f58c != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00410308)(param_1);
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



/* Function: FUN_00403a4a */

uint __fastcall FUN_00403a4a(uint param_1)

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



/* Function: FUN_00403c1f */

DWORD __fastcall
FUN_00403c1f(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004059b3(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  return DVar1;
}



/* Function: FUN_00403c5b */

uint __fastcall
FUN_00403c5b(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004059b3(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_00403caa */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00403caa(void *this,int param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined2 local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
    *(undefined2 *)this = 0;
  }
  else if (param_2 == 0) {
    FUN_00403587((undefined2 *)this,0x800,&DAT_0040188c);
  }
  else {
    FUN_00403587(local_1008,0x800,&DAT_0040188c);
    FUN_00403628((int)this,0x800,extraout_ECX,local_1008,param_2);
  }
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403d35 */

void __fastcall
FUN_00403d35(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
    iVar3 = FUN_00403947(iVar3);
  }
  else if (param_7 == 1) {
    iVar3 = FUN_00403960(iVar3);
  }
  else if (param_7 == 2) {
    if (-1 < iVar3) {
      iVar3 = -0x7ff8fd64;
      FUN_004059b3(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar6 = FUN_00403a4a(0x8007029c);
      param_15[3] = uVar6;
    }
    iVar3 = FUN_00403979(iVar3);
  }
  else if (param_7 == 3) {
    iVar3 = FUN_004039a0(iVar3);
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
  iVar4 = DAT_0040f5a0 + 1;
  DAT_0040f5a0 = DAT_0040f5a0 + 1;
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
  pcVar1 = DAT_0040f588;
  if (DAT_0040f588 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00410308)();
    iVar3 = (*pcVar1)();
  }
  pcVar1 = DAT_0040f54c;
  param_15[0x13] = iVar3;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f564;
  if (DAT_0040f564 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f560;
  if (DAT_0040f560 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f574;
  if ((DAT_0040f574 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00410308)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_0040411f();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar6 = FUN_00403a4a(0x8000ffff);
    param_15[3] = uVar6;
  }
  pcVar1 = DAT_0040f538;
  if (DAT_0040f540 == '\0') {
    if (DAT_0040f538 == (code *)0x0) {
      BVar7 = IsDebuggerPresent();
      cVar2 = BVar7 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00410308)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00403f26;
  }
  else {
LAB_00403f26:
    pcVar1 = DAT_0040f544;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_0040f544 != (code *)0x0) && (DAT_0040f554 == '\0')) {
        (*(code *)PTR_guard_check_icall_00410308)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_004036b3(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00403f8f;
    }
  }
  pcVar1 = DAT_0040f544;
  if ((DAT_0040f544 != (code *)0x0) && (DAT_0040f554 == '\0')) {
    (*(code *)PTR_guard_check_icall_00410308)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00403f8f:
  pcVar1 = DAT_0040f56c;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_0040f548 != '\0')) &&
     (DAT_0040f56c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00403fc7 */

void __fastcall FUN_00403fc7(int param_1)

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
  
  pcVar1 = DAT_0040f590;
  if (DAT_0040f590 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f578;
  if (DAT_0040f578 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00404034;
  uVar3 = 1;
  do {
    FUN_004039ba(uVar3);
    iVar2 = extraout_ECX;
LAB_00404034:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_00404054 */

void __fastcall FUN_00404054(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_retaddr;
  
  FUN_00405a1d(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  return;
}



/* Function: FUN_00404073 */

void __fastcall FUN_00404073(int param_1,int param_2,int param_3)

{
  int unaff_retaddr;
  
  FUN_00405a61(param_1,param_2,param_3,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00404091 */

void __fastcall FUN_00404091(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_retaddr;
  
  FUN_00405ab7(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  return;
}



/* Function: FUN_004040b0 */

void __fastcall FUN_004040b0(int param_1,int param_2,int param_3,uint param_4)

{
  int unaff_retaddr;
  
  FUN_004059b3(param_1,param_2,param_3,0,0,unaff_retaddr,param_4);
  return;
}



/* Function: FUN_004040d1 */

void __fastcall FUN_004040d1(int param_1,int param_2,int param_3,uint param_4)

{
  int unaff_retaddr;
  
  FUN_00405b08(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,param_4);
  return;
}



/* Function: FUN_004040f0 */

uint __thiscall
FUN_004040f0(void *this,undefined4 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int unaff_retaddr;
  
  FUN_00405b57(param_1,param_2,param_3,this,this,unaff_retaddr,param_4,param_5,(int)&stack0x00000018
              );
  return param_4;
}



/* Function: FUN_0040411f */

void FUN_0040411f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040412b */

void __fastcall FUN_0040412b(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar3 = param_2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_0040a022(param_1,(int)psVar2 - (int)(param_1 + 1) >> 1,param_2,
               (int)psVar3 - (int)(param_2 + 1) >> 1);
  return;
}



/* Function: FUN_00404176 */

void __fastcall FUN_00404176(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    o_free(*(undefined4 *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040418c */

void FUN_0040418c(HANDLE param_1)

{
  if ((param_1 != (HANDLE)0x0) && (param_1 != (HANDLE)0xffffffff)) {
    CloseHandle(param_1);
  }
  return;
}



/* Function: FUN_004041ae */

int __fastcall FUN_004041ae(int *param_1)

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



/* Function: FUN_004041de */

int __fastcall FUN_004041de(int *param_1)

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



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_00404220 */

void __thiscall FUN_00404220(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_00404290(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00404389(this,param_2);
    }
  }
  return;
}



/* Function: FUN_0040425d */

void __fastcall FUN_0040425d(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_0040106c;
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



/* Function: FUN_00404290 */

void __thiscall FUN_00404290(void *this,undefined4 *param_1)

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
    uVar1 = FUN_00402f48(this_00,0,0x2000);
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
      FUN_00402f8b((int)this_00,&DAT_0040264c,0x1000000,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00404389 */

void __thiscall FUN_00404389(void *this,undefined4 *param_1)

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
    FUN_00403146((int)*(uint **)((int)this + 4),&DAT_0040276f,param_1,param_1,&local_4c,&local_48,
                 &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28,
                 &local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8);
  }
  return;
}



/* Function: FUN_00404478 */

void __thiscall FUN_00404478(void *this,PVOID param_1)

{
  PREGHANDLE RegHandle;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
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
  UVar3 = EventRegister(&local_18,FUN_00402e30,param_1,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)param_1 + 0x1c),2,
                        *(undefined2 **)((int)param_1 + 4),**(undefined2 **)((int)param_1 + 4));
  }
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)((int)this + 0xc) = 1;
  pcVar2 = *(code **)(*this + 4);
  (*(code *)PTR_guard_check_icall_00410308)();
  (*pcVar2)();
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404520 */

undefined4 __thiscall FUN_00404520(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_0040f15c != iVar1;
  iVar3 = DAT_0040f15c;
  DAT_0040f15c = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_00410308)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00404560 */

undefined4 * __thiscall FUN_00404560(void *this,byte param_1)

{
  FUN_0040425d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040d8f4(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040458a */

undefined4 FUN_0040458a(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_0040459d();
  return *(undefined4 *)(puVar1 + 4);
}



/* Function: FUN_0040459d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040459d(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040f5c4,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_0040f5c4;
    local_8 = &DAT_0040f5c8;
    _DAT_0040f5cc = 0;
    DAT_0040f5d0 = 0;
    _DAT_0040f5d4 = 0;
    _DAT_0040f5c8 = &PTR_FUN_0040107c;
    _DAT_0040f5d8 = &DAT_0040f008;
    FUN_0040d8d7(FUN_00404620);
    local_10 = 0;
    FUN_0040574c((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00404620 */

void FUN_00404620(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040f5c4,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_00410308)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00404670 */

undefined4 * __thiscall FUN_00404670(void *this,byte param_1)

{
  FUN_0040425d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040d8f4(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040469a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040469a(void)

{
  BOOL BVar1;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040f5a4,0,&local_c,&local_8);
  if ((BVar1 != 0) && (local_c != 0)) {
    local_14 = &DAT_0040f5a4;
    local_8 = &DAT_0040f5a8;
    _DAT_0040f5ac = 0;
    DAT_0040f5b0 = 0;
    _DAT_0040f5b4 = 0;
    _DAT_0040f5a8 = &PTR_FUN_0040107c;
    _DAT_0040f5b8 = &DAT_0040f030;
    FUN_0040d8d7(FUN_00404720);
    local_10 = 0;
    FUN_0040574c((int *)&local_14);
  }
  return local_8;
}



/* Function: FUN_00404720 */

void FUN_00404720(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_0040f5a4,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_00410308)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00404768 */

void __fastcall FUN_00404768(int *param_1)

{
  uint uVar1;
  int unaff_retaddr;
  
  uVar1 = FUN_0040cf88(param_1);
  if ((int)uVar1 < 0) {
    FUN_004040b0(unaff_retaddr,0xb9,0x4018b8,uVar1);
  }
  FUN_00405624(param_1 + 9);
  FUN_00405663(param_1 + 6);
  FUN_004056a2(param_1 + 3);
  FUN_004056e1(param_1);
  return;
}



/* Function: FUN_004047c0 */

void FUN_004047c0(int param_1,undefined4 param_2,wchar_t *param_3,wchar_t *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint *puVar1;
  undefined *puVar2;
  undefined4 local_a4;
  undefined4 local_a0;
  wchar_t *local_9c;
  wchar_t *local_98;
  undefined4 local_94;
  undefined4 local_90;
  _EVENT_DATA_DESCRIPTOR local_8c [2];
  undefined4 local_6c [4];
  undefined4 local_5c [4];
  undefined4 local_4c [4];
  undefined4 local_3c [4];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  puVar2 = FUN_0040469a();
  puVar1 = *(uint **)(puVar2 + 4);
  if (5 < *puVar1) {
    local_90 = param_6;
    local_94 = param_5;
    local_98 = L"<empty>";
    if (param_4 != (wchar_t *)0x0) {
      local_98 = param_4;
    }
    local_9c = L"<empty>";
    if (param_3 != (wchar_t *)0x0) {
      local_9c = param_3;
    }
    local_a0 = param_2;
    local_a4 = *(undefined4 *)(param_1 + 0xc);
    local_1c = &local_90;
    local_2c = &local_94;
    local_14 = 4;
    local_24 = 4;
    local_18 = 0;
    local_10 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_00403370(&local_98,local_3c);
    FUN_00403370(&local_9c,local_4c);
    FUN_00403370(&local_a0,local_5c);
    FUN_00403370(&local_a4,local_6c);
    FUN_00402eb3((int)puVar1,&DAT_004028fa,(LPCGUID)0x0,(LPCGUID)0x0,8,local_8c);
  }
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004048d0 */

undefined4 * __thiscall FUN_004048d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401058;
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_0040d8f4(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00404910 */

void FUN_00404910(void)

{
  RPC_STATUS RVar1;
  
  RVar1 = RpcMgmtStopServerListening((RPC_BINDING_HANDLE)0x0);
  if (RVar1 == 0) goto LAB_00404923;
  do {
    o_exit();
LAB_00404923:
    RVar1 = RpcServerUnregisterIf(&DAT_00401238,(UUID *)0x0,0);
  } while (RVar1 != 0);
  return;
}



/* Function: FUN_0040493f */

uint __fastcall FUN_0040493f(int *param_1,int *param_2,short *param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int unaff_retaddr;
  short *local_30;
  int local_2c;
  LPVOID local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  LPVOID local_8;
  
  local_8 = (LPVOID)0x0;
  local_18 = param_2;
  uVar2 = FUN_004035cb(param_3,0x103,&local_c);
  if ((int)uVar2 < 0) {
    iVar3 = 0x93;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x1c);
    (*(code *)PTR_guard_check_icall_00410308)(param_1,param_4,&local_8,&local_10,&local_14);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) {
      iVar3 = 0x98;
    }
    else {
      local_2c = local_c + 1;
      local_28 = local_8;
      local_24 = local_10;
      local_20 = param_4;
      local_1c = local_14;
      local_30 = param_3;
      pcVar1 = *(code **)(*local_18 + 0x10);
      (*(code *)PTR_guard_check_icall_00410308)(local_18,&local_30);
      uVar2 = (*pcVar1)();
      CoTaskMemFree(local_8);
      if (-1 < (int)uVar2) {
        return 0;
      }
      iVar3 = 0xa5;
    }
  }
  FUN_004040b0(unaff_retaddr,iVar3,0x401914,uVar2);
  return uVar2;
}



/* Function: FUN_00404a20 */

void __thiscall FUN_00404a20(void *this)

{
  uint uVar1;
  LSTATUS LVar2;
  uint *puVar3;
  undefined *puVar4;
  void *this_00;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 unaff_retaddr;
  LPCWSTR in_stack_00000014;
  DWORD local_44;
  HKEY local_40;
  DWORD local_3c;
  LPCWSTR local_38;
  UINT local_34;
  _EVENT_DATA_DESCRIPTOR local_30 [2];
  uint local_c;
  
  local_c = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  local_38 = (LPCWSTR)0x0;
  uVar1 = FUN_00409a29(this,(int *)&local_38);
  if ((int)uVar1 < 0) {
    FUN_00404054(unaff_retaddr,0xc0,"onecore\\admin\\appmodel\\precompilation\\server\\server.cpp",
                 uVar1);
  }
  else {
    uVar1 = RegOpenKeyExW((HKEY)&DAT_80000002,local_38,0,0x20019,&local_40);
    if (uVar1 == 0) {
      local_3c = 4;
      LVar2 = RegQueryValueExW(local_40,in_stack_00000014,(LPDWORD)0x0,&local_44,(LPBYTE)&local_34,
                               &local_3c);
      if ((LVar2 == 0) && (local_34 == 1)) {
        puVar3 = (uint *)FUN_0040458a();
        if (5 < *puVar3) {
          uVar1 = FUN_00402f48(puVar3,0,0);
          if ((char)uVar1 != '\0') {
            FUN_00403339(extraout_ECX,&DAT_004028a5);
          }
        }
LAB_00404af2:
                    /* WARNING: Subroutine does not return */
        ExitProcess(local_34);
      }
      local_3c = 4;
      LVar2 = RegQueryValueExW(local_40,L"AllPackages",(LPDWORD)0x0,&local_44,(LPBYTE)&local_34,
                               &local_3c);
      if ((LVar2 == 0) && (local_34 == 1)) {
        puVar3 = (uint *)FUN_0040458a();
        if (5 < *puVar3) {
          uVar1 = FUN_00402f48(puVar3,0,0);
          if ((char)uVar1 != '\0') {
            FUN_00403339(extraout_ECX_00,&DAT_004025fd);
          }
        }
        goto LAB_00404af2;
      }
      puVar4 = FUN_0040459d();
      if (5 < **(uint **)(puVar4 + 4)) {
        FUN_00402eb3((int)*(uint **)(puVar4 + 4),&DAT_004025b9,(LPCGUID)0x0,(LPCGUID)0x0,2,local_30)
        ;
      }
      RegCloseKey(local_40);
      o_free(local_38);
      goto LAB_00404b7b;
    }
    FUN_004040f0(this_00,unaff_retaddr,0xcb,0x401914,uVar1,0x40194c);
  }
  o_free(local_38);
LAB_00404b7b:
  FUN_0040d5e0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404ba0 */

/* WARNING: Enum "__MIDL_IUri_0001": Some values do not have unique names */

void FUN_00404ba0(undefined4 param_1,byte param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 ,LPCWSTR param_6,HANDLE param_7,int param_8,uint param_9,DWORD param_10,
                 int param_11,int *param_12)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  IUri *pIVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  int iVar8;
  LPCWSTR pWVar9;
  int unaff_retaddr;
  undefined1 auStack_2d0 [3];
  char local_2cd;
  IUri *local_2cc;
  int *local_2c8;
  int local_2c4;
  int *local_2c0;
  DWORD local_2bc;
  uint local_2b8;
  LPCWSTR local_2b4;
  int local_2b0;
  int local_2ac;
  HANDLE local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c [2];
  HANDLE local_294;
  int iStack_290;
  int local_28c;
  char local_288 [4];
  undefined4 local_284;
  int iStack_280;
  int iStack_27c;
  int *local_278;
  int local_274 [14];
  undefined1 auStack_23c [28];
  int iStack_220;
  int iStack_21c;
  short asStack_218 [262];
  uint local_c;
  
  local_c = DAT_0040f100 ^ (uint)auStack_2d0;
  local_2b8 = param_5;
  local_2b4 = param_6;
  local_2bc = param_10;
  local_2b0 = param_11;
  local_278 = param_12;
  local_2c8 = (int *)0x0;
  local_2c0 = (int *)0x0;
  local_28c = 0;
  local_2cd = '\0';
  local_2c4 = 0;
  local_2a8 = param_7;
  local_274[0] = 0;
  local_2ac = param_8;
  local_274[1] = 0;
  local_274[2] = 0;
  local_274[3] = 0;
  local_274[4] = 0;
  local_274[5] = 0;
  local_274[6] = 0;
  local_274[7] = 0;
  local_274[8] = 0;
  local_274[9] = 0;
  local_274[10] = 0;
  local_274[0xb] = 0;
  local_274[0xc] = 0;
  local_274[0xd] = 0;
  local_2a0 = 0;
  local_2a4 = 0;
  local_2cc = (IUri *)0x0;
  local_288[0] = '\0';
  local_284 = 0;
  if (param_7 == (HANDLE)0x0) goto LAB_00404c92;
  if (param_8 == 0) {
    if (param_9 != 0) goto LAB_00404c92;
  }
  else if (param_9 == 0) goto LAB_00404c92;
  if ((param_2 & 1) == 0) {
    local_29c[0] = 0;
    local_29c[1] = 0;
    local_294 = (HANDLE)0x0;
    DVar3 = FUN_0040a523(&local_294);
    if ((int)DVar3 < 0) {
      FUN_004040b0(unaff_retaddr,0x2e,0x402068,DVar3);
      FUN_00404054(unaff_retaddr,0x134,
                   "onecore\\admin\\appmodel\\precompilation\\server\\server.cpp",DVar3);
      if (local_29c[0] != 0) {
        FUN_0040a4d7(local_29c);
      }
      goto LAB_00404c92;
    }
    if ((local_294 != (HANDLE)0x0) && (BVar4 = RevertToSelf(), BVar4 == 0)) {
      FUN_0040ab41();
    }
    local_29c[0] = 1;
    FUN_0040d029(local_274);
    if (local_29c[0] != 0) {
      FUN_0040a4d7(local_29c);
    }
  }
  uVar5 = CoInitializeEx((LPVOID)0x0,2);
  if ((int)uVar5 < 0) {
    iVar8 = 0x138;
LAB_00404ebe:
    FUN_004040b0(unaff_retaddr,iVar8,0x401914,uVar5);
    goto LAB_00404c92;
  }
  if (((local_2bc == 0) && (local_2b0 == 0)) ||
     (uVar5 = RtlSubscribeWnfStateChangeNotification
                        (&local_2a0,local_2bc,local_2b0,0,FUN_00404a20,local_2b8,0,0,0),
     -1 < (int)uVar5)) {
    pWVar9 = local_2b4;
    iVar8 = FUN_0040412b(local_2b4,(short *)PTR_u______0040f004);
    if (iVar8 != 0) {
      local_2b4 = pWVar9 + DAT_0040f000;
    }
    uVar5 = 0;
    if (param_9 != 0) {
      do {
        pWVar9 = *(LPCWSTR *)(local_2ac + uVar5 * 4);
        if (pWVar9 == (LPCWSTR)0x0) {
          uVar5 = 0x80070057;
          iVar8 = 0x158;
          goto LAB_00404dcc;
        }
        BVar4 = GetFileAttributesExW(pWVar9,GetFileExInfoStandard,auStack_23c);
        if (BVar4 == 0) {
          FUN_00404073(unaff_retaddr,0x15c,0x401914);
          goto LAB_00404c92;
        }
        if (iStack_220 != 0) goto LAB_00404c92;
        pIVar6 = (IUri *)((int)&local_2cc->lpVtbl + iStack_21c);
        if (pIVar6 < local_2cc) {
          uVar5 = 0x80070216;
          iVar8 = 0x15f;
          goto LAB_00404ebe;
        }
        uVar5 = uVar5 + 1;
        local_2cc = pIVar6;
      } while (uVar5 < param_9);
    }
    if (local_2c8 != (int *)0x0) {
      pcVar1 = *(code **)(*local_2c8 + 8);
      (*(code *)PTR_guard_check_icall_00410308)(local_2c8);
      (*pcVar1)();
    }
    piVar7 = FUN_00406f6b(&local_2b0);
    iVar8 = *piVar7;
    *piVar7 = 0;
    piVar7 = (int *)(-(uint)(iVar8 != 0) & iVar8 + 4U);
    local_2bc = 0;
    FUN_00405517((int *)&local_2bc);
    FUN_00406e16(&local_2b0);
    local_2bc = 0;
    local_2c8 = piVar7;
    if (piVar7 == (int *)0x0) {
      FUN_004070a0(unaff_retaddr,0x1e1,"onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp")
      ;
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_00405517((int *)&local_2bc);
    piVar7 = local_2c8;
    local_2bc = 4;
    pcVar1 = *(code **)(*local_2c8 + 0xc);
    RegGetValueW((HKEY)&DAT_80000002,
                 L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ByteCodeGenerator.exe"
                 ,L"GenerateByteCodeBufferReturnsCantGenerate",0x20000010,(LPDWORD)0x0,&iStack_280,
                 &local_2bc);
    (*(code *)PTR_guard_check_icall_00410308)(piVar7,iStack_280 != 0,param_3,param_4);
    uVar5 = (*pcVar1)();
    if ((int)uVar5 < 0) {
      iVar8 = 0x166;
    }
    else {
      local_2cd = '\x01';
      piVar7 = FUN_00405c15(&iStack_27c,&local_2b8);
      iVar8 = 0;
      if (&iStack_290 != piVar7) {
        iVar8 = *piVar7;
        *piVar7 = 0;
      }
      iStack_290 = 0;
      local_28c = iVar8;
      FUN_00405517(&iStack_290);
      FUN_00405517(&iStack_27c);
      if (iVar8 == 0) {
        uVar5 = 0x8007000e;
        iVar8 = 0x169;
      }
      else {
        pcVar1 = *(code **)(*local_2c8 + 0x14);
        (*(code *)PTR_guard_check_icall_00410308)(local_2c8,&DAT_00401c54,iVar8,&local_2a4);
        uVar5 = (*pcVar1)();
        piVar7 = local_2c0;
        if ((int)uVar5 < 0) {
          iVar8 = 0x16a;
        }
        else {
          if (local_2c0 != (int *)0x0) {
            local_2c0 = (int *)0x0;
            pcVar1 = *(code **)(*piVar7 + 8);
            (*(code *)PTR_guard_check_icall_00410308)(piVar7);
            (*pcVar1)();
          }
          uVar5 = FUN_00407f29();
          if ((int)uVar5 < 0) {
            iVar8 = 0x16b;
          }
          else {
            pcVar1 = *(code **)(*local_2c0 + 0xc);
            (*(code *)PTR_guard_check_icall_00410308)
                      (local_2c0,param_3,param_4,local_2a8,param_9,local_2cc);
            uVar5 = (*pcVar1)();
            if ((int)uVar5 < 0) {
              iVar8 = 0x16c;
            }
            else {
              local_2b8 = 0;
              if (param_9 != 0) {
                do {
                  local_2cc = (IUri *)0x0;
                  pWVar9 = *(LPCWSTR *)(local_2ac + local_2b8 * 4);
                  iVar8 = FUN_0040412b(pWVar9,(short *)PTR_u______0040f004);
                  if (iVar8 != 0) {
                    pWVar9 = pWVar9 + DAT_0040f000;
                  }
                  uVar5 = CreateUri(pWVar9,4,0,&local_2cc);
                  if ((int)uVar5 < 0) {
                    iVar8 = 0x17e;
LAB_0040514d:
                    FUN_004040b0(unaff_retaddr,iVar8,0x401914,uVar5);
                    FUN_00405517((int *)&local_2cc);
                    goto LAB_00404c92;
                  }
                  uVar5 = FUN_0040834f(local_2b4,local_2cc,extraout_ECX,asStack_218);
                  uVar2 = local_2b8;
                  if ((int)uVar5 < 0) {
                    iVar8 = 0x17f;
                    goto LAB_0040514d;
                  }
                  uVar5 = FUN_0040493f(local_2c8,local_2c0,asStack_218,
                                       *(undefined4 *)(local_2ac + local_2b8 * 4));
                  if ((uVar5 != 0x80020201) &&
                     (((uVar5 == 0x8007065e || (uVar5 == 0x80020101)) || ((int)uVar5 < 0)))) {
                    local_2c4 = local_2c4 + 1;
                  }
                  FUN_00405517((int *)&local_2cc);
                  local_2b8 = uVar2 + 1;
                } while (local_2b8 < param_9);
              }
              pcVar1 = *(code **)(*local_2c0 + 0x14);
              (*(code *)PTR_guard_check_icall_00410308)(local_2c0);
              uVar5 = (*pcVar1)();
              if (-1 < (int)uVar5) {
                FUN_00409ed7(local_288,*local_2b4);
                if (local_288[0] != '\0') {
                  FUN_00409f62(local_2a8,local_284);
                }
                uVar5 = 0;
                goto LAB_00405190;
              }
              iVar8 = 0x19f;
            }
          }
        }
      }
    }
LAB_00404dcc:
    FUN_004040b0(unaff_retaddr,iVar8,0x401914,uVar5);
  }
  else {
    uVar5 = uVar5 | 0x10000000;
    if ((int)uVar5 < 0) {
      iVar8 = 0x147;
      goto LAB_00404dcc;
    }
  }
LAB_00405190:
  CloseHandle(local_2a8);
  if (local_2cd != '\0') {
    if (local_2a4 != 0) {
      pcVar1 = *(code **)(*local_2c8 + 0x18);
      (*(code *)PTR_guard_check_icall_00410308)(local_2c8,local_2a4);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*local_2c8 + 0x10);
    (*(code *)PTR_guard_check_icall_00410308)(local_2c8);
    (*pcVar1)();
  }
  if (-1 < (int)uVar5) {
    *local_278 = local_2c4;
  }
  CoUninitialize();
  if ((local_2a0 != 0) &&
     (uVar5 = RtlUnsubscribeWnfNotificationWaitForCompletion(local_2a0), (int)uVar5 < 0)) {
    FUN_004040d1(unaff_retaddr,0x1ba,0x401914,uVar5);
  }
LAB_00404c92:
  FUN_00404768(local_274);
  FUN_00405517(&local_28c);
  FUN_00405517((int *)&local_2c0);
  FUN_00405517((int *)&local_2c8);
  FUN_0040d5e0(local_c ^ (uint)auStack_2d0);
  return;
}



/* Function: FUN_00405236 */

void FUN_00405236(UUID *param_1)

{
  uint uVar1;
  RPC_STATUS RVar2;
  int iVar3;
  undefined4 *puVar4;
  void *hMem;
  undefined4 *puVar5;
  int unaff_retaddr;
  undefined1 local_258 [4];
  UUID_VECTOR local_254;
  void *local_24c;
  RPC_BINDING_VECTOR *local_248;
  undefined2 local_244 [258];
  undefined4 local_40 [14];
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  puVar4 = &DAT_00401aa8;
  puVar5 = local_40;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_248 = (RPC_BINDING_VECTOR *)0x0;
  local_24c = (void *)0x0;
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  uVar1 = FUN_00403587(local_244,0x100,local_40);
  if ((int)uVar1 < 0) {
    FUN_004040b0(unaff_retaddr,0x1d7,0x401914,uVar1);
    hMem = (HLOCAL)0x0;
  }
  else {
    iVar3 = ConvertStringSecurityDescriptorToSecurityDescriptorW(local_244,1,&local_24c,local_258);
    hMem = local_24c;
    if (iVar3 == 0) {
      GetLastError();
      hMem = (HLOCAL)0x0;
    }
    else {
      local_254.Count = 1;
      local_254.Uuid[0] = param_1;
      RVar2 = RpcServerUseProtseqEpW((RPC_WSTR)u_ncalrpc_0040f14c,10,(RPC_WSTR)0x0,local_24c);
      if ((((RVar2 == 0) &&
           (iVar3 = RpcServerRegisterIf3(&DAT_00401238,param_1,0,1,0x4d2,0xffffffff,0,local_24c),
           iVar3 == 0)) && (RVar2 = RpcObjectSetType(param_1,param_1), RVar2 == 0)) &&
         ((RVar2 = RpcServerInqBindings(&local_248), RVar2 == 0 &&
          (RVar2 = RpcEpRegisterW(&DAT_00401238,local_248,&local_254,(RPC_WSTR)0x0), RVar2 == 0))))
      {
        if (local_248 != (RPC_BINDING_VECTOR *)0x0) {
          RpcBindingVectorFree(&local_248);
        }
        RpcServerListen(1,0x4d2,0);
      }
    }
  }
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
  }
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004053b1 */

void __fastcall FUN_004053b1(void *param_1)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int unaff_retaddr;
  DWORD local_5c;
  HANDLE local_58;
  int local_54 [19];
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  local_58 = (HANDLE)0x0;
  local_5c = 0x48;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,8,&local_58);
  if (BVar1 == 0) {
    iVar3 = 0x21e;
  }
  else {
    BVar1 = GetTokenInformation(local_58,TokenLogonSid|TokenPrivileges,local_54,local_5c,&local_5c);
    if (BVar1 != 0) {
      uVar2 = FUN_00409fbc(local_54[0],param_1);
      if ((int)uVar2 < 0) {
        FUN_004040b0(unaff_retaddr,0x229,0x401914,uVar2);
      }
      goto LAB_00405446;
    }
    iVar3 = 0x225;
  }
  FUN_00404073(unaff_retaddr,iVar3,0x401914);
LAB_00405446:
  FUN_0040418c(local_58);
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405463 */

void __cdecl FUN_00405463(int param_1,int param_2)

{
  RPC_WSTR StringUuid;
  RPC_STATUS RVar1;
  uint uVar2;
  int iVar3;
  int unaff_retaddr;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  UUID local_1c;
  uint local_c;
  
  local_c = DAT_0040f100 ^ (uint)&local_28;
  iVar3 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if ((((0 < param_1) &&
       (StringUuid = *(RPC_WSTR *)(param_2 + -4 + param_1 * 4), StringUuid != (RPC_WSTR)0x0)) &&
      (*StringUuid != 0)) && (RVar1 = UuidFromStringW(StringUuid,&local_1c), RVar1 == 0)) {
    uVar2 = FUN_004053b1(&local_28);
    iVar3 = local_24;
    if ((int)uVar2 < 0) {
      FUN_004040b0(unaff_retaddr,0x241,0x401914,uVar2);
      iVar3 = local_24;
    }
    else {
      FUN_00405236(&local_1c);
    }
  }
  if (iVar3 != 0) {
    o_free(iVar3);
  }
  FUN_0040d5e0(local_c ^ (uint)&local_28);
  return;
}



/* Function: FUN_00405517 */

void __fastcall FUN_00405517(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00410308)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00405540 */

int FUN_00405540(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_004041de(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_00410308)(1);
      (*pcVar1)();
    }
    if (DAT_0040f5e4 != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0040f5e4 + 8);
      (*(code *)PTR_guard_check_icall_00410308)(DAT_0040f5e4);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_004055a0 */

void FUN_004055a0(int param_1)

{
  FUN_004041ae((int *)(param_1 + 8));
  return;
}



/* Function: FUN_004055c0 */

undefined4 FUN_004055c0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00403525(param_2,(int *)&DAT_00401ae0);
  if (iVar1 == 0) {
    iVar1 = FUN_00403525(extraout_ECX,(int *)&LAB_00401af0);
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
  (*(code *)PTR_guard_check_icall_00410308)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_00405624 */

void __fastcall FUN_00405624(int *param_1)

{
  uint uVar1;
  int unaff_retaddr;
  
  uVar1 = FUN_0040577d(param_1);
  if ((int)uVar1 < 0) {
    FUN_004040b0(unaff_retaddr,0x1a,0x4018b8,uVar1);
  }
  if ((*param_1 != 0) && (*param_1 != -1)) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00405663 */

void __fastcall FUN_00405663(int *param_1)

{
  uint uVar1;
  int unaff_retaddr;
  
  uVar1 = FUN_004057c0(param_1);
  if ((int)uVar1 < 0) {
    FUN_004040b0(unaff_retaddr,0x1a,0x4018b8,uVar1);
  }
  if ((*param_1 != 0) && (*param_1 != -1)) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_004056a2 */

void __fastcall FUN_004056a2(int *param_1)

{
  uint uVar1;
  int unaff_retaddr;
  
  uVar1 = FUN_00405803(param_1);
  if ((int)uVar1 < 0) {
    FUN_004040b0(unaff_retaddr,0x1a,0x4018b8,uVar1);
  }
  if ((*param_1 != 0) && (*param_1 != -1)) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_004056e1 */

void __fastcall FUN_004056e1(int *param_1)

{
  uint uVar1;
  int unaff_retaddr;
  
  uVar1 = FUN_00405846(param_1);
  if ((int)uVar1 < 0) {
    FUN_004040b0(unaff_retaddr,0x1a,0x4018b8,uVar1);
  }
  if ((*param_1 != 0) && (*param_1 != -1)) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00405720 */

int __thiscall FUN_00405720(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_0040d8f4(this);
  }
  return (int)this;
}



/* Function: FUN_0040574c */

void __fastcall FUN_0040574c(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_00404478((void *)(*param_1 + 4),*(PVOID *)(*param_1 + 0x14));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_0040577d */

uint __fastcall FUN_0040577d(void *param_1)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  if (*(char *)((int)param_1 + 4) != '\0') {
    uVar1 = FUN_00405889(param_1,(int)param_1 + 8);
    if ((int)uVar1 < 0) {
      FUN_00404054(unaff_retaddr,0x68,
                   "onecore\\private\\base\\inc\\appmodel\\staterepository\\dal\\ResourcePriority.hpp"
                   ,uVar1);
      return uVar1;
    }
    *(undefined1 *)((int)param_1 + 4) = 0;
  }
  return 0;
}



/* Function: FUN_004057c0 */

uint __fastcall FUN_004057c0(void *param_1)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  if (*(char *)((int)param_1 + 4) != '\0') {
    uVar1 = FUN_004058d2(param_1,(int)param_1 + 8);
    if ((int)uVar1 < 0) {
      FUN_00404054(unaff_retaddr,0x68,
                   "onecore\\private\\base\\inc\\appmodel\\staterepository\\dal\\ResourcePriority.hpp"
                   ,uVar1);
      return uVar1;
    }
    *(undefined1 *)((int)param_1 + 4) = 0;
  }
  return 0;
}



/* Function: FUN_00405803 */

uint __fastcall FUN_00405803(void *param_1)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  if (*(char *)((int)param_1 + 4) != '\0') {
    uVar1 = FUN_0040591d(param_1,(int)param_1 + 8);
    if ((int)uVar1 < 0) {
      FUN_00404054(unaff_retaddr,0x68,
                   "onecore\\private\\base\\inc\\appmodel\\staterepository\\dal\\ResourcePriority.hpp"
                   ,uVar1);
      return uVar1;
    }
    *(undefined1 *)((int)param_1 + 4) = 0;
  }
  return 0;
}



/* Function: FUN_00405846 */

uint __fastcall FUN_00405846(void *param_1)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  if (*(char *)((int)param_1 + 4) != '\0') {
    uVar1 = FUN_00405968(param_1,(int)param_1 + 8);
    if ((int)uVar1 < 0) {
      FUN_00404054(unaff_retaddr,0x68,
                   "onecore\\private\\base\\inc\\appmodel\\staterepository\\dal\\ResourcePriority.hpp"
                   ,uVar1);
      return uVar1;
    }
    *(undefined1 *)((int)param_1 + 4) = 0;
  }
  return 0;
}



/* Function: FUN_00405889 */

undefined4 __thiscall FUN_00405889(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  int unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = GetCurrentThread();
  }
  uVar2 = NtSetInformationThread(pvVar1,0x31,param_1,0xc,this);
  if ((int)uVar2 < 0) {
    FUN_004040d1(unaff_retaddr,0x89,0x4018b8,uVar2);
  }
  return 0;
}



/* Function: FUN_004058d2 */

undefined4 __thiscall FUN_004058d2(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = GetCurrentThread();
  }
  uVar2 = NtSetInformationThread(pvVar1,0x16,param_1,4,this);
  if ((int)uVar2 < 0) {
    uVar3 = FUN_00404091(unaff_retaddr,0x8d,
                         "onecore\\private\\base\\inc\\appmodel\\staterepository\\dal\\ResourcePriority.hpp"
                         ,uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_0040591d */

undefined4 __thiscall FUN_0040591d(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = GetCurrentThread();
  }
  uVar2 = NtSetInformationThread(pvVar1,0x18,param_1,4,this);
  if ((int)uVar2 < 0) {
    uVar3 = FUN_00404091(unaff_retaddr,0x8d,
                         "onecore\\private\\base\\inc\\appmodel\\staterepository\\dal\\ResourcePriority.hpp"
                         ,uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_00405968 */

undefined4 __thiscall FUN_00405968(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = GetCurrentThread();
  }
  uVar2 = NtSetInformationThread(pvVar1,0x19,param_1,4,this);
  if ((int)uVar2 < 0) {
    uVar3 = FUN_00404091(unaff_retaddr,0x8d,
                         "onecore\\private\\base\\inc\\appmodel\\staterepository\\dal\\ResourcePriority.hpp"
                         ,uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_004059b3 */

void __fastcall
FUN_004059b3(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00403a4a(param_7);
  local_8 = 0;
  FUN_004059fb(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10,(short *)0x0);
  return;
}



/* Function: FUN_004059fb */

void __fastcall
FUN_004059fb(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            short *param_8)

{
  FUN_00405c96(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Function: FUN_00405a0c */

void __fastcall
FUN_00405a0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,short *param_8)

{
  FUN_00405d3c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Function: FUN_00405a1d */

void __fastcall
FUN_00405a1d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00403a4a(param_7);
  local_8 = 0;
  FUN_00405a0c(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10,
               (short *)0x0);
  return;
}



/* Function: FUN_00405a61 */

uint __fastcall
FUN_00405a61(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  uint uVar1;
  undefined4 extraout_ECX;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00403c5b(param_1,param_2,param_3,param_1,param_1,param_6);
  local_10 = uVar1;
  local_c = FUN_00403a4a(uVar1);
  local_8 = 0;
  FUN_00405a0c(param_1,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_10,
               (short *)0x0);
  return uVar1;
}



/* Function: FUN_00405ab7 */

uint __fastcall
FUN_00405ab7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  uint uVar1;
  undefined4 extraout_ECX;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  uVar1 = FUN_004039ea(param_7);
  local_10 = param_7;
  local_c = 1;
  local_14 = uVar1;
  FUN_00405a0c(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14,
               (short *)0x0);
  return uVar1;
}



/* Function: FUN_00405b08 */

uint __fastcall
FUN_00405b08(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = FUN_004039ea(param_7);
  local_c = param_7;
  local_8 = 1;
  FUN_004059fb(param_1,param_2,param_3,0,0,param_6,(int *)&local_10,(short *)0x0);
  return local_10;
}



/* Function: FUN_00405b57 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00405b57(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            uint param_7,int param_8,int param_9)

{
  uint local_102c;
  uint local_1028;
  undefined4 local_1024;
  uint local_1020;
  int local_101c;
  int local_1018;
  int local_1014;
  short local_1010 [2050];
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x405b66;
  local_c = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  local_1014 = param_3;
  local_102c = param_7 & 0xffff | 0x80070000;
  if ((int)param_7 < 1) {
    local_102c = param_7;
  }
  local_1020 = local_102c;
  local_101c = param_1;
  local_1018 = param_2;
  local_1028 = FUN_00403a4a(local_102c);
  local_1024 = 0;
  FUN_00403caa(local_1010,param_8,param_9);
  FUN_004059fb(local_101c,local_1018,local_1014,0,0,param_6,(int *)&local_102c,local_1010);
  FUN_0040d5e0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405c15 */

int * __fastcall FUN_00405c15(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  *param_1 = 0;
  puVar4 = (undefined4 *)FUN_0040d5ff(0x10);
  piVar3 = DAT_0040f5e4;
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    puVar4[2] = 1;
    *puVar4 = &PTR_FUN_00401044;
    if (piVar3 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar3 + 4);
      (*(code *)PTR_guard_check_icall_00410308)(piVar3);
      (*pcVar2)();
    }
    *puVar4 = &PTR_FUN_00401058;
    puVar4[3] = uVar1;
    piVar3 = (int *)*param_1;
    if (piVar3 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar3 + 8);
      (*(code *)PTR_guard_check_icall_00410308)(piVar3);
      (*pcVar2)();
    }
    *param_1 = (int)puVar4;
  }
  return param_1;
}



/* Function: FUN_00405c96 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00405c96(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_0040f100 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00403d35(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_0040d5e0(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_00403fc7((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405d3c */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00405d3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,short *param_8)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 local_1474;
  int local_1470;
  undefined4 local_146c;
  undefined4 local_1468;
  uint local_1464;
  int local_1460;
  int local_145c;
  int local_1458;
  short *local_1454;
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
  WCHAR local_1010 [2050];
  uint local_c;
  
  local_c = DAT_0040f100 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_146c = param_6;
  local_1010[0] = L'\0';
  local_1410[0] = 0;
  local_1460 = *param_7;
  local_145c = param_7[1];
  local_1470 = FUN_00403960(local_1460);
  local_1464 = 0;
  if (param_7[2] == 1) {
    local_1464 = 8;
  }
  local_1468 = 1;
  LOCK();
  UNLOCK();
  local_1458 = DAT_0040f5a0 + 1;
  if ((param_8 == (short *)0x0) || (*param_8 == 0)) {
    param_8 = (short *)0x0;
  }
  DAT_0040f5a0 = DAT_0040f5a0 + 1;
  local_1454 = param_8;
  DStack_1450 = GetCurrentThreadId();
  pcVar1 = DAT_0040f588;
  uStack_1444 = local_1474;
  iStack_143c = local_1470;
  uStack_1418 = local_146c;
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
  uStack_1414 = param_1;
  if (DAT_0040f588 == (code *)0x0) {
    uStack_141c = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00410308)();
    uStack_141c = (*pcVar1)();
  }
  pcVar1 = DAT_0040f54c;
  if (DAT_0040f54c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(&local_1468);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f564;
  if (DAT_0040f564 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(&local_1468,local_1410,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f560;
  if (DAT_0040f560 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(&local_1468);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f574;
  if ((DAT_0040f574 != (code *)0x0) && ((local_1464 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00410308)(&local_1468);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f538;
  if (-1 < local_1460) {
    FUN_0040411f();
    goto LAB_00405fbd;
  }
  if (DAT_0040f540 == '\0') {
    if (DAT_0040f538 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00410308)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00405eeb;
LAB_00405ef2:
    pcVar1 = DAT_0040f544;
    if ((DAT_0040f544 != (code *)0x0) && (DAT_0040f554 == '\0')) {
      (*(code *)PTR_guard_check_icall_00410308)(&local_1468,0,0);
      (*pcVar1)();
    }
  }
  else {
LAB_00405eeb:
    pcVar1 = DAT_0040f544;
    if ((local_1464 & 2) != 0) goto LAB_00405ef2;
    if ((DAT_0040f544 != (code *)0x0) && (DAT_0040f554 == '\0')) {
      (*(code *)PTR_guard_check_icall_00410308)(&local_1468,local_1010,0x800);
      (*pcVar1)();
    }
    if (local_1010[0] == L'\0') {
      FUN_004036b3(local_1010,0x800,(int)&local_1468);
    }
    OutputDebugStringW(local_1010);
  }
  pcVar1 = DAT_0040f56c;
  if ((((local_1464 & 4) != 0) || (DAT_0040f548 != '\0')) && (DAT_0040f56c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
  }
  if ((local_1464 & 1) == 0) {
    FUN_0040d5e0(local_c ^ (uint)&local_1474);
    return;
  }
LAB_00405fbd:
  FUN_00403fc7((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405fd0 */

undefined4 FUN_00405fd0(void)

{
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  
  if (in_stack_00000014 != (undefined4 *)0x0) {
    *in_stack_00000014 = 0;
  }
  if (in_stack_00000010 != (undefined4 *)0x0) {
    *in_stack_00000010 = 0;
  }
  return 0x8002802b;
}



/* Function: FUN_00406000 */

undefined4 FUN_00406000(void)

{
  return 0x80004001;
}



/* Function: FUN_00406010 */

undefined4 FUN_00406010(void)

{
  return 0x80004001;
}



/* Function: FUN_00406020 */

undefined4 FUN_00406020(void)

{
  return 0x80004001;
}



/* Function: FUN_0040602e */

void FUN_0040602e(undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401c44,10,0);
  return;
}



/* Function: FUN_00406057 */

void FUN_00406057(undefined4 param_1,undefined4 param_2,wchar_t *param_3)

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
  TraceMessage(param_1,param_2,0x2b,&DAT_00401c44,0xc,pwVar2,iVar3,0);
  return;
}



/* Function: FUN_004060b8 */

void FUN_004060b8(undefined4 param_1,undefined4 param_2,wchar_t *param_3,wchar_t *param_4,
                 wchar_t *param_5)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  int local_10;
  int local_c;
  
  iVar5 = 10;
  if (param_5 == (wchar_t *)0x0) {
    local_c = 10;
  }
  else {
    pwVar2 = param_5;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    local_c = ((int)pwVar2 - (int)(param_5 + 1) >> 1) * 2 + 2;
  }
  pwVar2 = L"NULL";
  if (param_5 != (wchar_t *)0x0) {
    pwVar2 = param_5;
  }
  if (param_4 == (wchar_t *)0x0) {
    local_10 = 10;
  }
  else {
    pwVar3 = param_4;
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    local_10 = ((int)pwVar3 - (int)(param_4 + 1) >> 1) * 2 + 2;
  }
  pwVar3 = L"NULL";
  if (param_4 != (wchar_t *)0x0) {
    pwVar3 = param_4;
  }
  if (param_3 != (wchar_t *)0x0) {
    pwVar4 = param_3;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    iVar5 = ((int)pwVar4 - (int)(param_3 + 1) >> 1) * 2 + 2;
  }
  pwVar4 = L"NULL";
  if (param_3 != (wchar_t *)0x0) {
    pwVar4 = param_3;
  }
  TraceMessage(param_1,param_2,0x2b,&DAT_00401c44,0xb,pwVar4,iVar5,pwVar3,local_10,pwVar2,local_c,
               &stack0x00000018,4,&stack0x0000001c,4,0);
  return;
}



/* Function: FUN_0040619e */

void FUN_0040619e(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004061aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CoTaskMemFree(param_1);
    return;
  }
  return;
}



/* Function: FUN_004061ba */

/* WARNING: Removing unreachable block (ram,0x00406203) */

void __fastcall FUN_004061ba(uint *param_1)

{
  int *piVar1;
  code *pcVar2;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  if (*param_1 != 0) {
    local_c = 0;
    do {
      CoTaskMemFree(*(LPVOID *)(local_c + 4 + param_1[1]));
      piVar1 = *(int **)(local_c + 0x10 + param_1[1]);
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 8);
        (*(code *)PTR_guard_check_icall_00410308)(piVar1);
        (*pcVar2)();
      }
      local_c = local_c + 0x14;
      local_8 = local_8 + 1;
    } while (local_8 < *param_1);
  }
  if (param_1[1] != 0) {
    CoTaskMemFree((LPVOID)param_1[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: FUN_00406240 */

void __fastcall FUN_00406240(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] != 0) {
    Ordinal_6(param_1[1]);
  }
  if (param_1[2] != 0) {
    Ordinal_6(param_1[2]);
  }
  if (param_1[3] != 0) {
    Ordinal_6(param_1[3]);
  }
  puVar2 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  CoTaskMemFree((LPVOID)param_1[10]);
  FUN_004061ba(param_1 + 0xb);
  memset(param_1,0,0x34);
  return;
}



/* Function: FUN_004062a3 */

undefined4 * __fastcall FUN_004062a3(undefined4 *param_1)

{
  code *pcVar1;
  int *piStack_10;
  
  piStack_10 = DAT_0040f5e4;
  param_1[3] = 1;
  *param_1 = &PTR_FUN_004010ac;
  param_1[1] = &PTR_FUN_0040108c;
  if (piStack_10 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_10 + 4);
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
    if ((int **)&stack0xfffffff4 != &piStack_10) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  *param_1 = &PTR_FUN_004010fc;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = &PTR_FUN_004010dc;
  return param_1;
}



/* Function: FUN_00406320 */

undefined4 * __thiscall FUN_00406320(void *this,byte param_1)

{
  FUN_00406347((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00406347 */

void __fastcall FUN_00406347(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  undefined4 uStackY_18;
  
  *param_1 = &PTR_FUN_004010fc;
  param_1[1] = &PTR_FUN_004010dc;
  if (param_1[4] == 0) {
    if (param_1[5] == 0) {
      if (param_1[6] == 0) {
        if (param_1[0xb] == 0) {
          FUN_0040619e((LPVOID)param_1[10]);
          FUN_00409842((LPCVOID)param_1[9]);
          FUN_0040418c((HANDLE)param_1[8]);
          FUN_0040418c((HANDLE)param_1[7]);
          FUN_00406f39(param_1 + 6);
          FUN_00406f39(param_1 + 5);
          FUN_00406f39(param_1 + 4);
          param_1[3] = 0xc0000001;
          return;
        }
        uStackY_18 = 0x54;
      }
      else {
        uStackY_18 = 0x53;
      }
    }
    else {
      uStackY_18 = 0x52;
    }
  }
  else {
    uStackY_18 = 0x51;
  }
  FUN_00407102(unaff_retaddr,uStackY_18,"onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp"
              );
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004063f0 */

/* WARNING: Removing unreachable block (ram,0x00406685) */
/* WARNING: Removing unreachable block (ram,0x00406623) */
/* WARNING: Removing unreachable block (ram,0x004065af) */
/* WARNING: Removing unreachable block (ram,0x00406547) */
/* WARNING: Removing unreachable block (ram,0x004064a0) */
/* WARNING: Removing unreachable block (ram,0x004064dd) */
/* WARNING: Removing unreachable block (ram,0x0040657b) */
/* WARNING: Removing unreachable block (ram,0x004065e2) */
/* WARNING: Removing unreachable block (ram,0x0040665f) */
/* WARNING: Removing unreachable block (ram,0x004066b1) */

HRESULT FUN_004063f0(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  LPVOID *ppvVar1;
  undefined4 *puVar2;
  code *pcVar3;
  IID *rclsid;
  HRESULT HVar4;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24 [4];
  undefined4 local_1c;
  undefined4 local_18;
  code *local_14;
  LPVOID *local_10;
  int *local_c;
  int *local_8;
  
  local_34 = 0;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  uStack_30 = 0;
  local_2c = 0;
  uStack_28 = 0;
  local_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    ppvVar1 = (LPVOID *)(param_1 + 0xc);
    *(uint *)(param_1 + 0x2c) = (uint)(0x60003 < param_4);
    local_10 = ppvVar1;
    FUN_00406f39((int *)ppvVar1);
    rclsid = (IID *)&DAT_00401c24;
    if (*(int *)(param_1 + 0x2c) == 0) {
      rclsid = (IID *)&DAT_00401c34;
    }
    HVar4 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401c14,ppvVar1);
    if (-1 < HVar4) {
      puVar2 = (undefined4 *)*ppvVar1;
      pcVar3 = *(code **)*puVar2;
      FUN_00406f39((int *)&local_8);
      (*(code *)PTR_guard_check_icall_00410308)(puVar2,&DAT_00401bb8,&local_8);
      HVar4 = (*pcVar3)();
      if (-1 < HVar4) {
        local_44 = CONCAT22(local_44._2_2_,3);
        local_34 = CONCAT22(local_34._2_2_,3);
        local_3c = 2;
        local_24[0] = 0x15;
        if ((param_4 < 0x60004) && (param_4 < 0x60003)) {
          local_2c = 4;
          local_1c = 0x10000;
          local_18 = 0x60002;
        }
        else {
          if ((param_4 < 0x60005) && (param_4 < 0x60004)) {
            local_2c = 5;
            local_18 = 0x60003;
          }
          else {
            local_2c = 6;
            local_18 = 0x60004;
          }
          local_1c = 0;
        }
        pcVar3 = *(code **)(*local_8 + 0x10);
        (*(code *)PTR_guard_check_icall_00410308)(local_8,0x4000,0,&local_34);
        HVar4 = (*pcVar3)();
        if (-1 < HVar4) {
          pcVar3 = *(code **)(*local_8 + 0x10);
          (*(code *)PTR_guard_check_icall_00410308)(local_8,0x5000,0,&local_44);
          HVar4 = (*pcVar3)();
          if (-1 < HVar4) {
            pcVar3 = *(code **)(*local_8 + 0x10);
            (*(code *)PTR_guard_check_icall_00410308)(local_8,0x5003,0,local_24);
            HVar4 = (*pcVar3)();
            ppvVar1 = local_10;
            if (-1 < HVar4) {
                    /* WARNING: Load size is inaccurate */
              pcVar3 = *(code **)(**local_10 + 0xc);
              (*(code *)PTR_guard_check_icall_00410308)(*local_10,param_1 + -4);
              HVar4 = (*pcVar3)();
              if (-1 < HVar4) {
                puVar2 = (undefined4 *)*ppvVar1;
                local_14 = *(code **)*puVar2;
                FUN_00406f39((int *)(param_1 + 0x10));
                pcVar3 = local_14;
                (*(code *)PTR_guard_check_icall_00410308)
                          (puVar2,&DAT_00401ba8,(int *)(param_1 + 0x10));
                HVar4 = (*pcVar3)();
                if (-1 < HVar4) {
                  puVar2 = (undefined4 *)*local_10;
                  pcVar3 = *(code **)*puVar2;
                  FUN_00406f39((int *)&local_c);
                  (*(code *)PTR_guard_check_icall_00410308)(puVar2,&DAT_00401b98,&local_c);
                  HVar4 = (*pcVar3)();
                  if (-1 < HVar4) {
                    pcVar3 = *(code **)(*local_c + 0xc);
                    (*(code *)PTR_guard_check_icall_00410308)(local_c);
                    HVar4 = (*pcVar3)();
                    if (-1 < HVar4) {
                    /* WARNING: Load size is inaccurate */
                      pcVar3 = *(code **)(**local_10 + 0x14);
                      (*(code *)PTR_guard_check_icall_00410308)(*local_10,1);
                      HVar4 = (*pcVar3)();
                      if (-1 < HVar4) {
                        *(uint *)(param_1 + 0x30) = param_2 & 1;
                        *(undefined4 *)(param_1 + 0x28) = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    HVar4 = -0x7fff0001;
  }
  FUN_00406f39((int *)&local_8);
  FUN_00406f39((int *)&local_c);
  return HVar4;
}



/* Function: FUN_004066f0 */

/* WARNING: Removing unreachable block (ram,0x00406755) */

int FUN_004066f0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piStack_1c;
  int *piStack_18;
  int local_8;
  
  iVar2 = 0;
  piStack_18 = (int *)0x406706;
  FUN_00406f39((int *)(param_1 + 0x10));
  piStack_1c = *(int **)(param_1 + 0xc);
  if (piStack_1c != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_1c + 0x18);
    piStack_18 = &local_8;
    (*(code *)PTR_guard_check_icall_00410308)();
    iVar2 = (*pcVar1)();
    if ((int **)&stack0xffffffec != &piStack_1c) {
      pcVar1 = (code *)swi(0x29);
      iVar2 = (*pcVar1)();
    }
    if ((-1 < iVar2) && (local_8 != 4)) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x14);
      (*(code *)PTR_guard_check_icall_00410308)(*(int **)(param_1 + 0xc),4);
      iVar2 = (*pcVar1)();
    }
    FUN_00406f39((int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return iVar2;
}



/* Function: FUN_00406780 */

/* WARNING: Removing unreachable block (ram,0x0040685b) */
/* WARNING: Removing unreachable block (ram,0x00406821) */
/* WARNING: Removing unreachable block (ram,0x00406896) */

int FUN_00406780(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_4c [2];
  wchar_t *local_44;
  wchar_t *local_24;
  wchar_t *local_18;
  wchar_t *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_10 = (int *)0x0;
  if ((((undefined **)PTR_LOOP_0040f058 != &PTR_LOOP_0040f058) &&
      ((PTR_LOOP_0040f058[0x1c] & 1) != 0)) && (3 < (byte)PTR_LOOP_0040f058[0x19])) {
    FUN_0040602e(*(undefined4 *)(PTR_LOOP_0040f058 + 0x10),*(undefined4 *)(PTR_LOOP_0040f058 + 0x14)
                );
  }
  memset(local_4c,0,0x34);
  pcVar1 = *(code **)*param_2;
  FUN_00406f39((int *)&local_10);
  (*(code *)PTR_guard_check_icall_00410308)();
  iVar4 = (*pcVar1)();
  if (&stack0xffffffa8 != &stack0xffffff9c) {
    pcVar1 = (code *)swi(0x29);
    iVar4 = (*pcVar1)();
  }
  if (-1 < iVar4) {
    pcVar1 = *(code **)(*param_2 + 0x10);
    (*(code *)PTR_guard_check_icall_00410308)(param_2,&local_18,&local_c,&local_8);
    iVar4 = (*pcVar1)();
    if (-1 < iVar4) {
      local_c = local_c + 1;
      local_8 = local_8 + 1;
      local_14 = local_18;
      pcVar1 = *(code **)(*local_10 + 0x18);
      (*(code *)PTR_guard_check_icall_00410308)(local_10,local_4c);
      iVar4 = (*pcVar1)();
      if (-1 < iVar4) {
        piVar2 = *(int **)(param_1 + 0x18);
        if (piVar2 == (int *)0x0) {
          if ((((undefined **)PTR_LOOP_0040f058 != &PTR_LOOP_0040f058) &&
              ((PTR_LOOP_0040f058[0x1c] & 1) != 0)) && (3 < (byte)PTR_LOOP_0040f058[0x19])) {
            FUN_004060b8(*(undefined4 *)(PTR_LOOP_0040f058 + 0x10),
                         *(undefined4 *)(PTR_LOOP_0040f058 + 0x14),local_14,local_24,local_44);
          }
        }
        else {
          iVar3 = *piVar2;
          (*(code *)PTR_guard_check_icall_00410308)
                    (piVar2,local_14,local_24,local_44,local_c,local_8);
          (**(code **)(iVar3 + 0xc))();
        }
        FUN_00406240(local_4c);
      }
    }
  }
  FUN_00406f39((int *)&local_10);
  return iVar4;
}



/* Function: FUN_004068f0 */

undefined4 FUN_004068f0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  undefined4 *puStackY_20;
  undefined1 *puStackY_1c;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    puStackY_1c = (undefined1 *)0x406987;
    FUN_00407102(unaff_retaddr,0x102,"onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp");
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    do {
      if (*(int *)(param_2 + iVar3 * 4) != (&DAT_00401c54)[iVar3]) goto LAB_00406969;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    pcVar1 = *(code **)*param_3;
    FUN_00406f39((int *)(param_1 + 0x14));
    puStackY_1c = &LAB_00401af0;
    puStackY_20 = param_3;
    (*(code *)PTR_guard_check_icall_00410308)();
    iVar3 = (*pcVar1)();
    if ((undefined4 **)&stack0xffffffec != &puStackY_20) {
      pcVar1 = (code *)swi(0x29);
      iVar3 = (*pcVar1)();
    }
    if (iVar3 < 0) {
LAB_00406969:
      uVar2 = 0x80040202;
    }
    else {
      *param_4 = 5;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x80040201;
  }
  return uVar2;
}



/* Function: FUN_00406990 */

undefined4 FUN_00406990(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (param_2 == 5) {
      FUN_00406f39((int *)(param_1 + 0x14));
      uVar2 = 0;
    }
    else {
      uVar2 = 0x80040200;
    }
    return uVar2;
  }
  FUN_00407102(unaff_retaddr,0x11c,"onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp");
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_004069e0 */

/* WARNING: Removing unreachable block (ram,0x00406b13) */

DWORD FUN_004069e0(int param_1,LPCWSTR param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  code *pcVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 unaff_retaddr;
  char *pcVar7;
  LPVOID local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28 [9];
  
  local_3c = (LPVOID)0x0;
  local_38 = 0;
  puVar6 = local_28;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar5 = 0x135;
    pcVar7 = "onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp";
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 0x136;
    pcVar7 = "onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp";
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      if ((((undefined **)PTR_LOOP_0040f058 != &PTR_LOOP_0040f058) &&
          ((PTR_LOOP_0040f058[0x1c] & 1) != 0)) && (4 < (byte)PTR_LOOP_0040f058[0x19])) {
        FUN_00406057(*(undefined4 *)(PTR_LOOP_0040f058 + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040f058 + 0x14),param_2);
      }
      if (*(int *)(param_1 + 0x30) == 0) {
        local_30 = param_1 + -4;
        DVar3 = FUN_00406b72(param_2,&local_38,&local_34);
        if (-1 < (int)DVar3) {
          if (local_34 < 4) {
            uVar5 = 0x14d;
            pcVar7 = "onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp";
          }
          else if (local_38 == 0) {
            uVar5 = 0x14e;
            pcVar7 = "onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp";
          }
          else {
            pcVar1 = *(code **)(**(int **)(param_1 + 0x10) + 0xc);
            if (local_3c == (LPVOID)0x0) {
              (*(code *)PTR_guard_check_icall_00410308)
                        (*(int **)(param_1 + 0x10),local_34,local_38,0,param_2,local_28,&local_3c,
                         &local_2c);
              DVar3 = (*pcVar1)();
              FUN_00406d71(local_30);
              pvVar2 = local_3c;
              if (-1 < (int)DVar3) {
                local_3c = (LPVOID)0x0;
                *param_3 = (int)pvVar2;
                *param_4 = local_2c;
                *param_5 = local_34;
              }
              goto LAB_00406b45;
            }
            uVar5 = 0x9d;
            pcVar7 = "onecoreuap\\inetcore\\Wwa\\AppModelCommon\\AutoPtr.hpp";
          }
          goto LAB_00406b66;
        }
      }
      else {
        DVar3 = 0x80020201;
      }
LAB_00406b45:
      FUN_0040619e(local_3c);
      return DVar3;
    }
    uVar5 = 0x137;
    pcVar7 = "onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp";
  }
LAB_00406b66:
  FUN_00407102(unaff_retaddr,uVar5,pcVar7);
  pcVar1 = (code *)swi(3);
  DVar3 = (*pcVar1)();
  return DVar3;
}



/* Function: FUN_00406b72 */

DWORD FUN_00406b72(LPCWSTR param_1,undefined4 *param_2,uint *param_3)

{
  code *pcVar1;
  HANDLE pvVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  uint uVar5;
  char *pcVar6;
  LPVOID pvVar7;
  int iVar8;
  char *pcVar9;
  LPVOID pvVar10;
  int iVar11;
  char *pcVar12;
  HANDLE pvVar13;
  undefined4 unaff_retaddr;
  uint local_10;
  HANDLE local_c;
  int local_8;
  
  local_c = (HANDLE)0x0;
  pvVar13 = (HANDLE)0x0;
  pcVar12 = (char *)0x0;
  pvVar3 = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar3 == (HANDLE)0x0) {
    pvVar3 = (HANDLE)0x0;
LAB_00406beb:
    uVar5 = FUN_004082f9(pvVar3,&local_10);
    if ((int)uVar5 < 0) goto LAB_00406bcc;
    if (3 < local_10) {
      if (0xfffffffa < local_10) {
        uVar5 = 0x800710f0;
        goto LAB_00406bcc;
      }
      pvVar3 = CreateFileMappingW(local_c,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCWSTR)0x0);
      if ((((pvVar3 == (HANDLE)0x0) ||
           (FUN_0040418c((HANDLE)0x0), pvVar13 = pvVar3, pvVar3 == (HANDLE)0xffffffff)) ||
          (pcVar6 = (char *)MapViewOfFile(pvVar3,4,0,0,0), pcVar6 == (char *)0x0)) ||
         (FUN_00409842((LPCVOID)0x0), pvVar2 = local_c, pcVar12 = pcVar6,
         pcVar6 == (char *)0xffffffff)) goto LAB_00406bb8;
      if (((*pcVar6 == -0x11) && (pcVar6[1] == -0x45)) && (pcVar6[2] == -0x41)) {
        if (*(int *)(local_8 + 0x30) == 0) {
          pvVar7 = CoTaskMemAlloc(local_10 + 5);
          if (pvVar7 == (LPVOID)0x0) {
            FUN_004070a0(unaff_retaddr,0x17,
                         "onecoreuap\\inetcore\\Wwa\\AppModelCommon\\FailFastHelpers.hpp");
            pcVar1 = (code *)swi(3);
            DVar4 = (*pcVar1)();
            return DVar4;
          }
          pvVar10 = *(LPVOID *)(local_8 + 0x28);
          if (pvVar10 != pvVar7) {
            FUN_0040619e(pvVar10);
            *(LPVOID *)(local_8 + 0x28) = pvVar7;
            pvVar10 = pvVar7;
          }
          o_memcpy_s(pvVar10,local_10,pcVar6,local_10);
          iVar11 = 0;
          do {
            iVar8 = *(int *)(local_8 + 0x28) + iVar11;
            iVar11 = iVar11 + 1;
            *(undefined1 *)(iVar8 + local_10) = 0;
          } while (iVar11 < 5);
          pcVar9 = *(char **)(local_8 + 0x28);
        }
        else {
          local_c = (HANDLE)0x0;
          if (*(HANDLE *)(local_8 + 0x1c) != pvVar2) {
            FUN_0040418c(*(HANDLE *)(local_8 + 0x1c));
            *(HANDLE *)(local_8 + 0x1c) = pvVar2;
          }
          pvVar13 = (HANDLE)0x0;
          if (*(HANDLE *)(local_8 + 0x20) != pvVar3) {
            FUN_0040418c(*(HANDLE *)(local_8 + 0x20));
            *(HANDLE *)(local_8 + 0x20) = pvVar3;
          }
          pcVar9 = *(char **)(local_8 + 0x24);
          pcVar12 = (char *)0x0;
          if (pcVar9 != pcVar6) {
            FUN_00409842(pcVar9);
            *(char **)(local_8 + 0x24) = pcVar6;
            pcVar9 = pcVar6;
          }
        }
        *param_2 = pcVar9;
        *param_3 = local_10;
        goto LAB_00406bcc;
      }
    }
    uVar5 = 0x8007065e;
  }
  else {
    FUN_0040418c((HANDLE)0x0);
    local_c = pvVar3;
    if (pvVar3 != (HANDLE)0xffffffff) goto LAB_00406beb;
LAB_00406bb8:
    DVar4 = GetLastError();
    uVar5 = DVar4 & 0xffff | 0x80070000;
    if ((int)DVar4 < 1) {
      uVar5 = DVar4;
    }
  }
LAB_00406bcc:
  FUN_00409842(pcVar12);
  FUN_0040418c(pvVar13);
  FUN_0040418c(local_c);
  return uVar5;
}



/* Function: FUN_00406d71 */

void __fastcall FUN_00406d71(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x1c) == -1)) {
      if ((*(int *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x20) == -1)) {
        if ((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 0x24) == -1)) {
          FUN_0040619e(*(LPVOID *)(param_1 + 0x28));
          *(undefined4 *)(param_1 + 0x28) = 0;
          return;
        }
        uVar2 = 0x1d2;
      }
      else {
        uVar2 = 0x1d1;
      }
    }
    else {
      uVar2 = 0x1d0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_0040418c(*(HANDLE *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0;
      FUN_0040418c(*(HANDLE *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x20) = 0;
      FUN_00409842(*(LPCVOID *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
    uVar2 = 0x1c9;
  }
  FUN_00407102(unaff_retaddr,uVar2,"onecoreuap\\inetcore\\wwa\\bytecode\\lib\\jscript9host.cpp");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406e16 */

void __fastcall FUN_00406e16(int *param_1)

{
  code *pcVar1;
  int *piStack_c;
  
  piStack_c = (int *)*param_1;
  if (piStack_c != (int *)0x0) {
    *param_1 = 0;
    pcVar1 = *(code **)(*piStack_c + 8);
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
    if ((int **)&stack0xfffffff8 != &piStack_c) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00406e50 */

/* WARNING: Removing unreachable block (ram,0x00406e88) */

int FUN_00406e50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piStack_18;
  
  piStack_18 = (int *)0x406e64;
  iVar2 = FUN_004041de(param_1 + 3);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      piStack_18 = (int *)0x1;
      pcVar1 = *(code **)(*param_1 + 0x2c);
      (*(code *)PTR_guard_check_icall_00410308)();
      (*pcVar1)();
    }
    if (DAT_0040f5e4 != (int *)0x0) {
      piStack_18 = DAT_0040f5e4;
      pcVar1 = *(code **)(*DAT_0040f5e4 + 8);
      (*(code *)PTR_guard_check_icall_00410308)();
      (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_18) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
      }
    }
  }
  return iVar2;
}



/* Function: FUN_00406ed0 */

void FUN_00406ed0(int param_1)

{
  FUN_004041ae((int *)(param_1 + 0xc));
  return;
}



/* Function: FUN_00406ef0 */

void FUN_00406ef0(int *param_1,int *param_2,int *param_3)

{
  FUN_00406fca(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00406f10 */

int __thiscall FUN_00406f10(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 0xc) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_00406f39 */

void __fastcall FUN_00406f39(int *param_1)

{
  code *pcVar1;
  int *piStack_c;
  
  piStack_c = (int *)*param_1;
  if (piStack_c != (int *)0x0) {
    *param_1 = 0;
    pcVar1 = *(code **)(*piStack_c + 8);
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
    if ((int **)&stack0xfffffff8 != &piStack_c) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00406f6b */

int * __fastcall FUN_00406f6b(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_0040d5ff(0x38);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = FUN_004062a3(puVar2);
    if ((int *)*param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*(int *)*param_1 + 8);
      (*(code *)PTR_guard_check_icall_00410308)();
      (*pcVar1)();
      if (&stack0xfffffff0 != &stack0xffffffec) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
      }
    }
    *param_1 = (int)puVar2;
  }
  return param_1;
}



/* Function: FUN_00406fca */

undefined4 __fastcall FUN_00406fca(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piStack_18;
  
  *param_3 = 0;
  piStack_18 = (int *)0x406fea;
  iVar2 = FUN_00403525(param_2,(int *)&DAT_00401ae0);
  if (iVar2 == 0) {
    piStack_18 = (int *)0x406ff8;
    iVar2 = FUN_00403525(extraout_ECX,(int *)&DAT_00401b88);
    if (iVar2 == 0) {
      piStack_18 = (int *)0x40700a;
      iVar2 = FUN_00403525(extraout_ECX_00,(int *)&DAT_00401b78);
      if (iVar2 == 0) {
        return 0x80004002;
      }
      param_1 = param_1 + 1;
    }
    *param_3 = (int)param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    piStack_18 = param_1;
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
    if ((int **)&stack0xffffffec != &piStack_18) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  else {
    *param_3 = (int)param_1;
    pcVar1 = *(code **)(*param_1 + 4);
    piStack_18 = param_1;
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
    if ((int **)&stack0xffffffec != &piStack_18) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return 0;
}



/* Function: FUN_00407070 */

void FUN_00407070(int param_1,int *param_2,int *param_3)

{
  FUN_00406ef0((int *)(param_1 + -4),param_2,param_3);
  return;
}



/* Function: FUN_00407080 */

void FUN_00407080(int param_1)

{
  FUN_00406ed0(param_1 + -4);
  return;
}



/* Function: FUN_00407090 */

void FUN_00407090(int param_1)

{
  FUN_00406e50((int *)(param_1 + -4));
  return;
}



/* Function: FUN_004070a0 */

void __fastcall FUN_004070a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_004070bf(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,(void *)0x8007000e);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004070bf */

void __fastcall
FUN_004070bf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,void *param_7)

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
  puVar2 = FUN_00403923(param_7,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_004073f9(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_00407102 */

void __fastcall FUN_00407102(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_004070bf(param_1,param_2,param_3,param_1,param_1,unaff_retaddr,(void *)0x8000ffff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407121 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00407385) */
/* WARNING: Removing unreachable block (ram,0x004072f2) */
/* WARNING: Removing unreachable block (ram,0x00407284) */
/* WARNING: Removing unreachable block (ram,0x0040722e) */
/* WARNING: Removing unreachable block (ram,0x004071fe) */
/* WARNING: Removing unreachable block (ram,0x0040725e) */
/* WARNING: Removing unreachable block (ram,0x004072b1) */
/* WARNING: Removing unreachable block (ram,0x00407346) */
/* WARNING: Removing unreachable block (ram,0x004073e2) */

void __fastcall
FUN_00407121(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  uStack_c = 0x407133;
  local_1458 = *param_7;
  local_1008[0] = L'\0';
  local_1408[0] = 0;
  local_1454 = param_7[1];
  uStack_1434 = FUN_004039a0(local_1458);
  local_1460 = 3;
  local_145c = 0;
  if (param_7[2] == 1) {
    local_145c = 8;
  }
  LOCK();
  UNLOCK();
  local_1450 = DAT_0040f5a0 + 1;
  local_144c = 0;
  DAT_0040f5a0 = DAT_0040f5a0 + 1;
  DStack_1448 = GetCurrentThreadId();
  pcVar1 = DAT_0040f588;
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
  if (DAT_0040f588 == (code *)0x0) {
    uStack_1414 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00410308)();
    uStack_1414 = (*pcVar1)();
  }
  pcVar1 = DAT_0040f54c;
  if (DAT_0040f54c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f564;
  if (DAT_0040f564 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(&local_1460,local_1408,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f560;
  if (DAT_0040f560 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)(&local_1460);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040f574;
  if ((DAT_0040f574 != (code *)0x0) && ((local_145c & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00410308)(&local_1460);
    (*pcVar1)();
  }
  if (-1 < local_1458) {
    local_1458 = -0x7fff0001;
    local_1454 = FUN_00403a4a(0x8000ffff);
  }
  pcVar1 = DAT_0040f538;
  if (DAT_0040f540 == '\0') {
    if (DAT_0040f538 == (code *)0x0) {
      BVar3 = IsDebuggerPresent();
      cVar2 = BVar3 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00410308)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_0040730e;
  }
  else {
LAB_0040730e:
    pcVar1 = DAT_0040f544;
    if ((local_145c & 2) == 0) {
      if ((DAT_0040f544 != (code *)0x0) && (DAT_0040f554 == '\0')) {
        (*(code *)PTR_guard_check_icall_00410308)(&local_1460,local_1008,0x800);
        (*pcVar1)();
      }
      if (local_1008[0] == L'\0') {
        FUN_004036b3(local_1008,0x800,(int)&local_1460);
      }
      OutputDebugStringW(local_1008);
      goto LAB_004073b8;
    }
  }
  pcVar1 = DAT_0040f544;
  if ((DAT_0040f544 != (code *)0x0) && (DAT_0040f554 == '\0')) {
    (*(code *)PTR_guard_check_icall_00410308)(&local_1460,0,0);
    (*pcVar1)();
  }
LAB_004073b8:
  pcVar1 = DAT_0040f56c;
  if ((((local_145c & 4) != 0) || (DAT_0040f548 != '\0')) && (DAT_0040f56c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
  }
  FUN_00403fc7((int)&local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004073f9 */

void __fastcall
FUN_004073f9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_00407121(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00407417 */

void __fastcall
FUN_00407417(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  code *pcVar1;
  void *pvVar2;
  uint *puVar3;
  void *this;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  uint local_24 [4];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  int local_8;
  
  local_8 = param_1;
  pvVar2 = (void *)FUN_00403c1f(param_1,param_2,param_3,param_1,param_1,param_6);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00403923(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_004073f9(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_00407474 */

void __fastcall FUN_00407474(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int unaff_retaddr;
  
  FUN_00407417(param_1,param_2,param_3,param_1,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407490 */

void FUN_00407490(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    o_free(param_1[4]);
    o_free(*param_1);
    o_free(param_1);
  }
  return;
}



/* Function: FUN_004074c0 */

undefined4 * __fastcall FUN_004074c0(undefined4 *param_1)

{
  code *pcVar1;
  int *piStack_10;
  
  piStack_10 = DAT_0040f5e4;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_0040112c;
  if (piStack_10 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_10 + 4);
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
    if ((int **)&stack0xfffffff4 != &piStack_10) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  *param_1 = &PTR_FUN_00401148;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}



/* Function: FUN_00407530 */

undefined4 * __thiscall FUN_00407530(void *this,byte param_1)

{
  FUN_00407557((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407557 */

void __fastcall FUN_00407557(undefined4 *param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  HANDLE pvVar3;
  undefined4 *local_8;
  
  piVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_00401148;
  *(undefined1 *)(param_1 + 4) = 0;
  local_8 = param_1;
  if (*piVar1 != 0) {
    this = (void *)FUN_00407fa9(piVar1);
    while( true ) {
      local_8 = (undefined4 *)0x0;
      iVar2 = RtlEnumerateGenericTableWithoutSplayingAvl(this,&local_8);
      if (iVar2 == 0) break;
      FUN_00408188(this,iVar2);
    }
  }
  if (param_1[5] != 0) {
    FUN_0040418c((HANDLE)param_1[5]);
    param_1[5] = 0;
  }
  if (*piVar1 != 0) {
    FUN_00408210((void *)*piVar1);
    *piVar1 = 0;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  pvVar3 = (HANDLE)param_1[5];
  if (pvVar3 != (HANDLE)0x0) {
    FUN_0040418c(pvVar3);
    param_1[5] = 0;
    pvVar3 = (HANDLE)0x0;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_0040418c(pvVar3);
  FUN_00408210((void *)param_1[3]);
  param_1[2] = 0xc0000001;
  return;
}



/* Function: FUN_00407610 */

/* WARNING: Removing unreachable block (ram,0x00407769) */

DWORD FUN_00407610(int *param_1,undefined4 param_2,uint param_3,HANDLE param_4,uint param_5,
                  uint param_6)

{
  code *pcVar1;
  HANDLE pvVar2;
  HANDLE hSourceProcessHandle;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  DWORD DVar6;
  undefined1 uVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 unaff_retaddr;
  HANDLE local_8;
  
  local_8 = (HANDLE)0x0;
  pvVar9 = (void *)0x0;
  if ((char)param_1[4] == '\0') {
    if ((param_4 == (HANDLE)0x0) || (param_4 == (HANDLE)0xffffffff)) {
      DVar6 = 0x80070057;
    }
    else if (param_5 < 0x10000) {
      if (param_6 < 0xfa00001) {
        if ((param_3 < 0x60005) && (param_3 < 0x60004)) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
        *(undefined1 *)(param_1 + 0xb) = uVar7;
        param_1[6] = param_5;
        uVar10 = param_5 * 0x18 + 4;
        param_1[9] = param_5 * 0x208;
        uVar5 = param_5 * 0x208 + uVar10;
        uVar8 = 0xffffffff;
        if (uVar5 >= uVar10) {
          uVar8 = uVar5;
        }
        param_1[10] = uVar8;
        DVar6 = -(uint)(uVar5 < uVar10) & 0x80070216;
        if (uVar10 <= uVar5) {
          pvVar9 = (void *)FUN_0040df6f(0x40);
          *(undefined4 *)((int)pvVar9 + 0x38) = 0;
          *(code **)((int)pvVar9 + 0x3c) = FUN_00407490;
          RtlInitializeGenericTableAvl(pvVar9,FUN_00407ef0,FUN_00408170,FUN_00408150,0);
          FUN_00408210((void *)0x0);
          pvVar2 = GetCurrentProcess();
          hSourceProcessHandle = GetCurrentProcess();
          BVar3 = DuplicateHandle(hSourceProcessHandle,param_4,pvVar2,&local_8,0,0,2);
          if (BVar3 == 0) {
            DVar4 = GetLastError();
            if (DVar4 == 0) {
              FUN_00407102(unaff_retaddr,0x15,
                           "onecoreuap\\inetcore\\Wwa\\AppModelCommon\\Common.hpp");
              pcVar1 = (code *)swi(3);
              DVar6 = (*pcVar1)();
              return DVar6;
            }
            DVar6 = DVar4 & 0xffff | 0x80070000;
            if ((int)DVar4 < 1) {
              DVar6 = DVar4;
            }
          }
          else {
            uVar5 = param_1[9] + param_6 * 2;
            if (0xfa00000 < uVar5) {
              uVar5 = 0xfa00000;
            }
            pcVar1 = *(code **)(*param_1 + 0x20);
            (*(code *)PTR_guard_check_icall_00410308)(local_8,uVar5 + uVar10);
            (*pcVar1)();
            pvVar2 = local_8;
            local_8 = (HANDLE)0x0;
            if ((HANDLE)param_1[5] != pvVar2) {
              FUN_0040418c((HANDLE)param_1[5]);
              param_1[5] = (int)pvVar2;
            }
            if ((void *)param_1[3] != pvVar9) {
              FUN_00408210((void *)param_1[3]);
              param_1[3] = (int)pvVar9;
            }
            *(undefined1 *)(param_1 + 4) = 1;
            pvVar9 = (void *)0x0;
            DVar6 = 0;
          }
        }
      }
      else {
        DVar6 = 0x800710f0;
      }
    }
    else {
      DVar6 = 0x80070004;
    }
  }
  else {
    DVar6 = 0x8000ffff;
  }
  FUN_00408210(pvVar9);
  FUN_0040418c(local_8);
  return DVar6;
}



/* Function: FUN_004077d0 */

DWORD FUN_004077d0(int param_1,int *param_2)

{
  short sVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  short *psVar9;
  undefined4 *puVar10;
  int iVar11;
  uint extraout_ECX;
  DWORD DVar12;
  short *psVar13;
  int iVar14;
  undefined8 uVar15;
  void *unaff_retaddr;
  uint local_10;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(int *)(param_1 + 0x14) == 0)) {
    DVar12 = 0x8000ffff;
    goto LAB_00407a9a;
  }
  if (((((*param_2 == 0) || (param_2[2] == 0)) || (param_2[4] == 0)) ||
      (((param_2[1] == 0 || (0x104 < (uint)param_2[1])) ||
       ((param_2[3] == 0 || ((0xfa00000 < (uint)param_2[3] || (param_2[5] == 0)))))))) ||
     (0xfa00000 < (uint)param_2[5])) {
    DVar12 = 0x80070057;
    goto LAB_00407a9a;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0x90;
  }
  else {
    uVar4 = FUN_00407fa9((int *)(param_1 + 0xc));
    uVar5 = RtlNumberGenericTableElementsAvl(uVar4);
    if (*(uint *)(param_1 + 0x18) <= uVar5) {
      DVar12 = 0x80070004;
      goto LAB_00407a9a;
    }
    uVar5 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c);
    if (uVar5 < *(uint *)(param_1 + 0x1c)) {
LAB_00407884:
      pvVar6 = (void *)0x80070216;
    }
    else {
      local_10 = uVar5 + *(int *)(param_1 + 0x24);
      if (local_10 < uVar5) {
        local_10 = 0xffffffff;
        goto LAB_00407884;
      }
      pvVar6 = (void *)0x0;
    }
    if ((int)pvVar6 < 0) goto LAB_00407aba;
    if (local_10 < 0xfa00001) {
      if (*(char *)(param_1 + 0x2c) == '\0') {
        iVar11 = 0;
      }
      else {
        iVar11 = param_2[5];
      }
      uVar5 = iVar11 + param_2[3];
      if ((((uVar5 < (uint)param_2[3]) || (0xfa00000 < uVar5)) || (uVar5 + local_10 < local_10)) ||
         (0xfa00000 < uVar5 + local_10)) {
        DVar12 = 0x800710f0;
      }
      else {
        puVar7 = (undefined4 *)FUN_0040df6f(0x18);
        puVar10 = puVar7;
        for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        FUN_00407490((undefined4 *)0x0);
        iVar11 = param_2[1];
        local_8 = puVar7;
        iVar8 = FUN_00407fa9((int *)&local_8);
        *(int *)(iVar8 + 4) = iVar11;
        iVar11 = FUN_00407fa9((int *)&local_8);
        lVar3 = (ulonglong)*(uint *)(iVar11 + 4) * 2;
        psVar9 = (short *)FUN_0040df6f(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
        iVar11 = *param_2;
        iVar8 = FUN_00407fa9((int *)&local_8);
        DVar12 = FUN_00408269(psVar9,*(uint *)(iVar8 + 4),iVar11);
        if (-1 < (int)DVar12) {
          puVar10 = (undefined4 *)FUN_00407fa9((int *)&local_8);
          *puVar10 = psVar9;
          o_free(0);
          uVar5 = *(int *)(param_1 + 0x28) + 7U & 0xfffffff8;
          *(uint *)(param_1 + 0x28) = uVar5;
          iVar11 = FUN_00407fa9((int *)&local_8);
          *(uint *)(iVar11 + 8) = uVar5;
          iVar11 = param_2[3];
          iVar8 = FUN_00407fa9((int *)&local_8);
          *(int *)(iVar8 + 0xc) = iVar11;
          psVar13 = (short *)param_2[4];
          psVar9 = psVar13 + 1;
          do {
            sVar1 = *psVar13;
            psVar13 = psVar13 + 1;
          } while (sVar1 != 0);
          iVar14 = (int)psVar13 - (int)psVar9 >> 1;
          lVar3 = (ulonglong)(iVar14 + 1) * 2;
          psVar9 = (short *)FUN_0040df6f(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3
                                        );
          iVar11 = param_2[5];
          iVar8 = FUN_00407fa9((int *)&local_8);
          *(int *)(iVar8 + 0x14) = iVar11;
          DVar12 = FUN_00408269(psVar9,iVar14 + 1,param_2[4]);
          if (-1 < (int)DVar12) {
            iVar11 = FUN_00407fa9((int *)&local_8);
            *(short **)(iVar11 + 0x10) = psVar9;
            o_free(0);
            DVar12 = FUN_00407dac(*(HANDLE *)(param_1 + 0x14),(LPCVOID)param_2[2],param_2[3],
                                  *(DWORD *)(param_1 + 0x28));
            if (-1 < (int)DVar12) {
              pvVar6 = (void *)FUN_00407fa9((int *)(param_1 + 0xc));
              puVar10 = (undefined4 *)FUN_00407fa9((int *)&local_8);
              DVar12 = FUN_00407fcf(pvVar6,*puVar10,puVar7);
              if (-1 < (int)DVar12) {
                iVar11 = FUN_00407fa9((int *)&local_8);
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(iVar11 + 0xc);
                iVar11 = FUN_00407fa9((int *)&local_8);
                *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(iVar11 + 0xc);
                if (*(char *)(param_1 + 0x2c) == '\0') {
                  iVar11 = 0;
                }
                else {
                  iVar11 = param_2[5];
                }
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar11;
                local_8 = (undefined4 *)0x0;
              }
            }
            goto LAB_00407a9a;
          }
        }
        o_free(psVar9);
      }
LAB_00407a9a:
      FUN_00407490(local_8);
      return DVar12;
    }
    uVar4 = 0x99;
  }
  uVar15 = FUN_00407102(unaff_retaddr,uVar4,
                        "onecoreuap\\inetcore\\wwa\\bytecode\\lib\\bytecodecache.cpp");
  unaff_retaddr = (void *)((ulonglong)uVar15 >> 0x20);
  pvVar6 = (void *)uVar15;
  local_10 = extraout_ECX;
LAB_00407aba:
  FUN_004082d6(unaff_retaddr,local_10,pvVar6);
  pcVar2 = (code *)swi(3);
  DVar12 = (*pcVar2)();
  return DVar12;
}



/* Function: FUN_00407ad0 */

/* WARNING: Removing unreachable block (ram,0x00407c25) */
/* WARNING: Removing unreachable block (ram,0x00407c5c) */

void FUN_00407ad0(int *param_1)

{
  undefined4 uVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_54 [4];
  DWORD DStack_50;
  DWORD local_4c;
  DWORD local_48;
  undefined2 local_44;
  undefined2 uStack_42;
  DWORD DStack_40;
  LPCVOID pvStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  LPCWSTR pWStack_2c;
  DWORD DStack_28;
  DWORD DStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  DWORD DStack_14;
  DWORD DStack_10;
  uint local_c;
  
  local_c = DAT_0040f100 ^ (uint)auStack_54;
  local_48 = param_1[10];
  if (((char)param_1[4] != '\0') && (param_1[5] != 0)) {
    local_4c = 4;
    local_44 = 4;
    uVar1 = FUN_00407fa9(param_1 + 3);
    uStack_42 = RtlNumberGenericTableElementsAvl(uVar1);
    DVar2 = FUN_00407dac((HANDLE)param_1[5],&local_44,4,0);
    if (-1 < (int)DVar2) {
      DStack_50 = param_1[6] * 0x18 + 4;
      pcVar5 = *(code **)(*param_1 + 0x1c);
      uVar1 = 1;
      while( true ) {
        (*(code *)PTR_guard_check_icall_00410308)(param_1,uVar1,&pvStack_3c);
        iVar4 = (*pcVar5)();
        DVar2 = local_48;
        if (iVar4 != 0) break;
        iStack_20 = iStack_38;
        DStack_24 = DStack_50;
        uStack_18 = uStack_30;
        uStack_1c = uStack_34;
        DStack_10 = DStack_28;
        DStack_14 = 0;
        if ((char)param_1[0xb] != '\0') {
          DStack_14 = local_48;
        }
        DVar3 = FUN_00407dac((HANDLE)param_1[5],&DStack_24,0x18,local_4c);
        if ((int)DVar3 < 0) goto LAB_00407c6c;
        DStack_40 = iStack_38 * 2;
        DVar3 = FUN_00407dac((HANDLE)param_1[5],pvStack_3c,DStack_40,DStack_50);
        if ((int)DVar3 < 0) goto LAB_00407c6c;
        if ((char)param_1[0xb] != '\0') {
          DVar3 = FUN_00407c9b((HANDLE)param_1[5],pWStack_2c,DStack_28,DVar2);
          if ((int)DVar3 < 0) goto LAB_00407c6c;
          local_48 = DVar2 + DStack_28;
        }
        local_4c = local_4c + 0x18;
        DStack_50 = DStack_50 + DStack_40;
        pcVar5 = *(code **)(*param_1 + 0x1c);
        uVar1 = 0;
      }
      if (iVar4 == -0x7ff8fefd) {
        pcVar5 = *(code **)(*param_1 + 0x20);
        (*(code *)PTR_guard_check_icall_00410308)(param_1[5],local_48);
        (*pcVar5)();
      }
    }
LAB_00407c6c:
    FUN_0040418c((HANDLE)param_1[5]);
    param_1[5] = 0;
  }
  FUN_0040d5e0(local_c ^ (uint)auStack_54);
  return;
}



/* Function: FUN_00407c9b */

DWORD __fastcall FUN_00407c9b(HANDLE param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4)

{
  HANDLE pvVar1;
  uint uVar2;
  LPVOID pvVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  LPVOID pvVar6;
  DWORD local_c;
  HANDLE local_8;
  
  DVar4 = 0;
  local_c = 0;
  pvVar5 = (HANDLE)0x0;
  local_8 = (HANDLE)0x0;
  pvVar6 = (LPVOID)0x0;
  pvVar1 = CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = (HANDLE)0x0;
LAB_00407d19:
    uVar2 = FUN_004082f9(pvVar1,&local_c);
    pvVar1 = pvVar5;
    pvVar3 = pvVar6;
    if (-1 < (int)uVar2) {
      if (local_c == param_3) {
        pvVar1 = CreateFileMappingW(local_8,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCWSTR)0x0);
        if ((((pvVar1 == (HANDLE)0x0) ||
             (FUN_0040418c((HANDLE)0x0), pvVar5 = pvVar1, pvVar1 == (HANDLE)0xffffffff)) ||
            (pvVar3 = MapViewOfFile(pvVar1,4,0,0,0), pvVar3 == (LPVOID)0x0)) ||
           (FUN_00409842((LPCVOID)0x0), pvVar6 = pvVar3, pvVar3 == (LPVOID)0xffffffff))
        goto LAB_00407ce4;
        uVar2 = FUN_00407dac(param_1,pvVar3,param_3,param_4);
        if (-1 < (int)uVar2) goto LAB_00407cfa;
      }
      else {
        uVar2 = 0x800706ab;
      }
    }
  }
  else {
    FUN_0040418c((HANDLE)0x0);
    local_8 = pvVar1;
    if (pvVar1 != (HANDLE)0xffffffff) goto LAB_00407d19;
LAB_00407ce4:
    DVar4 = GetLastError();
    uVar2 = DVar4 & 0xffff | 0x80070000;
    pvVar1 = pvVar5;
    pvVar3 = pvVar6;
    if ((int)DVar4 < 1) {
      uVar2 = DVar4;
    }
  }
  DVar4 = uVar2;
LAB_00407cfa:
  FUN_00409842(pvVar3);
  FUN_0040418c(pvVar1);
  FUN_0040418c(local_8);
  return DVar4;
}



/* Function: FUN_00407dac */

DWORD __fastcall FUN_00407dac(HANDLE param_1,LPCVOID param_2,DWORD param_3,DWORD param_4)

{
  code *pcVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 unaff_retaddr;
  _OVERLAPPED local_1c;
  DWORD local_8;
  
  local_1c.u.s.Offset = param_4;
  local_1c.Internal = 0;
  local_1c.InternalHigh = 0;
  local_1c._12_8_ = 0;
  BVar2 = WriteFile(param_1,param_2,param_3,&local_8,&local_1c);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    DVar4 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      DVar4 = DVar3;
    }
  }
  else {
    if (param_3 != local_8) {
      FUN_00407102(unaff_retaddr,0x176,"onecoreuap\\inetcore\\wwa\\bytecode\\lib\\bytecodecache.cpp"
                  );
      pcVar1 = (code *)swi(3);
      DVar4 = (*pcVar1)();
      return DVar4;
    }
    DVar4 = 0;
  }
  return DVar4;
}



/* Function: FUN_00407e20 */

DWORD FUN_00407e20(HANDLE param_1,LONG param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  BOOL BVar3;
  
  DVar1 = SetFilePointer(param_1,param_2,(PLONG)0x0,0);
  if ((DVar1 == 0xffffffff) || (BVar3 = SetEndOfFile(param_1), BVar3 == 0)) {
    DVar2 = GetLastError();
    DVar1 = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      DVar1 = DVar2;
    }
  }
  else {
    DVar1 = 0;
  }
  return DVar1;
}



/* Function: FUN_00407e70 */

undefined4 FUN_00407e70(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 unaff_retaddr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar4 = 0x18e;
  }
  else {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar4 = FUN_00407fa9((int *)(param_1 + 0xc));
      iVar2 = RtlEnumerateGenericTableAvl(uVar4,param_2 != 0);
      if (iVar2 == 0) {
        uVar4 = 0x80070103;
      }
      else {
        uVar4 = 0;
        puVar5 = *(undefined4 **)(iVar2 + 4);
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_3 = *puVar5;
          puVar5 = puVar5 + 1;
          param_3 = param_3 + 1;
        }
      }
      return uVar4;
    }
    uVar4 = 399;
  }
  FUN_00407102(unaff_retaddr,uVar4,"onecoreuap\\inetcore\\wwa\\bytecode\\lib\\bytecodecache.cpp");
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



/* Function: FUN_00407ef0 */

char FUN_00407ef0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CompareStringOrdinal((LPCWSTR)*param_2,-1,(LPCWSTR)*param_3,-1,1);
  if (iVar2 + -2 < 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = (iVar2 == 2 || iVar2 + -2 < 0) + '\x01';
  }
  return cVar1;
}



/* Function: FUN_00407f29 */

int FUN_00407f29(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)FUN_0040d5ff(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    local_8 = FUN_004074c0(puVar2);
    if (local_8 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*local_8;
      (*(code *)PTR_guard_check_icall_00410308)();
      iVar3 = (*pcVar1)();
      if (&stack0xfffffff0 != &stack0xffffffe4) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      iVar4 = 0;
      if (iVar3 < 0) {
        iVar4 = iVar3;
      }
      FUN_00406e16((int *)&local_8);
      return iVar4;
    }
  }
  FUN_004070a0(unaff_retaddr,0x1c1,"onecoreuap\\inetcore\\wwa\\bytecode\\lib\\bytecodecache.cpp");
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_00407fa9 */

void __fastcall FUN_00407fa9(int *param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  if (*param_1 != 0) {
    return;
  }
  FUN_00407102(unaff_retaddr,0xc4,"onecoreuap\\inetcore\\Wwa\\AppModelCommon\\AutoPtr.hpp");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00407fcf */

undefined4 __thiscall FUN_00407fcf(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;
  
  local_10 = param_1;
  local_c = param_2;
  iVar2 = RtlInsertElementGenericTableAvl(this,&local_10,8,&local_5);
  if (iVar2 != 0) {
    uVar3 = 0x800702ba;
    if (local_5 != '\0') {
      uVar3 = 0;
    }
    return uVar3;
  }
  FUN_004070a0(unaff_retaddr,0xde,"onecoreuap\\inetcore\\Wwa\\AppModelCommon\\GenericMap.hpp");
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_00408030 */

/* WARNING: Removing unreachable block (ram,0x00408068) */

int FUN_00408030(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piStack_18;
  
  piStack_18 = (int *)0x408044;
  iVar2 = FUN_004041de(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      piStack_18 = (int *)0x1;
      pcVar1 = *(code **)(*param_1 + 0x18);
      (*(code *)PTR_guard_check_icall_00410308)();
      (*pcVar1)();
    }
    if (DAT_0040f5e4 != (int *)0x0) {
      piStack_18 = DAT_0040f5e4;
      pcVar1 = *(code **)(*DAT_0040f5e4 + 8);
      (*(code *)PTR_guard_check_icall_00410308)();
      (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_18) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
      }
    }
  }
  return iVar2;
}



/* Function: FUN_004080b0 */

undefined4 FUN_004080b0(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *piStack_14;
  
  *param_3 = 0;
  piStack_14 = (int *)0x4080cc;
  iVar2 = FUN_00403525(param_2,(int *)&DAT_00401ae0);
  if (iVar2 == 0) {
    piStack_14 = (int *)0x4080da;
    iVar2 = FUN_00403525(extraout_ECX,(int *)&DAT_00401cd4);
    if (iVar2 == 0) {
      return 0x80004002;
    }
  }
  *param_3 = param_1;
  piStack_14 = param_1;
  pcVar1 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_00410308)();
  (*pcVar1)();
  if ((int **)&stack0xfffffff0 != &piStack_14) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  return 0;
}



/* Function: FUN_00408120 */

int __thiscall FUN_00408120(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (int)this;
}



/* Function: FUN_00408150 */

void FUN_00408150(undefined4 param_1,undefined4 param_2)

{
  o_free(param_2);
  return;
}



/* Function: FUN_00408170 */

void FUN_00408170(undefined4 param_1,int param_2)

{
  FUN_0040df6f(param_2);
  return;
}



/* Function: FUN_00408188 */

/* WARNING: Removing unreachable block (ram,0x004081c8) */

void __thiscall FUN_00408188(void *this,undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 unaff_retaddr;
  void *pvStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_1;
  pvStack_20 = this;
  cVar2 = RtlDeleteElementGenericTableAvl();
  if (cVar2 == '\0') {
    FUN_00407102(unaff_retaddr,0x198,"onecoreuap\\inetcore\\Wwa\\AppModelCommon\\GenericMap.hpp");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)((int)this + 0x38);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
  }
  pcVar1 = *(code **)((int)this + 0x3c);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
    if (&pvStack_20 != (void **)&stack0xffffffdc) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00408210 */

void FUN_00408210(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00408238(param_1);
    o_free(param_1);
  }
  return;
}



/* Function: FUN_00408238 */

void __fastcall FUN_00408238(void *param_1)

{
  int iVar1;
  undefined4 local_8;
  
  while( true ) {
    local_8 = 0;
    iVar1 = RtlEnumerateGenericTableWithoutSplayingAvl(param_1,&local_8);
    if (iVar1 == 0) break;
    FUN_00408188(param_1,iVar1);
  }
  return;
}



/* Function: FUN_00408269 */

undefined4 __fastcall FUN_00408269(short *param_1,uint param_2,int param_3)

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



/* Function: FUN_004082d6 */

void __thiscall FUN_004082d6(void *this,undefined4 param_1,void *param_2)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_004070bf(this,0x98,"onecoreuap\\inetcore\\wwa\\bytecode\\lib\\bytecodecache.cpp",this,this,
               unaff_retaddr,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004082f9 */

DWORD __fastcall FUN_004082f9(HANDLE param_1,DWORD *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD DVar3;
  LARGE_INTEGER local_c;
  
  local_c.s.LowPart = 0;
  local_c.s.HighPart = 0;
  BVar1 = GetFileSizeEx(param_1,&local_c);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    DVar3 = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      DVar3 = DVar2;
    }
  }
  else if (local_c.s.HighPart == 0) {
    *param_2 = local_c.s.LowPart;
    DVar3 = 0;
  }
  else {
    DVar3 = 0x800705b6;
  }
  return DVar3;
}



/* Function: FUN_0040834f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Enum "__MIDL_IUri_0001": Some values do not have unique names */

void __fastcall FUN_0040834f(LPCWSTR param_1,IUri *param_2,undefined4 param_3,short *param_4)

{
  WCHAR WVar1;
  code *pcVar2;
  HRESULT HVar3;
  int iVar4;
  LPCWSTR pWVar5;
  uint cchCount1;
  DWORD local_100c;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  local_100c = 0;
  pWVar5 = param_1;
  do {
    WVar1 = *pWVar5;
    pWVar5 = pWVar5 + 1;
  } while (WVar1 != L'\0');
  cchCount1 = (int)pWVar5 - (int)(param_1 + 1) >> 1;
  HVar3 = CoInternetParseIUri(param_2,PARSE_PATH_FROM_URL,0,local_1008,0x800,&local_100c,0);
  if (-1 < HVar3) {
    if (0xfff < local_100c * 2) {
      FUN_0040de79();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_1008[local_100c] = L'\0';
    if ((cchCount1 < local_100c) &&
       (iVar4 = CompareStringOrdinal(param_1,cchCount1,local_1008,cchCount1,1), iVar4 == 2)) {
      FUN_00408269(param_4,0x104,(int)(local_1008 + cchCount1));
    }
  }
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00408424 */

undefined4 __thiscall FUN_00408424(void *this,int param_1)

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



/* Function: FUN_004084ad */

undefined4 __fastcall FUN_004084ad(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00408513 */

LPVOID __fastcall FUN_00408513(DWORD param_1,SIZE_T param_2)

{
  code *pcVar1;
  FARPROC pFVar2;
  HANDLE hHeap;
  LPVOID pvVar3;
  HMODULE hModule;
  
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_0040f5ec == (FARPROC)0x0) {
    if (DAT_0040f5f9 != '\0') {
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0040f5ec = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_0040f5f9 = '\x01';
    if (DAT_0040f5ec == (FARPROC)0x0) {
      DAT_0040f5f9 = '\x01';
      return pvVar3;
    }
  }
  pFVar2 = DAT_0040f5ec;
  (*(code *)PTR_guard_check_icall_00410308)();
  (*pFVar2)();
  if (&stack0xffffffec != &stack0xffffffe4) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  return pvVar3;
}



/* Function: FUN_004085a5 */

void FUN_004085a5(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
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
      FUN_004084ad(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00408690 */

undefined * FUN_00408690(void)

{
  if (DAT_0040f5f8 == '\0') {
    FUN_004085a5((LPCWSTR)FUN_004039a0,(uint *)0x0,&DAT_0040f600,0x40);
    DAT_0040f5f8 = '\x01';
  }
  return &DAT_0040f600;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x004086c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_004086d0 */

void FUN_004086d0(undefined4 param_1)

{
  code *pcVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 uStackY_18;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  uStackY_18 = 0x4086ee;
  pFVar2 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar2 != (FARPROC)0x0) {
    uStackY_18 = param_1;
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pFVar2)();
    if ((undefined4 *)&stack0xfffffff4 != &uStackY_18) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00408720 */

void __fastcall FUN_00408720(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00403c5b(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_0040873d */

char * __fastcall FUN_0040873d(char *param_1)

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



/* Function: FUN_0040875b */

int __fastcall FUN_0040875b(short *param_1)

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



/* Function: FUN_00408783 */

/* WARNING: Removing unreachable block (ram,0x004087a8) */

undefined1 FUN_00408783(void)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  
  pcVar1 = DAT_0040f568;
  if (DAT_0040f57c == '\0') {
    if (DAT_0040f568 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00410308)();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') goto LAB_004087b7;
    }
    uVar3 = 0;
  }
  else {
LAB_004087b7:
    uVar3 = 1;
  }
  return uVar3;
}



/* Function: FUN_004087c2 */

void __fastcall FUN_004087c2(undefined4 param_1)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  FUN_004070bf(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr,(void *)0x8000ffff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004087e7 */

void FUN_004087e7(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00407474(unaff_retaddr,0x9cd,0x401d88);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408818 */

void FUN_00408818(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00407474(unaff_retaddr,0x9d7,0x401d88);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00408847 */

void __fastcall FUN_00408847(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00408818((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_0040885a */

uint __fastcall FUN_0040885a(void *param_1,int *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  uVar1 = FUN_00408a7f(param_1,local_c);
  if ((int)uVar1 < 0) {
    FUN_00404054(unaff_retaddr,100,&DAT_00401d84,uVar1);
    FUN_00404054(unaff_retaddr,0x6d,&DAT_00401d84,uVar1);
  }
  else {
    *param_2 = local_c[0] << 2;
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_004088b7 */

void __thiscall FUN_004088b7(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_0040411f();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00408269(local_214,0x104,param_1);
  FUN_00408424(local_214,0x401dc0);
  uVar3 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar3 != 0) {
    uVar2 = uVar3;
  }
  uVar2 = FUN_00409295(this,uVar3,uVar2,local_214);
  if ((int)uVar2 < 0) {
    FUN_00404054(unaff_retaddr,0x88,&DAT_00401d84,uVar2);
  }
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040895c */

undefined4 __fastcall FUN_0040895c(HANDLE param_1,int *param_2)

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
    goto LAB_0040897f;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_0040897f:
        uVar2 = FUN_00404073(unaff_retaddr,iVar4,0x401d84);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00408a51:
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
        goto LAB_0040897f;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_0040897f;
          }
          if (DVar1 == 0) goto LAB_00408a51;
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
  FUN_00404054(unaff_retaddr,uVar2,&DAT_00401d84,0x8000ffff);
  return 0x8000ffff;
}



/* Function: FUN_00408a7f */

void __thiscall FUN_00408a7f(void *this,int *param_1)

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
  
  local_c = DAT_0040f100 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00408269(local_218,0x104,(int)this);
  FUN_00408424(local_218,0x401dc0);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_00404073(unaff_retaddr,0xcd,0x401d84);
    }
LAB_00408b2b:
    if (pvVar1 == (HANDLE)0x0) goto LAB_00408b45;
  }
  else {
    iStack_220 = 0;
    uVar3 = FUN_0040895c(pvVar1,&iStack_220);
    if ((int)uVar3 < 0) {
      FUN_00404054(unaff_retaddr,0xd3,&DAT_00401d84,uVar3);
      goto LAB_00408b2b;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_004087e7(pvVar1);
LAB_00408b45:
  FUN_0040d5e0(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_00408b64 */

void __thiscall FUN_00408b64(void *this,undefined1 *param_1,undefined4 param_2)

{
  uint *puVar1;
  LPVOID lpMem;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  LPVOID pvVar5;
  HANDLE hHeap;
  char *extraout_EAX;
  int extraout_EAX_00;
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
  iVar2 = FUN_0040875b(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_0040873d(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_0040873d(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00408513(8,(SIZE_T)pcVar4);
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
    FUN_004097be(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(int *)((int)this + 0xc));
    FUN_004097be(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(int *)((int)this + 0x14));
    _Dst = (void *)FUN_0040974f(extraout_EAX_00,(int)pcVar4,*(short **)(param_1 + 0x14),
                                (int *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00408c57 */

void __fastcall FUN_00408c57(int param_1)

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



/* Function: FUN_00408cc6 */

void __thiscall FUN_00408cc6(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00408513(8,0xdc);
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
    FUN_00408b64(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00408d84 */

DWORD * __fastcall FUN_00408d84(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_0040f53c;
  if (DAT_0040f53c != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0040f53c[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_0040931c(*DAT_0040f53c,&local_8);
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



/* Function: FUN_00408e0d */

uint __fastcall FUN_00408e0d(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00408e0d(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_0040f160 + 1;
        DAT_0040f160 = DAT_0040f160 + 1;
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
        pcVar5 = (char *)o_memcpy_s(pcVar7,pcVar9,piVar2[1],pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00408ecb */

/* WARNING: Removing unreachable block (ram,0x00408f58) */

void __fastcall FUN_00408ecb(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  *param_2 = '\0';
  iVar2 = DAT_0040f550;
  if (DAT_0040f550 != 0) {
    DVar3 = GetCurrentThreadId();
    for (pDVar5 = *(DWORD **)(iVar2 + (DVar3 % 10) * 4); pDVar5 != (DWORD *)0x0;
        pDVar5 = (DWORD *)pDVar5[1]) {
      if (*pDVar5 == DVar3) {
        pDVar5 = pDVar5 + 2;
        break;
      }
    }
    if ((pDVar5 != (DWORD *)0x0) && (*pDVar5 != 0)) {
      *param_2 = '\0';
      uVar4 = FUN_00408e0d(param_1,*pDVar5,param_2,param_3);
      if ((char)uVar4 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar3 = *pDVar5;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar3 + 4);
        (*(code *)PTR_guard_check_icall_00410308)();
        (*pcVar1)();
        DVar3 = *(DWORD *)(DVar3 + 8);
      } while (DVar3 != 0);
    }
  }
  pcVar1 = DAT_0040f558;
  if (DAT_0040f558 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
    if (&stack0xffffffe4 != &stack0xffffffdc) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00408fd0 */

void FUN_00408fd0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00408ecb((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_0040f648 != DVar2) {
    LOCK();
    iVar1 = DAT_0040f64c + 1;
    UNLOCK();
    iVar3 = DAT_0040f64c + 1;
    DAT_0040f64c = iVar1;
    if (iVar3 < 4) {
      DAT_0040f648 = DVar2;
      this = FUN_00408d84(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00408cc6(this,param_1);
      }
      DAT_0040f648 = 0;
    }
    LOCK();
    DAT_0040f64c = DAT_0040f64c + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00409035 */

void __fastcall FUN_00409035(LPCSTR param_1)

{
  if (DAT_0040f5fc == (HMODULE)0x0) {
    DAT_0040f5fc = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_0040f5fc,param_1);
  return;
}



/* Function: FUN_00409061 */

FARPROC __fastcall FUN_00409061(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_0040f640 == (HMODULE)0x0) &&
     (DAT_0040f640 = GetModuleHandleW(L"kernelbase.dll"), DAT_0040f640 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_0040f640,param_1);
  return pFVar1;
}



/* Function: FUN_004090a0 */

void FUN_004090a0(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0040f5fc == (HMODULE)0x0) {
    DAT_0040f5fc = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0040f5fc,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_004090f0 */

void FUN_004090f0(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uStack_10;
  
  if (DAT_0040f5f0 == (code *)0x0) {
    uStack_10 = 0x40910b;
    DAT_0040f5f0 = (code *)FUN_00409035("RtlNtStatusToDosErrorNoTeb");
    if (DAT_0040f5f0 == (code *)0x0) {
      return;
    }
  }
  pcVar1 = DAT_0040f5f0;
  uStack_10 = param_1;
  (*(code *)PTR_guard_check_icall_00410308)();
  (*pcVar1)();
  if ((undefined4 *)&stack0xfffffff4 != &uStack_10) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00409140 */

/* WARNING: Removing unreachable block (ram,0x00409178) */

undefined4 FUN_00409140(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0040f644 == (code *)0x0) &&
     (DAT_0040f644 = (code *)FUN_00409035("RtlDllShutdownInProgress"), DAT_0040f644 == (code *)0x0))
  {
    uVar2 = 0;
  }
  else {
    pcVar1 = DAT_0040f644;
    (*(code *)PTR_guard_check_icall_00410308)();
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}



/* Function: FUN_00409190 */

void FUN_00409190(undefined1 *param_1)

{
  code *pcVar1;
  FARPROC pFVar2;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined8 *puStack_38;
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
  local_1e = DAT_0040f594;
  local_1c = *(undefined2 *)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  if (DAT_0040f5f4 == (FARPROC)0x0) {
    puStack_38 = (undefined8 *)0x4091ed;
    DAT_0040f5f4 = FUN_00409061("WilFailureNotifyWatchers");
    if (DAT_0040f5f4 == (FARPROC)0x0) goto LAB_0040921a;
  }
  pFVar2 = DAT_0040f5f4;
  puStack_38 = &local_c;
  puStack_3c = &local_28;
  uStack_40 = 0;
  (*(code *)PTR_guard_check_icall_00410308)();
  (*pFVar2)();
  if ((undefined4 *)&stack0xffffffcc != &uStack_40) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_0040921a:
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



/* Function: FUN_00409250 */

void __fastcall FUN_00409250(int *param_1)

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



/* Function: FUN_00409295 */

undefined4 __thiscall FUN_00409295(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00408720(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_004092e5(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_004092e5 */

void __thiscall FUN_004092e5(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_004087e7(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_0040931c */

void __fastcall FUN_0040931c(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00403587(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_004092e5(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00408720(extraout_ECX);
    goto LAB_00409408;
  }
  FUN_0040965e(&local_214,&local_21c);
  local_218 = (int *)0x0;
  uVar2 = FUN_0040885a(local_210,(int *)&local_218);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_00409436:
    FUN_00404054(unaff_retaddr,uVar3,&DAT_00401d84,uVar2);
  }
  else if (local_218 == (int *)0x0) {
    uVar2 = FUN_00409540((int)local_210,&local_214,param_2);
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_00409436;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00408818(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_004087e7(local_214);
  }
LAB_00409408:
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004094db */

void __fastcall FUN_004094db(int *param_1)

{
  if (*param_1 != 0) {
    FUN_004087e7((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_004094ee */

void __fastcall FUN_004094ee(int param_1)

{
  FUN_00409603((int *)(param_1 + 0x18));
  FUN_00409519((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004087e7(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00409519 */

void __fastcall FUN_00409519(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_004087e7((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_004087e7((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00409540 */

uint __fastcall FUN_00409540(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00408513(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    uVar3 = 0x8007000e;
    FUN_00404054(unaff_retaddr,0x148,&DAT_00401d84,0x8007000e);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_0040411f();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = FUN_00409820(local_10,param_1,(uint)local_18 >> 2);
    pvVar2 = local_14;
    if ((int)uVar3 < 0) {
      FUN_00404054(unaff_retaddr,0x14b,&DAT_00401d84,uVar3);
    }
    else {
      FUN_004096c1(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      uVar3 = 0;
    }
    FUN_00409519(local_10);
  }
  FUN_004096a1((int *)&local_18);
  return uVar3;
}



/* Function: FUN_00409603 */

void __fastcall FUN_00409603(int *param_1)

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
        FUN_00408c57((int)lpMem + 8);
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



/* Function: FUN_0040965e */

void __thiscall FUN_0040965e(void *this,undefined4 *param_1)

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
    FUN_004087c2(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_004096a1 */

void __fastcall FUN_004096a1(int *param_1)

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



/* Function: FUN_004096c1 */

undefined4 * __thiscall FUN_004096c1(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00409725 */

void __thiscall FUN_00409725(void *this,int param_1)

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



/* Function: FUN_0040974f */

int __fastcall FUN_0040974f(int param_1,int param_2,short *param_3,int *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_0040875b(param_3);
    if ((uint)(param_2 - param_1) < uVar1) {
      if (param_4 != (int *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      o_memcpy_s(param_1,param_2 - param_1,param_3,uVar1);
      if (param_4 != (int *)0x0) {
        *param_4 = param_1;
      }
      param_1 = uVar1 + param_1;
    }
  }
  return param_1;
}



/* Function: FUN_004097be */

char * __fastcall FUN_004097be(char *param_1,char *param_2,char *param_3,int *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_0040873d(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      o_memcpy_s(param_1,param_2 + -(int)param_1,param_3,pcVar1);
      if (param_4 == (int *)0x0) {
        return extraout_ECX_00;
      }
      *param_4 = (int)param_1;
      return extraout_ECX_00;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  return pcVar2;
}



/* Function: FUN_00409820 */

void __thiscall FUN_00409820(void *this,int param_1,uint param_2)

{
  FUN_004088b7(this,param_1,this,param_2,0);
  return;
}



/* Function: FUN_00409842 */

void FUN_00409842(LPCVOID param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  if (param_1 != (LPCVOID)0x0) {
    BVar2 = UnmapViewOfFile(param_1);
    if (BVar2 == 0) {
      FUN_00407474(unaff_retaddr,0xe,0x401e58);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



/* Function: FUN_00409880 */

undefined4 FUN_00409880(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  uVar2 = *param_3;
  RtlInitUnicodeString(&local_18,*param_2);
  RtlInitUnicodeString(&local_10,uVar2);
  uVar2 = 1;
  iVar1 = RtlCompareUnicodeString(&local_18,&local_10,1);
  if (iVar1 < 1) {
    uVar2 = 2;
    if (iVar1 < 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Function: FUN_004098e2 */

uint __fastcall FUN_004098e2(short *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar2 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  uVar1 = FUN_0040a2e6(&local_10,param_1);
  if ((int)uVar1 < 0) {
    FUN_00404054(unaff_retaddr,0x31,"onecore\\base\\appmodel\\common\\stateseparation.cpp",uVar1);
    iVar2 = local_c;
  }
  else {
    uVar1 = 0;
    *param_2 = local_c;
  }
  if (iVar2 != 0) {
    o_free(iVar2);
  }
  return uVar1;
}



/* Function: FUN_0040993e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_0040993e(undefined1 *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  RtlAcquireSRWLockShared(&DAT_0040f658);
  if (DAT_0040f65d != '\0') {
    *param_1 = DAT_0040f65c;
    RtlReleaseSRWLockShared(&DAT_0040f658);
    return 0;
  }
  RtlReleaseSRWLockShared(&DAT_0040f658);
  RtlAcquireSRWLockExclusive(&DAT_0040f658);
  if (DAT_0040f65d == '\0') {
    hModule = LoadLibraryExW(L"ntdll.dll",(HANDLE)0x0,0x800);
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"RtlIsStateSeparationEnabled"), pFVar1 == (FARPROC)0x0)) {
      *param_1 = DAT_0040f65c;
      if (hModule == (HMODULE)0x0) goto LAB_004099fc;
    }
    else {
      (*(code *)PTR_guard_check_icall_00410308)();
      iVar2 = (*pFVar1)();
      DAT_0040f65c = (char)iVar2 != '\0';
      DAT_0040f65d = '\x01';
      *param_1 = DAT_0040f65c;
    }
    FreeLibrary(hModule);
  }
  else {
    *param_1 = DAT_0040f65c;
  }
LAB_004099fc:
  RtlReleaseSRWLockExclusive(&DAT_0040f658);
  return 0;
}



/* Function: FUN_00409a15 */

void __fastcall FUN_00409a15(int *param_1)

{
  if (*param_1 != 0) {
    FreeLibrary((HMODULE)*param_1);
  }
  return;
}



/* Function: FUN_00409a29 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_00409a29(undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  HMODULE hModule;
  undefined4 uVar5;
  int iVar6;
  void *unaff_retaddr;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined *local_34;
  int *local_30;
  int local_2c;
  HMODULE local_28;
  int local_24;
  int local_20;
  FARPROC local_1c;
  int local_18;
  char local_12;
  char local_11 [9];
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x35;
  uStack_7 = 0x409a;
  iVar6 = 0;
  local_11[0] = '\0';
  local_30 = param_2;
  uVar2 = FUN_0040993e(local_11);
  if ((int)uVar2 < 0) {
    uVar5 = 0x115;
LAB_00409a52:
    FUN_00404054(unaff_retaddr,uVar5,"onecore\\base\\appmodel\\common\\stateseparation.cpp",uVar2);
  }
  else {
    if (local_11[0] == '\0') {
      uVar2 = FUN_004098e2((short *)PTR_u_Software_Microsoft_Windows_Curre_00401208,param_2);
      if ((int)uVar2 < 0) {
        uVar5 = 0x119;
        goto LAB_00409a52;
      }
    }
    else {
      RtlAcquireSRWLockShared(&DAT_0040f650);
      if ((DAT_0040f654 != 0) &&
         (psVar3 = (short *)FUN_00409d80(PTR_u_AppxNewDeploymentOperation_00401204),
         psVar3 != (short *)0x0)) {
        uVar2 = FUN_004098e2(psVar3,param_2);
        if ((int)uVar2 < 0) {
          FUN_00404054(unaff_retaddr,0x122,"onecore\\base\\appmodel\\common\\stateseparation.cpp",
                       uVar2);
        }
        else {
          uVar2 = 0;
        }
        RtlReleaseSRWLockShared(&DAT_0040f650);
        return uVar2;
      }
      RtlReleaseSRWLockShared(&DAT_0040f650);
      RtlAcquireSRWLockExclusive(&DAT_0040f650);
      local_34 = &DAT_0040f650;
      local_8 = 0;
      uStack_7 = 0;
      if (DAT_0040f654 == 0) {
        iVar4 = FUN_0040df6f(0x40);
        local_8 = 1;
        *(code **)(iVar4 + 0x38) = FUN_00409e00;
        *(code **)(iVar4 + 0x3c) = FUN_00409e00;
        local_2c = iVar4;
        RtlInitializeGenericTableAvl(iVar4,FUN_00409880,FUN_00409de0,FUN_00409dc0,0);
        DAT_0040f654 = iVar4;
      }
      local_8 = 0;
      psVar3 = (short *)FUN_00409d80(PTR_u_AppxNewDeploymentOperation_00401204);
      if (psVar3 != (short *)0x0) {
        uVar2 = FUN_004098e2(psVar3,param_2);
        if ((int)uVar2 < 0) {
          FUN_00404054(unaff_retaddr,0x131,"onecore\\base\\appmodel\\common\\stateseparation.cpp",
                       uVar2);
        }
        else {
          uVar2 = 0;
        }
        goto LAB_00409d25;
      }
      hModule = LoadLibraryExW(L"kernelbase.dll",(HANDLE)0x0,0x800);
      local_8 = 2;
      uVar1 = local_8;
      local_8 = 2;
      local_28 = hModule;
      if (hModule != (HMODULE)0x0) {
        local_1c = GetProcAddress(hModule,"GetPersistedRegistryLocationW");
        if (local_1c != (FARPROC)0x0) {
          local_20 = 0;
          local_2c = 0;
          local_8 = 3;
          local_18 = 0;
          (*(code *)PTR_guard_check_icall_00410308)
                    (PTR_u_AppxNewDeploymentOperation_00401204,
                     PTR_u_Software_Microsoft_Windows_Curre_00401208,0,0,&local_18);
          iVar4 = (*local_1c)();
          if (iVar4 == 0xea) {
            local_20 = FUN_0040e54c(local_18);
            o_free(0);
            local_2c = local_20;
            (*(code *)PTR_guard_check_icall_00410308)
                      (PTR_u_AppxNewDeploymentOperation_00401204,
                       PTR_u_Software_Microsoft_Windows_Curre_00401208,local_20,local_18,&local_18);
            iVar4 = (*local_1c)();
          }
          if (iVar4 == 0) {
            local_2c = 0;
            *param_2 = local_20;
            local_40 = 0;
            local_3c = 0;
            local_38 = 0;
            local_8 = 4;
            uVar2 = FUN_0040a2e6(&local_40,(short *)PTR_u_AppxNewDeploymentOperation_00401204);
            if ((int)uVar2 < 0) {
              FUN_00404054(unaff_retaddr,0x158,
                           "onecore\\base\\appmodel\\common\\stateseparation.cpp",uVar2);
              iVar6 = local_3c;
              hModule = local_28;
            }
            else {
              local_4c = 0;
              local_48 = 0;
              local_44 = 0;
              local_8 = 5;
              uVar2 = FUN_0040a2e6(&local_4c,(short *)*local_30);
              if ((int)uVar2 < 0) {
                uVar5 = 0x15a;
LAB_00409ce8:
                FUN_00404054(unaff_retaddr,uVar5,
                             "onecore\\base\\appmodel\\common\\stateseparation.cpp",uVar2);
                iVar4 = local_48;
                iVar6 = local_3c;
                hModule = local_28;
              }
              else {
                local_24 = local_3c;
                local_20 = local_48;
                iVar4 = RtlInsertElementGenericTableAvl(DAT_0040f654,&local_24,8,&local_12);
                if (iVar4 == 0) {
                  uVar2 = 0x8007000e;
LAB_00409ce3:
                  uVar5 = 0x15b;
                  goto LAB_00409ce8;
                }
                uVar2 = 0x800702ba;
                if (local_12 != '\0') {
                  uVar2 = 0;
                }
                if ((int)uVar2 < 0) goto LAB_00409ce3;
                iVar4 = 0;
                uVar2 = 0;
              }
              if (iVar4 != 0) {
                o_free(iVar4);
              }
            }
            if (iVar6 != 0) {
              o_free(iVar6);
            }
          }
          else {
            uVar2 = FUN_00409e77(unaff_retaddr);
            hModule = local_28;
          }
          o_free(local_2c);
          FreeLibrary(hModule);
LAB_00409d25:
          RtlReleaseSRWLockExclusive(&DAT_0040f650);
          return uVar2;
        }
        FreeLibrary(hModule);
        uVar1 = local_8;
      }
      local_8 = uVar1;
      RtlReleaseSRWLockExclusive(&DAT_0040f650);
      uVar2 = FUN_004098e2((short *)PTR_u_Software_Microsoft_Windows_Curre_00401208,param_2);
      if ((int)uVar2 < 0) {
        uVar5 = 0x165;
        goto LAB_00409a52;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00409d71 */

void __fastcall FUN_00409d71(undefined4 *param_1)

{
  o_free(*param_1);
  return;
}



/* Function: FUN_00409d80 */

undefined4 FUN_00409d80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_1;
  uVar2 = 0;
  local_8 = 0;
  iVar1 = RtlLookupElementGenericTableAvl(DAT_0040f654,&local_c);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}



/* Function: FUN_00409dc0 */

void FUN_00409dc0(undefined4 param_1,undefined4 param_2)

{
  o_free(param_2);
  return;
}



/* Function: FUN_00409de0 */

void FUN_00409de0(undefined4 param_1,int param_2)

{
  FUN_0040e55d(param_2);
  return;
}



/* Function: FUN_00409e00 */

void FUN_00409e00(int param_1)

{
  if (param_1 != 0) {
    o_free(param_1);
  }
  return;
}



/* Function: FUN_00409e1e */

uint __thiscall FUN_00409e1e(void *this)

{
  undefined4 extraout_ECX;
  uint uVar1;
  undefined4 in_stack_00000010;
  uint in_stack_00000014;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = in_stack_00000014 & 0xffff | 0x80070000;
  if ((int)in_stack_00000014 < 1) {
    uVar1 = in_stack_00000014;
  }
  local_10 = uVar1;
  local_c = FUN_00403a4a(uVar1);
  local_8 = 0;
  FUN_00405a0c(this,0x153,"onecore\\base\\appmodel\\common\\stateseparation.cpp",extraout_ECX,
               extraout_ECX,in_stack_00000010,(int *)&local_10,(short *)0x0);
  return uVar1;
}



/* Function: FUN_00409e77 */

void __fastcall FUN_00409e77(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040e8ea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409e1e(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00409ec3 */

void __fastcall FUN_00409ec3(int *param_1)

{
  if (*param_1 != 0) {
    RtlReleaseSRWLockExclusive(*param_1);
  }
  return;
}



/* Function: FUN_00409ed7 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_00409ed7(void *this,undefined2 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x409ee3;
  local_1c = 0x3a0058;
  local_20 = 0;
  local_18 = 0x5c;
  hModule = LoadLibraryExW(L"wofutil.dll",(HANDLE)0x0,0);
  local_8 = 0;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"WofShouldCompressBinaries");
    if (pFVar1 != (FARPROC)0x0) {
      local_1c = CONCAT22(local_1c._2_2_,param_1);
      (*(code *)PTR_guard_check_icall_00410308)(&local_1c,&local_20);
      iVar2 = (*pFVar1)();
      *(bool *)this = iVar2 == 1;
      if (iVar2 == 1) {
        *(undefined4 *)((int)this + 4) = local_20;
      }
    }
    FreeLibrary(hModule);
  }
  FUN_0040e615();
  return;
}



/* Function: FUN_00409f62 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00409f62(HANDLE param_1,undefined4 param_2)

{
  DWORD local_20 [5];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  local_20[2] = 2;
  local_20[1] = 1;
  local_20[3] = 1;
  local_20[0] = 0;
  local_c = 0;
  local_20[4] = param_2;
  DeviceIoControl(param_1,0x9030c,local_20 + 1,0x14,(LPVOID)0x0,0,local_20,(LPOVERLAPPED)0x0);
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00409fbc */

uint __fastcall FUN_00409fbc(int param_1,void *param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  ushort local_c [2];
  void *local_8;
  
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = RtlConvertSidToUnicodeString(local_c,param_1,1);
    if ((int)uVar1 < 0) {
      uVar1 = FUN_00404091(unaff_retaddr,0x1e,"onecore\\base\\appmodel\\common\\sidhelper.cpp",uVar1
                          );
    }
    else {
      uVar1 = FUN_0040a225(param_2,local_8,(uint)(local_c[0] >> 1));
      RtlFreeUnicodeString(local_c);
    }
  }
  return uVar1;
}



/* Function: FUN_0040a022 */

bool __fastcall FUN_0040a022(void *param_1,uint param_2,void *param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 < param_4) {
    bVar2 = false;
  }
  else {
    iVar1 = memcmp(param_3,param_1,param_4 * 2);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



/* Function: FUN_0040a054 */

undefined4 __fastcall FUN_0040a054(void *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  void *this;
  int iVar1;
  undefined4 unaff_retaddr;
  
  if (param_2 < param_3) {
    this = (void *)FUN_0040e55d(-(uint)((int)((ulonglong)param_3 * 2 >> 0x20) != 0) |
                                (uint)((ulonglong)param_3 * 2));
    if (this == (void *)0x0) {
      FUN_00404054(unaff_retaddr,0x157,"onecore\\base\\appmodel\\common\\widestring.cpp",0x8007000e)
      ;
      return 0x8007000e;
    }
    iVar1 = FUN_0040a450(this,param_3 * 2,param_1,param_2 * 2);
    if (iVar1 != 0) {
      o_free();
      FUN_0040a3f6(this,unaff_retaddr,0x15c,"onecore\\base\\appmodel\\common\\widestring.cpp",
                   0x80070057,0x402060);
      return 0x80070057;
    }
    o_free(param_1);
    param_1 = this;
  }
  *param_4 = param_1;
  return 0;
}



/* Function: FUN_0040a110 */

uint __thiscall FUN_0040a110(void *this,uint param_1)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  undefined2 *local_c;
  void *local_8;
  
  local_c = (undefined2 *)this;
  local_8 = this;
  if (param_1 < 0x40000000) {
    if (param_1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        o_free(*(undefined4 *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 8) = 0;
    }
    else {
      uVar1 = param_1 + 1;
      if (uVar1 != *(uint *)((int)this + 8)) {
        local_8 = (void *)FUN_0040a054(*(void **)((int)this + 4),*(uint *)((int)this + 8),uVar1,
                                       &local_c);
        if ((int)local_8 < 0) {
          FUN_00404054(unaff_retaddr,0x188,"onecore\\base\\appmodel\\common\\widestring.cpp",
                       (uint)local_8);
          return (uint)local_8;
        }
        *(uint *)((int)this + 8) = uVar1;
        *(undefined2 **)((int)this + 4) = local_c;
                    /* WARNING: Load size is inaccurate */
        if (param_1 < *this) {
          *(uint *)this = param_1;
          local_c[param_1] = 0;
        }
        else {
                    /* WARNING: Load size is inaccurate */
          if ((*this < param_1) && (*this == 0)) {
            *local_c = 0;
          }
        }
      }
    }
    uVar1 = 0;
  }
  else {
    FUN_00404054(unaff_retaddr,0x16d,"onecore\\base\\appmodel\\common\\widestring.cpp",0x80070503);
    uVar1 = 0x80070503;
  }
  return uVar1;
}



/* Function: FUN_0040a1c7 */

uint __thiscall FUN_0040a1c7(void *this,uint param_1)

{
  uint uVar1;
  int unaff_retaddr;
  
  if (((-(uint)(*(int *)((int)this + 8) != 0) & *(int *)((int)this + 8) - 1U) < param_1) &&
     (uVar1 = FUN_0040a110(this,param_1), (int)uVar1 < 0)) {
    FUN_004040b0(unaff_retaddr,0x1d0,0x402034,uVar1);
    return uVar1;
  }
  *(uint *)this = param_1;
  if (param_1 != 0) {
    *(undefined2 *)(*(int *)((int)this + 4) + param_1 * 2) = 0;
  }
  return 0;
}



/* Function: FUN_0040a225 */

uint __thiscall FUN_0040a225(void *this,void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int unaff_retaddr;
  
  if (param_2 < 0x80000000) {
    iVar1 = *(int *)((int)this + 8);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = iVar1 - 1U;
    }
    if ((uVar2 < param_2) || ((iVar1 != 0 && (0x20 < iVar1 - 1U)))) {
      uVar2 = param_2;
      if ((param_2 < 0x21) && (uVar2 = 8, 8 < param_2)) {
        do {
          uVar2 = uVar2 * 2;
        } while (uVar2 < param_2);
      }
      uVar2 = FUN_0040a110(this,uVar2);
      if ((int)uVar2 < 0) {
        FUN_004040b0(unaff_retaddr,0x1f6,0x402034,uVar2);
        return uVar2;
      }
    }
    uVar2 = FUN_0040a1c7(this,param_2);
    if (-1 < (int)uVar2) {
      memcpy(*(void **)((int)this + 4),param_1,param_2 * 2);
      return 0;
    }
    iVar1 = 0x1f9;
  }
  else {
    uVar2 = 0x80070216;
    iVar1 = 499;
  }
  FUN_004040b0(unaff_retaddr,iVar1,0x402034,uVar2);
  return uVar2;
}



/* Function: FUN_0040a2e6 */

uint __thiscall FUN_0040a2e6(void *this,short *param_1)

{
  uint uVar1;
  int unaff_retaddr;
  uint local_8;
  
  if (param_1 == (short *)0x0) {
    if (*(undefined2 **)((int)this + 4) != (undefined2 *)0x0) {
      **(undefined2 **)((int)this + 4) = 0;
    }
    *(undefined4 *)this = 0;
    uVar1 = 0;
  }
  else {
    local_8 = 0;
    uVar1 = FUN_004035cb(param_1,0x3ffffffe,(int *)&local_8);
    if ((int)uVar1 < 0) {
      FUN_004040b0(unaff_retaddr,0x20d,0x402034,uVar1);
    }
    else {
      uVar1 = FUN_0040a225(this,param_1,local_8);
    }
  }
  return uVar1;
}



/* Function: FUN_0040a354 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040a354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7,int param_8,int param_9)

{
  undefined4 extraout_ECX;
  uint local_1028;
  uint local_1024;
  undefined4 local_1020;
  undefined4 local_101c;
  undefined4 local_1018;
  undefined4 local_1014;
  short local_1010 [2050];
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x40a363;
  local_c = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  local_1014 = param_3;
  local_1028 = param_7;
  local_101c = param_1;
  local_1018 = param_2;
  local_1024 = FUN_00403a4a(param_7);
  local_1020 = 0;
  FUN_00403caa(local_1010,param_8,param_9);
  FUN_00405a0c(local_101c,local_1018,local_1014,extraout_ECX,extraout_ECX,param_6,(int *)&local_1028
               ,local_1010);
  FUN_0040d5e0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040a3f6 */

void __thiscall
FUN_0040a3f6(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            int param_5)

{
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040e947;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a354(param_1,param_2,param_3,this,this,unaff_retaddr,param_4,param_5,(int)&stack0x00000018
              );
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040a450 */

undefined4 __fastcall FUN_0040a450(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_0040a4d7 */

void __fastcall FUN_0040a4d7(undefined4 *param_1)

{
  BOOL BVar1;
  
  if (param_1[2] == 0) {
    if (param_1[1] == 0) goto LAB_0040a518;
    BVar1 = RevertToSelf();
    if (BVar1 != 0) {
      param_1[1] = 0;
      goto LAB_0040a518;
    }
LAB_0040a4ef:
    FUN_0040ab41();
  }
  else {
    BVar1 = ImpersonateLoggedOnUser((HANDLE)param_1[2]);
    if (BVar1 == 0) goto LAB_0040a4ef;
  }
  CloseHandle((HANDLE)param_1[2]);
  param_1[2] = 0;
LAB_0040a518:
  *param_1 = 0;
  return;
}



/* Function: FUN_0040a523 */

DWORD __fastcall FUN_0040a523(PHANDLE param_1)

{
  HANDLE ThreadHandle;
  uint uVar1;
  DWORD DVar2;
  BOOL BVar3;
  
  if (IsImpersonating == 0) {
    *param_1 = (HANDLE)0x0;
  }
  else {
    BVar3 = 1;
    DVar2 = 0xc;
    ThreadHandle = GetCurrentThread();
    BVar3 = OpenThreadToken(ThreadHandle,DVar2,BVar3,param_1);
    if (BVar3 == 0) {
      DVar2 = GetLastError();
      if (DVar2 != 0x3f0) {
        uVar1 = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          uVar1 = DVar2;
        }
        return uVar1;
      }
    }
  }
  return 0;
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



/* Function: FUN_0040a5b0 */

char * __fastcall FUN_0040a5b0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_0040a5d0 */

undefined4 * __thiscall FUN_0040a5d0(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_0040d8f4(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040a605 */

undefined4 * __thiscall FUN_0040a605(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_0040a63e((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040a63e */

void __fastcall FUN_0040a63e(undefined4 *param_1)

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



/* Function: FUN_0040a675 */

undefined4 __thiscall FUN_0040a675(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_0040a63e((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_0040a6bf;
    *piVar1 = 0;
    FUN_0040a63e((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_0040a6bf:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_0040a6ce */

void __thiscall FUN_0040a6ce(void *this,undefined4 *param_1)

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
  int extraout_EAX_04;
  int extraout_EAX_05;
  void *_Dst;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040e96a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar11 = param_1;
  puVar14 = (undefined4 *)this;
  for (iVar10 = 0x16; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar14 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar14 = puVar14 + 1;
  }
  iVar10 = FUN_0040875b((short *)param_1[0x12]);
  iVar1 = FUN_0040875b((short *)param_1[0xf]);
  iVar2 = FUN_0040875b((short *)param_1[5]);
  pcVar3 = FUN_0040873d((char *)param_1[0x11]);
  pcVar4 = FUN_0040873d((char *)param_1[0xe]);
  pcVar5 = FUN_0040873d((char *)param_1[0xc]);
  pcVar6 = FUN_0040873d((char *)param_1[9]);
  pcVar7 = FUN_0040873d((char *)param_1[8]);
  pcVar8 = FUN_0040873d((char *)param_1[7]);
  pcVar9 = FUN_0040873d((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_0040a63e(this_00);
    FUN_0040a675(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  uVar13 = -(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1);
  pcVar3 = (char *)(-(uint)(uVar13 != 0) & uVar13 + *(int *)((int)this + 0x5c));
  if (uVar13 != 0) {
    pcVar4 = (char *)FUN_0040974f(uVar13,(int)pcVar3,(short *)param_1[5],(int *)((int)this + 0x14));
    FUN_004097be(pcVar4,pcVar3,(char *)param_1[7],(int *)((int)this + 0x1c));
    FUN_004097be(extraout_EAX,pcVar3,(char *)param_1[8],(int *)((int)this + 0x20));
    FUN_004097be(extraout_EAX_00,pcVar3,(char *)param_1[9],(int *)((int)this + 0x24));
    FUN_004097be(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(int *)((int)this + 0x30));
    FUN_004097be(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(int *)((int)this + 0x4c));
    FUN_004097be(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(int *)((int)this + 0x44));
    pcVar4 = (char *)FUN_0040974f(extraout_EAX_04,(int)pcVar3,(short *)param_1[0x12],
                                  (int *)((int)this + 0x48));
    FUN_004097be(pcVar4,pcVar3,(char *)param_1[0xe],(int *)((int)this + 0x38));
    _Dst = (void *)FUN_0040974f(extraout_EAX_05,(int)pcVar3,(short *)param_1[0xf],
                                (int *)((int)this + 0x3c));
    memset(_Dst,0,(int)pcVar3 - (int)_Dst);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040a890 */

undefined4 * __thiscall FUN_0040a890(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__0040116c;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_0040a6ce((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_0040a8d0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040a8d0(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_004036b3(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_0040a675(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_0040d5e0(local_8 ^ (uint)&stack0xfffffffc);
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
  FUN_0040a9b0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040d8f4(this);
  }
  return this;
}



/* Function: FUN_0040a9b0 */

void __fastcall FUN_0040a9b0(undefined4 *param_1)

{
  FUN_0040a63e(param_1 + 0x1b);
  FUN_0040a63e(param_1 + 0x19);
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_0040a9e0 */

void FUN_0040a9e0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_0040a9f0 */

void FUN_0040a9f0(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_0040a890(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_0040efb8);
}



/* Function: FUN_0040aa20 */

exception * __thiscall FUN_0040aa20(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__0040116c;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_0040a605((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_0040a605((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_0040aa76 */

void __cdecl FUN_0040aa76(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RtlReportException(param_1,param_2,param_3);
  return;
}



/* Function: FUN_0040aa92 */

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */

void FUN_0040aa92(void)

{
  undefined2 local_30 [2];
  ULONG_PTR local_2c [6];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0040ed18;
  uStack_c = 0x40aa9e;
  local_30[0] = 0;
  NtQuerySystemInformation(0x23,local_30,2,0);
  if (((char)local_30[0] != '\0') || (*(char *)((int)ProcessEnvironmentBlock + 2) != '\0')) {
    DebugBreak();
  }
  local_8 = (undefined *)0x0;
  local_2c[0] = 2;
  local_2c[1] = 0;
  local_2c[2] = 0;
  RaiseException(4,1,3,local_2c);
  ExceptionList = local_14;
  return;
}



/* Function: FUN_0040ab41 */

void FUN_0040ab41(void)

{
  FUN_0040aa92();
  return;
}



/* Function: FUN_0040ab53 */

undefined4 FUN_0040ab53(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0040f67c == (code *)0x0) &&
     (DAT_0040f67c = (code *)FUN_00409035("NtQueryWnfStateData"), DAT_0040f67c == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040f67c;
  (*(code *)PTR_guard_check_icall_00410308)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_0040aba7 */

undefined4 __fastcall
FUN_0040aba7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0040f680 == (code *)0x0) &&
     (DAT_0040f680 = (code *)FUN_00409035("NtUpdateWnfStateData"), DAT_0040f680 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040f680;
  (*(code *)PTR_guard_check_icall_00410308)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_0040ac00 */

undefined4 __fastcall FUN_0040ac00(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_0040f668 == (code *)0x0) &&
     (DAT_0040f668 = (code *)FUN_00409035("RtlNotifyFeatureUsage"), DAT_0040f668 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0040f668;
  (*(code *)PTR_guard_check_icall_00410308)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_0040ac62 */

void __fastcall FUN_0040ac62(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_0040acae */

undefined4 __thiscall FUN_0040acae(void *this,uint param_1)

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
    pvVar2 = FUN_00408513(0,SVar3);
    if (pvVar2 == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    uVar1 = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    FUN_0040a450(pvVar2,SVar3,*this,uVar1);
    FUN_00409725((void *)((int)this + 0xc),(int)pvVar2);
    *(LPVOID *)this = pvVar2;
    *(uint *)((int)this + 4) = uVar1 + (int)pvVar2;
    *(SIZE_T *)((int)this + 8) = (int)pvVar2 + SVar3;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_0040ad39 */

undefined4 __thiscall FUN_0040ad39(void *this,uint param_1)

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
    uVar2 = FUN_0040acae(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_0040ad6f */

undefined4 __thiscall FUN_0040ad6f(void *this,void *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040ad39(this,param_2);
  if ((char)uVar2 != '\0') {
    pvVar1 = *(void **)((int)this + 4);
    uVar2 = FUN_0040a450(pvVar1,-(uint)(pvVar1 < *(void **)((int)this + 8)) &
                                *(int *)((int)this + 8) - (int)pvVar1,param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_0040adb0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040adb0(int *param_1)

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
  
  local_c = DAT_0040f100 ^ (uint)&local_102c;
  iVar5 = 0;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar7 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_0040ab53(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_0040aebf;
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
LAB_0040aebf:
            piVar4 = piVar4 + 3;
            iVar7 = local_1024;
          } while (piVar4 != local_101c);
        }
        iVar5 = FUN_0040aba7(&DAT_00402208,local_1010,uVar6,piVar2,piVar2,local_1018,1);
        param_1 = local_1028;
      }
      local_1024 = iVar7 + 1;
    } while (((iVar5 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_0040d5e0(local_c ^ (uint)&local_102c);
  return;
}



/* Function: FUN_0040af35 */

void FUN_0040af35(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_0040f670 == (code *)0x0) &&
     (DAT_0040f670 = (code *)FUN_00409035("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_0040f670 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_0040f670;
  (*(code *)PTR_guard_check_icall_00410308)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040af73 */

int __thiscall FUN_0040af73(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_0040afa0 */

void __thiscall FUN_0040afa0(void *this,int param_1)

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
    FUN_0040a450(*(void **)((int)this + 0xc),uVar2,piVar1,uVar2);
  }
  return;
}



/* Function: FUN_0040afe6 */

uint __fastcall FUN_0040afe6(ushort *param_1)

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



/* Function: FUN_0040b011 */

uint __thiscall FUN_0040b011(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_8;
  
  pvVar3 = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_0040b0a8;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    FUN_0040a450(pvVar3,2,&local_8,2);
    pvVar3 = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)pvVar3 + 4);
      if (param_2 < pvVar1) goto LAB_0040b0a8;
      FUN_0040a450(pvVar3,4,(void *)((int)this + 4),4);
      pvVar3 = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_0040b0a8;
    FUN_0040a450(pvVar3,(int)param_2 - (int)pvVar3,(void *)((int)this + 8),2);
    pvVar3 = pvVar1;
  }
  pvVar1 = (void *)((uint)*(ushort *)((int)this + 8) + (int)pvVar3);
  if (pvVar1 <= param_2) {
    FUN_0040a450(pvVar3,(int)param_2 - (int)pvVar3,*(void **)((int)this + 0x10),
                 (uint)*(ushort *)((int)this + 8));
    iVar2 = (uint)*(ushort *)((int)this + 8) + (int)pvVar3;
    *param_1 = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
LAB_0040b0a8:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_0040b0d7 */

uint __thiscall FUN_0040b0d7(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_0040b165;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    FUN_0040a450(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_0040b165;
      *(ushort **)((int)this + 0xc) = puVar2;
      local_8 = (ushort *)this;
      FUN_0040a450((void *)((int)this + 4),4,puVar2,4);
      local_8 = puVar2 + 2;
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar2 = (ushort *)((int)this + 8);
  *puVar2 = *this;
  if (*this == 0) {
    puVar4 = local_8 + 1;
    if (param_2 < puVar4) goto LAB_0040b165;
    puVar3 = local_8;
    local_8 = puVar4;
    FUN_0040a450(puVar2,2,puVar3,2);
  }
  puVar4 = (ushort *)((uint)*puVar2 + (int)local_8);
  if (puVar4 <= param_2) {
    *(ushort **)((int)this + 0x10) = local_8;
    *param_1 = (uint)puVar4;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
LAB_0040b165:
  return (uint)puVar4 & 0xffffff00;
}



/* Function: FUN_0040b17f */

undefined2 * __thiscall
FUN_0040b17f(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_0040afe6(&local_18);
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



/* Function: FUN_0040b1fd */

void __thiscall FUN_0040b1fd(void *this,int param_1)

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
  FUN_00409725(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_00409725((void *)(param_1 + 0x1c),local_8);
  FUN_004096a1(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_0040b286 */

void __thiscall FUN_0040b286(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_00407102(unaff_retaddr,0x1335,"onecore\\internal\\sdk\\inc\\wil/Staging.h");
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_0040b329;
  }
  if (9 < param_2) {
    return;
  }
LAB_0040b329:
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



/* Function: FUN_0040b37a */

void FUN_0040b37a(void)

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
      uVar5 = FUN_0040b0d7((void *)(unaff_EBP + -0x44),(uint *)(unaff_EBP + -0x14),
                           *(ushort **)(extraout_ECX + 0x14));
      if ((char)uVar5 == '\0') {
        FUN_0040cda6(*(int *)(unaff_EBX + 8));
LAB_0040b479:
        __EH_epilog3_align();
        return;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    } while (*(int *)(unaff_EBP + -0x40) == 0);
    do {
      uVar5 = FUN_0040b0d7((void *)(unaff_EBP + -0x58),(uint *)(unaff_EBP + -0x14),
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
        FUN_0040411f();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = *(code **)(*piVar2 + 0x10);
      (*(code *)PTR_guard_check_icall_00410308)
                (unaff_EBP + -0x2c,unaff_EBP + -0x28,unaff_EBP + -0x24,unaff_EBP + -0x20,
                 unaff_EBP + -0x1c);
      cVar4 = (*pcVar3)();
      if (cVar4 == '\0') {
        FUN_0040cda6(*(int *)(unaff_EBX + 8));
        goto LAB_0040b479;
      }
      uVar5 = *(int *)(unaff_EBP + -0x18) + 1;
      *(uint *)(unaff_EBP + -0x18) = uVar5;
    } while (uVar5 < *(uint *)(unaff_EBP + -0x40));
  } while( true );
}



/* Function: FUN_0040b499 */

undefined4 __thiscall
FUN_0040b499(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_0040b7a5(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_0040ad39(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_0040b286(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_00409725((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_004096a1(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_0040ad39((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_0040b7a5(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_0040b551 */

uint __thiscall FUN_0040b551(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_0040b0d7(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_0040af73(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_0040b5dc */

uint __thiscall
FUN_0040b5dc(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_0040b0d7(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_0040afa0(param_1,local_c);
          uVar1 = local_14;
          goto LAB_0040b6d2;
        }
        local_14 = FUN_0040af73(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_0040b6d2;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_0040afa0(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_0040b551(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_0040b0d7(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_0040af73(&local_28,param_3,param_4);
LAB_0040b6d2:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_0040afa0(&local_28,local_24 + param_5);
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



/* Function: FUN_0040b712 */

uint __thiscall FUN_0040b712(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_0040b0d7(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_0040afa0(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_0040afa0(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_0040b7a5 */

uint __thiscall
FUN_0040b7a5(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar2 = FUN_0040b0d7(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar2 == '\0') break;
      iVar1 = FUN_0040af73(&local_24,param_1,param_2);
      if (iVar1 < 0) {
LAB_0040b8f0:
        local_c = pvVar4;
        if ((char)uVar2 != '\0') goto LAB_0040b82e;
        break;
      }
      if (iVar1 == 0) {
        pvVar4 = (void *)FUN_0040b5dc(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          local_5 = '\x01';
          goto LAB_0040b8f0;
        }
        goto LAB_0040b8e0;
      }
      pvVar4 = (void *)FUN_0040b712(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_0040b82e:
    pvVar4 = local_c;
    uVar2 = 0;
    if (local_5 == '\0') {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      uVar2 = FUN_0040afe6(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    local_10 = FUN_0040afe6(&local_38);
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
            goto LAB_0040b91e;
          }
          puVar3 = (undefined4 *)o__errno();
          *puVar3 = 0x22;
        }
        o__invalid_parameter_noinfo();
      }
LAB_0040b91e:
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + local_10);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_0040b011(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_0040afa0(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_0040b011(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_0040b8e0:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_0040b976 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040b976(uint param_1,int param_2,undefined2 *param_3)

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
  puStack_18 = &LAB_0040e9d0;
  local_1c = ExceptionList;
  local_24 = DAT_0040f100 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_104c = param_1 + param_2 * 8;
  local_1038 = 0;
  local_1044 = 0;
  local_1048 = param_3;
  local_1034 = param_1;
  while( true ) {
    FUN_0040b17f(local_107c,*local_1048,local_1048[1],*(undefined1 *)(local_1048 + 2),local_1048[3],
                 *(undefined1 *)(local_1048 + 4));
    local_14 = 0;
    local_1030 = 0x1000;
    uVar2 = FUN_0040ab53(extraout_ECX,&local_103c,local_1028,&local_1030);
    FUN_004039ea(uVar2);
    if (uVar2 != 0) {
      local_103c = 0;
      local_1030 = 0;
    }
    FUN_0040b286(local_107c,local_1028,local_1030,0x1000);
    if (local_105b != '\0') break;
    local_10bc = &local_1040;
    local_1040 = 0;
    puStack_10b8 = &local_1044;
    local_10c0 = &PTR_FUN_00401188;
    puStack_10b4 = local_107c;
    local_1088 = &local_10c0;
    local_1058 = local_10bc;
    local_1054 = puStack_10b8;
    local_1050 = puStack_10b4;
    local_1029 = FUN_0040b37a();
    uVar2 = local_1034;
    if (local_105c == '\0') {
LAB_0040bb4e:
      uVar2 = uVar2 + 8;
      local_1044 = local_1040;
      local_1034 = uVar2;
    }
    else {
      iVar3 = local_1068 - local_106c;
      iVar3 = FUN_0040aba7(local_1034,local_106c,iVar3,iVar3,iVar3,local_103c,1);
      if (iVar3 != -0x3fffffff) {
        if (iVar3 != 0) {
          FUN_0040aba7(uVar2,local_106c,local_1068 - local_106c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_0040bb4e;
      }
      local_1038 = local_1038 + 1;
      local_1029 = '\0';
    }
    uVar1 = local_1038;
    local_14 = 0xffffffff;
    FUN_004096a1(&local_1060);
    if (((local_1029 != '\0') || (local_104c <= uVar2)) || (0x31 < uVar1)) goto LAB_0040bba5;
  }
  FUN_004096a1(&local_1060);
LAB_0040bba5:
  ExceptionList = local_1c;
  FUN_0040d5e0(local_24 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_0040bbcb */

void __fastcall FUN_0040bbcb(int param_1)

{
  FUN_004096a1((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_0040bbd9 */

void * __fastcall FUN_0040bbd9(void *param_1)

{
  FUN_0040b17f(param_1,0,4,1,4,0);
  FUN_0040b17f((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_0040b17f((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_0040bc1b */

void __fastcall FUN_0040bc1b(undefined2 *param_1)

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
  
  local_c = DAT_0040f100 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_004021dc;
    local_3c = DAT_004021d8;
    local_30 = DAT_004021cc;
    local_34 = DAT_004021c8;
    local_28 = DAT_004021fc;
    local_2c = DAT_004021f8;
    FUN_0040b976((uint)&local_3c,3,param_1);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_00402200;
    local_34 = DAT_004021b0;
    local_38 = DAT_00402204;
    local_2c = DAT_004021d0;
    local_30 = DAT_004021b4;
    local_28 = DAT_004021d4;
    FUN_0040b976((uint)&local_3c,3,param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_004021f0;
    local_34 = DAT_004021a8;
    local_38 = DAT_004021f4;
    local_2c = DAT_004021e0;
    local_30 = DAT_004021ac;
    local_24 = DAT_004021b8;
    local_28 = DAT_004021e4;
    local_1c = DAT_004021c0;
    local_20 = DAT_004021bc;
    local_14 = DAT_004021e8;
    local_18 = DAT_004021c4;
    local_10 = DAT_004021ec;
    FUN_0040b976((uint)&local_3c,6,param_1 + 0x24);
  }
  FUN_0040d5e0(local_c ^ (uint)&local_3c);
  return;
}



/* Function: FUN_0040bd71 */

void __thiscall FUN_0040bd71(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_0040ad6f(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_0040bde8 */

void __thiscall FUN_0040bde8(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_0040be47 */

void __thiscall FUN_0040be47(void *this,PSRWLOCK param_1)

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
  puStack_c = &LAB_0040ea00;
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
            goto LAB_0040beeb;
          }
        } while (uVar3 < uVar2);
      }
      local_20 = 0;
LAB_0040beeb:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_1c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_00410308)(local_20);
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



/* Function: FUN_0040bf49 */

void __fastcall FUN_0040bf49(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040ea23;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040bfaa(param_1);
  FUN_004096a1((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_0040c14f((int)param_1 + 4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040bfaa */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040bfaa(void *param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x40bfb6;
  FUN_0040bbd9(local_7c);
  local_8 = 0;
  FUN_0040c102(param_1,local_7c);
  FUN_0040bc1b(local_7c);
  FUN_0040c14f((int)local_7c);
  return;
}



/* Function: FUN_0040bfeb */

undefined1 __thiscall FUN_0040bfeb(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_0040c95c((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_0040c939((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_0040c044 */

undefined1 __thiscall FUN_0040c044(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_0040c0af((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_0040bfeb(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0040c0af */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040c0af(PSRWLOCK param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x40c0bb;
  FUN_0040bbd9(local_7c);
  local_8 = 0;
  AcquireSRWLockExclusive(param_1);
  FUN_0040c102(param_1,local_7c);
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
  }
  FUN_0040bc1b(local_7c);
  FUN_0040c14f((int)local_7c);
  return;
}



/* Function: FUN_0040c102 */

void __thiscall FUN_0040c102(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_0040b1fd(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_0040b1fd((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_0040b1fd((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_0040c14f */

void __fastcall FUN_0040c14f(int param_1)

{
  FUN_004096a1((int *)(param_1 + 100));
  FUN_004096a1((int *)(param_1 + 0x40));
  FUN_004096a1((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_0040c173 */

void __fastcall FUN_0040c173(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040ea76;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_0040c97e(this,0);
  FUN_0040c97e(param_1 + 0x1c,0);
  FUN_004096a1((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0040c76b(*(int *)(param_1 + 0x78));
  }
  FUN_004096a1((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_0040af35(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_004096a1((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0040cd17(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*this != 0) {
    FUN_0040cd17((PTP_TIMER)*this);
  }
  local_8 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0040cb0e(*(int **)(param_1 + 8));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040c245 */

void __thiscall FUN_0040c245(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040ea23;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    bVar1 = FUN_0040c472((int)this);
    if (bVar1) {
      cVar2 = FUN_0040c044(*(void **)((int)this + 0xc),param_1,param_2,param_3);
      if (cVar2 != '\0') {
        cVar2 = FUN_00408783();
        if (cVar2 == '\0') {
          SRWLock = (PSRWLOCK)((int)this + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          FUN_0040c535(this);
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



/* Function: FUN_0040c2d1 */

void __thiscall FUN_0040c2d1(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_00408783(), cVar1 == '\0')) &&
     (bVar2 = FUN_0040c472((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_0040bd71(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x40c720,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_0040bd71((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040c371 */

void __fastcall FUN_0040c371(int param_1)

{
  char cVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040e947;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_00408783();
  if (cVar1 == '\0') {
    bVar2 = FUN_0040c472(param_1);
    if (bVar2) {
      FUN_0040be47(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_0040c0af(*(PSRWLOCK *)(param_1 + 0xc));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040c3d9 */

void __thiscall FUN_0040c3d9(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3)

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
  puStack_c = &LAB_0040e96a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    cVar1 = FUN_00408783();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 0x14);
      AcquireSRWLockExclusive(SRWLock);
      local_16 = 0;
      local_1c = param_1;
      local_18 = param_2;
      local_14 = param_3;
      FUN_0040ad6f((void *)((int)this + 0x7c),&local_1c,0xc);
      FUN_0040c5c5(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040c472 */

bool __fastcall FUN_0040c472(int param_1)

{
  PSRWLOCK SRWLock;
  DWORD dwErrCode;
  int iVar1;
  uint uVar2;
  bool bVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040ea99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar3 = *(int *)(param_1 + 0xc) == 0;
  if (bVar3) {
    local_14 = param_1;
    dwErrCode = GetLastError();
    if (*(int *)(param_1 + 0xc) == 0) {
      local_8 = 0;
      if (*(int *)(param_1 + 8) == 0) {
        local_14 = 0;
        iVar1 = FUN_0040c9e4(*(undefined4 *)(param_1 + 4),&local_14);
        if ((-1 < iVar1) && (*(int *)(param_1 + 8) == 0)) {
          *(int *)(param_1 + 8) = local_14;
        }
      }
      local_8 = 0xffffffff;
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
  ExceptionList = local_10;
  return !bVar3;
}



/* Function: FUN_0040c535 */

void __fastcall FUN_0040c535(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040eabc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040cdd0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040c97e(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_0040ac62(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040c5c5 */

void __fastcall FUN_0040c5c5(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040eabc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_0040ce10,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_0040c97e(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_0040ac62(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040c660 */

void FUN_0040c660(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_0040be47(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_0040c683 */

bool __fastcall FUN_0040c683(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar3 = DAT_0040f66c;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040eabc;
  local_10 = ExceptionList;
  uVar2 = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(param_1 + 0x4c);
  iVar4 = 0;
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar3 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_00409035("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_0040f66c = pcVar3, pcVar3 == (code *)0x0)) {
      iVar4 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_00410308)(FUN_0040c660,param_1,0,piVar1,uVar2);
      iVar4 = (*pcVar3)();
    }
  }
  ExceptionList = local_10;
  return iVar4 == 0;
}



/* Function: FUN_0040c720 */

void FUN_0040c720(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_0040be47(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_0040c743 */

LPCRITICAL_SECTION __fastcall FUN_0040c743(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_0040c76b */

void FUN_0040c76b(int param_1)

{
  if ((param_1 != 0) && (DAT_0040f698 != (PSRWLOCK)0x0)) {
    FUN_0040bde8(DAT_0040f698 + 0x1c,DAT_0040f698,param_1);
  }
  return;
}



/* Function: FUN_0040c7a0 */

void FUN_0040c7a0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_0040c371(0x40f68c);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_0040ac00(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_0040c245(&DAT_0040f68c,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_0040c3d9(&DAT_0040f68c,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_0040c820 */

void FUN_0040c820(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_0040c2d1(&DAT_0040f68c,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_0040f68c != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_0040f69c);
      bVar1 = FUN_0040c683(0x40f68c);
      if (bVar1) {
        FUN_0040bd71(&DAT_0040f6b0,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0040f69c);
    }
  }
  return;
}



/* Function: FUN_0040c890 */

void FUN_0040c890(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_0040f68c == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_0040f6dc;
  }
  else {
    if (DAT_0040f68c == '\0') {
      return;
    }
    this = &DAT_0040f6b0;
  }
  FUN_0040bde8(this,(PSRWLOCK)&DAT_0040f69c,param_1);
  return;
}



/* Function: FUN_0040c8d4 */

void __fastcall FUN_0040c8d4(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0040eadf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_00408783();
  if (cVar1 == '\0') {
    FUN_0040c173(param_1);
  }
  else {
    *param_1 = 0;
    local_8 = 0;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      FUN_0040cb0e(*(int **)(param_1 + 8));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040c939 */

void __thiscall FUN_0040c939(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0040b499(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_0040c95c */

void __fastcall FUN_0040c95c(void *param_1)

{
  FUN_0040b499(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_0040c97e */

void __thiscall FUN_0040c97e(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040eb02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_0040cd17(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040c9e4 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0040c9e4(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  HANDLE local_228;
  int *local_224;
  HANDLE local_220;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x218;
  local_8 = 0x40c9f3;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00403587(local_21c,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_220 = (HANDLE)0x0;
  local_8 = 0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_21c,0,0x1f0001);
  FUN_004092e5(&local_220,pvVar1);
  if (local_220 == (HANDLE)0x0) {
    FUN_00408720(extraout_ECX);
    goto LAB_0040cad3;
  }
  FUN_0040965e(&local_220,&local_228);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_224 = (int *)0x0;
  uVar2 = FUN_0040885a(local_21c,(int *)&local_224);
  if ((int)uVar2 < 0) {
    uVar3 = 299;
LAB_0040caf8:
    FUN_00404054(unaff_retaddr,uVar3,&DAT_00401d84,uVar2);
  }
  else if (local_224 == (int *)0x0) {
    uVar2 = FUN_0040cc56((int)local_21c,&local_220,param_2);
    if ((int)uVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_0040caf8;
    }
  }
  else {
    *param_2 = local_224;
    *(int *)*param_2 = *local_224 + 1;
  }
  if (local_228 != (HANDLE)0x0) {
    FUN_00408818(local_228);
  }
  if (local_220 != (HANDLE)0x0) {
    FUN_004087e7(local_220);
  }
LAB_0040cad3:
  FUN_0040e615();
  return;
}



/* Function: FUN_0040cb0e */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0040cb0e(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  HANDLE local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x40cb1a;
  cVar1 = FUN_00408783();
  if (cVar1 == '\0') {
    FUN_0040965e(param_1 + 1,local_14);
    local_8 = 0;
    *param_1 = *param_1 + -1;
    pvVar3 = local_14[0];
    if (*param_1 == 0) {
      FUN_004092e5(param_1 + 2,0);
      FUN_004092e5(param_1 + 3,0);
      if (local_14[0] != (HANDLE)0x0) {
        DVar2 = GetLastError();
        FUN_00408818(local_14[0]);
        SetLastError(DVar2);
      }
      local_14[0] = (HANDLE)0x0;
      FUN_0040cc2b((int)param_1);
      DVar2 = 0;
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,DVar2,param_1);
      pvVar3 = (HANDLE)0x0;
    }
    if (pvVar3 != (HANDLE)0x0) {
      FUN_00408818(pvVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_0040bfaa(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_0040cbb2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cbb2(void)

{
  _DAT_0040f690 = "WilStaging_02";
  DAT_0040f68c = 0;
  _DAT_0040f694 = 0;
  DAT_0040f698 = 0;
  _DAT_0040f69c = 0;
  _DAT_0040f6a0 = 0;
  _DAT_0040f6a4 = 0;
  _DAT_0040f6a8 = 0;
  _DAT_0040f6ac = 0;
  FUN_0040c743((LPCRITICAL_SECTION)&DAT_0040f6b0);
  _DAT_0040f6d8 = 0;
  FUN_0040c743((LPCRITICAL_SECTION)&DAT_0040f6dc);
  _DAT_0040f714 = 0;
  _DAT_0040f704 = 0;
  uRam0040f708 = 0;
  uRam0040f70c = 0;
  uRam0040f710 = 0;
  DAT_0040f68c = 1;
  return;
}



/* Function: FUN_0040cc2b */

void __fastcall FUN_0040cc2b(int param_1)

{
  FUN_0040bf49((void *)(param_1 + 0x10));
  FUN_00409519((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004087e7(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_0040cc56 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint __fastcall FUN_0040cc56(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID this;
  uint uVar2;
  undefined4 unaff_retaddr;
  int local_20 [2];
  undefined4 *local_18;
  LPVOID local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x40cc62;
  *param_3 = 0;
  local_18 = param_2;
  this = FUN_00408513(8,0xa8);
  local_8 = 0;
  local_14[0] = this;
  if (this == (LPVOID)0x0) {
    uVar2 = 0x8007000e;
    FUN_00404054(unaff_retaddr,0x148,&DAT_00401d84,0x8007000e);
  }
  else {
    local_20[0] = 0;
    local_20[1] = 0;
    local_8 = 1;
    if (((uint)this & 3) != 0) {
      FUN_0040411f();
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    uVar2 = FUN_00409820(local_20,param_1,(uint)this >> 2);
    if ((int)uVar2 < 0) {
      FUN_00404054(unaff_retaddr,0x14b,&DAT_00401d84,uVar2);
    }
    else {
      FUN_0040cd42(this,local_18,local_20);
      local_14[0] = (LPVOID)0x0;
      uVar2 = 0;
      *param_3 = this;
    }
    FUN_00409519(local_20);
  }
  FUN_004096a1((int *)local_14);
  return uVar2;
}



/* Function: FUN_0040cd17 */

void FUN_0040cd17(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0040cd36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_0040cd42 */

undefined4 * __thiscall FUN_0040cd42(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_0040bbd9((void *)((int)this + 0x14));
  FUN_0040c743((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_0040cda6 */

void __fastcall FUN_0040cda6(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_00410308)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0040cdd0 */

void FUN_0040cdd0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_0040c371((int)param_2);
  }
  return;
}



/* Function: FUN_0040ce10 */

void FUN_0040ce10(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_0040adb0(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0040ce60 */

undefined4 * __thiscall FUN_0040ce60(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401174;
  if ((param_1 & 1) != 0) {
    FUN_0040d8f4(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040ce90 */

undefined4 * __thiscall FUN_0040ce90(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401174;
  if ((param_1 & 1) != 0) {
    FUN_0040d8f4(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040cec0 */

void __thiscall FUN_0040cec0(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401188;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}



/* Function: FUN_0040cef0 */

undefined4 __thiscall
FUN_0040cef0(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_0040b499(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_0040cf50 */

void FUN_0040cf50(int param_1)

{
  FUN_0040e54c(param_1);
  return;
}



/* Function: FUN_0040cf70 */

void FUN_0040cf70(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_0040cf88 */

uint __fastcall FUN_0040cf88(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int unaff_retaddr;
  
  uVar1 = FUN_00405846(param_1);
  if ((int)uVar1 < 0) {
    FUN_004040b0(unaff_retaddr,0x78,0x4022d8,uVar1);
  }
  uVar2 = FUN_00405803((void *)((int)param_1 + 0xc));
  if ((int)uVar2 < 0) {
    FUN_004040b0(unaff_retaddr,0x79,0x4022d8,uVar2);
  }
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = FUN_004057c0((void *)((int)param_1 + 0x18));
  if ((int)uVar2 < 0) {
    FUN_004040b0(unaff_retaddr,0x7a,0x4022d8,uVar2);
  }
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = FUN_0040577d((void *)((int)param_1 + 0x24));
  if ((int)uVar2 < 0) {
    FUN_004040b0(unaff_retaddr,0x7b,0x4022d8,uVar2);
  }
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Function: FUN_0040d029 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0040d029(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int unaff_retaddr;
  undefined4 uStackY_50;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18 [5];
  
  local_18[4] = DAT_0040f100 ^ (uint)&stack0xfffffffc;
  local_18[0] = 0;
  uVar1 = FUN_0040d2c2(param_1,local_18);
  if ((int)uVar1 < 0) {
    uStackY_50 = 0x40;
LAB_0040d08f:
    FUN_00404054(unaff_retaddr,uStackY_50,
                 "onecore\\base\\appmodel\\StateRepository\\DataAccessLayer\\ResourcePriority.hpp",
                 uVar1);
    FUN_004040b0(unaff_retaddr,0x9f,0x4022d8,uVar1);
  }
  else {
    local_20 = 5;
    if (((int)local_18[0] < 5) || (5 < (int)local_18[0])) {
      if (*(char *)((int)param_1 + 4) == '\0') {
        *(uint *)((int)param_1 + 8) = local_18[0];
        *(undefined1 *)((int)param_1 + 4) = 1;
      }
      uVar1 = FUN_00405968(param_1,&local_20);
      if ((int)uVar1 < 0) {
        uStackY_50 = 0x4f;
        goto LAB_0040d08f;
      }
    }
    uVar1 = 0;
  }
  local_18[0] = 0;
  uVar2 = FUN_0040d277((void *)((int)param_1 + 0xc),local_18);
  if ((int)uVar2 < 0) {
    uStackY_50 = 0x40;
LAB_0040d105:
    FUN_00404054(unaff_retaddr,uStackY_50,
                 "onecore\\base\\appmodel\\StateRepository\\DataAccessLayer\\ResourcePriority.hpp",
                 uVar2);
    FUN_004040b0(unaff_retaddr,0xa5,0x4022d8,uVar2);
  }
  else {
    local_24 = 2;
    if ((local_18[0] < 2) || (2 < local_18[0])) {
      if (*(char *)((int)param_1 + 0x10) == '\0') {
        *(uint *)((int)param_1 + 0x14) = local_18[0];
        *(undefined1 *)((int)param_1 + 0x10) = 1;
      }
      uVar2 = FUN_0040591d((void *)((int)param_1 + 0xc),&local_24);
      if ((int)uVar2 < 0) {
        uStackY_50 = 0x4f;
        goto LAB_0040d105;
      }
    }
    uVar2 = 0;
  }
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  local_18[0] = 0;
  uVar2 = FUN_0040d22c((void *)((int)param_1 + 0x18),local_18);
  if ((int)uVar2 < 0) {
    uStackY_50 = 0x40;
LAB_0040d17e:
    FUN_00404054(unaff_retaddr,uStackY_50,
                 "onecore\\base\\appmodel\\StateRepository\\DataAccessLayer\\ResourcePriority.hpp",
                 uVar2);
    FUN_004040b0(unaff_retaddr,0xab,0x4022d8,uVar2);
  }
  else {
    local_1c = 0;
    if (((int)local_18[0] < 0) || (0 < (int)local_18[0])) {
      if (*(char *)((int)param_1 + 0x1c) == '\0') {
        *(uint *)((int)param_1 + 0x20) = local_18[0];
        *(undefined1 *)((int)param_1 + 0x1c) = 1;
      }
      uVar2 = FUN_004058d2((void *)((int)param_1 + 0x18),&local_1c);
      if ((int)uVar2 < 0) {
        uStackY_50 = 0x4f;
        goto LAB_0040d17e;
      }
    }
    uVar2 = 0;
  }
  local_1c = uVar1;
  if (-1 < (int)uVar1) {
    local_1c = uVar2;
  }
  local_18[1] = 1;
  local_18[2] = 1;
  local_18[3] = 1;
  if (*(char *)((int)param_1 + 0x28) == '\0') {
    *(undefined1 *)((int)param_1 + 0x28) = 1;
    *(undefined4 *)((int)param_1 + 0x2c) = 1;
    *(undefined4 *)((int)param_1 + 0x30) = 0;
    *(undefined4 *)((int)param_1 + 0x34) = 0;
  }
  uVar1 = FUN_00405889((void *)((int)param_1 + 0x24),local_18 + 1);
  if ((int)uVar1 < 0) {
    FUN_00404054(unaff_retaddr,0x4f,
                 "onecore\\base\\appmodel\\StateRepository\\DataAccessLayer\\ResourcePriority.hpp",
                 uVar1);
    FUN_004040b0(unaff_retaddr,0xb1,0x4022d8,uVar1);
  }
  FUN_0040d5e0(local_18[4] ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040d22c */

undefined4 __thiscall FUN_0040d22c(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = GetCurrentThread();
  }
  uVar2 = NtQueryInformationThread(pvVar1,0x16,param_1,4,0,this);
  if ((int)uVar2 < 0) {
    uVar3 = FUN_00404091(unaff_retaddr,0x7e,
                         "onecore\\base\\appmodel\\StateRepository\\DataAccessLayer\\ResourcePriority.hpp"
                         ,uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_0040d277 */

undefined4 __thiscall FUN_0040d277(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = GetCurrentThread();
  }
  uVar2 = NtQueryInformationThread(pvVar1,0x18,param_1,4,0,this);
  if ((int)uVar2 < 0) {
    uVar3 = FUN_00404091(unaff_retaddr,0x7e,
                         "onecore\\base\\appmodel\\StateRepository\\DataAccessLayer\\ResourcePriority.hpp"
                         ,uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_0040d2c2 */

undefined4 __thiscall FUN_0040d2c2(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if ((pvVar1 == (HANDLE)0x0) || (pvVar1 == (HANDLE)0xffffffff)) {
    pvVar1 = GetCurrentThread();
  }
  uVar2 = NtQueryInformationThread(pvVar1,0x19,param_1,4,0,this);
  if ((int)uVar2 < 0) {
    uVar3 = FUN_00404091(unaff_retaddr,0x7e,
                         "onecore\\base\\appmodel\\StateRepository\\DataAccessLayer\\ResourcePriority.hpp"
                         ,uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_0040d310 */

undefined4 FUN_0040d310(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040d335();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040d341();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_0040d335 */

undefined * FUN_0040d335(void)

{
  return &DAT_0040f1c0;
}



/* Function: FUN_0040d341 */

undefined * FUN_0040d341(void)

{
  return &DAT_0040f1c8;
}



/* Function: FUN_0040d350 */

undefined4 FUN_0040d350(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040d335();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040d341();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_0040d380 */

void FUN_0040d380(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(1);
  uVar3 = FUN_0040d9c3();
  o__set_fmode(uVar3);
  uVar3 = FUN_0040d9ba();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_0040dc3c();
    FUN_0040d8d7(FUN_0040dc70);
    uVar3 = FUN_0040d9b0();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_0040d9cf();
      guard_check_icall();
      guard_check_icall();
      FUN_0040d9ea();
      uVar3 = FUN_0040d9ba();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_0040d9e1();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_0040d9ba();
      iVar5 = thunk_FUN_0040d9ba();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_0040da4c();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040d420 */

undefined4 FUN_0040d420(void)

{
  FUN_0040da11();
  return 0;
}



/* Function: FUN_0040d430 */

void FUN_0040d430(void)

{
  undefined4 uVar1;
  
  FUN_0040dbbc();
  uVar1 = FUN_0040d9ba();
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
    if (DAT_0040f1d0 != 1) {
      if (DAT_0040f1d0 == 0) {
        DAT_0040f1d0 = 1;
        iVar4 = initterm_e(&DAT_00401494,&DAT_004014a8);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_0040146c,&DAT_00401490);
        DAT_0040f1d0 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_0040da34();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_00410308)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_0040da40();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      o__get_initial_wide_environment();
      piVar5 = (int *)o___p___wargv();
      iVar4 = *piVar5;
      piVar5 = (int *)o___p___argc();
      unaff_ESI = FUN_00405463(*piVar5,iVar4);
      uVar6 = FUN_0040db74();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_0040d5bb;
    }
  }
  FUN_0040da4c();
LAB_0040d5bb:
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



/* Function: FUN_0040d5e0 */

void __fastcall FUN_0040d5e0(int param_1)

{
  if (param_1 == DAT_0040f100) {
    return;
  }
  FUN_0040dd77();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_0040d5ff */

void FUN_0040d5ff(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0040ebd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0040df6f(param_1);
  FUN_0040d641();
  return;
}



/* Function: Catch_All@0040d639 */

undefined * Catch_All_0040d639(void)

{
  return &DAT_0040d63f;
}



/* Function: FUN_0040d641 */

void FUN_0040d641(void)

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
      if (DAT_0040f1d4 != 0) {
        uVar3 = DAT_0040f1d4;
        uVar1 = DAT_0040f1d4;
      }
      DAT_0040f1d4 = uVar1;
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
    DAT_0040f1f1 = 1;
  }
  FUN_0040dfa7();
  cVar1 = FUN_0040d9e1();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_0040d9e1();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_0040d9e1();
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
  
  if (DAT_0040f1f0 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_0040da4c();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_0040f1d8 = 0xffffffff;
    _DAT_0040f1dc = 0xffffffff;
    _DAT_0040f1e0 = 0xffffffff;
    _DAT_0040f1e4 = 0xffffffff;
    _DAT_0040f1e8 = 0xffffffff;
    _DAT_0040f1ec = 0xffffffff;
LAB_0040d798:
    DAT_0040f1f0 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_0040f1d8);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_0040f1e4);
      if (uVar3 == 0) goto LAB_0040d798;
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
  iVar1 = DAT_0040f1d4;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0040f1d4 = 0;
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
  if ((DAT_0040f1f1 == '\0') || (param_2 == '\0')) {
    FUN_0040d9e1();
    FUN_0040d9e1();
  }
  return 1;
}



/* Function: FUN_0040d8a1 */

undefined4 __cdecl FUN_0040d8a1(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0040f1d8 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_0040f1d8,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_0040d8d7 */

int __cdecl FUN_0040d8d7(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d8a1(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_0040d8f4 */

void __cdecl FUN_0040d8f4(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_0040d90a */

uint FUN_0040d90a(void)

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
  if ((DAT_0040f100 == 0xbb40e64e) || ((DAT_0040f100 & 0xffff0000) == 0)) {
    DAT_0040f100 = FUN_0040d90a();
    if (DAT_0040f100 == 0xbb40e64e) {
      DAT_0040f100 = 0xbb40e64f;
    }
    else if ((DAT_0040f100 & 0xffff0000) == 0) {
      DAT_0040f100 = DAT_0040f100 | (DAT_0040f100 | 0x4711) << 0x10;
    }
  }
  DAT_0040f140 = ~DAT_0040f100;
  return;
}



/* Function: FUN_0040d9b0 */

undefined4 FUN_0040d9b0(void)

{
  return 1;
}



/* Function: FUN_0040d9ba */

undefined4 FUN_0040d9ba(void)

{
  return 0;
}



/* Function: FUN_0040d9c3 */

undefined4 FUN_0040d9c3(void)

{
  return 0x4000;
}



/* Function: FUN_0040d9cf */

void FUN_0040d9cf(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0040f1f8);
  return;
}



/* Function: FUN_0040d9e1 */

undefined1 FUN_0040d9e1(void)

{
  return 1;
}



/* Function: FUN_0040d9ea */

void FUN_0040d9ea(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_0040da4c();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040da11 */

void FUN_0040da11(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040d335();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040d341();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_0040da34 */

undefined * FUN_0040da34(void)

{
  return &DAT_0040f71c;
}



/* Function: FUN_0040da40 */

undefined * FUN_0040da40(void)

{
  return &DAT_0040f718;
}



/* Function: FUN_0040da4c */

void FUN_0040da4c(void)

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
  FUN_0040dc2e();
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
    FUN_0040dc2e();
  }
  return;
}



/* Function: thunk_FUN_0040d9ba */

undefined4 thunk_FUN_0040d9ba(void)

{
  return 0;
}



/* Function: FUN_0040db74 */

uint FUN_0040db74(void)

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



/* Function: FUN_0040dbbc */

void FUN_0040dbbc(void)

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



/* Function: FUN_0040dc2e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040dc2e(void)

{
  _DAT_0040f200 = 0;
  return;
}



/* Function: FUN_0040dc3c */

/* WARNING: Removing unreachable block (ram,0x0040dc4e) */
/* WARNING: Removing unreachable block (ram,0x0040dc4f) */
/* WARNING: Removing unreachable block (ram,0x0040dc55) */
/* WARNING: Removing unreachable block (ram,0x0040dc5f) */
/* WARNING: Removing unreachable block (ram,0x0040dc66) */

void FUN_0040dc3c(void)

{
  return;
}



/* Function: FUN_0040dc70 */

/* WARNING: Removing unreachable block (ram,0x0040dc82) */
/* WARNING: Removing unreachable block (ram,0x0040dc83) */
/* WARNING: Removing unreachable block (ram,0x0040dc89) */
/* WARNING: Removing unreachable block (ram,0x0040dc93) */
/* WARNING: Removing unreachable block (ram,0x0040dc9a) */

void FUN_0040dc70(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040f100 ^ (uint)&param_2;
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
  
  iVar1 = FUN_0040e57c(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_0040f100,FUN_0040d5e0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_0040dd47 */

void __cdecl FUN_0040dd47(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_0040dd77 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040dd77(void)

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
  _DAT_0040f300 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0040f308 = (undefined4)uVar9;
  _DAT_0040f318 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0040f31c = &stack0x00000004;
  _DAT_0040f258 = 0x10001;
  _DAT_0040f208 = 0xc0000409;
  _DAT_0040f20c = 1;
  _DAT_0040f218 = 1;
  DAT_0040f21c = 2;
  _DAT_0040f214 = unaff_retaddr;
  _DAT_0040f2e4 = in_GS;
  _DAT_0040f2e8 = in_FS;
  _DAT_0040f2ec = in_ES;
  _DAT_0040f2f0 = in_DS;
  _DAT_0040f2f4 = unaff_EDI;
  _DAT_0040f2f8 = unaff_ESI;
  _DAT_0040f2fc = unaff_EBX;
  _DAT_0040f304 = uVar3;
  _DAT_0040f30c = unaff_EBP;
  DAT_0040f310 = unaff_retaddr;
  _DAT_0040f314 = in_CS;
  _DAT_0040f320 = in_SS;
  FUN_0040dd47((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_0040de79 */

void FUN_0040de79(void)

{
  FUN_0040de8d(8);
  return;
}



/* Function: FUN_0040de8d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040de8d(undefined4 param_1)

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
  _DAT_0040f300 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0040f308 = (undefined4)uVar9;
  _DAT_0040f318 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0040f31c = &param_1;
  _DAT_0040f208 = 0xc0000409;
  _DAT_0040f20c = 1;
  _DAT_0040f218 = 1;
  DAT_0040f21c = param_1;
  _DAT_0040f214 = unaff_retaddr;
  _DAT_0040f2e4 = in_GS;
  _DAT_0040f2e8 = in_FS;
  _DAT_0040f2ec = in_ES;
  _DAT_0040f2f0 = in_DS;
  _DAT_0040f2f4 = unaff_EDI;
  _DAT_0040f2f8 = unaff_ESI;
  _DAT_0040f2fc = unaff_EBX;
  _DAT_0040f304 = uVar3;
  _DAT_0040f30c = unaff_EBP;
  DAT_0040f310 = unaff_retaddr;
  _DAT_0040f314 = in_CS;
  _DAT_0040f320 = in_SS;
  FUN_0040dd47((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_0040df6f */

void __cdecl FUN_0040df6f(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  do {
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x40df8b;
    iVar1 = o_malloc();
    if (iVar1 != 0) {
      return;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x40df7e;
    iVar1 = o__callnewh();
  } while (iVar1 != 0);
  if (param_1 != -1) {
    FUN_0040e292();
    return;
  }
  puStack_8 = &stack0xfffffffc;
  FUN_0040e213(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_0040ef44);
}



/* Function: FUN_0040dfa7 */

/* WARNING: Removing unreachable block (ram,0x0040e018) */
/* WARNING: Removing unreachable block (ram,0x0040dfdc) */
/* WARNING: Removing unreachable block (ram,0x0040e090) */

undefined4 FUN_0040dfa7(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_0040f524 = 0;
  DAT_0040f144 = DAT_0040f144 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_0040f144;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_0040f528 = DAT_0040f528 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_0040f528 = DAT_0040f528 | 2;
      }
    }
    DAT_0040f524 = 1;
    uVar5 = DAT_0040f144 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_0040f144 | 6;
      DAT_0040f524 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0040f524 = 3;
        uVar5 = DAT_0040f144 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_0040f524 = 5;
          uVar5 = DAT_0040f144 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_0040f144 = DAT_0040f144 | 0x6e;
            DAT_0040f524 = 6;
            uVar5 = DAT_0040f144;
          }
        }
      }
    }
  }
  DAT_0040f144 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0040f148 != 0;
}



/* Function: FUN_0040e1a0 */

exception * __thiscall FUN_0040e1a0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_0040e1c3 */

undefined4 * __fastcall FUN_0040e1c3(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* Function: FUN_0040e1f0 */

exception * __thiscall FUN_0040e1f0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_0040e213 */

undefined4 * __fastcall FUN_0040e213(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* Function: FUN_0040e240 */

void __fastcall FUN_0040e240(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_0040e260 */

undefined4 * __thiscall FUN_0040e260(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040e292 */

void FUN_0040e292(void)

{
  undefined4 local_10 [3];
  
  FUN_0040e1c3(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_0040ef0c);
}



/* Function: FUN_0040e2e0 */

undefined4 * __thiscall FUN_0040e2e0(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: o___p___argc */

void __cdecl o___p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___argc();
  return;
}



/* Function: o___p___wargv */

void __cdecl o___p___wargv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___wargv();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vsnwprintf_s */

void __cdecl o___stdio_common_vsnwprintf_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vsnwprintf_s();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_initial_wide_environment */

void __cdecl o__get_initial_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_initial_wide_environment();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: o_memcpy_s */

void __cdecl o_memcpy_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_memcpy_s();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0040e4d0. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: FUN_0040e4dc */

int __cdecl
FUN_0040e4dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0040d335();
  iVar2 = o___stdio_common_vsnwprintf_s
                    (*puVar1,puVar1[1],param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_0040e515 */

void __cdecl
FUN_0040e515(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_0040e4dc(param_1,param_2,param_3,param_4,0,param_5);
  return;
}



/* Function: NdrServerCall2 */

void NdrServerCall2(PRPC_MESSAGE pRpcMsg)

{
                    /* WARNING: Could not recover jumptable at 0x0040e540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NdrServerCall2(pRpcMsg);
  return;
}



/* Function: FUN_0040e54c */

void __cdecl FUN_0040e54c(int param_1)

{
  FUN_0040df6f(param_1);
  return;
}



/* Function: FUN_0040e55d */

void FUN_0040e55d(int param_1)

{
  FUN_0040d5ff(param_1);
  return;
}



/* Function: Unwind@0040e570 */

void Unwind_0040e570(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: FUN_0040e57c */

int __cdecl FUN_0040e57c(int param_1)

{
  uint uVar1;
  
  if ((DAT_0040f524 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: FUN_0040e615 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040e615(void)

{
  uint unaff_EBP;
  
  FUN_0040d5e0(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040f100 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040f100 ^ (uint)&param_1;
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
  *(uint *)((int)puVar2 + iVar1 + -0x1c) = DAT_0040f100 ^ (uint)puVar2;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040f100 ^ (uint)&param_2;
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
  
                    /* WARNING: Could not recover jumptable at 0x0040e831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040e83d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040e849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@0040e855 */

void Unwind_0040e855(void)

{
  int unaff_EBP;
  
  FUN_00409ec3((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0040e85d */

void Unwind_0040e85d(void)

{
  int unaff_EBP;
  
  FUN_00409a15((int *)(unaff_EBP + -0x14));
  return;
}



/* Function: Unwind@0040e88d */

void Unwind_0040e88d(void)

{
  int unaff_EBP;
  
  FUN_00409ec3((int *)(unaff_EBP + -0x30));
  return;
}



/* Function: Unwind@0040e895 */

void Unwind_0040e895(void)

{
  int unaff_EBP;
  
  FUN_0040d8f4(*(undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@0040e8a2 */

void Unwind_0040e8a2(void)

{
  int unaff_EBP;
  
  FUN_00409a15((int *)(unaff_EBP + -0x24));
  return;
}



/* Function: Unwind@0040e8aa */

void Unwind_0040e8aa(void)

{
  int unaff_EBP;
  
  FUN_00409d71((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@0040e8b2 */

void Unwind_0040e8b2(void)

{
  int unaff_EBP;
  
  FUN_00404176(unaff_EBP + -0x3c);
  return;
}



/* Function: Unwind@0040e8ba */

void Unwind_0040e8ba(void)

{
  int unaff_EBP;
  
  FUN_00404176(unaff_EBP + -0x48);
  return;
}



/* Function: Unwind@0040e90d */

void Unwind_0040e90d(void)

{
  int unaff_EBP;
  
  FUN_00409a15((int *)(unaff_EBP + -0x20));
  return;
}



/* Function: Unwind@0040e98d */

void Unwind_0040e98d(void)

{
  int unaff_EBP;
  
  FUN_0040cda6(*(int *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* Function: Unwind@0040e9c0 */

void Unwind_0040e9c0(void)

{
  int unaff_EBP;
  
  FUN_0040bbcb(unaff_EBP + -0x106c);
  return;
}



/* Function: Unwind@0040ea46 */

void Unwind_0040ea46(void)

{
  int unaff_EBP;
  
  FUN_0040c14f(unaff_EBP + -0x78);
  return;
}



/* Function: Unwind@0040eb25 */

void Unwind_0040eb25(void)

{
  int unaff_EBP;
  
  FUN_004094db((int *)(unaff_EBP + -0x21c));
  return;
}



/* Function: Unwind@0040eb30 */

void Unwind_0040eb30(void)

{
  int unaff_EBP;
  
  FUN_00408847((int *)(unaff_EBP + -0x224));
  return;
}



/* Function: Unwind@0040eb70 */

void Unwind_0040eb70(void)

{
  int unaff_EBP;
  
  FUN_00408847((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0040eba0 */

void Unwind_0040eba0(void)

{
  int unaff_EBP;
  
  FUN_004096a1((int *)(unaff_EBP + -0x10));
  return;
}



/* Function: Unwind@0040eba8 */

void Unwind_0040eba8(void)

{
  int unaff_EBP;
  
  FUN_00409519((int *)(unaff_EBP + -0x1c));
  return;
}



/* Function: FUN_0040ec00 */

int FUN_0040ec00(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int in_EAX;
  int *piVar4;
  int *lpMem;
  int *local_8;
  
  lpMem = DAT_0040f060;
  if (DAT_0040f060 != (int *)0x0) {
    local_8 = DAT_0040f060;
    cVar1 = FUN_00408783();
    if (cVar1 == '\0') {
      iVar2 = FUN_0040965e(lpMem + 1,&local_8);
      *lpMem = *lpMem + -1;
      piVar4 = local_8;
      if (*lpMem == 0) {
        FUN_004092e5(lpMem + 2,0);
        FUN_004092e5(lpMem + 3,0);
        if (local_8 != (int *)0x0) {
          DVar3 = GetLastError();
          FUN_00408818(local_8);
          SetLastError(DVar3);
        }
        FUN_004094ee((int)lpMem);
        DVar3 = 0;
        hHeap = GetProcessHeap();
        iVar2 = HeapFree(hHeap,DVar3,lpMem);
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        iVar2 = FUN_00408818(piVar4);
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



/* Function: FUN_0040ec20 */

void FUN_0040ec20(void)

{
  FUN_00409250((int *)&DAT_0040f168);
  return;
}



/* Function: FUN_0040ec30 */

void FUN_0040ec30(void)

{
  FUN_0040c8d4(&DAT_0040f68c);
  return;
}



