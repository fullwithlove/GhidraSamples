/* Function: FUN_00401f82 */

undefined4 __fastcall FUN_00401f82(short *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = FUN_004021c1(param_1,param_2,param_1,param_3,0x7ffffffe);
  }
  return uVar1;
}



/* Function: FUN_00401fbb */

undefined4 __cdecl FUN_00401fbb(wchar_t *param_1,uint param_2,wchar_t *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar1 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
    }
  }
  else {
    uVar1 = FUN_00402212(param_1,param_2,(uint *)0x0,param_3,&stack0x00000010);
  }
  return uVar1;
}



/* Function: FUN_00402000 */

uint __cdecl
FUN_00402000(wchar_t *param_1,uint param_2,int *param_3,uint *param_4,uint param_5,wchar_t *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  wchar_t *local_8;
  
  uVar3 = 0;
  if ((param_5 & 0x100) == 0) {
    if (param_2 != 0) goto LAB_00402030;
LAB_00402038:
    uVar3 = 0x80070057;
  }
  else {
    if ((param_1 == (wchar_t *)0x0) && (param_2 != 0)) goto LAB_00402038;
LAB_00402030:
    if (0x7fffffff < param_2) goto LAB_00402038;
  }
  if ((int)uVar3 < 0) {
    if (param_2 == 0) {
      return uVar3;
    }
    *param_1 = L'\0';
    return uVar3;
  }
  local_8 = param_1;
  local_c = param_2;
  if (((param_5 & 0x100) != 0) && (param_6 == (wchar_t *)0x0)) {
    param_6 = L"";
  }
  uVar3 = 0;
  if ((param_5 & 0xffffe000) == 0) {
    if (param_2 == 0) {
      uVar1 = param_2;
      if (*param_6 == L'\0') goto LAB_0040213a;
      uVar2 = 0x80070057;
      uVar3 = 0x8007007a;
      if (param_1 == (wchar_t *)0x0) {
        uVar3 = uVar2;
      }
    }
    else {
      local_c = 0;
      uVar3 = FUN_00402212(param_1,param_2,&local_c,param_6,&stack0x0000001c);
      uVar1 = param_2 - local_c;
      local_8 = param_1 + local_c;
      uVar2 = local_c;
      local_c = uVar1;
      if (-1 < (int)uVar3) {
        if ((((param_5 & 0x200) != 0) && (1 < uVar1)) && (2 < uVar1 * 2)) {
          memset(local_8 + 1,param_5 & 0xff,uVar1 * 2 - 2);
        }
        goto LAB_0040213a;
      }
    }
  }
  else {
    uVar2 = 0x80070057;
    uVar3 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = L'\0';
      uVar2 = 0;
    }
  }
  if (((param_5 & 0x1c00) != 0) && (param_2 != 0)) {
    FUN_00402263(param_1,param_2 * 2,uVar2,&local_8,&local_c,param_5);
  }
  uVar1 = local_c;
  if (((int)uVar3 < 0) && (uVar3 != 0x8007007a)) {
    return uVar3;
  }
LAB_0040213a:
  if (param_3 != (int *)0x0) {
    *param_3 = (int)local_8;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar1;
  }
  return uVar3;
}



/* Function: FUN_00402164 */

undefined4 __fastcall FUN_00402164(short *param_1,int param_2,int *param_3)

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



/* Function: FUN_004021c1 */

undefined4 __fastcall
FUN_004021c1(short *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  
  if (param_2 != 0) {
    iVar2 = param_4 - (int)param_1;
    do {
      if ((param_5 == 0) || (sVar1 = *(short *)(iVar2 + (int)param_1), sVar1 == 0)) break;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      param_5 = param_5 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar3 = 0x8007007a;
  if (param_2 != 0) {
    uVar3 = 0;
  }
  psVar4 = param_1 + -1;
  if (param_2 != 0) {
    psVar4 = param_1;
  }
  *psVar4 = 0;
  return uVar3;
}



/* Function: FUN_00402212 */

undefined4 __fastcall
FUN_00402212(wchar_t *param_1,int param_2,uint *param_3,wchar_t *param_4,va_list param_5)

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
  else if (uVar1 != _Count) goto LAB_0040224b;
  param_1[_Count] = L'\0';
  uVar1 = _Count;
LAB_0040224b:
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar1;
  }
  return uVar2;
}



/* Function: FUN_00402263 */

undefined4 __fastcall
FUN_00402263(undefined2 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4,uint *param_5,
            uint param_6)

{
  uint uVar1;
  
  uVar1 = param_2 >> 1;
  if ((uVar1 != 0) && ((param_6 & 0x1000) != 0)) {
    *param_4 = param_1;
    *param_5 = uVar1;
    *param_1 = 0;
  }
  if ((param_6 & 0x400) != 0) {
    memset(param_1,param_6 & 0xff,param_2);
    if ((param_6 & 0xff) != 0) {
      if (uVar1 == 0) {
        return 0;
      }
      param_1[uVar1 - 1] = 0;
      *param_4 = param_1 + (uVar1 - 1);
      *param_5 = 1;
      goto LAB_004022bb;
    }
    *param_4 = param_1;
    *param_5 = uVar1;
  }
  if (uVar1 == 0) {
    return 0;
  }
LAB_004022bb:
  if ((param_6 & 0x800) != 0) {
    *param_4 = param_1;
    *param_5 = uVar1;
    *param_1 = 0;
  }
  return 0;
}



/* Function: FUN_004022fb */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint FUN_004022fb(void)

{
  uint uVar1;
  uint uVar2;
  HKEY local_24;
  uint local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x402307;
  local_20 = 0;
  local_24 = (HKEY)0x0;
  local_8 = 0;
  uVar1 = RegOpenKeyExW((HKEY)0x80000002,L"Software\\Microsoft\\Windows\\CurrentVersion\\RunOnce",0,
                        0x20006,&local_24);
  if (uVar1 == 2) {
    uVar1 = 0;
  }
  else if ((-1 < (int)uVar1) &&
          (local_20 = uVar1, uVar1 = RegDeleteValueW(local_24,L"TpmInit"), uVar1 == 2)) {
    uVar1 = 0;
  }
  local_8 = 0xfffffffe;
  local_20 = uVar1;
  FUN_0040238a();
  uVar2 = uVar1 & 0xffff | 0x80070000;
  if ((int)uVar1 < 1) {
    uVar2 = uVar1;
  }
  ExceptionList = local_14;
  return uVar2;
}



/* Function: FUN_0040238a */

void FUN_0040238a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    RegCloseKey(*(HKEY *)(unaff_EBP + -0x20));
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}



/* Function: FUN_004023a4 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_004023a4(UINT param_1,undefined4 *param_2)

{
  uint uVar1;
  HMODULE hInstance;
  uint uVar2;
  DWORD DVar3;
  HANDLE hHeap;
  short *psVar4;
  LPWSTR lpBuffer;
  int cchBufferMax;
  SIZE_T dwBytes;
  int local_28;
  short *local_24;
  DWORD local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x4023b0;
  local_20 = 0;
  local_24 = (short *)0x0;
  local_28 = 0;
  local_8 = 0;
  *param_2 = 0;
  cchBufferMax = 0;
  lpBuffer = (LPWSTR)&local_28;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  uVar2 = LoadStringW(hInstance,param_1,lpBuffer,cchBufferMax);
  if (uVar2 == 0) {
    DVar3 = GetLastError();
    local_20 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      local_20 = DVar3;
    }
    goto LAB_00402494;
  }
  if (local_28 == 0) {
    local_20 = 0x80004005;
    goto LAB_00402494;
  }
  dwBytes = uVar2 * 2 + 2;
  DVar3 = 8;
  hHeap = GetProcessHeap();
  psVar4 = (short *)HeapAlloc(hHeap,DVar3,dwBytes);
  local_24 = psVar4;
  if (psVar4 == (short *)0x0) {
    local_20 = 0x8007000e;
    goto LAB_00402494;
  }
  uVar1 = uVar2 + 1;
  DVar3 = 0;
  if ((uVar1 == 0) || (0x7fffffff < uVar1)) {
    DVar3 = 0x80070057;
  }
  if ((int)DVar3 < 0) {
    if (uVar1 != 0) goto LAB_0040247e;
  }
  else if (uVar2 < 0x7fffffff) {
    DVar3 = FUN_004021c1(psVar4,uVar1,uVar1,local_28,uVar2);
  }
  else {
    DVar3 = 0x80070057;
LAB_0040247e:
    *psVar4 = 0;
  }
  local_20 = DVar3;
  if (-1 < (int)DVar3) {
    *param_2 = psVar4;
    local_24 = (short *)0x0;
  }
LAB_00402494:
  DVar3 = local_20;
  local_8 = 0xfffffffe;
  FUN_004024ba();
  ExceptionList = local_14;
  return DVar3;
}



/* Function: FUN_004024ba */

void FUN_004024ba(void)

{
  HANDLE hHeap;
  DWORD unaff_EBX;
  int unaff_EBP;
  LPVOID unaff_EDI;
  DWORD dwFlags;
  
  if (unaff_EDI != (LPVOID)0x0) {
    dwFlags = unaff_EBX;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,unaff_EDI);
    *(DWORD *)(unaff_EBP + -0x20) = unaff_EBX;
  }
  return;
}



/* Function: FUN_004024d7 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_004024d7(undefined4 *param_1)

{
  HANDLE hHeap;
  undefined4 uVar1;
  uint uVar2;
  DWORD DVar3;
  SIZE_T dwBytes;
  int local_30;
  int local_2c;
  short *local_28;
  wchar_t *local_24;
  DWORD local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x4024e3;
  local_20 = 0;
  local_28 = (short *)0x0;
  local_24 = (wchar_t *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_8 = 0;
  if (DAT_004083f8 == (short *)0x0) {
    if (DAT_004083f4 == 0) {
      uVar1 = 0x65;
    }
    else {
      uVar1 = 0x171;
      if (DAT_004083f4 != 5) {
        uVar1 = 0xc3;
      }
    }
    local_20 = FUN_004023a4(uVar1,&local_24);
  }
  else {
    if (DAT_004083f4 == 0) {
      uVar1 = 0x65;
    }
    else {
      uVar1 = 0xc3;
    }
    local_20 = FUN_004023a4(uVar1,&local_28);
    if ((int)local_20 < 0) goto LAB_00402537;
    local_20 = FUN_00402164(local_28,0x104,&local_30);
    if ((int)local_20 < 0) goto LAB_00402537;
    local_20 = FUN_00402164(DAT_004083f8,0x104,&local_2c);
    if ((int)local_20 < 0) goto LAB_00402537;
    uVar2 = local_30 + local_2c + 4;
    dwBytes = uVar2 * 2;
    DVar3 = 8;
    hHeap = GetProcessHeap();
    local_24 = (wchar_t *)HeapAlloc(hHeap,DVar3,dwBytes);
    if (local_24 == (wchar_t *)0x0) {
      local_20 = 0x8007000e;
      goto LAB_00402537;
    }
    local_20 = FUN_00401fbb(local_24,uVar2,L"%s [%s]");
  }
  if (-1 < (int)local_20) {
    *param_1 = local_24;
    local_24 = (wchar_t *)0x0;
  }
LAB_00402537:
  DVar3 = local_20;
  local_8 = 0xfffffffe;
  FUN_00402606();
  ExceptionList = local_14;
  return DVar3;
}



/* Function: FUN_00402606 */

void FUN_00402606(void)

{
  HANDLE pvVar1;
  int unaff_EBP;
  DWORD unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,unaff_EDI,*(LPVOID *)(unaff_EBP + -0x24));
  }
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,unaff_EDI,*(LPVOID *)(unaff_EBP + -0x20));
  }
  return;
}



/* Function: FUN_0040263b */

int __fastcall FUN_0040263b(undefined4 *param_1)

{
  code *pcVar1;
  wchar_t *lpMem;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  HANDLE hHeap;
  wchar_t *local_10;
  undefined4 *local_c;
  wchar_t *local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (wchar_t *)0x0;
  local_8 = (wchar_t *)0x0;
  iVar3 = FUN_00404d87(DAT_004083f8,&local_c);
  puVar2 = local_c;
  if (iVar3 == 0) {
    iVar3 = FUN_00404f09(local_c,&local_10);
    lpMem = local_10;
    if (iVar3 == 0) {
      *param_1 = 0;
      uVar4 = wcstoul(local_10,&local_8,10);
      if ((1 < uVar4) ||
         (((*local_8 == L'.' && (uVar4 == 1)) && (local_8 = local_8 + 1, 0x31 < (ushort)*local_8))))
      {
        *param_1 = 1;
      }
    }
    if (lpMem != (wchar_t *)0x0) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    pcVar1 = *(code **)*puVar2;
    (*(code *)PTR_guard_check_icall_004091a8)(1);
    (*pcVar1)();
  }
  return iVar3;
}



/* Function: FUN_004026f4 */

undefined4 FUN_004026f4(void)

{
  if ((DAT_004083f4 != 0) && (DAT_004083f4 != 4)) {
    return 0;
  }
  return 1;
}



/* Function: FUN_0040270f */

void __fastcall FUN_0040270f(HWND param_1)

{
  HWND hWnd;
  LPCWSTR lpString;
  uint local_8;
  
  local_8 = (uint)(ushort)DAT_004083f4;
  lpString = (LPCWSTR)&local_8;
  hWnd = GetDlgItem(param_1,0x427);
  SetWindowTextW(hWnd,lpString);
  return;
}



/* Function: FUN_00402750 */

undefined4 FUN_00402750(undefined4 param_1,int param_2,undefined4 param_3,ushort *param_4)

