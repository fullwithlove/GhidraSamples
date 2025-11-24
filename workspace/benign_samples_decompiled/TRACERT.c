/* Function: FUN_004014c0 */

void __fastcall FUN_004014c0(undefined4 *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar3;
  WCHAR local_a8 [80];
  uint local_8;
  
  local_8 = DAT_00403040 ^ (uint)&stack0xfffffffc;
  DVar1 = GetEnvironmentVariableW(L"OutputEncoding",local_a8,0x50);
  *param_1 = 1;
  uVar3 = extraout_EDX;
  if (((DVar1 != 0) && (DVar1 < 0x4f)) &&
     (iVar2 = _wcsicmp(local_a8,L"Unicode"), uVar3 = extraout_EDX_00, iVar2 != 0)) {
    iVar2 = _wcsicmp(local_a8,L"Ansi");
    if (iVar2 == 0) {
      *param_1 = 0;
      uVar3 = extraout_EDX_01;
    }
    else {
      iVar2 = _wcsicmp(local_a8,L"UTF8");
      uVar3 = extraout_EDX_02;
      if ((iVar2 == 0) || (iVar2 = _wcsicmp(local_a8,L"UTF-8"), uVar3 = extraout_EDX_03, iVar2 == 0)
         ) {
        *param_1 = 0xfde9;
      }
    }
  }
  FUN_004027e0(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040157d */

DWORD __fastcall FUN_0040157d(FILE *param_1,undefined4 *param_2)

{
  int _FileHandle;
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  FILE *local_8;
  
  local_8 = param_1;
  _FileHandle = _fileno(param_1);
  hFile = (HANDLE)_get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    return 6;
  }
  DVar1 = GetFileType(hFile);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      DVar1 = GetLastError();
      return DVar1;
    }
  }
  else if (((DVar1 & 0xffff7fff) == 2) &&
          ((BVar2 = GetConsoleMode(hFile,(LPDWORD)&local_8), BVar2 != 0 ||
           (DVar1 = GetLastError(), DVar1 != 6)))) {
    uVar3 = 1;
    goto LAB_004015eb;
  }
  uVar3 = 0;
LAB_004015eb:
  *param_2 = uVar3;
  return 0;
}



/* Function: FUN_004015f9 */

void __fastcall FUN_004015f9(FILE *param_1,wchar_t *param_2)

