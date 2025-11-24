/* Function: FUN_00401ff0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401ff0(void)

{
  FUN_00404833();
  _DAT_00409498 = &PTR_FUN_00401020;
  FUN_00407b9c(FUN_00408430);
  return;
}



/* Function: FUN_00402020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402020(void)

{
  int iVar1;
  
  iVar1 = FUN_004021ef((LPCRITICAL_SECTION)&DAT_0040905c);
  if (iVar1 < 0) {
    DAT_00409518 = 1;
  }
  else {
    _DAT_0040904c = 0x28;
  }
  FUN_00407b9c(FUN_00408440);
  return;
}



/* Function: FUN_00402060 */

void FUN_00402060(void)

{
  FUN_00407250();
  FUN_00407b9c(FUN_00408450);
  return;
}



/* Function: FUN_00402080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402080(void)

{
  int iVar1;
  
  iVar1 = FUN_004021ef((LPCRITICAL_SECTION)&DAT_004090d0);
  if (iVar1 < 0) {
    _DAT_004090cc = 0;
    DAT_00409518 = 1;
  }
  FUN_00407b9c(FUN_00408460);
  return;
}



/* Function: FUN_004020b0 */

undefined4 __fastcall FUN_004020b0(void *param_1,uint param_2,void *param_3,uint param_4)

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



/* Function: FUN_00402137 */