{
  wchar_t wVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  bool bVar6;
  
  if (param_2 == 3) {
    pwVar5 = L"help-WhatShouldILookFor";
    pwVar4 = (wchar_t *)param_4;
    do {
      wVar1 = *pwVar4;
      uVar2 = 0;
      bVar6 = (ushort)wVar1 < (ushort)*pwVar5;
      if (wVar1 != *pwVar5) {
LAB_00402795:
        uVar3 = -(uint)bVar6 | 1;
        goto LAB_0040279a;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar4[1];
      bVar6 = (ushort)wVar1 < (ushort)pwVar5[1];
      if (wVar1 != pwVar5[1]) goto LAB_00402795;
      pwVar4 = pwVar4 + 2;
      pwVar5 = pwVar5 + 2;
    } while (wVar1 != L'\0');
    uVar3 = 0;
LAB_0040279a:
    if (uVar3 == 0) {
      pwVar4 = L"tpmadmin.chm::/html/171a5a07-00b0-4ff6-bd73-4d1dd841bf1b.htm";
    }
    else {
      pwVar5 = L"help-HowDoIConnectToTheNetwork";
      pwVar4 = (wchar_t *)param_4;
      do {
        wVar1 = *pwVar4;
        bVar6 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_004027d3:
          uVar3 = -(uint)bVar6 | 1;
          goto LAB_004027d8;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar4[1];
        bVar6 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_004027d3;
        pwVar4 = pwVar4 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      uVar3 = 0;
LAB_004027d8:
      if (uVar3 == 0) {
        pwVar4 = L"tpmadmin.chm::/html/6c911321-0e0d-4376-afe1-162326c42018.htm";
      }
      else {
        pwVar5 = L"help-HowDoIAllowCommands";
        pwVar4 = (wchar_t *)param_4;
        do {
          wVar1 = *pwVar4;
          bVar6 = (ushort)wVar1 < (ushort)*pwVar5;
          if (wVar1 != *pwVar5) {
LAB_00402811:
            uVar3 = -(uint)bVar6 | 1;
            goto LAB_00402816;
          }
          if (wVar1 == L'\0') break;
          wVar1 = pwVar4[1];
          bVar6 = (ushort)wVar1 < (ushort)pwVar5[1];
          if (wVar1 != pwVar5[1]) goto LAB_00402811;
          pwVar4 = pwVar4 + 2;
          pwVar5 = pwVar5 + 2;
        } while (wVar1 != L'\0');
        uVar3 = 0;
LAB_00402816:
        if (uVar3 == 0) {
          pwVar4 = L"tpmadmin.chm::/html/bbc02bd1-3e31-4db9-8b19-1d857f52a77b.htm";
        }
        else {
          pwVar5 = L"help-HowDoISetupActiveDirectory";
          pwVar4 = (wchar_t *)param_4;
          do {
            wVar1 = *pwVar4;
            bVar6 = (ushort)wVar1 < (ushort)*pwVar5;
            if (wVar1 != *pwVar5) {
LAB_0040284c:
              uVar3 = -(uint)bVar6 | 1;
              goto LAB_00402851;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar4[1];
            bVar6 = (ushort)wVar1 < (ushort)pwVar5[1];
            if (wVar1 != pwVar5[1]) goto LAB_0040284c;
            pwVar4 = pwVar4 + 2;
            pwVar5 = pwVar5 + 2;
          } while (wVar1 != L'\0');
          uVar3 = 0;
LAB_00402851:
          if (uVar3 == 0) {
            pwVar4 = L"tpmadmin.chm::/html/148bb87d-a3c1-4344-958e-5f5b7de14a9c.htm";
          }
          else {
            pwVar4 = L"help-HowDoITroubleShootFailure";
            do {
              wVar1 = *param_4;
              bVar6 = (ushort)wVar1 < (ushort)*pwVar4;
              if (wVar1 != *pwVar4) {
LAB_00402883:
                uVar2 = -(uint)bVar6 | 1;
                break;
              }
              if (wVar1 == L'\0') break;
              wVar1 = ((wchar_t *)param_4)[1];
              bVar6 = (ushort)wVar1 < (ushort)pwVar4[1];
              if (wVar1 != pwVar4[1]) goto LAB_00402883;
              param_4 = (ushort *)((wchar_t *)param_4 + 2);
              pwVar4 = pwVar4 + 2;
            } while (wVar1 != L'\0');
            if (uVar2 != 0) {
              return 0;
            }
            pwVar4 = L"tpmadmin.chm::/html/cac0a9f7-77c6-4674-a793-e8f741888db8.htm";
          }
        }
      }
    }
    FUN_0040698e(param_1,pwVar4);
  }
  return 0;
}



/* Function: FUN_004028aa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_004028aa(uint param_1,uint param_2,undefined4 param_3)

{
  DWORD DVar1;
  undefined4 local_90 [2];
  HMODULE local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  code *local_3c;
  uint local_2c;
  DWORD local_28;
  undefined4 local_24 [4];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004075e8;
  uStack_c = 0x4028b6;
  local_28 = 0;
  local_2c = param_1;
  memset(local_90,0,0x60);
  local_24[0] = 0;
  local_8 = (undefined *)0x0;
  local_90[0] = 0x60;
  local_88 = GetModuleHandleW((LPCWSTR)0x0);
  local_84 = 1;
  DVar1 = FUN_004024d7(local_24);
  if (-1 < (int)DVar1) {
    local_7c = local_24[0];
    local_78 = param_3;
    local_74 = local_2c & 0xffff;
    local_70 = param_2 & 0xffff;
    local_3c = FUN_00402750;
    local_80 = 0x20;
    local_28 = DVar1;
    DVar1 = Ordinal_345(local_90,0,0,0);
  }
  local_8 = (undefined *)0xfffffffe;
  local_28 = DVar1;
  FUN_00402968();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00402968 */

void FUN_00402968(void)

{
  HANDLE hHeap;
  int unaff_EBP;
  DWORD unaff_ESI;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,unaff_ESI,*(LPVOID *)(unaff_EBP + -0x20));
  }
  return;
}



/* Function: FUN_00402986 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_00402986(uint param_1,undefined4 param_2,DWORD param_3)

{
  DWORD DVar1;
  HANDLE hHeap;
  wchar_t *pwVar2;
  uint uVar3;
  SIZE_T dwBytes;
  undefined4 local_a4 [2];
  HMODULE local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  wchar_t *local_64;
  code *local_50;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  wchar_t *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  short *local_24;
  DWORD local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00407608;
  uStack_c = 0x402995;
  local_20 = 0;
  local_2c = 0;
  local_28 = (wchar_t *)0x0;
  local_34 = (wchar_t *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_44 = param_1;
  memset(local_a4,0,0x60);
  local_40 = 0;
  local_24 = (short *)0x0;
  local_30 = 0;
  local_8 = (undefined *)0x0;
  local_20 = FUN_004023a4(param_2,&local_2c);
  if (-1 < (int)local_20) {
    DVar1 = FormatMessageW(0x1100,(LPCVOID)0x0,param_3,0x400,(LPWSTR)&local_24,0,(va_list *)0x0);
    if ((DVar1 == 0) || (0x104 < (int)DVar1)) {
      local_40 = 1;
      LocalFree(local_24);
      local_24 = &DAT_00401150;
    }
    local_a4[0] = 0x60;
    local_9c = GetModuleHandleW((LPCWSTR)0x0);
    local_98 = 0x81;
    local_20 = FUN_004024d7(&local_30);
    if (-1 < (int)local_20) {
      local_90 = local_30;
      local_8c = 0xfffe;
      local_88 = local_44 & 0xffff;
      local_84 = local_2c;
      local_50 = FUN_00402750;
      local_94 = 0x20;
      local_20 = FUN_004023a4(0x136,&local_28);
      if (((-1 < (int)local_20) &&
          (local_20 = FUN_00402164(local_28,0x104,&local_3c), -1 < (int)local_20)) &&
         (local_20 = FUN_00402164(local_24,0x104,&local_38), -1 < (int)local_20)) {
        uVar3 = local_3c + local_38 + 9;
        dwBytes = uVar3 * 2;
        DVar1 = 8;
        hHeap = GetProcessHeap();
        pwVar2 = (wchar_t *)HeapAlloc(hHeap,DVar1,dwBytes);
        local_34 = pwVar2;
        if (pwVar2 == (wchar_t *)0x0) {
          local_20 = 0x8007000e;
        }
        else {
          local_20 = FUN_00401fbb(pwVar2,uVar3,local_28);
          if (-1 < (int)local_20) {
            local_64 = pwVar2;
            local_20 = Ordinal_345(local_a4,0,0,0);
          }
        }
      }
    }
  }
  DVar1 = local_20;
  local_8 = (undefined *)0xfffffffe;
  FUN_00402b65();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00402b65 */

void FUN_00402b65(void)

{
  HANDLE pvVar1;
  LPVOID unaff_EBX;
  int unaff_EBP;
  DWORD unaff_ESI;
  DWORD dwFlags;
  
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,unaff_ESI,*(LPVOID *)(unaff_EBP + -0x28));
  }
  if (unaff_EBX != (LPVOID)0x0) {
    dwFlags = unaff_ESI;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,dwFlags,unaff_EBX);
    *(DWORD *)(unaff_EBP + -0x30) = unaff_ESI;
  }
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,unaff_ESI,*(LPVOID *)(unaff_EBP + -0x24));
  }
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,unaff_ESI,*(LPVOID *)(unaff_EBP + -0x2c));
  }
  if ((*(int *)(unaff_EBP + -0x20) != 0) && (*(int *)(unaff_EBP + -0x3c) == 0)) {
    LocalFree(*(HLOCAL *)(unaff_EBP + -0x20));
  }
  return;
}



/* Function: FUN_00402bdc */

void __fastcall FUN_00402bdc(DWORD param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_004083f4 == 0) {
    uVar1 = 199;
    uVar2 = 200;
  }
  else if (DAT_004083f4 == 3) {
    uVar1 = 0xdb;
    uVar2 = 0xdc;
  }
  else {
    uVar1 = 0xeb;
    uVar2 = 0xec;
  }
  FUN_00402986(uVar1,uVar2,param_1);
  return;
}



/* Function: FUN_00402c18 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int __fastcall FUN_00402c18(short *param_1)

{
  int iVar1;
  int local_28;
  void *local_24;
  int local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x402c24;
  local_20 = 0;
  local_24 = (void *)0x0;
  local_28 = 0;
  local_8 = 0;
  local_20 = FUN_00404d87(param_1,&local_24);
  if (-1 < local_20) {
    local_20 = FUN_00404e8a(local_24,&local_28);
    if (local_20 == -0x7ffbeffe) {
      local_20 = -0x7fd7bff8;
    }
    else if ((-1 < local_20) && (local_28 == 0)) {
      local_20 = -0x7fd7bff8;
    }
  }
  iVar1 = local_20;
  local_8 = 0xfffffffe;
  FUN_00402c97();
  ExceptionList = local_14;
  return iVar1;
}



/* Function: FUN_00402c97 */

void FUN_00402c97(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x20) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x20);
    (*(code *)PTR_guard_check_icall_004091a8)(1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00402cb7 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_00402cb7(HWND param_1)

{
  DWORD DVar1;
  LPARAM local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x402cc3;
  local_20[0] = 0;
  local_8 = 0;
  DVar1 = FUN_004023a4(0x172,local_20);
  if (-1 < (int)DVar1) {
    SendMessageW(param_1,0x48c,0x10,local_20[0]);
  }
  local_8 = 0xfffffffe;
  FUN_00402d1b();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00402d1b */

void FUN_00402d1b(void)

{
  HANDLE hHeap;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,*(LPVOID *)(unaff_EBP + -0x1c));
  }
  return;
}



/* Function: FUN_00402d3a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_00402d3a(HWND param_1,undefined4 param_2)

{
  DWORD DVar1;
  LPARAM local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x402d46;
  local_20[0] = 0;
  local_8 = 0;
  DVar1 = FUN_004023a4(param_2,local_20);
  if (-1 < (int)DVar1) {
    SendMessageW(param_1,0x489,0,local_20[0]);
  }
  local_8 = 0xfffffffe;
  FUN_00402d9b();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00402d9b */

void FUN_00402d9b(void)

{
  HANDLE hHeap;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,*(LPVOID *)(unaff_EBP + -0x1c));
  }
  return;
}



/* Function: FUN_00402dba */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_00402dba(HWND param_1,undefined4 param_2)

{
  DWORD DVar1;
  HWND hWnd;
  WPARAM wParam;
  HWND pHVar2;
  UINT Msg;
  LPARAM lParam;
  LPARAM local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x402dc6;
  local_20[0] = 0;
  local_8 = 0;
  DVar1 = FUN_004023a4(param_2,local_20);
  if (-1 < (int)DVar1) {
    lParam = 0;
    Msg = 0x481;
    pHVar2 = param_1;
    hWnd = GetParent(param_1);
    wParam = SendMessageW(hWnd,Msg,(WPARAM)pHVar2,lParam);
    pHVar2 = GetParent(param_1);
    SendMessageW(pHVar2,0x47e,wParam,local_20[0]);
  }
  local_8 = 0xfffffffe;
  FUN_00402e3e();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00402e3e */

void FUN_00402e3e(void)

{
  HANDLE hHeap;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,*(LPVOID *)(unaff_EBP + -0x1c));
  }
  return;
}



/* Function: FUN_00402e5d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_00402e5d(HWND param_1)

{
  DWORD DVar1;
  LPARAM local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x402e69;
  local_20[0] = 0;
  local_8 = 0;
  DVar1 = FUN_004023a4(0x99,local_20);
  if (-1 < (int)DVar1) {
    SendMessageW(param_1,0x479,0,local_20[0]);
  }
  local_8 = 0xfffffffe;
  FUN_00402ebf();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00402ebf */

void FUN_00402ebf(void)

{
  HANDLE hHeap;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,*(LPVOID *)(unaff_EBP + -0x1c));
  }
  return;
}



/* Function: FUN_00402ede */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_00402ede(HWND param_1,undefined4 param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  LPCWSTR local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x402eea;
  local_20[0] = (LPCWSTR)0x0;
  local_8 = 0;
  DVar1 = FUN_004023a4(param_2,local_20);
  if (-1 < (int)DVar1) {
    BVar2 = SetWindowTextW(param_1,local_20[0]);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      DVar1 = DVar3 & 0xffff | 0x80070000;
      if ((int)DVar3 < 1) {
        DVar1 = DVar3;
      }
    }
    else {
      DVar1 = 0;
    }
  }
  local_8 = 0xfffffffe;
  FUN_00402f58();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00402f58 */

void FUN_00402f58(void)

{
  HANDLE pvVar1;
  SIZE_T SVar2;
  DWORD unaff_EBX;
  int unaff_EBP;
  undefined1 *lpMem;
  
  lpMem = *(undefined1 **)(unaff_EBP + -0x1c);
  if (lpMem != (undefined1 *)0x0) {
    pvVar1 = GetProcessHeap();
    SVar2 = HeapSize(pvVar1,unaff_EBX,lpMem);
    if (SVar2 != 0xffffffff) {
      for (; SVar2 != 0; SVar2 = SVar2 - 1) {
        *lpMem = (char)unaff_EBX;
        lpMem = lpMem + 1;
      }
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,unaff_EBX,*(LPVOID *)(unaff_EBP + -0x1c));
    }
  }
  return;
}



/* Function: FUN_00402f97 */

DWORD FUN_00402f97(void)

{
  DWORD DVar1;
  
  DVar1 = FUN_00402c18(DAT_004083f8);
  if (DVar1 == 0x80284008) {
    FUN_004028aa(0x67,0x68,0xfffe);
  }
  else if ((int)DVar1 < 0) {
    FUN_00402986(0x103,0x104,DVar1);
  }
  return DVar1;
}



/* Function: FUN_00402fe8 */

