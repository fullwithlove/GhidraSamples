/* Function: FUN_00403180 */

void FUN_00403180(void)

{
  FUN_00408a4f(FUN_00409b90);
  return;
}



/* Function: FUN_004031a0 */

void FUN_004031a0(void)

{
  FUN_00408a4f(FUN_00409bc0);
  return;
}



/* Function: FUN_004031c0 */

void FUN_004031c0(void)

{
  FUN_00408a4f(FUN_00409be0);
  return;
}



/* Function: FUN_004031e0 */

void FUN_004031e0(void)

{
  FUN_00408a4f(FUN_00409c00);
  return;
}



/* Function: FUN_00403200 */

void FUN_00403200(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x20) + 4);
  (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 0x20));
  (*pcVar1)();
  return;
}



/* Function: FUN_00403230 */

void FUN_00403230(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x20) + 8);
  (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 0x20));
  (*pcVar1)();
  return;
}



/* Function: FUN_00403257 */

void __fastcall
FUN_00403257(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,&stack0x0000000c,4,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_00403287 */

void __fastcall
FUN_00403287(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_6 == (char *)0x0) {
    pcVar3 = (char *)0x5;
  }
  else {
    pcVar3 = param_6;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_6 + 1));
  }
  pcVar2 = "NULL";
  if (param_6 != (char *)0x0) {
    pcVar2 = param_6;
  }
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,&param_5,4,pcVar2,pcVar3,&stack0x00000014,4,0);
  return;
}



/* Function: FUN_004032e4 */

void __fastcall FUN_004032e4(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  LPVOID lpMem;
  HANDLE hHeap;
  uint uVar5;
  
  uVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      piVar2 = *(int **)(*piVar1 + uVar5 * 8);
      if (piVar2 != (int *)0x0) {
        pcVar3 = *(code **)(*piVar2 + 8);
        (*(code *)PTR_guard_check_icall_0040b220)(piVar2);
        (*pcVar3)();
        *(undefined4 *)(*piVar1 + uVar5 * 8) = 0;
      }
      iVar4 = *(int *)(*piVar1 + 4 + uVar5 * 8);
      if (iVar4 != 0) {
        Ordinal_6(iVar4);
        *(undefined4 *)(*piVar1 + 4 + uVar5 * 8) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  lpMem = (LPVOID)*piVar1;
  if (lpMem != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  return;
}



/* Function: FUN_0040335d */

DWORD __thiscall FUN_0040335d(void *this,HINSTANCE param_1,undefined4 param_2)

{
  ATOM AVar1;
  HANDLE hHeap;
  LPVOID pvVar2;
  DWORD DVar3;
  HWND pHVar4;
  DWORD DVar5;
  WNDCLASSEXW local_34;
  
  memset(&local_34,0,0x30);
  *(undefined4 *)((int)this + 0xc) = 8;
  hHeap = GetProcessHeap();
  pvVar2 = HeapAlloc(hHeap,8,0x40);
  *(LPVOID *)((int)this + 8) = pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    DVar5 = 0x8007000e;
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      FUN_00403257(10,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    }
  }
  else {
    *(undefined4 *)((int)this + 0x14) = param_2;
    *(HINSTANCE *)((int)this + 4) = param_1;
    local_34.hInstance = param_1;
    local_34.cbSize = 0x30;
    local_34.lpfnWndProc = FUN_00403580;
    local_34.hCursor = (HCURSOR)0x0;
    local_34.hbrBackground = (HBRUSH)0x0;
    local_34.lpszClassName = L"RdpSaInvitationManagerHiddenWindowClass";
    AVar1 = RegisterClassExW(&local_34);
    if (((AVar1 == 0) && (DVar3 = GetLastError(), DVar3 != 0x582)) && (DVar3 != 0)) {
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        FUN_00403257(0xb,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
      }
      DVar5 = DVar3 & 0xffff | 0x80070000;
      if ((int)DVar3 < 1) {
        DVar5 = DVar3;
      }
    }
    else {
      pHVar4 = CreateWindowExW(0,L"RdpSaInvitationManagerHiddenWindowClass",(LPCWSTR)0x0,0,0,0,0,0,
                               (HWND)0xfffffffd,(HMENU)0x0,*(HINSTANCE *)((int)this + 4),this);
      *(HWND *)this = pHVar4;
      DVar5 = 0;
      if (pHVar4 == (HWND)0x0) {
        DVar3 = GetLastError();
        if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
            ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
          FUN_0040411f();
          FUN_00403257(0xc,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                       *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
        }
        DVar5 = DVar3 & 0xffff | 0x80070000;
        if ((int)DVar3 < 1) {
          DVar5 = DVar3;
        }
        if (-1 < (int)DVar5) {
          DVar5 = 0x80004005;
        }
      }
    }
  }
  return DVar5;
}



/* Function: FUN_00403500 */

void __fastcall FUN_00403500(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  UINT_PTR uIDEvent;
  
  uIDEvent = 0;
  if (param_1[3] != 0) {
    do {
      if (*(int *)(param_1[2] + uIDEvent * 8) != 0) {
        KillTimer((HWND)*param_1,uIDEvent);
        piVar1 = *(int **)(param_1[2] + uIDEvent * 8);
        pcVar2 = *(code **)(*piVar1 + 8);
        (*(code *)PTR_guard_check_icall_0040b220)(piVar1);
        (*pcVar2)();
        *(undefined4 *)(param_1[2] + uIDEvent * 8) = 0;
      }
      iVar3 = *(int *)(param_1[2] + 4 + uIDEvent * 8);
      if (iVar3 != 0) {
        Ordinal_6(iVar3);
        *(undefined4 *)(param_1[2] + 4 + uIDEvent * 8) = 0;
      }
      uIDEvent = uIDEvent + 1;
    } while (uIDEvent < (uint)param_1[3]);
  }
  if (*param_1 != 0) {
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00403580 */

LRESULT FUN_00403580(HWND param_1,UINT param_2,uint param_3,LONG *param_4)

{
  void *this;
  LRESULT LVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  if (param_2 == 0x81) {
    SetWindowLongW(param_1,-0x15,*param_4);
  }
  else {
    this = (void *)GetWindowLongW(param_1,-0x15);
    if (param_2 == 0x113) {
      DVar2 = FUN_0040362e(this,param_3);
      if (-1 < (int)DVar2) {
        return -1;
      }
      if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
        return -1;
      }
      if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
        return -1;
      }
      if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
        return -1;
      }
      uVar3 = FUN_0040411f();
      FUN_00403287(0xd,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar3,"OnTimer failed");
      return -1;
    }
  }
  LVar1 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
  return LVar1;
}



/* Function: FUN_0040362e */

DWORD __thiscall FUN_0040362e(void *this,uint param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1 < *(uint *)((int)this + 0xc)) {
    if (*(int *)(*(int *)((int)this + 8) + param_1 * 8) != 0) {
                    /* WARNING: Load size is inaccurate */
      BVar4 = KillTimer(*this,param_1);
      if (BVar4 == 0) {
        DVar5 = GetLastError();
        if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
            ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
          FUN_0040411f();
          FUN_00403257(0xf,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                       *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
        }
        uVar7 = DVar5 & 0xffff | 0x80070000;
        if ((int)DVar5 < 1) {
          uVar7 = DVar5;
        }
        if (-1 < (int)uVar7) {
          uVar7 = 0x80004005;
        }
      }
      else {
        piVar1 = *(int **)(*(int *)((int)this + 8) + param_1 * 8);
        pcVar2 = *(code **)(*piVar1 + 0x34);
        (*(code *)PTR_guard_check_icall_0040b220)(piVar1,0xffffffff);
        (*pcVar2)();
        uVar7 = 0;
        piVar1 = *(int **)(*(int *)((int)this + 8) + param_1 * 8);
        pcVar2 = *(code **)(*piVar1 + 8);
        (*(code *)PTR_guard_check_icall_0040b220)(piVar1);
        (*pcVar2)();
        *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 8) = 0;
        iVar3 = *(int *)(*(int *)((int)this + 8) + 4 + param_1 * 8);
        if (iVar3 != 0) {
          Ordinal_6(iVar3);
          *(undefined4 *)(*(int *)((int)this + 8) + 4 + param_1 * 8) = 0;
        }
        piVar1 = (int *)((int)this + 0x10);
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && (uVar7 = FUN_004057d0(*(int *)((int)this + 0x14)), (int)uVar7 < 0)) {
          if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
            return uVar7;
          }
          if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
            return uVar7;
          }
          if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
            return uVar7;
          }
          uVar6 = FUN_0040411f();
          FUN_00403287(0x10,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                       *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar6,
                       "m_pRdpSessionAgent->CheckAttendees failed!");
          return uVar7;
        }
        FUN_00403230(*(int *)((int)this + 0x14));
      }
    }
  }
  else {
    uVar7 = 0x8000ffff;
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      FUN_00403257(0xe,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    }
  }
  return uVar7;
}



/* Function: FUN_004037c8 */

DWORD __thiscall FUN_004037c8(void *this,int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  UINT_PTR UVar7;
  DWORD DVar8;
  uint local_8;
  
  local_8 = 0;
  uVar5 = FUN_00403e89(this,&local_8);
  if ((int)uVar5 < 0) {
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      uVar6 = FUN_0040411f();
      FUN_00403287(0x11,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar6,"FindEmptySlot failed!");
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    UVar7 = SetTimer(*this,local_8,30000,(TIMERPROC)0x0);
    if (UVar7 == 0) {
      DVar8 = GetLastError();
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        FUN_00403257(0x12,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
      }
      uVar5 = DVar8 & 0xffff | 0x80070000;
      if ((int)DVar8 < 1) {
        uVar5 = DVar8;
      }
      if (-1 < (int)uVar5) {
        uVar5 = 0x80004005;
      }
    }
    else {
      pcVar1 = *(code **)(*param_1 + 4);
      (*(code *)PTR_guard_check_icall_0040b220)(param_1);
      (*pcVar1)();
      *(int **)(*(int *)((int)this + 8) + local_8 * 8) = param_1;
      uVar6 = Ordinal_2(param_2);
      uVar4 = local_8;
      *(undefined4 *)(*(int *)((int)this + 8) + 4 + local_8 * 8) = uVar6;
      if (*(int *)(*(int *)((int)this + 8) + 4 + local_8 * 8) == 0) {
        uVar5 = 0x8007000e;
        if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
            ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
          FUN_0040411f();
          FUN_00403257(0x13,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                       *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
        }
        iVar2 = *(int *)(*(int *)((int)this + 8) + 4 + uVar4 * 8);
        if (iVar2 != 0) {
          Ordinal_6(iVar2);
          *(undefined4 *)(*(int *)((int)this + 8) + 4 + uVar4 * 8) = 0;
        }
        piVar3 = *(int **)(*(int *)((int)this + 8) + uVar4 * 8);
        if (piVar3 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar3 + 8);
          (*(code *)PTR_guard_check_icall_0040b220)(piVar3);
          (*pcVar1)();
          *(undefined4 *)(*(int *)((int)this + 8) + uVar4 * 8) = 0;
        }
      }
      else {
        FUN_00403200(*(int *)((int)this + 0x14));
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      }
    }
  }
  return uVar5;
}



/* Function: FUN_0040397f */

DWORD __thiscall FUN_0040397f(void *this,int *param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 uVar5;
  BOOL BVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStackY_2c;
  undefined4 uVar9;
  char *pcVar10;
  uint local_8;
  
  local_8 = 0;
  DVar4 = FUN_00403f48(this,param_1,&local_8);
  uVar8 = local_8;
  if ((int)DVar4 < 0) {
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return DVar4;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return DVar4;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return DVar4;
    }
    uVar5 = FUN_0040411f();
    pcVar10 = "No matching invitation found";
    uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uStackY_2c = 0x14;
LAB_004039dd:
    FUN_00403287(uStackY_2c,&DAT_00402450,uVar9,uVar7,uVar5,pcVar10);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    BVar6 = KillTimer(*this,local_8);
    if (BVar6 == 0) {
      DVar4 = GetLastError();
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        FUN_00403257(0x15,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
      }
      uVar8 = DVar4 & 0xffff | 0x80070000;
      if ((int)DVar4 < 1) {
        uVar8 = DVar4;
      }
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      return 0x80004005;
    }
    piVar1 = *(int **)(*(int *)((int)this + 8) + uVar8 * 8);
    if (piVar1 == (int *)0x0) {
      DVar4 = 0x8000ffff;
      if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
        return 0x8000ffff;
      }
      if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
        return 0x8000ffff;
      }
      if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
        return 0x8000ffff;
      }
      FUN_0040411f();
      uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar5 = 0x16;
    }
    else {
      pcVar2 = *(code **)(*piVar1 + 0x34);
      (*(code *)PTR_guard_check_icall_0040b220)(piVar1,0xffffffff);
      DVar4 = (*pcVar2)();
      if ((int)DVar4 < 0) {
        if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
          return DVar4;
        }
        if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
          return DVar4;
        }
        if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
          return DVar4;
        }
        uVar5 = FUN_0040411f();
        pcVar10 = "Invitation could not be revoked";
        uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uStackY_2c = 0x17;
        goto LAB_004039dd;
      }
      FUN_00403230(*(int *)((int)this + 0x14));
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      iVar3 = *(int *)(*(int *)((int)this + 8) + 4 + uVar8 * 8);
      if (iVar3 == 0) {
        DVar4 = 0x8000ffff;
        if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
          return 0x8000ffff;
        }
        if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
          return 0x8000ffff;
        }
        if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
          return 0x8000ffff;
        }
        FUN_0040411f();
        uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar5 = 0x18;
      }
      else {
        uVar7 = Ordinal_2(iVar3);
        *param_2 = uVar7;
        if (*(int *)(*(int *)((int)this + 8) + 4 + uVar8 * 8) != 0) {
          return DVar4;
        }
        DVar4 = 0x8007000e;
        if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
          return 0x8007000e;
        }
        if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
          return 0x8007000e;
        }
        if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
          return 0x8007000e;
        }
        FUN_0040411f();
        uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar5 = 0x19;
      }
    }
    FUN_00403257(uVar5,&DAT_00402450,uVar9,uVar7);
  }
  return DVar4;
}



/* Function: FUN_00403bac */

int __thiscall FUN_00403bac(void *this,int *param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_8;
  
  local_8 = 0;
  iVar4 = FUN_00403f48(this,param_1,&local_8);
  uVar3 = local_8;
  if (iVar4 < 0) {
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return iVar4;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return iVar4;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return iVar4;
    }
    uVar5 = FUN_0040411f();
    FUN_00403287(0x1a,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar5,"No matching invitation found");
    return iVar4;
  }
  piVar1 = *(int **)(*(int *)((int)this + 8) + local_8 * 8);
  if (piVar1 == (int *)0x0) {
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return -0x7fff0001;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return -0x7fff0001;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return -0x7fff0001;
    }
    FUN_0040411f();
    uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar6 = 0x1b;
  }
  else {
    if (*(int *)(*(int *)((int)this + 8) + 4 + local_8 * 8) != 0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_0040b220)(piVar1);
      (*pcVar2)();
      *(undefined4 *)(*(int *)((int)this + 8) + uVar3 * 8) = 0;
      uVar5 = *(undefined4 *)(*(int *)((int)this + 8) + 4 + uVar3 * 8);
      *(undefined4 *)(*(int *)((int)this + 8) + 4 + uVar3 * 8) = 0;
      *param_2 = uVar5;
      return iVar4;
    }
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return -0x7fff0001;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return -0x7fff0001;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return -0x7fff0001;
    }
    FUN_0040411f();
    uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar6 = 0x1c;
  }
  FUN_00403257(uVar6,&DAT_00402450,uVar7,uVar5);
  return -0x7fff0001;
}