undefined4 __fastcall FUN_00402137(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00402162 */

int __fastcall FUN_00402162(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  if (param_1 == (short *)0x0) {
    return 0;
  }
  psVar1 = param_1 + 1;
  do {
    sVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (sVar2 != 0);
  return (int)param_1 - (int)psVar1 >> 1;
}



/* Function: FUN_00402184 */

void __fastcall FUN_00402184(DWORD param_1)

{
  RaiseException(param_1,1,0,(ULONG_PTR *)0x0);
  return;
}



/* Function: FUN_00402198 */

void __fastcall FUN_00402198(int param_1)

{
  DWORD DVar1;
  
  DVar1 = 0xc000001d;
  if (param_1 == -0x7ff8fff2) {
    DVar1 = 0xc0000017;
  }
  FUN_00402184(DVar1);
  return;
}



/* Function: FUN_004021b6 */

undefined4 __fastcall FUN_004021b6(int param_1)

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
  uVar1 = FUN_00402198(iVar2);
  return uVar1;
}



/* Function: FUN_004021ef */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __fastcall FUN_004021ef(LPCRITICAL_SECTION param_1)

{
  undefined4 local_14;
  
  InitializeCriticalSection(param_1);
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_00402246 */

DWORD FUN_00402246(void)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetLastError();
  uVar2 = DVar1 & 0xffff | 0x80070000;
  if ((int)DVar1 < 1) {
    uVar2 = DVar1;
  }
  return uVar2;
}



/* Function: FUN_00402263 */

uint __fastcall FUN_00402263(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xffff | 0x80070000;
  if ((int)param_1 < 1) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Function: FUN_00402277 */

int __fastcall FUN_00402277(undefined4 *param_1)

{
  code *pcVar1;
  _func_5023 *p_Var2;
  int iVar3;
  LPUNKNOWN This;
  LPUNKNOWN local_8;
  
  local_8 = (LPUNKNOWN)0x0;
  pcVar1 = (code *)param_1[2];
  if (pcVar1 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    (*(code *)PTR_guard_check_icall_0040a1e4)(param_1[3],&DAT_00401900,&local_8);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      iVar3 = CoRegisterClassObject((IID *)*param_1,local_8,4,0,param_1 + 5);
    }
    if (local_8 != (IUnknown *)0x0) {
      p_Var2 = local_8->lpVtbl->Release;
      This = local_8;
      (*(code *)PTR_guard_check_icall_0040a1e4)();
      (*p_Var2)(This);
    }
  }
  return iVar3;
}



/* Function: FUN_004022e6 */

void __fastcall FUN_004022e6(int *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  
  if (*param_1 != 0) {
    piVar4 = (int *)param_1[2];
    if (piVar4 < (int *)param_1[3]) {
      do {
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 0x10);
          if (piVar2 != (int *)0x0) {
            pcVar3 = *(code **)(*piVar2 + 8);
            (*(code *)PTR_guard_check_icall_0040a1e4)(piVar2);
            (*pcVar3)();
          }
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 < (int *)param_1[3]);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00402345 */

void FUN_00402345(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = 0;
  piVar4 = (int *)PTR_DAT_00409058;
  piVar5 = (int *)PTR_PTR_00409054;
  if (PTR_PTR_00409054 < PTR_DAT_00409058) {
    do {
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 != (undefined4 *)0x0) {
        pcVar2 = (code *)puVar1[7];
        (*(code *)PTR_guard_check_icall_0040a1e4)();
        piVar4 = (int *)(*pcVar2)();
        iVar3 = FUN_00404224((GUID *)*puVar1,piVar4,0);
        if (iVar3 < 0) {
          return;
        }
        pcVar2 = (code *)puVar1[1];
        (*(code *)PTR_guard_check_icall_0040a1e4)(0);
        iVar3 = (*pcVar2)();
        piVar4 = (int *)PTR_DAT_00409058;
        if (iVar3 < 0) {
          return;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 < piVar4);
    if (iVar3 < 0) {
      return;
    }
  }
  FUN_0040402e(PTR_IMAGE_DOS_HEADER_00409050);
  return;
}



/* Function: FUN_004023b7 */

void FUN_004023b7(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)PTR_DAT_00409058;
  piVar3 = (int *)PTR_PTR_00409054;
  if (PTR_PTR_00409054 < PTR_DAT_00409058) {
    do {
      if (*piVar3 != 0) {
        pcVar1 = *(code **)(*piVar3 + 0x20);
        (*(code *)PTR_guard_check_icall_0040a1e4)(param_1);
        (*pcVar1)();
        piVar2 = (int *)PTR_DAT_00409058;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 < piVar2);
  }
  return;
}



/* Function: FUN_004023fb */

void __fastcall FUN_004023fb(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  
  piVar1 = (int *)(param_1 + 4);
  if (*piVar1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      piVar3 = piVar1;
      if (param_1 == 0) {
        piVar3 = (int *)0x0;
      }
      FUN_0040458e((int)piVar3);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    piVar3 = *(int **)(param_1 + 0x28);
    if (piVar3 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar3 + 8);
      (*(code *)PTR_guard_check_icall_0040a1e4)(piVar3);
      (*pcVar2)();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *piVar1 = 0;
  }
  return;
}



/* Function: FUN_00402450 */

int __fastcall FUN_00402450(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* Function: FUN_00402460 */

undefined4 __fastcall FUN_00402460(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Function: FUN_00402470 */

HRESULT __thiscall FUN_00402470(void *this,undefined4 *param_1)

{
  LPVOID *ppv;
  code *pcVar1;
  HRESULT HVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    HVar2 = -0x7fffbffd;
  }
  else {
    HVar2 = 0;
    ppv = (LPVOID *)((int)this + 0x28);
    if ((*ppv != (LPVOID)0x0) ||
       (HVar2 = CoCreateInstance((IID *)&DAT_00401910,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401920,ppv),
       -1 < HVar2)) {
      *param_1 = *ppv;
                    /* WARNING: Load size is inaccurate */
      pcVar1 = *(code **)(**ppv + 4);
      (*(code *)PTR_guard_check_icall_0040a1e4)(*ppv);
      (*pcVar1)();
    }
  }
  return HVar2;
}



/* Function: FUN_004024ce */

LPWSTR __fastcall FUN_004024ce(LPWSTR param_1,LPCWSTR param_2)

{
  LPCWSTR lpsz;
  LPWSTR pWVar1;
  
  do {
    if ((param_1 == (LPCWSTR)0x0) || (*param_1 == L'\0')) {
      return (LPWSTR)0x0;
    }
    lpsz = param_2;
    if (param_2 != (LPCWSTR)0x0) {
      do {
        if (*lpsz == L'\0') break;
        if (*param_1 == *lpsz) {
          pWVar1 = CharNextW(param_1);
          return pWVar1;
        }
        lpsz = CharNextW(lpsz);
      } while (lpsz != (LPWSTR)0x0);
    }
    param_1 = CharNextW(param_1);
  } while( true );
}



/* Function: FUN_0040251d */

int __fastcall FUN_0040251d(LPWSTR param_1,LPWSTR param_2)

{
  ushort uVar1;
  LPWSTR pWVar2;
  LPWSTR pWVar3;
  ushort uVar4;
  
  pWVar2 = CharUpperW((LPWSTR)(uint)(ushort)*param_1);
  uVar4 = (ushort)pWVar2;
  pWVar3 = CharUpperW((LPWSTR)(uint)(ushort)*param_2);
  uVar1 = (ushort)pWVar3;
  if (uVar4 != 0) {
    do {
      uVar1 = (ushort)pWVar3;
      uVar4 = (ushort)pWVar2;
      if (uVar4 != uVar1) goto LAB_00402596;
      if ((uVar4 == 0x20) || (uVar4 == 9)) break;
      param_1 = CharNextW(param_1);
      param_2 = CharNextW(param_2);
      pWVar2 = CharUpperW((LPWSTR)(uint)(ushort)*param_1);
      uVar4 = (ushort)pWVar2;
      pWVar3 = CharUpperW((LPWSTR)(uint)(ushort)*param_2);
      uVar1 = (ushort)pWVar3;
    } while (uVar4 != 0);
    if (uVar4 != 0) {
LAB_00402596:
      if ((uVar4 != 0x20) && (uVar4 != 9)) goto LAB_004025af;
    }
  }
  if ((uVar1 == 0) || ((uVar1 == 0x20 || (uVar1 == 9)))) {
    return 0;
  }
LAB_004025af:
  return (-(uint)(uVar4 < uVar1) & 0xfffffffe) + 1;
}



/* Function: FUN_004025c6 */

void __thiscall FUN_004025c6(void *this,undefined4 param_1)

{
  code *pcVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  
  if ((*(int *)((int)this + 4) == 0) && (*(int *)((int)this + 8) == 0)) {
    pHVar2 = GetModuleHandleW(L"API-MS-Win-Core-LocalRegistry-L1-1-0.dll");
    if (pHVar2 == (HMODULE)0x0) {
      pHVar2 = LoadLibraryExW(L"advapi32.dll",(HANDLE)0x0,0);
      if (pHVar2 != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(pHVar2,"RegDeleteKeyW");
        *(FARPROC *)((int)this + 8) = pFVar3;
      }
    }
    else {
      pFVar3 = GetProcAddress(pHVar2,"RegDeleteKeyExW");
      *(FARPROC *)((int)this + 4) = pFVar3;
    }
  }
  pcVar1 = *(code **)((int)this + 4);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = *(code **)((int)this + 8);
    if (pcVar1 == (code *)0x0) {
      GetLastError();
    }
    else {
                    /* WARNING: Load size is inaccurate */
      (*(code *)PTR_guard_check_icall_0040a1e4)(*this,param_1);
      (*pcVar1)();
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    (*(code *)PTR_guard_check_icall_0040a1e4)(*this,param_1,0,0);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00402661 */

LSTATUS __thiscall FUN_00402661(void *this,HKEY param_1,LPCWSTR param_2,REGSAM param_3)

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



/* Function: FUN_004026a9 */

void __thiscall FUN_004026a9(void *this,LPCWSTR param_1,short *param_2)

{
  short sVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  DWORD cbData;
  short *psVar5;
  void *pvVar6;
  
  if (param_2 != (short *)0x0) {
    cbData = 0;
    psVar5 = param_2;
    do {
      psVar3 = psVar5;
      do {
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      iVar4 = ((int)psVar3 - (int)(psVar5 + 1) >> 1) + 1;
      psVar5 = psVar5 + iVar4;
      cbData = cbData + iVar4 * 2;
    } while (iVar4 != 1);
                    /* WARNING: Load size is inaccurate */
    RegSetValueExW(*this,param_1,0,7,(BYTE *)param_2,cbData);
    return;
  }
  pvVar6 = this;
  FUN_00402198(-0x7fffbffb);
  pcVar2 = (code *)swi(3);
  (*pcVar2)(this,pvVar6);
  return;
}



/* Function: FUN_00402714 */

void __thiscall FUN_00402714(void *this,LPCWSTR param_1)

{
  int iVar1;
  LSTATUS LVar2;
  _FILETIME local_228;
  HKEY local_220;
  undefined4 local_21c;
  undefined4 local_218;
  DWORD local_214;
  WCHAR local_210 [258];
  uint local_c;
  
  local_c = DAT_00409080 ^ (uint)&stack0xfffffffc;
  local_220 = (HKEY)0x0;
  local_21c = 0;
                    /* WARNING: Load size is inaccurate */
  local_218 = 0;
  iVar1 = FUN_00402661(&local_220,*this,param_1,0x2001f);
  do {
    if (iVar1 != 0) {
LAB_004027c9:
      if (local_220 != (HKEY)0x0) {
        RegCloseKey(local_220);
      }
      FUN_004076f0(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    local_214 = 0x100;
    LVar2 = RegEnumKeyExW(local_220,0,local_210,&local_214,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                          &local_228);
    if (LVar2 != 0) {
      if (local_220 != (HKEY)0x0) {
        RegCloseKey(local_220);
        local_220 = (HKEY)0x0;
      }
      FUN_004025c6(this,param_1);
      goto LAB_004027c9;
    }
    iVar1 = FUN_00402714(&local_220,local_210);
  } while( true );
}



/* Function: FUN_004027f7 */

uint __thiscall FUN_004027f7(void *this,short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  short *psVar5;
  uint uVar6;
  void *local_1c;
  void *local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  void *local_8;
  
  if ((param_1 == (short *)0x0) || (param_2 == (short *)0x0)) {
    return 0;
  }
  uVar6 = 0;
  psVar5 = param_1;
  do {
    sVar1 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar1 != 0);
  local_10 = ((int)psVar5 - (int)(param_1 + 1) >> 1) * 2 + 2;
  local_1c = (void *)FUN_004073a0(-(uint)((int)((ulonglong)local_10 * 2 >> 0x20) != 0) |
                                  (uint)((ulonglong)local_10 * 2));
  local_c = local_1c;
  iVar2 = FUN_00402162(param_2);
  local_14 = iVar2 * 2 + 2;
  pvVar3 = (void *)FUN_004073a0(-(uint)((int)((ulonglong)local_14 * 2 >> 0x20) != 0) |
                                (uint)((ulonglong)local_14 * 2));
  local_18 = pvVar3;
  local_8 = pvVar3;
  if ((local_c != (void *)0x0) && (pvVar3 != (void *)0x0)) {
    iVar2 = FUN_004020b0(local_c,local_10,param_1,local_10);
    FUN_004021b6(iVar2);
    pvVar3 = local_8;
    iVar2 = FUN_004020b0(local_8,local_14,param_2,local_14);
    FUN_004021b6(iVar2);
    iVar2 = FUN_00404983(this,&local_1c,&local_18);
    if (iVar2 != 0) goto LAB_004028d7;
  }
  uVar6 = 0x8007000e;
LAB_004028d7:
  pvVar4 = (void *)0x0;
  if ((int)uVar6 < 0) {
    pvVar4 = pvVar3;
  }
  o_free(pvVar4);
  pvVar3 = (void *)0x0;
  if ((int)uVar6 < 0) {
    pvVar3 = local_c;
  }
  o_free(pvVar3);
  return ~uVar6 >> 0x1f;
}



/* Function: FUN_0040290b */

undefined4 __fastcall FUN_0040290b(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = param_1[2];
  if (0 < iVar2) {
    do {
      if ((iVar4 < 0) || (iVar2 <= iVar4)) {
LAB_00402952:
        FUN_00402184(0xc000008c);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      o_free(*(undefined4 *)(*param_1 + iVar4 * 4));
      if (param_1[2] <= iVar4) goto LAB_00402952;
      o_free(*(undefined4 *)(param_1[1] + iVar4 * 4));
      iVar2 = param_1[2];
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_0040494d(param_1);
  return 0;
}



/* Function: FUN_00402963 */

undefined4 __thiscall FUN_00402963(void *this,void *param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar2 = param_2 + 1 + *this;
                    /* WARNING: Load size is inaccurate */
  if ((*this < iVar2) && (param_2 < iVar2)) {
    uVar3 = *(uint *)((int)this + 4);
    if ((int)uVar3 <= iVar2) {
      do {
        if (0x3fffffff < (int)uVar3) {
          return 0;
        }
        uVar3 = uVar3 * 2;
      } while ((int)uVar3 <= iVar2);
      if ((int)((ulonglong)uVar3 * 2 >> 0x20) != 0) {
        return 0;
      }
      pvVar1 = CoTaskMemRealloc(*(LPVOID *)((int)this + 8),(SIZE_T)((ulonglong)uVar3 * 2));
      if (pvVar1 == (LPVOID)0x0) {
        return 0;
      }
      *(LPVOID *)((int)this + 8) = pvVar1;
      *(uint *)((int)this + 4) = uVar3;
    }
                    /* WARNING: Load size is inaccurate */
    iVar2 = *this;
    if (((-1 < iVar2) && (iVar2 < (int)uVar3)) && ((int)(uVar3 - iVar2) <= (int)uVar3)) {
      iVar2 = FUN_004020b0((void *)(*(int *)((int)this + 8) + iVar2 * 2),(uVar3 - iVar2) * 2,param_1
                           ,param_2 * 2);
      FUN_004021b6(iVar2);
                    /* WARNING: Load size is inaccurate */
      *(int *)this = *this + param_2;
                    /* WARNING: Load size is inaccurate */
      *(undefined2 *)(*(int *)((int)this + 8) + *this * 2) = 0;
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00402a10 */

undefined4 FUN_00402a10(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0x80004001;
}



/* Function: FUN_00402a30 */

undefined4 FUN_00402a30(void)

{
  return 1;
}



/* Function: FUN_00402a40 */

undefined4 FUN_00402a40(void)

{
  return 0;
}



/* Function: FUN_00402a4b */

void __fastcall FUN_00402a4b(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00401008;
  FUN_00402c80((int)param_1);
  if (*(char *)(param_1 + 10) != '\0') {
    *(undefined1 *)(param_1 + 10) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  FUN_0040290b(param_1 + 1);
  FUN_0040494d(param_1 + 1);
  return;
}



/* Function: FUN_00402a90 */

undefined4 * __thiscall FUN_00402a90(void *this,byte param_1)

{
  FUN_00402a4b((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00407bb9(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00402ac0 */

undefined4 FUN_00402ac0(int param_1,short *param_2,short *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_2 == (short *)0x0) || (param_3 == (short *)0x0)) {
    uVar2 = 0x80070057;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    uVar1 = FUN_004027f7((void *)(param_1 + 4),param_2,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    uVar2 = 0x8007000e;
    if (uVar1 != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Function: FUN_00402b16 */

void FUN_00402b16(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,int param_4)

{
  code *pcVar1;
  longlong lVar2;
  HMODULE hModule;
  HRSRC hResInfo;
  LPCSTR lpMultiByteStr;
  DWORD cbMultiByte;
  uint uVar3;
  int iVar4;
  undefined4 local_41c [2];
  LPWSTR local_414;
  WCHAR local_410 [516];
  uint local_8;
  
  local_8 = DAT_00409080 ^ (uint)&stack0xfffffffc;
  local_41c[0] = 0;
  local_414 = (WCHAR *)0x0;
  hModule = LoadLibraryExW(param_1,(HANDLE)0x0,2);
  if (hModule == (HMODULE)0x0) {
    FUN_00402246();
    goto LAB_00402c38;
  }
  hResInfo = FindResourceExW(hModule,param_3,param_2,0);
  if ((hResInfo == (HRSRC)0x0) ||
     (lpMultiByteStr = (LPCSTR)LoadResource(hModule,hResInfo), lpMultiByteStr == (LPCSTR)0x0)) {
LAB_00402b7a:
    FUN_00402246();
  }
  else {
    cbMultiByte = SizeofResource(hModule,hResInfo);
    if (cbMultiByte + 1 < cbMultiByte) goto LAB_00402c38;
    lVar2 = (ulonglong)(cbMultiByte + 1) * 2;
    uVar3 = (uint)lVar2;
    if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
      FUN_00402198(-0x7ff8ffa9);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar3 < 0x401) {
      local_414 = local_410;
    }
    else {
      FUN_00404c2c(&local_414,uVar3);
    }
    if (local_414 != (LPWSTR)0x0) {
      iVar4 = MultiByteToWideChar(3,0,lpMultiByteStr,cbMultiByte,local_414,cbMultiByte);
      if (iVar4 == 0) goto LAB_00402b7a;
      local_414[iVar4] = L'\0';
      FUN_004035a4(local_41c,local_414,param_4);
    }
  }
  FreeLibrary(hModule);
LAB_00402c38:
  if (local_414 != local_410) {
    FUN_00404b35(&local_414);
  }
  FUN_004076f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00402c80 */

undefined4 FUN_00402c80(int param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = FUN_0040290b((int *)(param_1 + 4));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}



/* Function: FUN_00402cb3 */

undefined4 __thiscall FUN_00402cb3(void *this,LPCWSTR param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  uVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      iVar2 = lstrcmpiW(*(LPCWSTR *)(*(int *)((int)this + 4) + iVar4 * 4),param_1);
      if (iVar2 == 0) {
        if (iVar4 != -1) {
          if ((iVar4 < 0) || (*(int *)((int)this + 0xc) <= iVar4)) {
            FUN_00402184(0xc000008c);
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          uVar3 = *(undefined4 *)(*(int *)((int)this + 8) + iVar4 * 4);
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0xc));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  return uVar3;
}



/* Function: FUN_00402d23 */

uint __fastcall FUN_00402d23(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 < 0x62) {
    if (uVar2 != 0x61) {
      if (uVar2 < 0x39) {
        if (uVar2 != 0x38) {
          uVar1 = uVar2 - 0x30;
          switch(uVar2) {
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
            break;
          default:
            goto switchD_00402d45_default;
          }
        }
      }
      else if (uVar2 != 0x39) {
        if (((uVar2 == 0x41) || (uVar2 == 0x42)) ||
           ((uVar2 == 0x43 ||
            (((uVar2 == 0x44 || (uVar2 == 0x45)) || (uVar1 = uVar2 - 0x46, uVar1 == 0)))))) {
          return uVar2 - 0x37;
        }
switchD_00402d45_default:
        return uVar1 & 0xffffff00;
      }
      return uVar2 - 0x30;
    }
  }
  else if ((((uVar2 != 0x62) && (uVar2 != 99)) && (uVar2 != 100)) &&
          ((uVar2 != 0x65 && (uVar1 = uVar2 - 0x66, uVar1 != 0)))) goto switchD_00402d45_default;
  return uVar2 - 0x57;
}



/* Function: FUN_00402da9 */

LPCWSTR __fastcall FUN_00402da9(LPCWSTR param_1,WCHAR param_2)

{
  WCHAR WVar1;
  LPCWSTR pWVar2;
  
  if (param_1 == (LPCWSTR)0x0) {
    pWVar2 = (LPCWSTR)0x0;
  }
  else {
    WVar1 = *param_1;
    while ((pWVar2 = (LPCWSTR)0x0, WVar1 != L'\0' && (pWVar2 = param_1, WVar1 != param_2))) {
      param_1 = CharNextW(param_1);
      WVar1 = *param_1;
    }
  }
  return pWVar2;
}



/* Function: FUN_00402deb */

void __fastcall FUN_00402deb(undefined4 *param_1)

{
  WCHAR WVar1;
  LPWSTR pWVar2;
  
  while( true ) {
    WVar1 = *(LPCWSTR)*param_1;
    if ((((WVar1 != L'\t') && (WVar1 != L'\n')) && (WVar1 != L'\r')) && (WVar1 != L' ')) break;
    pWVar2 = CharNextW((LPCWSTR)*param_1);
    *param_1 = pWVar2;
  }
  return;
}



/* Function: FUN_00402e1c */

undefined4 __thiscall FUN_00402e1c(void *this,undefined2 *param_1)

{
  WCHAR WVar1;
  LPCWSTR pWVar2;
  LPWSTR pWVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  FUN_00402deb((undefined4 *)this);
                    /* WARNING: Load size is inaccurate */
  pWVar2 = *this;
  WVar1 = *pWVar2;
  if (WVar1 != L'\0') {
    puVar6 = param_1;
    if (WVar1 == L'\'') {
      pWVar2 = CharNextW(pWVar2);
      *(LPCWSTR *)this = pWVar2;
      if (*pWVar2 == L'\0') {
LAB_00402ee3:
                    /* WARNING: Load size is inaccurate */
        if ((**this != 0) && (puVar6 < param_1 + 0x1000)) {
          *puVar6 = 0;
                    /* WARNING: Load size is inaccurate */
          pWVar3 = CharNextW(*this);
          *(LPWSTR *)this = pWVar3;
          return 0;
        }
      }
      else {
        do {
          if ((*pWVar2 == L'\'') && (pWVar3 = CharNextW(pWVar2), *pWVar3 != L'\''))
          goto LAB_00402ee3;
                    /* WARNING: Load size is inaccurate */
          pWVar2 = *this;
          if (*pWVar2 == L'\'') {
            pWVar2 = CharNextW(pWVar2);
            *(LPCWSTR *)this = pWVar2;
          }
          pWVar3 = CharNextW(pWVar2);
          *(LPWSTR *)this = pWVar3;
          iVar4 = (int)pWVar3 - (int)pWVar2 >> 1;
          if (param_1 + 0x1000 <= puVar6 + iVar4 + 1) {
            return 0x80020009;
          }
          if (0 < iVar4) {
            iVar5 = (int)pWVar2 - (int)puVar6;
            do {
              *puVar6 = *(undefined2 *)(iVar5 + (int)puVar6);
              puVar6 = puVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
                    /* WARNING: Load size is inaccurate */
          pWVar2 = *this;
        } while (*pWVar2 != L'\0');
      }
    }
    else {
      do {
        if ((((WVar1 == L'\t') || (WVar1 == L'\n')) || (WVar1 == L'\r')) || (WVar1 == L' ')) break;
        pWVar3 = CharNextW(pWVar2);
        *(LPWSTR *)this = pWVar3;
        iVar4 = (int)pWVar3 - (int)pWVar2 >> 1;
        if (param_1 + 0x1000 <= puVar6 + iVar4 + 1) {
          return 0x80020009;
        }
        if (0 < iVar4) {
          iVar5 = (int)pWVar2 - (int)puVar6;
          do {
            *puVar6 = *(undefined2 *)(iVar5 + (int)puVar6);
            puVar6 = puVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
                    /* WARNING: Load size is inaccurate */
        pWVar2 = *this;
        WVar1 = *pWVar2;
      } while (WVar1 != L'\0');
      if (puVar6 < param_1 + 0x1000) {
        *puVar6 = 0;
        return 0;
      }
    }
  }
  return 0x80020009;
}



/* Function: FUN_00402f7d */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00402f7d(void *this,undefined4 *param_1,LPCWSTR param_2,undefined2 *param_3)

{
  short sVar1;
  code *pcVar2;
  longlong lVar3;
  BYTE *pBVar4;
  int iVar5;
  LPWSTR lpsz;
  LPCWSTR lpsz_00;
  uint uVar6;
  short *psVar7;
  uint _Size;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar8;
  WCHAR *pWVar9;
  uint uVar10;
  DWORD dwType;
  undefined4 **lpData;
  DWORD cbData;
  undefined4 *local_221c;
  LPCWSTR local_2218;
  undefined4 *local_2214;
  WCHAR *local_2210;
  WCHAR local_220c [128];
  BYTE *local_210c;
  BYTE local_2108 [256];
  undefined4 local_2008;
  uint local_8;
  
  local_8 = DAT_00409080 ^ (uint)&stack0xfffffffc;
  local_2218 = param_2;
  local_221c = param_1;
  iVar5 = FUN_00402e1c(this,(undefined2 *)&local_2008);
  if (-1 < iVar5) {
    uVar8 = 0;
    while (iVar5 = lstrcmpiW((LPCWSTR)&local_2008,(LPCWSTR)(&PTR_DAT_00401158)[uVar8 * 2]),
          iVar5 != 0) {
      uVar8 = uVar8 + 1;
      if (3 < uVar8) goto LAB_004032e5;
    }
    sVar1 = (&DAT_0040115c)[uVar8 * 4];
    FUN_00402deb((undefined4 *)this);
    iVar5 = FUN_00402e1c(this,(undefined2 *)&local_2008);
    if (iVar5 < 0) goto LAB_004032e5;
    if (sVar1 == 8) {
      psVar7 = (short *)&local_2008;
      do {
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar1 != 0);
      cbData = ((int)psVar7 - ((int)&local_2008 + 2) >> 1) * 2 + 2;
      lpData = (undefined4 **)&local_2008;
      dwType = 1;
LAB_004032ac:
      uVar8 = RegSetValueExW((HKEY)*param_1,local_2218,0,dwType,(BYTE *)lpData,cbData);
    }
    else if (sVar1 == 0x11) {
      psVar7 = (short *)&local_2008;
      do {
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar1 != 0);
      iVar5 = (int)psVar7 - ((int)&local_2008 + 2);
      uVar8 = iVar5 >> 1;
      if ((uVar8 & 1) != 0) goto LAB_004032e5;
      local_210c = (BYTE *)0x0;
      _Size = (int)(uVar8 - (iVar5 >> 0x1f)) >> 1;
      if (_Size < 0x101) {
        local_210c = local_2108;
      }
      else {
        FUN_00404c2c(&local_210c,_Size);
      }
      if (local_210c == (BYTE *)0x0) {
        FUN_00404b35(&local_210c);
        goto LAB_004032e5;
      }
      memset(local_210c,0,_Size);
      local_2214 = (undefined4 *)0x0;
      iVar5 = extraout_ECX;
      if (0 < (int)uVar8) {
        do {
          pBVar4 = local_210c;
          uVar10 = (uint)local_2214 >> 1;
          uVar6 = FUN_00402d23(CONCAT22((short)((uint)iVar5 >> 0x10),
                                        *(undefined2 *)((int)&local_2008 + (int)local_2214 * 2)));
          iVar5 = (extraout_EDX & 1) * -4 + 4;
          pBVar4[uVar10] = pBVar4[uVar10] | (char)uVar6 << ((byte)iVar5 & 0x1f);
          local_2214 = (undefined4 *)((int)local_2214 + 1);
        } while ((int)local_2214 < (int)uVar8);
      }
      uVar8 = RegSetValueExW((HKEY)*local_221c,local_2218,0,3,local_210c,_Size);
      if (local_210c != local_2108) {
        FUN_00404b35(&local_210c);
      }
    }
    else {
      if (sVar1 == 0x13) {
        local_2214 = (undefined4 *)0x0;
        iVar5 = Ordinal_277(&local_2008,0,0,&local_2214);
        if (-1 < iVar5) {
          local_221c = local_2214;
          lpData = &local_221c;
          cbData = 4;
          dwType = 4;
          goto LAB_004032ac;
        }
        goto LAB_004032e5;
      }
      if (sVar1 != 0x4008) goto LAB_004032ca;
      psVar7 = (short *)&local_2008;
      do {
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar1 != 0);
      local_2210 = (WCHAR *)0x0;
      lVar3 = (ulonglong)(((int)psVar7 - ((int)&local_2008 + 2) >> 1) + 2) * 2;
      uVar8 = (uint)lVar3;
      if ((int)((ulonglong)lVar3 >> 0x20) != 0) {
        FUN_00402198(-0x7ff8ffa9);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 < 0x101) {
        local_2210 = local_220c;
      }
      else {
        FUN_00404c2c(&local_2210,uVar8);
      }
      if (local_2210 == (WCHAR *)0x0) {
        uVar8 = 0xe;
      }
      else {
        lpsz_00 = (LPCWSTR)&local_2008;
        pWVar9 = local_2210;
        while ((WCHAR)local_2008 != L'\0') {
          lpsz = CharNextW(lpsz_00);
          if ((*lpsz_00 == L'\\') && (*lpsz == L'0')) {
            *pWVar9 = L'\0';
            lpsz_00 = CharNextW(lpsz);
          }
          else {
            *pWVar9 = *lpsz_00;
            lpsz_00 = lpsz_00 + 1;
          }
          pWVar9 = pWVar9 + 1;
          local_2008._0_2_ = *lpsz_00;
        }
        pWVar9[0] = L'\0';
        pWVar9[1] = L'\0';
        uVar8 = FUN_004026a9(local_221c,local_2218,local_2210);
      }
      if (local_2210 != local_220c) {
        FUN_00404b35(&local_2210);
      }
    }
    if (uVar8 != 0) {
      FUN_00402263(uVar8);
      goto LAB_004032e5;
    }
LAB_004032ca:
    FUN_00402e1c(this,param_3);
  }
LAB_004032e5:
  FUN_004076f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403306 */

undefined4 FUN_00403306(LPCWSTR param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_u_AppID_00401178;
  do {
    iVar1 = lstrcmpiW(param_1,(LPCWSTR)*ppuVar2);
    if (iVar1 == 0) {
      return 0;
    }
    ppuVar2 = ppuVar2 + 1;
  } while ((int)ppuVar2 < 0x4011a8);
  return 1;
}



/* Function: FUN_0040333d */

bool FUN_0040333d(HKEY param_1)

{
  LSTATUS LVar1;
  DWORD local_8;
  
  local_8 = 0;
  LVar1 = RegQueryInfoKeyW(param_1,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_8,(LPDWORD)0x0,
                           (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                           (PFILETIME)0x0);
  return LVar1 == 0 && local_8 != 0;
}



/* Function: FUN_0040337a */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0040337a(void *this,short *param_1)

{
  int iVar1;
  undefined2 local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_00409080 ^ (uint)&stack0xfffffffc;
  if ((*param_1 == 0x3d) && (iVar1 = FUN_00402e1c(this,param_1), -1 < iVar1)) {
    FUN_00402deb((undefined4 *)this);
    iVar1 = FUN_00402e1c(this,local_2008);
    if (-1 < iVar1) {
      FUN_00402e1c(this,param_1);
    }
  }
  FUN_004076f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004033ee */

void __thiscall FUN_004033ee(void *this,LPWSTR param_1,undefined4 *param_2)

{
  short sVar1;
  undefined2 *puVar2;
  WCHAR WVar3;
  LPCWSTR pWVar4;
  short *psVar5;
  LPCWSTR lpsz;
  int iVar6;
  LPWSTR pWVar7;
  short *psVar8;
  undefined4 local_54;
  uint local_50;
  undefined2 *local_4c;
  WCHAR local_48 [32];
  uint local_8;
  
  local_8 = DAT_00409080 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (LPWSTR)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 0;
    pWVar7 = param_1;
    do {
      WVar3 = *pWVar7;
      pWVar7 = pWVar7 + 1;
    } while (WVar3 != L'\0');
    local_54 = 0;
    local_50 = ((int)pWVar7 - (int)(param_1 + 1) >> 1) * 2;
    if ((int)local_50 < 100) {
      local_50 = 1000;
    }
    if ((int)((ulonglong)local_50 * 2 >> 0x20) == 0) {
      local_4c = (undefined2 *)CoTaskMemAlloc((SIZE_T)((ulonglong)local_50 * 2));
      if (local_4c != (undefined2 *)0x0) {
        *local_4c = 0;
        *(LPWSTR *)this = param_1;
        WVar3 = *param_1;
        while (puVar2 = local_4c, WVar3 != L'\0') {
          if (WVar3 == L'%') {
            param_1 = CharNextW(param_1);
            *(LPWSTR *)this = param_1;
            if (*param_1 == L'%') goto LAB_00403533;
            pWVar4 = FUN_00402da9(param_1,L'%');
                    /* WARNING: Load size is inaccurate */
            if ((pWVar4 == (LPCWSTR)0x0) || (iVar6 = (int)pWVar4 - *this >> 1, 0x1f < iVar6))
            goto LAB_0040357b;
                    /* WARNING: Load size is inaccurate */
            iVar6 = o_wcsncpy_s(local_48,0x20,*this,iVar6);
            FUN_004021b6(iVar6);
            psVar5 = (short *)FUN_00402cb3(*(void **)((int)this + 4),local_48);
            if (psVar5 == (short *)0x0) goto LAB_0040357b;
            psVar8 = psVar5;
            do {
              sVar1 = *psVar8;
              psVar8 = psVar8 + 1;
            } while (sVar1 != 0);
            iVar6 = FUN_00402963(&local_54,psVar5,(int)psVar8 - (int)(psVar5 + 1) >> 1);
            if (iVar6 == 0) goto LAB_0040357b;
                    /* WARNING: Load size is inaccurate */
            lpsz = *this;
            while (lpsz != pWVar4) {
              lpsz = CharNextW(lpsz);
              *(LPCWSTR *)this = lpsz;
            }
          }
          else {
LAB_00403533:
            iVar6 = FUN_00402963(&local_54,param_1,1);
            if (iVar6 == 0) goto LAB_0040357b;
          }
                    /* WARNING: Load size is inaccurate */
          param_1 = CharNextW(*this);
          *(LPWSTR *)this = param_1;
          WVar3 = *param_1;
        }
        local_4c = (undefined2 *)0x0;
        *param_2 = puVar2;
      }
    }
    else {
      local_4c = (undefined2 *)0x0;
    }
LAB_0040357b:
    CoTaskMemFree(local_4c);
  }
  FUN_004076f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_004035a4 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_004035a4(void *this,LPWSTR param_1,int param_2)

{
  short sVar1;
  HKEY pHVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short *local_2010;
  WCHAR local_200c [4098];
  uint local_8;
  
  local_8 = DAT_00409080 ^ (uint)&stack0xfffffffc;
  local_2010 = (short *)0x0;
  iVar4 = FUN_004033ee(this,param_1,&local_2010);
  if (iVar4 < 0) {
LAB_00403637:
    FUN_004076f0(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(short **)this = local_2010;
  sVar1 = *local_2010;
joined_r0x004035ee:
  if ((sVar1 == 0) || (iVar4 = FUN_00402e1c(this,local_200c), iVar4 < 0)) goto LAB_00403629;
  uVar5 = 0;
  while (iVar4 = lstrcmpiW(local_200c,(LPCWSTR)(&PTR_u_HKCR_004010e8)[uVar5 * 2]), iVar4 != 0) {
    uVar5 = uVar5 + 1;
    if (0xd < uVar5) goto LAB_00403629;
  }
  pHVar2 = (HKEY)(&DAT_004010ec)[uVar5 * 2];
  if (((pHVar2 == (HKEY)0x0) || (iVar4 = FUN_00402e1c(this,local_200c), iVar4 < 0)) ||
     (local_200c[0] != L'{')) goto LAB_00403629;
  if (param_2 == 0) {
    iVar4 = FUN_004036f3(this,local_200c,pHVar2,0,0);
    if (iVar4 < 0) goto LAB_00403629;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    uVar3 = *this;
    iVar4 = FUN_004036f3(this,local_200c,pHVar2,param_2,0);
    if (iVar4 < 0) {
      *(undefined4 *)this = uVar3;
      FUN_004036f3(this,local_200c,pHVar2,0,0);
LAB_00403629:
      CoTaskMemFree(local_2010);
      goto LAB_00403637;
    }
  }
  FUN_00402deb((undefined4 *)this);
                    /* WARNING: Load size is inaccurate */
  sVar1 = **this;
  goto joined_r0x004035ee;
}



/* Function: FUN_004036f3 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_004036f3(void *this,LPCWSTR param_1,HKEY param_2,int param_3,int param_4)

{
  WCHAR WVar1;
  HKEY pHVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  LPCWSTR pWVar6;
  LSTATUS LVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  HKEY hKey;
  undefined1 auStack_2274 [4];
  void *local_2270;
  HKEY local_226c;
  HKEY local_2268;
  uint uStack_2264;
  HKEY local_2260;
  undefined4 local_225c;
  undefined4 local_2258;
  HKEY pHStack_2254;
  undefined4 uStack_2250;
  undefined4 uStack_224c;
  undefined4 local_2248;
  int iStack_2244;
  HKEY pHStack_2240;
  undefined4 uStack_223c;
  undefined4 uStack_2238;
  HKEY pHStack_2234;
  undefined4 uStack_2230;
  undefined4 uStack_222c;
  HKEY pHStack_2228;
  undefined4 uStack_2224;
  undefined4 uStack_2220;
  DWORD DStack_221c;
  WCHAR aWStack_2218 [260];
  WCHAR aWStack_2010 [4098];
  uint local_c;
  
  local_c = DAT_00409080 ^ (uint)auStack_2274;
  local_2268 = param_2;
  hKey = (HKEY)0x0;
  local_2248 = 0;
  local_225c = 0;
  local_2258 = 0;
  local_2260 = (HKEY)0x0;
  local_2270 = this;
  iVar4 = FUN_00402e1c(this,param_1);
  if (-1 < iVar4) {
LAB_00403bfc:
    do {
      do {
        while( true ) {
          if (*param_1 == L'}') goto LAB_00403c2b;
          local_226c = (HKEY)0x1;
          uVar5 = lstrcmpiW(param_1,L"Delete");
          uStack_2264 = uVar5;
          iVar4 = lstrcmpiW(param_1,L"ForceRemove");
          if ((iVar4 != 0) && (uVar5 != 0)) break;
          iVar4 = FUN_00402e1c(local_2270,param_1);
          if (iVar4 < 0) goto LAB_00403c2b;
          if (param_3 == 0) break;
          pHStack_2240 = (HKEY)0x0;
          uStack_223c = 0;
          uStack_2238 = 0;
          pWVar6 = FUN_00402da9(param_1,L'\\');
          if (pWVar6 != (LPCWSTR)0x0) goto LAB_00403c2b;
          iVar4 = FUN_00403306(param_1);
          if (iVar4 != 0) {
            pHStack_2240 = local_2268;
            FUN_00402714(&pHStack_2240,param_1);
            pHStack_2240 = (HKEY)0x0;
          }
          if (uStack_2264 != 0) break;
          iVar4 = FUN_00402e1c(local_2270,param_1);
          if (iVar4 < 0) goto LAB_00403c2b;
          iVar4 = FUN_0040337a(local_2270,param_1);
LAB_00403a10:
          if (iVar4 < 0) goto LAB_00403c2b;
LAB_00403a18:
          if (*param_1 == L'{') {
            pWVar6 = param_1;
            do {
              WVar1 = *pWVar6;
              pWVar6 = pWVar6 + 1;
            } while (WVar1 != (WCHAR)local_2248);
            if ((int)pWVar6 - (int)(param_1 + 1) >> 1 == 1) {
              iVar4 = FUN_004036f3(local_2270,param_1,hKey,param_3,0);
              if (iVar4 < 0) goto LAB_00403c2b;
              iVar4 = FUN_00402e1c(local_2270,param_1);
LAB_0040392b:
              if (iVar4 < 0) goto LAB_00403c2b;
            }
          }
        }
        iVar4 = lstrcmpiW(param_1,L"NoRemove");
        if (iVar4 == 0) {
          local_226c = (HKEY)0x0;
          iVar4 = FUN_00402e1c(local_2270,param_1);
          if (iVar4 < 0) goto LAB_00403c2b;
        }
        iVar4 = lstrcmpiW(param_1,L"Val");
        if (iVar4 == 0) {
          iVar4 = FUN_00402e1c(local_2270,aWStack_2010);
          if (((iVar4 < 0) || (iVar4 = FUN_00402e1c(local_2270,param_1), iVar4 < 0)) ||
             (*param_1 != L'=')) goto LAB_00403c2b;
          if (param_3 != 0) {
            uStack_2230 = 0;
            uStack_222c = 0;
            pHStack_2234 = local_2268;
            iVar4 = FUN_00402f7d(local_2270,&pHStack_2234,aWStack_2010,param_1);
            pHStack_2234 = (HKEY)0x0;
            goto LAB_00403a10;
          }
          if ((param_4 == 0) && (local_226c != (HKEY)0x0)) {
            pHStack_2254 = (HKEY)0x0;
            uStack_2250 = 0;
            uStack_224c = 0;
            uVar5 = FUN_00402661(&pHStack_2254,local_2268,(LPCWSTR)0x0,0x20006);
            pHVar2 = pHStack_2254;
            if ((uVar5 != 0) ||
               ((uVar5 = RegDeleteValueW(pHStack_2254,aWStack_2010), uVar5 != 0 && (uVar5 != 2)))) {
              FUN_00402263(uVar5);
              if (pHStack_2254 != (HKEY)0x0) {
                RegCloseKey(pHStack_2254);
              }
              goto LAB_00403c2b;
            }
            if (pHVar2 != (HKEY)0x0) {
              RegCloseKey(pHVar2);
              pHStack_2254 = (HKEY)0x0;
            }
          }
          iVar4 = FUN_0040337a(local_2270,param_1);
          goto LAB_0040392b;
        }
        pWVar6 = FUN_00402da9(param_1,L'\\');
        pHVar2 = local_2268;
        if (pWVar6 != (LPCWSTR)0x0) goto LAB_00403c2b;
        if (param_3 != 0) {
          LVar7 = FUN_00402661(&local_2260,local_2268,param_1,0x2001f);
          if ((LVar7 != 0) && (LVar7 = FUN_00402661(&local_2260,pHVar2,param_1,0x20019), LVar7 != 0)
             ) {
            local_226c = (HKEY)0x0;
            uVar5 = RegCreateKeyExW(pHVar2,param_1,0,(LPWSTR)0x0,0,0x2001f,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_226c,&DStack_221c);
            if (uVar5 == 0) {
              uVar5 = 0;
              if (local_2260 != (HKEY)0x0) {
                uVar5 = RegCloseKey(local_2260);
              }
              local_2260 = local_226c;
            }
            hKey = local_2260;
            if (uVar5 != 0) goto LAB_004039ca;
          }
          hKey = local_2260;
          iVar4 = FUN_00402e1c(local_2270,param_1);
          if (-1 < iVar4) {
            if (*param_1 == L'=') {
              iVar4 = FUN_00402f7d(local_2270,&local_2260,(LPCWSTR)0x0,param_1);
              hKey = local_2260;
              goto LAB_00403a10;
            }
            goto LAB_00403a18;
          }
          goto LAB_00403c2b;
        }
        if (param_4 == 0) {
          uStack_2264 = FUN_00402661(&local_2260,local_2268,param_1,0x20019);
          hKey = local_2260;
        }
        else {
          uStack_2264 = 2;
        }
        iStack_2244 = 1;
        if (uStack_2264 == 0) {
          iStack_2244 = param_4;
        }
        iVar4 = o_wcsncpy_s(aWStack_2218,0x104,param_1,0xffffffff);
        FUN_004021b6(iVar4);
        iVar4 = FUN_00402e1c(local_2270,param_1);
        if ((iVar4 < 0) || (iVar4 = FUN_0040337a(local_2270,param_1), iVar4 < 0)) goto LAB_00403c2b;
        if (*param_1 == L'{') {
          pWVar6 = param_1;
          do {
            WVar1 = *pWVar6;
            pWVar6 = pWVar6 + 1;
          } while (WVar1 != (WCHAR)local_2248);
          if (((int)pWVar6 - (int)(param_1 + 1) >> 1 == 1) &&
             (((iVar4 = FUN_004036f3(local_2270,param_1,hKey,0,iStack_2244), iVar4 < 0 &&
               (iStack_2244 == 0)) || (iVar4 = FUN_00402e1c(local_2270,param_1), iVar4 < 0))))
          goto LAB_00403c2b;
        }
      } while (uStack_2264 == 2);
      if (uStack_2264 == 0) {
        if ((param_4 == 0) || (bVar3 = FUN_0040333d(hKey), CONCAT31(extraout_var,bVar3) == 0)) {
          bVar3 = FUN_0040333d(hKey);
          uStack_2264 = CONCAT31(extraout_var_00,bVar3);
          pHVar2 = hKey;
          if (hKey != (HKEY)0x0) {
            uVar5 = RegCloseKey(hKey);
            hKey = (HKEY)0x0;
            local_2260 = (HKEY)0x0;
            pHVar2 = (HKEY)0x0;
            if (uVar5 != 0) break;
          }
          hKey = pHVar2;
          if ((local_226c != (HKEY)0x0) && (uStack_2264 == 0)) {
            pHStack_2228 = local_2268;
            uStack_2224 = 0;
            uStack_2220 = 0;
            uVar5 = FUN_004025c6(&pHStack_2228,aWStack_2218);
            pHStack_2228 = (HKEY)0x0;
            if (uVar5 != 0) break;
          }
        }
        else {
          iVar4 = FUN_00403306(aWStack_2218);
          if ((iVar4 != 0) && (local_226c != (HKEY)0x0)) {
            FUN_00402714(&local_2260,aWStack_2218);
            hKey = local_2260;
          }
        }
        goto LAB_00403bfc;
      }
      uVar5 = uStack_2264;
    } while (param_4 != 0);
LAB_004039ca:
    FUN_00402263(uVar5);
LAB_00403c2b:
    if (hKey != (HKEY)0x0) {
      RegCloseKey(hKey);
    }
  }
  FUN_004076f0(local_c ^ (uint)auStack_2274);
  return;
}



/* Function: FUN_00403c55 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00403c55(undefined4 param_1,uint param_2,int param_3,undefined4 *param_4)

{
  WCHAR WVar1;
  code *pcVar2;
  HMODULE pHVar3;
  int *piVar4;
  DWORD DVar5;
  uint uVar6;
  HMODULE pHVar7;
  WCHAR *pWVar8;
  int iVar9;
  _RTL_CRITICAL_SECTION *p_Var10;
  undefined **local_a6c;
  undefined4 local_a68;
  undefined4 local_a64;
  undefined4 local_a60;
  _RTL_CRITICAL_SECTION local_a5c;
  undefined1 local_a44;
  uint local_a40;
  WCHAR local_a3c;
  undefined2 local_a3a [523];
  WCHAR local_624 [260];
  WCHAR local_41c [522];
  uint local_8;
  
  piVar4 = DAT_00409514;
  local_8 = DAT_00409080 ^ (uint)&stack0xfffffffc;
  local_a6c = &PTR_FUN_00401008;
  local_a68 = 0;
  local_a64 = 0;
  local_a60 = 0;
  p_Var10 = &local_a5c;
  local_a40 = param_2;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    p_Var10->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var10 = (_RTL_CRITICAL_SECTION *)&p_Var10->LockCount;
  }
  local_a44 = 0;
  iVar9 = FUN_004021ef(&local_a5c);
  if (iVar9 < 0) {
    FUN_00402a4b(&local_a6c);
    goto LAB_00403eae;
  }
  local_a44 = 1;
  if (param_4 != (undefined4 *)0x0) {
    for (; (short *)*param_4 != (short *)0x0; param_4 = param_4 + 2) {
      FUN_00402ac0((int)&local_a6c,(short *)*param_4,(short *)param_4[1]);
    }
  }
  pcVar2 = *(code **)(*piVar4 + 0x14);
  (*(code *)PTR_guard_check_icall_0040a1e4)(&local_a6c);
  iVar9 = (*pcVar2)();
  pHVar3 = DAT_004094dc;
  if (-1 < iVar9) {
    DVar5 = GetModuleFileNameW(DAT_004094dc,local_624,0x104);
    if (DVar5 == 0) {
      FUN_00402246();
    }
    else if (DVar5 != 0x104) {
      pWVar8 = local_624;
      uVar6 = 0;
      do {
        WVar1 = *pWVar8;
        if (WVar1 == L'\0') break;
        local_41c[uVar6] = WVar1;
        if ((WVar1 == L'\'') && (uVar6 < 0x206)) {
          uVar6 = uVar6 + 1;
          local_41c[uVar6] = L'\'';
        }
        pWVar8 = pWVar8 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x207);
      local_41c[uVar6] = L'\0';
      if ((pHVar3 == (HMODULE)0x0) || (pHVar7 = GetModuleHandleW((LPCWSTR)0x0), pHVar3 == pHVar7)) {
        pWVar8 = local_41c;
        local_a3c = L'\"';
        do {
          WVar1 = *pWVar8;
          pWVar8 = pWVar8 + 1;
        } while (WVar1 != L'\0');
        iVar9 = FUN_004020b0(local_a3a,0x414,local_41c,
                             ((int)pWVar8 - (int)(local_41c + 1) >> 1) * 2 + 2);
        if (iVar9 != 0) goto LAB_00403e66;
        pWVar8 = &local_a3c;
        do {
          WVar1 = *pWVar8;
          pWVar8 = pWVar8 + 1;
        } while (WVar1 != L'\0');
        iVar9 = (int)pWVar8 - (int)local_a3a >> 1;
        local_a3a[iVar9 + -1] = 0x22;
        if (0x417 < iVar9 * 2 + 2U) {
          FUN_00407836();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_624[iVar9 + -0x20b] = L'\0';
        pWVar8 = &local_a3c;
      }
      else {
        pWVar8 = local_41c;
      }
      iVar9 = FUN_00402ac0((int)&local_a6c,L"Module",pWVar8);
      if ((-1 < iVar9) &&
         (iVar9 = FUN_00402ac0((int)&local_a6c,L"Module_Raw",local_41c), -1 < iVar9)) {
        FUN_00402b16(local_624,(LPCWSTR)(local_a40 & 0xffff),L"REGISTRY",(uint)(param_3 != 0));
      }
    }
  }
LAB_00403e66:
  FUN_00402a4b(&local_a6c);
LAB_00403eae:
  FUN_004076f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00403ecb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00403ecb(void *this,undefined4 *param_1,undefined4 *param_2)

{
  DWORD DVar1;
  LPCWSTR lpsz;
  int iVar2;
  undefined4 uVar3;
  LPCWSTR pWVar4;
  LPCWSTR pWVar5;
  WCHAR local_230 [270];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  uint local_8;
  
  local_8 = DAT_00409080 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = 0;
    *param_2 = 0;
    DVar1 = GetModuleFileNameW((HMODULE)this,local_230,0x104);
    if (DVar1 == 0) {
      FUN_00402246();
    }
    else if (DVar1 != 0x104) {
      lpsz = local_230;
      pWVar5 = (LPCWSTR)0x0;
      while (local_230[0] != L'\0') {
        pWVar4 = lpsz;
        if ((local_230[0] != L'.') && (pWVar4 = pWVar5, local_230[0] == L'\\')) {
          pWVar4 = (LPCWSTR)0x0;
        }
        lpsz = CharNextW(lpsz);
        pWVar5 = pWVar4;
        local_230[0] = *lpsz;
      }
      if (pWVar5 == (LPCWSTR)0x0) {
        pWVar5 = lpsz;
      }
      iVar2 = Ordinal_161(local_230,param_2);
      if (iVar2 < 0) {
        iVar2 = (int)pWVar5 - (int)local_230 >> 1;
        local_14 = _DAT_004017bc;
        uStack_10 = DAT_004017c0;
        uStack_c = DAT_004017c4;
        if (0x104 < iVar2 + 5U) goto LAB_00404019;
        iVar2 = o_wcscpy_s(pWVar5,0x10e - iVar2,&local_14);
        FUN_004021b6(iVar2);
        iVar2 = Ordinal_161(local_230,param_2);
        if (iVar2 < 0) goto LAB_00404019;
      }
      uVar3 = Ordinal_2(local_230);
      *param_1 = uVar3;
    }
  }
LAB_00404019:
  FUN_004076f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040402e */

int __fastcall FUN_0040402e(void *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  local_10 = 0;
  local_8 = (int *)0x0;
  iVar2 = FUN_00403ecb(param_1,&local_10,&local_8);
  if (-1 < iVar2) {
    pcVar1 = *(code **)(*local_8 + 0x1c);
    (*(code *)PTR_guard_check_icall_0040a1e4)(local_8,&local_c);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) {
      iVar2 = Ordinal_186(local_c,*(undefined2 *)(local_c + 0x18),*(undefined2 *)(local_c + 0x1a),
                          *(undefined4 *)(local_c + 0x10),*(undefined4 *)(local_c + 0x14));
      pcVar1 = *(code **)(*local_8 + 0x30);
      (*(code *)PTR_guard_check_icall_0040a1e4)(local_8,local_c);
      (*pcVar1)();
    }
  }
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_8);
  Ordinal_6(local_10);
  return iVar2;
}



/* Function: FUN_004040bf */

void __fastcall FUN_004040bf(void *param_1)

{
  WCHAR WVar1;
  code *pcVar2;
  LPCWSTR lpsz;
  int iVar3;
  undefined4 uVar4;
  LPWSTR pWVar5;
  undefined4 uVar6;
  LPCWSTR pWVar7;
  uint uVar8;
  WCHAR *pWVar9;
  int local_21c;
  undefined4 local_218;
  int *local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_00409080 ^ (uint)&stack0xfffffffc;
  local_218 = 0;
  local_214 = (int *)0x0;
  iVar3 = FUN_00403ecb(param_1,&local_218,&local_214);
  uVar6 = local_218;
  if (-1 < iVar3) {
    local_21c = 0;
    pcVar2 = *(code **)(*local_214 + 0x24);
    (*(code *)PTR_guard_check_icall_0040a1e4)(local_214,0xffffffff,0,0,0,&local_21c);
    iVar3 = (*pcVar2)();
    if ((iVar3 < 0) || (local_21c == 0)) {
      pWVar9 = (WCHAR *)0x0;
    }
    else {
      uVar4 = Ordinal_7(uVar6);
      iVar3 = o_wcsncpy_s(local_210,0x104,uVar6,uVar4);
      FUN_004021b6(iVar3);
      pWVar7 = local_210;
      local_210[0x103] = 0;
      lpsz = pWVar7;
      while (local_210[0] != L'\0') {
        pWVar5 = CharNextW(lpsz);
        WVar1 = *lpsz;
        if (((WVar1 == L'\\') || (WVar1 == L'/')) || (WVar1 == L':')) {
          pWVar7 = pWVar5;
        }
        lpsz = pWVar5;
        uVar6 = local_218;
        local_210[0] = *pWVar5;
      }
      uVar8 = (int)pWVar7 - (int)local_210 >> 1;
      if (uVar8 < 0x104) {
        if (0x207 < uVar8 * 2) {
          FUN_00407836();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_210[uVar8] = L'\0';
      }
      pWVar9 = local_210;
    }
    Ordinal_163(local_214,uVar6,pWVar9);
    Ordinal_6(local_21c);
  }
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_214);
  Ordinal_6(uVar6);
  FUN_004076f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404224 */

void __fastcall FUN_00404224(GUID *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  LSTATUS LVar5;
  code *pcVar6;
  HKEY pHVar7;
  HKEY hKey;
  HKEY local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  HKEY local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  int *local_1ac;
  int *local_1a8;
  GUID *local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  OLECHAR local_190 [64];
  WCHAR local_110 [130];
  uint local_c;
  
  local_c = DAT_00409080 ^ (uint)&stack0xfffffffc;
  local_1a8 = (int *)0x0;
  local_1ac = param_2;
  local_1a4 = param_1;
  if (((param_2 != (int *)0x0) &&
      ((((param_1->Data1 != DAT_00401468 ||
         (iVar4._0_2_ = param_1->Data2, iVar4._2_2_ = param_1->Data3, iVar4 != DAT_0040146c)) ||
        (*(int *)param_1->Data4 != DAT_00401470)) || (*(int *)(param_1->Data4 + 4) != DAT_00401474))
      )) && (HVar3 = CoCreateInstance((IID *)&DAT_00401458,(LPUNKNOWN)0x0,1,(IID *)&DAT_004018f0,
                                      &local_1a8), -1 < HVar3)) {
    iVar4 = *param_2;
    while (iVar4 != 0) {
      puVar1 = (undefined4 *)param_2[1];
      local_1a0 = *puVar1;
      uStack_19c = puVar1[1];
      uStack_198 = puVar1[2];
      uStack_194 = puVar1[3];
      if (param_3 == 0) {
        iVar2 = *local_1a8;
        if (iVar4 == 1) {
          (*(code *)PTR_guard_check_icall_0040a1e4)();
          (**(code **)(iVar2 + 0x18))();
        }
        else {
          (*(code *)PTR_guard_check_icall_0040a1e4)(local_1a8,local_1a4,1,&local_1a0);
          (**(code **)(iVar2 + 0x20))();
        }
      }
      else {
        if (iVar4 == 1) {
          pcVar6 = *(code **)(*local_1a8 + 0x14);
        }
        else {
          pcVar6 = *(code **)(*local_1a8 + 0x1c);
        }
        (*(code *)PTR_guard_check_icall_0040a1e4)(local_1a8,local_1a4,1,&local_1a0);
        iVar4 = (*pcVar6)();
        if (iVar4 < 0) goto LAB_0040456a;
      }
      param_2 = local_1ac + 2;
      param_1 = local_1a4;
      local_1ac = param_2;
      iVar4 = *param_2;
    }
    if (param_3 == 0) {
      StringFromGUID2(param_1,local_190,0x40);
      iVar4 = o_wcscpy_s(local_110,0x80,L"CLSID\\");
      FUN_004021b6(iVar4);
      iVar4 = o_wcscat_s(local_110,0x80,local_190);
      FUN_004021b6(iVar4);
      iVar4 = o_wcscat_s(local_110,0x80,L"\\Required Categories");
      FUN_004021b6(iVar4);
      local_1c0 = 0;
      hKey = (HKEY)0x80000000;
      local_1bc = 0;
      local_1c4 = (HKEY)0x80000000;
      local_1b8 = (HKEY)0x0;
      local_1b4 = 0;
      local_1b0 = 0;
      local_1a4 = (GUID *)0x0;
      LVar5 = FUN_00402661(&local_1b8,(HKEY)0x80000000,local_110,0x20019);
      pHVar7 = local_1b8;
      if (LVar5 == 0) {
        local_1ac = (int *)RegQueryInfoKeyW(local_1b8,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (LPDWORD)&local_1a4,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (PFILETIME)0x0);
        if (pHVar7 != (HKEY)0x0) {
          RegCloseKey(pHVar7);
          local_1b8 = (HKEY)0x0;
        }
        if ((local_1ac == (int *)0x0) && (local_1a4 == (GUID *)0x0)) {
          FUN_004025c6(&local_1c4,local_110);
          hKey = local_1c4;
        }
      }
      iVar4 = o_wcscpy_s(local_110,0x80,L"CLSID\\");
      FUN_004021b6(iVar4);
      iVar4 = o_wcscat_s(local_110,0x80,local_190);
      FUN_004021b6(iVar4);
      iVar4 = o_wcscat_s(local_110,0x80,L"\\Implemented Categories");
      FUN_004021b6(iVar4);
      LVar5 = FUN_00402661(&local_1b8,hKey,local_110,0x20019);
      pHVar7 = local_1b8;
      if (LVar5 == 0) {
        local_1ac = (int *)RegQueryInfoKeyW(local_1b8,(LPWSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (LPDWORD)&local_1a4,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                                            (PFILETIME)0x0);
        if (pHVar7 != (HKEY)0x0) {
          RegCloseKey(pHVar7);
          pHVar7 = (HKEY)0x0;
        }
        if ((local_1ac == (int *)0x0) && (local_1a4 == (GUID *)0x0)) {
          FUN_004025c6(&local_1c4,local_110);
          hKey = local_1c4;
        }
      }
      if (pHVar7 != (HKEY)0x0) {
        RegCloseKey(pHVar7);
      }
      if (hKey != (HKEY)0x0) {
        RegCloseKey(hKey);
      }
    }
  }
LAB_0040456a:
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_1a8);
  FUN_004076f0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_0040458e */

void __fastcall FUN_0040458e(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 8);
    while (puVar3 != (undefined4 *)0x0) {
      pcVar1 = (code *)*puVar3;
      (*(code *)PTR_guard_check_icall_0040a1e4)(puVar3[1]);
      (*pcVar1)();
      puVar2 = (undefined4 *)puVar3[2];
      FUN_00407bb9(puVar3);
      puVar3 = puVar2;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  FUN_00402184(0xc0000005);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004045e0 */

undefined4 FUN_004045e0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

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



/* Function: FUN_00404667 */

void __fastcall FUN_00404667(undefined4 param_1)

{
  wchar_t *local_14;
  wchar_t *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  local_14 = L"APPID";
  local_10 = L"{BBC4356A-F004-4628-A27A-E13D70412B70}";
  FUN_00403c55(param_1,0x65,param_1,&local_14);
  return;
}



/* Function: FUN_004046a0 */

int __thiscall FUN_004046a0(void *this,byte param_1)

{
  FUN_004047fc((int)this);
  if ((param_1 & 1) != 0) {
    FUN_00407bb9(this);
  }
  return (int)this;
}



/* Function: FUN_004046ca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004046ca(void)

{
  char cVar1;
  LPWSTR pWVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_10 [3];
  
  _DAT_00409488 = 1;
  puVar4 = &DAT_00409470;
  _DAT_00409480 = 0;
  DAT_00409470 = 0;
  piVar5 = (int *)&DAT_00409468;
  _DAT_0040948c = 0;
  DAT_00409468 = &DAT_004018e0;
  PTR_LOOP_00409048 = (undefined *)&DAT_00409470;
  do {
    local_10[0] = *piVar5;
    local_10[1] = 0;
    piVar5 = piVar5 + 1;
    puVar4[8] = local_10[0];
    RegisterTraceGuidsW(FUN_004045e0,puVar4,local_10[0],1,local_10,0,0,puVar4 + 2);
    puVar4 = (undefined4 *)*puVar4;
  } while (puVar4 != (undefined4 *)0x0);
  if (DAT_00409518 == '\0') {
    local_10[0] = 0;
    pWVar2 = GetCommandLineW();
    cVar1 = FUN_00404a73(pWVar2,local_10);
    iVar3 = local_10[0];
    if (cVar1 == '\x01') {
      iVar3 = FUN_004049f3();
    }
  }
  else {
    iVar3 = -1;
  }
  puVar4 = (undefined4 *)PTR_LOOP_00409048;
  if ((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) {
    for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
      if (puVar4[2] != 0 || puVar4[3] != 0) {
        UnregisterTraceGuids(puVar4[2],puVar4[3]);
        puVar4[2] = 0;
        puVar4[3] = 0;
      }
    }
    PTR_LOOP_00409048 = (undefined *)&PTR_LOOP_00409048;
  }
  return iVar3;
}



/* Function: FUN_004047c0 */

int __fastcall FUN_004047c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      PostThreadMessageW(*(DWORD *)(param_1 + 0x2c),0x12,0,0);
    }
    else {
      *(undefined1 *)(param_1 + 0x3d) = 1;
      SetEvent(*(HANDLE *)(param_1 + 0x30));
    }
  }
  return iVar2 + -1;
}



/* Function: FUN_004047fc */

void __fastcall FUN_004047fc(int param_1)

{
  FUN_004023b7(0);
  FUN_004023fb(param_1);
  FUN_004022e6((int *)&DAT_0040904c);
  if (*(char *)(param_1 + 0x3e) != '\0') {
    CoUninitialize();
  }
  FUN_004023fb(param_1);
  return;
}



/* Function: FUN_00404833 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00404833(void)

{
  HRESULT HVar1;
  HMODULE pHVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_004094a8;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _DAT_0040949c = 0;
  _DAT_004094a4 = 0;
  _DAT_004094a0 = 0;
  DAT_00409514 = &DAT_00409498;
  _DAT_004094c0 = 0;
  iVar3 = FUN_004021ef((LPCRITICAL_SECTION)&DAT_004094a8);
  if (iVar3 < 0) {
    DAT_00409518 = 1;
  }
  else {
    _DAT_0040949c = 0x24;
  }
  _DAT_004094c4 = GetCurrentThreadId();
  _DAT_004094c8 = 0;
  _DAT_004094cc = 5000;
  DAT_004094d0 = 1000;
  DAT_004094d4 = 1;
  DAT_004094d6 = 0;
  HVar1 = CoInitializeEx((LPVOID)0x0,0);
  if (HVar1 < 0) {
    if (HVar1 == -0x7ffefefa) {
      pHVar2 = GetModuleHandleW(L"Mscoree.dll");
      if (pHVar2 != (HMODULE)0x0) goto LAB_004048ed;
    }
    DAT_00409518 = 1;
  }
  else {
    DAT_004094d6 = 1;
LAB_004048ed:
    FUN_004023b7(1);
  }
  return &DAT_00409498;
}



/* Function: FUN_00404900 */

void FUN_00404900(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0xc);
  (*(code *)PTR_guard_check_icall_0040a1e4)
            (param_1,L"APPID",L"{BBC4356A-F004-4628-A27A-E13D70412B70}");
  (*pcVar1)();
  return;
}



/* Function: ~CBaseDispatch */

/* Library Function - Single Match
    public: __thiscall CBaseDispatch::~CBaseDispatch(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall CBaseDispatch::~CBaseDispatch(CBaseDispatch *this)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_0040a1e4)(piVar1);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_0040494d */

void __fastcall FUN_0040494d(int *param_1)

{
  if (*param_1 != 0) {
    o_free(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    o_free(param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  return;
}



/* Function: FUN_00404983 */

undefined4 __thiscall FUN_00404983(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = o__recalloc(*this,*(int *)((int)this + 8) + 1,4);
  if (iVar1 != 0) {
    *(int *)this = iVar1;
    iVar1 = o__recalloc(*(undefined4 *)((int)this + 4),*(int *)((int)this + 8) + 1,4);
    if (iVar1 != 0) {
                    /* WARNING: Load size is inaccurate */
      iVar3 = *(int *)((int)this + 8) * 4;
      *(int *)((int)this + 4) = iVar1;
      puVar2 = (undefined4 *)(*this + iVar3);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *param_1;
      }
      puVar2 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *param_2;
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_004049f3 */

void FUN_004049f3(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  MSG local_20;
  
  iVar1 = 1;
  DAT_004094d4 = 0;
  puVar3 = (undefined4 *)PTR_DAT_00409058;
  puVar4 = (undefined4 *)PTR_PTR_00409054;
  while ((puVar4 < puVar3 && (-1 < iVar1))) {
    if ((undefined4 *)*puVar4 != (undefined4 *)0x0) {
      iVar1 = FUN_00402277((undefined4 *)*puVar4);
      puVar3 = (undefined4 *)PTR_DAT_00409058;
    }
    puVar4 = puVar4 + 1;
  }
  if (iVar1 == 0) {
    while (BVar2 = GetMessageW(&local_20,(HWND)0x0,0,0), 0 < BVar2) {
      TranslateMessage(&local_20);
      DispatchMessageW(&local_20);
    }
  }
  else if (iVar1 < 0) {
    return;
  }
  FUN_00404b45();
  return;
}



/* Function: FUN_00404a73 */

void FUN_00404a73(LPWSTR param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_00409080 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  local_10 = DAT_004018ac;
  local_c = DAT_004018b0;
  do {
    param_1 = FUN_004024ce(param_1,(LPCWSTR)&local_10);
    if (param_1 == (LPWSTR)0x0) goto LAB_00404ad6;
    iVar2 = FUN_0040251d(param_1,L"UnregServer");
    pcVar1 = DAT_00409520;
    if (iVar2 == 0) {
      if (DAT_00409520 == (code *)0x0) {
LAB_00404b15:
        iVar2 = FUN_00402345();
      }
      else {
        (*(code *)PTR_guard_check_icall_0040a1e4)();
        iVar2 = (*pcVar1)();
        if (-1 < iVar2) goto LAB_00404b15;
      }
      *param_2 = iVar2;
      if (iVar2 < 0) goto LAB_00404ad6;
      iVar2 = FUN_00404667(0);
      goto LAB_00404b29;
    }
    iVar2 = FUN_0040251d(param_1,L"RegServer");
  } while (iVar2 != 0);
  iVar2 = FUN_00404667(1);
  *param_2 = iVar2;
  if (-1 < iVar2) {
    iVar2 = FUN_00404b9c();
LAB_00404b29:
    *param_2 = iVar2;
  }
LAB_00404ad6:
  FUN_004076f0(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00404b35 */

void __fastcall FUN_00404b35(undefined4 *param_1)

{
  o_free(*param_1);
  return;
}



/* Function: FUN_00404b45 */

int FUN_00404b45(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  HRESULT HVar4;
  
  HVar4 = 0;
  piVar2 = (int *)PTR_DAT_00409058;
  piVar3 = (int *)PTR_PTR_00409054;
  while ((piVar3 < piVar2 && (HVar4 == 0))) {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
      HVar4 = CoRevokeClassObject(*(DWORD *)(iVar1 + 0x14));
      piVar2 = (int *)PTR_DAT_00409058;
    }
    piVar3 = piVar3 + 1;
  }
  if (DAT_004094d4 != '\0') {
    Sleep(DAT_004094d0);
  }
  return HVar4;
}



/* Function: FUN_00404b9c */

void FUN_00404b9c(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = 0;
  piVar4 = (int *)PTR_DAT_00409058;
  piVar5 = (int *)PTR_PTR_00409054;
  if (PTR_PTR_00409054 < PTR_DAT_00409058) {
    do {
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 != (undefined4 *)0x0) {
        pcVar2 = (code *)puVar1[1];
        (*(code *)PTR_guard_check_icall_0040a1e4)(1);
        iVar3 = (*pcVar2)();
        if (iVar3 < 0) {
          return;
        }
        pcVar2 = (code *)puVar1[7];
        (*(code *)PTR_guard_check_icall_0040a1e4)();
        piVar4 = (int *)(*pcVar2)();
        iVar3 = FUN_00404224((GUID *)*puVar1,piVar4,1);
        piVar4 = (int *)PTR_DAT_00409058;
        if (iVar3 < 0) {
          return;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 < piVar4);
    if (iVar3 < 0) {
      return;
    }
  }
  iVar3 = FUN_004040bf(PTR_IMAGE_DOS_HEADER_00409050);
  pcVar2 = DAT_0040951c;
  if ((-1 < iVar3) && (DAT_0040951c != (code *)0x0)) {
    (*(code *)PTR_guard_check_icall_0040a1e4)(DAT_004094dc);
    (*pcVar2)();
  }
  return;
}



/* Function: FUN_00404c2c */

void __thiscall FUN_00404c2c(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o_malloc(param_1);
  if (iVar2 != 0) {
    *(int *)this = iVar2;
    return;
  }
  FUN_00402198(-0x7ff8fff2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_00404c5a */

int * __fastcall FUN_00404c5a(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    if (param_2 != (int *)0x0) {
      pcVar1 = *(code **)(*param_2 + 4);
      (*(code *)PTR_guard_check_icall_0040a1e4)(param_2);
      (*pcVar1)();
    }
    piVar2 = (int *)*param_1;
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 8);
      (*(code *)PTR_guard_check_icall_0040a1e4)(piVar2);
      (*pcVar1)();
    }
    *param_1 = (int)param_2;
  }
  return param_2;
}



/* Function: FUN_00404ca3 */

int __fastcall FUN_00404ca3(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar3 = -0x7ff8ffa9;
  }
  else if (param_4 == (undefined4 *)0x0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    if ((((*param_3 == 0) && (param_3[1] == 0)) && (param_3[2] == 0xc0)) &&
       (param_3[3] == 0x46000000)) {
      iVar3 = *(int *)(param_2 + 4);
LAB_00404cf7:
      piVar4 = (int *)(iVar3 + param_1);
      pcVar1 = *(code **)(*piVar4 + 4);
      (*(code *)PTR_guard_check_icall_0040a1e4)(piVar4);
      (*pcVar1)();
      *param_4 = piVar4;
      iVar3 = 0;
    }
    else {
      piVar4 = (int *)(param_2 + 8);
      iVar3 = *piVar4;
      while (iVar3 != 0) {
        piVar2 = (int *)piVar4[-2];
        if ((piVar2 == (int *)0x0) || (iVar3 = FUN_00402137(piVar2,param_3), iVar3 != 0)) {
          pcVar1 = (code *)*piVar4;
          if (pcVar1 == (code *)0x1) {
            iVar3 = piVar4[-1];
            goto LAB_00404cf7;
          }
          (*(code *)PTR_guard_check_icall_0040a1e4)(param_1,param_3,param_4,piVar4[-1]);
          iVar3 = (*pcVar1)();
          if (iVar3 == 0) {
            return 0;
          }
          if ((piVar2 != (int *)0x0) && (iVar3 < 0)) {
            return iVar3;
          }
        }
        piVar4 = piVar4 + 3;
        iVar3 = *piVar4;
      }
      iVar3 = -0x7fffbffe;
    }
  }
  return iVar3;
}



/* Function: FUN_00404d90 */

undefined4 FUN_00404d90(void)

{
  return 0;
}



/* Function: FUN_00404da0 */

void FUN_00404da0(void)

{
  return;
}



/* Function: FUN_00404da9 */

void FUN_00404da9(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*DAT_00409514 + 8);
  (*(code *)PTR_guard_check_icall_0040a1e4)();
  (*pcVar1)();
  return;
}



/* Function: FUN_00404dd0 */

undefined4 FUN_00404dd0(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004003;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    if ((param_2 == 0) ||
       ((((*param_3 == 0 && (param_3[1] == 0)) && (param_3[2] == 0xc0)) &&
        (param_3[3] == 0x46000000)))) {
      pcVar1 = *(code **)(param_1 + 0x24);
      (*(code *)PTR_guard_check_icall_0040a1e4)(param_2,param_3,param_4);
      uVar2 = (*pcVar1)();
    }
    else {
      uVar2 = 0x80040110;
    }
  }
  return uVar2;
}



/* Function: FUN_00404e30 */

undefined4 FUN_00404e30(undefined4 param_1,int param_2)

{
  code *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = *(code **)(*DAT_00409514 + 8);
  }
  else {
    pcVar1 = *(code **)(*DAT_00409514 + 4);
  }
  (*(code *)PTR_guard_check_icall_0040a1e4)();
  (*pcVar1)();
  return 0;
}



/* Function: FUN_00404e70 */

void __thiscall FUN_00404e70(void *this,int param_1)

{
  FUN_00403c55(this,0x66,param_1,(undefined4 *)0x0);
  return;
}



/* Function: FUN_00404e8c */

void __thiscall FUN_00404e8c(void *this,undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401a0c,this,0);
  return;
}



/* Function: FUN_00404eb4 */

void __thiscall FUN_00404eb4(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401a0c,this,param_3,0x10,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_00404ee7 */

void __fastcall
FUN_00404ee7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TraceMessage(param_3,param_4,0x2b,param_2,param_1,&stack0x0000000c,4,0);
  return;
}



/* Function: FUN_00404f11 */

void FUN_00404f11(undefined4 param_1,undefined4 param_2)

{
  TraceMessage(param_1,param_2,0x2b,&DAT_00401a0c,0x15,&stack0x0000000c,4,&stack0x00000010,4,0);
  return;
}



/* Function: FUN_00404f46 */

void __thiscall FUN_00404f46(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_3 == (char *)0x0) {
    pcVar3 = (char *)0x5;
  }
  else {
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_3 + 1));
  }
  pcVar2 = "NULL";
  if (param_3 != (char *)0x0) {
    pcVar2 = param_3;
  }
  TraceMessage(param_1,param_2,0x2b,&DAT_00401a0c,this,pcVar2,pcVar3,0);
  return;
}



/* Function: FUN_00404fa0 */

undefined4 FUN_00404fa0(int param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 2) {
    if (param_5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(param_4 * 0x32) / param_5;
    }
    uVar3 = uVar2 + 0x32;
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar3 = uVar2;
    }
    iVar1 = **(int **)(param_1 + 0x50);
    (*(code *)PTR_guard_check_icall_0040a1e4)(*(int **)(param_1 + 0x50),uVar3);
    (**(code **)(iVar1 + 0xc))();
  }
  return 0;
}



/* Function: FUN_00404ff0 */

undefined4 FUN_00404ff0(void)

{
  return 0;
}



/* Function: FUN_00405000 */

int FUN_00405000(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  int *unaff_EBX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piStack_1c;
  uint local_18;
  uint local_14 [4];
  
  if ((((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
      ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) && (1 < (byte)PTR_LOOP_00409048[0x19]))
  {
    FUN_00404e8c((void *)0xa,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
  }
  if (((*(int *)(param_1 + 0x2c) == 0) && ((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048))
     && (((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0 && (PTR_LOOP_00409048[0x19] != '\0')))
     ) {
    FUN_00404f46((void *)0xb,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409048 + 0x14),"m_eConflictPolicy != CRP_NONE");
  }
  if (((*(int *)(param_1 + 0x2c) == 3) && ((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048))
     && (((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0 && (PTR_LOOP_00409048[0x19] != '\0')))
     ) {
    FUN_00404f46((void *)0xc,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409048 + 0x14),"m_eConflictPolicy != CRP_LAST");
  }
  if (param_2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  local_14[0] = 0;
  local_18 = 0;
  pcVar1 = *(code **)(*param_2 + 0xc);
  (*(code *)PTR_guard_check_icall_0040a1e4)(param_2,local_14);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004052f1;
    uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
    uVar4 = 0xd;
  }
  else {
    pcVar1 = *(code **)(*param_2 + 0x10);
    (*(code *)PTR_guard_check_icall_0040a1e4)(param_2,&stack0xffffffe0);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
         ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004052f1;
      uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
      uVar4 = 0xe;
    }
    else {
      pcVar1 = *(code **)(*piStack_1c + 0x1c);
      (*(code *)PTR_guard_check_icall_0040a1e4)(piStack_1c,&local_18);
      iVar2 = (*pcVar1)();
      if (iVar2 < 0) {
        if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
           ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004052f1;
        uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
        uVar4 = 0xf;
      }
      else {
        pcVar1 = *(code **)(*unaff_EBX + 0x1c);
        (*(code *)PTR_guard_check_icall_0040a1e4)(unaff_EBX,local_14);
        iVar2 = (*pcVar1)();
        if (-1 < iVar2) {
          if ((local_18 & 1) == 0) {
            if ((local_14[0] & 1) == 0) {
              cVar3 = (*(int *)(param_1 + 0x2c) != 1) + '\x01';
            }
            else {
              if ((((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
                  ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) &&
                 (1 < (byte)PTR_LOOP_00409048[0x19])) {
                FUN_00404e8c((void *)0x12,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                             *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
              }
              cVar3 = '\x02';
            }
          }
          else {
            if ((((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
                ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) &&
               (1 < (byte)PTR_LOOP_00409048[0x19])) {
              FUN_00404e8c((void *)0x11,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                           *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
            }
            cVar3 = '\x01';
          }
          if ((((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
              ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) &&
             (1 < (byte)PTR_LOOP_00409048[0x19])) {
            FUN_00404ee7(0x13,&DAT_00401a0c,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
          }
          if ((((cVar3 != '\x01') && (cVar3 != '\x02')) &&
              ((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048)) &&
             (((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0 &&
              (PTR_LOOP_00409048[0x19] != '\0')))) {
            FUN_00404f46((void *)0x14,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409048 + 0x14),
                         "((sra == SRA_ACCEPT_DESTINATION_PROVIDER) || (sra == SRA_ACCEPT_SOURCE_PROVIDER))"
                        );
          }
          pcVar1 = *(code **)(*param_2 + 0x20);
          (*(code *)PTR_guard_check_icall_0040a1e4)(param_2,cVar3);
          iVar2 = (*pcVar1)();
          if (((iVar2 < 0) && ((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048)) &&
             ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
            FUN_00404f11(*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                         *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
          }
          goto LAB_004052f1;
        }
        if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
           ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004052f1;
        uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
        uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
        uVar4 = 0x10;
      }
    }
  }
  FUN_00404ee7(uVar4,&DAT_00401a0c,uVar5,uVar6);
LAB_004052f1:
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&stack0xffffffe0);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&piStack_1c);
  return iVar2;
}



/* Function: FUN_00405320 */

void FUN_00405320(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return;
}



/* Function: FUN_00405340 */

undefined4 FUN_00405340(int param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    FUN_004059c8((void *)(param_1 + -4),param_2);
  }
  return 0;
}



/* Function: FUN_00405370 */

undefined4 *
FUN_00405370(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  LPCRITICAL_SECTION p_Var3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *puStack_1c;
  int local_18;
  LPCRITICAL_SECTION p_Stack_14;
  int iStack_10;
  LPCRITICAL_SECTION local_c;
  
  puVar7 = (undefined4 *)0x0;
  local_18 = 0;
  puVar6 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  if ((((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
      ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) && (1 < (byte)PTR_LOOP_00409048[0x19]))
  {
    FUN_00404e8c((void *)0x16,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
  }
  if (param_5 == (int *)0x0) {
    puVar4 = (undefined4 *)0x80070057;
    if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
      FUN_00404ee7(0x17,&DAT_00401a0c,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
    }
    p_Var3 = (LPCRITICAL_SECTION)(param_1 + 0x15);
  }
  else {
    local_c = (LPCRITICAL_SECTION)(param_1 + 0x15);
    if (*(int *)local_c != 0) {
      puVar4 = (undefined4 *)0x80004004;
      goto LAB_00405802;
    }
    FUN_00404c5a((int *)local_c,param_5);
    pcVar5 = *(code **)*param_1;
    (*(code *)PTR_guard_check_icall_0040a1e4)(param_1,&DAT_00401a90,&local_18);
    puVar4 = (undefined4 *)(*pcVar5)();
    if ((int)puVar4 < 0) {
      if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
         ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
        uVar1 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
        uVar9 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
        uVar8 = 0x18;
LAB_004057a8:
        FUN_00404ee7(uVar8,&DAT_00401a0c,uVar9,uVar1);
      }
    }
    else {
      puVar4 = (undefined4 *)Ordinal_1(&DAT_00401a6c,&local_28);
      if ((int)puVar4 < 0) {
        if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
           ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
          uVar1 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
          uVar9 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
          uVar8 = 0x19;
          goto LAB_004057a8;
        }
      }
      else {
        puVar4 = (undefined4 *)
                 CoCreateInstance((IID *)&DAT_00401a4c,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401a1c,
                                  &local_2c);
        if ((int)puVar4 < 0) {
          if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
             ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
            uVar1 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
            uVar9 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
            uVar8 = 0x1a;
            goto LAB_004057a8;
          }
        }
        else {
          puVar4 = (undefined4 *)FUN_00405fad(local_2c,param_2,&local_20);
          puVar7 = local_20;
          if ((int)puVar4 < 0) {
            if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
               ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
              FUN_00404eb4((void *)0x1b,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                           *(undefined4 *)(PTR_LOOP_00409048 + 0x14),param_2);
              puVar7 = local_20;
            }
          }
          else {
            puVar6 = (undefined4 *)*local_20;
            (*(code *)PTR_guard_check_icall_0040a1e4)(local_20,&DAT_00401a2c,&local_30);
            (*(code *)*puVar6)();
            puVar4 = (undefined4 *)FUN_00405fad(local_2c,param_3,&local_24);
            puVar6 = local_24;
            puStack_1c = puVar4;
            if (-1 < (int)puVar4) {
              if (local_30 == (int *)0x0) {
                puVar4 = (undefined4 *)*local_24;
                (*(code *)PTR_guard_check_icall_0040a1e4)(local_24,&DAT_00401a2c,&local_30);
                (*(code *)*puVar4)();
                if (local_30 != (int *)0x0) goto LAB_004055d1;
              }
              else {
LAB_004055d1:
                pcVar5 = *(code **)(*local_30 + 0xc);
                (*(code *)PTR_guard_check_icall_0040a1e4)(local_30,param_4);
                (*pcVar5)();
              }
              iStack_10 = 0;
              puVar4 = puStack_1c;
              while (puStack_1c = puVar4, iStack_10 == 0) {
                p_Var3 = (LPCRITICAL_SECTION)(param_1 + 0xd);
                p_Stack_14 = p_Var3;
                EnterCriticalSection(p_Var3);
                if (param_1[10] != 0) {
                  LeaveCriticalSection(p_Var3);
                  puVar4 = (undefined4 *)0x80004004;
                  goto LAB_00405802;
                }
                iVar2 = 0;
                if (param_1[0xb] == 0) {
                  do {
                    if (*(int *)(param_4 + iVar2 * 4) != *(int *)(param_2 + iVar2 * 4)) {
                      uVar1 = 2;
                      goto LAB_00405668;
                    }
                    iVar2 = iVar2 + 1;
                  } while (iVar2 != 4);
                  uVar1 = 1;
LAB_00405668:
                  param_1[0xc] = uVar1;
                  pcVar5 = *(code **)(*local_28 + 0xc);
                  puVar4 = puVar7;
                  puVar10 = puVar6;
                }
                else {
                  do {
                    if (*(int *)(param_4 + iVar2 * 4) != *(int *)(param_2 + iVar2 * 4)) {
                      uVar1 = 1;
                      goto LAB_0040563b;
                    }
                    iVar2 = iVar2 + 1;
                  } while (iVar2 != 4);
                  uVar1 = 2;
LAB_0040563b:
                  param_1[0xc] = uVar1;
                  pcVar5 = *(code **)(*local_28 + 0xc);
                  puVar4 = puVar6;
                  puVar10 = puVar7;
                }
                puStack_1c = param_1 + 0x14;
                (*(code *)PTR_guard_check_icall_0040a1e4)(local_28,puVar4,puVar10,puStack_1c);
                puVar4 = (undefined4 *)(*pcVar5)();
                LeaveCriticalSection(p_Stack_14);
                if ((int)puVar4 < 0) {
                  if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
                     ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004057b3;
                  uVar1 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
                  uVar9 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
                  uVar8 = 0x1d;
                  goto LAB_004057a8;
                }
                pcVar5 = *(code **)(*(int *)*puStack_1c + 0xc);
                (*(code *)PTR_guard_check_icall_0040a1e4)((int *)*puStack_1c,local_18);
                puVar4 = (undefined4 *)(*pcVar5)();
                if ((int)puVar4 < 0) {
                  if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
                     ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004057b3;
                  uVar1 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
                  uVar9 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
                  uVar8 = 0x1e;
                  goto LAB_004057a8;
                }
                pcVar5 = *(code **)(*(int *)*puStack_1c + 0x10);
                (*(code *)PTR_guard_check_icall_0040a1e4)((int *)*puStack_1c,0,0);
                puVar4 = (undefined4 *)(*pcVar5)();
                puStack_1c = puVar4;
                if ((int)puVar4 < 0) {
                  if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
                     ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004057b3;
                  uVar1 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
                  uVar9 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
                  uVar8 = 0x1f;
                  goto LAB_004057a8;
                }
                EnterCriticalSection(p_Stack_14);
                if (param_1[0xb] == 0) {
                  if (param_1[0x14] != 0) {
                    FUN_00404c5a(param_1 + 0x14,(int *)0x0);
                  }
                  param_1[0xb] = 1;
                  if (local_30 != (int *)0x0) {
                    pcVar5 = *(code **)(*local_30 + 0x10);
                    (*(code *)PTR_guard_check_icall_0040a1e4)(local_30);
                    (*pcVar5)();
                    puVar4 = puStack_1c;
                  }
                }
                else {
                  iStack_10 = 1;
                }
                LeaveCriticalSection(p_Stack_14);
              }
              pcVar5 = *(code **)(**(int **)local_c + 0xc);
              (*(code *)PTR_guard_check_icall_0040a1e4)(*(int **)local_c,100);
              (*pcVar5)();
              puVar4 = puStack_1c;
              goto LAB_00405802;
            }
            if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
               ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
              FUN_00404eb4((void *)0x1c,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                           *(undefined4 *)(PTR_LOOP_00409048 + 0x14),param_3);
              puVar6 = local_24;
            }
          }
        }
      }
    }
LAB_004057b3:
    p_Var3 = local_c;
    if (puVar4 == (undefined4 *)0x80004004) goto LAB_00405802;
  }
  if (*(int *)p_Var3 != 0) {
    FUN_00405bd7(puVar7,puVar6,(DWORD)puVar4);
    puVar4 = (undefined4 *)0x0;
  }
LAB_00405802:
  local_c = (LPCRITICAL_SECTION)(param_1 + 0xd);
  EnterCriticalSection(local_c);
  if (param_1[0x14] != 0) {
    FUN_00404c5a(param_1 + 0x14,(int *)0x0);
  }
  LeaveCriticalSection(local_c);
  if (puVar7 != (undefined4 *)0x0) {
    FUN_00404c5a((int *)&local_20,(int *)0x0);
  }
  if (puVar6 != (undefined4 *)0x0) {
    FUN_00404c5a((int *)&local_24,(int *)0x0);
  }
  if (local_18 != 0) {
    FUN_00404c5a(&local_18,(int *)0x0);
  }
  if (local_28 != (int *)0x0) {
    FUN_00404c5a((int *)&local_28,(int *)0x0);
  }
  if (local_2c != (int *)0x0) {
    FUN_00404c5a((int *)&local_2c,(int *)0x0);
  }
  if (local_30 != (int *)0x0) {
    FUN_00404c5a((int *)&local_30,(int *)0x0);
  }
  if ((((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
      ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) && (1 < (byte)PTR_LOOP_00409048[0x19]))
  {
    FUN_00404e8c((void *)0x20,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
  }
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_30);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_2c);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_28);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_18);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_24);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_20);
  return puVar4;
}



/* Function: FUN_00405910 */

undefined4 FUN_00405910(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
      ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) && (1 < (byte)PTR_LOOP_00409048[0x19]))
  {
    FUN_00404e8c((void *)0x21,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x28) = 1;
  piVar2 = (int *)0x0;
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    FUN_00404c5a((int *)&local_8,*(int **)(param_1 + 0x50));
    piVar2 = local_8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0x14);
    (*(code *)PTR_guard_check_icall_0040a1e4)(piVar2);
    (*pcVar1)();
  }
  if ((((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
      ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) && (1 < (byte)PTR_LOOP_00409048[0x19]))
  {
    FUN_00404e8c((void *)0x22,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
  }
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_8);
  return 0;
}



/* Function: FUN_004059c8 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_004059c8(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  HRESULT HVar3;
  int *unaff_ESI;
  undefined4 uStackY_444;
  undefined4 uVar4;
  undefined4 uVar5;
  LPWSTR pWStack_41c;
  LPWSTR local_418;
  LPVOID pvStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  uint auStack_404 [251];
  uint uStack_18;
  uint local_c;
  
  local_c = DAT_00409080 ^ (uint)&pWStack_41c;
  local_410 = 0;
  uStack_40c = 0;
  uStack_408 = 0;
  auStack_404[0] = 0;
  auStack_404[1] = 0;
  local_418 = (LPWSTR)0x0;
  pcVar1 = *(code **)(*param_1 + 0x18);
  (*(code *)PTR_guard_check_icall_0040a1e4)(param_1,auStack_404 + 1,&local_418);
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00405b75;
    uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
    uStackY_444 = 0x23;
  }
  else {
    if (unaff_ESI == (int *)0x0) goto LAB_00405b75;
    auStack_404[0] = auStack_404[0] & 0xffff0000;
    pcVar1 = *(code **)(*unaff_ESI + 0x10);
    (*(code *)PTR_guard_check_icall_0040a1e4)(unaff_ESI,auStack_404,&stack0xfffffbe0);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      HVar3 = SHStrDupW((LPCWSTR)auStack_404,&pWStack_41c);
      if (HVar3 < 0) {
        if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
           ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00405b75;
        uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
        uStackY_444 = 0x24;
        goto LAB_00405b6a;
      }
    }
    auStack_404[0] = auStack_404[0] & 0xffff0000;
    pcVar1 = *(code **)(*unaff_ESI + 0x14);
    (*(code *)PTR_guard_check_icall_0040a1e4)(unaff_ESI,auStack_404,&stack0xfffffbe0);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      HVar3 = SHStrDupW((LPCWSTR)auStack_404,&local_418);
      if (HVar3 < 0) {
        if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
           ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00405b75;
        uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
        uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
        uStackY_444 = 0x25;
        goto LAB_00405b6a;
      }
    }
    pcVar1 = *(code **)(**(int **)((int)this + 0x54) + 0x10);
    (*(code *)PTR_guard_check_icall_0040a1e4)(*(int **)((int)this + 0x54),&pWStack_41c,&uStack_408);
    iVar2 = (*pcVar1)();
    if (((-1 < iVar2) || ((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048)) ||
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00405b75;
    uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
    uStackY_444 = 0x26;
  }
LAB_00405b6a:
  FUN_00404ee7(uStackY_444,&DAT_00401a0c,uVar4,uVar5);
LAB_00405b75:
  if (pWStack_41c != (LPWSTR)0x0) {
    CoTaskMemFree(pWStack_41c);
    pWStack_41c = (LPWSTR)0x0;
  }
  if (local_418 != (LPWSTR)0x0) {
    CoTaskMemFree(local_418);
    local_418 = (LPWSTR)0x0;
  }
  if (pvStack_414 != (LPVOID)0x0) {
    CoTaskMemFree(pvStack_414);
    pvStack_414 = (LPVOID)0x0;
  }
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&stack0xfffffbdc);
  FUN_004076f0(uStack_18 ^ (uint)&stack0xfffffbd8);
  return;
}



/* Function: FUN_00405bd7 */

void FUN_00405bd7(undefined4 *param_1,undefined4 *param_2,DWORD param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  HRESULT HVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_28c;
  undefined8 local_288;
  LPWSTR local_280;
  undefined4 local_27c;
  DWORD local_278;
  int *local_274;
  int *local_270;
  LPCWSTR local_26c;
  WCHAR local_268 [302];
  uint local_c;
  
  local_c = DAT_00409080 ^ (uint)&stack0xfffffffc;
  if ((((-1 < (int)param_3) && ((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048)) &&
      ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) && (PTR_LOOP_00409048[0x19] != '\0')) {
    FUN_00404f46((void *)0x27,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                 *(undefined4 *)(PTR_LOOP_00409048 + 0x14),"FAILED(hrError)");
  }
  local_28c = 0;
  local_280 = (LPWSTR)0x0;
  local_274 = (int *)0x0;
  local_288 = 0;
  local_27c = 1;
  local_278 = param_3;
  iVar3 = Ordinal_200(0,&local_274);
  if ((iVar3 == 0) && (local_274 != (int *)0x0)) {
    local_26c = (LPCWSTR)0x0;
    pcVar1 = *(code **)(*local_274 + 0x14);
    (*(code *)PTR_guard_check_icall_0040a1e4)(local_274,&local_26c);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      HVar4 = SHStrDupW(local_26c,&local_280);
      if (HVar4 < 0) {
        if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
           ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
          FUN_00404ee7(0x28,&DAT_00401a0c,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
        }
        Ordinal_6(local_26c);
        goto LAB_00405f37;
      }
    }
    Ordinal_6(local_26c);
LAB_00405d06:
    pcVar1 = *(code **)(*(int *)local_270[0x15] + 0x10);
    (*(code *)PTR_guard_check_icall_0040a1e4)((int *)local_270[0x15],&local_288,&local_28c);
    iVar3 = (*pcVar1)();
    if (-1 < iVar3) {
      if (local_28c == 0) goto LAB_00405f37;
      local_26c = (LPCWSTR)0x0;
      if (param_1 == (undefined4 *)0x0) {
LAB_00405eff:
        if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
           ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
          FUN_00404ee7(0x2b,&DAT_00401a0c,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                       *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
        }
      }
      else {
        puVar2 = (undefined4 *)*param_1;
        (*(code *)PTR_guard_check_icall_0040a1e4)(param_1,&DAT_004019dc,&local_26c);
        (*(code *)*puVar2)();
        if (local_26c == (LPCWSTR)0x0) goto LAB_00405eff;
        local_270 = (int *)0x0;
        if (param_2 == (undefined4 *)0x0) {
LAB_00405ec5:
          if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
             ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
            uVar8 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
            uVar7 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
            uVar6 = 0x2c;
LAB_00405ee7:
            FUN_00404ee7(uVar6,&DAT_00401a0c,uVar7,uVar8);
          }
        }
        else {
          puVar2 = (undefined4 *)*param_2;
          (*(code *)PTR_guard_check_icall_0040a1e4)(param_2,&DAT_004019dc,&local_270);
          (*(code *)*puVar2)();
          if (local_270 == (int *)0x0) goto LAB_00405ec5;
          pcVar1 = *(code **)(*(int *)local_26c + 0x14);
          (*(code *)PTR_guard_check_icall_0040a1e4)(local_26c);
          iVar3 = (*pcVar1)();
          if (iVar3 < 0) {
            if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
               ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00405ef2;
            uVar8 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
            uVar7 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
            uVar6 = 0x2d;
            goto LAB_00405ee7;
          }
          pcVar1 = *(code **)(*local_270 + 0x14);
          (*(code *)PTR_guard_check_icall_0040a1e4)(local_270);
          iVar3 = (*pcVar1)();
          if (((iVar3 < 0) && ((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048)) &&
             ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
            uVar8 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
            uVar7 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
            uVar6 = 0x2e;
            goto LAB_00405ee7;
          }
        }
LAB_00405ef2:
        CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_270);
      }
      CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_26c);
      goto LAB_00405f37;
    }
    if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00405f37;
    uVar8 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
    uVar6 = 0x2a;
  }
  else {
    DVar5 = FormatMessageW(0x1000,(LPCVOID)0x0,local_278,0,local_268,300,(va_list *)0x0);
    if (DVar5 == 0) goto LAB_00405d06;
    HVar4 = SHStrDupW(local_268,&local_280);
    if (-1 < HVar4) goto LAB_00405d06;
    if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00405f37;
    uVar8 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
    uVar7 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
    uVar6 = 0x29;
  }
  FUN_00404ee7(uVar6,&DAT_00401a0c,uVar7,uVar8);
LAB_00405f37:
  if ((LPVOID)local_288 != (LPVOID)0x0) {
    CoTaskMemFree((LPVOID)local_288);
    local_288 = local_288 & 0xffffffff00000000;
  }
  if (local_288._4_4_ != (LPVOID)0x0) {
    CoTaskMemFree(local_288._4_4_);
    local_288 = local_288 & 0xffffffff;
  }
  if (local_280 != (LPWSTR)0x0) {
    CoTaskMemFree(local_280);
    local_280 = (LPWSTR)0x0;
  }
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_274);
  FUN_004076f0(local_c ^ (uint)&stack0xfffffffc);
  return;
}



/* Function: FUN_00405fad */

int FUN_00405fad(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  *param_3 = 0;
  pcVar1 = *(code **)(*param_1 + 0x2c);
  (*(code *)PTR_guard_check_icall_0040a1e4)(param_1,param_2,1,&local_c);
  iVar3 = (*pcVar1)();
  if (iVar3 < 0) {
    if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
      FUN_00404eb4((void *)0x2f,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409048 + 0x14),param_2);
    }
  }
  else {
    pcVar1 = *(code **)*local_c;
    (*(code *)PTR_guard_check_icall_0040a1e4)(local_c,&DAT_004019fc,&local_8);
    iVar3 = (*pcVar1)();
    uVar2 = local_8;
    if (iVar3 < 0) {
      if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
         ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
        FUN_00404ee7(0x30,&DAT_00401a0c,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
      }
    }
    else {
      local_8 = 0;
      *param_3 = uVar2;
    }
  }
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_c);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_8);
  return iVar3;
}



/* Function: FUN_00406090 */

int __thiscall FUN_00406090(void *this,int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_00406296(this,param_2,param_3);
  }
  else if (param_3 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar1 = -0x7ffbfef0;
  }
  return iVar1;
}



/* Function: FUN_004060d0 */

int FUN_004060d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar2 = -0x7ff8fff2;
    puVar3 = (undefined4 *)FUN_004073b1(0x28);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      puVar5 = puVar3 + 2;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(puVar3 + 8) = 0;
      *puVar3 = &PTR_FUN_00401038;
      puVar3[9] = param_1;
      iVar2 = FUN_004021ef((LPCRITICAL_SECTION)(puVar3 + 2));
      if (-1 < iVar2) {
        *(undefined1 *)(puVar3 + 8) = 1;
      }
      iVar4 = 0;
      if (iVar2 < 0) {
        iVar4 = iVar2;
      }
      iVar2 = 0;
      if (iVar4 < 0) {
        iVar2 = iVar4;
      }
      if (iVar2 == 0) {
        pcVar1 = *(code **)*puVar3;
        (*(code *)PTR_guard_check_icall_0040a1e4)(puVar3,param_2,param_3);
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          return 0;
        }
      }
      FUN_0040627a(puVar3);
      FUN_00407bb9(puVar3);
    }
  }
  return iVar2;
}



/* Function: FUN_0040617b */

int __fastcall FUN_0040617b(int *param_1)

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



/* Function: FUN_004061a5 */

int __fastcall FUN_004061a5(int *param_1)

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



/* Function: FUN_004061d5 */

void __fastcall FUN_004061d5(int param_1)

{
  if (*(char *)(param_1 + 0x1c) != '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  return;
}



/* Function: FUN_004061f0 */

void FUN_004061f0(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00404ca3(param_1,0x4011cc,param_2,param_3);
  return;
}



/* Function: FUN_00406220 */

int FUN_00406220(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040617b(param_1 + 1);
  if ((iVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_0040627a(param_1);
    FUN_00407bb9(param_1);
  }
  return iVar1;
}



/* Function: FUN_00406260 */

void FUN_00406260(int param_1)

{
  FUN_004061a5((int *)(param_1 + 4));
  return;
}



/* Function: FUN_0040627a */

void __fastcall FUN_0040627a(undefined4 *param_1)

{
  *param_1 = &PTR_o__purecall_00401084;
  param_1[1] = 0xc0000001;
  FUN_004061d5((int)(param_1 + 1));
  return;
}



/* Function: FUN_00406296 */

int __fastcall FUN_00406296(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar2 = -0x7ff8fff2;
    puVar3 = (undefined4 *)FUN_004073b1(0x58);
    if ((puVar3 != (undefined4 *)0x0) && (piVar4 = FUN_0040644c(puVar3), piVar4 != (int *)0x0)) {
      FUN_004061a5(piVar4 + 2);
      iVar5 = FUN_004021ef((LPCRITICAL_SECTION)(piVar4 + 3));
      if (-1 < iVar5) {
        *(undefined1 *)(piVar4 + 9) = 1;
        iVar5 = FUN_004021ef((LPCRITICAL_SECTION)(piVar4 + 0xd));
        if (-1 < iVar5) {
          *(undefined1 *)(piVar4 + 0x13) = 1;
        }
      }
      iVar2 = 0;
      if (iVar5 < 0) {
        iVar2 = iVar5;
      }
      FUN_0040617b(piVar4 + 2);
      if (iVar2 == 0) {
        pcVar1 = *(code **)*piVar4;
        (*(code *)PTR_guard_check_icall_0040a1e4)(piVar4,param_2,param_3);
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          return 0;
        }
      }
      pcVar1 = *(code **)(*piVar4 + 0x14);
      (*(code *)PTR_guard_check_icall_0040a1e4)(1);
      (*pcVar1)();
    }
  }
  return iVar2;
}



/* Function: FUN_00406350 */

void FUN_00406350(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00404ca3(param_1,0x4011a8,param_2,param_3);
  return;
}



/* Function: FUN_00406380 */

int FUN_00406380(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0040617b(param_1 + 2);
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*DAT_00409514 + 4);
    (*(code *)PTR_guard_check_icall_0040a1e4)();
    (*pcVar1)();
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x14);
      (*(code *)PTR_guard_check_icall_0040a1e4)(1);
      (*pcVar1)();
    }
    FUN_00404da9();
  }
  return iVar2;
}



/* Function: FUN_004063f0 */

void FUN_004063f0(int param_1)

{
  FUN_004061a5((int *)(param_1 + 8));
  return;
}



/* Function: FUN_0040640a */

void __fastcall FUN_0040640a(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_00409514;
  *param_1 = &PTR_FUN_0040106c;
  param_1[1] = &PTR_FUN_0040104c;
  param_1[2] = 0xc0000001;
  pcVar1 = *(code **)(*piVar2 + 8);
  (*(code *)PTR_guard_check_icall_0040a1e4)();
  (*pcVar1)();
  FUN_004064da((int)param_1);
  return;
}



/* Function: FUN_0040644c */

undefined4 * __fastcall FUN_0040644c(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  param_1[2] = 0;
  puVar4 = param_1 + 3;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar4 = param_1 + 0xd;
  for (iVar3 = 6; piVar2 = DAT_00409514, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_0040106c;
  param_1[1] = &PTR_FUN_0040104c;
  pcVar1 = *(code **)(*piVar2 + 4);
  (*(code *)PTR_guard_check_icall_0040a1e4)();
  (*pcVar1)();
  return param_1;
}



/* Function: FUN_004064b0 */

undefined4 * __thiscall FUN_004064b0(void *this,byte param_1)

{
  FUN_0040640a((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00407bb9(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_004064da */

void __fastcall FUN_004064da(int param_1)

{
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)(param_1 + 0x54));
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)(param_1 + 0x50));
  if (*(char *)(param_1 + 0x4c) != '\0') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  }
  FUN_004061d5(param_1 + 8);
  return;
}



/* Function: FUN_00406520 */

void FUN_00406520(int param_1)

{
  FUN_00406380((int *)(param_1 + -4));
  return;
}



/* Function: FUN_00406530 */

void FUN_00406530(int param_1)

{
  FUN_004063f0(param_1 + -4);
  return;
}



/* Function: FUN_00406540 */

void FUN_00406540(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00406350(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_00406550 */

void __thiscall FUN_00406550(void *this,int param_1)

{
  FUN_00403c55(this,0x67,param_1,(undefined4 *)0x0);
  return;
}



/* Function: FUN_0040656c */

int __fastcall FUN_0040656c(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *local_8;
  
  local_8 = (int *)0x0;
  *param_3 = 0;
  iVar2 = FUN_0040715a(&local_8);
  piVar3 = local_8;
  if (iVar2 < 0) {
    if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
      FUN_00404ee7(10,&DAT_00401ac4,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                   *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
      piVar3 = local_8;
    }
  }
  else {
    pcVar1 = *(code **)*local_8;
    (*(code *)PTR_guard_check_icall_0040a1e4)(local_8,&DAT_00401ae4,param_3);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
         ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
        FUN_00404ee7(0xb,&DAT_00401ac4,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                     *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
      }
    }
    else {
      if ((int *)piVar3[0xb] != param_1) {
        FUN_00404c5a(piVar3 + 0xb,param_1);
      }
      if ((int *)piVar3[10] != param_2) {
        FUN_00404c5a(piVar3 + 10,param_2);
      }
      piVar3 = (int *)0x0;
    }
  }
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 0x20);
    (*(code *)PTR_guard_check_icall_0040a1e4)(1);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_00406660 */

undefined4 FUN_00406660(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8000000a;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    (*(code *)PTR_guard_check_icall_0040a1e4)(piVar1,param_2);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004066a0 */

undefined4 FUN_004066a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8000000a;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    (*(code *)PTR_guard_check_icall_0040a1e4)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004066e0 */

undefined4 FUN_004066e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8000000a;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x14);
    (*(code *)PTR_guard_check_icall_0040a1e4)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406720 */

undefined4 FUN_00406720(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8000000a;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x18);
    (*(code *)PTR_guard_check_icall_0040a1e4)(piVar1,param_2,param_3);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_00406760 */

undefined4 FUN_00406760(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8000000a;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x1c);
    (*(code *)PTR_guard_check_icall_0040a1e4)(piVar1);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}



/* Function: FUN_004067a0 */

int FUN_004067a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uStackY_30;
  undefined4 uVar4;
  undefined4 uVar5;
  int *local_8;
  
  local_8 = (int *)0x0;
  piVar1 = (int *)(param_1 + 0x24);
  if ((int *)*piVar1 == (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x28) + 0x14);
    (*(code *)PTR_guard_check_icall_0040a1e4)(*(int **)(param_1 + 0x28),param_2,0,&local_8);
    iVar3 = (*pcVar2)();
    if (-1 < iVar3) {
      if (local_8 != (int *)0x0) goto LAB_00406813;
      iVar3 = -0x7fffbffb;
    }
    if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004068a4;
    uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
    uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
    uStackY_30 = 0xd;
  }
  else {
    FUN_00404c5a((int *)&local_8,(int *)*piVar1);
    pcVar2 = *(code **)(**(int **)(param_1 + 0x28) + 0x18);
    (*(code *)PTR_guard_check_icall_0040a1e4)(*(int **)(param_1 + 0x28),param_2,0,local_8);
    iVar3 = (*pcVar2)();
    if (iVar3 < 0) {
      if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
         ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004068a4;
      uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
      uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
      uStackY_30 = 0xc;
    }
    else {
LAB_00406813:
      pcVar2 = *(code **)(*local_8 + 0x1c);
      (*(code *)PTR_guard_check_icall_0040a1e4)(local_8);
      iVar3 = (*pcVar2)();
      if (-1 < iVar3) {
        if ((int *)*piVar1 != local_8) {
          FUN_00404c5a(piVar1,local_8);
        }
        goto LAB_004068a4;
      }
      if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
         ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_004068a4;
      uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
      uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
      uStackY_30 = 0xe;
    }
  }
  FUN_00404ee7(uStackY_30,&DAT_00401ac4,uVar4,uVar5);
LAB_004068a4:
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_8);
  return iVar3;
}



/* Function: FUN_004068d0 */

int FUN_004068d0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puStack_28;
  int *local_24;
  int *local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  if (param_4 == (undefined4 *)0x0) {
    iVar3 = -0x7fffbffd;
    if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00406b55;
    uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
    uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
    uVar4 = 0xf;
  }
  else {
    *param_4 = 0;
    pcVar1 = *(code **)(**(int **)(param_1 + 0x24) + 0x30);
    (*(code *)PTR_guard_check_icall_0040a1e4)(*(int **)(param_1 + 0x24),param_2,&local_20);
    iVar3 = (*pcVar1)();
    if (iVar3 < 0) {
      if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
         ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00406b55;
      uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
      uVar4 = 0x10;
    }
    else {
      pcVar1 = *(code **)(*local_20 + 0x20);
      (*(code *)PTR_guard_check_icall_0040a1e4)(local_20,1,&local_24);
      iVar3 = (*pcVar1)();
      if (-1 < iVar3) {
        puStack_28 = (undefined4 *)0x0;
        if (param_3 != 0) {
          pcVar1 = *(code **)(*local_24 + 0x14);
          (*(code *)PTR_guard_check_icall_0040a1e4)(local_24,0,0,&puStack_28);
          iVar3 = (*pcVar1)();
          if (iVar3 < 0) {
            if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
               ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
              FUN_00404ee7(0x12,&DAT_00401ac4,*(undefined4 *)(PTR_LOOP_00409048 + 0x10),
                           *(undefined4 *)(PTR_LOOP_00409048 + 0x14));
            }
          }
          else if (puStack_28 == (undefined4 *)0x0) {
            iVar3 = -0x7fffbffb;
          }
          else {
            pcVar1 = *(code **)*puStack_28;
            (*(code *)PTR_guard_check_icall_0040a1e4)(puStack_28,&DAT_00401ae4,param_4);
            iVar3 = (*pcVar1)();
          }
          CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&puStack_28);
          goto LAB_00406b55;
        }
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        pcVar1 = *(code **)(*local_20 + 0x14);
        (*(code *)PTR_guard_check_icall_0040a1e4)(local_20,&DAT_00401a7c,&uStack_18);
        iVar3 = (*pcVar1)();
        if (iVar3 < 0) {
          if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
             ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
            uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
            uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
            uVar4 = 0x13;
LAB_00406aa9:
            FUN_00404ee7(uVar4,&DAT_00401ac4,uVar5,uVar6);
          }
        }
        else {
          iVar3 = PropVariantToUInt32(&uStack_18,&uStack_1c);
          PropVariantClear((PROPVARIANT *)&uStack_18);
          if (iVar3 < 0) {
            if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
               ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
              uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
              uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
              uVar4 = 0x14;
              goto LAB_00406aa9;
            }
          }
          else if ((uStack_1c & 4) == 0) {
            iVar3 = FUN_0040656c(local_24,(int *)0x0,&puStack_28);
            puVar2 = puStack_28;
            if (iVar3 < 0) {
              if (((undefined **)PTR_LOOP_00409048 != &PTR_LOOP_00409048) &&
                 ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) != 0)) {
                uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
                uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
                uVar4 = 0x15;
                goto LAB_00406aa9;
              }
            }
            else {
              puStack_28 = (undefined4 *)0x0;
              *param_4 = puVar2;
            }
          }
          else {
            iVar3 = -0x7fff0001;
          }
        }
        CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&puStack_28);
        goto LAB_00406b55;
      }
      if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
         ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00406b55;
      uVar6 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
      uVar5 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
      uVar4 = 0x11;
    }
  }
  FUN_00404ee7(uVar4,&DAT_00401ac4,uVar5,uVar6);
LAB_00406b55:
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_24);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_20);
  return iVar3;
}



/* Function: FUN_00406b80 */

void FUN_00406b80(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStackY_60;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_44 [4];
  int *local_40;
  int *piStack_3c;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_1c [4];
  uint local_c;
  
  local_c = DAT_00409080 ^ (uint)auStack_44;
  local_38 = param_1;
  local_30 = 0;
  local_40 = (int *)0x0;
  local_34 = (int *)0x0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (param_3 == (undefined4 *)0x0) {
    if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
       ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00406daf;
    uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
    uVar3 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
    uStackY_60 = 0x16;
  }
  else {
    *param_3 = 0;
    pcVar1 = *(code **)(**(int **)(param_1 + 0x24) + 0x28);
    (*(code *)PTR_guard_check_icall_0040a1e4)(*(int **)(param_1 + 0x24),param_2,&local_40);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      if (((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048) ||
         ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00406daf;
      uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
      uVar3 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
      uStackY_60 = 0x17;
    }
    else {
      pcVar1 = *(code **)(*local_40 + 0x14);
      (*(code *)PTR_guard_check_icall_0040a1e4)(local_40,&LAB_00401aa0,&local_30);
      iVar2 = (*pcVar1)();
      if ((-1 < iVar2) && (iVar2 = PropVariantToGUID(&local_30,aiStack_1c), -1 < iVar2)) {
        iVar2 = 0;
        do {
          if ((&DAT_00401468)[iVar2] != aiStack_1c[iVar2]) {
            piStack_3c = (int *)0x0;
            pcVar1 = *(code **)(**(int **)(local_38 + 0x24) + 0x30);
            (*(code *)PTR_guard_check_icall_0040a1e4)
                      (*(int **)(local_38 + 0x24),aiStack_1c,&piStack_3c);
            iVar2 = (*pcVar1)();
            if (-1 < iVar2) {
              PropVariantClear((PROPVARIANT *)&local_30);
              pcVar1 = *(code **)(*piStack_3c + 0x14);
              (*(code *)PTR_guard_check_icall_0040a1e4)(piStack_3c,&DAT_00401a7c,&local_30);
              iVar2 = (*pcVar1)();
              if (-1 < iVar2) {
                local_38 = 0;
                iVar2 = PropVariantToUInt32(&local_30,&local_38);
                if ((-1 < iVar2) && ((local_38 & 8) == 0)) {
                  iVar2 = *piStack_3c;
                  (*(code *)PTR_guard_check_icall_0040a1e4)(piStack_3c,1,&local_34);
                  (**(code **)(iVar2 + 0x20))();
                }
              }
            }
            CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&piStack_3c);
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
      }
      if (local_34 == (int *)0x0) {
        pcVar1 = *(code **)*local_40;
        (*(code *)PTR_guard_check_icall_0040a1e4)(local_40,&DAT_00401ae4);
        iVar2 = (*pcVar1)();
        if (((-1 < iVar2) || ((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048)) ||
           ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00406daf;
        uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
        uVar3 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
        uStackY_60 = 0x18;
      }
      else {
        iVar2 = FUN_0040656c(local_34,local_40,param_3);
        if (((-1 < iVar2) || ((undefined **)PTR_LOOP_00409048 == &PTR_LOOP_00409048)) ||
           ((*(uint *)(PTR_LOOP_00409048 + 0x1c) & 0x2000) == 0)) goto LAB_00406daf;
        uVar4 = *(undefined4 *)(PTR_LOOP_00409048 + 0x14);
        uVar3 = *(undefined4 *)(PTR_LOOP_00409048 + 0x10);
        uStackY_60 = 0x19;
      }
    }
  }
  FUN_00404ee7(uStackY_60,&DAT_00401ac4,uVar3,uVar4);
LAB_00406daf:
  PropVariantClear((PROPVARIANT *)&local_30);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_34);
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)&local_40);
  FUN_004076f0(local_c ^ (uint)auStack_44);
  return;
}



/* Function: FUN_00406df0 */

void FUN_00406df0(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00404ca3(param_1,0x4011e4,param_2,param_3);
  return;
}



/* Function: FUN_00406e20 */

int FUN_00406e20(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0040617b(param_1 + 2);
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*DAT_00409514 + 4);
    (*(code *)PTR_guard_check_icall_0040a1e4)();
    (*pcVar1)();
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x20);
      (*(code *)PTR_guard_check_icall_0040a1e4)(1);
      (*pcVar1)();
    }
    FUN_00404da9();
  }
  return iVar2;
}