int __fastcall FUN_00402fe8(int param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  int local_c [2];
  
  local_10 = 0;
  local_c[0] = 0;
  iVar1 = FUN_004050e4(param_2,&local_10);
  if (-1 < iVar1) {
    iVar1 = FUN_00405768(param_2,param_3,local_c);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0x14) = local_10;
      *(uint *)(param_1 + 0x20) = (uint)(local_c[0] == 3);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* Function: FUN_00403047 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_00403047(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  DWORD DVar1;
  undefined4 uVar2;
  void *local_24;
  DWORD local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x403053;
  local_20 = 0;
  local_24 = (void *)0x0;
  uVar2 = 0;
  local_8 = 0;
  *param_2 = 0;
  DVar1 = FUN_00402f97();
  local_20 = DVar1;
  if (DVar1 == 0) {
    DVar1 = FUN_00404d87(DAT_004083f8,&local_24);
    local_20 = DVar1;
    if ((int)DVar1 < 0) goto LAB_004030f0;
    if ((DAT_004083f4 == 3) || (DAT_004083f4 == 5)) {
      uVar2 = 5;
    }
    DVar1 = FUN_00402fe8(param_3,local_24,uVar2);
    local_20 = DVar1;
    if (-1 < (int)DVar1) {
      if ((*(int *)(param_3 + 0x14) != 0) && (*(int *)(param_3 + 0x14) != 3)) {
        *param_1 = 0x82;
        goto LAB_004030f0;
      }
      if ((DAT_004083f4 == 3) || (DAT_004083f4 == 5)) {
        FUN_004028aa(0xf9,0xfa,0);
      }
    }
  }
  *param_2 = 1;
LAB_004030f0:
  local_8 = 0xfffffffe;
  FUN_00403113();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00403113 */

void FUN_00403113(void)

{
  code *pcVar1;
  int unaff_EBP;
  DWORD unaff_EDI;
  
  if (*(undefined4 **)(unaff_EBP + -0x20) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x20);
    (*(code *)PTR_guard_check_icall_004091a8)(1);
    (*pcVar1)();
  }
  if (unaff_EDI != 0) {
    FUN_00402bdc(unaff_EDI);
  }
  return;
}



/* Function: FUN_0040313e */

undefined4 FUN_0040313e(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  uVar4 = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = 0;
  local_c = 0;
  iVar3 = FUN_00404d87(DAT_004083f8,&local_8);
  puVar2 = local_8;
  if (-1 < iVar3) {
    if (local_8 == (undefined4 *)0x0) {
      return 0;
    }
    iVar3 = FUN_004051cd(local_8,&local_c,(int *)&local_10);
    if (((-1 < iVar3) && (local_c == 0)) && ((local_10 & 0x1b20) != 0)) {
      uVar4 = 1;
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    pcVar1 = *(code **)*puVar2;
    (*(code *)PTR_guard_check_icall_004091a8)(1);
    (*pcVar1)();
  }
  return uVar4;
}



/* Function: FUN_004031b4 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD FUN_004031b4(int param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar3;
  undefined4 uVar4;
  uint local_34;
  undefined4 *local_30;
  int local_2c;
  void *local_28;
  DWORD local_24;
  undefined4 *local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  puVar1 = DAT_004083f0;
  uStack_c = 0x4031c0;
  local_30 = DAT_004083f0;
  local_24 = 0;
  local_28 = (void *)0x0;
  local_34 = 0;
  local_2c = 0;
  local_8 = 0;
  *DAT_004083f0 = 0;
  DVar2 = FUN_00402f97();
  local_24 = DVar2;
  if (DVar2 == 0) {
    DVar2 = FUN_00404d87(DAT_004083f8,&local_28);
    local_24 = DVar2;
    if ((int)DVar2 < 0) goto LAB_00403400;
    DVar2 = FUN_004050e4(local_28,&local_2c);
    uVar4 = extraout_ECX;
    local_24 = DVar2;
    if ((int)DVar2 < 0) {
      FUN_00402bdc(DVar2);
      uVar4 = extraout_ECX_00;
    }
    if ((local_2c != 0) && (local_2c != 3)) {
      uVar3 = 0;
      if (*(int *)(param_1 + 0x1c) == 0) {
        DVar2 = FUN_0040543c(uVar4,uVar4,&local_34);
        uVar3 = local_34;
        local_24 = DVar2;
      }
      if (DVar2 == 0) {
        if ((uVar3 & 0x23a3b3e) == 0) {
          *local_20 = 0x97;
          goto LAB_00403400;
        }
        if ((uVar3 & 0x20000) != 0) {
          *local_20 = 0x97;
          *(undefined4 *)(param_1 + 0x24) = 1;
          goto LAB_00403400;
        }
        if ((uVar3 & 0x10) != 0) {
          *(undefined4 *)(param_1 + 0x20) = 1;
        }
        if ((uVar3 & 0x26) != 0) {
          *(undefined4 *)(param_1 + 0x1c) = 1;
          DAT_004083f4 = 0;
          if ((uVar3 & 4) == 0) {
            if ((uVar3 & 2) != 0) {
              *(undefined4 *)(param_1 + 0x14) = 1;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x14) = 2;
          }
          *local_20 = 0x82;
          goto LAB_00403400;
        }
        if (((uVar3 & 0x1212e0) == 0) || ((uVar3 & 0x121220) == 0)) goto LAB_004032e7;
        uVar4 = 0xfffe;
        uVar3 = 0x149;
LAB_0040330e:
        FUN_004028aa(0x148,uVar3,uVar4);
      }
      else {
        if (DVar2 == 0x80284013) {
          if ((uVar3 & 0x1212e0) == 0) {
            *local_20 = 0x97;
            *(undefined4 *)(param_1 + 0x30) = 1;
LAB_0040334a:
            DVar2 = 0;
            local_24 = 0;
            goto LAB_00403400;
          }
        }
        else {
          if ((uVar3 & 0x121220) == 0) {
            DVar2 = 0;
            local_24 = 0;
LAB_004032e7:
            *local_20 = 0x97;
            *(undefined4 *)(param_1 + 0x30) = 1;
            goto LAB_00403400;
          }
          if (DVar2 == 0x80280009) {
            if (DAT_004083f4 == 4) {
              DVar2 = FUN_00404fc3(&local_30,&local_34);
              local_24 = DVar2;
              if (((int)DVar2 < 0) || (local_34 == 0)) {
                *local_20 = 0x97;
                *(DWORD *)(param_1 + 0x2c) = DVar2;
              }
              else {
                *local_20 = 0x13c;
              }
              goto LAB_00403400;
            }
          }
          else {
            if (DVar2 == 0x80280803) {
              *local_20 = 0x97;
              *(undefined4 *)(param_1 + 0x2c) = 0x80280803;
              goto LAB_0040334a;
            }
            if ((DVar2 == 0x80070005) && ((uVar3 & 0x1c000) != 0)) {
              uVar4 = 0;
              uVar3 = 0x151;
              goto LAB_0040330e;
            }
          }
        }
        FUN_00402bdc(DVar2);
      }
      *local_30 = 1;
      goto LAB_00403400;
    }
    FUN_004028aa(199,200,0);
  }
  *puVar1 = 1;
LAB_00403400:
  local_8 = 0xfffffffe;
  FUN_00403423();
  ExceptionList = local_14;
  return DVar2;
}



/* Function: FUN_00403423 */

void FUN_00403423(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x24) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x24);
    (*(code *)PTR_guard_check_icall_004091a8)(1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00403450 */

void FUN_00403450(void)

{
  DWORD wParam;
  
  CoInitializeEx((LPVOID)0x0,2);
  wParam = FUN_004031b4(*(int *)(DAT_004083f0 + 4));
  *(DWORD *)(DAT_004083f0 + 8) = wParam;
  CoUninitialize();
  SendNotifyMessageW(*(HWND *)(DAT_004083f0 + 0xc),0x404,wParam,0);
                    /* WARNING: Subroutine does not return */
  ExitThread(wParam);
}



/* Function: FUN_004034b0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_004034b0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  code *pcVar2;
  undefined4 *puVar3;
  LONG LVar4;
  HWND pHVar5;
  int iVar6;
  HANDLE hHeap;
  BOOL BVar7;
  LONG extraout_ECX;
  short *psVar8;
  LONG extraout_ECX_00;
  LONG dwNewLong;
  wchar_t *pwVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  WPARAM wParam;
  DWORD DVar12;
  SIZE_T dwBytes;
  _STARTUPINFOW local_a4;
  _PROCESS_INFORMATION local_60;
  int local_48;
  short *local_44;
  int local_40;
  LONG local_3c;
  wchar_t *local_38;
  LONG local_34;
  rsize_t local_30;
  wchar_t *local_2c;
  DWORD local_28;
  DWORD local_24;
  undefined4 *local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00407728;
  uStack_c = 0x4034bf;
  local_24 = 0;
  local_20[0] = (undefined4 *)0x0;
  local_34 = 0;
  local_40 = 0;
  local_2c = (wchar_t *)0x0;
  local_38 = (wchar_t *)0x0;
  memset(&local_a4,0,0x44);
  local_a4.cb = 0x44;
  local_60.hProcess = (HANDLE)0x0;
  local_60.hThread = (HANDLE)0x0;
  local_60.dwProcessId = 0;
  local_60.dwThreadId = 0;
  LVar4 = GetWindowLongW(param_1,-0x15);
  local_3c = LVar4;
  if (param_2 == 0x4e) {
    iVar6 = *(int *)(param_4 + 8);
    if (iVar6 == -0xd1) {
      if (((LVar4 != 0) && (iVar6 = FUN_004026f4(), iVar6 != 0)) && (*(int *)(LVar4 + 0x1c) != 0)) {
        FUN_00404d87(DAT_004083f8,local_20);
        puVar3 = local_20[0];
        DVar12 = FUN_0040531d(local_20[0],0);
        if ((int)DVar12 < 0) {
          FUN_00402bdc(DVar12);
        }
        if (puVar3 != (undefined4 *)0x0) {
          pcVar2 = *(code **)*puVar3;
          (*(code *)PTR_guard_check_icall_004091a8)(1);
          (*pcVar2)();
        }
      }
    }
    else {
      if (iVar6 == -0xcf) {
        local_8 = (undefined *)0x0;
        local_28 = FUN_00404d87(DAT_004083f8,local_20);
        local_24 = local_28;
        if (-1 < (int)local_28) {
          if (((*(int *)(LVar4 + 0x1c) == 0) && ((DAT_004083f4 == 3 || (DAT_004083f4 == 5)))) &&
             (local_28 = FUN_004057f5((int)local_20[0]), local_24 = local_28, (int)local_28 < 0)) {
            local_48 = 0;
            local_28 = FUN_0040263b(&local_48);
            local_24 = local_28;
            if (-1 < (int)local_28) {
              if (local_48 == 0) {
                uVar10 = 0xe;
              }
              else {
                uVar10 = 0x16;
              }
              local_28 = FUN_0040531d(local_20[0],uVar10);
              local_24 = local_28;
              if (-1 < (int)local_28) goto LAB_0040399d;
            }
          }
          else {
LAB_0040399d:
            local_44 = *(short **)(LVar4 + 0x14);
            if (DAT_004083f8 == (short *)0x0) {
              local_30 = 0x12;
              dwBytes = 0x24;
            }
            else {
              psVar8 = DAT_004083f8;
              do {
                sVar1 = *psVar8;
                psVar8 = psVar8 + 1;
              } while (sVar1 != 0);
              local_30 = ((int)psVar8 - (int)(DAT_004083f8 + 1) >> 1) + 0x17;
              dwBytes = local_30 * 2;
            }
            DVar12 = 8;
            local_28 = local_24;
            hHeap = GetProcessHeap();
            local_38 = (wchar_t *)HeapAlloc(hHeap,DVar12,dwBytes);
            local_2c = local_38;
            if (local_38 == (wchar_t *)0x0) {
              local_28 = 0x8007000e;
              local_24 = local_28;
            }
            else {
              if (local_44 == (short *)0x2) {
                pwVar9 = L"shutdown -r -t 15";
              }
              else {
                pwVar9 = L"shutdown -s -t 15";
              }
              wcsncat_s(local_38,local_30,pwVar9,0x12);
              if (DAT_004083f8 != (short *)0x0) {
                wcsncat_s(local_2c,local_30,L" -m ",5);
                local_44 = DAT_004083f8 + 1;
                psVar8 = DAT_004083f8;
                do {
                  sVar1 = *psVar8;
                  psVar8 = psVar8 + 1;
                } while (sVar1 != 0);
                wcsncat_s(local_2c,local_30,DAT_004083f8,(int)psVar8 - (int)local_44 >> 1);
              }
              BVar7 = CreateProcessW((LPCWSTR)0x0,local_2c,(LPSECURITY_ATTRIBUTES)0x0,
                                     (LPSECURITY_ATTRIBUTES)0x0,1,0xc000020,(LPVOID)0x0,(LPCWSTR)0x0
                                     ,&local_a4,&local_60);
              if (BVar7 == 0) {
                local_28 = _wsystem(local_2c);
                local_24 = local_28;
                if ((int)local_28 < 0) {
                  if (*(int *)(LVar4 + 0x14) == 2) {
                    uVar11 = 0xff;
                    uVar10 = 0xfe;
                  }
                  else {
                    uVar11 = 0x101;
                    uVar10 = 0x100;
                  }
                  FUN_00402986(uVar10,uVar11,local_28);
                  local_28 = 0;
                  local_24 = local_28;
                }
              }
              else {
                if (local_60.hProcess != (HANDLE)0x0) {
                  CloseHandle(local_60.hProcess);
                }
                if (local_60.hThread != (HANDLE)0x0) {
                  CloseHandle(local_60.hThread);
                }
              }
            }
          }
        }
        local_8 = (undefined *)0xfffffffe;
        FUN_00403b13();
        dwNewLong = extraout_ECX_00;
        goto LAB_00403bff;
      }
      if (iVar6 == -0xce) {
        local_34 = 0x82;
        local_40 = 1;
        *(undefined4 *)(LVar4 + 0x34) = 0;
        iVar6 = FUN_004026f4();
        dwNewLong = extraout_ECX;
        if ((iVar6 != 0) && (dwNewLong = extraout_ECX, *(int *)(LVar4 + 0x1c) != 0)) {
          FUN_00404d87(DAT_004083f8,local_20);
          FUN_0040531d(local_20[0],0);
          *(undefined4 *)(LVar4 + 0x1c) = 0;
          dwNewLong = local_34;
          if (local_20[0] != (undefined4 *)0x0) {
            pcVar2 = *(code **)*local_20[0];
            (*(code *)PTR_guard_check_icall_004091a8)(1);
            (*pcVar2)();
            dwNewLong = local_34;
          }
        }
        goto LAB_00403bff;
      }
      if (iVar6 != -200) {
        if (((iVar6 == -4) || (iVar6 == -2)) && (*(int *)(param_4 + 4) == 0x3ec)) {
          FUN_00406a6a();
        }
        goto LAB_00403bfd;
      }
      FUN_0040270f(param_1);
      pHVar5 = GetDlgItem(param_1,0x3ec);
      DestroyWindow(pHVar5);
      PostMessageW(param_1,0x48a,0x12,0x13);
      if (DAT_004083f4 == 3) {
        PostMessageW(param_1,0x48b,0x12,0x12);
        uVar10 = 0xd7;
LAB_00403628:
        FUN_00402dba(param_1,uVar10);
      }
      else {
        if (DAT_004083f4 == 5) {
          PostMessageW(param_1,0x48b,0x12,0x13);
          FUN_00402cb7(param_1);
          uVar10 = 0x16e;
          goto LAB_00403628;
        }
        PostMessageW(param_1,0x48a,0x13,0x13);
        if (*(int *)(LVar4 + 0x34) == 0) {
          wParam = 0x12;
        }
        else {
          wParam = 0x13;
        }
        PostMessageW(param_1,0x48b,wParam,0x13);
      }
      if (*(int *)(LVar4 + 0x14) == 2) {
        FUN_00402d3a(param_1,0x87);
        if (DAT_004083f8 == (short *)0x0) {
          if (*(int *)(LVar4 + 0x20) == 0) {
            if (DAT_004083f4 == 3) {
              pHVar5 = GetDlgItem(param_1,0x410);
              FUN_00402ede(pHVar5,0x154);
              pHVar5 = GetDlgItem(param_1,0x431);
              uVar10 = 0x165;
            }
            else {
              if (DAT_004083f4 == 5) goto LAB_00403713;
              pHVar5 = GetDlgItem(param_1,0x410);
              FUN_00402ede(pHVar5,0x14b);
              pHVar5 = GetDlgItem(param_1,0x431);
              uVar10 = 0x14c;
            }
          }
          else if (DAT_004083f4 == 3) {
            pHVar5 = GetDlgItem(param_1,0x410);
            FUN_00402ede(pHVar5,0x152);
            pHVar5 = GetDlgItem(param_1,0x431);
            uVar10 = 0x162;
          }
          else if (DAT_004083f4 == 5) {
LAB_00403713:
            pHVar5 = GetDlgItem(param_1,0x410);
            FUN_00402ede(pHVar5,0x170);
            pHVar5 = GetDlgItem(param_1,0x431);
            uVar10 = 0x164;
          }
          else {
            pHVar5 = GetDlgItem(param_1,0x410);
            FUN_00402ede(pHVar5,0x143);
            pHVar5 = GetDlgItem(param_1,0x431);
            uVar10 = 0x14a;
          }
        }
        else {
          pHVar5 = GetDlgItem(param_1,0x410);
          uVar10 = 0xf5;
        }
      }
      else {
        if (*(int *)(LVar4 + 0x14) != 1) goto LAB_00403bfd;
        FUN_00402d3a(param_1,0x88);
        if (DAT_004083f8 == (short *)0x0) {
          if (*(int *)(LVar4 + 0x20) == 0) {
            if (DAT_004083f4 == 3) {
              pHVar5 = GetDlgItem(param_1,0x410);
              FUN_00402ede(pHVar5,0x15d);
              pHVar5 = GetDlgItem(param_1,0x431);
              uVar10 = 0x16b;
            }
            else {
              if (DAT_004083f4 == 5) goto LAB_0040384f;
              pHVar5 = GetDlgItem(param_1,0x410);
              FUN_00402ede(pHVar5,0x15b);
              pHVar5 = GetDlgItem(param_1,0x431);
              uVar10 = 0x15c;
            }
          }
          else if (DAT_004083f4 == 3) {
            pHVar5 = GetDlgItem(param_1,0x410);
            FUN_00402ede(pHVar5,0x159);
            pHVar5 = GetDlgItem(param_1,0x431);
            uVar10 = 0x168;
          }
          else if (DAT_004083f4 == 5) {
LAB_0040384f:
            pHVar5 = GetDlgItem(param_1,0x410);
            FUN_00402ede(pHVar5,0x170);
            pHVar5 = GetDlgItem(param_1,0x431);
            uVar10 = 0x16a;
          }
          else {
            FUN_00402dba(param_1,0x156);
            pHVar5 = GetDlgItem(param_1,0x410);
            FUN_00402ede(pHVar5,0x157);
            pHVar5 = GetDlgItem(param_1,0x431);
            uVar10 = 0x158;
          }
        }
        else {
          pHVar5 = GetDlgItem(param_1,0x410);
          uVar10 = 0xf6;
        }
      }
      FUN_00402ede(pHVar5,uVar10);
    }
  }
  else if (param_2 == 0x53) {
    if (DAT_004083f4 == 0) {
      pwVar9 = L"tpmadmin.chm::/html/5f2457b7-2ccb-479c-9ec4-7ac5ecb0b5b7.htm";
    }
    else {
      if ((DAT_004083f4 != 3) && (DAT_004083f4 != 5)) goto LAB_00403bfd;
      pwVar9 = L"tpmadmin.chm::/html/45da796d-ded5-423f-bf90-07c670384a2a.htm";
    }
    FUN_0040698e(param_1,pwVar9);
  }
  else if (param_2 == 0x110) {
    SetWindowLongW(param_1,-0x15,*(LONG *)(param_4 + 0x1c));
  }
LAB_00403bfd:
  dwNewLong = 0;
LAB_00403bff:
  iVar6 = local_40;
  if (local_40 != 0) {
    SetWindowLongW(param_1,0,dwNewLong);
  }
  ExceptionList = local_14;
  return iVar6;
}



/* Function: FUN_00403b13 */

void FUN_00403b13(void)

{
  LPCVOID lpMem;
  int iVar1;
  code *pcVar2;
  HANDLE pvVar3;
  SIZE_T SVar4;
  undefined1 *puVar5;
  DWORD unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  HWND unaff_EDI;
  DWORD dwFlags;
  LPVOID pvVar6;
  
  if (*(DWORD *)(unaff_ESI + 8) != unaff_EBX) {
    lpMem = *(LPCVOID *)(unaff_ESI + 8);
    pvVar3 = GetProcessHeap();
    SVar4 = HeapSize(pvVar3,unaff_EBX,lpMem);
    if (SVar4 != 0xffffffff) {
      iVar1 = *(int *)(unaff_EBP + -0x38);
      puVar5 = *(undefined1 **)(iVar1 + 8);
      for (; SVar4 != 0; SVar4 = SVar4 - 1) {
        *puVar5 = (char)unaff_EBX;
        puVar5 = puVar5 + 1;
      }
      pvVar6 = *(LPVOID *)(iVar1 + 8);
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,unaff_EBX,pvVar6);
    }
    *(DWORD *)(*(int *)(unaff_EBP + -0x38) + 8) = unaff_EBX;
  }
  if (*(undefined4 **)(unaff_EBP + -0x1c) != (undefined4 *)0x0) {
    pcVar2 = *(code **)**(undefined4 **)(unaff_EBP + -0x1c);
    (*(code *)PTR_guard_check_icall_004091a8)(1);
    (*pcVar2)();
  }
  pvVar6 = *(LPVOID *)(unaff_EBP + -0x28);
  if (pvVar6 != (LPVOID)0x0) {
    dwFlags = unaff_EBX;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,dwFlags,pvVar6);
    *(DWORD *)(unaff_EBP + -0x34) = unaff_EBX;
  }
  if ((int)*(DWORD *)(unaff_EBP + -0x24) < 0) {
    FUN_00402bdc(*(DWORD *)(unaff_EBP + -0x24));
  }
  PostMessageW(unaff_EDI,0x471,2,unaff_EBX);
  return;
}