/* Function: FUN_00403cea */

int __thiscall FUN_00403cea(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint local_8;
  
  local_8 = 0;
  if (param_1 == (int *)0x0) {
    iVar3 = -0x7fffbffd;
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return -0x7fffbffd;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return -0x7fffbffd;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return -0x7fffbffd;
    }
    FUN_0040411f();
    uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar4 = 0x1d;
  }
  else if (param_2 == (undefined4 *)0x0) {
    iVar3 = -0x7fffbffd;
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return -0x7fffbffd;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return -0x7fffbffd;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return -0x7fffbffd;
    }
    FUN_0040411f();
    uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar4 = 0x1e;
  }
  else {
    iVar3 = FUN_00403f48(this,param_1,&local_8);
    if (iVar3 < 0) {
      if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
        return iVar3;
      }
      if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
        return iVar3;
      }
      if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
        return iVar3;
      }
      uVar2 = FUN_0040411f();
      FUN_00403287(0x1f,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar2,"No matching invitation found");
      return iVar3;
    }
    if (*(int *)(*(int *)((int)this + 8) + local_8 * 8) == 0) {
      iVar3 = -0x7fff0001;
      if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
        return -0x7fff0001;
      }
      if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
        return -0x7fff0001;
      }
      if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
        return -0x7fff0001;
      }
      FUN_0040411f();
      uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar4 = 0x20;
    }
    else {
      iVar1 = *(int *)(*(int *)((int)this + 8) + 4 + local_8 * 8);
      if (iVar1 != 0) {
        uVar2 = Ordinal_2(iVar1);
        *param_2 = uVar2;
        return iVar3;
      }
      iVar3 = -0x7fff0001;
      if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
        return -0x7fff0001;
      }
      if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
        return -0x7fff0001;
      }
      if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
        return -0x7fff0001;
      }
      FUN_0040411f();
      uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar4 = 0x21;
    }
  }
  FUN_00403257(uVar4,&DAT_00402450,uVar5,uVar2);
  return iVar3;
}



/* Function: FUN_00403e89 */

undefined4 __thiscall FUN_00403e89(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  HANDLE hHeap;
  LPVOID pvVar3;
  int *piVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((int)this + 0xc);
  uVar5 = 0;
  puVar2 = (undefined4 *)((int)this + 8);
  if (uVar1 != 0) {
    piVar4 = (int *)*puVar2;
    do {
      if (*piVar4 == 0) break;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar5 < uVar1);
    if (uVar5 < uVar1) goto LAB_00403f34;
  }
  pvVar3 = (LPVOID)*puVar2;
  hHeap = GetProcessHeap();
  pvVar3 = HeapReAlloc(hHeap,8,pvVar3,(uVar1 + 8) * 8);
  if (pvVar3 == (LPVOID)0x0) {
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return 0x8007000e;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return 0x8007000e;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return 0x8007000e;
    }
    FUN_0040411f();
    FUN_00403257(0x22,&DAT_00402450,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    return 0x8007000e;
  }
  *puVar2 = pvVar3;
  *(uint *)((int)this + 0xc) = uVar1 + 8;
LAB_00403f34:
  *param_1 = uVar5;
  return 0;
}



/* Function: FUN_00403f48 */

int __thiscall FUN_00403f48(void *this,int *param_1,uint *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStackY_3c;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_c;
  void *local_8;
  
  local_c = (void *)0x0;
  local_8 = (void *)0x0;
  pcVar1 = *(code **)(*param_1 + 0x1c);
  (*(code *)PTR_guard_check_icall_0040b220)(param_1,&local_c);
  iVar3 = (*pcVar1)();
  if (iVar3 < 0) {
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      uVar4 = FUN_0040411f();
      uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uStackY_3c = 0x23;
LAB_00403fb7:
      FUN_00403287(uStackY_3c,&DAT_00402450,uVar8,uVar9,uVar4,"get_ConnectionString failed");
    }
  }
  else {
    iVar5 = Ordinal_7(local_c);
    if (iVar5 == 0) {
      iVar3 = -0x7fff0001;
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_004040fe;
      FUN_0040411f();
      uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar4 = 0x24;
    }
    else {
      uVar7 = 0;
      if (*(int *)((int)this + 0xc) != 0) {
        do {
          piVar2 = *(int **)(*(int *)((int)this + 8) + uVar7 * 8);
          if (piVar2 != (int *)0x0) {
            pcVar1 = *(code **)(*piVar2 + 0x1c);
            (*(code *)PTR_guard_check_icall_0040b220)(piVar2,&local_8);
            iVar3 = (*pcVar1)();
            if (iVar3 < 0) {
              if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
                  ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
              goto LAB_004040fe;
              uVar4 = FUN_0040411f();
              uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
              uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
              uStackY_3c = 0x25;
              goto LAB_00403fb7;
            }
            iVar6 = Ordinal_7(local_8);
            if (iVar5 == iVar6) {
              iVar6 = memcmp(local_c,local_8,iVar5 * 2);
              if (iVar6 == 0) break;
            }
            Ordinal_6(local_8);
            local_8 = (void *)0x0;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)((int)this + 0xc));
        if (uVar7 < *(uint *)((int)this + 0xc)) {
          *param_2 = uVar7;
          goto LAB_004040fe;
        }
      }
      iVar3 = -0x7ff8fb70;
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_004040fe;
      FUN_0040411f();
      uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar4 = 0x26;
    }
    FUN_00403257(uVar4,&DAT_00402450,uVar8,uVar9);
  }
LAB_004040fe:
  Ordinal_6(local_c);
  Ordinal_6(local_8);
  return iVar3;
}



/* Function: FUN_0040411f */

void FUN_0040411f(void)

