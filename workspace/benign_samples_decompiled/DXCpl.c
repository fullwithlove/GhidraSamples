/* Function: FUN_004426f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004426f0(void)

{
  _DAT_00456fd0 = FUN_004477c0;
  _DAT_00456fe0 = FUN_004477d0;
  return;
}



/* Function: FUN_00442710 */

void FUN_00442710(void)

{
  FUN_004537e5(FUN_00454a20);
  return;
}



/* Function: FUN_00442730 */

void FUN_00442730(void)

{
  FUN_004537e5(FUN_00454a50);
  return;
}



/* Function: FUN_00442750 */

void FUN_00442750(void)

{
  DAT_00456fc4 = FUN_00448580;
  DAT_00456f9c = &PTR_s_WilError_03_00456000;
  DAT_00456fb0 = &DAT_004561a8;
  return;
}



/* Function: FUN_00442780 */

void FUN_00442780(void)

{
  DAT_00456fe8 = FUN_00447070;
  DAT_00456fcc = DebugBreak;
  DAT_00456fe4 = FUN_004470b0;
  DAT_00456fbc = FUN_00448650;
  DAT_00456fac = FUN_00448780;
  DAT_00456fec = FUN_004486a0;
  DAT_00456fc8 = FUN_00448710;
  return;
}



/* Function: FUN_004427d0 */

void FUN_004427d0(void)

{
  FUN_00451134();
  FUN_004537e5(FUN_00454a60);
  return;
}



/* Function: FUN_004427f0 */

void FUN_004427f0(void)

{
  FUN_004537e5(FUN_00454a70);
  return;
}



/* Function: FUN_00442810 */

void FUN_00442810(void)

{
  DAT_0045a0dc = FUN_0044ab10;
  DAT_004573fc = FUN_0044ab90;
  DAT_00458028 = FUN_0044ac10;
  DAT_0045a700 = FUN_0044ac80;
  DAT_00458234 = FUN_00448f40;
  return;
}



/* Function: FUN_00442850 */

void FUN_00442850(void)

{
  FUN_004537e5(FUN_00454a80);
  return;
}



/* Function: FUN_00442870 */

void FUN_00442870(void)

{
  DAT_004565b8 = operator_new(0x14);
  *(void **)DAT_004565b8 = DAT_004565b8;
  *(void **)((int)DAT_004565b8 + 4) = DAT_004565b8;
  *(void **)((int)DAT_004565b8 + 8) = DAT_004565b8;
  *(undefined2 *)((int)DAT_004565b8 + 0xc) = 0x101;
  FUN_004537e5(FUN_00454a90);
  return;
}



/* Function: FUN_004428a0 */

void FUN_004428a0(void)

{
  DAT_004565b0 = operator_new(0x14);
  *(void **)DAT_004565b0 = DAT_004565b0;
  *(void **)((int)DAT_004565b0 + 4) = DAT_004565b0;
  *(void **)((int)DAT_004565b0 + 8) = DAT_004565b0;
  *(undefined2 *)((int)DAT_004565b0 + 0xc) = 0x101;
  FUN_004537e5(FUN_00454aa0);
  return;
}



/* Function: FUN_004428d0 */

void FUN_004428d0(void)

{
  FUN_00452f8b(&DAT_004565c0);
  FUN_004537e5(FUN_00454ab0);
  return;
}



/* Function: FUN_004428f0 */

void FUN_004428f0(void)

{
  FUN_004537e5(FUN_00454ac0);
  return;
}



/* Function: FUN_00442910 */

void FUN_00442910(void)

{
  FUN_004537e5(FUN_00454ad0);
  return;
}



/* Function: FUN_00442930 */

void FUN_00442930(void)

{
  FUN_00452f8b(&DAT_004565c1);
  FUN_004537e5(FUN_00454ae0);
  return;
}



/* Function: FUN_00442950 */

void FUN_00442950(void)

{
  FUN_004537e5(FUN_00454af0);
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



/* Function: FUN_004429b0 */

char * __fastcall FUN_004429b0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}



/* Function: FUN_004429d0 */

undefined4 * __thiscall FUN_004429d0(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  o___std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_004533ec(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00442a10 */

void __fastcall FUN_00442a10(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_00442a27 */

undefined4 * __fastcall FUN_00442a27(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* Function: FUN_00442a45 */

void FUN_00442a45(void)

{
  undefined4 local_10 [3];
  
  FUN_00442a27(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00454ee4);
}



/* Function: FUN_00442a70 */

exception * __thiscall FUN_00442a70(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}



/* Function: FUN_00442aa0 */

exception * __thiscall FUN_00442aa0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}



/* Function: FUN_00442ac3 */

void FUN_00442ac3(void)

{
  FUN_00446713("map/set too long");
  return;
}



/* Function: FUN_00442ad3 */

void FUN_00442ad3(void)

{
  FUN_00446713("string too long");
  return;
}



/* Function: FUN_00442ae3 */

undefined4 __fastcall FUN_00442ae3(HWND param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x130b;
  hWnd = GetDlgItem(param_1,0x7e7);
  LVar1 = SendMessageW(hWnd,Msg,wParam,lParam);
  return CONCAT31((int3)((uint)-LVar1 >> 8),'\x01' - (LVar1 != 0));
}



/* Function: FUN_00442b0c */

undefined4 __fastcall FUN_00442b0c(HWND param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x130b;
  hWnd = GetDlgItem(param_1,0x7e7);
  LVar1 = SendMessageW(hWnd,Msg,wParam,lParam);
  return CONCAT31((int3)((uint)-(LVar1 + -1) >> 8),'\x01' - (LVar1 + -1 != 0));
}



/* Function: FUN_00442b36 */

bool __fastcall FUN_00442b36(HWND param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x130b;
  hWnd = GetDlgItem(param_1,0x7e7);
  LVar1 = SendMessageW(hWnd,Msg,wParam,lParam);
  return LVar1 == 2;
}



/* Function: FUN_00442b5f */

void __fastcall FUN_00442b5f(HWND param_1,HWND param_2,uint *param_3,LONG param_4)

{
  uint lParam;
  undefined4 uVar1;
  int iVar2;
  wchar_t *pwVar3;
  WPARAM wParam;
  size_t c;
  HDC hdc;
  int local_828 [2];
  int local_820;
  HWND local_81c;
  tagSIZE local_818;
  uint *local_810;
  uint local_80c;
  wchar_t local_808 [1024];
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  local_810 = param_3;
  lParam = *param_3;
  local_818.cy = param_4;
  local_81c = param_2;
  local_80c = lParam;
  uVar1 = FUN_00442ae3(param_1);
  if ((char)uVar1 == '\0') {
LAB_00442bdb:
    uVar1 = FUN_00442ae3(param_1);
    if ((char)uVar1 != '\0') goto LAB_00442cf4;
    FUN_00445a67(&DAT_004565b8,local_828,&local_80c);
    if ((*(char *)(local_820 + 0xd) != '\0') || (lParam < *(uint *)(local_820 + 0x10))) {
      local_820 = DAT_004565b8;
    }
    if (local_820 == DAT_004565b8) goto LAB_00442cf4;
  }
  else {
    FUN_00445a67(&DAT_004565b0,local_828,&local_80c);
    if ((*(char *)(local_820 + 0xd) != '\0') ||
       (iVar2 = local_820, lParam < *(uint *)(local_820 + 0x10))) {
      iVar2 = DAT_004565b0;
    }
    if (iVar2 == DAT_004565b0) goto LAB_00442bdb;
  }
  pwVar3 = FUN_0044d764(local_810);
  if (pwVar3 != (wchar_t *)0x0) {
    FUN_004456ee(local_808,L"%0.3d: %s (%s)");
    wParam = SendMessageW(param_2,0x180,0,(LPARAM)local_808);
    if (wParam != 0xffffffff) {
      SendMessageW(param_2,0x19a,wParam,lParam);
    }
    c = wcsnlen(local_808,0x400);
    hdc = GetDC(param_1);
    GetTextExtentPoint32W(hdc,local_808,c,&local_818);
    if ((int)DAT_00456588 < local_818.cx) {
      SendMessageW(local_81c,0x194,local_818.cx,0);
      DAT_00456588 = local_818.cx;
    }
    ReleaseDC(param_1,hdc);
  }
LAB_00442cf4:
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00442d0b */

void __fastcall FUN_00442d0b(HWND param_1)

{
  HWND hWnd;
  HWND pHVar1;
  uint uVar2;
  HWND local_8;
  
  local_8 = param_1;
  hWnd = GetDlgItem(param_1,0x7e1);
  SendMessageW(hWnd,0x184,0,0);
  pHVar1 = (HWND)0x1;
  do {
    local_8 = pHVar1;
    FUN_00442b5f(param_1,hWnd,(uint *)&local_8,0x402bf0);
    pHVar1 = (HWND)((int)&pHVar1->unused + 1);
  } while (pHVar1 < (HWND)0x1bb);
  if (DAT_004568cc != 0) {
    pHVar1 = (HWND)0x100001;
    do {
      local_8 = pHVar1;
      FUN_00442b5f(param_1,hWnd,(uint *)&local_8,0x402bfc);
      pHVar1 = (HWND)((int)&pHVar1->unused + 1);
    } while (pHVar1 < (HWND)0x10003e);
    pHVar1 = (HWND)0x200001;
    do {
      local_8 = pHVar1;
      FUN_00442b5f(param_1,hWnd,(uint *)&local_8,0x402c08);
      pHVar1 = (HWND)((int)&pHVar1->unused + 1);
    } while (pHVar1 < (HWND)0x200110);
    if (DAT_00456b4c != 0) {
      pHVar1 = (HWND)0x300001;
      do {
        local_8 = pHVar1;
        FUN_00442b5f(param_1,hWnd,(uint *)&local_8,0x402c14);
        pHVar1 = (HWND)((int)&pHVar1->unused + 1);
      } while (pHVar1 < (HWND)0x300186);
    }
    if (DAT_004568c4 != 0) {
      pHVar1 = (HWND)0x300188;
      do {
        local_8 = pHVar1;
        FUN_00442b5f(param_1,hWnd,(uint *)&local_8,0x402c24);
        pHVar1 = (HWND)((int)&pHVar1->unused + 1);
      } while (pHVar1 < (HWND)0x3001a9);
    }
    if (DAT_00456b2c != 0) {
      pHVar1 = (HWND)0x3001ab;
      do {
        local_8 = pHVar1;
        FUN_00442b5f(param_1,hWnd,(uint *)&local_8,0x402c34);
        pHVar1 = (HWND)((int)&pHVar1->unused + 1);
      } while (pHVar1 < (HWND)0x300211);
    }
  }
  uVar2 = 1;
  do {
    local_8 = (HWND)(uVar2 | 0x40000000);
    FUN_00442b5f(param_1,hWnd,(uint *)&local_8,0x402c44);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x592);
  return;
}



/* Function: FUN_00442e5f */

void __fastcall FUN_00442e5f(HWND param_1,char param_2)

{
  bool bVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int nCmdShow;
  uint nCmdShow_00;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  
  bVar1 = FUN_00442b36(param_1);
  nCmdShow = 5;
  if (bVar1) {
    nCmdShow = 0;
  }
  bVar1 = FUN_00442b36(param_1);
  nCmdShow_00 = -(uint)bVar1 & 5;
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7e6);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,2000);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7d5);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7e0);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7d1);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7d2);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7d3);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7d4);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7f5);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7d6);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7d7);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7d8);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7d9);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7da);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7db);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7dc);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7dd);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7de);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7df);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7f4);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7e2);
  ShowWindow(pHVar2,iVar4);
  iVar4 = nCmdShow;
  pHVar2 = GetDlgItem(param_1,0x7e3);
  ShowWindow(pHVar2,iVar4);
  pHVar2 = GetDlgItem(param_1,0x7e1);
  ShowWindow(pHVar2,nCmdShow);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x7eb);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x581);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x583);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x582);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x7e8);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x7fb);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x4c0);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x7ec);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x584);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x586);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x585);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x7ea);
  ShowWindow(pHVar2,uVar6);
  uVar6 = nCmdShow_00;
  pHVar2 = GetDlgItem(param_1,0x7fc);
  ShowWindow(pHVar2,uVar6);
  pHVar2 = GetDlgItem(param_1,0x7fd);
  ShowWindow(pHVar2,nCmdShow_00);
  uVar3 = FUN_00442ae3(param_1);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_00442b0c(param_1);
    if ((char)uVar3 == '\0') {
      if (param_2 == '\0') {
        return;
      }
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x581);
      EnableWindow(pHVar2,BVar5);
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x583);
      EnableWindow(pHVar2,BVar5);
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x582);
      EnableWindow(pHVar2,BVar5);
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x7e8);
      EnableWindow(pHVar2,BVar5);
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x4c0);
      EnableWindow(pHVar2,BVar5);
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x584);
      EnableWindow(pHVar2,BVar5);
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x586);
      EnableWindow(pHVar2,BVar5);
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x585);
      EnableWindow(pHVar2,BVar5);
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x7ea);
      EnableWindow(pHVar2,BVar5);
      uVar6 = 1;
      pHVar2 = GetDlgItem(param_1,0x7fc);
    }
    else {
      SetDlgItemTextW(param_1,2000,L"Break on Severity");
      SetDlgItemTextW(param_1,0x7d5,L"Break on Category");
      SetDlgItemTextW(param_1,0x7e0,L"Break on Message ID");
      SetDlgItemTextW(param_1,0x7e6,L"Enable break on functionality");
      if (param_2 == '\0') {
        return;
      }
      BVar5 = 1;
      pHVar2 = GetDlgItem(param_1,0x7e6);
      EnableWindow(pHVar2,BVar5);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7d1);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7d2);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7d3);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7d4);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7f5);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7d6);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7d7);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7d8);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7d9);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7da);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7db);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7dc);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7dd);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7de);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7df);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7f4);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7e2);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7e3);
      EnableWindow(pHVar2,uVar6);
      uVar6 = DAT_00456aec;
      pHVar2 = GetDlgItem(param_1,0x7e1);
    }
  }
  else {
    SetDlgItemTextW(param_1,2000,L"Mute Severity");
    SetDlgItemTextW(param_1,0x7d5,L"Mute Category");
    SetDlgItemTextW(param_1,0x7e0,L"Mute Message ID");
    SetDlgItemTextW(param_1,0x7e6,L"Mute all messages");
    if (param_2 == '\0') {
      return;
    }
    BVar5 = 1;
    pHVar2 = GetDlgItem(param_1,0x7e6);
    EnableWindow(pHVar2,BVar5);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7d1);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7d2);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7d3);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7d4);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7f5);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7d6);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7d7);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7d8);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7d9);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7da);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7db);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7dc);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7dd);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7de);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7df);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7f4);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7e2);
    EnableWindow(pHVar2,(uint)bVar1);
    bVar1 = DAT_00456b48 == 0;
    pHVar2 = GetDlgItem(param_1,0x7e3);
    EnableWindow(pHVar2,(uint)bVar1);
    uVar6 = (uint)(DAT_00456b48 == 0);
    pHVar2 = GetDlgItem(param_1,0x7e1);
  }
  EnableWindow(pHVar2,uVar6);
  return;
}



/* Function: FUN_0044376f */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0044376f(HWND param_1)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  WPARAM WVar4;
  uint bEnable;
  uint uVar5;
  bool bVar6;
  int iVar7;
  wchar_t *local_48 [8];
  WCHAR local_28 [16];
  uint local_8;
  
  iVar1 = DAT_004565a8;
  iVar7 = DAT_004565a4;
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  bVar6 = DAT_004565a8 != DAT_004565a4;
  bEnable = (uint)bVar6;
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,2000);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7d5);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7e0);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7e6);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7d1);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7d2);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7d3);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7d4);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7f5);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7d6);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7d7);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7d8);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7d9);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7da);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7db);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7dc);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7dd);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7de);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7df);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7f4);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7e2);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7e3);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7e1);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x57e);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x580);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x57f);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7f8);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7f9);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7fa);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7eb);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x581);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x583);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x582);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7e8);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7fb);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x4c0);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7ec);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x584);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x586);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x585);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7ea);
  EnableWindow(pHVar2,uVar5);
  uVar5 = bEnable;
  pHVar2 = GetDlgItem(param_1,0x7fc);
  EnableWindow(pHVar2,uVar5);
  pHVar2 = GetDlgItem(param_1,0x7fd);
  EnableWindow(pHVar2,bEnable);
  if (iVar1 == iVar7) goto LAB_0044402a;
  uVar3 = FUN_00442ae3(param_1);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_00442b0c(param_1);
    if ((char)uVar3 != '\0') {
      CheckDlgButton(param_1,0x7e6,(uint)(DAT_00456aec != 0));
      CheckDlgButton(param_1,0x7d1,(uint)(DAT_00456b40 != 0));
      CheckDlgButton(param_1,0x7d2,(uint)(DAT_00456b64 != 0));
      CheckDlgButton(param_1,0x7d3,(uint)(DAT_00456af4 != 0));
      CheckDlgButton(param_1,0x7d4,(uint)(DAT_00456b18 != 0));
      CheckDlgButton(param_1,0x7f5,(uint)(DAT_0045669c != 0));
      CheckDlgButton(param_1,0x7d6,(uint)(DAT_00456af0 != 0));
      CheckDlgButton(param_1,0x7d7,(uint)(DAT_00456af8 != 0));
      CheckDlgButton(param_1,0x7d8,(uint)(DAT_004568c0 != 0));
      CheckDlgButton(param_1,0x7d9,(uint)(DAT_004566a4 != 0));
      CheckDlgButton(param_1,0x7da,(uint)(DAT_00456b5c != 0));
      CheckDlgButton(param_1,0x7db,(uint)(DAT_00456b3c != 0));
      CheckDlgButton(param_1,0x7dc,(uint)(DAT_00456b54 != 0));
      CheckDlgButton(param_1,0x7dd,(uint)(DAT_00456b30 != 0));
      CheckDlgButton(param_1,0x7de,(uint)(DAT_00456b20 != 0));
      CheckDlgButton(param_1,0x7df,(uint)(DAT_00456b58 != 0));
      iVar7 = DAT_00456b28;
      goto LAB_00443e8c;
    }
    if (DAT_00456ae8 == 0) {
      iVar7 = 0x581;
    }
    else if (DAT_00456ae8 == 1) {
      iVar7 = 0x582;
    }
    else {
      iVar7 = 0x583;
    }
    CheckRadioButton(param_1,0x581,0x583,iVar7);
    CheckDlgButton(param_1,0x7e8,(uint)(DAT_00456b34 != 0));
    local_48[1] = L"NONE";
    local_48[2] = (wchar_t *)0x1;
    local_48[3] = L"STATE_TRACKING_ONLY ";
    local_48[4] = (wchar_t *)0x2;
    local_48[5] = L"UNGUARDED_VALIDATION ";
    local_48[6] = (wchar_t *)0x3;
    local_48[7] = L"GUARDED_VALIDATION ";
    SendDlgItemMessageW(param_1,0x4c0,0x14b,0,0);
    uVar5 = 0;
    do {
      WVar4 = SendDlgItemMessageW(param_1,0x4c0,0x143,0,(LPARAM)local_48[uVar5 * 2 + 1]);
      SendDlgItemMessageW(param_1,0x4c0,0x151,WVar4,(LPARAM)local_48[uVar5 * 2]);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    SendDlgItemMessageW(param_1,0x4c0,0x14e,0,0);
    WVar4 = 0;
    do {
      if (local_48[WVar4 * 2] == DAT_00456190) {
        SendDlgItemMessageW(param_1,0x4c0,0x14e,WVar4,0);
      }
      WVar4 = WVar4 + 1;
    } while (WVar4 < 4);
    if (DAT_00456ae4 == 0) {
      iVar7 = 0x584;
    }
    else if (DAT_00456ae4 == 1) {
      iVar7 = 0x585;
    }
    else {
      iVar7 = 0x586;
    }
    CheckRadioButton(param_1,0x584,0x586,iVar7);
    CheckDlgButton(param_1,0x7ea,(uint)(DAT_004568b0 != 0));
    SendDlgItemMessageW(param_1,0x7fc,0xc5,4,0);
    FUN_0045410e(local_28,0x10,&DAT_00402e04);
    SetDlgItemTextW(param_1,0x7fc,local_28);
  }
  else {
    CheckDlgButton(param_1,0x7e6,(uint)(DAT_00456b48 != 0));
    CheckDlgButton(param_1,0x7d1,(uint)(DAT_00456b24 != 0));
    CheckDlgButton(param_1,0x7d2,(uint)(DAT_00456b38 != 0));
    CheckDlgButton(param_1,0x7d3,(uint)(DAT_004568d0 != 0));
    CheckDlgButton(param_1,0x7f5,(uint)(DAT_00456b10 != 0));
    CheckDlgButton(param_1,0x7d4,(uint)(DAT_00456b44 == 0));
    CheckDlgButton(param_1,0x7d6,(uint)(DAT_00456b60 != 0));
    CheckDlgButton(param_1,0x7d7,(uint)(DAT_00456afc != 0));
    CheckDlgButton(param_1,0x7d8,(uint)(DAT_00456b1c != 0));
    CheckDlgButton(param_1,0x7d9,(uint)(DAT_004566a0 != 0));
    CheckDlgButton(param_1,0x7da,(uint)(DAT_00456b14 != 0));
    CheckDlgButton(param_1,0x7db,(uint)(DAT_00456698 != 0));
    CheckDlgButton(param_1,0x7dc,(uint)(DAT_00456b50 != 0));
    CheckDlgButton(param_1,0x7dd,(uint)(DAT_00456b04 != 0));
    CheckDlgButton(param_1,0x7de,(uint)(DAT_00456ae0 != 0));
    CheckDlgButton(param_1,0x7df,(uint)(DAT_004568c8 != 0));
    iVar7 = DAT_00456b0c;
LAB_00443e8c:
    CheckDlgButton(param_1,0x7f4,(uint)(iVar7 != 0));
  }
  FUN_00442d0b(param_1);
LAB_0044402a:
  FUN_00442e5f(param_1,bVar6);
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00444049 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00444049(HWND param_1)

{
  HWND pHVar1;
  uint uVar2;
  UINT UVar3;
  WPARAM WVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_80 [3];
  wchar_t *local_74;
  undefined4 local_6c;
  wchar_t *local_64 [23];
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  local_6c = 0xffffffff;
  puVar5 = local_80;
  WVar4 = 0;
  local_80[0] = 3;
  UVar3 = 0x133e;
  local_74 = L"Message Settings";
  DAT_00456584 = param_1;
  pHVar1 = GetDlgItem(param_1,0x7e7);
  SendMessageW(pHVar1,UVar3,WVar4,(LPARAM)puVar5);
  puVar5 = local_80;
  local_74 = L"Break Settings";
  WVar4 = 1;
  UVar3 = 0x133e;
  pHVar1 = GetDlgItem(param_1,0x7e7);
  SendMessageW(pHVar1,UVar3,WVar4,(LPARAM)puVar5);
  puVar5 = local_80;
  local_74 = L"Debug Layer Features";
  WVar4 = 2;
  UVar3 = 0x133e;
  pHVar1 = GetDlgItem(param_1,0x7e7);
  SendMessageW(pHVar1,UVar3,WVar4,(LPARAM)puVar5);
  if (DAT_004568b8 == 1) {
    iVar6 = 0x57e;
  }
  else if (DAT_004568b8 == 2) {
    iVar6 = 0x57f;
  }
  else {
    iVar6 = 0x580;
  }
  CheckRadioButton(param_1,0x57e,0x580,iVar6);
  iVar6 = 5;
  pHVar1 = GetDlgItem(param_1,0x7f1);
  ShowWindow(pHVar1,iVar6);
  iVar6 = 0;
  pHVar1 = GetDlgItem(param_1,0x7f2);
  ShowWindow(pHVar1,iVar6);
  iVar6 = 0;
  pHVar1 = GetDlgItem(param_1,0x7f0);
  ShowWindow(pHVar1,iVar6);
  local_64[0] = (wchar_t *)0x0;
  local_64[1] = L"None";
  local_64[2] = (wchar_t *)0x9100;
  local_64[3] = L"9_1 ";
  local_64[4] = (wchar_t *)0x9200;
  local_64[5] = L"9_2 ";
  local_64[6] = (wchar_t *)0x9300;
  local_64[7] = L"9_3 ";
  local_64[8] = (wchar_t *)0xa000;
  local_64[9] = L"10_0";
  local_64[10] = (wchar_t *)0xa100;
  local_64[0xb] = L"10_1";
  local_64[0xc] = (wchar_t *)0xb000;
  local_64[0xd] = L"11_0";
  local_64[0xe] = (wchar_t *)0xb100;
  local_64[0xf] = L"11_1";
  local_64[0x10] = (wchar_t *)0xc000;
  local_64[0x11] = L"12_0";
  local_64[0x12] = (wchar_t *)0xc100;
  local_64[0x13] = L"12_1";
  local_64[0x14] = (wchar_t *)0xc200;
  local_64[0x15] = L"12_2";
  SendDlgItemMessageW(param_1,0x7f8,0x14b,0,0);
  uVar2 = 0;
  do {
    WVar4 = SendDlgItemMessageW(param_1,0x7f8,0x143,0,(LPARAM)local_64[uVar2 * 2 + 1]);
    SendDlgItemMessageW(param_1,0x7f8,0x151,WVar4,(LPARAM)local_64[uVar2 * 2]);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xb);
  SendDlgItemMessageW(param_1,0x7f8,0x14e,0,0);
  WVar4 = 0;
  do {
    if (local_64[WVar4 * 2] == DAT_004568b4) {
      SendDlgItemMessageW(param_1,0x7f8,0x14e,WVar4,0);
    }
    WVar4 = WVar4 + 1;
  } while (WVar4 < 0xb);
  CheckDlgButton(param_1,0x7f9,DAT_00456b08);
  CheckDlgButton(param_1,0x7fa,DAT_004568bc);
  FUN_0044376f(param_1);
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004442a9 */

void __fastcall FUN_004442a9(HWND param_1,int param_2,UINT *param_3,UINT *param_4)

{
  undefined4 uVar1;
  UINT UVar2;
  
  uVar1 = FUN_00442ae3(param_1);
  if ((char)uVar1 == '\0') {
    UVar2 = IsDlgButtonChecked(param_1,param_2);
    param_3 = param_4;
  }
  else {
    UVar2 = IsDlgButtonChecked(param_1,param_2);
  }
  *param_3 = UVar2;
  FUN_00446406(param_1);
  return;
}



/* Function: FUN_004442e8 */

void __fastcall FUN_004442e8(HWND param_1,LPWSTR param_2,char param_3)

{
  bool bVar1;
  short sVar2;
  size_t sVar3;
  BOOL BVar4;
  wchar_t *pwVar5;
  int iVar6;
  HWND hWnd;
  LRESULT LVar7;
  int iVar8;
  WPARAM wParam;
  bool bVar9;
  undefined1 local_214 [524];
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  if (param_2 == (LPWSTR)0x0) goto LAB_0044453e;
  PathUnquoteSpacesW(param_2);
  sVar3 = wcsnlen(param_2,0x104);
  if (sVar3 == 0) goto LAB_0044453e;
  bVar1 = false;
  bVar9 = false;
  if (sVar3 < 5) {
    bVar1 = false;
    if (2 < sVar3) goto LAB_0044439e;
  }
  else {
    if ((((param_2[sVar3 - 4] == L'.') && (sVar2 = o_towupper(param_2[sVar3 - 3]), sVar2 == 0x45))
        && (sVar2 = o_towupper(param_2[sVar3 - 2]), sVar2 == 0x58)) &&
       (sVar2 = o_towupper(param_2[sVar3 - 1]), sVar2 == 0x45)) {
      bVar1 = true;
    }
LAB_0044439e:
    bVar9 = param_2[1] == L':';
  }
  BVar4 = PathIsUNCW(param_2);
  if (BVar4 != 0) {
    bVar9 = true;
  }
  if ((sVar3 == 3) && (param_2[1] == L':')) {
    MessageBoxW(param_1,L"Settings can not be applied to root folders",L"DirectX Control Panel",0);
  }
  else {
    if (bVar9) {
      if (!bVar1) {
        pwVar5 = 
        L"This will apply these settings to all Direct3D 10.x/11.x/12.x and Direct2D applications running on in this folder or its subfolders.  This may cause side effects with other applications and should be used with caution. Continue?"
        ;
        if (DAT_0045658c == 0) {
          pwVar5 = 
          L"This will apply these settings to all Direct3D 10.x/11.x/12.x applications running on in this folder or its subfolders.  This may cause side effects with other applications and should be used with caution. Continue?"
          ;
        }
        iVar6 = MessageBoxW(param_1,pwVar5,L"DirectX Control Panel",4);
        if (iVar6 == 7) goto LAB_0044453e;
        if (param_2[sVar3 - 1] != L'\\') {
          PathAddBackslashW(param_2);
        }
      }
    }
    else if (bVar1) {
      pwVar5 = 
      L"This will apply these settings to all Direct3D 10.x/11.x/12.x and Direct2D applications matching this process name.  This may cause side effects with other applications and should be used with caution. Continue?"
      ;
      if (DAT_0045658c == 0) {
        pwVar5 = 
        L"This will apply these settings to all Direct3D 10.x/11.x/12.x applications matching this process name.  This may cause side effects with other applications and should be used with caution. Continue?"
        ;
      }
      iVar6 = MessageBoxW(param_1,pwVar5,L"DirectX Control Panel",4);
      if (iVar6 == 7) goto LAB_0044453e;
    }
    hWnd = GetDlgItem(param_1,0x7ef);
    wParam = 0;
    iVar6 = SendMessageW(hWnd,0x18b,0,0);
    if (0x200 < iVar6) {
      iVar6 = 0x200;
    }
    memset(local_214,0,0x20a);
    if (0 < iVar6) {
      do {
        LVar7 = SendMessageW(hWnd,0x18a,wParam,0);
        if (LVar7 < 0x104) {
          SendMessageW(hWnd,0x189,wParam,(LPARAM)local_214);
        }
        iVar8 = o__wcsnicmp(local_214,param_2,0x104);
        if (iVar8 == 0) goto LAB_0044453e;
        wParam = wParam + 1;
      } while ((int)wParam < iVar6);
    }
    if (param_3 != '\0') {
      SetDlgItemTextW(param_1,0x7eb,param_2);
    }
    SendMessageW(hWnd,0x180,0,(LPARAM)param_2);
  }
LAB_0044453e:
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00444560 */

void FUN_00444560(HWND param_1,int param_2,short param_3)

{
  HWND pHVar1;
  WPARAM WVar2;
  BOOL BVar3;
  LRESULT LVar4;
  HWND hWnd;
  HWND lParam;
  LPWSTR pWVar5;
  UINT Msg;
  char cVar6;
  INT_PTR nResult;
  LPWSTR pWStack_27c;
  HWND local_278;
  HWND pHStack_274;
  tagOFNW local_270;
  WCHAR local_218 [262];
  uint local_c;
  
  local_c = DAT_00456140 ^ (uint)&pWStack_27c;
  local_278 = param_1;
  if (param_2 == 0x110) {
    hWnd = GetDlgItem(param_1,0x7ef);
    SendMessageW(hWnd,0x184,0,0);
    local_278 = DAT_004565a8;
    pHVar1 = DAT_004565a4;
    if (DAT_004565a4 != DAT_004565a8) {
      do {
        lParam = pHVar1;
        if (7 < (uint)pHVar1[5].unused) {
          lParam = (HWND)pHVar1->unused;
        }
        SendMessageW(hWnd,0x180,0,(LPARAM)lParam);
        pHVar1 = pHVar1 + 6;
      } while (pHVar1 != local_278);
    }
  }
  else if (param_2 == 0x111) {
    if (param_3 == 1) {
      pHStack_274 = GetDlgItem(param_1,0x7ef);
      pWStack_27c = (LPWSTR)SendMessageW(pHStack_274,0x18b,0,0);
      if (0x200 < (int)pWStack_27c) {
        pWStack_27c = (LPWSTR)0x200;
      }
      FUN_004451ea();
      pWVar5 = pWStack_27c;
      WVar2 = 0;
      if (0 < (int)pWStack_27c) {
        do {
          LVar4 = SendMessageW(pHStack_274,0x18a,WVar2,0);
          if (LVar4 < 0x104) {
            SendMessageW(pHStack_274,0x189,WVar2,(LPARAM)local_218);
            FUN_00444887(local_218);
          }
          WVar2 = WVar2 + 1;
          param_1 = local_278;
        } while ((int)WVar2 < (int)pWVar5);
      }
      nResult = 1;
    }
    else {
      if (param_3 != 2) {
        if (param_3 == 4) {
          GetDlgItemTextW(param_1,0x7eb,local_218,0x104);
          if (local_218[0] == L'\0') goto LAB_00444868;
          cVar6 = '\0';
          pWVar5 = local_218;
        }
        else {
          if (param_3 != 0x7ec) {
            if (param_3 == 0x7ed) {
              pHVar1 = GetDlgItem(param_1,0x7ef);
              WVar2 = SendMessageW(pHVar1,0x188,0,0);
              Msg = 0x182;
            }
            else {
              if (param_3 != 0x7ee) {
                if (param_3 == 0x7ef) {
                  memset(local_218,0,0x208);
                  pHVar1 = GetDlgItem(param_1,0x7ef);
                  WVar2 = SendMessageW(pHVar1,0x188,0,0);
                  SendMessageW(pHVar1,0x189,WVar2,(LPARAM)local_218);
                  SetDlgItemTextW(param_1,0x7eb,local_218);
                }
                goto LAB_00444868;
              }
              pHVar1 = GetDlgItem(param_1,0x7ef);
              WVar2 = 0;
              Msg = 0x184;
            }
            SendMessageW(pHVar1,Msg,WVar2,0);
            goto LAB_00444868;
          }
          local_270.lStructSize = 0x58;
          local_270.hwndOwner = param_1;
          local_270.hInstance = (HINSTANCE)0x0;
          local_270.lpstrFilter = L"EXE Files";
          local_270.lpstrCustomFilter = (LPWSTR)0x0;
          local_270.nMaxCustFilter = 0;
          local_270.nFilterIndex = 1;
          local_270.lpstrFile = (LPWSTR)&DAT_004568d8;
          local_270.nMaxFile = 0x104;
          local_270.lpstrFileTitle = (LPWSTR)0x0;
          local_270.nMaxFileTitle = 0;
          local_270.lpstrInitialDir = &DAT_004566a8;
          local_270.lpstrTitle = L"Open EXE File";
          local_270.Flags = 0x1004;
          local_270.nFileOffset = 0;
          local_270.nFileExtension = 0;
          local_270.lpstrDefExt = L".exe";
          local_270.lCustData = 0;
          local_270.lpfnHook = (LPOFNHOOKPROC)0x0;
          local_270.lpTemplateName = (LPCWSTR)0x0;
          local_270.pvReserved = (void *)0x0;
          local_270.dwReserved = 0;
          local_270.FlagsEx = 0;
          if (DAT_004566a8 == 0) {
            GetCurrentDirectoryW(0x104,&DAT_004566a8);
          }
          BVar3 = GetOpenFileNameW(&local_270);
          if (BVar3 != 1) goto LAB_00444868;
          pWStack_27c = (LPWSTR)0x0;
          GetFullPathNameW((LPCWSTR)&DAT_004568d8,0x104,&DAT_004566a8,&pWStack_27c);
          if (pWStack_27c != (LPWSTR)0x0) {
            *pWStack_27c = L'\0';
          }
          cVar6 = '\x01';
          pWVar5 = (LPWSTR)&DAT_004568d8;
        }
        FUN_004442e8(param_1,pWVar5,cVar6);
        goto LAB_00444868;
      }
      nResult = 0;
    }
    EndDialog(param_1,nResult);
  }
LAB_00444868:
  FUN_004533a0(local_c ^ (uint)&pWStack_27c);
  return;
}



/* Function: FUN_00444887 */

undefined4 * FUN_00444887(short *param_1)

{
  undefined4 *puVar1;
  
  if (DAT_004565a8 == DAT_004565ac) {
    puVar1 = (undefined4 *)FUN_0044585b(DAT_004565a8,param_1);
  }
  else {
    FUN_00445c8c(DAT_004565a8,param_1);
    puVar1 = DAT_004565a8;
    DAT_004565a8 = DAT_004565a8 + 6;
  }
  return puVar1;
}



/* Function: FUN_004448c7 */

void __fastcall FUN_004448c7(HWND param_1,uint *param_2)

{
  uint lParam;
  wchar_t *pwVar1;
  WPARAM wParam;
  undefined4 uVar2;
  int iVar3;
  int local_818 [2];
  int local_810;
  uint local_80c;
  undefined1 local_808 [2048];
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  pwVar1 = FUN_0044d764(param_2);
  if (pwVar1 == (wchar_t *)0x0) goto LAB_004449e3;
  FUN_004456ee(local_808,L"%0.3d: %s (%s)");
  wParam = SendMessageW(param_1,0x180,0,(LPARAM)local_808);
  if (wParam == 0xffffffff) goto LAB_004449e3;
  lParam = *param_2;
  local_80c = lParam;
  SendMessageW(param_1,0x19a,wParam,lParam);
  uVar2 = FUN_00442ae3(DAT_00456584);
  if ((char)uVar2 == '\0') {
LAB_00444990:
    uVar2 = FUN_00442ae3(DAT_00456584);
    if ((char)uVar2 != '\0') goto LAB_004449e3;
    FUN_00445a67(&DAT_004565b8,local_818,&local_80c);
    if ((*(char *)(local_810 + 0xd) != '\0') || (lParam < *(uint *)(local_810 + 0x10))) {
      local_810 = DAT_004565b8;
    }
    if (local_810 == DAT_004565b8) goto LAB_004449e3;
  }
  else {
    FUN_00445a67(&DAT_004565b0,local_818,&local_80c);
    if ((*(char *)(local_810 + 0xd) != '\0') ||
       (iVar3 = local_810, lParam < *(uint *)(local_810 + 0x10))) {
      iVar3 = DAT_004565b0;
    }
    if (iVar3 == DAT_004565b0) goto LAB_00444990;
  }
  SendMessageW(param_1,0x185,1,wParam);
LAB_004449e3:
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00444a00 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00444a00(HWND param_1,int param_2,short param_3)

{
  HWND pHVar1;
  WPARAM wParam;
  undefined4 uVar2;
  int *piVar3;
  HWND pHVar4;
  undefined4 *this;
  HWND pHVar5;
  int iVar6;
  INT_PTR nResult;
  undefined1 auStack_102c [4];
  HWND local_1028;
  HWND pHStack_1024;
  int aiStack_1020 [2];
  int aiStack_1018 [2];
  WPARAM aWStack_1010 [1025];
  uint local_c;
  
  local_c = DAT_00456140 ^ (uint)auStack_102c;
  local_1028 = param_1;
  if (param_2 == 0x110) {
    pHVar4 = GetDlgItem(param_1,0x7e8);
    pHVar5 = (HWND)0x1;
    pHVar1 = pHVar5;
    do {
      local_1028 = pHVar1;
      FUN_004448c7(pHVar4,(uint *)&local_1028);
      pHVar1 = (HWND)((int)&pHVar1->unused + 1);
    } while (pHVar1 < (HWND)0x1bb);
    if (DAT_004568cc != 0) {
      pHVar1 = (HWND)0x100001;
      do {
        local_1028 = pHVar1;
        FUN_004448c7(pHVar4,(uint *)&local_1028);
        pHVar1 = (HWND)((int)&pHVar1->unused + 1);
      } while (pHVar1 < (HWND)0x10003e);
      pHVar1 = (HWND)0x200001;
      do {
        local_1028 = pHVar1;
        FUN_004448c7(pHVar4,(uint *)&local_1028);
        pHVar1 = (HWND)((int)&pHVar1->unused + 1);
      } while (pHVar1 < (HWND)0x200110);
      if (DAT_00456b4c != 0) {
        pHVar1 = (HWND)0x300001;
        do {
          local_1028 = pHVar1;
          FUN_004448c7(pHVar4,(uint *)&local_1028);
          pHVar1 = (HWND)((int)&pHVar1->unused + 1);
        } while (pHVar1 < (HWND)0x300186);
      }
      if (DAT_004568c4 != 0) {
        pHVar1 = (HWND)0x300188;
        do {
          local_1028 = pHVar1;
          FUN_004448c7(pHVar4,(uint *)&local_1028);
          pHVar1 = (HWND)((int)&pHVar1->unused + 1);
        } while (pHVar1 < (HWND)0x3001a9);
      }
      if (DAT_00456b2c != 0) {
        pHVar1 = (HWND)0x3001ab;
        do {
          local_1028 = pHVar1;
          FUN_004448c7(pHVar4,(uint *)&local_1028);
          pHVar1 = (HWND)((int)&pHVar1->unused + 1);
        } while (pHVar1 < (HWND)0x300211);
      }
    }
    do {
      local_1028 = (HWND)((uint)pHVar5 | 0x40000000);
      FUN_004448c7(pHVar4,(uint *)&local_1028);
      pHVar5 = (HWND)((int)&pHVar5->unused + 1);
    } while (pHVar5 < (HWND)0x592);
  }
  else if (param_2 == 0x111) {
    if (param_3 == 1) {
      pHVar1 = GetDlgItem(param_1,0x7e8);
      pHStack_1024 = pHVar1;
      wParam = SendMessageW(pHVar1,400,0,0);
      if (wParam != 0xffffffff) {
        memset(aWStack_1010,0,0x1000);
        SendMessageW(pHVar1,0x191,wParam,(LPARAM)aWStack_1010);
        pHVar1 = pHStack_1024;
        iVar6 = 0;
        if (0 < (int)wParam) {
          do {
            pHStack_1024 = (HWND)SendMessageW(pHVar1,0x199,aWStack_1010[iVar6],0);
            uVar2 = FUN_00442ae3(DAT_00456584);
            if ((char)uVar2 == '\0') {
              piVar3 = aiStack_1018;
              this = &DAT_004565b8;
            }
            else {
              piVar3 = aiStack_1020;
              this = &DAT_004565b0;
            }
            FUN_004459c9(this,piVar3,(uint *)&pHStack_1024);
            iVar6 = iVar6 + 1;
            param_1 = local_1028;
          } while (iVar6 < (int)wParam);
        }
      }
      nResult = 1;
    }
    else {
      if (param_3 != 2) goto LAB_00444c3f;
      nResult = 0;
    }
    EndDialog(param_1,nResult);
  }
LAB_00444c3f:
  FUN_004533a0(local_c ^ (uint)auStack_102c);
  return;
}



/* Function: FUN_00444c5e */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00444c5e(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  WPARAM WVar1;
  undefined4 uVar2;
  UINT UVar3;
  INT_PTR IVar4;
  int iVar5;
  undefined4 *this;
  UINT *pUVar6;
  UINT *pUVar7;
  uint uCheck;
  WPARAM WStack_103c;
  HWND pHStack_1038;
  HWND local_1034;
  WPARAM aWStack_1030 [1025];
  WCHAR local_2c [16];
  uint local_c;
  
  local_c = DAT_00456140 ^ (uint)&WStack_103c;
  local_1034 = param_1;
  if (param_2 < 0x7db) {
    if (param_2 == 0x7da) {
      pUVar7 = &DAT_00456b5c;
      pUVar6 = &DAT_00456b14;
      goto LAB_00444df9;
    }
    if (0x586 < param_2) {
      switch(param_2) {
      case 0x7d1:
        pUVar7 = &DAT_00456b40;
        pUVar6 = &DAT_00456b24;
        break;
      case 0x7d2:
        pUVar7 = &DAT_00456b64;
        pUVar6 = &DAT_00456b38;
        break;
      case 0x7d3:
        pUVar7 = &DAT_00456af4;
        pUVar6 = &DAT_004568d0;
        break;
      case 0x7d4:
        uVar2 = FUN_00442ae3(param_1);
        if ((char)uVar2 == '\0') {
          DAT_00456b18 = IsDlgButtonChecked(param_1,param_2);
        }
        else {
          UVar3 = IsDlgButtonChecked(param_1,param_2);
          DAT_00456b44 = (uint)(UVar3 == 0);
        }
        goto LAB_00444e87;
      default:
        goto switchD_00444de8_caseD_7d5;
      case 0x7d6:
        pUVar7 = &DAT_00456af0;
        pUVar6 = &DAT_00456b60;
        break;
      case 0x7d7:
        pUVar7 = &DAT_00456af8;
        pUVar6 = &DAT_00456afc;
        break;
      case 0x7d8:
        pUVar7 = &DAT_004568c0;
        pUVar6 = &DAT_00456b1c;
        break;
      case 0x7d9:
        pUVar7 = &DAT_004566a4;
        pUVar6 = &DAT_004566a0;
      }
      goto LAB_00444df9;
    }
    if (param_2 != 0x586) {
      iVar5 = DAT_00456b00;
      if (param_2 < 0x582) {
        if (param_2 == 0x581) {
          DAT_00456ae8 = 0;
          goto LAB_00444cf1;
        }
        if (param_2 == 0x4c0) {
          if (param_4 != 1) goto switchD_00444de8_caseD_7d5;
          WVar1 = SendDlgItemMessageW(param_1,0x4c0,0x147,0,0);
          DAT_00456190 = SendDlgItemMessageW(param_1,0x4c0,0x150,WVar1,0);
          iVar5 = DAT_00456ae4;
        }
        else {
          if (param_2 != 0x57e) {
            if (param_2 == 0x57f) {
              DAT_004568b8 = 2;
            }
            else {
              if (param_2 != 0x580) goto switchD_00444de8_caseD_7d5;
              DAT_004568b8 = 0;
            }
            goto LAB_00444cf1;
          }
          DAT_004568b8 = 1;
          iVar5 = DAT_00456ae4;
        }
      }
      else {
        if (param_2 != 0x582) {
          if (param_2 == 0x583) {
            DAT_00456ae8 = 2;
          }
          else {
            if (param_2 + -0x584 != 0) {
              iVar5 = param_2 + -0x584;
              if (param_2 != 0x585) goto switchD_00444de8_caseD_7d5;
              goto LAB_00444d09;
            }
            DAT_00456ae4 = 0;
          }
          goto LAB_00444cf1;
        }
        DAT_00456ae8 = 1;
        CheckRadioButton(param_1,0x584,0x586,0x585);
        iVar5 = 1;
      }
LAB_00444d09:
      DAT_00456ae4 = iVar5;
      FUN_00446406(param_1);
      goto LAB_00444e00;
    }
    DAT_00456ae4 = 2;
    CheckRadioButton(param_1,0x581,0x583,0x583);
    DAT_00456ae8 = 2;
    iVar5 = DAT_00456b00;
    goto LAB_00444cf1;
  }
  switch(param_2) {
  case 0x7db:
    pUVar7 = &DAT_00456b3c;
    pUVar6 = &DAT_00456698;
    goto LAB_00444df9;
  case 0x7dc:
    pUVar7 = &DAT_00456b54;
    pUVar6 = &DAT_00456b50;
    goto LAB_00444df9;
  case 0x7dd:
    pUVar7 = &DAT_00456b30;
    pUVar6 = &DAT_00456b04;
    goto LAB_00444df9;
  case 0x7de:
    pUVar7 = &DAT_00456b20;
    pUVar6 = &DAT_00456ae0;
    goto LAB_00444df9;
  case 0x7df:
    pUVar7 = &DAT_00456b58;
    pUVar6 = &DAT_004568c8;
    goto LAB_00444df9;
  case 0x7e2:
    IVar4 = DialogBoxParamW((HINSTANCE)0x0,(LPCWSTR)0xfa0,param_1,FUN_00444a00,0);
    if (IVar4 == 1) {
      FUN_00446406(param_1);
    }
    FUN_00442d0b(param_1);
    break;
  case 0x7e3:
    pHStack_1038 = GetDlgItem(param_1,0x7e1);
    WVar1 = SendMessageW(pHStack_1038,400,0,0);
    WStack_103c = WVar1;
    if (WVar1 != 0xffffffff) {
      memset(aWStack_1030,0,0x1000);
      SendMessageW(pHStack_1038,0x191,WVar1,(LPARAM)aWStack_1030);
      WVar1 = WStack_103c;
      iVar5 = 0;
      if (0 < (int)WStack_103c) {
        do {
          WStack_103c = SendMessageW(pHStack_1038,0x199,aWStack_1030[iVar5],0);
          uVar2 = FUN_00442ae3(DAT_00456584);
          this = &DAT_004565b0;
          if ((char)uVar2 == '\0') {
            this = &DAT_004565b8;
          }
          FUN_0044521f(this,&WStack_103c);
          iVar5 = iVar5 + 1;
          param_1 = local_1034;
        } while (iVar5 < (int)WVar1);
      }
    }
    FUN_00442d0b(param_1);
    goto LAB_00444e87;
  case 0x7e6:
    FUN_004442a9(param_1,param_2,&DAT_00456b48,&DAT_00456aec);
    FUN_00442e5f(param_1,'\x01');
    break;
  case 0x7e7:
    FUN_0044376f(param_1);
    break;
  case 0x7e8:
    DAT_00456b34 = IsDlgButtonChecked(param_1,param_2);
    goto LAB_00444e87;
  case 0x7e9:
    IVar4 = DialogBoxParamW((HINSTANCE)0x0,(LPCWSTR)0xfa1,param_1,FUN_00444560,0);
    if (IVar4 == 1) {
      FUN_00446406(param_1);
    }
    FUN_0044376f(param_1);
    FUN_00445fe1(param_1);
    break;
  case 0x7ea:
    DAT_004568b0 = IsDlgButtonChecked(param_1,param_2);
LAB_00444e87:
    FUN_00446406(param_1);
    break;
  case 0x7f4:
    pUVar7 = &DAT_00456b28;
    pUVar6 = &DAT_00456b0c;
    goto LAB_00444df9;
  case 0x7f5:
    pUVar7 = &DAT_0045669c;
    pUVar6 = &DAT_00456b10;
LAB_00444df9:
    FUN_004442a9(param_1,param_2,pUVar6,pUVar7);
    break;
  case 0x7f8:
    if (param_4 == 1) {
      WVar1 = SendDlgItemMessageW(param_1,0x7f8,0x147,0,0);
      DAT_004568b4 = SendDlgItemMessageW(param_1,0x7f8,0x150,WVar1,0);
      iVar5 = DAT_00456ae4;
      goto LAB_00444d09;
    }
    break;
  case 0x7f9:
    DAT_00456b08 = (uint)(DAT_00456b08 == 0);
    iVar5 = 0x7f9;
    uCheck = DAT_00456b08;
    goto LAB_004450bf;
  case 0x7fa:
    DAT_004568bc = (uint)(DAT_004568bc == 0);
    iVar5 = 0x7fa;
    uCheck = DAT_004568bc;
LAB_004450bf:
    CheckDlgButton(param_1,iVar5,uCheck);
    iVar5 = DAT_00456b00;
LAB_00444cf1:
    DAT_00456b00 = iVar5;
    FUN_00446406(param_1);
    goto LAB_00444e00;
  case 0x7fc:
    if (param_4 == 0x300) {
      GetDlgItemTextW(param_1,0x7fc,local_2c,0x10);
      iVar5 = o__wtoi(local_2c);
      if (iVar5 != DAT_00456b00) goto LAB_00444cf1;
    }
  }
switchD_00444de8_caseD_7d5:
LAB_00444e00:
  FUN_004533a0(local_c ^ (uint)&WStack_103c);
  return;
}



/* Function: FUN_004451ea */

void FUN_004451ea(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_004565a8;
  piVar2 = DAT_004565a4;
  if (DAT_004565a4 != DAT_004565a8) {
    do {
      FUN_00445346(piVar2);
      piVar2 = piVar2 + 6;
    } while (piVar2 != piVar1);
    DAT_004565a8 = DAT_004565a4;
  }
  return;
}



/* Function: FUN_0044521f */

int __thiscall FUN_0044521f(void *this,uint *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *local_8;
  
                    /* WARNING: Load size is inaccurate */
  piVar3 = *this;
  piVar1 = (int *)piVar3[1];
  piVar6 = piVar3;
  if (*(char *)((int)piVar1 + 0xd) == '\0') {
    piVar2 = piVar1;
    do {
      if ((uint)piVar2[4] < *param_1) {
        piVar4 = (int *)piVar2[2];
      }
      else {
        if ((*(char *)((int)piVar6 + 0xd) != '\0') && (*param_1 < (uint)piVar2[4])) {
          piVar6 = piVar2;
        }
        piVar4 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar4;
    } while (*(char *)((int)piVar4 + 0xd) == '\0');
  }
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar1 = (int *)*piVar6;
  }
  if (*(char *)((int)piVar1 + 0xd) == '\0') {
    do {
      if (*param_1 < (uint)piVar1[4]) {
        piVar2 = (int *)*piVar1;
        piVar6 = piVar1;
      }
      else {
        piVar2 = (int *)piVar1[2];
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  }
  iVar5 = 0;
  local_8 = piVar3;
  while (local_8 != piVar6) {
    iVar5 = iVar5 + 1;
    FUN_0044539f((int *)&local_8);
  }
                    /* WARNING: Load size is inaccurate */
  if ((piVar3 == (int *)**this) && (*(char *)((int)piVar6 + 0xd) != '\0')) {
    local_8 = piVar3;
    FUN_00445379((int *)this);
  }
  else {
    while (piVar3 != piVar6) {
      local_8 = piVar3;
      FUN_0044539f((int *)&local_8);
      piVar3 = FUN_004453e4(this,piVar3);
      FUN_004457f3((int)piVar3,0x14);
      piVar3 = local_8;
    }
  }
  return iVar5;
}



/* Function: thunk_FUN_00445346 */

void __fastcall thunk_FUN_00445346(int *param_1)

{
  if (7 < (uint)param_1[5]) {
    FUN_004457f3(*param_1,param_1[5] * 2 + 2);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}



/* Function: FUN_00445303 */

undefined4 * __thiscall FUN_00445303(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  puVar2 = param_1;
  puVar3 = (undefined4 *)this;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return (undefined4 *)this;
}



/* Function: FUN_00445346 */

void __fastcall FUN_00445346(int *param_1)

{
  if (7 < (uint)param_1[5]) {
    FUN_004457f3(*param_1,param_1[5] * 2 + 2);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}



/* Function: FUN_00445379 */

void __fastcall FUN_00445379(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_004457ba(param_1,*(undefined4 **)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = 0;
  return;
}



/* Function: FUN_0044539f */

int * __fastcall FUN_0044539f(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)*param_1;
  piVar3 = (int *)piVar2[2];
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0xd);
    piVar2 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar3 = piVar2;
      piVar2 = (int *)*piVar2;
    }
  }
  else {
    for (piVar3 = (int *)piVar2[1];
        (*(char *)((int)piVar3 + 0xd) == '\0' && (piVar2 == (int *)piVar3[2]));
        piVar3 = (int *)piVar3[1]) {
      *param_1 = (int)piVar3;
      piVar2 = piVar3;
    }
  }
  *param_1 = (int)piVar3;
  return param_1;
}



/* Function: FUN_004453e4 */

int * __thiscall FUN_004453e4(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *extraout_ECX;
  int *piVar7;
  void *extraout_ECX_00;
  int *piVar8;
  
  piVar4 = param_1;
  FUN_0044539f((int *)&param_1);
  piVar7 = (int *)*piVar4;
  piVar8 = (int *)piVar4[2];
  if (((*(char *)((int)piVar7 + 0xd) == '\0') &&
      (piVar8 = piVar7, *(char *)(piVar4[2] + 0xd) == '\0')) &&
     (piVar8 = (int *)param_1[2], param_1 != piVar4)) {
    piVar7[1] = (int)param_1;
    *param_1 = *piVar4;
    piVar7 = param_1;
    if (param_1 != (int *)piVar4[2]) {
      piVar7 = (int *)param_1[1];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar8[1] = (int)piVar7;
      }
      *piVar7 = (int)piVar8;
      param_1[2] = piVar4[2];
      *(int **)(piVar4[2] + 4) = param_1;
    }
                    /* WARNING: Load size is inaccurate */
    if (*(int **)(*this + 4) == piVar4) {
      *(int **)(*this + 4) = param_1;
    }
    else {
      piVar5 = (int *)piVar4[1];
      if ((int *)*piVar5 == piVar4) {
        *piVar5 = (int)param_1;
      }
      else {
        piVar5[2] = (int)param_1;
      }
    }
    param_1[1] = piVar4[1];
    iVar3 = param_1[3];
    *(char *)(param_1 + 3) = (char)piVar4[3];
    *(char *)(piVar4 + 3) = (char)iVar3;
  }
  else {
    piVar7 = (int *)piVar4[1];
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      piVar8[1] = (int)piVar7;
    }
                    /* WARNING: Load size is inaccurate */
    if (*(int **)(*this + 4) == piVar4) {
      *(int **)(*this + 4) = piVar8;
    }
    else if ((int *)*piVar7 == piVar4) {
      *piVar7 = (int)piVar8;
    }
    else {
      piVar7[2] = (int)piVar8;
    }
                    /* WARNING: Load size is inaccurate */
    if ((int *)**this == piVar4) {
      piVar5 = piVar7;
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar8 + 0xd);
        piVar6 = (int *)*piVar8;
        piVar5 = piVar8;
        while (piVar2 = piVar6, cVar1 == '\0') {
          piVar6 = (int *)*piVar2;
          cVar1 = *(char *)((int)piVar6 + 0xd);
          piVar5 = piVar2;
        }
      }
                    /* WARNING: Load size is inaccurate */
      **this = piVar5;
    }
                    /* WARNING: Load size is inaccurate */
    if (*(int **)(*this + 8) == piVar4) {
      piVar5 = piVar7;
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar5 = piVar8;
        for (piVar6 = (int *)piVar8[2]; *(char *)((int)piVar6 + 0xd) == '\0';
            piVar6 = (int *)piVar6[2]) {
          piVar5 = piVar6;
        }
      }
                    /* WARNING: Load size is inaccurate */
      *(int **)(*this + 8) = piVar5;
    }
  }
  if ((char)piVar4[3] == '\x01') {
                    /* WARNING: Load size is inaccurate */
    if (piVar8 != *(int **)(*this + 4)) {
      do {
        piVar5 = piVar7;
        if ((char)piVar8[3] != '\x01') break;
        piVar7 = (int *)*piVar5;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar5[2];
          if ((char)piVar7[3] == '\0') {
            *(undefined1 *)(piVar7 + 3) = 1;
            *(undefined1 *)(piVar5 + 3) = 0;
            FUN_004456a2(this,(int)piVar5);
            piVar7 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            if ((*(char *)(*piVar7 + 0xc) != '\x01') || (*(char *)(piVar7[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar7[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar7 + 0xc) = 1;
                *(undefined1 *)(piVar7 + 3) = 0;
                FUN_00445654(this,piVar7);
                piVar7 = (int *)piVar5[2];
              }
              *(char *)(piVar7 + 3) = (char)piVar5[3];
              *(undefined1 *)(piVar5 + 3) = 1;
              *(undefined1 *)(piVar7[2] + 0xc) = 1;
              FUN_004456a2(this,(int)piVar5);
              this = extraout_ECX;
              break;
            }
LAB_004455e4:
            *(undefined1 *)(piVar7 + 3) = 0;
          }
        }
        else {
          if ((char)piVar7[3] == '\0') {
            *(undefined1 *)(piVar7 + 3) = 1;
            *(undefined1 *)(piVar5 + 3) = 0;
            FUN_00445654(this,piVar5);
            piVar7 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            if ((*(char *)(piVar7[2] + 0xc) == '\x01') && (*(char *)(*piVar7 + 0xc) == '\x01'))
            goto LAB_004455e4;
            if (*(char *)(*piVar7 + 0xc) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0xc) = 1;
              *(undefined1 *)(piVar7 + 3) = 0;
              FUN_004456a2(this,(int)piVar7);
              piVar7 = (int *)*piVar5;
            }
            *(char *)(piVar7 + 3) = (char)piVar5[3];
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(*piVar7 + 0xc) = 1;
            FUN_00445654(this,piVar5);
            this = extraout_ECX_00;
            break;
          }
        }
                    /* WARNING: Load size is inaccurate */
        piVar7 = (int *)piVar5[1];
        piVar8 = piVar5;
      } while (piVar5 != *(int **)(*this + 4));
    }
    *(undefined1 *)(piVar8 + 3) = 1;
  }
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return piVar4;
}



/* Function: FUN_00445654 */

void __thiscall FUN_00445654(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
                    /* WARNING: Load size is inaccurate */
  if (param_1 == *(int **)(*this + 4)) {
    *(int *)(*this + 4) = iVar1;
  }
  else {
    piVar2 = (int *)param_1[1];
    if (param_1 == (int *)piVar2[2]) {
      piVar2[2] = iVar1;
    }
    else {
      *piVar2 = iVar1;
    }
  }
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}



/* Function: FUN_004456a2 */

void __thiscall FUN_004456a2(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
                    /* WARNING: Load size is inaccurate */
  if (param_1 == *(int *)(*this + 4)) {
    *(int **)(*this + 4) = piVar1;
  }
  else {
    piVar2 = *(int **)(param_1 + 4);
    if (param_1 == *piVar2) {
      *piVar2 = (int)piVar1;
    }
    else {
      piVar2[2] = (int)piVar1;
    }
  }
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}



/* Function: FUN_004456ee */

void __cdecl FUN_004456ee(undefined4 param_1,undefined4 param_2)

{
  FUN_004540eb(param_1,0x400,param_2,&stack0x0000000c);
  return;
}



/* Function: FUN_00445712 */

void __fastcall FUN_00445712(int *param_1,int *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00445346(param_1);
  }
  return;
}



/* Function: FUN_00445735 */

void __thiscall FUN_00445735(void *this,void *param_1,uint param_2)

{
  code *pcVar1;
  void *_Dst;
  undefined4 extraout_ECX;
  void *local_8;
  
  local_8 = this;
  if (param_2 < 0x7fffffff) {
    *(undefined4 *)((int)this + 0x14) = 7;
    if (param_2 < 8) {
      *(uint *)((int)this + 0x10) = param_2;
      memcpy(this,param_1,param_2 * 2);
      *(undefined2 *)(param_2 * 2 + (int)this) = 0;
    }
    else {
      local_8 = (void *)FUN_00445826(param_2,7,0x7ffffffe);
      _Dst = (void *)FUN_00445ab3(extraout_ECX,(uint *)&local_8);
      *(void **)this = _Dst;
      *(uint *)((int)this + 0x10) = param_2;
      *(void **)((int)this + 0x14) = local_8;
      memcpy(_Dst,param_1,param_2 * 2);
      *(undefined2 *)(param_2 * 2 + (int)_Dst) = 0;
    }
    return;
  }
  FUN_00442ad3();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004457ba */

void FUN_004457ba(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  while (*(char *)((int)param_2 + 0xd) == '\0') {
    FUN_004457ba(param_1,(undefined4 *)param_2[2]);
    puVar1 = (undefined4 *)*param_2;
    FUN_004457f3((int)param_2,0x14);
    param_2 = puVar1;
  }
  return;
}



/* Function: FUN_004457f3 */

void __fastcall FUN_004457f3(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((0xfff < param_2) && (iVar2 = *(int *)(param_1 + -4), 0x1f < (param_1 - iVar2) - 4U)) {
    o__invalid_parameter_noinfo_noreturn();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004533ec(iVar2);
  return;
}



/* Function: FUN_00445826 */

uint __fastcall FUN_00445826(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 | 7;
  if (((uVar2 <= param_3) && (param_2 <= param_3 - (param_2 >> 1))) &&
     (uVar1 = (param_2 >> 1) + param_2, param_3 = uVar2, uVar2 < uVar1)) {
    param_3 = uVar1;
  }
  return param_3;
}



/* Function: FUN_0044585b */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void * FUN_0044585b(undefined4 *param_1,short *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *this;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar3 = (int)param_1 - (int)DAT_004565a4;
  iVar4 = ((int)DAT_004565a8 - (int)DAT_004565a4) / 0x18;
  if (iVar4 == 0xaaaaaaa) {
    FUN_00445adb();
LAB_004459b8:
    FUN_00442a45();
    pcVar1 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar1)();
    return pvVar7;
  }
  uVar5 = (DAT_004565ac - (int)DAT_004565a4) / 0x18;
  uVar8 = 0xaaaaaaa;
  if (uVar5 <= 0xaaaaaaa - (uVar5 >> 1)) {
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar8 = iVar4 + 1U;
    if (iVar4 + 1U <= uVar5) {
      uVar8 = uVar5;
    }
    if (0xaaaaaaa < uVar8) goto LAB_004459b8;
  }
  pvVar6 = FUN_00445cd3(uVar8 * 0x18);
  this = (void *)((iVar3 / 0x18) * 0x18 + (int)pvVar6);
  FUN_00445c8c(this,param_2);
  puVar2 = DAT_004565a8;
  pvVar7 = pvVar6;
  puVar9 = DAT_004565a4;
  if (param_1 == DAT_004565a8) {
    for (; puVar9 != puVar2; puVar9 = puVar9 + 6) {
      FUN_00445303(pvVar7,puVar9);
      pvVar7 = (void *)((int)pvVar7 + 0x18);
    }
  }
  else {
    for (; DAT_004565a8 = puVar2, puVar9 != param_1; puVar9 = puVar9 + 6) {
      FUN_00445303(pvVar7,puVar9);
      pvVar7 = (void *)((int)pvVar7 + 0x18);
      puVar2 = DAT_004565a8;
    }
    if (param_1 != puVar2) {
      iVar3 = 0x18 - (int)param_1;
      do {
        FUN_00445303((void *)((int)this + iVar3 + (int)param_1),param_1);
        param_1 = param_1 + 6;
      } while (param_1 != puVar2);
    }
  }
  FUN_00445aeb((int)pvVar6,iVar4 + 1,uVar8);
  return this;
}



/* Function: Catch_All@00445994 */

void Catch_All_00445994(void)

{
  int unaff_EBP;
  
  FUN_00445712(*(int **)(unaff_EBP + -0x1c),*(int **)(unaff_EBP + -0x1c));
  FUN_00445b5d(*(int *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_004459c9 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * __thiscall FUN_004459c9(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  int local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4459d5;
  piVar4 = FUN_00445a67(this,&local_1c,param_2);
  piVar5 = (int *)*piVar4;
  iVar1 = piVar4[1];
  iVar2 = piVar4[2];
  if ((*(char *)(iVar2 + 0xd) == '\0') && (*(uint *)(iVar2 + 0x10) <= *param_2)) {
    *param_1 = iVar2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    if (*(int *)((int)this + 4) == 0xccccccc) {
      FUN_00442ac3();
      pcVar3 = (code *)swi(3);
      piVar5 = (int *)(*pcVar3)();
      return piVar5;
    }
                    /* WARNING: Load size is inaccurate */
    iVar2 = *this;
    local_8 = 0;
    local_14 = 0;
    local_18 = this;
    piVar4 = (int *)operator_new(0x14);
    piVar4[4] = *param_2;
    *piVar4 = iVar2;
    piVar4[1] = iVar2;
    piVar4[2] = iVar2;
    *(undefined2 *)(piVar4 + 3) = 0;
    piVar5 = FUN_00445b78(this,piVar5,iVar1,piVar4);
    *param_1 = (int)piVar5;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



/* Function: FUN_00445a67 */

int * __thiscall FUN_00445a67(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  puVar4 = *(undefined4 **)(iVar1 + 4);
  param_1[1] = 0;
  *param_1 = (int)puVar4;
  param_1[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = *param_2;
    do {
      *param_1 = (int)puVar4;
      uVar3 = puVar4[4];
      if (uVar2 <= uVar3) {
        param_1[2] = (int)puVar4;
        puVar4 = (undefined4 *)*puVar4;
      }
      else {
        puVar4 = (undefined4 *)puVar4[2];
      }
      param_1[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return param_1;
}



/* Function: FUN_00445ab3 */

void __fastcall FUN_00445ab3(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  
  *param_2 = *param_2 + 1;
  if (*param_2 < 0x80000000) {
    FUN_00445cd3(*param_2 * 2);
    *param_2 = *param_2 - 1;
    return;
  }
  FUN_00442a45();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00445adb */

void FUN_00445adb(void)

{
  FUN_00446713("vector too long");
  return;
}



/* Function: FUN_00445aeb */

void FUN_00445aeb(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_004565a8;
  if (DAT_004565a4 != (int *)0x0) {
    piVar2 = DAT_004565a4;
    if (DAT_004565a4 != DAT_004565a8) {
      do {
        FUN_00445346(piVar2);
        piVar2 = piVar2 + 6;
      } while (piVar2 != piVar1);
    }
    FUN_004457f3((int)DAT_004565a4,((DAT_004565ac - (int)DAT_004565a4) / 0x18) * 0x18);
  }
  DAT_004565a4 = (int *)param_1;
  DAT_004565a8 = (int *)(param_2 * 0x18 + param_1);
  DAT_004565ac = param_3 * 0x18 + param_1;
  return;
}



/* Function: FUN_00445b5d */

void FUN_00445b5d(int param_1,int param_2)

{
  FUN_004457f3(param_1,param_2 * 0x18);
  return;
}



/* Function: FUN_00445b78 */

int * __thiscall FUN_00445b78(void *this,int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  int *piVar4;
  int *piVar5;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
                    /* WARNING: Load size is inaccurate */
  piVar1 = *this;
  param_3[1] = (int)param_1;
  if (param_1 == piVar1) {
    *piVar1 = (int)param_3;
    piVar1[1] = (int)param_3;
    piVar1[2] = (int)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
  }
  else {
    if (param_2 == 0) {
      param_1[2] = (int)param_3;
      if (param_1 == (int *)piVar1[2]) {
        piVar1[2] = (int)param_3;
      }
    }
    else {
      *param_1 = (int)param_3;
      if (param_1 == (int *)*piVar1) {
        *piVar1 = (int)param_3;
      }
    }
    iVar3 = param_3[1];
    piVar5 = param_3;
    while (*(char *)(iVar3 + 0xc) == '\0') {
      piVar2 = (int *)piVar5[1];
      piVar4 = *(int **)piVar2[1];
      if (piVar2 == piVar4) {
        piVar4 = *(int **)(piVar2[1] + 8);
        if ((char)piVar4[3] == '\0') {
LAB_00445c11:
          *(undefined1 *)(piVar2 + 3) = 1;
          *(undefined1 *)(piVar4 + 3) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
          piVar5 = *(int **)(piVar5[1] + 4);
        }
        else {
          if (piVar5 == (int *)piVar2[2]) {
            FUN_004456a2(this,(int)piVar2);
            this = extraout_ECX;
            piVar5 = piVar2;
          }
          *(undefined1 *)(piVar5[1] + 0xc) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
          FUN_00445654(this,*(int **)(piVar5[1] + 4));
          this = extraout_ECX_00;
        }
      }
      else {
        if ((char)piVar4[3] == '\0') goto LAB_00445c11;
        if (piVar5 == (int *)*piVar2) {
          FUN_00445654(this,piVar2);
          this = extraout_ECX_01;
          piVar5 = piVar2;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        FUN_004456a2(this,*(int *)(piVar5[1] + 4));
        this = extraout_ECX_02;
      }
      iVar3 = piVar5[1];
    }
    *(undefined1 *)(piVar1[1] + 0xc) = 1;
  }
  return param_3;
}



/* Function: FUN_00445c76 */

void __fastcall FUN_00445c76(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004457f3(*(int *)(param_1 + 4),0x14);
    return;
  }
  return;
}



/* Function: FUN_00445c8c */

undefined4 * __thiscall FUN_00445c8c(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_00445735(this,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return (undefined4 *)this;
}



/* Function: FUN_00445cd3 */

void * __fastcall FUN_00445cd3(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  
  if (param_1 < 0x1000) {
    if (param_1 != 0) {
      uStack_8 = 0x445d0d;
      pvVar1 = operator_new(param_1);
      return pvVar1;
    }
    return (void *)0x0;
  }
  if (param_1 < param_1 + 0x23) {
    uStack_8 = 0x445cec;
    pvVar1 = operator_new(param_1 + 0x23);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = (void *)((int)pvVar1 + 0x23U & 0xffffffe0);
      *(void **)((int)pvVar2 + -4) = pvVar1;
      return pvVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00445cfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)o__invalid_parameter_noinfo_noreturn();
    return pvVar1;
  }
  FUN_00442a27(auStack_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_10,(ThrowInfo *)&DAT_00454ee4);
}



/* Function: FUN_00445d18 */

void __fastcall FUN_00445d18(int *param_1)

{
  if (*param_1 != 0) {
    FreeSid((PSID)*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FreeSid((PSID)param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    LocalFree((HLOCAL)param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    LocalFree((HLOCAL)param_1[3]);
    param_1[3] = 0;
  }
  return;
}



/* Function: FUN_00445d6a */

void __fastcall FUN_00445d6a(PSID *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HLOCAL pSecurityDescriptor;
  _EXPLICIT_ACCESS_W local_58;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  PSID local_1c;
  _SID_IDENTIFIER_AUTHORITY local_18;
  _SID_IDENTIFIER_AUTHORITY local_10;
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  FUN_00445d18((int *)param_1);
  local_10.Value[4] = '\0';
  local_10.Value[5] = '\x01';
  local_10.Value[0] = '\0';
  local_10.Value[1] = '\0';
  local_10.Value[2] = '\0';
  local_10.Value[3] = '\0';
  local_18.Value[0] = '\0';
  local_18.Value[1] = '\0';
  local_18.Value[2] = '\0';
  local_18.Value[3] = '\0';
  local_18.Value[4] = '\0';
  local_18.Value[5] = '\x0f';
  BVar1 = AllocateAndInitializeSid(&local_10,'\x01',0,0,0,0,0,0,0,0,param_1);
  if (BVar1 != 0) {
    memset(&local_58,0,0x40);
    local_58.Trustee.ptstrName = (LPWSTR)*param_1;
    local_58.grfAccessPermissions = 0xf003f;
    local_58.grfInheritance = 0;
    local_58.grfAccessMode = SET_ACCESS;
    local_58.Trustee.TrusteeForm = TRUSTEE_IS_SID;
    local_58.Trustee.TrusteeType = TRUSTEE_IS_WELL_KNOWN_GROUP;
    BVar1 = AllocateAndInitializeSid(&local_18,'\x02',2,1,0,0,0,0,0,0,param_1 + 1);
    if (BVar1 != 0) {
      local_1c = param_1[1];
      local_38 = 0x20019;
      local_34 = 2;
      local_30 = 0;
      local_24 = 0;
      local_20 = 5;
      DVar2 = SetEntriesInAclW(2,&local_58,(PACL)0x0,(PACL *)(param_1 + 2));
      if (DVar2 == 0) {
        pSecurityDescriptor = LocalAlloc(0x40,0x14);
        param_1[3] = pSecurityDescriptor;
        if (pSecurityDescriptor != (HLOCAL)0x0) {
          BVar1 = InitializeSecurityDescriptor(pSecurityDescriptor,1);
          if (BVar1 != 0) {
            BVar1 = SetSecurityDescriptorDacl(param_1[3],1,(PACL)param_1[2],0);
            if ((BVar1 != 0) && (param_1[3] != (PSID)0x0)) goto LAB_00445e74;
          }
        }
      }
    }
  }
  FUN_00445d18((int *)param_1);
LAB_00445e74:
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00445e89 */

void __fastcall FUN_00445e89(HKEY param_1)

{
  LSTATUS LVar1;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  DWORD local_c [2];
  
  local_c[1] = 4;
  local_c[0] = 0;
  local_14 = 0;
  local_10 = 0;
  local_18 = 0;
  LVar1 = RegQueryValueExW(param_1,L"DebugLayerAppControlled",(LPDWORD)0x0,local_c,(LPBYTE)&local_10
                           ,local_c + 1);
  if (LVar1 == 0) {
    DAT_00456590 = local_10;
  }
  local_c[1] = 4;
  LVar1 = RegQueryValueExW(param_1,L"DebugLayerForceOn",(LPDWORD)0x0,local_c,(LPBYTE)&local_14,
                           local_c + 1);
  if (LVar1 == 0) {
    DAT_00456594 = local_14;
  }
  local_c[1] = 4;
  LVar1 = RegQueryValueExW(param_1,L"DebugLayerLevel",(LPDWORD)0x0,local_c,(LPBYTE)&local_18,
                           local_c + 1);
  if ((LVar1 == 0) && (local_18 < 4)) {
    DAT_0045618c = local_18;
  }
  return;
}



/* Function: FUN_00445f2f */

void FUN_00445f2f(void)

{
  code *pcVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  LSTATUS LVar4;
  HKEY local_c;
  int *local_8;
  
  DAT_0045658c = 0;
  hModule = LoadLibraryExW(L"D2D1.DLL",(HANDLE)0x0,0x1000);
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"D2D1CreateFactory");
    if (pFVar2 != (FARPROC)0x0) {
      local_8 = (int *)0x0;
      (*(code *)PTR_guard_check_icall_0045c254)(0,&DAT_004037d8,0,&local_8);
      iVar3 = (*pFVar2)();
      if (-1 < iVar3) {
        DAT_0045658c = 1;
        pcVar1 = *(code **)(*local_8 + 8);
        (*(code *)PTR_guard_check_icall_0045c254)(local_8);
        (*pcVar1)();
      }
    }
    FreeLibrary(hModule);
  }
  LVar4 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\Microsoft\\Direct3D\\Direct2D",0,1,&local_c);
  if (LVar4 == 0) {
    FUN_00445e89(local_c);
    RegCloseKey(local_c);
  }
  return;
}



/* Function: FUN_00445fe1 */

void __fastcall FUN_00445fe1(HWND param_1)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  BOOL bEnable;
  uint bEnable_00;
  uint uVar4;
  
  iVar2 = DAT_004565a8;
  iVar1 = DAT_004565a4;
  bEnable_00 = (uint)(DAT_004565a8 != DAT_004565a4);
  uVar4 = bEnable_00;
  pHVar3 = GetDlgItem(param_1,0xfa4);
  EnableWindow(pHVar3,uVar4);
  uVar4 = bEnable_00;
  pHVar3 = GetDlgItem(param_1,0xfa6);
  EnableWindow(pHVar3,uVar4);
  pHVar3 = GetDlgItem(param_1,0xfa5);
  EnableWindow(pHVar3,bEnable_00);
  bEnable = 0;
  if ((iVar2 != iVar1) && (DAT_00456594 != 0)) {
    bEnable = 1;
  }
  pHVar3 = GetDlgItem(param_1,0xfa7);
  EnableWindow(pHVar3,bEnable);
  return;
}



/* Function: FUN_00446066 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00446066(HWND param_1)

{
  wchar_t *lParam;
  WPARAM wParam;
  WPARAM wParam_00;
  int nIDCheckButton;
  wchar_t *local_20 [6];
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  if (DAT_00456594 == 0) {
    if (DAT_00456590 == 0) {
      nIDCheckButton = 0xfa5;
      goto LAB_004460be;
    }
  }
  else if (DAT_00456590 == 0) {
    nIDCheckButton = 0xfa4;
    goto LAB_004460be;
  }
  nIDCheckButton = 0xfa6;
LAB_004460be:
  CheckRadioButton(param_1,0xfa4,0xfa6,nIDCheckButton);
  local_20[1] = L"Error";
  local_20[2] = (wchar_t *)0x2;
  local_20[3] = L"Warning";
  local_20[4] = (wchar_t *)0x3;
  local_20[5] = L"Information";
  SendDlgItemMessageW(param_1,0xfa7,0x14b,0,0);
  wParam_00 = 0;
  do {
    wParam = SendDlgItemMessageW(param_1,0xfa7,0x143,0,(LPARAM)local_20[wParam_00 * 2 + 1]);
    lParam = local_20[wParam_00 * 2];
    SendDlgItemMessageW(param_1,0xfa7,0x151,wParam,(LPARAM)lParam);
    if (lParam == DAT_0045618c) {
      SendDlgItemMessageW(param_1,0xfa7,0x14e,wParam_00,0);
    }
    wParam_00 = wParam_00 + 1;
  } while (wParam_00 < 3);
  FUN_00445fe1(param_1);
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00446177 */

undefined4 __fastcall FUN_00446177(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  WPARAM wParam;
  
  if (param_2 == 0xfa4) {
    DAT_00456594 = 1;
  }
  else {
    if (param_2 != 0xfa5) {
      if (param_2 != 0xfa6) {
        if ((param_2 == 0xfa7) && (param_4 == 1)) {
          wParam = SendDlgItemMessageW(param_1,0xfa7,0x147,0,0);
          DAT_0045618c = SendDlgItemMessageW(param_1,0xfa7,0x150,wParam,0);
          FUN_00446406(param_1);
          return 1;
        }
        return 0;
      }
      DAT_00456594 = 0;
      DAT_00456590 = 1;
      goto LAB_00446202;
    }
    DAT_00456594 = 0;
  }
  DAT_00456590 = 0;
LAB_00446202:
  FUN_00446406(param_1);
  FUN_00445fe1(param_1);
  return 1;
}



/* Function: FUN_0044621c */

void FUN_0044621c(void)

{
  HKEY hKey;
  char cVar1;
  LSTATUS LVar2;
  PSECURITY_DESCRIPTOR pSecurityDescriptor;
  PSID local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  HKEY local_8;
  
  LVar2 = RegCreateKeyExW((HKEY)0x80000001,L"Software\\Microsoft\\Direct3D\\Direct2D",0,(LPWSTR)0x0,
                          0,0x6001b,(LPSECURITY_ATTRIBUTES)0x0,&local_8,(LPDWORD)0x0);
  if (LVar2 == 0) {
    cVar1 = FUN_00452f1c();
    if (cVar1 != '\0') {
      local_18 = (PSID)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      pSecurityDescriptor = (PSECURITY_DESCRIPTOR)FUN_00445d6a(&local_18);
      if (pSecurityDescriptor != (PSECURITY_DESCRIPTOR)0x0) {
        RegSetKeySecurity(local_8,4,pSecurityDescriptor);
      }
      FUN_00445d18((int *)&local_18);
    }
    hKey = local_8;
    RegSetValueExW(local_8,L"DebugLayerForceOn",0,4,(BYTE *)&DAT_00456594,4);
    RegSetValueExW(hKey,L"DebugLayerAppControlled",0,4,(BYTE *)&DAT_00456590,4);
    RegSetValueExW(hKey,L"DebugLayerLevel",0,4,(BYTE *)&DAT_0045618c,4);
    RegCloseKey(local_8);
  }
  return;
}



/* Function: FUN_004462d0 */

undefined4 FUN_004462d0(undefined4 param_1,int param_2,uint *param_3)

{
  if (param_2 == 2) {
    if (*(short *)((int)param_3 + 2) == -1) {
      param_3[3] = param_3[3] & 0xffffdfff;
    }
    else {
      *param_3 = *param_3 & 0xffffdfff;
    }
  }
  return 1;
}



/* Function: FUN_00446305 */

void __fastcall FUN_00446305(undefined4 param_1,char *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  _union_1965 extraout_EDX;
  UINT UVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_ac [4];
  undefined4 local_a8 [27];
  PROPSHEETHEADERW_V2 local_3c;
  char *local_8;
  
  local_8 = param_2;
  Ordinal_17();
  FUN_0044cef1();
  FUN_00445f2f();
  local_3c.u3.ppsp = (LPCPROPSHEETPAGEW)local_ac;
  local_3c.dwSize = 0x34;
  local_3c.dwFlags = 0x109;
  local_3c.hInstance = DAT_00456598;
  UVar3 = (DAT_0045658c != 0) + 1;
  local_3c.pszCaption = (LPCWSTR)0x44f;
  local_3c.hwndParent = (HWND)0x0;
  iVar5 = 0;
  local_3c.u2.nStartPage = 0;
  local_3c.pfnCallback = FUN_004462d0;
  puVar2 = local_a8;
  local_3c.nPages = UVar3;
  do {
    puVar2[-1] = 0x38;
    puVar2[6] = iVar5 + 0x67;
    uVar1 = iVar5 + 0x67;
    iVar5 = iVar5 + 1;
    *puVar2 = 0;
    puVar2[1] = DAT_00456598;
    puVar2[2] = uVar1 & 0xffff;
    puVar2[5] = FUN_004464c0;
    pcVar4 = local_8;
    puVar2 = puVar2 + 0xe;
  } while (iVar5 < (int)UVar3);
  if (local_8 != (char *)0x0) {
    FUN_00452f13();
    local_3c.u2 = extraout_EDX;
    for (; (int)*pcVar4 - 0x30U < 10; pcVar4 = pcVar4 + 1) {
      local_3c.u2.pStartPage = (LPCWSTR)(*pcVar4 + -0x30 + local_3c.u2.nStartPage * 10);
    }
  }
  PropertySheetW(&local_3c);
  return;
}



/* Function: FUN_004463e5 */

undefined4 __thiscall FUN_004463e5(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  DAT_00456598 = param_1;
  FUN_00446305(this,param_3);
  return 0;
}



/* Function: FUN_00446406 */

void __fastcall FUN_00446406(HWND param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageW(hWnd,Msg,(WPARAM)param_1,lParam);
  DAT_004565a0 = 1;
  return;
}



/* Function: FUN_0044642d */

void __fastcall FUN_0044642d(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  INT_PTR nResult;
  
  if (param_2 == 1) {
    nResult = 1;
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 300) {
        if (DAT_004565a0 == 0) {
          return;
        }
        FUN_0044d636();
        FUN_0044621c();
        DAT_004565a0 = 0;
        return;
      }
      if (param_2 == 0x12d) {
        return;
      }
      if (param_4 == -200) {
        FUN_0044376f(param_1);
        FUN_00445fe1(param_1);
        return;
      }
      iVar1 = FUN_00444c5e(param_1,param_2,param_1,param_4);
      if (iVar1 != 0) {
        return;
      }
      FUN_00446177(param_1,param_2,extraout_ECX,param_4);
      return;
    }
    nResult = 0;
  }
  EndDialog(param_1,nResult);
  return;
}



/* Function: FUN_004464c0 */

undefined4 FUN_004464c0(HWND param_1,uint param_2,uint param_3,LPARAM *param_4)

{
  int iVar1;
  undefined4 uVar2;
  HCURSOR pHVar3;
  uint wParam;
  WPARAM wParam_00;
  LPARAM lParam;
  
  if (0x7b < param_2) {
    if (param_2 == 0x110) {
      pHVar3 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
      pHVar3 = SetCursor(pHVar3);
      if (param_4[7] == 0x67) {
        FUN_00444049(param_1);
      }
      else if (param_4[7] == 0x68) {
        FUN_00446066(param_1);
      }
      SetCursor(pHVar3);
    }
    else if (param_2 == 0x111) {
      FUN_0044642d(param_1,param_3 & 0xffff,param_3,param_3 >> 0x10);
    }
    else if (param_2 == 0x114) {
      wParam_00 = 0x12e;
      goto LAB_004465b3;
    }
    goto LAB_00446619;
  }
  if (param_2 == 0x7b) {
LAB_004464f9:
    uVar2 = 1;
  }
  else {
    if (param_2 == 2) {
      param_4 = (LPARAM *)0x0;
      wParam_00 = 0x12f;
LAB_004465b3:
      SendMessageW(param_1,0x111,wParam_00,(LPARAM)param_4);
    }
    else {
      if (param_2 != 6) {
        if (param_2 == 0x4e) {
          uVar2 = 0xfffffdd9;
          iVar1 = param_4[2];
          if (iVar1 == -0x227) {
LAB_0044656b:
            FUN_0044642d(param_1,param_3,uVar2,uVar2);
          }
          else {
            if (iVar1 == -0xcb) {
              lParam = 0;
              wParam = 2;
            }
            else if (iVar1 == -0xca) {
              lParam = 0;
              wParam = 300;
            }
            else if (iVar1 == -0xc9) {
              lParam = 0;
              wParam = 1;
            }
            else {
              uVar2 = 0xffffff38;
              if (iVar1 == -200) goto LAB_0044656b;
              if (iVar1 != -5) goto LAB_00446619;
              lParam = *param_4;
              wParam = *(ushort *)(param_4 + 1) | 0xfffb0000;
            }
            SendMessageW(param_1,0x111,wParam,lParam);
          }
        }
        else if (param_2 != 0x53) goto LAB_00446619;
        goto LAB_004464f9;
      }
      if ((short)param_3 != 0) {
        param_4 = (LPARAM *)0x0;
        wParam_00 = 0x12d;
        goto LAB_004465b3;
      }
    }
LAB_00446619:
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00446628 */

void __cdecl FUN_00446628(undefined4 param_1,undefined4 param_2)

{
  FUN_004540eb(param_1,0x100,param_2,&stack0x0000000c);
  return;
}



/* Function: exception */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,char *param_1)

{
  char *local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = param_1;
  _local_8 = CONCAT31((int3)((uint)this >> 8),1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  o___std_exception_copy(&local_c,this + 4);
  return this;
}



/* Function: FUN_00446689 */

undefined4 * __fastcall FUN_00446689(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* Function: FUN_004466a7 */

exception * __thiscall FUN_004466a7(void *this,char *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::length_error::vftable;
  return (exception *)this;
}



/* Function: FUN_004466ca */

exception * __fastcall FUN_004466ca(exception *param_1)

{
  std::exception::exception(param_1,"invalid string position");
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}



/* Function: FUN_004466f0 */

exception * __thiscall FUN_004466f0(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::logic_error::vftable;
  return (exception *)this;
}



/* Function: FUN_00446713 */

void __fastcall FUN_00446713(char *param_1)

{
  undefined1 local_10 [12];
  
  FUN_004466a7(local_10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00454f74);
}



/* Function: FUN_00446740 */

exception * __thiscall FUN_00446740(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::length_error::vftable;
  return (exception *)this;
}



/* Function: FUN_00446763 */

void FUN_00446763(void)

{
  exception local_10 [12];
  
  FUN_004466ca(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00454f2c);
}



/* Function: FUN_00446790 */

exception * __thiscall FUN_00446790(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::out_of_range::vftable;
  return (exception *)this;
}



/* Function: FUN_004467b3 */

undefined4 __fastcall FUN_004467b3(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_0044683a */

undefined4 * __fastcall FUN_0044683a(undefined4 *param_1,undefined2 param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    for (uVar1 = param_3 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = CONCAT22(param_2,param_2);
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = (uint)((param_3 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar2 = param_2;
      puVar2 = (undefined4 *)((int)puVar2 + 2);
    }
  }
  return param_1;
}



/* Function: ~locale */

/* Library Function - Single Match
    public: __thiscall std::locale::~locale(void)
   
   Library: Visual Studio 2019 Release */

void __thiscall std::locale::~locale(locale *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if (*(int **)(this + 4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 4) + 8);
    (*(code *)PTR_guard_check_icall_0045c254)();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      (*(code *)PTR_guard_check_icall_0045c254)(1);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_004468aa */

undefined4 __fastcall FUN_004468aa(char *param_1,uint param_2,int param_3)

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



/* Function: FUN_00446910 */

undefined4 __thiscall FUN_00446910(void *this,int param_1)

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
    uVar2 = FUN_004469e2((short *)((int)this + uVar3 * 2),0x104 - uVar3,uVar3,param_1);
  }
  return uVar2;
}



/* Function: FUN_00446967 */

undefined4 __fastcall
FUN_00446967(undefined2 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00446a35((int)param_1,param_2,param_1,param_3,param_4);
  }
  return uVar1;
}



/* Function: FUN_0044699e */

undefined4 __cdecl FUN_0044699e(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_00446a35((int)param_1,param_2,&stack0x00000010,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_004469e2 */

undefined4 __fastcall FUN_004469e2(short *param_1,int param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_00446a35 */

undefined4 __fastcall
FUN_00446a35(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 - 1;
  uVar3 = 0;
  uVar2 = FUN_00454092(param_1,uVar1,param_4,param_5);
  if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
    uVar3 = 0x8007007a;
  }
  else if (uVar2 != uVar1) {
    return 0;
  }
  *(undefined2 *)(param_1 + uVar1 * 2) = 0;
  return uVar3;
}



/* Function: FUN_00446a7a */

short * __cdecl FUN_00446a7a(short *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  
  FUN_00446967(param_1,(int)param_2 - (int)param_1 >> 1,param_3,&stack0x00000010);
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



/* Function: FUN_00446abf */

void __fastcall FUN_00446abf(short *param_1,int param_2,int param_3)

{
  short *psVar1;
  code *pcVar2;
  short *psVar3;
  short *local_218;
  WCHAR local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar2 = DAT_00456fa4;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004544b8;
  local_10 = ExceptionList;
  local_14 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    *param_1 = 0;
    if ((pcVar2 != (code *)0x0) && (DAT_00456fb4 != '\0')) {
      (*(code *)PTR_guard_check_icall_0045c254)(param_3,param_1,param_2,local_14);
      (*pcVar2)();
      if (*param_1 != 0) goto LAB_00446d2e;
    }
    memset(local_214,0,0x200);
    pcVar2 = DAT_00456fbc;
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      FormatMessageW(0x1200,(LPCVOID)0x0,*(DWORD *)(param_3 + 8),0x400,local_214,0x100,
                     (va_list *)0x0);
    }
    else if (DAT_00456fbc != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0045c254)(*(undefined4 *)(param_3 + 0xc),local_214,0x100);
      (*pcVar2)();
    }
    psVar1 = param_1 + param_2;
    if (*(int *)(param_3 + 0x24) == 0) {
      local_218 = FUN_00446a7a(param_1,psVar1,L"%hs!%p: ");
    }
    else {
      local_218 = FUN_00446a7a(param_1,psVar1,L"%hs(%u)\\%hs!%p: ");
    }
    if (*(int *)(param_3 + 0x54) != 0) {
      local_218 = FUN_00446a7a(local_218,psVar1,L"(caller: %p) ");
    }
    GetCurrentThreadId();
    psVar3 = FUN_00446a7a(local_218,psVar1,L"%hs(%d) tid(%x) %08X %ws");
    if (((*(int *)(param_3 + 0x14) != 0) || (*(int *)(param_3 + 0x30) != 0)) ||
       (*(int *)(param_3 + 0x20) != 0)) {
      psVar3 = FUN_00446a7a(psVar3,psVar1,L"    ");
      if (*(int *)(param_3 + 0x14) != 0) {
        psVar3 = FUN_00446a7a(psVar3,psVar1,L"Msg:[%ws] ");
      }
      if (*(int *)(param_3 + 0x30) != 0) {
        psVar3 = FUN_00446a7a(psVar3,psVar1,L"CallContext:[%hs] ");
      }
      if (*(int *)(param_3 + 0x1c) == 0) {
        if (*(int *)(param_3 + 0x20) == 0) {
          FUN_00446a7a(psVar3,psVar1,&DAT_0040395c);
        }
        else {
          FUN_00446a7a(psVar3,psVar1,L"[%hs]\n");
        }
      }
      else {
        FUN_00446a7a(psVar3,psVar1,L"[%hs(%hs)]\n");
      }
    }
  }
LAB_00446d2e:
  ExceptionList = local_10;
  FUN_004533a0(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00446d57 */

uint * __thiscall FUN_00446d57(void *this,uint *param_1)

{
  uint uVar1;
  
  *param_1 = (uint)this;
  uVar1 = FUN_00447184((uint)this);
  param_1[2] = 0;
  param_1[1] = uVar1;
  return param_1;
}



/* Function: FUN_00446d7b */

LPVOID __fastcall FUN_00446d7b(DWORD param_1,SIZE_T param_2)

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
  puStack_c = &LAB_004544e8;
  local_10 = ExceptionList;
  uVar2 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  hHeap = GetProcessHeap();
  pvVar3 = HeapAlloc(hHeap,param_1,param_2);
  if (DAT_00456b68 == (FARPROC)0x0) {
    if (DAT_00458230 != '\0') {
      ExceptionList = local_10;
      return pvVar3;
    }
    hModule = GetModuleHandleW(L"ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00456b68 = GetProcAddress(hModule,"RtlDisownModuleHeapAllocation");
    }
    DAT_00458230 = '\x01';
    if (DAT_00456b68 == (FARPROC)0x0) {
      DAT_00458230 = '\x01';
      ExceptionList = local_10;
      return pvVar3;
    }
  }
  pFVar1 = DAT_00456b68;
  (*(code *)PTR_guard_check_icall_0045c254)(hHeap,pvVar3,uVar2);
  (*pFVar1)();
  ExceptionList = local_10;
  return pvVar3;
}



/* Function: FUN_00446e2b */

undefined4 * __thiscall FUN_00446e2b(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  FUN_00446e64((undefined4 *)this);
  if (piVar2 != (int *)0x0) {
    *(int **)this = piVar2;
    *(undefined4 *)((int)this + 4) = uVar1;
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return (undefined4 *)this;
}



/* Function: FUN_00446e64 */

void __fastcall FUN_00446e64(undefined4 *param_1)

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



/* Function: FUN_00446e9b */

undefined4 __thiscall FUN_00446e9b(void *this,int param_1)

{
  int *piVar1;
  HANDLE hHeap;
  undefined1 uVar2;
  DWORD dwFlags;
  SIZE_T dwBytes;
  
  if (param_1 == 0) {
    piVar1 = (int *)FUN_00446e64((undefined4 *)this);
  }
  else {
    dwBytes = param_1 + 4;
    uVar2 = 0;
    dwFlags = 0;
    hHeap = GetProcessHeap();
    piVar1 = (int *)HeapAlloc(hHeap,dwFlags,dwBytes);
    if (piVar1 == (int *)0x0) goto LAB_00446ee5;
    *piVar1 = 0;
    FUN_00446e64((undefined4 *)this);
    *(int **)this = piVar1;
    *(int *)((int)this + 4) = param_1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = 1;
LAB_00446ee5:
  return CONCAT31((int3)((uint)piVar1 >> 8),uVar2);
}



/* Function: FUN_00446ef4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00446ef4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00457400;
  _DAT_00457608 = param_1;
  LOCK();
  DAT_00457400 = DAT_00457400 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00446f0d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00446f0d(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00458c60;
  _DAT_00456b84 = param_1;
  LOCK();
  DAT_00458c60 = DAT_00458c60 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00446f26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00446f26(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0045a4f4;
  _DAT_00458448 = param_1;
  LOCK();
  DAT_0045a4f4 = DAT_0045a4f4 + 1;
  UNLOCK();
  return iVar1 + 1;
}



/* Function: FUN_00446f40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00446f40(undefined4 param_1)

{
  _DAT_004590bc = param_1;
  return 1;
}



/* Function: FUN_00446f5a */

void FUN_00446f5a(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_00456fe4;
  if (DAT_00456fe4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)();
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00446f8a */

void FUN_00446f8a(LPCWSTR param_1,uint *param_2,char *param_3,uint param_4)

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
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
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
      FUN_004468aa(param_3,param_4,(int)pcVar5);
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00447070 */

undefined * FUN_00447070(void)

{
  if (DAT_00457a1c == '\0') {
    FUN_00446f8a((LPCWSTR)FUN_00446f40,(uint *)0x0,&DAT_00458c68,0x40);
    DAT_00457a1c = '\x01';
  }
  return &DAT_00458c68;
}



/* Function: DebugBreak */

void DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x004470a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}



/* Function: FUN_004470b0 */

void FUN_004470b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"kernelbase.dll");
  pFVar1 = GetProcAddress(hModule,"RaiseFailFastException");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_1,param_2,param_3);
    (*pFVar1)();
  }
  return;
}



/* Function: FUN_004470f1 */

uint __fastcall FUN_004470f1(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar1 = DAT_00456fec;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0045450b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int)param_1 < 0) {
    if (param_1 == 0xc0000017) {
      uVar2 = 0x8007000e;
    }
    else {
      if (DAT_00456fec != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0045c254)(param_1,DAT_00456140 ^ (uint)&stack0xfffffffc);
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



/* Function: FUN_00447184 */

uint __fastcall FUN_00447184(uint param_1)

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



/* Function: FUN_00447359 */

DWORD __fastcall
FUN_00447359(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0045450b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00451eae(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  ExceptionList = local_10;
  return DVar1;
}



/* Function: FUN_004473c4 */

uint __fastcall
FUN_004473c4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  DWORD DVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0045452e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    FUN_00451eae(param_1,param_2,param_3,0,0,param_6,0x8007029c);
    DVar1 = 0x29c;
  }
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  ExceptionList = local_10;
  return uVar2;
}



/* Function: FUN_00447445 */

void __fastcall FUN_00447445(undefined4 param_1)

{
  int unaff_retaddr;
  
  FUN_004473c4(0,0,0,param_1,param_1,unaff_retaddr);
  return;
}



/* Function: FUN_00447462 */

char * __fastcall FUN_00447462(char *param_1)

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



/* Function: FUN_00447480 */

int __fastcall FUN_00447480(short *param_1)

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



/* Function: FUN_004474a8 */

undefined1 FUN_004474a8(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_00456fc8;
  if (DAT_00456fdc != '\0') {
    return 1;
  }
  if (DAT_00456fc8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_004474d8 */

void __thiscall FUN_004474d8(void *this,undefined4 *param_1)

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
  iVar10 = FUN_00447480((short *)param_1[0x12]);
  iVar1 = FUN_00447480((short *)param_1[0xf]);
  iVar2 = FUN_00447480((short *)param_1[5]);
  pcVar3 = FUN_00447462((char *)param_1[0x11]);
  pcVar4 = FUN_00447462((char *)param_1[0xe]);
  pcVar5 = FUN_00447462((char *)param_1[0xc]);
  pcVar6 = FUN_00447462((char *)param_1[9]);
  pcVar7 = FUN_00447462((char *)param_1[8]);
  pcVar8 = FUN_00447462((char *)param_1[7]);
  pcVar9 = FUN_00447462((char *)param_1[0x13]);
  this_00 = (int *)((int)this + 0x58);
  piVar12 = (int *)*this_00;
  if (((piVar12 == (int *)0x0) || (*piVar12 != 1)) ||
     (*(char **)((int)this + 0x5c) <
      pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 + (int)pcVar6 + (int)pcVar7 +
      (int)pcVar8 + (int)pcVar9)) {
    FUN_00446e64(this_00);
    FUN_00446e9b(this_00,(int)(pcVar3 + iVar10 + iVar1 + iVar2 + (int)pcVar4 + (int)pcVar5 +
                               (int)pcVar6 + (int)pcVar7 + (int)pcVar8 + (int)pcVar9));
    piVar12 = (int *)*this_00;
  }
  pvVar13 = (void *)(-(uint)(piVar12 != (int *)0x0) & (uint)(piVar12 + 1));
  pcVar3 = (char *)(-(uint)(pvVar13 != (void *)0x0) & (int)pvVar13 + *(int *)((int)this + 0x5c));
  if (pvVar13 != (void *)0x0) {
    pcVar4 = (char *)FUN_00451ef5(pvVar13,pcVar3,(short *)param_1[5],
                                  (undefined4 *)((int)this + 0x14));
    FUN_00451f65(pcVar4,pcVar3,(char *)param_1[7],(undefined4 *)((int)this + 0x1c));
    FUN_00451f65(extraout_EAX,pcVar3,(char *)param_1[8],(undefined4 *)((int)this + 0x20));
    FUN_00451f65(extraout_EAX_00,pcVar3,(char *)param_1[9],(undefined4 *)((int)this + 0x24));
    FUN_00451f65(extraout_EAX_01,pcVar3,(char *)param_1[0xc],(undefined4 *)((int)this + 0x30));
    FUN_00451f65(extraout_EAX_02,pcVar3,(char *)param_1[0x13],(undefined4 *)((int)this + 0x4c));
    FUN_00451f65(extraout_EAX_03,pcVar3,(char *)param_1[0x11],(undefined4 *)((int)this + 0x44));
    pcVar4 = (char *)FUN_00451ef5(extraout_EAX_04,pcVar3,(short *)param_1[0x12],
                                  (undefined4 *)((int)this + 0x48));
    FUN_00451f65(pcVar4,pcVar3,(char *)param_1[0xe],(undefined4 *)((int)this + 0x38));
    pvVar13 = FUN_00451ef5(extraout_EAX_05,pcVar3,(short *)param_1[0xf],
                           (undefined4 *)((int)this + 0x3c));
    memset(pvVar13,0,(int)pcVar3 - (int)pvVar13);
  }
  return;
}



/* Function: FUN_0044766b */

undefined4 * __thiscall FUN_0044766b(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401080;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  FUN_004474d8((void *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_004476b0 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004476b0(int param_1)

{
  int *this;
  int cbMultiByte;
  undefined4 uVar1;
  WCHAR local_1008 [2048];
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  this = (int *)(param_1 + 0x6c);
  if (*this == 0) {
    FUN_00446abf(local_1008,0x800,param_1 + 0xc);
    cbMultiByte = WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_00446e9b(this,cbMultiByte);
    if ((char)uVar1 != '\0') {
      WideCharToMultiByte(0,0,local_1008,-1,(LPSTR)(-(uint)(*this != 0) & *this + 4U),cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
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
  FUN_00447790((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_004533ec(this);
  }
  return this;
}



/* Function: FUN_00447790 */

void __fastcall FUN_00447790(undefined4 *param_1)

{
  FUN_00446e64(param_1 + 0x1b);
  FUN_00446e64(param_1 + 0x19);
  *param_1 = std::exception::vftable;
  o___std_exception_destroy(param_1 + 1);
  return;
}



/* Function: FUN_004477c0 */

void FUN_004477c0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_004477d0 */

void FUN_004477d0(undefined4 *param_1)

{
  undefined1 local_78 [116];
  
  FUN_0044766b(local_78,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_00454fb0);
}



/* Function: FUN_00447800 */

exception * __thiscall FUN_00447800(void *this,exception *param_1)

{
  int iVar1;
  exception *peVar2;
  undefined4 *puVar3;
  
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00401080;
  peVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)peVar2;
    peVar2 = peVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_00446e2b((void *)((int)this + 100),(undefined4 *)(param_1 + 100));
  FUN_00446e2b((void *)((int)this + 0x6c),(undefined4 *)(param_1 + 0x6c));
  return (exception *)this;
}



/* Function: FUN_00447856 */

void __fastcall
FUN_00447856(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
  puStack_c = &LAB_00454551;
  local_10 = ExceptionList;
  uVar3 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_11 = L'\0';
  *param_13 = 0;
  iVar4 = *param_8;
  param_15[2] = iVar4;
  param_15[3] = param_8[1];
  if (param_7 == 0) {
    iVar4 = FUN_00446ef4(iVar4);
  }
  else if (param_7 == 1) {
    iVar4 = FUN_00446f0d(iVar4);
  }
  else if (param_7 == 2) {
    if (-1 < iVar4) {
      iVar4 = -0x7ff8fd64;
      FUN_00451eae(param_1,param_2,param_3,param_4,param_5,param_6,0x8007029c);
      param_15[2] = -0x7ff8fd64;
      uVar5 = FUN_00447184(0x8007029c);
      param_15[3] = uVar5;
    }
    iVar4 = FUN_00446f26(iVar4);
  }
  else if (param_7 == 3) {
    iVar4 = FUN_00446f40(iVar4);
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
  iVar6 = DAT_00457e20 + 1;
  DAT_00457e20 = DAT_00457e20 + 1;
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
  pcVar1 = DAT_00456fe8;
  if (DAT_00456fe8 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0045c254)(uVar3);
    iVar4 = (*pcVar1)();
  }
  pcVar1 = DAT_00456fac;
  param_15[0x13] = iVar4;
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fc4;
  if (DAT_00456fc4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_15,param_13,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fc0;
  if (DAT_00456fc0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_15);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fd4;
  if ((DAT_00456fd4 != (code *)0x0) && ((*(byte *)(param_15 + 1) & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_15);
    (*pcVar1)();
  }
  if (-1 < param_15[2]) {
    if (param_7 != 3) {
      FUN_00447dbb();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_15[2] = -0x7fff0001;
    uVar3 = FUN_00447184(0x8000ffff);
    param_15[3] = uVar3;
  }
  pcVar1 = DAT_00456f98;
  if (DAT_00456fa0 == '\0') {
    if (DAT_00456f98 == (code *)0x0) {
      BVar8 = IsDebuggerPresent();
      cVar2 = BVar8 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0045c254)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00447a5e;
  }
  else {
LAB_00447a5e:
    pcVar1 = DAT_00456fa4;
    if ((*(byte *)(param_15 + 1) & 2) == 0) {
      if ((DAT_00456fa4 != (code *)0x0) && (DAT_00456fb4 == '\0')) {
        (*(code *)PTR_guard_check_icall_0045c254)(param_15,param_11,0x800);
        (*pcVar1)();
      }
      if (*param_11 == L'\0') {
        FUN_00446abf(param_11,0x800,(int)param_15);
      }
      OutputDebugStringW(param_11);
      goto LAB_00447ac7;
    }
  }
  pcVar1 = DAT_00456fa4;
  if ((DAT_00456fa4 != (code *)0x0) && (DAT_00456fb4 == '\0')) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_15,0,0);
    (*pcVar1)();
  }
LAB_00447ac7:
  pcVar1 = DAT_00456fcc;
  if ((((*(byte *)(param_15 + 1) & 4) != 0) || (DAT_00456fa8 != '\0')) &&
     (DAT_00456fcc != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0045c254)();
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00447b0d */

void __fastcall FUN_00447b0d(int param_1)

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
  
  pcVar1 = DAT_00456ff0;
  if (DAT_00456ff0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_1);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fd8;
  if (DAT_00456fd8 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_1);
    (*pcVar1)();
  }
  memset(&local_54,0,0x50);
  iVar2 = *(int *)(param_1 + 0x50);
  local_54 = 0xc0000409;
  local_44 = 1;
  local_50 = 1;
  local_40 = 7;
  if (iVar2 != 0) goto LAB_00447b7a;
  uVar3 = 1;
  do {
    FUN_00446f5a(uVar3);
    iVar2 = extraout_ECX;
LAB_00447b7a:
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_44 = 3;
    uVar3 = 0;
    local_48 = iVar2;
  } while( true );
}



/* Function: FUN_00447b9a */

void __fastcall
FUN_00447b9a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  code *pcVar1;
  
  FUN_00451fee(param_1,param_2,param_3,param_1,param_1,param_6,param_7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1);
  return;
}



/* Function: FUN_00447bb8 */

void __fastcall
FUN_00447bb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  puVar2 = FUN_00446d57((void *)0x8000ffff,local_24);
  local_14 = *puVar2;
  uStack_10 = puVar2[1];
  uStack_c = puVar2[2];
  uVar3 = extraout_ECX;
  FUN_00447b9a(local_8,param_2,param_3,extraout_ECX,extraout_ECX,param_6,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar3);
  return;
}



/* Function: FUN_00447bfd */

void __fastcall FUN_00447bfd(int param_1,int param_2)

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
  pvVar2 = (void *)FUN_00447359(param_1,param_2,0x4039e0,param_1,param_1,in_stack_00000010);
  this = (void *)((uint)pvVar2 & 0xffff | 0x80070000);
  if ((int)pvVar2 < 1) {
    this = pvVar2;
  }
  puVar3 = FUN_00446d57(this,local_24);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  uVar4 = extraout_ECX;
  FUN_00447b9a(local_8,param_2,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
               extraout_ECX,extraout_ECX,in_stack_00000010,(int *)&local_14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar4);
  return;
}



/* Function: FUN_00447c5e */

void __fastcall FUN_00447c5e(undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454574;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004522cd(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00447caa */

void __fastcall FUN_00447caa(int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454597;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045230e(param_1,param_2);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00447cf4 */

void __fastcall FUN_00447cf4(int param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454597;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00447bfd(param_1,param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00447d30 */

void __fastcall FUN_00447d30(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454574;
  local_10 = ExceptionList;
  uVar2 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00447bb8(param_1,0xc27,"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",param_1
               ,param_1,unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2);
  return;
}



/* Function: FUN_00447d75 */

void __fastcall FUN_00447d75(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454597;
  local_10 = ExceptionList;
  uVar2 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00447bb8(param_1,0x137b,"onecore\\internal\\sdk\\inc\\wil\\Staging.h",param_1,param_1,
               unaff_retaddr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)(uVar2,param_1);
  return;
}



/* Function: FUN_00447dbb */

void FUN_00447dbb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}



/* Function: FUN_00447dc7 */

void FUN_00447dc7(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = CloseHandle(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00447cf4(unaff_retaddr,0x9cd);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00447df4 */

void FUN_00447df4(HANDLE param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int unaff_retaddr;
  
  BVar2 = ReleaseMutex(param_1);
  if (BVar2 != 0) {
    return;
  }
  FUN_00447cf4(unaff_retaddr,0x9d7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00447e1f */

int __fastcall FUN_00447e1f(void *param_1,int *param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int local_c [2];
  
  *param_2 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  iVar1 = FUN_00448035(param_1,local_c);
  if (iVar1 < 0) {
    FUN_00447c5e(unaff_retaddr,100);
    FUN_00447c5e(unaff_retaddr,0x6d);
  }
  else {
    *param_2 = local_c[0] << 2;
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_00447e77 */

void __thiscall FUN_00447e77(void *this,int param_1,undefined4 param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  if ((param_3 & 0x80000000) != 0 || param_4 != 0) {
    FUN_00447dbb();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_004469e2(local_214,0x104,this,param_1);
  FUN_00446910(local_214,0x403a18);
  uVar4 = param_3 & 0x7fffffff;
  uVar2 = 1;
  if (uVar4 != 0) {
    uVar2 = uVar4;
  }
  iVar3 = FUN_00450c29(this,uVar4,uVar2,local_214);
  if (iVar3 < 0) {
    FUN_00447c5e(unaff_retaddr,0x88);
  }
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00447f1a */

undefined4 __fastcall FUN_00447f1a(HANDLE param_1,int *param_2)

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
    goto LAB_00447f3d;
  }
  if ((DVar1 == 0) || (DVar1 == 0x102)) {
    local_8 = 0;
    if (DVar1 == 0) {
      BVar3 = ReleaseSemaphore(param_1,1,&local_8);
      if (BVar3 == 0) {
        iVar4 = 0xa2;
LAB_00447f3d:
        uVar2 = FUN_00447caa(unaff_retaddr,iVar4);
        return uVar2;
      }
      local_8 = local_8 + 1;
      BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
      if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
LAB_0044800b:
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
        goto LAB_00447f3d;
      }
      if (local_c == 0) {
        BVar3 = ReleaseSemaphore(param_1,1,(LPLONG)0x0);
        if ((BVar3 == 0) && (DVar1 = GetLastError(), DVar1 == 0x12a)) {
          DVar1 = WaitForSingleObject(param_1,0);
          if (DVar1 == 0xffffffff) {
            iVar4 = 0xb8;
            goto LAB_00447f3d;
          }
          if (DVar1 == 0) goto LAB_0044800b;
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
  FUN_00447c5e(unaff_retaddr,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_00448035 */

void __thiscall FUN_00448035(void *this,int *param_1)

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
  
  local_c = DAT_00456140 ^ (uint)auStack_224;
  local_21c = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_004469e2(local_218,0x104,this,(int)this);
  FUN_00446910(local_218,0x403a18);
  pvVar1 = OpenSemaphoreW(0x1f0003,0,local_218);
  if (pvVar1 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    if (DVar2 != 2) {
      FUN_00447caa(unaff_retaddr,0xcd);
    }
LAB_004480db:
    if (pvVar1 == (HANDLE)0x0) goto LAB_004480f5;
  }
  else {
    iStack_220 = 0;
    iVar3 = FUN_00447f1a(pvVar1,&iStack_220);
    if (iVar3 < 0) {
      FUN_00447c5e(unaff_retaddr,0xd3);
      goto LAB_004480db;
    }
    *local_21c = iStack_220;
    local_21c[1] = iStack_220 >> 0x1f;
  }
  FUN_00447dc7(pvVar1);
LAB_004480f5:
  FUN_004533a0(local_c ^ (uint)auStack_224);
  return;
}



/* Function: FUN_00448114 */

void __thiscall FUN_00448114(void *this,undefined1 *param_1,undefined4 param_2)

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
  iVar2 = FUN_00447480(*(short **)(param_1 + 0x14));
  pcVar3 = FUN_00447462(*(char **)(param_1 + 0x24));
  pcVar4 = FUN_00447462(*(char **)(param_1 + 0x4c));
  pcVar4 = pcVar3 + iVar2 + (int)pcVar4;
  puVar1 = (uint *)((int)this + 0x28);
  if ((*(int *)((int)this + 0x24) == 0) || ((char *)*puVar1 < pcVar4)) {
    pvVar5 = FUN_00446d7b(8,(SIZE_T)pcVar4);
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
    FUN_00451f65(pcVar3,pcVar4,*(char **)(param_1 + 0x24),(undefined4 *)((int)this + 0xc));
    FUN_00451f65(extraout_EAX,pcVar4,*(char **)(param_1 + 0x4c),(undefined4 *)((int)this + 0x14));
    _Dst = FUN_00451ef5(extraout_EAX_00,pcVar4,*(short **)(param_1 + 0x14),
                        (undefined4 *)((int)this + 0x20));
    memset(_Dst,0,(int)pcVar4 - (int)_Dst);
  }
  return;
}



/* Function: FUN_00448207 */

void __fastcall FUN_00448207(int param_1)

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



/* Function: FUN_00448276 */

void __thiscall FUN_00448276(void *this,undefined1 *param_1)

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
    puVar6 = (undefined2 *)FUN_00446d7b(8,0xdc);
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
    FUN_00448114(piVar4 + (int)uVar5 * 0xb,param_1,iVar3 + 1);
  }
  return;
}



/* Function: FUN_00448334 */

DWORD * __fastcall FUN_00448334(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  uint uVar6;
  undefined4 local_8;
  
  puVar1 = DAT_00456f9c;
  if (DAT_00456f9c != (undefined4 *)0x0) {
    local_8 = param_1;
    if (DAT_00456f9c[1] == 0) {
      local_8 = 0;
      iVar2 = FUN_00450db0(*DAT_00456f9c,&local_8);
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



/* Function: FUN_004483bd */

uint __fastcall FUN_004483bd(int param_1,int param_2,char *param_3,int param_4)

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
    uVar3 = FUN_004483bd(param_1,*(int *)(param_2 + 8),param_3,param_4);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        LOCK();
        UNLOCK();
        iVar4 = DAT_00456194 + 1;
        DAT_00456194 = DAT_00456194 + 1;
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
        pcVar5 = (char *)FUN_004467b3(pcVar7,(uint)pcVar9,(void *)piVar2[1],(uint)pcVar8);
        pcVar7[(int)(pcVar8 + -1)] = '\0';
      }
      uVar3 = CONCAT31((int3)((uint)pcVar5 >> 8),1);
    }
  }
  return uVar3;
}



/* Function: FUN_0044847c */

void __fastcall FUN_0044847c(int param_1,char *param_2,int param_3)

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
  puStack_c = &LAB_004545ba;
  local_10 = ExceptionList;
  uVar3 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ppvVar5 = &local_10;
  ExceptionList = ppvVar5;
  *param_2 = '\0';
  iVar7 = DAT_00456fb0;
  local_11 = 0;
  if (DAT_00456fb0 != 0) {
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
      uVar6 = FUN_004483bd(param_1,*pDVar9,param_2,param_3);
      if ((char)uVar6 != '\0') {
        *(char **)(param_1 + 0x30) = param_2;
      }
      DVar4 = *pDVar9;
      local_11 = 0;
      do {
        pcVar1 = *(code **)**(undefined4 **)(DVar4 + 4);
        (*(code *)PTR_guard_check_icall_0045c254)(param_1);
        bVar2 = (*pcVar1)();
        local_11 = local_11 | bVar2;
        DVar4 = *(DWORD *)(DVar4 + 8);
      } while (DVar4 != 0);
      ppvVar5 = (void **)0x0;
    }
  }
  pcVar1 = DAT_00456fb8;
  if (DAT_00456fb8 != (code *)0x0) {
    uVar8 = (uint3)((uint)ppvVar5 >> 8);
    if ((local_11 == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
      iVar7 = (uint)uVar8 << 8;
    }
    else {
      iVar7 = CONCAT31(uVar8,1);
    }
    (*(code *)PTR_guard_check_icall_0045c254)(iVar7,param_1,uVar3);
    (*pcVar1)();
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00448580 */

void FUN_00448580(undefined1 *param_1,char *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD *this;
  int iVar3;
  
  FUN_0044847c((int)param_1,param_2,param_3);
  DVar2 = GetCurrentThreadId();
  if (DAT_004598d0 != DVar2) {
    LOCK();
    iVar1 = DAT_0045a4f8 + 1;
    UNLOCK();
    iVar3 = DAT_0045a4f8 + 1;
    DAT_0045a4f8 = iVar1;
    if (iVar3 < 4) {
      DAT_004598d0 = DVar2;
      this = FUN_00448334(iVar3);
      if (this != (DWORD *)0x0) {
        FUN_00448276(this,param_1);
      }
      DAT_004598d0 = 0;
    }
    LOCK();
    DAT_0045a4f8 = DAT_0045a4f8 + -1;
    UNLOCK();
  }
  return;
}



/* Function: FUN_004485e5 */

void __fastcall FUN_004485e5(LPCSTR param_1)

{
  if (DAT_0045823c == (HMODULE)0x0) {
    DAT_0045823c = GetModuleHandleW(L"ntdll.dll");
  }
  GetProcAddress(DAT_0045823c,param_1);
  return;
}



/* Function: FUN_00448611 */

FARPROC __fastcall FUN_00448611(LPCSTR param_1)

{
  FARPROC pFVar1;
  
  if ((DAT_00458eb4 == (HMODULE)0x0) &&
     (DAT_00458eb4 = GetModuleHandleW(L"kernelbase.dll"), DAT_00458eb4 == (HMODULE)0x0)) {
    return (FARPROC)0x0;
  }
  pFVar1 = GetProcAddress(DAT_00458eb4,param_1);
  return pFVar1;
}



/* Function: FUN_00448650 */

void FUN_00448650(DWORD param_1,LPWSTR param_2,DWORD param_3)

{
  if (DAT_0045823c == (HMODULE)0x0) {
    DAT_0045823c = GetModuleHandleW(L"ntdll.dll");
  }
  FormatMessageW(0x1a00,DAT_0045823c,param_1,0x400,param_2,param_3,(va_list *)0x0);
  return;
}



/* Function: FUN_004486a0 */

void FUN_004486a0(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454597;
  local_10 = ExceptionList;
  uVar2 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_00456b74 == (code *)0x0) &&
     (DAT_00456b74 = (code *)FUN_004485e5("RtlNtStatusToDosErrorNoTeb"), DAT_00456b74 == (code *)0x0
     )) {
    ExceptionList = local_10;
    return;
  }
  pcVar1 = DAT_00456b74;
  (*(code *)PTR_guard_check_icall_0045c254)(param_1,uVar2);
  (*pcVar1)();
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00448710 */

undefined4 FUN_00448710(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454597;
  local_10 = ExceptionList;
  uVar2 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_004590b8 == (code *)0x0) &&
     (DAT_004590b8 = (code *)FUN_004485e5("RtlDllShutdownInProgress"), DAT_004590b8 == (code *)0x0))
  {
    ExceptionList = local_10;
    return 0;
  }
  pcVar1 = DAT_004590b8;
  (*(code *)PTR_guard_check_icall_0045c254)(uVar2);
  uVar3 = (*pcVar1)();
  ExceptionList = local_10;
  return uVar3;
}



/* Function: FUN_00448780 */

void FUN_00448780(undefined1 *param_1)

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
  
  puStack_c = &LAB_00454600;
  local_10 = ExceptionList;
  uVar2 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_18 = 0;
  local_34 = *(undefined4 *)(param_1 + 8);
  local_30 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *param_1;
  local_2a = DAT_00456ff4;
  local_28 = *(undefined2 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_8 = 0;
  if (DAT_004573f8 == (FARPROC)0x0) {
    DAT_004573f8 = FUN_00448611("WilFailureNotifyWatchers");
    if (DAT_004573f8 == (FARPROC)0x0) goto LAB_0044881f;
  }
  pFVar1 = DAT_004573f8;
  (*(code *)PTR_guard_check_icall_0045c254)(0,&local_34,&local_18,uVar2);
  (*pFVar1)();
LAB_0044881f:
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



/* Function: FUN_00448864 */

undefined4 FUN_00448864(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_0045802c == (code *)0x0) &&
     (DAT_0045802c = (code *)FUN_004485e5("NtQueryWnfStateData"), DAT_0045802c == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_0045802c;
  (*(code *)PTR_guard_check_icall_0045c254)();
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_004488b8 */

undefined4 __fastcall
FUN_004488b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((DAT_004594c0 == (code *)0x0) &&
     (DAT_004594c0 = (code *)FUN_004485e5("NtUpdateWnfStateData"), DAT_004594c0 == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_004594c0;
  (*(code *)PTR_guard_check_icall_0045c254)(param_1,param_2,param_3,0,0,param_6,param_7);
  uVar2 = (*pcVar1)();
  return uVar2;
}



/* Function: FUN_00448911 */

int __fastcall FUN_00448911(int param_1,int param_2)

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



/* Function: FUN_0044898e */

uint * __fastcall FUN_0044898e(uint *param_1,uint param_2,uint *param_3)

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
    FUN_00448af4(param_1,param_2,0,param_3);
    break;
  case 1:
  case 5:
    FUN_00448bc4(param_1,param_2,0,param_3);
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



/* Function: FUN_00448af4 */

void __fastcall FUN_00448af4(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_00448bc4 */

void __fastcall FUN_00448bc4(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

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



/* Function: FUN_00448c8d */

void __fastcall FUN_00448c8d(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 local_3c [10];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454623;
  local_10 = ExceptionList;
  local_14 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
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
  puVar5 = &local_44;
  if ((uVar4 & 1) != 0) {
    puVar5 = local_3c;
    local_40[0] = 2;
    local_40[1] = 1;
    local_44 = param_1;
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
  if ((uVar1 >> 5 & 0x1ff) != 0) {
    *puVar5 = param_1;
    *(ushort *)((int)puVar5 + 6) = (ushort)(uVar1 >> 5) & 0x1ff;
    *(short *)(puVar5 + 1) = (short)((uVar1 >> 0xe & 1) << 2);
    puVar5 = puVar5 + 2;
  }
  if ((uVar1 >> 0xf & 0x7f) != 0) {
    *puVar5 = param_1;
    *(ushort *)((int)puVar5 + 6) = (ushort)(uVar1 >> 0xf) & 0x7f;
    *(ushort *)(puVar5 + 1) = (ushort)((uVar1 >> 0x16 & 1) << 2) | 1;
    puVar5 = puVar5 + 2;
  }
  iVar6 = (int)puVar5 - (int)&local_44 >> 3;
  if (0 < iVar6) {
    FUN_0044acfa((int)&local_44,iVar6);
  }
  ExceptionList = local_10;
  FUN_004533a0(local_14 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00448dcf */

void __fastcall FUN_00448dcf(uint *param_1,undefined4 param_2,int param_3,uint *param_4)

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
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  local_18 = (uint)(param_3 == 0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_1c = param_2;
  if (DAT_00456b70 == (code *)0x0) {
    DAT_00456b70 = (code *)FUN_004485e5("RtlQueryFeatureConfiguration");
    if (DAT_00456b70 == (code *)0x0) {
      iVar2 = -0x3ffffec7;
      goto LAB_00448ea2;
    }
  }
  pcVar1 = DAT_00456b70;
  (*(code *)PTR_guard_check_icall_0045c254)(local_1c,local_18,local_28,&local_14);
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
LAB_00448ea2:
  if (local_20 != (uint *)0x0) {
    *local_20 = (uint)(iVar2 != -0x7fffffde);
  }
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00448ecf */

undefined4 __fastcall FUN_00448ecf(undefined4 param_1,undefined2 param_2,int param_3)

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
  if ((DAT_00456b6c == (code *)0x0) &&
     (DAT_00456b6c = (code *)FUN_004485e5("RtlNotifyFeatureUsage"), DAT_00456b6c == (code *)0x0)) {
    return 0xc0000139;
  }
  pcVar1 = DAT_00456b6c;
  (*(code *)PTR_guard_check_icall_0045c254)(&local_c);
  uVar3 = (*pcVar1)();
  return uVar3;
}



/* Function: FUN_00448f40 */

void FUN_00448f40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if ((DAT_00458858 == (FARPROC)0x0) &&
     (DAT_00458858 = FUN_00448611("LogStagedFeatureUsage"), DAT_00458858 == (FARPROC)0x0)) {
    return;
  }
  pFVar1 = DAT_00458858;
  (*(code *)PTR_guard_check_icall_0045c254)(param_1,param_2,param_3);
  (*pFVar1)();
  return;
}



/* Function: FUN_00448f84 */

void __fastcall FUN_00448f84(undefined4 *param_1,undefined1 *param_2,uint param_3,int param_4)

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



/* Function: FUN_00448fd0 */

undefined4 __thiscall FUN_00448fd0(void *this,uint param_1)

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
    pvVar2 = FUN_00446d7b(0,SVar3);
    if (pvVar2 == (LPVOID)0x0) {
      SetLastError(dwErrCode);
      return extraout_EAX & 0xffffff00;
    }
                    /* WARNING: Load size is inaccurate */
    uVar1 = *(int *)((int)this + 4) - *this;
                    /* WARNING: Load size is inaccurate */
    FUN_004467b3(pvVar2,SVar3,*this,uVar1);
    FUN_00450b63((void *)((int)this + 0xc),(int)pvVar2);
    *(LPVOID *)this = pvVar2;
    *(uint *)((int)this + 4) = uVar1 + (int)pvVar2;
    *(SIZE_T *)((int)this + 8) = (int)pvVar2 + SVar3;
    SetLastError(dwErrCode);
    uVar1 = extraout_EAX_00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* Function: FUN_0044905b */

undefined4 __thiscall FUN_0044905b(void *this,uint param_1)

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
    uVar2 = FUN_00448fd0(this,param_1);
  }
  return uVar2;
}



/* Function: FUN_00449091 */

undefined4 __thiscall FUN_00449091(void *this,void *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0044905b(this,param_2);
  if ((char)uVar2 != '\0') {
    pvVar1 = *(void **)((int)this + 4);
    uVar2 = FUN_004467b3(pvVar1,-(uint)(pvVar1 < *(void **)((int)this + 8)) &
                                *(int *)((int)this + 8) - (int)pvVar1,param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_004490d2 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004490d2(int *param_1)

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
  
  local_c = DAT_00456140 ^ (uint)&local_102c;
  iVar5 = 0;
  local_1028 = param_1;
  if (0xb < (uint)(param_1[1] - *param_1)) {
    local_1024 = 0;
    do {
      iVar7 = local_1024;
      memset(local_1010,0,0x1000);
      local_102c = 0x1000;
      local_1014 = FUN_00448864(extraout_ECX,&local_1018,local_1010,&local_102c);
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
                  goto LAB_004491e1;
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
LAB_004491e1:
            piVar4 = piVar4 + 3;
            iVar7 = local_1024;
          } while (piVar4 != local_101c);
        }
        iVar5 = FUN_004488b8(&DAT_004420a8,local_1010,uVar6,piVar2,piVar2,local_1018,1);
        param_1 = local_1028;
      }
      local_1024 = iVar7 + 1;
    } while (((iVar5 == -0x3fffffff) && (local_1024 < 100)) && (local_1014 == 0));
  }
  FUN_004533a0(local_c ^ (uint)&local_102c);
  return;
}



/* Function: FUN_00449257 */

void FUN_00449257(undefined4 param_1)

{
  code *pcVar1;
  
  if ((DAT_00456b88 == (code *)0x0) &&
     (DAT_00456b88 = (code *)FUN_004485e5("RtlUnregisterFeatureConfigurationChangeNotification"),
     DAT_00456b88 == (code *)0x0)) {
    return;
  }
  pcVar1 = DAT_00456b88;
  (*(code *)PTR_guard_check_icall_0045c254)(param_1);
  (*pcVar1)();
  return;
}



/* Function: FUN_00449295 */

int __thiscall FUN_00449295(void *this,void *param_1,size_t param_2)

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



/* Function: FUN_004492c2 */

void __thiscall FUN_004492c2(void *this,int param_1)

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
    FUN_004467b3(*(void **)((int)this + 0xc),uVar2,piVar1,uVar2);
  }
  return;
}



/* Function: FUN_00449308 */

uint __fastcall FUN_00449308(ushort *param_1)

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



/* Function: FUN_00449333 */

uint __thiscall FUN_00449333(void *this,int *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_8;
  
  pvVar3 = (void *)*param_1;
  if (*(char *)((int)this + 2) == '\x01') {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_004493ca;
    local_8 = (void *)CONCAT22((short)((uint)this >> 0x10),*(undefined2 *)((int)this + 4));
    FUN_004467b3(pvVar3,2,&local_8,2);
    pvVar3 = pvVar1;
  }
  else {
    local_8 = this;
    if (*(char *)((int)this + 2) == '\x02') {
      pvVar1 = (void *)((int)pvVar3 + 4);
      if (param_2 < pvVar1) goto LAB_004493ca;
      FUN_004467b3(pvVar3,4,(void *)((int)this + 4),4);
      pvVar3 = pvVar1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    pvVar1 = (void *)((int)pvVar3 + 2);
    if (param_2 < pvVar1) goto LAB_004493ca;
    FUN_004467b3(pvVar3,(int)param_2 - (int)pvVar3,(void *)((int)this + 8),2);
    pvVar3 = pvVar1;
  }
  pvVar1 = (void *)((uint)*(ushort *)((int)this + 8) + (int)pvVar3);
  if (pvVar1 <= param_2) {
    FUN_004467b3(pvVar3,(int)param_2 - (int)pvVar3,*(void **)((int)this + 0x10),
                 (uint)*(ushort *)((int)this + 8));
    iVar2 = (uint)*(ushort *)((int)this + 8) + (int)pvVar3;
    *param_1 = iVar2;
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
LAB_004493ca:
  return (uint)pvVar1 & 0xffffff00;
}



/* Function: FUN_004493f9 */

uint __thiscall FUN_004493f9(void *this,uint *param_1,ushort *param_2)

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
    if (param_2 < puVar2 + 1) goto LAB_00449487;
    *(ushort **)((int)this + 0xc) = puVar2;
    local_8 = (ushort *)this;
    FUN_004467b3(&local_8,2,puVar2,2);
    *(uint *)((int)this + 4) = (uint)local_8 & 0xffff;
    local_8 = puVar2 + 1;
  }
  else {
    local_8 = puVar2;
    if (cVar1 == '\x02') {
      if (param_2 < puVar2 + 2) goto LAB_00449487;
      *(ushort **)((int)this + 0xc) = puVar2;
      local_8 = (ushort *)this;
      FUN_004467b3((void *)((int)this + 4),4,puVar2,4);
      local_8 = puVar2 + 2;
    }
  }
                    /* WARNING: Load size is inaccurate */
  puVar2 = (ushort *)((int)this + 8);
  *puVar2 = *this;
  if (*this == 0) {
    puVar4 = local_8 + 1;
    if (param_2 < puVar4) goto LAB_00449487;
    puVar3 = local_8;
    local_8 = puVar4;
    FUN_004467b3(puVar2,2,puVar3,2);
  }
  puVar4 = (ushort *)((uint)*puVar2 + (int)local_8);
  if (puVar4 <= param_2) {
    *(ushort **)((int)this + 0x10) = local_8;
    *param_1 = (uint)puVar4;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
LAB_00449487:
  return (uint)puVar4 & 0xffffff00;
}



/* Function: FUN_004494a1 */

undefined2 * __thiscall
FUN_004494a1(void *this,undefined2 param_1,undefined2 param_2,undefined1 param_3,ushort param_4,
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
    uVar1 = FUN_00449308(&local_18);
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



/* Function: FUN_0044951f */

void __thiscall FUN_0044951f(void *this,int param_1)

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
  FUN_00450b63(this_00,iVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  local_10 = 0;
  FUN_00450b63((void *)(param_1 + 0x1c),local_8);
  FUN_00450b8d(&local_10);
  uVar4 = *(undefined1 *)((int)local_c + 0x20);
  *(undefined1 *)((int)local_c + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined1 *)((int)local_c + 0x21);
  *(undefined1 *)((int)local_c + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  return;
}



/* Function: FUN_004495a8 */

void __thiscall FUN_004495a8(void *this,short *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  HANDLE hHeap;
  undefined4 unaff_retaddr;
  DWORD dwFlags;
  LPVOID lpMem;
  
  if (param_3 < 10) {
    FUN_00447d75(unaff_retaddr);
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
        || (*(char *)((int)param_1 + 9) != *(char *)((int)this + 8))))) goto LAB_0044964b;
  }
  if (9 < param_2) {
    return;
  }
LAB_0044964b:
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



/* Function: FUN_00449693 */

void FUN_00449693(void)

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
      uVar5 = FUN_004493f9((void *)(unaff_EBP + -0x44),(uint *)(unaff_EBP + -0x14),
                           *(ushort **)(extraout_ECX + 0x14));
      if ((char)uVar5 == '\0') {
        FUN_00452363(*(int *)(unaff_EBX + 8));
LAB_00449792:
        __EH_epilog3_align();
        return;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    } while (*(int *)(unaff_EBP + -0x40) == 0);
    do {
      uVar5 = FUN_004493f9((void *)(unaff_EBP + -0x58),(uint *)(unaff_EBP + -0x14),
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
        FUN_00447dbb();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = *(code **)(*piVar2 + 0x10);
      (*(code *)PTR_guard_check_icall_0045c254)
                (unaff_EBP + -0x2c,unaff_EBP + -0x28,unaff_EBP + -0x24,unaff_EBP + -0x20,
                 unaff_EBP + -0x1c);
      cVar4 = (*pcVar3)();
      if (cVar4 == '\0') {
        FUN_00452363(*(int *)(unaff_EBX + 8));
        goto LAB_00449792;
      }
      uVar5 = *(int *)(unaff_EBP + -0x18) + 1;
      *(uint *)(unaff_EBP + -0x18) = uVar5;
    } while (uVar5 < *(uint *)(unaff_EBP + -0x40));
  } while( true );
}



/* Function: FUN_004497b2 */

undefined4 __thiscall
FUN_004497b2(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  short *local_18;
  undefined4 uStack_14;
  int iStack_10;
  int aiStack_c [2];
  
  uVar2 = FUN_00449abe(this,param_1,param_2,param_3,param_4,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = param_4 + 0x20 + param_2;
    if (*(int *)((int)this + 0x10) == 0) {
      local_18 = (short *)0x0;
      uStack_14 = 0;
      iStack_10 = 0;
      aiStack_c[0] = 0;
      uVar2 = FUN_0044905b(&local_18,uVar3 + 10);
      if ((char)uVar2 != '\0') {
        FUN_004495a8(this,local_18,0,iStack_10 - (int)local_18);
        iVar1 = aiStack_c[0];
        aiStack_c[0] = 0;
        FUN_00450b63((void *)((int)this + 0x1c),iVar1);
        *(undefined1 *)((int)this + 0x22) = 1;
      }
      FUN_00450b8d(aiStack_c);
    }
    else if (*(char *)((int)this + 0x22) != '\0') {
      FUN_0044905b((int *)((int)this + 0x10),uVar3);
    }
    uVar2 = FUN_00449abe(this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}



/* Function: FUN_0044986a */

uint __thiscall FUN_0044986a(void *this,uint param_1,uint param_2,void *param_3,size_t param_4)

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
      FUN_004493f9(&local_20,&local_8,*(ushort **)((int)local_c + 0x14));
      iVar1 = FUN_00449295(&local_20,param_3,param_4);
      if (0 < iVar1) {
        uVar2 = param_2 + (-1 - uVar2);
        param_1 = local_8;
      }
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return param_1;
}



/* Function: FUN_004498f5 */

uint __thiscall
FUN_004498f5(void *this,void *param_1,uint param_2,void *param_3,size_t param_4,int param_5)

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
        uVar1 = FUN_004493f9(&local_28,&local_10,*(ushort **)((int)this + 0x14));
        if ((char)uVar1 == '\0') {
          FUN_004492c2(param_1,local_c);
          uVar1 = local_14;
          goto LAB_004499eb;
        }
        local_14 = FUN_00449295(&local_28,param_3,param_4);
        uVar1 = local_14;
        if ((int)local_14 < 1) goto LAB_004499eb;
        local_c = local_c + 1;
        param_2 = local_10;
      } while (local_c < *(uint *)((int)param_1 + 4));
    }
  }
  else {
    uVar1 = (*(int *)((int)this + 0x14) - param_2) / *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_004492c2(param_1,uVar1);
    }
    uVar1 = *(int *)((int)this + 0xc) * *(int *)((int)param_1 + 4) + param_2;
    param_2 = FUN_0044986a(this,param_2,*(uint *)((int)param_1 + 4),param_3,param_4);
    if (param_2 < uVar1) {
      local_14 = param_2;
      FUN_004493f9(&local_28,&local_14,*(ushort **)((int)this + 0x14));
      uVar1 = FUN_00449295(&local_28,param_3,param_4);
LAB_004499eb:
      if (uVar1 == 0) {
        local_5 = local_26 != '\0';
        if (local_26 != '\0') {
          FUN_004492c2(&local_28,local_24 + param_5);
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



/* Function: FUN_00449a2b */

uint __thiscall FUN_00449a2b(void *this,void *param_1,uint param_2)

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
        uVar2 = FUN_004493f9(&local_18,&param_2,*(ushort **)((int)this + 0x14));
        if ((char)uVar2 == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 4));
    }
    FUN_004492c2(param_1,uVar1);
  }
  else {
    uVar1 = (uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) /
            *(uint *)((int)this + 0xc);
    if (uVar1 < *(uint *)((int)param_1 + 4)) {
      FUN_004492c2(param_1,uVar1);
    }
    param_2 = param_2 + *(int *)((int)param_1 + 4) * *(int *)((int)this + 0xc);
  }
  return param_2;
}



/* Function: FUN_00449abe */

uint __thiscall
FUN_00449abe(void *this,void *param_1,size_t param_2,void *param_3,size_t param_4,int param_5)

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
      uVar2 = FUN_004493f9(&local_24,(uint *)&local_c,*(ushort **)((int)this + 0x14));
      if ((char)uVar2 == '\0') break;
      iVar1 = FUN_00449295(&local_24,param_1,param_2);
      if (iVar1 < 0) {
LAB_00449c09:
        local_c = pvVar4;
        if ((char)uVar2 != '\0') goto LAB_00449b47;
        break;
      }
      if (iVar1 == 0) {
        pvVar4 = (void *)FUN_004498f5(this,&local_24,(uint)local_c,param_3,param_4,param_5);
        if (pvVar4 != (void *)0x0) {
          local_5 = '\x01';
          goto LAB_00449c09;
        }
        goto LAB_00449bf9;
      }
      pvVar4 = (void *)FUN_00449a2b(this,&local_24,(uint)local_c);
    }
    *(void **)((int)this + 0x14) = local_c;
LAB_00449b47:
    pvVar4 = local_c;
    uVar2 = 0;
    if (local_5 == '\0') {
      local_18 = 0;
      local_1c = (undefined2)param_2;
      local_20 = 1;
      local_14 = param_1;
      uVar2 = FUN_00449308(&local_24);
    }
    local_38 = *(ushort *)((int)this + 6);
    local_2c = 0;
    local_36 = *(undefined1 *)((int)this + 8);
    local_34 = param_5;
    local_30 = (undefined2)param_4;
    local_28 = param_3;
    local_10 = FUN_00449308(&local_38);
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
            goto LAB_00449c37;
          }
          puVar3 = (undefined4 *)o__errno();
          *puVar3 = 0x22;
        }
        o__invalid_parameter_noinfo();
      }
LAB_00449c37:
      pvVar4 = (void *)(*(int *)((int)this + 0x14) + local_10);
      *(void **)((int)this + 0x14) = pvVar4;
      if (local_5 == '\0') {
        FUN_00449333(&local_24,(int *)&local_c,pvVar4);
      }
      else if (local_22 != '\0') {
        FUN_004492c2(&local_24,local_20 + 1);
      }
      pvVar4 = (void *)FUN_00449333(&local_38,(int *)&local_c,*(void **)((int)this + 0x14));
      *(undefined1 *)((int)this + 0x20) = 1;
LAB_00449bf9:
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



/* Function: FUN_00449c8f */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00449c8f(uint param_1,int param_2,undefined2 *param_3)

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
  puStack_18 = &LAB_00454693;
  local_1c = ExceptionList;
  local_24 = DAT_00456140 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_104c = param_1 + param_2 * 8;
  local_1038 = 0;
  local_1044 = 0;
  local_1048 = param_3;
  local_1034 = param_1;
  while( true ) {
    FUN_004494a1(local_107c,*local_1048,local_1048[1],*(undefined1 *)(local_1048 + 2),local_1048[3],
                 *(undefined1 *)(local_1048 + 4));
    local_14 = 0;
    local_1030 = 0x1000;
    uVar2 = FUN_00448864(extraout_ECX,&local_103c,local_1028,&local_1030);
    FUN_004470f1(uVar2);
    if (uVar2 != 0) {
      local_103c = 0;
      local_1030 = 0;
    }
    FUN_004495a8(local_107c,local_1028,local_1030,0x1000);
    if (local_105b != '\0') break;
    local_10bc = &local_1040;
    local_1040 = 0;
    puStack_10b8 = &local_1044;
    local_10c0 = &PTR_FUN_0040106c;
    puStack_10b4 = local_107c;
    local_1088 = &local_10c0;
    local_1058 = local_10bc;
    local_1054 = puStack_10b8;
    local_1050 = puStack_10b4;
    local_1029 = FUN_00449693();
    uVar2 = local_1034;
    if (local_105c == '\0') {
LAB_00449e67:
      uVar2 = uVar2 + 8;
      local_1044 = local_1040;
      local_1034 = uVar2;
    }
    else {
      iVar3 = local_1068 - local_106c;
      iVar3 = FUN_004488b8(local_1034,local_106c,iVar3,iVar3,iVar3,local_103c,1);
      if (iVar3 != -0x3fffffff) {
        if (iVar3 != 0) {
          FUN_004488b8(uVar2,local_106c,local_1068 - local_106c,extraout_ECX_00,extraout_ECX_00,0,0)
          ;
        }
        goto LAB_00449e67;
      }
      local_1038 = local_1038 + 1;
      local_1029 = '\0';
    }
    uVar1 = local_1038;
    local_14 = 0xffffffff;
    FUN_00450b8d(&local_1060);
    if (((local_1029 != '\0') || (local_104c <= uVar2)) || (0x31 < uVar1)) goto LAB_00449ebe;
  }
  FUN_00450b8d(&local_1060);
LAB_00449ebe:
  ExceptionList = local_1c;
  FUN_004533a0(local_24 ^ (uint)&stack0xfffffff0);
  return;
}



/* Function: FUN_00449ee4 */

void __fastcall FUN_00449ee4(int param_1)

{
  FUN_00450b8d((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_00449ef2 */

void * __fastcall FUN_00449ef2(void *param_1)

{
  FUN_004494a1(param_1,0,4,1,4,0);
  FUN_004494a1((void *)((int)param_1 + 0x24),0,4,1,4,2);
  FUN_004494a1((void *)((int)param_1 + 0x48),0,4,1,0,1);
  return param_1;
}



/* Function: FUN_00449f34 */

void __fastcall FUN_00449f34(undefined2 *param_1)

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
  
  local_c = DAT_00456140 ^ (uint)&local_3c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    local_38 = DAT_0044206c;
    local_3c = DAT_00442068;
    local_30 = DAT_0044205c;
    local_34 = DAT_00442058;
    local_28 = DAT_0044209c;
    local_2c = DAT_00442098;
    FUN_00449c8f((uint)&local_3c,3,param_1);
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    local_3c = DAT_004420a0;
    local_34 = DAT_00442030;
    local_38 = DAT_004420a4;
    local_2c = DAT_00442060;
    local_30 = DAT_00442034;
    local_28 = DAT_00442064;
    FUN_00449c8f((uint)&local_3c,3,param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    local_3c = DAT_00442090;
    local_34 = DAT_00442028;
    local_38 = DAT_00442094;
    local_2c = DAT_00442080;
    local_30 = DAT_0044202c;
    local_24 = DAT_00442038;
    local_28 = DAT_00442084;
    local_1c = DAT_00442040;
    local_20 = DAT_0044203c;
    local_14 = DAT_00442088;
    local_18 = DAT_00442044;
    local_10 = DAT_0044208c;
    FUN_00449c8f((uint)&local_3c,6,param_1 + 0x24);
  }
  FUN_004533a0(local_c ^ (uint)&local_3c);
  return;
}



/* Function: FUN_0044a08a */

void __thiscall FUN_0044a08a(void *this,uint *param_1,int param_2,int param_3)

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
  uVar3 = FUN_00449091(this_00,&local_c,8);
  if ((char)uVar3 != '\0') {
    *param_1 = (uint)(*(int *)((int)this + 0x1c) - *this_00) >> 3;
  }
  return;
}



/* Function: FUN_0044a101 */

void __thiscall FUN_0044a101(void *this,PSRWLOCK param_1,int param_2)

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



/* Function: FUN_0044a160 */

void __thiscall FUN_0044a160(void *this,PSRWLOCK param_1)

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
  puStack_c = &LAB_00454551;
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
            goto LAB_0044a204;
          }
        } while (uVar3 < uVar2);
      }
      local_20 = 0;
LAB_0044a204:
      if (param_1 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_1);
      }
      if (local_1c != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_0045c254)(local_20);
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



/* Function: FUN_0044a262 */

void __fastcall FUN_0044a262(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0045450b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0044a2c3(param_1);
  FUN_00450b8d((int *)((int)param_1 + 0x94));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  FUN_0044a468((int)param_1 + 4);
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0044a2c3 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0044a2c3(void *param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x44a2cf;
  FUN_00449ef2(local_7c);
  local_8 = 0;
  FUN_0044a41b(param_1,local_7c);
  FUN_00449f34(local_7c);
  FUN_0044a468((int)local_7c);
  return;
}



/* Function: FUN_0044a304 */

undefined1 __thiscall FUN_0044a304(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((((param_2 == 2) || (param_2 == 3)) || (param_2 == 6)) ||
     ((param_2 == 7 || ((0xff < param_2 && (param_2 < 0x180)))))) {
    FUN_00450b41((void *)((int)this + 4));
    uVar1 = *(undefined1 *)((int)this + 0x24);
  }
  else {
    uVar1 = FUN_00450b1e((void *)((int)this + 0x28),param_2,param_1,param_3);
  }
  return uVar1;
}



/* Function: FUN_0044a35d */

undefined1 __thiscall FUN_0044a35d(void *this,undefined4 param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0xfe) {
    FUN_0044a3c8((PSRWLOCK)this);
    uVar1 = 1;
  }
  else if ((param_2 < 200) || ((0xff < (int)param_2 && (param_2 < 0x200)))) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    uVar1 = FUN_0044a304(this,param_1,param_2,param_3);
    if (this != (void *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_0044a3c8 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0044a3c8(PSRWLOCK param_1)

{
  undefined2 local_7c [58];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x44a3d4;
  FUN_00449ef2(local_7c);
  local_8 = 0;
  AcquireSRWLockExclusive(param_1);
  FUN_0044a41b(param_1,local_7c);
  if (param_1 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(param_1);
  }
  FUN_00449f34(local_7c);
  FUN_0044a468((int)local_7c);
  return;
}



/* Function: FUN_0044a41b */

void __thiscall FUN_0044a41b(void *this,void *param_1)

{
  if (*(char *)((int)this + 0x24) != '\0') {
    FUN_0044951f(param_1,(int)this + 4);
  }
  if (*(char *)((int)this + 0x48) != '\0') {
    FUN_0044951f((void *)((int)param_1 + 0x24),(int)this + 0x28);
  }
  if (*(char *)((int)this + 0x6c) != '\0') {
    FUN_0044951f((void *)((int)param_1 + 0x48),(int)this + 0x4c);
  }
  return;
}



/* Function: FUN_0044a468 */

void __fastcall FUN_0044a468(int param_1)

{
  FUN_00450b8d((int *)(param_1 + 100));
  FUN_00450b8d((int *)(param_1 + 0x40));
  FUN_00450b8d((int *)(param_1 + 0x1c));
  return;
}



/* Function: FUN_0044a48c */

void __fastcall FUN_0044a48c(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004546f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 0x18);
  *param_1 = 0;
  FUN_00450bad(this,0);
  FUN_00450bad(param_1 + 0x1c,0);
  FUN_00450b8d((int *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0044a9eb(*(int *)(param_1 + 0x78));
  }
  FUN_00450b8d((int *)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00449257(*(undefined4 *)(param_1 + 0x4c));
  }
  FUN_00450b8d((int *)(param_1 + 0x48));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00451719(*(PTP_TIMER *)(param_1 + 0x1c));
  }
  if (*this != 0) {
    FUN_00451719((PTP_TIMER)*this);
  }
  local_8 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_0045109a(*(int **)(param_1 + 8));
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0044a55e */

void __thiscall FUN_0044a55e(void *this,undefined4 param_1,uint param_2,int param_3)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0045450b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    bVar1 = FUN_0044a78b((int)this);
    if (bVar1) {
      cVar2 = FUN_0044a35d(*(void **)((int)this + 0xc),param_1,param_2,param_3);
      if (cVar2 != '\0') {
        cVar2 = FUN_004474a8();
        if (cVar2 == '\0') {
          SRWLock = (PSRWLOCK)((int)this + 0x10);
          AcquireSRWLockExclusive(SRWLock);
          FUN_0044a818(this);
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



/* Function: FUN_0044a5ea */

void __thiscall FUN_0044a5ea(void *this,uint *param_1,int param_2)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  char cVar1;
  bool bVar2;
  
  *param_1 = 0;
                    /* WARNING: Load size is inaccurate */
  if (((*this != '\0') && (cVar1 = FUN_004474a8(), cVar1 == '\0')) &&
     (bVar2 = FUN_0044a78b((int)this), bVar2)) {
    SRWLock = (PSRWLOCK)((int)this + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    if ((*(int *)((int)this + 0x78) == 0) &&
       (SRWLock_00 = *(PSRWLOCK *)((int)this + 0xc), SRWLock_00 != (PSRWLOCK)0x0)) {
      *(undefined4 *)((int)this + 0x78) = 0;
      AcquireSRWLockExclusive(SRWLock_00);
      FUN_0044a08a(SRWLock_00 + 0x1c,(uint *)((int)this + 0x78),0x44a9a0,(int)this);
      ReleaseSRWLockExclusive(SRWLock_00);
    }
    FUN_0044a08a((void *)((int)this + 0x50),param_1,param_2,0);
    if (*param_1 != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0044a68a */

void __fastcall FUN_0044a68a(int param_1)

{
  char cVar1;
  bool bVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454597;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004474a8();
  if (cVar1 == '\0') {
    bVar2 = FUN_0044a78b(param_1);
    if (bVar2) {
      FUN_0044a160(*(PSRWLOCK *)(param_1 + 0xc) + 0x1c,*(PSRWLOCK *)(param_1 + 0xc));
      FUN_0044a3c8(*(PSRWLOCK *)(param_1 + 0xc));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0044a6f2 */

void __thiscall FUN_0044a6f2(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3)

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
  puStack_c = &LAB_004545ba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    cVar1 = FUN_004474a8();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 0x14);
      AcquireSRWLockExclusive(SRWLock);
      local_16 = 0;
      local_1c = param_1;
      local_18 = param_2;
      local_14 = param_3;
      FUN_00449091((void *)((int)this + 0x7c),&local_1c,0xc);
      FUN_0044a879(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0044a78b */

bool __fastcall FUN_0044a78b(int param_1)

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
        iVar1 = FUN_00450f6b(*(undefined4 *)(param_1 + 4),&local_8);
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



/* Function: FUN_0044a818 */

void __fastcall FUN_0044a818(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x18);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00452390,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00450bad(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00448f84(this,(char *)((int)param_1 + 0x21),300000,0);
  }
  return;
}



/* Function: FUN_0044a879 */

void __fastcall FUN_0044a879(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 0x1c);
  if (*(char *)((int)param_1 + 0x20) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_004523d0,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00450bad(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00448f84(this,(char *)((int)param_1 + 0x20),5000,0);
  }
  return;
}



/* Function: FUN_0044a8e0 */

void FUN_0044a8e0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_0044a160(param_1 + 0x24,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_0044a903 */

bool __fastcall FUN_0044a903(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pcVar3 = DAT_00456b80;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454716;
  local_10 = ExceptionList;
  uVar2 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(param_1 + 0x4c);
  iVar4 = 0;
  if (*piVar1 == 0) {
    *piVar1 = 0;
    if ((pcVar3 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_004485e5("RtlRegisterFeatureConfigurationChangeNotification"),
       DAT_00456b80 = pcVar3, pcVar3 == (code *)0x0)) {
      iVar4 = -0x3ffffec7;
    }
    else {
      (*(code *)PTR_guard_check_icall_0045c254)(FUN_0044a8e0,param_1,0,piVar1,uVar2);
      iVar4 = (*pcVar3)();
    }
  }
  ExceptionList = local_10;
  return iVar4 == 0;
}



/* Function: FUN_0044a9a0 */

void FUN_0044a9a0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_0044a160(param_1 + 0x50,(PSRWLOCK)(param_1 + 0x10));
  }
  return;
}



/* Function: FUN_0044a9c3 */

LPCRITICAL_SECTION __fastcall FUN_0044a9c3(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSectionEx(param_1,0,0);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  return param_1;
}



/* Function: FUN_0044a9eb */

void FUN_0044a9eb(int param_1)

{
  if ((param_1 != 0) && (DAT_0045af94 != (PSRWLOCK)0x0)) {
    FUN_0044a101(DAT_0045af94 + 0x1c,DAT_0045af94,param_1);
  }
  return;
}



/* Function: FUN_0044aa16 */

bool __fastcall
FUN_0044aa16(uint *param_1,undefined4 param_2,byte param_3,int param_4,undefined4 *param_5)

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
  
  puVar5 = &DAT_0045ad10;
  if (param_4 != 0) {
    puVar5 = &DAT_00456b78;
  }
  local_c = param_1;
  if ((*puVar5 & 2) != 0) {
    if ((*puVar5 & 1) == 0) {
      return false;
    }
    *param_5 = 1;
    iVar2 = FUN_00448dcf(param_1,param_2,(uint)param_3,(uint *)0x0);
    return iVar2 != 0;
  }
  iVar2 = FUN_0044b103();
  local_8 = 0;
  *param_5 = 1;
  iVar3 = FUN_00448dcf(local_c,param_2,(uint)param_3,&local_8);
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
  if (DAT_004561d4 == '\0') {
    return bVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004561d8);
  if ((iVar2 != 0) && (iVar2 == DAT_004561e4)) {
    local_14 = 0;
    local_10 = puVar5;
    uVar4 = FUN_00449091(&DAT_00456200,&local_14,8);
    if ((char)uVar4 != '\0') goto LAB_0044aaee;
  }
  LOCK();
  *puVar5 = *puVar5 & 0xfffff7c1;
  UNLOCK();
LAB_0044aaee:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004561d8);
  return bVar6;
}



/* Function: FUN_0044ab10 */

uint FUN_0044ab10(undefined4 param_1,uint param_2,undefined4 *param_3)

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
  bVar1 = FUN_0044aa16(local_20,param_1,(byte)uVar3,param_2 >> 7 & 1,param_3);
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



/* Function: FUN_0044ab90 */

void FUN_0044ab90(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x7fffffff;
  if (((param_1 == 0) && (param_3 == 0)) && (uVar1 == 0)) {
    FUN_0044a68a(0x45af88);
  }
  else if ((param_2 & 0x40000000) == 0) {
    if ((param_3 == 0) && (uVar1 != 0xfe)) {
      FUN_00448ecf(param_1,(short)uVar1,param_2 >> 0x1f);
    }
    else {
      FUN_0044a55e(&DAT_0045af88,param_1,uVar1,param_3);
    }
  }
  else {
    FUN_0044a6f2(&DAT_0045af88,param_1,(short)uVar1,param_3);
  }
  return;
}



/* Function: FUN_0044ac10 */

void FUN_0044ac10(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == -1) {
    FUN_0044a5ea(&DAT_0045af88,param_1,param_2);
  }
  else {
    *param_1 = 0;
    if (DAT_0045af88 != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_0045af98);
      bVar1 = FUN_0044a903(0x45af88);
      if (bVar1) {
        FUN_0044a08a(&DAT_0045afac,param_1,param_2,param_3);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_0045af98);
    }
  }
  return;
}



/* Function: FUN_0044ac80 */

void FUN_0044ac80(uint param_1)

{
  undefined *this;
  
  if ((int)param_1 < 0) {
    if (DAT_0045af88 == '\0') {
      return;
    }
    param_1 = param_1 & 0x7fffffff;
    this = &DAT_0045afd8;
  }
  else {
    if (DAT_0045af88 == '\0') {
      return;
    }
    this = &DAT_0045afac;
  }
  FUN_0044a101(this,(PSRWLOCK)&DAT_0045af98,param_1);
  return;
}



/* Function: FUN_0044acc4 */

void __fastcall FUN_0044acc4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_004573fc;
  if ((DAT_004573fc != (code *)0x0) || (pcVar1 = DAT_00458238, DAT_00458238 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_1,param_2,param_3,0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0044acfa */

void FUN_0044acfa(int param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ushort *)(param_1 + 4);
    do {
      FUN_0044acc4(*(undefined4 *)(puVar1 + -2),(uint)*puVar1,(uint)puVar1[1]);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Function: FUN_0044ad33 */

void __fastcall FUN_0044ad33(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_00458028;
  if ((DAT_00458028 == (code *)0x0) && (pcVar1 = DAT_00458654, DAT_00458654 == (code *)0x0)) {
    *param_1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0045c254)(param_1,param_2,param_3);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0044ad6b */

void FUN_0044ad6b(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = DAT_0045a700;
  if ((DAT_0045a700 != (code *)0x0) || (pcVar1 = DAT_0045ad0c, DAT_0045ad0c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0045c254)(param_1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_0044ad9d */

void __fastcall FUN_0044ad9d(undefined1 *param_1)

{
  int *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00454739;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (int *)(param_1 + 8);
  *param_1 = 0;
  FUN_00450bad(this,0);
  *param_1 = 0;
  FUN_0044b027((int)param_1);
  FUN_00450b8d((int *)(param_1 + 0x38));
  FUN_00450b8d((int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x18) != 0) {
    local_8 = 0;
    FUN_0044ad6b(*(undefined4 *)(param_1 + 0x18));
    local_8 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    local_8 = 1;
    FUN_0044ad6b(*(undefined4 *)(param_1 + 0x14));
  }
  if (*this != 0) {
    FUN_00451719((PTP_TIMER)*this);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0044ae3e */

void __thiscall FUN_0044ae3e(void *this,char *param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  char cVar1;
  char *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454716;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*this != '\0') {
    local_18 = (char *)this;
    local_14 = this;
    cVar1 = FUN_004474a8();
    if (cVar1 == '\0') {
      SRWLock = (PSRWLOCK)((int)this + 4);
      AcquireSRWLockExclusive(SRWLock);
      local_18 = param_1;
      local_14 = (void *)param_2;
      FUN_00449091((void *)((int)this + 0x1c),&local_18,8);
      FUN_0044b0a2(this);
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0044aec8 */

void __fastcall FUN_0044aec8(char *param_1)

{
  PSRWLOCK SRWLock;
  
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    FUN_0044b027((int)param_1);
    param_1[0xc] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_0044aefc */

void __fastcall FUN_0044aefc(char *param_1)

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



/* Function: FUN_0044af61 */

undefined4 __fastcall FUN_0044af61(char *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004544e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*param_1 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 4);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_1 + 0x14);
    if (*piVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (SRWLock == (PSRWLOCK)0x0) {
        ExceptionList = local_10;
        return uVar2;
      }
      ReleaseSRWLockExclusive(SRWLock);
      ExceptionList = local_10;
      return uVar2;
    }
    piVar3 = FUN_00450a51(piVar1);
    FUN_0044ad33(piVar3,FUN_0044b010,param_1);
    if (*piVar1 != 0) {
      param_1[0x10] = '\x01';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      if (SRWLock == (PSRWLOCK)0x0) {
        ExceptionList = local_10;
        return 1;
      }
      ReleaseSRWLockExclusive(SRWLock);
      ExceptionList = local_10;
      return 1;
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  ExceptionList = local_10;
  return 0;
}



/* Function: FUN_0044b010 */

void FUN_0044b010(char *param_1)

{
  FUN_0044aefc(param_1);
  return;
}



/* Function: FUN_0044b027 */

void __fastcall FUN_0044b027(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004544e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (7 < (uint)((int)puVar1 - (int)puVar2)) {
    for (; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      FUN_00448c8d(*puVar2,(uint *)puVar2[1]);
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    FUN_0044acc4(0,0xfe,0);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_0044b0a2 */

void __fastcall FUN_0044b0a2(PVOID param_1)

{
  int *this;
  DWORD dwErrCode;
  PTP_TIMER p_Var1;
  
  this = (int *)((int)param_1 + 8);
  if (*(char *)((int)param_1 + 0xc) == '\0') {
    if (*this == 0) {
      dwErrCode = GetLastError();
      p_Var1 = CreateThreadpoolTimer(FUN_00452420,param_1,(PTP_CALLBACK_ENVIRON)0x0);
      FUN_00450bad(this,p_Var1);
      SetLastError(dwErrCode);
    }
    FUN_00448f84(this,(char *)((int)param_1 + 0xc),300000,0);
  }
  return;
}



/* Function: FUN_0044b103 */

void FUN_0044b103(void)

{
  if (DAT_004561e4 == 0) {
    FUN_0044af61(&DAT_004561d4);
    return;
  }
  return;
}



/* Function: FUN_0044b11e */

undefined4 __fastcall FUN_0044b11e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = DAT_0045a0dc;
  if ((DAT_0045a0dc == (code *)0x0) && (pcVar2 = DAT_0045a2e0, DAT_0045a2e0 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0045c254)(param_1,param_2,param_3);
    uVar1 = (*pcVar2)();
  }
  return uVar1;
}



/* Function: FUN_0044b156 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 * __fastcall
FUN_0044b156(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 *extraout_EAX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  pcVar2 = DAT_00457a18;
  uStack_4 = 0;
  puVar3 = &LAB_004545dd;
  local_8 = 0x44b162;
  puVar7 = (undefined4 *)auStack_20;
  uVar5 = param_1;
  if ((DAT_00457a18 != (code *)0x0) &&
     ((param_2 == 0 || (puVar3 = (undefined1 *)(param_2 + -100), puVar3 < (undefined1 *)0x32)))) {
    uStack_24 = 1;
    puVar6 = &uStack_30;
    uStack_30 = 0x44b186;
    uStack_2c = param_1;
    iStack_28 = param_2;
    (*(code *)PTR_guard_check_icall_0045c254)();
    puVar7 = puVar6 + -1;
    puVar6[-1] = 0x44b188;
    puVar3 = (undefined1 *)(*pcVar2)();
    uVar5 = extraout_ECX;
  }
  if (*param_5 != 0) {
    *(undefined4 *)((int)puVar7 + -4) = param_4;
    *(undefined4 *)((int)puVar7 + -8) = param_1;
    *(undefined4 *)((int)puVar7 + -0xc) = 0x44b19e;
    puVar3 = (undefined1 *)
             FUN_0044ae3e(&DAT_004561d4,*(char **)((int)puVar7 + -8),
                          *(undefined4 *)((int)puVar7 + -4));
    uVar5 = extraout_ECX_00;
  }
  if (param_5[1] != 0) {
    iVar1 = param_5[2];
    *(undefined4 *)((int)puVar7 + -4) = uVar5;
    *(int *)((int)puVar7 + -8) = param_5[1];
    *(undefined4 *)((int)puVar7 + -0xc) = 0x44b1b2;
    puVar3 = (undefined1 *)FUN_0044acc4(param_1,iVar1,*(undefined4 *)((int)puVar7 + -8));
  }
  if ((param_5[4] == 0) && (local_8 = 0, DAT_004561d4 != '\0')) {
    *(undefined **)((int)puVar7 + -4) = &DAT_004561d8;
    puVar8 = (undefined1 *)((int)puVar7 + -8);
    *(undefined4 *)((int)puVar7 + -8) = 0x44b1d1;
    AcquireSRWLockExclusive(*(PSRWLOCK *)((int)puVar7 + -4));
    if (DAT_004561ec == 0) {
      *(undefined4 *)(puVar8 + -4) = 0xffffffff;
      *(undefined4 *)(puVar8 + -8) = 0x44b1e6;
      piVar4 = FUN_00450a51(&DAT_004561ec);
      *(undefined4 *)(puVar8 + -8) = 0x44b1f2;
      FUN_0044ad33(piVar4,FUN_0044b210,*(undefined4 *)(puVar8 + -4));
    }
    *(undefined **)(puVar8 + -4) = &DAT_004561d8;
    puVar7 = (undefined4 *)(puVar8 + -8);
    *(undefined4 *)(puVar8 + -8) = 0x44b1f9;
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(puVar8 + -4));
    puVar3 = extraout_EAX;
  }
  *(undefined4 *)((int)puVar7 + -4) = 0x44b1fe;
  return puVar3;
}



/* Function: FUN_0044b210 */

void FUN_0044b210(void)

{
  FUN_0044aec8(&DAT_004561d4);
  return;
}



/* Function: FUN_0044b223 */

bool __fastcall
FUN_0044b223(uint *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint local_3c [7];
  uint local_20 [4];
  int local_10;
  undefined4 local_8;
  
  local_8 = param_2;
  puVar3 = FUN_0044898e(param_1,param_5,local_3c);
  puVar6 = local_20;
  for (iVar4 = 6; uVar2 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0044b156(local_8,param_5,0,param_1,(int *)local_20);
  if (param_3 != 0) {
    uVar5 = param_5 | 0x80000000;
    if (param_4 == 0) {
      uVar5 = param_5;
    }
    FUN_0044acc4(uVar2,uVar5,0);
  }
  pcVar1 = DAT_00458234;
  if ((local_10 == 0) && (DAT_00458234 != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0045c254)(local_8,param_5,param_8);
    (*pcVar1)();
  }
  return local_10 == 0;
}



/* Function: FUN_0044b2b5 */

void __fastcall
FUN_0044b2b5(uint *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  if (param_7 != 0) {
    uVar3 = FUN_00448911(param_7,param_6);
    uVar4 = (uint)*(byte *)(param_5 + 4);
    bVar2 = FUN_0044b223(param_1,param_2,param_3,param_4,uVar3,uVar4,uVar4,uVar4);
    pcVar1 = DAT_0045ad18;
    if ((CONCAT31(extraout_var,bVar2) != 0) && (DAT_0045ad18 != (code *)0x0)) {
      (*(code *)PTR_guard_check_icall_0045c254)(param_2,param_5,0,param_6,&param_7,0,0,1);
      (*pcVar1)();
    }
  }
  return;
}



/* Function: FUN_0044b321 */

void __fastcall FUN_0044b321(HKEY param_1,LPBYTE param_2)

{
  LSTATUS LVar1;
  LPBYTE lpData;
  HKEY local_c;
  DWORD local_8;
  
  local_8 = 0;
  local_c = param_1;
  LVar1 = RegQueryValueExW(param_1,L"D3DBehaviors",(LPDWORD)0x0,(LPDWORD)&local_c,(LPBYTE)0x0,
                           &local_8);
  if (((LVar1 == 0) && (3 < local_8)) && ((local_8 & 1) == 0)) {
    FUN_00450d3a(param_2,local_8 - 2 >> 1);
    lpData = param_2;
    if (7 < *(uint *)(param_2 + 0x14)) {
      lpData = *(LPBYTE *)param_2;
    }
    RegQueryValueExW(param_1,L"D3DBehaviors",(LPDWORD)0x0,(LPDWORD)&local_c,lpData,&local_8);
    FUN_00450d3a(param_2,local_8 - 2 >> 1);
  }
  return;
}



/* Function: FUN_0044b3a4 */

void __fastcall FUN_0044b3a4(HKEY param_1,BYTE *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0x10);
  if (7 < *(uint *)(param_2 + 0x14)) {
    param_2 = *(BYTE **)param_2;
  }
  RegSetValueExW(param_1,L"D3DBehaviors",0,1,param_2,*piVar1 * 2 + 2);
  return;
}



/* Function: FUN_0044b3cf */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0044b3cf(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  ushort local_2c [18];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x44b3db;
  FUN_00452437(local_2c,param_2,(short *)&DAT_0041f0cc);
  local_8 = 0;
  uVar1 = FUN_00450d07(param_1,local_2c);
  if (uVar1 != 0xffffffff) {
    puVar3 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    uVar2 = FUN_0045249c((int)puVar3,param_1[4],uVar1,(ushort *)&DAT_0041f0d0,1);
    if (uVar2 == 0xffffffff) {
      FUN_00450d3a(param_1,uVar1);
    }
    else {
      FUN_004511ad(param_1,uVar1,(uVar2 - uVar1) + 1,extraout_ECX,0);
    }
  }
  FUN_00445346((int *)local_2c);
  FUN_004541cb();
  return;
}



/* Function: FUN_0044b44e */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0044b44e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 ***pppuVar6;
  int local_60;
  int local_5c [6];
  int local_44 [6];
  undefined4 **local_2c [4];
  uint local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x44b45a;
  bVar2 = false;
  local_60 = 0;
  FUN_00452437(local_2c,param_2,(short *)&DAT_0041f0cc);
  local_8 = 0;
  iVar3 = FUN_00450d07(param_1,(ushort *)local_2c);
  if (iVar3 != -1) {
    DebugBreak();
  }
  if (param_1[4] != 0) {
    puVar4 = FUN_00450cb0(param_1,local_44,param_1[4] - 1,0xffffffff);
    local_60 = 1;
    piVar5 = puVar4 + 4;
    if (7 < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (*piVar5 == 1) {
      iVar3 = FUN_00452953((int)puVar4,(ushort *)&DAT_0041f0d0,1);
      if (iVar3 == 0) goto LAB_0044b4cb;
    }
    bVar2 = true;
  }
LAB_0044b4cb:
  if (local_60 != 0) {
    FUN_00445346(local_44);
  }
  if (bVar2) {
    piVar5 = (int *)FUN_00452437(local_44,param_1,(short *)&DAT_0041f0d0);
    FUN_00450d71(param_1,piVar5);
    FUN_00445346(local_44);
  }
  if (local_1c <= 0x7ffffffe - param_1[4]) {
    puVar4 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    pppuVar6 = local_2c;
    if (7 < local_18) {
      pppuVar6 = (undefined4 ***)local_2c[0];
    }
    FUN_004528b8(local_44,local_60,puVar4,puVar4,param_1[4],pppuVar6,local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar4 = FUN_004526d0(local_44,param_3);
    FUN_00445303(local_5c,puVar4);
    FUN_00450d71(param_1,local_5c);
    FUN_00445346(local_5c);
    FUN_00445346(local_44);
    FUN_00445346((int *)local_2c);
    FUN_004541cb();
    return;
  }
  FUN_00442ad3();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_0044b57f */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0044b57f(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_48 [6];
  ushort local_30 [8];
  int local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x44b58b;
  FUN_00451744(param_3,param_1,0);
  FUN_00452437(local_30,param_2,(short *)&DAT_0041f0cc);
  local_8 = 0;
  iVar1 = FUN_00450d07(param_1,local_30);
  if (iVar1 != -1) {
    uVar5 = local_20 + iVar1;
    puVar4 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    uVar2 = FUN_0045249c((int)puVar4,param_1[4],uVar5,(ushort *)&DAT_0041f0d0,1);
    if (uVar2 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = uVar2 - uVar5;
    }
    piVar3 = FUN_00450cb0(param_1,local_48,uVar5,uVar2);
    FUN_00450d71(param_3,piVar3);
    FUN_00445346(local_48);
  }
  FUN_00445346((int *)local_30);
  FUN_004541cb();
  return;
}



/* Function: FUN_0044b61c */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0044b61c(HKEY param_1,short *param_2)

{
  undefined4 ***pppuVar1;
  int local_5c [6];
  int local_44 [6];
  undefined4 **local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 7;
  local_44[0] = 0;
  local_8 = 0;
  FUN_0044b321(param_1,(LPBYTE)local_44);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 7;
  local_2c = (undefined4 ***)0x0;
  local_8._0_1_ = 1;
  FUN_00445c8c(local_5c,param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0044b57f(local_44,local_5c,&local_2c);
  FUN_00445346(local_5c);
  pppuVar1 = &local_2c;
  if (7 < local_18) {
    pppuVar1 = (undefined4 ***)local_2c;
  }
  o__wtoi(pppuVar1);
  FUN_00445346((int *)&local_2c);
  FUN_00445346(local_44);
  FUN_004541cb();
  return;
}



/* Function: FUN_0044b6c2 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0044b6c2(HKEY param_1,short *param_2,undefined4 param_3)

{
  undefined4 ***pppuVar1;
  int local_5c [6];
  int local_44 [6];
  undefined4 **local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 7;
  local_44[0] = 0;
  local_8 = 0;
  FUN_0044b321(param_1,(LPBYTE)local_44);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 7;
  local_2c = (undefined4 ***)0x0;
  local_8._0_1_ = 1;
  FUN_00445c8c(local_5c,param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0044b57f(local_44,local_5c,&local_2c);
  FUN_00445346(local_5c);
  if (local_1c < 0x104) {
    pppuVar1 = &local_2c;
    if (7 < local_18) {
      pppuVar1 = (undefined4 ***)local_2c;
    }
    o_wcscpy_s(param_3,0x104,pppuVar1);
  }
  FUN_00445346((int *)&local_2c);
  FUN_00445346(local_44);
  FUN_004541cb();
  return;
}



/* Function: FUN_0044b777 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0044b777(HKEY param_1,short *param_2)

{
  int local_128 [6];
  int local_110 [6];
  int local_f8 [6];
  short local_e0 [108];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x118;
  local_8 = 0x44b786;
  FUN_0045410e(local_e0,100,&DAT_00402e04);
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  local_f8[4] = 0;
  local_f8[5] = 7;
  local_f8[0] = 0;
  local_8 = 0;
  FUN_0044b321(param_1,(LPBYTE)local_f8);
  FUN_00445c8c(local_110,param_2);
  local_8._0_1_ = 1;
  FUN_0044b3cf(local_f8,local_110);
  local_8._0_1_ = 0;
  FUN_00445346(local_110);
  FUN_00445c8c(local_128,local_e0);
  local_8._0_1_ = 2;
  FUN_00445c8c(local_110,param_2);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_0044b44e(local_f8,local_110,local_128);
  FUN_00445346(local_110);
  FUN_00445346(local_128);
  FUN_0044b3a4(param_1,(BYTE *)local_f8);
  FUN_00445346(local_f8);
  FUN_004541cb();
  return;
}



/* Function: FUN_0044b883 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0044b883(HKEY param_1,short *param_2,undefined4 *param_3)

{
  int local_44 [6];
  int local_2c [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  local_2c[4] = 0;
  local_2c[5] = 7;
  local_2c[0] = 0;
  local_8 = 0;
  FUN_0044b321(param_1,(LPBYTE)local_2c);
  FUN_00445c8c(local_44,param_2);
  local_8._0_1_ = 1;
  FUN_0044b3cf(local_2c,local_44);
  local_8._0_1_ = 0;
  FUN_00445346(local_44);
  FUN_00445c8c(local_44,param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0044b44e(local_2c,local_44,param_3);
  FUN_00445346(local_44);
  FUN_0044b3a4(param_1,(BYTE *)local_2c);
  FUN_00445346(local_2c);
  FUN_004541cb();
  return;
}



/* Function: FUN_0044b922 */

void __fastcall FUN_0044b922(HKEY param_1,uint *param_2)

{
  int local_824 [2];
  DWORD local_81c;
  uint local_818;
  DWORD local_814;
  int local_810;
  WCHAR local_80c [1023];
  undefined2 local_e;
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  local_818 = *param_2;
  FUN_004456ee(local_80c,L"Mute_ID_%d");
  local_814 = 4;
  local_e = 0;
  local_810 = 0;
  RegQueryValueExW(param_1,local_80c,(LPDWORD)0x0,&local_81c,(LPBYTE)&local_810,&local_814);
  if (local_810 != 0) {
    FUN_004459c9(&DAT_004565b0,local_824,&local_818);
  }
  FUN_004456ee(local_80c,L"BreakOn_ID_%d");
  local_814 = 4;
  local_810 = 0;
  RegQueryValueExW(param_1,local_80c,(LPDWORD)0x0,&local_81c,(LPBYTE)&local_810,&local_814);
  if (local_810 != 0) {
    FUN_004459c9(&DAT_004565b8,local_824,&local_818);
  }
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0044ba39 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044ba39(HKEY param_1)

{
  int iVar1;
  LSTATUS LVar2;
  uint uVar3;
  uint uVar4;
  DWORD local_28;
  DWORD local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint auStack_c [2];
  
  local_28 = 0x208;
  DAT_004568b8 = 0;
  RegQueryValueExW(param_1,L"DXCPL_BrowsePath",(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_004566a8,
                   &local_28);
  local_28 = 4;
  _DAT_004568ae = 0;
  LVar2 = RegQueryValueExW(param_1,L"RequireSDKLayers",(LPDWORD)0x0,&local_24,(LPBYTE)&iStack_18,
                           &local_28);
  uVar4 = 1;
  if (LVar2 == 0) {
    LVar2 = RegQueryValueExW(param_1,L"SDKLayerFlagsAnd",(LPDWORD)0x0,&local_24,(LPBYTE)&iStack_14,
                             &local_28);
    if (LVar2 == 0) {
      LVar2 = RegQueryValueExW(param_1,L"SDKLayerFlagsOr",(LPDWORD)0x0,&local_24,(LPBYTE)&iStack_10,
                               &local_28);
      if (LVar2 == 0) {
        if (iStack_18 == 1) {
          if ((iStack_14 == -1) && (iStack_10 == 2)) {
            DAT_004568b8 = 1;
          }
          else {
LAB_0044bb21:
            DAT_004568b8 = 0;
          }
        }
        else if (((iStack_18 != 0) || (iStack_14 != -3)) || (DAT_004568b8 = 2, iStack_10 != 0))
        goto LAB_0044bb21;
      }
    }
  }
  DAT_004568b4 = FUN_0044b61c(param_1,L"FeatureLevelLimit");
  DAT_00456b08 = FUN_0044b61c(param_1,L"ForceWARP");
  DAT_004568bc = FUN_0044b61c(param_1,L"DisableFLUpgrade");
  DAT_004596c8 = FUN_0044b61c(param_1,L"UseD3D12");
  DAT_00458650 = FUN_0044b61c(param_1,L"AutoDebugName");
  uVar3 = FUN_00451646(&DAT_0045af50);
  if ((char)uVar3 != '\0') {
    DAT_0045a4f0 = FUN_0044b61c(param_1,L"PipelineStateDatabaseEnabled");
    FUN_0044b6c2(param_1,L"PipelineStateDatabasePath",&DAT_0045a2e8);
    _DAT_0045a4ee = 0;
    FUN_0044b6c2(param_1,L"PrecompiledDatabasePath",&DAT_00456b90);
    _DAT_00456d96 = 0;
  }
  local_28 = 4;
  RegQueryValueExW(param_1,L"InfoQueueStorageFilterOverride",(LPDWORD)0x0,&local_24,
                   (LPBYTE)&DAT_00456198,&local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,L"MuteDebugOutput",(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b48,&local_28
                  );
  local_28 = 4;
  RegQueryValueExW(param_1,L"EnableBreakOnMessage",(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456aec,
                   &local_28);
  local_28 = 4;
  LVar2 = RegQueryValueExW(param_1,L"EnableGPUBasedValidationFlagsAnd",(LPDWORD)0x0,&local_24,
                           (LPBYTE)&iStack_1c,&local_28);
  if (LVar2 == 0) {
    LVar2 = RegQueryValueExW(param_1,L"EnableGPUBasedValidationFlagsOr",(LPDWORD)0x0,&local_24,
                             (LPBYTE)&iStack_20,&local_28);
    if (LVar2 == 0) {
      if (iStack_1c == -1) {
        if (iStack_20 == 1) {
          DAT_00456ae8 = 1;
        }
        else {
          DAT_00456ae8 = 0;
          if (iStack_20 != 0) goto LAB_0044bca4;
        }
      }
      else {
LAB_0044bca4:
        DAT_00456ae8 = 2;
      }
    }
  }
  local_28 = 4;
  RegQueryValueExW(param_1,L"GbvStateTracking",(LPDWORD)0x0,&local_24,&DAT_0045ad08,&local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,L"GPUBasedValidationPSOCreateFlag",(LPDWORD)0x0,&local_24,
                   (LPBYTE)&DAT_00456b34,&local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,L"GPUBasedValidationShaderPatchMode",(LPDWORD)0x0,&local_24,
                   (LPBYTE)&DAT_00456190,&local_28);
  local_28 = 4;
  LVar2 = RegQueryValueExW(param_1,L"EnableSyncCommandQueuesAnd",(LPDWORD)0x0,&local_24,
                           (LPBYTE)&iStack_1c,&local_28);
  if (LVar2 == 0) {
    LVar2 = RegQueryValueExW(param_1,L"EnableSyncCommandQueuesOr",(LPDWORD)0x0,&local_24,
                             (LPBYTE)&iStack_20,&local_28);
    if (LVar2 == 0) {
      if (iStack_1c == -1) {
        if (iStack_20 == 1) {
          DAT_00456ae4 = 1;
          goto LAB_0044bd8d;
        }
        DAT_00456ae4 = 0;
        if (iStack_20 == 0) goto LAB_0044bd8d;
      }
      DAT_00456ae4 = 2;
    }
  }
LAB_0044bd8d:
  local_28 = 4;
  RegQueryValueExW(param_1,L"EnableConservativeResourceStateTracking",(LPDWORD)0x0,&local_24,
                   (LPBYTE)&DAT_004568b0,&local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,L"GPUSlowdownFactorPercentage",(LPDWORD)0x0,&local_24,
                   (LPBYTE)&DAT_00456b00,&local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,L"LegacyStateValidation",(LPDWORD)0x0,&local_24,&DAT_00458eb0,&local_28);
  DAT_00458cac = FUN_0044b61c(param_1,L"DredWatson");
  DAT_00458ca8 = FUN_0044b61c(param_1,L"DredAutoBreadcrumbs");
  DAT_00457810 = FUN_0044b61c(param_1,L"DredPageFault");
  DAT_00458240 = FUN_0044b61c(param_1,L"DredBreadcrumbContext");
  DAT_0045a0d8 = FUN_0044b61c(param_1,L"DredMarkersOnlyBreadcrumbs");
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00459cd8,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b24,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00457a20,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b38,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00458eb8,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_004568d0,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_0045a908,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b10,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,L"Unmute_SEVERITY_INFO",(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b44,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00457610,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b60,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00459ad8,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456afc,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_004592c0,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b1c,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00459ed8,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_004566a0,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00457e28,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b14,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_004590c0,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456698,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_004571f8,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b50,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_0045ab08,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b04,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00456d98,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456ae0,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_0045ad20,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_004568c8,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00458248,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b0c,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_004596d0,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b40,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00458658,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b64,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00457c20,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456af4,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00458030,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b18,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00458450,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_0045669c,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00458cb0,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456af0,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00457818,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456af8,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_004594c8,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_004568c0,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_0045a708,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_004566a4,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00456ff8,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b5c,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_0045a500,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b3c,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_0045a0e0,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b54,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00458a60,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b30,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00457408,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b20,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_004598d8,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b58,
                   &local_28);
  local_28 = 4;
  RegQueryValueExW(param_1,(LPCWSTR)&DAT_00458860,(LPDWORD)0x0,&local_24,(LPBYTE)&DAT_00456b28,
                   &local_28);
  iVar1 = DAT_004565b0;
  FUN_004457ba(&DAT_004565b0,*(undefined4 **)(DAT_004565b0 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  iVar1 = DAT_004565b8;
  _DAT_004565b4 = 0;
  FUN_004457ba(&DAT_004565b8,*(undefined4 **)(DAT_004565b8 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  _DAT_004565bc = 0;
  uVar3 = uVar4;
  do {
    auStack_c[0] = uVar3;
    FUN_0044b922(param_1,auStack_c);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x1bb);
  if (DAT_004568cc != 0) {
    uVar3 = 0x100001;
    do {
      auStack_c[0] = uVar3;
      FUN_0044b922(param_1,auStack_c);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10003e);
    uVar3 = 0x200001;
    do {
      auStack_c[0] = uVar3;
      FUN_0044b922(param_1,auStack_c);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x200110);
    if (DAT_00456b4c != 0) {
      uVar3 = 0x300001;
      do {
        auStack_c[0] = uVar3;
        FUN_0044b922(param_1,auStack_c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x300186);
    }
    if (DAT_004568c4 != 0) {
      uVar3 = 0x300188;
      do {
        auStack_c[0] = uVar3;
        FUN_0044b922(param_1,auStack_c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x3001a9);
    }
    if (DAT_00456b2c != 0) {
      uVar3 = 0x3001ab;
      do {
        auStack_c[0] = uVar3;
        FUN_0044b922(param_1,auStack_c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x300211);
    }
  }
  do {
    auStack_c[0] = uVar4 | 0x40000000;
    FUN_0044b922(param_1,auStack_c);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x592);
  return;
}



/* Function: FUN_0044c413 */

void __fastcall FUN_0044c413(HKEY param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int local_81c [2];
  int local_814;
  uint local_810;
  BYTE local_80c [4];
  WCHAR local_808 [1023];
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  uVar1 = *param_2;
  local_810 = uVar1;
  FUN_004456ee(local_808,L"Mute_ID_%d");
  local_a = 0;
  FUN_00445a67(&DAT_004565b0,local_81c,&local_810);
  if ((*(char *)(local_814 + 0xd) != '\0') ||
     (iVar2 = local_814, uVar1 < *(uint *)(local_814 + 0x10))) {
    iVar2 = DAT_004565b0;
  }
  if (iVar2 == DAT_004565b0) {
    RegDeleteValueW(param_1,local_808);
  }
  else {
    local_80c[0] = '\x01';
    local_80c[1] = '\0';
    local_80c[2] = '\0';
    local_80c[3] = '\0';
    RegSetValueExW(param_1,local_808,0,4,local_80c,4);
  }
  FUN_004456ee(local_808,L"BreakOn_ID_%d");
  local_a = 0;
  FUN_00445a67(&DAT_004565b8,local_81c,&local_810);
  if ((*(char *)(local_814 + 0xd) != '\0') || (uVar1 < *(uint *)(local_814 + 0x10))) {
    local_814 = DAT_004565b8;
  }
  if (local_814 == DAT_004565b8) {
    RegDeleteValueW(param_1,local_808);
  }
  else {
    local_80c[0] = '\x01';
    local_80c[1] = '\0';
    local_80c[2] = '\0';
    local_80c[3] = '\0';
    RegSetValueExW(param_1,local_808,0,4,local_80c,4);
  }
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0044c56b */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_0044c56b(HKEY param_1,wchar_t *param_2,char param_3,char param_4,int param_5)

{
  int *piVar1;
  size_t sVar2;
  uint uVar3;
  BYTE *lpData;
  int iVar4;
  uint uVar5;
  undefined4 local_250;
  BYTE local_24c [12];
  wchar_t *local_240;
  BYTE local_23c [8];
  uint local_234;
  uint local_230;
  int local_22c [6];
  WCHAR local_214 [255];
  undefined2 local_16;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x240;
  local_8 = 0x44c57a;
  uVar5 = 1;
  local_240 = param_2;
  if (param_3 != '\0') {
    sVar2 = wcsnlen(&DAT_004566a8,0x104);
    RegSetValueExW(param_1,L"DXCPL_BrowsePath",0,1,(BYTE *)&DAT_004566a8,sVar2 * 2);
    iVar4 = 0;
    do {
      FUN_00446628(local_214,L"Application%d_Name");
      local_16 = 0;
      RegDeleteValueW(param_1,local_214);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x200);
    local_230 = 0x18;
    local_234 = 0;
    if (0 < (DAT_004565a8 - DAT_004565a4) / 0x18) {
      iVar4 = 0;
      do {
        FUN_00446628(local_214,L"Application%d_Name");
        lpData = (BYTE *)(DAT_004565a4 + iVar4);
        local_16 = 0;
        piVar1 = (int *)(lpData + 0x10);
        if (7 < *(uint *)(lpData + 0x14)) {
          lpData = *(BYTE **)lpData;
        }
        RegSetValueExW(param_1,local_214,0,1,lpData,*piVar1 * 2 + 2);
        iVar4 = iVar4 + 0x18;
        local_234 = local_234 + 1;
      } while ((int)local_234 < (DAT_004565a8 - DAT_004565a4) / (int)local_230);
    }
  }
  if (local_240 != (wchar_t *)0x0) {
    sVar2 = wcsnlen(local_240,0x400);
    RegSetValueExW(param_1,L"Name",0,1,(BYTE *)local_240,sVar2 * 2 + 2);
  }
  local_250 = DAT_00456198;
  if (DAT_004568b8 == 1) {
    local_24c[8] = '\x01';
    local_24c[9] = '\0';
    local_24c[10] = '\0';
    local_24c[0xb] = '\0';
    local_24c[0] = '\x02';
    local_24c[1] = '\0';
    local_24c[2] = '\0';
    local_24c[3] = '\0';
    local_234 = 1;
LAB_0044c6ef:
    local_240 = (wchar_t *)0xffffffff;
    local_24c[4] = 0xff;
    local_24c[5] = 0xff;
    local_24c[6] = 0xff;
    local_24c[7] = 0xff;
  }
  else {
    local_24c[8] = '\0';
    local_24c[9] = '\0';
    local_24c[10] = '\0';
    local_24c[0xb] = '\0';
    local_24c[0] = '\0';
    local_24c[1] = '\0';
    local_24c[2] = '\0';
    local_24c[3] = '\0';
    local_234 = 0;
    if (DAT_004568b8 != 2) goto LAB_0044c6ef;
    local_24c[4] = 0xfd;
    local_24c[5] = 0xff;
    local_24c[6] = 0xff;
    local_24c[7] = 0xff;
    local_240 = (wchar_t *)0xfffffffe;
  }
  if (param_4 != '\0') goto LAB_0044cee2;
  RegSetValueExW(param_1,L"RequireSDKLayers",0,4,local_24c + 8,4);
  FUN_0044b777(param_1,L"RequireSDKLayers");
  RegSetValueExW(param_1,L"SDKLayerFlagsAnd",0,4,local_24c + 4,4);
  RegSetValueExW(param_1,L"SDKLayerFlagsOr",0,4,local_24c,4);
  if ((param_5 == 1) || (param_3 != '\0')) {
    FUN_0044b777(param_1,L"D3D12SDKLayerFlagsAnd");
    FUN_0044b777(param_1,L"D3D12SDKLayerFlagsOr");
  }
  RegSetValueExW(param_1,L"InfoQueueStorageFilterOverride",0,4,(BYTE *)&local_250,4);
  RegSetValueExW(param_1,L"MuteDebugOutput",0,4,(BYTE *)&DAT_00456b48,4);
  RegSetValueExW(param_1,L"EnableBreakOnMessage",0,4,(BYTE *)&DAT_00456aec,4);
  if (DAT_00456ae8 == 0) {
    local_23c[4] = 0xff;
    local_23c[5] = 0xff;
    local_23c[6] = 0xff;
    local_23c[7] = 0xff;
LAB_0044c835:
    local_23c[0] = '\0';
    local_23c[1] = '\0';
    local_23c[2] = '\0';
    local_23c[3] = '\0';
  }
  else {
    if (DAT_00456ae8 != 1) {
      local_23c[4] = '\0';
      local_23c[5] = '\0';
      local_23c[6] = '\0';
      local_23c[7] = '\0';
      goto LAB_0044c835;
    }
    local_23c[4] = 0xff;
    local_23c[5] = 0xff;
    local_23c[6] = 0xff;
    local_23c[7] = 0xff;
    local_23c[0] = '\x01';
    local_23c[1] = '\0';
    local_23c[2] = '\0';
    local_23c[3] = '\0';
  }
  RegSetValueExW(param_1,L"EnableGPUBasedValidationFlagsAnd",0,4,local_23c + 4,4);
  RegSetValueExW(param_1,L"EnableGPUBasedValidationFlagsOr",0,4,local_23c,4);
  RegSetValueExW(param_1,L"GPUBasedValidationPSOCreateFlag",0,4,(BYTE *)&DAT_00456b34,4);
  RegSetValueExW(param_1,L"GPUBasedValidationShaderPatchMode",0,4,(BYTE *)&DAT_00456190,4);
  RegSetValueExW(param_1,L"GbvStateTracking",0,4,&DAT_0045ad08,4);
  if (DAT_00456ae4 == 0) {
    local_23c[4] = 0xff;
    local_23c[5] = 0xff;
    local_23c[6] = 0xff;
    local_23c[7] = 0xff;
LAB_0044c8df:
    local_23c[0] = '\0';
    local_23c[1] = '\0';
    local_23c[2] = '\0';
    local_23c[3] = '\0';
  }
  else {
    if (DAT_00456ae4 != 1) {
      local_23c[4] = '\0';
      local_23c[5] = '\0';
      local_23c[6] = '\0';
      local_23c[7] = '\0';
      goto LAB_0044c8df;
    }
    local_23c[4] = 0xff;
    local_23c[5] = 0xff;
    local_23c[6] = 0xff;
    local_23c[7] = 0xff;
    local_23c[0] = '\x01';
    local_23c[1] = '\0';
    local_23c[2] = '\0';
    local_23c[3] = '\0';
  }
  RegSetValueExW(param_1,L"EnableSyncCommandQueuesAnd",0,4,local_23c + 4,4);
  RegSetValueExW(param_1,L"EnableSyncCommandQueuesOr",0,4,local_23c,4);
  RegSetValueExW(param_1,L"EnableConservativeResourceStateTracking",0,4,(BYTE *)&DAT_004568b0,4);
  RegSetValueExW(param_1,L"GPUSlowdownFactorPercentage",0,4,(BYTE *)&DAT_00456b00,4);
  RegSetValueExW(param_1,L"LegacyStateValidation",0,4,&DAT_00458eb0,4);
  FUN_0044b777(param_1,L"DredWatson");
  FUN_0044b777(param_1,L"DredAutoBreadcrumbs");
  FUN_0044b777(param_1,L"DredPageFault");
  FUN_0044b777(param_1,L"DredBreadcrumbContext");
  FUN_0044b777(param_1,L"DredMarkersOnlyBreadcrumbs");
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00459cd8,0,4,(BYTE *)&DAT_00456b24,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00457a20,0,4,(BYTE *)&DAT_00456b38,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00458eb8,0,4,(BYTE *)&DAT_004568d0,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_0045a908,0,4,(BYTE *)&DAT_00456b10,4);
  RegSetValueExW(param_1,L"Unmute_SEVERITY_INFO",0,4,(BYTE *)&DAT_00456b44,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00457610,0,4,(BYTE *)&DAT_00456b60,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00459ad8,0,4,(BYTE *)&DAT_00456afc,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_004592c0,0,4,(BYTE *)&DAT_00456b1c,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00459ed8,0,4,(BYTE *)&DAT_004566a0,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00457e28,0,4,(BYTE *)&DAT_00456b14,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_004590c0,0,4,(BYTE *)&DAT_00456698,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_004571f8,0,4,(BYTE *)&DAT_00456b50,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_0045ab08,0,4,(BYTE *)&DAT_00456b04,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00456d98,0,4,(BYTE *)&DAT_00456ae0,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_0045ad20,0,4,(BYTE *)&DAT_004568c8,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00458248,0,4,(BYTE *)&DAT_00456b0c,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_004596d0,0,4,(BYTE *)&DAT_00456b40,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00458658,0,4,(BYTE *)&DAT_00456b64,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00457c20,0,4,(BYTE *)&DAT_00456af4,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00458030,0,4,(BYTE *)&DAT_00456b18,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00458450,0,4,(BYTE *)&DAT_0045669c,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00458cb0,0,4,(BYTE *)&DAT_00456af0,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00457818,0,4,(BYTE *)&DAT_00456af8,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_004594c8,0,4,(BYTE *)&DAT_004568c0,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_0045a708,0,4,(BYTE *)&DAT_004566a4,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00456ff8,0,4,(BYTE *)&DAT_00456b5c,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_0045a500,0,4,(BYTE *)&DAT_00456b3c,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_0045a0e0,0,4,(BYTE *)&DAT_00456b54,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00458a60,0,4,(BYTE *)&DAT_00456b30,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00457408,0,4,(BYTE *)&DAT_00456b20,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_004598d8,0,4,(BYTE *)&DAT_00456b58,4);
  RegSetValueExW(param_1,(LPCWSTR)&DAT_00458860,0,4,(BYTE *)&DAT_00456b28,4);
  FUN_0044b777(param_1,L"FeatureLevelLimit");
  FUN_0044b777(param_1,L"AutoDebugName");
  uVar3 = FUN_00451646(&DAT_0045af50);
  if ((char)uVar3 != '\0') {
    FUN_0044b777(param_1,L"PipelineStateDatabaseEnabled");
    FUN_00445c8c(local_22c,(short *)&DAT_0045a2e8);
    local_8 = 0;
    FUN_0044b883(param_1,L"PipelineStateDatabasePath",local_22c);
    local_8 = 0xffffffff;
    FUN_00445346(local_22c);
    FUN_00445c8c(local_22c,(short *)&DAT_00456b90);
    local_8 = 1;
    FUN_0044b883(param_1,L"PrecompiledDatabasePath",local_22c);
    local_8 = 0xffffffff;
    FUN_00445346(local_22c);
  }
  if ((param_5 == 0) || (param_3 != '\0')) {
    FUN_0044b777(param_1,L"ForceWARP");
    FUN_0044b777(param_1,L"DisableFLUpgrade");
    FUN_0044b777(param_1,L"UseD3D12");
    do {
      local_230 = uVar5;
      FUN_0044c413(param_1,&local_230);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x1bb);
    if (DAT_004568cc != 0) {
      uVar5 = 0x100001;
      do {
        local_230 = uVar5;
        FUN_0044c413(param_1,&local_230);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x10003e);
      local_234 = 0x200001;
      do {
        local_230 = local_234;
        FUN_0044c413(param_1,&local_230);
        local_234 = local_234 + 1;
      } while (local_234 < 0x200110);
      if (DAT_00456b4c != 0) {
        uVar5 = 0x300001;
        do {
          local_230 = uVar5;
          FUN_0044c413(param_1,&local_230);
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x300186);
      }
      if (DAT_004568c4 != 0) {
        uVar5 = 0x300188;
        do {
          local_230 = uVar5;
          FUN_0044c413(param_1,&local_230);
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x3001a9);
      }
      if (DAT_00456b2c != 0) {
        uVar5 = 0x3001ab;
        do {
          local_230 = uVar5;
          FUN_0044c413(param_1,&local_230);
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x300211);
      }
    }
  }
  uVar5 = 1;
  if ((param_5 == 1) || (param_3 != '\0')) {
    do {
      local_230 = uVar5 | 0x40000000;
      FUN_0044c413(param_1,&local_230);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x592);
  }
LAB_0044cee2:
  FUN_004541cb();
  return;
}



/* Function: FUN_0044cef1 */

void FUN_0044cef1(void)

{
  code *pcVar1;
  short sVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int iVar4;
  LSTATUS LVar5;
  short *psVar6;
  short *psVar7;
  HKEY local_424;
  int *local_420;
  int *local_41c;
  int *local_418;
  int *local_414;
  WCHAR local_410 [255];
  undefined2 local_212;
  short local_210;
  undefined1 local_20e [518];
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  FUN_004451ea();
  DAT_004568cc = 0;
  hModule = LoadLibraryExW(L"D3D11.DLL",(HANDLE)0x0,0x1000);
  if (hModule != (HMODULE)0x0) {
    pFVar3 = GetProcAddress(hModule,"D3D11CreateDevice");
    if (pFVar3 != (FARPROC)0x0) {
      local_414 = (int *)0x0;
      (*(code *)PTR_guard_check_icall_0045c254)(0,5,0,0,0,0,7,&local_414,0,0);
      iVar4 = (*pFVar3)();
      if (-1 < iVar4) {
        local_420 = (int *)0x0;
        DAT_004568cc = 1;
        pcVar1 = *(code **)*local_414;
        (*(code *)PTR_guard_check_icall_0045c254)(local_414,&DAT_00442018,&local_420);
        iVar4 = (*pcVar1)();
        if (-1 < iVar4) {
          DAT_00456b4c = 1;
          pcVar1 = *(code **)(*local_420 + 8);
          (*(code *)PTR_guard_check_icall_0045c254)(local_420);
          (*pcVar1)();
          local_420 = (int *)0x0;
        }
        local_41c = (int *)0x0;
        pcVar1 = *(code **)*local_414;
        (*(code *)PTR_guard_check_icall_0045c254)(local_414,&DAT_00442048,&local_41c);
        iVar4 = (*pcVar1)();
        if (-1 < iVar4) {
          DAT_004568c4 = 1;
          pcVar1 = *(code **)(*local_41c + 8);
          (*(code *)PTR_guard_check_icall_0045c254)(local_41c);
          (*pcVar1)();
          local_41c = (int *)0x0;
        }
        local_418 = (int *)0x0;
        pcVar1 = *(code **)*local_414;
        (*(code *)PTR_guard_check_icall_0045c254)(local_414,&DAT_00442070,&local_418);
        iVar4 = (*pcVar1)();
        if (-1 < iVar4) {
          DAT_00456b2c = 1;
          pcVar1 = *(code **)(*local_418 + 8);
          (*(code *)PTR_guard_check_icall_0045c254)(local_418);
          (*pcVar1)();
          local_418 = (int *)0x0;
        }
        pcVar1 = *(code **)(*local_414 + 8);
        (*(code *)PTR_guard_check_icall_0045c254)(local_414);
        (*pcVar1)();
      }
    }
    FreeLibrary(hModule);
  }
  FUN_0045410e(&DAT_00459cd8,0x100,L"Mute_SEVERITY_%s");
  FUN_0045410e(&DAT_00457a20,0x100,L"Mute_SEVERITY_%s");
  FUN_0045410e(&DAT_00458eb8,0x100,L"Mute_SEVERITY_%s");
  FUN_0045410e(&DAT_0045a908,0x100,L"Mute_SEVERITY_%s");
  FUN_0045410e(&DAT_00457610,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_00459ad8,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_004592c0,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_00459ed8,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_00457e28,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_004590c0,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_004571f8,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_0045ab08,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_00456d98,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_0045ad20,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_00458248,0x100,L"Mute_CATEGORY_%s");
  FUN_0045410e(&DAT_004596d0,0x100,L"BreakOn_SEVERITY_%s");
  FUN_0045410e(&DAT_00458658,0x100,L"BreakOn_SEVERITY_%s");
  FUN_0045410e(&DAT_00457c20,0x100,L"BreakOn_SEVERITY_%s");
  FUN_0045410e(&DAT_00458030,0x100,L"BreakOn_SEVERITY_%s");
  FUN_0045410e(&DAT_00458450,0x100,L"BreakOn_SEVERITY_%s");
  FUN_0045410e(&DAT_00458cb0,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_00457818,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_004594c8,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_0045a708,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_00456ff8,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_0045a500,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_0045a0e0,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_00458a60,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_00457408,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_004598d8,0x100,L"BreakOn_CATEGORY_%s");
  FUN_0045410e(&DAT_00458860,0x100,L"BreakOn_CATEGORY_%s");
  LVar5 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\Microsoft\\Direct3D\\ControlPanel",0,1,
                        &local_424);
  if (LVar5 == 0) {
    FUN_0044ba39(local_424);
    iVar4 = 0;
    do {
      local_418 = (int *)0x200;
      FUN_00446628(local_410,L"Application%d_Name");
      local_212 = 0;
      LVar5 = RegQueryValueExW(local_424,local_410,(LPDWORD)0x0,(LPDWORD)&local_41c,
                               (LPBYTE)&local_210,(LPDWORD)&local_418);
      if (LVar5 != 0) break;
      psVar6 = &local_210;
      do {
        sVar2 = *psVar6;
        psVar6 = psVar6 + 1;
      } while (sVar2 != 0);
      psVar7 = &local_210;
      psVar6 = psVar7 + ((int)psVar6 - (int)local_20e >> 1);
      for (; psVar7 != psVar6; psVar7 = psVar7 + 1) {
        sVar2 = o_tolower(*psVar7);
        *psVar7 = sVar2;
      }
      FUN_00444887(&local_210);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x200);
    RegCloseKey(local_424);
  }
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0044d407 */

void __fastcall FUN_0044d407(LPCWSTR param_1,wchar_t *param_2,char param_3,char param_4,int param_5)

{
  char cVar1;
  LSTATUS LVar2;
  PSECURITY_DESCRIPTOR pSecurityDescriptor;
  PSID local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  HKEY local_c [2];
  
  LVar2 = RegCreateKeyExW((HKEY)0x80000001,param_1,0,(LPWSTR)0x0,0,0x6001b,
                          (LPSECURITY_ATTRIBUTES)0x0,local_c,(LPDWORD)0x0);
  if (LVar2 == 0) {
    cVar1 = FUN_00452f1c();
    if (cVar1 != '\0') {
      local_1c = (PSID)0x0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      pSecurityDescriptor = (PSECURITY_DESCRIPTOR)FUN_00445d6a(&local_1c);
      if (pSecurityDescriptor != (PSECURITY_DESCRIPTOR)0x0) {
        RegSetKeySecurity(local_c[0],4,pSecurityDescriptor);
      }
      FUN_00445d18((int *)&local_1c);
    }
    FUN_0044c56b(local_c[0],param_2,param_3,param_4,param_5);
    RegCloseKey(local_c[0]);
  }
  return;
}



/* Function: FUN_0044d489 */

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0044d489(void)

{
  LPCWSTR lpSubKey;
  short *psVar1;
  undefined4 *puVar2;
  LPCWSTR ***lpSubKey_00;
  uint uVar3;
  undefined4 local_a4;
  int local_a0 [6];
  int local_88 [6];
  LPCWSTR **local_70 [5];
  uint local_5c;
  int local_58 [16];
  short local_16 [7];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x44d498;
  RegDeleteTreeW((HKEY)0x80000001,L"Software\\Microsoft\\Direct3D\\Direct3D12");
  FUN_00445c8c(local_88,L"Software\\Microsoft\\Direct3D");
  local_8 = 0;
  lpSubKey = (LPCWSTR)FUN_00452437(local_70,local_88,L"\\ControlPanel");
  if (7 < *(uint *)(lpSubKey + 10)) {
    lpSubKey = *(LPCWSTR *)lpSubKey;
  }
  RegDeleteKeyW((HKEY)0x80000001,lpSubKey);
  FUN_00445346((int *)local_70);
  uVar3 = 0;
  do {
    psVar1 = FUN_004529eb(local_16,uVar3);
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    if (psVar1 == local_16) {
      local_58[4] = 0;
      local_58[5] = 7;
      local_58[0] = 0;
    }
    else {
      FUN_00445735(local_58,psVar1,(int)local_16 - (int)psVar1 >> 1);
    }
    local_8._0_1_ = 1;
    puVar2 = (undefined4 *)FUN_00452437(local_a0,local_88,L"\\Application");
    local_8._0_1_ = 2;
    FUN_00452746(local_70,local_a4,puVar2,local_58);
    lpSubKey_00 = local_70;
    if (7 < local_5c) {
      lpSubKey_00 = (LPCWSTR ***)local_70[0];
    }
    RegDeleteKeyW((HKEY)0x80000001,(LPCWSTR)lpSubKey_00);
    FUN_00445346((int *)local_70);
    FUN_00445346(local_a0);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00445346(local_58);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x200);
  FUN_00445346(local_88);
  FUN_004541cb();
  return;
}



/* Function: FUN_0044d5ba */

void __fastcall FUN_0044d5ba(int param_1)

{
  char cVar1;
  wchar_t *lpSubKey;
  LSTATUS LVar2;
  PSECURITY_DESCRIPTOR pSecurityDescriptor;
  PSID local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  HKEY local_8;
  
  if ((param_1 == 0) || (lpSubKey = L"Software\\Microsoft\\Direct3D\\Direct3D12", param_1 != 1)) {
    lpSubKey = L"Software\\Microsoft\\Direct3D";
  }
  LVar2 = RegCreateKeyExW((HKEY)0x80000001,lpSubKey,0,(LPWSTR)0x0,0,0x6001b,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_8,(LPDWORD)0x0);
  if (LVar2 == 0) {
    cVar1 = FUN_00452f1c();
    if (cVar1 != '\0') {
      local_18 = (PSID)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      pSecurityDescriptor = (PSECURITY_DESCRIPTOR)FUN_00445d6a(&local_18);
      if (pSecurityDescriptor != (PSECURITY_DESCRIPTOR)0x0) {
        RegSetKeySecurity(local_8,4,pSecurityDescriptor);
      }
      FUN_00445d18((int *)&local_18);
    }
    RegCloseKey(local_8);
  }
  return;
}



/* Function: FUN_0044d636 */

void FUN_0044d636(void)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_214 [4];
  WCHAR local_210 [255];
  undefined2 local_12;
  uint local_c;
  
  local_c = DAT_00456140 ^ (uint)auStack_214;
  FUN_0044d489();
  FUN_0044d5ba(0);
  FUN_0044d5ba(1);
  FUN_0044d407(L"Software\\Microsoft\\Direct3D\\ControlPanel",(wchar_t *)0x0,'\x01','\0',0);
  iVar3 = 0;
  if (0 < (DAT_004565a8 - DAT_004565a4) / 0x18) {
    iVar2 = 0;
    do {
      FUN_00446628(local_210,L"Software\\Microsoft\\Direct3D\\Application%d");
      pwVar1 = (wchar_t *)(DAT_004565a4 + iVar2);
      local_12 = 0;
      if (7 < *(uint *)(pwVar1 + 10)) {
        pwVar1 = *(wchar_t **)pwVar1;
      }
      FUN_0044d407(local_210,pwVar1,'\0','\0',0);
      FUN_00446628(local_210,L"Software\\Microsoft\\Direct3D\\Direct3D12\\Application%d");
      pwVar1 = (wchar_t *)(DAT_004565a4 + iVar2);
      local_12 = 0;
      if (7 < *(uint *)(pwVar1 + 10)) {
        pwVar1 = *(wchar_t **)pwVar1;
      }
      FUN_0044d407(local_210,pwVar1,'\0','\0',1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar3 < (DAT_004565a8 - DAT_004565a4) / 0x18);
  }
  FUN_0044d407(L"Software\\Microsoft\\Direct3D",(wchar_t *)0x0,'\0','\x01',0);
  FUN_0044d407(L"Software\\Microsoft\\Direct3D\\Direct3D12",(wchar_t *)0x0,'\0','\x01',1);
  FUN_004533a0(local_c ^ (uint)auStack_214);
  return;
}



/* Function: FUN_0044d764 */

wchar_t * __fastcall FUN_0044d764(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 & 0x3fffffff;
  if (0x3fffffff < *param_1) {
    return (wchar_t *)(&PTR_u_D3D12_MESSAGE_ID_UNKNOWN_00401088)[uVar1];
  }
  if (uVar1 < 0x100002) {
    if (uVar1 == 0x100001) {
      return L"D3D11_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_STENCIL_NO_TWO_SIDED";
    }
    switch(uVar1) {
    case 0:
      return L"D3D10_MESSAGE_ID_UNKNOWN";
    case 1:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_HAZARD";
    case 2:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_HAZARD";
    case 3:
      return L"D3D10_MESSAGE_ID_DEVICE_VSSETSHADERRESOURCES_HAZARD";
    case 4:
      return L"D3D10_MESSAGE_ID_DEVICE_VSSETCONSTANTBUFFERS_HAZARD";
    case 5:
      return L"D3D10_MESSAGE_ID_DEVICE_GSSETSHADERRESOURCES_HAZARD";
    case 6:
      return L"D3D10_MESSAGE_ID_DEVICE_GSSETCONSTANTBUFFERS_HAZARD";
    case 7:
      return L"D3D10_MESSAGE_ID_DEVICE_PSSETSHADERRESOURCES_HAZARD";
    case 8:
      return L"D3D10_MESSAGE_ID_DEVICE_PSSETCONSTANTBUFFERS_HAZARD";
    case 9:
      return L"D3D10_MESSAGE_ID_DEVICE_OMSETRENDERTARGETS_HAZARD";
    case 10:
      return L"D3D10_MESSAGE_ID_DEVICE_SOSETTARGETS_HAZARD";
    case 0xb:
      return L"D3D10_MESSAGE_ID_STRING_FROM_APPLICATION";
    case 0xc:
      return L"D3D10_MESSAGE_ID_CORRUPTED_THIS";
    case 0xd:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER1";
    case 0xe:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER2";
    case 0xf:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER3";
    case 0x10:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER4";
    case 0x11:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER5";
    case 0x12:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER6";
    case 0x13:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER7";
    case 0x14:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER8";
    case 0x15:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER9";
    case 0x16:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER10";
    case 0x17:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER11";
    case 0x18:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER12";
    case 0x19:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER13";
    case 0x1a:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER14";
    case 0x1b:
      return L"D3D10_MESSAGE_ID_CORRUPTED_PARAMETER15";
    case 0x1c:
      return L"D3D10_MESSAGE_ID_CORRUPTED_MULTITHREADING";
    case 0x1d:
      return L"D3D10_MESSAGE_ID_MESSAGE_REPORTING_OUTOFMEMORY";
    case 0x1e:
      return L"D3D10_MESSAGE_ID_IASETINPUTLAYOUT_UNBINDDELETINGOBJECT";
    case 0x1f:
      return L"D3D10_MESSAGE_ID_IASETVERTEXBUFFERS_UNBINDDELETINGOBJECT";
    case 0x20:
      return L"D3D10_MESSAGE_ID_IASETINDEXBUFFER_UNBINDDELETINGOBJECT";
    case 0x21:
      return L"D3D10_MESSAGE_ID_VSSETSHADER_UNBINDDELETINGOBJECT";
    case 0x22:
      return L"D3D10_MESSAGE_ID_VSSETSHADERRESOURCES_UNBINDDELETINGOBJECT";
    case 0x23:
      return L"D3D10_MESSAGE_ID_VSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT";
    case 0x24:
      return L"D3D10_MESSAGE_ID_VSSETSAMPLERS_UNBINDDELETINGOBJECT";
    case 0x25:
      return L"D3D10_MESSAGE_ID_GSSETSHADER_UNBINDDELETINGOBJECT";
    case 0x26:
      return L"D3D10_MESSAGE_ID_GSSETSHADERRESOURCES_UNBINDDELETINGOBJECT";
    case 0x27:
      return L"D3D10_MESSAGE_ID_GSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT";
    case 0x28:
      return L"D3D10_MESSAGE_ID_GSSETSAMPLERS_UNBINDDELETINGOBJECT";
    case 0x29:
      return L"D3D10_MESSAGE_ID_SOSETTARGETS_UNBINDDELETINGOBJECT";
    case 0x2a:
      return L"D3D10_MESSAGE_ID_PSSETSHADER_UNBINDDELETINGOBJECT";
    case 0x2b:
      return L"D3D10_MESSAGE_ID_PSSETSHADERRESOURCES_UNBINDDELETINGOBJECT";
    case 0x2c:
      return L"D3D10_MESSAGE_ID_PSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT";
    case 0x2d:
      return L"D3D10_MESSAGE_ID_PSSETSAMPLERS_UNBINDDELETINGOBJECT";
    case 0x2e:
      return L"D3D10_MESSAGE_ID_RSSETSTATE_UNBINDDELETINGOBJECT";
    case 0x2f:
      return L"D3D10_MESSAGE_ID_OMSETBLENDSTATE_UNBINDDELETINGOBJECT";
    case 0x30:
      return L"D3D10_MESSAGE_ID_OMSETDEPTHSTENCILSTATE_UNBINDDELETINGOBJECT";
    case 0x31:
      return L"D3D10_MESSAGE_ID_OMSETRENDERTARGETS_UNBINDDELETINGOBJECT";
    case 0x32:
      return L"D3D10_MESSAGE_ID_SETPREDICATION_UNBINDDELETINGOBJECT";
    case 0x33:
      return L"D3D10_MESSAGE_ID_GETPRIVATEDATA_MOREDATA";
    case 0x34:
      return L"D3D10_MESSAGE_ID_SETPRIVATEDATA_INVALIDFREEDATA";
    case 0x35:
      return L"D3D10_MESSAGE_ID_SETPRIVATEDATA_INVALIDIUNKNOWN";
    case 0x36:
      return L"D3D10_MESSAGE_ID_SETPRIVATEDATA_INVALIDFLAGS";
    case 0x37:
      return L"D3D10_MESSAGE_ID_SETPRIVATEDATA_CHANGINGPARAMS";
    case 0x38:
      return L"D3D10_MESSAGE_ID_SETPRIVATEDATA_OUTOFMEMORY";
    case 0x39:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDFORMAT";
    case 0x3a:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDSAMPLES";
    case 0x3b:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDUSAGE";
    case 0x3c:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDBINDFLAGS";
    case 0x3d:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDCPUACCESSFLAGS";
    case 0x3e:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDMISCFLAGS";
    case 0x3f:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDCPUACCESSFLAGS";
    case 0x40:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDBINDFLAGS";
    case 0x41:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDINITIALDATA";
    case 0x42:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDDIMENSIONS";
    case 0x43:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDMIPLEVELS";
    case 0x44:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDMISCFLAGS";
    case 0x45:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDARG_RETURN";
    case 0x46:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_OUTOFMEMORY_RETURN";
    case 0x47:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_NULLDESC";
    case 0x48:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDCONSTANTBUFFERBINDINGS";
    case 0x49:
      return L"D3D10_MESSAGE_ID_CREATEBUFFER_LARGEALLOCATION";
    case 0x4a:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDFORMAT";
    case 0x4b:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_UNSUPPORTEDFORMAT";
    case 0x4c:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDSAMPLES";
    case 0x4d:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDUSAGE";
    case 0x4e:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDBINDFLAGS";
    case 0x4f:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDCPUACCESSFLAGS";
    case 0x50:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDMISCFLAGS";
    case 0x51:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDCPUACCESSFLAGS";
    case 0x52:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDBINDFLAGS";
    case 0x53:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDINITIALDATA";
    case 0x54:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDDIMENSIONS";
    case 0x55:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDMIPLEVELS";
    case 0x56:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDMISCFLAGS";
    case 0x57:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDARG_RETURN";
    case 0x58:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_OUTOFMEMORY_RETURN";
    case 0x59:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_NULLDESC";
    case 0x5a:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE1D_LARGEALLOCATION";
    case 0x5b:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDFORMAT";
    case 0x5c:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_UNSUPPORTEDFORMAT";
    case 0x5d:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDSAMPLES";
    case 0x5e:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDUSAGE";
    case 0x5f:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDBINDFLAGS";
    case 0x60:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDCPUACCESSFLAGS";
    case 0x61:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDMISCFLAGS";
    case 0x62:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDCPUACCESSFLAGS";
    case 99:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDBINDFLAGS";
    case 100:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDINITIALDATA";
    case 0x65:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDDIMENSIONS";
    case 0x66:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDMIPLEVELS";
    case 0x67:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDMISCFLAGS";
    case 0x68:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDARG_RETURN";
    case 0x69:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_OUTOFMEMORY_RETURN";
    case 0x6a:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_NULLDESC";
    case 0x6b:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE2D_LARGEALLOCATION";
    case 0x6c:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDFORMAT";
    case 0x6d:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_UNSUPPORTEDFORMAT";
    case 0x6e:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDSAMPLES";
    case 0x6f:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDUSAGE";
    case 0x70:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDBINDFLAGS";
    case 0x71:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDCPUACCESSFLAGS";
    case 0x72:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDMISCFLAGS";
    case 0x73:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDCPUACCESSFLAGS";
    case 0x74:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDBINDFLAGS";
    case 0x75:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDINITIALDATA";
    case 0x76:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDDIMENSIONS";
    case 0x77:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDMIPLEVELS";
    case 0x78:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDMISCFLAGS";
    case 0x79:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDARG_RETURN";
    case 0x7a:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_OUTOFMEMORY_RETURN";
    case 0x7b:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_NULLDESC";
    case 0x7c:
      return L"D3D10_MESSAGE_ID_CREATETEXTURE3D_LARGEALLOCATION";
    case 0x7d:
      return L"D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_UNRECOGNIZEDFORMAT";
    case 0x7e:
      return L"D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDESC";
    case 0x7f:
      return L"D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDFORMAT";
    case 0x80:
      return L"D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDIMENSIONS";
    case 0x81:
      return L"D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDRESOURCE";
    case 0x82:
      return L"D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_TOOMANYOBJECTS";
    case 0x83:
      return L"D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDARG_RETURN";
    case 0x84:
      return L"D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_OUTOFMEMORY_RETURN";
    case 0x85:
      return L"D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_UNRECOGNIZEDFORMAT";
    case 0x86:
      return L"D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_UNSUPPORTEDFORMAT";
    case 0x87:
      return L"D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDESC";
    case 0x88:
      return L"D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDFORMAT";
    case 0x89:
      return L"D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDIMENSIONS";
    case 0x8a:
      return L"D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDRESOURCE";
    case 0x8b:
      return L"D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_TOOMANYOBJECTS";
    case 0x8c:
      return L"D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDARG_RETURN";
    case 0x8d:
      return L"D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_OUTOFMEMORY_RETURN";
    case 0x8e:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_UNRECOGNIZEDFORMAT";
    case 0x8f:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDDESC";
    case 0x90:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDFORMAT";
    case 0x91:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDDIMENSIONS";
    case 0x92:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDRESOURCE";
    case 0x93:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_TOOMANYOBJECTS";
    case 0x94:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDARG_RETURN";
    case 0x95:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_OUTOFMEMORY_RETURN";
    case 0x96:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_OUTOFMEMORY";
    case 0x97:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_TOOMANYELEMENTS";
    case 0x98:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDFORMAT";
    case 0x99:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INCOMPATIBLEFORMAT";
    case 0x9a:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSLOT";
    case 0x9b:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDINPUTSLOTCLASS";
    case 0x9c:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_STEPRATESLOTCLASSMISMATCH";
    case 0x9d:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSLOTCLASSCHANGE";
    case 0x9e:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSTEPRATECHANGE";
    case 0x9f:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDALIGNMENT";
    case 0xa0:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_DUPLICATESEMANTIC";
    case 0xa1:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_UNPARSEABLEINPUTSIGNATURE";
    case 0xa2:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_NULLSEMANTIC";
    case 0xa3:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_MISSINGELEMENT";
    case 0xa4:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_NULLDESC";
    case 0xa5:
      return L"D3D10_MESSAGE_ID_CREATEVERTEXSHADER_OUTOFMEMORY";
    case 0xa6:
      return L"D3D10_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDSHADERBYTECODE";
    case 0xa7:
      return L"D3D10_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDSHADERTYPE";
    case 0xa8:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADER_OUTOFMEMORY";
    case 0xa9:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDSHADERBYTECODE";
    case 0xaa:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDSHADERTYPE";
    case 0xab:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTOFMEMORY";
    case 0xac:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSHADERBYTECODE";
    case 0xad:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSHADERTYPE";
    case 0xae:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMENTRIES";
    case 0xaf:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTPUTSTREAMSTRIDEUNUSED";
    case 0xb0:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDDECL";
    case 0xb1:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_EXPECTEDDECL";
    case 0xb2:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTPUTSLOT0EXPECTED";
    case 0xb3:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDOUTPUTSLOT";
    case 0xb4:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_ONLYONEELEMENTPERSLOT";
    case 0xb5:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDCOMPONENTCOUNT";
    case 0xb6:
      return 
      L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTARTCOMPONENTANDCOMPONENTCOUNT"
      ;
    case 0xb7:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDGAPDEFINITION";
    case 0xb8:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_REPEATEDOUTPUT";
    case 0xb9:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDOUTPUTSTREAMSTRIDE";
    case 0xba:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MISSINGSEMANTIC";
    case 0xbb:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MASKMISMATCH";
    case 0xbc:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_CANTHAVEONLYGAPS";
    case 0xbd:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DECLTOOCOMPLEX";
    case 0xbe:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MISSINGOUTPUTSIGNATURE";
    case 0xbf:
      return L"D3D10_MESSAGE_ID_CREATEPIXELSHADER_OUTOFMEMORY";
    case 0xc0:
      return L"D3D10_MESSAGE_ID_CREATEPIXELSHADER_INVALIDSHADERBYTECODE";
    case 0xc1:
      return L"D3D10_MESSAGE_ID_CREATEPIXELSHADER_INVALIDSHADERTYPE";
    case 0xc2:
      return L"D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDFILLMODE";
    case 0xc3:
      return L"D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDCULLMODE";
    case 0xc4:
      return L"D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDDEPTHBIASCLAMP";
    case 0xc5:
      return L"D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDSLOPESCALEDDEPTHBIAS";
    case 0xc6:
      return L"D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_TOOMANYOBJECTS";
    case 199:
      return L"D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_NULLDESC";
    case 200:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDDEPTHWRITEMASK";
    case 0xc9:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDDEPTHFUNC";
    case 0xca:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILFAILOP";
    case 0xcb:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILZFAILOP";
    case 0xcc:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILPASSOP";
    case 0xcd:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILFUNC";
    case 0xce:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILFAILOP";
    case 0xcf:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILZFAILOP";
    case 0xd0:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILPASSOP";
    case 0xd1:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILFUNC";
    case 0xd2:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_TOOMANYOBJECTS";
    case 0xd3:
      return L"D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_NULLDESC";
    case 0xd4:
      return L"D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDSRCBLEND";
    case 0xd5:
      return L"D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDDESTBLEND";
    case 0xd6:
      return L"D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDBLENDOP";
    case 0xd7:
      return L"D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDSRCBLENDALPHA";
    case 0xd8:
      return L"D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDDESTBLENDALPHA";
    case 0xd9:
      return L"D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDBLENDOPALPHA";
    case 0xda:
      return L"D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDRENDERTARGETWRITEMASK";
    case 0xdb:
      return L"D3D10_MESSAGE_ID_CREATEBLENDSTATE_TOOMANYOBJECTS";
    case 0xdc:
      return L"D3D10_MESSAGE_ID_CREATEBLENDSTATE_NULLDESC";
    case 0xdd:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDFILTER";
    case 0xde:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSU";
    case 0xdf:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSV";
    case 0xe0:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSW";
    case 0xe1:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMIPLODBIAS";
    case 0xe2:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMAXANISOTROPY";
    case 0xe3:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDCOMPARISONFUNC";
    case 0xe4:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMINLOD";
    case 0xe5:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMAXLOD";
    case 0xe6:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_TOOMANYOBJECTS";
    case 0xe7:
      return L"D3D10_MESSAGE_ID_CREATESAMPLERSTATE_NULLDESC";
    case 0xe8:
      return L"D3D10_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDQUERY";
    case 0xe9:
      return L"D3D10_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDMISCFLAGS";
    case 0xea:
      return L"D3D10_MESSAGE_ID_CREATEQUERYORPREDICATE_UNEXPECTEDMISCFLAG";
    case 0xeb:
      return L"D3D10_MESSAGE_ID_CREATEQUERYORPREDICATE_NULLDESC";
    case 0xec:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNRECOGNIZED";
    case 0xed:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNDEFINED";
    case 0xee:
      return L"D3D10_MESSAGE_ID_IASETVERTEXBUFFERS_INVALIDBUFFER";
    case 0xef:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_OFFSET_TOO_LARGE";
    case 0xf0:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_BUFFERS_EMPTY";
    case 0xf1:
      return L"D3D10_MESSAGE_ID_IASETINDEXBUFFER_INVALIDBUFFER";
    case 0xf2:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_FORMAT_INVALID";
    case 0xf3:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_OFFSET_TOO_LARGE";
    case 0xf4:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_OFFSET_UNALIGNED";
    case 0xf5:
      return L"D3D10_MESSAGE_ID_DEVICE_VSSETSHADERRESOURCES_VIEWS_EMPTY";
    case 0xf6:
      return L"D3D10_MESSAGE_ID_VSSETCONSTANTBUFFERS_INVALIDBUFFER";
    case 0xf7:
      return L"D3D10_MESSAGE_ID_DEVICE_VSSETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0xf8:
      return L"D3D10_MESSAGE_ID_DEVICE_VSSETSAMPLERS_SAMPLERS_EMPTY";
    case 0xf9:
      return L"D3D10_MESSAGE_ID_DEVICE_GSSETSHADERRESOURCES_VIEWS_EMPTY";
    case 0xfa:
      return L"D3D10_MESSAGE_ID_GSSETCONSTANTBUFFERS_INVALIDBUFFER";
    case 0xfb:
      return L"D3D10_MESSAGE_ID_DEVICE_GSSETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0xfc:
      return L"D3D10_MESSAGE_ID_DEVICE_GSSETSAMPLERS_SAMPLERS_EMPTY";
    case 0xfd:
      return L"D3D10_MESSAGE_ID_SOSETTARGETS_INVALIDBUFFER";
    case 0xfe:
      return L"D3D10_MESSAGE_ID_DEVICE_SOSETTARGETS_OFFSET_UNALIGNED";
    case 0xff:
      return L"D3D10_MESSAGE_ID_DEVICE_PSSETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x100:
      return L"D3D10_MESSAGE_ID_PSSETCONSTANTBUFFERS_INVALIDBUFFER";
    case 0x101:
      return L"D3D10_MESSAGE_ID_DEVICE_PSSETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x102:
      return L"D3D10_MESSAGE_ID_DEVICE_PSSETSAMPLERS_SAMPLERS_EMPTY";
    case 0x103:
      return L"D3D10_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_INVALIDVIEWPORT";
    case 0x104:
      return L"D3D10_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_INVALIDSCISSOR";
    case 0x105:
      return L"D3D10_MESSAGE_ID_CLEARRENDERTARGETVIEW_DENORMFLUSH";
    case 0x106:
      return L"D3D10_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_DENORMFLUSH";
    case 0x107:
      return L"D3D10_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_INVALID";
    case 0x108:
      return L"D3D10_MESSAGE_ID_DEVICE_IAGETVERTEXBUFFERS_BUFFERS_EMPTY";
    case 0x109:
      return L"D3D10_MESSAGE_ID_DEVICE_VSGETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x10a:
      return L"D3D10_MESSAGE_ID_DEVICE_VSGETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x10b:
      return L"D3D10_MESSAGE_ID_DEVICE_VSGETSAMPLERS_SAMPLERS_EMPTY";
    case 0x10c:
      return L"D3D10_MESSAGE_ID_DEVICE_GSGETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x10d:
      return L"D3D10_MESSAGE_ID_DEVICE_GSGETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x10e:
      return L"D3D10_MESSAGE_ID_DEVICE_GSGETSAMPLERS_SAMPLERS_EMPTY";
    case 0x10f:
      return L"D3D10_MESSAGE_ID_DEVICE_SOGETTARGETS_BUFFERS_EMPTY";
    case 0x110:
      return L"D3D10_MESSAGE_ID_DEVICE_PSGETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x111:
      return L"D3D10_MESSAGE_ID_DEVICE_PSGETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x112:
      return L"D3D10_MESSAGE_ID_DEVICE_PSGETSAMPLERS_SAMPLERS_EMPTY";
    case 0x113:
      return L"D3D10_MESSAGE_ID_DEVICE_RSGETVIEWPORTS_VIEWPORTS_EMPTY";
    case 0x114:
      return L"D3D10_MESSAGE_ID_DEVICE_RSGETSCISSORRECTS_RECTS_EMPTY";
    case 0x115:
      return L"D3D10_MESSAGE_ID_DEVICE_GENERATEMIPS_RESOURCE_INVALID";
    case 0x116:
      return L"D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDDESTINATIONSUBRESOURCE";
    case 0x117:
      return L"D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCESUBRESOURCE";
    case 0x118:
      return L"D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCEBOX";
    case 0x119:
      return L"D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCE";
    case 0x11a:
      return L"D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDDESTINATIONSTATE";
    case 0x11b:
      return L"D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCESTATE";
    case 0x11c:
      return L"D3D10_MESSAGE_ID_COPYRESOURCE_INVALIDSOURCE";
    case 0x11d:
      return L"D3D10_MESSAGE_ID_COPYRESOURCE_INVALIDDESTINATIONSTATE";
    case 0x11e:
      return L"D3D10_MESSAGE_ID_COPYRESOURCE_INVALIDSOURCESTATE";
    case 0x11f:
      return L"D3D10_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONSUBRESOURCE";
    case 0x120:
      return L"D3D10_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONBOX";
    case 0x121:
      return L"D3D10_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONSTATE";
    case 0x122:
      return L"D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_DESTINATION_INVALID";
    case 0x123:
      return L"D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_DESTINATION_SUBRESOURCE_INVALID";
    case 0x124:
      return L"D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_SOURCE_INVALID";
    case 0x125:
      return L"D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_SOURCE_SUBRESOURCE_INVALID";
    case 0x126:
      return L"D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_FORMAT_INVALID";
    case 0x127:
      return L"D3D10_MESSAGE_ID_BUFFER_MAP_INVALIDMAPTYPE";
    case 0x128:
      return L"D3D10_MESSAGE_ID_BUFFER_MAP_INVALIDFLAGS";
    case 0x129:
      return L"D3D10_MESSAGE_ID_BUFFER_MAP_ALREADYMAPPED";
    case 0x12a:
      return L"D3D10_MESSAGE_ID_BUFFER_MAP_DEVICEREMOVED_RETURN";
    case 299:
      return L"D3D10_MESSAGE_ID_BUFFER_UNMAP_NOTMAPPED";
    case 300:
      return L"D3D10_MESSAGE_ID_TEXTURE1D_MAP_INVALIDMAPTYPE";
    case 0x12d:
      return L"D3D10_MESSAGE_ID_TEXTURE1D_MAP_INVALIDSUBRESOURCE";
    case 0x12e:
      return L"D3D10_MESSAGE_ID_TEXTURE1D_MAP_INVALIDFLAGS";
    case 0x12f:
      return L"D3D10_MESSAGE_ID_TEXTURE1D_MAP_ALREADYMAPPED";
    case 0x130:
      return L"D3D10_MESSAGE_ID_TEXTURE1D_MAP_DEVICEREMOVED_RETURN";
    case 0x131:
      return L"D3D10_MESSAGE_ID_TEXTURE1D_UNMAP_INVALIDSUBRESOURCE";
    case 0x132:
      return L"D3D10_MESSAGE_ID_TEXTURE1D_UNMAP_NOTMAPPED";
    case 0x133:
      return L"D3D10_MESSAGE_ID_TEXTURE2D_MAP_INVALIDMAPTYPE";
    case 0x134:
      return L"D3D10_MESSAGE_ID_TEXTURE2D_MAP_INVALIDSUBRESOURCE";
    case 0x135:
      return L"D3D10_MESSAGE_ID_TEXTURE2D_MAP_INVALIDFLAGS";
    case 0x136:
      return L"D3D10_MESSAGE_ID_TEXTURE2D_MAP_ALREADYMAPPED";
    case 0x137:
      return L"D3D10_MESSAGE_ID_TEXTURE2D_MAP_DEVICEREMOVED_RETURN";
    case 0x138:
      return L"D3D10_MESSAGE_ID_TEXTURE2D_UNMAP_INVALIDSUBRESOURCE";
    case 0x139:
      return L"D3D10_MESSAGE_ID_TEXTURE2D_UNMAP_NOTMAPPED";
    case 0x13a:
      return L"D3D10_MESSAGE_ID_TEXTURE3D_MAP_INVALIDMAPTYPE";
    case 0x13b:
      return L"D3D10_MESSAGE_ID_TEXTURE3D_MAP_INVALIDSUBRESOURCE";
    case 0x13c:
      return L"D3D10_MESSAGE_ID_TEXTURE3D_MAP_INVALIDFLAGS";
    case 0x13d:
      return L"D3D10_MESSAGE_ID_TEXTURE3D_MAP_ALREADYMAPPED";
    case 0x13e:
      return L"D3D10_MESSAGE_ID_TEXTURE3D_MAP_DEVICEREMOVED_RETURN";
    case 0x13f:
      return L"D3D10_MESSAGE_ID_TEXTURE3D_UNMAP_INVALIDSUBRESOURCE";
    case 0x140:
      return L"D3D10_MESSAGE_ID_TEXTURE3D_UNMAP_NOTMAPPED";
    case 0x141:
      return L"D3D10_MESSAGE_ID_CHECKFORMATSUPPORT_FORMAT_DEPRECATED";
    case 0x142:
      return L"D3D10_MESSAGE_ID_CHECKMULTISAMPLEQUALITYLEVELS_FORMAT_DEPRECATED";
    case 0x143:
      return L"D3D10_MESSAGE_ID_SETEXCEPTIONMODE_UNRECOGNIZEDFLAGS";
    case 0x144:
      return L"D3D10_MESSAGE_ID_SETEXCEPTIONMODE_INVALIDARG_RETURN";
    case 0x145:
      return L"D3D10_MESSAGE_ID_SETEXCEPTIONMODE_DEVICEREMOVED_RETURN";
    case 0x146:
      return L"D3D10_MESSAGE_ID_REF_SIMULATING_INFINITELY_FAST_HARDWARE";
    case 0x147:
      return L"D3D10_MESSAGE_ID_REF_THREADING_MODE";
    case 0x148:
      return L"D3D10_MESSAGE_ID_REF_UMDRIVER_EXCEPTION";
    case 0x149:
      return L"D3D10_MESSAGE_ID_REF_KMDRIVER_EXCEPTION";
    case 0x14a:
      return L"D3D10_MESSAGE_ID_REF_HARDWARE_EXCEPTION";
    case 0x14b:
      return L"D3D10_MESSAGE_ID_REF_ACCESSING_INDEXABLE_TEMP_OUT_OF_RANGE";
    case 0x14c:
      return L"D3D10_MESSAGE_ID_REF_PROBLEM_PARSING_SHADER";
    case 0x14d:
      return L"D3D10_MESSAGE_ID_REF_OUT_OF_MEMORY";
    case 0x14e:
      return L"D3D10_MESSAGE_ID_REF_INFO";
    case 0x14f:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEXPOS_OVERFLOW";
    case 0x150:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAWINDEXED_INDEXPOS_OVERFLOW";
    case 0x151:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAWINSTANCED_VERTEXPOS_OVERFLOW";
    case 0x152:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAWINSTANCED_INSTANCEPOS_OVERFLOW";
    case 0x153:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAWINDEXEDINSTANCED_INSTANCEPOS_OVERFLOW";
    case 0x154:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAWINDEXEDINSTANCED_INDEXPOS_OVERFLOW";
    case 0x155:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_SHADER_NOT_SET";
    case 0x156:
      return L"D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_SEMANTICNAME_NOT_FOUND";
    case 0x157:
      return L"D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_REGISTERINDEX";
    case 0x158:
      return L"D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_COMPONENTTYPE";
    case 0x159:
      return L"D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_REGISTERMASK";
    case 0x15a:
      return L"D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_SYSTEMVALUE";
    case 0x15b:
      return L"D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_NEVERWRITTEN_ALWAYSREADS";
    case 0x15c:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_NOT_SET";
    case 0x15d:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_INPUTLAYOUT_NOT_SET";
    case 0x15e:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_CONSTANT_BUFFER_NOT_SET";
    case 0x15f:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_CONSTANT_BUFFER_TOO_SMALL";
    case 0x160:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_SAMPLER_NOT_SET";
    case 0x161:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_SHADERRESOURCEVIEW_NOT_SET";
    case 0x162:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_VIEW_DIMENSION_MISMATCH";
    case 0x163:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_STRIDE_TOO_SMALL";
    case 0x164:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_TOO_SMALL";
    case 0x165:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_NOT_SET";
    case 0x166:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_FORMAT_INVALID";
    case 0x167:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_TOO_SMALL";
    case 0x168:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_GS_INPUT_PRIMITIVE_MISMATCH";
    case 0x169:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_RETURN_TYPE_MISMATCH";
    case 0x16a:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_POSITION_NOT_PRESENT";
    case 0x16b:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_OUTPUT_STREAM_NOT_SET";
    case 0x16c:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_BOUND_RESOURCE_MAPPED";
    case 0x16d:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_INVALID_PRIMITIVETOPOLOGY";
    case 0x16e:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_OFFSET_UNALIGNED";
    case 0x16f:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_STRIDE_UNALIGNED";
    case 0x170:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_INDEX_OFFSET_UNALIGNED";
    case 0x171:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_OUTPUT_STREAM_OFFSET_UNALIGNED";
    case 0x172:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_LD_UNSUPPORTED";
    case 0x173:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_SAMPLE_UNSUPPORTED";
    case 0x174:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_SAMPLE_C_UNSUPPORTED";
    case 0x175:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_MULTISAMPLE_UNSUPPORTED";
    case 0x176:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_SO_TARGETS_BOUND_WITHOUT_SOURCE";
    case 0x177:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_SO_STRIDE_LARGER_THAN_BUFFER";
    case 0x178:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_OM_RENDER_TARGET_DOES_NOT_SUPPORT_BLENDING";
    case 0x179:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_OM_DUAL_SOURCE_BLENDING_CAN_ONLY_HAVE_RENDER_TARGET_0";
    case 0x17a:
      return L"D3D10_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_AT_FAULT";
    case 0x17b:
      return L"D3D10_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_POSSIBLY_AT_FAULT";
    case 0x17c:
      return L"D3D10_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_NOT_AT_FAULT";
    case 0x17d:
      return L"D3D10_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_INVALIDARG_RETURN";
    case 0x17e:
      return L"D3D10_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_OUTOFMEMORY_RETURN";
    case 0x17f:
      return L"D3D10_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_BADINTERFACE_RETURN";
    case 0x180:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_VIEWPORT_NOT_SET";
    case 0x181:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_TRAILING_DIGIT_IN_SEMANTIC";
    case 0x182:
      return L"D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_TRAILING_DIGIT_IN_SEMANTIC";
    case 0x183:
      return L"D3D10_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_DENORMFLUSH";
    case 0x184:
      return L"D3D10_MESSAGE_ID_OMSETRENDERTARGETS_INVALIDVIEW";
    case 0x185:
      return L"D3D10_MESSAGE_ID_DEVICE_SETTEXTFILTERSIZE_INVALIDDIMENSIONS";
    case 0x186:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_SAMPLER_MISMATCH";
    case 0x187:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_TYPE_MISMATCH";
    case 0x188:
      return L"D3D10_MESSAGE_ID_BLENDSTATE_GETDESC_LEGACY";
    case 0x189:
      return L"D3D10_MESSAGE_ID_SHADERRESOURCEVIEW_GETDESC_LEGACY";
    case 0x18a:
      return L"D3D10_MESSAGE_ID_CREATEQUERY_OUTOFMEMORY_RETURN";
    case 0x18b:
      return L"D3D10_MESSAGE_ID_CREATEPREDICATE_OUTOFMEMORY_RETURN";
    case 0x18c:
      return L"D3D10_MESSAGE_ID_CREATECOUNTER_OUTOFRANGE_COUNTER";
    case 0x18d:
      return L"D3D10_MESSAGE_ID_CREATECOUNTER_SIMULTANEOUS_ACTIVE_COUNTERS_EXHAUSTED";
    case 0x18e:
      return L"D3D10_MESSAGE_ID_CREATECOUNTER_UNSUPPORTED_WELLKNOWN_COUNTER";
    case 399:
      return L"D3D10_MESSAGE_ID_CREATECOUNTER_OUTOFMEMORY_RETURN";
    case 400:
      return L"D3D10_MESSAGE_ID_CREATECOUNTER_NONEXCLUSIVE_RETURN";
    case 0x191:
      return L"D3D10_MESSAGE_ID_CREATECOUNTER_NULLDESC";
    case 0x192:
      return L"D3D10_MESSAGE_ID_CHECKCOUNTER_OUTOFRANGE_COUNTER";
    case 0x193:
      return L"D3D10_MESSAGE_ID_CHECKCOUNTER_UNSUPPORTED_WELLKNOWN_COUNTER";
    case 0x194:
      return L"D3D10_MESSAGE_ID_SETPREDICATION_INVALID_PREDICATE_STATE";
    case 0x195:
      return L"D3D10_MESSAGE_ID_QUERY_BEGIN_UNSUPPORTED";
    case 0x196:
      return L"D3D10_MESSAGE_ID_PREDICATE_BEGIN_DURING_PREDICATION";
    case 0x197:
      return L"D3D10_MESSAGE_ID_QUERY_BEGIN_DUPLICATE";
    case 0x198:
      return L"D3D10_MESSAGE_ID_QUERY_BEGIN_ABANDONING_PREVIOUS_RESULTS";
    case 0x199:
      return L"D3D10_MESSAGE_ID_PREDICATE_END_DURING_PREDICATION";
    case 0x19a:
      return L"D3D10_MESSAGE_ID_QUERY_END_ABANDONING_PREVIOUS_RESULTS";
    case 0x19b:
      return L"D3D10_MESSAGE_ID_QUERY_END_WITHOUT_BEGIN";
    case 0x19c:
      return L"D3D10_MESSAGE_ID_QUERY_GETDATA_INVALID_DATASIZE";
    case 0x19d:
      return L"D3D10_MESSAGE_ID_QUERY_GETDATA_INVALID_FLAGS";
    case 0x19e:
      return L"D3D10_MESSAGE_ID_QUERY_GETDATA_INVALID_CALL";
    case 0x19f:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_PS_OUTPUT_TYPE_MISMATCH";
    case 0x1a0:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_GATHER_UNSUPPORTED";
    case 0x1a1:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_INVALID_USE_OF_CENTER_MULTISAMPLE_PATTERN";
    case 0x1a2:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_STRIDE_TOO_LARGE";
    case 0x1a3:
      return L"D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_INVALIDRANGE";
    case 0x1a4:
      return L"D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_EMPTY_LAYOUT";
    case 0x1a5:
      return L"D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_SAMPLE_COUNT_MISMATCH";
    case 0x1a6:
      return L"D3D10_MESSAGE_ID_LIVE_OBJECT_SUMMARY";
    case 0x1a7:
      return L"D3D10_MESSAGE_ID_LIVE_BUFFER";
    case 0x1a8:
      return L"D3D10_MESSAGE_ID_LIVE_TEXTURE1D";
    case 0x1a9:
      return L"D3D10_MESSAGE_ID_LIVE_TEXTURE2D";
    case 0x1aa:
      return L"D3D10_MESSAGE_ID_LIVE_TEXTURE3D";
    case 0x1ab:
      return L"D3D10_MESSAGE_ID_LIVE_SHADERRESOURCEVIEW";
    case 0x1ac:
      return L"D3D10_MESSAGE_ID_LIVE_RENDERTARGETVIEW";
    case 0x1ad:
      return L"D3D10_MESSAGE_ID_LIVE_DEPTHSTENCILVIEW";
    case 0x1ae:
      return L"D3D10_MESSAGE_ID_LIVE_VERTEXSHADER";
    case 0x1af:
      return L"D3D10_MESSAGE_ID_LIVE_GEOMETRYSHADER";
    case 0x1b0:
      return L"D3D10_MESSAGE_ID_LIVE_PIXELSHADER";
    case 0x1b1:
      return L"D3D10_MESSAGE_ID_LIVE_INPUTLAYOUT";
    case 0x1b2:
      return L"D3D10_MESSAGE_ID_LIVE_SAMPLER";
    case 0x1b3:
      return L"D3D10_MESSAGE_ID_LIVE_BLENDSTATE";
    case 0x1b4:
      return L"D3D10_MESSAGE_ID_LIVE_DEPTHSTENCILSTATE";
    case 0x1b5:
      return L"D3D10_MESSAGE_ID_LIVE_RASTERIZERSTATE";
    case 0x1b6:
      return L"D3D10_MESSAGE_ID_LIVE_QUERY";
    case 0x1b7:
      return L"D3D10_MESSAGE_ID_LIVE_PREDICATE";
    case 0x1b8:
      return L"D3D10_MESSAGE_ID_LIVE_COUNTER";
    case 0x1b9:
      return L"D3D10_MESSAGE_ID_LIVE_DEVICE";
    case 0x1ba:
      return L"D3D10_MESSAGE_ID_LIVE_SWAPCHAIN";
    }
  }
  else if (uVar1 < 0x200002) {
    if (uVar1 == 0x200001) {
      return L"D3D11_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDFLAGS";
    }
    switch(uVar1) {
    case 0x100002:
      return L"D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_DepthBiasClamp_NOT_SUPPORTED";
    case 0x100003:
      return L"D3D11_MESSAGE_ID_CREATESAMPLERSTATE_NO_COMPARISON_SUPPORT";
    case 0x100004:
      return L"D3D11_MESSAGE_ID_CREATESAMPLERSTATE_EXCESSIVE_ANISOTROPY";
    case 0x100005:
      return L"D3D11_MESSAGE_ID_CREATESAMPLERSTATE_BORDER_OUT_OF_RANGE";
    case 0x100006:
      return L"D3D11_MESSAGE_ID_VSSETSAMPLERS_NOT_SUPPORTED";
    case 0x100007:
      return L"D3D11_MESSAGE_ID_VSSETSAMPLERS_TOO_MANY_SAMPLERS";
    case 0x100008:
      return L"D3D11_MESSAGE_ID_PSSETSAMPLERS_TOO_MANY_SAMPLERS";
    case 0x100009:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_NO_ARRAYS";
    case 0x10000a:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_NO_VB_AND_IB_BIND";
    case 0x10000b:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_NO_TEXTURE_1D";
    case 0x10000c:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_DIMENSION_OUT_OF_RANGE";
    case 0x10000d:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_NOT_BINDABLE_AS_SHADER_RESOURCE";
    case 0x10000e:
      return L"D3D11_MESSAGE_ID_OMSETRENDERTARGETS_TOO_MANY_RENDER_TARGETS";
    case 0x10000f:
      return L"D3D11_MESSAGE_ID_OMSETRENDERTARGETS_NO_DIFFERING_BIT_DEPTHS";
    case 0x100010:
      return L"D3D11_MESSAGE_ID_IASETVERTEXBUFFERS_BAD_BUFFER_INDEX";
    case 0x100011:
      return L"D3D11_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_TOO_MANY_VIEWPORTS";
    case 0x100012:
      return L"D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_ADJACENCY_UNSUPPORTED";
    case 0x100013:
      return L"D3D11_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_TOO_MANY_SCISSORS";
    case 0x100014:
      return L"D3D11_MESSAGE_ID_COPYRESOURCE_ONLY_TEXTURE_2D_WITHIN_GPU_MEMORY";
    case 0x100015:
      return L"D3D11_MESSAGE_ID_COPYRESOURCE_NO_TEXTURE_3D_READBACK";
    case 0x100016:
      return L"D3D11_MESSAGE_ID_COPYRESOURCE_NO_TEXTURE_ONLY_READBACK";
    case 0x100017:
      return L"D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_UNSUPPORTED_FORMAT";
    case 0x100018:
      return L"D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_ALPHA_TO_COVERAGE";
    case 0x100019:
      return L"D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_DepthClipEnable_MUST_BE_TRUE";
    case 0x10001a:
      return L"D3D11_MESSAGE_ID_DRAWINDEXED_STARTINDEXLOCATION_MUST_BE_POSITIVE";
    case 0x10001b:
      return L"D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_MUST_USE_LOWEST_LOD";
    case 0x10001c:
      return L"D3D11_MESSAGE_ID_CREATESAMPLERSTATE_MINLOD_MUST_NOT_BE_FRACTIONAL";
    case 0x10001d:
      return L"D3D11_MESSAGE_ID_CREATESAMPLERSTATE_MAXLOD_MUST_BE_FLT_MAX";
    case 0x10001e:
      return L"D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_FIRSTARRAYSLICE_MUST_BE_ZERO";
    case 0x10001f:
      return L"D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_CUBES_MUST_HAVE_6_SIDES";
    case 0x100020:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_NOT_BINDABLE_AS_RENDER_TARGET";
    case 0x100021:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_NO_DWORD_INDEX_BUFFER";
    case 0x100022:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_MSAA_PRECLUDES_SHADER_RESOURCE";
    case 0x100023:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_PRESENTATION_PRECLUDES_SHADER_RESOURCE";
    case 0x100024:
      return L"D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_INDEPENDENT_BLEND_ENABLE";
    case 0x100025:
      return L"D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_INDEPENDENT_WRITE_MASKS";
    case 0x100026:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_NO_STREAM_OUT";
    case 0x100027:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_ONLY_VB_IB_FOR_BUFFERS";
    case 0x100028:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_NO_AUTOGEN_FOR_VOLUMES";
    case 0x100029:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_DXGI_FORMAT_R8G8B8A8_CANNOT_BE_SHARED";
    case 0x10002a:
      return L"D3D11_MESSAGE_ID_VSSHADERRESOURCES_NOT_SUPPORTED";
    case 0x10002b:
      return L"D3D11_MESSAGE_ID_GEOMETRY_SHADER_NOT_SUPPORTED";
    case 0x10002c:
      return L"D3D11_MESSAGE_ID_STREAM_OUT_NOT_SUPPORTED";
    case 0x10002d:
      return L"D3D11_MESSAGE_ID_TEXT_FILTER_NOT_SUPPORTED";
    case 0x10002e:
      return L"D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_SEPARATE_ALPHA_BLEND";
    case 0x10002f:
      return L"D3D11_MESSAGE_ID_CREATEBLENDSTATE_NO_MRT_BLEND";
    case 0x100030:
      return L"D3D11_MESSAGE_ID_CREATEBLENDSTATE_OPERATION_NOT_SUPPORTED";
    case 0x100031:
      return L"D3D11_MESSAGE_ID_CREATESAMPLERSTATE_NO_MIRRORONCE";
    case 0x100032:
      return L"D3D11_MESSAGE_ID_DRAWINSTANCED_NOT_SUPPORTED";
    case 0x100033:
      return L"D3D11_MESSAGE_ID_DRAWINDEXEDINSTANCED_NOT_SUPPORTED_BELOW_9_3";
    case 0x100034:
      return L"D3D11_MESSAGE_ID_DRAWINDEXED_POINTLIST_UNSUPPORTED";
    case 0x100035:
      return L"D3D11_MESSAGE_ID_SETBLENDSTATE_SAMPLE_MASK_CANNOT_BE_ZERO";
    case 0x100036:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_DIMENSION_EXCEEDS_FEATURE_LEVEL_DEFINITION";
    case 0x100037:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_ONLY_SINGLE_MIP_LEVEL_DEPTH_STENCIL_SUPPORTED";
    case 0x100038:
      return L"D3D11_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_NEGATIVESCISSOR";
    case 0x100039:
      return L"D3D11_MESSAGE_ID_SLOT_ZERO_MUST_BE_D3D10_INPUT_PER_VERTEX_DATA";
    case 0x10003a:
      return L"D3D11_MESSAGE_ID_CREATERESOURCE_NON_POW_2_MIPMAP";
    case 0x10003b:
      return L"D3D11_MESSAGE_ID_CREATESAMPLERSTATE_BORDER_NOT_SUPPORTED";
    case 0x10003c:
      return L"D3D11_MESSAGE_ID_OMSETRENDERTARGETS_NO_SRGB_MRT";
    case 0x10003d:
      return L"D3D11_MESSAGE_ID_COPYRESOURCE_NO_3D_MISMATCHED_UPDATES";
    }
  }
  else if (uVar1 < 0x300002) {
    if (uVar1 == 0x300001) {
      return L"D3D11_MESSAGE_ID_CREATE_VIDEODECODER";
    }
    switch(uVar1) {
    case 0x200002:
      return L"D3D11_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDCLASSLINKAGE";
    case 0x200003:
      return L"D3D11_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDCLASSLINKAGE";
    case 0x200004:
      return L"D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMSTREAMS";
    case 0x200005:
      return L"D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTREAMTORASTERIZER";
    case 0x200006:
      return L"D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDSTREAMS";
    case 0x200007:
      return L"D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDCLASSLINKAGE";
    case 0x200008:
      return L"D3D11_MESSAGE_ID_CREATEPIXELSHADER_INVALIDCLASSLINKAGE";
    case 0x200009:
      return L"D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_INVALID_COMMANDLISTFLAGS";
    case 0x20000a:
      return L"D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_SINGLETHREADED";
    case 0x20000b:
      return L"D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_INVALIDARG_RETURN";
    case 0x20000c:
      return L"D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_INVALID_CALL_RETURN";
    case 0x20000d:
      return L"D3D11_MESSAGE_ID_CREATEDEFERREDCONTEXT_OUTOFMEMORY_RETURN";
    case 0x20000e:
      return L"D3D11_MESSAGE_ID_FINISHDISPLAYLIST_ONIMMEDIATECONTEXT";
    case 0x20000f:
      return L"D3D11_MESSAGE_ID_FINISHDISPLAYLIST_OUTOFMEMORY_RETURN";
    case 0x200010:
      return L"D3D11_MESSAGE_ID_FINISHDISPLAYLIST_INVALID_CALL_RETURN";
    case 0x200011:
      return L"D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTREAM";
    case 0x200012:
      return L"D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDENTRIES";
    case 0x200013:
      return L"D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDSTRIDES";
    case 0x200014:
      return L"D3D11_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMSTRIDES";
    case 0x200015:
      return L"D3D11_MESSAGE_ID_DEVICE_HSSETSHADERRESOURCES_HAZARD";
    case 0x200016:
      return L"D3D11_MESSAGE_ID_DEVICE_HSSETCONSTANTBUFFERS_HAZARD";
    case 0x200017:
      return L"D3D11_MESSAGE_ID_HSSETSHADERRESOURCES_UNBINDDELETINGOBJECT";
    case 0x200018:
      return L"D3D11_MESSAGE_ID_HSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT";
    case 0x200019:
      return L"D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDCALL";
    case 0x20001a:
      return L"D3D11_MESSAGE_ID_CREATEHULLSHADER_OUTOFMEMORY";
    case 0x20001b:
      return L"D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDSHADERBYTECODE";
    case 0x20001c:
      return L"D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDSHADERTYPE";
    case 0x20001d:
      return L"D3D11_MESSAGE_ID_CREATEHULLSHADER_INVALIDCLASSLINKAGE";
    case 0x20001e:
      return L"D3D11_MESSAGE_ID_DEVICE_HSSETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x20001f:
      return L"D3D11_MESSAGE_ID_HSSETCONSTANTBUFFERS_INVALIDBUFFER";
    case 0x200020:
      return L"D3D11_MESSAGE_ID_DEVICE_HSSETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x200021:
      return L"D3D11_MESSAGE_ID_DEVICE_HSSETSAMPLERS_SAMPLERS_EMPTY";
    case 0x200022:
      return L"D3D11_MESSAGE_ID_DEVICE_HSGETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x200023:
      return L"D3D11_MESSAGE_ID_DEVICE_HSGETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x200024:
      return L"D3D11_MESSAGE_ID_DEVICE_HSGETSAMPLERS_SAMPLERS_EMPTY";
    case 0x200025:
      return L"D3D11_MESSAGE_ID_DEVICE_DSSETSHADERRESOURCES_HAZARD";
    case 0x200026:
      return L"D3D11_MESSAGE_ID_DEVICE_DSSETCONSTANTBUFFERS_HAZARD";
    case 0x200027:
      return L"D3D11_MESSAGE_ID_DSSETSHADERRESOURCES_UNBINDDELETINGOBJECT";
    case 0x200028:
      return L"D3D11_MESSAGE_ID_DSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT";
    case 0x200029:
      return L"D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDCALL";
    case 0x20002a:
      return L"D3D11_MESSAGE_ID_CREATEDOMAINSHADER_OUTOFMEMORY";
    case 0x20002b:
      return L"D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDSHADERBYTECODE";
    case 0x20002c:
      return L"D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDSHADERTYPE";
    case 0x20002d:
      return L"D3D11_MESSAGE_ID_CREATEDOMAINSHADER_INVALIDCLASSLINKAGE";
    case 0x20002e:
      return L"D3D11_MESSAGE_ID_DEVICE_DSSETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x20002f:
      return L"D3D11_MESSAGE_ID_DSSETCONSTANTBUFFERS_INVALIDBUFFER";
    case 0x200030:
      return L"D3D11_MESSAGE_ID_DEVICE_DSSETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x200031:
      return L"D3D11_MESSAGE_ID_DEVICE_DSSETSAMPLERS_SAMPLERS_EMPTY";
    case 0x200032:
      return L"D3D11_MESSAGE_ID_DEVICE_DSGETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x200033:
      return L"D3D11_MESSAGE_ID_DEVICE_DSGETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x200034:
      return L"D3D11_MESSAGE_ID_DEVICE_DSGETSAMPLERS_SAMPLERS_EMPTY";
    case 0x200035:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_HS_XOR_DS_MISMATCH";
    case 0x200036:
      return L"D3D11_MESSAGE_ID_DEFERRED_CONTEXT_REMOVAL_PROCESS_AT_FAULT";
    case 0x200037:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAWINDIRECT_INVALID_ARG_BUFFER";
    case 0x200038:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAWINDIRECT_OFFSET_UNALIGNED";
    case 0x200039:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAWINDIRECT_OFFSET_OVERFLOW";
    case 0x20003a:
      return L"D3D11_MESSAGE_ID_RESOURCE_MAP_INVALIDMAPTYPE";
    case 0x20003b:
      return L"D3D11_MESSAGE_ID_RESOURCE_MAP_INVALIDSUBRESOURCE";
    case 0x20003c:
      return L"D3D11_MESSAGE_ID_RESOURCE_MAP_INVALIDFLAGS";
    case 0x20003d:
      return L"D3D11_MESSAGE_ID_RESOURCE_MAP_ALREADYMAPPED";
    case 0x20003e:
      return L"D3D11_MESSAGE_ID_RESOURCE_MAP_DEVICEREMOVED_RETURN";
    case 0x20003f:
      return L"D3D11_MESSAGE_ID_RESOURCE_MAP_OUTOFMEMORY_RETURN";
    case 0x200040:
      return L"D3D11_MESSAGE_ID_RESOURCE_MAP_WITHOUT_INITIAL_DISCARD";
    case 0x200041:
      return L"D3D11_MESSAGE_ID_RESOURCE_UNMAP_INVALIDSUBRESOURCE";
    case 0x200042:
      return L"D3D11_MESSAGE_ID_RESOURCE_UNMAP_NOTMAPPED";
    case 0x200043:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_RASTERIZING_CONTROL_POINTS";
    case 0x200044:
      return L"D3D11_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNSUPPORTED";
    case 0x200045:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_HS_DS_SIGNATURE_MISMATCH";
    case 0x200046:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_HULL_SHADER_INPUT_TOPOLOGY_MISMATCH";
    case 0x200047:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_HS_DS_CONTROL_POINT_COUNT_MISMATCH";
    case 0x200048:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_HS_DS_TESSELLATOR_DOMAIN_MISMATCH";
    case 0x200049:
      return L"D3D11_MESSAGE_ID_CREATE_CONTEXT";
    case 0x20004a:
      return L"D3D11_MESSAGE_ID_LIVE_CONTEXT";
    case 0x20004b:
      return L"D3D11_MESSAGE_ID_DESTROY_CONTEXT";
    case 0x20004c:
      return L"D3D11_MESSAGE_ID_CREATE_BUFFER";
    case 0x20004d:
      return L"D3D11_MESSAGE_ID_LIVE_BUFFER_WIN7";
    case 0x20004e:
      return L"D3D11_MESSAGE_ID_DESTROY_BUFFER";
    case 0x20004f:
      return L"D3D11_MESSAGE_ID_CREATE_TEXTURE1D";
    case 0x200050:
      return L"D3D11_MESSAGE_ID_LIVE_TEXTURE1D_WIN7";
    case 0x200051:
      return L"D3D11_MESSAGE_ID_DESTROY_TEXTURE1D";
    case 0x200052:
      return L"D3D11_MESSAGE_ID_CREATE_TEXTURE2D";
    case 0x200053:
      return L"D3D11_MESSAGE_ID_LIVE_TEXTURE2D_WIN7";
    case 0x200054:
      return L"D3D11_MESSAGE_ID_DESTROY_TEXTURE2D";
    case 0x200055:
      return L"D3D11_MESSAGE_ID_CREATE_TEXTURE3D";
    case 0x200056:
      return L"D3D11_MESSAGE_ID_LIVE_TEXTURE3D_WIN7";
    case 0x200057:
      return L"D3D11_MESSAGE_ID_DESTROY_TEXTURE3D";
    case 0x200058:
      return L"D3D11_MESSAGE_ID_CREATE_SHADERRESOURCEVIEW";
    case 0x200059:
      return L"D3D11_MESSAGE_ID_LIVE_SHADERRESOURCEVIEW_WIN7";
    case 0x20005a:
      return L"D3D11_MESSAGE_ID_DESTROY_SHADERRESOURCEVIEW";
    case 0x20005b:
      return L"D3D11_MESSAGE_ID_CREATE_RENDERTARGETVIEW";
    case 0x20005c:
      return L"D3D11_MESSAGE_ID_LIVE_RENDERTARGETVIEW_WIN7";
    case 0x20005d:
      return L"D3D11_MESSAGE_ID_DESTROY_RENDERTARGETVIEW";
    case 0x20005e:
      return L"D3D11_MESSAGE_ID_CREATE_DEPTHSTENCILVIEW";
    case 0x20005f:
      return L"D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILVIEW_WIN7";
    case 0x200060:
      return L"D3D11_MESSAGE_ID_DESTROY_DEPTHSTENCILVIEW";
    case 0x200061:
      return L"D3D11_MESSAGE_ID_CREATE_VERTEXSHADER";
    case 0x200062:
      return L"D3D11_MESSAGE_ID_LIVE_VERTEXSHADER_WIN7";
    case 0x200063:
      return L"D3D11_MESSAGE_ID_DESTROY_VERTEXSHADER";
    case 0x200064:
      return L"D3D11_MESSAGE_ID_CREATE_HULLSHADER";
    case 0x200065:
      return L"D3D11_MESSAGE_ID_LIVE_HULLSHADER";
    case 0x200066:
      return L"D3D11_MESSAGE_ID_DESTROY_HULLSHADER";
    case 0x200067:
      return L"D3D11_MESSAGE_ID_CREATE_DOMAINSHADER";
    case 0x200068:
      return L"D3D11_MESSAGE_ID_LIVE_DOMAINSHADER";
    case 0x200069:
      return L"D3D11_MESSAGE_ID_DESTROY_DOMAINSHADER";
    case 0x20006a:
      return L"D3D11_MESSAGE_ID_CREATE_GEOMETRYSHADER";
    case 0x20006b:
      return L"D3D11_MESSAGE_ID_LIVE_GEOMETRYSHADER_WIN7";
    case 0x20006c:
      return L"D3D11_MESSAGE_ID_DESTROY_GEOMETRYSHADER";
    case 0x20006d:
      return L"D3D11_MESSAGE_ID_CREATE_PIXELSHADER";
    case 0x20006e:
      return L"D3D11_MESSAGE_ID_LIVE_PIXELSHADER_WIN7";
    case 0x20006f:
      return L"D3D11_MESSAGE_ID_DESTROY_PIXELSHADER";
    case 0x200070:
      return L"D3D11_MESSAGE_ID_CREATE_INPUTLAYOUT";
    case 0x200071:
      return L"D3D11_MESSAGE_ID_LIVE_INPUTLAYOUT_WIN7";
    case 0x200072:
      return L"D3D11_MESSAGE_ID_DESTROY_INPUTLAYOUT";
    case 0x200073:
      return L"D3D11_MESSAGE_ID_CREATE_SAMPLER";
    case 0x200074:
      return L"D3D11_MESSAGE_ID_LIVE_SAMPLER_WIN7";
    case 0x200075:
      return L"D3D11_MESSAGE_ID_DESTROY_SAMPLER";
    case 0x200076:
      return L"D3D11_MESSAGE_ID_CREATE_BLENDSTATE";
    case 0x200077:
      return L"D3D11_MESSAGE_ID_LIVE_BLENDSTATE_WIN7";
    case 0x200078:
      return L"D3D11_MESSAGE_ID_DESTROY_BLENDSTATE";
    case 0x200079:
      return L"D3D11_MESSAGE_ID_CREATE_DEPTHSTENCILSTATE";
    case 0x20007a:
      return L"D3D11_MESSAGE_ID_LIVE_DEPTHSTENCILSTATE_WIN7";
    case 0x20007b:
      return L"D3D11_MESSAGE_ID_DESTROY_DEPTHSTENCILSTATE";
    case 0x20007c:
      return L"D3D11_MESSAGE_ID_CREATE_RASTERIZERSTATE";
    case 0x20007d:
      return L"D3D11_MESSAGE_ID_LIVE_RASTERIZERSTATE_WIN7";
    case 0x20007e:
      return L"D3D11_MESSAGE_ID_DESTROY_RASTERIZERSTATE";
    case 0x20007f:
      return L"D3D11_MESSAGE_ID_CREATE_QUERY";
    case 0x200080:
      return L"D3D11_MESSAGE_ID_LIVE_QUERY_WIN7";
    case 0x200081:
      return L"D3D11_MESSAGE_ID_DESTROY_QUERY";
    case 0x200082:
      return L"D3D11_MESSAGE_ID_CREATE_PREDICATE";
    case 0x200083:
      return L"D3D11_MESSAGE_ID_LIVE_PREDICATE_WIN7";
    case 0x200084:
      return L"D3D11_MESSAGE_ID_DESTROY_PREDICATE";
    case 0x200085:
      return L"D3D11_MESSAGE_ID_CREATE_COUNTER";
    case 0x200086:
      return L"D3D11_MESSAGE_ID_DESTROY_COUNTER";
    case 0x200087:
      return L"D3D11_MESSAGE_ID_CREATE_COMMANDLIST";
    case 0x200088:
      return L"D3D11_MESSAGE_ID_LIVE_COMMANDLIST";
    case 0x200089:
      return L"D3D11_MESSAGE_ID_DESTROY_COMMANDLIST";
    case 0x20008a:
      return L"D3D11_MESSAGE_ID_CREATE_CLASSINSTANCE";
    case 0x20008b:
      return L"D3D11_MESSAGE_ID_LIVE_CLASSINSTANCE";
    case 0x20008c:
      return L"D3D11_MESSAGE_ID_DESTROY_CLASSINSTANCE";
    case 0x20008d:
      return L"D3D11_MESSAGE_ID_CREATE_CLASSLINKAGE";
    case 0x20008e:
      return L"D3D11_MESSAGE_ID_LIVE_CLASSLINKAGE";
    case 0x20008f:
      return L"D3D11_MESSAGE_ID_DESTROY_CLASSLINKAGE";
    case 0x200090:
      return L"D3D11_MESSAGE_ID_LIVE_DEVICE_WIN7";
    case 0x200091:
      return L"D3D11_MESSAGE_ID_LIVE_OBJECT_SUMMARY_WIN7";
    case 0x200092:
      return L"D3D11_MESSAGE_ID_CREATE_COMPUTESHADER";
    case 0x200093:
      return L"D3D11_MESSAGE_ID_LIVE_COMPUTESHADER";
    case 0x200094:
      return L"D3D11_MESSAGE_ID_DESTROY_COMPUTESHADER";
    case 0x200095:
      return L"D3D11_MESSAGE_ID_CREATE_UNORDEREDACCESSVIEW";
    case 0x200096:
      return L"D3D11_MESSAGE_ID_LIVE_UNORDEREDACCESSVIEW";
    case 0x200097:
      return L"D3D11_MESSAGE_ID_DESTROY_UNORDEREDACCESSVIEW";
    case 0x200098:
      return L"D3D11_MESSAGE_ID_DEVICE_SETSHADER_INTERFACES_FEATURELEVEL";
    case 0x200099:
      return L"D3D11_MESSAGE_ID_DEVICE_SETSHADER_INTERFACE_COUNT_MISMATCH";
    case 0x20009a:
      return L"D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE";
    case 0x20009b:
      return L"D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE_INDEX";
    case 0x20009c:
      return L"D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE_TYPE";
    case 0x20009d:
      return L"D3D11_MESSAGE_ID_DEVICE_SETSHADER_INVALID_INSTANCE_DATA";
    case 0x20009e:
      return L"D3D11_MESSAGE_ID_DEVICE_SETSHADER_UNBOUND_INSTANCE_DATA";
    case 0x20009f:
      return L"D3D11_MESSAGE_ID_DEVICE_SETSHADER_INSTANCE_DATA_BINDINGS";
    case 0x2000a0:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATESHADER_CLASSLINKAGE_FULL";
    case 0x2000a1:
      return L"D3D11_MESSAGE_ID_DEVICE_CHECKFEATURESUPPORT_UNRECOGNIZED_FEATURE";
    case 0x2000a2:
      return L"D3D11_MESSAGE_ID_DEVICE_CHECKFEATURESUPPORT_MISMATCHED_DATA_SIZE";
    case 0x2000a3:
      return L"D3D11_MESSAGE_ID_DEVICE_CHECKFEATURESUPPORT_INVALIDARG_RETURN";
    case 0x2000a4:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETSHADERRESOURCES_HAZARD";
    case 0x2000a5:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETCONSTANTBUFFERS_HAZARD";
    case 0x2000a6:
      return L"D3D11_MESSAGE_ID_CSSETSHADERRESOURCES_UNBINDDELETINGOBJECT";
    case 0x2000a7:
      return L"D3D11_MESSAGE_ID_CSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT";
    case 0x2000a8:
      return L"D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDCALL";
    case 0x2000a9:
      return L"D3D11_MESSAGE_ID_CREATECOMPUTESHADER_OUTOFMEMORY";
    case 0x2000aa:
      return L"D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDSHADERBYTECODE";
    case 0x2000ab:
      return L"D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDSHADERTYPE";
    case 0x2000ac:
      return L"D3D11_MESSAGE_ID_CREATECOMPUTESHADER_INVALIDCLASSLINKAGE";
    case 0x2000ad:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x2000ae:
      return L"D3D11_MESSAGE_ID_CSSETCONSTANTBUFFERS_INVALIDBUFFER";
    case 0x2000af:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x2000b0:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETSAMPLERS_SAMPLERS_EMPTY";
    case 0x2000b1:
      return L"D3D11_MESSAGE_ID_DEVICE_CSGETSHADERRESOURCES_VIEWS_EMPTY";
    case 0x2000b2:
      return L"D3D11_MESSAGE_ID_DEVICE_CSGETCONSTANTBUFFERS_BUFFERS_EMPTY";
    case 0x2000b3:
      return L"D3D11_MESSAGE_ID_DEVICE_CSGETSAMPLERS_SAMPLERS_EMPTY";
    case 0x2000b4:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_DOUBLEFLOATOPSNOTSUPPORTED";
    case 0x2000b5:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_DOUBLEFLOATOPSNOTSUPPORTED";
    case 0x2000b6:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_DOUBLEFLOATOPSNOTSUPPORTED";
    case 0x2000b7:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_DOUBLEFLOATOPSNOTSUPPORTED";
    case 0x2000b8:
      return 
      L"D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DOUBLEFLOATOPSNOTSUPPORTED";
    case 0x2000b9:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_DOUBLEFLOATOPSNOTSUPPORTED";
    case 0x2000ba:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_DOUBLEFLOATOPSNOTSUPPORTED";
    case 0x2000bb:
      return L"D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDSTRUCTURESTRIDE";
    case 0x2000bc:
      return L"D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDFLAGS";
    case 0x2000bd:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDRESOURCE";
    case 0x2000be:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDDESC";
    case 0x2000bf:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDFORMAT";
    case 0x2000c0:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDDIMENSIONS";
    case 0x2000c1:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_UNRECOGNIZEDFORMAT";
    case 0x2000c2:
      return L"D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_HAZARD";
    case 0x2000c3:
      return 
      L"D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_OVERLAPPING_OLD_SLOTS";
    case 0x2000c4:
      return L"D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_NO_OP";
    case 0x2000c5:
      return L"D3D11_MESSAGE_ID_CSSETUNORDEREDACCESSVIEWS_UNBINDDELETINGOBJECT";
    case 0x2000c6:
      return L"D3D11_MESSAGE_ID_PSSETUNORDEREDACCESSVIEWS_UNBINDDELETINGOBJECT";
    case 0x2000c7:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDARG_RETURN";
    case 0x2000c8:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_OUTOFMEMORY_RETURN";
    case 0x2000c9:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_TOOMANYOBJECTS";
    case 0x2000ca:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_HAZARD";
    case 0x2000cb:
      return L"D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEW_DENORMFLUSH";
    case 0x2000cc:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSS_VIEWS_EMPTY";
    case 0x2000cd:
      return L"D3D11_MESSAGE_ID_DEVICE_CSGETUNORDEREDACCESSS_VIEWS_EMPTY";
    case 0x2000ce:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDFLAGS";
    case 0x2000cf:
      return L"D3D11_MESSAGE_ID_CREATESHADERRESESOURCEVIEW_TOOMANYOBJECTS";
    case 0x2000d0:
      return L"D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_INVALID_ARG_BUFFER";
    case 0x2000d1:
      return L"D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_OFFSET_UNALIGNED";
    case 0x2000d2:
      return L"D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_OFFSET_OVERFLOW";
    case 0x2000d3:
      return L"D3D11_MESSAGE_ID_DEVICE_SETRESOURCEMINLOD_INVALIDCONTEXT";
    case 0x2000d4:
      return L"D3D11_MESSAGE_ID_DEVICE_SETRESOURCEMINLOD_INVALIDRESOURCE";
    case 0x2000d5:
      return L"D3D11_MESSAGE_ID_DEVICE_SETRESOURCEMINLOD_INVALIDMINLOD";
    case 0x2000d6:
      return L"D3D11_MESSAGE_ID_DEVICE_GETRESOURCEMINLOD_INVALIDCONTEXT";
    case 0x2000d7:
      return L"D3D11_MESSAGE_ID_DEVICE_GETRESOURCEMINLOD_INVALIDRESOURCE";
    case 0x2000d8:
      return L"D3D11_MESSAGE_ID_OMSETDEPTHSTENCIL_UNBINDDELETINGOBJECT";
    case 0x2000d9:
      return L"D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_DEPTH_READONLY";
    case 0x2000da:
      return L"D3D11_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_STENCIL_READONLY";
    case 0x2000db:
      return L"D3D11_MESSAGE_ID_CHECKFEATURESUPPORT_FORMAT_DEPRECATED";
    case 0x2000dc:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_RETURN_TYPE_MISMATCH";
    case 0x2000dd:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_NOT_SET";
    case 0x2000de:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_UNORDEREDACCESSVIEW_RENDERTARGETVIEW_OVERLAP";
    case 0x2000df:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_DIMENSION_MISMATCH";
    case 0x2000e0:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_APPEND_UNSUPPORTED";
    case 0x2000e1:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMICS_UNSUPPORTED";
    case 0x2000e2:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_STRUCTURE_STRIDE_MISMATCH";
    case 0x2000e3:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_BUFFER_TYPE_MISMATCH";
    case 0x2000e4:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_RAW_UNSUPPORTED";
    case 0x2000e5:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_FORMAT_LD_UNSUPPORTED";
    case 0x2000e6:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_FORMAT_STORE_UNSUPPORTED";
    case 0x2000e7:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_ADD_UNSUPPORTED";
    case 0x2000e8:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_BITWISE_OPS_UNSUPPORTED";
    case 0x2000e9:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_CMPSTORE_CMPEXCHANGE_UNSUPPORTED";
    case 0x2000ea:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_EXCHANGE_UNSUPPORTED";
    case 0x2000eb:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_SIGNED_MINMAX_UNSUPPORTED";
    case 0x2000ec:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_ATOMIC_UNSIGNED_MINMAX_UNSUPPORTED";
    case 0x2000ed:
      return L"D3D11_MESSAGE_ID_DEVICE_DISPATCH_BOUND_RESOURCE_MAPPED";
    case 0x2000ee:
      return L"D3D11_MESSAGE_ID_DEVICE_DISPATCH_THREADGROUPCOUNT_OVERFLOW";
    case 0x2000ef:
      return L"D3D11_MESSAGE_ID_DEVICE_DISPATCH_THREADGROUPCOUNT_ZERO";
    case 0x2000f0:
      return L"D3D11_MESSAGE_ID_DEVICE_SHADERRESOURCEVIEW_STRUCTURE_STRIDE_MISMATCH";
    case 0x2000f1:
      return L"D3D11_MESSAGE_ID_DEVICE_SHADERRESOURCEVIEW_BUFFER_TYPE_MISMATCH";
    case 0x2000f2:
      return L"D3D11_MESSAGE_ID_DEVICE_SHADERRESOURCEVIEW_RAW_UNSUPPORTED";
    case 0x2000f3:
      return L"D3D11_MESSAGE_ID_DEVICE_DISPATCH_UNSUPPORTED";
    case 0x2000f4:
      return L"D3D11_MESSAGE_ID_DEVICE_DISPATCHINDIRECT_UNSUPPORTED";
    case 0x2000f5:
      return L"D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_INVALIDOFFSET";
    case 0x2000f6:
      return L"D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_LARGEOFFSET";
    case 0x2000f7:
      return L"D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_INVALIDDESTINATIONSTATE";
    case 0x2000f8:
      return L"D3D11_MESSAGE_ID_COPYSTRUCTURECOUNT_INVALIDSOURCESTATE";
    case 0x2000f9:
      return L"D3D11_MESSAGE_ID_CHECKFORMATSUPPORT_FORMAT_NOT_SUPPORTED";
    case 0x2000fa:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_INVALIDVIEW";
    case 0x2000fb:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_INVALIDOFFSET";
    case 0x2000fc:
      return L"D3D11_MESSAGE_ID_DEVICE_CSSETUNORDEREDACCESSVIEWS_TOOMANYVIEWS";
    case 0x2000fd:
      return L"D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEWFLOAT_INVALIDFORMAT";
    case 0x2000fe:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_COUNTER_UNSUPPORTED";
    case 0x2000ff:
      return L"D3D11_MESSAGE_ID_REF_WARNING";
    case 0x200100:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_PIXEL_SHADER_WITHOUT_RTV_OR_DSV";
    case 0x200101:
      return L"D3D11_MESSAGE_ID_SHADER_ABORT";
    case 0x200102:
      return L"D3D11_MESSAGE_ID_SHADER_MESSAGE";
    case 0x200103:
      return L"D3D11_MESSAGE_ID_SHADER_ERROR";
    case 0x200104:
      return L"D3D11_MESSAGE_ID_OFFERRESOURCES_INVALIDRESOURCE";
    case 0x200105:
      return L"D3D11_MESSAGE_ID_HSSETSAMPLERS_UNBINDDELETINGOBJECT";
    case 0x200106:
      return L"D3D11_MESSAGE_ID_DSSETSAMPLERS_UNBINDDELETINGOBJECT";
    case 0x200107:
      return L"D3D11_MESSAGE_ID_CSSETSAMPLERS_UNBINDDELETINGOBJECT";
    case 0x200108:
      return L"D3D11_MESSAGE_ID_HSSETSHADER_UNBINDDELETINGOBJECT";
    case 0x200109:
      return L"D3D11_MESSAGE_ID_DSSETSHADER_UNBINDDELETINGOBJECT";
    case 0x20010a:
      return L"D3D11_MESSAGE_ID_CSSETSHADER_UNBINDDELETINGOBJECT";
    case 0x20010b:
      return L"D3D11_MESSAGE_ID_ENQUEUESETEVENT_INVALIDARG_RETURN";
    case 0x20010c:
      return L"D3D11_MESSAGE_ID_ENQUEUESETEVENT_OUTOFMEMORY_RETURN";
    case 0x20010d:
      return L"D3D11_MESSAGE_ID_ENQUEUESETEVENT_ACCESSDENIED_RETURN";
    case 0x20010e:
      return 
      L"D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_NUMUAVS_INVALIDRANGE";
    }
  }
  else {
    switch(uVar1) {
    case 0x300002:
      return L"D3D11_MESSAGE_ID_CREATE_VIDEOPROCESSORENUM";
    case 0x300003:
      return L"D3D11_MESSAGE_ID_CREATE_VIDEOPROCESSOR";
    case 0x300004:
      return L"D3D11_MESSAGE_ID_CREATE_DECODEROUTPUTVIEW";
    case 0x300005:
      return L"D3D11_MESSAGE_ID_CREATE_PROCESSORINPUTVIEW";
    case 0x300006:
      return L"D3D11_MESSAGE_ID_CREATE_PROCESSOROUTPUTVIEW";
    case 0x300007:
      return L"D3D11_MESSAGE_ID_CREATE_DEVICECONTEXTSTATE";
    case 0x300008:
      return L"D3D11_MESSAGE_ID_LIVE_VIDEODECODER";
    case 0x300009:
      return L"D3D11_MESSAGE_ID_LIVE_VIDEOPROCESSORENUM";
    case 0x30000a:
      return L"D3D11_MESSAGE_ID_LIVE_VIDEOPROCESSOR";
    case 0x30000b:
      return L"D3D11_MESSAGE_ID_LIVE_DECODEROUTPUTVIEW";
    case 0x30000c:
      return L"D3D11_MESSAGE_ID_LIVE_PROCESSORINPUTVIEW";
    case 0x30000d:
      return L"D3D11_MESSAGE_ID_LIVE_PROCESSOROUTPUTVIEW";
    case 0x30000e:
      return L"D3D11_MESSAGE_ID_LIVE_DEVICECONTEXTSTATE";
    case 0x30000f:
      return L"D3D11_MESSAGE_ID_DESTROY_VIDEODECODER";
    case 0x300010:
      return L"D3D11_MESSAGE_ID_DESTROY_VIDEOPROCESSORENUM";
    case 0x300011:
      return L"D3D11_MESSAGE_ID_DESTROY_VIDEOPROCESSOR";
    case 0x300012:
      return L"D3D11_MESSAGE_ID_DESTROY_DECODEROUTPUTVIEW";
    case 0x300013:
      return L"D3D11_MESSAGE_ID_DESTROY_PROCESSORINPUTVIEW";
    case 0x300014:
      return L"D3D11_MESSAGE_ID_DESTROY_PROCESSOROUTPUTVIEW";
    case 0x300015:
      return L"D3D11_MESSAGE_ID_DESTROY_DEVICECONTEXTSTATE";
    case 0x300016:
      return L"D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_INVALIDFLAGS";
    case 0x300017:
      return L"D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_INVALIDFEATURELEVEL";
    case 0x300018:
      return L"D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_FEATURELEVELS_NOT_SUPPORTED";
    case 0x300019:
      return L"D3D11_MESSAGE_ID_CREATEDEVICECONTEXTSTATE_INVALIDREFIID";
    case 0x30001a:
      return L"D3D11_MESSAGE_ID_DEVICE_DISCARDVIEW_INVALIDVIEW";
    case 0x30001b:
      return L"D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION1_INVALIDCOPYFLAGS";
    case 0x30001c:
      return L"D3D11_MESSAGE_ID_UPDATESUBRESOURCE1_INVALIDCOPYFLAGS";
    case 0x30001d:
      return L"D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDFORCEDSAMPLECOUNT";
    case 0x30001e:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODER_OUTOFMEMORY_RETURN";
    case 0x30001f:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODER_NULLPARAM";
    case 0x300020:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODER_INVALIDFORMAT";
    case 0x300021:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODER_ZEROWIDTHHEIGHT";
    case 0x300022:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODER_DRIVER_INVALIDBUFFERSIZE";
    case 0x300023:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODER_DRIVER_INVALIDBUFFERUSAGE";
    case 0x300024:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERPROFILECOUNT_OUTOFMEMORY";
    case 0x300025:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERPROFILE_NULLPARAM";
    case 0x300026:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERPROFILE_INVALIDINDEX";
    case 0x300027:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERPROFILE_OUTOFMEMORY_RETURN";
    case 0x300028:
      return L"D3D11_MESSAGE_ID_CHECKVIDEODECODERFORMAT_NULLPARAM";
    case 0x300029:
      return L"D3D11_MESSAGE_ID_CHECKVIDEODECODERFORMAT_OUTOFMEMORY_RETURN";
    case 0x30002a:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERCONFIGCOUNT_NULLPARAM";
    case 0x30002b:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERCONFIGCOUNT_OUTOFMEMORY_RETURN";
    case 0x30002c:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERCONFIG_NULLPARAM";
    case 0x30002d:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERCONFIG_INVALIDINDEX";
    case 0x30002e:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERCONFIG_OUTOFMEMORY_RETURN";
    case 0x30002f:
      return L"D3D11_MESSAGE_ID_GETDECODERCREATIONPARAMS_NULLPARAM";
    case 0x300030:
      return L"D3D11_MESSAGE_ID_GETDECODERDRIVERHANDLE_NULLPARAM";
    case 0x300031:
      return L"D3D11_MESSAGE_ID_GETDECODERBUFFER_NULLPARAM";
    case 0x300032:
      return L"D3D11_MESSAGE_ID_GETDECODERBUFFER_INVALIDBUFFER";
    case 0x300033:
      return L"D3D11_MESSAGE_ID_GETDECODERBUFFER_INVALIDTYPE";
    case 0x300034:
      return L"D3D11_MESSAGE_ID_GETDECODERBUFFER_LOCKED";
    case 0x300035:
      return L"D3D11_MESSAGE_ID_RELEASEDECODERBUFFER_NULLPARAM";
    case 0x300036:
      return L"D3D11_MESSAGE_ID_RELEASEDECODERBUFFER_INVALIDTYPE";
    case 0x300037:
      return L"D3D11_MESSAGE_ID_RELEASEDECODERBUFFER_NOTLOCKED";
    case 0x300038:
      return L"D3D11_MESSAGE_ID_DECODERBEGINFRAME_NULLPARAM";
    case 0x300039:
      return L"D3D11_MESSAGE_ID_DECODERBEGINFRAME_HAZARD";
    case 0x30003a:
      return L"D3D11_MESSAGE_ID_DECODERENDFRAME_NULLPARAM";
    case 0x30003b:
      return L"D3D11_MESSAGE_ID_SUBMITDECODERBUFFERS_NULLPARAM";
    case 0x30003c:
      return L"D3D11_MESSAGE_ID_SUBMITDECODERBUFFERS_INVALIDTYPE";
    case 0x30003d:
      return L"D3D11_MESSAGE_ID_DECODEREXTENSION_NULLPARAM";
    case 0x30003e:
      return L"D3D11_MESSAGE_ID_DECODEREXTENSION_INVALIDRESOURCE";
    case 0x30003f:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_OUTOFMEMORY_RETURN";
    case 0x300040:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_NULLPARAM";
    case 0x300041:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDFRAMEFORMAT";
    case 0x300042:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDUSAGE";
    case 0x300043:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDINPUTFRAMERATE";
    case 0x300044:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDOUTPUTFRAMERATE";
    case 0x300045:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORENUMERATOR_INVALIDWIDTHHEIGHT";
    case 0x300046:
      return L"D3D11_MESSAGE_ID_GETVIDEOPROCESSORCONTENTDESC_NULLPARAM";
    case 0x300047:
      return L"D3D11_MESSAGE_ID_CHECKVIDEOPROCESSORFORMAT_NULLPARAM";
    case 0x300048:
      return L"D3D11_MESSAGE_ID_GETVIDEOPROCESSORCAPS_NULLPARAM";
    case 0x300049:
      return L"D3D11_MESSAGE_ID_GETVIDEOPROCESSORRATECONVERSIONCAPS_NULLPARAM";
    case 0x30004a:
      return L"D3D11_MESSAGE_ID_GETVIDEOPROCESSORRATECONVERSIONCAPS_INVALIDINDEX";
    case 0x30004b:
      return L"D3D11_MESSAGE_ID_GETVIDEOPROCESSORCUSTOMRATE_NULLPARAM";
    case 0x30004c:
      return L"D3D11_MESSAGE_ID_GETVIDEOPROCESSORCUSTOMRATE_INVALIDINDEX";
    case 0x30004d:
      return L"D3D11_MESSAGE_ID_GETVIDEOPROCESSORFILTERRANGE_NULLPARAM";
    case 0x30004e:
      return L"D3D11_MESSAGE_ID_GETVIDEOPROCESSORFILTERRANGE_UNSUPPORTED";
    case 0x30004f:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOR_OUTOFMEMORY_RETURN";
    case 0x300050:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOR_NULLPARAM";
    case 0x300051:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTTARGETRECT_NULLPARAM";
    case 0x300052:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR_NULLPARAM";
    case 0x300053:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTBACKGROUNDCOLOR_INVALIDALPHA";
    case 0x300054:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCOLORSPACE_NULLPARAM";
    case 0x300055:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_NULLPARAM";
    case 0x300056:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_UNSUPPORTED";
    case 0x300057:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_INVALIDSTREAM";
    case 0x300058:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTALPHAFILLMODE_INVALIDFILLMODE";
    case 0x300059:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCONSTRICTION_NULLPARAM";
    case 0x30005a:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTSTEREOMODE_NULLPARAM";
    case 0x30005b:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTSTEREOMODE_UNSUPPORTED";
    case 0x30005c:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTEXTENSION_NULLPARAM";
    case 0x30005d:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTTARGETRECT_NULLPARAM";
    case 0x30005e:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTBACKGROUNDCOLOR_NULLPARAM";
    case 0x30005f:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTCOLORSPACE_NULLPARAM";
    case 0x300060:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTALPHAFILLMODE_NULLPARAM";
    case 0x300061:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTCONSTRICTION_NULLPARAM";
    case 0x300062:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCONSTRICTION_UNSUPPORTED";
    case 0x300063:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCONSTRICTION_INVALIDSIZE";
    case 0x300064:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTSTEREOMODE_NULLPARAM";
    case 0x300065:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTEXTENSION_NULLPARAM";
    case 0x300066:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFRAMEFORMAT_NULLPARAM";
    case 0x300067:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFRAMEFORMAT_INVALIDFORMAT";
    case 0x300068:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFRAMEFORMAT_INVALIDSTREAM";
    case 0x300069:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE_NULLPARAM";
    case 0x30006a:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE_INVALIDSTREAM";
    case 0x30006b:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_NULLPARAM";
    case 0x30006c:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_INVALIDRATE";
    case 0x30006d:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_INVALIDFLAG";
    case 0x30006e:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMOUTPUTRATE_INVALIDSTREAM";
    case 0x30006f:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSOURCERECT_NULLPARAM";
    case 0x300070:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSOURCERECT_INVALIDSTREAM";
    case 0x300071:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSOURCERECT_INVALIDRECT";
    case 0x300072:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMDESTRECT_NULLPARAM";
    case 0x300073:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMDESTRECT_INVALIDSTREAM";
    case 0x300074:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMDESTRECT_INVALIDRECT";
    case 0x300075:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_NULLPARAM";
    case 0x300076:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_INVALIDSTREAM";
    case 0x300077:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_INVALIDALPHA";
    case 0x300078:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_NULLPARAM";
    case 0x300079:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_INVALIDSTREAM";
    case 0x30007a:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_INVALIDCOUNT";
    case 0x30007b:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPALETTE_INVALIDALPHA";
    case 0x30007c:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_NULLPARAM";
    case 0x30007d:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_INVALIDSTREAM";
    case 0x30007e:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_INVALIDRATIO";
    case 0x30007f:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_NULLPARAM";
    case 0x300080:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_INVALIDSTREAM";
    case 0x300081:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_INVALIDRANGE";
    case 0x300082:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMLUMAKEY_UNSUPPORTED";
    case 0x300083:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_NULLPARAM";
    case 0x300084:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_INVALIDSTREAM";
    case 0x300085:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_UNSUPPORTED";
    case 0x300086:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_FLIPUNSUPPORTED";
    case 0x300087:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_MONOOFFSETUNSUPPORTED";
    case 0x300088:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_FORMATUNSUPPORTED";
    case 0x300089:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMSTEREOFORMAT_INVALIDFORMAT";
    case 0x30008a:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE_NULLPARAM";
    case 0x30008b:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMAUTOPROCESSINGMODE_INVALIDSTREAM";
    case 0x30008c:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_NULLPARAM";
    case 0x30008d:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_INVALIDSTREAM";
    case 0x30008e:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_INVALIDFILTER";
    case 0x30008f:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_UNSUPPORTED";
    case 0x300090:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMFILTER_INVALIDLEVEL";
    case 0x300091:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMEXTENSION_NULLPARAM";
    case 0x300092:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMEXTENSION_INVALIDSTREAM";
    case 0x300093:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFRAMEFORMAT_NULLPARAM";
    case 0x300094:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE_NULLPARAM";
    case 0x300095:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMOUTPUTRATE_NULLPARAM";
    case 0x300096:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSOURCERECT_NULLPARAM";
    case 0x300097:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMDESTRECT_NULLPARAM";
    case 0x300098:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMALPHA_NULLPARAM";
    case 0x300099:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPALETTE_NULLPARAM";
    case 0x30009a:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMPIXELASPECTRATIO_NULLPARAM";
    case 0x30009b:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMLUMAKEY_NULLPARAM";
    case 0x30009c:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMSTEREOFORMAT_NULLPARAM";
    case 0x30009d:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMAUTOPROCESSINGMODE_NULLPARAM";
    case 0x30009e:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMFILTER_NULLPARAM";
    case 0x30009f:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMEXTENSION_NULLPARAM";
    case 0x3000a0:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMEXTENSION_INVALIDSTREAM";
    case 0x3000a1:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_NULLPARAM";
    case 0x3000a2:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDSTREAMCOUNT";
    case 0x3000a3:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_TARGETRECT";
    case 0x3000a4:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDOUTPUT";
    case 0x3000a5:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDPASTFRAMES";
    case 0x3000a6:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDFUTUREFRAMES";
    case 0x3000a7:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDSOURCERECT";
    case 0x3000a8:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDDESTRECT";
    case 0x3000a9:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDINPUTRESOURCE";
    case 0x3000aa:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDARRAYSIZE";
    case 0x3000ab:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDARRAY";
    case 0x3000ac:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_RIGHTEXPECTED";
    case 0x3000ad:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_RIGHTNOTEXPECTED";
    case 0x3000ae:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_STEREONOTENABLED";
    case 0x3000af:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INVALIDRIGHTRESOURCE";
    case 0x3000b0:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_NOSTEREOSTREAMS";
    case 0x3000b1:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_INPUTHAZARD";
    case 0x3000b2:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORBLT_OUTPUTHAZARD";
    case 0x3000b3:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_OUTOFMEMORY_RETURN";
    case 0x3000b4:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_NULLPARAM";
    case 0x3000b5:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDTYPE";
    case 0x3000b6:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDBIND";
    case 0x3000b7:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_UNSUPPORTEDFORMAT";
    case 0x3000b8:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDMIP";
    case 0x3000b9:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_UNSUPPORTEMIP";
    case 0x3000ba:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDARRAYSIZE";
    case 0x3000bb:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDARRAY";
    case 0x3000bc:
      return L"D3D11_MESSAGE_ID_CREATEVIDEODECODEROUTPUTVIEW_INVALIDDIMENSION";
    case 0x3000bd:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_OUTOFMEMORY_RETURN";
    case 0x3000be:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_NULLPARAM";
    case 0x3000bf:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDTYPE";
    case 0x3000c0:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDBIND";
    case 0x3000c1:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDMISC";
    case 0x3000c2:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDUSAGE";
    case 0x3000c3:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDFORMAT";
    case 0x3000c4:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDFOURCC";
    case 0x3000c5:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDMIP";
    case 0x3000c6:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_UNSUPPORTEDMIP";
    case 0x3000c7:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDARRAYSIZE";
    case 0x3000c8:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDARRAY";
    case 0x3000c9:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDDIMENSION";
    case 0x3000ca:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_OUTOFMEMORY_RETURN";
    case 0x3000cb:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_NULLPARAM";
    case 0x3000cc:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDTYPE";
    case 0x3000cd:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDBIND";
    case 0x3000ce:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDFORMAT";
    case 0x3000cf:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDMIP";
    case 0x3000d0:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_UNSUPPORTEDMIP";
    case 0x3000d1:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_UNSUPPORTEDARRAY";
    case 0x3000d2:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDARRAY";
    case 0x3000d3:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDDIMENSION";
    case 0x3000d4:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_USE_OF_FORCED_SAMPLE_COUNT";
    case 0x3000d5:
      return L"D3D11_MESSAGE_ID_CREATEBLENDSTATE_INVALIDLOGICOPS";
    case 0x3000d6:
      return L"D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDARRAYWITHDECODER";
    case 0x3000d7:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDDARRAYWITHDECODER";
    case 0x3000d8:
      return L"D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDARRAYWITHDECODER";
    case 0x3000d9:
      return L"D3D11_MESSAGE_ID_DEVICE_LOCKEDOUT_INTERFACE";
    case 0x3000da:
      return L"D3D11_MESSAGE_ID_REF_WARNING_ATOMIC_INCONSISTENT";
    case 0x3000db:
      return L"D3D11_MESSAGE_ID_REF_WARNING_READING_UNINITIALIZED_RESOURCE";
    case 0x3000dc:
      return L"D3D11_MESSAGE_ID_REF_WARNING_RAW_HAZARD";
    case 0x3000dd:
      return L"D3D11_MESSAGE_ID_REF_WARNING_WAR_HAZARD";
    case 0x3000de:
      return L"D3D11_MESSAGE_ID_REF_WARNING_WAW_HAZARD";
    case 0x3000df:
      return L"D3D11_MESSAGE_ID_CREATECRYPTOSESSION_NULLPARAM";
    case 0x3000e0:
      return L"D3D11_MESSAGE_ID_CREATECRYPTOSESSION_OUTOFMEMORY_RETURN";
    case 0x3000e1:
      return L"D3D11_MESSAGE_ID_GETCRYPTOTYPE_NULLPARAM";
    case 0x3000e2:
      return L"D3D11_MESSAGE_ID_GETDECODERPROFILE_NULLPARAM";
    case 0x3000e3:
      return L"D3D11_MESSAGE_ID_GETCRYPTOSESSIONCERTIFICATESIZE_NULLPARAM";
    case 0x3000e4:
      return L"D3D11_MESSAGE_ID_GETCRYPTOSESSIONCERTIFICATE_NULLPARAM";
    case 0x3000e5:
      return L"D3D11_MESSAGE_ID_GETCRYPTOSESSIONCERTIFICATE_WRONGSIZE";
    case 0x3000e6:
      return L"D3D11_MESSAGE_ID_GETCRYPTOSESSIONHANDLE_WRONGSIZE";
    case 0x3000e7:
      return L"D3D11_MESSAGE_ID_NEGOTIATECRPYTOSESSIONKEYEXCHANGE_NULLPARAM";
    case 0x3000e8:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_UNSUPPORTED";
    case 0x3000e9:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_NULLPARAM";
    case 0x3000ea:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_WRONGDEVICE";
    case 0x3000eb:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_WRONGDEVICE";
    case 0x3000ec:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_FORMAT_MISMATCH";
    case 0x3000ed:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_SIZE_MISMATCH";
    case 0x3000ee:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_MULTISAMPLED";
    case 0x3000ef:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_NOT_STAGING";
    case 0x3000f0:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_MAPPED";
    case 0x3000f1:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_MAPPED";
    case 0x3000f2:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_OFFERED";
    case 0x3000f3:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_DST_OFFERED";
    case 0x3000f4:
      return L"D3D11_MESSAGE_ID_ENCRYPTIONBLT_SRC_CONTENT_UNDEFINED";
    case 0x3000f5:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_UNSUPPORTED";
    case 0x3000f6:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_NULLPARAM";
    case 0x3000f7:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_WRONGDEVICE";
    case 0x3000f8:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_WRONGDEVICE";
    case 0x3000f9:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_FORMAT_MISMATCH";
    case 0x3000fa:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_SIZE_MISMATCH";
    case 0x3000fb:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_MULTISAMPLED";
    case 0x3000fc:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_NOT_STAGING";
    case 0x3000fd:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_NOT_RENDER_TARGET";
    case 0x3000fe:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_MAPPED";
    case 0x3000ff:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_MAPPED";
    case 0x300100:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_OFFERED";
    case 0x300101:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_DST_OFFERED";
    case 0x300102:
      return L"D3D11_MESSAGE_ID_DECRYPTIONBLT_SRC_CONTENT_UNDEFINED";
    case 0x300103:
      return L"D3D11_MESSAGE_ID_STARTSESSIONKEYREFRESH_NULLPARAM";
    case 0x300104:
      return L"D3D11_MESSAGE_ID_STARTSESSIONKEYREFRESH_INVALIDSIZE";
    case 0x300105:
      return L"D3D11_MESSAGE_ID_FINISHSESSIONKEYREFRESH_NULLPARAM";
    case 0x300106:
      return L"D3D11_MESSAGE_ID_GETENCRYPTIONBLTKEY_NULLPARAM";
    case 0x300107:
      return L"D3D11_MESSAGE_ID_GETENCRYPTIONBLTKEY_INVALIDSIZE";
    case 0x300108:
      return L"D3D11_MESSAGE_ID_GETCONTENTPROTECTIONCAPS_NULLPARAM";
    case 0x300109:
      return L"D3D11_MESSAGE_ID_CHECKCRYPTOKEYEXCHANGE_NULLPARAM";
    case 0x30010a:
      return L"D3D11_MESSAGE_ID_CHECKCRYPTOKEYEXCHANGE_INVALIDINDEX";
    case 0x30010b:
      return L"D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_NULLPARAM";
    case 0x30010c:
      return L"D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_UNSUPPORTED";
    case 0x30010d:
      return L"D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_INVALIDTYPE";
    case 0x30010e:
      return L"D3D11_MESSAGE_ID_CREATEAUTHENTICATEDCHANNEL_OUTOFMEMORY_RETURN";
    case 0x30010f:
      return L"D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATESIZE_INVALIDCHANNEL";
    case 0x300110:
      return L"D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATESIZE_NULLPARAM";
    case 0x300111:
      return L"D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATE_INVALIDCHANNEL";
    case 0x300112:
      return L"D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATE_NULLPARAM";
    case 0x300113:
      return L"D3D11_MESSAGE_ID_GETAUTHENTICATEDCHANNELCERTIFICATE_WRONGSIZE";
    case 0x300114:
      return L"D3D11_MESSAGE_ID_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE_INVALIDCHANNEL";
    case 0x300115:
      return L"D3D11_MESSAGE_ID_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE_NULLPARAM";
    case 0x300116:
      return L"D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_NULLPARAM";
    case 0x300117:
      return L"D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_WRONGCHANNEL";
    case 0x300118:
      return L"D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_UNSUPPORTEDQUERY";
    case 0x300119:
      return L"D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_WRONGSIZE";
    case 0x30011a:
      return L"D3D11_MESSAGE_ID_QUERYAUTHENTICATEDCHANNEL_INVALIDPROCESSINDEX";
    case 0x30011b:
      return L"D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_NULLPARAM";
    case 0x30011c:
      return L"D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_WRONGCHANNEL";
    case 0x30011d:
      return L"D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_UNSUPPORTEDCONFIGURE";
    case 0x30011e:
      return L"D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_WRONGSIZE";
    case 0x30011f:
      return L"D3D11_MESSAGE_ID_CONFIGUREAUTHENTICATEDCHANNEL_INVALIDPROCESSIDTYPE";
    case 0x300120:
      return L"D3D11_MESSAGE_ID_VSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT";
    case 0x300121:
      return L"D3D11_MESSAGE_ID_DSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT";
    case 0x300122:
      return L"D3D11_MESSAGE_ID_HSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT";
    case 0x300123:
      return L"D3D11_MESSAGE_ID_GSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT";
    case 0x300124:
      return L"D3D11_MESSAGE_ID_PSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT";
    case 0x300125:
      return L"D3D11_MESSAGE_ID_CSSETCONSTANTBUFFERS_INVALIDBUFFEROFFSETORCOUNT";
    case 0x300126:
      return L"D3D11_MESSAGE_ID_NEGOTIATECRPYTOSESSIONKEYEXCHANGE_INVALIDSIZE";
    case 0x300127:
      return L"D3D11_MESSAGE_ID_NEGOTIATEAUTHENTICATEDCHANNELKEYEXCHANGE_INVALIDSIZE";
    case 0x300128:
      return L"D3D11_MESSAGE_ID_OFFERRESOURCES_INVALIDPRIORITY";
    case 0x300129:
      return L"D3D11_MESSAGE_ID_GETCRYPTOSESSIONHANDLE_OUTOFMEMORY";
    case 0x30012a:
      return L"D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_NULLPARAM";
    case 0x30012b:
      return L"D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_INVALIDTYPE";
    case 0x30012c:
      return L"D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_INVALIDBIND";
    case 0x30012d:
      return L"D3D11_MESSAGE_ID_ACQUIREHANDLEFORCAPTURE_INVALIDARRAY";
    case 0x30012e:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_NULLPARAM";
    case 0x30012f:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_INVALIDSTREAM";
    case 0x300130:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_INVALID";
    case 0x300131:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMROTATION_UNSUPPORTED";
    case 0x300132:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMROTATION_NULLPARAM";
    case 0x300133:
      return L"D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_INVALIDVIEW";
    case 0x300134:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_DOUBLEEXTENSIONSNOTSUPPORTED";
    case 0x300135:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_SHADEREXTENSIONSNOTSUPPORTED";
    case 0x300136:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_DOUBLEEXTENSIONSNOTSUPPORTED";
    case 0x300137:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_SHADEREXTENSIONSNOTSUPPORTED";
    case 0x300138:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_DOUBLEEXTENSIONSNOTSUPPORTED";
    case 0x300139:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_SHADEREXTENSIONSNOTSUPPORTED";
    case 0x30013a:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_DOUBLEEXTENSIONSNOTSUPPORTED";
    case 0x30013b:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_SHADEREXTENSIONSNOTSUPPORTED";
    case 0x30013c:
      return 
      L"D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DOUBLEEXTENSIONSNOTSUPPORTED";
    case 0x30013d:
      return 
      L"D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_SHADEREXTENSIONSNOTSUPPORTED";
    case 0x30013e:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_DOUBLEEXTENSIONSNOTSUPPORTED";
    case 0x30013f:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_SHADEREXTENSIONSNOTSUPPORTED";
    case 0x300140:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_DOUBLEEXTENSIONSNOTSUPPORTED";
    case 0x300141:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_SHADEREXTENSIONSNOTSUPPORTED";
    case 0x300142:
      return L"D3D11_MESSAGE_ID_DEVICE_SHADER_LINKAGE_MINPRECISION";
    case 0x300143:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMALPHA_UNSUPPORTED";
    case 0x300144:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMPIXELASPECTRATIO_UNSUPPORTED";
    case 0x300145:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEVERTEXSHADER_UAVSNOTSUPPORTED";
    case 0x300146:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEHULLSHADER_UAVSNOTSUPPORTED";
    case 0x300147:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEDOMAINSHADER_UAVSNOTSUPPORTED";
    case 0x300148:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADER_UAVSNOTSUPPORTED";
    case 0x300149:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UAVSNOTSUPPORTED";
    case 0x30014a:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATEPIXELSHADER_UAVSNOTSUPPORTED";
    case 0x30014b:
      return L"D3D11_MESSAGE_ID_DEVICE_CREATECOMPUTESHADER_UAVSNOTSUPPORTED";
    case 0x30014c:
      return L"D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_INVALIDOFFSET";
    case 0x30014d:
      return L"D3D11_MESSAGE_ID_DEVICE_OMSETRENDERTARGETSANDUNORDEREDACCESSVIEWS_TOOMANYVIEWS";
    case 0x30014e:
      return L"D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_NOTSUPPORTED";
    case 0x30014f:
      return L"D3D11_MESSAGE_ID_SWAPDEVICECONTEXTSTATE_NOTSUPPORTED";
    case 0x300150:
      return L"D3D11_MESSAGE_ID_UPDATESUBRESOURCE_PREFERUPDATESUBRESOURCE1";
    case 0x300151:
      return L"D3D11_MESSAGE_ID_GETDC_INACCESSIBLE";
    case 0x300152:
      return L"D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_INVALIDRECT";
    case 0x300153:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_SAMPLE_MASK_IGNORED_ON_FL9";
    case 0x300154:
      return L"D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE1_NOT_SUPPORTED";
    case 0x300155:
      return L"D3D11_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_BY_NAME_NOT_SUPPORTED";
    case 0x300156:
      return L"D3D11_MESSAGE_ID_ENQUEUESETEVENT_NOT_SUPPORTED";
    case 0x300157:
      return L"D3D11_MESSAGE_ID_OFFERRELEASE_NOT_SUPPORTED";
    case 0x300158:
      return L"D3D11_MESSAGE_ID_OFFERRESOURCES_INACCESSIBLE";
    case 0x300159:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSORINPUTVIEW_INVALIDMSAA";
    case 0x30015a:
      return L"D3D11_MESSAGE_ID_CREATEVIDEOPROCESSOROUTPUTVIEW_INVALIDMSAA";
    case 0x30015b:
      return L"D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_INVALIDSOURCERECT";
    case 0x30015c:
      return L"D3D11_MESSAGE_ID_DEVICE_CLEARVIEW_EMPTYRECT";
    case 0x30015d:
      return L"D3D11_MESSAGE_ID_UPDATESUBRESOURCE_EMPTYDESTBOX";
    case 0x30015e:
      return L"D3D11_MESSAGE_ID_COPYSUBRESOURCEREGION_EMPTYSOURCEBOX";
    case 0x30015f:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_OM_RENDER_TARGET_DOES_NOT_SUPPORT_LOGIC_OPS";
    case 0x300160:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_DEPTHSTENCILVIEW_NOT_SET";
    case 0x300161:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_RENDERTARGETVIEW_NOT_SET";
    case 0x300162:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_RENDERTARGETVIEW_NOT_SET_DUE_TO_FLIP_PRESENT";
    case 0x300163:
      return L"D3D11_MESSAGE_ID_DEVICE_UNORDEREDACCESSVIEW_NOT_SET_DUE_TO_FLIP_PRESENT";
    case 0x300164:
      return L"D3D11_MESSAGE_ID_GETDATAFORNEWHARDWAREKEY_NULLPARAM";
    case 0x300165:
      return L"D3D11_MESSAGE_ID_CHECKCRYPTOSESSIONSTATUS_NULLPARAM";
    case 0x300166:
      return L"D3D11_MESSAGE_ID_GETCRYPTOSESSIONPRIVATEDATASIZE_NULLPARAM";
    case 0x300167:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERCAPS_NULLPARAM";
    case 0x300168:
      return L"D3D11_MESSAGE_ID_GETVIDEODECODERCAPS_ZEROWIDTHHEIGHT";
    case 0x300169:
      return L"D3D11_MESSAGE_ID_CHECKVIDEODECODERDOWNSAMPLING_NULLPARAM";
    case 0x30016a:
      return L"D3D11_MESSAGE_ID_CHECKVIDEODECODERDOWNSAMPLING_INVALIDCOLORSPACE";
    case 0x30016b:
      return L"D3D11_MESSAGE_ID_CHECKVIDEODECODERDOWNSAMPLING_ZEROWIDTHHEIGHT";
    case 0x30016c:
      return L"D3D11_MESSAGE_ID_VIDEODECODERENABLEDOWNSAMPLING_NULLPARAM";
    case 0x30016d:
      return L"D3D11_MESSAGE_ID_VIDEODECODERENABLEDOWNSAMPLING_UNSUPPORTED";
    case 0x30016e:
      return L"D3D11_MESSAGE_ID_VIDEODECODERUPDATEDOWNSAMPLING_NULLPARAM";
    case 0x30016f:
      return L"D3D11_MESSAGE_ID_VIDEODECODERUPDATEDOWNSAMPLING_UNSUPPORTED";
    case 0x300170:
      return L"D3D11_MESSAGE_ID_CHECKVIDEOPROCESSORFORMATCONVERSION_NULLPARAM";
    case 0x300171:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTCOLORSPACE1_NULLPARAM";
    case 0x300172:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTCOLORSPACE1_NULLPARAM";
    case 0x300173:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE1_NULLPARAM";
    case 0x300174:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMCOLORSPACE1_INVALIDSTREAM";
    case 0x300175:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMMIRROR_NULLPARAM";
    case 0x300176:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMMIRROR_INVALIDSTREAM";
    case 0x300177:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETSTREAMMIRROR_UNSUPPORTED";
    case 0x300178:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMCOLORSPACE1_NULLPARAM";
    case 0x300179:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETSTREAMMIRROR_NULLPARAM";
    case 0x30017a:
      return L"D3D11_MESSAGE_ID_RECOMMENDVIDEODECODERDOWNSAMPLING_NULLPARAM";
    case 0x30017b:
      return L"D3D11_MESSAGE_ID_RECOMMENDVIDEODECODERDOWNSAMPLING_INVALIDCOLORSPACE";
    case 0x30017c:
      return L"D3D11_MESSAGE_ID_RECOMMENDVIDEODECODERDOWNSAMPLING_ZEROWIDTHHEIGHT";
    case 0x30017d:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORSETOUTPUTSHADERUSAGE_NULLPARAM";
    case 0x30017e:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETOUTPUTSHADERUSAGE_NULLPARAM";
    case 0x30017f:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_NULLPARAM";
    case 0x300180:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_INVALIDSTREAMCOUNT";
    case 0x300181:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_TARGETRECT";
    case 0x300182:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_INVALIDSOURCERECT";
    case 0x300183:
      return L"D3D11_MESSAGE_ID_VIDEOPROCESSORGETBEHAVIORHINTS_INVALIDDESTRECT";
    case 0x300188:
      return L"D3D11_MESSAGE_ID_CREATEBUFFER_INVALIDUSAGE";
    case 0x300189:
      return L"D3D11_MESSAGE_ID_CREATETEXTURE1D_INVALIDUSAGE";
    case 0x30018a:
      return L"D3D11_MESSAGE_ID_CREATETEXTURE2D_INVALIDUSAGE";
    case 0x30018b:
      return L"D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_LEVEL9_STEPRATE_NOT_1";
    case 0x30018c:
      return L"D3D11_MESSAGE_ID_CREATEINPUTLAYOUT_LEVEL9_INSTANCING_NOT_SUPPORTED";
    case 0x30018d:
      return L"D3D11_MESSAGE_ID_UPDATETILEMAPPINGS_INVALID_PARAMETER";
    case 0x30018e:
      return L"D3D11_MESSAGE_ID_COPYTILEMAPPINGS_INVALID_PARAMETER";
    case 0x30018f:
      return L"D3D11_MESSAGE_ID_COPYTILES_INVALID_PARAMETER";
    case 0x300190:
      return L"D3D11_MESSAGE_ID_UPDATETILES_INVALID_PARAMETER";
    case 0x300191:
      return L"D3D11_MESSAGE_ID_RESIZETILEPOOL_INVALID_PARAMETER";
    case 0x300192:
      return L"D3D11_MESSAGE_ID_TILEDRESOURCEBARRIER_INVALID_PARAMETER";
    case 0x300193:
      return L"D3D11_MESSAGE_ID_NULL_TILE_MAPPING_ACCESS_WARNING";
    case 0x300194:
      return L"D3D11_MESSAGE_ID_NULL_TILE_MAPPING_ACCESS_ERROR";
    case 0x300195:
      return L"D3D11_MESSAGE_ID_DIRTY_TILE_MAPPING_ACCESS";
    case 0x300196:
      return L"D3D11_MESSAGE_ID_DUPLICATE_TILE_MAPPINGS_IN_COVERED_AREA";
    case 0x300197:
      return L"D3D11_MESSAGE_ID_TILE_MAPPINGS_IN_COVERED_AREA_DUPLICATED_OUTSIDE";
    case 0x300198:
      return L"D3D11_MESSAGE_ID_TILE_MAPPINGS_SHARED_BETWEEN_INCOMPATIBLE_RESOURCES";
    case 0x300199:
      return L"D3D11_MESSAGE_ID_TILE_MAPPINGS_SHARED_BETWEEN_INPUT_AND_OUTPUT";
    case 0x30019a:
      return L"D3D11_MESSAGE_ID_CHECKMULTISAMPLEQUALITYLEVELS_INVALIDFLAGS";
    case 0x30019b:
      return L"D3D11_MESSAGE_ID_GETRESOURCETILING_NONTILED_RESOURCE";
    case 0x30019c:
      return L"D3D11_MESSAGE_ID_RESIZETILEPOOL_SHRINK_WITH_MAPPINGS_STILL_DEFINED_PAST_END";
    case 0x30019d:
      return L"D3D11_MESSAGE_ID_NEED_TO_CALL_TILEDRESOURCEBARRIER";
    case 0x30019e:
      return L"D3D11_MESSAGE_ID_CREATEDEVICE_INVALIDARGS";
    case 0x30019f:
      return L"D3D11_MESSAGE_ID_CREATEDEVICE_WARNING";
    case 0x3001a0:
      return L"D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEWUINT_HAZARD";
    case 0x3001a1:
      return L"D3D11_MESSAGE_ID_CLEARUNORDEREDACCESSVIEWFLOAT_HAZARD";
    case 0x3001a2:
      return L"D3D11_MESSAGE_ID_TILED_RESOURCE_TIER_1_BUFFER_TEXTURE_MISMATCH";
    case 0x3001a3:
      return L"D3D11_MESSAGE_ID_CREATE_CRYPTOSESSION";
    case 0x3001a4:
      return L"D3D11_MESSAGE_ID_CREATE_AUTHENTICATEDCHANNEL";
    case 0x3001a5:
      return L"D3D11_MESSAGE_ID_LIVE_CRYPTOSESSION";
    case 0x3001a6:
      return L"D3D11_MESSAGE_ID_LIVE_AUTHENTICATEDCHANNEL";
    case 0x3001a7:
      return L"D3D11_MESSAGE_ID_DESTROY_CRYPTOSESSION";
    case 0x3001a8:
      return L"D3D11_MESSAGE_ID_DESTROY_AUTHENTICATEDCHANNEL";
    case 0x3001ab:
      return L"D3D11_MESSAGE_ID_CREATERASTERIZERSTATE_INVALID_CONSERVATIVERASTERMODE";
    case 0x3001ac:
      return L"D3D11_MESSAGE_ID_DEVICE_DRAW_INVALID_SYSTEMVALUE";
    case 0x3001ad:
      return L"D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDCONTEXTTYPE";
    case 0x3001ae:
      return L"D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_DECODENOTSUPPORTED";
    case 0x3001af:
      return L"D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_ENCODENOTSUPPORTED";
    case 0x3001b0:
      return L"D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDPLANEINDEX";
    case 0x3001b1:
      return L"D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDVIDEOPLANEINDEX";
    case 0x3001b2:
      return L"D3D11_MESSAGE_ID_CREATESHADERRESOURCEVIEW_AMBIGUOUSVIDEOPLANEINDEX";
    case 0x3001b3:
      return L"D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDPLANEINDEX";
    case 0x3001b4:
      return L"D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDVIDEOPLANEINDEX";
    case 0x3001b5:
      return L"D3D11_MESSAGE_ID_CREATERENDERTARGETVIEW_AMBIGUOUSVIDEOPLANEINDEX";
    case 0x3001b6:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDPLANEINDEX";
    case 0x3001b7:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_INVALIDVIDEOPLANEINDEX";
    case 0x3001b8:
      return L"D3D11_MESSAGE_ID_CREATEUNORDEREDACCESSVIEW_AMBIGUOUSVIDEOPLANEINDEX";
    case 0x3001b9:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_INVALIDSCANDATAOFFSET";
    case 0x3001ba:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_NOTSUPPORTED";
    case 0x3001bb:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_DIMENSIONSTOOLARGE";
    case 0x3001bc:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_INVALIDCOMPONENTS";
    case 0x3001bd:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_DESTINATIONNOT2D";
    case 0x3001be:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_TILEDRESOURCESUNSUPPORTED";
    case 0x3001bf:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_GUARDRECTSUNSUPPORTED";
    case 0x3001c0:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_FORMATUNSUPPORTED";
    case 0x3001c1:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_INVALIDSUBRESOURCE";
    case 0x3001c2:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_INVALIDMIPLEVEL";
    case 0x3001c3:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_EMPTYDESTBOX";
    case 0x3001c4:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_DESTBOXNOT2D";
    case 0x3001c5:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_DESTBOXNOTSUB";
    case 0x3001c6:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_DESTBOXESINTERSECT";
    case 0x3001c7:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_XSUBSAMPLEMISMATCH";
    case 0x3001c8:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_YSUBSAMPLEMISMATCH";
    case 0x3001c9:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_XSUBSAMPLEODD";
    case 0x3001ca:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_YSUBSAMPLEODD";
    case 0x3001cb:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_OUTPUTDIMENSIONSTOOLARGE";
    case 0x3001cc:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_NONPOW2SCALEUNSUPPORTED";
    case 0x3001cd:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_FRACTIONALDOWNSCALETOLARGE";
    case 0x3001ce:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_CHROMASIZEMISMATCH";
    case 0x3001cf:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_LUMACHROMASIZEMISMATCH";
    case 0x3001d0:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_INVALIDNUMDESTINATIONS";
    case 0x3001d1:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_SUBBOXUNSUPPORTED";
    case 0x3001d2:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_1DESTUNSUPPORTEDFORMAT";
    case 0x3001d3:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_3DESTUNSUPPORTEDFORMAT";
    case 0x3001d4:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_SCALEUNSUPPORTED";
    case 0x3001d5:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_INVALIDSOURCESIZE";
    case 0x3001d6:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_INVALIDCOPYFLAGS";
    case 0x3001d7:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_HAZARD";
    case 0x3001d8:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPORTEDSRCBUFFERUSAGE";
    case 0x3001d9:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPORTEDSRCBUFFERMISCFLAGS";
    case 0x3001da:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPORTEDDSTTEXTUREUSAGE";
    case 0x3001db:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_BACKBUFFERNOTSUPPORTED";
    case 0x3001dc:
      return L"D3D11_MESSAGE_ID_JPEGDECODE_UNSUPPRTEDCOPYFLAGS";
    case 0x3001dd:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_NOTSUPPORTED";
    case 0x3001de:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_INVALIDSCANDATAOFFSET";
    case 0x3001df:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_INVALIDCOMPONENTS";
    case 0x3001e0:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_SOURCENOT2D";
    case 0x3001e1:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_TILEDRESOURCESUNSUPPORTED";
    case 0x3001e2:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_GUARDRECTSUNSUPPORTED";
    case 0x3001e3:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_XSUBSAMPLEMISMATCH";
    case 0x3001e4:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_YSUBSAMPLEMISMATCH";
    case 0x3001e5:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_FORMATUNSUPPORTED";
    case 0x3001e6:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_INVALIDSUBRESOURCE";
    case 0x3001e7:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_INVALIDMIPLEVEL";
    case 0x3001e8:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_DIMENSIONSTOOLARGE";
    case 0x3001e9:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_HAZARD";
    case 0x3001ea:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_UNSUPPORTEDDSTBUFFERUSAGE";
    case 0x3001eb:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_UNSUPPORTEDDSTBUFFERMISCFLAGS";
    case 0x3001ec:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_UNSUPPORTEDSRCTEXTUREUSAGE";
    case 0x3001ed:
      return L"D3D11_MESSAGE_ID_JPEGENCODE_BACKBUFFERNOTSUPPORTED";
    case 0x3001ee:
      return L"D3D11_MESSAGE_ID_CREATEQUERYORPREDICATE_UNSUPPORTEDCONTEXTTTYPEFORQUERY";
    case 0x3001ef:
      return L"D3D11_MESSAGE_ID_FLUSH1_INVALIDCONTEXTTYPE";
    }
  }
  return L"xxxx_MESSAGE_ID_***unknown***";
}



/* Function: FUN_0045097e */

void __fastcall FUN_0045097e(int *param_1)

{
  FUN_004457ba(param_1,*(undefined4 **)(*param_1 + 4));
  FUN_004457f3(*param_1,0x14);
  return;
}



/* Function: FUN_0045099f */

void __fastcall FUN_0045099f(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)param_1[1];
    for (; piVar2 != piVar1; piVar2 = piVar2 + 6) {
      FUN_00445346(piVar2);
    }
    FUN_004457f3(*param_1,((param_1[2] - *param_1) / 0x18) * 0x18);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Function: FUN_004509f7 */

void __fastcall FUN_004509f7(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454597;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004474a8();
  if (cVar1 == '\0') {
    FUN_0044ad9d(param_1);
  }
  else {
    *param_1 = 0;
    FUN_0044b027((int)param_1);
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00450a51 */

int * __fastcall FUN_00450a51(int *param_1)

{
  int iVar1;
  DWORD dwErrCode;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004546f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    local_8 = 0;
    dwErrCode = GetLastError();
    FUN_0044ad6b(iVar1);
    SetLastError(dwErrCode);
  }
  *param_1 = 0;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00450ab9 */

void __fastcall FUN_00450ab9(undefined1 *param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004549a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004474a8();
  if (cVar1 == '\0') {
    FUN_0044a48c(param_1);
  }
  else {
    *param_1 = 0;
    local_8 = 0;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      FUN_0045109a(*(int **)(param_1 + 8));
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_00450b1e */

void __thiscall FUN_00450b1e(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_004497b2(this,&param_1,4,&param_2,4,param_3);
  return;
}



/* Function: FUN_00450b41 */

void __fastcall FUN_00450b41(void *param_1)

{
  FUN_004497b2(param_1,&stack0x00000004,4,&stack0x00000008,4,1);
  return;
}



/* Function: FUN_00450b63 */

void __thiscall FUN_00450b63(void *this,int param_1)

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



/* Function: FUN_00450b8d */

void __fastcall FUN_00450b8d(int *param_1)

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



/* Function: FUN_00450bad */

void __thiscall FUN_00450bad(void *this,undefined4 param_1)

{
  PTP_TIMER p_Var1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  p_Var1 = *this;
  if (p_Var1 != (PTP_TIMER)0x0) {
    dwErrCode = GetLastError();
    FUN_00451719(p_Var1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00450be4 */

void __fastcall FUN_00450be4(int *param_1)

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



/* Function: FUN_00450c29 */

undefined4 __thiscall FUN_00450c29(void *this,LONG param_1,LONG param_2,LPCWSTR param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateSemaphoreExW((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,param_3,0,0x1f0003);
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_00447445(extraout_ECX);
  }
  else {
    GetLastError();
    FUN_00450c79(this,pvVar1);
  }
  return uVar2;
}



/* Function: FUN_00450c79 */

void __thiscall FUN_00450c79(void *this,undefined4 param_1)

{
  HANDLE pvVar1;
  DWORD dwErrCode;
  
                    /* WARNING: Load size is inaccurate */
  pvVar1 = *this;
  if (pvVar1 != (HANDLE)0x0) {
    dwErrCode = GetLastError();
    FUN_00447dc7(pvVar1);
    SetLastError(dwErrCode);
  }
  *(undefined4 *)this = param_1;
  return;
}



/* Function: FUN_00450cb0 */

undefined4 * __thiscall FUN_00450cb0(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 <= *(uint *)((int)this + 0x10)) {
    uVar2 = *(uint *)((int)this + 0x10) - param_2;
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      this = *this;
    }
    FUN_00445735(param_1,(void *)((int)this + param_2 * 2),param_3);
    return param_1;
  }
  thunk_FUN_00446763();
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar1)();
  return puVar3;
}



/* Function: FUN_00450d07 */

void __thiscall FUN_00450d07(void *this,ushort *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)(param_1 + 8);
  if (7 < *(uint *)(param_1 + 10)) {
    param_1 = *(ushort **)param_1;
  }
  puVar2 = (uint *)((int)this + 0x10);
  if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
    this = *this;
  }
  FUN_0045249c((int)this,*puVar2,0,param_1,*puVar1);
  return;
}



/* Function: FUN_00450d3a */

void __thiscall FUN_00450d3a(void *this,uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)((int)this + 0x10);
  if (*puVar1 < param_1) {
    FUN_004513a8(this,param_1 - *puVar1,0);
  }
  else {
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      this = *this;
    }
    *puVar1 = param_1;
    *(undefined2 *)((int)this + param_1 * 2) = 0;
  }
  return;
}



/* Function: FUN_00450d71 */

int * __thiscall FUN_00450d71(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((int *)this != param_1) {
    FUN_00445346((int *)this);
    piVar2 = param_1;
    piVar3 = (int *)this;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    param_1[4] = 0;
    param_1[5] = 7;
    *(undefined2 *)param_1 = 0;
  }
  return (int *)this;
}



/* Function: FUN_00450db0 */

void __fastcall FUN_00450db0(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_0044699e(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00450c79(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00447445(extraout_ECX);
    goto LAB_00450e9c;
  }
  FUN_004516d6(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_00447e1f(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_00450eca:
    FUN_00447c5e(unaff_retaddr,uVar3);
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_004514ca((int)local_210,&local_214,param_2);
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_00450eca;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00447df4(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00447dc7(local_214);
  }
LAB_00450e9c:
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00450edc */

int __fastcall FUN_00450edc(int *param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hHeap;
  int *piVar4;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_004474a8();
  if (cVar1 == '\0') {
    iVar2 = FUN_004516d6(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar4 = local_8;
    if (*param_1 == 0) {
      FUN_00450c79(param_1 + 2,0);
      FUN_00450c79(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar3 = GetLastError();
        FUN_00447df4(local_8);
        SetLastError(DVar3);
      }
      FUN_0045144d((int)param_1);
      DVar3 = 0;
      hHeap = GetProcessHeap();
      iVar2 = HeapFree(hHeap,DVar3,param_1);
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = FUN_00447df4(piVar4);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    iVar2 = *param_1;
  }
  return iVar2;
}



/* Function: FUN_00450f6b */

void __fastcall FUN_00450f6b(undefined4 param_1,undefined4 *param_2)

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
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  GetCurrentProcessId();
  FUN_0044699e(local_210,0x104,L"Local\\SM0:%lu:%lu:%hs");
  local_214 = (HANDLE)0x0;
  pvVar1 = CreateMutexExW((LPSECURITY_ATTRIBUTES)0x0,local_210,0,0x1f0001);
  FUN_00450c79(&local_214,pvVar1);
  if (local_214 == (HANDLE)0x0) {
    FUN_00447445(extraout_ECX);
    goto LAB_0045105a;
  }
  FUN_004516d6(&local_214,&local_21c);
  local_218 = (int *)0x0;
  iVar2 = FUN_00447e1f(local_210,(int *)&local_218);
  if (iVar2 < 0) {
    uVar3 = 299;
LAB_00451088:
    FUN_00447c5e(unaff_retaddr,uVar3);
  }
  else if (local_218 == (int *)0x0) {
    iVar2 = FUN_00451587((int)local_210,&local_214,param_2);
    if (iVar2 < 0) {
      uVar3 = 0x134;
      goto LAB_00451088;
    }
  }
  else {
    *param_2 = local_218;
    *(int *)*param_2 = *local_218 + 1;
  }
  if (local_21c != (HANDLE)0x0) {
    FUN_00447df4(local_21c);
  }
  if (local_214 != (HANDLE)0x0) {
    FUN_00447dc7(local_214);
  }
LAB_0045105a:
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0045109a */

void __fastcall FUN_0045109a(int *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hHeap;
  int *piVar3;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_004474a8();
  if (cVar1 == '\0') {
    FUN_004516d6(param_1 + 1,&local_8);
    *param_1 = *param_1 + -1;
    piVar3 = local_8;
    if (*param_1 == 0) {
      FUN_00450c79(param_1 + 2,0);
      FUN_00450c79(param_1 + 3,0);
      if (local_8 != (int *)0x0) {
        DVar2 = GetLastError();
        FUN_00447df4(local_8);
        SetLastError(DVar2);
      }
      FUN_00451478((int)param_1);
      DVar2 = 0;
      hHeap = GetProcessHeap();
      HeapFree(hHeap,DVar2,param_1);
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      FUN_00447df4(piVar3);
    }
  }
  else {
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_0044a2c3(param_1 + 4);
    }
  }
  return;
}



/* Function: FUN_00451134 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451134(void)

{
  _DAT_0045af8c = "WilStaging_02";
  DAT_0045af88 = 0;
  _DAT_0045af90 = 0;
  DAT_0045af94 = 0;
  _DAT_0045af98 = 0;
  _DAT_0045af9c = 0;
  _DAT_0045afa0 = 0;
  _DAT_0045afa4 = 0;
  _DAT_0045afa8 = 0;
  FUN_0044a9c3((LPCRITICAL_SECTION)&DAT_0045afac);
  _DAT_0045afd4 = 0;
  FUN_0044a9c3((LPCRITICAL_SECTION)&DAT_0045afd8);
  _DAT_0045b010 = 0;
  _DAT_0045b000 = 0;
  uRam0045b004 = 0;
  uRam0045b008 = 0;
  uRam0045b00c = 0;
  DAT_0045af88 = 1;
  return;
}



/* Function: FUN_004511ad */

undefined4 * __thiscall
FUN_004511ad(void *this,uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined *_Dst;
  undefined *_Src;
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_18;
  void *local_c;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (param_1 <= uVar1) {
    uVar3 = uVar1 - param_1;
    if (uVar3 < param_2) {
      param_2 = uVar3;
    }
    if (param_2 == param_4) {
      pvVar4 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar4 = *this;
      }
      memmove((void *)((int)pvVar4 + param_1 * 2),&DAT_0040381c,param_4 * 2);
    }
    else if (param_4 < param_2) {
      pvVar4 = this;
      if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar4 = *this;
      }
      pvVar4 = (void *)((int)pvVar4 + param_1 * 2);
      memmove(pvVar4,&DAT_0040381c,param_4 * 2);
      memmove((void *)(param_4 * 2 + (int)pvVar4),(void *)((int)pvVar4 + param_2 * 2),
              (uVar3 - param_2) * 2 + 2);
      *(uint *)((int)this + 0x10) = (uVar1 - param_2) + param_4;
    }
    else {
      uVar5 = param_4 - param_2;
      if (*(uint *)((int)this + 0x14) - uVar1 < uVar5) {
        local_18 = local_18 & 0xffffff00;
        this = FUN_00452522(this,uVar5,local_18,param_1,param_2,param_4,param_4);
      }
      else {
        *(uint *)((int)this + 0x10) = uVar5 + uVar1;
        local_c = this;
        if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
          local_c = *this;
        }
        _Dst = (undefined *)((int)local_c + param_1 * 2);
        _Src = _Dst + param_2 * 2;
        uVar7 = param_4;
        if ((_Dst < &DAT_0040381c + param_4 * 2) &&
           (&DAT_0040381c <= (undefined *)((int)local_c + uVar1 * 2))) {
          if (&DAT_0040381c < _Src) {
            uVar7 = (int)(_Src + -0x40381c) >> 1;
          }
          else {
            uVar7 = 0;
          }
        }
        memmove(_Src + uVar5 * 2,_Src,(uVar3 - param_2) * 2 + 2);
        memmove(_Dst,&DAT_0040381c,uVar7 * 2);
        memcpy(_Dst + uVar7 * 2,&DAT_0040381c + (uVar5 + uVar7) * 2,(param_4 - uVar7) * 2);
      }
    }
    return (undefined4 *)this;
  }
  thunk_FUN_00446763();
  pcVar2 = (code *)swi(3);
  puVar6 = (undefined4 *)(*pcVar2)();
  return puVar6;
}



/* Function: FUN_0045133b */

void FUN_0045133b(void *param_1,void *param_2,int param_3,int param_4,int param_5,undefined4 param_6
                 ,int param_7)

{
  memcpy(param_1,param_2,param_4 * 2);
  memcpy((void *)((int)param_1 + param_4 * 2),&DAT_0040381c,param_7 * 2);
  memcpy((void *)((int)param_1 + (param_4 + param_7) * 2),
         (void *)((int)param_2 + (param_4 + param_5) * 2),((param_3 - param_4) - param_5) * 2 + 2);
  return;
}



/* Function: FUN_004513a8 */

undefined4 * __thiscall FUN_004513a8(void *this,uint param_1,undefined2 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if ((uint)(*(int *)((int)this + 0x14) - iVar1) < param_1) {
    local_8 = (uint)this & 0xffffff00;
    this = FUN_004525ba(this,param_1,local_8,param_1,param_2);
  }
  else {
    *(uint *)((int)this + 0x10) = iVar1 + param_1;
    pvVar2 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar2 = *this;
    }
    FUN_0044683a((undefined4 *)((int)pvVar2 + iVar1 * 2),param_2,param_1);
    *(undefined2 *)((int)pvVar2 + (iVar1 + param_1) * 2) = 0;
  }
  return (undefined4 *)this;
}



/* Function: FUN_00451409 */

void FUN_00451409(void *param_1,void *param_2,int param_3,uint param_4,undefined2 param_5)

{
  memcpy(param_1,param_2,param_3 * 2);
  FUN_0044683a((undefined4 *)(param_3 * 2 + (int)param_1),param_5,param_4);
  *(undefined2 *)((int)param_1 + (param_3 + param_4) * 2) = 0;
  return;
}



/* Function: FUN_0045144d */

void __fastcall FUN_0045144d(int param_1)

{
  FUN_0045167b((int *)(param_1 + 0x18));
  FUN_004514a3((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00447dc7(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_00451478 */

void __fastcall FUN_00451478(int param_1)

{
  FUN_0044a262((void *)(param_1 + 0x10));
  FUN_004514a3((int *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00447dc7(*(HANDLE *)(param_1 + 4));
  }
  return;
}



/* Function: FUN_004514a3 */

void __fastcall FUN_004514a3(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_00447dc7((HANDLE)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00447dc7((HANDLE)*param_1);
  }
  return;
}



/* Function: FUN_004514ca */

int __fastcall FUN_004514ca(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00446d7b(8,0x40);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00447c5e(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00447dbb();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_00447e77(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00447c5e(unaff_retaddr,0x14b);
    }
    else {
      FUN_00451829(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_004514a3(local_10);
  }
  FUN_00450b8d((int *)&local_18);
  return iVar3;
}



/* Function: FUN_00451587 */

int __fastcall FUN_00451587(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  LPVOID local_18;
  LPVOID local_14;
  int local_10 [3];
  
  *param_3 = 0;
  local_18 = FUN_00446d7b(8,0xa8);
  local_14 = local_18;
  if (local_18 == (LPVOID)0x0) {
    iVar3 = -0x7ff8fff2;
    FUN_00447c5e(unaff_retaddr,0x148);
  }
  else {
    local_10[0] = 0;
    local_10[1] = 0;
    if (((uint)local_18 & 3) != 0) {
      FUN_00447dbb();
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = FUN_00447e77(local_10,param_1,0,(uint)local_18 >> 2,0);
    pvVar2 = local_14;
    if (iVar3 < 0) {
      FUN_00447c5e(unaff_retaddr,0x14b);
    }
    else {
      FUN_0045188d(local_14,param_2,local_10);
      local_18 = (LPVOID)0x0;
      *param_3 = pvVar2;
      iVar3 = 0;
    }
    FUN_004514a3(local_10);
  }
  FUN_00450b8d((int *)&local_18);
  return iVar3;
}



/* Function: FUN_00451646 */

uint __fastcall FUN_00451646(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *local_c;
  void *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_004518f1(param_1,(uint *)&local_c);
  uVar1 = local_c._0_1_;
  local_8 = (void *)(CONCAT31(local_8._1_3_,local_c._0_1_) & 0xffffff01);
  uVar2 = FUN_004519f6(param_1,(byte)local_8);
  return CONCAT31((int3)((uint)uVar2 >> 8),uVar1) & 0xffffff01;
}



/* Function: FUN_0045167b */

void __fastcall FUN_0045167b(int *param_1)

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
        FUN_00448207((int)lpMem + 8);
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



/* Function: FUN_004516d6 */

void __thiscall FUN_004516d6(void *this,undefined4 *param_1)

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
    FUN_00447d30(unaff_retaddr);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_1 = hHandle;
  return;
}



/* Function: FUN_00451719 */

void FUN_00451719(PTP_TIMER param_1)

{
  SetThreadpoolTimer(param_1,(PFILETIME)0x0,0,0);
  WaitForThreadpoolTimerCallbacks(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00451738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseThreadpoolTimer();
  return;
}



/* Function: FUN_00451744 */

int * __thiscall FUN_00451744(void *this,undefined4 param_1,uint param_2)

{
  void *_Dst;
  
  if (*(uint *)((int)this + 0x14) < param_2) {
    this = FUN_0045264e(this,param_2);
  }
  else {
    _Dst = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      _Dst = *this;
    }
    *(uint *)((int)this + 0x10) = param_2;
    memmove(_Dst,&DAT_0040381c,param_2 * 2);
    *(undefined2 *)(param_2 * 2 + (int)_Dst) = 0;
  }
  return (int *)this;
}



/* Function: FUN_0045179b */

uint __fastcall FUN_0045179b(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  uint local_c;
  
  FUN_00451a5b(param_1,(uint *)local_10);
  local_c = CONCAT31(local_c._1_3_,local_10[0]) & 0xffffff01;
  uVar1 = FUN_00451b60(param_1,(byte)local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),local_10[0]) & 0xffffff01;
}



/* Function: FUN_004517d3 */

void __fastcall FUN_004517d3(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  uVar2 = *param_1;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00451bb9(param_1,local_18);
    uVar2 = *puVar1;
  }
  local_c = 3;
  local_10 = 0;
  FUN_0044b2b5(param_1 + 2,0x2af34f6,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,1,0);
  return;
}



/* Function: FUN_00451829 */

undefined4 * __thiscall FUN_00451829(void *this,undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_0045188d */

undefined4 * __thiscall FUN_0045188d(void *this,undefined4 *param_1,undefined4 *param_2)

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
  FUN_00449ef2((void *)((int)this + 0x14));
  FUN_0044a9c3((LPCRITICAL_SECTION)((int)this + 0x80));
  return (undefined4 *)this;
}



/* Function: FUN_004518f1 */

uint * __thiscall FUN_004518f1(void *this,uint *param_1)

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
  local_10 = FUN_0044b103();
  FUN_00451cbe(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_004561d4 == '\0')) goto LAB_004519d0;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004561d8);
  if ((local_10 == 0) || (local_10 != DAT_004561e4)) {
LAB_004519c0:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 1;
    local_14 = this;
    uVar2 = FUN_00449091(&DAT_00456200,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_004519c0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004561d8);
LAB_004519d0:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_004519f6 */

void __thiscall FUN_004519f6(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_004518f1(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0044b2b5((uint *)((int)this + 8),0x37bc395,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,3);
  return;
}



/* Function: thunk_FUN_00446763 */

void thunk_FUN_00446763(void)

{
  exception aeStack_10 [12];
  
  FUN_004466ca(aeStack_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(aeStack_10,(ThrowInfo *)&DAT_00454f2c);
}



/* Function: FUN_00451a5b */

uint * __thiscall FUN_00451a5b(void *this,uint *param_1)

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
  local_10 = FUN_0044b103();
  FUN_00451d94(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_004561d4 == '\0')) goto LAB_00451b3a;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004561d8);
  if ((local_10 == 0) || (local_10 != DAT_004561e4)) {
LAB_00451b2a:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 1;
    local_14 = this;
    uVar2 = FUN_00449091(&DAT_00456200,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00451b2a;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004561d8);
LAB_00451b3a:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00451b60 */

void __thiscall FUN_00451b60(void *this,byte param_1)

{
  uint *puVar1;
  uint uVar2;
  uint local_18 [2];
  undefined4 local_10;
  undefined1 local_c;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *this;
  if ((uVar2 & 4) == 0) {
    puVar1 = FUN_00451a5b(this,local_18);
    uVar2 = *puVar1;
  }
  local_c = 2;
  local_10 = 0;
  FUN_0044b2b5((uint *)((int)this + 8),0x37b38eb,uVar2 >> 10 & 1,uVar2 >> 0xb & 1,(int)&local_10,
               (uint)param_1,0);
  return;
}



/* Function: FUN_00451bb9 */

uint * __thiscall FUN_00451bb9(void *this,uint *param_1)

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
  local_10 = FUN_0044b103();
  FUN_00451e3f(local_20,local_c);
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
  if (((uVar4 & 4) != 0) || (DAT_004561d4 == '\0')) goto LAB_00451c98;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_004561d8);
  if ((local_10 == 0) || (local_10 != DAT_004561e4)) {
LAB_00451c88:
                    /* WARNING: Load size is inaccurate */
    LOCK();
    *(uint *)this = *this & 0xfffffffb;
    UNLOCK();
  }
  else {
    local_18 = 3;
    local_14 = this;
    uVar2 = FUN_00449091(&DAT_00456200,&local_18,8);
    if ((char)uVar2 == '\0') goto LAB_00451c88;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_004561d8);
LAB_00451c98:
  if ((*param_1 & 2) == 0) {
    *param_1 = *param_1 & 0xfffff63e | local_20[0] & 0x9c1;
  }
  return param_1;
}



/* Function: FUN_00451cbe */

uint * FUN_00451cbe(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = FUN_0044b11e(0x37bc395,1,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x40;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
  }
  *param_1 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3 | uVar3;
  bVar4 = false;
  if (((uVar2 & 0x40) << 2 | uVar2 & 0x80) == 0x180) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (uVar3 == 0) goto LAB_00451d72;
  }
  FUN_004517d3((uint *)&DAT_0045af68);
  uVar3 = FUN_0045179b(&DAT_0045af78);
  bVar4 = (char)uVar3 != '\0';
  if ((bVar1) && (!bVar4)) {
    *param_1 = *param_1 & 0xfffffbff;
  }
LAB_00451d72:
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar4)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00451d94 */

uint * FUN_00451d94(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_0044b11e(0x37b38eb,1,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x40;
  if ((uVar2 & 0xffffff3f) != 0) {
    uVar3 = 0;
    if ((uVar2 & 0xffffff3f) == 2) {
      uVar3 = 0x40;
    }
  }
  *param_1 = (((uVar2 & 3) << 2 | uVar2 & 0x40) << 2 | uVar2 & 0x80) << 3 | uVar3;
  bVar1 = false;
  if ((((uVar2 & 0x40) << 2 | uVar2 & 0x80) == 0x180) || (uVar3 != 0)) {
    FUN_004517d3((uint *)&DAT_0045af68);
    bVar1 = true;
  }
  uVar3 = 1;
  if (((*param_1 & 0x40) == 0) || (!bVar1)) {
    uVar3 = 0;
  }
  *param_1 = *param_1 & 0xfffffffe | uVar3;
  return param_1;
}



/* Function: FUN_00451e3f */

uint * FUN_00451e3f(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0044b11e(0x2af34f6,3,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = 0x40;
  if (((uVar1 & 0xffffff3f) != 0) && (uVar2 = 0, (uVar1 & 0xffffff3f) == 2)) {
    uVar2 = 0x40;
  }
  *param_1 = (((uVar1 & 3) << 2 | uVar1 & 0x40) << 2 | uVar1 & 0x80) << 3 | uVar2 | 1;
  return param_1;
}



/* Function: FUN_00451eae */

void __fastcall
FUN_00451eae(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = param_7;
  local_c = FUN_00447184(param_7);
  local_8 = 0;
  FUN_00451fc8(param_1,param_2,param_3,param_4,param_5,param_6,(int *)&local_10);
  return;
}



/* Function: FUN_00451ef5 */

void * __fastcall FUN_00451ef5(void *param_1,void *param_2,short *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (((param_1 == param_2) || (param_3 == (short *)0x0)) || (*param_3 == 0)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_00447480(param_3);
    if ((uint)((int)param_2 - (int)param_1) < uVar1) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else {
      FUN_004467b3(param_1,(int)param_2 - (int)param_1,param_3,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_1;
      }
      param_1 = (void *)(uVar1 + (int)param_1);
    }
  }
  return param_1;
}



/* Function: FUN_00451f65 */

char * __fastcall FUN_00451f65(char *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *extraout_ECX;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (((param_1 != param_2) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    pcVar1 = FUN_00447462(param_3);
    pcVar2 = extraout_ECX;
    if (pcVar1 <= param_2 + -(int)param_1) {
      FUN_004467b3(param_1,(uint)(param_2 + -(int)param_1),param_3,(uint)pcVar1);
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



/* Function: FUN_00451fc8 */

void __fastcall
FUN_00451fc8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  FUN_00452a12(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(short *)0x0);
  return;
}



/* Function: FUN_00451fee */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00451fee(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

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
  
  puStack_c = &LAB_004549c8;
  local_10 = ExceptionList;
  uStack_14 = 0x45200b;
  uVar3 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_141c = param_6;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_1474 = *param_7;
  local_1470 = param_7[1];
  local_1420 = param_1;
  local_1418 = param_2;
  local_1450 = FUN_00446f40(local_1474);
  local_147c = 3;
  local_1478 = 0;
  if (param_7[2] == 1) {
    local_1478 = 8;
  }
  LOCK();
  UNLOCK();
  local_146c = DAT_00457e20 + 1;
  local_1468 = 0;
  DAT_00457e20 = DAT_00457e20 + 1;
  local_1464 = GetCurrentThreadId();
  pcVar1 = DAT_00456fe8;
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
  if (DAT_00456fe8 == (code *)0x0) {
    local_1430 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0045c254)(uVar3);
    local_1430 = (*pcVar1)();
  }
  pcVar1 = DAT_00456fac;
  if (DAT_00456fac != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fc4;
  if (DAT_00456fc4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(&local_147c,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fc0;
  if (DAT_00456fc0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(&local_147c);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fd4;
  if ((DAT_00456fd4 != (code *)0x0) && ((local_1478 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0045c254)(&local_147c);
    (*pcVar1)();
  }
  if (-1 < local_1474) {
    local_1474 = -0x7fff0001;
    local_1470 = FUN_00447184(0x8000ffff);
  }
  pcVar1 = DAT_00456f98;
  if (DAT_00456fa0 == '\0') {
    if (DAT_00456f98 == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0045c254)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_004521f2;
  }
  else {
LAB_004521f2:
    pcVar1 = DAT_00456fa4;
    if ((local_1478 & 2) == 0) {
      if ((DAT_00456fa4 != (code *)0x0) && (DAT_00456fb4 == '\0')) {
        (*(code *)PTR_guard_check_icall_0045c254)(&local_147c,local_1414,0x800);
        (*pcVar1)();
      }
      if (local_1414[0] == L'\0') {
        FUN_00446abf(local_1414,0x800,(int)&local_147c);
      }
      OutputDebugStringW(local_1414);
      goto LAB_0045227c;
    }
  }
  pcVar1 = DAT_00456fa4;
  if ((DAT_00456fa4 != (code *)0x0) && (DAT_00456fb4 == '\0')) {
    (*(code *)PTR_guard_check_icall_0045c254)(&local_147c,0,0);
    (*pcVar1)();
  }
LAB_0045227c:
  pcVar1 = DAT_00456fcc;
  if ((((local_1478 & 4) != 0) || (DAT_00456fa8 != '\0')) && (DAT_00456fcc != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0045c254)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  FUN_00447b0d((int)&local_147c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004522bc */

void __fastcall FUN_004522bc(undefined4 param_1,undefined4 param_2)

{
  FUN_00452ab8(param_1,param_2);
  return;
}



/* Function: FUN_004522cd */

void __fastcall FUN_004522cd(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_00000014;
  
  FUN_00447184(in_stack_00000014);
  FUN_004522bc(param_1,param_2);
  return;
}



/* Function: FUN_0045230e */

uint __fastcall FUN_0045230e(int param_1,int param_2)

{
  uint uVar1;
  int in_stack_00000010;
  
  uVar1 = FUN_004473c4(param_1,param_2,0x4039dc,param_1,param_1,in_stack_00000010);
  FUN_00447184(uVar1);
  FUN_004522bc(param_1,param_2);
  return uVar1;
}



/* Function: FUN_00452363 */

void __fastcall FUN_00452363(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0xc);
    (*(code *)PTR_guard_check_icall_0045c254)();
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00452390 */

void FUN_00452390(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x10);
    AcquireSRWLockExclusive(SRWLock);
    param_2[0x21] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
    FUN_0044a68a((int)param_2);
  }
  return;
}



/* Function: FUN_004523d0 */

void FUN_004523d0(undefined4 param_1,char *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  
  if (*param_2 != '\0') {
    SRWLock = (PSRWLOCK)(param_2 + 0x14);
    AcquireSRWLockExclusive(SRWLock);
    piVar1 = (int *)(param_2 + 0x7c);
    if (0xb < (uint)(*(int *)(param_2 + 0x80) - *piVar1)) {
      FUN_004490d2(piVar1);
      *(int *)(param_2 + 0x80) = *piVar1;
    }
    param_2[0x20] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}



/* Function: FUN_00452420 */

void FUN_00452420(undefined4 param_1,char *param_2)

{
  FUN_0044aec8(param_2);
  return;
}



/* Function: FUN_00452437 */

void * __fastcall FUN_00452437(void *param_1,undefined4 *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  short *psVar5;
  uint uVar6;
  
  iVar2 = param_2[4];
  psVar5 = param_3;
  do {
    sVar1 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar1 != 0);
  uVar6 = (int)psVar5 - (int)(param_3 + 1) >> 1;
  if (uVar6 <= 0x7ffffffeU - iVar2) {
    if (7 < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    FUN_004528b8(param_1,param_1,iVar2,param_2,iVar2,param_3,uVar6);
    return param_1;
  }
  FUN_00442ad3();
  pcVar3 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar3)();
  return pvVar4;
}



/* Function: FUN_0045249c */

uint __fastcall FUN_0045249c(int param_1,uint param_2,uint param_3,ushort *param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  if ((param_2 < param_5) || (param_2 - param_5 < param_3)) {
LAB_00452512:
    param_3 = 0xffffffff;
  }
  else if (param_5 != 0) {
    puVar4 = (ushort *)(param_1 + param_3 * 2);
    uVar1 = *param_4;
    while( true ) {
      iVar2 = (int)((param_1 + ((param_2 - param_5) + 1) * 2) - (int)puVar4) >> 1;
      puVar3 = (ushort *)0x0;
      if (iVar2 != 0) {
        for (; (puVar3 = puVar4, *puVar4 != uVar1 && (puVar3 = (ushort *)0x0, iVar2 != 1));
            iVar2 = iVar2 + -1) {
          puVar4 = puVar4 + 1;
        }
      }
      if (puVar3 == (ushort *)0x0) goto LAB_00452512;
      iVar2 = FUN_00452953((int)puVar3,param_4,param_5);
      if (iVar2 == 0) break;
      puVar4 = puVar3 + 1;
    }
    param_3 = (int)puVar3 - param_1 >> 1;
  }
  return param_3;
}



/* Function: FUN_00452522 */

undefined4 * __thiscall
FUN_00452522(void *this,uint param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  uint local_8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (param_1 <= 0x7ffffffeU - iVar1) {
    uVar2 = *(uint *)((int)this + 0x14);
    local_8 = FUN_00445826(iVar1 + param_1,uVar2,0x7ffffffe);
    pvVar5 = (void *)FUN_00445ab3(extraout_ECX,&local_8);
    *(uint *)((int)this + 0x10) = iVar1 + param_1;
    *(uint *)((int)this + 0x14) = local_8;
    if (uVar2 < 8) {
      FUN_0045133b(pvVar5,this,iVar1,param_3,param_4,local_8,param_6);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      pvVar3 = *this;
      FUN_0045133b(pvVar5,pvVar3,iVar1,param_3,param_4,local_8,param_6);
      FUN_004457f3((int)pvVar3,uVar2 * 2 + 2);
    }
    *(void **)this = pvVar5;
    return (undefined4 *)this;
  }
  FUN_00442ad3();
  pcVar4 = (code *)swi(3);
  puVar6 = (undefined4 *)(*pcVar4)();
  return puVar6;
}



/* Function: FUN_004525ba */

undefined4 * __thiscall
FUN_004525ba(void *this,uint param_1,undefined4 param_2,uint param_3,undefined2 param_4)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  uint local_8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (param_1 <= 0x7ffffffeU - iVar1) {
    uVar2 = *(uint *)((int)this + 0x14);
    local_8 = FUN_00445826(iVar1 + param_1,uVar2,0x7ffffffe);
    pvVar5 = (void *)FUN_00445ab3(extraout_ECX,&local_8);
    *(uint *)((int)this + 0x10) = iVar1 + param_1;
    *(uint *)((int)this + 0x14) = local_8;
    if (uVar2 < 8) {
      FUN_00451409(pvVar5,this,iVar1,param_3,param_4);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      pvVar3 = *this;
      FUN_00451409(pvVar5,pvVar3,iVar1,param_3,param_4);
      FUN_004457f3((int)pvVar3,uVar2 * 2 + 2);
    }
    *(void **)this = pvVar5;
    return (undefined4 *)this;
  }
  FUN_00442ad3();
  pcVar4 = (code *)swi(3);
  puVar6 = (undefined4 *)(*pcVar4)();
  return puVar6;
}



/* Function: FUN_0045264e */

int * __thiscall FUN_0045264e(void *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  void *_Dst;
  int *piVar3;
  undefined4 extraout_ECX;
  void *local_8;
  
  local_8 = this;
  if (param_1 < 0x7fffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    local_8 = (void *)FUN_00445826(param_1,uVar1,0x7ffffffe);
    _Dst = (void *)FUN_00445ab3(extraout_ECX,(uint *)&local_8);
    *(uint *)((int)this + 0x10) = param_1;
    *(void **)((int)this + 0x14) = local_8;
    memcpy(_Dst,&DAT_0040381c,param_1 * 2);
    *(undefined2 *)(param_1 * 2 + (int)_Dst) = 0;
    if (7 < uVar1) {
                    /* WARNING: Load size is inaccurate */
      FUN_004457f3(*this,uVar1 * 2 + 2);
    }
    *(void **)this = _Dst;
    return (int *)this;
  }
  FUN_00442ad3();
  pcVar2 = (code *)swi(3);
  piVar3 = (int *)(*pcVar2)();
  return piVar3;
}



/* Function: FUN_004526d0 */

undefined4 * __thiscall FUN_004526d0(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint local_8;
  
  uVar1 = param_1[4];
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  iVar2 = *(int *)((int)this + 0x10);
  if ((uint)(*(int *)((int)this + 0x14) - iVar2) < uVar1) {
    local_8 = (uint)this & 0xffffff00;
    this = FUN_00452e33(this,uVar1,local_8,param_1,uVar1);
  }
  else {
    *(uint *)((int)this + 0x10) = uVar1 + iVar2;
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar3 = *this;
    }
    memmove((void *)((int)pvVar3 + iVar2 * 2),param_1,uVar1 * 2);
    *(undefined2 *)((int)pvVar3 + (uVar1 + iVar2) * 2) = 0;
  }
  return (undefined4 *)this;
}



/* Function: FUN_00452746 */

undefined4 * __thiscall
FUN_00452746(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  size_t _Size;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_10 = param_2[4];
  local_14 = param_3[4];
  local_8 = local_14 + local_10;
  local_c = (undefined4 *)this;
  if ((param_2[5] - local_10 < local_14) || ((uint)param_2[5] < (uint)param_3[5])) {
    if (param_3[5] - local_14 < local_10) {
      if (local_14 <= 0x7ffffffe - local_10) {
        local_18 = FUN_00445826(local_8,7,0x7ffffffe);
        pvVar2 = (void *)FUN_00445ab3(extraout_ECX,&local_18);
        puVar3 = local_c;
        *local_c = pvVar2;
        local_c[4] = local_8;
        local_c[5] = local_18;
        if (7 < (uint)param_2[5]) {
          param_2 = (undefined4 *)*param_2;
        }
        local_18 = local_10 * 2;
        memcpy(pvVar2,param_2,local_18);
        if (7 < (uint)param_3[5]) {
          param_3 = (undefined4 *)*param_3;
        }
        memcpy((void *)((int)pvVar2 + local_18),param_3,local_14 * 2 + 2);
        return puVar3;
      }
      FUN_00442ad3();
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined4 *)(*pcVar1)();
      return puVar3;
    }
    puVar3 = param_3;
    puVar5 = (undefined4 *)this;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    param_3[4] = 0;
    *(undefined2 *)param_3 = 0;
    param_3[5] = 7;
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *this;
    _Size = local_10 * 2;
    memmove((void *)(_Size + (int)pvVar2),pvVar2,local_14 * 2 + 2);
    param_3 = param_2;
    if (7 < (uint)param_2[5]) {
      param_3 = (undefined4 *)*param_2;
    }
  }
  else {
    puVar3 = param_2;
    puVar5 = (undefined4 *)this;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    param_2[4] = 0;
    *(undefined2 *)param_2 = 0;
    param_2[5] = 7;
    pvVar2 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar2 = *this;
    }
    if (7 < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    _Size = local_14 * 2 + 2;
    pvVar2 = (void *)((int)pvVar2 + local_10 * 2);
  }
  memcpy(pvVar2,param_3,_Size);
  local_c[4] = local_8;
  return local_c;
}



/* Function: FUN_004528b8 */

undefined4 * __thiscall
FUN_004528b8(void *this,undefined4 param_1,undefined4 param_2,void *param_3,int param_4,
            void *param_5,int param_6)

{
  void *pvVar1;
  void *_Dst;
  uint uVar2;
  void *local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar2 = param_6 + param_4;
  *(undefined4 *)((int)this + 0x14) = 0;
  pvVar1 = (void *)0x7;
  _Dst = this;
  local_8 = this;
  if (7 < uVar2) {
    pvVar1 = (void *)(uVar2 | 7);
    local_8 = (void *)0x7ffffffe;
    if (pvVar1 < (void *)0x7fffffff) {
      local_8 = pvVar1;
      if (pvVar1 < (void *)0xa) {
        local_8 = (void *)0xa;
      }
    }
    _Dst = (void *)FUN_00445ab3(local_8,(uint *)&local_8);
    *(void **)this = _Dst;
    pvVar1 = local_8;
  }
  *(uint *)((int)this + 0x10) = uVar2;
  *(void **)((int)this + 0x14) = pvVar1;
  memcpy(_Dst,param_3,param_4 * 2);
  memcpy((void *)(param_4 * 2 + (int)_Dst),param_5,param_6 * 2);
  *(undefined2 *)((int)_Dst + (param_4 + param_6) * 2) = 0;
  return (undefined4 *)this;
}



/* Function: FUN_00452953 */

int __fastcall FUN_00452953(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = param_1 - (int)param_2;
    do {
      uVar1 = *(ushort *)(iVar2 + (int)param_2);
      if (uVar1 != *param_2) {
        return (-(uint)(uVar1 < *param_2) & 0xfffffffe) + 1;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}



/* Function: FUN_00452990 */

undefined4 * __thiscall FUN_00452990(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401058;
  if ((param_1 & 1) != 0) {
    FUN_004533ec(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004529c0 */

undefined4 * __thiscall FUN_004529c0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401058;
  if ((param_1 & 1) != 0) {
    FUN_004533ec(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004529eb */

short * __fastcall FUN_004529eb(short *param_1,uint param_2)

{
  uint uVar1;
  
  do {
    uVar1 = param_2 / 10;
    param_1 = param_1 + -1;
    *param_1 = (short)(param_2 % 10) + 0x30;
    param_2 = uVar1;
  } while (uVar1 != 0);
  return param_1;
}



/* Function: FUN_00452a12 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_00452a12(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
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
  
  local_c = DAT_00456140 ^ (uint)&local_1474;
  local_1474 = param_3;
  local_1470 = param_2;
  local_146c = param_1;
  FUN_00447856(param_1,param_2,param_3,param_4,param_5,param_6,2,param_7,param_8,0,local_1010,0x800,
               local_1410,0x400,&local_1468);
  if ((local_1464 & 1) == 0) {
    FUN_004533a0(local_c ^ (uint)&local_1474);
    return;
  }
  FUN_00447b0d((int)&local_1468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00452ab8 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00452ab8(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  undefined4 in_stack_00000010;
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
  undefined *local_1450;
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
  
  puStack_c = &LAB_004549ee;
  local_10 = ExceptionList;
  uVar3 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1418 = in_stack_00000010;
  local_8 = 0;
  local_1414[0] = L'\0';
  local_414[0] = 0;
  local_146c = *in_stack_00000014;
  local_1468 = in_stack_00000014[1];
  local_141c = param_1;
  local_14 = uVar3;
  local_1448 = FUN_00446f0d(local_146c);
  local_1470 = 0;
  if (in_stack_00000014[2] == 1) {
    local_1470 = 8;
  }
  local_1474 = 1;
  LOCK();
  UNLOCK();
  local_1464 = DAT_00457e20 + 1;
  local_1460 = 0;
  DAT_00457e20 = DAT_00457e20 + 1;
  local_145c = GetCurrentThreadId();
  pcVar1 = DAT_00456fe8;
  local_1424 = local_1418;
  local_1420 = local_141c;
  local_1450 = &DAT_004039dc;
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
  if (DAT_00456fe8 == (code *)0x0) {
    local_1428 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0045c254)(uVar3);
    local_1428 = (*pcVar1)();
  }
  pcVar1 = DAT_00456fac;
  if (DAT_00456fac != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(&local_1474);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fc4;
  if (DAT_00456fc4 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(&local_1474,local_414,0x400);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fc0;
  if (DAT_00456fc0 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_0045c254)(&local_1474);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456fd4;
  if ((DAT_00456fd4 != (code *)0x0) && ((local_1470 & 2) == 0)) {
    (*(code *)PTR_guard_check_icall_0045c254)(&local_1474);
    (*pcVar1)();
  }
  pcVar1 = DAT_00456f98;
  if (-1 < local_146c) {
    FUN_00447dbb();
    goto LAB_00452d7c;
  }
  if (DAT_00456fa0 == '\0') {
    if (DAT_00456f98 == (code *)0x0) {
      BVar4 = IsDebuggerPresent();
      cVar2 = BVar4 != 0;
    }
    else {
      (*(code *)PTR_guard_check_icall_0045c254)();
      cVar2 = (*pcVar1)();
    }
    if (cVar2 != '\0') goto LAB_00452c9f;
LAB_00452ca8:
    pcVar1 = DAT_00456fa4;
    if ((DAT_00456fa4 != (code *)0x0) && (DAT_00456fb4 == '\0')) {
      (*(code *)PTR_guard_check_icall_0045c254)(&local_1474,0,0);
      (*pcVar1)();
    }
  }
  else {
LAB_00452c9f:
    pcVar1 = DAT_00456fa4;
    if ((local_1470 & 2) != 0) goto LAB_00452ca8;
    if ((DAT_00456fa4 != (code *)0x0) && (DAT_00456fb4 == '\0')) {
      (*(code *)PTR_guard_check_icall_0045c254)(&local_1474,local_1414,0x800);
      (*pcVar1)();
    }
    if (local_1414[0] == L'\0') {
      FUN_00446abf(local_1414,0x800,(int)&local_1474);
    }
    OutputDebugStringW(local_1414);
  }
  pcVar1 = DAT_00456fcc;
  if ((((local_1470 & 4) != 0) || (DAT_00456fa8 != '\0')) && (DAT_00456fcc != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0045c254)();
    (*pcVar1)();
  }
  local_8 = 0xffffffff;
  if ((local_1470 & 1) == 0) {
    ExceptionList = local_10;
    FUN_004533a0(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00452d7c:
  FUN_00447b0d((int)&local_1474);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00452da0 */

void __thiscall FUN_00452da0(void *this,undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0040106c;
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



/* Function: FUN_00452de0 */

undefined4 __thiscall
FUN_00452de0(void *this,undefined4 *param_1,size_t *param_2,undefined4 *param_3,size_t *param_4,
            int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((**(uint **)((int)this + 8) <= **(uint **)((int)this + 4)) &&
     (uVar2 = FUN_004497b2(*(void **)((int)this + 0xc),(void *)*param_1,*param_2,(void *)*param_3,
                           *param_4,*param_5), (char)uVar2 == '\0')) {
    return uVar2;
  }
  piVar1 = *(int **)((int)this + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



/* Function: FUN_00452e33 */

undefined4 * __thiscall
FUN_00452e33(void *this,uint param_1,undefined4 param_2,void *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  code *pcVar3;
  size_t _Size;
  void *_Dst;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  void *local_8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (param_1 <= 0x7ffffffeU - iVar1) {
    uVar2 = *(uint *)((int)this + 0x14);
    local_8 = (void *)FUN_00445826(iVar1 + param_1,uVar2,0x7ffffffe);
    _Dst = (void *)FUN_00445ab3(extraout_ECX,(uint *)&local_8);
    *(void **)((int)this + 0x14) = local_8;
    *(uint *)((int)this + 0x10) = iVar1 + param_1;
    _Size = iVar1 * 2;
    local_8 = (void *)(_Size + (int)_Dst);
    if (uVar2 < 8) {
      memcpy(_Dst,this,_Size);
      memcpy(local_8,param_3,param_4 * 2);
      *(undefined2 *)((int)_Dst + (iVar1 + param_4) * 2) = 0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      _Src = *this;
      memcpy(_Dst,_Src,_Size);
      memcpy(local_8,param_3,param_4 * 2);
      *(undefined2 *)((int)_Dst + (iVar1 + param_4) * 2) = 0;
      FUN_004457f3((int)_Src,uVar2 * 2 + 2);
    }
    *(void **)this = _Dst;
    return (undefined4 *)this;
  }
  FUN_00442ad3();
  pcVar3 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar3)();
  return puVar4;
}



/* Function: FUN_00452f13 */

undefined4 FUN_00452f13(void)

{
  return 0;
}



/* Function: FUN_00452f1c */

void FUN_00452f1c(void)

{
  _OSVERSIONINFOW local_11c;
  uint local_8;
  
  local_8 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  memset(&local_11c.dwMajorVersion,0,0x110);
  local_11c.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_11c);
  FUN_004533a0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00452f8b */

undefined4 __fastcall FUN_00452f8b(undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  DAT_0045619c = DAT_0045619c + 1;
  UNLOCK();
  if (DAT_0045619c == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_004565d8;
    do {
      InitializeCriticalSectionEx(lpCriticalSection,4000,0);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_00456698);
  }
  return param_1;
}



/* Function: FUN_00452fc5 */

int FUN_00452fc5(void)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar1 = DAT_0045619c + -1;
  UNLOCK();
  iVar2 = DAT_0045619c;
  DAT_0045619c = iVar1;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_004565d8;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
      iVar2 = extraout_EAX;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_00456698);
  }
  return iVar2;
}



/* Function: ~_Fac_node */

/* Library Function - Single Match
    public: __thiscall std::_Fac_node::~_Fac_node(void)
   
   Library: Visual Studio 2019 Release */

void __thiscall std::_Fac_node::~_Fac_node(_Fac_node *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = *(code **)(**(int **)(this + 4) + 8);
  (*(code *)PTR_guard_check_icall_0045c254)();
  puVar2 = (undefined4 *)(*pcVar1)();
  if (puVar2 != (undefined4 *)0x0) {
    pcVar1 = *(code **)*puVar2;
    (*(code *)PTR_guard_check_icall_0045c254)(1);
    (*pcVar1)();
  }
  return;
}



/* Function: ~_Fac_tidy_reg_t */

/* Library Function - Single Match
    public: __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(void)
   
   Library: Visual Studio 2019 Release */

void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(_Fac_tidy_reg_t *this)

{
  _Fac_node *this_00;
  
  while (this_00 = DAT_0045af20, DAT_0045af20 != (_Fac_node *)0x0) {
    DAT_0045af20 = *(_Fac_node **)DAT_0045af20;
    _Fac_node::~_Fac_node(this_00);
    FUN_004533ec(this_00);
  }
  return;
}



/* Function: ~_Init_atexit */

/* Library Function - Single Match
    public: __thiscall _Init_atexit::~_Init_atexit(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00454597;
  local_10 = ExceptionList;
  uVar2 = DAT_00456140 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  while (DAT_004561a0 < 10) {
    iVar1 = DAT_004561a0 * 4;
    DAT_004561a0 = DAT_004561a0 + 1;
    pcVar3 = (code *)DecodePointer(*(PVOID *)(iVar1 + 0x45af24));
    if (pcVar3 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_0045c254)(uVar2);
      (*pcVar3)();
    }
  }
  ExceptionList = local_10;
  return;
}



/* Function: FUN_004530d0 */

undefined4 FUN_004530d0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004530f5();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00453101();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_004530f5 */

undefined * FUN_004530f5(void)

{
  return &DAT_00456220;
}



/* Function: FUN_00453101 */

undefined * FUN_00453101(void)

{
  return &DAT_00456228;
}



/* Function: FUN_00453110 */

undefined4 FUN_00453110(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004530f5();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00453101();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00453140 */

void FUN_00453140(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(2);
  uVar3 = FUN_004538b2();
  o__set_fmode(uVar3);
  uVar3 = FUN_00452f13();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_00453b6c();
    FUN_004537e5(FUN_00453ba0);
    uVar3 = FUN_004538a8();
    iVar5 = o__configure_narrow_argv(uVar3);
    if (iVar5 == 0) {
      FUN_004538be();
      guard_check_icall();
      guard_check_icall();
      FUN_004538d9();
      uVar3 = FUN_00452f13();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_004538d0();
      if (cVar2 != '\0') {
        o__initialize_narrow_environment();
      }
      FUN_00452f13();
      iVar5 = thunk_FUN_00452f13();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_0045393b();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004531e0 */

undefined4 FUN_004531e0(void)

{
  FUN_00453900();
  return 0;
}



/* Function: FUN_004531f0 */

void FUN_004531f0(void)

{
  undefined4 uVar1;
  
  FUN_00453ae3();
  uVar1 = FUN_00452f13();
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
  char *pcVar6;
  uint uVar7;
  void *this;
  int unaff_ESI;
  undefined4 local_24;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_0045654c != 1) {
      if (DAT_0045654c == 0) {
        DAT_0045654c = 1;
        iVar4 = initterm_e(&DAT_004029f8,&DAT_00402a0c);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_004029ac,&DAT_004029f4);
        DAT_0045654c = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00453923();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_0045c254)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_0045392f();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      FUN_00453a58();
      pcVar6 = (char *)o__get_narrow_winmain_command_line();
      unaff_ESI = FUN_004463e5(this,0x400000,0,pcVar6);
      uVar7 = FUN_00453a9b();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_00453375;
    }
  }
  FUN_0045393b();
LAB_00453375:
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



/* Function: FUN_004533a0 */

void __fastcall FUN_004533a0(int param_1)

{
  if (param_1 == DAT_00456140) {
    return;
  }
  FUN_00453468();
  return;
}



/* Function: operator_new */

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 auStack_14 [2];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  
  do {
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x4533d0;
    pvVar2 = (void *)o_malloc();
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    puStack_8 = (undefined1 *)param_1;
    uStack_c = 0x4533c3;
    iVar1 = o__callnewh();
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    pvVar2 = (void *)FUN_00453c77();
    return pvVar2;
  }
  puStack_8 = &stack0xfffffffc;
  FUN_00442a27(auStack_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_14,(ThrowInfo *)&DAT_00454ee4);
}



/* Function: FUN_004533ec */

void __cdecl FUN_004533ec(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_00453410 */

undefined4 * __thiscall FUN_00453410(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    o_free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00453438 */

void __cdecl FUN_00453438(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00453468 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453468(void)

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
  _DAT_00456328 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00456330 = (undefined4)uVar9;
  _DAT_00456340 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00456344 = &stack0x00000004;
  _DAT_00456280 = 0x10001;
  _DAT_00456230 = 0xc0000409;
  _DAT_00456234 = 1;
  _DAT_00456240 = 1;
  DAT_00456244 = 2;
  _DAT_0045623c = unaff_retaddr;
  _DAT_0045630c = in_GS;
  _DAT_00456310 = in_FS;
  _DAT_00456314 = in_ES;
  _DAT_00456318 = in_DS;
  _DAT_0045631c = unaff_EDI;
  _DAT_00456320 = unaff_ESI;
  _DAT_00456324 = unaff_EBX;
  _DAT_0045632c = uVar3;
  _DAT_00456334 = unaff_EBP;
  DAT_00456338 = unaff_retaddr;
  _DAT_0045633c = in_CS;
  _DAT_00456348 = in_SS;
  FUN_00453438((_EXCEPTION_POINTERS *)&PTR_DAT_00401008);
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
      if (DAT_00456550 != 0) {
        uVar3 = DAT_00456550;
        uVar1 = DAT_00456550;
      }
      DAT_00456550 = uVar1;
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
    DAT_0045656d = 1;
  }
  FUN_00453ca7();
  cVar1 = FUN_004538d0();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_004538d0();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_004538d0();
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
  
  if (DAT_0045656c != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_0045393b();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_00456554 = 0xffffffff;
    _DAT_00456558 = 0xffffffff;
    _DAT_0045655c = 0xffffffff;
    _DAT_00456560 = 0xffffffff;
    _DAT_00456564 = 0xffffffff;
    _DAT_00456568 = 0xffffffff;
LAB_004536a6:
    DAT_0045656c = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_00456554);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_00456560);
      if (uVar3 == 0) goto LAB_004536a6;
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
  iVar1 = DAT_00456550;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_00456550 = 0;
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
  if ((DAT_0045656d == '\0') || (param_2 == '\0')) {
    FUN_004538d0();
    FUN_004538d0();
  }
  return 1;
}



/* Function: FUN_004537af */

undefined4 __cdecl FUN_004537af(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_00456554 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_00456554,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_004537e5 */

int __cdecl FUN_004537e5(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004537af(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_00453802 */

uint FUN_00453802(void)

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
  if ((DAT_00456140 == 0xbb40e64e) || ((DAT_00456140 & 0xffff0000) == 0)) {
    DAT_00456140 = FUN_00453802();
    if (DAT_00456140 == 0xbb40e64e) {
      DAT_00456140 = 0xbb40e64f;
    }
    else if ((DAT_00456140 & 0xffff0000) == 0) {
      DAT_00456140 = DAT_00456140 | (DAT_00456140 | 0x4711) << 0x10;
    }
  }
  DAT_00456180 = ~DAT_00456140;
  return;
}



/* Function: FUN_004538a8 */

undefined4 FUN_004538a8(void)

{
  return 1;
}



/* Function: FUN_004538b2 */

undefined4 FUN_004538b2(void)

{
  return 0x4000;
}



/* Function: FUN_004538be */

void FUN_004538be(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_00456570);
  return;
}



/* Function: FUN_004538d0 */

undefined1 FUN_004538d0(void)

{
  return 1;
}



/* Function: FUN_004538d9 */

void FUN_004538d9(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_0045393b();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00453900 */

void FUN_00453900(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004530f5();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00453101();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_00453923 */

undefined * FUN_00453923(void)

{
  return &DAT_0045b0a4;
}



/* Function: FUN_0045392f */

undefined * FUN_0045392f(void)

{
  return &DAT_0045b0a0;
}



/* Function: FUN_0045393b */

void FUN_0045393b(void)

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
  FUN_00453b5e();
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
    FUN_00453b5e();
  }
  return;
}



/* Function: FUN_00453a58 */

WORD FUN_00453a58(void)

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



/* Function: thunk_FUN_00452f13 */

undefined4 thunk_FUN_00452f13(void)

{
  return 0;
}



/* Function: FUN_00453a9b */

uint FUN_00453a9b(void)

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



/* Function: FUN_00453ae3 */

void FUN_00453ae3(void)

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
    Unwind_00454010();
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return 0;
}



/* Function: FUN_00453b5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453b5e(void)

{
  _DAT_00456578 = 0;
  return;
}



/* Function: FUN_00453b6c */

/* WARNING: Removing unreachable block (ram,0x00453b7e) */
/* WARNING: Removing unreachable block (ram,0x00453b7f) */
/* WARNING: Removing unreachable block (ram,0x00453b85) */
/* WARNING: Removing unreachable block (ram,0x00453b8f) */
/* WARNING: Removing unreachable block (ram,0x00453b96) */

void FUN_00453b6c(void)

{
  return;
}



/* Function: FUN_00453ba0 */

/* WARNING: Removing unreachable block (ram,0x00453bb2) */
/* WARNING: Removing unreachable block (ram,0x00453bb3) */
/* WARNING: Removing unreachable block (ram,0x00453bb9) */
/* WARNING: Removing unreachable block (ram,0x00453bc3) */
/* WARNING: Removing unreachable block (ram,0x00453bca) */

void FUN_00453ba0(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00456140 ^ (uint)&param_2;
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
  
  iVar1 = FUN_00454132(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_00456140,FUN_004533a0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00453c77 */

void FUN_00453c77(void)

{
  undefined4 local_10 [3];
  
  FUN_00446689(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00454f84);
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_00453ca7 */

/* WARNING: Removing unreachable block (ram,0x00453d18) */
/* WARNING: Removing unreachable block (ram,0x00453cdc) */
/* WARNING: Removing unreachable block (ram,0x00453d90) */

undefined4 FUN_00453ca7(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_0045657c = 0;
  DAT_00456184 = DAT_00456184 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00456184;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_00456580 = DAT_00456580 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_00456580 = DAT_00456580 | 2;
      }
    }
    DAT_0045657c = 1;
    uVar5 = DAT_00456184 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_00456184 | 6;
      DAT_0045657c = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0045657c = 3;
        uVar5 = DAT_00456184 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_0045657c = 5;
          uVar5 = DAT_00456184 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_00456184 = DAT_00456184 | 0x6e;
            DAT_0045657c = 6;
            uVar5 = DAT_00456184;
          }
        }
      }
    }
  }
  DAT_00456184 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_00456188 != 0;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o___std_exception_copy */

void __cdecl o___std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_copy();
  return;
}



/* Function: o___std_exception_destroy */

void __cdecl o___std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___std_exception_destroy();
  return;
}



/* Function: o___stdio_common_vswprintf */

void __cdecl o___stdio_common_vswprintf(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf();
  return;
}



/* Function: o___stdio_common_vswprintf_s */

void __cdecl o___stdio_common_vswprintf_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___stdio_common_vswprintf_s();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_narrow_argv */

void __cdecl o__configure_narrow_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_narrow_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_narrow_winmain_command_line */

void __cdecl o__get_narrow_winmain_command_line(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_narrow_winmain_command_line();
  return;
}



/* Function: o__initialize_narrow_environment */

void __cdecl o__initialize_narrow_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_narrow_environment();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00453ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00454000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: Unwind@00454010 */

void __cdecl Unwind_00454010(void)

{
                    /* WARNING: Could not recover jumptable at 0x00454010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x0045401c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x00454028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00454034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00454040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0045404c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* Function: FUN_00454058 */

int __cdecl
FUN_00454058(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_004530f5();
  iVar2 = o___stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_00454092 */

void __cdecl
FUN_00454092(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00454058(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: FUN_004540b5 */

int __cdecl
FUN_004540b5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004530f5();
  iVar2 = o___stdio_common_vswprintf_s(*puVar1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: FUN_004540eb */

void __cdecl
FUN_004540eb(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_004540b5(param_1,param_2,param_3,0,param_4);
  return;
}



/* Function: FUN_0045410e */

void __cdecl FUN_0045410e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004540b5(param_1,param_2,param_3,0,&stack0x00000010);
  return;
}



/* Function: FUN_00454132 */

int __cdecl FUN_00454132(int param_1)

{
  uint uVar1;
  
  if ((DAT_0045657c < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: FUN_004541cb */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004541cb(void)

{
  uint unaff_EBP;
  
  FUN_004533a0(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00456140 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00456140 ^ (uint)&param_1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00456140 ^ (uint)&param_1;
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
  *(uint *)((int)puVar2 + iVar1 + -0x1c) = DAT_00456140 ^ (uint)puVar2;
  puVar2[1] = param_3;
  *(undefined4 *)((int)puVar2 + iVar1 + -0x20) = puVar2[-3];
  puVar2[-3] = ExceptionList;
  ExceptionList = puVar2 + -3;
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



/* Function: __alloca_probe_16 */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/* Function: __alloca_probe_8 */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/* Function: __alloca_probe */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

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
  
                    /* WARNING: Could not recover jumptable at 0x00454441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0045444d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00454459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: Unwind@00454488 */

void Unwind_00454488(void)

{
  int unaff_EBP;
  
  FUN_00445c76(unaff_EBP + -0x14);
  return;
}



/* Function: Unwind@00454650 */

void Unwind_00454650(void)

{
  int unaff_EBP;
  
  FUN_00452363(*(int *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* Function: Unwind@00454683 */

void Unwind_00454683(void)

{
  int unaff_EBP;
  
  FUN_00449ee4(unaff_EBP + -0x106c);
  return;
}



/* Function: Unwind@004546c3 */

void Unwind_004546c3(void)

{
  int unaff_EBP;
  
  FUN_0044a468(unaff_EBP + -0x78);
  return;
}



/* Function: Unwind@0045475c */

void Unwind_0045475c(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@00454796 */

void Unwind_00454796(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@0045479e */

void Unwind_0045479e(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@004547d8 */

void Unwind_004547d8(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x2c));
  return;
}



/* Function: Unwind@00454812 */

void Unwind_00454812(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@0045481a */

void Unwind_0045481a(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@00454822 */

void Unwind_00454822(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x58));
  return;
}



/* Function: Unwind@0045485c */

void Unwind_0045485c(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0xf4));
  return;
}



/* Function: Unwind@00454867 */

void Unwind_00454867(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x10c));
  return;
}



/* Function: Unwind@00454872 */

void Unwind_00454872(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x124));
  return;
}



/* Function: Unwind@0045487d */

void Unwind_0045487d(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x10c));
  return;
}



/* Function: Unwind@004548bd */

void Unwind_004548bd(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x28));
  return;
}



/* Function: Unwind@004548c5 */

void Unwind_004548c5(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@004548cd */

void Unwind_004548cd(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x40));
  return;
}



/* Function: Unwind@00454907 */

void Unwind_00454907(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x228));
  return;
}



/* Function: Unwind@00454912 */

void Unwind_00454912(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x228));
  return;
}



/* Function: Unwind@00454952 */

void Unwind_00454952(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x84));
  return;
}



/* Function: Unwind@0045495d */

void Unwind_0045495d(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x54));
  return;
}



/* Function: Unwind@00454965 */

void Unwind_00454965(void)

{
  int unaff_EBP;
  
  thunk_FUN_00445346((int *)(unaff_EBP + -0x9c));
  return;
}



/* Function: FUN_00454a20 */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_00454a20(void)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_004545dd;
  if (DAT_00456004 != (int *)0x0) {
    puVar1 = (undefined1 *)FUN_00450edc(DAT_00456004);
  }
  return puVar1;
}



/* Function: FUN_00454a50 */

void FUN_00454a50(void)

{
  FUN_00450be4((int *)&DAT_004561a8);
  return;
}



/* Function: FUN_00454a60 */

void FUN_00454a60(void)

{
  FUN_00450ab9(&DAT_0045af88);
  return;
}



/* Function: FUN_00454a70 */

void FUN_00454a70(void)

{
  FUN_004509f7(&DAT_004561d4);
  return;
}



/* Function: FUN_00454a80 */

void FUN_00454a80(void)

{
  FUN_0045099f(&DAT_004565a4);
  return;
}



/* Function: FUN_00454a90 */

void FUN_00454a90(void)

{
  FUN_0045097e(&DAT_004565b8);
  return;
}



/* Function: FUN_00454aa0 */

void FUN_00454aa0(void)

{
  FUN_0045097e(&DAT_004565b0);
  return;
}



/* Function: FUN_00454ab0 */

void FUN_00454ab0(void)

{
  FUN_00452fc5();
  return;
}



/* Function: FUN_00454ac0 */

void FUN_00454ac0(void)

{
  std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t((_Fac_tidy_reg_t *)&DAT_0045b018);
  return;
}



/* Function: FUN_00454ad0 */

void FUN_00454ad0(void)

{
  std::locale::~locale((locale *)&DAT_004565d0);
  return;
}



/* Function: FUN_00454ae0 */

void FUN_00454ae0(void)

{
  FUN_00452fc5();
  return;
}



/* Function: FUN_00454af0 */

void FUN_00454af0(void)

{
  _Init_atexit::~_Init_atexit((_Init_atexit *)&DAT_0045b02c);
  return;
}