/* Function: FUN_00403c30 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_00403c30(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  LONG LVar1;
  int iVar2;
  HWND pHVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  void *local_20 [3];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00407748;
  uStack_c = 0x403c3c;
  LVar1 = GetWindowLongW(param_1,-0x15);
  if (param_2 != 0x4e) {
    if (param_2 != 0x53) {
      if (param_2 != 0x110) {
        ExceptionList = local_14;
        return 0;
      }
      SetWindowLongW(param_1,-0x15,*(LONG *)(param_4 + 0x1c));
      ExceptionList = local_14;
      return 0;
    }
    if (DAT_004083f4 == 0) {
      pwVar4 = L"tpmadmin.chm::/html/5f2457b7-2ccb-479c-9ec4-7ac5ecb0b5b7.htm";
    }
    else {
      if ((DAT_004083f4 != 3) && (DAT_004083f4 != 5)) {
        ExceptionList = local_14;
        return 0;
      }
      pwVar4 = L"tpmadmin.chm::/html/45da796d-ded5-423f-bf90-07c670384a2a.htm";
    }
    FUN_0040698e(param_1,pwVar4);
    ExceptionList = local_14;
    return 0;
  }
  if (*(int *)(param_4 + 8) != -200) {
    ExceptionList = local_14;
    return 0;
  }
  FUN_0040270f(param_1);
  SendMessageW(param_1,0x470,0,4);
  PostMessageW(param_1,0x48a,5,0x17);
  FUN_00402e5d(param_1);
  if (*(int *)(LVar1 + 0x2c) == 0) {
    if (*(int *)(LVar1 + 0x24) == 0) {
      if (*(int *)(LVar1 + 0x30) == 0) {
        iVar2 = FUN_004026f4();
        if (iVar2 == 0) {
          ExceptionList = local_14;
          return 0;
        }
        local_20[0] = (void *)0x0;
        local_8 = (undefined *)0x1;
        iVar2 = FUN_00404d87(DAT_004083f8,local_20);
        if (-1 < iVar2) {
          iVar2 = FUN_00405627(local_20[0],(undefined4 *)(LVar1 + 0x28));
        }
        local_8 = (undefined *)0xfffffffe;
        FUN_00403e0b();
        FUN_00402dba(param_1,0x13f);
        pHVar3 = GetDlgItem(param_1,0x41a);
        if (iVar2 == 0) {
          uVar5 = 0x13e;
        }
        else {
          uVar5 = 0x160;
        }
      }
      else {
        local_20[0] = (void *)0x0;
        local_8 = (undefined *)0x0;
        iVar2 = FUN_00404d87(DAT_004083f8,local_20);
        if (-1 < iVar2) {
          iVar2 = FUN_00405627(local_20[0],(undefined4 *)(LVar1 + 0x28));
        }
        local_8 = (undefined *)0xfffffffe;
        FUN_00403d74();
        FUN_00402dba(param_1,0x13f);
        pHVar3 = GetDlgItem(param_1,0x41a);
        uVar5 = 0x161;
        if (iVar2 == 0) {
          uVar5 = 0x15f;
        }
      }
      goto LAB_00403e96;
    }
  }
  else if (*(int *)(LVar1 + 0x24) == 0) {
    if (*(int *)(LVar1 + 0x2c) == -0x7fd7f7fd) {
      FUN_00402dba(param_1,0x140);
      pHVar3 = GetDlgItem(param_1,0x41a);
      uVar5 = 0x141;
    }
    else {
      FUN_00402dba(param_1,0x148);
      pHVar3 = GetDlgItem(param_1,0x41a);
      uVar5 = 0x149;
    }
    goto LAB_00403e96;
  }
  FUN_00402dba(param_1,0x14f);
  pHVar3 = GetDlgItem(param_1,0x41a);
  uVar5 = 0x150;
LAB_00403e96:
  FUN_00402ede(pHVar3,uVar5);
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_00403d74 */

void FUN_00403d74(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x1c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x1c);
    (*(code *)PTR_guard_check_icall_004091a8)(1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00403e0b */

void FUN_00403e0b(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x1c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x1c);
    (*(code *)PTR_guard_check_icall_004091a8)(1);
    (*pcVar1)();
  }
  return;
}



/* Function: FUN_00403ec0 */

undefined4 FUN_00403ec0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  wchar_t *pwVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  GetWindowLongW(param_1,-0x15);
  if (param_2 == 0x4e) {
    if (*(int *)(param_4 + 8) != -200) {
      return 0;
    }
    FUN_0040270f(param_1);
    SendMessageW(param_1,0x470,0,0x10);
    lParam = 0x17;
    wParam = 0x11;
    Msg = 0x48a;
  }
  else {
    if (param_2 == 0x53) {
      if (DAT_004083f4 == 0) {
        pwVar1 = L"tpmadmin.chm::/html/5f2457b7-2ccb-479c-9ec4-7ac5ecb0b5b7.htm";
      }
      else {
        if ((DAT_004083f4 != 3) && (DAT_004083f4 != 5)) {
          return 0;
        }
        pwVar1 = L"tpmadmin.chm::/html/45da796d-ded5-423f-bf90-07c670384a2a.htm";
      }
      FUN_0040698e(param_1,pwVar1);
      return 0;
    }
    if (param_2 == 0x110) {
      SetWindowLongW(param_1,-0x15,*(LONG *)(param_4 + 0x1c));
      return 0;
    }
    if (param_2 != 0x111) {
      return 0;
    }
    if ((short)((uint)param_3 >> 0x10) != 0) {
      return 0;
    }
    if ((short)param_3 == 0x42d) {
      DAT_004083f4 = 0;
      SendMessageW(param_1,0x472,0,0x137);
      DAT_004083ec = 0;
      return 0;
    }
    if ((short)param_3 != 0x42e) {
      return 0;
    }
    lParam = 0;
    wParam = 2;
    Msg = 0x471;
  }
  PostMessageW(param_1,Msg,wParam,lParam);
  return 0;
}



/* Function: FUN_00403fd0 */

undefined4 FUN_00403fd0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  LONG LVar1;
  int *piVar2;
  HWND pHVar3;
  undefined4 uVar4;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  LVar1 = GetWindowLongW(param_1,-0x15);
  if ((DAT_004083ec == 0) && (LVar1 != 0)) {
    DAT_004083ec = 1;
    piVar2 = (int *)FUN_00406bc7(0x10);
    DAT_004083f0 = piVar2;
    *piVar2 = 0;
    piVar2[1] = LVar1;
    piVar2[2] = 0;
    piVar2[3] = (int)param_1;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00403450,(LPVOID)0x0,0,(LPDWORD)0x0);
  }
  piVar2 = DAT_004083f0;
  if (param_2 == 0x4e) {
    if (*(int *)(param_4 + 8) == -0xd1) {
      FUN_004028aa(0xde,0xdf,0xfffe);
      SetWindowLongW(param_1,0,1);
      return 1;
    }
    if (*(int *)(param_4 + 8) != -200) {
      return 0;
    }
    FUN_0040270f(param_1);
    PostMessageW(param_1,0x48a,0x13,0x13);
    PostMessageW(param_1,0x48b,0,0x13);
    if (DAT_004083f4 == 4) {
      FUN_00402dba(param_1,0x145);
      pHVar3 = GetDlgItem(param_1,0x42a);
      uVar4 = 0x146;
    }
    else {
      pHVar3 = GetDlgItem(param_1,0x42a);
      uVar4 = 0x139;
    }
    FUN_00402ede(pHVar3,uVar4);
    lParam = 100;
    wParam = 1;
    Msg = 0x40a;
    param_1 = GetDlgItem(param_1,0x42f);
  }
  else {
    if (param_2 == 0x53) {
      if (DAT_004083f4 != 0) {
        return 0;
      }
      FUN_0040698e(param_1,L"tpmadmin.chm::/html/5f2457b7-2ccb-479c-9ec4-7ac5ecb0b5b7.htm");
      return 0;
    }
    if (param_2 == 0x110) {
      SetWindowLongW(param_1,-0x15,*(LONG *)(param_4 + 0x1c));
      return 0;
    }
    if (param_2 != 0x404) {
      return 0;
    }
    if (*DAT_004083f0 != 0) {
      PostMessageW(param_1,0x471,2,0);
      return 0;
    }
    lParam = *(LPARAM *)(DAT_004083f0[1] + 0x10);
    DAT_004083f0[1] = 0;
    free(piVar2);
    wParam = 0;
    Msg = 0x472;
    DAT_004083f0 = (int *)0x0;
  }
  SendMessageW(param_1,Msg,wParam,lParam);
  return 0;
}



/* Function: FUN_0040418c */

void __fastcall
FUN_0040418c(undefined4 param_1,void *param_2,undefined4 param_3,int param_4,uint *param_5)

{
  ushort uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  code *local_28 [4];
  ushort local_18 [8];
  uint local_8;
  
  local_8 = DAT_00408040 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  local_18[4] = 0x13a;
  local_18[5] = 0x85;
  local_18[6] = 0x98;
  local_18[7] = 0x13d;
  local_18[0] = 0x137;
  local_18[1] = 0x82;
  local_18[2] = 0x97;
  local_18[3] = 0x13c;
  local_28[0] = FUN_00403fd0;
  local_28[1] = FUN_004034b0;
  local_28[2] = FUN_00403c30;
  local_28[3] = FUN_00403ec0;
  memset(param_2,0,0xe0);
  puVar3 = (undefined4 *)((int)param_2 + 4);
  do {
    uVar1 = local_18[uVar4];
    puVar3[1] = param_1;
    puVar3[9] = (uint)local_18[uVar4 + 4];
    pcVar2 = local_28[uVar4];
    puVar3[-1] = 0x38;
    *puVar3 = 0x1000;
    puVar3[2] = (uint)uVar1;
    puVar3[5] = pcVar2;
    puVar3[6] = param_4;
    if ((*(int *)(param_4 + 0x10) != 0) && (*(uint *)(param_4 + 0x10) == (uint)uVar1)) {
      *param_5 = uVar4;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 0xe;
  } while (uVar4 < 4);
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,param_4);
  return;
}



/* Function: FUN_00404252 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall
FUN_00404252(HINSTANCE param_1,undefined4 *param_2,void *param_3,undefined4 param_4,int param_5,
            int *param_6)

{
  DWORD DVar1;
  int iVar2;
  HICON pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  uint local_28;
  HINSTANCE local_24;
  DWORD local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00407770;
  uStack_c = 0x40425e;
  local_20 = 0;
  local_28 = 0;
  local_24 = param_1;
  memset(param_2,0,0x34);
  local_8 = (undefined *)0x0;
  *param_6 = 0;
  *(undefined4 *)(param_5 + 4) = 0;
  *(undefined4 *)(param_5 + 8) = 0;
  *(undefined4 *)(param_5 + 0xc) = 0;
  *(undefined4 *)(param_5 + 0x14) = 0;
  *(undefined4 *)(param_5 + 0x1c) = 0;
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x2c) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  *(undefined4 *)(param_5 + 0x28) = 0;
  *(undefined4 *)(param_5 + 0x30) = 0;
  *(undefined4 *)(param_5 + 0x34) = 0;
  DVar1 = FUN_004024d7((undefined4 *)(param_5 + 0x18));
  local_20 = DVar1;
  if (-1 < (int)DVar1) {
    iVar2 = FUN_004026f4();
    uVar4 = extraout_ECX;
    if (iVar2 == 0) {
      DVar1 = FUN_00403047((undefined4 *)(param_5 + 0x10),param_6,param_5);
      uVar4 = extraout_ECX_00;
      local_20 = DVar1;
      if ((int)DVar1 < 0) goto LAB_0040432d;
    }
    if (*param_6 == 0) {
      FUN_0040418c(local_24,param_3,uVar4,param_5,&local_28);
      *param_2 = 0x34;
      param_2[3] = local_24;
      param_2[2] = 0;
      param_2[8] = param_3;
      param_2[1] = 0x402a;
      pHVar3 = LoadIconW(local_24,(LPCWSTR)0xa);
      param_2[4] = pHVar3;
      param_2[5] = *(undefined4 *)(param_5 + 0x18);
      param_2[6] = 4;
      param_2[7] = local_28;
    }
  }
LAB_0040432d:
  local_8 = (undefined *)0xfffffffe;
  FUN_00404350();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00404350 */

void FUN_00404350(void)

{
  return;
}



/* Function: FUN_00404357 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int __fastcall FUN_00404357(char *param_1,int *param_2)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint local_30;
  uint local_20;
  void *local_14;
  
  *param_2 = 0;
  if (param_1 == (char *)0x0) {
    iVar4 = -0x7ff8ffa9;
  }
  else {
    iVar2 = 0x7fffffff;
    for (pcVar3 = param_1; (iVar2 != 0 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
      iVar2 = iVar2 + -1;
    }
    iVar4 = 0;
    if (iVar2 == 0) {
      iVar4 = -0x7ff8ffa9;
    }
    if (-1 < iVar4) {
      local_20 = 0x7fffffff - iVar2;
      goto LAB_004043c3;
    }
  }
  local_20 = 0;
LAB_004043c3:
  if (iVar4 < 0) {
    local_20 = 0;
  }
  if (-1 < iVar4) {
    hHeap = GetProcessHeap();
    pvVar1 = HeapAlloc(hHeap,8,local_20 * 2 + 2);
    *param_2 = (int)pvVar1;
    if (pvVar1 == (LPVOID)0x0) {
      iVar4 = -0x7ff8fff2;
    }
    else {
      for (local_30 = 0; local_30 < local_20; local_30 = local_30 + 1) {
        *(short *)(local_30 * 2 + *param_2) = (short)param_1[local_30];
      }
      *(undefined2 *)(local_30 * 2 + *param_2) = 0;
    }
  }
  FUN_0040445a();
  ExceptionList = local_14;
  return iVar4;
}



/* Function: FUN_0040445a */

void FUN_0040445a(void)

{
  LPVOID lpMem;
  HANDLE hHeap;
  int unaff_EBX;
  int unaff_EBP;
  DWORD unaff_EDI;
  
  if ((unaff_EBX < 0) && (**(DWORD **)(unaff_EBP + -0x20) != unaff_EDI)) {
    lpMem = (LPVOID)**(DWORD **)(unaff_EBP + -0x20);
    hHeap = GetProcessHeap();
    HeapFree(hHeap,unaff_EDI,lpMem);
    **(DWORD **)(unaff_EBP + -0x20) = unaff_EDI;
  }
  return;
}



/* Function: FUN_00404482 */

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */

int __fastcall FUN_00404482(char *param_1,undefined4 *param_2)

{
  LPVOID lpMem;
  undefined4 *puVar1;
  HANDLE pvVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int local_40 [4];
  undefined4 *local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined2 local_24;
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x40448e;
  iVar6 = 0;
  local_40[2] = 0;
  local_28 = DAT_004016dc;
  local_24 = DAT_004016e0;
  iVar5 = 0;
  local_40[1] = 0;
  local_40[0] = 0;
  local_8 = 0;
  local_2c = (wchar_t *)param_2[1];
  local_30 = param_2;
  if (local_2c != (wchar_t *)0x0) {
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,0,local_2c);
    local_30[1] = 0;
  }
  *local_30 = 0;
  if ((param_1 != (char *)0x0) &&
     (iVar6 = FUN_00404357(param_1,local_40 + 1), local_40[2] = iVar6, -1 < iVar6)) {
    while (local_2c = (wchar_t *)FUN_00406f96(), local_2c != (wchar_t *)0x0) {
      iVar3 = _wcsicmp(local_2c,L"/m");
      if (iVar3 == 0) {
        iVar5 = 1;
        local_40[3] = iVar5;
      }
      else {
        iVar3 = _wcsicmp(local_2c,L"/postTurnOn");
        if (iVar3 == 0) {
          *local_30 = 4;
          goto LAB_00404601;
        }
        iVar3 = _wcsicmp(local_2c,L"/clearTpm");
        if (iVar3 == 0) {
          *local_30 = 3;
          goto LAB_00404601;
        }
        iVar3 = _wcsicmp(local_2c,L"/clearTpmByPolicy");
        puVar1 = local_30;
        if (iVar3 == 0) {
          *local_30 = 5;
          goto LAB_00404601;
        }
        if (iVar5 != 0) {
          lpMem = (LPVOID)local_30[1];
          if (lpMem != (LPVOID)0x0) {
            pvVar2 = GetProcessHeap();
            HeapFree(pvVar2,0,lpMem);
            puVar1[1] = 0;
          }
          iVar6 = FUN_00402164(local_2c,0x7fffffff,local_40);
          iVar5 = local_40[0];
          local_40[2] = iVar6;
          if (iVar6 < 0) break;
          iVar6 = local_40[0] * 2;
          pvVar2 = GetProcessHeap();
          psVar4 = (short *)HeapAlloc(pvVar2,8,iVar6 + 2);
          local_30[1] = psVar4;
          iVar6 = FUN_00401f82(psVar4,iVar5 + 1,(int)local_2c);
          local_40[2] = iVar6;
          if (iVar6 < 0) break;
LAB_00404601:
          iVar5 = 0;
          local_40[3] = iVar5;
        }
      }
    }
  }
  local_8 = 0xfffffffe;
  FUN_00404633();
  ExceptionList = local_14;
  return iVar6;
}