{
  BOOL BVar1;
  FARPROC pFVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  HMODULE local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0040a100 ^ (uint)&stack0xfffffffc;
  local_18 = 0xf4e10000;
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  BVar1 = GetModuleHandleExA(0,"Advapi32.dll",&local_1c);
  uVar3 = extraout_EDX;
  if (BVar1 != 0) {
    pFVar2 = GetProcAddress(local_1c,"EventActivityIdControl");
    if (pFVar2 != (FARPROC)0x0) {
      (*(code *)PTR_guard_check_icall_0040b220)(1,&local_18);
      (*pFVar2)();
    }
    FreeLibrary(local_1c);
    uVar3 = extraout_EDX_00;
  }
  FUN_00408990(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004041a0 */

undefined4 FUN_004041a0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

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



/* Function: FUN_00404227 */

void FUN_00404227(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 8;
  iVar1 = SetProcessMitigationPolicy(8,&local_8,4);
  if ((((iVar1 == 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
      ((PTR_LOOP_0040a00c[0x1c] & 1) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
    GetLastError();
    FUN_0040411f();
    FUN_00403257(10,&DAT_004024ec,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
  }
  local_c = 8;
  iVar1 = SetProcessMitigationPolicy(2,&local_c,4);
  if (((iVar1 == 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
     (((PTR_LOOP_0040a00c[0x1c] & 1) != 0 && (1 < (byte)PTR_LOOP_0040a00c[0x19])))) {
    GetLastError();
    FUN_0040411f();
    FUN_00403257(0xb,&DAT_004024ec,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
  }
  local_10 = 1;
  iVar1 = SetProcessMitigationPolicy(9,&local_10,4);
  if (((iVar1 == 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
     (((PTR_LOOP_0040a00c[0x1c] & 1) != 0 && (1 < (byte)PTR_LOOP_0040a00c[0x19])))) {
    GetLastError();
    FUN_0040411f();
    FUN_00403257(0xc,&DAT_004024ec,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
  }
  local_14 = 3;
  iVar1 = SetProcessMitigationPolicy(10,&local_14,4);
  if ((((iVar1 == 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
      ((PTR_LOOP_0040a00c[0x1c] & 1) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
    GetLastError();
    FUN_0040411f();
    FUN_00403257(0xd,&DAT_004024ec,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
  }
  local_18 = 1;
  iVar1 = SetProcessMitigationPolicy(0xd,&local_18,4);
  if (((iVar1 == 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
     (((PTR_LOOP_0040a00c[0x1c] & 1) != 0 && (1 < (byte)PTR_LOOP_0040a00c[0x19])))) {
    GetLastError();
    FUN_0040411f();
    FUN_00403257(0xe,&DAT_004024ec,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
  }
  return;
}



/* Function: FUN_004043df */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD FUN_004043df(HINSTANCE param_1)

{
  BOOL BVar1;
  HANDLE ProcessHandle;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  undefined4 *this;
  undefined4 *puVar5;
  POINT *pPVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  int *piStack_44;
  MSG local_30;
  
  pPVar6 = (POINT *)&local_30.lParam;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    pPVar6->x = 0;
    pPVar6 = (POINT *)&pPVar6->y;
  }
  local_30.wParam = 0;
  this = (undefined4 *)0x0;
  puVar5 = &DAT_0040a4d0;
  DAT_0040a4e0 = 0;
  DAT_0040a4d0 = 0;
  ppuVar7 = &DAT_0040a4f8;
  _DAT_0040a4e8 = 1;
  _DAT_0040a4ec = 0;
  DAT_0040a4f8 = &DAT_00402290;
  PTR_LOOP_0040a00c = (undefined *)&DAT_0040a4d0;
  do {
    local_30.message = 0;
    local_30.hwnd = (HWND)*ppuVar7;
    piStack_44 = puVar5 + 2;
    ppuVar7 = ppuVar7 + 1;
    puVar5[8] = local_30.hwnd;
    RegisterTraceGuidsW(FUN_004041a0,puVar5,local_30.hwnd,1,&local_30,0,0);
    puVar5 = (undefined4 *)*puVar5;
  } while (puVar5 != (undefined4 *)0x0);
  if (DAT_0040a530 != 0 || DAT_0040a534 != (int *)0x0) {
    piStack_44 = DAT_0040a534;
    EtwEventUnregister(DAT_0040a530);
    _DAT_0040a530 = 0;
  }
  piStack_44 = &DAT_0040a530;
  DAT_0040a500 = DAT_00402260;
  DAT_0040a504 = DAT_00402264;
  DAT_0040a508 = DAT_00402268;
  DAT_0040a50c = DAT_0040226c;
  iVar4 = EtwEventRegister(&DAT_0040a500,0,0);
  if (iVar4 == 0) {
    DAT_0040a538 = 1;
  }
  _DAT_0040a514 = &DAT_00402310;
  _DAT_0040a510 = &DAT_004022d0;
  _DAT_0040a518 = &DAT_004022b0;
  _DAT_0040a51c = &DAT_00402250;
  _DAT_0040a520 = &DAT_004022d0;
  _DAT_0040a524 = &DAT_004022c0;
  _DAT_0040a528 = &DAT_00402270;
  _DAT_0040a52c = &DAT_004022a0;
  DAT_0040a539 = 1;
  BVar1 = HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  if ((((BVar1 == 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
      ((PTR_LOOP_0040a00c[0x1c] & 1) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
    GetLastError();
    FUN_0040411f();
    FUN_00403257(0xf,&DAT_004024ec,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
  }
  FUN_00404227();
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,0x60008,&piStack_44);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      FUN_00403257(0x10,&DAT_004024ec,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    }
    uVar8 = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      uVar8 = DVar2;
    }
    if (-1 < (int)uVar8) {
      uVar8 = 0x80004005;
    }
    goto LAB_00404800;
  }
  uVar8 = FUN_00407ec6(ProcessHandle,piStack_44);
  if ((int)uVar8 < 0) {
    if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
        ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
    goto LAB_00404800;
    uVar3 = FUN_0040411f();
    pcVar12 = "s_RestrictProcessDacl failed!";
    uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar10 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar9 = 0x11;
  }
  else {
    uVar8 = CoInitializeEx((LPVOID)0x0,2);
    if ((int)uVar8 < 0) {
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_00404800;
      uVar3 = FUN_0040411f();
      pcVar12 = "CoInitializeEx failed!";
      uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar10 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar9 = 0x12;
    }
    else {
      uVar9 = 0;
      unaff_EBX = 1;
      uVar8 = CoInitializeSecurity
                        ((PSECURITY_DESCRIPTOR)0x0,-1,(SOLE_AUTHENTICATION_SERVICE *)0x0,(void *)0x0
                         ,6,1,(void *)0x0,0x2000,(void *)0x0);
      if ((int)uVar8 < 0) {
        if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_00404800;
        uVar3 = FUN_0040411f();
        pcVar12 = "CoInitializeSecurity failed!";
        uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar10 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar9 = 0x13;
      }
      else {
        CloseHandle(piStack_44);
        piStack_44 = (int *)0x0;
        iVar4 = FUN_00408a6c(0x70);
        if ((iVar4 == 0) || (this = FUN_00404973(iVar4), this == (undefined4 *)0x0)) {
          uVar8 = 0x8007000e;
          if (((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
             (((PTR_LOOP_0040a00c[0x1c] & 8) != 0 && (1 < (byte)PTR_LOOP_0040a00c[0x19])))) {
            FUN_0040411f();
            FUN_00403257(0x14,&DAT_004024ec,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                         *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
          }
          goto LAB_00404800;
        }
        uVar8 = FUN_00404a92(this,param_1);
        if (-1 < (int)uVar8) {
          while (BVar1 = GetMessageW(&local_30,(HWND)0x0,0,0), BVar1 != 0) {
            TranslateMessage(&local_30);
            DispatchMessageW(&local_30);
          }
          this = (undefined4 *)0x0;
          goto LAB_00404800;
        }
        if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_00404800;
        pcVar12 = (char *)FUN_0040411f();
        uVar3 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar10 = 0x15;
      }
    }
  }
  FUN_00403287(uVar9,&DAT_004024ec,uVar10,uVar11,uVar3,pcVar12);
LAB_00404800:
  if (piStack_44 != (int *)0x0) {
    CloseHandle(piStack_44);
  }
  if (this != (undefined4 *)0x0) {
    FUN_004049e8(this);
    operator_delete(this);
  }
  if (unaff_EBX != 0) {
    CoUninitialize();
  }
  puVar5 = (undefined4 *)PTR_LOOP_0040a00c;
  if ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) {
    for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
      if (puVar5[2] != 0 || puVar5[3] != 0) {
        UnregisterTraceGuids(puVar5[2],puVar5[3]);
        puVar5[2] = 0;
        puVar5[3] = 0;
      }
    }
    PTR_LOOP_0040a00c = (undefined *)&PTR_LOOP_0040a00c;
  }
  return uVar8;
}



/* Function: FUN_00404887 */

undefined4 * __thiscall FUN_00404887(void *this,byte param_1)

{
  FUN_004049e8((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004048b0 */

void FUN_004048b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x20);
  (*(code *)PTR_guard_check_icall_0040b220)(*(undefined4 **)(param_1 + 0x20),param_2,param_3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004048e0 */

undefined4 FUN_004048e0(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  while (*(int *)(param_2 + iVar1 * 4) == (&DAT_00402b9c)[iVar1]) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 4) {
      FUN_00407660(param_1,param_2,param_3);
      return 0;
    }
  }
  iVar1 = 0;
  do {
    if (*(int *)(param_2 + iVar1 * 4) != (&DAT_004024fc)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_2 + iVar1 * 4) != (&DAT_00402bd0)[iVar1]) {
          return 0x80004002;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      piVar2 = (int *)(-(uint)(param_1 != (int *)0xc) & (uint)(param_1 + -1));
      goto LAB_00404954;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  piVar2 = param_1 + -3;
LAB_00404954:
  *param_3 = (uint)piVar2;
  FUN_00403200((int)(param_1 + -3));
  return 0;
}



/* Function: FUN_00404973 */

undefined4 * __fastcall FUN_00404973(int param_1)

{
  undefined4 *extraout_ECX;
  undefined4 *extraout_EDX;
  
  *(undefined ***)(param_1 + 4) = &PTR_purecall_00401570;
  FUN_0040761d((undefined4 *)(param_1 + 0xc));
  *extraout_EDX = &PTR_FUN_004016a4;
  extraout_EDX[10] = 0;
  extraout_EDX[0xb] = 0;
  extraout_EDX[0xc] = 0;
  extraout_EDX[0xd] = 0;
  extraout_EDX[0xe] = 0;
  extraout_EDX[0xf] = 0;
  extraout_EDX[0x10] = 0;
  extraout_EDX[0x11] = 0;
  extraout_EDX[0x12] = 0;
  extraout_EDX[0x13] = 0;
  extraout_EDX[0x14] = 0;
  extraout_EDX[0x15] = 0;
  extraout_EDX[0x16] = 0;
  extraout_EDX[0x17] = 0;
  extraout_EDX[0x18] = 0;
  extraout_EDX[0x19] = 0;
  extraout_EDX[0x1a] = 0;
  extraout_EDX[0x1b] = 0;
  extraout_EDX[1] = &PTR_FUN_00401620;
  extraout_EDX[2] = &PTR_FUN_00401610;
  *extraout_ECX = &PTR_FUN_00401604;
  extraout_EDX[4] = &PTR_FUN_004015f4;
  return extraout_EDX;
}



/* Function: FUN_004049e8 */

void __fastcall FUN_004049e8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0xf];
  *param_1 = &PTR_FUN_004016a4;
  param_1[1] = &PTR_FUN_00401620;
  param_1[2] = &PTR_FUN_00401610;
  param_1[3] = &PTR_FUN_00401604;
  param_1[4] = &PTR_FUN_004015f4;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0040154c;
    FUN_00407850((int)puVar1);
    operator_delete(puVar1);
    param_1[0xf] = 0;
  }
  FUN_00403500(param_1 + 0x11);
  operator_delete((void *)param_1[0x19]);
  param_1[0x19] = 0;
  if (param_1[0x1b] != 0) {
    Ordinal_6(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  PostQuitMessage(0);
  FUN_004032e4((int)(param_1 + 0x11));
  FUN_004070eb(param_1 + 0xb);
  FUN_004070eb(param_1 + 10);
  param_1[7] = param_1[7] | 8;
  param_1[3] = &PTR_FUN_004016c4;
  param_1[4] = &PTR_FUN_004016b4;
  return;
}



/* Function: FUN_00404a92 */

void __thiscall FUN_00404a92(void *this,HINSTANCE param_1)

{
  code *pcVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  undefined4 extraout_EDX_13;
  undefined4 extraout_EDX_14;
  undefined4 extraout_EDX_15;
  undefined4 extraout_EDX_16;
  undefined4 extraout_EDX_17;
  undefined4 extraout_EDX_18;
  uint uVar8;
  wchar_t *pwVar9;
  undefined4 uVar10;
  HANDLE pvVar11;
  char *pcVar12;
  DWORD *pSessionId;
  undefined8 local_48;
  DWORD local_40;
  HANDLE local_3c;
  HKEY local_38;
  void *local_34;
  undefined4 *local_30;
  wchar_t local_2c [16];
  uint local_c;
  
  local_c = DAT_0040a100 ^ (uint)&stack0xfffffffc;
  pwVar9 = local_2c;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    pwVar9[0] = L'\0';
    pwVar9[1] = L'\0';
    pwVar9 = pwVar9 + 2;
  }
  uVar8 = 0;
  local_38 = (HKEY)0x0;
  local_3c = (HANDLE)0x0;
  pSessionId = (DWORD *)((int)this + 0x68);
  local_48 = 0;
  local_40 = 0;
  *(HINSTANCE *)((int)this + 0x60) = param_1;
  local_34 = this;
  DVar2 = GetCurrentProcessId();
  BVar3 = ProcessIdToSessionId(DVar2,pSessionId);
  if (BVar3 == 0) {
    GetLastError();
    uVar4 = extraout_EDX;
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar10 = 10;
LAB_00404b1c:
      FUN_00403257(uVar10,&DAT_00402b8c,uVar5,uVar4);
      uVar4 = extraout_EDX_00;
    }
LAB_00404b27:
    puVar6 = (undefined4 *)0x0;
  }
  else {
    iVar7 = FUN_004073ae(local_2c,0x10,L"%8.8x");
    if (iVar7 < 0) {
      uVar4 = extraout_EDX_01;
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        uVar4 = FUN_0040411f();
        FUN_00403287(0xb,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar4,
                     "m_InvitationManager.Initialize failed!");
        uVar4 = extraout_EDX_02;
      }
    }
    else {
      local_3c = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      if (local_3c == (HANDLE)0x0) {
        GetLastError();
        uVar4 = extraout_EDX_03;
        if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
            ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
          FUN_0040411f();
          uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uVar10 = 0xc;
          goto LAB_00404b1c;
        }
        goto LAB_00404b27;
      }
      do {
        while ((local_38 == (HKEY)0x0 &&
               (local_34 = (void *)RegOpenKeyExW((HKEY)0x80000002,
                                                 L"Software\\Microsoft\\Terminal Services\\SessionAgent\\Handles"
                                                 ,0,0x11,&local_38), local_34 != (void *)0x0))) {
          if (local_34 != (void *)0x2) {
            uVar4 = extraout_EDX_04;
            if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
              FUN_0040411f();
              uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
              uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
              uVar10 = 0xd;
LAB_00405074:
              FUN_00403257(uVar10,&DAT_00402b8c,uVar5,uVar4);
              uVar4 = extraout_EDX_13;
            }
            goto LAB_00405096;
          }
          Sleep(0x32);
        }
        local_34 = (void *)RegNotifyChangeKeyValue(local_38,1,4,local_3c,1);
        if (local_34 != (void *)0x0) {
          uVar4 = extraout_EDX_05;
          if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
              ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
            FUN_0040411f();
            uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
            uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
            uVar10 = 0xe;
            goto LAB_00405074;
          }
          goto LAB_00405096;
        }
        local_40 = 8;
        local_34 = (void *)RegGetValueW(local_38,(LPCWSTR)0x0,local_2c,0x40,(LPDWORD)0x0,&local_48,
                                        &local_40);
        if (local_34 == (void *)0x0) {
          pvVar11 = (HANDLE)local_48;
          local_30 = (undefined4 *)MapViewOfFile((HANDLE)local_48,4,0,0,0x48);
          if (local_30 == (undefined4 *)0x0) {
            GetLastError();
            uVar4 = extraout_EDX_10;
            puVar6 = local_30;
            if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
              FUN_0040411f();
              FUN_00403257(0x12,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                           *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
              uVar4 = extraout_EDX_11;
              puVar6 = local_30;
            }
          }
          else {
            *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 2;
            uVar4 = 0x404e5f;
            iVar7 = FUN_004082ff(extraout_ECX,extraout_ECX,(int)this + 0x28);
            if (iVar7 < 0) {
              if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                  ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
                uVar5 = FUN_0040411f();
                pcVar12 = "CoCreateInSession failed!";
                uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                pvVar11 = *(HANDLE *)(PTR_LOOP_0040a00c + 0x10);
                uVar10 = 0x14;
LAB_00405019:
                FUN_00403287(uVar10,&DAT_00402b8c,pvVar11,uVar4,uVar5,pcVar12);
              }
LAB_00405024:
              pvVar11 = (HANDLE)local_30[1];
            }
            else {
              puVar6 = (undefined4 *)FUN_00408a6c(0x10);
              if (puVar6 == (undefined4 *)0x0) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                *puVar6 = &PTR_FUN_0040154c;
                puVar6[2] = 0;
                puVar6[3] = 0;
                puVar6[1] = -(uint)(this != (void *)0x0) & (int)this + 4U;
              }
              *(undefined4 **)((int)this + 0x3c) = puVar6;
              if (puVar6 == (undefined4 *)0x0) {
                if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                    ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
                  FUN_0040411f();
                  uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                  uVar10 = 0x15;
LAB_00404f1b:
                  FUN_00403257(uVar10,&DAT_00402b8c,uVar4,uVar5);
                }
                goto LAB_00405024;
              }
              DVar2 = FUN_0040335d((void *)((int)this + 0x44),param_1,this);
              if ((int)DVar2 < 0) {
                if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                    ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
                  pcVar12 = (char *)FUN_0040411f();
                  uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                  uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                  uVar10 = 0x16;
                  goto LAB_00405019;
                }
                goto LAB_00405024;
              }
              iVar7 = Ordinal_150(local_30 + 2,0x40);
              *(int *)((int)this + 0x6c) = iVar7;
              if (iVar7 == 0) {
                if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                    ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
                  FUN_0040411f();
                  uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                  uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                  uVar10 = 0x17;
                  goto LAB_00404f1b;
                }
                goto LAB_00405024;
              }
              pcVar1 = *(code **)(**(int **)((int)this + 0x28) + 0x14);
              (*(code *)PTR_guard_check_icall_0040b220)(*(int **)((int)this + 0x28),iVar7,this);
              iVar7 = (*pcVar1)();
              if (iVar7 < 0) {
                if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                    ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
                  uVar5 = FUN_0040411f();
                  pcVar12 = "m_InvitationManager.Initialize failed!";
                  uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                  pvVar11 = *(HANDLE *)(PTR_LOOP_0040a00c + 0x10);
                  uVar10 = 0x18;
                  goto LAB_00405019;
                }
                goto LAB_00405024;
              }
              pvVar11 = (HANDLE)*local_30;
            }
            puVar6 = local_30;
            SetEvent(pvVar11);
            uVar4 = extraout_EDX_12;
          }
          goto LAB_00405098;
        }
        if (local_34 != (void *)0x2) {
          uVar4 = extraout_EDX_06;
          if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
              ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
            FUN_0040411f();
            uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
            uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
            uVar10 = 0xf;
            goto LAB_00405074;
          }
          goto LAB_00405096;
        }
        DVar2 = WaitForSingleObject(local_3c,0xffffffff);
        if (DVar2 == 0xffffffff) {
          GetLastError();
          uVar4 = extraout_EDX_09;
          if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
              ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
          goto LAB_00404b27;
          FUN_0040411f();
          uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uVar10 = 0x10;
          goto LAB_00404b1c;
        }
      } while (DVar2 == 0);
      uVar4 = extraout_EDX_07;
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        FUN_00403257(0x11,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
        uVar4 = extraout_EDX_08;
      }
    }
LAB_00405096:
    puVar6 = (undefined4 *)0x0;
  }
LAB_00405098:
  do {
    if (puVar6[uVar8] != 0) {
      CloseHandle((HANDLE)puVar6[uVar8]);
      uVar4 = extraout_EDX_14;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  if (local_38 != (HKEY)0x0) {
    CloseHandle(local_38);
    uVar4 = extraout_EDX_15;
  }
  if (local_3c != (HANDLE)0x0) {
    CloseHandle(local_3c);
    uVar4 = extraout_EDX_16;
  }
  if (puVar6 != (undefined4 *)0x0) {
    UnmapViewOfFile(puVar6);
    uVar4 = extraout_EDX_17;
  }
  if ((HANDLE)local_48 != (HANDLE)0x0 || local_48._4_4_ != 0) {
    CloseHandle((HANDLE)local_48);
    uVar4 = extraout_EDX_18;
  }
  FUN_00408990(local_c ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_004050ff */

HRESULT __fastcall FUN_004050ff(int param_1)

{
  LPVOID *ppv;
  code *pcVar1;
  HRESULT HVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStackY_2c;
  undefined4 uVar6;
  char *pcVar7;
  
  ppv = (LPVOID *)(param_1 + 0x2c);
  if (*ppv != (LPVOID)0x0) {
    return 0;
  }
  HVar2 = CoCreateInstance((IID *)&DAT_00402bc0,(LPUNKNOWN)0x0,1,(IID *)&DAT_00402a58,ppv);
  if (HVar2 < 0) {
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return HVar2;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return HVar2;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return HVar2;
    }
    uVar3 = FUN_0040411f();
    pcVar7 = "CreateInstance CLSID_RDPSession failed!";
    uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uStackY_2c = 0x19;
  }
  else {
    iVar4 = FUN_004052e4(param_1);
    if ((((iVar4 < 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      uVar5 = FUN_0040411f();
      FUN_00403287(0x1a,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar5,
                   "Enabling clipboard support failed!");
    }
                    /* WARNING: Load size is inaccurate */
    pcVar1 = *(code **)(**ppv + 0x1c);
    (*(code *)PTR_guard_check_icall_0040b220)(*ppv);
    HVar2 = (*pcVar1)();
    if (-1 < HVar2) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x3c) + 0x1c);
      (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 0x3c),*ppv);
      (*pcVar1)();
      return HVar2;
    }
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return HVar2;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return HVar2;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return HVar2;
    }
    uVar3 = FUN_0040411f();
    pcVar7 = "IRDPSRAPISharingSession::Open failed!";
    uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uStackY_2c = 0x1b;
  }
  FUN_00403287(uStackY_2c,&DAT_00402b8c,uVar6,uVar5,uVar3,pcVar7);
  return HVar2;
}



/* Function: FUN_0040523f */

int __fastcall FUN_0040523f(int param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x3c) + 0x20);
    (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 0x3c));
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 0x20);
    (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 0x2c));
    iVar4 = (*pcVar1)();
    if (iVar4 < 0) {
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        uVar3 = FUN_0040411f();
        FUN_00403287(0x1e,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar3,
                     "IRDPSRAPISharingSession::Close failed!");
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x2c);
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        pcVar1 = *(code **)(*piVar2 + 8);
        (*(code *)PTR_guard_check_icall_0040b220)(piVar2);
        (*pcVar1)();
      }
    }
  }
  return iVar4;
}



/* Function: FUN_004052e4 */

int __fastcall FUN_004052e4(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int local_18;
  int *local_14;
  
  local_18 = 0;
  local_14 = (int *)0x0;
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 0x2c);
  (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 0x2c),&local_14);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
        ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
    goto LAB_004054c6;
    uVar3 = FUN_0040411f();
    pcVar7 = "Failed to get the session properties";
    uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar5 = 0x1f;
  }
  else {
    pcVar1 = *(code **)(*local_14 + 0x20);
    (*(code *)PTR_guard_check_icall_0040b220)(local_14,L"EnableClipboardRedirect",0xb,0,0xffff,0);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_004054c6;
      uVar3 = FUN_0040411f();
      pcVar7 = "Failed to set EnableClipboardRedirect property";
      uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar5 = 0x20;
    }
    else {
      pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x20);
      (*(code *)PTR_guard_check_icall_0040b220)
                (*(undefined4 **)(param_1 + 0x20),&DAT_00402b9c,&local_18);
      iVar2 = (*pcVar1)();
      if ((((iVar2 < 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        uVar4 = FUN_0040411f();
        FUN_00403287(0x21,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar4,
                     "Failed to QI ourselves for IUnknown");
      }
      pcVar1 = *(code **)(*local_14 + 0x20);
      (*(code *)PTR_guard_check_icall_0040b220)
                (local_14,L"SetClipboardRedirectCallback",0xd,0,local_18,0);
      iVar2 = (*pcVar1)();
      if (((-1 < iVar2) || ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c)) ||
         (((PTR_LOOP_0040a00c[0x1c] & 8) == 0 || ((byte)PTR_LOOP_0040a00c[0x19] < 2))))
      goto LAB_004054c6;
      uVar3 = FUN_0040411f();
      pcVar7 = "Failed to set SetClipboardRedirectCallback property";
      uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar5 = 0x22;
    }
  }
  FUN_00403287(uVar5,&DAT_00402b8c,uVar6,uVar4,uVar3,pcVar7);
LAB_004054c6:
  FUN_004070eb((int *)&local_14);
  FUN_004070eb(&local_18);
  return iVar2;
}



/* Function: FUN_004054f0 */

void FUN_004054f0(int param_1,undefined4 param_2,undefined4 *param_3,undefined2 *param_4)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined1 auStack_82c [4];
  int *local_828;
  int *local_824;
  short *local_820;
  undefined2 *local_81c;
  short local_818 [1030];
  uint local_c;
  
  local_c = DAT_0040a100 ^ (uint)auStack_82c;
  local_81c = param_4;
  memset(local_818,0,0x802);
  local_820 = (short *)0x0;
  local_828 = (int *)0x0;
  local_824 = (int *)0x0;
  if (local_81c == (undefined2 *)0x0) {
    if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
        ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
    goto LAB_00405795;
    FUN_0040411f();
    uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar7 = 0x23;
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*param_3;
      (*(code *)PTR_guard_check_icall_0040b220)(param_3,&DAT_00402a48,&local_828);
      iVar3 = (*pcVar1)();
      if (iVar3 < 0) {
        if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_00405795;
        uVar7 = FUN_0040411f();
        pcVar9 = "QueryInterface failed";
        uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar6 = 0x25;
      }
      else {
        pcVar1 = *(code **)(*local_828 + 0x2c);
        (*(code *)PTR_guard_check_icall_0040b220)(local_828,&local_824);
        iVar3 = (*pcVar1)();
        if (-1 < iVar3) {
          iVar3 = FUN_00403cea((void *)(param_1 + 0x3c),local_824,&local_820);
          psVar2 = local_820;
          if (iVar3 < 0) {
            if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
              uVar4 = FUN_0040411f();
              FUN_00403287(0x27,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                           *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar4,"GetAttendeeName failed")
              ;
            }
          }
          else {
            FUN_004066a7(local_828,extraout_ECX,local_818);
            psVar5 = (short *)&DAT_00402a44;
            if (*(int *)(param_1 + 0x5c) != 0) {
              psVar5 = *(short **)(param_1 + 0x5c);
            }
            iVar3 = FUN_0040710d(&DAT_0040a500,extraout_ECX_00,psVar2,local_818,psVar5);
            if ((((iVar3 != 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
                ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
              FUN_0040411f();
              FUN_00403257(0x28,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                           *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
            }
          }
          if (psVar2 != (short *)0x0) {
            Ordinal_6(psVar2);
          }
          goto LAB_00405795;
        }
        if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_00405795;
        uVar7 = FUN_0040411f();
        pcVar9 = "get_Invitation failed";
        uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar6 = 0x26;
      }
      FUN_00403287(uVar6,&DAT_00402b8c,uVar8,uVar4,uVar7,pcVar9);
      goto LAB_00405795;
    }
    if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
        ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
    goto LAB_00405795;
    FUN_0040411f();
    uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar7 = 0x24;
  }
  FUN_00403257(uVar7,&DAT_00402b8c,uVar8,uVar4);
LAB_00405795:
  *local_81c = 0xffff;
  FUN_004070eb((int *)&local_824);
  FUN_004070eb((int *)&local_828);
  FUN_00408990(local_c ^ (uint)auStack_82c,extraout_EDX);
  return;
}



/* Function: FUN_004057d0 */

int __fastcall FUN_004057d0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x54) == 0)) {
    cVar3 = WinStationShadowStop2();
    if (cVar3 == '\0') {
      GetLastError();
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        uVar4 = FUN_0040411f();
        FUN_00403287(0x29,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar4,"WinStationShadowStop2 failed")
        ;
      }
    }
    iVar5 = FUN_0040523f(param_1);
    if (iVar5 < 0) {
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        uVar4 = FUN_0040411f();
        FUN_00403287(0x2a,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar4,"ReleaseSharer failed!");
      }
    }
    else {
      piVar1 = *(int **)(param_1 + 0x28);
      if (piVar1 != (int *)0x0) {
        pcVar2 = *(code **)(*piVar1 + 0x18);
        (*(code *)PTR_guard_check_icall_0040b220)(piVar1,*(undefined4 *)(param_1 + 0x6c));
        (*pcVar2)();
        piVar1 = *(int **)(param_1 + 0x28);
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          pcVar2 = *(code **)(*piVar1 + 8);
          (*(code *)PTR_guard_check_icall_0040b220)(piVar1);
          (*pcVar2)();
        }
      }
    }
  }
  return iVar5;
}



