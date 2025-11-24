/* Function: FUN_00401540 */

uint __fastcall FUN_00401540(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  if ((((uVar1 == param_2[2]) && (uVar1 = param_1[3], uVar1 == param_2[3])) &&
      (uVar1 = *param_1, uVar1 == *param_2)) && (uVar1 = param_1[1], uVar1 == param_2[1])) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}



/* Function: FUN_0040156a */

undefined4 __cdecl FUN_0040156a(char *param_1,uint param_2,char *param_3)

{
  uint _Count;
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar2 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = '\0';
    }
  }
  else {
    _Count = param_2 - 1;
    uVar2 = 0;
    uVar1 = _vsnprintf(param_1,_Count,param_3,&stack0x00000010);
    if (((int)uVar1 < 0) || (_Count < uVar1)) {
      param_1[_Count] = '\0';
      uVar2 = 0x8007007a;
    }
    else if (uVar1 == _Count) {
      param_1[_Count] = '\0';
    }
  }
  return uVar2;
}



/* Function: FUN_004015cf */

undefined4 __cdecl FUN_004015cf(wchar_t *param_1,uint param_2,wchar_t *param_3)

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



/* Function: FUN_00401636 */

undefined4 __fastcall FUN_00401636(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *local_8;
  
  local_8 = param_1;
  iVar1 = RtlIpv4StringToAddressA(param_1,1,&local_8,param_2);
  uVar2 = 0x57;
  if ((-1 < iVar1) && (*local_8 == '\0')) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00401663 */

undefined4 __fastcall FUN_00401663(byte *param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *local_8;
  
  uVar5 = 0;
  local_8 = param_1;
  iVar4 = RtlIpv4StringToAddressA(param_1,1,&local_8,param_2);
  if ((-1 < iVar4) && (bVar3 = *local_8, local_8 = local_8 + 1, bVar3 == 0x2f)) {
    bVar3 = *local_8;
    while (iVar4 = isdigit((uint)bVar3), iVar4 != 0) {
      uVar5 = (*local_8 - 0x30) + uVar5 * 10;
      local_8 = local_8 + 1;
      if (0xff < uVar5) {
        return 0x57;
      }
      bVar3 = *local_8;
    }
    if ((*local_8 == 0) && (uVar5 < 0x21)) {
      local_8 = (byte *)(uVar5 & 7);
      uVar1 = (uVar5 >> 3) + 1;
      if (uVar1 < 4) {
        memset((void *)(uVar1 + param_2),0,4 - uVar1);
      }
      pbVar2 = (byte *)((uVar5 >> 3) + param_2);
      *pbVar2 = *pbVar2 & -1 << (8U - (char)local_8 & 0x1f);
      *param_3 = (char)uVar5;
      return 0;
    }
  }
  return 0x57;
}



/* Function: FUN_0040171f */

undefined4 __fastcall FUN_0040171f(byte *param_1,int param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *local_8;
  
  uVar4 = 0;
  local_8 = param_1;
  iVar3 = RtlIpv6StringToAddressA(param_1,&local_8,param_2);
  if ((-1 < iVar3) && (bVar2 = *local_8, local_8 = local_8 + 1, bVar2 == 0x2f)) {
    bVar2 = *local_8;
    while (iVar3 = isdigit((uint)bVar2), iVar3 != 0) {
      uVar4 = (*local_8 - 0x30) + uVar4 * 10;
      local_8 = local_8 + 1;
      if (0xff < uVar4) {
        return 0x57;
      }
      bVar2 = *local_8;
    }
    if ((*local_8 == 0) && (uVar4 < 0x81)) {
      local_8 = (byte *)(uVar4 >> 3);
      pbVar1 = local_8 + 1;
      if (pbVar1 < (byte *)0x10) {
        memset(pbVar1 + param_2,0,0x10 - (int)pbVar1);
      }
      if ((uVar4 & 7) != 0) {
        local_8[param_2] = local_8[param_2] & -1 << (8U - (char)(uVar4 & 7) & 0x1f);
      }
      *param_3 = (char)uVar4;
      return 0;
    }
  }
  return 0x57;
}



/* Function: FUN_004017e6 */

undefined * __fastcall FUN_004017e6(undefined4 param_1)

{
  RtlIpv6AddressToStringA(param_1,&DAT_00404448);
  FUN_0040156a(&DAT_004043f8,0x4c,"%s/%d");
  return &DAT_004043f8;
}



/* Function: FUN_0040181b */

undefined4 __fastcall FUN_0040181b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = NsiGetParameter(param_3,param_2,7,param_1,8,0,&local_8,4,0x1c);
  if (iVar1 != 0) {
    local_8 = 0;
  }
  return local_8;
}



/* Function: FUN_00401854 */

undefined4 __fastcall FUN_00401854(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  bVar1 = false;
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      if (param_3 == *(int *)(param_1 + uVar3 * 8)) {
        bVar1 = true;
        *param_4 = *(undefined4 *)(param_1 + 4 + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  uVar2 = 0x490;
  if (bVar1) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0040189a */

void __fastcall FUN_0040189a(undefined4 *param_1,int *param_2)

{
  LPVOID pvVar1;
  wchar_t *pwVar2;
  SIZE_T SVar3;
  HANDLE pvVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  LPVOID lpMem;
  DWORD DVar11;
  LPVOID local_60;
  uint local_4c;
  uint local_48;
  SIZE_T local_44;
  wchar_t *local_40;
  wchar_t local_3c [26];
  uint local_8;
  
  local_8 = DAT_00404040 ^ (uint)&stack0xfffffffc;
  lpMem = (LPVOID)0x0;
  local_44 = 0;
  local_60 = (LPVOID)0x0;
  iVar8 = 0;
  while( true ) {
    uVar10 = GetAdaptersAddresses(0,0xf,0,lpMem,&local_44);
    uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 == 0) break;
    if (lpMem != (LPVOID)0x0) {
      DVar11 = 0;
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,DVar11,lpMem);
      uVar5 = extraout_EDX;
    }
    if ((int)uVar10 != 0x6f) goto LAB_00401a67;
    DVar11 = 0;
    SVar3 = local_44;
    pvVar4 = GetProcessHeap();
    lpMem = HeapAlloc(pvVar4,DVar11,SVar3);
  }
  FUN_0040313e(1,0x2732);
  pvVar1 = lpMem;
  do {
    if (pvVar1 == (LPVOID)0x0) {
      FUN_0040313e(1,0x2733);
      *param_1 = 0;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        SVar3 = iVar8 << 3;
        DVar11 = 0;
        pvVar4 = GetProcessHeap();
        local_60 = HeapAlloc(pvVar4,DVar11,SVar3);
        iVar8 = 0;
        pvVar1 = lpMem;
        if (local_60 != (LPVOID)0x0) {
          for (; pvVar1 != (LPVOID)0x0; pvVar1 = *(LPVOID *)((int)pvVar1 + 8)) {
            *(undefined4 *)((int)local_60 + iVar8 * 8) = *(undefined4 *)((int)pvVar1 + 4);
            *(undefined4 *)((int)local_60 + iVar8 * 8 + 4) = *(undefined4 *)((int)pvVar1 + 0x44);
            iVar8 = iVar8 + 1;
          }
        }
      }
      DVar11 = 0;
      *param_2 = iVar8;
      *param_1 = local_60;
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,DVar11,lpMem);
      uVar5 = extraout_EDX_00;
LAB_00401a67:
      FUN_00403620(local_8 ^ (uint)&stack0xfffffffc,uVar5);
      return;
    }
    local_48 = *(uint *)((int)pvVar1 + 0x34);
    iVar8 = iVar8 + 1;
    uVar7 = 0;
    if (local_48 < 8) {
      if (local_48 != 0) goto LAB_00401952;
LAB_00401995:
      pwVar6 = local_3c + uVar7 * 3;
      uVar9 = uVar7 * -3 + 0x19;
      pwVar2 = (wchar_t *)(8 - uVar7);
      local_40 = pwVar2;
      do {
        FUN_004015cf(pwVar6,uVar9,L"...");
        uVar9 = uVar9 - 3;
        pwVar6 = pwVar6 + 3;
        pwVar2 = (wchar_t *)((int)pwVar2 + -1);
      } while (pwVar2 != (wchar_t *)0x0);
    }
    else {
      local_48 = 8;
LAB_00401952:
      local_40 = local_3c;
      local_4c = 0x19;
      do {
        FUN_004015cf(local_40,local_4c,L"%02x ");
        uVar7 = uVar7 + 1;
        local_4c = local_4c - 3;
        local_40 = local_40 + 3;
      } while (uVar7 < local_48);
      if (uVar7 < 8) goto LAB_00401995;
    }
    FUN_0040313e(1,0x2744);
    pvVar1 = *(LPVOID *)((int)pvVar1 + 8);
  } while( true );
}



