/* Function: FUN_00401b00 */

void FUN_00401b00(void)

{
  FUN_00403317();
  DAT_00406498 = 1;
  return;
}



/* Function: FUN_00401b20 */

void FUN_00401b20(void)

{
  FUN_00403cfc(FUN_00404940);
  return;
}



/* Function: FUN_00401b40 */

void FUN_00401b40(void)

{
  FUN_00403cfc(FUN_00404930);
  return;
}



/* Function: FUN_00401b52 */

undefined4 __fastcall FUN_00401b52(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00401b80 */

undefined4 FUN_00401b80(void)

{
  return DAT_00406490;
}



/* Function: FUN_00401b90 */

undefined * FUN_00401b90(void)

{
  return &DAT_00404a74;
}



/* Function: FUN_00401ba0 */

undefined * FUN_00401ba0(void)

{
  return &DAT_00404a7c;
}



/* Function: FUN_00401bb0 */

undefined * FUN_00401bb0(void)

{
  return &DAT_00404a80;
}



/* Function: FUN_00401bc0 */

undefined * FUN_00401bc0(void)

{
  return &DAT_00406488;
}



/* Function: FUN_00401bce */

int __fastcall FUN_00401bce(int *param_1)

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



/* Function: FUN_00401bfe */

int __fastcall FUN_00401bfe(int *param_1)

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



/* Function: FUN_00401c28 */

uint __thiscall FUN_00401c28(void *this,char param_1)

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
  (*(code *)PTR_guard_check_icall_00407190)(this);
  piVar2 = (int *)(*pcVar1)();
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0x18);
  (*(code *)PTR_guard_check_icall_00407190)(this);
  piVar3 = (int *)(*pcVar1)();
  while( true ) {
    do {
      piVar2 = piVar2 + 1;
      if (piVar3 <= piVar2) {
                    /* WARNING: Load size is inaccurate */
        pcVar1 = *(code **)(*this + 0xc);
        (*(code *)PTR_guard_check_icall_00407190)(this);
        iVar6 = (*pcVar1)();
        return CONCAT31((int3)((uint)-iVar6 >> 8),'\x01' - (iVar6 != 0));
      }
    } while (*piVar2 == 0);
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *(code **)(*this + 0xc);
    (*(code *)PTR_guard_check_icall_00407190)(this);
    uVar4 = (*pcVar1)();
    if ((uVar4 != 0) && (param_1 == '\0')) break;
    if (**(int **)(*piVar2 + 0xc) != 0) {
                    /* WARNING: Load size is inaccurate */
      pcVar1 = *(code **)(*this + 0x1c);
      (*(code *)PTR_guard_check_icall_00407190)(this);
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
        (*(code *)PTR_guard_check_icall_00407190)(piVar5);
        (*pcVar1)();
      }
    }
  }
  return uVar4 & 0xffffff00;
}



/* Function: FUN_00401d21 */

int __fastcall
FUN_00401d21(int *param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5)

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
    (*(code *)PTR_guard_check_icall_00407190)(param_1);
    pRVar2 = (PSRWLOCK)(*pcVar1)();
    AcquireSRWLockShared(pRVar2);
    if (*(int *)param_4[3] != 0) {
      local_8 = (int *)DecodePointer(*(PVOID *)param_4[3]);
      pcVar1 = *(code **)*local_8;
      (*(code *)PTR_guard_check_icall_00407190)(local_8,&DAT_00401570,param_5);
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
  (*(code *)PTR_guard_check_icall_00407190)(param_2,param_4,&DAT_00401570,&local_8);
  iVar3 = (*pcVar1)();
  if (-1 < iVar3) {
    if ((*param_2 & 4) == 0) {
      pcVar1 = *(code **)(*param_1 + 0x1c);
      (*(code *)PTR_guard_check_icall_00407190)(param_1);
      pRVar2 = (PSRWLOCK)(*pcVar1)();
      AcquireSRWLockExclusive(pRVar2);
      if (*(PVOID *)param_4[3] == (PVOID)0x0) {
        pvVar4 = EncodePointer(local_8);
        *(PVOID *)param_4[3] = pvVar4;
      }
      else {
        piVar5 = (int *)DecodePointer(*(PVOID *)param_4[3]);
        pcVar1 = *(code **)(*piVar5 + 4);
        (*(code *)PTR_guard_check_icall_00407190)(piVar5);
        (*pcVar1)();
      }
      if (pRVar2 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar2);
      }
      if (piVar5 != (int *)0x0) {
        pcVar1 = *(code **)(*local_8 + 8);
        (*(code *)PTR_guard_check_icall_00407190)(local_8);
        (*pcVar1)();
        pcVar1 = *(code **)(*local_8 + 8);
        (*(code *)PTR_guard_check_icall_00407190)(local_8);
        (*pcVar1)();
        local_8 = piVar5;
      }
    }
    *param_5 = local_8;
    iVar3 = 0;
  }
  return iVar3;
}



/* Function: FUN_00401e80 */

