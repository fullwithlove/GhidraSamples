/* Function: FUN_004020f2 */

void FUN_004020f2(int param_1,byte *param_2,LPCGUID param_3,LPCGUID param_4,ULONG param_5,
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
  local_8 = 0x34f;
  EventWriteTransfer(*(REGHANDLE *)(param_1 + 0x18),&local_18,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_00402187 */

uint __thiscall FUN_00402187(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 | param_2;
  if (uVar1 == 0) {
LAB_004021be:
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = *(uint *)((int)this + 0xc) & param_2;
    if ((param_1 & *(uint *)((int)this + 8)) != 0 || uVar1 != 0) {
      uVar1 = *(uint *)((int)this + 0x10) & param_1;
      if ((uVar1 == *(uint *)((int)this + 0x10)) &&
         ((*(uint *)((int)this + 0x14) & param_2) == *(uint *)((int)this + 0x14)))
      goto LAB_004021be;
    }
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}



/* Function: FUN_004021ca */

void __thiscall FUN_004021ca(void *this,undefined4 *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  
                    /* WARNING: Load size is inaccurate */
  psVar4 = *this;
  if (psVar4 == (short *)0x0) {
    psVar4 = (short *)&DAT_00401250;
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



/* Function: FUN_00402220 */

void FUN_00402220(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
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
      (*(code *)PTR_guard_check_icall_0040a1dc)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9]);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_004022a3 */

void __fastcall FUN_004022a3(undefined4 *param_1)

{
  REGHANDLE RegHandle;
  
  RegHandle = *(REGHANDLE *)(param_1 + 6);
  *param_1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  EventUnregister(RegHandle);
  return;
}



/* Function: FUN_004022c3 */

void __fastcall FUN_004022c3(PVOID param_1,undefined4 param_2,undefined4 param_3)

{
  PREGHANDLE RegHandle;
  int iVar1;
  code *pcVar2;
  ULONG UVar3;
  undefined4 extraout_EDX;
  GUID local_1c;
  uint local_c;
  
  local_c = DAT_00409180 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)((int)param_1 + 4);
  local_1c.Data1 = *(ulong *)(iVar1 + -0x10);
  local_1c._4_4_ = *(undefined4 *)(iVar1 + -0xc);
  local_1c.Data4._0_4_ = *(undefined4 *)(iVar1 + -8);
  local_1c.Data4._4_4_ = *(undefined4 *)(iVar1 + -4);
  RegHandle = (PREGHANDLE)((int)param_1 + 0x18);
  if (*(int *)RegHandle != 0 || *(int *)((int)param_1 + 0x1c) != 0) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    param_2 = extraout_EDX;
  }
  *(undefined4 *)((int)param_1 + 0x24) = param_3;
  *(undefined4 *)((int)param_1 + 0x20) = param_2;
  UVar3 = EventRegister(&local_1c,FUN_00402220,param_1,RegHandle);
  if (UVar3 == 0) {
    EventSetInformation(*(undefined4 *)RegHandle,*(undefined4 *)((int)param_1 + 0x1c),2,
                        *(undefined2 **)((int)param_1 + 4),**(undefined2 **)((int)param_1 + 4));
  }
  FUN_004070c0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402356 */

int * __thiscall FUN_00402356(void *this,int *param_1)

{
  ushort uVar1;
  int iVar2;
  
  param_1[2] = 2;
  *param_1 = (int)(param_1 + 6);
  param_1[1] = 0;
  param_1[3] = 0;
  uVar1 = *(ushort *)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
  iVar2 = *this;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[4] = iVar2;
  param_1[6] = (uint)uVar1;
  return param_1;
}



/* Function: FUN_00402392 */

void __fastcall
FUN_00402392(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 *param_9,void *param_10,undefined4 *param_11,undefined4 param_12,
            void *param_13,undefined4 *param_14,undefined4 param_15,void *param_16,
            undefined4 *param_17,undefined4 param_18,void *param_19,undefined4 *param_20,
            undefined4 param_21,void *param_22,undefined4 *param_23,undefined4 param_24,
            void *param_25,undefined4 *param_26,undefined4 param_27,void *param_28,
            undefined4 *param_29,undefined4 param_30,void *param_31,undefined4 *param_32,
            undefined4 param_33,void *param_34,undefined4 param_35,undefined4 param_36)

{
  _EVENT_DATA_DESCRIPTOR local_2b8 [2];
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  int local_248 [8];
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  int local_208 [8];
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  int local_1c8 [8];
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_188 [8];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148 [8];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108 [8];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  local_18 = param_36;
  local_28 = param_35;
  local_14 = 0;
  local_10 = 1;
  local_c = 0;
  local_24 = 0;
  local_20 = 4;
  local_1c = 0;
  FUN_00402356(param_34,local_48);
  local_5c = 0;
  local_58 = param_33;
  local_54 = 0;
  local_4c = 0;
  local_68 = *param_32;
  local_64 = 0;
  local_50 = 1;
  local_60 = 8;
  FUN_00402356(param_31,local_88);
  local_98 = param_30;
  local_94 = 0;
  local_8c = 0;
  local_a4 = 0;
  local_a8 = *param_29;
  local_9c = 0;
  local_90 = 1;
  local_a0 = 8;
  FUN_00402356(param_28,local_c8);
  local_d8 = param_27;
  local_d4 = 0;
  local_cc = 0;
  local_e4 = 0;
  local_e8 = *param_26;
  local_dc = 0;
  local_d0 = 1;
  local_e0 = 8;
  FUN_00402356(param_25,local_108);
  local_118 = param_24;
  local_114 = 0;
  local_110 = 1;
  local_10c = 0;
  local_128 = *param_23;
  local_124 = 0;
  local_120 = 8;
  local_11c = 0;
  FUN_00402356(param_22,local_148);
  local_158 = param_21;
  local_154 = 0;
  local_14c = 0;
  local_164 = 0;
  local_168 = *param_20;
  local_15c = 0;
  local_150 = 1;
  local_160 = 8;
  FUN_00402356(param_19,local_188);
  local_198 = param_18;
  local_194 = 0;
  local_18c = 0;
  local_1a4 = 0;
  local_1a8 = *param_17;
  local_19c = 0;
  local_190 = 1;
  local_1a0 = 8;
  FUN_00402356(param_16,local_1c8);
  local_1d8 = param_15;
  local_1d4 = 0;
  local_1cc = 0;
  local_1e4 = 0;
  local_1e8 = *param_14;
  local_1dc = 0;
  local_1d0 = 1;
  local_1e0 = 8;
  FUN_00402356(param_13,local_208);
  local_218 = param_12;
  local_214 = 0;
  local_20c = 0;
  local_224 = 0;
  local_228 = *param_11;
  local_21c = 0;
  local_210 = 1;
  local_220 = 8;
  FUN_00402356(param_10,local_248);
  local_254 = 0;
  local_250 = 0x10;
  local_24c = 0;
  local_258 = *param_9;
  local_268 = param_8;
  local_264 = 0;
  local_260 = 1;
  local_25c = 0;
  local_278 = param_7;
  local_288 = param_6;
  local_274 = 0;
  local_298 = *param_5;
  local_270 = 4;
  local_26c = 0;
  local_284 = 0;
  local_280 = 4;
  local_27c = 0;
  local_294 = 0;
  local_290 = 8;
  local_28c = 0;
  FUN_004020f2(0x409028,param_2,(LPCGUID)0x0,(LPCGUID)0x0,0x2b,local_2b8);
  FUN_004070c0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004026e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004026e0(void)

{
  _DAT_004095b8 = FUN_00403870;
  _DAT_004095d0 = FUN_00403880;
  _DAT_004095c4 = FUN_00403910;
  return;
}



/* Function: FUN_00402710 */

void FUN_00402710(void)

{
  DAT_004095a4 = FUN_00404360;
  return;
}



/* Function: FUN_00402730 */

void FUN_00402730(void)

{
  FUN_0040734f(FUN_004081a0);
  return;
}



/* Function: FUN_00402750 */

void FUN_00402750(void)

{
  FUN_0040734f(FUN_004081d0);
  return;
}



/* Function: FUN_00402770 */

void FUN_00402770(void)

{
  DAT_004095ac = FUN_00404ca0;
  DAT_0040957c = &PTR_s_WilError_03_00409050;
  DAT_00409594 = &DAT_004091d4;
  return;
}



/* Function: FUN_004027a0 */

void FUN_004027a0(void)

{
  DAT_004095d8 = FUN_00403120;
  DAT_004095b4 = DebugBreak;
  DAT_004095d4 = FUN_00403160;
  DAT_004095a0 = FUN_00404d40;
  DAT_00409590 = FUN_00404e00;
  DAT_004095b0 = FUN_00404d90;
  return;
}



/* Function: FUN_004027e3 */

undefined4 __fastcall FUN_004027e3(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_0040286a */

undefined4 __fastcall FUN_0040286a(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_004028d0 */

undefined4 __thiscall FUN_004028d0(void *this,int param_1)

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
    uVar2 = FUN_0040296b((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_00402927 */

undefined4 __cdecl FUN_00402927(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_004029be((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_0040296b */

undefined4 __fastcall FUN_0040296b(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_004029be */

undefined4 __fastcall
FUN_004029be(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_00407d06(param_1,uVar1,param_4,param_5);
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
  *(undefined ***)this = &PTR_FUN_00401010;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  o___std_exception_copy(param_1 + 4,this + 4);
  return this;
}



/* Function: FUN_00402a50 */

char * __fastcall FUN_00402a50(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_00402a70 */

undefined4 * __thiscall FUN_00402a70(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401010;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_0040736c(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00402aa5 */

undefined4 * __fastcall FUN_00402aa5(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = &PTR_FUN_00401010;
  return param_1;
}



/* Function: FUN_00402ad0 */

void __fastcall FUN_00402ad0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401010;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_00402af0 */

exception * __thiscall FUN_00402af0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401010;
  return (exception *)this;
}



/* Function: FUN_00402b13 */

short * __thiscall FUN_00402b13(void *this,short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 < 0x80000000) {
      FUN_004029be((int)param_1,uVar3,this,param_3,&stack0x00000010);
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



/* Function: FUN_00402b6a */

void __fastcall FUN_00402b6a(short *param_1,int param_2,int param_3)

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
  
  pcVar3 = DAT_00409584;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00407f49;
  local_10 = ExceptionList;
  local_14 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar3 != (code *)0x0) && (DAT_00409598 != '\0')) {
      (*(code *)PTR_guard_check_icall_0040a1dc)(param_3,param_1,param_2,local_14);
      (*pcVar3)();
      if (*param_1 != 0) goto LAB_00402dd9;
    }
    memset(local_214,0,0x200);
    pcVar3 = DAT_004095a0;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
      pcVar3 = extraout_ECX_00;
    }
    else if (DAT_004095a0 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040a1dc)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar3)();
      pcVar3 = extraout_ECX;
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_00402b13(pcVar3,param_1,psVar1,L"%hs!%p: ");
      pvVar4 = extraout_ECX_02;
    }
    else {
      local_218 = FUN_00402b13(pcVar3,param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
      pvVar4 = extraout_ECX_01;
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_00402b13(pvVar4,local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar2 = FUN_00402b13(local_214,local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar2 = FUN_00402b13((void *)0x0,psVar2,psVar1,L"    ");
      pvVar4 = this;
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar2 = FUN_00402b13(this,psVar2,psVar1,L"Msg:[%ws] ");
        pvVar4 = extraout_ECX_03;
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar2 = FUN_00402b13(pvVar4,psVar2,psVar1,L"CallContext:[%hs] ");
        pvVar4 = extraout_ECX_04;
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00402b13(pvVar4,psVar2,psVar1,&DAT_004013b4);
        }
        else {
          FUN_00402b13(pvVar4,psVar2,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_00402b13(pvVar4,psVar2,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_00402dd9:
  ExceptionList = local_10;
  FUN_004070c0(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402e02 */

uint * __thiscall FUN_00402e02(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_004031a1((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00402e26 */

LPVOID __fastcall FUN_00402e26(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_00407f79;
  local_10 = ExceptionList;
  uVar2 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_00409570 == (FARPROC)0x0) {
    if (DAT_004095f8 != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00409570 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_004095f8 = '\x01';
    if (DAT_00409570 == (FARPROC)0x0) {
      DAT_004095f8 = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_00409570;
  (*(code *)PTR_guard_check_icall_0040a1dc)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00402ed6 */

undefined4 * __thiscall FUN_00402ed6(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_00402f0f((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00402f0f */

void __fastcall FUN_00402f0f(undefined4 *param_1)

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



/* Function: FUN_00402f46 */

undefined4 __thiscall FUN_00402f46(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_00402f0f((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_00402f90;
    *piVar1 = 0;
    FUN_00402f0f((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_00402f90:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_00402f9f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00402f9f(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_004095e8;
  _DAT_004095ec = param_1;
  LOCK();
  DAT_004095e8 = DAT_004095e8 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00402fb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00402fb8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00409604;
  _DAT_00409574 = param_1;
  LOCK();
  DAT_00409604 = DAT_00409604 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00402fd1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00402fd1(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00409658;
  _DAT_00409600 = param_1;
  LOCK();
  DAT_00409658 = DAT_00409658 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00402ff0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402ff0(undefined4 param_1)

{
  _DAT_00409650 = param_1;
  return 1;
}



/* Function: FUN_0040300a */

void FUN_0040300a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_004095d4;
  if (DAT_004095d4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040303a */

void FUN_0040303a(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_00409180 ^ (uint)&stack0xfffffffc;
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
      FUN_0040286a(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_004070c0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403120 */

undefined * FUN_00403120(void)

{
  if (DAT_004095f0 == '\0') {
    FUN_0040303a((LPCWSTR)FUN_00402ff0,(uint *)0x0,&DAT_00409608,0x40);
    DAT_004095f0 = '\x01';
  }
  return &DAT_00409608;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00403150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_00403160 */

void FUN_00403160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_004031a1 */

uint __fastcall FUN_004031a1(uint param_1)

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



/* Function: FUN_00403376 */

DWORD __fastcall
FUN_00403376(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00407f9c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0040585d(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_004033e1 */

uint __fastcall
FUN_004033e1(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00407fbf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_0040585d(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_00403462 */

void __fastcall FUN_00403462(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_004033e1(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_0040347f */

char * __fastcall FUN_0040347f(char *param_1)

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



/* Function: FUN_0040349d */

int __fastcall FUN_0040349d(short *param_1)

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



/* Function: FUN_004034c5 */

void __thiscall FUN_004034c5(void *this,undefined4 *param_1)

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
  iVar10 = FUN_0040349d((short *)param_1[0x12]);
  iVar1 = FUN_0040349d((short *)param_1[0xf]);
  iVar2 = FUN_0040349d((short *)param_1[5]);
  pcVar3 = FUN_0040347f((char *)param_1[0x11]);
  pcVar4 = FUN_0040347f((char *)param_1[0xe]);
  pcVar5 = FUN_0040347f((char *)param_1[0xc]);
  pcVar6 = FUN_0040347f((char *)param_1[9]);
  pcVar7 = FUN_0040347f((char *)param_1[8]);
  pcVar8 = FUN_0040347f((char *)param_1[7]);
  pcVar9 = FUN_0040347f((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_00402f0f(this_00);
    FUN_00402f46(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_004058a4(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_00405914(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_00405914(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_00405914(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_00405914(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_00405914(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_00405914(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_004058a4(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_00405914(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_004058a4(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_00403658 */

undefined4 * __thiscall FUN_00403658(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401018;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_004034c5((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_004036a0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004036a0(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_00402b6a(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_00402f46(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_004070c0(local_8 ^ (uint)&stack0xfffffffc);
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
  FUN_00403780((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0040736c(this);
  }
  return this;
}



/* Function: FUN_00403780 */

void __fastcall FUN_00403780(undefined4 *param_1)

{
  FUN_00402f0f(param_1 + 0x1b);
  FUN_00402f0f(param_1 + 0x19);
  *param_1 = &PTR_FUN_00401010;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_004037ad */

void __fastcall FUN_004037ad(int *param_1,undefined2 *param_2,uint param_3)

{
  code *pcVar1;
  
  if (param_2 != (undefined2 *)0x0) {
    pcVar1 = *(code **)(*param_1 + 4);
    (*(code *)PTR_guard_check_icall_0040a1dc)();
    (*pcVar1)();
    FUN_00402927(param_2,param_3,L"std::exception: %hs");
  }
  return;
}



/* Function: FUN_004037ed */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_004037ed(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0040958c;
  (*(code *)PTR_guard_check_icall_0040a1dc)();
  iVar2 = (*pcVar1)();
  if ((iVar2 < 0) && (param_1 == 0)) {
    FUN_0040384b();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: Catch@0040381e */

undefined * Catch_0040381e(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x20),*(undefined2 **)(unaff_EBP + -0x1c),
               *(uint *)(unaff_EBP + -0x18));
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (-1 < iVar1) {
    iVar1 = -0x7ff8fdc2;
  }
  *(int *)(unaff_EBP + -0x14) = iVar1;
  return &DAT_00403848;
}



/* Function: Catch_All@00403842 */

undefined * Catch_All_00403842(void)

{
  return &DAT_00403848;
}



/* Function: FUN_0040384b */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040384b(void)

{
  return;
}



/* Function: FUN_00403870 */

void FUN_00403870(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_00403880 */

void FUN_00403880(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_00403658(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_00408600);
}



/* Function: FUN_004038b0 */

exception * __thiscall FUN_004038b0(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401018;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_00402ed6((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_00402ed6((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00403910 */

void FUN_00403910(uint *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00408005;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0;
  }
  pcVar1 = DAT_004095a4;
  *param_4 = 0;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(param_2,param_3,param_4);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) goto LAB_0040396d;
  }
  pcVar1 = DAT_004095c8;
  if (DAT_004095c8 == (code *)0x0) {
    if (DAT_0040958c != 0) {
      uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
    }
    FUN_00403a48((ThrowInfo *)0x0);
    return;
  }
  (*(code *)PTR_guard_check_icall_0040a1dc)(param_2,param_3,param_4);
  uVar2 = (*pcVar1)();
LAB_0040396d:
  *param_1 = uVar2;
  FUN_00403aed(uVar2);
  return;
}



/* Function: Catch@004039aa */

undefined * Catch_004039aa(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_00402b6a(psVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_004039e4;
}



/* Function: Catch@004039f4 */

undefined * Catch_004039f4(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x1c),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_004031a1(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_004039e4;
}



/* Function: Catch_All@00403a1c */

undefined * Catch_All_00403a1c(void)

{
  uint uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_004037ed(*(int *)(unaff_EBP + 0xc));
  if ((int)uVar1 < 0) {
    *(uint *)(unaff_EBP + -0x30) = uVar1;
    uVar1 = FUN_004031a1(uVar1);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(uint *)(unaff_EBP + -0x2c) = uVar1;
    return &DAT_004039e4;
  }
  return &DAT_00403ae4;
}



/* Function: FUN_00403a48 */

void FUN_00403a48(ThrowInfo *param_1)

{
  int unaff_EBP;
  void *unaff_retaddr;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(unaff_retaddr,param_1);
}



/* Function: Catch@00403a54 */

undefined * Catch_00403a54(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + -0x18);
  **(undefined1 **)(unaff_EBP + 0x14) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_00402b6a(psVar1,*(int *)(unaff_EBP + 0x10),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(unaff_EBP + -0x28) = *(uint *)(iVar2 + 0x10) >> 3 & 1;
  return &DAT_004039e4;
}



/* Function: Catch@00403a8e */

undefined * Catch_00403a8e(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x20),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007000e;
  uVar1 = FUN_004031a1(0x8007000e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_004039e4;
}



/* Function: Catch@00403ab6 */

undefined * Catch_00403ab6(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x24),*(undefined2 **)(unaff_EBP + 0xc),
               *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x30) = 0x8007023e;
  uVar1 = FUN_004031a1(0x8007023e);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(uint *)(unaff_EBP + -0x2c) = uVar1;
  return &DAT_004039e4;
}



/* Function: Catch_All@00403ade */

undefined * Catch_All_00403ade(void)

{
  return &DAT_00403ae4;
}



/* Function: FUN_00403aed */

void __fastcall FUN_00403aed(uint param_1)

{
  uint uVar1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  uVar1 = FUN_004031a1(param_1);
  *(uint *)(unaff_ESI + 4) = uVar1;
  *(undefined4 *)(unaff_ESI + 8) = unaff_EBX;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: FUN_00403b20 */

void __fastcall
FUN_00403b20(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
  puStack_c = &LAB_00408028;
  local_10 = ExceptionList;
  uVar3 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar4 = *param_8;
  param_15[2] = iVar4;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar4 = FUN_00402f9f(iVar4);
  }
  else if (param_7 == 1) {
    iVar4 = FUN_00402fb8(iVar4);
  }
  else if (param_7 == 2) {
    if (-1 < iVar4) {
      iVar4 = -0x7ff8fd64;
      FUN_0040585d(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar5 = FUN_004031a1(0x8007029c);
      param_15[3] = uVar5;
    }
    iVar4 = FUN_00402fd1(iVar4);
  }
  else if (param_7 == 3) {
    iVar4 = FUN_00402ff0(iVar4);
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
  iVar6 = DAT_004095f4 + 1;
  DAT_004095f4 = DAT_004095f4 + 1;
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
  pcVar1 = DAT_004095d8;
  if (DAT_004095d8 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040a1dc)(uVar3);
    iVar4 = (*pcVar1)();
  }
  pcVar1 = DAT_00409590;
  param_15[0x13] = iVar4;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095ac;
  if (DAT_004095ac != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095a8;
  if (DAT_004095a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095bc;
  if ((DAT_004095bc != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_0040403b();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar3 = FUN_004031a1(0x8000ffff);
    param_15[3] = uVar3;
  }
  pcVar1 = DAT_00409578;
  if (DAT_00409580 == '\0') {
    if (DAT_00409578 == (code *)0x0) {
      BVar8 = IsDebuggerPresent();
      cVar2 = BVar8 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040a1dc)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00403d28;
  }
  else {
LAB_00403d28:
    pcVar1 = DAT_00409584;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_00409584 != (code *)0x0) && (DAT_00409598 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040a1dc)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_00402b6a(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00403d91;
    }
  }
  pcVar1 = DAT_00409584;
  if ((DAT_00409584 != (code *)0x0) && (DAT_00409598 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00403d91:
  pcVar1 = DAT_004095b4;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_00409588 != '\0')) &&
     (DAT_004095b4 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040a1dc)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00403dd7 */

void __fastcall FUN_00403dd7(int param_1)

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
  
  pcVar1 = DAT_004095dc;
  if (DAT_004095dc != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095c0;
  if (DAT_004095c0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00403e44;
  uVar3 = 1;
  do {
    FUN_0040300a(uVar3);
    iVar2 = extraout_ECX;
LAB_00403e44:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_00403e64 */

void __fastcall
FUN_00403e64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,short *param_8)

{
  code *pcVar1;
  
  FUN_0040599d(param_1,param_2,param_3,param_1,param_1,param_6,param_7,param_8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403e84 */

void __thiscall FUN_00403e84(void *this)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 extraout_ECX;
  undefined4 in_stack_00000010;
  uint local_1c [3];
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  
  puVar2 = FUN_00402e02((void *)0x8000ffff,local_1c);
  local_10 = *puVar2;
  uStack_c = puVar2[1];
  uStack_8 = puVar2[2];
  FUN_00403e64(this,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_10,(short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403ecb */

void __fastcall FUN_00403ecb(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00403376(param_1,param_2,0x4014bc,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00402e02(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  FUN_00403e64(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14,(short *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403f2d */

void __fastcall FUN_00403f2d(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040804b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405c98(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00403f79 */

void __fastcall FUN_00403f79(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040806e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00405cde(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00403fc3 */

void __fastcall FUN_00403fc3(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040806e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00403ecb(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403fff */

void __fastcall FUN_00403fff(void *param_1)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040804b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00403e84(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040403b */

void FUN_0040403b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404047 */

undefined4 * __fastcall FUN_00404047(undefined4 *param_1)

{
  char *local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = "length";
  _local_8 = CONCAT31((int3)((uint)param_1 >> 8),1);
  *param_1 = &PTR_FUN_00401010;
  param_1[1] = 0;
  param_1[2] = 0;
  o___std_exception_copy(&local_c,param_1 + 1);
  *param_1 = &PTR_FUN_00401010;
  return param_1;
}



/* Function: FUN_0040408b */

undefined4 * __fastcall FUN_0040408b(uint param_1)

{
  longlong lVar1;
  SIZE_T dwBytes;
  HANDLE hHeap;
  undefined4 *puVar2;
  DWORD dwFlags;
  ThrowInfo *pThrowInfo;
  undefined4 local_10 [2];
  int local_8;
  
  lVar1 = (ulonglong)param_1 * 2 + 0x1c;
  dwBytes = (SIZE_T)lVar1;
  local_8 = (int)((ulonglong)lVar1 >> 0x20);
  if (local_8 == 0) {
    dwFlags = 0;
    hHeap = GetProcessHeap();
    puVar2 = (undefined4 *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[4] = puVar2 + 6;
      puVar2[1] = param_1;
      LOCK();
      puVar2[5] = 1;
      UNLOCK();
      *(undefined2 *)((int)puVar2 + param_1 * 2 + 0x18) = 0;
      return puVar2;
    }
    FUN_00402aa5(local_10);
    pThrowInfo = (ThrowInfo *)&DAT_00408610;
  }
  else {
    FUN_00404047(local_10);
    pThrowInfo = (ThrowInfo *)&DAT_0040859c;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,pThrowInfo);
}



/* Function: FUN_0040410e */

undefined4 * __fastcall FUN_0040410e(undefined4 *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00408091;
  local_10 = ExceptionList;
  uVar1 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = (undefined2 *)((int)param_2 + (param_3 - 1) * 2);
  if (param_3 != 0) {
    do {
      iVar2 = o_iswspace(*puVar3,uVar1);
      if (iVar2 == 0) {
        puVar4 = FUN_0040408b(param_3);
        FUN_004027e3(puVar4 + 6,param_3 * 2,param_2,param_3 * 2);
        goto LAB_00404163;
      }
      puVar3 = puVar3 + -1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00404163:
  *param_1 = puVar4;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_004041a0 */

undefined4 * __thiscall FUN_004041a0(void *this,undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  void *pvVar6;
  int local_14;
  void *local_10;
  int local_c;
  void *local_8;
  
  piVar1 = *(int **)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    local_14 = 0;
    local_10 = (void *)0x0;
    local_8 = (void *)0x0;
    local_c = 0;
    pcVar2 = *(code **)(*piVar1 + 0xc);
    (*(code *)PTR_guard_check_icall_0040a1dc)(piVar1,&local_10,&local_14,&local_8,&local_c);
    iVar3 = (*pcVar2)();
    if ((iVar3 == 0) && (local_14 == *(int *)((int)this + 8))) {
      if (local_8 == (void *)0x0) {
        uVar4 = Ordinal_7(local_10);
        pvVar6 = local_10;
      }
      else {
        uVar4 = Ordinal_7(local_8);
        pvVar6 = local_8;
      }
      FUN_0040410e(param_1,pvVar6,uVar4);
      if (local_c != 0) {
        Ordinal_6(local_c);
        local_c = 0;
      }
      if (local_8 != (void *)0x0) {
        Ordinal_6(local_8);
        local_8 = (void *)0x0;
      }
      if (local_10 == (void *)0x0) {
        return param_1;
      }
      Ordinal_6(local_10);
      return param_1;
    }
    if (local_c != 0) {
      Ordinal_6(local_c);
      local_c = 0;
    }
    if (local_8 != (void *)0x0) {
      Ordinal_6(local_8);
      local_8 = (void *)0x0;
    }
    if (local_10 != (void *)0x0) {
      Ordinal_6(local_10);
    }
  }
  local_10 = (void *)0x0;
  DVar5 = FormatMessageW(0x1300,(LPCVOID)0x0,*(DWORD *)((int)this + 8),0x400,(LPWSTR)&local_10,0,
                         (va_list *)0x0);
  FUN_0040410e(param_1,local_10,DVar5);
  FUN_004053ac((int *)&local_10);
  return param_1;
}



/* Function: FUN_004042b8 */

void __thiscall FUN_004042b8(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *local_c;
  void *local_8;
  
  puVar1 = *(undefined4 **)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    local_8 = (void *)0x0;
    puVar2 = (undefined4 *)*puVar1;
    local_c = this;
    (*(code *)PTR_guard_check_icall_0040a1dc)(puVar1,&DAT_004015bc,&local_8);
    (*(code *)*puVar2)();
    pvVar3 = local_8;
    local_c = local_8;
    Ordinal_201(0,local_8);
    if (pvVar3 != (void *)0x0) {
      FUN_004057bb(&local_c);
    }
  }
  *param_1 = *(undefined4 *)((int)this + 8);
  return;
}



/* Function: FUN_00404312 */

void __fastcall FUN_00404312(void *param_1,undefined2 *param_2,uint param_3)

{
  void *local_8;
  
  if (param_2 != (undefined2 *)0x0) {
    local_8 = param_1;
    FUN_004041a0(param_1,&local_8);
    FUN_00402927(param_2,param_3,L"winrt::hresult_error: %ls");
    FUN_004053d0((int *)&local_8);
  }
  return;
}



/* Function: FUN_00404360 */

void FUN_00404360(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004080b4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0040958c == 0) {
    FUN_00404451((ThrowInfo *)0x0);
    return;
  }
  uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: Catch@004043a2 */

undefined1 * Catch_004043a2(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  **(undefined1 **)(unaff_EBP + 0x10) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_00402b6a(psVar1,*(int *)(unaff_EBP + 0xc),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 0x14);
  return &LAB_004043ca;
}



/* Function: Catch@004043d2 */

undefined1 * Catch_004043d2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_00404312(*(void **)(unaff_EBP + -0x1c),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  puVar1 = (undefined4 *)
           FUN_004042b8(*(void **)(unaff_EBP + -0x1c),(undefined4 *)(unaff_EBP + -0x18));
  *(undefined4 *)(unaff_EBP + -0x18) = *puVar1;
  return &LAB_004043ca;
}



/* Function: Catch@004043f7 */

undefined1 * Catch_004043f7(void)

{
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x28),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_004044be;
}



/* Function: Catch@0040440b */

undefined1 * Catch_0040440b(void)

{
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x2c),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_004044d9;
}



/* Function: Catch@0040441f */

undefined1 * Catch_0040441f(void)

{
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x30),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_004044f4;
}



/* Function: Catch_All@00404433 */

undefined1 * Catch_All_00404433(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = FUN_004037ed(*(int *)(unaff_EBP + 8));
  *(int *)(unaff_EBP + -0x18) = iVar1;
  if (iVar1 < 0) {
    return &LAB_004043ca;
  }
  return &LAB_0040451c;
}



/* Function: FUN_00404451 */

void FUN_00404451(ThrowInfo *param_1)

{
  int unaff_EBP;
  void *unaff_retaddr;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(unaff_retaddr,param_1);
}



/* Function: Catch@0040445d */

undefined1 * Catch_0040445d(void)

{
  short *psVar1;
  int iVar2;
  int unaff_EBP;
  
  psVar1 = *(short **)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + -0x20);
  **(undefined1 **)(unaff_EBP + 0x10) = 1;
  if (psVar1 != (short *)0x0) {
    FUN_00402b6a(psVar1,*(int *)(unaff_EBP + 0xc),iVar2 + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 0x14);
  return &LAB_004043ca;
}



/* Function: Catch@00404485 */

undefined1 * Catch_00404485(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_00404312(*(void **)(unaff_EBP + -0x24),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  puVar1 = (undefined4 *)
           FUN_004042b8(*(void **)(unaff_EBP + -0x24),(undefined4 *)(unaff_EBP + -0x18));
  *(undefined4 *)(unaff_EBP + -0x18) = *puVar1;
  return &LAB_004043ca;
}



/* Function: Catch@004044aa */

undefined1 * Catch_004044aa(void)

{
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x34),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_004044be;
}



/* Function: Catch@004044c5 */

undefined1 * Catch_004044c5(void)

{
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x38),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_004044d9;
}



/* Function: Catch@004044e0 */

undefined1 * Catch_004044e0(void)

{
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x3c),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_004044f4;
}



/* Function: Catch@004044fb */

undefined1 * Catch_004044fb(void)

{
  int unaff_EBP;
  
  FUN_004037ad(*(int **)(unaff_EBP + -0x40),*(undefined2 **)(unaff_EBP + 8),
               *(uint *)(unaff_EBP + 0xc));
  return &LAB_0040450f;
}



/* Function: Catch_All@00404516 */

undefined1 * Catch_All_00404516(void)

{
  return &LAB_0040451c;
}



/* Function: FUN_00404544 */

void FUN_00404544(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00403fc3(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404571 */

void FUN_00404571(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00403fc3(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0040459c */

void __thiscall FUN_0040459c(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_0040403b();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_0040296b(local_214,0x104,this,param_1);
  FUN_004028d0(local_214,0x4014f4);
  uVar4 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar4 != 0) {
    uVar2 = uVar4;
  }
  iVar3 = FUN_00405325(this,uVar4,uVar2,local_214);
  if (iVar3 < 0) {
    FUN_00403f2d(unaff_retaddr,0x88);
  }
  FUN_004070c0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040463f */

undefined4 __fastcall FUN_0040463f(HANDLE param_1,int *param_2)

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
    goto LAB_00404662;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00404662:
        uVar2 = FUN_00403f79(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_00404730:
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
        goto LAB_00404662;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00404662;
          }
          if (DVar1 == 0) goto LAB_00404730;
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
  FUN_00403f2d(unaff_retaddr,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_0040475a */

void __thiscall FUN_0040475a(void *this,int *param_1)

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
  
  local_c = DAT_00409180 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0040296b(local_218,0x104,this,(int)this);
  FUN_004028d0(local_218,0x4014f4);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_00403f79(unaff_retaddr,0xcd);
    }
LAB_00404800:
    if (pvVar1 == (HANDLE)0x0) goto LAB_0040481a;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_0040463f(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_00403f2d(unaff_retaddr,0xd3);
      goto LAB_00404800;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00404544(pvVar1);
LAB_0040481a:
  FUN_004070c0(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_00404839 */

void __thiscall FUN_00404839(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_0040349d(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_0040347f(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_0040347f(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00402e26(8,(SIZE_T)pcVar4);
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
    FUN_00405914(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00405914(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_004058a4(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_0040492c */

void __fastcall FUN_0040492c(int param_1)

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



/* Function: FUN_0040499b */

void __thiscall FUN_0040499b(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00402e26(8,0xdc);
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
    FUN_00404839(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00404a59 */

DWORD * __fastcall FUN_00404a59(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_0040957c;
  if (DAT_0040957c != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_0040957c[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_00405410(*DAT_0040957c,&local_8);
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



/* Function: FUN_00404ae2 */

uint __fastcall FUN_00404ae2(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_00404ae2(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_004091cc + 1;
        DAT_004091cc = DAT_004091cc + 1;
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
        pcVar5 = (char *)FUN_004027e3(pcVar7,(uint)pcVar9,(void *)piVar2[1],(uint)pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_00404ba1 */

void __fastcall FUN_00404ba1(int param_1,char *param_2,int param_3)

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
  puStack_c = &LAB_004080d7;
  local_10 = ExceptionList;
  uVar3 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  ppvVar5 = &local_10;
  ExceptionList = ppvVar5;
  *param_2 = '\0';
  iVar7 = DAT_00409594;
  local_11 = 0;
  if (DAT_00409594 != 0) {
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
      uVar6 = FUN_00404ae2(param_1,*pDVar9,param_2,param_3);
      if ((char)uVar6 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar9;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_0040a1dc)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
      ppvVar5 = (void **)0x0;
    }
  }
  pcVar1 = DAT_0040959c;
  if (DAT_0040959c != (code *)0x0) {
    uVar8 = (uint3)((uint)ppvVar5 >> 8);
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    (*(code *)PTR_guard_check_icall_0040a1dc)(iVar7,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00404ca0 */

void FUN_00404ca0(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_00404ba1((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_00409654 != DVar2) {
    LOCK();
    iVar1 = DAT_0040965c + 1;
    UNLOCK();
    iVar3 = DAT_0040965c + 1;
    DAT_0040965c = iVar1;
    if (iVar3 < 4) {
      DAT_00409654 = DVar2;
      this = FUN_00404a59(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_0040499b(this,param_1);
      }
      DAT_00409654 = 0;
    }
    LOCK();
    DAT_0040965c = DAT_0040965c + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_00404d05 */

void __fastcall FUN_00404d05(LPCSTR param_1)

{
  if (DAT_004095fc == (HMODULE)0x0) {
    DAT_004095fc = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_004095fc,param_1);
  return;
}



/* Function: FUN_00404d40 */

void FUN_00404d40(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_004095fc == (HMODULE)0x0) {
    DAT_004095fc = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_004095fc,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_00404d90 */

undefined4 FUN_00404d90(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0040806e;
  local_10 = ExceptionList;
  uVar2 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_0040964c == (code *)0x0) &&
     (DAT_0040964c = (code *)FUN_00404d05("RtlDllShutdownInProgress"), DAT_0040964c == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_0040964c;
  (*(code *)PTR_guard_check_icall_0040a1dc)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_00404e00 */

void FUN_00404e00(undefined1 *param_1)

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
  
  pFVar2 = DAT_004095e4;
  puStack_c = &LAB_0040811d;
  local_10 = ExceptionList;
  uVar1 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_004095e0;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_004095e4 == (FARPROC)0x0) {
    if (DAT_00409648 == (HMODULE)0x0) {
      DAT_00409648 = GetModuleHandleW(L"kernelbase.dll");
      if (DAT_00409648 != (HMODULE)0x0) goto LAB_00404e92;
    }
    else {
LAB_00404e92:
      pFVar2 = GetProcAddress(DAT_00409648,"WilFailureNotifyWatchers");
    }
    DAT_004095e4 = pFVar2;
    if (pFVar2 == (FARPROC)0x0) goto LAB_00404ebe;
  }
  pFVar2 = DAT_004095e4;
  (*(code *)PTR_guard_check_icall_0040a1dc)(0,&local_34,&local_18,uVar1);
  (*pFVar2)();
LAB_00404ebe:
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



/* Function: FUN_00404f0c */

void __cdecl FUN_00404f0c(int param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  wchar_t *pwVar3;
  HLOCAL pvVar4;
  HLOCAL pvVar5;
  HLOCAL hMem;
  HLOCAL pvVar6;
  HLOCAL local_104;
  DWORD local_100;
  HLOCAL local_fc;
  wchar_t *local_f8;
  HLOCAL local_f4;
  wchar_t *local_f0;
  HLOCAL local_ec;
  HLOCAL local_e8;
  HLOCAL local_e4;
  wchar_t *local_e0;
  HLOCAL local_dc;
  HLOCAL local_d8;
  HLOCAL local_d4;
  HLOCAL local_d0;
  HLOCAL local_cc;
  HLOCAL local_c8;
  _EVENT_DATA_DESCRIPTOR local_c4 [2];
  _EVENT_DATA_DESCRIPTOR local_a4;
  HLOCAL *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  wchar_t **local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  HLOCAL *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [4];
  int local_54 [19];
  uint local_8;
  
  local_8 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  local_c8 = (HLOCAL)0x0;
  local_d8 = (HLOCAL)0x0;
  local_cc = (HLOCAL)0x0;
  local_e4 = (HLOCAL)0x0;
  local_e0 = (wchar_t *)0x0;
  local_dc = (HLOCAL)0x0;
  FUN_00406c19();
  memset(local_54,0,0x48);
  local_fc = (HLOCAL)0x0;
  local_100 = 0x48;
  BVar1 = GetTokenInformation((HANDLE)0xfffffffc,TokenLogonSid|TokenPrivileges,local_54,0x48,
                              &local_100);
  if ((BVar1 == 0) ||
     ((hMem = (HLOCAL)0x0, local_54[0] != 0 &&
      (iVar2 = ConvertSidToStringSidW(local_54[0],&local_fc), hMem = local_fc, iVar2 == 0)))) {
    GetLastError();
    hMem = (HLOCAL)0x0;
  }
  iVar2 = FUN_004060de(param_1,param_2,&local_c8,&local_d8,&local_d4,(uint *)&local_cc,&local_e4,
                       &local_dc);
  if (iVar2 == 0) {
    if (4 < DAT_00409000) {
      local_ec = local_cc;
      local_d0 = local_d8;
      local_e8 = hMem;
      FUN_004021ca(&local_e8,local_64);
      local_74 = &local_ec;
      local_6c = 4;
      local_70 = 0;
      local_68 = 0;
      FUN_004021ca(&local_d0,&local_84);
      FUN_004020f2(0x409000,&DAT_004019ed,(LPCGUID)0x0,(LPCGUID)0x0,5,&local_a4);
    }
    if (local_c8 != (HLOCAL)0x0) {
      Ordinal_797(local_c8,2,0);
    }
    local_c8 = (HLOCAL)0x0;
    pvVar6 = (HLOCAL)((uint)local_d4 & 0x80386203);
    if (local_cc != (HLOCAL)0x0) {
      local_f4 = (HLOCAL)((uint)pvVar6 | 0x1000);
      pvVar5 = local_e4;
      do {
        pvVar4 = local_f4;
        if ((*(uint *)((int)pvVar5 + 0x10) & 0x2000) == 0) {
          pvVar4 = pvVar6;
        }
        local_f8 = (wchar_t *)InternetSetCookieEx2(local_d8,pvVar5,0,pvVar4,&local_104);
        if ((local_f8 != (wchar_t *)0x0) || (local_104 != (HLOCAL)0x1)) {
          if (2 < DAT_00409000) {
            local_d4 = local_dc;
            local_d0 = local_c8;
            local_e8 = local_104;
            local_f0 = local_f8;
            local_ec = hMem;
            FUN_004021ca(&local_d4,local_64);
            local_70 = 0;
            local_74 = &local_d0;
            local_68 = 0;
            local_6c = 4;
            FUN_004021ca(&local_ec,&local_84);
            local_94 = &local_e8;
            local_8c = 4;
            local_a4.Ptr._0_4_ = &local_f0;
            local_90 = 0;
            local_88 = 0;
            local_a4.Ptr._4_4_ = 0;
            local_a4.Size = 4;
            local_a4.Reserved = 0;
            FUN_004020f2(0x409000,&DAT_00401983,(LPCGUID)0x0,(LPCGUID)0x0,7,local_c4);
          }
          local_e0 = (wchar_t *)((int)local_e0 + 1);
        }
        pvVar5 = (HLOCAL)((int)pvVar5 + 0x20);
        local_c8 = (HLOCAL)((int)local_c8 + 1);
      } while (local_c8 < local_cc);
    }
    pwVar3 = L"Completed";
  }
  else {
    pwVar3 = L"ParseCookieCommandLineFailed";
  }
  if (4 < DAT_00409000) {
    local_f4 = local_dc;
    local_f0 = local_e0;
    local_d4 = local_cc;
    local_f8 = pwVar3;
    local_d0 = hMem;
    FUN_004021ca(&local_f8,local_64);
    FUN_004021ca(&local_f4,&local_74);
    local_84 = &local_f0;
    local_94 = &local_d4;
    local_7c = 4;
    local_8c = 4;
    local_80 = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    FUN_004021ca(&local_d0,(undefined4 *)&local_a4);
    FUN_004020f2(0x409000,&DAT_00401919,(LPCGUID)0x0,(LPCGUID)0x0,7,local_c4);
  }
  LocalFree(local_e4);
  LocalFree(hMem);
  FUN_00406ce7();
  FUN_004070c0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004052e0 */

void __fastcall FUN_004052e0(int *param_1)

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



/* Function: FUN_00405325 */

undefined4 __thiscall FUN_00405325(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00403462(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_00405375(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_00405375 */

void __thiscall FUN_00405375(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00404544(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_004053ac */

void __fastcall FUN_004053ac(int *param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (*param_1 != 0) {
    lpMem = (LPVOID)*param_1;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,lpMem);
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_004053d0 */

void __fastcall FUN_004053d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  HANDLE hHeap;
  DWORD dwFlags;
  LPVOID lpMem;
  
  lpMem = (LPVOID)*param_1;
  if (lpMem != (LPVOID)0x0) {
    piVar1 = (int *)((int)lpMem + 0x14);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    dwFlags = iVar2 - 1;
    if (dwFlags == 0) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,dwFlags,lpMem);
    }
    else if ((int)dwFlags < 0) {
      o_abort();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00405410 */

void __fastcall FUN_00405410(undefined4 param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  int local_220 [2];
  HANDLE local_218;
  HANDLE local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_00402927(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00405375(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00403462(extraout_ECX);
    goto LAB_00405523;
  }
  FUN_00405778(&local_214,&local_218);
  local_220[0] = 0;
  local_220[1] = 0;
  iVar2 = FUN_0040475a(local_210,local_220);
  if (iVar2 < 0) {
    FUN_00403f2d(unaff_retaddr,100);
    FUN_00403f2d(unaff_retaddr,0x6d);
    uVar4 = 299;
LAB_00405551:
    FUN_00403f2d(unaff_retaddr,uVar4);
  }
  else {
    piVar3 = (int *)(local_220[0] << 2);
    if (piVar3 == (int *)0x0) {
      iVar2 = FUN_00405660((int)local_210,&local_214,param_2);
      if (iVar2 < 0) {
        uVar4 = 0x134;
        goto LAB_00405551;
      }
    }
    else {
      *param_2 = piVar3;
      *(int *)*param_2 = *piVar3 + 1;
    }
  }
  if (local_218 != (HANDLE)0x0) {
    FUN_00404571(local_218);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00404544(local_214);
  }
LAB_00405523:
  FUN_004070c0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405563 */

int __fastcall FUN_00405563(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  HANDLE hHeap;
  int *piVar5;
  int *local_8;
  
  pcVar1 = DAT_004095b0;
  if (DAT_004095cc == '\0') {
    local_8 = param_1;
    if (DAT_004095b0 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0040a1dc)();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') goto LAB_00405600;
    }
    iVar3 = FUN_00405778(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar5 = local_8;
    if (*param_1 == 0) {
      FUN_00405375(param_1 + 2,0);
      FUN_00405375(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar4 = GetLastError();
        FUN_00404571(local_8);
        SetLastError(DVar4);
      }
      FUN_0040560e((int)param_1);
      DVar4 = 0;
      hHeap = GetProcessHeap();
      iVar3 = HeapFree(hHeap,DVar4,param_1);
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      iVar3 = FUN_00404571(piVar5);
    }
  }
  else {
LAB_00405600:
    *param_1 = *param_1 + -1;
    iVar3 = *param_1;
  }
  return iVar3;
}



/* Function: FUN_0040560e */

void __fastcall FUN_0040560e(int param_1)

{
  FUN_0040571d((int *)(param_1 + 0x18));
  FUN_00405639((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00404544(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00405639 */

void __fastcall FUN_00405639(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00404544((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00404544((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_00405660 */

int __fastcall FUN_00405660(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00402e26(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00403f2d(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_0040403b();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_0040459c(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00403f2d(unaff_retaddr,0x14b);
    }
    else {
      FUN_004057f9(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_00405639(local_10);
  }
  FUN_004057d9((int *)&local_18);
  return iVar3;
}



/* Function: FUN_0040571d */

void __fastcall FUN_0040571d(int *param_1)

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
        FUN_0040492c((int)lpMem + 8);
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



/* Function: FUN_00405778 */

void __thiscall FUN_00405778(void *this,undefined4 *param_1)

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
    FUN_00403fff(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_004057bb */

void __fastcall FUN_004057bb(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  pcVar2 = *(code **)(*piVar1 + 8);
  (*(code *)PTR_guard_check_icall_0040a1dc)(piVar1);
  (*pcVar2)();
  return;
}



/* Function: FUN_004057d9 */

void __fastcall FUN_004057d9(int *param_1)

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



/* Function: FUN_004057f9 */

undefined4 * __thiscall FUN_004057f9(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_0040585d */

void __fastcall
FUN_0040585d(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_004031a1(param_7);
  local_8 = 0;
  FUN_00405977(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_004058a4 */

void * __fastcall FUN_004058a4(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_0040349d(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_004027e3(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_00405914 */

char * __fastcall FUN_00405914(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_0040347f(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      FUN_004027e3(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar1);
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



/* Function: FUN_00405977 */

void __fastcall
FUN_00405977(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00405d38(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_0040599d */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_0040599d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,short *param_8)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  undefined4 local_147c;
  uint local_1478;
  int local_1474;
  uint local_1470;
  int local_146c;
  short *local_1468;
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
  
  puStack_c = &LAB_00408140;
  local_10 = ExceptionList;
  uStack_14 = 0x4059ba;
  uVar3 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1418 = param_3;
  local_1420 = param_6;
  local_8 = 0;
  local_414[0] = 0;
  local_1414[0] = L'\0';
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_141c = FUN_00402ff0(local_1474);
  local_147c = 3;
  local_1478 = 0;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  LOCK();
  UNLOCK();
  local_146c = DAT_004095f4 + 1;
  if ((param_8 == (short *)0x0) || (*param_8 == 0)) {
    param_8 = (short *)0x0;
  }
  DAT_004095f4 = DAT_004095f4 + 1;
  local_1468 = param_8;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_004095d8;
  local_1458 = local_1418;
  local_1450 = local_141c;
  local_142c = local_1420;
  local_1460 = 0;
  local_145c = 0;
  local_144c = 0;
  local_143c = 0;
  uStack_1438 = 0;
  uStack_1434 = 0;
  local_1448 = 0;
  uStack_1444 = 0;
  uStack_1440 = 0;
  local_1454 = param_2;
  local_1428 = param_1;
  if (DAT_004095d8 == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040a1dc)(uVar3);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_00409590;
  if (DAT_00409590 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095ac;
  if (DAT_004095ac != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095a8;
  if (DAT_004095a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095bc;
  if ((DAT_004095bc != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c);
    (*pcVar1)();
  }
  if (-1 < local_1474) {
    local_1474 = -0x7fff0001;
    local_1470 = FUN_004031a1(0x8000ffff);
  }
  pcVar1 = DAT_00409578;
  if (DAT_00409580 == '\0') {
    if (DAT_00409578 == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040a1dc)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00405bb7;
  }
  else {
LAB_00405bb7:
    pcVar1 = DAT_00409584;
    if ((local_1478 & 2) == 0) {
      if ((DAT_00409584 != (code *)0x0) && (DAT_00409598 == '\0')) {
        (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c,local_1414,0x800);
        (*pcVar1)();
      }
      if (local_1414[0] == L'\0') {
        FUN_00402b6a(local_1414,0x800,(int)&local_147c);
      }
      OutputDebugStringW(local_1414);
      goto LAB_00405c46;
    }
  }
  pcVar1 = DAT_00409584;
  if ((DAT_00409584 != (code *)0x0) && (DAT_00409598 == '\0')) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c,0,0);
    (*pcVar1)();
  }
LAB_00405c46:
  pcVar1 = DAT_004095b4;
  if ((((local_1478 & 4) != 0) || (DAT_00409588 != '\0')) && (DAT_004095b4 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040a1dc)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  FUN_00403dd7((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405c87 */

void __fastcall
FUN_00405c87(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,short *param_8)

{
  FUN_00405dde(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Function: FUN_00405c98 */

void __fastcall FUN_00405c98(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 in_stack_00000010;
  uint in_stack_00000014;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  local_c = FUN_004031a1(in_stack_00000014);
  local_8 = 0;
  FUN_00405c87(param_1,param_2,&DAT_00401434,extraout_ECX,extraout_ECX,in_stack_00000010,&local_10,
               (short *)0x0);
  return;
}



/* Function: FUN_00405cde */

uint __fastcall FUN_00405cde(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int in_stack_00000010;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  uVar1 = FUN_004033e1(param_1,param_2,0x401434,param_1,param_1,in_stack_00000010);
  local_10 = uVar1;
  local_c = FUN_004031a1(uVar1);
  local_8 = 0;
  FUN_00405c87(param_1,param_2,&DAT_00401434,extraout_ECX,extraout_ECX,in_stack_00000010,
               (int *)&local_10,(short *)0x0);
  return uVar1;
}



/* Function: FUN_00405d38 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00405d38(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_00409180 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00403b20(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_004070c0(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_00403dd7((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00405dde */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00405dde(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,short *param_8)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  undefined4 local_147c;
  uint local_1478;
  int local_1474;
  int local_1470;
  int local_146c;
  short *local_1468;
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
  undefined4 local_1420;
  int local_141c;
  undefined4 local_1418;
  WCHAR local_1414 [2048];
  undefined1 local_414 [1024];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00408166;
  local_10 = ExceptionList;
  uVar3 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1418 = param_3;
  local_1420 = param_6;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_14 = uVar3;
  local_141c = FUN_00402fb8(local_1474);
  local_1478 = 0;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  local_147c = 1;
  LOCK();
  UNLOCK();
  local_146c = DAT_004095f4 + 1;
  if ((param_8 == (short *)0x0) || (*param_8 == 0)) {
    param_8 = (short *)0x0;
  }
  DAT_004095f4 = DAT_004095f4 + 1;
  local_1468 = param_8;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_004095d8;
  local_1458 = local_1418;
  local_1450 = local_141c;
  local_142c = local_1420;
  local_1460 = 0;
  local_145c = 0;
  local_144c = 0;
  local_143c = 0;
  uStack_1438 = 0;
  uStack_1434 = 0;
  local_1448 = 0;
  uStack_1444 = 0;
  uStack_1440 = 0;
  local_1454 = param_2;
  local_1428 = param_1;
  if (DAT_004095d8 == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040a1dc)(uVar3);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_00409590;
  if (DAT_00409590 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095ac;
  if (DAT_004095ac != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095a8;
  if (DAT_004095a8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_004095bc;
  if ((DAT_004095bc != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_00409578;
  if (-1 < local_1474) {
    FUN_0040403b();
    goto LAB_004060c7;
  }
  if (DAT_00409580 == '\0') {
    if (DAT_00409578 == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0040a1dc)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00405fe4;
LAB_00405fed:
    pcVar1 = DAT_00409584;
    if ((DAT_00409584 != (code *)0x0) && (DAT_00409598 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c,0,0);
      (*pcVar1)();
    }
  }
  else {
LAB_00405fe4:
    pcVar1 = DAT_00409584;
    if ((local_1478 & 2) != 0) goto LAB_00405fed;
    if ((DAT_00409584 != (code *)0x0) && (DAT_00409598 == '\0')) {
      (*(code *)PTR_guard_check_icall_0040a1dc)(&local_147c,local_1414,0x800);
      (*pcVar1)();
    }
    if (local_1414[0] == L'\0') {
      FUN_00402b6a(local_1414,0x800,(int)&local_147c);
    }
    OutputDebugStringW(local_1414);
  }
  pcVar1 = DAT_004095b4;
  if ((((local_1478 & 4) != 0) || (DAT_00409588 != '\0')) && (DAT_004095b4 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040a1dc)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  if ((local_1478 & 1) == 0) {
    ExceptionList = local_10;
    FUN_004070c0(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004060c7:
  FUN_00403dd7((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004060de */

undefined4 __fastcall
FUN_004060de(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            uint *param_6,undefined4 *param_7,undefined4 *param_8)

{
  wchar_t wVar1;
  HLOCAL pvVar2;
  uint uVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  uint local_8;
  
  if ((param_1 + 3U & 7) == 0) {
    uVar10 = param_1 - 5U >> 3;
    pvVar2 = LocalAlloc(0x40,uVar10 << 5);
    if (pvVar2 == (HLOCAL)0x0) {
      uVar4 = 8;
    }
    else {
      pwVar5 = *(wchar_t **)(param_2 + 4);
      pwVar6 = L"<no_string>";
      do {
        wVar1 = *pwVar5;
        bVar12 = (ushort)wVar1 < (ushort)*pwVar6;
        if (wVar1 != *pwVar6) {
LAB_00406150:
          uVar3 = -(uint)bVar12 | 1;
          goto LAB_00406155;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar5[1];
        bVar12 = (ushort)wVar1 < (ushort)pwVar6[1];
        if (wVar1 != pwVar6[1]) goto LAB_00406150;
        pwVar5 = pwVar5 + 2;
        pwVar6 = pwVar6 + 2;
      } while (wVar1 != L'\0');
      uVar3 = 0;
LAB_00406155:
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = *(undefined4 *)(param_2 + 4);
      }
      *param_3 = uVar4;
      pwVar6 = L"<no_string>";
      pwVar5 = *(wchar_t **)(param_2 + 8);
      do {
        wVar1 = *pwVar5;
        bVar12 = (ushort)wVar1 < (ushort)*pwVar6;
        if (wVar1 != *pwVar6) {
LAB_00406190:
          uVar3 = -(uint)bVar12 | 1;
          goto LAB_00406195;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar5[1];
        bVar12 = (ushort)wVar1 < (ushort)pwVar6[1];
        if (wVar1 != pwVar6[1]) goto LAB_00406190;
        pwVar5 = pwVar5 + 2;
        pwVar6 = pwVar6 + 2;
      } while (wVar1 != L'\0');
      uVar3 = 0;
LAB_00406195:
      uVar4 = *(undefined4 *)(param_2 + 0xc);
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = *(undefined4 *)(param_2 + 8);
      }
      *param_4 = uVar7;
      uVar4 = o__wtoi(uVar4);
      *param_5 = uVar4;
      pwVar6 = L"<no_string>";
      pwVar5 = *(wchar_t **)(param_2 + 0x10);
      do {
        wVar1 = *pwVar5;
        bVar12 = (ushort)wVar1 < (ushort)*pwVar6;
        if (wVar1 != *pwVar6) {
LAB_004061df:
          uVar3 = -(uint)bVar12 | 1;
          goto LAB_004061e4;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar5[1];
        bVar12 = (ushort)wVar1 < (ushort)pwVar6[1];
        if (wVar1 != pwVar6[1]) goto LAB_004061df;
        pwVar5 = pwVar5 + 2;
        pwVar6 = pwVar6 + 2;
      } while (wVar1 != L'\0');
      uVar3 = 0;
LAB_004061e4:
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = *(undefined4 *)(param_2 + 0x10);
      }
      *param_8 = uVar4;
      if (uVar10 != 0) {
        puVar11 = (undefined4 *)((int)pvVar2 + 8);
        puVar8 = (undefined4 *)(param_2 + 0x14);
        local_8 = uVar10;
        do {
          pwVar6 = L"<no_string>";
          pwVar5 = (wchar_t *)*puVar8;
          do {
            wVar1 = *pwVar5;
            bVar12 = (ushort)wVar1 < (ushort)*pwVar6;
            if (wVar1 != *pwVar6) {
LAB_00406233:
              uVar3 = -(uint)bVar12 | 1;
              goto LAB_00406238;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar5[1];
            bVar12 = (ushort)wVar1 < (ushort)pwVar6[1];
            if (wVar1 != pwVar6[1]) goto LAB_00406233;
            pwVar5 = pwVar5 + 2;
            pwVar6 = pwVar6 + 2;
          } while (wVar1 != L'\0');
          uVar3 = 0;
LAB_00406238:
          pwVar6 = L"<no_string>";
          pwVar5 = (wchar_t *)0x0;
          if (uVar3 != 0) {
            pwVar5 = (wchar_t *)*puVar8;
          }
          puVar11[-2] = pwVar5;
          pwVar5 = (wchar_t *)puVar8[1];
          do {
            wVar1 = *pwVar5;
            bVar12 = (ushort)wVar1 < (ushort)*pwVar6;
            if (wVar1 != *pwVar6) {
LAB_00406272:
              uVar3 = -(uint)bVar12 | 1;
              goto LAB_00406277;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar5[1];
            bVar12 = (ushort)wVar1 < (ushort)pwVar6[1];
            if (wVar1 != pwVar6[1]) goto LAB_00406272;
            pwVar5 = pwVar5 + 2;
            pwVar6 = pwVar6 + 2;
          } while (wVar1 != L'\0');
          uVar3 = 0;
LAB_00406277:
          pwVar6 = L"<no_string>";
          pwVar5 = (wchar_t *)0x0;
          if (uVar3 != 0) {
            pwVar5 = (wchar_t *)puVar8[1];
          }
          puVar11[-1] = pwVar5;
          pwVar5 = (wchar_t *)puVar8[2];
          do {
            wVar1 = *pwVar5;
            bVar12 = (ushort)wVar1 < (ushort)*pwVar6;
            if (wVar1 != *pwVar6) {
LAB_004062b1:
              uVar3 = -(uint)bVar12 | 1;
              goto LAB_004062b6;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar5[1];
            bVar12 = (ushort)wVar1 < (ushort)pwVar6[1];
            if (wVar1 != pwVar6[1]) goto LAB_004062b1;
            pwVar5 = pwVar5 + 2;
            pwVar6 = pwVar6 + 2;
          } while (wVar1 != L'\0');
          uVar3 = 0;
LAB_004062b6:
          pwVar6 = L"<no_string>";
          pwVar5 = (wchar_t *)0x0;
          if (uVar3 != 0) {
            pwVar5 = (wchar_t *)puVar8[2];
          }
          *puVar11 = pwVar5;
          pwVar5 = (wchar_t *)puVar8[3];
          do {
            wVar1 = *pwVar5;
            bVar12 = (ushort)wVar1 < (ushort)*pwVar6;
            if (wVar1 != *pwVar6) {
LAB_004062f2:
              uVar3 = -(uint)bVar12 | 1;
              goto LAB_004062f7;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar5[1];
            bVar12 = (ushort)wVar1 < (ushort)pwVar6[1];
            if (wVar1 != pwVar6[1]) goto LAB_004062f2;
            pwVar5 = pwVar5 + 2;
            pwVar6 = pwVar6 + 2;
          } while (wVar1 != L'\0');
          uVar3 = 0;
LAB_004062f7:
          pwVar5 = (wchar_t *)0x0;
          if (uVar3 != 0) {
            pwVar5 = (wchar_t *)puVar8[3];
          }
          puVar11[1] = pwVar5;
          uVar4 = o__wtoi(puVar8[4]);
          puVar11[2] = uVar4;
          uVar4 = o__wtoi(puVar8[5]);
          puVar11[3] = uVar4;
          puVar9 = puVar8 + 7;
          uVar4 = o__wtoi(puVar8[6]);
          puVar11[4] = uVar4;
          puVar8 = puVar8 + 8;
          uVar4 = o__wtoi(*puVar9);
          puVar11[5] = uVar4;
          puVar11 = puVar11 + 8;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      *param_7 = pvVar2;
      *param_6 = uVar10;
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x57;
  }
  return uVar4;
}



/* Function: FUN_0040636b */

void __fastcall FUN_0040636b(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = ((uint)*(byte *)(uVar2 + param_2) + *param_1) * 0x401;
      uVar2 = uVar2 + 1;
      *param_1 = uVar1 >> 6 ^ uVar1;
    } while (uVar2 < param_3);
  }
  return;
}



/* Function: FUN_004063a2 */

void __fastcall FUN_004063a2(uint param_1)

{
  int iVar1;
  uint local_20 [3];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  local_20[1] = 0;
  local_20[0] = param_1 >> 4 | ((int)param_1 >> 0x1f) << 0x1c;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 4);
  local_20[2] = *(undefined4 *)(iVar1 + -0x10);
  uStack_14 = *(undefined4 *)(iVar1 + -0xc);
  uStack_10 = *(undefined4 *)(iVar1 + -8);
  uStack_c = *(undefined4 *)(iVar1 + -4);
  FUN_0040636b(local_20 + 1,(int)(local_20 + 2),0x10);
  FUN_0040636b(local_20 + 1,(int)local_20,4);
  FUN_004070c0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406422 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void __fastcall FUN_00406422(PTP_TIMER param_1,uint param_2)

{
  _FILETIME local_24 [2];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004084e8;
  uStack_c = 0x40642e;
  if (param_1 != (PTP_TIMER)0x0) {
    local_24[0] = (_FILETIME)__allmul(param_2,0,0xffffd8f0,-1);
    if (DAT_00409668 == 0) {
      local_8 = (undefined *)0x0;
      SetThreadpoolTimer(param_1,local_24,0,5000);
    }
  }
  ExceptionList = local_14;
  return;
}



/* Function: FUN_004064b0 */

void FUN_004064b0(undefined4 param_1,int param_2)

{
  FUN_00406af9(param_2);
  return;
}



/* Function: FUN_004064c7 */

void __fastcall FUN_004064c7(int param_1)

{
  if (*(PTP_TIMER *)(param_1 + 200) != (PTP_TIMER)0x0) {
    SetThreadpoolTimer(*(PTP_TIMER *)(param_1 + 200),(PFILETIME)0x0,0,0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(param_1 + 200),1);
    CloseThreadpoolTimer(*(PTP_TIMER *)(param_1 + 200));
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



/* Function: FUN_0040650c */

void __fastcall FUN_0040650c(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_004064c7((int)param_1);
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,param_1);
  }
  return;
}



/* Function: FUN_00406532 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

LPVOID __fastcall FUN_00406532(char param_1)

{
  bool bVar1;
  HANDLE hHeap;
  LPVOID pv;
  PTP_TIMER p_Var2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  void *local_14;
  
  bVar1 = false;
  dwBytes = 0xd8;
  dwFlags = 8;
  hHeap = GetProcessHeap();
  pv = HeapAlloc(hHeap,dwFlags,dwBytes);
  if (pv == (LPVOID)0x0) goto LAB_004065d1;
  InitializeSRWLock((PSRWLOCK)((int)pv + 0x88));
  if (param_1 != '\0') {
    if (DAT_00409668 != 0) goto LAB_004065d1;
    p_Var2 = CreateThreadpoolTimer(FUN_004064b0,pv,(PTP_CALLBACK_ENVIRON)0x0);
    *(PTP_TIMER *)((int)pv + 200) = p_Var2;
    if (*(int *)((int)pv + 200) == 0) goto LAB_004065d1;
  }
  bVar1 = true;
LAB_004065d1:
  if (!bVar1) {
    FUN_0040650c(pv);
    pv = (LPVOID)0x0;
  }
  ExceptionList = local_14;
  return pv;
}



/* Function: FUN_004065f8 */

void __fastcall FUN_004065f8(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0x98);
  if (*(uint *)(param_1 + 0xa8) <= param_2) {
    uVar4 = *puVar1;
    iVar3 = *(int *)(param_1 + 0x9c);
    if (uVar4 != 0 || iVar3 != 0) goto LAB_00406623;
  }
  uVar4 = *puVar1;
  iVar3 = *(int *)(param_1 + 0x9c);
  *(uint *)(param_1 + 0xa8) = param_2;
LAB_00406623:
  if (*(uint *)(param_1 + 0xa4) < param_2) {
    *(uint *)(param_1 + 0xa4) = param_2;
  }
  *puVar1 = uVar4 + 1;
  puVar1 = (uint *)(param_1 + 0x90);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + (uint)CARRY4(uVar2,param_2);
  *(uint *)(param_1 + 0x9c) = iVar3 + (uint)(0xfffffffe < uVar4);
  return;
}



/* Function: FUN_00406653 */

void __fastcall FUN_00406653(int param_1)

{
  LPVOID lpMem;
  HANDLE hHeap;
  
  if (param_1 != 0) {
    lpMem = *(LPVOID *)(param_1 + 0x10);
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  return;
}



/* Function: FUN_00406673 */

void __thiscall FUN_00406673(void *this,undefined4 param_1,undefined4 param_2)

{
  PCEVENT_DESCRIPTOR pEVar1;
  int iVar2;
  int iVar3;
  
  if (this != (void *)0x0) {
    do {
      iVar3 = 2;
      if (2 < *(byte *)((int)&((PCEVENT_DESCRIPTOR)((int)this + 0x20))->Id + 1) + 2) {
        iVar2 = 0x20;
        do {
          iVar2 = iVar2 + 0x10;
          iVar3 = iVar3 + 1;
          *(undefined1 *)(*(int *)((int)this + 0x10) + -3 + iVar2) = 0;
        } while (iVar3 < (int)(*(byte *)((int)&((PCEVENT_DESCRIPTOR)((int)this + 0x20))->Id + 1) + 2
                              ));
      }
      EventWriteTransfer((REGHANDLE)CONCAT44(param_2,param_1),(PCEVENT_DESCRIPTOR)this,(LPCGUID)0x0,
                         (LPCGUID)0x0,(uint)(byte)((PCEVENT_DESCRIPTOR)((int)this + 0x20))->Id,
                         *(PEVENT_DATA_DESCRIPTOR *)((int)this + 0x10));
      pEVar1 = *(PCEVENT_DESCRIPTOR *)&((PCEVENT_DESCRIPTOR)((int)this + 0x10))->Level;
      FUN_00406653((int)this);
      this = pEVar1;
    } while (pEVar1 != (PCEVENT_DESCRIPTOR)0x0);
  }
  return;
}



/* Function: FUN_004066db */

int __fastcall FUN_004066db(int param_1,int param_2)

{
  void *this;
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  void **ppvVar4;
  void *pvVar5;
  void *local_8;
  
  if (*(int *)(param_1 + param_2 * 4) == 0) {
    iVar2 = 0;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
    this = *(void **)(param_1 + param_2 * 4);
    ppvVar3 = &local_8;
    *(undefined4 *)(param_1 + param_2 * 4) = 0;
    iVar2 = 0;
    local_8 = this;
    pvVar5 = this;
    while (pvVar5 != (void *)0x0) {
      pvVar1 = *(void **)((int)pvVar5 + 0x18);
      *(undefined4 *)((int)pvVar5 + 0x18) = 0;
      ppvVar3 = (void **)((int)*ppvVar3 + 0x14);
      pvVar5 = *ppvVar3;
      ppvVar4 = ppvVar3;
      while (pvVar5 != (void *)0x0) {
        ppvVar4 = (void **)((int)pvVar5 + 0x18);
        pvVar5 = *ppvVar4;
      }
      iVar2 = iVar2 + 1;
      *ppvVar4 = pvVar1;
      pvVar5 = *ppvVar3;
    }
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) - iVar2;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
    FUN_00406673(this,*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x18),
                 *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x1c));
  }
  return iVar2;
}



/* Function: FUN_00406773 */

void __fastcall FUN_00406773(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    uVar1 = *(uint *)(param_1 + 0x84);
    uVar4 = uVar1;
    do {
      if (*(int *)(param_1 + uVar4 * 4) != 0) {
        iVar2 = FUN_004066db(param_1,uVar4);
        uVar3 = uVar3 + iVar2;
      }
      uVar4 = uVar4 + 1 & 0x1f;
    } while ((uVar4 != uVar1) && (uVar3 < 0x10));
    *(uint *)(param_1 + 0x84) = uVar4;
    FUN_004065f8(param_1,uVar3);
  }
  return;
}



/* Function: FUN_004067ce */

void __fastcall FUN_004067ce(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int local_11c [10];
  undefined4 local_f4;
  undefined4 local_f0;
  wchar_t *local_ec;
  undefined2 local_e8;
  wchar_t *local_e4;
  undefined2 local_e0;
  wchar_t *local_dc;
  undefined2 local_d8;
  wchar_t *local_d4;
  undefined2 local_d0;
  wchar_t *local_cc;
  undefined2 local_c8;
  wchar_t *local_c4;
  undefined2 local_c0;
  wchar_t *local_bc;
  undefined2 local_b8;
  wchar_t *local_b4;
  undefined2 local_b0;
  wchar_t *local_ac;
  undefined2 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  int local_5c;
  int *local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int *local_28;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_00409180 ^ (uint)&stack0xfffffffc;
  local_5c = param_1;
  if (*(uint *)(param_1 + 0x80) != 0) {
    FUN_004065f8(param_1,*(uint *)(param_1 + 0x80));
    iVar3 = *(int *)(param_1 + 0x90);
    local_58 = (int *)(param_1 + 0x90);
    local_28 = *(int **)(param_1 + 0x94);
    uVar4 = 0;
    if (iVar3 != 0 || *(int **)(param_1 + 0x94) != (int *)0x0) {
      if ((5 < DAT_00409028) && (uVar2 = FUN_00402187(&DAT_00409028,0,0x2000), (char)uVar2 != '\0'))
      {
        local_a8 = 0x18;
        local_f4 = *(undefined4 *)(param_1 + 0xb4);
        local_2c = &local_f4;
        local_6c = *(undefined4 *)(param_1 + 0xb0);
        local_30 = &local_6c;
        local_74 = *(undefined4 *)(param_1 + 0xac);
        local_34 = &local_74;
        local_7c = *(undefined4 *)(param_1 + 0xa8);
        local_38 = &local_7c;
        local_84 = *(undefined4 *)(param_1 + 0xa4);
        local_3c = &local_84;
        local_88 = local_28;
        local_28 = &local_8c;
        local_c0 = 0x2a;
        local_d8 = 0x26;
        local_94 = *(undefined4 *)(param_1 + 0xa0);
        local_40 = &local_94;
        local_e0 = 0x20;
        local_9c = *(undefined4 *)(param_1 + 0x98);
        local_44 = &local_9c;
        local_d0 = 0x22;
        local_98 = *(undefined4 *)(param_1 + 0x9c);
        local_19 = 4;
        local_60 = 1;
        local_ac = L"SummaryCount";
        local_1a = 4;
        local_f0 = 0;
        local_b4 = L"NumLargeEventFailures";
        local_1b = 4;
        local_68 = 0;
        local_bc = L"NumAllocationFailures";
        local_1c = 4;
        local_70 = 0;
        local_c4 = L"NumBucketLimitReached";
        local_1d = 4;
        local_78 = 0;
        local_cc = L"MinEntriesFlushed";
        local_1e = 4;
        local_80 = 0;
        local_d4 = L"MaxEntriesFlushed";
        local_1f = 4;
        local_dc = L"TotalEntriesFlushed";
        local_20 = 4;
        local_90 = 0;
        local_e4 = L"MaxEntriesStored";
        local_21 = 4;
        local_ec = L"NumFlushes";
        local_e8 = 0x14;
        iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 4);
        local_48 = &local_18;
        local_54 = &local_a4;
        local_18 = *(undefined4 *)(iVar1 + -0x10);
        uStack_14 = *(undefined4 *)(iVar1 + -0xc);
        uStack_10 = *(undefined4 *)(iVar1 + -8);
        uStack_c = *(undefined4 *)(iVar1 + -4);
        local_4c = 0xffffffff;
        local_22 = 0;
        local_50 = 300;
        local_a4 = 0x1000000;
        local_a0 = 0;
        local_c8 = local_d0;
        local_b8 = local_c0;
        local_b0 = local_c0;
        local_8c = iVar3;
        FUN_00402392(local_98,&DAT_00401a36,local_98,local_98,&local_54,&local_50,&local_4c,
                     &local_22,&local_48,&local_ec,&local_44,&local_21,&local_e4,&local_40,&local_20
                     ,&local_dc,&local_28,&local_1f,&local_d4,&local_3c,&local_1e,&local_cc,
                     &local_38,&local_1d,&local_c4,&local_34,&local_1c,&local_bc,&local_30,&local_1b
                     ,&local_b4,&local_2c,&local_1a,&local_ac,&local_60,&local_19);
      }
      piVar5 = local_11c;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      piVar5 = local_11c;
      piVar6 = local_58;
      for (iVar3 = 10; param_1 = local_5c, iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
    }
    do {
      FUN_004066db(param_1,uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x20);
  }
  FUN_004070c0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00406af9 */

void __fastcall FUN_00406af9(int param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\0') {
    FUN_00406773(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0xd0) = 0;
    FUN_004067ce(param_1);
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00406422(*(PTP_TIMER *)(param_1 + 200),*(uint *)(param_1 + 0xcc));
  }
  return;
}



/* Function: FUN_00406b50 */

void FUN_00406b50(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  BOOLEAN BVar1;
  int iVar2;
  
  if ((((param_2 == 2) && (param_4 == 0x20)) && (param_5 == 0)) &&
     (BVar1 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_00409660), iVar2 = DAT_00409664,
     BVar1 != '\0')) {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc4)) {
      FUN_004067ce(iVar2);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00409660);
  }
  return;
}



/* Function: FUN_00406bb0 */

void FUN_00406bb0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_9 + 0xb8);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0040a1dc)
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(undefined4 *)(param_9 + 0xbc));
    (*pcVar1)();
  }
  if (param_2 == 1) {
    FUN_004067ce(param_9);
  }
  else if (param_2 == 2) {
    FUN_00406773(param_9);
  }
  return;
}



/* Function: FUN_00406c19 */

int FUN_00406c19(void)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  pvVar1 = FUN_00406532('\x01');
  if (pvVar1 == (LPVOID)0x0) {
    iVar2 = FUN_004022c3(&DAT_00409000,0,0);
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0xb8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xbc) = 0;
    *(undefined4 **)((int)pvVar1 + 0xc0) = &DAT_00409000;
    uVar3 = FUN_004063a2((uint)pvVar1);
    *(undefined4 *)((int)pvVar1 + 0xcc) = uVar3;
    iVar2 = FUN_004022c3(&DAT_00409000,FUN_00406bb0,pvVar1);
    if (iVar2 < 0) {
      DAT_00409020 = 0;
      FUN_0040650c(pvVar1);
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_00409660);
      if (DAT_00409664 == 0) {
        FUN_004022c3(&DAT_00409028,FUN_00406b50,0);
      }
      piVar4 = &DAT_00409664;
      iVar2 = DAT_00409664;
      while (iVar2 != 0) {
        if (*(undefined4 **)(iVar2 + 0xc0) == &DAT_00409000) goto LAB_00406cd2;
        piVar4 = (int *)(iVar2 + 0xc4);
        iVar2 = *piVar4;
      }
      *piVar4 = (int)pvVar1;
LAB_00406cd2:
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00409660);
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* Function: FUN_00406ce7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406ce7(void)

{
  int *piVar1;
  REGHANDLE RegHandle;
  LPVOID pvVar2;
  int *piVar3;
  LPVOID pvVar4;
  
  if (DAT_00409020 != FUN_00406bb0) {
    FUN_004022a3(&DAT_00409000);
    return;
  }
  pvVar4 = (LPVOID)0x0;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_00409660);
  pvVar2 = DAT_00409664;
  piVar3 = (int *)&DAT_00409664;
  do {
    if (pvVar2 == (LPVOID)0x0) {
LAB_00406d74:
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_00409660);
      if (pvVar4 != (LPVOID)0x0) {
        FUN_004064c7((int)pvVar4);
      }
      FUN_004022a3(&DAT_00409000);
      DAT_00409020 = (code *)0x0;
      FUN_0040650c(pvVar4);
      return;
    }
    piVar1 = (int *)((int)pvVar2 + 0xc4);
    if (*(undefined4 **)((int)pvVar2 + 0xc0) == &DAT_00409000) {
      *piVar3 = *piVar1;
      FUN_004067ce((int)pvVar2);
      RegHandle = _DAT_00409040;
      pvVar4 = pvVar2;
      if (DAT_00409664 == (LPVOID)0x0) {
        DAT_00409028 = 0;
        _DAT_00409040 = 0.0;
        EventUnregister(RegHandle);
      }
      goto LAB_00406d74;
    }
    pvVar2 = (LPVOID)*piVar1;
    piVar3 = piVar1;
  } while( true );
}



/* Function: FUN_00406da4 */

void FUN_00406da4(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_00401730,DelayLoadFailureHook_exref,param_2,DAT_00401730);
  return;
}



/* Function: FUN_00406de0 */

undefined4 FUN_00406de0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00406e05();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00406e11();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00406e05 */

undefined * FUN_00406e05(void)

{
  return &DAT_00409200;
}



/* Function: FUN_00406e11 */

undefined * FUN_00406e11(void)

{
  return &DAT_00409208;
}



/* Function: FUN_00406e20 */

undefined4 FUN_00406e20(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00406e05();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00406e11();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00406e50 */

void FUN_00406e50(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(1);
  uVar3 = FUN_00407471();
  o__set_fmode(uVar3);
  uVar3 = FUN_00407468();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_004076fc();
    FUN_0040734f(FUN_00407730);
    uVar3 = FUN_0040745e();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_0040747d();
      guard_check_icall();
      guard_check_icall();
      FUN_00407498();
      uVar3 = FUN_00407468();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_0040748f();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_00407468();
      iVar5 = thunk_FUN_00407468();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_00407504();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00406ef0 */

undefined4 FUN_00406ef0(void)

{
  FUN_004074c9();
  return 0;
}



/* Function: FUN_00406f00 */

void FUN_00406f00(void)

{
  undefined4 uVar1;
  
  FUN_00407674();
  uVar1 = FUN_00407468();
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
    if (DAT_00409210 != 1) {
      if (DAT_00409210 == 0) {
        DAT_00409210 = 1;
        iVar4 = initterm_e(&DAT_00401154,&DAT_00401168);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_00401130,&DAT_00401150);
        DAT_00409210 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_004074ec();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_0040a1dc)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_004074f8();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      o__get_initial_wide_environment();
      piVar5 = (int *)o___p___wargv();
      iVar4 = *piVar5;
      piVar5 = (int *)o___p___argc();
      unaff_ESI = FUN_00404f0c(*piVar5,iVar4);
      uVar6 = FUN_0040762c();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_0040708b;
    }
  }
  FUN_00407504();
LAB_0040708b:
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



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_004070c0 */

void __fastcall FUN_004070c0(int param_1)

{
  if (param_1 == DAT_00409180) {
    return;
  }
  FUN_00407837();
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
      if (DAT_00409214 != 0) {
        uVar3 = DAT_00409214;
        uVar1 = DAT_00409214;
      }
      DAT_00409214 = uVar1;
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
    DAT_00409231 = 1;
  }
  FUN_00407939();
  cVar1 = FUN_0040748f();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_0040748f();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_0040748f();
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
  
  if (DAT_00409230 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00407504();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_00409218 = 0xffffffff;
    _DAT_0040921c = 0xffffffff;
    _DAT_00409220 = 0xffffffff;
    _DAT_00409224 = 0xffffffff;
    _DAT_00409228 = 0xffffffff;
    _DAT_0040922c = 0xffffffff;
LAB_00407210:
    DAT_00409230 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_00409218);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_00409224);
      if (uVar3 == 0) goto LAB_00407210;
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
  iVar1 = DAT_00409214;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_00409214 = 0;
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
  if ((DAT_00409231 == '\0') || (param_2 == '\0')) {
    FUN_0040748f();
    FUN_0040748f();
  }
  return 1;
}



/* Function: FUN_00407319 */

undefined4 __cdecl FUN_00407319(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_00409218 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_00409218,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_0040734f */

int __cdecl FUN_0040734f(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00407319(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_0040736c */

void __cdecl FUN_0040736c(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_00407390 */

undefined4 * __thiscall FUN_00407390(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004073b8 */

uint FUN_004073b8(void)

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
  if ((DAT_00409180 == 0xbb40e64e) || ((DAT_00409180 & 0xffff0000) == 0)) {
    DAT_00409180 = FUN_004073b8();
    if (DAT_00409180 == 0xbb40e64e) {
      DAT_00409180 = 0xbb40e64f;
    }
    else if ((DAT_00409180 & 0xffff0000) == 0) {
      DAT_00409180 = DAT_00409180 | (DAT_00409180 | 0x4711) << 0x10;
    }
  }
  DAT_004091c0 = ~DAT_00409180;
  return;
}



/* Function: FUN_0040745e */

undefined4 FUN_0040745e(void)

{
  return 1;
}



/* Function: FUN_00407468 */

undefined4 FUN_00407468(void)

{
  return 0;
}



/* Function: FUN_00407471 */

undefined4 FUN_00407471(void)

{
  return 0x4000;
}



/* Function: FUN_0040747d */

void FUN_0040747d(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_00409238);
  return;
}



/* Function: FUN_0040748f */

undefined1 FUN_0040748f(void)

{
  return 1;
}



/* Function: FUN_00407498 */

void FUN_00407498(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_00407504();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_004074c9 */

void FUN_004074c9(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00406e05();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00406e11();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_004074ec */

undefined * FUN_004074ec(void)

{
  return &DAT_00409670;
}



/* Function: FUN_004074f8 */

undefined * FUN_004074f8(void)

{
  return &DAT_0040966c;
}



/* Function: FUN_00407504 */

void FUN_00407504(void)

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
  FUN_004076ee();
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
    FUN_004076ee();
  }
  return;
}



/* Function: thunk_FUN_00407468 */

undefined4 thunk_FUN_00407468(void)

{
  return 0;
}



/* Function: FUN_0040762c */

uint FUN_0040762c(void)

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



/* Function: FUN_00407674 */

void FUN_00407674(void)

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



/* Function: FUN_004076ee */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004076ee(void)

{
  _DAT_00409240 = 0;
  return;
}



/* Function: FUN_004076fc */

/* WARNING: Removing unreachable block (ram,0x0040770e) */
/* WARNING: Removing unreachable block (ram,0x0040770f) */
/* WARNING: Removing unreachable block (ram,0x00407715) */
/* WARNING: Removing unreachable block (ram,0x0040771f) */
/* WARNING: Removing unreachable block (ram,0x00407726) */

void FUN_004076fc(void)

{
  return;
}



/* Function: FUN_00407730 */

/* WARNING: Removing unreachable block (ram,0x00407742) */
/* WARNING: Removing unreachable block (ram,0x00407743) */
/* WARNING: Removing unreachable block (ram,0x00407749) */
/* WARNING: Removing unreachable block (ram,0x00407753) */
/* WARNING: Removing unreachable block (ram,0x0040775a) */

void FUN_00407730(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00409180 ^ (uint)&param_2;
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
  
  iVar1 = FUN_00407d86(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_00409180,FUN_004070c0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00407807 */

void __cdecl FUN_00407807(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00407837 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407837(void)

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
  _DAT_00409340 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00409348 = (undefined4)uVar9;
  _DAT_00409358 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0040935c = &stack0x00000004;
  _DAT_00409298 = 0x10001;
  _DAT_00409248 = 0xc0000409;
  _DAT_0040924c = 1;
  _DAT_00409258 = 1;
  DAT_0040925c = 2;
  _DAT_00409254 = unaff_retaddr;
  _DAT_00409324 = in_GS;
  _DAT_00409328 = in_FS;
  _DAT_0040932c = in_ES;
  _DAT_00409330 = in_DS;
  _DAT_00409334 = unaff_EDI;
  _DAT_00409338 = unaff_ESI;
  _DAT_0040933c = unaff_EBX;
  _DAT_00409344 = uVar3;
  _DAT_0040934c = unaff_EBP;
  DAT_00409350 = unaff_retaddr;
  _DAT_00409354 = in_CS;
  _DAT_00409360 = in_SS;
  FUN_00407807((_EXCEPTION_POINTERS *)&PTR_DAT_00401008);
  return;
}



/* Function: FUN_00407939 */

/* WARNING: Removing unreachable block (ram,0x004079aa) */
/* WARNING: Removing unreachable block (ram,0x0040796e) */
/* WARNING: Removing unreachable block (ram,0x00407a22) */

undefined4 FUN_00407939(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_00409564 = 0;
  DAT_004091c4 = DAT_004091c4 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_004091c4;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_00409568 = DAT_00409568 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_00409568 = DAT_00409568 | 2;
      }
    }
    DAT_00409564 = 1;
    uVar5 = DAT_004091c4 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_004091c4 | 6;
      DAT_00409564 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_00409564 = 3;
        uVar5 = DAT_004091c4 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_00409564 = 5;
          uVar5 = DAT_004091c4 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_004091c4 = DAT_004091c4 | 0x6e;
            DAT_00409564 = 6;
            uVar5 = DAT_004091c4;
          }
        }
      }
    }
  }
  DAT_004091c4 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_004091c8 != 0;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: Unwind@00407b70 */

void Unwind_00407b70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



/* Function: o___p___argc */

void __cdecl o___p___argc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___argc();
  return;
}



/* Function: o___p___wargv */

void __cdecl o___p___wargv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p___wargv();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_initial_wide_environment */

void __cdecl o__get_initial_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_initial_wide_environment();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: FUN_00407ccc */

int __cdecl
FUN_00407ccc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_00406e05();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_00407d06 */

void __cdecl
FUN_00407d06(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00407ccc(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: HeapFree */

BOOL HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}



/* Function: FormatMessageW */

DWORD FormatMessageW(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,
                    LPWSTR lpBuffer,DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageW(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}



/* Function: HeapAlloc */

LPVOID HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}



/* Function: GetProcessHeap */

HANDLE GetProcessHeap(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetProcessHeap();
  return pvVar1;
}



/* Function: EventWriteTransfer */

ULONG EventWriteTransfer(REGHANDLE RegHandle,PCEVENT_DESCRIPTOR EventDescriptor,LPCGUID ActivityId,
                        LPCGUID RelatedActivityId,ULONG UserDataCount,
                        PEVENT_DATA_DESCRIPTOR UserData)

{
  ULONG UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = EventWriteTransfer(RegHandle,EventDescriptor,ActivityId,RelatedActivityId,UserDataCount,
                             UserData);
  return UVar1;
}



/* Function: DelayLoad_Ordinal_797 */

void DelayLoad_Ordinal_797(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00406da4(&ImgDelayDescr_00408648,&Ordinal_797_exref);
                    /* WARNING: Could not recover jumptable at 0x00407d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_00407d86 */

int __cdecl FUN_00407d86(int param_1)

{
  uint uVar1;
  
  if ((DAT_00409564 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: Ordinal_201 */

void Ordinal_201(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_201();
  return;
}



/* Function: Ordinal_7 */

void Ordinal_7(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_7();
  return;
}



/* Function: Ordinal_6 */

void Ordinal_6(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407e1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_6();
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00409180 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00409180 ^ (uint)&param_1;
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
                    /* WARNING: Could not recover jumptable at 0x00407f31. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: FUN_004081a0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004081a0(void)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_004080fa;
  if (DAT_00409054 != (int *)0x0) {
    puVar1 = (undefined1 *)FUN_00405563(DAT_00409054);
  }
  return puVar1;
}



/* Function: FUN_004081d0 */

void FUN_004081d0(void)

{
  FUN_004052e0((int *)&DAT_004091d4);
  return;
}