/* Function: FUN_00404633 */

void FUN_00404633(void)

{
  LPVOID lpMem;
  HANDLE hHeap;
  DWORD unaff_EBX;
  int unaff_EBP;
  
  lpMem = *(LPVOID *)(unaff_EBP + -0x38);
  if (lpMem != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,unaff_EBX,lpMem);
    *(DWORD *)(unaff_EBP + -0x38) = unaff_EBX;
  }
  return;
}



/* Function: FUN_00404653 */

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */

DWORD FUN_00404653(void)

{
  LPWSTR lpCmdLine;
  DWORD DVar1;
  int iVar2;
  wchar_t *pwVar3;
  PCWSTR pwzCommandline;
  uint uVar4;
  uint uVar5;
  int *pNumArgs;
  uint local_834;
  wchar_t *local_830;
  LPWSTR *local_82c;
  int local_828;
  uint local_824;
  wchar_t local_820 [1030];
  void *local_14;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x404662;
  local_824 = 0;
  local_82c = (LPWSTR *)0x0;
  local_828 = 0;
  local_834 = 0x400;
  local_8 = 0;
  local_830 = local_820;
  pNumArgs = &local_828;
  lpCmdLine = GetCommandLineW();
  local_82c = CommandLineToArgvW(lpCmdLine,pNumArgs);
  if (local_82c == (LPWSTR *)0x0) {
    DVar1 = GetLastError();
    uVar4 = DVar1 & 0xffff | 0x80070000;
    if ((int)DVar1 < 1) {
      uVar4 = DVar1;
    }
  }
  else if (local_828 < 2) {
LAB_0040474a:
    pwzCommandline = local_820;
    if (local_828 < 2) {
      pwzCommandline = (PCWSTR)0x0;
    }
    uVar4 = RegisterApplicationRestart(pwzCommandline,0);
  }
  else {
    iVar2 = 1;
    uVar5 = 0x400;
    do {
      if (local_828 <= iVar2) goto LAB_0040474a;
      iVar2 = iVar2 + 1;
      pwVar3 = L"%s";
      if (iVar2 != local_828) {
        pwVar3 = L"%s ";
      }
      local_824 = FUN_00402000(local_830,uVar5,(int *)&local_830,&local_834,0,pwVar3);
      uVar5 = local_834;
      uVar4 = local_824;
    } while (-1 < (int)local_824);
  }
  local_8 = 0xfffffffe;
  local_824 = uVar4;
  FUN_00404794();
  ExceptionList = local_14;
  return uVar4;
}



/* Function: FUN_00404794 */

void FUN_00404794(void)

{
  HLOCAL unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_EDI;
  
  if (unaff_EBX != (HLOCAL)0x0) {
    LocalFree(unaff_EBX);
    *(undefined4 *)(unaff_EBP + -0x828) = unaff_EDI;
  }
  return;
}



/* Function: FUN_004047b0 */

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */

bool FUN_004047b0(HWND param_1)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  LPCWSTR local_824;
  WCHAR local_820 [1030];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004077f0;
  uStack_c = 0x4047bf;
  bVar1 = false;
  memset(local_820,0,0x800);
  local_824 = (LPCWSTR)0x0;
  local_8 = (undefined *)0x0;
  iVar2 = GetWindowTextW(param_1,local_820,0x400);
  if (iVar2 == 0) {
    GetLastError();
  }
  else {
    DVar3 = FUN_004024d7(&local_824);
    if (-1 < (int)DVar3) {
      iVar2 = lstrcmpW(local_820,local_824);
      if (iVar2 == 0) {
        SetForegroundWindow(param_1);
        bVar1 = true;
      }
    }
  }
  local_8 = (undefined *)0xfffffffe;
  FUN_00404868();
  ExceptionList = local_14;
  return !bVar1;
}



/* Function: FUN_00404868 */

void FUN_00404868(void)

{
  HANDLE hHeap;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x820) != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,*(LPVOID *)(unaff_EBP + -0x820));
  }
  return;
}



/* Function: FUN_0040488d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

DWORD __fastcall FUN_0040488d(int *param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  uint uVar3;
  void *local_14;
  
  pvVar1 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,L"Local\\TpmInit");
  *param_1 = (int)pvVar1;
  DVar2 = GetLastError();
  uVar3 = DVar2 & 0xffff | 0x80070000;
  if ((int)DVar2 < 1) {
    uVar3 = DVar2;
  }
  if ((*param_1 != 0) && (uVar3 == 0x800700b7)) {
    uVar3 = 0;
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
    EnumWindows(FUN_004047b0,0);
  }
  FUN_00404912();
  ExceptionList = local_14;
  return uVar3;
}



/* Function: FUN_00404912 */

void FUN_00404912(void)

{
  return;
}



/* Function: FUN_00404919 */

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */

undefined4 FUN_00404919(INT_PTR param_1,undefined4 param_2,char *param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  PROPSHEETHEADERW_V2 local_184;
  undefined1 local_150 [56];
  char *local_118;
  INT_PTR local_114;
  int local_110 [5];
  undefined1 local_fc [232];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00407830;
  uStack_c = 0x404928;
  local_114 = param_1;
  local_118 = param_3;
  local_110[3] = 0;
  local_110[0] = 0;
  local_110[1] = 0;
  local_110[2] = 0;
  memset(&local_184,0,0x34);
  local_110[4] = 0;
  memset(local_fc,0,0xdc);
  memset(local_150,0,0x38);
  local_8 = (undefined *)0x0;
  BVar1 = HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    local_110[3] = DVar2 & 0xffff | 0x80070000;
    if ((int)DVar2 < 1) {
      local_110[3] = DVar2;
    }
    if (local_110[3] < 0) goto LAB_00404aed;
  }
  local_110[3] = FUN_00404653();
  if ((-1 < local_110[3]) && (local_110[3] = CoInitializeEx((LPVOID)0x0,2), -1 < local_110[3])) {
    local_110[1] = 1;
    local_110[3] = CoInitializeSecurity
                             ((PSECURITY_DESCRIPTOR)0x0,-1,(SOLE_AUTHENTICATION_SERVICE *)0x0,
                              (void *)0x0,6,3,(void *)0x0,0,(void *)0x0);
    if ((-1 < local_110[3]) &&
       (local_110[3] = FUN_00404482(local_118,&DAT_004083f4), -1 < local_110[3])) {
      if (DAT_004083f8 == 0) {
        FUN_004022fb();
      }
      local_110[3] = FUN_0040488d(local_110 + 2);
      if ((((-1 < local_110[3]) && (local_110[2] != 0)) &&
          ((uVar4 = extraout_ECX, DAT_004083f4 != 5 ||
           (iVar3 = FUN_0040313e(), uVar4 = extraout_ECX_00, iVar3 != 0)))) &&
         (((local_110[3] = FUN_00404252(local_114,&local_184.dwSize,local_110 + 4,uVar4,
                                        (int)local_150,local_110), -1 < local_110[3] &&
           (local_110[0] == 0)) && (local_114 = PropertySheetW(&local_184), local_114 < 0)))) {
        DVar2 = GetLastError();
        local_110[3] = DVar2 & 0xffff | 0x80070000;
        if ((int)DVar2 < 1) {
          local_110[3] = DVar2;
        }
      }
    }
  }
LAB_00404aed:
  local_8 = (undefined *)0xfffffffe;
  FUN_00404b1b();
  ExceptionList = local_14;
  return 0;
}



/* Function: FUN_00404b1b */

void FUN_00404b1b(void)

{
  HANDLE pvVar1;
  SIZE_T SVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  LPVOID unaff_EBX;
  int unaff_EBP;
  DWORD unaff_ESI;
  int unaff_EDI;
  LPVOID pvVar5;
  LPVOID dwFlags;
  LPCVOID pvVar6;
  
  if (unaff_EDI != 0) {
    CoUninitialize();
    *(LPVOID *)(unaff_EBP + -0x108) = unaff_EBX;
  }
  uVar4 = SUB41(unaff_EBX,0);
  if (*(int *)(unaff_EBP + -0x144) != 0) {
    pvVar6 = *(LPCVOID *)(unaff_EBP + -0x144);
    pvVar5 = unaff_EBX;
    pvVar1 = GetProcessHeap();
    SVar2 = HeapSize(pvVar1,(DWORD)pvVar5,pvVar6);
    if (SVar2 != 0xffffffff) {
      puVar3 = *(undefined1 **)(unaff_EBP + -0x144);
      if (SVar2 != 0) {
        do {
          *puVar3 = uVar4;
          puVar3 = puVar3 + 1;
          SVar2 = SVar2 - 1;
        } while (SVar2 != 0);
        puVar3 = *(undefined1 **)(unaff_EBP + -0x144);
      }
      pvVar5 = unaff_EBX;
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,(DWORD)pvVar5,puVar3);
    }
    *(LPVOID *)(unaff_EBP + -0x144) = unaff_EBX;
  }
  if (*(int *)(unaff_EBP + -0x140) != 0) {
    pvVar6 = *(LPCVOID *)(unaff_EBP + -0x140);
    pvVar5 = unaff_EBX;
    pvVar1 = GetProcessHeap();
    SVar2 = HeapSize(pvVar1,(DWORD)pvVar5,pvVar6);
    if (SVar2 != 0xffffffff) {
      puVar3 = *(undefined1 **)(unaff_EBP + -0x140);
      if (SVar2 != 0) {
        do {
          *puVar3 = uVar4;
          puVar3 = puVar3 + 1;
          SVar2 = SVar2 - 1;
        } while (SVar2 != 0);
        puVar3 = *(undefined1 **)(unaff_EBP + -0x140);
      }
      pvVar5 = unaff_EBX;
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,(DWORD)pvVar5,puVar3);
    }
    *(LPVOID *)(unaff_EBP + -0x140) = unaff_EBX;
  }
  if (*(int *)(unaff_EBP + -0x124) != 0) {
    pvVar6 = *(LPCVOID *)(unaff_EBP + -0x124);
    pvVar5 = unaff_EBX;
    pvVar1 = GetProcessHeap();
    SVar2 = HeapSize(pvVar1,(DWORD)pvVar5,pvVar6);
    if (SVar2 != 0xffffffff) {
      puVar3 = *(undefined1 **)(unaff_EBP + -0x124);
      if (SVar2 != 0) {
        do {
          *puVar3 = uVar4;
          puVar3 = puVar3 + 1;
          SVar2 = SVar2 - 1;
        } while (SVar2 != 0);
        puVar3 = *(undefined1 **)(unaff_EBP + -0x124);
      }
      pvVar5 = unaff_EBX;
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,(DWORD)pvVar5,puVar3);
    }
    *(LPVOID *)(unaff_EBP + -0x124) = unaff_EBX;
  }
  if (*(int *)(unaff_EBP + -0x134) != 0) {
    pvVar5 = *(LPVOID *)(unaff_EBP + -0x134);
    dwFlags = unaff_EBX;
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,(DWORD)dwFlags,pvVar5);
    *(LPVOID *)(unaff_EBP + -0x134) = unaff_EBX;
  }
  pvVar5 = DAT_004083f8;
  if (DAT_004083f8 != (LPVOID)0x0) {
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,(DWORD)unaff_EBX,pvVar5);
    DAT_004083f8 = unaff_EBX;
  }
  if (*(int *)(unaff_EBP + -0x104) != 0) {
    CloseHandle(*(HANDLE *)(unaff_EBP + -0x104));
  }
  if (((int)unaff_ESI < 0) && (*(int *)(unaff_EBP + -0x10c) == 0)) {
    FUN_00402bdc(unaff_ESI);
  }
  return;
}



/* Function: FUN_00404c8a */

void __fastcall FUN_00404c8a(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(piVar1);
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(piVar1);
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(piVar1);
    (*pcVar2)();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    Ordinal_6(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}



/* Function: FUN_00404cfc */

void __fastcall FUN_00404cfc(undefined4 *param_1)

{
  void *_Memory;
  int *piVar1;
  code *pcVar2;
  
  _Memory = (void *)param_1[1];
  *param_1 = &PTR_FUN_00401008;
  if (_Memory != (void *)0x0) {
    FUN_00404c8a((int)_Memory);
    free(_Memory);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(piVar1);
    (*pcVar2)();
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    Ordinal_6(param_1[3]);
    param_1[3] = 0;
  }
  return;
}



/* Function: FUN_00404d60 */

undefined4 * __thiscall FUN_00404d60(void *this,byte param_1)

{
  FUN_00404cfc((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return (undefined4 *)this;
}



/* Function: FUN_00404d87 */

int __fastcall FUN_00404d87(short *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *this;
  undefined4 *this_00;
  undefined4 extraout_ECX;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    uVar4 = 0x18;
    this = (undefined4 *)FUN_00406bc7(0x18);
    if (this == (undefined4 *)0x0) {
      iVar3 = -0x7ff8fff2;
    }
    else {
      *this = 0;
      this[1] = 0;
      this[2] = 0;
      this[3] = 0;
      this[4] = 0;
      this[5] = 0;
      iVar3 = FUN_00405c17(this,uVar4,uVar4,param_1);
      if (-1 < iVar3) {
        iVar3 = FUN_004058c5(this,extraout_ECX,&local_8);
        piVar2 = local_8;
        if (-1 < iVar3) {
          this_00 = (undefined4 *)FUN_00406bc7(0x10);
          if (this_00 == (undefined4 *)0x0) {
            iVar3 = -0x7ff8fff2;
            piVar2 = local_8;
          }
          else {
            *this_00 = &PTR_FUN_00401008;
            this_00[1] = 0;
            this_00[2] = 0;
            this_00[3] = 0;
            iVar3 = FUN_00406605(this_00,(int)this,(int)local_8);
            if (iVar3 < 0) {
              pcVar1 = *(code **)*this_00;
              (*(code *)PTR_guard_check_icall_004091a8)(1);
              (*pcVar1)();
              piVar2 = local_8;
            }
            else {
              this = (undefined4 *)0x0;
              *param_2 = this_00;
              piVar2 = (int *)0x0;
            }
          }
        }
        if (piVar2 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar2 + 8);
          (*(code *)PTR_guard_check_icall_004091a8)(piVar2);
          (*pcVar1)();
        }
        if (this == (undefined4 *)0x0) {
          return iVar3;
        }
      }
      FUN_00404c8a((int)this);
      free(this);
    }
  }
  return iVar3;
}



/* Function: FUN_00404e8a */

int __thiscall FUN_00404e8a(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  uStack_14 = 0;
  local_10 = 0;
  uStack_c = 0;
  Ordinal_8(&local_18);
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_00406587(this,0x4017c4,(int)&local_18);
    if (-1 < iVar1) {
      if ((short)local_18 == 1) {
        FUN_00406b41();
        iVar1 = -0x7fffbffb;
      }
      else {
        if ((short)local_18 != 3) {
          FUN_00406b41();
        }
        *param_1 = local_10;
      }
    }
  }
  Ordinal_9(&local_18);
  return iVar1;
}



/* Function: FUN_00404f09 */

int __thiscall FUN_00404f09(void *this,undefined4 *param_1)

{
  HANDLE hHeap;
  LPVOID unaff_EBX;
  int iVar1;
  LPVOID lpMem;
  undefined4 local_1c;
  undefined4 local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  iStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  lpMem = (LPVOID)0x0;
  local_1c = 0;
  Ordinal_8(&local_18);
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_00406587(this,0x4017e4,(int)&local_1c);
    if (-1 < iVar1) {
      if ((short)local_1c == 1) {
        *param_1 = 0;
      }
      else {
        if ((short)local_1c != 8) {
          FUN_00406b41();
        }
        iVar1 = FUN_00405f04(iStack_14,(undefined4 *)&stack0xffffffe0);
        lpMem = unaff_EBX;
        if (-1 < iVar1) {
          *param_1 = unaff_EBX;
          lpMem = (LPVOID)0x0;
        }
      }
    }
  }
  Ordinal_9(&local_1c);
  if (lpMem != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  return iVar1;
}



/* Function: FUN_00404fc3 */

int FUN_00404fc3(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  int iStack_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar3 = (int *)0x0;
  local_18 = 0;
  local_30 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  Ordinal_8(&local_18);
  Ordinal_8(local_2c);
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    iVar2 = FUN_00405b70(*(void **)(iStack_34 + 4),0x40184c,*(int *)(iStack_34 + 0xc),0,
                         (undefined4 *)&stack0xffffffc8);
    piVar3 = unaff_EBX;
    if (-1 < iVar2) {
      iVar2 = FUN_0040669a(unaff_EBX);
      if (-1 < iVar2) {
        iVar2 = FUN_00405af0(unaff_EBX,0x40183c,(int)&uStack_20);
        if (-1 < iVar2) {
          if ((short)uStack_20 != 3) {
            FUN_00406b41();
          }
          iVar2 = FUN_00405af0(unaff_EBX,0x401884,(int)&local_30);
          if (-1 < iVar2) {
            if ((short)local_30 != 3) {
              FUN_00406b41();
            }
            *param_1 = local_18;
            *param_2 = local_28;
          }
        }
      }
    }
  }
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(piVar3);
    (*pcVar1)();
  }
  Ordinal_9(&local_30);
  Ordinal_9(&uStack_24);
  return iVar2;
}



/* Function: FUN_004050e4 */

int __thiscall FUN_004050e4(void *this,undefined4 *param_1)