int __fastcall FUN_00401e80(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int local_10;
  
  local_10 = 0;
  pcVar1 = *(code **)(*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_00407190)(param_1);
  iVar3 = (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x14);
  (*(code *)PTR_guard_check_icall_00407190)(param_1);
  piVar4 = (int *)(*pcVar1)();
  piVar10 = (int *)(iVar3 + 4);
  piVar6 = piVar10;
  uVar7 = 0;
  if (piVar10 < piVar4) {
    do {
      uVar8 = uVar7 + 1;
      if (*piVar6 == 0) {
        uVar8 = uVar7;
      }
      piVar6 = piVar6 + 1;
      uVar7 = uVar8;
    } while (piVar6 < piVar4);
    if (uVar8 != 0) {
      puVar5 = (undefined4 *)
               FUN_00403d2f(-(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar8 * 4));
      piVar6 = piVar10;
      puVar9 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        local_10 = -0x7ff8fff2;
      }
      else {
        do {
          if (*piVar6 != 0) {
            *puVar9 = *(undefined4 *)(*(int *)(*piVar6 + 0xc) + 4);
            puVar9 = puVar9 + 1;
          }
          piVar6 = piVar6 + 1;
        } while (piVar6 < piVar4);
        pcVar1 = *(code **)(*param_1 + 0x2c);
        (*(code *)PTR_guard_check_icall_00407190)(param_1,0,puVar5,uVar8);
        local_10 = (*pcVar1)();
        puVar9 = puVar5;
        do {
          if (*piVar10 != 0) {
            uVar2 = *puVar9;
            puVar9 = puVar9 + 1;
            *(undefined4 *)(*(int *)(*piVar10 + 0xc) + 4) = uVar2;
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 < piVar4);
      }
      o_free(puVar5);
      if (local_10 < 0) goto LAB_00401fed;
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x18);
  (*(code *)PTR_guard_check_icall_00407190)(param_1);
  piVar10 = (int *)(*pcVar1)();
  piVar4 = piVar4 + 1;
  for (piVar6 = piVar4; piVar6 < piVar10; piVar6 = piVar6 + 1) {
    if (*piVar6 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x24);
      (*(code *)PTR_guard_check_icall_00407190)
                (param_1,0,*(undefined4 *)(*(int *)(*piVar6 + 0xc) + 4));
      local_10 = (*pcVar1)();
      if (-1 < local_10) {
        do {
          if (*piVar4 != 0) {
            *(undefined4 *)(*(int *)(*piVar4 + 0xc) + 4) = 0;
          }
          piVar4 = piVar4 + 1;
        } while (piVar4 < piVar10);
      }
      break;
    }
  }
LAB_00401fed:
  FUN_00401c28(param_1,'\0');
  return local_10;
}



/* Function: FUN_00402004 */

void __fastcall FUN_00402004(undefined4 param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = RoGetMatchingRestrictedErrorInfo(param_1,&local_8);
  if (-1 < iVar1) {
    SetRestrictedErrorInfo(local_8);
  }
  FUN_004028f7(&local_8);
  return;
}



/* Function: FUN_00402036 */

void __thiscall FUN_00402036(void *this,undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401540,this,0);
  return;
}



/* Function: FUN_0040205e */

void __thiscall FUN_0040205e(void *this,undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401540,this,&stack0x0000000c,4,0);
  return;
}



/* Function: FUN_00402090 */

undefined4 FUN_00402090(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

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



/* Function: FUN_00402117 */

undefined4 * __fastcall FUN_00402117(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_0040648c;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_004010fc;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 4);
    (*(code *)PTR_guard_check_icall_00407190)(piVar2);
    (*pcVar1)();
  }
  *param_1 = &PTR_FUN_00401114;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((((undefined **)PTR_LOOP_00406000 != &PTR_LOOP_00406000) &&
      ((PTR_LOOP_00406000[0x1c] & 4) != 0)) && (2 < (byte)PTR_LOOP_00406000[0x19])) {
    FUN_00402036((void *)0xa,*(undefined4 *)(PTR_LOOP_00406000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00406000 + 0x14));
  }
  return param_1;
}



/* Function: FUN_00402190 */

undefined4 * __thiscall FUN_00402190(void *this,byte param_1)

