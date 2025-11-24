/* Function: FUN_00402210 */

void FUN_00402210(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_00409170)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00402293 */

void FUN_00402293(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x7aa;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_00402328 */

uint __thiscall FUN_00402328(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_0040235f:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_0040235f;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_0040236b */

void __fastcall
FUN_0040236b(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  FUN_00402958(param_20,local_18);
  FUN_004029a6(param_19,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_18;
  local_30 = 4;
  FUN_00402958(param_17,local_48);
  FUN_004029a6(param_16,local_58);
  local_68 = param_15;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_004029a6(param_14,local_78);
  local_88 = param_13;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00402958(param_12,local_98);
  local_a8 = param_11;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_004029a6(param_10,local_b8);
  local_c8 = param_9;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_004029a6(param_8,local_d8);
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
  FUN_00402293(param_1,param_2,param_3,(LPCGUID)0x0,0x12,local_128);
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00402534 */

void __fastcall
FUN_00402534(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  FUN_004029a6(param_22,local_18);
  local_28 = param_21;
  local_38 = param_20;
  local_20 = 4;
  local_30 = 4;
  local_24 = 0;
  local_1c = 0;
  local_34 = 0;
  local_2c = 0;
  FUN_00402958(param_19,local_48);
  FUN_004029a6(param_18,local_58);
  local_68 = param_17;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_00402958(param_16,local_78);
  FUN_004029a6(param_15,local_88);
  local_98 = param_14;
  local_94 = 0;
  local_90 = 4;
  local_8c = 0;
  FUN_004029a6(param_13,local_a8);
  local_b8 = param_12;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  FUN_00402958(param_11,local_c8);
  local_d8 = param_10;
  local_d4 = 0;
  local_d0 = 4;
  local_cc = 0;
  FUN_004029a6(param_9,local_e8);
  local_f8 = param_8;
  local_f4 = 0;
  local_f0 = 4;
  local_ec = 0;
  FUN_004029a6(param_7,local_108);
  local_118 = param_6;
  local_114 = 0;
  local_110 = 4;
  local_10c = 0;
  local_128 = *param_5;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00402293(param_1,param_2,param_3,(LPCGUID)0x0,0x14,local_148);
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00402735 */

void __fastcall
FUN_00402735(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
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
  FUN_00402293(param_1,param_2,param_3,(LPCGUID)0x0,5,local_58);
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004027ab */

void __fastcall
FUN_004027ab(int param_1,byte *param_2,LPCGUID param_3,undefined4 param_4,undefined4 *param_5,
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
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  FUN_00402958(param_19,local_18);
  FUN_004029a6(param_18,local_28);
  local_34 = 0;
  local_2c = 0;
  local_38 = param_17;
  local_30 = 4;
  FUN_00402958(param_16,local_48);
  FUN_004029a6(param_15,local_58);
  local_68 = param_14;
  local_64 = 0;
  local_60 = 4;
  local_5c = 0;
  FUN_004029a6(param_13,local_78);
  local_88 = param_12;
  local_84 = 0;
  local_80 = 4;
  local_7c = 0;
  FUN_00402958(param_11,local_98);
  local_a8 = param_10;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  FUN_004029a6(param_9,local_b8);
  local_c8 = param_8;
  local_c4 = 0;
  local_c0 = 4;
  local_bc = 0;
  FUN_004029a6(param_7,local_d8);
  local_e8 = param_6;
  local_e4 = 0;
  local_e0 = 4;
  local_dc = 0;
  local_f4 = 0;
  local_f8 = *param_5;
  local_f0 = 8;
  local_ec = 0;
  FUN_00402293(param_1,param_2,param_3,(LPCGUID)0x0,0x11,local_118);
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00402958 */

void __thiscall FUN_00402958(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)&DAT_004011d4;
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



/* Function: FUN_004029a6 */

void __thiscall FUN_004029a6(void *this,undefined4 *param_1)

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



/* Function: FUN_004029f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004029f0(void)

{
  _DAT_00408518 = FUN_00403a10;
  DAT_00408530 = FUN_00403a20;
  DAT_00408524 = FUN_00403ab0;
  return;
}



/* Function: FUN_00402a20 */

void FUN_00402a20(void)

{
  FUN_0040703f(FUN_00407a20);
  return;
}



/* Function: FUN_00402a40 */

void FUN_00402a40(void)

{
  FUN_0040703f(FUN_00407a50);
  return;
}



/* Function: FUN_00402a60 */

void FUN_00402a60(void)

{
  DAT_00408508 = FUN_00404b00;
  DAT_004084d8 = &PTR_s_WilError_03_00408028;
  DAT_004084f0 = &DAT_00408150;
  return;
}



/* Function: FUN_00402a90 */

void FUN_00402a90(void)

{
  DAT_00408538 = FUN_00403280;
  DAT_00408510 = DebugBreak;
  DAT_00408534 = FUN_004032c0;
  DAT_004084fc = FUN_00404ba0;
  DAT_004084ec = FUN_00404c60;
  DAT_0040850c = FUN_00404bf0;
  return;
}



/* Function: FUN_00402ad3 */

undefined4 __fastcall FUN_00402ad3(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00402b39 */

undefined4 __thiscall FUN_00402b39(void *this,int param_1)

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
    uVar2 = FUN_00402bd4((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_00402b90 */

undefined4 __cdecl FUN_00402b90(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_00402c27(param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_00402bd4 */

undefined4 __fastcall FUN_00402bd4(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_00402c27 */

undefined4 __fastcall
FUN_00402c27(wchar_t *param_1,int param_2,undefined4 param_3,wchar_t *param_4,va_list param_5)

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



/* Function: FUN_00402c6d */

wchar_t * __thiscall FUN_00402c6d(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_00402c27(param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_00402cc4 */

void __fastcall FUN_00402cc4(wchar_t *param_1,int param_2,int param_3)

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
  wchar_t *local_218;
  WCHAR local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar3 = DAT_004084e0;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040775d;
  local_10 = ExceptionList;
  local_14 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = param_2;
  if ((param_2 != 0) && (param_1 != (wchar_t *)0x0)) {
    *param_1 = L'\0';
    if ((pcVar3 != (code *)0x0) && (DAT_004084f4 != '\0')) {
      (*(code *)PTR_guard_check_icall_00409170)(param_3,param_1,param_2,local_14);
      (*pcVar3)();
      iVar5 = extraout_EDX;
      if (*param_1 != L'\0') goto LAB_00402f33;
    }
    memset(local_214,0,0x200);
    pcVar3 = DAT_004084fc;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_004084fc != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00409170)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    pwVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_00402c6d(pcVar3,param_1,pwVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_218 = FUN_00402c6d(pcVar3,param_1,pwVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_00402c6d(pvVar4,local_218,pwVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    pwVar2 = FUN_00402c6d(local_214,local_218,pwVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (iVar5 = extraout_EDX_00, *(int *)(param_3 + 0x20) != 0)) {
      pwVar2 = FUN_00402c6d((void *)0x0,pwVar2,pwVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        pwVar2 = FUN_00402c6d(this,pwVar2,pwVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        pwVar2 = FUN_00402c6d(pvVar4,pwVar2,pwVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00402c6d(pvVar4,pwVar2,pwVar1,L"\n");
          iVar5 = extraout_EDX_03;
        }
        else {
          FUN_00402c6d(pvVar4,pwVar2,pwVar1,L"[%hs]\n");
          iVar5 = extraout_EDX_02;
        }
      }
      else {
        FUN_00402c6d(pvVar4,pwVar2,pwVar1,L"[%hs(%hs)]\n");
        iVar5 = extraout_EDX_01;
      }
    }
  }
LAB_00402f33:
  ExceptionList = local_10;
  FUN_00406f80(local_14 ^ (uint)&stack0xfffffffc,iVar5);
  return;
}



/* Function: FUN_00402f5c */

uint * __thiscall FUN_00402f5c(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00403301((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00402f82 */

LPVOID __fastcall FUN_00402f82(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_0040778d;
  local_10 = ExceptionList;
  uVar2 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_004084cc == (FARPROC)0x0) {
    if (DAT_00408558 != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_004084cc = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_00408558 = '\x01';
    if (DAT_004084cc == (FARPROC)0x0) {
      DAT_00408558 = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_004084cc;
  (*(code *)PTR_guard_check_icall_00409170)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00403032 */

undefined4 * __thiscall FUN_00403032(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_0040306b((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040306b */

void __fastcall FUN_0040306b(undefined4 *param_1)

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



/* Function: FUN_004030a2 */

undefined4 __thiscall FUN_004030a2(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_0040306b((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_004030ec;
    *piVar1 = 0;
    FUN_0040306b((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_004030ec:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_004030fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_004030fb(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00408548;
  _DAT_0040854c = param_1;
  LOCK();
  DAT_00408548 = DAT_00408548 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00403114 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00403114(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00408564;
  _DAT_004084d0 = param_1;
  LOCK();
  DAT_00408564 = DAT_00408564 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_0040312d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0040312d(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004085b8;
  _DAT_00408560 = param_1;
  LOCK();
  DAT_004085b8 = DAT_004085b8 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00403150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403150(undefined4 param_1)

{
  _DAT_004085b0 = param_1;
  return 1;
}



/* Function: FUN_0040316a */

void FUN_0040316a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00408534;
  if (DAT_00408534 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040319a */

void __fastcall
FUN_0040319a(undefined4 param_1,undefined4 param_2,LPCWSTR param_3,uint *param_4,char *param_5,
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
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
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
      FUN_00402ad3(param_5,param_6,(int)pcVar5);
      param_2 = extraout_EDX_01;
    }
  }
  else if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_00403280 */

undefined * __fastcall FUN_00403280(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00408550 == '\0') {
    FUN_0040319a(param_1,param_2,(LPCWSTR)FUN_00403150,(uint *)0x0,&DAT_00408568,0x40);
    DAT_00408550 = '\x01';
  }
  return &DAT_00408568;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x004032b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_004032c0 */

void FUN_004032c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_00403301 */

uint __fastcall FUN_00403301(uint param_1)

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



/* Function: FUN_004034d6 */

DWORD __fastcall
FUN_004034d6(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004077b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004063c8(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_00403541 */

uint __fastcall
FUN_00403541(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004077d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_004063c8(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_004035c2 */

void __fastcall FUN_004035c2(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_00403541(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_004035df */

char * __fastcall FUN_004035df(char *param_1)

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



/* Function: FUN_004035fd */

int __fastcall FUN_004035fd(short *param_1)

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



/* Function: FUN_00403625 */

void __thiscall FUN_00403625(void *this,undefined4 *param_1)

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
  iVar10 = FUN_004035fd((short *)param_1[0x12]);
  iVar1 = FUN_004035fd((short *)param_1[0xf]);
  iVar2 = FUN_004035fd((short *)param_1[5]);
  pcVar3 = FUN_004035df((char *)param_1[0x11]);
  pcVar4 = FUN_004035df((char *)param_1[0xe]);
  pcVar5 = FUN_004035df((char *)param_1[0xc]);
  pcVar6 = FUN_004035df((char *)param_1[9]);
  pcVar7 = FUN_004035df((char *)param_1[8]);
  pcVar8 = FUN_004035df((char *)param_1[7]);
  pcVar9 = FUN_004035df((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_0040306b(this_00);
    FUN_004030a2(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_0040640f(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_0040647f(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_0040647f(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_0040647f(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_0040647f(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_0040647f(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_0040647f(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_0040640f(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_0040647f(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_0040640f(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_004037b8 */

exception * __thiscall FUN_004037b8(void *this,undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004077b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  exception::exception((exception *)this);
  *(undefined ***)this = &PTR_FUN_00401028;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_00403625((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  ExceptionList = local_10;
  return (exception *)this;
}



/* Function: FUN_00403830 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00403830(int param_1,undefined4 param_2)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  wchar_t local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_00402cc4(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_004030a2(this,cbMultiByte);
    param_2 = extraout_EDX;
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      param_2 = extraout_EDX_00;
    }
  }
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,param_2);
  return;
}



/* Function: FUN_004038e0 */

exception * __thiscall FUN_004038e0(void *this,byte param_1)

{
  FUN_00403910((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* Function: FUN_00403910 */

void __fastcall FUN_00403910(exception *param_1)

{
  FUN_0040306b((undefined4 *)(param_1 + 0x6c));
  FUN_0040306b((undefined4 *)(param_1 + 100));
                    /* WARNING: Could not recover jumptable at 0x00403928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception::~exception(param_1);
  return;
}



/* Function: FUN_00403934 */

void FUN_00403934(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_00408530;
  if (DAT_00408530 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00403954 */

void __fastcall FUN_00403954(int *param_1,wchar_t *param_2,uint param_3)

{
  code *pcVar1;
  
  if (param_2 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00409170)();
    (*pcVar1)();
    FUN_00402b90(param_2,param_3,L"std::exception: %hs");
  }
  return;
}



/* Function: FUN_00403994 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_00403994(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_004084e8;
  (*(code *)PTR_guard_check_icall_00409170)();
  iVar2 = (*pcVar1)();
  if ((iVar2 < 0) && (param_1 == 0)) {
    FUN_004039f2();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: Catch@004039c5 */

undefined * Catch_004039c5(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00403954(*(int **)(unaff_EBP + -0x20),*(wchar_t **)(unaff_EBP + -0x1c),
               *(uint *)(unaff_EBP + -0x18));
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (-1 < iVar1) {
    iVar1 = -0x7ff8fdc2;
  }
  *(int *)(unaff_EBP + -0x14) = iVar1;
  return &DAT_004039ef;
}



/* Function: Catch_All@004039e9 */

undefined * Catch_All_004039e9(void)

{
  return &DAT_004039ef;
}



/* Function: FUN_004039f2 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004039f2(void)

{
  return;
}



/* Function: FUN_00403a10 */

void FUN_00403a10(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00403a20 */

void FUN_00403a20(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_004037b8(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_00407d7c);
}



/* Function: FUN_00403a50 */

exception * __thiscall FUN_00403a50(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401028;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_00403032((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_00403032((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00403ab0 */

void FUN_00403ab0(uint *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00407819;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0;
  }
  pcVar1 = DAT_00408500;
  *param_4 = 0;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(param_2,param_3,param_4);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) goto LAB_00403b0d;
  }
  pcVar1 = DAT_00408528;
  if (DAT_00408528 == (code *)0x0) {
    if (DAT_004084e8 != 0) {
      uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
    }
    FUN_00403be8((ThrowInfo *)0x0);
    return;
  }
  (*(code *)PTR_guard_check_icall_00409170)(param_2,param_3,param_4);
  uVar2 = (*pcVar1)();
LAB_00403b0d:
  *param_1 = uVar2;
  FUN_00403c8d(uVar2);
  return;
}



/* Function: Catch@00403b4a */

undefined * Catch_00403b4a(void)

{
  wchar_t *pwVar1;
  int iVar2;
  int unaff_EBP;
  
  pwVar1 = *(wchar_t **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (pwVar1 != (wchar_t *)0x0) {
    FUN_00402cc4(pwVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_00403b84;
}



/* Function: Catch@00403b94 */

undefined * Catch_00403b94(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_00403954(*(int **)(unaff_EBP + -0x1c),*(wchar_t **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_00403301(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00403b84;
}



/* Function: Catch_All@00403bbc */

undefined * Catch_All_00403bbc(void)

{
  uint uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_00403994(*(int *)(unaff_EBP + 0xc));
  if ((int)uVar1 < 0) {
    *(uint *)(unaff_EBP + -0x30) = uVar1;
    uVar1 = FUN_00403301(uVar1);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(uint *)(unaff_EBP + -0x2c) = uVar1;
    return &DAT_00403b84;
  }
  return &DAT_00403c84;
}



/* Function: FUN_00403be8 */

void FUN_00403be8(ThrowInfo *param_1)

{
  int unaff_EBP;
  void *unaff_retaddr;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(unaff_retaddr,param_1);
}



/* Function: Catch@00403bf4 */

undefined * Catch_00403bf4(void)

{
  wchar_t *pwVar1;
  int iVar2;
  int unaff_EBP;
  
  pwVar1 = *(wchar_t **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x18);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (pwVar1 != (wchar_t *)0x0) {
    FUN_00402cc4(pwVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_00403b84;
}



/* Function: Catch@00403c2e */

undefined * Catch_00403c2e(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_00403954(*(int **)(unaff_EBP + -0x20),*(wchar_t **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_00403301(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00403b84;
}



/* Function: Catch@00403c56 */

undefined * Catch_00403c56(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_00403954(*(int **)(unaff_EBP + -0x24),*(wchar_t **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007023e;
  uVar1 = FUN_00403301(0x8007023e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_00403b84;
}



/* Function: Catch_All@00403c7e */

undefined * Catch_All_00403c7e(void)

{
  return &DAT_00403c84;
}



/* Function: FUN_00403c8d */

void __fastcall FUN_00403c8d(uint param_1)

{
  uint uVar1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  uVar1 = FUN_00403301(param_1);
  *(uint *)(unaff_ESI + 4) = uVar1;
  *(undefined4 *)(unaff_ESI + 8) = unaff_EBX;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_00403cc0 */

void __fastcall
FUN_00403cc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8,short *param_9,undefined4 param_10,wchar_t *param_11,undefined4 param_12,
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
  puStack_c = &LAB_0040783c;
  local_10 = ExceptionList;
  uVar3 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar4 = *param_8;
  param_15[2] = iVar4;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar4 = FUN_004030fb(iVar4);
  }
  else if (param_7 == 1) {
    iVar4 = FUN_00403114(iVar4);
  }
  else if (param_7 == 2) {
    if (-1 < iVar4) {
      iVar4 = -0x7ff8fd64;
      FUN_004063c8(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar5 = FUN_00403301(0x8007029c);
      param_15[3] = uVar5;
    }
    iVar4 = FUN_0040312d(iVar4);
  }
  else if (param_7 == 3) {
    iVar4 = FUN_00403150(iVar4);
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
  iVar6 = DAT_00408554 + 1;
  DAT_00408554 = DAT_00408554 + 1;
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
  pcVar1 = DAT_00408538;
  if (DAT_00408538 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00409170)(uVar3);
    iVar4 = (*pcVar1)();
  }
  pcVar1 = DAT_004084ec;
  param_15[0x13] = iVar4;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00408508;
  if (DAT_00408508 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00408504;
  if (DAT_00408504 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_0040851c;
  if ((DAT_0040851c != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00409170)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_004042ed();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar3 = FUN_00403301(0x8000ffff);
    param_15[3] = uVar3;
  }
  pcVar1 = DAT_004084d4;
  if (DAT_004084dc == '\0') {
    if (DAT_004084d4 == (code *)0x0) {
      BVar8 = IsDebuggerPresent();
      cVar2 = BVar8 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00409170)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00403ec8;
  }
  else {
LAB_00403ec8:
    pcVar1 = DAT_004084e0;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_004084e0 != (code *)0x0) && (DAT_004084f4 == '\0')) {
        (*(code *)PTR_guard_check_icall_00409170)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_00402cc4(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00403f31;
    }
  }
  pcVar1 = DAT_004084e0;
  if ((DAT_004084e0 != (code *)0x0) && (DAT_004084f4 == '\0')) {
    (*(code *)PTR_guard_check_icall_00409170)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00403f31:
  pcVar1 = DAT_00408510;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_004084e4 != '\0')) &&
     (DAT_00408510 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00409170)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00403f77 */

void __fastcall FUN_00403f77(int param_1)

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
  
  pcVar1 = DAT_0040853c;
  if (DAT_0040853c != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_00408520;
  if (DAT_00408520 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(param_1);
    (*pcVar1)();
  }
  memset(&uStack_58,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  uStack_58 = 0xc0000409;
  uStack_48 = 1;
  uStack_54 = 1;
  uStack_44 = 7;
  if (iVar2 != 0) goto LAB_00403fed;
  uVar3 = 1;
  do {
    FUN_0040316a(uVar3);
    iVar2 = extraout_ECX;
LAB_00403fed:
    uStack_40 = *(undefined4 *)(param_1 + 8);
    uStack_3c = *(undefined4 *)(param_1 + 0x28);
    uStack_48 = 3;
    uVar3 = 0;
    iStack_4c = iVar2;
  } while( true );
}



/* Function: FUN_00404015 */

void __fastcall
FUN_00404015(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  code *pcVar1;
  
  FUN_00406508(param_1,param_2,param_3,param_1,param_1,param_6,param_7,param_8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404035 */

void __fastcall FUN_00404035(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  FUN_0040655a(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404051 */

void __thiscall FUN_00404051(void *this)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 extraout_ECX;
  int in_stack_00000010;
  uint local_1c [3];
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  
  puVar2 = FUN_00402f5c((void *)0x8000ffff,local_1c);
  local_10 = *puVar2;
  uStack_c = puVar2[1];
  uStack_8 = puVar2[2];
  FUN_00404015((int)this,0xc27,0x4013c0,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_10
               ,(short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404098 */

void __fastcall FUN_00404098(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  uint *puVar2;
  void *in_stack_00000014;
  uint local_20 [3];
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 local_8;
  
  local_8 = param_1;
  puVar2 = FUN_00402f5c(in_stack_00000014,local_20);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  FUN_00404035(local_8,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004040d9 */

void __fastcall FUN_004040d9(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_004034d6(param_1,param_2,0x4013c0,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00402f5c(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  FUN_00404015(local_8,param_2,0x4013c0,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14
               ,(short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040413b */

void __fastcall FUN_0040413b(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040785f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00406883(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404187 */

void __fastcall FUN_00404187(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00407882;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004068c9(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004041d1 */

void __fastcall FUN_004041d1(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040785f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00406923(param_1);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0040421b */

uint __thiscall FUN_0040421b(void *this,undefined4 param_1,uint param_2)

{
  int unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040785f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004063c8((int)this,0x3be,0x401400,0,0,unaff_retaddr,param_2);
  ExceptionList = local_10;
  return param_2;
}



/* Function: FUN_00404275 */

void __fastcall FUN_00404275(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00407882;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004040d9(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004042b1 */

void __fastcall FUN_004042b1(void *param_1)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040785f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00404051(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004042ed */

void FUN_004042ed(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_004042f9 */

void __fastcall FUN_004042f9(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  FUN_00404098(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404313 */

void FUN_00404313(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00404275(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404340 */

void FUN_00404340(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00404275(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040436b */

void __thiscall FUN_0040436b(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  uint uVar5;
  int unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_004042ed();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00402bd4(local_214,0x104,this,param_1);
  FUN_00402b39(local_214,0x4013f8);
  uVar5 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  iVar3 = FUN_00405d81(this,uVar5,uVar2,local_214);
  uVar4 = extraout_EDX;
  if (iVar3 < 0) {
    FUN_0040413b(unaff_retaddr,0x88);
    uVar4 = extraout_EDX_00;
  }
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040440e */

undefined4 __fastcall FUN_0040440e(HANDLE param_1,int *param_2)

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
    goto LAB_00404431;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00404431:
        uVar2 = FUN_00404187(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_004044ff:
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
        goto LAB_00404431;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00404431;
          }
          if (DVar1 == 0) goto LAB_004044ff;
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
  FUN_0040413b(unaff_retaddr,iVar4);
  return 0x8000ffff;
}



/* Function: FUN_00404529 */

void __thiscall FUN_00404529(void *this,int *param_1)

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
  
  local_c = DAT_00408100 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00402bd4(local_218,0x104,this,(int)this);
  FUN_00402b39(local_218,0x4013f8);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar4 = extraout_EDX;
    if (DVar2 != 2) {
      FUN_00404187(unaff_retaddr,0xcd);
      uVar4 = extraout_EDX_00;
    }
LAB_004045cf:
    if (pvVar1 == (HANDLE)0x0) goto LAB_004045e9;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_0040440e(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_0040413b(unaff_retaddr,0xd3);
      uVar4 = extraout_EDX_01;
      goto LAB_004045cf;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00404313(pvVar1);
  uVar4 = extraout_EDX_02;
LAB_004045e9:
  FUN_00406f80(local_c ^ (uint)auStack_224,uVar4);
  return;
}



/* Function: FUN_00404608 */

void __thiscall FUN_00404608(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_004035fd(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_004035df(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_004035df(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00402f82(8,(SIZE_T)pcVar4);
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
    FUN_0040647f(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_0040647f(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_0040640f(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_004046fb */

void __fastcall FUN_004046fb(int param_1)

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



/* Function: FUN_0040476a */

void __thiscall FUN_0040476a(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00402f82(8,0xdc);
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
    FUN_00404608(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00404828 */

DWORD * __fastcall FUN_00404828(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_004084d8;
  if (DAT_004084d8 != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_004084d8[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_00405e08(*DAT_004084d8,&local_8);
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



/* Function: FUN_004048b1 */

void __fastcall FUN_004048b1(undefined4 *param_1)

{
  code *pcVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  undefined1 local_60 [92];
  
  if (param_1[3] == 0) {
    if (DAT_004084f0 == 0) {
      *param_1 = 0;
    }
    else {
      pDVar2 = FUN_00405caa('\x01');
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
  FUN_00403f77((int)local_60);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404914 */

void __fastcall FUN_00404914(undefined4 *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  void *unaff_retaddr;
  
  DVar2 = GetCurrentThreadId();
  if (param_1[3] != DVar2) {
    FUN_0040421b(unaff_retaddr,extraout_ECX,0x8007029c);
  }
  param_1[3] = 0;
  piVar3 = (int *)*param_1;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 == (undefined4 *)0x0) {
LAB_00404954:
      *param_1 = 0;
      return;
    }
    if (puVar1 == param_1) {
      *piVar3 = param_1[2];
      goto LAB_00404954;
    }
    piVar3 = puVar1 + 2;
    *param_1 = piVar3;
  } while( true );
}



/* Function: FUN_00404961 */

uint __fastcall FUN_00404961(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00404961(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_00408144 + 1;
        DAT_00408144 = DAT_00408144 + 1;
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



/* Function: FUN_00404a20 */

void __fastcall FUN_00404a20(int param_1,char *param_2,int param_3)

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
  puStack_c = &LAB_004078a5;
  local_10 = ExceptionList;
  uVar3 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_11 = 0;
  *param_2 = '\0';
  if (DAT_004084f0 != 0) {
    pDVar4 = FUN_00405caa('\0');
    if ((pDVar4 == (DWORD *)0x0) || (*pDVar4 == 0)) {
      local_11 = 0;
    }
    else {
      *param_2 = '\0';
      uVar5 = FUN_00404961(param_1,*pDVar4,param_2,param_3);
      if ((char)uVar5 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar6 = *pDVar4;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar6 + 4);
        (*(code *)PTR_guard_check_icall_00409170)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar6 = *(DWORD *)(DVar6 + 8);
      } while (DVar6 != 0);
    }
  }
  pcVar1 = DAT_004084f8;
  if (DAT_004084f8 != (code *)0x0) {
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (*(code *)PTR_guard_check_icall_00409170)(uVar5,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404b00 */

void FUN_00404b00(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00404a20((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_004085b4 != DVar2) {
    LOCK();
    iVar1 = DAT_004085bc + 1;
    UNLOCK();
    iVar3 = DAT_004085bc + 1;
    DAT_004085bc = iVar1;
    if (iVar3 < 4) {
      DAT_004085b4 = DVar2;
      this = FUN_00404828(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_0040476a(this,param_1);
      }
      DAT_004085b4 = 0;
    }
    LOCK();
    DAT_004085bc = DAT_004085bc + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00404b65 */

void __fastcall FUN_00404b65(LPCSTR param_1)

{
  if (DAT_0040855c == (HMODULE)0x0) {
    DAT_0040855c = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_0040855c,param_1);
  return;
}



/* Function: FUN_00404ba0 */

void FUN_00404ba0(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0040855c == (HMODULE)0x0) {
    DAT_0040855c = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0040855c,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00404bf0 */

undefined4 FUN_00404bf0(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00407882;
  local_10 = ExceptionList;
  uVar2 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_004085ac == (code *)0x0) &&
     (DAT_004085ac = (code *)FUN_00404b65("RtlDllShutdownInProgress"), DAT_004085ac == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_004085ac;
  (*(code *)PTR_guard_check_icall_00409170)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_00404c60 */

void FUN_00404c60(undefined1 *param_1)

{
  uint uVar1;
  FARPROC pFVar2;
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
  
  pFVar2 = DAT_00408544;
  puStack_c = &LAB_004078eb;
  local_10 = ExceptionList;
  uVar1 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_00408540;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_00408544 == (FARPROC)0x0) {
    if (DAT_004085a8 == (HMODULE)0x0) {
      DAT_004085a8 = GetModuleHandleW(L"kernelbase.dll");
      if (DAT_004085a8 != (HMODULE)0x0) goto LAB_00404cf2;
    }
    else {
LAB_00404cf2:
      pFVar2 = GetProcAddress(DAT_004085a8,"WilFailureNotifyWatchers");
    }
    DAT_00408544 = pFVar2;
    if (pFVar2 == (FARPROC)0x0) goto LAB_00404d1e;
  }
  pFVar2 = DAT_00408544;
  (*(code *)PTR_guard_check_icall_00409170)(0,&local_34,&local_18,uVar1);
  (*pFVar2)();
LAB_00404d1e:
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



/* Function: FUN_00404d63 */

void __fastcall FUN_00404d63(int param_1)

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



/* Function: FUN_00404db0 */

void __thiscall FUN_00404db0(void *this,char param_1,undefined4 *param_2)

{
  if ((param_1 == '\0') && ((*(byte *)(param_2 + 1) & 2) == 0)) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_00404e20(this,param_2);
    }
    else if (*(int *)((int)this + 0xc) == 2) {
      FUN_00404f1a(this,param_2);
    }
  }
  return;
}



/* Function: FUN_00404ded */

void __fastcall FUN_00404ded(undefined4 *param_1)

{
  undefined4 *puVar1;
  REGHANDLE RegHandle;
  
  *param_1 = &PTR_FUN_0040100c;
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



/* Function: FUN_00404e20 */

void __thiscall FUN_00404e20(void *this,undefined4 *param_1)

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
    uVar1 = FUN_00402328(this_00,0,0x2000);
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
      FUN_0040236b((int)this_00,&DAT_00401897,(LPCGUID)0x0,0x1000000,&local_44,&local_40,&local_3c,
                   &local_38,&local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                   &local_18,&local_14,&local_10,&local_c,&local_8);
    }
  }
  return;
}



/* Function: FUN_00404f1a */

void __thiscall FUN_00404f1a(void *this,undefined4 *param_1)

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
    FUN_00402534((int)*(uint **)((int)this + 4),&DAT_00401b61,(LPCGUID)0x0,param_1,&local_4c,
                 &local_48,&local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                 &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,
                 &local_8);
  }
  return;
}



/* Function: FUN_00405010 */

undefined4 __thiscall FUN_00405010(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar4 = DAT_00408148 != iVar1;
  iVar3 = DAT_00408148;
  DAT_00408148 = iVar1;
  if (bVar4) {
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 8);
    (*(code *)PTR_guard_check_icall_00409170)(0,param_1);
    iVar3 = (*pcVar2)();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* Function: FUN_00405050 */

undefined4 * __thiscall FUN_00405050(void *this,byte param_1)

{
  FUN_00404ded((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00405078 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00405078(void)

{
  BOOL BVar1;
  undefined *local_18;
  int local_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined *)0x0;
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_004085c0,0,&local_14,&local_18);
  if ((BVar1 != 0) && (local_14 != 0)) {
    puStack_10 = &DAT_004085c0;
    local_18 = &DAT_004085c4;
    _DAT_004085c8 = 0;
    DAT_004085cc = 0;
    _DAT_004085d0 = 0;
    _DAT_004085c4 = &PTR_FUN_0040100c;
    _DAT_004085d4 = &DAT_00408000;
    FUN_0040703f(FUN_00405110);
    uStack_c = 0;
    FUN_00406006((int *)&puStack_10);
  }
  return local_18;
}



/* Function: FUN_00405110 */

void FUN_00405110(void)

{
  code *pcVar1;
  BOOL BVar2;
  int *local_c;
  int local_8;
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_004085c0,1,&local_8,&local_c);
  if ((BVar2 != 0) && (local_8 == 0)) {
    pcVar1 = *(code **)(*local_c + 0xc);
    (*(code *)PTR_guard_check_icall_00409170)(0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00405158 */

void __fastcall FUN_00405158(int *param_1)

{
  PREGHANDLE RegHandle;
  PVOID CallbackContext;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  undefined4 extraout_EDX;
  GUID local_18;
  uint local_8;
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
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
  UVar3 = EventRegister(&local_18,FUN_00402210,CallbackContext,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)CallbackContext + 0x1c),2,
                        *(undefined2 **)((int)CallbackContext + 4),
                        **(undefined2 **)((int)CallbackContext + 4));
  }
  param_1[3] = 1;
  pcVar2 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_00409170)();
  (*pcVar2)();
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00405200 */

void __fastcall FUN_00405200(PSRWLOCK param_1)

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
    FUN_00405937(param_1);
    puVar2 = FUN_00405078();
    if (5 < **(uint **)(puVar2 + 4)) {
      uVar3 = FUN_00402328(*(uint **)(puVar2 + 4),0,0x4000);
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
        local_44 = &DAT_00401538;
        FUN_0040236b(extraout_ECX,&DAT_00401a36,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX,
                     &local_44,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28
                     ,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,&local_c,&local_8)
        ;
      }
    }
  }
  else {
    FUN_00405937(param_1);
    puVar2 = FUN_00405078();
    this = *(uint **)(puVar2 + 4);
    if (5 < *this) {
      uVar3 = FUN_00402328(this,0,0x4000);
      if ((char)uVar3 != '\0') {
        local_44 = (undefined *)GetCurrentThreadId();
        local_3c = &DAT_00401538;
        local_40 = *(undefined4 **)((int)param_1[0x2a].Ptr + 0x38);
        FUN_00402735((int)this,&DAT_00401ce2,(LPCGUID)((int)param_1[0x2a].Ptr + 8),extraout_ECX_00,
                     &local_3c,&local_40,&local_44);
      }
    }
  }
  if (param_1[0x2f].Ptr != (PVOID)0x0) {
    FUN_00404914(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_004053a0 */

bool FUN_004053a0(int param_1)

{
  bool bVar1;
  
  bVar1 = DAT_00408148 == param_1;
  DAT_00408148 = param_1;
  return bVar1;
}



/* Function: FUN_004053c1 */

void __fastcall FUN_004053c1(PSRWLOCK param_1)

{
  param_1->Ptr = &PTR_FUN_0040101c;
  FUN_004058b7(param_1);
  FUN_0040552a((int)param_1);
  return;
}



/* Function: FUN_004053df */

void __fastcall FUN_004053df(void *param_1)

{
  undefined4 *puVar1;
  uint *this;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  LPCGUID pGVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  undefined4 extraout_EDX_02;
  PSRWLOCK local_58;
  _EVENT_DATA_DESCRIPTOR local_54 [2];
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  PSRWLOCK *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040790e;
  local_10 = ExceptionList;
  local_14 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004060f5(param_1,&local_58);
  puVar1 = *(undefined4 **)((int)param_1 + 0xa8);
  puVar3 = FUN_00405078();
  if (5 < **(uint **)(puVar3 + 4)) {
    uVar4 = FUN_00402328(*(uint **)(puVar3 + 4),0,0x4000);
    if ((char)uVar4 != '\0') {
      EventActivityIdControl(3,(LPGUID)(puVar1 + 2));
      goto LAB_00405451;
    }
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
LAB_00405451:
  *puVar1 = 1;
  if (local_58 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_58);
  }
  puVar3 = FUN_00405078();
  this = *(uint **)(puVar3 + 4);
  uVar6 = extraout_EDX;
  if (5 < *this) {
    uVar4 = FUN_00402328(this,0,0x4000);
    uVar6 = extraout_EDX_00;
    if ((char)uVar4 != '\0') {
      local_58 = (PSRWLOCK)GetCurrentThreadId();
      iVar2 = *(int *)((int)param_1 + 0xa8);
      if ((*(char *)(iVar2 + 4) == '\0') ||
         ((((pGVar5 = (LPCGUID)(iVar2 + 0x18), pGVar5->Data1 == 0 && (*(int *)(iVar2 + 0x1c) == 0))
           && (*(int *)(iVar2 + 0x20) == 0)) && (*(int *)(iVar2 + 0x24) == 0)))) {
        pGVar5 = (LPCGUID)0x0;
      }
      local_18 = 0;
      local_24 = &local_58;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_1c = 4;
      local_34 = &DAT_00401538;
      local_2c = 8;
      FUN_00402293((int)this,&DAT_00401c97,(LPCGUID)(iVar2 + 8),pGVar5,4,local_54);
      uVar6 = extraout_EDX_01;
    }
  }
  if (*(int *)((int)param_1 + 0xbc) == 0) {
    FUN_004048b1((undefined4 *)((int)param_1 + 0xb0));
    uVar6 = extraout_EDX_02;
  }
  ExceptionList = local_10;
  FUN_00406f80(local_14 ^ (uint)&stack0xfffffffc,uVar6);
  return;
}



/* Function: FUN_0040552a */

void __fastcall FUN_0040552a(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_00404914((undefined4 *)(param_1 + 0xb0));
  }
  FUN_00406033((undefined4 *)(param_1 + 0xac));
  FUN_0040555a((int *)(param_1 + 4));
  return;
}



/* Function: FUN_0040555a */

void __fastcall FUN_0040555a(int *param_1)

{
  FUN_0040306b(param_1 + 0x25);
  FUN_00404d63((int)(param_1 + 10));
  FUN_00405889(param_1);
  return;
}



/* Function: FUN_00405580 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_00405580(int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  HRESULT HVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  LPWSTR pszPath;
  undefined4 unaff_retaddr;
  undefined4 uVar5;
  undefined4 local_f0;
  int local_ec;
  undefined1 local_e7;
  PSRWLOCK local_e4;
  int local_e0;
  int *local_dc;
  undefined **local_d8;
  int local_d4;
  undefined1 local_d0;
  undefined4 local_ac;
  char *local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [88];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined ***local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xe0;
  local_8 = 0x40558f;
  local_a8 = "PackagedCWALauncher";
  local_d4 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_40 = 0;
  local_3c = 0;
  memset(local_98,0,0x58);
  local_30 = &local_d4;
  local_38 = 1;
  local_34 = 0;
  local_2c = (int *)0x0;
  local_24 = &local_d8;
  local_28 = 0;
  local_18 = &local_ac;
  local_20 = 0;
  local_1c = 0;
  local_d8 = &PTR_FUN_0040101c;
  FUN_004053df(&local_d8);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  HVar3 = CoInitialize((LPVOID)0x0);
  if (HVar3 < 0) {
    uVar5 = 0x19;
LAB_004057c6:
    FUN_004042f9(unaff_retaddr,uVar5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)(HVar3);
    return;
  }
  local_e7 = 1;
  local_8._0_1_ = 2;
  if (param_1 < 3) {
    HVar3 = -0x7ff8ffa9;
    uVar5 = 0x1f;
    goto LAB_004057c6;
  }
  local_ec = *(int *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 4);
  pszPath = (LPWSTR)0x0;
  local_f0 = uVar5;
  local_e0 = local_ec;
  if (3 < param_1) {
    pszPath = GetCommandLineW();
    iVar4 = 3;
    do {
      pszPath = PathGetArgsW(pszPath);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_dc = (int *)0x0;
  local_8._0_1_ = 3;
  HVar3 = CoCreateInstance((IID *)&DAT_00401524,(LPUNKNOWN)0x0,1,(IID *)&LAB_00401514,&local_dc);
  if (HVar3 < 0) {
    uVar5 = 0x35;
    goto LAB_004057c6;
  }
  FUN_00406997(&local_d8,&local_f0,&local_ec);
  pcVar1 = *(code **)(*local_dc + 0xc);
  (*(code *)PTR_guard_check_icall_00409170)(local_dc,uVar5,local_e0,pszPath,0);
  HVar3 = (*pcVar1)();
  if (HVar3 < 0) {
    uVar5 = 0x3f;
    goto LAB_004057c6;
  }
  FUN_00405bc8((int *)&local_d8);
  FUN_00405817((int *)&local_dc);
  CoUninitialize();
  bVar2 = true;
  local_d8 = &PTR_FUN_0040101c;
  if (local_2c != (int *)0x0) {
    FUN_004060f5(&local_d8,&local_e4);
    if ((local_2c == (int *)0x0) || (*local_2c != 1)) {
      bVar2 = false;
      FUN_00406033(&local_2c);
    }
    if (local_e4 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_e4);
    }
    if (!bVar2) goto LAB_004057b0;
  }
  if (*local_30 == 1) {
    local_e0 = local_30[0x11];
    iVar4 = -0x7ff8fdc2;
    if (local_e0 < 0) {
      iVar4 = local_e0;
    }
    FUN_0040606a(local_30,iVar4,&local_e0);
    FUN_0040616c((int *)&local_d8);
  }
LAB_004057b0:
  FUN_0040552a((int)&local_d8);
  FUN_00407655(extraout_ECX,extraout_EDX);
  return;
}



/* Function: FUN_004057d2 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_004057d2(int param_1,int param_2)

{
  FUN_00405580(param_1,param_2);
  FUN_00405806();
  return;
}



/* Function: Catch_All@004057f1 */

undefined * Catch_All_004057f1(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_004041d1(*(void **)(unaff_EBP + 4));
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  return &DAT_00405803;
}



/* Function: FUN_00405806 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00405806(void)

{
  return;
}



/* Function: FUN_00405817 */

void __fastcall FUN_00405817(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004079b4;
  local_10 = ExceptionList;
  uVar3 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00409170)(piVar1,uVar3);
    (*pcVar2)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00405872 */

void __fastcall FUN_00405872(int param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x0040587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CoUninitialize();
    return;
  }
  return;
}



/* Function: FUN_00405889 */

void __fastcall FUN_00405889(int *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == 1) {
    *param_1 = 2;
    puVar1 = FUN_00405078();
    FUN_00406a35(*(uint **)(puVar1 + 4),(LPCGUID)(param_1 + 2));
  }
  *param_1 = 3;
  return;
}



/* Function: FUN_004058b7 */

void __fastcall FUN_004058b7(PSRWLOCK param_1)

{
  int *this;
  bool bVar1;
  PSRWLOCK pRVar2;
  PSRWLOCK local_8;
  
  bVar1 = true;
  pRVar2 = param_1 + 0x2b;
  if (pRVar2->Ptr != (PVOID)0x0) {
    local_8 = param_1;
    FUN_004060f5(param_1,&local_8);
                    /* WARNING: Load size is inaccurate */
    if (((int *)pRVar2->Ptr == (int *)0x0) || (*pRVar2->Ptr != 1)) {
      bVar1 = false;
      FUN_00406033(pRVar2);
    }
    if (local_8 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_8);
    }
    if (!bVar1) {
      return;
    }
  }
  this = (int *)param_1[0x2a].Ptr;
  if (*this == 1) {
    local_8 = (PSRWLOCK)this[0x11];
    pRVar2 = (PSRWLOCK)0x8007023e;
    if ((int)local_8 < 0) {
      pRVar2 = local_8;
    }
    FUN_0040606a(this,(int)pRVar2,(int *)&local_8);
    FUN_0040616c((int *)param_1);
  }
  return;
}



/* Function: FUN_00405937 */

void __fastcall FUN_00405937(PSRWLOCK param_1)

{
  PSRWLOCK local_8;
  
  local_8 = param_1;
  FUN_004060f5(param_1,&local_8);
  *(undefined4 *)param_1[0x2a].Ptr = 2;
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
  }
  return;
}



/* Function: FUN_00405970 */

undefined4 __thiscall FUN_00405970(void *this,undefined4 *param_1)

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
    (*(code *)PTR_guard_check_icall_00409170)(param_1[4]);
    cVar3 = (*pcVar1)();
    if (cVar3 == '\0') {
      puVar4 = FUN_00405078();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00402328(*(uint **)(puVar4 + 4),0,0x6000);
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
          FUN_004027ab(extraout_ECX,&DAT_00401782,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX,&local_40,&local_3c,&local_38,&local_34,&local_30,&local_2c,
                       &local_28,&local_24,&local_20,&local_1c,&local_18,&local_14,&local_10,
                       &local_c,&local_8);
        }
      }
    }
    else {
      puVar4 = FUN_00405078();
      if (2 < **(uint **)(puVar4 + 4)) {
        uVar5 = FUN_00402328(*(uint **)(puVar4 + 4),0,0x4000);
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
          FUN_00402534(extraout_ECX_00,&DAT_00401d36,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),
                       extraout_ECX_00,local_50,&local_48,&local_44,&local_8,&local_c,&local_10,
                       &local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c,
                       &local_30,&local_34,&local_38,&local_3c,&local_40);
        }
      }
    }
  }
  FUN_004060f5(this,&local_8);
  iVar2 = *(int *)((int)this + 0xa8);
  iVar6 = param_1[2];
  if ((iVar6 != *(int *)(iVar2 + 0x44)) &&
     ((iVar6 != *(int *)(iVar2 + 0x38) || (-1 < *(int *)(iVar2 + 0x38))))) {
    iVar6 = FUN_00403625((void *)(iVar2 + 0x3c),param_1);
  }
  if (local_8 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_8);
    iVar6 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}



/* Function: FUN_00405bc8 */

void __fastcall FUN_00405bc8(int *param_1)

{
  code *pcVar1;
  uint *this;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  PSRWLOCK local_1c;
  undefined4 *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_004060f5(param_1,&local_1c);
  uVar2 = FUN_0040606a((void *)param_1[0x2a],0,(int *)&local_18);
  if (local_1c != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_1c);
  }
  if ((char)uVar2 == '\0') {
    puVar3 = FUN_00405078();
    this = *(uint **)(puVar3 + 4);
    if (5 < *this) {
      uVar4 = FUN_00402328(this,0,0x4000);
      if ((char)uVar4 != '\0') {
        local_1c = (PSRWLOCK)GetCurrentThreadId();
        uStack_14 = 0;
        uStack_c = 0;
        local_18 = &uStack_10;
        uStack_10 = 0x1000000;
        FUN_00402735((int)this,&DAT_00401729,(LPCGUID)(param_1[0x2a] + 8),extraout_ECX,&local_18,
                     &uStack_14,&local_1c);
      }
    }
  }
  else {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_00409170)();
    (*pcVar1)();
  }
  if (param_1[0x2f] != 0) {
    FUN_00404914(param_1 + 0x2c);
  }
  return;
}



/* Function: FUN_00405caa */

DWORD * FUN_00405caa(char param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  
  iVar3 = DAT_004084f0;
  DVar4 = GetCurrentThreadId();
  pDVar1 = (DWORD *)(iVar3 + (DVar4 % 10) * 4);
  pDVar5 = (DWORD *)*pDVar1;
  while( true ) {
    if (pDVar5 == (DWORD *)0x0) {
      if ((param_1 == '\0') || (pDVar5 = (DWORD *)FUN_00402f82(0,0xc), pDVar5 == (DWORD *)0x0)) {
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



/* Function: FUN_00405d3c */

void __fastcall FUN_00405d3c(int *param_1)

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



/* Function: FUN_00405d81 */

undefined4 __thiscall FUN_00405d81(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_004035c2(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_00405dd1(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_00405dd1 */

void __thiscall FUN_00405dd1(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00404313(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00405e08 */

void __fastcall FUN_00405e08(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  int *piVar2;
  undefined4 extraout_EDX;
  int iVar3;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined8 uVar5;
  int unaff_retaddr;
  int local_220 [2];
  HANDLE local_218;
  HANDLE local_214;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00402b90(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00405dd1(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_004035c2(extraout_ECX);
    uVar4 = extraout_EDX;
    goto LAB_00405f1b;
  }
  FUN_00406301(&local_214,&local_218);
  local_220[0] = 0;
  local_220[1] = 0;
  uVar5 = FUN_00404529(local_210,local_220);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 < 0) {
    FUN_0040413b(unaff_retaddr,100);
    FUN_0040413b(unaff_retaddr,0x6d);
    iVar3 = 299;
LAB_00405f49:
    FUN_0040413b(unaff_retaddr,iVar3);
    uVar4 = extraout_EDX_03;
  }
  else {
    piVar2 = (int *)(local_220[0] << 2);
    if (piVar2 == (int *)0x0) {
      iVar3 = FUN_004061e9((int)local_210,&local_214,param_2);
      uVar4 = extraout_EDX_02;
      if (iVar3 < 0) {
        iVar3 = 0x134;
        goto LAB_00405f49;
      }
    }
    else {
      *param_2 = piVar2;
      *(int *)*param_2 = *piVar2 + 1;
    }
  }
  if (local_218 != (HANDLE)0x0) {
    FUN_00404340(local_218);
    uVar4 = extraout_EDX_00;
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00404313(local_214);
    uVar4 = extraout_EDX_01;
  }
LAB_00405f1b:
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_00405f5b */

int __fastcall FUN_00405f5b(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  HANDLE hHeap;
  int *piVar5;
  int *local_8;
  
  pcVar1 = DAT_0040850c;
  if (DAT_0040852c == '\0') {
    local_8 = param_1;
    if (DAT_0040850c != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00409170)();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') goto LAB_00405ff8;
    }
    iVar3 = FUN_00406301(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar5 = local_8;
    if (*param_1 == 0) {
      FUN_00405dd1(param_1 + 2,0);
      FUN_00405dd1(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar4 = GetLastError();
        FUN_00404340(local_8);
        SetLastError(DVar4);
      }
      FUN_00406197((int)param_1);
      DVar4 = 0;
      hHeap = GetProcessHeap();
      iVar3 = HeapFree(hHeap,DVar4,param_1);
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      iVar3 = FUN_00404340(piVar5);
    }
  }
  else {
LAB_00405ff8:
    *param_1 = *param_1 + -1;
    iVar3 = *param_1;
  }
  return iVar3;
}



/* Function: FUN_00406006 */

void __fastcall FUN_00406006(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_00405158((int *)(*param_1 + 4));
  }
  InitOnceComplete((LPINIT_ONCE)*param_1,param_1[1],(LPINIT_ONCE)*param_1 + 1);
  return;
}



/* Function: FUN_00406033 */

void __fastcall FUN_00406033(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (pvVar3 = (void *)*param_1, pvVar3 != (void *)0x0)) {
      FUN_0040555a((int *)((int)pvVar3 + 4));
      operator_delete(pvVar3);
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_0040606a */

undefined4 __thiscall FUN_0040606a(void *this,int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_6c [92];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004079d7;
  local_10 = ExceptionList;
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
  ExceptionList = &local_10;
  memset(local_6c,0,0x58);
  FUN_00403f77((int)local_6c);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}



/* Function: FUN_004060f5 */

undefined4 * __thiscall FUN_004060f5(void *this,undefined4 *param_1)

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



/* Function: FUN_0040616c */

void __fastcall FUN_0040616c(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_00409170)();
  (*pcVar1)();
  return;
}



/* Function: FUN_00406197 */

void __fastcall FUN_00406197(int param_1)

{
  FUN_004062a6((int *)(param_1 + 0x18));
  FUN_004061c2((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00404313(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_004061c2 */

void __fastcall FUN_004061c2(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00404313((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00404313((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_004061e9 */

int __fastcall FUN_004061e9(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  int unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00402f82(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_0040413b(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_004042ed();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_0040436b(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_0040413b(unaff_retaddr,0x14b);
    }
    else {
      FUN_00406364(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_004061c2(local_10);
  }
  FUN_00406344((int *)&local_18);
  return iVar3;
}



/* Function: FUN_004062a6 */

void __fastcall FUN_004062a6(int *param_1)

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
        FUN_004046fb((int)lpMem + 8);
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



/* Function: FUN_00406301 */

void __thiscall FUN_00406301(void *this,undefined4 *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  HANDLE hHandle;
  void *unaff_retaddr;
  
                    /* WARNING: Load size is inaccurate */
  hHandle = *this;
  DVar2 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar2 == 0x102) {
    hHandle = (HANDLE)0x0;
  }
  else if ((DVar2 != 0) && (DVar2 != 0x80)) {
    FUN_004042b1(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00406344 */

void __fastcall FUN_00406344(int *param_1)

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



/* Function: FUN_00406364 */

undefined4 * __thiscall FUN_00406364(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_004063c8 */

void __fastcall
FUN_004063c8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00403301(param_7);
  local_8 = 0;
  FUN_004064e2(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_0040640f */

void * __fastcall FUN_0040640f(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint _MaxCount;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    _MaxCount = FUN_004035fd(param_3);
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



/* Function: FUN_0040647f */

char * __fastcall FUN_0040647f(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *_MaxCount;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *pcVar1;
  
  pcVar1 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    _MaxCount = FUN_004035df(param_3);
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



/* Function: FUN_004064e2 */

void __fastcall
FUN_004064e2(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00406a8e(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00406508 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00406508(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  code *pcVar1;
  int local_1460 [22];
  undefined1 local_1408 [1024];
  wchar_t local_1008 [2046];
  undefined4 uStack_c;
  
  uStack_c = 0x40651a;
  FUN_00403cc0(param_1,param_2,param_3,0,0,param_6,3,param_7,param_8,param_1,local_1008,param_1,
               local_1408,param_1,local_1460);
  FUN_00403f77((int)local_1460);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040655a */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040655a(undefined4 param_1,undefined4 param_2)

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
  undefined4 local_1420;
  undefined4 local_141c;
  char local_1415;
  wchar_t local_1414 [2048];
  undefined1 local_414 [1024];
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004079fa;
  local_10 = ExceptionList;
  uStack_14 = 0x406577;
  uVar4 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1415 = DAT_00408514 != (code *)0x0;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_146c = *in_stack_00000014;
  local_1468 = in_stack_00000014[1];
  local_141c = param_1;
  local_1448 = FUN_004030fb(local_146c);
  local_1474 = 0;
  local_1470 = 0;
  if (*(int *)(extraout_EDX + 8) == 1) {
    local_1470 = 8;
  }
  LOCK();
  UNLOCK();
  local_1464 = DAT_00408554 + 1;
  local_1460 = 0;
  DAT_00408554 = DAT_00408554 + 1;
  local_145c = GetCurrentThreadId();
  pcVar2 = DAT_00408538;
  local_1420 = local_141c;
  local_1450 = 
  "onecore\\base\\appmodel\\execmodel\\desktopappx\\packagedcwalauncher\\packagedcwalauncher.cpp";
  local_1458 = 0;
  local_1454 = 0;
  local_1444 = 0;
  local_1434 = 0;
  uStack_1430 = 0;
  uStack_142c = 0;
  local_1440 = 0;
  uStack_143c = 0;
  uStack_1438 = 0;
  local_144c = param_2;
  if (DAT_00408538 == (code *)0x0) {
    local_1428 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_00409170)(uVar4);
    local_1428 = (*pcVar2)();
  }
  pcVar2 = DAT_004084ec;
  if (DAT_004084ec != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(&local_1474);
    (*pcVar2)();
  }
  pcVar2 = DAT_00408508;
  if (DAT_00408508 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(&local_1474,local_414,0x400);
    (*pcVar2)();
  }
  pcVar2 = DAT_00408504;
  if (DAT_00408504 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)(&local_1474);
    (*pcVar2)();
  }
  pcVar2 = DAT_0040851c;
  if (((DAT_0040851c != (code *)0x0) && (local_1415 == '\0')) && ((local_1470 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_00409170)(&local_1474);
    (*pcVar2)();
  }
  if (-1 < local_146c) {
    FUN_004042ed();
  }
  pcVar2 = DAT_004084d4;
  if (DAT_004084dc == '\0') {
    if (DAT_004084d4 == (code *)0x0) {
      BVar5 = IsDebuggerPresent();
      cVar3 = BVar5 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_00409170)();
      cVar3 = (*pcVar2)();
    }
    if (cVar3 != '\0') goto LAB_0040674f;
  }
  else {
LAB_0040674f:
    if ((local_1470 & 2) == 0) {
      bVar1 = true;
      goto LAB_0040675f;
    }
  }
  bVar1 = false;
LAB_0040675f:
  pcVar2 = DAT_004084e0;
  if ((local_1415 != '\0') || (bVar1)) {
    if ((DAT_004084e0 != (code *)0x0) && (DAT_004084f4 == '\0')) {
      (*(code *)PTR_guard_check_icall_00409170)(&local_1474,local_1414,0x800);
      (*pcVar2)();
    }
    if (local_1414[0] == L'\0') {
      FUN_00402cc4(local_1414,0x800,(int)&local_1474);
    }
    if (bVar1) {
      OutputDebugStringW(local_1414);
    }
  }
  else if ((DAT_004084e0 != (code *)0x0) && (DAT_004084f4 == '\0')) {
    (*(code *)PTR_guard_check_icall_00409170)(&local_1474,0,0);
    (*pcVar2)();
  }
  pcVar2 = DAT_00408510;
  if ((((local_1470 & 4) != 0) || (DAT_004084e4 != '\0')) && (DAT_00408510 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_00409170)();
    (*pcVar2)();
  }
  local_8 = 0xffffffff;
  if ((local_1470 & 1) == 0) goto LAB_00406833;
  do {
    FUN_00403f77((int)&local_1474);
LAB_00406833:
    pcVar2 = DAT_00408514;
    if (local_1415 != '\0') {
      (*(code *)PTR_guard_check_icall_00409170)(&local_1474,local_1414);
      (*pcVar2)();
    }
    FUN_00403934();
  } while( true );
}



/* Function: FUN_00406872 */

void __fastcall
FUN_00406872(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  FUN_00406b34(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Function: FUN_00406883 */

void __fastcall FUN_00406883(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  int in_stack_00000010;
  uint in_stack_00000014;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  local_c = FUN_00403301(in_stack_00000014);
  local_8 = 0;
  FUN_00406872(param_1,param_2,0x401394,extraout_ECX,extraout_ECX,in_stack_00000010,&local_10,
               (short *)0x0);
  return;
}



/* Function: FUN_004068c9 */

uint __fastcall FUN_004068c9(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int in_stack_00000010;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00403541(param_1,param_2,0x401394,param_1,param_1,in_stack_00000010);
  local_10 = uVar1;
  local_c = FUN_00403301(uVar1);
  local_8 = 0;
  FUN_00406872(param_1,param_2,0x401394,extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_10
               ,(short *)0x0);
  return uVar1;
}



/* Function: FUN_00406923 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00406923(void *param_1)

{
  int *piVar1;
  undefined4 extraout_EDX;
  int local_1020 [3];
  int local_1014;
  int iStack_1010;
  int iStack_100c;
  undefined1 local_1008 [4096];
  uint local_8;
  
  local_8 = DAT_00408100 ^ (uint)&stack0xfffffffc;
  memset(local_1008,0,0x1000);
  piVar1 = FUN_00406bb1(param_1,local_1020);
  local_1014 = *piVar1;
  iStack_1010 = piVar1[1];
  iStack_100c = piVar1[2];
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00406997 */

void __thiscall FUN_00406997(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint *this_00;
  undefined *puVar1;
  uint uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 local_58;
  undefined4 local_54;
  _EVENT_DATA_DESCRIPTOR local_50 [2];
  undefined4 local_30 [4];
  undefined4 local_20 [5];
  uint local_c;
  
  local_c = DAT_00408100 ^ (uint)&local_58;
  puVar1 = FUN_00405078();
  this_00 = *(uint **)(puVar1 + 4);
  uVar3 = extraout_EDX;
  if (5 < *this_00) {
    uVar2 = FUN_00402328(this_00,0,0x4000);
    uVar3 = extraout_EDX_00;
    if ((char)uVar2 != '\0') {
      local_58 = *param_2;
      local_54 = *param_1;
      FUN_00402958(&local_58,local_20);
      FUN_00402958(&local_54,local_30);
      FUN_00402293((int)this_00,&DAT_004019e6,(LPCGUID)(*(int *)((int)this + 0xa8) + 8),(LPCGUID)0x0
                   ,4,local_50);
      uVar3 = extraout_EDX_01;
    }
  }
  FUN_00406f80(local_c ^ (uint)&local_58,uVar3);
  return;
}



/* Function: FUN_00406a35 */

void __fastcall FUN_00406a35(uint *param_1,LPCGUID param_2)

{
  uint uVar1;
  int extraout_ECX;
  LPCGUID extraout_EDX;
  LPCGUID extraout_EDX_00;
  LPCGUID pGVar2;
  undefined1 auStack_34 [4];
  _EVENT_DATA_DESCRIPTOR local_30 [2];
  uint local_c;
  
  local_c = DAT_00408100 ^ (uint)auStack_34;
  pGVar2 = param_2;
  if (5 < *param_1) {
    uVar1 = FUN_00402328(param_1,0,0x4000);
    pGVar2 = extraout_EDX;
    if ((char)uVar1 != '\0') {
      FUN_00402293(extraout_ECX,&DAT_004019ba,param_2,(LPCGUID)0x0,2,local_30);
      pGVar2 = extraout_EDX_00;
    }
  }
  FUN_00406f80(local_c ^ (uint)auStack_34,pGVar2);
  return;
}



/* Function: FUN_00406a8e */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00406a8e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_00408100 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00403cc0(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_00406f80(local_c ^ (uint)&local_1474,extraout_EDX);
    return;
  }
  FUN_00403f77((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406b34 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00406b34(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int *param_7,short *param_8)

{
  code *pcVar1;
  undefined4 extraout_EDX;
  int local_1468;
  byte local_1464;
  undefined1 local_1410 [1024];
  wchar_t local_1010 [2050];
  uint local_c;
  
  local_c = DAT_00408100 ^ (uint)&local_1468;
  FUN_00403cc0(param_1,param_2,param_3,0,0,param_6,1,param_7,param_8,param_1,local_1010,param_1,
               local_1410,param_1,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_00406f80(local_c ^ (uint)&local_1468,extraout_EDX);
    return;
  }
  FUN_00403f77((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406bb1 */

int * __thiscall FUN_00406bb1(void *this,int *param_1)

{
  short sVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  code *extraout_ECX;
  code *pcVar5;
  undefined4 extraout_ECX_00;
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
  
  pcVar5 = DAT_00408524;
  local_5 = 0;
  psVar6 = in_stack_00000018;
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar1 != 0);
  iVar7 = (int)psVar6 - (int)(in_stack_00000018 + 1) >> 1;
  local_c = DAT_00408524;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  local_10 = this;
  if (pcVar5 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00409170)
              (local_28,in_stack_00000018 + iVar7,0x800 - iVar7,&local_5);
    piVar3 = (int *)(*local_c)();
    local_1c = *piVar3;
    iStack_18 = piVar3[1];
    iStack_14 = piVar3[2];
    *param_1 = local_1c;
    param_1[1] = iStack_18;
    param_1[2] = iStack_14;
    pcVar5 = extraout_ECX;
  }
  pvVar2 = local_10;
  if (*param_1 < 0) {
    FUN_00406872((int)local_10,0x48,0x401490,pcVar5,pcVar5,in_stack_00000014,param_1,
                 in_stack_00000018);
    return param_1;
  }
  *param_1 = -0x7ff8fdc2;
  uVar4 = FUN_00403301(0x8007023e);
  param_1[1] = uVar4;
  param_1[2] = 0;
  FUN_00404015((int)pvVar2,0x48,0x401490,extraout_ECX_00,extraout_ECX_00,in_stack_00000014,param_1,
               in_stack_00000018);
  pcVar5 = (code *)swi(3);
  piVar3 = (int *)(*pcVar5)();
  return piVar3;
}



/* Function: FUN_00406c90 */

undefined4 FUN_00406c90(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00406eef();
  DAT_00408198 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_004071a4(1);
  __set_app_type(iVar2);
  DAT_004085e0 = 0xffffffff;
  DAT_004085e4 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_004081ac;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_004081a0;
  FUN_00407200();
  if (DAT_004080c0 == 0) {
    __setusermatherr(FUN_00407200);
  }
  FUN_00407407();
  return 0;
}



/* Function: FUN_00406d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406d00(void)

{
  _DAT_0040819c = DAT_004081a8;
  _DAT_00408194 =
       __wgetmainargs(&DAT_00408188,(wchar_t ***)&DAT_0040818c,(wchar_t ***)&DAT_00408190,
                      DAT_004081a4,(_startupinfo *)&DAT_0040819c);
  return;
}



/* Function: FUN_00406d39 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_00406d39(void)

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
    if (DAT_004085d8 != 0) {
      iVar4 = DAT_004085d8;
      iVar3 = DAT_004085d8;
    }
    DAT_004085d8 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_00406d81;
    if (iVar4 == iVar5) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00406d81:
  if (DAT_004085dc == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_004085dc == 0) {
    DAT_004085dc = 1;
    iVar5 = FUN_00406eb8((undefined4 *)&DAT_00401110,(undefined4 *)&DAT_0040111c);
    if (iVar5 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_00408184 = 1;
  }
  if (DAT_004085dc == 1) {
    initterm(&DAT_004010f0,&DAT_0040110c);
    DAT_004085dc = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_004085d8 = 0;
    UNLOCK();
  }
  if ((DAT_004085e8 != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004085e8), pcVar2 = DAT_004085e8, BVar6 != 0
     )) {
    (*(code *)PTR_guard_check_icall_00409170)(0,2,0);
    (*pcVar2)();
  }
  DAT_00408180 = FUN_004057d2(DAT_00408188,DAT_0040818c);
  if (DAT_00408198 != 0) {
    if (DAT_00408184 == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_00408180;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_00408180);
}



/* Function: FUN_00406eb8 */

void __cdecl FUN_00406eb8(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_00409170)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_00406eef */

bool FUN_00406eef(void)

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
    iVar2 = *(int *)(IMAGE_NT_HEADERS32_004000f0.Signature + IMAGE_DOS_HEADER_00400000.e_lfanew + 8)
    ;
  }
  return iVar2 != 0;
}



/* Function: entry */

void entry(void)

{
  FUN_00407369();
  FUN_00406d39();
  return;
}



/* Function: FUN_00406f80 */

void __fastcall FUN_00406f80(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00408100) {
    return;
  }
  FUN_004074eb(param_1,param_2);
  return;
}



/* Function: FUN_00406f96 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_00406f96(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00407ce8;
  uStack_c = 0x406fa2;
  local_20[0] = DAT_004085e4;
  if (DAT_004085e4 == -1) {
    (*(code *)PTR_guard_check_icall_00409170)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_004085e4;
    local_24 = DAT_004085e0;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_004085e4 = local_20[0];
    DAT_004085e0 = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_00407030();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_00407030 */

void FUN_00407030(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_0040703f */

int __cdecl FUN_0040703f(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_00406f96(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: operator_delete */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040705c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,exception *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00407070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: Unwind@00407080 */

void __cdecl Unwind_00407080(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* Function: FUN_00407090 */

type_info * __thiscall FUN_00407090(void *this,byte param_1)

{
  type_info::~type_info((type_info *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (type_info *)this;
}



/* Function: FUN_004070c0 */

undefined4 FUN_004070c0(int *param_1)

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



/* Function: FUN_00407110 */

undefined4 FUN_00407110(void)

{
  SetUnhandledExceptionFilter(FUN_004070c0);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00407130 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00407130(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_004071a4 */

undefined4 __cdecl FUN_004071a4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00407130(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x004071e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00407200 */

undefined4 FUN_00407200(void)

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
  
  pcStack_10 = FUN_00407490;
  local_14 = ExceptionList;
  local_c = DAT_00408100 ^ 0x407d28;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00407330((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00407330 */

bool __cdecl FUN_00407330(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00407369 */

void FUN_00407369(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00408100 == 0xbb40e64e) || ((DAT_00408100 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00408100 & 0xffff0000, DAT_00408100 = local_8, uVar1 == 0)) {
      DAT_00408100 = 0xbb40e64f;
    }
  }
  DAT_00408140 = ~DAT_00408100;
  return;
}



/* Function: FUN_00407407 */

void FUN_00407407(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407420. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00408100 ^ (uint)&param_2;
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



/* Function: FUN_00407490 */

void __cdecl
FUN_00407490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00408100,FUN_00406f80,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_004074bb */

void __cdecl FUN_004074bb(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_004074eb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004074eb(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_004082c0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_004082c4 = &stack0x00000004;
  _DAT_00408200 = 0x10001;
  _DAT_004081b0 = 0xc0000409;
  _DAT_004081b4 = 1;
  _DAT_004081c0 = 3;
  DAT_004081c4 = 2;
  DAT_004081c8 = DAT_00408100;
  DAT_004081cc = DAT_00408140;
  uStack_c = DAT_00408100;
  uStack_8 = DAT_00408140;
  _DAT_004081bc = unaff_retaddr;
  _DAT_0040828c = in_GS;
  _DAT_00408290 = in_FS;
  _DAT_00408294 = in_ES;
  _DAT_00408298 = in_DS;
  _DAT_0040829c = unaff_EDI;
  _DAT_004082a0 = unaff_ESI;
  _DAT_004082a4 = unaff_EBX;
  _DAT_004082a8 = param_2;
  _DAT_004082ac = param_1;
  _DAT_004082b0 = in_EAX;
  _DAT_004082b4 = unaff_EBP;
  DAT_004082b8 = unaff_retaddr;
  _DAT_004082bc = in_CS;
  _DAT_004082c8 = in_SS;
  FUN_004074bb((_EXCEPTION_POINTERS *)&PTR_DAT_00401004);
  return;
}



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x004075ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040760b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0040762f. Too many branches */
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



/* Function: FUN_00407655 */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00407655(undefined4 param_1,undefined4 param_2)

{
  uint unaff_EBP;
  
  FUN_00406f80(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP,param_2);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00408100 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00408100 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00408100 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
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
  
                    /* WARNING: Could not recover jumptable at 0x00407751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: Unwind@0040793b */

void Unwind_0040793b(void)

{
  int unaff_EBP;
  
  FUN_004053c1((PSRWLOCK)(unaff_EBP + -0xd4));
  return;
}



/* Function: Unwind@00407946 */

void Unwind_00407946(void)

{
  int unaff_EBP;
  
  FUN_00405872(unaff_EBP + -0xe4);
  return;
}



/* Function: Unwind@00407951 */

void Unwind_00407951(void)

{
  int unaff_EBP;
  
  FUN_00405817((int *)(unaff_EBP + -0xd8));
  return;
}



/* Function: FUN_00407a20 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_00407a20(void)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_004078c8;
  if (DAT_0040802c != (int *)0x0) {
    puVar1 = (undefined1 *)FUN_00405f5b(DAT_0040802c);
  }
  return puVar1;
}



/* Function: FUN_00407a50 */

void FUN_00407a50(void)

{
  FUN_00405d3c((int *)&DAT_00408150);
  return;
}



