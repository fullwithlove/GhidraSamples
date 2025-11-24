/* Function: FUN_00420ca0 */

void FUN_00420ca0(void)

{
  DAT_004c4c74 = FUN_004726d0;
  DAT_004c4c6c = &PTR_s_WilError_03_004c4084;
  DAT_004c4c70 = &DAT_004c473c;
  return;
}



/* Function: FUN_00420cd0 */

void FUN_00420cd0(void)

{
  DAT_004c5214 = FUN_00472700;
  DAT_004c520c = DebugBreak;
  DAT_004c5210 = FUN_00473ad0;
  DAT_004c5204 = FUN_00472590;
  DAT_004c5200 = FUN_004522a0;
  DAT_004c5218 = FUN_00473640;
  DAT_004c5208 = FUN_004735f0;
  return;
}



/* Function: FUN_00420d20 */

void FUN_00420d20(void)

{
  FUN_0045092f(FUN_00459d30);
  return;
}



/* Function: FUN_00420d40 */

void FUN_00420d40(void)

{
  FUN_0045092f(FUN_00459d40);
  return;
}



/* Function: FUN_00420d60 */

void FUN_00420d60(void)

{
  FUN_0045092f(FUN_00459d50);
  return;
}



/* Function: FUN_00420d80 */

void FUN_00420d80(void)

{
  FUN_0045092f(FUN_00459d70);
  return;
}



/* Function: FUN_00420da0 */

void FUN_00420da0(void)

{
  FUN_0045092f(FUN_00459d90);
  return;
}



/* Function: FUN_00420dc0 */

void FUN_00420dc0(void)

{
  FUN_0044e226();
  FUN_0045092f(FUN_00459db0);
  return;
}



/* Function: FUN_00420de0 */

void FUN_00420de0(void)

{
  FUN_0044d69c(&DAT_004c513c);
  FUN_0045092f(FUN_00459e00);
  return;
}



/* Function: FUN_00420e00 */

void FUN_00420e00(void)

{
  DAT_004c538c = FUN_00493910;
  DAT_004c526c = FUN_00493990;
  DAT_004c5380 = FUN_00493a10;
  DAT_004c5264 = FUN_00493a40;
  DAT_004c5260 = FUN_00452e50;
  return;
}



/* Function: FUN_00420e40 */

void FUN_00420e40(void)

{
  DAT_004c5268 = FUN_00491e40;
  return;
}



/* Function: FUN_00420e60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420e60(void)

{
  _DAT_004c4c78 = FUN_004983c0;
  _DAT_004c4c7c = FUN_00498580;
  return;
}



/* Function: FUN_00420e80 */

void FUN_00420e80(void)

{
  DAT_004c5214 = FUN_00472700;
  DAT_004c520c = DebugBreak;
  DAT_004c5210 = FUN_00473ad0;
  return;
}



/* Function: FUN_00420eb0 */

void FUN_00420eb0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004c4efc);
  FUN_0045092f(FUN_00459e30);
  return;
}



/* Function: FUN_00420ed0 */

void __fastcall FUN_00420ed0(UINT param_1,int param_2,LPWSTR param_3)

{
  int iVar1;
  void *this;
  int unaff_retaddr;
  
  FUN_00420f34(unaff_retaddr,0x18,"onecoreuap\\inetcore\\wwa\\webruntimecore\\utilities.cpp",
               (int)DAT_004c4cc4);
  iVar1 = LoadStringW(DAT_004c4cc4,param_1,param_3,param_2);
  FUN_00420f4e(this,unaff_retaddr,0x22,0x40f994,iVar1 == 0,0x40f950);
  return;
}



/* Function: FUN_00420f34 */

void __cdecl FUN_00420f34(undefined4 param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int unaff_retaddr;
  int in_stack_00000014;
  
  if (param_4 != 0) {
    return;
  }
  FUN_0047ea6b(param_1,param_2,param_3,unaff_retaddr,in_stack_00000014,&stack0x00000018);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00420f4e */

uint __thiscall
FUN_00420f4e(void *this,int param_1,int param_2,int param_3,char param_4,int param_5)

{
  code *pcVar1;
  uint in_EAX;
  uint uVar2;
  int unaff_retaddr;
  
  if (param_4 == '\0') {
    return in_EAX & 0xffffff00;
  }
  FUN_004b1260(param_1,param_2,param_3,this,this,unaff_retaddr,param_5,&stack0x00000018);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00420f70 */

void FUN_00420f70(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x20);
    if (pcVar2 == FUN_00421010) {
      FUN_00421010((int)piVar1);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar2)();
      if (&stack0xfffffff4 != &stack0xffffffec) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
      }
    }
  }
  return;
}



/* Function: FUN_00420fb0 */

undefined4 FUN_00420fb0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = FUN_0045247c(unaff_retaddr,0x33,0x40c234);
  }
  else {
    uVar2 = RtlEnterCriticalSection(param_1 + 0x18);
    if (-1 < (int)uVar2) {
      FUN_0044e60e((int *)(param_1 + 0x3c));
      FUN_00424890(param_1 + 0x18);
      *(uint *)(param_1 + 0x14) = (*(int *)(param_1 + 0x14) != 2) + 3;
      return 0;
    }
  }
  FUN_0045249b(unaff_retaddr,0x36,0x40c234,uVar2);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_00421010 */

void FUN_00421010(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 unaff_retaddr;
  int *piStackY_14;
  
  uVar2 = FUN_00425540(param_1 + -4);
  if ((char)uVar2 != '\0') {
    FUN_00421061(extraout_ECX);
    piStackY_14 = *(int **)(param_1 + 0x98);
    pcVar1 = *(code **)(*piStackY_14 + 0x38);
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if ((int **)&stack0xfffffff4 != &piStackY_14) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    return;
  }
  piStackY_14 = (int *)0x459f62;
  FUN_0045247c(unaff_retaddr,0x30e,0x40f384);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00421061 */

void __fastcall FUN_00421061(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  undefined4 unaff_retaddr;
  int iVar3;
  
  iVar3 = param_1;
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0xec) == DVar2) {
    return;
  }
  FUN_0045247c(unaff_retaddr,0x21d,0x40f3bc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(iVar3);
  return;
}



/* Function: FUN_00421090 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00459f88) */
/* WARNING: Removing unreachable block (ram,0x0045a01b) */

void __cdecl FUN_00421090(undefined *param_1,va_list param_2,undefined4 param_3)

{
  code *pcVar1;
  va_list pcVar2;
  void *pvVar3;
  DWORD DVar4;
  uint uVar5;
  int *extraout_ECX;
  int *piVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  WCHAR *extraout_EDX_00;
  WCHAR *pWVar8;
  int iVar9;
  undefined4 extraout_EDX_01;
  undefined8 uVar10;
  undefined4 unaff_retaddr;
  int local_1014;
  WCHAR *local_1010;
  va_list local_100c;
  WCHAR local_1008;
  undefined1 local_1006 [2046];
  WCHAR local_808;
  undefined1 local_806 [2046];
  uint local_8;
  
  local_8 = DAT_004c41c0 ^ (uint)&stack0xfffffffc;
  local_1014 = 0;
  local_100c = param_2;
  piVar6 = (int *)(param_1 + 8);
  pcVar1 = *(code **)(*piVar6 + 0xc);
  if (pcVar1 == FUN_0042bae0) {
    pvVar3 = (void *)FUN_0042bae0((int)piVar6,&local_1014);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)(piVar6,&local_1014);
    pvVar3 = (void *)(*pcVar1)();
  }
  FUN_00421061((int)(param_1 + -8));
  if ((int)pvVar3 < 0) {
    iVar9 = 0x281;
LAB_0045a03f:
    FUN_00452460(unaff_retaddr,iVar9,0x40f3bc,pvVar3);
  }
  else {
    local_808 = L'\0';
    memset(local_806,0,0x7fe);
    local_1008 = L'\0';
    memset(local_1006,0,0x7fe);
    pcVar2 = local_100c;
    local_1010 = (WCHAR *)0x0;
    FUN_00420ed0(*(UINT *)(local_100c + 4),0x400,&local_808);
    local_100c = &stack0x00000010;
    DVar4 = FormatMessageW(0x400,&local_808,0,0,&local_1008,0x400,&local_100c);
    if (DVar4 == 0) {
      DVar4 = GetLastError();
      if (DVar4 != 0x7a) {
        uVar5 = FUN_00480ff9();
        uVar7 = extraout_EDX;
        if ((int)uVar5 < 0) {
          FUN_0045a034();
          return;
        }
        goto LAB_004211d3;
      }
      local_100c = &stack0x00000010;
      DVar4 = FormatMessageW(0x500,&local_808,0,0,(LPWSTR)&local_1010,0x400,&local_100c);
      pWVar8 = local_1010;
      if (DVar4 == 0) {
        FUN_004211e2();
        return;
      }
    }
    else {
      pWVar8 = &local_1008;
    }
    if (DAT_004c5270 == 0) {
      piVar6 = *(int **)(param_1 + 0x98);
      param_1 = *(undefined **)(*piVar6 + 0x28);
      if ((code *)param_1 != FUN_00421200) goto LAB_00459ff8;
      uVar10 = FUN_00421200((int)piVar6,L"APPHOST",*(undefined4 *)(pcVar2 + 8),*(undefined4 *)pcVar2
                            ,pWVar8,param_3,0);
    }
    else {
      FUN_0045247c(unaff_retaddr,0x26b,0x40f3bc);
      piVar6 = extraout_ECX;
      pWVar8 = extraout_EDX_00;
LAB_00459ff8:
      (*(code *)PTR_guard_check_icall_004c641c)
                (piVar6,L"APPHOST",*(undefined4 *)(pcVar2 + 8),*(undefined4 *)pcVar2,pWVar8,param_3,
                 0,0);
      uVar10 = (*(code *)param_1)();
    }
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    pvVar3 = (void *)uVar10;
    if ((int)pvVar3 < 0) {
      iVar9 = 0x273;
      goto LAB_0045a03f;
    }
    if (local_1010 == (WCHAR *)0x0) goto LAB_004211d3;
  }
  LocalFree(local_1010);
  uVar7 = extraout_EDX_01;
LAB_004211d3:
  FUN_00450870(local_8 ^ (uint)&stack0xfffffffc,uVar7);
  return;
}



/* Function: FUN_004211e2 */

void FUN_004211e2(void)

{
  uint uVar1;
  undefined4 extraout_EDX;
  uint unaff_EBP;
  undefined4 uStack00000008;
  
  uVar1 = FUN_00480ff9();
  if ((int)uVar1 < 0) {
    FUN_0045a034();
    return;
  }
  uStack00000008 = 0x4211e0;
  FUN_00450870(*(uint *)(unaff_EBP - 4) ^ unaff_EBP,extraout_EDX);
  return;
}



/* Function: FUN_00421200 */

void FUN_00421200(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -0xc);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x24);
  if (pcVar1 == FUN_00421250) {
    FUN_00421250(*(int **)(param_1 + 0x50),param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff0 != &stack0xffffffd4) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00421250 */

void __thiscall
FUN_00421250(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  int *piStackY_2c;
  undefined4 uStackY_28;
  undefined4 uStackY_24;
  undefined4 uStackY_20;
  undefined4 uStackY_1c;
  undefined4 uStackY_18;
  undefined4 uStackY_14;
  
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_00421380((int)this + -0x14);
    piStackY_2c = *(int **)((int)this + 0x10);
    uStackY_14 = param_6;
    uStackY_18 = param_5;
    uStackY_1c = param_4;
    pcVar1 = *(code **)(*piStackY_2c + 0x18);
    uStackY_20 = param_3;
    uStackY_24 = param_2;
    uStackY_28 = param_1;
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if ((int **)&stack0xfffffff4 != &piStackY_2c) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    return;
  }
  uStackY_14 = 0x45a09d;
  FUN_0045247c(unaff_retaddr,0x1cd,0x40f9d0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004212b0 */

void FUN_004212b0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -8);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x54) + 0x74);
  if (pcVar1 == FUN_004212f0) {
    FUN_004212f0((int)*(int **)(param_1 + 0x54),param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_004212f0 */

/* WARNING: Removing unreachable block (ram,0x00421360) */

int FUN_004212f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  int *local_8;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    piStack_1c = (int *)0x45a09d;
    FUN_0045247c(unaff_retaddr,0x1cd,0x40f9d0);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  FUN_00421380(param_1 + -0x14);
  piVar1 = *(int **)(param_1 + 0x10);
  local_8 = (int *)0x0;
  pcVar2 = *(code **)(*piVar1 + 0x44);
  FUN_0044e60e((int *)&local_8);
  piStack_1c = piVar1;
  (*(code *)PTR_guard_check_icall_004c641c)();
  iVar3 = (*pcVar2)();
  if ((int **)&stack0xffffffec != &piStack_1c) {
    pcVar2 = (code *)swi(0x29);
    iVar3 = (*pcVar2)();
  }
  if (-1 < iVar3) {
    pcVar2 = *(code **)(*local_8 + 0x10);
    (*(code *)PTR_guard_check_icall_004c641c)(local_8,param_2);
    iVar3 = (*pcVar2)();
  }
  FUN_0044e60e((int *)&local_8);
  return iVar3;
}



/* Function: FUN_00421380 */

void __fastcall FUN_00421380(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  undefined4 unaff_retaddr;
  int iVar3;
  
  iVar3 = param_1;
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x20) == DVar2) {
    return;
  }
  FUN_0045247c(unaff_retaddr,0x1d2,0x40f9d0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(iVar3);
  return;
}



/* Function: FUN_004213a2 */

int __fastcall FUN_004213a2(int *param_1,uint *param_2)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  bool bVar7;
  int *piStack_24;
  ushort **ppuStack_20;
  ushort *local_8;
  
  pcVar2 = *(code **)(*param_1 + 0x4c);
  ppuStack_20 = &local_8;
  uVar6 = 0;
  local_8 = (ushort *)0x0;
  piStack_24 = param_1;
  (*(code *)PTR_guard_check_icall_004c641c)();
  iVar3 = (*pcVar2)();
  if ((int **)&stack0xffffffe4 != &piStack_24) {
    pcVar2 = (code *)swi(0x29);
    iVar3 = (*pcVar2)();
  }
  if (iVar3 == 1) {
    iVar3 = -0x7ff8ffa9;
  }
  else if (-1 < iVar3) {
    puVar5 = &DAT_004089a0;
    puVar4 = local_8;
    do {
      uVar1 = *puVar4;
      bVar7 = uVar1 < *puVar5;
      if (uVar1 != *puVar5) {
LAB_0042140d:
        uVar6 = -(uint)bVar7 | 1;
        break;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar4[1];
      bVar7 = uVar1 < puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_0042140d;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != 0);
    *param_2 = (uint)(uVar6 == 0);
  }
  Ordinal_6(local_8);
  return iVar3;
}



/* Function: FUN_00421440 */

/* WARNING: Removing unreachable block (ram,0x0045a0e3) */
/* WARNING: Removing unreachable block (ram,0x0045a15a) */

int FUN_00421440(int param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStackY_28;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint local_8;
  
  local_8 = 0;
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0x14);
  if (pcVar1 == FUN_004380c0) {
    iVar2 = FUN_004380c0((int)*(int **)(param_1 + 0xc));
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    iVar2 = (*pcVar1)();
  }
  if (iVar2 == 0) {
    iVar2 = FUN_00423c67(param_2,&local_8);
    if (iVar2 < 0) {
      if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
        return iVar2;
      }
      if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
        return iVar2;
      }
      if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
        return iVar2;
      }
      pcVar5 = "IsLocalCompartmentUri(documentUri, &isLocal)";
      uVar4 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar3 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uStackY_28 = 0x1e;
      goto LAB_0045a12a;
    }
    if (local_8 == 0) {
      return 0;
    }
  }
  pcVar1 = *(code **)(*param_3 + 0xc);
  (*(code *)PTR_guard_check_icall_004c641c)
            (param_3,
             L"script-src ms-appx: \'unsafe-eval\' blob:;worker-src ms-appx: blob:;style-src ms-appx: data: \'unsafe-inline\' blob:;object-src \'none\';font-src ms-appx: data: blob:;"
            );
  iVar2 = (*pcVar1)();
  if (-1 < iVar2) {
    return 0;
  }
  if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
    return iVar2;
  }
  if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
    return iVar2;
  }
  if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
    return iVar2;
  }
  pcVar5 = "contentSecurityPolicyConfig->AddHostPolicy(defaultCSPPolicyForApplicationCompartment)";
  uVar4 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
  uVar3 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
  uStackY_28 = 0x1f;
LAB_0045a12a:
  FUN_00474b30(uStackY_28,&DAT_004134e0,uVar3,uVar4,pcVar5);
  return iVar2;
}



/* Function: FUN_004214b0 */

/* WARNING: Removing unreachable block (ram,0x00421520) */

int FUN_004214b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  int *local_8;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    piStack_1c = (int *)0x45a09d;
    FUN_0045247c(unaff_retaddr,0x1cd,0x40f9d0);
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  FUN_00421380(param_1 + -0x14);
  piVar1 = *(int **)(param_1 + 0x10);
  local_8 = (int *)0x0;
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  FUN_0044e60e((int *)&local_8);
  piStack_1c = piVar1;
  (*(code *)PTR_guard_check_icall_004c641c)();
  iVar3 = (*pcVar2)();
  if ((int **)&stack0xffffffec != &piStack_1c) {
    pcVar2 = (code *)swi(0x29);
    iVar3 = (*pcVar2)();
  }
  if (-1 < iVar3) {
    pcVar2 = *(code **)(*local_8 + 0x28);
    (*(code *)PTR_guard_check_icall_004c641c)(local_8,param_2);
    iVar3 = (*pcVar2)();
  }
  FUN_0044e60e((int *)&local_8);
  return iVar3;
}



/* Function: FUN_00421540 */

/* WARNING: Removing unreachable block (ram,0x0042156f) */

int * __thiscall FUN_00421540(void *this,int *param_1)

{
  code *pcVar1;
  int *local_8;
  
                    /* WARNING: Load size is inaccurate */
  if (*this != param_1) {
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 4);
      local_8 = (int *)this;
      (*(code *)PTR_guard_check_icall_004c641c)(param_1);
      (*pcVar1)();
      this = local_8;
    }
                    /* WARNING: Load size is inaccurate */
    local_8 = *this;
    *(int **)this = param_1;
    FUN_0044f379((int *)&local_8);
  }
  return (int *)this;
}



/* Function: FUN_004215a0 */

void FUN_004215a0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  int *piStackY_14;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    pcVar3 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\WebRuntimeCoreControl.hpp";
    iVar2 = 0x1cd;
  }
  else {
    FUN_00421380(param_1 + -0x14);
    piStackY_14 = *(int **)(param_1 + 0x20);
    if (piStackY_14 != (int *)0x0) {
      pcVar1 = *(code **)(*piStackY_14 + 0x28);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar1)();
      if ((int **)&stack0xfffffff4 != &piStackY_14) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
      }
      return;
    }
    pcVar3 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\webruntimecorecontrol.cpp";
    iVar2 = 0x2ff;
  }
  piStackY_14 = (int *)0x45a1a8;
  FUN_0045247c(unaff_retaddr,iVar2,(int)pcVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00421600 */

void FUN_00421600(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    FUN_0045247c(unaff_retaddr,0x163,0x40fbb0);
  }
  else {
    unaff_EDI = *(code **)(*piVar1 + 0x10);
    if (unaff_EDI == FUN_00421790) {
      FUN_00421790((int)piVar1,param_2);
      return;
    }
  }
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EDI)();
  if (&stack0xfffffff4 != &stack0xffffffec) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_0042163b */

int * __thiscall FUN_0042163b(void *this,int param_1)

{
  int local_8;
  
                    /* WARNING: Load size is inaccurate */
  if (*this != param_1) {
    local_8 = param_1;
    FUN_0044f6af(&local_8);
                    /* WARNING: Load size is inaccurate */
    local_8 = *this;
    *(int *)this = param_1;
    FUN_0044e60e(&local_8);
  }
  return (int *)this;
}



/* Function: FUN_00421680 */

void FUN_00421680(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -0xc);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x80);
  if (pcVar1 == FUN_004214b0) {
    FUN_004214b0((int)*(int **)(param_1 + 0x50),param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_004216c0 */

void FUN_004216c0(int param_1)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -0xc);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x94);
  if (pcVar1 == FUN_004215a0) {
    FUN_004215a0((int)*(int **)(param_1 + 0x50));
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00421700 */

int FUN_00421700(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    if (pcVar2 == FUN_00421740) {
      iVar3 = FUN_00421740((int)piVar1);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar2)();
      if (&stack0xfffffff4 != &stack0xfffffff0) {
        pcVar2 = (code *)swi(0x29);
        iVar3 = (*pcVar2)();
      }
    }
  }
  return iVar3;
}



/* Function: FUN_00421740 */

/* WARNING: Removing unreachable block (ram,0x0045a25b) */

int FUN_00421740(int param_1)

{
  int iVar1;
  int *extraout_ECX;
  int *piVar2;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  
  piVar2 = *(int **)(param_1 + 0x40);
  if (piVar2 == (int *)0x0) {
    FUN_0045247c(unaff_retaddr,0x5a0,0x40f808);
    piVar2 = extraout_ECX;
  }
  else {
    unaff_EDI = *(code **)(*piVar2 + 0xc);
    if (unaff_EDI == FUN_00421d50) {
      iVar1 = FUN_00421d50((int)piVar2);
      goto LAB_0042176c;
    }
  }
  (*(code *)PTR_guard_check_icall_004c641c)(piVar2);
  iVar1 = (*unaff_EDI)();
LAB_0042176c:
  if ((((iVar1 < 0) && ((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000)) &&
      ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) && (1 < (byte)PTR_LOOP_004c4000[0x69]))
  {
    FUN_00474b30(0x2c,&DAT_0041fa6c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                 "m_webTelemetryEventHandler->GCTelemetryForNewScriptEngine()");
  }
  return iVar1;
}



/* Function: FUN_00421790 */

void FUN_00421790(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_0045247c(unaff_retaddr,0x312,0x40f770);
  }
  else {
    iVar2 = param_1 + -0x30;
    if (param_1 == 0x38) {
      iVar2 = 0;
    }
    unaff_EDI = *(code **)(**(int **)(param_1 + 0x48) + 0x4c);
    if (unaff_EDI == FUN_00421ca0) {
      FUN_00421ca0((int)*(int **)(param_1 + 0x48),iVar2,param_2);
      return;
    }
  }
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EDI)();
  if (&stack0xfffffff4 != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_004217e0 */

/* WARNING: Removing unreachable block (ram,0x0045a3ad) */

void __thiscall FUN_004217e0(void *this,int param_1,char param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar3;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  int *extraout_EDX_00;
  int *piVar6;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined8 uVar7;
  undefined4 unaff_retaddr;
  char local_19;
  _EVENT_DATA_DESCRIPTOR local_18;
  uint local_8;
  
  local_8 = DAT_004c41c0 ^ (uint)&stack0xfffffffc;
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x178) == DVar2) {
    iVar3 = *(int *)((int)this + 0xbc);
    switch(iVar3) {
    case 0:
      if (param_1 != 1) goto LAB_0045a2f1;
      goto LAB_00421833;
    case 1:
      if (param_1 != 0) {
        if (param_1 == 2) goto LAB_00421833;
        goto LAB_0045a303;
      }
LAB_004218b7:
      local_19 = '\x01';
      break;
    case 2:
      if (param_1 == 0) goto LAB_004218b7;
      if (param_1 == 3) goto LAB_00421833;
      goto LAB_0045a315;
    case 3:
      if (param_1 == 0) goto LAB_004218b7;
      if (param_1 == 4) goto LAB_00421833;
      goto LAB_0045a327;
    case 4:
      goto switchD_00421818_caseD_4;
    default:
      FUN_0045247c(unaff_retaddr,0x1c6,0x40c108);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_00421837:
    if (*(int *)((int)this + 300) != 0) goto LAB_0045a355;
  }
  else {
    FUN_0045247c(unaff_retaddr,0xea9,0x40c108);
LAB_0045a2f1:
    FUN_0045247c(unaff_retaddr,0x1ab,0x40c108);
LAB_0045a303:
    FUN_0045247c(unaff_retaddr,0x1b1,0x40c108);
LAB_0045a315:
    FUN_0045247c(unaff_retaddr,0x1b7,0x40c108);
LAB_0045a327:
    FUN_0045247c(unaff_retaddr,0x1bd,0x40c108);
    iVar3 = extraout_ECX;
switchD_00421818_caseD_4:
    if (param_1 == 0) {
LAB_00421833:
      local_19 = '\0';
      goto LAB_00421837;
    }
    FUN_0045247c(unaff_retaddr,0x1c2,0x40c108);
    iVar3 = extraout_ECX_00;
LAB_0045a355:
    if (iVar3 != 3) {
      FUN_004a02e6();
    }
  }
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x178) == DVar2) {
    iVar3 = *(int *)((int)this + 300);
    uVar5 = extraout_EDX;
    if (iVar3 == 0) goto LAB_00421864;
  }
  else {
    FUN_0045247c(unaff_retaddr,0xea9,0x40c108);
    iVar3 = extraout_ECX_01;
  }
  piVar6 = *(int **)((int)this + 0x48);
  if (piVar6 == (int *)0x0) {
    FUN_0045247c(unaff_retaddr,0x430,0x40c108);
    iVar3 = extraout_ECX_02;
    piVar6 = extraout_EDX_00;
  }
  pcVar1 = *(code **)(*piVar6 + 0xf8);
  (*(code *)PTR_guard_check_icall_004c641c)(piVar6,iVar3);
  uVar7 = (*pcVar1)();
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar4 = extraout_ECX_03;
  if ((int)(void *)uVar7 < 0) {
    FUN_00452460(unaff_retaddr,0x432,0x40c108,(void *)uVar7);
    uVar4 = extraout_ECX_04;
    uVar5 = extraout_EDX_01;
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  if ((DAT_004c5240 & 8) != 0) {
    FUN_004745b6(uVar4,(PCEVENT_DESCRIPTOR)&DAT_0040ba20,uVar4,1,&local_18);
    uVar5 = extraout_EDX_02;
  }
LAB_00421864:
  *(int *)((int)this + 0xbc) = param_1;
  if (local_19 != '\0') {
    FUN_00479085(this,param_2);
    uVar5 = extraout_EDX_03;
  }
  FUN_00450870(local_8 ^ (uint)&stack0xfffffffc,uVar5);
  return;
}