{
  FUN_004021ba((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00403d19(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004021ba */

void __fastcall FUN_004021ba(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401114;
  if ((((undefined **)PTR_LOOP_00406000 != &PTR_LOOP_00406000) &&
      ((PTR_LOOP_00406000[0x1c] & 4) != 0)) && (2 < (byte)PTR_LOOP_00406000[0x19])) {
    FUN_00402036((void *)0xb,*(undefined4 *)(PTR_LOOP_00406000 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00406000 + 0x14));
  }
  FUN_004028f7(param_1 + 4);
  FUN_004028f7(param_1 + 3);
  param_1[2] = 0xc0000001;
  return;
}



/* Function: FUN_00402210 */

HRESULT FUN_00402210(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  HRESULT HVar3;
  int *piVar4;
  int iVar5;
  void *this;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *local_18;
  int iStack_14;
  int *piStack_10;
  code *apcStack_c [2];
  
  iVar5 = 0;
  local_18 = (undefined4 *)0x0;
  HVar3 = CoCreateInstance((IID *)&DAT_00401550,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401520,&local_18);
  puVar2 = local_18;
  if (HVar3 < 0) {
    if (((undefined **)PTR_LOOP_00406000 == &PTR_LOOP_00406000) ||
       ((PTR_LOOP_00406000[0x1c] & 4) == 0)) goto LAB_004023b2;
    uVar7 = *(undefined4 *)(PTR_LOOP_00406000 + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_00406000 + 0x10);
    this = (void *)0xc;
  }
  else {
    apcStack_c[0] = *(code **)*local_18;
    piStack_10 = param_1 + 3;
    piVar4 = (int *)*piStack_10;
    if (piVar4 != (int *)0x0) {
      *piStack_10 = 0;
      pcVar1 = *(code **)(*piVar4 + 8);
      (*(code *)PTR_guard_check_icall_00407190)(piVar4);
      (*pcVar1)();
    }
    pcVar1 = apcStack_c[0];
    (*(code *)PTR_guard_check_icall_00407190)(puVar2,&DAT_00401530,piStack_10);
    HVar3 = (*pcVar1)();
    if (HVar3 < 0) {
      if (((undefined **)PTR_LOOP_00406000 == &PTR_LOOP_00406000) ||
         ((PTR_LOOP_00406000[0x1c] & 4) == 0)) goto LAB_004023b2;
      uVar7 = *(undefined4 *)(PTR_LOOP_00406000 + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_00406000 + 0x10);
      this = (void *)0xd;
    }
    else {
      piVar4 = FUN_00402b9b(apcStack_c,param_1,FUN_00402470,0);
      if (&iStack_14 != piVar4) {
        iVar5 = *piVar4;
        *piVar4 = 0;
      }
      iStack_14 = param_1[4];
      param_1[4] = iVar5;
      FUN_004028f7(&iStack_14);
      FUN_004028f7((int *)apcStack_c);
      HVar3 = -0x7ff8fff2;
      if (param_1[4] == 0) {
        if (((undefined **)PTR_LOOP_00406000 == &PTR_LOOP_00406000) ||
           ((PTR_LOOP_00406000[0x1c] & 4) == 0)) goto LAB_004023b2;
        uVar7 = *(undefined4 *)(PTR_LOOP_00406000 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_00406000 + 0x10);
        this = (void *)0xe;
      }
      else {
        pcVar1 = *(code **)(*(int *)param_1[3] + 0xc);
        (*(code *)PTR_guard_check_icall_00407190)
                  ((int *)param_1[3],param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_1[4]);
        HVar3 = (*pcVar1)();
        if (-1 < HVar3) {
          pcVar1 = *(code **)(*param_1 + 4);
          (*(code *)PTR_guard_check_icall_00407190)(param_1);
          (*pcVar1)();
          goto LAB_004023b2;
        }
        if (((undefined **)PTR_LOOP_00406000 == &PTR_LOOP_00406000) ||
           ((PTR_LOOP_00406000[0x1c] & 4) == 0)) goto LAB_004023b2;
        uVar7 = *(undefined4 *)(PTR_LOOP_00406000 + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_00406000 + 0x10);
        this = (void *)0xf;
      }
    }
  }
  FUN_0040205e(this,uVar6,uVar7);
LAB_004023b2:
  FUN_004028f7((int *)&local_18);
  return HVar3;
}



/* Function: FUN_004023d0 */

undefined4 FUN_004023d0(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  LOCK();
  iVar3 = param_1[5];
  if (iVar3 == 0) {
    param_1[5] = 1;
    iVar3 = 0;
  }
  UNLOCK();
  if (iVar3 == 0) {
    if ((((undefined **)PTR_LOOP_00406000 != &PTR_LOOP_00406000) &&
        ((PTR_LOOP_00406000[0x1c] & 4) != 0)) && (2 < (byte)PTR_LOOP_00406000[0x19])) {
      FUN_00402036((void *)0x10,*(undefined4 *)(PTR_LOOP_00406000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00406000 + 0x14));
    }
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 0x10);
      (*(code *)PTR_guard_check_icall_00407190)(piVar1);
      (*pcVar2)();
    }
    pcVar2 = *(code **)(*param_1 + 8);
    (*(code *)PTR_guard_check_icall_00407190)(param_1);
    (*pcVar2)();
    if ((((undefined **)PTR_LOOP_00406000 != &PTR_LOOP_00406000) &&
        ((PTR_LOOP_00406000[0x1c] & 4) != 0)) && (2 < (byte)PTR_LOOP_00406000[0x19])) {
      FUN_00402036((void *)0x11,*(undefined4 *)(PTR_LOOP_00406000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00406000 + 0x14));
    }
  }
  return 0;
}



/* Function: FUN_00402470 */

void __fastcall FUN_00402470(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
  (*(code *)PTR_guard_check_icall_00407190)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00402490 */

void __thiscall
FUN_00402490(void *this,undefined4 param_1,undefined4 param_2,IID *param_3,undefined4 *param_4,
            int param_5,uint param_6)

{
  FUN_00402c1b(this,param_3,param_4,param_5,param_6);
  return;
}



/* Function: FUN_004024b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004024b0(void)

{
  HRESULT HVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_2c [2];
  MSG MStack_24;
  
  _DAT_00406478 = 1;
  puVar6 = &DAT_00406460;
  DAT_00406470 = 0;
  DAT_00406460 = 0;
  piVar7 = (int *)&DAT_00406458;
  _DAT_0040647c = 0;
  DAT_00406458 = &DAT_00401580;
  PTR_LOOP_00406000 = (undefined *)&DAT_00406460;
  do {
    local_2c[0] = *piVar7;
    local_2c[1] = 0;
    piVar7 = piVar7 + 1;
    puVar6[8] = local_2c[0];
    RegisterTraceGuidsW(FUN_00402090,puVar6,local_2c[0],1,local_2c,0,0,puVar6 + 2);
    puVar6 = (undefined4 *)*puVar6;
  } while (puVar6 != (undefined4 *)0x0);
  HVar1 = CoInitializeEx((LPVOID)0x0,2);
  if (-1 < HVar1) {
    DVar2 = GetCurrentThreadId();
    piVar7 = (int *)FUN_00403317();
    if (piVar7[1] == 0) {
      DAT_004064b4 = 1;
      DAT_004064ac = 0;
      _DAT_004064a8 = &PTR_FUN_00401094;
      _DAT_004064b0 = DVar2;
      piVar7[1] = (int)&DAT_004064a8;
    }
    BVar3 = ImmDisableIME(0xffffffff);
    if (((BVar3 == 0) && ((undefined **)PTR_LOOP_00406000 != &PTR_LOOP_00406000)) &&
       ((PTR_LOOP_00406000[0x1c] & 4) != 0)) {
      FUN_00402036((void *)0x12,*(undefined4 *)(PTR_LOOP_00406000 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00406000 + 0x14));
    }
    iVar4 = InitProcessPriv(0xe,0x400000,1,1,0);
    if (iVar4 < 0) {
      if (((undefined **)PTR_LOOP_00406000 != &PTR_LOOP_00406000) &&
         ((PTR_LOOP_00406000[0x1c] & 4) != 0)) {
        FUN_0040205e((void *)0x13,*(undefined4 *)(PTR_LOOP_00406000 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00406000 + 0x14));
      }
    }
    else {
      iVar4 = InitThread(0x10002);
      if (iVar4 < 0) {
        if (((undefined **)PTR_LOOP_00406000 != &PTR_LOOP_00406000) &&
           ((PTR_LOOP_00406000[0x1c] & 4) != 0)) {
          FUN_0040205e((void *)0x14,*(undefined4 *)(PTR_LOOP_00406000 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00406000 + 0x14));
        }
        UnInitProcessPriv(0x400000);
      }
      if (-1 < iVar4) {
        iVar5 = FUN_00402cb0(piVar7);
        if (iVar5 < 0) {
          if (((undefined **)PTR_LOOP_00406000 != &PTR_LOOP_00406000) &&
             ((PTR_LOOP_00406000[0x1c] & 4) != 0)) {
            FUN_0040205e((void *)0x15,*(undefined4 *)(PTR_LOOP_00406000 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00406000 + 0x14));
          }
        }
        else {
          while (BVar3 = GetMessageW(&MStack_24,(HWND)0x0,0,0), 0 < BVar3) {
            TranslateMessage(&MStack_24);
            DispatchMessageW(&MStack_24);
          }
          FUN_00401e80(piVar7);
        }
      }
      if (-1 < iVar4) {
        UnInitThread();
        UnInitProcessPriv(0x400000);
      }
    }
    CoUninitialize();
  }
  puVar6 = (undefined4 *)PTR_LOOP_00406000;
  if ((undefined **)PTR_LOOP_00406000 != &PTR_LOOP_00406000) {
    for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
      if (puVar6[2] != 0 || puVar6[3] != 0) {
        UnregisterTraceGuids(puVar6[2],puVar6[3]);
        puVar6[2] = 0;
        puVar6[3] = 0;
      }
    }
    PTR_LOOP_00406000 = (undefined *)&PTR_LOOP_00406000;
  }
  return 0;
}



/* Function: FUN_00402700 */

ULONG FUN_00402700(int param_1)

{
  code *pcVar1;
  ULONG UVar2;
  
  UVar2 = CoReleaseServerProcess();
  if ((UVar2 == 0) && (*(int **)(param_1 + 4) != (int *)0x0)) {
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 4);
    (*(code *)PTR_guard_check_icall_00407190)();
    (*pcVar1)();
  }
  return UVar2;
}



/* Function: FUN_00402740 */

void FUN_00402740(void)

{
  CoAddRefServerProcess();
  return;
}



/* Function: FUN_00402750 */

undefined4 FUN_00402750(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RoRevokeActivationFactories(param_3);
  return 0;
}



/* Function: FUN_00402770 */

void __thiscall
FUN_00402770(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4
            ,uint param_5)

{
  FUN_00402fd2(this,param_3,param_4,param_5);
  return;
}



/* Function: FUN_00402790 */

void FUN_00402790(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

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



/* Function: FUN_004027d0 */

void __fastcall FUN_004027d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_1 = &PTR_FUN_004010cc;
  if (puVar1 != (undefined4 *)0x0) {
    if (*(char *)(puVar1 + 1) != '\0') {
      pcVar2 = *(code **)*puVar1;
      (*(code *)PTR_guard_check_icall_00407190)(1);
      (*pcVar2)();
    }
    param_1[1] = 0;
  }
  FUN_004028d5(param_1);
  return;
}



/* Function: FUN_00402810 */

undefined4 FUN_00402810(void)

{
  return 0;
}



/* Function: FUN_00402820 */

undefined4 FUN_00402820(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00402840 */

undefined4 FUN_00402840(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00402860 */

undefined4 FUN_00402860(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_00402880 */

undefined4 FUN_00402880(void)

{
  RoOriginateError(0x80004001,0);
  return 0x80004001;
}



/* Function: FUN_004028a0 */

int FUN_004028a0(void)

{
  int iVar1;
  
  iVar1 = DAT_00406490;
  LOCK();
  DAT_00406490 = DAT_00406490 + -1;
  UNLOCK();
  return iVar1 + -1;
}



/* Function: FUN_004028c0 */

int FUN_004028c0(void)

{
  int iVar1;
  
  iVar1 = DAT_00406490;
  LOCK();
  DAT_00406490 = DAT_00406490 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_004028d5 */

void __fastcall FUN_004028d5(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0040109c;
  FUN_00401c28(param_1,'\x01');
  DAT_0040648c = 0;
  DAT_00406498 = 0;
  return;
}



/* Function: FUN_004028f7 */

void __fastcall FUN_004028f7(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_00407190)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00402920 */

int FUN_00402920(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00401bfe(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x14);
      (*(code *)PTR_guard_check_icall_00407190)(1);
      (*pcVar1)();
    }
    if (DAT_0040648c != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0040648c + 8);
      (*(code *)PTR_guard_check_icall_00407190)(DAT_0040648c);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00402980 */

void FUN_00402980(int param_1)

{
  FUN_00401bce((int *)(param_1 + 8));
  return;
}



/* Function: FUN_004029a0 */

undefined4 FUN_004029a0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00401b52(param_2,(int *)&DAT_00401520);
  if (iVar1 == 0) {
    iVar1 = FUN_00401b52(extraout_ECX,(int *)&DAT_00401500);
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
  (*(code *)PTR_guard_check_icall_00407190)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_00402a10 */

undefined4 * __thiscall FUN_00402a10(void *this,byte param_1)

{
  FUN_004027d0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00403d19(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00402a40 */

undefined4 * __thiscall FUN_00402a40(void *this,byte param_1)

{
  FUN_004028d5((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00403d19(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00402a70 */

int __thiscall FUN_00402a70(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_00403d19(this);
  }
  return (int)this;
}



/* Function: FUN_00402aa0 */

undefined4 * __thiscall FUN_00402aa0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0040105c;
  if ((param_1 & 1) != 0) {
    FUN_00403d19(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00402ad0 */

undefined4 * FUN_00402ad0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)FUN_00403a24(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x8007000e;
  }
  else {
    puVar3[2] = 1;
    puVar3[4] = 4;
    *puVar3 = &PTR_FUN_0040112c;
    puVar2 = PTR_FUN_00401130;
    local_c = puVar3;
    (*(code *)PTR_guard_check_icall_00407190)(puVar3);
    (*(code *)puVar2)();
    local_8 = puVar3;
    FUN_004028f7((int *)&local_c);
    puVar3[4] = *(undefined4 *)param_1;
    pcVar1 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_00407190)(puVar3,param_3,param_4);
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
        pcVar1 = *(code **)(*DAT_0040648c + 4);
        (*(code *)PTR_guard_check_icall_00407190)(DAT_0040648c);
        (*pcVar1)();
        puVar4 = local_c;
      }
    }
  }
  FUN_004028f7((int *)&local_8);
  return puVar4;
}



/* Function: FUN_00402b9b */

undefined4 * __fastcall
FUN_00402b9b(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_14;
  
  puVar3 = (undefined4 *)FUN_00403a24(0x20);
  piVar2 = DAT_0040648c;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_00401048;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_00407190)(piVar2);
      (*pcVar1)();
    }
    *puVar3 = &PTR_FUN_00401034;
    puVar3[4] = param_2;
    puVar3[5] = uStack_14;
    puVar3[6] = param_3;
    puVar3[7] = param_4;
  }
  *param_1 = puVar3;
  return param_1;
}



/* Function: FUN_00402c1b */

HRESULT __fastcall
FUN_00402c1b(undefined4 param_1,IID *param_2,undefined4 *param_3,int param_4,uint param_5)

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
      if (local_8 < 0) goto LAB_00402c83;
      local_8 = CoRegisterClassObject
                          (local_c,(LPUNKNOWN)*param_3,4,4,(LPDWORD)(iVar1 + (int)param_3));
      uVar2 = uVar2 + 1;
      local_c = local_c + 1;
      param_3 = param_3 + 1;
    } while (uVar2 < param_5);
    if (local_8 < 0) goto LAB_00402c83;
  }
  local_8 = CoResumeClassObjects();
  if (-1 < local_8) {
    return local_8;
  }
LAB_00402c83:
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



/* Function: FUN_00402cb0 */

int __fastcall FUN_00402cb0(int *param_1)

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
  int local_10;
  int local_c;
  int local_8;
  
  pcVar1 = *(code **)(*param_1 + 0x10);
  iVar7 = 0;
  local_c = 0;
  local_18 = param_1;
  (*(code *)PTR_guard_check_icall_00407190)(param_1);
  iVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*local_18 + 0x14);
  (*(code *)PTR_guard_check_icall_00407190)(local_18);
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
      local_10 = FUN_00403d2f(-(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar8 * 4));
      local_8 = FUN_00403d2f(-(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar8 * 4));
      local_30 = (undefined4 *)
                 FUN_00403d2f(-(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar8 * 0x10));
      if (((local_10 == 0) || (local_8 == 0)) || (local_30 == (undefined4 *)0x0)) {
        iVar7 = -0x7ff8fff2;
      }
      else {
        uVar10 = 0;
        local_24 = 0;
        local_1c = local_2c;
        local_28 = local_30;
        do {
          if (iVar7 < 0) goto LAB_00402e69;
          puVar6 = (undefined4 *)*local_1c;
          if (puVar6 != (undefined4 *)0x0) {
            local_20 = 0;
            local_34 = 2;
            pcVar1 = (code *)*puVar6;
            (*(code *)PTR_guard_check_icall_00407190)(&local_34,puVar6,&DAT_00401560,&local_20);
            iVar7 = (*pcVar1)();
            local_c = iVar7;
            if (-1 < iVar7) {
              *(undefined4 *)(local_8 + uVar10 * 4) = local_20;
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
          (*(code *)PTR_guard_check_icall_00407190)(local_18,0,local_30,local_8,local_10,uVar8);
          iVar7 = (*pcVar1)();
          local_c = iVar7;
          if (-1 < iVar7) {
            uVar10 = 0;
            piVar4 = local_2c;
            do {
              if (*piVar4 != 0) {
                iVar2 = uVar10 * 4;
                uVar10 = uVar10 + 1;
                *(undefined4 *)(*(int *)(*piVar4 + 0xc) + 4) = *(undefined4 *)(local_10 + iVar2);
              }
              piVar4 = piVar4 + 1;
            } while (piVar4 < local_14);
          }
        }
LAB_00402e69:
        if (uVar10 != 0) {
          uVar8 = 0;
          do {
            piVar4 = *(int **)(local_8 + uVar8 * 4);
            pcVar1 = *(code **)(*piVar4 + 8);
            (*(code *)PTR_guard_check_icall_00407190)(piVar4);
            (*pcVar1)();
            uVar8 = uVar8 + 1;
            iVar7 = local_c;
          } while (uVar8 < uVar10);
        }
      }
      o_free(local_10);
      o_free(local_30);
      o_free(local_8);
      if (iVar7 < 0) {
        return iVar7;
      }
    }
  }
  pcVar1 = *(code **)(*local_18 + 0x18);
  (*(code *)PTR_guard_check_icall_00407190)(local_18);
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
      piVar4 = (int *)FUN_00403d2f(-(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) |
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
            (*(code *)PTR_guard_check_icall_00407190)();
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
        (*(code *)PTR_guard_check_icall_00407190)(local_18,0,piVar4,&local_24,puVar6);
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
      o_free(local_1c);
    }
  }
  return iVar7;
}



/* Function: FUN_00402fd2 */

int __fastcall FUN_00402fd2(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

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
  
  iVar3 = FUN_00403d2f(-(uint)((int)((ulonglong)param_4 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 4));
  iVar4 = FUN_00403d2f(-(uint)((int)((ulonglong)param_4 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 4));
  uVar6 = 0;
  local_14 = 0;
  if ((iVar3 == 0) || (iVar4 == 0)) {
    local_14 = -0x7ff8fff2;
    goto LAB_004030d3;
  }
  local_8 = 0;
  if (param_4 == 0) {
LAB_0040309e:
    local_14 = RoRegisterActivationFactories(iVar4,iVar3,param_4,param_3);
  }
  else {
    local_10 = param_2;
    do {
      if (local_14 < 0) goto LAB_004030b4;
      *(code **)((iVar3 - (int)param_2) + (int)local_10) = FUN_004033a0;
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
    if (-1 < local_14) goto LAB_0040309e;
  }
LAB_004030b4:
  if (local_8 != 0) {
    do {
      WindowsDeleteString(*(undefined4 *)(iVar4 + uVar6 * 4));
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_8);
  }
LAB_004030d3:
  o_free(iVar3);
  o_free(iVar4);
  return local_14;
}



/* Function: FUN_00403100 */

void __fastcall FUN_00403100(int param_1)

{
  PostThreadMessageW(*(DWORD *)(param_1 + 8),0x12,0,0);
  return;
}



/* Function: FUN_00403120 */

int FUN_00403120(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_8;
  
  *param_4 = 0;
  if (param_2 == 0) {
    local_8 = (undefined4 *)0x0;
    iVar2 = FUN_004033b7(&local_8);
    if (-1 < iVar2) {
      pcVar1 = *(code **)*local_8;
      (*(code *)PTR_guard_check_icall_00407190)(local_8,param_3,param_4);
      iVar2 = (*pcVar1)();
    }
    FUN_004028f7((int *)&local_8);
  }
  else {
    iVar2 = -0x7ffbfef0;
    RoOriginateError(0x80040110,0);
  }
  return iVar2;
}



/* Function: FUN_00403190 */

undefined4 FUN_00403190(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0040648c == (int *)0x0) {
    RoOriginateError(0x80004005,0);
    uVar2 = 0x80004005;
  }
  else {
    iVar1 = *DAT_0040648c;
    if (param_2 == 0) {
      (*(code *)PTR_guard_check_icall_00407190)(DAT_0040648c);
      (**(code **)(iVar1 + 8))();
    }
    else {
      (*(code *)PTR_guard_check_icall_00407190)();
      (**(code **)(iVar1 + 4))();
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_004031e0 */

undefined4 FUN_004031e0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00401b52(param_2,(int *)&DAT_00401520);
  if (iVar1 == 0) {
    iVar1 = FUN_00401b52(extraout_ECX,(int *)&DAT_00401560);
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
  (*(code *)PTR_guard_check_icall_00407190)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_00403250 */

int FUN_00403250(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = FUN_00401bfe(param_1 + 2);
  uVar1 = param_1[4];
  if (iVar3 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x14);
      (*(code *)PTR_guard_check_icall_00407190)(1);
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
  if ((bVar4) && (DAT_0040648c != (int *)0x0)) {
    pcVar2 = *(code **)(*DAT_0040648c + 8);
    (*(code *)PTR_guard_check_icall_00407190)(DAT_0040648c);
    (*pcVar2)();
  }
  return iVar3;
}



/* Function: FUN_004032d0 */

int FUN_004032d0(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00401bce((int *)(param_1 + 8));
  if ((((*(byte *)(param_1 + 0x10) & 6) == 0) && (iVar2 == 2)) && (DAT_0040648c != (int *)0x0)) {
    pcVar1 = *(code **)(*DAT_0040648c + 4);
    (*(code *)PTR_guard_check_icall_00407190)(DAT_0040648c);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_00403317 */

undefined * FUN_00403317(void)

{
  InitOnceExecuteOnce((PINIT_ONCE)&DAT_00406494,FUN_00403340,(PVOID)0x0,(LPVOID *)0x0);
  DAT_004064a4 = 1;
  return &DAT_0040649c;
}



/* Function: FUN_00403340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403340(void)

{
  _DAT_004064a0 = 0;
  DAT_004064a4 = 1;
  DAT_0040648c = &DAT_0040649c;
  _DAT_0040649c = &PTR_FUN_00401064;
  return 1;
}



/* Function: FUN_00403370 */

undefined4 * __thiscall FUN_00403370(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0040105c;
  if ((param_1 & 1) != 0) {
    FUN_00403d19(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004033a0 */

void FUN_004033a0(undefined4 param_1,undefined4 *param_2)

{
  FUN_004034a2(DAT_0040648c,param_1,param_2);
  return;
}



/* Function: FUN_004033b7 */

undefined4 __fastcall FUN_004033b7(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *local_8;
  
  *param_1 = 0;
  local_8 = param_1;
  puVar2 = (undefined4 *)FUN_00403a24(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    local_8 = FUN_00402117(puVar2);
    pcVar1 = *(code **)*local_8;
    (*(code *)PTR_guard_check_icall_00407190)(local_8,&DAT_00401520,param_1);
    uVar3 = (*pcVar1)();
    FUN_004028f7((int *)&local_8);
  }
  return uVar3;
}



/* Function: FUN_00403420 */

int __thiscall FUN_00403420(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_00403d19(this);
  }
  return (int)this;
}



/* Function: FUN_0040344c */

void __fastcall FUN_0040344c(undefined4 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 2) != '\0') {
    pcVar1 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_00407190)(0);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



/* Function: FUN_00403477 */

void __fastcall FUN_00403477(undefined4 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 3) != '\0') {
    pcVar1 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_00407190)(0);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Function: FUN_004034a2 */

void __thiscall FUN_004034a2(void *this,undefined4 param_1,undefined4 *param_2)

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
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  bool bVar12;
  int local_3c;
  int *local_38;
  int *local_34;
  wchar_t local_30 [20];
  uint local_8;
  
  local_8 = DAT_00406080 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  local_38 = (int *)this;
  iVar3 = WindowsIsStringEmpty(param_1);
  if (((iVar3 == 0) && (iVar3 = WindowsStringHasEmbeddedNull(param_1,&local_3c), -1 < iVar3)) &&
     (local_3c != 1)) {
    puVar4 = (ushort *)WindowsGetStringRawBuffer(param_1,0);
                    /* WARNING: Load size is inaccurate */
    pcVar2 = *(code **)(*this + 0x14);
    (*(code *)PTR_guard_check_icall_00407190)(this);
    piVar5 = (int *)(*pcVar2)();
    pcVar2 = *(code **)(*local_38 + 0x18);
    (*(code *)PTR_guard_check_icall_00407190)(local_38);
    local_34 = (int *)(*pcVar2)();
    piVar8 = local_34;
    do {
      do {
        piVar5 = piVar5 + 1;
        if (piVar8 <= piVar5) {
          RoOriginateError(0x80040111,param_1);
          goto LAB_004035c6;
        }
      } while (*piVar5 == 0);
      pcVar2 = *(code **)(*piVar5 + 4);
      (*(code *)PTR_guard_check_icall_00407190)();
      puVar6 = (ushort *)(*pcVar2)();
      puVar9 = puVar4;
      do {
        uVar1 = *puVar9;
        bVar12 = uVar1 < *puVar6;
        if (uVar1 != *puVar6) {
LAB_00403567:
          uVar7 = -(uint)bVar12 | 1;
          goto LAB_0040356c;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar9[1];
        bVar12 = uVar1 < puVar6[1];
        if (uVar1 != puVar6[1]) goto LAB_00403567;
        puVar9 = puVar9 + 2;
        puVar6 = puVar6 + 2;
      } while (uVar1 != 0);
      uVar7 = 0;
LAB_0040356c:
      piVar8 = local_34;
    } while (uVar7 != 0);
    local_34 = (int *)0x2;
    FUN_00401d21(local_38,(byte *)&local_34,puVar9,(undefined4 *)*piVar5,param_2);
  }
  else {
    pwVar10 = L"activatibleClassId";
    pwVar11 = local_30;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pwVar11 = *(undefined4 *)pwVar10;
      pwVar10 = pwVar10 + 2;
      pwVar11 = pwVar11 + 2;
    }
    *pwVar11 = *pwVar10;
    RoOriginateErrorW(0x80070057,0x12,local_30);
  }
LAB_004035c6:
  FUN_00403a10(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004035e0 */

int FUN_004035e0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(param_1 + 0x18);
  (*(code *)PTR_guard_check_icall_00407190)(param_2);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    FUN_00402004(iVar2);
  }
  return iVar2;
}



/* Function: FUN_00403620 */

int FUN_00403620(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00401bfe(param_1 + 2);
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x10);
      (*(code *)PTR_guard_check_icall_00407190)(1);
      (*pcVar1)();
    }
    if (DAT_0040648c != (int *)0x0) {
      pcVar1 = *(code **)(*DAT_0040648c + 8);
      (*(code *)PTR_guard_check_icall_00407190)(DAT_0040648c);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00403680 */

undefined4 FUN_00403680(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *extraout_ECX;
  code *pcVar2;
  
  *param_3 = 0;
  iVar1 = FUN_00401b52(param_2,(int *)&DAT_00401520);
  if (iVar1 == 0) {
    iVar1 = FUN_00401b52(extraout_ECX,(int *)&DAT_00401590);
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
  (*(code *)PTR_guard_check_icall_00407190)(param_1);
  (*pcVar2)();
  return 0;
}



/* Function: FUN_004036f0 */

int __thiscall FUN_004036f0(void *this,byte param_1)

{
  *(undefined4 *)((int)this + 8) = 0xc0000001;
  if ((param_1 & 1) != 0) {
    FUN_00403d19(this);
  }
  return (int)this;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_00403740 */

undefined4 FUN_00403740(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00403765();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00403771();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00403765 */

undefined * FUN_00403765(void)

{
  return &DAT_004060e0;
}



/* Function: FUN_00403771 */

undefined * FUN_00403771(void)

{
  return &DAT_004060e8;
}



/* Function: FUN_00403780 */

undefined4 FUN_00403780(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00403765();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00403771();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_004037b0 */

void FUN_004037b0(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(2);
  uVar3 = FUN_00403df9();
  o__set_fmode(uVar3);
  uVar3 = FUN_00403df0();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_004040bc();
    FUN_00403cfc(FUN_004040f0);
    uVar3 = FUN_00403de6();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_00403e05();
      guard_check_icall();
      guard_check_icall();
      FUN_00403e20();
      uVar3 = FUN_00403df0();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_00403e17();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_00403df0();
      iVar5 = thunk_FUN_00403df0();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_00403e94();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00403850 */

undefined4 FUN_00403850(void)

{
  FUN_00403e59();
  return 0;
}



/* Function: FUN_00403860 */

void FUN_00403860(void)

{
  undefined4 uVar1;
  
  FUN_0040403c();
  uVar1 = FUN_00403df0();
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
    if (DAT_004060f0 != 1) {
      if (DAT_004060f0 == 0) {
        DAT_004060f0 = 1;
        iVar4 = initterm_e(&DAT_0040135c,&DAT_00401370);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_00401344,&DAT_00401358);
        DAT_004060f0 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00403e7c();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_00407190)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_00403e88();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      FUN_00403fb1();
      o__get_wide_winmain_command_line();
      unaff_ESI = FUN_004024b0();
      uVar6 = FUN_00403ff4();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_004039e5;
    }
  }
  FUN_00403e94();
LAB_004039e5:
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



/* Function: FUN_00403a10 */

void __fastcall FUN_00403a10(int param_1)

{
  if (param_1 == DAT_00406080) {
    return;
  }
  FUN_004041f7();
  return;
}



/* Function: FUN_00403a24 */

void FUN_00403a24(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004048ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004042f9(param_1);
  FUN_00403a66();
  return;
}



/* Function: Catch_All@00403a5e */

undefined * Catch_All_00403a5e(void)

{
  return &DAT_00403a64;
}



/* Function: FUN_00403a66 */

void FUN_00403a66(void)

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
      if (DAT_004060f4 != 0) {
        uVar3 = DAT_004060f4;
        uVar1 = DAT_004060f4;
      }
      DAT_004060f4 = uVar1;
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
    DAT_00406111 = 1;
  }
  FUN_00404331();
  cVar1 = FUN_00403e17();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_00403e17();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_00403e17();
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
  
  if (DAT_00406110 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00403e94();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_004060f8 = 0xffffffff;
    _DAT_004060fc = 0xffffffff;
    _DAT_00406100 = 0xffffffff;
    _DAT_00406104 = 0xffffffff;
    _DAT_00406108 = 0xffffffff;
    _DAT_0040610c = 0xffffffff;
LAB_00403bbd:
    DAT_00406110 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_004060f8);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_00406104);
      if (uVar3 == 0) goto LAB_00403bbd;
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
  iVar1 = DAT_004060f4;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_004060f4 = 0;
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
  if ((DAT_00406111 == '\0') || (param_2 == '\0')) {
    FUN_00403e17();
    FUN_00403e17();
  }
  return 1;
}



/* Function: FUN_00403cc6 */

undefined4 __cdecl FUN_00403cc6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_004060f8 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_004060f8,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_00403cfc */

int __cdecl FUN_00403cfc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403cc6(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_00403d19 */

void __cdecl FUN_00403d19(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_00403d2f */

void FUN_00403d2f(int param_1)

{
  FUN_00403a24(param_1);
  return;
}



/* Function: FUN_00403d40 */

uint FUN_00403d40(void)

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
  if ((DAT_00406080 == 0xbb40e64e) || ((DAT_00406080 & 0xffff0000) == 0)) {
    DAT_00406080 = FUN_00403d40();
    if (DAT_00406080 == 0xbb40e64e) {
      DAT_00406080 = 0xbb40e64f;
    }
    else if ((DAT_00406080 & 0xffff0000) == 0) {
      DAT_00406080 = DAT_00406080 | (DAT_00406080 | 0x4711) << 0x10;
    }
  }
  DAT_004060c0 = ~DAT_00406080;
  return;
}



/* Function: FUN_00403de6 */

undefined4 FUN_00403de6(void)

{
  return 1;
}



/* Function: FUN_00403df0 */

undefined4 FUN_00403df0(void)

{
  return 0;
}



/* Function: FUN_00403df9 */

undefined4 FUN_00403df9(void)

{
  return 0x4000;
}



/* Function: FUN_00403e05 */

void FUN_00403e05(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_00406118);
  return;
}



/* Function: FUN_00403e17 */

undefined1 FUN_00403e17(void)

{
  return 1;
}



/* Function: FUN_00403e20 */

void FUN_00403e20(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_00403e94();
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



/* Function: FUN_00403e59 */

void FUN_00403e59(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00403765();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00403771();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_00403e7c */

undefined * FUN_00403e7c(void)

{
  return &DAT_004064bc;
}



/* Function: FUN_00403e88 */

undefined * FUN_00403e88(void)

{
  return &DAT_004064b8;
}



/* Function: FUN_00403e94 */

void FUN_00403e94(void)

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
  FUN_004040ae();
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
    FUN_004040ae();
  }
  return;
}



/* Function: FUN_00403fb1 */

WORD FUN_00403fb1(void)

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



/* Function: thunk_FUN_00403df0 */

undefined4 thunk_FUN_00403df0(void)

{
  return 0;
}



/* Function: FUN_00403ff4 */

uint FUN_00403ff4(void)

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



/* Function: FUN_0040403c */

void FUN_0040403c(void)

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



/* Function: FUN_004040ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004040ae(void)

{
  _DAT_00406120 = 0;
  return;
}



/* Function: FUN_004040bc */

/* WARNING: Removing unreachable block (ram,0x004040ce) */
/* WARNING: Removing unreachable block (ram,0x004040cf) */
/* WARNING: Removing unreachable block (ram,0x004040d5) */
/* WARNING: Removing unreachable block (ram,0x004040df) */
/* WARNING: Removing unreachable block (ram,0x004040e6) */

void FUN_004040bc(void)

{
  return;
}



/* Function: FUN_004040f0 */

/* WARNING: Removing unreachable block (ram,0x00404102) */
/* WARNING: Removing unreachable block (ram,0x00404103) */
/* WARNING: Removing unreachable block (ram,0x00404109) */
/* WARNING: Removing unreachable block (ram,0x00404113) */
/* WARNING: Removing unreachable block (ram,0x0040411a) */

void FUN_004040f0(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00406080 ^ (uint)&param_2;
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
  
  iVar1 = FUN_00404880(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_00406080,FUN_00403a10,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_004041c7 */

void __cdecl FUN_004041c7(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_004041f7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004041f7(void)

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
  _DAT_00406220 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00406228 = (undefined4)uVar9;
  _DAT_00406238 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0040623c = &stack0x00000004;
  _DAT_00406178 = 0x10001;
  _DAT_00406128 = 0xc0000409;
  _DAT_0040612c = 1;
  _DAT_00406138 = 1;
  DAT_0040613c = 2;
  _DAT_00406134 = unaff_retaddr;
  _DAT_00406204 = in_GS;
  _DAT_00406208 = in_FS;
  _DAT_0040620c = in_ES;
  _DAT_00406210 = in_DS;
  _DAT_00406214 = unaff_EDI;
  _DAT_00406218 = unaff_ESI;
  _DAT_0040621c = unaff_EBX;
  _DAT_00406224 = uVar3;
  _DAT_0040622c = unaff_EBP;
  DAT_00406230 = unaff_retaddr;
  _DAT_00406234 = in_CS;
  _DAT_00406240 = in_SS;
  FUN_004041c7((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_004042f9 */

void __cdecl FUN_004042f9(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  do {
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x404315;
    iVar1 = o_malloc();
    if (iVar1 != 0) {
      return;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x404308;
    iVar1 = o__callnewh();
  } while (iVar1 != 0);
  if (param_1 != -1) {
    FUN_00404652();
    return;
  }
  puStack_8 = &stack0xfffffffc;
  FUN_00404593(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_00404a38);
}



/* Function: FUN_00404331 */

/* WARNING: Removing unreachable block (ram,0x004043a2) */
/* WARNING: Removing unreachable block (ram,0x00404366) */
/* WARNING: Removing unreachable block (ram,0x0040441a) */

undefined4 FUN_00404331(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_00406444 = 0;
  DAT_004060c4 = DAT_004060c4 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_004060c4;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_00406448 = DAT_00406448 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_00406448 = DAT_00406448 | 2;
      }
    }
    DAT_00406444 = 1;
    uVar5 = DAT_004060c4 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_004060c4 | 6;
      DAT_00406444 = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_00406444 = 3;
        uVar5 = DAT_004060c4 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_00406444 = 5;
          uVar5 = DAT_004060c4 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_004060c4 = DAT_004060c4 | 0x6e;
            DAT_00406444 = 6;
            uVar5 = DAT_004060c4;
          }
        }
      }
    }
  }
  DAT_004060c4 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_004060c8 != 0;
}



/* Function: FUN_00404520 */

exception * __thiscall FUN_00404520(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_00404543 */

undefined4 * __fastcall FUN_00404543(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* Function: FUN_00404570 */

exception * __thiscall FUN_00404570(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_00404593 */

undefined4 * __fastcall FUN_00404593(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
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



/* Function: FUN_00404600 */

void __fastcall FUN_00404600(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_00404620 */

undefined4 * __thiscall FUN_00404620(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00404652 */

void FUN_00404652(void)

{
  undefined4 local_10 [3];
  
  FUN_00404543(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_004049e4);
}



/* Function: FUN_004046a0 */

char * __fastcall FUN_004046a0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_004046c0 */

undefined4 * __thiscall FUN_004046c0(void *this,byte param_1)

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
                    /* WARNING: Could not recover jumptable at 0x004046e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x004046f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040470c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040473c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040476c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_wide_winmain_command_line */

void __cdecl o__get_wide_winmain_command_line(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_wide_winmain_command_line();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040479c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004047fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040482c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040485c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00404874. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: FUN_00404880 */

int __cdecl FUN_00404880(int param_1)

{
  uint uVar1;
  
  if ((DAT_00406444 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: FUN_00404930 */

void FUN_00404930(void)

{
  FUN_0040344c((undefined4 *)&DAT_0040649c);
  return;
}



/* Function: FUN_00404940 */

void FUN_00404940(void)

{
  FUN_00403477((undefined4 *)&DAT_004064a8);
  return;
}