/* Function: FUN_004058d0 */

void FUN_004058d0(void *param_1,va_list param_2,int param_3,int param_4,uint *param_5,int *param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  HRESULT HVar3;
  int iVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int local_84;
  uint local_80;
  int *local_7c;
  int local_78;
  int local_74;
  int *local_70;
  va_list local_6c;
  uint *local_68;
  int *local_64;
  wchar_t local_60 [38];
  uint uStack_14;
  uint local_c;
  
  local_c = DAT_0040a100 ^ (uint)&local_84;
  local_6c = param_2;
  uVar6 = 0;
  local_68 = param_5;
  local_64 = param_6;
  local_84 = 0;
  local_70 = (int *)0x0;
  local_7c = (int *)0x0;
  local_74 = 0;
  local_78 = 0;
  memset(local_60,0,0x4e);
  local_80 = 0;
  if (((*(int *)((int)param_1 + 0x34) == 1) || (param_3 == 1)) &&
     ((*(int *)((int)param_1 + 0x5c) != 0 || (*(int *)((int)param_1 + 0x54) != 0)))) {
    uVar5 = 6;
LAB_00405d63:
    if ((local_84 != 0) ||
       ((local_84 = Ordinal_2(&DAT_00402a44), local_84 != 0 && (-1 < (int)uVar6)))) {
      *local_68 = uVar5;
      *local_64 = local_84;
      goto LAB_00405da8;
    }
  }
  else {
    uVar6 = FUN_0040638b(param_3,param_4,&local_80);
    if ((int)uVar6 < 0) {
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_00405d8c;
      uVar2 = FUN_0040411f();
      pcVar10 = "RequestPermission failed!";
      uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar7 = 0x2c;
      goto LAB_0040599e;
    }
    uVar5 = local_80;
    if (local_80 != 0) goto LAB_00405d63;
    if (local_6c == (va_list)0x0) {
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar2 = 0x2d;
LAB_004059ff:
        FUN_00403257(uVar2,&DAT_00402b8c,uVar8,uVar9);
      }
    }
    else {
      if (param_4 == 1) {
        uVar6 = FUN_00405ded(param_1,local_6c,param_3,&local_80);
        if ((int)uVar6 < 0) {
          if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
              ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
            uVar2 = FUN_0040411f();
            pcVar10 = "RequestPermission failed!";
            uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
            uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
            uVar7 = 0x2e;
            goto LAB_0040599e;
          }
          goto LAB_00405d8c;
        }
        uVar5 = local_80;
        if (local_80 != 0) goto LAB_00405d63;
      }
      uVar5 = local_80;
      HVar3 = FUN_004050ff((int)param_1);
      if (HVar3 < 0) {
        if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
            ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
          uVar2 = FUN_0040411f();
          pcVar10 = "CreateSharer failed!";
          uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uVar7 = 0x2f;
          goto LAB_0040599e;
        }
      }
      else {
        local_74 = Ordinal_2(&DAT_00402bbc);
        if (local_74 == 0) {
          if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
              ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
            FUN_0040411f();
            uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
            uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
            uVar2 = 0x30;
            goto LAB_004059ff;
          }
        }
        else {
          *(int *)((int)param_1 + 0x40) = *(int *)((int)param_1 + 0x40) + 1;
          iVar4 = FUN_004073ae(local_60,0x27,L"RdpSharingGroup%lu");
          if (iVar4 < 0) {
            if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
              uVar2 = FUN_0040411f();
              pcVar10 = "StringCchPrintf failed!";
              uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
              uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
              uVar7 = 0x31;
              goto LAB_0040599e;
            }
          }
          else {
            local_78 = Ordinal_2(local_60);
            if (local_78 == 0) {
              if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                  ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
                FUN_0040411f();
                uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                uVar2 = 0x32;
                goto LAB_004059ff;
              }
            }
            else {
              pcVar1 = *(code **)(**(int **)((int)param_1 + 0x2c) + 0x34);
              (*(code *)PTR_guard_check_icall_0040b220)(*(int **)((int)param_1 + 0x2c),&local_70);
              iVar4 = (*pcVar1)();
              if (iVar4 < 0) {
                if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                    ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
                  uVar2 = FUN_0040411f();
                  pcVar10 = "get_Invitations failed!";
                  uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                  uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                  uVar7 = 0x33;
LAB_0040599e:
                  FUN_00403287(uVar7,&DAT_00402b8c,uVar8,uVar9,uVar2,pcVar10);
                }
              }
              else {
                pcVar1 = *(code **)(*local_70 + 0x28);
                (*(code *)PTR_guard_check_icall_0040b220)
                          (local_70,0,local_78,local_74,0x7fffffff,&local_7c);
                iVar4 = (*pcVar1)();
                if (iVar4 < 0) {
                  if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                      ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19]))
                  {
                    uVar2 = FUN_0040411f();
                    pcVar10 = "CreateInvitation failed!";
                    uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                    uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                    uVar7 = 0x34;
                    goto LAB_0040599e;
                  }
                }
                else {
                  pcVar1 = *(code **)(*local_7c + 0x1c);
                  (*(code *)PTR_guard_check_icall_0040b220)(local_7c,&local_84);
                  iVar4 = (*pcVar1)();
                  if (iVar4 < 0) {
                    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])
                       ) {
                      uVar2 = FUN_0040411f();
                      pcVar10 = "get_ConnectionString failed!";
                      uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                      uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                      uVar7 = 0x35;
                      goto LAB_0040599e;
                    }
                  }
                  else {
                    *(int *)((int)param_1 + 0x34) = param_3;
                    uVar6 = FUN_004037c8((void *)((int)param_1 + 0x44),local_7c,local_6c);
                    if (-1 < (int)uVar6) goto LAB_00405d63;
                    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])
                       ) {
                      uVar2 = FUN_0040411f();
                      pcVar10 = "m_InvitationManager.AddInvitation failed!";
                      uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                      uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                      uVar7 = 0x36;
                      goto LAB_0040599e;
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
LAB_00405d8c:
  Ordinal_6(local_84);
LAB_00405da8:
  Ordinal_6(local_78);
  Ordinal_6(local_78);
  FUN_004070eb(&local_84);
  FUN_004070eb(&local_78);
  FUN_00408990(uStack_14 ^ (uint)&stack0xffffff74,extraout_EDX);
  return;
}



/* Function: FUN_00405ded */

uint __thiscall FUN_00405ded(void *this,va_list param_1,int param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  UINT UVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  va_list local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  LPCVOID local_c;
  HLOCAL local_8;
  
  uVar6 = 0;
  local_1c = param_1;
  local_18 = 0;
  local_10 = 0x1e;
  local_c = (LPCVOID)0x0;
  local_8 = (HLOCAL)0x0;
  local_14 = 0;
  UVar4 = 0x3eb;
  if (param_2 == 1) {
    UVar4 = 0x3e9;
  }
  iVar2 = LoadStringW(*(HINSTANCE *)((int)this + 0x60),UVar4,(LPWSTR)&local_14,0);
  if (iVar2 == 0) {
    DVar3 = GetLastError();
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar7 = 0x37;
LAB_00405e6d:
      FUN_00403257(uVar7,&DAT_00402b8c,uVar8,uVar9);
    }
  }
  else {
    UVar4 = 0x3ec;
    if (param_2 == 1) {
      UVar4 = 0x3ea;
    }
    iVar5 = LoadStringW(*(HINSTANCE *)((int)this + 0x60),UVar4,(LPWSTR)&local_c,0);
    if (iVar5 == 0) {
      DVar3 = GetLastError();
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar7 = 0x38;
        goto LAB_00405e6d;
      }
    }
    else {
      DVar3 = FormatMessageW(0x2500,local_c,0,0,(LPWSTR)&local_8,0,&local_1c);
      if (DVar3 == 0) {
        DVar3 = GetLastError();
        if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
            ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
          FUN_0040411f();
          uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uVar7 = 0x39;
          goto LAB_00405e6d;
        }
      }
      else {
        FUN_00405ff6(&local_10);
        cVar1 = WinStationSendMessageW
                          (0,0xffffffff,local_14,iVar2 * 2,local_8,DVar3 * 2,4,local_10,&local_18,0)
        ;
        if (cVar1 != '\0') {
          *param_3 = (uint)(local_18 != 6);
          goto LAB_00405fd8;
        }
        DVar3 = GetLastError();
        if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
            ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
          FUN_0040411f();
          uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uVar7 = 0x3a;
          goto LAB_00405e6d;
        }
      }
    }
  }
  uVar6 = DVar3 & 0xffff | 0x80070000;
  if ((int)DVar3 < 1) {
    uVar6 = DVar3;
  }
  if (-1 < (int)uVar6) {
    uVar6 = 0x80004005;
  }
LAB_00405fd8:
  if (local_8 != (HLOCAL)0x0) {
    LocalFree(local_8);
  }
  return uVar6;
}



/* Function: FUN_00405ff6 */

uint FUN_00405ff6(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0x1e;
  local_c = 4;
  uVar2 = 0;
  uVar1 = RegGetValueW((HKEY)0x80000002,
                       L"Software\\Policies\\Microsoft\\Windows NT\\Terminal Services",
                       L"ShadowTimeout",0x10,(LPDWORD)0x0,&local_8,&local_c);
  if (uVar1 == 2) {
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      FUN_00403257(0x3b,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    }
  }
  else if (uVar1 == 0) {
    if ((local_8 == 0) || (9999 < local_8)) {
      if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
        return 0x80070057;
      }
      if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
        return 0x80070057;
      }
      if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
        return 0x80070057;
      }
      FUN_0040411f();
      FUN_00403257(0x3d,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
      return 0x80070057;
    }
  }
  else {
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      FUN_00403257(0x3c,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    }
    uVar2 = uVar1 & 0xffff | 0x80070000;
    if ((int)uVar1 < 1) {
      uVar2 = uVar1;
    }
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  *param_1 = local_8;
  return uVar2;
}



/* Function: FUN_00406132 */

uint FUN_00406132(HKEY param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  DWORD local_c;
  uint local_8;
  
  uVar2 = 5;
  local_c = 4;
  uVar3 = 0;
  local_8 = 0;
  uVar1 = RegGetValueW(param_1,L"Software\\Policies\\Microsoft\\Windows NT\\Terminal Services",
                       L"Shadow",0x10,(LPDWORD)0x0,&local_8,&local_c);
  if (uVar1 == 2) {
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      FUN_00403257(0x3e,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    }
  }
  else if (uVar1 == 0) {
    if (4 < local_8) {
      if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
        return 0x8000ffff;
      }
      if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
        return 0x8000ffff;
      }
      if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
        return 0x8000ffff;
      }
      FUN_0040411f();
      FUN_00403257(0x40,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
      return 0x8000ffff;
    }
    uVar2 = *(undefined4 *)(&DAT_00402a30 + local_8 * 4);
  }
  else {
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      FUN_00403257(0x3f,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    }
    uVar3 = uVar1 & 0xffff | 0x80070000;
    if ((int)uVar1 < 1) {
      uVar3 = uVar1;
    }
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  *param_2 = uVar2;
  return uVar3;
}



/* Function: FUN_00406277 */