/* Function: FUN_004218e0 */

/* WARNING: Removing unreachable block (ram,0x00421a6f) */
/* WARNING: Removing unreachable block (ram,0x0045a4b6) */
/* WARNING: Removing unreachable block (ram,0x0045a45d) */
/* WARNING: Removing unreachable block (ram,0x0045a488) */
/* WARNING: Removing unreachable block (ram,0x004219c2) */
/* WARNING: Removing unreachable block (ram,0x0045a515) */
/* WARNING: Removing unreachable block (ram,0x0045a55d) */
/* WARNING: Removing unreachable block (ram,0x0045a4ff) */
/* WARNING: Removing unreachable block (ram,0x00421a9e) */
/* WARNING: Removing unreachable block (ram,0x00421ab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004218e0(void *this,undefined4 param_1,int *param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *piVar6;
  code *pcVar7;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  code *local_c;
  code *local_8;
  
  DVar2 = GetCurrentThreadId();
  if ((*(DWORD *)((int)this + 0x178) == DVar2) &&
     (DVar2 = GetCurrentThreadId(), *(DWORD *)((int)this + 0x178) == DVar2)) {
    if ((*(int *)((int)this + 0x78) == 0) && (*(int *)((int)this + 100) != 0)) goto LAB_0045a469;
    unaff_EDI = *(code **)(*(int *)((int)this + 0x10) + 0x1c);
    if (unaff_EDI != FUN_0043f030) goto LAB_0045a44c;
    iVar3 = FUN_0043f030((int)this + 0x10);
    goto LAB_0042193e;
  }
  iVar3 = 0xea9;
  while( true ) {
    while( true ) {
      while( true ) {
        FUN_0045247c(unaff_retaddr,iVar3,0x40c108);
LAB_0045a44c:
        (*(code *)PTR_guard_check_icall_004c641c)();
        iVar3 = (*unaff_EDI)();
LAB_0042193e:
        if (iVar3 == 0) break;
LAB_0045a469:
        iVar3 = 0x792;
      }
      unaff_EDI = *(code **)((int)this + 0x48);
      pcVar7 = *(code **)(*(int *)unaff_EDI + 0x14);
      if (pcVar7 == FUN_004380c0) {
        iVar3 = FUN_004380c0((int)unaff_EDI);
      }
      else {
        (*(code *)PTR_guard_check_icall_004c641c)();
        iVar3 = (*pcVar7)();
      }
      if (iVar3 == 0) break;
      iVar3 = 0x793;
    }
    if (*(int *)((int)this + 0xd8) == 0 && *(int *)((int)this + 0xdc) == 0) break;
    local_8 = (code *)0x0;
    if (*(int *)((int)this + 0x104) == 0) {
      FUN_004217e0(this,1,'\0');
      if (*(int **)((int)this + 0x100) != param_2) {
        if (param_2 != (int *)0x0) {
          pcVar7 = *(code **)(*param_2 + 4);
          (*(code *)PTR_guard_check_icall_004c641c)();
          (*pcVar7)();
        }
        piVar5 = *(int **)((int)this + 0x100);
        *(int **)((int)this + 0x100) = param_2;
        if (piVar5 != (int *)0x0) {
          pcVar7 = *(code **)(*piVar5 + 8);
          (*(code *)PTR_guard_check_icall_004c641c)();
          (*pcVar7)();
        }
      }
      if ((DAT_004c5240 & 4) != 0) {
        GetCurrentProcessId();
        FUN_0047cb0b(extraout_ECX,(PCEVENT_DESCRIPTOR)&DAT_00411f78);
      }
      if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) &&
         (4 < (byte)PTR_LOOP_004c4000[0x69])) {
        FUN_0047460c(0x2e,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                     *(undefined4 *)(PTR_LOOP_004c4000 + 100));
      }
      local_c = *(code **)(*param_2 + 0x18);
      pcVar7 = (code *)&stack0xffffffe0;
      (*(code *)PTR_guard_check_icall_004c641c)();
      pvVar4 = (void *)(*local_c)();
      if (&stack0xffffffe0 != &stack0xffffffd8) {
        pcVar1 = (code *)swi(0x29);
        pvVar4 = (void *)(*pcVar1)();
      }
      if (-1 < (int)pvVar4) {
        local_c = *(code **)(_DAT_00000000 + 0x18);
        piVar5 = (int *)((int)this + 0x104);
        piVar6 = (int *)*piVar5;
        pcVar7 = local_8;
        if (piVar6 != (int *)0x0) goto LAB_0045a544;
        while( true ) {
          (*(code *)PTR_guard_check_icall_004c641c)(pcVar7);
          pvVar4 = (void *)(*local_c)();
          if (-1 < (int)pvVar4) break;
          iVar3 = 0x7b0;
          pcVar7 = local_c;
LAB_0045a53c:
          piVar5 = (int *)FUN_00452460(unaff_retaddr,iVar3,0x40c108,pvVar4);
          piVar6 = extraout_ECX_00;
LAB_0045a544:
          *piVar5 = 0;
          pcVar1 = *(code **)(*piVar6 + 8);
          (*(code *)PTR_guard_check_icall_004c641c)();
          (*pcVar1)();
        }
        if ((*(int *)((int)this + 0x13c) == 0) && (*(int *)((int)this + 0x140) == 0)) {
          FUN_00421e24((undefined4 *)this);
        }
        return 0;
      }
      iVar3 = 0x7af;
      goto LAB_0045a53c;
    }
    iVar3 = 0x79b;
  }
  return 0;
}



/* Function: FUN_00421ad0 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Removing unreachable block (ram,0x0045a5c4) */
/* WARNING: Removing unreachable block (ram,0x0045a585) */
/* WARNING: Removing unreachable block (ram,0x00421b8d) */

void __fastcall FUN_00421ad0(int *param_1,undefined4 param_2)

{
  void *pvVar1;
  int *piVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  code *pcVar3;
  float in_XMM0_Da;
  undefined4 unaff_retaddr;
  int *local_38;
  float local_34 [4];
  undefined4 local_24;
  undefined4 uStack_20;
  float local_1c;
  float local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x421adc;
  if (param_1[10] == 0 && param_1[0xb] == 0) goto LAB_00421b94;
  local_34[0] = 0.0;
  local_34[1] = 0.0;
  local_34[2] = 0.0;
  local_34[3] = 0.0;
  local_24 = 0;
  uStack_20 = 0;
  local_1c = 0.0;
  local_18 = 0.0;
  pcVar3 = *(code **)(*param_1 + 0x20);
  if (pcVar3 == FUN_00437380) {
    pvVar1 = (void *)FUN_00437380(param_1,local_34,(undefined1 (*) [16])&local_24);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)(param_1,local_34,(undefined1 (*) [16])&local_24);
    pvVar1 = (void *)(*pcVar3)();
  }
  if ((int)pvVar1 < 0) {
    FUN_00452460(unaff_retaddr,0x237,0x40ea5c,pvVar1);
    piVar2 = extraout_ECX_00;
LAB_0045a5a1:
    (*(code *)PTR_guard_check_icall_004c641c)(piVar2,local_1c,in_XMM0_Da);
    (*pcVar3)();
    param_2 = extraout_EDX_01;
  }
  else {
    piVar2 = FUN_0043857d(param_1,(int *)&local_38);
    local_8 = 0;
    piVar2 = (int *)*piVar2;
    pcVar3 = *(code **)(*piVar2 + 0x18);
    in_XMM0_Da = local_18;
    if (pcVar3 != FUN_00422870) goto LAB_0045a5a1;
    FUN_00422870((int)piVar2,local_1c,local_18);
    param_2 = extraout_EDX;
  }
  piVar2 = local_38;
  local_8 = 1;
  param_1 = local_38;
  if (local_38 != (int *)0x0) {
    local_38 = (int *)0x0;
    pcVar3 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_004c641c)(piVar2);
    (*pcVar3)();
    param_1 = extraout_ECX;
    param_2 = extraout_EDX_00;
  }
LAB_00421b94:
  FUN_00453e64(param_1,param_2);
  return;
}



/* Function: FUN_00421ba4 */

/* WARNING: Removing unreachable block (ram,0x00421c07) */

void __thiscall FUN_00421ba4(void *this,undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 unaff_retaddr;
  undefined1 auStack_24 [24];
  uint local_c;
  
  local_c = DAT_004c41c0 ^ (uint)auStack_24;
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x178) != DVar3) {
    iVar6 = 0xea9;
    goto LAB_0045a5ec;
  }
  *param_2 = 0;
  this = (void *)((int)this + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) goto LAB_0045a5f1;
  do {
                    /* WARNING: Load size is inaccurate */
    piVar1 = *this;
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 0x34);
      (*(code *)PTR_guard_check_icall_004c641c)(piVar1,param_1,param_2);
      uVar7 = (*pcVar2)();
      pvVar5 = (void *)uVar7;
      if (-1 < (int)pvVar5) {
        FUN_00450870(local_c ^ (uint)auStack_24,(int)((ulonglong)uVar7 >> 0x20));
        return;
      }
      iVar6 = 0xc58;
      goto LAB_0045a636;
    }
    iVar6 = 0xc54;
LAB_0045a5ec:
    FUN_0045247c(unaff_retaddr,iVar6,0x40c108);
LAB_0045a5f1:
    FUN_0044e60e((int *)this);
    puVar4 = (undefined4 *)FUN_00476f79((int)auStack_24);
    pvVar5 = (void *)RoGetActivationFactory(*puVar4,&DAT_00409964,this);
  } while (-1 < (int)pvVar5);
  iVar6 = 0xc51;
LAB_0045a636:
  FUN_00452460(unaff_retaddr,iVar6,0x40c108,pvVar5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_00421c30 */

void __fastcall FUN_00421c30(DWORD *param_1)

{
  HANDLE h;
  code *pcVar1;
  DWORD DVar2;
  PTP_WAIT pwa;
  int unaff_retaddr;
  int iVar3;
  
  DVar2 = GetCurrentThreadId();
  if (*param_1 == DVar2) {
    if (param_1[0xc] == 0) {
      pwa = CreateThreadpoolWait(FUN_0047d130,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      param_1[0xc] = (DWORD)pwa;
      if (pwa == (PTP_WAIT)0x0) goto LAB_0045a658;
      h = (HANDLE)param_1[3];
      if ((h != (HANDLE)0x0) && (h != (HANDLE)0xffffffff)) {
        SetThreadpoolWait(pwa,h,(PFILETIME)0x0);
        return;
      }
      iVar3 = 100;
    }
    else {
      iVar3 = 0x5b;
    }
  }
  else {
    iVar3 = 0x91;
  }
  FUN_0045247c(unaff_retaddr,iVar3,0x40c1e8);
LAB_0045a658:
  FUN_00473c13(unaff_retaddr,0x62,0x40c1e8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00421ca0 */

void FUN_00421ca0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x78) + 0x10);
  if (pcVar1 == FUN_00421ce0) {
    FUN_00421ce0((int)*(int **)(param_1 + 0x78),param_3);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00421ce0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0045a6c0) */

undefined4 FUN_00421ce0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *piVar4;
  int *piVar5;
  int unaff_retaddr;
  int *local_14;
  
  piVar1 = (int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar3 = FUN_0045247c(unaff_retaddr,0x33,0x40c234);
    unaff_retaddr = extraout_ECX;
LAB_0045a696:
    FUN_0045249b(unaff_retaddr,0x36,0x40c234,uVar3);
    piVar4 = extraout_ECX_00;
    piVar5 = piVar1;
  }
  else {
    uVar3 = RtlEnterCriticalSection(piVar1);
    if ((int)uVar3 < 0) goto LAB_0045a696;
    piVar5 = (int *)(param_1 + 0x14);
    piVar4 = (int *)*piVar5;
    local_14 = piVar4;
    if (piVar4 == piVar5) goto LAB_00421d27;
  }
  do {
    pcVar2 = *(code **)(*(int *)piVar4[3] + 0xc);
    (*(code *)PTR_guard_check_icall_004c641c)((int *)piVar4[3],param_2);
    (*pcVar2)();
    piVar4 = (int *)*local_14;
    local_14 = piVar4;
  } while (piVar4 != piVar5);
LAB_00421d27:
  FUN_00424890((int)piVar1);
  return 0;
}



/* Function: FUN_00421d50 */

undefined4 FUN_00421d50(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 unaff_retaddr;
  
  DVar1 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0xac) == DVar1) {
    uVar2 = FUN_00425540(param_1 + -0x40);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    iVar3 = FUN_00421d8f(extraout_ECX);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    FUN_0045247c(unaff_retaddr,0x21d,0x40f3bc);
  }
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((PTR_LOOP_004c4000[0x6c] & 0x80) != 0)) && (2 < (byte)PTR_LOOP_004c4000[0x69])) {
    FUN_0047ce9e(0x1c,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100));
  }
  return 0;
}



/* Function: FUN_00421d8f */

/* WARNING: Removing unreachable block (ram,0x00421e15) */

int __fastcall FUN_00421d8f(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_retaddr;
  char *pcVar7;
  
  uVar3 = FUN_00425540(param_1);
  if ((char)uVar3 == '\0') {
    pcVar7 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar5 = 0x30e;
LAB_0045a742:
    do {
      FUN_0045247c(unaff_retaddr,iVar5,(int)pcVar7);
LAB_0045a74a:
      pcVar7 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
      iVar5 = 0x21d;
    } while( true );
  }
  DVar4 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0xec) != DVar4) goto LAB_0045a74a;
  iVar6 = 0;
  iVar5 = *(int *)((int)ProcessEnvironmentBlock + 0x14);
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 4) != 0x57454442) {
      pcVar7 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
      iVar5 = 0x38d;
      goto LAB_0045a742;
    }
    piVar1 = *(int **)(param_1 + 0xa0);
    pcVar2 = *(code **)(*piVar1 + 0x7c);
    if (pcVar2 == FUN_00421680) {
      iVar6 = FUN_00421680((int)piVar1,iVar5 + 0xf8);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(piVar1,iVar5 + 0xf8);
      iVar6 = (*pcVar2)();
    }
    if ((((iVar6 < 0) && ((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000)) &&
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) &&
       (1 < (byte)PTR_LOOP_004c4000[0x69])) {
      FUN_00474b30(0xf,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                   *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                   "this->coreWebViewAppHost->CollectGCTelemetry(pTelemetryBlock)");
    }
  }
  return iVar6;
}



/* Function: FUN_00421e24 */

/* WARNING: Removing unreachable block (ram,0x0045a882) */
/* WARNING: Removing unreachable block (ram,0x0045a810) */
/* WARNING: Removing unreachable block (ram,0x0045a8c9) */

void __fastcall FUN_00421e24(undefined4 *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  void *pvVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  int iVar5;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int *piVar6;
  undefined4 unaff_retaddr;
  int local_20;
  int local_1c;
  _EVENT_DATA_DESCRIPTOR local_18;
  uint local_8;
  
  local_8 = DAT_004c41c0 ^ (uint)&stack0xfffffffc;
  DVar2 = GetCurrentThreadId();
  if (param_1[0x5e] == DVar2) {
    local_20 = 0;
    DVar2 = GetCurrentThreadId();
    if (param_1[0x5e] == DVar2) {
      if ((param_1[0x2f] == 1) && (param_1[0x41] != 0)) {
        if (param_1[0x50] != 0) goto LAB_0045a7b9;
        if (param_1[0x40] != 0) {
          FUN_004217e0(param_1,2,'\0');
          FUN_00421ba4(param_1,1,&local_20);
          if ((DAT_004c5240 & 8) != 0) {
            FUN_004745b6(extraout_ECX,(PCEVENT_DESCRIPTOR)&DAT_00412178,extraout_ECX,1,&local_18);
          }
          GetSystemTimeAsFileTime((LPFILETIME)(param_1 + 0x58));
          uVar4 = extraout_EDX;
          if (param_1[0x5d] != 0) {
            GetSystemTimeAsFileTime((LPFILETIME)(param_1[0x5d] + 0x38));
            uVar4 = extraout_EDX_00;
          }
          if (local_20 != 0) {
            local_1c = 0;
            pcVar1 = *(code **)*param_1;
            FUN_0044e60e(&local_1c);
            (*(code *)PTR_guard_check_icall_004c641c)(param_1,&DAT_0041381c,&local_1c);
            pvVar3 = (void *)(*pcVar1)();
            if (-1 < (int)pvVar3) goto LAB_0045a83b;
            iVar5 = 0x7de;
            while( true ) {
              FUN_00452460(unaff_retaddr,iVar5,0x40c108,pvVar3);
LAB_0045a83b:
              if ((DAT_004c5240 & 4) != 0) {
                GetCurrentProcessId();
                FUN_0047cb0b(extraout_ECX_00,(PCEVENT_DESCRIPTOR)&DAT_00411fd8);
              }
              param_1[0x55] = local_20;
              pcVar1 = *(code **)(*(int *)param_1[0x16] + 0x24);
              (*(code *)PTR_guard_check_icall_004c641c)((int *)param_1[0x16],param_1[0x40],local_1c)
              ;
              pvVar3 = (void *)(*pcVar1)();
              if (-1 < (int)pvVar3) break;
              iVar5 = 0x7e8;
            }
            if ((DAT_004c5240 & 4) != 0) {
              GetCurrentProcessId();
              FUN_0047cb0b(extraout_ECX_01,(PCEVENT_DESCRIPTOR)&DAT_00412238);
            }
            FUN_0044e60e(&local_1c);
            uVar4 = extraout_EDX_02;
          }
          if (param_1[0x2c] == 0) {
            piVar6 = param_1 + 8;
            pcVar1 = *(code **)(*piVar6 + 0x18);
            if (pcVar1 == FUN_00421f20) {
              FUN_00421f20((int)piVar6);
              uVar4 = extraout_EDX_01;
            }
            else {
              (*(code *)PTR_guard_check_icall_004c641c)(piVar6);
              (*pcVar1)();
              uVar4 = extraout_EDX_03;
            }
          }
          FUN_00450870(local_8 ^ (uint)&stack0xfffffffc,uVar4);
          return;
        }
        iVar5 = 0x7c6;
      }
      else {
        iVar5 = 0x7c4;
      }
      goto LAB_0045a7b1;
    }
  }
  iVar5 = 0xea9;
LAB_0045a7b1:
  do {
    FUN_0045247c(unaff_retaddr,iVar5,0x40c108);
LAB_0045a7b9:
    iVar5 = 0x7c5;
  } while( true );
}



/* Function: FUN_00421f20 */

/* WARNING: Removing unreachable block (ram,0x0042236f) */
/* WARNING: Removing unreachable block (ram,0x0045ae68) */
/* WARNING: Removing unreachable block (ram,0x0045ac39) */
/* WARNING: Removing unreachable block (ram,0x0045abe4) */
/* WARNING: Removing unreachable block (ram,0x0045aadf) */
/* WARNING: Removing unreachable block (ram,0x0045aa74) */
/* WARNING: Removing unreachable block (ram,0x0045a90c) */
/* WARNING: Removing unreachable block (ram,0x0045a948) */
/* WARNING: Removing unreachable block (ram,0x0045aaa4) */
/* WARNING: Removing unreachable block (ram,0x0045abac) */
/* WARNING: Removing unreachable block (ram,0x0045ac16) */
/* WARNING: Removing unreachable block (ram,0x0045adce) */
/* WARNING: Removing unreachable block (ram,0x0045ae8c) */
/* WARNING: Removing unreachable block (ram,0x0042239a) */

void FUN_00421f20(int param_1)