{
  code *pcVar1;
  int *unaff_EBX;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_1c = 0;
  local_18 = 0;
  iStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  Ordinal_8(&local_18);
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    iVar2 = FUN_00405b70(*(void **)((int)this + 4),0x401898,*(int *)((int)this + 0xc),0,
                         (undefined4 *)&stack0xffffffe0);
    if (-1 < iVar2) {
      iVar2 = FUN_0040669a(unaff_EBX);
      if (-1 < iVar2) {
        iVar2 = FUN_00405af0(unaff_EBX,0x4018d4,(int)&local_1c);
        if (-1 < iVar2) {
          if ((short)local_1c != 3) {
            FUN_00406b41();
          }
          if (iStack_14 == 0) {
            *param_1 = 0;
          }
          else if (iStack_14 == 1) {
            *param_1 = 1;
          }
          else if (iStack_14 == 2) {
            *param_1 = 2;
          }
          else {
            *param_1 = 3;
          }
        }
      }
    }
    if (unaff_EBX != (int *)0x0) {
      pcVar1 = *(code **)(*unaff_EBX + 8);
      (*(code *)PTR_guard_check_icall_004091a8)(unaff_EBX);
      (*pcVar1)();
    }
  }
  Ordinal_9(&local_1c);
  return iVar2;
}



/* Function: FUN_004051cd */

int __thiscall FUN_004051cd(void *this,int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  int *piVar4;
  int local_48 [2];
  short asStack_40 [4];
  undefined1 local_38 [8];
  wchar_t *pwStack_30;
  undefined4 uStack_2c;
  int local_28 [2];
  short asStack_20 [2];
  undefined1 auStack_1c [24];
  
  iVar3 = 0;
  piVar4 = local_48;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  piVar4 = local_28;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  *param_2 = 0;
  Ordinal_8(local_38);
  Ordinal_8(auStack_1c);
  pwStack_30 = L"Information";
  uStack_2c = 1;
  iVar2 = FUN_00405b70(*(void **)((int)this + 4),0x401914,*(int *)((int)this + 0xc),0,
                       (undefined4 *)&stack0xffffffac);
  if (iVar2 < 0) goto LAB_004052e1;
  iVar3 = FUN_0040669a(unaff_ESI);
  iVar2 = FUN_00405af0(unaff_ESI,0x4018ec,(int)asStack_40);
  if (iVar2 < 0) goto LAB_004052e1;
  iVar2 = FUN_00405fcb((int)&stack0xffffffb0);
  if (iVar2 < 0) goto LAB_004052e1;
  iVar2 = FUN_00405af0(unaff_ESI,(int)pwStack_30,(int)asStack_20);
  if (iVar2 < 0) goto LAB_004052e1;
  iVar2 = FUN_00405fcb((int)&pwStack_30);
  if (iVar2 < 0) goto LAB_004052e1;
  if (local_48[1] == 0) {
    *param_1 = local_48[0];
LAB_004052c6:
    if (local_28[1] == 0) {
      *param_2 = local_28[0];
      goto LAB_004052e1;
    }
    if (iVar3 < 0) goto LAB_004052e1;
    FUN_00406b41();
  }
  else {
    if (iVar3 < 0) goto LAB_004052c6;
    FUN_00406b41();
  }
  iVar3 = -0x7fffbffb;
LAB_004052e1:
  if (unaff_ESI != (int *)0x0) {
    pcVar1 = *(code **)(*unaff_ESI + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(unaff_ESI);
    (*pcVar1)();
  }
  FUN_0040645d(asStack_40);
  FUN_0040645d(asStack_20);
  if (iVar2 < 0) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Function: FUN_0040531d */

int __thiscall FUN_0040531d(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  int *unaff_ESI;
  int *piStack_34;
  short local_30 [4];
  undefined4 local_28;
  undefined4 uStack_24;
  short asStack_20 [2];
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_30[0] = 0;
  local_30[1] = 0;
  piVar3 = (int *)0x0;
  local_28 = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  uStack_24 = 0;
  asStack_20[0] = 0;
  asStack_20[1] = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  Ordinal_8(&local_28);
  uStack_24 = param_1;
  local_30[2] = 3;
  Ordinal_8(&uStack_1c);
  local_18 = 0;
  asStack_20[0] = 3;
  iVar2 = FUN_004059ed(*(void **)((int)this + 4),0x40193c,(int)&stack0xffffffc8);
  if (-1 < iVar2) {
    iVar2 = FUN_00405aa2(unaff_EBX,0x40183c,local_30);
    if (-1 < iVar2) {
      iVar2 = FUN_00405aa2(unaff_EBX,0x401974,asStack_20);
      if (-1 < iVar2) {
        iVar2 = FUN_00405b70(*(void **)((int)this + 4),0x40193c,*(int *)((int)this + 0xc),unaff_EBX,
                             &piStack_34);
        piVar3 = piStack_34;
        if (-1 < iVar2) {
          iVar2 = FUN_0040669a(piStack_34);
        }
      }
    }
  }
  Ordinal_9(local_30);
  if (unaff_ESI != (int *)0x0) {
    pcVar1 = *(code **)(*unaff_ESI + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(unaff_ESI);
    (*pcVar1)();
  }
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(piVar3);
    (*pcVar1)();
  }
  return iVar2;
}



/* Function: FUN_0040543c */

int FUN_0040543c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  int *piVar5;
  int iStack_7c;
  wchar_t *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  short asStack_64 [2];
  undefined1 auStack_60 [12];
  wchar_t *pwStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  short asStack_44 [6];
  undefined1 local_38 [4];
  wchar_t *pwStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  short asStack_24 [4];
  undefined1 auStack_1c [24];
  
  piVar3 = (int *)0x0;
  puVar4 = &local_48;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_70 = 0;
  puVar4 = &local_28;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_74 = (wchar_t *)0x0;
  piVar5 = &local_68;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  *param_3 = 0;
  Ordinal_8(local_38);
  Ordinal_8(auStack_1c);
  Ordinal_8(auStack_60);
  uStack_4c = 0;
  uStack_50 = 2;
  uStack_30 = 2;
  pwStack_54 = L"ForceClear_Allowed";
  uStack_2c = 1;
  local_70 = 1;
  pwStack_34 = L"PhysicalPresencePrompts_Allowed";
  local_74 = L"Information";
  iVar2 = FUN_004059ed(pvRam00000004,0x401a00,(int)&stack0xffffff7c);
  if (-1 < iVar2) {
    iVar2 = FUN_00405d3a((int)&pwStack_54);
    if (-1 < iVar2) {
      iVar2 = FUN_00405aa2(unaff_ESI,(int)pwStack_54,asStack_44);
      if (-1 < iVar2) {
        iVar2 = FUN_00405d3a((int)&pwStack_34);
        if (-1 < iVar2) {
          iVar2 = FUN_00405aa2(unaff_ESI,(int)pwStack_34,asStack_24);
          if (-1 < iVar2) {
            iVar2 = FUN_00405b70(pvRam00000004,0x401a00,iRam0000000c,unaff_ESI,
                                 (undefined4 *)&stack0xffffff80);
            piVar3 = unaff_EBX;
            if (-1 < iVar2) {
              iStack_7c = FUN_0040669a(unaff_EBX);
              iVar2 = FUN_00405af0(unaff_EBX,(int)local_74,(int)asStack_64);
              if (-1 < iVar2) {
                iVar2 = FUN_00405fcb((int)&local_74);
                if (-1 < iVar2) {
                  if (local_68 == 0) {
                    *param_3 = local_6c;
                  }
                  else if (-1 < iStack_7c) {
                    FUN_00406b41();
                    iStack_7c = -0x7fffbffb;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (unaff_ESI != (int *)0x0) {
    pcVar1 = *(code **)(*unaff_ESI + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(unaff_ESI);
    (*pcVar1)();
  }
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(piVar3);
    (*pcVar1)();
  }
  FUN_0040645d(asStack_44);
  FUN_0040645d(asStack_24);
  FUN_0040645d(asStack_64);
  if (iVar2 < 0) {
    iStack_7c = iVar2;
  }
  return iStack_7c;
}



/* Function: FUN_00405627 */

int __thiscall FUN_00405627(void *this,undefined4 *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  HANDLE pvVar4;
  SIZE_T SVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puStack_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_1c = 0;
  puVar7 = (undefined1 *)0x0;
  local_18 = 0;
  local_20 = (int *)0x0;
  puStack_14 = (undefined1 *)0x0;
  uStack_10 = 0;
  uStack_c = 0;
  Ordinal_8(&local_18);
  if (param_1 == (undefined4 *)0x0) {
    iVar8 = -0x7ff8ffa9;
  }
  else {
    iVar8 = FUN_00405b70(*(void **)((int)this + 4),0x401a14,*(int *)((int)this + 0xc),0,&local_20);
    piVar2 = local_20;
    if ((((-1 < iVar8) && (iVar8 = FUN_0040669a(local_20), -1 < iVar8)) &&
        (iVar8 = FUN_00405af0(piVar2,0x401828,(int)&local_1c), -1 < iVar8)) &&
       (iVar8 = FUN_00405f04((int)puStack_14,&puStack_24), puVar7 = puStack_24, -1 < iVar8)) {
      puStack_24 = (undefined1 *)0x0;
      *param_1 = puVar7;
      puVar7 = (undefined1 *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 8);
      (*(code *)PTR_guard_check_icall_004091a8)(piVar2);
      (*pcVar1)();
      local_20 = (int *)0x0;
    }
  }
  if (((short)local_1c == 8) && (puStack_14 != (undefined1 *)0x0)) {
    iVar3 = Ordinal_149(puStack_14);
    puVar6 = puStack_14;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  Ordinal_9(&local_1c);
  if (puVar7 != (undefined1 *)0x0) {
    pvVar4 = GetProcessHeap();
    SVar5 = HeapSize(pvVar4,0,puVar7);
    puVar6 = puVar7;
    if (SVar5 != 0xffffffff) {
      for (; SVar5 != 0; SVar5 = SVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,puVar7);
    }
  }
  return iVar8;
}



/* Function: FUN_00405768 */

int __thiscall FUN_00405768(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  wchar_t *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  wchar_t **local_c;
  wchar_t **local_8;
  
  local_30 = 0;
  local_44 = param_1;
  local_c = &local_4c;
  local_40 = 0;
  local_8 = &local_2c;
  local_38 = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_4c = L"Operation";
  local_48 = 1;
  local_2c = L"ConfirmationStatus";
  local_28 = 1;
  iVar1 = FUN_004066f5(this,(int *)&local_c,this,(int *)&local_8);
  if (-1 < iVar1) {
    if (local_24._4_4_ == 0) {
      *param_2 = (undefined4)local_24;
    }
    else {
      FUN_00406b41();
      iVar1 = -0x7fffbffb;
    }
  }
  return iVar1;
}



/* Function: FUN_004057f5 */

int __fastcall FUN_004057f5(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  undefined4 uStack_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_1c = 0;
  piVar5 = (int *)0x0;
  local_c = (int *)0x0;
  uStack_18 = 0;
  local_14 = (undefined1 *)0x0;
  uStack_10 = 0;
  iVar2 = FUN_004059ed(*(void **)(param_1 + 4),0x40181c,(int)&local_8);
  if ((-1 < iVar2) &&
     (iVar2 = FUN_00405b70(*(void **)(param_1 + 4),0x40181c,*(int *)(param_1 + 0xc),local_8,&local_c
                          ), piVar5 = local_c, -1 < iVar2)) {
    iVar2 = FUN_0040669a(local_c);
  }
  if (local_8 != (int *)0x0) {
    pcVar1 = *(code **)(*local_8 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(local_8);
    (*pcVar1)();
    local_8 = (int *)0x0;
  }
  if (piVar5 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar5 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(piVar5);
    (*pcVar1)();
    local_c = (int *)0x0;
  }
  if (((short)local_1c == 8) && (local_14 != (undefined1 *)0x0)) {
    iVar3 = Ordinal_149(local_14);
    puVar4 = local_14;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  Ordinal_9(&local_1c);
  return iVar2;
}



/* Function: FUN_004058c5 */

int __thiscall FUN_004058c5(void *this,undefined4 param_1,undefined4 *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  wchar_t *_Memory;
  uint uVar4;
  int local_10;
  int local_c;
  int *local_8;
  
  _Memory = (wchar_t *)0x0;
  local_10 = 0;
  local_c = 0;
  local_8 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
LAB_004059a5:
    iVar3 = -0x7ff8ffa9;
LAB_004059aa:
    if (local_8 != (int *)0x0) {
      pcVar1 = *(code **)(*local_8 + 8);
      (*(code *)PTR_guard_check_icall_004091a8)(local_8);
      (*pcVar1)();
      local_8 = (int *)0x0;
    }
    if (local_c == 0) goto LAB_004059d3;
  }
  else {
    iVar3 = FUN_00402164((short *)&DAT_00401abc,0x104,&local_10);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = Ordinal_7(*(undefined4 *)((int)this + 0x14));
    uVar4 = local_10 + 1 + iVar3;
    if (0x104 < uVar4) goto LAB_004059a5;
    _Memory = (wchar_t *)
              FUN_00407504(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar4 * 2));
    if (_Memory == (wchar_t *)0x0) {
LAB_0040593d:
      iVar3 = -0x7ff8fff2;
      goto LAB_004059aa;
    }
    iVar3 = FUN_00401fbb(_Memory,uVar4,L"%s%s");
    if (iVar3 < 0) goto LAB_004059aa;
    local_c = Ordinal_2(_Memory);
    if (local_c == 0) goto LAB_0040593d;
    pcVar1 = *(code **)(**(int **)((int)this + 0xc) + 0x18);
    (*(code *)PTR_guard_check_icall_004091a8)(*(int **)((int)this + 0xc),local_c,0,0,&local_8,0);
    iVar3 = (*pcVar1)();
    piVar2 = local_8;
    if (iVar3 < 0) goto LAB_004059aa;
    local_8 = (int *)0x0;
    *param_2 = piVar2;
  }
  Ordinal_6(local_c);
LAB_004059d3:
  if (_Memory != (wchar_t *)0x0) {
    free(_Memory);
  }
  return iVar3;
}



/* Function: FUN_004059ed */

int __thiscall FUN_004059ed(void *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *local_8;
  
  iVar2 = 0;
  local_8 = (int *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    iVar2 = Ordinal_2(param_1);
    if (iVar2 == 0) {
      iVar3 = -0x7ff8fff2;
    }
    else {
      pcVar1 = *(code **)(**(int **)((int)this + 0x10) + 0x4c);
      (*(code *)PTR_guard_check_icall_004091a8)(*(int **)((int)this + 0x10),iVar2,0,&local_8,0);
      iVar3 = (*pcVar1)();
      if (-1 < iVar3) {
        if (local_8 == (int *)0x0) {
          iVar3 = -0x7ffbeffe;
          goto LAB_00405a8c;
        }
        pcVar1 = *(code **)(*local_8 + 0x3c);
        (*(code *)PTR_guard_check_icall_004091a8)(local_8,0,param_2);
        iVar3 = (*pcVar1)();
      }
    }
  }
  if (local_8 != (int *)0x0) {
    pcVar1 = *(code **)(*local_8 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(local_8);
    (*pcVar1)();
    local_8 = (int *)0x0;
  }
  if (iVar2 == 0) {
    return iVar3;
  }
LAB_00405a8c:
  Ordinal_6(iVar2);
  return iVar3;
}



/* Function: FUN_00405aa2 */

undefined4 FUN_00405aa2(int *param_1,int param_2,short *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == (short *)0x0)) {
    uVar2 = 0x80070057;
  }
  else if (*param_3 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x14);
    (*(code *)PTR_guard_check_icall_004091a8)(param_1,param_2,0,param_3,0);
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}



/* Function: FUN_00405af0 */

int FUN_00405af0(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  Ordinal_8(&local_18);
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x10);
    (*(code *)PTR_guard_check_icall_004091a8)(param_1,param_2,0,&local_18,0,0);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) {
      iVar2 = Ordinal_10(param_3,&local_18);
    }
  }
  Ordinal_9(&local_18);
  return iVar2;
}



/* Function: FUN_00405b70 */

int __thiscall
FUN_00405b70(void *this,int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *local_8;
  
  iVar3 = 0;
  local_8 = (int *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    iVar3 = Ordinal_2(param_1);
    if (iVar3 == 0) {
      iVar2 = -0x7ff8fff2;
    }
    else {
      pcVar1 = *(code **)(**(int **)((int)this + 0xc) + 0x60);
      (*(code *)PTR_guard_check_icall_004091a8)
                (*(int **)((int)this + 0xc),param_2,iVar3,0,0,param_3,&local_8,0);
      iVar2 = (*pcVar1)();
      if (-1 < iVar2) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = local_8;
        }
        local_8 = (int *)0x0;
        goto LAB_00405c01;
      }
    }
  }
  if (local_8 != (int *)0x0) {
    pcVar1 = *(code **)(*local_8 + 8);
    (*(code *)PTR_guard_check_icall_004091a8)(local_8);
    (*pcVar1)();
    local_8 = (int *)0x0;
  }
  if (iVar3 == 0) {
    return iVar2;
  }
LAB_00405c01:
  Ordinal_6(iVar3);
  return iVar2;
}



/* Function: FUN_00405c17 */

void __thiscall FUN_00405c17(void *this,undefined4 param_1,undefined4 param_2,short *param_3)

{
  code *pcVar1;
  HRESULT HVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  undefined8 uVar6;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00408040 ^ (uint)&stack0xfffffffc;
  if ((param_3 == (short *)0x0) || (*param_3 == 0)) {
    param_3 = (short *)&DAT_00401ae8;
  }
  *(short **)this = param_3;
  *(wchar_t **)((int)this + 4) = L"root\\cimv2\\security\\microsofttpm";
  uVar6 = Ordinal_2(L"Win32_Tpm");
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  *(int *)((int)this + 0x14) = (int)uVar6;
  if ((((int)uVar6 != 0) &&
      (HVar2 = CoCreateInstance((IID *)&DAT_00401140,(LPUNKNOWN)0x0,1,(IID *)&LAB_00401130,
                                (LPVOID *)((int)this + 8)), uVar5 = extraout_EDX, -1 < HVar2)) &&
     (iVar3 = FUN_00401fbb(local_214,0x105,L"\\\\%s\\%s"), uVar5 = extraout_EDX_00, -1 < iVar3)) {
    uVar6 = Ordinal_2(local_214);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    iVar3 = (int)uVar6;
    if (iVar3 != 0) {
      pcVar1 = *(code **)(**(int **)((int)this + 8) + 0xc);
      (*(code *)PTR_guard_check_icall_004091a8)
                (*(int **)((int)this + 8),iVar3,0,0,0,0x80,0,0,(int)this + 0xc);
      iVar4 = (*pcVar1)();
      if ((-1 < iVar4) && (iVar4 = FUN_00406877(*(IUnknown **)((int)this + 0xc)), -1 < iVar4)) {
        pcVar1 = *(code **)(**(int **)((int)this + 0xc) + 0x18);
        (*(code *)PTR_guard_check_icall_004091a8)
                  (*(int **)((int)this + 0xc),*(undefined4 *)((int)this + 0x14),0,0,(int)this + 0x10
                   ,0);
        (*pcVar1)();
      }
      Ordinal_6(iVar3);
      uVar5 = extraout_EDX_01;
    }
  }
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,uVar5);
  return;
}



/* Function: FUN_00405d3a */

int __fastcall FUN_00405d3a(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_24;
  undefined4 uStack_20;
  int local_18 [3];
  void *local_c;
  uint local_8;
  
  iVar3 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  local_c = (void *)0x0;
  local_8 = 0;
  if (param_1 == 0) {
LAB_00405d59:
    iVar3 = -0x7ff8ffa9;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        return 0;
      }
      Ordinal_8((undefined2 *)(param_1 + 0x10));
      *(undefined2 *)(param_1 + 0x10) = 8;
      iVar1 = Ordinal_2(*(undefined4 *)(param_1 + 8));
      if (iVar1 == 0) {
        iVar3 = -0x7ff8fff2;
      }
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          *(undefined2 *)(param_1 + 0x10) = 0xb;
          *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_1 + 8);
          return 0;
        }
        if (iVar1 == 3) {
          local_18[0] = *(int *)(param_1 + 0xc);
          if (local_18[0] == 0) {
            return 0;
          }
          if (*(int *)(param_1 + 8) == 0) {
            return 0;
          }
          *(undefined2 *)(param_1 + 0x10) = 0x2011;
          local_18[1] = 0;
          iVar3 = Ordinal_15(0x11,1,local_18);
          *(int *)(param_1 + 0x18) = iVar3;
          if (iVar3 == 0) {
            return -0x7ff8fff2;
          }
          iVar3 = Ordinal_23(iVar3,&local_c);
          if (-1 < iVar3) {
            memcpy(local_c,*(void **)(param_1 + 8),*(size_t *)(param_1 + 0xc));
            iVar3 = Ordinal_24(*(undefined4 *)(param_1 + 0x18));
            return iVar3;
          }
          return iVar3;
        }
        if (iVar1 == 4) {
          local_18[0] = *(int *)(param_1 + 0xc);
          if (local_18[0] == 0) {
            return 0;
          }
          if (*(int *)(param_1 + 8) == 0) {
            return 0;
          }
          *(undefined2 *)(param_1 + 0x10) = 0x2008;
          local_18[1] = 0;
          iVar3 = Ordinal_15(8,1,local_18);
          *(int *)(param_1 + 0x18) = iVar3;
          if (iVar3 == 0) {
            return -0x7ff8fff2;
          }
          local_18[2] = *(uint *)(param_1 + 0xc);
          uVar2 = 0;
          if (local_18[2] != 0) {
            do {
              local_2c = 0;
              uStack_28 = 0;
              local_24 = 0;
              uStack_20 = 0;
              Ordinal_8(&local_2c);
              local_2c = CONCAT22(local_2c._2_2_,8);
              local_24 = Ordinal_2(*(undefined4 *)(*(int *)(param_1 + 8) + uVar2 * 4));
              if (local_24 == 0) {
                return -0x7ff8fff2;
              }
              if (0x7fffffff < uVar2) {
                return -0x7ff8fdea;
              }
              local_8 = uVar2;
              iVar3 = Ordinal_26(*(undefined4 *)(param_1 + 0x18),&local_8,local_24);
              if (iVar3 < 0) {
                return iVar3;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < (uint)local_18[2]);
            return iVar3;
          }
          return 0;
        }
        goto LAB_00405d59;
      }
      *(undefined2 *)(param_1 + 0x10) = 3;
      iVar1 = *(int *)(param_1 + 8);
    }
    *(int *)(param_1 + 0x18) = iVar1;
  }
  return iVar3;
}