uint FUN_00406277(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uStackY_28;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_8;
  
  local_8 = 5;
  uVar2 = FUN_00406132((HKEY)0x80000002,&local_8);
  iVar1 = local_8;
  if ((int)uVar2 < 0) {
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return uVar2;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return uVar2;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return uVar2;
    }
    uVar3 = FUN_0040411f();
    uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uStackY_28 = 0x41;
LAB_00406368:
    FUN_00403287(uStackY_28,&DAT_00402b8c,uVar4,uVar5,uVar3,"GetGroupPolicyRegSetting failed!");
  }
  else {
    if (local_8 == 5) {
      uVar2 = FUN_00406132((HKEY)0x80000001,&local_8);
      if ((int)uVar2 < 0) {
        if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
          return uVar2;
        }
        if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
          return uVar2;
        }
        if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
          return uVar2;
        }
        uVar3 = FUN_0040411f();
        uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uStackY_28 = 0x43;
        goto LAB_00406368;
      }
    }
    else {
      uVar2 = 0;
      local_8 = iVar1;
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        FUN_00403257(0x42,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
        local_8 = iVar1;
      }
    }
    *param_1 = local_8;
  }
  return uVar2;
}



/* Function: FUN_0040638b */

uint FUN_0040638b(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_8;
  
  local_8 = 5;
  uVar1 = FUN_00406277(&local_8);
  if ((int)uVar1 < 0) {
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return uVar1;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return uVar1;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return uVar1;
    }
    uVar2 = FUN_0040411f();
    FUN_00403287(0x44,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14),uVar2,"GetGroupPolicySetting failed!");
    return uVar1;
  }
  if (local_8 < 6) {
    if (param_1 < 2) {
      if (param_2 < 2) {
        if (param_1 < 0) {
          if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
            return 0x8000ffff;
          }
          if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
            return 0x8000ffff;
          }
          if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
            return 0x8000ffff;
          }
          FUN_0040411f();
          uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uVar3 = 0x48;
        }
        else {
          if (-1 < param_2) {
            *param_3 = *(undefined4 *)(&DAT_004029d0 + (param_2 + (param_1 + local_8 * 2) * 2) * 4);
            return uVar1;
          }
          if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
            return 0x8000ffff;
          }
          if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
            return 0x8000ffff;
          }
          if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
            return 0x8000ffff;
          }
          FUN_0040411f();
          uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uVar3 = 0x49;
        }
      }
      else {
        if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
          return 0x8000ffff;
        }
        if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
          return 0x8000ffff;
        }
        if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
          return 0x8000ffff;
        }
        FUN_0040411f();
        uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar3 = 0x47;
      }
    }
    else {
      if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
        return 0x8000ffff;
      }
      if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
        return 0x8000ffff;
      }
      if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
        return 0x8000ffff;
      }
      FUN_0040411f();
      uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar3 = 0x46;
    }
  }
  else {
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return 0x8000ffff;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return 0x8000ffff;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return 0x8000ffff;
    }
    FUN_0040411f();
    uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar3 = 0x45;
  }
  FUN_00403257(uVar3,&DAT_00402b8c,uVar4,uVar2);
  return 0x8000ffff;
}



/* Function: FUN_0040656d */

DWORD __fastcall FUN_0040656d(int param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  if (*(int *)(param_1 + 100) != 0) {
    return 0;
  }
  local_8 = 0;
  cVar1 = GetUserNameExW(2,0,&local_8);
  if (cVar1 != '\0') {
    return 0;
  }
  DVar2 = GetLastError();
  if ((DVar2 == 0xea) && (local_8 != 0)) {
    iVar3 = FUN_00408adb(-(uint)((int)((ulonglong)local_8 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)local_8 * 2));
    *(int *)(param_1 + 100) = iVar3;
    if (iVar3 == 0) {
      uVar4 = 0x8007000e;
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        FUN_00403257(0x4a,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
      }
      goto LAB_0040668c;
    }
    cVar1 = GetUserNameExW(2,iVar3,&local_8);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  DVar2 = GetLastError();
  if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
      ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
    FUN_0040411f();
    FUN_00403257(0x4b,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
  }
  uVar4 = DVar2 & 0xffff | 0x80070000;
  if ((int)DVar2 < 1) {
    uVar4 = DVar2;
  }
  if (-1 < (int)uVar4) {
    uVar4 = 0x80004005;
  }
LAB_0040668c:
  operator_delete__(*(void **)(param_1 + 100));
  *(undefined4 *)(param_1 + 100) = 0;
  return uVar4;
}



/* Function: FUN_004066a7 */

uint FUN_004066a7(int *param_1,undefined4 param_2,short *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 uStackY_38;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = (undefined4 *)0x0;
  local_c = (int *)0x0;
  pcVar1 = *(code **)(*param_1 + 0x38);
  (*(code *)PTR_guard_check_icall_0040b220)(param_1,&local_10);
  uVar2 = (*pcVar1)();
  if ((int)uVar2 < 0) {
    if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
        ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
    goto LAB_0040688a;
    uVar3 = FUN_0040411f();
    pcVar6 = "get_ConnectivityInfo failed";
    uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uStackY_38 = 0x4c;
  }
  else {
    if (local_10 == (undefined4 *)0x0) {
      uVar2 = 0x80004005;
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        FUN_00403257(0x4d,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                     *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
      }
      goto LAB_0040688a;
    }
    pcVar1 = *(code **)*local_10;
    (*(code *)PTR_guard_check_icall_0040b220)(local_10,&DAT_004029bc,&local_c);
    uVar2 = (*pcVar1)();
    if ((int)uVar2 < 0) {
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_0040688a;
      uVar3 = FUN_0040411f();
      pcVar6 = "QueryInterface failed";
      uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uStackY_38 = 0x4e;
    }
    else {
      pcVar1 = *(code **)(*local_c + 0x2c);
      (*(code *)PTR_guard_check_icall_0040b220)(local_c,&local_8);
      uVar2 = (*pcVar1)();
      if ((int)uVar2 < 0) {
        if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_0040688a;
        uVar3 = FUN_0040411f();
        pcVar6 = "get_PeerIP failed";
        uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uStackY_38 = 0x4f;
      }
      else {
        uVar2 = FUN_004068b0(local_8,extraout_ECX,param_3);
        if (-1 < (int)uVar2) goto LAB_0040688a;
        uVar2 = FUN_00407341(param_3,0x401,local_8);
        if ((((-1 < (int)uVar2) || ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c)) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_0040688a;
        uVar3 = FUN_0040411f();
        pcVar6 = "StringCchCopyW failed";
        uVar5 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uStackY_38 = 0x50;
      }
    }
  }
  FUN_00403287(uStackY_38,&DAT_00402b8c,uVar4,uVar5,uVar3,pcVar6);
LAB_0040688a:
  Ordinal_6(local_8);
  FUN_004070eb((int *)&local_c);
  FUN_004070eb((int *)&local_10);
  return uVar2;
}



/* Function: FUN_004068b0 */

uint FUN_004068b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_2c [8];
  int local_c [2];
  
  puVar5 = local_2c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar4 = 0;
  local_c[0] = 0;
  uVar1 = GetAddrInfoW(param_1,0,local_2c,local_c);
  if (uVar1 == 0) {
    uVar2 = 0x1c;
    if (**(short **)(local_c[0] + 0x18) == 2) {
      uVar2 = 0x10;
    }
    uVar1 = GetNameInfoW(*(short **)(local_c[0] + 0x18),uVar2,param_3,0x401,0,0,0);
    if (uVar1 == 0) goto LAB_004069ad;
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar6 = 0x52;
      goto LAB_00406998;
    }
  }
  else if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
           ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
    FUN_0040411f();
    uVar2 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uVar6 = 0x51;
LAB_00406998:
    FUN_00403257(uVar6,&DAT_00402b8c,uVar7,uVar2);
  }
  uVar4 = uVar1 & 0xffff | 0x80070000;
  if ((int)uVar1 < 1) {
    uVar4 = uVar1;
  }
LAB_004069ad:
  if (local_c[0] != 0) {
    FreeAddrInfoW(local_c[0]);
  }
  return uVar4;
}



/* Function: FUN_004069d0 */

void FUN_004069d0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  short *psVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *puVar7;
  undefined4 uStackY_860;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iStack_83c;
  int *local_838;
  short *local_834;
  int *local_830;
  int local_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  short local_818 [1028];
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_0040a100 ^ (uint)&iStack_83c;
  local_82c = param_1;
  memset(local_818,0,0x802);
  iVar6 = local_82c;
  local_838 = (int *)0x0;
  local_830 = (int *)0x0;
  local_834 = (short *)0x0;
  local_828 = DAT_00402280;
  uStack_824 = DAT_00402284;
  uStack_820 = DAT_00402288;
  uStack_81c = DAT_0040228c;
  FUN_00403200(local_82c + -4);
  if (param_2 == (undefined4 *)0x0) {
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      FUN_00403257(0x53,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    }
    goto LAB_00406cc7;
  }
  pcVar1 = *(code **)*param_2;
  (*(code *)PTR_guard_check_icall_0040b220)(param_2,&DAT_00402a48,&local_838);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
        ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
    goto LAB_00406cc7;
    uVar3 = FUN_0040411f();
    pcVar10 = "QueryInterface failed";
    uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uStackY_860 = 0x54;
  }
  else {
    pcVar1 = *(code **)(*local_838 + 0x28);
    (*(code *)PTR_guard_check_icall_0040b220)(local_838,3 - (uint)(*(int *)(iVar6 + 0x30) != 1));
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_00406cc7;
      uVar3 = FUN_0040411f();
      pcVar10 = "put_ControlLevel failed";
      uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uStackY_860 = 0x55;
    }
    else {
      pcVar1 = *(code **)(*local_838 + 0x2c);
      (*(code *)PTR_guard_check_icall_0040b220)(local_838,&local_830);
      iVar2 = (*pcVar1)();
      if (iVar2 < 0) {
        if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_00406cc7;
        uVar3 = FUN_0040411f();
        pcVar10 = "get_Invitation failed";
        uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uStackY_860 = 0x56;
      }
      else {
        DVar4 = FUN_0040397f((void *)(iVar6 + 0x40),local_830,&local_834);
        if (-1 < (int)DVar4) {
          *(int *)(iVar6 + 0x58) = *(int *)(iVar6 + 0x58) + 1;
          FUN_0040656d(iVar6 + -4);
          FUN_004066a7(local_838,extraout_ECX,local_818);
          puVar7 = &DAT_00402280;
          if (*(int *)(iVar6 + 0x30) != 1) {
            puVar7 = &DAT_004022e0;
          }
          local_828 = *puVar7;
          psVar5 = (short *)&DAT_00402a44;
          if (*(int *)(local_82c + 0x60) != 0) {
            psVar5 = *(short **)(local_82c + 0x60);
          }
          uStack_824 = puVar7[1];
          uStack_820 = puVar7[2];
          uStack_81c = puVar7[3];
          iVar6 = FUN_004071d1(&DAT_0040a500,&local_828,local_834,local_818,psVar5);
          if (((iVar6 != 0) && ((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c)) &&
             (((PTR_LOOP_0040a00c[0x1c] & 8) != 0 && (1 < (byte)PTR_LOOP_0040a00c[0x19])))) {
            FUN_0040411f();
            FUN_00403257(0x58,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                         *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
          }
          goto LAB_00406cc7;
        }
        if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_00406cc7;
        uVar3 = FUN_0040411f();
        pcVar10 = "OnAttendeeConnected failed";
        uVar9 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uStackY_860 = 0x57;
      }
    }
  }
  FUN_00403287(uStackY_860,&DAT_00402b8c,uVar8,uVar9,uVar3,pcVar10);
LAB_00406cc7:
  Ordinal_6(local_834);
  FUN_004070eb((int *)&local_834);
  FUN_004070eb(&iStack_83c);
  FUN_00408990(uStack_10 ^ (uint)&stack0xfffff7c0,extraout_EDX);
  return;
}



/* Function: FUN_00406d10 */

undefined4 FUN_00406d10(void)

{
  return 0;
}



/* Function: FUN_00406d20 */

undefined4 FUN_00406d20(void)

{
  return 0;
}



/* Function: FUN_00406d30 */

undefined4 FUN_00406d30(void)

{
  return 0;
}



/* Function: FUN_00406d50 */

void FUN_00406d50(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *puVar5;
  undefined4 uStackY_860;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *local_83c;
  short *local_838;
  int *local_834;
  int *local_830;
  undefined4 *local_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  short local_818 [1028];
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_0040a100 ^ (uint)&local_83c;
  local_82c = param_2;
  memset(local_818,0,0x802);
  local_83c = (int *)0x0;
  local_830 = (int *)0x0;
  local_834 = (int *)0x0;
  local_838 = (short *)0x0;
  local_828 = DAT_00402280;
  uStack_824 = DAT_00402284;
  uStack_820 = DAT_00402288;
  uStack_81c = DAT_0040228c;
  if (local_82c == (undefined4 *)0x0) {
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      FUN_00403257(0x59,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                   *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    }
    goto LAB_0040707d;
  }
  pcVar1 = *(code **)*local_82c;
  (*(code *)PTR_guard_check_icall_0040b220)(local_82c,&DAT_004029ac,&local_834);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
        ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
    goto LAB_0040707d;
    uVar3 = FUN_0040411f();
    pcVar8 = "QueryInterface failed";
    uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uStackY_860 = 0x5a;
  }
  else {
    pcVar1 = *(code **)(*local_834 + 0x1c);
    (*(code *)PTR_guard_check_icall_0040b220)(local_834,&local_83c);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_0040707d;
      uVar3 = FUN_0040411f();
      pcVar8 = "get_Attendee failed";
      uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uStackY_860 = 0x5b;
    }
    else {
      pcVar1 = *(code **)(*local_83c + 0x2c);
      (*(code *)PTR_guard_check_icall_0040b220)(local_83c,&local_830);
      iVar2 = (*pcVar1)();
      if (iVar2 < 0) {
        if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_0040707d;
        uVar3 = FUN_0040411f();
        pcVar8 = "get_Invitation failed";
        uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uStackY_860 = 0x5c;
      }
      else {
        iVar2 = FUN_00403bac((void *)(param_1 + 0x40),local_830,&local_838);
        if (iVar2 < 0) {
          if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
              ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
          goto LAB_0040707d;
          uVar3 = FUN_0040411f();
          pcVar8 = "OnAttendeeDisconnected failed";
          uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uStackY_860 = 0x5d;
        }
        else {
          FUN_0040656d(param_1 + -4);
          FUN_004066a7(local_83c,extraout_ECX,local_818);
          puVar5 = &DAT_004022f0;
          if (*(int *)(param_1 + 0x30) != 1) {
            puVar5 = &DAT_00402300;
          }
          psVar4 = (short *)&DAT_00402a44;
          if (*(int *)(param_1 + 0x60) != 0) {
            psVar4 = *(short **)(param_1 + 0x60);
          }
          local_828 = *puVar5;
          uStack_824 = puVar5[1];
          uStack_820 = puVar5[2];
          uStack_81c = puVar5[3];
          iVar2 = FUN_004071d1(&DAT_0040a500,&local_828,local_838,local_818,psVar4);
          if (iVar2 != 0) {
            if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
              FUN_0040411f();
              FUN_00403257(0x5e,&DAT_00402b8c,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                           *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
            }
            goto LAB_0040707d;
          }
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
          iVar2 = FUN_004057d0(param_1 + -4);
          if (((-1 < iVar2) || ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c)) ||
             (((PTR_LOOP_0040a00c[0x1c] & 8) == 0 || ((byte)PTR_LOOP_0040a00c[0x19] < 2))))
          goto LAB_0040707d;
          uVar3 = FUN_0040411f();
          pcVar8 = "CheckAttendees failed!";
          uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uStackY_860 = 0x5f;
        }
      }
    }
  }
  FUN_00403287(uStackY_860,&DAT_00402b8c,uVar6,uVar7,uVar3,pcVar8);