{
  DWORD *pDVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  BOOL BVar10;
  void *pvVar11;
  void *extraout_EAX;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined **ppuVar14;
  HKEY hkey;
  LSTATUS LVar15;
  int *piVar16;
  int iVar17;
  HANDLE hProcess;
  undefined4 extraout_ECX;
  uint uVar18;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *extraout_ECX_03;
  int *piVar19;
  int *extraout_ECX_04;
  uint extraout_ECX_05;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  int extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  code *unaff_EBX;
  undefined4 *this;
  undefined8 uVar20;
  int unaff_retaddr;
  UINT uExitCode;
  _FILETIME local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  DWORD local_40;
  undefined4 local_3c;
  code *local_38;
  void *local_34;
  byte local_2d;
  int *local_2c;
  int *local_28;
  char local_21;
  code *local_20;
  code *local_1c;
  _EVENT_DATA_DESCRIPTOR local_18;
  uint local_8;
  
  local_8 = DAT_004c41c0 ^ (uint)&stack0xfffffffc;
  DVar7 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x158) == DVar7) {
    local_34 = (void *)0x0;
    uVar12 = extraout_EDX;
    if (*(int *)(param_1 + 0x9c) == 0) goto LAB_004223a4;
    if (*(int *)(param_1 + 0x9c) != 2) goto LAB_0045a8e7;
    unaff_EBX = *(code **)(param_1 + 0x28);
    local_2c = (int *)0x0;
    local_28 = (int *)0x0;
    local_21 = '\0';
    local_40 = 4;
    local_1c = *(code **)(*(int *)unaff_EBX + 0x14);
    if (local_1c != FUN_004380c0) goto LAB_0045a8f9;
    iVar8 = FUN_004380c0((int)unaff_EBX);
  }
  else {
    FUN_0045247c(unaff_retaddr,0xea9,0x40c108);
LAB_0045a8e7:
    FUN_0045247c(unaff_retaddr,0x45e,0x40c108);
LAB_0045a8f9:
    (*(code *)PTR_guard_check_icall_004c641c)();
    iVar8 = (*local_1c)();
  }
  if (iVar8 == 0) {
    FUN_004217e0((void *)(param_1 + -0x20),3,'\0');
    uVar9 = FUN_004224f1(param_1 + -0x20);
    uVar12 = extraout_ECX;
    if (uVar9 != 0) goto LAB_0045a92a;
LAB_00421fb6:
    if ((DAT_004c5240 & 8) != 0) goto LAB_0045a96a;
  }
  else {
    FUN_0045247c(unaff_retaddr,0x469,0x40c108);
LAB_0045a92a:
    unaff_EBX = *(code **)(**(int **)(param_1 + 0x28) + 0xc4);
    (*(code *)PTR_guard_check_icall_004c641c)(*(int **)(param_1 + 0x28),0);
    pvVar11 = (void *)(*unaff_EBX)();
    uVar12 = extraout_ECX_01;
    if (-1 < (int)pvVar11) goto LAB_00421fb6;
    FUN_00452460(unaff_retaddr,0x471,0x40c108,pvVar11);
    uVar12 = extraout_ECX_02;
LAB_0045a96a:
    FUN_004745b6(uVar12,(PCEVENT_DESCRIPTOR)&DAT_004120c8,uVar12,1,&local_18);
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    unaff_EBX = (code *)(param_1 + 0xb0);
    *(int *)unaff_EBX = 0;
    hkey = DAT_004c4f14;
    if (DAT_004c4f14 != (HKEY)0x0) goto LAB_0045a992;
  }
  else {
    hkey = (HKEY)FUN_0045247c(unaff_retaddr,0x479,0x40c108);
LAB_0045a992:
    LVar15 = RegGetValueW(hkey,(LPCWSTR)0x0,L"PostAppSuspendActivities",0x10,(LPDWORD)0x0,unaff_EBX,
                          &local_40);
    if ((((LVar15 == 0) && (*(int *)unaff_EBX != 0)) &&
        ((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000)) &&
       (((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0 && (4 < (byte)PTR_LOOP_004c4000[0x69])))
       ) {
      FUN_0047ce9e(0x16,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                   *(undefined4 *)(PTR_LOOP_004c4000 + 100));
    }
  }
  if (*(int *)(param_1 + 0x154) != 0) {
    GetSystemTimeAsFileTime((LPFILETIME)(*(int *)(param_1 + 0x154) + 0x40));
  }
  local_54.dwLowDateTime = 0;
  local_54.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_54);
  uVar18 = local_54.dwLowDateTime - *(uint *)(param_1 + 0x140);
  uVar9 = (local_54.dwHighDateTime - *(int *)(param_1 + 0x144)) -
          (uint)(local_54.dwLowDateTime < *(uint *)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  lVar3 = (ulonglong)uVar18 * 0x346dc5d6;
  local_38 = (code *)((ulonglong)lVar3 >> 0x20);
  lVar4 = (ulonglong)uVar9 * 0x3886594b;
  local_3c = (undefined4)((ulonglong)lVar4 >> 0x20);
  lVar5 = (ulonglong)uVar9 * 0x346dc5d6;
  local_20 = (code *)((ulonglong)lVar5 >> 0x20);
  local_1c = (code *)lVar5;
  lVar4 = lVar4 + ((ulonglong)uVar18 * 0x3886594b >> 0x20);
  uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar3 = lVar5 + (ulonglong)
                  CONCAT14(CARRY4(uVar9,(uint)(local_38 + CARRY4((uint)lVar3,(uint)lVar4))),
                           local_38 + CARRY4((uint)lVar3,(uint)lVar4) + uVar9);
  *(uint *)(param_1 + 0x124) = (uint)lVar3 >> 0xb | (int)((ulonglong)lVar3 >> 0x20) * 0x200000;
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) && (4 < (byte)PTR_LOOP_004c4000[0x69]))
  {
    FUN_0047460c(0x17,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100));
    lVar5 = CONCAT44(local_20,local_1c);
  }
  local_20 = (code *)((ulonglong)lVar5 >> 0x20);
  local_1c = (code *)lVar5;
  this = (undefined4 *)(param_1 + -0x20);
  FUN_0042298b(this,1);
  pDVar1 = *(DWORD **)(param_1 + 0x104);
  iVar8 = param_1;
  if (pDVar1 == (DWORD *)0x0) {
    FUN_0045247c(unaff_retaddr,0x4ab,0x40c108);
LAB_0045aa33:
    FUN_0045247c(unaff_retaddr,0x91,0x40c1e8);
LAB_0045aa45:
    FUN_00473c13(unaff_retaddr,0x51,0x40c1e8);
    piVar19 = extraout_ECX_03;
LAB_0045aa57:
    local_2c = (int *)0x0;
    pcVar2 = *(code **)(*piVar19 + 8);
    (*(code *)PTR_guard_check_icall_004c641c)(piVar19);
    (*pcVar2)();
LAB_00422132:
    if (local_1c == FUN_00432660) {
      pvVar11 = (void *)FUN_00432660((int *)(param_1 + -0x20),(int *)&DAT_004089f4,(int *)&local_2c)
      ;
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)((int *)(param_1 + -0x20),&DAT_004089f4,&local_2c);
      pvVar11 = (void *)(*local_1c)();
    }
    if ((int)pvVar11 < 0) {
      FUN_00452460(unaff_retaddr,0x4c0,0x40c108,pvVar11);
      piVar19 = extraout_ECX_04;
LAB_0045aac6:
      (*(code *)PTR_guard_check_icall_004c641c)(piVar19,local_2c,param_1 + 0x7c);
      pvVar11 = (void *)(*local_20)();
    }
    else {
      piVar19 = *(int **)(param_1 + 0x28);
      local_20 = *(code **)(*piVar19 + 0x74);
      if (local_20 != FUN_004223d0) goto LAB_0045aac6;
      iVar8 = FUN_004223d0((int)piVar19,local_2c,param_1 + 0x7c);
      pvVar11 = extraout_EAX;
    }
    if ((int)pvVar11 < 0) {
      FUN_00452460(unaff_retaddr,0x4c3,0x40c108,pvVar11);
LAB_0045ab01:
      if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) &&
         (4 < (byte)PTR_LOOP_004c4000[0x69])) {
        FUN_0047460c(0x18,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                     *(undefined4 *)(PTR_LOOP_004c4000 + 100));
      }
    }
    else if ((*(int *)(iVar8 + 0x154) != 0) && (*(int *)(param_1 + 0x7c) != 0)) {
      *(undefined4 *)(*(int *)(iVar8 + 0x154) + 0x6c) = 0;
      *(undefined4 *)(*(int *)(iVar8 + 0x154) + 0x70) = 0;
      GetSystemTimeAsFileTime((LPFILETIME)(*(int *)(iVar8 + 0x154) + 100));
      *(undefined4 *)(*(int *)(iVar8 + 0x154) + 0x60) = 1;
    }
    piVar19 = (int *)(param_1 + 0x7c);
    if (*piVar19 == 0) {
      if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) &&
         (4 < (byte)PTR_LOOP_004c4000[0x69])) {
        uVar12 = 0x1a;
        goto LAB_0045ab7a;
      }
    }
    else if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
             ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) &&
            (4 < (byte)PTR_LOOP_004c4000[0x69])) {
      uVar12 = 0x19;
LAB_0045ab7a:
      FUN_0047460c(uVar12,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                   *(undefined4 *)(PTR_LOOP_004c4000 + 100));
    }
    piVar16 = local_28;
    local_20 = *(code **)(iVar8 + 0x28);
    local_1c = *(code **)(*(int *)local_20 + 0xc);
    if (local_28 != (int *)0x0) {
      local_28 = (int *)0x0;
      pcVar2 = *(code **)(*piVar16 + 8);
      (*(code *)PTR_guard_check_icall_004c641c)(piVar16);
      (*pcVar2)();
      piVar19 = (int *)(iVar8 + 0x7c);
      param_1 = iVar8;
    }
    this = (undefined4 *)(param_1 + -0x20);
    if (local_1c == FUN_00430eb0) {
      pvVar11 = (void *)FUN_00430eb0((int *)local_20,&DAT_004089e4,&LAB_00408a04,(int *)&local_28);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(local_20,&DAT_004089e4,&LAB_00408a04,&local_28);
      pvVar11 = (void *)(*local_1c)();
      piVar19 = (int *)(iVar8 + 0x7c);
    }
    if ((int)pvVar11 < 0) {
      piVar16 = (int *)FUN_00452460(unaff_retaddr,0x4e9,0x40c108,pvVar11);
LAB_0045ac06:
      (*(code *)PTR_guard_check_icall_004c641c)(piVar16);
      uVar12 = (*local_20)();
      piVar19 = (int *)(iVar8 + 0x7c);
    }
    else {
      local_20 = *(code **)(*local_28 + 0x20);
      piVar16 = local_28;
      if (local_20 != FUN_004223c0) goto LAB_0045ac06;
      uVar12 = FUN_004223c0();
    }
    *(undefined4 *)(iVar8 + 0x80) = uVar12;
    if (*(int *)(iVar8 + 0x154) != 0) {
      *(undefined4 *)(*(int *)(iVar8 + 0x154) + 0x74) = uVar12;
    }
    local_20 = *(code **)(iVar8 + 0x28);
    local_38 = *(code **)(*(int *)local_20 + 0x10);
    if (local_38 == FUN_00438f60) {
      uVar20 = FUN_00438f60((int)local_20);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)();
      uVar20 = (*local_38)();
      piVar19 = (int *)(iVar8 + 0x7c);
    }
    uVar12 = (undefined4)((ulonglong)uVar20 >> 0x20);
    if ((((int)uVar20 == 1) && ((DAT_004c5240 & 0x10) != 0)) &&
       (iVar17 = FUN_0047a61b((int)this), uVar12 = extraout_EDX_04, iVar17 != 0)) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    *(undefined4 *)(iVar8 + 0x84) = uVar13;
    if ((((*(byte *)(iVar8 + 0xb0) & 2) != 0) &&
        (*(undefined4 *)(iVar8 + 0x78) = 1, (undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000))
       && (((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0 &&
           (4 < (byte)PTR_LOOP_004c4000[0x69])))) {
      FUN_0047460c(0x1b,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                   *(undefined4 *)(PTR_LOOP_004c4000 + 100));
      uVar12 = extraout_EDX_05;
    }
    if ((((*(byte *)(iVar8 + 0xb0) & 4) != 0) &&
        (*piVar19 = 1, (undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000)) &&
       (((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0 && (4 < (byte)PTR_LOOP_004c4000[0x69])))
       ) {
      FUN_0047460c(0x1c,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                   *(undefined4 *)(PTR_LOOP_004c4000 + 100));
      uVar12 = extraout_EDX_06;
    }
    if ((((*(int *)(iVar8 + 0x78) == 0) && (*piVar19 == 0)) && (*(int *)(iVar8 + 0x84) == 0)) &&
       (*(int *)(iVar8 + 0x80) == 0)) {
LAB_00422325:
      uVar20 = CONCAT44(uVar12,PTR_LOOP_004c4000);
      if (*(int *)(iVar8 + 0x78) != 0) goto LAB_0045aef4;
LAB_0042232f:
      if ((*piVar19 != 0) || (*(int *)(iVar8 + 0x84) != 0)) goto LAB_00422338;
LAB_00422342:
      uVar9 = 0;
      goto LAB_00422344;
    }
    pvVar11 = (void *)FUN_0042258d((int)this);
    local_34 = pvVar11;
    if (-1 < (int)pvVar11) {
      if (*(int *)(iVar8 + 0x80) == 0) {
        if (((*(int *)(iVar8 + 0x78) != 0) || (*(int *)(iVar8 + 0x7c) != 0)) &&
           ((*(byte *)(iVar8 + 0xb0) & 0x10) == 0)) {
          iVar17 = *(int *)(iVar8 + 0xa8);
          uVar9 = *(uint *)(iVar8 + 0xac);
          if (uVar9 <= iVar17 + 1000U) {
            FUN_0045247c(unaff_retaddr,0x51a,0x40c108);
            uVar9 = extraout_ECX_05;
            iVar17 = extraout_EDX_07;
          }
          local_20 = (code *)((uVar9 - iVar17) + -1000);
          if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
              ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) &&
             (3 < (byte)PTR_LOOP_004c4000[0x69])) {
            FUN_0047ce9e(0x1d,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                         *(undefined4 *)(PTR_LOOP_004c4000 + 100));
          }
          pcVar2 = *(code **)(**(int **)(iVar8 + 0xfc) + 0xc);
          (*(code *)PTR_guard_check_icall_004c641c)
                    (*(int **)(iVar8 + 0xfc),2,local_20,FUN_0047b8b0,iVar8 + -0x20);
          pvVar11 = (void *)(*pcVar2)();
          if ((int)pvVar11 < 0) {
            FUN_00452460(unaff_retaddr,0x529,0x40c108,pvVar11);
          }
          *(undefined4 *)(iVar8 + 0x8c) = 1;
          this = (undefined4 *)(iVar8 + -0x20);
        }
        goto LAB_00422300;
      }
LAB_0045ae4f:
      pcVar2 = *(code **)(*local_28 + 0x1c);
      (*(code *)PTR_guard_check_icall_004c641c)(local_28);
      iVar17 = (*pcVar2)();
      if (iVar17 != 0) {
        pcVar2 = *(code **)(*local_28 + 0x24);
        (*(code *)PTR_guard_check_icall_004c641c)(local_28);
        (*pcVar2)();
      }
      if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) &&
         (3 < (byte)PTR_LOOP_004c4000[0x69])) {
        FUN_0047460c(0x1e,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                     *(undefined4 *)(PTR_LOOP_004c4000 + 100));
      }
      FUN_00475a55();
      uExitCode = 4;
      hProcess = GetCurrentProcess();
      TerminateProcess(hProcess,uExitCode);
      this = (undefined4 *)(iVar8 + -0x20);
      uVar12 = extraout_EDX_08;
LAB_00422320:
      piVar19 = (int *)(iVar8 + 0x7c);
      goto LAB_00422325;
    }
    if ((pvVar11 == (void *)0x80004001) || (pvVar11 == (void *)0x8000000d)) {
      if (*(int *)(iVar8 + 0x154) != 0) {
        *(undefined4 *)(*(int *)(iVar8 + 0x154) + 0x7c) = 1;
      }
      if (pvVar11 == (void *)0x8000000d) goto LAB_0045ae40;
      local_21 = '\x01';
    }
    else {
      iVar17 = FUN_0047a6c7((int)pvVar11);
      if ((iVar17 == 0) || (uVar9 = FUN_004b9b82(), uVar9 == 0)) {
        FUN_00452460(unaff_retaddr,0x54f,0x40c108,pvVar11);
LAB_0045ae40:
        *(undefined4 *)(iVar8 + 0x88) = 1;
      }
      else {
        *(undefined4 *)(iVar8 + 0xa4) = 1;
      }
    }
    local_34 = (void *)0x0;
LAB_00422300:
    piVar19 = (int *)(iVar8 + 0x7c);
    if (*(int *)(iVar8 + 0x80) != 0) goto LAB_0045ae4f;
    if (*(DWORD **)(iVar8 + 0x104) != (DWORD *)0x0) {
      FUN_00421c30(*(DWORD **)(iVar8 + 0x104));
      uVar12 = extraout_EDX_00;
      goto LAB_00422320;
    }
    uVar20 = FUN_0045247c(unaff_retaddr,0xc4,0x40bcb8);
LAB_0045aef4:
    if (*(int *)(iVar8 + 0xa4) != 0) {
      FUN_0047c496((int)this);
      uVar20 = CONCAT44(extraout_EDX_09,PTR_LOOP_004c4000);
    }
    if (*(int *)(iVar8 + 0x78) == 0) goto LAB_0042232f;
LAB_00422338:
    uVar12 = (undefined4)((ulonglong)uVar20 >> 0x20);
    ppuVar14 = (undefined **)uVar20;
    if ((local_21 != '\0') || ((*(int *)(iVar8 + 0x88) != 0 || (*(int *)(iVar8 + 0xa4) != 0))))
    goto LAB_00422342;
    if ((*(byte *)(iVar8 + 0xb0) & 0x10) != 0) {
      if (((ppuVar14 != &PTR_LOOP_004c4000) && (((uint)ppuVar14[0x1b] & 0x400) != 0)) &&
         (4 < *(byte *)((int)ppuVar14 + 0x69))) {
        FUN_0047460c(0x1f,&LAB_0041382c,ppuVar14[0x18],ppuVar14[0x19]);
      }
      goto LAB_00422342;
    }
    iVar8 = *(int *)(iVar8 + 0x154);
    if (iVar8 != 0) {
      local_18.Reserved = *(ULONG *)(iVar8 + 0x38);
      local_4c = *(undefined4 *)(iVar8 + 0x3c);
      local_48 = *(undefined4 *)(iVar8 + 0x40);
      local_44 = *(undefined4 *)(iVar8 + 0x44);
      local_1c = *(code **)(iVar8 + 0x50);
      local_3c = *(undefined4 *)(iVar8 + 0x54);
      local_38 = *(code **)(iVar8 + 100);
      local_20 = *(code **)(iVar8 + 0x68);
      if ((DAT_004c5240 & 4) != 0) {
        GetCurrentProcessId();
        FUN_0047cbb4();
        uVar12 = extraout_EDX_10;
      }
    }
  }
  else {
    DVar7 = GetCurrentThreadId();
    if (*pDVar1 != DVar7) goto LAB_0045aa33;
    BVar10 = ResetEvent((HANDLE)pDVar1[3]);
    if (BVar10 == 0) goto LAB_0045aa45;
    local_2d = FUN_00423d95(this);
    cVar6 = FUN_00451626((uint3)extraout_ECX_00);
    if ((cVar6 != '\0') && (cVar6 = WWABehaviorEnabled(0x20), cVar6 != '\0')) {
      if (*(int *)(param_1 + 0x7c) == 0) {
        local_1c = *(code **)*this;
        piVar19 = local_2c;
        if (local_2c != (int *)0x0) goto LAB_0045aa57;
        goto LAB_00422132;
      }
      goto LAB_0045ab01;
    }
    uVar9 = (uint)local_2d;
LAB_00422344:
    FUN_00444442(this,uVar9);
    uVar12 = extraout_EDX_01;
  }
  piVar19 = local_28;
  if (local_28 != (int *)0x0) {
    local_28 = (int *)0x0;
    pcVar2 = *(code **)(*piVar19 + 8);
    (*(code *)PTR_guard_check_icall_004c641c)(piVar19);
    (*pcVar2)();
    uVar12 = extraout_EDX_02;
  }
  piVar19 = local_2c;
  if (local_2c != (int *)0x0) {
    local_2c = (int *)0x0;
    pcVar2 = *(code **)(*piVar19 + 8);
    (*(code *)PTR_guard_check_icall_004c641c)(piVar19);
    (*pcVar2)();
    uVar12 = extraout_EDX_03;
  }
LAB_004223a4:
  FUN_00450870(local_8 ^ (uint)&stack0xfffffffc,uVar12);
  return;
}



/* Function: FUN_004223c0 */

undefined4 FUN_004223c0(void)

{
  return DAT_004c525c;
}



/* Function: FUN_004223d0 */

/* WARNING: Removing unreachable block (ram,0x0045b0a1) */

undefined4 FUN_004223d0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  char *pcVar6;
  
  uVar3 = FUN_00425540(param_1);
  if ((char)uVar3 == '\0') {
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar5 = 0x30e;
  }
  else {
    DVar4 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xec) == DVar4) {
      if (param_3 != 0) {
        if (DAT_004c5270 != 0) {
          return unaff_ESI;
        }
        piVar1 = *(int **)(param_1 + 0xa0);
        pcVar2 = *(code **)(*piVar1 + 0x2c);
        if (pcVar2 == FUN_00422440) {
          FUN_00422440((int)piVar1,param_2,param_3);
          return unaff_ESI;
        }
        (*(code *)PTR_guard_check_icall_004c641c)(piVar1,param_2,param_3);
        (*pcVar2)();
        return unaff_ESI;
      }
      goto LAB_0045b04a;
    }
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar5 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar5,(int)pcVar6);
LAB_0045b04a:
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) && (1 < (byte)PTR_LOOP_004c4000[0x69]))
  {
    FUN_00474b30(0x77,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100),"waitForCleanup");
  }
  return unaff_ESI;
}



/* Function: FUN_00422440 */

void FUN_00422440(int param_1,undefined4 param_2,int param_3)

{
  int *this;
  code *pcVar1;
  int iVar2;
  code *unaff_EBX;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar2 = 0x30c;
  }
  else {
    this = *(int **)(param_1 + 0x50);
    if (this != (int *)0x0) {
      unaff_EBX = *(code **)(*this + 0x38);
      if (unaff_EBX == FUN_00422490) {
        FUN_00422490(this,param_2,param_3);
        return;
      }
      goto LAB_0045b0cb;
    }
    iVar2 = 0x30d;
  }
  FUN_0045247c(unaff_retaddr,iVar2,0x40f770);
LAB_0045b0cb:
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EBX)();
  if (&stack0xfffffff0 != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00422490 */

undefined4 __thiscall FUN_00422490(void *this,undefined4 param_1,int param_2)

{
  code *pcVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  int *piStackY_18;
  undefined4 uStackY_14;
  
  if (*(int *)((int)this + 0x10) == 0) {
    iVar4 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)((int)this + 0xc) == DVar2) {
      if (param_2 == 0) {
        uVar3 = 0x80070057;
      }
      else {
        piStackY_18 = *(int **)((int)this + 0x10);
        uStackY_14 = param_1;
        pcVar1 = *(code **)(*piStackY_18 + 0x1c);
        (*(code *)PTR_guard_check_icall_004c641c)();
        uVar3 = (*pcVar1)();
        if ((int **)&stack0xfffffff4 != &piStackY_18) {
          pcVar1 = (code *)swi(0x29);
          uVar3 = (*pcVar1)();
        }
      }
      return uVar3;
    }
    iVar4 = 0x1d2;
  }
  uStackY_14 = 0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar4,0x40f9d0);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_004224f1 */

/* WARNING: Removing unreachable block (ram,0x0045b132) */
/* WARNING: Removing unreachable block (ram,0x00422579) */
/* WARNING: Enum "__MIDL_IUri_0001": Some values do not have unique names */

uint __fastcall FUN_004224f1(int param_1)

{
  _func_7820 *p_Var1;
  DWORD DVar2;
  int iVar3;
  IUri **ppIVar4;
  int *extraout_ECX;
  int *piVar5;
  uint unaff_EBX;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  IUri *This;
  uint local_10;
  uint local_c;
  IUri *local_8;
  
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x178) == DVar2) {
    piVar5 = *(int **)(param_1 + 0x48);
    unaff_EBX = 0;
    local_8 = (IUri *)0x0;
    unaff_EDI = *(code **)(*piVar5 + 0xb4);
    ppIVar4 = &local_8;
    if (unaff_EDI == FUN_0042b280) {
      iVar3 = FUN_0042b280((int)piVar5,ppIVar4);
      goto LAB_00422536;
    }
  }
  else {
    ppIVar4 = (IUri **)FUN_0045247c(unaff_retaddr,0xea9,0x40c108);
    piVar5 = extraout_ECX;
  }
  (*(code *)PTR_guard_check_icall_004c641c)(piVar5,ppIVar4);
  iVar3 = (*unaff_EDI)();
LAB_00422536:
  if (-1 < iVar3) {
    local_c = local_c & unaff_EBX;
    iVar3 = FUN_00423b58((int *)local_8,&local_c,&local_10);
    if (-1 < iVar3) {
      unaff_EBX = (uint)(local_c == 0);
    }
  }
  This = local_8;
  if (local_8 != (IUri *)0x0) {
    local_8 = (IUri *)0x0;
    p_Var1 = This->lpVtbl->Release;
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*p_Var1)(This);
  }
  return unaff_EBX;
}



/* Function: FUN_0042258d */

/* WARNING: Removing unreachable block (ram,0x0045b364) */
/* WARNING: Removing unreachable block (ram,0x0045b17a) */
/* WARNING: Removing unreachable block (ram,0x0045b3af) */

void __fastcall FUN_0042258d(int param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 extraout_EDX_01;
  undefined8 uVar7;
  undefined4 unaff_retaddr;
  undefined4 uStackY_64;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 local_20;
  uint local_1c;
  _EVENT_DATA_DESCRIPTOR local_18;
  uint local_8;
  
  local_8 = DAT_004c41c0 ^ (uint)&stack0xfffffffc;
  DVar4 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x178) != DVar4) {
    iVar5 = 0xea9;
    goto LAB_0045b154;
  }
  local_1c = 0;
  local_20 = 0;
  piVar2 = *(int **)(param_1 + 0x120);
  if (piVar2 == (int *)0x0) goto LAB_0045b15c;
  pcVar3 = *(code **)(*piVar2 + 0xc);
  if (pcVar3 == FUN_00422710) {
    iVar5 = FUN_00422710((int)piVar2,&local_1c);
    uVar7 = CONCAT44(extraout_EDX,iVar5);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)(piVar2,&local_1c);
    uVar7 = (*pcVar3)();
  }
  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 < 0) {
    if ((((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) ||
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0)) ||
       ((byte)PTR_LOOP_004c4000[0x69] < 2)) goto LAB_004226f6;
    pcVar9 = "this->plmSuspendService->RequestCurrentSuspendTimeout(&currentTimeout)";
    uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar8 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uStackY_64 = 0x10;
  }
  else {
    *(uint *)(param_1 + 200) = local_1c;
    iVar5 = 10000;
    if ((*(byte *)(param_1 + 0xd0) & 0x10) != 0) {
      iVar5 = 10;
      if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
          (iVar5 = 10, (*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) &&
         (4 < (byte)PTR_LOOP_004c4000[0x69])) {
        FUN_0047ce9e(0x11,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                     *(undefined4 *)(PTR_LOOP_004c4000 + 100));
        iVar5 = 10;
      }
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      iVar5 = 30000;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar5 = 45000;
      if ((((*(byte *)(param_1 + 0xd0) & 8) != 0) &&
          (iVar5 = 2000, (undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000)) &&
         (((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0 && (4 < (byte)PTR_LOOP_004c4000[0x69])
          ))) {
        FUN_0047ce9e(0x12,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                     *(undefined4 *)(PTR_LOOP_004c4000 + 100));
      }
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x80;
    }
    if (*(int *)(param_1 + 0x9c) != 0) {
      if ((DAT_004c5240 & 8) != 0) {
        FUN_004745b6(local_1c,(PCEVENT_DESCRIPTOR)&DAT_00412328,local_1c,1,&local_18);
      }
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x100;
    }
    if ((((*(int *)(param_1 + 0xa0) == 0) && (*(int *)(param_1 + 0x98) == 0)) &&
        (*(int *)(param_1 + 0x9c) == 0)) && (*(int *)(param_1 + 0xa4) == 0)) {
      iVar5 = 0x3b0;
LAB_0045b154:
      do {
        FUN_0045247c(unaff_retaddr,iVar5,0x40c108);
LAB_0045b15c:
        iVar5 = 0x36f;
      } while( true );
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 0)) {
        iVar5 = 0;
      }
      if (iVar5 + 20000 + local_1c < 0xe86d) {
        iVar5 = iVar5 + 20000;
      }
      else {
        if (0xe86b < local_1c) {
          iVar5 = 0x3c0;
          goto LAB_0045b154;
        }
        iVar5 = 0xe86c - local_1c;
      }
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x200;
    }
    uVar1 = iVar5 + local_1c;
    if (0xe86c < uVar1) {
      iVar5 = 0x3ce;
      goto LAB_0045b154;
    }
    if ((DAT_004c5240 & 4) != 0) {
      GetCurrentThreadId();
      GetCurrentProcessId();
      pcVar3 = *(code **)(**(int **)(param_1 + 0x48) + 0x10);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar3)();
      FUN_0047c9bf();
    }
    GetSystemTimeAsFileTime((LPFILETIME)(param_1 + 0x130));
    piVar2 = *(int **)(param_1 + 0x120);
    pcVar3 = *(code **)(*piVar2 + 0x10);
    if (pcVar3 == FUN_00422780) {
      iVar5 = FUN_00422780((int)piVar2,uVar1,&local_20,&local_1c);
      uVar7 = CONCAT44(extraout_EDX_00,iVar5);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(piVar2,uVar1,&local_20,&local_1c);
      uVar7 = (*pcVar3)();
    }
    uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (-1 < (int)uVar7) {
      *(undefined4 *)(param_1 + 0xcc) = local_20;
      goto LAB_004226f6;
    }
    if ((((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) ||
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0)) ||
       ((byte)PTR_LOOP_004c4000[0x69] < 2)) goto LAB_004226f6;
    pcVar9 = 
    "this->plmSuspendService->RequestNewSuspendTimeout( newTimeout, &newTimeoutAllowed, &currentTimeout)"
    ;
    uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar8 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uStackY_64 = 0x13;
  }
  FUN_00474b30(uStackY_64,&LAB_0041382c,uVar8,uVar6,pcVar9);
  uVar6 = extraout_EDX_01;
LAB_004226f6:
  FUN_00450870(local_8 ^ (uint)&stack0xfffffffc,uVar6);
  return;
}



/* Function: FUN_00422710 */

int FUN_00422710(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStackY_2c;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piStack_1c = *(int **)(param_1 + 0xc);
  uStack_14 = param_2;
  uStack_18 = 0;
  pcVar1 = *(code **)(*piStack_1c + 0xc);
  (*(code *)PTR_guard_check_icall_004c641c)();
  iVar2 = (*pcVar1)();
  if ((int **)&stack0xfffffff0 != &piStack_1c) {
    pcVar1 = (code *)swi(0x29);
    iVar2 = (*pcVar1)();
  }
  if (iVar2 < 0) {
    if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
      return iVar2;
    }
    if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x2000) == 0) {
      return iVar2;
    }
    if ((byte)PTR_LOOP_004c4000[0x69] < 5) {
      return iVar2;
    }
    uVar4 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar3 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uStackY_2c = 0xc;
  }
  else {
    if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
      return iVar2;
    }
    if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x2000) == 0) {
      return iVar2;
    }
    if ((byte)PTR_LOOP_004c4000[0x69] < 5) {
      return iVar2;
    }
    uVar4 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar3 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uStackY_2c = 0xb;
  }
  FUN_0047ce9e(uStackY_2c,&LAB_00414d40,uVar3,uVar4);
  return iVar2;
}



/* Function: FUN_00422780 */

/* WARNING: Removing unreachable block (ram,0x0042281f) */

int FUN_00422780(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined **extraout_ECX;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **extraout_EDX;
  int iVar5;
  int unaff_retaddr;
  
  if (0xe86b < param_2 - 1U) {
    if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) &&
       (1 < (byte)PTR_LOOP_004c4000[0x69])) {
      FUN_00474b30(0xd,&LAB_00414d40,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                   *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                   "(requestedExtraTimeoutMs > 0) && (requestedExtraTimeoutMs <= PlmConstants::IncreasedTimeoutAmountMax)"
                  );
    }
    return -0x7ff8ffa9;
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = FUN_0045247c(unaff_retaddr,0x33,0x40c234);
LAB_0045b43e:
    FUN_0045249b(unaff_retaddr,0x36,0x40c234,uVar2);
    ppuVar3 = extraout_ECX;
    ppuVar4 = extraout_EDX;