/* Function: FUN_00405f04 */

int __fastcall FUN_00405f04(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  HANDLE pvVar3;
  short *lpMem;
  SIZE_T SVar4;
  int iVar5;
  DWORD DVar6;
  short *psVar7;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    iVar5 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar2 = Ordinal_7(param_1);
    uVar1 = uVar2 + 1;
    if ((uVar1 < uVar2) || ((int)((ulonglong)uVar1 * 2 >> 0x20) != 0)) {
      iVar5 = -0x7fffbffb;
    }
    else {
      pvVar3 = GetProcessHeap();
      lpMem = (short *)HeapAlloc(pvVar3,8,(SIZE_T)((ulonglong)uVar1 * 2));
      if (lpMem == (short *)0x0) {
        iVar5 = -0x7ff8fff2;
      }
      else {
        iVar5 = FUN_00401f82(lpMem,uVar1,param_1);
        if (iVar5 < 0) {
          DVar6 = 0;
          psVar7 = lpMem;
          pvVar3 = GetProcessHeap();
          SVar4 = HeapSize(pvVar3,DVar6,psVar7);
          psVar7 = lpMem;
          if (SVar4 != 0xffffffff) {
            for (; SVar4 != 0; SVar4 = SVar4 - 1) {
              *(undefined1 *)psVar7 = 0;
              psVar7 = (short *)((int)psVar7 + 1);
            }
            DVar6 = 0;
            pvVar3 = GetProcessHeap();
            HeapFree(pvVar3,DVar6,lpMem);
          }
        }
        else {
          *param_2 = lpMem;
        }
      }
    }
  }
  return iVar5;
}



/* Function: FUN_00405fcb */

int __fastcall FUN_00405fcb(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    if (*(short *)(param_1 + 0x10) == 1) {
      *(undefined4 *)(param_1 + 8) = 0;
      return 0;
    }
    if (*(short *)(param_1 + 0x10) != 8) {
      return -0x7ff8ffa9;
    }
    iVar1 = FUN_00405f04(*(int *)(param_1 + 0x18),(undefined4 *)(param_1 + 8));
    return iVar1;
  }
  if (iVar1 == 1) {
    uVar2 = 1;
    if (*(short *)(param_1 + 0x10) == 1) goto LAB_00406049;
    if (*(short *)(param_1 + 0x10) != 3) {
      return -0x7ff8ffa9;
    }
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        iVar1 = FUN_0040607c((short *)(param_1 + 0x10),(undefined4 *)(param_1 + 8),
                             (size_t *)(param_1 + 0xc));
        return iVar1;
      }
      if (iVar1 != 4) {
        return -0x7ff8ffa9;
      }
      iVar1 = FUN_00406148((short *)(param_1 + 0x10),(undefined4 *)(param_1 + 8),
                           (uint *)(param_1 + 0xc));
      return iVar1;
    }
    uVar2 = 1;
    if (*(short *)(param_1 + 0x10) == 1) goto LAB_00406049;
    if (*(short *)(param_1 + 0x10) != 0xb) {
      return -0x7ff8ffa9;
    }
    iVar1 = (int)*(short *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 8) = iVar1;
  uVar2 = 0;
LAB_00406049:
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return 0;
}



/* Function: FUN_0040607c */

int __fastcall FUN_0040607c(short *param_1,undefined4 *param_2,size_t *param_3)