/* Function: FUN_00401a7c */

DWORD __fastcall FUN_00401a7c(char *param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  DWORD DVar2;
  undefined3 extraout_var;
  NTSTATUS NVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int iVar6;
  ULONG local_34;
  int local_30;
  int local_2c;
  char *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  ULONG local_c;
  int local_8;
  
  local_c = 0;
  iVar5 = 0;
  local_10 = 0;
  local_28 = param_1;
  local_24 = param_2;
  DVar2 = NsiAllocateAndGetTable
                    (param_3,&DAT_00401130,0x10,&local_20,0x30,&local_1c,0x20,0,0,0,0,&local_18,1);
  if (DVar2 == 0) {
    FUN_0040313e(1,(param_3 != 1) + 0x2724);
    local_14 = 0;
    iVar6 = iVar5;
    if (local_18 != 0) {
      local_8 = 0;
      do {
        iVar6 = local_20;
        local_30 = local_1c;
        if (((((local_24 == (int *)0x0) || (*local_24 == *(int *)(iVar5 + 0x28 + local_20))) &&
             ((RtlIpv4AddressToStringA(local_20 + 4 + iVar5,&DAT_004044a0), local_28 == (char *)0x0
              || (bVar1 = FUN_004030dc(local_28,&DAT_004044a0), CONCAT31(extraout_var,bVar1) != 0)))
             ) && ((param_3 != 1 ||
                   (((NVar3 = ConvertInterfaceLuidToIndex
                                        ((NET_LUID *)(iVar6 + 0x18 + iVar5),&local_c), NVar3 == 0 &&
                     (iVar4 = FUN_00401854(param_4,param_5,local_c,&local_2c), iVar4 == 0)) &&
                    (local_2c == 1)))))) &&
           (NVar3 = ConvertLengthToIpv4Mask((uint)*(byte *)(iVar5 + 8 + iVar6),&local_34),
           NVar3 == 0)) {
          iVar4 = local_10 + 1;
          bVar1 = local_10 == 0;
          local_10 = iVar4;
          if (bVar1) {
            DVar2 = 0x2727;
            if (param_3 == 1) {
              DVar2 = 10000;
            }
            FUN_0040313e(1,DVar2);
          }
          iVar4 = 0;
          if (param_3 == 1) {
            iVar4 = FUN_0040181b(iVar6 + 0x18 + iVar5,&DAT_00401130,1);
          }
          FUN_00402f6c(*(undefined4 *)(iVar5 + 4 + iVar6),local_34,*(int *)(iVar5 + 0x28 + iVar6),
                       local_c,*(int *)(local_8 + 0xc + local_30) + iVar4,param_3 == 1);
        }
        local_8 = local_8 + 0x20;
        local_14 = local_14 + 1;
        iVar5 = iVar5 + 0x30;
        iVar6 = local_10;
      } while (local_14 < local_18);
    }
    NsiFreeTable(local_20,local_1c,0,0);
    DVar2 = (-(uint)(iVar6 == 0) & 0xfffffff5) + 0x2734;
  }
  else {
    if (param_3 == 0) {
      FUN_00403225(extraout_ECX,0x2728,DVar2);
      return 0;
    }
    if ((DVar2 != 0x490) && (DVar2 != 0x32)) {
      return DVar2;
    }
    DVar2 = 0x2740;
  }
  FUN_0040313e(1,DVar2);
  return 0;
}



/* Function: FUN_00401c67 */

void __fastcall FUN_00401c67(char *param_1,uint *param_2,int param_3,int param_4,uint param_5)