LAB_0045b44f:
    if (3 < *(byte *)((int)ppuVar3 + 0x69)) {
      FUN_00481a28(ppuVar3[0x18],ppuVar3[0x19]);
      ppuVar4 = &PTR_LOOP_004c4000;
      ppuVar3 = (undefined **)PTR_LOOP_004c4000;
    }
  }
  else {
    uVar2 = RtlEnterCriticalSection(param_1 + 0x10);
    if ((int)uVar2 < 0) goto LAB_0045b43e;
    ppuVar4 = &PTR_LOOP_004c4000;
    ppuVar3 = (undefined **)PTR_LOOP_004c4000;
    if (((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
       ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x2000) != 0)) goto LAB_0045b44f;
  }
  if (0xe86c < (uint)(*(int *)(param_1 + 0x2c) + param_2)) {
    if (((ppuVar3 != ppuVar4) && (((uint)ppuVar3[0x1b] & 0x2000) != 0)) &&
       (3 < *(byte *)((int)ppuVar3 + 0x69))) {
      FUN_0047460c(0xf,&LAB_00414d40,ppuVar3[0x18],ppuVar3[0x19]);
      ppuVar4 = &PTR_LOOP_004c4000;
      ppuVar3 = (undefined **)PTR_LOOP_004c4000;
    }
    param_2 = 0xe86c - *(int *)(param_1 + 0x2c);
  }
  if (param_2 == 0) {
    if (((ppuVar3 != ppuVar4) && (((uint)ppuVar3[0x1b] & 0x2000) != 0)) &&
       (3 < *(byte *)((int)ppuVar3 + 0x69))) {
      FUN_0047460c(0x10,&LAB_00414d40,ppuVar3[0x18],ppuVar3[0x19]);
    }
  }
  else {
    if (((ppuVar3 != ppuVar4) && (((uint)ppuVar3[0x1b] & 0x2000) != 0)) &&
       (3 < *(byte *)((int)ppuVar3 + 0x69))) {
      FUN_0047ce9e(0x11,&LAB_00414d40,ppuVar3[0x18],ppuVar3[0x19]);
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 0xc);
    (*(code *)PTR_guard_check_icall_004c641c)(*(int **)(param_1 + 0xc),param_2,param_4);
    iVar5 = (*pcVar1)();
    if (iVar5 < 0) {
      if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x2000) != 0)) &&
         (3 < (byte)PTR_LOOP_004c4000[0x69])) {
        FUN_004819f8(0x13,&LAB_00414d40,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                     *(undefined4 *)(PTR_LOOP_004c4000 + 100));
      }
      goto LAB_0042284b;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_2;
    if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x2000) != 0)) &&
       (3 < (byte)PTR_LOOP_004c4000[0x69])) {
      FUN_0047ce9e(0x12,&LAB_00414d40,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                   *(undefined4 *)(PTR_LOOP_004c4000 + 100));
    }
  }
  *param_3 = *(undefined4 *)(param_1 + 0x2c);
LAB_0042284b:
  FUN_00424890(param_1 + 0x10);
  return iVar5;
}



/* Function: FUN_00422870 */

/* WARNING: Removing unreachable block (ram,0x0045b625) */

void FUN_00422870(int param_1,float param_2,float param_3)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  undefined4 unaff_retaddr;
  
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((PTR_LOOP_004c4000[0x6c] & 0x10) != 0)) && (3 < (byte)PTR_LOOP_004c4000[0x69])) {
    FUN_004945fb((void *)0x28,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100));
  }
  *(float *)(param_1 + 200) = param_3;
  piVar1 = *(int **)(param_1 + 0x4c);
  *(float *)(param_1 + 0xc4) = param_2;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x4c);
    if (pcVar2 == FUN_00422910) {
      pvVar3 = (void *)FUN_00422910((int)piVar1);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(piVar1);
      pvVar3 = (void *)(*pcVar2)();
    }
    if ((int)pvVar3 < 0) {
      FUN_00452460(unaff_retaddr,0x7c3,0x40daa8,pvVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}



/* Function: FUN_00422910 */

void FUN_00422910(int param_1)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  char *pcVar5;
  
  uVar2 = FUN_00425540(param_1 + -4);
  if ((char)uVar2 == '\0') {
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar4 = 0x30e;
  }
  else {
    DVar3 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xe8) == DVar3) {
      if (DAT_004c5270 == 0) {
        pcVar1 = *(code **)(**(int **)(param_1 + 0x9c) + 0x40);
        if (pcVar1 == FUN_004216c0) {
          FUN_004216c0((int)*(int **)(param_1 + 0x9c));
        }
        else {
          (*(code *)PTR_guard_check_icall_004c641c)();
          (*pcVar1)();
          if (&stack0xfffffff4 != &stack0xffffffec) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
          }
        }
      }
      return;
    }
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar4 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar4,(int)pcVar5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0042298b */

/* WARNING: Removing unreachable block (ram,0x0045b6a1) */

void __thiscall FUN_0042298b(void *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  void *pvVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_ESI;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x178) == DVar3) {
    if (param_1 == *(int *)((int)this + 0x94)) {
      return;
    }
    unaff_EDI = (int *)(-(uint)(param_1 != 0) & 2);
    unaff_ESI = param_1;
    if ((DAT_004c5240 & 4) != 0) goto LAB_0045b676;
  }
  else {
    FUN_0045247c(unaff_retaddr,0xea9,0x40c108);
LAB_0045b676:
    GetCurrentProcessId();
    FUN_0047cb0b(extraout_ECX,(PCEVENT_DESCRIPTOR)&DAT_004120b8);
  }
  piVar1 = *(int **)((int)this + 0x48);
  pcVar2 = *(code **)(*piVar1 + 0xb8);
  if (pcVar2 == FUN_00422a20) {
    pvVar4 = (void *)FUN_00422a20((int)piVar1,unaff_EDI);
    param_1 = unaff_ESI;
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)(piVar1,unaff_EDI);
    pvVar4 = (void *)(*pcVar2)();
  }
  if ((int)pvVar4 < 0) {
    FUN_00452460(unaff_retaddr,399,0x40c108,pvVar4);
  }
  else if ((DAT_004c5240 & 4) == 0) goto LAB_004229fe;
  GetCurrentProcessId();
  FUN_0047cb0b(extraout_ECX_00,(PCEVENT_DESCRIPTOR)&DAT_00412188);
LAB_004229fe:
  *(int *)((int)this + 0x94) = param_1;
  return;
}



/* Function: FUN_00422a20 */

void FUN_00422a20(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  char *pcVar5;
  
  uVar2 = FUN_00425540(param_1);
  if ((char)uVar2 == '\0') {
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar4 = 0x30e;
  }
  else {
    DVar3 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xec) == DVar3) {
      unaff_EDI = *(code **)(**(int **)(param_1 + 0x9c) + 0x90);
      if (unaff_EDI == FUN_00422a80) {
        FUN_00422a80((int)*(int **)(param_1 + 0x9c),param_2);
        return;
      }
      goto LAB_0045b6f9;
    }
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar4 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar4,(int)pcVar5);
LAB_0045b6f9:
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EDI)();
  if (&stack0xfffffff4 != &stack0xffffffec) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00422a80 */

void FUN_00422a80(int param_1,int *param_2)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -8);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x54) + 0x70);
  if (pcVar1 == FUN_00422ac0) {
    FUN_00422ac0((int)*(int **)(param_1 + 0x54),param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00422ac0 */

/* WARNING: Removing unreachable block (ram,0x00422b2f) */
/* WARNING: Removing unreachable block (ram,0x00422b3f) */
/* WARNING: Removing unreachable block (ram,0x00422b59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00422ac0(int param_1,int *param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStack_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStack_1c + 0x44);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 0xc);
        (*(code *)PTR_guard_check_icall_004c641c)(0);
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStack_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_00422b6f */

/* WARNING: Removing unreachable block (ram,0x0045b769) */

void __fastcall FUN_00422b6f(int param_1)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  void *pvVar4;
  int *extraout_ECX;
  int *piVar5;
  int iVar6;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  char *pcVar7;
  
  uVar2 = FUN_00425540(param_1);
  if ((char)uVar2 == '\0') {
    pcVar7 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar6 = 0x30e;
LAB_0045b74f:
    iVar6 = FUN_0045247c(unaff_retaddr,iVar6,(int)pcVar7);
    piVar5 = extraout_ECX;
  }
  else {
    DVar3 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xec) != DVar3) {
      pcVar7 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
      iVar6 = 0x21d;
      goto LAB_0045b74f;
    }
    piVar5 = *(int **)(param_1 + 0x9c);
    unaff_EDI = *(code **)(*piVar5 + 0xd4);
    iVar6 = *(int *)(param_1 + 0x8c);
    if (unaff_EDI == FUN_00422bd0) {
      pvVar4 = (void *)FUN_00422bd0((int)piVar5,iVar6);
      goto LAB_00422bbe;
    }
  }
  (*(code *)PTR_guard_check_icall_004c641c)(piVar5,iVar6);
  pvVar4 = (void *)(*unaff_EDI)();
LAB_00422bbe:
  if ((int)pvVar4 < 0) {
    FUN_00452460(unaff_retaddr,0xfba,0x40f3bc,pvVar4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



/* Function: FUN_00422bd0 */

void FUN_00422bd0(int param_1,int param_2)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -8);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x54) + 0x2c);
  if (pcVar1 == FUN_00422c10) {
    FUN_00422c10((int)*(int **)(param_1 + 0x54),param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00422c10 */

/* WARNING: Removing unreachable block (ram,0x0045b7d4) */
/* WARNING: Removing unreachable block (ram,0x0045b831) */

int FUN_00422c10(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int *piVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  int *local_8;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    piStack_1c = (int *)0x45b7bb;
    iVar2 = FUN_0045247c(unaff_retaddr,0x1cd,0x40f9d0);
    piVar3 = extraout_ECX;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x34);
    iVar2 = param_1;
    if (piVar3 == (int *)0x0) goto LAB_00422c32;
  }
  *(undefined4 *)(iVar2 + 0x34) = 0;
  pcVar1 = *(code **)(*piVar3 + 8);
  piStack_1c = (int *)0x45b7ce;
  (*(code *)PTR_guard_check_icall_004c641c)();
  piStack_1c = (int *)0x45b7d0;
  (*pcVar1)();
LAB_00422c32:
  if (param_2 != 0) {
    piVar3 = *(int **)(param_1 + 0x10);
    local_8 = (int *)0x0;
    pcVar1 = *(code **)(*piVar3 + 0x40);
    FUN_0044e60e((int *)&local_8);
    piStack_1c = piVar3;
    (*(code *)PTR_guard_check_icall_004c641c)();
    iVar4 = (*pcVar1)();
    if ((int **)&stack0xffffffec != &piStack_1c) {
      pcVar1 = (code *)swi(0x29);
      iVar4 = (*pcVar1)();
    }
    if (-1 < iVar4) {
      pcVar1 = *(code **)(*local_8 + 0x50);
      (*(code *)PTR_guard_check_icall_004c641c)(local_8);
      iVar4 = (*pcVar1)();
    }
    FUN_0044e60e((int *)&local_8);
  }
  return iVar4;
}



/* Function: FUN_00422c50 */

void FUN_00422c50(int param_1)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -0xc);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x8c);
  if (pcVar1 == FUN_00422c90) {
    FUN_00422c90((int)*(int **)(param_1 + 0x50));
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff0 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00422c90 */

/* WARNING: Removing unreachable block (ram,0x00422cfc) */
/* WARNING: Removing unreachable block (ram,0x00422d0c) */
/* WARNING: Removing unreachable block (ram,0x00422d26) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00422c90(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStackY_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStackY_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStackY_1c + 0x44);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStackY_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 0x14);
        (*(code *)PTR_guard_check_icall_004c641c)();
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStackY_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_00422d40 */

void FUN_00422d40(int param_1)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -0xc);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x98);
  if (pcVar1 == FUN_00422d80) {
    FUN_00422d80((int)*(int **)(param_1 + 0x50));
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00422d80 */

void FUN_00422d80(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStackY_14;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    pcVar4 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\WebRuntimeCoreControl.hpp";
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) != DVar2) goto LAB_0045b8a2;
    piStackY_14 = *(int **)(param_1 + 0x20);
    if (piStackY_14 != (int *)0x0) {
      pcVar1 = *(code **)(*piStackY_14 + 0x2c);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar1)();
      if ((int **)&stack0xfffffff4 != &piStackY_14) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
      }
      return;
    }
    pcVar4 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\webruntimecorecontrol.cpp";
    iVar3 = 0x30c;
  }
  do {
    piStackY_14 = (int *)0x45b8a2;
    FUN_0045247c(unaff_retaddr,iVar3,(int)pcVar4);
LAB_0045b8a2:
    pcVar4 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\WebRuntimeCoreControl.hpp";
    iVar3 = 0x1d2;
  } while( true );
}



/* Function: FUN_00422dda */

void __fastcall FUN_00422dda(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar2 = 0x30c;
  }
  else {
    if (*(int *)(param_1 + 0x5c) != 0) {
      return;
    }
    iVar2 = 0x30d;
  }
  FUN_0045247c(unaff_retaddr,iVar2,0x40f770);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00422dfb */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * __fastcall FUN_00422dfb(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  piStack_24 = DAT_004c4ca0;
  uStack_4 = 0;
  local_8 = 0;
  param_1[0x11] = &PTR_purecall_004052b4;
  param_1[0x15] = 1;
  *param_1 = &PTR_FUN_004010bc;
  param_1[1] = &PTR_FUN_004010d0;
  param_1[2] = &PTR_FUN_004015f0;
  param_1[3] = &PTR_FUN_00401440;
  param_1[5] = &PTR_FUN_00401338;
  param_1[6] = &PTR_FUN_00401040;
  param_1[8] = &PTR_FUN_00401214;
  param_1[9] = &PTR_FUN_00401050;
  param_1[10] = &PTR_FUN_004010e4;
  param_1[0xb] = &PTR_FUN_00401060;
  param_1[0xc] = &PTR_FUN_00401070;
  param_1[0xd] = &PTR_FUN_0040128c;
  param_1[0xe] = &PTR_FUN_004011b8;
  param_1[0xf] = &PTR_FUN_00401128;
  param_1[0x10] = &PTR_FUN_00401174;
  param_1[0x11] = &PTR_FUN_00401140;
  puVar3 = (undefined4 *)auStack_20;
  if (piStack_24 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_24 + 4);
    if (pcVar1 == FUN_0042efc0) {
      uStack_28 = 0x422eac;
      FUN_0042efc0();
      puVar3 = (undefined4 *)auStack_20;
    }
    else {
      puVar2 = &uStack_28;
      uStack_28 = 0x45b8d8;
      (*(code *)PTR_guard_check_icall_004c641c)();
      puVar3 = puVar2 + -1;
      puVar2[-1] = 0x45b8da;
      (*pcVar1)();
      if ((undefined4 *)auStack_20 != puVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
      }
    }
  }
  *param_1 = &PTR_FUN_00401080;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[1] = &PTR_FUN_00401094;
  param_1[2] = &PTR_FUN_004014e0;
  param_1[3] = &PTR_FUN_004013a0;
  param_1[5] = &PTR_FUN_004012d0;
  param_1[6] = &PTR_FUN_00401000;
  param_1[8] = &PTR_FUN_004011e0;
  param_1[9] = &PTR_FUN_00401010;
  param_1[10] = &PTR_FUN_004010a8;
  param_1[0xb] = &PTR_FUN_00401020;
  param_1[0xc] = &PTR_FUN_00401030;
  param_1[0xd] = &PTR_FUN_00401248;
  param_1[0xe] = &PTR_FUN_00401190;
  param_1[0xf] = &PTR_FUN_004010f8;
  param_1[0x10] = &PTR_FUN_00401158;
  param_1[0x11] = &PTR_FUN_00401110;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)((int)puVar3 + -4) = 0x422fbc;
  return param_1;
}



/* Function: FUN_00422fc3 */

undefined4 FUN_00422fc3(int *param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  bool bVar8;
  ushort **ppuStack_28;
  ushort **ppuStack_24;
  int *piStack_20;
  ushort ***pppuStack_1c;
  ushort *local_c;
  ushort **local_8;
  
  local_8 = (ushort **)0x0;
  uVar7 = 0;
  pcVar2 = *(code **)(*param_1 + 0xd0);
  pppuStack_1c = &local_8;
  piStack_20 = param_1;
  ppuStack_24 = (ushort **)0x422fed;
  (*(code *)PTR_guard_check_icall_004c641c)();
  ppuStack_24 = (ushort **)0x422fef;
  iVar3 = (*pcVar2)();
  if ((int **)&stack0xffffffe8 != &piStack_20) {
    pcVar2 = (code *)swi(0x29);
    iVar3 = (*pcVar2)();
  }
  if (-1 < iVar3) {
    local_c = (ushort *)0x0;
    pcVar2 = *(code **)(*local_8 + 0x60);
    ppuStack_24 = &local_c;
    ppuStack_28 = local_8;
    (*(code *)PTR_guard_check_icall_004c641c)();
    iVar3 = (*pcVar2)();
    if ((ushort ***)&piStack_20 != &ppuStack_28) {
      pcVar2 = (code *)swi(0x29);
      iVar3 = (*pcVar2)();
    }
    if (-1 < iVar3) {
      puVar6 = &DAT_00408a14;
      puVar4 = local_c;
      do {
        uVar1 = *puVar4;
        bVar8 = uVar1 < *puVar6;
        if (uVar1 != *puVar6) {
LAB_0042309a:
          uVar5 = -(uint)bVar8 | 1;
          goto LAB_0042305b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar4[1];
        bVar8 = uVar1 < puVar6[1];
        if (uVar1 != puVar6[1]) goto LAB_0042309a;
        puVar4 = puVar4 + 2;
        puVar6 = puVar6 + 2;
      } while (uVar1 != 0);
      uVar5 = 0;
LAB_0042305b:
      if (uVar5 == 0) {
        uVar7 = 1;
      }
    }
    Ordinal_6(local_c);
  }
  ppuStack_24 = local_8;
  if (local_8 != (ushort **)0x0) {
    local_8 = (ushort **)0x0;
    pcVar2 = *(code **)(*ppuStack_24 + 4);
    ppuStack_28 = (ushort **)0x423084;
    (*(code *)PTR_guard_check_icall_004c641c)();
    ppuStack_28 = (ushort **)0x423086;
    (*pcVar2)();
    if ((ushort ***)&piStack_20 != &ppuStack_24) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
    }
  }
  return uVar7;
}



/* Function: FUN_004230b0 */

int FUN_004230b0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x24);
    if (pcVar2 == FUN_00423100) {
      iVar3 = FUN_00423100((int)piVar1,param_2,param_3);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar2)();
      if (&stack0xfffffff4 != &stack0xffffffe4) {
        pcVar2 = (code *)swi(0x29);
        iVar3 = (*pcVar2)();
      }
    }
  }
  return iVar3;
}



/* Function: FUN_00423100 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0045b978) */
/* WARNING: Removing unreachable block (ram,0x00423142) */
/* WARNING: Removing unreachable block (ram,0x0045b9e1) */

int FUN_00423100(int param_1,undefined4 *param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 uStackY_38;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x42310c;
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_0045247c(unaff_retaddr,0x312,0x40f770);
LAB_0045b926:
    if ((((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) ||
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0)) ||
       ((byte)PTR_LOOP_004c4000[0x69] < 2)) goto LAB_0042319d;
    pcVar7 = "pUri->GetAbsoluteUri(&bstrUri)";
    uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar5 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uStackY_38 = 0x2d;
  }
  else {
    local_14[0] = 0;
    local_8 = 0;
    pcVar1 = *(code **)(*param_3 + 0x1c);
    (*(code *)PTR_guard_check_icall_004c641c)(param_3,local_14);
    unaff_ESI = (*pcVar1)();
    if (unaff_ESI < 0) goto LAB_0045b926;
    cVar3 = FUN_0042d460((void *)(param_1 + -0x34),param_2);
    piVar2 = *(int **)(param_1 + 0x48);
    iVar4 = param_1 + -0x2c;
    if (cVar3 == '\0') {
      pcVar1 = *(code **)(*piVar2 + 0x20);
      if (param_1 == 0x34) {
        iVar4 = 0;
      }
      (*(code *)PTR_guard_check_icall_004c641c)(piVar2,iVar4,local_14[0],param_2);
      unaff_ESI = (*pcVar1)();
      if (((-1 < unaff_ESI) || ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000)) ||
         (((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0 ||
          ((byte)PTR_LOOP_004c4000[0x69] < 2)))) goto LAB_0042319d;
      pcVar7 = 
      "m_webInstanceCoreWebViewEventSink->OnCoreWebViewFrameContentLoading( this, bstrUri, reinterpret_cast<DWORD_PTR>(pHTMLWindow2))"
      ;
      uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar5 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uStackY_38 = 0x2f;
    }
    else {
      pcVar1 = *(code **)(*piVar2 + 0x1c);
      if ((void *)(param_1 + -0x34) == (void *)0x0) {
        iVar4 = 0;
      }
      if (pcVar1 == FUN_004257d0) {
        unaff_ESI = FUN_004257d0((int)piVar2,iVar4,local_14[0],param_2);
      }
      else {
        (*(code *)PTR_guard_check_icall_004c641c)(piVar2,iVar4,local_14[0],param_2);
        unaff_ESI = (*pcVar1)();
      }
      if (((-1 < unaff_ESI) || ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000)) ||
         (((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0 ||
          ((byte)PTR_LOOP_004c4000[0x69] < 2)))) goto LAB_0042319d;
      pcVar7 = 
      "m_webInstanceCoreWebViewEventSink->OnCoreWebViewContentLoading( this, bstrUri, reinterpret_cast<DWORD_PTR>(pHTMLWindow2))"
      ;
      uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar5 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uStackY_38 = 0x2e;
    }
  }
  FUN_00474b30(uStackY_38,&DAT_0041fa6c,uVar5,uVar6,pcVar7);
LAB_0042319d:
  local_8 = 0xffffffff;
  Ordinal_6(local_14[0]);
  return unaff_ESI;
}



/* Function: FUN_004231c0 */

undefined4 FUN_004231c0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    pcVar2 = *(code **)(*piVar1 + 0x34);
    if (pcVar2 == FUN_00423210) {
      uVar3 = FUN_00423210((int)piVar1,param_2,param_3);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)();
      uVar3 = (*pcVar2)();
      if (&stack0xfffffff4 != &stack0xffffffe4) {
        pcVar2 = (code *)swi(0x29);
        uVar3 = (*pcVar2)();
      }
    }
  }
  return uVar3;
}



/* Function: FUN_00423210 */

void FUN_00423210(int param_1,int *param_2,int param_3)

{
  FUN_0042372f((void *)(param_1 + -0x34),param_2,param_3,1,0,(short *)0x0);
  return;
}



/* Function: FUN_00423240 */

/* WARNING: Removing unreachable block (ram,0x004232b2) */
/* WARNING: Removing unreachable block (ram,0x004232c2) */
/* WARNING: Removing unreachable block (ram,0x004232dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00423240(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStack_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStack_1c + 0x3c);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 0x40);
        (*(code *)PTR_guard_check_icall_004c641c)(0,param_2);
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStack_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_00423300 */

/* WARNING: Removing unreachable block (ram,0x0042336f) */
/* WARNING: Removing unreachable block (ram,0x0042337f) */
/* WARNING: Removing unreachable block (ram,0x00423399) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00423300(int param_1,int *param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStack_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStack_1c + 0x44);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 0x3c);
        (*(code *)PTR_guard_check_icall_004c641c)(0);
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStack_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_004233b0 */

/* WARNING: Removing unreachable block (ram,0x0042341c) */
/* WARNING: Removing unreachable block (ram,0x0042342c) */
/* WARNING: Removing unreachable block (ram,0x00423446) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004233b0(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStackY_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStackY_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStackY_1c + 0x3c);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStackY_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 0x34);
        (*(code *)PTR_guard_check_icall_004c641c)();
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStackY_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_00423460 */

/* WARNING: Removing unreachable block (ram,0x004234cf) */
/* WARNING: Removing unreachable block (ram,0x004234df) */
/* WARNING: Removing unreachable block (ram,0x004234f9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00423460(int param_1,int *param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStack_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStack_1c + 0x40);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 0x14);
        (*(code *)PTR_guard_check_icall_004c641c)(0);
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStack_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_00423510 */

/* WARNING: Removing unreachable block (ram,0x0042357f) */
/* WARNING: Removing unreachable block (ram,0x0042358f) */
/* WARNING: Removing unreachable block (ram,0x004235a9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00423510(int param_1,int *param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStack_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStack_1c + 0x40);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 0x18);
        (*(code *)PTR_guard_check_icall_004c641c)(0);
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStack_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_004235c0 */

/* WARNING: Removing unreachable block (ram,0x00423635) */
/* WARNING: Removing unreachable block (ram,0x00423645) */
/* WARNING: Removing unreachable block (ram,0x0042365f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004235c0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStack_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStack_1c + 0x44);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 0x5c);
        (*(code *)PTR_guard_check_icall_004c641c)(0,param_2,param_3);
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStack_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_00423680 */

/* WARNING: Removing unreachable block (ram,0x004236ef) */
/* WARNING: Removing unreachable block (ram,0x004236ff) */
/* WARNING: Removing unreachable block (ram,0x00423719) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00423680(int param_1,int *param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStack_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStack_1c + 0x44);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 0x60);
        (*(code *)PTR_guard_check_icall_004c641c)(0);
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStack_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_0042372f */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0045bb1f) */
/* WARNING: Removing unreachable block (ram,0x0045babc) */
/* WARNING: Removing unreachable block (ram,0x0045bae7) */
/* WARNING: Removing unreachable block (ram,0x0045bb86) */