/* Function: FUN_00406e82 */

void __fastcall FUN_00406e82(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_00409514;
  *param_1 = &PTR_FUN_00401098;
  param_1[1] = &PTR_FUN_004010bc;
  param_1[2] = 0xc0000001;
  pcVar1 = *(code **)(*piVar2 + 8);
  (*(code *)PTR_guard_check_icall_0040a1e4)();
  (*pcVar1)();
  FUN_00406f3a((int)param_1);
  return;
}



/* Function: FUN_00406ed0 */

int __thiscall FUN_00406ed0(void *this,int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_00406f5e(this,param_2,param_3);
  }
  else if (param_3 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar1 = -0x7ffbfef0;
  }
  return iVar1;
}



/* Function: FUN_00406f10 */

undefined4 * __thiscall FUN_00406f10(void *this,byte param_1)

{
  FUN_00406e82((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00407bb9(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00406f3a */

void __fastcall FUN_00406f3a(int param_1)

{
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)(param_1 + 0x2c));
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)(param_1 + 0x28));
  FUN_004061d5(param_1 + 8);
  return;
}



/* Function: FUN_00406f5e */

int __fastcall FUN_00406f5e(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar3 = -0x7ff8fff2;
    piVar4 = (int *)FUN_004073b1(0x28);
    if (piVar4 != (int *)0x0) {
      piVar4[1] = 0;
      piVar6 = piVar4 + 2;
      for (iVar3 = 6; piVar2 = DAT_00409514, iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      *(undefined1 *)(piVar4 + 8) = 0;
      piVar4[9] = 0;
      *piVar4 = (int)&PTR_FUN_004010cc;
      pcVar1 = *(code **)(*piVar2 + 4);
      (*(code *)PTR_guard_check_icall_0040a1e4)();
      (*pcVar1)();
      FUN_004061a5(piVar4 + 1);
      iVar5 = FUN_004021ef((LPCRITICAL_SECTION)(piVar4 + 2));
      if (-1 < iVar5) {
        *(undefined1 *)(piVar4 + 8) = 1;
        iVar5 = CoCreateInstance((IID *)&DAT_00401a4c,(LPUNKNOWN)0x0,1,(IID *)&DAT_00401a1c,
                                 (LPVOID *)(piVar4 + 9));
      }
      iVar3 = 0;
      if (iVar5 < 0) {
        iVar3 = iVar5;
      }
      FUN_0040617b(piVar4 + 1);
      if (iVar3 == 0) {
        pcVar1 = *(code **)*piVar4;
        (*(code *)PTR_guard_check_icall_0040a1e4)(piVar4,param_2,param_3);
        iVar3 = (*pcVar1)();
        if (iVar3 == 0) {
          return 0;
        }
      }
      pcVar1 = *(code **)(*piVar4 + 0x14);
      (*(code *)PTR_guard_check_icall_0040a1e4)(1);
      (*pcVar1)();
    }
  }
  return iVar3;
}