LAB_0040707d:
  FUN_00403230(param_1 + -4);
  Ordinal_6(local_838);
  FUN_004070eb((int *)&local_838);
  FUN_004070eb((int *)&local_834);
  FUN_004070eb((int *)&stack0xfffff7c0);
  FUN_00408990(uStack_10 ^ (uint)&stack0xfffff7c0,extraout_EDX);
  return;
}



/* Function: FUN_004070d0 */

undefined4 FUN_004070d0(void)

{
  return 0;
}



/* Function: FUN_004070e0 */

undefined4 FUN_004070e0(void)

{
  return 0;
}



/* Function: FUN_004070eb */

void __fastcall FUN_004070eb(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040b220)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_0040710d */

void __thiscall
FUN_0040710d(void *this,undefined4 param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 local_5c [4];
  undefined4 local_4c [4];
  short *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_0040a100 ^ (uint)&stack0xfffffffc;
  FUN_00407300(local_5c,param_2);
  FUN_00407300(local_4c,param_3);
  psVar2 = param_4;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  local_3c = param_4;
  uVar3 = 0;
  local_38 = 0;
  local_30 = 0;
  local_34 = ((int)psVar2 - (int)(param_4 + 1) >> 1) * 2 + 2;
  local_28 = 0;
  local_2c = &stack0x00000014;
  local_1c = &stack0x00000018;
  local_24 = 4;
  local_20 = 0;
  local_18 = 0;
  local_14 = 4;
  local_10 = 0;
  if (*(char *)((int)this + 0x38) != '\0') {
    EtwEventWriteFull(*(undefined4 *)((int)this + 0x30),*(undefined4 *)((int)this + 0x34),
                      &DAT_00402240,0,0,0,5,local_5c);
    uVar3 = extraout_EDX;
  }
  FUN_00408990(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004071d1 */

void __thiscall
FUN_004071d1(void *this,undefined4 param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  short *local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_0040a100 ^ (uint)&stack0xfffffffc;
  FUN_00407300(local_50,param_2);
  FUN_00407300(local_40,param_3);
  psVar2 = param_4;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  local_30 = param_4;
  uVar3 = 0;
  local_2c = 0;
  local_24 = 0;
  local_28 = ((int)psVar2 - (int)(param_4 + 1) >> 1) * 2 + 2;
  local_1c = 0;
  local_20 = &stack0x00000014;
  local_18 = 4;
  local_14 = 0;
  if (*(char *)((int)this + 0x38) != '\0') {
    EtwEventWriteFull(*(undefined4 *)((int)this + 0x30),*(undefined4 *)((int)this + 0x34),param_1,0,
                      0,0,4,local_50);
    uVar3 = extraout_EDX;
  }
  FUN_00408990(local_c ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00407290 */

void __thiscall FUN_00407290(void *this,byte param_1)

{
  FUN_00404887((void *)((int)this + -0x10),param_1);
  return;
}



/* Function: FUN_004072a0 */

void FUN_004072a0(int param_1)

{
  FUN_00403200(param_1 + -4);
  return;
}



/* Function: FUN_004072b0 */

void FUN_004072b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004048b0(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_004072c0 */

void FUN_004072c0(int param_1)

{
  FUN_00403200(param_1 + -8);
  return;
}



/* Function: FUN_004072d0 */

void FUN_004072d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004048b0(param_1 + -8,param_2,param_3);
  return;
}



/* Function: FUN_004072e0 */

void FUN_004072e0(int param_1)

{
  FUN_00403230(param_1 + -4);
  return;
}



/* Function: FUN_004072f0 */

void FUN_004072f0(int param_1)

{
  FUN_00403230(param_1 + -8);
  return;
}



/* Function: FUN_00407300 */

void FUN_00407300(undefined4 *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_2;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  param_1[1] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  param_1[2] = ((int)psVar2 - (int)(param_2 + 1) >> 1) * 2 + 2;
  return;
}



/* Function: FUN_00407341 */

undefined4 __fastcall FUN_00407341(short *param_1,uint param_2,int param_3)

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



/* Function: FUN_004073ae */

undefined4 __cdecl FUN_004073ae(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  uint _Count;
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar2 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar2 = 0;
    _Count = param_2 - 1;
    uVar1 = _vsnwprintf(param_1,_Count,param_3,&stack0x00000010);
    if (((int)uVar1 < 0) || (_Count < uVar1)) {
      uVar2 = 0x8007007a;
    }
    else if (uVar1 != _Count) {
      return 0;
    }
    param_1[_Count] = L'\0';
  }
  return uVar2;
}



/* Function: FUN_00407420 */

void FUN_00407420(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 4);
  (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 4));
  (*pcVar1)();
  return;
}



/* Function: FUN_00407450 */

void FUN_00407450(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 8);
  (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 4));
  (*pcVar1)();
  return;
}



/* Function: FUN_00407480 */

undefined4 FUN_00407480(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = 0;
  }
  return uVar1;
}



/* Function: FUN_004074b0 */

undefined4 FUN_004074b0(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000010;
  
  uVar1 = 0x80004001;
  if (in_stack_00000010 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *in_stack_00000010 = 0;
  }
  return uVar1;
}



/* Function: FUN_004074e0 */

undefined4 FUN_004074e0(void)

{
  return 0x80004001;
}



/* Function: FUN_004074f0 */

int FUN_004074f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x18);
  if (piVar3 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    iVar1 = iVar1 + 1;
  }
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Function: FUN_00407520 */

undefined4 * __thiscall FUN_00407520(void *this,byte param_1)

{
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 8;
  *(undefined ***)this = &PTR_FUN_004016b4;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040754d */

undefined4 * __thiscall FUN_0040754d(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004016c4;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 8;
  *(undefined ***)((int)this + 4) = &PTR_FUN_004016b4;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00407590 */

int FUN_00407590(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = -1;
  piVar1 = (int *)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      pcVar2 = (code *)**(undefined4 **)(param_1 + 4);
      (*(code *)PTR_guard_check_icall_0040b220)(1);
      (*pcVar2)();
      return 0;
    }
  }
  iVar4 = 1;
  if (1 < iVar3) {
    iVar4 = iVar3;
  }
  return iVar4;
}



/* Function: FUN_004075e0 */

void __thiscall FUN_004075e0(void *this,byte param_1)

{
  FUN_0040754d((void *)((int)this + -4),param_1);
  return;
}



/* Function: FUN_004075f0 */

uint __fastcall FUN_004075f0(int param_1)

{
  return *(uint *)(param_1 + 0xc) & 1;
}



/* Function: FUN_00407600 */

undefined4 __fastcall FUN_00407600(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  return 0;
}



/* Function: FUN_00407610 */

undefined4 __fastcall FUN_00407610(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  return 0;
}



/* Function: FUN_0040761d */

undefined4 * __fastcall FUN_0040761d(undefined4 *param_1)

{
  param_1[3] = 0xdbcaabcd;
  param_1[2] = "CRdpSessionAgent";
  param_1[4] = 1;
  *param_1 = &PTR_FUN_004016c4;
  param_1[1] = &PTR_FUN_004016d0;
  param_1[6] = 0;
  param_1[5] = param_1;
  return param_1;
}



/* Function: FUN_00407660 */

undefined4 FUN_00407660(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_2 + iVar2 * 4) != (&DAT_00402b9c)[iVar2]) {
      *param_3 = 0;
      return 0x80004002;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  *param_3 = param_1;
  pcVar1 = *(code **)(*param_1 + 4);
  (*(code *)PTR_guard_check_icall_0040b220)(param_1);
  (*pcVar1)();
  return 0;
}



/* Function: FUN_004076b0 */

undefined4 FUN_004076b0(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  
  if (param_3 == (int *)0x0) {
    if ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) {
      return 0x80004003;
    }
    if ((PTR_LOOP_0040a00c[0x1c] & 8) == 0) {
      return 0x80004003;
    }
    if ((byte)PTR_LOOP_0040a00c[0x19] < 2) {
      return 0x80004003;
    }
    FUN_0040411f();
    FUN_00403257(10,&DAT_00402c10,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                 *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
    return 0x80004003;
  }
  iVar2 = 0;
  do {
    if ((&DAT_00402c00)[iVar2] != *(int *)(param_2 + iVar2 * 4)) {
      iVar2 = 0;
      goto LAB_0040772c;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  goto LAB_00407751;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_0040772c:
    if ((&DAT_00402bf0)[iVar2] != *(int *)(param_2 + iVar2 * 4)) {
      iVar2 = 0;
      do {
        if ((&DAT_00402be0)[iVar2] != *(int *)(param_2 + iVar2 * 4)) {
          *param_3 = 0;
          return 0x80004002;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      break;
    }
  }
LAB_00407751:
  *param_3 = param_1;
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 4);
  (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 4));
  (*pcVar1)();
  return 0;
}



/* Function: FUN_00407790 */

int FUN_00407790(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *local_8;
  
  local_8 = (int *)0x0;
  pcVar1 = *(code **)*param_2;
  (*(code *)PTR_guard_check_icall_0040b220)(param_2,&DAT_0040222c,&local_8);
  iVar3 = (*pcVar1)();
  if (-1 < iVar3) {
    piVar4 = (int *)(param_1 + 8);
    pcVar1 = *(code **)(*local_8 + 0x10);
    (*(code *)PTR_guard_check_icall_0040b220)(local_8,&DAT_00402be0,piVar4);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == (int *)0x0) {
        iVar3 = -0x7fff0001;
      }
      else {
        pcVar1 = *(code **)(*piVar2 + 0x14);
        (*(code *)PTR_guard_check_icall_0040b220)(piVar2,param_1,param_1 + 0xc);
        iVar3 = (*pcVar1)();
        if (iVar3 < 0) {
          pcVar1 = *(code **)(*(int *)*piVar4 + 8);
          (*(code *)PTR_guard_check_icall_0040b220)((int *)*piVar4);
          (*pcVar1)();
          *piVar4 = 0;
        }
      }
    }
  }
  if (local_8 != (int *)0x0) {
    pcVar1 = *(code **)(*local_8 + 8);
    (*(code *)PTR_guard_check_icall_0040b220)(local_8);
    (*pcVar1)();
  }
  return iVar3;
}



/* Function: FUN_00407850 */

undefined4 FUN_00407850(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x18);
    (*(code *)PTR_guard_check_icall_0040b220)(piVar1,*(undefined4 *)(param_1 + 0xc));
    uVar3 = (*pcVar2)();
    pcVar2 = *(code **)(**(int **)(param_1 + 8) + 8);
    (*(code *)PTR_guard_check_icall_0040b220)(*(int **)(param_1 + 8));
    (*pcVar2)();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar3;
}



/* Function: FUN_004078b0 */

undefined4 FUN_004078b0(int param_1,undefined4 param_2)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined4 *in_stack_00000018;
  
  switch(param_2) {
  case 0x12d:
    if (((in_stack_00000018 == (undefined4 *)0x0) || (in_stack_00000018[2] != 1)) ||
       (pbVar4 = (byte *)*in_stack_00000018, (*pbVar4 & 9) != 9)) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0xc);
    break;
  case 0x12e:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 1) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 9) != 9) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x10);
    break;
  case 0x12f:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 1) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 9) != 9) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x14);
    break;
  case 0x130:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] == 1) {
      pbVar4 = (byte *)*in_stack_00000018;
      if ((*pbVar4 & 3) == 3) {
        iVar2 = **(int **)(param_1 + 4);
        (*(code *)PTR_guard_check_icall_0040b220)
                  (*(int **)(param_1 + 4),*(undefined4 *)pbVar4,*(undefined4 *)(pbVar4 + 4),
                   *(undefined4 *)(pbVar4 + 8),*(undefined4 *)(pbVar4 + 0xc));
        (**(code **)(iVar2 + 0x28))();
        return 0x80004001;
      }
      return 0x80070057;
    }
    return 0x80070057;
  case 0x131:
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x18);
    goto LAB_00407b3a;
  case 0x132:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 2) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 3) != 3) {
      return 0x80070057;
    }
    if ((pbVar4[0x10] & 3) == 3) {
      pcVar5 = *(code **)(**(int **)(param_1 + 4) + 0x20);
      (*(code *)PTR_guard_check_icall_0040b220)
                (*(int **)(param_1 + 4),*(undefined4 *)(pbVar4 + 0x18),*(undefined4 *)(pbVar4 + 8));
      (*pcVar5)();
      return 0x80004001;
    }
    return 0x80070057;
  case 0x133:
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x24);
    goto LAB_00407b3a;
  case 0x134:
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x1c);
    goto LAB_00407b3a;
  case 0x135:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 3) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((pbVar4[0x10] & 3) != 3) {
      return 0x80070057;
    }
    if ((pbVar4[0x20] & 9) == 9) {
      if ((*pbVar4 & 9) == 9) {
        iVar2 = **(int **)(param_1 + 4);
        (*(code *)PTR_guard_check_icall_0040b220)
                  (*(int **)(param_1 + 4),*(undefined4 *)(pbVar4 + 0x28),
                   *(undefined4 *)(pbVar4 + 0x18),*(undefined4 *)(pbVar4 + 8));
        (**(code **)(iVar2 + 0x54))();
        return 0x80004001;
      }
      return 0x80070057;
    }
    return 0x80070057;
  case 0x136:
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x60);
    goto LAB_00407b3a;
  case 0x137:
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 100);
    goto LAB_00407b3a;
  default:
    goto switchD_004078d0_caseD_138;
  case 0x13a:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 3) {
      return 0x80070057;
    }
    psVar1 = (short *)*in_stack_00000018;
    if (*psVar1 != 8) {
      return 0x80070057;
    }
    if ((*(byte *)(psVar1 + 8) & 3) == 3) {
      if (psVar1[0x10] == 0xd) {
        iVar2 = **(int **)(param_1 + 4);
        (*(code *)PTR_guard_check_icall_0040b220)
                  (*(int **)(param_1 + 4),*(undefined4 *)(psVar1 + 0x14),
                   *(undefined4 *)(psVar1 + 0xc),*(undefined4 *)(psVar1 + 4));
        (**(code **)(iVar2 + 0x68))();
        return 0x80004001;
      }
      return 0x80070057;
    }
    return 0x80070057;
  case 0x13b:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 3) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 3) != 3) {
      return 0x80070057;
    }
    if ((pbVar4[0x10] & 3) == 3) {
      if (*(short *)(pbVar4 + 0x20) == 0xd) {
        iVar2 = **(int **)(param_1 + 4);
        (*(code *)PTR_guard_check_icall_0040b220)
                  (*(int **)(param_1 + 4),*(undefined4 *)(pbVar4 + 0x28),
                   *(undefined4 *)(pbVar4 + 0x18),*(undefined4 *)(pbVar4 + 8));
        (**(code **)(iVar2 + 0x6c))();
        return 0x80004001;
      }
      return 0x80070057;
    }
    return 0x80070057;
  case 0x13c:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 1) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 9) != 9) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x2c);
    break;
  case 0x13d:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 1) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 9) != 9) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x30);
    break;
  case 0x13e:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 1) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 9) != 9) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x34);
    break;
  case 0x13f:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 1) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 9) != 9) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x38);
    break;
  case 0x140:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 1) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 9) != 9) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x3c);
    break;
  case 0x141:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 1) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 9) != 9) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x40);
    break;
  case 0x142:
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x5c);
LAB_00407b3a:
    (*(code *)PTR_guard_check_icall_0040b220)(piVar3);
    (*pcVar5)();
    return 0x80004001;
  case 0x143:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 4) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 3) != 3) {
      return 0x80070057;
    }
    if ((pbVar4[0x10] & 3) == 3) {
      if ((pbVar4[0x20] & 3) != 3) {
        return 0x80070057;
      }
      if ((pbVar4[0x30] & 3) == 3) {
        iVar2 = **(int **)(param_1 + 4);
        (*(code *)PTR_guard_check_icall_0040b220)
                  (*(int **)(param_1 + 4),*(undefined4 *)(pbVar4 + 0x38),
                   *(undefined4 *)(pbVar4 + 0x28),*(undefined4 *)(pbVar4 + 0x18),
                   *(undefined4 *)(pbVar4 + 8));
        (**(code **)(iVar2 + 0x70))();
        return 0x80004001;
      }
      return 0x80070057;
    }
    return 0x80070057;
  case 0x144:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 1) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 3) != 3) {
      return 0x80070057;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar5 = *(code **)(*piVar3 + 0x74);
    break;
  case 0x145:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 3) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 3) != 3) {
      return 0x80070057;
    }
    if ((pbVar4[0x10] & 3) == 3) {
      if ((pbVar4[0x20] & 3) == 3) {
        iVar2 = **(int **)(param_1 + 4);
        (*(code *)PTR_guard_check_icall_0040b220)
                  (*(int **)(param_1 + 4),*(undefined4 *)(pbVar4 + 0x28),
                   *(undefined4 *)(pbVar4 + 0x18),*(undefined4 *)(pbVar4 + 8));
        (**(code **)(iVar2 + 0x44))();
        return 0x80004001;
      }
      return 0x80070057;
    }
    return 0x80070057;
  case 0x154:
    if (in_stack_00000018 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    if (in_stack_00000018[2] != 4) {
      return 0x80070057;
    }
    pbVar4 = (byte *)*in_stack_00000018;
    if ((*pbVar4 & 3) != 3) {
      return 0x80070057;
    }
    if ((pbVar4[0x10] & 3) != 3) {
      return 0x80070057;
    }
    if ((pbVar4[0x20] & 3) != 3) {
      return 0x80070057;
    }
    if ((pbVar4[0x30] & 3) != 3) {
      return 0x80070057;
    }
    pcVar5 = *(code **)(**(int **)(param_1 + 4) + 0x80);
    (*(code *)PTR_guard_check_icall_0040b220)
              (*(int **)(param_1 + 4),*(undefined4 *)(pbVar4 + 0x38),*(undefined4 *)(pbVar4 + 0x28),
               *(undefined4 *)(pbVar4 + 0x18),*(undefined4 *)(pbVar4 + 8));
    (*pcVar5)();
    goto switchD_004078d0_caseD_138;
  }
  (*(code *)PTR_guard_check_icall_0040b220)(piVar3,*(undefined4 *)(pbVar4 + 8));
  (*pcVar5)();