int __thiscall
FUN_0042372f(void *this,int *param_1,int param_2,int param_3,int param_4,short *param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  undefined4 uStackY_58;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  code *local_20;
  void *local_1c;
  undefined4 local_18;
  int *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x42373b;
  local_1c = this;
  if (*(int *)((int)this + 0x7c) == 0) {
    FUN_0045247c(unaff_retaddr,0x312,0x40f770);
LAB_0045ba6c:
    FUN_00439470(&local_18,param_5);
  }
  else {
    local_18 = 0;
    local_8 = 0;
    if (param_5 != (short *)0x0) goto LAB_0045ba6c;
  }
  uVar3 = local_18;
  local_34 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  local_2c = (uint)(param_4 == -0x7ff3ff00);
  local_24 = local_18;
  if ((param_3 == 0) && (param_1 == (int *)0x0)) {
    local_14[0] = (int *)0x0;
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar1 = *(int **)((int)this + 0x5c);
    local_20 = *(code **)(*piVar1 + 0x1c);
    FUN_0044e60e((int *)local_14);
    pcVar2 = local_20;
    (*(code *)PTR_guard_check_icall_004c641c)(piVar1,local_14);
    iVar5 = (*pcVar2)();
    if (-1 < iVar5) {
      pcVar2 = *(code **)(*local_14[0] + 0x1b0);
      (*(code *)PTR_guard_check_icall_004c641c)(local_14[0],&param_1);
      (*pcVar2)();
    }
    local_8 = local_8 & 0xffffff00;
    FUN_0044e60e((int *)local_14);
    cVar4 = '\x01';
    this = local_1c;
  }
  else {
    cVar4 = FUN_0042d460(this,param_1);
  }
  piVar1 = *(int **)((int)this + 0x7c);
  iVar5 = (int)this + 8;
  if (cVar4 == '\0') {
    pcVar2 = *(code **)(*piVar1 + 0x28);
    if (local_1c == (void *)0x0) {
      iVar5 = 0;
    }
    (*(code *)PTR_guard_check_icall_004c641c)(piVar1,iVar5,&local_34,param_1);
    iVar5 = (*pcVar2)();
    if ((((-1 < iVar5) || ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000)) ||
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0)) ||
       ((byte)PTR_LOOP_004c4000[0x69] < 2)) goto LAB_004237d4;
    pcVar8 = 
    "m_webInstanceCoreWebViewEventSink->OnCoreWebViewFrameNavigationCompleted( this, &eventDetails, reinterpret_cast<DWORD_PTR>(pHTMLWindow2))"
    ;
    uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uStackY_58 = 0x41;
  }
  else {
    local_20 = *(code **)(*piVar1 + 0x24);
    if (this == (void *)0x0) {
      iVar5 = 0;
    }
    if (local_20 == FUN_004237f0) {
      iVar5 = FUN_004237f0((int)piVar1,iVar5,&local_34,param_1);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(piVar1,iVar5,&local_34,param_1);
      iVar5 = (*local_20)();
    }
    if (((-1 < iVar5) || ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000)) ||
       (((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0 || ((byte)PTR_LOOP_004c4000[0x69] < 2))
       )) goto LAB_004237d4;
    pcVar8 = 
    "m_webInstanceCoreWebViewEventSink->OnCoreWebViewNavigationCompleted( this, &eventDetails, reinterpret_cast<DWORD_PTR>(pHTMLWindow2))"
    ;
    uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uStackY_58 = 0x40;
  }
  FUN_00474b30(uStackY_58,&DAT_0041fa6c,uVar6,uVar7,pcVar8);
LAB_004237d4:
  local_8 = 0xffffffff;
  Ordinal_6(uVar3);
  return iVar5;
}



/* Function: FUN_004237f0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0045bc09) */

int FUN_004237f0(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  void *pvVar2;
  int *extraout_EDX;
  int *piVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 auStack_24 [16];
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4237fc;
  iVar4 = 0;
  if (*param_3 == 0) {
    FUN_0045247c(unaff_retaddr,0x940,0x40f3bc);
    piVar3 = extraout_EDX;
LAB_0045bbed:
    pcVar1 = *(code **)(*piVar3 + 0x24);
    (*(code *)PTR_guard_check_icall_004c641c)();
    iVar4 = (*pcVar1)();
    if (iVar4 < 0) {
      if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
        return iVar4;
      }
      if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
        return iVar4;
      }
      if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
        return iVar4;
      }
      pcVar8 = 
      "this->coreWebViewComponentCallback->OnCoreWebViewNavigationCompleted(sender, details, NULL )"
      ;
      uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uVar5 = 0x50;
      goto LAB_0045bd6f;
    }
  }
  else {
    piVar3 = *(int **)(param_1 + 0x1c4);
    if (piVar3 != (int *)0x0) goto LAB_0045bbed;
  }
  if (param_3[1] == 0) {
    iVar4 = FUN_004a96df((void *)(param_1 + -0x34),(int *)*param_3,1,param_3[4],param_3[3],
                         (int)param_4);
    if (-1 < iVar4) {
      return iVar4;
    }
    if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
      return iVar4;
    }
    if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
      return iVar4;
    }
    if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
      return iVar4;
    }
    pcVar8 = 
    "this->OnNavigationErrorHelper( details->pUri, TRUE, details->bstrTargetFrame, details->dwReason, reserved)"
    ;
    uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uVar5 = 0x52;
  }
  else {
    if (param_3[2] != 0) {
      local_14[0] = (int *)0x0;
      local_8 = 0;
      pcVar1 = *(code **)(*(int *)(param_1 + -0x34) + 0xc);
      FUN_0044c1f2((int *)local_14);
      (*(code *)PTR_guard_check_icall_004c641c)();
      pvVar2 = (void *)(*pcVar1)();
      if (auStack_24 != &stack0xffffffcc) {
        pcVar1 = (code *)swi(0x29);
        pvVar2 = (void *)(*pcVar1)();
      }
      if ((int)pvVar2 < 0) {
        FUN_00452460(unaff_retaddr,0x957,0x40f3bc,pvVar2);
      }
      pcVar1 = *(code **)(*local_14[0] + 0x14);
      (*(code *)PTR_guard_check_icall_004c641c)(local_14[0]);
      (*pcVar1)();
      if (&stack0xffffffcc != auStack_24) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
      }
      FUN_0044c1f2((int *)local_14);
      return iVar4;
    }
    iVar4 = FUN_0042385c((void *)(param_1 + -0x34),(int *)*param_3,1,param_4);
    if (-1 < iVar4) {
      return iVar4;
    }
    if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
      return iVar4;
    }
    if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
      return iVar4;
    }
    if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
      return iVar4;
    }
    pcVar8 = "this->OnNavigationCompletedHelper( details->pUri, TRUE, reserved)";
    uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uVar5 = 0x51;
  }
LAB_0045bd6f:
  FUN_00474b30(uVar5,&DAT_0040f344,uVar6,uVar7,pcVar8);
  return iVar4;
}



/* Function: FUN_0042385c */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0045be7e) */
/* WARNING: Removing unreachable block (ram,0x0045bf4c) */

undefined4 __thiscall FUN_0042385c(void *this,int *param_1,uint param_2,int *param_3)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar6;
  int *piVar7;
  undefined4 unaff_retaddr;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined1 auStack_3c [16];
  code *local_2c;
  void *local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  int *local_18;
  ushort *local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x423868;
  local_28 = this;
  if (*(int *)((int)this + 0x60) < 2) {
    pcVar10 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar3 = 0x307;
  }
  else {
    if (9 < *(int *)((int)this + 0x60)) goto LAB_0045bd9a;
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)((int)this + 0xec) == DVar2) {
      if (param_3 == (int *)0x0) {
        if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
          return 0x80070057;
        }
        if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
          return 0x80070057;
        }
        if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
          return 0x80070057;
        }
        pcVar10 = "htmlWindow";
        uVar5 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
        uVar9 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
        uVar8 = 0x56;
      }
      else {
        if (param_1 != (int *)0x0) {
          local_20 = 0;
          local_14 = (ushort *)0x0;
          local_8 = 0;
          pcVar1 = *(code **)(*param_1 + 0x1c);
          (*(code *)PTR_guard_check_icall_004c641c)();
          iVar3 = (*pcVar1)();
          if (auStack_3c != &stack0xffffffbc) {
            pcVar1 = (code *)swi(0x29);
            iVar3 = (*pcVar1)();
          }
          if ((iVar3 != 0) && (local_14 != (ushort *)0x0)) {
            Ordinal_6(local_14);
            local_14 = (ushort *)0x0;
          }
          piVar7 = (int *)((int)this + 0x1d0);
          piVar6 = (int *)*piVar7;
          local_24 = piVar7;
          local_1c = piVar6;
          if (piVar6 != piVar7) {
            do {
              local_1c = piVar6;
              iVar3 = memcmp(piVar6 + 3,&LAB_0040b6f8,0x10);
              if (iVar3 == 0) {
                local_18 = (int *)0x0;
                local_8 = CONCAT31(local_8._1_3_,1);
                iVar3 = FUN_004a36f3(piVar6 + 7,(int *)&local_18);
                if ((-1 < iVar3) && (local_14 != (ushort *)0x0)) {
                  pcVar1 = *(code **)(*local_18 + 0x18);
                  (*(code *)PTR_guard_check_icall_004c641c)(local_18,param_3,local_14);
                  (*pcVar1)();
                  piVar6 = local_1c;
                  piVar7 = local_24;
                }
                local_8 = local_8 & 0xffffff00;
                FUN_0044c1f2((int *)&local_18);
              }
              piVar6 = (int *)*piVar6;
              this = local_28;
              local_1c = piVar6;
            } while (piVar6 != piVar7);
          }
          if ((DAT_004c5240 & 0x10) != 0) {
            local_28 = (void *)FUN_004a9bd4(param_2,param_1);
            local_24 = (int *)((int)param_3 >> 0x1f);
            local_1c = param_3;
            iVar3 = FUN_004a659e((void *)((int)this + 0x1e4),(int)param_3,(int)local_24,&local_2c);
            if ((-1 < iVar3) && ((DAT_004c5240 & 0x10) != 0)) {
              FUN_004ab478(extraout_ECX_00,(PCEVENT_DESCRIPTOR)&DAT_00412288);
            }
          }
          if (param_2 != 0) {
            if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
                ((PTR_LOOP_004c4000[0x6c] & 2) != 0)) && (3 < (byte)PTR_LOOP_004c4000[0x69])) {
              FUN_0047ce9e(0x58,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                           *(undefined4 *)(PTR_LOOP_004c4000 + 100));
            }
            local_1c = (int *)((int)this + 0x160);
            do {
              local_2c = (code *)local_1c[-0x13];
              if (local_2c == (code *)0x0) break;
              pvVar4 = (void *)*local_1c;
              if (local_2c == FUN_00423b10) {
                FUN_00423b10(pvVar4,param_3,param_1,param_2);
              }
              else if (local_2c == FUN_00423b30) {
                FUN_00423b30(pvVar4);
              }
              else {
                (*(code *)PTR_guard_check_icall_004c641c)(pvVar4,param_3,param_1,param_2);
                (*local_2c)();
              }
              local_20 = local_20 + 1;
              local_1c = local_1c + 1;
            } while (local_20 < 3);
          }
          if ((local_14 != (ushort *)0x0) &&
             (pvVar4 = (void *)FUN_004239b9((uint)this,local_14,param_2), (int)pvVar4 < 0)) {
            FUN_00452460(unaff_retaddr,0x9d7,0x40f3bc,pvVar4);
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return uVar5;
          }
          local_8 = 0xffffffff;
          Ordinal_6(local_14);
          return 0;
        }
        if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
          return 0x80070057;
        }
        if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
          return 0x80070057;
        }
        if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
          return 0x80070057;
        }
        pcVar10 = "uri";
        uVar5 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
        uVar9 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
        uVar8 = 0x57;
      }
      FUN_00474b30(uVar8,&DAT_0040f344,uVar9,uVar5,pcVar10);
      return 0x80070057;
    }
    pcVar10 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar3 = 0x21d;
  }
  do {
    FUN_0045247c(unaff_retaddr,iVar3,(int)pcVar10);
    unaff_retaddr = extraout_ECX;
LAB_0045bd9a:
    pcVar10 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar3 = 0x308;
  } while( true );
}



/* Function: FUN_004239b9 */

/* WARNING: Removing unreachable block (ram,0x00423abd) */
/* WARNING: Removing unreachable block (ram,0x00423a9d) */
/* WARNING: Removing unreachable block (ram,0x00423af2) */

undefined4 __fastcall FUN_004239b9(uint param_1,ushort *param_2,int param_3)

{
  wchar_t wVar1;
  int *piVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined4 unaff_retaddr;
  undefined *puVar11;
  uint local_c;
  code *local_8;
  
  pwVar9 = L"about:blank";
  pwVar4 = (wchar_t *)param_2;
  do {
    wVar1 = *pwVar4;
    bVar10 = (ushort)wVar1 < (ushort)*pwVar9;
    if (wVar1 != *pwVar9) {
LAB_00423a81:
      uVar5 = -(uint)bVar10 | 1;
      goto LAB_004239fd;
    }
    if (wVar1 == L'\0') break;
    wVar1 = pwVar4[1];
    bVar10 = (ushort)wVar1 < (ushort)pwVar9[1];
    if (wVar1 != pwVar9[1]) goto LAB_00423a81;
    pwVar4 = pwVar4 + 2;
    pwVar9 = pwVar9 + 2;
  } while (wVar1 != L'\0');
  uVar5 = 0;
LAB_004239fd:
  if (uVar5 != 0) {
    piVar2 = *(int **)(param_1 + 0xa0);
    pcVar3 = *(code **)(*piVar2 + 0x74);
    local_c = param_1;
    if (pcVar3 == FUN_00423d50) {
      pvVar6 = (void *)FUN_00423d50((int)piVar2,(int *)&local_8);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(piVar2,&local_8);
      pvVar6 = (void *)(*pcVar3)();
    }
    uVar5 = local_c;
    if ((int)pvVar6 < 0) {
      if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) &&
         (1 < (byte)PTR_LOOP_004c4000[0x69])) {
        FUN_00474b30(0x78,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                     *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                     "this->coreWebViewAppHost->GetDefaultDocumentMode(&documentModeReply)");
      }
      iVar8 = 0x1005;
      goto LAB_0045bfd1;
    }
    uVar7 = (uint)local_8 / 10000;
    piVar2 = *(int **)(local_c + 0xa0);
    local_8 = *(code **)(*piVar2 + 0x78);
    if (local_8 == FUN_00423d00) {
      pvVar6 = (void *)FUN_00423d00((int)piVar2,(int *)&local_c);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(piVar2,&local_c);
      pvVar6 = (void *)(*local_8)();
    }
    if ((int)pvVar6 < 0) {
      do {
        if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
            ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) &&
           (1 < (byte)PTR_LOOP_004c4000[0x69])) {
          FUN_00474b30(0x79,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                       *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                       "this->coreWebViewAppHost->GetCurrentDocumentMode(&documentModeReply)");
        }
        iVar8 = 0x1006;
LAB_0045bfd1:
        FUN_00452460(unaff_retaddr,iVar8,0x40f3bc,pvVar6);
      } while( true );
    }
    if (uVar7 < local_c / 10000) {
      pcVar3 = *(code **)(*(int *)(uVar5 + 8) + 0xc);
      if (param_3 == 0) {
        puVar11 = &LAB_0041c8d0;
      }
      else {
        puVar11 = &DAT_004089d8;
      }
      (*(code *)PTR_guard_check_icall_004c641c)
                ((int *)(uVar5 + 8),puVar11,param_2,uVar7,local_c / 10000);
      (*pcVar3)();
    }
  }
  return 0;
}



/* Function: FUN_00423b10 */

void FUN_00423b10(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  FUN_00423bba(param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00423b30 */

void FUN_00423b30(void *param_1)

{
  if (*(int *)((int)param_1 + 0x80) == 0) {
    FUN_0043eb60(param_1,1);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x80) = 0;
    if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) && (3 < (byte)PTR_LOOP_004c4000[0x69])
       ) {
      FUN_0047460c(0x2a,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                   *(undefined4 *)(PTR_LOOP_004c4000 + 100));
    }
  }
  return;
}



/* Function: FUN_00423b58 */

int __fastcall FUN_00423b58(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uStackY_2c;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint local_c [2];
  
  local_c[0] = 0;
  iVar1 = FUN_00423c67(param_1,local_c);
  if (iVar1 < 0) {
    if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
      return iVar1;
    }
    if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
      return iVar1;
    }
    if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
      return iVar1;
    }
    pcVar4 = "IsLocalCompartmentUri(uri, &isPackage)";
    uVar3 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar2 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uStackY_2c = 10;
  }
  else {
    *param_3 = local_c[0];
    if ((local_c[0] != 0) || (iVar1 = FUN_004213a2(param_1,local_c), -1 < iVar1)) {
      *param_2 = local_c[0];
      return iVar1;
    }
    if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
      return iVar1;
    }
    if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
      return iVar1;
    }
    if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
      return iVar1;
    }
    pcVar4 = "IsWebCompartmentUri(uri, &isPackage)";
    uVar3 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar2 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uStackY_2c = 0xb;
  }
  FUN_00474b30(uStackY_2c,&DAT_00412eac,uVar2,uVar3,pcVar4);
  return iVar1;
}



/* Function: FUN_00423bba */

void __fastcall FUN_00423bba(int param_1,int *param_2,int *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  void *pvVar4;
  undefined4 unaff_retaddr;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  int **ppiStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_40;
  ushort **ppuStack_3c;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  int *local_c;
  wchar_t *local_8;
  
  local_10 = (ushort *)0x0;
  pcVar1 = *(code **)(*param_3 + 0x4c);
  ppuStack_3c = &local_10;
  piStack_40 = param_3;
  local_14 = param_1;
  local_c = param_2;
  (*(code *)PTR_guard_check_icall_004c641c)();
  iVar3 = (*pcVar1)();
  if ((int **)&stack0xffffffc8 != &piStack_40) {
    pcVar1 = (code *)swi(0x29);
    iVar3 = (*pcVar1)();
  }
  if (-1 < iVar3) {
    bVar2 = FUN_00423c29(local_10);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      piStack_48 = (int *)0x423c0b;
      iVar3 = FUN_00422fc3(local_c);
      if (iVar3 == 0) {
        local_18 = 0;
        pcVar1 = *(code **)(*param_3 + 0x3c);
        FUN_00474bbf(&local_18);
        piStack_48 = param_3;
        piStack_4c = (int *)0x45c0d9;
        (*(code *)PTR_guard_check_icall_004c641c)();
        piStack_4c = (int *)0x45c0db;
        iVar3 = (*pcVar1)();
        if (&piStack_40 != &piStack_48) {
          pcVar1 = (code *)swi(0x29);
          iVar3 = (*pcVar1)();
        }
        if (-1 < iVar3) {
          ppiStack_50 = &local_2c;
          local_2c = param_3;
          piStack_4c = local_c;
          local_20 = 0x800c000e;
          piStack_58 = *(int **)(local_14 + 0x18);
          uStack_54 = 0;
          local_8 = (wchar_t *)0x0;
          local_24 = 0;
          local_28 = 0;
          local_1c = 0;
          iVar3 = *piStack_58;
          if (param_4 == 0) {
            piStack_5c = (int *)0x45c135;
            (*(code *)PTR_guard_check_icall_004c641c)();
            piStack_5c = (int *)0x45c138;
            (**(code **)(iVar3 + 0x28))();
          }
          else {
            piStack_5c = (int *)0x45c127;
            (*(code *)PTR_guard_check_icall_004c641c)();
            piStack_5c = (int *)0x45c12a;
            (**(code **)(iVar3 + 0x24))();
          }
          if (&piStack_48 != &piStack_58) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
          }
          pcVar1 = *(code **)(*param_3 + 0x1c);
          piStack_5c = (int *)0x45c150;
          piStack_5c = FUN_00474bbf((int *)&local_8);
          piStack_60 = param_3;
          (*(code *)PTR_guard_check_icall_004c641c)();
          iVar3 = (*pcVar1)();
          if (&piStack_58 != &piStack_60) {
            pcVar1 = (code *)swi(0x29);
            iVar3 = (*pcVar1)();
          }
          if (-1 < iVar3) {
            if (iVar3 != 0) {
              FUN_0045247c(unaff_retaddr,0xa5,0x40bee0);
            }
            if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
                ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x100) != 0)) &&
               (3 < (byte)PTR_LOOP_004c4000[0x69])) {
              FUN_00474630(10,&DAT_004134e0,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                           *(undefined4 *)(PTR_LOOP_004c4000 + 100),local_8);
            }
            local_c = (int *)0x0;
            pcVar1 = *(code **)**(undefined4 **)(local_14 + 0x14);
            FUN_0044e60e((int *)&local_c);
            (*(code *)PTR_guard_check_icall_004c641c)();
            pvVar4 = (void *)(*pcVar1)();
            if (&piStack_60 != (int **)&stack0xffffff94) {
              pcVar1 = (code *)swi(0x29);
              pvVar4 = (void *)(*pcVar1)();
            }
            if ((int)pvVar4 < 0) {
              FUN_00452460(unaff_retaddr,0xae,0x40bee0,pvVar4);
            }
            iVar3 = *local_c;
            (*(code *)PTR_guard_check_icall_004c641c)(local_c,&DAT_00413538,local_8,local_8);
            (**(code **)(iVar3 + 0xc))();
            if ((int **)&stack0xffffff94 != &piStack_60) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)();
            }
            FUN_0044e60e((int *)&local_c);
          }
          Ordinal_6();
        }
        piStack_4c = (int *)local_18;
        ppiStack_50 = (int **)0x45c24b;
        Ordinal_6();
      }
    }
  }
  piStack_48 = (int *)0x423c1c;
  Ordinal_6();
  return;
}



/* Function: FUN_00423c29 */

bool __fastcall FUN_00423c29(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = &DAT_00408a38;
  do {
    uVar1 = *puVar2;
    bVar4 = uVar1 < *param_1;
    if (uVar1 != *param_1) {
LAB_00423c5a:
      uVar3 = -(uint)bVar4 | 1;
      goto LAB_00423c52;
    }
    if (uVar1 == 0) break;
    uVar1 = puVar2[1];
    bVar4 = uVar1 < param_1[1];
    if (uVar1 != param_1[1]) goto LAB_00423c5a;
    puVar2 = puVar2 + 2;
    param_1 = param_1 + 2;
  } while (uVar1 != 0);
  uVar3 = 0;
LAB_00423c52:
  return uVar3 == 0;
}



/* Function: FUN_00423c67 */

int __fastcall FUN_00423c67(int *param_1,uint *param_2)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  bool bVar7;
  int *piStack_24;
  ushort **ppuStack_20;
  ushort *local_8;
  
  pcVar2 = *(code **)(*param_1 + 0x4c);
  ppuStack_20 = &local_8;
  uVar6 = 0;
  local_8 = (ushort *)0x0;
  piStack_24 = param_1;
  (*(code *)PTR_guard_check_icall_004c641c)();
  iVar3 = (*pcVar2)();
  if ((int **)&stack0xffffffe4 != &piStack_24) {
    pcVar2 = (code *)swi(0x29);
    iVar3 = (*pcVar2)();
  }
  if (iVar3 == 1) {
    iVar3 = -0x7ff8ffa9;
  }
  else if (-1 < iVar3) {
    puVar5 = &DAT_00408a38;
    puVar4 = local_8;
    do {
      uVar1 = *puVar4;
      bVar7 = uVar1 < *puVar5;
      if (uVar1 != *puVar5) {
LAB_00423cec:
        uVar6 = -(uint)bVar7 | 1;
        break;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar4[1];
      bVar7 = uVar1 < puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_00423cec;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != 0);
    *param_2 = (uint)(uVar6 == 0);
  }
  Ordinal_6(local_8);
  return iVar3;
}



/* Function: FUN_00423d00 */

void FUN_00423d00(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = 0x30c;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      unaff_EDI = *(code **)(*piVar1 + 0x7c);
      if (unaff_EDI == FUN_00423510) {
        FUN_00423510((int)piVar1,param_2);
        return;
      }
      goto LAB_0045c26e;
    }
    iVar3 = 0x30d;
  }
  FUN_0045247c(unaff_retaddr,iVar3,0x40f770);
LAB_0045c26e:
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EDI)();
  if (&stack0xfffffff4 != &stack0xffffffec) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00423d50 */

void FUN_00423d50(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = 0x30c;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      unaff_EDI = *(code **)(*piVar1 + 0x78);
      if (unaff_EDI == FUN_00423460) {
        FUN_00423460((int)piVar1,param_2);
        return;
      }
      goto LAB_0045c2ac;
    }
    iVar3 = 0x30d;
  }
  FUN_0045247c(unaff_retaddr,iVar3,0x40f770);
LAB_0045c2ac:
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EDI)();
  if (&stack0xfffffff4 != &stack0xffffffec) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00423d95 */

/* WARNING: Removing unreachable block (ram,0x0045c2f1) */
/* WARNING: Removing unreachable block (ram,0x0045c36d) */
/* WARNING: Removing unreachable block (ram,0x0045c3ad) */

void __fastcall FUN_00423d95(undefined4 *param_1)