{
  DWORD DVar1;
  int iVar2;
  wchar_t *pwVar3;
  SIZE_T uBytes;
  LPSTR lpMultiByteStr;
  LPSTR _Buf;
  int iVar4;
  uint _MaxCharCount;
  UINT local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 1;
  lpMultiByteStr = (LPSTR)0x0;
  fflush(param_1);
  DVar1 = FUN_0040157d(param_1,&local_c);
  if ((DVar1 != 0) || (local_c != 0)) {
    iVar4 = 0x20000;
    iVar2 = _fileno(param_1);
    local_8 = _setmode(iVar2,iVar4);
  }
  local_10 = FUN_004014c0(&local_14);
  if (local_c == 0) {
    pwVar3 = wcschr(param_2,L'\r');
    if (pwVar3 == (wchar_t *)0x0) {
      iVar2 = 0x4000;
      if (local_10 != 0) {
        iVar2 = 0x20000;
      }
    }
    else {
      iVar2 = 0x8000;
    }
    iVar4 = _fileno(param_1);
    local_8 = _setmode(iVar4,iVar2);
    if (local_10 == 0) {
      uBytes = WideCharToMultiByte(local_14,0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((uBytes != 0) &&
         (lpMultiByteStr = (LPSTR)LocalAlloc(0x40,uBytes), lpMultiByteStr != (LPSTR)0x0)) {
        WideCharToMultiByte(local_14,0,param_2,-1,lpMultiByteStr,uBytes,(LPCSTR)0x0,(LPBOOL)0x0);
        _MaxCharCount = uBytes - 1;
        _Buf = lpMultiByteStr;
        iVar2 = _fileno(param_1);
        _write(iVar2,_Buf,_MaxCharCount);
      }
      goto LAB_00401705;
    }
  }
  fwprintf(param_1,L"%ls",param_2);
LAB_00401705:
  fflush(param_1);
  iVar2 = local_8;
  iVar4 = _fileno(param_1);
  _setmode(iVar4,iVar2);
  if (lpMultiByteStr != (LPSTR)0x0) {
    LocalFree(lpMultiByteStr);
  }
  return;
}



/* Function: FUN_00401737 */

void __cdecl FUN_00401737(FILE *param_1,DWORD param_2)

{
  DWORD DVar1;
  va_list local_c;
  wchar_t *local_8;
  
  local_c = &stack0x0000000c;
  DVar1 = FormatMessageW(0x900,DAT_0040348c,param_2,0,(LPWSTR)&local_8,0,&local_c);
  if (DVar1 != 0) {
    FUN_004015f9(param_1,local_8);
    LocalFree(local_8);
  }
  return;
}



/* Function: FUN_00401784 */

void __fastcall FUN_00401784(FILE *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined *_Buf;
  int iVar3;
  uint _MaxCharCount;
  int local_10;
  int local_c;
  int local_8;
  
  DVar1 = FUN_0040157d(param_1,&local_8);
  if ((DVar1 == 0) && (local_8 == 0)) {
    iVar2 = FUN_004014c0(&local_8);
    if (iVar2 == 0) {
      if (local_8 == 0xfde9) {
        iVar2 = fgetpos(param_1,(fpos_t *)&local_10);
        if ((iVar2 == 0) && (local_10 == 0 && local_c == 0)) {
          iVar3 = 0x8000;
          iVar2 = _fileno(param_1);
          _setmode(iVar2,iVar3);
          _MaxCharCount = 3;
          _Buf = &DAT_00401168;
          iVar2 = _fileno(param_1);
          _write(iVar2,_Buf,_MaxCharCount);
        }
      }
    }
    else {
      iVar2 = fgetpos(param_1,(fpos_t *)&local_10);
      if ((iVar2 == 0) && (local_10 == 0 && local_c == 0)) {
        iVar3 = 0x20000;
        iVar2 = _fileno(param_1);
        _setmode(iVar2,iVar3);
        fwprintf(param_1,L"");
      }
    }
  }
  return;
}



/* Function: FUN_0040184c */

void __fastcall FUN_0040184c(undefined4 param_1,undefined4 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  FILE *pFVar3;
  undefined4 extraout_EDX;
  DWORD DVar4;
  undefined1 local_80c [2052];
  uint local_8;
  
  local_8 = DAT_00403040 ^ (uint)&stack0xfffffffc;
  bVar1 = false;
  if (param_3 != '\0') {
    iVar2 = GetNameInfoW(param_1,param_2,local_80c,0x401,0,0,4);
    if (iVar2 == 0) {
      bVar1 = true;
      DVar4 = 0x273a;
      pFVar3 = FUN_00402d59(1);
      FUN_00401737(pFVar3,DVar4);
    }
  }
  iVar2 = GetNameInfoW(param_1,param_2,local_80c,0x401,0,0,2);
  if (iVar2 != 0) {
    DVar4 = 0x2724;
    pFVar3 = FUN_00402d59(1);
    FUN_00401737(pFVar3,DVar4);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (bVar1) {
    DVar4 = 10000;
  }
  else {
    DVar4 = 0x273d;
  }
  pFVar3 = FUN_00402d59(1);
  FUN_00401737(pFVar3,DVar4);
  FUN_004027e0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_00401926 */

void __fastcall FUN_00401926(undefined4 param_1,char param_2)

{
  undefined4 extraout_EDX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_00403040 ^ (uint)&stack0xfffffffc;
  uStack_10 = 0;
  uStack_c = 0;
  local_18 = 2;
  local_14 = param_1;
  FUN_0040184c(&local_18,0x10,param_2);
  FUN_004027e0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_0040196b */

void __fastcall FUN_0040196b(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_8;
  
  local_8 = DAT_00403040 ^ (uint)&stack0xfffffffc;
  puVar2 = local_24;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_24[0]._0_2_ = 0x17;
  local_24[2] = *param_1;
  local_24[3] = param_1[1];
  uStack_14 = param_1[2];
  uStack_10 = param_1[3];
  FUN_0040184c(local_24,0x1c,param_2);
  FUN_004027e0(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX);
  return;
}



/* Function: FUN_004019b9 */

void __fastcall FUN_004019b9(int param_1)

{
  FILE *pFVar1;
  DWORD DVar2;
  
  if (param_1 != 0) {
    DVar2 = 0x2711;
    pFVar1 = FUN_00402d59(1);
    FUN_00401737(pFVar1,DVar2);
    return;
  }
  DVar2 = 0x2712;
  pFVar1 = FUN_00402d59(1);
  FUN_00401737(pFVar1,DVar2);
  return;
}



/* Function: FUN_004019f1 */

uint __fastcall
FUN_004019f1(ulong *param_1,int param_2,int param_3,int param_4,undefined4 param_5,uint param_6)

{
  ulong uVar1;
  FILE *pFVar2;
  uint uVar3;
  DWORD DVar4;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)0x0;
  if (param_4 == param_3 + -1) {
    DVar4 = 0x2734;
  }
  else {
    uVar1 = wcstoul(*(wchar_t **)(param_2 + 4 + param_4 * 4),&local_8,0);
    if ((((local_8 == (wchar_t *)0x0) || (*local_8 == L'\0')) || (*local_8 == L' ')) &&
       ((uVar1 != 0 && (uVar1 <= param_6)))) {
      *param_1 = uVar1;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    DVar4 = 0x2735;
  }
  pFVar2 = FUN_00402d59(1);
  uVar3 = FUN_00401737(pFVar2,DVar4);
  return uVar3 & 0xffffff00;
}



/* Function: FUN_00401a76 */

bool __fastcall
FUN_00401a76(undefined4 param_1,int param_2,void *param_3,size_t *param_4,short *param_5,
            undefined4 param_6,char param_7)

{
  short sVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c [2];
  
  local_c[0] = 0;
  *param_5 = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_2c = 4;
  local_28 = param_1;
  iVar4 = GetAddrInfoW(param_2,0,&local_2c,local_c);
  iVar6 = local_c[0];
  if (iVar4 == 0) {
    sVar2 = *(size_t *)(local_c[0] + 0x10);
    pvVar3 = *(void **)(local_c[0] + 0x18);
    *param_4 = sVar2;
    memcpy(param_3,pvVar3,sVar2);
    if (param_7 != '\0') {
      GetNameInfoW(*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x10),param_5,0x401,0,0,4);
      iVar6 = local_c[0];
    }
    FreeAddrInfoW(iVar6);
    bVar7 = true;
  }
  else {
    local_2c = 2;
    iVar4 = GetAddrInfoW(param_2,0,&local_2c,local_c);
    iVar6 = local_c[0];
    if (iVar4 == 0) {
      sVar2 = *(size_t *)(local_c[0] + 0x10);
      pvVar3 = *(void **)(local_c[0] + 0x18);
      *param_4 = sVar2;
      memcpy(param_3,pvVar3,sVar2);
      iVar4 = 0x401;
      if (*(int *)(iVar6 + 0x14) != 0) {
        param_2 = *(int *)(iVar6 + 0x14);
      }
      iVar6 = param_2 - (int)param_5;
      do {
        if ((iVar4 == -0x7ffffbfd) || (sVar1 = *(short *)(iVar6 + (int)param_5), sVar1 == 0)) break;
        *param_5 = sVar1;
        param_5 = param_5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      psVar5 = param_5 + -1;
      if (iVar4 != 0) {
        psVar5 = param_5;
      }
      bVar7 = iVar4 != 0;
      *psVar5 = 0;
      FreeAddrInfoW(local_c[0]);
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



/* Function: FUN_00401b96 */

bool __fastcall FUN_00401b96(undefined4 param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c [2];
  
  local_c[0] = 0;
  local_2c = 1;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_28 = param_1;
  iVar1 = GetAddrInfoW(param_2,0,&local_2c,local_c);
  if (iVar1 == 0) {
    memcpy(param_3,*(void **)(local_c[0] + 0x18),*(size_t *)(local_c[0] + 0x10));
  }
  return iVar1 == 0;
}



/* Function: FUN_00401bf8 */

uint __fastcall FUN_00401bf8(int *param_1,int param_2)

{
  undefined4 in_EAX;
  FILE *pFVar1;
  uint uVar2;
  DWORD DVar3;
  
  if ((*param_1 == 0) || (*param_1 == param_2)) {
    *param_1 = param_2;
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    DVar3 = 0x2740;
    pFVar1 = FUN_00402d59(1);
    uVar2 = FUN_00401737(pFVar1,DVar3);
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}



/* Function: FUN_00401c42 */

void __cdecl FUN_00401c42(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  FILE *pFVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  byte bVar6;
  ulong *puVar7;
  uint *puVar8;
  uint uVar9;
  byte bVar10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  uint unaff_EBX;
  int iVar11;
  uint uVar12;
  HANDLE unaff_EDI;
  DWORD DVar13;
  undefined4 uVar14;
  DWORD DVar15;
  uint uVar16;
  char cVar17;
  undefined4 uVar18;
  UCHAR UVar19;
  uint uVar20;
  uint uStack_a14;
  uint uStack_a10;
  undefined4 local_a0c;
  undefined1 *local_a08;
  undefined1 *puStack_a04;
  uint uStack_a00;
  ulong uStack_9fc;
  short *psStack_9f8;
  ulong local_9f4;
  undefined4 uStack_9f0;
  size_t local_9ec;
  IPAddr local_9e8;
  undefined4 auStack_9e4 [2];
  undefined1 auStack_9dc [12];
  ushort auStack_9d0 [2];
  undefined4 uStack_9cc;
  undefined1 auStack_96c [16];
  undefined1 auStack_95c [12];
  short asStack_950 [64];
  undefined1 auStack_8d0 [40];
  undefined1 auStack_8a8 [108];
  short sStack_83c;
  short asStack_820 [1030];
  uint uStack_14;
  uint local_c;
  
  local_c = DAT_00403040 ^ (uint)&uStack_a14;
  iVar11 = 0;
  local_9f4 = 0x1e;
  local_9e8 = 0;
  local_a08 = (undefined1 *)CONCAT31(local_a08._1_3_,1);
  local_9ec = 4000;
  uStack_a10 = (uint)(ushort)uStack_a10;
  local_a0c = 0;
  SetThreadUILanguage(0);
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  pFVar3 = FUN_00402d59(1);
  FUN_00401784(pFVar3);
  uVar20 = 2;
  iVar4 = Ordinal_115();
  if (iVar4 != 0) {
    DVar15 = 0x2732;
    pFVar3 = FUN_00402d59(1);
    FUN_00401737(pFVar3,DVar15);
    uVar18 = extraout_EDX;
    goto LAB_004024e3;
  }
  memset(asStack_950,0,0x80);
  memset(auStack_9d0,0,0x80);
  local_9ec = 0x80;
  local_a08 = auStack_8d0;
  local_a0c = 1;
  if (1 < param_1) {
    iVar4 = 1;
LAB_00401d2e:
    psStack_9f8 = *(short **)(param_2 + iVar4 * 4);
    if ((*psStack_9f8 == 0x2d) || (*psStack_9f8 == 0x2f)) {
      uVar1 = psStack_9f8[1];
      if (0x53 < uVar1) {
        if (uVar1 == 100) {
          uStack_a10 = uStack_a10 & 0xffffff00;
          goto LAB_00401f7e;
        }
        if (uVar1 == 0x68) {
          uVar12 = 0xff;
          puVar7 = &uStack_9fc;
LAB_00401e65:
          uVar18 = FUN_004019f1(puVar7,param_2,param_1,iVar4,psStack_9f8,uVar12);
          if ((char)uVar18 != '\0') {
            iVar4 = iVar4 + 1;
            goto LAB_00401f7e;
          }
          goto LAB_004020d0;
        }
        if (uVar1 != 0x6a) {
          if (uVar1 != 0x77) goto LAB_00401fc5;
          uVar12 = 0xffffffff;
          puVar7 = &local_9f4;
          goto LAB_00401e65;
        }
        uVar18 = FUN_00401bf8((int *)&uStack_a14,2);
        if ((char)uVar18 == '\0') goto LAB_004020d0;
        bVar6 = local_a0c._3_1_;
        uStack_a00 = (uint)local_a0c._3_1_;
        if (0x28 < uStack_a00 + 7) {
LAB_00401ff1:
          DVar15 = 0x2737;
          goto LAB_00401ff6;
        }
        puStack_a04 = local_a08;
        *(undefined2 *)(local_a08 + uStack_a00) = 899;
        local_a08[uStack_a00 + 2] = 4;
        local_9e8 = param_1 - 2;
        bVar10 = local_a0c._3_1_ + 3;
        bVar2 = SBORROW4(iVar4,local_9e8);
        iVar5 = iVar4 - local_9e8;
        while( true ) {
          local_a0c = CONCAT13(bVar10,(undefined3)local_a0c);
          if ((bVar2 == iVar5 < 0) || (**(short **)(param_2 + 4 + iVar4 * 4) == 0x2d)) break;
          if (0x28 < bVar10 + 4) goto LAB_00401ff1;
          iVar4 = iVar4 + 1;
          psStack_9f8 = *(short **)(param_2 + iVar4 * 4);
          iVar5 = RtlIpv4StringToAddressW(psStack_9f8,1,&psStack_9f8,auStack_9e4);
          if (iVar5 != 0) {
            DVar15 = 0x2736;
            goto LAB_004020bf;
          }
          *(undefined4 *)(puStack_a04 + local_a0c._3_1_) = auStack_9e4[0];
          puStack_a04[uStack_a00 + 1] = puStack_a04[uStack_a00 + 1] + '\x04';
          bVar10 = local_a0c._3_1_ + 4;
          bVar2 = SBORROW4(iVar4,local_9e8);
          iVar5 = iVar4 - local_9e8;
        }
        bVar6 = puStack_a04[uStack_a00 + 1] + bVar6;
        unaff_EBX = CONCAT13((char)(unaff_EBX >> 0x18),CONCAT12(bVar6,(short)unaff_EBX));
        puStack_a04[uStack_a00 + 1] = puStack_a04[uStack_a00 + 1] + '\x04';
        local_a0c = CONCAT13(bVar10 + 4,(undefined3)local_a0c);
        goto LAB_00401f82;
      }
      if (uVar1 == 0x53) {
        uVar18 = FUN_00401bf8((int *)&uStack_a14,0x17);
        if ((char)uVar18 == '\0') goto LAB_004020d0;
        if (iVar4 == param_1 + -1) {
          DVar15 = 0x2734;
        }
        else {
          iVar4 = iVar4 + 1;
          bVar2 = FUN_00401b96(uStack_a14,*(undefined4 *)(param_2 + iVar4 * 4),asStack_950);
          if (CONCAT31(extraout_var,bVar2) != 0) goto LAB_00401f7e;
          DVar15 = 0x273f;
        }
        goto LAB_004020bf;
      }
      if (uVar1 == 0x34) {
        iVar5 = 2;
      }
      else {
        if (uVar1 != 0x36) {
          if (uVar1 == 0x3f) goto LAB_00401d1f;
          if (uVar1 == 0x52) {
            uVar18 = FUN_00401bf8((int *)&uStack_a14,0x17);
            if ((char)uVar18 != '\0') {
              local_a0c = local_a0c | 0x10000;
              goto LAB_00401f7e;
            }
            goto LAB_004020d0;
          }
LAB_00401fc5:
          DVar15 = 0x2738;
          pFVar3 = FUN_00402d59(1);
          FUN_00401737(pFVar3,DVar15);
          goto LAB_00401fdc;
        }
        iVar5 = 0x17;
      }
      uVar18 = FUN_00401bf8((int *)&uStack_a14,iVar5);
      if ((char)uVar18 == '\0') goto LAB_004020d0;
    }
    else {
      unaff_EBX = CONCAT13(1,(int3)unaff_EBX);
      bVar2 = FUN_00401a76(uStack_a14,(int)psStack_9f8,auStack_9d0,&local_9ec,asStack_820,
                           psStack_9f8,(char)uStack_a10);
      if (!bVar2) {
        DVar15 = 0x2714;
        goto LAB_004020bf;
      }
      if (iVar4 + 1 < param_1) goto LAB_00401fdc;
    }
LAB_00401f7e:
    bVar6 = (byte)(unaff_EBX >> 0x10);
LAB_00401f82:
    iVar4 = iVar4 + 1;
    if (param_1 <= iVar4) goto code_r0x00401f8c;
    goto LAB_00401d2e;
  }
LAB_00401d1f:
  DVar15 = 0x2713;
LAB_004020bf:
  pFVar3 = FUN_00402d59(1);
  FUN_00401737(pFVar3,DVar15);
  goto LAB_004020d0;
code_r0x00401f8c:
  if ((char)(unaff_EBX >> 0x18) != '\0') {
    uVar12 = (uint)auStack_9d0[0];
    uStack_a14 = uVar12;
    if (uVar12 == 2) {
      if (bVar6 != 0) {
        *(undefined4 *)(local_a08 + bVar6) = uStack_9cc;
      }
      puStack_a04 = (undefined1 *)IcmpCreateFile();
    }
    else {
      if (asStack_950[0] == 0) {
        iVar4 = Ordinal_23(uVar12,0,0);
        if (iVar4 == -1) {
          Ordinal_111();
          DVar15 = 0x2741;
          pFVar3 = FUN_00402d59(1);
          FUN_00401737(pFVar3,DVar15);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        WSAIoctl(iVar4,0xc8000014,auStack_9dc,0x80,auStack_95c,0x80,&local_9f4,0,0);
        Ordinal_3(iVar4);
      }
      uVar12 = uStack_a14;
      puStack_a04 = (undefined1 *)Icmp6CreateFile();
    }
    if (puStack_a04 != (undefined1 *)0xffffffff) {
      uVar18 = 2;
      uVar16 = 0;
      GetNameInfoW(auStack_9d0,local_9ec,auStack_8a8,0x41);
      if (sStack_83c == 0) {
        DVar15 = 0x2733;
        pFVar3 = FUN_00402d59(1);
        FUN_00401737(pFVar3,DVar15);
      }
      else {
        DVar15 = 0x2716;
        pFVar3 = FUN_00402d59(1);
        FUN_00401737(pFVar3,DVar15);
      }
      bVar6 = (byte)uVar20;
      if ((uVar20 & 0xff) <= unaff_EBX) {
        while (bVar6 != 0) {
          DVar15 = 0x2717;
          pFVar3 = FUN_00402d59(1);
          FUN_00401737(pFVar3,DVar15);
          uVar14 = 0;
          iVar4 = 0;
          do {
            if (uVar12 != 2) {
              iVar5 = Icmp6SendEcho2(unaff_EDI,0,0,0,auStack_96c,&local_9ec);
              cVar17 = (char)uVar18;
              if (iVar5 != 0) {
                puVar8 = &DAT_00403500;
                if (DAT_0040351c == 0) {
                  FUN_004019b9(DAT_00403520);
                  if (iVar4 == 2) {
                    FUN_0040196b((undefined4 *)((int)&DAT_00403504 + 2),(char)uVar18);
                    goto LAB_004023e3;
                  }
                }
                else {
                  DVar15 = DAT_0040351c;
                  if (DAT_0040351c != 0x2b05) goto LAB_00402445;
                  FUN_004019b9(DAT_00403520);
                  if (iVar4 == 2) {
                    FUN_0040196b((undefined4 *)((int)&DAT_00403504 + 2),(char)uVar18);
                    DVar15 = 0x273c;
                    pFVar3 = FUN_00402d59(1);
                    FUN_00401737(pFVar3,DVar15);
                    uVar9 = DAT_00403520;
                    goto LAB_0040227e;
                  }
                }
                uStack_9fc = CONCAT22((undefined2)DAT_00403508,DAT_00403504._2_2_);
                psStack_9f8 = (short *)CONCAT22(uRam0040350c,DAT_00403508._2_2_);
                local_9f4 = DAT_0040350e;
                uStack_9f0 = DAT_00403512;
                goto LAB_00402364;
              }
              DVar15 = GetLastError();
              cVar17 = (char)uVar18;
              puVar8 = (uint *)0x0;
              if (DVar15 == 0x2b02) {
                DVar15 = 0x273b;
                pFVar3 = FUN_00402d59(1);
                FUN_00401737(pFVar3,DVar15);
                UVar19 = (UCHAR)uVar20;
                uVar12 = uVar16;
                if (iVar4 == 2) {
                  if ((char)((uint)uVar14 >> 0x10) != '\0') {
                    FUN_0040196b(&uStack_9fc,(char)uVar18);
                    goto LAB_00402319;
                  }
LAB_004023ca:
                  DVar15 = 0x2728;
                  goto LAB_0040231e;
                }
                goto LAB_00402369;
              }
LAB_00402445:
              if (10999 < DVar15) {
                uVar20 = DAT_00403088;
                if (puVar8 != (uint *)0x0) {
                  FUN_0040196b((undefined4 *)((int)puVar8 + 6),cVar17);
                  DVar13 = 0x2719;
                  pFVar3 = FUN_00402d59(1);
                  FUN_00401737(pFVar3,DVar13);
                  uVar20 = DAT_00403088;
                }
                while ((uVar20 != DVar15 && (uVar20 != 0x2b2a))) {
                  iVar4 = iVar11 * 2;
                  iVar11 = iVar11 + 1;
                  uVar20 = (&DAT_00403090)[iVar4];
                }
LAB_004024a5:
                DVar15 = (&DAT_0040308c)[iVar11 * 2];
LAB_004024ac:
                pFVar3 = FUN_00402d59(1);
                FUN_00401737(pFVar3,DVar15);
                goto LAB_004024bc;
              }
LAB_0040244d:
              DVar15 = 0x271a;
              pFVar3 = FUN_00402d59(1);
              FUN_00401737(pFVar3,DVar15);
              goto LAB_004024bc;
            }
            DVar15 = IcmpSendEcho2(unaff_EDI,(HANDLE)0x0,(FARPROC)0x0,(PVOID)0x0,local_9e8,
                                   &DAT_004034c0,0x40,(PIP_OPTION_INFORMATION)&stack0xfffff5d8,
                                   &DAT_00403500,0x84,uStack_a10);
            cVar17 = (char)uVar18;
            if (DVar15 == 0) {
              uVar12 = GetLastError();
              cVar17 = (char)uVar18;
              puVar8 = (uint *)0x0;
              if (uVar12 != 0x2b02) {
LAB_004023ed:
                if (uVar12 < 11000) goto LAB_0040244d;
                uVar20 = DAT_00403088;
                if (puVar8 != (uint *)0x0) {
                  FUN_00401926(*puVar8,cVar17);
                  DVar15 = 0x2719;
                  pFVar3 = FUN_00402d59(1);
                  FUN_00401737(pFVar3,DVar15);
                  uVar20 = DAT_00403088;
                }
                while ((uVar20 != uVar12 && (uVar20 != 0x2b2a))) {
                  iVar4 = iVar11 * 2;
                  iVar11 = iVar11 + 1;
                  uVar20 = (&DAT_00403090)[iVar4];
                }
                goto LAB_004024a5;
              }
              DVar15 = 0x273b;
              pFVar3 = FUN_00402d59(1);
              FUN_00401737(pFVar3,DVar15);
              UVar19 = (UCHAR)uVar20;
              uVar12 = uVar16;
              if (iVar4 != 2) goto LAB_00402369;
              if ((char)((uint)uVar14 >> 0x10) == '\0') goto LAB_004023ca;
              FUN_00401926(local_a0c,(char)uVar18);
LAB_00402319:
              DVar15 = 0x273c;
LAB_0040231e:
              pFVar3 = FUN_00402d59(1);
              FUN_00401737(pFVar3,DVar15);
              uVar12 = uVar16;
              break;
            }
            puVar8 = &DAT_00403500;
            uVar12 = CONCAT22(DAT_00403504._2_2_,(undefined2)DAT_00403504);
            if (uVar12 == 0) {
              FUN_004019b9(CONCAT22(DAT_00403508._2_2_,(undefined2)DAT_00403508));
              if (iVar4 == 2) {
                FUN_00401926(DAT_00403500,(char)uVar18);
LAB_004023e3:
                DVar15 = 0x273c;
                goto LAB_004024ac;
              }
            }
            else {
              if (uVar12 != 0x2b05) goto LAB_004023ed;
              FUN_004019b9(CONCAT22(DAT_00403508._2_2_,(undefined2)DAT_00403508));
              if (iVar4 == 2) {
                FUN_00401926(DAT_00403500,(char)uVar18);
                DVar15 = 0x273c;
                pFVar3 = FUN_00402d59(1);
                FUN_00401737(pFVar3,DVar15);
                uVar9 = CONCAT22(DAT_00403508._2_2_,(undefined2)DAT_00403508);
LAB_0040227e:
                UVar19 = (UCHAR)uVar20;
                uVar12 = uVar16;
                if (999 < uVar9) goto LAB_00402369;
                Sleep(1000 - uVar9);
                uVar12 = uVar16;
                break;
              }
            }
            local_a0c = DAT_00403500;
LAB_00402364:
            uVar14 = 0x10000;
            uVar12 = uVar16;
LAB_00402369:
            UVar19 = (UCHAR)uVar20;
            iVar4 = iVar4 + 1;
            uVar16 = uVar12;
          } while (iVar4 < 3);
          bVar6 = UVar19 + 1;
          uVar20 = (uint)bVar6;
          uVar16 = uVar12;
          if (unaff_EBX < bVar6) break;
        }
      }
LAB_004024bc:
      DVar15 = 0x271b;
      pFVar3 = FUN_00402d59(1);
      FUN_00401737(pFVar3,DVar15);
      IcmpCloseHandle(unaff_EDI);
      Ordinal_116();
      uVar18 = extraout_EDX_01;
      goto LAB_004024e3;
    }
    GetLastError();
    DVar15 = 0x2715;
    goto LAB_004020bf;
  }
  DVar15 = 0x2739;
  pFVar3 = FUN_00402d59(1);
  FUN_00401737(pFVar3,DVar15);
LAB_00401fdc:
  DVar15 = 0x2713;
LAB_00401ff6:
  pFVar3 = FUN_00402d59(1);
  FUN_00401737(pFVar3,DVar15);
LAB_004020d0:
  Ordinal_116();
  uVar18 = extraout_EDX_00;
LAB_004024e3:
  FUN_004027e0(uStack_14 ^ (uint)&stack0xfffff5e4,uVar18);
  return;
}



/* Function: FUN_00402500 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402500(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_0040275f();
  DAT_00403158 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_004028e4(1);
  __set_app_type(iVar2);
  _DAT_00403490 = 0xffffffff;
  _DAT_00403494 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_0040316c;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_00403160;
  FUN_00402940();
  if (DAT_00403000 == 0) {
    __setusermatherr(FUN_00402940);
  }
  FUN_00402b47();
  return 0;
}



/* Function: FUN_00402570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402570(void)

{
  _DAT_0040315c = DAT_00403168;
  _DAT_00403154 =
       __wgetmainargs(&DAT_00403148,(wchar_t ***)&DAT_0040314c,(wchar_t ***)&DAT_00403150,
                      DAT_00403164,(_startupinfo *)&DAT_0040315c);
  return;
}



/* Function: FUN_004025a9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_004025a9(void)

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
    if (DAT_00403498 != 0) {
      iVar4 = DAT_00403498;
      iVar3 = DAT_00403498;
    }
    DAT_00403498 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_004025f1;
    if (iVar4 == iVar5) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_004025f1:
  if (DAT_0040349c == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0040349c == 0) {
    DAT_0040349c = 1;
    iVar5 = FUN_00402728((undefined4 *)&DAT_004010d4,(undefined4 *)&DAT_004010e0);
    if (iVar5 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_00403144 = 1;
  }
  if (DAT_0040349c == 1) {
    initterm(&DAT_004010c8,&DAT_004010d0);
    DAT_0040349c = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00403498 = 0;
    UNLOCK();
  }
  if ((DAT_004034a0 != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004034a0), pcVar2 = DAT_004034a0, BVar6 != 0
     )) {
    (*(code *)PTR_guard_check_icall_00404140)(0,2,0);
    (*pcVar2)();
  }
  DAT_00403140 = FUN_00401c42(DAT_00403148,DAT_0040314c);
  if (DAT_00403158 != 0) {
    if (DAT_00403144 == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_00403140;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_00403140);
}



/* Function: FUN_00402728 */

void __cdecl FUN_00402728(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_00404140)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_0040275f */

bool FUN_0040275f(void)

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
  FUN_00402aa9();
  FUN_004025a9();
  return;
}



/* Function: FUN_004027e0 */

void __fastcall FUN_004027e0(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00403040) {
    return;
  }
  FUN_00402c2b(param_1,param_2);
  return;
}



/* Function: FUN_00402800 */

undefined4 FUN_00402800(int *param_1)

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



/* Function: FUN_00402850 */

undefined4 FUN_00402850(void)

{
  SetUnhandledExceptionFilter(FUN_00402800);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_00402870 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00402870(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_004028e4 */

undefined4 __cdecl FUN_004028e4(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_00402870(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00402926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00402940 */

undefined4 FUN_00402940(void)

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
  
  pcStack_10 = FUN_00402bd0;
  local_14 = ExceptionList;
  local_c = DAT_00403040 ^ 0x402dd8;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_00402a70((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_00402a70 */

bool __cdecl FUN_00402a70(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_00402aa9 */

void FUN_00402aa9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00403040 == 0xbb40e64e) || ((DAT_00403040 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00403040 & 0xffff0000, DAT_00403040 = local_8, uVar1 == 0)) {
      DAT_00403040 = 0xbb40e64f;
    }
  }
  DAT_00403080 = ~DAT_00403040;
  return;
}



/* Function: FUN_00402b47 */

void FUN_00402b47(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402b60. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00403040 ^ (uint)&param_2;
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



/* Function: FUN_00402bd0 */

void __cdecl
FUN_00402bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00403040,FUN_004027e0,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00402bfb */

void __cdecl FUN_00402bfb(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00402c2b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00402c2b(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_00403280 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_00403284 = &stack0x00000004;
  _DAT_004031c0 = 0x10001;
  _DAT_00403170 = 0xc0000409;
  _DAT_00403174 = 1;
  _DAT_00403180 = 3;
  DAT_00403184 = 2;
  DAT_00403188 = DAT_00403040;
  DAT_0040318c = DAT_00403080;
  uStack_c = DAT_00403040;
  uStack_8 = DAT_00403080;
  _DAT_0040317c = unaff_retaddr;
  _DAT_0040324c = in_GS;
  _DAT_00403250 = in_FS;
  _DAT_00403254 = in_ES;
  _DAT_00403258 = in_DS;
  _DAT_0040325c = unaff_EDI;
  _DAT_00403260 = unaff_ESI;
  _DAT_00403264 = unaff_EBX;
  _DAT_00403268 = param_2;
  _DAT_0040326c = param_1;
  _DAT_00403270 = in_EAX;
  _DAT_00403274 = unaff_EBP;
  DAT_00403278 = unaff_retaddr;
  _DAT_0040327c = in_CS;
  _DAT_00403288 = in_SS;
  FUN_00402bfb((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402d3f. Too many branches */
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



/* Function: FUN_00402d59 */

FILE * __cdecl FUN_00402d59(int param_1)

{
  FILE *pFVar1;
  
  pFVar1 = __iob_func();
  return pFVar1 + param_1;
}



/* Function: __iob_func */

FILE * __cdecl __iob_func(void)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402d73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = __iob_func();
  return pFVar1;
}



/* Function: memcpy */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