switchD_004078d0_caseD_138:
  return 0x80004001;
}



/* Function: FUN_00407ec6 */

DWORD __fastcall FUN_00407ec6(HANDLE param_1,HANDLE param_2)

{
  ushort uVar1;
  DWORD DVar2;
  BOOL BVar3;
  SIZE_T uBytes;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  DWORD local_20;
  PSECURITY_DESCRIPTOR local_1c;
  LPVOID local_18;
  DWORD local_14;
  undefined4 *local_10;
  PACL local_c;
  PACL local_8;
  
  uVar4 = 0;
  local_c = (PACL)0x0;
  local_1c = (HLOCAL)0x0;
  local_18 = (LPVOID)0x0;
  local_8 = (PACL)0x0;
  local_14 = 0;
  local_20 = 0;
  local_10 = (undefined4 *)0x0;
  GetTokenInformation(param_2,TokenUser,(LPVOID)0x0,0,&local_14);
  DVar2 = GetLastError();
  if (DVar2 == 0x7a) {
    local_10 = (undefined4 *)LocalAlloc(0x40,local_14);
    if (local_10 == (undefined4 *)0x0) {
      uVar4 = 0x8007000e;
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_0040824d;
      FUN_0040411f();
      uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar5 = 0xb;
LAB_00407fb4:
      uVar4 = 0x8007000e;
      FUN_00403257(uVar5,&DAT_00402c20,uVar6,uVar7);
      goto LAB_0040824d;
    }
    BVar3 = GetTokenInformation(param_2,TokenUser,local_10,local_14,&local_20);
    if (BVar3 == 0) {
      DVar2 = GetLastError();
      if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
          ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
        FUN_0040411f();
        uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uVar5 = 0xc;
LAB_00407f3a:
        FUN_00403257(uVar5,&DAT_00402c20,uVar6,uVar7);
      }
    }
    else {
      DVar2 = GetSecurityInfo(param_1,SE_KERNEL_OBJECT,4,(PSID *)0x0,(PSID *)0x0,&local_c,
                              (PACL *)0x0,&local_1c);
      if (DVar2 == 0) {
        uVar1 = local_c->AclSize;
        DVar2 = GetLengthSid((PSID)*local_10);
        uBytes = uVar1 + 8 + DVar2;
        local_8 = (PACL)LocalAlloc(0,uBytes);
        if (local_8 == (PACL)0x0) {
          uVar4 = 0x8007000e;
          if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
              ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
          goto LAB_0040824d;
          FUN_0040411f();
          uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uVar5 = 0xe;
          goto LAB_00407fb4;
        }
        BVar3 = InitializeAcl(local_8,uBytes,2);
        if (BVar3 == 0) {
          DVar2 = GetLastError();
          if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
              ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
            FUN_0040411f();
            uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
            uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
            uVar5 = 0xf;
            goto LAB_00407f3a;
          }
        }
        else {
          BVar3 = AddAccessDeniedAce(local_8,2,0x111fffff,(PSID)*local_10);
          if (BVar3 != 0) {
            DVar2 = 0;
            if (local_c->AceCount != 0) {
              do {
                BVar3 = GetAce(local_c,DVar2,&local_18);
                if (BVar3 == 0) {
                  DVar2 = GetLastError();
                  if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
                      ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
                  goto LAB_00407f45;
                  FUN_0040411f();
                  uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                  uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                  uVar5 = 0x11;
                  goto LAB_00407f3a;
                }
                BVar3 = AddAce(local_8,2,0xffffffff,local_18,(uint)*(ushort *)((int)local_18 + 2));
                if (BVar3 == 0) {
                  DVar2 = GetLastError();
                  if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
                      ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
                  goto LAB_00407f45;
                  FUN_0040411f();
                  uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
                  uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
                  uVar5 = 0x12;
                  goto LAB_00407f3a;
                }
                DVar2 = DVar2 + 1;
              } while (DVar2 < local_c->AceCount);
            }
            DVar2 = SetSecurityInfo(param_1,SE_KERNEL_OBJECT,4,(PSID)0x0,(PSID)0x0,local_8,(PACL)0x0
                                   );
            if (DVar2 != 0) {
              DVar2 = GetLastError();
              if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
                  ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
                FUN_0040411f();
                FUN_00403257(0x13,&DAT_00402c20,*(undefined4 *)(PTR_LOOP_0040a00c + 0x10),
                             *(undefined4 *)(PTR_LOOP_0040a00c + 0x14));
              }
              uVar4 = DVar2 & 0xffff | 0x80070000;
              if ((int)DVar2 < 1) {
                uVar4 = DVar2;
              }
              if (-1 < (int)uVar4) {
                uVar4 = 0x80004005;
              }
            }
            goto LAB_0040824d;
          }
          DVar2 = GetLastError();
          if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
              ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
            FUN_0040411f();
            uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
            uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
            uVar5 = 0x10;
            goto LAB_00407f3a;
          }
        }
      }
      else {
        DVar2 = GetLastError();
        if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
            ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
          FUN_0040411f();
          uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uVar5 = 0xd;
          goto LAB_00407f3a;
        }
      }
    }
  }
  else {
    DVar2 = GetLastError();
    if ((((undefined **)PTR_LOOP_0040a00c != &PTR_LOOP_0040a00c) &&
        ((PTR_LOOP_0040a00c[0x1c] & 8) != 0)) && (1 < (byte)PTR_LOOP_0040a00c[0x19])) {
      FUN_0040411f();
      uVar7 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar6 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uVar5 = 10;
      goto LAB_00407f3a;
    }
  }
LAB_00407f45:
  uVar4 = DVar2 & 0xffff | 0x80070000;
  if ((int)DVar2 < 1) {
    uVar4 = DVar2;
  }
  if (-1 < (int)uVar4) {
    uVar4 = 0x80004005;
  }
LAB_0040824d:
  LocalFree(local_1c);
  LocalFree(local_8);
  LocalFree(local_10);
  return uVar4;
}



/* Function: FUN_004082ff */

void FUN_004082ff(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _func_5191 *p_Var1;
  code *pcVar2;
  _func_5185 *p_Var3;
  _func_5127 *p_Var4;
  HRESULT HVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uStackY_248;
  LPMONIKER pIVar10;
  undefined4 uVar11;
  LPBC pIVar12;
  IMoniker *pmkToLeft;
  char *pcVar13;
  IID *riidResult;
  int **ppvResult;
  ULONG local_224;
  LPMONIKER local_220;
  int *local_21c;
  LPOLESTR local_218;
  LPBC local_214;
  wchar_t local_210 [258];
  uint local_c;
  
  local_c = DAT_0040a100 ^ (uint)&stack0xfffffffc;
  local_214 = (IBindCtx *)0x0;
  local_220 = (IMoniker *)0x0;
  local_218 = (LPOLESTR)0x0;
  memset(local_210,0,0x200);
  local_224 = 0;
  local_21c = (int *)0x0;
  HVar5 = CreateBindCtx(0,&local_214);
  if (HVar5 < 0) {
    uVar8 = extraout_EDX;
    if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
        ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
    goto LAB_0040859d;
    uVar6 = FUN_0040411f();
    pcVar13 = "CreateBindCtx";
    uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
    uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
    uStackY_248 = 10;
  }
  else {
    HVar5 = StringFromCLSID((IID *)&DAT_004024dc,&local_218);
    if (HVar5 < 0) {
      uVar8 = extraout_EDX_00;
      if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
          ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
      goto LAB_0040859d;
      uVar6 = FUN_0040411f();
      pcVar13 = "StringFromCLSID";
      uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
      uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
      uStackY_248 = 0xb;
    }
    else {
      iVar7 = FUN_004073ae(local_210,0x100,L"Session:%d!clsid:%s");
      if (iVar7 < 0) {
        uVar8 = extraout_EDX_01;
        if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
            ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
        goto LAB_0040859d;
        uVar6 = FUN_0040411f();
        pcVar13 = "StringCchPrintf";
        uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
        uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
        uStackY_248 = 0xc;
      }
      else {
        HVar5 = MkParseDisplayName(local_214,local_210,&local_224,&local_220);
        if (HVar5 < 0) {
          uVar8 = extraout_EDX_02;
          if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
              ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
          goto LAB_0040859d;
          uVar6 = FUN_0040411f();
          pcVar13 = "MkParseDisplayName";
          uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
          uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
          uStackY_248 = 0xd;
        }
        else {
          p_Var1 = local_220->lpVtbl->BindToObject;
          ppvResult = &local_21c;
          riidResult = (IID *)&DAT_00402bac;
          pmkToLeft = (IMoniker *)0x0;
          pIVar10 = local_220;
          pIVar12 = local_214;
          (*(code *)PTR_guard_check_icall_0040b220)();
          HVar5 = (*p_Var1)(pIVar10,pIVar12,pmkToLeft,riidResult,ppvResult);
          if (HVar5 < 0) {
            uVar8 = extraout_EDX_03;
            if ((((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c) ||
                ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
            goto LAB_0040859d;
            uVar6 = FUN_0040411f();
            pcVar13 = "pMoniker->BindToObject";
            uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
            uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
            uStackY_248 = 0xe;
          }
          else {
            pcVar2 = *(code **)(*local_21c + 0xc);
            (*(code *)PTR_guard_check_icall_0040b220)(local_21c,0,&DAT_00402a68,param_3);
            uVar9 = (*pcVar2)();
            uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
            if ((((-1 < (int)uVar9) || ((undefined **)PTR_LOOP_0040a00c == &PTR_LOOP_0040a00c)) ||
                ((PTR_LOOP_0040a00c[0x1c] & 8) == 0)) || ((byte)PTR_LOOP_0040a00c[0x19] < 2))
            goto LAB_0040859d;
            uVar6 = FUN_0040411f();
            pcVar13 = "pClassFactory->CreateInstance";
            uVar8 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x14);
            uVar11 = *(undefined4 *)(PTR_LOOP_0040a00c + 0x10);
            uStackY_248 = 0xf;
          }
        }
      }
    }
  }
  FUN_00403287(uStackY_248,&LAB_00402cd4,uVar11,uVar8,uVar6,pcVar13);
  uVar8 = extraout_EDX_04;
LAB_0040859d:
  if (local_21c != (int *)0x0) {
    pcVar2 = *(code **)(*local_21c + 8);
    (*(code *)PTR_guard_check_icall_0040b220)(local_21c);
    (*pcVar2)();
    uVar8 = extraout_EDX_05;
  }
  if (local_220 != (IMoniker *)0x0) {
    p_Var3 = local_220->lpVtbl->Release;
    pIVar10 = local_220;
    (*(code *)PTR_guard_check_icall_0040b220)();
    (*p_Var3)(pIVar10);
    uVar8 = extraout_EDX_06;
  }
  if (local_214 != (IBindCtx *)0x0) {
    p_Var4 = local_214->lpVtbl->Release;
    pIVar12 = local_214;
    (*(code *)PTR_guard_check_icall_0040b220)();
    (*p_Var4)(pIVar12);
    uVar8 = extraout_EDX_07;
  }
  if (local_218 != (LPOLESTR)0x0) {
    CoTaskMemFree(local_218);
    uVar8 = extraout_EDX_08;
  }
  FUN_00408990(local_c ^ (uint)&stack0xfffffffc,uVar8);
  return;
}



/* Function: FUN_00408619 */

void FUN_00408619(undefined4 param_1,undefined4 param_2)

{
  ResolveDelayLoadedAPI
            (0x400000,param_1,DAT_00402ce4,DelayLoadFailureHook_exref,param_2,DAT_00402ce4);
  return;
}



/* Function: FUN_00408650 */

undefined4 FUN_00408650(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00408910();
  DAT_0040a178 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_00408be4(2);
  __set_app_type(iVar2);
  DAT_0040a558 = 0xffffffff;
  DAT_0040a55c = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_0040a18c;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_0040a180;
  FUN_00408c40();
  if (DAT_0040a0c0 == 0) {
    __setusermatherr(FUN_00408c40);
  }
  FUN_00408e47();
  return 0;
}



/* Function: FUN_004086c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004086c0(void)

{
  _DAT_0040a17c = DAT_0040a188;
  _DAT_0040a174 =
       __wgetmainargs((int *)&DAT_0040a168,(wchar_t ***)&DAT_0040a16c,(wchar_t ***)&DAT_0040a170,
                      DAT_0040a184,(_startupinfo *)&DAT_0040a17c);
  return;
}



/* Function: FUN_004086f9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD FUN_004086f9(void)

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
  
  local_8 = &DAT_00409c10;
  uStack_c = 0x408705;
  local_20 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = (undefined *)0x0;
  iVar6 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar5 = 0;
    LOCK();
    iVar3 = iVar6;
    if (DAT_0040a550 != 0) {
      iVar5 = DAT_0040a550;
      iVar3 = DAT_0040a550;
    }
    DAT_0040a550 = iVar3;
    UNLOCK();
    if (iVar5 == 0) goto LAB_0040874e;
    if (iVar5 == iVar6) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_0040874e:
  if (DAT_0040a554 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0040a554 == 0) {
    DAT_0040a554 = 1;
    iVar6 = FUN_004088d9((undefined4 *)&DAT_004017bc,(undefined4 *)&DAT_004017c8);
    if (iVar6 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_0040a164 = 1;
  }
  if (DAT_0040a554 == 1) {
    initterm(&DAT_004017a0,&DAT_004017b8);
    DAT_0040a554 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_0040a550 = 0;
    UNLOCK();
  }
  if ((DAT_0040a560 != (code *)0x0) &&
     (BVar7 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0040a560), pcVar2 = DAT_0040a560, BVar7 != 0
     )) {
    (*(code *)PTR_guard_check_icall_0040b220)(0,2,0);
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
      if (uVar4 == 0) goto LAB_00408830;
      if (uVar8 == 0) {
        while ((uVar4 != 0 && (uVar4 < 0x21))) {
          local_24 = local_24 + 1;
          uVar4 = *local_24;
        }
LAB_00408830:
        DAT_0040a160 = FUN_004043df((HINSTANCE)&IMAGE_DOS_HEADER_00400000);
        if (DAT_0040a178 == 0) {
                    /* WARNING: Subroutine does not return */
          exit(DAT_0040a160);
        }
        if (DAT_0040a164 == 0) {
          _cexit();
          ExceptionList = local_14;
          return DAT_0040a160;
        }
        ExceptionList = local_14;
        return DAT_0040a160;
      }
    }
    if (uVar4 == 0x22) {
      uVar8 = (uint)(uVar8 == 0);
      local_20 = uVar8;
    }
    local_24 = local_24 + 1;
  } while( true );
}