{
  code *pcVar1;
  char cVar2;
  void *pvVar3;
  undefined *puVar4;
  int *extraout_ECX;
  int *piVar5;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar7;
  int extraout_EDX_01;
  code *unaff_EDI;
  ulonglong uVar8;
  undefined4 unaff_retaddr;
  int local_24;
  int local_20;
  byte local_19;
  _EVENT_DATA_DESCRIPTOR local_18;
  uint local_8;
  
  local_8 = DAT_004c41c0 ^ (uint)&stack0xfffffffc;
  if (param_1[0x4b] == 0) {
    piVar5 = (int *)param_1[0x12];
    local_20 = 0;
    unaff_EDI = *(code **)(*piVar5 + 0xfc);
    uVar8 = ZEXT48(&local_20);
    if (unaff_EDI == FUN_00425310) {
      pvVar3 = (void *)FUN_00425310((int)piVar5,0,&local_20);
      goto LAB_00423ddf;
    }
  }
  else {
    uVar8 = FUN_0045247c(unaff_retaddr,0x3f3,0x40c108);
    piVar5 = extraout_ECX;
  }
  (*(code *)PTR_guard_check_icall_004c641c)(piVar5,(int)(uVar8 >> 0x20),(int)uVar8);
  pvVar3 = (void *)(*unaff_EDI)();
LAB_00423ddf:
  if ((int)pvVar3 < 0) {
    iVar7 = 0x3f8;
    goto LAB_0045c315;
  }
  param_1[0x53] = local_20;
  iVar7 = local_20;
  if (((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
     (puVar4 = PTR_LOOP_004c4000, (*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0))
  goto LAB_0045c31d;
  while( true ) {
    local_19 = iVar7 != 0;
    cVar2 = FUN_00451626((uint3)iVar7);
    iVar7 = extraout_EDX;
    if ((cVar2 == '\0') ||
       (cVar2 = WWABehaviorEnabled(0x20), iVar7 = extraout_EDX_00, cVar2 == '\0'))
    goto LAB_00423e53;
    if (local_19 == 0) break;
    local_24 = 0;
    pcVar1 = *(code **)*param_1;
    FUN_0044e60e(&local_24);
    (*(code *)PTR_guard_check_icall_004c641c)(param_1,&DAT_00408a7c,&local_24);
    pvVar3 = (void *)(*pcVar1)();
    if ((int)pvVar3 < 0) {
      iVar7 = 0x409;
    }
    else {
      pcVar1 = *(code **)(*(int *)param_1[0x12] + 0xf4);
      (*(code *)PTR_guard_check_icall_004c641c)((int *)param_1[0x12],local_24,0,param_1 + 0x4b);
      pvVar3 = (void *)(*pcVar1)();
      if (-1 < (int)pvVar3) {
        uVar6 = extraout_ECX_01;
        if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
            ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) &&
           (4 < (byte)PTR_LOOP_004c4000[0x69])) {
          FUN_0047460c(0x15,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                       *(undefined4 *)(PTR_LOOP_004c4000 + 100));
          uVar6 = extraout_ECX_02;
        }
        if ((DAT_004c5240 & 8) != 0) {
          FUN_004745b6(uVar6,(PCEVENT_DESCRIPTOR)&DAT_00412198,uVar6,1,&local_18);
        }
        FUN_0044e60e(&local_24);
        iVar7 = extraout_EDX_01;
        break;
      }
      iVar7 = 0x40d;
    }
LAB_0045c315:
    puVar4 = (undefined *)FUN_00452460(unaff_retaddr,iVar7,0x40c108,pvVar3);
    iVar7 = extraout_ECX_00;
LAB_0045c31d:
    if (4 < (byte)puVar4[0x69]) {
      FUN_0047ce9e(0x14,&LAB_0041382c,*(undefined4 *)(puVar4 + 0x60),*(undefined4 *)(puVar4 + 100));
      iVar7 = local_20;
    }
  }
  param_1[0x30] = local_20;
  param_1[0x26] = (uint)local_19;
  if ((param_1[0x5d] != 0) && (local_19 != 0)) {
    *(undefined4 *)(param_1[0x5d] + 0x58) = 0;
    *(undefined4 *)(param_1[0x5d] + 0x5c) = 0;
    GetSystemTimeAsFileTime((LPFILETIME)(param_1[0x5d] + 0x50));
    iVar7 = param_1[0x5d];
    *(int *)(iVar7 + 0x4c) = local_20;
    *(undefined4 *)(param_1[0x5d] + 0x48) = 1;
  }
LAB_00423e53:
  FUN_00450870(local_8 ^ (uint)&stack0xfffffffc,iVar7);
  return;
}



/* Function: FUN_00423e70 */

void FUN_00423e70(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStackY_14;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    pcVar4 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\WebRuntimeCoreControl.hpp";
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) != DVar2) goto LAB_0045c46b;
    piStackY_14 = *(int **)(param_1 + 0x20);
    if (piStackY_14 != (int *)0x0) {
      pcVar1 = *(code **)(*piStackY_14 + 0x10);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar1)();
      if ((int **)&stack0xfffffff4 != &piStackY_14) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
      }
      return;
    }
    pcVar4 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\webruntimecorecontrol.cpp";
    iVar3 = 0x2b1;
  }
  do {
    piStackY_14 = (int *)0x45c46b;
    FUN_0045247c(unaff_retaddr,iVar3,(int)pcVar4);
LAB_0045c46b:
    pcVar4 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\WebRuntimeCoreControl.hpp";
    iVar3 = 0x1d2;
  } while( true );
}



/* Function: FUN_00423ed0 */

void FUN_00423ed0(int param_1)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStackY_14;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    pcVar4 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\WebRuntimeCoreControl.hpp";
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) != DVar2) goto LAB_0045c495;
    piStackY_14 = *(int **)(param_1 + 0x20);
    if (piStackY_14 != (int *)0x0) {
      pcVar1 = *(code **)(*piStackY_14 + 0x24);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar1)();
      if ((int **)&stack0xfffffff4 != &piStackY_14) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
      }
      return;
    }
    pcVar4 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\webruntimecorecontrol.cpp";
    iVar3 = 0x2f1;
  }
  do {
    piStackY_14 = (int *)0x45c495;
    FUN_0045247c(unaff_retaddr,iVar3,(int)pcVar4);
LAB_0045c495:
    pcVar4 = "onecoreuap\\inetcore\\wwa\\webruntimecore\\WebRuntimeCoreControl.hpp";
    iVar3 = 0x1d2;
  } while( true );
}



/* Function: FUN_00423f30 */

void FUN_00423f30(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = 0x30c;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      unaff_EDI = *(code **)(*piVar1 + 0xa8);
      if (unaff_EDI == FUN_00423300) {
        FUN_00423300((int)piVar1,param_2);
        return;
      }
      goto LAB_0045c4bf;
    }
    iVar3 = 0x30d;
  }
  FUN_0045247c(unaff_retaddr,iVar3,0x40f770);
LAB_0045c4bf:
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EDI)();
  if (&stack0xfffffff4 != &stack0xffffffec) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00423f80 */

void FUN_00423f80(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = 0x30c;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      unaff_EDI = *(code **)(*piVar1 + 200);
      if (unaff_EDI == FUN_00423240) {
        FUN_00423240((int)piVar1,param_2,param_3);
        return;
      }
      goto LAB_0045c4fd;
    }
    iVar3 = 0x30d;
  }
  FUN_0045247c(unaff_retaddr,iVar3,0x40f770);
LAB_0045c4fd:
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EDI)();
  if (&stack0xfffffff4 != &stack0xffffffe8) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00423fd0 */

void FUN_00423fd0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = 0x30c;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      unaff_EDI = *(code **)(*piVar1 + 0xd0);
      if (unaff_EDI == FUN_004235c0) {
        FUN_004235c0((int)piVar1,param_2,param_3,param_4);
        return;
      }
      goto LAB_0045c53e;
    }
    iVar3 = 0x30d;
  }
  FUN_0045247c(unaff_retaddr,iVar3,0x40f770);
LAB_0045c53e:
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EDI)();
  if (&stack0xfffffff4 != &stack0xffffffe4) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00424020 */

void FUN_00424020(int param_1)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -0xc);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x84);
  if (pcVar1 == FUN_00423e70) {
    FUN_00423e70((int)*(int **)(param_1 + 0x50));
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00424060 */

void FUN_00424060(int param_1)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -0xc);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0xb0);
  if (pcVar1 == FUN_004233b0) {
    FUN_004233b0((int)*(int **)(param_1 + 0x50));
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xfffffff0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_004240a0 */

void FUN_004240a0(int param_1)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -0xc);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x90);
  if (pcVar1 == FUN_00423ed0) {
    FUN_00423ed0((int)*(int **)(param_1 + 0x50));
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_004240e0 */

void FUN_004240e0(int param_1,int *param_2)

{
  code *pcVar1;
  
  FUN_00422dda(param_1 + -0xc);
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0xd4);
  if (pcVar1 == FUN_00423680) {
    FUN_00423680((int)*(int **)(param_1 + 0x50),param_2);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar1)();
    if (&stack0xfffffff4 != &stack0xffffffec) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_00424120 */

/* WARNING: Removing unreachable block (ram,0x00424268) */
/* WARNING: Removing unreachable block (ram,0x0045c6a6) */
/* WARNING: Removing unreachable block (ram,0x004242b9) */

void __fastcall FUN_00424120(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  HANDLE pvVar4;
  void *pvVar5;
  int iVar6;
  BOOL BVar7;
  int **ppiVar8;
  undefined4 extraout_ECX;
  HANDLE extraout_ECX_00;
  int *extraout_ECX_01;
  HANDLE extraout_ECX_02;
  HANDLE pvVar9;
  int *extraout_ECX_03;
  int *piVar10;
  undefined4 extraout_ECX_04;
  undefined4 uVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar12;
  undefined4 extraout_EDX_01;
  code *unaff_EBX;
  HANDLE unaff_retaddr;
  int local_3c;
  int *local_38;
  _EVENT_DATA_DESCRIPTOR local_34;
  _EVENT_DATA_DESCRIPTOR local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_00456bdd;
  local_10 = ExceptionList;
  uVar3 = DAT_004c41c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = 0;
  local_14 = uVar3;
  if ((DAT_004c5240 & 8) != 0) {
    FUN_004745b6(param_1,(PCEVENT_DESCRIPTOR)&DAT_00412480,param_1,1,&local_24);
  }
  DAT_004c4db0 = param_1;
  if (param_1[0xe] == 0) {
    uVar3 = RtlInitializeCriticalSection(param_1 + 8,uVar3);
    pvVar9 = unaff_retaddr;
    if ((int)uVar3 < 0) goto LAB_0045c60d;
    piVar10 = param_1 + 6;
    param_1[0xe] = 1;
    if (*piVar10 != 0) goto LAB_0045c61d;
    bVar2 = true;
  }
  else {
    uVar3 = FUN_0045247c(unaff_retaddr,0x1b,0x40bb9c);
    pvVar9 = extraout_ECX_00;
LAB_0045c60d:
    FUN_0045249b((int)pvVar9,0x21,0x40bb9c,uVar3);
    piVar10 = extraout_ECX_01;
LAB_0045c61d:
    bVar2 = false;
  }
  if (bVar2) {
    FUN_004248d0(piVar10,&local_3c);
    iVar6 = param_1[0x12];
    if (iVar6 != 0) goto LAB_0045c635;
LAB_004241c8:
    bVar2 = true;
  }
  else {
    iVar6 = FUN_0045247c(unaff_retaddr,0x9d,0x40bcb8);
LAB_0045c635:
    if (iVar6 == -1) goto LAB_004241c8;
    bVar2 = false;
  }
  if (bVar2) {
    pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    pvVar9 = (HANDLE)param_1[0x12];
    if (pvVar9 != pvVar4) {
      if (pvVar9 != (HANDLE)0x0) goto LAB_0045c654;
      goto LAB_004241f4;
    }
LAB_004241f9:
    pvVar4 = unaff_retaddr;
    if (pvVar9 == (HANDLE)0x0) goto LAB_0045c67e;
    local_38 = (int *)0x0;
    local_8 = 0;
    unaff_EBX = *(code **)*DAT_004c4db0;
    ppiVar8 = &local_38;
    piVar10 = DAT_004c4db0;
    if (unaff_EBX != FUN_00435fe0) goto LAB_0045c68f;
    pvVar5 = (void *)FUN_00435fe0(DAT_004c4db0,(int *)&DAT_00408a48,(int *)ppiVar8);
  }
  else {
    FUN_0045247c(unaff_retaddr,0x20,0x40fdec);
    pvVar9 = extraout_ECX_02;
    pvVar4 = unaff_retaddr;
LAB_0045c654:
    if ((pvVar9 == (HANDLE)0xffffffff) || (BVar7 = CloseHandle(pvVar9), BVar7 != 0)) {
LAB_004241f4:
      pvVar9 = pvVar4;
      param_1[0x12] = (int)pvVar9;
      goto LAB_004241f9;
    }
    pvVar4 = (HANDLE)FUN_00473c13((int)unaff_retaddr,0xc3,0x40c17c);
LAB_0045c67e:
    ppiVar8 = (int **)FUN_00473c13((int)pvVar4,0x22,0x40fdec);
    piVar10 = extraout_ECX_03;
LAB_0045c68f:
    (*(code *)PTR_guard_check_icall_004c641c)(piVar10,&DAT_00408a48,ppiVar8);
    pvVar5 = (void *)(*unaff_EBX)();
  }
  if ((int)pvVar5 < 0) {
    FUN_00452460(unaff_retaddr,0x14e,0x40f050,pvVar5);
    uVar11 = extraout_ECX_04;
  }
  else {
    local_8._0_1_ = 1;
    piVar10 = local_38;
    if (local_38 != (int *)0x0) {
      pcVar1 = *(code **)(*local_38 + 4);
      (*(code *)PTR_guard_check_icall_004c641c)(local_38);
      (*pcVar1)();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004242e2(param_1,piVar10);
    param_1[5] = 1;
    uVar11 = extraout_ECX;
    uVar12 = extraout_EDX;
    if ((DAT_004c5240 & 8) == 0) goto LAB_0042428e;
  }
  FUN_004745b6(uVar11,(PCEVENT_DESCRIPTOR)&DAT_004120a8,uVar11,1,&local_34);
  uVar12 = extraout_EDX_01;
LAB_0042428e:
  piVar10 = local_38;
  local_8 = 0xffffffff;
  if (local_38 != (int *)0x0) {
    local_38 = (int *)0x0;
    pcVar1 = *(code **)(*piVar10 + 8);
    (*(code *)PTR_guard_check_icall_004c641c)(piVar10);
    (*pcVar1)();
    uVar12 = extraout_EDX_00;
  }
  ExceptionList = local_10;
  FUN_00450870(local_14 ^ (uint)&stack0xfffffffc,uVar12);
  return;
}



/* Function: FUN_004242e2 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_004242e2(void *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  PTP_WORK p_Var4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int unaff_retaddr;
  undefined4 uStackY_30;
  
  puVar5 = &uStackY_30;
  uStackY_30 = 0x424304;
  p_Var4 = CreateThreadpoolWork(FUN_0043a5e0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
  *(PTP_WORK *)((int)this + 0x44) = p_Var4;
  if (p_Var4 != (PTP_WORK)0x0) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this;
    puVar5[-1] = this;
    puVar3 = PTR_guard_check_icall_004c641c;
    pcVar2 = *(code **)(iVar1 + 4);
    puVar6 = puVar5 + -2;
    puVar5[-2] = 0x424322;
    (*(code *)puVar3)();
    puVar7 = (undefined1 *)((int)puVar6 + -4);
    *(undefined4 *)((int)puVar6 + -4) = 0x424324;
    (*pcVar2)();
    if (puVar5 != (undefined4 *)puVar7) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
    }
    *(undefined4 *)(puVar7 + -4) = *(undefined4 *)((int)this + 0x44);
    puVar8 = puVar7 + -8;
    *(undefined4 *)(puVar7 + -8) = 0x424338;
    SubmitThreadpoolWork(*(PTP_WORK *)(puVar7 + -4));
    puVar10 = puVar8;
    if (param_1 != (int *)0x0) {
      iVar1 = *param_1;
      *(int **)(puVar8 + -4) = param_1;
      pcVar2 = *(code **)(iVar1 + 8);
      puVar9 = puVar8 + -8;
      *(undefined4 *)(puVar8 + -8) = 0x424357;
      (*(code *)PTR_guard_check_icall_004c641c)();
      puVar10 = puVar9 + -4;
      *(undefined4 *)(puVar9 + -4) = 0x424359;
      (*pcVar2)();
      if (puVar8 != puVar10) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
      }
    }
    *(undefined4 *)(puVar10 + -4) = 0x424369;
    return;
  }
  puVar5[-1] = "onecoreuap\\inetcore\\wwa\\host\\framework\\host.cpp";
  puVar5[-2] = 0x45c6e7;
  FUN_00473c13(unaff_retaddr,0x127,puVar5[-1]);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* Function: FUN_00424380 */

void FUN_00424380(void *param_1)

{
  int *in_stack_00000014;
  uint *in_stack_0000001c;
  
  FUN_0042713b(param_1,in_stack_00000014,in_stack_0000001c);
  return;
}



/* Function: FUN_004243a0 */

/* WARNING: Removing unreachable block (ram,0x0045c80b) */

void __fastcall FUN_004243a0(int param_1)

{
  wchar_t wVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  wchar_t *pwVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  int extraout_EDX;
  int iVar8;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int iVar9;
  wchar_t *unaff_ESI;
  int iVar10;
  wchar_t *unaff_EDI;
  undefined8 uVar11;
  undefined4 unaff_retaddr;
  uint local_c8;
  int local_c4;
  wchar_t local_c0 [86];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00456c50;
  local_10 = ExceptionList;
  uVar5 = DAT_004c41c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x1000) != 0)) && (3 < (byte)PTR_LOOP_004c4000[0x69]))
  {
    FUN_0047460c(0x2b,&DAT_0040de28,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100));
  }
  local_c4 = 0;
  local_8 = 0;
  local_c8 = 0;
  memset(local_c0,0,0xaa);
  if (*(int *)(param_1 + 0x78) == 0 && *(int *)(param_1 + 0x7c) == 0) {
    FUN_0045247c(unaff_retaddr,0x92c,0x40daa8);
    uVar7 = extraout_ECX;
LAB_0045c722:
    FUN_0045247c(uVar7,0x92d,0x40daa8);
    uVar7 = extraout_ECX_00;
LAB_0045c731:
    FUN_0045247c(uVar7,0x938,0x40daa8);
LAB_0045c740:
    bVar4 = true;
  }
  else {
    uVar7 = unaff_retaddr;
    if (*(int *)(param_1 + 0x50) == 0) goto LAB_0045c722;
    WindowsDeleteString(0,uVar5);
    local_c4 = 0;
    uVar11 = GetApplicationLanguages(u___FailedToRetrieve___004c4428,0x3b,&local_c4);
    iVar8 = (int)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 < 0) {
      if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x1000) != 0)) &&
         (1 < (byte)PTR_LOOP_004c4000[0x69])) {
        FUN_0047ce9e(0x2e,&DAT_0040de28,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                     *(undefined4 *)(PTR_LOOP_004c4000 + 100));
        iVar8 = extraout_EDX_06;
      }
      goto LAB_00424577;
    }
    unaff_ESI = (wchar_t *)WindowsGetStringRawBuffer(local_c4,&local_c8);
    if (unaff_ESI == (wchar_t *)0x0) goto LAB_0045c731;
    if (local_c8 == 0) goto LAB_0045c740;
    bVar4 = false;
  }
  if (bVar4) {
    FUN_0045247c(unaff_retaddr,0x939,0x40daa8);
    iVar8 = extraout_EDX_02;
LAB_0045c756:
    uVar5 = (int)unaff_EDI - (int)unaff_ESI >> 1;
  }
  else {
    unaff_EDI = wcsstr(unaff_ESI,L";");
    iVar8 = extraout_EDX;
    uVar5 = local_c8;
    if (unaff_EDI != (wchar_t *)0x0) goto LAB_0045c756;
  }
  if (uVar5 < 0x55) {
    if (uVar5 < 0x7fffffff) {
      pwVar6 = local_c0;
      iVar9 = 0;
      iVar8 = 0x55;
      iVar10 = (int)unaff_ESI - (int)pwVar6;
      while (iVar8 + -0x55 + uVar5 != 0) {
        wVar1 = *(wchar_t *)(iVar10 + (int)pwVar6);
        if (wVar1 == L'\0') {
          if (iVar8 == 0) {
            pwVar6 = pwVar6 + -1;
            iVar9 = -0x7ff8ff86;
          }
          break;
        }
        *pwVar6 = wVar1;
        pwVar6 = pwVar6 + 1;
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          FUN_0045c7c1();
          return;
        }
      }
      *pwVar6 = L'\0';
      if (-1 < iVar9) {
        if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
            ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x1000) != 0)) &&
           (3 < (byte)PTR_LOOP_004c4000[0x69])) {
          FUN_00474630(0x2d,&DAT_0040de28,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                       *(undefined4 *)(PTR_LOOP_004c4000 + 100),local_c0);
        }
        piVar2 = *(int **)(param_1 + 0x50);
        pcVar3 = *(code **)(*piVar2 + 0x38);
        if (pcVar3 == FUN_00424dd0) {
          FUN_00424dd0((int)piVar2,(int *)local_c0);
          iVar8 = extraout_EDX_00;
        }
        else {
          (*(code *)PTR_guard_check_icall_004c641c)(piVar2,local_c0);
          (*pcVar3)();
          iVar8 = extraout_EDX_05;
        }
        goto LAB_00424577;
      }
    }
  }
  else {
    FUN_0045247c(unaff_retaddr,0x93c,0x40daa8);
    iVar8 = extraout_EDX_03;
  }
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) && (1 < (byte)PTR_LOOP_004c4000[0x69]))
  {
    FUN_00474b30(0x2c,&DAT_0040de28,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                 "StringCchCopyN( languageTagBuffer, ARRAYSIZE(languageTagBuffer), rawLanguageListBuffer, languageTagLength)"
                );
    iVar8 = extraout_EDX_04;
  }
LAB_00424577:
  local_8 = 0xffffffff;
  if (local_c4 != 0) {
    WindowsDeleteString(local_c4);
    iVar8 = extraout_EDX_01;
  }
  ExceptionList = local_10;
  FUN_00450870(local_14 ^ (uint)&stack0xfffffffc,iVar8);
  return;
}



/* Function: FUN_004245b3 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0045c8c4) */

void __thiscall FUN_004245b3(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  char *pcVar5;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4245bf;
  if (*(int *)((int)this + 0x60) < 2) {
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar3 = 0x307;
  }
  else {
    if (9 < *(int *)((int)this + 0x60)) goto LAB_0045c86c;
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)((int)this + 0xec) == DVar2) {
      for (puVar4 = *(undefined4 **)((int)this + 0x1d0); puVar4 != (undefined4 *)((int)this + 0x1d0)
          ; puVar4 = (undefined4 *)*puVar4) {
        iVar3 = memcmp(puVar4 + 3,&LAB_0040b6f8,0x10);
        if (iVar3 == 0) {
          local_14[0] = (int *)0x0;
          local_8 = 0;
          iVar3 = FUN_004a36f3(puVar4 + 7,(int *)local_14);
          if (-1 < iVar3) {
            pcVar1 = *(code **)(*local_14[0] + 0x10);
            (*(code *)PTR_guard_check_icall_004c641c)(local_14[0],param_2,param_1);
            (*pcVar1)();
          }
          local_8 = 0xffffffff;
          FUN_0044c1f2((int *)local_14);
        }
      }
      return;
    }
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar3 = 0x21d;
  }
  do {
    FUN_0045247c(unaff_retaddr,iVar3,(int)pcVar5);
    unaff_retaddr = extraout_ECX;
LAB_0045c86c:
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar3 = 0x308;
  } while( true );
}



/* Function: FUN_00424620 */

void __thiscall FUN_00424620(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int unaff_retaddr;
  char *pcVar5;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) goto LAB_0045c8fd;
    if (*(int *)((int)this + 0x38) != 0) {
      uVar3 = RtlEnterCriticalSection((int)this + 0x20);
      if ((int)uVar3 < 0) {
        FUN_0045249b(unaff_retaddr,0x36,0x40c234,uVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar1 = *(int **)((int)this + 0x40);
      if (*piVar1 == (int)this + 0x3c) {
        param_1[1] = (int)piVar1;
        *param_1 = (int)this + 0x3c;
        *piVar1 = (int)param_1;
        *(int **)((int)this + 0x40) = param_1;
        FUN_00424890((int)this + 0x20);
        return;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar5 = "onecoreuap\\inetcore\\Wwa\\AppModelCommon\\Lock.hpp";
    iVar4 = 0x33;
  }
  else {
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\host.cpp";
    iVar4 = 0x212;
  }
  do {
    FUN_0045247c(unaff_retaddr,iVar4,(int)pcVar5);
LAB_0045c8fd:
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\host.cpp";
    iVar4 = 0x213;
  } while( true );
}



/* Function: FUN_00424688 */

/* WARNING: Removing unreachable block (ram,0x00424703) */

void __fastcall
FUN_00424688(void *param_1,int *param_2,undefined4 param_3,int param_4,int *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined8 uVar4;
  int unaff_retaddr;
  int iVar5;
  char *pcVar6;
  uint local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [80];
  uint local_8;
  
  local_8 = DAT_004c41c0 ^ (uint)&stack0xfffffffc;
  local_60 = param_7;
  local_64 = param_5;
  memset(local_58,0,0x50);
  if (*(int *)((int)param_1 + 0x14) == 0) {
    FUN_0044e8c7((int)param_1 + 0x18);
    local_5c = 0x54;
    pcVar1 = *(code **)(*param_5 + 0xc);
    (*(code *)PTR_guard_check_icall_004c641c)(local_64,&local_68,&local_5c);
    uVar4 = (*pcVar1)();
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (-1 < (int)uVar4) {
      if (*(int *)((int)param_1 + 0x30) != 0) {
        uVar2 = RtlEnterCriticalSection((int)param_1 + 0x18);
        if ((int)uVar2 < 0) {
          FUN_0045249b(unaff_retaddr,0x36,0x40c234,uVar2);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_0042163b((void *)((int)param_1 + 0x3c),param_4);
        FUN_00424890((int)param_1 + 0x18);
        FUN_004247db(param_1,0xb);
        FUN_004247db(param_1,0xe);
        uVar3 = 0x16;
        if ((local_68 & 0x100000) == 0) {
          uVar3 = 0xd;
        }
        FUN_004247db(param_1,uVar3);
        local_60 = 0x2d;
        if ((local_68 & 0x100000) == 0) {
          local_60 = 0xd;
        }
        FUN_00421540((void *)((int)param_1 + 0x40),param_2);
        *(undefined4 *)((int)param_1 + 0xc) = param_3;
        if (param_9 != 0) {
          FUN_004247db(param_1,0x42);
        }
        *(undefined4 *)((int)param_1 + 0x14) = 1;
        FUN_00446273(param_1,local_60,*(undefined4 *)((int)param_1 + 0xc),
                     *(undefined4 *)((int)param_1 + 0xc));
        uVar3 = extraout_EDX;
        goto LAB_004247c2;
      }
      pcVar6 = "onecoreuap\\inetcore\\Wwa\\AppModelCommon\\Lock.hpp";
      iVar5 = 0x33;
      goto LAB_0045c92b;
    }
  }
  else {
    pcVar6 = 
    "onecoreuap\\inetcore\\wwa\\host\\modules\\navigation\\packageprotocol\\memorystreamprotocol.cpp"
    ;
    iVar5 = 0x38;
LAB_0045c92b:
    FUN_0045247c(unaff_retaddr,iVar5,(int)pcVar6);
    uVar3 = extraout_EDX_00;
  }
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) && (1 < (byte)PTR_LOOP_004c4000[0x69]))
  {
    FUN_00474b30(10,&DAT_00414cc8,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                 "bindInfo->GetBindInfo(&bindFlags, &bindData)");
    uVar3 = extraout_EDX_01;
  }
LAB_004247c2:
  FUN_00450870(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004247db */

/* WARNING: Removing unreachable block (ram,0x00424823) */
/* WARNING: Removing unreachable block (ram,0x00424853) */

void __thiscall FUN_004247db(void *this,undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_retaddr;
  
  piVar5 = (int *)0x0;
  if (*(int *)((int)this + 0x30) == 0) {
    uVar3 = FUN_0045247c(unaff_retaddr,0x33,0x40c234);
LAB_0045c99d:
    FUN_0045249b(unaff_retaddr,0x36,0x40c234,uVar3);
  }
  else {
    uVar3 = RtlEnterCriticalSection();
    if ((int)uVar3 < 0) goto LAB_0045c99d;
    piVar1 = *(int **)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar2)();
      piVar5 = piVar1;
    }
    FUN_00424890((int)this + 0x18);
    pcVar2 = *(code **)(*piVar5 + 0x10);
    (*(code *)PTR_guard_check_icall_004c641c)(piVar5,param_1);
    iVar4 = (*pcVar2)();
    if (-1 < iVar4) goto LAB_00424862;
  }
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((PTR_LOOP_004c4000[0x6c] & 0x40) != 0)) && (1 < (byte)PTR_LOOP_004c4000[0x69])) {
    FUN_0047ce9e(0xd,&DAT_00414cc8,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100));
  }