/* Function: FUN_00407050 */

void FUN_00407050(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00404ca3(param_1,0x401208,param_2,param_3);
  return;
}



/* Function: FUN_00407080 */

int FUN_00407080(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0040617b(param_1 + 1);
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*DAT_00409514 + 4);
    (*(code *)PTR_guard_check_icall_0040a1e4)();
    (*pcVar1)();
    if (param_1 != (int *)0x0) {
      pcVar1 = *(code **)(*param_1 + 0x14);
      (*(code *)PTR_guard_check_icall_0040a1e4)(1);
      (*pcVar1)();
    }
    FUN_00404da9();
  }
  return iVar2;
}



/* Function: FUN_004070e2 */

void __fastcall FUN_004070e2(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = DAT_00409514;
  *param_1 = &PTR_FUN_004010cc;
  param_1[1] = 0xc0000001;
  pcVar1 = *(code **)(*piVar2 + 8);
  (*(code *)PTR_guard_check_icall_0040a1e4)();
  (*pcVar1)();
  CBaseDispatch::~CBaseDispatch((CBaseDispatch *)(param_1 + 9));
  FUN_004061d5((int)(param_1 + 1));
  return;
}



/* Function: FUN_00407130 */

undefined4 * __thiscall FUN_00407130(void *this,byte param_1)