{
  size_t _Size;
  int iVar1;
  HANDLE hHeap;
  LPVOID _Dst;
  DWORD dwFlags;
  size_t dwBytes;
  void *local_8;
  
  local_8 = (void *)0x0;
  if (((param_1 == (short *)0x0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (size_t *)0x0)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    if (*param_1 == 1) {
      *param_2 = 0;
      *param_3 = 0;
      return 0;
    }
    if (*param_1 != 0x2011) {
      return -0x7ff8ffa9;
    }
    iVar1 = Ordinal_23(*(int *)(param_1 + 4),&local_8);
    if (-1 < iVar1) {
      _Size = *(size_t *)(*(int *)(param_1 + 4) + 0x10);
      dwFlags = 8;
      dwBytes = _Size;
      hHeap = GetProcessHeap();
      _Dst = HeapAlloc(hHeap,dwFlags,dwBytes);
      if (_Dst == (LPVOID)0x0) {
        iVar1 = -0x7ff8fff2;
      }
      else {
        memcpy(_Dst,local_8,_Size);
        *param_2 = _Dst;
        *param_3 = _Size;
      }
    }
  }
  if (local_8 != (void *)0x0) {
    Ordinal_24(*(undefined4 *)(param_1 + 4));
  }
  return iVar1;
}



/* Function: FUN_00406148 */

int __fastcall FUN_00406148(short *param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID lpMem;
  LPVOID pvVar1;
  int iVar2;
  HANDLE pvVar3;
  uint uVar4;
  SIZE_T SVar5;
  undefined1 *puVar6;
  LPVOID pvVar7;
  uint uVar8;
  DWORD dwFlags;
  int local_18;
  uint local_14;
  LPVOID local_10;
  int local_c;
  uint local_8;
  
  local_18 = 0;
  local_8 = 0;
  pvVar7 = (LPVOID)0x0;
  local_10 = (LPVOID)0x0;
  if (((param_1 == (short *)0x0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (uint *)0x0)) {
    iVar2 = -0x7ff8ffa9;
    local_c = iVar2;
  }
  else {
    if (*param_1 == 1) {
      *param_2 = 0;
      *param_3 = 0;
      return 0;
    }
    if (*param_1 != 0x2008) {
      return -0x7ff8ffa9;
    }
    iVar2 = Ordinal_23(*(int *)(param_1 + 4),&local_18);
    local_c = iVar2;
    if (-1 < iVar2) {
      local_8 = *(uint *)(*(int *)(param_1 + 4) + 0x10);
      local_14 = (uint)((ulonglong)local_8 * 4);
      if ((int)((ulonglong)local_8 * 4 >> 0x20) == 0) {
        iVar2 = 0;
        local_c = 0;
        pvVar3 = GetProcessHeap();
        pvVar7 = HeapAlloc(pvVar3,8,local_14);
        local_10 = pvVar7;
        if (pvVar7 == (LPVOID)0x0) {
          iVar2 = -0x7ff8fff2;
          local_c = iVar2;
        }
        else {
          local_14 = 0;
          uVar4 = local_8;
          if (local_8 != 0) {
            do {
              iVar2 = FUN_00405f04(*(int *)(local_18 + local_14 * 4),
                                   (undefined4 *)((int)pvVar7 + local_14 * 4));
              local_c = iVar2;
              if (iVar2 < 0) goto LAB_0040625f;
              local_14 = local_14 + 1;
              uVar4 = local_8;
            } while (local_14 < local_8);
          }
          *param_2 = pvVar7;
          pvVar7 = (LPVOID)0x0;
          local_8 = 0;
          local_10 = (LPVOID)0x0;
          *param_3 = uVar4;
        }
      }
      else {
        iVar2 = -0x7ff8fdea;
        local_c = iVar2;
      }
    }
  }
LAB_0040625f:
  if (local_18 != 0) {
    Ordinal_24(*(undefined4 *)(param_1 + 4));
  }
  pvVar1 = local_10;
  if (pvVar7 != (LPVOID)0x0) {
    uVar8 = 0;
    uVar4 = local_8;
    if (local_8 != 0) {
      do {
        lpMem = *(LPCVOID *)((int)pvVar1 + uVar8 * 4);
        if (lpMem != (LPCVOID)0x0) {
          pvVar3 = GetProcessHeap();
          SVar5 = HeapSize(pvVar3,0,lpMem);
          if (SVar5 != 0xffffffff) {
            puVar6 = *(undefined1 **)((int)pvVar1 + uVar8 * 4);
            for (; SVar5 != 0; SVar5 = SVar5 - 1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            pvVar7 = *(LPVOID *)((int)pvVar1 + uVar8 * 4);
            pvVar3 = GetProcessHeap();
            HeapFree(pvVar3,0,pvVar7);
            uVar4 = local_8;
          }
          *(undefined4 *)((int)pvVar1 + uVar8 * 4) = 0;
        }
        uVar8 = uVar8 + 1;
        iVar2 = local_c;
      } while (uVar8 < uVar4);
    }
    dwFlags = 0;
    pvVar7 = local_10;
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,dwFlags,pvVar7);
  }
  return iVar2;
}



/* Function: FUN_004062f1 */

undefined4 __fastcall FUN_004062f1(int param_1)

{
  int iVar1;
  LPCVOID pvVar2;
  LPVOID pvVar3;
  HANDLE pvVar4;
  SIZE_T SVar5;
  undefined1 *puVar6;
  uint local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    pvVar2 = *(LPCVOID *)(param_1 + 8);
    if (pvVar2 == (LPCVOID)0x0) {
      return 0;
    }
    pvVar4 = GetProcessHeap();
    SVar5 = HeapSize(pvVar4,0,pvVar2);
    if (SVar5 != 0xffffffff) {
      puVar6 = *(undefined1 **)(param_1 + 8);
      for (; SVar5 != 0; SVar5 = SVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
LAB_0040643a:
      pvVar3 = *(LPVOID *)(param_1 + 8);
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar3);
    }
LAB_0040644e:
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      if (iVar1 == 3) {
        pvVar2 = *(LPCVOID *)(param_1 + 8);
        if (pvVar2 == (LPCVOID)0x0) {
          return 0;
        }
        pvVar4 = GetProcessHeap();
        SVar5 = HeapSize(pvVar4,0,pvVar2);
        if (SVar5 != 0xffffffff) {
          puVar6 = *(undefined1 **)(param_1 + 8);
          for (; SVar5 != 0; SVar5 = SVar5 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          goto LAB_0040643a;
        }
        goto LAB_0040644e;
      }
      if (iVar1 != 4) {
        return 0x80070057;
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        return 0;
      }
      local_8 = 0;
      do {
        pvVar2 = *(LPCVOID *)(*(int *)(param_1 + 8) + local_8 * 4);
        if (pvVar2 != (LPCVOID)0x0) {
          pvVar4 = GetProcessHeap();
          SVar5 = HeapSize(pvVar4,0,pvVar2);
          if (SVar5 != 0xffffffff) {
            puVar6 = *(undefined1 **)(*(int *)(param_1 + 8) + local_8 * 4);
            for (; SVar5 != 0; SVar5 = SVar5 - 1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            pvVar3 = *(LPVOID *)(*(int *)(param_1 + 8) + local_8 * 4);
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,pvVar3);
          }
          *(undefined4 *)(*(int *)(param_1 + 8) + local_8 * 4) = 0;
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(uint *)(param_1 + 0xc));
      pvVar3 = *(LPVOID *)(param_1 + 8);
      if (pvVar3 == (LPVOID)0x0) {
        return 0;
      }
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,pvVar3);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}



/* Function: FUN_0040645d */

int __fastcall FUN_0040645d(short *param_1)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *local_c;
  int local_8;
  
  local_c = (undefined1 *)0x0;
  local_8 = 0;
  iVar4 = 0;
  if (param_1 == (short *)0x0) {
    return 0;
  }
  sVar1 = *param_1;
  if (sVar1 != 0) {
    if (sVar1 == 3) {
      param_1[4] = 0;
      param_1[5] = 0;
    }
    else if (sVar1 == 8) {
      if (*(int *)(param_1 + 4) == 0) {
        return 0;
      }
      iVar3 = Ordinal_149(*(undefined4 *)(param_1 + 4));
      puVar2 = *(undefined1 **)(param_1 + 4);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    else if (sVar1 == 0xb) {
      param_1[4] = 0;
    }
    else {
      if (sVar1 == 0x2008) {
        if (*(int *)(param_1 + 4) == 0) {
          return 0;
        }
        iVar4 = Ordinal_23(*(undefined4 *)(param_1 + 4),&local_8);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = *(int *)(param_1 + 4);
        uVar5 = 0;
        if (*(int *)(iVar4 + 0x10) != 0) {
          do {
            iVar4 = Ordinal_149(*(undefined4 *)(local_8 + uVar5 * 4));
            puVar2 = *(undefined1 **)(local_8 + uVar5 * 4);
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar2 = 0;
              puVar2 = puVar2 + 1;
            }
            iVar4 = *(int *)(param_1 + 4);
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(iVar4 + 0x10));
        }
      }
      else {
        if (sVar1 != 0x2011) {
          return -0x7ff8ffa9;
        }
        if (*(int *)(param_1 + 4) == 0) {
          return 0;
        }
        iVar4 = Ordinal_23(*(undefined4 *)(param_1 + 4),&local_c);
        if (iVar4 < 0) {
          return iVar4;
        }
        puVar2 = local_c;
        for (iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10); iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        iVar4 = *(int *)(param_1 + 4);
      }
      iVar4 = Ordinal_24(iVar4);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
  }
  Ordinal_9(param_1);
  return iVar4;
}



/* Function: FUN_00406587 */

int __thiscall FUN_00406587(void *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  Ordinal_8(&local_14);
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    pcVar1 = *(code **)(**(int **)((int)this + 8) + 0x10);
    (*(code *)PTR_guard_check_icall_004091a8)(*(int **)((int)this + 8),param_1,0,&local_14,0,0);
    iVar2 = (*pcVar1)();
    if (-1 < iVar2) {
      iVar2 = Ordinal_10(param_2,&local_14);
    }
  }
  Ordinal_9(&local_14);
  return iVar2;
}



/* Function: FUN_00406605 */

int __thiscall FUN_00406605(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_8;
  
  local_1c = 0;
  uStack_18 = 0;
  local_14 = 0;
  uStack_10 = 0;
  Ordinal_8(&local_1c);
  if ((param_1 == 0) || (param_2 == 0)) {
    local_8 = -0x7ff8ffa9;
  }
  else {
    *(int *)((int)this + 8) = param_2;
    *(int *)((int)this + 4) = param_1;
    local_8 = FUN_00406587(this,0x401afc,(int)&local_1c);
    if (-1 < local_8) {
      iVar1 = Ordinal_2(local_14);
      *(int *)((int)this + 0xc) = iVar1;
      if (iVar1 != 0) goto LAB_00406680;
      local_8 = -0x7ff8fff2;
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
LAB_00406680:
  Ordinal_9(&local_1c);
  return local_8;
}



/* Function: FUN_0040669a */

int FUN_0040669a(int *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  uStack_14 = 0;
  local_10 = 0;
  uStack_c = 0;
  Ordinal_8(&local_18);
  if (param_1 == (int *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_00405af0(param_1,0x401ad0,(int)&local_18);
    if (-1 < iVar1) {
      iVar1 = local_10;
    }
  }
  Ordinal_9(&local_18);
  return iVar1;
}



/* Function: FUN_004066f5 */

int __thiscall FUN_004066f5(void *this,int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *local_10;
  int local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  piVar2 = (int *)0x0;
  local_10 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    iVar3 = -0x7ff8ffa9;
  }
  else {
    if (param_3 == (int *)0x0) {
      iVar3 = -0x7ff8ffa9;
    }
    else {
      Ordinal_8(*param_1 + 0x10);
      Ordinal_8(*param_3 + 0x10);
      iVar3 = FUN_004059ed(*(void **)((int)this + 4),0x401a70,(int)&local_8);
      if (-1 < iVar3) {
        local_c = 0;
        do {
          iVar3 = FUN_00405d3a(param_1[local_c]);
          if (iVar3 < 0) goto LAB_00406809;
          iVar3 = FUN_00405aa2(local_8,*(int *)param_1[local_c],
                               (short *)((int *)param_1[local_c] + 4));
          if (iVar3 < 0) goto LAB_00406809;
          local_c = local_c + 1;
        } while (local_c == 0);
        iVar3 = FUN_00405b70(*(void **)((int)this + 4),0x401a70,*(int *)((int)this + 0xc),local_8,
                             &local_10);
        piVar2 = local_10;
        if (-1 < iVar3) {
          iVar3 = FUN_0040669a(local_10);
          if (-1 < iVar3) {
            local_c = 0;
            do {
              iVar3 = FUN_00405af0(piVar2,*(int *)param_3[local_c],
                                   (int)((int *)param_3[local_c] + 4));
              if (iVar3 < 0) break;
              iVar3 = FUN_00405fcb(param_3[local_c]);
              if (iVar3 < 0) break;
              local_c = local_c + 1;
            } while (local_c == 0);
          }
        }
      }
LAB_00406809:
      if (local_8 != (int *)0x0) {
        pcVar1 = *(code **)(*local_8 + 8);
        (*(code *)PTR_guard_check_icall_004091a8)(local_8);
        (*pcVar1)();
        local_8 = (int *)0x0;
      }
      if (piVar2 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar2 + 8);
        (*(code *)PTR_guard_check_icall_004091a8)(piVar2);
        (*pcVar1)();
      }
    }
    FUN_0040645d((short *)(*param_1 + 0x10));
  }
  if (param_3 != (int *)0x0) {
    FUN_0040645d((short *)(*param_3 + 0x10));
    if (iVar3 < 0) {
      FUN_004062f1(*param_3);
    }
  }
  return iVar3;
}



/* Function: FUN_00406877 */

void __fastcall FUN_00406877(IUnknown *param_1)

{
  CoSetProxyBlanket(param_1,0xffffffff,0,(OLECHAR *)0xffffffff,6,3,(RPC_AUTH_IDENTITY_HANDLE)0x0,0);
  return;
}



/* Function: FUN_00406892 */

void __fastcall FUN_00406892(LPSTR param_1)

{
  int iVar1;
  LSTATUS LVar2;
  char *pcVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int iVar5;
  DWORD local_118;
  HKEY local_114;
  DWORD local_110;
  BYTE local_10c [259];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00408040 ^ (uint)&stack0xfffffffc;
  LVar2 = RegOpenKeyExA((HKEY)0x80000000,
                        "CLSID\\{ADB880A6-D8FF-11CF-9377-00AA003B7A11}\\InprocServer32",0,0x20019,
                        &local_114);
  uVar4 = extraout_EDX;
  if (LVar2 == 0) {
    local_110 = 1;
    iVar5 = 0x104;
    local_118 = 0x104;
    LVar2 = RegQueryValueExA(local_114,(LPCSTR)0x0,(LPDWORD)0x0,&local_110,local_10c,&local_118);
    if (LVar2 == 0) {
      local_9 = 0;
      if (local_110 == 2) {
        ExpandEnvironmentStringsA((LPCSTR)local_10c,param_1,0x104);
      }
      else {
        iVar1 = -(int)param_1;
        do {
          if ((iVar5 == -0x7ffffefa) || (param_1[(int)(local_10c + iVar1)] == '\0')) break;
          *param_1 = param_1[(int)(local_10c + iVar1)];
          param_1 = param_1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        pcVar3 = param_1 + -1;
        if (iVar5 != 0) {
          pcVar3 = param_1;
        }
        *pcVar3 = '\0';
      }
    }
    RegCloseKey(local_114);
    uVar4 = extraout_EDX_00;
  }
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,uVar4);
  return;
}



/* Function: FUN_0040698e */

void __fastcall FUN_0040698e(undefined4 param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX_01;
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = DAT_00408040 ^ (uint)&stack0xfffffffc;
  if ((DAT_0040840c == (HMODULE)0x0) && (DAT_00408408 == 0)) {
    memset(local_10c,0,0x104);
    iVar2 = FUN_00406892(local_10c);
    if (iVar2 != 0) {
      DAT_0040840c = LoadLibraryExA(local_10c,(HANDLE)0x0,0);
    }
    if ((DAT_0040840c != (HMODULE)0x0) ||
       (DAT_0040840c = LoadLibraryExA("hhctrl.ocx",(HANDLE)0x0,0), uVar3 = extraout_EDX,
       DAT_0040840c != (HMODULE)0x0)) goto LAB_00406a16;
  }
  else {
LAB_00406a16:
    if ((DAT_004083fc != (FARPROC)0x0) ||
       (DAT_004083fc = GetProcAddress(DAT_0040840c,(LPCSTR)0xf), uVar3 = extraout_EDX_00,
       DAT_004083fc != (FARPROC)0x0)) {
      pFVar1 = DAT_004083fc;
      (*(code *)PTR_guard_check_icall_004091a8)(param_1,param_2,0,0);
      (*pFVar1)();
      uVar3 = extraout_EDX_01;
      goto LAB_00406a53;
    }
  }
  DAT_00408408 = 1;
LAB_00406a53:
  FUN_00406f80(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00406a6a */

/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */

DWORD FUN_00406a6a(void)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  SHELLEXECUTEINFOW local_268;
  DWORD local_22c;
  wchar_t local_228 [266];
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00407850;
  uStack_c = 0x406a79;
  local_22c = 0;
  memset(&local_268,0,0x3c);
  local_8 = (undefined *)0x0;
  DVar1 = FUN_00401fbb(local_228,0x104,L"%s%s");
  local_22c = DVar1;
  if (-1 < (int)DVar1) {
    local_268.cbSize = 0x3c;
    local_268.fMask = 0;
    local_268.lpFile = local_228;
    local_268.nShow = 1;
    BVar2 = ShellExecuteExW(&local_268);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      DVar1 = DVar3 & 0xffff | 0x80070000;
      local_22c = DVar1;
      if ((int)DVar3 < 1) {
        DVar1 = DVar3;
        local_22c = DVar3;
      }
    }
  }
  local_8 = (undefined *)0xfffffffe;
  FUN_00406b3a();
  ExceptionList = local_14;
  return DVar1;
}



/* Function: FUN_00406b3a */

void FUN_00406b3a(void)

{
  return;
}



/* Function: FUN_00406b41 */

void FUN_00406b41(void)

{
  BOOL BVar1;
  FARPROC pFVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  HMODULE local_8;
  
  local_8 = (HMODULE)0x0;
  BVar1 = GetModuleHandleExA(2,"ntdll.dll",&local_8);
  if ((BVar1 != 0) && (local_8 != (HMODULE)0x0)) {
    pFVar2 = GetProcAddress(local_8,"MicrosoftTelemetryAssertTriggeredUM");
    if (pFVar2 != (FARPROC)0x0) {
      local_18 = 0;
      local_14 = 0xffffffff;
      local_10 = 0xffffffff;
      local_28 = 0xb;
      local_24 = 0x400000;
      local_c = 1;
      local_1c = 0;
      (*(code *)PTR_guard_check_icall_004091a8)(&local_28);
      (*pFVar2)();
    }
  }
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x00406fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: FUN_00406bc7 */

void * __cdecl FUN_00406bc7(size_t param_1)

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



/* Function: FUN_00406c00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00406c00(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00406edb();
  DAT_004080b8 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_004070b4(2);
  __set_app_type(iVar2);
  _DAT_00408410 = 0xffffffff;
  _DAT_00408414 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_004080cc;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_004080c0;
  FUN_00407110();
  if (DAT_00408000 == 0) {
    __setusermatherr(FUN_00407110);
  }
  FUN_00407317();
  return 0;
}



/* Function: FUN_00406c70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406c70(void)

{
  _DAT_004080bc = DAT_004080c8;
  _DAT_004080b4 =
       __getmainargs((int *)&DAT_004080a8,(char ***)&DAT_004080ac,(char ***)&DAT_004080b0,
                     DAT_004080c4,(_startupinfo *)&DAT_004080bc);
  return;
}



/* Function: entry */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int entry(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  _STARTUPINFOW local_6c;
  uint local_24;
  byte *local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  FUN_00407279();
  local_8 = &DAT_00407870;
  uStack_c = 0x406ccc;
  local_24 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = (undefined *)0x0;
  iVar7 = *(int *)((int)Self + 4);
  bVar1 = false;
  while( true ) {
    iVar4 = 0;
    LOCK();
    iVar3 = iVar7;
    if (DAT_00408418 != 0) {
      iVar4 = DAT_00408418;
      iVar3 = DAT_00408418;
    }
    DAT_00408418 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_00406d15;
    if (iVar4 == iVar7) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00406d15:
  if (DAT_0040841c == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0040841c == 0) {
    DAT_0040841c = 1;
    iVar7 = FUN_00406ea4((undefined4 *)&DAT_004010dc,(undefined4 *)&DAT_004010e8);
    if (iVar7 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_004080a4 = 1;
  }
  if (DAT_0040841c == 1) {
    initterm(&DAT_004010d0,&DAT_004010d8);
    DAT_0040841c = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00408418 = 0;
    UNLOCK();
  }
  if ((DAT_00408420 != (code *)0x0) &&
     (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00408420), pcVar2 = DAT_00408420, BVar5 != 0
     )) {
    (*(code *)PTR_guard_check_icall_004091a8)(0,2,0);
    (*pcVar2)();
  }
  pbVar9 = *(byte **)_acmdln_exref;
  uVar6 = local_24;
  do {
    bVar8 = *pbVar9;
    local_20 = pbVar9;
    if (bVar8 < 0x21) {
      if (bVar8 == 0) goto LAB_00406dea;
      if (uVar6 == 0) {
        while ((bVar8 != 0 && (bVar8 < 0x21))) {
          local_20 = local_20 + 1;
          bVar8 = *local_20;
        }
LAB_00406dea:
        DAT_004080a0 = FUN_00404919(0x400000,0,(char *)local_20);
        if (DAT_004080b8 != 0) {
          if (DAT_004080a4 == 0) {
            _cexit();
          }
          ExceptionList = local_14;
          return DAT_004080a0;
        }
                    /* WARNING: Subroutine does not return */
        exit(DAT_004080a0);
      }
    }
    if (bVar8 == 0x22) {
      uVar6 = (uint)(uVar6 == 0);
      local_24 = uVar6;
    }
    iVar7 = _ismbblead((uint)bVar8);
    if (iVar7 != 0) {
      pbVar9 = pbVar9 + 1;
    }
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* Function: FUN_00406ea4 */

void __cdecl FUN_00406ea4(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_004091a8)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_00406edb */

bool FUN_00406edb(void)

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



/* Function: FUN_00406f50 */

void __cdecl
FUN_00406f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00408040,FUN_00406f80,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00406f80 */

void __fastcall FUN_00406f80(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00408040) {
    return;
  }
  FUN_004073d7(param_1,param_2);
  return;
}



/* Function: FUN_00406f96 */

void FUN_00406f96(void)

{
                    /* WARNING: Could not recover jumptable at 0x00406f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  wcstok();
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x00406fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: malloc */

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



/* Function: _callnewh */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _callnewh(_Size);
  return iVar1;
}



/* Function: FUN_00406fd0 */

undefined4 FUN_00406fd0(int *param_1)

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



/* Function: FUN_00407020 */

undefined4 FUN_00407020(void)

{
  SetUnhandledExceptionFilter(FUN_00406fd0);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00407040 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00407040(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_004070b4 */

undefined4 __cdecl FUN_004070b4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00407040(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x004070f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00407110 */

undefined4 FUN_00407110(void)

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
  
  pcStack_10 = FUN_00406f50;
  local_14 = ExceptionList;
  local_c = DAT_00408040 ^ 0x4078b0;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00407240((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00407240 */

bool __cdecl FUN_00407240(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00407279 */

void FUN_00407279(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00408040 == 0xbb40e64e) || ((DAT_00408040 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00408040 & 0xffff0000, DAT_00408040 = local_8, uVar1 == 0)) {
      DAT_00408040 = 0xbb40e64f;
    }
  }
  DAT_00408080 = ~DAT_00408040;
  return;
}



/* Function: FUN_00407317 */

void FUN_00407317(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00407330. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00408040 ^ (uint)&param_2;
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



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040739b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* Function: FUN_004073a7 */

void __cdecl FUN_004073a7(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_004073d7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004073d7(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_004081e0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_004081e4 = &stack0x00000004;
  _DAT_00408120 = 0x10001;
  _DAT_004080d0 = 0xc0000409;
  _DAT_004080d4 = 1;
  _DAT_004080e0 = 3;
  DAT_004080e4 = 2;
  DAT_004080e8 = DAT_00408040;
  DAT_004080ec = DAT_00408080;
  uStack_c = DAT_00408040;
  uStack_8 = DAT_00408080;
  _DAT_004080dc = unaff_retaddr;
  _DAT_004081ac = in_GS;
  _DAT_004081b0 = in_FS;
  _DAT_004081b4 = in_ES;
  _DAT_004081b8 = in_DS;
  _DAT_004081bc = unaff_EDI;
  _DAT_004081c0 = unaff_ESI;
  _DAT_004081c4 = unaff_EBX;
  _DAT_004081c8 = param_2;
  _DAT_004081cc = param_1;
  _DAT_004081d0 = in_EAX;
  _DAT_004081d4 = unaff_EBP;
  DAT_004081d8 = unaff_retaddr;
  _DAT_004081dc = in_CS;
  _DAT_004081e8 = in_SS;
  FUN_004073a7((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: guard_check_icall */

/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}



/* Function: free */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x00406fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



/* Function: FUN_00407504 */

void __cdecl FUN_00407504(size_t param_1)

{
  FUN_00406bc7(param_1);
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00408040 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