LAB_00424862:
  if (piVar5 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar5 + 8);
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar2)();
    if (&stack0xffffffec != &stack0xffffffe8) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
    }
  }
  return;
}



/* Function: FUN_00424890 */

void __fastcall FUN_00424890(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_retaddr;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_0045247c(unaff_retaddr,0x57,0x40c234);
  }
  else {
    iVar2 = RtlIsCriticalSectionLockedByThread(param_1);
    if (iVar2 != 0) {
      uVar3 = RtlLeaveCriticalSection(param_1);
      if (-1 < (int)uVar3) {
        return;
      }
      goto LAB_0045ca11;
    }
  }
  uVar3 = FUN_0045247c(unaff_retaddr,0x58,0x40c234);
LAB_0045ca11:
  FUN_0045249b(unaff_retaddr,0x5b,0x40c234,uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004248d0 */

/* WARNING: Removing unreachable block (ram,0x004249eb) */
/* WARNING: Removing unreachable block (ram,0x0045cacc) */
/* WARNING: Removing unreachable block (ram,0x0045ca93) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004248d0(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *unaff_ESI;
  undefined *puVar7;
  int iVar8;
  undefined4 unaff_retaddr;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00456cbd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  cVar2 = FUN_004516a1((uint3)param_1);
  if (cVar2 != '\0') {
    local_18 = GetExtensionHostModuleCount();
  }
  puVar7 = (undefined *)(DAT_004c4cb8 + 1 + local_18);
  uVar5 = -(uint)((int)(ZEXT48(puVar7) * 4 >> 0x20) != 0) | (uint)(ZEXT48(puVar7) * 4);
  puVar3 = (undefined4 *)malloc(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_00474aa5(unaff_retaddr,0x17,0x40bb30);
    iVar6 = local_18;
    do {
      _DAT_004c4e30 = &PTR_FUN_00403384;
      _DAT_004c4e34 = 0;
      DAT_004c4e3c = &DAT_004c4e38;
      DAT_004c4e38 = &DAT_004c4e38;
      DAT_004c4ca8 = &DAT_004c4e30;
      DAT_004c4cac = 1;
      do {
        if (puVar7 == DAT_004c4ca8) {
          if (local_18 != 0) {
            local_1c = GetExtensionHostModuleFactory();
            do {
              FUN_0044e60e(local_20 + iVar6);
              pcVar1 = *(code **)(local_1c + 4);
              (*(code *)PTR_guard_check_icall_004c641c)(local_20 + iVar6);
              (*pcVar1)();
              iVar6 = local_14 + 1;
              if (local_20[local_14] == 0) {
                iVar6 = local_14;
              }
              local_1c = *(int *)(local_1c + 8) + -8;
              local_18 = local_18 + -1;
              local_14 = iVar6;
            } while (local_18 != 0);
          }
          FUN_004354b0(local_20,local_20 + iVar6);
          *param_1 = local_20;
          *param_2 = iVar6;
          ExceptionList = local_10;
          return;
        }
        piVar4 = (int *)*unaff_ESI;
        if (piVar4 != (int *)0x0) {
          *unaff_ESI = 0;
          pcVar1 = *(code **)(*piVar4 + 8);
          (*(code *)PTR_guard_check_icall_004c641c)(piVar4);
          (*pcVar1)();
          iVar6 = local_14;
        }
        pcVar1 = *(code **)(puVar7 + 4);
        if (pcVar1 == FUN_00425750) {
          FUN_00425750(unaff_ESI);
        }
        else if (pcVar1 == FUN_00426110) {
          FUN_00426110(unaff_ESI);
        }
        else if (pcVar1 == FUN_00425790) {
          FUN_00425790(unaff_ESI);
        }
        else if (pcVar1 == FUN_00424ab0) {
          FUN_00424ab0(unaff_ESI);
        }
        else if (pcVar1 == FUN_00425fd0) {
          FUN_00425fd0(unaff_ESI);
        }
        else {
          (*(code *)PTR_guard_check_icall_004c641c)(unaff_ESI);
          (*pcVar1)();
          iVar6 = local_14;
        }
        if (*unaff_ESI != 0) {
          iVar6 = iVar6 + 1;
          unaff_ESI = unaff_ESI + 1;
          local_14 = iVar6;
        }
        iVar8 = *(int *)(puVar7 + 8);
LAB_00424989:
        puVar7 = (undefined *)(iVar8 + -8);
      } while (DAT_004c4cac != 0);
    } while( true );
  }
  unaff_ESI = puVar3 + 1;
  *puVar3 = puVar7;
  thunk_FUN_00451c98(unaff_ESI,4,(int)puVar7,FUN_0044f890);
  iVar6 = 0;
  local_8 = 0;
  local_14 = 0;
  piVar4 = (int *)FUN_0044f715();
  iVar8 = *piVar4;
  local_20 = unaff_ESI;
  goto LAB_00424989;
}



/* Function: FUN_00424a70 */

void FUN_00424a70(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_0042abe1((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_00424a9b;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_00424a9b:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_00424ab0 */

void FUN_00424ab0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_0042ab38((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_00424adb;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_00424adb:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_00424af0 */

void FUN_00424af0(uint *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *extraout_ECX;
  uint unaff_EBX;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (uint *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    piVar3 = (int *)FUN_0042a8e3((undefined *)&local_8);
    iVar1 = *piVar3;
    *piVar3 = 0;
    unaff_EBX = -(uint)(iVar1 != 0) & iVar1 + 8U;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_00424b24;
  }
  local_8 = (int *)0x0;
  pcVar2 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar2)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
LAB_00424b24:
  *param_1 = unaff_EBX;
  return;
}



/* Function: FUN_00424b40 */

/* WARNING: Removing unreachable block (ram,0x0045cc2e) */
/* WARNING: Removing unreachable block (ram,0x0045cc6a) */
/* WARNING: Removing unreachable block (ram,0x0045cc0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00424b40(int *param_1,undefined4 *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *unaff_ESI;
  undefined *puVar7;
  int iVar8;
  undefined4 unaff_retaddr;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00456cbd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  cVar2 = FUN_004516a1((uint3)param_1);
  if (cVar2 != '\0') {
    local_1c = GetExtensionWebMultiThreadedModuleCount();
  }
  puVar7 = (undefined *)(DAT_004c4d3c + 1 + local_1c);
  uVar5 = -(uint)((int)(ZEXT48(puVar7) * 4 >> 0x20) != 0) | (uint)(ZEXT48(puVar7) * 4);
  puVar3 = (undefined4 *)malloc(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_00474aa5(unaff_retaddr,0x17,0x40bb30);
    iVar6 = local_1c;
    do {
      _DAT_004c511c = &PTR_FUN_00403380;
      _DAT_004c5120 = 0;
      DAT_004c5128 = &DAT_004c5124;
      DAT_004c5124 = &DAT_004c5124;
      DAT_004c4d34 = &DAT_004c511c;
      DAT_004c4d38 = 1;
      do {
        if (puVar7 == DAT_004c4d34) {
          if (local_1c != 0) {
            local_20 = GetExtensionWebMultiThreadedModuleFactory();
            do {
              FUN_0044e60e(local_24 + iVar6);
              pcVar1 = *(code **)(local_20 + 4);
              (*(code *)PTR_guard_check_icall_004c641c)(param_1,local_24 + iVar6);
              (*pcVar1)();
              iVar6 = local_18 + 1;
              if (local_24[local_18] == 0) {
                iVar6 = local_18;
              }
              local_20 = *(int *)(local_20 + 8) + -8;
              local_1c = local_1c + -1;
              local_18 = iVar6;
            } while (local_1c != 0);
          }
          *param_2 = local_24;
          *param_3 = iVar6;
          ExceptionList = local_10;
          return;
        }
        piVar4 = (int *)*unaff_ESI;
        if (piVar4 != (int *)0x0) {
          *unaff_ESI = 0;
          pcVar1 = *(code **)(*piVar4 + 8);
          (*(code *)PTR_guard_check_icall_004c641c)(piVar4);
          (*pcVar1)();
          iVar6 = local_18;
        }
        pcVar1 = *(code **)(puVar7 + 4);
        if (pcVar1 == FUN_00424cb0) {
          FUN_00424cb0(param_1,unaff_ESI);
        }
        else if (pcVar1 == FUN_0042a390) {
          FUN_0042a390(param_1,unaff_ESI);
        }
        else if (pcVar1 == FUN_00426fe0) {
          FUN_00426fe0(param_1,unaff_ESI);
        }
        else if (pcVar1 == FUN_00424cf0) {
          FUN_00424cf0(param_1,unaff_ESI);
        }
        else {
          (*(code *)PTR_guard_check_icall_004c641c)(param_1,unaff_ESI);
          (*pcVar1)();
          iVar6 = local_18;
        }
        if (*unaff_ESI != 0) {
          iVar6 = iVar6 + 1;
          unaff_ESI = unaff_ESI + 1;
          local_18 = iVar6;
        }
        iVar8 = *(int *)(puVar7 + 8);
LAB_00424bf9:
        puVar7 = (undefined *)(iVar8 + -8);
      } while (DAT_004c4d38 != 0);
    } while( true );
  }
  unaff_ESI = puVar3 + 1;
  *puVar3 = puVar7;
  thunk_FUN_00451c98(unaff_ESI,4,(int)puVar7,FUN_0044f890);
  iVar6 = 0;
  local_8 = 0;
  local_18 = 0;
  piVar4 = (int *)FUN_0044f6dd();
  iVar8 = *piVar4;
  local_24 = unaff_ESI;
  goto LAB_00424bf9;
}



/* Function: FUN_00424cb0 */

void FUN_00424cb0(undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x24,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_0042a985((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_00424cdb;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_00424cdb:
  *param_2 = unaff_ESI;
  return;
}



/* Function: FUN_00424cf0 */

void FUN_00424cf0(undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x24,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_0042a1c3((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_00424d1b;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_00424d1b:
  *param_2 = unaff_ESI;
  return;
}



/* Function: FUN_00424d2d */

void __cdecl FUN_00424d2d(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  code *pcVar1;
  int unaff_retaddr;
  int in_stack_00000014;
  
  if (*param_4 != 0) {
    return;
  }
  FUN_0047ea6b(param_1,param_2,param_3,unaff_retaddr,in_stack_00000014,&stack0x00000018);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00424d50 */

undefined4 FUN_00424d50(int param_1)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_retaddr;
  char *pcVar6;
  
  uVar5 = 0;
  uVar2 = FUN_00425540(param_1 + -4);
  if ((char)uVar2 == '\0') {
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar4 = 0x30e;
  }
  else {
    DVar3 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xe8) == DVar3) {
      if (DAT_004c5270 == 0) {
        pcVar1 = *(code **)(**(int **)(param_1 + 0x9c) + 0x10);
        if (pcVar1 == FUN_00424020) {
          uVar5 = FUN_00424020((int)*(int **)(param_1 + 0x9c));
        }
        else {
          (*(code *)PTR_guard_check_icall_004c641c)();
          uVar5 = (*pcVar1)();
          if (&stack0xfffffff4 != &stack0xffffffec) {
            pcVar1 = (code *)swi(0x29);
            uVar5 = (*pcVar1)();
          }
        }
      }
      return uVar5;
    }
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar4 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar4,(int)pcVar6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



/* Function: FUN_00424dd0 */

/* WARNING: Removing unreachable block (ram,0x00424e45) */

void FUN_00424dd0(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  undefined4 unaff_retaddr;
  char *pcVar6;
  
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0xe8) == DVar3) {
    uVar4 = FUN_00425540(param_1 + -4);
    if ((char)uVar4 != '\0') {
      if (DAT_004c5270 != 0) {
        return;
      }
      piVar1 = *(int **)(extraout_EDX + 0x9c);
      pcVar2 = *(code **)(*piVar1 + 0x4c);
      if (pcVar2 == FUN_00423f30) {
        iVar5 = FUN_00423f30((int)piVar1,param_2);
      }
      else {
        (*(code *)PTR_guard_check_icall_004c641c)(piVar1,param_2);
        iVar5 = (*pcVar2)();
      }
      if (-1 < iVar5) {
        return;
      }
      goto LAB_0045cd22;
    }
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar5 = 0x30e;
  }
  else {
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar5 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar5,(int)pcVar6);
LAB_0045cd22:
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((PTR_LOOP_004c4000[0x6c] & 2) != 0)) && (1 < (byte)PTR_LOOP_004c4000[0x69])) {
    FUN_0047ce9e(0x11,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100));
  }
  return;
}



/* Function: FUN_00424e60 */

/* WARNING: Removing unreachable block (ram,0x00424ed2) */

void FUN_00424e60(int param_1)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  undefined4 unaff_retaddr;
  char *pcVar6;
  
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0xe8) == DVar3) {
    uVar4 = FUN_00425540(param_1 + -4);
    if ((char)uVar4 != '\0') {
      if (DAT_004c5270 != 0) {
        return;
      }
      piVar1 = *(int **)(extraout_EDX + 0x9c);
      pcVar2 = *(code **)(*piVar1 + 0x90);
      if (pcVar2 == FUN_00424060) {
        iVar5 = FUN_00424060((int)piVar1);
      }
      else {
        (*(code *)PTR_guard_check_icall_004c641c)(piVar1);
        iVar5 = (*pcVar2)();
      }
      if (-1 < iVar5) {
        return;
      }
      goto LAB_0045cd7d;
    }
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar5 = 0x30e;
  }
  else {
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar5 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar5,(int)pcVar6);
LAB_0045cd7d:
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((PTR_LOOP_004c4000[0x6c] & 2) != 0)) && (1 < (byte)PTR_LOOP_004c4000[0x69])) {
    FUN_0047ce9e(0x12,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100));
  }
  return;
}



/* Function: FUN_00424ef0 */

/* WARNING: Removing unreachable block (ram,0x00424f6a) */

void FUN_00424ef0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  undefined4 unaff_retaddr;
  char *pcVar6;
  
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0xe8) == DVar3) {
    uVar4 = FUN_00425540(param_1 + -4);
    if ((char)uVar4 != '\0') {
      if (DAT_004c5270 != 0) {
        return;
      }
      piVar1 = *(int **)(extraout_EDX + 0x9c);
      pcVar2 = *(code **)(*piVar1 + 0x34);
      if (pcVar2 == FUN_004240a0) {
        iVar5 = FUN_004240a0((int)piVar1);
      }
      else {
        (*(code *)PTR_guard_check_icall_004c641c)(piVar1,param_2);
        iVar5 = (*pcVar2)();
      }
      if (-1 < iVar5) {
        return;
      }
      goto LAB_0045cddb;
    }
    iVar5 = 0x30e;
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
  }
  else {
    iVar5 = 0x21d;
    pcVar6 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
  }
  FUN_0045247c(unaff_retaddr,iVar5,(int)pcVar6);
LAB_0045cddb:
  if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
      ((PTR_LOOP_004c4000[0x6c] & 2) != 0)) && (1 < (byte)PTR_LOOP_004c4000[0x69])) {
    FUN_0047ce9e(0x13,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100));
  }
  return;
}



/* Function: FUN_00424f80 */

/* WARNING: Removing unreachable block (ram,0x0042506d) */
/* WARNING: Removing unreachable block (ram,0x0045cec6) */
/* WARNING: Removing unreachable block (ram,0x0045ce60) */
/* WARNING: Removing unreachable block (ram,0x0045ce90) */
/* WARNING: Removing unreachable block (ram,0x0045cf03) */
/* WARNING: Removing unreachable block (ram,0x0045cf25) */

void FUN_00424f80(int *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  void *pvVar3;
  LSTATUS LVar4;
  undefined4 unaff_retaddr;
  int iVar5;
  code *local_10;
  code *local_c;
  int *local_8;
  
  local_c = (code *)0x4;
  local_8 = (int *)0x1;
  if ((DAT_004c4f14 != (HKEY)0x0) &&
     (LVar4 = RegGetValueW(DAT_004c4f14,(LPCWSTR)0x0,L"LogConsoleToDebugPort",0x10,(LPDWORD)0x0,
                           &local_10,(LPDWORD)&local_c), LVar4 == 0)) {
    local_8 = (int *)(uint)(local_10 != (code *)0x0);
  }
  local_c = *(code **)(*param_2 + 0xc);
  local_10 = (code *)(param_1 + 7);
  piVar1 = *(int **)local_10;
  if (piVar1 != (int *)0x0) {
    *(int *)local_10 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004c641c)();
    (*pcVar2)();
  }
  if (local_c == FUN_00430eb0) {
    FUN_00430eb0(param_2,&DAT_00408a6c,&DAT_00408a5c,(int *)local_10);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)(param_2,&DAT_00408a6c,&DAT_00408a5c);
    (*local_c)();
  }
  piVar1 = local_8;
  if ((((DAT_004c5240 & 0xe0) != 0) || (local_8 != (int *)0x0)) || (param_1[7] != 0)) {
    local_8 = (int *)0x0;
    param_1[4] = (int)piVar1;
    local_10 = *(code **)*param_1;
    if (local_10 == FUN_00431f40) {
      pvVar3 = (void *)FUN_00431f40(param_1,(int *)&DAT_00408a5c,&local_8);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(param_1,&DAT_00408a5c);
      pvVar3 = (void *)(*local_10)();
    }
    if ((int)pvVar3 < 0) {
      iVar5 = 0x5b;
      goto LAB_0045cee4;
    }
    local_10 = *(code **)(*param_2 + 0xec);
    if (local_10 != FUN_004250c0) goto LAB_0045ceed;
    pvVar3 = (void *)FUN_004250c0((int)param_2,local_8,param_1 + 5);
    while ((int)pvVar3 < 0) {
      iVar5 = 0x5e;
LAB_0045cee4:
      FUN_00452460(unaff_retaddr,iVar5,0x40be58,pvVar3);
LAB_0045ceed:
      (*(code *)PTR_guard_check_icall_004c641c)(param_2,local_8);
      pvVar3 = (void *)(*local_10)();
    }
    if ((int *)param_1[6] != param_2) {
      pcVar2 = *(code **)(*param_2 + 4);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar2)();
      piVar1 = (int *)param_1[6];
      param_1[6] = (int)param_2;
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 8);
        (*(code *)PTR_guard_check_icall_004c641c)();
        (*pcVar2)();
      }
    }
    piVar1 = local_8;
    if (local_8 != (int *)0x0) {
      local_8 = (int *)0x0;
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar2)();
      if (&stack0xffffffe4 != &stack0xffffffe0) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
      }
    }
  }
  return;
}



/* Function: FUN_004250c0 */

void FUN_004250c0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  char *pcVar5;
  
  uVar2 = FUN_00425540(param_1);
  if ((char)uVar2 == '\0') {
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar4 = 0x30e;
  }
  else {
    DVar3 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xec) == DVar3) {
      *param_3 = 0;
      if (DAT_004c5270 == 0) {
        pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x84);
        if (pcVar1 == FUN_00423f80) {
          FUN_00423f80((int)*(int **)(param_1 + 0xa0),param_2,param_3);
        }
        else {
          (*(code *)PTR_guard_check_icall_004c641c)();
          (*pcVar1)();
          if (&stack0xfffffff4 != &stack0xffffffe8) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
          }
        }
      }
      return;
    }
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar4 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar4,(int)pcVar5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00425144 */

/* WARNING: Removing unreachable block (ram,0x0045cfde) */
/* WARNING: Removing unreachable block (ram,0x0045cf76) */
/* WARNING: Removing unreachable block (ram,0x0045d022) */
/* WARNING: Removing unreachable block (ram,0x0045cfba) */

void __thiscall FUN_00425144(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  void *pvVar4;
  int *extraout_ECX;
  int *piVar5;
  int iVar6;
  undefined4 unaff_retaddr;
  code *local_10;
  int local_c;
  int *local_8;
  
  DVar3 = GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x178) == DVar3) {
    piVar1 = (int *)((int)this + 0x128);
    local_8 = (int *)0x0;
    local_c = 0;
    if (*piVar1 != 0) goto LAB_0045cf4f;
                    /* WARNING: Load size is inaccurate */
    local_10 = (code *)**this;
    if (local_10 == FUN_00432660) {
      pvVar4 = (void *)FUN_00432660((int *)this,(int *)&DAT_00408a7c,(int *)&local_8);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(this,&DAT_00408a7c);
      pvVar4 = (void *)(*local_10)();
    }
    if ((int)pvVar4 < 0) {
      iVar6 = 0x987;
      goto LAB_0045cf9a;
    }
    piVar5 = *(int **)((int)this + 0x48);
    local_10 = *(code **)(*piVar5 + 0xf4);
    if (local_10 != FUN_004254b0) goto LAB_0045cfa2;
    FUN_004254b0((int)piVar5,local_8,1,piVar1);
    while( true ) {
      piVar5 = *(int **)((int)this + 0x48);
      local_10 = *(code **)(*piVar5 + 0xfc);
      if (local_10 == FUN_00425310) {
        FUN_00425310((int)piVar5,1,&local_c);
      }
      else {
        (*(code *)PTR_guard_check_icall_004c641c)(piVar5,1);
        (*local_10)();
      }
      if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x400) != 0)) &&
         (4 < (byte)PTR_LOOP_004c4000[0x69])) {
        FUN_0047ce9e(0x35,&LAB_0041382c,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                     *(undefined4 *)(PTR_LOOP_004c4000 + 100));
      }
      if (local_c != 0) goto LAB_00425254;
      DVar3 = GetCurrentThreadId();
      if (*(DWORD *)((int)this + 0x178) != DVar3) goto LAB_0045cf31;
      if (*piVar1 == 0) goto LAB_00425254;
      piVar5 = *(int **)((int)this + 0x48);
      if (piVar5 == (int *)0x0) break;
      this = *(void **)(*piVar5 + 0xf8);
      if ((code *)this == FUN_004252a0) {
        pvVar4 = (void *)FUN_004252a0((int)piVar5,(int *)*piVar1);
      }
      else {
        (*(code *)PTR_guard_check_icall_004c641c)(piVar5);
        pvVar4 = (void *)(*(code *)this)();
      }
      if (-1 < (int)pvVar4) {
        *piVar1 = 0;
LAB_00425254:
        piVar1 = local_8;
        *param_1 = local_c;
        if (local_8 != (int *)0x0) {
          local_8 = (int *)0x0;
          pcVar2 = *(code **)(*piVar1 + 8);
          (*(code *)PTR_guard_check_icall_004c641c)();
          (*pcVar2)();
          if (&stack0xffffffe4 != &stack0xffffffe0) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)();
          }
        }
        return;
      }
      iVar6 = 0xa7c;
LAB_0045cf9a:
      FUN_00452460(unaff_retaddr,iVar6,0x40c108,pvVar4);
      piVar5 = extraout_ECX;
LAB_0045cfa2:
      (*(code *)PTR_guard_check_icall_004c641c)(piVar5,local_8,1);
      (*local_10)();
    }
    iVar6 = 0xa7a;
  }
  else {
LAB_0045cf31:
    iVar6 = 0xea9;
  }
  do {
    FUN_0045247c(unaff_retaddr,iVar6,0x40c108);
LAB_0045cf4f:
    iVar6 = 0x985;
  } while( true );
}



/* Function: FUN_004252a0 */

void FUN_004252a0(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  char *pcVar5;
  
  uVar2 = FUN_00425540(param_1);
  if ((char)uVar2 == '\0') {
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar4 = 0x30e;
  }
  else {
    DVar3 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xec) == DVar3) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x54);
      if (pcVar1 == FUN_004240e0) {
        FUN_004240e0((int)*(int **)(param_1 + 0xa0),param_2);
      }
      else {
        (*(code *)PTR_guard_check_icall_004c641c)();
        (*pcVar1)();
        if (&stack0xfffffff4 != &stack0xffffffec) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
        }
      }
      return;
    }
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar4 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar4,(int)pcVar5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00425310 */

undefined4 FUN_00425310(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  char *pcVar5;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 0x9c) == 0) || (5 < *(int *)(param_1 + 0x60) - 3U)) {
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar3 = 0x30e;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xec) == DVar2) {
      if (DAT_004c5270 == 0) {
        pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x58);
        if (pcVar1 == FUN_004253a0) {
          uVar4 = FUN_004253a0((int)*(int **)(param_1 + 0xa0),param_2,param_3);
        }
        else {
          (*(code *)PTR_guard_check_icall_004c641c)();
          uVar4 = (*pcVar1)();
          if (&stack0xfffffff4 != &stack0xffffffe8) {
            pcVar1 = (code *)swi(0x29);
            uVar4 = (*pcVar1)();
          }
        }
      }
      return uVar4;
    }
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar3 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar3,(int)pcVar5);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