{
  FUN_004070e2((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00407bb9(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_0040715a */

int __fastcall FUN_0040715a(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  *param_1 = 0;
  iVar5 = -0x7ff8fff2;
  puVar2 = (undefined4 *)FUN_004073b1(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = FUN_004071e0(puVar2);
    if (piVar3 == (int *)0x0) goto LAB_004071d1;
    iVar5 = FUN_004021ef((LPCRITICAL_SECTION)(piVar3 + 3));
    if (-1 < iVar5) {
      *(undefined1 *)(piVar3 + 9) = 1;
    }
    iVar4 = 0;
    if (iVar5 < 0) {
      iVar4 = iVar5;
    }
    iVar5 = 0;
    if (iVar4 < 0) {
      iVar5 = iVar4;
    }
    if (iVar5 == 0) goto LAB_004071d1;
    pcVar1 = *(code **)(*piVar3 + 0x20);
    (*(code *)PTR_guard_check_icall_0040a1e4)(1);
    (*pcVar1)();
  }
  piVar3 = (int *)0x0;
LAB_004071d1:
  *param_1 = piVar3;
  return iVar5;
}



/* Function: FUN_004071e0 */

undefined4 * __fastcall FUN_004071e0(undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  param_1[2] = 0;
  puVar4 = param_1 + 3;
  for (iVar3 = 6; piVar2 = DAT_00409514, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_00401098;
  param_1[1] = &PTR_FUN_004010bc;
  pcVar1 = *(code **)(*piVar2 + 4);
  (*(code *)PTR_guard_check_icall_0040a1e4)();
  (*pcVar1)();
  return param_1;
}



/* Function: FUN_00407230 */

void FUN_00407230(int param_1)

{
  FUN_00406e20((int *)(param_1 + -4));
  return;
}



/* Function: FUN_00407240 */

void FUN_00407240(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00406df0(param_1 + -4,param_2,param_3);
  return;
}



/* Function: FUN_00407250 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00407250(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004094f0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_00409508 = 0;
  _DAT_0040950c = 0;
  _DAT_00409510 = 0;
  _DAT_004094d8 = 0x3c;
  _DAT_004094e0 = 0x400000;
  DAT_004094dc = 0x400000;
  DAT_004094e4 = 1;
  _DAT_004094e8 = 0x800;
  _DAT_004094ec = &DAT_00401b04;
  iVar1 = FUN_004021ef((LPCRITICAL_SECTION)&DAT_004094f0);
  if (iVar1 < 0) {
    DAT_00409518 = 1;
  }
  return &DAT_004094d8;
}



/* Function: FUN_004072c3 */

void __fastcall FUN_004072c3(int param_1)

{
  int *piVar1;
  undefined4 unaff_ESI;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  piVar1 = (int *)(param_1 + 0x30);
  if (*piVar1 != 0) {
    o_free(*piVar1,unaff_ESI);
    *piVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Function: FUN_00407306 */

undefined4 __fastcall FUN_00407306(int *param_1,HINSTANCE param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
LAB_00407371:
    uVar2 = 0x80070057;
  }
  else {
    if (*param_1 != 0) {
      if (*param_1 != 0x2c) goto LAB_00407371;
      iVar3 = 0;
      if (0 < param_1[9]) {
        do {
          if ((iVar3 < 0) || (param_1[9] <= iVar3)) {
            FUN_00402184(0xc000008c);
            pcVar1 = (code *)swi(3);
            uVar2 = (*pcVar1)();
            return uVar2;
          }
          UnregisterClassA((LPCSTR)(uint)*(ushort *)(param_1[8] + iVar3 * 2),param_2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_1[9]);
      }
      if (param_1[8] != 0) {
        o_free(param_1[8]);
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



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: FUN_004073a0 */

void FUN_004073a0(undefined4 param_1)

{
  FUN_004073b1(param_1);
  return;
}



/* Function: FUN_004073b1 */

int __cdecl FUN_004073b1(undefined4 param_1)

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



/* Function: FUN_004073e0 */

undefined4 FUN_004073e0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00407405();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00407411();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00407405 */

undefined * FUN_00407405(void)

{
  return &DAT_00409100;
}



/* Function: FUN_00407411 */

undefined * FUN_00407411(void)

{
  return &DAT_00409108;
}



/* Function: FUN_00407420 */

undefined4 FUN_00407420(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00407405();
  *puVar1 = *puVar1 | 0x18;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00407411();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  return 0;
}



/* Function: FUN_00407450 */

void FUN_00407450(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  o__set_app_type(2);
  uVar3 = FUN_00407c7f();
  o__set_fmode(uVar3);
  uVar3 = FUN_00404d90();
  puVar4 = (undefined4 *)o___p__commode();
  *puVar4 = uVar3;
  uVar3 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar3 != '\0') {
    FUN_00407f3c();
    FUN_00407b9c(FUN_00407f70);
    uVar3 = FUN_00407c75();
    iVar5 = o__configure_wide_argv(uVar3);
    if (iVar5 == 0) {
      FUN_00407c8b();
      guard_check_icall();
      guard_check_icall();
      FUN_00407ca6();
      uVar3 = FUN_00404d90();
      o__configthreadlocale(uVar3);
      cVar2 = FUN_00407c9d();
      if (cVar2 != '\0') {
        o__initialize_wide_environment();
      }
      FUN_00404d90();
      iVar5 = thunk_FUN_00404d90();
      if (iVar5 == 0) {
        return;
      }
    }
  }
  FUN_00407d14();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* Function: FUN_004074f0 */

undefined4 FUN_004074f0(void)

{
  FUN_00407cd9();
  return 0;
}



/* Function: FUN_00407500 */

void FUN_00407500(void)

{
  undefined4 uVar1;
  
  FUN_00407ebc();
  uVar1 = FUN_00404d90();
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
    if (DAT_0040942c != 1) {
      if (DAT_0040942c == 0) {
        DAT_0040942c = 1;
        iVar4 = initterm_e(&DAT_00401300,&DAT_00401314);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_004012e4,&DAT_004012fc);
        DAT_0040942c = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00407cfc();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        (*(code *)PTR_guard_check_icall_0040a1e4)(0,2,0);
        (*pcVar1)();
      }
      piVar5 = (int *)FUN_00407d08();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      FUN_00407e31();
      o__get_wide_winmain_command_line();
      unaff_ESI = FUN_004046ca();
      uVar6 = FUN_00407e74();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          o__cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_00407685;
    }
  }
  FUN_00407d14();
LAB_00407685:
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



/* Function: __except_handler4 */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2019 Release */

void __cdecl
__except_handler4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00408368(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_00409080,FUN_004076f0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_004076f0 */

void __fastcall FUN_004076f0(int param_1)

{
  if (param_1 == DAT_00409080) {
    return;
  }
  FUN_00407734();
  return;
}



/* Function: FUN_00407704 */

void __cdecl FUN_00407704(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00407734 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407734(void)

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
  _DAT_00409208 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00409210 = (undefined4)uVar9;
  _DAT_00409220 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00409224 = &stack0x00000004;
  _DAT_00409160 = 0x10001;
  _DAT_00409110 = 0xc0000409;
  _DAT_00409114 = 1;
  _DAT_00409120 = 1;
  DAT_00409124 = 2;
  _DAT_0040911c = unaff_retaddr;
  _DAT_004091ec = in_GS;
  _DAT_004091f0 = in_FS;
  _DAT_004091f4 = in_ES;
  _DAT_004091f8 = in_DS;
  _DAT_004091fc = unaff_EDI;
  _DAT_00409200 = unaff_ESI;
  _DAT_00409204 = unaff_EBX;
  _DAT_0040920c = uVar3;
  _DAT_00409214 = unaff_EBP;
  DAT_00409218 = unaff_retaddr;
  _DAT_0040921c = in_CS;
  _DAT_00409228 = in_SS;
  FUN_00407704((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: FUN_00407836 */

void FUN_00407836(void)

{
  FUN_0040784a(8);
  return;
}



/* Function: FUN_0040784a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040784a(undefined4 param_1)

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
  _DAT_00409208 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00409210 = (undefined4)uVar9;
  _DAT_00409220 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00409224 = &param_1;
  _DAT_00409110 = 0xc0000409;
  _DAT_00409114 = 1;
  _DAT_00409120 = 1;
  DAT_00409124 = param_1;
  _DAT_0040911c = unaff_retaddr;
  _DAT_004091ec = in_GS;
  _DAT_004091f0 = in_FS;
  _DAT_004091f4 = in_ES;
  _DAT_004091f8 = in_DS;
  _DAT_004091fc = unaff_EDI;
  _DAT_00409200 = unaff_ESI;
  _DAT_00409204 = unaff_EBX;
  _DAT_0040920c = uVar3;
  _DAT_00409214 = unaff_EBP;
  DAT_00409218 = unaff_retaddr;
  _DAT_0040921c = in_CS;
  _DAT_00409228 = in_SS;
  FUN_00407704((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
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
      if (DAT_00409430 != 0) {
        uVar3 = DAT_00409430;
        uVar1 = DAT_00409430;
      }
      DAT_00409430 = uVar1;
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
    DAT_0040944d = 1;
  }
  FUN_0040800f();
  cVar1 = FUN_00407c9d();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_00407c9d();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_00407c9d();
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
  
  if (DAT_0040944c != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00407d14();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    DAT_00409434 = 0xffffffff;
    _DAT_00409438 = 0xffffffff;
    _DAT_0040943c = 0xffffffff;
    _DAT_00409440 = 0xffffffff;
    _DAT_00409444 = 0xffffffff;
    _DAT_00409448 = 0xffffffff;
LAB_00407a5d:
    DAT_0040944c = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = o__initialize_onexit_table(&DAT_00409434);
    if (uVar3 == 0) {
      uVar3 = o__initialize_onexit_table(&DAT_00409440);
      if (uVar3 == 0) goto LAB_00407a5d;
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
  iVar1 = DAT_00409430;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_00409430 = 0;
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
  if ((DAT_0040944d == '\0') || (param_2 == '\0')) {
    FUN_00407c9d();
    FUN_00407c9d();
  }
  return 1;
}



/* Function: FUN_00407b66 */

undefined4 __cdecl FUN_00407b66(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_00409434 == -1) {
    iVar1 = o__crt_atexit();
  }
  else {
    iVar1 = o__register_onexit_function(&DAT_00409434,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Function: FUN_00407b9c */

int __cdecl FUN_00407b9c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00407b66(param_1);
  return (iVar1 != 0) - 1;
}



/* Function: FUN_00407bb9 */

void __cdecl FUN_00407bb9(undefined4 param_1)

{
  o_free(param_1);
  return;
}



/* Function: FUN_00407bcf */

uint FUN_00407bcf(void)

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
  if ((DAT_00409080 == 0xbb40e64e) || ((DAT_00409080 & 0xffff0000) == 0)) {
    DAT_00409080 = FUN_00407bcf();
    if (DAT_00409080 == 0xbb40e64e) {
      DAT_00409080 = 0xbb40e64f;
    }
    else if ((DAT_00409080 & 0xffff0000) == 0) {
      DAT_00409080 = DAT_00409080 | (DAT_00409080 | 0x4711) << 0x10;
    }
  }
  DAT_004090c0 = ~DAT_00409080;
  return;
}



/* Function: FUN_00407c75 */

undefined4 FUN_00407c75(void)

{
  return 1;
}



/* Function: FUN_00407c7f */

undefined4 FUN_00407c7f(void)

{
  return 0x4000;
}



/* Function: FUN_00407c8b */

void FUN_00407c8b(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_00409450);
  return;
}



/* Function: FUN_00407c9d */

undefined1 FUN_00407c9d(void)

{
  return 1;
}



/* Function: FUN_00407ca6 */

void FUN_00407ca6(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = o__controlfp_s(0,0x10000,0x30000);
  if (iVar2 == 0) {
    return;
  }
  FUN_00407d14();
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



/* Function: FUN_00407cd9 */

void FUN_00407cd9(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00407405();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00407411();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



/* Function: FUN_00407cfc */

undefined * FUN_00407cfc(void)

{
  return &DAT_0040952c;
}



/* Function: FUN_00407d08 */

undefined * FUN_00407d08(void)

{
  return &DAT_00409528;
}



/* Function: FUN_00407d14 */

void FUN_00407d14(void)

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
  FUN_00407f2e();
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
    FUN_00407f2e();
  }
  return;
}



/* Function: FUN_00407e31 */

WORD FUN_00407e31(void)

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



/* Function: thunk_FUN_00404d90 */

undefined4 thunk_FUN_00404d90(void)

{
  return 0;
}



/* Function: FUN_00407e74 */

uint FUN_00407e74(void)

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



/* Function: FUN_00407ebc */

void FUN_00407ebc(void)

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



/* Function: FUN_00407f2e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407f2e(void)

{
  _DAT_00409458 = 0;
  return;
}



/* Function: FUN_00407f3c */

/* WARNING: Removing unreachable block (ram,0x00407f4e) */
/* WARNING: Removing unreachable block (ram,0x00407f4f) */
/* WARNING: Removing unreachable block (ram,0x00407f55) */
/* WARNING: Removing unreachable block (ram,0x00407f5f) */
/* WARNING: Removing unreachable block (ram,0x00407f66) */

void FUN_00407f3c(void)

{
  return;
}



/* Function: FUN_00407f70 */

/* WARNING: Removing unreachable block (ram,0x00407f82) */
/* WARNING: Removing unreachable block (ram,0x00407f83) */
/* WARNING: Removing unreachable block (ram,0x00407f89) */
/* WARNING: Removing unreachable block (ram,0x00407f93) */
/* WARNING: Removing unreachable block (ram,0x00407f9a) */

void FUN_00407f70(void)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00409080 ^ (uint)&param_2;
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



/* Function: FUN_0040800f */

/* WARNING: Removing unreachable block (ram,0x00408080) */
/* WARNING: Removing unreachable block (ram,0x00408044) */
/* WARNING: Removing unreachable block (ram,0x004080f8) */

undefined4 FUN_0040800f(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_0040945c = 0;
  DAT_004090c4 = DAT_004090c4 | 1;
  BVar4 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_004090c4;
  if (BVar4 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar6 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar5 = *puVar2 & 0xfff3ff0, uVar5 == 0x106c0 || (uVar5 == 0x20660)) ||
          (uVar5 == 0x20670)) || ((uVar5 == 0x30650 || (uVar5 == 0x30660)))) || (uVar5 == 0x30670)))
       ) {
      DAT_00409460 = DAT_00409460 | 1;
    }
    if (*piVar1 < 7) {
      uVar7 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar7 = *(uint *)(iVar3 + 4);
      if ((uVar7 & 0x200) != 0) {
        DAT_00409460 = DAT_00409460 | 2;
      }
    }
    DAT_0040945c = 1;
    uVar5 = DAT_004090c4 | 2;
    if ((uVar6 & 0x100000) != 0) {
      uVar5 = DAT_004090c4 | 6;
      DAT_0040945c = 2;
      if ((((uVar6 & 0x8000000) != 0) && ((uVar6 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0040945c = 3;
        uVar5 = DAT_004090c4 | 0xe;
        if ((uVar7 & 0x20) != 0) {
          DAT_0040945c = 5;
          uVar5 = DAT_004090c4 | 0x2e;
          if (((uVar7 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
            DAT_004090c4 = DAT_004090c4 | 0x6e;
            DAT_0040945c = 6;
            uVar5 = DAT_004090c4;
          }
        }
      }
    }
  }
  DAT_004090c4 = uVar5;
  return 0;
}



/* Function: ___scrt_is_ucrt_dll_in_use */

/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_004090c8 != 0;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x004081fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* Function: initterm_e */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* Function: _c_exit */

void __cdecl _c_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _c_exit();
  return;
}



/* Function: register_thread_local_exe_atexit_callback */

void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  register_thread_local_exe_atexit_callback();
  return;
}



/* Function: o___p__commode */

void __cdecl o___p__commode(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040822d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o___p__commode();
  return;
}



/* Function: o__callnewh */

void __cdecl o__callnewh(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__callnewh();
  return;
}



/* Function: o__cexit */

void __cdecl o__cexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__cexit();
  return;
}



/* Function: o__configthreadlocale */

void __cdecl o__configthreadlocale(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configthreadlocale();
  return;
}



/* Function: o__configure_wide_argv */

void __cdecl o__configure_wide_argv(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040825d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__configure_wide_argv();
  return;
}



/* Function: o__controlfp_s */

void __cdecl o__controlfp_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__controlfp_s();
  return;
}



/* Function: o__crt_atexit */

void __cdecl o__crt_atexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__crt_atexit();
  return;
}



/* Function: o__exit */

void __cdecl o__exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__exit();
  return;
}



/* Function: o__get_wide_winmain_command_line */

void __cdecl o__get_wide_winmain_command_line(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040828d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__get_wide_winmain_command_line();
  return;
}



/* Function: o__initialize_onexit_table */

void __cdecl o__initialize_onexit_table(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_onexit_table();
  return;
}



/* Function: o__initialize_wide_environment */

void __cdecl o__initialize_wide_environment(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__initialize_wide_environment();
  return;
}



/* Function: o__invalid_parameter_noinfo */

void __cdecl o__invalid_parameter_noinfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__invalid_parameter_noinfo();
  return;
}



/* Function: o__purecall */

void __cdecl o__purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__purecall();
  return;
}



/* Function: o__register_onexit_function */

void __cdecl o__register_onexit_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__register_onexit_function();
  return;
}



/* Function: _o__seh_filter_exe */

void _o__seh_filter_exe(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _o__seh_filter_exe();
  return;
}



/* Function: o__set_app_type */

void __cdecl o__set_app_type(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_app_type();
  return;
}



/* Function: o__set_fmode */

void __cdecl o__set_fmode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_fmode();
  return;
}



/* Function: o__set_new_mode */

void __cdecl o__set_new_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x004082fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o__set_new_mode();
  return;
}



/* Function: o_exit */

void __cdecl o_exit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_exit();
  return;
}



/* Function: o_free */

void __cdecl o_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_free();
  return;
}



/* Function: o_malloc */

void __cdecl o_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_malloc();
  return;
}



/* Function: o_terminate */

void __cdecl o_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040832c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  o_terminate();
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: __current_exception */

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}



/* Function: __current_exception_context */

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x00408350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040835c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* Function: FUN_00408368 */

int __cdecl FUN_00408368(int param_1)

{
  uint uVar1;
  
  if ((DAT_0040945c < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
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



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: FUN_00408430 */

void FUN_00408430(void)

{
  FUN_004047fc(0x409498);
  return;
}



/* Function: FUN_00408440 */

void FUN_00408440(void)

{
  FUN_004022e6((int *)&DAT_0040904c);
  return;
}



/* Function: FUN_00408450 */

void FUN_00408450(void)

{
  FUN_004072c3(0x4094d8);
  return;
}



/* Function: FUN_00408460 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408460(void)

{
  FUN_00407306((int *)&DAT_004090cc,DAT_004094dc);
  if (_DAT_004090ec != 0) {
    o_free(_DAT_004090ec);
    _DAT_004090ec = 0;
  }
  uRam004090f0 = 0;
  uRam004090f4 = 0;
  return;
}