/* Function: FUN_004088d9 */

void __cdecl FUN_004088d9(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_0040b220)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_00408910 */

bool FUN_00408910(void)

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
  FUN_00408da9();
  FUN_004086f9();
  return;
}



/* Function: FUN_00408990 */

void __fastcall FUN_00408990(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_0040a100) {
    return;
  }
  FUN_00408f2b(param_1,param_2);
  return;
}



/* Function: FUN_004089a6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

_onexit_t __cdecl FUN_004089a6(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 local_24;
  int local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00409c30;
  uStack_c = 0x4089b2;
  local_20[0] = DAT_0040a55c;
  if (DAT_0040a55c == -1) {
    (*(code *)PTR_guard_check_icall_0040b220)();
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DAT_0040a55c;
    local_24 = DAT_0040a558;
    p_Var1 = (_onexit_t)__dllonexit(param_1,local_20,&local_24);
    DAT_0040a55c = local_20[0];
    DAT_0040a558 = local_24;
    local_8 = (undefined *)0xfffffffe;
    FUN_00408a40();
  }
  ExceptionList = local_14;
  return p_Var1;
}



/* Function: FUN_00408a40 */

void FUN_00408a40(void)

{
  _unlock(8);
  return;
}



/* Function: FUN_00408a4f */

int __cdecl FUN_00408a4f(_onexit_t param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = FUN_004089a6(param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* Function: FUN_00408a6c */

void FUN_00408a6c(size_t param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00409af6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00409089(param_1);
  FUN_00408ab4();
  return;
}



/* Function: Catch_All@00408aa7 */

undefined * Catch_All_00408aa7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  return &DAT_00408ab1;
}



/* Function: FUN_00408ab4 */

void FUN_00408ab4(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* Function: operator_delete */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00408acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* Function: FUN_00408adb */

void FUN_00408adb(size_t param_1)

{
  FUN_00408a6c(param_1);
  return;
}



/* Function: purecall */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* Function: FUN_00408b00 */

undefined4 FUN_00408b00(int *param_1)

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



/* Function: FUN_00408b50 */

undefined4 FUN_00408b50(void)

{
  SetUnhandledExceptionFilter(FUN_00408b00);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00408b70 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00408b70(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00408be4 */

undefined4 __cdecl FUN_00408be4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00408b70(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00408c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00408c40 */

undefined4 FUN_00408c40(void)

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
  
  pcStack_10 = FUN_00408ed0;
  local_14 = ExceptionList;
  local_c = DAT_0040a100 ^ 0x409cc8;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00408d70((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00408d70 */

bool __cdecl FUN_00408d70(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00408da9 */

void FUN_00408da9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_0040a100 == 0xbb40e64e) || ((DAT_0040a100 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_0040a100 & 0xffff0000, DAT_0040a100 = local_8, uVar1 == 0)) {
      DAT_0040a100 = 0xbb40e64f;
    }
  }
  DAT_0040a140 = ~DAT_0040a100;
  return;
}



/* Function: FUN_00408e47 */

void FUN_00408e47(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408e60. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040a100 ^ (uint)&param_2;
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



/* Function: FUN_00408ed0 */

void __cdecl
FUN_00408ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_0040a100,FUN_00408990,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00408efb */

void __cdecl FUN_00408efb(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00408f2b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00408f2b(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_0040a2a0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040a2a4 = &stack0x00000004;
  _DAT_0040a1e0 = 0x10001;
  _DAT_0040a190 = 0xc0000409;
  _DAT_0040a194 = 1;
  _DAT_0040a1a0 = 3;
  DAT_0040a1a4 = 2;
  DAT_0040a1a8 = DAT_0040a100;
  DAT_0040a1ac = DAT_0040a140;
  uStack_c = DAT_0040a100;
  uStack_8 = DAT_0040a140;
  _DAT_0040a19c = unaff_retaddr;
  _DAT_0040a26c = in_GS;
  _DAT_0040a270 = in_FS;
  _DAT_0040a274 = in_ES;
  _DAT_0040a278 = in_DS;
  _DAT_0040a27c = unaff_EDI;
  _DAT_0040a280 = unaff_ESI;
  _DAT_0040a284 = unaff_EBX;
  _DAT_0040a288 = param_2;
  _DAT_0040a28c = param_1;
  _DAT_0040a290 = in_EAX;
  _DAT_0040a294 = unaff_EBP;
  DAT_0040a298 = unaff_retaddr;
  _DAT_0040a29c = in_CS;
  _DAT_0040a2a8 = in_SS;
  FUN_00408efb((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: _lock */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040903f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* Function: _unlock */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0040904b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* Function: __dllonexit */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040906f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: FUN_00409089 */

void __cdecl FUN_00409089(size_t param_1)

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
  FUN_00409510();
  return;
}



/* Function: FUN_004090b8 */

void __cdecl FUN_004090b8(size_t param_1)

{
  int iVar1;
  exception aeStack_14 [8];
  undefined4 uStack_c;
  
  if (param_1 != 0) {
    uStack_c = 0x4090cc;
    iVar1 = FUN_00409089(param_1);
    if (iVar1 == 0) {
      FUN_00409147(aeStack_14);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(aeStack_14,(ThrowInfo *)&DAT_00409d94);
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
  FUN_00409633(this,(undefined4 *)param_1,uVar1);
  return this;
}



/* Function: FUN_00409120 */

exception * __thiscall FUN_00409120(void *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401008;
  return (exception *)this;
}



/* Function: FUN_00409147 */

exception * __fastcall FUN_00409147(exception *param_1)

{
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00409b19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = "bad allocation";
  exception::exception(param_1,&local_14,1);
  *(undefined ***)param_1 = &PTR_FUN_00401008;
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_004091b0 */

exception * __thiscall FUN_004091b0(void *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_00401010;
  return (exception *)this;
}



/* Function: FUN_004091d7 */

exception * __thiscall FUN_004091d7(void *this,char *param_1)

{
  char *local_8;
  
  local_8 = param_1;
  exception::exception((exception *)this,&local_8);
  *(undefined ***)this = &PTR_FUN_00401010;
  return (exception *)this;
}



/* Function: FUN_00409210 */

void __fastcall FUN_00409210(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00401008;
  exception::~exception(param_1);
  return;
}



/* Function: FUN_00409230 */

void __fastcall FUN_00409230(exception *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004099dc. Too many branches */
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



/* Function: FUN_00409270 */

undefined4 * __thiscall FUN_00409270(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401018;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004092a0 */

exception * __thiscall FUN_004092a0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00401008;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* Function: FUN_004092d0 */

exception * __thiscall FUN_004092d0(void *this,byte param_1)

{
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* Function: FUN_004092f7 */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __thiscall FUN_004092f7(void *this,uint param_1)

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
  FUN_004090b8(param_1 + 1);
  FUN_0040938d();
  return;
}



/* Function: Catch_All@00409360 */

undefined * Catch_All_00409360(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_004090b8(*(int *)(unaff_EBP + 8) + 1);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  return &DAT_00409381;
}



/* Function: FUN_0040938d */

/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0040938d(void)

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
  FUN_004094c2(unaff_EDI,'\x01',0);
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *unaff_EDI = *(undefined4 *)(unaff_EBP + -0x14);
  *unaff_EBX = unaff_ESI;
  FUN_004093f4(unaff_EDI,iVar1);
  return;
}



/* Function: Catch_All@004093d3 */

void Catch_All_004093d3(void)

{
  int unaff_EBP;
  
  FUN_004094c2(*(void **)(unaff_EBP + -0x18),'\x01',0);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* Function: FUN_004093f4 */

void __thiscall FUN_004093f4(void *this,int param_1)

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



/* Function: FUN_00409419 */

bool __thiscall FUN_00409419(void *this,uint param_1,char param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_1 != 0xffffffff) {
    if (*(uint *)((int)this + 0x14) < param_1) {
      FUN_004092f7(this,param_1);
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
      FUN_004094c2(this,'\x01',uVar3);
    }
    return param_1 != 0;
  }
  FUN_00409535();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}



/* Function: FUN_00409481 */

uint __thiscall FUN_00409481(void *this,undefined4 *param_1)

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



/* Function: FUN_004094c2 */

void __thiscall FUN_004094c2(void *this,char param_1,size_t param_2)

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
  FUN_004093f4(this,param_2);
  return;
}



/* Function: FUN_00409510 */

void FUN_00409510(void)

{
  exception local_10 [12];
  
  FUN_00409147(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00409d94);
}



/* Function: FUN_00409535 */

void FUN_00409535(void)

{
  code *pcVar1;
  
  FUN_00409546("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00409546 */

void FUN_00409546(char *param_1)

{
  undefined1 local_10 [12];
  
  FUN_004091d7(local_10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00409e04);
}



/* Function: FUN_0040956e */

void FUN_0040956e(char *param_1)

{
  undefined1 local_10 [12];
  
  FUN_004091d7(local_10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00409e40);
}



/* Function: FUN_00409596 */

void FUN_00409596(void)

{
  code *pcVar1;
  
  FUN_0040956e("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004095a7 */

undefined4 * __thiscall FUN_004095a7(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  void *_Dst;
  undefined4 *puVar3;
  uint _Size;
  
  if ((uint)param_1[4] < param_2) {
    FUN_00409596();
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  _Size = param_1[4] - param_2;
  if (param_3 < _Size) {
    _Size = param_3;
  }
  if ((undefined4 *)this == param_1) {
    FUN_004097a9(this,param_2 + _Size);
    FUN_004097d2(this,0,param_2);
  }
  else {
    bVar2 = FUN_00409419(this,_Size,'\0');
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
      FUN_004093f4(this,_Size);
    }
  }
  return (undefined4 *)this;
}



/* Function: FUN_00409633 */

undefined4 * __thiscall FUN_00409633(void *this,undefined4 *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  
  uVar2 = FUN_00409481(this,param_1);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_00409419(this,param_2,'\0');
    if (bVar1) {
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *this;
      }
      if (param_2 != 0) {
        memcpy(pvVar3,param_1,param_2);
      }
      FUN_004093f4(this,param_2);
    }
  }
  else {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar3 = *this;
    }
    this = FUN_004095a7(this,(undefined4 *)this,(int)param_1 - (int)pvVar3,param_2);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004096b0 */

int * FUN_004096b0(int *param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00409b5f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0040993c(param_2);
  *param_1 = param_2;
  if (iVar1 == 0) {
    param_1[1] = (int)&PTR_PTR_0040a008;
  }
  else {
    param_1[1] = (int)&PTR_PTR_0040a000;
  }
  ExceptionList = local_10;
  return param_1;
}



/* Function: FUN_00409720 */

void __thiscall FUN_00409720(void *this,undefined4 *param_1,undefined4 param_2)

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



/* Function: FUN_00409770 */

void __thiscall FUN_00409770(void *this,undefined4 param_1,error_condition *param_2)

{
  code *pcVar1;
  error_condition *this_00;
  void *local_c;
  void *pvStack_8;
  
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(*this + 0xc);
  local_c = this;
  pvStack_8 = this;
  (*(code *)PTR_guard_check_icall_0040b220)(&local_c,param_1);
  this_00 = (error_condition *)(*pcVar1)();
  std::error_condition::operator==(this_00,param_2);
  return;
}



/* Function: FUN_004097a9 */

void * __thiscall FUN_004097a9(void *this,uint param_1)

{
  code *pcVar1;
  void *pvVar2;
  
  if (param_1 <= *(uint *)((int)this + 0x10)) {
    FUN_004093f4(this,param_1);
    return this;
  }
  FUN_00409596();
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}



/* Function: FUN_004097d2 */

undefined4 * __thiscall FUN_004097d2(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  size_t _Size;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
    FUN_00409596();
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
      FUN_004093f4(this,uVar1 - param_2);
    }
  }
  else {
    FUN_004093f4(this,param_1);
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



/* Function: FUN_00409870 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_00409870(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0040993c(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_004098a0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_004098a0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  if (param_2 == 1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (param_1,"iostream stream error");
  }
  else {
    FUN_00409870(param_1,param_2);
  }
  return param_1;
}



/* Function: FUN_004098e0 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_004098e0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)FUN_0040996e(param_2);
  pcVar2 = "unknown error";
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,pcVar2);
  return param_1;
}



/* Function: FUN_00409910 */

char * FUN_00409910(void)

{
  return "generic";
}



/* Function: FUN_00409920 */

char * FUN_00409920(void)

{
  return "iostream";
}



/* Function: FUN_00409930 */

char * FUN_00409930(void)

{
  return "system";
}



/* Function: FUN_0040993c */

int __cdecl FUN_0040993c(int param_1)

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



/* Function: FUN_0040996e */

int __cdecl FUN_0040996e(int param_1)

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
  
                    /* WARNING: Could not recover jumptable at 0x004099a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,char **param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004099ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,char **param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004099b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1,param_2);
  return;
}



/* Function: exception */

void __thiscall exception::exception(exception *this,exception *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004099d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  exception(this,param_1);
  return;
}



/* Function: ~exception */

void __thiscall exception::~exception(exception *this)

{
                    /* WARNING: Could not recover jumptable at 0x004099dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~exception(this);
  return;
}



/* Function: what */

char * __thiscall exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004099f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* Function: _CxxThrowException */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x004099fc. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040a100 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memmove */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: FUN_00409a80 */

type_info * __thiscall FUN_00409a80(void *this,byte param_1)

{
  type_info::~type_info((type_info *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (type_info *)this;
}



/* Function: DelayLoad_CreateBindCtx */

void DelayLoad_CreateBindCtx(void)

{
  FUN_00409ab2();
  return;
}



/* Function: FUN_00409ab2 */

void FUN_00409ab2(void)

{
  undefined4 in_EAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00408619(&ImgDelayDescr_00409e7c,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x00409ac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: DelayLoad_MkParseDisplayName */

void DelayLoad_MkParseDisplayName(void)

{
  FUN_00409ab2();
  return;
}



/* Function: memcmp */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: FUN_00409b90 */

void FUN_00409b90(void)

{
  if (DAT_0040a538 != '\0') {
    EtwEventUnregister(DAT_0040a530,DAT_0040a534);
  }
  return;
}



/* Function: FUN_00409bc0 */

void FUN_00409bc0(void)

{
  PTR_PTR_0040a000 = (undefined *)&PTR_FUN_00401018;
  return;
}



/* Function: FUN_00409be0 */

void FUN_00409be0(void)

{
  PTR_PTR_0040a004 = (undefined *)&PTR_FUN_00401018;
  return;
}



/* Function: FUN_00409c00 */

void FUN_00409c00(void)

{
  PTR_PTR_0040a008 = (undefined *)&PTR_FUN_00401018;
  return;
}