{
  char *pcVar1;
  char cVar2;
  wchar_t wVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  undefined3 extraout_var;
  NTSTATUS NVar8;
  int iVar9;
  wchar_t *pwVar10;
  undefined4 extraout_ECX;
  wchar_t *pwVar11;
  int *piVar12;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  DWORD DVar18;
  int local_58;
  uint *local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  char *local_3c;
  int local_38;
  ULONG local_34;
  wchar_t local_30 [20];
  uint local_8;
  
  local_8 = DAT_00404040 ^ (uint)&stack0xfffffffc;
  local_34 = 0;
  iVar14 = 0;
  local_54 = param_2;
  local_3c = param_1;
  uVar17 = NsiAllocateAndGetTable
                     (param_3,&DAT_00401118,0x10,&local_50,0x48,&local_4c,0x20,0,0,0,0,&local_48,1);
  uVar13 = (undefined4)((ulonglong)uVar17 >> 0x20);
  DVar18 = (DWORD)uVar17;
  if (DVar18 == 0) {
    FUN_0040313e(1,(param_3 != 1) + 0x2724);
    local_44 = 0;
    if (local_48 != 0) {
      local_38 = 0;
      iVar16 = 0;
      do {
        iVar15 = local_4c;
        iVar4 = local_50;
        if ((local_54 == (uint *)0x0) ||
           (uVar6 = FUN_00401540(local_54,(uint *)(local_50 + 0x38 + iVar16)), (char)uVar6 != '\0'))
        {
          if (local_3c != (char *)0x0) {
            pcVar7 = FUN_004017e6(iVar4 + 4 + iVar16);
            bVar5 = FUN_004030dc(local_3c,pcVar7);
            if (CONCAT31(extraout_var,bVar5) == 0) goto LAB_00401edd;
          }
          if ((param_3 != 1) ||
             (((NVar8 = ConvertInterfaceLuidToIndex((NET_LUID *)(iVar4 + 0x28 + iVar16),&local_34),
               NVar8 == 0 && (iVar9 = FUN_00401854(param_4,param_5,local_34,&local_58), iVar9 == 0))
              && (local_58 == 1)))) {
            local_40 = iVar14 + 1;
            if (iVar14 == 0) {
              FUN_0040313e(1,0x273b);
            }
            if (param_3 == 1) {
              FUN_0040181b(iVar4 + 0x28 + iVar16,&DAT_00401118,1);
            }
            pcVar7 = FUN_004017e6(iVar4 + 4 + iVar16);
            if (*(int *)(local_38 + 0xc + iVar15) == 0x7fffffff) {
              pwVar11 = local_30;
              iVar14 = 0x14;
              iVar15 = (int)&DAT_0040116c - (int)pwVar11;
              do {
                if ((iVar14 == -0x7fffffea) ||
                   (wVar3 = *(wchar_t *)(iVar15 + (int)pwVar11), wVar3 == L'\0')) break;
                *pwVar11 = wVar3;
                pwVar11 = pwVar11 + 1;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
              pwVar10 = pwVar11 + -1;
              if (iVar14 != 0) {
                pwVar10 = pwVar11;
              }
              *pwVar10 = L'\0';
            }
            else {
              FUN_004015cf(local_30,0x14,L"%u");
            }
            FUN_0040313e(1,0x273c);
            pcVar1 = pcVar7 + 1;
            do {
              cVar2 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
            if (0x18 < (uint)((int)pcVar7 - (int)pcVar1)) {
              FUN_0040313e(1,0x273f);
            }
            piVar12 = (int *)(iVar4 + 0x38 + iVar16);
            if (((piVar12[2] == DAT_00401110) && (piVar12[3] == DAT_00401114)) &&
               ((*piVar12 == DAT_00401108 && (piVar12[1] == DAT_0040110c)))) {
              FUN_0040313e(1,0x273d);
              iVar14 = local_40;
            }
            else {
              RtlIpv6AddressToStringA(piVar12,&DAT_00404448);
              FUN_0040313e(1,0x273e);
              iVar14 = local_40;
            }
          }
        }
LAB_00401edd:
        iVar16 = iVar16 + 0x48;
        local_38 = local_38 + 0x20;
        local_44 = local_44 + 1;
      } while (local_44 < local_48);
    }
    NsiFreeTable(local_50,local_4c,0,0);
    DVar18 = (-(uint)(iVar14 == 0) & 0xfffffff5) + 0x2734;
  }
  else {
    if (param_3 == 0) {
      FUN_00403225(extraout_ECX,0x2728,DVar18);
      uVar13 = extraout_EDX;
      goto LAB_00401f1e;
    }
    if ((DVar18 != 0x490) && (DVar18 != 0x32)) goto LAB_00401f1e;
    DVar18 = 0x2741;
  }
  FUN_0040313e(1,DVar18);
  uVar13 = extraout_EDX_00;
LAB_00401f1e:
  FUN_00403620(local_8 ^ (uint)&stack0xfffffffc,uVar13);
  return;
}



/* Function: FUN_00401f34 */

void __fastcall FUN_00401f34(undefined4 param_1,char *param_2)

{
  uint uVar1;
  DWORD DVar2;
  HANDLE hHeap;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 extraout_EDX_02;
  undefined8 uVar4;
  uint *lpMem;
  int local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  undefined4 local_24;
  char *local_20;
  uint *local_1c;
  uint local_18 [4];
  uint local_8;
  
  local_8 = DAT_00404040 ^ (uint)&stack0xfffffffc;
  local_30 = 0;
  local_20 = (char *)0x0;
  local_2c = 0;
  local_1c = (uint *)0x0;
  local_24 = param_1;
  uVar4 = FUN_0040189a(&local_1c,(int *)&local_2c);
  lpMem = local_1c;
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    if ((param_2 == (char *)0x0) || ((*param_2 == '*' && (param_2[1] == '\0')))) {
      local_28 = (int *)0x0;
      local_1c = (uint *)0x0;
    }
    else {
      local_28 = &local_34;
      local_1c = local_18;
      local_30 = FUN_00401636(param_2,&local_34);
      uVar4 = RtlIpv6StringToAddressA(param_2,&local_20,local_18);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (((int)uVar4 < 0) || (*local_20 != '\0')) {
        local_20 = (char *)0x57;
      }
      else {
        local_20 = (char *)0x0;
      }
    }
    uVar1 = local_2c;
    if (((DAT_004043ec == 2) || (DAT_004043ec == 0)) && (local_30 == 0)) {
      FUN_0040313e(1,0x273a);
      DVar2 = FUN_00401a7c(local_24,local_28,1,(int)lpMem,uVar1);
      uVar3 = extraout_EDX;
      if ((DVar2 != 0) ||
         (DVar2 = FUN_00401a7c(local_24,local_28,0,(int)lpMem,uVar1), uVar3 = extraout_EDX_00,
         DVar2 != 0)) goto LAB_00402077;
    }
    if (((DAT_004043ec == 0x17) || (DAT_004043ec == 0)) && (local_20 == (char *)0x0)) {
      FUN_0040313e(1,0x273a);
      uVar4 = FUN_00401c67(local_24,local_1c,1,(int)lpMem,uVar1);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) {
        FUN_00401c67(local_24,local_1c,0,(int)lpMem,uVar1);
        uVar3 = extraout_EDX_01;
      }
    }
  }
LAB_00402077:
  if (lpMem != (uint *)0x0) {
    DVar2 = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,DVar2,lpMem);
    uVar3 = extraout_EDX_02;
  }
  FUN_00403620(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004020a2 */

void __fastcall
FUN_004020a2(undefined4 *param_1,undefined1 param_2,NET_IFINDEX param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  NTSTATUS NVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  NET_LUID local_64;
  undefined4 local_5c [8];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_8;
  
  local_8 = DAT_00404040 ^ (uint)&stack0xfffffffc;
  local_64.Value = 0;
  memset(local_3c,0,0x30);
  local_38 = *param_1;
  local_14 = *param_4;
  local_34 = param_2;
  if (param_3 != 0) {
    NVar1 = ConvertInterfaceIndexToLuid(param_3,&local_64);
    uVar3 = extraout_EDX;
    if (NVar1 != 0) goto LAB_0040213b;
  }
  local_20 = local_64.Value._4_4_;
  local_18 = local_64.Value._4_4_;
  local_24 = local_64.Value._0_4_;
  local_1c = local_64.Value._0_4_;
  puVar4 = local_5c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  local_5c[3] = param_5;
  NsiSetAllParameters(param_6,1,&DAT_00401130,0x10,local_3c,0x30,local_5c,0x20);
  uVar3 = extraout_EDX_00;
LAB_0040213b:
  FUN_00403620(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_00402152 */

void __fastcall
FUN_00402152(undefined4 *param_1,undefined1 param_2,NET_IFINDEX param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  NTSTATUS NVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  NET_LUID local_94;
  undefined4 local_8c [8];
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_8;
  
  local_8 = DAT_00404040 ^ (uint)&stack0xfffffffc;
  local_94.Value._4_4_ = param_4;
  memset(local_6c,0,0x48);
  local_68 = *param_1;
  uStack_64 = param_1[1];
  uStack_60 = param_1[2];
  uStack_5c = param_1[3];
  local_34 = *(undefined4 *)local_94.Value._4_4_;
  uStack_30 = *(undefined4 *)(local_94.Value._4_4_ + 4);
  uStack_2c = *(undefined4 *)(local_94.Value._4_4_ + 8);
  uStack_28 = *(undefined4 *)(local_94.Value._4_4_ + 0xc);
  local_58 = param_2;
  if (param_3 == 0) {
    puVar4 = local_24;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_24[0]._0_2_ = 0x17;
    local_24[2] = *(undefined4 *)local_94.Value._4_4_;
    local_24[3] = *(undefined4 *)(local_94.Value._4_4_ + 4);
    uStack_14 = *(undefined4 *)(local_94.Value._4_4_ + 8);
    uStack_10 = *(undefined4 *)(local_94.Value._4_4_ + 0xc);
    uVar5 = GetBestInterfaceEx(local_24,&param_3);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) goto LAB_00402233;
  }
  NVar1 = ConvertInterfaceIndexToLuid(param_3,&local_94);
  uVar3 = extraout_EDX;
  if (NVar1 == 0) {
    local_40 = (undefined4 *)local_94.Value._4_4_;
    local_38 = (undefined4 *)local_94.Value._4_4_;
    local_44 = local_94.Value._0_4_;
    local_3c = local_94.Value._0_4_;
    puVar4 = local_8c;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    local_8c[3] = param_5;
    NsiSetAllParameters(param_6,1,&DAT_00401118,0x10,local_6c,0x48,local_8c,0x20);
    uVar3 = extraout_EDX_00;
  }
LAB_00402233:
  FUN_00403620(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_0040224a */

void __fastcall
FUN_0040224a(byte *param_1,char *param_2,char *param_3,undefined4 param_4,char param_5,
            undefined4 *param_6,NET_IFINDEX param_7)

{
  int iVar1;
  NTSTATUS NVar2;
  char *extraout_EDX;
  char *extraout_EDX_00;
  char *extraout_EDX_01;
  char *extraout_EDX_02;
  char *extraout_EDX_03;
  char *extraout_EDX_04;
  char *pcVar3;
  char *extraout_EDX_05;
  char *extraout_EDX_06;
  undefined8 uVar4;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  uchar local_2d;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  uint local_c;
  
  local_c = DAT_00404040 ^ (uint)&stack0xfffffffc;
  if ((DAT_004043ec == 2) || (pcVar3 = param_2, DAT_004043ec == 0)) {
    iVar1 = FUN_00401663(param_1,(int)&local_34,&local_2d);
    if (iVar1 != 0x57) {
      pcVar3 = extraout_EDX;
      if (iVar1 == 0) goto LAB_004022df;
      goto LAB_00402337;
    }
    iVar1 = FUN_00401636((char *)param_1,&local_34);
    pcVar3 = extraout_EDX_00;
    if (iVar1 != 0) goto LAB_00402337;
    if (param_2 == (char *)0x0) {
      local_2d = ' ';
    }
    else {
      iVar1 = FUN_00401636(param_2,&local_38);
      pcVar3 = extraout_EDX_01;
      if ((iVar1 != 0) ||
         (NVar2 = ConvertIpv4MaskToLength((ULONG)local_38,&local_2d), pcVar3 = extraout_EDX_02,
         NVar2 != 0)) goto LAB_004023a9;
    }
LAB_004022df:
    iVar1 = FUN_00401636(param_3,&local_3c);
    pcVar3 = extraout_EDX_03;
    if ((iVar1 != 0) ||
       (FUN_004020a2(&local_34,local_2d,param_7,&local_3c,param_4,1), pcVar3 = extraout_EDX_04,
       param_5 == '\0')) goto LAB_004023a9;
    uVar4 = FUN_004020a2(&local_34,local_2d,param_7,&local_3c,param_4,0);
  }
  else {
LAB_00402337:
    if (((DAT_004043ec != 0x17) && (DAT_004043ec != 0)) ||
       (iVar1 = FUN_0040171f(param_1,(int)local_2c,&local_2d), pcVar3 = extraout_EDX_05,
       iVar1 == 0x57)) goto LAB_004023a9;
    uVar4 = RtlIpv6StringToAddressA(param_3,&local_38,local_1c);
    pcVar3 = (char *)((ulonglong)uVar4 >> 0x20);
    if ((((int)uVar4 < 0) || (*local_38 != '\0')) ||
       (FUN_00402152(local_2c,local_2d,param_7,local_1c,param_4,1), pcVar3 = extraout_EDX_06,
       param_5 == '\0')) goto LAB_004023a9;
    uVar4 = FUN_00402152(local_2c,local_2d,param_7,local_1c,param_4,0);
  }
  pcVar3 = (char *)((ulonglong)uVar4 >> 0x20);
  *param_6 = (int)uVar4;
LAB_004023a9:
  FUN_00403620(local_c ^ (uint)&stack0xfffffffc,pcVar3);
  return;
}



/* Function: FUN_004023c0 */

int __fastcall
FUN_004023c0(int *param_1,char param_2,int *param_3,int *param_4,undefined4 param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_14;
  int *local_10;
  uint local_c;
  char local_5;
  
  iVar4 = 0;
  local_10 = param_1;
  local_5 = param_2;
  iVar1 = NsiAllocateAndGetTable(param_5,&DAT_00401130,0x10,&local_14,0x30,0,0,0,0,0,0,&local_c,0);
  if (iVar1 == 0) {
    uVar5 = 0;
    uVar3 = local_c;
    if (local_c != 0) {
      do {
        iVar2 = local_14 + iVar4;
        if (((((local_10 == (int *)0x0) || (uVar3 = local_c, *(int *)(iVar2 + 4) == *local_10)) &&
             ((local_5 == -1 || (*(char *)(iVar2 + 8) == local_5)))) &&
            ((param_4 == (int *)0x0 || (uVar3 = local_c, *(int *)(iVar2 + 0x28) == *param_4)))) &&
           ((param_3 == (int *)0x0 ||
            ((uVar3 = local_c, *(int *)(iVar2 + 0x18) == *param_3 &&
             (*(int *)(iVar2 + 0x1c) == param_3[1])))))) {
          iVar1 = NsiSetAllParameters(param_5,3,&DAT_00401130,0x10,iVar2,0x30,0,0);
          if ((iVar1 != 0) && (local_10 != (int *)0x0)) break;
          *param_6 = *param_6 + 1;
          uVar3 = local_c;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x30;
      } while (uVar5 < uVar3);
    }
    NsiFreeTable(local_14,0,0,0);
  }
  return iVar1;
}



/* Function: FUN_004024b9 */

int __fastcall
FUN_004024b9(int param_1,char param_2,int *param_3,int param_4,undefined4 param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  char local_5;
  
  uVar4 = 0;
  local_14 = param_1;
  local_5 = param_2;
  iVar1 = NsiAllocateAndGetTable(param_5,&DAT_00401118,0x10,&local_18,0x48,0,0,0,0,0,0,&local_10,0);
  if (iVar1 == 0) {
    if (local_10 != 0) {
      local_c = 0;
      uVar5 = local_10;
      do {
        iVar3 = local_18 + local_c;
        if (local_14 != 0) {
          iVar2 = 0;
          do {
            uVar5 = local_10;
            if (*(int *)(iVar3 + 4 + iVar2 * 4) != *(int *)(local_14 + iVar2 * 4))
            goto LAB_0040259b;
            iVar2 = iVar2 + 1;
          } while (iVar2 != 4);
        }
        if ((local_5 == -1) || (*(char *)(iVar3 + 0x14) == local_5)) {
          if (param_4 != 0) {
            iVar2 = 0;
            do {
              uVar5 = local_10;
              if (*(int *)(iVar3 + 0x38 + iVar2 * 4) != *(int *)(param_4 + iVar2 * 4))
              goto LAB_0040259b;
              iVar2 = iVar2 + 1;
            } while (iVar2 != 4);
          }
          if ((param_3 == (int *)0x0) ||
             ((*(int *)(iVar3 + 0x28) == *param_3 && (*(int *)(iVar3 + 0x2c) == param_3[1])))) {
            iVar1 = NsiSetAllParameters(param_5,3,&DAT_00401118,0x10,iVar3,0x48,0,0);
            if ((iVar1 != 0) && (local_14 != 0)) break;
            *param_6 = *param_6 + 1;
            uVar5 = local_10;
          }
        }
LAB_0040259b:
        uVar4 = uVar4 + 1;
        local_c = local_c + 0x48;
      } while (uVar4 < uVar5);
    }
    NsiFreeTable(local_18,0,0,0);
  }
  return iVar1;
}



/* Function: FUN_004025c7 */

void __fastcall
FUN_004025c7(byte *param_1,char *param_2,char *param_3,undefined4 param_4,NET_IFINDEX param_5)

{
  NTSTATUS NVar1;
  int iVar2;
  char *extraout_EDX;
  char *extraout_EDX_00;
  char *extraout_EDX_01;
  char *extraout_EDX_02;
  char *extraout_EDX_03;
  char *extraout_EDX_04;
  char *extraout_EDX_05;
  char *extraout_EDX_06;
  char *extraout_EDX_07;
  char *pcVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  NET_LUID local_58;
  char *local_4c;
  int local_48;
  undefined1 local_44 [4];
  char *local_40;
  undefined1 *local_3c;
  PNET_LUID local_38;
  int local_34;
  uchar local_2d;
  char local_2c [16];
  undefined1 local_1c [16];
  uint local_c;
  
  local_c = DAT_00404040 ^ (uint)&stack0xfffffffc;
  local_34 = 0;
  local_4c = param_3;
  if (param_5 == 0) {
    local_38 = (PNET_LUID)0x0;
    pcVar3 = param_2;
  }
  else {
    local_38 = &local_58;
    NVar1 = ConvertInterfaceIndexToLuid(param_5,local_38);
    pcVar3 = extraout_EDX;
    if (NVar1 != 0) goto LAB_0040277a;
  }
  if ((DAT_004043ec != 2) && (DAT_004043ec != 0)) goto LAB_004026f4;
  if (param_1 == (byte *)0x0) {
    local_3c = (undefined1 *)0x0;
LAB_0040262a:
    local_2d = 0xff;
LAB_0040268b:
    if (param_3 == (char *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = &local_48;
      iVar2 = FUN_00401636(param_3,piVar4);
      pcVar3 = extraout_EDX_04;
      if (iVar2 != 0) goto LAB_0040277a;
    }
    FUN_004023c0(local_3c,local_2d,(int *)&local_38->Value,piVar4,1,&local_34);
    FUN_004023c0(local_3c,local_2d,(int *)&local_38->Value,piVar4,0,&local_34);
    pcVar3 = extraout_EDX_05;
    if (param_1 != (byte *)0x0) goto LAB_0040277a;
  }
  else {
    local_3c = local_44;
    iVar2 = FUN_00401663(param_1,(int)local_44,&local_2d);
    if (iVar2 == 0x57) {
      iVar2 = FUN_00401636((char *)param_1,local_44);
      pcVar3 = extraout_EDX_01;
      if (iVar2 == 0) {
        if (param_2 == (char *)0x0) goto LAB_0040262a;
        iVar2 = FUN_00401636(param_2,&local_40);
        pcVar3 = extraout_EDX_02;
        if ((iVar2 != 0) ||
           (NVar1 = ConvertIpv4MaskToLength((ULONG)local_40,&local_2d), pcVar3 = extraout_EDX_03,
           NVar1 != 0)) goto LAB_0040277a;
        goto LAB_0040268b;
      }
    }
    else {
      pcVar3 = extraout_EDX_00;
      if (iVar2 == 0) goto LAB_0040268b;
    }
  }
LAB_004026f4:
  if ((DAT_004043ec == 0x17) || (DAT_004043ec == 0)) {
    if (param_1 == (byte *)0x0) {
      puVar5 = (undefined1 *)0x0;
      local_2d = 0xff;
    }
    else {
      puVar5 = local_1c;
      iVar2 = FUN_0040171f(param_1,(int)puVar5,&local_2d);
      pcVar3 = extraout_EDX_06;
      if (iVar2 == 0x57) goto LAB_0040277a;
    }
    if (param_3 != (char *)0x0) {
      param_3 = local_2c;
      uVar6 = RtlIpv6StringToAddressA(local_4c,&local_40,param_3);
      pcVar3 = (char *)((ulonglong)uVar6 >> 0x20);
      if (((int)uVar6 < 0) || (*local_40 != '\0')) goto LAB_0040277a;
    }
    FUN_004024b9(puVar5,local_2d,(int *)&local_38->Value,(int)param_3,1,&local_34);
    FUN_004024b9(puVar5,local_2d,(int *)&local_38->Value,(int)param_3,0,&local_34);
    pcVar3 = extraout_EDX_07;
  }
LAB_0040277a:
  FUN_00403620(local_c ^ (uint)&stack0xfffffffc,pcVar3);
  return;
}



/* Function: FUN_00402791 */

byte __fastcall FUN_00402791(wchar_t *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = Ordinal_12(param_2);
  if (iVar2 == 0) {
    bVar1 = 0;
  }
  else {
    uVar3 = FUN_004015cf(param_1,0x1f,L"%S");
    bVar1 = (byte)((uint)uVar3 >> 0x1f) ^ 1;
  }
  return bVar1;
}



/* Function: FUN_004027c5 */

void __cdecl FUN_004027c5(int param_1,undefined4 *param_2)

{
  WCHAR WVar1;
  code *pcVar2;
  undefined4 *puVar3;
  NET_IFINDEX NVar4;
  undefined2 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  FILE *_File;
  undefined4 extraout_ECX;
  undefined3 uVar13;
  undefined4 uVar11;
  int iVar12;
  char *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  DWORD DVar14;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  undefined4 unaff_EBX;
  byte *pbVar15;
  int iVar16;
  LPCWSTR pWVar17;
  byte *pbVar18;
  LPSTR lpMultiByteStr;
  undefined8 uVar19;
  DWORD DVar20;
  char *pcVar21;
  undefined1 uVar22;
  int iStack_1f4;
  LPCWSTR pWStack_1f0;
  undefined4 *local_1ec;
  char *local_1e8;
  int iStack_1e4;
  char *local_1e0;
  int local_1dc;
  NET_IFINDEX local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined1 auStack_1b8 [404];
  wchar_t awStack_24 [8];
  uint uStack_14;
  uint local_c;
  
  local_c = DAT_00404040 ^ (uint)&iStack_1f4;
  local_1bc = 1;
  iVar16 = 0;
  local_1ec = param_2;
  local_1d4 = 0;
  pbVar18 = (byte *)0x0;
  local_1cc = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1e0 = (char *)0x0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  pWStack_1f0 = (LPCWSTR)(uint)(uint3)pWStack_1f0;
  local_1e8 = (char *)0x0;
  local_1dc = 0;
  GetConsoleOutputCP();
  iVar8 = FUN_004015cf(awStack_24,0xc,L".%u");
  if (iVar8 == 0) {
    _wsetlocale(0,awStack_24);
  }
  SetThreadPreferredUILanguages(0x100,(PCZZWSTR)0x0,(PULONG)0x0);
  HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  DAT_004043f0 = *param_2;
  iVar8 = Ordinal_115(0x101,auStack_1b8);
  if (iVar8 != 0) {
    DVar20 = 0x2716;
LAB_004028a0:
    FUN_0040313e(2,DVar20);
    goto LAB_004028a8;
  }
  DVar20 = GetVersion();
  DAT_004044b8 = DVar20 >> 0x1f;
  if (param_1 < 2) goto LAB_00402e80;
  local_1ec = (undefined4 *)0x1;
  uVar11 = extraout_ECX;
  iVar8 = extraout_EDX;
LAB_004028d5:
  puVar3 = local_1ec;
  pbVar15 = *(byte **)(iStack_1f4 + (int)local_1ec * 4);
  bVar6 = *pbVar15;
  uVar13 = (undefined3)((uint)uVar11 >> 8);
  pcVar21 = (char *)CONCAT31(uVar13,bVar6);
  uVar22 = (undefined1)((uint)unaff_EBX >> 0x18);
  if ((bVar6 != 0x2d) && (bVar6 != 0x2f)) {
    if (iVar16 == 0) {
      _strupr((char *)pbVar15);
      iVar8 = *(int *)(iStack_1f4 + (int)puVar3 * 4);
      iVar16 = 0;
      do {
        iVar12 = 0;
        if (*(char *)(iVar8 + iVar16) != "PRINT"[iVar16]) goto LAB_00402928;
        iVar16 = iVar16 + 1;
      } while (iVar16 != 6);
      iVar16 = 1;
      pcVar21 = (char *)0x0;
    }
    else {
      if (pbVar18 != (byte *)0x0) {
        pcVar21 = "MASK";
        iVar8 = _stricmp((char *)pbVar15,"MASK");
        if (iVar8 == 0) {
          local_1d4 = 1;
          iVar8 = extraout_EDX_02;
        }
        else {
          pcVar21 = "METRIC";
          iVar8 = _stricmp(*(char **)(iStack_1f4 + (int)puVar3 * 4),"METRIC");
          if (iVar8 == 0) {
            local_1d0 = 1;
            iVar8 = extraout_EDX_03;
          }
          else {
            pcVar21 = "IF";
            iVar12 = _stricmp(*(char **)(iStack_1f4 + (int)puVar3 * 4),"IF");
            iVar8 = extraout_EDX_04;
            if (iVar12 == 0) {
              local_1cc = 1;
              goto LAB_0040291d;
            }
            if (local_1d4 == 0) {
              if (local_1d0 == 0) {
                if (local_1cc == 0) {
                  if (local_1e8 == (char *)0x0) {
                    pcVar21 = *(char **)(iStack_1f4 + (int)puVar3 * 4);
                    local_1e8 = pcVar21;
                    if ((*pcVar21 == '*') && (pcVar21[1] == '\0')) {
                      iStack_1e4 = 0;
                    }
                    else {
                      pcVar9 = (char *)0x0;
                      pcVar10 = strchr(pcVar21,0x2a);
                      iVar8 = extraout_EDX_07;
                      pcVar21 = pcVar9;
                      if (pcVar10 == (char *)0x0) {
                        pcVar21 = (char *)0x0;
                        pcVar9 = strchr(local_1e8,0x3f);
                        iVar8 = extraout_EDX_08;
                        if (pcVar9 == (char *)0x0) {
                          iStack_1e4 = 2;
                          goto LAB_0040291d;
                        }
                      }
                      iStack_1e4 = 1;
                    }
                    goto LAB_0040291d;
                  }
                  DVar20 = 0x2715;
                  goto LAB_004028a0;
                }
                local_1cc = 0;
                local_1d8 = strtol(*(char **)(iStack_1f4 + (int)puVar3 * 4),(char **)0x0,0);
                pcVar21 = extraout_ECX_00;
                iVar8 = extraout_EDX_06;
                if (local_1d8 == 0) {
                  DVar20 = 0x2731;
                  goto LAB_004028a0;
                }
              }
              else {
                local_1d0 = 0;
                local_1c4 = atoi(*(char **)(iStack_1f4 + (int)puVar3 * 4));
                pcVar21 = (char *)(local_1c4 + -1);
                iVar8 = extraout_EDX_05;
                if ((char *)0x270e < pcVar21) {
                  DVar20 = 0x272d;
                  goto LAB_004028a0;
                }
              }
            }
            else {
              local_1d4 = 0;
              pcVar21 = *(char **)(iStack_1f4 + (int)puVar3 * 4);
              local_1e0 = pcVar21;
            }
          }
        }
        uVar11 = CONCAT31((int3)((uint)pcVar21 >> 8),uVar22);
        local_1ec = puVar3;
        goto LAB_00402bac;
      }
      pbVar18 = pbVar15;
      if ((*pbVar15 == 0x2a) && (pbVar15[1] == 0)) {
        pWStack_1f0 = (LPCWSTR)0x0;
      }
      else {
        pcVar21 = (char *)0x0;
        pcVar9 = strchr((char *)pbVar15,0x2a);
        iVar8 = extraout_EDX_00;
        if (pcVar9 == (char *)0x0) {
          pcVar21 = (char *)0x0;
          pcVar9 = strchr((char *)pbVar15,0x3f);
          iVar8 = extraout_EDX_01;
          if (pcVar9 == (char *)0x0) {
            pWStack_1f0 = (LPCWSTR)0x2;
            goto LAB_0040291d;
          }
        }
        pWStack_1f0 = (LPCWSTR)0x1;
      }
    }
LAB_0040291d:
    uVar11 = CONCAT31((int3)((uint)pcVar21 >> 8),uVar22);
    local_1ec = puVar3;
    goto LAB_00402bac;
  }
  pbVar15 = pbVar15 + 1;
  bVar6 = *pbVar15;
  if (bVar6 == 0) {
    uVar11 = CONCAT31(uVar13,uVar22);
    local_1ec = puVar3;
  }
  else {
    do {
      iVar8 = (int)(char)bVar6;
      iVar12 = toupper(iVar8);
      uVar5 = 2;
      if (iVar12 == 0x34) {
LAB_00402b93:
        DAT_004043ec = uVar5;
        uVar11 = CONCAT31((int3)((uint)iVar8 >> 8),(char)((uint)unaff_EBX >> 0x18));
      }
      else {
        iVar8 = 0;
        if (iVar12 == 0x36) {
          uVar5 = 0x17;
          goto LAB_00402b93;
        }
        if (iVar12 != 0x46) {
          if ((iVar12 == 0x50) && (DAT_004044b8 == iVar12 - 0x50U)) {
            local_1c8 = CONCAT31(local_1c8._1_3_,1);
            uVar5 = DAT_004043ec;
            goto LAB_00402b93;
          }
          goto LAB_00402e80;
        }
        uVar11 = 1;
        local_1dc = 1;
        unaff_EBX = 0x1000000;
      }
      pbVar15 = pbVar15 + 1;
      bVar6 = *pbVar15;
      iVar8 = extraout_EDX_09;
    } while (bVar6 != 0);
  }
  goto LAB_00402bac;
  while (iVar12 = iVar12 + 1, iVar12 != 4) {
LAB_00402928:
    iVar16 = 0;
    if (*(char *)(iVar8 + iVar12) != (&DAT_0040119c)[iVar12]) goto LAB_00402951;
  }
  iVar16 = 2;
  goto LAB_00402944;
  while (iVar16 = iVar16 + 1, iVar16 != 7) {
LAB_00402951:
    iVar12 = 0;
    if (*(char *)(iVar8 + iVar16) != "DELETE"[iVar16]) goto LAB_00402974;
  }
  iVar16 = 3;
  goto LAB_00402944;
  while (iVar12 = iVar12 + 1, iVar12 != 7) {
LAB_00402974:
    if (*(char *)(iVar8 + iVar12) != "CHANGE"[iVar12]) goto LAB_00402e80;
  }
  iVar16 = 4;
LAB_00402944:
  uVar11 = 1;
  unaff_EBX = 0x1000000;
  local_1ec = puVar3;
LAB_00402bac:
  local_1ec = (undefined4 *)((int)local_1ec + 1);
  if (param_1 <= (int)local_1ec) goto code_r0x00402bba;
  goto LAB_004028d5;
code_r0x00402bba:
  if (((char)uVar11 != '\0') &&
     (cVar7 = FUN_0040330e(), uVar11 = extraout_ECX_01, iVar8 = extraout_EDX_10, cVar7 == '\0')) {
    pWStack_1f0 = (LPCWSTR)0x0;
    lpMultiByteStr = (LPSTR)0x0;
    _File = FUN_00403b99(1);
    DVar20 = FormatMessageW(0x1100,(LPCVOID)0x0,0x2e4,0,(LPWSTR)&pWStack_1f0,0,(va_list *)0x0);
    if (DVar20 != 0) {
      iVar16 = 0x8000;
      iVar8 = _fileno(_File);
      _setmode(iVar8,iVar16);
      pWVar17 = pWStack_1f0;
      do {
        WVar1 = *pWVar17;
        pWVar17 = pWVar17 + 1;
      } while (WVar1 != L'\0');
      iVar8 = (int)pWVar17 - (int)(pWStack_1f0 + 1) >> 1;
      lpMultiByteStr = (LPSTR)LocalAlloc(0x40,iVar8 * 2);
      if (lpMultiByteStr != (LPSTR)0x0) {
        WideCharToMultiByte(1,0,pWStack_1f0,iVar8,lpMultiByteStr,iVar8 * 2,(LPCSTR)0x0,(LPBOOL)0x0);
        fprintf(_File,"%s",lpMultiByteStr);
      }
    }
    if (pWStack_1f0 != (LPCWSTR)0x0) {
      LocalFree(pWStack_1f0);
    }
    if (lpMultiByteStr != (LPSTR)0x0) {
      LocalFree(lpMultiByteStr);
    }
LAB_004028a8:
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_1dc != 0) {
    DVar20 = FUN_004025c7((byte *)0x0,(char *)0x0,(char *)0x0,uVar11,0);
    if (DVar20 == 0) {
      FUN_0040313e(1,0x2742);
      iVar8 = extraout_EDX_12;
    }
    else {
      FUN_00403225(extraout_ECX_02,0x2720,DVar20);
      iVar8 = extraout_EDX_11;
    }
  }
  NVar4 = local_1d8;
  pcVar21 = local_1e8;
  if (iVar16 == 1) {
    uVar19 = FUN_00401f34(pbVar18,local_1e8);
    iVar8 = (int)((ulonglong)uVar19 >> 0x20);
    DVar20 = (DWORD)uVar19;
    if (DVar20 == 0) goto LAB_00402e69;
    DVar14 = 0x2722;
    uVar11 = extraout_ECX_07;
  }
  else if (iVar16 == 2) {
    local_1ec = (undefined4 *)0x0;
    if ((((pbVar18 == (byte *)0x0) || (pWStack_1f0 != (LPCWSTR)0x2)) || (local_1e8 == (char *)0x0))
       || (iStack_1e4 != 2)) goto LAB_00402e80;
    DVar20 = FUN_0040224a(pbVar18,local_1e0,local_1e8,local_1c4,(char)local_1c8,&local_1ec,local_1d8
                         );
    if (DVar20 == 0) {
      if (local_1ec != (undefined4 *)0x0) {
        FUN_0040313e(2,0x2723);
        iVar8 = extraout_EDX_13;
        goto LAB_00402e69;
      }
LAB_00402e3f:
      FUN_0040313e(1,0x2742);
      iVar8 = extraout_EDX_14;
      goto LAB_00402e69;
    }
    DVar14 = 0x271e;
    uVar11 = extraout_ECX_06;
  }
  else if (iVar16 == 3) {
    if ((pWStack_1f0 == (LPCWSTR)0x1) || (pbVar18 == (byte *)0x0)) goto LAB_00402e80;
    if (pWStack_1f0 == (LPCWSTR)0x0) {
      pbVar18 = (byte *)0x0;
    }
    DVar20 = FUN_004025c7(pbVar18,local_1e0,local_1e8,0,local_1d8);
    if (DVar20 == 0) goto LAB_00402e3f;
    DVar14 = 0x271f;
    uVar11 = extraout_ECX_05;
  }
  else {
    if (iVar16 != 4) {
      if (local_1dc != 0) goto LAB_00402e69;
LAB_00402e80:
      FUN_004030b2();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_1ec = (undefined4 *)0x0;
    if (((pbVar18 == (byte *)0x0) || (local_1e8 == (char *)0x0)) ||
       ((pWStack_1f0 != (LPCWSTR)0x2 || (iStack_1e4 != 2)))) goto LAB_00402e80;
    DVar20 = FUN_004025c7(pbVar18,local_1e0,(char *)0x0,2,local_1d8);
    uVar11 = extraout_ECX_03;
    if ((DVar20 == 0) &&
       (DVar20 = FUN_0040224a(pbVar18,local_1e0,pcVar21,local_1c4,(char)local_1c8,&local_1ec,NVar4),
       uVar11 = extraout_ECX_04, DVar20 == 0)) goto LAB_00402e3f;
    DVar14 = 0x2721;
  }
  FUN_00403225(uVar11,DVar14,DVar20);
  iVar8 = extraout_EDX_15;
LAB_00402e69:
  FUN_00403620(uStack_14 ^ (uint)&stack0xfffffe04,iVar8);
  return;
}



/* Function: FUN_00402e8c */

void __thiscall FUN_00402e8c(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *_Memory;
  size_t local_8;
  
  local_8 = 0;
  iVar1 = FUN_004015cf((wchar_t *)this,0x20,L"%x");
  if (iVar1 < 0) {
    return;
  }
  iVar1 = GetIpAddrTable(0,&local_8,1);
  if ((iVar1 != 0) && (iVar1 != 0x7a)) {
    return;
  }
  puVar2 = (uint *)malloc(local_8);
  if (puVar2 == (uint *)0x0) {
    return;
  }
  do {
    _Memory = puVar2;
    iVar1 = GetIpAddrTable(_Memory,&local_8,1);
    if (iVar1 == 0) {
      uVar3 = 0;
      if (*_Memory == 0) goto LAB_00402f57;
      puVar2 = _Memory + 1;
      goto LAB_00402f1c;
    }
    if (iVar1 != 0x7a) goto LAB_00402f57;
    puVar2 = (uint *)realloc(_Memory,local_8);
  } while (puVar2 != (uint *)0x0);
  goto LAB_00402f53;
  while( true ) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 6;
    if (*_Memory <= uVar3) break;
LAB_00402f1c:
    if (((puVar2[1] == param_1) && (*puVar2 != 0)) && ((*(byte *)((int)puVar2 + 0x16) & 1) != 0)) {
      iVar1 = Ordinal_12(*puVar2);
      if (iVar1 != 0) {
        FUN_004015cf((wchar_t *)this,0x20,L"%S");
      }
      break;
    }
  }
LAB_00402f53:
  if (_Memory != (uint *)0x0) {
LAB_00402f57:
    free(_Memory);
  }
  return;
}



/* Function: FUN_00402f6c */

void __fastcall
FUN_00402f6c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int param_5,char param_6
            )

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar3;
  wchar_t local_148 [32];
  wchar_t local_108 [32];
  undefined1 local_c8 [64];
  wchar_t local_88 [32];
  wchar_t local_48 [32];
  uint local_8;
  
  local_8 = DAT_00404040 ^ (uint)&stack0xfffffffc;
  memset(local_c8,0,0x40);
  bVar1 = FUN_00402791(local_148,param_1);
  uVar3 = extraout_EDX;
  if (bVar1 != 0) {
    bVar1 = FUN_00402791(local_88,param_3);
    uVar3 = extraout_EDX_00;
    if (bVar1 != 0) {
      bVar1 = FUN_00402791(local_108,param_2);
      uVar3 = extraout_EDX_01;
      if (bVar1 != 0) {
        FUN_00402e8c(local_c8,param_4);
        if (param_5 == -1) {
          FormatMessageW(0x8ff,(LPCVOID)0x0,0x2743,0,local_48,0x20,(va_list *)0x0);
        }
        else {
          iVar2 = FUN_004015cf(local_48,0x20,L"%u");
          uVar3 = extraout_EDX_02;
          if (iVar2 < 0) goto LAB_0040309b;
        }
        if (param_3 == 0) {
          FormatMessageW(0x8ff,(LPCVOID)0x0,0x273d,0,local_88,0x20,(va_list *)0x0);
        }
        if (param_6 == '\0') {
          FUN_0040313e(1,0x2726);
          uVar3 = extraout_EDX_04;
        }
        else {
          FUN_0040313e(1,0x271b);
          uVar3 = extraout_EDX_03;
        }
      }
    }
  }
LAB_0040309b:
  FUN_00403620(local_8 ^ (uint)&stack0xfffffffc,uVar3);
  return;
}



/* Function: FUN_004030b2 */

void FUN_004030b2(void)

{
  FUN_0040313e(2,0x272b);
  FUN_0040313e(2,0x272f);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* Function: FUN_004030dc */

bool __fastcall FUN_004030dc(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return *param_2 == '\0';
  }
  if (cVar1 == '*') {
    bVar2 = FUN_004030dc(param_1 + 1,param_2);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      if ((bool)*param_2 == bVar2) goto LAB_00403105;
LAB_0040311d:
      bVar2 = FUN_004030dc(param_1,param_2 + 1);
      if (CONCAT31(extraout_var_00,bVar2) == 0) goto LAB_00403105;
    }
    bVar2 = true;
  }
  else {
    if (cVar1 == '?') {
      if (*param_2 != '\0') goto LAB_004030fc;
    }
    else if (cVar1 == *param_2) {
LAB_004030fc:
      param_1 = param_1 + 1;
      goto LAB_0040311d;
    }
LAB_00403105:
    bVar2 = false;
  }
  return bVar2;
}



/* Function: FUN_0040313e */

DWORD __cdecl FUN_0040313e(int param_1,DWORD param_2)

{
  WCHAR WVar1;
  DWORD DVar2;
  FILE *_File;
  int iVar3;
  LPSTR lpMultiByteStr;
  LPCWSTR pWVar4;
  int _Mode;
  va_list local_c;
  LPCWSTR local_8;
  
  local_c = &stack0x0000000c;
  lpMultiByteStr = (LPSTR)0x0;
  local_8 = (LPCWSTR)0x0;
  DVar2 = FormatMessageW(0x900,(LPCVOID)0x0,param_2,0,(LPWSTR)&local_8,0,&local_c);
  if (DVar2 != 0) {
    if (local_8 == (LPCWSTR)0x0) {
      return DVar2;
    }
    _File = FUN_00403b99((param_1 == 2) + 1);
    _Mode = 0x8000;
    iVar3 = _fileno(_File);
    _setmode(iVar3,_Mode);
    pWVar4 = local_8;
    do {
      WVar1 = *pWVar4;
      pWVar4 = pWVar4 + 1;
    } while (WVar1 != L'\0');
    iVar3 = (int)pWVar4 - (int)(local_8 + 1) >> 1;
    lpMultiByteStr = (LPSTR)LocalAlloc(0x40,iVar3 * 2);
    if (lpMultiByteStr != (LPSTR)0x0) {
      WideCharToMultiByte(1,0,local_8,iVar3,lpMultiByteStr,iVar3 * 2,(LPCSTR)0x0,(LPBOOL)0x0);
      fprintf(_File,"%s",lpMultiByteStr);
    }
  }
  if (local_8 != (LPCWSTR)0x0) {
    LocalFree(local_8);
  }
  if (lpMultiByteStr != (LPSTR)0x0) {
    LocalFree(lpMultiByteStr);
  }
  return DVar2;
}



/* Function: FUN_00403225 */

DWORD __fastcall FUN_00403225(undefined4 param_1,DWORD param_2,DWORD param_3)

{
  HLOCAL hMem;
  DWORD DVar1;
  
  hMem = (HLOCAL)FUN_0040325b(param_3);
  DVar1 = FUN_0040313e(2,param_2);
  LocalFree(hMem);
  return DVar1;
}



/* Function: FUN_0040325b */

uint __cdecl FUN_0040325b(DWORD param_1)

{
  DWORD DVar1;
  va_list local_c;
  uint local_8;
  
  local_c = &stack0x00000008;
  local_8 = 0;
  DVar1 = FormatMessageW(0x1900,(LPCVOID)0x0,param_1,0,(LPWSTR)&local_8,0,&local_c);
  return -(uint)(DVar1 != 0) & local_8;
}



/* Function: FUN_00403297 */

void __fastcall FUN_00403297(DWORD param_1)

{
  BOOL BVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  PSID local_18;
  BOOL local_14;
  _SID_IDENTIFIER_AUTHORITY local_10;
  uint local_8;
  
  local_8 = DAT_00404040 ^ (uint)&stack0xfffffffc;
  local_10.Value[4] = '\0';
  local_10.Value[5] = '\x05';
  local_10.Value[0] = '\0';
  local_10.Value[1] = '\0';
  local_10.Value[2] = '\0';
  local_10.Value[3] = '\0';
  local_14 = AllocateAndInitializeSid(&local_10,'\x02',0x20,param_1,0,0,0,0,0,0,&local_18);
  uVar2 = extraout_EDX;
  if (local_14 != 0) {
    BVar1 = CheckTokenMembership((HANDLE)0x0,local_18,&local_14);
    if (BVar1 == 0) {
      local_14 = 0;
    }
    FreeSid(local_18);
    uVar2 = extraout_EDX_00;
  }
  FUN_00403620(local_8 ^ (uint)&stack0xfffffffc,uVar2);
  return;
}



/* Function: FUN_0040330e */

undefined1 FUN_0040330e(void)

{
  char cVar1;
  
  cVar1 = FUN_00403297(0x220);
  if (cVar1 == '\0') {
    cVar1 = FUN_00403297(0x22c);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



/* Function: FUN_00403340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00403340(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_0040359f();
  DAT_004040b8 = CONCAT31(extraout_var,bVar1);
  iVar2 = FUN_00403724(1);
  __set_app_type(iVar2);
  _DAT_0040448c = 0xffffffff;
  _DAT_00404490 = 0xffffffff;
  puVar3 = (undefined4 *)__p__fmode();
  *puVar3 = DAT_004040cc;
  puVar3 = (undefined4 *)__p__commode();
  *puVar3 = DAT_004040c0;
  FUN_00403780();
  if (DAT_00404000 == 0) {
    __setusermatherr(FUN_00403780);
  }
  FUN_00403987();
  return 0;
}



/* Function: FUN_004033b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004033b0(void)

{
  _DAT_004040bc = DAT_004040c8;
  _DAT_004040b4 =
       __getmainargs(&DAT_004040a8,(char ***)&DAT_004040ac,(char ***)&DAT_004040b0,DAT_004040c4,
                     (_startupinfo *)&DAT_004040bc);
  return;
}



/* Function: FUN_004033e9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_004033e9(void)

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
    if (DAT_00404494 != 0) {
      iVar4 = DAT_00404494;
      iVar3 = DAT_00404494;
    }
    DAT_00404494 = iVar3;
    UNLOCK();
    if (iVar4 == 0) goto LAB_00403431;
    if (iVar4 == iVar5) break;
    Sleep(1000);
  }
  bVar1 = true;
LAB_00403431:
  if (DAT_00404498 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_00404498 == 0) {
    DAT_00404498 = 1;
    iVar5 = FUN_00403568((undefined4 *)&DAT_004010d4,(undefined4 *)&DAT_004010e0);
    if (iVar5 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
  }
  else {
    DAT_004040a4 = 1;
  }
  if (DAT_00404498 == 1) {
    initterm(&DAT_004010c8,&DAT_004010d0);
    DAT_00404498 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00404494 = 0;
    UNLOCK();
  }
  if ((DAT_0040449c != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0040449c), pcVar2 = DAT_0040449c, BVar6 != 0
     )) {
    (*(code *)PTR_guard_check_icall_0040516c)(0,2,0);
    (*pcVar2)();
  }
  DAT_004040a0 = FUN_004027c5(DAT_004040a8,DAT_004040ac);
  if (DAT_004040b8 != 0) {
    if (DAT_004040a4 == 0) {
      _cexit();
    }
    ExceptionList = local_14;
    return DAT_004040a0;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_004040a0);
}



/* Function: FUN_00403568 */

void __cdecl FUN_00403568(undefined4 *param_1,undefined4 *param_2)

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
        (*(code *)PTR_guard_check_icall_0040516c)();
        iVar2 = (*pcVar1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* Function: FUN_0040359f */

bool FUN_0040359f(void)

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
    iVar2 = *(int *)(IMAGE_NT_HEADERS32_004000f8.Signature + IMAGE_DOS_HEADER_00400000.e_lfanew);
  }
  return iVar2 != 0;
}



/* Function: entry */

void entry(void)

{
  FUN_004038e9();
  FUN_004033e9();
  return;
}



/* Function: FUN_00403620 */

void __fastcall FUN_00403620(int param_1,undefined4 param_2)

{
  if (param_1 == DAT_00404040) {
    return;
  }
  FUN_00403a6b(param_1,param_2);
  return;
}



/* Function: FUN_00403640 */

undefined4 FUN_00403640(int *param_1)

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



/* Function: FUN_00403690 */

undefined4 FUN_00403690(void)

{
  SetUnhandledExceptionFilter(FUN_00403640);
  return 0;
}



/* Function: _XcptFilter */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004036a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* Function: FUN_004036b0 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_004036b0(void)

{
  void *local_14;
  
  ExceptionList = local_14;
  return;
}



/* Function: FUN_00403724 */

undefined4 __cdecl FUN_00403724(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  uVar3 = param_1;
  if ((pHVar1 != (HMODULE)0x0) && (iVar2 = FUN_004036b0(), iVar2 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x00403766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* Function: FUN_00403780 */

undefined4 FUN_00403780(void)

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
  
  pcStack_10 = FUN_00403a10;
  local_14 = ExceptionList;
  local_c = DAT_00404040 ^ 0x403c08;
  ExceptionList = &local_14;
  local_8 = 0;
  bVar1 = FUN_004038b0((short *)&IMAGE_DOS_HEADER_00400000);
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



/* Function: FUN_004038b0 */

bool __cdecl FUN_004038b0(short *param_1)

{
  if ((*param_1 == 0x5a4d) && (*(int *)(*(int *)(param_1 + 0x1e) + (int)param_1) == 0x4550)) {
    return (short)((int *)(*(int *)(param_1 + 0x1e) + (int)param_1))[6] == 0x10b;
  }
  return false;
}



/* Function: FUN_004038e9 */

void FUN_004038e9(void)

{
  uint uVar1;
  DWORD DVar2;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  if ((DAT_00404040 == 0xbb40e64e) || ((DAT_00404040 & 0xffff0000) == 0)) {
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
       (uVar1 = DAT_00404040 & 0xffff0000, DAT_00404040 = local_8, uVar1 == 0)) {
      DAT_00404040 = 0xbb40e64f;
    }
  }
  DAT_00404080 = ~DAT_00404040;
  return;
}



/* Function: FUN_00403987 */

void FUN_00403987(void)

{
  _controlfp(0x10000,0x30000);
  return;
}



/* Function: initterm */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x004039a0. Too many branches */
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00404040 ^ (uint)&param_2;
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



/* Function: FUN_00403a10 */

void __cdecl
FUN_00403a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00404040,FUN_00403620,param_1,param_2,param_3,param_4);
  return;
}



/* Function: FUN_00403a3b */

void __cdecl FUN_00403a3b(_EXCEPTION_POINTERS *param_1)

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



/* Function: FUN_00403a6b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00403a6b(undefined4 param_1,undefined4 param_2)

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
  
  _DAT_004041e0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x324) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)local_328 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x328) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)local_328 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x324) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_004041e4 = &stack0x00000004;
  _DAT_00404120 = 0x10001;
  _DAT_004040d0 = 0xc0000409;
  _DAT_004040d4 = 1;
  _DAT_004040e0 = 3;
  DAT_004040e4 = 2;
  DAT_004040e8 = DAT_00404040;
  DAT_004040ec = DAT_00404080;
  uStack_c = DAT_00404040;
  uStack_8 = DAT_00404080;
  _DAT_004040dc = unaff_retaddr;
  _DAT_004041ac = in_GS;
  _DAT_004041b0 = in_FS;
  _DAT_004041b4 = in_ES;
  _DAT_004041b8 = in_DS;
  _DAT_004041bc = unaff_EDI;
  _DAT_004041c0 = unaff_ESI;
  _DAT_004041c4 = unaff_EBX;
  _DAT_004041c8 = param_2;
  _DAT_004041cc = param_1;
  _DAT_004041d0 = in_EAX;
  _DAT_004041d4 = unaff_EBP;
  DAT_004041d8 = unaff_retaddr;
  _DAT_004041dc = in_CS;
  _DAT_004041e8 = in_SS;
  FUN_00403a3b((_EXCEPTION_POINTERS *)&PTR_DAT_00401000);
  return;
}



/* Function: except_handler4_common */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x00403b7f. Too many branches */
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



/* Function: FUN_00403b99 */

FILE * __cdecl FUN_00403b99(int param_1)

{
  FILE *pFVar1;
  
  pFVar1 = __iob_func();
  return pFVar1 + param_1;
}



/* Function: __iob_func */

FILE * __cdecl __iob_func(void)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = __iob_func();
  return pFVar1;
}



/* Function: memset */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00403bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