/* Function: FUN_004253a0 */

void FUN_004253a0(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar3 = 0x30c;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      unaff_EDI = *(code **)(*piVar1 + 0xd8);
      if (unaff_EDI == FUN_004253f0) {
        FUN_004253f0((int)piVar1,param_2,param_3);
        return;
      }
      goto LAB_0045d06b;
    }
    iVar3 = 0x30d;
  }
  FUN_0045247c(unaff_retaddr,iVar3,0x40f770);
LAB_0045d06b:
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*unaff_EDI)();
  if (&stack0xfffffff4 != &stack0xffffffe8) {
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_004253f0 */

/* WARNING: Removing unreachable block (ram,0x00425462) */
/* WARNING: Removing unreachable block (ram,0x00425472) */
/* WARNING: Removing unreachable block (ram,0x0042548c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004253f0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0x1cd;
  }
  else {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xc) == DVar2) {
      piStack_1c = *(int **)(param_1 + 0x10);
      pcVar1 = *(code **)(*piStack_1c + 0x44);
      (*(code *)PTR_guard_check_icall_004c641c)();
      iVar3 = (*pcVar1)();
      if ((int **)&stack0xffffffec != &piStack_1c) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if (-1 < iVar3) {
        pcVar1 = *(code **)(_DAT_00000000 + 100);
        (*(code *)PTR_guard_check_icall_004c641c)(0,param_2);
        iVar3 = (*pcVar1)();
      }
      return iVar3;
    }
    iVar3 = 0x1d2;
  }
  piStack_1c = (int *)0x45b10d;
  FUN_0045247c(unaff_retaddr,iVar3,0x40f9d0);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



/* Function: FUN_004254b0 */

void FUN_004254b0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  char *pcVar5;
  
  uVar2 = FUN_00425540(param_1);
  if ((char)uVar2 == '\0') {
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\WebInstance.hpp";
    iVar4 = 0x30e;
  }
  else {
    DVar3 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0xec) == DVar3) {
      *param_4 = 0;
      if (DAT_004c5270 == 0) {
        pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x50);
        if (pcVar1 == FUN_00423fd0) {
          FUN_00423fd0((int)*(int **)(param_1 + 0xa0),param_2,param_3,param_4);
        }
        else {
          (*(code *)PTR_guard_check_icall_004c641c)();
          (*pcVar1)();
          if (&stack0xfffffff4 != &stack0xffffffe4) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
          }
        }
      }
      return;
    }
    pcVar5 = "onecoreuap\\inetcore\\wwa\\host\\framework\\webinstance.cpp";
    iVar4 = 0x21d;
  }
  FUN_0045247c(unaff_retaddr,iVar4,(int)pcVar5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00425540 */

uint __fastcall FUN_00425540(int param_1)

{
  uint in_EAX;
  
  if ((*(int *)(param_1 + 0x9c) != 0) && (in_EAX = *(int *)(param_1 + 0x60) - 3, in_EAX < 6)) {
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_00425560 */

uint __thiscall FUN_00425560(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  void *_Memory;
  undefined4 unaff_retaddr;
  undefined4 local_c;
  uint local_8;
  
  _Memory = (void *)0x0;
  if (*(int *)((int)this + 0x14) != 0) {
    return 0;
  }
  uVar3 = 0xc;
  iVar1 = QuirkIsEnabled(0x70002);
  if ((iVar1 != 0) || (iVar1 = QuirkIsEnabled(0xf000b), iVar1 == 0)) {
    uVar3 = 0xe;
  }
  uVar2 = GetCurrentPackageApplicationContext(0,0,&local_c);
  if (0 < (int)uVar2) {
    uVar2 = uVar2 & 0xffff | 0x80070000;
  }
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  local_8 = 0;
  iVar1 = GetPackageApplicationPropertyString(local_c,uVar3,&local_8,0);
  if (iVar1 == 0) {
    if (local_8 == 0) {
      return uVar2;
    }
    iVar1 = 0xdd;
LAB_0045d0b4:
    FUN_0045247c(unaff_retaddr,iVar1,0x40fc38);
LAB_0045d0bc:
    FUN_00474aa5(unaff_retaddr,0x17,0x40bb30);
  }
  else {
    if (iVar1 != 0x7a) {
      iVar1 = 0xe1;
      goto LAB_0045d0b4;
    }
    if (local_8 == 0) {
      return uVar2;
    }
    _Memory = malloc(-(uint)((int)((ulonglong)local_8 * 2 >> 0x20) != 0) |
                     (uint)((ulonglong)local_8 * 2));
    if (_Memory == (void *)0x0) goto LAB_0045d0bc;
    free((void *)0x0);
    uVar2 = GetPackageApplicationPropertyString(local_c,uVar3,&local_8,_Memory);
    if ((int)uVar2 < 1) goto LAB_00425631;
  }
  uVar2 = uVar2 & 0xffff | 0x80070000;
LAB_00425631:
  if (-1 < (int)uVar2) {
    uVar2 = FUN_00448950(this,(int)_Memory,local_8,param_1);
  }
  free(_Memory);
  return uVar2;
}



/* Function: FUN_00425657 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0045d100) */
/* WARNING: Removing unreachable block (ram,0x004256e3) */
/* WARNING: Removing unreachable block (ram,0x0045d257) */
/* WARNING: Removing unreachable block (ram,0x00425712) */
/* WARNING: Removing unreachable block (ram,0x0045d168) */

int FUN_00425657(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  LSTATUS LVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  DWORD local_1c;
  int *local_18;
  int *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  pcVar1 = DAT_004c5304;
  uStack_4 = 0xc;
  local_8 = 0x425663;
  if (DAT_004c5304 == (code *)0x0) {
    piVar6 = (int *)0x0;
    local_14[0] = (int *)0x0;
    local_1c = 4;
    if ((((DAT_004c4f14 == (HKEY)0x0) ||
         (LVar5 = RegGetValueW(DAT_004c4f14,(LPCWSTR)0x0,L"WebInstanceUseAdapter",0x10,(LPDWORD)0x0,
                               local_14,&local_1c), LVar5 != 0)) || (local_14[0] != (int *)0x1)) &&
       (DAT_004c4db4 == '\0')) {
      iVar4 = FUN_0044f22f();
      if (-1 < iVar4) {
        return iVar4;
      }
      iVar4 = FUN_0045d1f9();
      return iVar4;
    }
    piVar3 = FUN_00453bd9(&local_18);
    piVar2 = local_18;
    if (*piVar3 != 0) {
      piVar6 = (int *)(*piVar3 + 8);
    }
    *piVar3 = 0;
    local_8 = 3;
    local_14[0] = piVar6;
    if (local_18 != (int *)0x0) {
      local_18 = (int *)0x0;
      pcVar1 = *(code **)(*piVar2 + 8);
      (*(code *)PTR_guard_check_icall_004c641c)(piVar2);
      (*pcVar1)();
    }
    local_8._0_1_ = 4;
    pcVar1 = *(code **)*piVar6;
    (*(code *)PTR_guard_check_icall_004c641c)(piVar6,&DAT_004091d8,param_2);
    iVar4 = (*pcVar1)();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (-1 < iVar4) {
      local_8 = 0xffffffff;
      pcVar1 = *(code **)(*piVar6 + 8);
      (*(code *)PTR_guard_check_icall_004c641c)(piVar6);
      (*pcVar1)();
      return iVar4;
    }
    if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) &&
       (1 < (byte)PTR_LOOP_004c4000[0x69])) {
      iVar4 = FUN_0045d1a4();
      return iVar4;
    }
  }
  else {
    local_14[0] = (int *)0x0;
    local_8 = 0;
    FUN_0044e60e((int *)local_14);
    (*(code *)PTR_guard_check_icall_004c641c)(local_14);
    iVar4 = (*pcVar1)();
    if (iVar4 < 0) {
      if ((((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) ||
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0)) ||
         ((byte)PTR_LOOP_004c4000[0x69] < 2)) goto LAB_0045d1bd;
      pcVar10 = "(TestHooks::testCreateCoreWebView)(&coreWebView)";
      uVar9 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar8 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uVar7 = 0x73;
    }
    else {
      local_8._0_1_ = 1;
      pcVar1 = *(code **)*local_14[0];
      (*(code *)PTR_guard_check_icall_004c641c)(local_14[0],&DAT_004091d8,param_2);
      iVar4 = (*pcVar1)();
      local_8 = (uint)local_8._1_3_ << 8;
      if ((((-1 < iVar4) || ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000)) ||
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0)) ||
         ((byte)PTR_LOOP_004c4000[0x69] < 2)) goto LAB_0045d1bd;
      pcVar10 = "coreWebView.CopyTo(interfaceId, object)";
      uVar9 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar8 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uVar7 = 0x74;
    }
    FUN_00474b30(uVar7,&DAT_0040f344,uVar8,uVar9,pcVar10);
  }
LAB_0045d1bd:
  FUN_0044e60e((int *)local_14);
  return iVar4;
}



/* Function: FUN_00425750 */

void FUN_00425750(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_00428b5c((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_0042577b;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_0042577b:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_00425790 */

void FUN_00425790(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_00428a86((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_004257bb;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_004257bb:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_004257d0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0045d3c3) */
/* WARNING: Removing unreachable block (ram,0x0045d328) */
/* WARNING: Removing unreachable block (ram,0x0045d3a4) */
/* WARNING: Removing unreachable block (ram,0x00425892) */

int FUN_004257d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  int *extraout_ECX;
  int *piVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4257dc;
  iVar5 = 0;
  if (param_3 == 0) {
    FUN_0045247c(unaff_retaddr,0x748,0x40f3bc);
    piVar4 = extraout_ECX;
  }
  else {
    piVar4 = *(int **)(param_1 + 0x1c4);
    if (piVar4 == (int *)0x0) goto LAB_004257fb;
  }
  pcVar1 = *(code **)(*piVar4 + 0x1c);
  (*(code *)PTR_guard_check_icall_004c641c)(piVar4,param_2,param_3,0);
  iVar5 = (*pcVar1)();
  if (iVar5 < 0) {
    if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
      return iVar5;
    }
    if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
      return iVar5;
    }
    if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
      return iVar5;
    }
    FUN_00474b30(0x3b,&DAT_0040f344,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                 *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                 "this->coreWebViewComponentCallback->OnCoreWebViewContentLoading(sender, uri, NULL )"
                );
    return iVar5;
  }
LAB_004257fb:
  local_14[0] = (int *)0x0;
  local_8 = 0;
  piVar4 = *(int **)(param_1 + 0x90);
  pcVar1 = *(code **)(*piVar4 + 0xc);
  if (pcVar1 == FUN_00425f00) {
    iVar2 = FUN_00425f00(piVar4,&DAT_00408a8c,&DAT_00408a9c,(int *)local_14);
  }
  else {
    (*(code *)PTR_guard_check_icall_004c641c)(piVar4,&DAT_00408a8c,&DAT_00408a9c,local_14);
    iVar2 = (*pcVar1)();
  }
  if (-1 < iVar2) {
    pcVar1 = *(code **)(*local_14[0] + 0x24);
    if (pcVar1 == FUN_004258b0) {
      pvVar3 = (void *)FUN_004258b0((int)local_14[0],param_4);
    }
    else {
      (*(code *)PTR_guard_check_icall_004c641c)(local_14[0],param_4);
      pvVar3 = (void *)(*pcVar1)();
    }
    if ((int)pvVar3 < 0) {
      FUN_00452460(unaff_retaddr,0x757,0x40f3bc,pvVar3);
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
  }
  FUN_004245b3((void *)(param_1 + -0x34),param_3,param_4);
  piVar4 = local_14[0];
  local_8 = 0xffffffff;
  if (local_14[0] != (int *)0x0) {
    local_14[0] = (int *)0x0;
    pcVar1 = *(code **)(*piVar4 + 8);
    (*(code *)PTR_guard_check_icall_004c641c)(piVar4);
    (*pcVar1)();
  }
  return iVar5;
}



/* Function: FUN_004258b0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00425995) */
/* WARNING: Removing unreachable block (ram,0x00425969) */
/* WARNING: Removing unreachable block (ram,0x00425a0b) */

int FUN_004258b0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 unaff_retaddr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 auStack_30 [16];
  code *local_20;
  undefined4 *local_1c;
  int *local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4258bc;
  FUN_00424d2d(unaff_retaddr,0x59e,
               "onecoreuap\\inetcore\\wwa\\host\\modules\\ui\\secondarywindowwebmultithreadedmodule.cpp"
               ,(int *)(param_1 + 0x14));
  local_1c = (undefined4 *)0x0;
  local_18 = (int *)0x0;
  local_14[0] = (int *)0x0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  iVar3 = FUN_00435cd0(*(void **)(param_1 + 0xc),(int *)&local_1c);
  piVar2 = local_18;
  if (iVar3 < 0) {
    if ((((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) ||
        ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0)) ||
       ((byte)PTR_LOOP_004c4000[0x69] < 2)) goto LAB_00425a9e;
    pcVar8 = 
    "GetProperty( coreApplicationViewInternal.Get(), SecondaryWindowWebMultiThreadedModule::currentWwaWindowContextPropertyName, &currentWindowContext)"
    ;
    uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
    uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
    uVar5 = 0x4e;
  }
  else {
    local_20 = *(code **)*local_1c;
    local_8._0_1_ = 4;
    if (local_18 != (int *)0x0) {
      local_18 = (int *)0x0;
      pcVar1 = *(code **)(*piVar2 + 8);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar1)();
    }
    local_8._0_1_ = 3;
    (*(code *)PTR_guard_check_icall_004c641c)();
    iVar3 = (*local_20)();
    piVar2 = local_14[0];
    local_8._0_1_ = 2;
    if (iVar3 < 0) {
      if ((((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) ||
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0)) ||
         ((byte)PTR_LOOP_004c4000[0x69] < 2)) goto LAB_00425a9e;
      pcVar8 = "currentWindowContext.As(&currentWindowContextInternal)";
      uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uVar5 = 0x4f;
    }
    else {
      local_20 = (code *)**(undefined4 **)(param_1 + -8);
      if (local_14[0] != (int *)0x0) {
        local_14[0] = (int *)0x0;
        pcVar1 = *(code **)(*piVar2 + 8);
        (*(code *)PTR_guard_check_icall_004c641c)();
        (*pcVar1)();
      }
      pcVar1 = local_20;
      (*(code *)PTR_guard_check_icall_004c641c)();
      pvVar4 = (void *)(*pcVar1)();
      if (auStack_30 != &stack0xffffffc4) {
        pcVar1 = (code *)swi(0x29);
        pvVar4 = (void *)(*pcVar1)();
      }
      if ((int)pvVar4 < 0) {
        FUN_00452460(unaff_retaddr,0x5ab,0x40dec0,pvVar4);
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      pcVar1 = *(code **)(*local_18 + 0xc);
      (*(code *)PTR_guard_check_icall_004c641c)(local_18,local_14[0],param_2);
      iVar3 = (*pcVar1)();
      if (&stack0xffffffc4 != auStack_30) {
        pcVar1 = (code *)swi(0x29);
        iVar3 = (*pcVar1)();
      }
      if ((((-1 < iVar3) || ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000)) ||
          ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0)) ||
         ((byte)PTR_LOOP_004c4000[0x69] < 2)) goto LAB_00425a9e;
      pcVar8 = 
      "currentWindowContextInternal->FinishInitialize( secondaryWindowService.Get(), htmlWindow)";
      uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar6 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uVar5 = 0x50;
    }
  }
  FUN_00474b30(uVar5,&DAT_0040e8ec,uVar6,uVar7,pcVar8);
LAB_00425a9e:
  thunk_FUN_0044e60e((int *)local_14);
  FUN_00471c2b((int *)&local_18);
  thunk_FUN_0044e60e((int *)&local_1c);
  return iVar3;
}



/* Function: FUN_00425ae0 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00425bdf) */
/* WARNING: Removing unreachable block (ram,0x00425b46) */
/* WARNING: Removing unreachable block (ram,0x00425b6c) */
/* WARNING: Removing unreachable block (ram,0x00425c13) */

int FUN_00425ae0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_retaddr;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined1 auStack_34 [16];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  code *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x425aec;
  iVar5 = 0;
  if (param_3 != *(int **)(param_1 + 0x54)) {
    FUN_00424d2d(unaff_retaddr,0xe6,
                 "onecoreuap\\inetcore\\wwa\\host\\modules\\ui\\secondarywindowwebmultithreadedmodule.cpp"
                 ,(int *)(param_1 + 0x38));
    local_14 = *(code **)*param_2;
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      *(int *)(param_1 + 0x28) = 0;
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_004c641c)();
      (*pcVar2)();
    }
    pcVar2 = local_14;
    (*(code *)PTR_guard_check_icall_004c641c)(param_2);
    iVar5 = (*pcVar2)();
    if (iVar5 < 0) {
      if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
        return iVar5;
      }
      if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
        return iVar5;
      }
      if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
        return iVar5;
      }
      pcVar9 = 
      "secondaryWindowServiceIn->QueryInterface(IID_PPV_ARGS(&this->secondaryWindowService))";
      uVar8 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uVar6 = 0x12;
    }
    else {
      if (*(int *)(param_1 + 0x2c) != 0) {
        pcVar2 = *(code **)(**(int **)(param_1 + 0x3c) + 0x10);
        (*(code *)PTR_guard_check_icall_004c641c)();
        (*pcVar2)();
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      pcVar2 = *(code **)(**(int **)(param_1 + 0x3c) + 0xc);
      (*(code *)PTR_guard_check_icall_004c641c)(*(int **)(param_1 + 0x3c),param_3);
      iVar5 = (*pcVar2)();
      if (-1 < iVar5) {
        iVar5 = param_1 + 0x60;
        *(int **)(param_1 + 0x54) = param_3;
        if (*(int *)(param_1 + 0x78) == 0) {
          uVar3 = FUN_0045247c(unaff_retaddr,0x33,0x40c234);
          unaff_retaddr = extraout_ECX;
        }
        else {
          uVar3 = RtlEnterCriticalSection();
          if (-1 < (int)uVar3) {
            local_8 = 0;
            local_14 = (code *)iVar5;
            if (*(int *)(param_1 + 0x80) == 0) {
              *(undefined4 *)(param_1 + 0x80) = 1;
              iVar4 = FUN_00425da8(param_1 + -0xc);
              if (iVar4 < 0) {
                if ((((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000) &&
                    ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0)) &&
                   (1 < (byte)PTR_LOOP_004c4000[0x69])) {
                  FUN_00474b30(0x14,&DAT_0040e8ec,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                               *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                               "this->ProcessRunAfterFinishedInitializeWork()");
                }
                local_8 = 0xffffffff;
                FUN_00424890(iVar5);
                return iVar4;
              }
            }
            local_8 = 0xffffffff;
            FUN_00424890(iVar5);
            uStack_20 = 0;
            uStack_1c = 0;
            uStack_18 = 0;
            local_24 = 0;
            local_8 = 1;
            pcVar2 = *(code **)(*param_3 + 0x60);
            (*(code *)PTR_guard_check_icall_004c641c)();
            iVar5 = (*pcVar2)();
            if (auStack_34 != &stack0xffffffc4) {
              pcVar2 = (code *)swi(0x29);
              iVar5 = (*pcVar2)();
            }
            if (((iVar5 < 0) && ((undefined **)PTR_LOOP_004c4000 != &PTR_LOOP_004c4000)) &&
               (((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) != 0 &&
                (1 < (byte)PTR_LOOP_004c4000[0x69])))) {
              FUN_00474b30(0x15,&DAT_0040e8ec,*(undefined4 *)(PTR_LOOP_004c4000 + 0x60),
                           *(undefined4 *)(PTR_LOOP_004c4000 + 100),
                           "htmlWindow->get_opener(&opener)");
            }
            local_8 = 0xffffffff;
            Ordinal_9(&local_24);
            return iVar5;
          }
        }
        FUN_0045249b(unaff_retaddr,0x36,0x40c234,uVar3);
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if ((undefined **)PTR_LOOP_004c4000 == &PTR_LOOP_004c4000) {
        return iVar5;
      }
      if ((*(uint *)(PTR_LOOP_004c4000 + 0x6c) & 0x4000) == 0) {
        return iVar5;
      }
      if ((byte)PTR_LOOP_004c4000[0x69] < 2) {
        return iVar5;
      }
      pcVar9 = 
      "this->globalInterfaceTable->RegisterInterfaceInGlobal( htmlWindow, __uuidof(htmlWindow), &this->htmlWindowGitCookie)"
      ;
      uVar8 = *(undefined4 *)(PTR_LOOP_004c4000 + 100);
      uVar7 = *(undefined4 *)(PTR_LOOP_004c4000 + 0x60);
      uVar6 = 0x13;
    }
    FUN_00474b30(uVar6,&DAT_0040e8ec,uVar7,uVar8,pcVar9);
  }
  return iVar5;
}



/* Function: FUN_00425da8 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00425eaa) */

int __fastcall FUN_00425da8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  undefined4 *puVar6;
  int unaff_retaddr;
  char *pcVar7;
  int local_14;
  
  piVar1 = (int *)(param_1 + 100);
  local_14 = 0;
  FUN_0043a2ba(unaff_retaddr,0x22b,
               "onecoreuap\\inetcore\\wwa\\host\\modules\\ui\\secondarywindowwebmultithreadedmodule.cpp"
               ,(*piVar1 == 0) != (*(int *)(param_1 + 0x68) == 0));
  if (*(int *)(param_1 + 0x84) == 0) {
    iVar4 = 0x45;
LAB_00425ee4:
    pcVar7 = "onecoreuap\\inetcore\\Wwa\\AppModelCommon\\Lock.hpp";
  }
  else {
    iVar4 = RtlIsCriticalSectionLockedByThread(param_1 + 0x6c);
    if (iVar4 != 0) {
      if (*piVar1 != 0) {
        local_14 = FUN_00496e84(*(int **)(param_1 + 0x68),*piVar1);
        FUN_0044e60e(piVar1);
        FUN_0044f379((int *)(param_1 + 0x68));
      }
      iVar4 = DAT_004c4d90;
      if (*(int *)(param_1 + 0x94) == *(int *)(param_1 + 0x90)) {
        return local_14;
      }
      if (*(int *)(DAT_004c4d90 + 0x18) != 0) {
        uVar5 = RtlEnterCriticalSection(DAT_004c4d90);
        if (-1 < (int)uVar5) {
          puVar2 = *(undefined4 **)(param_1 + 0x94);
          for (puVar6 = *(undefined4 **)(param_1 + 0x90); puVar6 != puVar2; puVar6 = puVar6 + 1) {
            pcVar3 = *(code **)(**(int **)(param_1 + 0x34) + 0x14);
            (*(code *)PTR_guard_check_icall_004c641c)(*(int **)(param_1 + 0x34),*puVar6);
            (*pcVar3)();
          }
          *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x90);
          FUN_00424890(iVar4);
          return local_14;
        }
        goto LAB_00425eea;
      }
      iVar4 = 0x33;
      goto LAB_00425ee4;
    }
    pcVar7 = 
    "onecoreuap\\inetcore\\wwa\\host\\modules\\ui\\secondarywindowwebmultithreadedmodule.cpp";
    iVar4 = 0x22d;
  }
  uVar5 = FUN_0045247c(unaff_retaddr,iVar4,(int)pcVar7);
  unaff_retaddr = extraout_ECX;
LAB_00425eea:
  FUN_0045249b(unaff_retaddr,0x36,0x40c234,uVar5);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}



/* Function: FUN_00425f00 */

void FUN_00425f00(int *param_1,byte *param_2,byte *param_3,int *param_4)

{
  code *pcVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  undefined4 unaff_retaddr;
  
  if (param_1[0xd] == 0) {
    FUN_0045247c(unaff_retaddr,0xdd,0x40f280);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar3 = &DAT_0040f2c8;
  uVar4 = 0xc;
  pbVar2 = param_2;
  do {
    if (*(int *)pbVar2 != *piVar3) {
      piVar3 = (int *)param_1[0xd];
      pcVar1 = *(code **)(*piVar3 + 0xc);
      if (pcVar1 == FUN_00427a00) {
        FUN_00427a00((int)piVar3,param_2,(int *)param_3,param_4);
        return;
      }
      (*(code *)PTR_guard_check_icall_004c641c)(piVar3);
      (*pcVar1)();
      goto LAB_00425fa7;
    }
    pbVar2 = pbVar2 + 4;
    piVar3 = piVar3 + 1;
    bVar5 = 3 < uVar4;
    uVar4 = uVar4 - 4;
  } while (bVar5);
  pcVar1 = *(code **)*param_1;
  if (pcVar1 == FUN_00430470) {
    FUN_00430470(param_1,param_3,param_4);
    return;
  }
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
LAB_00425fa7:
  if (&stack0xffffffec != &stack0xffffffe0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00425fd0 */

void FUN_00425fd0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_004289d0((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_00425ffb;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_00425ffb:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_00426010 */

void FUN_00426010(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_00428926((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_0042603b;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_0042603b:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_00426050 */

void FUN_00426050(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_00428c33((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_0042607b;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_0042607b:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_00426090 */

void FUN_00426090(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_00428cd8((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_004260bb;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_004260bb:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_004260d0 */

void FUN_004260d0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_00428d72((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_004260fb;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_004260fb:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_00426110 */

void FUN_00426110(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  int *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0045247c(unaff_retaddr,0x15,0x40baa8);
    piVar3 = extraout_ECX;
  }
  else {
    puVar2 = (undefined4 *)FUN_00428896((undefined *)&local_8);
    unaff_ESI = *puVar2;
    *puVar2 = 0;
    piVar3 = local_8;
    if (local_8 == (int *)0x0) goto LAB_0042613b;
  }
  local_8 = (int *)0x0;
  pcVar1 = *(code **)(*piVar3 + 8);
  (*(code *)PTR_guard_check_icall_004c641c)();
  (*pcVar1)();
  if (&stack0xffffffec != &stack0xffffffe8) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
LAB_0042613b:
  *param_1 = unaff_ESI;
  return;
}



/* Function: FUN_0042614d */
